//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Matheus Reis                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace Path
  {
    namespace GotoPoint
    {
      using DUNE_NAMESPACES;

      //! Name of the system to be tracked
      std::string target;

      struct Task: public DUNE::Control::PathController
      {
        IMC::DesiredSpeed m_speed_cmd;                 // Desired speed command(body coordinates)
        IMC::DesiredHeadingRate m_hrate_cmd;           // Desired heading rate
        IMC::TargetState m_target_state;               // Target state
        //IMC::DesiredZ m_depth_cmd;                   // Desired depth
        //IMC::DeviceState target_es;                  // Target EstimatedState message

        //! Control parameters
        struct CTRL_Param
        {
            fp32_t dt;          // Control period
            fp64_t epsilon;     // epsilon error
            fp32_t kx;          // Control gain for ex
            fp32_t ky;          // Control gain for ey
            fp32_t k_rho;       // Control gain for e_rho
            fp32_t k_alpha;     // Control gain alpha
            fp32_t k_beta;      // Control gain beta
            Matrix inv_delta;   // Inverse of delta matrix
            Matrix Kp;          // Gain matrix composed for kx_gain and ky_gain
            bool isFollower;    // Checks if the controller is a follower
            std::string target; // If the controller is a follower, then specify targetVehicle to follow
            unsigned target_ID; // ID of the target
            //bool use_controller;
        } m_control_params;

        struct CTRL_State
        {
            double lat;
            double lon;
            double x;
            double y;
            double psi;
        } m_control_state;

        //! Control references
        struct CTRL_Ref
        {
            double speed;  // Along track desired  speed reference (longitudinal velocity)
            double x;      // Desired x
            double y;      // Desired y
            double z;      // Desired z - 0 for 2D case
            double vx;     // Desired vx (NED)
            double vy;     // Desired vy (NED)
            double vz;     // Desired vz (NED)
        } m_control_ref;

        //! Control variables
        struct CTRL_Var
        {
            fp64_t gamma; 		// Path variable or coordination state
            fp64_t v_cc;
            fp64_t gamma_dot;
            fp64_t gpferr;
        } m_control_var;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx)
        {
            param("Kx Gain", m_control_params.kx)
                    .defaultValue("1.0")
                    .description("Controller gain in the x-direction");

            param("Ky Gain", m_control_params.ky)
                    .defaultValue("1.0")
                    .description("Controller gain in the y-direction");

            param("K_rho Gain", m_control_params.k_rho)
                    .defaultValue("1.0")
                    .description("Controller gain in the heading");

            param("K_alpha Gain", m_control_params.k_alpha)
                    .defaultValue("1.0")
                    .description("k_alpha gain for the point tracker controller");

            param("K_beta Gain", m_control_params.k_beta)
                    .defaultValue("1.0")
                    .description("k_beta gain for the point tracker controller");

            param("Bound Epsilon", m_control_params.epsilon)
                    .defaultValue("0.3")
                    .description("Bound around the path in meters");

            param("Control Period", m_control_params.dt)
                    .defaultValue("0.1")
                    .description("Sampling period in seconds");

            param("Target System", m_control_params.target)
                    .defaultValue("lauv-noptilus-1")
                    .description("System to be followed.");

//            param("Use Controller.", use_controller)
//            .visibility(Tasks::Parameter::VISIBILITY_USER)
//            .scope(Tasks::Parameter::SCOPE_MANEUVER)
//            .defaultValue("false")
//            .description("Use PF as path controller.");

            bind<IMC::TargetState>(this);
        }

        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {
            PathController::onUpdateParameters();

            inf(DTR("My name is %s, ID %d"), getSystemName(), getSystemId());
            m_control_params.target_ID = resolveSystemName(m_control_params.target);
            if ( getSystemId() != m_control_params.target_ID )
            {
                inf("Executing controller in follower mode.");
                inf(DTR("Target name is %s, with ID %d"), m_control_params.target.c_str(), m_control_params.target_ID);
            }

            // Initialize the control states variables
            //m_control_state.x = 0.0;
            //m_control_state.y = 0.0;

            // Initialize the reference variables
            m_control_ref.x = 0.0;
            m_control_ref.y = 0.0;
            m_control_ref.z = 0.0;

            if ( m_control_params.k_rho <= 0 || m_control_params.k_beta <= 0 || m_control_params.k_rho >= m_control_params.k_alpha )
                war("Controller gains do not satisfy stability conditions.");
        }

        void
        onPathStartup(const IMC::EstimatedState& state, const TrackingState& ts)
        {
            inf("Path startup!");
            m_control_state.x = state.x;
            m_control_state.y = state.y;

            //! If I am the target, dispatch my coordinates (NED).
            if ( getSystemId() == m_control_params.target_ID )
            {
                m_target_state.x = state.x;
                m_target_state.y = state.y;
                dispatch(m_target_state);
            }

            inf("Vehicle initial pos. = (%f, %f)", m_control_state.x, m_control_state.y);
        }

        //! Reserve entity identifiers.
        void
        onEntityReservation(void)
        {
            PathController::onEntityReservation();
        }

        //! Executes before the activation of the path.
        void
        onPathActivation(void)
        {
            // Activate controllers.
            enableControlLoops(IMC::CL_SPEED | IMC::CL_YAW_RATE);
            //enableControlLoops(IMC::CL_SPEED | IMC::CL_YAW_RATE | IMC::CL_DEPTH);

            inf("Executing GotoPoint controller.");
        }

//        //! Overrides original sourceFilter method from Path Controller.
//        //! @param[in] es EstimatedState message.
//        //! @return true if the message is NOT allowed to pass.
//        bool
//        sourceFilter(const IMC::EstimatedState* es)
//        {
//            // Message is NOT allowed to pass if it is from follower to target.
//            return ( !isFromTarget(es) && getSystemId() == m_control_params.target_ID );
//        }

//        //! @returns true if the EstimatedState message is from the same Task.
//        bool
//        isFromSelf(const IMC::EstimatedState* es)
//        {
//            return ( es->getSource() == getSystemId() );
//        }

        //! Consumer for a TargetState message
        void
        consume(const IMC::TargetState* target_state)
        {
            //inf("Consuming a TargetState message.");

            if (target_state->getSource() == m_control_params.target_ID)
            {
                double x_target;
                double y_target;

                // Compute the NED coordinates of the target
//                WGS84::displacement(m_control_state.lat, m_control_state.lon, 0,
//                                    target_state->lat, target_state->lon, 0,
//                                    &x_target, &y_target);

                x_target = target_state->x;
                y_target = target_state->y;

                inf("Target coordinates are = (%f, %f)", x_target, y_target);
                m_control_ref.x = x_target;
                m_control_ref.y = y_target;
            }
        }

        //! Execute a path control step
        //! From base class PathController
        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
            //! If I am the target, dispatch my GPS coordinates (WSG84).
            if ( getSystemId() == m_control_params.target_ID )
            {
                m_control_ref.x = ts.end.x;
                m_control_ref.y = ts.end.y;

                m_target_state.x = state.x;
                m_target_state.y = state.y;

                m_target_state.lat = state.lat;
                m_target_state.lon = state.lon;

                dispatch(m_target_state);
            }

            m_control_state.lat = state.lat;
            m_control_state.lon = state.lon;
            m_control_state.x = state.x;
            m_control_state.y = state.y;
            m_control_state.psi = state.psi;

            inf("Vehicle_x = %f, Vehicle_y = %f", m_control_state.x, m_control_state.y);

            // Computes control signals from GotoPoint control.
            computeGotoPoint();

            //inf("Heading = %f, Heading ref = %f", state.psi, psi_d);
            //inf("Distance error = %f, Heading error = %f", error_rho, error_psi);
            //inf("Speed cmd = %f, Heading rate cmd = %f", m_speed_cmd.value, m_hrate_cmd.value);
            //inf("Vehicle_x = %f, Vehicle_y = %f", state.x, state.y);
            //inf("Heading = %f", state.psi);
            //inf("Goto_x = %f, Goto_y = %f", m_control_ref.x, m_control_ref.y);
            //inf("Speed = %f, Heading rate = %f", state.u, state.r);

        }

        void
        loiter(const IMC::EstimatedState& state, const TrackingState& ts)
        {
        }

        //! This function computes the control signal.
        void
        computeGotoPoint(void)
        {
            //! Control commands
            double speed_ctrl_cmd;
            double hrate_ctrl_cmd;

            //! Some important variables
            fp32_t psi_d;
            fp32_t error_rho;
            fp32_t error_psi;

            //! Compute polar error
            error_rho = Math::norm(m_control_ref.x - m_control_state.x, m_control_ref.y - m_control_state.y);
            //error_rho = std::sqrt( std::pow(m_control_ref.x - m_control_state.x,2) + std::pow(m_control_ref.y - m_control_state.y,2) );

            //! Compute yaw error
            psi_d = std::atan2(m_control_ref.y - m_control_state.y, m_control_ref.x - m_control_state.x);
            error_psi = psi_d - m_control_state.psi;

            //! Turns off the controller if the distance is small enough
            if (error_rho > m_control_params.epsilon)
            {
                speed_ctrl_cmd = m_control_params.k_rho*error_rho;
                hrate_ctrl_cmd = m_control_params.k_alpha*error_psi + m_control_params.k_beta*psi_d;
            }
            else
            {
                speed_ctrl_cmd = 0;
                hrate_ctrl_cmd = 0;
            }

//            m_speed_cmd.value = speed_ctrl_cmd;
//            m_hrate_cmd.value = hrate_ctrl_cmd;

            m_speed_cmd.value = sat(speed_ctrl_cmd, 0.0, 2.0);
            m_hrate_cmd.value = sat(hrate_ctrl_cmd, -0.5, 0.5);

            //m_speed_cmd.setSourceEntity(getEntityId());
            //m_hrate_cmd.setSourceEntity(getEntityId());

            dispatch(m_speed_cmd);
            dispatch(m_hrate_cmd);
        }

        //! Resolve entity names.
        void
        onEntityResolution(void)
        {
        }

        //! Acquire resources.
        void
        onResourceAcquisition(void)
        {
        }

        //! Initialize resources.
        void
        onResourceInitialization(void)
        {
        }

        //! Release resources.
        void
        onResourceRelease(void)
        {
        }

        //! Main loop.
        void
        onMain()
        {
            while (!stopping())
            {
                waitForMessages(1.0);
            }
        }

        //! Saturation function (for control commands)
        static double sat(double value, double min, double max)
        {
          return (value < min) ? min : (value > max) ? max : value;
        }
      };
    }
  }
}

DUNE_TASK
