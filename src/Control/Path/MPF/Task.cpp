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
// Author: CaipirUltron                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <boost/algorithm/string.hpp>

namespace Control
{
  namespace Path
  {
    namespace MPF
    {
      using DUNE_NAMESPACES;

      struct Task: public DUNE::Control::PathController
      {
          IMC::DesiredSpeed m_speed_cmd;                 // Desired speed command(body coordinates)
          IMC::DesiredHeadingRate m_hrate_cmd;           // Desired heading rate
          IMC::TargetState m_target_state;                  // Target state
          //IMC::DesiredZ m_depth_cmd;                     // Desired depth

//          //! General structure for the mechanical state of a rigid body.
//          struct RBState
//          {
//              Matrix P;         // Inertial position
//              Matrix R;         // Inertial rotation matrix
//              Matrix dR;        // Time-derivative of the rotation matrix
//              Matrix v;         // Inertial velocity
//              Matrix body_v;    // Body velocity
//              Matrix w;         // Inertial angular velocity
//              Matrix body_w;    // Inertial angular velocity
//          };

          struct Coord
          {
              double x;
              double y;
          };

          struct ControlParams
          {
              fp32_t dt;                  // Control period
              fp64_t epsilon;             // epsilon error
              Coord k_gain;               // Control gain
              Matrix delta_inv;           // Inverse of delta matrix
              Matrix Kp;                  // Gain matrix composed for k_gain.x and k_gain.y
              double k_eta;               // Gain for MPF correction error signal
              double threshold;           // Distance threshold for starting the gamma integration.
              uint8_t faulty;
              fp64_t faulty_speed;
              std::string path_type_name; // Type of path we want to define.
              int path_type;
              bool isFollowing;           // True if the controller is trying to follow some external vehicle
              bool gamma_reached = true;   // Flag indicating if the integration of gamma has started
              //bool use_controller;
          } m_ctrl_params;

          struct ControlVariables
          {
              double gamma_ref;    // Along track desired  speed reference (longitudinal velocity)
              Matrix Pd;           // Desired path vector parametrization
              Matrix grad_Pd;      // Derivative of the path with respect to gamma
              Matrix P_ref;        // Control reference for the vehicle position
              Matrix dP_ref;       // Time-derivative of the control reference
              Matrix MPF_error;    // MPF error
              Matrix World_error;  // MPF error in world coordinates
              Matrix Eps;          // Constant MPF vector
              Matrix cmd;          // Control signal
              fp64_t gamma; 	   // Path variable or coordination state
              fp64_t gamma_dot;    // Time derivative of the path variable
              fp64_t g_err;        // MPF error correction signal
          } m_ctrl_var;

          struct PathParams
          {
              Matrix offset;        // Offset vector from the target
              double r;             // If path is a circle, r is the radius
              Coord ampl;           // If path is an ellipse, ampl.x, ampl.y are the amplitudes in the respective axes
          } m_path_params;

          struct TargetParams
          {
              std::string name;     // Name of the target vehicle
              unsigned ID;          // ID of the target vehicle in DUNE
              double tol;           // Tolerance to the end.
          } m_target_params;

          struct TargetState
          {
              Matrix Pt;                // Target inertial position.
              Matrix dPt;               // Target inertial velocity.
              Matrix Rt;                // Inertial rotation matrix.
              Coord start, end;         // Start and end points.
              double distanceTillEnd;   // Distance till the end.
          } m_target_es;

          struct VehicleState
          {
              Matrix Pv;                // Target inertial position.
              Matrix dPv;               // Target inertial velocity.
              Matrix Rv;                // Inertial rotation matrix.
          } m_state;

          //! Constructor.
          //! @param[in] name task name.
          //! @param[in] ctx context.
          Task(const std::string& name, Tasks::Context& ctx):
              DUNE::Control::PathController(name, ctx)
          {
              param("Kx Gain", m_ctrl_params.k_gain.x)
                      .defaultValue("1.0")
                      .description("Controller gain - ex");

              param("Ky Gain", m_ctrl_params.k_gain.y)
                      .defaultValue("1.0")
                      .description("Controller gain - ex");

              param("K_eta Gain", m_ctrl_params.k_eta)
                      .defaultValue("1.0")
                      .description("Controller gain for the MPF error correction signal.");

              param("Bound Epsilon", m_ctrl_params.epsilon)
                      .defaultValue("0.3")
                      .description("Bound around the path in meters");

              param("Desired Speed", m_ctrl_var.gamma_ref)
                      .defaultValue("0.3")
                      .description("Desired speed of the vehicle around the path, in m/s");

              param("Distance Threshold", m_ctrl_params.threshold)
                      .defaultValue("1.0")
                      .description("Distance threshold before starting the integration of gamma");

              param("Faulty", m_ctrl_params.faulty)
                      .defaultValue("0")
                      .description("Simulate fault");

              param("Faulty Speed", m_ctrl_params.faulty_speed)
                      .defaultValue("0.5")
                      .description("fault speed");

              param("Desired Path", m_ctrl_params.path_type_name)
                      .defaultValue("circle")
                      .description("Defines the type of path around the moving target. Can be (i) circle, (ii) ellipse");

              param("Circle Radius", m_path_params.r)
                      .defaultValue("1.0")
                      .description("Radius of the desired circle");

              param("Ellipse x-amplitude", m_path_params.ampl.x)
                      .defaultValue("1.0")
                      .description("Amplitude of the desired ellipse in the x-direction");

              param("Ellipse y-amplitude", m_path_params.ampl.y)
                      .defaultValue("1.0")
                      .description("Amplitude of the desired ellipse in the y-direction");

              param("Is it following?", m_ctrl_params.isFollowing)
                      .defaultValue("false")
                      .description("True if the target is another vehicle");

              param("Target Name", m_target_params.name)
                      .defaultValue("lauv-noptilus-1")
                      .description("Name of the target vehicle.");

//              param("Use Controller.", m_control_params.use_controller)
//                      .visibility(Tasks::Parameter::VISIBILITY_USER)
//                      .scope(Tasks::Parameter::SCOPE_MANEUVER)
//                      .defaultValue("false")
//                      .description("Use PF as path controller.");

              bind<IMC::TargetState>(this);
          }

        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {
            // parameters were set
            PathController::onUpdateParameters();

            // Necessary variables for control computation
            double temp_delta[4] = {1.0, 0.0, 0.0, m_ctrl_params.epsilon};
            Matrix delta(temp_delta, 2, 2);
            m_ctrl_params.delta_inv = inverse(delta);

            double temp_gain[4] = {m_ctrl_params.k_gain.x, 0.0, 0.0, m_ctrl_params.k_gain.y};
            Matrix gain_matrix(temp_gain, 2, 2);
            m_ctrl_params.Kp = gain_matrix;
            //m_ctrl_params.loiter_speed_const = 28.57143;

            // Initialize the path variables
            m_ctrl_var.gamma = 0.0;
            m_ctrl_var.gamma_dot = 0.0;
            m_ctrl_params.gamma_reached = true;

            // Initialize the reference variables
            double temp2Dzeros[2] = {0.0, 0.0};
            Matrix temp2DzeroVector(temp2Dzeros,2,1);

            m_ctrl_var.Pd = temp2DzeroVector;
            m_ctrl_var.grad_Pd = temp2DzeroVector;

            double tempEps[2] = {m_ctrl_params.epsilon, 0.0};
            Matrix tempEpsVector(tempEps, 2, 1);
            m_ctrl_var.Eps = tempEpsVector;
            m_ctrl_params.threshold = m_ctrl_params.threshold + m_ctrl_params.epsilon;

            // Initialize the choosen path type
            if (m_ctrl_params.path_type_name == "circle")
                m_ctrl_params.path_type = 1; // Do a circle
            else if (m_ctrl_params.path_type_name == "ellipse")
                m_ctrl_params.path_type = 2; // Do a ellipse
            else
                m_ctrl_params.path_type = 1; // Do a circle

            // Computes targetID if controller is in follower mode
            if (m_ctrl_params.isFollowing)
                m_target_params.ID = resolveSystemName(m_target_params.name);
            else
            {
                m_target_es.Pt = temp2DzeroVector;
                m_target_es.dPt = temp2DzeroVector;
            }
        }

        void
        onPathStartup(const IMC::EstimatedState& state, const TrackingState& ts)
        {
            inf("Path startup!");

            // Reset gamma here according to the objective quadrant.
            if ( ts.track_bearing > 0 )
            {
                // Northeast quadrant
                if ( ts.track_bearing < Math::c_pi/2 )
                    m_ctrl_var.gamma = -Math::c_pi/2;
                // Southeast quadrant
                else
                    m_ctrl_var.gamma = 0;
            }
            else
            {
                // Nortwest quadrant
                if ( ts.track_bearing > -Math::c_pi/2 )
                    m_ctrl_var.gamma = Math::c_pi;
                // Southwest quadrant
                else
                    m_ctrl_var.gamma = Math::c_pi/2;
            }
            m_ctrl_var.gamma_dot = 0.0;
            m_ctrl_params.gamma_reached = true;

            // If controller is not in Follow Mode, target is stationary at the end point.
            if (!m_ctrl_params.isFollowing)
            {
                double tempPt[2] = {ts.end.x,ts.end.y};
                Matrix tempPtVec(tempPt, 2, 1);
                m_target_es.Pt= tempPtVec;

                double tempdPt[2] = {0, 0};
                Matrix tempdPtVec(tempdPt, 2, 1);
                m_target_es.dPt= tempdPtVec;

                //m_target_es.distanceTillEnd = Math::norm(m_target_es.Pt.element(0,0) - ts.end.x, m_target_es.Pt.element(1,0) - ts.end.y);
            }

            // Logs
            inf("Target initial position = (%f, %f)", m_target_es.Pt.element(0,0), m_target_es.Pt.element(1,0));
        }

        //! Reserve entity identifiers.
        void
        onEntityReservation(void)
        {
        }

        //! Executes before the activation of the path.
        void
        onPathActivation(void)
        {
            // Activate controllers.
            enableControlLoops(IMC::CL_SPEED | IMC::CL_YAW_RATE);
            //enableControlLoops(IMC::CL_SPEED | IMC::CL_YAW_RATE | IMC::CL_DEPTH);

            inf("Executing MPF controller.");
        }

        //! This function computes the shape of the path we want to follow.
        void
        computePath(void)
        {
            double Pdx;
            double Pdy;

            double grad_Pdx;
            double grad_Pdy;

            switch ( m_ctrl_params.path_type )
            {
            // case is circle
            case 1:
                Pdx = m_path_params.r*std::cos(m_ctrl_var.gamma/m_path_params.r);
                Pdy = m_path_params.r*std::sin(m_ctrl_var.gamma/m_path_params.r);
                grad_Pdx = -std::sin(m_ctrl_var.gamma);
                grad_Pdy = std::cos(m_ctrl_var.gamma);
                break;
            // case is ellipse
            case 2:
                Pdx = m_path_params.ampl.x*std::cos(m_ctrl_var.gamma/m_path_params.ampl.x);
                Pdy = m_path_params.ampl.y*std::sin(m_ctrl_var.gamma/m_path_params.ampl.y);
                grad_Pdx = -std::sin(m_ctrl_var.gamma);
                grad_Pdy = std::cos(m_ctrl_var.gamma);
                break;
            // otherwise, just follow ("path" is the target location)
            default:
                Pdx = 0; Pdy = 0;
                grad_Pdx = 0; grad_Pdy = 0;
            }

            double tempPd[2] = {Pdx, Pdy};
            Matrix tempPdVec(tempPd, 2, 1);
            m_ctrl_var.Pd = tempPdVec;

            double tempGradPt[2] = {grad_Pdx, grad_Pdy};
            Matrix tempGradPtVec(tempGradPt, 2, 1);
            m_ctrl_var.grad_Pd = tempGradPtVec;
        }

        //! This function computes the vehicle state.
        void
        computeVehicleState(const IMC::EstimatedState* state)
        {
            // Compute vehicle inertial position
            double tempPv[2] = {state->x, state->y};
            Matrix tempPvVec(tempPv, 2, 1);
            m_state.Pv = tempPvVec;

            // Compute vehicle rotation matrix
            double tempRv[4] = {std::cos(state->psi), -std::sin(state->psi), std::sin(state->psi), std::cos(state->psi)};
            Matrix tempRvVec(tempRv, 2, 2);
            m_state.Rv = tempRvVec;

            inf("Vehicle position = (%f, %f)", m_state.Pv.element(0,0), m_state.Pv.element(1,0));
        }

        //! Updates the state of the path variable gamma.
        void
        updatePathVariables(const TrackingState* ts)
        {
            // If the threshoud has been reached, integrate gamma
            if ( m_ctrl_params.gamma_reached )
                // m_ctrl_var.gamma_dot = m_ctrl_var.gamma_ref;
                m_ctrl_var.gamma_dot = m_ctrl_var.gamma_ref + m_ctrl_var.g_err;

            m_ctrl_var.gamma = m_ctrl_var.gamma + ts->delta*m_ctrl_var.gamma_dot;
            inf("Gamma = %f", m_ctrl_var.gamma);
        }

        //! Estimate target velocity.
        //! For now, just get the target simulated velocity.
        //! In the future, we shall use a filter for the target position.
        void
        estimateTargetVelocity(const IMC::TargetState* target_state)
        {
            double tempdPt[2] = {target_state->vx, target_state->vy};
            Matrix tempdPtVec(tempdPt, 2, 1);
            m_target_es.dPt = tempdPtVec;
        }

        //! Consumer for a TargetState message
        void
        consume(const IMC::TargetState* target_state)
        {
            if (target_state->getSource() == m_target_params.ID)
            {
                double tempPt[2] = {target_state->x, target_state->y};
                Matrix tempPtVec(tempPt, 2, 1);
                m_target_es.Pt = tempPtVec;

                // Estimate target velocity
                estimateTargetVelocity(target_state);

                inf("Target pos = (%f, %f)", target_state->x, target_state->y);
                if ( target_state->vx != 0 && target_state->vy != 0 )
                    inf("Target vel. = (%f, %f)", target_state->vx, target_state->vy);
            }
        }

        //! Execute a path control step
        //! From base class PathController
        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
            //inf("Target position = (%f, %f)", m_target_es.Pt.element(0,0), m_target_es.Pt.element(1,0));
            //if ( m_target_es.dPt.element(0,0) != 0 && m_target_es.dPt.element(1,0) != 0 )
                //inf("Target velocity = (%f, %f)", m_target_es.dPt.element(0,0), m_target_es.dPt.element(1,0));

            // Computes the desired path
            computePath();

            // Computes actual state of the vehicle
            computeVehicleState(&state);

            // Compute the desired reference position
            m_ctrl_var.P_ref = m_target_es.Pt + m_ctrl_var.Pd;
            m_ctrl_var.dP_ref = m_target_es.dPt + m_ctrl_var.grad_Pd*m_ctrl_var.gamma_dot;

            inf("Reference = (%f, %f)", m_ctrl_var.P_ref.element(0,0), m_ctrl_var.P_ref.element(1,0));

            // Compute errors (world and local coordinates)
            m_ctrl_var.World_error = m_state.Pv - m_ctrl_var.P_ref;
            m_ctrl_var.MPF_error = transpose(m_state.Rv)*m_ctrl_var.World_error + m_ctrl_var.Eps;

            // Computes the path variables if distance is small enough
            double error_norm;
            double error_dist;
            error_norm = m_ctrl_var.MPF_error.norm_2();
            error_dist = Math::norm(m_state.Pv(0,0)-ts.end.x, m_state.Pv(1,0)-ts.end.y);
            inf("Error norm = %f", error_norm);
            inf("Distance from target = %f", error_dist);
            if ( error_norm < m_ctrl_params.threshold )
                m_ctrl_params.gamma_reached = true;

            // Compute the MPF error correction signal g_err
            Matrix etaM = -transpose(m_ctrl_var.MPF_error)*((transpose(m_state.Rv)*(m_ctrl_var.grad_Pd/m_ctrl_var.grad_Pd.norm_2())));
            double eta = etaM(0,0);
            //m_ctrl_var.g_err = -m_ctrl_params.k_eta*tanh(eta);
            m_ctrl_var.g_err = -m_ctrl_params.k_eta*m_ctrl_var.gamma_ref*eta;

            updatePathVariables(&ts);

            // Path Following controller 1: without saturation in control law
            m_ctrl_var.cmd = m_ctrl_params.delta_inv*(-m_ctrl_params.Kp*m_ctrl_var.MPF_error + transpose(m_state.Rv)*m_ctrl_var.dP_ref);

            // Path Following controller 2: with saturation in terms of tanh
            //m_ctrl_var.cmd = m_ctrl_params.delta_inv*(-m_ctrl_params.Kp*m_ctrl_var.SatMPF_error + transpose(m_state.Rv)*m_ctrl_var.dP_ref);

            // Dispatch control commands
            //m_speed_cmd.value = m_ctrl_var.cmd.element(0,0);
            m_speed_cmd.value = sat(m_ctrl_var.cmd.element(0,0), 0.0, 2.0);

            //m_hrate_cmd.value = m_ctrl_var.cmd.element(1,0);
            m_hrate_cmd.value = sat(m_ctrl_var.cmd.element(1,0), -1.0, 1.0);

//            if(m_ctrl_params.faulty && (m_ctrl_var.gamma > 50) && (m_ctrl_var.gamma < 100))
//            {
//                m_speed_cmd.value = m_ctrl_params.faulty_speed;
//                war("Faulty speed.");
//                inf("Vehicle longidudinal velocity is %f", m_ctrl_var.gamma);
//            }

            //dispatch(m_speed_cmd,Tasks::DF_LOOP_BACK);
            dispatch(m_speed_cmd);
            dispatch(m_hrate_cmd);

            // Logs
            inf("Control command = (%f, %f)", m_speed_cmd.value, m_hrate_cmd.value);
        }

        void
        loiter(const IMC::EstimatedState& state, const TrackingState& ts)
        {
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
        onMain(void)
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

//        //! Simulates target motion (hardcoded).
//        //! Currently, it simulates a target following a line
//        //! that connects the start to the end of the mission.
//        void
//        updateTargetState(const TrackingState* ts)
//        {
//            double dPtx;
//            double dPty;

//            // While it didn't reach the end...
//            if ( m_target_es.distanceTillEnd > m_target_params.tol )
//            {
//                // Simulated velocities
//                dPtx = m_target_params.simSpeed*std::cos(ts->track_bearing);
//                dPty = m_target_params.simSpeed*std::sin(ts->track_bearing);
//            }
//            else // stops integration
//            {
//                dPtx = 0;
//                dPty = 0;
//            }

//            // Integrates the simulated state (Euler method)
//            double tempPt[2] = {m_target_es.Pt.element(0,0) + ts->delta*dPtx, m_target_es.Pt.element(1,0) + ts->delta*dPty};
//            Matrix tempPtVec(tempPt, 2, 1);
//            m_target_es.Pt = tempPtVec;

//            // Update the distance to the end
//            m_target_es.distanceTillEnd = Math::norm(m_target_es.Pt.element(0,0) - ts->end.x, m_target_es.Pt.element(1,0) - ts->end.y);
//        }

//        //! Converts strings into upper case
//        static void toUpper(std::basic_string<char>& s)
//        {
//           for (std::basic_string<char>::iterator p = s.begin();
//                p != s.end(); ++p) {
//              *p = toupper(*p); // toupper is for char
//           }
//        }

      };
    }
  }
}

DUNE_TASK
