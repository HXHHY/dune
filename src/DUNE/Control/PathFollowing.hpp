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
//         Edited by Praveen Jain and                                       *
//         Matheus F Reis                                                   *
//***************************************************************************

#ifndef DUNE_CONTROL_PATH_FOLLOWING_HPP_INCLUDED_
#define DUNE_CONTROL_PATH_FOLLOWING_HPP_INCLUDED_

#include <vector>
#include <string>

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Control/PathController.hpp>

namespace DUNE
{
  namespace Control
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM PathFollowing;

    class PathFollowing: public PathController
    {
    public:
      //! Constructor.
      PathFollowing(std::string name, Tasks::Context& ctx);

      //! Consumer for DesiredPath message.
      //! @param dp message to consume.
      void
      consume(const IMC::DesiredPath* dp);      

      //Virtual function which sets the desired speed reference for Path following.
      //Has to be defined in the derived classes
      //virtual void
      //onDesiredSpeedReference(IMC::DesiredSpeed& speed) = 0;

    private:
      //! Update tracking state variable
      void
      updateTrackingState(void);

    };
  }
}

#endif
