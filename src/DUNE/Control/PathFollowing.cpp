//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//         Edited by Praveen Jain and Matheus F. Reis                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <iomanip>

// DUNE headers.
#include <DUNE/Control/PathFollowing.hpp>
#include <DUNE/Math/General.hpp>
#include <DUNE/Math/Angles.hpp>
#include <DUNE/Time.hpp>
#include <DUNE/Utils/String.hpp>

using namespace DUNE::Coordinates;
using namespace DUNE::Math;
using namespace DUNE::IMC;
using namespace DUNE::Time;

namespace DUNE
{
  namespace Control
  {
      //! Loiter size factor to compute if inside the circle
      static const double c_lsize_factor = 0.75;
      //! Distance tolerance to loiter's center
      static const double c_ldistance = 1.0;
      //! Distance between current and previous loiter centers to consider keep on loitering
      static const double c_lkeep_distance = 30.0;
      //! Maximum admissible time for disabling monitors due to navigation jump
      static const float c_max_jump_time = 100.0;
      //! Maximum admissible time for disabling monitors due to braking
      static const float c_max_brake_time = 30.0;
      //! Depth margin when limiting depth in bottom tracker
      static const float c_depth_margin = 1.0;

      PathFollowing::PathFollowing(std::string name, Tasks::Context& ctx):
        PathController(name, ctx)
      {}

      void
      PathFollowing::consume(const IMC::DesiredPath* dpath)
      {
          if (!isActive())
          {
              err(DTR("not active"));
              return;
          }

          double now = Clock::get();
          m_pcs.flags = 0;
          m_pcs.path_ref = dpath->path_ref;
          bool no_start = false;

          if (dpath->flags & IMC::DesiredPath::FL_START)
          {
              m_pcs.start_lat = dpath->start_lat;
              m_pcs.start_lon = dpath->start_lon;
              m_pcs.start_z = dpath->start_z;
              m_pcs.start_z_units = dpath->start_z_units;
          }
          else if ((!m_tracking && now - m_ts.end_time > 1) ||
                   (!m_ts.nearby && !m_ts.loitering) ||
                   (dpath->flags & IMC::DesiredPath::FL_DIRECT) != 0)
          {
              m_pcs.start_lat = m_estate.lat;
              m_pcs.start_lon = m_estate.lon;

              Coordinates::toWGS84(m_estate, m_pcs.start_lat, m_pcs.start_lon);

              m_pcs.start_z = m_estate.z;

              no_start = true;
          }
          else
          {
              m_pcs.start_lat = m_pcs.end_lat;
              m_pcs.start_lon = m_pcs.end_lon;
              m_pcs.start_z = m_pcs.end_z;
              m_pcs.start_z_units = m_pcs.end_z_units;
          }

          WGS84::displacement(m_estate.lat, m_estate.lon, 0,
                              m_pcs.start_lat, m_pcs.start_lon, 0,
                              &m_ts.start.x, &m_ts.start.y);
          m_ts.start.z = m_pcs.start_z;

          if ((dpath->flags & IMC::DesiredPath::FL_LOITER_CURR) != 0 && dpath->lradius > 0)
          {
              m_pcs.end_lat = m_estate.lat;
              m_pcs.end_lon = m_estate.lon;

              Coordinates::toWGS84(m_estate, m_pcs.end_lat, m_pcs.end_lon);
              m_pcs.end_z = dpath->end_z;
              m_pcs.end_z_units = dpath->end_z_units;
          }
          else
          {
              m_pcs.end_lat = dpath->end_lat;
              m_pcs.end_lon = dpath->end_lon;
              m_pcs.end_z = dpath->end_z;
              m_pcs.end_z_units = dpath->end_z_units;
          }

          WGS84::displacement(m_estate.lat, m_estate.lon, 0,
                              m_pcs.end_lat, m_pcs.end_lon, 0,
                              &m_ts.end.x, &m_ts.end.y);
          m_ts.end.z = m_pcs.end_z;

          Coordinates::getBearingAndRange(m_ts.start, m_ts.end,
                                          &m_ts.track_bearing, &m_ts.track_length);

          // Re-initializing tracking state values
          m_ts.start_time = now;
          m_ts.end_time = -1;
          m_ts.now = m_ts.start_time;
          m_ts.delta = 0;
          m_tracking = true;

          // Reset monitors disable due to navigation jump
          // if current desired path does not have fixed start location
          if (no_start)
              m_jump_monitors = false;

          // Send altitude or depth references, unless NO_Z flag is set
          // or controller wishes to handle depth/altitude in a specific manner
          if (!hasSpecificZControl() && !(dpath->flags & IMC::DesiredPath::FL_NO_Z))
          {
              m_ts.z_control = true;
              if (dpath->end_z_units == IMC::Z_ALTITUDE || dpath->end_z_units == IMC::Z_HEIGHT)
              {
                  disableControlLoops(IMC::CL_DEPTH);
                  enableControlLoops(IMC::CL_ALTITUDE);
              }
              else if (dpath->end_z_units == IMC::Z_DEPTH)
              {
                  disableControlLoops(IMC::CL_ALTITUDE);
                  enableControlLoops(IMC::CL_DEPTH);
              }

              m_zref.value = dpath->end_z;
              m_zref.z_units = dpath->end_z_units;

              if (isTrackingBottom())
                  m_btrack->onDesiredZ(&m_zref, true);
              else
                  dispatch(m_zref);
          }
          else
          {
              m_ts.z_control = false;
              m_pcs.flags |= IMC::PathControlState::FL_NO_Z;
          }

          // Send speed reference
          m_speed.value = dpath->speed;
          m_speed.speed_units = dpath->speed_units;

          //Virtual function which sets the desired speed reference.
          //Has to be defined in the derived classes
          //onDesiredSpeedReference(m_speed);

          //enableControlLoops(IMC::CL_SPEED);
          //dispatch(m_speed, Tasks::DF_LOOP_BACK);

          // Loiter handling
          m_ts.loiter.radius = dpath->lradius;
          m_ts.loiter.clockwise = (dpath->flags & IMC::DesiredPath::FL_CCLOCKW) == 0;

          if (m_ts.loiter.radius > 0)
          {
              m_ts.loiter.center = m_ts.end;

              double course_err;
              course_err = std::fabs(Angles::normalizeRadian(m_estate.psi - m_ts.track_bearing));
              double sign;

              double range = c_lkeep_distance + 1.0;

              // if we're already loitering
              if (m_ts.loitering)
              {
                  double dummy;
                  Coordinates::getBearingAndRange(m_ts.end, m_ts.loiter.center, &dummy, &range);
              }

              // loiter's center has not changed much and vehicle is close to circle
              if (range < c_lkeep_distance && m_ts.loitering &&
                      m_ts.track_length >= m_ts.loiter.radius * c_lsize_factor &&
                      m_ts.track_length <= m_ts.loiter.radius * (2.0 - c_lsize_factor))
              {
                  inf(DTR("keep loitering"));
              }
              // avoid singularities (very close to loiter center)
              else if (m_ts.track_length < c_ldistance)
              {
                  Coordinates::setBearingAndRange(m_ts.loiter.center, m_estate.psi,
                                                  m_ts.loiter.radius, m_ts.end);

                  m_ts.loitering = false;
                  m_ts.nearby = false;
              }
              else
              {
                  // if inside the circle and turned inwards
                  if ((m_ts.track_length <= m_ts.loiter.radius * c_lsize_factor) &&
                          (course_err < Math::c_half_pi))
                      sign = m_ts.loiter.clockwise ? 1.0 : -1.0;
                  else
                      sign = m_ts.loiter.clockwise ? -1.0 : 1.0;

                  Coordinates::setBearingAndRange(m_ts.loiter.center,
                                                  m_ts.track_bearing + sign * Math::c_half_pi,
                                                  m_ts.loiter.radius,
                                                  m_ts.end);

                  m_ts.loitering = false;
                  m_ts.nearby = false;
              }

              Coordinates::getBearingAndRange(m_ts.start, m_ts.end,
                                              &m_ts.track_bearing, &m_ts.track_length);
          }
          else
          {
              m_ts.loitering = false;
              m_ts.nearby = false;
          }

          updateTrackingState();
          reportPathControlState(true);
          updateEntityState();

          inf(DTR("path (lat/lon): %0.5f %0.5f to %0.5f %0.5f"),
              Angles::degrees(m_pcs.start_lat), Angles::degrees(m_pcs.start_lon),
              Angles::degrees(m_pcs.end_lat), Angles::degrees(m_pcs.end_lon));

          trace("state (lat/lon) %0.5f %0.5f"
                " | path (x,y,z) %0.2f, %0.2f, %0.2f to %0.2f, %0.2f, %0.2f"
                " | length(m) / bearing (dg): %0.2f / %0.2f"
                " | state (x,y,z) %0.2f,%0.2f,%0.2f"
                " | track pos (x,y,z): %0.2f, %0.2f, %0.2f"
                " | course error (dg): %0.2f",
                Angles::degrees(m_estate.lat), Angles::degrees(m_estate.lon),
                m_ts.start.x, m_ts.start.y, m_ts.start.z,
                m_ts.end.x, m_ts.end.y, m_ts.end.z,
                m_ts.track_length, Angles::degrees(m_ts.track_bearing),
                m_estate.x, m_estate.y, m_estate.z,
                m_ts.track_pos.x, m_ts.track_pos.y, m_ts.track_pos.z,
                Angles::degrees(m_ts.course_error));

          if (m_atm.enabled)
          {
              // Initialize along-track monitoring data.
              m_atm.diverging = false;
              m_atm.time = m_ts.now + m_atm.period;
              m_atm.last_err = m_ts.track_pos.x;
              m_atm.last_course_err = std::fabs(m_ts.course_error);
          }

          if (m_ctm.enabled)
          {
              // Initialize cross-track monitoring data.
              m_ctm.diverging = false;
          }

          // Call path startup handler.
          onPathStartup(m_estate, m_ts);
      }

      void
      PathFollowing::updateTrackingState(void)
      {
          // Range and LOS angle to destination
          getBearingAndRange(m_estate, m_ts.end, &m_ts.los_angle, &m_ts.range);

          // Ground course and speed
          m_ts.course = m_ts.cc ? std::atan2(m_estate.vy, m_estate.vx) : m_estate.psi;
          m_ts.speed = m_ts.cc ? Math::norm(m_estate.vx, m_estate.vy) : m_estate.u;

          if (!m_ts.loitering)
          {
              getTrackPosition(m_estate, &m_ts.track_pos.x, &m_ts.track_pos.y);
              m_ts.course_error = Angles::normalizeRadian(m_ts.course - m_ts.track_bearing);

              float errx = std::abs(m_ts.track_length - m_ts.track_pos.x);
              float erry = std::abs(m_ts.track_pos.y);
              float s = std::max((double)m_eta_min_speed, m_ts.speed);

              if (errx <= erry && erry < c_erry_factor * m_time_factor * s)
                  m_ts.eta = errx / s;
              else
                  m_ts.eta = Math::norm(errx, erry) / s;

              m_ts.eta = std::min(65535.0, m_ts.eta - m_time_factor);

              bool was_nearby = m_ts.nearby;

              if (!m_ts.nearby && m_ts.eta <= 0)
              {
                  m_ts.eta = 0;
                  m_ts.nearby = true;
                  m_ts.end_time = m_ts.now;
              }

              if (!was_nearby && m_ts.nearby)
                  debug("near endpoint");
          }
          else
          {
              m_ts.track_pos.x = 0;
              m_ts.track_pos.y = m_ts.range - m_ts.loiter.radius;

              if (m_ts.loiter.clockwise)
                  m_ts.track_pos.y = -m_ts.track_pos.y;

              double ang_increment = (m_ts.loiter.clockwise ?
                                          Math::c_half_pi : -Math::c_half_pi);
              m_ts.course_error = m_ts.course - m_ts.los_angle + ang_increment;
              m_ts.course_error = Angles::normalizeRadian(m_ts.course_error);
              m_ts.eta = 0;
              m_ts.nearby = false;
          }

          m_ts.track_pos.z = m_estate.z - m_ts.end.z; // vertical-track
          m_ts.track_vel.x = m_ts.speed * std::cos(m_ts.course_error); // along-track
          m_ts.track_vel.y = m_ts.speed * std::sin(m_ts.course_error); // cross-track
          m_ts.track_vel.z = std::sin(m_estate.theta) * m_estate.vz; // vertical-track
      }
  }
}
