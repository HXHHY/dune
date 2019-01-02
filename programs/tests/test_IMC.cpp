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
// IMC XML MD5: 9799a7206dbfb1f79b5f5a55d65d960d                            *
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
    msg.setTimeStamp(0.519435623053);
    msg.setSource(43056U);
    msg.setSourceEntity(159U);
    msg.setDestination(52744U);
    msg.setDestinationEntity(114U);
    msg.state = 183U;
    msg.flags = 103U;
    msg.description.assign("XIUAKYEJRGTPMOJWTEITPST");

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
    msg.setTimeStamp(0.0269982709611);
    msg.setSource(40234U);
    msg.setSourceEntity(4U);
    msg.setDestination(34564U);
    msg.setDestinationEntity(22U);
    msg.state = 194U;
    msg.flags = 202U;
    msg.description.assign("YMRTNXJUFXPNYKHNRHMVNTZCIMVXZQLFHSBWYBECHDZOUSZOFEAAQYGDPAVLABBHHPRMXVMHHWWOFRJVXUAFLBZCODPYKRBRROIACDJXGLLTZNBTOEKW");

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
    msg.setTimeStamp(0.497776435403);
    msg.setSource(37371U);
    msg.setSourceEntity(162U);
    msg.setDestination(22583U);
    msg.setDestinationEntity(132U);
    msg.state = 133U;
    msg.flags = 178U;
    msg.description.assign("OGQPLYLLTSRRUVIHWQZPLNHVZUMUNODGDLKDEIZXBVKQKKAJFTKPYMHRGSIRJCEGAFCHYQPMQTCOROUITNAEBTXJUUIKQBYENBNPAYSNESRJSBEXZKJSEPMNTZYLOVYAMTG");

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
    msg.setTimeStamp(0.799169337017);
    msg.setSource(61013U);
    msg.setSourceEntity(201U);
    msg.setDestination(60864U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.455650542587);
    msg.setSource(22290U);
    msg.setSourceEntity(218U);
    msg.setDestination(15350U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.448082964527);
    msg.setSource(22108U);
    msg.setSourceEntity(177U);
    msg.setDestination(15148U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.921092657158);
    msg.setSource(5622U);
    msg.setSourceEntity(124U);
    msg.setDestination(23394U);
    msg.setDestinationEntity(136U);
    msg.id = 94U;
    msg.label.assign("DHUAZGNLQDTOIIMTCNAUPQXIWWUXTWUMZHHDWHSOADECBRWGTF");
    msg.component.assign("MVKOQJNVHSGJFAIEZXYPTQSBROUTHLEQBVTUORPKVCPDBISALTGUKTUWMFDWPGEMLGXLIFUFGCGMDVCOQHPIJHXEKSJEJZLSJIZFPCOUJACXEUPWJCMHZCCMVKIZIODHDEXYBBTKSCRSACQROXSNLHLMXNYNUDWXXWBYNRFZINAZVFKNGOGLRBKBDAEADSJQMYWATHPXHZMENTRWDWVZGYYYBBFYHIPWLFAZLONRSG");
    msg.act_time = 9840U;
    msg.deact_time = 45523U;

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
    msg.setTimeStamp(0.109721077887);
    msg.setSource(51819U);
    msg.setSourceEntity(105U);
    msg.setDestination(44742U);
    msg.setDestinationEntity(108U);
    msg.id = 45U;
    msg.label.assign("IIVYARWMACBAVFGQFGINFBMQCFOELVCTQWPVRUEUFEBMJGXWYCPBNPSGRPZWKRLEUOBJGJZIANQQBVKQATTEZSKJTFLJREBKDLASNFXUJCPYBJHHONUPVKEVWDWLSWRDZOXILYXVO");
    msg.component.assign("ZHPATIPQKXAPOTPPLBUBWRTIZANUNRDNQSFTMUKBEYNMMETWDSQDNOKWIRBNAZGUIJLCHXSNIQBDCFXISRHZWZZBRWKCTVOYXJHVOLXCDRBSFYIYTLLHMYTVUKTDJEAUKXFMCDAQPYKZGKSEXWARMNNZRGJCDGJTJHQCOSAOELGFVEVWCWMGFMAGXLFURFI");
    msg.act_time = 51364U;
    msg.deact_time = 7128U;

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
    msg.setTimeStamp(0.465090168234);
    msg.setSource(61451U);
    msg.setSourceEntity(51U);
    msg.setDestination(5539U);
    msg.setDestinationEntity(122U);
    msg.id = 171U;
    msg.label.assign("ILKWRULCHRDKGFHCOVETCDQILADZECPRMFFCHZAVVUVMLDXKCNAHMRPLJGBXWETLECEUUUEASJLHPS");
    msg.component.assign("VQWVQBAGPVORWENCUGXSEKNUXCNLBFAJTKUPXMAJYYMOPVCLDDGODYXMLSTFZOLEYPRZMGCBTLKEOXWIQNUREJFWBWEWISLPJPAWOQTGCTKPGIWNNPHQIGHHKELMTHLLKATSXRZUMOWCQJEFRFVCSLNGCJFZHXRZAJUUHVIUDPTDOKQTZ");
    msg.act_time = 7576U;
    msg.deact_time = 35856U;

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
    msg.setTimeStamp(0.226871231626);
    msg.setSource(3268U);
    msg.setSourceEntity(103U);
    msg.setDestination(30518U);
    msg.setDestinationEntity(181U);
    msg.id = 14U;

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
    msg.setTimeStamp(0.688070765331);
    msg.setSource(4541U);
    msg.setSourceEntity(11U);
    msg.setDestination(34372U);
    msg.setDestinationEntity(90U);
    msg.id = 0U;

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
    msg.setTimeStamp(0.206570418711);
    msg.setSource(40589U);
    msg.setSourceEntity(175U);
    msg.setDestination(30726U);
    msg.setDestinationEntity(82U);
    msg.id = 253U;

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
    msg.setTimeStamp(0.523345981556);
    msg.setSource(40035U);
    msg.setSourceEntity(183U);
    msg.setDestination(38495U);
    msg.setDestinationEntity(218U);
    msg.op = 224U;
    msg.list.assign("EPWNIZPYBBSONRSEAGXJDDBISPHPTFAHKHELWHFRQVFOINODCUHTCLEYJBGHQTODKRNTDNMEHCGVDGLKPAWAYIXVYQFCYXZRBXPJVCROVGUBTVDPJBVKYTIGZQXZOMNGSFYMYVHIKCUUBGTWVQSTNELULUOUDQJEROFHPGKZIYMKZSWOLOQNRWMSRQSLBCJRJNYSXWXMEEUNCFEIKJFMKTCMQCAWXLFBAATSZJPWAIAXRAUMHIVKWLXD");

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
    msg.setTimeStamp(0.0114317800082);
    msg.setSource(32220U);
    msg.setSourceEntity(8U);
    msg.setDestination(38493U);
    msg.setDestinationEntity(178U);
    msg.op = 66U;
    msg.list.assign("FILDEZCOQXBZOVLDAWYCUKAHUPYFWJMFOJSZLSAMVFGOXIENBECRZXYPPIGJOTJPSTGLXPWOLMRVUWITEDYGWUAOMWVCQQXBFTSKLKJIBJRFRHDKCLPTJSYBXZSGKZBIMNKEBDMTRUJOHYDTWNQLQZPBVNFIVOGAWRYFPQANHAKRHYONQLUAAFVK");

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
    msg.setTimeStamp(0.193788885115);
    msg.setSource(40896U);
    msg.setSourceEntity(90U);
    msg.setDestination(16954U);
    msg.setDestinationEntity(172U);
    msg.op = 28U;
    msg.list.assign("UTBDRFYVXJGFSGIAGNOJNAZLXAWQGPNEJBKFGMQAKBEXOHDUDAZXQMIJNERIAFRAEQWGSTOWWKHOTZXIKJFECGBDQRWSCWHKJVFBUOMPSVMSYLHEJUNKSTQVLFUNAVLBCXJMWDTNIMWLDYEAFCPVZUZXLLQOQBRPZEDOLBZUBMPPQZCPDUIXSCCWNDH");

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
    msg.setTimeStamp(0.823757901965);
    msg.setSource(38055U);
    msg.setSourceEntity(170U);
    msg.setDestination(14192U);
    msg.setDestinationEntity(24U);
    msg.value = 127U;

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
    msg.setTimeStamp(0.940590765219);
    msg.setSource(45513U);
    msg.setSourceEntity(163U);
    msg.setDestination(677U);
    msg.setDestinationEntity(28U);
    msg.value = 168U;

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
    msg.setTimeStamp(0.346262941197);
    msg.setSource(24843U);
    msg.setSourceEntity(195U);
    msg.setDestination(47263U);
    msg.setDestinationEntity(140U);
    msg.value = 154U;

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
    msg.setTimeStamp(0.731652834186);
    msg.setSource(17748U);
    msg.setSourceEntity(142U);
    msg.setDestination(5416U);
    msg.setDestinationEntity(158U);
    msg.consumer.assign("RETOZDAJBSETWJXSVTXRCZNIPDGYOUSBGLUVQUXMFAXWLJSBWKJANIJYHGHQMLXFPBXWKKHMFQAIAPVIGEUICYKCOVQQZOTPODNHGJMXXQSZCBS");
    msg.message_id = 15784U;

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
    msg.setTimeStamp(0.586788843165);
    msg.setSource(4931U);
    msg.setSourceEntity(24U);
    msg.setDestination(17078U);
    msg.setDestinationEntity(51U);
    msg.consumer.assign("ZNYXJPYSJSOLCQKHFFJLBEHNNTHXERLVQQIQQIPTMDJYDPDJZOWTTRISEVRDNLHRUTKKNYQUKNM");
    msg.message_id = 28348U;

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
    msg.setTimeStamp(0.706366383157);
    msg.setSource(21850U);
    msg.setSourceEntity(144U);
    msg.setDestination(27995U);
    msg.setDestinationEntity(59U);
    msg.consumer.assign("AXGVXWYUEFQCMVLFHVAZPYNBIGFHBZZZWDKVFYIWEKVYUOUPDXORFILKWPSHILNBGGOYRSEERKDQUBUJSHDJDEHPSQIDHTIKYNWIFKATCQJXLUZBFRRWPMEJJRDIQNGLQPTDRXNS");
    msg.message_id = 56249U;

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
    msg.setTimeStamp(0.917547031897);
    msg.setSource(37686U);
    msg.setSourceEntity(210U);
    msg.setDestination(33848U);
    msg.setDestinationEntity(252U);
    msg.type = 71U;

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
    msg.setTimeStamp(0.356703690388);
    msg.setSource(37052U);
    msg.setSourceEntity(1U);
    msg.setDestination(50931U);
    msg.setDestinationEntity(113U);
    msg.type = 142U;

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
    msg.setTimeStamp(0.62707914306);
    msg.setSource(42767U);
    msg.setSourceEntity(51U);
    msg.setDestination(4599U);
    msg.setDestinationEntity(42U);
    msg.type = 39U;

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
    msg.setTimeStamp(0.683425760735);
    msg.setSource(63787U);
    msg.setSourceEntity(231U);
    msg.setDestination(56910U);
    msg.setDestinationEntity(115U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.411537537667);
    msg.setSource(27532U);
    msg.setSourceEntity(38U);
    msg.setDestination(49084U);
    msg.setDestinationEntity(62U);
    msg.op = 48U;

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
    msg.setTimeStamp(0.00451918781332);
    msg.setSource(22144U);
    msg.setSourceEntity(135U);
    msg.setDestination(52105U);
    msg.setDestinationEntity(187U);
    msg.op = 144U;

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
    msg.setTimeStamp(0.0654688040247);
    msg.setSource(61383U);
    msg.setSourceEntity(40U);
    msg.setDestination(55242U);
    msg.setDestinationEntity(178U);
    msg.total_steps = 208U;
    msg.step_number = 147U;
    msg.step.assign("OUKCLBAWHSAESLDTECJKIZRYWDRNJNCUPQMFSAWFMHDQDLYTZLVHCZXYGSFWPYQZBBMASAVOYONLTEMKGGQZPCZRXXLTLBUBOBWZOQKWIGFYHIDDSVXDVSGQTUZENFTTTNJMYBHVIT");
    msg.flags = 242U;

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
    msg.setTimeStamp(0.569668114577);
    msg.setSource(47570U);
    msg.setSourceEntity(204U);
    msg.setDestination(56203U);
    msg.setDestinationEntity(164U);
    msg.total_steps = 0U;
    msg.step_number = 142U;
    msg.step.assign("ENFRBFNXQOXWQSESCHPMQNEDUCFSZCCIZNLVVACJRZKYLZMOIPLFTNIPPBQHABDIZRDUK");
    msg.flags = 185U;

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
    msg.setTimeStamp(0.943020413281);
    msg.setSource(343U);
    msg.setSourceEntity(13U);
    msg.setDestination(65012U);
    msg.setDestinationEntity(193U);
    msg.total_steps = 197U;
    msg.step_number = 219U;
    msg.step.assign("HXFVEPZBBJLWRMUYTIJOMFUWOSZHANMYEUSLMGLCNHZRIXKHXFXPDBEWGLUJTCGJFTCNFMKRDWDTCWTGUYVSDBBURRWPJXXSQYSSREDONZTMENNUJFSJPUGBEPMSWLPZZXIZCGNAOIOPEJGKTZIRKSDPDTABBHGFHYKJYIAMEWQGLCYBRVYHVKVAAIMUKEQTOKNDCCQWQROAOVVHSKLZIIXJFTDAEHQXVPLH");
    msg.flags = 129U;

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
    msg.setTimeStamp(0.394028810576);
    msg.setSource(61867U);
    msg.setSourceEntity(147U);
    msg.setDestination(25252U);
    msg.setDestinationEntity(244U);
    msg.state = 6U;
    msg.error.assign("IAUREKTUQZRLFOYPBBFLFXONVGNOPNNQFYJFIKUUHLFZCUQGTKWGPWEDDXYMKWZGOBJHWVKTYHIOYGDEWOCUQHQMCLXMWYCDEAEPWSVGLB");

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
    msg.setTimeStamp(0.812464953267);
    msg.setSource(30731U);
    msg.setSourceEntity(192U);
    msg.setDestination(37565U);
    msg.setDestinationEntity(11U);
    msg.state = 64U;
    msg.error.assign("AOPLAKZBHKSDFWELJTZDZNBFJJXFQGJTKIXQPZLBXZFCKCJRRWGOCMHVGOOSIFCAGIUWRLGKTGMLETEGEDQNXSDRTOQLEITCXKNHONZMVMYHURALVSBDUHYCACUBGBRPAURWFTMMTLNEFUDCOIVQANBPHIIOMWKRDQCUVOSYCXMZJEZBKOXIYVPPBJEGWVAP");

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
    msg.setTimeStamp(0.19666524803);
    msg.setSource(10665U);
    msg.setSourceEntity(227U);
    msg.setDestination(25023U);
    msg.setDestinationEntity(61U);
    msg.state = 238U;
    msg.error.assign("TVNMQXEDQKYEEKSOHMYNZNZHZMKQCAPLCHASSIETCYXIQOZPWWHCXIQKRKAVZYLAXFGMEYMGHADVFRKFUVWGGGPIPRDWDBERTIYCFGJGMSZ");

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
    msg.setTimeStamp(0.560889366035);
    msg.setSource(51811U);
    msg.setSourceEntity(240U);
    msg.setDestination(20686U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.252395531771);
    msg.setSource(19438U);
    msg.setSourceEntity(192U);
    msg.setDestination(49378U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.923381998985);
    msg.setSource(2160U);
    msg.setSourceEntity(4U);
    msg.setDestination(5183U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.0229384255036);
    msg.setSource(51516U);
    msg.setSourceEntity(46U);
    msg.setDestination(19480U);
    msg.setDestinationEntity(210U);
    msg.op = 99U;
    msg.speed_min = 0.959633758475;
    msg.speed_max = 0.52561968836;
    msg.long_accel = 0.0184232525552;
    msg.alt_max_msl = 0.31285314106;
    msg.dive_fraction_max = 0.841626741507;
    msg.climb_fraction_max = 0.92246480851;
    msg.bank_max = 0.248189526097;
    msg.p_max = 0.381937215689;
    msg.pitch_min = 0.237672907509;
    msg.pitch_max = 0.444390124512;
    msg.q_max = 0.405885996063;
    msg.g_min = 0.749537363387;
    msg.g_max = 0.186158875915;
    msg.g_lat_max = 0.866598538363;
    msg.rpm_min = 0.997965766029;
    msg.rpm_max = 0.427995985151;
    msg.rpm_rate_max = 0.330453057504;

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
    msg.setTimeStamp(0.419106505144);
    msg.setSource(33424U);
    msg.setSourceEntity(171U);
    msg.setDestination(8266U);
    msg.setDestinationEntity(98U);
    msg.op = 33U;
    msg.speed_min = 0.440736974545;
    msg.speed_max = 0.93043878582;
    msg.long_accel = 0.926959122077;
    msg.alt_max_msl = 0.395547929935;
    msg.dive_fraction_max = 0.279678203489;
    msg.climb_fraction_max = 0.549117398109;
    msg.bank_max = 0.712689294129;
    msg.p_max = 0.0189857040119;
    msg.pitch_min = 0.639997738976;
    msg.pitch_max = 0.347908742852;
    msg.q_max = 0.753850696697;
    msg.g_min = 0.781289318822;
    msg.g_max = 0.638425805346;
    msg.g_lat_max = 0.500957942366;
    msg.rpm_min = 0.0344565149956;
    msg.rpm_max = 0.269215257201;
    msg.rpm_rate_max = 0.120216722221;

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
    msg.setTimeStamp(0.55317921022);
    msg.setSource(15983U);
    msg.setSourceEntity(62U);
    msg.setDestination(61446U);
    msg.setDestinationEntity(9U);
    msg.op = 22U;
    msg.speed_min = 0.252261648978;
    msg.speed_max = 0.848301464524;
    msg.long_accel = 0.21819267047;
    msg.alt_max_msl = 0.180486786836;
    msg.dive_fraction_max = 0.867359490243;
    msg.climb_fraction_max = 0.990127495313;
    msg.bank_max = 0.408245862836;
    msg.p_max = 0.60714218863;
    msg.pitch_min = 0.614005945143;
    msg.pitch_max = 0.0664183474696;
    msg.q_max = 0.520038503866;
    msg.g_min = 0.746886593033;
    msg.g_max = 0.779492768942;
    msg.g_lat_max = 0.953379989129;
    msg.rpm_min = 0.171219640452;
    msg.rpm_max = 0.407767724939;
    msg.rpm_rate_max = 0.348138851382;

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
    msg.setTimeStamp(0.029015386532);
    msg.setSource(60562U);
    msg.setSourceEntity(221U);
    msg.setDestination(1492U);
    msg.setDestinationEntity(103U);
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.820320565907;
    tmp_tmp_msg_0_0.lon = 0.405267511405;
    tmp_tmp_msg_0_0.height = 0.435239979305;
    tmp_tmp_msg_0_0.x = 0.810011427184;
    tmp_tmp_msg_0_0.y = 0.142115976205;
    tmp_tmp_msg_0_0.z = 0.260904343779;
    tmp_tmp_msg_0_0.phi = 0.316948434828;
    tmp_tmp_msg_0_0.theta = 0.832784722298;
    tmp_tmp_msg_0_0.psi = 0.697894150997;
    tmp_tmp_msg_0_0.u = 0.434269274024;
    tmp_tmp_msg_0_0.v = 0.534310884135;
    tmp_tmp_msg_0_0.w = 0.0858387951342;
    tmp_tmp_msg_0_0.vx = 0.7216584351;
    tmp_tmp_msg_0_0.vy = 0.336784681069;
    tmp_tmp_msg_0_0.vz = 0.238201279357;
    tmp_tmp_msg_0_0.p = 0.116227758923;
    tmp_tmp_msg_0_0.q = 0.377340225418;
    tmp_tmp_msg_0_0.r = 0.756922982144;
    tmp_tmp_msg_0_0.depth = 0.29120690024;
    tmp_tmp_msg_0_0.alt = 0.217377558947;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 105U;
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
    msg.setTimeStamp(0.342722655256);
    msg.setSource(28262U);
    msg.setSourceEntity(176U);
    msg.setDestination(35687U);
    msg.setDestinationEntity(62U);
    IMC::Chlorophyll tmp_msg_0;
    tmp_msg_0.value = 0.371672181851;
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
    msg.setTimeStamp(0.149975674135);
    msg.setSource(46126U);
    msg.setSourceEntity(152U);
    msg.setDestination(44992U);
    msg.setDestinationEntity(44U);
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 94U;
    tmp_msg_0.numsamples = 139U;
    tmp_msg_0.lat = 0.660245365229;
    tmp_msg_0.lon = 0.381045140196;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.486110608024);
    msg.setSource(54035U);
    msg.setSourceEntity(197U);
    msg.setDestination(27650U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.37974457426;
    msg.lon = 0.97873701918;
    msg.height = 0.875434714889;
    msg.x = 0.386683043261;
    msg.y = 0.920863098539;
    msg.z = 0.679846064054;
    msg.phi = 0.317781291334;
    msg.theta = 0.872471158247;
    msg.psi = 0.0778029159679;
    msg.u = 0.751070385715;
    msg.v = 0.900801469799;
    msg.w = 0.388889071145;
    msg.p = 0.235083632783;
    msg.q = 0.468698938903;
    msg.r = 0.154962474026;
    msg.svx = 0.060647512784;
    msg.svy = 0.406398309004;
    msg.svz = 0.246361855024;

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
    msg.setTimeStamp(0.827424548093);
    msg.setSource(5464U);
    msg.setSourceEntity(48U);
    msg.setDestination(32637U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.804633570321;
    msg.lon = 0.939418669311;
    msg.height = 0.0906591716279;
    msg.x = 0.865429673519;
    msg.y = 0.610159778289;
    msg.z = 0.877022535158;
    msg.phi = 0.213607914898;
    msg.theta = 0.658860720062;
    msg.psi = 0.591932603428;
    msg.u = 0.176984126938;
    msg.v = 0.100261061919;
    msg.w = 0.935488550916;
    msg.p = 0.00777197045301;
    msg.q = 0.127828487199;
    msg.r = 0.474716243852;
    msg.svx = 0.462560846279;
    msg.svy = 0.336633055373;
    msg.svz = 0.0312262492738;

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
    msg.setTimeStamp(0.18362749998);
    msg.setSource(17125U);
    msg.setSourceEntity(65U);
    msg.setDestination(40976U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.900741267968;
    msg.lon = 0.335203243517;
    msg.height = 0.319865675889;
    msg.x = 0.984133120091;
    msg.y = 0.656051971037;
    msg.z = 0.206422905515;
    msg.phi = 0.550748420938;
    msg.theta = 0.665367227532;
    msg.psi = 0.43726026043;
    msg.u = 0.59138617555;
    msg.v = 0.143572378461;
    msg.w = 0.551992346544;
    msg.p = 0.709762135458;
    msg.q = 0.362696923295;
    msg.r = 0.864385575467;
    msg.svx = 0.418570297843;
    msg.svy = 0.291307737976;
    msg.svz = 0.941849851921;

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
    msg.setTimeStamp(0.823083452601);
    msg.setSource(3712U);
    msg.setSourceEntity(29U);
    msg.setDestination(32283U);
    msg.setDestinationEntity(127U);
    msg.op = 121U;
    msg.entities.assign("HUSHTJHNXGOMEKKBWFVRSIWXGDBSUCXTBMJIJFHTLZAICQSDTA");

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
    msg.setTimeStamp(0.501198312466);
    msg.setSource(31007U);
    msg.setSourceEntity(188U);
    msg.setDestination(3843U);
    msg.setDestinationEntity(200U);
    msg.op = 75U;
    msg.entities.assign("FFPYAIQRHKGBOXGIGKTALVIWNEBTDHUYCVEENTXIRGAOFDRBEHTESQPJAEKPZLRKBDVWZBIVDJIZXNQVXUDSTTHTCLPLJVKPMOWZFUREKPAHJSTYBLCZYUOCDUCXPWXMLPABIRCHQVLMSSTAHKZZMEZYQYWFUINFBOYGYMWFBILSAPJFHUJRHZHDVXUVQCFJRWINPNQYEUVEASXGGQSQQJDZWOMNWKDOJDXRRLOFUNOCWKJNGASXMKOCLMB");

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
    msg.setTimeStamp(0.88716137969);
    msg.setSource(3524U);
    msg.setSourceEntity(84U);
    msg.setDestination(61659U);
    msg.setDestinationEntity(45U);
    msg.op = 83U;
    msg.entities.assign("YEHOGUKJTDOMMBCIFRMZTLEYJSJUOITJPCWRGFTORD");

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
    msg.setTimeStamp(0.0417332377928);
    msg.setSource(14739U);
    msg.setSourceEntity(107U);
    msg.setDestination(39121U);
    msg.setDestinationEntity(68U);
    msg.type = 29U;
    msg.speed = 60995U;
    const char tmp_msg_0[] = {-118, 123, -22, 60, -59, 121, -112, -98, 86, 115, -89, 41, 19, -38, 20, -67, -25, 10, 93, -1, -128, -73, 74, -100, -24, -87, -123, 1, 78, 68, 55, -63, -94, 89};
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
    msg.setTimeStamp(0.799087696622);
    msg.setSource(50473U);
    msg.setSourceEntity(126U);
    msg.setDestination(40953U);
    msg.setDestinationEntity(225U);
    msg.type = 29U;
    msg.speed = 28412U;
    const char tmp_msg_0[] = {-2, 21, -2, -79, 89, 114, -125, -120, -7, 6, 116, 89, 27, 73, -3, -81, -79, 110, -3, -66, -32, -126, -86, -57, -20, -75, -26, -125, 23, 65, 86, 55, -84, 89, -114, -71, 8, 95, 41, 4, -53};
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
    msg.setTimeStamp(0.158104923023);
    msg.setSource(26646U);
    msg.setSourceEntity(30U);
    msg.setDestination(24682U);
    msg.setDestinationEntity(230U);
    msg.type = 247U;
    msg.speed = 39612U;
    const char tmp_msg_0[] = {-46, 62, -47, 100, 5, -56, -85, -68, 84, -123, 60, 28, -25, -124, -103, -83, -124, -76, -90, 16, -120, -6, -118, 45, -69, -22, 25, 91, 30, -53, -9, -57, 91, 32, -51, 124, 39, -97, 68, 38, 81, -62, 35, -7, 24, -22, 4, -113, -20, -58, -8, 21, 57, -100, 66, 25, -2, 113, -91, 92, -22, -37, 52, 118, -63, -128, -19, 106, -59, -117, -4, -73, 18, -53, 86, 31, -55, 84, -60, 111, 125, -118, 126, -110, 34, -97, 44, -93, 98, 117, -80, 113, 120, -56, 35, -104, -13, 30, 55, -69, -42, -106, 105, -30, -66, 83, 125, -54, -18, 54, 112, -65, 112, 21, 36, -83, -110, 5, 77, -127, 71, 34, 27, -14, -91, 79, -90, -57, 30, 45, -75, 97, 58, -127, -106, 110, -118, -115, -12, -118, 42, 78, 0, -9, 75, -69, 47, -113, -124, -96, -50, -112, -67, 2, -23, -3, 103, -70, -16, 69, 68, 70, 88, 85, -126, -110, 116, -28};
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
    msg.setTimeStamp(0.743244310457);
    msg.setSource(10741U);
    msg.setSourceEntity(151U);
    msg.setDestination(15897U);
    msg.setDestinationEntity(220U);
    msg.op = 59U;
    msg.tas2acc_pgain = 0.0985529188986;
    msg.bank2p_pgain = 0.217018885873;

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
    msg.setTimeStamp(0.677997024974);
    msg.setSource(22042U);
    msg.setSourceEntity(138U);
    msg.setDestination(63234U);
    msg.setDestinationEntity(204U);
    msg.op = 191U;
    msg.tas2acc_pgain = 0.559402477988;
    msg.bank2p_pgain = 0.834596024918;

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
    msg.setTimeStamp(0.893075600392);
    msg.setSource(62190U);
    msg.setSourceEntity(34U);
    msg.setDestination(23001U);
    msg.setDestinationEntity(88U);
    msg.op = 67U;
    msg.tas2acc_pgain = 0.302429059467;
    msg.bank2p_pgain = 0.889665371918;

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
    msg.setTimeStamp(0.717900620191);
    msg.setSource(13818U);
    msg.setSourceEntity(197U);
    msg.setDestination(10776U);
    msg.setDestinationEntity(54U);
    msg.available = 3655927875U;
    msg.value = 51U;

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
    msg.setTimeStamp(0.407731211139);
    msg.setSource(47793U);
    msg.setSourceEntity(221U);
    msg.setDestination(27065U);
    msg.setDestinationEntity(231U);
    msg.available = 2350480867U;
    msg.value = 95U;

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
    msg.setTimeStamp(0.604304519679);
    msg.setSource(44209U);
    msg.setSourceEntity(45U);
    msg.setDestination(19329U);
    msg.setDestinationEntity(68U);
    msg.available = 2649920657U;
    msg.value = 136U;

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
    msg.setTimeStamp(0.624998097652);
    msg.setSource(17702U);
    msg.setSourceEntity(106U);
    msg.setDestination(1074U);
    msg.setDestinationEntity(24U);
    msg.op = 60U;
    msg.snapshot.assign("XQNBCMYKWASIQCGUZRDHGWUWPEAHRRMLPDBFCHTCJRHACKSPUBTITGMPTEGQJJWUADRPSZZHTMEWPTIXHLODHXMXGGQJGSJFYROANSFNLVOYLKMOXYDGTESXSIDJMUABNBTHEFZNPVFWAZFORSRYCYLJOWVYFIQZJQEPICGTVFAFIHXMLKIMSXBJIPKOLZUBNWOLWLKNJLYNSVDGBECEQUQBCZTKRPIEQ");
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = 12333;
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
    msg.setTimeStamp(0.957623269388);
    msg.setSource(47746U);
    msg.setSourceEntity(154U);
    msg.setDestination(52348U);
    msg.setDestinationEntity(106U);
    msg.op = 244U;
    msg.snapshot.assign("VIKBUHPPTOFHHJLWFQLOOAHJXXUSUCSKDSRUQYRRZVUALCSZYTWNSWXXTOHUGMQKEZJCJAS");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.451713372064;
    tmp_msg_0.lon = 0.755018709442;
    tmp_msg_0.z = 0.886510362966;
    tmp_msg_0.z_units = 211U;
    tmp_msg_0.speed = 0.733552797758;
    tmp_msg_0.speed_units = 68U;
    tmp_msg_0.custom.assign("KDTDLUCVTZKOJUKGRGQBJQIGANBV");
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
    msg.setTimeStamp(0.20919713977);
    msg.setSource(5637U);
    msg.setSourceEntity(121U);
    msg.setDestination(30873U);
    msg.setDestinationEntity(127U);
    msg.op = 97U;
    msg.snapshot.assign("MNMUPFVJYXJGSEEJRZUMKGSHLNBEEMBPTRYQCHHYVADZCVMDWSHZDLACKGDPDWZXVWXVAGIRGUBNMCAEFZIXVFOKISFWLEWUOZABAJWGKDPJACRTMNKMLLHYZQNDEGZTYQBIXGPJUQKLXFNSJKQSKPNPVYFDFOSRTLJBVOIASESFGQLIUXUAIQLXHYWVNOYHMIQTBHKHORRRRCCJINCTUWQOORPZUWQHTPXTBKCVXSDFOPBZAWCYOMNYJFU");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 2101156212U;
    tmp_msg_0.value = 235U;
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
    msg.setTimeStamp(0.0703246241057);
    msg.setSource(10926U);
    msg.setSourceEntity(6U);
    msg.setDestination(19628U);
    msg.setDestinationEntity(11U);
    msg.op = 252U;
    msg.name.assign("VDTVYHPNJWMILWOSSLXVQRCXGRPITLALINLHLGJWCXVNQEXXHZLOXEOKIPXHLKBJRVXYWWDZAQCUCQNEHZJUNCOTLSBNUNRRZYHYPTVORKYZPK");

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
    msg.setTimeStamp(0.372799689564);
    msg.setSource(40805U);
    msg.setSourceEntity(116U);
    msg.setDestination(51701U);
    msg.setDestinationEntity(186U);
    msg.op = 163U;
    msg.name.assign("IFSRWWAFUEHTXIRVSGVUAQUHSOVECGLONWWFIWKLQZVMMPDTKHPUMXWEAJJAHCSDMRXPLZPNANLTFBPPOXXFZHRKFZDTEMYGBXPGMLNKLWJTGBSMHKXULHBASBFBNOQXYPQPQSTUQFZBZVRVMMLJFYUWJCWLXQUIIDRRJYMVZIEETWXKVYOAOCPGSGFNNZKRKUAAEGDBTQTYHRYHIILGJCSYICDODONYOQOHKI");

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
    msg.setTimeStamp(0.272752529098);
    msg.setSource(35671U);
    msg.setSourceEntity(201U);
    msg.setDestination(19183U);
    msg.setDestinationEntity(49U);
    msg.op = 73U;
    msg.name.assign("MRNVCQSSUYFTGAHQEIRPTDVWWVJHXNNCURRDBTFAWYGPUNZWKMEKBIMXZDKREYQHROMIWWJHEHJIELDMJGVCEOLOLAYUOIYDHZATXKYFBRWLZIUDSCYSGFICZGAOJLVFUCMSSNVWNQSGPWZUNEAXVPBNYFHJLXMMVXGTFSRWODALRBCOXGKZTYCCUPUVOKHQPQKQPEOKBALELPZPTTQGJYD");

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
    msg.setTimeStamp(0.598792180814);
    msg.setSource(61076U);
    msg.setSourceEntity(142U);
    msg.setDestination(8536U);
    msg.setDestinationEntity(212U);
    msg.type = 209U;
    msg.htime = 0.874424340848;
    msg.context.assign("OKHQEWVQEFAIJPZNHGIDFXMFYYLIJPTYHVJKJUUSLRHEZBSLXQJTOSDXPIBXMGOLGWCVCREZASMUNOOAVNLKNQRUKSOWRLUWMYEFWRPXCGRDDDBOJBAHWANPQQVZWQQPJOXHYZBWYDZEPSUFCMKHTVVYPEMTJCVARWYHBOSGARHHNITXSKSKGRPPXUILTDETTIIJUACCZUNZGFMIBZMQVENMNCZDKBFBXFAUDGFGSKLLGKAIYQ");
    msg.text.assign("SDCGQJTJMUIYQHWAACQQDJBRLFCONAFSFARCQJHGCDMQETYMDPTOSGUIRYSVEVGZUAIDXRIOKJAFZENUMWNXPZLUGQWJUKTISBWOFEXMLUVBRJSXETPZDWIZNYHOBQKKYEEPKZBHOMOJIILGQRPUCOTELSMKGLTFCVGLSLFXCNJSTPWUGZTTBLGYDXBXWHXVPLEX");

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
    msg.setTimeStamp(0.730768708857);
    msg.setSource(39012U);
    msg.setSourceEntity(24U);
    msg.setDestination(58938U);
    msg.setDestinationEntity(15U);
    msg.type = 240U;
    msg.htime = 0.957650580134;
    msg.context.assign("QGAFRPXOJPZYEHBNKROPEEHMGGLXBWNYSWTIXGCTYENHIBDPOVJKHPAZRADZWMFMUHVTCZFBGIOUWRGIQSYGXKMVJUMBCJWORJIBHDITNDUAHTGBSBTZYVZEAOTQSATYVZPLMVKZTQMLIDVSQICNMJPUFESOJIKWJDUGKFHRUXCRDVBXQKELLPUUDNC");
    msg.text.assign("OOCIVPCGKGFYWSUQQHBFSZTJCFDYXTQMEBVPDBFPTWJBJAOJOXVYHIVZSLTDOGUFXIGYQ");

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
    msg.setTimeStamp(0.604633810948);
    msg.setSource(64822U);
    msg.setSourceEntity(107U);
    msg.setDestination(54485U);
    msg.setDestinationEntity(167U);
    msg.type = 171U;
    msg.htime = 0.925247213554;
    msg.context.assign("CCRUKEPJWJSVUDOLBSNHFLZD");
    msg.text.assign("LUMFVPYIHAMWZUJXKNGVAFLU");

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
    msg.setTimeStamp(0.322636733008);
    msg.setSource(58937U);
    msg.setSourceEntity(234U);
    msg.setDestination(44341U);
    msg.setDestinationEntity(109U);
    msg.command = 11U;
    msg.htime = 0.486187448902;

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
    msg.setTimeStamp(0.188438965374);
    msg.setSource(28045U);
    msg.setSourceEntity(144U);
    msg.setDestination(3430U);
    msg.setDestinationEntity(18U);
    msg.command = 204U;
    msg.htime = 0.834432048281;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 102U;
    tmp_msg_0.htime = 0.505668109972;
    tmp_msg_0.context.assign("SCVNKYZDYTBXAGDVJLZFIESQFIVVDHMJTGSDWXIKAOWNRRUQMNMTUPYWFXXJFLTJVBZATHZHGUCPXTGVILWUBXDKFLOAJKYTORJBDHSLWRYNBELSTKQMSZHYHMYOZVQCOUPEWPPBFQXYNFWEBUOEPNSIUOVKQFKHWHDLUCSBGBPTBXAMHAWILFCAQOLZGYITYOWGMAAE");
    tmp_msg_0.text.assign("ZGPNKMDAJBSPQSYYQCLSUEAVORFYMVZIWMYDPTEXLFRAHSNNGBKTDWHKUMFOYKOYIJOIFUUPTTKRLDVWXPBNSRANJIOGXRJWKIGGOZSQESSBZWVTDMIQDOZEJKLTEAXBVQLFFBGRYSUXVBEENMT");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.555811279945);
    msg.setSource(16456U);
    msg.setSourceEntity(9U);
    msg.setDestination(6315U);
    msg.setDestinationEntity(91U);
    msg.command = 99U;
    msg.htime = 0.171748686678;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 10U;
    tmp_msg_0.htime = 0.730473037224;
    tmp_msg_0.context.assign("MEJSCVLBHAJNCLHPHANBZOKMPMOUKJIMNWWGSPXXVZFYVKGEJEVDRI");
    tmp_msg_0.text.assign("PNLPLPLAREUJWTCHRMWQQQOVTVHWKVXUPIZIVFTDQNJJMURDLBZRBFJEBGXOMFYQSTOELUCGKFMWUEVWYIXRGOBXXDATCJKJYLPCWTMQJLFBRSXDKKTDFZGZIAQZQKPHMSELCASHNGYPIWDXZIAWGARPTSFHJHYYUKUNE");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.839228793121);
    msg.setSource(16882U);
    msg.setSourceEntity(121U);
    msg.setDestination(34256U);
    msg.setDestinationEntity(192U);
    msg.op = 127U;
    msg.file.assign("CFQFTPJCBVMDUXVRGZGLECRNKMZGVZBJGRDAHOBGIPUGBJRWLIQPPXUUNHQXYLTMDPUQSFJEEIZUWKELBDFZXQXNEINGPVLIGJOWHHVOKKAHBNMEKUNRWBYMTEFCWIQUSKNHLRLZWPANWCEDJSOKX");

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
    msg.setTimeStamp(0.136566511305);
    msg.setSource(60556U);
    msg.setSourceEntity(150U);
    msg.setDestination(33163U);
    msg.setDestinationEntity(94U);
    msg.op = 212U;
    msg.file.assign("EJRFQZCZGSLXYJGRWUYOANOMQMAQPNXHSFMRACQPJTLEPMRYNNHDFVTKPLSUUYCGBQZXYYVSNXNCNWLCLIVRVNPESIASCWOTDBGATKUDIRKYSFUVQMUEXCWPBLBWIGLPOODKJAFBIPTOF");

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
    msg.setTimeStamp(0.0955850431716);
    msg.setSource(33270U);
    msg.setSourceEntity(71U);
    msg.setDestination(62036U);
    msg.setDestinationEntity(52U);
    msg.op = 61U;
    msg.file.assign("DSYUESKFQXXNPNYSORYELNJFSFNJBKBHOSKRWUPYIMYBQ");

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
    msg.setTimeStamp(0.471569570629);
    msg.setSource(60112U);
    msg.setSourceEntity(187U);
    msg.setDestination(30321U);
    msg.setDestinationEntity(165U);
    msg.op = 38U;
    msg.clock = 0.247514230254;
    msg.tz = -114;

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
    msg.setTimeStamp(0.957207180634);
    msg.setSource(59641U);
    msg.setSourceEntity(173U);
    msg.setDestination(26709U);
    msg.setDestinationEntity(176U);
    msg.op = 98U;
    msg.clock = 0.506401389038;
    msg.tz = 48;

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
    msg.setTimeStamp(0.739664746668);
    msg.setSource(2518U);
    msg.setSourceEntity(100U);
    msg.setDestination(18099U);
    msg.setDestinationEntity(16U);
    msg.op = 250U;
    msg.clock = 0.577959020434;
    msg.tz = -122;

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
    msg.setTimeStamp(0.439752433752);
    msg.setSource(32734U);
    msg.setSourceEntity(155U);
    msg.setDestination(22227U);
    msg.setDestinationEntity(188U);
    msg.conductivity = 0.756221729217;
    msg.temperature = 0.578892696768;
    msg.depth = 0.495783775388;

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
    msg.setTimeStamp(0.135465260672);
    msg.setSource(43251U);
    msg.setSourceEntity(199U);
    msg.setDestination(55529U);
    msg.setDestinationEntity(76U);
    msg.conductivity = 0.4397444378;
    msg.temperature = 0.628186577525;
    msg.depth = 0.288469218975;

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
    msg.setTimeStamp(0.900569988725);
    msg.setSource(51664U);
    msg.setSourceEntity(81U);
    msg.setDestination(34851U);
    msg.setDestinationEntity(116U);
    msg.conductivity = 0.886643728669;
    msg.temperature = 0.11390227229;
    msg.depth = 0.951100499493;

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
    msg.setTimeStamp(0.995731062178);
    msg.setSource(15146U);
    msg.setSourceEntity(58U);
    msg.setDestination(5358U);
    msg.setDestinationEntity(110U);
    msg.altitude = 0.0738339177631;
    msg.roll = 58164U;
    msg.pitch = 4874U;
    msg.yaw = 13990U;
    msg.speed = 32590;

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
    msg.setTimeStamp(0.49294911533);
    msg.setSource(15741U);
    msg.setSourceEntity(141U);
    msg.setDestination(2231U);
    msg.setDestinationEntity(12U);
    msg.altitude = 0.467035306378;
    msg.roll = 808U;
    msg.pitch = 3249U;
    msg.yaw = 7416U;
    msg.speed = 22932;

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
    msg.setTimeStamp(0.920616132671);
    msg.setSource(2409U);
    msg.setSourceEntity(25U);
    msg.setDestination(29848U);
    msg.setDestinationEntity(41U);
    msg.altitude = 0.275469968786;
    msg.roll = 9441U;
    msg.pitch = 54532U;
    msg.yaw = 51257U;
    msg.speed = -27103;

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
    msg.setTimeStamp(0.395743519974);
    msg.setSource(55249U);
    msg.setSourceEntity(80U);
    msg.setDestination(9192U);
    msg.setDestinationEntity(216U);
    msg.altitude = 0.983293666874;
    msg.width = 0.979425630692;
    msg.length = 0.813051013636;
    msg.bearing = 0.165436548284;
    msg.pxl = -7171;
    msg.encoding = 249U;
    const char tmp_msg_0[] = {98, -111, -41, -91, -127, 33, 21, -43, 40, 70, 0, -23, -93, -21, -11, -23, -90, 84, 30, 114, -93, -15, -7, 66, -95, 6, 31, -128, -121, -10, 105, 86, -125, 115, -45, 101, -70, 46, -21, 25, 106, -74, -85, -96, 14, -55, -86, -71};
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
    msg.setTimeStamp(0.912156063616);
    msg.setSource(49518U);
    msg.setSourceEntity(7U);
    msg.setDestination(54153U);
    msg.setDestinationEntity(211U);
    msg.altitude = 0.725423196911;
    msg.width = 0.601029967837;
    msg.length = 0.153332642053;
    msg.bearing = 0.517436009341;
    msg.pxl = 17103;
    msg.encoding = 88U;
    const char tmp_msg_0[] = {21, 10, 105, 102, 65, 123, 53, 82, 106, -3, 75, -14, 6, 99, 35, 17, -3, 5, -86, -113, 50, -89, 16, 124, -47, 43, 106, 16, 68, 18, -96, 92, 8, 125, 88, 7, 1, -32, 95, -34, 77, -71, -91, 83, -122, 54, -57, -7, 39, 119, -111, -99, 31, -87, -128};
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
    msg.setTimeStamp(0.697522839262);
    msg.setSource(57950U);
    msg.setSourceEntity(62U);
    msg.setDestination(3702U);
    msg.setDestinationEntity(245U);
    msg.altitude = 0.132069298135;
    msg.width = 0.932473067079;
    msg.length = 0.552115298434;
    msg.bearing = 0.653077925854;
    msg.pxl = -19381;
    msg.encoding = 183U;
    const char tmp_msg_0[] = {-127, 22, 80, -90, -94, 109, 90, 97, -115, -124, -69, 54, 82, 90, -69, -15, 9, -85, 69, -88, 7, -62, 75, 114, -47, -99, 74, -104, -23, -17, -30, 92, 120, -29, 126, 20, 48, 31, -116, 58, -90, 67, 67, -55, -31, -13, -107, -48, 115, -73, -74, 0, -39, 111, 84, 85, -5, -51, -15, 29, -32, -77, -95, 15, -21, -36, -73, -73, 35, 15, 50, 19, -47, -57, -128, 2, 14, -86, 58, 106, 66, -45, -4, 98, 23, 46, 89, -30, -56, 46, 102, -40, -74, -100, -39, 49, 35, -76, -105, -37, -33, 3, -39, 0, 126, 75, -45, 16, -90, 116, -109, -111, 75, 9, 5, 43, -116, 98, 35, -82, -48, 118, -74, -114, 90, -36, 9, 79, -52, -124, -113, -75, -90, -59, 39, 68, 111, 80, 49, 122, -3, 23, -40, 28, 58, -128, 125, 15, -97, 71, 100, 89, 63, -117, 16, -6, 15, 11, 38, -39, 3, 53, -122, -96, 94, 19, -117, 92, 37, 92, 14, 37, -32, -83, -125, 26, 83, -88, -60, -49, -3, -23, 81, 115, 81, -128, -98, -119, 95, 120, 19, -114, 25, 8, -126, 124, -115, -119, -84, 58, -45, 36, -125, -47, -118, -127, -114};
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
    msg.setTimeStamp(0.908072921935);
    msg.setSource(20939U);
    msg.setSourceEntity(163U);
    msg.setDestination(51070U);
    msg.setDestinationEntity(245U);
    msg.text.assign("GNIELMIFUJGOZDDIRXCIXQWAFRJDKIHPLABQGTXKPUMRMLVUZNNQAEXQVAMQGEPJYDSJLOHPLAQTCSNKRDGVUISRTFNBBOPUYEMYWYBRVOYHSMKEYCGHGOWNFIISETUPZZGCAHHKLAWEZDXCWZMMFBEXTM");
    msg.type = 109U;

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
    msg.setTimeStamp(0.473375362929);
    msg.setSource(59666U);
    msg.setSourceEntity(174U);
    msg.setDestination(40738U);
    msg.setDestinationEntity(219U);
    msg.text.assign("HPUHTKSXUSDTFMGALFU");
    msg.type = 207U;

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
    msg.setTimeStamp(0.442791466452);
    msg.setSource(17005U);
    msg.setSourceEntity(137U);
    msg.setDestination(42302U);
    msg.setDestinationEntity(76U);
    msg.text.assign("KSXKIRQJRVRQEAAJOVDBRTEQPZQMHUYIODSWWONYMZXTQEIXPNCHLUSBNAWEFSDAUPBSWZPWUUTTRISAGBGBJDXTYJBRNCTVCEHTGLEJAXILOCDXBUDGTMFBGLEUSUPD");
    msg.type = 156U;

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
    msg.setTimeStamp(0.901066010985);
    msg.setSource(56360U);
    msg.setSourceEntity(68U);
    msg.setDestination(8314U);
    msg.setDestinationEntity(153U);
    msg.parameter = 220U;
    msg.numsamples = 223U;
    msg.lat = 0.254372295946;
    msg.lon = 0.876948603007;

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
    msg.setTimeStamp(0.911810622603);
    msg.setSource(43031U);
    msg.setSourceEntity(209U);
    msg.setDestination(18424U);
    msg.setDestinationEntity(165U);
    msg.parameter = 4U;
    msg.numsamples = 183U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 35670U;
    tmp_msg_0.avg = 0.230902232406;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.99248179858;
    msg.lon = 0.246458013841;

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
    msg.setTimeStamp(0.480152888227);
    msg.setSource(40855U);
    msg.setSourceEntity(117U);
    msg.setDestination(9743U);
    msg.setDestinationEntity(22U);
    msg.parameter = 102U;
    msg.numsamples = 204U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 55375U;
    tmp_msg_0.avg = 0.833095279407;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.756448290597;
    msg.lon = 0.786200488977;

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
    msg.setTimeStamp(0.288437154196);
    msg.setSource(61802U);
    msg.setSourceEntity(186U);
    msg.setDestination(20856U);
    msg.setDestinationEntity(113U);
    msg.depth = 42208U;
    msg.avg = 0.547789968006;

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
    msg.setTimeStamp(0.873426648012);
    msg.setSource(28214U);
    msg.setSourceEntity(77U);
    msg.setDestination(50220U);
    msg.setDestinationEntity(203U);
    msg.depth = 46070U;
    msg.avg = 0.12149458019;

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
    msg.setTimeStamp(0.960496597718);
    msg.setSource(37111U);
    msg.setSourceEntity(184U);
    msg.setDestination(5132U);
    msg.setDestinationEntity(184U);
    msg.depth = 58240U;
    msg.avg = 0.458723049021;

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
    msg.setTimeStamp(0.24123013669);
    msg.setSource(28985U);
    msg.setSourceEntity(64U);
    msg.setDestination(49723U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.962245934651);
    msg.setSource(41403U);
    msg.setSourceEntity(138U);
    msg.setDestination(33240U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.509235045015);
    msg.setSource(59895U);
    msg.setSourceEntity(17U);
    msg.setDestination(57378U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.480020565375);
    msg.setSource(42927U);
    msg.setSourceEntity(37U);
    msg.setDestination(6143U);
    msg.setDestinationEntity(138U);
    msg.sys_name.assign("JMDJOVNFOMWS");
    msg.sys_type = 157U;
    msg.owner = 1519U;
    msg.lat = 0.242887466242;
    msg.lon = 0.30499750944;
    msg.height = 0.965341530152;
    msg.services.assign("OJJADLTKSRAZA");

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
    msg.setTimeStamp(0.911983345263);
    msg.setSource(49982U);
    msg.setSourceEntity(46U);
    msg.setDestination(61682U);
    msg.setDestinationEntity(101U);
    msg.sys_name.assign("KJMOSRBMZALXVCCUPFHNLXAVECZEJUVNOVATSRL");
    msg.sys_type = 47U;
    msg.owner = 38862U;
    msg.lat = 0.908743167147;
    msg.lon = 0.793350767529;
    msg.height = 0.290737108574;
    msg.services.assign("UVWQCNERIDSWUVMTLZXNCHONTUHFQQJLGTEEKHSPPAPVFGMLZJYIDJZJTUWWERDCJKGMTGZFQJYRFQVLRLBAHNJFMWHLEGEOWODOGOMSDNQNRARUEXUFFYAVBTKIRVWPUVAPRHSKABCWMBEKISJXSZCYCBKIXLSMXZGHPOGSYQCWIHXTNFTQOBYQNKIKATZXZECOCGLQDX");

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
    msg.setTimeStamp(0.156656872575);
    msg.setSource(44022U);
    msg.setSourceEntity(100U);
    msg.setDestination(56929U);
    msg.setDestinationEntity(87U);
    msg.sys_name.assign("ZOJUZDMIYVFPOQDQPVUXFHQCJUJUYIBMKVWGFDNAUMEPHBSZDVMPCDXBSNZPJWCBILHYQPOLUITEJUEKSUDDEAOTTZLV");
    msg.sys_type = 156U;
    msg.owner = 32888U;
    msg.lat = 0.0767692697602;
    msg.lon = 0.915300757628;
    msg.height = 0.756377583133;
    msg.services.assign("GMUPJQDORNCJQMBXOCFXZVOQWPUEFJNVQKHQBJJHRXDOFOSQTFIWAZXSEHKIKTHAZERMWSFVLLBAFAXG");

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
    msg.setTimeStamp(0.19205321186);
    msg.setSource(31491U);
    msg.setSourceEntity(202U);
    msg.setDestination(50926U);
    msg.setDestinationEntity(79U);
    msg.service.assign("PAQSOTBCCRFNDIAFPXEPJHMFRZCQMKRRVQDVKQNYHWJWJAAKSGVYDSDCROUTZERHJAUBZADYBBUSKIMRXGD");
    msg.service_type = 250U;

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
    msg.setTimeStamp(0.921416374399);
    msg.setSource(27334U);
    msg.setSourceEntity(43U);
    msg.setDestination(18782U);
    msg.setDestinationEntity(151U);
    msg.service.assign("VWOYILALYQXDAECVTKOHQIQRJPDQQFCDHLFGFPBGWSIOXBEJKFNLNMKVUEUMIBCEIPAXWYTBGKPRANXPDVKVUXTRFCLKJMYGPAZZORTGBRJURWHHXNFUWWCAJFHBTWVTTJSXDLRGZYRPCSOYYIZDSMZLUHMIGJQZZHAKCOFJFEQYR");
    msg.service_type = 134U;

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
    msg.setTimeStamp(0.661518739559);
    msg.setSource(36728U);
    msg.setSourceEntity(4U);
    msg.setDestination(43206U);
    msg.setDestinationEntity(40U);
    msg.service.assign("HTJOYISMZOTBBIPLBUYMXAGUJJJVDYZPKCNCDBYWEOCAAYMKUZQDDOTGLAAWUDRKXBHUNSOYORXOWRUQRR");
    msg.service_type = 71U;

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
    msg.setTimeStamp(0.893603375112);
    msg.setSource(46966U);
    msg.setSourceEntity(20U);
    msg.setDestination(48820U);
    msg.setDestinationEntity(243U);
    msg.value = 0.248601192314;

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
    msg.setTimeStamp(0.575334542008);
    msg.setSource(58974U);
    msg.setSourceEntity(211U);
    msg.setDestination(64179U);
    msg.setDestinationEntity(153U);
    msg.value = 0.081687432929;

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
    msg.setTimeStamp(0.662068233994);
    msg.setSource(62543U);
    msg.setSourceEntity(207U);
    msg.setDestination(60806U);
    msg.setDestinationEntity(120U);
    msg.value = 0.927927567201;

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
    msg.setTimeStamp(0.746536648554);
    msg.setSource(13418U);
    msg.setSourceEntity(32U);
    msg.setDestination(56775U);
    msg.setDestinationEntity(85U);
    msg.value = 0.453025250306;

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
    msg.setTimeStamp(0.0629165399798);
    msg.setSource(14484U);
    msg.setSourceEntity(103U);
    msg.setDestination(11480U);
    msg.setDestinationEntity(161U);
    msg.value = 0.887549636348;

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
    msg.setTimeStamp(0.313861839324);
    msg.setSource(13730U);
    msg.setSourceEntity(113U);
    msg.setDestination(54682U);
    msg.setDestinationEntity(97U);
    msg.value = 0.872981101053;

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
    msg.setTimeStamp(0.993193777198);
    msg.setSource(35946U);
    msg.setSourceEntity(15U);
    msg.setDestination(40100U);
    msg.setDestinationEntity(110U);
    msg.value = 0.91564242871;

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
    msg.setTimeStamp(0.378347703002);
    msg.setSource(2396U);
    msg.setSourceEntity(86U);
    msg.setDestination(62205U);
    msg.setDestinationEntity(100U);
    msg.value = 0.775618645639;

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
    msg.setTimeStamp(0.358136413983);
    msg.setSource(55869U);
    msg.setSourceEntity(220U);
    msg.setDestination(3818U);
    msg.setDestinationEntity(9U);
    msg.value = 0.182954226904;

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
    msg.setTimeStamp(0.838425055588);
    msg.setSource(27654U);
    msg.setSourceEntity(184U);
    msg.setDestination(6370U);
    msg.setDestinationEntity(238U);
    msg.number.assign("ULDLGLECSCZXGBDMWWZVBMSTXELIKCJQOMWQXXEPHUIJPSRJACOGXUPYCHFAQZWOXRFQEGIMGRSAAVZBMQHDTINLHALOTJRDHVQSVYFRQFGVECBWSLAIYKNEMRZTESLUZFEEIVXJJXAJWVPROMXRFDUQDBUCGFOGKHOUIPNYHSKXNYP");
    msg.timeout = 45256U;
    msg.contents.assign("RWDKMCKYIXDNJBANKEVWIEPWYGLJHSIWFMXRQJDUAMHZJQXCXCCFMALLJFFGYCORQPRGHGPQTZILOVSEEBPTEOIAZUDBFZGRQTHEXPZWWGOKGATYRVNQSQRSZI");

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
    msg.setTimeStamp(0.990323094284);
    msg.setSource(52270U);
    msg.setSourceEntity(142U);
    msg.setDestination(43018U);
    msg.setDestinationEntity(33U);
    msg.number.assign("DASJZXYMVNAMVGBXKYOWVBNKFDYQTGREHMLCMQOAYGWJEYDDTZJEQBHILUBRRVPCAHTUPBVWAPUHTNUUZOYQIPWSFCYABNISSMBKOXLLILJTZ");
    msg.timeout = 62487U;
    msg.contents.assign("OFIXGVWZUZGQJRXSDPNIEEBBWZVXPTXSIMOFVWAMPPVWEFODDFJKBQWRLTPUZRKJKDVIWVPBLPIANYFEAAYRZXYGTSO");

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
    msg.setTimeStamp(0.77282621863);
    msg.setSource(27987U);
    msg.setSourceEntity(71U);
    msg.setDestination(17799U);
    msg.setDestinationEntity(216U);
    msg.number.assign("RSYKUKXKDZHIDNSNHSNCHVWMJQZROEDNFDTTFMHKHWYGUUVWTTUUWFODNJXFW");
    msg.timeout = 18137U;
    msg.contents.assign("KJLGNBHELQPRHQRMEPZPUIRYSDTMYAHXDEGDGWTLLKECYFMBZIEDJNLGXXRITOUVAELKIZEAIYCISHTSVAJBJOZTXVNODZIUWDOGQYVV");

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
    msg.setTimeStamp(0.817973136641);
    msg.setSource(209U);
    msg.setSourceEntity(183U);
    msg.setDestination(13710U);
    msg.setDestinationEntity(200U);
    msg.seq = 2522428860U;
    msg.destination.assign("NGXEIGNHKMRVPMXXBPBZWVJYZPAQZSHBCSUJUCYMSLHLWQUFJBXILREGGQIITUIWVJCFPOIUZPMZGVEENMNNIHPKBITSTIFNQXYFEQJXBDVKXEKASUDKZPATOBZAMOSCLHQSDOYZRLWCOKLDZGGDRWNVTKDJFACMLQOPXRVFVNMVWBYSJYZRASBKERGDYXWYLOFPCQHCCUFAVNRPFAIDTYGXDEUKETHUWKTF");
    msg.timeout = 24898U;
    const char tmp_msg_0[] = {-19, 92, -42, 120, 30, 101, 66, 24, -82, -41, 11, 89, 22, -76, 26, 73, 49, 26, 126, 113, -7, 110, 53, 18, -5, -65, 79, 55, -22, -14, -25, -63, 90, 41, 3, 105, -121, 66, -77, 26, 107, 93, -34, -75, -16, -91, -28, -55, 6, 12, -54, 25, -51, -7, 11, 83, -13, -112, 101, 35, 107, -28, -97, -48, -91, 11, 25, 11, 9, -58, 77, 124, -3, 124, -69, -41, 92, -30, 70, -116, 83, 82, -6, 100, 14, 5, 41, -38, 75, 102, 63, -114, -121, -8, -21, 101, -32, 114, 29, -63, 118, -54, 58, -54, 17, 84, 10, 34, 41, 105, -102, 21, 50, -25, -22, -25, -125, 91, -36, -37, 104, 34, 126, -84, -19, 121, 42, 45, -97, -114, -128, -16, -96, -99, -114, -72, 80, -126, -26, -127, -47, -44, 18, -26, -4, -2, -58, 16, -19, 126, -24, 99, -111, 78, 58, -10, 26, 29, 65, 21, 41, 103, -93, -109, 68, -17, -98, 38, -28, -6, -20, -82, 48, -125, 40, -117, -56, -120, -33, -46, 58, -112, -78, -24, -86, 36, -7, 87, 88, -90, 56, 80, 92, -26, 90, 8, -7, 116, -122, 39, -24, 66, 44, 117, 53, 116, -38, 44, -96, -88, 125, 111, 124, 68, 35, -105, -18, -7, -82, -2, 95, -116, -38, -34, -33, -96, -71, -115, 48, 93, 24, 22, -30, -39, -51, 39, 59, 102, 68, -65, 124, 71, 90, -41, 92, 61, -97, 97, -95, 29};
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
    msg.setTimeStamp(0.190048249647);
    msg.setSource(38570U);
    msg.setSourceEntity(57U);
    msg.setDestination(47834U);
    msg.setDestinationEntity(106U);
    msg.seq = 323513666U;
    msg.destination.assign("SVIRWKBGDFYMEZNRUVXNRCTUBNSDMZQEWAKCVMXGFHRSRJEKGYVIMYLQQOOPNMVZSFQVBYFLCGWXKUGCJRWWOJGRPWPIBLOXYDCFDCKEZZSTABCXSUIYTHQOGSIHWUMLNQBWIFYHZREEFTRZUJPOGAFZHTXPPLQ");
    msg.timeout = 9504U;
    const char tmp_msg_0[] = {8, 112, -103, -9, -5, 68, 84, -123, 8, 50, 103, -39, -4, -89, 121, 33, 27, -27, 111, 11, -90, -89, -18, -34, -128, -56, -65, 37, -6, -92, 14, 60, 96, -81, -113, 78, -88, 78, -96, 5, 114, -46, 6, 71, -25, 73, -15, 45, 50, 93, 90, 9, -60, -20, -114, -88, -73, -69, 31, 12, 84, 82, 103, 54, -46, -10, 22, -116, 3, -7, -84, 119, -104, -21, 105, 118, -73, -106, -41, 99, 107, -102, -92, -68, -59, 73, 96, -95, 10, -92, 97, -39, 20, -18, -14, 77, -38, 30, -113, 67, -67, -15, 63, 38, 1, -79, -22, -88, -109, -81, -126, 69, -87, -71, -98, 36, -113, -102, 5, -53, -72, -87, 32, 91, -85, 93, 68, -24, -46, 75, 106, -113, -55, 86, 66, 92, -11, 121, 7, -83, -109, 39, 46, -117, 55, 77, 0, -116, -116, -1, -64, -126, -83, -30, -32, -76, 18, -127, 47, 3, -112, -88, -97, -94, 84, -107, 97, 16, -82, -69, 97, 76, 94, -7, -111, -17, 81, 106, 125, -125, -63, -33, 71, 59, -90, -9, 4, -119, 23, -23, 101, 102, -88, -39, -58, 24, 97, -54, -48, 105, -101, -65, 38, 119, -80, -31, 63, 32, -35, -56, 113, -32, -89, 10, 42, 87, 123, -11, 33, 61, -77, -78, -35, -52, -78, -46, -113, -86, 109, -16, 29, 82, -78, -78, -87, 0, -41, 77, -89, -57, 112, 38, 89, -74, -2, 70, -98, -85, 3};
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
    msg.setTimeStamp(0.856103591051);
    msg.setSource(1948U);
    msg.setSourceEntity(96U);
    msg.setDestination(13425U);
    msg.setDestinationEntity(101U);
    msg.seq = 2491230486U;
    msg.destination.assign("ZCVGUWLRQLXUCOZBFJUXTBTOPDZKWMJOYIZKEYMOCMNENAPFFCWEUGDOQSTZKNFPIUEPHDNEQGEGVWIPPEZIWVFWZCFCRVFBVKMOPBTANLJHJKXSHHUJGXCYAFANLBKXXIAVSXMBXDJDDHELQQARSLYVLJLJHOSHYWAUGMYDBKOLVQNRTSHITLTMBQMTOFNKCXDZUGKUAIYRTWSDENC");
    msg.timeout = 3512U;
    const char tmp_msg_0[] = {125, -89, -33, 119, 104, 0, -87, 68, 107, -75, -44, 26, 79, 67, 31, 52, 104, 108, 82, 6, -95, 57, 74, 28, -44, -59, 81, 85, 11, -36, -42, -124, -64, -51, -93, -22, 43, -107, -6, -89, -48, 108, -44, -114, 93, -84, -50, 65, -109, 91, -101, -93, -18, 80, -61, -84, 44, 93, 115, 70, -120, 39, -10, 67, 32, 28, 92, -36, -83, 51, 28, 26, -124, 59, 21, 74, 51, -43, 107, -78, -93, -4, -110, 84, -92, 42, -25, -50, -59, -95, 24, 100, -62, 29, 10, -108, -11, -92, 116, 106, 70, -71, -71, 7, -18, 50, 62, -123, -7, -84, 3, -1, -94, 51, 78, -72, 51, -39, 125, -48, -91, -51, 112, 82, -13, -123, -12, -15, -61, -18, 82, 18, -118, -50, 80, -24, 118, -112, -59, 30, 13, 119, -123, -56, -100, -126, 49, 98, 104, 113, 89, 46, 123, 9, 39, 2, -43, -103, 92, 113, 125, -71, -70, -94, 125, 56, -68, 35, -56, 114, -102, 111, 50, 20, -61, -91, -103, 44, -127, -47, -118, -72, -3, -53, 94, -96, -20, -101, -43, 23, -124, 118, 64, 93, 102, -5, 22, -50, 33, 101, -48, 39, -14, 0, -95, -110, -114, -93, -44, -97, -23, -3, -75, 64, 51, -2, -30, -104, 124, 33, -24, -115, 109, -99, 10, -72, 18, -82, 84, -48, -76, 25, 98, -3, 13, -104, -8, 88, 46, 66, 43, 122, -94, 125, 50, 56, -7, 92, -60, -27, -62, 41, -66, -30};
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
    msg.setTimeStamp(0.172701909065);
    msg.setSource(34937U);
    msg.setSourceEntity(107U);
    msg.setDestination(28020U);
    msg.setDestinationEntity(70U);
    msg.source.assign("DUOIWFAQZOBJSUPTGP");
    const char tmp_msg_0[] = {110, -68, -111, -105, 106, 22, -21, 66, 55, 124, -43, -82, 13, -117, -123, 104, -40, -49, -104, -41, -16, -94, 60, -20, -17, -37, 119, -124, 28, -111, 118, -29, 60, -46, -82, -98, 43, 125, 34, 33, 110, -90, 70, -109, 17, 89, 15, -105, 102, 14, 51, 40, -121, 98, 119, 38, -104, 20, 122, 67, 100, -26, -119, -77, -45, 76, -28, -99, -68, -93, 40, 0, 47, -60, -5, -48, -97, 1, -111, -88, -3, 40, 5, 23, -75, -28, -8, -51, -60, -27, 37, 91, 82, -33, -33, -111, -100, 86, 109, -122, 13, 20, 52, 76, -50, -73, -92, 12, 43, 2, -125, -111, -23, 14, -22, 41, 85, 118, 80, -95, 47, 1, -38};
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
    msg.setTimeStamp(0.448737183576);
    msg.setSource(15652U);
    msg.setSourceEntity(132U);
    msg.setDestination(54240U);
    msg.setDestinationEntity(147U);
    msg.source.assign("TTUWWAYMPAECUYDWBAADGNWMMXEBWOGIVLHGUPVAWD");
    const char tmp_msg_0[] = {-106, -59, -48, 27, -8, -25, 102, -28, -84, 49, -50, -119, 85, 103, 102, 46, 26, 20, -59, 51, -33, -114, -106, -36, -115, 44, 5, 75, 98, -39, -30, -81, -49, -112, 6, -31, 112, 88, -110, 13, 119, 82, -124, -119, 14, 31, 17, 31, 33, -62, 86, 3, -5, 32, -110, -50, -84, -87, 20, 83, 7, -104, -78, 121, -52, -30, 8, -96, -29, -51, -21, 15, -37, -64, -24, 122, 23, 46, -38, 124, 67, -19, -37, -82, -23, -21, -42, 58, -10, 40, 8, 72, 42, -42, 81, -60, -44, -67, 124, 16, 27, 36, -96, 9, -64, -6, 109, -51, -64, -128, 0, 29, -66, -42, -36, -52, 11, -106, -128, -42, 3, 64, -61, 8, -50, -91, -60, -9, 25, -73, -126, 23, -102, 109, -125, 49, 106, 126, -54, -26, 66, -63, 98, 11, -37, 14, -80, 50, -116, -63, 14, 71, -86};
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
    msg.setTimeStamp(0.777921421668);
    msg.setSource(879U);
    msg.setSourceEntity(227U);
    msg.setDestination(27180U);
    msg.setDestinationEntity(43U);
    msg.source.assign("IPTYEXVTDRVBVTZCHOIOSEINCTLMSKGBXHCMBEC");
    const char tmp_msg_0[] = {-120, -89, -15, 20, 27, -109, -6, 83, -68, 114, 41, 126, 0, -17, -100, 20, -69, -48, -103, -85, -63, 35, -12, -72, 60, 82, 119, 72, -51, -114, -64, -113, 117, 114, 38, -116, -80, -55, -24, -98, 14, -37, -98, -23, -103, -68, -9, -117, 29, 112, -20, 33, 84, 90, -9, 121, -5, 120, 38, -106, 50, -23, -99, -100, -120, 76, -19, 81, -22, -104, -29, -104, 83, 14, 22, 119, 66, 96, 113, -30, 46, -27, 108, -3, -7, 69, 13, 114, -46, 110, -36, 74, 59, 105, 44, -59, -9, 14, 126, 53, 18, 35, 9, -84, -125, -39, -92, -117, -55, 114, -121, 119, -74, -109, 26, 122, 87, 37, -80, -15};
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
    msg.setTimeStamp(0.42695973705);
    msg.setSource(30817U);
    msg.setSourceEntity(209U);
    msg.setDestination(17249U);
    msg.setDestinationEntity(49U);
    msg.seq = 2864520745U;
    msg.state = 66U;
    msg.error.assign("QJFEZMLKOTHFFJFOICRDYVXZBNGDUUNZCUIMCDXDZIWVPIQAGMCZLRDGUEEYABVNHAXSEKKIDESDQWRCGQFYIOHTCVCFZKGYQYZXBNIWLUBNJAEOUIVYLQMJWDAHBTAVNRGNBUWNDHGKSPALOVWLPHEHOKRELXPEQOBDQNJXPHMBLPS");

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
    msg.setTimeStamp(0.287114720528);
    msg.setSource(19288U);
    msg.setSourceEntity(68U);
    msg.setDestination(13456U);
    msg.setDestinationEntity(106U);
    msg.seq = 290095087U;
    msg.state = 86U;
    msg.error.assign("DHMBDYAUEMOUBQHBCQHXPMGYGAIMMAZVVONWQMDRCZNMTRXULQEYJLYNLVKBRWLISFBPZOWIWIOPBRJUKTZZGXISLLQPEFGFXJDVMJAJCNCKIRIBRFZYQBLKECQWYKAREFVLYSFDIGJPPNCNODTSDTKCEVAGWTQNRNTCSGYXSDXOQMZUZNAHADBFOUVAZATHXVSGGEPTCBPHGZTYQMUNWRHHJXHOCESESKRSOEOFLWTJXULYHWUUFFDVIKKJV");

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
    msg.setTimeStamp(0.110371643135);
    msg.setSource(51125U);
    msg.setSourceEntity(109U);
    msg.setDestination(30953U);
    msg.setDestinationEntity(140U);
    msg.seq = 1781522341U;
    msg.state = 131U;
    msg.error.assign("PVVFLZBVGYOTAMWJHJXQZWKXGVBUUDTTWRBBRKANPCHFSZIIRNKAANOZLJHFHNGQEOAZVGTGXIHJXRWRCSVNGUKUBVEIZCASERIDTEZYAVNLPQQCVYVQSWYTUBIOQEKSMAJQFKNPIJZDMLDXKWYCXO");

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
    msg.setTimeStamp(0.60108309342);
    msg.setSource(10462U);
    msg.setSourceEntity(106U);
    msg.setDestination(60680U);
    msg.setDestinationEntity(174U);
    msg.origin.assign("BERYZFOJADBCGZRNNCAZYGSHXVEONQCNSTUDKRWYPJIQGYOIPHLNLLHRITOLQQYMJQBJRWECGKEUKSOINKGDUOTGEMWFDRHX");
    msg.text.assign("IODBTTHJCHKJROEVRKATZPISHEYVGPJDKJUURNCQOIODGFSUEILXVAHOFQMMAQCYANHUSQNBIOIXFGVGDRLTZBIPXDISMFAYZGIPQJTTFLSLRLLTYWNLGGXYUCJYZNLHBMBRZDVWYFWJTZMGHBCOWPWMVEUNWWZMEULASOPAKSCFHBWIKMTQUGHFNCOAKRYEKPQFGCBKXKHKYNNDJXXPLJCVVVRBDOZE");

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
    msg.setTimeStamp(0.733713063534);
    msg.setSource(8134U);
    msg.setSourceEntity(152U);
    msg.setDestination(37698U);
    msg.setDestinationEntity(189U);
    msg.origin.assign("IMVSOOADFHKHSVDWRNYOQKNVUIPEWRGDGNNCXJIZPZLANKXKOWBJERXHUOSJAPKBQTANMFGFJJFGHCXJGA");
    msg.text.assign("MRFJXUMFXKPXJKH");

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
    msg.setTimeStamp(0.365367114864);
    msg.setSource(12436U);
    msg.setSourceEntity(230U);
    msg.setDestination(44600U);
    msg.setDestinationEntity(75U);
    msg.origin.assign("HTTAHWYIDESGWOCJWUAGPRZBEXWDZEMXNTQXNDJYXZIPLNGDITJVRYKBNFVOPLOTSZAUASJ");
    msg.text.assign("KZLXEKHPUZWGQSQKZHPSDOLCBSJWLZOBBPBDJHFONACPGWCOYYCCAFIMYMWFPWULOULSOGXEULTXQQXOYRWSTMEEHHIBHAPVTDISIQVCTQMJTRFVVFRFQNFGKEVWTUEPJQJSNJYPZUGDIFCTXRMGUHSAALMKZXRYMZGNDWQMEKGNNVDIPBIYYBOFNMIIPULBRJLHOAGXDAARUJUCZVKTNSYVXCVRDWKEOZDWNHTFLVXARISGQCM");

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
    msg.setTimeStamp(0.242592830127);
    msg.setSource(61249U);
    msg.setSourceEntity(232U);
    msg.setDestination(29343U);
    msg.setDestinationEntity(243U);
    msg.origin.assign("JGMDXLKOBEVSKCGJMQUXEYHXZQRTMCDZPBMUZEAIIATYYPLQGRLCUSZEBBFJUOFZVGOOFWKTALCWCABXYFLQVAITIEMRDYVP");
    msg.htime = 0.563318165427;
    msg.lat = 0.349191334781;
    msg.lon = 0.350041170299;
    const char tmp_msg_0[] = {63, -117, 35, -27, 71, -101, -84, -110, -57, 85, 7, 12, 23, -41, -42, -92, 115, -112, 35, 79, 77, -16, 73, -71, 16, -45, -83, 25, -45, 25, -6, -103, -29, -84, 39, 61, -72, 81, -39, 3, 102, 84, 95, -83, 34, 36, 50, 26, -121, 37, 86, -97, -10, -68, -94, -110, 88, -54, 95, -80, -29, 114, 119, 29, 31, -13, -88, 9, -25, 33, 50, 12, -110, 31, -14, -77, -95, 32, -79, -107, 110, 25, 29, 17, 68, -58, 27, -23, 48, 22, -3, 50, 41, 40, -66, -16, -90, 28, -25, -76, -43, 53, -80, -93, -80, 97, 115, -55, -56, -88, -69, 13, -128, -23, -54, -61, 117, -56, -39, 119, -100, -56, 57, 51, -105, 66, -33, 104, 0, 16, -74};
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
    msg.setTimeStamp(0.294754946861);
    msg.setSource(51975U);
    msg.setSourceEntity(187U);
    msg.setDestination(16098U);
    msg.setDestinationEntity(119U);
    msg.origin.assign("QFQLNQLINAEXCFTHIHILLHBYMBEAAJRGSKJZKREVNBMKYEWVUDCVAFSSZBUWTKVUCPPXDNJYXADBKGHRIBYNWMJXZAJKGEZXYNWOWAGOEZTHRBOJWEEULDDQCLSOTMPEQDWTFUPSOIXVNPDHYFQHMFNQMAVFOCARCWRLB");
    msg.htime = 0.345497067313;
    msg.lat = 0.485317279621;
    msg.lon = 0.515879975676;
    const char tmp_msg_0[] = {122, -111, 63, 28, 10, 45, -122, -19, 69, 72, -22, -91, -109, 107, -99, 66, -1, -87, 117, 124, -87, -91, -34, -64, -79, -53, 71, -72, 84, 22, 44, -91, -10, -67, -34, -81, -45, -34, -122, -45, 86, -40, 49, 106, -55, -71, 44, 119, -87, -62, -39, -24, -75, -103, 53, 24, 119, -107, 126, -17, 73, 38, -84, 114, -59, -7, 34, -18, 66, 90, -91, -88, 96, 75, 5, 19, -29, -110, -27, 95, -73, -57, 82, -54, 35, -123, -120, -118, 105, -24, -27, -44, -42, 125, 42, -19, -65, -61, -75, -83, 42, 69, -126, 100, -47, 92, 108, 1, 114, 59, 39, -120, -112, 71, 16, -40, 105, 73, 2, 93, -16, -94, 0, -44, 25, 68, -117, 8, -105, -77, 11, -117, 126, 43, -24, -113, 30, 41, -122, 71, -36, -119, -105, -68, -25, 88, -112, -54, 110, 33, -58, -78, -120, -36, -24, -70, 10, -41, -8, 2, -96, -69, -17, -42, -92, -81, 106, -49, 42, -54, 106, -111, -47, 118, 90, -80, -124, 58, -101, -57, -6, -22, -25, -53, -82, -91, 19, -37, -104, -51, -47};
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
    msg.setTimeStamp(0.840399766581);
    msg.setSource(33650U);
    msg.setSourceEntity(248U);
    msg.setDestination(8123U);
    msg.setDestinationEntity(245U);
    msg.origin.assign("RNNUZNLKWOTULGGEXJCMNKBFSUVYXVFQRLXJIMITLZKFLFNSIIDZMAVAZCSLEDCBBAPJYIOAWSWZHRCZTHRKVVKAABKWYYRZUADJOXQSORLLGHQZPVSFBNTJXGHAMPTJBGQFROBQFDBIGQW");
    msg.htime = 0.303301876988;
    msg.lat = 0.79336533059;
    msg.lon = 0.350199817881;
    const char tmp_msg_0[] = {-85, 32, -103, 115, -76, -125, -58, 37, -117, -46, -103, -70, 71, -46, -21, 69, 15, -99, -103, -116, 114, 118, -99, -123, 3, 53, 94, -126, -57, -86, 93, -122};
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
    msg.setTimeStamp(0.21388557102);
    msg.setSource(42861U);
    msg.setSourceEntity(12U);
    msg.setDestination(54389U);
    msg.setDestinationEntity(145U);
    msg.req_id = 9746U;
    msg.ttl = 19759U;
    msg.destination.assign("UHDOEXCOAYGFGTLAMAXPHHWVTDKGDOMYFKVREXJFBHQNOHPCZIEZBAKRBCALVLMWLPMWSTGCZJQWPYIXNUKUQRZBOFFHAENMVYEONJWSWLYSIVIXVDPKCMWRHGNLDMRJPDPDUGUTATDSPVAJMJOFITURWXGDKBRISGRWSHQOZMIECJRVCAKJQAEQOYCZSNXQBNCBZFEQZUSDNUYORZ");
    const char tmp_msg_0[] = {-56, -111, 59, -89, 69, -124, 20, 8, -32, 19, -72, 106, 72, 28, -9, 42, 62, -39, -121, -8, -52, 17, -52, 75, 44, 85, -52, -41, 16, -54, -83, -4, 55, 47, -96, 99, -35, 5, -64, -69, 122, -9, -15, -99, -47, -110, -97, -18, -53, 92, 13, -53, -42, 111, 18, -96, -69, 111, -110, 55, -16, -94, -26, 81, -109, -91, 34, -11, 68, -77, -12, 14, -77, 74, 10, -83, 125, 74, -40, 112, 101, -32, -77, -92, 46, -74, 86, -60, -41, -87, 101, -71, -115, 79, 19, 0, 92, 72, 101, -83, -80, -34, 102, 53, -61, -44, -121, 35, -36, 8, -30, -99, -80, 85, -32, -40, 12, 66, -82, 90, -17, -60, -107, 59, 18, 51, 101, -27, 95, 102, -100, -101, -86, 16, -14, 96, -35, 74, 41, -114, -111, -122};
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
    msg.setTimeStamp(0.588155609528);
    msg.setSource(47367U);
    msg.setSourceEntity(118U);
    msg.setDestination(31198U);
    msg.setDestinationEntity(195U);
    msg.req_id = 61880U;
    msg.ttl = 42768U;
    msg.destination.assign("VXKPSQTYHAJIUCNYUZPKNEYKDPIPNRHBRAOZHZYJYEVSNFLAOUGBMLCVUZXXKMXHRSWNKEGREVGQKMCB");
    const char tmp_msg_0[] = {46, -41, 103, 51, -112, -48, -42, 36, -96, -27, 42, 96};
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
    msg.setTimeStamp(0.477924373152);
    msg.setSource(21887U);
    msg.setSourceEntity(139U);
    msg.setDestination(51315U);
    msg.setDestinationEntity(229U);
    msg.req_id = 51312U;
    msg.ttl = 5206U;
    msg.destination.assign("CPAUKWGHTIJNUQETXOWNT");
    const char tmp_msg_0[] = {118, 93, -31, -53, 75, 107, -87, -97, -29, 10, -96, -125, 98, -69, 11, 42, -57, -77, -115, 78, 45, 57, -92, -78, 9, 99, -30, -74, -45, -35, -88, -62, 23, 58, 30, 36, -52, -71, 59, -34, 55, 47, -119, 9, 103, -73, 109, -90, 26, 78, -26, 87, 57, -125, -15, 55, 36, -70, 80, -119, 6, 50, 90, 103, 58, 28, -95, -120, -20, 116, -111, 61, -55, -118, 97, -5, -90, 64, -30, -19, 101, 12, -61, 62, -42, -74, -56, 68, -62, 24, 126, -72, -56, 3, 98, -60, 102, 8, -29, 11, -3, 100, -53, 58, 101, 12, -23, -117, 27, -99, -111, 81, -67, -7, -2, -125, 20};
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
    msg.setTimeStamp(0.00796915494438);
    msg.setSource(32013U);
    msg.setSourceEntity(178U);
    msg.setDestination(16928U);
    msg.setDestinationEntity(229U);
    msg.req_id = 36518U;
    msg.status = 168U;
    msg.text.assign("IPCKNEUWZCHOAIYTIOYCWYRHBIJFNRCFPQZQUFVUUMOZPGSBYOCIIXJBQBNSRWECDFUCGBHDZMFMDVKWQQJAGZJRIDNVQSIACPPWCRGZKTSZKAVUNPYFPWSTVHEIJUVRLTTMXATWAPNMKDQXOOLONWCAMQGEMOKYFJQKSVJLUNZEAFBGROXLBRLOTJZPXEMXHBXEZGDGRYSUWDXFNDVGBKKAWIEMBFXSYEYKSGYJHPLHVARTDNJLTVLTMDSL");

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
    msg.setTimeStamp(0.77810789692);
    msg.setSource(11391U);
    msg.setSourceEntity(73U);
    msg.setDestination(20356U);
    msg.setDestinationEntity(79U);
    msg.req_id = 23525U;
    msg.status = 114U;
    msg.text.assign("IYMAFADWXKRKSNNDKTYEBRHEFAVNABZROVQPPZHLPHJYIOUZTBYWZSWGCAVMOKKXPFRRXUGXTOHLINNWSTDOAYJQLWVECINFHJODFBGISPUWXJXFLQUSDACRVHKQCBSHSBNFRJGVVBXPHJEGMYPDULTIATMZLO");

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
    msg.setTimeStamp(0.0465345922898);
    msg.setSource(48600U);
    msg.setSourceEntity(2U);
    msg.setDestination(31601U);
    msg.setDestinationEntity(242U);
    msg.req_id = 20321U;
    msg.status = 124U;
    msg.text.assign("BQOJLJSSEWSKRATOYHLEMLMGPQTZBCENFI");

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
    msg.setTimeStamp(0.240391223794);
    msg.setSource(21603U);
    msg.setSourceEntity(208U);
    msg.setDestination(39837U);
    msg.setDestinationEntity(238U);
    msg.group_name.assign("PTNXMPYPMBRIOQOJKARDRUADTCBKDUCRDYFNYQYEIGJVGAATFHITHVUADLKKIXWUMZQWFACPWLXFYHVUVOVKXDYZPYNHRQO");
    msg.links = 2601366851U;

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
    msg.setTimeStamp(0.542539674583);
    msg.setSource(21385U);
    msg.setSourceEntity(204U);
    msg.setDestination(54560U);
    msg.setDestinationEntity(66U);
    msg.group_name.assign("IRJPESKVJVDIATYURQNDGGGSFMFNRXMLARXFBUDCFZC");
    msg.links = 306385697U;

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
    msg.setTimeStamp(0.563658772911);
    msg.setSource(59812U);
    msg.setSourceEntity(136U);
    msg.setDestination(30672U);
    msg.setDestinationEntity(223U);
    msg.group_name.assign("JAMXPRGDHTABNUTADR");
    msg.links = 2067193976U;

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
    msg.setTimeStamp(0.186863552261);
    msg.setSource(1723U);
    msg.setSourceEntity(181U);
    msg.setDestination(38248U);
    msg.setDestinationEntity(138U);
    msg.groupname.assign("PZCQIFPSHBJZNUUZYCLTXKQBZWAQBHOJGADXDNRNPWPVIVJDSUKFGFIMWZGSAGAJLTKTXMNPHUCNACTGGGTIXOSWJCXNPVAZLADSWRESRYRULTWQWVJDPMOKGTIMRWSUOVRLEPMEBDHKMYGYIKVOKJXXOQBLEDZZBMENQBQMAJOEFYYIFRWQBSNTEUADYVOHLPXTSFJTCMCREKWXUCRDVFHBNYQCJEVLMF");
    msg.action = 13U;
    msg.grouplist.assign("TYNNAZQZJZIMCTKQZUECJABSOTCDFPJBZYUPKDDTVSWYXNKCLFRLUJUMHBTPMCGFEEAJPGSWTEOSJHZKDRXDTBXXLIVXMNIMGNHSFJDPMOQLPQITBOREDZKCSXNILDHUNEBOYZYCEHWXIWTKHUFQSXUGZOWNLSHUZNFUGEIBOAJIQQWRFGHO");

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
    msg.setTimeStamp(0.557422225376);
    msg.setSource(10496U);
    msg.setSourceEntity(170U);
    msg.setDestination(48530U);
    msg.setDestinationEntity(143U);
    msg.groupname.assign("MZRWINBPXNWWZHLJWNTKCYXDMZKERMZBXINXQTVERICYVHGDDXIYNZWSPSLGOHUVRNSQICEEYHKZARMHMBWYAUIMOQWBIMSXBOHDXGEUCAFLWEUUUQDBKJSDOULFSDOYCDFZTJXPEVUICNOARTPWY");
    msg.action = 13U;
    msg.grouplist.assign("HTIOYFWUGDCOAUHYPONHDQBSGQMSZHJCPJYLDZVFLKUXEDELNSURRQHBXWGRWSJDRKZNPXTLZWKFKVTHDCNEOOCKB");

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
    msg.setTimeStamp(0.0673487645746);
    msg.setSource(40378U);
    msg.setSourceEntity(238U);
    msg.setDestination(28272U);
    msg.setDestinationEntity(219U);
    msg.groupname.assign("VEORPDOCHQINPTPVJWGAVFNGARCYQOVMHFBCDWIXCZVWAQVEAHEJROAZUWOKCNAXOKMUDBUYRKKSWLOHDWXJOBAENUDBZLXHRZSWSYXQZLPIEBBYFSUBRZNPXPTMTJPCLIWDUMELTTQYHXCSGGMVJRTCZZSFBQKMRFKHJNLSIKUTDKURFXGYMYE");
    msg.action = 191U;
    msg.grouplist.assign("JJRSVAMNUOQWTLJRXMQLITRFNFFUYHYLKRRSFQIMDEUEXPAWBBGSJTBAUQPTDC");

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
    msg.setTimeStamp(0.519351230691);
    msg.setSource(808U);
    msg.setSourceEntity(101U);
    msg.setDestination(8922U);
    msg.setDestinationEntity(242U);
    msg.value = 0.332406539673;
    msg.sys_src = 39679U;

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
    msg.setTimeStamp(0.1469400833);
    msg.setSource(2564U);
    msg.setSourceEntity(16U);
    msg.setDestination(10404U);
    msg.setDestinationEntity(251U);
    msg.value = 0.595569888341;
    msg.sys_src = 19259U;

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
    msg.setTimeStamp(0.609935695806);
    msg.setSource(27079U);
    msg.setSourceEntity(181U);
    msg.setDestination(36248U);
    msg.setDestinationEntity(195U);
    msg.value = 0.0154347626214;
    msg.sys_src = 52668U;

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
    msg.setTimeStamp(0.492775990238);
    msg.setSource(63350U);
    msg.setSourceEntity(211U);
    msg.setDestination(34468U);
    msg.setDestinationEntity(22U);
    msg.value = 0.566108768242;
    msg.units = 207U;

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
    msg.setTimeStamp(0.72912178293);
    msg.setSource(50376U);
    msg.setSourceEntity(210U);
    msg.setDestination(52046U);
    msg.setDestinationEntity(65U);
    msg.value = 0.446412198856;
    msg.units = 28U;

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
    msg.setTimeStamp(0.164286668735);
    msg.setSource(52786U);
    msg.setSourceEntity(6U);
    msg.setDestination(38715U);
    msg.setDestinationEntity(219U);
    msg.value = 0.158823201449;
    msg.units = 162U;

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
    msg.setTimeStamp(0.268762213508);
    msg.setSource(21019U);
    msg.setSourceEntity(186U);
    msg.setDestination(58624U);
    msg.setDestinationEntity(44U);
    msg.base_lat = 0.939689809019;
    msg.base_lon = 0.177623921385;
    msg.base_time = 0.466076394337;

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
    msg.setTimeStamp(0.688485360213);
    msg.setSource(34053U);
    msg.setSourceEntity(199U);
    msg.setDestination(53811U);
    msg.setDestinationEntity(146U);
    msg.base_lat = 0.73757897289;
    msg.base_lon = 0.154027485823;
    msg.base_time = 0.129603385259;

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
    msg.setTimeStamp(0.563246878681);
    msg.setSource(42821U);
    msg.setSourceEntity(86U);
    msg.setDestination(24079U);
    msg.setDestinationEntity(165U);
    msg.base_lat = 0.187273254334;
    msg.base_lon = 0.131322037684;
    msg.base_time = 0.102154692278;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 13426U;
    tmp_msg_0.priority = -83;
    tmp_msg_0.x = 30006;
    tmp_msg_0.y = 30733;
    tmp_msg_0.z = -15029;
    tmp_msg_0.t = -10624;
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("DLFJKCBQZMBIDZXTZGXSPXAQJVRUYHXYBTVFAHYIFDOHXNTSFSQNYCJMKBZAOFUVCSXTJHQLNCWUYWQLOEFUMNQEJMVELDBWKINZAQSEOGBXYZK");
    tmp_tmp_msg_0_0.dest_man.assign("ZXYYSMPREFMFDVSKSYDLFCRIPDEWXJDJACAKIZNQOCUEJPIKKWEYBXVTFUSCWQAWYLOTQ");
    tmp_tmp_msg_0_0.conditions.assign("UABRNIPFJMUJFDIKQNWPKBHZFAVYUDXLRHUQNBIEZPWLYQTGXJHKGIMYJWFYLPEMMIGQFSJOWQQOTWBOOQIWHZNYYEATSNRNFNYVHDSJHBTKDJXGMSLNXEVDUXUUCGUXQLMGJGMRX");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.342444478192);
    msg.setSource(8921U);
    msg.setSourceEntity(135U);
    msg.setDestination(26645U);
    msg.setDestinationEntity(129U);
    msg.base_lat = 0.676451589114;
    msg.base_lon = 0.397193818068;
    msg.base_time = 0.04400322452;
    const char tmp_msg_0[] = {20, -7, -115, -2, -106, -120, 121, -57, -75, -14, 124, 105, 58, -64, -11, -52, -12, 98, -15, -24, 2, -22, 68, 81, 72, -95, 91, 111, 90, 54, -44, 79, -91, 58, 55, -8, -50, 72, -108, -73, 47, -91, -105, 106, 58, 116, 24, 87, -52, 83, 35, 31, -64, -16, -93, -85, 12, -111, -41, 71, -124, -39, -35, 32, 52, -126, -6, -1, 70, -89, 40, -116, 53, 69, -64, -51, 125, 14, 43, 11, 115, -103, 53, -9, 67, 87, -48, -119, 86, 86, 19, 81, 69};
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
    msg.setTimeStamp(0.0257660437671);
    msg.setSource(14547U);
    msg.setSourceEntity(118U);
    msg.setDestination(30621U);
    msg.setDestinationEntity(234U);
    msg.base_lat = 0.929196346317;
    msg.base_lon = 0.466525631438;
    msg.base_time = 0.327101062149;
    const char tmp_msg_0[] = {-125, 3, -85, -97, -38, 63, 119, -90, -44, -128, 100, 83, -11, -116, 95, 70, -44, -83, -74, 0, -50, -15, -92, 125, -36, 111, -37, -107, -88, 116, 2, 65, -83, 54, -9, -84, -109, 104, 45, -65, 60, 27, 3, -69, -123, -59, 25, -54, 92, -10, 32, 37, 23, -21, 104, -9, -51, -45, -7, 43, 50, -109, -23, 41, 32, -86, 100, -103, 95, -113, 119, 6, -43, 35, 118, -96, 75, -15, -51, -25, -50, 63, 116, -69, 30, 104, 30, 28, 123, -120, 40, 112, 31, -36, -100, -33, 93, 25, -22, 34, -111, -13, 73, 97, 42, 15, -79, -74, 32, -94, 5};
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
    msg.setTimeStamp(0.978221050876);
    msg.setSource(35416U);
    msg.setSourceEntity(190U);
    msg.setDestination(34535U);
    msg.setDestinationEntity(155U);
    msg.base_lat = 0.594433268513;
    msg.base_lon = 0.754540188117;
    msg.base_time = 0.0781811249335;
    const char tmp_msg_0[] = {-87, 10, 48, 105, -20, -53, 31, -106, -113, -109, 72, -77, 29, -88, -5, 95, 64, 117, -80, 115, -45, -20, -93, 64, 46, 57, 123, -2, 125, 77, -85, 97, -95, 123, 41, -54, 96, -53, 75, 42, 125, -70, 61, 48, -41, 70, -26, 37, 125, -97, -39, -69, 35, -114, 49, -75, 97, -71, -4, -53, 53, 3, -22, 104, -125, 104, -47, 64, 50, 21, -23, -31, 95, -33, -86, 31, 44, 99, 97, 105, -68, 62, 68, 80, -63, -63, -96, -67, 102, 69, 41, -25, 18, 103, 98, -12, 1, 105, 112, -71, 114};
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
    msg.setTimeStamp(0.979193722867);
    msg.setSource(55101U);
    msg.setSourceEntity(219U);
    msg.setDestination(45165U);
    msg.setDestinationEntity(28U);
    msg.sys_id = 30190U;
    msg.priority = 12;
    msg.x = 25902;
    msg.y = 27628;
    msg.z = 12963;
    msg.t = -32276;
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 596222470U;
    tmp_msg_0.value = 23U;
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
    msg.setTimeStamp(0.474408644499);
    msg.setSource(3731U);
    msg.setSourceEntity(145U);
    msg.setDestination(52726U);
    msg.setDestinationEntity(64U);
    msg.sys_id = 16397U;
    msg.priority = 96;
    msg.x = 10136;
    msg.y = -16936;
    msg.z = 8998;
    msg.t = -27916;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 57U;
    tmp_msg_0.entities.assign("XLOSAOFRBWURPWOZQCXWRMNRPNBZYNAJNQPNDWOENHXTUAFHI");
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
    msg.setTimeStamp(0.0407073111679);
    msg.setSource(58245U);
    msg.setSourceEntity(207U);
    msg.setDestination(56482U);
    msg.setDestinationEntity(134U);
    msg.sys_id = 38418U;
    msg.priority = 45;
    msg.x = 4473;
    msg.y = 30035;
    msg.z = -10281;
    msg.t = -7823;
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.291518427647);
    msg.setSource(56307U);
    msg.setSourceEntity(149U);
    msg.setDestination(37136U);
    msg.setDestinationEntity(250U);
    msg.req_id = 18016U;
    msg.type = 113U;
    msg.max_size = 47324U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.314969913843;
    tmp_msg_0.base_lon = 0.93864317871;
    tmp_msg_0.base_time = 0.965011569269;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 50111U;
    tmp_tmp_msg_0_0.priority = -39;
    tmp_tmp_msg_0_0.x = 26479;
    tmp_tmp_msg_0_0.y = -16564;
    tmp_tmp_msg_0_0.z = -14162;
    tmp_tmp_msg_0_0.t = 10186;
    IMC::Phycocyanin tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.412125077511;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.541805814446);
    msg.setSource(48640U);
    msg.setSourceEntity(63U);
    msg.setDestination(8966U);
    msg.setDestinationEntity(54U);
    msg.req_id = 51528U;
    msg.type = 166U;
    msg.max_size = 10315U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.220886981661;
    tmp_msg_0.base_lon = 0.496866563617;
    tmp_msg_0.base_time = 0.760829915593;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 14885U;
    tmp_tmp_msg_0_0.destination = 40425U;
    tmp_tmp_msg_0_0.timeout = 0.250273315271;
    IMC::CompressedImage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.frameid = 83U;
    const char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {110, -93, -61, -16, 24, 95, -90, 84, -14, 126, 126, 14, 95, 95, -95, -96, -77, 34, -2, 84, 81, -72, -108, -10, 20, -122, 48, 86, -113, -101, 61, -22, -66, -40, 107, 36, -119, 20, -127, 74, 14, -41, 49, 77, 30, 69, -30, 70, 89, 3, -104, -5, -50, -115, 39, -68, 120, -9, -124, -10, -22, 114, 95, -105, -9, -104, 26, 94, 63, 60, -32, 19, 110, 109, -37, 5, -74, -28, 23, -79, -106, -75, 93, -12, 125, 87, -34, -93, 33, -105, 80, 109, 14, -5, -110, -78, -14, -118, -27, -115, 117, -77, 89, 124, 122, 15};
    tmp_tmp_tmp_msg_0_0_0.data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.692900938157);
    msg.setSource(5881U);
    msg.setSourceEntity(74U);
    msg.setDestination(9148U);
    msg.setDestinationEntity(217U);
    msg.req_id = 15408U;
    msg.type = 74U;
    msg.max_size = 25991U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.512788538324;
    tmp_msg_0.base_lon = 0.113699816205;
    tmp_msg_0.base_time = 0.777260263022;
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
    msg.setTimeStamp(0.0561759492088);
    msg.setSource(22737U);
    msg.setSourceEntity(198U);
    msg.setDestination(3511U);
    msg.setDestinationEntity(111U);
    msg.original_source = 13425U;
    msg.destination = 14128U;
    msg.timeout = 0.135422186133;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 18391U;
    tmp_msg_0.lat = 0.529288880524;
    tmp_msg_0.lon = 0.28627174842;
    tmp_msg_0.z = 0.386492051444;
    tmp_msg_0.z_units = 117U;
    tmp_msg_0.speed = 0.0849196844964;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.roll = 0.337809412662;
    tmp_msg_0.pitch = 0.740090704828;
    tmp_msg_0.yaw = 0.250652186919;
    tmp_msg_0.custom.assign("RRUGQJYPTGHNBWBPZDAYPVAECYEDIICGVAVNHVSDFKTYCOZOELYPPKXWVZENJYKGXKOBYBZWONGZJDWEARHPSYUOPXTFGHUYIUXXRKJTIICGLOMQLOQJUBGDQMLNQMXPHAUKFQSFGFQSEKRFERNSKACQIQELSLLAUINUVZPRWZWTTBZBDLVTZLMQREFRPSTNJWWFVZDJBOULXWMAEYDBJJCKHVXOTCUXCOMISDMHATFFGCXB");
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
    msg.setTimeStamp(0.850234105897);
    msg.setSource(37104U);
    msg.setSourceEntity(145U);
    msg.setDestination(13201U);
    msg.setDestinationEntity(64U);
    msg.original_source = 36472U;
    msg.destination = 1938U;
    msg.timeout = 0.764702967362;
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("EVFGSKQREZXLBKNYOASAEMLSGZKORRAPMEIJOOUGOCAOSKNWOHMMUJEJRINDPHNTCXFENADYTCVDSLTFGMPLZWITDDUDQHEZJHMVTQDVCJJJNYGNJFBVWJEYLLFWYWZMWD");
    tmp_msg_0.attr_type = 194U;
    tmp_msg_0.min.assign("BIBZZPHEKZXKKWKQXOVYIJFYHSNMXRWGLZAQQ");
    tmp_msg_0.max.assign("NGHMFLUIWINJDORTYVDHPGBGUHCKUIDUEJRGIZXMWAJREILTDA");
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
    msg.setTimeStamp(0.883413212333);
    msg.setSource(15883U);
    msg.setSourceEntity(223U);
    msg.setDestination(20023U);
    msg.setDestinationEntity(105U);
    msg.original_source = 1715U;
    msg.destination = 47661U;
    msg.timeout = 0.0308819298141;
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("YEFBXTOWPGAGHEQNIDOFUSHRQNWGKXKEMAHTQOACUYHEHRSQWBMNEFZQJJGLROHRSZCKZZBYYJHMDXIDXSIUWZXWIRLBVHLINAOFYYAGRDCBPZBOLPCANQDEETCXOCQIBFFEIDMDVSSPTYUUZWEFGKXCJCJTPONMCUPYWNEKIUDDSAFSTQLLVLJPCOKMSGRAXGLXZVZBPXVUKNRHANMUKVWYWJHMTMTGJJVVKGRILBVIKNOQR");
    tmp_msg_0.sys_dst.assign("VSVGJNXIBMAXMUHFOIGAKOCFWPMAYETPUQRZYZEJKQG");
    tmp_msg_0.flags = 120U;
    const char tmp_tmp_msg_0_0[] = {-112, 11, -49, 66, -56, 107, 27, 26, 91, -59, 102, 89, -66, 115, 34, 68, -117, 51, 113, 124, 9, 107, 123, -66, -3, 100, -104, 110, 0, -125, 67, 77, 112, -88, 32, 44, -106, 64, 58, -110, 84, -27, 78, 37, 105, -77, -60, 6, -33, 61, 114, 37, -2, -84, 116, 59, -70, -43, -21, 2, -116, 30, 36};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.839893629617);
    msg.setSource(18837U);
    msg.setSourceEntity(239U);
    msg.setDestination(58146U);
    msg.setDestinationEntity(80U);
    msg.type = 63U;
    msg.comm_interface = 53511U;
    msg.model = 15711U;
    msg.list.assign("LKBXQZKYZNKOVARABYALXUFQTYENIREMTZOHCXDRYMHPTQYTBYGONQEPROCIAOSBJJZRHOBBJLTHMFFMDIVKCCTPJKOIJHSNYTVWKGKSMIBUMMDWKLERFBSPXQIEWQHZAWUSSSXZZDUZLAOQWHOYHQNDJEWWLRXSFVVEBFJKCAIGDNTNRXVDLEJLYLGZUCSWYOXGLPREWDJRSDMAUVGMGGNCEMGGHXVVFTVUUAPFIDQ");

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
    msg.setTimeStamp(0.158500745728);
    msg.setSource(20139U);
    msg.setSourceEntity(67U);
    msg.setDestination(37307U);
    msg.setDestinationEntity(21U);
    msg.type = 72U;
    msg.comm_interface = 27154U;
    msg.model = 15071U;
    msg.list.assign("CWGLIOZJAUKDVRETQPKRWKDJZIYKCVTNXLQFJIUAPUWZNGSNHFTKNZZDRCTMMDAJDYHQMEVOISMNFPELLYRFJBTXBNKPCRKLJXKHZBAUDUPXDFUEVMZQGHIDVSWTHLFHDWNUQMWZMCVRBGJSJYCEPEUXKCMYAPGAPHQHBRGOO");

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
    msg.setTimeStamp(0.762796681818);
    msg.setSource(8319U);
    msg.setSourceEntity(154U);
    msg.setDestination(51461U);
    msg.setDestinationEntity(25U);
    msg.type = 247U;
    msg.comm_interface = 29194U;
    msg.model = 22208U;
    msg.list.assign("VKSLZBYOJSGMUWUELVDJENHSEZVATKLXTOUGOYEKVCRHMSYQOTXPZHCEZKFRQQYNZDPSVEBKFISBLUDCJDTTAUXGZVDATAFSRYQUXJMNXNOASGDPBZDERVKVBAGTMIODCGDTWXMKWEHUDGCPFUWRIMJYPNKQTMKIYLBWFBHWIHQPNXJIPYPAMFYVEMARIUJUXLXJMQFOHOINILJLEPAAO");

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
    msg.setTimeStamp(0.377847352011);
    msg.setSource(7037U);
    msg.setSourceEntity(13U);
    msg.setDestination(18716U);
    msg.setDestinationEntity(195U);
    msg.type = 211U;
    msg.req_id = 3227195707U;
    msg.ttl = 9479U;
    msg.code = 143U;
    msg.destination.assign("HBJNZITLKXDRRCCCAMHRPYLFPXHINROWLJWJDHPOQDVNZRJGTWESUITBLTUWCRVFVXZAPJYMREHXOOSGWGNLSTFZKNSSTRRUKMKXDQOQMAWXZIAJQPIIKJSOEOIWWVLAUCKLLAVFEMYKWGVBFPHRYBOYNBQUQNOLYHQXUYHUVFSDNTCADM");
    msg.source.assign("MDNVHQTERGEFUUCUIAAQWMPKWKVPCDQOCKFSLOABIETDJLGWHSZOYVQDOWQOXZGHNPACKUGDGABNIJSRLQXVVHQKZSQDXTAPNIEBIZRRXNIMZCFMYJVUPTHFAYLXCZ");
    msg.acknowledge = 95U;
    msg.status = 223U;
    const char tmp_msg_0[] = {-17, -113, 38, -105, -23, -96, 101, -108, -116, 70, -25, -84, 28, 118, 34, -23, -125, -70, 72, -41, -82, -100, -28, -124, 35, 27, 95, -108, 124, 66, 119, 116, -16, -63, -122, -72, -79, 102, 40, 3, -86, -90, 91, -69, -106, 77, -87, -61, 33, 24, 31, 15, 123, -88, -82, -23, -55, 105, 67, 65, -97, 124, -126, -41, 125, 125, -50, -17, -105, -95, 109, -79, 24, -18, -100, 100, -8, -10, 27, -38, -95, 17, 122, -49, -68, 36, 103, 30, 46, 35, 5, -102, 86, -57, 93, 22, 102, 120, 12, -7, -85, 53, 105, 88, -10, -43, 64, 96, -126, -57, 80, 8, -64, 5, 62, 10, 60, 55, 94, 117, -13, 112, 115, 25, -32, -111, -87, 64, -100, 76, -75, -84, -122, 5, -52, -124, 96, 89, -36, -86, 33, 15, 79, -23, 83, -26, -41, -83, -112, 83, -21, -58, 87, 16, -93, -95, 36, 32, -29, -47, 73, -88, -5, 112, -97, 95, 126, -90, 100, -68, 58, 28, 39, -37, 88, 3, -71, -2, 85, -30, -48, 105, -25, 33, -80, 3, -41, 78, -81};
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
    msg.setTimeStamp(0.243320140538);
    msg.setSource(64147U);
    msg.setSourceEntity(237U);
    msg.setDestination(2843U);
    msg.setDestinationEntity(1U);
    msg.type = 57U;
    msg.req_id = 3282693643U;
    msg.ttl = 17961U;
    msg.code = 61U;
    msg.destination.assign("YMGPXRQESTLIPIMYHDSBGKYXTNGEMVGZAEYFTUXABHXXBFIICCXEKODJPLWXFLEHPWOFTYAWDKCZJCQFHQEZLISLPAUBMGNEWCZIBRRLHMNXZQUVOTSOELVUQNWCGUNCWAAWIQDTPABSBVRKFKTGZUJKJYRXYVJBVJDZHVITSIDWRQVCGXVUMPORBNTRWAOYSBLNLK");
    msg.source.assign("WXBHDXVJRIWUTSTZJLCOAUXHCPXORFKRLQJPETCCQBSPFYRZHLNWQKCQBZPJMVKNGAFSLWZPCXSHHLAULICFMRGVDGKUSLTONWEAJGDSRBMHEXDJOZJWDUZWYYORVNPNUMJQIGILCIHBIRVABNTMPNSQHXJXDUBWQZDGODCTEFGYOKAJITEATHNMVKMUQRQFPLYXFZEXCKYUITADSVDOVZMWBGOWRFEAIYYQENTKEAYYKFMLPZNSEUBSIGMP");
    msg.acknowledge = 106U;
    msg.status = 75U;
    const char tmp_msg_0[] = {-88, -127, -86, -86, 123, -38, -88, 59, 77, 110, 3, -45, 48, 0, 11, 110, -103, 117, -20, -114, 49, -5, -117, -75, 49, -98, 37, 13, 116, 123, 100, -14, 95, -19, -73, -66, 88, -77, -62, -68, 46, -6, 121, -22, 110, -109, 9, 18, 27, 52, 108, 66, -93, 50, 20, -60, -118, 71, 97, 25, -37, -81, -12, 103, 60, -110, -116, 33, 77, -29, 6, 41, -1, 55, 81, -9, 56, 60, 68, -127, -34, 69, -53, 67, -42, 2, -120, 120, 67, 14, -64, -7, -98, -105, 95, 100, -9, 23, 76, 119, 56, 12, 78, 69, 44, -21, 39, -127, -122, -24, 100, 27, 52, 49, -38, -51, -109, -39, 45, 22, -106, -122, 90, -86, -63, 10, 35, 34, 90, -77, -66, 41, 115, -76, 78, -119, -8, 53, 16, 77, -106, 10, -95, -36, -104, -41, -34, 35, -43, -67, -9, -72, 60, 60, 102, 28, -108, -1, 17, -77, -113, 82, -46, -89, -84, -115, -99, 82, -76, -123, 64, -91, -32, -29, -115, 8, 65, -55, 35, 72, -90, 5, -45, -104, 46, -81, 6, -97, -10, 59, 114, 85, -128, 77, -95, -63, 69, -98, -12, -100, 68, -5, 94, 97, 100, -10, 91};
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
    msg.setTimeStamp(0.676408511823);
    msg.setSource(30634U);
    msg.setSourceEntity(179U);
    msg.setDestination(47443U);
    msg.setDestinationEntity(109U);
    msg.type = 191U;
    msg.req_id = 844821991U;
    msg.ttl = 16936U;
    msg.code = 121U;
    msg.destination.assign("RRBZRQYOTZALIUCKGIKAYMIYKGSTXGILUONGELPZIWLZSYPEJENFHDUEXKBBACOVKFDEDOUVWWSCUVVALKSAQAIWCATSBXUQVDHLGBUQNSFHGEXDTJPMJHOLFRAFDGNVARIBPUWQBJBZWOQNGXYYRRUDHZVMMCCSQENWSPDTTMCBXVLSXPLZQOQLTYYIENTOQGEKGFJADVPMFXEVFTCCWKNJPDOYHJMNOJKRMFHXHF");
    msg.source.assign("VIELDNTCNMVPZNATTSBTAZXMTXDMEDYUNTVLWZLYSTPXIHNJGVAQGODCDZYKFKHROKRMVANWLACEFQYBGJAVHDSRIUTCZIIKHSROSPOBUKVAAYVWRNWEJQWHXXJOQJZXSQBFFRFMIBOEJEAPUBZPXFLEGWRDYPECMNWGZLYCUFOHVKDLIHSYFYLBBUQQNQNPMBHOTGPPHYGOKJERWIDTLMASHCOJUJRRFFBKCM");
    msg.acknowledge = 144U;
    msg.status = 153U;
    const char tmp_msg_0[] = {-34, -103, -109, 102, 65, 104, -26, 113, 17, 31, 18, 82, -48, 25, -116, 85, 103, 93, 89, 80, -70, 39, 84, 68, 1, 121, -13, -30, -39, 86, -85, -10, 116, -32, 43, -63, -89, 41, 107, 86, 52, 36, 26, -59, 40, 94, -83, 97, -50, -115, 56, 37, 120, 26, -60, 58, 122, 123, -19, 91, -69, -77, -98, -59, 48, 36, -93, -38, -91, -83, 48, -115, 2, 52, 66, 19, 70, -36, -47, -78, 119, -119, 91, -7, 33, -18, -43, -110, 29, 75, 124, -85, -104, -38, 98, 23, -48, 43, -91, -37, 43, -72, -16, 91, 82, -121, 53, -70, 104, -73, 55, 22, -59, -126, 37, 114, -90, -78, -118, -119, 74, 93, 42, 61, -18, -70, 50, -108, 52, 66, 17, 19, -28, -64, 84, -40, 75, 21, 87, -13, -61, -59, -93, 63, -64, 23, -29, 44, -63, -81, -123, -89, -89, 110, 90, 120, 32, -14, -97, -25, -73, -119, 114, 35, -120, -47, -90, 36, -38, 79, 66, 25, 121, 82, 42, -102, -63, 95, 25, 66, 27, 84, -27, -112, -39, 48, 84, 72, 39, 114, 102, 15, 91, -36, 93, -105, 108, 69};
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
    msg.setTimeStamp(0.200697652517);
    msg.setSource(53488U);
    msg.setSourceEntity(69U);
    msg.setDestination(37201U);
    msg.setDestinationEntity(146U);
    msg.id = 49U;
    msg.range = 0.156288333754;

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
    msg.setTimeStamp(0.983563945222);
    msg.setSource(19535U);
    msg.setSourceEntity(105U);
    msg.setDestination(50079U);
    msg.setDestinationEntity(244U);
    msg.id = 85U;
    msg.range = 0.211374579239;

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
    msg.setTimeStamp(0.69101226441);
    msg.setSource(10363U);
    msg.setSourceEntity(212U);
    msg.setDestination(47777U);
    msg.setDestinationEntity(66U);
    msg.id = 244U;
    msg.range = 0.914249631606;

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
    msg.setTimeStamp(0.933954896566);
    msg.setSource(49442U);
    msg.setSourceEntity(124U);
    msg.setDestination(41645U);
    msg.setDestinationEntity(53U);
    msg.beacon.assign("VRZFBWARTOLVTPPGVNZKGASNIECWZDDGFUROMJTFJWPGOLMMETEPMPEZDOAYZSIAFWCNULUDKNNHHGYBMQIOJOVSSEHROZGHRUWFMVHNMKHEIHXTYNAUASTJ");
    msg.lat = 0.692223923988;
    msg.lon = 0.577572032691;
    msg.depth = 0.54525720243;
    msg.query_channel = 18U;
    msg.reply_channel = 248U;
    msg.transponder_delay = 155U;

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
    msg.setTimeStamp(0.0484532709536);
    msg.setSource(19342U);
    msg.setSourceEntity(105U);
    msg.setDestination(43675U);
    msg.setDestinationEntity(193U);
    msg.beacon.assign("WTCKUQHGHKHBIKXPPLBGSNYHDAEVDGCTIEVEXYKEQDKRKVLALOCGOUBJ");
    msg.lat = 0.55103562523;
    msg.lon = 0.315796119417;
    msg.depth = 0.263597398545;
    msg.query_channel = 122U;
    msg.reply_channel = 152U;
    msg.transponder_delay = 124U;

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
    msg.setTimeStamp(0.244618782157);
    msg.setSource(51396U);
    msg.setSourceEntity(195U);
    msg.setDestination(29567U);
    msg.setDestinationEntity(237U);
    msg.beacon.assign("KIOALXHLWEERVSKMFMTXKDMERUNBNQWNPHWPOFIVRJIXEBGKSZJKQRNQAGXTVBQZARJMUBFZHZKEEDVLCWGDDPJYSRSMVRKYHXCFXMGFOFMSOGWDSFCTJMOIALYTKSPRYQAZTVNTHSSKJPGP");
    msg.lat = 0.0727344357648;
    msg.lon = 0.14286656236;
    msg.depth = 0.299821456472;
    msg.query_channel = 120U;
    msg.reply_channel = 13U;
    msg.transponder_delay = 181U;

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
    msg.setTimeStamp(0.68071667793);
    msg.setSource(52949U);
    msg.setSourceEntity(8U);
    msg.setDestination(5786U);
    msg.setDestinationEntity(95U);
    msg.op = 56U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EFYULJRZKHKZPVIJLPTBXUWSYXUAJVPUVCPIYIXSQHSLFPWINZQEMRYDDCRUEXOHWFDCWAHVNIVSGKMCBB");
    tmp_msg_0.lat = 0.0550597898061;
    tmp_msg_0.lon = 0.401143346617;
    tmp_msg_0.depth = 0.107405653151;
    tmp_msg_0.query_channel = 15U;
    tmp_msg_0.reply_channel = 247U;
    tmp_msg_0.transponder_delay = 202U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.240657849525);
    msg.setSource(60038U);
    msg.setSourceEntity(78U);
    msg.setDestination(44498U);
    msg.setDestinationEntity(134U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.272854540317);
    msg.setSource(6047U);
    msg.setSourceEntity(120U);
    msg.setDestination(26013U);
    msg.setDestinationEntity(192U);
    msg.op = 27U;

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
    msg.setTimeStamp(0.739627537758);
    msg.setSource(12934U);
    msg.setSourceEntity(207U);
    msg.setDestination(55128U);
    msg.setDestinationEntity(30U);
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 10U;
    tmp_msg_0.file.assign("ATUDRPOENWTGXDRSEZQQTOMBHQITXHZGTDRFULUCJMDOQPWZLFWFKFNYZJHUVTSW");
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
    msg.setTimeStamp(0.572775401087);
    msg.setSource(24114U);
    msg.setSourceEntity(53U);
    msg.setDestination(8286U);
    msg.setDestinationEntity(186U);
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.680982989523;
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
    msg.setTimeStamp(0.56346826505);
    msg.setSource(57969U);
    msg.setSourceEntity(4U);
    msg.setDestination(18257U);
    msg.setDestinationEntity(107U);
    IMC::TransmissionStatus tmp_msg_0;
    tmp_msg_0.req_id = 23866U;
    tmp_msg_0.status = 109U;
    tmp_msg_0.info.assign("RRTAGEGWABIZTQSZZDXWVUTFQGJKUACOESWSUSDVQLPWCAGBCHXUNYMLEQDIJFJYSSEDYGULKBXWKGTJEITVBHQPROZLVLMVOWSNUIMPFKNRCPWKWJYIJBKFZCIPRAXMEEBRCKEMTUYXAFFUBANGTHMGMLIBNHVKHIUESKOOZLLTXYZRPHPNQMZQVWSVHQQFNYMHXAJNSDEGOOYDQALNRCFMHRCXBYJHRPDDYPZDINJZWTUID");
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
    msg.setTimeStamp(0.41767913913);
    msg.setSource(31672U);
    msg.setSourceEntity(242U);
    msg.setDestination(16111U);
    msg.setDestinationEntity(249U);
    msg.op = 22U;
    msg.system.assign("ZTMKPJUGYKSNZGWTUIZAHAEUIDCKA");
    msg.range = 0.942579795052;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 2357579102U;
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
    msg.setTimeStamp(0.816815980574);
    msg.setSource(33006U);
    msg.setSourceEntity(92U);
    msg.setDestination(25869U);
    msg.setDestinationEntity(139U);
    msg.op = 27U;
    msg.system.assign("CCDCGSBWEGFUEBPRAHQQMEACJMENIOHZXDJADFRNHERYAJKCKOACQYIWKXLCNX");
    msg.range = 0.241668492959;
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 201U;
    tmp_msg_0.speed_min = 0.449340237753;
    tmp_msg_0.speed_max = 0.199358946532;
    tmp_msg_0.long_accel = 0.531992164074;
    tmp_msg_0.alt_max_msl = 0.799845780576;
    tmp_msg_0.dive_fraction_max = 0.240510607012;
    tmp_msg_0.climb_fraction_max = 0.259504779501;
    tmp_msg_0.bank_max = 0.639573717381;
    tmp_msg_0.p_max = 0.496102023635;
    tmp_msg_0.pitch_min = 0.622809283792;
    tmp_msg_0.pitch_max = 0.18903996169;
    tmp_msg_0.q_max = 0.816532145609;
    tmp_msg_0.g_min = 0.755630294034;
    tmp_msg_0.g_max = 0.822369357351;
    tmp_msg_0.g_lat_max = 0.145960275093;
    tmp_msg_0.rpm_min = 0.273036921176;
    tmp_msg_0.rpm_max = 0.785553578628;
    tmp_msg_0.rpm_rate_max = 0.501702678693;
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
    msg.setTimeStamp(0.61123925326);
    msg.setSource(50810U);
    msg.setSourceEntity(71U);
    msg.setDestination(34044U);
    msg.setDestinationEntity(161U);
    msg.op = 56U;
    msg.system.assign("XQTHUMOWJFJOYDSWUDNOZQOYMWMGPXDVJZLKVQHZIVAAAXYIPDIEKJSSTZVNIGOAIRHSEOWAMWUXBZPQAANFJUZPQGQKLYMYEIZBVHKUGO");
    msg.range = 0.542663371766;
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.762464125017);
    msg.setSource(40378U);
    msg.setSourceEntity(241U);
    msg.setDestination(45849U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.990777913174);
    msg.setSource(53810U);
    msg.setSourceEntity(50U);
    msg.setDestination(36641U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.312596397802);
    msg.setSource(58745U);
    msg.setSourceEntity(111U);
    msg.setDestination(25304U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.325903893787);
    msg.setSource(65261U);
    msg.setSourceEntity(140U);
    msg.setDestination(61219U);
    msg.setDestinationEntity(219U);
    msg.list.assign("TZXGVZBIAXANHGSEHJRRRAYJBTXFMFRDXIBHNNUZOFQLZNEBXCWVPSIQBDWULMJYZCDGYPDHCXVMNHSUDEHVFXGGKSWRSFCOTPBCDSPKOVYMFREIRAAJLGYXPYZTUMJWUEETWEANEASZQPIA");

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
    msg.setTimeStamp(0.297595740445);
    msg.setSource(24573U);
    msg.setSourceEntity(196U);
    msg.setDestination(6775U);
    msg.setDestinationEntity(47U);
    msg.list.assign("IKHFNSTSLKCMDSEHVZWMYVLXDXDIHZXBFGQTUKGNHXNUAECKWYEPTKNLOAQSWFUDOXBZRFNLXERCJSGHTPCCIFFPRQRUFDQVOIJNROVBYZAZIBMJAYLZDS");

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
    msg.setTimeStamp(0.326933705573);
    msg.setSource(12579U);
    msg.setSourceEntity(150U);
    msg.setDestination(5001U);
    msg.setDestinationEntity(209U);
    msg.list.assign("JMOTBRQYSMPVFUQRZNTOYGBWDXODJFEEHOEWFSNWZBVKVKCMIZWSXJJPEKVNINQQDKFUBTPRGZPQDYWFJATPUHASZYWAPPOATIDAEKMQGFSSVXKARSOPADRELLUXIXLWBQHYBAYZVRKEXFHKYXVLLHTYOYCSDGBOXUCNETFBKNCLICRJAKLWURIVHJJOTTESHCUEGDIBTLZAHDPUNMGLSHZWVVGCQBDYUFLZCNIQN");

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
    msg.setTimeStamp(0.180053204461);
    msg.setSource(30167U);
    msg.setSourceEntity(38U);
    msg.setDestination(15261U);
    msg.setDestinationEntity(153U);
    msg.peer.assign("GPFMYLAXZVJOUKWFMMOJITDSDTKGQYAKCIIUBKSMXQHNWVJBQRKRXHAJELOOYRBAFGZSQTXHRASAYBZGBBUDMNEDASQTOWJWXKBLCIQNRBZOOFDHENKHDCYXVGFDPTWCAALHWLDZYVVVMKNPCHXVBOKQULTFPGGHRFFXRSGVCNRNHVLIZMCGPWJQYQXLZSEIMOPXYSFATSULRTWLPEVUYZMEIIFCNPJDBJREPENJESUCZDGEMZTWKQCNOIP");
    msg.rssi = 0.160228945353;
    msg.integrity = 59396U;

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
    msg.setTimeStamp(0.603982654376);
    msg.setSource(48850U);
    msg.setSourceEntity(127U);
    msg.setDestination(47225U);
    msg.setDestinationEntity(155U);
    msg.peer.assign("UYVSLMYDGTVQBXJWXNN");
    msg.rssi = 0.984194369533;
    msg.integrity = 63649U;

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
    msg.setTimeStamp(0.613565694808);
    msg.setSource(48104U);
    msg.setSourceEntity(143U);
    msg.setDestination(65419U);
    msg.setDestinationEntity(187U);
    msg.peer.assign("FGWQRBOEQOIBWMVUDCRQGQHBMFOADNZVTDOFPQJDSSHQBADSNKZVAVHPKNABRNPMYIYTZGGKIYFSZUDJZDLKEFFIJTVMCUDXQSUWPOPCABRCKTLBTIAILIJRVEVYXYGENTUMRAMEWNAWEMKHWNKAGGRXMQDCQUPXLQERCWKRSFJHJHLZERXPXCMZTLHIJOSHJGWEBIOUYXV");
    msg.rssi = 0.424048409164;
    msg.integrity = 37284U;

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
    msg.setTimeStamp(0.344147778337);
    msg.setSource(54499U);
    msg.setSourceEntity(57U);
    msg.setDestination(58790U);
    msg.setDestinationEntity(194U);
    msg.value = -32754;

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
    msg.setTimeStamp(0.427418491969);
    msg.setSource(17222U);
    msg.setSourceEntity(21U);
    msg.setDestination(32347U);
    msg.setDestinationEntity(19U);
    msg.value = -19695;

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
    msg.setTimeStamp(0.492112851473);
    msg.setSource(30631U);
    msg.setSourceEntity(25U);
    msg.setDestination(18728U);
    msg.setDestinationEntity(152U);
    msg.value = 20133;

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
    msg.setTimeStamp(0.688251288734);
    msg.setSource(16090U);
    msg.setSourceEntity(187U);
    msg.setDestination(64824U);
    msg.setDestinationEntity(112U);
    msg.value = 0.717920129157;

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
    msg.setTimeStamp(0.0955725651388);
    msg.setSource(25235U);
    msg.setSourceEntity(20U);
    msg.setDestination(12060U);
    msg.setDestinationEntity(219U);
    msg.value = 0.369097861008;

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
    msg.setTimeStamp(0.588386763963);
    msg.setSource(42881U);
    msg.setSourceEntity(83U);
    msg.setDestination(13906U);
    msg.setDestinationEntity(77U);
    msg.value = 0.831017897081;

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
    msg.setTimeStamp(0.102418284466);
    msg.setSource(35630U);
    msg.setSourceEntity(65U);
    msg.setDestination(4658U);
    msg.setDestinationEntity(175U);
    msg.value = 0.407983699162;

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
    msg.setTimeStamp(0.542480365006);
    msg.setSource(63898U);
    msg.setSourceEntity(177U);
    msg.setDestination(54428U);
    msg.setDestinationEntity(82U);
    msg.value = 0.94038002168;

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
    msg.setTimeStamp(0.528738881867);
    msg.setSource(61003U);
    msg.setSourceEntity(153U);
    msg.setDestination(39498U);
    msg.setDestinationEntity(4U);
    msg.value = 0.723069435437;

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
    msg.setTimeStamp(0.0513869596855);
    msg.setSource(9646U);
    msg.setSourceEntity(38U);
    msg.setDestination(48149U);
    msg.setDestinationEntity(0U);
    msg.validity = 16262U;
    msg.type = 30U;
    msg.utc_year = 35668U;
    msg.utc_month = 156U;
    msg.utc_day = 250U;
    msg.utc_time = 0.628396233833;
    msg.lat = 0.0262275365741;
    msg.lon = 0.394706244384;
    msg.height = 0.6088832486;
    msg.satellites = 93U;
    msg.cog = 0.843506357076;
    msg.sog = 0.827118543336;
    msg.hdop = 0.986172482906;
    msg.vdop = 0.109142916962;
    msg.hacc = 0.866205470701;
    msg.vacc = 0.922594627533;

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
    msg.setTimeStamp(0.124728728274);
    msg.setSource(27121U);
    msg.setSourceEntity(247U);
    msg.setDestination(19017U);
    msg.setDestinationEntity(58U);
    msg.validity = 40486U;
    msg.type = 248U;
    msg.utc_year = 18742U;
    msg.utc_month = 84U;
    msg.utc_day = 158U;
    msg.utc_time = 0.50012045899;
    msg.lat = 0.288061686952;
    msg.lon = 0.694634829646;
    msg.height = 0.821290596736;
    msg.satellites = 114U;
    msg.cog = 0.461101880598;
    msg.sog = 0.868868581272;
    msg.hdop = 0.657037781439;
    msg.vdop = 0.882333583039;
    msg.hacc = 0.603686458983;
    msg.vacc = 0.0701236410872;

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
    msg.setTimeStamp(0.99123134514);
    msg.setSource(10739U);
    msg.setSourceEntity(176U);
    msg.setDestination(18193U);
    msg.setDestinationEntity(70U);
    msg.validity = 4395U;
    msg.type = 37U;
    msg.utc_year = 30572U;
    msg.utc_month = 5U;
    msg.utc_day = 84U;
    msg.utc_time = 0.771394440491;
    msg.lat = 0.282960445046;
    msg.lon = 0.630740743447;
    msg.height = 0.0949380518791;
    msg.satellites = 12U;
    msg.cog = 0.46788704555;
    msg.sog = 0.842482159601;
    msg.hdop = 0.0248354755985;
    msg.vdop = 0.0355856808911;
    msg.hacc = 0.379745583084;
    msg.vacc = 0.990826763319;

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
    msg.setTimeStamp(0.917108016154);
    msg.setSource(26207U);
    msg.setSourceEntity(127U);
    msg.setDestination(45128U);
    msg.setDestinationEntity(55U);
    msg.time = 0.287627781922;
    msg.phi = 0.116594548341;
    msg.theta = 0.864123609249;
    msg.psi = 0.866420311918;
    msg.psi_magnetic = 0.940226303343;

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
    msg.setTimeStamp(0.62743850646);
    msg.setSource(42481U);
    msg.setSourceEntity(128U);
    msg.setDestination(20738U);
    msg.setDestinationEntity(30U);
    msg.time = 0.449718088366;
    msg.phi = 0.816934694702;
    msg.theta = 0.139467302223;
    msg.psi = 0.896952832868;
    msg.psi_magnetic = 0.796728960155;

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
    msg.setTimeStamp(0.482302299836);
    msg.setSource(28805U);
    msg.setSourceEntity(47U);
    msg.setDestination(37033U);
    msg.setDestinationEntity(37U);
    msg.time = 0.0484146912274;
    msg.phi = 0.873867476666;
    msg.theta = 0.980475394318;
    msg.psi = 0.659357144871;
    msg.psi_magnetic = 0.593236027657;

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
    msg.setTimeStamp(0.428550325956);
    msg.setSource(23585U);
    msg.setSourceEntity(132U);
    msg.setDestination(20766U);
    msg.setDestinationEntity(246U);
    msg.time = 0.399751713968;
    msg.x = 0.780164640193;
    msg.y = 0.432651375655;
    msg.z = 0.810638365056;
    msg.timestep = 0.667752331905;

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
    msg.setTimeStamp(0.412811562619);
    msg.setSource(7674U);
    msg.setSourceEntity(173U);
    msg.setDestination(11525U);
    msg.setDestinationEntity(0U);
    msg.time = 0.829232984546;
    msg.x = 0.234698243871;
    msg.y = 0.800176943874;
    msg.z = 0.0294248455231;
    msg.timestep = 0.0284542245627;

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
    msg.setTimeStamp(0.39636887841);
    msg.setSource(53996U);
    msg.setSourceEntity(87U);
    msg.setDestination(50708U);
    msg.setDestinationEntity(38U);
    msg.time = 0.581184002797;
    msg.x = 0.885752804834;
    msg.y = 0.663522883534;
    msg.z = 0.895012234533;
    msg.timestep = 0.730180199388;

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
    msg.setTimeStamp(0.393622564226);
    msg.setSource(20658U);
    msg.setSourceEntity(59U);
    msg.setDestination(5278U);
    msg.setDestinationEntity(190U);
    msg.time = 0.35375725172;
    msg.x = 0.270864569635;
    msg.y = 0.816088077478;
    msg.z = 0.805684196373;

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
    msg.setTimeStamp(0.270022379458);
    msg.setSource(16084U);
    msg.setSourceEntity(154U);
    msg.setDestination(28419U);
    msg.setDestinationEntity(182U);
    msg.time = 0.639049183426;
    msg.x = 0.17622889797;
    msg.y = 0.698750773135;
    msg.z = 0.168451786629;

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
    msg.setTimeStamp(0.706448117899);
    msg.setSource(32469U);
    msg.setSourceEntity(23U);
    msg.setDestination(44688U);
    msg.setDestinationEntity(81U);
    msg.time = 0.120121857128;
    msg.x = 0.0712059345732;
    msg.y = 0.0808564659929;
    msg.z = 0.17102258949;

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
    msg.setTimeStamp(0.00282769208916);
    msg.setSource(703U);
    msg.setSourceEntity(240U);
    msg.setDestination(36581U);
    msg.setDestinationEntity(93U);
    msg.time = 0.516369095608;
    msg.x = 0.362253821648;
    msg.y = 0.0108102825431;
    msg.z = 0.163417469445;

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
    msg.setTimeStamp(0.291142216627);
    msg.setSource(12336U);
    msg.setSourceEntity(105U);
    msg.setDestination(41638U);
    msg.setDestinationEntity(216U);
    msg.time = 0.23648629484;
    msg.x = 0.591220200569;
    msg.y = 0.897264409587;
    msg.z = 0.576783380531;

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
    msg.setTimeStamp(0.114134652384);
    msg.setSource(2361U);
    msg.setSourceEntity(177U);
    msg.setDestination(41588U);
    msg.setDestinationEntity(60U);
    msg.time = 0.996962986294;
    msg.x = 0.362982263979;
    msg.y = 0.807139572577;
    msg.z = 0.0475403908004;

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
    msg.setTimeStamp(0.490627901736);
    msg.setSource(34013U);
    msg.setSourceEntity(40U);
    msg.setDestination(32897U);
    msg.setDestinationEntity(58U);
    msg.time = 0.069097968723;
    msg.x = 0.617747340045;
    msg.y = 0.308872398872;
    msg.z = 0.585545677722;

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
    msg.setTimeStamp(0.258074607481);
    msg.setSource(13056U);
    msg.setSourceEntity(31U);
    msg.setDestination(32095U);
    msg.setDestinationEntity(36U);
    msg.time = 0.0688039840125;
    msg.x = 0.245086257504;
    msg.y = 0.558135694062;
    msg.z = 0.760821084249;

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
    msg.setTimeStamp(0.534290089902);
    msg.setSource(32170U);
    msg.setSourceEntity(153U);
    msg.setDestination(30823U);
    msg.setDestinationEntity(237U);
    msg.time = 0.906411426072;
    msg.x = 0.213500102306;
    msg.y = 0.738018782738;
    msg.z = 0.579502638489;

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
    msg.setTimeStamp(0.100837631434);
    msg.setSource(15010U);
    msg.setSourceEntity(83U);
    msg.setDestination(10736U);
    msg.setDestinationEntity(198U);
    msg.validity = 78U;
    msg.x = 0.875954027093;
    msg.y = 0.973005845856;
    msg.z = 0.564572722344;

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
    msg.setTimeStamp(0.525234072017);
    msg.setSource(44954U);
    msg.setSourceEntity(252U);
    msg.setDestination(42009U);
    msg.setDestinationEntity(143U);
    msg.validity = 192U;
    msg.x = 0.263559213667;
    msg.y = 0.835105828322;
    msg.z = 0.570115129743;

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
    msg.setTimeStamp(0.901485828578);
    msg.setSource(10319U);
    msg.setSourceEntity(34U);
    msg.setDestination(26264U);
    msg.setDestinationEntity(238U);
    msg.validity = 90U;
    msg.x = 0.926121728927;
    msg.y = 0.00352959082648;
    msg.z = 0.19002399482;

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
    msg.setTimeStamp(0.553850120419);
    msg.setSource(27231U);
    msg.setSourceEntity(241U);
    msg.setDestination(29373U);
    msg.setDestinationEntity(236U);
    msg.validity = 216U;
    msg.x = 0.294441909221;
    msg.y = 0.323399407843;
    msg.z = 0.30852249534;

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
    msg.setTimeStamp(0.431927426269);
    msg.setSource(43348U);
    msg.setSourceEntity(42U);
    msg.setDestination(57880U);
    msg.setDestinationEntity(103U);
    msg.validity = 200U;
    msg.x = 0.222035366959;
    msg.y = 0.456092157144;
    msg.z = 0.94684095343;

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
    msg.setTimeStamp(0.883868296413);
    msg.setSource(60751U);
    msg.setSourceEntity(17U);
    msg.setDestination(60502U);
    msg.setDestinationEntity(70U);
    msg.validity = 11U;
    msg.x = 0.342732064009;
    msg.y = 0.791862197379;
    msg.z = 0.282072815622;

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
    msg.setTimeStamp(0.365111833791);
    msg.setSource(25288U);
    msg.setSourceEntity(205U);
    msg.setDestination(46632U);
    msg.setDestinationEntity(175U);
    msg.time = 0.461396455219;
    msg.x = 0.71523902616;
    msg.y = 0.931747948225;
    msg.z = 0.0703841869088;

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
    msg.setTimeStamp(0.458925911174);
    msg.setSource(59781U);
    msg.setSourceEntity(62U);
    msg.setDestination(19277U);
    msg.setDestinationEntity(54U);
    msg.time = 0.637297124401;
    msg.x = 0.614396142899;
    msg.y = 0.130139523018;
    msg.z = 0.246790609581;

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
    msg.setTimeStamp(0.876965701307);
    msg.setSource(3012U);
    msg.setSourceEntity(241U);
    msg.setDestination(21093U);
    msg.setDestinationEntity(131U);
    msg.time = 0.14294562607;
    msg.x = 0.74973427352;
    msg.y = 0.877229607674;
    msg.z = 0.402054220106;

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
    msg.setTimeStamp(0.258320137575);
    msg.setSource(62297U);
    msg.setSourceEntity(215U);
    msg.setDestination(12295U);
    msg.setDestinationEntity(211U);
    msg.validity = 23U;
    msg.value = 0.0751392438285;

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
    msg.setTimeStamp(0.387679708851);
    msg.setSource(55903U);
    msg.setSourceEntity(173U);
    msg.setDestination(64021U);
    msg.setDestinationEntity(36U);
    msg.validity = 180U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.434688382843;
    tmp_msg_0.y = 0.340852741145;
    tmp_msg_0.z = 0.503948924999;
    tmp_msg_0.phi = 0.201854832934;
    tmp_msg_0.theta = 0.633755544716;
    tmp_msg_0.psi = 0.79026667394;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.85372834274;
    tmp_msg_1.beam_height = 0.0896518052141;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.105794212842;

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
    msg.setTimeStamp(0.181533123978);
    msg.setSource(4020U);
    msg.setSourceEntity(131U);
    msg.setDestination(19850U);
    msg.setDestinationEntity(65U);
    msg.validity = 193U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.171811457357;
    tmp_msg_0.beam_height = 0.788649133206;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.480889237685;

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
    msg.setTimeStamp(0.664147305036);
    msg.setSource(48439U);
    msg.setSourceEntity(184U);
    msg.setDestination(12147U);
    msg.setDestinationEntity(50U);
    msg.value = 0.222418406843;

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
    msg.setTimeStamp(0.232851266958);
    msg.setSource(37141U);
    msg.setSourceEntity(180U);
    msg.setDestination(27226U);
    msg.setDestinationEntity(252U);
    msg.value = 0.58224258248;

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
    msg.setTimeStamp(0.611065906824);
    msg.setSource(53489U);
    msg.setSourceEntity(29U);
    msg.setDestination(37105U);
    msg.setDestinationEntity(71U);
    msg.value = 0.64181303633;

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
    msg.setTimeStamp(0.277428579567);
    msg.setSource(59710U);
    msg.setSourceEntity(108U);
    msg.setDestination(21470U);
    msg.setDestinationEntity(38U);
    msg.value = 0.820065607543;

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
    msg.setTimeStamp(0.870386190125);
    msg.setSource(46102U);
    msg.setSourceEntity(245U);
    msg.setDestination(48046U);
    msg.setDestinationEntity(35U);
    msg.value = 0.705582750224;

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
    msg.setTimeStamp(0.472876802462);
    msg.setSource(46465U);
    msg.setSourceEntity(138U);
    msg.setDestination(61752U);
    msg.setDestinationEntity(77U);
    msg.value = 0.802712214403;

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
    msg.setTimeStamp(0.165228960364);
    msg.setSource(52882U);
    msg.setSourceEntity(3U);
    msg.setDestination(48705U);
    msg.setDestinationEntity(177U);
    msg.value = 0.709285677898;

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
    msg.setTimeStamp(0.837908730147);
    msg.setSource(63113U);
    msg.setSourceEntity(29U);
    msg.setDestination(51654U);
    msg.setDestinationEntity(133U);
    msg.value = 0.295221597455;

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
    msg.setTimeStamp(0.245862427605);
    msg.setSource(36360U);
    msg.setSourceEntity(14U);
    msg.setDestination(47183U);
    msg.setDestinationEntity(210U);
    msg.value = 0.102525819491;

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
    msg.setTimeStamp(0.116194509369);
    msg.setSource(20061U);
    msg.setSourceEntity(18U);
    msg.setDestination(32271U);
    msg.setDestinationEntity(54U);
    msg.value = 0.492273130164;

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
    msg.setTimeStamp(0.662098462214);
    msg.setSource(29876U);
    msg.setSourceEntity(99U);
    msg.setDestination(36859U);
    msg.setDestinationEntity(122U);
    msg.value = 0.979617410073;

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
    msg.setTimeStamp(0.867211897503);
    msg.setSource(56205U);
    msg.setSourceEntity(165U);
    msg.setDestination(37987U);
    msg.setDestinationEntity(78U);
    msg.value = 0.987681514086;

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
    msg.setTimeStamp(0.185112700345);
    msg.setSource(9613U);
    msg.setSourceEntity(169U);
    msg.setDestination(46492U);
    msg.setDestinationEntity(27U);
    msg.value = 0.567920017639;

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
    msg.setTimeStamp(0.188786777182);
    msg.setSource(55418U);
    msg.setSourceEntity(129U);
    msg.setDestination(5269U);
    msg.setDestinationEntity(51U);
    msg.value = 0.0790476027676;

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
    msg.setTimeStamp(0.515845674431);
    msg.setSource(22204U);
    msg.setSourceEntity(28U);
    msg.setDestination(33657U);
    msg.setDestinationEntity(226U);
    msg.value = 0.408300238405;

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
    msg.setTimeStamp(0.141436507342);
    msg.setSource(51915U);
    msg.setSourceEntity(175U);
    msg.setDestination(6563U);
    msg.setDestinationEntity(116U);
    msg.value = 0.749518974452;

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
    msg.setTimeStamp(0.636959645698);
    msg.setSource(9916U);
    msg.setSourceEntity(177U);
    msg.setDestination(21684U);
    msg.setDestinationEntity(128U);
    msg.value = 0.101985443859;

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
    msg.setTimeStamp(0.270340140556);
    msg.setSource(45030U);
    msg.setSourceEntity(75U);
    msg.setDestination(45789U);
    msg.setDestinationEntity(254U);
    msg.value = 0.886582455382;

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
    msg.setTimeStamp(0.0946832686183);
    msg.setSource(26487U);
    msg.setSourceEntity(109U);
    msg.setDestination(50990U);
    msg.setDestinationEntity(81U);
    msg.value = 0.167924282432;

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
    msg.setTimeStamp(0.446043338154);
    msg.setSource(28213U);
    msg.setSourceEntity(251U);
    msg.setDestination(29699U);
    msg.setDestinationEntity(238U);
    msg.value = 0.520345722784;

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
    msg.setTimeStamp(0.0923730153467);
    msg.setSource(59987U);
    msg.setSourceEntity(242U);
    msg.setDestination(30463U);
    msg.setDestinationEntity(236U);
    msg.value = 0.404910152386;

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
    msg.setTimeStamp(0.334527933431);
    msg.setSource(3813U);
    msg.setSourceEntity(65U);
    msg.setDestination(11324U);
    msg.setDestinationEntity(218U);
    msg.value = 0.44497952283;

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
    msg.setTimeStamp(0.720386865772);
    msg.setSource(21324U);
    msg.setSourceEntity(78U);
    msg.setDestination(28113U);
    msg.setDestinationEntity(8U);
    msg.value = 0.237412607622;

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
    msg.setTimeStamp(0.715339557426);
    msg.setSource(27879U);
    msg.setSourceEntity(200U);
    msg.setDestination(22471U);
    msg.setDestinationEntity(212U);
    msg.value = 0.788054611019;

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
    msg.setTimeStamp(0.208871366736);
    msg.setSource(62219U);
    msg.setSourceEntity(75U);
    msg.setDestination(21870U);
    msg.setDestinationEntity(61U);
    msg.direction = 0.894846063074;
    msg.speed = 0.541592957958;
    msg.turbulence = 0.874235473735;

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
    msg.setTimeStamp(0.664553813352);
    msg.setSource(11171U);
    msg.setSourceEntity(139U);
    msg.setDestination(43799U);
    msg.setDestinationEntity(56U);
    msg.direction = 0.319292493102;
    msg.speed = 0.953046204503;
    msg.turbulence = 0.599070800694;

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
    msg.setTimeStamp(0.0524412172676);
    msg.setSource(55885U);
    msg.setSourceEntity(31U);
    msg.setDestination(27038U);
    msg.setDestinationEntity(41U);
    msg.direction = 0.889063947864;
    msg.speed = 0.690489616836;
    msg.turbulence = 0.831665320861;

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
    msg.setTimeStamp(0.909681436714);
    msg.setSource(60427U);
    msg.setSourceEntity(27U);
    msg.setDestination(26703U);
    msg.setDestinationEntity(96U);
    msg.value = 0.112709369674;

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
    msg.setTimeStamp(0.1293345448);
    msg.setSource(36582U);
    msg.setSourceEntity(1U);
    msg.setDestination(22634U);
    msg.setDestinationEntity(115U);
    msg.value = 0.924239661819;

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
    msg.setTimeStamp(0.393809210201);
    msg.setSource(60784U);
    msg.setSourceEntity(125U);
    msg.setDestination(13611U);
    msg.setDestinationEntity(139U);
    msg.value = 0.504699964632;

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
    msg.setTimeStamp(0.433223155726);
    msg.setSource(60569U);
    msg.setSourceEntity(110U);
    msg.setDestination(10229U);
    msg.setDestinationEntity(210U);
    msg.value.assign("JNXIDSOZDEEVONYSAVRYBWKNRWJRLIXRBHIFZLFDLOTLKVHHGWTCHEILVSRMYXOOXRYMCMJWFPCHOJDLLEDNNQJSAFPYQZAZKYIZNCNEEKQUKKJCX");

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
    msg.setTimeStamp(0.946058300313);
    msg.setSource(7476U);
    msg.setSourceEntity(68U);
    msg.setDestination(1739U);
    msg.setDestinationEntity(126U);
    msg.value.assign("GUVZMDCQBMCAESUXHGTUNBUUXEYOTMJNAAHCDPK");

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
    msg.setTimeStamp(0.410272091138);
    msg.setSource(18104U);
    msg.setSourceEntity(124U);
    msg.setDestination(36668U);
    msg.setDestinationEntity(190U);
    msg.value.assign("YMKQBIATHPBGRVXWSNSTAHROQTREJTJCVXTEGWAPOAQNGFUVKNEHBUNLPALLJYUEKNBSGXWZURQMIRXEPMPORSHGRFXCINDZMUGCQDJZKVCSGVLCXLLERGDNVXMGPBWUFUFUHKOJZEFTWSSSWAQVXEPYXZFPAICBX");

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
    msg.setTimeStamp(0.178697552356);
    msg.setSource(39231U);
    msg.setSourceEntity(59U);
    msg.setDestination(7520U);
    msg.setDestinationEntity(75U);
    const char tmp_msg_0[] = {-114, 29, -123, 17, -29, 116, 78, -39, 46, 38, 69, 79, 69, 24, 87, -35, 64, 86, -76, -114, 109, -91, 107, 8, -82, 16, -25, -38, 120, -14, 14, 0, 106, -93, 24, -112, -85, 48, -12, 66, -52, -102, -86, 26, 91, -64, -71, -109, -109, -110, 123, -42, -116, -70, -38, 99, 78, 8, 120, 88, 59, -65, 117, 118, -38, 23, 47, -50, -51, 45, 29, -33, -124, -28, -128, -73, 93, 49, -118, -9, -36, -89, -119, -36, -43, 121, 120, -37, 119, 106, 72, 39, -56, -28, 82, -112, -3, 11, 12, -37, 83, 72, -13, -67, 60, -115, -116, -82, -40, -123, 49, 47, -8, 55, 63, 87, 21, 123, -96, -49, -127, -47, 124, -81, -124, -119, -52, 32, -8, -52, 19, 124, -126, -30, 20, -118, 21, 55, 120, 0, 104, -81, 52, 0, -19, 78, -106, 44, -57, -6, 82, 20, -20, -89, -109, -35, -123, 123, 16, 57, 45, 35, 2, -42, -113, -56, 108, -94, -91, -97, -27, -7, 39, -3, 60, -100, 92, 54, 107, -31, -19, -99, 89, 45, -34, -50, 61, -122, -30, -102, 125, 14, 71, 31, 25, -89, 62, 8, -50, -9, -24, 50, -122, 91, -9, 40, 106, 126, 8, 10, 11, 104, -124, -5, 26, 36, 36, -49, 121, 112, -72, -124, -67, -36, -45, 52, -8, 111, -83, 37, -111, -91};
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
    msg.setTimeStamp(0.034396634056);
    msg.setSource(39724U);
    msg.setSourceEntity(246U);
    msg.setDestination(26181U);
    msg.setDestinationEntity(22U);
    const char tmp_msg_0[] = {-65, 14, 97, 41, -4, 73, 77, 50, -110, 124, 82, 13, 99, -121, -102, 20, 77, 48, 126, 6, -95, -52, 72, -84, 10, 52, -17, 26, 7, 39, -49, 88, 75, 23, 64, -114, 64, 28, 105, -90, 78, 25, 38, -53, 17, 109, -20, 31, -52, 103, -57, -110, 8, -79, 83, 115, -10, 107, -128, 40, -112, 40, 90, -101, 111, -93, 81, 97, -82, -74, -32, 55, -3, 13, 36, 119, -1, 103, -50, -18, -73, 70, 10, 76, 123, 4, -24, 70, -12, 98, 69, -45, -68, -64, 4, -96, 107, -113, -110, -105, 14, -109, 2, -52, -113, -124, -49, 114, -30, -89, 115, 29, -67, 58, -51, 57, -22, 37, 87, 93, -91, 81, 23, 4, 108, -66, -66, -103, -106, -118, -89, 15, -88, -63, -114, -50, -94, 31, -20, 57, 47, -102, -6, 18, -117, -106, -94, -16, -12, 41, -76, -100, -33, 13, 28, 51, 114, -85, 14, -65, -85, -125, -96, -39, 15, 82, 42, -79, 44, -117, 3, 70, 72, 23, 43, 93, 21, 116, -10, 100, 36, -125, 88, -64, 73, -101, -44, -119, -33, -74, 94, -4, -2, -32, -8, -11, 15, 123, 48, -34, 114, -21, 119, -75, -32, 39, -20, -10, 76, -77, -111, -90, -4, 13, 97, 85, -81, -74, -78, -120, -57, -43, -15, 48, -100, 32, 28, 49, 104, 10, 73, 95, 29, -111, 2};
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
    msg.setTimeStamp(0.851580915921);
    msg.setSource(54875U);
    msg.setSourceEntity(135U);
    msg.setDestination(64908U);
    msg.setDestinationEntity(72U);
    const char tmp_msg_0[] = {102, 10, -49, -85, 45, -12, 11, 1, 15, 93, 7, -34, 46, 84, 15, 23, 103, 98, -102, -98, 51, -56, -54, -93, 116, 49, -21, 82, 40, 73, -51, 122, 80, 80, -62, -125, -102, -7, -33, 93, -74, -99, 35, 99, -45, 24, -19, 12, -88, 19, 34, -80, -40, -63, -121, -16, -5, -67, 121, -75, 101, -69, -28, -84, -23, 103, 52, -97, -13, 60, 46, 113, 89, 87, -41, 119, 97, -11, 78, -75, 116, 106, 44, -58, -93, -54, -16, -32, 98, -19, -94, 70, -104, -10, -39, 14, -61, -57, 55, 87, 113, 31, -63, -35, 88, 67, 44, -98, 65, 99, 111, -108, -42, -32, -38, 18, 8, 31, 107, -99, 39, -116, 99, -72, 81, -86, 125, 117, -20, 123, 24, -98, 70, 39, 95, -87, -96, 116, 101, -9, -41, 119, 31, -72, 4, -78, 54, 42, 77, -86, 4};
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
    msg.setTimeStamp(0.0217916658814);
    msg.setSource(39287U);
    msg.setSourceEntity(53U);
    msg.setDestination(43354U);
    msg.setDestinationEntity(123U);
    msg.value = 0.237603884028;

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
    msg.setTimeStamp(0.504566820522);
    msg.setSource(50825U);
    msg.setSourceEntity(223U);
    msg.setDestination(319U);
    msg.setDestinationEntity(135U);
    msg.value = 0.629294717093;

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
    msg.setTimeStamp(0.960736342511);
    msg.setSource(40886U);
    msg.setSourceEntity(40U);
    msg.setDestination(29698U);
    msg.setDestinationEntity(65U);
    msg.value = 0.0556645390269;

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
    msg.setTimeStamp(0.193907339531);
    msg.setSource(36289U);
    msg.setSourceEntity(75U);
    msg.setDestination(53912U);
    msg.setDestinationEntity(78U);
    msg.type = 187U;
    msg.frequency = 2766376249U;
    msg.min_range = 2704U;
    msg.max_range = 63442U;
    msg.bits_per_point = 202U;
    msg.scale_factor = 0.895934357722;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.462222085412;
    tmp_msg_0.beam_height = 0.284545962204;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {12, 59, -6, 72, -76, -49, -18, 21, 6, -70, 86, 102, 24, 121, 87, -75, 82, -59, -125, -13, 22, -94, 95, 29, 56, -87, -56, -42, 86, -92, 2, -77, -23, 55, 35, 36, 84, 94, 59, 32, -5, -84, -106, -93, 75, 58, 97, 87, -100, 80, -57, 59, 101, 3, 124, 95, 63, 112, -8, 7, 107, -116, -11, 25, -100, 122, 82, 29, -64, 79, -25, 74, -57, -26, -89, 98, 117, -20, 118, 73, -85, -125, 108, -46, -33, 70, -12, 17, 126, -99, -27, 85, -69, -4, 76, 20, 115, -107, -99, -50, 38, 16, -52, 76, 82, -58, -17, -74, -41, 33, 70, 113, -77, 40, 25, 37, -75, -44, 101, 13, 62, -86, 84, 19, -108, -31, -112, 115, -5, 121, -43, -41, 15, 53, -34, 20, 98, -3, 5, 60, 96, 40, 87, -54, 21, 114, 98, 11, 92, -11, 41, 71, 32, 45, 121, -59, -100, -13, -17, 64, 42, 83, 28};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.322734849681);
    msg.setSource(4118U);
    msg.setSourceEntity(70U);
    msg.setDestination(16613U);
    msg.setDestinationEntity(27U);
    msg.type = 221U;
    msg.frequency = 3579684475U;
    msg.min_range = 48842U;
    msg.max_range = 29082U;
    msg.bits_per_point = 118U;
    msg.scale_factor = 0.717839906559;
    const char tmp_msg_0[] = {-81, 106, -12, 109, 85, 102, 42, -2, -126, -14, -68, 99, -46, -123, -14, -87, -102, -85, -3, -75, 86, 94, -42, -118, -90, -22, -118, -14, -78, -38, -4, -72, 73, -99, 107, 105, 74, 23, -120, -4, 82, -104, -73, 85, 96, -45, -52, -125, -43, 58, -65, -85, 105, -93, 11, -92, 16, 5, 115, -92, 84, 69, 12, -53, 112, -107, -9, 84, 53, -104, 69, -98, -49, 101, -33, 23, -88, -123, -51, -56, -41, -18, 44, -111, -82, -6, -67, 17, 40, 61, -34, 117, -98, -93, -51, 80, 37, -25, -51, 77, 91, 24, -7, -127, 85, 9, 26, 0, 90, -86, -81, 8, 84, -96, -54, 67, -8, -88, 37, -52, -19, -23, -94, -62, -123, 122, -94, 96, -17, 55, -7, -30, -9, -91, 114, -101, 31, -83, 61, -21, -96, -20, -114, 39, 96, -18, 29, 93, 75, -100, -56, -3, -70, -118, -56, 96, -39, -14, 95, -37, 91, -113, 114, 33, 97, 77, -103, -74, -101, -112, -47, 35, 39, 111, -45, 88, 90, -78, 36, -30, -123, -67, -22, 97, -14, -96, 44, 107, 76, -34, 56, -20, 18, -95, -20, 117, 51, -114, 109, -75, -94, 52, -123, -32, -31, -65, 121, -24, 10, 12, -114, -7, -38, 92, 2, 126};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.0985042654848);
    msg.setSource(42143U);
    msg.setSourceEntity(81U);
    msg.setDestination(10458U);
    msg.setDestinationEntity(202U);
    msg.type = 5U;
    msg.frequency = 1037397751U;
    msg.min_range = 61960U;
    msg.max_range = 41847U;
    msg.bits_per_point = 117U;
    msg.scale_factor = 0.631117479825;
    const char tmp_msg_0[] = {112, -61, 114, 87, 9, -17, -113, -88, -116, -84, -27, -43, -75, -116, 10, -97, 14, 33, -83, -8, 107, -116, 10, -42, -110, 91, -78, 44, 62, -11, 77, 2, 53, 117, -78, -120, -33, 34, -99, 107, 40, 21, 6, -1, -98, -94, -7, 121, 65, -12, -58, 125, 120, -116, 114, 30, 3, -56, 85, -107, -124, -68, -23, -73, 27, 98, 57, -43, -80, 61, 41, 100, -11, 5, 66, 100, -111, -66, -16, 108, -125, -89, 48, -113, 121, 41, 72, -87, 96, -76, 83, 88, -78, 4, -4, 90, 113, 111, 63, -26, -25, 115, -90, -7, 32, 64, -19, -118, 59, -120, -6, -63, -114, 0, -39, 0, 28, -14, -126, -70, 55, -65, 27, 97, -69, -32, -46, 39, -26, 15, -73, 87, -110, -25, -13, -87, 3, -60, 28, 72, 15, -61, 76, -103, -68, 36, 79, 86, 20, 121, 99, -114, -19, 6, -117, -12, -6, -9, 43, -96, 30, 78, -58, 93, -4, -123, -72, 105, -105, -120, 46, -61, 16, -110, -39, 31, -29, 70, 52, 116, -52, -9, -35, -90, -66, 83, -6, 28, 61, -96, 64, -116, 77, 24, 93, -49, 23, 41, -2, -125, 42, 47, -70, 23, 23, 98, 106, 77, 20, -9, 78, 97, -18, -34, 35, -106, -10, -22, 2, -91, -44, -61, 76, -92, -92, 64, 13, -81, -82, -121, -53, 84, 74};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.180941330912);
    msg.setSource(5706U);
    msg.setSourceEntity(36U);
    msg.setDestination(23460U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.662383560089);
    msg.setSource(7477U);
    msg.setSourceEntity(241U);
    msg.setDestination(58637U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.522626870316);
    msg.setSource(50295U);
    msg.setSourceEntity(7U);
    msg.setDestination(50974U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.29693064484);
    msg.setSource(56573U);
    msg.setSourceEntity(107U);
    msg.setDestination(38348U);
    msg.setDestinationEntity(62U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.431679380754);
    msg.setSource(63818U);
    msg.setSourceEntity(152U);
    msg.setDestination(11934U);
    msg.setDestinationEntity(26U);
    msg.op = 218U;

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
    msg.setTimeStamp(0.581325120234);
    msg.setSource(3829U);
    msg.setSourceEntity(49U);
    msg.setDestination(7120U);
    msg.setDestinationEntity(250U);
    msg.op = 159U;

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
    msg.setTimeStamp(0.998566518935);
    msg.setSource(47638U);
    msg.setSourceEntity(190U);
    msg.setDestination(57942U);
    msg.setDestinationEntity(174U);
    msg.value = 0.934938436596;
    msg.confidence = 0.782571106493;
    msg.opmodes.assign("IXJQSTYLLZJOKVQBUUZQBPEYAPJNOMSXADMFFSIXXTEGPIDHCMMPYEPCMGJDTYFVUCXKQKXRNWCXQKKRGAOJUBWQFJRKVGDIAAJAHZZXQSNZLNVXNTGIFOLWAQYYLMBBMJECVMYIABWHOYMWHOVZGCUQDESDCQHPWTWYKVFXAGZZZNPFLHWKRSCPVDTRHNJBLRFCKEHPFWEEKEEGVTPRRYUILHIIUSDGOOSS");

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
    msg.setTimeStamp(0.0119225196218);
    msg.setSource(9676U);
    msg.setSourceEntity(162U);
    msg.setDestination(27540U);
    msg.setDestinationEntity(66U);
    msg.value = 0.481566196696;
    msg.confidence = 0.783709116544;
    msg.opmodes.assign("VZPOJNTLIRHBXOQOLLCTKFXZDZQGPTGYXLNDQBSHCCKEYBFVMBSAKSZVSIAWGKHTAPIRNKVNYJAOYRQQHCIPOWWWASZWKZCMMIKEXMZBFNKPDYGKCXWPUWWUAAYXCXLWGHHUJLRDJTVSGSREFTJGXCQOSJUEAOMXJTNDZIYBPWVINLCMKFVBDYODFTPLFEZH");

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
    msg.setTimeStamp(0.188799109645);
    msg.setSource(13903U);
    msg.setSourceEntity(233U);
    msg.setDestination(1739U);
    msg.setDestinationEntity(66U);
    msg.value = 0.756155489953;
    msg.confidence = 0.131838181906;
    msg.opmodes.assign("KCWGLYTMFCFZZOOMWVMUPGHNLZGHRJGHDYSVNHAQBCEWXKFXSPRQGQXYTPSN");

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
    msg.setTimeStamp(0.922752078787);
    msg.setSource(62465U);
    msg.setSourceEntity(25U);
    msg.setDestination(36755U);
    msg.setDestinationEntity(233U);
    msg.itow = 1555260698U;
    msg.lat = 0.748328015367;
    msg.lon = 0.199524062421;
    msg.height_ell = 0.310842407393;
    msg.height_sea = 0.550986875074;
    msg.hacc = 0.0378879229024;
    msg.vacc = 0.0497745665065;
    msg.vel_n = 0.697438990125;
    msg.vel_e = 0.481622129327;
    msg.vel_d = 0.470584748886;
    msg.speed = 0.215549605265;
    msg.gspeed = 0.197444257808;
    msg.heading = 0.326320323039;
    msg.sacc = 0.612901039309;
    msg.cacc = 0.719170657219;

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
    msg.setTimeStamp(0.362284397046);
    msg.setSource(35874U);
    msg.setSourceEntity(116U);
    msg.setDestination(13933U);
    msg.setDestinationEntity(155U);
    msg.itow = 2028239038U;
    msg.lat = 0.893583743737;
    msg.lon = 0.888194434662;
    msg.height_ell = 0.0130568864371;
    msg.height_sea = 0.625370181997;
    msg.hacc = 0.652404977988;
    msg.vacc = 0.554752680932;
    msg.vel_n = 0.495934740194;
    msg.vel_e = 0.807717827477;
    msg.vel_d = 0.8644674808;
    msg.speed = 0.181722868511;
    msg.gspeed = 0.256739414619;
    msg.heading = 0.478976956176;
    msg.sacc = 0.0747438651654;
    msg.cacc = 0.573941236419;

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
    msg.setTimeStamp(0.27764355485);
    msg.setSource(48557U);
    msg.setSourceEntity(108U);
    msg.setDestination(54128U);
    msg.setDestinationEntity(58U);
    msg.itow = 3722034116U;
    msg.lat = 0.713741184238;
    msg.lon = 0.0794751332262;
    msg.height_ell = 0.986707442008;
    msg.height_sea = 0.534005861858;
    msg.hacc = 0.861102689109;
    msg.vacc = 0.791162308492;
    msg.vel_n = 0.939305696191;
    msg.vel_e = 0.534103230419;
    msg.vel_d = 0.928934201934;
    msg.speed = 0.416644588477;
    msg.gspeed = 0.0172434905433;
    msg.heading = 0.0200304476297;
    msg.sacc = 0.0658270606819;
    msg.cacc = 0.668690907935;

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
    msg.setTimeStamp(0.100059647574);
    msg.setSource(17828U);
    msg.setSourceEntity(43U);
    msg.setDestination(18447U);
    msg.setDestinationEntity(238U);
    msg.id = 253U;
    msg.value = 0.390144687318;

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
    msg.setTimeStamp(0.0632035704228);
    msg.setSource(28430U);
    msg.setSourceEntity(123U);
    msg.setDestination(43935U);
    msg.setDestinationEntity(236U);
    msg.id = 102U;
    msg.value = 0.596249605244;

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
    msg.setTimeStamp(0.18167189014);
    msg.setSource(49668U);
    msg.setSourceEntity(43U);
    msg.setDestination(17514U);
    msg.setDestinationEntity(222U);
    msg.id = 247U;
    msg.value = 0.70871677349;

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
    msg.setTimeStamp(0.599902138465);
    msg.setSource(38516U);
    msg.setSourceEntity(51U);
    msg.setDestination(40437U);
    msg.setDestinationEntity(21U);
    msg.x = 0.64401060812;
    msg.y = 0.708480856812;
    msg.z = 0.922168427738;
    msg.phi = 0.112767246939;
    msg.theta = 0.182336463889;
    msg.psi = 0.587697083586;

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
    msg.setTimeStamp(0.362951425165);
    msg.setSource(19519U);
    msg.setSourceEntity(62U);
    msg.setDestination(8866U);
    msg.setDestinationEntity(248U);
    msg.x = 0.562085895671;
    msg.y = 0.418587671767;
    msg.z = 0.721607442626;
    msg.phi = 0.62125147714;
    msg.theta = 0.434467699415;
    msg.psi = 0.661210936083;

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
    msg.setTimeStamp(0.0382394867885);
    msg.setSource(34685U);
    msg.setSourceEntity(94U);
    msg.setDestination(27491U);
    msg.setDestinationEntity(254U);
    msg.x = 0.948344994217;
    msg.y = 0.750022322464;
    msg.z = 0.234977322461;
    msg.phi = 0.798137685461;
    msg.theta = 0.737493292046;
    msg.psi = 0.0567783562935;

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
    msg.setTimeStamp(0.580289672062);
    msg.setSource(11748U);
    msg.setSourceEntity(150U);
    msg.setDestination(37692U);
    msg.setDestinationEntity(89U);
    msg.beam_width = 0.998693613753;
    msg.beam_height = 0.999919966638;

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
    msg.setTimeStamp(0.752490751472);
    msg.setSource(54811U);
    msg.setSourceEntity(157U);
    msg.setDestination(40930U);
    msg.setDestinationEntity(94U);
    msg.beam_width = 0.994191618161;
    msg.beam_height = 0.692064546919;

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
    msg.setTimeStamp(0.140095527856);
    msg.setSource(10320U);
    msg.setSourceEntity(65U);
    msg.setDestination(28856U);
    msg.setDestinationEntity(206U);
    msg.beam_width = 0.0730753663138;
    msg.beam_height = 0.0992398680619;

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
    msg.setTimeStamp(0.940559871535);
    msg.setSource(6826U);
    msg.setSourceEntity(36U);
    msg.setDestination(60646U);
    msg.setDestinationEntity(119U);
    msg.sane = 77U;

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
    msg.setTimeStamp(0.944601603274);
    msg.setSource(49647U);
    msg.setSourceEntity(104U);
    msg.setDestination(59099U);
    msg.setDestinationEntity(182U);
    msg.sane = 119U;

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
    msg.setTimeStamp(0.44183958008);
    msg.setSource(55221U);
    msg.setSourceEntity(250U);
    msg.setDestination(22636U);
    msg.setDestinationEntity(72U);
    msg.sane = 48U;

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
    msg.setTimeStamp(0.415871688106);
    msg.setSource(45972U);
    msg.setSourceEntity(162U);
    msg.setDestination(10262U);
    msg.setDestinationEntity(179U);
    msg.value = 0.9013881924;

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
    msg.setTimeStamp(0.408431441964);
    msg.setSource(5158U);
    msg.setSourceEntity(169U);
    msg.setDestination(23860U);
    msg.setDestinationEntity(170U);
    msg.value = 0.845381711388;

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
    msg.setTimeStamp(0.307716964172);
    msg.setSource(339U);
    msg.setSourceEntity(123U);
    msg.setDestination(22732U);
    msg.setDestinationEntity(90U);
    msg.value = 0.342338399852;

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
    msg.setTimeStamp(0.778200793489);
    msg.setSource(41181U);
    msg.setSourceEntity(41U);
    msg.setDestination(42182U);
    msg.setDestinationEntity(143U);
    msg.value = 0.614034301456;

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
    msg.setTimeStamp(0.971383104292);
    msg.setSource(23242U);
    msg.setSourceEntity(4U);
    msg.setDestination(6636U);
    msg.setDestinationEntity(253U);
    msg.value = 0.0910371455067;

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
    msg.setTimeStamp(0.41092645005);
    msg.setSource(25797U);
    msg.setSourceEntity(215U);
    msg.setDestination(65350U);
    msg.setDestinationEntity(25U);
    msg.value = 0.490816487513;

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
    msg.setTimeStamp(0.247248306104);
    msg.setSource(31526U);
    msg.setSourceEntity(201U);
    msg.setDestination(27472U);
    msg.setDestinationEntity(238U);
    msg.value = 0.689407069148;

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
    msg.setTimeStamp(0.32263687076);
    msg.setSource(56801U);
    msg.setSourceEntity(97U);
    msg.setDestination(61348U);
    msg.setDestinationEntity(42U);
    msg.value = 0.714383447764;

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
    msg.setTimeStamp(0.211570399607);
    msg.setSource(17094U);
    msg.setSourceEntity(108U);
    msg.setDestination(36008U);
    msg.setDestinationEntity(65U);
    msg.value = 0.467788586255;

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
    msg.setTimeStamp(0.988812815814);
    msg.setSource(49901U);
    msg.setSourceEntity(92U);
    msg.setDestination(39550U);
    msg.setDestinationEntity(216U);
    msg.value = 0.927408872249;

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
    msg.setTimeStamp(0.858620929363);
    msg.setSource(24862U);
    msg.setSourceEntity(89U);
    msg.setDestination(14579U);
    msg.setDestinationEntity(97U);
    msg.value = 0.620046434767;

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
    msg.setTimeStamp(0.675225667722);
    msg.setSource(51655U);
    msg.setSourceEntity(243U);
    msg.setDestination(54453U);
    msg.setDestinationEntity(226U);
    msg.value = 0.176884604666;

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
    msg.setTimeStamp(0.821569719715);
    msg.setSource(35756U);
    msg.setSourceEntity(222U);
    msg.setDestination(16284U);
    msg.setDestinationEntity(35U);
    msg.value = 0.196721490066;

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
    msg.setTimeStamp(0.0490223849132);
    msg.setSource(17319U);
    msg.setSourceEntity(112U);
    msg.setDestination(13029U);
    msg.setDestinationEntity(32U);
    msg.value = 0.531289884677;

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
    msg.setTimeStamp(0.792997209404);
    msg.setSource(64635U);
    msg.setSourceEntity(68U);
    msg.setDestination(32880U);
    msg.setDestinationEntity(81U);
    msg.value = 0.0240196060149;

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
    msg.setTimeStamp(0.0547915803663);
    msg.setSource(41717U);
    msg.setSourceEntity(201U);
    msg.setDestination(10380U);
    msg.setDestinationEntity(123U);
    msg.value = 0.293761667111;

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
    msg.setTimeStamp(0.788081665878);
    msg.setSource(38741U);
    msg.setSourceEntity(79U);
    msg.setDestination(19517U);
    msg.setDestinationEntity(140U);
    msg.value = 0.992879358745;

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
    msg.setTimeStamp(0.542982967865);
    msg.setSource(52948U);
    msg.setSourceEntity(236U);
    msg.setDestination(44749U);
    msg.setDestinationEntity(78U);
    msg.value = 0.0124204684334;

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
    msg.setTimeStamp(0.257906545386);
    msg.setSource(14091U);
    msg.setSourceEntity(41U);
    msg.setDestination(57789U);
    msg.setDestinationEntity(230U);
    msg.value = 0.709598731514;

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
    msg.setTimeStamp(0.0601919195694);
    msg.setSource(65226U);
    msg.setSourceEntity(88U);
    msg.setDestination(3358U);
    msg.setDestinationEntity(199U);
    msg.value = 0.769033392207;

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
    msg.setTimeStamp(0.0151529986838);
    msg.setSource(11001U);
    msg.setSourceEntity(115U);
    msg.setDestination(45703U);
    msg.setDestinationEntity(21U);
    msg.value = 0.139642777157;

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
    msg.setTimeStamp(0.947592476721);
    msg.setSource(52659U);
    msg.setSourceEntity(191U);
    msg.setDestination(39212U);
    msg.setDestinationEntity(164U);
    msg.value = 0.688889329232;

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
    msg.setTimeStamp(0.910792310201);
    msg.setSource(39719U);
    msg.setSourceEntity(61U);
    msg.setDestination(64535U);
    msg.setDestinationEntity(224U);
    msg.value = 0.570666023338;

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
    msg.setTimeStamp(0.649213931693);
    msg.setSource(25804U);
    msg.setSourceEntity(138U);
    msg.setDestination(10522U);
    msg.setDestinationEntity(220U);
    msg.value = 0.987715264016;

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
    msg.setTimeStamp(0.762412739948);
    msg.setSource(48638U);
    msg.setSourceEntity(167U);
    msg.setDestination(39313U);
    msg.setDestinationEntity(35U);
    msg.validity = 41232U;
    msg.type = 183U;
    msg.tow = 424958564U;
    msg.base_lat = 0.196803176793;
    msg.base_lon = 0.586705295467;
    msg.base_height = 0.46764936768;
    msg.n = 0.345358379867;
    msg.e = 0.00948067233205;
    msg.d = 0.447228541697;
    msg.v_n = 0.295235132553;
    msg.v_e = 0.739166437555;
    msg.v_d = 0.813362961249;
    msg.satellites = 13U;
    msg.iar_hyp = 51722U;
    msg.iar_ratio = 0.10074377162;

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
    msg.setTimeStamp(0.974895677485);
    msg.setSource(50544U);
    msg.setSourceEntity(89U);
    msg.setDestination(13417U);
    msg.setDestinationEntity(202U);
    msg.validity = 20523U;
    msg.type = 229U;
    msg.tow = 2696265795U;
    msg.base_lat = 0.00680261994148;
    msg.base_lon = 0.686162012796;
    msg.base_height = 0.286224337395;
    msg.n = 0.693661004757;
    msg.e = 0.386041178604;
    msg.d = 0.763752018216;
    msg.v_n = 0.124331759986;
    msg.v_e = 0.605335535807;
    msg.v_d = 0.140896721271;
    msg.satellites = 247U;
    msg.iar_hyp = 35031U;
    msg.iar_ratio = 0.567824613248;

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
    msg.setTimeStamp(0.620313966169);
    msg.setSource(51917U);
    msg.setSourceEntity(248U);
    msg.setDestination(19737U);
    msg.setDestinationEntity(65U);
    msg.validity = 40453U;
    msg.type = 45U;
    msg.tow = 2937864704U;
    msg.base_lat = 0.885799036355;
    msg.base_lon = 0.65151264113;
    msg.base_height = 0.462311634799;
    msg.n = 0.454900033622;
    msg.e = 0.673399880423;
    msg.d = 0.438649942246;
    msg.v_n = 0.513611237885;
    msg.v_e = 0.291108958632;
    msg.v_d = 0.0795018670147;
    msg.satellites = 178U;
    msg.iar_hyp = 1649U;
    msg.iar_ratio = 0.31489397292;

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
    msg.setTimeStamp(0.722373360409);
    msg.setSource(5068U);
    msg.setSourceEntity(42U);
    msg.setDestination(49832U);
    msg.setDestinationEntity(47U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.825030123511;
    tmp_msg_0.lon = 0.478994503883;
    tmp_msg_0.height = 0.577653605348;
    tmp_msg_0.x = 0.377246900798;
    tmp_msg_0.y = 0.148867650283;
    tmp_msg_0.z = 0.965898813221;
    tmp_msg_0.phi = 0.273674153035;
    tmp_msg_0.theta = 0.524508612342;
    tmp_msg_0.psi = 0.0949438875224;
    tmp_msg_0.u = 0.825634778352;
    tmp_msg_0.v = 0.177997460959;
    tmp_msg_0.w = 0.157780696785;
    tmp_msg_0.vx = 0.79342227235;
    tmp_msg_0.vy = 0.225404968382;
    tmp_msg_0.vz = 0.051874889611;
    tmp_msg_0.p = 0.808090587382;
    tmp_msg_0.q = 0.52013423453;
    tmp_msg_0.r = 0.302441312294;
    tmp_msg_0.depth = 0.811440581578;
    tmp_msg_0.alt = 0.557318399889;
    msg.state.set(tmp_msg_0);
    msg.type = 66U;

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
    msg.setTimeStamp(0.715846461054);
    msg.setSource(31991U);
    msg.setSourceEntity(243U);
    msg.setDestination(60218U);
    msg.setDestinationEntity(127U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.951154680818;
    tmp_msg_0.lon = 0.794613157308;
    tmp_msg_0.height = 0.278890682731;
    tmp_msg_0.x = 0.0824586381753;
    tmp_msg_0.y = 0.597236640359;
    tmp_msg_0.z = 0.624528925892;
    tmp_msg_0.phi = 0.390969733238;
    tmp_msg_0.theta = 0.506451277863;
    tmp_msg_0.psi = 0.969468619945;
    tmp_msg_0.u = 0.207750865637;
    tmp_msg_0.v = 0.622769181551;
    tmp_msg_0.w = 0.719847929462;
    tmp_msg_0.vx = 0.621092582503;
    tmp_msg_0.vy = 0.869268343782;
    tmp_msg_0.vz = 0.508043013898;
    tmp_msg_0.p = 0.0597681576123;
    tmp_msg_0.q = 0.940598299326;
    tmp_msg_0.r = 0.10220501539;
    tmp_msg_0.depth = 0.89084300669;
    tmp_msg_0.alt = 0.482526668701;
    msg.state.set(tmp_msg_0);
    msg.type = 20U;

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
    msg.setTimeStamp(0.553597218656);
    msg.setSource(56745U);
    msg.setSourceEntity(102U);
    msg.setDestination(38142U);
    msg.setDestinationEntity(30U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.200915922587;
    tmp_msg_0.lon = 0.99463760762;
    tmp_msg_0.height = 0.646599717712;
    tmp_msg_0.x = 0.0894896897229;
    tmp_msg_0.y = 0.723468869384;
    tmp_msg_0.z = 0.957602717154;
    tmp_msg_0.phi = 0.072957599858;
    tmp_msg_0.theta = 0.551411214745;
    tmp_msg_0.psi = 0.184223165047;
    tmp_msg_0.u = 0.77869784531;
    tmp_msg_0.v = 0.412668523852;
    tmp_msg_0.w = 0.91199972884;
    tmp_msg_0.vx = 0.589310259667;
    tmp_msg_0.vy = 0.089252063208;
    tmp_msg_0.vz = 0.0455471400078;
    tmp_msg_0.p = 0.946359250707;
    tmp_msg_0.q = 0.758527244917;
    tmp_msg_0.r = 0.415670203261;
    tmp_msg_0.depth = 0.449005649306;
    tmp_msg_0.alt = 0.40086078205;
    msg.state.set(tmp_msg_0);
    msg.type = 213U;

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
    msg.setTimeStamp(0.688196004463);
    msg.setSource(20679U);
    msg.setSourceEntity(92U);
    msg.setDestination(52683U);
    msg.setDestinationEntity(92U);
    msg.value = 0.980829437787;

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
    msg.setTimeStamp(0.863024062343);
    msg.setSource(38703U);
    msg.setSourceEntity(128U);
    msg.setDestination(27985U);
    msg.setDestinationEntity(73U);
    msg.value = 0.665452154358;

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
    msg.setTimeStamp(0.749786991049);
    msg.setSource(10007U);
    msg.setSourceEntity(152U);
    msg.setDestination(12766U);
    msg.setDestinationEntity(20U);
    msg.value = 0.316080495156;

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
    msg.setTimeStamp(0.788645161567);
    msg.setSource(46412U);
    msg.setSourceEntity(118U);
    msg.setDestination(60130U);
    msg.setDestinationEntity(186U);
    msg.value = 0.612648410662;

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
    msg.setTimeStamp(0.750402783089);
    msg.setSource(30464U);
    msg.setSourceEntity(22U);
    msg.setDestination(61733U);
    msg.setDestinationEntity(228U);
    msg.value = 0.159814367729;

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
    msg.setTimeStamp(0.587298258392);
    msg.setSource(7493U);
    msg.setSourceEntity(43U);
    msg.setDestination(22885U);
    msg.setDestinationEntity(7U);
    msg.value = 0.781473820058;

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
    msg.setTimeStamp(0.904731879345);
    msg.setSource(58483U);
    msg.setSourceEntity(58U);
    msg.setDestination(47705U);
    msg.setDestinationEntity(98U);
    msg.value = 0.61807645665;

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
    msg.setTimeStamp(0.799658746225);
    msg.setSource(12883U);
    msg.setSourceEntity(185U);
    msg.setDestination(17439U);
    msg.setDestinationEntity(205U);
    msg.value = 0.0490404589463;

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
    msg.setTimeStamp(0.833502972992);
    msg.setSource(55023U);
    msg.setSourceEntity(137U);
    msg.setDestination(43816U);
    msg.setDestinationEntity(91U);
    msg.value = 0.796218518029;

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
    msg.setTimeStamp(0.648906133688);
    msg.setSource(14634U);
    msg.setSourceEntity(247U);
    msg.setDestination(6362U);
    msg.setDestinationEntity(212U);
    msg.value = 0.0511052264895;

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
    msg.setTimeStamp(0.732362357807);
    msg.setSource(45134U);
    msg.setSourceEntity(192U);
    msg.setDestination(27693U);
    msg.setDestinationEntity(84U);
    msg.value = 0.0390674252626;

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
    msg.setTimeStamp(0.547491599898);
    msg.setSource(17662U);
    msg.setSourceEntity(104U);
    msg.setDestination(6981U);
    msg.setDestinationEntity(199U);
    msg.value = 0.0178353542382;

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
    msg.setTimeStamp(0.111042046838);
    msg.setSource(48226U);
    msg.setSourceEntity(253U);
    msg.setDestination(64292U);
    msg.setDestinationEntity(125U);
    msg.value = 0.54001164515;

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
    msg.setTimeStamp(0.0321522741322);
    msg.setSource(59498U);
    msg.setSourceEntity(199U);
    msg.setDestination(15218U);
    msg.setDestinationEntity(127U);
    msg.value = 0.620008371236;

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
    msg.setTimeStamp(0.620896314245);
    msg.setSource(4467U);
    msg.setSourceEntity(53U);
    msg.setDestination(45859U);
    msg.setDestinationEntity(19U);
    msg.value = 0.441693274421;

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
    msg.setTimeStamp(0.408772268969);
    msg.setSource(35288U);
    msg.setSourceEntity(228U);
    msg.setDestination(54554U);
    msg.setDestinationEntity(80U);
    msg.id = 69U;
    msg.zoom = 233U;
    msg.action = 199U;

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
    msg.setTimeStamp(0.756763961306);
    msg.setSource(27582U);
    msg.setSourceEntity(138U);
    msg.setDestination(49480U);
    msg.setDestinationEntity(154U);
    msg.id = 87U;
    msg.zoom = 79U;
    msg.action = 248U;

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
    msg.setTimeStamp(0.357405284792);
    msg.setSource(4732U);
    msg.setSourceEntity(114U);
    msg.setDestination(29117U);
    msg.setDestinationEntity(108U);
    msg.id = 253U;
    msg.zoom = 140U;
    msg.action = 252U;

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
    msg.setTimeStamp(0.633569201899);
    msg.setSource(14729U);
    msg.setSourceEntity(140U);
    msg.setDestination(42702U);
    msg.setDestinationEntity(77U);
    msg.id = 1U;
    msg.value = 0.446995157583;

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
    msg.setTimeStamp(0.789042727867);
    msg.setSource(33047U);
    msg.setSourceEntity(206U);
    msg.setDestination(4913U);
    msg.setDestinationEntity(49U);
    msg.id = 27U;
    msg.value = 0.554483615586;

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
    msg.setTimeStamp(0.905005606588);
    msg.setSource(19749U);
    msg.setSourceEntity(170U);
    msg.setDestination(4491U);
    msg.setDestinationEntity(228U);
    msg.id = 53U;
    msg.value = 0.209832321249;

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
    msg.setTimeStamp(0.264647405255);
    msg.setSource(17611U);
    msg.setSourceEntity(82U);
    msg.setDestination(35236U);
    msg.setDestinationEntity(112U);
    msg.id = 238U;
    msg.value = 0.59141344941;

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
    msg.setTimeStamp(0.906404639507);
    msg.setSource(57706U);
    msg.setSourceEntity(250U);
    msg.setDestination(23339U);
    msg.setDestinationEntity(91U);
    msg.id = 167U;
    msg.value = 0.119740551295;

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
    msg.setTimeStamp(0.816590104539);
    msg.setSource(43508U);
    msg.setSourceEntity(225U);
    msg.setDestination(5148U);
    msg.setDestinationEntity(49U);
    msg.id = 146U;
    msg.value = 0.0522662508088;

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
    msg.setTimeStamp(0.733083366383);
    msg.setSource(50270U);
    msg.setSourceEntity(143U);
    msg.setDestination(32996U);
    msg.setDestinationEntity(131U);
    msg.id = 248U;
    msg.angle = 0.0323064720094;

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
    msg.setTimeStamp(0.270676793147);
    msg.setSource(9127U);
    msg.setSourceEntity(43U);
    msg.setDestination(40226U);
    msg.setDestinationEntity(44U);
    msg.id = 138U;
    msg.angle = 0.829981122784;

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
    msg.setTimeStamp(0.693926927259);
    msg.setSource(53677U);
    msg.setSourceEntity(231U);
    msg.setDestination(43273U);
    msg.setDestinationEntity(225U);
    msg.id = 52U;
    msg.angle = 0.400239457107;

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
    msg.setTimeStamp(0.186685778974);
    msg.setSource(52783U);
    msg.setSourceEntity(244U);
    msg.setDestination(63664U);
    msg.setDestinationEntity(44U);
    msg.op = 46U;
    msg.actions.assign("XQSTPQJZZQGMGONPDMIWPOOVLQVFOBNOUDDBQWZETGQMEYBUJNSJAGRCDTXVIFLZFWLCGVZSDKYIKHHXACQQPMXIHGMSMVPTXGKTPDSARNFSTBHYABHKXGMXHFARINICFACBYYUHOLASUZUSIKREBRDAYCOVEHLRCVKJOZKQPCKFLERMPHMJ");

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
    msg.setTimeStamp(0.893089037369);
    msg.setSource(40259U);
    msg.setSourceEntity(182U);
    msg.setDestination(49807U);
    msg.setDestinationEntity(40U);
    msg.op = 12U;
    msg.actions.assign("SIMKGVZVCPMCUMCHJOXUFAWOVGFRXDD");

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
    msg.setTimeStamp(0.886905179165);
    msg.setSource(55688U);
    msg.setSourceEntity(53U);
    msg.setDestination(62888U);
    msg.setDestinationEntity(115U);
    msg.op = 156U;
    msg.actions.assign("FWABYJZFNZXYVQBYJSZRLVHBNKMCKDOBVOILECECXIUTQWZJUPARJSEJMRUVPAGGPYICNWDBHUEAGIRGEXSBPMZWRDCUGUTRMBFMHKENDAEYUTVZQOOWXLFGYDYZKFMILTTGHHBQKFWZKX");

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
    msg.setTimeStamp(0.372805066122);
    msg.setSource(22865U);
    msg.setSourceEntity(249U);
    msg.setDestination(51386U);
    msg.setDestinationEntity(105U);
    msg.actions.assign("NUZWUDJOSLRHKBMRHAXZEFXQQIKT");

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
    msg.setTimeStamp(0.341260186169);
    msg.setSource(15057U);
    msg.setSourceEntity(6U);
    msg.setDestination(62320U);
    msg.setDestinationEntity(31U);
    msg.actions.assign("XXNMSKJWZDBZMCGCCCODYHUZOWQOBSCJRLDOKTYIWRQQHOPCTDPAGIOSMKFQHAFYFYMWQIPHZFENFBLQQVSSXQBMNZ");

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
    msg.setTimeStamp(0.295101935418);
    msg.setSource(17893U);
    msg.setSourceEntity(240U);
    msg.setDestination(60438U);
    msg.setDestinationEntity(119U);
    msg.actions.assign("TAWVNVXFOCEQPTLBIQXHOMRNXOYPKAWESIWFWLOJVTWPCUYUPGRSSHWQDKLKCJVNQDRIPLSYBRPORVNHFKWJOWUFZUZGRIIFHHLGBMGNRWGEGIEGAEUMZGNXJJNDGBZRKZTLBFAJD");

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
    msg.setTimeStamp(0.511526560959);
    msg.setSource(30658U);
    msg.setSourceEntity(105U);
    msg.setDestination(53728U);
    msg.setDestinationEntity(122U);
    msg.button = 162U;
    msg.value = 5U;

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
    msg.setTimeStamp(0.572052051481);
    msg.setSource(41711U);
    msg.setSourceEntity(80U);
    msg.setDestination(32105U);
    msg.setDestinationEntity(30U);
    msg.button = 48U;
    msg.value = 124U;

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
    msg.setTimeStamp(0.187991845869);
    msg.setSource(45826U);
    msg.setSourceEntity(208U);
    msg.setDestination(39395U);
    msg.setDestinationEntity(53U);
    msg.button = 33U;
    msg.value = 31U;

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
    msg.setTimeStamp(0.0900831327959);
    msg.setSource(12303U);
    msg.setSourceEntity(233U);
    msg.setDestination(44077U);
    msg.setDestinationEntity(205U);
    msg.op = 27U;
    msg.text.assign("SZCEHYRAQHFBKIQFOJOWTGUPLJGGWTTYVVEBSWVBEIGGJFXZRJAVDHIHQTMVEHSZNWCKRHAXMMXZMYBGUFBRAUAFRNWUPTPPOLIKJHOYQBWWIFVUWQZFMNQPTWRFYEYNQOCEIPQNIEUKINPKDVFLXWRISLCCSBDROCDPLDEOKSKZMKLCVILDTXJRTPX");

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
    msg.setTimeStamp(0.124566834724);
    msg.setSource(10573U);
    msg.setSourceEntity(65U);
    msg.setDestination(28657U);
    msg.setDestinationEntity(19U);
    msg.op = 166U;
    msg.text.assign("ZPZPYJVHZFAOXTNATCPXCDRWYQIPOECJZREWFMYFOKSQKZSCGDOCPOTVIKASYULRVGBLUFSGRLGVJYUXIZFLZOFSHLDZABMLVJIJQODTJXLUJFTTWYQZOPKDRNYMIOPAGXWWFQVKKITKMNVDLCHEYBASXWIWQEBDAIWUWIRBRQJEURHPTSBLMCBUND");

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
    msg.setTimeStamp(0.630112822369);
    msg.setSource(14236U);
    msg.setSourceEntity(37U);
    msg.setDestination(61023U);
    msg.setDestinationEntity(169U);
    msg.op = 249U;
    msg.text.assign("JFWYBYHLSTMNWWEFAROWMXSZYZPOTTMR");

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
    msg.setTimeStamp(0.441032192572);
    msg.setSource(36133U);
    msg.setSourceEntity(21U);
    msg.setDestination(20165U);
    msg.setDestinationEntity(7U);
    msg.op = 145U;
    msg.time_remain = 0.877236053702;
    msg.sched_time = 0.260101249892;

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
    msg.setTimeStamp(0.235441393861);
    msg.setSource(30367U);
    msg.setSourceEntity(94U);
    msg.setDestination(40142U);
    msg.setDestinationEntity(54U);
    msg.op = 244U;
    msg.time_remain = 0.682687655392;
    msg.sched_time = 0.37964871875;

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
    msg.setTimeStamp(0.534824176682);
    msg.setSource(61199U);
    msg.setSourceEntity(76U);
    msg.setDestination(2835U);
    msg.setDestinationEntity(227U);
    msg.op = 126U;
    msg.time_remain = 0.459753091911;
    msg.sched_time = 0.140701304788;

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
    msg.setTimeStamp(0.221387782315);
    msg.setSource(12805U);
    msg.setSourceEntity(190U);
    msg.setDestination(18189U);
    msg.setDestinationEntity(212U);
    msg.name.assign("OVWGUBCNJWQNLGBCGPRFKFWDTUKMXHQKCYMZQNERHFTVYFAIGOZNKXVRTYVTTEDJAIXVLQETFA");
    msg.op = 227U;
    msg.sched_time = 0.271627256439;

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
    msg.setTimeStamp(0.683397969194);
    msg.setSource(44567U);
    msg.setSourceEntity(187U);
    msg.setDestination(51611U);
    msg.setDestinationEntity(205U);
    msg.name.assign("JPRNAXWQCCDLIJAREBMTNGXAVWTMOKCUZKXTDVZWGTSVYSBDZXPUFFNZSQHVMLUWDHBZAFMXBLYZAHJNXFNQSSZKXIMRQUBOCBLFOFMRJZICUHYKHHFGEIYWOZPPQJEUSVPEIPCIDPJCRKOMYQPRRLZRDYEOGGLBGNELUKYHYVCXWYLKFTIAJOKHSNKMTUQSDTHAMTKAOSWNQLVBWMJJ");
    msg.op = 54U;
    msg.sched_time = 0.791108402741;

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
    msg.setTimeStamp(0.0619800955439);
    msg.setSource(32079U);
    msg.setSourceEntity(57U);
    msg.setDestination(29243U);
    msg.setDestinationEntity(132U);
    msg.name.assign("XZPRAKRQZIJKHTOJZJRZLXVXYBMTWMDNAQBCRGVBHUJXFBNCOQOWVXCPYPQOMPMYFZCFKVTLITLBKAAFMJCROFOTEWWNUGDZMIYCBKDCKCYIWWGSFZZ");
    msg.op = 67U;
    msg.sched_time = 0.272597313589;

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
    msg.setTimeStamp(0.30876612092);
    msg.setSource(53584U);
    msg.setSourceEntity(129U);
    msg.setDestination(38386U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.0915420078588);
    msg.setSource(55864U);
    msg.setSourceEntity(19U);
    msg.setDestination(50102U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.98019523368);
    msg.setSource(27157U);
    msg.setSourceEntity(208U);
    msg.setDestination(6044U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.90727830293);
    msg.setSource(7426U);
    msg.setSourceEntity(53U);
    msg.setDestination(20644U);
    msg.setDestinationEntity(180U);
    msg.name.assign("KMCMLYNTMEGKPHHCNAVMCBNWSNOAKDTTDCFBPNCRXOLOOXUVHEAHMLXOJJJXXJKUJHCJADNKZUWYEENLBAQEPKKZNTVNRFZJKIHRCTIGEUOEOVHRZBCUXSTADZARVCBISSYFXXUBYSLGUGSAIIUTFASJQTWFPGTFRPVQHFESXUILMMWJPBQDYDHZVVBEZYAGGEIFOPQDI");
    msg.state = 60U;

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
    msg.setTimeStamp(0.718194789455);
    msg.setSource(19719U);
    msg.setSourceEntity(113U);
    msg.setDestination(45284U);
    msg.setDestinationEntity(113U);
    msg.name.assign("VOHMZBOMRLCTXMSS");
    msg.state = 176U;

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
    msg.setTimeStamp(0.175624036841);
    msg.setSource(18674U);
    msg.setSourceEntity(202U);
    msg.setDestination(65282U);
    msg.setDestinationEntity(133U);
    msg.name.assign("CEZBMNVAHYVGOIGGRDUAFCGVFOKAUJP");
    msg.state = 46U;

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
    msg.setTimeStamp(0.38004339582);
    msg.setSource(16861U);
    msg.setSourceEntity(192U);
    msg.setDestination(16396U);
    msg.setDestinationEntity(138U);
    msg.name.assign("GXCENYPQZFIROQHYHMJDEGDLBSDMPIWUPESUPEOBJUWYRSGZWGKJTNSIQVPMNUMGJXJIUCATHMNZXMYCJEOOKBMJQU");
    msg.value = 198U;

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
    msg.setTimeStamp(0.877837345871);
    msg.setSource(19659U);
    msg.setSourceEntity(166U);
    msg.setDestination(52676U);
    msg.setDestinationEntity(215U);
    msg.name.assign("MPYPSEWWQBRVNMCQGHAPHMMXAKAEFNSWRYUOYNQKUSDWA");
    msg.value = 62U;

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
    msg.setTimeStamp(0.233404130976);
    msg.setSource(923U);
    msg.setSourceEntity(8U);
    msg.setDestination(63839U);
    msg.setDestinationEntity(126U);
    msg.name.assign("PTAKUWDYXKVNRSEFWZFBJVJDTBRYGDINGAPMRJVTXHYSQKPXBSWGWRROOIJ");
    msg.value = 253U;

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
    msg.setTimeStamp(0.951342369797);
    msg.setSource(3176U);
    msg.setSourceEntity(52U);
    msg.setDestination(36094U);
    msg.setDestinationEntity(37U);
    msg.name.assign("AKJLYWQBFUSDMLUBXOGCTWAZAUSEMROWXIQWUXFUGGICCNOABIAGBQKGHPJLIMYNFSWBOAPUIGNXVSTYPAJZHXOKCZKVQVTSNPLHUEWDDOHZQIGMTRVFRQTPETORQAVBZLJGFKKWZB");

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
    msg.setTimeStamp(0.992610985372);
    msg.setSource(63768U);
    msg.setSourceEntity(28U);
    msg.setDestination(25583U);
    msg.setDestinationEntity(214U);
    msg.name.assign("AYQXEGLRUQKZFRFCIMQUNAWHSZWBKWKJYEZRDPYXEJXOETKJIJENPBPLBODJQMWONINHGTNSLRIPYGPEJXEUFCETGRMFAGMBJZSFSARFCIXDMGOLPHVWOAYOOLLKKOUSVZNRDHRCHEVUSFMVHKMQARPLNUPSXQNEQTTGDOTLYJWCPQJBFLHC");

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
    msg.setTimeStamp(0.691837803394);
    msg.setSource(38331U);
    msg.setSourceEntity(120U);
    msg.setDestination(46086U);
    msg.setDestinationEntity(18U);
    msg.name.assign("JWSUIGSVBIMPOWXFKOLLZAVJHAGQXHAOJQYDWZWNRJLPMAKBBYTMEQUODCERPEFAZVMWIVVKDVCHUITFPYCAHXSBUAGRRNLZSHNDBXZUJPSRJYSMESEKWCVHITQUTYTEXGXLVRGTJWNFMUMRBNOGLBZGXNMEJCYMOJDGQUNWBYCDKBOVGILRJRUQKDDNRPSCEH");

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
    msg.setTimeStamp(0.403592522318);
    msg.setSource(37553U);
    msg.setSourceEntity(58U);
    msg.setDestination(18980U);
    msg.setDestinationEntity(223U);
    msg.name.assign("TIZKSBCAIUSIKODYZPCWNQBBAPPAFXHHUTZBYMRYMAERNKVMXJNEVLGOAQXZLAFGQWVPEZSYHUHDEYFLHTACOJNENCOTTRUMCBVHRIQBYZAM");
    msg.value = 248U;

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
    msg.setTimeStamp(0.804882100368);
    msg.setSource(35743U);
    msg.setSourceEntity(76U);
    msg.setDestination(31681U);
    msg.setDestinationEntity(26U);
    msg.name.assign("KYDSOPMSBYAFHRXFPLDWUDKXPAVDCVFGEECBTFWDTXZMVOEVDNCJKKJINRJRUUYWZVFILHPDLQRPIIMYQXSOHICRCEGVPUNOCTNLDMHTNRZS");
    msg.value = 20U;

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
    msg.setTimeStamp(0.766655198952);
    msg.setSource(63636U);
    msg.setSourceEntity(173U);
    msg.setDestination(36844U);
    msg.setDestinationEntity(70U);
    msg.name.assign("ADMUAHPXJTWSZWYRBMXHLMQAOYOMWUCNUIIWKSQNZMBJNKCEMDSJDOZBHDUYXONZXYRZLCFFYWBVQGMLGTUIMNCPPLRKOUGSNUHRGBLMQDAPGQCVIVJAKSKVBEZBDUIASXQCYVSRGDXXRFWNTAYKEWPPC");
    msg.value = 249U;

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
    msg.setTimeStamp(0.239125448131);
    msg.setSource(62223U);
    msg.setSourceEntity(142U);
    msg.setDestination(56368U);
    msg.setDestinationEntity(210U);
    msg.id = 14U;
    msg.period = 1192187270U;
    msg.duty_cycle = 2553469868U;

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
    msg.setTimeStamp(0.361351945674);
    msg.setSource(53117U);
    msg.setSourceEntity(25U);
    msg.setDestination(17877U);
    msg.setDestinationEntity(38U);
    msg.id = 203U;
    msg.period = 2258178120U;
    msg.duty_cycle = 2439474894U;

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
    msg.setTimeStamp(0.972179513387);
    msg.setSource(8591U);
    msg.setSourceEntity(191U);
    msg.setDestination(18240U);
    msg.setDestinationEntity(88U);
    msg.id = 88U;
    msg.period = 3780576548U;
    msg.duty_cycle = 2199974202U;

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
    msg.setTimeStamp(0.917368369835);
    msg.setSource(39271U);
    msg.setSourceEntity(27U);
    msg.setDestination(51083U);
    msg.setDestinationEntity(61U);
    msg.id = 107U;
    msg.period = 325732298U;
    msg.duty_cycle = 1997661675U;

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
    msg.setTimeStamp(0.910965092388);
    msg.setSource(56355U);
    msg.setSourceEntity(203U);
    msg.setDestination(4935U);
    msg.setDestinationEntity(50U);
    msg.id = 138U;
    msg.period = 4235052132U;
    msg.duty_cycle = 2872460760U;

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
    msg.setTimeStamp(0.588426016783);
    msg.setSource(1926U);
    msg.setSourceEntity(174U);
    msg.setDestination(57864U);
    msg.setDestinationEntity(239U);
    msg.id = 168U;
    msg.period = 1746996573U;
    msg.duty_cycle = 4070336933U;

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
    msg.setTimeStamp(0.989362559941);
    msg.setSource(6599U);
    msg.setSourceEntity(109U);
    msg.setDestination(49131U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.216025060893;
    msg.lon = 0.967983875117;
    msg.height = 0.62334901338;
    msg.x = 0.63627505903;
    msg.y = 0.920040701708;
    msg.z = 0.0871245771079;
    msg.phi = 0.379075373444;
    msg.theta = 0.618751886673;
    msg.psi = 0.809293351569;
    msg.u = 0.415722873896;
    msg.v = 0.461777181607;
    msg.w = 0.643450561901;
    msg.vx = 0.67049975717;
    msg.vy = 0.976452729026;
    msg.vz = 0.302227617888;
    msg.p = 0.884687596234;
    msg.q = 0.969104513514;
    msg.r = 0.751775835835;
    msg.depth = 0.249894496512;
    msg.alt = 0.525885958359;

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
    msg.setTimeStamp(0.127530242333);
    msg.setSource(35825U);
    msg.setSourceEntity(241U);
    msg.setDestination(48458U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.835078498371;
    msg.lon = 0.433764240208;
    msg.height = 0.874093771214;
    msg.x = 0.394013829573;
    msg.y = 0.268657883617;
    msg.z = 0.721667633356;
    msg.phi = 0.821900781991;
    msg.theta = 0.438904014533;
    msg.psi = 0.512916071912;
    msg.u = 0.707017811249;
    msg.v = 0.304050925208;
    msg.w = 0.49300381565;
    msg.vx = 0.603874506244;
    msg.vy = 0.893279387674;
    msg.vz = 0.988644273157;
    msg.p = 0.69487546239;
    msg.q = 0.647681635322;
    msg.r = 0.716612132099;
    msg.depth = 0.111006495446;
    msg.alt = 0.347029963557;

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
    msg.setTimeStamp(0.761817339468);
    msg.setSource(37007U);
    msg.setSourceEntity(126U);
    msg.setDestination(41478U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.975308318818;
    msg.lon = 0.80384467326;
    msg.height = 0.714230161605;
    msg.x = 0.608597935934;
    msg.y = 0.349244375441;
    msg.z = 0.472789041292;
    msg.phi = 0.318569930744;
    msg.theta = 0.726564102957;
    msg.psi = 0.0281503471131;
    msg.u = 0.960731320187;
    msg.v = 0.976662056073;
    msg.w = 0.503570797422;
    msg.vx = 0.323207221649;
    msg.vy = 0.871275615458;
    msg.vz = 0.733363373203;
    msg.p = 0.60393195294;
    msg.q = 0.640172957613;
    msg.r = 0.588028035339;
    msg.depth = 0.220612463248;
    msg.alt = 0.95991173151;

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
    msg.setTimeStamp(0.13570710821);
    msg.setSource(58122U);
    msg.setSourceEntity(228U);
    msg.setDestination(3420U);
    msg.setDestinationEntity(219U);
    msg.x = 0.00830316794328;
    msg.y = 0.729085028736;
    msg.z = 0.972881577903;

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
    msg.setTimeStamp(0.892837132704);
    msg.setSource(5648U);
    msg.setSourceEntity(14U);
    msg.setDestination(59397U);
    msg.setDestinationEntity(205U);
    msg.x = 0.766634662927;
    msg.y = 0.0842070076533;
    msg.z = 0.0469264793648;

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
    msg.setTimeStamp(0.0372946617023);
    msg.setSource(61182U);
    msg.setSourceEntity(218U);
    msg.setDestination(25018U);
    msg.setDestinationEntity(192U);
    msg.x = 0.996273541795;
    msg.y = 0.676252834451;
    msg.z = 0.744530441527;

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
    msg.setTimeStamp(0.726789419004);
    msg.setSource(50363U);
    msg.setSourceEntity(198U);
    msg.setDestination(12254U);
    msg.setDestinationEntity(116U);
    msg.value = 0.0746576176712;

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
    msg.setTimeStamp(0.895256999323);
    msg.setSource(18904U);
    msg.setSourceEntity(16U);
    msg.setDestination(56243U);
    msg.setDestinationEntity(81U);
    msg.value = 0.0739231473237;

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
    msg.setTimeStamp(0.461163663005);
    msg.setSource(44504U);
    msg.setSourceEntity(36U);
    msg.setDestination(56775U);
    msg.setDestinationEntity(149U);
    msg.value = 0.624730510247;

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
    msg.setTimeStamp(0.762382191664);
    msg.setSource(37628U);
    msg.setSourceEntity(173U);
    msg.setDestination(3744U);
    msg.setDestinationEntity(44U);
    msg.value = 0.194875374336;

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
    msg.setTimeStamp(0.174276271408);
    msg.setSource(46221U);
    msg.setSourceEntity(240U);
    msg.setDestination(24588U);
    msg.setDestinationEntity(242U);
    msg.value = 0.385453094733;

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
    msg.setTimeStamp(0.0804065481512);
    msg.setSource(58837U);
    msg.setSourceEntity(2U);
    msg.setDestination(16616U);
    msg.setDestinationEntity(118U);
    msg.value = 0.502277038933;

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
    msg.setTimeStamp(0.573453658526);
    msg.setSource(44568U);
    msg.setSourceEntity(202U);
    msg.setDestination(10722U);
    msg.setDestinationEntity(163U);
    msg.x = 0.333680544033;
    msg.y = 0.516473689692;
    msg.z = 0.271688051169;
    msg.phi = 0.861542054741;
    msg.theta = 0.762505851718;
    msg.psi = 0.0836519293135;
    msg.p = 0.63570757903;
    msg.q = 0.546510651541;
    msg.r = 0.157264328467;
    msg.u = 0.193448445129;
    msg.v = 0.346745897543;
    msg.w = 0.570284836876;
    msg.bias_psi = 0.384659144892;
    msg.bias_r = 0.692994293333;

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
    msg.setTimeStamp(0.552052552193);
    msg.setSource(54768U);
    msg.setSourceEntity(59U);
    msg.setDestination(8909U);
    msg.setDestinationEntity(98U);
    msg.x = 0.671565622742;
    msg.y = 0.227363982041;
    msg.z = 0.0978363233164;
    msg.phi = 0.463212009054;
    msg.theta = 0.138594957261;
    msg.psi = 0.972225012773;
    msg.p = 0.345277006829;
    msg.q = 0.357659633531;
    msg.r = 0.768986753178;
    msg.u = 0.969397009897;
    msg.v = 0.779130373997;
    msg.w = 0.342115592462;
    msg.bias_psi = 0.120753216269;
    msg.bias_r = 0.0357844127013;

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
    msg.setTimeStamp(0.265571393728);
    msg.setSource(51669U);
    msg.setSourceEntity(215U);
    msg.setDestination(53263U);
    msg.setDestinationEntity(225U);
    msg.x = 0.9024932675;
    msg.y = 0.897939425864;
    msg.z = 0.590511936947;
    msg.phi = 0.493665668678;
    msg.theta = 0.069539242741;
    msg.psi = 0.569974300529;
    msg.p = 0.855926273335;
    msg.q = 0.563740880706;
    msg.r = 0.153340228535;
    msg.u = 0.844700538616;
    msg.v = 0.869972642164;
    msg.w = 0.503073374618;
    msg.bias_psi = 0.994001656115;
    msg.bias_r = 0.67013864945;

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
    msg.setTimeStamp(0.942614813416);
    msg.setSource(64145U);
    msg.setSourceEntity(40U);
    msg.setDestination(36487U);
    msg.setDestinationEntity(19U);
    msg.bias_psi = 0.484644444046;
    msg.bias_r = 0.637571198926;
    msg.cog = 0.625360529852;
    msg.cyaw = 0.70339256139;
    msg.lbl_rej_level = 0.671730948154;
    msg.gps_rej_level = 0.821033364301;
    msg.custom_x = 0.787232916774;
    msg.custom_y = 0.292944333474;
    msg.custom_z = 0.39326152638;

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
    msg.setTimeStamp(0.375203505509);
    msg.setSource(6292U);
    msg.setSourceEntity(17U);
    msg.setDestination(65384U);
    msg.setDestinationEntity(187U);
    msg.bias_psi = 0.198986476902;
    msg.bias_r = 0.0585423830067;
    msg.cog = 0.185617731169;
    msg.cyaw = 0.985853465114;
    msg.lbl_rej_level = 0.39909507591;
    msg.gps_rej_level = 0.325642003351;
    msg.custom_x = 0.196401608659;
    msg.custom_y = 0.615673396358;
    msg.custom_z = 0.48990729463;

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
    msg.setTimeStamp(0.248994432917);
    msg.setSource(53277U);
    msg.setSourceEntity(122U);
    msg.setDestination(37076U);
    msg.setDestinationEntity(70U);
    msg.bias_psi = 0.580738301683;
    msg.bias_r = 0.769209350293;
    msg.cog = 0.765066438062;
    msg.cyaw = 0.400535558724;
    msg.lbl_rej_level = 0.2739174234;
    msg.gps_rej_level = 0.401597426563;
    msg.custom_x = 0.841182246557;
    msg.custom_y = 0.338520514469;
    msg.custom_z = 0.450641449531;

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
    msg.setTimeStamp(0.310132301285);
    msg.setSource(39365U);
    msg.setSourceEntity(93U);
    msg.setDestination(365U);
    msg.setDestinationEntity(28U);
    msg.utc_time = 0.914046571111;
    msg.reason = 17U;

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
    msg.setTimeStamp(0.354590915673);
    msg.setSource(22915U);
    msg.setSourceEntity(43U);
    msg.setDestination(11799U);
    msg.setDestinationEntity(16U);
    msg.utc_time = 0.157739519896;
    msg.reason = 34U;

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
    msg.setTimeStamp(0.712883602865);
    msg.setSource(42855U);
    msg.setSourceEntity(57U);
    msg.setDestination(16840U);
    msg.setDestinationEntity(144U);
    msg.utc_time = 0.734642052366;
    msg.reason = 109U;

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
    msg.setTimeStamp(0.0199950008292);
    msg.setSource(34297U);
    msg.setSourceEntity(12U);
    msg.setDestination(27402U);
    msg.setDestinationEntity(192U);
    msg.id = 249U;
    msg.range = 0.910546048771;
    msg.acceptance = 124U;

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
    msg.setTimeStamp(0.637710671206);
    msg.setSource(27679U);
    msg.setSourceEntity(40U);
    msg.setDestination(33473U);
    msg.setDestinationEntity(213U);
    msg.id = 245U;
    msg.range = 0.727548776112;
    msg.acceptance = 65U;

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
    msg.setTimeStamp(0.0174603231452);
    msg.setSource(46636U);
    msg.setSourceEntity(237U);
    msg.setDestination(5720U);
    msg.setDestinationEntity(73U);
    msg.id = 152U;
    msg.range = 0.359493294353;
    msg.acceptance = 172U;

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
    msg.setTimeStamp(0.439072336192);
    msg.setSource(18254U);
    msg.setSourceEntity(46U);
    msg.setDestination(9622U);
    msg.setDestinationEntity(118U);
    msg.type = 64U;
    msg.reason = 61U;
    msg.value = 0.36106542243;
    msg.timestep = 0.121940165095;

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
    msg.setTimeStamp(0.770724853392);
    msg.setSource(62044U);
    msg.setSourceEntity(34U);
    msg.setDestination(44900U);
    msg.setDestinationEntity(186U);
    msg.type = 12U;
    msg.reason = 18U;
    msg.value = 0.509063030622;
    msg.timestep = 0.764798084604;

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
    msg.setTimeStamp(0.0376411985602);
    msg.setSource(3028U);
    msg.setSourceEntity(72U);
    msg.setDestination(11155U);
    msg.setDestinationEntity(83U);
    msg.type = 151U;
    msg.reason = 133U;
    msg.value = 0.860948575859;
    msg.timestep = 0.360954692391;

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
    msg.setTimeStamp(0.1511217042);
    msg.setSource(38563U);
    msg.setSourceEntity(136U);
    msg.setDestination(19099U);
    msg.setDestinationEntity(172U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IFQIEPKSEMVCDNQWVQHHTF");
    tmp_msg_0.lat = 0.647879424183;
    tmp_msg_0.lon = 0.247326870447;
    tmp_msg_0.depth = 0.0408090271427;
    tmp_msg_0.query_channel = 134U;
    tmp_msg_0.reply_channel = 167U;
    tmp_msg_0.transponder_delay = 228U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.399617625432;
    msg.y = 0.101311536156;
    msg.var_x = 0.316164841363;
    msg.var_y = 0.372898146837;
    msg.distance = 0.341994365631;

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
    msg.setTimeStamp(0.132670719757);
    msg.setSource(38007U);
    msg.setSourceEntity(180U);
    msg.setDestination(32727U);
    msg.setDestinationEntity(174U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ESVZBCBPIKNOJXNOOWHHDHNIEGNPRFWSQCUOQPNNMYKYXZQHQTSUJLPDHQIGAPSVWTOJTEZCAXBZMXFTVWKYJNSULAIHFKDOPQJVQWCOMFYRRKYLBKMNLSWJTSNCVYCMHFXIJLIUWEAYPGDCFYHBVGWYJZFDQERPOVGIUWVBRANRDJLPSKIDDXRMZMIUB");
    tmp_msg_0.lat = 0.0179508337574;
    tmp_msg_0.lon = 0.0815678683342;
    tmp_msg_0.depth = 0.802762798002;
    tmp_msg_0.query_channel = 140U;
    tmp_msg_0.reply_channel = 227U;
    tmp_msg_0.transponder_delay = 48U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.520357301211;
    msg.y = 0.0599681335734;
    msg.var_x = 0.20568343261;
    msg.var_y = 0.260739047973;
    msg.distance = 0.0111638220192;

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
    msg.setTimeStamp(0.673158789613);
    msg.setSource(12939U);
    msg.setSourceEntity(168U);
    msg.setDestination(16674U);
    msg.setDestinationEntity(54U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SUPGOMOPSOWQRDHEENGKGNKCIKAXCJUBWHPYBPEQNKQTQRSYJHIYWZBTDLFFXXSBXLNWUGYVEMTKIZOLZNITRDAUKXGZXJJFWLPNSFCOIBTIAZQICYHVYLMDGYKPAPVCFDEGWZVPIVXFKKVAUWUDHCTERTLDHRJJWGH");
    tmp_msg_0.lat = 0.583043325266;
    tmp_msg_0.lon = 0.47673027478;
    tmp_msg_0.depth = 0.94929205401;
    tmp_msg_0.query_channel = 45U;
    tmp_msg_0.reply_channel = 162U;
    tmp_msg_0.transponder_delay = 45U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.186474894637;
    msg.y = 0.115891132519;
    msg.var_x = 0.175947211075;
    msg.var_y = 0.60989888231;
    msg.distance = 0.998623954352;

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
    msg.setTimeStamp(0.147888579381);
    msg.setSource(29943U);
    msg.setSourceEntity(31U);
    msg.setDestination(54707U);
    msg.setDestinationEntity(52U);
    msg.state = 167U;

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
    msg.setTimeStamp(0.54444417223);
    msg.setSource(26030U);
    msg.setSourceEntity(63U);
    msg.setDestination(26054U);
    msg.setDestinationEntity(236U);
    msg.state = 234U;

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
    msg.setTimeStamp(0.419993245444);
    msg.setSource(32034U);
    msg.setSourceEntity(175U);
    msg.setDestination(51626U);
    msg.setDestinationEntity(135U);
    msg.state = 143U;

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
    msg.setTimeStamp(0.161476216224);
    msg.setSource(21023U);
    msg.setSourceEntity(242U);
    msg.setDestination(63974U);
    msg.setDestinationEntity(92U);
    msg.x = 0.54974632643;
    msg.y = 0.825356938917;
    msg.z = 0.61128296275;

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
    msg.setTimeStamp(0.274876300827);
    msg.setSource(41835U);
    msg.setSourceEntity(63U);
    msg.setDestination(3936U);
    msg.setDestinationEntity(55U);
    msg.x = 0.622751033384;
    msg.y = 0.822781443591;
    msg.z = 0.743380702207;

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
    msg.setTimeStamp(0.502311916405);
    msg.setSource(29480U);
    msg.setSourceEntity(108U);
    msg.setDestination(54887U);
    msg.setDestinationEntity(0U);
    msg.x = 0.472825984221;
    msg.y = 0.0740920903203;
    msg.z = 0.360627965917;

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
    msg.setTimeStamp(0.779082656583);
    msg.setSource(57042U);
    msg.setSourceEntity(109U);
    msg.setDestination(16379U);
    msg.setDestinationEntity(113U);
    msg.va = 0.300368119109;
    msg.aoa = 0.00297914695289;
    msg.ssa = 0.723234670444;

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
    msg.setTimeStamp(0.455059409732);
    msg.setSource(24786U);
    msg.setSourceEntity(88U);
    msg.setDestination(5486U);
    msg.setDestinationEntity(139U);
    msg.va = 0.991273506896;
    msg.aoa = 0.094545242689;
    msg.ssa = 0.471747268094;

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
    msg.setTimeStamp(0.427427457139);
    msg.setSource(25273U);
    msg.setSourceEntity(121U);
    msg.setDestination(14514U);
    msg.setDestinationEntity(165U);
    msg.va = 0.223196848014;
    msg.aoa = 0.871381931771;
    msg.ssa = 0.0637410867092;

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
    msg.setTimeStamp(0.731512212797);
    msg.setSource(61255U);
    msg.setSourceEntity(204U);
    msg.setDestination(10628U);
    msg.setDestinationEntity(48U);
    msg.value = 0.406557592805;

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
    msg.setTimeStamp(0.573320281232);
    msg.setSource(25203U);
    msg.setSourceEntity(127U);
    msg.setDestination(50568U);
    msg.setDestinationEntity(145U);
    msg.value = 0.917765182157;

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
    msg.setTimeStamp(0.621426788466);
    msg.setSource(27984U);
    msg.setSourceEntity(247U);
    msg.setDestination(32359U);
    msg.setDestinationEntity(43U);
    msg.value = 0.377102766078;

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
    msg.setTimeStamp(0.440295653503);
    msg.setSource(41404U);
    msg.setSourceEntity(85U);
    msg.setDestination(17421U);
    msg.setDestinationEntity(72U);
    msg.value = 0.854342176975;
    msg.z_units = 18U;

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
    msg.setTimeStamp(0.721223829364);
    msg.setSource(25179U);
    msg.setSourceEntity(229U);
    msg.setDestination(37656U);
    msg.setDestinationEntity(208U);
    msg.value = 0.990730470854;
    msg.z_units = 148U;

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
    msg.setTimeStamp(0.198895681805);
    msg.setSource(39755U);
    msg.setSourceEntity(124U);
    msg.setDestination(59004U);
    msg.setDestinationEntity(121U);
    msg.value = 0.729101172304;
    msg.z_units = 231U;

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
    msg.setTimeStamp(0.659701584432);
    msg.setSource(59765U);
    msg.setSourceEntity(210U);
    msg.setDestination(7896U);
    msg.setDestinationEntity(47U);
    msg.value = 0.0633575206327;
    msg.speed_units = 116U;

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
    msg.setTimeStamp(0.261217503372);
    msg.setSource(35814U);
    msg.setSourceEntity(74U);
    msg.setDestination(10538U);
    msg.setDestinationEntity(129U);
    msg.value = 0.0383443443111;
    msg.speed_units = 146U;

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
    msg.setTimeStamp(0.299805513864);
    msg.setSource(25356U);
    msg.setSourceEntity(196U);
    msg.setDestination(58612U);
    msg.setDestinationEntity(132U);
    msg.value = 0.664345384984;
    msg.speed_units = 147U;

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
    msg.setTimeStamp(0.576083321837);
    msg.setSource(49573U);
    msg.setSourceEntity(29U);
    msg.setDestination(56289U);
    msg.setDestinationEntity(110U);
    msg.value = 0.482764499715;

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
    msg.setTimeStamp(0.182885607239);
    msg.setSource(37668U);
    msg.setSourceEntity(219U);
    msg.setDestination(11591U);
    msg.setDestinationEntity(131U);
    msg.value = 0.3396461446;

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
    msg.setTimeStamp(0.896184802167);
    msg.setSource(57573U);
    msg.setSourceEntity(150U);
    msg.setDestination(10400U);
    msg.setDestinationEntity(58U);
    msg.value = 0.0392267626166;

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
    msg.setTimeStamp(0.325822106617);
    msg.setSource(21381U);
    msg.setSourceEntity(160U);
    msg.setDestination(32579U);
    msg.setDestinationEntity(114U);
    msg.value = 0.32003939363;

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
    msg.setTimeStamp(0.926076362658);
    msg.setSource(12182U);
    msg.setSourceEntity(250U);
    msg.setDestination(19526U);
    msg.setDestinationEntity(6U);
    msg.value = 0.987053059247;

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
    msg.setTimeStamp(0.792275629798);
    msg.setSource(4126U);
    msg.setSourceEntity(238U);
    msg.setDestination(63594U);
    msg.setDestinationEntity(188U);
    msg.value = 0.0943832756099;

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
    msg.setTimeStamp(0.691184717839);
    msg.setSource(40503U);
    msg.setSourceEntity(121U);
    msg.setDestination(14201U);
    msg.setDestinationEntity(191U);
    msg.value = 0.975702808409;

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
    msg.setTimeStamp(0.152177271263);
    msg.setSource(12610U);
    msg.setSourceEntity(77U);
    msg.setDestination(32797U);
    msg.setDestinationEntity(121U);
    msg.value = 0.0538488211495;

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
    msg.setTimeStamp(0.881538789054);
    msg.setSource(64136U);
    msg.setSourceEntity(185U);
    msg.setDestination(18009U);
    msg.setDestinationEntity(46U);
    msg.value = 0.95891763062;

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
    msg.setTimeStamp(0.562344583457);
    msg.setSource(30556U);
    msg.setSourceEntity(123U);
    msg.setDestination(43224U);
    msg.setDestinationEntity(214U);
    msg.path_ref = 2983441211U;
    msg.start_lat = 0.0046669944665;
    msg.start_lon = 0.867654859555;
    msg.start_z = 0.881614815815;
    msg.start_z_units = 139U;
    msg.end_lat = 0.564220380008;
    msg.end_lon = 0.836670816127;
    msg.end_z = 0.940424801204;
    msg.end_z_units = 2U;
    msg.speed = 0.731157865369;
    msg.speed_units = 125U;
    msg.lradius = 0.342320937596;
    msg.flags = 127U;

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
    msg.setTimeStamp(0.307500721757);
    msg.setSource(57520U);
    msg.setSourceEntity(93U);
    msg.setDestination(14435U);
    msg.setDestinationEntity(236U);
    msg.path_ref = 2036070686U;
    msg.start_lat = 0.0656276449513;
    msg.start_lon = 0.129541209082;
    msg.start_z = 0.902205123797;
    msg.start_z_units = 233U;
    msg.end_lat = 0.499999775732;
    msg.end_lon = 0.107642502889;
    msg.end_z = 0.495040762094;
    msg.end_z_units = 63U;
    msg.speed = 0.484760024838;
    msg.speed_units = 11U;
    msg.lradius = 0.27322570647;
    msg.flags = 134U;

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
    msg.setTimeStamp(0.268434308586);
    msg.setSource(13162U);
    msg.setSourceEntity(81U);
    msg.setDestination(11902U);
    msg.setDestinationEntity(117U);
    msg.path_ref = 3697178716U;
    msg.start_lat = 0.786329314276;
    msg.start_lon = 0.366694355594;
    msg.start_z = 0.120544226506;
    msg.start_z_units = 74U;
    msg.end_lat = 0.0237722612023;
    msg.end_lon = 0.510228404095;
    msg.end_z = 0.912067637565;
    msg.end_z_units = 113U;
    msg.speed = 0.303523831494;
    msg.speed_units = 194U;
    msg.lradius = 0.983699420324;
    msg.flags = 247U;

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
    msg.setTimeStamp(0.27448587113);
    msg.setSource(52589U);
    msg.setSourceEntity(113U);
    msg.setDestination(29987U);
    msg.setDestinationEntity(100U);
    msg.x = 0.348908504791;
    msg.y = 0.966662592296;
    msg.z = 0.169378617088;
    msg.k = 0.671293632434;
    msg.m = 0.246882865287;
    msg.n = 0.387797382333;
    msg.flags = 102U;

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
    msg.setTimeStamp(0.373569707926);
    msg.setSource(6265U);
    msg.setSourceEntity(128U);
    msg.setDestination(29567U);
    msg.setDestinationEntity(215U);
    msg.x = 0.630851554186;
    msg.y = 0.344288496332;
    msg.z = 0.0735679035192;
    msg.k = 0.334431476316;
    msg.m = 0.735529324711;
    msg.n = 0.238233427256;
    msg.flags = 117U;

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
    msg.setTimeStamp(0.594750746742);
    msg.setSource(6241U);
    msg.setSourceEntity(47U);
    msg.setDestination(51039U);
    msg.setDestinationEntity(63U);
    msg.x = 0.87898337354;
    msg.y = 0.563646224839;
    msg.z = 0.976760986344;
    msg.k = 0.0361178865001;
    msg.m = 0.547408286344;
    msg.n = 0.55450007362;
    msg.flags = 187U;

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
    msg.setTimeStamp(0.505368879505);
    msg.setSource(63958U);
    msg.setSourceEntity(193U);
    msg.setDestination(33170U);
    msg.setDestinationEntity(249U);
    msg.value = 0.97873857422;

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
    msg.setTimeStamp(0.902110555835);
    msg.setSource(62267U);
    msg.setSourceEntity(23U);
    msg.setDestination(52025U);
    msg.setDestinationEntity(251U);
    msg.value = 0.49303232879;

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
    msg.setTimeStamp(0.357487866948);
    msg.setSource(23732U);
    msg.setSourceEntity(128U);
    msg.setDestination(46756U);
    msg.setDestinationEntity(44U);
    msg.value = 0.103239935868;

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
    msg.setTimeStamp(0.0755480796806);
    msg.setSource(61441U);
    msg.setSourceEntity(246U);
    msg.setDestination(1887U);
    msg.setDestinationEntity(162U);
    msg.u = 0.737854365326;
    msg.v = 0.132835022835;
    msg.w = 0.226177191448;
    msg.p = 0.774807392836;
    msg.q = 0.388972077342;
    msg.r = 0.727942518624;
    msg.flags = 118U;

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
    msg.setTimeStamp(0.30326824848);
    msg.setSource(15265U);
    msg.setSourceEntity(164U);
    msg.setDestination(45083U);
    msg.setDestinationEntity(180U);
    msg.u = 0.284260474692;
    msg.v = 0.682049382777;
    msg.w = 0.0711423815018;
    msg.p = 0.51700080694;
    msg.q = 0.598494906311;
    msg.r = 0.507455532638;
    msg.flags = 125U;

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
    msg.setTimeStamp(0.671461112474);
    msg.setSource(59492U);
    msg.setSourceEntity(88U);
    msg.setDestination(44513U);
    msg.setDestinationEntity(25U);
    msg.u = 0.796561547051;
    msg.v = 0.971165072616;
    msg.w = 0.656886822947;
    msg.p = 0.338700848442;
    msg.q = 0.916176789706;
    msg.r = 0.714367983589;
    msg.flags = 22U;

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
    msg.setTimeStamp(0.576013721793);
    msg.setSource(1572U);
    msg.setSourceEntity(227U);
    msg.setDestination(52715U);
    msg.setDestinationEntity(39U);
    msg.path_ref = 1800630547U;
    msg.start_lat = 0.707528407549;
    msg.start_lon = 0.270651154404;
    msg.start_z = 0.61462781977;
    msg.start_z_units = 105U;
    msg.end_lat = 0.0164288402286;
    msg.end_lon = 0.396520012374;
    msg.end_z = 0.523021268736;
    msg.end_z_units = 138U;
    msg.lradius = 0.261174562239;
    msg.flags = 143U;
    msg.x = 0.229676227375;
    msg.y = 0.901553529842;
    msg.z = 0.937208765856;
    msg.vx = 0.743889941383;
    msg.vy = 0.356554138095;
    msg.vz = 0.839683622299;
    msg.course_error = 0.772019882123;
    msg.eta = 25575U;

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
    msg.setTimeStamp(0.0629808471497);
    msg.setSource(36281U);
    msg.setSourceEntity(233U);
    msg.setDestination(40013U);
    msg.setDestinationEntity(229U);
    msg.path_ref = 1215101285U;
    msg.start_lat = 0.681379641071;
    msg.start_lon = 0.999450558452;
    msg.start_z = 0.950016117584;
    msg.start_z_units = 185U;
    msg.end_lat = 0.234763345106;
    msg.end_lon = 0.528542367666;
    msg.end_z = 0.881669642945;
    msg.end_z_units = 3U;
    msg.lradius = 0.105241803001;
    msg.flags = 123U;
    msg.x = 0.994487542493;
    msg.y = 0.522153725819;
    msg.z = 0.553168564549;
    msg.vx = 0.993352320961;
    msg.vy = 0.380949879466;
    msg.vz = 0.266360663121;
    msg.course_error = 0.218292351969;
    msg.eta = 27991U;

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
    msg.setTimeStamp(0.690593346997);
    msg.setSource(53033U);
    msg.setSourceEntity(0U);
    msg.setDestination(19940U);
    msg.setDestinationEntity(16U);
    msg.path_ref = 3883856698U;
    msg.start_lat = 0.584389092523;
    msg.start_lon = 0.261024988314;
    msg.start_z = 0.708904808737;
    msg.start_z_units = 218U;
    msg.end_lat = 0.942596593268;
    msg.end_lon = 0.156027255582;
    msg.end_z = 0.905758489715;
    msg.end_z_units = 146U;
    msg.lradius = 0.633415859746;
    msg.flags = 173U;
    msg.x = 0.26824594757;
    msg.y = 0.90614228416;
    msg.z = 0.32899161407;
    msg.vx = 0.348220747489;
    msg.vy = 0.780724923688;
    msg.vz = 0.769762390256;
    msg.course_error = 0.863315705535;
    msg.eta = 23740U;

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
    msg.setTimeStamp(0.817072455754);
    msg.setSource(37921U);
    msg.setSourceEntity(196U);
    msg.setDestination(10094U);
    msg.setDestinationEntity(219U);
    msg.k = 0.204467080991;
    msg.m = 0.93213396408;
    msg.n = 0.459621727531;

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
    msg.setTimeStamp(0.733077671808);
    msg.setSource(34768U);
    msg.setSourceEntity(223U);
    msg.setDestination(63597U);
    msg.setDestinationEntity(43U);
    msg.k = 0.721313677433;
    msg.m = 0.133096436643;
    msg.n = 0.130906893605;

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
    msg.setTimeStamp(0.447874153301);
    msg.setSource(3049U);
    msg.setSourceEntity(6U);
    msg.setDestination(44067U);
    msg.setDestinationEntity(222U);
    msg.k = 0.140144522872;
    msg.m = 0.47200776677;
    msg.n = 0.0980504915381;

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
    msg.setTimeStamp(0.338828219874);
    msg.setSource(34829U);
    msg.setSourceEntity(235U);
    msg.setDestination(9161U);
    msg.setDestinationEntity(33U);
    msg.p = 0.244101000367;
    msg.i = 0.395161176601;
    msg.d = 0.161450392984;
    msg.a = 0.163800319664;

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
    msg.setTimeStamp(0.413592868774);
    msg.setSource(13119U);
    msg.setSourceEntity(124U);
    msg.setDestination(48980U);
    msg.setDestinationEntity(209U);
    msg.p = 0.214195571859;
    msg.i = 0.841723492227;
    msg.d = 0.490698380227;
    msg.a = 0.868621972373;

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
    msg.setTimeStamp(0.415111460199);
    msg.setSource(27489U);
    msg.setSourceEntity(154U);
    msg.setDestination(39842U);
    msg.setDestinationEntity(210U);
    msg.p = 0.330248842534;
    msg.i = 0.225157218499;
    msg.d = 0.767888510707;
    msg.a = 0.333923195921;

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
    msg.setTimeStamp(0.00475213885619);
    msg.setSource(54294U);
    msg.setSourceEntity(177U);
    msg.setDestination(35173U);
    msg.setDestinationEntity(11U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.889711392847);
    msg.setSource(45663U);
    msg.setSourceEntity(126U);
    msg.setDestination(13210U);
    msg.setDestinationEntity(192U);
    msg.op = 243U;

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
    msg.setTimeStamp(0.141794629201);
    msg.setSource(15833U);
    msg.setSourceEntity(126U);
    msg.setDestination(662U);
    msg.setDestinationEntity(53U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.353977422098);
    msg.setSource(500U);
    msg.setSourceEntity(201U);
    msg.setDestination(48776U);
    msg.setDestinationEntity(221U);
    msg.x = 0.661466766917;
    msg.y = 0.624658441115;
    msg.z = 0.765928228578;
    msg.vx = 0.0874609469839;
    msg.vy = 0.200737935757;
    msg.vz = 0.953848053962;
    msg.ax = 0.868232550607;
    msg.ay = 0.781816483066;
    msg.az = 0.813215861195;
    msg.flags = 55143U;

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
    msg.setTimeStamp(0.232262412329);
    msg.setSource(23101U);
    msg.setSourceEntity(134U);
    msg.setDestination(7724U);
    msg.setDestinationEntity(154U);
    msg.x = 0.0505970113897;
    msg.y = 0.135140318683;
    msg.z = 0.536225376495;
    msg.vx = 0.925283783192;
    msg.vy = 0.225846623072;
    msg.vz = 0.442100890699;
    msg.ax = 0.114955988125;
    msg.ay = 0.222906643196;
    msg.az = 0.358866033837;
    msg.flags = 23349U;

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
    msg.setTimeStamp(0.999942141424);
    msg.setSource(20218U);
    msg.setSourceEntity(154U);
    msg.setDestination(29378U);
    msg.setDestinationEntity(56U);
    msg.x = 0.651242538912;
    msg.y = 0.448124704918;
    msg.z = 0.296640627605;
    msg.vx = 0.0501063416306;
    msg.vy = 0.95979399286;
    msg.vz = 0.919784949427;
    msg.ax = 0.623866094101;
    msg.ay = 0.661360874102;
    msg.az = 0.174527713929;
    msg.flags = 53990U;

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
    msg.setTimeStamp(0.343839632252);
    msg.setSource(60904U);
    msg.setSourceEntity(253U);
    msg.setDestination(857U);
    msg.setDestinationEntity(97U);
    msg.value = 0.81458327022;

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
    msg.setTimeStamp(0.469787895256);
    msg.setSource(48310U);
    msg.setSourceEntity(99U);
    msg.setDestination(63520U);
    msg.setDestinationEntity(237U);
    msg.value = 0.562302894786;

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
    msg.setTimeStamp(0.876799729107);
    msg.setSource(33361U);
    msg.setSourceEntity(27U);
    msg.setDestination(31525U);
    msg.setDestinationEntity(231U);
    msg.value = 0.104118575842;

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
    msg.setTimeStamp(0.563692357087);
    msg.setSource(18128U);
    msg.setSourceEntity(229U);
    msg.setDestination(43178U);
    msg.setDestinationEntity(107U);
    msg.timeout = 60873U;
    msg.lat = 0.00847341215708;
    msg.lon = 0.291813900414;
    msg.z = 0.463409030485;
    msg.z_units = 106U;
    msg.speed = 0.0297490958767;
    msg.speed_units = 22U;
    msg.roll = 0.07492862187;
    msg.pitch = 0.867901133706;
    msg.yaw = 0.109781608762;
    msg.custom.assign("CANSWQTFHVDLHDLOOZGWCQAYUXUHQSYCBUYCKRBFZUVDCEEFYJTZPDLBNPEKPZTGMKZVVHCKYCRLVJYFAXXDKQOAEWJNPFZKSBLDGCIAQLNNFGZCRTRQDFXTQBKUOUMNAAIRCVIQOJPREAIOGMBPWIRHTXNSWXLZWIMMJQIVHRUSNFFJRIUOGJJHEDLOBBEKUBAJHIHURGTPBGTMTSXYKSVAYZSWDXGWWZHQMLYOPNMLIJPVOPTEE");

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
    msg.setTimeStamp(0.878992327552);
    msg.setSource(26236U);
    msg.setSourceEntity(195U);
    msg.setDestination(62649U);
    msg.setDestinationEntity(35U);
    msg.timeout = 47038U;
    msg.lat = 0.809519681174;
    msg.lon = 0.171859929315;
    msg.z = 0.679979401511;
    msg.z_units = 204U;
    msg.speed = 0.447128229568;
    msg.speed_units = 16U;
    msg.roll = 0.00990303774728;
    msg.pitch = 0.41683816837;
    msg.yaw = 0.550390852478;
    msg.custom.assign("VIGATMPBHGXOZPIFKMUZUD");

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
    msg.setTimeStamp(0.920614705213);
    msg.setSource(38742U);
    msg.setSourceEntity(253U);
    msg.setDestination(31070U);
    msg.setDestinationEntity(231U);
    msg.timeout = 55427U;
    msg.lat = 0.386028224731;
    msg.lon = 0.0743869291326;
    msg.z = 0.202752109954;
    msg.z_units = 170U;
    msg.speed = 0.727281782031;
    msg.speed_units = 238U;
    msg.roll = 0.770187479521;
    msg.pitch = 0.605878379402;
    msg.yaw = 0.203062647521;
    msg.custom.assign("OUPFWHXOQAJSMILK");

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
    msg.setTimeStamp(0.213257657895);
    msg.setSource(35610U);
    msg.setSourceEntity(68U);
    msg.setDestination(1419U);
    msg.setDestinationEntity(76U);
    msg.timeout = 25279U;
    msg.lat = 0.976137787187;
    msg.lon = 0.990830620863;
    msg.z = 0.159462297304;
    msg.z_units = 66U;
    msg.speed = 0.400368914378;
    msg.speed_units = 146U;
    msg.duration = 12952U;
    msg.radius = 0.125756443844;
    msg.flags = 49U;
    msg.custom.assign("PUGXLMAQELSHINXPQEVYMEOCNUFFQCBXDZQOUEKMERKTK");

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
    msg.setTimeStamp(0.160706961808);
    msg.setSource(9326U);
    msg.setSourceEntity(187U);
    msg.setDestination(44519U);
    msg.setDestinationEntity(244U);
    msg.timeout = 15412U;
    msg.lat = 0.707199399141;
    msg.lon = 0.60928625289;
    msg.z = 0.938553626918;
    msg.z_units = 232U;
    msg.speed = 0.250005374359;
    msg.speed_units = 189U;
    msg.duration = 61648U;
    msg.radius = 0.879322690782;
    msg.flags = 151U;
    msg.custom.assign("PFYKXGVLZOPECCCUZSUAATQAVTLPRSBKPKKNREKGAOVRWQNEIDASMQEPYUPNXNGHRVROBHEOURGXAGADLVDHYSZIJBLUWLZCRDAAMWJCOMSLDKKXMC");

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
    msg.setTimeStamp(0.96730747666);
    msg.setSource(58600U);
    msg.setSourceEntity(76U);
    msg.setDestination(48491U);
    msg.setDestinationEntity(111U);
    msg.timeout = 42884U;
    msg.lat = 0.626354853771;
    msg.lon = 0.217190173604;
    msg.z = 0.134485742933;
    msg.z_units = 83U;
    msg.speed = 0.0997716102715;
    msg.speed_units = 110U;
    msg.duration = 27778U;
    msg.radius = 0.574831449571;
    msg.flags = 241U;
    msg.custom.assign("LINBLUBAWUVWPPULAXFCWZTXSOXUICTUVNFRTOEQRSSWMLVNWDJXIKPGIQUYROBPQVMHIKFRYGUSSMFWCDLKQQAGTGVLJQJMAZBNXPYJXDGMFWATTECGEIWJBDFVJFQYPFHACTYGOCZHRNSSYPRDOMEJSKBUEDHGKMJLXTGEDRBLNPIOVSAZJPHEHGIHVNNAFVZWXZYSTKONZZHIUBHK");

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
    msg.setTimeStamp(0.0896856515143);
    msg.setSource(57015U);
    msg.setSourceEntity(203U);
    msg.setDestination(40485U);
    msg.setDestinationEntity(126U);
    msg.custom.assign("MBPMBEMFWBFMHWDQAPSXYKQVQIAHDSGSOYSTHKGEUIYIHWOUMAJMVJEIJIDNRVWPZDLDXRCWVIEQWIJWPKLSYVWUPXUYYJFMTPJRHZOZZHOFBKSUTQCBNEXSGXALBAGPNGNZIHLAKDPSVRXCBHCKGEI");

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
    msg.setTimeStamp(0.19062426957);
    msg.setSource(12440U);
    msg.setSourceEntity(175U);
    msg.setDestination(18326U);
    msg.setDestinationEntity(109U);
    msg.custom.assign("EPELFDTIWZOKMEKJDXCWYDRSUWGNIZLYIIEFOWPGCKHFFQGXJIUTXKRF");

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
    msg.setTimeStamp(0.302092355949);
    msg.setSource(18155U);
    msg.setSourceEntity(117U);
    msg.setDestination(25472U);
    msg.setDestinationEntity(169U);
    msg.custom.assign("GMYJWAFGDVQLKNPKQYNMJSOJBOGCAZUAIBCDXLTTZLSHFCWXPRKLBWCYUYCRNKFVROQAIFPHQIRRTQSDQVVFKBTSSMEUXKWMUFHYEQTYHVRJQXTAJPPCWDMFGOSNNRBMIZTHBOBGIHABAEEYJLNMNLLRJHZRXJNOZZQODXTEEGOSSUVIIEUULFKWEDBPWSVSGO");

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
    msg.setTimeStamp(0.32585798292);
    msg.setSource(10419U);
    msg.setSourceEntity(71U);
    msg.setDestination(6427U);
    msg.setDestinationEntity(87U);
    msg.timeout = 16295U;
    msg.lat = 0.660368188329;
    msg.lon = 0.686565327878;
    msg.z = 0.532986364405;
    msg.z_units = 171U;
    msg.duration = 44847U;
    msg.speed = 0.690919308342;
    msg.speed_units = 76U;
    msg.type = 58U;
    msg.radius = 0.386608033768;
    msg.length = 0.940950753946;
    msg.bearing = 0.916937325551;
    msg.direction = 94U;
    msg.custom.assign("RIFFGXJDPBHGMTULNBKBLMUIIHTQAGQAZMWVNNZORCEIHCJNGQWKMAZIXJOBPRTMUPKOXVOJHSNCHYXUNKEDNXJBAXJQORUGQRRLCZJQLODRXEBOQSTVTIFANDSEEVFARKEGUAYDLTUCYVWFHGGQIEBBFKQVXAYMTRHAGFEPTRBUJWZPCWZMLWKZWOLMYMPECBSHQGLPFDASWJPVOLYDDJEYKHNSSVUZVYIFDCCODSYIMKSU");

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
    msg.setTimeStamp(0.493556940197);
    msg.setSource(61571U);
    msg.setSourceEntity(96U);
    msg.setDestination(51195U);
    msg.setDestinationEntity(175U);
    msg.timeout = 64743U;
    msg.lat = 0.292931887794;
    msg.lon = 0.518858062097;
    msg.z = 0.957742598333;
    msg.z_units = 229U;
    msg.duration = 15455U;
    msg.speed = 0.360321867774;
    msg.speed_units = 36U;
    msg.type = 248U;
    msg.radius = 0.170007810571;
    msg.length = 0.0220368100503;
    msg.bearing = 0.0530916804742;
    msg.direction = 143U;
    msg.custom.assign("EBBYFROQHQUTVMPBAZHIVZIHFANAGEGNJFYGCJDCQVWTYROOHKQXLHUVMJEQFQDQYJPTEPVMBJSXCNTPNHKEYECFPKZTLIXIBWBERPZOWZGENOFJZSHADMHLYITSHLZUSDJSGRCXIFIUTFTLWBGVJKASQUYBSPCNADMMUKBWMXMHXWZJKQOASMLIPSLDZXATRPVRODXRICVQYTKUWYGCPEGUZOYNVKORKNGIVDMALWGXWCENRUOKLD");

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
    msg.setTimeStamp(0.86694118877);
    msg.setSource(32275U);
    msg.setSourceEntity(63U);
    msg.setDestination(58641U);
    msg.setDestinationEntity(102U);
    msg.timeout = 40886U;
    msg.lat = 0.299665114234;
    msg.lon = 0.260782015354;
    msg.z = 0.573977242574;
    msg.z_units = 197U;
    msg.duration = 52356U;
    msg.speed = 0.971793893352;
    msg.speed_units = 158U;
    msg.type = 229U;
    msg.radius = 0.908225810591;
    msg.length = 0.498752930907;
    msg.bearing = 0.828378804168;
    msg.direction = 120U;
    msg.custom.assign("OWRGLZBZRJODNHLCMXRDPGPHZWWUWKBQAACSLIGBGMHAVUTGAZVQYWECJYKIRYBKKZFIELUQNLSSFDMLRNQKECSGQQVMEJDGCAJYXDGZASMFQNEVTMBOTPBPJZJABMVZVASZNWURZXXGHFXFVQLXIDMFYVUOTHJCFBNTKOIWDY");

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
    msg.setTimeStamp(0.17188194887);
    msg.setSource(61140U);
    msg.setSourceEntity(240U);
    msg.setDestination(33752U);
    msg.setDestinationEntity(56U);
    msg.duration = 12079U;
    msg.custom.assign("SZFVDJPCWFBXAJUTFFWPFPLOMBNYTYUCMOMTHEERBOKYZCQAVRELYZPKJRGOZZILYORGLXHYEIVHDLGXKFXLSQBQPRTGEJRFNGTNSSUJMQREHWAXCHRXGOUCYYAEBTNFACBHUXKKTGLDQELPKSKIDMXFUJFNPUOSGKAAWPVJBALEDCZDTHVWZ");

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
    msg.setTimeStamp(0.668115070748);
    msg.setSource(45963U);
    msg.setSourceEntity(47U);
    msg.setDestination(37930U);
    msg.setDestinationEntity(82U);
    msg.duration = 50378U;
    msg.custom.assign("MOACJOTUESXTOKGTJQABVVPTYZNBYUZXSHIJFEZYMDYSBJNARRKFFRUBKNFTHDEIUCXGVZXMAQNQCISHJZKKEYMACQLSMXSEFPZOHZCDUBILLGBIRLWWNTBXLOHKEQKUYKYNGPLBIPDCVTNWFXSIQHJGNRIUHPTJCOJXRDRPWWLBFVYXZKIDUQTRGPZPLUYMXGSMKEZVMAGCRDEVAHAHHOVWANOWWMBCGDEJOUPWLLIPQMSCVW");

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
    msg.setTimeStamp(0.585703381381);
    msg.setSource(39716U);
    msg.setSourceEntity(226U);
    msg.setDestination(64241U);
    msg.setDestinationEntity(241U);
    msg.duration = 48083U;
    msg.custom.assign("ARXKZFJGSLFASGPAVTKDQNFRJEJXEASWPLOOGXNOOOZMPMDSSPHZTWOESTQCVDZHWYHTOQJBXYIHPBFVYVAUKTHXNFBZUSRBKKXGUYDPBZBWLPCFBEILTTGKFUJBNVLWPEYATKDNGXIHHVFXNYPJMGYJYTCAYWWOMIVMAJRZFVQQHTLWAFQAGDLNOSKREIVHIKZWSMMJMYQIJRNUZCRNPCLIHEDGQUKUUNRQBXDGRVZLECCUECRMUOWSIDME");

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
    msg.setTimeStamp(0.820551212682);
    msg.setSource(45793U);
    msg.setSourceEntity(204U);
    msg.setDestination(4471U);
    msg.setDestinationEntity(34U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.870150713907;
    msg.control.set(tmp_msg_0);
    msg.duration = 50223U;
    msg.custom.assign("ZMXBZWVFGIAJAICEXYOYADLNSZSLUKKHWPFGCRMETSGQOVHMWBFONDEABLRJTPLEIVMRKTXFNUJQLDP");

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
    msg.setTimeStamp(0.628984729797);
    msg.setSource(13615U);
    msg.setSourceEntity(195U);
    msg.setDestination(54477U);
    msg.setDestinationEntity(137U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.757535944519;
    msg.control.set(tmp_msg_0);
    msg.duration = 22437U;
    msg.custom.assign("PCWXCILJRAGXIUDMWVBMBUMWQAEXOQGWKYEHSFDRTARAFIUVH");

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
    msg.setTimeStamp(0.523280656944);
    msg.setSource(50182U);
    msg.setSourceEntity(20U);
    msg.setDestination(38933U);
    msg.setDestinationEntity(38U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.515063466761;
    tmp_msg_0.z_units = 98U;
    msg.control.set(tmp_msg_0);
    msg.duration = 28325U;
    msg.custom.assign("IMDHPYKWEPLRHSTVSQLTZRKCAPYUJVUMJKIVAXLNENTPKFGHSBUAYCZD");

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
    msg.setTimeStamp(0.919799978262);
    msg.setSource(21841U);
    msg.setSourceEntity(105U);
    msg.setDestination(13932U);
    msg.setDestinationEntity(223U);
    msg.timeout = 21352U;
    msg.lat = 0.780433115126;
    msg.lon = 0.780784488043;
    msg.z = 0.0400673141909;
    msg.z_units = 160U;
    msg.speed = 0.985227569777;
    msg.speed_units = 210U;
    msg.bearing = 0.170236573703;
    msg.cross_angle = 0.806370262697;
    msg.width = 0.246631358076;
    msg.length = 0.235591241439;
    msg.hstep = 0.48877222458;
    msg.coff = 217U;
    msg.alternation = 106U;
    msg.flags = 253U;
    msg.custom.assign("FDDPTWUQOBHGDDXVQXOIJPERYPEYTWBVUQCGZSDXUDIIXUHIZBZHHRZFIFJIGOENRGXCKUOTNRKJGVKIOZTCRUIWIJLCPDSVPXBYORMESPXVCYQKNBENUZCJLSGVYNHYFOWWPFHATYASXKHOUSELADLLAMQAFKIDWTJFYQFEQJNMVMRRCMZRABBPOMKSEDWLMRLAVNTJMCNTZUVZZOSWHJNACXWNKFTSBQBGTLGLLXYSVFGPHEKYGHEAJ");

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
    msg.setTimeStamp(0.399089538631);
    msg.setSource(38539U);
    msg.setSourceEntity(16U);
    msg.setDestination(47407U);
    msg.setDestinationEntity(163U);
    msg.timeout = 39447U;
    msg.lat = 0.939973952854;
    msg.lon = 0.870337809332;
    msg.z = 0.459272030545;
    msg.z_units = 48U;
    msg.speed = 0.497939177055;
    msg.speed_units = 225U;
    msg.bearing = 0.86772146877;
    msg.cross_angle = 0.80737592181;
    msg.width = 0.191601097856;
    msg.length = 0.124065682924;
    msg.hstep = 0.995892990436;
    msg.coff = 250U;
    msg.alternation = 148U;
    msg.flags = 195U;
    msg.custom.assign("GYDOPBUIKXLUPKRVFKNDVPDWVGZHNBBMZGSOMAORHTBREPXLAXCOTLCNQEHJINUEGTWSXQLLPIMMWZSZRDC");

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
    msg.setTimeStamp(0.325298105406);
    msg.setSource(59559U);
    msg.setSourceEntity(209U);
    msg.setDestination(21776U);
    msg.setDestinationEntity(90U);
    msg.timeout = 54104U;
    msg.lat = 0.726547171487;
    msg.lon = 0.130106087388;
    msg.z = 0.511641589915;
    msg.z_units = 38U;
    msg.speed = 0.698906585173;
    msg.speed_units = 55U;
    msg.bearing = 0.239245908007;
    msg.cross_angle = 0.282208655606;
    msg.width = 0.581751809459;
    msg.length = 0.395173369086;
    msg.hstep = 0.978198564641;
    msg.coff = 184U;
    msg.alternation = 24U;
    msg.flags = 15U;
    msg.custom.assign("MSGNGEYJXPAOMYDDJPUHCIVZNTCMKMWKWMJNVFZCOJV");

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
    msg.setTimeStamp(0.243569439114);
    msg.setSource(32907U);
    msg.setSourceEntity(77U);
    msg.setDestination(50013U);
    msg.setDestinationEntity(153U);
    msg.timeout = 16140U;
    msg.lat = 0.151331837936;
    msg.lon = 0.938924002979;
    msg.z = 0.190538209444;
    msg.z_units = 26U;
    msg.speed = 0.124034617008;
    msg.speed_units = 63U;
    msg.custom.assign("OEZCSOGNFEBCHMAYCRVDTXBDJWBPMBUOGDNDQKFSWFLLTITQRANVVOQVLFIUNLUUVFHHCGRTMAWXPRAPYZ");

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
    msg.setTimeStamp(0.670892667682);
    msg.setSource(48124U);
    msg.setSourceEntity(226U);
    msg.setDestination(56514U);
    msg.setDestinationEntity(120U);
    msg.timeout = 46257U;
    msg.lat = 0.034750727459;
    msg.lon = 0.017979428544;
    msg.z = 0.952393017123;
    msg.z_units = 155U;
    msg.speed = 0.426672437126;
    msg.speed_units = 201U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.803031816413;
    tmp_msg_0.y = 0.199192750912;
    tmp_msg_0.z = 0.177413268602;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RSQXHORUFEBEZDRSLPZEJTWNQJYASLLGWCRISMDSINYHZETKVMFLBPAFMUGCLYKPVWTTFUBUWHCJPPADQVSKAVDYRMNOGNC");

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
    msg.setTimeStamp(0.81927185693);
    msg.setSource(6720U);
    msg.setSourceEntity(48U);
    msg.setDestination(9299U);
    msg.setDestinationEntity(6U);
    msg.timeout = 46407U;
    msg.lat = 0.280504633408;
    msg.lon = 0.0243468488224;
    msg.z = 0.590846294556;
    msg.z_units = 160U;
    msg.speed = 0.514934704224;
    msg.speed_units = 207U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.460226362143;
    tmp_msg_0.y = 0.318027840149;
    tmp_msg_0.z = 0.73190530599;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BYPXADUFRYWNSIKFRLKDYTJSRZCGJPESUZWHXRKNQGTBCEWEJQBUOQHPKAUNOWLSJGTKLYMVDJXVBIQMZGCLRMEXWIAYIOFQNZTVRNCHYKATMQHYGYESNZCNPUXSBBDTVBHSBBZILPJTWPVVWMQFJJYAIHOLYIDGVNLRWGAHVTMWBACXSUAKGODAULFQHIVOMFIQOUDHCKFPUXFKDEARZXTXKTDWSECXZLROJ");

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
    msg.setTimeStamp(0.619379821083);
    msg.setSource(55421U);
    msg.setSourceEntity(151U);
    msg.setDestination(46144U);
    msg.setDestinationEntity(83U);
    msg.x = 0.575068748162;
    msg.y = 0.228618237035;
    msg.z = 0.0730663683219;

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
    msg.setTimeStamp(0.83198019079);
    msg.setSource(45248U);
    msg.setSourceEntity(137U);
    msg.setDestination(48989U);
    msg.setDestinationEntity(213U);
    msg.x = 0.671887310144;
    msg.y = 0.958813455709;
    msg.z = 0.532379935077;

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
    msg.setTimeStamp(0.428889548523);
    msg.setSource(6720U);
    msg.setSourceEntity(232U);
    msg.setDestination(29617U);
    msg.setDestinationEntity(28U);
    msg.x = 0.835138443731;
    msg.y = 0.849055097142;
    msg.z = 0.834262743313;

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
    msg.setTimeStamp(0.210833742967);
    msg.setSource(25512U);
    msg.setSourceEntity(247U);
    msg.setDestination(31534U);
    msg.setDestinationEntity(137U);
    msg.timeout = 65081U;
    msg.lat = 0.861519405009;
    msg.lon = 0.137694121315;
    msg.z = 0.548410029394;
    msg.z_units = 103U;
    msg.amplitude = 0.228063080559;
    msg.pitch = 0.105204198991;
    msg.speed = 0.933522934222;
    msg.speed_units = 168U;
    msg.custom.assign("FPVRBJUGZRSGIPZXOGLLDYGNCKQNHNRAIFCYQPVTEBXEWXSMJKQHEMMCOVVWFBVXLIBBCVHUGVLLDJUZPIEIXZWQFOZLTSLPQZI");

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
    msg.setTimeStamp(0.385528283088);
    msg.setSource(1483U);
    msg.setSourceEntity(208U);
    msg.setDestination(18854U);
    msg.setDestinationEntity(162U);
    msg.timeout = 33673U;
    msg.lat = 0.579362935038;
    msg.lon = 0.829599377727;
    msg.z = 0.420506895296;
    msg.z_units = 24U;
    msg.amplitude = 0.425963701908;
    msg.pitch = 0.469745202279;
    msg.speed = 0.732590542593;
    msg.speed_units = 16U;
    msg.custom.assign("UKWREWMEQZOGATKAKONVVPQMZUZYUSMYQMRHCOSSMPCIGJPOZGVDHYBREMTNQENAFADDMWGVPTGCO");

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
    msg.setTimeStamp(0.676467487717);
    msg.setSource(38028U);
    msg.setSourceEntity(74U);
    msg.setDestination(36025U);
    msg.setDestinationEntity(10U);
    msg.timeout = 22252U;
    msg.lat = 0.780362329276;
    msg.lon = 0.396211165497;
    msg.z = 0.748345394292;
    msg.z_units = 222U;
    msg.amplitude = 0.469582756594;
    msg.pitch = 0.19175132922;
    msg.speed = 0.849702122677;
    msg.speed_units = 223U;
    msg.custom.assign("QMUEUABOUWNPNPUXPTAGIADHSPWHOCTFKBEYMUDHLGOVEGVXRSSHFRKTFHSURZZCLGINTFNPLNQKCGJHTZMIGLWSBIETSCDYKRSWDQJPTJOGVCYOZQKZJVAJRNLCAKFYENDVZKWFSMIGXHOBVRMLNAMYQTIERWDBGCMQFZZQVJADWZDAMXMCLGIXXY");

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
    msg.setTimeStamp(0.697673908537);
    msg.setSource(19051U);
    msg.setSourceEntity(47U);
    msg.setDestination(48886U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.382994418594);
    msg.setSource(13187U);
    msg.setSourceEntity(85U);
    msg.setDestination(19011U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.730262529776);
    msg.setSource(18119U);
    msg.setSourceEntity(213U);
    msg.setDestination(57272U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.425424133232);
    msg.setSource(2496U);
    msg.setSourceEntity(43U);
    msg.setDestination(37240U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.602667795838;
    msg.lon = 0.505141117035;
    msg.z = 0.62141896886;
    msg.z_units = 141U;
    msg.radius = 0.98224988357;
    msg.duration = 8396U;
    msg.speed = 0.0014406357729;
    msg.speed_units = 34U;
    msg.custom.assign("PXHCZFYVIFSFJFPUBNEXHCJYAMXIZTJINVEZKQVLNPDCEHQAJGZLOCWGSXOHQCOZDSPMUSLOPNYWFHWFGWTDQYBQXAXUOJWEZTLISASJRTGJOBIBFATBSGMQVCKMESOWTQSAVDZELLYFPYKMLVPEWHHHZNXUPDKGRJGRTWUHBEZOONMHKMNBRXDTKIUDIVFQKKLEAXWYGGNUIVD");

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
    msg.setTimeStamp(0.118326377834);
    msg.setSource(31786U);
    msg.setSourceEntity(254U);
    msg.setDestination(39008U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.649666945211;
    msg.lon = 0.0929342920331;
    msg.z = 0.816783546516;
    msg.z_units = 143U;
    msg.radius = 0.150042398893;
    msg.duration = 42194U;
    msg.speed = 0.553764310627;
    msg.speed_units = 179U;
    msg.custom.assign("WEZIIJWVWRLJTVDSPROHMNEPBBTHYZOCKAJHAUZGZXGQNWHNVNLPDLYWKISHLTSVSGCNPRHALZHNWKDXZKCFGBYCTXMQFFFLXPTLPPEVFXSWXIDEDLEJCUNNUBGURPRZBFDRVTIRUXKIAABGXTJULKQODQPVUKWITGHBMNKAFJZJSREGYQWFOTGLJEDJRXOMIABBNAIYYWCEDEMCRVQUYYICJVSEYDOCUKQYCOHKXGBQMOMMTOFA");

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
    msg.setTimeStamp(0.965215262722);
    msg.setSource(53078U);
    msg.setSourceEntity(36U);
    msg.setDestination(55422U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.28764458013;
    msg.lon = 0.412623196821;
    msg.z = 0.60360059158;
    msg.z_units = 140U;
    msg.radius = 0.475319297937;
    msg.duration = 65114U;
    msg.speed = 0.85338066329;
    msg.speed_units = 179U;
    msg.custom.assign("AUIBXSNCROAYKBZJJRYHBNUPDQCATJTPJIWOHFRHZKGRRCXBVWZEYZRDYSCSGXLSGCBGFOSPODWNSCYQHGNIZELSQKFHTOUSHMVJCNPNOBRUKERUWG");

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
    msg.setTimeStamp(0.487277337121);
    msg.setSource(62476U);
    msg.setSourceEntity(211U);
    msg.setDestination(61972U);
    msg.setDestinationEntity(178U);
    msg.timeout = 18789U;
    msg.flags = 1U;
    msg.lat = 0.96110061931;
    msg.lon = 0.938484308339;
    msg.start_z = 0.737179604284;
    msg.start_z_units = 144U;
    msg.end_z = 0.45362622678;
    msg.end_z_units = 101U;
    msg.radius = 0.221349789819;
    msg.speed = 0.0399239921893;
    msg.speed_units = 181U;
    msg.custom.assign("CHNRGKBRZPYHGDXSEBGXTJPVKUQOQWGRJFRMLKMYZKSXLDFQZQZSWGEICVBHWYZHWEIKLLRFRSSAMXOYPDLTJVBAXDLAKFMZF");

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
    msg.setTimeStamp(0.783602675947);
    msg.setSource(19212U);
    msg.setSourceEntity(241U);
    msg.setDestination(53484U);
    msg.setDestinationEntity(215U);
    msg.timeout = 54619U;
    msg.flags = 209U;
    msg.lat = 0.939231030214;
    msg.lon = 0.870119327042;
    msg.start_z = 0.215414653522;
    msg.start_z_units = 35U;
    msg.end_z = 0.486746533179;
    msg.end_z_units = 63U;
    msg.radius = 0.225051498265;
    msg.speed = 0.115825493535;
    msg.speed_units = 106U;
    msg.custom.assign("ZZDNPHDSOKCATIXKOBPTMJMZHDQWBZJYYWYYQFNDLSPFUUZYWVKEXUJITGFFKRXREQTIBRGANESXSUTMCVHBUWTWZ");

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
    msg.setTimeStamp(0.80229772531);
    msg.setSource(11912U);
    msg.setSourceEntity(234U);
    msg.setDestination(64067U);
    msg.setDestinationEntity(230U);
    msg.timeout = 30343U;
    msg.flags = 0U;
    msg.lat = 0.434414874423;
    msg.lon = 0.527079611071;
    msg.start_z = 0.409841244678;
    msg.start_z_units = 85U;
    msg.end_z = 0.398249465805;
    msg.end_z_units = 216U;
    msg.radius = 0.454439930832;
    msg.speed = 0.0839683011401;
    msg.speed_units = 208U;
    msg.custom.assign("DCUAASSJBQJHIMGUVGNRTWFPHXEDOHQWEWPHBIFFVQRPIYKFAHKNDCPBINTMTFKLTADEH");

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
    msg.setTimeStamp(0.408339231812);
    msg.setSource(65427U);
    msg.setSourceEntity(242U);
    msg.setDestination(41885U);
    msg.setDestinationEntity(173U);
    msg.timeout = 38267U;
    msg.lat = 0.481255284132;
    msg.lon = 0.380142887756;
    msg.z = 0.258099351006;
    msg.z_units = 100U;
    msg.speed = 0.93426811277;
    msg.speed_units = 163U;
    msg.custom.assign("CZPZRRIPJIDKWVKPTIUAJDLBUDFAFTMTMNBDKTTVWCGCPSFLGRAWXHNLRFFYWEEKFOEOQGHTFMINFIONAWMHONHIZGZUPABXSUMCBELTDDYEWLSTEGEOEMWGJIZWZFGHLXDBVTASXHVQJCURJNOXIUXWJVPZVA");

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
    msg.setTimeStamp(0.944367167054);
    msg.setSource(25794U);
    msg.setSourceEntity(173U);
    msg.setDestination(57020U);
    msg.setDestinationEntity(202U);
    msg.timeout = 50698U;
    msg.lat = 0.0710979627052;
    msg.lon = 0.728684508351;
    msg.z = 0.16986359518;
    msg.z_units = 239U;
    msg.speed = 0.149170393408;
    msg.speed_units = 67U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.492180645579;
    tmp_msg_0.y = 0.923765780167;
    tmp_msg_0.z = 0.0420415118549;
    tmp_msg_0.t = 0.951001882396;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MLKZEXLNHTBMJNJXEXVGEWQVGMKAHQILINGJHGWYIDXLJNXIIFPORILVEKKTUSXDKBHLSNWKUFOSFCZZFEQGBXLCRORVOPVAIBFRVFVNPOEUAREZKVCNUEINQBLYXZZDSDGZCYQFAMYRICQTJTMYCTKJDDTGBJZPKTFAAOYPPRMBSWG");

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
    msg.setTimeStamp(0.0767759786281);
    msg.setSource(46764U);
    msg.setSourceEntity(49U);
    msg.setDestination(42034U);
    msg.setDestinationEntity(242U);
    msg.timeout = 17115U;
    msg.lat = 0.408714659463;
    msg.lon = 0.726906073982;
    msg.z = 0.273562008214;
    msg.z_units = 102U;
    msg.speed = 0.345195208561;
    msg.speed_units = 57U;
    msg.custom.assign("ZUBAEZFHGVUQIBOJYNMXFLBALRDGOCNVAAGHBTRWHSKDRDPPLNJCEABAJYPQWVELRAZGOOEOOVCZOTJYZSCIHJZARCNXHPPRGCRJSQIJOQWCKZXYVBIYKBVJPMMYEUFZTHFDSBIWKWCDTVTPNUFQCSXESWNQOXHGEXXTZQSMKFNPFHUYKMUNKXVSNTUHWFGOITETXWCVPGMKMBEXYMQUILFMDWEDQQDGLJIIKDILPKUSHRRMDFLTLZY");

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
    msg.setTimeStamp(0.485736703665);
    msg.setSource(43386U);
    msg.setSourceEntity(143U);
    msg.setDestination(53005U);
    msg.setDestinationEntity(69U);
    msg.x = 0.560775073393;
    msg.y = 0.726395007043;
    msg.z = 0.856823611348;
    msg.t = 0.145283820874;

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
    msg.setTimeStamp(0.455475991141);
    msg.setSource(43308U);
    msg.setSourceEntity(91U);
    msg.setDestination(42024U);
    msg.setDestinationEntity(7U);
    msg.x = 0.583835135388;
    msg.y = 0.102634992271;
    msg.z = 0.780003382419;
    msg.t = 0.666011605486;

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
    msg.setTimeStamp(0.873032727735);
    msg.setSource(42101U);
    msg.setSourceEntity(152U);
    msg.setDestination(9067U);
    msg.setDestinationEntity(142U);
    msg.x = 0.452966970608;
    msg.y = 0.732439345415;
    msg.z = 0.448873292077;
    msg.t = 0.510532956811;

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
    msg.setTimeStamp(0.158914519848);
    msg.setSource(11776U);
    msg.setSourceEntity(66U);
    msg.setDestination(51922U);
    msg.setDestinationEntity(133U);
    msg.timeout = 37248U;
    msg.name.assign("KSGWMJEUYTSEOSYHXEJRSDASWKAVJHAZOODNHMIBVGQKQCNBLPKFPGPHIBYRSCPQMTOHBTUYKMZPJCJLGMORNRYUFYIORWFDDZFWQUEBVYUKDVDRQXJAGLLKAGGXHFAIXVGJJQNIVMMZGSHZHRNCSPLNHIKJQVZSBLBFDWMQFKCYYGYBECTMTHQNADUDTCZPRWOPCFEXDLUNEXNIATTUNZOIXSWF");
    msg.custom.assign("BEHGDRWCYNKRVWGPKOSNRYHJWTDASJZWDBLCQODTSXZFJYSMCLLPCSLEIYRGUOUMFIKDJFEASCPHMMEEGMHKYSTMYRUQIECLCDEJPBXXOXWSXNBNJOPRDATHZJAKBOWRIITZXHJYUOWMATCVVMFDLQNJHVYFUAKVZNFQDNZSZBXGPGLBQOQAIFRVMZIUARUKUGIBWEFT");

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
    msg.setTimeStamp(0.129205934384);
    msg.setSource(27172U);
    msg.setSourceEntity(61U);
    msg.setDestination(14404U);
    msg.setDestinationEntity(42U);
    msg.timeout = 3612U;
    msg.name.assign("USRAGTAQPEMKJPZNKIIXEDWXUDIXIKOYKPXVZXBGOSZGAKWTKLELNCLGGITZVHBPKCJRUQLWGQPOPHTVNBU");
    msg.custom.assign("WYJXZVEOXVNECBFPTKUDJANPGALNCXLYKZHEQSOSGSSGWDAPJIOQWTHSFLBWABXYOQJQOFBGBDMVHINJLUGCBBEAKRCTSVDPTGXNZFEJTJUOHMSADQEZAWIJLKIYGIHXPAPSRSNCHWEKKGWJGYIUFQTUOSLBVFJEPUFKZKVRRDFTWIIKHHZFIQEXQEUZZIOAFOMORTXRDPNCLZCNBLGCMATNLMYQBMDNMQMCRRTPUZKPVYYM");

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
    msg.setTimeStamp(0.982214583355);
    msg.setSource(35546U);
    msg.setSourceEntity(102U);
    msg.setDestination(1667U);
    msg.setDestinationEntity(111U);
    msg.timeout = 61654U;
    msg.name.assign("DZWWUXPIGIXVIWDEDLLMIABZSENYXBABMKZVVDPAYNCUIHTVTTRQIQOZNVJ");
    msg.custom.assign("EXFNREPJMBVMWZHHNMTTLHUOQPMQEUDVTLOFVCHEQZZQWJZILKOVCPLBEHQXHMNGJRYSDECUMDKEOKKFMCVNSMNXVRLDIRYVRHNOAIGYRGLZTAXVXSUKAQRYNSBYDTKJTIBXROHKYDIADSKCYTOHVOEZLJAKWLUQQPZFWAWGGPUAGDJBPZFWIABPRFFWIUSOGOBXCJTRLJSYCMQ");

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
    msg.setTimeStamp(0.519324492887);
    msg.setSource(20936U);
    msg.setSourceEntity(69U);
    msg.setDestination(4854U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.556523866635;
    msg.lon = 0.442636753871;
    msg.z = 0.826581287103;
    msg.z_units = 244U;
    msg.speed = 0.130845726479;
    msg.speed_units = 217U;
    msg.start_time = 0.825821513693;
    msg.custom.assign("IIXAEZTGLCETMXPKLMYVDHAFBJJETAZEPIQUHRHEGBWXOK");

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
    msg.setTimeStamp(0.541467850519);
    msg.setSource(64984U);
    msg.setSourceEntity(166U);
    msg.setDestination(37412U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.0991927012993;
    msg.lon = 0.274949649685;
    msg.z = 0.0333808422457;
    msg.z_units = 249U;
    msg.speed = 0.970634768229;
    msg.speed_units = 247U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.347245797512;
    tmp_msg_0.y = 0.755783701457;
    tmp_msg_0.z = 0.14435335044;
    tmp_msg_0.t = 0.992850861773;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.938329328839;
    msg.custom.assign("LFOKUFZSBZZDOMAPZPJASFWKKSFUICZAGDJUGUTHIRRCNILBWKNPLMEEYJPSNIGVQBFAZWJTJSWYAVQSUMICECQVXIONYBKMMECVGJBLUQKOFKQJXUGYEATRNENMCERJYVHDHVRPGTSADXUTWTFWTQVZZDEORYARLNFHXFGTCYPLBD");

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
    msg.setTimeStamp(0.831151749896);
    msg.setSource(12708U);
    msg.setSourceEntity(122U);
    msg.setDestination(8696U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.576505600125;
    msg.lon = 0.868533476725;
    msg.z = 0.000787378097894;
    msg.z_units = 164U;
    msg.speed = 0.744362508727;
    msg.speed_units = 50U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.293073153988;
    tmp_msg_0.y = 0.459316585647;
    tmp_msg_0.z = 0.0840406260461;
    tmp_msg_0.t = 0.767130563855;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.342440874741;
    msg.custom.assign("LRQKYABXUENQUBRRQVIYTODVNDVGQWYPSETMLNEATWRMHLIOHDJZNXEVLHLUGMMATKIGFXRNVYRHXXGANBCFBXHSYXRPFKPZVOOUMZCSCRNIOIFOFVQPCVWATYLIZUCZDGALIWWJTOWOSCENMJALZAHJGUJQIAPHPNYYMJWKTDWMQSPCDEPKOFCSZHTHJFUQFRIDDEBBZVYMSGPXTJBIZSQJMKQYWS");

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
    msg.setTimeStamp(0.980911826688);
    msg.setSource(63512U);
    msg.setSourceEntity(27U);
    msg.setDestination(27931U);
    msg.setDestinationEntity(18U);
    msg.vid = 21012U;
    msg.off_x = 0.791643166132;
    msg.off_y = 0.426848591961;
    msg.off_z = 0.439888949725;

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
    msg.setTimeStamp(0.496448242634);
    msg.setSource(52429U);
    msg.setSourceEntity(201U);
    msg.setDestination(36823U);
    msg.setDestinationEntity(22U);
    msg.vid = 50591U;
    msg.off_x = 0.188710882758;
    msg.off_y = 0.657638284772;
    msg.off_z = 0.555925371174;

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
    msg.setTimeStamp(0.199854069675);
    msg.setSource(59500U);
    msg.setSourceEntity(113U);
    msg.setDestination(3008U);
    msg.setDestinationEntity(198U);
    msg.vid = 42770U;
    msg.off_x = 0.144483051976;
    msg.off_y = 0.103715536721;
    msg.off_z = 0.275828295865;

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
    msg.setTimeStamp(0.533751933043);
    msg.setSource(27432U);
    msg.setSourceEntity(213U);
    msg.setDestination(5702U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.0120977882309);
    msg.setSource(37991U);
    msg.setSourceEntity(228U);
    msg.setDestination(56269U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.21647327192);
    msg.setSource(58602U);
    msg.setSourceEntity(162U);
    msg.setDestination(29716U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.746976271524);
    msg.setSource(59509U);
    msg.setSourceEntity(149U);
    msg.setDestination(8937U);
    msg.setDestinationEntity(229U);
    msg.mid = 56072U;

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
    msg.setTimeStamp(0.392203886958);
    msg.setSource(36175U);
    msg.setSourceEntity(226U);
    msg.setDestination(32619U);
    msg.setDestinationEntity(115U);
    msg.mid = 61347U;

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
    msg.setTimeStamp(0.805926214932);
    msg.setSource(8749U);
    msg.setSourceEntity(234U);
    msg.setDestination(45051U);
    msg.setDestinationEntity(26U);
    msg.mid = 41358U;

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
    msg.setTimeStamp(0.992626669822);
    msg.setSource(9142U);
    msg.setSourceEntity(93U);
    msg.setDestination(51148U);
    msg.setDestinationEntity(213U);
    msg.state = 172U;
    msg.eta = 30594U;
    msg.info.assign("LDEAZVRXKJDPTYGJGLYWMHBRDNJUEGPDXBZFCMCEZFSWBCGIAYMKODEAPNOHSUJVONMCSICHMRGIZRUIWQIZITHFBYLEOAQBNAMTJHKZALLYVKAUYFNSQGERIDNTVFDTNXXZCOHULWSPCXAJDROLDHNYQFYRHDPZPYWTVCMFEBRZXWWMGQFTSLFQPCTWOEQOGTXKIKPKUVUTLUZRPUAB");

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
    msg.setTimeStamp(0.81911377578);
    msg.setSource(61362U);
    msg.setSourceEntity(222U);
    msg.setDestination(46950U);
    msg.setDestinationEntity(169U);
    msg.state = 95U;
    msg.eta = 56711U;
    msg.info.assign("EZUMHTBCUDQVEKPLWMLXCCUKYVDUZQASMBOFCHIZGVCUXELESSXSSLTIGJUZRNRDJAXDSCDROHNKNRO");

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
    msg.setTimeStamp(0.336882580348);
    msg.setSource(60041U);
    msg.setSourceEntity(104U);
    msg.setDestination(10933U);
    msg.setDestinationEntity(205U);
    msg.state = 117U;
    msg.eta = 8206U;
    msg.info.assign("VUCATFVUDU");

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
    msg.setTimeStamp(0.628362517154);
    msg.setSource(53891U);
    msg.setSourceEntity(209U);
    msg.setDestination(23284U);
    msg.setDestinationEntity(145U);
    msg.system = 46466U;
    msg.duration = 61632U;
    msg.speed = 0.567859804121;
    msg.speed_units = 87U;
    msg.x = 0.072330354494;
    msg.y = 0.0791031055544;
    msg.z = 0.280648158428;
    msg.z_units = 76U;

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
    msg.setTimeStamp(0.062113984054);
    msg.setSource(24851U);
    msg.setSourceEntity(16U);
    msg.setDestination(30467U);
    msg.setDestinationEntity(202U);
    msg.system = 62097U;
    msg.duration = 50788U;
    msg.speed = 0.833997688155;
    msg.speed_units = 169U;
    msg.x = 0.120840877117;
    msg.y = 0.583142880995;
    msg.z = 0.51130188623;
    msg.z_units = 17U;

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
    msg.setTimeStamp(0.893438822348);
    msg.setSource(62835U);
    msg.setSourceEntity(171U);
    msg.setDestination(3923U);
    msg.setDestinationEntity(105U);
    msg.system = 62010U;
    msg.duration = 34671U;
    msg.speed = 0.513361306054;
    msg.speed_units = 56U;
    msg.x = 0.0568563191064;
    msg.y = 0.31856627872;
    msg.z = 0.923849876184;
    msg.z_units = 158U;

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
    msg.setTimeStamp(0.611267880964);
    msg.setSource(35746U);
    msg.setSourceEntity(144U);
    msg.setDestination(37365U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.752203101988;
    msg.lon = 0.82661886922;
    msg.speed = 0.0401425957393;
    msg.speed_units = 244U;
    msg.duration = 42187U;
    msg.sys_a = 44785U;
    msg.sys_b = 21377U;
    msg.move_threshold = 0.823272858186;

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
    msg.setTimeStamp(0.0588521111344);
    msg.setSource(27128U);
    msg.setSourceEntity(145U);
    msg.setDestination(38759U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.207595350854;
    msg.lon = 0.0389697302111;
    msg.speed = 0.511630829892;
    msg.speed_units = 190U;
    msg.duration = 23953U;
    msg.sys_a = 22507U;
    msg.sys_b = 65228U;
    msg.move_threshold = 0.127084159536;

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
    msg.setTimeStamp(0.220828837534);
    msg.setSource(32465U);
    msg.setSourceEntity(112U);
    msg.setDestination(54552U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.737704693475;
    msg.lon = 0.698271754142;
    msg.speed = 0.0801781690008;
    msg.speed_units = 81U;
    msg.duration = 27962U;
    msg.sys_a = 4318U;
    msg.sys_b = 57972U;
    msg.move_threshold = 0.48740229176;

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
    msg.setTimeStamp(0.985274215281);
    msg.setSource(41936U);
    msg.setSourceEntity(111U);
    msg.setDestination(59538U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.243587767256;
    msg.lon = 0.86238628808;
    msg.z = 0.0896154969501;
    msg.z_units = 68U;
    msg.speed = 0.659279450543;
    msg.speed_units = 36U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.713254278429;
    tmp_msg_0.lon = 0.632919071517;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IABYNYFWBWLKQDCNMHTRRSSCXIOAWTUWHFIDLCCKWPLDEYJZOJKBVXRLAHWBIOPMNLBGBCMYRDHYPRLOWNGUUJZJIVZXSXUQVSP");

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
    msg.setTimeStamp(0.596103479607);
    msg.setSource(46819U);
    msg.setSourceEntity(129U);
    msg.setDestination(34952U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.144166228411;
    msg.lon = 0.632601483096;
    msg.z = 0.214552981162;
    msg.z_units = 106U;
    msg.speed = 0.0561140491516;
    msg.speed_units = 99U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.381509294837;
    tmp_msg_0.lon = 0.571438049974;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("AZUDIRJOSGAXIELJOUEPDPYFOEPEXAYFYSCGRQKTZKWGTLAQKPUDJKGRVABIWQIMMMRSHDFMMMXKPRQZWCVCHYRODBFXGGXLYIVATVBGVBOHMCTUROKLIXSXPJFZYUXLPSYTNWVDFCLWHNLQUUQCOKCHAOSEQYQHZBTJHISTENQXVDNKIZZAJCYCSZMBDFNRPBVKDFRULBSGNJOTYBDVEKP");

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
    msg.setTimeStamp(0.237438674839);
    msg.setSource(22553U);
    msg.setSourceEntity(70U);
    msg.setDestination(29877U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.854870761552;
    msg.lon = 0.980511001765;
    msg.z = 0.236848792323;
    msg.z_units = 219U;
    msg.speed = 0.924862222181;
    msg.speed_units = 155U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.402284220235;
    tmp_msg_0.lon = 0.571517419493;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ISMISKZPKDHFAYYIVFHFVHNBAGSGJTDQBGKTZRUVLJEBPYAQQUEBZWDKYJXLJYZHFVOAHFRXQZMQQSXLCNXVYBWTMEOAPEMTGTDYBUSWPSWLVGPD");

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
    msg.setTimeStamp(0.634423885051);
    msg.setSource(18282U);
    msg.setSourceEntity(109U);
    msg.setDestination(43616U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.857338919503;
    msg.lon = 0.678345052633;

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
    msg.setTimeStamp(0.504357378667);
    msg.setSource(65340U);
    msg.setSourceEntity(41U);
    msg.setDestination(38436U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.740893927707;
    msg.lon = 0.401196676825;

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
    msg.setTimeStamp(0.445469075778);
    msg.setSource(39498U);
    msg.setSourceEntity(252U);
    msg.setDestination(3701U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.133931147968;
    msg.lon = 0.703154822068;

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
    msg.setTimeStamp(0.868014346933);
    msg.setSource(10959U);
    msg.setSourceEntity(53U);
    msg.setDestination(2993U);
    msg.setDestinationEntity(15U);
    msg.timeout = 28092U;
    msg.lat = 0.189607157052;
    msg.lon = 0.647844259574;
    msg.z = 0.738967814976;
    msg.z_units = 182U;
    msg.pitch = 0.00377457451327;
    msg.amplitude = 0.797682512016;
    msg.duration = 38950U;
    msg.speed = 0.712070800594;
    msg.speed_units = 115U;
    msg.radius = 0.671674721284;
    msg.direction = 182U;
    msg.custom.assign("OKBLWEICFGHWXVZKCQLKMDFNFNGSCVOKXEJTHUZRADDJOYYJLDKUIASTANUWXIKIGPSPPPLSBFCCWYIEGLGEDHPECQTRYNJVWDHXTYDRGNWHZSYACQBQJMAEHBGVTVMMTXMATAZPFSJBZKDVOSIBMWRROMEKOXOLHOCQPPBYQHQNWTFURFIEARMZUGXGYVOQQGLFZLDVNLSUB");

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
    msg.setTimeStamp(0.228293900899);
    msg.setSource(19799U);
    msg.setSourceEntity(52U);
    msg.setDestination(16137U);
    msg.setDestinationEntity(0U);
    msg.timeout = 34479U;
    msg.lat = 0.287559793615;
    msg.lon = 0.356678644837;
    msg.z = 0.348284667054;
    msg.z_units = 72U;
    msg.pitch = 0.162284993132;
    msg.amplitude = 0.396424290619;
    msg.duration = 59722U;
    msg.speed = 0.0164185430197;
    msg.speed_units = 147U;
    msg.radius = 0.522177603555;
    msg.direction = 183U;
    msg.custom.assign("CNXVBJZLBSBCZKAEJCWXJQEIQJJDQSLZGXOTXEVENDMLOBGQENZODDFLPSDLROFOAFNKAFTHTANQREYMUTNGUTHJPUYWVDOZPDIPPDPSFRRKBQEWWWYZHJTWLGAXMOUUPBZYHOVLIFYYQAIYCPUNIAVDKBKMZQNUTHATRJUBHIJFPYXKXRXGH");

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
    msg.setTimeStamp(0.769804585654);
    msg.setSource(34040U);
    msg.setSourceEntity(27U);
    msg.setDestination(44669U);
    msg.setDestinationEntity(123U);
    msg.timeout = 62554U;
    msg.lat = 0.850327784957;
    msg.lon = 0.844760425914;
    msg.z = 0.0236788965735;
    msg.z_units = 60U;
    msg.pitch = 0.225700480876;
    msg.amplitude = 0.405826398243;
    msg.duration = 43393U;
    msg.speed = 0.537507352673;
    msg.speed_units = 173U;
    msg.radius = 0.8242871701;
    msg.direction = 121U;
    msg.custom.assign("KMNAWZABQCYCINTLLEGRJVNSSNZSZRBQZWDVQHMQ");

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
    msg.setTimeStamp(0.306069694853);
    msg.setSource(59254U);
    msg.setSourceEntity(214U);
    msg.setDestination(8263U);
    msg.setDestinationEntity(204U);
    msg.formation_name.assign("KFQORLQQGLYTJQSPPTFISUJZLIXAHMSBUXIQSTYHJUIIBFKHMRCWDAGEFNYPWQVGOVYVIIDKQRBWMNZOTDWAIAEMKVZXEHLPOOQFFSDZYFRMWASCJZXZRBHLYDGGGANYHVEOYPBNZCCBREGTHMABLRKUWBPUFKUTXMXKBWJRNXSNIRXVYWPGJDAZGTBXWFTVYMHNEUPNHRCNLEUZODCAMHJLDJOIJSOTGZLKKVSOFUVPUKJ");
    msg.reference_frame = 4U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 48180U;
    tmp_msg_0.off_x = 0.584967377983;
    tmp_msg_0.off_y = 0.842478313376;
    tmp_msg_0.off_z = 0.668648199695;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("AOWIBZSEIGFRIEKTIGPWKHGAZOCAOIUXTMSHJCDLKIVNRTYVRDASEMYYEUJSJTFFJRTCGSNNNPXNHTYWDWLUMEPKPU");

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
    msg.setTimeStamp(0.860864684348);
    msg.setSource(37560U);
    msg.setSourceEntity(179U);
    msg.setDestination(28392U);
    msg.setDestinationEntity(26U);
    msg.formation_name.assign("ZETPJQQTHKWIUPUXDCIEMPMNIKJLIQVKFCOAOFDSNGRHUVFNPXKLDCZSWVYJBNBXXVJACYOLDZMPBEGMIXEJBGJTMWNCOGQDRHWKNTHVDXJKOBVSSIOYVSSHNINQWUTSQUTUHCFSAZTQIGXWHYGBJFQMFNEZZJPJTVDKZCULHZRPAWGCQPKAYLOMBBCWXKSUHP");
    msg.reference_frame = 219U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7327U;
    tmp_msg_0.off_x = 0.348539965801;
    tmp_msg_0.off_y = 0.438874157643;
    tmp_msg_0.off_z = 0.160744970104;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("PKBOAPTVQRRDWHOKKXSUAIKYGYDVVZXZUMEEDMZQDOBXOFWGYPSQYUUHFTQHJUZACLBOTZCMRFVDCHWPKEYMDZPTGBALFGRVRJNKQCEMBGCBXTITOLTTAKBCNSWRIUFWJEJELZNTMAMMDEPFDXJKCONKLFGVGQLUSANZCWIFUXYXJIRZCVWYNRHLCBFLPQQFOSNMSHNYLVSNTROQKVILHIEHJWOJBMYSYPDESHB");

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
    msg.setTimeStamp(0.567499371217);
    msg.setSource(38250U);
    msg.setSourceEntity(12U);
    msg.setDestination(52217U);
    msg.setDestinationEntity(105U);
    msg.formation_name.assign("VPRYBDKSQRKHIMGWFCDVEWCVRKSYRCZILLZCBGBZACKIOETERFSORADJKDYMEQWNQAJRACJJIJXOYTJIYJHTXBBPKBGENIYUPNPPLPWTTDLXODC");
    msg.reference_frame = 143U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 65134U;
    tmp_msg_0.off_x = 0.206416541453;
    tmp_msg_0.off_y = 0.934742817877;
    tmp_msg_0.off_z = 0.435432363595;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("IACQHMAZTF");

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
    msg.setTimeStamp(0.0381056069735);
    msg.setSource(65056U);
    msg.setSourceEntity(242U);
    msg.setDestination(29436U);
    msg.setDestinationEntity(49U);
    msg.group_name.assign("QAUGQDWMJGITSSDADKSGRVOWLCVZEWMKEQIGWFXFXYBUHHBIEQNULITYCMLLPGEPVJONOKDFVCTIVFXUNFEYFONJJTBHGHKDSYTDNXRQUZHVZRUCZILWAZIZNRZXCCAZORAVGTMBYMDGFOEPAJBBOPXWRBMJWSICHMDQSHVCAEEXUVSDJZNAOYBQTKMILCLDMTXXMHUPELLORRRBKTPPPRJAJ");
    msg.formation_name.assign("RUICYZFUZVIPFEXOAWYFGFDSRDRYJNBZCJEKOZWHSXDXNXOKOITQKUMWCMHGABFWRLPPVEBAOTYMLRMNTUYPJAKMVPVIBTRNQKTJSJAQZLHQEBHAGLFHVMBWYZCOPNHYMUGVRFOSXNFZSMQJPDAOXGFIBYCQPRLDDDEDGIEQHSPSOWATJSGVTIGKXWLPTBKRLQIEWUBJYKJGMYBSCLTUUZHHMIELHWCWCEAVZFDNDV");
    msg.plan_id.assign("UVRJCBVIZZMPHUOYCJNTTQDXMIZNUNPETGVDLTBHICDGTUWLKLPQWLMAOWAWCPKVKWMZRJIDNSLFXEECPIVNYMAOXOKRFQADOGRRRYCFQVSIOEVHIHFPXMNHZBESSTJNKAPWQXSWJPOOEAHLGFBYYDCVMYQSQEHOPLRHMZLMREKVQFYIDGPBKHBJYSZKJDUELXCIUIXNWAJNQDX");
    msg.description.assign("VTYKUUAERCHBOQSHOYNAGTTUQRCZQVCLVMDOSCSLFBBLVIABWQYWVMSNITNOLGZWLJIRTBPWQOWONMEKIEZHWSNYOFDCZNATFLUDYQHAKPXOFMHPBUDPNRQXPHIYEUKVEPMJEDYTTTJROHAJZQAFEZDGJPUZKUODRNGICRXHWYEBVLZVLBKAVUCFYGQKQXRIDFBMXDCJSJKASNPIIJHPAHBPWUTIFLMJJELMWZVXDXNGRFRYCGXCG");
    msg.leader_speed = 0.84061597098;
    msg.leader_bank_lim = 0.180027658454;
    msg.pos_sim_err_lim = 0.758448428356;
    msg.pos_sim_err_wrn = 0.936483549072;
    msg.pos_sim_err_timeout = 28874U;
    msg.converg_max = 0.1294962499;
    msg.converg_timeout = 29098U;
    msg.comms_timeout = 35752U;
    msg.turb_lim = 0.623151336736;
    msg.custom.assign("RLIUPCXEAPMPKIMELSJSFEMYYPJFHOYWQCECQURNROUQWHMLSKITCAOISJSIRAZVUCDOHYMQUYWFKNNORGOMDCKPGWFOGWYGDWNZAXZVTEVULHEIXTLKFXZKXQDEGLFLGYMZGDYISIQVBEKLNNZTYANDXHBUZBTCAWWDZRWES");

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
    msg.setTimeStamp(0.729415769014);
    msg.setSource(20596U);
    msg.setSourceEntity(87U);
    msg.setDestination(63763U);
    msg.setDestinationEntity(4U);
    msg.group_name.assign("OBWCZRZMVXDRYHZPQAHUOWLHPLJZDLDXJAUYCRGIDIKYXBWIFNGUNROJQMTQIBXQTWEFMJQSRVJSLIPFVVDKVSTIKMZDCPMRNJRHEAFGLYOIEHEMFNCPLMTJSOBHEYPKVDYTJFSZAYWLJQUCHERYZNVQLKGASHCQOADLDGCAOBXYNGZNBIHOUSPQDXNIKNXUKGZAFIUTPPBTOXWOCQBUTEHRRSFVSKTFZMBWLUKBWAXYPXGJUMWGCKVMWETGFV");
    msg.formation_name.assign("VAIAZZLYHQZEFERJGOSYEXPTWNNLLRAAUBNMHMFRKCTQWKICFHQAOMOLRUWBWJDGNSOEMPWTLMSAXTCVMIVGMLYERLDZW");
    msg.plan_id.assign("STXNARXGIZIGUFODAVAQORQ");
    msg.description.assign("PSJUYMCPDHYALTGAYRUSOBVCQSXTIBEZKQIALNPNXMSKGLLIOFHENYHUUJEDPUZDBMFSHWPKDQCXACNLPVKGVRYTBNWNJELMSXFPJGWPF");
    msg.leader_speed = 0.263745017615;
    msg.leader_bank_lim = 0.756424060682;
    msg.pos_sim_err_lim = 0.206538724626;
    msg.pos_sim_err_wrn = 0.327532760753;
    msg.pos_sim_err_timeout = 59514U;
    msg.converg_max = 0.317352057756;
    msg.converg_timeout = 30306U;
    msg.comms_timeout = 62065U;
    msg.turb_lim = 0.782426793831;
    msg.custom.assign("EZBTGLWZYUODIQQ");

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
    msg.setTimeStamp(0.973314313765);
    msg.setSource(35790U);
    msg.setSourceEntity(75U);
    msg.setDestination(50100U);
    msg.setDestinationEntity(218U);
    msg.group_name.assign("WLQJCVGXDXMNJZEZGQ");
    msg.formation_name.assign("XHWXWNZOOSVOROCXTNVTVTRDYNSRZCMVFGIOZUKU");
    msg.plan_id.assign("TGNQTCXNSBUSBURGJRSAXQWJPBBPYPQBOVNKXTLGGZIMIFXVAIDHQZFQNHGKDQNPKKPEOXIJFREZIMICNPAAMVEXOKFUCGLEATAFHJWEYZVNYRUXJRKAQLKCUVXEGYRDESYFVKOOBHTUYWFCTGELCACICYHRXFHLVVKZZRRJBFBYOJKUIPVJODDCWNMMUASSQHUPESWBLTYMMZWNSWDEHQVDOLUZ");
    msg.description.assign("KMQMBWXGUEMNLHEZEHZLCWUIBGIMRCITTMAYIFPJPAUSVPKDDNHQHSGREWNOFTZXWUBGXJLFXBRAICVSTGJGMQPFQKDNQQOIJKFXHHCWSCECTBPLQDDEHNOBBHVCMWVWUWGLJKZNVTMPRIRRSNDZNPOMUURVSWAZXEYNBZTEOWQOAXRJJVKZARAGAOTUSTCXFOTQOGFLDYLFYLYASYLPDVRPHF");
    msg.leader_speed = 0.00905980890464;
    msg.leader_bank_lim = 0.513978976115;
    msg.pos_sim_err_lim = 0.516775889785;
    msg.pos_sim_err_wrn = 0.755519310797;
    msg.pos_sim_err_timeout = 39818U;
    msg.converg_max = 0.325275292445;
    msg.converg_timeout = 35045U;
    msg.comms_timeout = 9194U;
    msg.turb_lim = 0.725560252052;
    msg.custom.assign("WPNAWZQXYBQQRKDWFFGOFRIEYJLNACLWJVGMCJUZBTRTIFAESPUWDZDPXAKXFGLEHRQYQQMOIYPYYYBCMSPGNIDZRADWXZAIHUHDHUSJTSLINWUECLEMDQGHXUCPCJHKOTDPFHNUJETSGSJDKVNGJSOFUFKBMOTKBBCNVEZNXMKSIXZQTPRICTVLCWEIKRHOTNEVSDYRLMLAMHWTKUHIGYVVQNZWVAOYMXJZBLAFOPKRBQULZFBGCGPOEOJM");

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
    msg.setTimeStamp(0.722446012325);
    msg.setSource(37044U);
    msg.setSourceEntity(148U);
    msg.setDestination(56015U);
    msg.setDestinationEntity(191U);
    msg.control_src = 63725U;
    msg.control_ent = 121U;
    msg.timeout = 0.184040106561;
    msg.loiter_radius = 0.0594280177745;
    msg.altitude_interval = 0.0921863776415;

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
    msg.setTimeStamp(0.777594714402);
    msg.setSource(16455U);
    msg.setSourceEntity(88U);
    msg.setDestination(28525U);
    msg.setDestinationEntity(190U);
    msg.control_src = 27573U;
    msg.control_ent = 174U;
    msg.timeout = 0.565588371733;
    msg.loiter_radius = 0.187401444913;
    msg.altitude_interval = 0.50047998815;

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
    msg.setTimeStamp(0.894292270627);
    msg.setSource(43110U);
    msg.setSourceEntity(71U);
    msg.setDestination(705U);
    msg.setDestinationEntity(111U);
    msg.control_src = 31803U;
    msg.control_ent = 34U;
    msg.timeout = 0.926664805691;
    msg.loiter_radius = 0.492059792876;
    msg.altitude_interval = 0.797964843145;

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
    msg.setTimeStamp(0.0228432884403);
    msg.setSource(24646U);
    msg.setSourceEntity(28U);
    msg.setDestination(29533U);
    msg.setDestinationEntity(181U);
    msg.flags = 150U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.231632421234;
    tmp_msg_0.speed_units = 229U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.259128929191;
    tmp_msg_1.z_units = 137U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.113683671415;
    msg.lon = 0.658213710723;
    msg.radius = 0.0206292303841;

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
    msg.setTimeStamp(0.803248583415);
    msg.setSource(12725U);
    msg.setSourceEntity(231U);
    msg.setDestination(3159U);
    msg.setDestinationEntity(177U);
    msg.flags = 149U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.620674514698;
    tmp_msg_0.speed_units = 186U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.841412971133;
    tmp_msg_1.z_units = 76U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.134724004592;
    msg.lon = 0.593923915205;
    msg.radius = 0.699565248488;

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
    msg.setTimeStamp(0.195506884733);
    msg.setSource(34261U);
    msg.setSourceEntity(133U);
    msg.setDestination(30820U);
    msg.setDestinationEntity(159U);
    msg.flags = 243U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.660178234559;
    tmp_msg_0.speed_units = 110U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.70024197768;
    tmp_msg_1.z_units = 172U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.994674057737;
    msg.lon = 0.744657107364;
    msg.radius = 0.398199702414;

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
    msg.setTimeStamp(0.851834187718);
    msg.setSource(36313U);
    msg.setSourceEntity(32U);
    msg.setDestination(14871U);
    msg.setDestinationEntity(131U);
    msg.control_src = 42671U;
    msg.control_ent = 152U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 25U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.372254855512;
    tmp_tmp_msg_0_0.speed_units = 184U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.400629718214;
    tmp_tmp_msg_0_1.z_units = 168U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.683197070649;
    tmp_msg_0.lon = 0.605316776531;
    tmp_msg_0.radius = 0.193883002755;
    msg.reference.set(tmp_msg_0);
    msg.state = 228U;
    msg.proximity = 48U;

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
    msg.setTimeStamp(0.565889796403);
    msg.setSource(48716U);
    msg.setSourceEntity(230U);
    msg.setDestination(60298U);
    msg.setDestinationEntity(145U);
    msg.control_src = 47599U;
    msg.control_ent = 7U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 115U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.434369866406;
    tmp_tmp_msg_0_0.speed_units = 85U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.542022661141;
    tmp_tmp_msg_0_1.z_units = 39U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.896761785234;
    tmp_msg_0.lon = 0.316588459718;
    tmp_msg_0.radius = 0.774801355944;
    msg.reference.set(tmp_msg_0);
    msg.state = 110U;
    msg.proximity = 113U;

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
    msg.setTimeStamp(0.615578926505);
    msg.setSource(19123U);
    msg.setSourceEntity(210U);
    msg.setDestination(23991U);
    msg.setDestinationEntity(228U);
    msg.control_src = 53418U;
    msg.control_ent = 37U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 126U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.497082922288;
    tmp_tmp_msg_0_0.speed_units = 126U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.181389001898;
    tmp_tmp_msg_0_1.z_units = 123U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0577285084399;
    tmp_msg_0.lon = 0.0817861480044;
    tmp_msg_0.radius = 0.580893421431;
    msg.reference.set(tmp_msg_0);
    msg.state = 109U;
    msg.proximity = 199U;

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
    msg.setTimeStamp(0.10603072814);
    msg.setSource(32074U);
    msg.setSourceEntity(149U);
    msg.setDestination(23598U);
    msg.setDestinationEntity(2U);
    msg.ax_cmd = 0.459148815526;
    msg.ay_cmd = 0.965271548029;
    msg.az_cmd = 0.862517177661;
    msg.ax_des = 0.7209023002;
    msg.ay_des = 0.983734497649;
    msg.az_des = 0.0472329439939;
    msg.virt_err_x = 0.182379649497;
    msg.virt_err_y = 0.433921838176;
    msg.virt_err_z = 0.0743068986742;
    msg.surf_fdbk_x = 0.299245956156;
    msg.surf_fdbk_y = 0.580650272005;
    msg.surf_fdbk_z = 0.0207753962759;
    msg.surf_unkn_x = 0.85627826011;
    msg.surf_unkn_y = 0.335458246122;
    msg.surf_unkn_z = 0.882135914239;
    msg.ss_x = 0.254132170594;
    msg.ss_y = 0.765424844848;
    msg.ss_z = 0.540621726878;

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
    msg.setTimeStamp(0.44931445338);
    msg.setSource(45841U);
    msg.setSourceEntity(163U);
    msg.setDestination(45756U);
    msg.setDestinationEntity(6U);
    msg.ax_cmd = 0.496719724235;
    msg.ay_cmd = 0.0625503288255;
    msg.az_cmd = 0.164647796925;
    msg.ax_des = 0.402364693855;
    msg.ay_des = 0.917280624494;
    msg.az_des = 0.893409901045;
    msg.virt_err_x = 0.359445495812;
    msg.virt_err_y = 0.629396042906;
    msg.virt_err_z = 0.83303090347;
    msg.surf_fdbk_x = 0.693828696087;
    msg.surf_fdbk_y = 0.0982473145616;
    msg.surf_fdbk_z = 0.880540845261;
    msg.surf_unkn_x = 0.00377145383916;
    msg.surf_unkn_y = 0.0518817757554;
    msg.surf_unkn_z = 0.162895422172;
    msg.ss_x = 0.513964520516;
    msg.ss_y = 0.0193855908098;
    msg.ss_z = 0.42847571054;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YBYFVONAJGJTULKXOBUAKGSYJUWGQJTGPLMGOAGYXNEBGXCRQPXDZRSLUWXQZMPWTTNQGMCCYVMOC");
    tmp_msg_0.dist = 0.917096351971;
    tmp_msg_0.err = 0.564073915987;
    tmp_msg_0.ctrl_imp = 0.0672436758845;
    tmp_msg_0.rel_dir_x = 0.125588921631;
    tmp_msg_0.rel_dir_y = 0.0963407900728;
    tmp_msg_0.rel_dir_z = 0.00200271027708;
    tmp_msg_0.err_x = 0.791083159019;
    tmp_msg_0.err_y = 0.550905407126;
    tmp_msg_0.err_z = 0.197301683656;
    tmp_msg_0.rf_err_x = 0.0188763680388;
    tmp_msg_0.rf_err_y = 0.648288332745;
    tmp_msg_0.rf_err_z = 0.0371049880273;
    tmp_msg_0.rf_err_vx = 0.373160673119;
    tmp_msg_0.rf_err_vy = 0.62941607456;
    tmp_msg_0.rf_err_vz = 0.904850161165;
    tmp_msg_0.ss_x = 0.131167021844;
    tmp_msg_0.ss_y = 0.833546795064;
    tmp_msg_0.ss_z = 0.79544604684;
    tmp_msg_0.virt_err_x = 0.786711927484;
    tmp_msg_0.virt_err_y = 0.624449655939;
    tmp_msg_0.virt_err_z = 0.983897468787;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.289088320953);
    msg.setSource(1359U);
    msg.setSourceEntity(109U);
    msg.setDestination(1277U);
    msg.setDestinationEntity(236U);
    msg.ax_cmd = 0.819086587585;
    msg.ay_cmd = 0.101470155202;
    msg.az_cmd = 0.0719412207456;
    msg.ax_des = 0.524775848037;
    msg.ay_des = 0.0115746836593;
    msg.az_des = 0.0263991131988;
    msg.virt_err_x = 0.431255156401;
    msg.virt_err_y = 0.475739411363;
    msg.virt_err_z = 0.884349926228;
    msg.surf_fdbk_x = 0.327683709539;
    msg.surf_fdbk_y = 0.961066360828;
    msg.surf_fdbk_z = 0.702164658104;
    msg.surf_unkn_x = 0.564963947372;
    msg.surf_unkn_y = 0.881336968656;
    msg.surf_unkn_z = 0.533502998184;
    msg.ss_x = 0.558625455487;
    msg.ss_y = 0.959837526018;
    msg.ss_z = 0.387644939358;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YQKDMLJTJOFDNLWOAGAIUZBJXNCTUHCWCPZKXPYTVPTYIRDFJFGOZUHGQXPEZPNDAGWUCFHCXX");
    tmp_msg_0.dist = 0.735336498416;
    tmp_msg_0.err = 0.85051395996;
    tmp_msg_0.ctrl_imp = 0.370163638116;
    tmp_msg_0.rel_dir_x = 0.275762972785;
    tmp_msg_0.rel_dir_y = 0.415098352972;
    tmp_msg_0.rel_dir_z = 0.689230690547;
    tmp_msg_0.err_x = 0.00148104153311;
    tmp_msg_0.err_y = 0.454508822624;
    tmp_msg_0.err_z = 0.572850922307;
    tmp_msg_0.rf_err_x = 0.965552167215;
    tmp_msg_0.rf_err_y = 0.693260079936;
    tmp_msg_0.rf_err_z = 0.247878939685;
    tmp_msg_0.rf_err_vx = 0.504682294347;
    tmp_msg_0.rf_err_vy = 0.0338905543407;
    tmp_msg_0.rf_err_vz = 0.126751405484;
    tmp_msg_0.ss_x = 0.288308633056;
    tmp_msg_0.ss_y = 0.655835869598;
    tmp_msg_0.ss_z = 0.302846416988;
    tmp_msg_0.virt_err_x = 0.949990529162;
    tmp_msg_0.virt_err_y = 0.848424344008;
    tmp_msg_0.virt_err_z = 0.47836841228;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.62511303976);
    msg.setSource(32816U);
    msg.setSourceEntity(15U);
    msg.setDestination(64207U);
    msg.setDestinationEntity(228U);
    msg.s_id.assign("EKPNBKVOUTRCPTJGJOGDWPYIGBBMXFRJUHMBEUVLDVMYKRWJRNPVOSMZCDHFXNQGPTRSKAIZTULGHNEVQQCZUEMGJDAWYESTWONGLTVYLGJBCKJEIBFZJSNUZUHKPHYNDSCVNBDAOYRVXNXKBUCJXFLXAYZXDTMHTYQAPIFFULQCHEOQWISWLDFOJMWSOLDSDIITPYMRPKRTQNZXEGSZPHCGY");
    msg.dist = 0.170895605085;
    msg.err = 0.317475486469;
    msg.ctrl_imp = 0.713315998587;
    msg.rel_dir_x = 0.78065481328;
    msg.rel_dir_y = 0.754944029497;
    msg.rel_dir_z = 0.712193349963;
    msg.err_x = 0.626666974434;
    msg.err_y = 0.997904169522;
    msg.err_z = 0.546635796044;
    msg.rf_err_x = 0.599617952494;
    msg.rf_err_y = 0.0903997398124;
    msg.rf_err_z = 0.372976834505;
    msg.rf_err_vx = 0.424093168938;
    msg.rf_err_vy = 0.243681283621;
    msg.rf_err_vz = 0.0518565066833;
    msg.ss_x = 0.417153845133;
    msg.ss_y = 0.324187135697;
    msg.ss_z = 0.240221437053;
    msg.virt_err_x = 0.344948794224;
    msg.virt_err_y = 0.0619209361457;
    msg.virt_err_z = 0.526224152831;

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
    msg.setTimeStamp(0.813534760285);
    msg.setSource(50785U);
    msg.setSourceEntity(20U);
    msg.setDestination(11840U);
    msg.setDestinationEntity(137U);
    msg.s_id.assign("WUGWBDEFTOZAJXYZBCMCLILBEDPHNYXDCHWIGXGKDNEPZJTWFUPQNZZCZAYATAHNNRGPYWPWVJMOGPNUDPRLISTRMQQRYUHLAHHXYIDQDOXUJTFKQDAFBBSVQWKJVYYFMENUNQRSXMOKOIGOVWBUMTMSJXMAKWKFYCNSZERNMXUSPTJGIECALIEGZKHDUP");
    msg.dist = 0.628697297822;
    msg.err = 0.363193792842;
    msg.ctrl_imp = 0.095518323667;
    msg.rel_dir_x = 0.605672823584;
    msg.rel_dir_y = 0.0172213620882;
    msg.rel_dir_z = 0.210918779254;
    msg.err_x = 0.655051825217;
    msg.err_y = 0.505263092061;
    msg.err_z = 0.116118539258;
    msg.rf_err_x = 0.813332355759;
    msg.rf_err_y = 0.808582738118;
    msg.rf_err_z = 0.609900101501;
    msg.rf_err_vx = 0.768359587033;
    msg.rf_err_vy = 0.382071710115;
    msg.rf_err_vz = 0.618885679062;
    msg.ss_x = 0.205315562463;
    msg.ss_y = 0.822102918546;
    msg.ss_z = 0.44221422574;
    msg.virt_err_x = 0.723337825324;
    msg.virt_err_y = 0.830284511244;
    msg.virt_err_z = 0.436950436188;

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
    msg.setTimeStamp(0.0299590341388);
    msg.setSource(60385U);
    msg.setSourceEntity(165U);
    msg.setDestination(61001U);
    msg.setDestinationEntity(140U);
    msg.s_id.assign("ETTBDOBLIKGDPLSKRXYEGZZJNUAVKBPQRQLDHHMIVCVZBPJKJZOOGPNFRCROECDPAWHAJLIGHRGXXGKEKJYIKZLS");
    msg.dist = 0.344358162656;
    msg.err = 0.854835103483;
    msg.ctrl_imp = 0.908471191546;
    msg.rel_dir_x = 0.4122752065;
    msg.rel_dir_y = 0.949304788833;
    msg.rel_dir_z = 0.657214911856;
    msg.err_x = 0.231952319147;
    msg.err_y = 0.0919760327782;
    msg.err_z = 0.349990388184;
    msg.rf_err_x = 0.68303847679;
    msg.rf_err_y = 0.297675246801;
    msg.rf_err_z = 0.927026226604;
    msg.rf_err_vx = 0.248072265291;
    msg.rf_err_vy = 0.235688612607;
    msg.rf_err_vz = 0.523661524434;
    msg.ss_x = 0.0847588667265;
    msg.ss_y = 0.479524920638;
    msg.ss_z = 0.172230134962;
    msg.virt_err_x = 0.653410151725;
    msg.virt_err_y = 0.966682363382;
    msg.virt_err_z = 0.0261425520931;

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
    msg.setTimeStamp(0.643669690396);
    msg.setSource(35349U);
    msg.setSourceEntity(7U);
    msg.setDestination(35884U);
    msg.setDestinationEntity(85U);
    msg.timeout = 54590U;
    msg.rpm = 0.25794532869;
    msg.direction = 11U;
    msg.custom.assign("KDKEWWPKRJKQQTQBYVLYVWZGQRVCIANXTJGZEEUBBJEEMJMZJMNLLSCHUVXKAUCLZXLPSTQGLMMDHDBSRXANIODADTYWTJGZCPRFRGRFQEGDIDFHUOVVQFZENJMTOBSYNNIMH");

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
    msg.setTimeStamp(0.477087912913);
    msg.setSource(14306U);
    msg.setSourceEntity(226U);
    msg.setDestination(19594U);
    msg.setDestinationEntity(99U);
    msg.timeout = 1554U;
    msg.rpm = 0.434137151584;
    msg.direction = 208U;
    msg.custom.assign("MAWGIIBNSKYDLNTTPOTDBVSKOCEORGUZOAPZGEMXZGJMJGJDSTK");

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
    msg.setTimeStamp(0.475575350472);
    msg.setSource(10762U);
    msg.setSourceEntity(107U);
    msg.setDestination(11696U);
    msg.setDestinationEntity(216U);
    msg.timeout = 49608U;
    msg.rpm = 0.331206335104;
    msg.direction = 130U;
    msg.custom.assign("VNAMQEIGKPIIXHMBQJHHSRKWYPABJACKXVIQRZYTDXLHRAJNOZNAMOZBTUPAJAGURXLZWBOUUHFVORUZPJYYGVYYODGFOWYYXZGVAIAUIRMLOCCWETWDBFPKPFCLRVCJLGFHVSEWVIEEDNWPEXWCTQVFXLRMSQHLKDEFGUFNSPONLTPJTZZ");

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
    msg.setTimeStamp(0.65013750635);
    msg.setSource(63306U);
    msg.setSourceEntity(19U);
    msg.setDestination(27797U);
    msg.setDestinationEntity(58U);
    msg.formation_name.assign("QCOTCLSGHJHAOBADFSKCKMJKOYFSAUIYUZZ");
    msg.type = 7U;
    msg.op = 157U;
    msg.group_name.assign("PKUMKULPUBSSPJEFULSXXVRZIRCVIYMCHJWYXLHKTSLZKMDEIKGBRSWCLOHWPYGXPOUUTYIFBRGTHOVLVONHTJRRMVHDGADASRNNMQJMIKEOCFTZWNXFSXMPLDTQQQBLCEJFKDEZBCQPVKXWRJVLNJBYHYZUFSIQFRFAUTITFJBWJZCAXGDIVFAEWEGXSEJEQYLHVNYQC");
    msg.plan_id.assign("NCFFVUMQRIVMYHDTQKIZTVVVULJBBDR");
    msg.description.assign("RGEJXGECXYUALGUNZQHTMWPAJWXJYGNVSJVAFDWDZMYOPGUEXQBAODBSDXQRPVVDLNMHMMXYHQXUIBCNGMVWYMFIWAISFVFQFLWOPGCI");
    msg.reference_frame = 113U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 2240U;
    tmp_msg_0.off_x = 0.0797272557182;
    tmp_msg_0.off_y = 0.133895945675;
    tmp_msg_0.off_z = 0.403622517019;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.2414553503;
    msg.leader_speed_min = 0.117167365933;
    msg.leader_speed_max = 0.925950606974;
    msg.leader_alt_min = 0.0713425532776;
    msg.leader_alt_max = 0.97760726158;
    msg.pos_sim_err_lim = 0.766674185573;
    msg.pos_sim_err_wrn = 0.176719528806;
    msg.pos_sim_err_timeout = 31351U;
    msg.converg_max = 0.687074220208;
    msg.converg_timeout = 64014U;
    msg.comms_timeout = 42155U;
    msg.turb_lim = 0.479856779386;
    msg.custom.assign("MXZPTKHPLKMVKPKCZBZCIAQWYIVSBXOCYDKBVWOEDPHMZUGHHMWOFMVPJLGRDFOGEJXPKBJDCBSFDJSDAANQAQLTEUOGUPLRHNWUVDTDJIRQWESXZUBFIASWABQZZXJWYXORVLGWRRJWBNDTKALORUOZIVSLTRQCFNMNCVGYEIEHFOEZYVAHLYTIXTMYK");

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
    msg.setTimeStamp(0.537684304549);
    msg.setSource(41055U);
    msg.setSourceEntity(227U);
    msg.setDestination(45386U);
    msg.setDestinationEntity(25U);
    msg.formation_name.assign("NTBMLQZPVQYWKHGNDCRAJWTZMLLNXNHTYKVQBEDJPFYPGCLCISFEIXGBILHJZXSYNWIWKKLYTKMMMQFGGDUEWVIFMOMCRUVLIKHSVUIABJNGJHLIHRESWDNZJKNRAPEPSVCSSHBDETYEODFBAOQCREVJTZBUYARQOHPFLS");
    msg.type = 109U;
    msg.op = 172U;
    msg.group_name.assign("COHVKMPTTZQAWTFFULIJRLDERASTAZCEAORIDJVGZIGHXOBEMGHFYQCMRQHNYGUTBLJCAMBMFCVMTOGLAKKJDXQNMBZLNBFYSXZPZWMFJVRWNFSCWXDSRUJLYRLOALRKYFUQJUVYISRJBGWQPOTQUECEIHEYPULXSIACZVUSWKGMBNOUORHSPAPQGEWXBPYPD");
    msg.plan_id.assign("IFVRPDLSWKOIANJEOJPNWUMEFDHOBMVLEWH");
    msg.description.assign("ZHCPMBKJMHZDFAWFUNLSPMSKGUZAGQIWJXSHAIORJDACNKFJDBQ");
    msg.reference_frame = 162U;
    msg.leader_bank_lim = 0.917785419731;
    msg.leader_speed_min = 0.855061403928;
    msg.leader_speed_max = 0.657667468916;
    msg.leader_alt_min = 0.308077249391;
    msg.leader_alt_max = 0.190011066555;
    msg.pos_sim_err_lim = 0.800542488505;
    msg.pos_sim_err_wrn = 0.53540969131;
    msg.pos_sim_err_timeout = 32618U;
    msg.converg_max = 0.592425388031;
    msg.converg_timeout = 6745U;
    msg.comms_timeout = 30382U;
    msg.turb_lim = 0.688936014068;
    msg.custom.assign("VXIUMYMPSDZDLQZNVQTATSAERJLBBPSKICRQHROXUKVYNOHQJIKQPZVTQJCBMYGBZNSUXXWDOPVCTKCDVEJZXDRBIOQYOPBTODYCUFAPDRNYOWCRIGDSJCTHMCSQFVWVGHLSHADZWYMCXMLMAXLGTNBAFMRYGWNMINCZEFUWIQUEFJHFHTTSAPTZBZNRZH");

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
    msg.setTimeStamp(0.473393567182);
    msg.setSource(47191U);
    msg.setSourceEntity(64U);
    msg.setDestination(34412U);
    msg.setDestinationEntity(131U);
    msg.formation_name.assign("EUETJKSVOOZGELEPCYTQCOYGTDFGZLMPAASHGKYMVXFILAWVVBBWPSBPZOYPNMYIYIWILNOXDCRBDHUYNUZANLVKZYKQJREEPJTBWSJNBFIRTHOWLRQYJXNXUMQZFQZOPMKCAQHFXDISQCUXHFAEMSCLGRSPGEORJXHBMJFHHIJFWGDLWVZLDEIVXDITFIKRKJUSPCEDOCAMKUUGTVXABMWCMQPVLZTRDNRFHNNTHUBWZSNYRKDQBX");
    msg.type = 237U;
    msg.op = 37U;
    msg.group_name.assign("JNPUXGATRIBQKMATBVOBKGDUNDXPJEWNHWMTV");
    msg.plan_id.assign("TQVBJGMIWXDLVCXLCPZNSINFYNRBHNHCNUHXGPCVSELXYVWQDSOLVZGECEUWBOFCTZAAAUKGXPTWQHDPEJMRFNQUZXRHFSQBWXUKMMPSTRYDILHOIAGFAQMPAHKBNVZLQSYZDONKRGODMPJWVLMJBTHQQOCWCFFMGTPVKKGKYLCOWNGIMVEJIDBUWJORQTAEJJLJLBYIVCSFABGJZTUXSUKFDYKIZIBNREMSARZXYEYKF");
    msg.description.assign("DIXSEABHPOEHUBNYLRCNCNMQEKGFWUBZCKNPGZUAULOTKPDLRDWJANBAUPNWOEUWQTGCVTSDVSSJDNYOKJMXJJBAZZGFHKNOQVEAYZMPRAYLUXFDFICLIQIHELQESMKXTQXOGHHHNGFMLKTJPQDVRRJETDXWBIGIGWDVSZAYVMUYFRQYOFRLIHYVUVJMREACSZIWCBWCPVFXLBTOUPXMBXTGHIYVZJXKJHQLFAR");
    msg.reference_frame = 210U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 39639U;
    tmp_msg_0.off_x = 0.707469363951;
    tmp_msg_0.off_y = 0.518196691921;
    tmp_msg_0.off_z = 0.0592425503028;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.21279976638;
    msg.leader_speed_min = 0.802741165106;
    msg.leader_speed_max = 0.475238627192;
    msg.leader_alt_min = 0.437982321988;
    msg.leader_alt_max = 0.330845431396;
    msg.pos_sim_err_lim = 0.532817641678;
    msg.pos_sim_err_wrn = 0.108945438992;
    msg.pos_sim_err_timeout = 28785U;
    msg.converg_max = 0.181854519684;
    msg.converg_timeout = 3405U;
    msg.comms_timeout = 55589U;
    msg.turb_lim = 0.732329058288;
    msg.custom.assign("URMKQROWYLQMSXFWYPOSAOSNLSTFNNPJUKBHXCGHHWIADVFOOGXWCDGQFPVSWJUVNQEBBHWEDABUXRBQDRDJWKFNIUPHJTSVZIRMKFLGCYHLMHOJJISPTZBIBYMGZEADZACKMTKDOAYHO");

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
    msg.setTimeStamp(0.580966271974);
    msg.setSource(693U);
    msg.setSourceEntity(183U);
    msg.setDestination(59285U);
    msg.setDestinationEntity(219U);
    msg.timeout = 46501U;
    msg.lat = 0.756707487844;
    msg.lon = 0.173210135591;
    msg.z = 0.994092448211;
    msg.z_units = 11U;
    msg.speed = 0.865922938108;
    msg.speed_units = 54U;
    msg.custom.assign("CDOQEICBIVAHWFTWRRWNFBVQTDOZSGXKBRLFHIZTYJPMAJOTSSSAHKUBDBCHZWZJYVNKA");

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
    msg.setTimeStamp(0.782552602808);
    msg.setSource(62222U);
    msg.setSourceEntity(5U);
    msg.setDestination(29848U);
    msg.setDestinationEntity(126U);
    msg.timeout = 50105U;
    msg.lat = 0.823328110881;
    msg.lon = 0.817412938451;
    msg.z = 0.81808600535;
    msg.z_units = 21U;
    msg.speed = 0.972340476787;
    msg.speed_units = 207U;
    msg.custom.assign("TJBYMADGWHBDTIWXCHUJMQNZQFPATSFKWYFDTCQLATVCHAICXJRBMHOQMEQSUJTBKPFAMZAFICAQFRDVYSINBUIZRGEUBLGUDYQ");

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
    msg.setTimeStamp(0.605205897621);
    msg.setSource(63264U);
    msg.setSourceEntity(161U);
    msg.setDestination(25433U);
    msg.setDestinationEntity(86U);
    msg.timeout = 20245U;
    msg.lat = 0.428249961709;
    msg.lon = 0.113467720966;
    msg.z = 0.266430700361;
    msg.z_units = 235U;
    msg.speed = 0.452461855173;
    msg.speed_units = 93U;
    msg.custom.assign("RLPCRKBOEMDNPIRJZPTUDBZYZMMYCRLWBBAGGNQUKEQWYUHTIXRSXARBLMKEKVQJKNJRAKDYZP");

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
    msg.setTimeStamp(0.529300573657);
    msg.setSource(19697U);
    msg.setSourceEntity(84U);
    msg.setDestination(28009U);
    msg.setDestinationEntity(140U);
    msg.timeout = 51228U;
    msg.lat = 0.376671903972;
    msg.lon = 0.590547660813;
    msg.z = 0.586702986239;
    msg.z_units = 232U;
    msg.speed = 0.246324790721;
    msg.speed_units = 201U;
    msg.custom.assign("JJOBWZAFQAGKNPUDISYIAVIJNVZTELDYAVFKHOUXHUVWFRHWRWCNQYOEZUKEXSFHLJZWKEYMQHMNNKUSYETUQOMANXXNPDTTAJYULWWCCSQHHNKLUGSVKRXJBORTNGXKTZTSQZBVMERCASDRUBMZQDDGEFCPAXFOBYCITRWMY");

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
    msg.setTimeStamp(0.795306652306);
    msg.setSource(16053U);
    msg.setSourceEntity(176U);
    msg.setDestination(56820U);
    msg.setDestinationEntity(98U);
    msg.timeout = 27897U;
    msg.lat = 0.416681336941;
    msg.lon = 0.328877436102;
    msg.z = 0.467033065928;
    msg.z_units = 171U;
    msg.speed = 0.980765603764;
    msg.speed_units = 254U;
    msg.custom.assign("PTHVICQWPKIOWTLDOZJGHHPKCGCRKOIXYMIPPZHLWNFLEQFXQGFSYZTNOHBEHYPCNESSAFYSKDVMWHGFZGKSRFUHOJMMZAGVBUPJOWULUSJXZNWTMUJQQDLCSBNDMMCFJEXXRUEGDPKQBYVTIJNXBTXALCGYFLAMKIEPEAXDCDRYPISBNQHTYUGBZVNVWFCOXRIRACLHEYVMJYKTRX");

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
    msg.setTimeStamp(0.324095208427);
    msg.setSource(54952U);
    msg.setSourceEntity(65U);
    msg.setDestination(30814U);
    msg.setDestinationEntity(247U);
    msg.timeout = 58883U;
    msg.lat = 0.796291216377;
    msg.lon = 0.758022448061;
    msg.z = 0.209062207227;
    msg.z_units = 69U;
    msg.speed = 0.423388441374;
    msg.speed_units = 168U;
    msg.custom.assign("FICSMHIOAIBVBCDPWNVERSWZKRCKFQGOAZGQQUTLREDVVJMLFFNARXKFKEPNRVBULRMIXJBWKQHU");

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
    msg.setTimeStamp(0.717004836099);
    msg.setSource(21705U);
    msg.setSourceEntity(231U);
    msg.setDestination(8995U);
    msg.setDestinationEntity(244U);
    msg.arrival_time = 0.68203594579;
    msg.lat = 6.75804175306e-05;
    msg.lon = 0.962075525552;
    msg.z = 0.35410614993;
    msg.z_units = 157U;
    msg.travel_z = 0.208054134703;
    msg.travel_z_units = 114U;
    msg.delayed = 221U;

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
    msg.setTimeStamp(0.927089265729);
    msg.setSource(36653U);
    msg.setSourceEntity(69U);
    msg.setDestination(52787U);
    msg.setDestinationEntity(184U);
    msg.arrival_time = 0.833593205351;
    msg.lat = 0.2800081261;
    msg.lon = 0.612590097068;
    msg.z = 0.949637201383;
    msg.z_units = 128U;
    msg.travel_z = 0.467546073124;
    msg.travel_z_units = 188U;
    msg.delayed = 225U;

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
    msg.setTimeStamp(0.309691771974);
    msg.setSource(61983U);
    msg.setSourceEntity(56U);
    msg.setDestination(34951U);
    msg.setDestinationEntity(100U);
    msg.arrival_time = 0.707373564934;
    msg.lat = 0.312670755929;
    msg.lon = 0.245102151952;
    msg.z = 0.239036417243;
    msg.z_units = 240U;
    msg.travel_z = 0.129975843835;
    msg.travel_z_units = 37U;
    msg.delayed = 51U;

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
    msg.setTimeStamp(0.205309157011);
    msg.setSource(15585U);
    msg.setSourceEntity(244U);
    msg.setDestination(17597U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.50227338403;
    msg.lon = 0.16268706274;
    msg.z = 0.742102790846;
    msg.z_units = 103U;
    msg.speed = 0.501688571322;
    msg.speed_units = 17U;
    msg.bearing = 0.0230535625262;
    msg.cross_angle = 0.329121141821;
    msg.width = 0.885363322447;
    msg.length = 0.978428739322;
    msg.coff = 209U;
    msg.angaperture = 0.724719375289;
    msg.range = 40915U;
    msg.overlap = 37U;
    msg.flags = 105U;
    msg.custom.assign("QJVOJRGAUUFLXJEPBMDFFSZQXKURLQTSZHOCZCLTCPHGDBZAYJPIWNJVHSVVPRKJFRSWR");

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
    msg.setTimeStamp(0.503042698067);
    msg.setSource(19968U);
    msg.setSourceEntity(42U);
    msg.setDestination(53388U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.198532688051;
    msg.lon = 0.770442060475;
    msg.z = 0.606080207253;
    msg.z_units = 236U;
    msg.speed = 0.681404917269;
    msg.speed_units = 37U;
    msg.bearing = 0.522698995158;
    msg.cross_angle = 0.497239783963;
    msg.width = 0.57619807682;
    msg.length = 0.712347511326;
    msg.coff = 202U;
    msg.angaperture = 0.186098383306;
    msg.range = 13066U;
    msg.overlap = 187U;
    msg.flags = 221U;
    msg.custom.assign("TVSGTYUBBFYDQHBFABQNTTSSJBWKAPCLEHPDDQZLEDKQEKMIQXHOACIRZCHEYFWTELKHPJVWOEIMNDEWSUVFMUNNFCZRLKTQYSGENKZRXZWUVUQIGLGOSOUQMYPNUJATDHMJZPJIHAKHOBYJKRXPOTVXMRZGDTFVLQBKA");

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
    msg.setTimeStamp(0.57825936855);
    msg.setSource(29022U);
    msg.setSourceEntity(236U);
    msg.setDestination(18376U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.476565020175;
    msg.lon = 0.623713593693;
    msg.z = 0.194179354477;
    msg.z_units = 29U;
    msg.speed = 0.171003995855;
    msg.speed_units = 86U;
    msg.bearing = 0.527185299944;
    msg.cross_angle = 0.680518126687;
    msg.width = 0.19310728426;
    msg.length = 0.884526531012;
    msg.coff = 131U;
    msg.angaperture = 0.420265222391;
    msg.range = 9043U;
    msg.overlap = 107U;
    msg.flags = 8U;
    msg.custom.assign("BKTAHLIOWPWRBOWCICHXGFYLRAINAGVQREWTTOTXYLLYFZOAUNRENJMNWUYCCKBYHLDFEADQFZZIHXYKQLLKBBREX");

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
    msg.setTimeStamp(0.932142624053);
    msg.setSource(47198U);
    msg.setSourceEntity(242U);
    msg.setDestination(12602U);
    msg.setDestinationEntity(97U);
    msg.timeout = 40923U;
    msg.lat = 0.506312986356;
    msg.lon = 0.460676058472;
    msg.z = 0.885376729286;
    msg.z_units = 60U;
    msg.speed = 0.57912637979;
    msg.speed_units = 144U;
    msg.syringe0 = 103U;
    msg.syringe1 = 12U;
    msg.syringe2 = 62U;
    msg.custom.assign("PSLYWTRCGSVBMWLGJKKJFQTPOEGWGUATLSNVTFZPTGMFBZKMQHTJYJHBSWPCEIZIHVWXDNVMQMMAACKZPDYMJKBBRPXWMLBHXVNCFERQZWXEQVHVUFHIYKOKCAUXSAJCICPKGDXJLYOEXHCUFHEJJJXIBTFBINSPGDLOMAZADTSSLLPQHNBCWWZKUUOROPANRFASDOVG");

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
    msg.setTimeStamp(0.90675059298);
    msg.setSource(36386U);
    msg.setSourceEntity(209U);
    msg.setDestination(4495U);
    msg.setDestinationEntity(26U);
    msg.timeout = 9445U;
    msg.lat = 0.790020326842;
    msg.lon = 0.231715495073;
    msg.z = 0.974069449928;
    msg.z_units = 32U;
    msg.speed = 0.529395615848;
    msg.speed_units = 20U;
    msg.syringe0 = 41U;
    msg.syringe1 = 184U;
    msg.syringe2 = 104U;
    msg.custom.assign("IUEBICYYQNPIUSQN");

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
    msg.setTimeStamp(0.276573706518);
    msg.setSource(19219U);
    msg.setSourceEntity(224U);
    msg.setDestination(42550U);
    msg.setDestinationEntity(110U);
    msg.timeout = 24809U;
    msg.lat = 0.222657311211;
    msg.lon = 0.851276803993;
    msg.z = 0.265735721788;
    msg.z_units = 81U;
    msg.speed = 0.119682973648;
    msg.speed_units = 182U;
    msg.syringe0 = 123U;
    msg.syringe1 = 19U;
    msg.syringe2 = 185U;
    msg.custom.assign("XZFRIKAGFGBJAYJLQTICKQNIIKHQCCONOEKMFMVUQWODJTJHMBNHGPEFTKDNNZUYECWNJSRANWVHPWJFVAMZIGSNSTADFGAROZBTOEJWRUHPLKDOPLTPELSTCNYXGRUCUYIBRZ");

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
    msg.setTimeStamp(0.851439414219);
    msg.setSource(65365U);
    msg.setSourceEntity(156U);
    msg.setDestination(42533U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.0341302364473);
    msg.setSource(46108U);
    msg.setSourceEntity(158U);
    msg.setDestination(22119U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.334791593616);
    msg.setSource(39373U);
    msg.setSourceEntity(53U);
    msg.setDestination(28646U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.490185469113);
    msg.setSource(46462U);
    msg.setSourceEntity(99U);
    msg.setDestination(57683U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.911470669773;
    msg.lon = 0.120288426249;
    msg.z = 0.310160834988;
    msg.z_units = 83U;
    msg.speed = 0.64243382162;
    msg.speed_units = 179U;
    msg.takeoff_pitch = 0.158763609735;
    msg.custom.assign("HPFELIFEOYSRDIKVUEQBJEXMJUDTGRCBPYPAEOKFRYIVYTLHVJIMLRSVSCVXYXRTGVUZSPRTBRIDTLUMBGYGNQXZCNOJBAUCCZPQEGMEKUXAKPWXGDSDFQOSFDLOAZWZIJLKTHJKUHYGZNMJUFIHHXBWCYWINHLLHQDJKAAXRMJZDXMKWPQCTNTOTNEGHQSWWLEMFCVDCSYIABZAQNFOXZQPDNNWKVOZSJAGATNUOYURPFMLW");

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
    msg.setTimeStamp(0.969724534369);
    msg.setSource(38662U);
    msg.setSourceEntity(219U);
    msg.setDestination(32260U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.92360612088;
    msg.lon = 0.425438632377;
    msg.z = 0.25052693443;
    msg.z_units = 89U;
    msg.speed = 0.763598120329;
    msg.speed_units = 114U;
    msg.takeoff_pitch = 0.993530642958;
    msg.custom.assign("XKVLPWOWHTKFAKMTCRHZYYGBDHAWESQUKPGVNNESLWOIBRHJHUOCJESNBLCGTBFMPSWRQFTDNGEAGVBIJYBEJZRUOLXAMQDCDBRSXOZQLUPKTLBZPHSQXBFZRNQILENXZRUTEMYKLYOZWFKWWLYATRAAAVUYSKHKVOVYPIBXSMFQMJCPDQDIZFNVXOGJGDYPXEUQNSIFWDTAUKJGJJWANCRNHQJOPFHUDRPFECTICOTVMVX");

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
    msg.setTimeStamp(0.57891668829);
    msg.setSource(11983U);
    msg.setSourceEntity(198U);
    msg.setDestination(3360U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.326881786476;
    msg.lon = 0.365406766576;
    msg.z = 0.979608991758;
    msg.z_units = 20U;
    msg.speed = 0.853886694259;
    msg.speed_units = 19U;
    msg.takeoff_pitch = 0.330449840919;
    msg.custom.assign("VKDVZFUXTLJCHKPV");

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
    msg.setTimeStamp(0.366902459788);
    msg.setSource(26471U);
    msg.setSourceEntity(56U);
    msg.setDestination(25041U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.120873760829;
    msg.lon = 0.464617075101;
    msg.z = 0.240800986096;
    msg.z_units = 4U;
    msg.speed = 0.611676687531;
    msg.speed_units = 46U;
    msg.abort_z = 0.381236527627;
    msg.bearing = 0.573867263516;
    msg.glide_slope = 73U;
    msg.glide_slope_alt = 0.606101704952;
    msg.custom.assign("MYZTHJLQHLZCHPDADVIAIXGFSDXTJKTNGNOHOUZUZAOVGPSNCPHXOWEABVZHCJDTHBNSBMRVOOLDEYZIPCTGVMFWCWRKLRQGZWYFSEMSXYPCWVKUSAUKMDGOFZZKQKOJVYGHQVODFJRRFEGCRLXBKUGDUENSXQIITYVJXJIEAILJAETWKDXPFXACZQAXNMLTYYUMYHWGRFHLIQRWBWEURTJMJTNQ");

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
    msg.setTimeStamp(0.534700680422);
    msg.setSource(20000U);
    msg.setSourceEntity(196U);
    msg.setDestination(46426U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.758849722581;
    msg.lon = 0.233484111034;
    msg.z = 0.163402540625;
    msg.z_units = 109U;
    msg.speed = 0.65045659481;
    msg.speed_units = 249U;
    msg.abort_z = 0.135729213067;
    msg.bearing = 0.292951018437;
    msg.glide_slope = 162U;
    msg.glide_slope_alt = 0.825120678881;
    msg.custom.assign("RPGUKVGVSUCDNJHOIHSUMPTDKZFQJPNDKIEETOWIWUABCCTMPMTEIVVBFCFBRZBFMNAKWXLAGF");

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
    msg.setTimeStamp(0.998419162486);
    msg.setSource(37641U);
    msg.setSourceEntity(20U);
    msg.setDestination(52781U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.199011575248;
    msg.lon = 0.182294068597;
    msg.z = 0.200317011071;
    msg.z_units = 133U;
    msg.speed = 0.900693344641;
    msg.speed_units = 180U;
    msg.abort_z = 0.0968954008007;
    msg.bearing = 0.721986709362;
    msg.glide_slope = 9U;
    msg.glide_slope_alt = 0.219592194129;
    msg.custom.assign("WCKTJCLRQOMZKDADHRXQGTVCQWKMFXAKJUNJWABHTUEZVUBLDGMDQUBUMXMEZLDILHHMSVVOIPPRBUFLCUYHCHORWQHZRFQWBIYGMWWTNCANAXPJYPEHKCPUCGVTDXSHNBXEJOQFYMAGELXSZIPDWGTLROYUINNVEGKSJIIGGNEOZZHS");

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
    msg.setTimeStamp(0.856095994801);
    msg.setSource(13859U);
    msg.setSourceEntity(187U);
    msg.setDestination(62229U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.967923016369;
    msg.lon = 0.659972998632;
    msg.speed = 0.167891114117;
    msg.speed_units = 97U;
    msg.limits = 148U;
    msg.max_depth = 0.472203307268;
    msg.min_alt = 0.0475161243445;
    msg.time_limit = 0.245524173996;
    msg.controller.assign("WDFYYQDYNPZYSFHYDFXLFENVQUAGVJBVZRCLPHHHWKCAILOOLOTGPSQGLMCOPBMBFGMGUNNSOCNAAPMNBKLJ");
    msg.custom.assign("YLADZKCNQXMSHZNPXOXYAOIUZLOLUKMCLFKTDBFFETMLTTBQWDPSGDUPLISZXOUVDMZUNZQPQSGREZOODHFIJCMVATVKBTJPXPTNXQLKCGVPJEYUOTEJEHYHRUFWJFGBANGAIXALLDERXJSHDVGYYWCCSMPWRQBISRBCWGQIMDZKVOAGJHHAXAJQQNPMVNZUBWYVSIYIKLMQBOIWGTRFEEJCEUFVHKJHMWNGCRFESRPSBZYNIRBVDTRXKWN");

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
    msg.setTimeStamp(0.566481293217);
    msg.setSource(17451U);
    msg.setSourceEntity(160U);
    msg.setDestination(10893U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.880596710157;
    msg.lon = 0.909867651251;
    msg.speed = 0.139954762177;
    msg.speed_units = 208U;
    msg.limits = 47U;
    msg.max_depth = 0.590828552276;
    msg.min_alt = 0.329339907028;
    msg.time_limit = 0.321391007484;
    msg.controller.assign("ZIIVDNZOKFJUPHZEMXJOBMZXIFFIMCSVMYWBMWKGDFTHZCALEYBDUDTVGPRIAIBNNHSSXLQLDHFPHAZUGQUDPFDXBEMHBIDSTFJTIOHVDYNKVCCRQQCAACGEKUBEESFWXJCVKNMFSLPWMRSPBUANTLAYRJRINWSHYUKCYE");
    msg.custom.assign("VXRRPZIXJUVAWVBERLTMXGMWCJMJQRISSPGAIYRCFLEXNOKKFNUOGBXFTQPOVYZQJIQMSUXYGUHDKAOAHBLFBSPZRESKEZSXTZRVJBAHCMNXWLQIUNURNGMJXETLPMVZIQUFEHVEISAOMQNUOGANCKCYHVWTSPATIVWKPDWBYWTBLFQIYHPMDKJWSHGZNJODONBWFDLD");

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
    msg.setTimeStamp(0.317199399889);
    msg.setSource(39740U);
    msg.setSourceEntity(214U);
    msg.setDestination(60686U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.395013248392;
    msg.lon = 0.630269535325;
    msg.speed = 0.804390660619;
    msg.speed_units = 253U;
    msg.limits = 2U;
    msg.max_depth = 0.574594911931;
    msg.min_alt = 0.636152577969;
    msg.time_limit = 0.522827379711;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.483896417268;
    tmp_msg_0.lon = 0.241633836579;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("HCYXYSYANHOVCZRVBBKKFYMAUQELJQHJONUAZKEEIFHGWLHDMHKCYEDDHJLQEATGPGDVFFMRCIUJNOUDQWXYQNGIPHTKQBZKRTJMFUUFPLA");
    msg.custom.assign("OXPCHQXAIZSFTKUAAJLRPYZGSERCCNJYTWUZSCYBEJIUHRXUVCVNELKFIYVQXTYUOWBLZOZKXJHEZDYA");

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
    msg.setTimeStamp(0.181494567035);
    msg.setSource(64990U);
    msg.setSourceEntity(176U);
    msg.setDestination(25369U);
    msg.setDestinationEntity(162U);
    msg.target.assign("WUZTHPFTNBHMXZRZTOIQJYVVNWIAEOQIRIUWRASKOXDBORZYOPPXTJGELLMGDMOGYWGAYMLAUBEJK");
    msg.max_speed = 0.649811199813;
    msg.speed_units = 41U;
    msg.lat = 0.239207269275;
    msg.lon = 0.191647233165;
    msg.z = 0.902505929213;
    msg.z_units = 161U;
    msg.custom.assign("NXZBXHAISOWGYOTAPBITMAEYDQIAFVQPUFGXWBVENBDNVWLSKOMLFTLAYZSCVSQIMGDHLZCXHYCQUXQEAVZRKPXPIKQWPKOAGMYLVUQBETUCDJUZICHURPPENAKLXQWLTMHEROLZKDWEHKNFRPJRWHHIJCISFRRJDDRGNZJCOHISSMEWXSNZFQXEKOJLATTGSMCJJFUMGFTVNBKI");

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
    msg.setTimeStamp(0.17261404612);
    msg.setSource(53020U);
    msg.setSourceEntity(236U);
    msg.setDestination(7458U);
    msg.setDestinationEntity(13U);
    msg.target.assign("CKEVTWLKXLEWPCOBQKIOSZTFWHAWJKQQVLKWFLOVEAZTCFNCZDKISOJRHQKOMFDDZTFNBIJGEUOQXTYAPEZRYHLARLBDGBDBIRGPAYGXVUJKEUTRNGRSBJTNUT");
    msg.max_speed = 0.516513044012;
    msg.speed_units = 51U;
    msg.lat = 0.563317135164;
    msg.lon = 0.519572119079;
    msg.z = 0.584148645834;
    msg.z_units = 5U;
    msg.custom.assign("HIRKWNQFYZQTCDQBVAPZPHZIJQAGMKRWDWODESXHPEHKAGNZOWOTIBDUSCJIVXJDCXYXHCQGLHKRFPNOAAPOBQWXGLKMYWYJRLYHPBGTKFUURZXLUIFZWQQRHEGTOJMEHMASTMECXPIWVDOXNAEVDELFVTHIFQUDDY");

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
    msg.setTimeStamp(0.110689591015);
    msg.setSource(63828U);
    msg.setSourceEntity(22U);
    msg.setDestination(64688U);
    msg.setDestinationEntity(228U);
    msg.target.assign("FLTZHWENSIWPFTKQAJTTULXPQHTHVZVPYQRLSMMWLXKYJURRAFGRQPOQJKUSFGUFYHEHPBOTNKFVGQCXRZJWRGDYVPLRIXDSOCBWBTICZAKQJURMEYHNQAVJXCADPZMBHWITNZJAWCMGBAIRNIZBQVCNDJOMDGEKKCHRCCJBY");
    msg.max_speed = 0.893935208594;
    msg.speed_units = 89U;
    msg.lat = 0.315478073444;
    msg.lon = 0.683439293676;
    msg.z = 0.800948823107;
    msg.z_units = 221U;
    msg.custom.assign("UZXTSQBTXDJQWHSEQUAQMWMDPCWHENBCZWKOXCZSYYFBGWEFVVIXHBVLEUMJOIFGSGGDEUOCRPLCXLOZIKXKKMQEHJRGXGUAJZMPZPIRZALELQVTSNSHAYNEBGCBRANITOKJJIPURSHAFUCFXABIRYZVNW");

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
    msg.setTimeStamp(0.900186140846);
    msg.setSource(56597U);
    msg.setSourceEntity(29U);
    msg.setDestination(24842U);
    msg.setDestinationEntity(73U);
    msg.timeout = 4078U;
    msg.lat = 0.773181372338;
    msg.lon = 0.677592843055;
    msg.speed = 0.685531532991;
    msg.speed_units = 61U;
    msg.custom.assign("QVFDVGHRZCUCTHHLOOFPKJEPWVZQOFELMZNDNIBGIEXQCUMENNXO");

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
    msg.setTimeStamp(0.873106198665);
    msg.setSource(23765U);
    msg.setSourceEntity(36U);
    msg.setDestination(32862U);
    msg.setDestinationEntity(152U);
    msg.timeout = 10679U;
    msg.lat = 0.97902292005;
    msg.lon = 0.919037353656;
    msg.speed = 0.44074231059;
    msg.speed_units = 10U;
    msg.custom.assign("TYKIYMVFDKLNHINKFZEWZVSKMEDHXRYCCAPKFBLEBPIHGQAFGYRUQIUABRXLMOHUBWMYXETDANLJXXOOTABCTORTLCJKNGQWQADKUTWOQIVDPSKFUJZBZWRWSJYSYPGCRVJPURTYLNTKXREXJHOHGXPZYFUZQNBMPFZOSMICWQZALVEMRGEXE");

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
    msg.setTimeStamp(0.883120213396);
    msg.setSource(4703U);
    msg.setSourceEntity(180U);
    msg.setDestination(51063U);
    msg.setDestinationEntity(19U);
    msg.timeout = 7341U;
    msg.lat = 0.130344786155;
    msg.lon = 0.635295680899;
    msg.speed = 0.44583226134;
    msg.speed_units = 56U;
    msg.custom.assign("UXKNMXQIYPZUMPZVRRGUEKDHJNNDRNPVJURMPCEHTIJJMDHEAECINDILQPUOWRGSZNHFSZDVSZFXPHEKPYBRBOHUTYXLPSKBBFZHQASGFBNCZOQISFWOGCEOTKWOQMAOFBTZXXDVRYVLAHDABUYRQWRDOJLTAWXQMATLGB");

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
    msg.setTimeStamp(0.583708465899);
    msg.setSource(31247U);
    msg.setSourceEntity(221U);
    msg.setDestination(13353U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.835073416186;
    msg.lon = 0.141343960256;
    msg.z = 0.043674353442;
    msg.z_units = 194U;
    msg.radius = 0.57961769821;
    msg.duration = 32696U;
    msg.speed = 0.973413540735;
    msg.speed_units = 27U;
    msg.popup_period = 40743U;
    msg.popup_duration = 49832U;
    msg.flags = 64U;
    msg.custom.assign("NFIXQIBHDMJRVVRTTBSFZGYSLWREBGC");

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
    msg.setTimeStamp(0.537204019693);
    msg.setSource(64290U);
    msg.setSourceEntity(227U);
    msg.setDestination(54265U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.928606355639;
    msg.lon = 0.543774889246;
    msg.z = 0.968928195585;
    msg.z_units = 235U;
    msg.radius = 0.169657551095;
    msg.duration = 26171U;
    msg.speed = 0.410416813733;
    msg.speed_units = 168U;
    msg.popup_period = 42765U;
    msg.popup_duration = 26586U;
    msg.flags = 124U;
    msg.custom.assign("SRROVGOFKWKGRBPVWPWAVVISRTWMISJPOOFDTHNBOKCPSQEFDLOZUAZWFBQOCSDQPKCKRNZ");

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
    msg.setTimeStamp(0.87799550297);
    msg.setSource(55889U);
    msg.setSourceEntity(126U);
    msg.setDestination(10317U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.350299442603;
    msg.lon = 0.476191511007;
    msg.z = 0.621601811356;
    msg.z_units = 25U;
    msg.radius = 0.724403084832;
    msg.duration = 13335U;
    msg.speed = 0.8632007823;
    msg.speed_units = 137U;
    msg.popup_period = 20328U;
    msg.popup_duration = 43426U;
    msg.flags = 194U;
    msg.custom.assign("IEXDGKUIJDYYKDTYZBLXXYGLMCQODKDCAJKKYYHIKZKMPVWWTBCCOHJSFOZQKUGHFRLVBJUVOYQSXHFCUWJWTRFVPGVALEEGNUGVXXSABMZLXDHMECNOOBKWBXRADPAJZBLVOFPHNWHPFTEILUTXNMCTEHCDMRSNQ");

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
    msg.setTimeStamp(0.745393022447);
    msg.setSource(30963U);
    msg.setSourceEntity(96U);
    msg.setDestination(26054U);
    msg.setDestinationEntity(251U);
    msg.timeout = 22905U;
    msg.lat = 0.0393936195647;
    msg.lon = 0.576531505362;
    msg.z = 0.743227665528;
    msg.z_units = 241U;
    msg.speed = 0.384567855306;
    msg.speed_units = 146U;
    msg.bearing = 0.781921385994;
    msg.width = 0.48795627228;
    msg.direction = 89U;
    msg.custom.assign("TRPQMWRNAWWPFYAVSOIBBNMSQIHRZDQAXEPVRHXOGFXNGJNGWQUBYCJCDCLMXZ");

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
    msg.setTimeStamp(0.086082147154);
    msg.setSource(6950U);
    msg.setSourceEntity(212U);
    msg.setDestination(65033U);
    msg.setDestinationEntity(74U);
    msg.timeout = 35203U;
    msg.lat = 0.807260374663;
    msg.lon = 0.748893144307;
    msg.z = 0.157016677233;
    msg.z_units = 137U;
    msg.speed = 0.708159910813;
    msg.speed_units = 26U;
    msg.bearing = 0.163242983762;
    msg.width = 0.39888563529;
    msg.direction = 133U;
    msg.custom.assign("MPAAVOATDQENGXSHLSJLYTSKDMLLKSOVFTUCMMGGRXSLPXSQSITEPWVDKYIYKAFACZNSAORXMQKHCUJGLQDFBJRUQFKUIFTQEGWBNBKRHRQLBHWEAFSVIUFRXGNLCQXEHZJZWEDHPCZIWYPCIIDURPWOJCGZNVTEFAVRDUOFECQHXKTLNHEOMQYOZPBYABCXZUJNWYZXJWZGZRBSVNNUYJWHMTYC");

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
    msg.setTimeStamp(0.478820918463);
    msg.setSource(19462U);
    msg.setSourceEntity(81U);
    msg.setDestination(41372U);
    msg.setDestinationEntity(193U);
    msg.timeout = 49289U;
    msg.lat = 0.0102011726358;
    msg.lon = 0.940990243971;
    msg.z = 0.67939184087;
    msg.z_units = 151U;
    msg.speed = 0.709474357297;
    msg.speed_units = 220U;
    msg.bearing = 0.573381551189;
    msg.width = 0.168888287886;
    msg.direction = 240U;
    msg.custom.assign("ECGHNKNRYUNXDQPNGBEBFQPRQJAZJUPOYMUYFRSENGCEJRCUEAMZIGKXAKADDGXNISKMYLWRTGZVATWUEOFBMMKOQTOITKHTCHBNLNORTZRDJLZGJIOKDJFKDLPFVTQKMRFFKXQVUGNWOEOLGCHRIWFSVOWXSWTXSXZCAQSIPNYVBVMCIBJUZBHXWPSDIWMZAOZSLHEUVGHYTJJUIQHUSPAMAEJVLYQFXT");

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
    msg.setTimeStamp(0.320190559908);
    msg.setSource(39120U);
    msg.setSourceEntity(187U);
    msg.setDestination(50316U);
    msg.setDestinationEntity(144U);
    msg.op_mode = 58U;
    msg.error_count = 152U;
    msg.error_ents.assign("RSGTSPQHEILXFGLGGCVFVOQMTZYNZAZNFOUXSURQVQMQREZEYXHRXCDADKHJOZXMEILTXYLGO");
    msg.maneuver_type = 26532U;
    msg.maneuver_stime = 0.415193121957;
    msg.maneuver_eta = 7840U;
    msg.control_loops = 2085849570U;
    msg.flags = 160U;
    msg.last_error.assign("WBDMONUNAGNVGQGIAQLYFKXRDCKCZUDXMPNTRSAHODPYVORHKUJZLJZILYCHBKMEUMOXSPUTYAPTHMJJDSWRHFPLEGXYKUOZHXWVLNWGMUCFVGSQIXJGJOHNFZCFUXNJNHECRJNYS");
    msg.last_error_time = 0.441704219867;

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
    msg.setTimeStamp(0.835207951274);
    msg.setSource(23290U);
    msg.setSourceEntity(205U);
    msg.setDestination(36898U);
    msg.setDestinationEntity(106U);
    msg.op_mode = 95U;
    msg.error_count = 251U;
    msg.error_ents.assign("VLTVLXZIJZCTRVGDGCRFWGIOOPKZAFMCZQSLLTDJEIUWNHGOVBXRSJWBSZUK");
    msg.maneuver_type = 62231U;
    msg.maneuver_stime = 0.520951713074;
    msg.maneuver_eta = 17969U;
    msg.control_loops = 3515431055U;
    msg.flags = 132U;
    msg.last_error.assign("TNRWWMMRXHQXLTNADGGFTHFZJRJOGPOZUPMQOHVPLNRGKQYRTOTDMAPOORVWNCTNKTTDIDIXNSGCRJEJZACEWLWSFYIJCCSBKPAVTXUKRUHSYQSZCEBGDUHVNMF");
    msg.last_error_time = 0.692651498248;

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
    msg.setTimeStamp(0.989608965376);
    msg.setSource(44464U);
    msg.setSourceEntity(129U);
    msg.setDestination(44910U);
    msg.setDestinationEntity(95U);
    msg.op_mode = 17U;
    msg.error_count = 98U;
    msg.error_ents.assign("VJLMBGKWHIAPPWQTMIUMPIUTZUELBHTPLVZPWRKBFMCCSARVVJKDNKGIYJENNANNJRQGQDOZZKFDXVLD");
    msg.maneuver_type = 53444U;
    msg.maneuver_stime = 0.465261236371;
    msg.maneuver_eta = 26112U;
    msg.control_loops = 620518000U;
    msg.flags = 173U;
    msg.last_error.assign("FGZSNZQWSIUMMCOAPLIBCITVNBTWGWLORQNSDYIYTHPAEZCVCQADHSCPMEOQKYTJFGCNHAJBQLPSJLOEKBBIEOHBXPBGNFTJFZDARHGITUZOKVMNLWD");
    msg.last_error_time = 0.708988066688;

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
    msg.setTimeStamp(0.681181412962);
    msg.setSource(32390U);
    msg.setSourceEntity(13U);
    msg.setDestination(930U);
    msg.setDestinationEntity(207U);
    msg.type = 76U;
    msg.request_id = 15688U;
    msg.command = 125U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 27806U;
    tmp_msg_0.lat = 0.652820805732;
    tmp_msg_0.lon = 0.481495555918;
    tmp_msg_0.z = 0.863784612155;
    tmp_msg_0.z_units = 165U;
    tmp_msg_0.speed = 0.716505009086;
    tmp_msg_0.speed_units = 79U;
    tmp_msg_0.custom.assign("GKEWOVRFAYBTYTWFBSUXQWIONCIZUQIPKGRBDYNDOXZXMCEGTUSPRTUUNDJJHXBHPMWCJUWBCGIHJPVEDAMWNLKGOHRNEVQUMEZATJFTDALLYWPLXXWONCFMCIVKTLVSZRAIRTYZVUQQHPFWHSQLHMPAZSKGVDYCIIBQEXLAXOXFRYRKXPPJKAYSCBHEIJGNYYLFBEWQFEKVSVBPAOVTB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24563U;
    msg.info.assign("NVJJTHHTNSGVYBPQMPSRPDLCDJFWYGTABIUGNJZOKZSCVQYEGIEZEVKEMLGVJVNGMHCJRYBQY");

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
    msg.setTimeStamp(0.603363108595);
    msg.setSource(26008U);
    msg.setSourceEntity(198U);
    msg.setDestination(14715U);
    msg.setDestinationEntity(138U);
    msg.type = 226U;
    msg.request_id = 21756U;
    msg.command = 121U;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("POJPJHEYCBBZJWKRVBIZZWMTKIVLPTTLWJGEZFDSOWOBGMUKEHWAXUSTAAQDIDYZRQSGLEVNBLEIKQNHBGCYHRZUEGFTLNUKWVCNRJOLPTXYSHCQIOOJDVPWEVSCFEWCKTPYXXZUNXAAMYVPLAVRANFQUYEFSMBUOHNSRIRXRVTDGRHNBLXHFOKP");
    tmp_msg_0.max_speed = 0.0172075023611;
    tmp_msg_0.speed_units = 240U;
    tmp_msg_0.lat = 0.0358873832463;
    tmp_msg_0.lon = 0.989440076762;
    tmp_msg_0.z = 0.520600538771;
    tmp_msg_0.z_units = 135U;
    tmp_msg_0.custom.assign("BWMQQSFFINPFNOTPTUSYPFKSFPAJALQOQXQVZEDJMGNRZZFVXNVGIBDUHFZTDJYVE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 25350U;
    msg.info.assign("NCCAMMYQKDASVKWZLQRDPWGTMPBKRNFBZRIGTOCDYWQHBM");

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
    msg.setTimeStamp(0.661770754637);
    msg.setSource(9579U);
    msg.setSourceEntity(142U);
    msg.setDestination(11932U);
    msg.setDestinationEntity(141U);
    msg.type = 121U;
    msg.request_id = 20334U;
    msg.command = 164U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredThrottle tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.653863486143;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 38054U;
    tmp_msg_0.custom.assign("DLCJLWIHXBKUJZOMZMKBJZUCATNHFYJTFEFKGFWCVGNMODULOGYPJWTRFGSVSMDLKROHOKUMHIZMNWSE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 3284U;
    msg.info.assign("KGLITMEPUQNPOYACFECHMKIYBFYSQWLBJGZECGDSOCLWNZEVOOMTLZOIRJMZNSGLHCDGPBSYLHTWNQQBSAYYCEGHHWCYMIFPRFANGATZDZTFZPITAUNXESHSNUORVVTWXFINMNCYAMJURAVJXEHILOQBPIDDRWQFKTJMHJLLRJIDJXMQRPBGXKJZYCKQHEXPTSVWVRZTKKXHDVUPUOXEVMCNIEG");

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
    msg.setTimeStamp(0.539682764417);
    msg.setSource(42880U);
    msg.setSourceEntity(208U);
    msg.setDestination(36093U);
    msg.setDestinationEntity(109U);
    msg.command = 200U;
    msg.entities.assign("RPKRRDZSSUPZEGEGXECGGDNXCHHCAGUDECFDYDGTLOMTHWSYAABXNZQLETIUZYTRUYGSXACSQTOLPKQILAWTC");

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
    msg.setTimeStamp(0.659440681996);
    msg.setSource(9074U);
    msg.setSourceEntity(68U);
    msg.setDestination(35787U);
    msg.setDestinationEntity(192U);
    msg.command = 166U;
    msg.entities.assign("DZZFFKNSCYOQTMVGHEHFXARGMOWIQDPHMTLIZUNL");

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
    msg.setTimeStamp(0.389892296933);
    msg.setSource(15432U);
    msg.setSourceEntity(109U);
    msg.setDestination(48144U);
    msg.setDestinationEntity(107U);
    msg.command = 220U;
    msg.entities.assign("GXXYQHSGRNUZBMDDBMWHAKXEGEQYMGJNFFANREJHTTRZVBGCSQGXQSKVRDHTVJCCWFKOCELLJEBXZKICOVLSMTWXPLQORRVAIKLXUYHDKZMWPIQUOGNIZDGPMPFXDMEYGYVILUYNNESAHBBLFOJWADPZMKFHCOMVDAEQITZOSWWRTFOELRFSSSFVOUJTWGJUIPYBCTUNAZBTIOB");

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
    msg.setTimeStamp(0.717719351111);
    msg.setSource(32027U);
    msg.setSourceEntity(106U);
    msg.setDestination(50184U);
    msg.setDestinationEntity(78U);
    msg.mcount = 212U;
    msg.mnames.assign("PFZDGKWYJOARIMDNRLQWIWBQXGDCGAFKSHIAWQAQLGLHUCYAOZCDFWNIPHEYSVERVUFIVYYMKPUPGFUKKTSHEQTJOBCNKZXTAJDEPB");
    msg.ecount = 241U;
    msg.enames.assign("PFGHQBDMVRKFJRSGDJVNHMQRSFIHAWDYEBTSPOXKYEZOGWQRQBLMJLTYFEZYSABKPVKMEYVXLYINZCCCKWTEUQASUPGPOTSUZTMIOVGDREKSIZEMLZLUNZJHOIPBOCKCQDPEJJFRTWQWGKNXLXQQO");
    msg.ccount = 244U;
    msg.cnames.assign("MFBGSPSMCCWIALQXQISSPTTBQKINFBERHPICKJYRVSHPLFEUNXMZKEOIKSKBALPWJKYXXWNHAESBNVYTVOGLAEFHODXHWCKGFDMKOXINIYWBUJIQZQEELOFBZRJCPD");
    msg.last_error.assign("AEFVPHJOAGVIEWLWDEIGYFECGVPGXRULIDKKBEWONBWCFMXROBTGOTFABZMGROCSTESZFMWYQUNPNXIGRJQPPRNORPSALAJUMLKSSORYWTZLUENZNQXUJDQFQTHXQSAXTPDPIYXVRSQMQKZQUSQAJYINKJKWHHDCVRLDXYMVVIZVOIXA");
    msg.last_error_time = 0.827649793082;

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
    msg.setTimeStamp(0.887402217609);
    msg.setSource(39351U);
    msg.setSourceEntity(175U);
    msg.setDestination(49825U);
    msg.setDestinationEntity(164U);
    msg.mcount = 152U;
    msg.mnames.assign("QAJOEWARAXZJMFQCKCZOOFAHHTLJSINXWJFRIWWLHQHZPHCPBKZGEAIPLQGIRMKNNISUUNJCNDTMCEVQYWXDGRDPLAVOWYKEUSWTGCJUXODVPJPFHVDYVVOQETWNLGZMXFIQSUKFSQCKVLPZZNUHYOJCLVYXZPAKOSDMSWSLGPFDEMUYBKOVPQNEIATHFTCERSTIMBKASVEJBYDHMHEJQRBGGIKGFBTXMBRXNRYLYRZ");
    msg.ecount = 176U;
    msg.enames.assign("TDZZBGMTLQASGTPMJYGBAVWHRCSOSEVCRTUWDVWDKCVBECEQMGKAAZVJHJDARZBPCIYSZXSKKRNFGZFHFUQYWIWXLJRJVPRTJHGTLHCUTQHZYFEOWWLPXSUEJYXMUFGKILRPDNQDLSQNLGBGUBIUOSDKBMKANFHNLUQAAYWNYQBXHPOPOX");
    msg.ccount = 16U;
    msg.cnames.assign("KHEVVWNZYJJQCWNXZWVSKPHLPILRDCFFLFPUTLIKKGVWPWFQLMTBHQCLRMNSWVYROXYKKGAETPUSBCROHYGCTEWTOISMESKXTJTJXXWZDVTHIPLVFJSQFHDKYMFINJWABYMOEVQNMSMNIABGGAJALWYKAXLAXDQQFGOBODYIZPZPFIEEBUOZTZBTEGKCXVBCMZODOPQGAJQYNEUNAGGHUCZ");
    msg.last_error.assign("LMMWFOLJYDYRBIHOJTXZFYFETHZPAEOIWHLONIGVPHFDRFTKQAPSUWASGMGUUXOQJALKSJWWCREDCVKNAXCAFFXVMGUQLYHFSQGRHFLDEUKQZMEVYTBBYEGKIHMPNBXULNXWMQSPRBGZZABESDRJONSYFHVXSRLSDBOZPDWRNTVAVCADIDKJTZCICXPJURNLJQQZBPWOXKNIWMMTDTQBJOGOJACKIYPPCEUMGTVBRIHG");
    msg.last_error_time = 0.931580796143;

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
    msg.setTimeStamp(0.813518839297);
    msg.setSource(60479U);
    msg.setSourceEntity(185U);
    msg.setDestination(22225U);
    msg.setDestinationEntity(100U);
    msg.mcount = 120U;
    msg.mnames.assign("SZYLNPIIUPISDMVYJLWTKVTOYRKYDNMAYFPRYREYOFEQXHRPNXBYMSCYLXBKLGSMABXNOGMCEAOKOOIHWDBECTFHVXQUZFPGCZUUJVIUZZETZEYGVWHTJRLFRXNATQQJFICOFBDISUH");
    msg.ecount = 237U;
    msg.enames.assign("MIAWRFFMHYWEVOGQDCHZAKMIOSSIMDHESIKUJUKNZYBTHCGGLXWWPFGABGUYORRLUFANRVDNPQSBXNWJYCBHJXARCRFBICLICKZHGBZFVMQKRCWKSODJDBPOTEATSUOWAUKDLENZEYSVNNYXSQNXZTJ");
    msg.ccount = 21U;
    msg.cnames.assign("YDNYZHXTWVTHBUHLSTQVFSOSLSIRJODGVDGBBLIKXIAOVDDQUBGHSZBDQVBMDVWEBFPBZCOLKEHIBKMNOFRGDPGJYAZFKIUGRNCCSLMWCJYXSYMXZDOTZCELEAWPLCKQGP");
    msg.last_error.assign("CBHISFRMHRGMUMHKNYFNJDQSBEDZYVWZSZLQVEHUPQKISWQQFXLSFTAYRNRKXMXNUOPRJXGJINBPHGDKUXMFPRHTBVMTVWAFJEXOQVKSVOTHTHKEFPJNEZGQVGTDDYRKLNUZMPASELLOLCOYDOGTBXJWBWJGUQVGXTOLPZZIYRASHZCMIARICHKITXBFBIMACEZXQBEOTKCKNPDW");
    msg.last_error_time = 0.382339612011;

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
    msg.setTimeStamp(0.756569026316);
    msg.setSource(1311U);
    msg.setSourceEntity(35U);
    msg.setDestination(8530U);
    msg.setDestinationEntity(138U);
    msg.mask = 151U;
    msg.max_depth = 0.498067242192;
    msg.min_altitude = 0.281118396918;
    msg.max_altitude = 0.902695829253;
    msg.min_speed = 0.482995974601;
    msg.max_speed = 0.296474315716;
    msg.max_vrate = 0.969544127618;
    msg.lat = 0.10377757163;
    msg.lon = 0.502985920917;
    msg.orientation = 0.701727939556;
    msg.width = 0.440894328004;
    msg.length = 0.7076615353;

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
    msg.setTimeStamp(0.902191485274);
    msg.setSource(47811U);
    msg.setSourceEntity(123U);
    msg.setDestination(4557U);
    msg.setDestinationEntity(122U);
    msg.mask = 37U;
    msg.max_depth = 0.558885070607;
    msg.min_altitude = 0.506361656141;
    msg.max_altitude = 0.0646942426811;
    msg.min_speed = 0.890044307076;
    msg.max_speed = 0.323366155249;
    msg.max_vrate = 0.789734823289;
    msg.lat = 0.532316329619;
    msg.lon = 0.833003359711;
    msg.orientation = 0.803245742214;
    msg.width = 0.670351020624;
    msg.length = 0.553917415468;

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
    msg.setTimeStamp(0.580502515818);
    msg.setSource(25656U);
    msg.setSourceEntity(240U);
    msg.setDestination(63182U);
    msg.setDestinationEntity(162U);
    msg.mask = 23U;
    msg.max_depth = 0.705762595243;
    msg.min_altitude = 0.874556692092;
    msg.max_altitude = 0.755693401499;
    msg.min_speed = 0.330954868618;
    msg.max_speed = 0.219983444458;
    msg.max_vrate = 0.617489004522;
    msg.lat = 0.672662914865;
    msg.lon = 0.416218973709;
    msg.orientation = 0.660846803411;
    msg.width = 0.254070707317;
    msg.length = 0.967474350547;

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
    msg.setTimeStamp(0.758624833925);
    msg.setSource(5543U);
    msg.setSourceEntity(59U);
    msg.setDestination(50383U);
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
    msg.setTimeStamp(0.353631853332);
    msg.setSource(46237U);
    msg.setSourceEntity(217U);
    msg.setDestination(10959U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.353927279251);
    msg.setSource(18217U);
    msg.setSourceEntity(114U);
    msg.setDestination(12338U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.328136999308);
    msg.setSource(64522U);
    msg.setSourceEntity(254U);
    msg.setDestination(42061U);
    msg.setDestinationEntity(197U);
    msg.duration = 49872U;

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
    msg.setTimeStamp(0.165412182402);
    msg.setSource(35763U);
    msg.setSourceEntity(1U);
    msg.setDestination(48229U);
    msg.setDestinationEntity(228U);
    msg.duration = 12095U;

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
    msg.setTimeStamp(0.799099252227);
    msg.setSource(57719U);
    msg.setSourceEntity(30U);
    msg.setDestination(2684U);
    msg.setDestinationEntity(199U);
    msg.duration = 50220U;

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
    msg.setTimeStamp(0.471835123466);
    msg.setSource(23754U);
    msg.setSourceEntity(58U);
    msg.setDestination(32931U);
    msg.setDestinationEntity(185U);
    msg.enable = 113U;
    msg.mask = 2952865U;
    msg.scope_ref = 2124888828U;

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
    msg.setTimeStamp(0.0857432519097);
    msg.setSource(7435U);
    msg.setSourceEntity(248U);
    msg.setDestination(11536U);
    msg.setDestinationEntity(141U);
    msg.enable = 149U;
    msg.mask = 1323826772U;
    msg.scope_ref = 3030832347U;

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
    msg.setTimeStamp(0.821127454485);
    msg.setSource(62176U);
    msg.setSourceEntity(138U);
    msg.setDestination(12451U);
    msg.setDestinationEntity(105U);
    msg.enable = 234U;
    msg.mask = 2065391330U;
    msg.scope_ref = 3433804984U;

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
    msg.setTimeStamp(0.798988423035);
    msg.setSource(391U);
    msg.setSourceEntity(5U);
    msg.setDestination(31606U);
    msg.setDestinationEntity(239U);
    msg.medium = 177U;

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
    msg.setTimeStamp(0.0894750250315);
    msg.setSource(37705U);
    msg.setSourceEntity(54U);
    msg.setDestination(32509U);
    msg.setDestinationEntity(148U);
    msg.medium = 57U;

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
    msg.setTimeStamp(0.605608762404);
    msg.setSource(4991U);
    msg.setSourceEntity(98U);
    msg.setDestination(7046U);
    msg.setDestinationEntity(201U);
    msg.medium = 222U;

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
    msg.setTimeStamp(0.0662982536537);
    msg.setSource(14988U);
    msg.setSourceEntity(111U);
    msg.setDestination(363U);
    msg.setDestinationEntity(46U);
    msg.value = 0.857840059784;
    msg.type = 254U;

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
    msg.setTimeStamp(0.695594770231);
    msg.setSource(61808U);
    msg.setSourceEntity(199U);
    msg.setDestination(27886U);
    msg.setDestinationEntity(107U);
    msg.value = 0.34501534634;
    msg.type = 187U;

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
    msg.setTimeStamp(0.883300204163);
    msg.setSource(14713U);
    msg.setSourceEntity(200U);
    msg.setDestination(8693U);
    msg.setDestinationEntity(150U);
    msg.value = 0.557212644307;
    msg.type = 43U;

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
    msg.setTimeStamp(0.228138097073);
    msg.setSource(62118U);
    msg.setSourceEntity(226U);
    msg.setDestination(41933U);
    msg.setDestinationEntity(205U);
    msg.possimerr = 0.766638459667;
    msg.converg = 0.646230265629;
    msg.turbulence = 0.2329649119;
    msg.possimmon = 56U;
    msg.commmon = 148U;
    msg.convergmon = 208U;

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
    msg.setTimeStamp(0.469820200021);
    msg.setSource(41958U);
    msg.setSourceEntity(22U);
    msg.setDestination(10346U);
    msg.setDestinationEntity(183U);
    msg.possimerr = 0.451182600433;
    msg.converg = 0.116774667743;
    msg.turbulence = 0.180315112896;
    msg.possimmon = 43U;
    msg.commmon = 228U;
    msg.convergmon = 124U;

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
    msg.setTimeStamp(0.454305576503);
    msg.setSource(20229U);
    msg.setSourceEntity(229U);
    msg.setDestination(44585U);
    msg.setDestinationEntity(137U);
    msg.possimerr = 0.429895764188;
    msg.converg = 0.490400275973;
    msg.turbulence = 0.0105532015351;
    msg.possimmon = 204U;
    msg.commmon = 24U;
    msg.convergmon = 247U;

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
    msg.setTimeStamp(0.38489016425);
    msg.setSource(51564U);
    msg.setSourceEntity(188U);
    msg.setDestination(25179U);
    msg.setDestinationEntity(95U);
    msg.autonomy = 121U;
    msg.mode.assign("DGGMRVAUQSVNWPHTEQNDWDQAWFOXQCIDPMYCAKPSVYZUBCLNWBDULHGKZLMEQPKTUEDXRWNJXQFNWUDMJVMHIJCXYOCTJVTKGXBOFHNNOPZHGJCIYBEWZLTFITJKMZCFREGOBKIRXPEWYISLBLGODUPCSTHVMZSNIXSYOYETNWQHRMUHNEIMZUCPILHWAADGSFBAEAFTA");

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
    msg.setTimeStamp(0.0155596193201);
    msg.setSource(5378U);
    msg.setSourceEntity(39U);
    msg.setDestination(44166U);
    msg.setDestinationEntity(180U);
    msg.autonomy = 17U;
    msg.mode.assign("CUKWLKZFJRGYMBMINTZBGEYQXVUACUPCUHOIMWXILSQMZVAIPHVMPREHBKPKCOLONIRYEFOCFSSDFAOHLTXBUPLWYTNLKSXPTFAFBISPADMSZHDQTXEVLBO");

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
    msg.setTimeStamp(0.647631058219);
    msg.setSource(38698U);
    msg.setSourceEntity(103U);
    msg.setDestination(12892U);
    msg.setDestinationEntity(88U);
    msg.autonomy = 127U;
    msg.mode.assign("YHLVJBFAXYKFATHCVNRAFENTJTFEQYIZEIJDKTDKVGODFPOZGRMBNJWTUBIPUZHGMRALXJAESCONKUUIXBUBOVXIJNIZDGYDXAQZJUCSIMSKRENEHDCDPTRWBDQZGIYISRFMAQACWMNBTSPFLEOK");

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
    msg.setTimeStamp(0.729633330279);
    msg.setSource(21873U);
    msg.setSourceEntity(145U);
    msg.setDestination(51839U);
    msg.setDestinationEntity(125U);
    msg.type = 4U;
    msg.op = 216U;
    msg.possimerr = 0.827157854922;
    msg.converg = 0.359650221006;
    msg.turbulence = 0.752276367793;
    msg.possimmon = 170U;
    msg.commmon = 219U;
    msg.convergmon = 248U;

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
    msg.setTimeStamp(0.656026906916);
    msg.setSource(30233U);
    msg.setSourceEntity(171U);
    msg.setDestination(41051U);
    msg.setDestinationEntity(54U);
    msg.type = 106U;
    msg.op = 214U;
    msg.possimerr = 0.705890506971;
    msg.converg = 0.940790953593;
    msg.turbulence = 0.915605148154;
    msg.possimmon = 32U;
    msg.commmon = 212U;
    msg.convergmon = 19U;

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
    msg.setTimeStamp(0.196184642267);
    msg.setSource(28115U);
    msg.setSourceEntity(134U);
    msg.setDestination(24931U);
    msg.setDestinationEntity(227U);
    msg.type = 117U;
    msg.op = 79U;
    msg.possimerr = 0.592886927015;
    msg.converg = 0.249898168087;
    msg.turbulence = 0.210161027329;
    msg.possimmon = 0U;
    msg.commmon = 74U;
    msg.convergmon = 23U;

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
    msg.setTimeStamp(0.33957450072);
    msg.setSource(13217U);
    msg.setSourceEntity(183U);
    msg.setDestination(42807U);
    msg.setDestinationEntity(226U);
    msg.op = 224U;
    msg.comm_interface = 131U;
    msg.period = 55494U;
    msg.sys_dst.assign("OBZULFIIEUYGPMSVOAOCPBRVETDNRJJYUIJJVHUHQIDQFPYZGVBYXDTMQCAWVLIRAWXGKQCYQLGIGSSFPHDUBEIKNODSBCETNPSIMOUJKQTWRUQXVFNYNDMGBAWDRWKOZKPRXFCWYIEXPFHHDMRODRZTCJOBLXYCAAGEAXJTGKLMXSHCTHCLQWEFLYAGJHLEMFZEMJRVVTZMPBLLBNID");

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
    msg.setTimeStamp(0.530415630907);
    msg.setSource(39774U);
    msg.setSourceEntity(118U);
    msg.setDestination(13287U);
    msg.setDestinationEntity(172U);
    msg.op = 123U;
    msg.comm_interface = 231U;
    msg.period = 43723U;
    msg.sys_dst.assign("QUCHMYWIURASLNOVRVTYTCHFWFSEXPUQOOCPKRSNMVMSLYWBJAVNYPCGUCBLTOBKZUNFTKHJQGOZIMDGRGIVRFUDDGEOLXNWJLMDMSMZRCF");

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
    msg.setTimeStamp(0.138260538406);
    msg.setSource(48582U);
    msg.setSourceEntity(17U);
    msg.setDestination(47625U);
    msg.setDestinationEntity(201U);
    msg.op = 113U;
    msg.comm_interface = 114U;
    msg.period = 8838U;
    msg.sys_dst.assign("LXUSQKBFSKPDAXUGQYSITITMOMNROTZCJICUGBEWLEEZYQJRMGHCRQXTYEFXALAWJHCFZJLUWFAOBRTCEROZIMXFOBZLBUHVHNDCRFLNJPTRXOGCDKUXHNBKKAPSLVDOZPSNP");

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
    msg.setTimeStamp(0.150233657029);
    msg.setSource(2295U);
    msg.setSourceEntity(239U);
    msg.setDestination(53192U);
    msg.setDestinationEntity(60U);
    msg.stime = 3680952196U;
    msg.latitude = 0.173898747389;
    msg.longitude = 0.347218276746;
    msg.altitude = 45228U;
    msg.depth = 54737U;
    msg.heading = 5262U;
    msg.speed = -23360;
    msg.fuel = -33;
    msg.exec_state = -34;
    msg.plan_checksum = 32546U;

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
    msg.setTimeStamp(0.56075390513);
    msg.setSource(26012U);
    msg.setSourceEntity(225U);
    msg.setDestination(29558U);
    msg.setDestinationEntity(11U);
    msg.stime = 3925201016U;
    msg.latitude = 0.950713955714;
    msg.longitude = 0.3478825029;
    msg.altitude = 9719U;
    msg.depth = 7757U;
    msg.heading = 19195U;
    msg.speed = 30443;
    msg.fuel = -9;
    msg.exec_state = 43;
    msg.plan_checksum = 26438U;

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
    msg.setTimeStamp(0.893074958216);
    msg.setSource(11757U);
    msg.setSourceEntity(48U);
    msg.setDestination(55711U);
    msg.setDestinationEntity(222U);
    msg.stime = 4143913900U;
    msg.latitude = 0.168443876281;
    msg.longitude = 0.992775629922;
    msg.altitude = 59017U;
    msg.depth = 39954U;
    msg.heading = 35889U;
    msg.speed = -22062;
    msg.fuel = -115;
    msg.exec_state = -103;
    msg.plan_checksum = 63092U;

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
    msg.setTimeStamp(0.304873892823);
    msg.setSource(42785U);
    msg.setSourceEntity(87U);
    msg.setDestination(46497U);
    msg.setDestinationEntity(204U);
    msg.req_id = 47230U;
    msg.comm_mean = 181U;
    msg.destination.assign("HIUCONKNOTTWPZQSHVJKDIFPSCJN");
    msg.deadline = 0.834055417625;
    msg.data_mode = 2U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.259863864022;
    tmp_msg_0.lon = 0.808815782078;
    tmp_msg_0.z = 0.175090600876;
    tmp_msg_0.z_units = 197U;
    tmp_msg_0.radius = 0.278896855859;
    tmp_msg_0.duration = 25315U;
    tmp_msg_0.speed = 0.0696822335113;
    tmp_msg_0.speed_units = 62U;
    tmp_msg_0.popup_period = 4889U;
    tmp_msg_0.popup_duration = 411U;
    tmp_msg_0.flags = 30U;
    tmp_msg_0.custom.assign("JQYWQBTFMZDROKULLCXNUVVGGIDGAVSXPUOFFXNFPUZUOHCFBQARYWEWMSVLY");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PODKUWADACPVKQFYANOBSCMHHAWSEIXROIQRTFOQYSZKLUOXUTGDPYGWDXQSMJVKJVQYBCDDTAXOHQCYSOWYACFUCRZWEIKZWJYTHGWGKPN");
    const char tmp_msg_1[] = {46, -103, -92, 76, 41, -46, -91, -94, -60, 61, -94, -69, -51, -89, -128, 39, -123, -101, 44, -70, -67, -82, -109, -84, 25, 21, 44, 93, -87, 13, -99, 53, -108, 16, 0, -77, 59, -30, 94, -20, -23, -28, -77, -83, 70, -62, -50, -23};
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
    msg.setTimeStamp(0.56687819942);
    msg.setSource(32152U);
    msg.setSourceEntity(134U);
    msg.setDestination(41235U);
    msg.setDestinationEntity(211U);
    msg.req_id = 44878U;
    msg.comm_mean = 162U;
    msg.destination.assign("AINWWPORTKMCIVKHQJEQEAPEAXKNAWTOSJVOSXHFGFUQFITCIUNBH");
    msg.deadline = 0.135548521865;
    msg.data_mode = 32U;
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("UVEEPZFPHFIOHHSPYWJZZENEDJDUNFDCMXDZJARMXQATCNOEYTZTVTQKQWHUKVRZPIVGLGBAKWCZDYYCXZYOAODYWBYGXKLWMNQQNRQMIGTMPMNUJXTAWRORMLRRBSGTCUXIGQCAKPBSVPHRFUDPFEBSZNMCLNJBGOLXNKIKLL");
    tmp_msg_0.type = 95U;
    tmp_msg_0.op = 7U;
    tmp_msg_0.group_name.assign("OLZECAJPFCRYPFIEKJKGAAL");
    tmp_msg_0.plan_id.assign("VUMAOXDUNJPNTPZXOCWKQRWRIMMEJZSLVCBWABSCWVPKGHTNLIWXBYHLXZDRKZNJDQBWIFSLHRBMCIOFCEEFWHSISPLJVDOGHDYTAOUVBAWVOUMKUONRLYAXTJZYMIPUUIAVMATPFTYHDFEXQIZPVMCGYQVDDR");
    tmp_msg_0.description.assign("GLFEUQAHECTHQEMVNHKXXXFCHYTVAOMIGHRNFCCPWQIVAWSAGOPUZFOIRGLVENEUKDSECKWWIIWWNGUDCATWEZZMEMDGRZXAMYNJDJPKCSVXNUZJXQIHPAYSTAFBDHYKNNTPUSBWBWIURFLFRRLXOOPNBTKPJYDLXQMVSUZIKBQRZKTKBSJBJBRRDUILCFXIYP");
    tmp_msg_0.reference_frame = 105U;
    tmp_msg_0.leader_bank_lim = 0.69931499034;
    tmp_msg_0.leader_speed_min = 0.0127057174547;
    tmp_msg_0.leader_speed_max = 0.14547669323;
    tmp_msg_0.leader_alt_min = 0.928221162704;
    tmp_msg_0.leader_alt_max = 0.528618217407;
    tmp_msg_0.pos_sim_err_lim = 0.886571417059;
    tmp_msg_0.pos_sim_err_wrn = 0.43341009278;
    tmp_msg_0.pos_sim_err_timeout = 45347U;
    tmp_msg_0.converg_max = 0.516680973697;
    tmp_msg_0.converg_timeout = 24569U;
    tmp_msg_0.comms_timeout = 44926U;
    tmp_msg_0.turb_lim = 0.559932000704;
    tmp_msg_0.custom.assign("LKYMITZCNGVOHTYRHCMNMPBSUYVGIQPQCKHAAEUGJTWTMIXHZIFMKFOAGOLYKPZLKTQZKZBSFBDBCFGGJIHNLXVEXDJDYWLEVXWULMBRQWSMRHAOSXKRRNFUJCTLYVIMUTLFFXLDEVWZRHXAWOBDWXSGCBFSQQSPDEONGPGAKOAQJMYIZSVPDEWTBOTNQSYSAJIURJ");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BZQHXDJYFTSMRGRFAGSLCQCNPZDKKWBUVIWOT");
    const char tmp_msg_1[] = {-26, -64, 96, 59, -1, -3, -88, 63, -4, 105, -39, 71, -92};
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
    msg.setTimeStamp(0.313908818975);
    msg.setSource(52226U);
    msg.setSourceEntity(74U);
    msg.setDestination(34597U);
    msg.setDestinationEntity(125U);
    msg.req_id = 52906U;
    msg.comm_mean = 215U;
    msg.destination.assign("PTUDSXIWPPKRZMWEQYCKCYDBCCBZHQRWBKPUHVPAEENAIDDTPLYSFEZULWPQCEXAEQUXZFZWXYCSXEAOTPVQMJUOFNNMKMMYTKIAXGUIYCHTLWPLASJDSILCDDTLGFHQOVXFNHJBGLDZEALBQFICFGGSBMMVVJGVRVBSNKOGVVJBWAZCZMYXYEQNGOOMUIKJNYQOHPOXKRXLFONJJQWSUAUFFSKURRWBNSIIEDO");
    msg.deadline = 0.533115350258;
    msg.data_mode = 105U;
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 186U;
    tmp_msg_0.op = 129U;
    tmp_msg_0.request_id = 37927U;
    tmp_msg_0.plan_id.assign("QYVMEXDBPELLRIIJPPVWOSSGYPWGSYDANTSBMAPHIIAWDYGVZNWQUEBOHZGRICSVOPGDYHQBNWTWJMZVQMGAIMICXLRHSAWEYEJLOURCTVJLQRTORPRTFXRNVJKKUDKQKQF");
    tmp_msg_0.flags = 49017U;
    IMC::VehicleOperationalLimits tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 211U;
    tmp_tmp_msg_0_0.speed_min = 0.0363912072334;
    tmp_tmp_msg_0_0.speed_max = 0.997733361221;
    tmp_tmp_msg_0_0.long_accel = 0.461648189566;
    tmp_tmp_msg_0_0.alt_max_msl = 0.329716801664;
    tmp_tmp_msg_0_0.dive_fraction_max = 0.454356910749;
    tmp_tmp_msg_0_0.climb_fraction_max = 0.11424294263;
    tmp_tmp_msg_0_0.bank_max = 0.408828062327;
    tmp_tmp_msg_0_0.p_max = 0.314599245517;
    tmp_tmp_msg_0_0.pitch_min = 0.342190583088;
    tmp_tmp_msg_0_0.pitch_max = 0.239023772104;
    tmp_tmp_msg_0_0.q_max = 0.798408917658;
    tmp_tmp_msg_0_0.g_min = 0.679834690031;
    tmp_tmp_msg_0_0.g_max = 0.888447159714;
    tmp_tmp_msg_0_0.g_lat_max = 0.171177016375;
    tmp_tmp_msg_0_0.rpm_min = 0.281293419469;
    tmp_tmp_msg_0_0.rpm_max = 0.733834376359;
    tmp_tmp_msg_0_0.rpm_rate_max = 0.765042943829;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("BIYCNHDGJEKKOPUSWIYQTLASGVEMZIWPZAJTMFVTEWZXASBEYMVUDFQNXAXBMVUVEGQKJLFDDFUDVJLBDIWVEQWVTLTSXBBZTNYNLFZWLWKZMUYPZAUYANSPORELCLJZIIRXRRBAOVUCCOGZHWGOIMFHTYGXLONERXWSSGOTOKRHMBDQNJPSIJPODCCHYZUPITNBRCGWHPV");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("AFQVBFWXXPUHGLKIPFAQUG");
    const char tmp_msg_1[] = {34, -90, 29, -7, -110, 116, 88, -1, -121, -106, 45, 73, 71, -20, 48, -28, -53, 32, -96, -55, -32, -28, 89, -111, -125, -68, -97, 9, -104, -32, 24, -10, -50, -67, 27, -67, 125, 104, -26, 117, 68, -117, 116, 61, 31, -32, 45, -6, -53, 100, -13, 41, -64, 36, 41};
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
    msg.setTimeStamp(0.313924223843);
    msg.setSource(10874U);
    msg.setSourceEntity(73U);
    msg.setDestination(25473U);
    msg.setDestinationEntity(138U);
    msg.req_id = 51320U;
    msg.status = 91U;
    msg.info.assign("RMMUOHSXTUTZBA");

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
    msg.setTimeStamp(0.490648301649);
    msg.setSource(13497U);
    msg.setSourceEntity(114U);
    msg.setDestination(56555U);
    msg.setDestinationEntity(221U);
    msg.req_id = 60013U;
    msg.status = 16U;
    msg.info.assign("XHRURPUCDQJMPLXNYGWYDVCZCEWXVOZRFXOSGGFIFJIAEGYKLSFGSTHGQDFZDEAPHBXQHXTSGAKQVLINQVDIGZTWOBVLBTMDHFABLFJZRSOGMKBRNKEBMBINHMQBOSPCNERERNFUMTUOFK");

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
    msg.setTimeStamp(0.819547282656);
    msg.setSource(50267U);
    msg.setSourceEntity(132U);
    msg.setDestination(13641U);
    msg.setDestinationEntity(151U);
    msg.req_id = 32075U;
    msg.status = 134U;
    msg.info.assign("KQZARISYDALIAGWZYZJMYHPSEGOVXJKWMBJMCITEUUFTCRLMIRCNOHOGOCFXYCXPIBUXTAEHQNSGNFWHEXWWSZXLYSJOLDPITWHUZUHUWXHRNSDGIBYCNPDAJZLDFPOWVTEJKMSUOHGTRYVDABPGFVSZZGTBPEOUCJKTMVVKQQKQBEYKPYURCOJFNQMPKZAFDDGJDEIPRHAUSBFQHDMFNAGXBAN");

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
    msg.setTimeStamp(0.499367057841);
    msg.setSource(6953U);
    msg.setSourceEntity(233U);
    msg.setDestination(12993U);
    msg.setDestinationEntity(149U);
    msg.req_id = 41792U;
    msg.destination.assign("QHYTTPBMHAKZSOORPODOBFBLJDYAOTBJNYEGMNACYYMYIWMSCQCEFVUHHAMJWRXJLBRKQVCXWDFREWONNTRCOICQDZRLMEKXHDGWKIWQYNGQUYBWHNKLGUFFBFU");
    msg.timeout = 0.582617059019;
    msg.sms_text.assign("PXOCTIMLYJNGYVDBSRMEQGLJQBQCOMWSNBDSINEOTIJWEXIDQWRCJVAQLGOBZCRACGETBJUPWXRFFJOZDOFEYHRHMPZUXLNFXCNET");

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
    msg.setTimeStamp(0.653927355479);
    msg.setSource(62392U);
    msg.setSourceEntity(166U);
    msg.setDestination(14922U);
    msg.setDestinationEntity(149U);
    msg.req_id = 9533U;
    msg.destination.assign("OCJZWWOMUOZOAHEYQGIQBQLTDHAVRMJRNWOGOLMBDKWQFHCDBODIYCWZCTGTOGJZUXINEEMYUVQHFLNYMRKMBHKPJZFINERBEQCXZSHYVASDLIRK");
    msg.timeout = 0.852081382733;
    msg.sms_text.assign("IBYMFZOKNWRAVCMXGQFKYKALZUTXLATQYUBPPEEBQVBLEEFIFQLYIZWCWZTLGJCAHTSBLVZIMUVZQQOPNZLROHWNSSNKYYDKNSUJYZSDXFRFGYDFNUMWSHZAXACIWHWDHLXSRUDPVIMXGGBLFVPOJARURCAKGKNECURKKBODPISXTUHASBPRTDMHOEQTIJPPDHMBGOTDHXIHEFNWUGCXEGWQCZRJGYQOCMAOMCPRSYXETJNVKNJIVBVJQLWVE");

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
    msg.setTimeStamp(0.717001792696);
    msg.setSource(20486U);
    msg.setSourceEntity(232U);
    msg.setDestination(58918U);
    msg.setDestinationEntity(36U);
    msg.req_id = 42387U;
    msg.destination.assign("FHRIBMZMRTBOTYPHTGWTGXTDBOABUOCJJYQPDEJKJIHPQTDNNRBSEQCZTWSFJMBXNQKYAXFDTSGNVQZGEKJWAXPZYKAFMCFJEWTMFQAENLESOIQUYKHQSSIUUAZTCKRUISPPHOVILCKKHMNGVQLDYWDVOGRVSLLOOVQXYFLZXBCNSEMGFZXFUEFPLIPVKENWDDCRRDGEXKHMNJBOSIVAAULGACHIZAHDYBPMZXUZROJCR");
    msg.timeout = 0.860701305844;
    msg.sms_text.assign("GFZPJJXADDMKODCQWQIACOHBXLTKHMWCLXMKEDYPESMBUTPQGHZZYLFSGGKSGPINHBUPTANUFQOGCQVTVZDFMSJ");

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
    msg.setTimeStamp(0.246381270199);
    msg.setSource(5715U);
    msg.setSourceEntity(196U);
    msg.setDestination(1706U);
    msg.setDestinationEntity(97U);
    msg.req_id = 51433U;
    msg.status = 190U;
    msg.info.assign("FIPUPGWMOJKQFDZWMCBAJIFMOEOHYCIIBAJPLLTBKTCFYBSXLNEJCLXKIDHSAAUSDBSQUBHXCSWHHSWFQPKCODQRLXFJGMHXOZABRMZDQTWMSOQARDZEPUJJQAUBCIZYEEWAGXWRESVUTWPKDZXELGZTLNLLYNWISVGXXVUTHBJHNHMNVPMQFEGYXNRGFTEU");

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
    msg.setTimeStamp(0.468572984698);
    msg.setSource(18730U);
    msg.setSourceEntity(58U);
    msg.setDestination(1626U);
    msg.setDestinationEntity(171U);
    msg.req_id = 45225U;
    msg.status = 44U;
    msg.info.assign("EPUGQHRMDVGTEPIBNQGYHYPKVKWZPLJMOJZIUBCLCTYCFGUDCJPQXHOAAZMIUVZIBNXFGXFGOKSZMRYKXJUDDDRQZHLFKSDWCBUPHILJTVDMFJBMOWSTFWPAEIGSVFUQROTETJATDEDFMYONTGHXGRUIZNWYXLXBICZJLXMECQPSAVKCTRINFSRSYJCOLBHRYAAZMHIWREUBXTNPNVAYWKEKNNQHFOBWQMBCLQZWELS");

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
    msg.setTimeStamp(0.333042262211);
    msg.setSource(44191U);
    msg.setSourceEntity(190U);
    msg.setDestination(26132U);
    msg.setDestinationEntity(247U);
    msg.req_id = 54096U;
    msg.status = 215U;
    msg.info.assign("KHYRJIBPKTPOCOZRJZPIJMPMGFTPBGAJGOQKECPNAXLGNKWUUJYZVDFRQAUISDXOHLKNBPRSSEEVEAXHBPIFZAVFMSYKWIYRSVIUTZXOUJBZILWUHNWGHVGERDDQQNWJUCYQQFNJCQJXUGQLLHELRAZXTDBCJMTYZQOYTYBE");

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
    msg.setTimeStamp(0.475029538896);
    msg.setSource(63420U);
    msg.setSourceEntity(118U);
    msg.setDestination(10439U);
    msg.setDestinationEntity(172U);
    msg.state = 84U;

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
    msg.setTimeStamp(0.0208804960342);
    msg.setSource(25275U);
    msg.setSourceEntity(250U);
    msg.setDestination(45850U);
    msg.setDestinationEntity(132U);
    msg.state = 141U;

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
    msg.setTimeStamp(0.592250658272);
    msg.setSource(40038U);
    msg.setSourceEntity(41U);
    msg.setDestination(44240U);
    msg.setDestinationEntity(205U);
    msg.state = 19U;

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
    msg.setTimeStamp(0.595636321447);
    msg.setSource(25551U);
    msg.setSourceEntity(63U);
    msg.setDestination(52432U);
    msg.setDestinationEntity(61U);
    msg.state = 94U;

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
    msg.setTimeStamp(0.253447947686);
    msg.setSource(50092U);
    msg.setSourceEntity(119U);
    msg.setDestination(7036U);
    msg.setDestinationEntity(88U);
    msg.state = 205U;

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
    msg.setTimeStamp(0.381019732739);
    msg.setSource(53939U);
    msg.setSourceEntity(166U);
    msg.setDestination(62934U);
    msg.setDestinationEntity(228U);
    msg.state = 138U;

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
    msg.setTimeStamp(0.373539236014);
    msg.setSource(49213U);
    msg.setSourceEntity(2U);
    msg.setDestination(36035U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.656800973647);
    msg.setSource(17358U);
    msg.setSourceEntity(3U);
    msg.setDestination(42890U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.146794985121);
    msg.setSource(18551U);
    msg.setSourceEntity(12U);
    msg.setDestination(42902U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.227199530877);
    msg.setSource(22373U);
    msg.setSourceEntity(95U);
    msg.setDestination(8109U);
    msg.setDestinationEntity(252U);
    msg.plan_id.assign("AGENKZKFEYLXXVPSYRYTNHNHHQQCZBVJVBXGASWWTMMIQGDKZXCHOAOWRHQRYFWJWUSCSTSDNVULLPPIPCBDTJVWPFSTPCKJXRDXGJNIKUQVAMHNWTTFHDYRVBCSFRIMCPVQMNKZCUOLELOFFXKKZLTJAGEPHMGIZDEQGEOSADRAOLFIDYEY");
    msg.description.assign("XPCLHTWEVNLBCOBSNXRDPETJRNUISNQJXCYSYWEUCNLIZBRKVSKVEMLCGNV");
    msg.vnamespace.assign("BXRHFZSZMYJWAR");
    msg.start_man_id.assign("YJQWYTABTABZPUGEXKOBIXQFUTHVLAMHNNMCJKCTXJVMTJBEOQFWVTRKORYSIYEPSSEQ");
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("OMIADFBDOJZNQTKVCWDZDEYKQFYCHPBEXIGUDSXEJUMNIVQCFBGIESGXZVERZHBMHLYICXQGTQYOAPVIHVKZICJSNPDBKVTXPUJLCQTXRPWGABTLMQYSPTRFUOOARALZWUUBYESCVWXNLQUDLZBCSBYWEPM");
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.923490383156);
    msg.setSource(51377U);
    msg.setSourceEntity(133U);
    msg.setDestination(63646U);
    msg.setDestinationEntity(152U);
    msg.plan_id.assign("MDYLXKORFTWDWXOYKIWEDEIVCAPSBBCGQHNZHWGUGAJNOYQHKJSBVJDRYJQCQTCBZLGUPZYRRDIGMZMZBSDJLFBRLEBNDAGTEQZPMIUIUYHFQCJUAWSNSIUULKIS");
    msg.description.assign("DXNQBAGMGKTKBCHMKWHWATCUJAVJDZPBQNAZFYDXXCLSFANZMLQVCMOVNEHFPOIJOGFQLBPSKXGTVBHAEUSKVPCVAQTLTDDNOBDPAVIMZIHGUHOPLWDRJWTQSRZKLIFGLNSXXMWOEERPFZZYICWIXJKQSOURDLQSGOIFFAFIZUZXKDBVJZBEYCNXNBUPLYHEVWJJYHTSNVGEIS");
    msg.vnamespace.assign("CHTDQPWOLEIJADZHLWTURBMGRAZBPSFRAUEINASTYOCHASYOSJYTIIXRUCUMZDGEZGLDJDZQPPOYHJLEUBNTBGFMZAEMMDFWZIVIKAUSVCNDFEHYJOCCLXNVXMXYYQCNJYOVWBOODWNFERGQGFLLKWEBXSXUCTUMKXICDPWDQSQVHKLKUSVYBQJWZVNBAEFALERUCRWRHKIMYHMPSAHGS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KKBJXUJPDAZHXFKJCLYYTDUFRFQSSHENIXIWDGXKACSGUNPGTCCJPARLMABFRPIYJLJVNDJDQCDYSBWTCNSGLHIACZGEVHMZPFXOVZQQNSWHZAXRNZAOZLNFUHLYAQEDMUGORMEVGBPWOSGIIRTYLTOPVYRLKEOEXDDQAFYSKXZUIHOUFWPKBIDMQGMYPEKTWWNWWPSJHVMQFLRRRTBUQKBONMVBSVMQJUIKAOCWHIBFOHZENYCE");
    tmp_msg_0.value.assign("MSPYZXLFFGHDLSFGLRTREOZXBYJVMEHKOUYSQXCDIFEISUUPSXWDFGVYJIOIVQCKDHQGWXQWUKFGSZNIGVMUBPQSBBYMOEIPXJNHCDLOTANRRUJFORJVSRLOKQZAGTOBQGMEYJTXCTAXZHNLAPMDWEUHWWWQSMSADECDUZNZKCVTBEAPRRDGATLPMYNBKKCBVJRTOMZZUFPARNHTOYNBKBIHNCZWCVIPKIVV");
    tmp_msg_0.type = 221U;
    tmp_msg_0.access = 77U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MSSJTEZTRJYJGPMTCJOGDLVOUCCHVNFALTVQWPYJQOYBOPKUDISQATSMBQZQUXRNDOSYKFMHJGCLGAEVFKNLRHOQITCBWRHLLKNPVGHIDGMVLNMIJKUCFEFZPZFXTXEERSWG");

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
    msg.setTimeStamp(0.616359119058);
    msg.setSource(60171U);
    msg.setSourceEntity(15U);
    msg.setDestination(10324U);
    msg.setDestinationEntity(49U);
    msg.plan_id.assign("ASFCAUZBWVBVNJSNJXCOMVWAJWWJBPPTTOHNZ");
    msg.description.assign("XLGRDMNQEXKGZYLIKDZAGBKXCIBSQNYJVJJCQIKUYZRRWTPBMTWLTAEHDXGDQSQQFCRIFJMASPHLMBOUJHPYREDSAUNWHBGYNABUNZSTMNXACKHIWOOKIILOPAQSFFY");
    msg.vnamespace.assign("JHWQZMILEOZPFSWWETDKAAUXBUTPSRFCVEQBUYAUCXHZDOOLSJRHRGKNPNZLRWQGMNPWRGKPEWOYMKLJQLZNZFYVXOACHGJGVZIBUDGXNY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TQVARKRIBCDKSSXORWUJSELAILIRLQGHYBWUHCMKDMJWMBTIIDLAHXHNNXXSEJYLSOWYMSKSNYAUQFWOPPSNTOHGBHCVVBULEFFZTBXZZJPPTZNGOMCFQKLVTGKJRKHDIERRZFDDOITMQIDFXYGGVJTEUVHJOPVNHLRNEWPXEXQAXAMVFHAQTNGZQULIARYYJGZIBBAEZYE");
    tmp_msg_0.value.assign("CLMNAZLXZQWUQTPVAAGCQOHGADYIZUFURSLUCYJYLRYLSUDFLBMWIJBUIRNOKMEEAZEWWAZHKOTBQORPKOVLYCYUCBWPHRPJUADDDVXKIMFTQCFHVSFIWQKSRTSCPBJTRQTMJXNBHTDKDMPAJTVXFSVPQSGOPEVINBFHNFJDYHHOMZHGKJQXVNWIYNAREJZNQTEWVY");
    tmp_msg_0.type = 55U;
    tmp_msg_0.access = 85U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZWLKWQLSNYEQJEWOFBNDSMYVVAI");
    IMC::QueryPowerChannelState tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TrexCommand tmp_msg_2;
    tmp_msg_2.command = 36U;
    tmp_msg_2.goal_id.assign("XEMNYFKXUQPSRASDPVNIYNDGWUYEZBODJSKATOXOHMOWFHVMJMDXJPDAOBWVPIKRRGIHBJEYDHKEEWFPBPLKLLTHYQAIQIQASCBFLZOWYYBQUDZSRIARPITBGFVNGQLOGODSKTCJHTSEGCQMXTBVHQXVUZLUKNOPZAPLLESBKCYFHIURQMSJHZXZKLXUDZGXAUFRLWFJNVWZGIZCFJUCCOTMUVWCRGJR");
    tmp_msg_2.goal_xml.assign("EQLYPCQOJLSEQARVWDEZGMMIMKYQIAKASIDEJCPZHQTNTHBXHTUNMSDJSRQXVXTNETTQYDGJHYDZONWMGKWRRONAWFPBIJOWAPKAXJWUYLKVFCBHXGCZGIEFZYUQKDIBBZXDRYJWSZXNUNPKAYOAALOHJSXCSVEGCJRCGFOUGHZCFELPIVGHITRJDFFUXBPKIGKLWDKEMHTZQALWPVBPEBVSLSOUNSVFMWTUPLNBVXFLVOMZF");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.822807249941);
    msg.setSource(41607U);
    msg.setSourceEntity(213U);
    msg.setDestination(31488U);
    msg.setDestinationEntity(166U);
    msg.maneuver_id.assign("KARLJDLTAAVRUZVEAWICPWJBUMBYIRHKPVYIYWOBTWUIOXQVMGZHQCSJNPHZKBZDSXCUTJFHMLDVFJTTWQRMRCGZAEYXDGWBOVOEHMNOGEFDQQKGJEKAPGREULXDEEAWBAONSVHJFNTGCKVNXBXSPSWXCOFUAUOJTZLQJIQTCLHSBYERFYHAZLKQUMHMWNLIH");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.417090594506;
    tmp_msg_0.lon = 0.0407867529669;
    tmp_msg_0.z = 0.1818208214;
    tmp_msg_0.z_units = 55U;
    tmp_msg_0.radius = 0.746015202687;
    tmp_msg_0.duration = 45272U;
    tmp_msg_0.speed = 0.0258603673425;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.popup_period = 56043U;
    tmp_msg_0.popup_duration = 44110U;
    tmp_msg_0.flags = 245U;
    tmp_msg_0.custom.assign("ABHGRAKHFWGJMQLPBLKMTYCVBVIITLTGLSNBQZXORFLCHJBWWPRVVZAOEKZQPRCZUATPNEMEGMFUKMSIGBFITUDNWVEYJAUCMJKIJLKNZCKTDXWQSHOVYJFGXZSZBBOYQSAJAIYFSRWOHZRYHWEOXOGCPWYKZABPUXZWMTUMVMKNDTYISDQPCDEJQHNEQVIORVRYXXGTCGPDINFLBSC");
    msg.data.set(tmp_msg_0);
    IMC::DesiredControl tmp_msg_1;
    tmp_msg_1.x = 0.150402897332;
    tmp_msg_1.y = 0.244357055384;
    tmp_msg_1.z = 0.286493264621;
    tmp_msg_1.k = 0.111143861004;
    tmp_msg_1.m = 0.0647475617394;
    tmp_msg_1.n = 0.346913151111;
    tmp_msg_1.flags = 158U;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.546215089724);
    msg.setSource(502U);
    msg.setSourceEntity(180U);
    msg.setDestination(718U);
    msg.setDestinationEntity(23U);
    msg.maneuver_id.assign("XXRCBLYVJYDLRKPFHPCRMJKCSQOTZBXNJIIOWNBZNSJDZKLJDOTFADWWNKDZGKKMVZBBBXYVHEYNWMVARMYRZKYFBESHACOTGWAGNNPMSGIQJBEMDLJLIEEYIDCPIYTPMFOSZOCPHTUI");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 26762U;
    tmp_msg_0.lat = 0.111072912849;
    tmp_msg_0.lon = 0.646566079493;
    tmp_msg_0.z = 0.749743416016;
    tmp_msg_0.z_units = 235U;
    tmp_msg_0.speed = 0.852154495443;
    tmp_msg_0.speed_units = 108U;
    tmp_msg_0.duration = 37480U;
    tmp_msg_0.radius = 0.269404406427;
    tmp_msg_0.flags = 36U;
    tmp_msg_0.custom.assign("IBHVUCOLBLPKSKVQVTMCBYAWXFKOKQVKGPPCJUYYQSHCUHMGXRVEGNREHSWDQTVXZPMAIPYRZHNGCJFRDGSWVLJKMDVZCQKYJRE");
    msg.data.set(tmp_msg_0);
    IMC::DesiredRoll tmp_msg_1;
    tmp_msg_1.value = 0.995173514293;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.43561527252);
    msg.setSource(61554U);
    msg.setSourceEntity(40U);
    msg.setDestination(52044U);
    msg.setDestinationEntity(101U);
    msg.maneuver_id.assign("YCRNLATWUBVHLHZACJZZQHKSZPMLDTEDIFSTXJJPVDXROAEYPRHBMECEHQWGTZIGNFPONRCQCJRBCYJMMRSPVQXFCDIRHCKYVVTLWXDWFBQUMPCYJBYZDUZVMSWBGGJGQLPUAOZG");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 46234U;
    tmp_msg_0.lat = 0.564892993434;
    tmp_msg_0.lon = 0.355680150621;
    tmp_msg_0.z = 0.434169086545;
    tmp_msg_0.z_units = 232U;
    tmp_msg_0.speed = 0.27516401807;
    tmp_msg_0.speed_units = 106U;
    tmp_msg_0.bearing = 0.776204695643;
    tmp_msg_0.width = 0.225811168726;
    tmp_msg_0.direction = 59U;
    tmp_msg_0.custom.assign("NJRGOYYKVSNILJTCXRXYQDVXVEDFTNUZMSODSQHVOOQPCGAIGRAXUNLOKCEEIVJGFHUTSEJJPWRWICWLQYZRZPTZYOVLNAITXTESQJWBUYBHFKDDYRIDRQMGKABTNIZGNGRAWQPZCCMBJSMBDBXACMFPLEKOBFHTQXGNKXYPPLUFMWSICWLPMPRVXFUDTK");
    msg.data.set(tmp_msg_0);
    IMC::Tachograph tmp_msg_1;
    tmp_msg_1.timestamp_last_service = 0.511086422093;
    tmp_msg_1.time_next_service = 0.767357339132;
    tmp_msg_1.time_motor_next_service = 0.0999178245368;
    tmp_msg_1.time_idle_ground = 0.473506852938;
    tmp_msg_1.time_idle_air = 0.349839341733;
    tmp_msg_1.time_idle_water = 0.303628520719;
    tmp_msg_1.time_idle_underwater = 0.617199140296;
    tmp_msg_1.time_idle_unknown = 0.974362841818;
    tmp_msg_1.time_motor_ground = 0.198221939406;
    tmp_msg_1.time_motor_air = 0.699767754375;
    tmp_msg_1.time_motor_water = 0.257303667797;
    tmp_msg_1.time_motor_underwater = 0.0175253624523;
    tmp_msg_1.time_motor_unknown = 0.936848481116;
    tmp_msg_1.rpm_min = 11182;
    tmp_msg_1.rpm_max = 8415;
    tmp_msg_1.depth_max = 0.908768869464;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SmsStatus tmp_msg_2;
    tmp_msg_2.req_id = 64081U;
    tmp_msg_2.status = 132U;
    tmp_msg_2.info.assign("TOBKAJLRVVZBKKTHBRJNCOJEUYBZJFLXGFJLNDQTKJCQXDHZCVMPNIJAQCMSPTYSHIHNEAEKXPJFDGSCWUVCRTRXRYSOVZHRVHJRLPONYOSQVVGSGINLQGHROIWH");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.771282460152);
    msg.setSource(21093U);
    msg.setSourceEntity(92U);
    msg.setDestination(23814U);
    msg.setDestinationEntity(136U);
    msg.source_man.assign("BHIDABMZTVAEUYWQZMDVRVJWUGGFTJVFNAVIVZIOYOVATWCFLOUPRPQPOEVZNOZQJLGECYIGNIJGMKXNMMHWLIBXWKWHPSZEXFYKXDXLTVQAWXISBFSZSKTCOLKKUAAXAWJNDYSQFBHHSIZMEELJQAZTJMPNINEIMKCGGMREF");
    msg.dest_man.assign("RKVODKHJWPOIXEABVEHYUEHSRJICZGKBSOSYYZTOMHFVQBAJALKUZJHWVJKFDUGSFOWAKVRNNNCMFLEMREAXPSSFMMDZJGXTWBWUPNMSPIQ");
    msg.conditions.assign("KXBYUFKDDAAGLJSTIOEUZQNFCZBWJVKRYSYPFUBBTAKPZPPCJOTIHKMRPUSYPKROJZGWTULBCMPDXFBMNAQSTIDSFNOHXTCQAWWXQCJCEVUNDWDEHNRVOAWWSOXLVEIFGLKTREWSZUYYHYWJFACGRRKHIAAPVFQXIJYEPUVDVDGXCGRJWQNHQKBXZSQHGHIVZOELHPKZLOEJSOTOMBIMNQYIQMFXNLGMTYUDACMLEMCVNGTLXMFNBS");

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
    msg.setTimeStamp(0.54010304954);
    msg.setSource(22040U);
    msg.setSourceEntity(48U);
    msg.setDestination(54122U);
    msg.setDestinationEntity(4U);
    msg.source_man.assign("WEZQSAUUPQCLZVTYNLARPOXIUHSMLCBJTGFDMQCWLODLZEXWMITIVIZHMCVKXPYYHDZSJKYSAIGVFBRNTBZUWFO");
    msg.dest_man.assign("JSHSVYQLVNSBRORAVTOLRTEDNREZUGLDHZUEICZYHEJBIHEOCVPQOZDAZMPTHAMOKJXKZEFTJFRLJBNYAYWLDTPFQGJWKWCGCQDMJLBBURVPUODEYLQHMISMYYWOGFRSKTUYRYWINRDKMZKSFICZMTSWFCZEHBX");
    msg.conditions.assign("LUVFJRESVNBQAYXNIBXOULNMNOCBFGKJORELVZBWRJJYJCCSDQBWVTRM");

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
    msg.setTimeStamp(0.57350542543);
    msg.setSource(44482U);
    msg.setSourceEntity(91U);
    msg.setDestination(15303U);
    msg.setDestinationEntity(181U);
    msg.source_man.assign("MGSVAXVWFPQJXJNALVGAEXTUVLYSYLRKYYSZHDYLIOGKBZIOYAHGMYNEZCINSCUCBSAUIQBGHVPOWYGMNBQKLQFPGRDCBJGXHVZCOXDBFGJHSBTVFIVWIGKZARUFZZKNFRSJAPEDPUBKLTPIUDNHIINLRMBWCNV");
    msg.dest_man.assign("BGMVVTLSUHDEFLLVILQEWKMCMMAGOQAGYNFYVKKNDZZZPWXMYERDGJKJICSRPNBIZRHZEUFISYPQHKOJQJLNYTHEOZDPDZYCHEFSBYMWWFWCIDLBGIKXOMTDWOCVBKNAAJCJHKOGSPOVKXPMSHAHAWQRGPSAULJDLXVFECHFNSJXSGOMURTUVVUEBIRWPUEJ");
    msg.conditions.assign("CLZPHTABUIRZVLLTZCFXIMDPIPQJZHUKULLFNXABKDBSQMAENKNFOWOFRRKRFFBNOUNZYXYZPCMBRVTCKJGOGMYWIVEAAUWDMWCTNQXBCBLGMVOAPXWSXAYCRRZJCVHGQLKEKDANIYLWMNPOHOGVXQHUCRQQZSGV");
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 117U;
    tmp_msg_0.numsamples = 39U;
    tmp_msg_0.lat = 0.752939721874;
    tmp_msg_0.lon = 0.0407571625517;
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
    msg.setTimeStamp(0.707259455138);
    msg.setSource(23963U);
    msg.setSourceEntity(25U);
    msg.setDestination(64570U);
    msg.setDestinationEntity(129U);
    msg.command = 39U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CTCFUPOTQTGVJTRPWQEUJDINAPDHZMECXWADUQSZPGAXJIBTRKISXSOKRLLMNSDWEGUOYZDEYYRNVUONOAQZEQRPMVIRZBUQMTDIGPQEBGFTPUCTPHKBHTIFVJOVXMAZYQAWWAFJMDVNRBNESXLKRUHRYGQMGLXJ");
    tmp_msg_0.description.assign("DTNZULAIJUFKYAWEKEGUHBNHSK");
    tmp_msg_0.vnamespace.assign("QWCWMMAAUEHZRCHYIBTCTRKHZCKJURYZWEQHSYWISGCAVBYGUXBCXNIXIITTVQYYEPGSYBPBCNPGOQNZMA");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZISUTNABECJYDUQJDYKDPVQHZZVSEJZ");
    tmp_tmp_msg_0_0.value.assign("HTGLUNKCRCMIMQQNEJHFHQUAFPZYLZTEBLLCLZMHPVGBWYJQYYYQPDKTOJJCXZAXEJXGXGNORSAFGKBJKXQOUCLWCNWKUBAJSMRBYXRBMPZYZSVTEHVDSUSDYKYRAXXTVODUKFAIHXPJOPVRLITULQOWQFPNMWDADCAUIUMSIWOIDNGMZBZRDEQBFEIPZ");
    tmp_tmp_msg_0_0.type = 104U;
    tmp_tmp_msg_0_0.access = 30U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PIXFJZSQJFBBEPDJKNSRIWBCZEHWYEHUQVWFGDCXRESOKPWYBRHVIRYWGUQMDHICYJQVIUXFAXZOSMMXLLHKCGIECXGZJUIBSXMAFNBLQBEPEXKLXUWAMTZMTKDHRQVIKRGONYZDEBUIPSVFMADOZAQPBDCUDOAPHQHTOSTKWTLGCDZTUVWYZLJSFLHYCRBIAVJNODWTKNVGLRPVFFYURLMNSWLPTFTASQKEQGTJGVGNYMJCJOPOUANYR");
    IMC::AcousticSystems tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.list.assign("UPMFCHHYIFQLUNEXNJMBXHVYGUZFIMFIQDLSDGRDNKVZJECSV");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::GpsNavData tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.itow = 1298533102U;
    tmp_tmp_msg_0_2.lat = 0.91821422462;
    tmp_tmp_msg_0_2.lon = 0.57368541736;
    tmp_tmp_msg_0_2.height_ell = 0.617043159483;
    tmp_tmp_msg_0_2.height_sea = 0.865538207152;
    tmp_tmp_msg_0_2.hacc = 0.211569535388;
    tmp_tmp_msg_0_2.vacc = 0.0801298104931;
    tmp_tmp_msg_0_2.vel_n = 0.316539052546;
    tmp_tmp_msg_0_2.vel_e = 0.403767150556;
    tmp_tmp_msg_0_2.vel_d = 0.557065463731;
    tmp_tmp_msg_0_2.speed = 0.959555773471;
    tmp_tmp_msg_0_2.gspeed = 0.119230213368;
    tmp_tmp_msg_0_2.heading = 0.21003320243;
    tmp_tmp_msg_0_2.sacc = 0.304982008944;
    tmp_tmp_msg_0_2.cacc = 0.012301638863;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.960373065583);
    msg.setSource(143U);
    msg.setSourceEntity(7U);
    msg.setDestination(16095U);
    msg.setDestinationEntity(188U);
    msg.command = 148U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RBOHPNYBHEVBXIXJJASONFYFANWXVUMKFTNTABUGVTHHYQNKIKLSGAVYSZNSFEZRQUBYODHCGERGJ");
    tmp_msg_0.description.assign("SVEIIRGAUTYCXXDWDXLZKOAHLZMLYFCEUENPABSFHWMAULXWYTZXXYBRQQXSOTOUGMQTWEWSYLUZNZRUIFAPMBJZQCIYKAAVJCJGSGUOYVJSVNFWSOZMTSVNKVSLONPKLBXPKNCMEJOHERDZENUPHEWYJDVNQCGHPFOTFCFIQHRGFXQBKNATDMWBHUZTQJRJMBSLDMDYWDOICJIFGXDKEMOPTJRVQPIPKRKCHG");
    tmp_msg_0.vnamespace.assign("VYQAOADGXFEDLVAZELOIPTHSBOEVCMXVPFIMUIOXUMQYOGHKTIRALFPNSBMTIGHHZEDNDTACETQYCMSWYRZJSPCXIUEQHECLBVNIZLPFFZHUYRQLTWPMRGZQYJWASSBVEQCXXNWDNJKFKRBORQJFZOLKUICGEJMQWWSXAXPHHBDKRSMHGAPBREKONSNCYJGFCWZROYUL");
    tmp_msg_0.start_man_id.assign("KUKOOVJSLKRKQWMFBVYBQUZXRTYEMYOOZMDVNDLKDYZBBUWUWJDYLKWAHOWGLCBCSSIQJNBMXJSUVTNXNRAPWPAPERQTZILCZTXXSOWFBUMTLFJGZYGHJKDJHQWPAFNYELIERCDOPVTRYGDSPECZONBAARZWMLLHPHVPEEZCVBFIEFGGKFQCNV");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("JITOMTCAWGIAXPSLCEPSSEFTWJDXLKEWNYDLXQQPQRGODHFRBXBJCUXRPLZYJHLBWFTDDPERFNQBJGTPSWULAMVHVNATNTGIETZYKVRMVLQNGNKQCVPHXZVZMAOQSJWKSIYCJKQHFEQJMZXJADZZPKWPWWRVAYCBQKKEPACSDZYGENRDINSGOLLWKAIRRLJAURSHHTYBMFZOBBCXIBNDYIECUOGNUXKVBHXUOSFFOGV");
    tmp_tmp_msg_0_0.dest_man.assign("SAFBFJEOWMEKWQGRJKXHLKKJPXBICOGLHHYBRXSQJYLSMQIHYSYKDVDDJFMLWGTYBRRACJCZAPZXFEIOAKTGBYSSSTRRHKETXZCAMGAMIOZFDZBEMAMPLIMVNUNLBODCXREARKEUJVHHQMUBKRPLWQVYZJOORTUHOWFWPEPNVQNFTPQLD");
    tmp_tmp_msg_0_0.conditions.assign("IHNQHOIFEIGAOBJHZJEIOYQRFOKRHBKUEQUKDRAXJPPNQTJRDBADDRWWMKZAHFNADWLZVIJSXNPMUBYZTMTZYCOWRNLSVXHJCWJBFLSTGLYEKVBSVXTGIYQMXLHVJGMVFPHZTCWEZAPRBUPNBYGEXCRAPKMNMWLGVBDCNSRXPPPYGCMXUMIBCEQGKTUDUTFFMGXSFFYQQFZAEJDSYTSGALKYETICCKIVDLCXVSEZODOOZ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::Chlorophyll tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.838807883855;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.187497369586);
    msg.setSource(27666U);
    msg.setSourceEntity(251U);
    msg.setDestination(63555U);
    msg.setDestinationEntity(226U);
    msg.command = 118U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YBLUSGLKIHIOPTNYPHWWKYQGTVTJZZSHICLKONBGBBDKOEWGTKLGEQMPJEVIAFTNQMFZBUFERHUDPFXIVFILRJNELWTUANEDXYWMVXVQR");
    tmp_msg_0.description.assign("ZUOTPTLBTNTJHSZYNCZQMMSUTQHOKVXSAAWKTLHECMCASGJNLSLMSDDYAIEFAPAVBDJCRMPJOVQZHOLRKP");
    tmp_msg_0.vnamespace.assign("KROBJXDKWTNSJWYSKNFQKOELESBOWPFDMZQLIHHZMDVNRWAZEYIUWLFHCUPYVMZPMJUTCXKPWFAPZRRYAIMIKTBXKYPRVOOLBBHQWCQHIZGASXVIEEDAQVBJHVUAGQXTMDYBPFLVCAXTYNJTELLEFHBWQVTOJWGTGQCJUHUFRFCUJTZANBXLSLSNPSEJSGQXGVDCENGAFCKNHMDOMFHOWMGUSUKICNBEQIDGVUDPJDPGSNRZOOYR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ETHUFIGHPRMWXPUWWSEURQIBPZLZDYGBYLFLDKRRLEOUH");
    tmp_tmp_msg_0_0.value.assign("VJFPTSNUTPHGWLSSQXACNTGVHVRLZMDSXIOCUPVLXDIKGJGWIBPFUXDNFLBYKWBJJPDOODLZIGPTURKCRAFKICGYRSRXIXGRMMANIEFBI");
    tmp_tmp_msg_0_0.type = 49U;
    tmp_tmp_msg_0_0.access = 17U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("AXFTCJUTQJBVVPNWSNNDHERWPRDGRBWXUYZHXFCALWOKGEPHLFIUMYMAUXFUOAMNVJIZCDRCOELNBDCAJGDEKCSVCKTILVKTQHRBJTXFLKVRSEYLNTCGSDSNOSINTHENJVSPHMVZJKDBRSBDGAYTUPBFLUUWHOSFHZEKJB");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("JSRBTJFAVOCUAOKKISZJOMKUGQQLEIECOSMAGBSZSZGDXJYLJZSFPACNNZYRQUIYNRZNDEISGORWPDDKWNCTUIPHWQSXUMEUTAMEHFDZWXVYZDBHLDOYGNPYGSTHIABXXDTMXITRPQNHMPDCPKWRK");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.599102121876;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.274732471708;
    tmp_tmp_tmp_msg_0_1_0.z = 0.632878049898;
    tmp_tmp_tmp_msg_0_1_0.z_units = 9U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.800037157749;
    tmp_tmp_tmp_msg_0_1_0.duration = 49089U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.707630292075;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 218U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("JIRODTZSYSXCGWAMZDOLKIRXQLJPXAOSIGVWRBXPPBQNMUIVFEGRZYZCCMUNTITXGJILQHBQJLPVLUJZVYNYTHETQXRKDVHIKFHLWFLXNMHGCETWZOELLKARPYQEDWOAYURQYCSWKWDPNTWEHOMNBHIIGZYPRSCDPPXFWMEZNGHTCOAENVHBVUURCQFSVBSUKM");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Tachograph tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.timestamp_last_service = 0.730618106103;
    tmp_tmp_tmp_msg_0_1_1.time_next_service = 0.274104106087;
    tmp_tmp_tmp_msg_0_1_1.time_motor_next_service = 0.299125591059;
    tmp_tmp_tmp_msg_0_1_1.time_idle_ground = 0.20329434448;
    tmp_tmp_tmp_msg_0_1_1.time_idle_air = 0.825382509948;
    tmp_tmp_tmp_msg_0_1_1.time_idle_water = 0.165336158988;
    tmp_tmp_tmp_msg_0_1_1.time_idle_underwater = 0.00566510016294;
    tmp_tmp_tmp_msg_0_1_1.time_idle_unknown = 0.917637244702;
    tmp_tmp_tmp_msg_0_1_1.time_motor_ground = 0.772238233122;
    tmp_tmp_tmp_msg_0_1_1.time_motor_air = 0.939793940225;
    tmp_tmp_tmp_msg_0_1_1.time_motor_water = 0.434814143007;
    tmp_tmp_tmp_msg_0_1_1.time_motor_underwater = 0.738128090071;
    tmp_tmp_tmp_msg_0_1_1.time_motor_unknown = 0.97726829552;
    tmp_tmp_tmp_msg_0_1_1.rpm_min = 10701;
    tmp_tmp_tmp_msg_0_1_1.rpm_max = 17925;
    tmp_tmp_tmp_msg_0_1_1.depth_max = 0.392291381488;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("MRFXCDYCXTGQFVWUBTSEPXZASTWJDMOPNAVHFUVLVZDNTXPYEOFLENPQOTWCLTLAIMDCBNUZMWKKMJWYCHGNLVSQYDMRPQXKGBCWRDIRGYXSGRAFKIGKATZBESCUKAIOCBHOTFNFDEAOBWQGBZCPDUYRJJLHFXMVQETNASHOYBZNQISNISYUWPLJIIUSZDKQFU");
    tmp_tmp_msg_0_2.dest_man.assign("ZMFXUNTTVMRJNSJTVYHSEXHLQSOZKVNNPRWZSFMQLOWUWGKOCQKRGIWXDMGDNGEPPZTIZFYSEYHKWVZXOGEYQXHFYZHAAJBAKFWRDDAAQCJJJSWAUZRFHBQPUYRGMBQOGHKVYLAT");
    tmp_tmp_msg_0_2.conditions.assign("VCXBSDVJHBLGQXOFNFIDUWPFWIODLQIECAWGKBJEVBFVKRZUGEMFXANORTSKZDALNAAVGMHVJ");
    IMC::AngularVelocity tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.time = 0.740801540732;
    tmp_tmp_tmp_msg_0_2_0.x = 0.538338135518;
    tmp_tmp_tmp_msg_0_2_0.y = 0.691288472515;
    tmp_tmp_tmp_msg_0_2_0.z = 0.0741243680476;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::DesiredZ tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.807683664002;
    tmp_tmp_msg_0_3.z_units = 196U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::Force tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.value = 0.384799364837;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.735915088698);
    msg.setSource(6718U);
    msg.setSourceEntity(180U);
    msg.setDestination(2175U);
    msg.setDestinationEntity(142U);
    msg.state = 109U;
    msg.plan_id.assign("RQHSDYRUGLMFOCRCYWZUTPUISPMIJFKADCCJMDTPAIXZZMNNGAFNHBZIDQKVAGOEVJWEDADCTUIYEWEXQKTTHITSXPNFKTWTCMKGDQALZMKYSDPWL");
    msg.comm_level = 157U;

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
    msg.setTimeStamp(0.857996877307);
    msg.setSource(42806U);
    msg.setSourceEntity(125U);
    msg.setDestination(54580U);
    msg.setDestinationEntity(142U);
    msg.state = 19U;
    msg.plan_id.assign("WUGRDAFVYJCXXLWRPCBEIYHMEYZUFVZCOSSQOTGQFHPZEXLLDCIAVJLGYFZDOXPTSWHKLCZMDCAUVGIWKCRGNVJBQNTBAYNFJFJXJKQZEIRAAMXWVRPBUJDNBUHXUKLBKKJAYCOPPGTILQLUZOGJSGNXIOTIOVUODPPTAHWBEFY");
    msg.comm_level = 242U;

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
    msg.setTimeStamp(0.477571077782);
    msg.setSource(14740U);
    msg.setSourceEntity(17U);
    msg.setDestination(16457U);
    msg.setDestinationEntity(98U);
    msg.state = 55U;
    msg.plan_id.assign("CSQEXDHGSOREFXVPLMSDXEOWODDWCHQZKFRHKHJCPLYCJFZVBMGGUOPIPUJSEBKZUSRUAIMIAVAYHFKSFHPLVIHNBXAYRXTMKQW");
    msg.comm_level = 167U;

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
    msg.setTimeStamp(0.254740572756);
    msg.setSource(31907U);
    msg.setSourceEntity(74U);
    msg.setDestination(33592U);
    msg.setDestinationEntity(42U);
    msg.type = 188U;
    msg.op = 232U;
    msg.request_id = 52319U;
    msg.plan_id.assign("OCQPVYYYJXGNPDMIFQLZKARZJARWY");
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("EQXVYJITYXAWVQIAJQYPHQAXHYMENVXQTPSLWSINEVFPQFCERXDWIKFTUZFHUDOFMQCJEKCKAIJDOGQWLFSQVVNLZBOGTKUZWSMHWBCRZBCUHRRKWVDDMJBKTRBGJCPNWUMPOFIJCVZPIKMDLUXBREWYUCYKBIRXDGN");
    tmp_msg_0.lat = 0.044154378415;
    tmp_msg_0.lon = 0.336272378478;
    tmp_msg_0.z = 0.559028331473;
    tmp_msg_0.z_units = 251U;
    tmp_msg_0.cog = 0.751587479875;
    tmp_msg_0.sog = 0.444807816912;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VVALFLMCRLBPGQVYRDANWLIAZUPBLPMEGWWHPHYNSBKHNBUHOGSEGILBSQLIAWAZLTQOBMUBVSEOEN");

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
    msg.setTimeStamp(0.925402157594);
    msg.setSource(16473U);
    msg.setSourceEntity(46U);
    msg.setDestination(35580U);
    msg.setDestinationEntity(30U);
    msg.type = 52U;
    msg.op = 106U;
    msg.request_id = 22781U;
    msg.plan_id.assign("MJJKNEPPHPUKCNKDHERFCNWZGYCTSRFGOTBCZDNBBJYSGRVXXNPBEHLQBGBIPLJJGXWIUBQAUYTVZQRJXDITVKN");
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("TKZPNRUQZOLCQWZJAFLZCHRHUNYWSMAJCHRTVZRMNIKIHSGKJUDATTBLGEJXHYOFYJRTLIBDTURCGAPHKILOIUOTQDXWPEQPMIBUGNAHZFTRSYWTGXLDMLDGFDGWERXHBEKBVNFOPRYONSJOECJBWHGNAFBXIVSLCVWQMOZCQZLBPXJKPYVXFTVMYHZOMCSMXDFSYAYQVADEPPXMODZVGSKYCNAJKC");
    tmp_msg_0.lat = 0.761677396168;
    tmp_msg_0.lon = 0.0491113421616;
    tmp_msg_0.z = 0.0859641975024;
    tmp_msg_0.z_units = 38U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PBMZYPCLQNVVITYROKFVOQZZQDYUAKTFEXLKCLNNHCHOSRLIBU");

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
    msg.setTimeStamp(0.583793864605);
    msg.setSource(47041U);
    msg.setSourceEntity(208U);
    msg.setDestination(31913U);
    msg.setDestinationEntity(47U);
    msg.type = 143U;
    msg.op = 14U;
    msg.request_id = 35065U;
    msg.plan_id.assign("UZJSLMODVSKOENWXRFPIRWCFXAHIHYFNPAOHIDCZNZXDOFRUPISXCAFWUFBUEDZJRDFRPYPFRMVWKZLDICFIOHMHNLGQQACOSJIKSGHANNGLXWYKGKETPTOJXKCIYRWTVHGMLSAEVBYPVVUZVLUNBYPALSTXIZMXWOJOMBNQVGKEDMZNATRTJEEPEHGUJSCVKDCUTYKJZBJQCCJI");
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 186U;
    tmp_msg_0.numsamples = 93U;
    IMC::ProfileSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.depth = 8856U;
    tmp_tmp_msg_0_0.avg = 0.145408395568;
    tmp_msg_0.samples.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.lat = 0.303615356007;
    tmp_msg_0.lon = 0.101904055106;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EKEPYYGGRLMLZYSABKQWHUEELSFGMDHXMASAZVNGMYUKUJXDYZGKNJEIEATOIVHPERCJCCUNDWQXLUGDKAJMZNQIDUTXAPHRFP");

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
    msg.setTimeStamp(0.960137200205);
    msg.setSource(27969U);
    msg.setSourceEntity(58U);
    msg.setDestination(58271U);
    msg.setDestinationEntity(26U);
    msg.plan_count = 20636U;
    msg.plan_size = 3108045183U;
    msg.change_time = 0.463819092625;
    msg.change_sid = 39108U;
    msg.change_sname.assign("NSBREXIMRVOPIHLKKTLRSGALIICREHAAFDHZVVJXBTWLOKFUOQSTGMJKMVQYCYYQTZFNE");
    const char tmp_msg_0[] = {68, -119, 91, -114, -87, -91, 78, 81, -94, 23, -113, 125, -128, 13, 7, 26, 7, 15, -110, 97, 1, 5, 37, 49, -31, 8, -125, 92, -9, -29, -42, 33, 37, 4, -11, -77, -108, -79, -79, -116, 83, 119, -11, -61, 83, 17, 80, -82, 34, -31, 65, -118, -22, -125, -122, 55, 102, -3};
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
    msg.setTimeStamp(0.271750227105);
    msg.setSource(26619U);
    msg.setSourceEntity(131U);
    msg.setDestination(61664U);
    msg.setDestinationEntity(192U);
    msg.plan_count = 35313U;
    msg.plan_size = 1502010540U;
    msg.change_time = 0.378209409395;
    msg.change_sid = 51121U;
    msg.change_sname.assign("EVZMBTNDNYNIPUMZPCRGICMNGVIRAONCJJOECDVKXIPVBNMWSIQDTHKPOTXDQLBQTHFFJHQFJOZDDVXIUTTESRJKNLTPNXYMRAQMOZYBPFILSSDSZYXAFBERHOUHZEDXWYKEHWVZPSUCLLBRXWCAQPK");
    const char tmp_msg_0[] = {63, -51, 96, 119, -102, 12, 86, 45, 35, -119, -56, 60, 51, -117, -107, 101, 86, -56, -121, -85, -55, -74, 100, 48, -45, 34, 121, 96, -66, -124, -63, -49, 125, 2, -123, 111, 35, 2, -27, -114, -17, 99, 18, -38, -98, 16, 26, 70, 116, 65, -88, -31, 117, -79, 121, -117, -5, -14, -9, 71, -62, -89, -48, 117, -23, -40, -50, 123, 122, -41, -48, 91, 101, -99, 89, 93, -101, -88, 98, 76, -105, 41, -48, 120, 104, -61, -27, -94, 69, -9, 46, -43, 48, -102, 87, 4, 82, 90, 67, -34, -66, 94, 54, 22, 114, 39, 61, -27, 75, -42, -47, 0};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.408010537167);
    msg.setSource(34234U);
    msg.setSourceEntity(84U);
    msg.setDestination(42426U);
    msg.setDestinationEntity(18U);
    msg.plan_count = 20635U;
    msg.plan_size = 608698818U;
    msg.change_time = 0.27584077281;
    msg.change_sid = 41503U;
    msg.change_sname.assign("ZMYXIHIECWRXKPAHABUDNOXRJFURQHMVOLDNTWNACXFHMXQHWSCSHKESSQCKUJHPVVKNLHYIIFQFFAQMDYGJUKAGUNMCNYLOZSQPLLXTTRXMBRCJCRVVYPGXHHRIFMJDTDZYAGUGOUSTLLOPIDARVWWIZURQGDENOOPEGLYGVEVGDWSOCECBVZJNKIFTACXEFNKBZZGZDEFSDOBJQMWUIBNJTYYVAKMFXTZ");
    const char tmp_msg_0[] = {-107, -49, -37, 31, -114, 3, 28, 69, 102, 62};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TFOFHOEGYSBMZTAWSKVSIIQUMPHDCTWQFWVNADVUQUJNZGATLFPGCLIKTHEHWEPMG");
    tmp_msg_1.plan_size = 53569U;
    tmp_msg_1.change_time = 0.542642611215;
    tmp_msg_1.change_sid = 27329U;
    tmp_msg_1.change_sname.assign("VDTCHKBITGKSWYYCBBRYOWWXADBLNFGQJMNEPOFMNSMPAEJIVZLNBWIRRKUJUOYPAEXMPQFFTXJQDYGCEYVUCHMMDPBVKLYVPGQOCKGALEOMMLUBXIUNZBEAMJTLJICZTWFTJAWHWLDKTGKUULCJNSZBPWSHXZFJDWFHFSQKEOOXAGILINQRJIUSHYHCZPDPHOZVGOZFYQTUEXZSBTCKEACWFXXIPYRNS");
    const char tmp_tmp_msg_1_0[] = {78, -58, -12, 45, 82, 11, -8, 66, 87, 117, 86, 104, 116, 70, -58, -81, -112, -115, 81, -65, 120, -95, -103, 52, -9, 54, -31, 24, -23, -108, 66, -103, 78, -63, 17, -64, 86, -91, -1, 56, 4, 25, -100, 94, 78, -51, 8, 76, -71, -32, 77, -59, -92, -72, -101, -73, -83, -114, 38, 9, -123, 108, 50, 107, -98, -4, -73, -28, -3, -24, -66, 0, 39, 119, -89, 57, 85, -101, -8, -106, 22, -120, -105, 107, -75, -112, 47, -58, 57, -115, -93, 105, -4, 75, 42, -79, -123, -91, 16, -117, 2, 31, -123, 114, 71, 118, 114, 107, -59, 20, -42, 43, -44, -78, 36, -78, -50, 122, -79, -70, -104, 89, -50, -114, -38, -38, -116, -123, -79, -99, 102, 55, 8, 114, -46, -28, 65, -40, -88, 61, 52, -112, -96, 90, 5, 61, 28, 52};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.054905037486);
    msg.setSource(27015U);
    msg.setSourceEntity(108U);
    msg.setDestination(30079U);
    msg.setDestinationEntity(204U);
    msg.plan_id.assign("NWXUHGSTNZVFYTLYEUVSGTNFEMMVMOAJMBXIJTRYWVUPKDQBYEEBFUQSKRDTXAZDCNDRQICIDCNBYFSLLESOYHNEXLBJLVIRPPYXAEZWFKHWHMRBWMQAZGOQSPXGAUCYNJZQZBCDVOPVUUHYWIYFKOZBJQBPJGHQH");
    msg.plan_size = 57441U;
    msg.change_time = 0.972704049265;
    msg.change_sid = 58810U;
    msg.change_sname.assign("QIZZAEJLDNSLYSMHEVBADVXDZNRBQBMQTDNMRFSWRJDIEUGIEJACGKYLZOWQAJWUDJXAIHLWMTQOXXDZXFHXLHRJFPLLAPYWKTAWWOSUBSUCSOZYEPGVGOOBLIABZWXCXDUJEZUVHAPQCMYUSEGHKTOFIAMJFJTNCBVMFQIJYIPVMUPRTLNEFTQVSVVWPUNNGD");
    const char tmp_msg_0[] = {-17, 39, -70, -21, -113, 70, 111, 42, 27, 104, -88, 54, 10, 27};
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
    msg.setTimeStamp(0.878076683682);
    msg.setSource(22143U);
    msg.setSourceEntity(5U);
    msg.setDestination(7058U);
    msg.setDestinationEntity(166U);
    msg.plan_id.assign("ZJXEKCNUHISWAFXDCVKVPKSFYSGZOTUPLWXBOBWMOVEWEYNISSWCVFJEDFRBXEJSSEWDKMZOLTARQHJSEAJULVNCMJMWWQLFJQPOKZOQYUQULGRMBTCHWFDYDGOVNDHIGRYKGRYTNHMTUYBNSI");
    msg.plan_size = 35649U;
    msg.change_time = 0.462196806392;
    msg.change_sid = 24159U;
    msg.change_sname.assign("ZTHGBWLEGAJFIEOXXMRSHZCMXFLHTZRFKBTESJLGMDZTUNWLAWIPMCDXOSHACBRAKDVHKFTOPTNIVSOLJIQBRWYFDOEAAICXICJXSDMXWJZVCZTKRMCQVBZPWMKVAKBWEAJOPQCOXPRYHTXKGS");
    const char tmp_msg_0[] = {30, -61, 98, -112, -110, -13, 45, 122, 113, -31, -44, -108, -42, -121, -21, -93, -104, 113, 123, -116, -21, -53, 76, -10, 58, -85, -117, 17, -66, 76, -11, 98, 3, 76, 95, -74, -34, 45, -65, 46, 119, 42, 26, 35, 101, 52, -43, 95, 34, 97, -23, 64, -75, 115, 84, 11, 102, 112, 71, -1, -125, -89, -23, 52, -101, -113, -8, -79, 24, 15, -52, -66, -70, 99, -15, -114, -123, 70, 82, 50, -114, -52, -127, 74, -12, 66, -59, 8, -39, -107, -120, -125, -46, 121, 86, -116, 116, -123, -57, -53, 18, -98, -13, -19, -60, -37, 0};
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
    msg.setTimeStamp(0.78760961342);
    msg.setSource(2130U);
    msg.setSourceEntity(52U);
    msg.setDestination(4373U);
    msg.setDestinationEntity(223U);
    msg.plan_id.assign("IFQWFSQSMMSMAWWCAUTJSCWVRXJNLBQUEKVYAPGDCJLIIBXLMPHIOLNFSACRQCYJOOELDFHPKZUXOIDBWUDIBJXRAMFXKXNUXKXVRVJPYRAQZUNFJZBFTWNMTODRFVALOOXPCFQSNLTZBAOZGGZIKBVMNGBTUHHUGDWGTNQOMGSGRPWKSEYLWQTVWSCZYIVJHEHEZAZCPZGKTLYYTDDKPIPELGIETDCHQRRJDNQBUE");
    msg.plan_size = 26708U;
    msg.change_time = 0.505174159548;
    msg.change_sid = 65209U;
    msg.change_sname.assign("RJLFCYBHEFPSYHSFUMBNETPIADPJNAIUYRBYKEKQSFFJNOVPCDQYOJZSDAYMEFUWTLULVKASNXBDCBQRGYMZRCGRXLEKIJIQOTDMAKCGMLMVUJUXEUNXSPMIXAZZTWJTKWXTTFBYAHLGDZKSNLGIEHGWJGPKIRQPRHLHHWBFGOQNYUBAFQPZVHVWOVNKQWCMFQCCLWYUA");
    const char tmp_msg_0[] = {-69, -105, 45, -57, 108, -92, -41, -61, -117, 37, 36, -48, -81, 51, -26, -78, 104, 15, 105, 49, 52, -43, -98, -114, -62, 86, 5, 57, 2, -87, -75, 9, 8, 113, 67, 88, -63, -80, -86, 48, 2, -13, -104, -51, 34, 115, -81, -71, -25, 52, 17, -12, 125, 121, 31, -63, -116, 28, 1, -59, -16, -63, -14, 115, -43, 66, 12, -58, 21, -127, 123, -2, -57, -47, -106, 125, 98, 1, -81, 75, -58, 77, -24, -46, -42, 36, -124, 76, -22, 101, 74, -67, 106, -80, -103, 25, -95, 69, -63, -88, -80, 116, 66, 103, -8, -97, 107, 77, -90, -78, 25, 44, 60, 114, 38, -114, -57, -33, 111, -118, 55, -47, 75, -113, -18, 16, -118, 91, -91, -60, -62, 34, -48, 43, 97, 119, 13, 113, 65, -22, 39, -126, -65, -101, -41, 63, 52, 126, -40, -76, 97, 19, 77, -23, -99, -46, 87, 5, 1, -5, -107, -28, -67, -28, 121, -73, 87};
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
    msg.setTimeStamp(0.772584558604);
    msg.setSource(62264U);
    msg.setSourceEntity(18U);
    msg.setDestination(29173U);
    msg.setDestinationEntity(216U);
    msg.type = 13U;
    msg.op = 13U;
    msg.request_id = 5367U;
    msg.plan_id.assign("JLWHWXXVLCIKMYSRYDAFYEWKFBLLGOOGTQZBYXDYKISSOCQXUKUUHBRXHHNDNPGEEWQSVDMZFENZZJPVIUDTTBHNTPWGIJYAUJECFBNRWTMURVUQSTSVMRVMPXPKFCKMFGCHSOMWBA");
    msg.flags = 29430U;
    IMC::Redox tmp_msg_0;
    tmp_msg_0.value = 0.140175430804;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MYKFIGPLDSLVWRGBEAELMTRVOKAETSXCBKYXDCRHNJJESKYYJZHIVIZVAYGLODPSMHXWDQPVMUHFZYSWBQINZAYB");

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
    msg.setTimeStamp(0.356056241714);
    msg.setSource(8745U);
    msg.setSourceEntity(206U);
    msg.setDestination(16331U);
    msg.setDestinationEntity(251U);
    msg.type = 22U;
    msg.op = 242U;
    msg.request_id = 57897U;
    msg.plan_id.assign("DINZDYDQFWONYYVBBUJDCDWBHGPWRIAQCFKZPGTGNRBFRXXROEILUJWZAOYTKKVCSAEWVHGRGELDKJTHLGDCPXZKEMDPJIGHESNJTMMCTZTFSOYPUEUAPZQRFKPSAVAOBMOVVOGSHZFJCQKWSEWUWCMFQYJSFXFVORZLUNXYURFAHDBCOKSCOZRQLYLAEPPAHTGBIJNQSNLXCTXHLYJITIISNLMHAIPVQMBKXEUVIYBMQBGXMEKWNZTNQ");
    msg.flags = 34143U;
    IMC::TelemetryMsg tmp_msg_0;
    tmp_msg_0.type = 182U;
    tmp_msg_0.req_id = 1404279667U;
    tmp_msg_0.ttl = 21794U;
    tmp_msg_0.code = 163U;
    tmp_msg_0.destination.assign("VUQRRSNOBUOLYXIBKBTRGPUVMGFSTPXQWRSHQJJ");
    tmp_msg_0.source.assign("MRTRJDDYQLBBFYJKPQPIACGKNMMZZQQSDVKFPMXLCSBYGPUXNXBVFZRGQMDFUOLYSAPCUIUREHCLAMZKUXCXAPHVWWBXDRWLKNGOJVGMMTGIOAZDREJFPZYICOOXZAEHNUESNHAVNLDIZAIFVYCTBOKKCFTCTQEGTFQASIW");
    tmp_msg_0.acknowledge = 56U;
    tmp_msg_0.status = 228U;
    const char tmp_tmp_msg_0_0[] = {82, 109, -123, 17, -44, 81, 44, -92, -106, 5, -100, -125, 19, 121, 103, 67, 44, -81, 53, 70, 25, -103, -26, -56, 77, 71, -79, -31, 44, 85, -100, 0, -62, -87, 13, 117, -113, 6, -10, -55, 56, -118, 91, 123, -63, -68, -57, -54, 113, 73, -51, 110, 105, -72, 36, -74};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TCMJYGMHJQBPCGWACKNEWHDBZOOHKBLGOSMFVDZYXLHIOSRJQADAUBFQSMKXYGXNPUHRPFDTUAEWUHJLITLFKJRXICLFCLBTSOICKFWYVQGTISJWYOEDEPZVBLBZGKQQZUQWHERKOFNSFVNMKSNGGNNJPJEVZCYQKDRENOQHVPIOZWADZXTRSOEDUATPTUIDMQFZMSMCLADGHFTAVBIGXSVZLTJWYRKMXPWBX");

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
    msg.setTimeStamp(0.116465128868);
    msg.setSource(53395U);
    msg.setSourceEntity(58U);
    msg.setDestination(54831U);
    msg.setDestinationEntity(237U);
    msg.type = 227U;
    msg.op = 51U;
    msg.request_id = 62668U;
    msg.plan_id.assign("WKJNBNTOUMZGFOHYELXYZRLDBSLUGWCVVFFZSOFEYVORJAXIRIIHPUVZPXKRSLBTCAXGRMUMBSPBOXVDOQCXHYUHMQHKLWMXSVVTRUBZAIRVKEUGCNQPKMFZNPDJAIPFCEXYZTGSTZEBGYCQIIWQSDVARINPNJPYRZWXISADKKANAO");
    msg.flags = 19329U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.15298342548;
    tmp_msg_0.lon = 0.402822864005;
    tmp_msg_0.z = 0.98929600928;
    tmp_msg_0.z_units = 209U;
    tmp_msg_0.speed = 0.644529705523;
    tmp_msg_0.speed_units = 39U;
    tmp_msg_0.takeoff_pitch = 0.0533892505448;
    tmp_msg_0.custom.assign("USIHDWEFWKYLZWKIHJILPGGWMBCTITQASTHYUQDSVRTQHOFELSDDJUYSHFUXMWWKUQLHSTJZJOHCURAKUXZJOYXLMVNXEPWGNDKQEUXMFKJBZONEKBBNQNBPMRSPUAFNPYVWIXGPMTPBGLWFZRRFJJOCEMWTCGCPFLQBFFOAURIEYAMJRDRAEHDTKVBNCKRQDSDGGZQQZXICIVXYZYDLXASZL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZPWUCYLRZSVAWJANZQRVABPKZYMTJUQLAXXKIZTGVCQHMXMEDRBYOJPTLIMCLLDEDCTFWBIJSLVWOJUMGOGCWOWGHDNHXXFBCXDPHLMXSSGNRKKOUUNVMNDEMICRSV");

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
    msg.setTimeStamp(0.70992904937);
    msg.setSource(45365U);
    msg.setSourceEntity(46U);
    msg.setDestination(5641U);
    msg.setDestinationEntity(240U);
    msg.state = 183U;
    msg.plan_id.assign("IAAOBTROZZSEJPTSVEYPFRPCVYZFFVJTYNNHNKILKBWIJHHWKEOOIIYRIEKAOZPVPGRFGAAVUYWSETRXUPLPCQVDTXZVAESNDKBGITMOMOXIMOIDFPLJQLSMWUXDGCTRNHLIYBBMCGXDVUJRJEZOWLKHMGKAWZRQWMQCSTDWGEDGFRNXHXHPHJYBFANBFKONFZAQYGMYEUDXHSZMUSUCMJWDBYRLLCJQCASSGVHUQCUKNEVDTPL");
    msg.plan_eta = 1194133182;
    msg.plan_progress = 0.777077386898;
    msg.man_id.assign("MZXADCFZRSRCDNWWCIKDKMOSYICNOPZKXSSRISSLIUUCWNWBXVWVHPOOYVBUORODDGVPMEQXXWPMYTPQBVAINXRMZAQTOJDTHI");
    msg.man_type = 50690U;
    msg.man_eta = 726302141;
    msg.last_outcome = 137U;

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
    msg.setTimeStamp(0.982911165937);
    msg.setSource(21913U);
    msg.setSourceEntity(109U);
    msg.setDestination(27086U);
    msg.setDestinationEntity(5U);
    msg.state = 111U;
    msg.plan_id.assign("LGMGCTQOJXGRFTJTHMWBNLCPOBDPISRFVNWPKBEWAXAQPWDRPDULESQMZHHRJWIGIOQOMJAZETCMMWZYRFGAPJUSLJREEZVJTCICZNMVPPFYKTKLVCDICUOQLKGAJONWUXRRV");
    msg.plan_eta = -535031495;
    msg.plan_progress = 0.241915832135;
    msg.man_id.assign("JKXCRCNPMGBADYLUKNAEBRELQHEBTXLPKNIFSJJAOTLQUOYDEPQNKLNB");
    msg.man_type = 9777U;
    msg.man_eta = -1905429748;
    msg.last_outcome = 141U;

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
    msg.setTimeStamp(0.699966200416);
    msg.setSource(18827U);
    msg.setSourceEntity(88U);
    msg.setDestination(24740U);
    msg.setDestinationEntity(219U);
    msg.state = 23U;
    msg.plan_id.assign("OOCDTKMXEWHOPDSYLXKPPQNJNAUQMJJAMGNEVJYRDGUJSHDUMQSYVIPYUAVAZODFRYDXXVMQXQUWJTCNUYGOLXIERCNAFTKMHHOIIQKPFMBKWGKSYBPADCOZZHBDRCEFGHILOALBECZTMYESNWRIGHFOHQOVRBWLLWLKJABTEHEJAPXSSGQCQSGFXVHKZTXBSZRTMYIEUWZKTVZTCFVLRGIBWUPWDCNJYITSNQRKLVVRJAFZIFENMBNU");
    msg.plan_eta = 1937963516;
    msg.plan_progress = 0.801310444512;
    msg.man_id.assign("VOEQXDNFZJICQILDVBBTFRZONLLRWXCWMGTZHZMLQFRBTATYSEAHZEPMWYXDWWOBZQVHTVRJWGWMLWEMXQJUFLMUVNPWSAKWLXQ");
    msg.man_type = 22485U;
    msg.man_eta = -1279510035;
    msg.last_outcome = 238U;

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
    msg.setTimeStamp(0.331921273113);
    msg.setSource(22954U);
    msg.setSourceEntity(145U);
    msg.setDestination(41330U);
    msg.setDestinationEntity(57U);
    msg.name.assign("XGIEXVMZHSUUPLQUXFCJCRDYAMZWJGMTSTBUECAARBVXQBETRZXSNQVXURIKHLAQZTYADONMNEQCRLUQZETGGJCKFPSHRYFCNOIOWLHZXPHLKWHMBEAVDWMZIUDPJCTFWPIUIGQPFSGYCOYKGIPNRYJWHHEMPYEDUFKYRVIGJWVJALNBVOOFAKATSPNVDDBBOEZSIYMOBBVQWWRLGZBHSKZFSTGJLUCQXN");
    msg.value.assign("DXAHOOEBBHTCHTIERUAIVDTHLJVXMZEGGLIAFKSPHWUVCPZMNTKDWGLZFDXDPGEOOJPVYHPRRDJFVKQNSEBTGBXQI");
    msg.type = 236U;
    msg.access = 29U;

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
    msg.setTimeStamp(0.167768926294);
    msg.setSource(44295U);
    msg.setSourceEntity(142U);
    msg.setDestination(12647U);
    msg.setDestinationEntity(235U);
    msg.name.assign("AIUJWJEHXYQEJPMRPBYBUGCXFSWIZZYYWDIATAHFPFLZTTMLXKVZHAOIDDUHHMEJLVPQTSGTWKUBGSOKKJHWJBVACACCKIOEGRDYKAUJCRCLNXOQOZUCQYHKDPKIQCGTDCPJ");
    msg.value.assign("NNCVQNFVVCUVOVLRHDQBEEMOJMFDUXTWISODYYPPGKDZZDNPEXAGNWKBDHNQRIILZJHUTQNMIFJKOEYWMROCQPAPUCZFSCRKGFMLJTVRANIRYWDFLQLZCCLBCSKSHYZZNPPIMABGXUUXVHZTOKGJIJEPQQRSEHBINTBBTOHDVJYMJBPKHXHYFFWGVGLWUASLCZEGSDKGMETJFUKLWFUTKQRIJQPSOITH");
    msg.type = 222U;
    msg.access = 22U;

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
    msg.setTimeStamp(0.275630467309);
    msg.setSource(63907U);
    msg.setSourceEntity(77U);
    msg.setDestination(4466U);
    msg.setDestinationEntity(139U);
    msg.name.assign("ZVOMSGVPELXBMJMYLTCROBCLZKCXFDACLAGUKODGAPBBGUXJTKJJSTTSKDDZ");
    msg.value.assign("OACSMEPDYTUGXJOHERGNNVFIPEYBFPUNZPGPWFDKQKMVUZWBIQKNEOGUNDELUQIDJHEQEDTJJBYCGYLHWCNZGQTATDRJZKCITLSJDANPAKLHBYTCTKROWRRSGDKWUXFLNNSYJSGEPAJGPXTQUBD");
    msg.type = 81U;
    msg.access = 12U;

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
    msg.setTimeStamp(0.895268666303);
    msg.setSource(29436U);
    msg.setSourceEntity(20U);
    msg.setDestination(17092U);
    msg.setDestinationEntity(233U);
    msg.cmd = 115U;
    msg.op = 135U;
    msg.plan_id.assign("KWUXYHVICZTXIHILIHBCGSOYUVLXZCFQLPKUQLIMUWRDLMERHJJCFQROILJPKZHVTKRWCVWCNQWIBHEXWCNBQYPRKOTWEPSVBGFADUEGSILCQFXFOTIEANJGGLRGZMQAWBUROSEJWAEXDNMVPJTHLUPBFFICQYKDO");
    msg.params.assign("ZAWNHZXTMIKOJGPPFBVCLZSFOCYVPQSKIMNQDPELSLZVMBVKDTODNEFIVPGSHDKXTAFGJNNGDKWWLUVT");

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
    msg.setTimeStamp(0.993778089034);
    msg.setSource(26328U);
    msg.setSourceEntity(163U);
    msg.setDestination(55858U);
    msg.setDestinationEntity(195U);
    msg.cmd = 178U;
    msg.op = 41U;
    msg.plan_id.assign("QSVKGDEEQMHEGLQZNXMIAGWDRZFPSGMKVUAENRTKBHSIZGJLDWLBVCTXGPNITXARNFIRBDQDZYCBIROQDC");
    msg.params.assign("VBZENZWMJKUOTJFBMRSOPFAFZSBRYNHBQTARSAEG");

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
    msg.setTimeStamp(0.638760242709);
    msg.setSource(22924U);
    msg.setSourceEntity(83U);
    msg.setDestination(7305U);
    msg.setDestinationEntity(150U);
    msg.cmd = 139U;
    msg.op = 121U;
    msg.plan_id.assign("KYARNHXCHDWDIOADSBIOKBVVAFFZQQGGACHIETLPMAVZ");
    msg.params.assign("EXLLAVSFWSUEDUEAVNTXPMXJIZLRPJGNFDSUKGPTSRVVSSVIJBFTXBFDEARGBTFTXZVTQBWGHBBMJYLSRHZIKODAQFFKZRXJHFMDCKPYAIOCOTOIKHYSKAYXTEPAYVERTNLHEWXLEAZOHUQGRLU");

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
    msg.setTimeStamp(0.305816242145);
    msg.setSource(32541U);
    msg.setSourceEntity(183U);
    msg.setDestination(56288U);
    msg.setDestinationEntity(25U);
    msg.group_name.assign("BKLMZJLUORXHRMGYVWPSZNDOLQDZYXYQETMRFANIUHIREZFKBAKEAPJNLSGGIQSAQMZACDCXPBNKNTBINCMBOKBZUJBGSLVFJBRGGWADQCLFMDHASWVGNXUXPHUTXSIYOTJEEJGWJVUJOYRVFSNAEXPKITMKLCOVHUBFWXEWFFDMJRMELHKZCQCIRK");
    msg.op = 172U;
    msg.lat = 0.873532571421;
    msg.lon = 0.457744732448;
    msg.height = 0.288859435891;
    msg.x = 0.663640413385;
    msg.y = 0.738066690926;
    msg.z = 0.505585368781;
    msg.phi = 0.648823147792;
    msg.theta = 0.442455453597;
    msg.psi = 0.427664468138;
    msg.vx = 0.669701280927;
    msg.vy = 0.960725520256;
    msg.vz = 0.594248311913;
    msg.p = 0.246037073638;
    msg.q = 0.560702215688;
    msg.r = 0.223315256231;
    msg.svx = 0.378737374002;
    msg.svy = 0.963164561599;
    msg.svz = 0.386265350714;

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
    msg.setTimeStamp(0.948046060623);
    msg.setSource(17365U);
    msg.setSourceEntity(89U);
    msg.setDestination(50202U);
    msg.setDestinationEntity(212U);
    msg.group_name.assign("XEVBUDVWUWCPMIZIHIXQRIIWSMFJCTPODRYOOFMELRFZZJHJQTNJNEDFLJPOHYTVGYKIGWKWMNTRXDHIQJCZAFZSBXTRFCLQJKGVCGGHXJNREPXSCGRNZWAHKOEGXQHIXSLNNFHRPCSYHOWDNIYXKLFPGJBTSBLPCLKPMBKADMOMYACKXWZCVSEZUTFDVLBNSQAWLUUTEUBPBNGEFBTVQMQAUAPVTLUZZDARUIEYDEBYWRSAODAKYOVHYGQVS");
    msg.op = 137U;
    msg.lat = 0.726075970592;
    msg.lon = 0.719357380564;
    msg.height = 0.962903029122;
    msg.x = 0.424564288727;
    msg.y = 0.325127527229;
    msg.z = 0.140010920485;
    msg.phi = 0.830634328914;
    msg.theta = 0.105050008663;
    msg.psi = 0.722098592717;
    msg.vx = 0.772586779513;
    msg.vy = 0.377481927488;
    msg.vz = 0.577763710199;
    msg.p = 0.1489008689;
    msg.q = 0.307283805925;
    msg.r = 0.72282955939;
    msg.svx = 0.359135359375;
    msg.svy = 0.192708124463;
    msg.svz = 0.0524165232238;

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
    msg.setTimeStamp(0.160340002575);
    msg.setSource(65490U);
    msg.setSourceEntity(6U);
    msg.setDestination(46474U);
    msg.setDestinationEntity(248U);
    msg.group_name.assign("PDGNREJZWFCSMTGDJHRFFIEPDZTSRNCTKCNGVAXQPWRHEIKWULSCWSVHLJEZLRCQIDOSBUPGPAYZIHTPSEBSSYJOTLGVOUVOTSFXGWQAFCLLVBKXFZQRBFWDZKNOMBQ");
    msg.op = 121U;
    msg.lat = 0.487340889971;
    msg.lon = 0.297841275386;
    msg.height = 0.248315143514;
    msg.x = 0.0340327255101;
    msg.y = 0.188482853298;
    msg.z = 0.44714804729;
    msg.phi = 0.369824418321;
    msg.theta = 0.474238533044;
    msg.psi = 0.905295206905;
    msg.vx = 0.487737237858;
    msg.vy = 0.109232715869;
    msg.vz = 0.309506226191;
    msg.p = 0.617274392079;
    msg.q = 0.557209550798;
    msg.r = 0.703449525395;
    msg.svx = 0.115711938981;
    msg.svy = 0.624268656612;
    msg.svz = 0.604626331615;

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
    msg.setTimeStamp(0.597561359071);
    msg.setSource(44031U);
    msg.setSourceEntity(230U);
    msg.setDestination(4976U);
    msg.setDestinationEntity(111U);
    msg.plan_id.assign("MUHGGDQPDFVAFHPGVJHLJTEIYKFPSRZKBUMFPTRZCSLORYGZTNEIDVOMXSJBLZZPPDNPJJJDWZLJBAYBVFXCQNCRWRQOVBKXHDOMZLNOXPEXUICEJZTUXQNZBUKDSCAOGNSIVNWATHODSWWPVWKFECYTHECQEQRIYSVAMAZHUOCMUKHLIWOGMNYFGQWQYNOFNMLERYXKRSYPREXKMCLSWD");
    msg.type = 61U;
    msg.properties = 130U;
    msg.durations.assign("UURWLHSOSSNXAHANTADVQFTFTVKBHLGJOBTFCVGPLIMDANFWZMMHZHEQ");
    msg.distances.assign("ARORXKZIWJIEWNLOYFOXYGOFHLLWQEKJMDUZVEHKGKXNPXPJBWVWFIGDZQAAEQMFKZXDWMIZTXCBMFTBXYROCWRHOCBNBNPTLVSXPSYPGTMOBEFNJCCBUDIDMTIVARHJPJQUNOBUZJTUNNRSVKPGHWKLVSYVQELCMATSRPCMQIADEJHHSEHVYZEZKCCNAILVBVSKAIYCFYUTJLRPXMOEFFN");
    msg.actions.assign("ZFZHGXBPGVVQOYFHEL");
    msg.fuel.assign("PIEHBLIRZLMORJREMUGPNGPEDMQBHTDTSQIGQWHKJDBS");

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
    msg.setTimeStamp(0.752868266274);
    msg.setSource(23136U);
    msg.setSourceEntity(196U);
    msg.setDestination(56620U);
    msg.setDestinationEntity(161U);
    msg.plan_id.assign("ADHCICQFXCGJMUPTVAENFXDKNIYMMVKXDLZHUUHAPQNTORCSQAJZZWCDCHOSQKHUIIZKKFNZAXBBCLHLPNOEGNOHFQRGDSJEIYPTSRTMHKLVYNJTWUVIMYTHOCOFQRDQBGASDVPMKSJZWEFDEOSGCUAYVYOATDMWXWEXUYMGTPLJRIZJBNNMZBSHPULDTVGWAWJEXZQSSBVGBBZIELREBKFVONERFBKIWKGIL");
    msg.type = 240U;
    msg.properties = 111U;
    msg.durations.assign("CIGGQVVLNIILUZJNZIVYDGSOMCSQKTPHRETCSOMZHWVRMWCSTCXSVEQYDFWBNCBNUOHCURKFKLIVBPLFBMYLJVAHWELTKXHCDKTMRTJJRABYMNHRWQZEQNXUDJIRP");
    msg.distances.assign("NOEYCTRNNRYRVNLQGFCFIZHZJYTUKZQXECLVPJFTVOHTTPOXXGECMMQGJMULPONPLALXLBOISRJSANCHESQZFZWDUKRTPKUZRFBWVAHDRPEQOBUFIKXNUIOYMEXCAJWAGVUEJTOUXASFWVIDCSIYBEYXFBACSBBKCDHSHVBGQLGYMFKPFNRMQBXYARHMSJINQZQJODWWRSWHGHWXPJGVQLNKMMVUPPKJKITZBWDG");
    msg.actions.assign("XEXMAANLFPBBXPUCLVKFILXDJRUMOSPEXTQBKXCZYYIJTYCUVYMJGAXDCEFDEHHKYKODFBOHSYJUGHEBWJZNDETVDPRRBLPSPGAJJNUHZLVNHGR");
    msg.fuel.assign("KGRHGRMTWYNJLANIZKLBRDZCZHFQUNQELIMEM");

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
    msg.setTimeStamp(0.993111500783);
    msg.setSource(7791U);
    msg.setSourceEntity(119U);
    msg.setDestination(48754U);
    msg.setDestinationEntity(49U);
    msg.plan_id.assign("MOQBQQJPRCDKIDJPFVPDSNAYBGIHMMKUXDNSGXAPNPQEEVOEFKTZKRVWYNFJPLLUNFORXRQCHAHDHZXBJLFYTJCHZFUADZEDXELABWRONUPIGVNCOKUGG");
    msg.type = 87U;
    msg.properties = 109U;
    msg.durations.assign("JKXPDRHQQVKGWZHZQWHLLWMUJIJSPCVTSGTWTLFRJTCRGSIVQCZRCPVKFXAANBFOWIJFAPIEIGN");
    msg.distances.assign("EDEUXRTUREPWJYOHNPRUJIKKZGSXTUILUVD");
    msg.actions.assign("THMMQHLVNTKEPLIXUXCAMEONPZYIJIXAZGCLGOKIBJQWIGSLWETEFYUCDFCFKNLPPGQJBYSOKOZHDDWOSYRHMODDHILPPLKUAUZXVQQEWBS");
    msg.fuel.assign("TCRDWSPAMGPZNFVXBEAQPUUHBVMZLMZPPCOUSPGSVIECMNOXRHLFRBSEOWFGQBIJXOTYYWLELQOVKWKNVHAXSZPIVEDUBGKCABWYNKBOJFLQROKVUNJCZFJAWSCXUIDJESVMYJMSZUHHUOYGRRLZFWIAXAHTFJFTLYJYRTQEQWFQKMDLGIAHVSWCZBOXURYQIQKNRHETDCHNRBZZUDIGTTLNKYMEEGJTFIKPNAPPGGHODQBVSIDLDJ");

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
    msg.setTimeStamp(0.691529959534);
    msg.setSource(14250U);
    msg.setSourceEntity(178U);
    msg.setDestination(8843U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.952719511791;
    msg.lon = 0.0580928925187;
    msg.depth = 0.233505387678;
    msg.roll = 0.286229351945;
    msg.pitch = 0.146782057326;
    msg.yaw = 0.076236852623;
    msg.rcp_time = 0.196980657189;
    msg.sid.assign("ZZIFVGLYUJPPQXEGVEOYZOWNMTYAMGJDOBUVZBITPHWTTBIFABKDSUIWIMHCFLPKNDMMSOOTJYEGTHYZMDGZSRIDCZYKKIACJQKESLQUNEFBKQVFDLFLPNREHGMGRXNXAPSWGCUBRRHJVKMZAECHEWOYRUPNRQHDUCZQKRHJCLVGWKXXQJYIHCXLTJHSUJVGASFOWBTLMAFBTXR");
    msg.s_type = 96U;

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
    msg.setTimeStamp(0.917498248061);
    msg.setSource(55209U);
    msg.setSourceEntity(58U);
    msg.setDestination(57435U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.485017516086;
    msg.lon = 0.0495030244293;
    msg.depth = 0.826885017256;
    msg.roll = 0.926775335244;
    msg.pitch = 0.775999067457;
    msg.yaw = 0.0517199235282;
    msg.rcp_time = 0.486307603937;
    msg.sid.assign("PFHNQADRZKQULOQNZRERYTTMZNEJHHVPXNTIRKYFXONLR");
    msg.s_type = 79U;

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
    msg.setTimeStamp(0.927944842321);
    msg.setSource(10046U);
    msg.setSourceEntity(169U);
    msg.setDestination(61528U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.389815050617;
    msg.lon = 0.974881422059;
    msg.depth = 0.77543681175;
    msg.roll = 0.717737217741;
    msg.pitch = 0.545234097544;
    msg.yaw = 0.333371403733;
    msg.rcp_time = 0.544021354251;
    msg.sid.assign("PYUUZWCYSYKBLOSVAIXCRXEBXPWXXZATQYLTXCFSYNGIIPFFMRYHGDHAINZLRUSZROAGCCMYRGONHIWLVUNWINEAJKZSDHQRMWBVDZQOBHRWKQWZVFINBFEQVXDKPYMNDPKJERJJEHEPXOVKBJQKMUWAUN");
    msg.s_type = 214U;

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
    msg.setTimeStamp(0.409250556618);
    msg.setSource(55117U);
    msg.setSourceEntity(123U);
    msg.setDestination(51235U);
    msg.setDestinationEntity(41U);
    msg.id.assign("KUDPOOLPYGQYKRKWXBNEQHZIQCFSSHOZAQYFZDTBSEMNIKMLWHNICFEUMXBCHNKNPECQLXLQVXWEWWAWIDOXSZAWHAKLTFTJCLTGVNAAROXBIMYTQBGVGDGCRUYVSSEUPGTKDMOURJRVUEMWDYDGMXACBNUUWPHBOIMFLPNPGCIYSSJUHAVALVJYBVBTIVANTYZOXEJHGZRO");
    msg.sensor_class.assign("RWVCMBZHNXADNIOJVFIGMDXOYDALTHUKQVHCUUHXNRHZSJSQZPLYPGZAVJUBEEEPXFDCRLNRYGTAYSBZGVSTFXT");
    msg.lat = 0.226640225234;
    msg.lon = 0.169006830414;
    msg.alt = 0.535946552613;
    msg.heading = 0.94007198945;
    msg.data.assign("JTNNVCUIHPLYPEXFPKZZGQQZTATINNCOHYPMDJNFKAAYJRDYURRECTOUFHWNQDLJWWPGTAQSAUVAYBBVSQTIPFEBLHOKBRAJGIWIUGSZHEWIBVFOFOIZVGDKOOIEECPUCDNCCMRLMTYJEKSGCRXKOAIGRZNCVBDMQMGHJSWHULAVQWJXXGZLXMTBPDBFSLYEYLXXEYSZVWSNKQXONMOZUTJHYQJZDCMRXBSELKWUXVMKGMW");

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
    msg.setTimeStamp(0.922356460172);
    msg.setSource(5197U);
    msg.setSourceEntity(223U);
    msg.setDestination(8026U);
    msg.setDestinationEntity(145U);
    msg.id.assign("JLNTOAKUOGXQAOOYIXFVTAD");
    msg.sensor_class.assign("RXRLONGJIXLMFXSHGFLEAIBTURQTCOVPDEBLLLLBXWVFCDMWTSGZFPGUIRZKJKMOLURVYFUAZMXJVEQCXFZGUYUMKCLTQBXEEQUXRMEQDOQF");
    msg.lat = 0.653469061261;
    msg.lon = 0.756000327837;
    msg.alt = 0.260460658938;
    msg.heading = 0.479275332117;
    msg.data.assign("XCWNEMNZDZIHIEKQBCMGGTYANSNAZFIKMKXSAXIPHCCHUKJRIOSOEEQRZLBRFXQMRPOQEWRJPERTSBOBYVIYOJDLXRDSEEVGMFNUUCWQHDMVBRHFNLOXOBSYNPXFDBMVALKOFDHJRYG");

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
    msg.setTimeStamp(0.0083480331891);
    msg.setSource(3102U);
    msg.setSourceEntity(21U);
    msg.setDestination(54523U);
    msg.setDestinationEntity(253U);
    msg.id.assign("JGHXLCPDXNEYCDINIEXJGPPKGBOSBDJTCFIYFVRKUZTMDTSKLNPNXJEVPWWQMZYJIMVGURBQWRINDGLNPSZBJUWBJIQYMNEJWIMOXTQTTQXXHSCQSALYPLXRDURFFG");
    msg.sensor_class.assign("QRWDBUYIMZRYIEPGXHLZNRUACTEOSAPGUEDHZFGIYHWCHUVJBCYAAMRAMUDMGNVAIWGANYFBXPNFIQKKDVEBCZJNNFRWULZVHTPZKDVQNTMOILSJSCRQXKLGSVGYWPYMNBDEKDEFFLDQWRAJOXOPPVQSZDEFJKOYQVTHWRUPXXQXNFZGWEGTJKCUJLLSCTTCHKLXYJMZCRAJTWISIIBMXSFXOHPONKQODVMO");
    msg.lat = 0.455845340968;
    msg.lon = 0.554854826202;
    msg.alt = 0.956300884149;
    msg.heading = 0.381109420134;
    msg.data.assign("DUMVJDIYCTBSMYHEUQCWISPRXGEBMKUTXYOLNETNFAEBDYTNMHFEMHHQLRBJZIJMKWFWACAQGDCUIGFBRRPESXXBMGEZFXUDZFLZTLIWORRPMGLFPVUXNAXRQNVRAMIYAUCEOGUEJDJKATZQUSQJPGCZHJNAYKSVLPDJLPGCJOZSSYLTCPBHFVRIAVBLDOJDPOZGWYXVAHFQOSIWWGV");

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
    msg.setTimeStamp(0.465647078881);
    msg.setSource(57531U);
    msg.setSourceEntity(123U);
    msg.setDestination(22254U);
    msg.setDestinationEntity(8U);
    msg.id.assign("HGTPIFDVRETCJZAXDBHCQCNZSCUKWOIUVBUFXLRUULDMSHKYKXXISNSNWGWETZKBUVYBFULKANTBUPJXSEDCPQATXNANDKR");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GJQOYXIUQSKDXCXOEWLDMQUPCDLAAWJUQMRRJATWFILBHSLSIIZPALETLXXFUABSXZLYGGZVFDOFTYIKVTTEIUPKWHCBNGCVCGQYSPFTZVSS");
    tmp_msg_0.feature_type = 176U;
    tmp_msg_0.rgb_red = 163U;
    tmp_msg_0.rgb_green = 151U;
    tmp_msg_0.rgb_blue = 150U;
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.438782121327);
    msg.setSource(42903U);
    msg.setSourceEntity(122U);
    msg.setDestination(49629U);
    msg.setDestinationEntity(235U);
    msg.id.assign("KONHKFPTTROBMMXZDNHWEOITFBBWQQBGGDXHFURQCQMZUZGXOWYIZMFNICIRNTAUXSUHPVOUOVCNESPGKVTMSDVEJGUYCZJLYWRUTBEKHEDYYAGNCCVAWHPJESMLAQLSHRUHFBKFPDQJGOSYKAXWWYHGQZQLNZRAWAFLOIVZIBOQSDSCMKEISWCTBJXVYCDZIAVHGAUMRPXNJFLGSEXNXRATXJKCTWYIDLMMRPKPBVQKJFP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("EZBSRUMKHUPDIYPUFRYIXJOKZVYAQYCGJEJUULTPAOMCQGGCLHZGEJDTVDMSRQKOESAXWZVOMG");
    tmp_msg_0.feature_type = 219U;
    tmp_msg_0.rgb_red = 103U;
    tmp_msg_0.rgb_green = 235U;
    tmp_msg_0.rgb_blue = 70U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.234152970014;
    tmp_tmp_msg_0_0.lon = 0.40514999961;
    tmp_tmp_msg_0_0.alt = 0.568593205945;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.765257233567);
    msg.setSource(3960U);
    msg.setSourceEntity(100U);
    msg.setDestination(23990U);
    msg.setDestinationEntity(251U);
    msg.id.assign("VTCMELCGKZYVWFGCFNYHIMZJUKQGPTPQKFXNSUVNPLOCKDSKPXMZDSQCVUYBHAPEOPDYWHZHVUSSABTMZYLQWEDQXTLTCLEAQMTBJLRWXVLZIJXNHTKRKIMJJVKBHMINXWPIOUWAHEIFSHFTEJAPYYXTHANQDLIOSJWAQNUOSOXBSSLDQMGFWBLBVRQDMAZOBEVFRDOMEGROFGIIZXEWBYHFJRJJFCCAZRIZOWP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GVPUNMJERPSSOWPGYXVVLFVSYJPTTOHHETTKFXYYDZYQIAXGIDQWROBNVTVRPKIGIAJNLEDGOLFLQWQBBRYGUUMOWEWSQQFZAMXQDTMZSKNPOAJOOIXWTLHJFUANNMPKSVCEDUIHKBPCYJXTLKOKXRHKDICKQEMNRGZACXNJEWSTBHNAWUQIFDLAJD");
    tmp_msg_0.feature_type = 191U;
    tmp_msg_0.rgb_red = 216U;
    tmp_msg_0.rgb_green = 221U;
    tmp_msg_0.rgb_blue = 41U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0220694965421;
    tmp_tmp_msg_0_0.lon = 0.111078332876;
    tmp_tmp_msg_0_0.alt = 0.861546182878;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.973863985493);
    msg.setSource(29630U);
    msg.setSourceEntity(153U);
    msg.setDestination(41378U);
    msg.setDestinationEntity(168U);
    msg.id.assign("SFYCIDBJNSHJAZUEOYETYKDBBYTWDFFOUWTQHIWC");
    msg.feature_type = 59U;
    msg.rgb_red = 210U;
    msg.rgb_green = 26U;
    msg.rgb_blue = 85U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.101527568414;
    tmp_msg_0.lon = 0.676360859482;
    tmp_msg_0.alt = 0.265069588946;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0697439834671);
    msg.setSource(34512U);
    msg.setSourceEntity(63U);
    msg.setDestination(36531U);
    msg.setDestinationEntity(76U);
    msg.id.assign("TZIPBFOBCCBXTPVLGOMSMNWKEAHTHDUQRFTLWFHZCAQGFUSNQCGSEBBYCWHJXZGIDFSHIPQYVONYQSBCNIAJ");
    msg.feature_type = 203U;
    msg.rgb_red = 225U;
    msg.rgb_green = 126U;
    msg.rgb_blue = 247U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.496209080872;
    tmp_msg_0.lon = 0.541651445409;
    tmp_msg_0.alt = 0.772171292728;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.909958400718);
    msg.setSource(37398U);
    msg.setSourceEntity(77U);
    msg.setDestination(20309U);
    msg.setDestinationEntity(25U);
    msg.id.assign("QOPJBFWWOJWTSCZWZLJSWGQRZDTYRDXYAZXTIVQURLTMKOCQRLVLFHMETBJCQRXNGLGGKENFHOANUOABSIXHTIMYIZBBDWSJGWKRNDYXBZPVYEJZBFPOUPAQDUKLHEFDMKQHPPARURPLMSTDACSOMHFNGEUIRHFBWMJAVPCIYISKVMNHTACXFXXTXFUGVQQNPVFUODYCEGVHYAZKNHEJKNVBXVDRLPMCAD");
    msg.feature_type = 75U;
    msg.rgb_red = 7U;
    msg.rgb_green = 241U;
    msg.rgb_blue = 126U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.575533263675;
    tmp_msg_0.lon = 0.737977540444;
    tmp_msg_0.alt = 0.865241874267;
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
    msg.setTimeStamp(0.474878665811);
    msg.setSource(48299U);
    msg.setSourceEntity(13U);
    msg.setDestination(20858U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.463328419052;
    msg.lon = 0.231241994928;
    msg.alt = 0.418011553509;

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
    msg.setTimeStamp(0.584665213423);
    msg.setSource(32474U);
    msg.setSourceEntity(225U);
    msg.setDestination(15699U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.866277027955;
    msg.lon = 0.769050505239;
    msg.alt = 0.334986430169;

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
    msg.setTimeStamp(0.932903804434);
    msg.setSource(19228U);
    msg.setSourceEntity(56U);
    msg.setDestination(6903U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.28842794773;
    msg.lon = 0.862365773891;
    msg.alt = 0.557288541447;

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
    msg.setTimeStamp(0.640476566006);
    msg.setSource(64705U);
    msg.setSourceEntity(30U);
    msg.setDestination(13734U);
    msg.setDestinationEntity(102U);
    msg.type = 117U;
    msg.id.assign("WEREDTWJNWBDWAPLKCHSIQSR");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 47089U;
    tmp_msg_0.off_x = 0.747099832321;
    tmp_msg_0.off_y = 0.669589914245;
    tmp_msg_0.off_z = 0.0169467933041;
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
    msg.setTimeStamp(0.277104783455);
    msg.setSource(45220U);
    msg.setSourceEntity(68U);
    msg.setDestination(2131U);
    msg.setDestinationEntity(244U);
    msg.type = 8U;
    msg.id.assign("AEIECFWHGOOAAFNO");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 103U;
    tmp_msg_0.reason = 245U;
    tmp_msg_0.value = 0.653815835766;
    tmp_msg_0.timestep = 0.151790408266;
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
    msg.setTimeStamp(0.0425110939083);
    msg.setSource(709U);
    msg.setSourceEntity(174U);
    msg.setDestination(4730U);
    msg.setDestinationEntity(233U);
    msg.type = 25U;
    msg.id.assign("SJUTYLKCRDMOLMHPIZTNNEMAYXICHLUPSLBESQOOJFADVSXZVOACYEICFGJOBZPUDROWGWXLEHISQRQWBFOMINTBETYHHJENCSPQZDQWMVZBQYKNHI");
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("UELWCFCKDRIBATBLOJSWQFDVMXENDEGSKCCZWAMAOLQIMPGFNEMHLTGUXRLYTZBISOMTJCK");
    tmp_msg_0.action = 192U;
    tmp_msg_0.grouplist.assign("UHLFDHTKAUHWFHBCEUWCKQHBMMXKXUGEMQPMKODPYDAOPUXLYEZYJRTCSMNBTAAVBILIARFVCYZVMCFWJJVTNSCKNNFIDQUMZEYGVQXYUZWHDTWUVQNRFMXSNXHRONTPRIDSTPPXIBWVOSTLISOBJXJKIMNNGZJOCTLSOFBRRCNVQYEGLRJGZEXEASCLGWFWQBCPYJVXWRQIGA");
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
    msg.setTimeStamp(0.566214475651);
    msg.setSource(30406U);
    msg.setSourceEntity(205U);
    msg.setDestination(43952U);
    msg.setDestinationEntity(249U);
    msg.localname.assign("HLXIFPQVKMMWTSAZPMLKMBKESKZOKOUFJCTLEXZAEXLOSKHDJJPRFUYEJPVMHGJLRUFGVNMUDNLSBSOXXJIBHQBKQTDASHBWICAPJTRGDOAAMXYVITRDWKOXGLYWZICNCIYWXKFXFQGNNBBECURRZUZDPYJQUPRVTTYHFOAGDSUQGORNPFYSLAZIQWJMYWGNDSEYLFE");

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
    msg.setTimeStamp(0.177395591285);
    msg.setSource(44478U);
    msg.setSourceEntity(207U);
    msg.setDestination(31126U);
    msg.setDestinationEntity(195U);
    msg.localname.assign("SDLPYOCTZSATLUQVBIZUORJONOQRMECYKFJPXPWHNNOXBPGQFKNMEFSQBLQBUULCWOWSHQBDTJCHXJGRES");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VHETIBQNGASIWSNDYMDRXMYMWYHMIQNWILVZMCUHKPRYLYZJPPUZLZOPPYSAJCLQAOHLZKITMLSOLFSQBEHJOAXYHBDTUDQAKQIWSCNDLFSXHBXTBTXQOEMNLSUFROYGYIDHFWDVETOCRNVVTRIDZEOBXGCKVGNP");
    tmp_msg_0.sys_type = 224U;
    tmp_msg_0.owner = 36348U;
    tmp_msg_0.lat = 0.661512090924;
    tmp_msg_0.lon = 0.601989260983;
    tmp_msg_0.height = 0.301753097087;
    tmp_msg_0.services.assign("VNHKDIJWFTSUZWQXXNUOKGBPJQDZZO");
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
    msg.setTimeStamp(0.640394735506);
    msg.setSource(51448U);
    msg.setSourceEntity(221U);
    msg.setDestination(40561U);
    msg.setDestinationEntity(39U);
    msg.localname.assign("PKZYUAVHTLCUTKJRAJUWLBXHSYIKODZOPEUIKBAPRCYDGXF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TAHTYRSQWBNMSMFZHDJQUIMLEDNJEECOSKMGFGFOWBOOUSWFNVTWBUNTAIMHLLZTYPVWVVXTHUYAQZRDBQLQXHFZEEXRXSFPZKMOZFDKCNVDIXAFRKKCZYVRAHNEGITOBUKJDAJDJJNQGNRZHTKZRPKGOYBYZKCUUBIAYQWDHICJCLWIC");
    tmp_msg_0.sys_type = 194U;
    tmp_msg_0.owner = 51477U;
    tmp_msg_0.lat = 0.719557007038;
    tmp_msg_0.lon = 0.6053392665;
    tmp_msg_0.height = 0.105124924595;
    tmp_msg_0.services.assign("HUIXRONKCGNPXGOPDHXHUNTBMQRCZRRSUAATVRCBAEMWWCHDKUAMFYJJISXSYFEWZYPKIZYYXJIZFGOHSKETJOLDLTNWQQFYQVMLWJTGJWMHHUHMWFAXRARFLFQSGD");
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
    msg.setTimeStamp(0.456983631968);
    msg.setSource(36558U);
    msg.setSourceEntity(208U);
    msg.setDestination(737U);
    msg.setDestinationEntity(161U);
    msg.timeline.assign("PXIHYOOBLRPARWEJETFVJKCSX");
    msg.predicate.assign("HILJOJJISGCVGXUEWOIOWUNHCIAQMEQKWPUWTBFVIDNBIYWHIOQWCCNRJRYRKUFJQOSZCLETMBYYNYZZBHEEPFSKCAFXSKFSDTTHGBQPXQSYZCEPBPJYPNTZGDXHVXVHFZLEAAPUIMQUNFOLPFQNDADUBKTRWOMCJDTAHDOVGGSXZKWRMZLMBFGCUITEVNARALYATLWBZILVKNLSDYQGAMSZHMVERDJBRKUVGFTCYHKOLEWODNRXGSP");
    msg.attributes.assign("BWHUQMSECJCNJJGWVMKRMLYKUBCBPOXAEWXEXFIFZAMTZJVXQHAXTTLEIYQNVKLSOJEBAMKRISBGGFPRVKPHGSZSNDPTBFRCVNWDWXGGDSPJAEBCITTNQXVKEPDDWPBVAYZQNRUDUKFLAPMECQODCXGXPEWTWFKLHZLGDAYLNMOYRAHZFWRHNYIGIOFUKBXTLSQVSYZJIDCMAFOHULCTPIHRJORHHUUICIEYFOYMQQYKZD");

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
    msg.setTimeStamp(0.304857797756);
    msg.setSource(57463U);
    msg.setSourceEntity(198U);
    msg.setDestination(12219U);
    msg.setDestinationEntity(79U);
    msg.timeline.assign("GCEHLHBQDLKOIFTYSZWAMLINBGFOYSHEQEKRIWYQBKZOWYMPVBAUSOURLFIDNUCGMBYEINRTXJRXIOHXMBEJQCLHVXFFVJOGBWPUTTSRDVKRPAOEWJF");
    msg.predicate.assign("NIZWFUNMPHQTOLLQYDCDLHDECROBBOXWYOIQVQJRBEPJJEEINCBSVMKCAHQLTTLFPHMXFDIPKISMWRHWLXZXRBOXC");
    msg.attributes.assign("ZDREJHLWPHAMKVZWQULOPYXXIAEFEDENBVPCSHIDMFIKHHYEUUUPCMRJDKRBBDKJMAMSFBRCZSEOJGGJUVNYKZCFSTDZIQVTWBIVRYOVEPIFUVTSZDIDMKXWCLQCXFHZWYONAEXLHTDLPGHRYEPBWKQCOFGFCGKAFXKVQAQGINUSOITRQJMFLSYZTRVNTBMRGJBOKOEWDCJANTSMUQURXPLLNSLSUWAJBNZWGAOXYTXJNZIGMHOQA");

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
    msg.setTimeStamp(0.678778077213);
    msg.setSource(64968U);
    msg.setSourceEntity(13U);
    msg.setDestination(24477U);
    msg.setDestinationEntity(229U);
    msg.timeline.assign("LEKQAFEMFICMYEVDYJGBETLRZMUKODCYWKEPWGXTAFJHUQUKVFZRDFBUYVCOIJWFMSNBELXIINAHSPXPETXXOZQDAYRLHBKGSBUIHAWJFYMWKBDLHHJGQJIRRIXLFOLIQLCZKAEAY");
    msg.predicate.assign("ILZHWZHYBPJVDOSWEOSLRUECVPSZQDYSRMJCZRWXZXGZMSPWNAESIDMJUKDVTKBSEBNUWNKGYNKWMJGLNGIQTBXGHKOEOPZAPJWWJJQPUKBRXTAZDGGKAIQHFQUVJLBDPUHLDFFKGDYOCASEFACCYQGHQNFXW");
    msg.attributes.assign("OQHJHGCCODGIJPNMWFXBVEKKWCOZWUVHGZWEMQHJKLZMUUQPHDAXMHXDQLYFNLOCPLISINNCPHRNMCYNWVAOUWMTKSSLQYNQEKUOZUBYLP");

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
    msg.setTimeStamp(0.189047808157);
    msg.setSource(20341U);
    msg.setSourceEntity(178U);
    msg.setDestination(44581U);
    msg.setDestinationEntity(46U);
    msg.command = 166U;
    msg.goal_id.assign("MCWWLOEZCZLACODGYJGPEVAHKPYWNTBUWSNGPDDTHUXNELOVAKQYCEPBRIRSSEFLJMFKKFTIGVAEOMPMSAESRBZGULNTFOKBCDVIQRBFWTDZUXSMXYCXMKVQIDRXPRYHRCPDWGACCQQJSOUHIYUJYQSNLIGOIILNSNJXWJXFNJYDUP");
    msg.goal_xml.assign("IETRBELHSBCBICSWQNVRYEZFNENEJOLIDYOJAPJMINQYHOXMSBJGNQGUMKBSVNMGOGDGXJRTWWYFFAKTQTUSBRXTZQFVOCPUAHLUHBZFVJUHJGGLMMTJLNCNUUDCAXHKPJDFQDWUDVSETJZRYXIWZQK");

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
    msg.setTimeStamp(0.83895420328);
    msg.setSource(10605U);
    msg.setSourceEntity(235U);
    msg.setDestination(53576U);
    msg.setDestinationEntity(214U);
    msg.command = 83U;
    msg.goal_id.assign("IOEXPVVURGAJNPKCFJKXEBKPUWMHLMAWJQJFFUBTISWVFVYNCYGSQNMAWDYJKVQDWDWHOZYZECLICITHBICSOJTSYESFNLZZXLFSMSTDFQJTVPZUZPIRNRHRKJHZYUDPDOSRCLNTRUWRQGLEMXP");
    msg.goal_xml.assign("OMNQILGLDXDTHARZBRBQACFVFIHKKCNYMMICLPMFRVMJKHTSVCTNBELMIDAZPQXKEWPYXEXEKSDDKHNCHFXTLPBNZSSBAMSPTZTRBSESSFJIOOFYFIVJQRLCXYNLOPHTWQBEUJNNPVBBJGEFQAWRWVDJYQDVGZPSPKTVWJUILUYCDKJGUQEMUDOTWXMDHCCYZEOXHKQWGGUIZIURJZGYQVMXTZ");

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
    msg.setTimeStamp(0.954245051786);
    msg.setSource(1935U);
    msg.setSourceEntity(81U);
    msg.setDestination(49703U);
    msg.setDestinationEntity(81U);
    msg.command = 223U;
    msg.goal_id.assign("SHILQVAUTITBFVZLFPLLJUBUEDHQRDGMWXBBBJFXAFEJOXZZVHRTWLMHGNOYYCTVRDTXMVPCMJDTSGYGLTWZCPSECJUNTJYFCOGWXGOYCPCKSMOQRPFJWZDHFEDVBQGWQYEIKXIKYKODQRUQDERS");
    msg.goal_xml.assign("ILHDRNJEHAGKQEZGHUGWUQWCWIXWZMNIYWCAXHEOFQFARAOLDTVYPGDUYXMTNLDRSPSUREONZCIRUHUJKTJYVRZVOFAJRFEXBTFTCOPHXCSTBWGSSPWQAMKQCBTPYHIUVBILQMGHCNJRIDBGWSLMWBXSD");

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
    msg.setTimeStamp(0.0762417531658);
    msg.setSource(62050U);
    msg.setSourceEntity(57U);
    msg.setDestination(47610U);
    msg.setDestinationEntity(20U);
    msg.op = 147U;
    msg.goal_id.assign("NNNIVFTDSXHOUOBPMEJACLMORCRGJEZTTODPPMQXFKIZGFSOLNKSGUWYDLIKBFPSGHBLWFAGAMZDWGDCDQCKLSJWTNBDU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RHVBJCKONEWMCTPUHWSGJDNGAVL");
    tmp_msg_0.predicate.assign("YYNVORNZBROSKIXFJCOPSZQLKIJQPBHUIZGELSGITGZKRNNETMDMEYHWEJXVKRHGWVYIBUXNJUDSUUSLVQEYPKOMLOVVXPJFCOBWFWDBOUHRF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XPLQHREJIAOBPDNDOYBPYVKVPJGQIITZEHKRWTGEWMLAIHMHTBFXDMDCSBCAGGUHZGJFYJQDZKFSLPUNCDFVWQVQOZHLXVKFIAKRRCZJOORFCLPBXRURJIMNFOYZDNMKTUWFYCVXPMXDGTSYLIXGCKQQB");
    tmp_tmp_msg_0_0.attr_type = 128U;
    tmp_tmp_msg_0_0.min.assign("OOIYFTMQLTURLMOIUPDNJQYGOKOVQKIBXYDBSXR");
    tmp_tmp_msg_0_0.max.assign("YZKRUDNQQJCQAJGKCENGBICVKSVTGFJOJYIEBBSHOZFEAWZFNDOYPKCGRRDYTFWJSKFCRHMUPGYAVUHRELAMWNXMCLHYPFDOTXLPKTMEAKBLWXJDTDNVYQCAWRKJIGTVPFRXIBTFCNDLZWHZVJEZUWFFXVZBXLGHTHQIWNQ");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.773270206881);
    msg.setSource(31390U);
    msg.setSourceEntity(222U);
    msg.setDestination(6575U);
    msg.setDestinationEntity(237U);
    msg.op = 180U;
    msg.goal_id.assign("RAJGLEURJKIOMQIHWSCZAQIAJISHPIRUZFKFOAVKQXKUARNZBDWYVUWWPFCLLEVTLCLLXXOWWATSPLHOBYSPZUDUQOUNNTCBNSWTKHEHMYIBRHMNHTCJSEHGGZOVRKBPIKDJVBGDRJMBRICYJFDCPBFALNYTYBEFE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LCNGQDOTQVVKGYJRAQVFNNMIOJMOBJSCPFAKWUMNEYSRVZCXILUZWCYHTDCHBEVDAMWECHHTSTJGDYSPDCUTLIFOFNTVKOUODJPQCZZGUUDIMFZJNRFGXESSZKYOPAABNK");
    tmp_msg_0.predicate.assign("GVCVKKKGMIPTAEH");
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
    msg.setTimeStamp(0.128485363588);
    msg.setSource(6261U);
    msg.setSourceEntity(101U);
    msg.setDestination(44790U);
    msg.setDestinationEntity(13U);
    msg.op = 176U;
    msg.goal_id.assign("JLCTRFDXPRCSOPGVN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OFKALNCMCXPUEXVNSAPNQEVZGOJHPFSEIIHHRNMWOSEAZJMOZOMRSPGNDGAKXQUKHFSPPNEMKLCTBKMCCBDRBIHLDAFDZYRIAQKUIDGNJDZFZFMJNGPFQSAVLUGWJBJXAUYENTTXJRQVODBUSLIVMMWCHCII");
    tmp_msg_0.predicate.assign("GYJGLHVBHRWBFRBCEPYRLJBNDLFMSDSCUXROQTACCULAJLFNJJZUYWUXEGCLRUBOMPZVSCYPKSPZUZENPAAHPXOQGDZTANCPUAMKHYQHQBVKUHPYJMITZOXIIIUJCXESGODMYENEQINWNXPVLNVHBSTXAWEQHLAFNVQKROYKDFGQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TLAIJMJLVARXMWMUAREVRXTYOKFQIFRGFJHCRGRAMNBMWEDBWOUWSXZUJXUKNLIVKOOTPSYSHPEOZDEFNKMZQSTVYTWNQYGQKKDXMRI");
    tmp_tmp_msg_0_0.attr_type = 69U;
    tmp_tmp_msg_0_0.min.assign("CTFVMDSMNGXEQBBFXFHTIZZNZZYLOXNRXSUYPCQSVXVIUAULKHPOMXXICLHGQAMBTKPQZFPPKQIADVREDKUQVIOEUCCFJXJROVUGCSDHUPYHTSJQBREXQCHFYNGLGJDVPOZLOSNBBALYERYWTFZCYYTKYWWLJSBBOBMANUIWKARKKMEAFWVPANKSXMEPTD");
    tmp_tmp_msg_0_0.max.assign("BEFGCZKCBYHEETPUJETVTEJRWXYISYDOQQSSCHHUFRGBOCYJTMAJMZCNTGCHIPBPFAZQGFROBXANDDMJZGHMOZIAVMVNAYYYSEZZXPRKXCQTXVELJMKBUAPBRYIOEDULHSVYMGIFMWCKFDDIDHEFOVJOALWRUPLFXAQVXSAFWWZPLKINJSQQNHLHWICUMNOZMGTEKWQNPTTQXDWYNBPHRFKBRO");
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
    msg.setTimeStamp(0.510607993467);
    msg.setSource(16810U);
    msg.setSourceEntity(76U);
    msg.setDestination(13977U);
    msg.setDestinationEntity(184U);
    msg.name.assign("RPCKMLOYALQDRGYCGKDILBJQZNUPINTZVXSQOQCOEUKTPXFGMWMHWMKBMAOZVXFZOSQUBJDFVAEKNPAHUUQZGSEPBIRSIAYZKCIDERGDTAJMOMVJSUBYRMJPNYJZENPXXHZUWTXTHOVFJDTVFFTBZNALDPJHICLYWFEKHXLKGMWIRJMRY");
    msg.attr_type = 93U;
    msg.min.assign("SGUHLSYVQVZDRDRHKUEQAXKTXQYMCSFURVQHOBWACWKCFPLFAPGSYPNIELPWJWURJTMQIEXMAVRXDRKGLZHTFJTLJUEYPYCK");
    msg.max.assign("LJUAUICBGDAHXZPYGNBSNLXDVECMS");

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
    msg.setTimeStamp(0.837243281867);
    msg.setSource(46737U);
    msg.setSourceEntity(163U);
    msg.setDestination(44100U);
    msg.setDestinationEntity(77U);
    msg.name.assign("LSAAOTQYRZQEMUQJROXAEPHMYETOSKUXPZTBKRSXDKPUNMBKPKIXOVVZFVQNYFNJDDBARKWNDXNWBMAZSCZVYOPCSZQJNCGSTWLMHPEJOFONQFCFKIDHESLHBLFHHFZRVILAENUCRVISYCIUHKIGDYRXWEHMWDOICOHTUBVWUBQXZTCBUBINPDGUWZYVTPGJAGFYWTQRIFASEJPDDPGEYYXQCEGCJOWMXAJGMI");
    msg.attr_type = 241U;
    msg.min.assign("LPQJLWXEOKOYZKQSCNVWKHKBSGESPGZDYYJLOYMPVVUIVFNPDMYQBNXRLFQULGCEXAOGIRFHJJZLVKQAFBIBJYRFCYIEDBKNDGT");
    msg.max.assign("NJPZRCPZRJOVTXWKKYUPJTSYXYRFIJDGYXWOHNYGMQTCVKKFTNPHMEINACXPCPJIWMZEUHALCVHUBIGXHFRKAEOANGAIVWZFCEFFSLOWQZQGYLIMRNQULMUBZXDOLACSQSNTEKIRCYCBZHIGOLHVQJMWLGEOUJDAMKNOBVSWUOJZRCYJTHXEWZLBGHARIDOYPDFXVBFQAETXSUKVTDSBFQGELRDWVUKQSQTIHBRBXJTZDPNAPD");

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
    msg.setTimeStamp(0.264944803792);
    msg.setSource(35945U);
    msg.setSourceEntity(127U);
    msg.setDestination(57046U);
    msg.setDestinationEntity(181U);
    msg.name.assign("TDACKRBUTEJHBTCSFZBUCQEJYEOHRUINAYGNLQKSTYBLYPLQTMMDIABRSPEIZONQHWOIKGIFEHESFQJWBVTFYFWJUVCCYDSCTJEQRJXHIZJPZFLWYTDOPOJVKLQPKABRVIOFMVYXEBDLNAYPNWMGPHLRZFPEDXSRVSKKHVCMUCNVLOOUXHUALTJDWWEIKGWGNZXGNGNWRXXXKLSZBDSATAGOMUBSMVAYWQXMAGFRIHZFDQZPDRPXIUGNZCVH");
    msg.attr_type = 134U;
    msg.min.assign("IPRYFLLSGPTNXIQSALFWAG");
    msg.max.assign("FKZXJNPMHVBLYEAYTKOODIKWHAGXDWHWUDGELFAPANMFQC");

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
    msg.setTimeStamp(0.465615549625);
    msg.setSource(158U);
    msg.setSourceEntity(191U);
    msg.setDestination(34027U);
    msg.setDestinationEntity(12U);
    msg.timeline.assign("JPZMTQQZWCYSEENGMADNTQVJPWXUEONDUPCYXPPBUJXVAKZHMJBNLXEMUDXSGYLIKBVMCYJGTAYTWABDCVTIUUGFCFXRDHMZFOOWYWQNVIHFBMDIGEQKMOLJAKEHDPKVRBYSNKJJLNIILOSQZBCOYAOCFIKSPFNEZZWJIATZNPGYRFHROWBWICXSRZUHQPNLUHVPUVCTXRQDR");
    msg.predicate.assign("THHITNBAKUX");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CSFFSPPBYIPBHTNJTAKXGQQLVKRCMUNHLSUPPLUTMWTVVXZTRJBUOVOSR");
    tmp_msg_0.attr_type = 49U;
    tmp_msg_0.min.assign("VGJZBIFMIOXQTHGOYPQPZBHIWWMNSCFHRRKUCNWVABVFIPCHECYBDVTYLZOJTENAJUVMXOQWIWCYEDTUWXHXH");
    tmp_msg_0.max.assign("ORQCQPRVITSHMGWYEXMBLXJFIRPQTABSGWMAHDXUICTYUHLLSROMQKWPYHHBNGIJJNDVGDOOSLONDAVCHDZJBGOQKMJRYOCFVWBXVJTPFYZIEMZBHVCBNWUWACTKXZSWWATQUYNOBCAOLKKVXSGYPMISAKMWUYNBSPT");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.851352118052);
    msg.setSource(16624U);
    msg.setSourceEntity(9U);
    msg.setDestination(51613U);
    msg.setDestinationEntity(148U);
    msg.timeline.assign("FMISNQYKJBACSTHIZBXTNGLPLOQDZYURHWTOGMREFUXIRIKNSKTLBFYBJEWCXLNUAINRX");
    msg.predicate.assign("DAPIUCEHFACBQILBRDCKOLIYDOIWDYQMVJYXNATQPXFBLNPBVAOZVLEGJHBNDYEJZLSOASKSGWVHMOXCDSOMSFJJKWWUPFXQRUDZCRSRDQXRKTVDRUZIUMWVPYTAHYAPEHUQHHBCBUZFQRVNKGSITKGGVPFKKCLLPCJEBATGYFWZMBGLNCTSRTORJFALJWXWSEVPHZEJMRUNGTMAWXO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("NJOGTIKNTZJZNFHBOPHYBSIKMTACQZMIAEEIUADVFLYQZRWGSQZOLUBYZPVRXQZGTNPMQQODKRCUSQLDCFUQMRXXVTLMLPOXAWOVIFHIYJYCJCNXXWPPXWLJDWDYSFZGVVCOFUEAFRXNNKXDEMTJVBMLAJPUDBEIHYGRCDGHUVUNBRHPSHGSTEKBKZHJEREVWURADAOENWMCLVSYLKCFIPDTSHTRMWPYGAGTHIKMOBKJKQOSFIQUAXJSBNFZ");
    tmp_msg_0.attr_type = 66U;
    tmp_msg_0.min.assign("KUATBLDYXHLEIMVSNCTEFQNALEXPLXRWLWASSRTHMSMBCHYPVILWYFEPVGXZGDBNNFSMRBTEFCGIFHUXYASWFVRPXONBDJGMLOFFSPYPTBRVZRZMWOTPTXCPJQCCIOVSVOEKXGHVNLVBJTSZY");
    tmp_msg_0.max.assign("RAGPOWWXEHJJSOKPISPHEEUPNAWRPMBDUMQRFIJTNJMKBMWCKFTBIGTBULXDUCOZZADTMBCTGEXILGXIKVGKXZCTVAJSWZNHPGZOXHJVDPHYRFUQWQYFJWIIZHFQRNTKZNVOCHELADRXDXTBXSIASNLEFHMPCYMEQCZBKKAPRCNBOJFUBRZQYLODTALQVYUQLIMPYGDMWCDHQINLJNVUKMQSLKFYEXGSZERTFGSUJSNALWC");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.172381411219);
    msg.setSource(30709U);
    msg.setSourceEntity(165U);
    msg.setDestination(7566U);
    msg.setDestinationEntity(150U);
    msg.timeline.assign("SUAYQZCOFGHDTQWHWYERXYIHOHXWNTLRZHKSQMBGDFKLKVXXTBMBQFJNEGJOTACTGVWPJIDNMEDGXRFQHOLSKZPIBCAOLCQVYAUUKFPLDROHDQMRCUQZTVKUXNJVNWHSN");
    msg.predicate.assign("VSVZXZFCBSBASGTTHKCNRGDUSJJLVACBNOGFQDVKVECFLOOYXFH");

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
    msg.setTimeStamp(0.552617827016);
    msg.setSource(28078U);
    msg.setSourceEntity(79U);
    msg.setDestination(45011U);
    msg.setDestinationEntity(117U);
    msg.reactor.assign("TELJYHDEZCKKJBNORWUZUDMDIGEQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TMTYUXJXSQQFORIZHDGNNWVWKVEFVPPRQLBBS");
    tmp_msg_0.predicate.assign("JUYHEWMHCZAUXAGMFVOXWILSOAFXQKYZIQEOWXFKLSWGTCHJJDDUUTBTMPFKKQHDKUPXPOACLDZMLDUEBWJDFHTQIYRIPVIWPBAJGNVCGMUAKYBBYQCBNWMFRZEOHCHJAIIKNNFVYNIVGOYOQMQVSUGSRSEXVAWTRSUCLGKGFTQTIIBX");
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
    msg.setTimeStamp(0.497323403732);
    msg.setSource(30891U);
    msg.setSourceEntity(116U);
    msg.setDestination(54858U);
    msg.setDestinationEntity(208U);
    msg.reactor.assign("TKWNLFUMCYOSYCNHQTPJBSYODLXMVRTNNSNSUJIYIKEUVEMCGBATKZPCZDBFLSSKKDYBLHUWUWISTEQCRACZVBUVQVVBMKCMIJWCOLPVVQXEQZMBFOHTPRPQNXWGZGNDKMMOBLYAGYOYLWRWIJXPFGDIDPIJFEREDZXEPJUNARJQHOTHSY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DXOYPAJHDKFTLVRCZQUYEYRAJLLBYPAZDEADYSBNRIBVMWJUSRMYINSIMFTIOCAKHSFQKCYLZHQWFUXGFQKIEBUNGSZIJSLZXSZSOKXGFBOOREJZYDOPRNHXFXWPRTEOBTBGTGFNULVRWSTTVNJBQDXBCEGBNLFKWVZTHSCIATYGIIGMVJNZMYUDJKQKQPHCJULUPZVFPWUKHKCWCNAVAEJRQEGEE");
    tmp_msg_0.predicate.assign("LPPYJDJGSRGQGXCKBYMQCRCXHNEKYAUHNGANTRVZBJPHMHIK");
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
    msg.setTimeStamp(0.974941063468);
    msg.setSource(1714U);
    msg.setSourceEntity(51U);
    msg.setDestination(15066U);
    msg.setDestinationEntity(36U);
    msg.reactor.assign("CJIOVLXPQEVTMVYREVKYVHPWIQZKFMUJFVWPLNQBCMSLIDWIREMGEUQUOBGCOONWHYTOMCXK");

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
    msg.setTimeStamp(0.913256849885);
    msg.setSource(8436U);
    msg.setSourceEntity(76U);
    msg.setDestination(41279U);
    msg.setDestinationEntity(134U);
    msg.topic.assign("FLDYZGTKAVBMPTNOZTLOISNNIIPJQPKACQWRGDWFJQSIQUERAXHFUOU");
    msg.data.assign("SCXDTBUUXYAXSCYHKYEWGAXTGLKKEZFGXOELGMPYBUKNYYWPXYISJDCVVOHMIDIAPJUCPHIXEUAZXJITRFJALEOEOKVGHMQCHUJDTPRYTZJUCGLZSNJJHEKSVRVMONGLYLMNFBUWGZKJQIWTOCDVRXFDENMUESZHFOBLFFWQRZCSBFSEKIPQARFOKLVQRCBVMZTARMBQPKBNN");

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
    msg.setTimeStamp(0.449577592227);
    msg.setSource(49869U);
    msg.setSourceEntity(162U);
    msg.setDestination(42608U);
    msg.setDestinationEntity(106U);
    msg.topic.assign("LBRJNKTZCGZDEDOUYYJMRLKWRQJFYSEHAFXVUGHJ");
    msg.data.assign("OJZIBXIYHZFRGJDKCEXFXJNTIWTZPZXTYDTPRUALQLBDXWPEZCHDOQYMFQFSEBEXAMVQFSPXSKTIYGUOQVMWMUQVSIHKYGSHSLIYLNUYKVCUXBWMBCNLCBDUCHOHECOZDYFOBLGAWGJQTGFLMFRNGWGSEDKDTVYEGUPAWJVUNQSAKRVZBDCVLN");

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
    msg.setTimeStamp(0.43719938967);
    msg.setSource(26296U);
    msg.setSourceEntity(246U);
    msg.setDestination(9797U);
    msg.setDestinationEntity(254U);
    msg.topic.assign("QJDVHUWELTMKPQNPJWYJVCMTXVCJGWTSFBIVZTDKFJAOGMYKNRPHZXMNWACTCNJVJOHSBRTTCDYUGNARWIPF");
    msg.data.assign("WIXHCYMSAMXYTBAVVCTQFSLVZCDGEDBHAOAYJOAEVJGDRXPKSPSZMQFIWTSXINNVXILMYGRCUTPCINXUTOHDHMVSBAMKCVPORUKQDQIDAHLQQBKJXRNOZAKQBXJGYUWXWLJUNFKSVTAPPFGEEWVFNIDQZDJTBJNZMCDEMOLUWGRKYEFERRSJNRCZRDIFWPIEVOLWBTKOAXUBHBMCUECIYJQGUQHKZYHNSPKGMRLPENOYHZFL");

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
    msg.setTimeStamp(0.614916921209);
    msg.setSource(11672U);
    msg.setSourceEntity(13U);
    msg.setDestination(42785U);
    msg.setDestinationEntity(78U);
    msg.frameid = 205U;
    const char tmp_msg_0[] = {44, -79, -59, -99, -118, -86, -89, 54, 90, 18, -101, 73, 78, 39, -81, -50, -14, -51, -50, 2, -46, -107, -30, -36, -8, -9, 110, -65, -1, -1, -74, 21, 46, 98, 33, 81, 50, 24, -86, 122, 52, -29, 92, 98, 51, -53, -123, 3, -33, 124, -11, -84, 37, -127, 125, -69, -52, -58, 22, -121, -92, -119, -20, 109, 110};
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
    msg.setTimeStamp(0.561208679653);
    msg.setSource(23995U);
    msg.setSourceEntity(20U);
    msg.setDestination(2087U);
    msg.setDestinationEntity(72U);
    msg.frameid = 171U;
    const char tmp_msg_0[] = {-53, 75, 120, 119, -22, -99, -44, -60, -116, -60, -99, 3, 105, -71, -101, 43, 22, -94, -67, 82, -4, 84, -17, 7, 54, -85, 16, -67, -4, -49, -55, 122, 62, 8, 18, 111, -117, 118, 119, -12, -78, 44, -58, -76, -122, 116, -28, -52, -119, -35, 64, 21, 89, 21, 70, 42, -96, 76, -16, 14, -24, -60, -2, -29, 54, 121, -37, 96, 86, -64, -80, 1, -42, -15, 110, -42, -7, 124, -68, -37, 103, 109, -61, -60, -59, 111, -26, 40, 97, 75, 81, -92, 18, 56, 32, 20, -45, -114, 53, -87, -107, 108, 19, 106, 27, -107, -5, 94, 84, 104, 70};
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
    msg.setTimeStamp(0.675686966698);
    msg.setSource(55694U);
    msg.setSourceEntity(184U);
    msg.setDestination(43660U);
    msg.setDestinationEntity(130U);
    msg.frameid = 45U;
    const char tmp_msg_0[] = {80, -120, -96, 90, 13, -120, -74, -18, -2, 33, -97, 103, 59, -59, -116, 50, -75, 14, 0, -73, 95, 115, 22, -10, 43, 91, -97, -49, -13, 91, 13, 15, -80, 31, -91, 76, 4, 86, -2, 71, -97, 74, -65, 113, -116, -5, -58, -5, 47, -56, 97, 98, 89, 117, -112, 84, -92, 112, -112, 99, -69, -48, -107, -16, 84, -57, -61, -101, 126, -86, 124, -56, -61, 117, -91, -93, 95, 101, -96, -45, 95, 93, 56, 46, -91};
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
    msg.setTimeStamp(0.451857770369);
    msg.setSource(34005U);
    msg.setSourceEntity(120U);
    msg.setDestination(11129U);
    msg.setDestinationEntity(182U);
    msg.fps = 10U;
    msg.quality = 193U;
    msg.reps = 225U;
    msg.tsize = 247U;

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
    msg.setTimeStamp(0.431643982218);
    msg.setSource(50400U);
    msg.setSourceEntity(153U);
    msg.setDestination(64090U);
    msg.setDestinationEntity(123U);
    msg.fps = 178U;
    msg.quality = 59U;
    msg.reps = 0U;
    msg.tsize = 187U;

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
    msg.setTimeStamp(0.477786171103);
    msg.setSource(63540U);
    msg.setSourceEntity(68U);
    msg.setDestination(28754U);
    msg.setDestinationEntity(74U);
    msg.fps = 21U;
    msg.quality = 82U;
    msg.reps = 20U;
    msg.tsize = 188U;

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
    msg.setTimeStamp(0.925315355319);
    msg.setSource(23832U);
    msg.setSourceEntity(127U);
    msg.setDestination(54799U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.915071500615;
    msg.lon = 0.245473723592;
    msg.depth = 208U;
    msg.speed = 0.823274496951;
    msg.psi = 0.583763589461;

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
    msg.setTimeStamp(0.162940837795);
    msg.setSource(24047U);
    msg.setSourceEntity(52U);
    msg.setDestination(36258U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.915535546879;
    msg.lon = 0.301102047106;
    msg.depth = 7U;
    msg.speed = 0.30667864872;
    msg.psi = 0.771988011449;

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
    msg.setTimeStamp(0.785068915405);
    msg.setSource(6971U);
    msg.setSourceEntity(58U);
    msg.setDestination(56560U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.647374173688;
    msg.lon = 0.404126142343;
    msg.depth = 196U;
    msg.speed = 0.202130559218;
    msg.psi = 0.138253824989;

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
    msg.setTimeStamp(0.844213960697);
    msg.setSource(24925U);
    msg.setSourceEntity(226U);
    msg.setDestination(9491U);
    msg.setDestinationEntity(10U);
    msg.label.assign("RZSJGZFADYSRDUGVJRNSULYQTYIMXQILPAJQWAHGOYUALLHHHAXHEUETDFAMDSCMRDRODFGQMFPHNJWRRINBJ");
    msg.lat = 0.415979592845;
    msg.lon = 0.569115258446;
    msg.z = 0.832482815238;
    msg.z_units = 18U;
    msg.cog = 0.778496103687;
    msg.sog = 0.842978844836;

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
    msg.setTimeStamp(0.657155113568);
    msg.setSource(28941U);
    msg.setSourceEntity(213U);
    msg.setDestination(13453U);
    msg.setDestinationEntity(93U);
    msg.label.assign("UVXWQHKJTOGTEGAHKMBEYJXZPBMYKAURNQBAMXMB");
    msg.lat = 0.624626819104;
    msg.lon = 0.572355502062;
    msg.z = 0.00815262508388;
    msg.z_units = 223U;
    msg.cog = 0.0790722698027;
    msg.sog = 0.15486891213;

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
    msg.setTimeStamp(0.2112921148);
    msg.setSource(4199U);
    msg.setSourceEntity(55U);
    msg.setDestination(45U);
    msg.setDestinationEntity(113U);
    msg.label.assign("MMAOXHVEWOCJENSHVEPGHUPMJBXNRNBKZJ");
    msg.lat = 0.702943270078;
    msg.lon = 0.0372307256986;
    msg.z = 0.114444210921;
    msg.z_units = 68U;
    msg.cog = 0.518844624265;
    msg.sog = 0.779272656874;

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
    msg.setTimeStamp(0.597571586661);
    msg.setSource(18159U);
    msg.setSourceEntity(41U);
    msg.setDestination(20716U);
    msg.setDestinationEntity(198U);
    msg.name.assign("EQTMEXATAXAEMPWYYBSQCIDUFOSYDSDMEFDGQONJIT");
    msg.value.assign("IBOXQKVURRNJQKFUFVDKGBSWKNSRYQFXSRKDPJVILWIMYPZDZORVTORHUTNEZPFVACQ");

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
    msg.setTimeStamp(0.425269051821);
    msg.setSource(727U);
    msg.setSourceEntity(7U);
    msg.setDestination(43293U);
    msg.setDestinationEntity(21U);
    msg.name.assign("ILWVBDPPZURQOVUHQWFYTDYVXEPLHCDTXJQAHWVMYHUUTIBLWBZSSCKDEMODMKPIAHCYEVSDMIBGVQNCHYJGERZTEUGIQIKMAYJLFKBYUQOWEUCWZLWGRJXFYHONAKEBEVWHBFDTRMLZWIGDTCUZXJOKNICTRJECPKZXPNDFAJMXSJPQRNPEMGKOKFXAAPTZS");
    msg.value.assign("CUMBTUQJYTDWQTWDDVPMXNMSACNOVRLRPPNOLCYYB");

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
    msg.setTimeStamp(0.540602520925);
    msg.setSource(27599U);
    msg.setSourceEntity(219U);
    msg.setDestination(57647U);
    msg.setDestinationEntity(201U);
    msg.name.assign("TDBGBAOXZQUBNJMOBRAYWPNZRSXCHBPKLMLSAVXARELPCTHIIKOLUUHHUAXOMUQMGRPBCTFXSPEDAZZCUXYUV");
    msg.value.assign("MFVNDKZEREJKSZAFY");

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
    msg.setTimeStamp(0.00584351823286);
    msg.setSource(17321U);
    msg.setSourceEntity(179U);
    msg.setDestination(56946U);
    msg.setDestinationEntity(118U);
    msg.name.assign("PAHHQCQNPBGJXJABDYCEMIOYZULHDTCPUFUBMHCEMTUGLWDHDZMXUCESVGZUMKFXAIJJPCEGKYTJGKARPWLHUKKZXYWEBTEXDRDLXOLOVRBXSVL");

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
    msg.setTimeStamp(0.125099416018);
    msg.setSource(35918U);
    msg.setSourceEntity(46U);
    msg.setDestination(60500U);
    msg.setDestinationEntity(199U);
    msg.name.assign("FOEMYHLZGRIIZYQUJMDWNCGYYSPXEOBHQPXCHEIIJSEKXMBJVUMUDSHBRMJFNHDFQZWXATMBYCADINWWRXVCKDVFIPQFDWEUSNTTJOBONXNVCZISAHWAPCPEXAHTFGOLHMZWGEOITCUQMOZPYQWZTZAFJKWRUQPMFPPYUQRKWSRYNA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FRJXAFJVTROITHTPEZRESWVFULFKIVHDLKRFYQYRKNZHGEBUINOOJUKFHBEHZCZIGVFKPUIWBVASRDFMAEYGJZDLUOHRAUYKQDWSRRNA");
    tmp_msg_0.value.assign("OWGDZRJTQGANVRLJTGRIHFPFKTAJNDJWSCKDKBVOKQHHUDTBVQMGHICECGMLOJBXFUWDWXKYHBJCSIYBIHUJAHNKIOPOAHUINEKJCHPSICFXZFVBCGLZXSEYFXAMWAJZRPXOWMRMSZSOBEQURUEDLRMBPIDVTVWRFSLPUXEODNAYQXRYMNIFMVLUIDPGPQSWQQTHEZEDXEPEONYXBYNCBNZRYKUTCTFZJVLKFMSAPKLNAGQGYLCVUOVZM");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.534753059874);
    msg.setSource(9134U);
    msg.setSourceEntity(110U);
    msg.setDestination(17347U);
    msg.setDestinationEntity(169U);
    msg.name.assign("XLITSCHJLZZDHHWUBGNAKYYTOZGEJIGZSYURMKFZMFDGWQQLNYFHAGQRGNPTFADSOQIYLBGZVEKGZJWUGXNOVRTBBLEAYCSPYCNML");

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
    msg.setTimeStamp(0.949599930021);
    msg.setSource(9450U);
    msg.setSourceEntity(247U);
    msg.setDestination(61648U);
    msg.setDestinationEntity(159U);
    msg.name.assign("ONPQGQUZWDENEIGKMTTWRKDGXNNNOOSLCEQHBQXYKRUUIPXICVSYHVABVPFMXRLANHLWURUDOHXYZZNFTYFZDMPZBAAXZWQCTWEJMTGOQBCUJDTMLSICEGNJVFGLSOUUFKWSVKKJHQMVHCBOQTCJXRMVKUVBOTQQEKRZGYRPPZXKJLPAHCEPNZWFLDIBKYVOVDDFPYFWJCLRIMMIFBEMGXBYLYFXITUWGCHRIDSNTABAOAEZRLSWYIAS");
    msg.visibility.assign("USWKZYPYEHOGPSJDQTRFDUQDZHEABXDBYGBGJQJMMLHJWXAWMVTDOVHLGYZPDIALOSMQXAPRTVTRYGQLVGJVPHFFGEFSFCKXOVCQFUQWNXPITSEGIOHRUNAYNHZUJIKDFMECYXIKRZNLKWGKBXUOYUSMNYZTSKIJHZEZXDSWFUJSSFVJBPMPV");
    msg.scope.assign("ZZUSYUVTXLILWAHTXVFRPSVCRTEAWIXRDNFVJQNFAMPJSUQWFTGJNJGMZBCZLTRQTFZLGKMTRKGRDIIHYMBLERPGJBPSJOHQBWEORPPMYO");

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
    msg.setTimeStamp(0.965192403687);
    msg.setSource(24562U);
    msg.setSourceEntity(185U);
    msg.setDestination(7938U);
    msg.setDestinationEntity(134U);
    msg.name.assign("SJHRCEGYXLZFHXBGWBGJHNQRNXKSVUXZJZSSNPZMNHADWEDQOCQABIPUJXFQLTYLFNZPFYDZLBNACTTXWPUTMOPKIUTNHREIBIAKCTORUFDMLIROATDEFVWNGBSKIZMIAQHFKJJYECKEXBFYSBWPHEXCMFSMOYISUPGGJRADHRVCORHBUJVQDVVKKFAOJLCBQSIRYKSJPUWOVCLMTWIQVPY");
    msg.visibility.assign("FYDXXHQNTHBVUVAQSEBWGMXMXNDGZEPQIWMIIZAJLLPVOOFVZPYXJGIAJGRDWKIKHQNQJUTPOCQNLHECBTEWSFZSAHBYHBKUEGTZKJCGJANKOLU");
    msg.scope.assign("DRGZELVQYIPVVCDWDZMITRUTZQBYUDCNWLCLLZVCHXFOMTZISOXGEOHQBJTGSRFTQNSEDBARWYARAOQHVMHBUKZHAYLONWSPKIAWYZNIACVBFCMWSKHXYKCPUQGMUTMPCHYSJQYMEVKKJFTOILEVAJWUNGUPGKGWAKLGJRDUNXOLJFGOIMBMJHLSQA");

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
    msg.setTimeStamp(0.513067440382);
    msg.setSource(10144U);
    msg.setSourceEntity(205U);
    msg.setDestination(13327U);
    msg.setDestinationEntity(11U);
    msg.name.assign("KRJCRNUIBFNGMEPINRPSNFKDQWYAXKQGAQILNOPYKTIZLDIPYZUXFEGBKHVFICCVPVECDOFRWOXRHJSALGFRYGPUMMDRQSMADFHURSTXJOVQTXUAVAZQF");
    msg.visibility.assign("IVWLXWHUFVSKP");
    msg.scope.assign("WVBRDKXNNMXLQFHGXJOYREAPDMZRBTTNBOLHUIRWHTRDCSBOBRFGOJWANIR");

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
    msg.setTimeStamp(0.715731807749);
    msg.setSource(38523U);
    msg.setSourceEntity(253U);
    msg.setDestination(7886U);
    msg.setDestinationEntity(218U);
    msg.name.assign("DZPBOAOVDFAPMCWGYKHZZNBWLIGXCIGHQNCEAXNHWMETVXPACSICMWAEJAMDKXDNCRYVUKGEKZNQSFQQSYFJIMPJSXEXPWRFVWYLOKIBFLMTTUWLZCYI");

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
    msg.setTimeStamp(0.0814171879085);
    msg.setSource(58870U);
    msg.setSourceEntity(214U);
    msg.setDestination(35783U);
    msg.setDestinationEntity(190U);
    msg.name.assign("YMUNJSULHXMWBMDGPHFKVYVML");

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
    msg.setTimeStamp(0.975370945902);
    msg.setSource(39190U);
    msg.setSourceEntity(192U);
    msg.setDestination(20496U);
    msg.setDestinationEntity(21U);
    msg.name.assign("CXWUZVLVYPRDROZLXXJPWDEKQXABZDCKRPFTE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DXOINCJVGLZGXWZUSXCPPXRVMEEOQDCGYDRTUPSHCXEJHWRMMEOCBHJDQPUPTQNDYLYLALEHDQQACYFJETFDVFLYHOIEJOHUNALIKDLQYICWHZFLBBXBERVPBNNGTIKEZWANXTORZBKWKPOGIMPXBAWVUSJHSAOFSFJ");
    tmp_msg_0.value.assign("KASJNMPMIPHCEPDZQNWCOFIIQXWERUCTHIFMVIMWZLTFBVULBPHLUDHMYUJNQJEGSLOGFBXPDXASNEYQDORBJEPDUVINDXYYPUDGJYRSJWGJLKQTMCKLXOGBGVVSGFOSTTTIYTVRWLUXPACYNTADPZCGJNNBEHZTCNLKSLQZKVVFXVPZWWRZMHHFEZHAOFCXBLRUGJIKORCQNBEQFAICAOJYRMYXIWWZSRHOMXSOQDUVBRZATAAFKKKUEGD");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.999001289223);
    msg.setSource(2601U);
    msg.setSourceEntity(242U);
    msg.setDestination(4254U);
    msg.setDestinationEntity(16U);
    msg.name.assign("QXSOBSJDXDFYYXJFJLXDRYSTBJJQGLMCITPYMNUQTSUUJCEXXLOTGQHPPRQZFFKYBAQPGIDAWEKIVAGBWJDWBBZZUMVROTRKMOJKUFCEONSVBMRMMPYQDTVTLMWEWTGKBEYDPIABKWIWGNFVXYNTFUSZOVUZXVGCUMNEHAN");

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
    msg.setTimeStamp(0.711937134401);
    msg.setSource(38632U);
    msg.setSourceEntity(78U);
    msg.setDestination(35156U);
    msg.setDestinationEntity(169U);
    msg.name.assign("RYFAOXDMLN");

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
    msg.setTimeStamp(0.407060246892);
    msg.setSource(1124U);
    msg.setSourceEntity(250U);
    msg.setDestination(3049U);
    msg.setDestinationEntity(112U);
    msg.name.assign("OSDEPKHJGKPWQU");

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
    msg.setTimeStamp(0.775261978206);
    msg.setSource(6610U);
    msg.setSourceEntity(130U);
    msg.setDestination(32893U);
    msg.setDestinationEntity(63U);
    msg.timeout = 2126442494U;

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
    msg.setTimeStamp(0.355170829578);
    msg.setSource(26931U);
    msg.setSourceEntity(3U);
    msg.setDestination(46708U);
    msg.setDestinationEntity(94U);
    msg.timeout = 2102468782U;

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
    msg.setTimeStamp(0.143064463317);
    msg.setSource(33096U);
    msg.setSourceEntity(247U);
    msg.setDestination(24226U);
    msg.setDestinationEntity(28U);
    msg.timeout = 2475372944U;

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
    msg.setTimeStamp(0.145877684413);
    msg.setSource(43194U);
    msg.setSourceEntity(247U);
    msg.setDestination(56925U);
    msg.setDestinationEntity(1U);
    msg.sessid = 640691597U;

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
    msg.setTimeStamp(0.618341014011);
    msg.setSource(24493U);
    msg.setSourceEntity(226U);
    msg.setDestination(644U);
    msg.setDestinationEntity(242U);
    msg.sessid = 4135123677U;

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
    msg.setTimeStamp(0.221324213702);
    msg.setSource(13314U);
    msg.setSourceEntity(149U);
    msg.setDestination(3634U);
    msg.setDestinationEntity(34U);
    msg.sessid = 822628184U;

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
    msg.setTimeStamp(0.426886384071);
    msg.setSource(61862U);
    msg.setSourceEntity(193U);
    msg.setDestination(1871U);
    msg.setDestinationEntity(115U);
    msg.sessid = 165260829U;
    msg.messages.assign("KWXWNISCONJPGFOEYISBDHPGJLERSIGNPGXIUFKWLRJISKIVKXWHXKFKODTFUPMLITXNPUJSAHMLHNYEUSZQBZRFBZDCYTGGMDHPFAAEBQUSYNKFA");

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
    msg.setTimeStamp(0.159054560274);
    msg.setSource(50114U);
    msg.setSourceEntity(116U);
    msg.setDestination(48259U);
    msg.setDestinationEntity(42U);
    msg.sessid = 1262773510U;
    msg.messages.assign("CQFDHZYMQGJCIHJPTKONGFMLDYRYLUOYHBAHILIWGRBMTMTXRGDELSICDGKXXIEXWOFJVHFNZHTQLXKAKODAZYILVRMIUULTPSDEHAVPTPJAXAROJUKYERPHWCZIMNGBCHBVBUWSQENOIYWUJORDVSCMSUQFGNAQSVLCFSUTEKME");

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
    msg.setTimeStamp(0.311977365173);
    msg.setSource(34936U);
    msg.setSourceEntity(74U);
    msg.setDestination(15092U);
    msg.setDestinationEntity(130U);
    msg.sessid = 2950020812U;
    msg.messages.assign("LNGWSFMYXTUYHTDNODFFCVQMZMOBQYOXGFHLDCRRASXHPVMZARBWNHMJZMCYTHGNMUJFDONIIDXAQLOBBQLIEERDQWUTJUXJWSWERRYKFWQUUTPQZASVEJHCUBBBJSSMJINFJAANKIWEMRXDHJOYNAEPKXSQVKLCZHRLDBPVXSCZYCLGVGOHQKPUXQIPPWKOVUMD");

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
    msg.setTimeStamp(0.189606196533);
    msg.setSource(15613U);
    msg.setSourceEntity(51U);
    msg.setDestination(61937U);
    msg.setDestinationEntity(143U);
    msg.sessid = 374234194U;

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
    msg.setTimeStamp(0.192012834453);
    msg.setSource(33496U);
    msg.setSourceEntity(40U);
    msg.setDestination(32882U);
    msg.setDestinationEntity(155U);
    msg.sessid = 992623833U;

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
    msg.setTimeStamp(0.929424594012);
    msg.setSource(55916U);
    msg.setSourceEntity(45U);
    msg.setDestination(13922U);
    msg.setDestinationEntity(107U);
    msg.sessid = 3848889362U;

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
    msg.setTimeStamp(0.338673652484);
    msg.setSource(24023U);
    msg.setSourceEntity(30U);
    msg.setDestination(1942U);
    msg.setDestinationEntity(214U);
    msg.sessid = 1310273462U;
    msg.status = 230U;

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
    msg.setTimeStamp(0.23357062159);
    msg.setSource(23239U);
    msg.setSourceEntity(31U);
    msg.setDestination(29533U);
    msg.setDestinationEntity(136U);
    msg.sessid = 230655116U;
    msg.status = 135U;

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
    msg.setTimeStamp(0.243923472124);
    msg.setSource(26598U);
    msg.setSourceEntity(37U);
    msg.setDestination(19497U);
    msg.setDestinationEntity(48U);
    msg.sessid = 3376987934U;
    msg.status = 153U;

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
    msg.setTimeStamp(0.466230501158);
    msg.setSource(47655U);
    msg.setSourceEntity(71U);
    msg.setDestination(37323U);
    msg.setDestinationEntity(47U);
    msg.name.assign("IHLXNCPRGSUGOMLRVXVTQIIXWLFFGKRLJILPHWZAVEGONYJPCXDQWDTBQPCCKSATCTSDEKVLVAUMYKZEVQRQIQZLATDKRVYRSUOEYVKOZZMEUHMOLASFZFEPPLBNFWCODBGGNUBLWJJBPKMMNXVBNXWUXSAGBJHOCJQWROJUEMYXT");

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
    msg.setTimeStamp(0.497690023959);
    msg.setSource(63754U);
    msg.setSourceEntity(238U);
    msg.setDestination(13730U);
    msg.setDestinationEntity(22U);
    msg.name.assign("ZAQHCRWWRLGYSPYJJYIKHF");

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
    msg.setTimeStamp(0.250059230971);
    msg.setSource(61222U);
    msg.setSourceEntity(111U);
    msg.setDestination(24632U);
    msg.setDestinationEntity(87U);
    msg.name.assign("GLIRYUNNBLWNDSQRKPECXDTOKGCJMMBMAABCFHHKUZIMIMAWPFKABNOLGBVSWBJPNYOQVXLVKOITEWNLYJABEQEOKUZIHZKLZEUESZMJITGHJSSKBQSOXHZDHFLHVAZKFSIZPRWXXYTMWYSVHDTXXMRVIFQMWJYQGXGNHUWCWQCPJJPUCLTFADTNCRJUAUQDRCTDRL");

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
    msg.setTimeStamp(0.157287634541);
    msg.setSource(31547U);
    msg.setSourceEntity(101U);
    msg.setDestination(22861U);
    msg.setDestinationEntity(47U);
    msg.name.assign("KAIZSBNJORZDISWSATLRHBYFCRJGWZUWPCYMQMUSRZWJVSCFWPOSHSDMPBZOKMLJJRTNOUESLJXQJLITLVBHPHHKACNDAIMKMMEOKIXCODJTSILXNHITOFOBFVYFEXYANFADAGPMCRYCMKLBEWABYOGKFNCZ");

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
    msg.setTimeStamp(0.999311905162);
    msg.setSource(30083U);
    msg.setSourceEntity(202U);
    msg.setDestination(50970U);
    msg.setDestinationEntity(108U);
    msg.name.assign("OXGEVCHZFGQAGBNAWIJORDHUKLJJTYLLUQNVQRETLUBZJKOKBQVZZGWUCDPZBRIMGZTWMFWIIWRYQLEQPEHEBJIPCFVTMPBBDLJDSUNVVZDPBXQDJBSTYHFJEAYLWVSXASQPFGRYKFAGSTDIEAXKSJJPOMXRXHNGKSC");

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
    msg.setTimeStamp(0.365682351949);
    msg.setSource(33059U);
    msg.setSourceEntity(127U);
    msg.setDestination(31736U);
    msg.setDestinationEntity(16U);
    msg.name.assign("VZKNTEHLTNDTMNAFMZFNJYACUOK");

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
    msg.setTimeStamp(0.0295103684847);
    msg.setSource(23772U);
    msg.setSourceEntity(252U);
    msg.setDestination(59285U);
    msg.setDestinationEntity(84U);
    msg.type = 211U;
    msg.error.assign("ASPNIUPGTXXDIHACPIYEJBIBMEIHMIZBYCYALZMRQSKONHOGELQDXJDNUQHCWJBYCPEGEYRFMCORZTDKGTTCDUEFTEPPNQRFODVWMBXESWXHKNVQKJAQKTNPXSOPDXOZFFSBWNFUZYGCWUGRKQWGHJOTMDROSMEBHSTUSWQYX");

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
    msg.setTimeStamp(0.483883990092);
    msg.setSource(8866U);
    msg.setSourceEntity(193U);
    msg.setDestination(45756U);
    msg.setDestinationEntity(87U);
    msg.type = 6U;
    msg.error.assign("QAJFPERQFRFJHTWOBWHUABQZGQDAWIEUUTBOADPWGKEXMHLQSXCTMQISPIRRIMKDGDISYTXHPVGVBWDGOINGBZYELCUYUALJBPPWZSNCIGLBVWXQACRHNAZSCDMHECLXLPUNOZUTDXZYQZTETNKQNCCGJXND");

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
    msg.setTimeStamp(0.681959490491);
    msg.setSource(49714U);
    msg.setSourceEntity(86U);
    msg.setDestination(42384U);
    msg.setDestinationEntity(168U);
    msg.type = 24U;
    msg.error.assign("IPBHZWHJOZCYGUEAPTPAOPOEQXHSDNMOKWFHFNRJSICZXIGJEFMJTCSTNSMZVVJLVMIQUYJYJFMXUVMQDCGON");

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
    msg.setTimeStamp(0.366574872616);
    msg.setSource(12086U);
    msg.setSourceEntity(198U);
    msg.setDestination(52832U);
    msg.setDestinationEntity(140U);
    msg.seq = 16092U;
    msg.sys_dst.assign("HRGTCJVBSJPNLLAJXVRYBUTDQMRBUFYGUSUCNTOUQHTPXMYSYDBDOLYP");
    msg.flags = 64U;
    const char tmp_msg_0[] = {-58, 82, 43, -74, 43, -13, -40, 56, -114, 23, 61, -15, -86, 106, 104, 85, 73, -37, 69, -85, -85, -94, 31, 121, -75, -30, 82, 36, 55, -69, -76, 17, 125, -13, -113, -96, -69, -26, -48, -56, 116, 115, 100, -43, 68, 94, -44, 57, -74, -110, 58, -96, -72, 97, -7, 35, 7, -33, 11, -8, 11, -74, 70, 51, -26, -17, 112, -42, -104, 5, 45, -110, 41, 16, -22, -19, 124, -19, 0, 84, -16, -34, -39, 60, -20, 22, -6, 41, 33, 114, -110, -75, 85, 57, -43, -7, -111, -89, 98, -39, -22, -29, 31, 82, -52, -16, -114, -77, -18, -86, 84, 24, -46, -57, -65, -62, -88, -73, -86, -75, 25, 82, 74, 49, -5, 1, -21, -77, 2, 10, 44, -70, -44, 21, -93, -82, -17, -80, 7, 44, -77, 60, 26, 44, 24, 41, 35, -3, -50, -12, 40, 0, -27, 69, 62, -109, 23, 112, -1, -114, 32, 15, -40, 9, 72, 95, -36, -58, -121, 44, -29, -17, 53, -13, 116, -76, 56, 64, -107, -29, -62, -97, -97, -119, -87, 39, -82, 46};
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
    msg.setTimeStamp(0.0777472109733);
    msg.setSource(13905U);
    msg.setSourceEntity(91U);
    msg.setDestination(1413U);
    msg.setDestinationEntity(247U);
    msg.seq = 18913U;
    msg.sys_dst.assign("ZUTSOEFHYTGVRAJDXEJQHZLAFXEIGPYRSSZTEARKFTVPJOS");
    msg.flags = 52U;
    const char tmp_msg_0[] = {-88, -111, 80, -2, -32, 25, 1, -126, 88, 87, -121, 3, 63, 55, 4, 105, -91, -82, -73, -70, 126, 126, 74, -64, -6, 49, 71, 113, -72, 119, -118, -110, -70, 88, -31, 98, -106, -119, 17, -106, -12, 110, 50, 69, -124, 82, -45, -12, 28, 7, 111, -44, 107, -113, -56, 97, -30, 70, -88, 63, -82, -15, 69, 106, 65, -58, 39, 104, -30, -30, 70, 93, -43, 70, 69, -92, -11, 107, -43, -3, -74, -20, 17, 19};
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
    msg.setTimeStamp(0.306277924392);
    msg.setSource(27288U);
    msg.setSourceEntity(93U);
    msg.setDestination(25699U);
    msg.setDestinationEntity(60U);
    msg.seq = 15795U;
    msg.sys_dst.assign("GHOLZVBZFKAOJEPYOPTCTUOXKCYOJCNNRNJNDFVQUWGKWREATIYGUDTDNQMZISPEJPSCVEKHFHGSFWZQHQEQRPVRSYNJWDBGWZILZIYUAFGXEQRQMGBWAOLMXMMAJRPBUQULRQUTRDNBRIVBQXPDUAEOMPFKHFMHLHJULCFCK");
    msg.flags = 32U;
    const char tmp_msg_0[] = {121, -127, -81, -77, 78, 95, -37, 37, 75, 6, 2, -37, -33, 29, 118, -104, 24, 91, -55, 72, 109, 77, 50, -55, -106, -4, -56, 58, 83, -14, 34, 23, 17, -47, -83, -45, -38, -71, 34, 49, 44, -35, -102, -110, 6, -1, 121, -92, -39, 20, 84, -126, 16, -93, 60, 51, 12, -51, -84, -61, -119, 52, -62, 45, -125, -44, 116, 23, 115, -5, -46, 45, 22, 50, 21, -38, 58, -53, -84, -110, -77, -96, -7, 85, 23, -24, -59, -44, -92, 63, 120, -52, -39, -88};
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
    msg.setTimeStamp(0.99044720057);
    msg.setSource(44545U);
    msg.setSourceEntity(39U);
    msg.setDestination(54015U);
    msg.setDestinationEntity(6U);
    msg.sys_src.assign("ZXMECMPYQJRQZKES");
    msg.sys_dst.assign("UZZTUPKHJZNHZWMXOVYFWWXADCDHVAPMJTQPBTLVLDROEOBRWKZLKMIGMKFXBEVCHRJRMFXINUKIZBGLTIONDNOFHYYZUGUHYKDRXRVJCTCWIREWKSSQNSHTWOFHVCAGEEEUSLXXSANGYAQTCEOFMBJBOPJJLSUDYNNADABKPTAZLSVDQWLXCMVOFQQIFQWVCALJQQXPRMGIGIZBMRCKGEPSEZYPPXICNUOEHSFILJ");
    msg.flags = 189U;
    const char tmp_msg_0[] = {62, 97, 2, -12, 22, 3, -40, -75, -94, 64, 45, -109, 65, 28, 49, -73, -39, -109, -2, 111, -77, 7, -24};
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
    msg.setTimeStamp(0.634378663463);
    msg.setSource(52036U);
    msg.setSourceEntity(15U);
    msg.setDestination(35630U);
    msg.setDestinationEntity(136U);
    msg.sys_src.assign("YOMKVKWQMAYZBCUXIGNIEFEBPGJYRTIPLGZOAVPVIQQFIMXUPRFADHWRFLKAQMJGPVETNGCOQZWEY");
    msg.sys_dst.assign("ECHIELGJOMDSBKLRNSWQHNOBVDSHVCGLUENSCTKIKFRQEDBREACBVXUOYLZQVWDXDZLCYSYRARLFHPAKYFHEIUYXMBXTW");
    msg.flags = 206U;
    const char tmp_msg_0[] = {-84, -23, -50, 58, 8, -111, 69, -104, 82, -69, -120, 37, -124, -86, 123, 42, 90, -47, -113, 63, -62, 51, -80, -42, 59, -50, 37, 44, 122, 69, -24, 18, 24, -45, 13, -18, 53, 86, 71, -83, -116, 9, -101, -89, 81, -27, -127, 3, 51, -90, 95, -29, -29, 102, -52, 99, 59, -56, 70, -4, -98, 67, -83, -117, -8, 56, -53, -120, -107, -87, -9, 64, 117, -91, 48, -72, -25, -9, -7, -88, -40, -25, -31, 39, -44, 75, -11, 121, -89, 126, 89, -118, -4, 120, -24, -36, -6, -66, -111, -50, 33, -60, -40, 96, -96, 88, 126, -18, -123, -96, 120, -3, 61, -79, 71, 21, 15, -89, -89, -117, -87, 7, 10, 49, 101, -37, -45, 85, 57, -109, 49, 57, -25, -119, 84, 80, -50, -68, -97, -76, -81, 24, 100, -41, -49, -10, 11, -38, -75};
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
    msg.setTimeStamp(0.137314353647);
    msg.setSource(23777U);
    msg.setSourceEntity(101U);
    msg.setDestination(11539U);
    msg.setDestinationEntity(44U);
    msg.sys_src.assign("EEALUZVGMKSMFZNJKUTGQSVRQNIFTWPHYCFLYAQOKMHKRHREPOFVDMRZTWKHBOQZAWSYLTHABDSYJ");
    msg.sys_dst.assign("PDVDZKFHKXLTJUUVFNROWRPYHMWGXVTDCZBBHQWEJCDPFNSZKIKIFLUHXCWZEXVONSTEAVQEYEZIRXZSFRQKFBVPTDRLMOZNCMBCCGRRFLAQYUNKCZGJJTQDNHUSTPKNVOAIIAOQED");
    msg.flags = 233U;
    const char tmp_msg_0[] = {-56, 63, -52, 21, 18, -99, -77, -19, 24, -47, -49, 39, 34, -44, -112, 22, -112, -108, 3, -27, -33, 108, -81, -110, -113, -111, 33, -116, 113, -83, 119, -122, -109, -126, 59, 39, 13, 112, -111, -53, -13, -103, -99, 20, 75, -105, -15, 67, 126, -64, -64, -11, 25, -105, -11, -26, -63, -24, 5, 67, 118, 50, -11, 117, 48, 57, -1, 29, 58, 70, -108, -126, -78, 53, 90, -125, 60, -77, -85, -112, 29, -112, -11, -75, -91, 0, -128, -41, -102, -93, 120, 108, -71, -49, -76, 36, -90, -53, 7, 34, -69, 69, 26, 105, 62, -34, -10, 17, 122, -3, -32, 14, -31, 104, 50, 1, 73};
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
    msg.setTimeStamp(0.59996839183);
    msg.setSource(5230U);
    msg.setSourceEntity(85U);
    msg.setDestination(29466U);
    msg.setDestinationEntity(46U);
    msg.seq = 14262U;
    msg.value = 209U;
    msg.error.assign("GOUKXUGMGABIILYOYQARQSZMUKCBFBSINOHVQPAAZLKUIPXNMSZMVMGHGQOAHRCEMAUDPJSTFFIDQTQRSTLFYBZTQBZSTAWGZDNXPWJANNMSPFJDIFPVWHANGQCDUTEUDWWJKOVLXRPNVOKVFPYYXVDHETTWRPQEY");

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
    msg.setTimeStamp(0.356737249944);
    msg.setSource(37971U);
    msg.setSourceEntity(145U);
    msg.setDestination(38547U);
    msg.setDestinationEntity(242U);
    msg.seq = 48698U;
    msg.value = 157U;
    msg.error.assign("IHQZITDTUZXYHHYWVPKGAYBEYYVJUZELANYBOKOPXQSHJRPWINLVNDMNDOZGZMSUTAUTTQTNIGOSJMVMIEQJXMNIVKJJFUWRISLADERKZECMQFEWJVSBKBSWOYWWVHOTPGBZBQXLFWGFGRBJPGLRXDTCWFCIUYDMZOKCXXDGSJBOOGA");

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
    msg.setTimeStamp(0.631118794037);
    msg.setSource(8290U);
    msg.setSourceEntity(254U);
    msg.setDestination(18503U);
    msg.setDestinationEntity(223U);
    msg.seq = 489U;
    msg.value = 245U;
    msg.error.assign("LMSSFKVKEXLZDSQDBTNDOUYUW");

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
    msg.setTimeStamp(0.0491507286635);
    msg.setSource(53714U);
    msg.setSourceEntity(136U);
    msg.setDestination(5668U);
    msg.setDestinationEntity(216U);
    msg.seq = 31948U;
    msg.sys.assign("OCQFHTXOAJTASSDYHUHNUDDWAKCHWASYAKJLSPJJHIOILDKPDAFIJUCKHHZKOBSWRNBHLXIECCNFFYEESQRXTNPRVYVJGNOLDMDEAXRHWWNDBJQMUQOCBYKXPMKGF");
    msg.value = 0.711600579672;

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
    msg.setTimeStamp(0.308063317189);
    msg.setSource(39142U);
    msg.setSourceEntity(223U);
    msg.setDestination(2582U);
    msg.setDestinationEntity(216U);
    msg.seq = 28435U;
    msg.sys.assign("XXGENBWBLUAMCVSGBUWMKRTCMMQPROPXAQRCQPNTCZYR");
    msg.value = 0.571417599079;

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
    msg.setTimeStamp(0.572080625303);
    msg.setSource(14729U);
    msg.setSourceEntity(176U);
    msg.setDestination(50639U);
    msg.setDestinationEntity(121U);
    msg.seq = 63460U;
    msg.sys.assign("RHMDPSCQRXPEHFIWHVCFDLYCMPCOSNBKQRJAMGFSPKVHJFGQXMWRKBOCEOBTNNPWHLQBBEAOMAXLTPUXPLOUBGXSJDSKUWLYAIZKNIVXZAQIJLQGZYUXAWNDPKVVREUSUKWUWZKHIWPFJATOTXTY");
    msg.value = 0.29951574513;

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
    msg.setTimeStamp(0.721790654688);
    msg.setSource(20621U);
    msg.setSourceEntity(241U);
    msg.setDestination(9897U);
    msg.setDestinationEntity(189U);
    msg.action = 80U;
    msg.longain = 0.857791765124;
    msg.latgain = 0.485483376335;
    msg.bondthick = 4095674565U;
    msg.leadgain = 0.301739360357;
    msg.deconflgain = 0.526487962708;

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
    msg.setTimeStamp(0.40964683816);
    msg.setSource(64843U);
    msg.setSourceEntity(121U);
    msg.setDestination(27530U);
    msg.setDestinationEntity(249U);
    msg.action = 231U;
    msg.longain = 0.763569090979;
    msg.latgain = 0.304574634957;
    msg.bondthick = 3297118878U;
    msg.leadgain = 0.661018613742;
    msg.deconflgain = 0.888152294579;

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
    msg.setTimeStamp(0.700109028746);
    msg.setSource(25114U);
    msg.setSourceEntity(57U);
    msg.setDestination(51192U);
    msg.setDestinationEntity(182U);
    msg.action = 119U;
    msg.longain = 0.894120038809;
    msg.latgain = 0.0799660517359;
    msg.bondthick = 3673973836U;
    msg.leadgain = 0.679490213406;
    msg.deconflgain = 0.557691176067;

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
    msg.setTimeStamp(0.60472609119);
    msg.setSource(24965U);
    msg.setSourceEntity(249U);
    msg.setDestination(50026U);
    msg.setDestinationEntity(171U);
    msg.err_mean = 0.204751443064;
    msg.dist_min_abs = 0.04311314294;
    msg.dist_min_mean = 0.698821510135;

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
    msg.setTimeStamp(0.291986188555);
    msg.setSource(65332U);
    msg.setSourceEntity(33U);
    msg.setDestination(37283U);
    msg.setDestinationEntity(162U);
    msg.err_mean = 0.226230344478;
    msg.dist_min_abs = 0.935381580044;
    msg.dist_min_mean = 0.77319712255;

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
    msg.setTimeStamp(0.766399170702);
    msg.setSource(29232U);
    msg.setSourceEntity(115U);
    msg.setDestination(52245U);
    msg.setDestinationEntity(27U);
    msg.err_mean = 0.208120327308;
    msg.dist_min_abs = 0.791166830151;
    msg.dist_min_mean = 0.334821449243;

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
    msg.setTimeStamp(0.408819652618);
    msg.setSource(14693U);
    msg.setSourceEntity(129U);
    msg.setDestination(27687U);
    msg.setDestinationEntity(112U);
    msg.action = 154U;
    msg.lon_gain = 0.708223530326;
    msg.lat_gain = 0.653686087222;
    msg.bond_thick = 0.942330025767;
    msg.lead_gain = 0.343639093398;
    msg.deconfl_gain = 0.99705161365;
    msg.accel_switch_gain = 0.591415501338;
    msg.safe_dist = 0.215930807508;
    msg.deconflict_offset = 0.387542456494;
    msg.accel_safe_margin = 0.237656882703;
    msg.accel_lim_x = 0.627352120121;

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
    msg.setTimeStamp(0.546975604219);
    msg.setSource(34285U);
    msg.setSourceEntity(254U);
    msg.setDestination(47842U);
    msg.setDestinationEntity(66U);
    msg.action = 86U;
    msg.lon_gain = 0.901149873135;
    msg.lat_gain = 0.0845457168162;
    msg.bond_thick = 0.0907873925229;
    msg.lead_gain = 0.715338976301;
    msg.deconfl_gain = 0.233580623768;
    msg.accel_switch_gain = 0.824565834216;
    msg.safe_dist = 0.817030006983;
    msg.deconflict_offset = 0.147254613764;
    msg.accel_safe_margin = 0.551931635805;
    msg.accel_lim_x = 0.0493912874195;

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
    msg.setTimeStamp(0.566392413989);
    msg.setSource(27962U);
    msg.setSourceEntity(105U);
    msg.setDestination(54386U);
    msg.setDestinationEntity(66U);
    msg.action = 96U;
    msg.lon_gain = 0.23340758084;
    msg.lat_gain = 0.182124016803;
    msg.bond_thick = 0.814425947319;
    msg.lead_gain = 0.948654084586;
    msg.deconfl_gain = 0.507412429254;
    msg.accel_switch_gain = 0.125490475547;
    msg.safe_dist = 0.44902105085;
    msg.deconflict_offset = 0.103616201951;
    msg.accel_safe_margin = 0.276256681327;
    msg.accel_lim_x = 0.977457644317;

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
    msg.setTimeStamp(0.588738442588);
    msg.setSource(24739U);
    msg.setSourceEntity(230U);
    msg.setDestination(30572U);
    msg.setDestinationEntity(167U);
    msg.type = 190U;
    msg.op = 0U;
    msg.err_mean = 0.656059023993;
    msg.dist_min_abs = 0.0772833084412;
    msg.dist_min_mean = 0.385374095477;
    msg.roll_rate_mean = 0.0631601643244;
    msg.time = 0.199840018131;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 10U;
    tmp_msg_0.lon_gain = 0.285033252864;
    tmp_msg_0.lat_gain = 0.277296909345;
    tmp_msg_0.bond_thick = 0.11519953203;
    tmp_msg_0.lead_gain = 0.0807382599434;
    tmp_msg_0.deconfl_gain = 0.884627850111;
    tmp_msg_0.accel_switch_gain = 0.97762388779;
    tmp_msg_0.safe_dist = 0.853102675267;
    tmp_msg_0.deconflict_offset = 0.617863233193;
    tmp_msg_0.accel_safe_margin = 0.632387046056;
    tmp_msg_0.accel_lim_x = 0.155102853211;
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
    msg.setTimeStamp(0.360798763874);
    msg.setSource(30645U);
    msg.setSourceEntity(99U);
    msg.setDestination(9878U);
    msg.setDestinationEntity(109U);
    msg.type = 154U;
    msg.op = 93U;
    msg.err_mean = 0.439134292661;
    msg.dist_min_abs = 0.67073623198;
    msg.dist_min_mean = 0.61891371016;
    msg.roll_rate_mean = 0.0281053388349;
    msg.time = 0.925017553701;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 214U;
    tmp_msg_0.lon_gain = 0.0173519144739;
    tmp_msg_0.lat_gain = 0.638058732974;
    tmp_msg_0.bond_thick = 0.625835121623;
    tmp_msg_0.lead_gain = 0.959747132957;
    tmp_msg_0.deconfl_gain = 0.608274816412;
    tmp_msg_0.accel_switch_gain = 0.558831736071;
    tmp_msg_0.safe_dist = 0.654237330266;
    tmp_msg_0.deconflict_offset = 0.63172322063;
    tmp_msg_0.accel_safe_margin = 0.80202194902;
    tmp_msg_0.accel_lim_x = 0.0141821184767;
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
    msg.setTimeStamp(0.417437041259);
    msg.setSource(1723U);
    msg.setSourceEntity(107U);
    msg.setDestination(14232U);
    msg.setDestinationEntity(237U);
    msg.type = 203U;
    msg.op = 104U;
    msg.err_mean = 0.120545610242;
    msg.dist_min_abs = 0.305243402851;
    msg.dist_min_mean = 0.0142940618477;
    msg.roll_rate_mean = 0.760667961974;
    msg.time = 0.510570638561;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 186U;
    tmp_msg_0.lon_gain = 0.798378649553;
    tmp_msg_0.lat_gain = 0.168703792348;
    tmp_msg_0.bond_thick = 0.44704793649;
    tmp_msg_0.lead_gain = 0.597504499376;
    tmp_msg_0.deconfl_gain = 0.766589310868;
    tmp_msg_0.accel_switch_gain = 0.43357181976;
    tmp_msg_0.safe_dist = 0.258550878887;
    tmp_msg_0.deconflict_offset = 0.0864127397999;
    tmp_msg_0.accel_safe_margin = 0.218124982862;
    tmp_msg_0.accel_lim_x = 0.632566894654;
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
    msg.setTimeStamp(0.69242276405);
    msg.setSource(63361U);
    msg.setSourceEntity(139U);
    msg.setDestination(27131U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.210470609783;
    msg.lon = 0.883729199826;
    msg.eta = 2270920945U;
    msg.duration = 57263U;

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
    msg.setTimeStamp(0.327603075371);
    msg.setSource(61588U);
    msg.setSourceEntity(192U);
    msg.setDestination(29059U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.917018769136;
    msg.lon = 0.292661132552;
    msg.eta = 3305632919U;
    msg.duration = 945U;

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
    msg.setTimeStamp(0.970374134857);
    msg.setSource(44313U);
    msg.setSourceEntity(137U);
    msg.setDestination(23162U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.780021228982;
    msg.lon = 0.932038268502;
    msg.eta = 1190563117U;
    msg.duration = 54174U;

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
    msg.setTimeStamp(0.535666108828);
    msg.setSource(36778U);
    msg.setSourceEntity(87U);
    msg.setDestination(41170U);
    msg.setDestinationEntity(123U);
    msg.plan_id = 326U;

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
    msg.setTimeStamp(0.959605468837);
    msg.setSource(30346U);
    msg.setSourceEntity(176U);
    msg.setDestination(17029U);
    msg.setDestinationEntity(54U);
    msg.plan_id = 26148U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.964353960021;
    tmp_msg_0.lon = 0.759083213623;
    tmp_msg_0.eta = 1440156804U;
    tmp_msg_0.duration = 580U;
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
    msg.setTimeStamp(0.567967884712);
    msg.setSource(53281U);
    msg.setSourceEntity(72U);
    msg.setDestination(18960U);
    msg.setDestinationEntity(162U);
    msg.plan_id = 33881U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.00201304268828;
    tmp_msg_0.lon = 0.735374169159;
    tmp_msg_0.eta = 3437146371U;
    tmp_msg_0.duration = 28096U;
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
    msg.setTimeStamp(0.972358587693);
    msg.setSource(5323U);
    msg.setSourceEntity(185U);
    msg.setDestination(57385U);
    msg.setDestinationEntity(14U);
    msg.type = 172U;
    msg.command = 222U;
    msg.settings.assign("PJRQPBLIPXWTBSIUOQGMGUMPEJFZTERLXRYFOKBVMRQAWTRYKRYNIWOGCMOXMKQHLADTIKNLQWIRWGVZBQUEVPHUASSHSBZVDNDHNKMPKIJAGHDAPOGCEIAFPMAOTXZFEJF");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 52671U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.872968600499;
    tmp_tmp_msg_0_0.lon = 0.516297924935;
    tmp_tmp_msg_0_0.eta = 1565694716U;
    tmp_tmp_msg_0_0.duration = 25598U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("HQNGUDROJFSTSHMVDEKWLGRVTHWOGKMQKLSIZUTNIQBPTWNYRRSDVXBAXOTFFCZHVHJZLGZVIYSDLZMSRBDOISCJQQGUNTQALAKIPERHLVPKJQABNWGYAAENFMEHOWSQDUTYNEOPATFDRKCZSYFDCILDUPAVMPMWDQLAJYJFWBPCPGXGXFHJLPTCZJBYYNIQZKEHMMVLWIKBRXHOEYZOSWBFCBKNGUIXEJXGCPZOUKIURUA");

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
    msg.setTimeStamp(0.771211314251);
    msg.setSource(30900U);
    msg.setSourceEntity(78U);
    msg.setDestination(42732U);
    msg.setDestinationEntity(109U);
    msg.type = 252U;
    msg.command = 84U;
    msg.settings.assign("RVWEWXBPWHEKJCVASMRHFLARGYXUUMWFQKMRTIQWOJDIXOPLWJSBLOCCOONMHYRYDZGYAEKJLRAQJIBUBJOKIFTSGMTGMKPHGRGOCDSPSBOZYPARPZFZVTNHJXNKGVTPUDSENVYTHTXSXNCTLFVFVNYUHJHZTIDUMRMBCDISZWYIABOLYFQARJIUAWQHEKENDQFZYBDQXQNTPIVKMSAXCNXUCGILUZZQLSWVKKXPNVJMGWELGQDEAFPECE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 17934U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.683785510015;
    tmp_tmp_msg_0_0.lon = 0.277917050162;
    tmp_tmp_msg_0_0.eta = 4034955358U;
    tmp_tmp_msg_0_0.duration = 54286U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("PZAKKRAMJYZKGSTINGHPXWBXODJBSBMBTPJFBFFBWTUAGUTGIRVVNDXDHCEZYVXOKCSCXTJOENUYQCHCTMVWAJFKJDWIPFYNVTHWUGMXNOTMOEOERELSNOROFJAEUHQQBMQALWNFSYMSVLJIZSQARBQGXZLPGXKSNWPPXQESKMWYDJCFENECWTVRIERLLKIOKZMIHDYQHADULHUHPT");

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
    msg.setTimeStamp(0.705754205737);
    msg.setSource(55194U);
    msg.setSourceEntity(50U);
    msg.setDestination(4060U);
    msg.setDestinationEntity(181U);
    msg.type = 226U;
    msg.command = 93U;
    msg.settings.assign("KJGGYBNSEEHBHTVUEAFGFGDBSFIJHIRMXPYUHTACBDVXPUVMDZJRODCNYICRPKYXMQPKZZJMIYXGYWIIHOODSDPQALTKZQQZMRWFCLJOA");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 36016U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("EKDFYBJNOFFBQTEHLGVPHFIVGFSRZRAWDPKSOCCXILEVLKSYLEAMUIGRLTFGOXSDBZVJDTVXJXQHAJMKWYDCENQZCHOBGSOHWTPNFODXFZDXWGSUPQKKWIWUAASNJRCBQJHYKGRTTZPCXUNPGZWQUXKAAARJUDNOBYNMBRCMJJOUIBIVSDIHYQCYMTKMHYTCLZZEFWLUNPBVPOGFGREQNHYZPSCJXEMWLRVP");

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
    msg.setTimeStamp(0.324597578218);
    msg.setSource(16792U);
    msg.setSourceEntity(235U);
    msg.setDestination(36898U);
    msg.setDestinationEntity(54U);
    msg.state = 163U;
    msg.plan_id = 16518U;
    msg.wpt_id = 110U;
    msg.settings_chk = 39619U;

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
    msg.setTimeStamp(0.578870360086);
    msg.setSource(3487U);
    msg.setSourceEntity(39U);
    msg.setDestination(13538U);
    msg.setDestinationEntity(15U);
    msg.state = 113U;
    msg.plan_id = 59409U;
    msg.wpt_id = 231U;
    msg.settings_chk = 30746U;

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
    msg.setTimeStamp(0.131784287577);
    msg.setSource(64304U);
    msg.setSourceEntity(31U);
    msg.setDestination(8207U);
    msg.setDestinationEntity(193U);
    msg.state = 172U;
    msg.plan_id = 25764U;
    msg.wpt_id = 126U;
    msg.settings_chk = 22344U;

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
    msg.setTimeStamp(0.119822574397);
    msg.setSource(27241U);
    msg.setSourceEntity(170U);
    msg.setDestination(12690U);
    msg.setDestinationEntity(237U);
    msg.uid = 103U;
    msg.frag_number = 6U;
    msg.num_frags = 168U;
    const char tmp_msg_0[] = {120, 3, 123, -115, 77, -73, -35, -16, 99, 76, -109, 119, -47, -92, -106, 88, 75, 51, -27, 83, -61, 111, 76, -119, -115, -7, 117, -83, -121, -35, -54, -81, -35, 57, 108, -25, -20, -107, -109, 77, -107, 90, 99, -115, -83, -56, -100, -96, -118, -56, -46, -17, 82, -11, 112, -107, -36, -120, -9, 121, -37, -71, 72, 113, -32, -101, 23, -53, -88, 108, 110, 112, 92, -26, 12, -64, 48, -74, -17, 94, -48, 126, -102, -9, 40, -24, -10, -11, -89, 38, -66, 52, 93, -24, -11, 62, 66, -79, -106, -48, 78, -105, 45, 101, -79, -50, -115, 2, 101, -72, -28, -72, 102, -30, 125, -74, -53, 95, -94, -25, -95, 14, -42, 106, 116, -125, -91, -89, 37, -98, 80, -119, 110, 29, -54, -89, -49, 70, 32, -4, -31, 35, 38, -116, 75, 10, 82, 125, -19, -98, -2, -88, -41, 41, 61, 101, -107, -35, -122, 47, 121, -121, 18, 97, -24, -40, -3, 11, 93, -80, -44};
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
    msg.setTimeStamp(0.542728244567);
    msg.setSource(7145U);
    msg.setSourceEntity(82U);
    msg.setDestination(64803U);
    msg.setDestinationEntity(42U);
    msg.uid = 83U;
    msg.frag_number = 70U;
    msg.num_frags = 9U;
    const char tmp_msg_0[] = {-22, -67, -67, 116, 56, -112, -92, 117, -74, -109, -64, 29, -36, 89, 99, -64, 116, -84, 35, -29, 47, 24, -19, -67, -114, -21, 102, 33, -103, 75, -79, -77, -114, 77, 98, -53, 55, 18, -74, -115, 80, -99, 69, -27, -88, -71, -50, -45, -11, -20, -83, 61, -11, 113, -2, -94, -53, 48, 105, 115, -41, 78, 123, 117, -95, 97, 78, 117, 82, 61, 112, -124, -39, 55, 35, -31, -72, 66, -38, -90, 41, -70, -124, 92, 82, 98, -94, -62, 125, -6, -53, -52, 37, 87, -86, 108, 60, 38, -6, -26, 87, 16, -9, -120, 60, 116, 10, 4, -60, 66, 1, -81, 93, 54, 74, -58, 125, 12, -38, 63, -23, -65, -40, -25, -101, -15, -30, 120, 71, 101, 34, 40, 12, -28, -15, -109, -95, 122, -77, 48, -119, -101, -15, 120, -24, -127, -87, -89, -58, -85, -93, -10, 6, 61, -93, -90, 82, -48, 74, -127, -38, -87, 91, -70, 25, 118, 8, -58, 43, -120, -57, 4, -36, 84, -89, -41, 75, 87, 120, 28, -117, 71};
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
    msg.setTimeStamp(0.130280132667);
    msg.setSource(8381U);
    msg.setSourceEntity(215U);
    msg.setDestination(10509U);
    msg.setDestinationEntity(46U);
    msg.uid = 212U;
    msg.frag_number = 4U;
    msg.num_frags = 228U;
    const char tmp_msg_0[] = {77, -91, 122, -83, -46, 13, -17, -125, -14, -76, -76, -65, -85, -46, -85, 53, -124, 56, 73, -93, 23, 105, -123, 19, -98, 12, -40, 103, 111, -94, -23, -82, -52, 9, 44, -94, -126, 61, 1, -28, 34, 74, 73, 105, -35, -8, 45, 105, 115, 12, -31, 78, -50, -21, -41, -74, -100, -28, 13, -15, -40, 82, -100, 11, -108, 64, -89, 56, 125, -81, 20, -43, 88, -25, -103, -4, -106, -66, -17, 13, -105, -75, -24, -54, -29, -51, 45, 65, -91, 118, -15, 7, -125, 4, 51, -28, 68, 90, 76, 63, -11, 44, -94, -23, 79, 37, 106, 3, -98, 121, -79};
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
    msg.setTimeStamp(0.750631144449);
    msg.setSource(1846U);
    msg.setSourceEntity(169U);
    msg.setDestination(18065U);
    msg.setDestinationEntity(77U);
    msg.content_type.assign("FSLSNEOAIZKWOYPHDAFNUDDCJJEBNHUJSARZGADQVZGVLPFZQGJTKFNZGKMHQMVCCNVR");
    const char tmp_msg_0[] = {30, -6, 101, -62, -68, 27, -4, 24, 90, 115, 109, 25, 70, 95, -121, -61, -10, -4, -10, 36, 111, 102, -125, -13, 70, -5, -109, -47, -112, -79, 70, -21, -119, 89, 69, -122, -116, -111, -17, -47, -20, 51, 103, -101, 27, -79, 124, -67, -35, 28, -114, 4, -76, -72, -76, -29, -107, 77, -121, 88, -27, 125, -61, 10, -101, 31, 30, -96, 102, 117, 3, -9, 64, 62, 90, -78, -34, -29};
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
    msg.setTimeStamp(0.498569691188);
    msg.setSource(56092U);
    msg.setSourceEntity(97U);
    msg.setDestination(4053U);
    msg.setDestinationEntity(132U);
    msg.content_type.assign("LCVCTRMSTJDDBIMNWWWWVTAJAQXUQKPMULVNGZQIPUHERFFNGVNNFCPAOUPRFVLLXBJBNSXJDTHOZGIICKYKXXOYPVHNJUEYEQSRPXISNGVRFGEQLTIQWGXEOEOWBKDKDONTGFSKMUUHLJXWAEYFHKAZASLPGIXMCVMERSJBVKO");
    const char tmp_msg_0[] = {-88, 6, 60, -11, -67, 119, -45, -38, 20, -25, 48, -33, -65, 102, 106, -116, 83, -105, 18, 105, 7, 37, 124, 125, -46, -84, 20, 7, 109, -101, 111, -52, 71, 19, 77, 50, -122, 16, 29, -114, -100, -11, -113, -41, -104, -16, -2, -25, 106, 3, -78, 112, 122, 30, -72, -57, -76, -24, 124, 82, -49, 107, -34, 39, 108, -85, 0, -92, -14, 59, -118, 35, 34, 104, 123, -52, -6, -80, -23, 113, 52, 124, 4, -2, -96, 15, -73, -126, -3, -59, -119, 98, -4, -29, -117, -71, -7, -13, -44, 97, 71, -97, 111, -69, -57, -32, 91, 51, 19, -117, 69, 69, -70, 104, -108, 56, -26, 107, -13, -83, -48, -104, -128, 73, -118, 110, -38, 120, -128, 2, 30, 97, -46, -86, -64, -72, -108, 71, 124, 65, -4, 123, 46, 22, -10, 89, -124, 41, 86, -116, 44, 120, 24, 25, -66, -49, -24, -51, 118, 90, -91, -74, -61, -4, 109, 88, -29, 13, -33, -68, -118, -40, 52, 30, -61, 65, 92, 89, 122, -1, 76, 35, -112, -53, -88, -83, -78, 41};
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
    msg.setTimeStamp(0.0171396034833);
    msg.setSource(9503U);
    msg.setSourceEntity(74U);
    msg.setDestination(49525U);
    msg.setDestinationEntity(122U);
    msg.content_type.assign("WAHFIOFJKIUVYEBGPCFWQHNRDBTDBNRHTJPSWYEPWBXCYFZDBMIIAIZLSKEVSZXGTLLSRHRYFOSOZOPBQTAOSUKUKWLBEBCENAQEHAWRUYWZKGJTPFYLXXOVGWSMGLFZMDQFOLYGGREJLAULKEUNHZQNPOTOJSMOAVQKUWTMU");
    const char tmp_msg_0[] = {-72, -123, -47, -44, 35, -32, 63, -39, -19, 22, -7, -30, -20, 15, -114, -16, 17, 107, 41, -124, -34, -84, -120, -80, -12, -64, 40, 34, -42, -17, 84, 78, -57, -50, 2, -25, 90, -17, 56, -52, 113, 28, 111, -100, -48};
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
    msg.setTimeStamp(0.0655588110185);
    msg.setSource(54036U);
    msg.setSourceEntity(14U);
    msg.setDestination(10057U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.633040024664);
    msg.setSource(11448U);
    msg.setSourceEntity(47U);
    msg.setDestination(62595U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.935009227733);
    msg.setSource(18264U);
    msg.setSourceEntity(63U);
    msg.setDestination(23747U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.39197625583);
    msg.setSource(43472U);
    msg.setSourceEntity(115U);
    msg.setDestination(18793U);
    msg.setDestinationEntity(97U);
    msg.target = 33804U;
    msg.bearing = 0.388609708062;
    msg.elevation = 0.84647176626;

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
    msg.setTimeStamp(0.127119578373);
    msg.setSource(42415U);
    msg.setSourceEntity(177U);
    msg.setDestination(38632U);
    msg.setDestinationEntity(13U);
    msg.target = 37577U;
    msg.bearing = 0.0566872639078;
    msg.elevation = 0.850587860267;

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
    msg.setTimeStamp(0.0243823142267);
    msg.setSource(20062U);
    msg.setSourceEntity(190U);
    msg.setDestination(42474U);
    msg.setDestinationEntity(88U);
    msg.target = 65266U;
    msg.bearing = 0.948009397047;
    msg.elevation = 0.715786724016;

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
    msg.setTimeStamp(0.771042932012);
    msg.setSource(37155U);
    msg.setSourceEntity(47U);
    msg.setDestination(22821U);
    msg.setDestinationEntity(44U);
    msg.target = 27559U;
    msg.x = 0.370318858764;
    msg.y = 0.264345361104;
    msg.z = 0.908008253477;

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
    msg.setTimeStamp(0.681458678853);
    msg.setSource(63974U);
    msg.setSourceEntity(116U);
    msg.setDestination(63593U);
    msg.setDestinationEntity(237U);
    msg.target = 64391U;
    msg.x = 0.097409580346;
    msg.y = 0.0115868137257;
    msg.z = 0.994962408998;

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
    msg.setTimeStamp(0.701438977021);
    msg.setSource(37798U);
    msg.setSourceEntity(79U);
    msg.setDestination(32440U);
    msg.setDestinationEntity(183U);
    msg.target = 58402U;
    msg.x = 0.621595230323;
    msg.y = 0.612197491971;
    msg.z = 0.0280989156589;

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
    msg.setTimeStamp(0.0548894463515);
    msg.setSource(6954U);
    msg.setSourceEntity(92U);
    msg.setDestination(65321U);
    msg.setDestinationEntity(222U);
    msg.target = 27467U;
    msg.lat = 0.189215567466;
    msg.lon = 0.613333920957;
    msg.z_units = 233U;
    msg.z = 0.494477805866;

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
    msg.setTimeStamp(0.458232118998);
    msg.setSource(34935U);
    msg.setSourceEntity(75U);
    msg.setDestination(60593U);
    msg.setDestinationEntity(154U);
    msg.target = 434U;
    msg.lat = 0.973017579736;
    msg.lon = 0.497856076663;
    msg.z_units = 159U;
    msg.z = 0.420884107304;

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
    msg.setTimeStamp(0.170253949247);
    msg.setSource(52819U);
    msg.setSourceEntity(103U);
    msg.setDestination(11896U);
    msg.setDestinationEntity(53U);
    msg.target = 61283U;
    msg.lat = 0.758118024899;
    msg.lon = 0.257523848261;
    msg.z_units = 101U;
    msg.z = 0.374782800912;

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
    msg.setTimeStamp(0.369960558798);
    msg.setSource(36053U);
    msg.setSourceEntity(204U);
    msg.setDestination(43467U);
    msg.setDestinationEntity(197U);
    msg.locale.assign("KLSVYOWMMAELJZOKQPFGAJBKIRUOXPDOPMYKUOWLIFFQQRCBYIURTQATXUPDWZIYZHITYBHGNSIIOGJVAVAXXTDCOXTUFW");
    const char tmp_msg_0[] = {100, 93, -55, 97, 30, -118, 27, -14, -124, 116, 50, -49, 39, -63, 53, -84, -59, -100, -18, -19, -103, -71, -42, 107, 125, -88, -97, -10, -61, 86, -56, 98, -42, 90, -77, 84, -39, 92, 85, -82, -115, -72, -24, 105, 33, -44, 106, 48, 67, 30, -13, 96, 1, -91, -84, -26, -56, -1, 16, -83, -118, -2, -54, 55, -94, 74, -77, 53, 88, -120, -4, -19, 4, 61, 102, -25, -99, -28, -51, 20, -48, -30, -23, 92, 99, 108, 14, -26, -124, 35, 72, 80, -80, 5, -124, -67, 59, 28, 110, -109, 8, -43, 31, -121, 123, -41, 114, -114, -117, 26, -84, -37, 81, 56, -27, 25, -34, -9, -24, -8, -35, 25, -23, -7, -84, -70, -103, 8, -50, -57, 66, -22, -39, -13, 73, 5, -70, -6, 60, -99, -45, -111, 49, 95, -19, -1, 30, -40, -50, 98, 72, 50, -124, 106, 27, -54, 47, -93, 19, 97, -88, -71, 74, -88, -16, -28, 113};
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
    msg.setTimeStamp(0.755563484576);
    msg.setSource(19387U);
    msg.setSourceEntity(251U);
    msg.setDestination(8613U);
    msg.setDestinationEntity(98U);
    msg.locale.assign("XUHRYHNPSWWDBBOYXHQSBFELGSLZOLXAOQRCXCKGICMKAGZIIEXNZBEPDHQMLYTHZVJGFVAFQMHSRRMFWOIPATMYGWZJYKNAHPDCQROJUEDOLVJAKWJTHPHBOZQLMCVFVBHRNDJKIRREMGPTRNUIZPYAFWVSMQULGYEZGMTPJUESVFWTUJALDVXSNYEVKEOISLATJRVQXKGCGDKIQSNTFWXULITUAPIFJFTNEKDCODYBQXWMZS");
    const char tmp_msg_0[] = {90, -102, 87, 60, 115, -52, -76, -19, 79, -10, 56, -14, -20, 68, -126, 103, 79, 67, 21, 80, -20, 15, 94, -117, -35, -72, -34, 34, 31, 6, -39, 40, -102, -70, -22, -4, -51, 18, -81, 88, -42, 59, 118, -38, -3, -49, 29, -70, 8, 82, 123, 119, 126, -12, -100};
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
    msg.setTimeStamp(0.356689599171);
    msg.setSource(55810U);
    msg.setSourceEntity(227U);
    msg.setDestination(32044U);
    msg.setDestinationEntity(81U);
    msg.locale.assign("YFAEOHFYFVCEEJUADUVAGMNBWWVIJGPYWQJKOIAGWBGSGYFGSOJRCJXKLRHLPXMDUOLCARAKIIKSOTCHYKEMDDSSMFNTRQNYJXQUVSCYJPRXPUQYBRBNFNAO");
    const char tmp_msg_0[] = {-53, -67, -93, 118, -57, -36, -102, -23, 3, -5, -80, -88, 8, 45, 31, 65, 86, -58, -123, 117, 33, -2, 54, -72, 115, -21, 0, -2, 21, 49, -3, 23, 64, 67, -116, -42, 75, 30, -47, 87, -16, 105, 59, -55, -102, 45, 0, -115, -8, -16, -88, 59, -20, 81, 63, -96, -81, 49, 96, -9, -101, 74, 97, -84, -111, 42, -78, 85, 17, -40, 115, 5, -19, -82, -81, -127, 102, 31, 57, -62, 90, 57, -101, -102, 58, -51, 101, 95, 77, -61, -127, 3, 115, 8, 105, -85, -118, 21, -125, 63, 123, 125, -20, -34, 7, 10, 6, -56, -116, -67, 48, 12, -38, 96, -99, 62, 91, -96, 102, 15, -51, -93, 87, -105, -102, -73, 69, -71, 118, -82, -77, 81, 43, -53, 31, 48, 20, -20, -40, 33, -31, -5, -21, 2, -34, 12, 60, 46, 70, 92, -73, -52, -42, -46, -79, 65, 53, 12, -98, 122, -12, -13, -15, -103, -72, -32, -13, 106, -15, 10, -89, -116, -35, -128, -72, -84, 8, -115, 8, -18, 17, -88, 25, -11, -11, 17, 80, -74, -25, 33, 124, -71, 34, 25, -101, 8, 2, -66, 120, -96, 55, -92, -83, -27, -95, -44, -36, -66, 34, 101, -90, -16, 65, 66, 62, -40, 10, -56, 77, -86, 18, 67, -60, -65, 64, -61, -12, 77, -60, 78, -57, 41, -12, 18, -76, 27, -70, -126, 58, 39, -122, -15, -120, -65, -60, 65, -105, -76, -62, 43, 11};
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
    msg.setTimeStamp(0.919471760499);
    msg.setSource(40485U);
    msg.setSourceEntity(211U);
    msg.setDestination(46287U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.290415663086);
    msg.setSource(26084U);
    msg.setSourceEntity(58U);
    msg.setDestination(16846U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.630095409859);
    msg.setSource(50498U);
    msg.setSourceEntity(180U);
    msg.setDestination(36481U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.458489313386);
    msg.setSource(34342U);
    msg.setSourceEntity(136U);
    msg.setDestination(60277U);
    msg.setDestinationEntity(39U);
    msg.camid = 117U;
    msg.x = 12214U;
    msg.y = 38806U;

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
    msg.setTimeStamp(0.580280141665);
    msg.setSource(31015U);
    msg.setSourceEntity(119U);
    msg.setDestination(60422U);
    msg.setDestinationEntity(126U);
    msg.camid = 25U;
    msg.x = 18084U;
    msg.y = 29003U;

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
    msg.setTimeStamp(0.29988785322);
    msg.setSource(23945U);
    msg.setSourceEntity(21U);
    msg.setDestination(39958U);
    msg.setDestinationEntity(162U);
    msg.camid = 89U;
    msg.x = 25684U;
    msg.y = 21452U;

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
    msg.setTimeStamp(0.822458870564);
    msg.setSource(58769U);
    msg.setSourceEntity(187U);
    msg.setDestination(6500U);
    msg.setDestinationEntity(135U);
    msg.camid = 160U;
    msg.x = 51025U;
    msg.y = 61014U;

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
    msg.setTimeStamp(0.167503351756);
    msg.setSource(7062U);
    msg.setSourceEntity(227U);
    msg.setDestination(42959U);
    msg.setDestinationEntity(168U);
    msg.camid = 77U;
    msg.x = 17311U;
    msg.y = 46714U;

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
    msg.setTimeStamp(0.99098627593);
    msg.setSource(35200U);
    msg.setSourceEntity(215U);
    msg.setDestination(12559U);
    msg.setDestinationEntity(226U);
    msg.camid = 254U;
    msg.x = 53179U;
    msg.y = 42840U;

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
    msg.setTimeStamp(0.490685059971);
    msg.setSource(52663U);
    msg.setSourceEntity(60U);
    msg.setDestination(48224U);
    msg.setDestinationEntity(208U);
    msg.tracking = 243U;
    msg.lat = 0.744759230149;
    msg.lon = 0.90780583892;
    msg.x = 0.08614775861;
    msg.y = 0.966418592881;
    msg.z = 0.392550364823;

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
    msg.setTimeStamp(0.487612335336);
    msg.setSource(635U);
    msg.setSourceEntity(104U);
    msg.setDestination(51673U);
    msg.setDestinationEntity(231U);
    msg.tracking = 131U;
    msg.lat = 0.742708896991;
    msg.lon = 0.592405339843;
    msg.x = 0.215984723517;
    msg.y = 0.213376339258;
    msg.z = 0.851868942504;

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
    msg.setTimeStamp(0.234873488828);
    msg.setSource(44358U);
    msg.setSourceEntity(188U);
    msg.setDestination(20955U);
    msg.setDestinationEntity(253U);
    msg.tracking = 44U;
    msg.lat = 0.774404383934;
    msg.lon = 0.423411308077;
    msg.x = 0.312591572715;
    msg.y = 0.1506483363;
    msg.z = 0.05166746186;

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
    msg.setTimeStamp(0.883067360582);
    msg.setSource(34213U);
    msg.setSourceEntity(67U);
    msg.setDestination(16180U);
    msg.setDestinationEntity(37U);
    msg.target.assign("XVMTULJABDROJEABCTDWRUXNYGUQRJOWJPQVMKLBNQBFYIFPGZXBKXKYTQKLSZMGSYCLFENDQRQARLUPCLEFWIBUFNSKNXCAETXKEOKPKFVVDTIMWRZYJNVWMQVGIDSIYQHRIJADZBMEQFYQUHDIEGOHLJPARUZTZMJEZPPMJPOGOOSNXAIJWGEHKSXMOGSSIUCASXCVOVHHYFCLTXFGPHBKHWBAYGYFAUIWTZSWVLVNCBCDZNUT");
    msg.lbearing = 0.785946696309;
    msg.lelevation = 0.644238466857;
    msg.bearing = 0.536885085777;
    msg.elevation = 0.148757963252;
    msg.phi = 0.774072393551;
    msg.theta = 0.695273126448;
    msg.psi = 0.930598965417;
    msg.accuracy = 0.844898778818;

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
    msg.setTimeStamp(0.10306797257);
    msg.setSource(55571U);
    msg.setSourceEntity(95U);
    msg.setDestination(32387U);
    msg.setDestinationEntity(191U);
    msg.target.assign("IEBGNKRXNSJMSVGZYFLBXGQXYBEUFYPCTVYLLPONUMLRDCBCWUJIPHRRAYKRRSEEUJSKTMOZXDAZJVHIQGAOKVFLCERJWOSBHZNNUEOPLYBPUZJWZXTSDNDFVAZBWXKYFKLHFJQSHEFTVUMHVD");
    msg.lbearing = 0.392313343229;
    msg.lelevation = 0.429651723923;
    msg.bearing = 0.827761840542;
    msg.elevation = 0.234616617012;
    msg.phi = 0.0953294131989;
    msg.theta = 0.748834479297;
    msg.psi = 0.527976096727;
    msg.accuracy = 0.276509358224;

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
    msg.setTimeStamp(0.934011009228);
    msg.setSource(57148U);
    msg.setSourceEntity(188U);
    msg.setDestination(48264U);
    msg.setDestinationEntity(240U);
    msg.target.assign("BHLZOWCKLYIJXPPDWMBDGWHCGDQZWUYCCABOHGWPDKFKJZGCESXWZGSX");
    msg.lbearing = 0.863212297077;
    msg.lelevation = 0.476531468438;
    msg.bearing = 0.143866328769;
    msg.elevation = 0.103168507277;
    msg.phi = 0.6233450526;
    msg.theta = 0.854363991017;
    msg.psi = 0.782301142796;
    msg.accuracy = 0.379795309508;

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
    msg.setTimeStamp(0.450477795357);
    msg.setSource(61209U);
    msg.setSourceEntity(91U);
    msg.setDestination(23366U);
    msg.setDestinationEntity(101U);
    msg.target.assign("SJIOTFUITHOTKGTWJRJSSEBBNOBFXQ");
    msg.x = 0.732665616217;
    msg.y = 0.475367112122;
    msg.z = 0.40838314575;
    msg.n = 0.361260139927;
    msg.e = 0.46509433963;
    msg.d = 0.215717149198;
    msg.phi = 0.629837865028;
    msg.theta = 0.24304486951;
    msg.psi = 0.411776754157;
    msg.accuracy = 0.413209209166;

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
    msg.setTimeStamp(0.830048443217);
    msg.setSource(32988U);
    msg.setSourceEntity(105U);
    msg.setDestination(42775U);
    msg.setDestinationEntity(142U);
    msg.target.assign("YQMKVLRLOQOJTENWQCJAXEAZFUJXHDNOVGFSZZFMLHQHSUGJVZPBISVLVEXYIHBRTWRTNBUSWEPHANIJEMDQPPHFQFSDZEBRECOYBAOJZSFMRB");
    msg.x = 0.756823072575;
    msg.y = 0.724344924198;
    msg.z = 0.652057639146;
    msg.n = 0.577951014831;
    msg.e = 0.55438581214;
    msg.d = 0.479681341526;
    msg.phi = 0.841739837018;
    msg.theta = 0.354975333676;
    msg.psi = 0.682473828901;
    msg.accuracy = 0.550339530323;

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
    msg.setTimeStamp(0.409341185158);
    msg.setSource(45730U);
    msg.setSourceEntity(24U);
    msg.setDestination(47768U);
    msg.setDestinationEntity(193U);
    msg.target.assign("CZKWTKCRYYRMLYHGQFWYNHLHTINLNUAIVFLBBFQYEJOJOEUGSBFMBXDXMJFRMAJYTQOKLGWWTMWJUEDOBJCSSWMUKGOHHXONCAAIPSDDBRQHJASPOUWDGZQPCGTWCYGZXPWNYNFEFVVXNJEKRCPXUTBPQSXSBVHTSARSGXPZZLKAEYRIQAVJOUMPXMIRQUIHDDGLWZGEVVAAEOZR");
    msg.x = 0.249438480999;
    msg.y = 0.5564208814;
    msg.z = 0.146765741439;
    msg.n = 0.118781620894;
    msg.e = 0.501556123819;
    msg.d = 0.7946680461;
    msg.phi = 0.511613180014;
    msg.theta = 0.38866348082;
    msg.psi = 0.580562957582;
    msg.accuracy = 0.228774751863;

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
    msg.setTimeStamp(0.394417288151);
    msg.setSource(10331U);
    msg.setSourceEntity(234U);
    msg.setDestination(44371U);
    msg.setDestinationEntity(28U);
    msg.target.assign("VCOMWPPLSQTDMOYTCCLFSTUAMYMYFZHCWWUDHXRSAKLKOKIHVCOPDEGRZIEFVNPCKVILGZONYNBBJMODSDJRUHLHQJJAGXPFKLREFUUZGBIODAYJHVOSQAAARAXIEJPHZXTTVITSUDLSKKFKGQXOYRPPJXJFXGZEFBZHQIZVBNGDNNRBJSCTUNWLSJDWZBBF");
    msg.lat = 0.482567247139;
    msg.lon = 0.962370204763;
    msg.z_units = 23U;
    msg.z = 0.779543600384;
    msg.accuracy = 0.0201016345609;

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
    msg.setTimeStamp(0.830190665078);
    msg.setSource(37462U);
    msg.setSourceEntity(90U);
    msg.setDestination(24026U);
    msg.setDestinationEntity(112U);
    msg.target.assign("IWTUUOVATWCYQKLNFKDTWOFGGEYOBFZQYNVWCGEOKTEGMNQPMTVXRZIAZQCUKJZLFRCPZZWCOKPXNGNPLHLQJVJGAYBRJYDUMUWMVWAZVMDFZOTZZB");
    msg.lat = 0.794475286141;
    msg.lon = 0.47743772757;
    msg.z_units = 254U;
    msg.z = 0.666919342875;
    msg.accuracy = 0.601282828133;

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
    msg.setTimeStamp(0.496492912721);
    msg.setSource(42951U);
    msg.setSourceEntity(134U);
    msg.setDestination(5826U);
    msg.setDestinationEntity(175U);
    msg.target.assign("XVXEZAYNCEJABGOWJEBQJVSLBEPYEDYIUKNILPSITKMVDCRBRLWSGILKPJWMPAFMOZEVCUYRZMQSEXTBXRHWJDYGSZPIWNMHMBKLFNCXMKVOUCUQLHFKKOKDBAHVTNPGXYCAOQLVJXGULXHQIDIHDAAWLIVDBUKNXEYQ");
    msg.lat = 0.368413575416;
    msg.lon = 0.145332945525;
    msg.z_units = 192U;
    msg.z = 0.261929480742;
    msg.accuracy = 0.025644380143;

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
    msg.setTimeStamp(0.354700405551);
    msg.setSource(14767U);
    msg.setSourceEntity(153U);
    msg.setDestination(42470U);
    msg.setDestinationEntity(33U);
    msg.name.assign("JRZCCTLDUQIOPOBYBFILGBHQQKORMKMMCAFZYXMATUZLRCMDWIEGIHNGHVDCEXLWYSFILSXDYBNHKLYPJEAHWQUTVSJDQEYXHFUGKKGXNSORJJAINSZJLZHTAYXWZOCNPEJVDSIKXTMEMALZPLCZDVRVMAUHOGGEBVQYNCNBXYXENPGTDFUSBBVTFPOYQBCAUQWRXFGWDDFPCUNVUGOAKWSWMJKBKRZFAHROPOLNMZTRQWWIHPRSEUFJVQIJI");
    msg.lat = 0.770549200146;
    msg.lon = 0.29265250329;
    msg.z = 0.156788695637;
    msg.z_units = 114U;

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
    msg.setTimeStamp(0.749717372199);
    msg.setSource(64635U);
    msg.setSourceEntity(206U);
    msg.setDestination(23622U);
    msg.setDestinationEntity(231U);
    msg.name.assign("KMMSPDYPFZOQFCJGPODKSHYMGCLEEESYCTCYKRTNETNJHLIXBUGYZHUZQOIFMOAOXITQUNHUAILCAJGLJKLERFZBMMWIIXOBNVQABCTEWQDXVKAGQZXUNJPXVWYIVYEKFEWIWBGQGCLVOSPHWPKHDVUAQBYUNJGWFXBMOCDQRVDTSRDUAZRFMTPUWIJJPLCHWSTJLCNEAFNADEURKQZRXLAGYMOBZGKIYSMSVRTVHRNS");
    msg.lat = 0.70043983317;
    msg.lon = 0.451535782886;
    msg.z = 0.554219002043;
    msg.z_units = 112U;

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
    msg.setTimeStamp(0.090539102535);
    msg.setSource(1526U);
    msg.setSourceEntity(43U);
    msg.setDestination(63920U);
    msg.setDestinationEntity(91U);
    msg.name.assign("TBKCNQDXYDSRPEIBISUJRTOABHPWUEEPHRSTQGKGODDCBVILYLLXBQWTOLUKCPZVSJSEHMDPGDNMWTIGHPPSKFQNAICNXZQDKHJDUZIKYRYAGNKZVAJM");
    msg.lat = 0.0728609326564;
    msg.lon = 0.946347115119;
    msg.z = 0.936629487953;
    msg.z_units = 27U;

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
    msg.setTimeStamp(0.423247226639);
    msg.setSource(40422U);
    msg.setSourceEntity(43U);
    msg.setDestination(41079U);
    msg.setDestinationEntity(116U);
    msg.op = 100U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("HYPLIXVBGECLAKNIVTQSZLQXKKGOYTCSMSIBVZGNIPTDAEBXGCQHGBXNRAMRAEJTQNDDIXBORDUTVMLJOJSCHHOEUWJBVCGOBZMFKULPLPMQISCYJNGHDQLPFTDKNJNODNIWSZHPLRXGZIVQXNYAEYQGAZNDOUFIPMMWFWKMKKZSRAJV");
    tmp_msg_0.lat = 0.101362795883;
    tmp_msg_0.lon = 0.789691458846;
    tmp_msg_0.z = 0.98290081695;
    tmp_msg_0.z_units = 73U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.626830505265);
    msg.setSource(8103U);
    msg.setSourceEntity(77U);
    msg.setDestination(32417U);
    msg.setDestinationEntity(229U);
    msg.op = 118U;

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
    msg.setTimeStamp(0.918869943228);
    msg.setSource(13724U);
    msg.setSourceEntity(249U);
    msg.setDestination(55270U);
    msg.setDestinationEntity(250U);
    msg.op = 100U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("HXXNYTJSSJOZDZFNSWYHRGCYPTYDRYACJAXK");
    tmp_msg_0.lat = 0.556053230143;
    tmp_msg_0.lon = 0.0214731836518;
    tmp_msg_0.z = 0.0550793878284;
    tmp_msg_0.z_units = 99U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.74284413919);
    msg.setSource(60175U);
    msg.setSourceEntity(20U);
    msg.setDestination(22661U);
    msg.setDestinationEntity(120U);
    msg.value = 0.834929533473;
    msg.type = 45U;

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
    msg.setTimeStamp(0.618714510618);
    msg.setSource(23836U);
    msg.setSourceEntity(188U);
    msg.setDestination(32575U);
    msg.setDestinationEntity(80U);
    msg.value = 0.830141687104;
    msg.type = 66U;

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
    msg.setTimeStamp(0.50312489246);
    msg.setSource(22120U);
    msg.setSourceEntity(37U);
    msg.setDestination(31348U);
    msg.setDestinationEntity(151U);
    msg.value = 0.382459360837;
    msg.type = 178U;

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
    msg.setTimeStamp(0.501062248757);
    msg.setSource(19107U);
    msg.setSourceEntity(122U);
    msg.setDestination(54994U);
    msg.setDestinationEntity(112U);
    msg.value = 0.79931646585;

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
    msg.setTimeStamp(0.188016306568);
    msg.setSource(7938U);
    msg.setSourceEntity(71U);
    msg.setDestination(788U);
    msg.setDestinationEntity(143U);
    msg.value = 0.203572292389;

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
    msg.setTimeStamp(0.40012904401);
    msg.setSource(55725U);
    msg.setSourceEntity(40U);
    msg.setDestination(27034U);
    msg.setDestinationEntity(220U);
    msg.value = 0.384013168187;

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
    msg.setTimeStamp(0.386575769631);
    msg.setSource(23712U);
    msg.setSourceEntity(143U);
    msg.setDestination(7801U);
    msg.setDestinationEntity(237U);
    msg.timestamp_last_service = 0.150540256619;
    msg.time_next_service = 0.666419100523;
    msg.time_motor_next_service = 0.305518623711;
    msg.time_idle_ground = 0.648072871568;
    msg.time_idle_air = 0.8994731287;
    msg.time_idle_water = 0.100341575304;
    msg.time_idle_underwater = 0.648536936658;
    msg.time_idle_unknown = 0.86125551962;
    msg.time_motor_ground = 0.50505779345;
    msg.time_motor_air = 0.957099083603;
    msg.time_motor_water = 0.866629300241;
    msg.time_motor_underwater = 0.799901860717;
    msg.time_motor_unknown = 0.444207610862;
    msg.rpm_min = -7466;
    msg.rpm_max = 24290;
    msg.depth_max = 0.300704398349;

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
    msg.setTimeStamp(0.869281607097);
    msg.setSource(9229U);
    msg.setSourceEntity(200U);
    msg.setDestination(59859U);
    msg.setDestinationEntity(72U);
    msg.timestamp_last_service = 0.656520814704;
    msg.time_next_service = 0.488795914913;
    msg.time_motor_next_service = 0.0673966188857;
    msg.time_idle_ground = 0.363840196428;
    msg.time_idle_air = 0.723701265558;
    msg.time_idle_water = 0.477276205458;
    msg.time_idle_underwater = 0.384452119992;
    msg.time_idle_unknown = 0.765572663593;
    msg.time_motor_ground = 0.417254971;
    msg.time_motor_air = 0.938508544009;
    msg.time_motor_water = 0.548991341336;
    msg.time_motor_underwater = 0.511138128472;
    msg.time_motor_unknown = 0.910235374423;
    msg.rpm_min = -26969;
    msg.rpm_max = 25322;
    msg.depth_max = 0.841672717886;

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
    msg.setTimeStamp(0.93189876336);
    msg.setSource(29384U);
    msg.setSourceEntity(72U);
    msg.setDestination(53986U);
    msg.setDestinationEntity(81U);
    msg.timestamp_last_service = 0.0776619585729;
    msg.time_next_service = 0.959799809689;
    msg.time_motor_next_service = 0.394835612799;
    msg.time_idle_ground = 0.842505569243;
    msg.time_idle_air = 0.124181047866;
    msg.time_idle_water = 0.1014307309;
    msg.time_idle_underwater = 0.326480356619;
    msg.time_idle_unknown = 0.471698296461;
    msg.time_motor_ground = 0.521226937094;
    msg.time_motor_air = 0.825071277136;
    msg.time_motor_water = 0.943132645636;
    msg.time_motor_underwater = 0.230889861188;
    msg.time_motor_unknown = 0.388876541548;
    msg.rpm_min = 2993;
    msg.rpm_max = 24246;
    msg.depth_max = 0.357680310572;

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
    msg.setTimeStamp(0.00899239444081);
    msg.setSource(37828U);
    msg.setSourceEntity(53U);
    msg.setDestination(4220U);
    msg.setDestinationEntity(38U);
    msg.severity = 168U;
    msg.text.assign("IFFQYBUOCOYOADBEDKKCWJALLOPMVXKGYFYAOESKVRKOZAJDTFGETVRUGDYAZAXFXDJMVWTFGHSIGPWEQOIMHZGZYRIHLBBTPGRZVIZWNVLPRAURTXRBHWPXENATKEJCTJUXJNPCXRQPCULCJMEOLORXXUHZPBVNZUWHFWIMUY");

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
    msg.setTimeStamp(0.142795088353);
    msg.setSource(57052U);
    msg.setSourceEntity(253U);
    msg.setDestination(27745U);
    msg.setDestinationEntity(143U);
    msg.severity = 39U;
    msg.text.assign("CNLBKCJQKGYIGTXHBNAEGZTXMVGIOJBPQJXRMIOSQQJQSIPLRUWODNKTSAKOMNNOBNDYXYPMPJEVWBRWCJGQURPTAFVWCRHVMKGMYBHITFEEAXTESEARVPVDXSNBCHFZFADIDVQLHHGZBVAJCCTENKKWLUYSRGDHGYCOFBPYJAVUZEOZTKLLDZFTZXQYFUUTYJMVHMILCOE");

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
    msg.setTimeStamp(0.318703814529);
    msg.setSource(39313U);
    msg.setSourceEntity(245U);
    msg.setDestination(31109U);
    msg.setDestinationEntity(228U);
    msg.severity = 115U;
    msg.text.assign("RQMYWNBUSXBZ");

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
    msg.setTimeStamp(0.0519074588221);
    msg.setSource(9134U);
    msg.setSourceEntity(228U);
    msg.setDestination(5489U);
    msg.setDestinationEntity(12U);
    msg.channel = 26;
    msg.value = 582290769;
    msg.gain = 110U;

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
    msg.setTimeStamp(0.00370887986162);
    msg.setSource(11781U);
    msg.setSourceEntity(164U);
    msg.setDestination(57843U);
    msg.setDestinationEntity(156U);
    msg.channel = 108;
    msg.value = 465579415;
    msg.gain = 81U;

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
    msg.setTimeStamp(0.351492773493);
    msg.setSource(12319U);
    msg.setSourceEntity(19U);
    msg.setDestination(1471U);
    msg.setDestinationEntity(235U);
    msg.channel = 45;
    msg.value = 2038294735;
    msg.gain = 2U;

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
    msg.setTimeStamp(0.0740946647469);
    msg.setSource(19597U);
    msg.setSourceEntity(215U);
    msg.setDestination(54185U);
    msg.setDestinationEntity(239U);
    msg.ch01 = 0.113760343228;
    msg.ch02 = 0.887090153791;
    msg.ch03 = 0.577735005376;
    msg.ch04 = 0.680365862185;
    msg.ch05 = 0.471109827599;
    msg.ch06 = 0.106619227093;
    msg.ch07 = 0.965315607526;
    msg.ch08 = 0.74141658548;
    msg.ch09 = 0.976009780293;
    msg.ch10 = 0.394350984445;
    msg.ch11 = 0.013036862164;
    msg.ch12 = 0.774978944514;
    msg.ch13 = 0.208404447208;
    msg.ch14 = 0.860619607844;
    msg.ch15 = 0.840637745575;
    msg.ch16 = 0.903794002232;

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
    msg.setTimeStamp(0.207788753608);
    msg.setSource(32451U);
    msg.setSourceEntity(146U);
    msg.setDestination(55261U);
    msg.setDestinationEntity(98U);
    msg.ch01 = 0.0146496085016;
    msg.ch02 = 0.253609092635;
    msg.ch03 = 0.957535964288;
    msg.ch04 = 0.464598016198;
    msg.ch05 = 0.612222176322;
    msg.ch06 = 0.50947375028;
    msg.ch07 = 0.0688056444394;
    msg.ch08 = 0.482798284609;
    msg.ch09 = 0.701078495016;
    msg.ch10 = 0.329948358613;
    msg.ch11 = 0.695243971173;
    msg.ch12 = 0.566446663422;
    msg.ch13 = 0.595147619721;
    msg.ch14 = 0.401712747173;
    msg.ch15 = 0.90434686281;
    msg.ch16 = 0.831743287746;

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
    msg.setTimeStamp(0.651469889487);
    msg.setSource(40119U);
    msg.setSourceEntity(135U);
    msg.setDestination(9865U);
    msg.setDestinationEntity(67U);
    msg.ch01 = 0.652005023123;
    msg.ch02 = 0.774489732981;
    msg.ch03 = 0.409580414254;
    msg.ch04 = 0.836620853057;
    msg.ch05 = 0.587705236155;
    msg.ch06 = 0.335145649378;
    msg.ch07 = 0.357266248176;
    msg.ch08 = 0.983005544809;
    msg.ch09 = 0.658105320024;
    msg.ch10 = 0.411866328646;
    msg.ch11 = 0.611814371756;
    msg.ch12 = 0.147355956327;
    msg.ch13 = 0.465718741236;
    msg.ch14 = 0.787739976412;
    msg.ch15 = 0.65179866851;
    msg.ch16 = 0.156980200793;

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
    msg.setTimeStamp(0.371175145633);
    msg.setSource(26947U);
    msg.setSourceEntity(217U);
    msg.setDestination(52536U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.85332955083;
    msg.lon = 0.47838341408;
    msg.x = 0.221643874405;
    msg.y = 0.914630327441;
    msg.z = 0.939631334599;
    msg.vx = 0.996273979123;
    msg.vy = 0.393753452386;
    msg.vz = 0.993579718332;
    msg.depth = 182U;
    msg.speed = 0.465242185362;
    msg.psi = 0.0387783352559;

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
    msg.setTimeStamp(0.40514214629);
    msg.setSource(52792U);
    msg.setSourceEntity(15U);
    msg.setDestination(54311U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.610992184386;
    msg.lon = 0.766088848368;
    msg.x = 0.694209093404;
    msg.y = 0.305351976787;
    msg.z = 0.315521200404;
    msg.vx = 0.84782478999;
    msg.vy = 0.338822201845;
    msg.vz = 0.310646444287;
    msg.depth = 92U;
    msg.speed = 0.0253015801895;
    msg.psi = 0.125572307243;

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
    msg.setTimeStamp(0.576828036481);
    msg.setSource(1650U);
    msg.setSourceEntity(25U);
    msg.setDestination(48348U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.579328463219;
    msg.lon = 0.0280105681871;
    msg.x = 0.220970523092;
    msg.y = 0.576619824453;
    msg.z = 0.585368777876;
    msg.vx = 0.573823280512;
    msg.vy = 0.409618605141;
    msg.vz = 0.559209265553;
    msg.depth = 127U;
    msg.speed = 0.400877656828;
    msg.psi = 0.213385028198;

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
    msg.setTimeStamp(0.728485281717);
    msg.setSource(8515U);
    msg.setSourceEntity(75U);
    msg.setDestination(63153U);
    msg.setDestinationEntity(214U);
    msg.ctrl_cmd_v = 0.748877338774;
    msg.ctrl_cmd_omega = 0.335461798117;
    msg.sat_ctrl_cmd_v = 0.0403652783843;
    msg.sat_ctrl_cmd_omega = 0.238645235164;
    msg.robust_v = 0.243149044948;
    msg.robust_omega = 0.260813995413;
    msg.gamma = 0.648010235592;
    msg.gamma_dot = 0.422176887117;
    msg.g_err = 0.565052972738;
    msg.target_x = 0.794791985002;
    msg.target_y = 0.148060520848;
    msg.target_z = 0.725056183621;
    msg.target_vx = 0.126658946919;
    msg.target_vy = 0.0656438812284;
    msg.target_vz = 0.0262895485188;
    msg.x = 0.512978660376;
    msg.y = 0.139500414522;
    msg.z = 0.805399217266;
    msg.vx = 0.901458626916;
    msg.vy = 0.970104141283;
    msg.vz = 0.0342508752334;
    msg.pd_x = 0.12620691994;
    msg.pd_y = 0.648398404682;
    msg.p_ref_x = 0.897000836475;
    msg.p_ref_y = 0.0448178211714;
    msg.norm_mpf_err = 0.0145679727463;
    msg.mpf_err_x = 0.416082954405;
    msg.mpf_err_y = 0.608357314474;
    msg.mpf_err_z = 0.324966006621;
    msg.err_x = 0.128055671588;
    msg.err_y = 0.611331630143;
    msg.err_z = 0.117107989997;
    msg.start_x = 0.856481052648;
    msg.start_y = 0.687414590097;
    msg.start_z = 0.24470056267;
    msg.end_x = 0.147207065397;
    msg.end_y = 0.649490055884;
    msg.end_z = 0.993861541066;
    msg.stuck = 55U;

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
    msg.setTimeStamp(0.806299618882);
    msg.setSource(22862U);
    msg.setSourceEntity(139U);
    msg.setDestination(58399U);
    msg.setDestinationEntity(137U);
    msg.ctrl_cmd_v = 0.234046353994;
    msg.ctrl_cmd_omega = 0.435437520429;
    msg.sat_ctrl_cmd_v = 0.182446147341;
    msg.sat_ctrl_cmd_omega = 0.783600456743;
    msg.robust_v = 0.412606959395;
    msg.robust_omega = 0.543666071563;
    msg.gamma = 0.0940359356145;
    msg.gamma_dot = 0.40404312917;
    msg.g_err = 0.244533245947;
    msg.target_x = 0.970999098985;
    msg.target_y = 0.866500248027;
    msg.target_z = 0.590700623713;
    msg.target_vx = 0.62095439508;
    msg.target_vy = 0.388554134666;
    msg.target_vz = 0.256323467863;
    msg.x = 0.479077178927;
    msg.y = 0.571164314483;
    msg.z = 0.0803396502279;
    msg.vx = 0.703884055287;
    msg.vy = 0.787732664793;
    msg.vz = 0.822337023545;
    msg.pd_x = 0.181426312675;
    msg.pd_y = 0.545198149868;
    msg.p_ref_x = 0.375399002827;
    msg.p_ref_y = 0.798151682648;
    msg.norm_mpf_err = 0.423671850446;
    msg.mpf_err_x = 0.159477667202;
    msg.mpf_err_y = 0.289384197257;
    msg.mpf_err_z = 0.4937660904;
    msg.err_x = 0.805938986224;
    msg.err_y = 0.337940643028;
    msg.err_z = 0.615080144312;
    msg.start_x = 0.776101780126;
    msg.start_y = 0.424506712154;
    msg.start_z = 0.112489925123;
    msg.end_x = 0.152341449485;
    msg.end_y = 0.736549826413;
    msg.end_z = 0.863961536297;
    msg.stuck = 205U;

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
    msg.setTimeStamp(0.551331372586);
    msg.setSource(22582U);
    msg.setSourceEntity(26U);
    msg.setDestination(18931U);
    msg.setDestinationEntity(2U);
    msg.ctrl_cmd_v = 0.132185029454;
    msg.ctrl_cmd_omega = 0.467454657656;
    msg.sat_ctrl_cmd_v = 0.24253457391;
    msg.sat_ctrl_cmd_omega = 0.229371279286;
    msg.robust_v = 0.726673930147;
    msg.robust_omega = 0.227771233081;
    msg.gamma = 0.804407234964;
    msg.gamma_dot = 0.535655345799;
    msg.g_err = 0.323117791976;
    msg.target_x = 0.908707286299;
    msg.target_y = 0.287138352776;
    msg.target_z = 0.138880996134;
    msg.target_vx = 0.176782372051;
    msg.target_vy = 0.0980694645442;
    msg.target_vz = 0.580570196991;
    msg.x = 0.885226079843;
    msg.y = 0.395300509575;
    msg.z = 0.403905397198;
    msg.vx = 0.236469462073;
    msg.vy = 0.7464224078;
    msg.vz = 0.241745819104;
    msg.pd_x = 0.820315601513;
    msg.pd_y = 0.0322210245217;
    msg.p_ref_x = 0.230318975402;
    msg.p_ref_y = 0.965709273091;
    msg.norm_mpf_err = 0.899767810522;
    msg.mpf_err_x = 0.166182166151;
    msg.mpf_err_y = 0.103699192332;
    msg.mpf_err_z = 0.113420692876;
    msg.err_x = 0.382201554805;
    msg.err_y = 0.77399570729;
    msg.err_z = 0.137923212572;
    msg.start_x = 0.746234234473;
    msg.start_y = 0.69987106541;
    msg.start_z = 0.226841750302;
    msg.end_x = 0.35214165865;
    msg.end_y = 0.296347979604;
    msg.end_z = 0.840494804013;
    msg.stuck = 109U;

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
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.98617887791);
    msg.setSource(33598U);
    msg.setSourceEntity(143U);
    msg.setDestination(17817U);
    msg.setDestinationEntity(209U);
    msg.value = 0.265869093539;

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
    msg.setTimeStamp(0.461116910616);
    msg.setSource(14558U);
    msg.setSourceEntity(177U);
    msg.setDestination(10874U);
    msg.setDestinationEntity(9U);
    msg.value = 0.14971584823;

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
    msg.setTimeStamp(0.336642353773);
    msg.setSource(13616U);
    msg.setSourceEntity(216U);
    msg.setDestination(28534U);
    msg.setDestinationEntity(152U);
    msg.value = 0.414039808342;

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
