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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 7a3ed426d58582705930c36d3be90198                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.653744739422);
    msg.setSource(45968U);
    msg.setSourceEntity(202U);
    msg.setDestination(9428U);
    msg.setDestinationEntity(74U);
    msg.state = 137U;
    msg.flags = 167U;
    msg.description.assign("SOIVZMITPNPCPIHITJJKNGYNGMZQDBZFKSZLYREHYHVKDHOZLSLNOUKDQHVWCKYANBZWFIDOWSEDUOUCEJMJFSDQMPREBPAPXLTYGAWBUVGYYFTXJWDNMJEDMTRPRTRANGWBCASCAFUAWPTEHSUYJVWHXLPCIKKGAAOHFOVEUZBKRIOXWCUDXOBQCDMXEUSFBCBTMRSHUQZFXKLPCARVJGJLE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.92406548884);
    msg.setSource(36923U);
    msg.setSourceEntity(77U);
    msg.setDestination(59723U);
    msg.setDestinationEntity(12U);
    msg.state = 40U;
    msg.flags = 113U;
    msg.description.assign("AZOIDYKWQGESUGHUOLPJJEZRXSVOPMJNVRVFQKNZJCXROWIQJLURTMZOGLMPIZXFWRT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.714391484568);
    msg.setSource(55035U);
    msg.setSourceEntity(251U);
    msg.setDestination(23675U);
    msg.setDestinationEntity(50U);
    msg.state = 206U;
    msg.flags = 169U;
    msg.description.assign("FAANGFMPXQHPLFVBKPYRVHQDYIWRGCBNPASTZKWLVOVJBDIISJPBMEGTPMYXTSWMPALQMOGUHJLRUBKFWBHMJMGUTZLYBJDMZPIGIOGKCUWNLVOSONXTEXQEXAOYNTHZRKEWQUWCEDEHPLYXRIFUNNQAYYKZTVHSDIAOQSKGZYJCFBARQILZUERKDDHIUDTLTZJFVYSUKZEKCDPOCT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.543759400153);
    msg.setSource(9027U);
    msg.setSourceEntity(223U);
    msg.setDestination(61967U);
    msg.setDestinationEntity(43U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.309065520326);
    msg.setSource(8280U);
    msg.setSourceEntity(59U);
    msg.setDestination(53541U);
    msg.setDestinationEntity(35U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.404814734268);
    msg.setSource(14361U);
    msg.setSourceEntity(67U);
    msg.setDestination(46121U);
    msg.setDestinationEntity(112U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.657675316432);
    msg.setSource(4320U);
    msg.setSourceEntity(117U);
    msg.setDestination(63330U);
    msg.setDestinationEntity(41U);
    msg.id = 52U;
    msg.label.assign("WPJFGWNJTLOUZSMFWHYMXHEAVHCJN");
    msg.component.assign("FQHIZAGVTUUROOMEIYRRPHEXJHUNBCCXAFGWDGQVQILDADFXZPHTUFAIKJSOKATMPUZVMZWDQRQNNSOOWENDBVOSTJQHJLYMPNIPAWNNCFZEWSUQBPBIOEMAXQQTBGZPRCCFCCIMKLCIRSRGLWHTSYWELUIEEKCMUXZMNWGK");
    msg.act_time = 58852U;
    msg.deact_time = 43569U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.746827704032);
    msg.setSource(37862U);
    msg.setSourceEntity(170U);
    msg.setDestination(669U);
    msg.setDestinationEntity(247U);
    msg.id = 153U;
    msg.label.assign("JHTANXVWESBZLBPKUQECEGNM");
    msg.component.assign("AGTEYIRTISFADUCYVZVIQDBQPMUPUFSPXBBOPRELZXLCNJEXVQTTEPDCAHQRMVWXYNRYNJWULIYBBKQOLODABLXY");
    msg.act_time = 28657U;
    msg.deact_time = 21459U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.428132472537);
    msg.setSource(35956U);
    msg.setSourceEntity(15U);
    msg.setDestination(16424U);
    msg.setDestinationEntity(120U);
    msg.id = 211U;
    msg.label.assign("LJCVZFQGSCYMGRYXKCLKUVJE");
    msg.component.assign("SYYDCWTRDZISLDALDRGNUVQUCAKXFGWCOTGIWFPMEHCSBWGLVNBYJMQ");
    msg.act_time = 63105U;
    msg.deact_time = 21914U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.123151101833);
    msg.setSource(32911U);
    msg.setSourceEntity(184U);
    msg.setDestination(17489U);
    msg.setDestinationEntity(107U);
    msg.id = 239U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.915174560992);
    msg.setSource(27135U);
    msg.setSourceEntity(244U);
    msg.setDestination(32289U);
    msg.setDestinationEntity(150U);
    msg.id = 186U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.673454051394);
    msg.setSource(10440U);
    msg.setSourceEntity(93U);
    msg.setDestination(16628U);
    msg.setDestinationEntity(113U);
    msg.id = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.943956076077);
    msg.setSource(53076U);
    msg.setSourceEntity(82U);
    msg.setDestination(30805U);
    msg.setDestinationEntity(111U);
    msg.op = 53U;
    msg.list.assign("NHXWNBWCUWGYOLLETMYDFJRJMGRGCCHXBSBQYIKLHHYDZHXJBQYSNWONKIOANVRBHYQSODGFOVOFPKKWDSCCZQUEUZJFVTKEUITJOKZEBVJXPQPADQVTTSLRWDUQYUMHNPEI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.848687828658);
    msg.setSource(6680U);
    msg.setSourceEntity(177U);
    msg.setDestination(15998U);
    msg.setDestinationEntity(205U);
    msg.op = 247U;
    msg.list.assign("LVCDMSKMDCZMMVPRBKVPXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.31231473115);
    msg.setSource(13712U);
    msg.setSourceEntity(74U);
    msg.setDestination(46516U);
    msg.setDestinationEntity(6U);
    msg.op = 161U;
    msg.list.assign("LZJUJGSTXIJDIVLSKPBXLELGBQNOTHMHQRIULMRYZSHEUMSJOBITGWARQDFAXDDLNOEVBFTWTUFRZWUPXNYOCMERNZWKJPGIHTCGUIYHKKSBNYOXQQPMDCGFFISOPPXQBGY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.612805434795);
    msg.setSource(12714U);
    msg.setSourceEntity(205U);
    msg.setDestination(34614U);
    msg.setDestinationEntity(194U);
    msg.value = 223U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.767670279889);
    msg.setSource(51550U);
    msg.setSourceEntity(206U);
    msg.setDestination(36098U);
    msg.setDestinationEntity(28U);
    msg.value = 105U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.416315850739);
    msg.setSource(53260U);
    msg.setSourceEntity(48U);
    msg.setDestination(23671U);
    msg.setDestinationEntity(109U);
    msg.value = 174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.115040972733);
    msg.setSource(46667U);
    msg.setSourceEntity(102U);
    msg.setDestination(3501U);
    msg.setDestinationEntity(151U);
    msg.consumer.assign("RNTGMQGJKDVMOCJIOGJYXCZHJMPHSAUEQRNVDSLHRJCCTPWXAOEIAPEOINXAVQBZCYGLXUINHBEPLVSJIAIYFNKNRHUKBVWPPFFUSDZRZTFBWAYTVFJCIAWWWXNAPMFZZQJBHMYWRQKUFMBMLQOYAIQKBWPNOLKVZTQQXARETDISHSECEGZKQRTNZUYOMJBDSKGVWXIYGFUDBUMCOTUGKFKTVRJONLEPMLLFLEHDDDCUPVECRSW");
    msg.message_id = 38009U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.835166437836);
    msg.setSource(39884U);
    msg.setSourceEntity(72U);
    msg.setDestination(63588U);
    msg.setDestinationEntity(172U);
    msg.consumer.assign("HASFPIHTRWLBBOUNKIKH");
    msg.message_id = 19085U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.884339520953);
    msg.setSource(49295U);
    msg.setSourceEntity(52U);
    msg.setDestination(48721U);
    msg.setDestinationEntity(14U);
    msg.consumer.assign("CCYWYIQAIBAOYBWIGLPHKSXGKCCHFHNNTHCRSIBTSHXWRFODCLFXVJXFVKBRKHNNAGEJPVWPFSKYZSTUMZLLTEQFZDJALWPBTJJRVCUORRUXSIFZNYBOTOOZGIHPVNOOIMJUHQDMXYYDKEQYALYRMAIELDDIUNKBPZUKDUMQUGAJUAESQEMTFSCTGOLMWDRVXMHXGXKHZMNTXDVNPWBQZQAPCACBGFZTUSIJQEZYJGQ");
    msg.message_id = 15817U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.373363917145);
    msg.setSource(63149U);
    msg.setSourceEntity(89U);
    msg.setDestination(25695U);
    msg.setDestinationEntity(32U);
    msg.type = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.124142082544);
    msg.setSource(3917U);
    msg.setSourceEntity(188U);
    msg.setDestination(44533U);
    msg.setDestinationEntity(240U);
    msg.type = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.417390668744);
    msg.setSource(39242U);
    msg.setSourceEntity(237U);
    msg.setDestination(52107U);
    msg.setDestinationEntity(35U);
    msg.type = 113U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.928022293215);
    msg.setSource(28984U);
    msg.setSourceEntity(69U);
    msg.setDestination(1697U);
    msg.setDestinationEntity(191U);
    msg.op = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.890088447001);
    msg.setSource(55259U);
    msg.setSourceEntity(36U);
    msg.setDestination(8809U);
    msg.setDestinationEntity(207U);
    msg.op = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.150985497657);
    msg.setSource(32480U);
    msg.setSourceEntity(74U);
    msg.setDestination(38495U);
    msg.setDestinationEntity(237U);
    msg.op = 52U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.827506854904);
    msg.setSource(60192U);
    msg.setSourceEntity(249U);
    msg.setDestination(53870U);
    msg.setDestinationEntity(57U);
    msg.total_steps = 242U;
    msg.step_number = 238U;
    msg.step.assign("EMMEYSCTUUMHIYBARHEQPFYTYCQOCASNSPRAAJJLQJFKXOSZFBCJ");
    msg.flags = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.0314084190945);
    msg.setSource(59034U);
    msg.setSourceEntity(201U);
    msg.setDestination(7073U);
    msg.setDestinationEntity(110U);
    msg.total_steps = 53U;
    msg.step_number = 202U;
    msg.step.assign("KKKYWQQUGOCOCYUEYNDMDRORXTUSIMAUBJDEDTLHENWLAEPUZOVDVHCVSFXHTEZK");
    msg.flags = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.269818617383);
    msg.setSource(56156U);
    msg.setSourceEntity(65U);
    msg.setDestination(24458U);
    msg.setDestinationEntity(186U);
    msg.total_steps = 50U;
    msg.step_number = 136U;
    msg.step.assign("YTRPUKITEIUJGGZXCHUDLXVHWYWGPVQNWREEZNBXEFYWJGFKYKDIJFOXALRIJEBWYURYSBWWCFEOVZTMSNXITCLDLKSBQEKZXSP");
    msg.flags = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.35550167736);
    msg.setSource(2592U);
    msg.setSourceEntity(216U);
    msg.setDestination(17437U);
    msg.setDestinationEntity(221U);
    msg.state = 63U;
    msg.error.assign("HIOQGLROKRZKPPACABPSCOHVYZEXWDDWCAHRKQWSYSFKEXSVMUYGQYPNAXTLPTRTMZHVKMYDPARBXVIJFJJZWJYFBOTZSXIOQFBULMUNURNHXQJREDZGSEDNHHNCQAJKEDPJJKJPNGFFHLFQRDCQXWSVINMSKGHLCRLGGCYVZCBYWHBLTECITVPIATMGKLMTXWNBPFIKMB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.00167200161639);
    msg.setSource(12716U);
    msg.setSourceEntity(146U);
    msg.setDestination(1364U);
    msg.setDestinationEntity(108U);
    msg.state = 109U;
    msg.error.assign("CADPVEFBINKOAZXRBDAUCTYDJBFQOJELLOAZUALRWGSFFCMCDWTQPANQLNUEGUGEMQLUPIKXXWWPGVXQTEKDNTPGSCAOQOMEMJVFIBYFZHXQHVUTHDQOXLHHYUJWNUONLQSVKXPRYRVAUHYIZJSWJKLGFVHBBZRNZDWJMRGOPZPLJCPRCCSRIMDABYFTIGTEYNXIZEXSRDNSGPYQBKBRSVAWMHJIHVFXOCMSCIYDEUKYZVNGTT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.269488298771);
    msg.setSource(58151U);
    msg.setSourceEntity(215U);
    msg.setDestination(15008U);
    msg.setDestinationEntity(46U);
    msg.state = 114U;
    msg.error.assign("YDBDHHAMNDRULQSPRUKAWGYOUTAIGSEUFSNMILWCBAGQGPWDSCAHTSROBQSXKSLXYZDOTUBYPQJPYBCAFIVRUPDOVSBGDFCETZQIJVKGAMLFOMHNWCXWFUTICWZIUZEPJGREZIAPJXFTLFLRKZNJBRTDVNEVHXVWOTQITIDKQXHQCHXLCUWNJHNZESGYVNYXBCJQSBZVOTYGEMLWRFMEKNJCEVHMOOHGJRDPXFZPXYLUKMOKJLNVMKYIKQPR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.931971236364);
    msg.setSource(58569U);
    msg.setSourceEntity(238U);
    msg.setDestination(59642U);
    msg.setDestinationEntity(169U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.899237112741);
    msg.setSource(41946U);
    msg.setSourceEntity(14U);
    msg.setDestination(24221U);
    msg.setDestinationEntity(169U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.329212561791);
    msg.setSource(29354U);
    msg.setSourceEntity(196U);
    msg.setDestination(38871U);
    msg.setDestinationEntity(209U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.190191713398);
    msg.setSource(11981U);
    msg.setSourceEntity(185U);
    msg.setDestination(11413U);
    msg.setDestinationEntity(26U);
    msg.op = 77U;
    msg.speed_min = 0.922534603828;
    msg.speed_max = 0.145207505935;
    msg.long_accel = 0.365508711897;
    msg.alt_max_msl = 0.0362150963403;
    msg.dive_fraction_max = 0.464973368487;
    msg.climb_fraction_max = 0.591805599937;
    msg.bank_max = 0.211014241185;
    msg.p_max = 0.348108426499;
    msg.pitch_min = 0.641962495866;
    msg.pitch_max = 0.440647652264;
    msg.q_max = 0.462481359352;
    msg.g_min = 0.982692052131;
    msg.g_max = 0.0787644932604;
    msg.g_lat_max = 0.345647089444;
    msg.rpm_min = 0.112297729381;
    msg.rpm_max = 0.453217218042;
    msg.rpm_rate_max = 0.329910830169;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.942626954493);
    msg.setSource(61564U);
    msg.setSourceEntity(120U);
    msg.setDestination(52776U);
    msg.setDestinationEntity(247U);
    msg.op = 19U;
    msg.speed_min = 0.0789723729228;
    msg.speed_max = 0.479384441441;
    msg.long_accel = 0.725184029714;
    msg.alt_max_msl = 0.114441559357;
    msg.dive_fraction_max = 0.459819208166;
    msg.climb_fraction_max = 0.207424016636;
    msg.bank_max = 0.684787135931;
    msg.p_max = 0.792021241635;
    msg.pitch_min = 0.695560057504;
    msg.pitch_max = 0.423115322743;
    msg.q_max = 0.978291422627;
    msg.g_min = 0.422236654716;
    msg.g_max = 0.974870341107;
    msg.g_lat_max = 0.707810620474;
    msg.rpm_min = 0.625470705991;
    msg.rpm_max = 0.930116353228;
    msg.rpm_rate_max = 0.955346855117;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.13412957945);
    msg.setSource(41384U);
    msg.setSourceEntity(227U);
    msg.setDestination(8250U);
    msg.setDestinationEntity(164U);
    msg.op = 167U;
    msg.speed_min = 0.886383844499;
    msg.speed_max = 0.874681723769;
    msg.long_accel = 0.218624479868;
    msg.alt_max_msl = 0.218070016335;
    msg.dive_fraction_max = 0.131692145051;
    msg.climb_fraction_max = 0.106692021817;
    msg.bank_max = 0.814923135877;
    msg.p_max = 0.673509748452;
    msg.pitch_min = 0.13208594418;
    msg.pitch_max = 0.388311153694;
    msg.q_max = 0.585077335099;
    msg.g_min = 0.760905324;
    msg.g_max = 0.677751235601;
    msg.g_lat_max = 0.193095513043;
    msg.rpm_min = 0.273750986162;
    msg.rpm_max = 0.100597125878;
    msg.rpm_rate_max = 0.892806483921;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.189616643516);
    msg.setSource(64524U);
    msg.setSourceEntity(65U);
    msg.setDestination(65477U);
    msg.setDestinationEntity(249U);
    IMC::SoiState tmp_msg_0;
    tmp_msg_0.state = 205U;
    tmp_msg_0.plan_id = 14363U;
    tmp_msg_0.wpt_id = 26U;
    tmp_msg_0.settings_chk = 35755U;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.411845070087);
    msg.setSource(23698U);
    msg.setSourceEntity(89U);
    msg.setDestination(17870U);
    msg.setDestinationEntity(119U);
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 238U;
    tmp_msg_0.actions.assign("NXGJRNOQGRDPKCWCVUOBKSQPOVUJDYRSUJVJFSJWKLNBXTSNZBTLPTAQXOWUQIZTXBZRFLVSDHFVUUTPLRAZAFBGEHEFFCDCMLHPRNBDTKREVZPLWMBVIZBCLMJSENAGREUIIZQWWCWQHCEZXIKACTNIIQAFOKDYJJEEXYXYNOSULPWGOPDHLPOMUXTAK");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.284974428891);
    msg.setSource(13553U);
    msg.setSourceEntity(243U);
    msg.setDestination(26705U);
    msg.setDestinationEntity(254U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.23696596544);
    msg.setSource(3789U);
    msg.setSourceEntity(40U);
    msg.setDestination(8309U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.0473433097451;
    msg.lon = 0.213927766169;
    msg.height = 0.172376393347;
    msg.x = 0.404436788444;
    msg.y = 0.501881557804;
    msg.z = 0.546960312295;
    msg.phi = 0.242472876364;
    msg.theta = 0.0897110353256;
    msg.psi = 0.311301739036;
    msg.u = 0.704422533151;
    msg.v = 0.965883302519;
    msg.w = 0.835912512032;
    msg.p = 0.715905268094;
    msg.q = 0.613200024677;
    msg.r = 0.253208296455;
    msg.svx = 0.0889574151994;
    msg.svy = 0.996791764359;
    msg.svz = 0.333364968853;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.647058346822);
    msg.setSource(5783U);
    msg.setSourceEntity(227U);
    msg.setDestination(62962U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.486243704112;
    msg.lon = 0.43150685008;
    msg.height = 0.17260685313;
    msg.x = 0.303674853927;
    msg.y = 0.805439063065;
    msg.z = 0.857984904005;
    msg.phi = 0.491398206134;
    msg.theta = 0.88971252181;
    msg.psi = 0.330972768597;
    msg.u = 0.837974470446;
    msg.v = 0.70450664583;
    msg.w = 0.522283984747;
    msg.p = 0.608872833869;
    msg.q = 0.341999733344;
    msg.r = 0.85733967111;
    msg.svx = 0.214201066625;
    msg.svy = 0.0169881635841;
    msg.svz = 0.580018225851;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.431239723337);
    msg.setSource(10380U);
    msg.setSourceEntity(211U);
    msg.setDestination(11628U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.0523447405347;
    msg.lon = 0.529734960677;
    msg.height = 0.106338551461;
    msg.x = 0.116925686966;
    msg.y = 0.108856260743;
    msg.z = 0.286555065879;
    msg.phi = 0.248881369817;
    msg.theta = 0.798195633247;
    msg.psi = 0.590934379058;
    msg.u = 0.0239233031143;
    msg.v = 0.712342754741;
    msg.w = 0.0429280763962;
    msg.p = 0.142311106842;
    msg.q = 0.591785079433;
    msg.r = 0.452837688872;
    msg.svx = 0.958680054812;
    msg.svy = 0.488523699258;
    msg.svz = 0.522705113162;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.508161922539);
    msg.setSource(27988U);
    msg.setSourceEntity(227U);
    msg.setDestination(36733U);
    msg.setDestinationEntity(240U);
    msg.op = 129U;
    msg.entities.assign("VHPXZSTRKKNAXWBUKLQDUDZYJCVYPFXJANERYBNODLEDGPCPRVAHDPFQUSKBUMXUXDCDNSHRRJBCEIBDWTSKHVWSOIEWOGFZIDGIPFVCITYJIBYRUJEGHNGARLTLXROQZFZWMTBEEHCMAXVTYROKHGJOZPMXJLQAAVQWBECYVIEZSCTMNIDZMLPFOOACUMYRWHZFQKJIQSAQXYONMMCKKLVWTJGFSJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.147425059578);
    msg.setSource(20166U);
    msg.setSourceEntity(185U);
    msg.setDestination(25881U);
    msg.setDestinationEntity(166U);
    msg.op = 65U;
    msg.entities.assign("SUAOTDPGPRJUDJPDMCJQWEHABYWHKBNSYWZJZMYRUMGEMVFBVRNQNGAJFCLBRHDVXNOBEIWFKOLRT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.531661232055);
    msg.setSource(31066U);
    msg.setSourceEntity(154U);
    msg.setDestination(29425U);
    msg.setDestinationEntity(129U);
    msg.op = 111U;
    msg.entities.assign("WRUWZLQWGWAVCRXDHSEXFKBQDPXVNXNJSQFRGNEXIRSNBPPVOIDPAPMCQITKXJRILJBSDRHGIMHOFQJSXECQAUTJBTTAFJBPGBTODXEGITZLHHTWORCBELKOJAIXHKPLNBIYOENWZDZTYPZWQFAHTSKGMLFTKSFZCDSYMSMBAMCOJPKGVKYLDAYYXJYYZURUCFGZACUCFKVLKHMQBQZODMQGSZRYIO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.831708709048);
    msg.setSource(18145U);
    msg.setSourceEntity(48U);
    msg.setDestination(5260U);
    msg.setDestinationEntity(54U);
    msg.type = 252U;
    msg.speed = 65146U;
    const char tmp_msg_0[] = {-32, 47, -107, -17, -109, 89, 125, -122, 56, -16, -10, 109, 19, -90, -28, -68, 119, 75, -81, 49, -51, 60};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.0479717786465);
    msg.setSource(13102U);
    msg.setSourceEntity(187U);
    msg.setDestination(49245U);
    msg.setDestinationEntity(97U);
    msg.type = 104U;
    msg.speed = 34827U;
    const char tmp_msg_0[] = {16, -80, 73, -93, 24, 109, -110, -57, 67, -111, 92, -45, 63, 77, 70, 89, 57, 12, 117, -44, -113, -6, -54, 118, 11, -117, 110, -41, -16, -34, 37, 74, -63, 96, -114, -39, -92, -57, -123, 31, -71, -31, -125, -75, 14, 98, 28, -11, -41, 42, 71, -30, 77, -97, 3, -123, 113, -121, -109, -33, 41, 0, 31, -23, 113, 91, 64, 78, 59, -45, -37, -13, -94, 66, -6, 26, 89, -62, -81, -60, -81, -126, -85, 42, -4, 0, -24, -79, -23, 116, -64, -112, 126, -125, 120, -3, 93, 68, 100, -117, 51, 20, 121, 70, 27, -78, 30, -58, -104, 98, 12, -34, -108, 34, 63, -77, 18, 59, -67, 7, -125, -125, -13, -62, -111};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.466305390798);
    msg.setSource(18918U);
    msg.setSourceEntity(200U);
    msg.setDestination(9423U);
    msg.setDestinationEntity(246U);
    msg.type = 112U;
    msg.speed = 32795U;
    const char tmp_msg_0[] = {-53, 117, -111, 30, 105, -124, -47, 63, 39, 46, 30, 23, 54, 17, 43, 41, -4, 43, 48, 96, -124, 68, -120, 48, -65, 42, -87, 13, 40, -127, 18, 2, -17, -105, 38, 51, 33, 76, -26, 112, 76, -94, -9, 12, -5, -64, 73, 50, 124, -77, -95, -21, -52, -112, 94, 68, 17, 87, -112, -72, 5, 94, 65, -62, -57, 20, -99, 92, 73, -8, 114, -63, 112, -105, 73, -25, -55, 84, -101, -16, -43, -55, -117, -127, 1, -104, -73, 42, -114, 60, -43, -1, 100, -53, 51, 43, -40, -6, 68, -116, -104, -102, 73, -42, 49, -82, -23, 58, 87, 20, 80, -47, -50, 35, -50, -74, -44, -93, -52, 43, -120, 68, -11, -85, -102, 19, -40, 66, 13, -31, 118, 56, -38, -29, 118, 20, -31, -70, -66, -90, -103, 61, -106, 90};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.960851230626);
    msg.setSource(3330U);
    msg.setSourceEntity(95U);
    msg.setDestination(7630U);
    msg.setDestinationEntity(120U);
    msg.op = 50U;
    msg.tas2acc_pgain = 0.295328323124;
    msg.bank2p_pgain = 0.847493408126;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.912450901639);
    msg.setSource(22313U);
    msg.setSourceEntity(233U);
    msg.setDestination(40245U);
    msg.setDestinationEntity(3U);
    msg.op = 40U;
    msg.tas2acc_pgain = 0.687912465281;
    msg.bank2p_pgain = 0.374234790637;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.128410469421);
    msg.setSource(11840U);
    msg.setSourceEntity(93U);
    msg.setDestination(24663U);
    msg.setDestinationEntity(141U);
    msg.op = 188U;
    msg.tas2acc_pgain = 0.692564267904;
    msg.bank2p_pgain = 0.509676155883;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.191030268781);
    msg.setSource(11703U);
    msg.setSourceEntity(95U);
    msg.setDestination(21113U);
    msg.setDestinationEntity(27U);
    msg.available = 1329468077U;
    msg.value = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.542000066813);
    msg.setSource(21456U);
    msg.setSourceEntity(60U);
    msg.setDestination(41741U);
    msg.setDestinationEntity(50U);
    msg.available = 2252987951U;
    msg.value = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.0729959210978);
    msg.setSource(39100U);
    msg.setSourceEntity(92U);
    msg.setDestination(16209U);
    msg.setDestinationEntity(92U);
    msg.available = 3059946915U;
    msg.value = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.813231204678);
    msg.setSource(52088U);
    msg.setSourceEntity(60U);
    msg.setDestination(27353U);
    msg.setDestinationEntity(139U);
    msg.op = 65U;
    msg.snapshot.assign("TLHXQXEBLFNWRPIOPFMZPWGNKUC");
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("JQBDEKHALUDCOKLAQDUJUGOPMEDYBIEUTOWSLFIWYAHKQMTFARVXUKSWGEIAULHFEPNYGIEKLRQSWWZMFJHNTHRZRODOKOLRKLRXCNRTNXBTYVZPAAHOWRGMOMUFJVLZHHBSZMGGXTIQZCPFYFZVNXUYZGCDNCPZXTJCFTRAKRJSHDIBYESVPXVQSI");
    tmp_msg_0.lat = 0.129436197936;
    tmp_msg_0.lon = 0.461807015464;
    tmp_msg_0.z_units = 161U;
    tmp_msg_0.z = 0.795580235706;
    tmp_msg_0.accuracy = 0.611422400267;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.765456507189);
    msg.setSource(364U);
    msg.setSourceEntity(142U);
    msg.setDestination(21174U);
    msg.setDestinationEntity(1U);
    msg.op = 83U;
    msg.snapshot.assign("KDNZXDYGHJFAGTOMSRAUPKPRKBYULKGIJTCDQOFCZMWXGJLXQOGKOTSDXAERYLJHTVNVDHIGDQJZMEGNRXWNSYLHHKXAWOXSMVWVNMJTENUYQEXOLSZBLAUMTOBPMHEAYQICCECHHG");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.971147153843;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.238455326721);
    msg.setSource(26001U);
    msg.setSourceEntity(156U);
    msg.setDestination(51420U);
    msg.setDestinationEntity(63U);
    msg.op = 221U;
    msg.snapshot.assign("EASGCYYRUURPEMMRAYUGBQAHXFXSGKPYMMOSVJQ");
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 54U;
    tmp_msg_0.x = 0.046983750799;
    tmp_msg_0.y = 0.884542819691;
    tmp_msg_0.z = 0.307765871423;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.935131691343);
    msg.setSource(12123U);
    msg.setSourceEntity(124U);
    msg.setDestination(47910U);
    msg.setDestinationEntity(90U);
    msg.op = 166U;
    msg.name.assign("CKHBLTOGPVDDEO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.708829825125);
    msg.setSource(8818U);
    msg.setSourceEntity(166U);
    msg.setDestination(46868U);
    msg.setDestinationEntity(201U);
    msg.op = 234U;
    msg.name.assign("PKOOWRFLYTHZZAZURPBUOVUPAVCZYELNXBMBAPSJIZTCCPSSQQVEKIYDUPMHHBQUXUZENMDJAKJCXKRGICGTSAJEEWNVBHYBMJMKVEJBMDRLRYAFFODOHHXVQQEMGYDXGZCOOQFPKGYVZADQPIBGXTIDNRRWJOVRILAYEKESXKTHGLFMFIMJZUCBNXDI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.820768048299);
    msg.setSource(14329U);
    msg.setSourceEntity(135U);
    msg.setDestination(56496U);
    msg.setDestinationEntity(127U);
    msg.op = 156U;
    msg.name.assign("JDBUYQEMMLQEFIMOSOOPIZVGVAIRUGEYGWERABSALLDXJIYLURRNOCLHRCKVQRKMVTKFZCBYCAYXHWLMYZUBPDQQEADHPDHUANWKVYXJTZIRWHNSTAUBTMFHZCVJBAZSSVKTTGXHXRCUOAFYPSOZECWXGHPPZLEILBCSZSIQF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.518146089045);
    msg.setSource(16625U);
    msg.setSourceEntity(73U);
    msg.setDestination(13946U);
    msg.setDestinationEntity(100U);
    msg.type = 8U;
    msg.htime = 0.273631664704;
    msg.context.assign("NKCSDLKRVXNDCMYRPWTZAPVZKTBNFJHVJKLGNBUUTLMJEKEMLMIVUHQVFQCNSBFPQCBAXOZSAVHEWZYWXFUEBIQSGIEARQXKIWJTYENOPSRFOWBUMRGGCUWAJWRTMVKVQMSQZLLAKRLCTPWRFFHYATXNVPXDZGHQVJNDLCCPGSQJIDIZKEUSGGCDWYTMBJIMOZQBXLFYFIWYLROOPZHJXTDKEHHEUUEGNPBAHYMNXUSP");
    msg.text.assign("DBFMFHLCPBPZEIGATDLMHTWYOYPZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.90311905021);
    msg.setSource(24633U);
    msg.setSourceEntity(140U);
    msg.setDestination(23675U);
    msg.setDestinationEntity(251U);
    msg.type = 221U;
    msg.htime = 0.150518882248;
    msg.context.assign("LSFZGXPZEKJVGKHTSDEESCMYWCDQNXAP");
    msg.text.assign("REQLOUFFIWHNYOKBTPSKATUZDLFIDKMAJKSJRSAXATTOFNOVMYNBGFAXNOEFBFYLZJCZMVGDHGLJQBNGCDTPTCIWSPXZEKZAUSDKEVLXCLIDWTEWWQTVVLOBZNRHVPIQTFIHBOHERMGXDMCRRPKMSMUBEWJXLURNMBZQDPHDSFLAUPWGWAZYCAJBGGTHXWLOV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.43206308021);
    msg.setSource(15003U);
    msg.setSourceEntity(45U);
    msg.setDestination(50548U);
    msg.setDestinationEntity(221U);
    msg.type = 200U;
    msg.htime = 0.0929435005144;
    msg.context.assign("MVVBEXNIVTBOQKHINKFQWAVJMPMXVGXJTUPYKWZMXBBQKZJMXHDXEQUBHRIXSWMXOPATPLYRJSVMRARLUTFOLCTCCSDDWEPHAMIYTKSCIRZRTZZ");
    msg.text.assign("VKAGBDUABNETTNYMZCXSEWIORSJDGEZEVVJQOWNZJHHVLPQZIYKATLAHFBWRVWTIDXXCFAPBTZGRPTQSBNFRGMGNZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.948910868915);
    msg.setSource(40496U);
    msg.setSourceEntity(34U);
    msg.setDestination(44332U);
    msg.setDestinationEntity(194U);
    msg.command = 216U;
    msg.htime = 0.783079303935;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 207U;
    tmp_msg_0.htime = 0.0159002307727;
    tmp_msg_0.context.assign("EULIQTDLETXSAKUXKKUWBOVSUDBMCXGACZZSAVPLYVQVIALQWYIXRJKEBBKTQRFOOOHKEPETGHDGVFQHFPYFNTZLZNQDCWECIUPSMMTUSFVGZVPSVVBIRXTJAFMPWOJCDSAJGKQMJOKBEYGNJZNFCMLHYNHLNKUTARIRNCDCEIXY");
    tmp_msg_0.text.assign("TBWFUXGZGZCLCXVHJBTZLOJOPRXFIVUUYUJLEZEUJDQBJUAFJRFNTEOTQOCHRFKBJVLIGPGSXXWMNQERBILRDMAJEGLSJUMNGTKNINAYFGAMBBYTWGNXWWIWOXPWPDBPYDYCXLTZOVXQCJFPKMAKTUEFZYSDDMNHYIM");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.450095215352);
    msg.setSource(29252U);
    msg.setSourceEntity(144U);
    msg.setDestination(25373U);
    msg.setDestinationEntity(109U);
    msg.command = 106U;
    msg.htime = 0.740524550759;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.822390340606);
    msg.setSource(54162U);
    msg.setSourceEntity(199U);
    msg.setDestination(42829U);
    msg.setDestinationEntity(90U);
    msg.command = 229U;
    msg.htime = 0.0641631478197;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.431535671408);
    msg.setSource(33603U);
    msg.setSourceEntity(167U);
    msg.setDestination(56525U);
    msg.setDestinationEntity(254U);
    msg.op = 229U;
    msg.file.assign("VZEBMLRWDMUONWYKYFXFKRIWRIGMEZBTLSPUSZLMRILGTKBONNHSOVLEPEXHBPIICFGZQQRKODNAUDVKSAJHGSCGXRNMMAEYDHHNQETFGRPWDTOAQJIFQCYZODQXCFEJPQRVGMPKTJXMWUGJHSOVFKYDKTXVNDPTFGNOLDYPYUVAMBAFLHCISKMYJJBTUZKBXPUXTNVYREZDQZVLIURCJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.598343823517);
    msg.setSource(60392U);
    msg.setSourceEntity(93U);
    msg.setDestination(39080U);
    msg.setDestinationEntity(244U);
    msg.op = 238U;
    msg.file.assign("QTLGIVNKUSKJGWEUFUGYOJHDOPLDALXNMEUTCCSMMNPMXXIAMWOEZW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.812286549812);
    msg.setSource(48215U);
    msg.setSourceEntity(178U);
    msg.setDestination(51606U);
    msg.setDestinationEntity(77U);
    msg.op = 248U;
    msg.file.assign("NMYPYQXKFKVQCJYMATKMIBCSJAXLXCRRYMWHTZCLCKJLJDUQIANLORLPNGEWXZOKEZUHTASSGXFZXYTDBXGTZQWEMBEQZYGNBBNVCFVVYDQUAILHJUJVSFOL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.822756503031);
    msg.setSource(39084U);
    msg.setSourceEntity(197U);
    msg.setDestination(25724U);
    msg.setDestinationEntity(125U);
    msg.op = 145U;
    msg.clock = 0.817380881758;
    msg.tz = -31;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.103043465387);
    msg.setSource(33393U);
    msg.setSourceEntity(228U);
    msg.setDestination(27254U);
    msg.setDestinationEntity(28U);
    msg.op = 61U;
    msg.clock = 0.445046237729;
    msg.tz = 82;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.817985526437);
    msg.setSource(59854U);
    msg.setSourceEntity(102U);
    msg.setDestination(47811U);
    msg.setDestinationEntity(78U);
    msg.op = 93U;
    msg.clock = 0.461288781331;
    msg.tz = -39;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.666815031353);
    msg.setSource(41541U);
    msg.setSourceEntity(196U);
    msg.setDestination(1957U);
    msg.setDestinationEntity(149U);
    msg.conductivity = 0.156993471107;
    msg.temperature = 0.968699522068;
    msg.depth = 0.994557384052;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.308588841279);
    msg.setSource(11247U);
    msg.setSourceEntity(61U);
    msg.setDestination(55781U);
    msg.setDestinationEntity(30U);
    msg.conductivity = 0.978035488817;
    msg.temperature = 0.719252178048;
    msg.depth = 0.101068050117;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.785145175762);
    msg.setSource(13373U);
    msg.setSourceEntity(103U);
    msg.setDestination(54832U);
    msg.setDestinationEntity(154U);
    msg.conductivity = 0.0575988922525;
    msg.temperature = 0.944205299586;
    msg.depth = 0.352402958388;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.535464692895);
    msg.setSource(55651U);
    msg.setSourceEntity(114U);
    msg.setDestination(23035U);
    msg.setDestinationEntity(196U);
    msg.altitude = 0.942915447066;
    msg.roll = 18489U;
    msg.pitch = 1140U;
    msg.yaw = 21549U;
    msg.speed = 21408;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.399183704603);
    msg.setSource(44443U);
    msg.setSourceEntity(202U);
    msg.setDestination(44365U);
    msg.setDestinationEntity(101U);
    msg.altitude = 0.585926694416;
    msg.roll = 43882U;
    msg.pitch = 51199U;
    msg.yaw = 29718U;
    msg.speed = 25881;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.330659425837);
    msg.setSource(10300U);
    msg.setSourceEntity(198U);
    msg.setDestination(14233U);
    msg.setDestinationEntity(109U);
    msg.altitude = 0.548521791791;
    msg.roll = 739U;
    msg.pitch = 57090U;
    msg.yaw = 12876U;
    msg.speed = -18487;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.134256185475);
    msg.setSource(11627U);
    msg.setSourceEntity(231U);
    msg.setDestination(2492U);
    msg.setDestinationEntity(208U);
    msg.altitude = 0.65866481404;
    msg.width = 0.640597003844;
    msg.length = 0.348569081286;
    msg.bearing = 0.158257630457;
    msg.pxl = -15481;
    msg.encoding = 242U;
    const char tmp_msg_0[] = {-123, -91, -10, -56, -66, 107, 124, -54, 32, 86, -24, 55, -35, -32, 49, 5, 121, 0, 122, 45, -31, -54, 26, 104, 26, 118, 36, -93, -90, 46, -30, 39, 72, 122, 49, -31, -70, 18, -51, -30, -66, 42, 111, 22, 92, 114, 43, -115, -117, -101, 119, 99, -127, -76, -41, 30, 70, 115, 82, -83, -33, -33, 26, 18, -40, 32, 107, 64, 13, -32, -40, -24, -44, -113, 81, -47, 19, 28, 99, 22, -50, -16, 64, -22, -46, 91, -77, 48, 73, 116, -16, -113, -89, -13, 121, -99, -31, 98, 4, -47, -20, -83, 5, 80, -1, 35, 88, 115, -98, -26, -44, 19, 71, -84, 41, -102, 85, 47, -98, -51, -43, -87, -62, 86, 100, -89, 26, -71, 1, -36, 63, 112, -5, 114, 29, 92, -44, 120, 69, 117, 103, -35, 120, -73, 46, -107, -88, -33, -79, 108, 95, 4, 3, 38, -13, -105, -34, -79, -113, 41, -27, 1, 114};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.735828699923);
    msg.setSource(47995U);
    msg.setSourceEntity(84U);
    msg.setDestination(20773U);
    msg.setDestinationEntity(187U);
    msg.altitude = 0.633050275111;
    msg.width = 0.199728117675;
    msg.length = 0.0208068883594;
    msg.bearing = 0.302353918156;
    msg.pxl = 14533;
    msg.encoding = 211U;
    const char tmp_msg_0[] = {-115, 41, 25, -63, 19, -114, 90, -109, -14, 71, 91};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.991777057109);
    msg.setSource(12956U);
    msg.setSourceEntity(115U);
    msg.setDestination(38111U);
    msg.setDestinationEntity(140U);
    msg.altitude = 0.879466038682;
    msg.width = 0.820825870502;
    msg.length = 0.697699045806;
    msg.bearing = 0.0468590513478;
    msg.pxl = 20947;
    msg.encoding = 135U;
    const char tmp_msg_0[] = {2, -32, -69, 27, 86, 95, 118, -32, 85, -82, 74, -60, 42, -50, -35, 16, -122, -99, -116, -23, 114, -69, 121, -71, -79, -29, 66, -23, -6, 49, -10, -81, -90, -37, -42, -57, -38, 115, -19, 14, 40, -43, 105, 56, -51, -17, -101, -86, -56, 34, -13, 40, 3, 17, 91, 44, -42, -15, -16, -40, -47, 3, -106, -36, -128, 75, -87, 85, 10, -58};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.00250977084512);
    msg.setSource(35908U);
    msg.setSourceEntity(85U);
    msg.setDestination(21967U);
    msg.setDestinationEntity(75U);
    msg.text.assign("FXOEQJVMLQCLBHWZKXEWADXURAYTWQDFBWVAXZEIDGRVHVGQNWOWUVUODXUCYYCNHJPBYKSOPNLGMAGLUPNFJBPAYPANVMZJHZELIJUODJLJPWAXKKSEBDYKDWXPOHMUSQJOQGCVLONZIKITMHCSTPMUIJGXTZSQIBFGGFVTCQVNKOUNMDALTRHYLEBPPMCRIWHFSXAMCLYNKZSGKFEIAI");
    msg.type = 245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.893061142629);
    msg.setSource(49126U);
    msg.setSourceEntity(93U);
    msg.setDestination(8225U);
    msg.setDestinationEntity(182U);
    msg.text.assign("AVJOTHGUKLXCYPYUMBBBTDXGVOOURZFEGKYAMIGQOQIRDHFUZJJKCZNGSEDQREHXFNJDFNWLUEGTMMEEFPBEZVLOSXYVSAUYVCKJGIRGNCQQOLCNTSHZRKTWPHUZJQEOZAKMRWHARVITFOKBBUASFMPWYLNBUSACCINLGXSIHVZXWSBPMWAEKIQQJFJFTZCDPDXOCVCVWIFLINIRPMLQKYWTUYZMSPDNHQOLWTWHXXHARTYMGJELRSDVBDN");
    msg.type = 123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.0475343789351);
    msg.setSource(46336U);
    msg.setSourceEntity(205U);
    msg.setDestination(46834U);
    msg.setDestinationEntity(42U);
    msg.text.assign("DVJZGNAMRUNWGYDBXKLMOQLNRLCBSMEFFBRBYCAFVQOXBHJSPLQRVNWWWCHXFBRVBVQD");
    msg.type = 252U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.841341182847);
    msg.setSource(4376U);
    msg.setSourceEntity(7U);
    msg.setDestination(60963U);
    msg.setDestinationEntity(215U);
    msg.parameter = 103U;
    msg.numsamples = 211U;
    msg.lat = 0.950087561711;
    msg.lon = 0.192090077603;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.158232022174);
    msg.setSource(46547U);
    msg.setSourceEntity(179U);
    msg.setDestination(56906U);
    msg.setDestinationEntity(253U);
    msg.parameter = 120U;
    msg.numsamples = 9U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 4604U;
    tmp_msg_0.avg = 0.129118655821;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.455520943314;
    msg.lon = 0.476580935119;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.699865938953);
    msg.setSource(16895U);
    msg.setSourceEntity(86U);
    msg.setDestination(54540U);
    msg.setDestinationEntity(169U);
    msg.parameter = 190U;
    msg.numsamples = 193U;
    msg.lat = 0.0529583992969;
    msg.lon = 0.762856619804;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.83230995638);
    msg.setSource(26462U);
    msg.setSourceEntity(171U);
    msg.setDestination(19915U);
    msg.setDestinationEntity(64U);
    msg.depth = 18536U;
    msg.avg = 0.616600346325;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.619807316101);
    msg.setSource(49212U);
    msg.setSourceEntity(126U);
    msg.setDestination(47914U);
    msg.setDestinationEntity(20U);
    msg.depth = 62773U;
    msg.avg = 0.885476915345;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.601090920779);
    msg.setSource(64479U);
    msg.setSourceEntity(177U);
    msg.setDestination(51069U);
    msg.setDestinationEntity(30U);
    msg.depth = 17137U;
    msg.avg = 0.85127250541;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.315789513404);
    msg.setSource(43281U);
    msg.setSourceEntity(220U);
    msg.setDestination(49106U);
    msg.setDestinationEntity(28U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.853318545512);
    msg.setSource(45437U);
    msg.setSourceEntity(186U);
    msg.setDestination(46581U);
    msg.setDestinationEntity(181U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.83844349833);
    msg.setSource(44097U);
    msg.setSourceEntity(28U);
    msg.setDestination(10085U);
    msg.setDestinationEntity(188U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.524841971206);
    msg.setSource(19915U);
    msg.setSourceEntity(66U);
    msg.setDestination(42232U);
    msg.setDestinationEntity(193U);
    msg.sys_name.assign("DKYVXPQITAGLGBYOKGPEBFNVHVFMJTJNJZZTUDBBCKEEMIAUOIARHGXDAICZLHIYBCMPKLUWAQRSGVQSEMQNJWVSJTOZUD");
    msg.sys_type = 65U;
    msg.owner = 59370U;
    msg.lat = 0.708016454962;
    msg.lon = 0.655602281225;
    msg.height = 0.910469341217;
    msg.services.assign("FDLWPFRRKGSRHCXIUPMZNCDYSAKAOBOLGKRXIZGQXPCCNVADUZEMFXDNTOGYSMUNLTFOSERHBVANBOSKYFCSBKMVZPIGIFREIWJHNYAJPKNYWUAXUJYUCAXBBQIWOCKSDQJPMPENLTIRQHGPNEEHWYIAUDUIRARTLQCKKBUHLGYTKTXSPVJTWHEAFVIBDVLQQQGSVYQZQFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.694652879028);
    msg.setSource(50112U);
    msg.setSourceEntity(119U);
    msg.setDestination(63388U);
    msg.setDestinationEntity(189U);
    msg.sys_name.assign("ZOBJZGCWWEHGMNKUSXCYTGPLTTRKQZMTQLIUCFOKWLOWARCKIUIDGEDDKRFYJGBQYFYFHNJYGXVBKUBHMYXMAZVYYDLMSFQOLGPHNHTODVEANNLSRTXFQTXJIPE");
    msg.sys_type = 203U;
    msg.owner = 17919U;
    msg.lat = 0.189405111969;
    msg.lon = 0.671943723441;
    msg.height = 0.990879022358;
    msg.services.assign("LGYBDPHNRFNJSNNPVPSUUUQVGTHEXOBGZQXUFZQMRTGQPZTBMUFHJNAIIFAMRIDNYEINHJKZKQWMRJKDFLLCLKXCHGAZOTVBIDRJQJEDWRLWDACWTPKPENAPSULFOZIRZWAPDHWOJXZVSRUQULZHCXWYORBHWTTZY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.258536798245);
    msg.setSource(7271U);
    msg.setSourceEntity(20U);
    msg.setDestination(45452U);
    msg.setDestinationEntity(234U);
    msg.sys_name.assign("GKFJKROKBUYLNFJYLAWQNZOKAYCLTNGGSGVEMVNYQFEIRWXEMLUJFUHVPDSTXNDEMZSKJWIFPTVWAQJZXHBGNIWPHGYFUNEWLPBIAZSYKQRZAVONGMXVUETRSHOWOWDOSHJRSSAZEMTHXTPNVEFDTTUIDYLLKITRUG");
    msg.sys_type = 138U;
    msg.owner = 44078U;
    msg.lat = 0.0726471964079;
    msg.lon = 0.323116624839;
    msg.height = 0.770619346476;
    msg.services.assign("ZTXSWFIPUEBPORHFNEFMOQABZBBSLGGRTVTGUFTDLMKQJWJPNDUTCCXWYIFVXGJTBARJZCZSHEIWKYDNNWREJNVRPKNXRPGMSKBUJRYVSHQXLFOKAAWDYMFJUZM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.0755982050998);
    msg.setSource(47781U);
    msg.setSourceEntity(4U);
    msg.setDestination(32727U);
    msg.setDestinationEntity(164U);
    msg.service.assign("NTQVSXYPJNPECGAXNQCFSHBLOGDWHWIIVALTXFPAWVFYHQKKPIBZBJFMNDJVXCQJEOCSTRRKXTGNDLHYVMZEDLXCTKLFWNMHWVAXWSRIUBKMMEOCAZCLUFYRUKFNAJXXORPFCYODDSRQLFUUMRDJOAQFZZYBLQAYEZMOKHHUSGJESKOMDUWRLTRAIJDPIPVUZGUQYIEHOYPTZEWBITTOZXKTGGBCSP");
    msg.service_type = 162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.148212513905);
    msg.setSource(58969U);
    msg.setSourceEntity(142U);
    msg.setDestination(26520U);
    msg.setDestinationEntity(101U);
    msg.service.assign("AFBANEFTHFXSDBQKEYTWRCWBSMLUAHVCAXZNGYXBRDFVYPCRVFIOKIQIUUHVYZPNTXGIMQYKZICLHDYVIVDJOBIGDOYGVWSRIOFJOMRRKHCCJMTQMZFGLRNPVXXOBLEIHPMYXWJZPGWMAESJCLUUIRWOFWWBGUCMPOPQZQLYSLDTGNEEMXMSP");
    msg.service_type = 39U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.845366353757);
    msg.setSource(14020U);
    msg.setSourceEntity(90U);
    msg.setDestination(38287U);
    msg.setDestinationEntity(192U);
    msg.service.assign("PSJICDEQGXSNHCQKFQYCNIVXANTDNBUFLACYFYBYLAJSAXWNTJZAFNPOHIZRWJFDWZMBXGPGTLRMYJVVQYSHCCBOZHOAGRMSTYPOSAAEMUXGOKPUARIEEJFHJRWWVDWNHWCLTZEGJNNRHVKZGIUDXVBSDYPMAVJZOQIIPZOKGVGBYWUTBPUREDROHLEKZHFVFXVCXNDTUZKLQIKXKEIFMDJCQSLKTOEXDPUQWGOHC");
    msg.service_type = 185U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.770794626898);
    msg.setSource(4112U);
    msg.setSourceEntity(61U);
    msg.setDestination(28443U);
    msg.setDestinationEntity(211U);
    msg.value = 0.467129894467;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.14149847042);
    msg.setSource(6972U);
    msg.setSourceEntity(251U);
    msg.setDestination(59730U);
    msg.setDestinationEntity(144U);
    msg.value = 0.115718658507;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.765739441006);
    msg.setSource(23795U);
    msg.setSourceEntity(231U);
    msg.setDestination(35318U);
    msg.setDestinationEntity(204U);
    msg.value = 0.959822891134;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.196936156515);
    msg.setSource(51967U);
    msg.setSourceEntity(251U);
    msg.setDestination(45831U);
    msg.setDestinationEntity(174U);
    msg.value = 0.0711481032025;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.47816637813);
    msg.setSource(30657U);
    msg.setSourceEntity(166U);
    msg.setDestination(3972U);
    msg.setDestinationEntity(62U);
    msg.value = 0.225701930324;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.851761601093);
    msg.setSource(64367U);
    msg.setSourceEntity(131U);
    msg.setDestination(45081U);
    msg.setDestinationEntity(125U);
    msg.value = 0.850572929082;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.311035453121);
    msg.setSource(11059U);
    msg.setSourceEntity(23U);
    msg.setDestination(5276U);
    msg.setDestinationEntity(168U);
    msg.value = 0.0548928902036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.252750260074);
    msg.setSource(54268U);
    msg.setSourceEntity(167U);
    msg.setDestination(31092U);
    msg.setDestinationEntity(67U);
    msg.value = 0.0842413493674;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.979871476041);
    msg.setSource(53907U);
    msg.setSourceEntity(3U);
    msg.setDestination(7665U);
    msg.setDestinationEntity(78U);
    msg.value = 0.400872042725;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.674332023579);
    msg.setSource(46789U);
    msg.setSourceEntity(95U);
    msg.setDestination(38289U);
    msg.setDestinationEntity(150U);
    msg.number.assign("YUHMXTHLLHWDMCDWSBHEJBPFSQDPMYZILQPZXMAXTUKEPNQLDQYJPVRPEVGCKVZBNSCDYJDHNICKDJBNUQQTRRQZRMTBKKYVTANVUBARSMGPNTZ");
    msg.timeout = 9023U;
    msg.contents.assign("ROJWEUHVKWJRRXKGNPTIBOLBZHKMTXZCRTBYXLMJHPREUWQZXDJTYTQSNRGSIXIEXGEDILGECEHOEMZQCUQXFHSIZIFAHYMNUVDZPQNRAIPQLOCQGSFCVRDAIOSCGNWLFIYOWQJMVTSODEX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.912834163753);
    msg.setSource(4274U);
    msg.setSourceEntity(159U);
    msg.setDestination(10320U);
    msg.setDestinationEntity(197U);
    msg.number.assign("SPJEPKEXOFIMGKGCAITNMLZORWRHNSFNIXTDUAKLAYVFPXBNDYYZKSYZJHATIQIFZJQUVKZUDBOP");
    msg.timeout = 58068U;
    msg.contents.assign("QNDXBCRMRZUGJCUSJHGJCGSQKXZRYBPIKRCQWNKMLFNFVVDALNQHLDDOWMHUVWPAOHQEBXEWYNFQIOFAFQZUGGEXJRELXUPPEODYHULJKJTCGRTKSGDSIIYYSWDUVVOVHMJKKTEZGHMMBLRINHXJCIPZPBMNECYSZUFSCGOKTUBVONPGJXEAPTIAWXFNBLPWFTNBCO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.880649580481);
    msg.setSource(63549U);
    msg.setSourceEntity(228U);
    msg.setDestination(30633U);
    msg.setDestinationEntity(87U);
    msg.number.assign("GIKPPKCECUFVYQKZVFYLZOFVAGTLKOTAHYI");
    msg.timeout = 57315U;
    msg.contents.assign("YTTWBQPNHJFZNPZSILYKPAUXIRABNVLVDBNWFQAUDWQMYRUWUVXIBPFFXPUAOJVSBWXSIKCFCTMCVPVMZOTEGHGMAICTUS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.0410360963261);
    msg.setSource(56340U);
    msg.setSourceEntity(206U);
    msg.setDestination(30797U);
    msg.setDestinationEntity(233U);
    msg.seq = 3978156056U;
    msg.destination.assign("JVUTHHKJPGRPGIMAZZTDWYVFVLOJJZBAQMIOSECWSLCNVWOEQIXZUOBTEYYIYNMEJOXQRALSVRKHFQZNMGXACXTMXAAJTNXQPTNIREEBYXAMNCQPHPSFWNXNYPGOIUSWSCEATDKUYCYBXUMNHBPBTOZEAZUFQWHGDOPBGLBVSDPLCFLSKYORUKNDGELUVBIZQRUFPEHO");
    msg.timeout = 37935U;
    const char tmp_msg_0[] = {-112, 11, 104, 37, -64, 18, -31, -128, -53, -38, 65, 116, -28, -120, -75, -12, 0, -51, -124, 3, 102, 95, 0, -53, 35, 83, -125, -90, -16, -120, 114, 111, 1, -17, -24, -115, 113, -70, 54, -28, -65, -70, 82, -44, 102, 42, 39, -85, 83, 114, -11, 86, 39, 51, 5, 27, 88, 116, 45, 121, -24, 103, 43, -110, 71, -119, -21, 53, -69, -85, 17, 116, 102, 119, 5, -4, -90, 90, 107, 103, -58, -22, 52, 2, 70, 3, 125, -33, 95, -117, -61, -87, -67, 17, -41, 120, 10, 44, -104, 50, 27, 22, 96, -25, -97, -3, 38, 88, -103, 120, 6, -5, 92, -125, -50, 112, -23, -116, 75, -41, 94, -113, -114, 9, 116, 108, 59, 47, -5, -12, 29, 73, 35, -12, 10, -56, -114, 85, 56, -97, 126, -55, -66, 109};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.648048594048);
    msg.setSource(33914U);
    msg.setSourceEntity(30U);
    msg.setDestination(25084U);
    msg.setDestinationEntity(199U);
    msg.seq = 1477834553U;
    msg.destination.assign("POIAZPIRNOECJKIGLXVEIVJCCYAGQDPBEUAYGJFITPVMHYONFZHDJJQKRDULFTZHLZFTVPFEMMJMSZKYAOMBXYVFBWFMKSKPDTJUCRDJBBOCXJPQMVHFJVDQCFUAQBTRQ");
    msg.timeout = 50207U;
    const char tmp_msg_0[] = {90, -33, -62, -66, 2, -39, 63, -61, -95, 61, 122, 74, -2, -1, 108, -58, 34, -103, 116, 52, 55, 119, 122, 37, -90, -62, -14, 84, 18, -83, 113, -12, -61, -91, 4, 38, -28, -40, -111, -22, 80, -84, 85, -51, 107, 16, 36, -94, 124, -84};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.947728553351);
    msg.setSource(13477U);
    msg.setSourceEntity(237U);
    msg.setDestination(60508U);
    msg.setDestinationEntity(235U);
    msg.seq = 3675057883U;
    msg.destination.assign("DJOORIOKGNGGYIJJTDQLTSCNCYZJPQBFKVQKENQQDIKWUMZXMUSROZRPMVHVJOBOVYHFPKWTGREMAOYLPWVVYRXEWFTAAMDHLDZXDDGFCFUMOSIQZKZSAXRMZWUXNCJMAHCCSPKXSGPLEJUFXTBVEF");
    msg.timeout = 58824U;
    const char tmp_msg_0[] = {23, 68, -74, 26, 39, 21, -128, -44, -110, -21, -78, 32, 4, 65, 58, 10, -21, 123, 102, -64, -88, 63, 122, -29, 43, 51, -3, 73, 90, -37, -78, -98, -60, -89, 8, 27, 70, -52, 80, 98, 104, 74, 107, -67, 126, -15, -50, 31, -32, 93, -78, 18, 69, 108, 118, -49, -87, 47, -86, -84, 40, 91, -43, -77, 78, -73, -89, -114, 19, -7, -6, 83, 126, -71, 17, -100, -45, -70, 84, -98, -39, -42, -21, -110, 63, -115, -39, -116, -106, -74, -21, -50, 38, -4, 116, 119, 105, 71, -11, -113, 22, 99, -79, -61, 109, 17, -97, 30, 4, -48, 92, 49, -46, -103, -91, 84, 21, -38, 16, -20, -56, -55, 106, 41, -75, -93, -31, 91, 66, 108, -13, -28, -66, 115, -32, -56, -85, 64, -26, 125, -66, 34, -37, -101, 25, 12, -87, -113, -17, -19, -40, -103, -19, 72, 74, 29, -37, -25, -14, -71, -106, 115, -7, -17, 23, -124, -36, -107, -98, -97, 48, -91, 49, -11, -115, 41, 11, 85, -85, -107, -30, 97, 108, -65, 27, 17, -45, 8, -118, 60, 103, 43, 36, 108, -127, 13, -80, 26, -36, -47, 75, -12, -121, -27, -124, 19, 69, -122, 43, 21, 100, 126, -15, -22};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.109895138287);
    msg.setSource(2354U);
    msg.setSourceEntity(178U);
    msg.setDestination(17119U);
    msg.setDestinationEntity(94U);
    msg.source.assign("FCYTPQHOJLYSFHOWTTIICGWNENNKLXFNCUBNJOYEKMESARUFSZZRQANOBAISWYOGYQMVGVKBBJEARLIATPNVQOMTJUXVKMLKXOWXYWAEIDECMZNHQGPBJDRBMLLBSIRYOBAFHQPWFQCPDMLCGUFZGXRG");
    const char tmp_msg_0[] = {119, -58, 50, -68, -50, -116, -21, 122, 4, 71, 92, 104, -110, 49, 1, 65, 113, -28, 70, 4, 4, -63, -49, 59, 72, 107, 101, -94, -6, -82, 84, -116, -66, 113, 63, 44, 114, -118, -9, -91, -70, 6, -76, -1, 107, -79, 17, -1, 123, -76, 18, -77, -58, -81, 23, 51, 51, -75, -24, 25, -58, 46, 60, -73, -101, -2, 100, 43, -99, -112, -88, 85, -68, 50, 64, -10, 121};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.266947795449);
    msg.setSource(61796U);
    msg.setSourceEntity(57U);
    msg.setDestination(8074U);
    msg.setDestinationEntity(106U);
    msg.source.assign("ANYLYZPZGRS");
    const char tmp_msg_0[] = {68, -30, -49, 51, -10, -22, 14, -114, -38, -34, 73, 3, -103, 28, 56, 67, -6, 5, 35, 31, -1, -18, 94, 13, -117, -100, -9, -76, -71, -83, 20, 72, 121, -62, -69, 95, 105, -120, -40, 12, -109, 108, -41, 81, 53, -26, 56, -127, 95, 38, 80, -61, 73, 37, -52, -44, -4, -99, 111, -60, -91, 117, -107, -121, 48, 6, 90, -70, 94, -73, -76, 50, 118, -77, 82, -88, 41, 79, 71, 52, 10, -104, -101, 39, -63, 2, -74, -38, 110, 119, 27, -56, 60, -4, 10, 50, 119, -103, -86, 123, 110, -106, 51, 126, 3, -109, 74, -60, 21, -122, -68, 3, -96, 20, 72, -16, 123, 123, 52, -22, -78, 35, -15, 32, 107, 87, -59, 76, -48, -113, 104, -59, -1, -125, 33, -116, -58, 93, 66, -32, -59, 74, -88, 111, 9, 21, -120, -93, -6, 3, -35, 7, 84, -26, -84, 77, 3, -4, -82, 40, -29, -104, 5, -73, 30, 61, -77, -10, -60, -14, -111, -26, -55, 99, 12, 17, -11, 84, -6, -92, -16, 62, -45, -26, 64, -15, 51, -10, 32, 13, 90, -120, -117};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.556169083011);
    msg.setSource(61300U);
    msg.setSourceEntity(177U);
    msg.setDestination(16274U);
    msg.setDestinationEntity(53U);
    msg.source.assign("TDJVKECVLRZXILDHIVAEB");
    const char tmp_msg_0[] = {26, -82, 106, 21, -40, -112, -10, 84, 21, -71, 122, 21, -88, 61, -109, -10, -122, -77, -58, 49, 19, 22, 76, -16, -67, -5, -56, -100, 38, 45, -13, -68, -19, 92, -57, 39, 73, -26, 120, 3, -58, 80, -40, 111, 83, 112, -120, 113, 113, -97, -22, 13, -1, -22, 82, -19, -108, 1, -33, -41, -75, 125, 69, -47, -54, 10, -41, -113, -117, -56, 6, 88, 38, 65};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.72288437757);
    msg.setSource(44717U);
    msg.setSourceEntity(171U);
    msg.setDestination(45317U);
    msg.setDestinationEntity(236U);
    msg.seq = 3048241051U;
    msg.state = 101U;
    msg.error.assign("GCSSQMKRGPEARJMLMZRLNNTCLTXNXAAFFVSNTNWZWPBUBWXPGFZCORLWZSXFBDSQWPJYNAYJOYDIWVLRCKNJDULHCYGDOXUHQIZLXBTZDIKPMISERFQRUEYTRIDKYVWGJOIIWPGBUSJODILTAQLEVEDQUFJKISVMMBXELNKTQFRBRYJHOHPQYVGKHXGMKMACVCJEUFDSBAO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.224379754868);
    msg.setSource(62044U);
    msg.setSourceEntity(166U);
    msg.setDestination(34744U);
    msg.setDestinationEntity(216U);
    msg.seq = 2882769920U;
    msg.state = 244U;
    msg.error.assign("FEROKANVRFBVDQZECHSEHPBOGTOAMENPTKLYKGYJKPXJQGWKULUBZMTSHQEPTCVOCAUKYMVLIORRVLWIWWKPXVYSISIWCZWFNYAGOSPXWQDNYDUSLQUMHOHXJQFAQHXXECPJCAFIFLBIPZBMYGERARRTS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.556991113469);
    msg.setSource(65268U);
    msg.setSourceEntity(40U);
    msg.setDestination(64524U);
    msg.setDestinationEntity(205U);
    msg.seq = 1526667800U;
    msg.state = 196U;
    msg.error.assign("PXBPGTRERPKSOCMFAU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.932865246168);
    msg.setSource(63940U);
    msg.setSourceEntity(248U);
    msg.setDestination(56309U);
    msg.setDestinationEntity(1U);
    msg.origin.assign("TKMVQHESKFLMQCCOFLBRNGXPL");
    msg.text.assign("WVTXISQXOJHBDZFDMJPFRPKUVEREAKVWVUXWLCGUAOVJIRTRGYQNSHAKLDXILBIKMCITQBDSSDVOXUKQDZCCMFNHELKJBETGODRNZKLSSDLUOTZPEGRZONHVFPVMGWFJJPYPFNBB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.0774289724308);
    msg.setSource(17479U);
    msg.setSourceEntity(53U);
    msg.setDestination(20868U);
    msg.setDestinationEntity(38U);
    msg.origin.assign("HORGGCREOCVVHMDIXCTWDBHASPWQSRRNSZKFOVLMKXACHCENPVWMWWAGJQEMJJBGQXVTLEPDYDJMOBJKDAUUKPXEPIGVUZZAFFFXFYBNTNCZSLPEGQHDRLQZGKRTBHSSRSMRLXPRSSTKUYECDJRJZTEKIZYIMIBNIWZYON");
    msg.text.assign("ZYNXVDOHITFCQMHLYJDIVXZSKCFIGRCCMLFBULHNQLYRKMDECLJXIGOGZSCESWNXNAHIGMYAOAOAREGXLTFKCIGYEQCADKRPHQVCCEDPZELKKZMJOKBGFNORBVVEMJIRMIBEWYVANTUZUYTUFHLQPAWSPAVFUWSSWLBBTQQOQFSKQDMRTVWDXXOWKPNYPKEFVHSAXDPPUSMABZRSYNIZLHQTYUTWDEHRDIFTROJTOJBXGGUJJNXUHM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.710584230319);
    msg.setSource(43491U);
    msg.setSourceEntity(95U);
    msg.setDestination(41873U);
    msg.setDestinationEntity(84U);
    msg.origin.assign("DBQZGJNKGWVWYPJGCIYBBRDIUVCQXKDJNIEOGPWHDYPFGOMOOTBKYAEZRPTMXYURNZUISEEMZFCEWLSONMXOVEDFZJFWMSSWATKVQZSHLCCXXJHYVNUUURZCRFBKQLHEDUKIRMYKANVTXJSTDGUNXKHALJYBVINQFPIAGCLLHKOGPNFEXZSUCIMGQTT");
    msg.text.assign("WFGJKODNOTYQOXERMYSCMUSLOVJGEBHWSMXMURQTVHFWCVWHYQYBLSPCYQECRDGSXHUNFZAWSJPVCWVAPPILGLOB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.456110972614);
    msg.setSource(16841U);
    msg.setSourceEntity(53U);
    msg.setDestination(29425U);
    msg.setDestinationEntity(14U);
    msg.origin.assign("PXRKKPOABAFHPUXEUBPCIVZPOLJZPLSODNXRWQFKIKVNYNCZZDUENHKCFYRAFVHKJETSQLEWRVYRGNYBMNHIMGPOVTTFAAKHGRBMLAEXLDTZWQLYBNGYEDDFWQYRUUCZTTYHDCWKCJOYXLMGLMIXSCW");
    msg.htime = 0.260089892914;
    msg.lat = 0.39835655747;
    msg.lon = 0.141869276479;
    const char tmp_msg_0[] = {-84, -69, -117, -74, -98, 122, 47, -106, 53, -69, -119, -19, -24, -57, 19, -84, -128, -107, -93, 86, 86, -91, 35, 77, -71, 61, 98, 35, -46, -57, -28, -62};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.67758747288);
    msg.setSource(34844U);
    msg.setSourceEntity(64U);
    msg.setDestination(53330U);
    msg.setDestinationEntity(217U);
    msg.origin.assign("CMHJWUOBFLAATSGHHGLKWCQXAAVXNWHZXZVBGJER");
    msg.htime = 0.547728514643;
    msg.lat = 0.0191607916683;
    msg.lon = 0.266792735014;
    const char tmp_msg_0[] = {25, 24, -89, -76, -49, -52, 53, 77, 18, 37, -12, -26, -90, -77, -92, -95, 38, -42, -61, -52, 112, -34, 37, -39, -66, 29, 122, 83, -116, -89, -114, 49, -54, -81, -65, 116, 45, 13, -45, 8, -76, 9, 77, 120, 123, -97, 46, -128, 36, -102, -1, 73, -16, 93, -78, -120, -68, -85, 16, -124, 71, -91, -79, -88, 2, 50, 59, 24, -117, -66, -77, 86, -80, 60, 4, -95, -34};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.210733594545);
    msg.setSource(24421U);
    msg.setSourceEntity(153U);
    msg.setDestination(58368U);
    msg.setDestinationEntity(49U);
    msg.origin.assign("AHUNIWZNNWYCABTTJYLBUEYIXMJSDTSRAEXMYQVNFKCSWAJBBZOGLEDFHBWHRDDHAYWOQVSPDQAUFQHNEOVUBRKELJAKMPZUGVCGZKLXJRGNEVEWMMONVPHKQQRYCMTXHXXSDKSOMBRALZAZUSFQOSNRKJOLGBODGJHIWQEYZCTJIQYDTPZWITCGCGRLFWRSF");
    msg.htime = 0.261111353351;
    msg.lat = 0.951150145393;
    msg.lon = 0.51884514583;
    const char tmp_msg_0[] = {-29, -29, 67, -112, 120, -122, -64, -91, 25, 113, 69, -100, 37, -41, -69, -36, 40, 77, 0, -121, 30, 52, 3, 36, 39, 16, 101, 42, 124, -105, 37, 3, -34, 13, -71, 74, -20, -110, 44, 25, -2, -108, -125, -73, -40, -94, -76, -8, 48, 36, -84, -62, -45, -83, 126, -101, 86, -24, -19, -102, -94, -27, -106, -67, -89, 4, -46, 39, -116, -114, -28, 83, -49, -39, -94, -22, -19, 86, -48, -92, 0, -104, -53, 90, -83, -6, -74, 35, 100, 126, -38, -72, -56, -27, 9, 94, -21, -83, -70, -30, -7, 105, 64, 109, -84, -8, -112, 13, -70, -26, 99, 26, 91, 55, -106, 90, 27, -29, 82, -48, -76, -42, 32, 78, -47, -41, 95, 91, 101, -20, 68, 6, -19, -79, 23, 43, -35, 37, -56, 1, -104, -63, 77};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.714983121534);
    msg.setSource(45401U);
    msg.setSourceEntity(188U);
    msg.setDestination(45710U);
    msg.setDestinationEntity(213U);
    msg.req_id = 3669U;
    msg.ttl = 38326U;
    msg.destination.assign("ATJFJBPQGZWLZUJDDCBEJGNXCKKLVQYWFGNGSQWEMUBTYQGRBDMXPPNRZ");
    const char tmp_msg_0[] = {17, 47, -58, 23, 19, -58, -2, -37, -30, -110, -90, 82, 119, -82, 5, 36, 48, -120, -2, -113, 65, 101, -21, 79, -73, -45, 92, -85, -84, 30, -15, -8, 116, 86, 36, 55, -51, 86, 78, -116, -101, 66, 114, -43, 50, -18, 24, -6, 77, -70, 75, 30, -104, -35, -62, 101, 15, -33, -60, 102, 73, 120, -112, 45, 102, -31, 105, 61, -3, -71, 2, 85, -80, 52, 38, 91, 86, 78, 115, -40, -113, 93, 72, 73, 18, 21, -63, 82, 33, -67, 67, 93, 83, 47, 27, 101, -94, 12, -24, -111, -114, -71, -67, 64, -24, -43, -87, -27, 67, -11, 119, 77, 25, 80, -41, 14, 43, -128, 115, -116, 37, -85, -74, 84, -69, 2, -34, 120, 116, -37, -34, 119, -102, 41, -70, 9, -118, -80, -104, -44, -73, 83, 105, -28, 17, 64, 8, -57, 125, -90, -23, 123, 68, -123, 61, -95, -52, 7, -124, -66, -94, -33, -34, -77, 73, -13, -8, -14, -119, 3, -3, 69, 26, 6, 42, 85, -71, -55, -111, 51, -66, -100, -95, -45, -106, -103, 45, -112, 105, -17, 29};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.644200718791);
    msg.setSource(9036U);
    msg.setSourceEntity(4U);
    msg.setDestination(48473U);
    msg.setDestinationEntity(76U);
    msg.req_id = 21938U;
    msg.ttl = 6053U;
    msg.destination.assign("ALJZARWVRWUNDFENBTFOYFPKJAUDQZQWRFEKCXIIRBHLNLBFPVDSQVYSPLOXGTGXSLJZMZIEEIKEITQPTRVNOKWSOKOCQVFDGNNYXOBJNKOMIEAZYTNCGJJYYUDDOODYHM");
    const char tmp_msg_0[] = {15, 37, -111, 59, -98, -21, -5, 117, -70, -53, -94, -26, 96, -128, 126, -66, 65, -36, 73, 119, 81, 122, -89, -79, -124, -25, 35, -46, -126, 116, 61, -89, 69, -40, 31, 48, 101, 1, 56, 95, -124, -84, -23, -10, 114, 16, 25, 28, -38, -100, -58, -81, 44, -55, 18, 33, -80, -68, 21, -50, -107, 91, -60, 108, 99, 121, 8, 22, -96, 113, -51, -114, 103, 115, 18, 107, 114, -56, 83, -103, -14, -87, -58, -36, -41, -3, -119, -13, 52, -123, -28, 35, 48, -17, 90, -127, 123, 108, 51, 105, -83, -19, -62, 39, -59, 18, 20, 73, -98, 16, -11, -115, 66, 0, -75, -76, -94, 69, 3, -20, -49, 51, 37, 43, -3, -44, 115, 11, -83, -111, 64, 68, 4, -120, 42, -89, -85, -72, -82, -22, 62, 126, -40, -9, 91, 85, -94, -126, -64, -64, 70, 21, 29, -125, -53, -80, -33, 35, 16, -27, 83, 75, 36, 64, 113, 77, 83, 30, 22};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.920330158309);
    msg.setSource(62370U);
    msg.setSourceEntity(14U);
    msg.setDestination(28622U);
    msg.setDestinationEntity(253U);
    msg.req_id = 16349U;
    msg.ttl = 64197U;
    msg.destination.assign("HFAQVKZKNZLURVENAOUJWPHYOTGZBIZVSITHLPUJJEJWLQUGDZEODHMMSKIAZOXAHNWCWEYKFBUGJLIMTIYBMQALVNVKOBLUVJTEUDRPGSHRBGZQXYQFTSSYQFESBZPIDCLTMCYDDNSLOHARBDVRGXBWWKKMCIRHNKFRYMEYUBGCRONCXVTFNLHKVDUGVFIPPJAWEFZIXTUZROLXPTAOJOBYWQYCDPMJAHKASSNPWECGMNECCFXQIDRFWJP");
    const char tmp_msg_0[] = {-87, -65, 114, -28, -21, 124, 117, -33, 8, -48, -94, 121, 37, 59, -80, 92, -107, -12, 72, -35, 84, -35, 79, 98, -7, -122, -102, -38, -81, -82, 93, -31, 46, -67, -123, -73, 61, -60, -92, -44, 8, -29, 20, -84, -99, 33, 79, 96, -3, 80, 69, 34, 5, 68, -54, -99, 46, 21, 83, 72, 0, -113, -72, 96, 84, -8, -78, -22, 61, -9, 93, 93, 122, 122, 115, 102, 63, 114, 60, -73, -57, -20, 111, 118, -51, 99, -10, 48, 11, -36, -14, -77, -4, -122, -72, -39, 56, -13, 71, -31, 99, 107, -98, -103, -42, -5, 107, 15, 117, 67, -46, 39, 1, -68, 30, -73, 17, 59, -27, -33, -53, -91, -94, -125, -43, 94, -122, -98, 37, 75, 69, -28, -73, -19, 63, 6, -110, -12, 44, 35, 58, 28, -123, 0, -7, -98, -52, -91, -114, 0, -121, -45, -74, -115, 115, -62, 2, -104, 95, 43, -81, -32, 123, -29, 18, -70, -34, 46, 46, -61, -71, 15, -88, -108, 113, -115, -41, -23, -79, 57, -21, -32, -80, -27, 108, -51, -60, 100, 77, 122, -103, 43, -86, -67, -26, 13, 105, -23, 100, 118, -22, 65, -11};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.962504248756);
    msg.setSource(5180U);
    msg.setSourceEntity(76U);
    msg.setDestination(48261U);
    msg.setDestinationEntity(206U);
    msg.req_id = 51893U;
    msg.status = 216U;
    msg.text.assign("RZXLNBDWJBHUROZNAXOMTFQFVNTMIEDCHRNPGQESLIFTCJMXFGUYKOEGZVWPISSCKAZEXVCYWOTAWZDYDEIWSPVEPDMEKACTWXHYLJMZI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.159190592982);
    msg.setSource(15628U);
    msg.setSourceEntity(18U);
    msg.setDestination(4838U);
    msg.setDestinationEntity(128U);
    msg.req_id = 15414U;
    msg.status = 15U;
    msg.text.assign("NUPXTUPYPHXYCBNEJYLSSRBBMJXCWLUQROCSYQXDCQAGDJEWHELNQETWEYFPMSUXRTSMZFSTCMAJLZYHZFROITLVASVTFUDZSKTURCLGMCKKJFOZKLBIOQEUDOEHJKJDVIKWXDEOXYUWFRUYMBGYGGFDWBIGZLTKCIIPVHRQRRJRBMBSVQJGAQTNPDAW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.88105673243);
    msg.setSource(23976U);
    msg.setSourceEntity(119U);
    msg.setDestination(45043U);
    msg.setDestinationEntity(15U);
    msg.req_id = 47876U;
    msg.status = 5U;
    msg.text.assign("IIURJZCXPGNALFDQIWMRBXZPLLOCTSAJWMBQJKFMRJONZPOWHNVOQCOMAFPSZGIVRHUDCKTFQRLEIPEHNASZYFJHZTMHHUEURAXNHWITACEOBYXETLNFPACVGHVEBBHIVIYSYYMLISKQPQWFWJLZJNOKKENXEXEUDNVILCHDSKVMXCNBTDWGTBPWYATPSDUAMMCGSGJRYSSTJOUZRJRKQUMGQDPLAYUVDFGDVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.0339515282919);
    msg.setSource(12833U);
    msg.setSourceEntity(178U);
    msg.setDestination(43556U);
    msg.setDestinationEntity(115U);
    msg.group_name.assign("WNFCDTPUCOJYLTHUMLATUYQQKDDBCASGPMSLCNKODMKDLYXIONGAJREEGKAZCMBRUSGCXMVRRDKBHSFZGXXMHVIRAXAZRLPPIYOWHEDFCTRZSWHSFPTZLLHJWLKKQYWNWBXEVPGKJNECTOVUFFPXGVIWUMMZSHBEUAMEXQMEZCXYFQGBBVRIDGQPQDVIUYOIAFQTVYXYIWTOOBFVBJKWVNSJLNUWNGZPTCILJTYRZSINNHPUQHZOK");
    msg.links = 190412234U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.144763739233);
    msg.setSource(44422U);
    msg.setSourceEntity(0U);
    msg.setDestination(16982U);
    msg.setDestinationEntity(106U);
    msg.group_name.assign("VYYCQBYDHOVVFCZ");
    msg.links = 224824229U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.260635268098);
    msg.setSource(43160U);
    msg.setSourceEntity(168U);
    msg.setDestination(27792U);
    msg.setDestinationEntity(220U);
    msg.group_name.assign("RZYGWFNASJDNUSAIQMXPJQDHPVOVHBQGAZSICAVZHDFWVYUUCVHTMVAEBKOZRETCEWXRTXQPYGQIIAHSQFPJLGYBRDMUWLZNLUGRYHMOEPPIKKUBJEQUSJCZWXNDUWXXJECKHGCTFFNHVIBYYFMEFCIMLWGKLVWHZJKWOTPJOZDRKPEZKSIVAWDVSGRFISBSMUAOCTRCZYLLKNONC");
    msg.links = 18316795U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.23951109164);
    msg.setSource(30145U);
    msg.setSourceEntity(192U);
    msg.setDestination(15037U);
    msg.setDestinationEntity(236U);
    msg.groupname.assign("ZPQMCNVRLIZUDAMRYEXDLQVFRTDXKJQQIVHHHQFTXGBQQZBNEKREJDTJSNFEDPLLPXXWHODEFJBNAKMASJNSCCIYJGXJWZUQSGVFGUDEJ");
    msg.action = 112U;
    msg.grouplist.assign("DVSFBYKVIOALDGARDVNUPDQQBWCSYHQWPNAOOBZSGQMHUSCNFZZPXHNCBRKWVEKRPEEYVLJWUHJJM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.967463957961);
    msg.setSource(59719U);
    msg.setSourceEntity(3U);
    msg.setDestination(30310U);
    msg.setDestinationEntity(44U);
    msg.groupname.assign("MSCORGQXWFQRNCQGJSDSRPJYI");
    msg.action = 129U;
    msg.grouplist.assign("LKPENJFXBIVVVWPSDWGRQMJUKDXNTPHUSPXFNWUNGBKGTDNVOUTHNERUTAYECDBLXYCODXBKMSKDUAIVL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.335673336199);
    msg.setSource(43996U);
    msg.setSourceEntity(32U);
    msg.setDestination(14989U);
    msg.setDestinationEntity(64U);
    msg.groupname.assign("FBWQBKUXLS");
    msg.action = 168U;
    msg.grouplist.assign("DQRFERNDKPITOZWBAJJGMKXUYGYBDBKFLHNRGNSBPBOPHFRLVCDRJWXBOBZNYBLXYGQMEETJKPYRRCQMWTVFTZRXGKEIDITJSAVESTNOQHMZISIJNSEUTDSGZHLVWYHKTJMFUPOHXGEQZHKSDVDCPSKYOMXCOLHAGLFA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.0030165930015);
    msg.setSource(23055U);
    msg.setSourceEntity(58U);
    msg.setDestination(17798U);
    msg.setDestinationEntity(203U);
    msg.value = 0.807894469182;
    msg.sys_src = 7128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.927127464805);
    msg.setSource(52573U);
    msg.setSourceEntity(172U);
    msg.setDestination(10287U);
    msg.setDestinationEntity(7U);
    msg.value = 0.693246801303;
    msg.sys_src = 14479U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.751170132156);
    msg.setSource(29139U);
    msg.setSourceEntity(198U);
    msg.setDestination(13650U);
    msg.setDestinationEntity(134U);
    msg.value = 0.726038092607;
    msg.sys_src = 59435U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.327205960749);
    msg.setSource(42039U);
    msg.setSourceEntity(76U);
    msg.setDestination(42187U);
    msg.setDestinationEntity(135U);
    msg.value = 0.933883098234;
    msg.units = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.940504986709);
    msg.setSource(38534U);
    msg.setSourceEntity(82U);
    msg.setDestination(52801U);
    msg.setDestinationEntity(144U);
    msg.value = 0.795610985147;
    msg.units = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.704353677399);
    msg.setSource(46728U);
    msg.setSourceEntity(121U);
    msg.setDestination(6033U);
    msg.setDestinationEntity(61U);
    msg.value = 0.645470208376;
    msg.units = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.428670888477);
    msg.setSource(23110U);
    msg.setSourceEntity(165U);
    msg.setDestination(48656U);
    msg.setDestinationEntity(108U);
    msg.base_lat = 0.351569304562;
    msg.base_lon = 0.398121185618;
    msg.base_time = 0.168821204054;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.0457773000143);
    msg.setSource(10636U);
    msg.setSourceEntity(82U);
    msg.setDestination(53902U);
    msg.setDestinationEntity(187U);
    msg.base_lat = 0.558559022195;
    msg.base_lon = 0.692372291976;
    msg.base_time = 0.35945638339;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.935301894048);
    msg.setSource(33168U);
    msg.setSourceEntity(250U);
    msg.setDestination(57482U);
    msg.setDestinationEntity(79U);
    msg.base_lat = 0.865742646301;
    msg.base_lon = 0.00646632257721;
    msg.base_time = 0.365097799073;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 5974U;
    tmp_msg_0.destination = 7530U;
    tmp_msg_0.timeout = 0.92216765969;
    IMC::PowerChannelControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GXETFXDBVGOFWRRBZNXNDAMBBSPWHMDOQCULZPDQZNNJFPTSRKUKTYMVNHQGQYHRKLQHSRFYQZCKNOYTQEAX");
    tmp_tmp_msg_0_0.op = 241U;
    tmp_tmp_msg_0_0.sched_time = 0.398910392051;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.117700979157);
    msg.setSource(36186U);
    msg.setSourceEntity(200U);
    msg.setDestination(36952U);
    msg.setDestinationEntity(28U);
    msg.base_lat = 0.279354396545;
    msg.base_lon = 0.149804348345;
    msg.base_time = 0.82344624235;
    const char tmp_msg_0[] = {20, -105, -34, 27, -95, -97, 42, 8, -12, 1, -71, 17, -7, -105, 77, 67, 111, 93, 120, 48, -47, -128, 120, -119, -41, 97, 4, 3, -32, 2, 126, -22, 46, 110, 68, -64, -48, -117, 2, -48, 93, 18, -81, 88, 98, -39, -49, 122, 42, 55, -35};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.650417263375);
    msg.setSource(40202U);
    msg.setSourceEntity(10U);
    msg.setDestination(4191U);
    msg.setDestinationEntity(187U);
    msg.base_lat = 0.522796260019;
    msg.base_lon = 0.0593801326283;
    msg.base_time = 0.0579344449482;
    const char tmp_msg_0[] = {63, -26, 104, 83, -79, -31, -112, 2, -30, -58, 78, 72, 73, 107, -78, 70, 75, -21, 24, 82, 65, 122, 19, 28, 25, 112, 125, 114, -46, 48, 40, 84, 39, 37, -124, 119, -79, 84, 58, 99, 77, 99, -77, 111, -20, 9, -57, -34, 52, 119, 87, 15, -110, 118, 69, 60, 34, 116, -72, -20, 49, 43, 105, 1, -109, 100, -18, -4, 36, 77, -95, 16, 121, 94, -99, -64, 79, 62, -76, 0, 1, 119, -23, 9, -31, -52, 40, 20, 15, 17, 59, -42, 7, 56, -2, 40, -29, 55, 122, -77, 115, -85, -95, -48, -125, -96, 16, -50, 79, -63, 71, -49, 48, -22, 47, -115, -86, -46, -37, 81, -51, -49, 98, -22, 32, -98, -12, -45, -91, -96, 92, 124, -84, -105, 62, -56, -75, 86, 126, -128, 120, -82, -21, -116, -29, 8, -120, 79, 87, 105, 11, -112, -28, -56, -93, -112, 78, -90, -65, -62, -53, 8, -82, -56, 112, 42, -112, 57, 48, -73, 44, -100, -120, 89, -76, 40, 1, 40, 74, 2, -8, 20, -61, -112, 29, -128, 38, -108, 112, 111, 124, -13, 57, -54, 74, -44, -57, -87, 102, -124, 44, -100, 90, -47, 121, -84, -63, 22, 1};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.931798943118);
    msg.setSource(42331U);
    msg.setSourceEntity(148U);
    msg.setDestination(56105U);
    msg.setDestinationEntity(104U);
    msg.base_lat = 0.341307331347;
    msg.base_lon = 0.452170232371;
    msg.base_time = 0.762877861657;
    const char tmp_msg_0[] = {-21, -63, 27, -56, 97, -37, 51, 69, -14, -5, -7, -104, 52, 23, 60, 34, -3, -95, 62, 40, 17, 98, -38, 21, -13, -125, 58, -5, 53, -6, -1, 35, 20, 27, -29, 120, -36, -115, 64, 106, -122, 12, 120, 101, -100, 28, -112, 25, 64, -2, 125, -76, 93, 89, 2, -40, -112, 111, 1, -14, 48, -96, -95, 73, 33, 4, 114, 81, 9, 13, 28, 112, -14, -126, 126, 78, -33, -35, -1, -73, 64, -128, 18, 122, 2, 34, 102, -76, -76, 22, -123, 33, 72, -118, -51, 76, -5, 114, 41, -16, 38, -44, 30, -54, 68, 80, 74, 119, 104, 84};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.660780877285);
    msg.setSource(1439U);
    msg.setSourceEntity(123U);
    msg.setDestination(922U);
    msg.setDestinationEntity(240U);
    msg.sys_id = 48611U;
    msg.priority = -118;
    msg.x = 11535;
    msg.y = -27822;
    msg.z = 5672;
    msg.t = -27308;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.720116504654;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.301424316457);
    msg.setSource(24961U);
    msg.setSourceEntity(174U);
    msg.setDestination(43834U);
    msg.setDestinationEntity(96U);
    msg.sys_id = 31601U;
    msg.priority = 104;
    msg.x = -17928;
    msg.y = -15150;
    msg.z = 18128;
    msg.t = -21953;
    IMC::Aborted tmp_msg_0;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.429539523236);
    msg.setSource(7923U);
    msg.setSourceEntity(214U);
    msg.setDestination(37325U);
    msg.setDestinationEntity(126U);
    msg.sys_id = 56148U;
    msg.priority = -122;
    msg.x = -24482;
    msg.y = -42;
    msg.z = -21652;
    msg.t = -7074;
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 51527U;
    tmp_msg_0.type = 26U;
    tmp_msg_0.utc_year = 50969U;
    tmp_msg_0.utc_month = 215U;
    tmp_msg_0.utc_day = 172U;
    tmp_msg_0.utc_time = 0.230504428507;
    tmp_msg_0.lat = 0.237374486652;
    tmp_msg_0.lon = 0.617433391622;
    tmp_msg_0.height = 0.0481547564778;
    tmp_msg_0.satellites = 162U;
    tmp_msg_0.cog = 0.713768272945;
    tmp_msg_0.sog = 0.0173453723382;
    tmp_msg_0.hdop = 0.378156177502;
    tmp_msg_0.vdop = 0.875880189491;
    tmp_msg_0.hacc = 0.879950594026;
    tmp_msg_0.vacc = 0.573738711867;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.827746730037);
    msg.setSource(22277U);
    msg.setSourceEntity(39U);
    msg.setDestination(35376U);
    msg.setDestinationEntity(26U);
    msg.req_id = 53597U;
    msg.type = 249U;
    msg.max_size = 19608U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.087291553979;
    tmp_msg_0.base_lon = 0.391950572191;
    tmp_msg_0.base_time = 0.386658561017;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 5974U;
    tmp_tmp_msg_0_0.destination = 48286U;
    tmp_tmp_msg_0_0.timeout = 0.20283563401;
    IMC::AcousticSystems tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.list.assign("HLJQXVCNORUPPKUCUDRKGNPYVFONQMEHIJZGJAOGBVGAWYGCBCUVVNTRAHVPDTCHXMBQDMXPWRMKUSWNFZFJNKRJUWOSIAFTAJ");
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.368501150858);
    msg.setSource(19191U);
    msg.setSourceEntity(106U);
    msg.setDestination(48390U);
    msg.setDestinationEntity(29U);
    msg.req_id = 40887U;
    msg.type = 5U;
    msg.max_size = 48831U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.470804275008;
    tmp_msg_0.base_lon = 0.888045080885;
    tmp_msg_0.base_time = 0.72966493477;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 59678U;
    tmp_tmp_msg_0_0.priority = -28;
    tmp_tmp_msg_0_0.x = 2523;
    tmp_tmp_msg_0_0.y = 23638;
    tmp_tmp_msg_0_0.z = -14402;
    tmp_tmp_msg_0_0.t = 12844;
    IMC::CompressedImage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.frameid = 127U;
    const char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {120, -35, -99, -116, -83, 86, -45, -58, -73, -98, -54, -56, 4, 12, -109, 32, -110, -38, -19, 20, 92, -7, 51, 121, -102, 65, -99, 65, 38, -88, 114, -32, 98, -78, -28, 95, -50, 103, 43, 9, -98, 117, -113, -103, 80, -109, 14, -95, 115, -51, 32, -13, 39, -47, 100, -86, 30, 56, 81, 101, -10, 29, 25, -23, 80, 53, -59, -15, 14, 121, 7, -79, 9, -69, 82, 50, 23, 89, -24, -25, 32, 49, -86, 88, 33, -37, 93, -33, 40, 94, -48, 35, 107, 38, 26, -3, -69, 34, -6, 63, -105, 22, 89, 106, 45, 53, 123, 27, -117, -126, 101, 96, -96, -80, -126, 18, 118, 81, -57, 117, 52, -67, 50, -7, 95, -35, 47, 100, 92, -21, 123, -102, 88, 41, 97, 57, 85, 13, -85, 11, 108, 41, -102, -126, -47, -65, -78, -59, -89, -42, -122, -2, -100, -86, 63, 87, -53, -34, -70, -125, 97, 103, -119, 80, -58, 33, -101, 125, -117, 4, -127, -45, 41, -27, 45, -34, -108, -59, 26, -120, -66, -58, -110, -93, 24, -41, 119, -102, -47, 70, -11, -11, -39, -36, -34};
    tmp_tmp_tmp_msg_0_0_0.data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.595017002082);
    msg.setSource(53548U);
    msg.setSourceEntity(140U);
    msg.setDestination(33882U);
    msg.setDestinationEntity(92U);
    msg.req_id = 3653U;
    msg.type = 170U;
    msg.max_size = 6006U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0129404464578;
    tmp_msg_0.base_lon = 0.493920140966;
    tmp_msg_0.base_time = 0.693551528331;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.449588884937);
    msg.setSource(8448U);
    msg.setSourceEntity(71U);
    msg.setDestination(37017U);
    msg.setDestinationEntity(254U);
    msg.original_source = 40897U;
    msg.destination = 61178U;
    msg.timeout = 0.314082477897;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 44701U;
    tmp_msg_0.control_ent = 121U;
    tmp_msg_0.timeout = 0.53641196258;
    tmp_msg_0.loiter_radius = 0.692942372725;
    tmp_msg_0.altitude_interval = 0.894751431074;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.311611608382);
    msg.setSource(939U);
    msg.setSourceEntity(164U);
    msg.setDestination(53486U);
    msg.setDestinationEntity(248U);
    msg.original_source = 19830U;
    msg.destination = 62194U;
    msg.timeout = 0.54416926664;
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.597786525961;
    tmp_msg_0.phi = 0.186840918803;
    tmp_msg_0.theta = 0.180339462934;
    tmp_msg_0.psi = 0.250906816916;
    tmp_msg_0.psi_magnetic = 0.122352944065;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.972654166641);
    msg.setSource(8711U);
    msg.setSourceEntity(124U);
    msg.setDestination(45697U);
    msg.setDestinationEntity(54U);
    msg.original_source = 59557U;
    msg.destination = 39856U;
    msg.timeout = 0.874941846104;
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("DHCQVMWZVTKSCGTFQWSDWYHAUFJECSTZLENLRHJKDJOBZUSEIQVIEENNOXFXBISOXOZUKAAZMWGHIUOFFBBPTSCCQGEBIKLZFHTCGUBYIZAM");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.784793295704);
    msg.setSource(53150U);
    msg.setSourceEntity(250U);
    msg.setDestination(25001U);
    msg.setDestinationEntity(16U);
    msg.type = 231U;
    msg.comm_interface = 21260U;
    msg.model = 54652U;
    msg.list.assign("UZLNLNBHFYMGHDSQMYGXXDAYZDIPFQSTQB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.887506887636);
    msg.setSource(18101U);
    msg.setSourceEntity(6U);
    msg.setDestination(51434U);
    msg.setDestinationEntity(20U);
    msg.type = 32U;
    msg.comm_interface = 21167U;
    msg.model = 35240U;
    msg.list.assign("BYKPCSZXVOYUXGFKYDSDVEHBOPWLJCBTOWJCXFFXBARKOZUXTJTZYNMZBIIOTKGDKPVXMMQLRBAPKMJJCARVZKGROGEEZKRIBUZCBFDWEAJNQKGATSRTNALLQCPCDYNTGWMUXNNROMIVWLNQOMWYTHHXE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.339907010172);
    msg.setSource(54191U);
    msg.setSourceEntity(87U);
    msg.setDestination(27832U);
    msg.setDestinationEntity(95U);
    msg.type = 32U;
    msg.comm_interface = 44235U;
    msg.model = 30293U;
    msg.list.assign("CABDKXNPHMXWLAQNDDPCQBCSMBPAXJBLEKZHNLROVYCHRJRGZZDTHDYHVCMKAIEJEIFJQYWUUWFWOSVAQRTPKOIEOOECMGIQFPUFKDYRWNBVGZZBFZGBZAXCTVJESMSTIYKABITMHUIPYEKQMVTSWENUVNNYJLSFGBP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.25591587017);
    msg.setSource(42037U);
    msg.setSourceEntity(90U);
    msg.setDestination(13532U);
    msg.setDestinationEntity(105U);
    msg.type = 187U;
    msg.req_id = 3916789967U;
    msg.ttl = 17187U;
    msg.code = 104U;
    msg.destination.assign("IKNCWRWYWILVSENQTDULGEUZOZDYVBOSNUYSBVFZNTEPOXAICWLLEGPDJPVFSRUIGQPHHHTQHLDFSCMLYSXLLMGFFLBKUAASAEUYYJOPWRVWWOGNCVRAMKQFVDBMNZIIDQXWJPMQ");
    msg.source.assign("APFHBWOXIUSBCLUBNPXYMEJKRNZDUVRVVTHWNXXNGPFJQEDGKYV");
    msg.acknowledge = 12U;
    msg.status = 85U;
    const char tmp_msg_0[] = {19, 101, -90, 16, -10, 10, -95, -117, 15, 24, 41, 101, 117, 100, -125, 57, -24, -110, -49, 81, 102, -62, -17, -21, 49, -85, 67, -46, 91, 58, -22, -80, -58, 84, -54, -30, 38, -18, 85, 113, 95, -80, 30, -85, -80, -44, -116, -4, 106, -87, -24, -71, -80, 74, 121, 80, 97, -121, -10, -65, 31, 104, -38, -39, -27, -50, 50, 106, 45, 39, -109, 79, 75, -91, -93, -120, -35, -113, -48, -20, 11, 111, 97, 71, 35, -108, -97, -117};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.54573944694);
    msg.setSource(754U);
    msg.setSourceEntity(63U);
    msg.setDestination(15630U);
    msg.setDestinationEntity(172U);
    msg.type = 247U;
    msg.req_id = 3059868276U;
    msg.ttl = 57936U;
    msg.code = 37U;
    msg.destination.assign("XVSXMQCBYBJERHMISEAXLOGFIYBHQPFXYUJTTMSNVGBUADZIFQSYUGIAZRHBOMVIXRHQCCXYUBQIYMRSCOLGV");
    msg.source.assign("OWHGTHUPTWJMEABXKGQVIRLCDFCZDKEMIUYHAEDAGJRTQNYZUHVKXBUBABMILHEQZFGDPSEREDDYLOPIJZXPMNDLCLVQCPLVSVLTYRVOWRFEIABUIBSOHPVAAOFJHFYMOOFLZUGMWQJEMXZWOQDTPKAJRXOTIBEWXWFNISSYXZGGTBNHCCDVKIRSNNMJCUPQJF");
    msg.acknowledge = 68U;
    msg.status = 134U;
    const char tmp_msg_0[] = {33, 122, -69, -28, 121, -74, 65, 84, -100, 12, 107, -5, -92, 30, -13, 48, 109, 89, -38, -59, -33, 46, 3, -89, -17, -27, -8, 86, -23, 21, 44, 38, -111, -55, -44, 117, 39, -62, -120, -102, 66, 81, 75, 18, -52, 83, -103, -70, 41, 91, -119, -125, -128, -35, 35, -87, -71, 125, 40, -6, -16, -24, -125, 100, 100, -55, -88, 11, -25, -55, 54, -79, -25, 47, 115, -49, 86, 15, -47, 19, -28, -111, 121, -22, -54, -33, -127, 97, -63, -91, 98, 70, 97, 120, -83, 105, -91, -79, -124, -15, -90, -104, -11, -64, 47, 27, -80, 7, -40, 117, 18, 39, -127, -97, 2, 82, 24, -122, -88, -7, -54, 62, -105, -46, 55, 117, 28, -9, -83, -41, 60, 32, -72, -11, 26, 44, -19, 88, 33, 75, -22, -9, 29, -1, 29, 39, 54, -11, -117, -67, 25, -64};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.976427564501);
    msg.setSource(27881U);
    msg.setSourceEntity(104U);
    msg.setDestination(51698U);
    msg.setDestinationEntity(38U);
    msg.type = 199U;
    msg.req_id = 3816547609U;
    msg.ttl = 9918U;
    msg.code = 56U;
    msg.destination.assign("TJEXHKLGUVGCLCNLSHZRSDCARGASDMTMWESNYQHQBOSHKZMPFLUVSEERGFJZPMIGOIWTEWOJRQWMMSTYAOQPTVDEASWNPJJTDCIVUIXYIDYLBXHXMAOVOFJKFWPZKWHGQGDGGMIRBNFULFUIEQQRCQBAKICLPFHOCXVDLZUJKMEXHMNKXNYLWVPOWPFUYTITCU");
    msg.source.assign("CAIFXVSRUUHECMSBMUZTJYKAQXFVNKKEETRWPVLTBWDPRCFTLZCMNGINVRACWTLRBAOBUXGHFMIFGZSLMUUWMXGFSHDYNXHVCPPQJSODZKD");
    msg.acknowledge = 177U;
    msg.status = 180U;
    const char tmp_msg_0[] = {103, -85, 46, -71, -85, -80, -126, 61, -89, -12, -37, 17};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.804584626288);
    msg.setSource(48142U);
    msg.setSourceEntity(100U);
    msg.setDestination(38808U);
    msg.setDestinationEntity(106U);
    msg.id = 164U;
    msg.range = 0.577063214344;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.662005569866);
    msg.setSource(41789U);
    msg.setSourceEntity(76U);
    msg.setDestination(24172U);
    msg.setDestinationEntity(129U);
    msg.id = 49U;
    msg.range = 0.306888030207;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.11316502157);
    msg.setSource(52726U);
    msg.setSourceEntity(26U);
    msg.setDestination(7965U);
    msg.setDestinationEntity(160U);
    msg.id = 201U;
    msg.range = 0.133064975214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.893093034755);
    msg.setSource(55656U);
    msg.setSourceEntity(125U);
    msg.setDestination(22396U);
    msg.setDestinationEntity(81U);
    msg.beacon.assign("IPRITBJBBDJUOMFWQSCHHHNXDFXYJIAQMKAKPUTCFIXPVNLTVEUVYFLTQACCTRNWMTETWWGYZJBOYJRZSQTVOGTMAYUBWQAZNPIGBSMZZPACAHNZANDPGWINGAUMMXEOCIIJVLOLPVWDEOGYQBSDSSJKRGKQUQYBYSNCYROCKEHPFGHXUDNSIMCOPFMXMIRDCDRKHHLRSELFWAUDVDVEKVVQHWXHBLWRJJOPLZKGFX");
    msg.lat = 0.770285091855;
    msg.lon = 0.51221650475;
    msg.depth = 0.451613028921;
    msg.query_channel = 145U;
    msg.reply_channel = 147U;
    msg.transponder_delay = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.927781634614);
    msg.setSource(21311U);
    msg.setSourceEntity(245U);
    msg.setDestination(61501U);
    msg.setDestinationEntity(226U);
    msg.beacon.assign("QUACHZXXGCPPBWSZUAEVLXDGINBQINIQNWNRNSIUHFYXTKKKSFYKDWZHURWXIO");
    msg.lat = 0.625122738918;
    msg.lon = 0.0849745549416;
    msg.depth = 0.282293834467;
    msg.query_channel = 3U;
    msg.reply_channel = 209U;
    msg.transponder_delay = 73U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.740600126622);
    msg.setSource(19707U);
    msg.setSourceEntity(78U);
    msg.setDestination(63947U);
    msg.setDestinationEntity(5U);
    msg.beacon.assign("VGVJNWQYBLOEO");
    msg.lat = 0.735950276666;
    msg.lon = 0.562858749652;
    msg.depth = 0.441340963601;
    msg.query_channel = 109U;
    msg.reply_channel = 94U;
    msg.transponder_delay = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.899008603619);
    msg.setSource(57359U);
    msg.setSourceEntity(130U);
    msg.setDestination(51464U);
    msg.setDestinationEntity(74U);
    msg.op = 213U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.970827691675);
    msg.setSource(17817U);
    msg.setSourceEntity(200U);
    msg.setDestination(47671U);
    msg.setDestinationEntity(145U);
    msg.op = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.274246239852);
    msg.setSource(10037U);
    msg.setSourceEntity(38U);
    msg.setDestination(11774U);
    msg.setDestinationEntity(197U);
    msg.op = 148U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IBPCRRGNXXBPXNMHGUKFKYRFYYZIPVERVLDSUOMZIUXIUQXHCJMOYSOOAMAHCGGKBEWZFHCVHRJOBSDIAWTUJZLEYPVVCWZYNKKILKTALFMQOWWAPMETNZJTZHDQFSFAIGQAUVUWVNSZPJQXLSELYIGJBVEMJTMDABCZEZMKDRIYXG");
    tmp_msg_0.lat = 0.723227957921;
    tmp_msg_0.lon = 0.327907424493;
    tmp_msg_0.depth = 0.615378863845;
    tmp_msg_0.query_channel = 72U;
    tmp_msg_0.reply_channel = 189U;
    tmp_msg_0.transponder_delay = 46U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.799737689253);
    msg.setSource(63898U);
    msg.setSourceEntity(81U);
    msg.setDestination(39870U);
    msg.setDestinationEntity(139U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.809112071697;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.208657404988);
    msg.setSource(64440U);
    msg.setSourceEntity(153U);
    msg.setDestination(9250U);
    msg.setDestinationEntity(233U);
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("AXEBSLUBXHPVUPIJZEGNXLQZVQTSEZKQKKPCXOAGXHPTRCWMBHZEOADSUZRJHFELLLPKEFTMOZWICYMACVDYQIFNX");
    const char tmp_tmp_msg_0_0[] = {-15, 78, 94, -33, 18, 60, 27, -56, 50, -45, -27, 52, -53, 64, 54, -7, 16, -18, -26, -8, 123, -55, 107, 41, 9, -76, -80, -35, 55, 118, 42, -72, -97, -71, -42, 109, 112, 41, -24, 64, 63, -71, -62, -56, -13, 122, 124, 107, 126, -126, 79, -52, 58, -44, 89, 25, 108, -57, -111, 122, -56, -117, -116, -84, 18, -23, -58, -38, -127, 80, 115, 93, 119, -67, 112, 118, 119, 89, -73, -73, 104, 64, -59, 89, 37, -39, 112, 40, 63, 24, 12, 32, 13, 65, 39, -110, -19, -81, 111, -22, -100, 103, -109, -55, 25, -35, 75, 67, 45, 39, -24, 70, 2, 28, -75, 62, 122, 74, 51, 2, -121, -11, 28, -95, 38, -125, 56, -11, 100, -71, 27, -118, 101, -90, -34, -10};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.554466940474);
    msg.setSource(51693U);
    msg.setSourceEntity(130U);
    msg.setDestination(35595U);
    msg.setDestinationEntity(31U);
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 1214798813U;
    tmp_msg_0.value = 30U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.189239956422);
    msg.setSource(50458U);
    msg.setSourceEntity(219U);
    msg.setDestination(58007U);
    msg.setDestinationEntity(199U);
    msg.op = 172U;
    msg.system.assign("MOXIHALCCDYEBJKABOCUZHTMDJXCLDDLFVJQBXUAVKIVVSNLXGAWIEQECWWSOHIQHRWKTAWVWWOGGMKRJTYEJIDEIWUBAFSUMFXPCKBNVRBQPPBKORGGVFCZFPYPQPAOWJSJIEMPMGYFHXTURXQGMLLESSJQZYGSULSAHPFYXUTVZTKYNDNEKZQUDGR");
    msg.range = 0.87280683374;
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 62589U;
    tmp_msg_0.sys_dst.assign("LQYHECVOBSJTXQBWNFRAKSLYHMHIJQDFEAXSNNQMUKEWHLUVGTJOHRFDRTPYEHPUNDJFQTVPAORRUAC");
    tmp_msg_0.flags = 13U;
    const char tmp_tmp_msg_0_0[] = {-66, 70, 11, 107, -47, 54, 25, 86, 0, 6, 77, -58, 14, 84, 51, 28, -39, -3, -51, 50, 114, 55, 34, -100, 103, 108, 22, -52, 51, -59, 112};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.0176027421791);
    msg.setSource(56806U);
    msg.setSourceEntity(230U);
    msg.setDestination(22470U);
    msg.setDestinationEntity(163U);
    msg.op = 165U;
    msg.system.assign("NWPXRUQMJFSIMIDHIJCKMCLVDTXZAWOCGRRONHIVCUBSSFBJMWRYELXWHLZQCSGZYNEOHGJUVJTPMJBAOGYOWHAHTIKPUHDGYMBVPOXRSAKAAXKBKSR");
    msg.range = 0.130389859909;
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 212U;
    tmp_msg_0.x = 0.264907559725;
    tmp_msg_0.y = 0.683894768256;
    tmp_msg_0.z = 0.0425983098276;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.98331765384);
    msg.setSource(61710U);
    msg.setSourceEntity(45U);
    msg.setDestination(32989U);
    msg.setDestinationEntity(222U);
    msg.op = 23U;
    msg.system.assign("VTWZEAXTLDQKCRKPHNZTVJKALBKQTOMMENIYWSUBGLMUZJPFRTDAVIDULDLWHBRRUOCASVOURSZJCCRTCQOPPNSCXXUQFBSUOIOGNMHXAJBBSTHVPYWLPEVLQWNCSWFQFPYQIPEJXDKYVOFZB");
    msg.range = 0.114325973335;
    IMC::Pulse tmp_msg_0;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.809045473585);
    msg.setSource(16876U);
    msg.setSourceEntity(71U);
    msg.setDestination(28044U);
    msg.setDestinationEntity(139U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.28597962588);
    msg.setSource(28049U);
    msg.setSourceEntity(124U);
    msg.setDestination(8759U);
    msg.setDestinationEntity(167U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.117575058024);
    msg.setSource(13979U);
    msg.setSourceEntity(5U);
    msg.setDestination(19324U);
    msg.setDestinationEntity(62U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.920305014881);
    msg.setSource(53541U);
    msg.setSourceEntity(199U);
    msg.setDestination(33319U);
    msg.setDestinationEntity(40U);
    msg.list.assign("SFZKZAGGCBDPQHKCQMPEROLRTCREKGNUKXLFPPHCESRAHEMOYXKQDBMBQPMBTJSHZJFMAHJNSRTJUTOIBRKAYVVAQDWVHXRZZOAJIUNWQIWVIKPTXTQJYYEIWMWWLHNNXUYEWLGHQLUBNLFWOBLSVCOWJKPYCDBVGURAUJLXMDEBQEVSVGTSIYSFYDMGCAZRORFZMYXCXXELGCVOBQTZGGP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.299974964002);
    msg.setSource(4202U);
    msg.setSourceEntity(213U);
    msg.setDestination(42351U);
    msg.setDestinationEntity(28U);
    msg.list.assign("QVPOSYEIXZLZPQSXRLCCYVTFHPGPKNTWZAMXYDZYWBAEVIOIWOPMJHEYDSUDOEDLWWOQHRKXLVOYZXRTFJIGUVUFIULUDBVEHESHZVDBLXSXAPKYGTAMMBANCPCTGEIQQOQANKBRGAYHBKKFXZERDSYNWOKZBXIKLKTGJUFJITZCNQMGJNDJBMQANCLSGITEFWRMQNTZRVYRBSFDUMU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.116069112359);
    msg.setSource(30128U);
    msg.setSourceEntity(45U);
    msg.setDestination(63039U);
    msg.setDestinationEntity(37U);
    msg.list.assign("JWBHDQHNJVEBBVSEKIFJZFRLHTZAKVPHQPWLAAADCSVPCIZMXNDQEDSTBYJRQDAVGOSXFGGNZSZSKULNXWUSXFCOCLVIFZTYQHKKCYYJMPMZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.1209321325);
    msg.setSource(52867U);
    msg.setSourceEntity(32U);
    msg.setDestination(44607U);
    msg.setDestinationEntity(46U);
    msg.peer.assign("RBBEDVIUPXMFEFQGXVRZAUJIKVTDNPWBXTCKTSFTHGQGZUDCJWMDPXQVPUGBNQUFMOHFJEYLOJABEWCGSHYFAINNZIWCTUUOGYONUCMJROHNESHKLJLGPAEZYKCEVRRIPFDWUIWBSLBZLALAQOTSKZXWNCSY");
    msg.rssi = 0.35044329723;
    msg.integrity = 30722U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.434095396641);
    msg.setSource(272U);
    msg.setSourceEntity(97U);
    msg.setDestination(63738U);
    msg.setDestinationEntity(62U);
    msg.peer.assign("AAGUUGFFGMTODVXNHYQNAZFVRCJTBFCOFWUJPYXAKJDMVCITHDNUOMYRSNBFZSWUMJLMJWQRSNVPZIEMSBLDKIWIWAFLXRCQBKGRDLUJHWPTWPKPOAHSIXUKNXZRBHMYIKPHJOQCTGJKRGNJSWQLVEBRZEOIOKLDSYVICTLHWDMRAEYXVZUEBVATLEZDSEXK");
    msg.rssi = 0.358886441172;
    msg.integrity = 37588U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.522944391075);
    msg.setSource(50286U);
    msg.setSourceEntity(1U);
    msg.setDestination(41586U);
    msg.setDestinationEntity(35U);
    msg.peer.assign("XCVTSIPRRWBZDWLXNYLBKNSOHZQMBGKFRJWNOTIYHRVQQZPJVZDTHRHGCZFLBFVKCKUUBDVXPNJGPASACVWFUJKHIANMCGLOLJLKKUPMUAWYEPAENXIKJTDZWQYDTFAHCEDLWPLQNMDXGMEZXUDJZLUUYRFTAVEOSBOIVCFYIBCCMOHTDXHYXUZQJWVGQVRYLDJQIIONBAPURPEWQSGWGE");
    msg.rssi = 0.453961005973;
    msg.integrity = 20863U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.916286997416);
    msg.setSource(28754U);
    msg.setSourceEntity(93U);
    msg.setDestination(9411U);
    msg.setDestinationEntity(91U);
    msg.value = 8610;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.424152134541);
    msg.setSource(20918U);
    msg.setSourceEntity(186U);
    msg.setDestination(4760U);
    msg.setDestinationEntity(74U);
    msg.value = 20714;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.280415199803);
    msg.setSource(26997U);
    msg.setSourceEntity(241U);
    msg.setDestination(6790U);
    msg.setDestinationEntity(211U);
    msg.value = -9522;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.481694403536);
    msg.setSource(11818U);
    msg.setSourceEntity(142U);
    msg.setDestination(40424U);
    msg.setDestinationEntity(232U);
    msg.value = 0.899074434384;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.396725857081);
    msg.setSource(50100U);
    msg.setSourceEntity(193U);
    msg.setDestination(50314U);
    msg.setDestinationEntity(35U);
    msg.value = 0.499919364961;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.61590093031);
    msg.setSource(39708U);
    msg.setSourceEntity(138U);
    msg.setDestination(10687U);
    msg.setDestinationEntity(44U);
    msg.value = 0.276535191062;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.490110954457);
    msg.setSource(48479U);
    msg.setSourceEntity(237U);
    msg.setDestination(3207U);
    msg.setDestinationEntity(195U);
    msg.value = 0.489068681604;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.0921396836988);
    msg.setSource(29915U);
    msg.setSourceEntity(226U);
    msg.setDestination(36457U);
    msg.setDestinationEntity(254U);
    msg.value = 0.628044700059;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.567066873749);
    msg.setSource(39058U);
    msg.setSourceEntity(128U);
    msg.setDestination(593U);
    msg.setDestinationEntity(178U);
    msg.value = 0.188301592688;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.123331404342);
    msg.setSource(52105U);
    msg.setSourceEntity(52U);
    msg.setDestination(33347U);
    msg.setDestinationEntity(211U);
    msg.validity = 35422U;
    msg.type = 156U;
    msg.utc_year = 9972U;
    msg.utc_month = 45U;
    msg.utc_day = 0U;
    msg.utc_time = 0.343292974038;
    msg.lat = 0.655488849688;
    msg.lon = 0.119889432136;
    msg.height = 0.160642932084;
    msg.satellites = 11U;
    msg.cog = 0.546323173341;
    msg.sog = 0.530250766219;
    msg.hdop = 0.579885849854;
    msg.vdop = 0.3133844003;
    msg.hacc = 0.410042016509;
    msg.vacc = 0.402270537782;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.372024709607);
    msg.setSource(11164U);
    msg.setSourceEntity(0U);
    msg.setDestination(54194U);
    msg.setDestinationEntity(198U);
    msg.validity = 17863U;
    msg.type = 67U;
    msg.utc_year = 34354U;
    msg.utc_month = 137U;
    msg.utc_day = 120U;
    msg.utc_time = 0.789880171446;
    msg.lat = 0.413449926737;
    msg.lon = 0.670993063042;
    msg.height = 0.257463536227;
    msg.satellites = 153U;
    msg.cog = 0.846605358933;
    msg.sog = 0.407552958649;
    msg.hdop = 0.86107670437;
    msg.vdop = 0.311090696984;
    msg.hacc = 0.928898708566;
    msg.vacc = 0.488582661812;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.917293753736);
    msg.setSource(22728U);
    msg.setSourceEntity(197U);
    msg.setDestination(6751U);
    msg.setDestinationEntity(124U);
    msg.validity = 9189U;
    msg.type = 57U;
    msg.utc_year = 45142U;
    msg.utc_month = 164U;
    msg.utc_day = 52U;
    msg.utc_time = 0.0779386146139;
    msg.lat = 0.439837125194;
    msg.lon = 0.704754184824;
    msg.height = 0.881812260141;
    msg.satellites = 235U;
    msg.cog = 0.904061218436;
    msg.sog = 0.274654380744;
    msg.hdop = 0.0580250463903;
    msg.vdop = 0.673645080334;
    msg.hacc = 0.854407318465;
    msg.vacc = 0.519842188761;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.236775112617);
    msg.setSource(39004U);
    msg.setSourceEntity(115U);
    msg.setDestination(34707U);
    msg.setDestinationEntity(186U);
    msg.time = 0.85253095208;
    msg.phi = 0.478317464236;
    msg.theta = 0.491963039081;
    msg.psi = 0.935449436729;
    msg.psi_magnetic = 0.803517060967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.300686482485);
    msg.setSource(35035U);
    msg.setSourceEntity(130U);
    msg.setDestination(13950U);
    msg.setDestinationEntity(183U);
    msg.time = 0.999813904177;
    msg.phi = 0.221248915053;
    msg.theta = 0.688577644018;
    msg.psi = 0.943033773514;
    msg.psi_magnetic = 0.586197031965;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.376499907876);
    msg.setSource(22891U);
    msg.setSourceEntity(41U);
    msg.setDestination(6422U);
    msg.setDestinationEntity(1U);
    msg.time = 0.276925536069;
    msg.phi = 0.753083831839;
    msg.theta = 0.432371112436;
    msg.psi = 0.424303457186;
    msg.psi_magnetic = 0.374230230262;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.33919793786);
    msg.setSource(24035U);
    msg.setSourceEntity(240U);
    msg.setDestination(10796U);
    msg.setDestinationEntity(195U);
    msg.time = 0.396681143989;
    msg.x = 0.275623040917;
    msg.y = 0.128053138251;
    msg.z = 0.0756202537515;
    msg.timestep = 0.505239166213;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.508527088496);
    msg.setSource(22553U);
    msg.setSourceEntity(4U);
    msg.setDestination(53643U);
    msg.setDestinationEntity(129U);
    msg.time = 0.0880404450244;
    msg.x = 0.128071086164;
    msg.y = 0.926999157166;
    msg.z = 0.0639069743568;
    msg.timestep = 0.236228138713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.321622223109);
    msg.setSource(24898U);
    msg.setSourceEntity(144U);
    msg.setDestination(58241U);
    msg.setDestinationEntity(54U);
    msg.time = 0.533138762337;
    msg.x = 0.928019109365;
    msg.y = 0.171536167035;
    msg.z = 0.763821145024;
    msg.timestep = 0.53656053302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.323851005347);
    msg.setSource(48053U);
    msg.setSourceEntity(235U);
    msg.setDestination(3314U);
    msg.setDestinationEntity(92U);
    msg.time = 0.960396226007;
    msg.x = 0.0298622040966;
    msg.y = 0.845116809691;
    msg.z = 0.0726587800126;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.820854326767);
    msg.setSource(58348U);
    msg.setSourceEntity(227U);
    msg.setDestination(54453U);
    msg.setDestinationEntity(75U);
    msg.time = 0.696793140471;
    msg.x = 0.404673287787;
    msg.y = 0.490410591731;
    msg.z = 0.713606940765;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.087538751087);
    msg.setSource(53637U);
    msg.setSourceEntity(122U);
    msg.setDestination(44105U);
    msg.setDestinationEntity(203U);
    msg.time = 0.334380862532;
    msg.x = 0.572233039108;
    msg.y = 0.716852239075;
    msg.z = 0.530854988977;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.998512145039);
    msg.setSource(64119U);
    msg.setSourceEntity(44U);
    msg.setDestination(29570U);
    msg.setDestinationEntity(55U);
    msg.time = 0.511602135271;
    msg.x = 0.995639304204;
    msg.y = 0.791676018885;
    msg.z = 0.816893693587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.76190213721);
    msg.setSource(50692U);
    msg.setSourceEntity(125U);
    msg.setDestination(3771U);
    msg.setDestinationEntity(164U);
    msg.time = 0.122424643536;
    msg.x = 0.214202332004;
    msg.y = 0.620234775298;
    msg.z = 0.0178060966566;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.351267834776);
    msg.setSource(26235U);
    msg.setSourceEntity(42U);
    msg.setDestination(6282U);
    msg.setDestinationEntity(56U);
    msg.time = 0.681132146228;
    msg.x = 0.58367164062;
    msg.y = 0.840271941221;
    msg.z = 0.657912620349;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.414659759733);
    msg.setSource(61622U);
    msg.setSourceEntity(247U);
    msg.setDestination(60752U);
    msg.setDestinationEntity(109U);
    msg.time = 0.767992429995;
    msg.x = 0.289359326133;
    msg.y = 0.496208132637;
    msg.z = 0.423266534795;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.875655261927);
    msg.setSource(36041U);
    msg.setSourceEntity(220U);
    msg.setDestination(41729U);
    msg.setDestinationEntity(230U);
    msg.time = 0.133267390627;
    msg.x = 0.908877440278;
    msg.y = 0.893227926454;
    msg.z = 0.805272743024;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.931077606);
    msg.setSource(1440U);
    msg.setSourceEntity(3U);
    msg.setDestination(65008U);
    msg.setDestinationEntity(115U);
    msg.time = 0.246179986372;
    msg.x = 0.978965976844;
    msg.y = 0.850122663144;
    msg.z = 0.525133545715;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.54804145358);
    msg.setSource(20362U);
    msg.setSourceEntity(208U);
    msg.setDestination(54536U);
    msg.setDestinationEntity(67U);
    msg.validity = 168U;
    msg.x = 0.232817618741;
    msg.y = 0.0612875837295;
    msg.z = 0.491263605038;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.361574929981);
    msg.setSource(30866U);
    msg.setSourceEntity(139U);
    msg.setDestination(53867U);
    msg.setDestinationEntity(179U);
    msg.validity = 83U;
    msg.x = 0.351607565752;
    msg.y = 0.756234984479;
    msg.z = 0.215875311107;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.240662602988);
    msg.setSource(35779U);
    msg.setSourceEntity(69U);
    msg.setDestination(43016U);
    msg.setDestinationEntity(154U);
    msg.validity = 74U;
    msg.x = 0.984757593105;
    msg.y = 0.920303814626;
    msg.z = 0.28359706736;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.79678902323);
    msg.setSource(4237U);
    msg.setSourceEntity(187U);
    msg.setDestination(45482U);
    msg.setDestinationEntity(24U);
    msg.validity = 25U;
    msg.x = 0.0379613538964;
    msg.y = 0.897600326715;
    msg.z = 0.0567842879786;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.996051824392);
    msg.setSource(8791U);
    msg.setSourceEntity(146U);
    msg.setDestination(49531U);
    msg.setDestinationEntity(197U);
    msg.validity = 91U;
    msg.x = 0.963114133972;
    msg.y = 0.918833038698;
    msg.z = 0.614598127817;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.0159785228171);
    msg.setSource(5976U);
    msg.setSourceEntity(99U);
    msg.setDestination(16762U);
    msg.setDestinationEntity(44U);
    msg.validity = 28U;
    msg.x = 0.768756193168;
    msg.y = 0.970477972343;
    msg.z = 0.484633225648;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.751120032099);
    msg.setSource(36050U);
    msg.setSourceEntity(81U);
    msg.setDestination(18397U);
    msg.setDestinationEntity(236U);
    msg.time = 0.470945213928;
    msg.x = 0.134105592522;
    msg.y = 0.520532296873;
    msg.z = 0.0774885178148;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.504023673946);
    msg.setSource(29113U);
    msg.setSourceEntity(91U);
    msg.setDestination(17208U);
    msg.setDestinationEntity(88U);
    msg.time = 0.037612317999;
    msg.x = 0.420536298203;
    msg.y = 0.245714458183;
    msg.z = 0.686409189859;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.644262680752);
    msg.setSource(18083U);
    msg.setSourceEntity(178U);
    msg.setDestination(61383U);
    msg.setDestinationEntity(243U);
    msg.time = 0.336994217855;
    msg.x = 0.538025571585;
    msg.y = 0.506758014661;
    msg.z = 0.855584904817;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.911753609011);
    msg.setSource(17892U);
    msg.setSourceEntity(91U);
    msg.setDestination(290U);
    msg.setDestinationEntity(127U);
    msg.validity = 0U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.796215406562;
    tmp_msg_0.y = 0.961436642334;
    tmp_msg_0.z = 0.351486521829;
    tmp_msg_0.phi = 0.759270480147;
    tmp_msg_0.theta = 0.659132547988;
    tmp_msg_0.psi = 0.588728427052;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.373461168793;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.983656066981);
    msg.setSource(48775U);
    msg.setSourceEntity(88U);
    msg.setDestination(31673U);
    msg.setDestinationEntity(97U);
    msg.validity = 61U;
    msg.value = 0.984501284848;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.685404897251);
    msg.setSource(3869U);
    msg.setSourceEntity(90U);
    msg.setDestination(58097U);
    msg.setDestinationEntity(10U);
    msg.validity = 76U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.457718417415;
    tmp_msg_0.y = 0.751741606865;
    tmp_msg_0.z = 0.872820585733;
    tmp_msg_0.phi = 0.453301980823;
    tmp_msg_0.theta = 0.265540988281;
    tmp_msg_0.psi = 0.841882367401;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.0305182419947;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.312669355178);
    msg.setSource(10336U);
    msg.setSourceEntity(237U);
    msg.setDestination(59715U);
    msg.setDestinationEntity(165U);
    msg.value = 0.262940210991;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.058671894806);
    msg.setSource(52655U);
    msg.setSourceEntity(104U);
    msg.setDestination(13218U);
    msg.setDestinationEntity(79U);
    msg.value = 0.389635120855;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.478222617504);
    msg.setSource(1666U);
    msg.setSourceEntity(23U);
    msg.setDestination(41522U);
    msg.setDestinationEntity(4U);
    msg.value = 0.763289908805;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.365307840492);
    msg.setSource(11507U);
    msg.setSourceEntity(23U);
    msg.setDestination(9461U);
    msg.setDestinationEntity(67U);
    msg.value = 0.213452696496;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.881657925268);
    msg.setSource(34006U);
    msg.setSourceEntity(36U);
    msg.setDestination(39589U);
    msg.setDestinationEntity(196U);
    msg.value = 0.0856135686042;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.267388118597);
    msg.setSource(25825U);
    msg.setSourceEntity(49U);
    msg.setDestination(27495U);
    msg.setDestinationEntity(178U);
    msg.value = 0.6564681529;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.768511606056);
    msg.setSource(43260U);
    msg.setSourceEntity(195U);
    msg.setDestination(3595U);
    msg.setDestinationEntity(185U);
    msg.value = 0.0315071214327;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.0327490745675);
    msg.setSource(45852U);
    msg.setSourceEntity(63U);
    msg.setDestination(16672U);
    msg.setDestinationEntity(94U);
    msg.value = 0.258370486968;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.882491214543);
    msg.setSource(4791U);
    msg.setSourceEntity(36U);
    msg.setDestination(65019U);
    msg.setDestinationEntity(105U);
    msg.value = 0.79405133986;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.455921142627);
    msg.setSource(36149U);
    msg.setSourceEntity(78U);
    msg.setDestination(20410U);
    msg.setDestinationEntity(236U);
    msg.value = 0.438225077567;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.470032384658);
    msg.setSource(53978U);
    msg.setSourceEntity(93U);
    msg.setDestination(54322U);
    msg.setDestinationEntity(86U);
    msg.value = 0.434209058377;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.0691438365186);
    msg.setSource(19035U);
    msg.setSourceEntity(30U);
    msg.setDestination(12052U);
    msg.setDestinationEntity(111U);
    msg.value = 0.789905805253;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.820168248834);
    msg.setSource(44734U);
    msg.setSourceEntity(28U);
    msg.setDestination(36820U);
    msg.setDestinationEntity(224U);
    msg.value = 0.365766919468;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.0845971789508);
    msg.setSource(22703U);
    msg.setSourceEntity(210U);
    msg.setDestination(46471U);
    msg.setDestinationEntity(10U);
    msg.value = 0.197439727183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.589572089747);
    msg.setSource(20174U);
    msg.setSourceEntity(81U);
    msg.setDestination(26281U);
    msg.setDestinationEntity(164U);
    msg.value = 0.706115534043;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.246129712764);
    msg.setSource(20318U);
    msg.setSourceEntity(168U);
    msg.setDestination(24042U);
    msg.setDestinationEntity(119U);
    msg.value = 0.0911893224701;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.0427390446041);
    msg.setSource(51826U);
    msg.setSourceEntity(22U);
    msg.setDestination(914U);
    msg.setDestinationEntity(125U);
    msg.value = 0.715087841399;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.752409624182);
    msg.setSource(4467U);
    msg.setSourceEntity(14U);
    msg.setDestination(32992U);
    msg.setDestinationEntity(92U);
    msg.value = 0.33999244653;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.944928631652);
    msg.setSource(64254U);
    msg.setSourceEntity(47U);
    msg.setDestination(13846U);
    msg.setDestinationEntity(250U);
    msg.value = 0.52534818644;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.493241051079);
    msg.setSource(59240U);
    msg.setSourceEntity(199U);
    msg.setDestination(18928U);
    msg.setDestinationEntity(37U);
    msg.value = 0.91912032216;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.0356658845765);
    msg.setSource(17843U);
    msg.setSourceEntity(72U);
    msg.setDestination(53751U);
    msg.setDestinationEntity(247U);
    msg.value = 0.55908383227;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.165513059834);
    msg.setSource(32443U);
    msg.setSourceEntity(176U);
    msg.setDestination(47929U);
    msg.setDestinationEntity(58U);
    msg.value = 0.406758500278;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.983239587909);
    msg.setSource(62651U);
    msg.setSourceEntity(155U);
    msg.setDestination(30291U);
    msg.setDestinationEntity(207U);
    msg.value = 0.651989786025;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.759203403968);
    msg.setSource(34304U);
    msg.setSourceEntity(107U);
    msg.setDestination(53363U);
    msg.setDestinationEntity(133U);
    msg.value = 0.981814347532;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.520584907381);
    msg.setSource(29815U);
    msg.setSourceEntity(11U);
    msg.setDestination(12447U);
    msg.setDestinationEntity(30U);
    msg.direction = 0.796583280029;
    msg.speed = 0.749792688974;
    msg.turbulence = 0.704230109474;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.466500788195);
    msg.setSource(10472U);
    msg.setSourceEntity(93U);
    msg.setDestination(44038U);
    msg.setDestinationEntity(22U);
    msg.direction = 0.407940314932;
    msg.speed = 0.960797617761;
    msg.turbulence = 0.195876129012;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.808775371653);
    msg.setSource(28058U);
    msg.setSourceEntity(219U);
    msg.setDestination(62914U);
    msg.setDestinationEntity(151U);
    msg.direction = 0.205177060052;
    msg.speed = 0.637688969708;
    msg.turbulence = 0.286131457865;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.0322876786494);
    msg.setSource(45760U);
    msg.setSourceEntity(219U);
    msg.setDestination(36110U);
    msg.setDestinationEntity(157U);
    msg.value = 0.647002216233;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.00223932415274);
    msg.setSource(60061U);
    msg.setSourceEntity(8U);
    msg.setDestination(35912U);
    msg.setDestinationEntity(103U);
    msg.value = 0.0518894104802;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.761407336759);
    msg.setSource(10702U);
    msg.setSourceEntity(222U);
    msg.setDestination(20519U);
    msg.setDestinationEntity(75U);
    msg.value = 0.397379715927;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.103304808895);
    msg.setSource(36042U);
    msg.setSourceEntity(223U);
    msg.setDestination(40668U);
    msg.setDestinationEntity(204U);
    msg.value.assign("UKZAWSLDLNXCVRNESCETBPWZOZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.614371101643);
    msg.setSource(7042U);
    msg.setSourceEntity(82U);
    msg.setDestination(60165U);
    msg.setDestinationEntity(122U);
    msg.value.assign("PZDREIKMBZKMBUCXSONNPUQCSHAHXPMTMCWXMOJFBIEOVLBEYGEZYJUIDNWZTKPBDOQJVUHJGCWURUUVXCPSJXONZLFRYVBNZJBFYBIRVIFLXKMCOIWMZGGXDQMQLLUEFAHVHNYEIAHCGOKTGXZTEUYKFDRRDOFGLAVJDLJBLEEJXRIGHATAARWASYHLQYGRTSLCPTWASPVZFVWGISPNDXBSNMWSCDNNOFQKWCQTUPJSQDW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.282223507808);
    msg.setSource(21175U);
    msg.setSourceEntity(131U);
    msg.setDestination(28425U);
    msg.setDestinationEntity(231U);
    msg.value.assign("OBFROHILVAOUSXAWYBDJQTZACUWVTVQRSBQGXHLSNEHTYBQSGPIYEZZZUVIUKLGGRGSWHMQAJPRWJPZHMFOFTCOLDAEUIPUISEKRKWUXLQCDJHROBXCNREIJE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.909256981106);
    msg.setSource(41384U);
    msg.setSourceEntity(164U);
    msg.setDestination(57746U);
    msg.setDestinationEntity(38U);
    const char tmp_msg_0[] = {89, 87, 93, 26, 113, -19, -68, -1, 2, 94, -44, -107, 84, 45, 81, -37, 101, 48, 95, -9, -96, -41, -84, 52, -22, 99, -104, 126, 94, 83, -94, -106, -46, -43, 98, 101, 16, -22, -48, -126, -16, 57, 42, -89, -27, 88, -60, -64, -128, 7, -128, -32, -27, 26, 42, 104, 3, -4, -119, -54, -28, 76, -9, 4, 109, -48, -58, 48, -111, -77, -99, -8, 23, 44, -62, 70, -51, -83, -14, 39, 48, 110, 48, 25, -71, 101, -100, 100, 68, -97, 27, -93, 95, 113, -49, 1, -119, -9, 113, -19, -15, 123, 33, -36, 126, -67, -82, 11, -22, 24, 16, -82, -90, 33, 91, -19, -73, -7, -21, -123, -60, 35, -10, -38, -80, -103, 119, 0, -17, -12, -62, -91, -91};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.270687653905);
    msg.setSource(2813U);
    msg.setSourceEntity(79U);
    msg.setDestination(21653U);
    msg.setDestinationEntity(144U);
    const char tmp_msg_0[] = {-128, 63, -110, 35, 2, 17, 13, -24, -119, -8, 105, 104, 30, -69, 21, -92, -127, -45, 3, -67, 59, -62, 22, 67, 126, -101, 119, -104, 47, -124, 122, 123, 124, -106, -57, 24, 122, -64, -91, -5, -78, 98, -30, -24, 7, -117, 45, 37, -102, -114, 108, 91, -25, -119, -62, -116, -78, 86, 42, 87, -10, 57, -54, -105, -5, 86, 22, -14, 57, 55, 44, -113, -43, 87, -127, 8, 5, -109, 89, -72, -28, -44, 117, -24, -3, 94, -69, -18, 11, 105, 78, 107, -36, 99, 115, 62, -2, 82, 68, 36, 85, -94, -77, 126, -38, -98, 104, -5, -93, -54, 71, -126, -51, 81, -82, -116, -61, -23, -100, -109, 117, 19, -116, 106, -91, -108, 70, 57, 20, 10, 73, -125, -54, -121, -10, 55, 19, -100, 51, -116, -54, -114, -2, 16, -35, 93, 93, 56, -32, -90, 93, -39, 77, 17, -109, 52, 81, 108, 22, -57, -86};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.345459318285);
    msg.setSource(45686U);
    msg.setSourceEntity(146U);
    msg.setDestination(6316U);
    msg.setDestinationEntity(34U);
    const char tmp_msg_0[] = {-18, -77, -57, -78, -7, -42, -99, -88, -14, -116, 43, -69, 70, -4, 84, 39, -39, 34, -17, -29, 28, -89, 93, -114, -37, -119, 34, 33, -57, 79, 121, -100, 14, -94, 90, 37, -57, 24, 20, -24, -121, 15, -102, 96, 110, 20, 72, -26, -59, 63, 47, -59, 99, -68, -118, 3, 122, 25, 35, -60, -114, -89, 101, 67, -43, 31, -67, -36, -25, -112, -16, -103, -96, 14, -44, 54, -47, 90, 80, -38, 71, -39, -15, 91, 52, 114, 48, -117, 79, -38, -95, -43, -11, -77, -90, 108, 17, 90, -54, -78, 78, 24, -89, 62, -26, 40, -78, -56, -81, 17, -59, -7, -24, -52, 66, 88, 7, 40, -85, 57, 126, -70, -17, 87, 10, 103, -68, 114, 108, -126, -25, 5, 112, 25, 122, 10, 101, 61, 45, 90, -59, -18, 89, 12, 66, 72, -83, -69, -34, -9, 102, 51, 119, -76, -45, 89, 55, 40, 126, -33, -92, 85, -7, -59, -81, 97, 29, -18, -38, 111, -32, 94, 42, 6, 27, 103, 90, -36, 125, -99, 49, -8, 97, -46, 117, -77, 11, -60, 35, -75, -84, -94, 38, -99, 2, 103, 14, 16, 16, 33, 64, -9, -82, -80, 100, -24, -76, -3, 20, 98, 115, 61, 4, -27, 91, -51, -7, 100, 42, -109, -91, -84, -5, 85, 67, 118, 84, -19, 2, -78, 35, -11, 45, 39, 61, 40, 80, 96, 25, -79, -23, -86, -76, -116, -26, 58, 79, -44, -25, 108, 18, 10, -44};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.536603411343);
    msg.setSource(24549U);
    msg.setSourceEntity(57U);
    msg.setDestination(51958U);
    msg.setDestinationEntity(34U);
    msg.value = 0.226812815793;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.715909143748);
    msg.setSource(5183U);
    msg.setSourceEntity(183U);
    msg.setDestination(49818U);
    msg.setDestinationEntity(234U);
    msg.value = 0.780887197362;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.982282337808);
    msg.setSource(15435U);
    msg.setSourceEntity(155U);
    msg.setDestination(20255U);
    msg.setDestinationEntity(112U);
    msg.value = 0.00359982818399;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.00586083690231);
    msg.setSource(41396U);
    msg.setSourceEntity(190U);
    msg.setDestination(65304U);
    msg.setDestinationEntity(62U);
    msg.type = 21U;
    msg.frequency = 3221755442U;
    msg.min_range = 40088U;
    msg.max_range = 2140U;
    msg.bits_per_point = 161U;
    msg.scale_factor = 0.846324208605;
    const char tmp_msg_0[] = {-55, 89, -114, -36, 106, -15, 115, -73, 33, 73, 35};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.103604521975);
    msg.setSource(46409U);
    msg.setSourceEntity(84U);
    msg.setDestination(9497U);
    msg.setDestinationEntity(10U);
    msg.type = 143U;
    msg.frequency = 2752910058U;
    msg.min_range = 9900U;
    msg.max_range = 44304U;
    msg.bits_per_point = 26U;
    msg.scale_factor = 0.867067303993;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.781579349023;
    tmp_msg_0.beam_height = 0.78592855154;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {90, 97, 79, -108, -60, -115, -14, -121, 87, 21, 35, -108, -100, -101, 113, 106, -28, -39, 9, -116, -44, 88, 87, 34, -13, -30, -71, -74, 93, -63, 125, 56, 56, 41, -42, -58, 42, -26, -113, 91, -24, 123, 33, 64, 62, 12, -115, -111, 84, -74, -48, 101, 60, 63, 84, 71, -10, 94, 82, -27, -128, -17, 53, -40, 8, -39, 67, -3, 114, -5, -40, 112, 86, -97, 76, 75, 111, -123, -95, 64, -23, 93, -108, 11, -43, 122, -6, -113, -1, -106, 108, -82, -71, 79, 109, 76, -80, 47, -32, 77, -82, 103, -56, 67, 27, -115, 19, 45, -58, 37, -104, 54, -16, -79, 99, -115, 121, 87, -65, -92, -75, -128, 74, 15};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.280522573474);
    msg.setSource(48143U);
    msg.setSourceEntity(207U);
    msg.setDestination(55539U);
    msg.setDestinationEntity(1U);
    msg.type = 37U;
    msg.frequency = 1966347494U;
    msg.min_range = 17446U;
    msg.max_range = 60584U;
    msg.bits_per_point = 16U;
    msg.scale_factor = 0.971092175844;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.857566952679;
    tmp_msg_0.beam_height = 0.509070172263;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {92, 1, -56, -72, -14, -53, 59, -75, -102, -20, -74, -31, -106, 15, 110, -56, -56, -62, -125, -108, 115, -46, 55, 84, -72, -49, 116, 53, 78, -121, 20, -87, 81, -70, 85, 65, -60, 23, 4, 9, 4, -110};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.0363430929062);
    msg.setSource(10682U);
    msg.setSourceEntity(213U);
    msg.setDestination(61673U);
    msg.setDestinationEntity(92U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.0828262641716);
    msg.setSource(2267U);
    msg.setSourceEntity(90U);
    msg.setDestination(50443U);
    msg.setDestinationEntity(96U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.377690598078);
    msg.setSource(15791U);
    msg.setSourceEntity(215U);
    msg.setDestination(49269U);
    msg.setDestinationEntity(163U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.488213324367);
    msg.setSource(27646U);
    msg.setSourceEntity(82U);
    msg.setDestination(20669U);
    msg.setDestinationEntity(253U);
    msg.op = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.794896081343);
    msg.setSource(16478U);
    msg.setSourceEntity(38U);
    msg.setDestination(31027U);
    msg.setDestinationEntity(34U);
    msg.op = 19U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.688272262353);
    msg.setSource(11886U);
    msg.setSourceEntity(241U);
    msg.setDestination(34428U);
    msg.setDestinationEntity(134U);
    msg.op = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.0643146435195);
    msg.setSource(6947U);
    msg.setSourceEntity(223U);
    msg.setDestination(24942U);
    msg.setDestinationEntity(46U);
    msg.value = 0.85485875378;
    msg.confidence = 0.00263147687519;
    msg.opmodes.assign("TBVHEWPGFSTNWXRZRDNSKYVLIXTHIYSKLYBLHEAOFRWAMCIMAHEIINOBUJXCCJPVLOWXVZIYUEGBISPJIFCDCDQESRHRZNCSNRMMMCXBNQDDME");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.637662546967);
    msg.setSource(11376U);
    msg.setSourceEntity(140U);
    msg.setDestination(31934U);
    msg.setDestinationEntity(160U);
    msg.value = 0.702915159628;
    msg.confidence = 0.84897110191;
    msg.opmodes.assign("SXIDWQCKZUBQKYNLGKELYYRYMAJMUYSRBQWZUVGXASSEXJMJWQKRBMLVPLYEANCAGVFNTDCZSDMZZMZVWRIPUGGCFGEKILTOJXLQOVHSLFA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.334280386819);
    msg.setSource(29182U);
    msg.setSourceEntity(72U);
    msg.setDestination(45115U);
    msg.setDestinationEntity(176U);
    msg.value = 0.811912335039;
    msg.confidence = 0.743482541532;
    msg.opmodes.assign("SBVHVYBIQBTPTNDGDAWSYNYWJDXFZONMXPCULQAGCMLMOOIITRTGEPASUPZUVHGCJQYHXTNVRXLDKUCSFCBFNQFXRHKJOMLPQUESKBCRPQPOLCGYVPWOZPSCFDYRDSUOIJMKIBJRNIGIRYXDKVWROKKERNVEGUSDJXTOVFQAAADYTYEZULWXMBOVTIUQFGLIZEMEAYPBH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.681805949707);
    msg.setSource(15871U);
    msg.setSourceEntity(220U);
    msg.setDestination(33706U);
    msg.setDestinationEntity(4U);
    msg.itow = 2906295835U;
    msg.lat = 0.546773096666;
    msg.lon = 0.600276188136;
    msg.height_ell = 0.283930064787;
    msg.height_sea = 0.132501782538;
    msg.hacc = 0.546979922078;
    msg.vacc = 0.42074610916;
    msg.vel_n = 0.785545180552;
    msg.vel_e = 0.405759144052;
    msg.vel_d = 0.527531376827;
    msg.speed = 0.52771571949;
    msg.gspeed = 0.132773076006;
    msg.heading = 0.823570489415;
    msg.sacc = 0.286574543616;
    msg.cacc = 0.0828269954031;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.92566582865);
    msg.setSource(54996U);
    msg.setSourceEntity(248U);
    msg.setDestination(1223U);
    msg.setDestinationEntity(151U);
    msg.itow = 334518542U;
    msg.lat = 0.551279257136;
    msg.lon = 0.801524973781;
    msg.height_ell = 0.611077832369;
    msg.height_sea = 0.603943295274;
    msg.hacc = 0.474740539495;
    msg.vacc = 0.231562848318;
    msg.vel_n = 0.492294076718;
    msg.vel_e = 0.806928010137;
    msg.vel_d = 0.983440463184;
    msg.speed = 0.794233156739;
    msg.gspeed = 0.428349503696;
    msg.heading = 0.862603906358;
    msg.sacc = 0.268803462723;
    msg.cacc = 0.908399560346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.907369333562);
    msg.setSource(29454U);
    msg.setSourceEntity(26U);
    msg.setDestination(59419U);
    msg.setDestinationEntity(113U);
    msg.itow = 64498827U;
    msg.lat = 0.985916641013;
    msg.lon = 0.437378685744;
    msg.height_ell = 0.0375786709624;
    msg.height_sea = 0.793315678766;
    msg.hacc = 0.618769322986;
    msg.vacc = 0.643758419763;
    msg.vel_n = 0.189803215178;
    msg.vel_e = 0.739152903012;
    msg.vel_d = 0.714610537504;
    msg.speed = 0.960397834897;
    msg.gspeed = 0.43238922542;
    msg.heading = 0.270595363992;
    msg.sacc = 0.332952933834;
    msg.cacc = 0.354661665998;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.539334132108);
    msg.setSource(8824U);
    msg.setSourceEntity(30U);
    msg.setDestination(44275U);
    msg.setDestinationEntity(155U);
    msg.id = 15U;
    msg.value = 0.0268703977259;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.174303082525);
    msg.setSource(28695U);
    msg.setSourceEntity(56U);
    msg.setDestination(53902U);
    msg.setDestinationEntity(72U);
    msg.id = 134U;
    msg.value = 0.0680105836963;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.385079436462);
    msg.setSource(47360U);
    msg.setSourceEntity(91U);
    msg.setDestination(63931U);
    msg.setDestinationEntity(223U);
    msg.id = 149U;
    msg.value = 0.0867813515685;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.563479329571);
    msg.setSource(585U);
    msg.setSourceEntity(79U);
    msg.setDestination(29092U);
    msg.setDestinationEntity(73U);
    msg.x = 0.339070732972;
    msg.y = 0.0122804340367;
    msg.z = 0.0733071609237;
    msg.phi = 0.761035756447;
    msg.theta = 0.149055433083;
    msg.psi = 0.417195200783;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.126599195492);
    msg.setSource(12673U);
    msg.setSourceEntity(180U);
    msg.setDestination(15921U);
    msg.setDestinationEntity(208U);
    msg.x = 0.0818373088267;
    msg.y = 0.0867431231469;
    msg.z = 0.411997339341;
    msg.phi = 0.0983127438177;
    msg.theta = 0.069364395621;
    msg.psi = 0.80198210088;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.937574432336);
    msg.setSource(4125U);
    msg.setSourceEntity(150U);
    msg.setDestination(42296U);
    msg.setDestinationEntity(242U);
    msg.x = 0.0533015450867;
    msg.y = 0.322167775964;
    msg.z = 0.708633615842;
    msg.phi = 0.404254448745;
    msg.theta = 0.86258119682;
    msg.psi = 0.445339386052;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.259802220131);
    msg.setSource(22114U);
    msg.setSourceEntity(169U);
    msg.setDestination(1783U);
    msg.setDestinationEntity(248U);
    msg.beam_width = 0.470013825639;
    msg.beam_height = 0.627666863984;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.0687055961352);
    msg.setSource(40124U);
    msg.setSourceEntity(43U);
    msg.setDestination(24131U);
    msg.setDestinationEntity(83U);
    msg.beam_width = 0.270785220248;
    msg.beam_height = 0.370687721141;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.931115585087);
    msg.setSource(53766U);
    msg.setSourceEntity(241U);
    msg.setDestination(46203U);
    msg.setDestinationEntity(187U);
    msg.beam_width = 0.13570448302;
    msg.beam_height = 0.22188164381;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.779262206506);
    msg.setSource(50543U);
    msg.setSourceEntity(39U);
    msg.setDestination(25381U);
    msg.setDestinationEntity(131U);
    msg.sane = 52U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.547337214292);
    msg.setSource(28239U);
    msg.setSourceEntity(141U);
    msg.setDestination(31576U);
    msg.setDestinationEntity(46U);
    msg.sane = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.556279603924);
    msg.setSource(59947U);
    msg.setSourceEntity(53U);
    msg.setDestination(28671U);
    msg.setDestinationEntity(202U);
    msg.sane = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.769477724234);
    msg.setSource(52401U);
    msg.setSourceEntity(237U);
    msg.setDestination(64684U);
    msg.setDestinationEntity(89U);
    msg.value = 0.952898732743;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.452254048791);
    msg.setSource(16447U);
    msg.setSourceEntity(75U);
    msg.setDestination(47230U);
    msg.setDestinationEntity(251U);
    msg.value = 0.214576988996;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.00388938656659);
    msg.setSource(39423U);
    msg.setSourceEntity(77U);
    msg.setDestination(29616U);
    msg.setDestinationEntity(39U);
    msg.value = 0.303550017116;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.814352751423);
    msg.setSource(14034U);
    msg.setSourceEntity(35U);
    msg.setDestination(10265U);
    msg.setDestinationEntity(80U);
    msg.value = 0.140249891191;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.89603217354);
    msg.setSource(5932U);
    msg.setSourceEntity(233U);
    msg.setDestination(60690U);
    msg.setDestinationEntity(66U);
    msg.value = 0.224449911874;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.896330904475);
    msg.setSource(13984U);
    msg.setSourceEntity(55U);
    msg.setDestination(4054U);
    msg.setDestinationEntity(186U);
    msg.value = 0.0262469888472;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.749325979468);
    msg.setSource(6436U);
    msg.setSourceEntity(39U);
    msg.setDestination(43070U);
    msg.setDestinationEntity(153U);
    msg.value = 0.947472590559;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.0340265352657);
    msg.setSource(10689U);
    msg.setSourceEntity(1U);
    msg.setDestination(8943U);
    msg.setDestinationEntity(20U);
    msg.value = 0.281426199798;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.983791967553);
    msg.setSource(23535U);
    msg.setSourceEntity(245U);
    msg.setDestination(39804U);
    msg.setDestinationEntity(10U);
    msg.value = 0.14029136746;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.292908186536);
    msg.setSource(63568U);
    msg.setSourceEntity(197U);
    msg.setDestination(41483U);
    msg.setDestinationEntity(47U);
    msg.value = 0.288866385988;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.0931961323806);
    msg.setSource(12651U);
    msg.setSourceEntity(43U);
    msg.setDestination(26187U);
    msg.setDestinationEntity(173U);
    msg.value = 0.397380578084;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.829274547646);
    msg.setSource(41120U);
    msg.setSourceEntity(71U);
    msg.setDestination(13417U);
    msg.setDestinationEntity(87U);
    msg.value = 0.296274903529;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.33093757771);
    msg.setSource(61317U);
    msg.setSourceEntity(3U);
    msg.setDestination(5573U);
    msg.setDestinationEntity(121U);
    msg.value = 0.61612613695;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.631214334867);
    msg.setSource(10844U);
    msg.setSourceEntity(111U);
    msg.setDestination(49032U);
    msg.setDestinationEntity(180U);
    msg.value = 0.537005866441;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.375740662055);
    msg.setSource(3152U);
    msg.setSourceEntity(30U);
    msg.setDestination(28799U);
    msg.setDestinationEntity(6U);
    msg.value = 0.584680604318;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.353207620419);
    msg.setSource(58300U);
    msg.setSourceEntity(163U);
    msg.setDestination(15462U);
    msg.setDestinationEntity(203U);
    msg.value = 0.406224299314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.243819560611);
    msg.setSource(10672U);
    msg.setSourceEntity(96U);
    msg.setDestination(52007U);
    msg.setDestinationEntity(119U);
    msg.value = 0.708391153867;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.712907187214);
    msg.setSource(50221U);
    msg.setSourceEntity(38U);
    msg.setDestination(10868U);
    msg.setDestinationEntity(48U);
    msg.value = 0.361405026411;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.11272986743);
    msg.setSource(4137U);
    msg.setSourceEntity(141U);
    msg.setDestination(4452U);
    msg.setDestinationEntity(158U);
    msg.value = 0.969233179567;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.723087695965);
    msg.setSource(23682U);
    msg.setSourceEntity(35U);
    msg.setDestination(52992U);
    msg.setDestinationEntity(105U);
    msg.value = 0.298427673377;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.336418631742);
    msg.setSource(29165U);
    msg.setSourceEntity(110U);
    msg.setDestination(44989U);
    msg.setDestinationEntity(55U);
    msg.value = 0.637796941191;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.687482315457);
    msg.setSource(9787U);
    msg.setSourceEntity(56U);
    msg.setDestination(31327U);
    msg.setDestinationEntity(1U);
    msg.value = 0.0989357574097;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.419353142947);
    msg.setSource(6817U);
    msg.setSourceEntity(226U);
    msg.setDestination(6008U);
    msg.setDestinationEntity(127U);
    msg.value = 0.14255920108;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.598897955495);
    msg.setSource(64606U);
    msg.setSourceEntity(135U);
    msg.setDestination(10806U);
    msg.setDestinationEntity(113U);
    msg.value = 0.779426966658;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.552524619329);
    msg.setSource(16206U);
    msg.setSourceEntity(11U);
    msg.setDestination(44039U);
    msg.setDestinationEntity(213U);
    msg.validity = 59990U;
    msg.type = 54U;
    msg.tow = 3991781250U;
    msg.base_lat = 0.621618309252;
    msg.base_lon = 0.216080918731;
    msg.base_height = 0.658901936647;
    msg.n = 0.398546019384;
    msg.e = 0.848301062822;
    msg.d = 0.0940049153023;
    msg.v_n = 0.320896250517;
    msg.v_e = 0.856024888516;
    msg.v_d = 0.41377914682;
    msg.satellites = 39U;
    msg.iar_hyp = 52761U;
    msg.iar_ratio = 0.142795480579;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.263896793111);
    msg.setSource(47827U);
    msg.setSourceEntity(134U);
    msg.setDestination(62408U);
    msg.setDestinationEntity(123U);
    msg.validity = 9973U;
    msg.type = 49U;
    msg.tow = 70349256U;
    msg.base_lat = 0.288364547741;
    msg.base_lon = 0.177846924636;
    msg.base_height = 0.902875612001;
    msg.n = 0.449297219891;
    msg.e = 0.926565836373;
    msg.d = 0.490024634064;
    msg.v_n = 0.826369879787;
    msg.v_e = 0.521146044615;
    msg.v_d = 0.214001704866;
    msg.satellites = 112U;
    msg.iar_hyp = 57807U;
    msg.iar_ratio = 0.172523084302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.321573097249);
    msg.setSource(34077U);
    msg.setSourceEntity(151U);
    msg.setDestination(53101U);
    msg.setDestinationEntity(10U);
    msg.validity = 22010U;
    msg.type = 74U;
    msg.tow = 1681368475U;
    msg.base_lat = 0.163909255342;
    msg.base_lon = 0.994623236324;
    msg.base_height = 0.329333713615;
    msg.n = 0.18599497073;
    msg.e = 0.800830696183;
    msg.d = 0.524134561198;
    msg.v_n = 0.880646181154;
    msg.v_e = 0.744788827273;
    msg.v_d = 0.722335663076;
    msg.satellites = 166U;
    msg.iar_hyp = 5178U;
    msg.iar_ratio = 0.437162872114;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.868560671307);
    msg.setSource(21703U);
    msg.setSourceEntity(190U);
    msg.setDestination(52320U);
    msg.setDestinationEntity(53U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.926785566713;
    tmp_msg_0.lon = 0.6219474198;
    tmp_msg_0.height = 0.0619843221964;
    tmp_msg_0.x = 0.380051257066;
    tmp_msg_0.y = 0.564173760959;
    tmp_msg_0.z = 0.27383852172;
    tmp_msg_0.phi = 0.985277624558;
    tmp_msg_0.theta = 0.214788964837;
    tmp_msg_0.psi = 0.775613993311;
    tmp_msg_0.u = 0.25432419041;
    tmp_msg_0.v = 0.644588598447;
    tmp_msg_0.w = 0.0832444571628;
    tmp_msg_0.vx = 0.353166070441;
    tmp_msg_0.vy = 0.832907727709;
    tmp_msg_0.vz = 0.976720749489;
    tmp_msg_0.p = 0.212612041026;
    tmp_msg_0.q = 0.376358005656;
    tmp_msg_0.r = 0.890391936555;
    tmp_msg_0.depth = 0.338754814541;
    tmp_msg_0.alt = 0.664007951942;
    msg.state.set(tmp_msg_0);
    msg.type = 243U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.341101467727);
    msg.setSource(50009U);
    msg.setSourceEntity(220U);
    msg.setDestination(14555U);
    msg.setDestinationEntity(89U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.999665064683;
    tmp_msg_0.lon = 0.00350658326979;
    tmp_msg_0.height = 0.60396219051;
    tmp_msg_0.x = 0.859210629649;
    tmp_msg_0.y = 0.301303250532;
    tmp_msg_0.z = 0.371313351702;
    tmp_msg_0.phi = 0.908229222487;
    tmp_msg_0.theta = 0.635149615744;
    tmp_msg_0.psi = 0.440299083945;
    tmp_msg_0.u = 0.617330849088;
    tmp_msg_0.v = 0.788970767773;
    tmp_msg_0.w = 0.179079785554;
    tmp_msg_0.vx = 0.847737678323;
    tmp_msg_0.vy = 0.0693659934815;
    tmp_msg_0.vz = 0.691435420443;
    tmp_msg_0.p = 0.293579951855;
    tmp_msg_0.q = 0.0691326803634;
    tmp_msg_0.r = 0.788069385775;
    tmp_msg_0.depth = 0.582265754072;
    tmp_msg_0.alt = 0.660956378519;
    msg.state.set(tmp_msg_0);
    msg.type = 49U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.392065493523);
    msg.setSource(20470U);
    msg.setSourceEntity(4U);
    msg.setDestination(46067U);
    msg.setDestinationEntity(117U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.664949933844;
    tmp_msg_0.lon = 0.175258927269;
    tmp_msg_0.height = 0.171703805419;
    tmp_msg_0.x = 0.970059600033;
    tmp_msg_0.y = 0.827675335676;
    tmp_msg_0.z = 0.260874773998;
    tmp_msg_0.phi = 0.135165490777;
    tmp_msg_0.theta = 0.234314266211;
    tmp_msg_0.psi = 0.579396160035;
    tmp_msg_0.u = 0.870038613092;
    tmp_msg_0.v = 0.222232955701;
    tmp_msg_0.w = 0.854112571474;
    tmp_msg_0.vx = 0.120819879576;
    tmp_msg_0.vy = 0.834417531881;
    tmp_msg_0.vz = 0.715478845742;
    tmp_msg_0.p = 0.281446092962;
    tmp_msg_0.q = 0.683343622674;
    tmp_msg_0.r = 0.551866862688;
    tmp_msg_0.depth = 0.401209976429;
    tmp_msg_0.alt = 0.756173812832;
    msg.state.set(tmp_msg_0);
    msg.type = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.28752380695);
    msg.setSource(22362U);
    msg.setSourceEntity(204U);
    msg.setDestination(24321U);
    msg.setDestinationEntity(46U);
    msg.value = 0.657709996553;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.411782350268);
    msg.setSource(53774U);
    msg.setSourceEntity(141U);
    msg.setDestination(22723U);
    msg.setDestinationEntity(215U);
    msg.value = 0.931997418429;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.313081610104);
    msg.setSource(4704U);
    msg.setSourceEntity(151U);
    msg.setDestination(39814U);
    msg.setDestinationEntity(34U);
    msg.value = 0.598943514981;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.0633526127987);
    msg.setSource(27217U);
    msg.setSourceEntity(44U);
    msg.setDestination(44318U);
    msg.setDestinationEntity(191U);
    msg.value = 0.621155618858;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.220770640356);
    msg.setSource(33454U);
    msg.setSourceEntity(139U);
    msg.setDestination(49944U);
    msg.setDestinationEntity(84U);
    msg.value = 0.555716883864;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.282204493765);
    msg.setSource(17062U);
    msg.setSourceEntity(35U);
    msg.setDestination(46362U);
    msg.setDestinationEntity(91U);
    msg.value = 0.147728075039;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.988000643991);
    msg.setSource(46353U);
    msg.setSourceEntity(249U);
    msg.setDestination(62940U);
    msg.setDestinationEntity(4U);
    msg.value = 0.687294819575;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.94121293754);
    msg.setSource(39135U);
    msg.setSourceEntity(31U);
    msg.setDestination(24595U);
    msg.setDestinationEntity(165U);
    msg.value = 0.485108738201;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.433590064818);
    msg.setSource(7931U);
    msg.setSourceEntity(207U);
    msg.setDestination(20908U);
    msg.setDestinationEntity(115U);
    msg.value = 0.787364436896;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.566637865422);
    msg.setSource(63176U);
    msg.setSourceEntity(42U);
    msg.setDestination(26801U);
    msg.setDestinationEntity(240U);
    msg.value = 0.808583277662;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.222896867215);
    msg.setSource(36759U);
    msg.setSourceEntity(47U);
    msg.setDestination(59812U);
    msg.setDestinationEntity(245U);
    msg.value = 0.800845519986;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.624399592972);
    msg.setSource(60234U);
    msg.setSourceEntity(32U);
    msg.setDestination(44661U);
    msg.setDestinationEntity(88U);
    msg.value = 0.899687879921;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.724664135826);
    msg.setSource(50255U);
    msg.setSourceEntity(25U);
    msg.setDestination(46438U);
    msg.setDestinationEntity(98U);
    msg.value = 0.238906360284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.687591288359);
    msg.setSource(19628U);
    msg.setSourceEntity(9U);
    msg.setDestination(61837U);
    msg.setDestinationEntity(154U);
    msg.value = 0.869983267837;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.607669336054);
    msg.setSource(41677U);
    msg.setSourceEntity(128U);
    msg.setDestination(35775U);
    msg.setDestinationEntity(199U);
    msg.value = 0.22147813607;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.000370833859892);
    msg.setSource(24291U);
    msg.setSourceEntity(176U);
    msg.setDestination(1721U);
    msg.setDestinationEntity(8U);
    msg.id = 14U;
    msg.zoom = 245U;
    msg.action = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.114940011149);
    msg.setSource(33620U);
    msg.setSourceEntity(19U);
    msg.setDestination(740U);
    msg.setDestinationEntity(238U);
    msg.id = 196U;
    msg.zoom = 56U;
    msg.action = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.659676413732);
    msg.setSource(49114U);
    msg.setSourceEntity(248U);
    msg.setDestination(14293U);
    msg.setDestinationEntity(144U);
    msg.id = 167U;
    msg.zoom = 240U;
    msg.action = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.970301184312);
    msg.setSource(27775U);
    msg.setSourceEntity(78U);
    msg.setDestination(7425U);
    msg.setDestinationEntity(131U);
    msg.id = 150U;
    msg.value = 0.861019014012;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.396234049513);
    msg.setSource(41069U);
    msg.setSourceEntity(81U);
    msg.setDestination(33290U);
    msg.setDestinationEntity(186U);
    msg.id = 129U;
    msg.value = 0.640965048817;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.278946941772);
    msg.setSource(44013U);
    msg.setSourceEntity(165U);
    msg.setDestination(44988U);
    msg.setDestinationEntity(94U);
    msg.id = 64U;
    msg.value = 0.602019798623;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.732297480652);
    msg.setSource(56256U);
    msg.setSourceEntity(141U);
    msg.setDestination(1940U);
    msg.setDestinationEntity(112U);
    msg.id = 78U;
    msg.value = 0.27103641581;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.421838688116);
    msg.setSource(8279U);
    msg.setSourceEntity(86U);
    msg.setDestination(56870U);
    msg.setDestinationEntity(41U);
    msg.id = 228U;
    msg.value = 0.954756208649;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.350881240538);
    msg.setSource(54398U);
    msg.setSourceEntity(146U);
    msg.setDestination(34855U);
    msg.setDestinationEntity(63U);
    msg.id = 160U;
    msg.value = 0.25933815623;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.289415523752);
    msg.setSource(48052U);
    msg.setSourceEntity(78U);
    msg.setDestination(63811U);
    msg.setDestinationEntity(208U);
    msg.id = 247U;
    msg.angle = 0.940438710705;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.419583606089);
    msg.setSource(29769U);
    msg.setSourceEntity(247U);
    msg.setDestination(40491U);
    msg.setDestinationEntity(101U);
    msg.id = 36U;
    msg.angle = 0.780291506357;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.649115213612);
    msg.setSource(5473U);
    msg.setSourceEntity(197U);
    msg.setDestination(39486U);
    msg.setDestinationEntity(124U);
    msg.id = 66U;
    msg.angle = 0.202352597234;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.253989588859);
    msg.setSource(15817U);
    msg.setSourceEntity(43U);
    msg.setDestination(27091U);
    msg.setDestinationEntity(83U);
    msg.op = 169U;
    msg.actions.assign("EPPHCVDWXOPH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.0812596577587);
    msg.setSource(54513U);
    msg.setSourceEntity(203U);
    msg.setDestination(21238U);
    msg.setDestinationEntity(45U);
    msg.op = 208U;
    msg.actions.assign("LQQWEHOVONYXIXKJCBPHYEPYZZJUIPIJHKPHBXMULCLQFKHVUADOQOLEBHCUZLCGCJAQXABJRXMRGESUYVGORZAVQUYMNWGXRJWVKEWFHPXSDGM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.128906486424);
    msg.setSource(64997U);
    msg.setSourceEntity(234U);
    msg.setDestination(36248U);
    msg.setDestinationEntity(25U);
    msg.op = 116U;
    msg.actions.assign("KDVCVKGYRGBGHBQZQPWLMWTJOMKENCRDHRSAXTSVLNTWIMJUAXZHVVENDCFPBHGXTZBUDJJSIDSBTYDODHTYAMZWXNSKKNXGYAKPDNWYYROQEYIWQHLDUEUXRCVCKWOOPMSILSGMVOQXHYZLTICCURPVPNNQWUKLIBGBQRCHFJJELYHTWKZSJZCRUDEFLMUEGXF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.582319713085);
    msg.setSource(20212U);
    msg.setSourceEntity(14U);
    msg.setDestination(1949U);
    msg.setDestinationEntity(188U);
    msg.actions.assign("XAVGDCVSUSRBGVBLMX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.553028201093);
    msg.setSource(63452U);
    msg.setSourceEntity(217U);
    msg.setDestination(35314U);
    msg.setDestinationEntity(35U);
    msg.actions.assign("BYOXFWTORWYYXOVKGWNEPQOHQZEXGXXVDTEPXFSSYDQFELACVNLSJCGCRFKRIWUPXMTIONKEZHKBUOUDZGJYAUGDGSHZLICFMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.225735705207);
    msg.setSource(50118U);
    msg.setSourceEntity(132U);
    msg.setDestination(41516U);
    msg.setDestinationEntity(154U);
    msg.actions.assign("VGSMFRQBIAAPSPVVVRUIJKKRSOKTJHMLIWRGZCWWZIJXHI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.934710739592);
    msg.setSource(46576U);
    msg.setSourceEntity(220U);
    msg.setDestination(16590U);
    msg.setDestinationEntity(243U);
    msg.button = 73U;
    msg.value = 41U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.453085152116);
    msg.setSource(31538U);
    msg.setSourceEntity(158U);
    msg.setDestination(48833U);
    msg.setDestinationEntity(153U);
    msg.button = 54U;
    msg.value = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.322845134865);
    msg.setSource(57700U);
    msg.setSourceEntity(178U);
    msg.setDestination(22951U);
    msg.setDestinationEntity(198U);
    msg.button = 16U;
    msg.value = 170U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.823826451031);
    msg.setSource(60496U);
    msg.setSourceEntity(165U);
    msg.setDestination(56308U);
    msg.setDestinationEntity(196U);
    msg.op = 143U;
    msg.text.assign("SOOZHJOXYBMHVAWBSTYUBENDRMNVBGIYENVTPEMZUJCOLCZNPXNJPLZU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.207697012809);
    msg.setSource(28586U);
    msg.setSourceEntity(191U);
    msg.setDestination(7224U);
    msg.setDestinationEntity(28U);
    msg.op = 184U;
    msg.text.assign("EFDWOIBWUIAVUYLPLLPGXWYMKYNAZXQWEKRXEHAHFDWOCUVBXJJUQAAGPVONBWOZQVTLDXOXEJWHYTLCCYQSKPECIHEJJYGGOESOFHFPQVZWVZSNGWRQQSSYSSQNCFIDERJMIFJMRRNHPUNLBE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.797024414022);
    msg.setSource(41564U);
    msg.setSourceEntity(47U);
    msg.setDestination(22797U);
    msg.setDestinationEntity(253U);
    msg.op = 35U;
    msg.text.assign("CRKJETIDLPHVWEAGKQSLCSBBAXXTARGWCNUXXURKUWHLNFHYZYISEQJMNIFTDTLPFQRJOHCLWSUXQGXJYNBNRPDWZKJFJEVQWPCZOORUTSMUIBTAZDGELOVFBQNAMVSZUZCSYERDVQRFMPNABZJGMHHWYGCDRFWKVPQSJKWVYHCCSUBFOETVIMJNIXMMGOVIULHMZKNGXQLYILGMBEJUCHNIXKZKGPTXAYFROKOEDPAL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.713642694905);
    msg.setSource(1479U);
    msg.setSourceEntity(31U);
    msg.setDestination(59363U);
    msg.setDestinationEntity(154U);
    msg.op = 11U;
    msg.time_remain = 0.215960665897;
    msg.sched_time = 0.822063412069;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.994818411404);
    msg.setSource(49514U);
    msg.setSourceEntity(209U);
    msg.setDestination(705U);
    msg.setDestinationEntity(211U);
    msg.op = 93U;
    msg.time_remain = 0.553331928726;
    msg.sched_time = 0.0777535870716;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.778985811944);
    msg.setSource(55774U);
    msg.setSourceEntity(90U);
    msg.setDestination(36423U);
    msg.setDestinationEntity(95U);
    msg.op = 145U;
    msg.time_remain = 0.2183852289;
    msg.sched_time = 0.329665086707;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.516016785391);
    msg.setSource(33322U);
    msg.setSourceEntity(128U);
    msg.setDestination(56390U);
    msg.setDestinationEntity(33U);
    msg.name.assign("LXRREWZILHJSQFBSRYKDPBFCNWBNAKZTSZRIUDTAVZBKYVXFSVIPVAYTNOVTNAPYDZGLKJTDZNDBFGHFQJEAJWYHZHNEUACKSMYWEUUXOCNUEAQWPEBXUFRSEHENDRVS");
    msg.op = 49U;
    msg.sched_time = 0.343518383284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.755129800263);
    msg.setSource(40080U);
    msg.setSourceEntity(173U);
    msg.setDestination(64591U);
    msg.setDestinationEntity(169U);
    msg.name.assign("VNFKQYCQZINHVFRCOMRTVIEYVFQCSWZQGAEMOMYWRFNFSDIHCUFZPSXAIHBYUUAWXMCZJXTHSCH");
    msg.op = 249U;
    msg.sched_time = 0.567554237454;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.291710683829);
    msg.setSource(2186U);
    msg.setSourceEntity(39U);
    msg.setDestination(50319U);
    msg.setDestinationEntity(57U);
    msg.name.assign("YKDUHIGFSWUIGMIRAARRJQRYDVFGTBQWVCMZFLJXNVAXKHTJNGPXZDVRCBLFUJHDXZBZOVCZMUCJDATCQXLNKBDYKPYNCBFOHKMWASTEOOMEHHVPGCXINBOUNOYWWEECXLWZUZBSHSIMEANKRRZRHTGYPEOJMPKHDWFFLIRDKMLUINPSUDQVQWQA");
    msg.op = 246U;
    msg.sched_time = 0.790536290703;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.126341878775);
    msg.setSource(62628U);
    msg.setSourceEntity(130U);
    msg.setDestination(35172U);
    msg.setDestinationEntity(221U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.669280384084);
    msg.setSource(12764U);
    msg.setSourceEntity(56U);
    msg.setDestination(51655U);
    msg.setDestinationEntity(34U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.917060769926);
    msg.setSource(43384U);
    msg.setSourceEntity(47U);
    msg.setDestination(30050U);
    msg.setDestinationEntity(205U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.763474376597);
    msg.setSource(4281U);
    msg.setSourceEntity(15U);
    msg.setDestination(24102U);
    msg.setDestinationEntity(180U);
    msg.name.assign("CHTZPTSAAHPRLEVRXWDJVISAZMVBAAIDGWXNPOLVNMBUIFMWDQMJHVNLLDDVTPZLUOEPHYQYTOWZWMIEQXRIHLSEKYJBCHOYLYKFOHJJOMCOKUWTTJSRBSEC");
    msg.state = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.525275664082);
    msg.setSource(39237U);
    msg.setSourceEntity(78U);
    msg.setDestination(42511U);
    msg.setDestinationEntity(207U);
    msg.name.assign("KSJTALOMXKJORECMMWKQNZYPNQMQKDQJKWEOSSFMPIMTJRFJGHQOZTOIWONWRJEIHXKPSETXCJPJMTYINZEIBDCYU");
    msg.state = 108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.868699690862);
    msg.setSource(3548U);
    msg.setSourceEntity(212U);
    msg.setDestination(20811U);
    msg.setDestinationEntity(52U);
    msg.name.assign("QOMLZHPQYDHFTTIPOCMZVXBIYVFAMFCCYUANKKSBVCJAUZHJCWKNJFQTDHDEMNZTWSZSUYUSCQEO");
    msg.state = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.444272524368);
    msg.setSource(58195U);
    msg.setSourceEntity(182U);
    msg.setDestination(42347U);
    msg.setDestinationEntity(203U);
    msg.name.assign("PZPDVDSAECTPLJBAVOPGQIIXEHLDFPG");
    msg.value = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.10565424366);
    msg.setSource(49466U);
    msg.setSourceEntity(182U);
    msg.setDestination(22586U);
    msg.setDestinationEntity(83U);
    msg.name.assign("WXMWVPKFFYTBMCYPRJNIDDEMILRYERGSJPRBBUKWBCLEKHGEJFYVFOSWBBWEEDSTQOAIYDIRJRLXCQIKUUUFJMMDHLZJANKBZYHQPHQKJQUXPOSSNXGNPEIADFNCZVAZQASVPYFQJSCHEYCVHNKLAUMGRETCODFOGKXCYFIHWZWALGUOOMLKZXGXQRXDAROVPLTQWT");
    msg.value = 42U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.0611611621814);
    msg.setSource(60254U);
    msg.setSourceEntity(65U);
    msg.setDestination(42068U);
    msg.setDestinationEntity(102U);
    msg.name.assign("MFWNNZTSHZHVOYFLXKXVPBGQWHAFJUSXNWSKJGBNVRBEBZYSEBLFKEGAYYQGCRPUJMCXBLRTZNHOEHDNXTHOWHKWPDFNLFKCNLWAUVZTJCRUGPQIURYUOWMQXZYBKEZPJEILTIODRSZLYDEIDSSXYPKIXDXGCRAYSOZTDBBGUUCMIGAFTFKIAVSKOOTYLMPZPVRTJOQOJVRMDACWWJNCHEVEGHQMBXWMVGQCNFATSHVJEI");
    msg.value = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.709676814042);
    msg.setSource(9987U);
    msg.setSourceEntity(143U);
    msg.setDestination(50099U);
    msg.setDestinationEntity(83U);
    msg.name.assign("XZWCQPOJHKLFXZQANBDYKSCUCYQTITXVIIHUJNJOGZMGGJNOGOESJHAQWZNFETZRDPDVCRHKTSUPHVMYMJYBXXCRLBWBCDYOQRIKSNYTXBZAVLCGWMDCTRMLAFJVEECWZWOLWGASIQLQSDBIXVPSKMZDUGVWMKTEQRBKALGRPEOZLSTSUAPUNLNCRTBKNYFNIBQTUEFRYFUDVIGRFUEFZMODPFUHSJDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.730254998006);
    msg.setSource(17258U);
    msg.setSourceEntity(242U);
    msg.setDestination(43272U);
    msg.setDestinationEntity(160U);
    msg.name.assign("FEUNZXYKOBQIHOLRYMDPKPRSBHFKBZQVRXAICHSRKLGRLIWBKDOTIZFMMCEGKWWXCBTHVPTXPWQIOXOJYYDLLDONPWYLIPIJCBMQQTKTWVSGHFVZFACVPWGCDUNDYWZQYFUYHCFYXXKNHGQEQLMTEXRHROEJSHVTECFSMAJSPUNKLUWMAJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.782132254534);
    msg.setSource(64332U);
    msg.setSourceEntity(203U);
    msg.setDestination(21134U);
    msg.setDestinationEntity(71U);
    msg.name.assign("CGARRQFKDWIBFEUVSSGFUMNMASBDMSRZVWAFSLHQUHLVMYLVZOGSTYNUVBRPRHEKHOAGXPXRPHYDTUNXRPMEXYDSIZRWEPGSYEJBOBBRLFBVVGXFTCSTHNOGQUXDAUHIALJFPHLAFJKJTEJMJAVZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.676756179066);
    msg.setSource(2539U);
    msg.setSourceEntity(43U);
    msg.setDestination(61568U);
    msg.setDestinationEntity(169U);
    msg.name.assign("LJJJWVQMRTAYBYXXJUQBTKDXTDQKHDMVDBZOKQNSMYDWKHKJJXAWVQVZKFOIOPBBCIOMHYWXYIJBGHCZINLVCTBHPEGRRPMSETWROLLHCGOEEKSNYZNRUPBATEOXVZIQALGALEFEVSABWVULNBHTFZTEMYMHHTDIFICARVPOFYNOWSTWEGPLRPMCJXRWQXAGYNQNUHIZSUKLCCMCNOZFGUGPRPDUIGEISPSMDKFXSAYRVDWQUSAFDLZ");
    msg.value = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.0221266982447);
    msg.setSource(13458U);
    msg.setSourceEntity(244U);
    msg.setDestination(45699U);
    msg.setDestinationEntity(229U);
    msg.name.assign("ISQILDXTIEPEHGFZQSCGIBSYDWLVXMUCJMULKMWZSMLTHNUWBTMKMAGEJRSGOBZILYOQEXYQDJOYNDKCIFWKHZPUNMRPDQQBXNNLEGGTYAPKCNE");
    msg.value = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.78588502249);
    msg.setSource(16868U);
    msg.setSourceEntity(7U);
    msg.setDestination(36311U);
    msg.setDestinationEntity(238U);
    msg.name.assign("ZSXJAAYQSZUJBJSFPYNBGRAIGMNOCLYGSRJNYBFLQIEBLOJJXWMNGTVQUSLHKVDZKFPHKWQZOCTJYFIPRYRHDXCVOMMBDSRPNPOYRHHWOQFEKBHPQVQOVLHYBCGWZCOTEDKNMATVGNCEKJDNOPIUHPIQSIAPXULKEREBKELWLYWVUAXZTWFEIMDJLIFMTMEDCHYRULRZXXDXEAWVFRICSPUIHADADBGJOWSAGTQCZVCKTFNZQMXMUZNUTX");
    msg.value = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.698908026638);
    msg.setSource(65122U);
    msg.setSourceEntity(102U);
    msg.setDestination(34891U);
    msg.setDestinationEntity(62U);
    msg.id = 188U;
    msg.period = 2346981152U;
    msg.duty_cycle = 1318564505U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.590055382894);
    msg.setSource(43938U);
    msg.setSourceEntity(108U);
    msg.setDestination(57341U);
    msg.setDestinationEntity(242U);
    msg.id = 238U;
    msg.period = 1535909694U;
    msg.duty_cycle = 4027012108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.844718172381);
    msg.setSource(18424U);
    msg.setSourceEntity(151U);
    msg.setDestination(64022U);
    msg.setDestinationEntity(122U);
    msg.id = 95U;
    msg.period = 2095647923U;
    msg.duty_cycle = 2046362581U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.910727765782);
    msg.setSource(14693U);
    msg.setSourceEntity(58U);
    msg.setDestination(25684U);
    msg.setDestinationEntity(26U);
    msg.id = 20U;
    msg.period = 404574200U;
    msg.duty_cycle = 952972294U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.579818524972);
    msg.setSource(52797U);
    msg.setSourceEntity(203U);
    msg.setDestination(19448U);
    msg.setDestinationEntity(210U);
    msg.id = 218U;
    msg.period = 3865339615U;
    msg.duty_cycle = 493226748U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.287718375706);
    msg.setSource(54673U);
    msg.setSourceEntity(15U);
    msg.setDestination(34278U);
    msg.setDestinationEntity(28U);
    msg.id = 130U;
    msg.period = 3020364197U;
    msg.duty_cycle = 1142344083U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.492773410214);
    msg.setSource(22096U);
    msg.setSourceEntity(221U);
    msg.setDestination(65004U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.784189516356;
    msg.lon = 0.0482771080033;
    msg.height = 0.83330203389;
    msg.x = 0.951266573351;
    msg.y = 0.542498366065;
    msg.z = 0.980554418641;
    msg.phi = 0.435862666666;
    msg.theta = 0.420281677507;
    msg.psi = 0.441799628068;
    msg.u = 0.234703731245;
    msg.v = 0.583362516808;
    msg.w = 0.0301860244751;
    msg.vx = 0.638928162216;
    msg.vy = 0.158303207533;
    msg.vz = 0.042574212965;
    msg.p = 0.0247224461986;
    msg.q = 0.544559015612;
    msg.r = 0.644224611064;
    msg.depth = 0.234015086649;
    msg.alt = 0.219181657892;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.274847696577);
    msg.setSource(20511U);
    msg.setSourceEntity(176U);
    msg.setDestination(32094U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.265922286567;
    msg.lon = 0.566550601227;
    msg.height = 0.92201094087;
    msg.x = 0.932604219945;
    msg.y = 0.898136817034;
    msg.z = 0.136341411031;
    msg.phi = 0.126970804715;
    msg.theta = 0.816145028853;
    msg.psi = 0.566540010239;
    msg.u = 0.1260134844;
    msg.v = 0.374546120558;
    msg.w = 0.993595685095;
    msg.vx = 0.11062823869;
    msg.vy = 0.837824783025;
    msg.vz = 0.231887001902;
    msg.p = 0.365919778349;
    msg.q = 0.729251910287;
    msg.r = 0.120059692061;
    msg.depth = 0.0844581545508;
    msg.alt = 0.477579321814;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.756910647145);
    msg.setSource(12321U);
    msg.setSourceEntity(97U);
    msg.setDestination(53020U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.141466793781;
    msg.lon = 0.320523875727;
    msg.height = 0.870591417672;
    msg.x = 0.898833545266;
    msg.y = 0.595340801131;
    msg.z = 0.106421503003;
    msg.phi = 0.517393637975;
    msg.theta = 0.53173705034;
    msg.psi = 0.77782442419;
    msg.u = 0.729687830975;
    msg.v = 0.472872158295;
    msg.w = 0.616580787395;
    msg.vx = 0.467075025348;
    msg.vy = 0.770056448123;
    msg.vz = 0.205827460023;
    msg.p = 0.0854004006981;
    msg.q = 0.192831995198;
    msg.r = 0.488115322499;
    msg.depth = 0.0958742053588;
    msg.alt = 0.99025952304;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.603301084273);
    msg.setSource(9208U);
    msg.setSourceEntity(189U);
    msg.setDestination(38257U);
    msg.setDestinationEntity(252U);
    msg.x = 0.174619375138;
    msg.y = 0.52354589956;
    msg.z = 0.151644570338;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.982384839256);
    msg.setSource(51415U);
    msg.setSourceEntity(204U);
    msg.setDestination(38022U);
    msg.setDestinationEntity(219U);
    msg.x = 0.821213041755;
    msg.y = 0.355270131801;
    msg.z = 0.00380334041362;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.421219865357);
    msg.setSource(2246U);
    msg.setSourceEntity(9U);
    msg.setDestination(55223U);
    msg.setDestinationEntity(2U);
    msg.x = 0.285507496797;
    msg.y = 0.00622168826633;
    msg.z = 0.879475751585;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.629074706421);
    msg.setSource(54191U);
    msg.setSourceEntity(118U);
    msg.setDestination(4192U);
    msg.setDestinationEntity(172U);
    msg.value = 0.954116230983;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.272462399175);
    msg.setSource(44526U);
    msg.setSourceEntity(215U);
    msg.setDestination(37581U);
    msg.setDestinationEntity(246U);
    msg.value = 0.475910098241;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.279614754008);
    msg.setSource(37565U);
    msg.setSourceEntity(140U);
    msg.setDestination(35012U);
    msg.setDestinationEntity(9U);
    msg.value = 0.212909500968;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.856356678356);
    msg.setSource(28073U);
    msg.setSourceEntity(231U);
    msg.setDestination(47224U);
    msg.setDestinationEntity(106U);
    msg.value = 0.195947440661;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.602792690165);
    msg.setSource(4433U);
    msg.setSourceEntity(131U);
    msg.setDestination(59536U);
    msg.setDestinationEntity(90U);
    msg.value = 0.423044414124;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.157564589009);
    msg.setSource(34088U);
    msg.setSourceEntity(55U);
    msg.setDestination(25684U);
    msg.setDestinationEntity(146U);
    msg.value = 0.691479909813;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.0464017491968);
    msg.setSource(8176U);
    msg.setSourceEntity(100U);
    msg.setDestination(51228U);
    msg.setDestinationEntity(191U);
    msg.x = 0.419482878218;
    msg.y = 0.258044822401;
    msg.z = 0.435846779859;
    msg.phi = 0.969794241521;
    msg.theta = 0.235012400004;
    msg.psi = 0.635454805049;
    msg.p = 0.0387587292094;
    msg.q = 0.247440054884;
    msg.r = 0.0293844583408;
    msg.u = 0.281694921467;
    msg.v = 0.619938537558;
    msg.w = 0.584900593781;
    msg.bias_psi = 0.691290693862;
    msg.bias_r = 0.500737727211;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.417350125713);
    msg.setSource(48123U);
    msg.setSourceEntity(196U);
    msg.setDestination(3192U);
    msg.setDestinationEntity(201U);
    msg.x = 0.827826435458;
    msg.y = 0.418246326908;
    msg.z = 0.856806778134;
    msg.phi = 0.567560552439;
    msg.theta = 0.322434445625;
    msg.psi = 0.983057233467;
    msg.p = 0.339437884897;
    msg.q = 0.574051464048;
    msg.r = 0.0352735834255;
    msg.u = 0.829895173776;
    msg.v = 0.685181930783;
    msg.w = 0.171230058905;
    msg.bias_psi = 0.964868656101;
    msg.bias_r = 0.870198470288;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.513496627092);
    msg.setSource(2330U);
    msg.setSourceEntity(230U);
    msg.setDestination(23529U);
    msg.setDestinationEntity(71U);
    msg.x = 0.59792182574;
    msg.y = 0.964782803966;
    msg.z = 0.303617230227;
    msg.phi = 0.628185657199;
    msg.theta = 0.271156006149;
    msg.psi = 0.775868632161;
    msg.p = 0.535469744281;
    msg.q = 0.257626399204;
    msg.r = 0.55916990065;
    msg.u = 0.771258882223;
    msg.v = 0.329946818684;
    msg.w = 0.968813831546;
    msg.bias_psi = 0.875192398324;
    msg.bias_r = 0.384701419454;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.540628078241);
    msg.setSource(27153U);
    msg.setSourceEntity(60U);
    msg.setDestination(41128U);
    msg.setDestinationEntity(35U);
    msg.bias_psi = 0.701990098658;
    msg.bias_r = 0.319836444101;
    msg.cog = 0.338664105636;
    msg.cyaw = 0.624905495084;
    msg.lbl_rej_level = 0.881521398788;
    msg.gps_rej_level = 0.0657511543319;
    msg.custom_x = 0.772003624305;
    msg.custom_y = 0.490109067895;
    msg.custom_z = 0.962279457558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.0752698063297);
    msg.setSource(31712U);
    msg.setSourceEntity(50U);
    msg.setDestination(31085U);
    msg.setDestinationEntity(118U);
    msg.bias_psi = 0.358614784739;
    msg.bias_r = 0.905920009949;
    msg.cog = 0.790750259464;
    msg.cyaw = 0.518684129147;
    msg.lbl_rej_level = 0.52218654985;
    msg.gps_rej_level = 0.0411871558688;
    msg.custom_x = 0.51380367892;
    msg.custom_y = 0.393462418892;
    msg.custom_z = 0.504208663439;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.493338863603);
    msg.setSource(2705U);
    msg.setSourceEntity(232U);
    msg.setDestination(34387U);
    msg.setDestinationEntity(8U);
    msg.bias_psi = 0.629379913101;
    msg.bias_r = 0.288421604806;
    msg.cog = 0.985028959231;
    msg.cyaw = 0.227811059323;
    msg.lbl_rej_level = 0.74787282827;
    msg.gps_rej_level = 0.0588619173029;
    msg.custom_x = 0.492848937781;
    msg.custom_y = 0.327374190497;
    msg.custom_z = 0.370951488002;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.129741136449);
    msg.setSource(61917U);
    msg.setSourceEntity(207U);
    msg.setDestination(22469U);
    msg.setDestinationEntity(252U);
    msg.utc_time = 0.244533614421;
    msg.reason = 76U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.520702961856);
    msg.setSource(32816U);
    msg.setSourceEntity(74U);
    msg.setDestination(15021U);
    msg.setDestinationEntity(61U);
    msg.utc_time = 0.102394397446;
    msg.reason = 249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.436165101938);
    msg.setSource(40U);
    msg.setSourceEntity(91U);
    msg.setDestination(29294U);
    msg.setDestinationEntity(141U);
    msg.utc_time = 0.00715826944146;
    msg.reason = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.991667405888);
    msg.setSource(43360U);
    msg.setSourceEntity(61U);
    msg.setDestination(27239U);
    msg.setDestinationEntity(130U);
    msg.id = 187U;
    msg.range = 0.879338106685;
    msg.acceptance = 180U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.657406940297);
    msg.setSource(11858U);
    msg.setSourceEntity(45U);
    msg.setDestination(65198U);
    msg.setDestinationEntity(15U);
    msg.id = 98U;
    msg.range = 0.191651455182;
    msg.acceptance = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.968060699967);
    msg.setSource(45581U);
    msg.setSourceEntity(227U);
    msg.setDestination(31864U);
    msg.setDestinationEntity(90U);
    msg.id = 12U;
    msg.range = 0.271568680781;
    msg.acceptance = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.329560767531);
    msg.setSource(63953U);
    msg.setSourceEntity(161U);
    msg.setDestination(14540U);
    msg.setDestinationEntity(10U);
    msg.type = 163U;
    msg.reason = 1U;
    msg.value = 0.409100732763;
    msg.timestep = 0.359559968762;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.869630462186);
    msg.setSource(13776U);
    msg.setSourceEntity(227U);
    msg.setDestination(22053U);
    msg.setDestinationEntity(16U);
    msg.type = 221U;
    msg.reason = 129U;
    msg.value = 0.0956084893785;
    msg.timestep = 0.893179865774;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.279173751567);
    msg.setSource(13915U);
    msg.setSourceEntity(227U);
    msg.setDestination(53275U);
    msg.setDestinationEntity(144U);
    msg.type = 117U;
    msg.reason = 22U;
    msg.value = 0.610377329961;
    msg.timestep = 0.274405014506;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.670017153018);
    msg.setSource(63654U);
    msg.setSourceEntity(218U);
    msg.setDestination(51U);
    msg.setDestinationEntity(90U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DWBCLQFYIXPXFSGKMOEZUJUTVXFVGRWQTLEJWZYZQMZGYWFWUQXAYLOVYSMRFDGE");
    tmp_msg_0.lat = 0.815960584389;
    tmp_msg_0.lon = 0.247467622515;
    tmp_msg_0.depth = 0.134915481852;
    tmp_msg_0.query_channel = 69U;
    tmp_msg_0.reply_channel = 103U;
    tmp_msg_0.transponder_delay = 236U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.502287800746;
    msg.y = 0.87415414867;
    msg.var_x = 0.654885326631;
    msg.var_y = 0.76599460336;
    msg.distance = 0.0196819917049;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.415345491383);
    msg.setSource(6596U);
    msg.setSourceEntity(175U);
    msg.setDestination(58315U);
    msg.setDestinationEntity(159U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UCRUGYMBNSXWZFNHASHNMOXVNHIYBBPZTGXQTAUDALDGRJQMLNFPLEIZPKOAXREASBDKMBTQJZUQWWVYQCVIBCQOLIKIEPLEXGFNXKSJKGTVRVUFOFA");
    tmp_msg_0.lat = 0.969813329217;
    tmp_msg_0.lon = 0.428808504986;
    tmp_msg_0.depth = 0.750828047966;
    tmp_msg_0.query_channel = 92U;
    tmp_msg_0.reply_channel = 15U;
    tmp_msg_0.transponder_delay = 108U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.907488347271;
    msg.y = 0.3767031421;
    msg.var_x = 0.351515721891;
    msg.var_y = 0.32249376064;
    msg.distance = 0.168666822609;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.99767141528);
    msg.setSource(14323U);
    msg.setSourceEntity(228U);
    msg.setDestination(218U);
    msg.setDestinationEntity(186U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NGSXXIAELEAKHDXUIMQKHQSAZJRYQZRVUJRSNBZUAQTJEODWPGNKIWHWXRZRLHTJ");
    tmp_msg_0.lat = 0.796253206758;
    tmp_msg_0.lon = 0.463284075948;
    tmp_msg_0.depth = 0.381399463217;
    tmp_msg_0.query_channel = 237U;
    tmp_msg_0.reply_channel = 136U;
    tmp_msg_0.transponder_delay = 13U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.196985764062;
    msg.y = 0.121316365007;
    msg.var_x = 0.922824405567;
    msg.var_y = 0.720716555635;
    msg.distance = 0.106167618136;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.771990833177);
    msg.setSource(18190U);
    msg.setSourceEntity(2U);
    msg.setDestination(53627U);
    msg.setDestinationEntity(190U);
    msg.state = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.605166410592);
    msg.setSource(8500U);
    msg.setSourceEntity(185U);
    msg.setDestination(13161U);
    msg.setDestinationEntity(97U);
    msg.state = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.821934802368);
    msg.setSource(15529U);
    msg.setSourceEntity(72U);
    msg.setDestination(58848U);
    msg.setDestinationEntity(104U);
    msg.state = 105U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.715390094203);
    msg.setSource(48533U);
    msg.setSourceEntity(215U);
    msg.setDestination(5501U);
    msg.setDestinationEntity(67U);
    msg.x = 0.433816616953;
    msg.y = 0.345570269125;
    msg.z = 0.173591256888;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.636181152573);
    msg.setSource(32307U);
    msg.setSourceEntity(110U);
    msg.setDestination(19153U);
    msg.setDestinationEntity(185U);
    msg.x = 0.414675216243;
    msg.y = 0.833192952367;
    msg.z = 0.11042526961;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.908573794641);
    msg.setSource(43455U);
    msg.setSourceEntity(99U);
    msg.setDestination(31022U);
    msg.setDestinationEntity(223U);
    msg.x = 0.856579221215;
    msg.y = 0.800011951522;
    msg.z = 0.618437349847;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.151017738824);
    msg.setSource(8353U);
    msg.setSourceEntity(237U);
    msg.setDestination(22266U);
    msg.setDestinationEntity(3U);
    msg.va = 0.382594885642;
    msg.aoa = 0.628121105247;
    msg.ssa = 0.272886468161;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.0719655219589);
    msg.setSource(19839U);
    msg.setSourceEntity(136U);
    msg.setDestination(9018U);
    msg.setDestinationEntity(141U);
    msg.va = 0.235921338219;
    msg.aoa = 0.834758020641;
    msg.ssa = 0.900545463509;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.157459063396);
    msg.setSource(35826U);
    msg.setSourceEntity(86U);
    msg.setDestination(14437U);
    msg.setDestinationEntity(158U);
    msg.va = 0.955687507183;
    msg.aoa = 0.790413684225;
    msg.ssa = 0.476812237708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.284359071704);
    msg.setSource(2481U);
    msg.setSourceEntity(161U);
    msg.setDestination(64248U);
    msg.setDestinationEntity(91U);
    msg.value = 0.562478444029;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.193908977994);
    msg.setSource(2703U);
    msg.setSourceEntity(210U);
    msg.setDestination(9230U);
    msg.setDestinationEntity(32U);
    msg.value = 0.65712554308;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.427455049931);
    msg.setSource(47388U);
    msg.setSourceEntity(27U);
    msg.setDestination(37045U);
    msg.setDestinationEntity(45U);
    msg.value = 0.986573312283;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.576401971049);
    msg.setSource(59930U);
    msg.setSourceEntity(227U);
    msg.setDestination(30131U);
    msg.setDestinationEntity(194U);
    msg.value = 0.543110551799;
    msg.z_units = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.351281502031);
    msg.setSource(42757U);
    msg.setSourceEntity(239U);
    msg.setDestination(40911U);
    msg.setDestinationEntity(202U);
    msg.value = 0.00394779531362;
    msg.z_units = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.825759484089);
    msg.setSource(65313U);
    msg.setSourceEntity(104U);
    msg.setDestination(24751U);
    msg.setDestinationEntity(74U);
    msg.value = 0.349088507643;
    msg.z_units = 34U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.112861640865);
    msg.setSource(37525U);
    msg.setSourceEntity(69U);
    msg.setDestination(54390U);
    msg.setDestinationEntity(186U);
    msg.value = 0.515664404901;
    msg.speed_units = 242U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.669242940735);
    msg.setSource(39207U);
    msg.setSourceEntity(193U);
    msg.setDestination(22402U);
    msg.setDestinationEntity(239U);
    msg.value = 0.223011335239;
    msg.speed_units = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.25051761359);
    msg.setSource(18684U);
    msg.setSourceEntity(35U);
    msg.setDestination(28076U);
    msg.setDestinationEntity(100U);
    msg.value = 0.523636693073;
    msg.speed_units = 142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.660168987725);
    msg.setSource(28081U);
    msg.setSourceEntity(128U);
    msg.setDestination(36658U);
    msg.setDestinationEntity(3U);
    msg.value = 0.752394966561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.256702788689);
    msg.setSource(31794U);
    msg.setSourceEntity(92U);
    msg.setDestination(62173U);
    msg.setDestinationEntity(236U);
    msg.value = 0.548348262986;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.343524801558);
    msg.setSource(45763U);
    msg.setSourceEntity(127U);
    msg.setDestination(4821U);
    msg.setDestinationEntity(158U);
    msg.value = 0.466325183904;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.657371629151);
    msg.setSource(63096U);
    msg.setSourceEntity(131U);
    msg.setDestination(43641U);
    msg.setDestinationEntity(142U);
    msg.value = 0.564988627726;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.400168876573);
    msg.setSource(42739U);
    msg.setSourceEntity(104U);
    msg.setDestination(60406U);
    msg.setDestinationEntity(227U);
    msg.value = 0.692790251232;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.896673206918);
    msg.setSource(783U);
    msg.setSourceEntity(191U);
    msg.setDestination(35684U);
    msg.setDestinationEntity(54U);
    msg.value = 0.614988214565;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.764994319259);
    msg.setSource(17958U);
    msg.setSourceEntity(164U);
    msg.setDestination(48635U);
    msg.setDestinationEntity(180U);
    msg.value = 0.862985907364;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.817379115766);
    msg.setSource(22808U);
    msg.setSourceEntity(182U);
    msg.setDestination(1628U);
    msg.setDestinationEntity(241U);
    msg.value = 0.301197384086;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.982417955674);
    msg.setSource(17806U);
    msg.setSourceEntity(230U);
    msg.setDestination(23570U);
    msg.setDestinationEntity(81U);
    msg.value = 0.352120622815;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.762400178466);
    msg.setSource(47581U);
    msg.setSourceEntity(219U);
    msg.setDestination(8649U);
    msg.setDestinationEntity(136U);
    msg.path_ref = 2641316000U;
    msg.start_lat = 0.663261946093;
    msg.start_lon = 0.587447707641;
    msg.start_z = 0.181654761035;
    msg.start_z_units = 188U;
    msg.end_lat = 0.145991033214;
    msg.end_lon = 0.976185216558;
    msg.end_z = 0.948131302241;
    msg.end_z_units = 183U;
    msg.speed = 0.476223708402;
    msg.speed_units = 141U;
    msg.lradius = 0.694959766107;
    msg.flags = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.276095307489);
    msg.setSource(52503U);
    msg.setSourceEntity(81U);
    msg.setDestination(41899U);
    msg.setDestinationEntity(144U);
    msg.path_ref = 2833908719U;
    msg.start_lat = 0.150134331994;
    msg.start_lon = 0.265064286778;
    msg.start_z = 0.13032160333;
    msg.start_z_units = 160U;
    msg.end_lat = 0.226015037749;
    msg.end_lon = 0.416506533015;
    msg.end_z = 0.746376293557;
    msg.end_z_units = 137U;
    msg.speed = 0.639560706823;
    msg.speed_units = 235U;
    msg.lradius = 0.207176890144;
    msg.flags = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.713633133879);
    msg.setSource(27861U);
    msg.setSourceEntity(203U);
    msg.setDestination(13176U);
    msg.setDestinationEntity(187U);
    msg.path_ref = 3614062033U;
    msg.start_lat = 0.722992725527;
    msg.start_lon = 0.174400501607;
    msg.start_z = 0.751240064854;
    msg.start_z_units = 251U;
    msg.end_lat = 0.0510237602116;
    msg.end_lon = 0.938422249278;
    msg.end_z = 0.685059922811;
    msg.end_z_units = 65U;
    msg.speed = 0.900627226893;
    msg.speed_units = 254U;
    msg.lradius = 0.957801829804;
    msg.flags = 32U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.942685520831);
    msg.setSource(35082U);
    msg.setSourceEntity(46U);
    msg.setDestination(47225U);
    msg.setDestinationEntity(123U);
    msg.x = 0.264816706407;
    msg.y = 0.61759052287;
    msg.z = 0.911301608299;
    msg.k = 0.0677931451131;
    msg.m = 0.378303918851;
    msg.n = 0.808950606219;
    msg.flags = 115U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.344050903058);
    msg.setSource(58396U);
    msg.setSourceEntity(199U);
    msg.setDestination(27765U);
    msg.setDestinationEntity(136U);
    msg.x = 0.931372514133;
    msg.y = 0.381908740646;
    msg.z = 0.677759488511;
    msg.k = 0.0673685746618;
    msg.m = 0.680988518069;
    msg.n = 0.688150330063;
    msg.flags = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.239658593691);
    msg.setSource(2695U);
    msg.setSourceEntity(128U);
    msg.setDestination(42029U);
    msg.setDestinationEntity(112U);
    msg.x = 0.99173954414;
    msg.y = 0.902369353606;
    msg.z = 0.354599722892;
    msg.k = 0.289245684413;
    msg.m = 0.655771527167;
    msg.n = 0.222202097041;
    msg.flags = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.914359739361);
    msg.setSource(33970U);
    msg.setSourceEntity(167U);
    msg.setDestination(31497U);
    msg.setDestinationEntity(225U);
    msg.value = 0.499107620154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.618069668012);
    msg.setSource(9552U);
    msg.setSourceEntity(175U);
    msg.setDestination(21495U);
    msg.setDestinationEntity(212U);
    msg.value = 0.385830901156;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.119454126943);
    msg.setSource(50793U);
    msg.setSourceEntity(9U);
    msg.setDestination(16052U);
    msg.setDestinationEntity(49U);
    msg.value = 0.7919065635;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.410481342147);
    msg.setSource(52467U);
    msg.setSourceEntity(205U);
    msg.setDestination(20463U);
    msg.setDestinationEntity(7U);
    msg.u = 0.35141605887;
    msg.v = 0.0805449733949;
    msg.w = 0.492009613922;
    msg.p = 0.647147392454;
    msg.q = 0.151464389935;
    msg.r = 0.412859140379;
    msg.flags = 158U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.493483281736);
    msg.setSource(58584U);
    msg.setSourceEntity(105U);
    msg.setDestination(60761U);
    msg.setDestinationEntity(99U);
    msg.u = 0.0804469066334;
    msg.v = 0.306726887967;
    msg.w = 0.0895760865101;
    msg.p = 0.445163832408;
    msg.q = 0.129228590546;
    msg.r = 0.784861275397;
    msg.flags = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.14314342153);
    msg.setSource(35895U);
    msg.setSourceEntity(74U);
    msg.setDestination(64499U);
    msg.setDestinationEntity(48U);
    msg.u = 0.996747245243;
    msg.v = 0.210147218773;
    msg.w = 0.504238179596;
    msg.p = 0.56398282497;
    msg.q = 0.809513829503;
    msg.r = 0.820961777861;
    msg.flags = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.37136875942);
    msg.setSource(7611U);
    msg.setSourceEntity(213U);
    msg.setDestination(26882U);
    msg.setDestinationEntity(61U);
    msg.path_ref = 2004116577U;
    msg.start_lat = 0.678515751722;
    msg.start_lon = 0.834248419966;
    msg.start_z = 0.836151317771;
    msg.start_z_units = 62U;
    msg.end_lat = 0.834846412658;
    msg.end_lon = 0.0261718366517;
    msg.end_z = 0.422583801006;
    msg.end_z_units = 216U;
    msg.lradius = 0.610777891467;
    msg.flags = 252U;
    msg.x = 0.665949920286;
    msg.y = 0.739495886663;
    msg.z = 0.129544748837;
    msg.vx = 0.23019841712;
    msg.vy = 0.528797382354;
    msg.vz = 0.662099523507;
    msg.course_error = 0.13466586992;
    msg.eta = 64103U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.325404584144);
    msg.setSource(43071U);
    msg.setSourceEntity(245U);
    msg.setDestination(38376U);
    msg.setDestinationEntity(141U);
    msg.path_ref = 1943661627U;
    msg.start_lat = 0.726496130352;
    msg.start_lon = 0.280942178949;
    msg.start_z = 0.955147919472;
    msg.start_z_units = 134U;
    msg.end_lat = 0.0712613709074;
    msg.end_lon = 0.565355911895;
    msg.end_z = 0.807236179923;
    msg.end_z_units = 40U;
    msg.lradius = 0.591414865666;
    msg.flags = 91U;
    msg.x = 0.702047636091;
    msg.y = 0.302199848223;
    msg.z = 0.929615758393;
    msg.vx = 0.116641084603;
    msg.vy = 0.53285698541;
    msg.vz = 0.218859760629;
    msg.course_error = 0.245165298007;
    msg.eta = 52164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.808783135174);
    msg.setSource(25703U);
    msg.setSourceEntity(13U);
    msg.setDestination(7826U);
    msg.setDestinationEntity(251U);
    msg.path_ref = 3153283301U;
    msg.start_lat = 0.394603700061;
    msg.start_lon = 0.709066156432;
    msg.start_z = 0.152167280733;
    msg.start_z_units = 148U;
    msg.end_lat = 0.488107766592;
    msg.end_lon = 0.00395234976059;
    msg.end_z = 0.730039552632;
    msg.end_z_units = 186U;
    msg.lradius = 0.454558895077;
    msg.flags = 167U;
    msg.x = 0.924485075385;
    msg.y = 0.906104433801;
    msg.z = 0.54394028338;
    msg.vx = 0.726599726194;
    msg.vy = 0.330850172624;
    msg.vz = 0.399008696504;
    msg.course_error = 0.0270132943243;
    msg.eta = 3714U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.90545721392);
    msg.setSource(7232U);
    msg.setSourceEntity(70U);
    msg.setDestination(60714U);
    msg.setDestinationEntity(118U);
    msg.k = 0.0183129267614;
    msg.m = 0.840320825302;
    msg.n = 0.410225867603;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.910946207437);
    msg.setSource(36320U);
    msg.setSourceEntity(11U);
    msg.setDestination(11667U);
    msg.setDestinationEntity(105U);
    msg.k = 0.750480547889;
    msg.m = 0.460311492268;
    msg.n = 0.397827259268;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.507428800052);
    msg.setSource(42133U);
    msg.setSourceEntity(224U);
    msg.setDestination(25095U);
    msg.setDestinationEntity(111U);
    msg.k = 0.94308606062;
    msg.m = 0.21294044961;
    msg.n = 0.421498880028;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.612548966442);
    msg.setSource(19812U);
    msg.setSourceEntity(143U);
    msg.setDestination(13376U);
    msg.setDestinationEntity(230U);
    msg.p = 0.529583620996;
    msg.i = 0.131428085206;
    msg.d = 0.512959343167;
    msg.a = 0.00385305216275;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.542773493428);
    msg.setSource(32275U);
    msg.setSourceEntity(62U);
    msg.setDestination(4716U);
    msg.setDestinationEntity(13U);
    msg.p = 0.420119263351;
    msg.i = 0.917621533647;
    msg.d = 0.623859087903;
    msg.a = 0.647455408517;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.444661559216);
    msg.setSource(6297U);
    msg.setSourceEntity(219U);
    msg.setDestination(19283U);
    msg.setDestinationEntity(57U);
    msg.p = 0.129805441457;
    msg.i = 0.0712864403132;
    msg.d = 0.436952809638;
    msg.a = 0.390374263973;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.00990839540143);
    msg.setSource(54214U);
    msg.setSourceEntity(166U);
    msg.setDestination(51499U);
    msg.setDestinationEntity(105U);
    msg.op = 172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.378057836731);
    msg.setSource(22582U);
    msg.setSourceEntity(207U);
    msg.setDestination(22283U);
    msg.setDestinationEntity(159U);
    msg.op = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.927932615356);
    msg.setSource(22201U);
    msg.setSourceEntity(62U);
    msg.setDestination(62648U);
    msg.setDestinationEntity(27U);
    msg.op = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.498621036106);
    msg.setSource(6704U);
    msg.setSourceEntity(253U);
    msg.setDestination(40727U);
    msg.setDestinationEntity(185U);
    msg.x = 0.247593370689;
    msg.y = 0.957047064976;
    msg.z = 0.58811251985;
    msg.vx = 0.164978805745;
    msg.vy = 0.251538100178;
    msg.vz = 0.762038281187;
    msg.ax = 0.0487256805364;
    msg.ay = 0.262973132049;
    msg.az = 0.903821964122;
    msg.flags = 44211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.906865498323);
    msg.setSource(25966U);
    msg.setSourceEntity(103U);
    msg.setDestination(52892U);
    msg.setDestinationEntity(223U);
    msg.x = 0.630818385707;
    msg.y = 0.736863376619;
    msg.z = 0.197054516845;
    msg.vx = 0.0891224419821;
    msg.vy = 0.587240619484;
    msg.vz = 0.361604032616;
    msg.ax = 0.802788661269;
    msg.ay = 0.108590188329;
    msg.az = 0.383442391636;
    msg.flags = 36260U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.502660105296);
    msg.setSource(38304U);
    msg.setSourceEntity(120U);
    msg.setDestination(53171U);
    msg.setDestinationEntity(215U);
    msg.x = 0.54446017887;
    msg.y = 0.949165624252;
    msg.z = 0.183248362383;
    msg.vx = 0.0343232253002;
    msg.vy = 0.933027732069;
    msg.vz = 0.782477657431;
    msg.ax = 0.720209692824;
    msg.ay = 0.189656984676;
    msg.az = 0.382904051223;
    msg.flags = 15256U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.068235449944);
    msg.setSource(37868U);
    msg.setSourceEntity(107U);
    msg.setDestination(49841U);
    msg.setDestinationEntity(206U);
    msg.value = 0.432483340302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.250391268802);
    msg.setSource(48682U);
    msg.setSourceEntity(231U);
    msg.setDestination(44098U);
    msg.setDestinationEntity(217U);
    msg.value = 0.549742290455;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.633481407614);
    msg.setSource(53645U);
    msg.setSourceEntity(18U);
    msg.setDestination(17579U);
    msg.setDestinationEntity(171U);
    msg.value = 0.519541562162;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.339545131638);
    msg.setSource(8332U);
    msg.setSourceEntity(203U);
    msg.setDestination(58088U);
    msg.setDestinationEntity(38U);
    msg.timeout = 56074U;
    msg.lat = 0.835497158489;
    msg.lon = 0.162504132769;
    msg.z = 0.804987850602;
    msg.z_units = 117U;
    msg.speed = 0.020565631171;
    msg.speed_units = 214U;
    msg.roll = 0.991887158606;
    msg.pitch = 0.714502114935;
    msg.yaw = 0.965668165204;
    msg.custom.assign("MOZXRYVFEHTQWXQKJGZEMPFUWRUCGRVCXYRVUILLWSRUYCFBOPCIPPZASYAAWLATSTLKJNADGFDPHTNMUJPOVYZPDSMXQFOKGIWZXEFHBBLAGKPCIDTMQOJRUIBLXJBX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.454186971121);
    msg.setSource(29582U);
    msg.setSourceEntity(80U);
    msg.setDestination(24895U);
    msg.setDestinationEntity(162U);
    msg.timeout = 62642U;
    msg.lat = 0.28998159005;
    msg.lon = 0.783510983034;
    msg.z = 0.0912124305631;
    msg.z_units = 82U;
    msg.speed = 0.445700111636;
    msg.speed_units = 17U;
    msg.roll = 0.860911931325;
    msg.pitch = 0.550684793203;
    msg.yaw = 0.0113830113076;
    msg.custom.assign("VNGCTFUXXVVYHZUDXVQOJNMJQWGUUNIAZLPHWBYUPYKGQNUOEFNPEBZYDMTZBSDAYBOKKMBGHKXFTP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.517906476411);
    msg.setSource(21450U);
    msg.setSourceEntity(43U);
    msg.setDestination(1534U);
    msg.setDestinationEntity(240U);
    msg.timeout = 9469U;
    msg.lat = 0.900723253665;
    msg.lon = 0.0624905172832;
    msg.z = 0.208585921713;
    msg.z_units = 64U;
    msg.speed = 0.28371464585;
    msg.speed_units = 154U;
    msg.roll = 0.891220404888;
    msg.pitch = 0.48472804016;
    msg.yaw = 0.543216046834;
    msg.custom.assign("BFOTLTKONLRAYKNRVXVTFGJEWHM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.354210626332);
    msg.setSource(38803U);
    msg.setSourceEntity(139U);
    msg.setDestination(49480U);
    msg.setDestinationEntity(5U);
    msg.timeout = 20303U;
    msg.lat = 0.611785004534;
    msg.lon = 0.501350918699;
    msg.z = 0.0883946359952;
    msg.z_units = 69U;
    msg.speed = 0.808729090243;
    msg.speed_units = 122U;
    msg.duration = 11918U;
    msg.radius = 0.188540361895;
    msg.flags = 39U;
    msg.custom.assign("SBYHAHFDRXHPPTJUXNNRSGQDWLAZTFAQZCRTTTVFCQOYGEGLBCWCXPOGUPDBWZPFYXPNIBNVKFRROQMMGZYPSXKIEZYLMMEUUSQBSXUINRBLHBTOMHDJMKYWMHOGDZBNRUYXJPSVRCEFNXAREOZAAQZWTLVDLLEK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.0673062893232);
    msg.setSource(24405U);
    msg.setSourceEntity(227U);
    msg.setDestination(6579U);
    msg.setDestinationEntity(41U);
    msg.timeout = 4859U;
    msg.lat = 0.154369621268;
    msg.lon = 0.135729053223;
    msg.z = 0.140753789639;
    msg.z_units = 172U;
    msg.speed = 0.204355609612;
    msg.speed_units = 211U;
    msg.duration = 42091U;
    msg.radius = 0.244352999032;
    msg.flags = 101U;
    msg.custom.assign("SQTNVBGPOOYUFKIZSKQCMNKNCXODWGDWXPFNAZPJWWQKGIIOAHGJHJXJWTDLYRCECUQZZT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.746533463192);
    msg.setSource(36592U);
    msg.setSourceEntity(157U);
    msg.setDestination(62094U);
    msg.setDestinationEntity(254U);
    msg.timeout = 18802U;
    msg.lat = 0.264539083022;
    msg.lon = 0.112613823327;
    msg.z = 0.0783369637905;
    msg.z_units = 188U;
    msg.speed = 0.524125998797;
    msg.speed_units = 2U;
    msg.duration = 19928U;
    msg.radius = 0.232896940744;
    msg.flags = 74U;
    msg.custom.assign("ODTCMMWDDWFXJFKPPVSGJQLABYPBLDYLMJJAOZXZLWEZNICLTXWSWWGOPMYKIGZRHUFAOCQECJJBRIHHOAKLEBPUQPBTFNXXOYNRNVZRTTCKVOPXNMQJTDXOFVQSHIGVSLIZRVCMBRADBWPUEJKEZMBQTKHGSAKLNDTTZXNHKAUFBCAMOGHSNSUVUVPUIMSUYFCABSWNGFVQWMFDOSLRKEQLKQQYTJUHZVXYYYGFPAHEYR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.622738733825);
    msg.setSource(42179U);
    msg.setSourceEntity(4U);
    msg.setDestination(12608U);
    msg.setDestinationEntity(152U);
    msg.custom.assign("SHUFZUUBVABFWKOMDKOWJEMCGKSLGAIQUTNNNHLBZJIFHIGDHOQDXBCLMIXREENKGGRPZFRXBOQZJMRFMLAOYGF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.111055105961);
    msg.setSource(13066U);
    msg.setSourceEntity(196U);
    msg.setDestination(19483U);
    msg.setDestinationEntity(239U);
    msg.custom.assign("ENOEZGZABNKRCZVTYLLJSOXVSNCBCKADZIPDGVHCEDRILPTYHVWYLBFGNGDMUFIGLOSGUMJRYRWHADPLANSEKULRSXBHRMUQHQIBXWPXYCPAVRKBTTYGPQJXQNZNLMXWCFCTXIVOFU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.43466605497);
    msg.setSource(29927U);
    msg.setSourceEntity(148U);
    msg.setDestination(23770U);
    msg.setDestinationEntity(135U);
    msg.custom.assign("FUPIXOUSXNSJWDZSFFDCCGROVYRXROHGUICQZOXMETWBDAIJWAGJKBEKMDOXULUJPFQLBPOEDPENVAAMXATEJQFGQQNPRZHVZPQNUMIJCIHSXJNZLDOWDQCLUTHODEWVTRCNWIZIWYZGVMKPZLYYKEWUTDJAIVBLUBVXCVNTWLXYMJGMGTAKRNHIJEOFXBLMGSENSAYYGCTHKFLRPPFQSVBNCYSSWBHYPRHKGBZB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.856598562729);
    msg.setSource(55090U);
    msg.setSourceEntity(27U);
    msg.setDestination(29427U);
    msg.setDestinationEntity(63U);
    msg.timeout = 28222U;
    msg.lat = 0.706782669002;
    msg.lon = 0.87658002943;
    msg.z = 0.165464850667;
    msg.z_units = 73U;
    msg.duration = 55209U;
    msg.speed = 0.789999592471;
    msg.speed_units = 40U;
    msg.type = 109U;
    msg.radius = 0.87466812972;
    msg.length = 0.083584378454;
    msg.bearing = 0.162065575962;
    msg.direction = 188U;
    msg.custom.assign("RJFWGNIWRTVHQAMGLENTSJBLJIVXNTOPWTHEHUQRVXUMUUXFDXLZCYJMKXRSKVBGUCMFQPVTJGGFWORSFKFNDWVZBRFRLIPUTQJAIZYBPCPNRNPNOOKZQHSCTLYUCQYPAFAVYNASYDWXDCGKHNZQFQYDJYRZIJDBKGEEOLIOZTTAILBMDESRKVWECBJSHDAZIMCXOQMWUWHLPEGMZGTLCHMXASEHNVKWEK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.515102263382);
    msg.setSource(9754U);
    msg.setSourceEntity(138U);
    msg.setDestination(63656U);
    msg.setDestinationEntity(219U);
    msg.timeout = 28105U;
    msg.lat = 0.424768679985;
    msg.lon = 0.400821329346;
    msg.z = 0.707296380986;
    msg.z_units = 98U;
    msg.duration = 58175U;
    msg.speed = 0.496233834097;
    msg.speed_units = 189U;
    msg.type = 173U;
    msg.radius = 0.413712218211;
    msg.length = 0.560473758453;
    msg.bearing = 0.712977690953;
    msg.direction = 54U;
    msg.custom.assign("UHKNISOMRMLGCFEREHJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.936003861172);
    msg.setSource(33545U);
    msg.setSourceEntity(233U);
    msg.setDestination(4585U);
    msg.setDestinationEntity(129U);
    msg.timeout = 39042U;
    msg.lat = 0.907107913958;
    msg.lon = 0.316934114989;
    msg.z = 0.239581002244;
    msg.z_units = 197U;
    msg.duration = 2265U;
    msg.speed = 0.820055221878;
    msg.speed_units = 240U;
    msg.type = 54U;
    msg.radius = 0.213417806183;
    msg.length = 0.469127323801;
    msg.bearing = 0.669444086069;
    msg.direction = 101U;
    msg.custom.assign("QYCNVUJWSVEWBTGMIBTKDTYKSHNLIZSWXLDIMRMTBOLTIOHAXROMDPFACQDOUJXVNIYVOJDHBYQUHVHQERGIUVJCIJLZZIHZBJPNSHPZFAWPXNMX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.701945431813);
    msg.setSource(39507U);
    msg.setSourceEntity(39U);
    msg.setDestination(17340U);
    msg.setDestinationEntity(27U);
    msg.duration = 60018U;
    msg.custom.assign("VHMHLJAIAURDTDACUPGNHFYTYBNILPFVZQEEXBDORIVNWRZPJBNQEZJYXHSMNSSOBTCRCYTQWVAQZCZVFZEGMDIKIDKXHGWVESHBTTVRWPQXLDPCLKJZMYUXBMKXGHYKMIBRPOSLXZVGQWCNMSKWUOON");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.162643633202);
    msg.setSource(10072U);
    msg.setSourceEntity(158U);
    msg.setDestination(43122U);
    msg.setDestinationEntity(18U);
    msg.duration = 52689U;
    msg.custom.assign("BAJNBLVQPBUSSUYBFFAYDIWGBMLOIVTDYOHZXIPFELUTKPHWCWMDQQRHGZMBLUEJQXNAECTKHZJXCTPJQIRNIKOGJOKYVMOZKVKGQCTLYVTZHVXIPSWXXKRADVMCYFFERMTGPSPAQKTAZNQOFWYEFOZNWRRNMDWPVKHJASWYBL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.842892633078);
    msg.setSource(964U);
    msg.setSourceEntity(116U);
    msg.setDestination(49304U);
    msg.setDestinationEntity(127U);
    msg.duration = 61033U;
    msg.custom.assign("OXSZAIHSWQBNRRCAXHOYEMUSAUVWCYOGVGSMEMHKAWBCAMVMEESHSJXPJCUDPCBCNIPNBTPMKUNYYFHMWAJTABEJAWFKJUTXPBLKDIVSFSXEHBTZNQVKYVFQIXPQUNJTSHPTVCLLRHZZCPQRVKTIOYFIUEKGRIRKZQZFDOYWRLHGNTFXISIAQKBTDRUNGDOTJXRFGLYWQCXGGLEM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.147864644645);
    msg.setSource(10928U);
    msg.setSourceEntity(132U);
    msg.setDestination(44865U);
    msg.setDestinationEntity(100U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.135597865932;
    msg.control.set(tmp_msg_0);
    msg.duration = 54551U;
    msg.custom.assign("KIYHDAOFVAHLVNILEYGVQQCSSHLLTWBEFEQBYWCHYVKXDSQCODAPFOZHGIDYBJMIUSRNHMFAKOVTRVTIKEPNZZZWWLKIJLZBODFSTRDXIQCRKJJAGQESMYBZZOYTQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.852214208733);
    msg.setSource(65390U);
    msg.setSourceEntity(87U);
    msg.setDestination(55528U);
    msg.setDestinationEntity(131U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.386990554871;
    tmp_msg_0.speed_units = 77U;
    msg.control.set(tmp_msg_0);
    msg.duration = 28746U;
    msg.custom.assign("MVKUBUSBPVKYEKFZLXJPVQCJRNRKPHHQDFTMUETBGNODAZPNMPRMHDBOZYUKJLSDKYCQKLFYYHEHTLXCOYFWNYXOMIROXACCVIDIGAHWAESDWIWGIEKACTRVWQFQIZFJCOMEDUBDSXSJSXYXLISFBECWTBXBWTWERPINYMMXBHRMZWGAVVPFYPGAXG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.0380058039283);
    msg.setSource(46881U);
    msg.setSourceEntity(145U);
    msg.setDestination(45128U);
    msg.setDestinationEntity(206U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.0476237379849;
    msg.control.set(tmp_msg_0);
    msg.duration = 48350U;
    msg.custom.assign("GJHAOVPMKPGZBZFJOWAMUYVUCQVCLRLZJBKEHAMUTDNHHUKRVBKQWYXEMQKBLNZMWRKUTTWLFMEGEOSOXRSSQYNMGDIFQDJDXRIUANSEGLINGXCENBQZCZZZYNLTXEAEFYJHSYARAIXPBMHBZJUPQOBQFWUFCPFMGX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.756722281263);
    msg.setSource(37360U);
    msg.setSourceEntity(229U);
    msg.setDestination(18262U);
    msg.setDestinationEntity(91U);
    msg.timeout = 60368U;
    msg.lat = 0.831681639923;
    msg.lon = 0.146571072874;
    msg.z = 0.573847455251;
    msg.z_units = 36U;
    msg.speed = 0.31286726171;
    msg.speed_units = 252U;
    msg.bearing = 0.463069483505;
    msg.cross_angle = 0.0972523886102;
    msg.width = 0.0333848252255;
    msg.length = 0.848425824295;
    msg.hstep = 0.437542609226;
    msg.coff = 150U;
    msg.alternation = 165U;
    msg.flags = 37U;
    msg.custom.assign("HEHNFUDJCCCAINNOEPYZWTVYUCWNXLECXITPGSLNTJLVDYBCCJIFTQWFZASFZTAFIAIXYQNPYOJGKMMUPQPLIJMQWPCROUQBDXHXLGOWGHROAZGGSBKFOYJZPVFJFTCSBMHFOAPQKRXHIZRQLKAZEMYAMNEDQTHSOLSGTVKDNULS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.59197159127);
    msg.setSource(21415U);
    msg.setSourceEntity(200U);
    msg.setDestination(33616U);
    msg.setDestinationEntity(24U);
    msg.timeout = 57912U;
    msg.lat = 0.759640291177;
    msg.lon = 0.0961269731939;
    msg.z = 0.0910594423836;
    msg.z_units = 105U;
    msg.speed = 0.024012062548;
    msg.speed_units = 223U;
    msg.bearing = 0.700128782463;
    msg.cross_angle = 0.940333912534;
    msg.width = 0.514457561399;
    msg.length = 0.923525465936;
    msg.hstep = 0.697708541046;
    msg.coff = 0U;
    msg.alternation = 54U;
    msg.flags = 49U;
    msg.custom.assign("EMBXPLAZTVBCJJTLBWNAHUHXZLIOVPDLTGOMDKOKLQRASTTKGAENURQZLNGGPAOKHCIBSSOUY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.845286962696);
    msg.setSource(7403U);
    msg.setSourceEntity(210U);
    msg.setDestination(43152U);
    msg.setDestinationEntity(48U);
    msg.timeout = 6077U;
    msg.lat = 0.25967943635;
    msg.lon = 0.116121769413;
    msg.z = 0.0377930611787;
    msg.z_units = 76U;
    msg.speed = 0.361403463124;
    msg.speed_units = 193U;
    msg.bearing = 0.289463655703;
    msg.cross_angle = 0.554380631671;
    msg.width = 0.574868974286;
    msg.length = 0.225673918382;
    msg.hstep = 0.837616455297;
    msg.coff = 169U;
    msg.alternation = 122U;
    msg.flags = 11U;
    msg.custom.assign("LKCITZAODEDQTFULHAVQTPMFRDHNJCLHZMXLHNFGFSRFWUEBIJAIBNDECCRNLUBTENAHCEJYQZIVTIIGOEYKAXSUHTIVRJLSCXSABWJWTYZRNPDITRMJGVIVDLCQXPCYGNXUUSSVPZZWDQPVCAWMSYSOGEMFFYCAAQHXGBHKZOZLXESVOBRMKUMQPOHZGYJXNHX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.852410959622);
    msg.setSource(28398U);
    msg.setSourceEntity(47U);
    msg.setDestination(53100U);
    msg.setDestinationEntity(84U);
    msg.timeout = 47406U;
    msg.lat = 0.63428965798;
    msg.lon = 0.325267124297;
    msg.z = 0.217760689472;
    msg.z_units = 54U;
    msg.speed = 0.0716712764183;
    msg.speed_units = 235U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.65545372129;
    tmp_msg_0.y = 0.55965687672;
    tmp_msg_0.z = 0.969839052644;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GOAWGLBLLMSTODCZGBGDONTMWZLLEPJIHSUROKJQUEZJQJKHAUMEIRBVAOBRQLFGAVFPXIYCSNTMQYNIHDIJUZVWOUWXMKQENUMPSXCDAGLWZDZCGYARKTOIARYQTHFOMENCXHQPEEYHVRCWETKNFHDYMPRVBCRFQYXSXMSCIHFJUXPVAKZCZBDFPUJIWKLTJWLMKOKBYXPJTAITNDGVBHWU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.85716911535);
    msg.setSource(5807U);
    msg.setSourceEntity(65U);
    msg.setDestination(8872U);
    msg.setDestinationEntity(10U);
    msg.timeout = 7825U;
    msg.lat = 0.886019589651;
    msg.lon = 0.681626263984;
    msg.z = 0.934192551782;
    msg.z_units = 112U;
    msg.speed = 0.0786308030277;
    msg.speed_units = 54U;
    msg.custom.assign("FTSOLWQQBTFEHMLEILLBSDUBYJEZNVVAPZLGFIONNTUDGHGDSBJRUKLXESWOZVODYMAHWLEJWRXDPRSYCUIWPNZUAVLIMHQQWZFZHNNFIGPTAGWRPRHFESKJQPIRAJCFQHBMAEZLCQCTPKRQGJSARBMPFDOCUDZIOHZLUXVMKPVHCVIZARFSYXMCBAWWOQVRDKCJEIWXKECQKSYMOVMDGTMXONUXBYBU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.435395774616);
    msg.setSource(12126U);
    msg.setSourceEntity(41U);
    msg.setDestination(28894U);
    msg.setDestinationEntity(54U);
    msg.timeout = 1552U;
    msg.lat = 0.49294675902;
    msg.lon = 0.211882296775;
    msg.z = 0.18601475867;
    msg.z_units = 106U;
    msg.speed = 0.368264138778;
    msg.speed_units = 228U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.641498842273;
    tmp_msg_0.y = 0.911647095749;
    tmp_msg_0.z = 0.121024695189;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FMXEUOCLVZKCAMAFSRKYELGVBLEJCFAKNQXBXODRXKKWZHMXBAUZHOAJJCJUDRKSGMGQLAUBTWPMGOCQYN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.497546574016);
    msg.setSource(50617U);
    msg.setSourceEntity(172U);
    msg.setDestination(54759U);
    msg.setDestinationEntity(45U);
    msg.x = 0.290371224294;
    msg.y = 0.193997221232;
    msg.z = 0.478736062877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.198268522391);
    msg.setSource(22465U);
    msg.setSourceEntity(126U);
    msg.setDestination(6250U);
    msg.setDestinationEntity(216U);
    msg.x = 0.630352717693;
    msg.y = 0.89618409352;
    msg.z = 0.692894934717;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.678894822084);
    msg.setSource(9632U);
    msg.setSourceEntity(143U);
    msg.setDestination(25522U);
    msg.setDestinationEntity(32U);
    msg.x = 0.379936833709;
    msg.y = 0.796279201633;
    msg.z = 0.716694486771;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.505518517813);
    msg.setSource(62548U);
    msg.setSourceEntity(22U);
    msg.setDestination(19464U);
    msg.setDestinationEntity(117U);
    msg.timeout = 1774U;
    msg.lat = 0.898563913157;
    msg.lon = 0.434068684193;
    msg.z = 0.570461301727;
    msg.z_units = 112U;
    msg.amplitude = 0.998704007274;
    msg.pitch = 0.65582357396;
    msg.speed = 0.292563928186;
    msg.speed_units = 242U;
    msg.custom.assign("VWODBJGAWIMTRGHEUIZSCQYYHUYICRGEBODMOHVSAOKAPKLHXJFWCSLWNZKFKVZIICWIXZRLJQBDUIKIPCXONBQYOAJRVVPYNO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.958514012427);
    msg.setSource(49780U);
    msg.setSourceEntity(122U);
    msg.setDestination(61130U);
    msg.setDestinationEntity(42U);
    msg.timeout = 43585U;
    msg.lat = 0.357783882514;
    msg.lon = 0.543831443098;
    msg.z = 0.550951934388;
    msg.z_units = 1U;
    msg.amplitude = 0.427406948694;
    msg.pitch = 0.0650309360874;
    msg.speed = 0.460191327304;
    msg.speed_units = 43U;
    msg.custom.assign("LQXHMSJORXDIFOZWRIYLKCVBGYEEZTEXMUNNPDVMLNXYODHUHQPCBSYIUWEHGDXMTGAEPVYARAQJOCRJDJHFIWMUGUKPVUKHCNIAUFTIAHWZKSJOLKKLBEESWVZUYWWKOACRDRPVZLEPSDJGSLTHAFHUGAXPTSFBBCRZZLWOIFQVTSRFXKICPZKLUJMDXXXCYZNJJSMOBNEDNQQEKLPTGGMWAGFGDBTSMQOVTRAVFWB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.810321540217);
    msg.setSource(34380U);
    msg.setSourceEntity(92U);
    msg.setDestination(10544U);
    msg.setDestinationEntity(150U);
    msg.timeout = 10987U;
    msg.lat = 0.00815330549371;
    msg.lon = 0.256334055389;
    msg.z = 0.750972915987;
    msg.z_units = 194U;
    msg.amplitude = 0.561222500483;
    msg.pitch = 0.359625308174;
    msg.speed = 0.058384657077;
    msg.speed_units = 112U;
    msg.custom.assign("DEWLPHVXFTGKTGOCZIMHGHDASJXOFULKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.28390018424);
    msg.setSource(61654U);
    msg.setSourceEntity(24U);
    msg.setDestination(27995U);
    msg.setDestinationEntity(58U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.131594458798);
    msg.setSource(39499U);
    msg.setSourceEntity(144U);
    msg.setDestination(57601U);
    msg.setDestinationEntity(88U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.0764115385933);
    msg.setSource(61441U);
    msg.setSourceEntity(75U);
    msg.setDestination(1492U);
    msg.setDestinationEntity(157U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.161701598019);
    msg.setSource(58990U);
    msg.setSourceEntity(131U);
    msg.setDestination(65193U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.277007891185;
    msg.lon = 0.326661607246;
    msg.z = 0.470604870825;
    msg.z_units = 150U;
    msg.radius = 0.253346762579;
    msg.duration = 19142U;
    msg.speed = 0.640730263255;
    msg.speed_units = 42U;
    msg.custom.assign("ISEYWFXGXANBUTWZDFHTITSANNCHJGPUGCPHZCEYPNYLZTCDMYEQXBLIEOSUKLOLVZURKZHFPKGEASEQPDXKJCREXMUEKWGQTTUANMOFJKSSMMQUNWFQTVMKQPHIDGOBLRMMYFNBXWVVQYJQYXPRWCTFPZVVCVHZYAHUPNRYBTKJIAACBDHXIOAMWGVRJSIBGNUXZDQSEPJWZKDGOJCXJRVDKRLCDSNOLRLBIAIBVFSFHOGLQTMRHOZOJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.325770433446);
    msg.setSource(22994U);
    msg.setSourceEntity(219U);
    msg.setDestination(11263U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.259934926381;
    msg.lon = 0.203533433187;
    msg.z = 0.172645072737;
    msg.z_units = 238U;
    msg.radius = 0.224671474135;
    msg.duration = 12239U;
    msg.speed = 0.376383262728;
    msg.speed_units = 147U;
    msg.custom.assign("VZEAUZLTXJSIRDNGDWJGLZIUBPKQLHWCMYDIFYXTAYEBANBFVENFEFSSKXZVNTENOLUNJDHFAKKHQXLEDXYTXWJMPIGPRYGVJNBBFHFUYMJVLEKSZXMSDYUSIQEHNKIAWPWBJPKUGQMGJZQBLYCPGZTQEVDRZWOVHTFNSQHKXRO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.736079348679);
    msg.setSource(55212U);
    msg.setSourceEntity(234U);
    msg.setDestination(64391U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.116978901601;
    msg.lon = 0.978543126769;
    msg.z = 0.258049220389;
    msg.z_units = 69U;
    msg.radius = 0.128958468228;
    msg.duration = 47275U;
    msg.speed = 0.139194448522;
    msg.speed_units = 225U;
    msg.custom.assign("DLEXVONVHBHRSALVSCSZGSJSADDKNNFTZYKZGMFIRLKITTCITJEONHBJNGMWZMKHCUWQPIPWBMXIATQPCJGROSANQVXLCNCFEHYZNVFIPZRHMRDLBGBXTJSFQWEWZB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.135251111633);
    msg.setSource(26971U);
    msg.setSourceEntity(122U);
    msg.setDestination(65147U);
    msg.setDestinationEntity(186U);
    msg.timeout = 45734U;
    msg.flags = 213U;
    msg.lat = 0.0926389501128;
    msg.lon = 0.988717360877;
    msg.start_z = 0.340383714403;
    msg.start_z_units = 21U;
    msg.end_z = 0.7030608996;
    msg.end_z_units = 58U;
    msg.radius = 0.409742885769;
    msg.speed = 0.0804111970889;
    msg.speed_units = 8U;
    msg.custom.assign("BPQFMPJUKBKHSSECRGDVMGTCGKGDRFAUJCHKOYMHSSYWVOHXVSWLGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.917255802013);
    msg.setSource(31670U);
    msg.setSourceEntity(172U);
    msg.setDestination(53931U);
    msg.setDestinationEntity(192U);
    msg.timeout = 19763U;
    msg.flags = 112U;
    msg.lat = 0.586733271947;
    msg.lon = 0.77118635411;
    msg.start_z = 0.837538747931;
    msg.start_z_units = 229U;
    msg.end_z = 0.565876242607;
    msg.end_z_units = 94U;
    msg.radius = 0.969764661673;
    msg.speed = 0.854403511049;
    msg.speed_units = 30U;
    msg.custom.assign("ILCHFCNBIRDXXFTGWJEKGEODDNAOQVAWNEWPWKHFFQFZEHNLMCMEYMLZJIQYZHUCMMVHUOZVAEGKSBOTJFVXUYZAMHALKGGYVYRFVTDWJTXQRIJKYXPNJNDLNHXDIURSIIUSNUXPEJIMDSBPPHXVAUSPWZHZYFPCQWKWYRKFELCBASECIKOTULTONNSOBPJDRKOQRXTVJBTZDRLZCYUBVIPQDSBHAGSRWZTPXBBTOEULFSW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.926492617122);
    msg.setSource(25473U);
    msg.setSourceEntity(156U);
    msg.setDestination(33794U);
    msg.setDestinationEntity(223U);
    msg.timeout = 43334U;
    msg.flags = 251U;
    msg.lat = 0.0431132080622;
    msg.lon = 0.655779103618;
    msg.start_z = 0.0502241470567;
    msg.start_z_units = 96U;
    msg.end_z = 0.704732985441;
    msg.end_z_units = 12U;
    msg.radius = 0.739132426806;
    msg.speed = 0.330679863721;
    msg.speed_units = 11U;
    msg.custom.assign("KOCUFEPFQNROVFEPKVUCSQTTTIUVWDDJNJWBEJVUGCLTLAZYEQKLDFSBUOOKBATODMWPCVYVQSZTBWCPPPRISSUHXEGBIAMLIEMNZVVVYLOPDGWEHXQIKNORZGHLBWMPVMALWYZFNXMP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.724281411652);
    msg.setSource(28549U);
    msg.setSourceEntity(196U);
    msg.setDestination(25005U);
    msg.setDestinationEntity(179U);
    msg.timeout = 3329U;
    msg.lat = 0.470619625881;
    msg.lon = 0.324490256506;
    msg.z = 0.855650225525;
    msg.z_units = 196U;
    msg.speed = 0.83588461012;
    msg.speed_units = 55U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.738836596444;
    tmp_msg_0.y = 0.977047582635;
    tmp_msg_0.z = 0.0630104526924;
    tmp_msg_0.t = 0.66394554862;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CGYDENDWWDNPQMJXGYAJKTFMQRMPHWMKKIKZIFSH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.863950875961);
    msg.setSource(28167U);
    msg.setSourceEntity(201U);
    msg.setDestination(54747U);
    msg.setDestinationEntity(238U);
    msg.timeout = 44222U;
    msg.lat = 0.500694573544;
    msg.lon = 0.175945077727;
    msg.z = 0.569759145862;
    msg.z_units = 65U;
    msg.speed = 0.461993695896;
    msg.speed_units = 159U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.819690664812;
    tmp_msg_0.y = 0.16663155895;
    tmp_msg_0.z = 0.132525231219;
    tmp_msg_0.t = 0.256088691538;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JCDELLDSBEABSUOZZWUAGIQUPOPTWHNWTVOLTHNOZXTZMEHVSMRWGQMGJSMVTSKLICHBVDTVEPFZQCXKDURNAPVFXZRLHVUUWJSQXAUCFVIJRRGIIWHNOFNKZGBDJBWAMPQJZBOCYCEYLFOTVFODCRKOSXJDQPTSYGJZWIEJVKPHZENLADSQNMPFFEQDUXMNRCBCBRXQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.470008927862);
    msg.setSource(8803U);
    msg.setSourceEntity(96U);
    msg.setDestination(48650U);
    msg.setDestinationEntity(189U);
    msg.timeout = 18952U;
    msg.lat = 0.865259527606;
    msg.lon = 0.777248538359;
    msg.z = 0.297791211684;
    msg.z_units = 76U;
    msg.speed = 0.97963681373;
    msg.speed_units = 1U;
    msg.custom.assign("AYLJDQNPBVLAOOGGTZJVUKAHIIESHITRDGBJXEDSKYOVBKOEZCCZEAXNSYDLNHQMEXKJKEZQTQTUH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.0119413629392);
    msg.setSource(15243U);
    msg.setSourceEntity(109U);
    msg.setDestination(50799U);
    msg.setDestinationEntity(173U);
    msg.x = 0.0736959781244;
    msg.y = 0.0806492980529;
    msg.z = 0.150049537187;
    msg.t = 0.770988121766;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.209224951194);
    msg.setSource(18517U);
    msg.setSourceEntity(213U);
    msg.setDestination(28763U);
    msg.setDestinationEntity(37U);
    msg.x = 0.586488211564;
    msg.y = 0.403044265732;
    msg.z = 0.162378637918;
    msg.t = 0.107458111502;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.732715187115);
    msg.setSource(32092U);
    msg.setSourceEntity(1U);
    msg.setDestination(19435U);
    msg.setDestinationEntity(10U);
    msg.x = 0.518191273896;
    msg.y = 0.36444044761;
    msg.z = 0.554239057499;
    msg.t = 0.782865189809;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.713202993719);
    msg.setSource(54345U);
    msg.setSourceEntity(250U);
    msg.setDestination(18012U);
    msg.setDestinationEntity(204U);
    msg.timeout = 39979U;
    msg.name.assign("GIRYLJFDJHCKDGAUNFICFHILXHWLVACOSAUKXGULUPRMSWAQHEXMWVPKYKLBKHBYNCRLMASKDNNMLZHRVSMEQCE");
    msg.custom.assign("VROFNXTQTAJTKNVHUSSBHEXZYAJFQRZLZJZDYUROY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.402631450246);
    msg.setSource(8263U);
    msg.setSourceEntity(213U);
    msg.setDestination(6941U);
    msg.setDestinationEntity(116U);
    msg.timeout = 57405U;
    msg.name.assign("UKNQPIYSOFRISRXDVWXUAVDWAHJJPSNEXFFAUINYTBBNGDGFKTDWORBDGQOYZVSKCPCVCTGCCYHJFWYXQTEZLDZIEDKUQNBP");
    msg.custom.assign("JLDZGYUFUUTWBIHHZUPVNMBUZHCYASRTLFENXQEWDIUMAIYDGLLUQWVQFHHXQBNWXYDBSDFDGVFWPYXGEBKYYJTYERQJQAURIQICJWJKGRTBTBEAPTRWQVNOAEUGHVLVOMXVFQTPBKOTONIUDMDDLVWCIVANEOZTPRPOLVYCPWAMMKOKCNPL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.703111399733);
    msg.setSource(43611U);
    msg.setSourceEntity(85U);
    msg.setDestination(58977U);
    msg.setDestinationEntity(144U);
    msg.timeout = 38454U;
    msg.name.assign("LWQELCLVUEPLYCGFOSEFEJZHPNFGAYWGRTFDCMHSBYDZUBRRGMRPKJNNHJJDNZMOSAEFWSCPQYSJWQBJRGIKKDXBOFZIXFBAXDTNVIOVIOAKTCXXIHUWPBUYCCMFTYMTGLBAAENZXITBOAUVZBVVQLDVTIG");
    msg.custom.assign("DPQJKVIHWRUQIXUCQSJNBRZJVJYWBMPCDOHNZDNKIEGKAASBXLLTLWELXQUKOMZJJSQKPRKLZRVCAWGUQBNYIDPWXMM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.334578949243);
    msg.setSource(53551U);
    msg.setSourceEntity(246U);
    msg.setDestination(19909U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.928494598104;
    msg.lon = 0.387341058072;
    msg.z = 0.361118000137;
    msg.z_units = 3U;
    msg.speed = 0.94530971866;
    msg.speed_units = 19U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.572447582222;
    tmp_msg_0.y = 0.317547043417;
    tmp_msg_0.z = 0.529870310062;
    tmp_msg_0.t = 0.630658186257;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.160314054285;
    msg.custom.assign("MIBYHTQLWUHKHFPVIZGXDPHOZZBCRVCYSNLEYLTZNLGYZMAHYIGFUABMOVTMOBPYSCIPRNABNRDMJUVUEUANMQWATVHCSPGKKTKLICAGBSPGFODSFTLRXTGCXVLXQQQTJUEBMYJPGXRNUROHFJNKKMWOIOAPYDODUXVGIDBRUNCJWENEKLWQOSKJYZDHZJZDJXTBEBFAZTJECQPRYIKWEFMFWFSVWJSGPZDDSMRH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.692058844516);
    msg.setSource(56653U);
    msg.setSourceEntity(183U);
    msg.setDestination(53968U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.617876185284;
    msg.lon = 0.165555554728;
    msg.z = 0.476561632318;
    msg.z_units = 107U;
    msg.speed = 0.823359978826;
    msg.speed_units = 213U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.602041771214;
    tmp_msg_0.y = 0.984009310362;
    tmp_msg_0.z = 0.0564007713671;
    tmp_msg_0.t = 0.062727755522;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.973343481571;
    msg.custom.assign("IBTEMTPAADYKXDVHIHRQFFOHQGSYLGZYZYYGETSYBNTCOUHFHPYNSQHSRCGWTRPDWQFVNCUDLNECAJAQTKFCCZEPPJTWKLEQVRVMKJAVILTBEWAB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.0364893189742);
    msg.setSource(36931U);
    msg.setSourceEntity(47U);
    msg.setDestination(16386U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.585770464036;
    msg.lon = 0.251935606911;
    msg.z = 0.677662372557;
    msg.z_units = 118U;
    msg.speed = 0.766539989311;
    msg.speed_units = 37U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.794191067848;
    tmp_msg_0.y = 0.165341225142;
    tmp_msg_0.z = 0.67058080422;
    tmp_msg_0.t = 0.840103453816;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.317754558438;
    msg.custom.assign("XFKJOKTCDLQLCANOYCLAUTTVCMOFSLZDOBJAHUFXISOKAZYASMCHVQFE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.510416704045);
    msg.setSource(1531U);
    msg.setSourceEntity(66U);
    msg.setDestination(47253U);
    msg.setDestinationEntity(154U);
    msg.vid = 10616U;
    msg.off_x = 0.349984048022;
    msg.off_y = 0.334422190564;
    msg.off_z = 0.762248224677;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.963461562421);
    msg.setSource(5884U);
    msg.setSourceEntity(234U);
    msg.setDestination(64402U);
    msg.setDestinationEntity(119U);
    msg.vid = 62680U;
    msg.off_x = 0.239908269432;
    msg.off_y = 0.887824050523;
    msg.off_z = 0.388237149617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.1605590421);
    msg.setSource(5507U);
    msg.setSourceEntity(91U);
    msg.setDestination(56166U);
    msg.setDestinationEntity(26U);
    msg.vid = 5444U;
    msg.off_x = 0.895642283004;
    msg.off_y = 0.991538976668;
    msg.off_z = 0.227618129448;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.565575130618);
    msg.setSource(61405U);
    msg.setSourceEntity(87U);
    msg.setDestination(11980U);
    msg.setDestinationEntity(102U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.707823064524);
    msg.setSource(42278U);
    msg.setSourceEntity(235U);
    msg.setDestination(32535U);
    msg.setDestinationEntity(33U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.775710577988);
    msg.setSource(62423U);
    msg.setSourceEntity(241U);
    msg.setDestination(43003U);
    msg.setDestinationEntity(13U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.805615841617);
    msg.setSource(64325U);
    msg.setSourceEntity(93U);
    msg.setDestination(5250U);
    msg.setDestinationEntity(69U);
    msg.mid = 8858U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.939420689093);
    msg.setSource(60565U);
    msg.setSourceEntity(173U);
    msg.setDestination(33444U);
    msg.setDestinationEntity(101U);
    msg.mid = 61820U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.543581967046);
    msg.setSource(6393U);
    msg.setSourceEntity(15U);
    msg.setDestination(47119U);
    msg.setDestinationEntity(199U);
    msg.mid = 3998U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.504990411715);
    msg.setSource(52685U);
    msg.setSourceEntity(158U);
    msg.setDestination(39555U);
    msg.setDestinationEntity(251U);
    msg.state = 223U;
    msg.eta = 27577U;
    msg.info.assign("QKOJMOGYHAVBXOECFQWARXPBZEV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.513705486349);
    msg.setSource(59695U);
    msg.setSourceEntity(76U);
    msg.setDestination(36175U);
    msg.setDestinationEntity(140U);
    msg.state = 19U;
    msg.eta = 13864U;
    msg.info.assign("UKKQRPRCDZYSCNHHXZAPCLQOIJTIZUZFQQGZCXDHWBZTYFBROKVOKIRVFUPIDVJUCTFOMUEBUFJNVFSAHPIPOSECEEFPESGKQQOIKJUZLYCNGWRQMJSLJMDMTOFSCAMBZBBWXQU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.283572937902);
    msg.setSource(17435U);
    msg.setSourceEntity(56U);
    msg.setDestination(56180U);
    msg.setDestinationEntity(194U);
    msg.state = 21U;
    msg.eta = 15588U;
    msg.info.assign("ZFEBFXHFAQLELORLFEVYTPOMDYNJESZBOMBSDUJRGHPKTWYVXGBIHVKFKKVZTYNTUOAXDKHFAYPKPYHJSGAUNMCYLIIVKRDXEZNQEZFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.765397502743);
    msg.setSource(26170U);
    msg.setSourceEntity(53U);
    msg.setDestination(24334U);
    msg.setDestinationEntity(228U);
    msg.system = 47495U;
    msg.duration = 34130U;
    msg.speed = 0.717476667543;
    msg.speed_units = 6U;
    msg.x = 0.139943934702;
    msg.y = 0.600738713957;
    msg.z = 0.884321736023;
    msg.z_units = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.359995101022);
    msg.setSource(14162U);
    msg.setSourceEntity(85U);
    msg.setDestination(30085U);
    msg.setDestinationEntity(54U);
    msg.system = 45401U;
    msg.duration = 60851U;
    msg.speed = 0.568855186302;
    msg.speed_units = 122U;
    msg.x = 0.552520435386;
    msg.y = 0.0284954374814;
    msg.z = 0.864127852768;
    msg.z_units = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.357333004207);
    msg.setSource(37607U);
    msg.setSourceEntity(27U);
    msg.setDestination(8505U);
    msg.setDestinationEntity(22U);
    msg.system = 27595U;
    msg.duration = 32269U;
    msg.speed = 0.529905309086;
    msg.speed_units = 85U;
    msg.x = 0.902862673749;
    msg.y = 0.673696884477;
    msg.z = 0.93758410371;
    msg.z_units = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.684463073878);
    msg.setSource(15800U);
    msg.setSourceEntity(189U);
    msg.setDestination(22074U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.959959664076;
    msg.lon = 0.742259967243;
    msg.speed = 0.559609091157;
    msg.speed_units = 6U;
    msg.duration = 2369U;
    msg.sys_a = 36066U;
    msg.sys_b = 42625U;
    msg.move_threshold = 0.687065066909;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.783636298961);
    msg.setSource(17387U);
    msg.setSourceEntity(45U);
    msg.setDestination(9158U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.45599584957;
    msg.lon = 0.320340938886;
    msg.speed = 0.684486099129;
    msg.speed_units = 146U;
    msg.duration = 32603U;
    msg.sys_a = 47526U;
    msg.sys_b = 61770U;
    msg.move_threshold = 0.106635527627;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.106688767986);
    msg.setSource(46518U);
    msg.setSourceEntity(224U);
    msg.setDestination(25146U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.80175252763;
    msg.lon = 0.0401640968568;
    msg.speed = 0.837582281896;
    msg.speed_units = 135U;
    msg.duration = 12549U;
    msg.sys_a = 4270U;
    msg.sys_b = 2824U;
    msg.move_threshold = 0.900015936604;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.501758620709);
    msg.setSource(1216U);
    msg.setSourceEntity(48U);
    msg.setDestination(50395U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.93897952241;
    msg.lon = 0.549096532568;
    msg.z = 0.832822463034;
    msg.z_units = 124U;
    msg.speed = 0.466749040479;
    msg.speed_units = 234U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.318942438384;
    tmp_msg_0.lon = 0.140098332618;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("RQWZZFNXHVWMRNXASLZQAGCKPLWMLWNAKGHIIGBOARVCXUAKYGVIKQEWIBVJTANUXPTDKUFNMZQEKFSWMWFRVUQPTLYCFOTOKVZYOQEBHDSYCPYNSRIFLSHJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.0670061458267);
    msg.setSource(43247U);
    msg.setSourceEntity(221U);
    msg.setDestination(43297U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.973263689687;
    msg.lon = 0.0243045798279;
    msg.z = 0.770235458189;
    msg.z_units = 112U;
    msg.speed = 0.47109703342;
    msg.speed_units = 168U;
    msg.custom.assign("QLEMNWYKJROJIMIZYEMDZDKMBBZTZQAKDOW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.406469416963);
    msg.setSource(29891U);
    msg.setSourceEntity(103U);
    msg.setDestination(19546U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.6975159751;
    msg.lon = 0.52251640521;
    msg.z = 0.259863319639;
    msg.z_units = 106U;
    msg.speed = 0.526500326963;
    msg.speed_units = 91U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.955050793585;
    tmp_msg_0.lon = 0.897686775677;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VADHLIKMXXTDXSLZGABTQRANWUMOABEPSOPJYJYXMMYGAURCHLZTSZAGM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.750695095796);
    msg.setSource(9080U);
    msg.setSourceEntity(201U);
    msg.setDestination(34184U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.442071475468;
    msg.lon = 0.877109664355;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.198904767313);
    msg.setSource(47641U);
    msg.setSourceEntity(93U);
    msg.setDestination(40085U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.677692631903;
    msg.lon = 0.577758408188;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.679769751346);
    msg.setSource(62766U);
    msg.setSourceEntity(1U);
    msg.setDestination(44304U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.747685849285;
    msg.lon = 0.688670507281;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.353384321283);
    msg.setSource(18253U);
    msg.setSourceEntity(222U);
    msg.setDestination(40264U);
    msg.setDestinationEntity(152U);
    msg.timeout = 2748U;
    msg.lat = 0.285734310601;
    msg.lon = 0.420192785562;
    msg.z = 0.461904010218;
    msg.z_units = 107U;
    msg.pitch = 0.415871622196;
    msg.amplitude = 0.714399918048;
    msg.duration = 36186U;
    msg.speed = 0.831604902886;
    msg.speed_units = 122U;
    msg.radius = 0.94439530236;
    msg.direction = 32U;
    msg.custom.assign("BRMYUTVJZESBFXLLYQHSZBVMQOPKIEXJGUEUCYWWBTGATCOUJSGKGBMCONNYJBJHDEYQHPGTAOHRKXQQQZVUDQHGLEIPINZEDRPUJDHXSYGDIMMIAPNHKLLVSFFEDAYMCFIHOCFCLJZIRTBS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.84321278256);
    msg.setSource(29739U);
    msg.setSourceEntity(136U);
    msg.setDestination(50760U);
    msg.setDestinationEntity(200U);
    msg.timeout = 46463U;
    msg.lat = 0.0161690199464;
    msg.lon = 0.712772449974;
    msg.z = 0.952586771007;
    msg.z_units = 196U;
    msg.pitch = 0.427131190874;
    msg.amplitude = 0.477132347963;
    msg.duration = 5274U;
    msg.speed = 0.715443232736;
    msg.speed_units = 147U;
    msg.radius = 0.656557641283;
    msg.direction = 50U;
    msg.custom.assign("AFLFCUPCGJPAFRLGBOUNDLXXPAMWKKMHQCMHRKZDJZRKAWWVTFOLDHZPGZLOJTXOLDXVPDWCRTXVWPZIKWMNUZIITNECRNTPYYQAMYOVZQESJQXANIOTSIVVWUJDGADOGZBBICQYNMQYGEOHXRNQBISHRHBUOEYEDUSSFLCNMOHDXEFWPZYQBIIBFEESMLFCRACTPGRBJTNTZHGEGWVQHBSFPJMDJCKVASTSKVSBQYXXURFKGUMJUEHIJYVLW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.50892495711);
    msg.setSource(13887U);
    msg.setSourceEntity(165U);
    msg.setDestination(7320U);
    msg.setDestinationEntity(60U);
    msg.timeout = 36768U;
    msg.lat = 0.405605993037;
    msg.lon = 0.341367662335;
    msg.z = 0.725912037898;
    msg.z_units = 122U;
    msg.pitch = 0.268930266067;
    msg.amplitude = 0.245769091577;
    msg.duration = 60700U;
    msg.speed = 0.866596817762;
    msg.speed_units = 50U;
    msg.radius = 0.495587804836;
    msg.direction = 120U;
    msg.custom.assign("EMZTZUUAZRYTCFEWJBIHLCXYXDAVFSIXDSRRJAOGIPTAAOQTFETNGFDQFMKKSGFDPZVZJKBTKYLXWEUBROCQFVPLKLXMIZWSDDEMRUAJYDKJRGXEOHZWLKGDDXNYPRFUPVCBJKESMVUCAQNNVSWYOIEAQPSNQYCWBPCNRHCLLOWST");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.163782094349);
    msg.setSource(32712U);
    msg.setSourceEntity(85U);
    msg.setDestination(44678U);
    msg.setDestinationEntity(185U);
    msg.formation_name.assign("NSPJVKOARWXDHFIKCTECVONMPQFRILQIVDBCWZLEUUVTEAHQJIKGHYFURWLADLWQYPXNPIGTTYEPKVNEL");
    msg.reference_frame = 224U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59336U;
    tmp_msg_0.off_x = 0.839933335012;
    tmp_msg_0.off_y = 0.857534537137;
    tmp_msg_0.off_z = 0.546503484648;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("RAIIDMYXRYRWSUVQSAMQJBHFXFKMFJBGIOZMKPGZZSVVVVLSYOHYKIJFNPJPCDNPZHCAYFYUAYUEMTKPYOEIBJVQQGDUWLLXZKQOPILCSSNAKBZEGGUUGGBAWOXBNDFXIHTATCJMFKMOQIRBCZPARJFDQZVKHVENCAGTSF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.385469316441);
    msg.setSource(34243U);
    msg.setSourceEntity(190U);
    msg.setDestination(59257U);
    msg.setDestinationEntity(193U);
    msg.formation_name.assign("CPJVIPGTBDDEQDWXPMUJEDTCFKKTRWPVOQXRZIZIEGTFOAZYJIFWJRJTDLFSGBFLJHUBDARVAXMFNLVQVEEWBRHLWSTPIYEFWYTHVXGHFBZRQLVHLGOEVMCNZBLTCAVQNKWIINZDLNNXNGBGHYTNQAXSMCEDUPJORELYBASNMCGAOUMBQKOFSXSAYAKCIBSUWNVHKZERUZWKMARGIDXSYIKUTSGJCCSOYPOMXUZURYJQMMXDOQCPZHOJHKHKF");
    msg.reference_frame = 143U;
    msg.custom.assign("NSNEHRLIYQANPHGTJLQBSZVDPNAIHUOOVFXJIJKFLIDVXHXNLQOJRECYEFMAHYYPHCYWRMGUCNAJBRWKRHYLSOZDHVOFYOAWNWBJUHBTWVQZZCSCLGUTPOBAAKXKZRXNQKPQDKIGHBXSFESFYMWWSZPEBRW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.412717645396);
    msg.setSource(47697U);
    msg.setSourceEntity(208U);
    msg.setDestination(24174U);
    msg.setDestinationEntity(240U);
    msg.formation_name.assign("NLFYJPZNCMDVGSZZWDPBMZJQOBRQJDUYQMLKPDAVUOHHMXJQURTWXNNFPNIRKTYDVEWIZSQKKAKCPKGIBYGAHICKUQCXVXWTVOECGTMGTFUKYCHMEUJZGFOEONFFRNOQDRDIINOHCBAGBVUYPGEWINYXPSCSHOVLJHXEA");
    msg.reference_frame = 117U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17602U;
    tmp_msg_0.off_x = 0.409328957497;
    tmp_msg_0.off_y = 0.776077618047;
    tmp_msg_0.off_z = 0.00886704716645;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("DWESHUOCOGSXTFBBFFKIJCHFENXWNHGHQRQEGRMJBULTWDEGTKKDZWPDZROWCMAULZRUUYLAPAXNDSTHHKVFOHQFNVPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.0385060876847);
    msg.setSource(11038U);
    msg.setSourceEntity(233U);
    msg.setDestination(35937U);
    msg.setDestinationEntity(250U);
    msg.group_name.assign("FSBBHCVEOODVERYNAOXXIQZMGAOWTISGJHDINCOHAGRTTWDZXDQVUZX");
    msg.formation_name.assign("DDDWVNKJCWCQL");
    msg.plan_id.assign("KFXXVGUANOWCVXKJKOPRMHNQNDKPOSVCJCJIYNRZHYKVBRAQEBNFWPTQCRZUHSIXEWBGWCPRNLGJBYALYNHAIKLQLJDITQT");
    msg.description.assign("SJZXUDRKDVXTYJBVIOXFWITOCQNSCZXCGDZYNFBUBCJKNGUSAYCQKVFLHYABBJURZOPIUUCEXNLHMROMSLBBQEMZOFHMAVGLYGEQAJIJIOPKTSTNZRNLTHPRRXCYSDCFBLAVAKPVIFSRIDWHEYXYHKVLZWXMBKJGSUDEUARPAMLNUMDAWOVYPTXFQLTNOQCTWDIQOPKEISIMEJQGKCGZPHEWW");
    msg.leader_speed = 0.157656996853;
    msg.leader_bank_lim = 0.0947010627897;
    msg.pos_sim_err_lim = 0.0624660507817;
    msg.pos_sim_err_wrn = 0.824407503262;
    msg.pos_sim_err_timeout = 45874U;
    msg.converg_max = 0.832174471659;
    msg.converg_timeout = 37796U;
    msg.comms_timeout = 49430U;
    msg.turb_lim = 0.212086810733;
    msg.custom.assign("DRCFKXSPGWLYPAKINSDBAWPFJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.00103791198204);
    msg.setSource(14870U);
    msg.setSourceEntity(143U);
    msg.setDestination(8232U);
    msg.setDestinationEntity(14U);
    msg.group_name.assign("XMDDKNRXSQHOTSQAHWCWLXFMSVAAKPITNWPOAHQZDMYMIFXGGNIQQRFUJSLJLWUANEKZTORYTJPUFHCKVBCXMOKMTJLKDYGMRZTWDYJGSEYNUEPNCGSVVWYSCFTHQZHZQCGEAJUWDIBPRSRBKTIPQU");
    msg.formation_name.assign("ZMRLXBYJIHFJFRWBEJGHRLHPECONFZNKSOISGHNTYYCBUZTAGJKJJTXGGFPMEOOTBDTVFDMKLDDHXJGNHUIFABYXWJDVCZVXATEOEQXSPLZSECIPDNCQROEZDKVCCAETKVMLWZFPYQTQLHVWJCUDZUIXJBOIAEGBPGOURUAQQMSLFSBFZQRFPIUIADXDHMVQTLPEBSNNRRNUYVOQXLCURRCOVWZH");
    msg.plan_id.assign("GEDUEMIQVOADSENSTMDCBDBWCYHGXKRLLGWWPASSXYSUHUAXOXETGMPROUMHABGVEJXHIWERQJPASDKCWK");
    msg.description.assign("QMPIVGZYJFYQZFONTHD");
    msg.leader_speed = 0.127256403726;
    msg.leader_bank_lim = 0.321496658006;
    msg.pos_sim_err_lim = 0.883910800464;
    msg.pos_sim_err_wrn = 0.315235040162;
    msg.pos_sim_err_timeout = 35501U;
    msg.converg_max = 0.469930647342;
    msg.converg_timeout = 61705U;
    msg.comms_timeout = 11235U;
    msg.turb_lim = 0.338296827063;
    msg.custom.assign("ETRQTHDHRSHKAHQIWQNVUMCJKVDYIVMYPGZABMFEUPNPCJQCANPAOWJFXZZUWTAAISFZFMOGISCKTOFQIDCLZELGXFYJLKSXGVISTEBDPIHWEMHRGRSSLLXZLTCJWZVPOKRAPMLPVKRBVFNYUQWVUGDPKTACVJARDZSUOEVMXHCIUBOYDUOAWNFZSYUDCMLHXNWBGNLBNUHZPHOMIDJJTXTWXKOEBGGIYF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.787073047589);
    msg.setSource(11355U);
    msg.setSourceEntity(88U);
    msg.setDestination(51950U);
    msg.setDestinationEntity(129U);
    msg.group_name.assign("AKHTEXATXRAPAVBGOXTMVVGHFCGKYXVEXELOJSQMULBANPYZNLCLWVTFSSVU");
    msg.formation_name.assign("LQWNBNCMUONUSQREIAFBHTSYUKFAVYMQULETCCRWTWCZJYETSIBSUYRSMECFPGSRYPZFNTZGETPZVBLIFJPOOCFBXZMJFVAKLZEKHQNROBJWRPLFGLEMPIVGYSOOAQZLBEOEEQLDSHYDXD");
    msg.plan_id.assign("SHRQFHANPSYPAVBRKBHOBJIPSOGCXXKXILDDWREDOFOBPSRGFJJXAXTQWKJEWKGFZKTMMXHQSQIUKOFBWTSAJUZCYHMNGYCEUVNZDJCHDZLQWTSTRCDJIXTRVDEIASBZWHNLOYGFEVYZFRHKCKORGQSCJYAMNVPVZAWIAELDTOWFQQGEYGLGLUCTCCPUAVSNJTOFMIRNMWKVIULXNVUNQHUYZXPUDABGEBWDIPKEEZQYFRPBMVNMMYXT");
    msg.description.assign("HPXTKFWGZVUIMHOILEDAMYXGWQEQRCTKUWXHIZTYSJHPEGJGCWEJQJQYRQILNJAMIOLLBPAFNZBFCWONEVLVSLRZIUENUMWHRZOCVZVDSPFVPDGBIYNSPMXCYYTEMNLLAGLYCKCUPSK");
    msg.leader_speed = 0.920066786377;
    msg.leader_bank_lim = 0.267686900728;
    msg.pos_sim_err_lim = 0.162312143579;
    msg.pos_sim_err_wrn = 0.487836797443;
    msg.pos_sim_err_timeout = 48156U;
    msg.converg_max = 0.0177614633482;
    msg.converg_timeout = 12618U;
    msg.comms_timeout = 11764U;
    msg.turb_lim = 0.415017398029;
    msg.custom.assign("DNQVQLPKYPDEAWNMOKVCXYSIRYIDSTUJLDJGUIZTQYFUDOPWAJIZCVFRTZKOBRBUSHOHGHDXZLSNJCRPHPYDPKVMNFIDYEROZEXGCAMTAHWPDGRSIZEWAUJPSKCZOMTLBTLIJWLMOMNVNKGPWU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.454137242862);
    msg.setSource(54279U);
    msg.setSourceEntity(20U);
    msg.setDestination(52759U);
    msg.setDestinationEntity(74U);
    msg.control_src = 33835U;
    msg.control_ent = 20U;
    msg.timeout = 0.873951159064;
    msg.loiter_radius = 0.132132891531;
    msg.altitude_interval = 0.880389606314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.092181130306);
    msg.setSource(16165U);
    msg.setSourceEntity(173U);
    msg.setDestination(7184U);
    msg.setDestinationEntity(147U);
    msg.control_src = 61300U;
    msg.control_ent = 189U;
    msg.timeout = 0.0421898239939;
    msg.loiter_radius = 0.696162434524;
    msg.altitude_interval = 0.617988942939;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.362365682018);
    msg.setSource(24306U);
    msg.setSourceEntity(228U);
    msg.setDestination(41915U);
    msg.setDestinationEntity(5U);
    msg.control_src = 7014U;
    msg.control_ent = 22U;
    msg.timeout = 0.145378167331;
    msg.loiter_radius = 0.170236681328;
    msg.altitude_interval = 0.924828374445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.924549292127);
    msg.setSource(58186U);
    msg.setSourceEntity(165U);
    msg.setDestination(17725U);
    msg.setDestinationEntity(64U);
    msg.flags = 193U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.263945141463;
    tmp_msg_0.speed_units = 38U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.810644646079;
    tmp_msg_1.z_units = 104U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.173023780067;
    msg.lon = 0.295537024527;
    msg.radius = 0.0999823262415;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.0301698630854);
    msg.setSource(53037U);
    msg.setSourceEntity(175U);
    msg.setDestination(39341U);
    msg.setDestinationEntity(22U);
    msg.flags = 248U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.874968188001;
    tmp_msg_0.speed_units = 75U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.698838183;
    tmp_msg_1.z_units = 185U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.869179036798;
    msg.lon = 0.632330586049;
    msg.radius = 0.0181770074501;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.193500188446);
    msg.setSource(25709U);
    msg.setSourceEntity(57U);
    msg.setDestination(55429U);
    msg.setDestinationEntity(226U);
    msg.flags = 231U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.959523352725;
    tmp_msg_0.speed_units = 179U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.283108405602;
    tmp_msg_1.z_units = 60U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.14086746315;
    msg.lon = 0.402804209277;
    msg.radius = 0.811319236069;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.655367328015);
    msg.setSource(43352U);
    msg.setSourceEntity(73U);
    msg.setDestination(30850U);
    msg.setDestinationEntity(22U);
    msg.control_src = 38458U;
    msg.control_ent = 135U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 144U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.821218867353;
    tmp_tmp_msg_0_0.speed_units = 229U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0629995283083;
    tmp_tmp_msg_0_1.z_units = 189U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.655494785994;
    tmp_msg_0.lon = 0.0722755231902;
    tmp_msg_0.radius = 0.0409591634992;
    msg.reference.set(tmp_msg_0);
    msg.state = 250U;
    msg.proximity = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.281545103845);
    msg.setSource(34467U);
    msg.setSourceEntity(95U);
    msg.setDestination(57240U);
    msg.setDestinationEntity(124U);
    msg.control_src = 57385U;
    msg.control_ent = 123U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 161U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.619178376142;
    tmp_tmp_msg_0_0.speed_units = 62U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.449411183469;
    tmp_tmp_msg_0_1.z_units = 21U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.467131146681;
    tmp_msg_0.lon = 0.581638105294;
    tmp_msg_0.radius = 0.305339732801;
    msg.reference.set(tmp_msg_0);
    msg.state = 23U;
    msg.proximity = 193U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.101275070667);
    msg.setSource(60611U);
    msg.setSourceEntity(118U);
    msg.setDestination(64868U);
    msg.setDestinationEntity(118U);
    msg.control_src = 23432U;
    msg.control_ent = 73U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 178U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.950826351596;
    tmp_tmp_msg_0_0.speed_units = 57U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.972725541386;
    tmp_tmp_msg_0_1.z_units = 51U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.33063666864;
    tmp_msg_0.lon = 0.330061716219;
    tmp_msg_0.radius = 0.74871928896;
    msg.reference.set(tmp_msg_0);
    msg.state = 105U;
    msg.proximity = 174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.239338114112);
    msg.setSource(37917U);
    msg.setSourceEntity(66U);
    msg.setDestination(57049U);
    msg.setDestinationEntity(77U);
    msg.ax_cmd = 0.844587277597;
    msg.ay_cmd = 0.49183175014;
    msg.az_cmd = 0.55839947549;
    msg.ax_des = 0.589302209696;
    msg.ay_des = 0.772356828083;
    msg.az_des = 0.772555615885;
    msg.virt_err_x = 0.650365538846;
    msg.virt_err_y = 0.0632603796369;
    msg.virt_err_z = 0.980086895948;
    msg.surf_fdbk_x = 0.770311137461;
    msg.surf_fdbk_y = 0.921119928894;
    msg.surf_fdbk_z = 0.230536942565;
    msg.surf_unkn_x = 0.815879957529;
    msg.surf_unkn_y = 0.842633236731;
    msg.surf_unkn_z = 0.74900430908;
    msg.ss_x = 0.00139942165648;
    msg.ss_y = 0.570753709385;
    msg.ss_z = 0.135407527309;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("EQFHKTKTHOMZMAIJZDTHYFOHOGIIAFWAVFDNPXLJSSQHHKJFJJXTKCWQELGALSMETTMWBCUUGARLQDAVBFNXCRUPXAJCQRSVYKBTPEPXSROMDUDBZUDVYJJWWKDUZUXXYAVWWONXTEZICEQCVRGPIGUTBNJLGQWNDESNCAHOJVMOGZYIFSPUFKWKB");
    tmp_msg_0.dist = 0.138785299073;
    tmp_msg_0.err = 0.732948334246;
    tmp_msg_0.ctrl_imp = 0.15595453551;
    tmp_msg_0.rel_dir_x = 0.360706461489;
    tmp_msg_0.rel_dir_y = 0.715429484911;
    tmp_msg_0.rel_dir_z = 0.277566523514;
    tmp_msg_0.err_x = 0.315374881021;
    tmp_msg_0.err_y = 0.08151183414;
    tmp_msg_0.err_z = 0.408672939089;
    tmp_msg_0.rf_err_x = 0.413013370775;
    tmp_msg_0.rf_err_y = 0.533802504757;
    tmp_msg_0.rf_err_z = 0.274585718001;
    tmp_msg_0.rf_err_vx = 0.931620384253;
    tmp_msg_0.rf_err_vy = 0.890627342446;
    tmp_msg_0.rf_err_vz = 0.373991285586;
    tmp_msg_0.ss_x = 0.05417652419;
    tmp_msg_0.ss_y = 0.629124971959;
    tmp_msg_0.ss_z = 0.0014709167056;
    tmp_msg_0.virt_err_x = 0.415718959363;
    tmp_msg_0.virt_err_y = 0.255620888933;
    tmp_msg_0.virt_err_z = 0.941406705771;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.322238870238);
    msg.setSource(8750U);
    msg.setSourceEntity(19U);
    msg.setDestination(4020U);
    msg.setDestinationEntity(135U);
    msg.ax_cmd = 0.191413301884;
    msg.ay_cmd = 0.11076479865;
    msg.az_cmd = 0.897013919707;
    msg.ax_des = 0.934694953734;
    msg.ay_des = 0.0796981503937;
    msg.az_des = 0.541594880118;
    msg.virt_err_x = 0.713178780409;
    msg.virt_err_y = 0.526668298245;
    msg.virt_err_z = 0.454872180626;
    msg.surf_fdbk_x = 0.121545425062;
    msg.surf_fdbk_y = 0.276248659863;
    msg.surf_fdbk_z = 0.595949697554;
    msg.surf_unkn_x = 0.359747705917;
    msg.surf_unkn_y = 0.379717348561;
    msg.surf_unkn_z = 0.805236132483;
    msg.ss_x = 0.959812175561;
    msg.ss_y = 0.346144949876;
    msg.ss_z = 0.182562314907;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.882538834353);
    msg.setSource(32865U);
    msg.setSourceEntity(6U);
    msg.setDestination(18531U);
    msg.setDestinationEntity(69U);
    msg.ax_cmd = 0.588065137735;
    msg.ay_cmd = 0.155845992991;
    msg.az_cmd = 0.971508103999;
    msg.ax_des = 0.536255255429;
    msg.ay_des = 0.357452505893;
    msg.az_des = 0.0516687116564;
    msg.virt_err_x = 0.939416399631;
    msg.virt_err_y = 0.709254847884;
    msg.virt_err_z = 0.888433909444;
    msg.surf_fdbk_x = 0.550955408217;
    msg.surf_fdbk_y = 0.436518386927;
    msg.surf_fdbk_z = 0.672894076015;
    msg.surf_unkn_x = 0.384648687219;
    msg.surf_unkn_y = 0.446003128985;
    msg.surf_unkn_z = 0.293274213578;
    msg.ss_x = 0.549371288116;
    msg.ss_y = 0.481791234534;
    msg.ss_z = 0.954472523421;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.996137938736);
    msg.setSource(16802U);
    msg.setSourceEntity(68U);
    msg.setDestination(53239U);
    msg.setDestinationEntity(232U);
    msg.s_id.assign("RBSRMEXMTOGOSZZVVDEZBBPFATLNRQTDDZHZAHNBFMWQEJPWSVRSYCIPRWSAFVNGTKGDKEAFXHTCYETKYOCPLHPYQBJGTKUNKIJMMMJUZLHPHOIVKCMXDJWXXTB");
    msg.dist = 0.364674926459;
    msg.err = 0.713239977111;
    msg.ctrl_imp = 0.485902170247;
    msg.rel_dir_x = 0.614146415793;
    msg.rel_dir_y = 0.36591010333;
    msg.rel_dir_z = 0.563932640125;
    msg.err_x = 0.738728363445;
    msg.err_y = 0.218611719043;
    msg.err_z = 0.100443809897;
    msg.rf_err_x = 0.598124233961;
    msg.rf_err_y = 0.849472289546;
    msg.rf_err_z = 0.365719796456;
    msg.rf_err_vx = 0.55090443341;
    msg.rf_err_vy = 0.337637282885;
    msg.rf_err_vz = 0.889930424418;
    msg.ss_x = 0.917978183187;
    msg.ss_y = 0.918845217352;
    msg.ss_z = 0.792950167526;
    msg.virt_err_x = 0.210143579465;
    msg.virt_err_y = 0.989012431024;
    msg.virt_err_z = 0.992027934841;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.545221680313);
    msg.setSource(19182U);
    msg.setSourceEntity(0U);
    msg.setDestination(1408U);
    msg.setDestinationEntity(141U);
    msg.s_id.assign("UHLNRNXZPGKMRJCTHBOEJYJNHNTDHQYFSOEADUWAXFSBTKEDOYXJMYVJLNQYQLIGBSFOMXEIHLPUZILIGFDIIDDVEWGACXLHIVMORSSMYAWDCPJPRACMPJPRUBKKGOCQOFVAKXNNCZKPZBVNMTZRSCHTWUQHBDHXZKBEBVWQGYSFQILVGAEQWXNTMQHUCXLUFOSERCRERV");
    msg.dist = 0.649098658103;
    msg.err = 0.371250559348;
    msg.ctrl_imp = 0.400774980872;
    msg.rel_dir_x = 0.905178125276;
    msg.rel_dir_y = 0.389557401956;
    msg.rel_dir_z = 0.410721946689;
    msg.err_x = 0.726377582349;
    msg.err_y = 0.973635914415;
    msg.err_z = 0.206291767355;
    msg.rf_err_x = 0.348990937486;
    msg.rf_err_y = 0.616114989867;
    msg.rf_err_z = 0.102181186792;
    msg.rf_err_vx = 0.0763810747737;
    msg.rf_err_vy = 0.172690537919;
    msg.rf_err_vz = 0.791453114851;
    msg.ss_x = 0.877934450098;
    msg.ss_y = 0.0324432087491;
    msg.ss_z = 0.910413611425;
    msg.virt_err_x = 0.387229789652;
    msg.virt_err_y = 0.59022825544;
    msg.virt_err_z = 0.61947706536;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.0697160761447);
    msg.setSource(48538U);
    msg.setSourceEntity(77U);
    msg.setDestination(36011U);
    msg.setDestinationEntity(105U);
    msg.s_id.assign("AGFGYOEUSWQKRNBRVPJQFIUSBWANRMYRQGYDEEHPGAKEKCRWCCLYPKVTKLRFIWJIZESIDMYBAIPPIUGTAWDBFHUKYLJWICOAJEZRDMCWNXDSBJTDLDTTUEGFKGJNOTTMWNSPBJOWVXXHVZGVPGSNMJXZZOLZMLQQBEHCMUEK");
    msg.dist = 0.762974635395;
    msg.err = 0.564709926486;
    msg.ctrl_imp = 0.267379651156;
    msg.rel_dir_x = 0.995757451237;
    msg.rel_dir_y = 0.345790041811;
    msg.rel_dir_z = 0.221787606309;
    msg.err_x = 0.542321894419;
    msg.err_y = 0.390834328235;
    msg.err_z = 0.119032468765;
    msg.rf_err_x = 0.771051001949;
    msg.rf_err_y = 0.310729869568;
    msg.rf_err_z = 0.761832572806;
    msg.rf_err_vx = 0.83475071146;
    msg.rf_err_vy = 0.74213182508;
    msg.rf_err_vz = 0.310686709536;
    msg.ss_x = 0.0731473766923;
    msg.ss_y = 0.117146862342;
    msg.ss_z = 0.842609575485;
    msg.virt_err_x = 0.529058446397;
    msg.virt_err_y = 0.836745500142;
    msg.virt_err_z = 0.128036223412;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.574228731918);
    msg.setSource(49218U);
    msg.setSourceEntity(92U);
    msg.setDestination(54960U);
    msg.setDestinationEntity(88U);
    msg.timeout = 59015U;
    msg.rpm = 0.181428981457;
    msg.direction = 217U;
    msg.custom.assign("OTYLEOSCXRSLGJHOUBFAGDAKULWOJIKMYZTRAFQOSUFTUDOAEEVUUDYBMM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.70527926485);
    msg.setSource(20028U);
    msg.setSourceEntity(200U);
    msg.setDestination(18720U);
    msg.setDestinationEntity(102U);
    msg.timeout = 65462U;
    msg.rpm = 0.127277473632;
    msg.direction = 161U;
    msg.custom.assign("SZIHVOVLEZULMYLRSXILXACHDUPNUZESUGGRDZJOJWZWBTGTPGRYWJDJTNSIRKYZDUUAGPQXFLHBGLGFUWCSSJGWVFQSIQJQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.0826924026071);
    msg.setSource(40607U);
    msg.setSourceEntity(108U);
    msg.setDestination(6777U);
    msg.setDestinationEntity(27U);
    msg.timeout = 55384U;
    msg.rpm = 0.605524721521;
    msg.direction = 77U;
    msg.custom.assign("UBKXAFFUVWRHRIRGOYGMIKQYATLBRPKDBNHAXBXDRCAIDWJUICLVTTFEJAUNZPMEMTOSETBWNQFWRJFHYTMYJMKWQFMLFKKOSDNMIANJDHYMOCSXXGOFRWTEDUHDZBYEYZCMPWCVQUZKIPKAFBHZC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.941693690339);
    msg.setSource(59712U);
    msg.setSourceEntity(159U);
    msg.setDestination(12997U);
    msg.setDestinationEntity(66U);
    msg.formation_name.assign("SSPFOJMOUKZUTYIXIUCLURMUZNLRKSPPLWTQZPAYSBDTYOTHSVXZHTVQOAPEEZDICNPESELTRAOJQIQVKRDAGLNMBNVIAOKLEFOMNCHHMXWGAVWCFDIMZRQWRHTVGMYISIXOKVZVLCQXQGKJFLGJDJCTYAHBGUVAEZYWBCJSJDUUPYEBIMUBJRJUPFMJWXWLBDCFOYHNXGFBBCZQKAXSKCYLWMHFNEBSHRZPWNTNIYAFRQXQDXKVPFDDGTOEH");
    msg.type = 89U;
    msg.op = 5U;
    msg.group_name.assign("PFGIYBEKLKCAPPKBGHTZMZZUWTDXVDHTOOEJLVQQNNXMSJTKLAIAP");
    msg.plan_id.assign("MKKJULDSLHEYZBFGHKDOOEXJKSOOPBRURZT");
    msg.description.assign("QNCMKADHFF");
    msg.reference_frame = 162U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 50143U;
    tmp_msg_0.off_x = 0.823313865412;
    tmp_msg_0.off_y = 0.695135832937;
    tmp_msg_0.off_z = 0.239995046164;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.559060593783;
    msg.leader_speed_min = 0.0559788967454;
    msg.leader_speed_max = 0.674949943708;
    msg.leader_alt_min = 0.412933267726;
    msg.leader_alt_max = 0.127737571997;
    msg.pos_sim_err_lim = 0.807780177848;
    msg.pos_sim_err_wrn = 0.951412193948;
    msg.pos_sim_err_timeout = 59833U;
    msg.converg_max = 0.0741401163094;
    msg.converg_timeout = 55647U;
    msg.comms_timeout = 39077U;
    msg.turb_lim = 0.643468997927;
    msg.custom.assign("OTCBLKLTOAGNKGGIEQRTYBIOAFPMTYBRTXAVETDPAICPSZZIHHFYDTGJELQVMNSRCTHRHJGWYKQJUQRLQXESYWDRRWXTCDORUDUPIBHNVPMEXJVRNXQJIBOOUSCEGYNVZUUHHNUVQEXXJUBWAQMMFJEAHCAGFFZVHTIWFXQSJWQDJKYSLSDKCWLYILFPPKDLZROHYMZKKGLWVCZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.00792191408363);
    msg.setSource(802U);
    msg.setSourceEntity(232U);
    msg.setDestination(28594U);
    msg.setDestinationEntity(48U);
    msg.formation_name.assign("UKIHFVVYQDYQEXEHZUCFBDSVXTCCALYSSJEYHBJOGHPSYWYIZTQNLQZDKNLXFTGGIUQJUBTQHMNWRLWCRWMZGGEVGOSMUOOJAFCIDCYBVTMNHZSTBHOYRXSYPTVPKROCQZWRMPFJQAUKMZCKBAAVABZMJTHBDCWBKOETXWGOHLNDQVNYOJILAUHXWRGFOXDFEIEXPDRALNDXFPIGEKNRVFJUMXMM");
    msg.type = 226U;
    msg.op = 236U;
    msg.group_name.assign("ISIYXQHLPUUBGTTPFIJETRCOGSGFHNBGRVAQDFDZQMWVOWTZIKYGHMSCGUNSYXRFGBLNKXCDYJUJPIAUJRXOZMLTAQSYKELCPNYMEFEMDQZCLVCRNRHIBEGHBXWRUXVBKDDQOYTAXJPPBZNJDVLPSXCVHAXDWFHZOVQJSQMOEYLEQFTWPBIEHOKNMSSKKWVDUAZNIWKUGPMWKOAJNLAOOTKQCLLIMRZFBAZGZFWUCYHUTEHJIJRAFTNYMXDWVB");
    msg.plan_id.assign("DTXJIXBLYINVSQTHQGMWBOFQCXUDSC");
    msg.description.assign("GROPJVDSIOSKHEHXNATFVKCZITPXUGIRJBZQYRAWNMZJSRSVXCQMMEWIMGYKJJBCIZFXETPFUETQ");
    msg.reference_frame = 232U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 34301U;
    tmp_msg_0.off_x = 0.738490287353;
    tmp_msg_0.off_y = 0.977564281175;
    tmp_msg_0.off_z = 0.393945926223;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.731972068231;
    msg.leader_speed_min = 0.517946701865;
    msg.leader_speed_max = 0.625480597976;
    msg.leader_alt_min = 0.66416157376;
    msg.leader_alt_max = 0.728443914326;
    msg.pos_sim_err_lim = 0.867645541617;
    msg.pos_sim_err_wrn = 0.238700567904;
    msg.pos_sim_err_timeout = 36216U;
    msg.converg_max = 0.647323233706;
    msg.converg_timeout = 27828U;
    msg.comms_timeout = 50087U;
    msg.turb_lim = 0.857636993228;
    msg.custom.assign("NVFBTOICDZMKKXMLAXZWQJCKZUSDEGLEFPYRYAFIANVPFFGLPB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.966089990833);
    msg.setSource(17261U);
    msg.setSourceEntity(166U);
    msg.setDestination(29076U);
    msg.setDestinationEntity(103U);
    msg.formation_name.assign("YKOGPKZRTRGXFDLYOIIUPFWNXEWIKCGVRXBDPIYRZXYVTQKAFCHOEUTLWHKDJSUWNDNRHUUSLFIBIUHTEEDMOVMQITLSODLZIWQEZARMNQAXNTBWGXJFJKCFOUZRAJFZKUEPDOABKDABQZYJSIVMWKSPNAJMEMTATKNFLCZXQPSYPFWPXSHYPNGJJMQVBCVMACCDTOGYFABSRGJLUUEVNYMNHVHVOQHOGRJBTQPCXSEHQBGCEWX");
    msg.type = 72U;
    msg.op = 47U;
    msg.group_name.assign("XWXXZAHPAWUQDAZGNOUKPNCXQNPBVVJOVBQNSDSVZXNKUXRYRAUKJKFIZISEOWFKKRDDCIVTHVEXUVYGMFZEPQZZEGEOJTRN");
    msg.plan_id.assign("AZQXGAAOCWOHPMSXFISBUQXYFY");
    msg.description.assign("YPBZTSWLSRLKCBDHURZZEPPWMWOLGRWGYBKANMTGMUXACFAKBVIOTSGUZPVIXTKJNOUEUNJLGLCTMWAEXSJOXGQVDBNDYANRFVWATJVQCFHQZSANPPDYVOSOOQCIGIAYVQWPBCESUCZVHEWNHKAKPRDLOWHUFLSEEKJPBDRMIZRXTQEZCHCXIHVDTXDIINPGMVYXJXTUQLZNJLDMGFZRBBTOAYOFYHMMYKFJCRWFUXIHHQNJ");
    msg.reference_frame = 161U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64258U;
    tmp_msg_0.off_x = 0.312541550675;
    tmp_msg_0.off_y = 0.0835663359785;
    tmp_msg_0.off_z = 0.61910022505;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.498850468713;
    msg.leader_speed_min = 0.335603872393;
    msg.leader_speed_max = 0.48638718479;
    msg.leader_alt_min = 0.263207885832;
    msg.leader_alt_max = 0.102305843008;
    msg.pos_sim_err_lim = 0.417435288365;
    msg.pos_sim_err_wrn = 0.450416719876;
    msg.pos_sim_err_timeout = 31978U;
    msg.converg_max = 0.842157722499;
    msg.converg_timeout = 289U;
    msg.comms_timeout = 23192U;
    msg.turb_lim = 0.609783043129;
    msg.custom.assign("ZFPZTSDQDJDRQFWAKDTGTZJZHGAWTIVZFIEOTVLEJTWUYKOQVWAUECCGCYUMNNPMVBOUAWLIFJTGBVYKZOBRCFHXMBWUEFMSSDOGZIPNILDAKMNYITTNPLWYHDYAYRLEIHJULNLFXJERSBWYLBEXBIZGRSNRSRUWQYVQDXMQGKHROEGVPAJC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.247056039953);
    msg.setSource(36239U);
    msg.setSourceEntity(14U);
    msg.setDestination(24458U);
    msg.setDestinationEntity(211U);
    msg.timeout = 21579U;
    msg.lat = 0.12400605867;
    msg.lon = 0.240434278094;
    msg.z = 0.655503541679;
    msg.z_units = 82U;
    msg.speed = 0.302096170908;
    msg.speed_units = 64U;
    msg.custom.assign("TYYAKDGFUJHSSEFVTHUZDQTEAEYORFWWTCSPXVGJWOKJMVZJCPUQOUCLKDZJXBWAFRBAYCFULVLCKNVWGRAOMZDVAZGCHSSFNYJLABVBZXONLWAPAMNKBKIOQQRIRBEKEJQBMWRJGSQILEVRARBMLQOFTGIWGZUNGHPIPMUNCIZFNXKKXESEIZDLKMUSQLMCOUTTBCYO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.498134296765);
    msg.setSource(11924U);
    msg.setSourceEntity(161U);
    msg.setDestination(6695U);
    msg.setDestinationEntity(105U);
    msg.timeout = 55758U;
    msg.lat = 0.310470809952;
    msg.lon = 0.699107487879;
    msg.z = 0.629303549766;
    msg.z_units = 65U;
    msg.speed = 0.61989529922;
    msg.speed_units = 152U;
    msg.custom.assign("NTCYEHWIHTDKBVWMOJHNMYNUVSWDGFJBLGYIGSYJOUVVAYKXKDCGWDKZPZEQLMPUAPHQSNZVOLZHPXKTFUCUVUXGQYYEXPJDUPUKRBELCCYSIYLFHTKFVRBWJKGQANNBCXKGSXJVWOCWSSQIZOBHSIAWLIEDUZMIFZNNFROOMXMGQCTWEPLDPMTQHFQQTZBXBCDMEQRN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.439072522196);
    msg.setSource(48716U);
    msg.setSourceEntity(77U);
    msg.setDestination(50867U);
    msg.setDestinationEntity(87U);
    msg.timeout = 23873U;
    msg.lat = 0.97828428185;
    msg.lon = 0.332660750754;
    msg.z = 0.09449197145;
    msg.z_units = 121U;
    msg.speed = 0.900240916849;
    msg.speed_units = 114U;
    msg.custom.assign("YBTTNNYLDWCNLVFKHSFGPSNOMZSKJZBAXTOMS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.0745742132246);
    msg.setSource(13927U);
    msg.setSourceEntity(28U);
    msg.setDestination(37910U);
    msg.setDestinationEntity(178U);
    msg.timeout = 4691U;
    msg.lat = 0.921997532545;
    msg.lon = 0.482577489443;
    msg.z = 0.471687743773;
    msg.z_units = 153U;
    msg.speed = 0.767776166847;
    msg.speed_units = 168U;
    msg.custom.assign("EHPVEYCKUNLPMTHZXNXKXD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.947508908666);
    msg.setSource(15409U);
    msg.setSourceEntity(204U);
    msg.setDestination(61268U);
    msg.setDestinationEntity(192U);
    msg.timeout = 29701U;
    msg.lat = 0.635304447161;
    msg.lon = 0.987437332832;
    msg.z = 0.336855406204;
    msg.z_units = 118U;
    msg.speed = 0.661493644489;
    msg.speed_units = 14U;
    msg.custom.assign("MYRNKIUOAVNVMXBSWA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.228171175343);
    msg.setSource(22292U);
    msg.setSourceEntity(19U);
    msg.setDestination(9781U);
    msg.setDestinationEntity(153U);
    msg.timeout = 22865U;
    msg.lat = 0.990154081413;
    msg.lon = 0.552779376341;
    msg.z = 0.585308168406;
    msg.z_units = 117U;
    msg.speed = 0.549659144057;
    msg.speed_units = 118U;
    msg.custom.assign("ZAWASJOSNJHWDHRVBPJRWHNCIFDZYBVPHHRKGETBFUQASPFJEDFDLXAWHMOHFCWRAIDLGGGULYBPQPTQVSXCGCRYGTOPTGYGSMKPPYNXZTMIVIRZWREPZSWOIJVYSUYNNOCJDOOQIEFWUKLTHTZFZLNCFKRMOXBFLITIURMLMEZCWXVJSD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.86721053717);
    msg.setSource(1210U);
    msg.setSourceEntity(6U);
    msg.setDestination(26786U);
    msg.setDestinationEntity(94U);
    msg.arrival_time = 0.781914153687;
    msg.lat = 0.932616383775;
    msg.lon = 0.947725179216;
    msg.z = 0.348481331717;
    msg.z_units = 108U;
    msg.travel_z = 0.364862936605;
    msg.travel_z_units = 232U;
    msg.delayed = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.740579621226);
    msg.setSource(15838U);
    msg.setSourceEntity(68U);
    msg.setDestination(48254U);
    msg.setDestinationEntity(245U);
    msg.arrival_time = 0.530332517281;
    msg.lat = 0.809224701461;
    msg.lon = 0.404383861855;
    msg.z = 0.802174110008;
    msg.z_units = 57U;
    msg.travel_z = 0.283043365182;
    msg.travel_z_units = 169U;
    msg.delayed = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.930718690262);
    msg.setSource(37601U);
    msg.setSourceEntity(122U);
    msg.setDestination(22618U);
    msg.setDestinationEntity(136U);
    msg.arrival_time = 0.8541687648;
    msg.lat = 0.300741445326;
    msg.lon = 0.160626307758;
    msg.z = 0.374835388657;
    msg.z_units = 48U;
    msg.travel_z = 0.890039002038;
    msg.travel_z_units = 173U;
    msg.delayed = 53U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.057712567411);
    msg.setSource(5553U);
    msg.setSourceEntity(115U);
    msg.setDestination(29909U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.436229457223;
    msg.lon = 0.976387964158;
    msg.z = 0.145390760024;
    msg.z_units = 216U;
    msg.speed = 0.367127474264;
    msg.speed_units = 175U;
    msg.bearing = 0.358757609026;
    msg.cross_angle = 0.127201818715;
    msg.width = 0.978590038294;
    msg.length = 0.915537622651;
    msg.coff = 94U;
    msg.angaperture = 0.930862133661;
    msg.range = 45616U;
    msg.overlap = 160U;
    msg.flags = 94U;
    msg.custom.assign("GYALJZDOQYWTFMTIDFNUTUKGYGYCEADDENMVWNPSXJZEGWKXOVQUF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.330852271708);
    msg.setSource(25487U);
    msg.setSourceEntity(115U);
    msg.setDestination(12506U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.469087367119;
    msg.lon = 0.239503486048;
    msg.z = 0.0329268581635;
    msg.z_units = 197U;
    msg.speed = 0.47112192893;
    msg.speed_units = 86U;
    msg.bearing = 0.476293623525;
    msg.cross_angle = 0.748852070657;
    msg.width = 0.820529093092;
    msg.length = 0.0151620459736;
    msg.coff = 9U;
    msg.angaperture = 0.201967204818;
    msg.range = 45648U;
    msg.overlap = 81U;
    msg.flags = 149U;
    msg.custom.assign("DEKOELSZEOKAOJTMYDRMIJIZZBCXFBYCRYYEVOJFPSWQTMBMQVRIWVFXPSBFRHDZQYRBKUXGSCRNLSHDIFQGITAICLUZZHXGHKDGFJJWQGYGLSSJRKPUTOPJBBPPAAMGCWQNRHTVWQBVAVMAVUTQUFNMVQDHOJJUUVNXMRIYNLGKHYAKUFEOOLLTXZIDPCYXTCDGKDXQEBPPJLAILWUBAKSDNZYKFTNNEZNHEGOPCCVCANISRWWHWS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.971453158224);
    msg.setSource(42569U);
    msg.setSourceEntity(171U);
    msg.setDestination(32658U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.675380108123;
    msg.lon = 0.294058374559;
    msg.z = 0.778318689049;
    msg.z_units = 100U;
    msg.speed = 0.0151170446176;
    msg.speed_units = 196U;
    msg.bearing = 0.63894176722;
    msg.cross_angle = 0.565697121134;
    msg.width = 0.426908585378;
    msg.length = 0.215058794379;
    msg.coff = 232U;
    msg.angaperture = 0.932387898543;
    msg.range = 64906U;
    msg.overlap = 48U;
    msg.flags = 80U;
    msg.custom.assign("YVVZYMWKDHWFFODLVWJCFJECASXRNSGAVSDWRXAHINBXKCTIWYPYGIFCYKOPVNYCEWNZQTIFBSMMQMPRDILJLRUKLJUEIERGWUCPOCXSEOXIAAJXYGVOCPLDZLHFENABYUZGZSJGSOOFNMHNMJTXTJHRKMHQKABHVGHMKCOLDZTCXWSDSQBOPIPPPQKJFTQYZDKEVUWNTIGBPALJUDUI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.986371334623);
    msg.setSource(55035U);
    msg.setSourceEntity(189U);
    msg.setDestination(50674U);
    msg.setDestinationEntity(101U);
    msg.timeout = 32615U;
    msg.lat = 0.123928229204;
    msg.lon = 0.137151228352;
    msg.z = 0.0692250715956;
    msg.z_units = 26U;
    msg.speed = 0.056043849195;
    msg.speed_units = 27U;
    msg.syringe0 = 112U;
    msg.syringe1 = 115U;
    msg.syringe2 = 236U;
    msg.custom.assign("AQXIGQLXROQGWZJHGIEFYIYLRTQMBRZSGFYGVBTTUUKZTXNHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.785555145059);
    msg.setSource(29963U);
    msg.setSourceEntity(103U);
    msg.setDestination(3846U);
    msg.setDestinationEntity(53U);
    msg.timeout = 15942U;
    msg.lat = 0.583924548738;
    msg.lon = 0.350014157582;
    msg.z = 0.813952767175;
    msg.z_units = 11U;
    msg.speed = 0.250422329475;
    msg.speed_units = 44U;
    msg.syringe0 = 225U;
    msg.syringe1 = 155U;
    msg.syringe2 = 90U;
    msg.custom.assign("XGDMLZHCKLVMOWQVRGLXXAOVUBLSEWASXKRNEMDDSNGDZNALVBPESSITQBBYOKHGOECBBCTVDLYHUTQMUKNGAVYOUYKMOFZDCJHEXRYWPQWQFGETCNYSWKFIJTAAUKWRJOYIIRFCJEHGEQLELNBMHIPHLMYANRYEZCODDSAUNTGLBMUJIARCIHDJIZFJFIXJPMCTFNPRCXZKBXQSUKWWXFMTPZFRPWWQT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.6997280492);
    msg.setSource(44706U);
    msg.setSourceEntity(204U);
    msg.setDestination(13516U);
    msg.setDestinationEntity(79U);
    msg.timeout = 10421U;
    msg.lat = 0.606712925513;
    msg.lon = 0.573065329567;
    msg.z = 0.830370688541;
    msg.z_units = 222U;
    msg.speed = 0.862722444866;
    msg.speed_units = 233U;
    msg.syringe0 = 173U;
    msg.syringe1 = 244U;
    msg.syringe2 = 191U;
    msg.custom.assign("YJHEHNMGFFBYFNUUIZODIYTDJKKJDGCSEXCRIPNNUJIUVOUCVQRYLGURCWVHAWQOKUECZGDZQQXBLRDYQQPAUAEPMBOPCEHBNXSDRHHBLOEVSTKDAGHUIFENDOGITCRAT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.308747875993);
    msg.setSource(39083U);
    msg.setSourceEntity(136U);
    msg.setDestination(1047U);
    msg.setDestinationEntity(96U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.682367708259);
    msg.setSource(60817U);
    msg.setSourceEntity(6U);
    msg.setDestination(53838U);
    msg.setDestinationEntity(202U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.240760821151);
    msg.setSource(64765U);
    msg.setSourceEntity(109U);
    msg.setDestination(13863U);
    msg.setDestinationEntity(190U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.46323594622);
    msg.setSource(17260U);
    msg.setSourceEntity(66U);
    msg.setDestination(6624U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.096577918972;
    msg.lon = 0.308474993705;
    msg.z = 0.0504095321486;
    msg.z_units = 52U;
    msg.speed = 0.112089404836;
    msg.speed_units = 146U;
    msg.takeoff_pitch = 0.565459043923;
    msg.custom.assign("SAUBPXYHJUKYEKSTNPKZPFDVUVTFCJOTCDCYQSMXGZXOHDMGGFWWENUKNPUYYICRGUBZDRNBQKZLYEXNBJZLLVNBNCRGGAFWEALJXXXUZFOIIEFCWJRHQWJDQZUPZJNJHITLJSDEQAKAZRTTT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.255130239831);
    msg.setSource(60107U);
    msg.setSourceEntity(107U);
    msg.setDestination(38819U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.857988938032;
    msg.lon = 0.374516496949;
    msg.z = 0.261175714356;
    msg.z_units = 216U;
    msg.speed = 0.844054504207;
    msg.speed_units = 245U;
    msg.takeoff_pitch = 0.206329736718;
    msg.custom.assign("NOJJGDXZXOVGKDVWQYLBHBMCPTPTUELYQFFYQOOAZXRXUZRWVCZVZMBPVWSDSYICBDBCWVOXJXTJVOHLKIQYLWRXGIGSYDBF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.783069026087);
    msg.setSource(63252U);
    msg.setSourceEntity(68U);
    msg.setDestination(56928U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.880455826076;
    msg.lon = 0.189900366036;
    msg.z = 0.430398065523;
    msg.z_units = 73U;
    msg.speed = 0.618304661431;
    msg.speed_units = 183U;
    msg.takeoff_pitch = 0.651455842514;
    msg.custom.assign("SRXSCBXJXWQDJNUUSPPGBAANKAOZDTPMUMZWEFRUITYOLUMSIIRCWNCPNGQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.621281759128);
    msg.setSource(31414U);
    msg.setSourceEntity(154U);
    msg.setDestination(37988U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.338289485136;
    msg.lon = 0.619787735002;
    msg.z = 0.567666365859;
    msg.z_units = 149U;
    msg.speed = 0.389405422686;
    msg.speed_units = 61U;
    msg.abort_z = 0.711366195578;
    msg.bearing = 0.521966312828;
    msg.glide_slope = 89U;
    msg.glide_slope_alt = 0.931595052693;
    msg.custom.assign("HBTRTTWLYKFWALOSSXMYKJUYAHBGZZCRRKEKLWNNIBYCULXZUFSMZWQQCDEQXEUZMFQVGHDLYRCGHTGIQJDDCWPDSOTMAZPXBMJRQROWYIUEJPUAESYNKERPTEFPCHFTHBCGISAOPEOOHVHBBNOIDEYMOCGXRPVOUFXJLQSBKXQLAUZN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.564116718917);
    msg.setSource(30467U);
    msg.setSourceEntity(58U);
    msg.setDestination(29273U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.480580944765;
    msg.lon = 0.3623771303;
    msg.z = 0.548272604068;
    msg.z_units = 227U;
    msg.speed = 0.853505583544;
    msg.speed_units = 200U;
    msg.abort_z = 0.947809512677;
    msg.bearing = 0.839521911126;
    msg.glide_slope = 64U;
    msg.glide_slope_alt = 0.971586145022;
    msg.custom.assign("LFSZJVUFNOQQGGCIZRBWNLGCKNEDSWYHVMFUDGJDAHPXRIWVELDRUBKBCARZVQTKUIVMZVAOOAOMHPMYHAZKMJYVYAQDMBKHQHALJXEDONLSPUSZECYCOPFBKBARLYCWBTSPCISOVGHIJGJKNFRQEQMERHKJULQBXHUWYMWKGFSFCOUNUDQT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.614160196355);
    msg.setSource(48895U);
    msg.setSourceEntity(79U);
    msg.setDestination(64911U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.621420173878;
    msg.lon = 0.017001245662;
    msg.z = 0.733911837894;
    msg.z_units = 182U;
    msg.speed = 0.727928892345;
    msg.speed_units = 41U;
    msg.abort_z = 0.450132613991;
    msg.bearing = 0.692156417222;
    msg.glide_slope = 171U;
    msg.glide_slope_alt = 0.900945723392;
    msg.custom.assign("VUWUUCLONRQVNSCHUWCDDFAGDMOMPBGGOVKXTEVHQXEKFNCNPQPLXOIWXDNBUPYQUAXGJPVWACSEGZTPHUSIIPSWNUJKCI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.171246561889);
    msg.setSource(12397U);
    msg.setSourceEntity(136U);
    msg.setDestination(60187U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.949403216104;
    msg.lon = 0.395193280231;
    msg.speed = 0.150714618981;
    msg.speed_units = 81U;
    msg.limits = 163U;
    msg.max_depth = 0.00172387044107;
    msg.min_alt = 0.280414435693;
    msg.time_limit = 0.988696468839;
    msg.controller.assign("ABBWMCYJYAGGHLUKMREPUBFWMIBBZJMUBQOZOQMIVTVDKFTGVGDTJWDACCN");
    msg.custom.assign("DXNVEHTNCJUPVLKKLXHGUMKW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.0484674332806);
    msg.setSource(60128U);
    msg.setSourceEntity(109U);
    msg.setDestination(23189U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.215648471709;
    msg.lon = 0.884209216902;
    msg.speed = 0.411860119777;
    msg.speed_units = 76U;
    msg.limits = 152U;
    msg.max_depth = 0.0498251193495;
    msg.min_alt = 0.814731224086;
    msg.time_limit = 0.04842733907;
    msg.controller.assign("WPRXXUMARWBHTJAXSQBVOLNIEIQRTJMNZFSBIKKBMFFMGNQTVWAHXICLDPPVDCUMUSMIOYLGVJPUHOCUGBAVHEQLBCASBSRTZHNSZFOLSMRJDHU");
    msg.custom.assign("VGEPYEFJICWXKUFGZJYHLZUKBGBRHTZOYERFHIUKAEDJBITCHCBWLSHPVGCAVKDQACZMRLMJAFSUIXDQGZWOSXLTXRNMTOIWTNPUQOPOLOPDS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.694973309893);
    msg.setSource(53972U);
    msg.setSourceEntity(211U);
    msg.setDestination(15745U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.721239651739;
    msg.lon = 0.98197155203;
    msg.speed = 0.0187688285139;
    msg.speed_units = 120U;
    msg.limits = 147U;
    msg.max_depth = 0.140017499322;
    msg.min_alt = 0.474591384523;
    msg.time_limit = 0.774613509554;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.542378419366;
    tmp_msg_0.lon = 0.643921683853;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("DEOEXFMIDWALOTFQHXFTGHLTZXXZMGJVRBQDMUJUAIZWELSPUINRFAUASCURBUNQXTLWAQCATCMNDGQEJOOOAOOGFZYGVTZWLNUBJKLCADJSEMQ");
    msg.custom.assign("MLLPWEJNZMGWITVKHDNJILLRSHRRLRMAYKAYNWTGHUAOYUCXUTVGPHOUGY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.915409847021);
    msg.setSource(14923U);
    msg.setSourceEntity(39U);
    msg.setDestination(50186U);
    msg.setDestinationEntity(237U);
    msg.target.assign("XZPZQKXRFYILCIYXLRWJKTPYREXUAWAHNEWFOPMTTPIKZEQWTYIVWFRHNFPOAHGZNJUZGBSIKEONBTQYTE");
    msg.max_speed = 0.243997912663;
    msg.speed_units = 79U;
    msg.lat = 0.024590845742;
    msg.lon = 0.0308210453409;
    msg.z = 0.632271162993;
    msg.z_units = 122U;
    msg.custom.assign("NTLIHQXIJMCIURKXQHTSWDUJWKCQUSSZYMCKGVOLTJEYDOMGKMOOBQOKLYACYHPVBHZFHIAVQPEFGGIADWDCWYVNJJDWSBTGLARFWKAZVBHZERHTLLNBDOLPFTWXK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.840510517742);
    msg.setSource(52052U);
    msg.setSourceEntity(122U);
    msg.setDestination(20584U);
    msg.setDestinationEntity(103U);
    msg.target.assign("BWEMBDOPJPYWHCLVOXNEASWYLEHMLHEFDYGXAMBBHCXTQERISPMIOEUYMDRROVVYVCGHSQLFDUJKIDRGUQCAICDPNSUIKZGSTMUYWXEVEJSZLPSDQWTTFWUPPSQFJXCLZIBGPAKZZJNOIOYOXZNW");
    msg.max_speed = 0.790712635152;
    msg.speed_units = 218U;
    msg.lat = 0.345695871262;
    msg.lon = 0.838059679284;
    msg.z = 0.431097341365;
    msg.z_units = 152U;
    msg.custom.assign("GDIGYEXDTQCOXDPPNGGYZBKPIGURCKIYMAFIJVFBMBSGYEMZODVBZMEWMTJMZLGWSHSLKJTCNLQYAMADWNSVUUFWRQWZIYGVBBAHUQLTMUICTEVBGWKVKLUYXUEIPPOUODMWJRHUIBAJMLTTJZG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.599290586936);
    msg.setSource(15883U);
    msg.setSourceEntity(198U);
    msg.setDestination(37789U);
    msg.setDestinationEntity(7U);
    msg.target.assign("AEVQXJPPCQNVAVXTDUZTCMEFOWYZGIJOMCKQPLZWOSJZCXEDKUMIEHRRMLVSTKCGEBIDIFOXSCGUBMXKNROLJSOYYYEGAHJRFRZLTOWIQRWSMPTMMGYOVWPWRJZRBLUUBG");
    msg.max_speed = 0.755966159699;
    msg.speed_units = 207U;
    msg.lat = 0.077324441154;
    msg.lon = 0.0424306897837;
    msg.z = 0.0749329749898;
    msg.z_units = 222U;
    msg.custom.assign("RRRZALOWFAJIXUXGDXLIBMXVXXJFJFIGORYNNWKIESUCCKPQIULYRIOTYPMZXASMKHUQSNAZXOCJZWBWJBBONWDTQIDPLLWZHHVMOAJILMQELVYFKCKHSBGTDCSPPRQAOKNYHZGPZEBTFSEPVQOCIQMYFPFNGVKCDNMBQRFHDVGTPJURAYGVEYIQJDZEUNWTYSJFTWESVAYVHUZHGWUWMFXDLOOERUNGEMNBDKHB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.810393589763);
    msg.setSource(56347U);
    msg.setSourceEntity(20U);
    msg.setDestination(21103U);
    msg.setDestinationEntity(111U);
    msg.timeout = 52581U;
    msg.lat = 0.515614466268;
    msg.lon = 0.0237052384559;
    msg.speed = 0.623451016467;
    msg.speed_units = 2U;
    msg.custom.assign("WZJTAVRKAVMQMHCSUOPLAPXYLGAZEQEYXUHSMEQRKOQCQSGHCFPFMUBWGIAXIKXRJFTWWNQBATFNLTYBYJWRFUWZTHFCJZWCNQDPMUZDDTMZOBIGZIREAUKZGLLGDSDHPONCHVSIUDMPNSRFBBYK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.377827957811);
    msg.setSource(53674U);
    msg.setSourceEntity(90U);
    msg.setDestination(29639U);
    msg.setDestinationEntity(39U);
    msg.timeout = 31877U;
    msg.lat = 0.0596121983437;
    msg.lon = 0.326370625183;
    msg.speed = 0.434321164465;
    msg.speed_units = 149U;
    msg.custom.assign("QSUDXIBLMRWMWEXRZYLDIIBIIHOHGYCWSDXQYAHEOALMRUGCTHSPUBYVNIZMWTU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.955301782479);
    msg.setSource(56154U);
    msg.setSourceEntity(100U);
    msg.setDestination(36996U);
    msg.setDestinationEntity(203U);
    msg.timeout = 39787U;
    msg.lat = 0.444379294521;
    msg.lon = 0.1967800967;
    msg.speed = 0.585948483407;
    msg.speed_units = 204U;
    msg.custom.assign("MFYNWQQGCECJZMACHYSUSEAIGKNILTVLXYZTFCOQQPKFOBBUFZAWLISDYOEVUDKDDWPJQGNEBBSMZPBMRTIRLHZCHBQREFHOZLNCKLKITVMUFIJJAGRVYFYBPULPDWPJNTPFHKBKJN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.679115956168);
    msg.setSource(11902U);
    msg.setSourceEntity(140U);
    msg.setDestination(33009U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.134909660499;
    msg.lon = 0.0600712068138;
    msg.z = 0.163978138165;
    msg.z_units = 217U;
    msg.radius = 0.11390016385;
    msg.duration = 53674U;
    msg.speed = 0.484939500662;
    msg.speed_units = 53U;
    msg.popup_period = 15267U;
    msg.popup_duration = 10874U;
    msg.flags = 202U;
    msg.custom.assign("FOEZHIGSENROBQMC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.327875339992);
    msg.setSource(32773U);
    msg.setSourceEntity(96U);
    msg.setDestination(49006U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.790667812907;
    msg.lon = 0.762536074206;
    msg.z = 0.37317949937;
    msg.z_units = 55U;
    msg.radius = 0.796416141959;
    msg.duration = 65330U;
    msg.speed = 0.531310225615;
    msg.speed_units = 76U;
    msg.popup_period = 22516U;
    msg.popup_duration = 63148U;
    msg.flags = 8U;
    msg.custom.assign("UUKUMFOUXDRFHQLPDSLYAZGTZMCEXJWQHRRRLCHEKBBQLHQGABMAEAAHMIWFTDTESRSOVQZXDZUAOSYMJPNJNSITSGRYTFCGMQWONXVBF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.653194569655);
    msg.setSource(45473U);
    msg.setSourceEntity(215U);
    msg.setDestination(49052U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.881027058947;
    msg.lon = 0.624253110551;
    msg.z = 0.280340302448;
    msg.z_units = 209U;
    msg.radius = 0.58757329937;
    msg.duration = 49115U;
    msg.speed = 0.793491705029;
    msg.speed_units = 77U;
    msg.popup_period = 7135U;
    msg.popup_duration = 10997U;
    msg.flags = 200U;
    msg.custom.assign("LJCAKMDVUFGDUFMBGPCD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.731563363841);
    msg.setSource(3856U);
    msg.setSourceEntity(252U);
    msg.setDestination(44420U);
    msg.setDestinationEntity(80U);
    msg.timeout = 47115U;
    msg.lat = 0.236905991948;
    msg.lon = 0.970952208112;
    msg.z = 0.568203207596;
    msg.z_units = 149U;
    msg.speed = 0.383555269997;
    msg.speed_units = 237U;
    msg.bearing = 0.107943682968;
    msg.width = 0.54710524775;
    msg.direction = 56U;
    msg.custom.assign("OVFIDLYKDUNVGRGGTJIURLVBPSQRCGSAMEHQCWWOYX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.396790513117);
    msg.setSource(26642U);
    msg.setSourceEntity(159U);
    msg.setDestination(42358U);
    msg.setDestinationEntity(96U);
    msg.timeout = 53389U;
    msg.lat = 0.487696455084;
    msg.lon = 0.955690883806;
    msg.z = 0.465131078984;
    msg.z_units = 219U;
    msg.speed = 0.954137334758;
    msg.speed_units = 198U;
    msg.bearing = 0.952385859121;
    msg.width = 0.890091385915;
    msg.direction = 233U;
    msg.custom.assign("YSJQMIHNZJNDTQECGAUCMMEBJBGTJGHQPHOFAMXRCLAPOUCTXVKOEWNDZUHRMRBDKNUEFSBIZORXDYSIIPZVUJLTBCWXEGANHXXLLYGPDIQWEAHFRQAGASFABWYRZQPGVVFBKEOGKMQOTUOPSZXYFQUICYKDVMLPEPMYDWMMVKZLYDFNH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.355280386768);
    msg.setSource(36005U);
    msg.setSourceEntity(149U);
    msg.setDestination(903U);
    msg.setDestinationEntity(34U);
    msg.timeout = 63284U;
    msg.lat = 0.52861233926;
    msg.lon = 0.0805546222944;
    msg.z = 0.961065461222;
    msg.z_units = 16U;
    msg.speed = 0.953417280369;
    msg.speed_units = 197U;
    msg.bearing = 0.479441657864;
    msg.width = 0.811577457417;
    msg.direction = 171U;
    msg.custom.assign("PZWGRBRVGJISRWWJOTVAZXQAMMYBHRAKGBKCJGMIHOSJUKYQQTZQQIYPPTHDLMKUVNOBUIJFRVOYWFVOIHWSOAPMJFEPUFGETHWIETICXMRTD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.490738605496);
    msg.setSource(61159U);
    msg.setSourceEntity(165U);
    msg.setDestination(8726U);
    msg.setDestinationEntity(249U);
    msg.op_mode = 139U;
    msg.error_count = 58U;
    msg.error_ents.assign("VMLSOOLFCUCGXVZTFJKJLNIRXALNFLYFYFYYJACAWOSUEWPLEEUJMSXCBXDJIBLQTGYBBUOWVRZMZKGIPPGQYIHUMKWSNCXKUGTDRRMKYLRTDVVPWWHFCHDLVEEXNZJEGSDUQNIQKNSEVUUQQSSJGYTLFINPZKAQKARVEKCRRGHSVAEWYDDFDOEBTDNDZK");
    msg.maneuver_type = 54077U;
    msg.maneuver_stime = 0.392035810516;
    msg.maneuver_eta = 56131U;
    msg.control_loops = 1067843503U;
    msg.flags = 151U;
    msg.last_error.assign("NCILQMQNKFRDULKJVGDPLIBJXEEGQRYCFBOWCPROWKYUNZLFDFLMBJACXOTP");
    msg.last_error_time = 0.550141389317;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.0700103784045);
    msg.setSource(26530U);
    msg.setSourceEntity(28U);
    msg.setDestination(1546U);
    msg.setDestinationEntity(241U);
    msg.op_mode = 197U;
    msg.error_count = 241U;
    msg.error_ents.assign("OLCEYMKSFOGHWQDAZYHWAYRWXSIDVDFZVUWAMYBEBZYPESNVHJUWZASKIFDSLLXDJDUZMTGCIVOEPLNTRKZFCFAUCQJJCDKHJGSBOTYQLJUXNCOUBRXKSSUGWJULORBNNFAQSFMQTAXILMDUOMMIDVOQXHEBUCWYTRWFGPGVJLYLEXOHFNXVNKNI");
    msg.maneuver_type = 34501U;
    msg.maneuver_stime = 0.865252935326;
    msg.maneuver_eta = 10871U;
    msg.control_loops = 4203638465U;
    msg.flags = 93U;
    msg.last_error.assign("DPYTJLFUWEKYEKFGUAYFQZCWYEUSORBXDLHELJAFNXWPNKHRGFNOLZAQETVOIOGCNOLBQLZDUNDIFBDQMGMITUZPGDFAXARAQFVYBHWESRDJCXRZHF");
    msg.last_error_time = 0.627076804925;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.401286011079);
    msg.setSource(60204U);
    msg.setSourceEntity(217U);
    msg.setDestination(17584U);
    msg.setDestinationEntity(50U);
    msg.op_mode = 101U;
    msg.error_count = 242U;
    msg.error_ents.assign("KXHQUSDQBQPYAKEVEQANWHIMHFZTWAIDJTWBNOUWIBLRGRPSNXKMMLYGCYTDWJTUAULCUJFCFTPEKRVNOJFUIAXJGNIEYCTDWYKTSQOZPOZZVVCOEYKVEAZXGLMMOUTYENUHWHPGXHRMDMDAHPOCBIKWSWCIHGKVZQRSDPNPDMHIQAMZLXBJKQAFOBEFVNRVMUJZ");
    msg.maneuver_type = 34410U;
    msg.maneuver_stime = 0.734820501799;
    msg.maneuver_eta = 22002U;
    msg.control_loops = 601922654U;
    msg.flags = 235U;
    msg.last_error.assign("AKTKGONXKLRFDPLKAMWNXIJZVLJWUMBTUGWPYGYVCHCFCVPVMESQSAIVGUCESYHDMZEILFVULEXKTWHABHOVONHIOYYJIWGLNCSNHQEXMVQADQJFXUPECETBAQTXMKTPCQTNFKBBEGAUWMTOQAAFUEPHUZDDZLBODSWMZGRUQSFLRXDYRKKOPSIBGVQNGRRJBRJZO");
    msg.last_error_time = 0.950159830358;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.734494519307);
    msg.setSource(17544U);
    msg.setSourceEntity(97U);
    msg.setDestination(61396U);
    msg.setDestinationEntity(153U);
    msg.type = 33U;
    msg.request_id = 56153U;
    msg.command = 1U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 4274U;
    tmp_msg_0.control_ent = 62U;
    tmp_msg_0.timeout = 0.402528565516;
    tmp_msg_0.loiter_radius = 0.572511750246;
    tmp_msg_0.altitude_interval = 0.347896777303;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 64103U;
    msg.info.assign("TEKZHGKXSSWQPRGXUJSDXHUGVCPLMKFFZHEMNBZQVVATDYRHTTWOIZCDCDDPLBYLKFJTXJZUXVGSYGRMIUWMNRASFZQFWIDCENNMQGSPLALQFPBLZNHWOUAYGWBCMRKMVRIQYKGIFDQEONETICFKJEEJFAVPPVNEYQCALRUKPVCTBXIWUIJID");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.506384694581);
    msg.setSource(58855U);
    msg.setSourceEntity(165U);
    msg.setDestination(50661U);
    msg.setDestinationEntity(214U);
    msg.type = 138U;
    msg.request_id = 60999U;
    msg.command = 240U;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.531204707499;
    tmp_msg_0.lat = 0.151010588051;
    tmp_msg_0.lon = 0.968733367361;
    tmp_msg_0.z = 0.84669632571;
    tmp_msg_0.z_units = 160U;
    tmp_msg_0.travel_z = 0.766865419707;
    tmp_msg_0.travel_z_units = 69U;
    tmp_msg_0.delayed = 188U;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34454U;
    msg.info.assign("PFSBURORYLMCUPIBZOTZXMCXLPTQJFWYRKCZDRAONPVEDBPIGVLJMWFHBGFRQNADSCUGDXFBPWNSHACJACCZQZGCROWFSZJEXGHTCBIPKMEYJQBPMMWNGUHTZNZJFXAIRLWLRLVVDHKORYTNMTGKIDLSGEVORUYYNAHMCWXOBQKWUJHHEDNWEEALSXPKBGAIKMUXXJAOZOTESVBUKTSDIKDHHVTDSUTGYSAKMUFYNYZWEFQQLJIQEYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.652113086376);
    msg.setSource(33915U);
    msg.setSourceEntity(150U);
    msg.setDestination(6578U);
    msg.setDestinationEntity(165U);
    msg.type = 27U;
    msg.request_id = 7762U;
    msg.command = 167U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 4104U;
    tmp_msg_0.lat = 0.555176360197;
    tmp_msg_0.lon = 0.792052378148;
    tmp_msg_0.z = 0.932955227329;
    tmp_msg_0.z_units = 231U;
    tmp_msg_0.speed = 0.807649652486;
    tmp_msg_0.speed_units = 12U;
    tmp_msg_0.bearing = 0.65901350256;
    tmp_msg_0.cross_angle = 0.260526043306;
    tmp_msg_0.width = 0.730754525016;
    tmp_msg_0.length = 0.815731227558;
    tmp_msg_0.hstep = 0.10051688418;
    tmp_msg_0.coff = 235U;
    tmp_msg_0.alternation = 163U;
    tmp_msg_0.flags = 84U;
    tmp_msg_0.custom.assign("PTGVVYVEINWLCXKXYDPNKDKJWNKQTGXJMDGYDPHZFYPLJNHYQEBJFVUZSHXEWCZJKKNAMDNROTYVRBSBUTGODRESGVSOJFASSFZYFFPBIOVDPEUDPQLILXLEIBPYDMSBHZEKAMALMQHYLZCCHVHQFNOQAFRSXEUPMUTOOAWXJWIAFALTZMCNTWNCLBGVIFQWRSTAGZMJCZRBXUIASUCYKCXGMIWTOPUQRRQCWUTRNEXQOWIM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7603U;
    msg.info.assign("RQVOQUZUEYTLSCSH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.557449083503);
    msg.setSource(36680U);
    msg.setSourceEntity(184U);
    msg.setDestination(62035U);
    msg.setDestinationEntity(63U);
    msg.command = 246U;
    msg.entities.assign("VZIEOFQNJCRJKWRGDRWMCKICUYAVJUQDJULIVVPXQTOQXOOBFPXNVJWWPNYGJKLYNURFXFFDLPMIVPUVSJIUBOZXVRFYGNFNUTGTIICIBOSNUTTXQMAZSUMBHWNHBMGWPWICARDQFJTMKLBGDPSTGLIEOKNJMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.597836477721);
    msg.setSource(25236U);
    msg.setSourceEntity(195U);
    msg.setDestination(2380U);
    msg.setDestinationEntity(64U);
    msg.command = 125U;
    msg.entities.assign("VVKRDOHVCVCMTSSAWDJRKSPCRRBVX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.430787400636);
    msg.setSource(4025U);
    msg.setSourceEntity(224U);
    msg.setDestination(58410U);
    msg.setDestinationEntity(137U);
    msg.command = 228U;
    msg.entities.assign("PKJGOZNGWGILFTWGMFSFCANLYCNSVAWCNSRJSQVNTLBCSGOJZXOPHSVVTFQJWVAIHPIDOMCKKQLUUNYAZMCXCRQHQTDKAYYWTAUGVHFZVDNXNRLZCJHFXLDZAXYYBOUXGITBEWJEVKONJJHZDTKEAKBFAZDDHLBYCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.22439216824);
    msg.setSource(59508U);
    msg.setSourceEntity(21U);
    msg.setDestination(12698U);
    msg.setDestinationEntity(111U);
    msg.mcount = 213U;
    msg.mnames.assign("XGYDWEQFYCNSLNEAWVHXTNUSLJNJQPGEFIDHVRWOFAYZBFJDSEUUMNZXJRILRGFVQBTQILGWXWAWSMSPSBCSKONVPWHRGGIASZOZOLCZKWDTKRNCYFUTQDXZJRELDUMNILUCOCEZQJKDMKWCHZ");
    msg.ecount = 49U;
    msg.enames.assign("GWEXJBYVZGTTIBJCTQWMHESGRJITMFGZKJNHFWPCMQNCEFBOERAFGYBKQISRHYCODQSSMBMASIADESEFNKMYMXBE");
    msg.ccount = 200U;
    msg.cnames.assign("UHFPIYUKRYRWQPSDYGIGMZBNLVSJNIIZAHNKSWTBWRXHBEWFEMLPQGVBNAZDBLJQVZNVJPTDJJAZEROCHFXFYKLHYIZEJDEMPFYMYNXIDVBMLQTTXWRVUDCULWFYUQBGRPOACZSCUMJSZEKZIULLWWFUUPVORKXDMWKPVYRNSGHIFKOTCKKQIXXCVAETMLHGOLQTSSQGVRWOOOGGNRIQHEADSXFXCMBASNTFBZPJJDPHC");
    msg.last_error.assign("EJSUSWENUMFLNQLTEQNZWKEJBKJPXSMBFLVZYUZTBSBTVGYHPLBMALFOPICPCKFWVOCPYFCRFJGSXXDHKFDACWO");
    msg.last_error_time = 0.0878393207969;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.604821424379);
    msg.setSource(58504U);
    msg.setSourceEntity(10U);
    msg.setDestination(25604U);
    msg.setDestinationEntity(186U);
    msg.mcount = 119U;
    msg.mnames.assign("FSOOBGZDOHKJAGWGPJMEQQFHTFWF");
    msg.ecount = 81U;
    msg.enames.assign("MTBNQBPWPKOXOUUBPVUDOUVYSEGZPPCYAIFGLQHPDFVJTKCGCIVNAXGBOHECAZMEIPAAHXXPHUGGVQAEBKTZWAPEZYHXZSTMJIVLRZNSXIWOHSIQZRRJ");
    msg.ccount = 129U;
    msg.cnames.assign("VGUUIHOVNGBFZHRTEONQHPZQQYCSMLMLUKKDYPNRRWATXYJZYLXUD");
    msg.last_error.assign("KMJNKZAVHHBUQFRUZXRRZBRKFMSDHHTXVUXADIYPHKMNRUZDIPUVBYELEEQBQLQMOAOCXTZHXSLZODSENKOWGOVVCUXBPVIOCYLKBIFTTUPNDYZLAIDGTFDQIVFNNMRQJPGCUFMCVXWHFNQTNJJICFFIHKSPLSGPTBJEAYGRQWJANRDAWXEZJPGGJNUBEIHCZYY");
    msg.last_error_time = 0.461676360177;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.635317536809);
    msg.setSource(31263U);
    msg.setSourceEntity(215U);
    msg.setDestination(38863U);
    msg.setDestinationEntity(156U);
    msg.mcount = 75U;
    msg.mnames.assign("LNAJZHZLWLXMYJXSCPHDUWVVEJGQHSRIJFLVITWDH");
    msg.ecount = 188U;
    msg.enames.assign("LYMWDKJFVTPAWQRMYIYCKFUQOXRIUCOSBDCDWIBLWEUOZGLXVDCYOFXJRYNMBHOKZEDTQVHMZZUUSHXZVWNDGGECFHGAULOSQTKCGYYIZSMEWPEDSJUPJASIABERTAORFKYBLMXSGWOJJAKIBCBHQIYJDXETANTCGGNPVALCPAVXBKVQRHWLGDWOPRUQGJXRFPBFIHEIBQDNPMMNJZFANFLHCYTFSKUMQRJTPETHLWZE");
    msg.ccount = 225U;
    msg.cnames.assign("WYOFLUHDKLQNUYQASTRJBYFJTSOWQMQMVKYHVORYZIEPEZAHQIMHICFIKPWGLCNGESXYYBAXRXTGYDTACYNCPZFNWOSVRZMPFODOLUWRBAWBOSBVKMVGGQGXHNQERREMXHFCBWJMHVFDRGRSXESPJCETUVAZUSNBDVFGSKBQXOPZPJWUYUWTEVITALCPHDJJIKAXNMKKVKUTM");
    msg.last_error.assign("MIMNXSKZJSBJCVTHPJMGWCPPYSRHHKOABZWSFLJDYVAEIUWLKDZNKKRQEBORNANIXVORPCKXKMQEMBCAIHVJZUXMFZLBEOPTQILFGUUWIQVJLMUOHDCJFQEGRWZFAPYAKVZUTUUFICMYRGTHNEFKYTHPPXXGSWQDNZVFQYYXCLSQPYDECOXELOOMATMQQINVSBOJEDBCVRNNNYVBDHLH");
    msg.last_error_time = 0.941738039263;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.201121488564);
    msg.setSource(13029U);
    msg.setSourceEntity(219U);
    msg.setDestination(26874U);
    msg.setDestinationEntity(3U);
    msg.mask = 41U;
    msg.max_depth = 0.632253777039;
    msg.min_altitude = 0.271093513466;
    msg.max_altitude = 0.627272093902;
    msg.min_speed = 0.478586092092;
    msg.max_speed = 0.663793865848;
    msg.max_vrate = 0.885605647474;
    msg.lat = 0.544919854175;
    msg.lon = 0.748844013419;
    msg.orientation = 0.664895545208;
    msg.width = 0.492411875974;
    msg.length = 0.487449538068;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.449356807497);
    msg.setSource(31185U);
    msg.setSourceEntity(136U);
    msg.setDestination(55255U);
    msg.setDestinationEntity(246U);
    msg.mask = 94U;
    msg.max_depth = 0.53228113825;
    msg.min_altitude = 0.231998383965;
    msg.max_altitude = 0.825476669401;
    msg.min_speed = 0.928526998085;
    msg.max_speed = 0.84107984651;
    msg.max_vrate = 0.795602700166;
    msg.lat = 0.0671299231145;
    msg.lon = 0.110030895524;
    msg.orientation = 0.452414350496;
    msg.width = 0.646004987425;
    msg.length = 0.657094975722;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.66837977446);
    msg.setSource(34199U);
    msg.setSourceEntity(59U);
    msg.setDestination(27204U);
    msg.setDestinationEntity(244U);
    msg.mask = 102U;
    msg.max_depth = 0.573374548264;
    msg.min_altitude = 0.830058748876;
    msg.max_altitude = 0.898363082741;
    msg.min_speed = 0.355619334445;
    msg.max_speed = 0.7900298096;
    msg.max_vrate = 0.361893561196;
    msg.lat = 0.687240156393;
    msg.lon = 0.279129154071;
    msg.orientation = 0.841059315616;
    msg.width = 0.686793177557;
    msg.length = 0.597717986206;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.273357302798);
    msg.setSource(13162U);
    msg.setSourceEntity(158U);
    msg.setDestination(48334U);
    msg.setDestinationEntity(22U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.551410306949);
    msg.setSource(12476U);
    msg.setSourceEntity(153U);
    msg.setDestination(44896U);
    msg.setDestinationEntity(143U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.279213864392);
    msg.setSource(28518U);
    msg.setSourceEntity(212U);
    msg.setDestination(50793U);
    msg.setDestinationEntity(244U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.524831693938);
    msg.setSource(23466U);
    msg.setSourceEntity(194U);
    msg.setDestination(10161U);
    msg.setDestinationEntity(196U);
    msg.duration = 30079U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.921447679624);
    msg.setSource(23300U);
    msg.setSourceEntity(115U);
    msg.setDestination(32249U);
    msg.setDestinationEntity(161U);
    msg.duration = 15095U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.223561738839);
    msg.setSource(24264U);
    msg.setSourceEntity(235U);
    msg.setDestination(36088U);
    msg.setDestinationEntity(52U);
    msg.duration = 60432U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.40117246578);
    msg.setSource(41943U);
    msg.setSourceEntity(105U);
    msg.setDestination(6234U);
    msg.setDestinationEntity(249U);
    msg.enable = 73U;
    msg.mask = 2520812227U;
    msg.scope_ref = 1205972977U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.477001779282);
    msg.setSource(27350U);
    msg.setSourceEntity(122U);
    msg.setDestination(58500U);
    msg.setDestinationEntity(216U);
    msg.enable = 146U;
    msg.mask = 63972509U;
    msg.scope_ref = 3398636311U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.579502169369);
    msg.setSource(63487U);
    msg.setSourceEntity(201U);
    msg.setDestination(50172U);
    msg.setDestinationEntity(220U);
    msg.enable = 253U;
    msg.mask = 395721037U;
    msg.scope_ref = 303438517U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.176120817702);
    msg.setSource(10333U);
    msg.setSourceEntity(118U);
    msg.setDestination(14831U);
    msg.setDestinationEntity(240U);
    msg.medium = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.373266113226);
    msg.setSource(37885U);
    msg.setSourceEntity(226U);
    msg.setDestination(26617U);
    msg.setDestinationEntity(178U);
    msg.medium = 39U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.559500147691);
    msg.setSource(60334U);
    msg.setSourceEntity(170U);
    msg.setDestination(26966U);
    msg.setDestinationEntity(35U);
    msg.medium = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.031779516042);
    msg.setSource(22938U);
    msg.setSourceEntity(112U);
    msg.setDestination(64209U);
    msg.setDestinationEntity(14U);
    msg.value = 0.241085574467;
    msg.type = 147U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.935166105457);
    msg.setSource(28736U);
    msg.setSourceEntity(143U);
    msg.setDestination(8443U);
    msg.setDestinationEntity(248U);
    msg.value = 0.477097974344;
    msg.type = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.282175895917);
    msg.setSource(50913U);
    msg.setSourceEntity(190U);
    msg.setDestination(15219U);
    msg.setDestinationEntity(27U);
    msg.value = 0.873280845258;
    msg.type = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.315276707592);
    msg.setSource(21168U);
    msg.setSourceEntity(212U);
    msg.setDestination(50773U);
    msg.setDestinationEntity(113U);
    msg.possimerr = 0.94119571991;
    msg.converg = 0.313809321835;
    msg.turbulence = 0.981086655801;
    msg.possimmon = 54U;
    msg.commmon = 179U;
    msg.convergmon = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.648190660161);
    msg.setSource(15525U);
    msg.setSourceEntity(93U);
    msg.setDestination(55690U);
    msg.setDestinationEntity(54U);
    msg.possimerr = 0.0640488659061;
    msg.converg = 0.154917710289;
    msg.turbulence = 0.402067878584;
    msg.possimmon = 252U;
    msg.commmon = 109U;
    msg.convergmon = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.344263760374);
    msg.setSource(36055U);
    msg.setSourceEntity(87U);
    msg.setDestination(20344U);
    msg.setDestinationEntity(164U);
    msg.possimerr = 0.403789361433;
    msg.converg = 0.962349956667;
    msg.turbulence = 0.0549582105712;
    msg.possimmon = 168U;
    msg.commmon = 98U;
    msg.convergmon = 45U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.950604793438);
    msg.setSource(54686U);
    msg.setSourceEntity(12U);
    msg.setDestination(4771U);
    msg.setDestinationEntity(13U);
    msg.autonomy = 134U;
    msg.mode.assign("VBEVKISBOOATFIWPLCYFOLIDLMTBYWVAXVVJASYGDKVGEHTULRYUWZJIMYJTUHETHGZGDUFCINXQFRZUQGWKQRRFRBVEKOIXKPNXJFXCIOEZHBVNAIDTUPMTDSDRIXMSSBWKMQNJYHPQBAEYNZZGPC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.886049967414);
    msg.setSource(42942U);
    msg.setSourceEntity(44U);
    msg.setDestination(63046U);
    msg.setDestinationEntity(8U);
    msg.autonomy = 124U;
    msg.mode.assign("DVOIWGGMSMKYEAVJLUSOZYKHAHWHUTMZAQRIKTDUSYMHKPLNGRIZQKJEEFWEMFWUU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.232998778706);
    msg.setSource(64902U);
    msg.setSourceEntity(22U);
    msg.setDestination(15190U);
    msg.setDestinationEntity(232U);
    msg.autonomy = 88U;
    msg.mode.assign("PWSVXAOHLSAHKKKDOIFIIFQPSMBNJAJBTIVQNWRUPLVDASCBUNGVAXJXILHKEKYOTFYHDDHWDNGGZEBLGOSIWHNOCQKMJWXDTCZRPRJVDFXXXAOEEOOYVYZQNCJKIKWCHPRZUCZQLUGTRMPGBTFCNAAYTRLIUQEFTMCWPGRVMQESDAZFDYMBVKUQEUVRSUJLESXFCZLQTHSJOIGAMHMHNZZTJBSLMKDYWUB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.172621162569);
    msg.setSource(52595U);
    msg.setSourceEntity(246U);
    msg.setDestination(6476U);
    msg.setDestinationEntity(237U);
    msg.type = 24U;
    msg.op = 56U;
    msg.possimerr = 0.864520644604;
    msg.converg = 0.250797296414;
    msg.turbulence = 0.973256845289;
    msg.possimmon = 130U;
    msg.commmon = 225U;
    msg.convergmon = 88U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.29758459856);
    msg.setSource(19559U);
    msg.setSourceEntity(95U);
    msg.setDestination(33653U);
    msg.setDestinationEntity(95U);
    msg.type = 64U;
    msg.op = 102U;
    msg.possimerr = 0.484146364898;
    msg.converg = 0.159836540259;
    msg.turbulence = 0.178928100425;
    msg.possimmon = 176U;
    msg.commmon = 89U;
    msg.convergmon = 78U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.641302125089);
    msg.setSource(34654U);
    msg.setSourceEntity(120U);
    msg.setDestination(57005U);
    msg.setDestinationEntity(177U);
    msg.type = 70U;
    msg.op = 112U;
    msg.possimerr = 0.105731318341;
    msg.converg = 0.241176450558;
    msg.turbulence = 0.536914668724;
    msg.possimmon = 115U;
    msg.commmon = 99U;
    msg.convergmon = 34U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.140587649885);
    msg.setSource(29759U);
    msg.setSourceEntity(128U);
    msg.setDestination(62259U);
    msg.setDestinationEntity(73U);
    msg.op = 189U;
    msg.comm_interface = 215U;
    msg.period = 30834U;
    msg.sys_dst.assign("CBGWZYOBLTHOELFCAZNRWQCMLYKFUWNMDKYZRBXPWGPTSGKECKRPFBRINWSUGGYZHZADLASXEUJJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.119617558854);
    msg.setSource(32297U);
    msg.setSourceEntity(115U);
    msg.setDestination(18329U);
    msg.setDestinationEntity(173U);
    msg.op = 146U;
    msg.comm_interface = 53U;
    msg.period = 44163U;
    msg.sys_dst.assign("JTAWYGUOQCVTSTLBKCRVBJFGBVMCAAMUSEUHAOHCYNEIOFPLGZCPNGOURXJYHFJAIDFKVRBWFWNQBXEPMUDJHULAXYNZKSJSDKQQNSRMHIEMPDRNLAFGFARWHZHCQWRMVPTRVDVCQOLIXBMZBIIKLWOCGS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.697788756262);
    msg.setSource(61116U);
    msg.setSourceEntity(107U);
    msg.setDestination(58858U);
    msg.setDestinationEntity(170U);
    msg.op = 122U;
    msg.comm_interface = 169U;
    msg.period = 46890U;
    msg.sys_dst.assign("QKQTEGKFBWBYHETDIEWJJVBNCGZMVQZNFDUPSVTFGQTGTXSTBQDNXOXIPGHLQMFKAHHDLWHXQMAZSYAFYNLDYHVICSUWZNUREHGYHSYBZUBRBWOJIOPN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.4526443683);
    msg.setSource(48965U);
    msg.setSourceEntity(48U);
    msg.setDestination(37606U);
    msg.setDestinationEntity(235U);
    msg.stime = 3411822388U;
    msg.latitude = 0.781091036405;
    msg.longitude = 0.282971239725;
    msg.altitude = 9648U;
    msg.depth = 37098U;
    msg.heading = 62665U;
    msg.speed = 20909;
    msg.fuel = 93;
    msg.exec_state = 98;
    msg.plan_checksum = 9047U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.258905223334);
    msg.setSource(27668U);
    msg.setSourceEntity(55U);
    msg.setDestination(14963U);
    msg.setDestinationEntity(248U);
    msg.stime = 4062271165U;
    msg.latitude = 0.785345300327;
    msg.longitude = 0.249270335561;
    msg.altitude = 58873U;
    msg.depth = 23996U;
    msg.heading = 18683U;
    msg.speed = -14560;
    msg.fuel = -97;
    msg.exec_state = -88;
    msg.plan_checksum = 44284U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.100422517028);
    msg.setSource(43489U);
    msg.setSourceEntity(229U);
    msg.setDestination(45195U);
    msg.setDestinationEntity(34U);
    msg.stime = 2637202415U;
    msg.latitude = 0.434319642022;
    msg.longitude = 0.738644076245;
    msg.altitude = 28753U;
    msg.depth = 838U;
    msg.heading = 50201U;
    msg.speed = -3765;
    msg.fuel = 50;
    msg.exec_state = -100;
    msg.plan_checksum = 22792U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.115483364351);
    msg.setSource(30486U);
    msg.setSourceEntity(58U);
    msg.setDestination(11511U);
    msg.setDestinationEntity(129U);
    msg.req_id = 48955U;
    msg.comm_mean = 130U;
    msg.destination.assign("UXZLNEVAQYJESTZGSAWAWBNKPGGGQAFSVISHESIXHVIYJIFTCCRZJVEKMMEWTOZZLPBFKGQQXLAIJUFGEOUNTCMBUGWQKDUHORRZHIOWECUXMETTMUSLTNMACYZRZPGSXDCVYPJDGKDWFZRNBIKNICNLHTUSMBIAVFOJFJXBRJYDFYYPXPBQHN");
    msg.deadline = 0.625332887761;
    msg.data_mode = 15U;
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 15508U;
    tmp_msg_0.bearing = 0.879501931265;
    tmp_msg_0.elevation = 0.976849886928;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("AHNVRPBHMFAYEWWJCQOVJFPTMSFZUWPBRDDMTKAIEVOQADUGPLLYNEKPAQWXWHSKWFYTQZUKUZKRVPYXOGNZMOMFQMJGQ");
    const char tmp_msg_1[] = {-4, 71, -100, 116, 117, -79, -100, 26, 116, -20, 82, -68, 17, 83, -61, -125, 19, 106, 49, -13, 85, 26, 47, -67, -92, 108, -9, -112, 30, 60, 10, -34, -40, 31, -124, 72, 110, 11, 50, -95, 31, -50, 112, -72, 12, 80, 4, 11, 40, 27, -101, -91, -39, 124, 28, -13, -67, -89, -10, -58, 33, -12, -113, -93, 107, -41, 16, -56, 61, 82, 92, -97, 60, 95, -17, 82, 96, 32, 36, -78, -36, -48, 32, 52, 123, 4, 33, -44, 75, 111, -95, 27, 35, 115, 49, 80, 79, 74, 4, 107, 15, -16, -63, -9, -96, 17, 101, -67, 125, 6, -68, -54, 2, 83, 78, 34, -57, -4, 112, -77, -99, 116, 19, -7, 2, -110, 41, 34, -56, -94, 67, -102, 121, -94, 86, -108, 27, 96, -73, -70, -77, -28, -90, -11, 1, -121, 125, 10, 0, 103, 16, 41, 31, 69, -42, -76, -90, -23, -42, 80, 0, 30, -90, -90, 114, 75, 98, 35, -90, -109, -87, -15, -79, 82, 32, 72, 22, -4, 76, -47, -68, 16, 93, -74, 19, -76, -11, -101, -27, 67, 101, 105, -123, 17, -2, 44, 87, 103, 21, -115, 110, -110, 86, -18, -11, -25, -114, 15, 94, -47, -17, 110, 49, -93, -30, -91, -72, 37, -108, -23, -6};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.380256279263);
    msg.setSource(9903U);
    msg.setSourceEntity(16U);
    msg.setDestination(35019U);
    msg.setDestinationEntity(205U);
    msg.req_id = 60678U;
    msg.comm_mean = 113U;
    msg.destination.assign("KOQEVMQYVZFCNJZWWGRGNWSTPETKBQSZBFHWEAFGZJDIGVXOQEZSDZJLCTTXUYMXJQBPZNZINVCKVVLHCMWELJTHIXTSQCHMNYOVAMOARQ");
    msg.deadline = 0.198519029744;
    msg.data_mode = 189U;
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 128U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("TGTZZPFMVSTKTUEZUURGGBTIZFJRNPQNCZCYKOVVPHJPBQDVOUJQUHFAUGWGDOHURLENWBHKWGJAQIDBBCANUMXXPASOPJMLARL");
    const char tmp_msg_1[] = {-68, 32, -125, -10, 20, -38, 2, -25, -109, 49, 53, 44, 74, -59, -10, -47, -115, 49, 39, -48, 43, 79, -57, -33, -65, 118, -97, -104, -124, -126, -72, 13, 54, 115, 83, -116, -23, -110, -53, 27, 36, -55, -53, 59, 84, -109, 59, 106, -63, 95, -47, -102, 76, -116, -84, -107, 15, 33, -65, 107, -58, -31, 52, -39, 52, 75, 19, -83, 42, -1, 106, 54, -23, 75, -14, 60, 53, -35, 32, 26, -97, -117, 121, -111, -7, -104, -94, 50, -97, 42, -126, -51, 109, 88, -84, 54, 71, 24, -110, 96, 41, 33, -27, -81, 77, -109, -18, 36, -11, 96, 103, -83, -123, -70, -61, 51, 83, -103, -9};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.284670175051);
    msg.setSource(1741U);
    msg.setSourceEntity(22U);
    msg.setDestination(36979U);
    msg.setDestinationEntity(157U);
    msg.req_id = 30006U;
    msg.comm_mean = 124U;
    msg.destination.assign("XAEYIFIXGIJUIEMFJVPNBKYUXMXSGVSGDGOBIHNZUERWMFQRDSCTGONCFQUYZWZJKGPBVYETHQVPRSBDVXJELMUTZCKM");
    msg.deadline = 0.224926313512;
    msg.data_mode = 237U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 33369U;
    tmp_msg_0.lat = 0.587193049771;
    tmp_msg_0.lon = 0.624167597012;
    tmp_msg_0.z = 0.559607453664;
    tmp_msg_0.z_units = 138U;
    tmp_msg_0.speed = 0.813997368624;
    tmp_msg_0.speed_units = 63U;
    tmp_msg_0.duration = 28901U;
    tmp_msg_0.radius = 0.408412913063;
    tmp_msg_0.flags = 157U;
    tmp_msg_0.custom.assign("HNNBEXRGQHOGOYCMPABMU");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BGAFUMMHDRLVOUZQXQGZIJHYBRNBWHFKJHCQGSRQLVDKZRAXOVJCCKAJENWODQLVNSQLYTNSPQZBHHEYUMWTICOJHFOXAPIXGWDUYEZDBZNAHZJOPCZCFPIDYKBBGLMVYSTZOFMLUGBUTYRITBJLFXRJBJYDIPFIAFLWOKIAXNWETPICNURVKWUWRWSGVNMJVATCRCXNETIEDMPGMNEPOEFKZKQOGSEMLV");
    const char tmp_msg_1[] = {-72, -60, -113, 24, 37, -90, -34, -6, 83, -44, 17, 125, -128, 42, 88, -60, 73, 37, 80, 30, -116, 4, 111, -108, 61, 8, 20, 98, 91, 54, -15, -122, -70, 50, -94, 42, -77, 92, -7, -51, -126, 102, 72, 76, 32, -126, 42, -17, -109, -10, -63, 81, -98, 86, 5, -92, 30, 121, -31, -12, 125, 94, -126, 17, -105, 31, -17, -33, 5, 34, -89, 66, 103, -8, 60, 47, 46, 103, 95, -15, -128, 73, -65, 114, -53, -116, 98, -86, -98, -21, 48, 96, 33, -10, 16, 34, -26, -76, -31, 28, 27, -61, -5, -88, -92, 118, 48, 114, 40, 87, -92, 42};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.810266127741);
    msg.setSource(43023U);
    msg.setSourceEntity(205U);
    msg.setDestination(35004U);
    msg.setDestinationEntity(152U);
    msg.req_id = 26034U;
    msg.status = 13U;
    msg.info.assign("EMHBBHSBTIXFYLZDJDHPRQPVAMQHBTYUXFOTFVGZBBKOVNEZLQCWPDDIESOUAWEDVLSBJJLRGYKONLPGINXXEMMIAQLAHIJAYGDWYTIVMYRJXRAVJEHMLMHOGOUPTFIUKQTYDNMSOKLUZIZVVKZTDPAHPGYZRURNMCKOJCPRWXCNCHBSZSNWCUURTKFQK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.289212843715);
    msg.setSource(46579U);
    msg.setSourceEntity(220U);
    msg.setDestination(63899U);
    msg.setDestinationEntity(46U);
    msg.req_id = 47534U;
    msg.status = 136U;
    msg.info.assign("PWZWUQUHSERZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.230448005556);
    msg.setSource(7652U);
    msg.setSourceEntity(74U);
    msg.setDestination(50259U);
    msg.setDestinationEntity(25U);
    msg.req_id = 48063U;
    msg.status = 141U;
    msg.info.assign("TIASCEDNGSRDFDKPMELBIGIMNTVVSEXAQSSJXBTQOLMWJAUPVKTYHWVMBZFGGAMJSTOLFNEHKNXPREOUUVVRTCVVKUGDQLMGWNPRWTJYOAGOHXJMPCHDNUJIZUBREOGONKLYFUKSTCFPQOZYQHSXBXRW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.478234378667);
    msg.setSource(52667U);
    msg.setSourceEntity(102U);
    msg.setDestination(12982U);
    msg.setDestinationEntity(222U);
    msg.req_id = 47748U;
    msg.destination.assign("NSKXTEOQMDPYHPFVCNURWRLXMZIOWOHPALRVXACYFYMKYMZCESPCVSLHLSDYISYLCPKURLWWMSUGYRGUGQMEJEHMDAUVIPHNEXTFWGDVUTBHQVIUOKXGBTNEDZPJFJHBKKBRQYGXPEJVZSFBZAMICJJFTLTNLEKEDAQOYB");
    msg.timeout = 0.706261820938;
    msg.sms_text.assign("URSBUYUJDAGLOXCESCUBVSATTNFBBKAXTSNAWQVSFVDFZWJNXRIBQIRANBTADJNRNGYXSLWUEJQMECVEEIYVIGPNDLEAULGNPMPZWHADGWKAOCFRJYHYQSNMDTNPQKTZWCTIXBJFTYZCMCOKVHHHHHFFMPAVQRTEYLHZPDJY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.371514413749);
    msg.setSource(2379U);
    msg.setSourceEntity(121U);
    msg.setDestination(36505U);
    msg.setDestinationEntity(224U);
    msg.req_id = 12668U;
    msg.destination.assign("CFNHGKAJUVXGOSPSFCBXCE");
    msg.timeout = 0.156727099851;
    msg.sms_text.assign("ZCHFGMBLEVZPIOPSTOZPNDJRBZABKXHDGDAGNQHXPREARQMRCSQATBTHMDWODNCJEOLJRWTBJYPJENIEKQMXOZWVRUVZYTHXWZUDWIXKOTQUGYYWVTMCUXINYFGAVYUZILHOEETYRONMJHQITKZNUMARKUFTJQWOGKCYQIBXWYPDGDAMDPSFLFLLFKWCGNNLBQXCRUCKAIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.978491312031);
    msg.setSource(47723U);
    msg.setSourceEntity(34U);
    msg.setDestination(60238U);
    msg.setDestinationEntity(98U);
    msg.req_id = 41830U;
    msg.destination.assign("SOAKFOTXMYVUDGOMFGFWM");
    msg.timeout = 0.954775372193;
    msg.sms_text.assign("MIOGKJLSRRGMHLIVFXPQTZTPKQVETFYCAECWTBVHVESMGYHGUZFGDPRLMBWVBJWTHERLIJLDISJAYNCGLQDPEZOLRDFJYAFBTZESCBLPVWJDMDXRGIXNCMNXWBRCPFKRATYDXDWCFHOXWLUNHWOAKEOJUCBIAGQDZAEEIDQTKEXZUMO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.607763379133);
    msg.setSource(42381U);
    msg.setSourceEntity(73U);
    msg.setDestination(18875U);
    msg.setDestinationEntity(8U);
    msg.req_id = 64318U;
    msg.status = 206U;
    msg.info.assign("CMPRBSYHJBTYGONTERXVDBEKWLOSOBAWWLDWUDRLCLHHDWLPKVFJPJLCHTTIAUIIHZCLVPDLULKPCZAXSUCGBFEWZVVAVFBREISYYFSAMCCNRCOUMMGBQWOQNIFQHMNJDVPTPYU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.715427156649);
    msg.setSource(57910U);
    msg.setSourceEntity(43U);
    msg.setDestination(60860U);
    msg.setDestinationEntity(153U);
    msg.req_id = 24754U;
    msg.status = 25U;
    msg.info.assign("OVDFAJQXZUYGKGPSWEXOFBVKEHASRXLZPKICELQYIZROOLUHXZYFDORSJDLTMHPBQUWANLNM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.877892361663);
    msg.setSource(24540U);
    msg.setSourceEntity(34U);
    msg.setDestination(31780U);
    msg.setDestinationEntity(154U);
    msg.req_id = 44693U;
    msg.status = 144U;
    msg.info.assign("YIDQQAJBCUFQLQBOEDQIEXWHPMDGYSXJFNDLPSIVMSKJYZVPHIMUMYUQPGDGQXGCXNGZAWWYVJCQUUWTYLDOCBXWSRJWOLKMAVASETNENRYFYOPAYLOEPKKCAEZFCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.016055411712);
    msg.setSource(31990U);
    msg.setSourceEntity(117U);
    msg.setDestination(48826U);
    msg.setDestinationEntity(227U);
    msg.state = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.107801565402);
    msg.setSource(56153U);
    msg.setSourceEntity(78U);
    msg.setDestination(39834U);
    msg.setDestinationEntity(83U);
    msg.state = 189U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.957138166804);
    msg.setSource(47788U);
    msg.setSourceEntity(183U);
    msg.setDestination(35895U);
    msg.setDestinationEntity(146U);
    msg.state = 57U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.757764274685);
    msg.setSource(25650U);
    msg.setSourceEntity(213U);
    msg.setDestination(19809U);
    msg.setDestinationEntity(170U);
    msg.state = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.942100282996);
    msg.setSource(46263U);
    msg.setSourceEntity(31U);
    msg.setDestination(48307U);
    msg.setDestinationEntity(201U);
    msg.state = 230U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.844877726945);
    msg.setSource(12638U);
    msg.setSourceEntity(254U);
    msg.setDestination(10994U);
    msg.setDestinationEntity(71U);
    msg.state = 72U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.818319446085);
    msg.setSource(47826U);
    msg.setSourceEntity(250U);
    msg.setDestination(20847U);
    msg.setDestinationEntity(128U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.656852409279);
    msg.setSource(5253U);
    msg.setSourceEntity(180U);
    msg.setDestination(50296U);
    msg.setDestinationEntity(131U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.898218208451);
    msg.setSource(12864U);
    msg.setSourceEntity(192U);
    msg.setDestination(36112U);
    msg.setDestinationEntity(44U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.383612201542);
    msg.setSource(38153U);
    msg.setSourceEntity(174U);
    msg.setDestination(22792U);
    msg.setDestinationEntity(108U);
    msg.plan_id.assign("SDGOHLLXSWRCMXEGRYZQMFCVYXSASPCILGMRZJIPKDTPTYXDLORRLVZTVSXWWUVKINRKNWMKGELIVVFXGUDZPEWRKNKWHAUURFIOPIGNMTEGCQHBQFVQBNTXYNGOACPOTCQRBXMHEBWKTQAEKDSLDPATFQOVJF");
    msg.description.assign("UOMGNZKVVOIYUFFHYULQCXITHATDXNIKQXALVOFOBSVVEXAFAHTRJDCLSPICTNJGGXMBBGSLUUNEYWEPPFRZZEOUKJHSAUTAPGBPZMNSCGSDZZNFLXBFLWMKIDAJKCXVYMSLQOFJURECNRIEDPJWBQVCTVYGQIMJYRCNHBHGVWTHGANEAYRSJUDYZKRRZOZHWPUEDDIAPBQXFJDPWCWFO");
    msg.vnamespace.assign("QPKIRSIIHZTDUVKLVWLMRQBYYNZQMTRCRYDGPQAJOJSPVHIZCHWAGQJLKMFVOEUBFODXPDAEAEFUUIGKMWXBOPGGSIRZRVRMZGNFVKBNBMWSSIFVAJJKZVZLRHSFOPNCCEKBLKGBQHTXRSCCOYMNYIDFUDLAGYKOLOHCHYCWCEXTXSUAGNSNDELKFPQCMYMBWLBT");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("EMVETPMEZGIXEJQVAAAPXRSHQMKIWZSIIVOFRCMDJVTQYYAGAKLBPHHHRTDQMNEJEBNPDDZHXYUGOCHTPOWKRZIRYLMQLBFKNPWDNLHJVXOTGLPTQFLPTLUYGZUVXNOWUKHVLMKGRFRVVKBSYCENQFRWHZBWHYURXQXCFSSXLWYLCGZFACIJUGPQYKCNCZJFWIIZBOBATXUBEJXWMSGUBWSDROFEZMUEJOYDDDNSNS");
    tmp_msg_0.value.assign("XSHEKBUAGVTZJCUVGMPORRJSGISPWIJEOZWBQAOCVKDPLXAFSRAKDHRYSYJHLGUFMQNWNPHRCAZOVCDW");
    tmp_msg_0.type = 206U;
    tmp_msg_0.access = 47U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("XTKUGINSYCDACUDOYFNTTNIPCOURLTALAIUFPFJTOJEGENZOEIVZVLBQBGDLBEAYRIRAHDWVOWKMJNSITWGCQWNGKFRJPXEFETCAQKQVSFZKHSVULGBUKXUUYOJUPJMDDXXSIWDAHIQKLBQHCWREJIMKYSCDUTNMPPCEXWBVLPRNWZZHFJCAYZAOJLQHZYGNPRVSQZYMLMOFMWXWVKYRQEBHGCGSMYHBHSOAFHXQRRVMJNEBZOPXVTKLDGT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.235680317715);
    msg.setSource(56482U);
    msg.setSourceEntity(165U);
    msg.setDestination(62132U);
    msg.setDestinationEntity(20U);
    msg.plan_id.assign("NPCVXFEKNFMZSGVXSRJWHYRVPXPXOWWHZVXSRAMYCLABUVFUJGGBPGPSSOGLBGUDR");
    msg.description.assign("TFWPPJQBCOURNRESSZPCWGUQYWCNWLMCJNFATZNGTOADBMYHWMVYEEPZIHLXFGDSSFVUTNHPNTKGNIMBIVXEJTSQWXMQXKCH");
    msg.vnamespace.assign("GXBHSJXVNYUEPYZABSIDCQTTIUNEMHDFCMVLNATRRXCWJLEXAMOHGRDKKOSFLLDROUKZMJPMWDTBAERQJJWEZDBPAYPNAOIOWIHVXZPGBUBIBXSBXNCPKIUMVFEZJNTKTEMOWFCIXDGYXZUKGKNGWQPMLRSVCCJNALWTKYLQMZMHNVSHVQDSLITHEZCFQUVQARGPEGYXOPQJAEICDGUTDHQOLFFWFKHF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZLHXHDHUNOXLKURZOYSBCVFAPGJNDIGRVTWMLIAACDDGDRLTSDSQOBDIXMPJFRFARJRQNKRCOJJWELQMOXAEOQIQPAWTURQKLWXCVWNCOFWYEBVNDXBAJKFYSC");
    tmp_msg_0.value.assign("YNLCQYCOKXBJLMCPWMKADEMDTWSIRXKMWEGRHNOYPJAPVNILGLGMFIRRCJKWWUSBPDNRZTMKNLZJW");
    tmp_msg_0.type = 135U;
    tmp_msg_0.access = 126U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PIUATERUXZTCKDGZMYPDBRXVVXKXEZVJBSJFPULNBJUQFGBQCIACSNMLHNHG");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("KQHQATZZWJGJBKXDGFBLMUORCICQPIVEMPAIEGEFUPPKFTSUOEDVZRVAGOYWPJLOXBYIQNMGSXISDREUY");
    tmp_msg_1.dest_man.assign("WTFIHAXNUQORYFALJMSGWUSBWHEKKULYSJXTCXLKSRLGXEKVFKYIJLWAVGFQNOTBQRKBQSIMDEOWYFYTHAXSHRMEZTJLCMLPMN");
    tmp_msg_1.conditions.assign("KQLFUKECYYSXHJUZGBYXNEWCGJVBUQUYAQEBWLHRBIDSLCDQQGYSGRVONROWYWQBBQKASGFCFJKMIGDSBEWVFKNPLMYMAQLTGEHJFBHZPITIFIVDVZSEZFPKVAJZUAPSCQFRQSDTPJYGEUZHVTCODTUJRVWAXXHILUPMSOOLPXMNGRXJOETRD");
    msg.transitions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.94123619987);
    msg.setSource(49644U);
    msg.setSourceEntity(17U);
    msg.setDestination(6432U);
    msg.setDestinationEntity(220U);
    msg.plan_id.assign("AQOZQJBTCFMIDOUVZHUIHUTR");
    msg.description.assign("YLGTDUISRTNAVHZUYLYGENNUHWMDKKWRSNYVFYQZRLYDSPZKVIHMWTCXOEPGUDSQURIEOGWCZVWZSRHLBXZIRJRCTYZKZHLRVEAVPWBTSGNBMJFH");
    msg.vnamespace.assign("HXLNMVTDFSIFYWDJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QGLMUNWVCFDBPFJOVZMECGPXRRGPVMGWGBCQCYDQLJLPDIGTOTUDJHLFKGRODHSPGXHOTKQHVSEXBHTSQIOKFIHCBAALMVFMOYFRQOYJCJZXRZACSWXTPFHJEKEFJARPUEKRYWSWIYVGUBZJBQDETFKHNUTKNOEUGZXKZRCAMTUHWPSNLWVYXQBASNLALUE");
    tmp_msg_0.value.assign("HDSDEYIBAXKCJOGZGRWPNSAUEAAYQPOFREIUBYXKMWXOCYTHFYREQHEWJRJNGKVXRGLWLMHQNITHDEOEIZFQDXIOCUYDSAPWTBEKDJXOBJBBHDZUVMDRZIZOXAAPSSPADMWLYFRYHMVRCFLFKOQAPTS");
    tmp_msg_0.type = 190U;
    tmp_msg_0.access = 241U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("BKJFLSGDESHFDARMSHYYKGNRJQLKNOWQEKIDKXSCIOFWHZCAXKWETJHUTLMBGZRWMP");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MEHWRVHVOJZDOILKSEHMYNQYAYCJWPEUJSWERKNNBUWGIAKMFEWQCZVRQGJFTDPCXLGIUQOBZITBOXXICABRSVXGVOIUNNWLWTNRSBFAHQCCMVRPKVZFDLSZMXMPDYUEDGDYO");
    IMC::Launch tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 56418U;
    tmp_tmp_msg_1_0.lat = 0.412851415746;
    tmp_tmp_msg_1_0.lon = 0.820288376667;
    tmp_tmp_msg_1_0.z = 0.778088561504;
    tmp_tmp_msg_1_0.z_units = 107U;
    tmp_tmp_msg_1_0.speed = 0.257331528621;
    tmp_tmp_msg_1_0.speed_units = 91U;
    tmp_tmp_msg_1_0.custom.assign("WJZPRQDCZKPXJZMBJMTCKBTACNZGAAFOOJRTWFSHDAOPTPRKGIBHKAZWBGNBSOVPDJSWLVZUBCOSFYLXLOETUZYARKEJEVWSEBDSDFQHNQOXQDMWUU");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::FormationParameters tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.formation_name.assign("ZXQLXFBSPJIICWLKKIORRMGTGYPENCATSFSDCDGQNKJMAZRVORJCSXUVLBMESVKNNRBWLQYBHZMFAPZEMBIBHYGRVSEULDQHWUNSZUOMALTOCKFXRLIWUXINOUQGIMEFEYTWUDWNSYDOZSCWEBYJTGGDBDYOXUMJIEAIUBJAOZHPOJKMCQAVPLPPOXHVADFHGPKPQAINFHDRGGBZRJVLXQHKETWXTTDTRZLNMVJFFFUZWTPJYWQQCHKHVYK");
    tmp_tmp_msg_1_1.reference_frame = 3U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.vid = 22481U;
    tmp_tmp_tmp_msg_1_1_0.off_x = 0.976408890551;
    tmp_tmp_tmp_msg_1_1_0.off_y = 0.305767873632;
    tmp_tmp_tmp_msg_1_1_0.off_z = 0.893569516873;
    tmp_tmp_msg_1_1.participants.push_back(tmp_tmp_tmp_msg_1_1_0);
    tmp_tmp_msg_1_1.custom.assign("GJIFHIEJTJGAEIVYCIUKQKLBCYQMMFLOHPMXUESFTFCHIGPBQNKONYYVRPBXQAPSODTJZKDRPLTVGCMULRUDVPDGSEODYZPHBKAGILHOTZOWJXQYXZTTRUXSMUY");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::MagneticField tmp_msg_2;
    tmp_msg_2.time = 0.923312861861;
    tmp_msg_2.x = 0.552456538173;
    tmp_msg_2.y = 0.769845558523;
    tmp_msg_2.z = 0.431365087825;
    msg.start_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.971791379489);
    msg.setSource(3937U);
    msg.setSourceEntity(211U);
    msg.setDestination(22288U);
    msg.setDestinationEntity(148U);
    msg.maneuver_id.assign("LPGBXKRHJHJPHFZAEYIACOWZGVFUVAXBHBHIXBUPIRLJHQIPPKCBDSWQTZMCXELWDQNXOKCSMEKOVHGHZQYJNFBVMWVQZFDTUYDLMSQCUYUDILCMFPRQKSFYWJNRXFZWGBRNTHQJOOVLLDNOIVGAAYWOWLUIMTFRBKYIHGXTYPNYEWNERUCXAXPNPEKGZBELZGRMQTSOSEI");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 22985U;
    tmp_msg_0.lat = 0.303677815006;
    tmp_msg_0.lon = 0.0160819217737;
    tmp_msg_0.z = 0.0521559526536;
    tmp_msg_0.z_units = 162U;
    tmp_msg_0.speed = 0.23613680239;
    tmp_msg_0.speed_units = 147U;
    tmp_msg_0.roll = 0.569863669447;
    tmp_msg_0.pitch = 0.719705031418;
    tmp_msg_0.yaw = 0.00665579537925;
    tmp_msg_0.custom.assign("WDWTUQICGRTAOJGGGARRTLGKMKPKJVMPDCWFKTTPHGBQQDCDJYBFDXNBQJPZKXNSSPXTEXHJVHYWRPXYMWVJJZRVBSOZFOLRKEDSNBDZJBOLHEATNTWOSWKMAICVCHSGWDTMGSIVMLGXPOZVCBCEHZUHHQICYZUJREIUDLQZEFUAINMYKINOOFHYCTMYFMHEELY");
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.421835707745);
    msg.setSource(44758U);
    msg.setSourceEntity(209U);
    msg.setDestination(27313U);
    msg.setDestinationEntity(177U);
    msg.maneuver_id.assign("RYEVGNZEYOAQXWFZCBTWNXVEMFIKGYLDLYKLWDUTBEHTWXUNMVQXITJDKLPXSCWEFYGLRPSDCOOBXAMYDBMPDKSSNWFPFEYOYTJJONHDSCJSNHZKLRZXPBSEXVICKYIPJZVJHREVJGIROQTNVAZZTXROIPGZNLJULIAMTQEHUAOBCKMAXUHAMUHFMZQSCPJUAHGDRLBRICNKYMGBWUSZKCABMIIUHQPDVQRVFFAKWFOOVLBRCTDUJETFQ");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 46926U;
    tmp_msg_0.lat = 0.298730615874;
    tmp_msg_0.lon = 0.42028558354;
    tmp_msg_0.z = 0.944834542184;
    tmp_msg_0.z_units = 199U;
    tmp_msg_0.speed = 0.271235871175;
    tmp_msg_0.speed_units = 139U;
    tmp_msg_0.duration = 52681U;
    tmp_msg_0.radius = 0.312592245728;
    tmp_msg_0.flags = 200U;
    tmp_msg_0.custom.assign("WXSCNHBWPLVUWRKFDNITYU");
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.137918647046);
    msg.setSource(33753U);
    msg.setSourceEntity(131U);
    msg.setDestination(54884U);
    msg.setDestinationEntity(228U);
    msg.maneuver_id.assign("FBBXUPVNTCFMNFVZUDWJFKTGTVGUTEHMCBOWGNMNLWUZKKIMHXNCVCAPBHXXA");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("ADAQNSANEQWYYIFYYQZBLFEMZCVAVZGJYXOWMCFIKNHKELHRPMHDSGVCTOZCWSHIDQCLGIOYXBFGSIWKJYUVDEZHISXAPEDMBMOVOQKXWOOYEPXEKTJMRWKWPHUWRZKSPLNNKNXUUAACARZOWLPYSXZUVFETRPR");
    tmp_msg_0.max_speed = 0.361520623832;
    tmp_msg_0.speed_units = 21U;
    tmp_msg_0.lat = 0.124546342352;
    tmp_msg_0.lon = 0.25039865053;
    tmp_msg_0.z = 0.849213942313;
    tmp_msg_0.z_units = 3U;
    tmp_msg_0.custom.assign("BOZRSVJZKRCXIBGHODGKVYPZXYTULJMKIPDNEQSCQMCNHQLOYDQNGOQQDBZKEYLZWMMLIPIFIFBPWWABJPKUEFVWOQWJLRXKKOHOQIGRMNCWXCHYEFGBIXSCFTATFUHLDTWXZZJFTRUZZWHNGSVSXTZYURKEXLPOVLHGEBSALWVAPFRTNAVBFHJTMRAYRIJGNEMMATBRQISODFPHGNDSWYEGDVVPKXJPDUJC");
    msg.data.set(tmp_msg_0);
    IMC::ExtendedRSSI tmp_msg_1;
    tmp_msg_1.value = 0.31626338149;
    tmp_msg_1.units = 156U;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.105773215923);
    msg.setSource(44846U);
    msg.setSourceEntity(125U);
    msg.setDestination(48480U);
    msg.setDestinationEntity(113U);
    msg.source_man.assign("CMZMARAVVBVAYRXFPOJBYHWUJIAPZEYTIGKHCXXCGMJUMVDCFNLQODLFJMTXZZJBWKBGLGUHZMYIKPZJMFEBDYGLVNUTBT");
    msg.dest_man.assign("EIIEFUBPYCUADQVQDGLIHFDGWHALVGMVFTRXCZSNQPOGULZGAEZYXLJMJDOYSBTINMAKKZSRCVEEWHFUBYUOS");
    msg.conditions.assign("YHHLVFCWBKPYZXXUKBCQMUDPCBLHZOTARVCVSUFJDYRSOTQMPUQUOXBYJRDQWGMOUGQFIULRNJFBLKNLUNPKENOZHQPWCIFTRULSOYDQBXNRKSWDSTTZPXDJHITAPUWHYLMRVCHRJEMNAAFYWJLMNZBIQYWLIWIPASGVDVVPMWNSEEXACDKVTSKMSKIKGXBHVGZODGFOMTSGKBZZCAATIBO");
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("ZPNBWHMEPGSIURWGKOYTZAQYRKVCOFSL");
    tmp_msg_0.sensor_class.assign("BSOVSJBBLCWGFTWFAZASOSLWPRQWZENCPFIHLBIQPGOQYJNYLYCRMHOXQELIOIVWXPXTRSBHZLWRKVVODAHBJJWLTSZDNLYAADGDCOQYSHIDGSTXUTEEFFBJKDZQNAKREKYRFYYVCPMIUNSIHNTSCXWUEXCJBGGQUGVEAAPEVTXYX");
    tmp_msg_0.lat = 0.0314164999838;
    tmp_msg_0.lon = 0.638712798041;
    tmp_msg_0.alt = 0.0726328210363;
    tmp_msg_0.heading = 0.471431193068;
    tmp_msg_0.data.assign("FZZJRGYSOQCOSXJAITWDRVRBQXFAPVRIPNGKWMDBDZLAAURIWGWZEPBGIDBQRWHKXAOFSEUWINEXKQSCYDYEYBBZNSTELQLPAOFNLWPGVKJCIUZVVXYYNLSOUDUTGUMJHCHVXBVCFEMCEFTBMFPCNGZFDNDLETIFMKZVADJKQHHWHBTDJAHMPKNSRGMNWXHXWGQOJULOSCTJITRYGPUARAMROQCQOK");
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.112958074129);
    msg.setSource(39023U);
    msg.setSourceEntity(37U);
    msg.setDestination(63148U);
    msg.setDestinationEntity(117U);
    msg.source_man.assign("UONJILYDHXDHGGUCCNZPXOLEHBPKCQGXHBZHQPVNTCMDINVNEZVLDBYZJTHQAAKRUMZIWXPGACQLWKZNFKAEJEGRYEEVFUDF");
    msg.dest_man.assign("VUQTTMZLOEUYWBLWUEUMTQSXCLCRAXFFGKHNAHWPWVHYNBIDUVXIMOGGRZEOQYWCGPYQQCIUIAPGPIRYKCNKBEXBLDZELTINJNSDEODYTUKLDQTJFMEUJAYRYBTLXOPBHZVQDOFOSA");
    msg.conditions.assign("HOXFPXZYUTLHUWNDJSHNBPVLXNVQBQOWEPDQYVVXNSZRIYARQGLFBSXHQAMWULHEGBXJEONPHFTMIGITNCIDRYWOKJETOXPJKGGUCFRWALEORHYZQFBAMJRCIRSKDDUUOYAVJUSOSCVXQYKVKIPANBZBTPNHETYMCCQJPKFTOMIRTNSZPKOMLMITQSEJCAFDQWDDVKSPYXLVYUALTXFRMAMBGIFDRGHWBZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.43146553835);
    msg.setSource(13260U);
    msg.setSourceEntity(198U);
    msg.setDestination(29132U);
    msg.setDestinationEntity(13U);
    msg.source_man.assign("URTBRVNURSASYCMLZJLKTTKXSXDQOTNLGFDPXIPZYECWAYUDSOLGMUXPLUUCOHOZZANJUFMLDGTAMXBBKBQUYWWCKFRGMENBEQPTRFGWIAVOFPZGLQGSNWHVBWKCSYRBEOIKHMEJVNQHYGEWKNGRHLSXYDHMROACAFXWEZQNMUPVNKVECGCJZLBTHJTIRHOUFPFOJEIZDNYPKDQXIODQJ");
    msg.dest_man.assign("XXWNETPAUYZRQHSFXFGEAPCMJMJPHRBBBSERVVLLCRSJODWVRVMKDJZKILPYPIFPYJMURNIVGLUBSLFEHIJZTEXTYIDCFDTPJGUQSKTSBXDKMCKABPEKZVPQOZXVNUDROZHCHAOCNHQTBTXTOAFNQOCGARFIQBZKEEFVNYWLQEAILLEGBUYZWUDILYMKJVONQNKHAHVDTZOXLGSJOOSKMNHWBASFYUMWATMC");
    msg.conditions.assign("RBGHINFPMXNWHNOAKBKNAWADIPMDOEECJOIZUVNJSQUEGFBWWTLZGXYZUJTJQPSGZLAMWVXLKLCYFHTAAQBWRTRGJJCBKFQHJQERGSHHUDGVFIMAWQERXCOTSDHDQZIZMWTXXYOMDOWRTPKPZKFENEITRIRXPEIHVTOUYCGPCCICXJMLDFZOEYBKSSOJUAZNLCMVHFNFVQVCEUUHQRUYLUYLSXGNJLVFDYX");
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 120U;
    tmp_msg_0.error.assign("UXHUNLKUTIXVOGBUUKGFXTSWTCARJSKARDLWJBPMQCOWSZJTILKNJESMCJGDJOIBSUOMORYNAQBFWLYHVQTCERIHTDYVDOGAPIPMZYFXZNZQRCPQEWMYRIKIVZWQTUSALCYNLAQJDBGAZFPHKDVLDRXZAPKYKBUNBVEBVKGAMBZHHGSIOZRYFNPFFCSAMNFQZVQITGETWOCYRJSEQGRJCFGPUWM");
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.125095532382);
    msg.setSource(61462U);
    msg.setSourceEntity(117U);
    msg.setDestination(1046U);
    msg.setDestinationEntity(69U);
    msg.command = 48U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QUVAJIWTMVBWVWAHIRJHWCZVKNLFXQJZGBSTZKIWMKJRKXDKORYENRMVXAYVNDWU");
    tmp_msg_0.description.assign("IKMHIZNALPSKEGKHUBSTORUIFICJOMPMDWUJRSNSANBOOFCGEJFJDRYHOXUXBRT");
    tmp_msg_0.vnamespace.assign("CIVZRIVRBKBEKXNNZOCLJFGTNNIETFLFOQJXWHMY");
    tmp_msg_0.start_man_id.assign("UZQYRPUSWZUKRLTFARTYVKMWLZCXGFDELWCLPKPNGFOIJHBXYWPNYVRHTYVXEAZOXMLZTTGCIJZNPKOJAFGVECAQBJJHDYYKCPFVJXGCDXGBVHGOPZCKQIBMFVJFHXAQUNDEQBHNNAZVSQQOAJNSPFGUNRWSNXEIBERWIMHEAORTMLSKSZVPEYDLWQCIWEOATAYLONIWCBQMOJDURPBXBBU");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("IOYFZRPIWZMD");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0354481332597;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.400513122395;
    tmp_tmp_tmp_msg_0_0_0.z = 0.278713926187;
    tmp_tmp_tmp_msg_0_0_0.z_units = 169U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.63045633779;
    tmp_tmp_tmp_msg_0_0_0.duration = 64348U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.113567368811;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 236U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("MTLCPRPWFPOKNPQAHSRZDVKL");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.maneuver_id.assign("AZSOLGDHHZQOVTTORJWVOBXYJSAYZQZEHCVTYBUKKEIWSWVKQMZQWLUBAZAXGFHKTOCDKUXKDROBIMVULHQDLCVMCAZYRINEARGURTGKJHMFHNACAMXNDLUTFMTSKPLARXBGSHXJSHEAZOZIEDVZR");
    IMC::Dislodge tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.timeout = 11423U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.rpm = 0.625615121067;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.direction = 110U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.custom.assign("WORWNFHFCHTVLXNVUHRLYUJAJXJKPVXWJCZBOUNCARSOLRCEYGIZCDPPYRTDFTEIUKNWTCFINVOZHDZDSTCIAYDCEYEKZOHKQVOPAKUSDORBSZRQERIWMJIAPPWTCGGXAQEBQEUESGMKGWLRXEIHMPYUMHWVYQTJUBASUEWFVSDQIWQYOSNDGBSVIDLQGIJNLZYFBFGMYFKHBJKPOGMTBKANZNNGQOFVHHKPLMXASJUQPMBM");
    tmp_tmp_tmp_msg_0_0_1.data.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    IMC::DvlRejection tmp_tmp_tmp_tmp_msg_0_0_1_1;
    tmp_tmp_tmp_tmp_msg_0_0_1_1.type = 92U;
    tmp_tmp_tmp_tmp_msg_0_0_1_1.reason = 174U;
    tmp_tmp_tmp_tmp_msg_0_0_1_1.value = 0.0197780192054;
    tmp_tmp_tmp_tmp_msg_0_0_1_1.timestep = 0.106781546475;
    tmp_tmp_tmp_msg_0_0_1.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_1);
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("NPTLYAVRBUXZDYBRZAWHIEWCCYORNDRTSWLYZMPQKZBHHEVAJPGAOFOFRQHQPJMVSNDDANEHKCPOIZLQTEKFBBAUXYJITCIHXEJUYPVRAODLUEGDNKLSHMTBOQHCJZP");
    tmp_tmp_msg_0_1.dest_man.assign("OFSGKNYHLRBYYSTKRZNJQVEGHFGPJACXGQTEAPDJCHIOVKKSOQODAATNSUZUSJTTTZYSAGBCJTWMLLNYCBCMKOHWIJGRWLXIVFHRJZAEXZJNSGNMXPFVFRFWOVUQGNWZEWSUOCVHZOWIPGXJBLMMHQAOLPWIDRFEIBIKCUPYYBBRWRVPVTVDKQZLHLGFZUPYETCEEXBDQNLLIUMDUJBDXFYDFQNSYEQIBAEMRVMUHIHPPXRWCU");
    tmp_tmp_msg_0_1.conditions.assign("VCXLFXKGHZVEBGKQFDMFMTXKQYCWAHYYFGNMYZEGSUKVSVGBVBWJGRPUTQJDAHXEDVPBSCQWPJIMNJFXNERXCWAYUVHUHMXEKAZPQZOSKRORLLTEQRGLNFUAJTUIYFNTLDJEKGMJQMQYECZKRSZPIQFPMBDOXLIZLIHCBTRYWUOEQCARXJLZGTNALHWNDOOOBSXWIIHPTASSAHNOWUYEZCMDIHVKZFJNWPCJURYFVDWTIO");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::PathControlState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.path_ref = 975253272U;
    tmp_tmp_msg_0_2.start_lat = 0.143327431899;
    tmp_tmp_msg_0_2.start_lon = 0.55281364466;
    tmp_tmp_msg_0_2.start_z = 0.8722229723;
    tmp_tmp_msg_0_2.start_z_units = 159U;
    tmp_tmp_msg_0_2.end_lat = 0.704522952147;
    tmp_tmp_msg_0_2.end_lon = 0.527208450685;
    tmp_tmp_msg_0_2.end_z = 0.00291927548614;
    tmp_tmp_msg_0_2.end_z_units = 113U;
    tmp_tmp_msg_0_2.lradius = 0.868559986749;
    tmp_tmp_msg_0_2.flags = 22U;
    tmp_tmp_msg_0_2.x = 0.706753019234;
    tmp_tmp_msg_0_2.y = 0.112147388034;
    tmp_tmp_msg_0_2.z = 0.136253854511;
    tmp_tmp_msg_0_2.vx = 0.290790264617;
    tmp_tmp_msg_0_2.vy = 0.0799765398239;
    tmp_tmp_msg_0_2.vz = 0.522710869903;
    tmp_tmp_msg_0_2.course_error = 0.251658779435;
    tmp_tmp_msg_0_2.eta = 32986U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.402018088089);
    msg.setSource(16242U);
    msg.setSourceEntity(209U);
    msg.setDestination(46414U);
    msg.setDestinationEntity(120U);
    msg.command = 116U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VPMMQTELJUHHNHIJRIDXZJUTH");
    tmp_msg_0.description.assign("OLBVJQRQKLWDRCCOUGJYFSOIBLZECCQXQXSNXREDFHDMPRINPDJZEIXHXKJWFQRYOKNHBZEKJBMYNWZYVIVTFVYOFTEKDRTPRAKSNWZCPMFOGTDVRMMBAHSSMPQAPUIQLHAVHBCYDUYOAWRQUPEATMDVLJKKIBEYZVGFCWZEFXSUTGXTHGLF");
    tmp_msg_0.vnamespace.assign("MZSTHNFXAJUPWVGJRZVXECFJRET");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MKIBUPITLIOTKRSFSYWZXQBNTIPKXDKXAJPJGDXAUJQLJYHPACYBRLWRGPUNSDYAVTZMVARNWFUARSZNMQGYKRGCHYPHLEVEYPONFSTQBWBACULZLAWAMSOCMVXDIIZOOBHPHCOJKNEFVFPZZKGSBUBDLDOQOOKMRJACHYRFCHJSEQEXWLQVQDXNGVZBEGYVFGMXWDNUIDGMKDOLSUJHMNLTGPXQNH");
    tmp_tmp_msg_0_0.value.assign("WOHZXBRHITRQQTCEMXMVIGAHHNFCHGTUDPCYNPUEEMYDQZIONHJLRIHKGERWABCUAYBVVCVIBCUPRTJDLINPUKN");
    tmp_tmp_msg_0_0.type = 39U;
    tmp_tmp_msg_0_0.access = 225U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PVNOPMADFRQZZXLEKOAZUHRAWCCOYHSWIJATSLJCQTVJSQQRHPUMMXAOMCCXDXCZRGYJKDOVIEVALGUMFYNDDQECPPBABVCDPHNVSWWRTKREWLDFJSYQBBYJKILBBEBKIKQYXFVADCCOKFPPLGIYBZHSETMKQSGMANLUZXYXHOBUTDTTIYOWNEMFGNNTGZFUHEPUGWNNFUOLSLENSTIBZWKRJFZEQURHXOZJLHXITGJWGA");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("YNWTKBAIADSTXPGABNLTDELSXJUQVOQOSHRLVFTXPGBZOURKCIIZGFHVTSVOBDFJBCHCNIUEPJZIWXIODRFWZBSGANDPWAAQUIYZQYAHACTJPMOBUCMLEWEHUQXWDLQFVYSRIXRSNOGLEHXMSXRUDEJPJMOJBRKNZDQUVHOTPKGPUVQNYDKOA");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 60025U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.419834274222;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.209241756246;
    tmp_tmp_tmp_msg_0_1_0.z = 0.766907695275;
    tmp_tmp_tmp_msg_0_1_0.z_units = 19U;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.603752018255;
    tmp_tmp_tmp_msg_0_1_0.amplitude = 0.496734407784;
    tmp_tmp_tmp_msg_0_1_0.duration = 36685U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.415437205313;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 99U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.0777382929002;
    tmp_tmp_tmp_msg_0_1_0.direction = 119U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("MAUKCUUARKXVSKFRCATHMOHOVTDQMZKKLFJVZXTEUVPTLNQCYTLHUHMKCEOUDJGBGMURNPFITAWYMHNVQWOZUYEMNHLXRCSLVWJNKWTBDISDADNQZJWNOAIPYZJOCGESFX");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("KZIPHPNBUVORNBFMKSQRMZWNAALPOZKTEQCUXJ");
    tmp_tmp_msg_0_2.dest_man.assign("SCKOIMWAXZDCIOZVKCXOWCKYGSMUYFMSRRVSXWVNPWOUZTTAWAIEAWTAANDFQYHESFXDZLLYPQPUKPOHGRVRTCYBVRYZIAULNQXIADBDBPBXCEJBLDHZRFVHYIFXLEKBOCOBHYQFTYJJWWERBQMNQSPMTNHJCUORTGMXHGVLAPFGBJJEFRVSHJZNV");
    tmp_tmp_msg_0_2.conditions.assign("OWQYDYATKJXPHBZSLABUHGBCHHPDENSERHSVBAYPKXYTMWRZOXFGQMSKXQMWFZWZHGUQQXPZKDXHIOGOHCFCMFVYVNG");
    IMC::Force tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value = 0.0983199967796;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::ProfileSample tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.depth = 7172U;
    tmp_tmp_msg_0_3.avg = 0.22701127526;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::Dislodge tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.timeout = 58070U;
    tmp_tmp_msg_0_4.rpm = 0.664223332822;
    tmp_tmp_msg_0_4.direction = 110U;
    tmp_tmp_msg_0_4.custom.assign("NFXVEDGKEQRZZLBBWHWJCOQGBBXYJFKUYXWJKZIRXMUNVCNFABBQQAYLTIOLIMIUEYMHAXJCGNWGFGJBIUPJSNLPNTSLFVVHVCSSOLAGPKIBEPGLAPDOHIXSECERRFOGWYUHVZ");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.773505071911);
    msg.setSource(17225U);
    msg.setSourceEntity(172U);
    msg.setDestination(5140U);
    msg.setDestinationEntity(81U);
    msg.command = 227U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IOXOUYDNOSXJVEAFJQWBNNVUYBDCBEEQSPMAONTQXPBMAPFLLMQOEHRDOUKWXOSVHSWQZNHEDGIMJIGSSEVSRBTAGCOKMBLGBYWAIFVGTGRDTXZAZMYMVTZZWWWNTPJCLKAOMURTFNXKHE");
    tmp_msg_0.description.assign("YKWHKTHTSOZKQRTCNXGHPOHFBRBMDROSRAMDZGQJFSSWMMMZGALCEDDBYIJXVFJEWEEQARWVVSYVOFXBEMLBYNJFFVO");
    tmp_msg_0.vnamespace.assign("NGOIVSNCSLCXTQVGXCZGIHBBZDAJWCMKUIWOBTJAZTZFHZNYRHJDQHJULZFTQVVNFNGKSLRMUMLKPMBBGIVHGWVTFXRIWMLNHYYEKTSPOCJUUTYXWBBDUFGRYWXWABWIEXEEQWUMPXHZFSHXSUGEDZUNRQDIJTIGDARDKJEPRQVLKPWYFVEOXPABSNSMDJEBPAOLZTRMOHKJRPYSNOUAZQXEODLJQKSFLPCMFQDEC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XSRUCCHCMVYAIWVQEWONEQTTHXPGDUDDMDCRZIRABBRFLNEXDBHCRWXNRZOOZNSRLJFHSSFBYIZROSCTXCKTLPBEOZFDSXERHPJVTGMYAAAFQNTTWMTVSTKHYENNXUAAHZENPDPYGAWVKMVGOQRKNBKQYZLSXUOGPGSDFFXZMPIQWACUMPYKJIJBJHGIHNMYKCVGBWFMLUFHZEZWQLQGJKTUBJEVDJBSJGOYMIWXIULCDLPLEAIYKWVIUKQLQO");
    tmp_tmp_msg_0_0.value.assign("BFTHVNDDXYFYGZFOOSU");
    tmp_tmp_msg_0_0.type = 219U;
    tmp_tmp_msg_0_0.access = 142U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WZHJMDCORIPCNHQNJGTCDRGITCLNOKFULMSPRTBCMXDKCXXVWTJGAQSWHOOYHDXYJXKIRKFMZUEJBETFBTPCGEZKUSWEIFNAHWLHGAHDJEUGPGQMK");
    IMC::SetLedBrightness tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("SLKDCGCWONDIXXMJZJPKMHGCUUGWOAAODBYJTTMQQWBIRTFUJRATNUHPFUWYIVYWTCVLXQWBMARBEXXGCHSTVADFERPEKDLQLUIEMVLOYWQGUWEKPHTOBQTKZUSZRCOQXFJNBABLARELYQJAXSSCODZJRUMVGCEPYKONDTFMSPQILFWWPPEHERHMHHMVNXCKRHQNNZEYMVZFGZIBXINJRBYLZ");
    tmp_tmp_msg_0_1.value = 101U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.116844424225);
    msg.setSource(35304U);
    msg.setSourceEntity(149U);
    msg.setDestination(41780U);
    msg.setDestinationEntity(146U);
    msg.state = 160U;
    msg.plan_id.assign("UQVNBYIZFOYZEQNSADDDDLXNAJNRQQCJGPURZCSLSWHSPZYOCO");
    msg.comm_level = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.938231587069);
    msg.setSource(54297U);
    msg.setSourceEntity(124U);
    msg.setDestination(50726U);
    msg.setDestinationEntity(84U);
    msg.state = 253U;
    msg.plan_id.assign("MDAUVVFXUIZWOBMFYEMXCFCIELXUPOJVUNWERVAUPYIRCVSTLIPWOKGTGYGJAOBBVIGRKPDUJVJMONXDPNRGHSFACCOAJTHNWEZBHECHSBDRGAUKHEXSBZZQZIHKEQVJTM");
    msg.comm_level = 147U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.757304927391);
    msg.setSource(10122U);
    msg.setSourceEntity(247U);
    msg.setDestination(13310U);
    msg.setDestinationEntity(69U);
    msg.state = 165U;
    msg.plan_id.assign("ILUQPWMFSMRABRXAENLRZHMWCMIWN");
    msg.comm_level = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.19888514462);
    msg.setSource(55855U);
    msg.setSourceEntity(119U);
    msg.setDestination(21374U);
    msg.setDestinationEntity(224U);
    msg.type = 12U;
    msg.op = 249U;
    msg.request_id = 11108U;
    msg.plan_id.assign("QMQTYAGTJRDOMEZGJFWYZWNZBXJBZBYHTCRWPKHTOFVLETZFUDWTBLGCTPXPVBKFSPSXNKRDLUMJMZQPRMGQMQVQYUVIZEHBOOVBAGKDTEXIKULBFNXMGDJKLHNFKEPNYSWHAEWCQFUZP");
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("NWSDNZSOCEIQOIXGOJAPRGPLRTPZYBHKLJPMGYQFPLZNBAPOFUCLREAABCYAMIULRFM");
    tmp_msg_0.lat = 0.803186400814;
    tmp_msg_0.lon = 0.0404924467894;
    tmp_msg_0.z_units = 96U;
    tmp_msg_0.z = 0.890642033816;
    tmp_msg_0.accuracy = 0.545794068807;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QOENJOWAFQHDFTIWMBFBJLCLYKVREOLCRMJTFSIJNPKGGUAQUIREXGHCYXTBATVUSXGOQBXJDBHZLPSUIXWVSNPDMZRQHALYNHMLCOQHISCSLKKAWTIIFZRUXSTPFOKZZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.384549827621);
    msg.setSource(60278U);
    msg.setSourceEntity(213U);
    msg.setDestination(55515U);
    msg.setDestinationEntity(150U);
    msg.type = 25U;
    msg.op = 55U;
    msg.request_id = 6759U;
    msg.plan_id.assign("LQJDNTWYEOGKIZWEZZZCTUACDRBAUQJFXZUAPAIKOTVPNARWFWSHISDCQBCEVZTMMPEHGKQDELKBIYSZRQDDILVRIBMBSMTGLNHJLHCTMYYCVKANQHVSBGOSTVTXBFVAZKWFBHDJPJFCYWXHVXEIMYQURSUJLRJEGFCGNKROKLGNX");
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("EFYTDJGASGAIIMOOEBVJJNMEARTLTWSXJGDZEEQYCADDMOJVGHZDAPHCQNPUTBVLLFEUQBIHWJZFINCRFTZXUUMHCUSCK");
    tmp_msg_0.lbearing = 0.621875213356;
    tmp_msg_0.lelevation = 0.283195031671;
    tmp_msg_0.bearing = 0.976123432643;
    tmp_msg_0.elevation = 0.427220745173;
    tmp_msg_0.phi = 0.665428388299;
    tmp_msg_0.theta = 0.663803809575;
    tmp_msg_0.psi = 0.958858859757;
    tmp_msg_0.accuracy = 0.133391126766;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XZHABZRPMROXVQIZGQIBEZSVMWGLIGATPPOUBZCYZJLTADUJKFJATBGW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.231203401892);
    msg.setSource(60856U);
    msg.setSourceEntity(236U);
    msg.setDestination(33973U);
    msg.setDestinationEntity(231U);
    msg.type = 24U;
    msg.op = 110U;
    msg.request_id = 35286U;
    msg.plan_id.assign("LKZVSTYFCYNFUFWNLDVDBOJIAVCNUWWRZIBTWWJVPCQWENFLBQJQAFHHSYEZMZOQLBETTKYXIBAKNNRSUPGFDJHLAVEZXCHWKUICEISSALHDRS");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 4248U;
    tmp_msg_0.lat = 0.677324198693;
    tmp_msg_0.lon = 0.858941949054;
    tmp_msg_0.z = 0.486271126975;
    tmp_msg_0.z_units = 50U;
    tmp_msg_0.speed = 0.222814961198;
    tmp_msg_0.speed_units = 219U;
    tmp_msg_0.custom.assign("PJFQSANBTLBSDUKNKSBLJFCAZJOLRRRPCBKXMORHWGOXVCCPCSHFIAHNYIGFYWDOSACGGAEHVZBZHHIMHIUSWXKUOITPXADEZRZFKTWBFXMDMUPGCKNNUYXZLYQPBEIYTQXQBXVDZIZNSGTPEAYBMVTCRFFHKNLQTEOFQLUVSPAQYJIOSAJUNLNTLWDEVE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AXKGUONMDESVEOQOGMIYPJUJBHSQWXAMPTLOLDLJFISJZRFUGPMXQYGYHRZMNPRJMRLXKNKWISFMQPRWUUBZACZFGCXZLOHWFNXEAUDQJYBFCKKOBQJIHBTUOUHEEYLAWQYKVCMNPZRUVYWDNXPRZCNYDQGDVZTCLHOHDTCFTDSGY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.401235588019);
    msg.setSource(59575U);
    msg.setSourceEntity(136U);
    msg.setDestination(41115U);
    msg.setDestinationEntity(72U);
    msg.plan_count = 5479U;
    msg.plan_size = 1143245660U;
    msg.change_time = 0.242753891389;
    msg.change_sid = 50349U;
    msg.change_sname.assign("EFESDKKLVGOOZXAZJFHRABGMJEUHLURFODFLPTNFKLBRFCJVEPCXVPVQFDYNCUTHHJDSVUVAXITIZLSRWCXIEWYMGFZZDTPQDSHOGKYNQCQYBQIMTDUMTILWZWAZLYNPPMAPVDWRAYVRCNDLJJWRJMYJLUGSAZXOUZGKOAMGFBQTACQIHUPMNPWBHKNOOBBRNQQRBTKUIPGTMNXULWYTIRKYKNISGSSMGAYE");
    const char tmp_msg_0[] = {-110, 56, 83, -70, 44, -4, -108, -8, -15, -109, -91, -74, 3, 112, -88, 121, 66, 117, 89, -85, 69, 8, 0, -30, 42, 46, -4, -100, -47, 73, 43, 50, -51, 65, 99, -79, 110, 122, -26, -84, 80, -19, 38, -46, 67, 29, 69, 3, -24, -21, 7, 100, 13, -53, 97, -19, 31, -45, -35, 26, 102, -35, 85, 68, 80, 56, 99, -75, -87, -11, -61, 90, -1, 27, 56, -69, 80, 25, -68, -2, -97, 13, -32, -81, -101, -2, 85, 54, 18};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.659385827491);
    msg.setSource(61997U);
    msg.setSourceEntity(246U);
    msg.setDestination(10211U);
    msg.setDestinationEntity(103U);
    msg.plan_count = 9832U;
    msg.plan_size = 891963060U;
    msg.change_time = 0.904554429583;
    msg.change_sid = 44819U;
    msg.change_sname.assign("DNLOYMOISBDJDANMLVQNXFQUESPOXOQWXFCRHRRDBQCIHVJSTJXGMYHAKYFGVVBKQILSPGIYNPEEYKZTOKHMHAOYFCIEXDIDHWRVVRYZLDYYEZGKHCGATNQOFPWWUUNRASWUTOTLMLWCENWIAABWBRUDJSTNXVGPUKUDUROGTVBHQCBCXJHIIKXSVBZZQAZMQBAGSZEKZEHMPZBFXTLJCGYSJOFUTWPNJPMKCWRF");
    const char tmp_msg_0[] = {6, -4, -100, 118, 78, 64, 44, 95, 7, -10, 24, 32, -99, 42, 26, 47, -58, -112, 19, -17, 19, -67, -108, -47, -104, -20, -125, -87, -35, 105, 95, -80, -38, -71, 93, -118, -27, 5, 75, -68, -48, -110, 88, 46, -84, -79, 97, 110, -52, 106, -77, 77, -78, -5, -6, -68, -39, -45, 104, -121, 93, -60, 64};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LLODMITLHVXMCEQVMEQKVDDQKCEFYSFTGJPRQUJSUQKSTSZNRZFXUZPZDFGBWZVNQOOPJAZJIQJAJSBJWKBNVMWFSRLVNCHNSXORAGXNYUAXKHLYMCHBTXEPICETOZZBZWBRCX");
    tmp_msg_1.plan_size = 56491U;
    tmp_msg_1.change_time = 0.45182938699;
    tmp_msg_1.change_sid = 15685U;
    tmp_msg_1.change_sname.assign("SEGCSXREIYEIBPWRNCYWQGK");
    const char tmp_tmp_msg_1_0[] = {45, -17, -56, -35, -16, 65, -114, -75, -102, 61, 93, 59, 79, 49, 31, 98, -65, -54, 88, -64, 82, 31, 120, 48, 110, -57, -62, 58, 4, -1, 25, 81, -106, -77, 24, -55, 63, -116, -64, -51, 114, 82, -74, 46, -122, -97, -126, 14, -61, 124, -23, -79, 45, -5, 48, -68, -126, 126, -91, 120, 75, 43, -6, 70, -32, -123, -2, 109, -50, -7, -102, -11, 55, -109, 11, -55, -41, 117, -45, -31, 121, -61, 24, 5, 65, -53, 48, -76, -80, -49, 116, -105, 36, -59, -101, 5, 37, -47, -65, -78, -97, -1, -110, 20, 105, 53, 25, -93, -32, -51, -42, 122, 72, -103, -102, -76, -14, -62, -68, -72, -121, -52, 3, 93, -128, -101, 54, -44, 97, -87, -20, 116, -12, -59, 65, 107, -110, 84, -70, 110, -70, 73, 61, -8, -105, -77, 64, -6};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.521131225836);
    msg.setSource(26752U);
    msg.setSourceEntity(167U);
    msg.setDestination(23451U);
    msg.setDestinationEntity(156U);
    msg.plan_count = 7459U;
    msg.plan_size = 97590940U;
    msg.change_time = 0.312753445569;
    msg.change_sid = 54033U;
    msg.change_sname.assign("QDHXLKRSVAOVFEDMLNCXPHGKNLCHSHEYGOWWIYMAGBEDRIVHFEO");
    const char tmp_msg_0[] = {-118, 87, 39, -29, 46, 37, -86, -91, -37, -79, -71, -24, 50, -53, -54, 44, 54, -122, 0, 75, 33, -122, -82, 11, -119, -124, 86, 44, -28, 97, -36, -115, -55, -124, 45, 37, -93, -100, 62, 21, 33, 4, -1, 31, -48, 73, 33, -73, 1, -117, 5, 23, -101, 49, -78, -101, 60, -126, 68, 105, -8, 29, -55, -19, -61, 94, -45, -33, 39, -63, 85, -13, -7, 91, 88, 37, -30, 86, 20, 94, -109, -54, 72, -46, -119, 65, -77, -62, -28, 12, -104, 23, -121, 122, -2, -111, -124, -48, -53, -45, 33, 115, -73, 19, -89, 52, -31, 41, -41, 12, -25, 82, -9, 30, 15, 110, 72, 49, -44, -1, 45, -51, 102, 110, 126, -83, 118, -21, -108, 4, 18, -55, -44, -51, 6, 62, 46, 104, 81, -68, 62, -38, 107, -31, -49, 108, -3, 109, -64, 45, 32, -17, -56, -102, -61, -101, -19, 21, -66, -78, -87, 54, -97, 115, -5, -37, -30, 57, -69, 124, -86, 116, -33, -6, -121, -28, -122, 9, -109, -106, -97, 69, -2, 61, 46, 6, 22, 1, -21, -31, 119, -95, -69, 33, 10, 29, 110, 86, 35, 125, 90, 34, 60, -124, -73, -10, 82, 79, 79, -90, -85, 9, -78, -57, 28, -51, 22, -24, 113, -97, 55, -87, 59, 33, -25, -32, 58, -114, 86, 65, 19, -108, -82, 126, 93, -105, -123, -14, -95, -53, -126, 46, 36, 122, -119, -18, -70, -39, 13, 25, -105, -71};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.432312142798);
    msg.setSource(7398U);
    msg.setSourceEntity(60U);
    msg.setDestination(1309U);
    msg.setDestinationEntity(112U);
    msg.plan_id.assign("YXNSXRSNFLBDZLHMYPAOMWEJDPGIKAFZCBGPXEDQDCCBWEYAZXTMTDTXAWZMCOZBOWMJRLZKMAWNHEBUDQGAEEKINUGXURUTUBWCHNKZPCGLNAWOOUNQFVXDKDTUTWSKRDOQMYSURASKWYSJZMONBSEXKVEQPOIRYBVSFAMJVFWLIJPBKGLLFSVJYHXGRGYJQLZV");
    msg.plan_size = 24331U;
    msg.change_time = 0.961526982477;
    msg.change_sid = 37994U;
    msg.change_sname.assign("XGVEEYDISKALJAENXCBBSNUMHYTJCHTLJGPBWBQJGKEUFVUMWDQAVDVCQPKDIGODCTKRTAXRBFWBYSFLSAHMNNRYOIYXQNAYYRJPQFXGIKTOVZNOZLSHMEWRKOEWHKRXPAGBCHYLPD");
    const char tmp_msg_0[] = {58, -110, -75, -126, 43, 37, 100, -80, 26, 47, -123, 8, 79, -88, 85, -116, -55, 105, -99, 99, -1, -84, -72, -56, 67, 18, 88, 72, 102, -82, 92, 12, 125, -24, 14, -31, 54, 48, -22, 112, -37, 55, 72, 55, 119, 126, 42, 98, 37, 117, -13, -35, -74, -53, -66, -59, 78, -108, -32, -115, -57, -16, -53, 60, 87, -33, 25, 83, -24, 93, 81, 69, -90, 125, 20, -10, 113, -126, 80, -59, 126, 101, -21, -81, 67, -4, 34, 66, 103, -46, -93, -125, -48, 106, -92, 3, 117, -126, -96, 1, -77, 8, 41, 103, -84, 101, -37, 63, -18, 122, 49, 21, -83, 34, 71, 84, 19, 26, -30, 123, 48, 61, -119, -63, 32, 4, -77, 63, 67, -66, 40, 83, -26, 112, -77, 19, 25, 71, -49, 65, -4, -81, -8, -78, 50, -69, 1, -4, -8, -39, 55, 43, -26, 94, -44, -28, -55, 111, 13, 4, 96, -9, 46, 12, -51, -16, -92, -93, -88, -24, 20, -4, 55, -92, 57};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.412806511125);
    msg.setSource(33923U);
    msg.setSourceEntity(2U);
    msg.setDestination(44463U);
    msg.setDestinationEntity(81U);
    msg.plan_id.assign("NIOGZQMHATOGRRGCIQTNYKRVZFJGGPATSLPRUHOIRSBBMIFZFAHRYSISUIAJBMPAQSLFKETLQOBISXJYDWQGUTWHKRJGFWPBOZKKYIQW");
    msg.plan_size = 4171U;
    msg.change_time = 0.68759588257;
    msg.change_sid = 44597U;
    msg.change_sname.assign("KDFOXOWMDNATEGTGXNLUBRLBQXZQHAHBYQSMBNRNRZV");
    const char tmp_msg_0[] = {88, -95, 52, 13, -65, 86, -119, 61, 35, -56, -21, 71, 69, -115, 76, -59, -76, -8, 82, 91, -48, -20, -14, 96, 5, -44, 124, 108, 61, -87, -36, -45, 110, 92, 3, -79, -91, 3, 115, 74, -8, 90, -128, 123, 0, -66, -111, -99, -35, 91, 60, -38, -60, -72, 2, 0, -13, -77, -60, 71, -87, 22, 31, -124, 25, 18, -103, 17, -88, -26, 83, -93, 36, -94, -98, -8, -54, 55, 88, 115, 92, 63, -97, 112, 1, 50, -117, -86, -80, 121, 73, 16, -50, 104, 87, -16, 70, -104, 52, -20, -78, 123, -48, -57, -120, -69, 49, -53, -24, 77, 29};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.754222381174);
    msg.setSource(40728U);
    msg.setSourceEntity(254U);
    msg.setDestination(6256U);
    msg.setDestinationEntity(116U);
    msg.plan_id.assign("JGAARWBTWQOPJBLGLBWSTFBJYUHSWSCUBHSMAPSDEMTFDENLJOWACEFTYXCZLBCVUEKKQXHXPUNKYLFURGAGXYYDNILRCNMIQDBQKAJRYKFQFXLDJEHEIGDJKJVOPJMGVRLHFYQSIQZHRXIYBMUKQVPZSPUCI");
    msg.plan_size = 33628U;
    msg.change_time = 0.215488379918;
    msg.change_sid = 13854U;
    msg.change_sname.assign("JVJKUAEKBQFXEXXNTVLDHXAUOIHPTFAWXUDCSMKVFCAEGQLDJAGTFICQJKRUTCFQWLNGKTNVGISJNEWGQBOBVAWSLEDCHPOECIIUQFNOTCVFUBMPBYDZUURSITMWLSSFEVNIHHREPXMRNZSGKDDZJPGEZVRZYPLHYSYBFMPYRKOSODZRHMZGINBANZBLJV");
    const char tmp_msg_0[] = {-28, 79, -29, -85, 6, -12, -57, 40, -123, -96, 26, -35, 46, 9, -97, -66, -80, 117, -5, 12, -45, -47, 47, 79, 82, 49, -43, -44, 55, -4, 64, 124, 15, -105, 37, 13, 17, -113, -66, -64, -60, 22, -71, 92, 112, -54, 14, 125, -61, 20, -16, 17, -41, 95, -73, 28, 32, -86, 117, -41, 121};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.372785036543);
    msg.setSource(65505U);
    msg.setSourceEntity(46U);
    msg.setDestination(58032U);
    msg.setDestinationEntity(18U);
    msg.type = 182U;
    msg.op = 116U;
    msg.request_id = 13882U;
    msg.plan_id.assign("OMMAEZGWAKQTCF");
    msg.flags = 38917U;
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("XAFCKKRKNOSIDFPKLBQZEPWTKVTRKJHZWBYQTIJLXPLOBNMUENBNMNPGRZAFYIXDHWEWGWOBFMDJBLJMBQIACSTDHLUEVOZVVXSJSACQMLPMPHESTLYMCTPAGKJYKZOFRHWFYWMVYXTYPYDUVUDSSIFOLRZXTCLDZCSXUVHJEOLYUEGCPRHMWCROICJ");
    tmp_msg_0.timeout = 25597U;
    tmp_msg_0.contents.assign("XOBVOYXKFEFDXBNTYAQLAOGGBULKQDNMVHMXJNBNWEZMUPSQHRZYMNLCCLTWEGUSOIJK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZGKFHJIGPSRKDJNDUPWXUOPZJQBUARTRCNBKYSQQHSVTLTVXWDLDIXASEHPGHFOCJFGIQVEMQICTLDPXBYKGZYMCAEVVAXMOTTAJNQFPZYAFEFYMAGDBSYQIAZOGJGEZSNKHORTTCDFHECRZYWZXEPLGILOWAWLLVWNSQIXOXZHHNTKMOISTBBDSRBFJUHIJBCCKDNYUVCRXHIRQUN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.776734102229);
    msg.setSource(41965U);
    msg.setSourceEntity(66U);
    msg.setDestination(35729U);
    msg.setDestinationEntity(27U);
    msg.type = 39U;
    msg.op = 208U;
    msg.request_id = 50898U;
    msg.plan_id.assign("ZEIGIHDMHLXNHFXFTYZPIAVRGFRTHWJONXDYKUZEQSNPDLUFLSKIHZXUVHDLZVWBOLNZSJPDECUWBDDRRLDKBWPCWNSQSYBSWPIFQPNQUTCWJLXBPKPAILBCYMTRGHMEIONGYCPQBHKRJJTCCAYSUZZJXAOKZCVRZTQMRGCWXAJVNSTOFEMKYHULJTAFOMGUQ");
    msg.flags = 61155U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 36550U;
    tmp_msg_0.lat = 0.875612611006;
    tmp_msg_0.lon = 0.226055465769;
    tmp_msg_0.z = 0.440684230806;
    tmp_msg_0.z_units = 245U;
    tmp_msg_0.speed = 0.624573093778;
    tmp_msg_0.speed_units = 223U;
    tmp_msg_0.custom.assign("HFBJKXURBDKQLEYQRSDFRUAFTCRDPIIOKXPKECJJOBGUVAWPGJCNOIRHYXYOTVAENSXNQOWCRGFCYMWOASLRFLWEWQPRWDMVASZVBSGGHHILFXZITZNZMCTUICEYHTBMCZUZBWKCUFOJJYRPZBQIVJIVUEPLMEZDVSLGLMQGXSOOYLMRDLHFHIAPNNPBUMZDHQWQFYDXTBMDNNTATAYCTVSBHXPAQAXU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GMOQUANIGNIJSEYSZZEAESYWNCKFZMHRSMPEXAKCWTGDNUDMUXCIMCLKGBZCIOKNZOQVKJGZRPXSJXFYTLBHCZERPRUFPQYQGWUWVQAVHODXRLFWJFNHGEWMSHTDMAOTKBYDJQCBIBOLNOTRVYSYDTDYAFPNJKAOUJPKXSGLTWQGOTFYWVWQBJREHAXDUILXIBHPJMUNOEDWXPIDQHLMRXJKSULPCCQESVHAVREILVFRKNFZHFUVIB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.813013925564);
    msg.setSource(24591U);
    msg.setSourceEntity(174U);
    msg.setDestination(43721U);
    msg.setDestinationEntity(80U);
    msg.type = 114U;
    msg.op = 144U;
    msg.request_id = 33897U;
    msg.plan_id.assign("ZCDFSGXPSUYWOXWTUCKHYHXOLXFEGVWDIRWGQNOJYTPDSLTYCZROHDPNOBPRDHWYKENLYVSMUHNNRNYTZGMYPQMJCCQENBDXCWECUQCZVQIKIKLVOVEKTWUVVZGQBJMVBZISEQOFBSCEASLRNBZGMBIAJGFNATLVTTCLQEHITARPIAJQPZGFHEIHKZIFJXJL");
    msg.flags = 37976U;
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 152U;
    tmp_msg_0.reason = 90U;
    tmp_msg_0.value = 0.663651949069;
    tmp_msg_0.timestep = 0.722123410236;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PMEWOIVEYAKCLAFTOX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.112890927707);
    msg.setSource(38250U);
    msg.setSourceEntity(154U);
    msg.setDestination(34894U);
    msg.setDestinationEntity(169U);
    msg.state = 132U;
    msg.plan_id.assign("KLNBOQSKPPGT");
    msg.plan_eta = 1953201822;
    msg.plan_progress = 0.722602189741;
    msg.man_id.assign("WDPFKXMRPRGJCRUURGBNZUKULXJAHTBLDCRVRITYBCALOYGFCGVHSMIMTSVUDIZFKWWZLOAGZZMOVNPYYMICTIGQEXNRHYTVPQUNVCVHDQWF");
    msg.man_type = 22353U;
    msg.man_eta = -229909613;
    msg.last_outcome = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.191037026332);
    msg.setSource(7941U);
    msg.setSourceEntity(55U);
    msg.setDestination(30803U);
    msg.setDestinationEntity(36U);
    msg.state = 125U;
    msg.plan_id.assign("NTFDUVSXLEHVHKKRSFYJQBWRPGEJIASBKESMQZLRPOKUQXOUHFDMPRCJNXCABCA");
    msg.plan_eta = -311379911;
    msg.plan_progress = 0.490759872563;
    msg.man_id.assign("OCCCHXXZDSIZLBZLVKSOGXEGEFOAGLHWLYJUKCZPLHSNAYFBVVAHZUMJDMZCSAQTMUKJUBIMQKMQNWVEBWWIDHZXVAPALYIFQQCODCWHYDKKJYQHOPOPTUDGFTIGISTEIFSWUNUUNIJBFPLDAXPFCJYDBFPHGXOQEJDRPJWMUWREQOPJPVNRXKZSRTGWTYTEFNYNHVANRGLMYNDILVUJBMRXXRZCEWMHSCOKGEBKANBTFVKQRLEVSGRRTTZXQ");
    msg.man_type = 1875U;
    msg.man_eta = 1532100050;
    msg.last_outcome = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.731955226498);
    msg.setSource(49963U);
    msg.setSourceEntity(30U);
    msg.setDestination(64738U);
    msg.setDestinationEntity(135U);
    msg.state = 40U;
    msg.plan_id.assign("RTUZFENKYROSRTBFCGCELJWKAWUXUHXNZDSGULHUZUM");
    msg.plan_eta = -132405263;
    msg.plan_progress = 0.998400986418;
    msg.man_id.assign("XOUQHGWYWQVBFEHEOJPSQGKGLMMJDLECTKQGUTFTEFUTVIDLQMPSNPSGKOZOCNEHZURFZZCFBCBSMCNXRRWYTVIKCJAJEDYBORQOMIPBIP");
    msg.man_type = 57205U;
    msg.man_eta = -1160134965;
    msg.last_outcome = 23U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.521039401219);
    msg.setSource(55811U);
    msg.setSourceEntity(114U);
    msg.setDestination(32794U);
    msg.setDestinationEntity(82U);
    msg.name.assign("WNXJKFPDZJPAOSQWVAULBDHDGLUZMYRUBTVXANXUOHPMBIVYNEPGCYG");
    msg.value.assign("JZUZMJBESIYHWAMVYDWPWYOGLDRUGVPYRNVGQKMXTMJDOZXFXUYXEZKERZNRKQSIWSLEJCUGDFITCLDLTBQGSICEVOSPQHIAJPSTKVBLKTNHOURHANMRXMSLADWUEAOYPEXDVSJZHJHPFIHCKGSWZQFQLK");
    msg.type = 93U;
    msg.access = 109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.499011537659);
    msg.setSource(8482U);
    msg.setSourceEntity(71U);
    msg.setDestination(49930U);
    msg.setDestinationEntity(149U);
    msg.name.assign("ETZWBWKHIITZWHYLSBJFJNKWJIZZCATNVRKHEUGGKJUXXQRRDHRXHAOWBPEMFJPUCQAALHDPDZEMMPQMBTHPCOJYEQNUWQJEFSWGYVNXFPUISNWBLKKMRACFGQGBUBUSZVVCKXZPTMXOLYNGVHEFFSSVDZRCLPGMUABWIKATZCPYOPOLQOSHCYMDKUBQLSKYSWEJXFNMDIFNUXDOVTOMIGJA");
    msg.value.assign("SLTEBRVTNVMNVKYUZDJZ");
    msg.type = 55U;
    msg.access = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.663108966888);
    msg.setSource(14251U);
    msg.setSourceEntity(7U);
    msg.setDestination(7712U);
    msg.setDestinationEntity(178U);
    msg.name.assign("CBKCWZAOLSQLGSFMEBFIGPFKINAMTYIOPAHGKLQAKZKWEEIRLFBJUGYRTJFAIJCNPCGHLZBYDUKIAPXIFGRUYZHJDUMXDQGIWPEAJPMRZDIMMEGOLNDVCKDJMUHKKARUWYNWXOQQHWXCDXVFVKTEOSAHXRRNSFRVPQCY");
    msg.value.assign("VTNRBTBCZFWSWUISVROVUKNURQSLULXDHPZFRQFVAWKFDVRBREIGSYHTMKNPPBPINKUYBRDTQDJAOMKMUXLQCXZQDGUAHERIJWEWYJCWCLSYNTZTBAGSPBFGAHGCCJBUVXSDTQLVFJGXPJLKKHLTIISMBSKJLRFWADLHAWMYNFMZMIPAXCGHOTZIKHGEEFLNMQYKIGHNOEVDX");
    msg.type = 169U;
    msg.access = 43U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.983701089542);
    msg.setSource(58279U);
    msg.setSourceEntity(30U);
    msg.setDestination(30729U);
    msg.setDestinationEntity(5U);
    msg.cmd = 66U;
    msg.op = 55U;
    msg.plan_id.assign("THCMJPFCQRDOJHTMESQREXXVUWNAOSISBDLURHBGDKXIFCJIIKAHMAEC");
    msg.params.assign("PDSFUYQIVPEZENHNJKGCZGCUSHPJVCAMJRTAGRKRGLODWAOJFRXZMBVNEHBIDIXOJUVAKTZEBDYMOWQYUWWWSBQMYSGWDNCCZYGALRPMGCNMSFMZUVZVAQZNOFXQMLTNKLWY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.0823921701143);
    msg.setSource(54229U);
    msg.setSourceEntity(249U);
    msg.setDestination(7112U);
    msg.setDestinationEntity(106U);
    msg.cmd = 69U;
    msg.op = 48U;
    msg.plan_id.assign("NKIPDMWNGOGFBNPUCABYXVXITIQEOFMGSQHCDLGEBIRUQNFTTJVJQBXWCUOARJPVRHRJKLCUOTZNZYLWMDCHPGTLCTVQBKXVTJGOQGSCTPMSRTAXCQKYXBUKHOBZIDAEBFYSLUXFSKWFBRLKJAJQZMYVEOQZSRZPKWNPGNVPJVFMDXNOHCWPYAZUILEKOIIVAWHSRHWKMRDJSNALDVINHDXBIDWLYUMFSFGFAZYM");
    msg.params.assign("BUUDSMBRYHTCOPLXPBKHGHNUEDRXYDXLAPQVMKBHYS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.502236645519);
    msg.setSource(46816U);
    msg.setSourceEntity(41U);
    msg.setDestination(4447U);
    msg.setDestinationEntity(35U);
    msg.cmd = 5U;
    msg.op = 175U;
    msg.plan_id.assign("VAKBWSZQHHTPKTEMVRCUGWBKTOKWIMODFBLOOMXTHDYJINENA");
    msg.params.assign("JJISPRPMSSUTRWAYBRMKEKBAWGFFQEXCTYZBFEJPI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.690239846598);
    msg.setSource(14336U);
    msg.setSourceEntity(203U);
    msg.setDestination(21782U);
    msg.setDestinationEntity(249U);
    msg.group_name.assign("JMHQFNCTODARDIBREANPOMBBEROFHYZSNLXUCOKVLZYXUJFYXYAZUMJUFEQVAHMLBAXMECRWDLUIWYDZENGCDIWIJGNFXLUWSGIWOVABWEVEZTYAGENRJAEQGB");
    msg.op = 15U;
    msg.lat = 0.166961835371;
    msg.lon = 0.259668443034;
    msg.height = 0.704425015698;
    msg.x = 0.240086175511;
    msg.y = 0.0192530325206;
    msg.z = 0.765201131318;
    msg.phi = 0.24188522578;
    msg.theta = 0.670672587622;
    msg.psi = 0.695742565305;
    msg.vx = 0.923204190516;
    msg.vy = 0.143604191499;
    msg.vz = 0.167252948519;
    msg.p = 0.970612461516;
    msg.q = 0.566246908166;
    msg.r = 0.266948434144;
    msg.svx = 0.0131355652395;
    msg.svy = 0.300541038849;
    msg.svz = 0.84375378564;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.779487679455);
    msg.setSource(61750U);
    msg.setSourceEntity(148U);
    msg.setDestination(19880U);
    msg.setDestinationEntity(137U);
    msg.group_name.assign("ASXEDSFIKJIORPEZQOIMMGPFGMOWUNPHMHDVJZVLZTFEJYARLZJWVSMHTZDDCFUKNLRUYBNBIGHRLAJMUYEWUECYBNGLAKJGTYBSYCDQMFCCYWIIRCQRWVTDNKEPLSTEFXHAXOPCXDLFFZQVYTHBICTXVJBRQTDIZDPXZNQACRTPVMNZGXOOBUPJHWDMHFQUBXKNGGWUMAAQLRJKHPKEBXSSKQ");
    msg.op = 39U;
    msg.lat = 0.716773516996;
    msg.lon = 0.946731377418;
    msg.height = 0.981022185241;
    msg.x = 0.347573253205;
    msg.y = 0.0631416047826;
    msg.z = 0.168462309419;
    msg.phi = 0.0781976181477;
    msg.theta = 0.412673054491;
    msg.psi = 0.572581710284;
    msg.vx = 0.390421174732;
    msg.vy = 0.687986942884;
    msg.vz = 0.0303190995307;
    msg.p = 0.950748311362;
    msg.q = 0.0593050472238;
    msg.r = 0.462759867753;
    msg.svx = 0.728144916025;
    msg.svy = 0.201165878668;
    msg.svz = 0.674329462271;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.2048432509);
    msg.setSource(32051U);
    msg.setSourceEntity(86U);
    msg.setDestination(3128U);
    msg.setDestinationEntity(206U);
    msg.group_name.assign("FGHAURZIXVBDNOPNUWNUZGGPMAVTBITKFDSMHZFNPXOMEJAVLIJURSFQBFYBCTXNUBGPRDGDSTNCWWZOJGIUAQMCJZHAWHMLKHHPWVFHSXKZLDHBLQOAIJVOHRSWOQMCKRRYCTJJQVZKLBPYWKGVDQXFMAXMNRSGPUYOIEKIVEFJYZXLOZTZNYCEBSCYNYIJVGAAFCPLEQITKMUBWNBELPEQHOLSYDLXWER");
    msg.op = 135U;
    msg.lat = 0.415354872562;
    msg.lon = 0.607257505831;
    msg.height = 0.809509216735;
    msg.x = 0.489634639961;
    msg.y = 0.891375312918;
    msg.z = 0.569543287722;
    msg.phi = 0.195533368037;
    msg.theta = 0.768327767863;
    msg.psi = 0.19981736029;
    msg.vx = 0.110985867637;
    msg.vy = 0.329316294952;
    msg.vz = 0.581813817906;
    msg.p = 0.544855341278;
    msg.q = 0.427303626766;
    msg.r = 0.63951763232;
    msg.svx = 0.995487385993;
    msg.svy = 0.935146823341;
    msg.svz = 0.492413733819;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.355977123467);
    msg.setSource(46001U);
    msg.setSourceEntity(169U);
    msg.setDestination(26569U);
    msg.setDestinationEntity(57U);
    msg.plan_id.assign("YOJMSIGUCDIZVKEGJIAHHJMAWYKHFBRVTXQTQFRKGYJQOYSPVWFRKNGOCTVHXPHFBGMHURBQWXKIOZOSDMFVYJIVZSJLVNTLEMXZNKAPYMISQDDVYRWXTRBPSFYZETTLEQXWHLDQNVTVNNZNHAUSGBBJXPPUWRRZLLMWEDFGBKQACPCYUMNOGIKCARXWADSOCSUQNBCIPE");
    msg.type = 226U;
    msg.properties = 168U;
    msg.durations.assign("BYQXSRVUQCJPDOWTPCSDLNQZDYDUEFYGOWOKHTIRTHOTEBTHFFRLPVHOWLYBZUCUMLVVNCAHAGJBWFSGTQIPGDHKAERIAQVUYWMDIMLNBGQFCOUXIRVBECABJPJAAASEJPLNMBVRDH");
    msg.distances.assign("BGWKXHZHZVPABDKRPLARETZITNUJBTTNSGEJLXPNNRZSZHLHJOARLFWVLJYREGAFGOWGDWYPETNMJQDIPHEJVGVSUOVIEKQRQIWEZFDOMBMWSWBKX");
    msg.actions.assign("HCMJDRWDAGWIXLCDTGRNNOFOBEFXPCDIBRPBUXTFOZEKYAYORFESHWWKBYGZRYJQKONOCTBKJHDZCFUVQFFJOIHG");
    msg.fuel.assign("BNPUZYLAPEVPQCXSRUJYKNFESSRONRCHTXPWIHQWFWIXCEPQJEYDZIAIKGWAFVHIGEIHLVNALSSDRSNQRCDKRCTKMFEOTQFGDNXILMOQDUOYTDGBJLETKZFJKBZOSKZWGTUBFJGKMLMRPTQVHSJBLHDPXMMZNZTQCAGZVADTMHAVRUAVRUEOOWQJDYECCMZJRNMSWNXGVXKBFUJBFGCQEXLGTDNLOPWHXIPBWSYIPHOKYXIYOVUJBUUZMAAW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.430706944451);
    msg.setSource(63845U);
    msg.setSourceEntity(229U);
    msg.setDestination(18132U);
    msg.setDestinationEntity(217U);
    msg.plan_id.assign("UMHNFGVAKFUYFHXEWKBOTGCQEXZZDVINRDQJUYGDARFJHRGXSBBXJTMYIC");
    msg.type = 194U;
    msg.properties = 225U;
    msg.durations.assign("CQQEAJYTCJWEFHQGIQOYVWMEMJUXBGWYDNVZNOYFGWSRHPVPBGCLZNYIDIXHARTUFPMHSEFHXWWLRMTYZMXREDTMVLAQUPBCZIZBFARCPGVOBMPJUTA");
    msg.distances.assign("VJOHMKFHSGWBBJJYBVUJQNHKVPBKLCCFTZKZQXFRXKAPWCPFPNPTZIYWOEYOISSCOWCBQMAIDFGVIYDSLIYKNVYXULXCIUUPHUBDYGKJRSEVVOEYAGLJWMOBUHZJLNYMRNMCSDQNQPDDAAPUXLJSHNRFTAXTVYGLJMNNLXTMBHGWEAAMTWZRMAWTPLEEVRTVEFZIATDHORINSZURCJQZ");
    msg.actions.assign("QSDZYJXNJIRTVHWOXKHUEJYELCITJVWXYCMEAJZSJOYXHRGQHSGY");
    msg.fuel.assign("LGHZKUXLEDCJZDBILDHAVMVDWOEVBRJUXNSUOBKLWKDJUYMEUVBKJDRJWMTSEUYCMZRSSHVFAZTQHSWUCWKPQEMLQFOXFQYQAIJFGGMXJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.580837017138);
    msg.setSource(61541U);
    msg.setSourceEntity(186U);
    msg.setDestination(54754U);
    msg.setDestinationEntity(237U);
    msg.plan_id.assign("TPOQLSSPZHVFMRKDZZTABFDCNFPFGMHHUBPPJCVLYBQFCNLSKOOPYZYWLARIGRNAEMKEQEIMIXOGSAOBEUWGHPKWDXYZJAWMDFRXSPBKKKOTTGUQCMYLUEJZAUKDVENXB");
    msg.type = 225U;
    msg.properties = 233U;
    msg.durations.assign("PSPLXKXOQOA");
    msg.distances.assign("PSVXUWLJKSNNBZNWMCEXTIADKXQJHCZFQIENMUWNRPYSFBEPVFKZZHJJNNTGJWHAFYUQFVRIEIBZPEUODOQGYDCGWQTMCCRDSAPJCERAJHTHAZWUXHHGQGTKCOWJCYULPILQBJSURVRCUQBVPLYDLV");
    msg.actions.assign("FLDPTVZIQIHHBXEECJNFZOAHTSCWNLWEVJMYSAOOWRGCMIJZRIQUKEZCKOPIMKHONUFUJDALVBMVSSNHYKBHTOLYMDBIXYDPIYCCFSBTOSQGGWWTHHABZFKDFBUJRRNKQYWTQOKHDKYNCWETGYOPVUXXQPGGGSMJXMVUFQ");
    msg.fuel.assign("PXFHBQFFKSQOYFMOKMWDGHTYAYRQMJUCCKIAEIZOJQHRPOJAGPCHNOAYTDOAXQWSBEIIHSNYPKKLIJUFXPLGSMKXWUBXRRWGGPAWECXUZZTNKHBCHLIDLVNNVBFBZRYDUJQMRWIOMBEMNHXFZNRTZQDSRDJPWFGEPSYHEJUJELMTGDCS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.508427640362);
    msg.setSource(39157U);
    msg.setSourceEntity(188U);
    msg.setDestination(49486U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.596843655045;
    msg.lon = 0.423494115818;
    msg.depth = 0.594964431724;
    msg.roll = 0.751474293595;
    msg.pitch = 0.689504711506;
    msg.yaw = 0.37096886458;
    msg.rcp_time = 0.0096223233794;
    msg.sid.assign("SLKBGZTKAWDAXHDIZTVBBTJEYQRBQEDHFJSBSCRHRMTKZZJXKWQFPIAKSWTXCXDCNPEEXKBEUAJGHUOVQRLAVVUVWFSGLQEUEYEZYKJGHMFGCXZPPHPCJLDC");
    msg.s_type = 239U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.813852669747);
    msg.setSource(57776U);
    msg.setSourceEntity(193U);
    msg.setDestination(64942U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.154794317994;
    msg.lon = 0.753052290991;
    msg.depth = 0.109704500221;
    msg.roll = 0.660957903424;
    msg.pitch = 0.541992995359;
    msg.yaw = 0.362851546243;
    msg.rcp_time = 0.618689491872;
    msg.sid.assign("PGIAWAKNHDEHCCROPCJDXLVRZQNZTBMXWDNIHOASKJULWITPDBPQMCGBRUJBSTSXGYTWQEKMOHSXERFNQIXMCIZNCQJQSTLPKZBYYFGYWLNFYHGWGKRWUTDDZUSAIMONR");
    msg.s_type = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.783771318237);
    msg.setSource(47780U);
    msg.setSourceEntity(254U);
    msg.setDestination(37150U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.935869398159;
    msg.lon = 0.230266529626;
    msg.depth = 0.51713709311;
    msg.roll = 0.728117895737;
    msg.pitch = 0.285697899182;
    msg.yaw = 0.438257894968;
    msg.rcp_time = 0.985502266022;
    msg.sid.assign("TCQGASPAHZZZDRRBRIYDPSAMSZWYRKUQVIAGJPOJMLBGBCVWVMFEWYMIFCOBADYVZNP");
    msg.s_type = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.918750094186);
    msg.setSource(6635U);
    msg.setSourceEntity(245U);
    msg.setDestination(45372U);
    msg.setDestinationEntity(54U);
    msg.id.assign("IKUCWJBZGQOGNZKAKLKKTMB");
    msg.sensor_class.assign("LFSXKJSGJNELEPXCJYGSEUYUPXTCNGDDKCYFFJQBBXBUVHOXDUOBAXYXUUFSPVMEKFLMFGRCWJTYEAWIVMYYPZPPOYEANIGTHKQ");
    msg.lat = 0.00822675482159;
    msg.lon = 0.43849833696;
    msg.alt = 0.0934328748625;
    msg.heading = 0.427832114033;
    msg.data.assign("ZPIOEIUXBSHPSRGMSLEOQHTQIJMZZYZVZMEFXGTJMXHLVULNVCCKYISGLJXBKQMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.445705415786);
    msg.setSource(62402U);
    msg.setSourceEntity(56U);
    msg.setDestination(19175U);
    msg.setDestinationEntity(19U);
    msg.id.assign("LKDCEZGRBSDXVXZGXQNFFJRTGCWIKKJZWFRKDEOBUMQCDLJENROBBGZGTHYSDWTTOISEDOFRWXSLN");
    msg.sensor_class.assign("UPKNHSQBJVXEQBTSFIMC");
    msg.lat = 0.365311188791;
    msg.lon = 0.371824242728;
    msg.alt = 0.169527611304;
    msg.heading = 0.755927122067;
    msg.data.assign("QDSMYWFJJLTWGHENCHVZJXLFCEDCUNGHILPKXQZFKUAUYWNPAXZSHPLURBQQILDMPOVZJISVSCSGQGXDMNEGRDFCKIWQQKSXOVMBBFPFXJTYOSOVHRUQNUTXTXEVLYYDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.126170114645);
    msg.setSource(51169U);
    msg.setSourceEntity(4U);
    msg.setDestination(29621U);
    msg.setDestinationEntity(161U);
    msg.id.assign("WGXUZXLVWUFYYUQFXLWFFGIOKYGHQBWEVOLPNZKCYSVNBMODNYKZMBHYMIHAZRHGVQUCGMUYKBRPDLGRRTOTTXHXOFHUQLONUSRSAJRXSGDSIVIBDOSWOECHRPHMQCBNAIHYPVNQPWLQLANTDVMUVKFVZJSYQQSBECFDQCDHFU");
    msg.sensor_class.assign("SRMEQUFACHRSKXC");
    msg.lat = 0.997943070095;
    msg.lon = 0.396469740403;
    msg.alt = 0.920129180443;
    msg.heading = 0.0892609908709;
    msg.data.assign("WTMNPZQRKKVSRNGVSYYQESSKBSFTOLDMOXXOLQKUFCTWNPIIQTFDFWATUEIAANFXCIGVVEAUDSJYCJMCGBYPKQYOJMVWSLTHYKTGIBOHFIUCETLIOZZAAKMZAYGDRMRWUOCXMQLUNPJFRJDPADJDBTQJQILBXNPMEHNWUORWMYZUZBGSBCJGPNQOHJDHBVPAXCGLOWQFAYXK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.65760415706);
    msg.setSource(18191U);
    msg.setSourceEntity(161U);
    msg.setDestination(13430U);
    msg.setDestinationEntity(43U);
    msg.id.assign("NPXOAJISWYGICQFJWOZNNGEVAEGBMYHVXBHDQULODUFDBAZRDEEDAHSELEPNKMSYEOLBCDVTOSXKKDITLMKDXLYUXMSXZZWSXNZRYRRUTHFCWWVYMHSASTPRVCPNWQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.502170894308);
    msg.setSource(26631U);
    msg.setSourceEntity(234U);
    msg.setDestination(23191U);
    msg.setDestinationEntity(14U);
    msg.id.assign("EQJIKJONRTABMJQQYAPNZWM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("UAMBFVMYESOTCREZYVOJVPZFRGKJEZMANXJGRAKICYFTREJDOJJYAPZFIIAYVQTIIWCTXIOZLUGGRHVQCRWBKAUZPOECVYXMESOHLVKOLXCFMYDMFDTVUHCEBWZBXPAQKIQIRBXKUFFHEXSIVRSKTPGQLKWGDBGMYMWSGVFHLKUBAWYSJSCZP");
    tmp_msg_0.feature_type = 216U;
    tmp_msg_0.rgb_red = 201U;
    tmp_msg_0.rgb_green = 50U;
    tmp_msg_0.rgb_blue = 24U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.387337096297);
    msg.setSource(20379U);
    msg.setSourceEntity(230U);
    msg.setDestination(43127U);
    msg.setDestinationEntity(4U);
    msg.id.assign("XJBKDNJNAGHMHYHTILXVNEINBIGQKPDLNFONOVQFDAEZTTQCMXYVVWGQJVSHMWROGPOFKAZHQY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.918996872132);
    msg.setSource(28289U);
    msg.setSourceEntity(109U);
    msg.setDestination(26125U);
    msg.setDestinationEntity(146U);
    msg.id.assign("IITXNNLITSOSAKFQZVFRUWMGAAKQFQMUZJIEVHOATJYSBGMCOGCXGSDBSDPGVDUHTYSNZARLLCKNCMVBJOMWDFISORSKMKBDXCJEWZHAJQIWYBXFEFEUEQRJAZRGGCYXZVPOHULORBTPIRMPQPGALHZSFVCTYDYCJKDFVMQTNLVQKPLMTVBEIWPNZZEJWDTWNOXUYHNORBCDUKBHKQHSIYUGQPRVULWLWANXPCGMJXZYKRDYOXEFTEHBNJ");
    msg.feature_type = 250U;
    msg.rgb_red = 103U;
    msg.rgb_green = 103U;
    msg.rgb_blue = 193U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.574731571675);
    msg.setSource(35934U);
    msg.setSourceEntity(20U);
    msg.setDestination(60374U);
    msg.setDestinationEntity(6U);
    msg.id.assign("YPYIFGJLQLRLPPODSUWWSPMUOUZBWTKWTQXHRICEZALOKQMMRJDZDRLXDPEXUWHNTUGJSRUUJKTQAQDIVEPTABZHLYISTSBJGZNHQHJVEDFCWZQYEZFDYMXCKCCAYMROOZPBSTKWHBLTNYAXCVMXGYSRGFJKTIPGFNLVAQBAFQIOKWYMVBETAVGUZFAOJURNKFNEGMYBRVFCGNCXOIS");
    msg.feature_type = 185U;
    msg.rgb_red = 21U;
    msg.rgb_green = 46U;
    msg.rgb_blue = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.730278673241);
    msg.setSource(17433U);
    msg.setSourceEntity(86U);
    msg.setDestination(51856U);
    msg.setDestinationEntity(25U);
    msg.id.assign("DGTUTTSWGSENYCSUXSOBDZHJPRRTHLZSNICLKYGLNFXADRJQM");
    msg.feature_type = 215U;
    msg.rgb_red = 83U;
    msg.rgb_green = 219U;
    msg.rgb_blue = 233U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.448690581195;
    tmp_msg_0.lon = 0.406314587783;
    tmp_msg_0.alt = 0.823822308492;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.94561273562);
    msg.setSource(62632U);
    msg.setSourceEntity(109U);
    msg.setDestination(46626U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.970453658029;
    msg.lon = 0.57388638587;
    msg.alt = 0.383695246087;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.523587658541);
    msg.setSource(25162U);
    msg.setSourceEntity(109U);
    msg.setDestination(36278U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.212216428553;
    msg.lon = 0.204274886285;
    msg.alt = 0.595126134314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.213737151672);
    msg.setSource(14208U);
    msg.setSourceEntity(131U);
    msg.setDestination(11478U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.455777905914;
    msg.lon = 0.819288672705;
    msg.alt = 0.290124059456;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.521055805107);
    msg.setSource(8128U);
    msg.setSourceEntity(147U);
    msg.setDestination(42223U);
    msg.setDestinationEntity(65U);
    msg.type = 136U;
    msg.id.assign("WVEYKHYVMTLDVBGJIPDKDWMXELRLNVTIDCNKQSVQNXULOILFHAFTQAIXWJSDMZRJFGWXUGZGTWKBTCQZYAGQVYWJZEGLSWDJDYUYPTEBBAGFXNDSINYQKOBNHWNHTUKMOSAROHPQPSCIJZSFESORHTXCALECCCUXRPKQAFKYDPOGIXZNROUJFI");
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.4627409912;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.779767969496);
    msg.setSource(47128U);
    msg.setSourceEntity(30U);
    msg.setDestination(18792U);
    msg.setDestinationEntity(252U);
    msg.type = 41U;
    msg.id.assign("GAAYEEKHONTLGQLZSKQCZATMKKYVQLPVRGRWNGTNLVFSFKPQAEZCBMXLSLJVJAVXWFROHPOOVRYRITCOSYKIWMJIUWIRINAEPZKDOUVLMPSRGHBCCTPUETFEHIGBCGSNBBDQUNMJEBXDSEGKIFQIOPRDJJKTCPXALHHXUYZMFFDIUQZBZOQLDAXSXOU");
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 66U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.896100504885);
    msg.setSource(41424U);
    msg.setSourceEntity(101U);
    msg.setDestination(54205U);
    msg.setDestinationEntity(58U);
    msg.type = 222U;
    msg.id.assign("HFLQRXFHQQREDYVRYFPBSAIPKBBRZZXRCUFZSNIAZJNVAODSGKUKDACOMJCMRHSEUADSXWROGFAYNLCGTLEPMDQTDUJXTEVKTZHUTJXREFIVIOGPC");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.232525430956;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 25950U;
    tmp_msg_0.custom.assign("UHIJVRTYLLDMTSIYSAXOJEIVVBJMVXBHYZNNGSCPCVORRLFDEFOWNQGNPWDBTILURMPZECZIDKZYPVERQHYAPJPKBUFASZVCSJIKULKRGLSTXNKFVTCJHSNAGHMFOWABYFIZBWGBQZCQPEXPOKBHOPFYW");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.937963456214);
    msg.setSource(7366U);
    msg.setSourceEntity(55U);
    msg.setDestination(9626U);
    msg.setDestinationEntity(223U);
    msg.localname.assign("ZLEXOXZDNEHQMCGSAICHDMMDNZSIYVMOWWBOULKAKJFSLMEJRFVUOBAHPIJVRXXYJSLZKKGVPWBZMCULFRYPVNFLULNEZYFDAGBRAAHBYKIWEQLOTTQNYJQODMMJFSWGZDHPDSEOFXXKDPEQT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QYZJYSKXMDVKXNLWPPHIDFXYFTMLOPSIEJQSXRNPQKTOFAYPCGKREUZYDAHLOECCZMVBWWHTHBGOOCRBBGJFFEBIXNQTZNEGTDRVMTBCFDDYNVLIDQQXGFALJMBPNSWDMIIUZCVBMWCOHIWJNJDMKXJRICQUSUXRXPDCNANZLVLOGSSEGKZFKGIKOBJUCSEMTURVGWAVLQYHHXYZFAEFBHKOGILPNWRALUKRPUHTZ");
    tmp_msg_0.sys_type = 38U;
    tmp_msg_0.owner = 28859U;
    tmp_msg_0.lat = 0.132135731278;
    tmp_msg_0.lon = 0.584625000794;
    tmp_msg_0.height = 0.714731155358;
    tmp_msg_0.services.assign("BTUNUMDLYDUJGZQKNLAUGAPFSRHOIWLVYICZRRFXYZGZMMCBPNZUCAEGPVVBWPLCJICPBLUVTPEQIJZSUAHMWULTDNQZ");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.0501226556524);
    msg.setSource(57462U);
    msg.setSourceEntity(143U);
    msg.setDestination(27275U);
    msg.setDestinationEntity(58U);
    msg.localname.assign("JLCPCNVLANNRGNAHKVOZUXTIPEESYUNPTJHIEGOTWZXRSFMDJMGKDFYSCXOHVRMBBFURLTHCMIPLFKZANOILCUVFZUTWYWJKGEOHMADOMTNQFCGSBUUTONDOUVDEERQPRIOKEIDVJBYYRFZYMADHQVSPLIGLRFDTXNWZMKTFRPWPYVWEYQBAKMJHQWAGTBCJHABWZJKEYCQJYCXSCISXR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EJGGVHLTAEKFFOFDM");
    tmp_msg_0.sys_type = 159U;
    tmp_msg_0.owner = 9944U;
    tmp_msg_0.lat = 0.121672228751;
    tmp_msg_0.lon = 0.467744226914;
    tmp_msg_0.height = 0.974626086647;
    tmp_msg_0.services.assign("HBCXRQSDPHQQJJCLDGCIMJZRGDXLTKXVUVEQMCWJTTNOFGEJKFINLBVCYPBNPGAEEENMXZEU");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.744207617748);
    msg.setSource(26480U);
    msg.setSourceEntity(172U);
    msg.setDestination(49540U);
    msg.setDestinationEntity(161U);
    msg.localname.assign("ZAHFXUREANASOCXSIQNOBMHIAIQPRSNNXPJYBSWVLRZDWEFIYUOZYBPJXYAZUVBRYXCXALSVUEYZFRRO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UBOBJRZKSHFYHIZ");
    tmp_msg_0.sys_type = 125U;
    tmp_msg_0.owner = 5376U;
    tmp_msg_0.lat = 0.958750052169;
    tmp_msg_0.lon = 0.748116373547;
    tmp_msg_0.height = 0.38447760444;
    tmp_msg_0.services.assign("VWKUAKSUPJBJHBNBFVPEXZZQTSDYXFHHZMYTFZDFUEFVIRTUPSYVJEJRMNUCKGRPKRDPHOIPFHJYEAGWFEPAISZLOZEEVOLNNKBLUQLIWTYKVWEKVMPMXDIZISGCIAJMSPTXZXLLOHCWHQYLRXOAMCQFGYOTQGCGBRWOLXOVOUNQCDZKGGLXXJDKXABMHNWRBCJIL");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.528328580545);
    msg.setSource(38755U);
    msg.setSourceEntity(205U);
    msg.setDestination(65450U);
    msg.setDestinationEntity(199U);
    msg.timeline.assign("EANWZLVCYGXTUXQJBMYCWXMDPGRMBVTKZIOQPZBEQAOLWUGOJCJ");
    msg.predicate.assign("QYYCNQYWLXIYLOJKCCURLVBNQSTQAUKNFRVZEFNKGVKBZJLAXQCDWMDXIOEPXQDHTJPUDIMAFGYNBKVIQAJMGSOSPDXOHGSEPWFGMOZTWYVQGKOVBUQRURANLESROIRDTETALFWMCAWYMNYODNOSZFGV");
    msg.attributes.assign("XWXJHXADZEQDBQNOBGMQNVDJLMTOMDOVPHTQHOJTGENTZSEQAPIUYKXLHUZJYMXSJFFCTWG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.15532947035);
    msg.setSource(23836U);
    msg.setSourceEntity(58U);
    msg.setDestination(19543U);
    msg.setDestinationEntity(120U);
    msg.timeline.assign("RTRVWJZESFMQDZYWOOWDJYQSLGQJGBNBTLMUFNAPIHEDGGJTFYAIMBHPZJVODND");
    msg.predicate.assign("FQEAGHXRMTBSXJBEHRPZKGVQLEBOKJNXINZZCJZQAJWCOKYXYKXWJPAMONEDSIQMSLYJWVQNFHVAMYCZDTKGPZZOGIRRXCWTLIHTSADYMMXLFVDRYBCVKBRNUROTEBNOALMLHIUHDQUDIBPQSBXYOFGEYFWTCHMVECEIDIIFJABLOUPSFPVWJDRDSZVKICEAWYFGNMKPVKOHZQULUDRACLKTPOTCN");
    msg.attributes.assign("DPUEWRDFBMCPHYYFQCFXXYGXVTGLJOUZEPPRWVBMFQWFZWCMMDFFLPKBZUAQEHXSKHABILMRVPKIHKAVLZNWLFNUAILEJMGZXKI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.833628209847);
    msg.setSource(26437U);
    msg.setSourceEntity(163U);
    msg.setDestination(59222U);
    msg.setDestinationEntity(242U);
    msg.timeline.assign("JWNDTILIOBKWJTSXMGILYDGCHQXLFAHZQLUCXQKEUPFRLQCJEAWTVYTJUJOXNIKACWZMRZYJBDWSCTGIQXEDKYMOMGWRAAHOJPIBNPZEAWMZOSVXKZLEDGHCVUHYBJRMSUYFFDR");
    msg.predicate.assign("ZFCVRQJTIKNCHHRAWDMXLQWJDBZSECETHVQBRLMILJFMPTPVRNOIDGLPUNQRIUSFTGECAMDYHIIHNSVGXAZMHXSTEZBSVJRJBMXFBWYBOIFT");
    msg.attributes.assign("ODBKJRBIPQANMKGISYZEUGDCUQDKWBJUQNDMAOFRPREDVPICEJFCAODAYONXWXGQLVKURCMNJONTESUGHZSWDSLIPKVVWTGXIHZHAOMCPHIFBOUBFHCKFSFMYJVYIKAYYNZVFYRWOHRSXMPBXEHVXSJTGLOGZUNLTQFHNAUTAWIZCHRLIZYYQSNIWPCSBGDRHBZKLWFQEDMRBXRVLENSCWMJWPKBVTTFELKMPUZEXVTLXGP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.651044923551);
    msg.setSource(27621U);
    msg.setSourceEntity(35U);
    msg.setDestination(32551U);
    msg.setDestinationEntity(190U);
    msg.command = 18U;
    msg.goal_id.assign("YVEEQPOSFPTDAVKRUYLHDMUAWVZGNYTPWIJTIFAFPKRSNNMVWNMSFWPZYAFLQXEOAWREOUOPGWKTMVGBLCAFQBNHZKHJJDSSDUIIOCCYWHJDGCCJLHHKEECTBOUDNZEIOESLLJBVVQVZAVRIBZNLQHRUCEKQUQARYBG");
    msg.goal_xml.assign("DMJMLHDWYGIYWDXPNIJNBWGTNJWCQTCGRVXHSOBUWGDFFTCCDRAAPNATHFIQCATSXBPXKHE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.558132052077);
    msg.setSource(20775U);
    msg.setSourceEntity(124U);
    msg.setDestination(63958U);
    msg.setDestinationEntity(65U);
    msg.command = 128U;
    msg.goal_id.assign("DTDTYWSTKAKHPRNOVJOPEHQJYVXUGAUQFSZHPQJEGBYIKCDBPBFWMFFQDECQOUROPVMUXJYIPUQLXEOILADUDFXDWQ");
    msg.goal_xml.assign("QBEQPFJFACWNWDPEKJYPFQGBASUVFIBHAXPVGYUWBETYLUXGFLKMVRHEHQIZESKSKBJZGZXBMROOWJTNCYBOSMGRTMPVAIZXYMXDGETHFKJILTCZFOUQOMEOUWALVWIOMSRWRCEDDWKZDUPIBSTDHCKOMJCNYNOVWGPVH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.38972156817);
    msg.setSource(57733U);
    msg.setSourceEntity(99U);
    msg.setDestination(56927U);
    msg.setDestinationEntity(85U);
    msg.command = 48U;
    msg.goal_id.assign("NUQDCSQVHXTDXRADAULGCGNMENLGSBFMQKETSEDOVCSMGVHLAUQCKCHDEYFAQRYUFNBZBPE");
    msg.goal_xml.assign("IGIMEBNKDSLMDZMXM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.814247306286);
    msg.setSource(43269U);
    msg.setSourceEntity(213U);
    msg.setDestination(40119U);
    msg.setDestinationEntity(179U);
    msg.op = 96U;
    msg.goal_id.assign("ZNSPFELRBMADWSCVFHOOQEIMNFAOFWDNRRGUNMYOXQGAZOZZWGUXZVRLHJVGQYTNMGCWDSLUGEIYZIHLNRMPWSMSSHELUVUXMCBVTSOIUCTMLMBKJKTJEWOXVHFZXCRXPRSGILIADJGZDBWKAOTUQWJZREPRNKEOBPBHYVFLLBQJKFHIJPGXCDJDYYYICHVQVFKEPESBDXEYITKKPSBJPTOZFTDLMHYQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CZRZHCEXNMXQWXELKFGESXZZSDSQLHFLOHVGPAMGMSYHRXLHRRNBLOGKBYZJUQGZPUPJJCYAKCWSJNUBXOHLEANCPMWNWNHBDEMFTIAGKAMWTSUBCVFAGNIJNXUQESYKXWQHJHKUPGIYDYPOVTWNCIRKAXYISTFNWHKDXREZURUQMCELQQKTFPVRVDCFTEVOB");
    tmp_msg_0.predicate.assign("UVCMOEIJFJUAQXHAHKQODLJCPDJKR");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.411195385029);
    msg.setSource(760U);
    msg.setSourceEntity(164U);
    msg.setDestination(17584U);
    msg.setDestinationEntity(96U);
    msg.op = 240U;
    msg.goal_id.assign("ILMTYKGDPKHQNESLDGWSINAEOERIIPSAPWTWBDQSZADGTPOYUXGQDWYCRZOZE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TZHOZUBNVGQZSXZFYCFCWLRIULDFPLDKFZGOLWCESIEBZDIDSOLYG");
    tmp_msg_0.predicate.assign("RJOCYMEWHO");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.448042041905);
    msg.setSource(7044U);
    msg.setSourceEntity(68U);
    msg.setDestination(10257U);
    msg.setDestinationEntity(75U);
    msg.op = 5U;
    msg.goal_id.assign("EHOHPEWOFRUPBFSMOFRKQXSAMQXRDGUCKVJHRNFYKKR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RAUTEBQBPFVWYQYAHKBYPPXUHOHTGOJMZCXITQSUTYKUHRCPLYBCEDDMBLVGZYHJZQNVWCNAROGTYSBMECXUFRJVCZFOWZIGDVWESTXNQYNXONTFXZZCEIAWJSKZJHSQNMOHNSOEJPSDAJMJWWMEODLLXGMUPKDUFLHUGKANIBKGPJICJVWKNGMNEQBGFYSZWIZETFIRPPYBAQFCSK");
    tmp_msg_0.predicate.assign("YEDUBITZDEZNIHFTQUAFZKWNYITBINWHSDDTPDFMJMQPPREEFYPVZQPATGCUMGUHQEXKOHLKBS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YXACJHLPTIICCKNAULQEUYHRFGAKRWPCDDGLZSABYJEMFWMYOJEVFSRUEBBSLWZDXCKXZKJONPNBWIDCTSHZXOJRJUNVTHTMVQGFRZHNIWOEVABQVAWKHVOLUUAQIDTYNSTEGQBPXOVSPJGKMP");
    tmp_tmp_msg_0_0.attr_type = 219U;
    tmp_tmp_msg_0_0.min.assign("YZALGTGMVGIBXNEZRCAWSOHGJAXEMEDGSBIMKBLGGLUMZXDYARRSKQSJTZCOEUORMCQXTCAHJNITYKSNNKODWRFXJIXBUCPEFWFFHGOSUOBQUADQLMVHFZVEIEBERDPQAWAFYUHPDQXPLMUIBNYLMFPTVDIVGXLWSPBVRTJCYBTAHCONHVKPTMNLWONVPSRDQFYVIKKMPYFULVJZOCZNDJTODKRNWHXZRJKBIJYHGICWCJLPASKFQEWUZQZ");
    tmp_tmp_msg_0_0.max.assign("TKXKWMTUWVHEVCMBIHWCLEQUAQJIOJDBPEVHQIZJFPACGGONYQIIWDTODFSXGXPAPXEAQOQKSAAXCDGYXPYUQWGMKQRKFXXETSBWVHHTSEIXRJODIRDOSAZHPZKSPLKNNYEJMSZCDJSP");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.0819659109434);
    msg.setSource(28415U);
    msg.setSourceEntity(15U);
    msg.setDestination(37985U);
    msg.setDestinationEntity(44U);
    msg.name.assign("KJGDFFHJWMFGBUSZPIVIXHZFXQMRFCUZNCVQFXBKXADWIPNZOBIMWRKPRMSHWRVOYCEXWZDNUVZNJEPVRCTTUVPOFYDLNRYXYEZOLHSNMCOMKQIGOMMPFOMDOTHBJSFBJEPIPEAMJYEJNIBSLJCPVDQTLNQHLXRNQSEGCQTKRGAEARJXOCTUASKIASWBAXUWQUYXWQDYNDREKFVUWUBCOZLWULYTBDGIZHLQTSIGGLADGJAGAHYLKKBCHPKTE");
    msg.attr_type = 162U;
    msg.min.assign("UNBJSFCWWTDYGZKWAQBT");
    msg.max.assign("AERQBCTWLQFRLRMFAMKXBGIT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.394077624456);
    msg.setSource(5149U);
    msg.setSourceEntity(145U);
    msg.setDestination(47595U);
    msg.setDestinationEntity(200U);
    msg.name.assign("VLMUMKQYMEWNEQGKIPHYEXEWVWTDFARVYNTNIGZBGWBNHSBINFQMKDKDAVPEOOXPYVIEZPHQZKKEFRRTMAWJBBWPTONPHTLF");
    msg.attr_type = 184U;
    msg.min.assign("OXEEPXCPMKHIFDBKUQTDFFWQLXVCNRVHYWKAMRRWEZUQEWYIHSMSEGNIDKVGYUZPVOFJIAGCREMNLSEMQDPBJJZCOYJAKFLSNXRVDLICYCSFSJNOWIOBLBQHPQEUDAFJSEQWYOBJTBLIBRBXNBOVIAUGULMDPGKMNEKUUXOQPHSWUTGSXVPHNGXTHPVJTAYNZZKTITJFXTLRWYFYUXCIKAMWSRZBLZJGAAOTCLMRHZTZGDCK");
    msg.max.assign("GOZAIAXHFNLNELVOTSZQYHNKWUQYDZGRXZMISIQZCIOIRVJAJSBPDEAMDFBVZFLQFCGGFRMBLNMUPOP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.547894402643);
    msg.setSource(19638U);
    msg.setSourceEntity(151U);
    msg.setDestination(49809U);
    msg.setDestinationEntity(234U);
    msg.name.assign("STYATUHBDWVYTHGZXAWPFCEASAKOSVAZYMROYHMCIBSUGOFIQQMOIGORXKJPJBNPQBZUCHFYTJRHILOKEWFQEYPCZHXBIIEYSPVYPMOZUXLPWFHOOSNBCMCVTMYREJLAIRWVFVCNBBJMNJXGJQSZNOKDJRNMKFPVNDCEWEJDWTTDLIUEA");
    msg.attr_type = 70U;
    msg.min.assign("WYPTHDLTFYGYUWBJQFUIWCBRSTVEMRLPXVLSUSEUYCIZAFBQMESXPOEJQWROTPIDZYTKJNAEXUBMPXVGDCEFDXAXOITBEZCLRHNUZJBRZQLIGCVUMWUONKBNDSKH");
    msg.max.assign("UXKFNGVZZJVXRRIVEGSZGJKAQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.66560445634);
    msg.setSource(51273U);
    msg.setSourceEntity(241U);
    msg.setDestination(22440U);
    msg.setDestinationEntity(212U);
    msg.timeline.assign("ZHKTOXGMNOPRFJTXBDKKDEMFNQBTXAHIFYBHQIUXWPZBWFUOGCMWPLOOARKUWBDZNFURWEHSJSCILPLSKAFUPIGAGUMPBPNQWXJWIKZLQLMEDJCVXREDZEOJMEMQTRRFSQTXBADXUTBCVSNVSVVJNUGTNBHVYOLLZKVADSOSAENFUPKHQJRDKORGDZYQYLZWYVPGECFYNIKIYHQHXHJTQVMCEIWDGYIMAATCVSA");
    msg.predicate.assign("INTZREYLXKGDUGBWQJOGFCFDLWAZNXRUSFREWCHXWOYQXIYDNBQGEGNLADETQWILVUSHFKSDEXHDYZAOSAASZYKNCQFWAYORBMMNTTODJHYCUAEHFPVVKPZBTPXBWOORDLXWRDWURZMIKSHSFMUVMIPGRCPYEMQXKCRCISJMSVPPPZREOJOVGTYLINFVTZVQXMCTEJFLAULKJBNGB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.872483377732);
    msg.setSource(14810U);
    msg.setSourceEntity(193U);
    msg.setDestination(12641U);
    msg.setDestinationEntity(48U);
    msg.timeline.assign("ZFFWFFAQGWASBKNUQZRETMQZUKCKMBMHENDIRLASJXCZGNKZKXKJEJAZEVAFBKUIIUWTRYQIUDCSLH");
    msg.predicate.assign("FJHUTMHFIZLRWMCEXTLGJVXUULGUCHZYHXAYWVZSADIUPFULWAEVLZKSHSAVMTLBWLFLUDNMPJEQVXGARKDTYSJHMMCZBHNWQZZQROHYXWDDWOILAJROWAMIVEMPACQRNSZHECQQHIYIIVOIBRGPJNIUPXSPDOFXUTDCBYBSVAJVTOXNCPKGSFOQNQKPEKGNMUKDDETTCNYXNBTEFFOZTKWJCXBERBVRLGOYRNFZF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.133886925311);
    msg.setSource(55863U);
    msg.setSourceEntity(21U);
    msg.setDestination(64223U);
    msg.setDestinationEntity(107U);
    msg.timeline.assign("FPKGHHWZYIMQLGNLEZJOYCTNCMBTTRNTONUHAJGPURPHTSIORASYIUXLKEPBZDSGCWCRMUPAIJWKCAKEJFWIZQHXYRIDFYXMVMFWXOVQDQXUGCPWKIFSMNSMEUOJEJZORDXEOOLMDZXCFLSDVPSPEQHMZHTAQNDFQDSJQGQWSLKBAOZOBENSJTIKCPFWVVXVMLFKDPUYUVBHBYALUQIHXJZAGRZVEKNBEKYGGAFBLBJHRTBYLRAV");
    msg.predicate.assign("PQJEMLCXONXANLKZUJKFWDKUANMCJGTIVWKVUFSAPCGOXYNYJBVOYTZASDMGGLYUGOIDKDCWQCSKBBBDFNUMMVHOIPXFCOCQEVHDXHWALEQOPRVEKLEGLJHSQQZTGHNMFBAEYLZFPPPKQSUDIYMRVTSIEQHFIPJRAOIJKDRTHRBWEUVUJNYTJIZONZWMGLKXSVPHZZYFFTULLOXRXBWXXYMZSEGAWSMASCTNDBBJR");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GRXUYXWSBPPLCFNOMKHMWEJFEDYVCOCNHNJQYJHRIUOLVKPCFBSELTDGHSWTLMHQVFXAAEPIHKQRDRKAMOXBDXAONQDWMDTCKIUYWXLQVTIEQAGRBZRRPHMZIHPZOZYBVAWJWYDCOGZCMINCTAJLZLVBSTUJBHVSTDZSNZAQRFNFPURKHKEYFGXNVZUFYKVBOMTAKSEOOWESEQIINYJDITJYUULMNKP");
    tmp_msg_0.attr_type = 211U;
    tmp_msg_0.min.assign("FRNADAMXKJHQWOTZDRAPZBDTIKNJLPIUVUDFTMYPGKREHXYMTUUEAXTNYIWFQLJOQJBAQUZBWNYMECGCMUNWQALSVEFQBDXVERNGTFEHQWKLIRHXMACUDNHCKGVGOPLVAZJVBRUBPOCKHIYWGZSJFCPHTVKSILWBSNWKTOFOBOTVYLTEQCSVIXKEIDCJBPYVQCCRMMSPBZHJGYRLSFZWESXXJZULGJAMNWOPXOONYMLEZS");
    tmp_msg_0.max.assign("GPJUFAPSBJIZIQGCUOWEZHIABLXIHWVWVGSILOPMQNLPJHPFOQLSCBRRPXGTANYWZXJGXGFQRMGZYBHUZBZAIOTOLYCXNFZUKMUHVYOWINQEJJPVSCOKWGFKBMBNZLIPQDRKZATZGVUFENRBJCLCVLDVCQIDFKTIMCQUNBXDAJDECVWN");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.756872155269);
    msg.setSource(42637U);
    msg.setSourceEntity(222U);
    msg.setDestination(48087U);
    msg.setDestinationEntity(13U);
    msg.reactor.assign("TYPYCUTVGFWRTNPXHTPWAFUWYZLSPILNA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VUXSSKCBLFFEWBTTYBHKXTQDMHWREQXYXYZZMDCNOZHQUWEXCDAQJQYXOAVRBHZQJYIQTOSINRKLACVGALTU");
    tmp_msg_0.predicate.assign("BGXSBJUDLBMDJDSMJZATCTNZGVDEWNPECWVKBGKLGVIEEBUDBYIFJWZEKAFGFPCDSQUCBRIONMRDVMMDOAUGOXSVNMVSAXYTCTQUJFRJCCYTBTZMQCRNHUKVPPIOQZEPLENGZAHGWAQBGDRJYLXIKPYZQUIPSJLHXKVLQMWOCYNPUQRONWOKFHRHYGSZHFJOKAYJLP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GRYPFNPTZWZULCHCAMOPHCNBKNCDNPRUAIDBXIKCKPVIBQQRDZXFEMOBNKSVLWLFAMWLWAXGHMIPSQIMGIFEXOJZLBXHAEISZEHJJSSYGYBFIKHZTOVMMYLKUXWDZFKXQPTAQEEWMZDUYGPTHSUEZACXRODDJWDYQENSSCQSESRBLLCTGLDYVJRWTJFRVQACXGYLAJKTFYRGUKYHUJVOBHIUTUEFVBTJONFGAIVPBNVWUN");
    tmp_tmp_msg_0_0.attr_type = 182U;
    tmp_tmp_msg_0_0.min.assign("RAIAUGVQCHYYQZTUZHM");
    tmp_tmp_msg_0_0.max.assign("UHZPVNSSSD");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.336785608398);
    msg.setSource(11564U);
    msg.setSourceEntity(79U);
    msg.setDestination(24589U);
    msg.setDestinationEntity(12U);
    msg.reactor.assign("AAQSHWEHYXVZZAQJKINFTBETJEGSCFPNJMBQPVMCCFTRFWXOXDNJKBVQUKGVFLRTTYPYGREHVMSWRXNWDRYOGPEQHUXWJYLJSIIQHUIHRIONHXGITDFIZRUZCRBNALIUVJRCBNHCTKIIPPOXDHUEKYDXEWCJMVLM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DERFMPLDYELJKIWLULSAURYDJIMEMPORNFWMM");
    tmp_msg_0.predicate.assign("PXDRBTBJCFUDUFWQMDEMPDQFEZJKQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YLCONOSZDTPLXSTKYGQWNDZUEGCLFIVGGAIDTNWQPRAEVOAOBOEZPKSEXWJJGXKZNWCBHBKAPWRCFBRHNHLHQFCFTJPKQQFKFBYVYIAMMXYJJSKLEDBUUJTCTMLDIQHRHYJODPHAPRFUMIAIUSWFPXVCMMSKJXQPGONLGLHGTZUVNZEYRBYDGVXMYETMPQIEHHRUSRAXUXRMEOCTIUKCWXDEZLZSBOGBDRQFKNSBJAWISVQW");
    tmp_tmp_msg_0_0.attr_type = 208U;
    tmp_tmp_msg_0_0.min.assign("SIQLXMOCSNEYOJAXLQRNSQTLYVMDKWHUDRMTJMORELYWYMCRFCOXGTNTSISIJBWRQWWLECKKKHDUHSVAHIRTJBQKZZIYBSP");
    tmp_tmp_msg_0_0.max.assign("QRFPWVWZJNVQPSDUTUUMLZEFQJYZSOQEBIONUYDJPNPZVDQQWVHFIJPVZLCOQDGXJFNFAIMFSXMNKBFCMMRYYLQZMGKTUPBWNXAKXEAGXKWDVXOHSVACIRUIRBOSYUSTLYXBPVCKHHTHDSEMBSPZMHALERCAJWEOHJGTSJUJGCRWFZ");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.435003095835);
    msg.setSource(45865U);
    msg.setSourceEntity(30U);
    msg.setDestination(60288U);
    msg.setDestinationEntity(208U);
    msg.reactor.assign("EAQCGSFQDWWYMPQRWEVSFXGJHXOVONKQYCGDRUYZXQJTBAYDTNPUNGOPIQUJMBPSTKLWYLMRYGHINIBPWAXAUFWYDKZXXGAHZDAHEQOEUDTJIMSCLSRGOSMCNUEKOIYCIEZMBLPLHBCCRBJUNCLFDOXZFVQZAADJKPONHMQZZPLUDHBTIFSVVGRTFFLHEQKPTMGEWMNJENVWBWKFTRKBSHXJTWNTRHV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.661076374292);
    msg.setSource(44276U);
    msg.setSourceEntity(101U);
    msg.setDestination(59577U);
    msg.setDestinationEntity(196U);
    msg.topic.assign("RSUGILGIFFUGPJHWFWDAZAURZXVWDNIFQTSIWDBRJCJYAGMJATIIEOTNNLGDVENZMKUZKKIBLCVEJYRVEBTAFBKQBVOZKFWIQWQNXBQJXYSWAUEPPDTOAJYTHNRVAFHKVGHHZKNSHONXCCHRHLXCZBLMSRBLPSDVQYNRZVOPCXEQDDOBCC");
    msg.data.assign("QGOHJIINAXZEWKPGDCXQYJQYGLRZNYAIXCBUFLOUSKSMUVTPLISRVVQAGBHVQDUZMNXLPBXNZMIIBDUIWTBQNWYRGCNJXCIELBPKWMTQR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.208965398093);
    msg.setSource(61004U);
    msg.setSourceEntity(209U);
    msg.setDestination(62887U);
    msg.setDestinationEntity(235U);
    msg.topic.assign("VMPJLUJALDGSERINQBVFUPNQWUZRVQMICOVVELREJ");
    msg.data.assign("ROPUAPLQAFTKXLXCCBBQBKZIZVWJKVYQYNFMSHEGWEZRQVSCGPXWORRFJQYJZOAVNTMFNGNK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.802764223829);
    msg.setSource(9710U);
    msg.setSourceEntity(62U);
    msg.setDestination(55321U);
    msg.setDestinationEntity(112U);
    msg.topic.assign("GEEOBQJKCIPMNKTCYPINDBMMUEWRYSOVQOQYPLZDGAFESEVUVBELPMDBGCNEZRLJTAIFHCJUXBBZADXMZUTCHVEQABZSLJAHWPPQOTTVMJCTKYJLWWRUFYUAPIJGGVOSX");
    msg.data.assign("RWJUMLAMLBZWRTYIIPTYVORUDUDVQRNDUTYZMGBFBAXFUBFBPINMPJXJOEIQCGDMMYDYMNAHXISUHHLZPLCSHDZERQFJYPDACINIMIXQKYZWUAOSARJUOGHEQTLKDCNGJFOQAJGKKVRCOHWCGTFCALLCGZMSDFAFXTVLSXOOZQYWMUBXHZSGKENRLVKGNKPBLJYBSTSPTOFNERSIKVWNWQVQPXRXBEHPXAIGWFNEOCTYEJHWUDW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.590522627207);
    msg.setSource(52397U);
    msg.setSourceEntity(22U);
    msg.setDestination(10621U);
    msg.setDestinationEntity(175U);
    msg.frameid = 3U;
    const char tmp_msg_0[] = {106, -127, 53, 9, 62, 67, -52, 32, 74, -116, 0, -27, -74, 21, 93, -12, -1, 0, 123};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.580817915121);
    msg.setSource(56774U);
    msg.setSourceEntity(8U);
    msg.setDestination(31126U);
    msg.setDestinationEntity(192U);
    msg.frameid = 114U;
    const char tmp_msg_0[] = {115, -12, -18, -1, 71, 90, -92, -73, 57, -87, 16, 3, -122, 39, 70, 119, 39, 79, 62, -42, 81, 69, 64, 10, 87, -92, 88, -103, 63, -118, -36, 105, 74, -128, -115, 90, -13, -27, 74, -80, -76, 9, 79, -1, 100, 46, -46, 17, 108, -16, -21, -90, -32, 99, -116, 113, 46, 104, -10, 109, -71, 64, -17, -38, -102, -22, -39, 59, -101, 3, 77, -46, 108, -8, 98, 91, 36, -21, 100, 60, 79, -10, -16, 111, -118, -52, -31, 18, -59, -100, -46, -4, -119, -39, 113, 83, -18, -113, -28, -79, -29, 67, -12, 121, -18, -104, -9, -96, -50, 110, -15, 75, -107, 62, 83, -103, 50, 55, -112, -66, 22, 0, 57, -111, 70, 46, -21, 19, -18, 91, -128, -17, -19, 86, 48, -112, -58, 54, -102, -16, -92, -54, -33, 90, 81, -120, 31, 103, 125, 17, 79, 107, 29, 31, -61, -128, -23, 75, 37, -74};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.0164327548083);
    msg.setSource(40980U);
    msg.setSourceEntity(4U);
    msg.setDestination(25752U);
    msg.setDestinationEntity(162U);
    msg.frameid = 28U;
    const char tmp_msg_0[] = {-15, -83, -94, 0, -93, -53, 68, 44, 41, -119, 104, 76, 113, 85, -118, -30, 53, -99, 49, 28, -54, 72, 5, -23, -125, 49, 34, -47, -20, 75, 38, 31, -87, -59, 42, 102, -118, -82, -35, -63, 37, 91, -27, 14, 48, -72, -62, -55, -64, 87, -113, 79, 118, -72, -97, 16, 22, -21, 112, -47, -105, 57, -89, -25, -51, -117, -47, 49, 18, -45, 82, -11, 42, 11, 28, 29, 120, -76, -16, 101, -33, 11, 77, -16, -15, 74, -71, -97, 25, 115, 25, 99, -117, 104, -11, 24, -79, -2, 88, 27, 46, -128, -20, -98, 75, 9, -18, 6, -42, -13, 67, -97, -71, 15, 56, -82, 33, -127};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.377119792772);
    msg.setSource(50407U);
    msg.setSourceEntity(1U);
    msg.setDestination(50861U);
    msg.setDestinationEntity(155U);
    msg.fps = 193U;
    msg.quality = 222U;
    msg.reps = 152U;
    msg.tsize = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.0380509372162);
    msg.setSource(46769U);
    msg.setSourceEntity(64U);
    msg.setDestination(47665U);
    msg.setDestinationEntity(91U);
    msg.fps = 231U;
    msg.quality = 31U;
    msg.reps = 81U;
    msg.tsize = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.815250145532);
    msg.setSource(21843U);
    msg.setSourceEntity(115U);
    msg.setDestination(7533U);
    msg.setDestinationEntity(105U);
    msg.fps = 82U;
    msg.quality = 224U;
    msg.reps = 156U;
    msg.tsize = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.346352231725);
    msg.setSource(21459U);
    msg.setSourceEntity(30U);
    msg.setDestination(1986U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.545330820858;
    msg.lon = 0.796408002202;
    msg.depth = 216U;
    msg.speed = 0.595058426854;
    msg.psi = 0.207774221895;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.758797009257);
    msg.setSource(1584U);
    msg.setSourceEntity(114U);
    msg.setDestination(44196U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.0595330883646;
    msg.lon = 0.86547723614;
    msg.depth = 80U;
    msg.speed = 0.933763648537;
    msg.psi = 0.433371694545;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.928432131593);
    msg.setSource(46574U);
    msg.setSourceEntity(71U);
    msg.setDestination(43248U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.854153010104;
    msg.lon = 0.864447149171;
    msg.depth = 87U;
    msg.speed = 0.0956098207401;
    msg.psi = 0.115656830461;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.715114466052);
    msg.setSource(46676U);
    msg.setSourceEntity(26U);
    msg.setDestination(56934U);
    msg.setDestinationEntity(138U);
    msg.label.assign("SRFNMVSDQIRIPBHPQLSIOWYYAUHVLGDEEKEBPOSKLVSJKVNJHNOTEWYOKBEGKRMXFMXTZPYNGSXGOBXUUWZRINUPSUDSFYDGMJONXMHGXTANDPGYHQCDWRQGBVOAIYAEMJQWZCRHCHVKTKFQZ");
    msg.lat = 0.564284950523;
    msg.lon = 0.385741390935;
    msg.z = 0.288148109568;
    msg.z_units = 237U;
    msg.cog = 0.471545879977;
    msg.sog = 0.995942218501;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.225596110211);
    msg.setSource(31335U);
    msg.setSourceEntity(180U);
    msg.setDestination(27824U);
    msg.setDestinationEntity(104U);
    msg.label.assign("NSVRCKAYOFZESVYVIPLTJOVZDWMYEPFXWOJSCBYDLNHFEZJAAHFULDPVJFZWHFARSAIIGXLTICXCGSSKSPCNVKJCHOZQBGHYGLOXRCMNSNTBOJBOYQD");
    msg.lat = 0.637906271365;
    msg.lon = 0.698417906985;
    msg.z = 0.709680189852;
    msg.z_units = 195U;
    msg.cog = 0.0895808022995;
    msg.sog = 0.438352564314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.824299186922);
    msg.setSource(2713U);
    msg.setSourceEntity(5U);
    msg.setDestination(13131U);
    msg.setDestinationEntity(98U);
    msg.label.assign("YHLMSFKUUMJOSZWFPEKXLM");
    msg.lat = 0.0172296762923;
    msg.lon = 0.674794818514;
    msg.z = 0.183093241211;
    msg.z_units = 103U;
    msg.cog = 0.493846727497;
    msg.sog = 0.52100338629;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.144335971805);
    msg.setSource(55529U);
    msg.setSourceEntity(237U);
    msg.setDestination(29823U);
    msg.setDestinationEntity(200U);
    msg.name.assign("RFVYQWDAAIOOWSQIKEAPVQPRFZCHUXEFGIEILBLMSJJINKPFZQBGACIIBUQSRCRBQSELMJFRCWOTNVZMALTBGUXTOZNXBRXKLNBDXHUQDXDEYVXCYYVIWFOGKRQCAZTCRZGXQHLTWUKLDBDPUMLSGTHKANCPPPZONOTSEVTYXVTEEZPARRNKMYPLJDWYGVIHFHFSGAGVIJUONMDKJAXUHBHJYJSPWOTZKYQJZBYFMNUFWMDNLJMWCDEGCHMSE");
    msg.value.assign("ZVBUIYVSACDGONWPURPUUJDDGDXLAUKNMZWVWBPVINXKHMGCTFVYXTAFLZXLKDJEFAAQTQGYTWKEYSBYOVIPDTQMVTKOPOEWODFEHQAJEUVMHFQHISPYYLRXMZMQAYANGEZFQMIBJRUZUXNHJXWSSYIOBKQCTPWHSXECBWHLMJROSIFRWQKJJNIPGGREJLUNBREPXTLUGZCOKFDOTBCKZNZABVGHJIF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.93418759963);
    msg.setSource(26217U);
    msg.setSourceEntity(88U);
    msg.setDestination(1548U);
    msg.setDestinationEntity(60U);
    msg.name.assign("PYCKLJXHKKTIWMZUGFFBOTGCKCAYYDZXBIFUUDLZAVHFLRNEXSSWPMWFIXZSNCYCWMXQROHHTHHATWRUJSOIOATQUYNXNDHPFHBYSDQEJCNQPR");
    msg.value.assign("LMXGWZRLRHFLZSPRHAMSSQNVPPTWDDVKKKRHQJMJYGUOCDLXOIPGWAUKLKIBFHPKRVLQNFPXGEZSBXAYTQYMMGHRAIZFWEQXWOHJSGQBNCOUTJRIDTKFOMSCONVZEMEMYSUCUUVDFHLWCTHNEECBCJOTWUG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.927344536829);
    msg.setSource(44551U);
    msg.setSourceEntity(41U);
    msg.setDestination(2667U);
    msg.setDestinationEntity(161U);
    msg.name.assign("AXAWPULGPKNUINTMKJBYFVKGEMSOPDLNQVRAUTFXRHSIQVXOMJFZJGNCMHMJDBNLANSVQXRMYJXDCPOSLSTYRCTWWIKKDKUYTBBEDXNTMGHLDZEZYLXCVWFBJURSZWZOOGQKECUEZLBYPQKZPWUEIKIFBZPGHBRUVMSTUQQGERJJASSJIWDPSHQYGFPIERXHYHOWVOMCCKEOITHAOWHFXEACTGCUMRABQFXFIVGNWAPJDCADQLZBHOL");
    msg.value.assign("PCABSMSLUPIZXDEAMSKODWHY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.0386644476422);
    msg.setSource(15639U);
    msg.setSourceEntity(174U);
    msg.setDestination(16123U);
    msg.setDestinationEntity(243U);
    msg.name.assign("QUDXOPTBFREDKWTLILYNFPWIOXTPJHWDXYXPZEORQUUCMRLVJXKBKRHYJCCALGKSEOVNJPMVZUVZOYTHMUQFSIQJQJFYEEBZXKSWCKAHIAOIGZCGSNTBEBKFNAVKUWKPOISUCBRUIVNDWXPMZYQRUHJGVECDEMPMGWDLZBTSFNQTBDSAWYISLLOFRYHQGBWATCTNISFEWPBEONNDLHVMAJARGJKLVZZZXDHMNDSHIGQXAXOPQGMMVGY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.496100270156);
    msg.setSource(46955U);
    msg.setSourceEntity(194U);
    msg.setDestination(34526U);
    msg.setDestinationEntity(61U);
    msg.name.assign("TFNFIXNPGORWKJBQLLJTQVTWDESXEUCSWUFNUBTNABNLPUSBSVDOLMCPQIJLFKZHNVWHUHOAAXRTOIFIXEXYIDQGZMNYAPHWZFUHYRJBHSEBIXLOCJHMGKMRTJZDYLMBS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.0373189919041);
    msg.setSource(6824U);
    msg.setSourceEntity(222U);
    msg.setDestination(12648U);
    msg.setDestinationEntity(136U);
    msg.name.assign("KGTIXCEZDEMJOJTLTAWYOMBGNCVUTCFBUPXDBRTXKWUWYKRVTFDXDVIWZWBVORDHSYHQEJPHITNUHHLULXYSQYZXPCMHUONJNEVRMEVZRWMMONBPRA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.237482713627);
    msg.setSource(36979U);
    msg.setSourceEntity(54U);
    msg.setDestination(38659U);
    msg.setDestinationEntity(167U);
    msg.name.assign("PFOMYDIREWBKKFXKIMXHHKUVCUPTSGPMMOGDFGYHJEAWGRGCKHJRBPEYWYKPMVYZTYJLAVC");
    msg.visibility.assign("WRUOIGXKNMNUOLIZACBESEPFSOPWQDOTVYHBBSXWWHSAZUUTVRXILTCNULSIKGPTMNYPQGIYQLCHXDJWJTPQKUNELDXEGQFFQORVRYTRZHIPYGYDPXNFWCBCVZYAUKFVHRGAGLMTHOXJPCAQPDBFNJHXMKADXBEFTACEBZMAEJN");
    msg.scope.assign("JRICVIZZMEXYBWACKUKSYZMDNXVSDUXZTMFSMZXBLLXFOCNYTNBVBULJEYKQWOYLSKRTFTRPGPBQNAZIPIVOQKOAKPIJOKFPVLJKMJFXBNLCFRDLXYNTOJHLYGMUZGDDCPAVHUDVGCARFGWTAETGFBTVRPAMNHRJMUEHJYSJXSWGDHCYHISZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.117260031382);
    msg.setSource(54335U);
    msg.setSourceEntity(28U);
    msg.setDestination(53446U);
    msg.setDestinationEntity(185U);
    msg.name.assign("AFMIHOYEARNRYXSAOZPTHIVKOYDETDD");
    msg.visibility.assign("PYEPZMSTQIRKJFZXRWGIVII");
    msg.scope.assign("JBDDLPPBKKSNYGVTTAEQWEFWLVMVBWATOCFUUPZOYPRVAVOGINEULQELRPBTBQNIMFBFAIOQSJLKEIFYCGCHDCNSJAUJTGXOMOWWIDHZNUMGYHIRSMIBLEUSKZEQTYMWANQSVVBFHDGRDKLSCAOPBGJCKDMZXKEXXYQJSHUNCJFJVZQRHZFXDVXPPZRTTXNM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.246424375893);
    msg.setSource(18911U);
    msg.setSourceEntity(142U);
    msg.setDestination(36208U);
    msg.setDestinationEntity(90U);
    msg.name.assign("UWSJMEZPXQIOBAYJPJVOJTSEZJKJFTXBBYZHTWBHFLJMXLQMXCXGGTTNFMWZIPPYLLREMKWYXXXQWUSNRPZCDNKPFAEBCHKHRY");
    msg.visibility.assign("ABUIRNTMDHTMTOCJQFDPCNNJJURSPKDPXYSBULAJNZBFMRLFZRGBMYWVCXUPQVUBTXUXXGNIXYDZHLBKVKKLMJQGAGCQCOHQSKDPWRZFOZMERGXTWFIHSLAJLFYSCDOUIPMWDJBHIEZZPONVEISWKEFSEUYNEQQKJWZGNNYGKGIRTHUJQWTLTHIEG");
    msg.scope.assign("KBRVEEGEGCBZZMBTNCCWZHHGMFQWNSPZUAIFOIOIFXYNRKXPFFYPJLQWMDHTTMNAMZAPSEZJXYZLEPNVSEWZEDDPKLNAQZSEYJXWJLCCYODYKOPB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.942443262758);
    msg.setSource(64746U);
    msg.setSourceEntity(14U);
    msg.setDestination(35389U);
    msg.setDestinationEntity(81U);
    msg.name.assign("IOOYHXUSGDPDGDZVCLOJBEBWQDLEZSVJZIFHDNTIQAAWKAXGCLQYFVQCTMNGSUHQXOTIBUVKZRABMOEZRFXHTOCLPXRAHOGPESFFXMRPZCRKWHFECJHJBBPGKDGRQBZRDQCUVSHIPVPIXPIMNUWOKOVMVXBSNQJYNMYJSKFPUNBMVDUIWEE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FGEWYUJFUDNVHGCXFNBBFXJAHRMRNKDNMYBGRIUWVXERJBZCEOSQPUQPGJNQJYWHWMVTCD");
    tmp_msg_0.value.assign("BCGMYCVAZBXHIMZPPJJWFOHHHTMXWNMYOTYVBLRZSOKYJUEYJOLWLSGPVNEFNKBRNXMKPZCLNBPBZXRGVCQDKTGAXZDEZLHXNHUWQCIYTVVUJQFRDIAWCSMAMKHFDTHSQKOQEVUOINQFHWZDVWPZFQBSTJWPDFOGFQKMATGYSWUYAROMGIUTJPTLKNGBXDSCBEIXUCEPLLSEYDRBONFUGULYKMRIKUAAZRWPJDEFX");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.417197636618);
    msg.setSource(15313U);
    msg.setSourceEntity(35U);
    msg.setDestination(34090U);
    msg.setDestinationEntity(203U);
    msg.name.assign("UJKNUIKMKCCAIJOGIIAXFIHABNRTFQSKPFTCSKLTYAQYMODEYGDDYOKRJL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CTAAXTEHOAEYNHKUSHQVFDVONTPLXJYWXMWCXWEGFELDAAQXUOHSIGVLSZRQSHBIVLIISCKAGOGUDXHVXQ");
    tmp_msg_0.value.assign("IPHLUDZHGOLAWVPVSHTHTZTOMJFDQWKPXJYDFJBRLENWUNWGBAUZMZNFZGLIEADGLDFVQAURTNTKPQBFVYMWYYHXVBORJBJFRSDZCFSANRSYMIRMHXOIWGHUT");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.907670854205);
    msg.setSource(62305U);
    msg.setSourceEntity(244U);
    msg.setDestination(22637U);
    msg.setDestinationEntity(154U);
    msg.name.assign("KKSMJLCDAEROBGTHNSOEIPQFIEXFYREJDHDJJPBFDIQZEMALFSQRSTWMYUHNLIDNASTBVGLQVMCNYZSHQHQLNCBVRETCBWTFPFZYWAXLLWJZKKMIQTWMUHIVRUVMIGXGMLXKNDWPPEURPFPVRFIAYJTGCOTNUUWGMGRORTMCRYZWEHXSYJGCFZALODXQDOKNUFSAILNCKPPHQNVIJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.632359172478);
    msg.setSource(38651U);
    msg.setSourceEntity(93U);
    msg.setDestination(46566U);
    msg.setDestinationEntity(156U);
    msg.name.assign("ZYUUUBINHKPYBYRSDIEZRXNKP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.917654346161);
    msg.setSource(471U);
    msg.setSourceEntity(229U);
    msg.setDestination(57111U);
    msg.setDestinationEntity(127U);
    msg.name.assign("EGWQMNSIQZHZZKAZNJRJTZHSURVWLSAPBVLTEMDKIAUGTCUWILNDULMIMSTOVOZYBRDCEKNCCFAUKWSZYXNGXWNQYYBSLLKCFQDNWPDJVQPTCFXPAAYBXJLMQTKXBIUOOYMIJEASBOPDKGBRIMHPKGWTWQRNBYVXFFNJYCWXGNHRGJTOELQIFOZEFZPGPHGIEYOPJQXUHSYDOFCHJDUGVEXE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.363301341613);
    msg.setSource(45644U);
    msg.setSourceEntity(159U);
    msg.setDestination(27137U);
    msg.setDestinationEntity(58U);
    msg.name.assign("CIPMMCIVIURVOEONRXZOSDCOUQAIPWHJXUDKJWUVYBUIWEGNGSVNONGNLCEJNBFIMLTDJOSXNEXBVRZGNAILDCSHFRSGUBZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.422223744936);
    msg.setSource(11927U);
    msg.setSourceEntity(117U);
    msg.setDestination(17518U);
    msg.setDestinationEntity(171U);
    msg.timeout = 1598903314U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.201353656018);
    msg.setSource(20077U);
    msg.setSourceEntity(160U);
    msg.setDestination(57U);
    msg.setDestinationEntity(174U);
    msg.timeout = 3107468687U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.021215293672);
    msg.setSource(51927U);
    msg.setSourceEntity(109U);
    msg.setDestination(71U);
    msg.setDestinationEntity(97U);
    msg.timeout = 1556037722U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.836731059442);
    msg.setSource(16358U);
    msg.setSourceEntity(96U);
    msg.setDestination(4116U);
    msg.setDestinationEntity(209U);
    msg.sessid = 1343548483U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.33055519689);
    msg.setSource(4718U);
    msg.setSourceEntity(99U);
    msg.setDestination(20887U);
    msg.setDestinationEntity(248U);
    msg.sessid = 2638681277U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.734588342223);
    msg.setSource(61562U);
    msg.setSourceEntity(226U);
    msg.setDestination(29244U);
    msg.setDestinationEntity(150U);
    msg.sessid = 974187945U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.256374604391);
    msg.setSource(16337U);
    msg.setSourceEntity(153U);
    msg.setDestination(23726U);
    msg.setDestinationEntity(175U);
    msg.sessid = 1334259950U;
    msg.messages.assign("QDJRVZOBCSPIRHLUKKFEQUQQWAOFUFESTVOKOJXXTGAEZKYMCCZMNJAXMPOVVENQCRTXSRSFGBFYYZQCWUBLGYJHWMCYHKRFNLHIPKLTAUWARNPIGSUWNGRIVBVHCSQBDAXDHJZENQEDZBHICVJVIXZMRZSFAJAEHWWXJKGBOPDYXMYIFOZKHCEJSULBYGQYRTUPGBSADVMOLUKETNIGUM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.386159362453);
    msg.setSource(23288U);
    msg.setSourceEntity(214U);
    msg.setDestination(21260U);
    msg.setDestinationEntity(86U);
    msg.sessid = 953773746U;
    msg.messages.assign("JXNXOTPQLFUSVQSYISEFSOJLTYVBANPAFAZCCRHMH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.0353794421685);
    msg.setSource(910U);
    msg.setSourceEntity(72U);
    msg.setDestination(54577U);
    msg.setDestinationEntity(5U);
    msg.sessid = 2602564455U;
    msg.messages.assign("AQCUYVLFJZARHTCSEPVCVRKIMLSFZNQPJFTBPPMMQHEJIVGTLJSCJRFGKGMONZLOQDVMDHVPFNUXZZWWQGVLYRKBNNOAWITWFQLPJFBWQUKGWEDCAYBUPXPPMRRKEETIHXUKHBHYKFGVMDODLWLXNDAJYISBYSVRKYSJBNEXCAABAGUSSARWUESOXQOTLXQCRMQZHCYMDHUGZHZOZBHETROJFLNIWTJCNOWUEZEDMODFXVXBDSGAIGUYTNKP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.170259278425);
    msg.setSource(51866U);
    msg.setSourceEntity(218U);
    msg.setDestination(31301U);
    msg.setDestinationEntity(70U);
    msg.sessid = 2083158048U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.15011265778);
    msg.setSource(51059U);
    msg.setSourceEntity(34U);
    msg.setDestination(62977U);
    msg.setDestinationEntity(13U);
    msg.sessid = 832056249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.651005719852);
    msg.setSource(3976U);
    msg.setSourceEntity(94U);
    msg.setDestination(18472U);
    msg.setDestinationEntity(25U);
    msg.sessid = 4161028836U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.67519784777);
    msg.setSource(53167U);
    msg.setSourceEntity(232U);
    msg.setDestination(24612U);
    msg.setDestinationEntity(28U);
    msg.sessid = 129399668U;
    msg.status = 194U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.298115782972);
    msg.setSource(1470U);
    msg.setSourceEntity(122U);
    msg.setDestination(680U);
    msg.setDestinationEntity(237U);
    msg.sessid = 2577516285U;
    msg.status = 103U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.376814445601);
    msg.setSource(27915U);
    msg.setSourceEntity(230U);
    msg.setDestination(38393U);
    msg.setDestinationEntity(73U);
    msg.sessid = 1841612463U;
    msg.status = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.399826293308);
    msg.setSource(7712U);
    msg.setSourceEntity(213U);
    msg.setDestination(27158U);
    msg.setDestinationEntity(236U);
    msg.name.assign("QBSHTONLSMINGWFPSWNLLFBUCTXRCJPFNCTUZGXDGOVESBGHLNVLIATMVWOGEDHCYXWPYNFJZUEPRRKGYBOXIQKHXHYRNJRIGYEBOYATXVMUVMDNDGYCCUSBJJIKRMSKJZFEFQV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.328680181474);
    msg.setSource(56881U);
    msg.setSourceEntity(236U);
    msg.setDestination(44278U);
    msg.setDestinationEntity(193U);
    msg.name.assign("YHNTVYJYFYDGKOJKBNFORQOAQDJXCCHZRIHHPDVBUMCIEALLYUPJZXWNSDQIQRKHQLZLNTXEHKMAPRDTRRXBWCOCINBZMNCUCWESKREYLGSEUJHHGLGVFEJQTGCLGLUOQVYIXLIBPFCOBGDZPPDZADUWQXGZSMTVNWPBGTVMIOAIAKSJYITNWJNAHWWHECXUUYJOSJSFRMVFDMTFOTUVXFRZKEBBAMSZVOURXDIQLWTEPWNKZSFMA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.0799140328644);
    msg.setSource(29705U);
    msg.setSourceEntity(184U);
    msg.setDestination(43005U);
    msg.setDestinationEntity(53U);
    msg.name.assign("USJWJZAJJRDYFOQKMJUWKHNINONVJWYNLAPGGSLHGDFFBPXZEKXHQQMRBMWCPEGZEGOTDYJQVKVOQXGXVSLTPIKMEJQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.917283758085);
    msg.setSource(50410U);
    msg.setSourceEntity(100U);
    msg.setDestination(28713U);
    msg.setDestinationEntity(102U);
    msg.name.assign("XVAASBTGIUDIQXRCEUDEVXGWUZEUJMMGLQALPRKQRYCCJWKOMCDDSBRYOKJZNJWRDSRCHUQZIBVXBKYSOVWPOXNFLKJPTGLFFGFFHBPCYHTHVJWGFYJALYBZSRSZPIZGGPNIQGHTQWSAUNFFNEEWPDVOVDIMUZDYZJNNEEUAMKROJTMKCIDI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.816158913671);
    msg.setSource(11762U);
    msg.setSourceEntity(163U);
    msg.setDestination(8060U);
    msg.setDestinationEntity(120U);
    msg.name.assign("ZDFNKLEVJKSBESPTZZYWLCXGOYXKTKNRHHQEXCMWPVUNKAWCQUEUDDZOIYDXKBBGLQFNLXJVMTBVQATHOJPVQXLAJSNHZTUFHIVYQMPGPOJPVDWRUMEDKAKDWIGTPRYGOJNJGCGOOFMTUZIRHYSCFCPFPRURMMGCBNSJQWSOBXYXBTZAAKUYRG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.349423449659);
    msg.setSource(47515U);
    msg.setSourceEntity(140U);
    msg.setDestination(56730U);
    msg.setDestinationEntity(87U);
    msg.name.assign("UVBKSOWTPUJTRPXHYWLBRIDNHCTFEGCLFQSCUIFCBLZKOZXAZFCLYSEMZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.111478052515);
    msg.setSource(29856U);
    msg.setSourceEntity(17U);
    msg.setDestination(18096U);
    msg.setDestinationEntity(162U);
    msg.type = 139U;
    msg.error.assign("VQHHXDLVMIBPCLXHDXTOAOSHMMGYZFSQBKUFIDUGSZRCDCLFIP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.305064807052);
    msg.setSource(62385U);
    msg.setSourceEntity(23U);
    msg.setDestination(53957U);
    msg.setDestinationEntity(10U);
    msg.type = 160U;
    msg.error.assign("HQUBCGZSLKLQVPMFFCKBSDXTJEX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.718274015925);
    msg.setSource(14880U);
    msg.setSourceEntity(89U);
    msg.setDestination(3757U);
    msg.setDestinationEntity(216U);
    msg.type = 138U;
    msg.error.assign("DTIQSYRFXTILMUTAYREZNIPVRNDONTEDFWLMNXQMJESWEIVPSCTRQBIQWAYKCZHAJZBBYOKNOUROCFTCMDDGGGEUTFZMYNZXZTOUAXXCGZDPPOLUVUYLAQUFJSXOJKHLWKPVLRGGBONWDISQNHXFEDMIHVKEXBFFVNCHACPBOTTNGQFSHJVJHGPJZZKCAABRQRQWYMYLAYUHYUREJSPWEXKESILJQFVSACSIMJXCMHDVKRWPDWKBZVBLMWBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.379243787153);
    msg.setSource(35170U);
    msg.setSourceEntity(35U);
    msg.setDestination(42997U);
    msg.setDestinationEntity(46U);
    msg.seq = 62071U;
    msg.sys_dst.assign("URWGZTKVJSALYMUPJLANKBVEHKRWJFMDGJWAYUDTLZDNRMIYYOVAOVRGNSH");
    msg.flags = 219U;
    const char tmp_msg_0[] = {-74, -1, 114, -74, -11, 25, 41, 64, 33, -23, 48, -128, -4, -114, -37, 79, 6, 111, 57, -33, -37, -107, 51, -120, 60, 105, -25, -30, 32, 122, 77, 118, 7, 16, -56, 87, -38, 32, -17, 72, -79, 6, 60, 125, -29, 73, -104, -116, -78, -9, -25, -14, -87, -65, -92, 60, 89, -108, -43, 87, 50, 25, 58, 100, 17, 86, 81, 50, -74, -123, -10, 45, 65, 18, 70, -128, 106, 21, 22, -73, -20, -82, -50, 51, -17, 96, 74, -38, -75, -41, 55, 0, 60, -59, 101, 80, -73, -69, 85, 40, -62, 3, 120, -32, -42, -12, -89, -34, -67, -33, 66, 41, 122, 25, 85, 16, -112, 71, 59, 84, 47, 67, -114, -50, 31, -7, -20, 51, -23, -113, -18, 54, 87, -24, -26, 113, -6, 96, 25, -46, -41, 56, -104, 10, 110, 95, -6, -77, -30, -94, -77, -6, 27, -12, 119, -12, -63, -109, -105, -13, 122, -40, -38, 106, 30, -68, -22, 7, -46, 82, -29, 79, -44, -95, -87, -40, -88, 118, -20, 126, 14, -65, -53, -126, 98, -94, -113, 10, 43, 75, 48, -76, -81, -91, 14, 28};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.163076095421);
    msg.setSource(11322U);
    msg.setSourceEntity(208U);
    msg.setDestination(64682U);
    msg.setDestinationEntity(155U);
    msg.seq = 16348U;
    msg.sys_dst.assign("VCVMXWYDLINLRNRXIVVOOWYXTBJNXJSQAEHJOFFNKITZQUQUIFAOAFAREGYOGZZDPVYNARHLWMNMTCUXGNBPUISXYLKHGSQZXGRKMCLWATASSUQPZVSHYQJEKTDQTCSYZJPOL");
    msg.flags = 18U;
    const char tmp_msg_0[] = {107, -46, 119, 34, -11, -24, -54, -9, -50, -101, -29, -9, 12, 39, -94, 43, 8, 99, -18};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.864360328996);
    msg.setSource(59569U);
    msg.setSourceEntity(161U);
    msg.setDestination(35216U);
    msg.setDestinationEntity(193U);
    msg.seq = 11281U;
    msg.sys_dst.assign("DJHWIRKJTBAHKVEUVRGBZDJHBQHGKRNWOQXMMRCI");
    msg.flags = 56U;
    const char tmp_msg_0[] = {-81, 12, 8, 89, -36, 13, -20, -34, 125, -60, -104, 35, 123, -19, 103, -51, -16, -29, 2, 96, -29, -88, -68, 105, 115, 34, -123, 89, 52, 91, -7, 52, 50, 4, 102, -58, 97, 19, 118, 84, -124, 25, -61, -124, 6, 11, -66, -63, -59, 120, -59, 85, -40, 21, -97, -9, 6, 107, 92, 16, -39, 43, -119, -100, -10, 7, -34, -104, -43, 90, 115, 53, -103, -101, 55, 47, 114, -6, -40, -52, -54, 10, -45, -41, 57, -36, -39};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.530576694343);
    msg.setSource(20868U);
    msg.setSourceEntity(193U);
    msg.setDestination(8080U);
    msg.setDestinationEntity(58U);
    msg.sys_src.assign("SWLUTOTRKGYIGXIPVHKZRRJVKAXKLJSDRDPHJSZCVWEBNTAITDXMEGJPYYEBNJPIMVGLZMAMCAYUZQNNFEOKUBXFIOODWIKU");
    msg.sys_dst.assign("FMPJIKXKPOEGFCPLUNLQBMPONHJWGOZICBMDUWDZASGABHURSYLJQVEOHI");
    msg.flags = 167U;
    const char tmp_msg_0[] = {105, -33, 48, -11, 48, 94, 3, 58, -97, -48, 104, 64, -101, -18, 68, 83, -54, -119, -65, 15, -23, -39, 30, 19, 119, -99, -56, -12, -110, 58, -54, 33, -98, 31, 54, 106, -32, 49, -120, -19, 7, -17, -99, 116, 122, 105, -100, -80, 33, -39};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.587956873232);
    msg.setSource(26011U);
    msg.setSourceEntity(175U);
    msg.setDestination(60181U);
    msg.setDestinationEntity(42U);
    msg.sys_src.assign("JOPKWLKRBXIGOKQVYJEDSHFOMJKDFAAZXSQJVSDZKXCFHHPQASZPBMRIRBHQQVWERBXHCDDRAXKIVJRZWBWQYTDWDGROOZEOJGQBCEYVFBNOASAWYBAGAKQRFCIXPLOYWTPAZYCXYVUKIIHKMBLNHUIEZGDILBHXYLPRPXWSUPUMCLZVNUGFJMUNFTZMSWQNUOSGUWYMHL");
    msg.sys_dst.assign("THLGNJWFQIFBHCESPZQRXHLXNVYUQTYOMKSZAKECKCUVFAJTMARGVILGXALRJJEJUEVNNJWXQIRTOKMYNRLWXGUHWUVHONNJGMKBPEYHMDORCWHUKLBYPYFDDGSCZVAMFIKOEULXRUASXDJIYCIYYSQMBYZPTWEJEFKGFGEJDZDUDHSZNTQVKPIQCCXAUVWFBFPSHLHCCLDINZXDZGOSGWATSKERQLRWINMVWQSPQOBOTPBMDTVOMXBBTOPAAZ");
    msg.flags = 169U;
    const char tmp_msg_0[] = {97, 9, -89, -22, -117, 33, 31, -8, 109, 43, 124, 77, 6, -60, 126, 13, 82, -60, 81, 125, 60, 73, -22, -48, 57, -75, -51, 65, 7, 112, 64, 45, -64, -96, 105, 92, 16, 97, 28, -116, 90, -118, 3, -97, 87, 12, -42, 39, -40, 9, 24, -28, -86, -35, 70, 84, 103, -121, -8, 1, -38, 59, -122, 44, -95, -89, 47, -44, 22, 27, 87, 91, -110, 55, 119, -113, 8, -63, 30, -20, -33, -56, 120, 34, -78, -123, -54, -12, 62, 123, 126, 116, 123, 108, 78, 29, -8, -87, -121, 67, -74, -8, 84, 90, 46, 50, -6, 43, -82, 104, -4, -81, 123, 62, 99, -64, -73, 75, -107, 101, -73, 52, -68, -89, -11, 84, 103, -49, -46, -66, 66, 107, -61, -107, -74, 106, 12, -11, 13, 19, -115, -22, -56, -89, -90, 107, 21, -37, 43, 60, 28, 86, -61, -54, -41, -91, 11, 63, -28, 99, 103, -59, 83, 19, -124, -111, 25, 95, 102, -4, -57, 2, -28, 84, -6, -95, 105, 115, 124, -118, 65, 56, -51, -44, 113, -36, 3, -63, 112, -13, -125, 39, 85, -124, -81, 68, -73, -85, 17, 84, -28, 76, 86, 52, -115, -29, 62, -70, 76, -9, 92, 2, -34, 113, -85, 96, 75, 44, 53, 33, -72, 5, 117, -124, 119, 76, -13, 115, -40, -89, 15, 119, -109, -111, 114, 22, 30, 9, 51, 72};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.315128408194);
    msg.setSource(53615U);
    msg.setSourceEntity(43U);
    msg.setDestination(2635U);
    msg.setDestinationEntity(167U);
    msg.sys_src.assign("USXWZARGVKAXCYVUCRWELJDODRIEOPEPJZASXNOUMMKPPIKBBYCLUHYBJIKAZYGXOQRSXHMVEADJWOJMYVKLW");
    msg.sys_dst.assign("ZYARTMTYYUHLQOBQQSSBXSDMVNTDGDKHIBPGOZAUPWLAILJQSOZVUKPFOCNRMETVVFLOCXVEKECNHKZFCGIZDSBYGNDXOQUR");
    msg.flags = 226U;
    const char tmp_msg_0[] = {-115, -52, -57, -126, -107, -120, -36, 67, 56, 20, 92, -39, 90, -49, -41, -112, 84, -19, -47, 115, -24, 3, -96, -113, 95, 79, -101, 54, 20, -102, 8, -82, 95, -85, -20, 73, 102, 81, -46, -119, -103, 71, 61, -100, 12, -86, 112, 113, 119, -51, 70, 27, -10, 33, 51, 28, -110, -115, -45, 91, 122, -108, 15, 85, -7, 101, -80, -59, 105, 110, 21, 36, -64, 80, 30, -12, -25, 98, 33, -17, -108, -11, 110, -15, -64, 99, -37, 91, 72, -38, 65, -103, -57, 105, 91, 115, 112, 100, 13, 79, -80, 105, -24, -57, -86, 98, 123, -118, -66, 70, 35, -20, 99, -34, 125, -96, -93, 0, 29, 80, -63, -76, 81, -98, 63, -7, -29, 26, -8, -38, -88, 69, 47, 13, 124, 52, 27, 33, 27, 27, -5, -85, -105, -53, 52, 81, 104, -70, -120, -85, -48, 24, -87, 44, 124, 39, -89, -124, 73, -113, 19, -85, 23, -111, 104, -119, 99, 98, 112, -82, -48, -87, -103, 30, -2, -27, 101, -81, -87, -77, -20, 83, -27, 79, 10, 77, -3, 6, -101, -44, -101, -15, 110, 30, -53, -109, -118, -39, 3, 25, -63, 30, -19};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.632485413339);
    msg.setSource(5192U);
    msg.setSourceEntity(143U);
    msg.setDestination(64538U);
    msg.setDestinationEntity(39U);
    msg.seq = 60522U;
    msg.value = 146U;
    msg.error.assign("ANTPDVCMTLZDPGDAWLJIWAPOHAAQVPYGNWYXLJVWKMELMMBERHBGXXCZQRCMKDMTVOPQSHXDVPIJNJSNQEHEBQBSNBXZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.201572016584);
    msg.setSource(22072U);
    msg.setSourceEntity(162U);
    msg.setDestination(33381U);
    msg.setDestinationEntity(142U);
    msg.seq = 38768U;
    msg.value = 35U;
    msg.error.assign("MXRYRFVPOHAGNLZXJHVRUSBLNTQFAVOSZHWZQHVXOAAXMOGNJSXFDUGWICGMNXEYTOCMIXBNVRZCETIZSIQPRLGMFSUKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.289071987978);
    msg.setSource(23448U);
    msg.setSourceEntity(23U);
    msg.setDestination(49015U);
    msg.setDestinationEntity(246U);
    msg.seq = 59247U;
    msg.value = 233U;
    msg.error.assign("KTGYOYVQSCQNGAJBFPPTPRDNVQGZEPWHPRSRASKZYDUETOHCUKXXGVSKVHIBDFFMSZBNLXTEUKPRIMEUJYUJBCZEXXPTYZVBRNKXDBGRQPWMEDNOUTEGLDLVJFNFHGAUBQNSSBVAQSCKLYM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.241661854534);
    msg.setSource(5531U);
    msg.setSourceEntity(149U);
    msg.setDestination(36728U);
    msg.setDestinationEntity(88U);
    msg.seq = 47543U;
    msg.sys.assign("EMSGSOIJAOINALQYQGNXLQHITQXVKKMVNSTELGEFDVTEZMAFXFUDDAEXBEBZPTDHJDHWJJFVNFKHZXSVWPOEMHJAMYLKVDI");
    msg.value = 0.844331824096;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.12595926888);
    msg.setSource(56126U);
    msg.setSourceEntity(35U);
    msg.setDestination(5374U);
    msg.setDestinationEntity(16U);
    msg.seq = 50825U;
    msg.sys.assign("ENNIAKTHMGOVVIOPNIPICJMKAPZUMBEQFXPKLUWPDJVEBZSBAEKIJAOOIKBYMYURVBJCBWNAYDOWCCWEEHDKWVTMRYRYFBTESFXNLQSRSSZHTVDDHUFNHKDBWXIADRUWQIUZCQKISEGJXVDKP");
    msg.value = 0.620763692451;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.301834532806);
    msg.setSource(8939U);
    msg.setSourceEntity(166U);
    msg.setDestination(53397U);
    msg.setDestinationEntity(56U);
    msg.seq = 60397U;
    msg.sys.assign("KVZVUQCVBYEQWAKMZMCCDYSODUUBMMRFQJPCBEWQIAQUPHPFASTMQWYTXHTQNVGOIAVJDRDSALGQYDSMYXNHGPNLNEVHKJTFDUCGZBQPIAKCXJLXMEESDOTFXKEDBJPUTIYHCLKJNPEUWNZSTAEZPRWAOMFYWLZ");
    msg.value = 0.402028217445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.53894223603);
    msg.setSource(33088U);
    msg.setSourceEntity(141U);
    msg.setDestination(4886U);
    msg.setDestinationEntity(150U);
    msg.action = 200U;
    msg.longain = 0.710215407727;
    msg.latgain = 0.478081132843;
    msg.bondthick = 3618636227U;
    msg.leadgain = 0.586536833244;
    msg.deconflgain = 0.913378252017;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.0250842797768);
    msg.setSource(60452U);
    msg.setSourceEntity(79U);
    msg.setDestination(31604U);
    msg.setDestinationEntity(246U);
    msg.action = 100U;
    msg.longain = 0.0401355510693;
    msg.latgain = 0.604794447836;
    msg.bondthick = 704359724U;
    msg.leadgain = 0.76979786195;
    msg.deconflgain = 0.711889283887;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.718490461557);
    msg.setSource(16292U);
    msg.setSourceEntity(226U);
    msg.setDestination(1577U);
    msg.setDestinationEntity(207U);
    msg.action = 231U;
    msg.longain = 0.595740127979;
    msg.latgain = 0.515513277105;
    msg.bondthick = 1240194469U;
    msg.leadgain = 0.435159188307;
    msg.deconflgain = 0.693097720572;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.863435557857);
    msg.setSource(24995U);
    msg.setSourceEntity(16U);
    msg.setDestination(30257U);
    msg.setDestinationEntity(32U);
    msg.err_mean = 0.54075717449;
    msg.dist_min_abs = 0.474774169407;
    msg.dist_min_mean = 0.18833518401;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.307235663039);
    msg.setSource(5909U);
    msg.setSourceEntity(149U);
    msg.setDestination(64656U);
    msg.setDestinationEntity(99U);
    msg.err_mean = 0.794731856566;
    msg.dist_min_abs = 0.306192296404;
    msg.dist_min_mean = 0.932130451225;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.28878629385);
    msg.setSource(55391U);
    msg.setSourceEntity(165U);
    msg.setDestination(33483U);
    msg.setDestinationEntity(213U);
    msg.err_mean = 0.96418352423;
    msg.dist_min_abs = 0.274438184943;
    msg.dist_min_mean = 0.57921582482;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.886955279884);
    msg.setSource(394U);
    msg.setSourceEntity(89U);
    msg.setDestination(53463U);
    msg.setDestinationEntity(38U);
    msg.action = 117U;
    msg.lon_gain = 0.552981261897;
    msg.lat_gain = 0.705777660492;
    msg.bond_thick = 0.90465165075;
    msg.lead_gain = 0.353791418247;
    msg.deconfl_gain = 0.584224462827;
    msg.accel_switch_gain = 0.532529837791;
    msg.safe_dist = 0.282046005867;
    msg.deconflict_offset = 0.454165673908;
    msg.accel_safe_margin = 0.777531697006;
    msg.accel_lim_x = 0.548379228174;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.180875848778);
    msg.setSource(49987U);
    msg.setSourceEntity(215U);
    msg.setDestination(51681U);
    msg.setDestinationEntity(220U);
    msg.action = 3U;
    msg.lon_gain = 0.802205994861;
    msg.lat_gain = 0.356452920618;
    msg.bond_thick = 0.0666849959013;
    msg.lead_gain = 0.768277883172;
    msg.deconfl_gain = 0.125924964232;
    msg.accel_switch_gain = 0.418901654452;
    msg.safe_dist = 0.964632819108;
    msg.deconflict_offset = 0.128016675706;
    msg.accel_safe_margin = 0.59087477659;
    msg.accel_lim_x = 0.776742138778;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.189053078351);
    msg.setSource(33434U);
    msg.setSourceEntity(53U);
    msg.setDestination(397U);
    msg.setDestinationEntity(176U);
    msg.action = 44U;
    msg.lon_gain = 0.107646156245;
    msg.lat_gain = 0.674735910941;
    msg.bond_thick = 0.159252543995;
    msg.lead_gain = 0.605999734735;
    msg.deconfl_gain = 0.143883886827;
    msg.accel_switch_gain = 0.0327009391614;
    msg.safe_dist = 0.90710379366;
    msg.deconflict_offset = 0.408658757667;
    msg.accel_safe_margin = 0.390235987074;
    msg.accel_lim_x = 0.662012032116;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.180236931737);
    msg.setSource(48676U);
    msg.setSourceEntity(54U);
    msg.setDestination(44251U);
    msg.setDestinationEntity(102U);
    msg.type = 84U;
    msg.op = 10U;
    msg.err_mean = 0.853912566949;
    msg.dist_min_abs = 0.434202303336;
    msg.dist_min_mean = 0.0520207642127;
    msg.roll_rate_mean = 0.855576381219;
    msg.time = 0.653062622028;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 233U;
    tmp_msg_0.lon_gain = 0.761707735797;
    tmp_msg_0.lat_gain = 0.911320079586;
    tmp_msg_0.bond_thick = 0.169279566617;
    tmp_msg_0.lead_gain = 0.288030752598;
    tmp_msg_0.deconfl_gain = 0.0576405041071;
    tmp_msg_0.accel_switch_gain = 0.586080762953;
    tmp_msg_0.safe_dist = 0.564027973872;
    tmp_msg_0.deconflict_offset = 0.333609460068;
    tmp_msg_0.accel_safe_margin = 0.519719642108;
    tmp_msg_0.accel_lim_x = 0.495931465266;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.195200046424);
    msg.setSource(8287U);
    msg.setSourceEntity(198U);
    msg.setDestination(42022U);
    msg.setDestinationEntity(198U);
    msg.type = 41U;
    msg.op = 172U;
    msg.err_mean = 0.760123899997;
    msg.dist_min_abs = 0.217034676022;
    msg.dist_min_mean = 0.116271893687;
    msg.roll_rate_mean = 0.243300137672;
    msg.time = 0.188666786952;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 140U;
    tmp_msg_0.lon_gain = 0.379435854688;
    tmp_msg_0.lat_gain = 0.0305831923488;
    tmp_msg_0.bond_thick = 0.959194541709;
    tmp_msg_0.lead_gain = 0.999191903358;
    tmp_msg_0.deconfl_gain = 0.150713297917;
    tmp_msg_0.accel_switch_gain = 0.235762466821;
    tmp_msg_0.safe_dist = 0.0673218528853;
    tmp_msg_0.deconflict_offset = 0.82719899165;
    tmp_msg_0.accel_safe_margin = 0.554020963074;
    tmp_msg_0.accel_lim_x = 0.456552936946;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.910823563684);
    msg.setSource(50762U);
    msg.setSourceEntity(163U);
    msg.setDestination(41274U);
    msg.setDestinationEntity(230U);
    msg.type = 166U;
    msg.op = 149U;
    msg.err_mean = 0.525983285233;
    msg.dist_min_abs = 0.950165309723;
    msg.dist_min_mean = 0.216599730589;
    msg.roll_rate_mean = 0.569345383054;
    msg.time = 0.521122684476;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 68U;
    tmp_msg_0.lon_gain = 0.841392911986;
    tmp_msg_0.lat_gain = 0.195727779723;
    tmp_msg_0.bond_thick = 0.331308221859;
    tmp_msg_0.lead_gain = 0.948191158009;
    tmp_msg_0.deconfl_gain = 0.926384538797;
    tmp_msg_0.accel_switch_gain = 0.177216630102;
    tmp_msg_0.safe_dist = 0.0496081442579;
    tmp_msg_0.deconflict_offset = 0.434946022013;
    tmp_msg_0.accel_safe_margin = 0.49339512342;
    tmp_msg_0.accel_lim_x = 0.610833255803;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.680541159095);
    msg.setSource(35222U);
    msg.setSourceEntity(60U);
    msg.setDestination(37923U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.842781834798;
    msg.lon = 0.214908717917;
    msg.eta = 4251231914U;
    msg.duration = 61287U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.489358226377);
    msg.setSource(22966U);
    msg.setSourceEntity(189U);
    msg.setDestination(55041U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.819762386923;
    msg.lon = 0.919927149374;
    msg.eta = 1388804141U;
    msg.duration = 39191U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.994986678632);
    msg.setSource(45549U);
    msg.setSourceEntity(115U);
    msg.setDestination(17018U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.631476044017;
    msg.lon = 0.278705000093;
    msg.eta = 606937365U;
    msg.duration = 38457U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.307788959442);
    msg.setSource(56237U);
    msg.setSourceEntity(4U);
    msg.setDestination(14364U);
    msg.setDestinationEntity(88U);
    msg.plan_id = 59120U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.142293140244;
    tmp_msg_0.lon = 0.0211302203934;
    tmp_msg_0.eta = 1678713287U;
    tmp_msg_0.duration = 5814U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.581603020519);
    msg.setSource(64657U);
    msg.setSourceEntity(137U);
    msg.setDestination(4932U);
    msg.setDestinationEntity(59U);
    msg.plan_id = 48984U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.224317281374;
    tmp_msg_0.lon = 0.916056430361;
    tmp_msg_0.eta = 3394184716U;
    tmp_msg_0.duration = 8925U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.677174859293);
    msg.setSource(27450U);
    msg.setSourceEntity(4U);
    msg.setDestination(39307U);
    msg.setDestinationEntity(43U);
    msg.plan_id = 15623U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.323287281539;
    tmp_msg_0.lon = 0.603010724817;
    tmp_msg_0.eta = 2791007085U;
    tmp_msg_0.duration = 56916U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.953918932618);
    msg.setSource(60387U);
    msg.setSourceEntity(88U);
    msg.setDestination(16531U);
    msg.setDestinationEntity(203U);
    msg.type = 251U;
    msg.command = 252U;
    msg.settings.assign("AXVETODAAVHEDBBUYWESYMWRNRBPTQXWBWRRFQOJQGYAMMMNUCSEHBLKAETVWSVFZSINTRFVGITWLDTMECXIPXSGUNGNUCWNSALBJQHCXYKYFUAZDQMCYQEJSYGUDIUYOGOCZGOQCXMBRLHHDSPIIVLZIDZGQTKPBHENAVKIFKCPTHTIJAKPXZDLJJFXUOPFNDWZRPLLNHMUQIVJMWLNKKTPURK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 59030U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ZTUTARRPTGDRNAHYBLMTALBKGKUEFHPEJENICGUVHXVETBYOSSLCXHDTIWWMTRMHOPOUOIEEIZYYXTWGEAQHNDAIDUZQAZPGCCICOHFGWJVCRBNMKYVCZHDQLRZEJQSKXFUWDFPJZHDASMGOOYLUBEFNFXGABQDJCVPDOUVXMSKFJLXCFV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.0905258170182);
    msg.setSource(13598U);
    msg.setSourceEntity(42U);
    msg.setDestination(13400U);
    msg.setDestinationEntity(137U);
    msg.type = 198U;
    msg.command = 73U;
    msg.settings.assign("YFKFCTSQMDZFCRBOKWQHQDDNQXHYVLJBJIXWOMASHTGYMWHLXITLSOMGBHAZHVIWFGRRBLIIYLFWNAAXLCDQRNXLHOZUBXVEFVQECGIYCARCSWENUVIKQAVDEJILZERTUBPXMBWGKADUXGZNKPDEDKSOSISXTGBMQPPUPTDGORCUEBVMSMPZJIZVJGOFPOCEALTMDYFJTAN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 3446U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.440172011729;
    tmp_tmp_msg_0_0.lon = 0.0348533635683;
    tmp_tmp_msg_0_0.eta = 2003638153U;
    tmp_tmp_msg_0_0.duration = 6372U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GUZLBJHXBHIRGVAYHYPBOCKVUGALQJBKRIYXLXQNHBMXWSPARDICIGVEOETKEFOZCCMXWQDOHMQXLAGIOJRQWYREUNPZEPLKOPFCTHPXEMRULHWSFTVKSKNNGGBNWQWARDKAILMBJEEANZZOFDWDWQOFRFSJPTNF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.506284716005);
    msg.setSource(4801U);
    msg.setSourceEntity(17U);
    msg.setDestination(8533U);
    msg.setDestinationEntity(50U);
    msg.type = 149U;
    msg.command = 252U;
    msg.settings.assign("OHGZCSGSKPWRBXMUQYHMPAAXRWVVNEOJDPAWHOUHNIDNBCUWYHQPEFNZVNRJWYFWOFPRYXPIOQIJHTULFEOVVIHXMZUJBJLRFCSACBTK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 24360U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("WUWGJQPNWHROEEJJQADVKBYZZAUIIMQLVBMAGSKLEGLFANXRTOPYLHFIKOCQMOEZEYSCKTSPRQHMKORHGCKCXHSMJPUBYYFGNCLEDVNKIVHGAFLFZVCJRDAQSTIBPJDAYJMXTQWOCKJVBYOPIXRHNKUNUQHMAYEDMXOISOZXLQZVTVSJGVEDUANPGVIMFNJBRFOZCUCRDSQLRMXPULNEWWNZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.657404912629);
    msg.setSource(47763U);
    msg.setSourceEntity(94U);
    msg.setDestination(3064U);
    msg.setDestinationEntity(14U);
    msg.state = 43U;
    msg.plan_id = 24445U;
    msg.wpt_id = 168U;
    msg.settings_chk = 52045U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.76565709236);
    msg.setSource(13040U);
    msg.setSourceEntity(50U);
    msg.setDestination(43382U);
    msg.setDestinationEntity(85U);
    msg.state = 236U;
    msg.plan_id = 11754U;
    msg.wpt_id = 222U;
    msg.settings_chk = 4402U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.297381132397);
    msg.setSource(48145U);
    msg.setSourceEntity(194U);
    msg.setDestination(150U);
    msg.setDestinationEntity(185U);
    msg.state = 120U;
    msg.plan_id = 11925U;
    msg.wpt_id = 218U;
    msg.settings_chk = 32657U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.481726876609);
    msg.setSource(34220U);
    msg.setSourceEntity(133U);
    msg.setDestination(14075U);
    msg.setDestinationEntity(194U);
    msg.uid = 220U;
    msg.frag_number = 38U;
    msg.num_frags = 207U;
    const char tmp_msg_0[] = {-52, -8, -67, -85, 62, 44, -99, -117, -8, -72, -114, 7, -46, -124, 37, -34, -83, -71, 89, -21, 58, -67, 124};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.740574701916);
    msg.setSource(11666U);
    msg.setSourceEntity(56U);
    msg.setDestination(57920U);
    msg.setDestinationEntity(130U);
    msg.uid = 129U;
    msg.frag_number = 152U;
    msg.num_frags = 8U;
    const char tmp_msg_0[] = {115, 0, -90, -22, -61, 108, -119, -67, 3, 73, 106, -38, 69, -41, 52, -35, 62, -12, -82, 109, -47, -75, -45, 30, -21, -112, -36, 12, -54, -73, 18, -9, -48, 72, 4, -79, 13, 4, 9, 20, -14, -100, -90, 27, 18, 89, 48, -59, -123, 62, -19, -41, -53, 70, -3, 72, 50, -115, 67, 74, 71, -31, 62, 54, -94, 46, -27, -8, -105, 123, 107, 50, -110, 118, -126, 104, 75, 70, 52, -10, 87, 18, 114, -32, -41, -69, 16, -9, 26, -120, -12, 27, -5, 34, 52, 122, 75, 115, 86, 23, -33, 60, -62, -124, 124, 54, 74, -60, -126, -66, 45, 35, -70, 39, 119, -117, 70, -60, 97, 122, -30, 81, -27, 111, -105, -32, -3, 35, 43, 98, 64, 78, 99, 119, -101, -35, -108, 48, 20, -57, 55, -21, -26, 88, -48, -25, -89, 62, 26, -105, 55, 0, 77, 24, -117, -29, 114, 51, 28, 11, -128, -47, -122, 111, -40};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.841689193228);
    msg.setSource(48397U);
    msg.setSourceEntity(133U);
    msg.setDestination(37308U);
    msg.setDestinationEntity(235U);
    msg.uid = 181U;
    msg.frag_number = 151U;
    msg.num_frags = 43U;
    const char tmp_msg_0[] = {56, 85, -115, 63, 17, 90, 107, -7, -2, -48, -125, -58, -68, -11, 35, -93, -128, -58, -19, 68, -80, 97, -36, 34, 64, 16, -54, -99, -105, 16, 108, -1, 103, 16, -108, -80, -53, -20, -18, 69, 105, 82, -67, 120, 51, 95, -89, -110, 67, 57, 87, 108, 125, -56, -16, 101, -118, 57, 121, 51, -108, -78, 94, 122, -53, -122, -60, 47, -59, 112, 37, -110, 77, 112, 45, 102, 106, 94, -24, 2, 102, -22, 7, -111, -106, -103, -92, 83, 25, 13, -104, 31, 95, 5, 87, -28, 89, 8, -104, -44, 13, 38, -57, 78, 101, 39, 98, 107, -109, -110, -70, 26, 45, -9, 24, 24, 100, -35, 50, 12, -17, -60, -48, -75, 49, -53, -46, 36, 33, 74, -58, 53, -128, -43, 111, 114, -67, -14, -93, 58, 67, -109, 30, 102, -125, -45, 123, 91, -78, 36, 116, 26, -119, -128, 35, 60, -107};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.888954856875);
    msg.setSource(36878U);
    msg.setSourceEntity(93U);
    msg.setDestination(54316U);
    msg.setDestinationEntity(148U);
    msg.content_type.assign("GUDYVRHJLMCMDUHYNEZQPPRPYDRLJGYGSFEVMYVKEGXMFBDRKMAEAOFNLWFCLPDFZFFEPECUDCOCDXCWJTOKZMPFVDLEYMWUBKKGOAVOPDKNNYCTQJSAAQINQQXUOBOBKJSCBVSHTYSOBWNEVCHUZTOLRCSABYPIITWJQXUWSNIJTQXBFLGXJUSIHHZRXRZZFRHBASKZLLWGIOBI");
    const char tmp_msg_0[] = {-6, -20, -96, -82, -69, 82, 36, 123, -80, -84, -76, -29, 46, -38, -6, 92, -94, -10, 60, -3, -104, -112, 106, 116, 35, 1, 125, 53, -82, -110, -66, 107, -84, -1, 15, 9, -28, 124, -3, -54, -15, -58, 13, -60, -109, -110, -65, -66, 126, 94, -36, -110, 58, 97, -63, -110, -53, 108, -32, 35, 74, -48, 39, -9, -78, 78, -29, -72, -108, 55, -26, -86, 78, -76, 10, 75, 115, 119, -76, -25, 66, 120, -41, 34, -48, 122, -22, -55, 11, -28, 95, 26, -118, 56, 26, -68, 103, 111, -99, -55, 92, -12, 22, 32, 43, 80, -1, -68, 92, 12, 30, 97, -48, 59, -53, 75, 2, 112, 75, 119, -114, -71, -71, -26, -3, 48, -90, -52, -84, -107, 36, -48, 27, 90, -114, -113, -24, 76, -37, -72, -125, 64};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.777562373983);
    msg.setSource(54172U);
    msg.setSourceEntity(180U);
    msg.setDestination(4004U);
    msg.setDestinationEntity(106U);
    msg.content_type.assign("FCUSUGMWQULKYSYLPVMGTMQHCKPARYUJVEEQBRMRJEXAXI");
    const char tmp_msg_0[] = {-125, -10, -72, 59, -55, -61, 108, 64, 83, -75, 108, -87, -126, -27, 125, 94, -113, -4, -96, -62, 113, -23, 24, -54, -34, 55, -66, 45, -91, 3, -96, 81, -111, 50, -82, 118, 68, 26, 106, -94, 70, -106, 53, 54, 101, 28, 115, 96, 78, 84, 95, 121, -9, 104, 42, 73, 87, 89, 22, 9, 105, 126, 3, 113, -99, 92, 96, -66};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.621019965379);
    msg.setSource(12021U);
    msg.setSourceEntity(235U);
    msg.setDestination(12106U);
    msg.setDestinationEntity(76U);
    msg.content_type.assign("OQSDSHAMZZCQVCTFVKFRTYWOQQPJLERCJVSULOZYVNMULYLLIIZGAHICFEMALEXYLAWERUXATHBOPTUQGVQTTNNWJJDLCQGOPMBVWXKKBLAMSR");
    const char tmp_msg_0[] = {-40, -2, 92, 20, 85, 107, -93, -16, 67, -75, -23, 44, -20, -55, 46, -62, 5, -54, 28, 80, -32, 16, 2, 37, 6, 64, -23, 65, 14, -79, -8, 118, -14, -11, 24, 10, 73, 95, -112, 81, -86, -20, -119, -34, 43, 33, 33, -58, 88, 89, 30, -123, -10, 90, 78, -61, 11, -116, -19, -45, 20, 83, -20, 74, 108, 5, -79, 80, 89, 73, 109, 115, 106, -17, -38, 95, -112, -40, 25, 48, -122, -126, -17, 110, -87, 30, -81, 37, -93, -51, 113, 86, -40, -33, 8, 44, 94, -64, 31, -120, -119, 99, -19, -41, 34, 20, 78, -113, -46, 7, -57, 120, -54, 123, -122, 56, -1, 90, 96, -75, 97, -17, -115, 53, 57, -91, 68, 68, -124, -94, 47, 42, -91, -12, 107, 31, -92, -104, -99, 15, 25, 66, -2, 38, 74, -95, -40, 112, 7, 100, -26, 29, 97, 30, -9, -31, -107, 8, -36, -114, 88, -13, 57, -120, -19, -39, 46, -107, 70, 40, 33, -102, 63, -81, 30, 98, -1, 27, -31, -81, 84, 89, -105, 78, -102, 18, 70, -8, -81, 84, -10, -32, -99, -85, -127, 53, -61, 51, -113, 123, -79, 10, -9, -17, 120, 100, 27, 41, 48, 1, -3, -127, 28, 39};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.457285783218);
    msg.setSource(47140U);
    msg.setSourceEntity(93U);
    msg.setDestination(11167U);
    msg.setDestinationEntity(225U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.381059484184);
    msg.setSource(23159U);
    msg.setSourceEntity(26U);
    msg.setDestination(46145U);
    msg.setDestinationEntity(79U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.286546673292);
    msg.setSource(5558U);
    msg.setSourceEntity(214U);
    msg.setDestination(25890U);
    msg.setDestinationEntity(251U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.195451897255);
    msg.setSource(33971U);
    msg.setSourceEntity(38U);
    msg.setDestination(16484U);
    msg.setDestinationEntity(244U);
    msg.target = 25724U;
    msg.bearing = 0.525570944067;
    msg.elevation = 0.608270056743;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.657621978376);
    msg.setSource(42108U);
    msg.setSourceEntity(78U);
    msg.setDestination(6308U);
    msg.setDestinationEntity(182U);
    msg.target = 12490U;
    msg.bearing = 0.632647121101;
    msg.elevation = 0.409147043141;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.812987971543);
    msg.setSource(32090U);
    msg.setSourceEntity(236U);
    msg.setDestination(22515U);
    msg.setDestinationEntity(21U);
    msg.target = 36933U;
    msg.bearing = 0.792567844706;
    msg.elevation = 0.492135596101;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.951822349475);
    msg.setSource(56667U);
    msg.setSourceEntity(216U);
    msg.setDestination(64384U);
    msg.setDestinationEntity(206U);
    msg.target = 462U;
    msg.x = 0.377214353119;
    msg.y = 0.937152361036;
    msg.z = 0.755065288094;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.747468098876);
    msg.setSource(50925U);
    msg.setSourceEntity(201U);
    msg.setDestination(63853U);
    msg.setDestinationEntity(81U);
    msg.target = 65462U;
    msg.x = 0.149869022501;
    msg.y = 0.114534367599;
    msg.z = 0.115777754771;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.203941581252);
    msg.setSource(64607U);
    msg.setSourceEntity(38U);
    msg.setDestination(38728U);
    msg.setDestinationEntity(17U);
    msg.target = 30668U;
    msg.x = 0.638338395362;
    msg.y = 0.0408134007544;
    msg.z = 0.314482645955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.268587642217);
    msg.setSource(38384U);
    msg.setSourceEntity(246U);
    msg.setDestination(43777U);
    msg.setDestinationEntity(158U);
    msg.target = 37387U;
    msg.lat = 0.602385001553;
    msg.lon = 0.433651421192;
    msg.z_units = 131U;
    msg.z = 0.560684586621;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.761046028958);
    msg.setSource(55860U);
    msg.setSourceEntity(220U);
    msg.setDestination(31418U);
    msg.setDestinationEntity(54U);
    msg.target = 60114U;
    msg.lat = 0.919171566441;
    msg.lon = 0.990175869003;
    msg.z_units = 85U;
    msg.z = 0.300864979042;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.693178637417);
    msg.setSource(50680U);
    msg.setSourceEntity(64U);
    msg.setDestination(17831U);
    msg.setDestinationEntity(69U);
    msg.target = 41248U;
    msg.lat = 0.739048469902;
    msg.lon = 0.224610416269;
    msg.z_units = 252U;
    msg.z = 0.75641043958;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.744733804768);
    msg.setSource(59282U);
    msg.setSourceEntity(227U);
    msg.setDestination(55381U);
    msg.setDestinationEntity(86U);
    msg.locale.assign("KOIQXDUEKKSJGPCZYOOAPWYFWCHBPDCNYHHVDWRCWLZCTABXWESLKILJFLNEJXUGRSMNFVYRBOZOLXADQPHPSDRBWJOJZOKWXCOYP");
    const char tmp_msg_0[] = {57, -95, 106, 8, 88, -2, 32, 28, -73, 72, 30, -96, -38, -97, 7, -126, 22, -24, -48, 28, 3, 88, -27, -50, -47, -117, -33, -22, -123, 82, -50, 46, -127, -15, -62, -15, -95, -43, -124, 87, -13, -90, 62, 103, -11, 9, 62, -21, -103, 27, -103, -53, 3, 67, 85, 38, -2, 97, 74, -32, -70, -48, 29, -86, -35, 34, -13, 100, -99, 60, 14, -126, 91, -80, -124, 45, -91, -119, 54, -105, -26, -78, 108, 62, 30, -50, -84, 46, 115, -68, -106, -117, -127, 76, -119, -54, -79, 31, -30, -69, -123, 107, 66, -17, -10, 105, -108, -51, 23, -76, -118, -114, -100, 104, 110, 43, -91, 55, 115, -80, 114, 13, -76, -14, -8, -63, 90, -2, 84, -111, -18, -41, -40, -65, 38, -17, -87, -14, -20, 40, 115, -50, -26, 20, 99};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.385116783179);
    msg.setSource(50666U);
    msg.setSourceEntity(14U);
    msg.setDestination(60810U);
    msg.setDestinationEntity(80U);
    msg.locale.assign("WBIJLHDHYPPMQBCBQHTBDSIIXUNJZVVYPOVMBGBOIJMANUCWNGGAXSLZWRJUOMIXEHYNTHGIELXELVKO");
    const char tmp_msg_0[] = {-58, -77, -74, 76, -89, 72, -114, 15, 116, 81, 60, 44, 73, -47, 43, 68, 86, 86, -125, -28, -13, 74, 100, -59, -62, 26, 125, 2, -114, 44, 69, 93, 53, -39, -25, -92, -70, -88, 31, -42, 82, -90, 102, 0, -52, -43, -33, -28, 27, 65, 107, 70, -54, -83, 117, 70, -62, -121, 103, 32, -25, -50};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.909778574641);
    msg.setSource(22743U);
    msg.setSourceEntity(39U);
    msg.setDestination(31173U);
    msg.setDestinationEntity(87U);
    msg.locale.assign("DDOTHWVUSTQFRWCEKAODFOBNLRPMSSGHKYTWABVKYKZKTPJZOHLCGVDGQRPIHSPPWLBUHSMIYFILZLYICQPADGBACXYQEZIQJODUXRCJXLWKSMENKDDROGQMUJOTHHGRSMBXFVVKWCUBCIALFQPKITKNXYMLOQBRJHBFFXWNZATUDIGIZFQHYXCEOFVITVPJDXELEAJZNMCEGOAVPNAYMVNRZCMX");
    const char tmp_msg_0[] = {-114, -74, -77, 43, -50, 78, -108, 115, -33, -36, 118, 109, 27, 100, 47, 30, 65, -104, -101, -112, -36, 96, 120, 0, 13, 124, -82, 71, -110, 100, 113, 13, 46, 62, -119, -80, 115, -66, 114, 114, -35, 6, -63, -35, -88, 2, 92, 84, 97, -126, 93, -46, -15, -8, 60, -13, -84, 26, 31, -79, -68, 98, -100, 51, -63, -121, 48, 100, 95, -19, 86, -46, -120, 68, 3, -53, 37, -11, 3, -46, -22, -121, 17, 51, -72, -40, -105, 69, 61, 58, 81, 112, -89, 99, -110, 38, 18, -15, -96, -14, 114, 98, -38, -6, 96, -64, -87, -64, 67, 33, -6, 76, -49, -39, -59, -109, 81, 100, 118, 102, 37, -41, -7, -39, 59, -103, -54, 113, 80, 71, 43, -108, 99, 100, 12, 37, -29, -77, -33, 96, -59, 45, -89, -121, 105, 45, 61, -24, 96, -89, 11, -27, 113, -51, -78, -42, -4};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.622881014383);
    msg.setSource(7484U);
    msg.setSourceEntity(191U);
    msg.setDestination(13181U);
    msg.setDestinationEntity(1U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.423426483758);
    msg.setSource(30269U);
    msg.setSourceEntity(186U);
    msg.setDestination(9777U);
    msg.setDestinationEntity(42U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.176205674397);
    msg.setSource(59918U);
    msg.setSourceEntity(222U);
    msg.setDestination(15282U);
    msg.setDestinationEntity(249U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.479072812449);
    msg.setSource(3204U);
    msg.setSourceEntity(104U);
    msg.setDestination(48220U);
    msg.setDestinationEntity(208U);
    msg.camid = 205U;
    msg.x = 6638U;
    msg.y = 22983U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.839782814436);
    msg.setSource(16724U);
    msg.setSourceEntity(70U);
    msg.setDestination(25343U);
    msg.setDestinationEntity(105U);
    msg.camid = 36U;
    msg.x = 40805U;
    msg.y = 28582U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.905774026136);
    msg.setSource(48252U);
    msg.setSourceEntity(211U);
    msg.setDestination(2175U);
    msg.setDestinationEntity(248U);
    msg.camid = 218U;
    msg.x = 42962U;
    msg.y = 33489U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.562775510849);
    msg.setSource(734U);
    msg.setSourceEntity(225U);
    msg.setDestination(15966U);
    msg.setDestinationEntity(20U);
    msg.camid = 211U;
    msg.x = 45525U;
    msg.y = 19606U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.956588951502);
    msg.setSource(10072U);
    msg.setSourceEntity(235U);
    msg.setDestination(5322U);
    msg.setDestinationEntity(135U);
    msg.camid = 52U;
    msg.x = 9520U;
    msg.y = 62196U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.807740839078);
    msg.setSource(61178U);
    msg.setSourceEntity(120U);
    msg.setDestination(26242U);
    msg.setDestinationEntity(191U);
    msg.camid = 227U;
    msg.x = 43827U;
    msg.y = 54616U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.990305880365);
    msg.setSource(18792U);
    msg.setSourceEntity(187U);
    msg.setDestination(11857U);
    msg.setDestinationEntity(141U);
    msg.tracking = 118U;
    msg.lat = 0.12670588052;
    msg.lon = 0.419917675844;
    msg.x = 0.345674761317;
    msg.y = 0.0343942975848;
    msg.z = 0.568520707835;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.869011990794);
    msg.setSource(25475U);
    msg.setSourceEntity(185U);
    msg.setDestination(4710U);
    msg.setDestinationEntity(87U);
    msg.tracking = 26U;
    msg.lat = 0.319996407072;
    msg.lon = 0.0643576486483;
    msg.x = 0.951208510741;
    msg.y = 0.27657087428;
    msg.z = 0.718253235476;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.215602989425);
    msg.setSource(65511U);
    msg.setSourceEntity(143U);
    msg.setDestination(54399U);
    msg.setDestinationEntity(83U);
    msg.tracking = 205U;
    msg.lat = 0.319680522977;
    msg.lon = 0.169440765117;
    msg.x = 0.154208319631;
    msg.y = 0.690244731461;
    msg.z = 0.856502831114;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.0428092847258);
    msg.setSource(47392U);
    msg.setSourceEntity(44U);
    msg.setDestination(56103U);
    msg.setDestinationEntity(58U);
    msg.target.assign("SDOAKGCGZWBYGLEUYQUHQSEUJZQVMAHFEWVMADIIZECTSYYCLBNJYUUERISERFBXGMNKIHFGXPYLAOMCDUKAHKJPXBXXVGLMSNBOPMBYIHLEJNFWDWYCBYQOQ");
    msg.lbearing = 0.522157567874;
    msg.lelevation = 0.982834976512;
    msg.bearing = 0.200449351589;
    msg.elevation = 0.246743869684;
    msg.phi = 0.623571739709;
    msg.theta = 0.122431477146;
    msg.psi = 0.733168906935;
    msg.accuracy = 0.241112499169;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.4410688128);
    msg.setSource(31212U);
    msg.setSourceEntity(9U);
    msg.setDestination(41009U);
    msg.setDestinationEntity(139U);
    msg.target.assign("NTXHAQIHGMOZYFSYJHQJAWAUXEZZYMNRAXZPVKFI");
    msg.lbearing = 0.373593912767;
    msg.lelevation = 0.543314975104;
    msg.bearing = 0.0721311187157;
    msg.elevation = 0.281378252451;
    msg.phi = 0.776792743931;
    msg.theta = 0.545591861826;
    msg.psi = 0.724227962229;
    msg.accuracy = 0.450121038814;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.535450981574);
    msg.setSource(13635U);
    msg.setSourceEntity(122U);
    msg.setDestination(60075U);
    msg.setDestinationEntity(79U);
    msg.target.assign("YUOOCCCQATAQRYZUOKMUJUTZZKGUOZVPFPKLCWANXYFLAPGSTCHBAHBRVVAWZOEJOHFMAEWYVKRRVHXTLFICTVXSWIQDSVJSWCWBFSQXBAYDGJPLUTNQIFFBYQDEZGZECKPCPDNBMPNDKNTORTWUKFHGJIZVJXXNRSMHTILYMLGNBHKWPQYWMHJHVUEL");
    msg.lbearing = 0.168457340172;
    msg.lelevation = 0.540292087679;
    msg.bearing = 0.00156892571732;
    msg.elevation = 0.848669564625;
    msg.phi = 0.0388262155536;
    msg.theta = 0.0594940445906;
    msg.psi = 0.172219217432;
    msg.accuracy = 0.579993172956;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.674263783986);
    msg.setSource(38835U);
    msg.setSourceEntity(14U);
    msg.setDestination(60539U);
    msg.setDestinationEntity(64U);
    msg.target.assign("GEOTJQELGTFRVSVDWVHWLGOTDSSWARMOSPQZBYWPIWUQXKKRSUKAKVMSXGSQQMZCISONJYMHZNUMINUCUMGBXHUEXNLBNFRAOQDBHNZEJFFVKUDYYLQYWYLBHIKJTMFGLDCEAIQJCRICJXKOMAUFEHXJETACDRDCIBFZLWOWFDBVVHLEUYITZACOUB");
    msg.x = 0.82534049686;
    msg.y = 0.876036445953;
    msg.z = 0.245896140876;
    msg.n = 0.688815466041;
    msg.e = 0.912788134807;
    msg.d = 0.108766515363;
    msg.phi = 0.49521862109;
    msg.theta = 0.935069120972;
    msg.psi = 0.255503736943;
    msg.accuracy = 0.171885685715;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.598626582545);
    msg.setSource(24185U);
    msg.setSourceEntity(103U);
    msg.setDestination(51422U);
    msg.setDestinationEntity(208U);
    msg.target.assign("EYPUTEWIZNJUQFDBMXIKFEPGEQWMGGMGZVSNUNEYRARLWOHGUQXFAMNMPTBVLRLORTAWULKVAMLIVEJPDXGZNWUPCBKXZIJAVFXQCRGZOHOHBDFHCSOLKTKSFXVJKDDCEVCDSRJOJRNXTKKTHQVUYOSXHJOEICJJIHFWZQGKHIBGMBVZTBYQIPUFDTAPSINHCWMLPWLTLMATPQZZYASYYBRLSSANNWYRDYUZDF");
    msg.x = 0.75773325407;
    msg.y = 0.0611643359234;
    msg.z = 0.958730677444;
    msg.n = 0.956907278445;
    msg.e = 0.265855359624;
    msg.d = 0.884078549864;
    msg.phi = 0.60925875535;
    msg.theta = 0.11043410446;
    msg.psi = 0.170697721458;
    msg.accuracy = 0.0597562262471;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.0176936336296);
    msg.setSource(9123U);
    msg.setSourceEntity(145U);
    msg.setDestination(44680U);
    msg.setDestinationEntity(52U);
    msg.target.assign("TCAFLQAIHZIBWUJKXSAKBBQDKGZQZOPINYHFAEUPHXZYULHUAOTLWGJWGBXNMODIYEWKSYQTDOCBSMW");
    msg.x = 0.0804343940668;
    msg.y = 0.407168780205;
    msg.z = 0.109972294071;
    msg.n = 0.555070485724;
    msg.e = 0.493689342829;
    msg.d = 0.131293580484;
    msg.phi = 0.664145531365;
    msg.theta = 0.0691884456061;
    msg.psi = 0.952781509556;
    msg.accuracy = 0.933104310422;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.308848278575);
    msg.setSource(9418U);
    msg.setSourceEntity(1U);
    msg.setDestination(23572U);
    msg.setDestinationEntity(29U);
    msg.target.assign("RFBKXXTIZFHGUPHDBVZPGUHSJNLQKFMYQLXMBMTZYEQQKBDREMYTBXPDDKUSJTOCJEZORARWKBUYGBHZRJSQSSCVQBMLERAIHWARNONANIJPAJVWCNDLOFHJDGAIYEDUCIXCTIVBCUESVWRISEWZQCWZOCCNLXQUPLGKRVCSMUMMVAWEPMYYZORXQPSBWVAKJPJTOTDFHGOLOLF");
    msg.lat = 0.979891696883;
    msg.lon = 0.349621123428;
    msg.z_units = 145U;
    msg.z = 0.430877028296;
    msg.accuracy = 0.988603924084;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.487385348449);
    msg.setSource(11771U);
    msg.setSourceEntity(213U);
    msg.setDestination(45474U);
    msg.setDestinationEntity(109U);
    msg.target.assign("ICKSKWWRRBKRJRDARNPIVX");
    msg.lat = 0.0182641416521;
    msg.lon = 0.240809229626;
    msg.z_units = 51U;
    msg.z = 0.117054417815;
    msg.accuracy = 0.54402129486;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.861731099705);
    msg.setSource(56572U);
    msg.setSourceEntity(134U);
    msg.setDestination(54052U);
    msg.setDestinationEntity(51U);
    msg.target.assign("FKWLUVLEITRGNQJPAONRSSEQDJRAYYGDXIYOACNLDXKQQJCYHUYEVMAIKCMEOOXMASJZXMWQROWBFQNTAYAFZZKJZFXRKTLWZNTFWLBRIWIJOIJRHLPOHDSCSXBCEUXZLGNHDXZUSBBHEFQHSPKDIXTCQOUMZKGKVRDEMQMRWMKLTCUT");
    msg.lat = 0.697146961768;
    msg.lon = 0.14907476066;
    msg.z_units = 39U;
    msg.z = 0.967487984842;
    msg.accuracy = 0.94023065518;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.728265494062);
    msg.setSource(31394U);
    msg.setSourceEntity(198U);
    msg.setDestination(7459U);
    msg.setDestinationEntity(193U);
    msg.name.assign("WUGBHZLCLCIRZBDTYEXNWBNLAFGTJSTBOFJKEZKDSBMCTXJIWRBUPOANQMMKNIJAOAKXXSQCGSVEVXQKHYLZOXTMQWVDEPXYJKIERSNWALOYAVGEPJVPQKALMPYSIUYPGBHYLECDWDHTZDFIXMRIRGJGNBPHHZNZZHYVYSFVFKVOPWUUZQFHMIWDOJYCFLCNWLVONCMVKRABXPZNGRQHDGOUQFRMTF");
    msg.lat = 0.500887767964;
    msg.lon = 0.359297165651;
    msg.z = 0.607770899936;
    msg.z_units = 2U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.389043016672);
    msg.setSource(25956U);
    msg.setSourceEntity(219U);
    msg.setDestination(61368U);
    msg.setDestinationEntity(195U);
    msg.name.assign("HJFCUWNEBVVMGGMPTMGDLIAVXLKCTJRFIMJIFICBCBJGNVIAPSWNBICUCDX");
    msg.lat = 0.25925762872;
    msg.lon = 0.797261175089;
    msg.z = 0.724120520425;
    msg.z_units = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.550638906914);
    msg.setSource(12661U);
    msg.setSourceEntity(109U);
    msg.setDestination(1614U);
    msg.setDestinationEntity(218U);
    msg.name.assign("RUEEPIRSBWSSZBBZLBEBKORTQFUPTYPTPJWXXDDDGQAIAHQXTFL");
    msg.lat = 0.70987892718;
    msg.lon = 0.137846241555;
    msg.z = 0.76246665743;
    msg.z_units = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.0643848323524);
    msg.setSource(40536U);
    msg.setSourceEntity(71U);
    msg.setDestination(19449U);
    msg.setDestinationEntity(71U);
    msg.op = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.15499977629);
    msg.setSource(57795U);
    msg.setSourceEntity(93U);
    msg.setDestination(9939U);
    msg.setDestinationEntity(169U);
    msg.op = 79U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("EUAFDZTTCLJQXFZNSMFSTZMJMVCROZXDRDBZGQBSWHWIRPCVEODSPGIFSITBOYURMJQLSEVGGBDCNPGVXUHERWBOKNJEOYLWWOPIRWYADKVWDUTQERYPWSTRNIKZVJOMYJPZKVKIXGIGGZVCMZKGBTEKESFJPFOBAHLLAUIFULWXPKPCF");
    tmp_msg_0.lat = 0.697495618589;
    tmp_msg_0.lon = 0.295667287956;
    tmp_msg_0.z = 0.913294688964;
    tmp_msg_0.z_units = 98U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.506604662031);
    msg.setSource(30094U);
    msg.setSourceEntity(148U);
    msg.setDestination(45819U);
    msg.setDestinationEntity(251U);
    msg.op = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.869577633597);
    msg.setSource(17062U);
    msg.setSourceEntity(216U);
    msg.setDestination(40785U);
    msg.setDestinationEntity(105U);
    msg.value = 0.943710423747;
    msg.type = 192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.213034712539);
    msg.setSource(17956U);
    msg.setSourceEntity(91U);
    msg.setDestination(34316U);
    msg.setDestinationEntity(126U);
    msg.value = 0.312385783134;
    msg.type = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.405916005705);
    msg.setSource(28815U);
    msg.setSourceEntity(36U);
    msg.setDestination(33249U);
    msg.setDestinationEntity(233U);
    msg.value = 0.383308223061;
    msg.type = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.318385932849);
    msg.setSource(57579U);
    msg.setSourceEntity(36U);
    msg.setDestination(36243U);
    msg.setDestinationEntity(111U);
    msg.value = 0.307183998723;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.546792644793);
    msg.setSource(42695U);
    msg.setSourceEntity(220U);
    msg.setDestination(4411U);
    msg.setDestinationEntity(155U);
    msg.value = 0.800317459195;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.196712163485);
    msg.setSource(59434U);
    msg.setSourceEntity(11U);
    msg.setDestination(17798U);
    msg.setDestinationEntity(254U);
    msg.value = 0.688336063667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.470676700992);
    msg.setSource(64732U);
    msg.setSourceEntity(84U);
    msg.setDestination(1697U);
    msg.setDestinationEntity(197U);
    msg.timestamp_last_service = 0.661825878442;
    msg.time_next_service = 0.335034284116;
    msg.time_motor_next_service = 0.8235965715;
    msg.time_idle_ground = 0.80019937761;
    msg.time_idle_air = 0.518304792048;
    msg.time_idle_water = 0.144980165432;
    msg.time_idle_underwater = 0.533976228356;
    msg.time_idle_unknown = 0.348672420235;
    msg.time_motor_ground = 0.47045282615;
    msg.time_motor_air = 0.128765896282;
    msg.time_motor_water = 0.613601228138;
    msg.time_motor_underwater = 0.810757394978;
    msg.time_motor_unknown = 0.568338135299;
    msg.rpm_min = 12781;
    msg.rpm_max = -10187;
    msg.depth_max = 0.46737539808;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.00305962471423);
    msg.setSource(58067U);
    msg.setSourceEntity(28U);
    msg.setDestination(10223U);
    msg.setDestinationEntity(12U);
    msg.timestamp_last_service = 0.824711665962;
    msg.time_next_service = 0.0274381046853;
    msg.time_motor_next_service = 0.953690997043;
    msg.time_idle_ground = 0.0722711166371;
    msg.time_idle_air = 0.14669394994;
    msg.time_idle_water = 0.268521105944;
    msg.time_idle_underwater = 0.24166885659;
    msg.time_idle_unknown = 0.412270744094;
    msg.time_motor_ground = 0.284520201533;
    msg.time_motor_air = 0.684474494048;
    msg.time_motor_water = 0.0065158550948;
    msg.time_motor_underwater = 0.0449183187849;
    msg.time_motor_unknown = 0.00747622565458;
    msg.rpm_min = -24854;
    msg.rpm_max = -526;
    msg.depth_max = 0.211169849322;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.670661684076);
    msg.setSource(14506U);
    msg.setSourceEntity(249U);
    msg.setDestination(38091U);
    msg.setDestinationEntity(49U);
    msg.timestamp_last_service = 0.663222866594;
    msg.time_next_service = 0.636031678951;
    msg.time_motor_next_service = 0.504337055773;
    msg.time_idle_ground = 0.3298077352;
    msg.time_idle_air = 0.0747758624031;
    msg.time_idle_water = 0.512556007127;
    msg.time_idle_underwater = 0.0788650140916;
    msg.time_idle_unknown = 0.581134214467;
    msg.time_motor_ground = 0.315843999304;
    msg.time_motor_air = 0.0635410857686;
    msg.time_motor_water = 0.445015323697;
    msg.time_motor_underwater = 0.214223405267;
    msg.time_motor_unknown = 0.823175252142;
    msg.rpm_min = 26707;
    msg.rpm_max = -5073;
    msg.depth_max = 0.358349580672;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.734027774364);
    msg.setSource(42089U);
    msg.setSourceEntity(103U);
    msg.setDestination(15246U);
    msg.setDestinationEntity(5U);
    msg.severity = 127U;
    msg.text.assign("CQEDGTWFVXTWGYABAPZQPOKNVHYMEAUGAVFCWNYXLJZSJHNGSVROSCAIQELGGUUKAWWLNXSNAQMPJESPQKVCQUBTWQIAKOFBWKPPHREDCYDLXLDBIZGSORRFHPTHRIHTYOFLKJSNZOXYPXVKINHILCNRXUUITYWSEMPJMZFBLIGMSAEZM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.776530829741);
    msg.setSource(53708U);
    msg.setSourceEntity(155U);
    msg.setDestination(18797U);
    msg.setDestinationEntity(205U);
    msg.severity = 222U;
    msg.text.assign("NEKGPVGHOPBJLNXGRIZSIUXLWFUCRFGTS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.82766149803);
    msg.setSource(12063U);
    msg.setSourceEntity(61U);
    msg.setDestination(49367U);
    msg.setDestinationEntity(164U);
    msg.severity = 53U;
    msg.text.assign("YQTOIVAMNKCVKFROPDLYWHGGXASWTYJEOTINHCJSRDUFHCMLIIDKSDTOWLDKHFJEVJEXFCZIPTCVXGWGUZVQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.966085577087);
    msg.setSource(52365U);
    msg.setSourceEntity(244U);
    msg.setDestination(27995U);
    msg.setDestinationEntity(202U);
    msg.channel = 50;
    msg.value = 206111655;
    msg.gain = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.568732462184);
    msg.setSource(41467U);
    msg.setSourceEntity(144U);
    msg.setDestination(31421U);
    msg.setDestinationEntity(143U);
    msg.channel = -87;
    msg.value = 191171693;
    msg.gain = 168U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.0410976941976);
    msg.setSource(22201U);
    msg.setSourceEntity(186U);
    msg.setDestination(22191U);
    msg.setDestinationEntity(110U);
    msg.channel = 114;
    msg.value = -1553610097;
    msg.gain = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.0343870307651);
    msg.setSource(43182U);
    msg.setSourceEntity(223U);
    msg.setDestination(51145U);
    msg.setDestinationEntity(74U);
    msg.ch01 = 0.473142987988;
    msg.ch02 = 0.888950431579;
    msg.ch03 = 0.472962856758;
    msg.ch04 = 0.43210590047;
    msg.ch05 = 0.194915811769;
    msg.ch06 = 0.445163606576;
    msg.ch07 = 0.202764286563;
    msg.ch08 = 0.233375281679;
    msg.ch09 = 0.667898053776;
    msg.ch10 = 0.680469568042;
    msg.ch11 = 0.748748019828;
    msg.ch12 = 0.0967771138674;
    msg.ch13 = 0.349114231395;
    msg.ch14 = 0.078140051493;
    msg.ch15 = 0.644888208462;
    msg.ch16 = 0.120466399301;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.380520519136);
    msg.setSource(27610U);
    msg.setSourceEntity(209U);
    msg.setDestination(41437U);
    msg.setDestinationEntity(82U);
    msg.ch01 = 0.160919951798;
    msg.ch02 = 0.527808028702;
    msg.ch03 = 0.589618615962;
    msg.ch04 = 0.378368771816;
    msg.ch05 = 0.299966454054;
    msg.ch06 = 0.6093345042;
    msg.ch07 = 0.308532731582;
    msg.ch08 = 0.877001864826;
    msg.ch09 = 0.386023234224;
    msg.ch10 = 0.0393110571661;
    msg.ch11 = 0.678226385666;
    msg.ch12 = 0.949431834519;
    msg.ch13 = 0.671566319902;
    msg.ch14 = 0.688952413482;
    msg.ch15 = 0.79099384614;
    msg.ch16 = 0.979178957307;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.468694935946);
    msg.setSource(55708U);
    msg.setSourceEntity(200U);
    msg.setDestination(55478U);
    msg.setDestinationEntity(222U);
    msg.ch01 = 0.224195083003;
    msg.ch02 = 0.936739862821;
    msg.ch03 = 0.591162798066;
    msg.ch04 = 0.782981986215;
    msg.ch05 = 0.314611062718;
    msg.ch06 = 0.199061964522;
    msg.ch07 = 0.00216815095732;
    msg.ch08 = 0.0744377466687;
    msg.ch09 = 0.454905321498;
    msg.ch10 = 0.267332244165;
    msg.ch11 = 0.450306258236;
    msg.ch12 = 0.59078839287;
    msg.ch13 = 0.504542181538;
    msg.ch14 = 0.068853799279;
    msg.ch15 = 0.0576307372242;
    msg.ch16 = 0.120884455384;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TargetState msg;
    msg.setTimeStamp(0.200906872466);
    msg.setSource(26242U);
    msg.setSourceEntity(190U);
    msg.setDestination(42396U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.625363064197;
    msg.lon = 0.0923986570312;
    msg.x = 0.559122394585;
    msg.y = 0.446281811488;
    msg.z = 0.363615963265;
    msg.vx = 0.0651551489097;
    msg.vy = 0.640629025037;
    msg.vz = 0.700185702503;
    msg.depth = 131U;
    msg.speed = 0.289426176849;
    msg.psi = 0.853145773369;
    msg.omega = 0.383183220585;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TargetState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TargetState msg;
    msg.setTimeStamp(0.106144861675);
    msg.setSource(51022U);
    msg.setSourceEntity(250U);
    msg.setDestination(64951U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.109378986394;
    msg.lon = 0.009301842926;
    msg.x = 0.777584110638;
    msg.y = 0.132002757737;
    msg.z = 0.875657418763;
    msg.vx = 0.689803960996;
    msg.vy = 0.0678735602882;
    msg.vz = 0.506021823773;
    msg.depth = 56U;
    msg.speed = 0.173809014786;
    msg.psi = 0.90818159159;
    msg.omega = 0.968947291726;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TargetState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TargetState msg;
    msg.setTimeStamp(0.90118241122);
    msg.setSource(56280U);
    msg.setSourceEntity(219U);
    msg.setDestination(29906U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.461136276273;
    msg.lon = 0.260427989919;
    msg.x = 0.0736253104198;
    msg.y = 0.649198074452;
    msg.z = 0.290766285992;
    msg.vx = 0.186002429552;
    msg.vy = 0.0821429999096;
    msg.vz = 0.97127089818;
    msg.depth = 125U;
    msg.speed = 0.267192616667;
    msg.psi = 0.629142564299;
    msg.omega = 0.00593270684343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TargetState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MPFVariables msg;
    msg.setTimeStamp(0.429831528845);
    msg.setSource(42611U);
    msg.setSourceEntity(22U);
    msg.setDestination(44658U);
    msg.setDestinationEntity(13U);
    msg.override = 155U;
    msg.ctrl_cmd_v = 0.189138858663;
    msg.ctrl_cmd_omega = 0.0934483022644;
    msg.sat_ctrl_cmd_v = 0.0301779328317;
    msg.sat_ctrl_cmd_omega = 0.409853094908;
    msg.robust_v = 0.572132924142;
    msg.robust_omega = 0.273052609576;
    msg.gamma = 0.855249365369;
    msg.gamma_dot = 0.943182839377;
    msg.gamma_ref = 0.570454870003;
    msg.g_err = 0.94943572994;
    msg.v_consensus = 0.268975789894;
    msg.v_rot = 0.222719174836;
    msg.target_x = 0.977969521449;
    msg.target_y = 0.403653588191;
    msg.target_z = 0.66093525634;
    msg.target_psi = 0.714315387967;
    msg.target_vx = 0.80533596144;
    msg.target_vy = 0.229739900466;
    msg.target_vz = 0.0387429491704;
    msg.target_omega = 0.692575736964;
    msg.x = 0.498352915166;
    msg.y = 0.611063513769;
    msg.z = 0.450106585401;
    msg.psi = 0.707277951112;
    msg.vx = 0.517261916842;
    msg.vy = 0.783164019637;
    msg.vz = 0.472855349642;
    msg.pd_x = 0.358162057974;
    msg.pd_y = 0.891226725076;
    msg.p_ref_x = 0.186723891832;
    msg.p_ref_y = 0.985251476109;
    msg.norm_mpf_err = 0.0528244479576;
    msg.mpf_err_x = 0.954053531381;
    msg.mpf_err_y = 0.241327443358;
    msg.mpf_err_z = 0.288359807379;
    msg.err_x = 0.437291601819;
    msg.err_y = 0.369458597443;
    msg.err_z = 0.458778228024;
    msg.pest_x = 0.358444858161;
    msg.pest_y = 0.98602529632;
    msg.psi_est = 0.827868606187;
    msg.perr_x = 0.786427835811;
    msg.perr_y = 0.879792886834;
    msg.psi_err = 0.101737369806;
    msg.dest_x = 0.0760259363419;
    msg.dest_y = 0.392000851576;
    msg.domega_est = 0.347825632995;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MPFVariables #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MPFVariables msg;
    msg.setTimeStamp(0.387408911231);
    msg.setSource(53874U);
    msg.setSourceEntity(253U);
    msg.setDestination(3105U);
    msg.setDestinationEntity(74U);
    msg.override = 5U;
    msg.ctrl_cmd_v = 0.343342715149;
    msg.ctrl_cmd_omega = 0.57185392888;
    msg.sat_ctrl_cmd_v = 0.638506794362;
    msg.sat_ctrl_cmd_omega = 0.505086650736;
    msg.robust_v = 0.597628799233;
    msg.robust_omega = 0.609512185318;
    msg.gamma = 0.683316097168;
    msg.gamma_dot = 0.906940756183;
    msg.gamma_ref = 0.0703752867198;
    msg.g_err = 0.561193129101;
    msg.v_consensus = 0.37581808955;
    msg.v_rot = 0.19384832086;
    msg.target_x = 0.792030745942;
    msg.target_y = 0.398764347737;
    msg.target_z = 0.985312503771;
    msg.target_psi = 0.776640364451;
    msg.target_vx = 0.679706655528;
    msg.target_vy = 0.278570794771;
    msg.target_vz = 0.894969684506;
    msg.target_omega = 0.291996678237;
    msg.x = 0.994505406949;
    msg.y = 0.475484757564;
    msg.z = 0.361094284283;
    msg.psi = 0.753656300648;
    msg.vx = 0.505780229368;
    msg.vy = 0.627903726486;
    msg.vz = 0.864408309449;
    msg.pd_x = 0.616427083284;
    msg.pd_y = 0.0234752681794;
    msg.p_ref_x = 0.706747916789;
    msg.p_ref_y = 0.979699232102;
    msg.norm_mpf_err = 0.899130017554;
    msg.mpf_err_x = 0.297720631979;
    msg.mpf_err_y = 0.8375502122;
    msg.mpf_err_z = 0.915500570028;
    msg.err_x = 0.134327487412;
    msg.err_y = 0.836211662191;
    msg.err_z = 0.529284143427;
    msg.pest_x = 0.131673925082;
    msg.pest_y = 0.760638726649;
    msg.psi_est = 0.839585856112;
    msg.perr_x = 0.13727723723;
    msg.perr_y = 0.829283959874;
    msg.psi_err = 0.377534241167;
    msg.dest_x = 0.465098725648;
    msg.dest_y = 0.130492983158;
    msg.domega_est = 0.840572374388;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MPFVariables #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MPFVariables msg;
    msg.setTimeStamp(0.255063797607);
    msg.setSource(16905U);
    msg.setSourceEntity(238U);
    msg.setDestination(63660U);
    msg.setDestinationEntity(254U);
    msg.override = 98U;
    msg.ctrl_cmd_v = 0.902631073811;
    msg.ctrl_cmd_omega = 0.837716654281;
    msg.sat_ctrl_cmd_v = 0.586814508626;
    msg.sat_ctrl_cmd_omega = 0.0615824296043;
    msg.robust_v = 0.725008292727;
    msg.robust_omega = 0.576403130315;
    msg.gamma = 0.54090396737;
    msg.gamma_dot = 0.0164300106766;
    msg.gamma_ref = 0.825466806935;
    msg.g_err = 0.386524312521;
    msg.v_consensus = 0.0447573328954;
    msg.v_rot = 0.0977605833571;
    msg.target_x = 0.684833618703;
    msg.target_y = 0.431335481725;
    msg.target_z = 0.676058315534;
    msg.target_psi = 0.0832752395549;
    msg.target_vx = 0.558758220663;
    msg.target_vy = 0.13428176841;
    msg.target_vz = 0.512819342034;
    msg.target_omega = 0.0077157633506;
    msg.x = 0.513432293836;
    msg.y = 0.607225408025;
    msg.z = 0.197499761595;
    msg.psi = 0.498664390414;
    msg.vx = 0.0467750584872;
    msg.vy = 0.63444452017;
    msg.vz = 0.264544546349;
    msg.pd_x = 0.745754193381;
    msg.pd_y = 0.574357894749;
    msg.p_ref_x = 0.587668818988;
    msg.p_ref_y = 0.368453723579;
    msg.norm_mpf_err = 0.604041662333;
    msg.mpf_err_x = 0.563150662749;
    msg.mpf_err_y = 0.654968601429;
    msg.mpf_err_z = 0.254420085063;
    msg.err_x = 0.651499556083;
    msg.err_y = 0.983942179497;
    msg.err_z = 0.854915236212;
    msg.pest_x = 0.399717345071;
    msg.pest_y = 0.503430694567;
    msg.psi_est = 0.59276193147;
    msg.perr_x = 0.627292971098;
    msg.perr_y = 0.452727803146;
    msg.psi_err = 0.956286656559;
    msg.dest_x = 0.972472277002;
    msg.dest_y = 0.615223660702;
    msg.domega_est = 0.172822066627;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MPFVariables #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoordState msg;
    msg.setTimeStamp(0.968338021513);
    msg.setSource(57617U);
    msg.setSourceEntity(220U);
    msg.setDestination(12703U);
    msg.setDestinationEntity(209U);
    msg.gamma = 0.733437185139;
    msg.systemid = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoordState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoordState msg;
    msg.setTimeStamp(0.442618257097);
    msg.setSource(3176U);
    msg.setSourceEntity(230U);
    msg.setDestination(41582U);
    msg.setDestinationEntity(165U);
    msg.gamma = 0.0788330265554;
    msg.systemid = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoordState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoordState msg;
    msg.setTimeStamp(0.381263424823);
    msg.setSource(64334U);
    msg.setSourceEntity(108U);
    msg.setDestination(7428U);
    msg.setDestinationEntity(111U);
    msg.gamma = 0.679030825149;
    msg.systemid = 170U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoordState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.110811733265);
    msg.setSource(38373U);
    msg.setSourceEntity(178U);
    msg.setDestination(3126U);
    msg.setDestinationEntity(207U);
    msg.value = 0.575480253613;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.279895090959);
    msg.setSource(32073U);
    msg.setSourceEntity(236U);
    msg.setDestination(53355U);
    msg.setDestinationEntity(112U);
    msg.value = 0.611873682336;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.523215205732);
    msg.setSource(17640U);
    msg.setSourceEntity(147U);
    msg.setDestination(18075U);
    msg.setDestinationEntity(11U);
    msg.value = 0.471780086817;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
