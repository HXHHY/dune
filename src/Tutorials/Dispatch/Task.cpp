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

namespace Tutorials
{
  namespace Dispatch
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
        std::string system_name;                   // Name of the target
        IMC::TargetState m_target_state;    // TargetState message to be dispatched

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
            DUNE::Tasks::Task(name, ctx)
        {
            param("System Name", system_name)
                    .defaultValue("lauv-xplore-3")
                    .description("System name to dispatch the EstimatedState.");

            bind<IMC::EstimatedState>(this);
        }

        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {
        }

        //! Reserve entity identifiers.
        void
        onEntityReservation(void)
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

        //! Consumer for an EstimatedState message.
        void
        consume(const IMC::EstimatedState* state)
        {
            if ( state->getSource() == resolveSystemName(system_name) )
            {
                m_target_state.x = state->x;
                m_target_state.y = state->y;
                m_target_state.lat = state->lat;
                m_target_state.lon = state->lon;
                m_target_state.vx = state->vx;
                m_target_state.vy = state->vy;
                dispatch(m_target_state);
                Delay::wait(0.1);
            }
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
    };
  }
}

DUNE_TASK
