
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
// Author: Matheus F. Reis                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <array>

namespace Control
{
  namespace Path
  {
    namespace MPF
    {
      using DUNE_NAMESPACES;

      struct Task: public DUNE::Control::PathController
      {
          //! State indexes for the Kalman Filter
          enum StateIndexes
          {
              STATE_X     = 0,
              STATE_Y     = 1,
              STATE_PSI   = 2,
              STATE_VX    = 3,
              STATE_VY    = 4,
              STATE_OMEGA = 5,
              NUM_STATES  = 6,
          };

          //! Output indexes for the Kalman Filter
          enum OutputIndexes
          {
              OUTPUT_X     = 0,
              OUTPUT_Y     = 1,
              OUTPUT_PSI   = 2,
              NUM_OUTPUTS  = 3,
          };

          struct CommVehicles {
              uint8_t ID;
              fp32_t gamma_est;
              fp32_t gamma_error;
          };

          //! Kalman Filter matrices.
          Navigation::KalmanFilter target_kalman;
          //! Kalman Filter process noise covariance matrix parameters.
          std::vector<double> target_process_noise;
          //! Kalman Filter measurement noise covariance matrix parameters.
          std::vector<double> target_measure_noise;
          //! Kalman Filter state covariance matrix parameters.
          std::vector<double> target_state_cov;
          //! Array of connected vehicles (variable size)
          std::vector<CommVehicles> connected_vehicles;
          //! Desired speed command
          IMC::DesiredSpeed m_speed_cmd;
          //! Desired heading rate command
          IMC::DesiredHeadingRate m_hrate_cmd;
          //! Target state message to be received by the target vehicle
          IMC::TargetState m_target_state;
          //! Coordination message to be received by the neighboring vehicles
          IMC::CoordState m_coord_state;
          //! MPF variables to be recorded
          IMC::MPFVariables MPFVar;
          //! New path control state to visualize the virtual point in Neptus
          IMC::PathControlState path_ctrl_s;
          //! Time for receiving target messages
          Time::Counter<double> m_target_timer;
          //! Time for receiving neighboring messages
          Time::Counter<double> m_coord_timer;

          bool isUsingMPF;                   // Boolean to control the use of the MPF controller
          Matrix a;                          // Continuous state-transition matrix for the Kalman filter

          //! General structure for the 2D state of a rigid body
          struct Coord {
              fp64_t x;
              fp64_t y;
              fp64_t psi;
              fp64_t vx;
              fp64_t vy;
              fp64_t omega;
          };

          //! General parameters for the MPF controller
          struct ControlParams {
              Coord k_gain;                  // Control gain
              Coord offset;                  // Path offset

              Matrix delta_inv;              // Inverse of delta matrix
              Matrix Kp;                     // Gain matrix composed for k_gain.x and k_gain.y
              Matrix Eps;                    // Constant MPF vector
              Matrix Sepsilon;               // Epsilon vector

              fp32_t dt;                     // Control period
              fp64_t epsilon;                // epsilon error
              fp64_t zero_threshold = 0.001; // Internal threshold to consider a scalar as null.
              fp64_t epsilon_w;              // Threshold for the implementation of the RMPF

              double max_speed;           // Maximum speed command to send to AutoPilot
              double min_speed;           // Minimum speed command to send to AutoPilot
              double max_omega;           // Maximum angular velocity command to send to AutoPilot
              double min_omega;           // Minimum angular velocity command to send to AutoPilot
              double k_eta;               // Gain for MPF correction error signal
              double k_rot;               // Gain for the turning correction signal
              double k_consensus;         // Consensus gain
              double dead_zone;           // Dead zone for the hyperbolic tangent on the MPF correction error signal
              //double tau = 0.0001;        // Pole of the linear, first order velocity estimator
              double rho;                 // Gain for the robust MPF controller
              double periodic_send;       // Time to wait until sending another update of the gamma variable through the coordination channels

              std::string pathType;       // Type of path we want to define
              int path_type;              // Integer for the path type
              //int num_coord_vehicles;     // Number of vehicles in coordination

              bool clockwise;             // True if the virtual point is in clockwise direction on the path
              bool isFollowing;           // True if the controller is trying to follow some external vehicle
              bool useRobust;             // True if the controller is using SM term to compensate disturbances
              bool isObserving;           // True if current observer is being used
              bool isCompRotDisturb;      // Flag for the compensation of the rotational disturbance
              bool compVel;               // True if target velocity is being compensated
              bool compOmega;             // True if target angular velocity is being compensated
              bool target_flag = 1;       // Flag for recovering the initial received TargetState message
          } m_ctrl_params;

          //! Important variables for the MPF controller
          struct ControlVariables {
              double gamma_ref;           // Along track desired  speed reference (longitudinal velocity)
              double norm_MPF_error;      // Norm of MPF error

              Matrix Pd;                  // Desired path vector parametrization
              Matrix grad_Pd;             // Derivative of the path with respect to gamma
              Matrix P_ref;               // Control reference for the vehicle position
              Matrix dP_ref;              // Time-derivative of the control reference
              Matrix MPF_error;           // MPF error
              Matrix World_error;         // MPF error in world coordinates
              Matrix cmd;                 // Control signal
              Matrix robust;              // Robustness term
              Matrix cross_prod;          // Cross product between vehicle velocity and desired path
              Matrix Term;                // Additional term

              fp64_t gamma;                     // Path variable or coordination state
              fp64_t gamma_dot;                 // Time derivative of the path variable
              fp64_t g_err;                     // MPF error correction signal
              fp64_t v_consensus;               // Consensus law
              fp64_t v_rot;                     // Term to compensate the rotational motion of the virtual point
          } m_ctrl_var;

          //! Structure for the observer gains
          struct ObserverGains {
              Coord k_1;
              Coord k_2;
              Matrix K1;
              Matrix K2;
              std::vector<double> gains;
              double Komega1;
              double Komega2;
          } obsv_params;

          //! Important variables for the current observer
          struct ObserverVariables {              
              Matrix Pest;          // Estimated position
              Matrix Dest;          // Estimated disturbance
              Matrix Perr;          // Estimation error on position
              Matrix dPest;         // Derivative of estimated position
              Matrix dDest;         // Derivative of estimated disturbance

              double psi_est;       // Estimated yaw angle
              double Domega_est;    // Estimated rotational disturbance
              double psi_err;       // Estimation error on orientation
              double dpsi_est;      // Derivative of estimated yaw angle
              double dDomega_est;   // Derivative of estimated rotational disturbance
          } obsv_state;

          //! Structure containing the path parameters
          struct PathParams {
              Matrix offset;        // Offset vector from the target
              Coord ampl;           // If path is an ellipse, ampl.x, ampl.y are the amplitudes in the respective axes

              double r;             // Radius of the circle
              double phase;         // Phase of the circle
              double lampl;         // Amplitude of the lemniscate path
              double lomega;        // Frequency of the lemniscate path
              double max_ecc;       // Maximum eccentricity between the two axis of the ellipse

              bool make8;           // True if lemniscate main axis is the y-direction (Inf form); False otherwise (8 form)
          } m_path_params;

          //! Target parameters
          struct TargetParams {
              std::string name;              // Name of the target vehicle
              unsigned ID;                   // ID of the target vehicle in DUNE

              double tol;                    // Tolerance to the end
              double max_timer;              // Maximum time to wait until new data is received from the target

              bool isNewCoord;               // True if new coordinate was received
          } m_target_params;

          //! Important variables containing the state of the target
          struct TargetState {
              int num_crossings;            // Number of turns around \pm \pi
              Coord target_state;           // Coordinates of the target state
              Coord Pvt0;                   // Initial displacement btw the target and the vehicle
              Coord newCoord;               // New coordinate received from the target vehicle

              fp64_t lat;                   // Latitude
              fp64_t lon;                   // Longitude
              fp32_t psi;                   // Heading angle
              fp32_t old_psi;               // Last heading angle
              fp32_t omega;                 // Heading rate

              Matrix Pt;                    // Target inertial position
              Matrix dPt;                   // Target inertial velocity
              Matrix Rt;                    // Inertial rotation matrix
              Matrix SO2;                   // SO2 matrix for heading rate
              Matrix Err;                   // Target error matrix
          } m_target_es;

          //! Important variables containing the state of the vehicle
          struct VehicleState {
              int num_crossings;        // Number of turns around \pm \pi
              Matrix Pv;                // Target inertial position
              Matrix dPv;               // Target inertial velocity
              Matrix Rv;                // Inertial rotation matrix
              fp32_t psi;               // Yaw angle of the vehicle
              fp32_t old_psi;           // Last yaw angle of the vehicle
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
                      .defaultValue("2.0")
                      .description("Controller gain for the MPF error correction signal.");

              param("K_rot Gain", m_ctrl_params.k_rot)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .minimumValue("0.0")
                      .defaultValue("1")
                      .description("Controller gain for the rotation correction signal.");

              param("Consensus Gain", m_ctrl_params.k_consensus)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .minimumValue("0.0")
                      .defaultValue("0.1")
                      .description("Consensus gain for cooperative control.");

              param("Dead zone", m_ctrl_params.dead_zone)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("5.0")
                      .description("Dead zone for the hyperbolic tangent on the MPF error correction signal.");

              param("Bound Epsilon", m_ctrl_params.epsilon)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .minimumValue("0.5")
                      .defaultValue("1.0")
                      .description("Bound around the path in meters");

              param("Desired Speed", m_ctrl_var.gamma_ref)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("1.0")
                      .description("Desired speed of the vehicle around the path, in m/s");

              param("Maximum Speed", m_ctrl_params.max_speed)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("1.7")
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

              param("Offset x", m_ctrl_params.offset.x)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("0.0")
                      .description("Fixed offset for the path in the longitudinal direction.");

              param("Offset y", m_ctrl_params.offset.y)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("0.0")
                      .description("Fixed offset for the path in the transversal direction.");

              param("Desired Path", m_ctrl_params.pathType)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("lemniscate")
                      .description("Defines the type of path around the moving target. Can be (i) circle, (ii) ellipse, (iii) lemniscate");

              param("Circle Radius", m_path_params.r)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("15.0")
                      .description("Radius of the circle");

              param("Circle Phase", m_path_params.phase)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("0.0")
                      .description("Phase of the circle");

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

              param("Lemniscate shape (8 or Inf)", m_path_params.make8)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("true")
                      .description("True if lemnscate main axis is the y-direction (Inf form); False otherwise (8 form).");

              param("Is it following?", m_ctrl_params.isFollowing)
                      .defaultValue("false")
                      .description("True if the target is stationary (end of the Tracking State).");

              param("Use robust term?", m_ctrl_params.useRobust)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("false")
                      .description("Compensate for disturbances using SM term.");

              param("Use current observer?", m_ctrl_params.isObserving)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("false")
                      .description("Compensate maritime currents with a constant disturbance observer.");

              param("Compensate rot. disturbance?", m_ctrl_params.isCompRotDisturb)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("false")
                      .description("Compensate rotational disturbances acting on the vehicle.");

              param("Observer Gains", obsv_params.gains)
                      .size(6)
                      .defaultValue("")
                      .description("Gains for the disturbance observer.");

              param("Use MPF controller?", isUsingMPF)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("false")
                      .description("Use MPF as path controller.");

              param("Target Name", m_target_params.name)
                      .defaultValue("lauv-nemo-1")
                      .description("Name of the target vehicle.");

              param("Target Timer Param", m_target_params.max_timer)
                      .minimumValue("5.0")
                      .defaultValue("10.0")
                      .description("Maximum time to wait for new target data.");

              param("Coordenation Sample Time", m_ctrl_params.periodic_send)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .minimumValue("0.0")
                      .defaultValue("1.0")
                      .description("Sample time to send coordination messages.");

              param("Estimate Velocity?", m_ctrl_params.compVel)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("true")
                      .description("True if the target velocity is being compensated.");

              param("Rho Gain", m_ctrl_params.rho)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("0.3")
                      .description("Gain for the robustness term.");

              param("Epsilon Robust", m_ctrl_params.epsilon_w)
                      .visibility(Tasks::Parameter::VISIBILITY_USER)
                      .scope(Tasks::Parameter::SCOPE_GLOBAL)
                      .defaultValue("1.0")
                      .description("Threshold for the robustness term.");

              param("State Covariance Initial State", target_state_cov)
                      .defaultValue("")
                      .size(4)
                      .description("Kalman Filter State Covariance initial values");

              param("Measure Noise Covariance", target_measure_noise)
                    .defaultValue("")
                    .size(2)
                    .description("Kalman Filter measurement noise covariance values");

              param("Process Noise Covariance", target_process_noise)
                      .defaultValue("")
                      .size(2)
                      .description("Kalman Filter process noise covariance values");

              m_target_es.num_crossings = 0;
              m_target_es.old_psi = 0.0;
              m_state.old_psi = 0.0;

              bind<IMC::TargetState>(this);
              bind<IMC::CoordState>(this);
          }

        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {   
            PathController::onUpdateParameters();
            int current_system_ID = getSystemId();
            inf(DTR("My name is %s, ID %d"), getSystemName(), current_system_ID);

            m_target_timer.reset();
            if (paramChanged(m_target_params.max_timer))
                m_target_timer.setTop(m_target_params.max_timer);

            m_coord_timer.reset();
            if (paramChanged(m_ctrl_params.periodic_send))
                m_coord_timer.setTop(m_ctrl_params.periodic_send);

            double temp2Dzeros[2] = {0.0, 0.0};
            Matrix temp2DzeroVector(temp2Dzeros,2,1);

            // Control parameters
            double tempDelta[4] = {1.0, 0.0, 0.0, m_ctrl_params.epsilon};
            Matrix tempDeltaMatrix(tempDelta, 2, 2);
            m_ctrl_params.delta_inv = inverse(tempDeltaMatrix);
            double tempKp[4] = {m_ctrl_params.k_gain.x, 0.0, 0.0, m_ctrl_params.k_gain.y};
            Matrix tempKpMatrix(tempKp, 2, 2);
            m_ctrl_params.Kp = tempKpMatrix;
            double tempEps[2] = {m_ctrl_params.epsilon, 0.0};
            Matrix tempEpsVector(tempEps, 2, 1);
            m_ctrl_params.Eps = tempEpsVector;
            if ( m_ctrl_params.isCompRotDisturb ) {
                double tempSepsilon[2] = {0.0, -m_ctrl_params.epsilon};
                Matrix tempSepsilonVec(tempSepsilon, 2, 1);
                m_ctrl_params.Sepsilon = tempSepsilonVec;
            }
            else
                m_ctrl_params.Sepsilon = temp2DzeroVector;

            // Initialize control variables
            m_ctrl_var.Pd = temp2DzeroVector;
            m_ctrl_var.grad_Pd = temp2DzeroVector;
            m_ctrl_var.cmd = temp2DzeroVector;
            m_ctrl_var.robust = temp2DzeroVector;
//            double tempTerm[2] = {m_ctrl_params.k_rot, 0};
//            Matrix tempTermVec(tempTerm, 2, 1);
//            m_ctrl_var.Term = tempTermVec;

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

            // Initialize path variables
            m_path_params.max_ecc = std::max(m_path_params.ampl.x, m_path_params.ampl.y);

            // Initialize disturbance observer
            double tempGain2[4] = {obsv_params.gains[0], 0.0, 0.0, obsv_params.gains[2]};
            Matrix gainMatrix2(tempGain2, 2, 2);
            obsv_params.K1 = gainMatrix2;
            double tempGain3[4] = {obsv_params.gains[1], 0.0, 0.0, obsv_params.gains[3]};
            Matrix gainMatrix3(tempGain3, 2, 2);
            obsv_params.K2 = gainMatrix3;
            obsv_params.Komega1 = obsv_params.gains[4];
            obsv_params.Komega2 = obsv_params.gains[5];

            obsv_state.Pest = temp2DzeroVector;
            obsv_state.Dest = temp2DzeroVector;
            obsv_state.Perr = temp2DzeroVector;

            obsv_state.dPest = temp2DzeroVector;
            obsv_state.dDest = temp2DzeroVector;

            obsv_state.psi_est = 0.0;
            obsv_state.Domega_est = 0.0;
            obsv_state.psi_err = 0.0;

            // Initializes target variables
            m_target_params.ID = resolveSystemName(m_target_params.name);
            m_target_es.Pt = temp2DzeroVector;
            m_target_es.dPt = temp2DzeroVector;
            m_target_es.omega = 0.0;
            double tempRt[4] = {1, 0, 0, 1};
            Matrix tempRtVec(tempRt, 2, 2);
            m_target_es.Rt = tempRtVec;
            double tempSO2[4] = {0, 0, 0, 0};
            Matrix tempSO2Vec(tempSO2, 2, 2);
            m_target_es.SO2 = tempSO2Vec;
            inf(DTR("Target ID is %d"), m_target_params.ID);

            // Define the continuous state transition matrix and initialize Kalman filter
            initKalman();

            if ( isUsingMPF ){
                enableControlLoops(IMC::CL_SPEED | IMC::CL_YAW_RATE);
                disableControlLoops(IMC::CL_YAW);
            }
            else {
                disableControlLoops(IMC::CL_YAW_RATE);
                enableControlLoops(IMC::CL_YAW);
            }

            // Reset gamma here according to the objective quadrant.
            m_ctrl_var.gamma = 0.0;
            m_ctrl_var.gamma_dot = 0.0;
        }

        //! Activates at the beginning of the path.
        void
        onPathStartup(const IMC::EstimatedState& state, const TrackingState& ts)
        {
            if ( !isUsingMPF )
                return;

            inf("Path startup!");
            onUpdateParameters();

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
            m_target_es.psi = 0.0;

            // Logs
            inf("Target initial position = (%f, %f)", m_target_es.Pt(0,0), m_target_es.Pt(1,0));
            inf("Target initial orientation = %f", m_target_es.psi);
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
            m_target_state.omega = 0.0;
            dispatch(m_target_state);
        }

        //! Initialize Kalman filter
        void
        initKalman(void)
        {
            target_kalman.reset(NUM_STATES, NUM_OUTPUTS);

            Matrix tempA(NUM_STATES, NUM_STATES, 0.0); a = tempA;
            a(STATE_X, STATE_VX) = 1;
            a(STATE_Y, STATE_VY) = 1;
            a(STATE_PSI, STATE_OMEGA) = 1;

            target_kalman.setCovariance(STATE_X, target_state_cov[0]);
            target_kalman.setCovariance(STATE_Y, target_state_cov[0]);
            target_kalman.setCovariance(STATE_PSI, target_state_cov[1]);
            target_kalman.setCovariance(STATE_VX, target_state_cov[2]);
            target_kalman.setCovariance(STATE_VY, target_state_cov[2]);
            target_kalman.setCovariance(STATE_OMEGA, target_state_cov[3]);

            target_kalman.setMeasurementNoise(OUTPUT_X, target_measure_noise[0]);
            target_kalman.setMeasurementNoise(OUTPUT_Y, target_measure_noise[0]);
            target_kalman.setMeasurementNoise(OUTPUT_PSI, target_measure_noise[1]);

            target_kalman.setObservation(OUTPUT_X, STATE_X, 1);
            target_kalman.setObservation(OUTPUT_Y, STATE_Y, 1);
            target_kalman.setObservation(OUTPUT_PSI, STATE_PSI, 1);

            target_kalman.resetState();
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
            {
                double circle_term = m_ctrl_var.gamma/m_path_params.r + Math::Angles::radians(m_path_params.phase);
                Pdx = m_path_params.r*std::cos(circle_term);
                Pdy = m_path_params.r*std::sin(circle_term);
                grad_Pdx = -std::sin(circle_term);
                grad_Pdy = std::cos(circle_term);

//                // Reset gamma if needed
//                if (circle_term >= 2*Math::c_pi || circle_term <= -2*Math::c_pi)
//                    m_ctrl_var.gamma = -m_path_params.r*Math::Angles::radians(m_path_params.phase);
                break;
            }
            // case is ellipse
            case 2:
            {
                double ellipse_term = m_ctrl_var.gamma/m_path_params.max_ecc;
                Pdx = m_path_params.ampl.x*std::cos(ellipse_term);
                Pdy = m_path_params.ampl.y*std::sin(ellipse_term);
                grad_Pdx = -(m_path_params.ampl.x/m_path_params.max_ecc)*std::sin(ellipse_term);
                grad_Pdy = (m_path_params.ampl.y/m_path_params.max_ecc)*std::cos(ellipse_term);

//                // Reset gamma if needed
//                if (ellipse_term >= 2*Math::c_pi || ellipse_term <= -2*Math::c_pi)
//                    m_ctrl_var.gamma = 0.0;
                break;
            }
            // case is a lemniscate
            case 3:
            {
                double den;
                m_path_params.lomega = 1/m_path_params.lampl;
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
                break;
            }
            // otherwise, just follow ("path" is the target location)
            default:
                Pdx = 0; Pdy = 0;
                grad_Pdx = 0; grad_Pdy = 0;
            }

            double tempPd[2] = {Pdx + m_ctrl_params.offset.x, Pdy + m_ctrl_params.offset.y};
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

            // Count the number of crossings
            bool pos_interval = ( m_state.old_psi >=  Math::c_pi/2 && m_state.old_psi <= Math::c_pi    );
            bool neg_interval = ( m_state.old_psi >= -Math::c_pi   && m_state.old_psi <= -Math::c_pi/2 );
            if ( pos_interval && state->psi < 0 )
                m_state.num_crossings++;
            if ( neg_interval && state->psi > 0 )
                m_state.num_crossings--;
            m_state.old_psi = state->psi;
            m_state.psi = state->psi + 2*Math::c_pi*m_state.num_crossings;

            // Compute vehicle rotation matrix
            double tempRv[4] = {std::cos(m_state.psi), -std::sin(m_state.psi), std::sin(m_state.psi), std::cos(m_state.psi)};
            Matrix tempRvVec(tempRv, 2, 2);
            m_state.Rv = tempRvVec;

            // Compute vehicle velocity
            double tempdPv[2] = {state->vx, state->vy};
            Matrix tempdPvVec(tempdPv, 2, 1);
            m_state.dPv = tempdPvVec;

            inf("Vehicle pose = (%f, %f), %f", m_state.Pv(0,0), m_state.Pv(1,0), m_state.psi);
            inf("Vehicle vel. = (%f, %f)", m_state.dPv(0,0), m_state.dPv(1,0) );
        }

        //! Updates the state of the path variable gamma.
        void
        updatePathVariables(const TrackingState* ts)
        {
            // Integrate gamma using Euler's method (ode1)
            m_ctrl_var.gamma_dot = m_ctrl_var.gamma_ref + m_ctrl_var.g_err + m_ctrl_var.v_consensus + m_ctrl_var.v_rot;
            m_ctrl_var.gamma = m_ctrl_var.gamma + ts->delta*m_ctrl_var.gamma_dot;

            // Send new coordination data through the channel
            if (m_coord_timer.overflow()) {
                m_coord_state.systemid = getSystemId();
                m_coord_state.gamma = m_ctrl_var.gamma;
                dispatch(m_coord_state);
                m_coord_timer.reset();
            }

            // Logs
            inf("Gamma = %f", m_ctrl_var.gamma);
            inf("Rot. compensation = %f", m_ctrl_var.v_rot);
        }

        //! Computes the robustness term
        void
        computeRobust()
        {
            double den;
            m_ctrl_var.norm_MPF_error = m_ctrl_var.MPF_error.norm_2();

            if ( m_ctrl_var.norm_MPF_error >= m_ctrl_params.epsilon_w )
                den = m_ctrl_var.norm_MPF_error;
            else
                den = m_ctrl_params.epsilon_w;

            m_ctrl_var.robust = (m_ctrl_params.rho/den)*m_ctrl_var.MPF_error;
        }

        //! Compute the consensus term for coordination btw vehicles.
        void
        computeConsensus(const TrackingState* ts)
        {
            // Update gamma estimations and compute the sum for consensus
            fp64_t sum = 0;
            for( int i = 0; i < connected_vehicles.size(); i=i+1 ) {
                double f_gamma = 0.0; // ZOH
                connected_vehicles[i].gamma_est = connected_vehicles[i].gamma_est + (ts->delta)*f_gamma;
                connected_vehicles[i].gamma_error = (m_ctrl_var.gamma - connected_vehicles[i].gamma_est);
                sum = sum + connected_vehicles[i].gamma_error;

                inf("Gamma errors = %f", connected_vehicles[i].gamma_error);
            }

            m_ctrl_var.v_consensus = -m_ctrl_params.k_consensus*sum;
        }

        //! Consumer for a CooperativeState message
        void
        consume(const IMC::CoordState* coord_state)
        {
            if (coord_state->systemid == getSystemId())
                return;

            // Resets the estimated gamma for the respective vehicle
            bool new_vehicle_arrived = 1;
            int num_conn_vehicles = connected_vehicles.size();
            for( int i = 0; i < num_conn_vehicles; i=i+1 ) {
                if ( coord_state->systemid == connected_vehicles[i].ID ) {
                    connected_vehicles[i].gamma_est = coord_state->gamma;
                    new_vehicle_arrived = 0;
                    break;
                }
            }
            // If message from a new vehicle arrived, create new vehicle and add to vector 'connected_vehicles'
            if (new_vehicle_arrived) {
                CommVehicles new_vehicle;
                new_vehicle.ID = coord_state->systemid;
                new_vehicle.gamma_est = coord_state->gamma;
                new_vehicle.gamma_error = (m_ctrl_var.gamma - coord_state->gamma);

                connected_vehicles.push_back(new_vehicle);
            }

            inf("New coord. message arrived from %d", coord_state->systemid);
            inf("Size of vehicle array is %d", connected_vehicles.size());
        }

        //! Consumer for a TargetState message
        void
        consume(const IMC::TargetState* target_state)
        {
            // Allow only target_state from the expected target.
            if (target_state->getSource() != m_target_params.ID)
                return;

            m_target_timer.reset();

            // Compute the initial displacement btw target and vehicle (just once)
            if ( m_ctrl_params.target_flag && m_state.lat != 0 ) {
                WGS84::displacement(m_state.lat         , m_state.lon       , 0,
                                    target_state->lat   , target_state->lon , 0,
                                    &m_target_es.Pvt0.x , &m_target_es.Pvt0.y );

                inf("Initial displacement btw vehicles = (%f,%f)", m_target_es.Pvt0.x, m_target_es.Pvt0.y);
                m_ctrl_params.target_flag = 0;
            }

            // Update Kalman in front of new evidence
            m_target_es.newCoord.x = target_state->x + m_target_es.Pvt0.x;
            m_target_es.newCoord.y = target_state->y + m_target_es.Pvt0.y;

            // Count the number of crossings
            bool pos_interval = ( m_target_es.old_psi >=  Math::c_pi/2 && m_target_es.old_psi <= Math::c_pi    );
            bool neg_interval = ( m_target_es.old_psi >= -Math::c_pi   && m_target_es.old_psi <= -Math::c_pi/2 );
            if ( pos_interval && target_state->psi < 0 )
                m_target_es.num_crossings++;
            if ( neg_interval && target_state->psi > 0 )
                m_target_es.num_crossings--;

            // Compute the target angle
            m_target_es.old_psi = target_state->psi;
            m_target_es.newCoord.psi = target_state->psi + 2*Math::c_pi*m_target_es.num_crossings;

            m_target_params.isNewCoord = 1;
            //inf("New target state received");
        }

        //! Set Kalman transition matrix
        void
        setKalman(const TrackingState* ts)
        {
            double tstep;
            tstep = ts->delta;

            // Discretize the state transition matrix
            Matrix Ak; Ak = (a * tstep).expmts();
            target_kalman.setTransitions(Ak);

            // Fill the process noise covariance matrix
            target_kalman.setProcessNoise(STATE_X, STATE_X, (1/4)*pow(tstep,4)*pow(target_process_noise[0],2) );
            target_kalman.setProcessNoise(STATE_Y, STATE_Y, (1/4)*pow(tstep,4)*pow(target_process_noise[0],2) );
            target_kalman.setProcessNoise(STATE_PSI, STATE_PSI, (1/4)*pow(tstep,4)*pow(target_process_noise[1],2) );

            target_kalman.setProcessNoise(STATE_X, STATE_VX, (1/3)*pow(tstep,3)*pow(target_process_noise[0],2) );
            target_kalman.setProcessNoise(STATE_Y, STATE_VY, (1/3)*pow(tstep,3)*pow(target_process_noise[0],2) );
            target_kalman.setProcessNoise(STATE_PSI, STATE_OMEGA, (1/3)*pow(tstep,3)*pow(target_process_noise[1],2) );
            //--------------------------------------------------------------------------------------------------------
            target_kalman.setProcessNoise(STATE_VX, STATE_X, (1/3)*pow(tstep,3)*pow(target_process_noise[0],2) );
            target_kalman.setProcessNoise(STATE_VY, STATE_Y, (1/3)*pow(tstep,3)*pow(target_process_noise[0],2) );
            target_kalman.setProcessNoise(STATE_OMEGA, STATE_PSI, (1/3)*pow(tstep,3)*pow(target_process_noise[1],2) );

            target_kalman.setProcessNoise(STATE_VX, STATE_VX, pow(tstep,2)*pow(target_process_noise[0],2) );
            target_kalman.setProcessNoise(STATE_VY, STATE_VY, pow(tstep,2)*pow(target_process_noise[0],2) );
            target_kalman.setProcessNoise(STATE_OMEGA, STATE_OMEGA, pow(tstep,2)*pow(target_process_noise[1],2) );

        }

        //! Update target state
        void
        computeTargetState(const TrackingState* ts)
        {
            // Forces target velocity to be zero, if no new data has been seen
            if ( m_target_timer.overflow() ) {
                target_kalman.setState(STATE_VX, 0.0);
                target_kalman.setState(STATE_VY, 0.0);
                target_kalman.setState(STATE_OMEGA, 0.0);
            }

            // Predict next target state using the KF
            setKalman(ts); target_kalman.predict();

            // When new information is available, update the KF
            if ( m_target_params.isNewCoord ) {
                target_kalman.setInnovation(OUTPUT_X, m_target_es.newCoord.x - target_kalman.getState(STATE_X) );
                target_kalman.setInnovation(OUTPUT_Y, m_target_es.newCoord.y - target_kalman.getState(STATE_Y) );
                target_kalman.setInnovation(OUTPUT_PSI, m_target_es.newCoord.psi - target_kalman.getState(STATE_PSI) );
                target_kalman.setOutput(OUTPUT_X, m_target_es.newCoord.x);
                target_kalman.setOutput(OUTPUT_Y, m_target_es.newCoord.y);
                target_kalman.setOutput(OUTPUT_PSI, m_target_es.newCoord.psi);
                target_kalman.update(0);

                // Acknowledge receipt
                m_target_params.isNewCoord = 0;
            }

            // Fill the internal target state
            double tempPt[2] = {target_kalman.getState(STATE_X), target_kalman.getState(STATE_Y)};
            Matrix tempPtVec(tempPt, 2, 1);
            m_target_es.Pt = tempPtVec;
            m_target_es.psi = target_kalman.getState(STATE_PSI);

            // Compute target rotation matrix
            double tempRt[4] = {std::cos(m_target_es.psi), -std::sin(m_target_es.psi), std::sin(m_target_es.psi), std::cos(m_target_es.psi)};
            Matrix tempRtVec(tempRt, 2, 2);
            m_target_es.Rt = tempRtVec;

            if (m_ctrl_params.compVel) {
                // double tempdPt[2] = {target_state->vx, target_state->vy};
                double tempdPt[2] = {target_kalman.getState(STATE_VX), target_kalman.getState(STATE_VY)};
                Matrix tempdPtVec(tempdPt, 2, 1);
                m_target_es.dPt = tempdPtVec;
                m_target_es.omega = target_kalman.getState(STATE_OMEGA);

                // Compute compensation for target heading rate
                double tempSO2[4] = {0.0, -m_target_es.omega, m_target_es.omega, 0.0};
                Matrix tempSO2Vec(tempSO2, 2, 2);
                m_target_es.SO2 = tempSO2Vec;
            }
        }

        //! Execute a path control step
        //! From base class PathController
        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
            if ( !isUsingMPF )
                return;

            // Update gamma estimators for neighboring vehicles
            computeConsensus(&ts);

            // Update the path variables
            updatePathVariables(&ts);

            // Computes new point in the path accordingly
            computePath();

            // Computes actual state of the vehicle
            computeVehicleState(&state);

            // Computes
            computeTargetState(&ts);

            // Compute the desired reference position and velocity
            m_ctrl_var.P_ref = m_target_es.Pt + m_target_es.Rt*m_ctrl_var.Pd;

            m_ctrl_var.cross_prod = m_target_es.SO2*m_ctrl_var.Pd;
            m_ctrl_var.dP_ref = m_target_es.dPt + m_target_es.Rt*(m_ctrl_var.grad_Pd*m_ctrl_var.gamma_dot + m_ctrl_var.cross_prod);

            if ( getSystemId() != m_target_params.ID ) {
                inf("Target pose = (%f, %f), %f", m_target_es.Pt(0,0), m_target_es.Pt(1,0), m_target_es.psi);
                //inf("Target vels. = (%f, %f), %f", m_target_es.dPt(0,0), m_target_es.dPt(1,0), m_target_es.omega);
                inf("Norm of target vel. = %f", m_target_es.dPt.norm_2() );
            }

            // Change the desired path in Neptus
            double pref_lat; double pref_lon;
            pref_lat = state.lat; pref_lon = state.lon;

            WGS84::displace(m_ctrl_var.P_ref(0,0),m_ctrl_var.P_ref(1,0), &pref_lat, &pref_lon);
            path_ctrl_s.end_lat = pref_lat;
            path_ctrl_s.end_lon = pref_lon;
            path_ctrl_s.start_lat = state.lat;
            path_ctrl_s.start_lon = state.lon;
            dispatch(path_ctrl_s);

            // Update errors (world and local coordinates)
            m_ctrl_var.World_error = m_state.Pv - m_ctrl_var.P_ref;
            m_ctrl_var.MPF_error = transpose(m_state.Rv)*m_ctrl_var.World_error + m_ctrl_params.Eps;
            inf("MPF error norm = %f", m_ctrl_var.MPF_error.norm_2());

            double eta, v_term_den;
            double norm_gradPd = m_ctrl_var.grad_Pd.norm_2();
            if ( norm_gradPd > m_ctrl_params.zero_threshold ) {
                // Matrix etaM = -transpose(m_ctrl_var.MPF_error - m_ctrl_params.Eps - m_ctrl_var.Term)*transpose(m_state.Rv)*m_target_es.Rt*(m_ctrl_var.grad_Pd/norm_gradPd);
                // Matrix etaM = -transpose(m_ctrl_var.MPF_error - m_ctrl_var.Term)*transpose(m_state.Rv)*m_target_es.Rt*(m_ctrl_var.grad_Pd/norm_gradPd);
                Matrix etaM = -transpose(m_ctrl_var.MPF_error)*transpose(m_state.Rv)*m_target_es.Rt*(m_ctrl_var.grad_Pd/norm_gradPd);
                eta = etaM(0,0);
                v_term_den = norm_gradPd;
            }
            else {
                eta = 0;
                v_term_den = m_ctrl_params.zero_threshold;
            }

            // Update the MPF error correction signal g_err
            m_ctrl_var.g_err = -m_ctrl_params.k_eta*m_ctrl_var.gamma_ref*(tanh(eta+m_ctrl_params.dead_zone) + tanh(eta-m_ctrl_params.dead_zone));

            // Term to compensate rotational motion of the target
            Matrix v_term = transpose(m_ctrl_var.grad_Pd)*m_ctrl_var.cross_prod;
            m_ctrl_var.v_rot = -m_ctrl_params.k_rot*v_term(0)/pow(v_term_den,2);

//            Matrix dot_prod = transpose(m_ctrl_var.grad_Pd)*m_ctrl_var.Pd;
//            Matrix null_term = (dot_prod(0)/pow(v_term_den,2))*m_target_es.SO2*m_ctrl_var.grad_Pd;;
//            inf("Dot product = %f", dot_prod(0) );
//            inf("Cancel. of the rot. term = (%f, %f)", null_term(0), null_term(1));

            // Compute the robustness term
            if (m_ctrl_params.useRobust) {
                computeRobust();
                inf("Robust term = (%f, %f)", m_ctrl_var.robust(0,0), m_ctrl_var.robust(1,0) );
            }

            // Update observer state
            if (m_ctrl_params.isObserving) {
                updateObserver(&ts);
                inf("Disturbance = (%f, %f), %f", obsv_state.Dest(0,0), obsv_state.Dest(1,0), obsv_state.Domega_est );
            }

            // Path Following controller 1: without saturation in control law
            // m_ctrl_var.cmd = m_ctrl_params.delta_inv*(-m_ctrl_params.Kp*m_ctrl_var.MPF_error + transpose(m_state.Rv)*m_ctrl_var.dP_ref - m_ctrl_var.robust);
            m_ctrl_var.cmd = m_ctrl_params.delta_inv*(-m_ctrl_params.Kp*m_ctrl_var.MPF_error + transpose(m_state.Rv)*(m_ctrl_var.dP_ref - obsv_state.Dest) - m_ctrl_params.Sepsilon*obsv_state.Domega_est - m_ctrl_var.robust);

            // Path Following controller 2: with saturation in terms of tanh
            //m_ctrl_var.cmd = m_ctrl_params.delta_inv*(-m_ctrl_params.Kp*m_ctrl_var.SatMPF_error + transpose(m_state.Rv)*m_ctrl_var.dP_ref - m_ctrl_var.robust);

            // If vehicle gets stuck, override the previous control...
            if (m_ctrl_var.cmd(0) <= 0) {
                Matrix localWorldError = m_ctrl_var.MPF_error - m_ctrl_params.Eps;
                double omega_aux;
                if (localWorldError(1) > 0)
                    omega_aux = m_ctrl_params.min_omega;
                else
                    omega_aux = m_ctrl_params.max_omega;
                double temp_command[2] = {m_ctrl_params.max_speed, omega_aux};
                Matrix u_aux(temp_command, 2, 1);
                m_ctrl_var.cmd = u_aux;
            }

            // Dispatch control commands
            m_speed_cmd.value = sat(m_ctrl_var.cmd(0,0), m_ctrl_params.min_speed, m_ctrl_params.max_speed);
            m_hrate_cmd.value = sat(m_ctrl_var.cmd(1,0), m_ctrl_params.min_omega, m_ctrl_params.max_omega);

//            dispatch(m_speed_cmd,Tasks::DF_LOOP_BACK);
            dispatch(m_speed_cmd); dispatch(m_hrate_cmd);

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
            MPFVar.gamma_dot = m_ctrl_var.gamma_dot;
            MPFVar.gamma_ref = m_ctrl_var.gamma_ref;
            MPFVar.g_err = m_ctrl_var.g_err;

            // Target state
            MPFVar.target_x = m_target_es.Pt(0,0);
            MPFVar.target_y = m_target_es.Pt(1,0);
            MPFVar.target_z = 0.0;
            MPFVar.target_psi = m_target_es.psi;
            MPFVar.target_vx = m_target_es.dPt(0,0);
            MPFVar.target_vy = m_target_es.dPt(1,0);
            MPFVar.target_vz = 0.0;
            MPFVar.target_omega = m_target_es.omega;

            // Vehicle state
            MPFVar.x = m_state.Pv(0,0);
            MPFVar.y = m_state.Pv(1,0);
            MPFVar.z = state.z;
            MPFVar.psi = state.psi;
            MPFVar.vx = m_state.dPv(0,0);
            MPFVar.vy = m_state.dPv(1,0);
            MPFVar.vz = state.vz;

            // References
            MPFVar.pd_x = m_ctrl_var.Pd(0,0);
            MPFVar.pd_y = m_ctrl_var.Pd(1,0);
            MPFVar.p_ref_x = m_ctrl_var.P_ref(0,0);
            MPFVar.p_ref_y = m_ctrl_var.P_ref(1,0);

            // Errors
            MPFVar.norm_mpf_err = m_ctrl_var.norm_MPF_error;
            MPFVar.mpf_err_x = m_ctrl_var.MPF_error(0,0);
            MPFVar.mpf_err_y = m_ctrl_var.MPF_error(1,0);
            MPFVar.mpf_err_z = 0.0;
            MPFVar.err_x = m_ctrl_var.World_error(0,0);
            MPFVar.err_y = m_ctrl_var.World_error(1,0);
            MPFVar.err_z = 0.0;

            // Disturbance observer data
            MPFVar.pest_x = obsv_state.Pest(0,0);
            MPFVar.pest_y = obsv_state.Pest(1,0);
            MPFVar.psi_est = obsv_state.psi_est;

            MPFVar.perr_x = obsv_state.Perr(0,0);
            MPFVar.perr_y = obsv_state.Perr(1,0);
            MPFVar.psi_err = obsv_state.psi_err;

            MPFVar.dest_x = obsv_state.Dest(0,0);
            MPFVar.dest_y = obsv_state.Dest(1,0);
            MPFVar.domega_est = obsv_state.Domega_est;

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

        //! Simulates the target as a linear dynamic system.
        void
        updateObserver(const TrackingState* ts)
        {

            //! Observer for the translational disturbance acting on the vehicle
            // Compute estimation errors
            obsv_state.Perr = m_state.Pv - obsv_state.Pest;

            // Dynamic system for the observer
            double tempCmd[2] = {m_speed_cmd.value, 0.0};
            Matrix tempCmdVec(tempCmd, 2, 1);
            obsv_state.dPest = m_state.Rv*tempCmdVec + obsv_state.Dest + obsv_params.K1*obsv_state.Perr;
            obsv_state.dDest = obsv_params.K2*obsv_state.Perr;

            // Update observer states
            double tempPest[2] = { obsv_state.Pest(0,0) + ts->delta*obsv_state.dPest(0,0), obsv_state.Pest(1,0) + ts->delta*obsv_state.dPest(1,0) };
            Matrix tempPestVec(tempPest, 2, 1);
            obsv_state.Pest = tempPestVec;

            double tempDest[2] = { obsv_state.Dest(0,0) + ts->delta*obsv_state.dDest(0,0), obsv_state.Dest(1,0) + ts->delta*obsv_state.dDest(1,0) };
            Matrix tempDestVec(tempDest, 2, 1);
            obsv_state.Dest = tempDestVec;

            //! Observer for the rotational disturbance acting on the vehicle
            // Compute estimation errors
            obsv_state.psi_err = m_state.psi - obsv_state.psi_est;

            // Dynamic system for the observer
            obsv_state.dpsi_est = m_hrate_cmd.value + obsv_state.Domega_est + obsv_params.Komega1*obsv_state.psi_err;
            obsv_state.dDomega_est = obsv_params.Komega2*obsv_state.psi_err;

            // Update observer states
            obsv_state.psi_est = obsv_state.psi_est + ts->delta*obsv_state.dpsi_est;
            obsv_state.Domega_est = obsv_state.Domega_est + ts->delta*obsv_state.dDomega_est;

            //! Logs
            inf("Position estimation error = (%f, %f)", obsv_state.Perr(0,0), obsv_state.Perr(1,0) );
            inf("Angle estimation error = %f", obsv_state.psi_err );

        }
      };
    }
  }
}

DUNE_TASK
