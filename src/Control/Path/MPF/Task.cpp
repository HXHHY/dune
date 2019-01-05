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
          IMC::DesiredHeadingRate m_heading_cmd;         // Desired heading for the Vector Field controller
          IMC::TargetState m_target_state;               // Target state
          IMC::MPFVariables MPFVar;
//           IMC::DesiredZ m_depth_cmd;                  // Desired depth

          bool use_controller;

          struct Coord {
              fp64_t x;
              fp64_t y;
          };

          struct ControlParams {
              Coord k_gain;         // Control gain
              Matrix delta_inv;     // Inverse of delta matrix
              Matrix Kp;            // Gain matrix composed for k_gain.x and k_gain.y

              fp32_t dt;                            // Control period
              fp64_t epsilon;                       // epsilon error
              fp64_t zero_threshold = 0.001;        // Internal threshold to consider a scalar as null.
              fp64_t epsilon_w;                     // Threshold for the implementation of the RMPF.

              double max_speed;           // Maximum speed command to send to AutoPilot
              double min_speed;           // Minimum speed command to send to AutoPilot
              double max_omega;           // Maximum angular velocity command to send to AutoPilot
              double min_omega;           // Minimum angular velocity command to send to AutoPilot
              double k_eta;               // Gain for MPF correction error signal
              double dead_zone;           // Dead zone for the hyperbolic tangent on the MPF correction error signal
              double tau = 0.0001;        // Pole of the linear, first order velocity estimator
              double rho;                 // Gain for the robust MPF controller.

              std::string pathType; // Type of path we want to define
              std::string estimatorType;  // Type of estimator for the target velocity

              int path_type;              // Integer for the path type
              int estimator_type;         // Integer for the estimator type

              bool isFollowing;           // True if the controller is trying to follow some external vehicle
              bool isTargetSimulated;     // True if the target is simply the TrackingState.
              bool compVel;               // True if target velocity is being compensated
          } m_ctrl_params;

          struct ControlVariables {
              double gamma_ref;    // Along track desired  speed reference (longitudinal velocity)

              Matrix Pd;           // Desired path vector parametrization
              Matrix grad_Pd;      // Derivative of the path with respect to gamma
              Matrix P_ref;        // Control reference for the vehicle position
              Matrix dP_ref;       // Time-derivative of the control reference
              Matrix MPF_error;    // MPF error
              Matrix World_error;  // MPF error in world coordinates
              Matrix Eps;          // Constant MPF vector
              Matrix cmd;          // Control signal
              Matrix robust;       // Robustness term

              fp64_t gamma; 	   // Path variable or coordination state
              fp64_t gamma_dot;    // Time derivative of the path variable
              fp64_t g_err;        // MPF error correction signal
          } m_ctrl_var;

          struct PathParams {
              Matrix offset;        // Offset vector from the target
              Coord ampl;           // If path is an ellipse, ampl.x, ampl.y are the amplitudes in the respective axes

              double r;             // If path is a circle, r is the radius
              double lampl;         // Amplitude of the lemniscate path
              double lomega;        // Frequency of the lemniscate path

              bool make8orInf;      // True if lemnscate main axis is the y-direction (Inf form); False otherwise (8 form)
          } m_path_params;

          struct TargetParams {
              std::string name;     // Name of the target vehicle

              unsigned ID;          // ID of the target vehicle in DUNE

              double tol;           // Tolerance to the end
              double max_abs_speed; // Maximum speed for simulated target

              Coord kt_gain;        // Gains for the simulated target
              Matrix Kt;            // Gain matrix for simulated target
          } m_target_params;

          struct TargetState {
              Coord start, end;             // Start and end points
              Coord NED;                    // NED coordinates of the target (North and West)

              Matrix Pt;                    // Target inertial position
              Matrix dPt;                   // Target inertial velocity
              Matrix Rt;                    // Inertial rotation matrix
              Matrix Err;             // Target error matrix

              double distanceTillEnd;       // Distance till the end
          } m_target_es;

          struct VehicleState {
              Matrix Pv;                // Target inertial position.
              Matrix dPv;               // Target inertial velocity.
              Matrix Rv;                // Inertial rotation matrix.
              fp64_t lat;
              fp64_t lon;
              Coord NED;                // NED coordinates of the vehicle (North and West)
          } m_state;

          struct VFParams {
              double m_gain;            //Controller gain.
              double corridor;
              double entry_angle;
              double ext_gain;
              double ext_trgain;
              double time_stuck;            // Time counter to consider the controller as stuck
              double time_stuck_threshold;  // Time threshold to consider the controller as stuck

              bool ext_control;
              bool stuck;                    // Boolean to consider if controller is stuck or not
          } VF_params;

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

              param("Dead zone", m_ctrl_params.dead_zone)
                      .defaultValue("5.0")
                      .description("Dead zone for the hyperbolic tangent on the MPF error correction signal.");

              param("Bound Epsilon", m_ctrl_params.epsilon)
                      .defaultValue("1.0")
                      .description("Bound around the path in meters");

              param("Desired Speed", m_ctrl_var.gamma_ref)
                      .defaultValue("0.3")
                      .description("Desired speed of the vehicle around the path, in m/s");

              param("Maximum Speed", m_ctrl_params.max_speed)
                      .defaultValue("2.0")
                      .description("Maximum speed command to send to AutoPilot.");

              param("Minimum Speed", m_ctrl_params.min_speed)
                      .defaultValue("0.0")
                      .description("Minimum speed command to send to AutoPilot.");

              param("Maximum Ang Vel", m_ctrl_params.max_omega)
                      .defaultValue("1.0")
                      .description("Maximum angular velocity command to send to AutoPilot.");

              param("Minimum Ang Vel", m_ctrl_params.min_omega)
                      .defaultValue("-1.0")
                      .description("Minimum angular velocity command to send to AutoPilot.");

              param("Desired Path", m_ctrl_params.pathType)
                      .defaultValue("circle")
                      .description("Defines the type of path around the moving target. Can be (i) circle, (ii) ellipse, (iii) lemniscate");

              param("Circle Radius", m_path_params.r)
                      .defaultValue("15.0")
                      .description("Radius of the circle");

              param("Ellipse x-amplitude", m_path_params.ampl.x)
                      .defaultValue("15.0")
                      .description("Amplitude of the ellipse in the x-direction");

              param("Ellipse y-amplitude", m_path_params.ampl.y)
                      .defaultValue("15.0")
                      .description("Amplitude of the ellipse in the y-direction");

              param("Lemniscate amplitude", m_path_params.lampl)
                      .defaultValue("20.0")
                      .description("Amplitude of the lemniscate path.");

              param("Lemniscate frequency", m_path_params.lomega)
                      .defaultValue("1.0")
                      .description("Frequency of the lemniscate path.");

              param("Lemniscate shape", m_path_params.make8orInf)
                      .defaultValue("true")
                      .description("True if lemnscate main axis is the y-direction (Inf form); False otherwise (8 form).");

              param("Is it following?", m_ctrl_params.isFollowing)
                      .defaultValue("false")
                      .description("True if the target is another vehicle.");

              param("Use MPF controller?", use_controller)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("true")
                      .description("Use MPF as path controller.");

              param("Target Name", m_target_params.name)
                      .defaultValue("lauv-noptilus-1")
                      .description("Name of the target vehicle.");

              param("Is simulating target?", m_ctrl_params.isTargetSimulated)
                      .defaultValue("true")
                      .description("True if the target is simply the TrackingState.");

              param("Maximum Target Speed", m_target_params.max_abs_speed)
                      .defaultValue("0.4")
                      .description("Maximum absolute speed of the simulated target.");

              param("Kx Target Gain", m_target_params.kt_gain.x)
                      .defaultValue("1.0")
                      .description("Gain x for simulated target.");

              param("Ky Target Gain", m_target_params.kt_gain.y)
                      .defaultValue("1.0")
                      .description("Gain y for simulated target.");

              param("Estimate Velocity?", m_ctrl_params.compVel)
                      .defaultValue("false")
                      .description("True if the target velocity is being compensated.");

              param("Velocity Estimator", m_ctrl_params.estimatorType)
                      .defaultValue("Use Local")
                      .description("Type of estimator for the target velocity.");

              param("Rho Gain", m_ctrl_params.rho)
                      .defaultValue("0.0")
                      .description("Gain for the robustness term.");

              param("Epsilon Robust", m_ctrl_params.epsilon_w)
                      .defaultValue("1.0")
                      .description("Threshold for the robustness term.");

              param("Corridor -- Width", VF_params.corridor)
                      .minimumValue("1.0")
                      .maximumValue("50.0")
                      .defaultValue("5.0")
                      .units(Units::Meter)
                      .description("Width of corridor for attack entry angle");

              param("Corridor -- Entry Angle", VF_params.entry_angle)
                      .minimumValue("2")
                      .maximumValue("45")
                      .defaultValue("15")
                      .units(Units::Degree)
                      .description("Attack angle when lateral track error equals corridor width");

              param("Extended Control -- Enabled", VF_params.ext_control)
                      .defaultValue("false")
                      .description("Enable extended (refined) corridor control");

              param("Extended Control -- Controller Gain", VF_params.ext_gain)
                      .defaultValue("1.0")
                      .description("Gain for extended control");

              param("Extended Control -- Turn Rate Gain", VF_params.ext_trgain)
                      .defaultValue("1.0")
                      .description("Turn rate gain for extended control");

              param("Time Threshold", VF_params.time_stuck_threshold)
                      .defaultValue("5.0")
                      .description("Time threshold to consider MPF controller as stuck.");

              bind<IMC::TargetState>(this);
          }

        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {
            // parameters were set
            PathController::onUpdateParameters();

            inf(DTR("My name is %s, ID %d"), getSystemName(), getSystemId());

            // Necessary variables for control computation
            double temp_delta[4] = {1.0, 0.0, 0.0, m_ctrl_params.epsilon};
            Matrix delta(temp_delta, 2, 2);
            m_ctrl_params.delta_inv = inverse(delta);

            double temp_gain[4] = {m_ctrl_params.k_gain.x, 0.0, 0.0, m_ctrl_params.k_gain.y};
            Matrix gain_matrix(temp_gain, 2, 2);
            m_ctrl_params.Kp = gain_matrix;
            //m_ctrl_params.loiter_speed_const = 28.57143;

            double target_gain[4] = {m_target_params.kt_gain.x, 0.0, 0.0, m_target_params.kt_gain.y};
            Matrix targetGain(target_gain, 2, 2);
            m_target_params.Kt = targetGain;

            // Initialize the path variables
            m_ctrl_var.gamma = 0.0;
            m_ctrl_var.gamma_dot = 0.0;

            // Initialize the reference variables
            double temp2Dzeros[2] = {0.0, 0.0};
            Matrix temp2DzeroVector(temp2Dzeros,2,1);

            m_ctrl_var.Pd = temp2DzeroVector;
            m_ctrl_var.grad_Pd = temp2DzeroVector;

            double tempEps[2] = {m_ctrl_params.epsilon, 0.0};
            Matrix tempEpsVector(tempEps, 2, 1);
            m_ctrl_var.Eps = tempEpsVector;

            // Initialize the choosen path type
            if (m_ctrl_params.pathType == "circle") {
                inf("Circular path was chosen.");
                m_ctrl_params.path_type = 1; // Do a circle
            }
            else if (m_ctrl_params.pathType == "ellipse") {
                inf("Elliptical path was chosen.");
                m_ctrl_params.path_type = 2; // Do a ellipse
            }
            else if (m_ctrl_params.pathType == "lemniscate") {
                inf("Lemniscate path was chosen.");
                m_ctrl_params.path_type = 3; // Do a lemniscate
            }
            else {
                inf("GotoPoint controller was chosen (path is a single point).");
                m_ctrl_params.path_type = 0; // Just GotoPoint
            }
            // Computes targetID and initiallizes target position
            m_target_params.ID = resolveSystemName(m_target_params.name);
            m_target_es.Pt = temp2DzeroVector;
            m_target_es.dPt = temp2DzeroVector;

            inf(DTR("Target ID is %d"), m_target_params.ID);

            // Choose the velocity estimator
            if (m_ctrl_params.compVel) {
                if (m_ctrl_params.estimatorType == "Use Local") {
                    inf("Vel. estimation: using local target velocity.");
                    m_ctrl_params.estimator_type = 1;
                }
                else if (m_ctrl_params.estimatorType == "Finite Diff") {
                    inf("Vel. estimation: finite differences chosen.");
                    m_ctrl_params.estimator_type = 2;
                }
                else if (m_ctrl_params.estimatorType == "Filter") {
                    inf("Vel. estimation: first order linear filter chosen.");
                    m_ctrl_params.estimator_type = 3;
                }
                else if (m_ctrl_params.estimatorType == "Sliding Mode") {
                    inf("Vel. estimation: sliding mode chosen.");
                    m_ctrl_params.estimator_type = 4;
                }
                else
                    m_ctrl_params.estimator_type = 1;
            }

            // Initialize VectorField parameters
            if (paramChanged(VF_params.entry_angle))
              VF_params.entry_angle = Angles::radians(VF_params.entry_angle);

            VF_params.m_gain = std::tan(VF_params.entry_angle) / VF_params.corridor;
            VF_params.time_stuck = 0.0;
        }

        //! Activates at the beginning of the path.
        void
        onPathStartup(const IMC::EstimatedState& state, const TrackingState& ts)
        {
            inf("Path startup!");
            //inf("Chosen path is ", m_ctrl_params.path_type);
            onUpdateParameters();

            // If the vehicle is the target, dispatch its coordinates.
            if ( getSystemId() == m_target_params.ID ) {
                m_target_state.x = state.x;
                m_target_state.y = state.y;
                m_target_state.lat = state.lat;
                m_target_state.lon = state.lon;
                m_target_state.vx = state.vx;
                m_target_state.vy = state.vy;
                dispatch(m_target_state);
            }

            // Reset gamma here according to the objective quadrant.
            m_ctrl_var.gamma = 0.0;
            m_ctrl_var.gamma_dot = 0.0;

            // If controller is not in Follow Mode, target is stationary at the end point.
            if (!m_ctrl_params.isFollowing) {
                double tempPt[2] = {ts.end.x, ts.end.y};
                Matrix tempPtVec(tempPt, 2, 1);
                m_target_es.Pt = tempPtVec;
            }
            // Otherwise, target starts in its initial position on the path
            else {
                double tempPt[2] = {ts.start.x, ts.start.y};
                Matrix tempPtVec(tempPt, 2, 1);
                m_target_es.Pt = tempPtVec;
            }

            //double temp2Dzeros[2] = {0.0, 0.0};
            //Matrix temp2DzeroVector(temp2Dzeros,2,1);
            //m_target_es.dPt = temp2DzeroVector;

//                if (m_ctrl_params.isTargetSimulated) {
//                double tempPt[2] = {ts.start.x, ts.start.y};
//                Matrix tempPtVec(tempPt, 2, 1);
//                m_target_es.Pt = tempPtVec;

            // Logs
            inf("Target initial position = (%f, %f)", m_target_es.Pt(0,0), m_target_es.Pt(1,0));
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
            if (!use_controller)
                return;

            // Activate controllers.
            enableControlLoops(IMC::CL_SPEED | IMC::CL_YAW_RATE);
            //enableControlLoops(IMC::CL_SPEED | IMC::CL_YAW_RATE | IMC::CL_DEPTH);

            inf("Executing MPF-epsilon controller.");
        }

        void
        onPathDeactivation(void)
        {
            m_target_state.vx = 0.0;
            m_target_state.vy = 0.0;
            dispatch(m_target_state);
        }

        //! This function computes the shape of the path.
        void
        computePath(void)
        {
            double Pdx; double Pdy;
            double grad_Pdx; double grad_Pdy;

            switch ( m_ctrl_params.path_type ) {
            // case is circle
            case 1:
                Pdx = m_path_params.r*std::cos(m_ctrl_var.gamma/m_path_params.r);
                Pdy = m_path_params.r*std::sin(m_ctrl_var.gamma/m_path_params.r);
                grad_Pdx = -std::sin(m_ctrl_var.gamma/m_path_params.r);
                grad_Pdy = std::cos(m_ctrl_var.gamma/m_path_params.r);
                break;
            // case is ellipse
            case 2:
                double median; // The median value between the two axes of the ellipse
                median = (m_path_params.ampl.x + m_path_params.ampl.y)/2;
                Pdx = m_path_params.ampl.x*std::cos(m_ctrl_var.gamma/median);
                Pdy = m_path_params.ampl.y*std::sin(m_ctrl_var.gamma/median);
                grad_Pdx = -(m_path_params.ampl.x/median)*std::sin(m_ctrl_var.gamma/median);
                grad_Pdy = (m_path_params.ampl.y/median)*std::cos(m_ctrl_var.gamma/median);
                break;
            // case is a lemniscate
            case 3:
                double den;
                den = pow(std::sin(m_path_params.lomega*m_ctrl_var.gamma),2) + 1;
                if ( m_path_params.make8orInf ) {
                    Pdx = m_path_params.lampl*std::sin(m_path_params.lomega*m_ctrl_var.gamma)*std::cos(m_path_params.lomega*m_ctrl_var.gamma)/den;
                    Pdy = m_path_params.lampl*std::cos(m_path_params.lomega*m_ctrl_var.gamma)/den;
                    grad_Pdx = m_path_params.lampl*m_path_params.lomega*(std::cos(2*m_path_params.lomega*m_ctrl_var.gamma) - pow(std::sin(m_path_params.lomega*m_ctrl_var.gamma),2))/pow(den,2);
                    grad_Pdy = -m_path_params.lampl*m_path_params.lomega*std::sin(m_path_params.lomega*m_ctrl_var.gamma)*(2+pow(std::cos(m_path_params.lomega*m_ctrl_var.gamma),2))/pow(den,2);
                }
                else {
                    Pdx = m_path_params.lampl*std::cos(m_path_params.lomega*m_ctrl_var.gamma)/den;
                    Pdy = m_path_params.lampl*std::sin(m_path_params.lomega*m_ctrl_var.gamma)*std::cos(m_path_params.lomega*m_ctrl_var.gamma)/den;
                    grad_Pdx = -m_path_params.lampl*m_path_params.lomega*std::sin(m_path_params.lomega*m_ctrl_var.gamma)*(2+pow(std::cos(m_path_params.lomega*m_ctrl_var.gamma),2))/pow(den,2);
                    grad_Pdy = m_path_params.lampl*m_path_params.lomega*(std::cos(2*m_path_params.lomega*m_ctrl_var.gamma) - pow(std::sin(m_path_params.lomega*m_ctrl_var.gamma),2))/pow(den,2);
                }
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

            m_state.lat = state->lat;
            m_state.lon = state->lon;

            // Compute vehicle rotation matrix
            double tempRv[4] = {std::cos(state->psi), -std::sin(state->psi), std::sin(state->psi), std::cos(state->psi)};
            Matrix tempRvVec(tempRv, 2, 2);
            m_state.Rv = tempRvVec;

            // Compute vehicle velocity
            double tempdPv[2] = {state->vx, state->vy};
            Matrix tempdPvVec(tempdPv, 2, 1);
            m_state.dPv = tempdPvVec;

            // Compute the initial NED displacement of the vehicle
            WGS84::displacement(0, 0, 0,
                                state->lat, state->lon, 0,
                                &m_state.NED.x, &m_state.NED.y);

            // If vehicle is also the target, dispatch its GPS coordinates (WSG84).
            if ( getSystemId() == m_target_params.ID ) {
                m_target_state.x = state->x;
                m_target_state.y = state->y;
                m_target_state.z = state->z;
                m_target_state.lat = state->lat;
                m_target_state.lon = state->lon;
                m_target_state.vx = state->vx;
                m_target_state.vy = state->vy;
                m_target_state.vz = state->vz;
                dispatch(m_target_state);
            }

            inf("Vehicle position = (%f, %f)", m_state.Pv(0,0), m_state.Pv(1,0));
            inf("Vehicle velocity = (%f, %f)", state->vx, state->vy);
            //inf("Vehicle NED = (%f, %f)", m_state.NED.x, m_state.NED.y);
        }

        //! Updates the state of the path variable gamma.
        void
        updatePathVariables(const TrackingState* ts)
        {
            // Integrate gamma using Euler's method (ode1)
            m_ctrl_var.gamma_dot = m_ctrl_var.gamma_ref + m_ctrl_var.g_err;
            m_ctrl_var.gamma = m_ctrl_var.gamma + ts->delta*m_ctrl_var.gamma_dot;

            // Logs
            inf("Gamma = %f", m_ctrl_var.gamma);
        }

        //! Consumer for a TargetState message
        void
        consume(const IMC::TargetState* target_state)
        {
            // Compute target position wrt the follower
            if (target_state->getSource() == m_target_params.ID) {

                // Compute the initial NED displacement of the vehicle
                WGS84::displacement(target_state->lat, target_state->lon, 0,
                                    m_state.lat, m_state.lon, 0,
                                    &m_target_es.NED.x, &m_target_es.NED.y);

//                double tempPtx = m_target_state.x + (m_target_es.NED.x - m_state.NED.x);
//                double tempPty = m_target_state.y + (m_target_es.NED.y - m_state.NED.y);
                double tempPt[2] = {target_state->x, target_state->y};
                Matrix tempPtVec(tempPt, 2, 1);
                m_target_es.Pt = tempPtVec;

                if (m_ctrl_params.compVel) {
                    double tempdPt[2] = {target_state->vx, target_state->vy};
                    Matrix tempdPtVec(tempdPt, 2, 1);
                    m_target_es.dPt = tempdPtVec;
                }
//                inf("Delta0 = (%f,%f)", m_target_es.NED.x - m_state.NED.x, m_target_es.NED.y - m_state.NED.y);
//                inf("InitialState = (%f,%f)", m_state.NED.x, m_state.NED.y);
            }
        }

        //! Execute a path control step
        //! From base class PathController
        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
            if (!use_controller)
                return;

            // If target is simply the TrackingState
            if (m_ctrl_params.isTargetSimulated)
                computeSimTarget(&ts);

            // Update the path variables
            updatePathVariables(&ts);

            // Computes new point in the path accordingly
            computePath();

            // Computes actual state of the vehicle
            computeVehicleState(&state);

            // Compute the desired reference position
            m_ctrl_var.P_ref = m_target_es.Pt + m_ctrl_var.Pd;
            m_ctrl_var.dP_ref = m_target_es.dPt + m_ctrl_var.grad_Pd*m_ctrl_var.gamma_dot;

            if ( getSystemId() != m_target_params.ID || m_ctrl_params.isTargetSimulated ) {
                inf("Target position = (%f, %f)", m_target_es.Pt(0,0), m_target_es.Pt(1,0));
                inf("Target velocity = (%f, %f)", m_target_es.dPt(0,0), m_target_es.dPt(1,0));
                //inf("InitialTarget = (%f,%f)", m_target_es.NED.x, m_target_es.NED.y);
            }

            // Update errors (world and local coordinates)
            m_ctrl_var.World_error = m_state.Pv - m_ctrl_var.P_ref;
            m_ctrl_var.MPF_error = transpose(m_state.Rv)*m_ctrl_var.World_error + m_ctrl_var.Eps;

            inf("MPF error norm = %f", m_ctrl_var.MPF_error.norm_2());

            // Update the MPF error correction signal g_err
            double eta;
            double norm_gradPd = m_ctrl_var.grad_Pd.norm_2();
            if ( norm_gradPd > m_ctrl_params.zero_threshold ) {
                Matrix etaM = -transpose(m_ctrl_var.MPF_error)*((transpose(m_state.Rv)*(m_ctrl_var.grad_Pd/norm_gradPd)));
                eta = etaM(0,0);
            }
            else
                eta = 0;
            m_ctrl_var.g_err = -m_ctrl_params.k_eta*m_ctrl_var.gamma_ref*(tanh(eta+m_ctrl_params.dead_zone) + tanh(eta-m_ctrl_params.dead_zone));

            // Compute the robustness term
            double den;
            double norm_MPF_error = m_ctrl_var.MPF_error.norm_2();
            if ( norm_MPF_error >= m_ctrl_params.epsilon_w )
                den = norm_MPF_error;
            else
                den = m_ctrl_params.epsilon_w;
            m_ctrl_var.robust = (m_ctrl_params.rho/den)*m_ctrl_var.MPF_error;

            inf("Robustness term = (%f,%f)", m_ctrl_var.robust(0,0), m_ctrl_var.robust(1,0));

            // Path Following controller 1: without saturation in control law
            m_ctrl_var.cmd = m_ctrl_params.delta_inv*(-m_ctrl_params.Kp*m_ctrl_var.MPF_error + transpose(m_state.Rv)*m_ctrl_var.dP_ref - m_ctrl_var.robust);

            // Path Following controller 2: with saturation in terms of tanh
            //m_ctrl_var.cmd = m_ctrl_params.delta_inv*(-m_ctrl_params.Kp*m_ctrl_var.SatMPF_error + transpose(m_state.Rv)*m_ctrl_var.dP_ref);

            // Dispatch control commands
            m_speed_cmd.value = sat(m_ctrl_var.cmd(0,0), m_ctrl_params.min_speed, m_ctrl_params.max_speed);
            m_hrate_cmd.value = sat(m_ctrl_var.cmd(1,0), m_ctrl_params.min_omega, m_ctrl_params.max_omega);

            // Check if the MPF controller is stuck due to its initial position: if so, execute VectorField control
            VF_params.stuck = isStuck(&ts);
            if ( VF_params.stuck ) {
                disableControlLoops(IMC::CL_YAW_RATE);
                enableControlLoops(IMC::CL_YAW);
                executeVectorField(state, ts);
                inf("MPF controller is stuck... executing VectorField controller.");
            } else {
                disableControlLoops(IMC::CL_YAW);
                enableControlLoops(IMC::CL_YAW_RATE);
            }

            dispatch(m_speed_cmd,Tasks::DF_LOOP_BACK);
            dispatch(m_hrate_cmd);

            // Logging
            inf("Control command = (%f, %f)", m_speed_cmd.value, m_hrate_cmd.value);

            // Control commands
            MPFVar.ctrl_cmd_v = m_ctrl_var.cmd(0,0);
            MPFVar.ctrl_cmd_omega = m_ctrl_var.cmd(1,0);
            MPFVar.sat_ctrl_cmd_v = m_speed_cmd.value;
            MPFVar.sat_ctrl_cmd_omega = m_hrate_cmd.value;
            MPFVar.robust_v = m_ctrl_var.robust(0,0);
            MPFVar.robust_omega = m_ctrl_var.robust(1,0);
            MPFVar.stuck = VF_params.stuck;

            // Path variables
            MPFVar.gamma = m_ctrl_var.gamma;
            MPFVar.gamma_dot =   m_ctrl_var.gamma_dot;
            MPFVar.g_err = m_ctrl_var.g_err;

            // Target state
            MPFVar.target_x = m_target_es.Pt(0,0);
            MPFVar.target_y = m_target_es.Pt(1,0);
            MPFVar.target_z = m_target_state.z;
            MPFVar.target_vx = m_target_es.dPt(0,0);
            MPFVar.target_vy = m_target_es.dPt(1,0);
            MPFVar.target_vz = m_target_state.vz;

            // Vehicle state
            MPFVar.x = m_state.Pv(0,0);
            MPFVar.y = m_state.Pv(1,0);
            MPFVar.z = state.z;
            MPFVar.vx = m_state.dPv(0,0);
            MPFVar.vy = m_state.dPv(1,0);
            MPFVar.vz = state.vz;

            // References
            MPFVar.pd_x = m_ctrl_var.Pd(0,0);
            MPFVar.pd_y = m_ctrl_var.Pd(1,0);
            MPFVar.p_ref_x = m_ctrl_var.P_ref(0,0);
            MPFVar.p_ref_y = m_ctrl_var.P_ref(1,0);

            // Errors
            MPFVar.norm_mpf_err = norm_MPF_error;
            MPFVar.mpf_err_x = m_ctrl_var.MPF_error(0,0);
            MPFVar.mpf_err_y = m_ctrl_var.MPF_error(1,0);
            MPFVar.mpf_err_z = 0.0;
            MPFVar.err_x = m_ctrl_var.World_error(0,0);
            MPFVar.err_y = m_ctrl_var.World_error(1,0);
            MPFVar.err_z = 0.0;

            // TrackingState data
            MPFVar.start_x = ts.start.x;
            MPFVar.start_y = ts.start.y;
            MPFVar.start_z = ts.start.z;
            MPFVar.end_x = ts.end.x;
            MPFVar.end_y = ts.end.y;
            MPFVar.end_z = ts.end.z;
            //MPFVar.duration = Time::Clock::getSinceEpoch();

            // Dispatch log data
            dispatch(MPFVar);
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

        //! Check if the MPF control is saturated in zero.
        bool
        isStuck(const TrackingState* ts)
        {
            if (m_speed_cmd.value <= 0) {
                VF_params.time_stuck = VF_params.time_stuck + ts->delta;
                if ( VF_params.time_stuck >= VF_params.time_stuck_threshold )
                    return true;
            } else {
                VF_params.time_stuck = 0.0;
                return false;
            }
        }

        //! This calls the vector field method, in case the vehicle is stuck
        void
        executeVectorField(const IMC::EstimatedState& state, const TrackingState& ts)
        {
            m_speed_cmd.value = m_ctrl_params.max_speed;
            // Note:
            // cross-track position (lateral error) = ts.track_pos.y
            // and along-track position = ts.track_pos.x
            double kcorr = ts.track_pos.y / VF_params.corridor;
            double akcorr = std::fabs(kcorr);

            double ref;

            if (ts.track_pos.x > ts.track_length)
            {
              // Past the track goal: this should never happen but ...
              ref = getBearing(state, ts.end);
            }
            else if (akcorr > 1 || !VF_params.ext_control)
            {
              // Outside corridor
              ref = ts.track_bearing - std::atan(VF_params.m_gain * ts.track_pos.y);
            }
            else if (akcorr > 0.05)
            {
              // Inside corridor
              ref = ts.track_bearing
              - std::pow(kcorr, VF_params.ext_gain) * VF_params.entry_angle
              * (1 +
                 (VF_params.m_gain * ts.speed * std::sin(ts.course - ts.track_bearing))
                 / (VF_params.ext_trgain * ts.track_pos.y));
            }
            else
            {
              // Over track (avoid singularities)
              ref = ts.track_bearing;
            }

            if (ts.cc)
              ref += state.psi - ts.course;  // course control rather than yaw control

            spew("lte=%0.1f cadj=%0.1f attack=%0.1f", std::fabs(ts.track_pos.y),
                 Angles::degrees(Angles::normalizeRadian(std::fabs(state.psi - std::atan2(state.vy, state.vx)))),
                 Angles::degrees(Angles::normalizeRadian(std::fabs(ts.track_bearing - ref))));

            // Dispatch heading reference
            m_heading_cmd.value = Angles::normalizeRadian(ref);
            dispatch(m_heading_cmd);
        }

        //! Simulates the target as a linear dynamic system.
        void
        computeSimTarget(const TrackingState* ts)
        {
            //m_target_es.start = ts->start;
            //m_target_es.end = ts->end;

            // Compute error
            double tempdErr[2] = {ts->end.x - m_target_es.Pt(0,0), ts->end.y - m_target_es.Pt(1,0)};
            Matrix tempdErrVec(tempdErr, 2, 1);
            m_target_es.Err = tempdErrVec;

            // Bound simulated target velocities to maximum absolute speed
            m_target_es.dPt = m_target_params.Kt*m_target_es.Err;
            if (m_target_es.dPt.norm_2() > m_target_params.max_abs_speed){
                m_target_es.dPt = m_target_params.max_abs_speed*m_target_es.dPt/m_target_es.dPt.norm_2();
            }

            // Update simulated target position
            inf("Sample time = %f", ts->delta);
            double tempPt[2] = {m_target_es.Pt(0,0) + ts->delta*m_target_es.dPt(0,0), m_target_es.Pt(1,0) + ts->delta*m_target_es.dPt(1,0)};
            Matrix tempPtVec(tempPt, 2, 1);
            m_target_es.Pt = tempPtVec;
        }

      };
    }
  }
}

DUNE_TASK
