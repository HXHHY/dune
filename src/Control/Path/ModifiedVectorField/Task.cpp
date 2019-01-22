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
// Author: Eduardo Marques                                                  *
//***************************************************************************

//***************************************************************************
// Reference:
//  "Vector Field Path Following for Miniature Air Vehicles",
//  Nelson, Barber, McLain and Beard,
//  Proc. American Control Conference, 2006 (ACC'06)
//***************************************************************************

// ISO C++ 98 headers.
#include <iomanip>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Control
{
  namespace Path
  {
    namespace ModifiedVectorField
    { 
      struct Arguments
      {
        double corridor;
        double entry_angle;
        bool ext_control;
        double ext_gain;
        double ext_trgain;
        fp32_t dspeed;
        uint8_t dspeed_units;
        bool isDispatching;
      };

      struct Task: public DUNE::Control::PathController
      {
        //! Controller gain.
        double m_gain;
        //! Outgoing desired heading message.
        IMC::DesiredHeading m_heading;
        //! Outgoing desired speed message.
        IMC::DesiredSpeed m_speed;
        //! Outgoing desired heading rate message.
        IMC::DesiredHeadingRate m_heading_rate;
        //! Outgoing desired target state.
        IMC::TargetState m_target_state;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
            DUNE::Control::PathController(name, ctx)
        {
            param("Corridor -- Width", m_args.corridor)
                    .minimumValue("1.0")
                    .maximumValue("50.0")
                    .defaultValue("5.0")
                    .units(Units::Meter)
                    .description("Width of corridor for attack entry angle");

            param("Corridor -- Entry Angle", m_args.entry_angle)
                    .minimumValue("2")
                    .maximumValue("45")
                    .defaultValue("15")
                    .units(Units::Degree)
                    .description("Attack angle when lateral track error equals corridor width");

            param("Extended Control -- Enabled", m_args.ext_control)
                    .defaultValue("false")
                    .description("Enable extended (refined) corridor control");

            param("Extended Control -- Controller Gain", m_args.ext_gain)
                    .defaultValue("1.0")
                    .description("Gain for extended control");

            param("Extended Control -- Turn Rate Gain", m_args.ext_trgain)
                    .defaultValue("1.0")
                    .description("Turn rate gain for extended control");

            param("Is Dispatching?", m_args.isDispatching)
                    .defaultValue("false")
                    .description("True if vehicle is dispatching its state.");

//            param("Use Vector Field controller?", m_args.isUsingMVF)
//                    .visibility(Tasks::Parameter::VISIBILITY_USER)
//                    .scope(Tasks::Parameter::SCOPE_MANEUVER)
//                    .defaultValue("true")
//                    .description("Use modified VectorField as path controller.");

            bind<IMC::DesiredPath>(this);
        }

        void
        onUpdateParameters(void)
        {

            PathController::onUpdateParameters();

            if (paramChanged(m_args.entry_angle))
                m_args.entry_angle = Angles::radians(m_args.entry_angle);

            m_gain = std::tan(m_args.entry_angle) / m_args.corridor;

            std::string useMPF;
            m_ctx.config.get("Control.Path.MPF", "Use MPF controller?", "false", useMPF);
            bool isUsingMPF; castLexical(useMPF, isUsingMPF);

            if ( !isUsingMPF ){
                disableControlLoops(IMC::CL_YAW_RATE);
                enableControlLoops(IMC::CL_YAW);
            }
            else {
                enableControlLoops(IMC::CL_YAW_RATE);
                disableControlLoops(IMC::CL_YAW);
            }

        }

        void
        onEntityReservation(void)
        {
            PathController::onEntityReservation();
        }

        //! Consumer for the DesiredPath, defining the desired speed for the task
        void
        consume(const IMC::DesiredPath* dpath)
        {
            m_args.dspeed = dpath->speed;
            m_args.dspeed_units = dpath->speed_units;
        }

        void
        onPathActivation(void)
        {

            std::string useMPF;
            m_ctx.config.get("Control.Path.MPF", "Use MPF controller?", "false", useMPF);
            bool isUsingMPF; castLexical(useMPF, isUsingMPF);
            if (isUsingMPF && !m_args.isDispatching)
                return;

            // Activate heading controller and deactivate the yaw rate controller.
//             = 0.0;
//            dispatch(m_speed);

            m_speed.value = m_args.dspeed;
            m_speed.speed_units = m_args.dspeed_units;
            dispatch(m_speed);

            m_heading_rate.value = 0.0;
            dispatch(m_heading_rate);

            disableControlLoops(IMC::CL_YAW_RATE);
            enableControlLoops(IMC::CL_YAW);

        }

        //! Execute a path control step
        //! From base class PathController
        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {

            std::string useMPF;
            m_ctx.config.get("Control.Path.MPF", "Use MPF controller?", "false", useMPF);
            bool isUsingMPF; castLexical(useMPF, isUsingMPF);
            if (isUsingMPF && !m_args.isDispatching)
                return;

            // Dispatch the desired speed for the path
            m_speed.value = m_args.dspeed;
            m_speed.speed_units = m_args.dspeed_units;
            dispatch(m_speed);

//            if ( m_args.isUsingMVF )
//                inf("isUsingMVF = true");
//            else
//                inf("isUsingMVF = false");

            // Note:
            // cross-track position (lateral error) = ts.track_pos.y
            // and along-track position = ts.track_pos.x
            double kcorr = ts.track_pos.y / m_args.corridor;
            double akcorr = std::fabs(kcorr);

            double ref;

            // Dispatch vehicle state.
            if ( m_args.isDispatching ) {
                m_target_state.x = state.x;
                m_target_state.y = state.y;
                m_target_state.vx = state.vx;
                m_target_state.vy = state.vy;
                m_target_state.lat = state.lat;
                m_target_state.lon = state.lon;
                dispatch(m_target_state);

                inf("Vehicle position = (%f,%f)", m_target_state.x, m_target_state.y);
            }

            if (ts.track_pos.x > ts.track_length)
            {
                // Past the track goal: this should never happen but ...
                ref = getBearing(state, ts.end);
            }
            else if (akcorr > 1 || !m_args.ext_control)
            {
                // Outside corridor
                ref = ts.track_bearing - std::atan(m_gain * ts.track_pos.y);
            }
            else if (akcorr > 0.05)
            {
                // Inside corridor
                ref = ts.track_bearing
                        - std::pow(kcorr, m_args.ext_gain) * m_args.entry_angle
                        * (1 +
                           (m_gain * ts.speed * std::sin(ts.course - ts.track_bearing))
                           / (m_args.ext_trgain * ts.track_pos.y));
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
            m_heading.value = Angles::normalizeRadian(ref);
            dispatch(m_heading);

            // Logging
            inf("Speed = %f, Heading = %f", m_speed.value, m_heading.value);
        }

        //! Execute a loiter control step
        //! From base class PathController
        void
        loiter(const IMC::EstimatedState& state, const TrackingState& ts)
        {

            std::string useMPF;
            m_ctx.config.get("Control.Path.MPF", "Use MPF controller?", "false", useMPF);
            bool isUsingMPF; castLexical(useMPF, isUsingMPF);
            if (isUsingMPF && !m_args.isDispatching)
                return;

            double ref = DUNE::Math::c_half_pi + std::atan(2 * m_gain * (ts.range - ts.loiter.radius));

            if (!ts.loiter.clockwise)
                ref = -ref;

            ref += DUNE::Math::c_pi + ts.los_angle;

            if (ts.cc)
                ref += state.psi - ts.course;  // course control

            // Dispatch heading reference
            m_heading.value = Angles::normalizeRadian(ref);
            dispatch(m_heading);

        }

        void
        onPathDeactivation(void)
        {

            std::string useMPF;
            m_ctx.config.get("Control.Path.MPF", "Use MPF controller?", "false", useMPF);
            bool isUsingMPF; castLexical(useMPF, isUsingMPF);
            if (isUsingMPF && !m_args.isDispatching)
                return;

            m_target_state.vx = 0.0;
            m_target_state.vy = 0.0;
            dispatch(m_target_state);

        }

      };
    }
  }
}

DUNE_TASK
