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
// Author: Matheus F. dos Reis                                              *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

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
          IMC::MPFVariables MPFVar;                      // Important variables to be recorded
          IMC::DesiredPath dpath;                        // Desired path message to be sent to Neptus
//          IMC::DesiredZ m_depth_cmd;                     // Desired depth

          bool isUsingMPF;

          struct Coord {
              fp64_t x;
              fp64_t y;
              fp64_t psi;
              fp64_t vx;
              fp64_t vy;
          };

          struct ControlParams {
              Coord k_gain;                  // Control gain
              Matrix delta_inv;              // Inverse of delta matrix
              Matrix Kp;                     // Gain matrix composed for k_gain.x and k_gain.y

              fp32_t dt;                     // Control period
              fp64_t epsilon;                // epsilon error
              fp64_t zero_threshold = 0.001; // Internal threshold to consider a scalar as null.
              fp64_t epsilon_w;              // Threshold for the implementation of the RMPF.

              double max_speed;           // Maximum speed command to send to AutoPilot
              double min_speed;           // Minimum speed command to send to AutoPilot
              double max_omega;           // Maximum angular velocity command to send to AutoPilot
              double min_omega;           // Minimum angular velocity command to send to AutoPilot
              double k_eta;               // Gain for MPF correction error signal
              double dead_zone;           // Dead zone for the hyperbolic tangent on the MPF correction error signal
              double tau = 0.0001;        // Pole of the linear, first order velocity estimator
              double rho;                 // Gain for the robust MPF controller.

              std::string pathType;       // Type of path we want to define
              int path_type;              // Integer for the path type

              bool isFollowing;           // True if the controller is trying to follow some external vehicle
              bool compVel;               // True if target velocity is being compensated
              bool target_flag = 1;       // Flag for recovering the initial received TargetState message
              //bool vehicle_flag = 1;      // Flag for recovering the initial received EstimatedState message
          } m_ctrl_params;

          struct ControlVariables {
              double gamma_ref;           // Along track desired  speed reference (longitudinal velocity)

              Matrix Pd;                  // Desired path vector parametrization
              Matrix grad_Pd;             // Derivative of the path with respect to gamma
              Matrix P_ref;               // Control reference for the vehicle position
              Matrix dP_ref;              // Time-derivative of the control reference
              Matrix MPF_error;           // MPF error
              Matrix World_error;         // MPF error in world coordinates
              Matrix Eps;                 // Constant MPF vector
              Matrix cmd;                 // Control signal
              Matrix robust;              // Robustness term

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

              bool make8;           // True if lemniscate main axis is the y-direction (Inf form); False otherwise (8 form)
          } m_path_params;

          struct TargetParams {
              std::string name;     // Name of the target vehicle

              unsigned ID;          // ID of the target vehicle in DUNE

              double tol;           // Tolerance to the end
          } m_target_params;

          struct TargetState {
              Coord start, end;             // Start and end points
              Coord target_state;           // Coordinates of the target state
              Coord Pvt0;                   // Initial displacement btw the target and the vehicle

              fp64_t lat;                   // Latitude
              fp64_t lon;                   // Longitude

              Matrix Pt;                    // Target inertial position
              Matrix dPt;                   // Target inertial velocity
              Matrix Rt;                    // Inertial rotation matrix
              Matrix Err;                   // Target error matrix
          } m_target_es;

          struct VehicleState {
              Matrix Pv;                // Target inertial position.
              Matrix dPv;               // Target inertial velocity.
              Matrix Rv;                // Inertial rotation matrix.
              fp64_t lat;               // Latitude of the vehicle
              fp64_t lon;               // Longitude of the vehicle
          } m_state;

          //! Constructor.
          //! @param[in] name task name.
          //! @param[in] ctx context.
          Task(const std::string& name, Tasks::Context& ctx):
              DUNE::Control::PathController(name, ctx)
          {
              param("Kx Gain", m_ctrl_params.k_gain.x)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("0.2")
                      .description("Controller gain - ex");

              param("Ky Gain", m_ctrl_params.k_gain.y)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("0.2")
                      .description("Controller gain - ex");

              param("K_eta Gain", m_ctrl_params.k_eta)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("1.0")
                      .description("Controller gain for the MPF error correction signal.");

              param("Dead zone", m_ctrl_params.dead_zone)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("5.0")
                      .description("Dead zone for the hyperbolic tangent on the MPF error correction signal.");

              param("Bound Epsilon", m_ctrl_params.epsilon)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("0.5")
                      .description("Bound around the path in meters");

              param("Desired Speed", m_ctrl_var.gamma_ref)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("1.5")
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
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("circle")
                      .description("Defines the type of path around the moving target. Can be (i) circle, (ii) ellipse, (iii) lemniscate");

              param("Circle Radius", m_path_params.r)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("15.0")
                      .description("Radius of the circle");

              param("Ellipse x-amplitude", m_path_params.ampl.x)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("15.0")
                      .description("Amplitude of the ellipse in the x-direction");

              param("Ellipse y-amplitude", m_path_params.ampl.y)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("25.0")
                      .description("Amplitude of the ellipse in the y-direction");

              param("Lemniscate amplitude", m_path_params.lampl)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("20.0")
                      .description("Amplitude of the lemniscate path.");

              param("Lemniscate frequency", m_path_params.lomega)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("10.0")
                      .description("Frequency of the lemniscate path.");

              param("Lemniscate shape (8 or Inf)", m_path_params.make8)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("true")
                      .description("True if lemnscate main axis is the y-direction (Inf form); False otherwise (8 form).");

              param("Is it following?", m_ctrl_params.isFollowing)
                      .defaultValue("false")
                      .description("True if the target is stationary (end of the Tracking State).");

              param("Use MPF controller?", isUsingMPF)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("false")
                      .description("Use MPF as path controller.");

              param("Target Name", m_target_params.name)
                      .defaultValue("lauv-nemo-1")
                      .description("Name of the target vehicle.");

              param("Estimate Velocity?", m_ctrl_params.compVel)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("true")
                      .description("True if the target velocity is being compensated.");

              param("Rho Gain", m_ctrl_params.rho)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("0.0")
                      .description("Gain for the robustness term.");

              param("Epsilon Robust", m_ctrl_params.epsilon_w)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("1.0")
                      .description("Threshold for the robustness term.");

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

            // Initialize the path variables
            //m_ctrl_var.gamma = 0.0;
            //m_ctrl_var.gamma_dot = 0.0;

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
                m_ctrl_params.path_type = 1;
            }
            else if (m_ctrl_params.pathType == "ellipse") {
                inf("Elliptical path was chosen.");
                m_ctrl_params.path_type = 2;
            }
            else if (m_ctrl_params.pathType == "lemniscate") {
                inf("Lemniscate path was chosen.");
                m_ctrl_params.path_type = 3;
            }
            else {
                inf("GotoPoint controller was chosen (path is a single point).");
                m_ctrl_params.path_type = 0;
            }
            // Computes targetID and initiallizes target position
            m_target_params.ID = resolveSystemName(m_target_params.name);
            m_target_es.Pt = temp2DzeroVector;
            m_target_es.dPt = temp2DzeroVector;

            inf(DTR("Target ID is %d"), m_target_params.ID);

            if ( isUsingMPF ){
                enableControlLoops(IMC::CL_SPEED | IMC::CL_YAW_RATE);
                disableControlLoops(IMC::CL_YAW);
            }
            else {
                disableControlLoops(IMC::CL_YAW_RATE);
                enableControlLoops(IMC::CL_YAW);
            }

        }

        //! Activates at the beginning of the path.
        void
        onPathStartup(const IMC::EstimatedState& state, const TrackingState& ts)
        {
            if ( !isUsingMPF )
                return;

            inf("Path startup!");
            //inf("Chosen path is ", m_ctrl_params.path_type);
            onUpdateParameters();

//            // If the vehicle is the target, dispatch its coordinates.
//            if ( getSystemId() == m_target_params.ID ) {
//                m_target_state.x = state.x;
//                m_target_state.y = state.y;
//                m_target_state.lat = state.lat;
//                m_target_state.lon = state.lon;
//                m_target_state.vx = state.vx;
//                m_target_state.vy = state.vy;
//                dispatch(m_target_state);
//            }

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
            if ( !isUsingMPF )
                return;

            // Activate controllers.
            disableControlLoops(IMC::CL_YAW);
            enableControlLoops(IMC::CL_SPEED | IMC::CL_YAW_RATE);

            inf("Executing MPF-epsilon controller.");
        }

        void
        onPathDeactivation(void)
        {
            if ( !isUsingMPF )
                return;

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
                if ( m_path_params.make8 ) {
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

//            // If vehicle is also the target, dispatch its GPS coordinates (WSG84).
//            if ( getSystemId() == m_target_params.ID ) {
//                m_target_state.x = state->x;
//                m_target_state.y = state->y;
//                m_target_state.z = state->z;
//                m_target_state.lat = state->lat;
//                m_target_state.lon = state->lon;
//                m_target_state.vx = state->vx;
//                m_target_state.vy = state->vy;
//                m_target_state.vz = state->vz;
//                dispatch(m_target_state);
//            }

            inf("Vehicle position = (%f, %f)", m_state.Pv(0,0), m_state.Pv(1,0));
            inf("Vehicle velocity = (%f, %f)", state->vx, state->vy);

            //m_ctrl_params.vehicle_flag = 0;
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

            // Compute the initial displacement btw target and vehicle (just once)
            if ( m_ctrl_params.target_flag && m_state.lat != 0 ) {
                double pvt0_x = 0.0; double pvt0_y = 0.0;

                WGS84::displacement(m_state.lat       , m_state.lon       , 0,
                                    target_state->lat , target_state->lon , 0,
                                    &pvt0_x           , &pvt0_y );

                m_target_es.Pvt0.x = pvt0_x; m_target_es.Pvt0.y = pvt0_y;

                inf("Init displacment 1 = (%f,%f)", m_state.lat, m_state.lon);
                inf("Init displacment 2 = (%f,%f)", target_state->lat, target_state->lon);
                inf("Initial displacement btw vehicles = (%f,%f)", m_target_es.Pvt0.x, m_target_es.Pvt0.y);

                m_ctrl_params.target_flag = 0;
            }

            //double tempPt[2] = {target_state->x, target_state->y};
            double tempPt[2] = {target_state->x + m_target_es.Pvt0.x, target_state->y + m_target_es.Pvt0.y};
            Matrix tempPtVec(tempPt, 2, 1);
            m_target_es.Pt = tempPtVec;

            if (m_ctrl_params.compVel) {
                double tempdPt[2] = {target_state->vx, target_state->vy};
                Matrix tempdPtVec(tempdPt, 2, 1);
                m_target_es.dPt = tempdPtVec;
            }

        }

        //! Execute a path control step
        //! From base class PathController
        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
            if ( !isUsingMPF )
                return;

            // Update the path variables
            updatePathVariables(&ts);

            // Computes new point in the path accordingly
            computePath();

            // Computes actual state of the vehicle
            computeVehicleState(&state);

            // Compute the desired reference position
            m_ctrl_var.P_ref = m_target_es.Pt + m_ctrl_var.Pd;
            m_ctrl_var.dP_ref = m_target_es.dPt + m_ctrl_var.grad_Pd*m_ctrl_var.gamma_dot;

            if ( getSystemId() != m_target_params.ID ) {
                inf("Target position = (%f, %f)", m_target_es.Pt(0,0), m_target_es.Pt(1,0));
                inf("Target velocity = (%f, %f)", m_target_es.dPt(0,0), m_target_es.dPt(1,0));
            }

            // Change the desired path in Neptus
            double pref_lat; double pref_lon;
            pref_lat = state.lat; pref_lon = state.lon;
            IMC::PathControlState path_ctrl_s;
            WGS84::displace(m_ctrl_var.P_ref(0,0),m_ctrl_var.P_ref(1,0), &pref_lat, &pref_lon);
            path_ctrl_s.end_lat = pref_lat;
            path_ctrl_s.end_lon = pref_lon;
            path_ctrl_s.start_lat = state.lat;
            path_ctrl_s.start_lon = state.lon;

            dispatch(path_ctrl_s);

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
            //m_ctrl_var.cmd = m_ctrl_params.delta_inv*(-m_ctrl_params.Kp*m_ctrl_var.SatMPF_error + transpose(m_state.Rv)*m_ctrl_var.dP_ref - m_ctrl_var.robust);

            // Dispatch control commands
            m_speed_cmd.value = sat(m_ctrl_var.cmd(0,0), m_ctrl_params.min_speed, m_ctrl_params.max_speed);
            m_hrate_cmd.value = sat(m_ctrl_var.cmd(1,0), m_ctrl_params.min_omega, m_ctrl_params.max_omega);

//            dispatch(m_speed_cmd,Tasks::DF_LOOP_BACK);
            dispatch(m_speed_cmd);
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
            if ( !isUsingMPF )
                return;
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

        //! Saturation function (for control commands)
        static double sat(double value, double min, double max)
        {
          return (value < min) ? min : (value > max) ? max : value;
        }

//        ! Simulates the target as a linear dynamic system.
//        void
//        computeSimTarget(const TrackingState* ts)
//        {
//            //m_target_es.start = ts->start;
//            //m_target_es.end = ts->end;

//            // Compute error
//            double tempdErr[2] = {ts->end.x - m_target_es.Pt(0,0), ts->end.y - m_target_es.Pt(1,0)};
//            Matrix tempdErrVec(tempdErr, 2, 1);
//            m_target_es.Err = tempdErrVec;

//            // Bound simulated target velocities to maximum absolute speed
//            m_target_es.dPt = m_target_params.Kt*m_target_es.Err;
//            if (m_target_es.dPt.norm_2() > m_target_params.max_abs_speed){
//                m_target_es.dPt = m_target_params.max_abs_speed*m_target_es.dPt/m_target_es.dPt.norm_2();
//            }

//            // Update simulated target position
//            inf("Sample time = %f", ts->delta);
//            double tempPt[2] = {m_target_es.Pt(0,0) + ts->delta*m_target_es.dPt(0,0), m_target_es.Pt(1,0) + ts->delta*m_target_es.dPt(1,0)};
//            Matrix tempPtVec(tempPt, 2, 1);
//            m_target_es.Pt = tempPtVec;
//        }
      };
    }
  }
}

DUNE_TASK
