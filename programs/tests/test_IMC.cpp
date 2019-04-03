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
// IMC XML MD5: 8bd184c2c418b3f9404fc57509737788                            *
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
    msg.setTimeStamp(0.560081563476);
    msg.setSource(13960U);
    msg.setSourceEntity(66U);
    msg.setDestination(16928U);
    msg.setDestinationEntity(59U);
    msg.state = 237U;
    msg.flags = 132U;
    msg.description.assign("OICLAXRKRPFYLFFJEDINQGPTLDLSJMVQWRLFKCQOVXYDMBATVGUEFTXVBIWIBDBRHKZJKHIWKASCHCRAJSZEKI");

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
    msg.setTimeStamp(0.651922488596);
    msg.setSource(34044U);
    msg.setSourceEntity(179U);
    msg.setDestination(47993U);
    msg.setDestinationEntity(214U);
    msg.state = 165U;
    msg.flags = 170U;
    msg.description.assign("RNUIVFZEHLDFZAFSHAXFTQUPDKUPZLOKHWAMAEIKUTHMKUJVMWBPUOBXEDJBZQNVOKPCSXRPSTOOSQBGTLJMCIMFKGAPGQECBVIGIJPPACUJQWAWCGBCYCEOSXRMMYMKZIMTWCWZXZNXQRIDWLSDJZLHAJGEBXHDVYWRKITJSRN");

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
    msg.setTimeStamp(0.244015550225);
    msg.setSource(16430U);
    msg.setSourceEntity(16U);
    msg.setDestination(14443U);
    msg.setDestinationEntity(199U);
    msg.state = 208U;
    msg.flags = 225U;
    msg.description.assign("QTMWZIKZXUUCXFYSCFYODCLFBKCDEOLPZRDFTGOWJULIPDRAUEPSCEKOOHJNHXMFKIUDDJGFKWLMCABEKWFEDBJMMVQVHBJYMJLGRMCAVRYSZKNAOSNSIHRRJAWZJYGESVEOMYAQGVHGVIWGXPAZQVFW");

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
    msg.setTimeStamp(0.701488205173);
    msg.setSource(40269U);
    msg.setSourceEntity(7U);
    msg.setDestination(7228U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.616680376302);
    msg.setSource(12921U);
    msg.setSourceEntity(51U);
    msg.setDestination(19460U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.922809942328);
    msg.setSource(41264U);
    msg.setSourceEntity(177U);
    msg.setDestination(17534U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.285389053816);
    msg.setSource(21070U);
    msg.setSourceEntity(158U);
    msg.setDestination(29529U);
    msg.setDestinationEntity(242U);
    msg.id = 81U;
    msg.label.assign("CJCSTFSIKZULOOEWLHNGUJLYLZALQMBZLTLMFEAXJXYMBGDKMMBENURAWMTQHIPDYUVFEZILRTOHSOZQRFUCOCFWOOFDRWFSFQWUPGDPRJHGY");
    msg.component.assign("UPQAIOFCAFOBNJLZATIGWSLUPHTJDLDGXZIJNFQDLUIRHFABYXGSGWECQBBEHRBTYHLBTEREYVTVG");
    msg.act_time = 57507U;
    msg.deact_time = 48984U;

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
    msg.setTimeStamp(0.631119976615);
    msg.setSource(20178U);
    msg.setSourceEntity(120U);
    msg.setDestination(5559U);
    msg.setDestinationEntity(220U);
    msg.id = 132U;
    msg.label.assign("QLXPNMVNWKJOUKJIQTEMOUIWNXRDUDMEAITEDXYBBSNSLZGYRVEEMFDXVBQAFIRXTFPCPRIEUNLLPJAESYTIKKXRQZSTMBZJOEHBUJWSBTYQYRRSFYFCDLPHCQPOMFIABVSVONIRXVWZRBHSOMUULDZYHSDFOCUPGFQKHAKLENGUFDWGQZMMJQZTNTAHWJCCCHTRDXJJKIVGEKLHPN");
    msg.component.assign("SRUCTNBNUEDSMPGZSGFPEHWICKTSLYXKXTQXKLBJWPGJAXFWBCLXMYICPEIPINJWAOMVBDVLAWZNIQTMYRLHDCTHTOEYMTSUQDXQABMGWXYMVXVDTIJCQSCAXRNBHFZUSQWHAOVYVIREZDROZBLBCJUPNKVZOSAWLDCJOXRGUELVAMDGH");
    msg.act_time = 20980U;
    msg.deact_time = 30070U;

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
    msg.setTimeStamp(0.241038082389);
    msg.setSource(41805U);
    msg.setSourceEntity(127U);
    msg.setDestination(17043U);
    msg.setDestinationEntity(134U);
    msg.id = 24U;
    msg.label.assign("EJWQZTVIFHVKOPAACRCYHGTDMDBKPGSIQLKISAJEAQXHSVWYHJBUFOWYOANZCTUUYIRBNDQWJPEILMRJHSTXPRDQISQIMCSHUSOVCXENKCMYZAVFHUDMUTGLGMYBONTSBZESMLOEBLXQLPBFFVWIFOXURNJJPDABLLUKLRVFFWBPGVYVMEKKCRVPAZREXKNW");
    msg.component.assign("ZMLQNFUMXWIPMKGNZTYRWCLMISTNVDSEOATLMTYBYILFAUFOEJSKEAHROGRFJECJNMZFLEZQJZDBWHIUGXHKTDTFSHMKTDSPNCRXRFLFGBHZJXPGBCNRHLKPDMOLVISPKXSYDOUMJWTASFBWIKQTMVVQYYSDLHGYVXJAXODEQBPBKCWVUZXWNOPRRAHWHGNQQ");
    msg.act_time = 56308U;
    msg.deact_time = 63579U;

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
    msg.setTimeStamp(0.767440415235);
    msg.setSource(50443U);
    msg.setSourceEntity(108U);
    msg.setDestination(22720U);
    msg.setDestinationEntity(81U);
    msg.id = 136U;

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
    msg.setTimeStamp(0.643773212544);
    msg.setSource(49159U);
    msg.setSourceEntity(168U);
    msg.setDestination(22307U);
    msg.setDestinationEntity(25U);
    msg.id = 30U;

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
    msg.setTimeStamp(0.587233955944);
    msg.setSource(17540U);
    msg.setSourceEntity(201U);
    msg.setDestination(35790U);
    msg.setDestinationEntity(123U);
    msg.id = 0U;

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
    msg.setTimeStamp(0.441741536354);
    msg.setSource(53096U);
    msg.setSourceEntity(42U);
    msg.setDestination(27110U);
    msg.setDestinationEntity(227U);
    msg.op = 237U;
    msg.list.assign("XHGQBPZQDAYIMQAEKVYERIQZDSPKRUNXHNDJBXHVEPZUBGURNFMCUYAURZWPZT");

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
    msg.setTimeStamp(0.830010254866);
    msg.setSource(56359U);
    msg.setSourceEntity(95U);
    msg.setDestination(26173U);
    msg.setDestinationEntity(151U);
    msg.op = 107U;
    msg.list.assign("MTWSVRJNYSTFBQKYMOHKFPOLQIUCDLKGGKDVCUUTCBYHXEEXBLJPEDRPDNWIHJJAWXBGZTVNKAINFBWZGVDBRRVLYEWTXJHAMLTWZGMUZROARFUMDWFEXGXAEKTOZQKQJUQOVCHOFYTZGJIOISDSZMPIETDPGVKMXDGDBLSWCZRPCMQPAICPLNBGLRUTYMNCBNUKCEMWZJESSPRANUQYVYHUCFIXLKAQOSFFVYSSQVHBWQIOJNAPNY");

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
    msg.setTimeStamp(0.590375277143);
    msg.setSource(30977U);
    msg.setSourceEntity(84U);
    msg.setDestination(12388U);
    msg.setDestinationEntity(93U);
    msg.op = 148U;
    msg.list.assign("HBLCHEOFPWKVCNJVVGQGGQVTUIHZDXCTDVLJXBQCKZONLMGLVVUPVTMGHJERHXIEIRONIUEUSIPFILAVDSYYWWKRUGJCHHBYQFLZLDZTOFMFYYCUJSCXDPAXSXHRHEFDAOIODKREJJMRLYSNLJEYMDUAEBPNZKONTOYDMMWATQ");

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
    msg.setTimeStamp(0.983116034842);
    msg.setSource(20512U);
    msg.setSourceEntity(21U);
    msg.setDestination(13501U);
    msg.setDestinationEntity(109U);
    msg.value = 226U;

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
    msg.setTimeStamp(0.422000580906);
    msg.setSource(62829U);
    msg.setSourceEntity(46U);
    msg.setDestination(38447U);
    msg.setDestinationEntity(224U);
    msg.value = 155U;

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
    msg.setTimeStamp(0.504184981275);
    msg.setSource(21595U);
    msg.setSourceEntity(67U);
    msg.setDestination(50105U);
    msg.setDestinationEntity(252U);
    msg.value = 110U;

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
    msg.setTimeStamp(0.362090237593);
    msg.setSource(19356U);
    msg.setSourceEntity(181U);
    msg.setDestination(49997U);
    msg.setDestinationEntity(185U);
    msg.consumer.assign("FEKLCEUCDREHSJJNBZGNKQIJREBFGVJNLQJVHFQKWTLZPFQHIYGECOZZUCNVAGUMLNOQVXIADQVBRDSZJPROMBATAGYCTPQFMAPUUKZRRIUVHHWCFARMJKE");
    msg.message_id = 30629U;

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
    msg.setTimeStamp(0.436225450358);
    msg.setSource(6483U);
    msg.setSourceEntity(2U);
    msg.setDestination(45479U);
    msg.setDestinationEntity(142U);
    msg.consumer.assign("BSLBQUFCFATKWPIYQZGHBMXPHNLLDWDVZPKHMEDYDRXDRAIZEJOABQXDMSCXXGTVZXURXWPYANTPYZYHVWRUJGODAFNQAJMMFWIIJBAUGKZVYNKOBJYKTIAMVSEVQFTTZPLSNVCCYMFOHCVLOUPUTCJSZMWIMNHXYYRLVWGLFIDNOWJFBJUBZFPKEGTMIDEKOLGCEUSHHOACEDULRSQHPJENBKRSHRECQWFOUSRGNJOCRBIIATSQZ");
    msg.message_id = 61837U;

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
    msg.setTimeStamp(0.182613492605);
    msg.setSource(11163U);
    msg.setSourceEntity(251U);
    msg.setDestination(33008U);
    msg.setDestinationEntity(224U);
    msg.consumer.assign("AXHHGWEJMQVHQCIXZIDMWUSSDTPMFYFDYZENUKLRCOVGHPSNQZCPXNUTHFMBPRBXTYHUYNUEM");
    msg.message_id = 52738U;

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
    msg.setTimeStamp(0.949435950864);
    msg.setSource(15630U);
    msg.setSourceEntity(62U);
    msg.setDestination(57640U);
    msg.setDestinationEntity(138U);
    msg.type = 192U;

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
    msg.setTimeStamp(0.822442688911);
    msg.setSource(16025U);
    msg.setSourceEntity(175U);
    msg.setDestination(25916U);
    msg.setDestinationEntity(168U);
    msg.type = 89U;

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
    msg.setTimeStamp(0.928260578549);
    msg.setSource(54652U);
    msg.setSourceEntity(210U);
    msg.setDestination(15817U);
    msg.setDestinationEntity(183U);
    msg.type = 245U;

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
    msg.setTimeStamp(0.97162564055);
    msg.setSource(16534U);
    msg.setSourceEntity(166U);
    msg.setDestination(58086U);
    msg.setDestinationEntity(196U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.342534804286);
    msg.setSource(20548U);
    msg.setSourceEntity(191U);
    msg.setDestination(9686U);
    msg.setDestinationEntity(248U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.913449701711);
    msg.setSource(41345U);
    msg.setSourceEntity(149U);
    msg.setDestination(6841U);
    msg.setDestinationEntity(226U);
    msg.op = 246U;

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
    msg.setTimeStamp(0.860352061273);
    msg.setSource(62406U);
    msg.setSourceEntity(143U);
    msg.setDestination(25794U);
    msg.setDestinationEntity(138U);
    msg.total_steps = 206U;
    msg.step_number = 52U;
    msg.step.assign("JQZYGAHOXWELBRGIDBIPWHXFYBRQDVSTXAIFKDKQPFFBCSZUARTANFGSMIIPOMWQJYANBZUJPSQWLRKCNJHTTLEVWXHRZWMQANZRHCLMWDJPVIHMDAZKHGEXCGWUMDTOERXUCOHZETDV");
    msg.flags = 212U;

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
    msg.setTimeStamp(0.00264449907056);
    msg.setSource(39588U);
    msg.setSourceEntity(91U);
    msg.setDestination(34862U);
    msg.setDestinationEntity(224U);
    msg.total_steps = 121U;
    msg.step_number = 42U;
    msg.step.assign("LKACXKUKRGIACKAXSJIWPSZMXIQOQNJUNZJBLWOJWSNZDRPEUNOUIAKLHZKIYBR");
    msg.flags = 161U;

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
    msg.setTimeStamp(0.236625424666);
    msg.setSource(43284U);
    msg.setSourceEntity(186U);
    msg.setDestination(53298U);
    msg.setDestinationEntity(35U);
    msg.total_steps = 85U;
    msg.step_number = 20U;
    msg.step.assign("EHYZPHQNPAEHWFSVDXNJDJOKHINWANMXHOWUMVRJYQFOMTXUIPFLXVYGKJJHZXLVQVCJZWLSAEXLFGSDGKMGOJIYZXIZSVYZBYNBTAWBCOQCPTCQWSRLQFVSTFQB");
    msg.flags = 118U;

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
    msg.setTimeStamp(0.188107170787);
    msg.setSource(36264U);
    msg.setSourceEntity(168U);
    msg.setDestination(24757U);
    msg.setDestinationEntity(173U);
    msg.state = 46U;
    msg.error.assign("LMWEARCLTCBFCULLGKUVMICRQOFWQDCEPAVATOBQVDIBBFGGJK");

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
    msg.setTimeStamp(0.995532911497);
    msg.setSource(59702U);
    msg.setSourceEntity(200U);
    msg.setDestination(22607U);
    msg.setDestinationEntity(87U);
    msg.state = 219U;
    msg.error.assign("FGVHGLPLXBBNNEIZWOZHKPUKXHBJTPXUXCOREQITLPYUYVCFWATNGOTYIWQVHDMISQGXMJPPTOYFUSKWPZQSZHOZHSYLSORZHMDBPOVNVOLRYWICWDEFMUSEEECFOFXAWTSVFRNNBZLUGJ");

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
    msg.setTimeStamp(0.290486592052);
    msg.setSource(14842U);
    msg.setSourceEntity(8U);
    msg.setDestination(20841U);
    msg.setDestinationEntity(216U);
    msg.state = 12U;
    msg.error.assign("IGUNYBNFEIJATYIBRAULQVRCWXUHAEEJMVVLQNLDFOORGGUKURYRDEWITIXXABJGGZJRWADFFMMJFYOBPUKCULJGZXGTCZGWQBXVHFNLMWKVYLTCQDIWUSGNEOTAVYMZZYDZXMXHNNZMYATEKTGHTKOLHRQSKSECAVIYKHNLJFDEZQSBEPEDXBJQDIFPNFKSPUVRWBAVHSKBTLRVPCLRTOADBQWYMSXHICNOMSHFZQPDPPWP");

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
    msg.setTimeStamp(0.510605056627);
    msg.setSource(24606U);
    msg.setSourceEntity(217U);
    msg.setDestination(766U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.294023127273);
    msg.setSource(36284U);
    msg.setSourceEntity(148U);
    msg.setDestination(33154U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.13547862817);
    msg.setSource(55573U);
    msg.setSourceEntity(92U);
    msg.setDestination(35528U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.520459583158);
    msg.setSource(59148U);
    msg.setSourceEntity(205U);
    msg.setDestination(27983U);
    msg.setDestinationEntity(8U);
    msg.op = 202U;
    msg.speed_min = 0.939877943852;
    msg.speed_max = 0.430529472503;
    msg.long_accel = 0.947704012642;
    msg.alt_max_msl = 0.660678867347;
    msg.dive_fraction_max = 0.518444457982;
    msg.climb_fraction_max = 0.104626498759;
    msg.bank_max = 0.953937353711;
    msg.p_max = 0.693403815784;
    msg.pitch_min = 0.031367250119;
    msg.pitch_max = 0.153947724026;
    msg.q_max = 0.292816423857;
    msg.g_min = 0.728907738019;
    msg.g_max = 0.966119139786;
    msg.g_lat_max = 0.164727745997;
    msg.rpm_min = 0.792245383887;
    msg.rpm_max = 0.969874438041;
    msg.rpm_rate_max = 0.411941169865;

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
    msg.setTimeStamp(0.476097871741);
    msg.setSource(10426U);
    msg.setSourceEntity(4U);
    msg.setDestination(6344U);
    msg.setDestinationEntity(198U);
    msg.op = 92U;
    msg.speed_min = 0.227870506177;
    msg.speed_max = 0.661445628522;
    msg.long_accel = 0.386720813609;
    msg.alt_max_msl = 0.128318842916;
    msg.dive_fraction_max = 0.926487471255;
    msg.climb_fraction_max = 0.452117062193;
    msg.bank_max = 0.146444442082;
    msg.p_max = 0.962186694744;
    msg.pitch_min = 0.465243061371;
    msg.pitch_max = 0.358491989136;
    msg.q_max = 0.0217250844763;
    msg.g_min = 0.620851689466;
    msg.g_max = 0.557629824096;
    msg.g_lat_max = 0.59431406636;
    msg.rpm_min = 0.376943765045;
    msg.rpm_max = 0.436878866393;
    msg.rpm_rate_max = 0.0318151158366;

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
    msg.setTimeStamp(0.521543533734);
    msg.setSource(26797U);
    msg.setSourceEntity(114U);
    msg.setDestination(12300U);
    msg.setDestinationEntity(13U);
    msg.op = 210U;
    msg.speed_min = 0.535109110063;
    msg.speed_max = 0.184505417263;
    msg.long_accel = 0.145017729648;
    msg.alt_max_msl = 0.133460826042;
    msg.dive_fraction_max = 0.253026898068;
    msg.climb_fraction_max = 0.329813928696;
    msg.bank_max = 0.0578658518812;
    msg.p_max = 0.623630005752;
    msg.pitch_min = 0.308468858752;
    msg.pitch_max = 0.854712033665;
    msg.q_max = 0.648398626682;
    msg.g_min = 0.0548225462519;
    msg.g_max = 0.267183032642;
    msg.g_lat_max = 0.655497793483;
    msg.rpm_min = 0.990912332565;
    msg.rpm_max = 0.246211498076;
    msg.rpm_rate_max = 0.715371376743;

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
    msg.setTimeStamp(0.600157468433);
    msg.setSource(49396U);
    msg.setSourceEntity(177U);
    msg.setDestination(11254U);
    msg.setDestinationEntity(239U);
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.517693298706;
    tmp_msg_0.i = 0.100496682679;
    tmp_msg_0.d = 0.0985581084539;
    tmp_msg_0.a = 0.955526302546;
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
    msg.setTimeStamp(0.969946356677);
    msg.setSource(17404U);
    msg.setSourceEntity(90U);
    msg.setDestination(35898U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.359988687388);
    msg.setSource(51072U);
    msg.setSourceEntity(25U);
    msg.setDestination(34893U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.928943860351);
    msg.setSource(4532U);
    msg.setSourceEntity(125U);
    msg.setDestination(37145U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.32892053934;
    msg.lon = 0.385128797404;
    msg.height = 0.562584007352;
    msg.x = 0.873199053927;
    msg.y = 0.464111050159;
    msg.z = 0.688057320553;
    msg.phi = 0.53668430088;
    msg.theta = 0.763310814535;
    msg.psi = 0.476244827274;
    msg.u = 0.812514666834;
    msg.v = 0.358730579492;
    msg.w = 0.551302063254;
    msg.p = 0.505255613955;
    msg.q = 0.259205031735;
    msg.r = 0.542956082176;
    msg.svx = 0.550486564009;
    msg.svy = 0.533609123698;
    msg.svz = 0.37027570973;

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
    msg.setTimeStamp(0.119889615441);
    msg.setSource(25339U);
    msg.setSourceEntity(96U);
    msg.setDestination(25913U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.480711473513;
    msg.lon = 0.178070380158;
    msg.height = 0.821106271103;
    msg.x = 0.327183205145;
    msg.y = 0.192686154993;
    msg.z = 0.785033673825;
    msg.phi = 0.615586386963;
    msg.theta = 0.412973863278;
    msg.psi = 0.612476989154;
    msg.u = 0.633278059798;
    msg.v = 0.427465434061;
    msg.w = 0.177573418679;
    msg.p = 0.578785379891;
    msg.q = 0.727541590098;
    msg.r = 0.314081342088;
    msg.svx = 0.991599826635;
    msg.svy = 0.302086160382;
    msg.svz = 0.673205046171;

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
    msg.setTimeStamp(0.51880422951);
    msg.setSource(56506U);
    msg.setSourceEntity(65U);
    msg.setDestination(21975U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.129524548266;
    msg.lon = 0.56322275225;
    msg.height = 0.527039444796;
    msg.x = 0.0173505221046;
    msg.y = 0.625225908219;
    msg.z = 0.364973519415;
    msg.phi = 0.951305914814;
    msg.theta = 0.44328404805;
    msg.psi = 0.259119396136;
    msg.u = 0.238256762185;
    msg.v = 0.252584073968;
    msg.w = 0.583851844487;
    msg.p = 0.0900859491471;
    msg.q = 0.968883911169;
    msg.r = 0.559601634458;
    msg.svx = 0.208377142663;
    msg.svy = 0.879712915147;
    msg.svz = 0.214882715428;

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
    msg.setTimeStamp(0.813273775289);
    msg.setSource(10894U);
    msg.setSourceEntity(122U);
    msg.setDestination(22419U);
    msg.setDestinationEntity(107U);
    msg.op = 9U;
    msg.entities.assign("QKBAFWIENRWDYNJQWFITHGXLSBRGBFPLELYERSVMCZNUMIDQJBNFKSDLIPGDOVHXCETUYNQRAKAPQMUWSPVPWNPWBNRPZOFRSWZUAMVOVHBTAFGKLGHSMGOCMKUXMIEICZUCCGRPSNWJDIXOAHGEOUJFGEHLXOSKBAQJRCYXJTLJFQTYBUWUNLMPXYEJFEJWOYVOSDTKRPBZIXIDRTSMZCQDKVHCXZOEZTHDVBKAIFKHZGY");

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
    msg.setTimeStamp(0.875856198674);
    msg.setSource(38690U);
    msg.setSourceEntity(40U);
    msg.setDestination(20655U);
    msg.setDestinationEntity(124U);
    msg.op = 11U;
    msg.entities.assign("URAYMLQZAEJYFWNPHIPSTTEGWCIBQTQHWEFREXBSYHVRNWIZPYHMYZQKOPLYDJOYASCDWXSTKGZPASFJMCBKFGJZGNNGNUBRMBEMQIJGGVRSXTKLDCLHLBZ");

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
    msg.setTimeStamp(0.749260726347);
    msg.setSource(55870U);
    msg.setSourceEntity(15U);
    msg.setDestination(13564U);
    msg.setDestinationEntity(43U);
    msg.op = 117U;
    msg.entities.assign("CCNWAKHSYQMOGVNNTFVJDWSAKGLBFRJLHMQWUIPGRBWZOIXAYZAQEEROKVTBPCBFBJXGEMZNZEWKPASXQAULVXKSFYNJKSMFXEOCTMDZZFCTQJIWAMHXDCUSARMUOHTCEZPUESNVNUFELCQPKOWCHYHYBVVZDUJYHIRJBPVLDZQTIT");

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
    msg.setTimeStamp(0.676797519641);
    msg.setSource(40504U);
    msg.setSourceEntity(35U);
    msg.setDestination(17132U);
    msg.setDestinationEntity(152U);
    msg.type = 186U;
    msg.speed = 3443U;
    const char tmp_msg_0[] = {65, -31, -99, 59, 106, -105, 26, -57, -52, 39, 37, -69, 109, 114, 119, 45, 93, 113, -23, 45, -14, -77, 15, -112, -115, 54, 120, -65, 51, 55, 44, 92, -108, -22, -86, 63, -90, 86, 77, 60, -80, 19, 99, -59, 23, 46, 74, 31, 49, 56, -111, -99, 43, 73, 38, -29, -26, -17, -111, 61, 86, -127, -53, 21, 123, 102, -116, -19, -6, -85, -40, 36, 17, -14, -81, -75, -115, 92, -50, 23, -39, 32, -27, 44, 51, 82, 13, 3, -76, -116, 106, -25, 49, 91, -51, 86, 79, 38, -55, -39, -106, 97, 66, -46, 31, 103, 25, -38, -26, 40, -56, -58, -14, 9, 105, -56, -94, 61, -128, -85, -29, 11, 121, 21, 12, -62, -66, -12, 30, -90, -108, -88, 3, -33, -80, 95, 105, -62, -52, -67, 125, -83, -41, -62, -43, 98, -65, -86, 44, -51, -111, 62, 126, -73, 53, -59, 10, 120, 5, -103, 105, -93, -82, -45, -51, 106, 1, 12, -75, -80, 65, 113, 37, 86, -110, -68, 10, -27, -29, -85, -54, -83, -42, -47, 112, 98, 121, -36, -10, -110, -105, 104, 110, 79, -87, -84, -3, 97, 16, 100, 123, -38, 11, -83, 91, -53, 111, 53, -10, 25, -70, -63, -92, -73, 22, 56, 31, 4, -64, 50, -96, 40, 23, -62, 0, 66, 15, 14, -67, 41};
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
    msg.setTimeStamp(0.572252733873);
    msg.setSource(38392U);
    msg.setSourceEntity(96U);
    msg.setDestination(39561U);
    msg.setDestinationEntity(79U);
    msg.type = 58U;
    msg.speed = 56601U;
    const char tmp_msg_0[] = {73, -114, 86, 73, -77, -55, 91, -4, 16, -116, -30, -75, -17, 56, 105, 85, -20, 18, 103, -26, 90, -52, -78, 6, -76, -88, -78, 90, 21, -57, -119, 105, 101, 116, -83, -87, 99, 123, 66, 14, -111, -9, -118, 78, 20, 57, 26, 15, 118, -54, 76, 60, -81, -43, 74, 77, -114, -11, 62, -116, 34, 84, -10, -1, 81, -10, 15, -65, 126, 66, -11, -9, 51, -72, -117, -41, 37, 18, -27, -4, 25, 87, -102, -54, -70, -114, -89, 110, -34, -72, 84, -74, 116, -121, 43, 109, 9, 112, -22, 83, -18, 89, -118, 33, -117, -70, 50, 44, 43, -43, -19, -76, 111, 16, 99, 14, -54, -85, -25, 61, 44, 34, 121, 83, -21, 101, -126, -18, -33, -27, 126, -80, -3, -124, -52, 90, 3, -104, -51, -62, 30, -24, 23, 103, -102, 122, -99};
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
    msg.setTimeStamp(0.580749154979);
    msg.setSource(6071U);
    msg.setSourceEntity(191U);
    msg.setDestination(28449U);
    msg.setDestinationEntity(5U);
    msg.type = 33U;
    msg.speed = 6159U;
    const char tmp_msg_0[] = {-34, 68, -104, -74, -2, 15, -57, -91, 54, -103, 121, -36, -12, -105, -66, -1, -44, 2, -6, 69, 72, 48, 42, -85, 20, 80, -45, 0, 86, -116, 11, 62, -106, -25, -109, -20, -37, -47, -67, -59, 98, 101, 36, 106, 102, -79, 71, -93, 98, 47, 3, 8, 50, 61, -80, 41, -57, -68, -106, -126, -7, -47, 99, -55, -89, -125, -85, 122, -15, 46, 44, -127, 48, -42, -19, -102, 123, 87, 28, 95, -48, -26, -99, 21, -49, 46, -26, -123, -75, 33, 78, -118, -71, -115, 48, 90, 53, -13, 36, -121, -49, -89, -60, -61, -121, 122, 64, -114, -12, -94, -108, 100, 88, 124, -49, 66, 67, -86, -3, -50, -123, 106, -114, -128, -2, 11, 45, 91, -77, 110, 52, -7, -103, -40, -59, -80, -88, 120, -35, 16, -98, -71, 46, -23, -43, 0, 54, 43, -128, -48, 105, -5, -6, 73, -9, -64, -37, 53, -101, 111, 90, -36, 40, -104, 6, 60, 32, 102, 62, 78, -96, 53, 21, 87, 54, 56, -33, -117, -94, 57, -40, 40, 104, -118, 66, 76, 69, -79, -105, 122, 79, -29, 67, -46, -122, 88, -79, 86};
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
    msg.setTimeStamp(0.50679366226);
    msg.setSource(62960U);
    msg.setSourceEntity(76U);
    msg.setDestination(33637U);
    msg.setDestinationEntity(93U);
    msg.op = 216U;
    msg.tas2acc_pgain = 0.356486980633;
    msg.bank2p_pgain = 0.597587455099;

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
    msg.setTimeStamp(0.142487077924);
    msg.setSource(27794U);
    msg.setSourceEntity(83U);
    msg.setDestination(14780U);
    msg.setDestinationEntity(11U);
    msg.op = 100U;
    msg.tas2acc_pgain = 0.309258630456;
    msg.bank2p_pgain = 0.618045420192;

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
    msg.setTimeStamp(0.322670458768);
    msg.setSource(27247U);
    msg.setSourceEntity(72U);
    msg.setDestination(18351U);
    msg.setDestinationEntity(34U);
    msg.op = 93U;
    msg.tas2acc_pgain = 0.517401418208;
    msg.bank2p_pgain = 0.51917113775;

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
    msg.setTimeStamp(0.673794980923);
    msg.setSource(43946U);
    msg.setSourceEntity(103U);
    msg.setDestination(38898U);
    msg.setDestinationEntity(224U);
    msg.available = 3125064473U;
    msg.value = 189U;

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
    msg.setTimeStamp(0.833265662399);
    msg.setSource(4347U);
    msg.setSourceEntity(225U);
    msg.setDestination(37108U);
    msg.setDestinationEntity(12U);
    msg.available = 2412575566U;
    msg.value = 98U;

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
    msg.setTimeStamp(0.568593018928);
    msg.setSource(11549U);
    msg.setSourceEntity(76U);
    msg.setDestination(59734U);
    msg.setDestinationEntity(240U);
    msg.available = 32428044U;
    msg.value = 144U;

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
    msg.setTimeStamp(0.490387255396);
    msg.setSource(50448U);
    msg.setSourceEntity(198U);
    msg.setDestination(19471U);
    msg.setDestinationEntity(172U);
    msg.op = 127U;
    msg.snapshot.assign("ZTNOBKWXAOERPUIZRAAPFYIHARXWLHDTOZRTXVOVVLKMIJSVIPROJHQIDXQDTGSGFIWBAUHEUGEXKFZODQUUCWBLKJYYTNPQAJSOHAVAJZNNVKSXBJFUYKNWGBHIPDBVOEMLOEYNDWLFHPQDFSBPLWWNHBBQTHNJKWGSUKCLMSXMCNTEGZGLZUFNSRPLJC");
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.982448140105;
    tmp_msg_0.time_next_service = 0.664464412525;
    tmp_msg_0.time_motor_next_service = 0.432268790354;
    tmp_msg_0.time_idle_ground = 0.210585669622;
    tmp_msg_0.time_idle_air = 0.236748241822;
    tmp_msg_0.time_idle_water = 0.463944134796;
    tmp_msg_0.time_idle_underwater = 0.940903625451;
    tmp_msg_0.time_idle_unknown = 0.61608382281;
    tmp_msg_0.time_motor_ground = 0.249732564575;
    tmp_msg_0.time_motor_air = 0.961052755583;
    tmp_msg_0.time_motor_water = 0.634932906929;
    tmp_msg_0.time_motor_underwater = 0.252829389214;
    tmp_msg_0.time_motor_unknown = 0.0852080806865;
    tmp_msg_0.rpm_min = -30859;
    tmp_msg_0.rpm_max = 31678;
    tmp_msg_0.depth_max = 0.190752852181;
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
    msg.setTimeStamp(0.133697259733);
    msg.setSource(62612U);
    msg.setSourceEntity(26U);
    msg.setDestination(26692U);
    msg.setDestinationEntity(182U);
    msg.op = 142U;
    msg.snapshot.assign("HKTWDPXFGRFOUXOKKARURFATYVQEOPRFOVOYVZRFRVSPMZMHNPHEIXLOOKZPZWNNYGCFOLSEJFUVLCNAMMGBMGHSPJBTKJBVVIABADINDXPQWZFBEYVLIHNLFDIBTDWJEPSIGXJTGGYDQSDDRYCQPRLJHQKSUKNLMB");
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.953445196766);
    msg.setSource(52770U);
    msg.setSourceEntity(195U);
    msg.setDestination(13300U);
    msg.setDestinationEntity(189U);
    msg.op = 176U;
    msg.snapshot.assign("LDVCDEPXQTRIFQSBLQOPHDAXZSTAMQHGPOCNWFZGTHEKTZEKXWUMJKWHUQXUOUSEHC");
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.314191942704);
    msg.setSource(812U);
    msg.setSourceEntity(222U);
    msg.setDestination(36227U);
    msg.setDestinationEntity(27U);
    msg.op = 205U;
    msg.name.assign("MYMCMNOXVESDZYVCFRNLXQXWQFHETAJGJFEGNJWFKBIH");

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
    msg.setTimeStamp(0.680023144629);
    msg.setSource(18268U);
    msg.setSourceEntity(38U);
    msg.setDestination(2155U);
    msg.setDestinationEntity(88U);
    msg.op = 108U;
    msg.name.assign("RYCEFQFNOWTPEGRZMSUUWFPEEXYWOSLTSOGXUMAXVABSMTZIHMCQLRDKJLSGNYBHYVQAJUZKAMLBHCJXDORKSYHRIFLGZAI");

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
    msg.setTimeStamp(0.358850737897);
    msg.setSource(5598U);
    msg.setSourceEntity(212U);
    msg.setDestination(62489U);
    msg.setDestinationEntity(143U);
    msg.op = 216U;
    msg.name.assign("OEJAIACQNVBDUWKIPKUXXWORISPMWCZFSNNXKVLLBKEKCMDEQPZVXPHDICREDUZAYBTGSCWKTRNLBAPOXRZYNYXREECHUELKNWTBLVRCYWFSFXLSPDIUCGJTZZJXMOCJQUIPJFMOPJZGJAUYXVUMLHGOTJEYMDHDJGVWWKFTVPOHSNHOVUQYFNBOZGNVSBMCSFLYBBHDGAVTFXKRPWLHIMQAKGZFLQGTHAQMIDIEQTHBZGMFJAQYW");

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
    msg.setTimeStamp(0.410982721391);
    msg.setSource(60297U);
    msg.setSourceEntity(251U);
    msg.setDestination(39914U);
    msg.setDestinationEntity(234U);
    msg.type = 138U;
    msg.htime = 0.053813277921;
    msg.context.assign("AQRKUJLGTLJASGPPRENXOMFUGMWAGQUXKHSZTZMSCHGPYVOZMEVLICSAIEYCPXOYBBGZAIFNETMXLPYRBCECKJJDUINDWDHLSXQWSXWCIRUPVERHIVQFYZKKHNISVGNLMKNTQQEVJJ");
    msg.text.assign("VKGIBLCUUMDGXJRSTKTSBOCRLOFSENIEPOVOKYWQFGPHEFRHNDDRBEOQFCHGYCNHVYEZYHIXTVTEYDI");

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
    msg.setTimeStamp(0.210155139346);
    msg.setSource(44056U);
    msg.setSourceEntity(159U);
    msg.setDestination(13434U);
    msg.setDestinationEntity(198U);
    msg.type = 115U;
    msg.htime = 0.418929383338;
    msg.context.assign("HJZMONMFOCTXVSNAUOGLVQWBGZWXYBTDJRLGNCTMHUZILSDIJFIRQWRPHRWHAWSTYGJJETGLSUYFLSEYNZVVXLIQKFJUJTWOEUFOKKFXFPCDINQONZTPWPCOLVAMAXNLWBAJPUZVDXWAXVMBARFOBNBKCBFSQMYHYSOATGEDRVRHTYIHZNMPDPNMKCLEJFQSVKECRQYDKJA");
    msg.text.assign("SLLUAIKDNBZFURPRGBMCYRSVRGJJASYVRSTICFDWUFHNCCODZZIZYWTENAOEGLNTPLLXTOUUDCMIQAVORJAKTSYBJGQJPYKCSRYQHEAWMOXFQWWEBAXRQIEMJXMOHUOZQHHNNHZVHQENLDQLGCGNPJESPYOKVXYFVWBVKIIKCLRMDKVATHTPJQWCPTYZBERDTQDHGGGWWPZOBSNISDJOCVBXKVXBIZUHNMK");

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
    msg.setTimeStamp(0.808794696769);
    msg.setSource(15469U);
    msg.setSourceEntity(82U);
    msg.setDestination(35266U);
    msg.setDestinationEntity(251U);
    msg.type = 193U;
    msg.htime = 0.52443151694;
    msg.context.assign("FBHUEGHNBOSEQAPJKVMIMDVGDYSWGVITFYVYENAJPVPLXQIGDOFHUFMBXPYOUMQXHUKZGLMYGRUZZERTRZTLLJTSARVAMARZWAKZESKTRJHPRCTLBTXZJPAMCIYCENPOWOSSKTPAQKTBOGWZCQUNKUYAHNXUWUGSWLBWLKOIZJSRWFHUNBLIJIQEDPIFJCWFFTHR");
    msg.text.assign("FSJHXDGCWAAJHTZEKITONDBKJIEK");

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
    msg.setTimeStamp(0.724731377056);
    msg.setSource(20807U);
    msg.setSourceEntity(177U);
    msg.setDestination(18394U);
    msg.setDestinationEntity(228U);
    msg.command = 201U;
    msg.htime = 0.654195173825;

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
    msg.setTimeStamp(0.0431982184229);
    msg.setSource(58296U);
    msg.setSourceEntity(8U);
    msg.setDestination(13768U);
    msg.setDestinationEntity(145U);
    msg.command = 142U;
    msg.htime = 0.479104487676;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 89U;
    tmp_msg_0.htime = 0.0978649694771;
    tmp_msg_0.context.assign("NHAGVTCUDCXB");
    tmp_msg_0.text.assign("CYHDCLWHGZRHERJMEGUVICYLDHIQLAVHFHYIJISAPZYOGCOWNMRVESFQBTZNPTOSSZMKJZSJPMKEDPXGRVANUVXNKXPRUKJHVFSFNUZZCBUGTQRYEXROLFDQANWSSTYPELQJWLUYPMBFWLEVIGIRBZBBNFDXHWBUOKCGACACUMXUSTBDQXWGEINOCYIPQRVLJOFOFAJWDXPZXJIMLKHOAWTORGHIBEMQSMGVYXCK");
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
    msg.setTimeStamp(0.884361800701);
    msg.setSource(59229U);
    msg.setSourceEntity(112U);
    msg.setDestination(23405U);
    msg.setDestinationEntity(48U);
    msg.command = 29U;
    msg.htime = 0.409846357877;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 170U;
    tmp_msg_0.htime = 0.0249989558197;
    tmp_msg_0.context.assign("KTJHYFGRKIYVZDMOCMHCBECVILKVZXSTMFOMNPPQAAEZUTPYRURQRKLAGFUVNBDHDGZOXCPLGYJWMSAIGHUXHZELOAUGGKMGMETJMAHGWSQKDDZTYIDUADYQSGAUKWNOILRFTSVBHEBRHFQQEPE");
    tmp_msg_0.text.assign("WNLHXPYXJVRSQWQWUOMKDMIHCZGRDHLGVSEQCUNOHKMEPKVVTCLCSEMPXHZTBVVDFBQDIMQURAHQTOHICWJVXJYBBDWETJWUZGGDBJHVOSSTNNZXCPMJTRAAOYTP");
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
    msg.setTimeStamp(0.461280635971);
    msg.setSource(29792U);
    msg.setSourceEntity(141U);
    msg.setDestination(58820U);
    msg.setDestinationEntity(182U);
    msg.op = 113U;
    msg.file.assign("AWACUBPQLFVDSEEOVBMNHYZMTJCF");

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
    msg.setTimeStamp(0.253206962561);
    msg.setSource(39723U);
    msg.setSourceEntity(6U);
    msg.setDestination(8471U);
    msg.setDestinationEntity(195U);
    msg.op = 30U;
    msg.file.assign("PMZEIWRASIEMWRWFAQOTOLWIIMHDOEVRODOLTSXOGSCAARFFPCMQGIUCQBAJCSLLGQNUNKTPHURSNNYXTYTEKLVYCBFGMVGRBPICEAOFMWQPMUJJIKVZORLIPKSJJMHEUZDCXTTDEUU");

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
    msg.setTimeStamp(0.44734423041);
    msg.setSource(7549U);
    msg.setSourceEntity(220U);
    msg.setDestination(48565U);
    msg.setDestinationEntity(163U);
    msg.op = 212U;
    msg.file.assign("SJENFKZYCIQURYHQGEFAQUWXBKMUQLGTOMKOMZLPWNVLWEPPCUPHAUOUVSNCXFVATEXETBBQBSPZZMHWXSPXSGXBIVFJFIXDSHDDJOPKNRPLIXYSEBSPKWAURKGELODEMTGZTWRDNJIRAYGVCMOMEKMADIRFJVYNHCGMQNRHCAKYCTDXKATDHZLCZYVJTFLOOZGATRQVLBGNJABWBLZGZMNQSSWHQXVYH");

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
    msg.setTimeStamp(0.0849772557696);
    msg.setSource(63083U);
    msg.setSourceEntity(35U);
    msg.setDestination(55454U);
    msg.setDestinationEntity(114U);
    msg.op = 119U;
    msg.clock = 0.139224136837;
    msg.tz = 56;

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
    msg.setTimeStamp(0.378816283793);
    msg.setSource(20165U);
    msg.setSourceEntity(37U);
    msg.setDestination(43695U);
    msg.setDestinationEntity(205U);
    msg.op = 173U;
    msg.clock = 0.652653905368;
    msg.tz = -85;

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
    msg.setTimeStamp(0.186006538647);
    msg.setSource(26223U);
    msg.setSourceEntity(194U);
    msg.setDestination(34872U);
    msg.setDestinationEntity(39U);
    msg.op = 76U;
    msg.clock = 0.0505833341811;
    msg.tz = -8;

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
    msg.setTimeStamp(0.53869862755);
    msg.setSource(6509U);
    msg.setSourceEntity(246U);
    msg.setDestination(45366U);
    msg.setDestinationEntity(80U);
    msg.conductivity = 0.193849198014;
    msg.temperature = 0.95088106741;
    msg.depth = 0.0578617703426;

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
    msg.setTimeStamp(0.864054467479);
    msg.setSource(23815U);
    msg.setSourceEntity(23U);
    msg.setDestination(64578U);
    msg.setDestinationEntity(147U);
    msg.conductivity = 0.627526783772;
    msg.temperature = 0.880413098077;
    msg.depth = 0.364081313332;

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
    msg.setTimeStamp(0.808887199865);
    msg.setSource(41971U);
    msg.setSourceEntity(217U);
    msg.setDestination(28074U);
    msg.setDestinationEntity(66U);
    msg.conductivity = 0.654208154129;
    msg.temperature = 0.0493469530775;
    msg.depth = 0.780376153535;

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
    msg.setTimeStamp(0.0404243864753);
    msg.setSource(45953U);
    msg.setSourceEntity(49U);
    msg.setDestination(24291U);
    msg.setDestinationEntity(220U);
    msg.altitude = 0.250430067151;
    msg.roll = 47142U;
    msg.pitch = 52438U;
    msg.yaw = 14461U;
    msg.speed = -5085;

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
    msg.setTimeStamp(0.636670548725);
    msg.setSource(36198U);
    msg.setSourceEntity(26U);
    msg.setDestination(22279U);
    msg.setDestinationEntity(213U);
    msg.altitude = 0.7532426296;
    msg.roll = 7739U;
    msg.pitch = 22827U;
    msg.yaw = 57201U;
    msg.speed = 7835;

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
    msg.setTimeStamp(0.678413047918);
    msg.setSource(53817U);
    msg.setSourceEntity(16U);
    msg.setDestination(3083U);
    msg.setDestinationEntity(167U);
    msg.altitude = 0.548910562705;
    msg.roll = 23394U;
    msg.pitch = 63849U;
    msg.yaw = 49475U;
    msg.speed = -23015;

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
    msg.setTimeStamp(0.994273814967);
    msg.setSource(17045U);
    msg.setSourceEntity(139U);
    msg.setDestination(9950U);
    msg.setDestinationEntity(89U);
    msg.altitude = 0.532615866808;
    msg.width = 0.554761970796;
    msg.length = 0.299145591074;
    msg.bearing = 0.0673170613813;
    msg.pxl = -31324;
    msg.encoding = 20U;
    const char tmp_msg_0[] = {-61, 79, -94, -22, 115, -24, 62, -32, -104, 97, -28, -6, 121, 92, 40, -38, 106, -68, 112, -102, 45, 106, -98, 57, 53, 29, -117, 36, -50, 108, -45, 119, 115, -91, -120, 2, 5, -110, 61, -69, 88, 19, -103, -103, -112, 80, 103, -76, -15, -42, -19, 28, -119, -80, 80, 73, -31, -101, 105, -71, 94, -53, -4, -4, 75, 2, 19, -121, 4, -126, 65, -23, -73, -39, 15, 54, -104, 71, 126, 65, 25, -40, 103, 121, 7, -44, 61, 75, -123, 18, 61, -19, 26, -73, -46, -121, 104, 99, -8, -76, -69, -74, -53, 66, 99, 65, -67, -2, 102, -35, 26, -58, 54, 30, -110, -52, 83, -32, -73, 79, -51, 118, -127, 17, -85, 32, -125, -34, -112, -31, -26, 99};
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
    msg.setTimeStamp(0.112546650302);
    msg.setSource(7814U);
    msg.setSourceEntity(113U);
    msg.setDestination(36069U);
    msg.setDestinationEntity(33U);
    msg.altitude = 0.516751780009;
    msg.width = 0.309526692696;
    msg.length = 0.955456146674;
    msg.bearing = 0.0549971112815;
    msg.pxl = -21354;
    msg.encoding = 101U;
    const char tmp_msg_0[] = {60, -34, 15, 5, 93, -61, 9, -65, -8, 83, -128, 112, -67, -28, -15, -81, 29, -65, 33, -85, 94, 64, -61, 124, -45, 3, 33, -59, 46, -56, 86, 57, 50, 41, 94, 121, 12, 104, 12, -23, 112, -40, 117, -126, 10, -58, -55, -64, 98, -104, -18, -42, -65, 74, -81, -96, -108, 89, 1, -87, 80, 64, 126, 62, 44, -49, 42, -112, -102, 76, -45, 45, -96, 7, -96, 33, 59, -16, -42, 77, -30, 65, 86, -8, -55, -64, -61, -28, 42, 34, -39, 111, -109, -65, 83, -19, 95};
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
    msg.setTimeStamp(0.67902222955);
    msg.setSource(3236U);
    msg.setSourceEntity(103U);
    msg.setDestination(6405U);
    msg.setDestinationEntity(21U);
    msg.altitude = 0.281118750908;
    msg.width = 0.0795544579134;
    msg.length = 0.325725018981;
    msg.bearing = 0.761202542622;
    msg.pxl = 31204;
    msg.encoding = 221U;
    const char tmp_msg_0[] = {-119, -44, 92, 48, 23, 53, 51, 124, -1, -80, 13, -112, -59, 72, -51, 119, 89, -14, -48, -41, -15, -118, 13, 121, -25, 93, -22, -59, 86, -64, 105, 37, -24, 24, -43, -30, 23, 94, -8, 44};
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
    msg.setTimeStamp(0.980415757703);
    msg.setSource(10963U);
    msg.setSourceEntity(237U);
    msg.setDestination(23371U);
    msg.setDestinationEntity(125U);
    msg.text.assign("YDKJFTCSESGUWZBPNZYBTAUGVFBGHMIOGO");
    msg.type = 149U;

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
    msg.setTimeStamp(0.26164968238);
    msg.setSource(25516U);
    msg.setSourceEntity(238U);
    msg.setDestination(14508U);
    msg.setDestinationEntity(162U);
    msg.text.assign("FJENFSXVFLDLGEWFXZMOYHIOAQHDZGNSKOIBYVLQBCUHUWVEKTKLABBKIBLZTDXYKCQYCBZJFAMHJJDJPGEP");
    msg.type = 96U;

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
    msg.setTimeStamp(0.298787696998);
    msg.setSource(20123U);
    msg.setSourceEntity(25U);
    msg.setDestination(23047U);
    msg.setDestinationEntity(26U);
    msg.text.assign("DOUQTUCWTXNZLCWDRMOGQBZJTXRFDWVELCYSOSOKCPIVAJCAQCMOKIGFJPHIPBLJPPCBYYWTAFOHRWXWISWRTAAVUYXUDIIDREFIKVNYJUKKRBNOQKJGUTDJRGNIRBLSKXFADXLZEZVZHZWFGNPBPPHDGJBFXZWFSSTUEUVSSNQYYNLZXGMNMQEOR");
    msg.type = 226U;

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
    msg.setTimeStamp(0.976362792342);
    msg.setSource(5644U);
    msg.setSourceEntity(10U);
    msg.setDestination(21789U);
    msg.setDestinationEntity(109U);
    msg.parameter = 246U;
    msg.numsamples = 41U;
    msg.lat = 0.946202238428;
    msg.lon = 0.541790912941;

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
    msg.setTimeStamp(0.827081807532);
    msg.setSource(2261U);
    msg.setSourceEntity(183U);
    msg.setDestination(62165U);
    msg.setDestinationEntity(45U);
    msg.parameter = 134U;
    msg.numsamples = 246U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 14891U;
    tmp_msg_0.avg = 0.6538486473;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.448318929622;
    msg.lon = 0.542476758857;

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
    msg.setTimeStamp(0.0353225764146);
    msg.setSource(43455U);
    msg.setSourceEntity(172U);
    msg.setDestination(35157U);
    msg.setDestinationEntity(168U);
    msg.parameter = 35U;
    msg.numsamples = 247U;
    msg.lat = 0.726352012846;
    msg.lon = 0.868631703525;

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
    msg.setTimeStamp(0.555187835518);
    msg.setSource(62819U);
    msg.setSourceEntity(17U);
    msg.setDestination(4063U);
    msg.setDestinationEntity(5U);
    msg.depth = 30638U;
    msg.avg = 0.283072468495;

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
    msg.setTimeStamp(0.919394887798);
    msg.setSource(10888U);
    msg.setSourceEntity(95U);
    msg.setDestination(2780U);
    msg.setDestinationEntity(4U);
    msg.depth = 61374U;
    msg.avg = 0.254446740878;

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
    msg.setTimeStamp(0.178824857489);
    msg.setSource(55602U);
    msg.setSourceEntity(154U);
    msg.setDestination(37080U);
    msg.setDestinationEntity(45U);
    msg.depth = 29514U;
    msg.avg = 0.408341966043;

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
    msg.setTimeStamp(0.178431750862);
    msg.setSource(61539U);
    msg.setSourceEntity(245U);
    msg.setDestination(40757U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.105780304506);
    msg.setSource(35133U);
    msg.setSourceEntity(50U);
    msg.setDestination(65029U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.0977975443049);
    msg.setSource(23990U);
    msg.setSourceEntity(249U);
    msg.setDestination(556U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.286449327307);
    msg.setSource(55632U);
    msg.setSourceEntity(195U);
    msg.setDestination(2628U);
    msg.setDestinationEntity(217U);
    msg.sys_name.assign("DYGKWXEVMBXNQLETVZLPOTCUJTBRDVLZQBRFCICTVAFJSXAEUWLZHZWMHALQGSXODMPEYTNLJRVCDEJUQOHXLDSYGBSXEEHGPRVCPUOUWRVJQAJYS");
    msg.sys_type = 206U;
    msg.owner = 49905U;
    msg.lat = 0.157787830795;
    msg.lon = 0.851026301641;
    msg.height = 0.460277221717;
    msg.services.assign("IKNUGLPYWWGGAQFXOWSYZLCYAPCTPVPSJTHBNVYZLOIEWNAPHYNKGRSNHIQOAJRCFKXSMEYDEQYSAOGWQWN");

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
    msg.setTimeStamp(0.444674918192);
    msg.setSource(4598U);
    msg.setSourceEntity(224U);
    msg.setDestination(18785U);
    msg.setDestinationEntity(121U);
    msg.sys_name.assign("HEWCAPOBTZARNBSKRDAYGFGSEFKMGQQAODORAL");
    msg.sys_type = 75U;
    msg.owner = 16909U;
    msg.lat = 0.793091559754;
    msg.lon = 0.655156516607;
    msg.height = 0.225085066144;
    msg.services.assign("UVKGYIRCXJIYOAKLHMXVJBNLBZBZKAMEUAGBXPTPNQNKZZGDOGLGETHTOAFWNZDAKRSDMAJTVHPQYTNEMLMFHS");

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
    msg.setTimeStamp(0.766884705471);
    msg.setSource(54976U);
    msg.setSourceEntity(87U);
    msg.setDestination(40663U);
    msg.setDestinationEntity(38U);
    msg.sys_name.assign("ENDBUUXTQQKWUTINMRGQTMHBDEYVAKVHETQKXNRVVBPWTVIOBLFIEBTODEIWWTTCXVSZSJMLCJZZOUADBOYUCLLMBH");
    msg.sys_type = 249U;
    msg.owner = 32900U;
    msg.lat = 0.945897600321;
    msg.lon = 0.449760316433;
    msg.height = 0.0951755270818;
    msg.services.assign("FJDMAHRKSIVHDDXAJEFUHDXJWGGTKEFOYFYHMALTSXTKYASNBTWWHGRJNDDLLYWHYKLVYZTOBMDJPKLMUPLABAVXEESDNQKQMQFENEGEPRJWOKXGBTNCWJBRTYTOKPMRMZEICBCINGNUFCXHVBIXOZXGSSJEJZWNRKYQQVMBUHLNWHRLFUVUBCCOIPG");

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
    msg.setTimeStamp(0.0305300878407);
    msg.setSource(20050U);
    msg.setSourceEntity(201U);
    msg.setDestination(52175U);
    msg.setDestinationEntity(73U);
    msg.service.assign("TADDBPAMALCYLUQPBGEZVGMIMSQMCSBKOQFRZJGXTHJHSVPGETQRPL");
    msg.service_type = 185U;

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
    msg.setTimeStamp(0.137396061911);
    msg.setSource(55482U);
    msg.setSourceEntity(10U);
    msg.setDestination(64725U);
    msg.setDestinationEntity(3U);
    msg.service.assign("LBSIWWAYJRTIPHMVJOXENUFBAKKFNBIWXSRXVSJIAXDLMLVGTURLJENDYYQXOCGXAMCQSDVWGOEEOYWAPZRUZDPJCVIRAJVFRKZUMSZKZSIHBFUG");
    msg.service_type = 102U;

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
    msg.setTimeStamp(0.782533838894);
    msg.setSource(37391U);
    msg.setSourceEntity(207U);
    msg.setDestination(56146U);
    msg.setDestinationEntity(174U);
    msg.service.assign("KRBGULEWRXJHXONEBZTOIRVUHUIVGNNHDCNIKJXOCOGWMOOWURPPGMSIVIZPSLCKVEHTFCPNJUBPSAIYQHYDQJSFBNRGTITMYRPZLAEDREQFTHJVNWVYGAZCFZVZLLTNQCAQSVHBUHVDYGCWMVNUECGRDYBKRPKSFFLXKYHOWTZTFYWSYISKMLQEDZW");
    msg.service_type = 87U;

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
    msg.setTimeStamp(0.0921237474111);
    msg.setSource(32226U);
    msg.setSourceEntity(63U);
    msg.setDestination(63132U);
    msg.setDestinationEntity(158U);
    msg.value = 0.96809514252;

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
    msg.setTimeStamp(0.674455870516);
    msg.setSource(5730U);
    msg.setSourceEntity(36U);
    msg.setDestination(21064U);
    msg.setDestinationEntity(191U);
    msg.value = 0.72761879801;

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
    msg.setTimeStamp(0.728178383923);
    msg.setSource(20979U);
    msg.setSourceEntity(169U);
    msg.setDestination(55655U);
    msg.setDestinationEntity(195U);
    msg.value = 0.77437729009;

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
    msg.setTimeStamp(0.928565160521);
    msg.setSource(27833U);
    msg.setSourceEntity(207U);
    msg.setDestination(93U);
    msg.setDestinationEntity(72U);
    msg.value = 0.687422997057;

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
    msg.setTimeStamp(0.346046635075);
    msg.setSource(6700U);
    msg.setSourceEntity(71U);
    msg.setDestination(20879U);
    msg.setDestinationEntity(245U);
    msg.value = 0.250878552471;

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
    msg.setTimeStamp(0.58098960401);
    msg.setSource(32858U);
    msg.setSourceEntity(252U);
    msg.setDestination(32537U);
    msg.setDestinationEntity(153U);
    msg.value = 0.414664829091;

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
    msg.setTimeStamp(0.643330972836);
    msg.setSource(44513U);
    msg.setSourceEntity(8U);
    msg.setDestination(44052U);
    msg.setDestinationEntity(237U);
    msg.value = 0.634857191607;

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
    msg.setTimeStamp(0.570332437824);
    msg.setSource(64859U);
    msg.setSourceEntity(13U);
    msg.setDestination(39199U);
    msg.setDestinationEntity(24U);
    msg.value = 0.124499189647;

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
    msg.setTimeStamp(0.184027665992);
    msg.setSource(55684U);
    msg.setSourceEntity(4U);
    msg.setDestination(8900U);
    msg.setDestinationEntity(161U);
    msg.value = 0.152784802119;

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
    msg.setTimeStamp(0.698225074548);
    msg.setSource(47301U);
    msg.setSourceEntity(33U);
    msg.setDestination(49129U);
    msg.setDestinationEntity(168U);
    msg.number.assign("ZGWGPXKQXHOCAMCDRHTMYIGHWDPZELTEVUCSYGZYXVDPPVCSAI");
    msg.timeout = 18772U;
    msg.contents.assign("WKBKXRMDJJBVUJIMWRFLQWSUMZMZGPVIRXKHDQTDHPDNQVFZVXXKOYLEUAKBLGYZWFVFZPSQGCAPSJTPVBMBECXJFSTRWCDTXLJWS");

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
    msg.setTimeStamp(0.64092833526);
    msg.setSource(56179U);
    msg.setSourceEntity(226U);
    msg.setDestination(60516U);
    msg.setDestinationEntity(22U);
    msg.number.assign("DRGWRJVJZWOBLUGEUODPJWSJTEFCCOGJDBVXIFFNTFIIRMFHWXHEBCKLSDBCONQIYUNORMHXYUCGPZRJKJKSLXPISBKZSDMMXAEWVSTMEBWZPOVDQYMAURAJWTKYALRCIQEWNNQZLCAZAWTLOGUPEQMLTHHPXPHVUFVVVWUNXIZEIOKDDZRYVXCTOKGNDAYAFJQFGHPABHIGFARMTTPKZJHNLYSUHICNEPNXBYSKSEZKBLM");
    msg.timeout = 62942U;
    msg.contents.assign("UQDWOBVUYCKSSERPQRSRYVNMDRZWTJHHEMBEAPULHWR");

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
    msg.setTimeStamp(0.189914781592);
    msg.setSource(52345U);
    msg.setSourceEntity(208U);
    msg.setDestination(12173U);
    msg.setDestinationEntity(227U);
    msg.number.assign("TVPYOTRCPEYQHDZRISPYZCPVUUKTKUHEVICSILSGHQROUTVSWTQBBDNMQJAREXZQXPYZSICHEBGLXKLNOGDCJJTMPZHYLBWKQAINYZJSMTCYCUAVIKRSKRMGUBNNBORFFRMSELCWJLKNGHFRPVYJADIOFZANWDATHMANBEPPUVKEIKBGWODWLFAXEFIXUETQVSGRNOOBZKCJHWODZZMOJQWFGXUAGBXLCTEHXDFVUMWXJMLFYXYMNFJLGPI");
    msg.timeout = 27864U;
    msg.contents.assign("FZHLBYMVPSBPVRTWFEMAAKJDLESJMXCYRQZICMJEGFONVMEINBIZOHJEYCGVFRZTOBCEFAWPUPKZUUKYTNQUFLXHPV");

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
    msg.setTimeStamp(0.651147476374);
    msg.setSource(56272U);
    msg.setSourceEntity(1U);
    msg.setDestination(35620U);
    msg.setDestinationEntity(192U);
    msg.seq = 4074499704U;
    msg.destination.assign("FXNWPQMJETGLCEMIIQWXDXLFBRTQFCRPADZDXVBUVEOPKE");
    msg.timeout = 2896U;
    const char tmp_msg_0[] = {-106, 35, 80, 84, 81, -103, 50, -36, -121, -57, -52, -99, 1, -70, -90, 87, -43, 11, 12, -79, 34, 5, 114, -46, 101, -128, 5, -60, 51, 43, -39, 38, -3, -93, 101, 4, 98, -22, 24, 92, -46, -29, -58, 114, 14, -114, -77, 33, -36, -8, -42, 54, 5, -71, -104, -21, 63, -7, -63, -54, 63, -104, -71, 62, -13, -73, 5, 68, 4, 113, -79, 116, 58, 17, 108, -108, -100, -125, -102, 109, -90, 51, -100, 100, 50, 86, 32, 16, -8, -100, 7, -82, -41, 56, 76, -91, -66, -70, -48, 70, 4, -127, -124, -20, 92, -60, 17, -51, -19, 106, 39, -14, -11, -70, 124, 11, 52, 43, 75, 31, -104, 115, -1, 83, -90, 43, 58, 38, 60, -61, 109, 53, -76, -125, 77, 37, -119, -53, 25, 95, -105, 3, 69, -65, 117, -27, 107, -123, 57, 114, 79};
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
    msg.setTimeStamp(0.447765062025);
    msg.setSource(7329U);
    msg.setSourceEntity(117U);
    msg.setDestination(6974U);
    msg.setDestinationEntity(238U);
    msg.seq = 2655990538U;
    msg.destination.assign("KRWOAIMMJOCHSBYOCNNVQQRQQFGHJXHSTUSKEGQPGRJBNKGKINGAWFEIPPMSDTMLEYUTKIEVUEVDXYUVBHBWHGJNCEHLAQPXWKWOVXXBFADMGMPWLMTDDVBTTPCGHZHJF");
    msg.timeout = 65398U;
    const char tmp_msg_0[] = {-32, -28, 38, 62, 106, 67, 126, -52, -12, -58, -119, -113, 78, 31, -91, 35, -121, 67, 54, -13, 3, -63, -106, 51, -57, 66, 7, 22, 53, 15, -118, -75, -38, 22, -87, -8, -62, 70};
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
    msg.setTimeStamp(0.670646151938);
    msg.setSource(64975U);
    msg.setSourceEntity(246U);
    msg.setDestination(36737U);
    msg.setDestinationEntity(230U);
    msg.seq = 790764281U;
    msg.destination.assign("EQYDTHRBJGVZSMSILNLMACIDGQLZAQENYDJGAQPBUWBXSPOVTJGPOWTXJPLEMHHLMEAAXGFDPNQMNQDFXSIMHNRKZI");
    msg.timeout = 89U;
    const char tmp_msg_0[] = {-45, 75, -45, 105, 64, -28, -55, -2, 60, 121, 5, 7, -69, -117, 107, 8, 92, 50, 78, -45, 66, 55, -69, 97, -53, -76, -122, 74, 70, 122, -23, 110, -53, -72, -105, 120, -26, -110, 119, -60, -75, 28, 99, 38, -51, 101, 57, -55, -9, 109, 109, -4, -101, -95, 23, -6, -48, -24, 39, 8, 53, -38, -26, -111, 33, 30, 108, 24, -90, 125, -97, 43, 16, 22, 22, 24, 63, -38, 104, -72, 46, -122, 53, -33, 80, 63, 101, -1, 25, 2, 63, 56, 119, 32, -19, -20, -2, -32, 125, 60, -68, -58, 49, -69, -66, -21, -55, -82, 44, 109, -72, 81, 68, -126, 66, 12, -117, 31, 116, 59, -118, 91, -51, -111, -111, 99, 120, -109, 92, -35, -35, -38, 5, -103, -14, 1, 73, 36, 77, -13, -90, 21, -113, -74, 115, 84, -116, -23, 0, -125, 43, -60, 16, 85, -36, -22, -9, -85, -95, 35, 58, 57, -42, 64, 113, -28, 14, 87, -102, -107, 28, -81, 68, -50, 100, 118, 51, 71, 73, -122, -36, 104, 59, -20, 106, 31};
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
    msg.setTimeStamp(0.831503170774);
    msg.setSource(49690U);
    msg.setSourceEntity(53U);
    msg.setDestination(59389U);
    msg.setDestinationEntity(110U);
    msg.source.assign("KZFXBBTRQLVTEVFXWCZEZAYRNFMKSGUHIZUCPEJITOPKGCCWROENUMYHFISJHZVBAWKQVLJQUGTIEUIKDUPQWJFJIBVMNDNCFWYSJREFTHIYMQDXMGLDOPVYVOPCLKQLGSTDRBZBHA");
    const char tmp_msg_0[] = {-116, -52, 96, -76, -83, 59, 67, 119, 36, -103, 98, -4, -46, -124, 101, 88, 19, 25, 121, 7, -31, -14, -33, -101, 96, 91, -108, -92, -123, -22, -123, 26, 20, -43, -14, 117, 57, -17, 6, 68, -115, 0, -122, -92, -18, -110, 9, 48, 116, -99, -121, 25, 62, -37, 70, -5, -93, -70, -62, 41, -115, -66, 51, -109, -128, 102, -73, 59, 114, 102, -81, 24, -113, -11, 56, 54, 36, 22, 16, -71, 120};
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
    msg.setTimeStamp(0.837875451736);
    msg.setSource(30210U);
    msg.setSourceEntity(253U);
    msg.setDestination(34781U);
    msg.setDestinationEntity(235U);
    msg.source.assign("QBHMFRXYVBSUUVSOERQIFDJVYZLQXZBEXSMOTMFLQUHFYGGCLYLAIYHWKHDYIWKXLLDZDRPHKIHEDMSAMFXJVWOGOQOBUEOARXFOWZRENHWJVNKWSKJBFEZQROGNQLUPTJTRMMPUYKJADFKPDSCKBNJWENCFTEYHSMAPCVUGDKIXPPTQETTOQCIZZCZVINB");
    const char tmp_msg_0[] = {70, 107, -21, 71, -58, 99, -115, -59, -1, -62, -16, -93, -27, -3, 82, -27, -24, -62, 118, -44, 13, 117};
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
    msg.setTimeStamp(0.205562083583);
    msg.setSource(5319U);
    msg.setSourceEntity(61U);
    msg.setDestination(13337U);
    msg.setDestinationEntity(55U);
    msg.source.assign("SOTLNGQETGWRFEBPVSLAOZCCPRCFJSDTNEPQZPCAOQZTMBMNACVEZCNTHVQYFK");
    const char tmp_msg_0[] = {71, 69, 69, 124, -19, 107, -33, -54, 4, -45, 120, -26, -109, 45, -80, -84, -26, -38, -54, 117, -53, 75, 109, -19, 111, 19, 126, -118, 113, 101, -80, -85, 105, -45, 77, 8, -53, -31, 117, -16, -32, -76, 109, -69, 27, 90, 117, -46, 71, -24, -14, -105, 117, -106, 116, -63, 45, -21, -125, 35, -115};
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
    msg.setTimeStamp(0.961746761843);
    msg.setSource(44284U);
    msg.setSourceEntity(193U);
    msg.setDestination(51428U);
    msg.setDestinationEntity(79U);
    msg.seq = 3478214007U;
    msg.state = 132U;
    msg.error.assign("XVXDRURKBQWSASGLSYMGBOHDBQDYGQTVDW");

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
    msg.setTimeStamp(0.678052203525);
    msg.setSource(33947U);
    msg.setSourceEntity(6U);
    msg.setDestination(7877U);
    msg.setDestinationEntity(239U);
    msg.seq = 1903823389U;
    msg.state = 179U;
    msg.error.assign("HORYFUMMAROVXLGDUBGHOXQBLANFVQIGTFXSDEMRQZTSNZUZEWWPGHXQIAQQWYBKCGHJEOAGWDSZJVYJNLGFUCSYNPLWKXQTKJVNMYFVXPGPHMIUOPWEEBCBGSXHRUAVBRKQN");

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
    msg.setTimeStamp(0.614608671927);
    msg.setSource(43875U);
    msg.setSourceEntity(81U);
    msg.setDestination(29908U);
    msg.setDestinationEntity(111U);
    msg.seq = 931427478U;
    msg.state = 187U;
    msg.error.assign("QPMWMHOSXNULXFVKLFHMIWQCJRDDTDYUHOWQNIITUMXZIHYNXDNEIZRQNWMSZSGBFABGLPNGIBSYZTAAHWBAEREYMGPKSUUALFGQJMYOZKNETFSWLBFGIPKUYJDKQDRYISLEQYVFKTTVOOMDMSVTCVRWTR");

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
    msg.setTimeStamp(0.301156543204);
    msg.setSource(21445U);
    msg.setSourceEntity(184U);
    msg.setDestination(17291U);
    msg.setDestinationEntity(142U);
    msg.origin.assign("ALMBHHZMWATLYUPKJMZMZUETMGADFLWIQRQXHDKSOEPJGJTCQGVJUNNEBJHALQFZWTDXQONFMBAWDMNASLKPDDNZEMEYRICOWRPWKFLYISNUDJAEIRQSCIHFQ");
    msg.text.assign("XOIINRCHXJMPCYZYYPMHHSWDICQQPXEBNZVT");

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
    msg.setTimeStamp(0.592022311553);
    msg.setSource(35168U);
    msg.setSourceEntity(120U);
    msg.setDestination(8626U);
    msg.setDestinationEntity(217U);
    msg.origin.assign("VTOYEODGZFEXGDKYDRQXQCNMBABNJVRPJZYTAQTZQGHWKLDIMLHXQGBUSZJOSRYGJILFLZEYYFCYVUDESEYLBMPFQDINUDJUCRXX");
    msg.text.assign("VSKRNNZLODOCQIXKOLGYVBUAYMGEEYPIKRWMXRCRIAFKBXQBVIKQNLJYPOQXYFDSCDWZHHSZEGZEHEUHXSZS");

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
    msg.setTimeStamp(0.47215022565);
    msg.setSource(36577U);
    msg.setSourceEntity(185U);
    msg.setDestination(7076U);
    msg.setDestinationEntity(89U);
    msg.origin.assign("JVXXCBKJKHWRMKGGNLWITIXAJBBWBIQGLTTYTETOOGSNOFZKUUMDEOGKKKWHDCIVMHSKHATOSARGOPCKIEQSHCWJMRDEIJVNGWODDNTYHIUAQYCDJMEQFROHHLVGBUYYENXQFCCAZVZRXSTAZRYSWZBFQJBMUDEPOZVCHZDCNYEJMBYLPBNUPAFRYNMBWVSIZSPLFALVQTLCSJDUXJXLFVXRMLXUW");
    msg.text.assign("ULJZNKRMUGSILKFWVVVXZRFYOCBRFGAICVNIJBTIMJBBODCC");

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
    msg.setTimeStamp(0.369538645673);
    msg.setSource(18331U);
    msg.setSourceEntity(241U);
    msg.setDestination(48940U);
    msg.setDestinationEntity(33U);
    msg.origin.assign("MDGOULZTXBXRYYDRNECNMYPUFHAUSKFXVWVCUEYWHEDSPLIBVWKQAXXTPWSIVOBMFEXQOXCHRGFTQQAQLBBDUCNKLRJHAOFJCGKSZQNRYTYFWRVZQWP");
    msg.htime = 0.60496628549;
    msg.lat = 0.654641041306;
    msg.lon = 0.0159030510837;
    const char tmp_msg_0[] = {6, -54, 117, 82, 41, 77, 99, -8, -66, 10, -45, 42, -14, 123, -22, 11, -75, -76, 39, -97, -14, -37, 8, 12, -60, -112, -117, 19, 47, -35, -60, -36, 22, 77, -119, -60, 86, -66, 15, 30, -70, 51, 1, -69, 47, 114, 116, 91, 96, 92, 44, 88, -23, 94, 66, 22, -95, 109, -123, -37, -15, -114, -107, -127, -60, 96, -41, -5, 35, 10, 95, -57, -40, 98, -85, 9, -75, 82, -55, 15, 47, -125, -55, -117, 8, -124, -120, -82, -104, 90, 78, 27, -91, -83, 26, -22, 29, 77, 92, 74, -98, 43, -1, 42, 41, 27, -85, -125, -38, -77, 101, 26, -92, 19, 101, 100, -105, 21, -104, 91, 18, 3, 66, -10, -63, -122, -105, -66, -95, 51, 65, 122, -103, -119, -61, -13, -113, 9, -81, 84, 118, -85, -60, 82, 91, -78, -25, 43, 65, 2, 78, 24, -85, 123, -69, -55, -112};
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
    msg.setTimeStamp(0.979212005596);
    msg.setSource(19392U);
    msg.setSourceEntity(11U);
    msg.setDestination(62668U);
    msg.setDestinationEntity(213U);
    msg.origin.assign("ZIPOAZEUTJFNBSPZWWZJSRMRKYFMDMRUFNHEJIOHYJQFOJLMXVNHAKDTZWKDFTLGERONUNGUVRSAQLHXCZLSTKEPYWUGHOSSXAUBYLDCDGOSPJQRKTISVTFDVVHDBLKOGJFNQALUNCHAOWNUXWOZIVWIYVBCHPJNWGYCPRDICQ");
    msg.htime = 0.990263972519;
    msg.lat = 0.708346389928;
    msg.lon = 0.888938494591;
    const char tmp_msg_0[] = {-6, -110, 92, 81, 88, 121, -45, -111, 125, -93, 111, 111, 125, -32, 110, -66, -70, -16, 109, 42, 105, 37, -86, -126, 106, -80, -14, 76, -31, -107, 101, -63, 68, -33, -107, -123, 13, -65, -14, -87, -20, 99, 116, 28, -112, -12, 99, -96, -67, -63, 13, 44, -3, -22, -53, -118, 121, 16, -66, -108, -13, 72, 80, -42, -100, 105, -63, 7, -75, -66, -26, -121, -120, 74, 67, 38, 75, -35, 117, -1, 33, -94, -53, -78, -126, -71, -17, 121, -91, 32, 122, -117, -26, -62, 87, -51, -25, 123, 80, -7, -20, 82, -14, -94, 122, -20, -59, -70, -101, 9, 61, -99, -1, 116, 2, -23, -1, 16, 5, -122, 122, -103, 102, -121, -61, -23, -33, -38, 125, 62, -48, -61, 52, -127, -56, 11, -34, -38, -31, -23, 96, 5, 120, 56, -25, 43, -93, -115, 108, 75, -14, -23, 49, 51, -27, -88, -124, 9, -127, -119, -67, -88, -81, 29, -124, 126, 104, -122, -30, 119, 126, -24, -111, 18, -40, 117, -90, -119, 38, -126, 23, -80, 33, 44, -86, -91, 72, -15, -35, 7, 120, -42};
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
    msg.setTimeStamp(0.286370611488);
    msg.setSource(17715U);
    msg.setSourceEntity(172U);
    msg.setDestination(40949U);
    msg.setDestinationEntity(171U);
    msg.origin.assign("ISIVKMLKDJHYPBEGQPCXGNFMBXWEVETSITGMTFFBFXGAVRHNUIHIWEBXTEAUZQAAHZIQXBAYWPQJKCOTOJPUWMJIAXEFPUGZYKYIHNZVJOCDRCWZRTLISNNJLOCBSLEKVNJLHFNVKMEWTKLMJYBYJGURGAEDLMOASDMOQCNR");
    msg.htime = 0.219255726295;
    msg.lat = 0.424603029818;
    msg.lon = 0.821881870512;
    const char tmp_msg_0[] = {-110, 67, -102, 56, -83, 126, -26, 98, 6, -70, -33, 46, -84, 113, 99, -114, 112, -23, -3, 60, 15, -105, -26, 76, -114, -85, 32, 55, -33, 98, 117, -63};
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
    msg.setTimeStamp(0.826270500293);
    msg.setSource(14267U);
    msg.setSourceEntity(35U);
    msg.setDestination(58055U);
    msg.setDestinationEntity(215U);
    msg.req_id = 44039U;
    msg.ttl = 53779U;
    msg.destination.assign("ZSNDLLUQFAXRFIVHLIYBTDCEKMIRWPWJRTXSOBIPAFPQHCVAZBCERHTEAFGSQMAGXJGWOXTCDHHFOA");
    const char tmp_msg_0[] = {94, -34, 37, -56, 124, -62, -43, -110, 120, 40, 49, -101, -54, -13, 28, -111, -39, -97, 80, -53, -104, -114, 71, -118, 8, 66, 98, -35, -18, 83, -9, 35, -2, -89, -75, -128, -53, 43, 122, 15, -105, 85, -29, 120, 62, 99, -69, -73, -49, 36, 83, 21, 29, -84, 86, -91, -54, 100, 108, 40, -108, -103, -37, -123, 67, -35, 55, -59, -123, 14, -74, -67, 86, -67, -87, -74, 87, -3, 63, -33, -70, -77, 51, 115, -103, -123, 101, 80, 104, 57, -12, -32, 24, 16, -115, 92, -63, -25, -35, 101, -15, -114, 55, -108, 34, 97, -90, -107, 117, 56, 43, 108, -44, -69, -5, 77, -36, 28, -76, -12, -66, 83, 33, -70, 81, 41, 108, -127, -98, 78, 126, 29, -67, -42, -109, 107, 36, -50, 18, 105, 103, 60, -62, -30, 112, 116, 13, -90, 97, 2, -22, -24, -122, 63, -18, 33, -108, 105, 105, 99, 13, -82, 0, -100, -86, 43, -75, -54, -78, 15, 6, 84, -71, 8, -27, -36, 69, 59, -24, -46, 37, -98, 45, -57, 123, 30, -120, -98, 105, -88, -69, 46, -110, 36, -7, 60, 106, -33, -75, 37, 15, -34, 68, 8, 27};
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
    msg.setTimeStamp(0.164134031977);
    msg.setSource(65363U);
    msg.setSourceEntity(228U);
    msg.setDestination(52185U);
    msg.setDestinationEntity(211U);
    msg.req_id = 45884U;
    msg.ttl = 30599U;
    msg.destination.assign("MSSLOGKVZKNEBBWIVHDXFPYDFYEYDXVRKQQWYUOTJNRKBYCMBXQQOQPVKMNTDTZMXLQHECHTLEZVWRIUWHHOCYIJFUYNLQAHIJTKVVRYBPIOJOGKLPAVCLUZALOLQZHNMPBKQBCFAWMRWMEPRPDSCWASPSNEDJGAUNFIMCSMZETDHGUFCSYJZSXPMZHFBGZVKNKDSJDFGCXFNWZAHUFEVRXASGYJLIOITOJTADBQPXUAOXERU");
    const char tmp_msg_0[] = {-57, 14, -23, -87, -9, 31, -70, -86, 66, -128, 83, 103, 7, -41, 52, -28, 98, 101, -47, 116, 60, -67, 8, -6, -77, -32, 27, -29, -107, 19, -13, -42, -70, -74, -80, -101, -93, -89, 103, 88, -71, 101, 53, -128, 53, 6, -3, -22, -61, -16, 71, -103, -34, 93, -34, 73, 12, 102, 38, -21, 10, 87, -116, 18, 67, -29, 27, -4, -76, -31, 75, -38, 118, -89, 17, 97, 120, 32, -85, 47};
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
    msg.setTimeStamp(0.293641122148);
    msg.setSource(3063U);
    msg.setSourceEntity(225U);
    msg.setDestination(48558U);
    msg.setDestinationEntity(138U);
    msg.req_id = 29322U;
    msg.ttl = 26827U;
    msg.destination.assign("CAQVPHWBDKTEFESLYYYUOUGNPFHM");
    const char tmp_msg_0[] = {112, -113, 110, 58, 94, -80, -3, -77, -8, 22, 41, -41, 12, 119, 9, 6, 79, -27, 115, 97, -5, 12, -38, 124, 30, 97, 48, 57, -12, 27, 87, -22, -19, 113, -10, 3, 84, -47, -10, 100, -36, 90, -27, -41, -11, 52, -71, 26, 99, 23, -90, -19, 53, -123, -114, 102, -39, 2, -110, -84, -127, 27, 13, -113, 87, -121, 75, 41, -90, 108, 52, -118, 26, -51, 108, 55, 25, 105, 0, 4, 37, 50, -86, -33, 68, 78, 54, -92, -123, 91, 91, 107, -96, -23, -123, -78, -115, 31, 53, 91, 36, -57, 84, -67, 117, -7, -9, 60, -114, -77, 122, -27, 4, 32, -24, -54, -12, -6, 126, -47, -108, 39, 4, 120, 68, -30, -36, -92, -63, -8};
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
    msg.setTimeStamp(0.920494052668);
    msg.setSource(28715U);
    msg.setSourceEntity(87U);
    msg.setDestination(37745U);
    msg.setDestinationEntity(87U);
    msg.req_id = 47775U;
    msg.status = 68U;
    msg.text.assign("TEVDEYCFGTXMCDOXHICHSBXNHLEMKEVRODBSUXODGSQMVCWWNYEQJPWSBEXLPYJANFHTHAWLPUDVQZNQREMBJXZGZJLJXMKSAUAKDMYAZFDWWYUKNASVHKTVUQYBEJWBTKZIOYVOIZCIGAGOBDNFRRRFIVJIQFGOBBYPJMFTPVMWPLLIWFZQDCGLPUKQLYRACNUXGABRIQNTLNOQKYZPUXPHROOGJMCSTFSCR");

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
    msg.setTimeStamp(0.94359003484);
    msg.setSource(27538U);
    msg.setSourceEntity(20U);
    msg.setDestination(59835U);
    msg.setDestinationEntity(52U);
    msg.req_id = 35683U;
    msg.status = 107U;
    msg.text.assign("OFIYPCLCFWARISQUFWRRECHBDBHAKHUAZZQDRPJWBQGMMOSVSZMZJCBAUYOVDALPOTFRJPUXCBJFENWECDXKQSRANVLNKUWSOLX");

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
    msg.setTimeStamp(0.242959332223);
    msg.setSource(22687U);
    msg.setSourceEntity(214U);
    msg.setDestination(32745U);
    msg.setDestinationEntity(139U);
    msg.req_id = 57067U;
    msg.status = 109U;
    msg.text.assign("NXVOXVTNBPFURWUBGALIENAJQEDAQAFLVWIFZKLGCKPOAEQHRRCJJEVMFIUHBKOBDONCXUQNJNFZVUYXWYERFIBBVWZPPTFMQFMICHGSQQBSADGLMYGRODVMXUUUTWKYGIIUMPKNAVERRWMDELJZSTLHMXSZYCTP");

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
    msg.setTimeStamp(0.427639761599);
    msg.setSource(48495U);
    msg.setSourceEntity(116U);
    msg.setDestination(50664U);
    msg.setDestinationEntity(133U);
    msg.group_name.assign("XTFNRTMWTQZXQPYERHAUAJWNFAIKDSQYSJDVTXPQWBXMRURWMPYAYTTJHVFZJZRBCGBKVBAJEXYNOBUNRZQSOWZQOVFQLSVOVMMGHMXWLBHGIVLPKVZWJODEHXPQGGLETCQWPBYRKZCEGMSFXIUHDSRPCWTIIOBMNPFNEUGECAFXKN");
    msg.links = 1018653997U;

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
    msg.setTimeStamp(0.819475435178);
    msg.setSource(13113U);
    msg.setSourceEntity(103U);
    msg.setDestination(25744U);
    msg.setDestinationEntity(91U);
    msg.group_name.assign("AWDTEQUCWGCGLYGTLYOFNKGFSKWRLXSGYWBAAWVPSOZQYMSCFIMRZEEJHPLPVRPHVONFTBOBVGZCVSNVQTXFYPCLBCHJYYCIOJSTVMJQCKMXFRZ");
    msg.links = 2371322408U;

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
    msg.setTimeStamp(0.0782283707623);
    msg.setSource(65423U);
    msg.setSourceEntity(90U);
    msg.setDestination(45228U);
    msg.setDestinationEntity(90U);
    msg.group_name.assign("CVFBUYAQIJJQJZAVKESCPLRGJZKLJUGTYIWMDTGOAZOWNOUMQHFCZHPDHWSFMUMUXXKKNXNUMLESMSRTAERBXPHEDFQZLOJIKHFWBTDHRKNGAODRPYZEWJGZHDBLFUOTXFEBDAQQIYCNRPULRMTJSYHYWFVVZTTFIVGPVICXPGAEEMQSPYVXEKNSGZMWGAKCNELSLC");
    msg.links = 3642795328U;

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
    msg.setTimeStamp(0.993497438447);
    msg.setSource(2910U);
    msg.setSourceEntity(57U);
    msg.setDestination(46955U);
    msg.setDestinationEntity(227U);
    msg.groupname.assign("DSLYRXMCTABFPPRQSUAZPVKTQPMSEFOHUIQHKUAIJIXWVPLZRQQUDZRRFMGDURXXISSZVNRHWKCCJKXLKWOPNBGGWIMDUODEJVSAOYLOGOXHLOWGUSHCGGZWITXSJ");
    msg.action = 213U;
    msg.grouplist.assign("BBEYZGORANZIXBNDHNRUVJZQEUIVKXCGUXLPKFPWCWYQVNUSTKDOJJETBASCLMMHEKIJDVHGFRDROYM");

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
    msg.setTimeStamp(0.591695099661);
    msg.setSource(59708U);
    msg.setSourceEntity(43U);
    msg.setDestination(25647U);
    msg.setDestinationEntity(235U);
    msg.groupname.assign("KMDMXNOTZPGIRVEUGFZXNANWLJZZOYTXZPOFPPTTBLSRCLDCFPLYDYTUAQJGCEREXKRELRWCWVVYMAKYUKGHTC");
    msg.action = 184U;
    msg.grouplist.assign("RFQQFCDISTWBOYXVWXNVGAUEVYGPWHLANMRTPYAIYVTSVCJFDFBYOZEFVHXEVQVOKZAXNOHNDIAJATXXZKCUTVHIUBUCRRQOSZRGHSZJMTOIRRWETUDMWKNCKXWBJFHPHABRKBYROEZIPTMHWYZTYSFJQAJMDDJSNXKSQZFMZLX");

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
    msg.setTimeStamp(0.992811558016);
    msg.setSource(23042U);
    msg.setSourceEntity(135U);
    msg.setDestination(35375U);
    msg.setDestinationEntity(141U);
    msg.groupname.assign("VQBHLPJDJKXRMFAOPZNMTITWEBXDOSHLUASQEHVHLNKEKZPYZRERCVGCUFLTWVSAZOYDAQYBICZSYJAQTOIHQCSNRMGNVLGNFWXYIPBWOABCCDIDRW");
    msg.action = 220U;
    msg.grouplist.assign("UDXZHBWELSNFVEWCMLMKYNLCEYBSMDXGQNVHBLMVMCCXBQOEFGYSWBINQLYGDNJGYVAFINPEJPXWIODPHKRTSCQUDPICOYUUGWNCFBRIHGISKIAIRLDZHQIHDEOKVARPGJTFURXPNFLAJKXLWMQOUHRKTTVCYKCUVQPHZZRENJBZNAEZEEDAMPTMPTATXOBOMRGXXVOLYJBZRFFYQZSVBUJZFKFA");

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
    msg.setTimeStamp(0.316946461027);
    msg.setSource(17729U);
    msg.setSourceEntity(218U);
    msg.setDestination(46775U);
    msg.setDestinationEntity(189U);
    msg.value = 0.134675796317;
    msg.sys_src = 37560U;

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
    msg.setTimeStamp(0.403651028674);
    msg.setSource(41603U);
    msg.setSourceEntity(254U);
    msg.setDestination(25149U);
    msg.setDestinationEntity(106U);
    msg.value = 0.178089799085;
    msg.sys_src = 53012U;

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
    msg.setTimeStamp(0.537203349452);
    msg.setSource(30672U);
    msg.setSourceEntity(93U);
    msg.setDestination(32999U);
    msg.setDestinationEntity(67U);
    msg.value = 0.117446580956;
    msg.sys_src = 38313U;

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
    msg.setTimeStamp(0.160795062862);
    msg.setSource(44842U);
    msg.setSourceEntity(105U);
    msg.setDestination(58614U);
    msg.setDestinationEntity(121U);
    msg.value = 0.517552080231;
    msg.units = 163U;

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
    msg.setTimeStamp(0.517227277488);
    msg.setSource(50481U);
    msg.setSourceEntity(140U);
    msg.setDestination(48483U);
    msg.setDestinationEntity(132U);
    msg.value = 0.560172313382;
    msg.units = 121U;

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
    msg.setTimeStamp(0.928597039305);
    msg.setSource(43419U);
    msg.setSourceEntity(228U);
    msg.setDestination(35784U);
    msg.setDestinationEntity(147U);
    msg.value = 0.33326837379;
    msg.units = 220U;

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
    msg.setTimeStamp(0.122754004018);
    msg.setSource(3048U);
    msg.setSourceEntity(240U);
    msg.setDestination(18779U);
    msg.setDestinationEntity(168U);
    msg.base_lat = 0.204724463779;
    msg.base_lon = 0.412455976152;
    msg.base_time = 0.41071655001;

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
    msg.setTimeStamp(0.945675022954);
    msg.setSource(47572U);
    msg.setSourceEntity(193U);
    msg.setDestination(40399U);
    msg.setDestinationEntity(223U);
    msg.base_lat = 0.682175280788;
    msg.base_lon = 0.763698739502;
    msg.base_time = 0.291686017828;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 47172U;
    tmp_msg_0.priority = 114;
    tmp_msg_0.x = -1496;
    tmp_msg_0.y = -27011;
    tmp_msg_0.z = -19650;
    tmp_msg_0.t = 21322;
    IMC::IridiumTxStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.req_id = 58220U;
    tmp_tmp_msg_0_0.status = 191U;
    tmp_tmp_msg_0_0.text.assign("SKFOHKWWLHTIMLZWQYZNVFXGPGLOOEPJJPQRLCUUOVBDSBPPVNFLLTQIRVUHJKJZDBXAHPBQEOORSTCSHTUBDVHCDVJDAXXQPCUKMNXSYZKLIRQHRTBSNNJFCWRDXWYKYKSAOOXNCJBAGZJLQQIJQEDUPGBXEBVIHRTFYAMMCERFUNVNSFWTMGBOXAEWINFJGDYRZKRZZAGG");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0533667152245);
    msg.setSource(62547U);
    msg.setSourceEntity(248U);
    msg.setDestination(58313U);
    msg.setDestinationEntity(152U);
    msg.base_lat = 0.90586868433;
    msg.base_lon = 0.820727919207;
    msg.base_time = 0.473436910042;

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
    msg.setTimeStamp(0.87568192897);
    msg.setSource(47713U);
    msg.setSourceEntity(153U);
    msg.setDestination(38618U);
    msg.setDestinationEntity(98U);
    msg.base_lat = 0.585621258128;
    msg.base_lon = 0.324696653243;
    msg.base_time = 0.376775624059;
    const char tmp_msg_0[] = {-84, 60, -32, -75, 84, -64, -6, 121, -51, -51, 15, -107, 81, 10, -101, 40, 88, -126, -28, -53, -53, -66, -40, 113, -64, -90, 121, 105, -96, 83, -58, -93, 81, -107, 92, -52, -55};
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
    msg.setTimeStamp(0.029585413178);
    msg.setSource(45025U);
    msg.setSourceEntity(184U);
    msg.setDestination(58388U);
    msg.setDestinationEntity(139U);
    msg.base_lat = 0.775336274383;
    msg.base_lon = 0.240856177397;
    msg.base_time = 0.426302714482;
    const char tmp_msg_0[] = {-88, -125, 70, 39, -58, 107, -123, 126, -90, -86, 14, 121, -14, 13, -118, 85, 84, 118, -101, -111, 59, -74, 40, 92, -117, 64, 123, -32, 73, -101, -37, 3, 9, -85, 21, 25, 85, -79, -46, 47, -106, -107, -120, 50, 59, 89, 95, -76, -8, 0, 57, -16, 99, -60, -121, -122, -9, 99, -104, -107, -36, -48, 88, -31, -19, 13, -31, 37, 91, 76, 89, -86, 62, -27, -62, 126, 36, 5, -22, -116, 105, 5, 82, -26, -76, -115, -91, -56, 43, -89, -42, -1, 94, -115, 66, 105, 19, -27, 97, -92, -87, 18, 37, -13, -24, 25, 8, -67, -94, -79, 24, -45, -63, -28, 37, 63, 96, 52, -34, -56, -40, -83, -102, 126, -109, -42, 5, 121, -113, -105, 106, -32, 63, 67, -126, -17, 123, -12, 35, 66, -117, 50, -84, -19, 62, 71};
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
    msg.setTimeStamp(0.658690533845);
    msg.setSource(46428U);
    msg.setSourceEntity(212U);
    msg.setDestination(65045U);
    msg.setDestinationEntity(7U);
    msg.base_lat = 0.640577951052;
    msg.base_lon = 0.0223975590758;
    msg.base_time = 0.559042856769;
    const char tmp_msg_0[] = {25, 72, 73, 38, 75, 16, 0, -86, -102, 101, 110, -45, 104, -21, 82, -80, -35, -86, -52, 30, -116, -68, 70, 115, -84, 44, -114, -128, 103, 91, -43, 2, -109, 56, -104, -12, -3, -29, 70, 66, 95, -112, 117, -127, 117, -108, -37, -113, -64, -48, -69, 21, -32, 69, -16, 81, 25, 25, -110, -59, 51, -73, 11, -72, -77, 29, -77, -35, -46, -85, 102, 67, -115, 98, -97, 116, -86, -11, -41, 73, 43, 119, 69, 120, -66, 97, -100, 61, -114, -77, -126, -49, -6, 76, 36, 62, 32, -39, 25, 78, 16, 27, 71, 71, 74, 109, 14, 33, 54, 91, 1, -60, -87, 67, -73, 97, -12, 25, -123, 81, -54, 56, 82, 22, 11, -82, 7, 28, 74, 94, -84, 23, -115, -62, 31, -5, 109, 42, -37, -88, -89, -82, -45, 105, 89, 54, -105, 41, -98, -71, 75, 77, -56, -24, -118, 11, 19, -73, 55, 46, -5, -59, 65, 114, -89, -113, 100, -23, 45, 69, 12, 102, 111, -4, 36, 80, 95, -18, -59, -73, -97, -124, -124, 121, -49, 5, 16, -108, -91, 122, 48, -66, 96, 8, 122, 93, -118, 108, 42, -83, 98, 69, -43, -69, -117, -100, -84, -115, 8, -82, -110, -14, -108, 29, 24, 117, -109, -117, 27, 45, -42, -11, 61, 80, -9, 80, 92, 60, 4, 103, -8, -18, -8};
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
    msg.setTimeStamp(0.646090715068);
    msg.setSource(41544U);
    msg.setSourceEntity(168U);
    msg.setDestination(59000U);
    msg.setDestinationEntity(89U);
    msg.sys_id = 3598U;
    msg.priority = -82;
    msg.x = -4815;
    msg.y = -30548;
    msg.z = 15012;
    msg.t = 26635;
    IMC::AcousticMessage tmp_msg_0;
    IMC::DesiredLinearState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.0184965307413;
    tmp_tmp_msg_0_0.y = 0.136139881947;
    tmp_tmp_msg_0_0.z = 0.701973620639;
    tmp_tmp_msg_0_0.vx = 0.893912344422;
    tmp_tmp_msg_0_0.vy = 0.341889403112;
    tmp_tmp_msg_0_0.vz = 0.970094637742;
    tmp_tmp_msg_0_0.ax = 0.448990389563;
    tmp_tmp_msg_0_0.ay = 0.0290404318831;
    tmp_tmp_msg_0_0.az = 0.980864890669;
    tmp_tmp_msg_0_0.flags = 34028U;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.48371220281);
    msg.setSource(13606U);
    msg.setSourceEntity(181U);
    msg.setDestination(45109U);
    msg.setDestinationEntity(169U);
    msg.sys_id = 54777U;
    msg.priority = -38;
    msg.x = 26400;
    msg.y = -17315;
    msg.z = -9873;
    msg.t = -12015;
    IMC::QueryEntityActivationState tmp_msg_0;
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
    msg.setTimeStamp(0.575503191799);
    msg.setSource(5489U);
    msg.setSourceEntity(15U);
    msg.setDestination(46096U);
    msg.setDestinationEntity(212U);
    msg.sys_id = 26076U;
    msg.priority = -114;
    msg.x = -3631;
    msg.y = -24969;
    msg.z = 30274;
    msg.t = 2993;
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {-103, -9, 38, -39, 14, -128, -83, -90, -4, 12, -9, 115, 119, 2, -48, 63, -33, 105, 27, -52, 16, 21, 19, -35, 125, -35, -20, 74, -13, 84, 6, 81, -105, -21, -9, 11, 25, 112, -117, 15, 62, 89, -78, 6, 42, 86, 124, -27, 72, 69, -80, -27, 15, -113, 90, -15, 23, -128, 82, 122, -117, -37, -70, -104, -111, 124, 38, -11, -110, 56, -66, -66, 75, -118, -124, -21, -10, -76, -64, -120, 122, 5, -117, 111, 71, -68, -2, -116, 19, -120, -44, -92, 85, 84, -79, -15, -107, 13, 78, -12, -39, 64, 111, -36, -125, 37, -80, -7, 0, 123, 88, -10, -85, 13, -102, 94, 84, -111, -32, -73, 120, 117, -96, 30, 18, 67, 89, -88, -118, -61, 24, 10, 73, 75, -38, -70, -16, 17, -31, 126, -62, 52, -36, -14, 111, 6, 104, -124, 56, 15, -88, -113, -120, 87, 74, -91, 25, 93, -89, -44, -55, 73, 35, -3, 40, 76, 91, 55, 32, 29};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.192746336723);
    msg.setSource(17118U);
    msg.setSourceEntity(53U);
    msg.setDestination(30995U);
    msg.setDestinationEntity(111U);
    msg.req_id = 34395U;
    msg.type = 225U;
    msg.max_size = 9595U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.901128753116;
    tmp_msg_0.base_lon = 0.42097453013;
    tmp_msg_0.base_time = 0.605984184361;
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
    msg.setTimeStamp(0.49080755607);
    msg.setSource(29090U);
    msg.setSourceEntity(231U);
    msg.setDestination(3665U);
    msg.setDestinationEntity(179U);
    msg.req_id = 35903U;
    msg.type = 183U;
    msg.max_size = 55280U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.510348931157;
    tmp_msg_0.base_lon = 0.803312122275;
    tmp_msg_0.base_time = 0.401580100373;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 63799U;
    tmp_tmp_msg_0_0.destination = 1612U;
    tmp_tmp_msg_0_0.timeout = 0.922503604643;
    IMC::UsblFixExtended tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.target.assign("UKDYDEAOBDFWOCEYAZJKRJZLQXSPVYZDCPMKGUYDKBLIYKPFNKSFWQCLUVAHKFCUTYJEXGBPILTMFZINNVSVRGVQYMZXLDDGRJBXXQRBEHAROMTQCBBJVRWOFVJATJXCCVDEERFNHBSWRRPQTZTUONUFEWMJGCSJLGYMELPOPWVFKTSNAMOQVOCWHZ");
    tmp_tmp_tmp_msg_0_0_0.lat = 0.112596200883;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.90462181781;
    tmp_tmp_tmp_msg_0_0_0.z_units = 82U;
    tmp_tmp_tmp_msg_0_0_0.z = 0.157433943941;
    tmp_tmp_tmp_msg_0_0_0.accuracy = 0.640117228379;
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
    msg.setTimeStamp(0.99811825194);
    msg.setSource(19582U);
    msg.setSourceEntity(208U);
    msg.setDestination(59030U);
    msg.setDestinationEntity(207U);
    msg.req_id = 57055U;
    msg.type = 73U;
    msg.max_size = 25229U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.192595424284;
    tmp_msg_0.base_lon = 0.261942279027;
    tmp_msg_0.base_time = 0.0881569479214;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 55971U;
    tmp_tmp_msg_0_0.priority = -53;
    tmp_tmp_msg_0_0.x = 27752;
    tmp_tmp_msg_0_0.y = 16984;
    tmp_tmp_msg_0_0.z = 24957;
    tmp_tmp_msg_0_0.t = -7509;
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.maneuver_id.assign("UBRQMJOESKMVENZFWAISPPBKDSWYASXXONHPJMFQVTVYDSKNOCOWCAVMMIKOLZYTFSKALBBEAAFDJBVCPQLTZLDTHXAWUELNMRVXRLUDQMJOHLUKCEUXFBQPMNFVQHDOHDXBUZCAPKHTNJVKXADNTUSGVCGFFZCJIGYQZEYRPYEGIROWZXEJIIQMWCTTHQGYNZSOWBUGWJKZGBJRCGAQXREMLEWDKYURSWSVBDRHPGOGXCYNJZLIHT");
    IMC::FormationPlanExecution tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.group_name.assign("HLYUYMKNQFEAPEHPUSRFYSKYXWCFABEPGDFKPLXUQIWEIWWBLDVJSIPNUPHKOQXIJGCHOWTZWQFVLSKGYAEOVKZUTDGGOFUIZQXHOFREUIRXPOVAIZZK");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.formation_name.assign("HSKWVSMCRYTCSNNHXABTDUEOLZMCXESWHLAVCGUXFWGMOZBAOETFLBHDPUMEQOVJITQURODYPFZIQGVIRHRTZARSEWLRYBEBMKZVPQXJXFJUEYUBYLBMPJBDAAPDTJINIZYYSBAKNONTRNWXNRSGZWEAXIQFZRPDVKCTCHDO");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.plan_id.assign("PZYBCQNKOHTFRYTIPBASYQANJVNICJUYIXAIOERTLHVEUEKKSMRUUYUFDXWODAXTNLMLTSZNFOJACOSBGEBSGTRQAFIFGWWDTKHQZOIRUCLMNVCQWJVVRXVIMNHLLXKWDJDKXKSEEPMCUAFWVHBPMRERQWAZUJRAYQCSEVOXWGFHVED");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.description.assign("MASPTLGVYFCBTJXQEALHFDQASMKCSWZAIUBNLHRJWXOWKCPPDLITMTPZQEETYCWGLDPCYKLAAEMDAPWDNJCKVQZJXYRGNFEQDFPSIGVZUGJXJDOOCXYTBWMTCKBQRRFRMVHBYRUISXNUFVIDPOTXESUYKKDEIUYWJDNSOBFS");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.leader_speed = 0.995374210618;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.leader_bank_lim = 0.536315499341;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.pos_sim_err_lim = 0.0458812735423;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.pos_sim_err_wrn = 0.183779168136;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.pos_sim_err_timeout = 32192U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.converg_max = 0.899472507319;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.converg_timeout = 56604U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.comms_timeout = 16008U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.turb_lim = 0.247045777662;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("FPKKZKNHBADDEWROTAYCDLOTGMGZMBEXCWOFVCRNLZUSCXWGMYSENIEUO");
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::Map tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.id.assign("BOGZSZEAEXVTJXBGAVPQCFTRCRVPFDQOKOWRWJAKRQFYQHLDJKLNTIMNTLAPFHDRABWTMKNYDPBUNUVAXVZBVIIOUPJGNKIWXULOZRTTXHIZVQBMMMFJHJAQSZPSGGHPDSUAEOVKGBUWIEWALYYEEZEPLENSGXEKMHLUWZDXFJICISOHLSGPLWGQQLNQWJQBDSCVMCBCRNDYDHKUFYDYEUOOSRRNWFCIYTSFCXAMKYRGBZKXJXMYPUTZI");
    tmp_tmp_tmp_msg_0_0_0.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    IMC::FollowTrajectory tmp_tmp_tmp_tmp_msg_0_0_0_2;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.timeout = 4246U;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.lat = 0.516092231304;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.lon = 0.0105988008179;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.z = 0.874581233872;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.z_units = 238U;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.speed = 0.288196905892;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.speed_units = 203U;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.custom.assign("BADTZSRVRDFKHODTDUEEMHQCIRFIDKSRYJXVBHPWWBUYSGFEWKAXHRPRGOFSTEFLJIUYQKJFPGYMAKPURHCSATLOEOVJXQCPFBTNNQYAEJUXMYJSALZMOZHEWKEHXPIFTAZNTW");
    tmp_tmp_tmp_msg_0_0_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_2);
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.596624369216);
    msg.setSource(57429U);
    msg.setSourceEntity(152U);
    msg.setDestination(44953U);
    msg.setDestinationEntity(146U);
    msg.original_source = 19048U;
    msg.destination = 33476U;
    msg.timeout = 0.826719232976;
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 107U;
    tmp_msg_0.angle = 0.244701991637;
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
    msg.setTimeStamp(0.76315902024);
    msg.setSource(37773U);
    msg.setSourceEntity(166U);
    msg.setDestination(40354U);
    msg.setDestinationEntity(119U);
    msg.original_source = 17909U;
    msg.destination = 40563U;
    msg.timeout = 0.348274609425;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 155U;
    tmp_msg_0.flags = 120U;
    tmp_msg_0.description.assign("JWMUMCGXBXQCMUJEARTRAHGBIGZHTYCOJBOVACBKIOPMUVHTZXSBLQSZDPVGNEQJYPRCCXUESWGLFWTINYMIJDJFQZXWKUTACPRRBZXOHYLLEDIMTNGKYUDRWVIMXXQAEQAHWNNNNEPNUHHHKUTSBJZLOEWEOGLSZYSDDWN");
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
    msg.setTimeStamp(0.499090585537);
    msg.setSource(12318U);
    msg.setSourceEntity(111U);
    msg.setDestination(13459U);
    msg.setDestinationEntity(7U);
    msg.original_source = 7726U;
    msg.destination = 30363U;
    msg.timeout = 0.0484399774898;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 4100128207U;
    tmp_msg_0.state = 182U;
    tmp_msg_0.error.assign("NOJAAUQPIOGDAXXLHFCOVHUUCWZUYQQZRPGQHXLWNKPOMCIXDBNOYKJOQGBKWWIFMVZVIRQNYPDLICYLRIEBSEJKBGDAWWDUYVZQJSPHTCRJECNCYHFFFFIILDETXAHGLUZATGGAAXRJNUUQZHSYEMMCSJTKRQUMVSMDYMRYMHECUDSSDJRLFWLFFBZVOIXTMTEBKOVTZORLHJZPTLEMZKVEKNJTFNWY");
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
    msg.setTimeStamp(0.42091622189);
    msg.setSource(12690U);
    msg.setSourceEntity(176U);
    msg.setDestination(62103U);
    msg.setDestinationEntity(40U);
    msg.type = 66U;
    msg.comm_interface = 26246U;
    msg.model = 47418U;
    msg.list.assign("ULBQFFBVDZIHLKQVKORNPFEAQFYMYCVJNRTSHMKOWDCGSBPTTVFNODEIMCWMRMJGPTRAUHHWLAIYW");

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
    msg.setTimeStamp(0.83779678255);
    msg.setSource(35131U);
    msg.setSourceEntity(104U);
    msg.setDestination(54414U);
    msg.setDestinationEntity(159U);
    msg.type = 5U;
    msg.comm_interface = 1267U;
    msg.model = 17293U;
    msg.list.assign("GGPHVKPDOPTJPYSAOFMGXDXNQLYSNFNIZZLZVDVLKVTKUYBCMKXDHWEGLWLHNDGUZPHAWNWLBMFPIUHFYGEAPIPSTJFBKQEQQXDDLOBYBAJMDFIILVOSINWLFVUQMHOTKGCMCJZDNSMAASCJUHPJFOGXUVEGUZBNJXFMK");

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
    msg.setTimeStamp(0.537759321672);
    msg.setSource(11711U);
    msg.setSourceEntity(118U);
    msg.setDestination(59194U);
    msg.setDestinationEntity(212U);
    msg.type = 246U;
    msg.comm_interface = 43199U;
    msg.model = 62699U;
    msg.list.assign("UFANTXENLEPUUBYTKJWYVICBMMSVJUEQJVFKLDNQCRGPBRWOLIGXVVMHBPADEOHPHYXLTOGWKZFRITIXVKAXRMSQADDAGFLCOUFRJLQZSCXQADYNMGKJGYNZVYLWZQWUNAWORZIAYPJMTDEQBBZGJPKWGDIIBKQHFPEHAUERPDHLWUCOYGSNIKMFLTZTSSJBKISMEZRYDPJTOVRSQOUOXQNJCF");

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
    msg.setTimeStamp(0.476292888453);
    msg.setSource(38259U);
    msg.setSourceEntity(128U);
    msg.setDestination(13246U);
    msg.setDestinationEntity(66U);
    msg.type = 47U;
    msg.req_id = 1595355500U;
    msg.ttl = 41313U;
    msg.code = 212U;
    msg.destination.assign("IJPRTWUYJAVAUOMBWJCBLGQFZDBIACSITNOGLHTSBKSIUGEXKKCFDAWXNPYKIDMUTRCYZXQLCHOAZGGNOQPJIIDMFZOENTAWIGWSSHVZHLMJKBHSQOVZIFGCJCNWTXKRHORYZAJXDFLGVMYVSYSXDFFSLJTKWNEEFG");
    msg.source.assign("TAZYAPLMSFFQRCPKLVJRDXEGDKMOHMISPAOUEUKZSOCWXRJVFNQDSEQHXVUGBCAKYBMZXWGGWGHMVTPVQHIFGNZCKCFIPNOJYHRGMPBGANWNVJZSBLHDGOCWSDSNHLNNIUM");
    msg.acknowledge = 215U;
    msg.status = 252U;
    const char tmp_msg_0[] = {7, -94, 11, -124, 80, -49, 46, 45, 9, -90, -87, 96, 81, 95, -56, -65, 15, -58, 83, -57, -61, -79, 46, 89, 58, -64, -125, 56, 19, -120, 58, -85, -112, -85, -17, 94, 55, 60, -117, -90, -80, 28, -27, -105, 68, 37, 96, 40, 39, 17, -107, -18, 118, -48, -42, -6, 38, 45, -72, 41, 40, 68, 72, -80, 109, -29, 110, -90, -29, 79, -1, 18, 11, -73, -64, 65, 65, -15, 64, -3, 43, 122, -26, 115, -77, 56, -4, 118, 29, 39, 1, 13, -18, -79, 79, 91, -78, 62, 100, 94, 12, 117, 79, 0, -120, 49, -121, -93, -39, -77, -84, -16, -106, -95, 15, 66, -70, -35, 9, 18, 7, -86, 107, 72, -49, 68, 63, -77, -113, 114, -14, -44, -112, 91, -45, -123, 120, 101, -73, -34, 62, -128, 103, -108, 0, 25, -34, -70, 73, 9, -48, 50, 91, -5, 32, 34, 108, -67, -38, -26, -76, -97, 4, 69, -57, -15, -124, 53, 75, 45, 18, 67, 16, 89, -32, -86, 123, 93, 110, 66, -27, 65, 53, 114, -110, 102, -76, 114, -89, 16, 36, -97, 70, 124, 55, 97, 22, -85, 3, -116, 53, -65, 73, -120, -26, -53, 69, -78, 89, -5, 35, 66, -97, -54, -11, 21, 54, 32};
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
    msg.setTimeStamp(0.19529523978);
    msg.setSource(51004U);
    msg.setSourceEntity(22U);
    msg.setDestination(9945U);
    msg.setDestinationEntity(126U);
    msg.type = 26U;
    msg.req_id = 2933435192U;
    msg.ttl = 24977U;
    msg.code = 18U;
    msg.destination.assign("GXTCDKVEAWEEGKBUEBBCWNANNIDCSRJIVQEOOQQANJMLZZDLTNHAFDOIVFRSXWXMKRUMIMAQSMXQHSWPOSNETFHXOVOVGVLZSXCBJATIYNJJAURMRUZKANILVHFOHDHHRGWRYBSKZROVTCDFYTMLU");
    msg.source.assign("ZAYEJXSNCHLHNXQWRPWLJUVDPKKRRCGBSQODMIXPUZXAEGLDVEEVWQFXWSPKLOYOLJJSIVWIBZRVMQUFAYBYSXJKGFOBEAOFCENADNFFBAUCIRDUUCIVWSPYVGLCOUHZTRSXSMFQKZIFQAPBNTYANITHEZHQ");
    msg.acknowledge = 64U;
    msg.status = 72U;
    const char tmp_msg_0[] = {-123, 15, -121, -49, 34, 41, -15, 105, 30, 108, 43, -21, -72, -85, -94, 119, 58, -44, -18, 39, 31, -94, 22, 42, -60, -34, -20, 33, -18, -70, 75, 64, 22, -97};
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
    msg.setTimeStamp(0.613336603323);
    msg.setSource(29707U);
    msg.setSourceEntity(74U);
    msg.setDestination(37847U);
    msg.setDestinationEntity(48U);
    msg.type = 232U;
    msg.req_id = 942345262U;
    msg.ttl = 53130U;
    msg.code = 156U;
    msg.destination.assign("PHHSOZGGPFCQRTYJLHHMDKWTGANIRRLWQCSOEUEUJMOIDKWXFDPTNKKNFVOGBNKCDLAYCOEVXAVPGWBZASUBDDVULMZXUQFBYZITYYXBUHRQMRPGDFGDNPMKRVRAIMWNWJMNIXQSXFQRYC");
    msg.source.assign("KYMCSEUMZGWKGNEOWAIODDBHECPWRNNBEUYVDKGXKSXOGZWAYHEAZHURRTOEUBTLUHZSQWPUIEVGMAXIHYUSFHKFPFVCKAOFPVQRTSKAOSJHZRCBBUZFCGXSQBQFIOGCMTTQVJNDEHNTMLLWCOQGTJJPLAITNDTMBPUBROFLDXGNTJJVBFWMJRIVJZZEQXPZCPCAFISXRWDXNIVKYAKHYSFPEYIMYMXKOJPN");
    msg.acknowledge = 169U;
    msg.status = 89U;
    const char tmp_msg_0[] = {6, 10, -32, 2, 110, 20, 46, -35, 17, -16, -108, -80, 47, 82, 5, -6, 14, 13, 76, 104, 3, -24, 65, 81, -23, 82, -104, 46, 57, -117, -104, -87, 77, -22, 8, 46, 33, -54, 78, 52, 91, 114, 49, -20, -102, 43, 43, -86, -23, -55, 12, 7, -108, -42, 57, -92, -31, 73, 65, 80, 33, -102, 98, 78, 110, 42, -101, -70, -10, 62, -70, -88, 74, -31, -5, 3, -10, 79, -71, -40, 7, 105, 22, -81, 100, 101, -122, -72, -3, -63, 114, -32, -90, -3, -51, -59, 71, 15, -11, -4, -54, 91, 34, -38, 110, 18};
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
    msg.setTimeStamp(0.703314844787);
    msg.setSource(6750U);
    msg.setSourceEntity(166U);
    msg.setDestination(6150U);
    msg.setDestinationEntity(197U);
    msg.id = 138U;
    msg.range = 0.812234909857;

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
    msg.setTimeStamp(0.0946180823198);
    msg.setSource(33836U);
    msg.setSourceEntity(165U);
    msg.setDestination(4185U);
    msg.setDestinationEntity(211U);
    msg.id = 119U;
    msg.range = 0.37224928519;

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
    msg.setTimeStamp(0.0482408932259);
    msg.setSource(24813U);
    msg.setSourceEntity(122U);
    msg.setDestination(48193U);
    msg.setDestinationEntity(186U);
    msg.id = 217U;
    msg.range = 0.482405672522;

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
    msg.setTimeStamp(0.481294317413);
    msg.setSource(65092U);
    msg.setSourceEntity(2U);
    msg.setDestination(2106U);
    msg.setDestinationEntity(58U);
    msg.beacon.assign("ISVKZKWBMYSWJQGVEKZGLEHITCDLPLYLLFWWWGSTOSEJAFBJAJCZHPDAI");
    msg.lat = 0.872693798423;
    msg.lon = 0.181945056511;
    msg.depth = 0.656748024034;
    msg.query_channel = 120U;
    msg.reply_channel = 206U;
    msg.transponder_delay = 229U;

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
    msg.setTimeStamp(0.215146354474);
    msg.setSource(25071U);
    msg.setSourceEntity(98U);
    msg.setDestination(37241U);
    msg.setDestinationEntity(114U);
    msg.beacon.assign("XVPCVKTPQKYNXIA");
    msg.lat = 0.758018851822;
    msg.lon = 0.591999559333;
    msg.depth = 0.926780142521;
    msg.query_channel = 21U;
    msg.reply_channel = 28U;
    msg.transponder_delay = 78U;

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
    msg.setTimeStamp(0.142977177937);
    msg.setSource(29266U);
    msg.setSourceEntity(241U);
    msg.setDestination(32967U);
    msg.setDestinationEntity(26U);
    msg.beacon.assign("UUHZZPVWVRMKSOMYCRKPJLYXREZZGUDYSUTWGPTACWPZUTBQYJFLNEGXVGHUMPHSBPEGQUZOQKIYDPCTHWHKCGNNZFOSQILTNXBTQGXTGEXDHBQWHKLOONBCKRESKDVATLZUXMJIHMFLDMKJLARWRRXNLYYNCUVY");
    msg.lat = 0.158661667869;
    msg.lon = 0.844389270805;
    msg.depth = 0.360294021044;
    msg.query_channel = 175U;
    msg.reply_channel = 48U;
    msg.transponder_delay = 164U;

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
    msg.setTimeStamp(0.461323883904);
    msg.setSource(7102U);
    msg.setSourceEntity(34U);
    msg.setDestination(48175U);
    msg.setDestinationEntity(227U);
    msg.op = 70U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GSQQZIMCZKSNSZCTDQIIVOGFTWJAPFBUXDXVEQEOSVWDYHPYTTHHFBGLYPPWJZHOXXGVBUCXXAREMNSPGMCTWAAOMQNHKMGLFIUPJRHFCDVTJCAIYEZBVYXTWDSIBULFBQNFUZQFKPOKEYMIAYLJHVMZNNJYKPSNAESE");
    tmp_msg_0.lat = 0.0766899457081;
    tmp_msg_0.lon = 0.39624450352;
    tmp_msg_0.depth = 0.349675954622;
    tmp_msg_0.query_channel = 49U;
    tmp_msg_0.reply_channel = 209U;
    tmp_msg_0.transponder_delay = 143U;
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
    msg.setTimeStamp(0.546899122999);
    msg.setSource(47162U);
    msg.setSourceEntity(1U);
    msg.setDestination(39888U);
    msg.setDestinationEntity(178U);
    msg.op = 1U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GAJUWLNVNFTRJIRVSBKAIFITEBRVRNALHSAWENQXXIFDFKQGPCBGJYZBDNPMRMTDEYWHSKEWWVFHFRALPUNLTNOJNLSZFUOHAUCOZCDAFCXXLTXNHBIWGYCPEVZMOGATVQDHTBHJURDCZGBYSISOOYZMHMKTBCXDJ");
    tmp_msg_0.lat = 0.188142237068;
    tmp_msg_0.lon = 0.932338548721;
    tmp_msg_0.depth = 0.559158530114;
    tmp_msg_0.query_channel = 70U;
    tmp_msg_0.reply_channel = 190U;
    tmp_msg_0.transponder_delay = 121U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.590590544834);
    msg.setSource(54569U);
    msg.setSourceEntity(150U);
    msg.setDestination(56873U);
    msg.setDestinationEntity(28U);
    msg.op = 26U;

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
    msg.setTimeStamp(0.754618801248);
    msg.setSource(34122U);
    msg.setSourceEntity(63U);
    msg.setDestination(60412U);
    msg.setDestinationEntity(248U);
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 11592U;
    tmp_msg_0.status = 90U;
    tmp_msg_0.text.assign("WOYVRFVASCXZNJTXQBUOJTMSQOTSFCRQCRSKVAJXOAURHJAZYWJONDQGSNXWAMBSQWGREWCYMVKTELKVUVPXIEBXUUHOZDLWYGPMLX");
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
    msg.setTimeStamp(0.388939155892);
    msg.setSource(64110U);
    msg.setSourceEntity(70U);
    msg.setDestination(58375U);
    msg.setDestinationEntity(45U);
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("YUMQFWMPBXYDFUBPYQYTNBHZEENSWYCMZAPXKBUTMGATVPSFOJBOHLSKCRYQGJORXKRDNOFSSHACWHCZZPWUSKRUYUMWIQKKDIRAXTQJWMNJELRBNYUHIVGAKZOBILMESHDGMKLNCSVQPONDLEMADVJVGYXSLCFBXK");
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
    msg.setTimeStamp(0.383485481014);
    msg.setSource(26964U);
    msg.setSourceEntity(236U);
    msg.setDestination(869U);
    msg.setDestinationEntity(49U);
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("VFEZHIOLSHWBPCDEFAUMCXLRVMYLNNOWBHFKLWJPSTSIRBWMMYHFDELABCVGCFXXCRVENCSZKXDUYWOTFYGGEUSKJTOINTYMWJEDQVTRESIBZFHRSMIESNLQXXQDHIZAYHXKBNVHLZDZUNQIAYGIRWAUU");
    tmp_msg_0.state = 213U;
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
    msg.setTimeStamp(0.920411734767);
    msg.setSource(62730U);
    msg.setSourceEntity(216U);
    msg.setDestination(8863U);
    msg.setDestinationEntity(141U);
    msg.op = 210U;
    msg.system.assign("CZEHJNCLPBFHZIFNNYQQOTGLKPREXCGUWNVJRQKPSRFPDLTWBACDYOROSLQQFDGHMSVQVFXULDRZPUHAMRLRECUZVJKHVWITMUETYFWGQMABTENJMZXXEKAFRWPACOXYPZNBYTXJXKOWEKNGQMYCJWIIIKYSQYYWHIUXBVINYZTLGCOTEPCSRUZLSHJJADSJGRWSDDOUBTIDBAWULXVGCVFVKFONMOJQMDFVKAZ");
    msg.range = 0.427809867755;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 53035U;
    tmp_msg_0.custom.assign("XCKEKGIDAIQLNMBVSMEGFIMJWJQLYZTDWXVWPDEDUBDKZPHVXBYNCTBRGSPFXIPRSSUVGEZEKFZSXAWSCDJBRDQOOQIUVNQRFFZQULNVRZXQHYIYRMENKUHWNNKNGCIRPMJTMKTEYVNHKPECIXSVZMQLJJZPAABXLABWDCORAAGYJCOLTHFCFG");
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
    msg.setTimeStamp(0.989971958133);
    msg.setSource(21155U);
    msg.setSourceEntity(149U);
    msg.setDestination(42124U);
    msg.setDestinationEntity(75U);
    msg.op = 113U;
    msg.system.assign("OWMHWQFPCPTKMLIYOGQUPQWZHJWUKWBREBKQYCPGFFCBSZMJMBLRFNECLDOETHGIWZLYNITSTSXZDCAABBHEOMYLXMKCNVLUVRCWBUEGKZXXHLIHDGORKNMAQHECXRGEYBJUHPQENMZMWAVZJRFEDXSAVCQUKOSJWFIRVSAYYNSXDDGOLTKTAGQKSY");
    msg.range = 0.494904962817;
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.400414455967;
    tmp_msg_0.ay_cmd = 0.094699467841;
    tmp_msg_0.az_cmd = 0.297506755281;
    tmp_msg_0.ax_des = 0.586875195755;
    tmp_msg_0.ay_des = 0.320433204728;
    tmp_msg_0.az_des = 0.105890788014;
    tmp_msg_0.virt_err_x = 0.196759670378;
    tmp_msg_0.virt_err_y = 0.120391793855;
    tmp_msg_0.virt_err_z = 0.676135665566;
    tmp_msg_0.surf_fdbk_x = 0.513497168237;
    tmp_msg_0.surf_fdbk_y = 0.652603318117;
    tmp_msg_0.surf_fdbk_z = 0.4192460577;
    tmp_msg_0.surf_unkn_x = 0.272272281534;
    tmp_msg_0.surf_unkn_y = 0.184933415538;
    tmp_msg_0.surf_unkn_z = 0.869911275808;
    tmp_msg_0.ss_x = 0.451925858223;
    tmp_msg_0.ss_y = 0.92523524762;
    tmp_msg_0.ss_z = 0.0176034964482;
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
    msg.setTimeStamp(0.961998649965);
    msg.setSource(33914U);
    msg.setSourceEntity(91U);
    msg.setDestination(14323U);
    msg.setDestinationEntity(147U);
    msg.op = 102U;
    msg.system.assign("VYHVSPFKDSDSWMNRYDAXCJWNONOCCBVWGRCLEKVUUANDBGJVSCBAOGYNZWBAIAREJILTKKBWDJTXLUPRFEHRDIHJWQFCUPGSBJNMYHPXHYTFZGTGGBLRKQCXYYZLZCIIKRUPLIOGXOKUQBLCSNPPOHTWGMJMHWZPYJEOXOBENULZ");
    msg.range = 0.185292185856;
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 159U;
    const char tmp_tmp_msg_0_0[] = {-58, -40, 27, 110, -125, -90, 29, -109, -44, 24, 75, 59, 38, -66, -117, -29, 110, 2, 94, 31, -37, 29, 85, -8, 95, -74, -45, 49, 43, 94, 94, 101, 85, 15, 38, 125, 4, -110, -56, -121, 79, 82, 93, 81, 114, 117, -60, -95, 36, -76, -48, 34, 26, -118, -94, -107, 51, 117, 73, -75, 126, 94, -95, -37, 102, -28, 2, -8, -10, -18, -63, -106, -21, 115, -10, 52, -101, 91, 44, -85, -37, -78, 116, -84, 61, -120, 109, 95, 126, -115, 123, 109, -110, -111, 7, -34, 97, -123, -28, -3, -88, -76, -42, 35, 91, 116, 76, 64, 109, -7, -117, 31, 49, 15, -102, 66, 87, 101, -116, -37, 70, 75, -58, 93, 121};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.387044183367);
    msg.setSource(20529U);
    msg.setSourceEntity(252U);
    msg.setDestination(46916U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.280982886167);
    msg.setSource(63355U);
    msg.setSourceEntity(213U);
    msg.setDestination(44716U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.150880545838);
    msg.setSource(9662U);
    msg.setSourceEntity(175U);
    msg.setDestination(41344U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.130799046239);
    msg.setSource(46577U);
    msg.setSourceEntity(67U);
    msg.setDestination(55834U);
    msg.setDestinationEntity(161U);
    msg.list.assign("FMECWKTKUCTHBEKDJIAAUZUGKPGUUQOCRMMPISOGYXBVOROYNM");

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
    msg.setTimeStamp(0.835891148397);
    msg.setSource(23192U);
    msg.setSourceEntity(30U);
    msg.setDestination(53206U);
    msg.setDestinationEntity(31U);
    msg.list.assign("KOODJDTNARAGFCHYVDZFEQTPCJKYHKWYUCXLMHBDGTEETPKGLUPINYRSYTSDIOSURBHTQSGKOZQMQZXOMHQHIAOGLXWJQUMJETCUIMKZBZXAYBBUWEWXVHAMT");

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
    msg.setTimeStamp(0.630946098603);
    msg.setSource(55874U);
    msg.setSourceEntity(126U);
    msg.setDestination(7405U);
    msg.setDestinationEntity(80U);
    msg.list.assign("AXNCCXJEGSWJQFWNXLLRBKLUYTNXFKPUTFCVQIOXRPMMKHQUMCDVCXOSSZWWNAYGVHRILNPTBTBIVDGBAWMYETZEUQSMJTBUPXLYTITBWCRFYAGBOEHPQKDKSKSEOQMXSTUYYVULJEAXAJFGCWVQEYEPZKOIUFBATXAIMSYANBHGIMOWKR");

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
    msg.setTimeStamp(0.487306709279);
    msg.setSource(54927U);
    msg.setSourceEntity(100U);
    msg.setDestination(31992U);
    msg.setDestinationEntity(152U);
    msg.peer.assign("TREGRYHTXURKOPEJISSKGJBATJYBZZLKFNAPVHJLSRKFMUCIYBLVLQNGLVVPCZXWDPNDSBHCNUZDMNLBADAGMCTSCNSBZWVCQFLEYAXMPXRGLZVPQDKERMWOHBCFFOQTNGQXFAUKQSKWHQMAIQMNYEGMILRNGZHGFDZFAXIZXOSUTJEXHQPWUTDODYAHUITWEVMKDPWDRVUOJYJQSVKEVXXYGTHFPSH");
    msg.rssi = 0.394587774678;
    msg.integrity = 5315U;

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
    msg.setTimeStamp(0.561932323143);
    msg.setSource(40939U);
    msg.setSourceEntity(66U);
    msg.setDestination(29055U);
    msg.setDestinationEntity(103U);
    msg.peer.assign("BAMNVEDPGPJJCZLENGTMPGBFWXEWLKCOPSDUVOACMWFDGDPIWODUZXYQWUCXLNFWPJLZOSHXBCXAUPJBMYRPZGOKBSVOMNCRJNFXRQLHMBGRILALTXQAFSDLNKAWICKISTESGPUVMQCNEFKSOHTYFQYKZIHLZTRVMDWQUQ");
    msg.rssi = 0.606077478101;
    msg.integrity = 57963U;

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
    msg.setTimeStamp(0.970357315087);
    msg.setSource(22417U);
    msg.setSourceEntity(108U);
    msg.setDestination(62944U);
    msg.setDestinationEntity(245U);
    msg.peer.assign("ZMNLKPTVOUBGEPXVZLDOOWWPZLDPEKJRGAVHTAPRGVSXGCAOZWKIQFLPUXMHKWFHHRJVQYGOAAXNIUSAQDQTHHHDVEXPFZCCHCKFJYWTJYWCSFJOFMFVGKCKQAMCRYFIEIDXJHTTCDJ");
    msg.rssi = 0.407631846925;
    msg.integrity = 29259U;

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
    msg.setTimeStamp(0.492534395988);
    msg.setSource(12183U);
    msg.setSourceEntity(211U);
    msg.setDestination(58577U);
    msg.setDestinationEntity(246U);
    msg.value = 14637;

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
    msg.setTimeStamp(0.884113296248);
    msg.setSource(51306U);
    msg.setSourceEntity(98U);
    msg.setDestination(25353U);
    msg.setDestinationEntity(244U);
    msg.value = 7181;

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
    msg.setTimeStamp(0.420838833778);
    msg.setSource(47230U);
    msg.setSourceEntity(107U);
    msg.setDestination(32660U);
    msg.setDestinationEntity(37U);
    msg.value = 15837;

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
    msg.setTimeStamp(0.85614450575);
    msg.setSource(52403U);
    msg.setSourceEntity(78U);
    msg.setDestination(6208U);
    msg.setDestinationEntity(21U);
    msg.value = 0.554910206039;

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
    msg.setTimeStamp(0.915482895025);
    msg.setSource(17869U);
    msg.setSourceEntity(225U);
    msg.setDestination(65225U);
    msg.setDestinationEntity(196U);
    msg.value = 0.959660398179;

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
    msg.setTimeStamp(0.616800671997);
    msg.setSource(29743U);
    msg.setSourceEntity(199U);
    msg.setDestination(21368U);
    msg.setDestinationEntity(140U);
    msg.value = 0.237043407857;

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
    msg.setTimeStamp(0.203755434004);
    msg.setSource(47249U);
    msg.setSourceEntity(158U);
    msg.setDestination(58921U);
    msg.setDestinationEntity(195U);
    msg.value = 0.893080076578;

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
    msg.setTimeStamp(0.932052878385);
    msg.setSource(64552U);
    msg.setSourceEntity(106U);
    msg.setDestination(5745U);
    msg.setDestinationEntity(176U);
    msg.value = 0.818089494966;

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
    msg.setTimeStamp(0.466117314288);
    msg.setSource(57486U);
    msg.setSourceEntity(187U);
    msg.setDestination(44568U);
    msg.setDestinationEntity(228U);
    msg.value = 0.144775802217;

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
    msg.setTimeStamp(0.762821908935);
    msg.setSource(22957U);
    msg.setSourceEntity(17U);
    msg.setDestination(46296U);
    msg.setDestinationEntity(199U);
    msg.validity = 37483U;
    msg.type = 166U;
    msg.utc_year = 30436U;
    msg.utc_month = 78U;
    msg.utc_day = 34U;
    msg.utc_time = 0.473429708477;
    msg.lat = 0.312067404302;
    msg.lon = 0.890771602379;
    msg.height = 0.119758349466;
    msg.satellites = 61U;
    msg.cog = 0.023543518062;
    msg.sog = 0.954888273811;
    msg.hdop = 0.652102764999;
    msg.vdop = 0.13144397883;
    msg.hacc = 0.213513692826;
    msg.vacc = 0.32315959718;

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
    msg.setTimeStamp(0.754360881728);
    msg.setSource(38124U);
    msg.setSourceEntity(94U);
    msg.setDestination(55131U);
    msg.setDestinationEntity(46U);
    msg.validity = 59960U;
    msg.type = 108U;
    msg.utc_year = 60533U;
    msg.utc_month = 42U;
    msg.utc_day = 165U;
    msg.utc_time = 0.918128068963;
    msg.lat = 0.760024347567;
    msg.lon = 0.926224522585;
    msg.height = 0.0820652636708;
    msg.satellites = 24U;
    msg.cog = 0.00555392518625;
    msg.sog = 0.953462473635;
    msg.hdop = 0.442795060108;
    msg.vdop = 0.623051042777;
    msg.hacc = 0.253813611992;
    msg.vacc = 0.357495443285;

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
    msg.setTimeStamp(0.684221221925);
    msg.setSource(32934U);
    msg.setSourceEntity(124U);
    msg.setDestination(9566U);
    msg.setDestinationEntity(61U);
    msg.validity = 22995U;
    msg.type = 250U;
    msg.utc_year = 53932U;
    msg.utc_month = 213U;
    msg.utc_day = 60U;
    msg.utc_time = 0.268794244234;
    msg.lat = 0.155473596884;
    msg.lon = 0.996607109414;
    msg.height = 0.130976812241;
    msg.satellites = 20U;
    msg.cog = 0.169223824105;
    msg.sog = 0.829664452631;
    msg.hdop = 0.582276706853;
    msg.vdop = 0.524511139893;
    msg.hacc = 0.379715178439;
    msg.vacc = 0.0131084880236;

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
    msg.setTimeStamp(0.421170164786);
    msg.setSource(6573U);
    msg.setSourceEntity(99U);
    msg.setDestination(48370U);
    msg.setDestinationEntity(39U);
    msg.time = 0.654459100817;
    msg.phi = 0.584839114794;
    msg.theta = 0.0801350877377;
    msg.psi = 0.893400679195;
    msg.psi_magnetic = 0.95786078302;

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
    msg.setTimeStamp(0.0712026709031);
    msg.setSource(37602U);
    msg.setSourceEntity(211U);
    msg.setDestination(6566U);
    msg.setDestinationEntity(27U);
    msg.time = 0.424838558275;
    msg.phi = 0.977192740251;
    msg.theta = 0.0149993094128;
    msg.psi = 0.145941311972;
    msg.psi_magnetic = 0.4524026914;

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
    msg.setTimeStamp(0.715920344781);
    msg.setSource(62709U);
    msg.setSourceEntity(222U);
    msg.setDestination(63625U);
    msg.setDestinationEntity(127U);
    msg.time = 0.369950439178;
    msg.phi = 0.545839593568;
    msg.theta = 0.368281361722;
    msg.psi = 0.763320514052;
    msg.psi_magnetic = 0.0483636228227;

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
    msg.setTimeStamp(0.588538185174);
    msg.setSource(49420U);
    msg.setSourceEntity(30U);
    msg.setDestination(47999U);
    msg.setDestinationEntity(74U);
    msg.time = 0.641424464325;
    msg.x = 0.169554039956;
    msg.y = 0.410207051537;
    msg.z = 0.754333599811;
    msg.timestep = 0.267562542628;

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
    msg.setTimeStamp(0.652533133429);
    msg.setSource(1831U);
    msg.setSourceEntity(240U);
    msg.setDestination(14565U);
    msg.setDestinationEntity(200U);
    msg.time = 0.809766352211;
    msg.x = 0.472540340753;
    msg.y = 0.419918987223;
    msg.z = 0.899833188672;
    msg.timestep = 0.552629069898;

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
    msg.setTimeStamp(0.475918754569);
    msg.setSource(65509U);
    msg.setSourceEntity(44U);
    msg.setDestination(10722U);
    msg.setDestinationEntity(13U);
    msg.time = 0.830170164916;
    msg.x = 0.169506084236;
    msg.y = 0.0466105619841;
    msg.z = 0.368405361141;
    msg.timestep = 0.484629368554;

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
    msg.setTimeStamp(0.537400503107);
    msg.setSource(29013U);
    msg.setSourceEntity(164U);
    msg.setDestination(38308U);
    msg.setDestinationEntity(158U);
    msg.time = 0.548642222905;
    msg.x = 0.488237085036;
    msg.y = 0.535023367022;
    msg.z = 0.415608868652;

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
    msg.setTimeStamp(0.39616956258);
    msg.setSource(45063U);
    msg.setSourceEntity(91U);
    msg.setDestination(47789U);
    msg.setDestinationEntity(232U);
    msg.time = 0.0943079975649;
    msg.x = 0.0588217032037;
    msg.y = 0.584535716434;
    msg.z = 0.254557071389;

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
    msg.setTimeStamp(0.139754475606);
    msg.setSource(59834U);
    msg.setSourceEntity(80U);
    msg.setDestination(64190U);
    msg.setDestinationEntity(81U);
    msg.time = 0.175277832808;
    msg.x = 0.119170652697;
    msg.y = 0.0698144619002;
    msg.z = 0.769376118848;

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
    msg.setTimeStamp(0.2573577022);
    msg.setSource(1070U);
    msg.setSourceEntity(64U);
    msg.setDestination(56063U);
    msg.setDestinationEntity(171U);
    msg.time = 0.919792141278;
    msg.x = 0.766962488542;
    msg.y = 0.930348348684;
    msg.z = 0.316309839043;

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
    msg.setTimeStamp(0.31889467759);
    msg.setSource(53887U);
    msg.setSourceEntity(239U);
    msg.setDestination(45094U);
    msg.setDestinationEntity(100U);
    msg.time = 0.175173098907;
    msg.x = 0.522686076868;
    msg.y = 0.799923761544;
    msg.z = 0.900686562184;

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
    msg.setTimeStamp(0.852577395853);
    msg.setSource(10607U);
    msg.setSourceEntity(121U);
    msg.setDestination(52303U);
    msg.setDestinationEntity(210U);
    msg.time = 0.0971973736713;
    msg.x = 0.058493179676;
    msg.y = 0.740939219681;
    msg.z = 0.496310077194;

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
    msg.setTimeStamp(0.904565902637);
    msg.setSource(7732U);
    msg.setSourceEntity(123U);
    msg.setDestination(33129U);
    msg.setDestinationEntity(97U);
    msg.time = 0.963379131881;
    msg.x = 0.268452583381;
    msg.y = 0.550060182729;
    msg.z = 0.0432657874257;

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
    msg.setTimeStamp(0.235620836466);
    msg.setSource(39830U);
    msg.setSourceEntity(152U);
    msg.setDestination(41563U);
    msg.setDestinationEntity(198U);
    msg.time = 0.89972760499;
    msg.x = 0.234985599167;
    msg.y = 0.220942461876;
    msg.z = 0.190813449261;

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
    msg.setTimeStamp(0.746782268591);
    msg.setSource(62673U);
    msg.setSourceEntity(66U);
    msg.setDestination(46494U);
    msg.setDestinationEntity(239U);
    msg.time = 0.597365497309;
    msg.x = 0.696995930581;
    msg.y = 0.411606467221;
    msg.z = 0.514945012919;

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
    msg.setTimeStamp(0.46590240526);
    msg.setSource(53068U);
    msg.setSourceEntity(64U);
    msg.setDestination(46913U);
    msg.setDestinationEntity(139U);
    msg.validity = 172U;
    msg.x = 0.577348074012;
    msg.y = 0.991902472577;
    msg.z = 0.0566977725232;

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
    msg.setTimeStamp(0.801396549924);
    msg.setSource(20724U);
    msg.setSourceEntity(96U);
    msg.setDestination(9531U);
    msg.setDestinationEntity(233U);
    msg.validity = 250U;
    msg.x = 0.845017934224;
    msg.y = 0.677927505934;
    msg.z = 0.591117607012;

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
    msg.setTimeStamp(0.047449956992);
    msg.setSource(21832U);
    msg.setSourceEntity(247U);
    msg.setDestination(30117U);
    msg.setDestinationEntity(60U);
    msg.validity = 150U;
    msg.x = 0.245237197013;
    msg.y = 0.641320555253;
    msg.z = 0.262638750897;

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
    msg.setTimeStamp(0.612311168259);
    msg.setSource(19763U);
    msg.setSourceEntity(230U);
    msg.setDestination(54957U);
    msg.setDestinationEntity(55U);
    msg.validity = 167U;
    msg.x = 0.581186287858;
    msg.y = 0.113509680275;
    msg.z = 0.529105041689;

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
    msg.setTimeStamp(0.251267387831);
    msg.setSource(28012U);
    msg.setSourceEntity(238U);
    msg.setDestination(49609U);
    msg.setDestinationEntity(157U);
    msg.validity = 27U;
    msg.x = 0.316691121326;
    msg.y = 0.435168774444;
    msg.z = 0.410232641801;

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
    msg.setTimeStamp(0.19838337549);
    msg.setSource(36845U);
    msg.setSourceEntity(71U);
    msg.setDestination(18530U);
    msg.setDestinationEntity(207U);
    msg.validity = 240U;
    msg.x = 0.814423300523;
    msg.y = 0.858385979464;
    msg.z = 0.636763673089;

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
    msg.setTimeStamp(0.269281266027);
    msg.setSource(5719U);
    msg.setSourceEntity(11U);
    msg.setDestination(56718U);
    msg.setDestinationEntity(207U);
    msg.time = 0.692050752961;
    msg.x = 0.726162959274;
    msg.y = 0.766591989503;
    msg.z = 0.763599160604;

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
    msg.setTimeStamp(0.21409031552);
    msg.setSource(1530U);
    msg.setSourceEntity(73U);
    msg.setDestination(3498U);
    msg.setDestinationEntity(42U);
    msg.time = 0.477483039874;
    msg.x = 0.335510153645;
    msg.y = 0.616591338541;
    msg.z = 0.893949937463;

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
    msg.setTimeStamp(0.663028070631);
    msg.setSource(23312U);
    msg.setSourceEntity(74U);
    msg.setDestination(4436U);
    msg.setDestinationEntity(233U);
    msg.time = 0.779617636793;
    msg.x = 0.966541563194;
    msg.y = 0.850937389896;
    msg.z = 0.460116297095;

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
    msg.setTimeStamp(0.3448101234);
    msg.setSource(39286U);
    msg.setSourceEntity(43U);
    msg.setDestination(17821U);
    msg.setDestinationEntity(125U);
    msg.validity = 225U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.676243044781;
    tmp_msg_0.y = 0.938469369982;
    tmp_msg_0.z = 0.807249674351;
    tmp_msg_0.phi = 0.841478383462;
    tmp_msg_0.theta = 0.798106279478;
    tmp_msg_0.psi = 0.109533543689;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.751976076898;
    tmp_msg_1.beam_height = 0.54582608822;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.130345374355;

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
    msg.setTimeStamp(0.555037704935);
    msg.setSource(12836U);
    msg.setSourceEntity(189U);
    msg.setDestination(45145U);
    msg.setDestinationEntity(54U);
    msg.validity = 109U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.273387567875;
    tmp_msg_0.beam_height = 0.522711738822;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.117566122018;

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
    msg.setTimeStamp(0.837178046529);
    msg.setSource(41214U);
    msg.setSourceEntity(11U);
    msg.setDestination(9890U);
    msg.setDestinationEntity(245U);
    msg.validity = 19U;
    msg.value = 0.653113287509;

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
    msg.setTimeStamp(0.0166796662551);
    msg.setSource(24913U);
    msg.setSourceEntity(67U);
    msg.setDestination(53833U);
    msg.setDestinationEntity(31U);
    msg.value = 0.848632112338;

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
    msg.setTimeStamp(0.211785844996);
    msg.setSource(7434U);
    msg.setSourceEntity(208U);
    msg.setDestination(24346U);
    msg.setDestinationEntity(231U);
    msg.value = 0.657867718071;

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
    msg.setTimeStamp(0.19045169878);
    msg.setSource(22329U);
    msg.setSourceEntity(117U);
    msg.setDestination(21462U);
    msg.setDestinationEntity(43U);
    msg.value = 0.483125006784;

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
    msg.setTimeStamp(0.81039535039);
    msg.setSource(63584U);
    msg.setSourceEntity(120U);
    msg.setDestination(41822U);
    msg.setDestinationEntity(250U);
    msg.value = 0.981874872949;

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
    msg.setTimeStamp(0.774425536414);
    msg.setSource(22853U);
    msg.setSourceEntity(135U);
    msg.setDestination(59005U);
    msg.setDestinationEntity(178U);
    msg.value = 0.887015255818;

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
    msg.setTimeStamp(0.80030136334);
    msg.setSource(13869U);
    msg.setSourceEntity(9U);
    msg.setDestination(1888U);
    msg.setDestinationEntity(86U);
    msg.value = 0.625091931962;

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
    msg.setTimeStamp(0.654506690449);
    msg.setSource(57429U);
    msg.setSourceEntity(49U);
    msg.setDestination(29106U);
    msg.setDestinationEntity(85U);
    msg.value = 0.0339946032652;

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
    msg.setTimeStamp(0.763299610443);
    msg.setSource(61397U);
    msg.setSourceEntity(213U);
    msg.setDestination(46376U);
    msg.setDestinationEntity(216U);
    msg.value = 0.463241697223;

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
    msg.setTimeStamp(0.735711889392);
    msg.setSource(16289U);
    msg.setSourceEntity(54U);
    msg.setDestination(58455U);
    msg.setDestinationEntity(67U);
    msg.value = 0.246436791977;

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
    msg.setTimeStamp(0.76312283725);
    msg.setSource(52777U);
    msg.setSourceEntity(50U);
    msg.setDestination(65050U);
    msg.setDestinationEntity(71U);
    msg.value = 0.416114274694;

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
    msg.setTimeStamp(0.365509799036);
    msg.setSource(54642U);
    msg.setSourceEntity(106U);
    msg.setDestination(53176U);
    msg.setDestinationEntity(220U);
    msg.value = 0.546002506078;

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
    msg.setTimeStamp(0.686962962553);
    msg.setSource(21013U);
    msg.setSourceEntity(199U);
    msg.setDestination(64314U);
    msg.setDestinationEntity(247U);
    msg.value = 0.894012805215;

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
    msg.setTimeStamp(0.236175700693);
    msg.setSource(2480U);
    msg.setSourceEntity(174U);
    msg.setDestination(47672U);
    msg.setDestinationEntity(113U);
    msg.value = 0.181424110139;

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
    msg.setTimeStamp(0.407263582236);
    msg.setSource(20414U);
    msg.setSourceEntity(69U);
    msg.setDestination(7107U);
    msg.setDestinationEntity(163U);
    msg.value = 0.890812042153;

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
    msg.setTimeStamp(0.111168892533);
    msg.setSource(39005U);
    msg.setSourceEntity(209U);
    msg.setDestination(57715U);
    msg.setDestinationEntity(145U);
    msg.value = 0.0644308092954;

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
    msg.setTimeStamp(0.452627314897);
    msg.setSource(1989U);
    msg.setSourceEntity(103U);
    msg.setDestination(23186U);
    msg.setDestinationEntity(200U);
    msg.value = 0.206440954861;

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
    msg.setTimeStamp(0.631493614429);
    msg.setSource(37856U);
    msg.setSourceEntity(155U);
    msg.setDestination(2624U);
    msg.setDestinationEntity(190U);
    msg.value = 0.231068734448;

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
    msg.setTimeStamp(0.469858084951);
    msg.setSource(52535U);
    msg.setSourceEntity(81U);
    msg.setDestination(58749U);
    msg.setDestinationEntity(84U);
    msg.value = 0.753605480801;

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
    msg.setTimeStamp(0.813155391016);
    msg.setSource(50184U);
    msg.setSourceEntity(243U);
    msg.setDestination(6145U);
    msg.setDestinationEntity(42U);
    msg.value = 0.288597085728;

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
    msg.setTimeStamp(0.243501386345);
    msg.setSource(64128U);
    msg.setSourceEntity(99U);
    msg.setDestination(41908U);
    msg.setDestinationEntity(136U);
    msg.value = 0.683925832557;

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
    msg.setTimeStamp(0.987041361403);
    msg.setSource(25923U);
    msg.setSourceEntity(53U);
    msg.setDestination(51098U);
    msg.setDestinationEntity(21U);
    msg.value = 0.861150932199;

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
    msg.setTimeStamp(0.861522058547);
    msg.setSource(7974U);
    msg.setSourceEntity(113U);
    msg.setDestination(39178U);
    msg.setDestinationEntity(140U);
    msg.value = 0.194862294297;

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
    msg.setTimeStamp(0.349446794761);
    msg.setSource(58736U);
    msg.setSourceEntity(249U);
    msg.setDestination(55763U);
    msg.setDestinationEntity(12U);
    msg.value = 0.344235802181;

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
    msg.setTimeStamp(0.13051889915);
    msg.setSource(31136U);
    msg.setSourceEntity(207U);
    msg.setDestination(53570U);
    msg.setDestinationEntity(86U);
    msg.value = 0.911748687084;

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
    msg.setTimeStamp(0.623870406656);
    msg.setSource(18592U);
    msg.setSourceEntity(49U);
    msg.setDestination(38471U);
    msg.setDestinationEntity(166U);
    msg.direction = 0.110938492298;
    msg.speed = 0.719311929645;
    msg.turbulence = 0.799589631758;

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
    msg.setTimeStamp(0.572048305019);
    msg.setSource(14070U);
    msg.setSourceEntity(94U);
    msg.setDestination(19244U);
    msg.setDestinationEntity(122U);
    msg.direction = 0.556767567341;
    msg.speed = 0.0958740602587;
    msg.turbulence = 0.449142491023;

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
    msg.setTimeStamp(0.800728163689);
    msg.setSource(48597U);
    msg.setSourceEntity(139U);
    msg.setDestination(47098U);
    msg.setDestinationEntity(232U);
    msg.direction = 0.532231077356;
    msg.speed = 0.890636666288;
    msg.turbulence = 0.210149314123;

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
    msg.setTimeStamp(0.932260721519);
    msg.setSource(14459U);
    msg.setSourceEntity(121U);
    msg.setDestination(35273U);
    msg.setDestinationEntity(80U);
    msg.value = 0.164396108723;

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
    msg.setTimeStamp(0.214185507924);
    msg.setSource(64859U);
    msg.setSourceEntity(75U);
    msg.setDestination(51846U);
    msg.setDestinationEntity(101U);
    msg.value = 0.728929362572;

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
    msg.setTimeStamp(0.343882969812);
    msg.setSource(22727U);
    msg.setSourceEntity(233U);
    msg.setDestination(20000U);
    msg.setDestinationEntity(164U);
    msg.value = 0.803497629812;

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
    msg.setTimeStamp(0.292077051513);
    msg.setSource(13741U);
    msg.setSourceEntity(25U);
    msg.setDestination(18926U);
    msg.setDestinationEntity(108U);
    msg.value.assign("BSGWQCBIYCIMUHAZELG");

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
    msg.setTimeStamp(0.504530161684);
    msg.setSource(39432U);
    msg.setSourceEntity(19U);
    msg.setDestination(62032U);
    msg.setDestinationEntity(222U);
    msg.value.assign("FZZXULXVYHWGKHEEBFJFBCCVXQEHONXJDDRBFUCQNPZWUMCTBIZOETCRFMKDMGWHFNWDGZHFCLYRCYPGNPKRPPVDUGIHUPEEQPHYYOWZIAGVAXMYXWSBVKOOXTINIKYNEQOJQEHSEXNWRJTIJBVLGALALGVNSZCEPHOGPMLT");

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
    msg.setTimeStamp(0.770736548392);
    msg.setSource(60302U);
    msg.setSourceEntity(2U);
    msg.setDestination(11480U);
    msg.setDestinationEntity(160U);
    msg.value.assign("SFNXJXJBXHMJATFGWRBJOJXCIGUHHVQUAHRZCILFGNVFCDWPGQMJUDDPMKMDWRQYIKIROOXFHIOCLGSKMMENS");

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
    msg.setTimeStamp(0.993853551472);
    msg.setSource(6613U);
    msg.setSourceEntity(124U);
    msg.setDestination(9687U);
    msg.setDestinationEntity(58U);
    const char tmp_msg_0[] = {20, 125, 96, 15, -10, 83, 72, -85, 10, 79, -84, -61, -42, -10, 0, -21, 48, 73, -37, 124, 49, 31, -84, 74, -45, 68, 111, -87, -66, 26, -21, 85, -23, -16, 90, 121, 0, -61, 86, -101, -23, -36, 59, -27, -123, -125, 101, 104, -85, 70, 28, 93, -6, 50, -6, -49, 95, -82, -24, -71, 18, -50, -1, 125, 119, 85, -53, -19, 115, -107, -101, 55, 47, -104, 85, 82, -89, -38, 14, 83, 22, -28, 47, -115, 20, -113, -57, 55, 0, 6, -109, -41, -103, 102, -92, 21, 64, -55, 110, -28, 17, 99, -32, 44, -58, -73, -128, -39, -31, 76, 48, 31, 65, -21, -119, -8, -118, -128, 116, -6, -43, 45, 45, -77, 75, 103, 83, -24, 62, -59, -116, -100, 107, -98, -104, 99, -93, -99, -92, 62, 81, 113, 25, -49, -65, -88, 118, 111, 98, 93, 116, -88, -105, 49, -70, -74, 116, 104, -76, 82, -4, -9, 29, 32, -104, -23, 51, -53, -93, -94, 109, 25, 21, 19, -39, 20, 16, 31, 16, -19, 78, 50, -105, 8, -35, 87, -119, 56, -44, -81, -82, 25, -108, -104, 43, 15, -120, 83, 54, -32, -9};
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
    msg.setTimeStamp(0.662687176166);
    msg.setSource(34440U);
    msg.setSourceEntity(98U);
    msg.setDestination(20677U);
    msg.setDestinationEntity(187U);
    const char tmp_msg_0[] = {-109, 115, -98, -105, -2, -36, -97, 1, -16, 38, -123, -45, 117, 89, -60, -64, 109, -19, -63, 72, 66, 91, -85, -74, 70, 108, -99, 16, 22, 86, -119, 29, 15, 112, -112, -118, 99, 90, -90, 121, 104, -86, 45, 68, -4, 96, -95, 61, -116, -82, -26, 89, -52, -98, 80, -100, 8, -41, 75, -126, 105, 84, 90, 15, 85, -64, 126, -117, 80, -78, 18, -7, -110, -74, 94, 39, 119, -119, -103, -118, -84, 12, 72, 14, 100, 116, 92, 85, -33, 105, 88, -50, 69, 31, 109, -125, 28, -40, 12, 32, -84, -124, -37, -20, 17, -92, -32, -56, 113, -83, -24, 31, 10, 1, 20, -62, -73, -90, -31, -123};
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
    msg.setTimeStamp(0.368741609759);
    msg.setSource(1698U);
    msg.setSourceEntity(160U);
    msg.setDestination(27108U);
    msg.setDestinationEntity(176U);
    const char tmp_msg_0[] = {-112, 125, -126, -98, 1, -90, -28, 86, -85, -36, -79, -28, 74, -8, -4, -99, -123, 30, -3, -60, -102, -29, 23, 61, -25, -103, 117, -35, -59, -9, -107, 41, -40, 17, -1, 68, 65, -63, -79, 118, 76, -98, -122, -110, 42, -96, 33, -14, 1, -10, -104, 48, -77, -92, 89, -89, -49, 50, 109, 44, 85, -77, 113, 79, 120, -58, 101, -98, -51, -15, 9, -118, 85, -104, -47, -120, 92, 31, -26, -108, 21, -64, -44, -115, 12, 67, -96, 81, 56, 121, 30, -74, 99};
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
    msg.setTimeStamp(0.253253147964);
    msg.setSource(917U);
    msg.setSourceEntity(14U);
    msg.setDestination(64910U);
    msg.setDestinationEntity(175U);
    msg.value = 0.511913943935;

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
    msg.setTimeStamp(0.188203063575);
    msg.setSource(13545U);
    msg.setSourceEntity(118U);
    msg.setDestination(29573U);
    msg.setDestinationEntity(201U);
    msg.value = 0.332992145901;

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
    msg.setTimeStamp(0.995538981655);
    msg.setSource(27544U);
    msg.setSourceEntity(185U);
    msg.setDestination(20068U);
    msg.setDestinationEntity(74U);
    msg.value = 0.309489650805;

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
    msg.setTimeStamp(0.207623838461);
    msg.setSource(65138U);
    msg.setSourceEntity(147U);
    msg.setDestination(64632U);
    msg.setDestinationEntity(121U);
    msg.type = 85U;
    msg.frequency = 3059229198U;
    msg.min_range = 46993U;
    msg.max_range = 27151U;
    msg.bits_per_point = 53U;
    msg.scale_factor = 0.527032133218;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.332398305755;
    tmp_msg_0.beam_height = 0.223729482484;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {15, -31, 124, 7, 115, -103, -81, -38, 15, -11, -122, 104, 82, -47, -53, 35, -120, 47, -56, 19, 65, -15, 108, 108, -124, 51, 110, 108, 60, 54, -15, 81, -81, -45, 90, 105, -14, 34, 105, 18, 100, -19, 117, -2, 84, 106, -12, -39, 109, 14, 69, -59, -43, 58, -128, -72, 19, -53, -101, 32, -34, 90, -63, -44, -7, 103, -65, -97, -15, -13, -69, 119, -33, 92, -84, -12, -84, -125, -113, 113, -85, 96, 84, 105, 118, -51, -91, -111, 65, -46, 37, 69, -21, -101, -81, -8, 108, -93, -75, 61, 70, 56, -13, -77, 7, -89, 37, 98, 11, -51, 8, -112, -33, -122, -42, 37, 49, 123, 5, -1, -8, 62, -65, 43, 3, 45, -1, -14, -63, 88, -93, -44, -66, -123, -90, -68, 71, 27, 92, 15, 103, -126, -114, 43, 101, -112, 74, 108, -103, -25, -29, 113, -64, -109, 25, -122, 121, -128, 93, -70, -101, -61, 79, 9, -33, 33, -14, -2, -58, 68, 47};
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
    msg.setTimeStamp(0.360649799402);
    msg.setSource(59584U);
    msg.setSourceEntity(172U);
    msg.setDestination(56894U);
    msg.setDestinationEntity(221U);
    msg.type = 0U;
    msg.frequency = 2800961797U;
    msg.min_range = 55703U;
    msg.max_range = 18014U;
    msg.bits_per_point = 68U;
    msg.scale_factor = 0.765593206947;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.750910390993;
    tmp_msg_0.beam_height = 0.833770600046;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {9, 21, -109, 56, 104, 37, 46, 56, -85, 97, -33, -88, -23, 8, 39, 58, -99, -78, -76, 64, 104, 61, 126, -123, -53, 33, -114, 3, -30, -29, -103, -110, -11, -128, -25, 77, 113, -94, 27, -89, -35, 17, -99, 97, -60, 15, 71, 41, -7, -60, -123, 73, -36, 5, -24, 16, -60, -104, 72, 41, -103, -99, 11, 65, -103, 93, 78, 59, -14, 3, -74, 14, -108, 74, 69, -1, 41, -104, 12, -45, -70, 90, 56, 118, 114, -103, 118, -56, -29, -52, -83, 123, 38, -108, -110, -55, -120, -107, 97, -22, -128, 67, 0, -25, 57, -104, -42, -1, -128, -37, 58, 125, 4, 121, 23, 74, 15, 1, -65, 6, -99, -81, -113, 118, -123, -78, 116, 8, -16, 12, -27, 15, -112, 114, 96, 10, 26, 14, 61, 83, -104, -90, -41, 126, 106, 31, -61, 28, -28, 123, 70, 64, -13, -128, -37, 23, -128, -107, -100, -105, -36, -93, 59, -39, 89, 73, 95, 77, -122, 95, 95, -98, 118, 38, 96, -113, 84, 77, -94, -29, -125, -52, -73, -19, -70, 83, 85, 90, 33, -72, 122, 76, 107, -9, -15, -28, 6, 116, -97, 112, -48, 35, 26, 121, 10, 9, 74, -60, 75, -69, 54, 66, 125, 6, -4, -98, -94, -22, 49, 115, 56, 65, -30, 72, -36, -113, -58, 83, 121, 80, 35, -11, 73, 6, -54, 124, -87, 50, -44, -88, -27, -35, 33, -118, -117, -76, 11, 16, 53, -35, -83, 71, 45};
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
    msg.setTimeStamp(0.292821016159);
    msg.setSource(45362U);
    msg.setSourceEntity(245U);
    msg.setDestination(14196U);
    msg.setDestinationEntity(221U);
    msg.type = 12U;
    msg.frequency = 4266078377U;
    msg.min_range = 26327U;
    msg.max_range = 48929U;
    msg.bits_per_point = 132U;
    msg.scale_factor = 0.442046504796;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.753821344963;
    tmp_msg_0.beam_height = 0.1747692688;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-48, -127, -15, 102, 11, 62, 12, -73, -84, 0, 6, 7, -57, -124, 63, 107, 112, -94, -12, 76, 86, 41, -76, -7, -87, 45, -6, -54, 43, 67, 53, 77, -114, 27, -98, 38, 25, 90, 65, 52, -74, 13, -37, 55, -95, 29, -116, 125, 60, -27, -32, 94, 24, 96, -64, -75, -92, 123, 50, 107, -35, 78, -87, -21, 71, 38, -66, -128, 42, -33, 33, 83, -31, 35, 36, -106, 19, -57, -23, -30, 12, -44, -16, 92, 84, 89, 11, 43, 108, -28, 96, -44, -5, 41, 68, 90, 12, -4, -57, -111, 61, 23, 44, -21, 116, 12, -70, 25, -62, 39, 81, 0, 82, 57, -115};
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
    msg.setTimeStamp(0.308130099111);
    msg.setSource(15658U);
    msg.setSourceEntity(107U);
    msg.setDestination(5103U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.671594818695);
    msg.setSource(55634U);
    msg.setSourceEntity(36U);
    msg.setDestination(205U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.262901558329);
    msg.setSource(20000U);
    msg.setSourceEntity(120U);
    msg.setDestination(21793U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.353451007256);
    msg.setSource(27643U);
    msg.setSourceEntity(37U);
    msg.setDestination(43226U);
    msg.setDestinationEntity(137U);
    msg.op = 119U;

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
    msg.setTimeStamp(0.716400260829);
    msg.setSource(44614U);
    msg.setSourceEntity(40U);
    msg.setDestination(54510U);
    msg.setDestinationEntity(105U);
    msg.op = 8U;

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
    msg.setTimeStamp(0.799668983553);
    msg.setSource(39077U);
    msg.setSourceEntity(174U);
    msg.setDestination(31574U);
    msg.setDestinationEntity(63U);
    msg.op = 44U;

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
    msg.setTimeStamp(0.293517503091);
    msg.setSource(9567U);
    msg.setSourceEntity(60U);
    msg.setDestination(1023U);
    msg.setDestinationEntity(47U);
    msg.value = 0.449823534696;
    msg.confidence = 0.0500993007391;
    msg.opmodes.assign("XUWOJJAFXWTAQJWEBPYRTYHYCGDOJRTHBMGDHLRQKIOLWEUGFDKZJFRZFOWCDSKBPKIOXNLANWZLOGHDYTKBKTULIZSIEMBQQSXQVCKHQYTSOCCVEMMNZUFQDCMOWOSBITCYRJYJPWIMMNZANKGTDCUMU");

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
    msg.setTimeStamp(0.100752589459);
    msg.setSource(49857U);
    msg.setSourceEntity(97U);
    msg.setDestination(53929U);
    msg.setDestinationEntity(87U);
    msg.value = 0.660739267728;
    msg.confidence = 0.658785099939;
    msg.opmodes.assign("MVLPSVCXITTJJYIXDTZZMEBCLERTARSAGEQXZDNWHBEYFTCJRUAWUEWGMQGPRYYGIEOLRPYHIVQZPSYPXOVWXLQYCEICPYMTQAKFXKIUZFNQOHMFIZXWOUXBKCAAASRWBBCQRONUUCQEEJHKKDTMBUZGQHJVFKJHMMXOOGPIWKKWZND");

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
    msg.setTimeStamp(0.425970944335);
    msg.setSource(45970U);
    msg.setSourceEntity(218U);
    msg.setDestination(16153U);
    msg.setDestinationEntity(101U);
    msg.value = 0.561894688205;
    msg.confidence = 0.225358113772;
    msg.opmodes.assign("ZVFHTZMYRTFRGYHCYPRUXCWVGNSFRBQI");

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
    msg.setTimeStamp(0.727835784276);
    msg.setSource(1766U);
    msg.setSourceEntity(228U);
    msg.setDestination(42068U);
    msg.setDestinationEntity(160U);
    msg.itow = 567506616U;
    msg.lat = 0.851810318701;
    msg.lon = 0.809828768122;
    msg.height_ell = 0.758174004493;
    msg.height_sea = 0.0425147920883;
    msg.hacc = 0.0419636864007;
    msg.vacc = 0.678982438313;
    msg.vel_n = 0.197012542538;
    msg.vel_e = 0.159491878825;
    msg.vel_d = 0.61998296116;
    msg.speed = 0.479677929518;
    msg.gspeed = 0.526839594373;
    msg.heading = 0.360303539842;
    msg.sacc = 0.70259694506;
    msg.cacc = 0.956570737144;

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
    msg.setTimeStamp(0.44283438125);
    msg.setSource(32755U);
    msg.setSourceEntity(81U);
    msg.setDestination(521U);
    msg.setDestinationEntity(71U);
    msg.itow = 3537363542U;
    msg.lat = 0.251240568676;
    msg.lon = 0.498708295876;
    msg.height_ell = 0.44263073866;
    msg.height_sea = 0.753980455579;
    msg.hacc = 0.81552517091;
    msg.vacc = 0.896501442699;
    msg.vel_n = 0.941206353319;
    msg.vel_e = 0.702525327754;
    msg.vel_d = 0.436903045108;
    msg.speed = 0.898245202919;
    msg.gspeed = 0.378191586048;
    msg.heading = 0.809675601359;
    msg.sacc = 0.409490525452;
    msg.cacc = 0.533987464422;

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
    msg.setTimeStamp(0.129806780832);
    msg.setSource(25029U);
    msg.setSourceEntity(230U);
    msg.setDestination(64189U);
    msg.setDestinationEntity(145U);
    msg.itow = 425248663U;
    msg.lat = 0.544225857219;
    msg.lon = 0.544911426235;
    msg.height_ell = 0.467455316406;
    msg.height_sea = 0.208575928684;
    msg.hacc = 0.651691267251;
    msg.vacc = 0.839287234536;
    msg.vel_n = 0.555589955099;
    msg.vel_e = 0.954225677397;
    msg.vel_d = 0.121432763509;
    msg.speed = 0.877686217556;
    msg.gspeed = 0.587324870437;
    msg.heading = 0.543763462561;
    msg.sacc = 0.665416120915;
    msg.cacc = 0.231363000675;

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
    msg.setTimeStamp(0.310081567943);
    msg.setSource(23615U);
    msg.setSourceEntity(233U);
    msg.setDestination(42975U);
    msg.setDestinationEntity(77U);
    msg.id = 59U;
    msg.value = 0.256712388106;

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
    msg.setTimeStamp(0.800071895798);
    msg.setSource(25091U);
    msg.setSourceEntity(0U);
    msg.setDestination(51657U);
    msg.setDestinationEntity(146U);
    msg.id = 7U;
    msg.value = 0.71041731685;

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
    msg.setTimeStamp(0.839841074198);
    msg.setSource(65458U);
    msg.setSourceEntity(55U);
    msg.setDestination(45672U);
    msg.setDestinationEntity(63U);
    msg.id = 61U;
    msg.value = 0.244724190263;

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
    msg.setTimeStamp(0.27692035296);
    msg.setSource(8954U);
    msg.setSourceEntity(220U);
    msg.setDestination(30158U);
    msg.setDestinationEntity(3U);
    msg.x = 0.606267419029;
    msg.y = 0.597080624806;
    msg.z = 0.15029631866;
    msg.phi = 0.555538667405;
    msg.theta = 0.98223140122;
    msg.psi = 0.817247379396;

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
    msg.setTimeStamp(0.130489563859);
    msg.setSource(58333U);
    msg.setSourceEntity(62U);
    msg.setDestination(15169U);
    msg.setDestinationEntity(57U);
    msg.x = 0.78856230056;
    msg.y = 0.219704082988;
    msg.z = 0.367410016116;
    msg.phi = 0.913532791626;
    msg.theta = 0.319556095048;
    msg.psi = 0.764704500355;

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
    msg.setTimeStamp(0.449093539564);
    msg.setSource(25559U);
    msg.setSourceEntity(119U);
    msg.setDestination(43160U);
    msg.setDestinationEntity(57U);
    msg.x = 0.340952293221;
    msg.y = 0.968682048674;
    msg.z = 0.248001289742;
    msg.phi = 0.0539461768909;
    msg.theta = 0.597670714594;
    msg.psi = 0.954117365636;

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
    msg.setTimeStamp(0.601584298596);
    msg.setSource(6543U);
    msg.setSourceEntity(79U);
    msg.setDestination(52395U);
    msg.setDestinationEntity(35U);
    msg.beam_width = 0.306761556419;
    msg.beam_height = 0.573737448301;

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
    msg.setTimeStamp(0.503856599667);
    msg.setSource(4296U);
    msg.setSourceEntity(134U);
    msg.setDestination(38651U);
    msg.setDestinationEntity(181U);
    msg.beam_width = 0.644989534823;
    msg.beam_height = 0.073011370857;

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
    msg.setTimeStamp(0.717280492614);
    msg.setSource(2623U);
    msg.setSourceEntity(158U);
    msg.setDestination(53023U);
    msg.setDestinationEntity(16U);
    msg.beam_width = 0.662196137154;
    msg.beam_height = 0.826912330679;

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
    msg.setTimeStamp(0.828785146765);
    msg.setSource(50520U);
    msg.setSourceEntity(252U);
    msg.setDestination(32652U);
    msg.setDestinationEntity(198U);
    msg.sane = 107U;

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
    msg.setTimeStamp(0.231549014873);
    msg.setSource(6573U);
    msg.setSourceEntity(77U);
    msg.setDestination(23752U);
    msg.setDestinationEntity(136U);
    msg.sane = 201U;

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
    msg.setTimeStamp(0.669231045542);
    msg.setSource(19898U);
    msg.setSourceEntity(209U);
    msg.setDestination(53852U);
    msg.setDestinationEntity(72U);
    msg.sane = 154U;

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
    msg.setTimeStamp(0.37664490571);
    msg.setSource(46989U);
    msg.setSourceEntity(147U);
    msg.setDestination(25359U);
    msg.setDestinationEntity(157U);
    msg.value = 0.754607822051;

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
    msg.setTimeStamp(0.919312778201);
    msg.setSource(8742U);
    msg.setSourceEntity(91U);
    msg.setDestination(40808U);
    msg.setDestinationEntity(79U);
    msg.value = 0.81614570955;

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
    msg.setTimeStamp(0.766931508266);
    msg.setSource(28870U);
    msg.setSourceEntity(39U);
    msg.setDestination(32653U);
    msg.setDestinationEntity(116U);
    msg.value = 0.182111188557;

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
    msg.setTimeStamp(0.175659226166);
    msg.setSource(57900U);
    msg.setSourceEntity(81U);
    msg.setDestination(46326U);
    msg.setDestinationEntity(148U);
    msg.value = 0.413404746684;

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
    msg.setTimeStamp(0.758181314194);
    msg.setSource(4635U);
    msg.setSourceEntity(117U);
    msg.setDestination(21581U);
    msg.setDestinationEntity(43U);
    msg.value = 0.985708779466;

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
    msg.setTimeStamp(0.925875511549);
    msg.setSource(52471U);
    msg.setSourceEntity(141U);
    msg.setDestination(45601U);
    msg.setDestinationEntity(129U);
    msg.value = 0.645171776285;

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
    msg.setTimeStamp(0.881930074213);
    msg.setSource(23453U);
    msg.setSourceEntity(20U);
    msg.setDestination(25675U);
    msg.setDestinationEntity(12U);
    msg.value = 0.391206723204;

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
    msg.setTimeStamp(0.158653783297);
    msg.setSource(15089U);
    msg.setSourceEntity(36U);
    msg.setDestination(11407U);
    msg.setDestinationEntity(143U);
    msg.value = 0.344295886578;

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
    msg.setTimeStamp(0.859738348323);
    msg.setSource(63154U);
    msg.setSourceEntity(193U);
    msg.setDestination(39899U);
    msg.setDestinationEntity(211U);
    msg.value = 0.370915331719;

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
    msg.setTimeStamp(0.795231741987);
    msg.setSource(40483U);
    msg.setSourceEntity(81U);
    msg.setDestination(40398U);
    msg.setDestinationEntity(13U);
    msg.value = 0.947119196584;

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
    msg.setTimeStamp(0.195242566172);
    msg.setSource(28085U);
    msg.setSourceEntity(154U);
    msg.setDestination(54427U);
    msg.setDestinationEntity(166U);
    msg.value = 0.508383623619;

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
    msg.setTimeStamp(0.421131880583);
    msg.setSource(36369U);
    msg.setSourceEntity(174U);
    msg.setDestination(61808U);
    msg.setDestinationEntity(198U);
    msg.value = 0.548795026225;

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
    msg.setTimeStamp(0.205320544701);
    msg.setSource(34739U);
    msg.setSourceEntity(189U);
    msg.setDestination(23016U);
    msg.setDestinationEntity(141U);
    msg.value = 0.195774696691;

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
    msg.setTimeStamp(0.332413262678);
    msg.setSource(42550U);
    msg.setSourceEntity(218U);
    msg.setDestination(43165U);
    msg.setDestinationEntity(63U);
    msg.value = 0.117500096473;

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
    msg.setTimeStamp(0.28946477055);
    msg.setSource(61414U);
    msg.setSourceEntity(49U);
    msg.setDestination(7179U);
    msg.setDestinationEntity(13U);
    msg.value = 0.434620837754;

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
    msg.setTimeStamp(0.267140991079);
    msg.setSource(12796U);
    msg.setSourceEntity(51U);
    msg.setDestination(7577U);
    msg.setDestinationEntity(98U);
    msg.value = 0.797835584555;

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
    msg.setTimeStamp(0.719184868037);
    msg.setSource(54445U);
    msg.setSourceEntity(211U);
    msg.setDestination(3825U);
    msg.setDestinationEntity(205U);
    msg.value = 0.00054872913658;

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
    msg.setTimeStamp(0.166450737408);
    msg.setSource(62507U);
    msg.setSourceEntity(19U);
    msg.setDestination(62288U);
    msg.setDestinationEntity(4U);
    msg.value = 0.803698044891;

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
    msg.setTimeStamp(0.713772407053);
    msg.setSource(21342U);
    msg.setSourceEntity(51U);
    msg.setDestination(12519U);
    msg.setDestinationEntity(163U);
    msg.value = 0.835141144541;

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
    msg.setTimeStamp(0.0390024499718);
    msg.setSource(29080U);
    msg.setSourceEntity(150U);
    msg.setDestination(63470U);
    msg.setDestinationEntity(134U);
    msg.value = 0.733545477693;

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
    msg.setTimeStamp(0.104155545415);
    msg.setSource(29209U);
    msg.setSourceEntity(156U);
    msg.setDestination(15733U);
    msg.setDestinationEntity(124U);
    msg.value = 0.812377164046;

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
    msg.setTimeStamp(0.36994178027);
    msg.setSource(53666U);
    msg.setSourceEntity(204U);
    msg.setDestination(35974U);
    msg.setDestinationEntity(1U);
    msg.value = 0.23651221101;

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
    msg.setTimeStamp(0.573248986162);
    msg.setSource(18321U);
    msg.setSourceEntity(47U);
    msg.setDestination(8318U);
    msg.setDestinationEntity(118U);
    msg.value = 0.191086901305;

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
    msg.setTimeStamp(0.445393067701);
    msg.setSource(27266U);
    msg.setSourceEntity(42U);
    msg.setDestination(46682U);
    msg.setDestinationEntity(54U);
    msg.value = 0.0128946680643;

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
    msg.setTimeStamp(0.686781877161);
    msg.setSource(34803U);
    msg.setSourceEntity(34U);
    msg.setDestination(30520U);
    msg.setDestinationEntity(75U);
    msg.validity = 26145U;
    msg.type = 94U;
    msg.tow = 4053410697U;
    msg.base_lat = 0.690617019747;
    msg.base_lon = 0.127254649179;
    msg.base_height = 0.435861288712;
    msg.n = 0.559864052642;
    msg.e = 0.601233093947;
    msg.d = 0.177577376442;
    msg.v_n = 0.979166173437;
    msg.v_e = 0.209709654541;
    msg.v_d = 0.475904408849;
    msg.satellites = 72U;
    msg.iar_hyp = 8847U;
    msg.iar_ratio = 0.728339299679;

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
    msg.setTimeStamp(0.290019534005);
    msg.setSource(31563U);
    msg.setSourceEntity(155U);
    msg.setDestination(41247U);
    msg.setDestinationEntity(204U);
    msg.validity = 45149U;
    msg.type = 254U;
    msg.tow = 1666105746U;
    msg.base_lat = 0.912933526213;
    msg.base_lon = 0.179022550362;
    msg.base_height = 0.998590287453;
    msg.n = 0.733124615858;
    msg.e = 0.0329387038633;
    msg.d = 0.0684766430302;
    msg.v_n = 0.302920159869;
    msg.v_e = 0.234533577224;
    msg.v_d = 0.664678093344;
    msg.satellites = 119U;
    msg.iar_hyp = 22026U;
    msg.iar_ratio = 0.634243944202;

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
    msg.setTimeStamp(0.227855574407);
    msg.setSource(11108U);
    msg.setSourceEntity(149U);
    msg.setDestination(6372U);
    msg.setDestinationEntity(102U);
    msg.validity = 29162U;
    msg.type = 78U;
    msg.tow = 111563386U;
    msg.base_lat = 0.0707442442336;
    msg.base_lon = 0.557705793631;
    msg.base_height = 0.601837046438;
    msg.n = 0.843842667896;
    msg.e = 0.353409851366;
    msg.d = 0.806369234024;
    msg.v_n = 0.316191408882;
    msg.v_e = 0.926037976648;
    msg.v_d = 0.52915022378;
    msg.satellites = 147U;
    msg.iar_hyp = 24101U;
    msg.iar_ratio = 0.997515596036;

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
    msg.setTimeStamp(0.00083396926742);
    msg.setSource(8116U);
    msg.setSourceEntity(142U);
    msg.setDestination(64970U);
    msg.setDestinationEntity(25U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.302483351565;
    tmp_msg_0.lon = 0.934754921698;
    tmp_msg_0.height = 0.215794939628;
    tmp_msg_0.x = 0.693249247208;
    tmp_msg_0.y = 0.759007690346;
    tmp_msg_0.z = 0.409110237733;
    tmp_msg_0.phi = 0.151305877659;
    tmp_msg_0.theta = 0.253674265264;
    tmp_msg_0.psi = 0.47647178237;
    tmp_msg_0.u = 0.792433936546;
    tmp_msg_0.v = 0.114324237209;
    tmp_msg_0.w = 0.459928318163;
    tmp_msg_0.vx = 0.83709223574;
    tmp_msg_0.vy = 0.0876425517025;
    tmp_msg_0.vz = 0.856877689222;
    tmp_msg_0.p = 0.74554735324;
    tmp_msg_0.q = 0.888342829452;
    tmp_msg_0.r = 0.372653309819;
    tmp_msg_0.depth = 0.981216782775;
    tmp_msg_0.alt = 0.0707069328602;
    msg.state.set(tmp_msg_0);
    msg.type = 77U;

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
    msg.setTimeStamp(0.400712831566);
    msg.setSource(40040U);
    msg.setSourceEntity(65U);
    msg.setDestination(35510U);
    msg.setDestinationEntity(242U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.251413086342;
    tmp_msg_0.lon = 0.939350178666;
    tmp_msg_0.height = 0.91118207646;
    tmp_msg_0.x = 0.504315873344;
    tmp_msg_0.y = 0.0562802261136;
    tmp_msg_0.z = 0.420270262733;
    tmp_msg_0.phi = 0.432592298957;
    tmp_msg_0.theta = 0.6126030005;
    tmp_msg_0.psi = 0.0279562828078;
    tmp_msg_0.u = 0.423814878758;
    tmp_msg_0.v = 0.598721249865;
    tmp_msg_0.w = 0.861351643973;
    tmp_msg_0.vx = 0.103272798472;
    tmp_msg_0.vy = 0.249941519608;
    tmp_msg_0.vz = 0.815350451453;
    tmp_msg_0.p = 0.96199882941;
    tmp_msg_0.q = 0.441383346556;
    tmp_msg_0.r = 0.661859935082;
    tmp_msg_0.depth = 0.852658122503;
    tmp_msg_0.alt = 0.87159151958;
    msg.state.set(tmp_msg_0);
    msg.type = 171U;

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
    msg.setTimeStamp(0.367959207613);
    msg.setSource(45248U);
    msg.setSourceEntity(75U);
    msg.setDestination(55542U);
    msg.setDestinationEntity(197U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.845940420915;
    tmp_msg_0.lon = 0.770990657786;
    tmp_msg_0.height = 0.0748347741801;
    tmp_msg_0.x = 0.335541547751;
    tmp_msg_0.y = 0.868393511571;
    tmp_msg_0.z = 0.396351177921;
    tmp_msg_0.phi = 0.367873999687;
    tmp_msg_0.theta = 0.779653983914;
    tmp_msg_0.psi = 0.483290963155;
    tmp_msg_0.u = 0.628851502779;
    tmp_msg_0.v = 0.527020604222;
    tmp_msg_0.w = 0.0859108916051;
    tmp_msg_0.vx = 0.823097984435;
    tmp_msg_0.vy = 0.516080831028;
    tmp_msg_0.vz = 0.391483558193;
    tmp_msg_0.p = 0.0598429652325;
    tmp_msg_0.q = 0.568573226777;
    tmp_msg_0.r = 0.769079882257;
    tmp_msg_0.depth = 0.321264127652;
    tmp_msg_0.alt = 0.187994868007;
    msg.state.set(tmp_msg_0);
    msg.type = 107U;

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
    msg.setTimeStamp(0.0793009114076);
    msg.setSource(56654U);
    msg.setSourceEntity(14U);
    msg.setDestination(24435U);
    msg.setDestinationEntity(13U);
    msg.value = 0.270675494445;

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
    msg.setTimeStamp(0.863741736081);
    msg.setSource(612U);
    msg.setSourceEntity(53U);
    msg.setDestination(59495U);
    msg.setDestinationEntity(95U);
    msg.value = 0.621746368271;

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
    msg.setTimeStamp(0.243287555893);
    msg.setSource(48270U);
    msg.setSourceEntity(194U);
    msg.setDestination(2098U);
    msg.setDestinationEntity(35U);
    msg.value = 0.526304485564;

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
    msg.setTimeStamp(0.534215053925);
    msg.setSource(12812U);
    msg.setSourceEntity(11U);
    msg.setDestination(17023U);
    msg.setDestinationEntity(33U);
    msg.value = 0.512535053709;

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
    msg.setTimeStamp(0.71465705495);
    msg.setSource(2701U);
    msg.setSourceEntity(214U);
    msg.setDestination(53039U);
    msg.setDestinationEntity(96U);
    msg.value = 0.876729453461;

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
    msg.setTimeStamp(0.957552170061);
    msg.setSource(22767U);
    msg.setSourceEntity(141U);
    msg.setDestination(38041U);
    msg.setDestinationEntity(221U);
    msg.value = 0.515759353109;

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
    msg.setTimeStamp(0.163743304922);
    msg.setSource(38758U);
    msg.setSourceEntity(137U);
    msg.setDestination(29849U);
    msg.setDestinationEntity(191U);
    msg.value = 0.320398197921;

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
    msg.setTimeStamp(0.149148761125);
    msg.setSource(8613U);
    msg.setSourceEntity(238U);
    msg.setDestination(47974U);
    msg.setDestinationEntity(21U);
    msg.value = 0.183754291357;

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
    msg.setTimeStamp(0.680667414);
    msg.setSource(47923U);
    msg.setSourceEntity(228U);
    msg.setDestination(41541U);
    msg.setDestinationEntity(181U);
    msg.value = 0.345661426451;

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
    msg.setTimeStamp(0.0804756031738);
    msg.setSource(4025U);
    msg.setSourceEntity(251U);
    msg.setDestination(5634U);
    msg.setDestinationEntity(246U);
    msg.value = 0.501652439934;

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
    msg.setTimeStamp(0.91184412051);
    msg.setSource(36683U);
    msg.setSourceEntity(113U);
    msg.setDestination(51260U);
    msg.setDestinationEntity(96U);
    msg.value = 0.470640404746;

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
    msg.setTimeStamp(0.821065496852);
    msg.setSource(28605U);
    msg.setSourceEntity(74U);
    msg.setDestination(23641U);
    msg.setDestinationEntity(86U);
    msg.value = 0.0163135691427;

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
    msg.setTimeStamp(0.993362772391);
    msg.setSource(15851U);
    msg.setSourceEntity(149U);
    msg.setDestination(1413U);
    msg.setDestinationEntity(93U);
    msg.value = 0.0321308047955;

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
    msg.setTimeStamp(0.836808330151);
    msg.setSource(50453U);
    msg.setSourceEntity(74U);
    msg.setDestination(28582U);
    msg.setDestinationEntity(150U);
    msg.value = 0.998871981269;

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
    msg.setTimeStamp(0.129538515205);
    msg.setSource(53404U);
    msg.setSourceEntity(238U);
    msg.setDestination(31894U);
    msg.setDestinationEntity(45U);
    msg.value = 0.106845314453;

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
    msg.setTimeStamp(0.905060882592);
    msg.setSource(35407U);
    msg.setSourceEntity(105U);
    msg.setDestination(39747U);
    msg.setDestinationEntity(225U);
    msg.id = 215U;
    msg.zoom = 232U;
    msg.action = 240U;

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
    msg.setTimeStamp(0.772774062245);
    msg.setSource(18839U);
    msg.setSourceEntity(201U);
    msg.setDestination(8319U);
    msg.setDestinationEntity(0U);
    msg.id = 201U;
    msg.zoom = 225U;
    msg.action = 189U;

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
    msg.setTimeStamp(0.081466744801);
    msg.setSource(21170U);
    msg.setSourceEntity(178U);
    msg.setDestination(45995U);
    msg.setDestinationEntity(47U);
    msg.id = 216U;
    msg.zoom = 99U;
    msg.action = 196U;

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
    msg.setTimeStamp(0.344645515499);
    msg.setSource(6322U);
    msg.setSourceEntity(31U);
    msg.setDestination(57194U);
    msg.setDestinationEntity(141U);
    msg.id = 24U;
    msg.value = 0.478962179617;

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
    msg.setTimeStamp(0.251452601364);
    msg.setSource(29835U);
    msg.setSourceEntity(122U);
    msg.setDestination(39771U);
    msg.setDestinationEntity(236U);
    msg.id = 82U;
    msg.value = 0.811802399555;

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
    msg.setTimeStamp(0.643255803474);
    msg.setSource(9518U);
    msg.setSourceEntity(130U);
    msg.setDestination(8732U);
    msg.setDestinationEntity(125U);
    msg.id = 226U;
    msg.value = 0.487720271269;

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
    msg.setTimeStamp(0.875750315983);
    msg.setSource(3757U);
    msg.setSourceEntity(159U);
    msg.setDestination(20891U);
    msg.setDestinationEntity(118U);
    msg.id = 246U;
    msg.value = 0.351453256184;

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
    msg.setTimeStamp(0.763283551998);
    msg.setSource(33952U);
    msg.setSourceEntity(40U);
    msg.setDestination(58163U);
    msg.setDestinationEntity(199U);
    msg.id = 57U;
    msg.value = 0.456425088409;

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
    msg.setTimeStamp(0.351056816781);
    msg.setSource(20771U);
    msg.setSourceEntity(57U);
    msg.setDestination(2475U);
    msg.setDestinationEntity(204U);
    msg.id = 85U;
    msg.value = 0.816077590571;

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
    msg.setTimeStamp(0.808277851006);
    msg.setSource(65193U);
    msg.setSourceEntity(79U);
    msg.setDestination(47629U);
    msg.setDestinationEntity(88U);
    msg.id = 105U;
    msg.angle = 0.836204013791;

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
    msg.setTimeStamp(0.0460982664304);
    msg.setSource(23500U);
    msg.setSourceEntity(208U);
    msg.setDestination(26964U);
    msg.setDestinationEntity(223U);
    msg.id = 233U;
    msg.angle = 0.889719165018;

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
    msg.setTimeStamp(0.835435800175);
    msg.setSource(57463U);
    msg.setSourceEntity(250U);
    msg.setDestination(4102U);
    msg.setDestinationEntity(130U);
    msg.id = 55U;
    msg.angle = 0.976566218803;

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
    msg.setTimeStamp(0.639651956824);
    msg.setSource(52395U);
    msg.setSourceEntity(160U);
    msg.setDestination(44113U);
    msg.setDestinationEntity(102U);
    msg.op = 210U;
    msg.actions.assign("WPYRBPCSULCIGKSCHHQIAXHFDCFQIXWTDHZOKXIVMZRIEMDEJBVTBMABAWOVRFBHLQFJJTUDPPFNJWEYDQFIVRZMGTZGZJQPILNFNHIYQAZMRORRYYJKBRFWAPUWVPNOMDJALWSOXMCCNTHQAUVXELGBNKZECX");

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
    msg.setTimeStamp(0.485821317035);
    msg.setSource(34092U);
    msg.setSourceEntity(235U);
    msg.setDestination(60714U);
    msg.setDestinationEntity(231U);
    msg.op = 52U;
    msg.actions.assign("SRWFAMFPCFQUEMJXDHOJVTRKILYLFLCEUOARVUYHGCCTUBEOZAWMSARTLNLNGLZ");

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
    msg.setTimeStamp(0.380507044341);
    msg.setSource(47080U);
    msg.setSourceEntity(112U);
    msg.setDestination(29955U);
    msg.setDestinationEntity(174U);
    msg.op = 98U;
    msg.actions.assign("ROFNMURFSESSZZARCEQFBAPIGCOBHNDVWZGTLIDKMBGRVUOTGHXPHMJFAMVVXHKIUYCYBGGTRPJAZDPPKAIRLOLAQXYADOQDWJWXLKMRWTDNKHGJCJVYHSPCCNRKEJAQWJXARWIFKYMISENWEBWEFPVOXYHEBNXTXYBGPZCOHQTCTIEHZQZJVYCPBOOV");

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
    msg.setTimeStamp(0.250739105475);
    msg.setSource(13199U);
    msg.setSourceEntity(154U);
    msg.setDestination(4701U);
    msg.setDestinationEntity(142U);
    msg.actions.assign("ORERIADGOIDEPDFHQARYRHDWEXSEKMPHAXOXGCUQMPPINNRJLVINLUETHOGQBUKTENNLILRQSZLBJYMVVTAHPBAGFYQWOITTFOZYYJMJUXEYRSZCKUOYHOFNBXSSUPWLWFAZADDYTXJKGZZZACVC");

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
    msg.setTimeStamp(0.9175620106);
    msg.setSource(39901U);
    msg.setSourceEntity(254U);
    msg.setDestination(31029U);
    msg.setDestinationEntity(8U);
    msg.actions.assign("BSLRAMQXFOHXGYUFLISBRIAPQIDNHKUMOHUWDLKRMUOCZCDAJWAPFZLGQMTPDYFJVXHEVNSYZFJQZCECUWLTWFGTDUPYJKZBGINLHHQENMBKLIERZUEBCQYSEEIRKRXASFHTLVXMYVEXHXHXIRZGSPGVIKAJWXSOIYNKCAVPWEWUJJNDLDPOJGGCQASDBGPBQWGCWLTWUYIUHZBKKTRMFTBCRKA");

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
    msg.setTimeStamp(0.295907916085);
    msg.setSource(35438U);
    msg.setSourceEntity(38U);
    msg.setDestination(15638U);
    msg.setDestinationEntity(12U);
    msg.actions.assign("TOJVSWGKUZPTOZXEVFOGFLYJGIAQPDWST");

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
    msg.setTimeStamp(0.649269191676);
    msg.setSource(49071U);
    msg.setSourceEntity(21U);
    msg.setDestination(63312U);
    msg.setDestinationEntity(62U);
    msg.button = 55U;
    msg.value = 210U;

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
    msg.setTimeStamp(0.564742175169);
    msg.setSource(10100U);
    msg.setSourceEntity(122U);
    msg.setDestination(63584U);
    msg.setDestinationEntity(111U);
    msg.button = 64U;
    msg.value = 128U;

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
    msg.setTimeStamp(0.272100540883);
    msg.setSource(33168U);
    msg.setSourceEntity(237U);
    msg.setDestination(33281U);
    msg.setDestinationEntity(140U);
    msg.button = 4U;
    msg.value = 145U;

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
    msg.setTimeStamp(0.107963451672);
    msg.setSource(38851U);
    msg.setSourceEntity(183U);
    msg.setDestination(57687U);
    msg.setDestinationEntity(104U);
    msg.op = 32U;
    msg.text.assign("WEOEOZPELTYVYNEUJQLJXAHMZQTCLFIWSUMJXQJHDWJOGCFCBKFSEIPXNTAVHNIUBOLZROLEALNSGNBDCEJPDJSAJUWWPFFPCHQDMKFYNQISPMADZZAXKTISOBHCRWBGRZSVITXWQATNI");

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
    msg.setTimeStamp(0.613067171289);
    msg.setSource(42649U);
    msg.setSourceEntity(252U);
    msg.setDestination(9250U);
    msg.setDestinationEntity(230U);
    msg.op = 205U;
    msg.text.assign("SYNQAPSHGNINTGMCPLKMRWALBXPTWDRSNPQMCBVMFJMQEJEJNLQGKIFBWCJPGXKZSIKIEBHWDMRPLWEQRD");

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
    msg.setTimeStamp(0.670517826469);
    msg.setSource(33728U);
    msg.setSourceEntity(157U);
    msg.setDestination(13564U);
    msg.setDestinationEntity(11U);
    msg.op = 107U;
    msg.text.assign("EGQMSHXPXXYIXGVTCACGWYKLJMYDVHYJEDFQVLIQDBDAFPTAWEUZNZWZEFFRCPMLVQMEBSISEMDCULWGKCJZPKTBSZHHNNCYXJLTWTYNDRSAORIKUYQABQKVTNAKRQQYANRGCWWTDOXJJOOIMAOBUZIOGLHFQPHRSLULUPWHMSESGBZTKVZIKPYX");

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
    msg.setTimeStamp(0.956998657599);
    msg.setSource(51273U);
    msg.setSourceEntity(123U);
    msg.setDestination(34545U);
    msg.setDestinationEntity(242U);
    msg.op = 152U;
    msg.time_remain = 0.516635864994;
    msg.sched_time = 0.238842171759;

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
    msg.setTimeStamp(0.894034922995);
    msg.setSource(55117U);
    msg.setSourceEntity(150U);
    msg.setDestination(25183U);
    msg.setDestinationEntity(30U);
    msg.op = 54U;
    msg.time_remain = 0.102036743186;
    msg.sched_time = 0.347295250886;

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
    msg.setTimeStamp(0.365467036716);
    msg.setSource(64818U);
    msg.setSourceEntity(59U);
    msg.setDestination(48428U);
    msg.setDestinationEntity(133U);
    msg.op = 128U;
    msg.time_remain = 0.834148704127;
    msg.sched_time = 0.897675657725;

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
    msg.setTimeStamp(0.689493962807);
    msg.setSource(41019U);
    msg.setSourceEntity(57U);
    msg.setDestination(14017U);
    msg.setDestinationEntity(252U);
    msg.name.assign("VROWPCUEDEGDADXRXQTJJBULDCFIROPBMQRVKBTANJSELNTCXLTSYGNNZKXRBNHFLMUAIMZUVQGJIMHKSAQCFYLFQBPBYRWSSFVSGIKJBDUMMIJXNVCZZEGAUZHWIVZNVPNPGELWPHPDYSHJRSWXCPHOFDWYPEPTXFCQAUZCQXMUFKVOMGQVUKHSVYGMCWZQOAIG");
    msg.op = 104U;
    msg.sched_time = 0.248070552799;

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
    msg.setTimeStamp(0.687472456051);
    msg.setSource(57722U);
    msg.setSourceEntity(161U);
    msg.setDestination(49595U);
    msg.setDestinationEntity(14U);
    msg.name.assign("LUYSTIIXUQGEWDCHKOSYODFXBHKBWMJXAATZOWSDIALONFPXHWDJUFDRGIVUCJSNLADPRCGEVZROLJTQZSKTBELPYPWKCZXPGLZTVNFABTVNRZFQNHRITKUOUQKJSZYXXPMGTEGWHFNCVKHGJVWMAIIBBQBQPU");
    msg.op = 19U;
    msg.sched_time = 0.221383649889;

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
    msg.setTimeStamp(0.832597398154);
    msg.setSource(37642U);
    msg.setSourceEntity(4U);
    msg.setDestination(48106U);
    msg.setDestinationEntity(34U);
    msg.name.assign("OWPWKIMOKPGKBNFEQH");
    msg.op = 194U;
    msg.sched_time = 0.861749325474;

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
    msg.setTimeStamp(0.971209752334);
    msg.setSource(1146U);
    msg.setSourceEntity(29U);
    msg.setDestination(28057U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.179585159094);
    msg.setSource(59634U);
    msg.setSourceEntity(231U);
    msg.setDestination(24747U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.553447065006);
    msg.setSource(29790U);
    msg.setSourceEntity(25U);
    msg.setDestination(35295U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.542771163247);
    msg.setSource(60324U);
    msg.setSourceEntity(205U);
    msg.setDestination(30141U);
    msg.setDestinationEntity(179U);
    msg.name.assign("UWPMZDSZCDGGCJRLZUYPHNMCHQVSINEZYIDQOVPTTNQOJJJYHJGSCWEKUOMOQFAJWN");
    msg.state = 24U;

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
    msg.setTimeStamp(0.310598302779);
    msg.setSource(41142U);
    msg.setSourceEntity(127U);
    msg.setDestination(39093U);
    msg.setDestinationEntity(127U);
    msg.name.assign("QGFCMFYWQUPCBPHOALFRUTBPOLXVSEBORXPOMNIUBLEQIZHYXSNKLQDVTXR");
    msg.state = 211U;

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
    msg.setTimeStamp(0.769933696184);
    msg.setSource(18222U);
    msg.setSourceEntity(66U);
    msg.setDestination(3531U);
    msg.setDestinationEntity(220U);
    msg.name.assign("DUSTQJZGZROCVKPOZDGKQQHXUZXUWPASPIRTLMYTTGBWPYKYCFXTQAGIMWMAKCXABIIJDUAQSPAQLXKHNNVCR");
    msg.state = 203U;

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
    msg.setTimeStamp(0.923722720837);
    msg.setSource(34027U);
    msg.setSourceEntity(97U);
    msg.setDestination(64494U);
    msg.setDestinationEntity(102U);
    msg.name.assign("TZKGGNFTERLQJI");
    msg.value = 137U;

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
    msg.setTimeStamp(0.239715864659);
    msg.setSource(28284U);
    msg.setSourceEntity(141U);
    msg.setDestination(17663U);
    msg.setDestinationEntity(121U);
    msg.name.assign("NULEDCPVIBVXICVNBJFOIZBGGILFEFYELYGVXWKPHOJIKSXSTAWDTGTVCPJZTEOGXJFNKMZEIOYNEAZOJCHGDBCLDBDYVEHCMQLYMMMBWYJGPENUHKSZRUGHWMRTRTSINHQUZTLUISXZQOKLVVPCUQFUQRFUWSFSWCLYOBHAWNKYRDTDPRDPJXRAOXORJBQEPJDTIZKWL");
    msg.value = 136U;

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
    msg.setTimeStamp(0.804106229);
    msg.setSource(62170U);
    msg.setSourceEntity(38U);
    msg.setDestination(53019U);
    msg.setDestinationEntity(6U);
    msg.name.assign("BOVJRAUJGZCAUHBGNGLUDGWNEIFOZEFPMKUAOIXXYIDIKIHWSLBVCFFWVMEHUNXQOJPGAXPSRVKNPUQHQAROYDAXPCMPTTUCLWONGLJODRVTZRJIPCXWBJDTKUKJKKJSFWGEBGEZUHFPGTSSMYRVMQDESMQKZVHDCVC");
    msg.value = 192U;

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
    msg.setTimeStamp(0.854739850993);
    msg.setSource(65515U);
    msg.setSourceEntity(13U);
    msg.setDestination(35151U);
    msg.setDestinationEntity(212U);
    msg.name.assign("JMUSCIMEIFKFSLWOHDJXLIDDHIANRIOEDVPETGGQOPMZCMAZCGXIQPICTJNKYCJAKUKWPOOLVQUKGZHNXDUOLLYQQBYZNIDBKFFQAEIBKAGMVOVGVOQYVXSLTSFXHGNNFWYORSTMCJTYBKWARKHAQYLNRLESUNZMTVONDIZQGEBJWDENRRBPGXUWCMFZTPJEFRHSUSXHJ");

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
    msg.setTimeStamp(0.818177221124);
    msg.setSource(52494U);
    msg.setSourceEntity(19U);
    msg.setDestination(12869U);
    msg.setDestinationEntity(75U);
    msg.name.assign("CQEKFSTHZXYGBJKKTUSLCVDVOKHYCORYAVUSXQNUDHICGSQKUHVMAZCYVAPEGXLUVECYRFFTWMNQCUBRLLXIHPWKYZXMWEVMTBIHIEDORKMJGWQXLZMHNEOMDMTNQQDKZWRODGIBAJYFYCJKBYJPUOAZFBILGAWNQEXBXEEUPILBAMOHRSZVGAESPHNDBO");

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
    msg.setTimeStamp(0.105666412852);
    msg.setSource(12945U);
    msg.setSourceEntity(242U);
    msg.setDestination(48507U);
    msg.setDestinationEntity(112U);
    msg.name.assign("NXZIJGFRNFWPIENSKMNJABZHCTZC");

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
    msg.setTimeStamp(0.398447674635);
    msg.setSource(15850U);
    msg.setSourceEntity(209U);
    msg.setDestination(3491U);
    msg.setDestinationEntity(199U);
    msg.name.assign("SDPFANTDQQGSHJKTAUXOWRUDVTWBCGPTUFLSFXXQMYFRNAVQLRPISLMGCYQMZTSZLANXJQVJMEJDJXCPJMWANKBCUYPZFCSIBOFUNFFPCCLNTRHITMUVJHCXIOYAUFSHJKNTYBDEYNWQKYVRAYYOGIHTRXMWVBRBGZDOYLIOZE");
    msg.value = 5U;

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
    msg.setTimeStamp(0.784687179559);
    msg.setSource(46797U);
    msg.setSourceEntity(115U);
    msg.setDestination(18705U);
    msg.setDestinationEntity(66U);
    msg.name.assign("VQJKWWQZAJMHTLNZVTMGXCUPRRYITPCUSNGVINSWECHYXMDXDUSSTAFZKBIJDMTSTZQBYEAWGVIUCAFBZWWUQPZRGVTDMGXDDCJLPFLSJCLVGAPFFCWHRBQXUBAKVMZQZOOEJHNNMIRF");
    msg.value = 9U;

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
    msg.setTimeStamp(0.897323628178);
    msg.setSource(13270U);
    msg.setSourceEntity(213U);
    msg.setDestination(57246U);
    msg.setDestinationEntity(245U);
    msg.name.assign("NRQGXHUGLDABNVWLLSSPPCPMFIWISXBYQBXRKVROUXHFGLEGVHMRWAQKVLYUMHANHFVKMYODAMGRYDBXNJEWOUWZTJTNPBRKZE");
    msg.value = 244U;

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
    msg.setTimeStamp(0.00334546825611);
    msg.setSource(34552U);
    msg.setSourceEntity(187U);
    msg.setDestination(60023U);
    msg.setDestinationEntity(63U);
    msg.id = 52U;
    msg.period = 594308714U;
    msg.duty_cycle = 799147729U;

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
    msg.setTimeStamp(0.40928262635);
    msg.setSource(28986U);
    msg.setSourceEntity(93U);
    msg.setDestination(47436U);
    msg.setDestinationEntity(145U);
    msg.id = 163U;
    msg.period = 1596743697U;
    msg.duty_cycle = 3425791129U;

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
    msg.setTimeStamp(0.589904792097);
    msg.setSource(21745U);
    msg.setSourceEntity(216U);
    msg.setDestination(12829U);
    msg.setDestinationEntity(136U);
    msg.id = 103U;
    msg.period = 1717166501U;
    msg.duty_cycle = 3929918763U;

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
    msg.setTimeStamp(0.840160520179);
    msg.setSource(16165U);
    msg.setSourceEntity(186U);
    msg.setDestination(6937U);
    msg.setDestinationEntity(124U);
    msg.id = 225U;
    msg.period = 1210650669U;
    msg.duty_cycle = 2257902920U;

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
    msg.setTimeStamp(0.824910721746);
    msg.setSource(62110U);
    msg.setSourceEntity(158U);
    msg.setDestination(59362U);
    msg.setDestinationEntity(161U);
    msg.id = 73U;
    msg.period = 3429399608U;
    msg.duty_cycle = 2489164815U;

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
    msg.setTimeStamp(0.927047969136);
    msg.setSource(54927U);
    msg.setSourceEntity(251U);
    msg.setDestination(1307U);
    msg.setDestinationEntity(132U);
    msg.id = 228U;
    msg.period = 4181106874U;
    msg.duty_cycle = 3302910967U;

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
    msg.setTimeStamp(0.192490589864);
    msg.setSource(39022U);
    msg.setSourceEntity(47U);
    msg.setDestination(21885U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.90674423009;
    msg.lon = 0.0409022633891;
    msg.height = 0.502833932471;
    msg.x = 0.194146716788;
    msg.y = 0.143910894725;
    msg.z = 0.0553924581144;
    msg.phi = 0.802799962775;
    msg.theta = 0.12162733745;
    msg.psi = 0.979993623744;
    msg.u = 0.141122486695;
    msg.v = 0.338297826938;
    msg.w = 0.258528286516;
    msg.vx = 0.315077520165;
    msg.vy = 0.848079423672;
    msg.vz = 0.483799046848;
    msg.p = 0.689818589833;
    msg.q = 0.279247311755;
    msg.r = 0.0175661374699;
    msg.depth = 0.0457595875444;
    msg.alt = 0.479654846756;

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
    msg.setTimeStamp(0.609005200836);
    msg.setSource(5774U);
    msg.setSourceEntity(178U);
    msg.setDestination(18095U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.468809243428;
    msg.lon = 0.319769742298;
    msg.height = 0.016074311594;
    msg.x = 0.374292634566;
    msg.y = 0.645774295904;
    msg.z = 0.623161375446;
    msg.phi = 0.677744689728;
    msg.theta = 0.205641511989;
    msg.psi = 0.172878219076;
    msg.u = 0.186779641933;
    msg.v = 0.33603432218;
    msg.w = 0.18912194057;
    msg.vx = 0.424499108483;
    msg.vy = 0.112999668875;
    msg.vz = 0.328298357398;
    msg.p = 0.878392757865;
    msg.q = 0.119437896205;
    msg.r = 0.870251670302;
    msg.depth = 0.738698947214;
    msg.alt = 0.429456947887;

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
    msg.setTimeStamp(0.798641521895);
    msg.setSource(59684U);
    msg.setSourceEntity(101U);
    msg.setDestination(63412U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.606272090141;
    msg.lon = 0.219567185848;
    msg.height = 0.83504909232;
    msg.x = 0.906372930966;
    msg.y = 0.480217784495;
    msg.z = 0.914390032625;
    msg.phi = 0.486331136838;
    msg.theta = 0.312868742851;
    msg.psi = 0.174184924903;
    msg.u = 0.733078501109;
    msg.v = 0.733272293426;
    msg.w = 0.8763379026;
    msg.vx = 0.695615363103;
    msg.vy = 0.141854373761;
    msg.vz = 0.0100884123039;
    msg.p = 0.90439071399;
    msg.q = 0.216320262132;
    msg.r = 0.257429579694;
    msg.depth = 0.791435468802;
    msg.alt = 0.0636912426616;

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
    msg.setTimeStamp(0.959721878765);
    msg.setSource(46735U);
    msg.setSourceEntity(32U);
    msg.setDestination(63554U);
    msg.setDestinationEntity(146U);
    msg.x = 0.353413642362;
    msg.y = 0.908223501316;
    msg.z = 0.145904262787;

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
    msg.setTimeStamp(0.0398348796934);
    msg.setSource(39288U);
    msg.setSourceEntity(203U);
    msg.setDestination(58645U);
    msg.setDestinationEntity(209U);
    msg.x = 0.730774320443;
    msg.y = 0.883435728178;
    msg.z = 0.264680443899;

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
    msg.setTimeStamp(0.584338895684);
    msg.setSource(36729U);
    msg.setSourceEntity(93U);
    msg.setDestination(60946U);
    msg.setDestinationEntity(251U);
    msg.x = 0.493489001475;
    msg.y = 0.808297715494;
    msg.z = 0.185251529707;

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
    msg.setTimeStamp(0.20338649742);
    msg.setSource(32403U);
    msg.setSourceEntity(180U);
    msg.setDestination(12632U);
    msg.setDestinationEntity(158U);
    msg.value = 0.404183144615;

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
    msg.setTimeStamp(0.225407478491);
    msg.setSource(26683U);
    msg.setSourceEntity(184U);
    msg.setDestination(28918U);
    msg.setDestinationEntity(237U);
    msg.value = 0.0942449748518;

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
    msg.setTimeStamp(0.676056062496);
    msg.setSource(22506U);
    msg.setSourceEntity(216U);
    msg.setDestination(15752U);
    msg.setDestinationEntity(171U);
    msg.value = 0.36594544554;

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
    msg.setTimeStamp(0.226237041392);
    msg.setSource(4808U);
    msg.setSourceEntity(54U);
    msg.setDestination(59324U);
    msg.setDestinationEntity(208U);
    msg.value = 0.477684206305;

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
    msg.setTimeStamp(0.423531829977);
    msg.setSource(6352U);
    msg.setSourceEntity(215U);
    msg.setDestination(34898U);
    msg.setDestinationEntity(8U);
    msg.value = 0.0298372837896;

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
    msg.setTimeStamp(0.601382359726);
    msg.setSource(26314U);
    msg.setSourceEntity(101U);
    msg.setDestination(8276U);
    msg.setDestinationEntity(31U);
    msg.value = 0.755445765715;

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
    msg.setTimeStamp(0.41506784601);
    msg.setSource(1782U);
    msg.setSourceEntity(202U);
    msg.setDestination(27590U);
    msg.setDestinationEntity(112U);
    msg.x = 0.552954949588;
    msg.y = 0.158320831249;
    msg.z = 0.373605039077;
    msg.phi = 0.95805026224;
    msg.theta = 0.490326118995;
    msg.psi = 0.752840496178;
    msg.p = 0.319504219116;
    msg.q = 0.299445208811;
    msg.r = 0.401767655867;
    msg.u = 0.374969421932;
    msg.v = 0.871834767024;
    msg.w = 0.232800268774;
    msg.bias_psi = 0.381597111141;
    msg.bias_r = 0.428492058151;

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
    msg.setTimeStamp(0.250759715193);
    msg.setSource(32084U);
    msg.setSourceEntity(237U);
    msg.setDestination(13164U);
    msg.setDestinationEntity(38U);
    msg.x = 0.891763804679;
    msg.y = 0.531481777535;
    msg.z = 0.215766942151;
    msg.phi = 0.955468564564;
    msg.theta = 0.863655075978;
    msg.psi = 0.514924351132;
    msg.p = 0.45351295322;
    msg.q = 0.727299522321;
    msg.r = 0.535848834629;
    msg.u = 0.512317854222;
    msg.v = 0.185747325972;
    msg.w = 0.594164099602;
    msg.bias_psi = 0.14783121238;
    msg.bias_r = 0.870129917009;

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
    msg.setTimeStamp(0.236266621809);
    msg.setSource(9071U);
    msg.setSourceEntity(234U);
    msg.setDestination(44025U);
    msg.setDestinationEntity(188U);
    msg.x = 0.258116501636;
    msg.y = 0.350462555313;
    msg.z = 0.884053312659;
    msg.phi = 0.131674825496;
    msg.theta = 0.521910193786;
    msg.psi = 0.0349655583283;
    msg.p = 0.575475248442;
    msg.q = 0.0683489879192;
    msg.r = 0.266974771322;
    msg.u = 0.211990628387;
    msg.v = 0.676086269779;
    msg.w = 0.884454203827;
    msg.bias_psi = 0.0723770710301;
    msg.bias_r = 0.573860682491;

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
    msg.setTimeStamp(0.446957066758);
    msg.setSource(40445U);
    msg.setSourceEntity(233U);
    msg.setDestination(21602U);
    msg.setDestinationEntity(20U);
    msg.bias_psi = 0.500682248409;
    msg.bias_r = 0.291857233437;
    msg.cog = 0.526337920304;
    msg.cyaw = 0.0313864769265;
    msg.lbl_rej_level = 0.839732428767;
    msg.gps_rej_level = 0.525552380491;
    msg.custom_x = 0.20360328842;
    msg.custom_y = 0.119991544264;
    msg.custom_z = 0.72630049301;

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
    msg.setTimeStamp(0.679649777769);
    msg.setSource(52659U);
    msg.setSourceEntity(197U);
    msg.setDestination(10007U);
    msg.setDestinationEntity(35U);
    msg.bias_psi = 0.0601343321457;
    msg.bias_r = 0.747890236895;
    msg.cog = 0.521879501093;
    msg.cyaw = 0.524458994726;
    msg.lbl_rej_level = 0.836202862855;
    msg.gps_rej_level = 0.234628039274;
    msg.custom_x = 0.278605937366;
    msg.custom_y = 0.779305116586;
    msg.custom_z = 0.877222998658;

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
    msg.setTimeStamp(0.87222023299);
    msg.setSource(56573U);
    msg.setSourceEntity(82U);
    msg.setDestination(25991U);
    msg.setDestinationEntity(176U);
    msg.bias_psi = 0.0969285079589;
    msg.bias_r = 0.978226284994;
    msg.cog = 0.799595846415;
    msg.cyaw = 0.374669330055;
    msg.lbl_rej_level = 0.170962974541;
    msg.gps_rej_level = 0.42547879687;
    msg.custom_x = 0.0899629680781;
    msg.custom_y = 0.138190434871;
    msg.custom_z = 0.345051665171;

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
    msg.setTimeStamp(0.21890967842);
    msg.setSource(38537U);
    msg.setSourceEntity(231U);
    msg.setDestination(43622U);
    msg.setDestinationEntity(150U);
    msg.utc_time = 0.994325494629;
    msg.reason = 216U;

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
    msg.setTimeStamp(0.967561520586);
    msg.setSource(58694U);
    msg.setSourceEntity(127U);
    msg.setDestination(41287U);
    msg.setDestinationEntity(180U);
    msg.utc_time = 0.0513793674313;
    msg.reason = 229U;

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
    msg.setTimeStamp(0.217114179423);
    msg.setSource(14813U);
    msg.setSourceEntity(37U);
    msg.setDestination(20349U);
    msg.setDestinationEntity(115U);
    msg.utc_time = 0.338253015591;
    msg.reason = 88U;

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
    msg.setTimeStamp(0.394787075129);
    msg.setSource(60634U);
    msg.setSourceEntity(6U);
    msg.setDestination(6712U);
    msg.setDestinationEntity(132U);
    msg.id = 217U;
    msg.range = 0.0496440262481;
    msg.acceptance = 234U;

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
    msg.setTimeStamp(0.0326213895885);
    msg.setSource(58656U);
    msg.setSourceEntity(190U);
    msg.setDestination(63919U);
    msg.setDestinationEntity(250U);
    msg.id = 178U;
    msg.range = 0.604128380125;
    msg.acceptance = 102U;

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
    msg.setTimeStamp(0.561368043128);
    msg.setSource(48518U);
    msg.setSourceEntity(249U);
    msg.setDestination(27239U);
    msg.setDestinationEntity(236U);
    msg.id = 22U;
    msg.range = 0.749579291405;
    msg.acceptance = 223U;

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
    msg.setTimeStamp(0.540366515315);
    msg.setSource(34994U);
    msg.setSourceEntity(75U);
    msg.setDestination(8324U);
    msg.setDestinationEntity(36U);
    msg.type = 6U;
    msg.reason = 193U;
    msg.value = 0.813726465231;
    msg.timestep = 0.496533609965;

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
    msg.setTimeStamp(0.248066991506);
    msg.setSource(65226U);
    msg.setSourceEntity(180U);
    msg.setDestination(49338U);
    msg.setDestinationEntity(40U);
    msg.type = 128U;
    msg.reason = 223U;
    msg.value = 0.53833461557;
    msg.timestep = 0.271681703907;

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
    msg.setTimeStamp(0.181799865076);
    msg.setSource(48518U);
    msg.setSourceEntity(119U);
    msg.setDestination(46174U);
    msg.setDestinationEntity(139U);
    msg.type = 126U;
    msg.reason = 80U;
    msg.value = 0.765769308705;
    msg.timestep = 0.738457632932;

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
    msg.setTimeStamp(0.419620658112);
    msg.setSource(11837U);
    msg.setSourceEntity(60U);
    msg.setDestination(61156U);
    msg.setDestinationEntity(212U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GAKIBPXRCEZJFLIKVTIJZYCSDUWILTCCPFWGGUMZAEOOPWWVDBEVLANXWOBQSYUMJYVFZJUNGFANFQRMTLNDCZMNRUAXCHUPSQYSHTYRUJOWMCOBMHNRIYHWEKQPCGXBUBLAZMQOHTLISPLZQCMGJJVBNDUEGWBTYDTAVUR");
    tmp_msg_0.lat = 0.223974718187;
    tmp_msg_0.lon = 0.883559815757;
    tmp_msg_0.depth = 0.627218965597;
    tmp_msg_0.query_channel = 207U;
    tmp_msg_0.reply_channel = 101U;
    tmp_msg_0.transponder_delay = 94U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.178160708446;
    msg.y = 0.933055125731;
    msg.var_x = 0.308328296883;
    msg.var_y = 0.174380005865;
    msg.distance = 0.160304727157;

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
    msg.setTimeStamp(0.925634180937);
    msg.setSource(60303U);
    msg.setSourceEntity(103U);
    msg.setDestination(53289U);
    msg.setDestinationEntity(49U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NMOBYEKRZQUTSALTYIKMDJVXUPFCBEDLLCMVEDKPIENRSIUOHRAATGVZAQBHDJVTWHFYOIVSIQMCFXKSYHUQFRLNXBGZKDBXMXZQLKRWRNARMLNHNAFVWLXGMVHFOWVTGVUCJBKFETLGIJURQJNACPNJQDYCPCTFEJZBZCUEISSBPYEKPDPLXZZJSMFDESDPHYDMUR");
    tmp_msg_0.lat = 0.120587654878;
    tmp_msg_0.lon = 0.209338368675;
    tmp_msg_0.depth = 0.160643257443;
    tmp_msg_0.query_channel = 243U;
    tmp_msg_0.reply_channel = 150U;
    tmp_msg_0.transponder_delay = 150U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.152227854394;
    msg.y = 0.481243406925;
    msg.var_x = 0.241358549184;
    msg.var_y = 0.608298947756;
    msg.distance = 0.115691935705;

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
    msg.setTimeStamp(0.549766257256);
    msg.setSource(40809U);
    msg.setSourceEntity(169U);
    msg.setDestination(19849U);
    msg.setDestinationEntity(109U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WSDOHHOVOCBDEBSMBSBVURQWHKNVODBDPXQJIYQLTVPNSQATEYXLLEQHCKMDGTUIRDMZCXFMBIVSVACBMQYGFRQURBNAJUKVBWYHEWACYKONWZSELYCAETXTNQRFLURSIXWWLKGHPMCYIPKOHLMMYIRGPZVJIUSFSWEVPDXVXZHFUECPIDPUSRDEUJLMYEPXHGNNOFJQJUHKRTFPOGWKCXTOFBIOLKCT");
    tmp_msg_0.lat = 0.552399149433;
    tmp_msg_0.lon = 0.176498163199;
    tmp_msg_0.depth = 0.579213159475;
    tmp_msg_0.query_channel = 70U;
    tmp_msg_0.reply_channel = 216U;
    tmp_msg_0.transponder_delay = 107U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.304476818439;
    msg.y = 0.158084428979;
    msg.var_x = 0.610249844107;
    msg.var_y = 0.146505886993;
    msg.distance = 0.159878412437;

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
    msg.setTimeStamp(0.198907540814);
    msg.setSource(57725U);
    msg.setSourceEntity(195U);
    msg.setDestination(48860U);
    msg.setDestinationEntity(200U);
    msg.state = 254U;

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
    msg.setTimeStamp(0.241858060186);
    msg.setSource(64649U);
    msg.setSourceEntity(225U);
    msg.setDestination(46562U);
    msg.setDestinationEntity(72U);
    msg.state = 7U;

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
    msg.setTimeStamp(0.948758451799);
    msg.setSource(20142U);
    msg.setSourceEntity(31U);
    msg.setDestination(30237U);
    msg.setDestinationEntity(80U);
    msg.state = 20U;

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
    msg.setTimeStamp(0.653796174993);
    msg.setSource(45264U);
    msg.setSourceEntity(188U);
    msg.setDestination(32389U);
    msg.setDestinationEntity(76U);
    msg.x = 0.416802818819;
    msg.y = 0.350613231858;
    msg.z = 0.681215203345;

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
    msg.setTimeStamp(0.976600799263);
    msg.setSource(12063U);
    msg.setSourceEntity(70U);
    msg.setDestination(53568U);
    msg.setDestinationEntity(3U);
    msg.x = 0.0498599904402;
    msg.y = 0.606354443818;
    msg.z = 0.872988925799;

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
    msg.setTimeStamp(0.115157058285);
    msg.setSource(9103U);
    msg.setSourceEntity(139U);
    msg.setDestination(11694U);
    msg.setDestinationEntity(105U);
    msg.x = 0.872740325505;
    msg.y = 0.833952860764;
    msg.z = 0.648499319046;

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
    msg.setTimeStamp(0.870784953575);
    msg.setSource(25563U);
    msg.setSourceEntity(45U);
    msg.setDestination(37884U);
    msg.setDestinationEntity(39U);
    msg.va = 0.847399338902;
    msg.aoa = 0.748288905035;
    msg.ssa = 0.454997459611;

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
    msg.setTimeStamp(0.744298028878);
    msg.setSource(36856U);
    msg.setSourceEntity(177U);
    msg.setDestination(44810U);
    msg.setDestinationEntity(187U);
    msg.va = 0.426477774747;
    msg.aoa = 0.78545892096;
    msg.ssa = 0.770994761271;

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
    msg.setTimeStamp(0.461519003721);
    msg.setSource(3135U);
    msg.setSourceEntity(117U);
    msg.setDestination(27944U);
    msg.setDestinationEntity(175U);
    msg.va = 0.872576646347;
    msg.aoa = 0.536935797791;
    msg.ssa = 0.639601997939;

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
    msg.setTimeStamp(0.0833573202877);
    msg.setSource(24241U);
    msg.setSourceEntity(219U);
    msg.setDestination(12001U);
    msg.setDestinationEntity(186U);
    msg.value = 0.158196640291;

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
    msg.setTimeStamp(0.464738357018);
    msg.setSource(48096U);
    msg.setSourceEntity(83U);
    msg.setDestination(21498U);
    msg.setDestinationEntity(33U);
    msg.value = 0.798391603256;

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
    msg.setTimeStamp(0.188130392232);
    msg.setSource(49299U);
    msg.setSourceEntity(47U);
    msg.setDestination(16994U);
    msg.setDestinationEntity(177U);
    msg.value = 0.105530962653;

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
    msg.setTimeStamp(0.385700930048);
    msg.setSource(35938U);
    msg.setSourceEntity(254U);
    msg.setDestination(28722U);
    msg.setDestinationEntity(26U);
    msg.value = 0.803599452584;
    msg.z_units = 102U;

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
    msg.setTimeStamp(0.947614545538);
    msg.setSource(41926U);
    msg.setSourceEntity(39U);
    msg.setDestination(37327U);
    msg.setDestinationEntity(70U);
    msg.value = 0.694266017839;
    msg.z_units = 173U;

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
    msg.setTimeStamp(0.741511187594);
    msg.setSource(43195U);
    msg.setSourceEntity(166U);
    msg.setDestination(19256U);
    msg.setDestinationEntity(128U);
    msg.value = 0.641087897925;
    msg.z_units = 12U;

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
    msg.setTimeStamp(0.915991508434);
    msg.setSource(13292U);
    msg.setSourceEntity(235U);
    msg.setDestination(33715U);
    msg.setDestinationEntity(45U);
    msg.value = 0.448527711136;
    msg.speed_units = 38U;

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
    msg.setTimeStamp(0.703171186554);
    msg.setSource(1041U);
    msg.setSourceEntity(117U);
    msg.setDestination(34432U);
    msg.setDestinationEntity(172U);
    msg.value = 0.777595286697;
    msg.speed_units = 12U;

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
    msg.setTimeStamp(0.289496565487);
    msg.setSource(35405U);
    msg.setSourceEntity(198U);
    msg.setDestination(17767U);
    msg.setDestinationEntity(121U);
    msg.value = 0.0948187322078;
    msg.speed_units = 62U;

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
    msg.setTimeStamp(0.141959445384);
    msg.setSource(42940U);
    msg.setSourceEntity(142U);
    msg.setDestination(34230U);
    msg.setDestinationEntity(228U);
    msg.value = 0.200444868509;

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
    msg.setTimeStamp(0.736854214233);
    msg.setSource(19923U);
    msg.setSourceEntity(149U);
    msg.setDestination(63245U);
    msg.setDestinationEntity(34U);
    msg.value = 0.147320307963;

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
    msg.setTimeStamp(0.679758657321);
    msg.setSource(39730U);
    msg.setSourceEntity(56U);
    msg.setDestination(60017U);
    msg.setDestinationEntity(187U);
    msg.value = 0.14256740375;

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
    msg.setTimeStamp(0.934415561472);
    msg.setSource(51266U);
    msg.setSourceEntity(157U);
    msg.setDestination(6756U);
    msg.setDestinationEntity(36U);
    msg.value = 0.528682881608;

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
    msg.setTimeStamp(0.699988139);
    msg.setSource(26188U);
    msg.setSourceEntity(132U);
    msg.setDestination(42015U);
    msg.setDestinationEntity(20U);
    msg.value = 0.263067453578;

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
    msg.setTimeStamp(0.30319151298);
    msg.setSource(34994U);
    msg.setSourceEntity(110U);
    msg.setDestination(18516U);
    msg.setDestinationEntity(132U);
    msg.value = 0.635791561483;

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
    msg.setTimeStamp(0.344012560393);
    msg.setSource(47622U);
    msg.setSourceEntity(199U);
    msg.setDestination(58365U);
    msg.setDestinationEntity(9U);
    msg.value = 0.230049827031;

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
    msg.setTimeStamp(0.00490395528872);
    msg.setSource(43047U);
    msg.setSourceEntity(176U);
    msg.setDestination(8392U);
    msg.setDestinationEntity(37U);
    msg.value = 0.531043094827;

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
    msg.setTimeStamp(0.627587095782);
    msg.setSource(45829U);
    msg.setSourceEntity(113U);
    msg.setDestination(43547U);
    msg.setDestinationEntity(18U);
    msg.value = 0.838531843506;

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
    msg.setTimeStamp(0.335986959082);
    msg.setSource(54651U);
    msg.setSourceEntity(147U);
    msg.setDestination(23472U);
    msg.setDestinationEntity(95U);
    msg.path_ref = 1877219309U;
    msg.start_lat = 0.25103587056;
    msg.start_lon = 0.143639219632;
    msg.start_z = 0.491101949508;
    msg.start_z_units = 161U;
    msg.end_lat = 0.592389985117;
    msg.end_lon = 0.189324131032;
    msg.end_z = 0.422958758309;
    msg.end_z_units = 236U;
    msg.speed = 0.948582130195;
    msg.speed_units = 224U;
    msg.lradius = 0.908478359357;
    msg.flags = 8U;

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
    msg.setTimeStamp(0.67031595823);
    msg.setSource(4708U);
    msg.setSourceEntity(237U);
    msg.setDestination(1207U);
    msg.setDestinationEntity(78U);
    msg.path_ref = 2713290350U;
    msg.start_lat = 0.491369934568;
    msg.start_lon = 0.572419397556;
    msg.start_z = 0.882186289277;
    msg.start_z_units = 47U;
    msg.end_lat = 0.279647185054;
    msg.end_lon = 0.409300190707;
    msg.end_z = 0.698459296115;
    msg.end_z_units = 74U;
    msg.speed = 0.888186577543;
    msg.speed_units = 144U;
    msg.lradius = 0.948038733894;
    msg.flags = 146U;

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
    msg.setTimeStamp(0.480440316498);
    msg.setSource(10082U);
    msg.setSourceEntity(32U);
    msg.setDestination(55397U);
    msg.setDestinationEntity(147U);
    msg.path_ref = 2547059179U;
    msg.start_lat = 0.0689293152285;
    msg.start_lon = 0.281966189797;
    msg.start_z = 0.261540322148;
    msg.start_z_units = 169U;
    msg.end_lat = 0.929668043334;
    msg.end_lon = 0.184986779597;
    msg.end_z = 0.580900063465;
    msg.end_z_units = 177U;
    msg.speed = 0.345299195613;
    msg.speed_units = 89U;
    msg.lradius = 0.643800964524;
    msg.flags = 21U;

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
    msg.setTimeStamp(0.79632970734);
    msg.setSource(13001U);
    msg.setSourceEntity(96U);
    msg.setDestination(52581U);
    msg.setDestinationEntity(114U);
    msg.x = 0.59972027235;
    msg.y = 0.763797011655;
    msg.z = 0.26486101916;
    msg.k = 0.489066287293;
    msg.m = 0.930187216043;
    msg.n = 0.977830728668;
    msg.flags = 164U;

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
    msg.setTimeStamp(0.261503745197);
    msg.setSource(25878U);
    msg.setSourceEntity(1U);
    msg.setDestination(12462U);
    msg.setDestinationEntity(89U);
    msg.x = 0.0459886630885;
    msg.y = 0.61073046846;
    msg.z = 0.481005038224;
    msg.k = 0.276024804936;
    msg.m = 0.189457828878;
    msg.n = 0.0330044397108;
    msg.flags = 25U;

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
    msg.setTimeStamp(0.992077017472);
    msg.setSource(63719U);
    msg.setSourceEntity(116U);
    msg.setDestination(29102U);
    msg.setDestinationEntity(111U);
    msg.x = 0.119130609133;
    msg.y = 0.610602629982;
    msg.z = 0.0766344784473;
    msg.k = 0.73686982692;
    msg.m = 0.64165767956;
    msg.n = 0.979663594378;
    msg.flags = 143U;

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
    msg.setTimeStamp(0.419213570296);
    msg.setSource(14095U);
    msg.setSourceEntity(206U);
    msg.setDestination(48834U);
    msg.setDestinationEntity(216U);
    msg.value = 0.680219338406;

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
    msg.setTimeStamp(0.883681330621);
    msg.setSource(43586U);
    msg.setSourceEntity(127U);
    msg.setDestination(38833U);
    msg.setDestinationEntity(35U);
    msg.value = 0.405996268999;

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
    msg.setTimeStamp(0.87162272858);
    msg.setSource(35709U);
    msg.setSourceEntity(201U);
    msg.setDestination(6634U);
    msg.setDestinationEntity(138U);
    msg.value = 0.892624333631;

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
    msg.setTimeStamp(0.934523849776);
    msg.setSource(39031U);
    msg.setSourceEntity(10U);
    msg.setDestination(20975U);
    msg.setDestinationEntity(167U);
    msg.u = 0.189336261102;
    msg.v = 0.369702056691;
    msg.w = 0.710473959132;
    msg.p = 0.511486627942;
    msg.q = 0.396770139404;
    msg.r = 0.693456789865;
    msg.flags = 168U;

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
    msg.setTimeStamp(0.45962457308);
    msg.setSource(62735U);
    msg.setSourceEntity(75U);
    msg.setDestination(22575U);
    msg.setDestinationEntity(188U);
    msg.u = 0.174222682715;
    msg.v = 0.942593773293;
    msg.w = 0.346808672566;
    msg.p = 0.543040314735;
    msg.q = 0.964318002143;
    msg.r = 0.782351784057;
    msg.flags = 110U;

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
    msg.setTimeStamp(0.879762287532);
    msg.setSource(4150U);
    msg.setSourceEntity(197U);
    msg.setDestination(37922U);
    msg.setDestinationEntity(100U);
    msg.u = 0.511958467785;
    msg.v = 0.695285573938;
    msg.w = 0.7901449008;
    msg.p = 0.908759070185;
    msg.q = 0.955239610852;
    msg.r = 0.324375445144;
    msg.flags = 101U;

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
    msg.setTimeStamp(0.735674684644);
    msg.setSource(40442U);
    msg.setSourceEntity(164U);
    msg.setDestination(4927U);
    msg.setDestinationEntity(102U);
    msg.path_ref = 1596018285U;
    msg.start_lat = 0.33627881755;
    msg.start_lon = 0.982443910811;
    msg.start_z = 0.754480579115;
    msg.start_z_units = 119U;
    msg.end_lat = 0.732602150622;
    msg.end_lon = 0.0740880336693;
    msg.end_z = 0.804909939937;
    msg.end_z_units = 192U;
    msg.lradius = 0.408049389989;
    msg.flags = 144U;
    msg.x = 0.770827055137;
    msg.y = 0.995258748212;
    msg.z = 0.765254372829;
    msg.vx = 0.668007634094;
    msg.vy = 0.183824635161;
    msg.vz = 0.285992744705;
    msg.course_error = 0.7939169628;
    msg.eta = 6993U;

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
    msg.setTimeStamp(0.170802749876);
    msg.setSource(2801U);
    msg.setSourceEntity(192U);
    msg.setDestination(9698U);
    msg.setDestinationEntity(245U);
    msg.path_ref = 139041312U;
    msg.start_lat = 0.943003099712;
    msg.start_lon = 0.379401791179;
    msg.start_z = 0.376405069302;
    msg.start_z_units = 34U;
    msg.end_lat = 0.854689489545;
    msg.end_lon = 0.899625935126;
    msg.end_z = 0.959648027656;
    msg.end_z_units = 221U;
    msg.lradius = 0.167495195452;
    msg.flags = 223U;
    msg.x = 0.619252094696;
    msg.y = 0.379520024665;
    msg.z = 0.378249720486;
    msg.vx = 0.64048094632;
    msg.vy = 0.305080396748;
    msg.vz = 0.796473309253;
    msg.course_error = 0.516384737438;
    msg.eta = 27298U;

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
    msg.setTimeStamp(0.114576030604);
    msg.setSource(54306U);
    msg.setSourceEntity(121U);
    msg.setDestination(48952U);
    msg.setDestinationEntity(43U);
    msg.path_ref = 464629944U;
    msg.start_lat = 0.276198239055;
    msg.start_lon = 0.0791562186092;
    msg.start_z = 0.384320855473;
    msg.start_z_units = 218U;
    msg.end_lat = 0.969275906016;
    msg.end_lon = 0.446265807707;
    msg.end_z = 0.991195830138;
    msg.end_z_units = 135U;
    msg.lradius = 0.83643806096;
    msg.flags = 24U;
    msg.x = 0.286153537203;
    msg.y = 0.759516717259;
    msg.z = 0.961672460197;
    msg.vx = 0.0879357846378;
    msg.vy = 0.564015996837;
    msg.vz = 0.353053800355;
    msg.course_error = 0.876278016327;
    msg.eta = 10434U;

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
    msg.setTimeStamp(0.252820373773);
    msg.setSource(42840U);
    msg.setSourceEntity(238U);
    msg.setDestination(39097U);
    msg.setDestinationEntity(147U);
    msg.k = 0.414280490388;
    msg.m = 0.228191646334;
    msg.n = 0.0617230868817;

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
    msg.setTimeStamp(0.98169811682);
    msg.setSource(14910U);
    msg.setSourceEntity(149U);
    msg.setDestination(51775U);
    msg.setDestinationEntity(36U);
    msg.k = 0.119591461238;
    msg.m = 0.486330976428;
    msg.n = 0.740064875102;

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
    msg.setTimeStamp(0.696149183868);
    msg.setSource(51565U);
    msg.setSourceEntity(217U);
    msg.setDestination(33661U);
    msg.setDestinationEntity(140U);
    msg.k = 0.237446460006;
    msg.m = 0.356781592849;
    msg.n = 0.622117614483;

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
    msg.setTimeStamp(0.578405148646);
    msg.setSource(39208U);
    msg.setSourceEntity(28U);
    msg.setDestination(49624U);
    msg.setDestinationEntity(208U);
    msg.p = 0.367538814037;
    msg.i = 0.124142439807;
    msg.d = 0.598124328001;
    msg.a = 0.892964812884;

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
    msg.setTimeStamp(0.0803419301039);
    msg.setSource(58224U);
    msg.setSourceEntity(85U);
    msg.setDestination(54966U);
    msg.setDestinationEntity(99U);
    msg.p = 0.876926905335;
    msg.i = 0.187969921045;
    msg.d = 0.820864837739;
    msg.a = 0.959599181548;

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
    msg.setTimeStamp(0.448565699321);
    msg.setSource(50392U);
    msg.setSourceEntity(213U);
    msg.setDestination(31184U);
    msg.setDestinationEntity(208U);
    msg.p = 0.0947442300187;
    msg.i = 0.0565538583234;
    msg.d = 0.0301485080281;
    msg.a = 0.974713043097;

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
    msg.setTimeStamp(0.464082197612);
    msg.setSource(61024U);
    msg.setSourceEntity(231U);
    msg.setDestination(12304U);
    msg.setDestinationEntity(99U);
    msg.op = 30U;

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
    msg.setTimeStamp(0.280909783259);
    msg.setSource(31998U);
    msg.setSourceEntity(244U);
    msg.setDestination(58997U);
    msg.setDestinationEntity(84U);
    msg.op = 111U;

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
    msg.setTimeStamp(0.550884468681);
    msg.setSource(49365U);
    msg.setSourceEntity(221U);
    msg.setDestination(18311U);
    msg.setDestinationEntity(72U);
    msg.op = 210U;

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
    msg.setTimeStamp(0.603704096166);
    msg.setSource(14901U);
    msg.setSourceEntity(193U);
    msg.setDestination(9940U);
    msg.setDestinationEntity(127U);
    msg.x = 0.393891678643;
    msg.y = 0.852122906469;
    msg.z = 0.701285533566;
    msg.vx = 0.107048054806;
    msg.vy = 0.218850829889;
    msg.vz = 0.278156547614;
    msg.ax = 0.612701840798;
    msg.ay = 0.207674773325;
    msg.az = 0.103831451828;
    msg.flags = 53739U;

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
    msg.setTimeStamp(0.447809592902);
    msg.setSource(32384U);
    msg.setSourceEntity(50U);
    msg.setDestination(43946U);
    msg.setDestinationEntity(83U);
    msg.x = 0.926865987754;
    msg.y = 0.571215828697;
    msg.z = 0.286291246754;
    msg.vx = 0.844837090097;
    msg.vy = 0.796865475509;
    msg.vz = 0.749129078938;
    msg.ax = 0.13673919391;
    msg.ay = 0.33469908549;
    msg.az = 0.0995035550862;
    msg.flags = 10031U;

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
    msg.setTimeStamp(0.66044670682);
    msg.setSource(52463U);
    msg.setSourceEntity(126U);
    msg.setDestination(35069U);
    msg.setDestinationEntity(107U);
    msg.x = 0.276725866954;
    msg.y = 0.688062561936;
    msg.z = 0.936926802323;
    msg.vx = 0.610425926559;
    msg.vy = 0.288548863017;
    msg.vz = 0.403724840746;
    msg.ax = 0.712297422303;
    msg.ay = 0.457778359428;
    msg.az = 0.287452936812;
    msg.flags = 44288U;

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
    msg.setTimeStamp(0.0854668399045);
    msg.setSource(47575U);
    msg.setSourceEntity(230U);
    msg.setDestination(57355U);
    msg.setDestinationEntity(251U);
    msg.value = 0.780692933663;

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
    msg.setTimeStamp(0.580003571763);
    msg.setSource(9353U);
    msg.setSourceEntity(45U);
    msg.setDestination(18189U);
    msg.setDestinationEntity(130U);
    msg.value = 0.732577083173;

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
    msg.setTimeStamp(0.570763346925);
    msg.setSource(41746U);
    msg.setSourceEntity(115U);
    msg.setDestination(11998U);
    msg.setDestinationEntity(88U);
    msg.value = 0.863775051885;

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
    msg.setTimeStamp(0.704237559446);
    msg.setSource(42717U);
    msg.setSourceEntity(208U);
    msg.setDestination(59351U);
    msg.setDestinationEntity(134U);
    msg.timeout = 19477U;
    msg.lat = 0.00611309403714;
    msg.lon = 0.9448238063;
    msg.z = 0.0682454933902;
    msg.z_units = 106U;
    msg.speed = 0.57737502018;
    msg.speed_units = 119U;
    msg.roll = 0.0832915218595;
    msg.pitch = 0.198479387788;
    msg.yaw = 0.481667588369;
    msg.custom.assign("GCNYWTPKHLMCAPESIIKCRIISYZTFHVARGKKVCPSDXVFDTXIDEUBJNJMQCANNSTBRXYWOGXBRLOOZRNEZXHUKEOWCNLHMDLYFIJFJUAAWWDYPYGUKNPQBBNEOBDGQHOEUDQZAWHMRMVBHELWLFFPEQVFZKHSHIIJYAPITCSZMKVKJUGMVUCJLXSEGFWHDIQZSOPPYUMYTBYEJGJFNLVBTXVLSRQ");

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
    msg.setTimeStamp(0.985555437255);
    msg.setSource(26873U);
    msg.setSourceEntity(44U);
    msg.setDestination(5296U);
    msg.setDestinationEntity(164U);
    msg.timeout = 30807U;
    msg.lat = 0.697429274876;
    msg.lon = 0.726195231559;
    msg.z = 0.494332987589;
    msg.z_units = 196U;
    msg.speed = 0.491484327813;
    msg.speed_units = 22U;
    msg.roll = 0.891898566707;
    msg.pitch = 0.843827364846;
    msg.yaw = 0.263690056311;
    msg.custom.assign("TWLGTJRTNSYVBVCMUJLBH");

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
    msg.setTimeStamp(0.318093165374);
    msg.setSource(50082U);
    msg.setSourceEntity(49U);
    msg.setDestination(47256U);
    msg.setDestinationEntity(141U);
    msg.timeout = 14135U;
    msg.lat = 0.207023889339;
    msg.lon = 0.959928882199;
    msg.z = 0.67693530002;
    msg.z_units = 69U;
    msg.speed = 0.941166994546;
    msg.speed_units = 2U;
    msg.roll = 0.242054286866;
    msg.pitch = 0.295767376794;
    msg.yaw = 0.0852683639101;
    msg.custom.assign("LCUIPVNDUZEJMCLFEVTXHAJYJKLHZBSQJYMNRCVZESDZDJYRRY");

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
    msg.setTimeStamp(0.559044998123);
    msg.setSource(27321U);
    msg.setSourceEntity(36U);
    msg.setDestination(42650U);
    msg.setDestinationEntity(64U);
    msg.timeout = 11560U;
    msg.lat = 0.95658082833;
    msg.lon = 0.906180416227;
    msg.z = 0.196848776088;
    msg.z_units = 86U;
    msg.speed = 0.0659242879948;
    msg.speed_units = 47U;
    msg.duration = 5133U;
    msg.radius = 0.964344225613;
    msg.flags = 34U;
    msg.custom.assign("LKHFTKAAKDKLZ");

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
    msg.setTimeStamp(0.499806070269);
    msg.setSource(14936U);
    msg.setSourceEntity(232U);
    msg.setDestination(26456U);
    msg.setDestinationEntity(64U);
    msg.timeout = 43234U;
    msg.lat = 0.96466057044;
    msg.lon = 0.502411121448;
    msg.z = 0.810439436889;
    msg.z_units = 47U;
    msg.speed = 0.88307526284;
    msg.speed_units = 236U;
    msg.duration = 34830U;
    msg.radius = 0.00537522132075;
    msg.flags = 192U;
    msg.custom.assign("GQJLWWOHMGYCROPCZWNUGXJLUDARGBLYSODVAKRDAKTJDFVMEYOZWCREXXDSVXBXTJLQQDKGDZGPOUZZVMISFIVUPKSAEGYELNWXKKARVMCUWACBNBZKIMCVIGFHE");

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
    msg.setTimeStamp(0.0950343915009);
    msg.setSource(9778U);
    msg.setSourceEntity(61U);
    msg.setDestination(52788U);
    msg.setDestinationEntity(147U);
    msg.timeout = 16394U;
    msg.lat = 0.347433309628;
    msg.lon = 0.479227563629;
    msg.z = 0.724487553305;
    msg.z_units = 121U;
    msg.speed = 0.703120943905;
    msg.speed_units = 117U;
    msg.duration = 33500U;
    msg.radius = 0.808379949934;
    msg.flags = 186U;
    msg.custom.assign("PVCBKXSFDYJDKMUOQPXTRIRWZIGMUHAJZFPEUBTZJLOMATSCDILDHHBVPHVPQDDJIFRKWFAROODEOQMIVKFCVJUEAYLSEQOPQMHLMFFYTMHRXAZAJRHJBCNQGZCFPSAGBIZJWSOEBLSIKYRMDNVZSOYXPARYBBZWGOKGHEEFZ");

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
    msg.setTimeStamp(0.408681980401);
    msg.setSource(14133U);
    msg.setSourceEntity(234U);
    msg.setDestination(20328U);
    msg.setDestinationEntity(192U);
    msg.custom.assign("MLKPKQNQJEZTHVQLNEWRYKZQRGWP");

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
    msg.setTimeStamp(0.519572776742);
    msg.setSource(59435U);
    msg.setSourceEntity(1U);
    msg.setDestination(166U);
    msg.setDestinationEntity(76U);
    msg.custom.assign("RKQPMPYEBDVJRRMPQWBGSAIALRZVCFBCLACVHLOMSUNFUIAFXZIJGMRSNFSVGXZYRJOFSEMGCTAGTXZOCAQMBREHFUQDVLXTPUIANYNXKHYTQZTNJOCNYBMQVSGBPUZIJWJYXSUOJIEJBODZWXQTINTRWBTPODCEFNSPKHVDAWRY");

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
    msg.setTimeStamp(0.567201905531);
    msg.setSource(62589U);
    msg.setSourceEntity(127U);
    msg.setDestination(64104U);
    msg.setDestinationEntity(16U);
    msg.custom.assign("FMBLDRJCCQFHKZIFTDXHHVIAOMBYUOSWGYOVQWZLCKNTZIMAPTSLQDOITPNWLQKJKESPPPLBUVQJIDFWCAFUSZKTVDSNBKORGUEBWTWJYVUKVYHAXNEMQHRTHCEBSIMFMNADYWTOOXBWFUPJGAQYLVCJSENVDBXOUSILPFXFGEGKIHFQRZIIHREYV");

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
    msg.setTimeStamp(0.390500666589);
    msg.setSource(58508U);
    msg.setSourceEntity(95U);
    msg.setDestination(41121U);
    msg.setDestinationEntity(64U);
    msg.timeout = 10446U;
    msg.lat = 0.648296605943;
    msg.lon = 0.78797349607;
    msg.z = 0.548990086901;
    msg.z_units = 237U;
    msg.duration = 7750U;
    msg.speed = 0.392932634437;
    msg.speed_units = 90U;
    msg.type = 76U;
    msg.radius = 0.422293116617;
    msg.length = 0.152269571977;
    msg.bearing = 0.555564477964;
    msg.direction = 77U;
    msg.custom.assign("HDHECDMOLEMCUEWSX");

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
    msg.setTimeStamp(0.981237610888);
    msg.setSource(4143U);
    msg.setSourceEntity(81U);
    msg.setDestination(17297U);
    msg.setDestinationEntity(234U);
    msg.timeout = 22820U;
    msg.lat = 0.484541383282;
    msg.lon = 0.287814213338;
    msg.z = 0.175399143147;
    msg.z_units = 44U;
    msg.duration = 25674U;
    msg.speed = 0.497880979713;
    msg.speed_units = 212U;
    msg.type = 166U;
    msg.radius = 0.000299509785898;
    msg.length = 0.0407924903156;
    msg.bearing = 0.489057375199;
    msg.direction = 108U;
    msg.custom.assign("EHYMLFYGERLRMVNCQRATTFSUUNWGIIRLMTKMWGRCQHSPOXMBWXCEORRBSNDXTACGDWFEQZPELVBLGIJKJBHCSKVUILDHATKHJEJEZUIZSZAHTJPVDBZNZIOVSIBGOWSTTCEXHYPBFODQOANQFXCZQLNDKYJMFYRAZJKNSBXKTHUPJKZVGWCNMYZEHUNBPMYFDLRQWUAYGYKSAQHCOUJBXNOAGWPVSPLPAXFCRVM");

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
    msg.setTimeStamp(0.467474225106);
    msg.setSource(60094U);
    msg.setSourceEntity(191U);
    msg.setDestination(42893U);
    msg.setDestinationEntity(32U);
    msg.timeout = 41916U;
    msg.lat = 0.570958990666;
    msg.lon = 0.484423874585;
    msg.z = 0.489318349572;
    msg.z_units = 72U;
    msg.duration = 12933U;
    msg.speed = 0.995146357723;
    msg.speed_units = 63U;
    msg.type = 130U;
    msg.radius = 0.653034494465;
    msg.length = 0.522163146099;
    msg.bearing = 0.63257262666;
    msg.direction = 122U;
    msg.custom.assign("WKMWXLZIVMCWNPHXYI");

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
    msg.setTimeStamp(0.742690515635);
    msg.setSource(29805U);
    msg.setSourceEntity(188U);
    msg.setDestination(14210U);
    msg.setDestinationEntity(175U);
    msg.duration = 53236U;
    msg.custom.assign("RZEJQYZNAJWVGLORMWKPCFPYMMZNXORLORXBKOBABFGDAYPHAUBPFMVMSQCJBJOAOEIYFMKZFLVPHGHNTNMTWLSSUHMYHVMYVZSXVXDLIIAUNHWDKAFDSGBJZSIFBWUDATYQRJEGCZWDNIYPVMSTYJTCNIEDKUIRENKCIQGNSPPUHCLLDCTDIQOUOTHGZJBRDZBAOLPRKFTGGZEKVVWWTLFWCJERXFQBSQERXTNXQJI");

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
    msg.setTimeStamp(0.742118840103);
    msg.setSource(43903U);
    msg.setSourceEntity(71U);
    msg.setDestination(30911U);
    msg.setDestinationEntity(127U);
    msg.duration = 37060U;
    msg.custom.assign("NZXEBUVMYFWHYREJNAPHWLKCHJGONCXWJADYHQTWXRDHIPVPSNGIYTUNARYVSECEXEBBGAHPPNWBVNEBSMZOKMWIKPRJOTU");

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
    msg.setTimeStamp(0.207326988639);
    msg.setSource(47026U);
    msg.setSourceEntity(112U);
    msg.setDestination(59175U);
    msg.setDestinationEntity(230U);
    msg.duration = 62920U;
    msg.custom.assign("MHJGWXOPTLAXAHTDQUVXNGKXLVKWEDEUUOGNXAWISBRBRHELXZUHRFHKJLTSSYQFHMDCGHUJDOMUJYENV");

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
    msg.setTimeStamp(0.0953388927381);
    msg.setSource(6436U);
    msg.setSourceEntity(51U);
    msg.setDestination(17738U);
    msg.setDestinationEntity(117U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.148392317847;
    msg.control.set(tmp_msg_0);
    msg.duration = 26160U;
    msg.custom.assign("CKTLHXMGDVFMYRCPPFHBYHOWGSERDHUBRSRTGKQXSXBIFPIUJICFKOXYMNOFDQSLSACFRMAURBLKTPMUZQXPZIREUOVNDVSVZJMPGEAXFETESUYUFBJINJUPJNVIV");

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
    msg.setTimeStamp(0.328544307456);
    msg.setSource(56406U);
    msg.setSourceEntity(78U);
    msg.setDestination(29021U);
    msg.setDestinationEntity(205U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.0267801354454;
    msg.control.set(tmp_msg_0);
    msg.duration = 31128U;
    msg.custom.assign("FGHGYGCCVSITIZQEIXMILLKPUQUHICVZSLDWYGHSXBQHRXONKQJUUPSDOJTJJSXUCTGJWPZUNMZXHUWAGRJTBWCRYDRRPJGMT");

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
    msg.setTimeStamp(0.129605596851);
    msg.setSource(53U);
    msg.setSourceEntity(82U);
    msg.setDestination(55733U);
    msg.setDestinationEntity(75U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 161059989U;
    tmp_msg_0.start_lat = 0.749198119669;
    tmp_msg_0.start_lon = 0.878918071191;
    tmp_msg_0.start_z = 0.955918902758;
    tmp_msg_0.start_z_units = 244U;
    tmp_msg_0.end_lat = 0.293056930521;
    tmp_msg_0.end_lon = 0.254663359947;
    tmp_msg_0.end_z = 0.761692982417;
    tmp_msg_0.end_z_units = 123U;
    tmp_msg_0.speed = 0.595371296617;
    tmp_msg_0.speed_units = 240U;
    tmp_msg_0.lradius = 0.366974677778;
    tmp_msg_0.flags = 83U;
    msg.control.set(tmp_msg_0);
    msg.duration = 4449U;
    msg.custom.assign("VRUHWWHRZDECFJKCAUXRVAUMXUEAHWOYSQSMGYJTOIQPTRIRWNNQLFLEEYPKAVNOYIAOQOTGQBYHRUCOTVBKWNGFQYNPILQJMQGTFHZKDKEBIOMOMDDTCBFBTHDQKURPCFMQACOWMSPGIUGXEKZCHJKBUZNZVWVYOLJZEHSDSBXYXALPHTFIIJXWLMHMUXXA");

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
    msg.setTimeStamp(0.757891185823);
    msg.setSource(58402U);
    msg.setSourceEntity(102U);
    msg.setDestination(47676U);
    msg.setDestinationEntity(224U);
    msg.timeout = 17016U;
    msg.lat = 0.356599658711;
    msg.lon = 0.196230433301;
    msg.z = 0.823460943757;
    msg.z_units = 45U;
    msg.speed = 0.702446809246;
    msg.speed_units = 5U;
    msg.bearing = 0.448760678326;
    msg.cross_angle = 0.866622985487;
    msg.width = 0.716807519742;
    msg.length = 0.717531084404;
    msg.hstep = 0.362006893904;
    msg.coff = 150U;
    msg.alternation = 224U;
    msg.flags = 0U;
    msg.custom.assign("ATGINNRHOMVJJWIEZBWKBMSTPRWRZTQYEGRBSSYAKLFXAGSWOCUUXMASJUBGJOJGFJZTTHDFVCYIEZSAEXKEDRJCMNRIQHNCGAWGHUXNTJNQHEGMFHBLKRKDSPOLFYKATLVBS");

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
    msg.setTimeStamp(0.952028124601);
    msg.setSource(5489U);
    msg.setSourceEntity(124U);
    msg.setDestination(4055U);
    msg.setDestinationEntity(223U);
    msg.timeout = 16594U;
    msg.lat = 0.177069708594;
    msg.lon = 0.221584183502;
    msg.z = 0.319239522161;
    msg.z_units = 61U;
    msg.speed = 0.326360337066;
    msg.speed_units = 106U;
    msg.bearing = 0.75049784787;
    msg.cross_angle = 0.390296746323;
    msg.width = 0.0296085103706;
    msg.length = 0.883374350666;
    msg.hstep = 0.942432421025;
    msg.coff = 212U;
    msg.alternation = 230U;
    msg.flags = 21U;
    msg.custom.assign("WXBKZAMOGSZAYYGQDRVEQTTBGMAUVVBHQOVDZLVSWHTDEBCAKSCPSPZBSZIEEEWGHHCKJDFRPQCOIKHRXKIXNJRPOBOAFARRCCQGJMEBZWOQQTXVDYHPFDCQUBSMVMWPETETPEVFJVBMIBLXNNIZKNYP");

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
    msg.setTimeStamp(0.972678635185);
    msg.setSource(61618U);
    msg.setSourceEntity(251U);
    msg.setDestination(9630U);
    msg.setDestinationEntity(93U);
    msg.timeout = 8461U;
    msg.lat = 0.946875602871;
    msg.lon = 0.266382923552;
    msg.z = 0.543001515716;
    msg.z_units = 2U;
    msg.speed = 0.56715499593;
    msg.speed_units = 148U;
    msg.bearing = 0.0613984014966;
    msg.cross_angle = 0.602971677868;
    msg.width = 0.145758785663;
    msg.length = 0.479778208395;
    msg.hstep = 0.6581724126;
    msg.coff = 170U;
    msg.alternation = 253U;
    msg.flags = 186U;
    msg.custom.assign("VWVULCRNUSMNBPXMRENQFQZMUSJINOMDMYZJKBTAJWEJGFQXQKAIIZMJSDVHUUZIGSLSENVQJFODRWDASWWKKEQXPBGPHCGEZSLDCAOJXHFOCTZKEGYOCODKQWDGNNTWHPJJDNLIPRPNHZPEATSLYHVSKRI");

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
    msg.setTimeStamp(0.12080394797);
    msg.setSource(4281U);
    msg.setSourceEntity(243U);
    msg.setDestination(54590U);
    msg.setDestinationEntity(131U);
    msg.timeout = 33652U;
    msg.lat = 0.204398573423;
    msg.lon = 0.535087999528;
    msg.z = 0.840473108128;
    msg.z_units = 154U;
    msg.speed = 0.881841932423;
    msg.speed_units = 83U;
    msg.custom.assign("TIZAKNSXFDMUIULEOXLFASETNUHJZNFDLEVMLBNGFOWWHIPCFJBYPDOKSLOWRLMGKHGDQFVSZLAVYCXQDYUKRBIGWBTPTMZXQXNMQSNWBVCPTKCCLKNZAFBJIHIMOBDIIMRMRXHYAGBQGACYTSEJHHHJEJCMPEZQFDKOTXCBEUTWRCAAHYJVGIZNCEVDIBUQLYWRQDHYWQWKUSQPRJKOUOEVANTEZMFRZFGPSRZXXPG");

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
    msg.setTimeStamp(0.015846784699);
    msg.setSource(52610U);
    msg.setSourceEntity(0U);
    msg.setDestination(37351U);
    msg.setDestinationEntity(119U);
    msg.timeout = 51305U;
    msg.lat = 0.710328684493;
    msg.lon = 0.32792687218;
    msg.z = 0.270218675127;
    msg.z_units = 58U;
    msg.speed = 0.644671093313;
    msg.speed_units = 197U;
    msg.custom.assign("DUEPTCCEFDUGGLFSPXSQYVLMWTJZTTLGKOOTRQXDOJZBEJAVLQZKPYKHSEUMPIVKALNCSSKPLRJBNYDVQXWBHNCBALCIJHTFFFWIZHHTO");

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
    msg.setTimeStamp(0.876655424176);
    msg.setSource(2383U);
    msg.setSourceEntity(194U);
    msg.setDestination(2994U);
    msg.setDestinationEntity(226U);
    msg.timeout = 35608U;
    msg.lat = 0.556608453146;
    msg.lon = 0.266089427331;
    msg.z = 0.0770589843851;
    msg.z_units = 89U;
    msg.speed = 0.615444177621;
    msg.speed_units = 167U;
    msg.custom.assign("QTVXPXNPJDBBEDGONWTQZCINOZQTNSKNHHFPIVALPCTWLSNHVFWDKIRPRFJQNUDHGJZQIWGMUKCXSHBUFACKIMKZWBOYSLRPFXVGZFAGAGGUDXVBOEXOJWJEYTUSLDNCHRAURTGSYEFGUQRVQJSQLFIPHOYBCOLNMJIVBMKRVHALYETKCIOPEXR");

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
    msg.setTimeStamp(0.830760884263);
    msg.setSource(37368U);
    msg.setSourceEntity(120U);
    msg.setDestination(433U);
    msg.setDestinationEntity(33U);
    msg.x = 0.519795999382;
    msg.y = 0.860928370489;
    msg.z = 0.64879111535;

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
    msg.setTimeStamp(0.819810607125);
    msg.setSource(58952U);
    msg.setSourceEntity(141U);
    msg.setDestination(12261U);
    msg.setDestinationEntity(63U);
    msg.x = 0.785602174137;
    msg.y = 0.494398468377;
    msg.z = 0.163256432127;

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
    msg.setTimeStamp(0.0484314598253);
    msg.setSource(11641U);
    msg.setSourceEntity(86U);
    msg.setDestination(57129U);
    msg.setDestinationEntity(179U);
    msg.x = 0.46091563597;
    msg.y = 0.95876830207;
    msg.z = 0.180242097348;

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
    msg.setTimeStamp(0.859098245048);
    msg.setSource(59096U);
    msg.setSourceEntity(69U);
    msg.setDestination(24761U);
    msg.setDestinationEntity(232U);
    msg.timeout = 14703U;
    msg.lat = 0.468270642808;
    msg.lon = 0.664972393731;
    msg.z = 0.730466662895;
    msg.z_units = 3U;
    msg.amplitude = 0.360528733657;
    msg.pitch = 0.962663997975;
    msg.speed = 0.527404165226;
    msg.speed_units = 92U;
    msg.custom.assign("ZVJBEBXRWMPRC");

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
    msg.setTimeStamp(0.445974384256);
    msg.setSource(24901U);
    msg.setSourceEntity(187U);
    msg.setDestination(36621U);
    msg.setDestinationEntity(136U);
    msg.timeout = 11149U;
    msg.lat = 0.000675094660277;
    msg.lon = 0.00813407330918;
    msg.z = 0.771084458658;
    msg.z_units = 103U;
    msg.amplitude = 0.49400128771;
    msg.pitch = 0.571668329181;
    msg.speed = 0.944857087327;
    msg.speed_units = 36U;
    msg.custom.assign("LLJMXSJAPSDATNQOKNNHCFSFVCPTLVMLZOEZYVDCOBBJKWJGBIACVQFBNGIQGEOKFGUPLPYXDUDTFZSMHOVFSJJRKWEKBFVQESGIXCHBZATMAAMZNIVMDCDWDDNUJZANGVURTTEWPUOHMOENAM");

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
    msg.setTimeStamp(0.591396310168);
    msg.setSource(6291U);
    msg.setSourceEntity(236U);
    msg.setDestination(35986U);
    msg.setDestinationEntity(240U);
    msg.timeout = 33594U;
    msg.lat = 0.513162408235;
    msg.lon = 0.994181205445;
    msg.z = 0.747191012325;
    msg.z_units = 111U;
    msg.amplitude = 0.166511434283;
    msg.pitch = 0.749852211956;
    msg.speed = 0.814791136229;
    msg.speed_units = 4U;
    msg.custom.assign("BYMBNZRZZSYRAFPWUPKXMBSKSBAXNODMAEGPOHJRNERZDECBCTMSWJJDNVXCJRVSQDQLMBDJWGQIWNOWRCSDZPEOUXYGFGEAYOUKBZHVHSQ");

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
    msg.setTimeStamp(0.244288139914);
    msg.setSource(13372U);
    msg.setSourceEntity(177U);
    msg.setDestination(43240U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.484447870157);
    msg.setSource(59264U);
    msg.setSourceEntity(100U);
    msg.setDestination(8374U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.733315143887);
    msg.setSource(43994U);
    msg.setSourceEntity(58U);
    msg.setDestination(18175U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.839108459346);
    msg.setSource(19652U);
    msg.setSourceEntity(156U);
    msg.setDestination(44869U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.2355877286;
    msg.lon = 0.288956758064;
    msg.z = 0.07178955325;
    msg.z_units = 232U;
    msg.radius = 0.930340981891;
    msg.duration = 44162U;
    msg.speed = 0.268777948725;
    msg.speed_units = 250U;
    msg.custom.assign("TBEBOFUPTKFMHDDZVWTXDLMYSYQBTIRGQYPLFHGGOXKJRTHRKBUCJJVBSDOLAGJNZZJWOLRABVLFGBLPDKIMVNYMXQJUQXNJUEGWHBRETADNDQGLJEAYLQTPUCMILPKPKRISZEWNVSAMHAVCXGPCACWQCQGZUSXMKYTCRAZNXQEHUDWSCWIZMHFVQKNVTPFBDWYPIOZUIUSHHMCRNZDWUEOKEFNTXHSFYK");

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
    msg.setTimeStamp(0.703891936929);
    msg.setSource(27766U);
    msg.setSourceEntity(42U);
    msg.setDestination(6625U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.768302381629;
    msg.lon = 0.668575801915;
    msg.z = 0.560879427743;
    msg.z_units = 238U;
    msg.radius = 0.345184956036;
    msg.duration = 44868U;
    msg.speed = 0.0610627631842;
    msg.speed_units = 35U;
    msg.custom.assign("USLFBXTESHEKUFWMWCDHRJPTUWKDEXZWHACANHSXZDIFZCVOVMUGKWTKJGXAEVYURCOQFORYVNOXLOWTZGAMJH");

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
    msg.setTimeStamp(0.122255081554);
    msg.setSource(31980U);
    msg.setSourceEntity(35U);
    msg.setDestination(48901U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.0536518705303;
    msg.lon = 0.803390411256;
    msg.z = 0.858801934875;
    msg.z_units = 174U;
    msg.radius = 0.717965385352;
    msg.duration = 61997U;
    msg.speed = 0.563605360861;
    msg.speed_units = 72U;
    msg.custom.assign("CAOASLGBGYRNBPEECLHXDMBMTBNZQETRCMQOXXJWEBWYURVRUUDC");

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
    msg.setTimeStamp(0.990315050736);
    msg.setSource(4273U);
    msg.setSourceEntity(17U);
    msg.setDestination(65192U);
    msg.setDestinationEntity(201U);
    msg.timeout = 62663U;
    msg.flags = 230U;
    msg.lat = 0.784593468598;
    msg.lon = 0.225602612323;
    msg.start_z = 0.573001592432;
    msg.start_z_units = 153U;
    msg.end_z = 0.552995264155;
    msg.end_z_units = 178U;
    msg.radius = 0.466486492228;
    msg.speed = 0.344802532421;
    msg.speed_units = 128U;
    msg.custom.assign("LBZDSXBTGLBHPOBAYEPSCQCGJVVXPKKAUMEVIMZBHUUPWFVFQDCSNCNQTTQDYZIODLYMXAGEUIJOJHLILSQYKNMFLITOIDYYGKGSMHKQQGUERNYPZOFFPMUZYTWOGNBLPWOTRDDQEPIFVUZZAXGMWJFOENSRIWOCYELOXXMGZHVRSRQKNLPEANCJCUXFWJKLZMWHBHSXVTWAEEBCSHARRSTKDHJQFTAGRVUKRHXXBRNCMCFBA");

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
    msg.setTimeStamp(0.0817464148764);
    msg.setSource(49583U);
    msg.setSourceEntity(100U);
    msg.setDestination(6582U);
    msg.setDestinationEntity(73U);
    msg.timeout = 45468U;
    msg.flags = 129U;
    msg.lat = 0.790396749936;
    msg.lon = 0.707650526875;
    msg.start_z = 0.705295175268;
    msg.start_z_units = 112U;
    msg.end_z = 0.398683185105;
    msg.end_z_units = 133U;
    msg.radius = 0.267644037546;
    msg.speed = 0.58353356459;
    msg.speed_units = 125U;
    msg.custom.assign("VYQMLQZUIXFPRROVWMTWYTKOWUCJCCEBDQRCEXYTLDDLVOENWIWLWENSYAYITTLLRDITUIBWXNOVNNYFGWPOAWRGXGSUYAGXP");

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
    msg.setTimeStamp(0.111974083673);
    msg.setSource(20309U);
    msg.setSourceEntity(73U);
    msg.setDestination(13996U);
    msg.setDestinationEntity(237U);
    msg.timeout = 52551U;
    msg.flags = 186U;
    msg.lat = 0.103623754818;
    msg.lon = 0.689992561905;
    msg.start_z = 0.317093922864;
    msg.start_z_units = 0U;
    msg.end_z = 0.162364072359;
    msg.end_z_units = 79U;
    msg.radius = 0.920826724345;
    msg.speed = 0.204443937063;
    msg.speed_units = 48U;
    msg.custom.assign("NOEAAUMBLDPKFZNWBD");

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
    msg.setTimeStamp(0.0478412331349);
    msg.setSource(52438U);
    msg.setSourceEntity(126U);
    msg.setDestination(49492U);
    msg.setDestinationEntity(31U);
    msg.timeout = 6817U;
    msg.lat = 0.851188867895;
    msg.lon = 0.187707517987;
    msg.z = 0.471564010613;
    msg.z_units = 190U;
    msg.speed = 0.6121063361;
    msg.speed_units = 221U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.448165616287;
    tmp_msg_0.y = 0.139687191581;
    tmp_msg_0.z = 0.282284317436;
    tmp_msg_0.t = 0.0693604878997;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZCHFSAHBKWEWGQRCEIVJVZBYQWKGVEXXTAOBLAPJDFCOOYMZSFPQUAYDDFZGBJKJDFUXAPIWTTNO");

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
    msg.setTimeStamp(0.272942237625);
    msg.setSource(27915U);
    msg.setSourceEntity(30U);
    msg.setDestination(43398U);
    msg.setDestinationEntity(157U);
    msg.timeout = 36694U;
    msg.lat = 0.819599525686;
    msg.lon = 0.659436636139;
    msg.z = 0.236918111683;
    msg.z_units = 137U;
    msg.speed = 0.452208934348;
    msg.speed_units = 241U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.433385384229;
    tmp_msg_0.y = 0.976440094164;
    tmp_msg_0.z = 0.211237993423;
    tmp_msg_0.t = 0.214366832009;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GCVJXCZRJFODPYRZBGXGKFSFIQLSDOKBKMLBFOJPOUVXMADAOIJTRONLSHNYMOSQTISEUCRADXZDWWXJSNJCLMWBQDWINNTVVFGUMBHCQ");

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
    msg.setTimeStamp(0.402216782652);
    msg.setSource(21485U);
    msg.setSourceEntity(216U);
    msg.setDestination(2320U);
    msg.setDestinationEntity(139U);
    msg.timeout = 37564U;
    msg.lat = 0.398025869963;
    msg.lon = 0.91422624361;
    msg.z = 0.13049404679;
    msg.z_units = 213U;
    msg.speed = 0.5442609667;
    msg.speed_units = 198U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.283457318244;
    tmp_msg_0.y = 0.871245665958;
    tmp_msg_0.z = 0.75699863437;
    tmp_msg_0.t = 0.966794514976;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VCRMWALYYLEEVFOVXMGLQXOJNDFIZUBWKHLNZFAEESJNHQNMWTRQRWMHIXFDEPRHBXQUVDBGYRRYSASHFSDOJCIZAPJGULZUMYNWHCFWLRNUOIVRGZUDSXJJYHDGLJQZQFHBOWQKDDFUKDTIJVKU");

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
    msg.setTimeStamp(0.633646018082);
    msg.setSource(15978U);
    msg.setSourceEntity(249U);
    msg.setDestination(30990U);
    msg.setDestinationEntity(14U);
    msg.x = 0.424514800806;
    msg.y = 0.508091427336;
    msg.z = 0.212491897312;
    msg.t = 0.744710852102;

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
    msg.setTimeStamp(0.437045894948);
    msg.setSource(64186U);
    msg.setSourceEntity(109U);
    msg.setDestination(34131U);
    msg.setDestinationEntity(213U);
    msg.x = 0.226499456011;
    msg.y = 0.18709736462;
    msg.z = 0.207985864604;
    msg.t = 0.419208504422;

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
    msg.setTimeStamp(0.684509052224);
    msg.setSource(34598U);
    msg.setSourceEntity(162U);
    msg.setDestination(48780U);
    msg.setDestinationEntity(171U);
    msg.x = 0.988130195367;
    msg.y = 0.7542050982;
    msg.z = 0.23513397659;
    msg.t = 0.630206571846;

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
    msg.setTimeStamp(0.453752914572);
    msg.setSource(38504U);
    msg.setSourceEntity(224U);
    msg.setDestination(13759U);
    msg.setDestinationEntity(8U);
    msg.timeout = 34825U;
    msg.name.assign("DNWWOCRBBKLVQJDMFDMKFDYHAFYVHTHENYGTWTGVXPRMTWPGBQSFUXRJKAPNZHNTIOFQKRZOVEEQLLDZXAVIXBARISACXOAWMHRLOYNVEY");
    msg.custom.assign("YVGKDFWSPXJOILJCAWUUEVYZHNTNCIUVHORAFAMNZZTNUQVWEOIOOSYCMRTFRJIEKMAGEPGHXHGAVQDUZUWNDAFYWXMQKCMTIWYNJPXKGSPCWSPXHLVOIODFUJBIQEXQBXWRYZKQMDVFRQRBYEKJRJUXHMLJDRUXEBHGSQWTOTYCIGTOJYPLHFSBC");

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
    msg.setTimeStamp(0.143718268353);
    msg.setSource(9124U);
    msg.setSourceEntity(166U);
    msg.setDestination(47400U);
    msg.setDestinationEntity(159U);
    msg.timeout = 27636U;
    msg.name.assign("ALQUUQVTMPPMLPZHLELCWZVSVJTDFBKCROPUJCLGUMPDZHWLYMGXJMNARFUDEWNXVHKKVHFLYWJEGTZSZQEAIXKOSFFGEPKYFESTXEHGRIITXATFEUFCJHTFUFKJKYVMONCEGRVUZBCWZNQNSAPGARLNMHOAYXWVOBPDSRNMCRHGDDXSYPIJKQVIXOIZZSQADARIJKWOXGNOQSMTNDYCKYIICWBBRELBUOUWJBBWPBQIZVQXRNQL");
    msg.custom.assign("YBYROCDMHEMEWCGFFUKZLEFIORPTPIVOTTWGGMPEKOTZZQCUQRTCJIFRCMNVNEIXVEAMKSSQXABKNHIDLECLISXGHQJWWZSUVLZVNDLAJDGWBJFYHJQRUZTMSIYSRWMEUAHGPBBVFWKNFBGVTSDBQUONJYYYPLCNOMSYLGDJCAQENXYGBKNVAUWWKHFTOIOZDCAZRDKAPTSUSKQXB");

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
    msg.setTimeStamp(0.466342598047);
    msg.setSource(2426U);
    msg.setSourceEntity(83U);
    msg.setDestination(1629U);
    msg.setDestinationEntity(93U);
    msg.timeout = 5392U;
    msg.name.assign("ZMFETCGGKUYRIDJXVXBPPKJTEFMLHWGEYMCIJEPVOWAEGCBICKCSDTQIMVPDMVAQWJMBAGYKOZDITWHHZUSJOFLQNXAZYZAZTUXVWHOLSORQJCTNHBIQYDLTVIFMFANDGWQRWVVHMZNNWUOIXLGWAOMNHSBURQFFJCKDOYYNCBLFLXSGZKFIQXRQDUGACHUSCBNBDKPPYNEYEJJEBPTXUSDZVOYXFRBUKPGEWRHAJ");
    msg.custom.assign("SSFFBHYZCZVCAQCBIEKPBZOABBZSDYPMHUJCVSLJMRYGFBSOZXBOFWGXKOLDILNYRWPJKFIWSGQAKOUGGATACZPSXDZXAIXNZMQNQXSLTJELRFOHMSJATHHTUDRNMTJCQVKIINVFNIQDYTUWHQEHRTPNPBDCOMJBVFULYZDRMYCYEIPLEEXWRLIGQXWVCWHEMQJYVRTKAEREOUMKUUNNDPFIQJKVGDVHF");

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
    msg.setTimeStamp(0.00407893002041);
    msg.setSource(1608U);
    msg.setSourceEntity(118U);
    msg.setDestination(51878U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.673156096173;
    msg.lon = 0.362110347628;
    msg.z = 0.527478399945;
    msg.z_units = 125U;
    msg.speed = 0.201751050748;
    msg.speed_units = 221U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.460749086431;
    tmp_msg_0.y = 0.411885519332;
    tmp_msg_0.z = 0.0847823344613;
    tmp_msg_0.t = 0.0197314782006;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 26289U;
    tmp_msg_1.off_x = 0.0796328287107;
    tmp_msg_1.off_y = 0.926948409551;
    tmp_msg_1.off_z = 0.482287122582;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.0706728395353;
    msg.custom.assign("ZZMRFEISCMGUADJYNKXCFPANSOHTLNJMUSQFQQAJTGRDOEBAKNWSWIMEFXTHFGLWWBBQCDWWPIAUPLGMGOTFHADUVHCOEFOAPZKNCUWDCCBMXIZHI");

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
    msg.setTimeStamp(0.470997683133);
    msg.setSource(30471U);
    msg.setSourceEntity(243U);
    msg.setDestination(64044U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.0591408802934;
    msg.lon = 0.87781670841;
    msg.z = 0.934712120659;
    msg.z_units = 70U;
    msg.speed = 0.816871213983;
    msg.speed_units = 251U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 39210U;
    tmp_msg_0.off_x = 0.472631882713;
    tmp_msg_0.off_y = 0.57052362979;
    tmp_msg_0.off_z = 0.0855691221401;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.0586213272876;
    msg.custom.assign("UWNMXFYACTKDCZLJWINOTCXDHPNLLLIWWIHXTJSVUZHAOPJJCKCSZYLJSYECFLRDOKUZAEMKVRIULVZBAVCNYMYDTKURTFXBSPAFGIVFDQMWKJGWBTQEBSVLYGKUXTDPTVBNRJCKHUOWBRFHAUOGOWZUSEPMFRAGQNEXMXFICSBJGQQIWYMOHJLSYRHYVODRMTEYRHOGDQHSFQEWXEEZFKAQZUIGINCHBMGOBDSGQTX");

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
    msg.setTimeStamp(0.692680711508);
    msg.setSource(10240U);
    msg.setSourceEntity(199U);
    msg.setDestination(2612U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.693574236966;
    msg.lon = 0.160214858789;
    msg.z = 0.665677966458;
    msg.z_units = 176U;
    msg.speed = 0.755666455047;
    msg.speed_units = 161U;
    msg.start_time = 0.15025178792;
    msg.custom.assign("EEBJWYVAPTCBTPCZDLLOTQHSHUMMCVFBGIUGDSFJYRNZBAMBGEAYGUVNJOJVUJSXDABZLRJLQFPYNYWEPFDHHGHTECZKQXSIKLVQYTJEZMDZNYRLAIWNFRJAIWHDJHPQIZGIQUCPRWHESBKX");

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
    msg.setTimeStamp(0.407947806617);
    msg.setSource(4249U);
    msg.setSourceEntity(64U);
    msg.setDestination(6926U);
    msg.setDestinationEntity(154U);
    msg.vid = 38877U;
    msg.off_x = 0.0426419055739;
    msg.off_y = 0.190746811597;
    msg.off_z = 0.227647211871;

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
    msg.setTimeStamp(0.632614587073);
    msg.setSource(6594U);
    msg.setSourceEntity(117U);
    msg.setDestination(56883U);
    msg.setDestinationEntity(129U);
    msg.vid = 5145U;
    msg.off_x = 0.841310008371;
    msg.off_y = 0.804356262877;
    msg.off_z = 0.814753184935;

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
    msg.setTimeStamp(0.682615185883);
    msg.setSource(17145U);
    msg.setSourceEntity(239U);
    msg.setDestination(47109U);
    msg.setDestinationEntity(106U);
    msg.vid = 59065U;
    msg.off_x = 0.176943973735;
    msg.off_y = 0.121882474917;
    msg.off_z = 0.530645095023;

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
    msg.setTimeStamp(0.48441609975);
    msg.setSource(19521U);
    msg.setSourceEntity(78U);
    msg.setDestination(24300U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.147491992384);
    msg.setSource(6287U);
    msg.setSourceEntity(243U);
    msg.setDestination(62769U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.508708635121);
    msg.setSource(38984U);
    msg.setSourceEntity(96U);
    msg.setDestination(35905U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.334984251819);
    msg.setSource(19669U);
    msg.setSourceEntity(118U);
    msg.setDestination(28270U);
    msg.setDestinationEntity(40U);
    msg.mid = 3305U;

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
    msg.setTimeStamp(0.931519321943);
    msg.setSource(40004U);
    msg.setSourceEntity(175U);
    msg.setDestination(9907U);
    msg.setDestinationEntity(60U);
    msg.mid = 22453U;

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
    msg.setTimeStamp(0.883501274067);
    msg.setSource(48989U);
    msg.setSourceEntity(22U);
    msg.setDestination(16670U);
    msg.setDestinationEntity(127U);
    msg.mid = 54535U;

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
    msg.setTimeStamp(0.843714115135);
    msg.setSource(27522U);
    msg.setSourceEntity(100U);
    msg.setDestination(18561U);
    msg.setDestinationEntity(239U);
    msg.state = 103U;
    msg.eta = 57698U;
    msg.info.assign("XPYLRVCWMVRCJHMXXWDDBXQZFSSLIGDPYMDNCMAWRHKNIKRZAFJWKTSNWPQP");

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
    msg.setTimeStamp(0.263322776532);
    msg.setSource(6379U);
    msg.setSourceEntity(244U);
    msg.setDestination(53212U);
    msg.setDestinationEntity(64U);
    msg.state = 116U;
    msg.eta = 4665U;
    msg.info.assign("IVVRABTMVEOYVEUAMQIFDATJSWUCISPIGYTV");

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
    msg.setTimeStamp(0.509053086385);
    msg.setSource(46999U);
    msg.setSourceEntity(243U);
    msg.setDestination(30816U);
    msg.setDestinationEntity(173U);
    msg.state = 88U;
    msg.eta = 26149U;
    msg.info.assign("HTDSKPCZZWQBBHMVNFNNSGERZZXCEMBGSQKCOJALAXNKMVYQROHWXRFUBLFFTUBZYOWHVIEMJCHIUXTVXDNAKLAMXHLSZGYRNOAADYTZPEPLPPEYWWTHJVGHCFJSKIGMAVEEQJN");

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
    msg.setTimeStamp(0.48033638584);
    msg.setSource(24741U);
    msg.setSourceEntity(209U);
    msg.setDestination(11779U);
    msg.setDestinationEntity(102U);
    msg.system = 15153U;
    msg.duration = 29154U;
    msg.speed = 0.21008364276;
    msg.speed_units = 82U;
    msg.x = 0.221224937222;
    msg.y = 0.731548661611;
    msg.z = 0.837881363957;
    msg.z_units = 9U;

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
    msg.setTimeStamp(0.244248217528);
    msg.setSource(23797U);
    msg.setSourceEntity(218U);
    msg.setDestination(62089U);
    msg.setDestinationEntity(227U);
    msg.system = 64073U;
    msg.duration = 60362U;
    msg.speed = 0.447135448986;
    msg.speed_units = 31U;
    msg.x = 0.22079885437;
    msg.y = 0.906250856516;
    msg.z = 0.693663651824;
    msg.z_units = 67U;

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
    msg.setTimeStamp(0.89485904676);
    msg.setSource(14764U);
    msg.setSourceEntity(140U);
    msg.setDestination(824U);
    msg.setDestinationEntity(12U);
    msg.system = 20703U;
    msg.duration = 42640U;
    msg.speed = 0.0224751659335;
    msg.speed_units = 17U;
    msg.x = 0.237755624413;
    msg.y = 0.547379769327;
    msg.z = 0.789068690788;
    msg.z_units = 19U;

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
    msg.setTimeStamp(0.159843025422);
    msg.setSource(62020U);
    msg.setSourceEntity(200U);
    msg.setDestination(10030U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.0915525537835;
    msg.lon = 0.791636836092;
    msg.speed = 0.349021982017;
    msg.speed_units = 228U;
    msg.duration = 50584U;
    msg.sys_a = 48900U;
    msg.sys_b = 47123U;
    msg.move_threshold = 0.449754590026;

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
    msg.setTimeStamp(0.513889661483);
    msg.setSource(31021U);
    msg.setSourceEntity(58U);
    msg.setDestination(41004U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.205944012743;
    msg.lon = 0.334934682493;
    msg.speed = 0.154989552266;
    msg.speed_units = 194U;
    msg.duration = 51666U;
    msg.sys_a = 29356U;
    msg.sys_b = 5017U;
    msg.move_threshold = 0.185060706683;

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
    msg.setTimeStamp(0.341492133502);
    msg.setSource(36217U);
    msg.setSourceEntity(192U);
    msg.setDestination(20248U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.502564625448;
    msg.lon = 0.197641577799;
    msg.speed = 0.825800194817;
    msg.speed_units = 108U;
    msg.duration = 9471U;
    msg.sys_a = 43215U;
    msg.sys_b = 26770U;
    msg.move_threshold = 0.792269705843;

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
    msg.setTimeStamp(0.668143074706);
    msg.setSource(57448U);
    msg.setSourceEntity(135U);
    msg.setDestination(12488U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.724641018604;
    msg.lon = 0.955386249784;
    msg.z = 0.134678369976;
    msg.z_units = 4U;
    msg.speed = 0.242108127162;
    msg.speed_units = 161U;
    msg.custom.assign("UUXRWMHWJIRIVIKMOAHYEASFTRINAWMQPURHGDSECLZODSLPSJLAMBLCXBEAKJJFMPHCXEVKCFVMQGHBGLHSZZULINCLVPTXDVFSUWZKYLOCJIIKGEXNBWO");

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
    msg.setTimeStamp(0.942251794584);
    msg.setSource(48819U);
    msg.setSourceEntity(56U);
    msg.setDestination(65309U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.581586219007;
    msg.lon = 0.398074985298;
    msg.z = 0.704949718079;
    msg.z_units = 90U;
    msg.speed = 0.524757626805;
    msg.speed_units = 33U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.523334497301;
    tmp_msg_0.lon = 0.181567318868;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TWHDJKGWJKUZAERWMVETGMBAEUARZOSTPJAGKHHEQXXFKMGJLPZLXZOQOSGIKANDGXXNJF");

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
    msg.setTimeStamp(0.311316407381);
    msg.setSource(56855U);
    msg.setSourceEntity(65U);
    msg.setDestination(33706U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.164404885358;
    msg.lon = 0.219750036544;
    msg.z = 0.887050549426;
    msg.z_units = 76U;
    msg.speed = 0.181148062277;
    msg.speed_units = 234U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.265912700316;
    tmp_msg_0.lon = 0.469745815045;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FHZKMIFITBKXPVQYWERGSWMENAJHJAJNMEDROXHKKZBMLCFIHEHDCJAOLHDEJPLPUEXYGRZZWOACSZPINOXBZLKKGRVLQOVCSGOCUWRXUXHPNAFGFQTVFEBVZYCSUAQTXCOOPNOIQZWDIKFDTPEGLWURJJDITNJUAFDMVMQZYSJUYITUQRWDYWASSHGTDCGLBDKVXZYKETMQGM");

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
    msg.setTimeStamp(0.785566968308);
    msg.setSource(6887U);
    msg.setSourceEntity(215U);
    msg.setDestination(42077U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.40229285708;
    msg.lon = 0.712589626995;

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
    msg.setTimeStamp(0.211716650583);
    msg.setSource(1371U);
    msg.setSourceEntity(82U);
    msg.setDestination(38927U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.499427040913;
    msg.lon = 0.974122357826;

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
    msg.setTimeStamp(0.165305287251);
    msg.setSource(4324U);
    msg.setSourceEntity(121U);
    msg.setDestination(24933U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.377975778845;
    msg.lon = 0.481605092423;

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
    msg.setTimeStamp(0.00762787347331);
    msg.setSource(4712U);
    msg.setSourceEntity(221U);
    msg.setDestination(3745U);
    msg.setDestinationEntity(63U);
    msg.timeout = 17484U;
    msg.lat = 0.434988511248;
    msg.lon = 0.791761218533;
    msg.z = 0.418418545597;
    msg.z_units = 196U;
    msg.pitch = 0.911088507045;
    msg.amplitude = 0.586859605629;
    msg.duration = 14171U;
    msg.speed = 0.0808925909402;
    msg.speed_units = 228U;
    msg.radius = 0.367674467995;
    msg.direction = 93U;
    msg.custom.assign("ZUATZKOXTTECWXBGBGWUYTNGQDGKJJZJFMBGJGHKAISMNXVPEZQPMLOWUGIKJIQKTXAYFWCQIRFZHFOBRZKVLUCEUNRLJPRHFDTROJWABYNIDRYLCQNYBSGMRAYDUJSVZZKTDMFLSDHMOPCDFLHLHRNQMXODQPABOADIICNTQWGICUV");

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
    msg.setTimeStamp(0.44113561882);
    msg.setSource(46773U);
    msg.setSourceEntity(225U);
    msg.setDestination(16361U);
    msg.setDestinationEntity(219U);
    msg.timeout = 28424U;
    msg.lat = 0.765823801774;
    msg.lon = 0.210064041866;
    msg.z = 0.233726558991;
    msg.z_units = 139U;
    msg.pitch = 0.969974017435;
    msg.amplitude = 0.982791832643;
    msg.duration = 2306U;
    msg.speed = 0.900030389821;
    msg.speed_units = 169U;
    msg.radius = 0.811148772719;
    msg.direction = 190U;
    msg.custom.assign("TRBVFYODACBZNCLIHHRUPSHWAMTFKYTLUREBKEXOWFAQZCPEPRMXTNLUPDQBSWMVGWCNVJPNMVHIUUGLSNIZSODKMEJGEGXGOHJQVXZAFYAFBUQBQEHVPDZLLEMPYLSZSOOLMYDDCMQQIDJWUH");

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
    msg.setTimeStamp(0.433134946165);
    msg.setSource(33902U);
    msg.setSourceEntity(211U);
    msg.setDestination(19269U);
    msg.setDestinationEntity(60U);
    msg.timeout = 4178U;
    msg.lat = 0.220396097892;
    msg.lon = 0.518706602834;
    msg.z = 0.298339676021;
    msg.z_units = 249U;
    msg.pitch = 0.98808733758;
    msg.amplitude = 0.468001982982;
    msg.duration = 16981U;
    msg.speed = 0.600854879475;
    msg.speed_units = 108U;
    msg.radius = 0.0392882139378;
    msg.direction = 206U;
    msg.custom.assign("SERYJFYNBWEMHVRANWVOYSYDJTGBUQBJBHIVLDLNKCZWSMQRCXKAGZHJEHINCVSJCAOZTVHPABDWBQMZUORPGVXUGYQXWGDXAQFMIEPVUNPLIOUBYZUFFPGIGJYALZKKTSGMMLTEXKWSATYNCEOGPFFORMICHU");

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
    msg.setTimeStamp(0.0939630403753);
    msg.setSource(49924U);
    msg.setSourceEntity(165U);
    msg.setDestination(55226U);
    msg.setDestinationEntity(119U);
    msg.formation_name.assign("PQHVPOJZECKJPXVFQKQNPQZSEANTDWEBOUMDQLGCGRVCRTUEBFWKBOJZMOWCOZDWEDYFAVYZDMOKXUNPXMIWTITYRVSTYVQMTLQPEKJJMJMAWWXLRDAZALRNYDHGBRKXBTXJONHIYFTZMDICZBRSIM");
    msg.reference_frame = 72U;
    msg.custom.assign("SQUSTAZQDEKFF");

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
    msg.setTimeStamp(0.646263707372);
    msg.setSource(54519U);
    msg.setSourceEntity(145U);
    msg.setDestination(58573U);
    msg.setDestinationEntity(250U);
    msg.formation_name.assign("XWMZITFYWZSQRWTEINJBRYUTWLSILUS");
    msg.reference_frame = 225U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 60990U;
    tmp_msg_0.off_x = 0.781355678335;
    tmp_msg_0.off_y = 0.9458970154;
    tmp_msg_0.off_z = 0.162658007525;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZUQNJTTWNHVYMPNFPCNZHBDRNIRYNUDWUNAVZEIITASIJFAUFYFGXYHQEVHTUXHMKOXALXRFSYLKPZRMBYOCMEMYGBNCKV");

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
    msg.setTimeStamp(0.283467838689);
    msg.setSource(64812U);
    msg.setSourceEntity(8U);
    msg.setDestination(5927U);
    msg.setDestinationEntity(102U);
    msg.formation_name.assign("HGNPMOCTIMZRECRVVUULPFILUHXCQTAEXBYAELGCIEHYCGPQZVUBZWFFDQMJXDTYEKEHORVBJAXYYRAOKWNJUXNACEYZXIOWZVOKNJIKDZGNMSJAZNHRUBNGUWMFXTHNKUHSQIWBRPKNSHTLKZHMXJODSBDBQIBDPBGYSDKETLGJWQPPVLCSETJPLSDTWYOOSXWULGFOJAAZYGQLWQVFTPM");
    msg.reference_frame = 3U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 65197U;
    tmp_msg_0.off_x = 0.895235155007;
    tmp_msg_0.off_y = 0.244450487039;
    tmp_msg_0.off_z = 0.981415696474;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZOXBWUXZCYZCVHGRPQOUITOZTABCJRHAQSPTNCNTRENAYZGEYHSYUIVQSFXXJOXKJFFECTQJOSMZPEUBQIGVDIRPJPYJXMJQYBLLXXBAGISJNMSOIIGOFDLDXRWWVBUVCWWGIAWOBWKIDHFOIKRFDKNTMQKVWUCHM");

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
    msg.setTimeStamp(0.247301528368);
    msg.setSource(14660U);
    msg.setSourceEntity(35U);
    msg.setDestination(18893U);
    msg.setDestinationEntity(69U);
    msg.group_name.assign("OTIHDUAZSTUKYHIVNPANSK");
    msg.formation_name.assign("EFDMLOUYMHTWWNMRTPEAPWAETKWOLSFZGIGUUBQKJSJYCNMHHAPADURNBTRSYPGJJHLYCNRYZYJXUPVVFVUXHOHJDBNSMXGKBAJSTWRFTTNQXAQVWUSILQIKBTTFDXEEZSIOCAWQUD");
    msg.plan_id.assign("MDJUAPNSCZRUESQRZJTAYLTBCWPDRFLDDQVGSWHZMHJGNXYIUMNPCHPDZHNAX");
    msg.description.assign("UWZQTLDDUXVJFSJAREPEYURUZWVGZQGAOYZWYCQICIEGGFVOWXASKMGHJV");
    msg.leader_speed = 0.28009257845;
    msg.leader_bank_lim = 0.100112585253;
    msg.pos_sim_err_lim = 0.833225812737;
    msg.pos_sim_err_wrn = 0.483912304889;
    msg.pos_sim_err_timeout = 47808U;
    msg.converg_max = 0.249918902936;
    msg.converg_timeout = 3680U;
    msg.comms_timeout = 55060U;
    msg.turb_lim = 0.458419593566;
    msg.custom.assign("LOTUATTYUCSZDIOFTPZPTUIKASRMOWNDLJKIXCIZVAYXKEDMPHPAFYFISZUJUGHEBBMPUHXJXAMEQJECMORBZBHZRCXQCDPZBHHVGKVHGSKTJQJNGYFDIJOHCYNBPKIFGDBFSCWGCMWNSERJLUWTMZZBXTLTDAMOGNRABRNTUADGSDLQRWCNL");

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
    msg.setTimeStamp(0.854890017478);
    msg.setSource(37634U);
    msg.setSourceEntity(200U);
    msg.setDestination(34487U);
    msg.setDestinationEntity(102U);
    msg.group_name.assign("GNSAQOFWZFPUMYWCSBEMPODFNBDCJIIALWOUORKIPTDGVQVZIKQAEVWVIHPBPZBQFFFJDXNZNHAIJXYPMWLLIKRZRUSRNEJUEQUNZWSQXQKXVDTCVLNCBFKBFDXLOCXKYSDWTFLQRNIHUQGHMXYCIULDYQBTKOPBGN");
    msg.formation_name.assign("CKRJMTHBYZMVXWMKIBPXYXNRHLGBQNKNZGJMQZHJWFFIAZAFVWIXREELTYZSLFTSXUAPRLVJUPVDRKIRYJRKFWOEXAFKOKQGJCDIOOTRQHFGVPZNYYZUMOABQWFTXPDD");
    msg.plan_id.assign("JPPOUVMZATSAYGYOORWZDASTSTIPYDAAVLCHKEENJOXHTNCFLCDNEZTCVBJRZOMRIIISBKZJFSGTGGUCQXURIBEJWUMKUCDNBRJLKZFLIDELPGVHYPXGYSQIUWJHBVVD");
    msg.description.assign("LTMEEUWGOBPTXTFPAMQPWTGNASIGBAZCMESSRJRKYMIQQIOUCDSVGYTEODPPIOSLZENFRSGNRCVHVVHZOYRRYNMYJNAOKFGVHLWOBKWHJHVRAPUZSQULDIMBFJYWXXVUKCCIEKOTJSETQBPPMQJBGYDYACDXXFBUKCUAINACFHMJAZKNEPBNQYLQTIKFROWDIMZWCYGSEGVJWL");
    msg.leader_speed = 0.739557757369;
    msg.leader_bank_lim = 0.551563779081;
    msg.pos_sim_err_lim = 0.415710750923;
    msg.pos_sim_err_wrn = 0.541887478877;
    msg.pos_sim_err_timeout = 13161U;
    msg.converg_max = 0.0572987231475;
    msg.converg_timeout = 65017U;
    msg.comms_timeout = 38682U;
    msg.turb_lim = 0.191215430306;
    msg.custom.assign("ABJEANDCSHSZLVXPNBDIKXRNEKDJPCMOQZFEQQBZFANXOTFDIVUNKFPXVWLYPECVWMWBQLLIECWHGRGRMFNRXYZSRTMWOYR");

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
    msg.setTimeStamp(0.854983257207);
    msg.setSource(44210U);
    msg.setSourceEntity(160U);
    msg.setDestination(55886U);
    msg.setDestinationEntity(150U);
    msg.group_name.assign("UBVKVSPUSDAXWNPKTRKGBBQCYNASRUWFKRKDNGVAJDJLOQYSIPEJCWOZNFFEZUMHEXPZCSQMMOTPGRSAWORGCXGFIRGXI");
    msg.formation_name.assign("VPKOQFSLLIPUFSTTPPNTCSBEFMCBIGHZQJIPNIBPEDGFYHFQCOORJAVIUZRCJEWIUGAMUYQYSXAOKVFNXJRBYAFTJJ");
    msg.plan_id.assign("RYQWAHLMKICJDHLPRUXKICOMNZJSDVAMELYWOUBZVXGDTIBOSBFNKUQRXODPGDSDENYXECGYIHBBRHHYRNKECAVPOZIMNBFQXULAANTFVRECMETCFLVTWFDUNZSSOOTIJUTPJIGHYMRGSAALOYATWXOVPPAOJSQLZN");
    msg.description.assign("ZVYRMFUNAGKEFHOMXHCEJZUBPK");
    msg.leader_speed = 0.558047472363;
    msg.leader_bank_lim = 0.552734645943;
    msg.pos_sim_err_lim = 0.560211023647;
    msg.pos_sim_err_wrn = 0.735032356503;
    msg.pos_sim_err_timeout = 37698U;
    msg.converg_max = 0.485102117496;
    msg.converg_timeout = 918U;
    msg.comms_timeout = 10259U;
    msg.turb_lim = 0.681044973326;
    msg.custom.assign("FSESKKXJRBDEQBADNVEXIROTPAIXMFUYYLYOANHDEWNUUQBVZKXHNPSHDEUWPGJBVFXGMWSOESAGTHMCHWEQEQRHSCTRBNMVXCXRWTD");

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
    msg.setTimeStamp(0.558006390633);
    msg.setSource(8097U);
    msg.setSourceEntity(185U);
    msg.setDestination(32768U);
    msg.setDestinationEntity(111U);
    msg.control_src = 27616U;
    msg.control_ent = 19U;
    msg.timeout = 0.0291719799404;
    msg.loiter_radius = 0.820694409868;
    msg.altitude_interval = 0.567919968021;

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
    msg.setTimeStamp(0.710878925222);
    msg.setSource(41387U);
    msg.setSourceEntity(144U);
    msg.setDestination(17668U);
    msg.setDestinationEntity(81U);
    msg.control_src = 5139U;
    msg.control_ent = 189U;
    msg.timeout = 0.429624862735;
    msg.loiter_radius = 0.343448005169;
    msg.altitude_interval = 0.869820481194;

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
    msg.setTimeStamp(0.738194872042);
    msg.setSource(48184U);
    msg.setSourceEntity(225U);
    msg.setDestination(54610U);
    msg.setDestinationEntity(234U);
    msg.control_src = 24426U;
    msg.control_ent = 120U;
    msg.timeout = 0.746011826271;
    msg.loiter_radius = 0.860813752663;
    msg.altitude_interval = 0.121448893816;

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
    msg.setTimeStamp(0.386259087719);
    msg.setSource(55796U);
    msg.setSourceEntity(47U);
    msg.setDestination(44473U);
    msg.setDestinationEntity(18U);
    msg.flags = 199U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.88563448677;
    tmp_msg_0.speed_units = 30U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.857665441187;
    tmp_msg_1.z_units = 79U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.343546277978;
    msg.lon = 0.123768461151;
    msg.radius = 0.293563632929;

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
    msg.setTimeStamp(0.613424090181);
    msg.setSource(64113U);
    msg.setSourceEntity(22U);
    msg.setDestination(22232U);
    msg.setDestinationEntity(231U);
    msg.flags = 241U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.662594957112;
    tmp_msg_0.speed_units = 152U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.494162164997;
    tmp_msg_1.z_units = 139U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.608688776889;
    msg.lon = 0.184947204243;
    msg.radius = 0.76970428137;

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
    msg.setTimeStamp(0.516871461472);
    msg.setSource(21567U);
    msg.setSourceEntity(238U);
    msg.setDestination(42341U);
    msg.setDestinationEntity(9U);
    msg.flags = 114U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.852973039068;
    tmp_msg_0.speed_units = 200U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.595215841967;
    tmp_msg_1.z_units = 47U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.105110424271;
    msg.lon = 0.289524462547;
    msg.radius = 0.608427463154;

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
    msg.setTimeStamp(0.437458763791);
    msg.setSource(58642U);
    msg.setSourceEntity(137U);
    msg.setDestination(10355U);
    msg.setDestinationEntity(63U);
    msg.control_src = 36744U;
    msg.control_ent = 234U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 37U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.48140765668;
    tmp_tmp_msg_0_0.speed_units = 129U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.815090098706;
    tmp_tmp_msg_0_1.z_units = 238U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.966572473173;
    tmp_msg_0.lon = 0.24066441833;
    tmp_msg_0.radius = 0.664973484989;
    msg.reference.set(tmp_msg_0);
    msg.state = 24U;
    msg.proximity = 37U;

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
    msg.setTimeStamp(0.664355996033);
    msg.setSource(30119U);
    msg.setSourceEntity(240U);
    msg.setDestination(38372U);
    msg.setDestinationEntity(113U);
    msg.control_src = 37649U;
    msg.control_ent = 3U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 226U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.365697986815;
    tmp_tmp_msg_0_0.speed_units = 143U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.781064816543;
    tmp_tmp_msg_0_1.z_units = 69U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.807377122949;
    tmp_msg_0.lon = 0.359670974953;
    tmp_msg_0.radius = 0.327661565021;
    msg.reference.set(tmp_msg_0);
    msg.state = 184U;
    msg.proximity = 0U;

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
    msg.setTimeStamp(0.0872433280716);
    msg.setSource(12875U);
    msg.setSourceEntity(49U);
    msg.setDestination(42903U);
    msg.setDestinationEntity(79U);
    msg.control_src = 21078U;
    msg.control_ent = 164U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 166U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.741852489944;
    tmp_tmp_msg_0_0.speed_units = 38U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.323334363688;
    tmp_tmp_msg_0_1.z_units = 69U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.887145737879;
    tmp_msg_0.lon = 0.694145116105;
    tmp_msg_0.radius = 0.523938861126;
    msg.reference.set(tmp_msg_0);
    msg.state = 224U;
    msg.proximity = 57U;

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
    msg.setTimeStamp(0.80135431713);
    msg.setSource(12320U);
    msg.setSourceEntity(91U);
    msg.setDestination(18562U);
    msg.setDestinationEntity(216U);
    msg.ax_cmd = 0.0602709732348;
    msg.ay_cmd = 0.916450936076;
    msg.az_cmd = 0.381289930526;
    msg.ax_des = 0.829359252587;
    msg.ay_des = 0.0385807818295;
    msg.az_des = 0.58808690168;
    msg.virt_err_x = 0.177781028236;
    msg.virt_err_y = 0.554524958498;
    msg.virt_err_z = 0.755169025497;
    msg.surf_fdbk_x = 0.0727521162747;
    msg.surf_fdbk_y = 0.422275096827;
    msg.surf_fdbk_z = 0.467752162588;
    msg.surf_unkn_x = 0.0905698680744;
    msg.surf_unkn_y = 0.508120616449;
    msg.surf_unkn_z = 0.20186154784;
    msg.ss_x = 0.675822199988;
    msg.ss_y = 0.40910393796;
    msg.ss_z = 0.624036938131;

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
    msg.setTimeStamp(0.0925635891891);
    msg.setSource(38258U);
    msg.setSourceEntity(21U);
    msg.setDestination(1833U);
    msg.setDestinationEntity(143U);
    msg.ax_cmd = 0.810024781097;
    msg.ay_cmd = 0.365083876141;
    msg.az_cmd = 0.372082414132;
    msg.ax_des = 0.459399690405;
    msg.ay_des = 0.464957812021;
    msg.az_des = 0.642585755056;
    msg.virt_err_x = 0.228531926973;
    msg.virt_err_y = 0.871592250385;
    msg.virt_err_z = 0.0841409074592;
    msg.surf_fdbk_x = 0.622565895785;
    msg.surf_fdbk_y = 0.593867816665;
    msg.surf_fdbk_z = 0.064049456688;
    msg.surf_unkn_x = 0.12454237915;
    msg.surf_unkn_y = 0.282504725218;
    msg.surf_unkn_z = 0.92846415969;
    msg.ss_x = 0.47859694636;
    msg.ss_y = 0.754723793802;
    msg.ss_z = 0.623008613074;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("XFSJAMVSOXQP");
    tmp_msg_0.dist = 0.116408440574;
    tmp_msg_0.err = 0.518421653528;
    tmp_msg_0.ctrl_imp = 0.541278714081;
    tmp_msg_0.rel_dir_x = 0.993655455934;
    tmp_msg_0.rel_dir_y = 0.683715863408;
    tmp_msg_0.rel_dir_z = 0.587251548633;
    tmp_msg_0.err_x = 0.00587704388663;
    tmp_msg_0.err_y = 0.282802371038;
    tmp_msg_0.err_z = 0.00217964439908;
    tmp_msg_0.rf_err_x = 0.592309104826;
    tmp_msg_0.rf_err_y = 0.165434715345;
    tmp_msg_0.rf_err_z = 0.62016155395;
    tmp_msg_0.rf_err_vx = 0.991170749354;
    tmp_msg_0.rf_err_vy = 0.682299526054;
    tmp_msg_0.rf_err_vz = 0.371723341516;
    tmp_msg_0.ss_x = 0.321927112157;
    tmp_msg_0.ss_y = 0.03118864563;
    tmp_msg_0.ss_z = 0.916898594819;
    tmp_msg_0.virt_err_x = 0.544084929531;
    tmp_msg_0.virt_err_y = 0.185199690679;
    tmp_msg_0.virt_err_z = 0.854383519241;
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
    msg.setTimeStamp(0.508138154097);
    msg.setSource(23148U);
    msg.setSourceEntity(219U);
    msg.setDestination(58176U);
    msg.setDestinationEntity(88U);
    msg.ax_cmd = 0.178976059392;
    msg.ay_cmd = 0.988356566806;
    msg.az_cmd = 0.0202099249856;
    msg.ax_des = 0.841184905982;
    msg.ay_des = 0.479869011802;
    msg.az_des = 0.502784519473;
    msg.virt_err_x = 0.0829360596195;
    msg.virt_err_y = 0.722522488066;
    msg.virt_err_z = 0.00901528387723;
    msg.surf_fdbk_x = 0.692852117524;
    msg.surf_fdbk_y = 0.53858552682;
    msg.surf_fdbk_z = 0.0524898766499;
    msg.surf_unkn_x = 0.881793246645;
    msg.surf_unkn_y = 0.119772981146;
    msg.surf_unkn_z = 0.0156690824949;
    msg.ss_x = 0.934847865858;
    msg.ss_y = 0.955877827693;
    msg.ss_z = 0.0210313607124;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OJPBMZUXJQSWRO");
    tmp_msg_0.dist = 0.551432080468;
    tmp_msg_0.err = 0.334011680592;
    tmp_msg_0.ctrl_imp = 0.0111797101944;
    tmp_msg_0.rel_dir_x = 0.695642965156;
    tmp_msg_0.rel_dir_y = 0.431337985729;
    tmp_msg_0.rel_dir_z = 0.18497207426;
    tmp_msg_0.err_x = 0.573269040838;
    tmp_msg_0.err_y = 0.911705125791;
    tmp_msg_0.err_z = 0.4919205292;
    tmp_msg_0.rf_err_x = 0.077657838129;
    tmp_msg_0.rf_err_y = 0.304935705976;
    tmp_msg_0.rf_err_z = 0.965514518576;
    tmp_msg_0.rf_err_vx = 0.578689269254;
    tmp_msg_0.rf_err_vy = 0.903377573106;
    tmp_msg_0.rf_err_vz = 0.0809326467242;
    tmp_msg_0.ss_x = 0.274409162285;
    tmp_msg_0.ss_y = 0.062361310732;
    tmp_msg_0.ss_z = 0.645878068815;
    tmp_msg_0.virt_err_x = 0.0216765426724;
    tmp_msg_0.virt_err_y = 0.211178741967;
    tmp_msg_0.virt_err_z = 0.616458841612;
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
    msg.setTimeStamp(0.101711308427);
    msg.setSource(24276U);
    msg.setSourceEntity(194U);
    msg.setDestination(27730U);
    msg.setDestinationEntity(251U);
    msg.s_id.assign("MIYZJGYMGBZNIPIZDKTRQGMBOS");
    msg.dist = 0.667075220637;
    msg.err = 0.132524947746;
    msg.ctrl_imp = 0.496403841705;
    msg.rel_dir_x = 0.105220178453;
    msg.rel_dir_y = 0.923511860153;
    msg.rel_dir_z = 0.929479241985;
    msg.err_x = 0.184906093738;
    msg.err_y = 0.0486401505717;
    msg.err_z = 0.942025938448;
    msg.rf_err_x = 0.573451415293;
    msg.rf_err_y = 0.645038534262;
    msg.rf_err_z = 0.471286520064;
    msg.rf_err_vx = 0.681017632683;
    msg.rf_err_vy = 0.446787309257;
    msg.rf_err_vz = 0.178560219464;
    msg.ss_x = 0.263410506968;
    msg.ss_y = 0.0858357142987;
    msg.ss_z = 0.65891238141;
    msg.virt_err_x = 0.265508974469;
    msg.virt_err_y = 0.545655013795;
    msg.virt_err_z = 0.301525624835;

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
    msg.setTimeStamp(0.239549885456);
    msg.setSource(62445U);
    msg.setSourceEntity(37U);
    msg.setDestination(7073U);
    msg.setDestinationEntity(77U);
    msg.s_id.assign("SUXYAKQPVZPERHLMGBIBBPDLYAINMMPWCDERGHGGUELAJGPCMSKHQCKSIWHPQAKVJTTWVRLINTYOWFJTDJORPNXCZAPLTTLUTKTECPNHMDZHZMLYSYXAUNXZURIOHACBZGOFUQDXWFDWGVZZQOQHKAXJNJWOVEEOVEFBYCHHYVWPNKCNTVAZZMIGSBYXSOKRVUIEGSMKAQBNRFRXQVIBFRCMFODEQXCJUJSLLDFQYYIMDDSIJJ");
    msg.dist = 0.0564245400821;
    msg.err = 0.750957975915;
    msg.ctrl_imp = 0.759476092524;
    msg.rel_dir_x = 0.0105545279622;
    msg.rel_dir_y = 0.684956945969;
    msg.rel_dir_z = 0.375376421384;
    msg.err_x = 0.0983195329406;
    msg.err_y = 0.111269468214;
    msg.err_z = 0.88218323332;
    msg.rf_err_x = 0.781032014844;
    msg.rf_err_y = 0.752937341841;
    msg.rf_err_z = 0.234982712795;
    msg.rf_err_vx = 0.381191037034;
    msg.rf_err_vy = 0.621979666279;
    msg.rf_err_vz = 0.249271757924;
    msg.ss_x = 0.476806657313;
    msg.ss_y = 0.801239026722;
    msg.ss_z = 0.207051615468;
    msg.virt_err_x = 0.808210896907;
    msg.virt_err_y = 0.0622282906261;
    msg.virt_err_z = 0.852252916123;

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
    msg.setTimeStamp(0.675535375057);
    msg.setSource(41917U);
    msg.setSourceEntity(93U);
    msg.setDestination(43509U);
    msg.setDestinationEntity(85U);
    msg.s_id.assign("NYFNTGDBJOSJIDNMOUOBCLBNKEWYZFUDHSBUMCUDCUWORVPLDQLLVHEIYIVJRLKMYCEZSAKGATOVZACQNMJODQQVUJGLBRDARNCPHIKFJDQHBXRAQXVHXQPWIKFNAKAZCIHMYHRRXGGAENVTSRGFWEOLWGLPXTYBTSV");
    msg.dist = 0.431910058523;
    msg.err = 0.108172724395;
    msg.ctrl_imp = 0.698390238484;
    msg.rel_dir_x = 0.45130420336;
    msg.rel_dir_y = 0.579741794328;
    msg.rel_dir_z = 0.653430030478;
    msg.err_x = 0.51686928974;
    msg.err_y = 0.243152558953;
    msg.err_z = 0.268753662942;
    msg.rf_err_x = 0.116570785437;
    msg.rf_err_y = 0.498224210923;
    msg.rf_err_z = 0.873903804583;
    msg.rf_err_vx = 0.515308846337;
    msg.rf_err_vy = 0.106310414187;
    msg.rf_err_vz = 0.576259944774;
    msg.ss_x = 0.692502681059;
    msg.ss_y = 0.633293284863;
    msg.ss_z = 0.373479248459;
    msg.virt_err_x = 0.589647708555;
    msg.virt_err_y = 0.656945873563;
    msg.virt_err_z = 0.538355737497;

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
    msg.setTimeStamp(0.192575512487);
    msg.setSource(53342U);
    msg.setSourceEntity(226U);
    msg.setDestination(13555U);
    msg.setDestinationEntity(82U);
    msg.timeout = 21383U;
    msg.rpm = 0.986365407606;
    msg.direction = 204U;
    msg.custom.assign("IYPEMDSCEFKEXQUAMWETFBAJULKXPUXTAOKVCLBRLPLZPINIYQXHRQQCRGHQGYHKSRIZHUYRPWPZLGCUNMZYFFCIWWOSIBMGVUVOSNWZLOBLXUEHADUDJWTPQECKIMHNAOZMGTSRJVXOLGIEHBDQHCRVODYKAGVRSBMEBFCJVZYFNJKNWZWTNMQDAHOAUJQRLBIEJNFJPZUBGIXTKB");

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
    msg.setTimeStamp(0.638077626506);
    msg.setSource(14680U);
    msg.setSourceEntity(25U);
    msg.setDestination(26877U);
    msg.setDestinationEntity(91U);
    msg.timeout = 11208U;
    msg.rpm = 0.346305100602;
    msg.direction = 179U;
    msg.custom.assign("IAFVCOIOSCEZYWBCQETZBUSEBCGHLYYCSZMIMNFDXGSDNRQYFXOOGIJULUPHHETUWNNNGDFOTBNWNYSASRIJKXGDMTLHUFTCQFRVOJRRWYNIOPLZQWKXVETZ");

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
    msg.setTimeStamp(0.630819907297);
    msg.setSource(14987U);
    msg.setSourceEntity(150U);
    msg.setDestination(48058U);
    msg.setDestinationEntity(219U);
    msg.timeout = 16696U;
    msg.rpm = 0.785303082909;
    msg.direction = 151U;
    msg.custom.assign("MSRTTAOWKMBKSAPUEXAOSMGPBWBZWHGXCSJJTFUDGFAJLUOVBIONKYYPAFSVLGCOPHSKHTFVLFAKFZQIX");

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
    msg.setTimeStamp(0.132146127709);
    msg.setSource(61859U);
    msg.setSourceEntity(76U);
    msg.setDestination(48255U);
    msg.setDestinationEntity(60U);
    msg.formation_name.assign("CIGFCMALIERKTOOPZOHKMWOJJXPJLVUCDIVXJJKGXCUGVLLBGAGUUTPEAAGNCHOYSENUNIVFTSWIXKEHHASAAJLWQRMTZIPDQZ");
    msg.type = 175U;
    msg.op = 211U;
    msg.group_name.assign("CPFGZBDMSOHVOGCIMQYQGVKHBHPXIUQVJNZCKZDMSDBAZQATSYMWRPOSLBGNGIERVEKBTAFRUBUQUTOXWZFADYNRAQURJGCTYXIRIGYWSUYOMVTXEIDPFILCVEXFHHZIWTEUNEECSLPJXVHWBJDVNATGZULSCTZDFORDTQJOLPGKJXJXSYYHULFNLKBOVVB");
    msg.plan_id.assign("NIZHRUHQECTCPAEKGSQILURPRSPUQRJNYMJAGYEDZPSWBADOLHXDNQVHUHTNWLOVXMZZCIFUAJMDGNHPIFCKPAATRVVULCWVGJLKQYLCVMWWIELTKFEKOWXXRUMQRZSYHTGOBEVNLIYBXMUFHBYJKDCXAOQSKCYIJXXBRATGOHHYFBRPBNOKFLBSOONZPWFUSGZZTTFIMWSAWVNIBMUSELJJQBIGPDAOFRZJESYDPKXCD");
    msg.description.assign("ACYWAJUAZDSLBTOHHINGOSZ");
    msg.reference_frame = 138U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17465U;
    tmp_msg_0.off_x = 0.774587605107;
    tmp_msg_0.off_y = 0.380419550921;
    tmp_msg_0.off_z = 0.327016144426;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.879382716017;
    msg.leader_speed_min = 0.843899288587;
    msg.leader_speed_max = 0.379484805454;
    msg.leader_alt_min = 0.657397140059;
    msg.leader_alt_max = 0.801671106877;
    msg.pos_sim_err_lim = 0.344795032182;
    msg.pos_sim_err_wrn = 0.324498471086;
    msg.pos_sim_err_timeout = 27871U;
    msg.converg_max = 0.738813606292;
    msg.converg_timeout = 46481U;
    msg.comms_timeout = 45536U;
    msg.turb_lim = 0.93120564957;
    msg.custom.assign("SKIIYIRMJJKECUPTYMUXWXYMZIHAXVUKUGWRSGZCOYJXRJMBLOMWBWJAFVQFLCXNQSSTVPMSEKSQOYOLZ");

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
    msg.setTimeStamp(0.035328622618);
    msg.setSource(14392U);
    msg.setSourceEntity(224U);
    msg.setDestination(63038U);
    msg.setDestinationEntity(196U);
    msg.formation_name.assign("RBLFHEDWTDFKNRIFHRESAVLVZMXXVSBMPBMIYYVKUIMOHZHFFIYBWLOMTVZCWQARQGLDSPWCXJCOKHIWUULSNVMOIWJFAJOSTMDBPKGALMTDHXTGSJCIPARUOWCZHRGNGEFTWUGAUENBNBECOPSYIVJQEBDIFXLYRRWPZXTKDSMJGOSTNXCJZQXHB");
    msg.type = 108U;
    msg.op = 246U;
    msg.group_name.assign("JLPEBCTFXRITAYJJGVHSTLNXRKPZYRNADPCXQFEOYHVPVBADWOWDCCULMUD");
    msg.plan_id.assign("LDUSKWCZYRPADEHNVBSUVSFKPGMXYNQZQJLAXNYVFTRXKIKONBEQWEJRZFOQDUJLOBGOCGYOLCAUZZHPEUSXCBKDQCTKHELWLBIJTIJXJXHWESBGYJOZHAABRNPYJECFOZNUQGCHCMPJQHVCNSPDWWTVPWOPEI");
    msg.description.assign("YLNCWWAMZIGXBALYVFZIDYQICQVCIEERGIZYOTBGOTHULNLGPFTGDVRIDYJVVKNFMEJQNNBSWFARJYQPRDCMAUVZNZPB");
    msg.reference_frame = 26U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43960U;
    tmp_msg_0.off_x = 0.706548449242;
    tmp_msg_0.off_y = 0.959781584175;
    tmp_msg_0.off_z = 0.591726693282;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.463599598682;
    msg.leader_speed_min = 0.0609294403747;
    msg.leader_speed_max = 0.398905089445;
    msg.leader_alt_min = 0.714705312385;
    msg.leader_alt_max = 0.844208394216;
    msg.pos_sim_err_lim = 0.780899893986;
    msg.pos_sim_err_wrn = 0.698932209247;
    msg.pos_sim_err_timeout = 30991U;
    msg.converg_max = 0.0887043895482;
    msg.converg_timeout = 429U;
    msg.comms_timeout = 48980U;
    msg.turb_lim = 0.749597004639;
    msg.custom.assign("UETMWEWBLEJUPRQIMSXSQOCUBFZQHRKOUGISPFEYLFIPXZTOLIGCVN");

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
    msg.setTimeStamp(0.615273000039);
    msg.setSource(54200U);
    msg.setSourceEntity(250U);
    msg.setDestination(41532U);
    msg.setDestinationEntity(136U);
    msg.formation_name.assign("RJCFYCXOPQYJSKAGRHLAZEFBMEYWKXIBU");
    msg.type = 54U;
    msg.op = 46U;
    msg.group_name.assign("ABULKEGSXQYAPRIJGISHNPTXPVUPDBQXBHRCVORGMSJXPMRAKHSYTQZAZGKWJIZIZBOTUWQEBUXNVYEVMJXFGVMFCYLQLTJUPX");
    msg.plan_id.assign("DJVJSORZKVLTLAWMRTZPFIESXNCCXXGIFLDQXLZQNIQFPIEAIPIFYSGNHSTLCJOUWDKVNAMVFIJVMZWEYYBPWQYULWRMPUUMBAXFMRFPDMCFLGBTTZNJIAEJRGXCOKYULDWIHNZAGCOYBPUUERJRTZBEHADJBRCDYODKYSOVGKHXTHKSGCL");
    msg.description.assign("XNKKWIIAGHJEAYOYCJGFAEVTCCFSMBHVBSIJIFWJHRPXGMHIYYDKRHGZPOBEUECHMMRZPLCHZBRNJLOFQVNCXMIEUOATTTPBOMLJDESVMNFCKRYNWFREAZASUQWQITJTPKY");
    msg.reference_frame = 177U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 16026U;
    tmp_msg_0.off_x = 0.74691722806;
    tmp_msg_0.off_y = 0.413080785886;
    tmp_msg_0.off_z = 0.711492329738;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.976956746279;
    msg.leader_speed_min = 0.764813009572;
    msg.leader_speed_max = 0.901615210251;
    msg.leader_alt_min = 0.671913844222;
    msg.leader_alt_max = 0.354397922205;
    msg.pos_sim_err_lim = 0.898830477285;
    msg.pos_sim_err_wrn = 0.768746368591;
    msg.pos_sim_err_timeout = 4460U;
    msg.converg_max = 0.919254373058;
    msg.converg_timeout = 63349U;
    msg.comms_timeout = 44720U;
    msg.turb_lim = 0.35770307518;
    msg.custom.assign("ZTHEJNNTUPJRMVMBBWWNDXQDHMBZDOIPISGQYVQLFHSTBETOZKGWKPXRVOSHACZPNFIIFZALSCEDLNLEFHCMWFFQXNTXBWISVYQIJRZPMBFRHIRTDLYJXUHCXUXTDLACVZXJMNXMGWFEFRPRBATBQLEJSEKMGOYTYJVHSTSEQUOKKMAPUJKCIGLYILYAUGNVHSEMDEHZUAK");

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
    msg.setTimeStamp(0.269180835516);
    msg.setSource(34494U);
    msg.setSourceEntity(191U);
    msg.setDestination(59857U);
    msg.setDestinationEntity(62U);
    msg.timeout = 46211U;
    msg.lat = 0.971828567912;
    msg.lon = 0.0108988887153;
    msg.z = 0.321785970542;
    msg.z_units = 241U;
    msg.speed = 0.0213967084578;
    msg.speed_units = 47U;
    msg.custom.assign("HALZIYQPJCICLEMLUOTMBLYAQILVXMSXKRVDLNNRGQONHCWZPXWBHHQKEWDAOSDOQTZPRVNWTSBHSQHTOTURMPUWCDKGVJVHGKPUJOWCLVGDHJZNYQEXICITJFHTOYHZUMGNMTZBVBRELGXKSJSIFDKFQFWCAYGSRBXIBTGIAKVDNVYYRUTKUFFJAKYWSAPKWMPEDIPXPFDEUNOAWOP");

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
    msg.setTimeStamp(0.870598619249);
    msg.setSource(31733U);
    msg.setSourceEntity(252U);
    msg.setDestination(52023U);
    msg.setDestinationEntity(108U);
    msg.timeout = 5579U;
    msg.lat = 0.659085058372;
    msg.lon = 0.03192085947;
    msg.z = 0.891365551205;
    msg.z_units = 201U;
    msg.speed = 0.205991121098;
    msg.speed_units = 173U;
    msg.custom.assign("HYLKNWHZWV");

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
    msg.setTimeStamp(0.115133755911);
    msg.setSource(49943U);
    msg.setSourceEntity(16U);
    msg.setDestination(12842U);
    msg.setDestinationEntity(31U);
    msg.timeout = 38308U;
    msg.lat = 0.985736785117;
    msg.lon = 0.828422215804;
    msg.z = 0.235359940577;
    msg.z_units = 233U;
    msg.speed = 0.187955173501;
    msg.speed_units = 59U;
    msg.custom.assign("YYBUKIODLVOLJNWEBPSXOVOZNKHZQTQCIWPEIYRGEKTPSGXUWMVCWIHSKQHGHRBSXYGIZXABWZYGHHMKNDDMJHPUSONVUWBFMUGKNBYQIUOEKKETDPFTVQESEZGMPDVJWHAVEDZPALQOYLRKDXJFJZBDZA");

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
    msg.setTimeStamp(0.537678722126);
    msg.setSource(1559U);
    msg.setSourceEntity(35U);
    msg.setDestination(30749U);
    msg.setDestinationEntity(33U);
    msg.timeout = 17942U;
    msg.lat = 0.960988599268;
    msg.lon = 0.566153818402;
    msg.z = 0.234679625858;
    msg.z_units = 139U;
    msg.speed = 0.923402593391;
    msg.speed_units = 26U;
    msg.custom.assign("VYGTPJRQZRFEDZZHNJAWUDEIOFEBXEPIBETBOVQHDZSYNNRCIMOWCUNXFVWRXYXFPGESTKCRPMKUVGADRXWBXXXNLMZAFHLICOJDZJHLGJLQJKCMVMHRWLKMWNUIEOIIJFMLMRQZGXSYCSNEDPNFCCBSXTEQJGWODYSRSAMIQKVNAUYKUJAYZBILTABBTJDVVBUTHKUYHGZWIWUTQLPNHTAPPOOYURPFLQFDCTOHVGKOGLSP");

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
    msg.setTimeStamp(0.944932983418);
    msg.setSource(621U);
    msg.setSourceEntity(252U);
    msg.setDestination(11105U);
    msg.setDestinationEntity(119U);
    msg.timeout = 63301U;
    msg.lat = 0.386241391883;
    msg.lon = 0.425730154749;
    msg.z = 0.232875562131;
    msg.z_units = 230U;
    msg.speed = 0.335705947444;
    msg.speed_units = 25U;
    msg.custom.assign("CJMXKIKJNJWAALKZTDTHXXSLFLPUPMPYMSXPWDRFDREKEOXTFITKEKXYQIRSWGJREIMXRMVTQAXPRNOBWJZTTOBSCRMRTSGHUCAECZHSNVVLZBCUNBODEWEPXZPNXVWQUVDJAOVBBOLGPIHUSFQPZLYFOODBFCBSQKZRQANHUYUSDOQFNJFMNCYAYGZYKAVCLELRGMNWFMKGYBDFTZHSANKWWAGJBCDZJDVGGOUHUHEL");

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
    msg.setTimeStamp(0.041668114553);
    msg.setSource(31632U);
    msg.setSourceEntity(94U);
    msg.setDestination(38086U);
    msg.setDestinationEntity(69U);
    msg.timeout = 9795U;
    msg.lat = 0.289529266964;
    msg.lon = 0.889376199403;
    msg.z = 0.347076831644;
    msg.z_units = 95U;
    msg.speed = 0.0209099713601;
    msg.speed_units = 183U;
    msg.custom.assign("MHODCVKWGGJITPPSSGWEXKUEZACBQQ");

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
    msg.setTimeStamp(9.7641633602e-05);
    msg.setSource(21016U);
    msg.setSourceEntity(222U);
    msg.setDestination(23396U);
    msg.setDestinationEntity(3U);
    msg.arrival_time = 0.561298094222;
    msg.lat = 0.338990441878;
    msg.lon = 0.489748841201;
    msg.z = 0.0713801831113;
    msg.z_units = 77U;
    msg.travel_z = 0.674797175554;
    msg.travel_z_units = 39U;
    msg.delayed = 0U;

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
    msg.setTimeStamp(0.598334655263);
    msg.setSource(9986U);
    msg.setSourceEntity(161U);
    msg.setDestination(14607U);
    msg.setDestinationEntity(130U);
    msg.arrival_time = 0.514203553116;
    msg.lat = 0.726351471215;
    msg.lon = 0.381325055816;
    msg.z = 0.891502550056;
    msg.z_units = 222U;
    msg.travel_z = 0.710474908016;
    msg.travel_z_units = 238U;
    msg.delayed = 65U;

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
    msg.setTimeStamp(0.279698809239);
    msg.setSource(65106U);
    msg.setSourceEntity(32U);
    msg.setDestination(11243U);
    msg.setDestinationEntity(139U);
    msg.arrival_time = 0.445692135442;
    msg.lat = 0.624923060551;
    msg.lon = 0.377738550648;
    msg.z = 0.742222398957;
    msg.z_units = 240U;
    msg.travel_z = 0.913401940936;
    msg.travel_z_units = 186U;
    msg.delayed = 131U;

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
    msg.setTimeStamp(0.360322370076);
    msg.setSource(10990U);
    msg.setSourceEntity(4U);
    msg.setDestination(44253U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.695731063815;
    msg.lon = 0.820013722561;
    msg.z = 0.466787072559;
    msg.z_units = 251U;
    msg.speed = 0.236798953903;
    msg.speed_units = 74U;
    msg.bearing = 0.319114602684;
    msg.cross_angle = 0.797174874175;
    msg.width = 0.276044001657;
    msg.length = 0.938038930001;
    msg.coff = 185U;
    msg.angaperture = 0.106041522396;
    msg.range = 32158U;
    msg.overlap = 121U;
    msg.flags = 59U;
    msg.custom.assign("NRWYOQGMYFICUWMOZDQULZGPXOLVTQXSTZEAWJBRTPOIYBTGBMGFFXZTOXGFJKGVPSZPERIKXAACEYNWLIRBQTNADDHNEXOBBRPMHNBVRXHQZGCOCFKERYHSZHJFWUTUYIRMFBVUPTWOUPEWQDPJWEMCVTPZBYJSSAASJCCNCMSIWOQHUWZIIR");

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
    msg.setTimeStamp(0.188255357061);
    msg.setSource(12223U);
    msg.setSourceEntity(9U);
    msg.setDestination(35728U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.917930908301;
    msg.lon = 0.328994878907;
    msg.z = 0.781228436286;
    msg.z_units = 245U;
    msg.speed = 0.568524754801;
    msg.speed_units = 243U;
    msg.bearing = 0.87670807418;
    msg.cross_angle = 0.732722042259;
    msg.width = 0.346472032628;
    msg.length = 0.00324801403187;
    msg.coff = 96U;
    msg.angaperture = 0.497564490104;
    msg.range = 50166U;
    msg.overlap = 219U;
    msg.flags = 131U;
    msg.custom.assign("OODLMXLJZVMCPYGVEYGDUKNWJRJMAAXSVNBKIFTECEBECGUZPZRYOKGWPBLXQJUOXFDHYHZTZDBFLQSHDMVYOSWUVBCWRRUFCTCKDBKNEADAAAIUN");

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
    msg.setTimeStamp(0.541971626265);
    msg.setSource(62980U);
    msg.setSourceEntity(246U);
    msg.setDestination(17485U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.20622210872;
    msg.lon = 0.459070468894;
    msg.z = 0.140528137454;
    msg.z_units = 96U;
    msg.speed = 0.374307735053;
    msg.speed_units = 83U;
    msg.bearing = 0.938838750433;
    msg.cross_angle = 0.620357039296;
    msg.width = 0.584406742158;
    msg.length = 0.402738576538;
    msg.coff = 135U;
    msg.angaperture = 0.808868720029;
    msg.range = 18701U;
    msg.overlap = 163U;
    msg.flags = 208U;
    msg.custom.assign("ABZJLBMXREUYUHIWVLBCNMGUTPJPSZGAJGKTMOXYDPUMXJOFKSEGQDSASWIHILDGPNCMZIRSKCYMRDIHBPIUWKQVCZYWRZYCOHYVAEOQLGGVOZRR");

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
    msg.setTimeStamp(0.326710030116);
    msg.setSource(60562U);
    msg.setSourceEntity(139U);
    msg.setDestination(40498U);
    msg.setDestinationEntity(211U);
    msg.timeout = 44890U;
    msg.lat = 0.897865180616;
    msg.lon = 0.625332515102;
    msg.z = 0.967165851494;
    msg.z_units = 37U;
    msg.speed = 0.555063860628;
    msg.speed_units = 220U;
    msg.syringe0 = 206U;
    msg.syringe1 = 210U;
    msg.syringe2 = 169U;
    msg.custom.assign("FIGVXOWNXBWIAYQKTEAGGGHNPJOTNZNKVDLFRTYRFUJENQHVSMFGQCLQTRVINYPIYNRTLRWMYCQSPAHDEVJEBIFWDXPSWQMAJTHLSMF");

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
    msg.setTimeStamp(0.85804227182);
    msg.setSource(26548U);
    msg.setSourceEntity(94U);
    msg.setDestination(37658U);
    msg.setDestinationEntity(137U);
    msg.timeout = 15784U;
    msg.lat = 0.1723708003;
    msg.lon = 0.45002526321;
    msg.z = 0.35815656532;
    msg.z_units = 245U;
    msg.speed = 0.0934038105739;
    msg.speed_units = 67U;
    msg.syringe0 = 175U;
    msg.syringe1 = 229U;
    msg.syringe2 = 78U;
    msg.custom.assign("IVIQUIYGNVUKDZSJZJRLYOSNODPXNHSZXTCYEZGIKPJXULKOGEBBGOFDFTTTJUZGEVYMXXWTBLDAPMEOSWVVHOLXKSYMFBWJCYLNGEWMWDRKHHXRDAKCZNMJLFZHSMAPAUAPPAPCWOQFGACICDWRHFNCPAYTEBCUEUWHJNNSVIGIFOBVWZFRRTT");

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
    msg.setTimeStamp(0.692218387004);
    msg.setSource(62185U);
    msg.setSourceEntity(65U);
    msg.setDestination(6820U);
    msg.setDestinationEntity(109U);
    msg.timeout = 12967U;
    msg.lat = 0.0321921324716;
    msg.lon = 0.197106004217;
    msg.z = 0.575443246008;
    msg.z_units = 102U;
    msg.speed = 0.675666073614;
    msg.speed_units = 121U;
    msg.syringe0 = 184U;
    msg.syringe1 = 245U;
    msg.syringe2 = 228U;
    msg.custom.assign("DTZQRFGHFJACSJKEDAHYRCCHOZBPSBWJEBVVDPXCEFVTYIWGIOYARGGTSQEIVBTLDEDHXUIUACNVYZXLRASXQGKCGAHWVSCOUXDTHPNEPVUDTHFPVJLJQKMUIDGDCBNINMAISLWCBPVDRRKFPUKSESTZJWBZQHWKPECWOGNJZFMOLXFXJNHREMLOOFGMXQQXTYFWROAARQBBAHZKYYYNMMTKWYYQUNGRSZEPKUOIXKLITQLBWLJJPZVNUMZSN");

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
    msg.setTimeStamp(0.99507698798);
    msg.setSource(64733U);
    msg.setSourceEntity(49U);
    msg.setDestination(19142U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.812128741409);
    msg.setSource(63210U);
    msg.setSourceEntity(124U);
    msg.setDestination(59526U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.598591408849);
    msg.setSource(11437U);
    msg.setSourceEntity(193U);
    msg.setDestination(58850U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.112114656604);
    msg.setSource(26593U);
    msg.setSourceEntity(46U);
    msg.setDestination(3679U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.799166427157;
    msg.lon = 0.532469165333;
    msg.z = 0.939477661739;
    msg.z_units = 172U;
    msg.speed = 0.741325661139;
    msg.speed_units = 82U;
    msg.takeoff_pitch = 0.210340356417;
    msg.custom.assign("GNFJOPIUXQDFVQXZDFZANHEGEEYDGFKYHCGPKWBENMKBFHLAJLRJKIIQMJBUCSUCMXWRQBDWMZTAKWINIPUGBXPOXVVSIRVEHDILFWFUGCTQYRCEBONIZOLDALHJY");

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
    msg.setTimeStamp(0.691920142895);
    msg.setSource(60578U);
    msg.setSourceEntity(215U);
    msg.setDestination(63318U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.337844609583;
    msg.lon = 0.0219652296917;
    msg.z = 0.248963778825;
    msg.z_units = 153U;
    msg.speed = 0.386117056323;
    msg.speed_units = 234U;
    msg.takeoff_pitch = 0.796664029376;
    msg.custom.assign("NLPTYHIJDAVPUNIBWHVNVRDFDSEACRYBDBQMTNQLOIKFVWYOVMYRPJNPLJITLDKMZFGGCGZIMFGAJPKGOQKKEXNVAJDEGPQTHHYSEWY");

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
    msg.setTimeStamp(0.699104397574);
    msg.setSource(13636U);
    msg.setSourceEntity(189U);
    msg.setDestination(48650U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.580926127735;
    msg.lon = 0.396188413906;
    msg.z = 0.226948964399;
    msg.z_units = 10U;
    msg.speed = 0.438054608191;
    msg.speed_units = 10U;
    msg.takeoff_pitch = 0.65089773801;
    msg.custom.assign("ZVNLUCKMJZTBGOJYIFVPSSEXGDSGDAAPQTJIQXHRWEHMAKGFKPKQDAHFSYCYDREAHBCQLVUPRQAYUVXHSA");

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
    msg.setTimeStamp(0.731528124784);
    msg.setSource(38206U);
    msg.setSourceEntity(233U);
    msg.setDestination(38736U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.633743480449;
    msg.lon = 0.435398174965;
    msg.z = 0.907421658184;
    msg.z_units = 160U;
    msg.speed = 0.31772962563;
    msg.speed_units = 163U;
    msg.abort_z = 0.800232647681;
    msg.bearing = 0.369972181187;
    msg.glide_slope = 207U;
    msg.glide_slope_alt = 0.178830541651;
    msg.custom.assign("HQBGWKYHUGHUYJZYPSLOWGIVJNRSLCGSAPWNBSYXUYSBDBZRWMYFTOFIQCVOVMKTETXGMMSKGPOELJOLACVXHLUANLKGNQBYWHFISNTVFEEE");

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
    msg.setTimeStamp(0.314186648197);
    msg.setSource(53285U);
    msg.setSourceEntity(97U);
    msg.setDestination(27252U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.812128659489;
    msg.lon = 0.097100825405;
    msg.z = 0.791294934853;
    msg.z_units = 116U;
    msg.speed = 0.817278624324;
    msg.speed_units = 92U;
    msg.abort_z = 0.532385309389;
    msg.bearing = 0.863182254956;
    msg.glide_slope = 7U;
    msg.glide_slope_alt = 0.726086159006;
    msg.custom.assign("FWVMCRRYKGVFBWTTLRHJBNCKWZERSWZEILNPT");

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
    msg.setTimeStamp(0.0769704546577);
    msg.setSource(26732U);
    msg.setSourceEntity(26U);
    msg.setDestination(63155U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.178655648621;
    msg.lon = 0.489258541221;
    msg.z = 0.410453560219;
    msg.z_units = 184U;
    msg.speed = 0.609649832155;
    msg.speed_units = 212U;
    msg.abort_z = 0.748746555906;
    msg.bearing = 0.945698002856;
    msg.glide_slope = 17U;
    msg.glide_slope_alt = 0.541634109157;
    msg.custom.assign("XXCYIOCLKQGUECTDTMLMIAIWSKIQFLCOKMUSZCRQWYNFWGDUUGWTBEAYYGNYVGXJHZDRPACWEKRHDUZMSESJBJVGJQPUQQTSHWSXNMTDSMENZGJH");

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
    msg.setTimeStamp(0.471596086674);
    msg.setSource(39512U);
    msg.setSourceEntity(68U);
    msg.setDestination(57851U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.703008802904;
    msg.lon = 0.232374570399;
    msg.speed = 0.906942422227;
    msg.speed_units = 42U;
    msg.limits = 79U;
    msg.max_depth = 0.956880924777;
    msg.min_alt = 0.527182948842;
    msg.time_limit = 0.898975932614;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.956036822013;
    tmp_msg_0.lon = 0.0613747489594;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("PEUSIJPZILWRRABXVFQEEWTNLQPABXJYFQHEROMUMLJJEHMMZMTBC");
    msg.custom.assign("DJDCVSISQVQGJHMYRHBWSKHSINNAMNVOHLIRMOKDDQAFGFESLPEKCPDGSHHTFPBUNKIYYOQTSHQWJOTTCLRCTFECLKQLSXGMOGXZOEFSWUCQMZDKUMZADKFMGTKAZVKWJAUIEPLRTN");

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
    msg.setTimeStamp(0.635515452297);
    msg.setSource(6422U);
    msg.setSourceEntity(34U);
    msg.setDestination(41276U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.780079817147;
    msg.lon = 0.0940361233809;
    msg.speed = 0.752614925434;
    msg.speed_units = 77U;
    msg.limits = 154U;
    msg.max_depth = 0.369470935368;
    msg.min_alt = 0.307057738597;
    msg.time_limit = 0.316675993306;
    msg.controller.assign("ETLSLZVDWULXBGNHEKFIRZWKXARFZSKHZFIYKOUJGCTVUSMBVOCHSOKZLDCCYIABRUNKWXRQJMPHKULMFLQEOSLSPWIPBJCFVRBHSCVMRSFIABHCMPKNGCKTBDWFANPRVGTEERWVUAAAXVSYTHWWGIUIUDVTQTGASZDJENGMROFEXDQNQYZNZPLHQYBIDGTQCRNPXBNJHIUUQJXWI");
    msg.custom.assign("BQOBOGVFLILUFRIZKYDNACWIJRWBSSPIUVFMYQAGNHLDZTRYXZHKSTRYHNIGCKTVEWQKT");

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
    msg.setTimeStamp(0.0951584363975);
    msg.setSource(57490U);
    msg.setSourceEntity(79U);
    msg.setDestination(4553U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.435961791809;
    msg.lon = 0.65147009968;
    msg.speed = 0.918928930764;
    msg.speed_units = 219U;
    msg.limits = 130U;
    msg.max_depth = 0.788356431074;
    msg.min_alt = 0.709144773489;
    msg.time_limit = 0.518830748021;
    msg.controller.assign("HJEMUPRRAAFXYTWCEPYUTSQZEYLKKGFHLEKVYKJTZLGWQGGVNRFFJTICXYUWWJIOBTRTLBLDPQNVZLNQQNONKPEZDQTMCOIMIYEGAISRMJOPFPZOJYEUJKHYCEFKVZZQXNSWFTVCKBHZJBRKUBGBAZLTBWXRNUFHSQDRSSULARY");
    msg.custom.assign("MLRDYJGGDMURHJYIXSZQKGKDOIDXUOMJMPEVLCHLGGJBPTEQEAMV");

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
    msg.setTimeStamp(0.23980026021);
    msg.setSource(43140U);
    msg.setSourceEntity(38U);
    msg.setDestination(64869U);
    msg.setDestinationEntity(99U);
    msg.target.assign("UBQGJKKGAHDVIWVOOYCERRXYUSIONFKVMYJCSBDTQHFERTSTOJIOUGNPVFWGC");
    msg.max_speed = 0.752673737954;
    msg.speed_units = 99U;
    msg.lat = 0.648877279881;
    msg.lon = 0.62522642371;
    msg.z = 0.274224331786;
    msg.z_units = 188U;
    msg.custom.assign("HOJQNWUVMQNGSQCACIVTIFCWHJUJCBEUECVLVZISOJLKLRXEDVNNIPJGEBDRSQXHYSNTHZXCWMFRBFROKDXBSEQIPMZSWUEXGZRITZFPWOXTLYCZNVVGFDPWHQSIQKIGACBLRWQXAJFXPKHPIKXOATRPJEGTBDLWLXOZUCUSAVAEMUVMGJNKYDBDDBTOPNKQMMFIBMRGUKKKOYYUTEZAHOTYFEFNJLNLPOPSYHFWYWTYZRUAZDYGMVGM");

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
    msg.setTimeStamp(0.942366340191);
    msg.setSource(64032U);
    msg.setSourceEntity(216U);
    msg.setDestination(54064U);
    msg.setDestinationEntity(83U);
    msg.target.assign("ZAZVHNOEEKXYONDQXIKIVXRKTWNDSAZWSPRVRNGOZBJVMBYLLZLRCFMPRPSLGQRIPEUJXAHFYUMUACMZEQUNVZJVDWVNNHYGRKQCBQUYRHDAQNWKOPMHRHFLGETCWJZPCITTBUQOLXWQTZSGCEAFXLIHSSDTPBTYBZJSQSTJWPNMCWDGXFOOCYBGUFYBUEGJUDIFKAWSTJDAEKFVAOWKAIKXGTJDFPRFLMCEHXXNBVMMHUI");
    msg.max_speed = 0.585313372142;
    msg.speed_units = 241U;
    msg.lat = 0.715171917854;
    msg.lon = 0.0556168253055;
    msg.z = 0.992502644196;
    msg.z_units = 128U;
    msg.custom.assign("CUWEXWYKUXIOSP");

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
    msg.setTimeStamp(0.0420424412823);
    msg.setSource(4339U);
    msg.setSourceEntity(225U);
    msg.setDestination(61178U);
    msg.setDestinationEntity(231U);
    msg.target.assign("YYCJPPQTKLQKUFBPOWCDDJSANZTGOSBALPCJPCMWWQKIVFAZDZGHJMORKNPXQMTTEESUPGERUSHJRLRHEMITSVBNDZXCIIBPMVWGGPYOXCRWYLESZ");
    msg.max_speed = 0.362430458923;
    msg.speed_units = 244U;
    msg.lat = 0.614792687642;
    msg.lon = 0.429097850196;
    msg.z = 0.175969238099;
    msg.z_units = 177U;
    msg.custom.assign("ERZTEWLTNGPJOEGWUROVXCTQKVZWDUHAWOTPRPOFWDVGIFJCGKDQNWEJRSCNIZZHTXNYZMULCDBGTCICFOMXXHCZLDCLFQFYXMDMZJWFGIIAHBJMSAVDJLSLQRSUABVOXWBTYAREI");

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
    msg.setTimeStamp(0.0794817228713);
    msg.setSource(51416U);
    msg.setSourceEntity(171U);
    msg.setDestination(62414U);
    msg.setDestinationEntity(119U);
    msg.timeout = 7822U;
    msg.lat = 0.960766518028;
    msg.lon = 0.369914878614;
    msg.speed = 0.512132830276;
    msg.speed_units = 151U;
    msg.custom.assign("NGSKVMTSIWSYCDYDLVCJJQRHJDNDFRLBLTAODALGAQUKTNBLPEZJEZCZUPLRDYKNPRWNPXOQLUWNHFTIHEMJWZIMKUH");

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
    msg.setTimeStamp(0.783193708651);
    msg.setSource(33816U);
    msg.setSourceEntity(31U);
    msg.setDestination(29518U);
    msg.setDestinationEntity(87U);
    msg.timeout = 19733U;
    msg.lat = 0.0396815401643;
    msg.lon = 0.0282181580121;
    msg.speed = 0.754516382443;
    msg.speed_units = 124U;
    msg.custom.assign("QZZOKMUFOASVTKJXYCBLKSBNINUXH");

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
    msg.setTimeStamp(0.481403840553);
    msg.setSource(10920U);
    msg.setSourceEntity(199U);
    msg.setDestination(22810U);
    msg.setDestinationEntity(172U);
    msg.timeout = 54909U;
    msg.lat = 0.220578568693;
    msg.lon = 0.442926581784;
    msg.speed = 0.936230861377;
    msg.speed_units = 9U;
    msg.custom.assign("CVATCFFGBLRRDTAIVRV");

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
    msg.setTimeStamp(0.529764236063);
    msg.setSource(44885U);
    msg.setSourceEntity(14U);
    msg.setDestination(14358U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.298556660885;
    msg.lon = 0.497448102004;
    msg.z = 0.735548432644;
    msg.z_units = 41U;
    msg.radius = 0.24186157379;
    msg.duration = 39546U;
    msg.speed = 0.388962804012;
    msg.speed_units = 165U;
    msg.popup_period = 4193U;
    msg.popup_duration = 4781U;
    msg.flags = 55U;
    msg.custom.assign("QGKBBRYSZTXEQHEWCLQCGKVLFDYWOIJVZMKJTPNBOYFKYWCKIUFGVNJLLCOMAGSCIIUYRPIBSVYABXPLCEGDPNGNTXFJHAHWGAFIPGCBYTTVWJLNWDAPQUSO");

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
    msg.setTimeStamp(0.941934339661);
    msg.setSource(52707U);
    msg.setSourceEntity(30U);
    msg.setDestination(49166U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.639703170923;
    msg.lon = 0.311747252077;
    msg.z = 0.548371207312;
    msg.z_units = 209U;
    msg.radius = 0.274816586861;
    msg.duration = 41712U;
    msg.speed = 0.488877105466;
    msg.speed_units = 150U;
    msg.popup_period = 8589U;
    msg.popup_duration = 29149U;
    msg.flags = 254U;
    msg.custom.assign("LNENKFSOBHSKIKOSMAGUXDPCVBSLQDPGJDR");

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
    msg.setTimeStamp(0.730838534916);
    msg.setSource(62440U);
    msg.setSourceEntity(0U);
    msg.setDestination(18637U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.704955380583;
    msg.lon = 0.214298587743;
    msg.z = 0.582752764288;
    msg.z_units = 193U;
    msg.radius = 0.333719083572;
    msg.duration = 26336U;
    msg.speed = 0.686316006286;
    msg.speed_units = 108U;
    msg.popup_period = 22462U;
    msg.popup_duration = 47698U;
    msg.flags = 147U;
    msg.custom.assign("BLMDDXBDIFEOGBLOUKVAYZWKUJSTZQCUXCWTHOESGNPRTEFMUFDBCGMKIDNTHEINEXNGOWRJJVOEBFLXFYVCNMGKPGZINAYSQTHOCUQGVKVSMGCPDRBLSQKAULXQXVBFOYPUODCZOPYUHZMXPMCJEKLHAWQSJYXSKHXWQENUIRBRLQMDZNYHMTVJIA");

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
    msg.setTimeStamp(0.0190734301316);
    msg.setSource(24219U);
    msg.setSourceEntity(95U);
    msg.setDestination(60629U);
    msg.setDestinationEntity(102U);
    msg.timeout = 41021U;
    msg.lat = 0.394234293417;
    msg.lon = 0.808777300495;
    msg.z = 0.677793901408;
    msg.z_units = 24U;
    msg.speed = 0.199116163208;
    msg.speed_units = 96U;
    msg.bearing = 0.492543783914;
    msg.width = 0.141348057397;
    msg.direction = 42U;
    msg.custom.assign("YDEFPBELVJIWGZPANFYAZBAXSALDUOZLIXNOSJLIKFHDLOHXPUERXHTRVOYOYWXOCGEKULZBXBYCSTMBLPCVYNXCCKYDQPEFSQTFSRZGBRPEATXADIDRVQQZZTSFLMALIJWLMRVAWUIHEFHNMNUKVGVMSNGHSHXBJJJMACQHUVCDUKFTKJJDQGZQT");

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
    msg.setTimeStamp(0.738801389001);
    msg.setSource(27989U);
    msg.setSourceEntity(199U);
    msg.setDestination(31136U);
    msg.setDestinationEntity(196U);
    msg.timeout = 2070U;
    msg.lat = 0.46723340128;
    msg.lon = 0.438156379975;
    msg.z = 0.907450275216;
    msg.z_units = 32U;
    msg.speed = 0.412718728688;
    msg.speed_units = 171U;
    msg.bearing = 0.78730691826;
    msg.width = 0.93240635051;
    msg.direction = 192U;
    msg.custom.assign("EYKQQEFZATVDZUTDPUHBIFKFLRARJVBKWPSYWKJJDBUSRHYBLUMCIFSYOBWJXHKDETIWRZBGKZLQURTVOJETITHOKXOCELGQUGMDNYNOYAPJEIMOXTKVZRLXMPOLFWEFMEXAGPFMNPACNVUYOSGOZDZHVEZHH");

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
    msg.setTimeStamp(0.352555098376);
    msg.setSource(58593U);
    msg.setSourceEntity(3U);
    msg.setDestination(39035U);
    msg.setDestinationEntity(81U);
    msg.timeout = 57522U;
    msg.lat = 0.915193074271;
    msg.lon = 0.674109652982;
    msg.z = 0.741493101897;
    msg.z_units = 245U;
    msg.speed = 0.409336227251;
    msg.speed_units = 187U;
    msg.bearing = 0.345704879166;
    msg.width = 0.624156251878;
    msg.direction = 56U;
    msg.custom.assign("HDZEVHWFPSJOTUNCJDHFMVLPDRSMCUFALZRMQKZLUHUFVLGOBRBXIJSIVYALCVIOPFQADBLWUVZSNDHJLBZVSOULOUZOCMGWYFELZKRRQLNPGVXFWNFTTFWHIRGUAYEBKIAPPJBOQBMJNEYMICKXDDSOT");

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
    msg.setTimeStamp(0.935437652669);
    msg.setSource(30497U);
    msg.setSourceEntity(52U);
    msg.setDestination(63473U);
    msg.setDestinationEntity(150U);
    msg.op_mode = 55U;
    msg.error_count = 120U;
    msg.error_ents.assign("XHNTOXCMJFDTVEJAIRZTDWFQTNQBEBCVKENOPIFFCFVNQXNJEPJEDTARPVYMLLZUQDQKFWDBUMUSRNCGUHGYZGWJOMULWSCAMBVZXGHWIZKUOEINQBHYXBYYOGLFMS");
    msg.maneuver_type = 49365U;
    msg.maneuver_stime = 0.255196750403;
    msg.maneuver_eta = 39652U;
    msg.control_loops = 83640195U;
    msg.flags = 214U;
    msg.last_error.assign("WSLNFSYHANIEYHUACFFLZNXXPNXHGNKQOJDZQZPVHXDDLUOQEYVHVVBGJDDLVCIZSPHMZKOBBOZMLBJWTWLCWWTQWEOATMJHQOKJXQTDQVGFEUGPSHIPRDQBFSSCFVKCSMACMMJULIJERKLEWROEVCEOQTIBUDUREISRWFQPYKEDRATJLWGMKLCNTVYGXBPCSRNSZKIMXZMGFZOJHYAUJPBOBDTGRUZFBXRPAIGNYVXKTKCAIRUYHMXNUYW");
    msg.last_error_time = 0.323601126753;

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
    msg.setTimeStamp(0.650380591225);
    msg.setSource(31078U);
    msg.setSourceEntity(251U);
    msg.setDestination(47989U);
    msg.setDestinationEntity(20U);
    msg.op_mode = 36U;
    msg.error_count = 36U;
    msg.error_ents.assign("MAXOBPRBZIDNRZFKFTARDJUSIAPYIPRMGWCQSUGGGIANPQOMCKJFNJKSW");
    msg.maneuver_type = 57981U;
    msg.maneuver_stime = 0.169935456334;
    msg.maneuver_eta = 41779U;
    msg.control_loops = 2626949704U;
    msg.flags = 121U;
    msg.last_error.assign("MHNAVOFSGRHZJXCTNDZPSDSOLXRYIRVQXWLWGZGVEZYDPBSHTMHAGFUUUMDELXQAZLIAKPDLFOAWABGYNZIVKUPWNIOCIJLKBNILFKJKQGQMOYRRSPCSNDOFDBKHEHYHIESNEXUJTWLVYUBCJGXQNETFXVPXMSRVGTCJYIWOPOZQQ");
    msg.last_error_time = 0.755890496892;

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
    msg.setTimeStamp(0.448870324879);
    msg.setSource(44799U);
    msg.setSourceEntity(121U);
    msg.setDestination(60526U);
    msg.setDestinationEntity(63U);
    msg.op_mode = 35U;
    msg.error_count = 95U;
    msg.error_ents.assign("RQDQDFPJZIRXWYAAYS");
    msg.maneuver_type = 49651U;
    msg.maneuver_stime = 0.863455977425;
    msg.maneuver_eta = 56122U;
    msg.control_loops = 3387524531U;
    msg.flags = 139U;
    msg.last_error.assign("VRWFMWIUMSXBIZUJQONZIBPCIRVCBVFLPKCCPFLPLAI");
    msg.last_error_time = 0.371688688178;

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
    msg.setTimeStamp(0.588632201201);
    msg.setSource(58918U);
    msg.setSourceEntity(112U);
    msg.setDestination(53734U);
    msg.setDestinationEntity(34U);
    msg.type = 200U;
    msg.request_id = 62286U;
    msg.command = 220U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.691508328264;
    tmp_msg_0.lon = 0.457349528807;
    tmp_msg_0.z = 0.00197226897321;
    tmp_msg_0.z_units = 83U;
    tmp_msg_0.speed = 0.44973315224;
    tmp_msg_0.speed_units = 9U;
    tmp_msg_0.custom.assign("XTUNNJLANYLKCWKTDBXBVDQBWDZRQQOUJLURADIWHKNRNHSXMEETXMSNYGKPDWAAFCVJTQSSHTPLIZFJGZGQTRQRSIICQLBAHNQBNMLOBRCPVIRPESCTRKYADITFEAMZFBJWAPGAOZGYPOXNUSFKMYRYYECXMEFFGIEPXXVVQHEKJMPHVCVMJOGHLUMOZLO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 18063U;
    msg.info.assign("VMVVHKGKRKKGNAUPPLXPRIIYPKCHOFDTZQNECAQTAAXOJTZUROBLXSJEJQBSSBQHEJMBDAIGTNVZRMKCBFYMWSRWRHNEMLRLNPGPUVFMMJQQPWSEVHOSEQKCJRCWGZAZDBBXCUJAALWKUDSDSGHQAXGOYSOXMBDLCNTLRXXOHNQLROKFHZTKZHITMLDZIFUQXGIOYMCAYFUJTIIESNIVZPVFCWZPFYBECPNUXYWDHGWWJUIUGYYDDLVTYEWJ");

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
    msg.setTimeStamp(0.908592182378);
    msg.setSource(24601U);
    msg.setSourceEntity(17U);
    msg.setDestination(46042U);
    msg.setDestinationEntity(146U);
    msg.type = 84U;
    msg.request_id = 19147U;
    msg.command = 106U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 35255U;
    tmp_msg_0.rpm = 0.187778312129;
    tmp_msg_0.direction = 15U;
    tmp_msg_0.custom.assign("XPZQZAVGXDJXNBUWSXDUCQMOQATMRUAQRZAVPWOEJSWILPCGLQHAJXBOCYLXYPEZIEZTHEYHOXVWDSCMJFILFVQKFMTUNKIPUKTLWZJTWJGBNMVEBXWBDHEURHYNWGRBBCPUEJRNRRMFVFMDOAKHOFZZGLFAQKIFGDWMALRUSGUYPGONPITIQCA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 17852U;
    msg.info.assign("BTSFROSIXAKDCYUXBNKPHERSVRNVEDBNXTDFMOROZVYNNDPGTKJHQMIEBGQZJAXAXTURUQPSZAPTMFYWVVBE");

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
    msg.setTimeStamp(0.567216003536);
    msg.setSource(60472U);
    msg.setSourceEntity(104U);
    msg.setDestination(40955U);
    msg.setDestinationEntity(199U);
    msg.type = 252U;
    msg.request_id = 336U;
    msg.command = 33U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 51161U;
    tmp_msg_0.lat = 0.595412979897;
    tmp_msg_0.lon = 0.422183973832;
    tmp_msg_0.z = 0.535508044163;
    tmp_msg_0.z_units = 103U;
    tmp_msg_0.duration = 53625U;
    tmp_msg_0.speed = 0.439355420731;
    tmp_msg_0.speed_units = 61U;
    tmp_msg_0.type = 251U;
    tmp_msg_0.radius = 0.234823533138;
    tmp_msg_0.length = 0.453252601782;
    tmp_msg_0.bearing = 0.551309617342;
    tmp_msg_0.direction = 35U;
    tmp_msg_0.custom.assign("VNBJUMPPMJLXDRYAUBBJZZTYHPTRJLYFQYHRQIAZCSBDJUCOEOKJNWLSGKRWGLJOZWGXPPCNXDICVVTHVUPUTIDMQMQTLYTWHIGECKAYHRKMINGSEMWIAWELXUGHZPSOFCPLXFNUBGFVDHOEFXBODQZQAEKVAD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 5487U;
    msg.info.assign("RVQWXYMUCPPJQTFTKNXBCVWKXPWCKIXSIURUEGRQZHEGWZJTFWTWBOAXVYKTXDNHEUFLZDPDFARZLBPORYTCDQUUSRXRLHLJZPHRYKGUBMEMAKMWTJSM");

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
    msg.setTimeStamp(0.0369033598754);
    msg.setSource(60569U);
    msg.setSourceEntity(116U);
    msg.setDestination(863U);
    msg.setDestinationEntity(49U);
    msg.command = 224U;
    msg.entities.assign("JMQEHRRKYFJOFBYEVELYCEDITYGRBPFUCIRXVMWKVZUGDALXRGYXKNZHNROFIOKPB");

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
    msg.setTimeStamp(0.711711109846);
    msg.setSource(59331U);
    msg.setSourceEntity(96U);
    msg.setDestination(64907U);
    msg.setDestinationEntity(40U);
    msg.command = 147U;
    msg.entities.assign("HRSBKMFTNZYMQVBLDCGJBXXNUMIBUGFINPGEHNPCRJNZRGIOAMZXJJCAUIISSXOOMTRUNUBQCFJUEGDQEAUHWHZVYALKOYYYPKTVWWEYKYRTEQWFXHQLCMIEOIAZOSOSWNHOSBSVAIEZENVBBPFCJGYXMZPFTDDVPLIQSTJWAKVNXCQRFDTLXADKWE");

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
    msg.setTimeStamp(0.660590450997);
    msg.setSource(1200U);
    msg.setSourceEntity(46U);
    msg.setDestination(51189U);
    msg.setDestinationEntity(203U);
    msg.command = 64U;
    msg.entities.assign("QKQBXMTKFRPISMHTSCPWTMYLZGJSBYZEEFHNZEOQYBWZAUX");

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
    msg.setTimeStamp(0.968211266574);
    msg.setSource(24308U);
    msg.setSourceEntity(167U);
    msg.setDestination(42910U);
    msg.setDestinationEntity(162U);
    msg.mcount = 43U;
    msg.mnames.assign("DABEKJRMTYPQJPT");
    msg.ecount = 226U;
    msg.enames.assign("SZGLZRZCEHENXAHSCYMOQIDKLLGSZKHUXKXZTVFWREPFOPIAEDOQKTGPKRMCAVGPLYZANTFNOKBTJIHVJRNOWFWVVQGMJPFGNKXBHBALODAQGU");
    msg.ccount = 220U;
    msg.cnames.assign("VDIDHLPOXZHZVEGYNOUUHYJJTBQHLGYORTFXCPUGWMRASTQLVQFEJROUAMRJCWLOYXJRPGJHTNHSDIKZYTIKZSOBSPPNOSMPXTNIKAKMMVAUDCHMCSOXIXFGQZNNLZKIUAEHIHWQAGBEFOSKKYEIJKYBBJMCYTKFSFXZGSQ");
    msg.last_error.assign("ORDFLZOGDHJTGMEMQYBRQJNSBJWAHWAMFHTCRDVOTABOBSQORVXPFOKUUERECZMEAVSRNCOIQGTBAZLZAPWDXVJPYGXIYVJILQIISBVCMNEQVLUTPYSPTEPNFVHWDFGOGLFTXXAUZMQTIVIBVRZWZCNZJPDUIWKYHFLTGN");
    msg.last_error_time = 0.155197086695;

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
    msg.setTimeStamp(0.597430040716);
    msg.setSource(41080U);
    msg.setSourceEntity(174U);
    msg.setDestination(14145U);
    msg.setDestinationEntity(133U);
    msg.mcount = 45U;
    msg.mnames.assign("FTSQZPWULSCEYJQQUPJVEQBIONRHVARAYKHLHLPZZUFULAMFCPFS");
    msg.ecount = 114U;
    msg.enames.assign("BVEZPCDICLSGLNKBFGZGHAZTEWENJBRCSAUUOBYYOQTIEZUKDZKTFNRXDJKZUWFQISEWLYVCAPIVYPXMHDRJJJNYJKCRSZYFZRRDOAOZFFZCSCMVHVIGRXIJLGHDCGIPHNQRUXXMTQPOKLHENAUKAPMUPMIQXETMREHTMBXWWWWXOYJMKUDFLQTMOALBIWMAUSFRAVQIAGBGYOFQPSDDENPV");
    msg.ccount = 2U;
    msg.cnames.assign("ZQSCSUDAXJVBQSBUWPDPMAKEJQRTHIBAXJTPQXFQLBZSUZIGUDKWNLOWPCCMAWCOPWFWNAHSHQLRJXENYRYKJXJOIFTTBVNYRDHXCSXVPGYMIICKBCFYCEEPUPDFPYKHVVMEZMQHNMDBGFWLIRZOBGRFLOQDKMLVOJZAHGLKHWDZTCVFXMQE");
    msg.last_error.assign("RACHGSVEIRAMIQEFDXVA");
    msg.last_error_time = 0.552447349628;

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
    msg.setTimeStamp(0.0629137644207);
    msg.setSource(54211U);
    msg.setSourceEntity(140U);
    msg.setDestination(18039U);
    msg.setDestinationEntity(92U);
    msg.mcount = 232U;
    msg.mnames.assign("LMEXVPESNWQNJUODHJEPCLEAZABAAYBCBFQLSCTMPNTUYLUOAMKHFCIFSPRUFRTGKIIKIOISGJIPOADUQWTESQHYBJZHDWKMDQRQZMHVGEYEGFTXVLOBKLZXTRWKGPXXIIBRJKLVRNGUBQCCGHCFMVRGYQDGEAOKMSMVUVYFAQCKJYZNHSZDXUNVJPRPWJEBCSETNXUMWDIVIOWRNHLJSRBBFZPK");
    msg.ecount = 199U;
    msg.enames.assign("SLUAQTYJXWK");
    msg.ccount = 94U;
    msg.cnames.assign("VQWKDUQDUSRECKVJHYEPPKXLYAQTXMMJFVDLWCIDHRLNVGEVEJESRVKIOXNBMSJVGGHVNEBIFMIOZZUZILMWFGROZAQCZISYHLTDFPMRUJLUEXTSAXOGTSMXNGXOHGKUTBRTAYIWOGWAGFPKZKPBVCYBWTP");
    msg.last_error.assign("GINJCZDNBSGHQBROSRMMAMLJKTGTZNQGBORYODICTOQJKSVZKWVLVKZFCDKLBOWKCTHNZJEOHWXRVNYXFUPQYMGBGQQXWWTFCJXQCSPPSVZMISOPSIUALEYNQEGRPZTDLJUKNPVDLUHFBYROQAAIJLDBXPRFXEDDGVMBTBLCWXLHJAUHMEEVVWWFWUIPSXMAYXNFSFZRZYQUKNUDICHRNAOTFLIIB");
    msg.last_error_time = 0.055893325657;

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
    msg.setTimeStamp(0.252645013374);
    msg.setSource(13966U);
    msg.setSourceEntity(37U);
    msg.setDestination(39064U);
    msg.setDestinationEntity(62U);
    msg.mask = 163U;
    msg.max_depth = 0.0487197188437;
    msg.min_altitude = 0.745947533241;
    msg.max_altitude = 0.137692027689;
    msg.min_speed = 0.703044842654;
    msg.max_speed = 0.715647543248;
    msg.max_vrate = 0.804720645359;
    msg.lat = 0.0699243513133;
    msg.lon = 0.801710273893;
    msg.orientation = 0.997889474873;
    msg.width = 0.362756482012;
    msg.length = 0.17355853517;

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
    msg.setTimeStamp(0.674561432616);
    msg.setSource(40359U);
    msg.setSourceEntity(32U);
    msg.setDestination(34939U);
    msg.setDestinationEntity(200U);
    msg.mask = 21U;
    msg.max_depth = 0.741155676856;
    msg.min_altitude = 0.628780336573;
    msg.max_altitude = 0.820388959853;
    msg.min_speed = 0.391495538568;
    msg.max_speed = 0.772255046464;
    msg.max_vrate = 0.769097560906;
    msg.lat = 0.33297077132;
    msg.lon = 0.734615254334;
    msg.orientation = 0.43638167489;
    msg.width = 0.410798206014;
    msg.length = 0.89788185783;

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
    msg.setTimeStamp(0.836807588643);
    msg.setSource(32760U);
    msg.setSourceEntity(182U);
    msg.setDestination(31970U);
    msg.setDestinationEntity(244U);
    msg.mask = 172U;
    msg.max_depth = 0.968803223636;
    msg.min_altitude = 0.584149151546;
    msg.max_altitude = 0.708571857358;
    msg.min_speed = 0.432372323473;
    msg.max_speed = 0.530835004562;
    msg.max_vrate = 0.511852517922;
    msg.lat = 0.64130263982;
    msg.lon = 0.837969868231;
    msg.orientation = 0.3303933518;
    msg.width = 0.884646617151;
    msg.length = 0.254858763383;

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
    msg.setTimeStamp(0.937836677902);
    msg.setSource(33317U);
    msg.setSourceEntity(151U);
    msg.setDestination(52018U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.786082826263);
    msg.setSource(37542U);
    msg.setSourceEntity(145U);
    msg.setDestination(33425U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.854879818154);
    msg.setSource(38352U);
    msg.setSourceEntity(133U);
    msg.setDestination(64904U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.899133847081);
    msg.setSource(49394U);
    msg.setSourceEntity(248U);
    msg.setDestination(20931U);
    msg.setDestinationEntity(100U);
    msg.duration = 49609U;

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
    msg.setTimeStamp(0.39216978277);
    msg.setSource(24916U);
    msg.setSourceEntity(22U);
    msg.setDestination(48642U);
    msg.setDestinationEntity(152U);
    msg.duration = 27382U;

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
    msg.setTimeStamp(0.30584289931);
    msg.setSource(58536U);
    msg.setSourceEntity(240U);
    msg.setDestination(19129U);
    msg.setDestinationEntity(210U);
    msg.duration = 58168U;

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
    msg.setTimeStamp(0.572389407473);
    msg.setSource(29830U);
    msg.setSourceEntity(104U);
    msg.setDestination(63184U);
    msg.setDestinationEntity(100U);
    msg.enable = 84U;
    msg.mask = 14617049U;
    msg.scope_ref = 3121097805U;

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
    msg.setTimeStamp(0.698244824478);
    msg.setSource(26119U);
    msg.setSourceEntity(136U);
    msg.setDestination(25565U);
    msg.setDestinationEntity(150U);
    msg.enable = 163U;
    msg.mask = 2130630196U;
    msg.scope_ref = 1733610780U;

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
    msg.setTimeStamp(0.789711576369);
    msg.setSource(55547U);
    msg.setSourceEntity(87U);
    msg.setDestination(19236U);
    msg.setDestinationEntity(53U);
    msg.enable = 141U;
    msg.mask = 2328419331U;
    msg.scope_ref = 3471522080U;

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
    msg.setTimeStamp(0.394879497308);
    msg.setSource(31970U);
    msg.setSourceEntity(212U);
    msg.setDestination(3272U);
    msg.setDestinationEntity(24U);
    msg.medium = 252U;

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
    msg.setTimeStamp(0.0156695848171);
    msg.setSource(22540U);
    msg.setSourceEntity(186U);
    msg.setDestination(26206U);
    msg.setDestinationEntity(48U);
    msg.medium = 202U;

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
    msg.setTimeStamp(0.204162182976);
    msg.setSource(23505U);
    msg.setSourceEntity(180U);
    msg.setDestination(31776U);
    msg.setDestinationEntity(148U);
    msg.medium = 192U;

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
    msg.setTimeStamp(0.687571875192);
    msg.setSource(63856U);
    msg.setSourceEntity(134U);
    msg.setDestination(29777U);
    msg.setDestinationEntity(224U);
    msg.value = 0.437284071856;
    msg.type = 224U;

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
    msg.setTimeStamp(0.807477288638);
    msg.setSource(12764U);
    msg.setSourceEntity(187U);
    msg.setDestination(49541U);
    msg.setDestinationEntity(44U);
    msg.value = 0.279597589614;
    msg.type = 155U;

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
    msg.setTimeStamp(0.145354731154);
    msg.setSource(47938U);
    msg.setSourceEntity(21U);
    msg.setDestination(3622U);
    msg.setDestinationEntity(221U);
    msg.value = 0.779361319852;
    msg.type = 95U;

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
    msg.setTimeStamp(0.975621921474);
    msg.setSource(34348U);
    msg.setSourceEntity(229U);
    msg.setDestination(26578U);
    msg.setDestinationEntity(24U);
    msg.possimerr = 0.0748008551102;
    msg.converg = 0.992099175606;
    msg.turbulence = 0.533284817185;
    msg.possimmon = 64U;
    msg.commmon = 221U;
    msg.convergmon = 2U;

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
    msg.setTimeStamp(0.636939172971);
    msg.setSource(31530U);
    msg.setSourceEntity(90U);
    msg.setDestination(35882U);
    msg.setDestinationEntity(205U);
    msg.possimerr = 0.505495410673;
    msg.converg = 0.959751122354;
    msg.turbulence = 0.178773312097;
    msg.possimmon = 33U;
    msg.commmon = 160U;
    msg.convergmon = 34U;

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
    msg.setTimeStamp(0.319162133303);
    msg.setSource(13064U);
    msg.setSourceEntity(129U);
    msg.setDestination(8992U);
    msg.setDestinationEntity(106U);
    msg.possimerr = 0.0960715495512;
    msg.converg = 0.323602897903;
    msg.turbulence = 0.169158692047;
    msg.possimmon = 179U;
    msg.commmon = 129U;
    msg.convergmon = 249U;

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
    msg.setTimeStamp(0.913554939344);
    msg.setSource(39774U);
    msg.setSourceEntity(164U);
    msg.setDestination(1576U);
    msg.setDestinationEntity(148U);
    msg.autonomy = 5U;
    msg.mode.assign("YDKVRJUOGHQLVWMQWUSWPXCRDQXNPKROICZNFWPTXNBOTWJTZETOIFBDXIAGBNARLBTUVZRFOTWPEVFNYRAFHBUJEPSRGLFCNHMYYANSR");

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
    msg.setTimeStamp(0.0386784876408);
    msg.setSource(18939U);
    msg.setSourceEntity(221U);
    msg.setDestination(31305U);
    msg.setDestinationEntity(228U);
    msg.autonomy = 177U;
    msg.mode.assign("NLJYMZIQPGUIDX");

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
    msg.setTimeStamp(0.252804686883);
    msg.setSource(40339U);
    msg.setSourceEntity(92U);
    msg.setDestination(4781U);
    msg.setDestinationEntity(42U);
    msg.autonomy = 63U;
    msg.mode.assign("ECATHBQFBAQRNNQENOCPXNEMLUCZEHIPWRGYZROOIIMNWZHYYJLXWPBUFW");

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
    msg.setTimeStamp(0.795451594475);
    msg.setSource(61100U);
    msg.setSourceEntity(232U);
    msg.setDestination(44825U);
    msg.setDestinationEntity(237U);
    msg.type = 208U;
    msg.op = 246U;
    msg.possimerr = 0.0369015357211;
    msg.converg = 0.207662350436;
    msg.turbulence = 0.160796732769;
    msg.possimmon = 70U;
    msg.commmon = 44U;
    msg.convergmon = 175U;

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
    msg.setTimeStamp(0.781029824568);
    msg.setSource(48388U);
    msg.setSourceEntity(122U);
    msg.setDestination(34486U);
    msg.setDestinationEntity(187U);
    msg.type = 114U;
    msg.op = 35U;
    msg.possimerr = 0.258592501053;
    msg.converg = 0.307923923965;
    msg.turbulence = 0.285146900089;
    msg.possimmon = 116U;
    msg.commmon = 208U;
    msg.convergmon = 200U;

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
    msg.setTimeStamp(0.833450160985);
    msg.setSource(39172U);
    msg.setSourceEntity(179U);
    msg.setDestination(56621U);
    msg.setDestinationEntity(129U);
    msg.type = 65U;
    msg.op = 254U;
    msg.possimerr = 0.0579176375389;
    msg.converg = 0.667394040357;
    msg.turbulence = 0.0807426261186;
    msg.possimmon = 161U;
    msg.commmon = 204U;
    msg.convergmon = 163U;

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
    msg.setTimeStamp(0.514260283613);
    msg.setSource(29851U);
    msg.setSourceEntity(144U);
    msg.setDestination(52855U);
    msg.setDestinationEntity(246U);
    msg.op = 223U;
    msg.comm_interface = 151U;
    msg.period = 30386U;
    msg.sys_dst.assign("NZIGFEBKUBJQFAGKUKOUEKN");

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
    msg.setTimeStamp(0.175738038202);
    msg.setSource(39884U);
    msg.setSourceEntity(222U);
    msg.setDestination(63899U);
    msg.setDestinationEntity(1U);
    msg.op = 50U;
    msg.comm_interface = 187U;
    msg.period = 44906U;
    msg.sys_dst.assign("BYULGRHVRCYVUPXODEUQIZTNWAROEPJXGMUPDOSTRHMWNJDHPITEMPKPEFJGDRBSUGPLPMDWLEZVXQXHDUNZMUSFKQONNPOZIORQNMAVKIKAZSAOZYZFQWCTCBXVGLDQCQYHW");

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
    msg.setTimeStamp(0.046206990738);
    msg.setSource(53922U);
    msg.setSourceEntity(189U);
    msg.setDestination(6265U);
    msg.setDestinationEntity(52U);
    msg.op = 2U;
    msg.comm_interface = 164U;
    msg.period = 53980U;
    msg.sys_dst.assign("RCPXLLMLZGNJYEYZZFSCAINQDTDYGDKDVDHQROAAOAFFYJOAVWWPGXTUNUOKYRETDXYXVGUEPKKENNCBHRIYCWWWCSIAMLEPAWKQUIIJWWVSMYDZHDBQRHHZVTCLOMITMMPNUOHJGNSBUZYSPGQTZKLAUADSHBQFKQRXGISUREUQBYLWPEWTOBGOKPCHVARXHBXCZMEPQVEVIXXZHMFFCTVLSJSTNVXSKQBJMRJDGLIFPJN");

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
    msg.setTimeStamp(0.385019368365);
    msg.setSource(31052U);
    msg.setSourceEntity(248U);
    msg.setDestination(3789U);
    msg.setDestinationEntity(155U);
    msg.stime = 3029033088U;
    msg.latitude = 0.692702351419;
    msg.longitude = 0.907666369575;
    msg.altitude = 27545U;
    msg.depth = 49574U;
    msg.heading = 19697U;
    msg.speed = 28172;
    msg.fuel = 101;
    msg.exec_state = -35;
    msg.plan_checksum = 3581U;

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
    msg.setTimeStamp(0.357468686104);
    msg.setSource(38335U);
    msg.setSourceEntity(187U);
    msg.setDestination(21761U);
    msg.setDestinationEntity(20U);
    msg.stime = 1356837172U;
    msg.latitude = 0.885649024597;
    msg.longitude = 0.413982230044;
    msg.altitude = 21270U;
    msg.depth = 55619U;
    msg.heading = 49971U;
    msg.speed = 5676;
    msg.fuel = -124;
    msg.exec_state = 55;
    msg.plan_checksum = 54815U;

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
    msg.setTimeStamp(0.486125028975);
    msg.setSource(62496U);
    msg.setSourceEntity(240U);
    msg.setDestination(61023U);
    msg.setDestinationEntity(69U);
    msg.stime = 3739995276U;
    msg.latitude = 0.951236157981;
    msg.longitude = 0.925726673768;
    msg.altitude = 28650U;
    msg.depth = 42304U;
    msg.heading = 12891U;
    msg.speed = 21864;
    msg.fuel = 41;
    msg.exec_state = 94;
    msg.plan_checksum = 29048U;

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
    msg.setTimeStamp(0.229524502807);
    msg.setSource(8496U);
    msg.setSourceEntity(190U);
    msg.setDestination(7343U);
    msg.setDestinationEntity(225U);
    msg.req_id = 14304U;
    msg.comm_mean = 210U;
    msg.destination.assign("AXAUZZDCTECWPSRTMEQFPJVHQALKGNXEUTOAYHRBNZMLJSVWLBYCYJYYHKLUXHUUQPTDAGIKGIQWOXOFACOZOHDTDTTCZXJUIRCTRDGIQMWDABAZCNJRQLSUIQVBBGOFIKEKNRXSBQIHFCCPHUELDDUSKNVNAGMEMLIGKGMBRFMRQLNFLMXZEJUV");
    msg.deadline = 0.803707232705;
    msg.data_mode = 63U;
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QRLUGUUCXQDKFKOWYXIFOMDAHHVAVDDJJTQJLAFIMMZYFJUAYDGXOKZSZOBKN");
    tmp_msg_0.attr_type = 131U;
    tmp_msg_0.min.assign("GJPOQVVOVLGRUTSULXJFVVHZVIWDNIVYMSZNNNLBNGSPCXHBPKPNFWSQCJINCULIUIYPHOYYDYRQJFMAMSZMHIAIBJWGKLLKWERJNETVCYHTBEHQWHBDUFGRUTOTXKEWDDTAQMEUBABEAXBMKMYHD");
    tmp_msg_0.max.assign("XIPQTJWQEQVKFTGTNIGNVMXAEQOZMBZBXUYFZSOIHZJWRYWCOOUJCJCHWMVHEVEEIVBFIGSSRKYQXLONKPZXUBUDGACAXKKLAUYEJALWBMYDAHBYYKBSRZINEUSWLARIFJGHPUYVJRLPNRNSYTRWKMPQDOHGPEZMVJ");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("SGTVNBCHKLVRHCUQTYSEWFNCIEYJSBTMJJCUXQTYVPNCCQXN");
    const char tmp_msg_1[] = {-109, -85, -27, 32, 21, 122, 24, -39, -82, 123, -23, 99, -24, 19, -4, 26, 69, -120, -41, -47, 111};
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
    msg.setTimeStamp(0.976173263509);
    msg.setSource(45022U);
    msg.setSourceEntity(47U);
    msg.setDestination(60188U);
    msg.setDestinationEntity(83U);
    msg.req_id = 40087U;
    msg.comm_mean = 180U;
    msg.destination.assign("GWZUYJMOHJKKFXGAQPLGLMUDLLSFLGPOCXMWCDNBMIYJUYZOIVJLWQZNHCDTZGSWVIJJXRPJQQTRLECJIFQIHVDQXRFMUHSDSKRNYWWRFMIZEXWTAIFTBAKWMAEOUYYPRQABNGNHCCUXYXFKDSEOWTT");
    msg.deadline = 0.285616392028;
    msg.data_mode = 117U;
    IMC::CoordState tmp_msg_0;
    tmp_msg_0.gamma = 0.491822130094;
    tmp_msg_0.systemid = 81U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LJDTKPQDMPJBXYHWKFRRROIBCAPGYHTRGQUMPYLTNXZFVQEAMBDLESWMUPSVJHGBOLVSRTDVJFLHKABHPDFIBJTWHUHRFRSCWXNXYGODCUXOJUCTNPEJMSQIQYTUEDAGQNOEXATQDRMRLICGWABWIDZHMXEIYSQVFAKWZGKPNKWLUUDAKGJPBUVFOSTNLNVMXVKWLZJBZLTCRHHZJC");
    const char tmp_msg_1[] = {60, -110, 44, 109, 90, 14, -48, -63, 26, -128, -42, 96, 113};
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
    msg.setTimeStamp(0.489871623665);
    msg.setSource(3499U);
    msg.setSourceEntity(97U);
    msg.setDestination(1640U);
    msg.setDestinationEntity(177U);
    msg.req_id = 55782U;
    msg.comm_mean = 205U;
    msg.destination.assign("TUWJHSKXWENWHCMUCMZSVMRVDMEIGDAGSBOPPWOYEXJLAPTDXTSSXRTGRQOUBFVUDFNNCORYKFAMGQUJCZZUWKYYHZCFJUBNUJQASPENOOIWQYNPMGGAXKRLRNAQZVZZPCTEQWRHAOVDLREFLMYJPII");
    msg.deadline = 0.44833177455;
    msg.data_mode = 87U;
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DJIIQYQPDJLHMJMFADFUBMJHTGEYNFRXWICTTVTWZAMAXUDVAORITYWISHNLOENUYOGCBJHZKPRWSERRLIHMGHPADEPGFPVXKOXSWCCFDROSQCFILAVDZTBSLQEXPGSQKNYYHBBWVEWXCGTKWSZUJOKKNMRHZEEYMAKDIFTKZMNUYXXEVZ");
    tmp_msg_0.predicate.assign("BLOOFDFVASJACSHYLWEVGKPSRGMXMYDDYCTFECQJDUFLCDTRBTYGQFPUMSRVYFKCVDJHHBPZNAYYVZLLBTVMKQIQESKSBWQIOVNNKROWGRHTJMUAJKYGNWSUTJNLII");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("AGQZXMIYCSDNWCXAXNVJJGLEYZYZXWZOJGRUKEXBLNBTUPSMHMBLQFVFPZZJBRDIIMOFCDWOJSCUWSTKQKTXKQNQWHXNMNUIJPFNLNZWCLBAVG");
    const char tmp_msg_1[] = {15, 57, -83, -19, -58, 30, 125, 31, 34, 94, 40, -114, 98, -6, -44, 60, 13, -5, -126, -51, 46, -126, 115, -95, -62, 61, 29, 53, 119, -9, -42, -75, -66, 126, 42, 55, 63, -88, -28, 99, -20, 34, -14, -68, -50};
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
    msg.setTimeStamp(0.53233157222);
    msg.setSource(50462U);
    msg.setSourceEntity(224U);
    msg.setDestination(54708U);
    msg.setDestinationEntity(31U);
    msg.req_id = 9351U;
    msg.status = 134U;
    msg.info.assign("JIWNTENHHQKXMJISFJQYGVLDXBMJBMFLYZHEQPADVDQUVCCFDPTOKEGESWPNADYZKB");

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
    msg.setTimeStamp(0.204297503314);
    msg.setSource(47269U);
    msg.setSourceEntity(200U);
    msg.setDestination(35890U);
    msg.setDestinationEntity(23U);
    msg.req_id = 38154U;
    msg.status = 141U;
    msg.info.assign("KTCNAZPFGZXCDVAIHNOIBPEOWDKAMANVGTXFCXIXTQTTUGSEHJSYWKCMBYXGFDBEOREVYLMRYKNJWWLSRSICUBTLYEMJVQIQBRXBCMQFEGFQPFWFDPNKPNDTGARLHTRLMVVZBGKICZZZOUDJMHYUOLZEMLMDKUNWPLSCRIAFLOORJJGNDBHNOUWEWJBYQ");

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
    msg.setTimeStamp(0.19349284556);
    msg.setSource(55900U);
    msg.setSourceEntity(39U);
    msg.setDestination(62508U);
    msg.setDestinationEntity(210U);
    msg.req_id = 35690U;
    msg.status = 219U;
    msg.info.assign("INLGBALSBWTRIXIPEXJEXDQORRSRXNFHLXTZOPJPMXISOJDEBOLNBYAFPFTJCYNVLNADMKIWMGHNMOXELVZKMQDTSZOKYYCNOZEBUVHXUWBYENAHVSGFGRJLBBSUUZBLP");

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
    msg.setTimeStamp(0.333136637585);
    msg.setSource(51354U);
    msg.setSourceEntity(233U);
    msg.setDestination(44980U);
    msg.setDestinationEntity(112U);
    msg.req_id = 51333U;
    msg.destination.assign("VGURDOJKDZTQKCVLLOSGSWRBRULHVJVCZVJPPLAROEZHLGUTSNENECTIUFOABXDSEJAHTMBTMPDQAEXBJWHYFCDURGQTCKWKGKSQFGVYZEBJIBIRNCEXZWAIPXFIULMMEYGYRZPXEXYZSJSFKOSQNKYWYTPQQOJZMYEIQDHFKMTNWMIMJPMXPPC");
    msg.timeout = 0.317944057124;
    msg.sms_text.assign("EHWOHUVJECQROIZCNBXKEYMVMHOFAJNZVKYXHBTXKRGDVPVQPXSAUDJABVJZGYPSBAMERBGVACJJMYEYKLBDILRSSUXICPKLXMKEWRTMZUHGNFAWCSJTGSRLBQGTSDHUPFZOUTCZISIFEJHNLLTCNQIUWZNRFLOQFIOGPRQUUOFKPXZAFIECQXLDHNMPIVDHYHKDOPNEYBLGZFVWMGBCUSSLJDNMAFYXAWNE");

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
    msg.setTimeStamp(0.468770730585);
    msg.setSource(60433U);
    msg.setSourceEntity(62U);
    msg.setDestination(20025U);
    msg.setDestinationEntity(200U);
    msg.req_id = 8824U;
    msg.destination.assign("VCUQQXYCKVHGYQZRIBDTZVDMRTYNJKBWSLALHIDXMFMPHEXXKHGMCVYNRFNMGCCHUDGFFYERXEANHLJKAJIXCZEQLGWNBRXWLYBXPVIAYGJJUDWREEUIDDASTPQSSTSDQWPDOHKIOOPQCSOINITCIVQOOTLWKT");
    msg.timeout = 0.82603203114;
    msg.sms_text.assign("NXWIJSUGWDSCQBPTVTQAKKAJTDKLGIEABBSPJCYJGEYQYGLEFJRPUWRVTGXBGTBVWHTHKUBROHCNPLCZLNLIOVIDHQKZETWDUFTOY");

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
    msg.setTimeStamp(0.758757000557);
    msg.setSource(1428U);
    msg.setSourceEntity(62U);
    msg.setDestination(32557U);
    msg.setDestinationEntity(116U);
    msg.req_id = 33645U;
    msg.destination.assign("PGGKAVIZIVHCWEMAGGICNRWYTXUGHCUFFJYKRCTG");
    msg.timeout = 0.033351120927;
    msg.sms_text.assign("ICGNJVKOAPJWHZNNORWRLEQVDHMTYRHLLDKDIFYEYQVPOZEUTOFCVFROPZFVSKVOWJFZJXPHMYMBSMJGFJUBRSBBGZKGLRXSLBXCOSECNNLBUQPEGUFZWSQEBDZUXEPVTMGLLXUYECDOBLSSDCIAYKIXANPAWRWXMHKYRTQGQTGXTSCVAHKKS");

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
    msg.setTimeStamp(0.752761811504);
    msg.setSource(2008U);
    msg.setSourceEntity(71U);
    msg.setDestination(41159U);
    msg.setDestinationEntity(32U);
    msg.req_id = 21598U;
    msg.status = 29U;
    msg.info.assign("VLGWLRYCJMUENYFAHZPMOPVXOOFABQXRLGNPZTQGTQDSHZRBKZMFOPYSIWKIRTLHCUDCSKURMSPIWYNSCAJYNUEQVK");

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
    msg.setTimeStamp(0.37590269736);
    msg.setSource(19715U);
    msg.setSourceEntity(92U);
    msg.setDestination(56206U);
    msg.setDestinationEntity(230U);
    msg.req_id = 64335U;
    msg.status = 165U;
    msg.info.assign("KOESSGDCBPHLBMQVNBPBDKOSHHLDJTUOAMQBPOSROHTWRSRAKYQCITFCAWEQAVLARCGRRJBPTNJFQEZWTUETMOEZQDUPHBBNVPCYLTNSFRWMJUGMZIEECAUNYVWNIKXKFXUSDGPXXYNYOZEFWXKUISPONBLMWXRDGZQHBYKHTSGGZLKWHEVNALTELUDC");

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
    msg.setTimeStamp(0.85387045126);
    msg.setSource(10334U);
    msg.setSourceEntity(38U);
    msg.setDestination(15854U);
    msg.setDestinationEntity(185U);
    msg.req_id = 42208U;
    msg.status = 52U;
    msg.info.assign("RMTZABIEIRCHWZHQOLGXVWRQUXWEKXEKGYNGSYNZUILJXTUCGWHFDLSTOMFNJVVUDMLQAZFBRHVWWVQCHPPZJFOUMDBAPZTNTEVYJFXONEXRCHREIQGMPBXVFOCPJLPLYRIGFMSJELNLZMNIEPKIKBBRYOKXKFZAUCNACBQWCGSOIXDYPJADMIPBOEYEVRTDALHYSQWIVKSJAVQHTUKDHDRKLWSYNPTMJSYSGTJUNFSBGZCFUCHAZDQXMTU");

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
    msg.setTimeStamp(0.894534681085);
    msg.setSource(10554U);
    msg.setSourceEntity(31U);
    msg.setDestination(25202U);
    msg.setDestinationEntity(97U);
    msg.state = 123U;

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
    msg.setTimeStamp(0.876095773001);
    msg.setSource(29953U);
    msg.setSourceEntity(171U);
    msg.setDestination(15718U);
    msg.setDestinationEntity(125U);
    msg.state = 199U;

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
    msg.setTimeStamp(0.681539969329);
    msg.setSource(56924U);
    msg.setSourceEntity(242U);
    msg.setDestination(35744U);
    msg.setDestinationEntity(6U);
    msg.state = 21U;

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
    msg.setTimeStamp(0.322343680117);
    msg.setSource(53819U);
    msg.setSourceEntity(70U);
    msg.setDestination(18286U);
    msg.setDestinationEntity(61U);
    msg.state = 163U;

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
    msg.setTimeStamp(0.293202223353);
    msg.setSource(27385U);
    msg.setSourceEntity(149U);
    msg.setDestination(46379U);
    msg.setDestinationEntity(10U);
    msg.state = 105U;

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
    msg.setTimeStamp(0.819454159367);
    msg.setSource(13233U);
    msg.setSourceEntity(69U);
    msg.setDestination(60575U);
    msg.setDestinationEntity(137U);
    msg.state = 10U;

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
    msg.setTimeStamp(0.210411521358);
    msg.setSource(52990U);
    msg.setSourceEntity(247U);
    msg.setDestination(12435U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.162283453157);
    msg.setSource(17849U);
    msg.setSourceEntity(190U);
    msg.setDestination(1772U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.424492100838);
    msg.setSource(29387U);
    msg.setSourceEntity(96U);
    msg.setDestination(33603U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.0402201037031);
    msg.setSource(38028U);
    msg.setSourceEntity(221U);
    msg.setDestination(24766U);
    msg.setDestinationEntity(2U);
    msg.plan_id.assign("NAYKJDLPGVGCIOFIBNWRGTQVCNBPXITQRYYTEPWIMXMWLLVMFMQAHFSYFGWSAAYRTIJKEROLAAPKWHUKNOSFTDEBJVZLGDRJXBCMQGMRFNCTKLSNHHTULFZBHAZNHIFMBCXHQO");
    msg.description.assign("MRBAXOYYDFGAOZBDFNVPDYAWYYUXQTIKFECZNRXMJDMYPNTQQZKDPGHGHRBWKWQZQVRXUYBGPIGWUVETLCYAVKJJPUWTHTEZTDEPICIZKCMQFPTCALXQOHZZCJSVNLTLBVVHGZHQTBUBWIPKHEVBVMNAGWBGIUJ");
    msg.vnamespace.assign("KZXRNUOTCTMDMTVPDE");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PRQLGTRWPQKAKAILGDKPBAHRKDVRXEXEAZYUAXIDVVCWNVPUOPRLUADUYUBJIWGZMFRTBFWPH");
    tmp_msg_0.value.assign("AARALEBQJPNIACOXJYCTGFWBVLYWFUJLOBZYHGNOZEZSWEGMLAQEBVKIJDDCFCMJKKHCVHGTTHUNGIQTXBTQUJNPLLVKMRHERRDGOZWZAKKOMXMDWGQUSQPXNBPSAVXBFYMFRGJEWROAJZKQRQPNOVPWPPSIUZBLLFREIITOIOSLSXDYGVVDSZREHUBUKSFFYTEEYTUVMIUDUNWXFXJOXDPHCTAQTCHWHRZCISDKDXBNNJNKZACYMPMYHWQLM");
    tmp_msg_0.type = 201U;
    tmp_msg_0.access = 48U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PQGRBBHGTNMPZMAVXKOZNBFIMWYCONGFWDYZPLKEZQOFRQYZDPHTJVLCDEPIZEOEACCOBTKAVCMLMNDJTXLLJFGTOJMFOSHBBXQZLUUZPDVUSKRILIAAPWJYMWWPWYUANXENHEEGUJVWLSGBPDYLKUVYJGKIDAGKQDRFHIPNXAQSRAVRFKNIEXKTRHIBHOYUYGDFXBIQNHQUFSEQBTOJSENOSVCR");
    IMC::LblConfig tmp_msg_1;
    tmp_msg_1.op = 226U;
    IMC::LblBeacon tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.beacon.assign("JKXDXPDCCFJSEVTPULWAJTEYNXGVOLLADYQPDMAUEMTFIAZRROCUDHQTGZMMAYNVPXALEWVMCWSFBAOSWLNJLAJQAWVNPTEGFVQWYHYKVEXQZKYLRHNZBIEMBIBGZIECNFHHFLNDYRWSTUGRTEKHTOJPZKYILMZGMHVFDACOSDKWBHGUOVSHKNPRBIIDVOHGRCKXKYTIQQJRNXOPXSYXJOQXFIRUOJMSBILTRWUCPGCKGBBJ");
    tmp_tmp_msg_1_0.lat = 0.332667505911;
    tmp_tmp_msg_1_0.lon = 0.200359389196;
    tmp_tmp_msg_1_0.depth = 0.911797961023;
    tmp_tmp_msg_1_0.query_channel = 20U;
    tmp_tmp_msg_1_0.reply_channel = 160U;
    tmp_tmp_msg_1_0.transponder_delay = 203U;
    tmp_msg_1.beacons.push_back(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.602213802872);
    msg.setSource(51995U);
    msg.setSourceEntity(189U);
    msg.setDestination(45278U);
    msg.setDestinationEntity(138U);
    msg.plan_id.assign("MIMUSYLCCAEBTTYCWKRODZEXNKOJRQDNGBKKJE");
    msg.description.assign("WGAEFHYRAXGTTZCETZQLILHEPSVSKSOFHQJROYEAAEDVLPHMCMFELIQFVUBWIIPMXAUKZOHFZJZBKUHQHUCHKQQHYEFNXTTLRWNRLIAZSZXCBTHLMOXTXWITVLYJYDGKDRMXPP");
    msg.vnamespace.assign("YWTHGVKCLUNUIBGTADWGHDROVRZJAPMPJCUNEJDXWPCHSQMXEXTUXVSOKASXIMTOCZUYQHODZUDYFZIOLQQZEOXAYZWVWYEFRTWNDYKFYMIDOINRXRZWLYDPNDABUSSCYFHQQTBNHCIZQTMA");
    msg.start_man_id.assign("BYPAUKMAEZJEXL");
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.301165220904;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::Phycocyanin tmp_msg_1;
    tmp_msg_1.value = 0.302514211441;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.268845246947);
    msg.setSource(4908U);
    msg.setSourceEntity(236U);
    msg.setDestination(4369U);
    msg.setDestinationEntity(112U);
    msg.plan_id.assign("AFYWZCMCNMQJIJKFBIXLWMKFXASGEZMHJQJBNSSUCVYDPHKPWXDSUSPPOEBAY");
    msg.description.assign("DZUMHIVOWFBROMUMUTPEWTFFXHXFWQXRXFIOCFACKQQI");
    msg.vnamespace.assign("LXBAIQJVVWMNRFCAUWWSAALRSIWQVDOIWPSIQMRUYRFCJVKRPWSZOXCUQTXZUQHDJSLGAZKCMEBQFPNBMNTJHGYLEYSLCZUXCWZLVBHMWUIPPJUQDLGDADTTALCXOSWWZTBVQFMBDHHPTAFFPHJAXZGGCFRIKDHNYUMKTRICNQRNYEBKVUMHHSDAEYESOQRYXGNLKCMIBKIPYEYONXOETTFUEOZOOGVYKLGPTFDSXDZJJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("EKEZMKQAPOOGPRHLQYDSMUDMCIG");
    tmp_msg_0.value.assign("WATNXZNVXHYXOEYXISNLLPSFUEGZTGJOHPPXHPDWUPSFAFXEHZKTINQBVZBPQZVBLGQKNDREPLKJCMBDJODDFT");
    tmp_msg_0.type = 185U;
    tmp_msg_0.access = 47U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("EJAGAZVEGZSYVJJYRAWKQGQFQBYXEHDITGSJTENWHVNKACCUUIBSRGJVZAPLCIDMNWKDCBELVWYTYOMPPRQENNKHYTDMBDVMOBCJZEPDAAFBCKEOTFRDDHYNSSLWICPPXUQPIKRJXZGLPQUISNFOOUKVRTPHPIMMBOTDADFSNVXIQACFCVSYIKHBU");
    IMC::Pulse tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.296554949268);
    msg.setSource(24710U);
    msg.setSourceEntity(167U);
    msg.setDestination(64407U);
    msg.setDestinationEntity(222U);
    msg.maneuver_id.assign("ZFTUBCNPVPKIZOUYLWIMYDAQIUADBBEPTPXIOGCBTFAOZBESTXSCBMBGRBEYKMNCVDRHFIWFVVMQGLPMLONVQHJNDOFISLGYGAWMHBXUKJEATCNGXUOPHET");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 703U;
    tmp_msg_0.control_ent = 6U;
    tmp_msg_0.timeout = 0.9030044864;
    tmp_msg_0.loiter_radius = 0.289516922738;
    tmp_msg_0.altitude_interval = 0.295418342624;
    msg.data.set(tmp_msg_0);
    IMC::LedBrightness tmp_msg_1;
    tmp_msg_1.name.assign("TGIYOFOETCVCJWZWTXRXSWZKOECRDBPYVUJAWHQPBXSJROFIHBBGQQVIGPRDT");
    tmp_msg_1.value = 158U;
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
    msg.setTimeStamp(0.554022705072);
    msg.setSource(15868U);
    msg.setSourceEntity(181U);
    msg.setDestination(11376U);
    msg.setDestinationEntity(9U);
    msg.maneuver_id.assign("SQEHDLAKLMXAJNGEFYVDOJZFHJWGTWXFWDKTTSUAHIQWKQCRUBGAQUZLCLJRNFPLEPDGTYZKIECHHCNQNRQWIMUOK");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 19478U;
    tmp_msg_0.lat = 0.0926668659377;
    tmp_msg_0.lon = 0.165091191191;
    tmp_msg_0.z = 0.322812036563;
    tmp_msg_0.z_units = 243U;
    tmp_msg_0.speed = 0.446117374444;
    tmp_msg_0.speed_units = 10U;
    tmp_msg_0.syringe0 = 202U;
    tmp_msg_0.syringe1 = 230U;
    tmp_msg_0.syringe2 = 144U;
    tmp_msg_0.custom.assign("VEVPRZZKAJYDCOLJTYIQHFYQZYWTWXDBLKJCTOMEHRIFTUZNDFPNWGEWHBGEUKMGPWYJGTNUVEOXVWPZYXAIIZSHOIEAOKZZEIBEIFNHQVLCNTABUGZJPLRVHCXSLKZDUEYSLFGNXQWWRVYDUUMPHXCRJOMTFDHVLCBNABXJWQPYNSCMQRNSUKYTAIQGADDRMCLAQHRMDRFIKSTGFBFFQESUJAOVSIPRLNXOQSCXTPKAVKUDWGBJGMMO");
    msg.data.set(tmp_msg_0);
    IMC::Calibration tmp_msg_1;
    tmp_msg_1.duration = 12992U;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.138308863215);
    msg.setSource(54664U);
    msg.setSourceEntity(243U);
    msg.setDestination(45301U);
    msg.setDestinationEntity(230U);
    msg.maneuver_id.assign("KLXETSBNOYRXXOLXDRTADNPOKASGYCEASHBMXYFMCAURQSPBAWVJWBMHOERJEZVSFFBMHUKLZBBFKIXGWTJQGSVUCFPTCYQUZSYEANMGBCDQDIHZSYTHKFNJZWEGDIAXRRJQCOONFLTJWDHKGTIOVYZJUPLVVOQQPGCJ");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("DZJPOUXUNGKDHABLLPBLWBBUKRLWOTZGRBTIDSHYQIQEDMDLXKLHMJOEMYURSKTAQMTMLONCPRWRRJTGTRFWJZASOARPXWEECSIEXFGNKOZMYHYCCDAWAP");
    tmp_msg_0.formation_name.assign("OJONKEKPKKCIUPUJUVMURRRTJJQOFUCVUAZIQBSIMWYQTCHWZTXHDSQTSOLXZVWJMYSEMJMFGKGTEFMVXYLMTUYLWATOQZMGISPKSABEXJCFSRBHHAZADCEIRONGZQIBXPHLTXNYLUDBPDFL");
    tmp_msg_0.plan_id.assign("EYNSUURTWYTXXTCKRWIFYOMWVSNYKQEWEUXHCMLNLMYTHLFSRROSZMSYJIGBDGASVLENYJELIJTGFRJDCRQQNDPRHKFUI");
    tmp_msg_0.description.assign("EOGPBIKBMYDBUKWDFJCOSODZXCXSTSMHDERRYKVMJDETBDYGBETGGDLHLFFFMODDCYYSJYLGYASZUNHUIZOXPJRSCLUTUVIPCEZZVLHLYIZAZCBHJNKWUMEGWAAZQOQVNWVRKWOHTFBRFJZKBRQNWXMVCQFMJHMMTQFJKPRVPAUZEUERSWRNBLUVSNTDYKOAOJQU");
    tmp_msg_0.leader_speed = 0.863626574717;
    tmp_msg_0.leader_bank_lim = 0.63649110832;
    tmp_msg_0.pos_sim_err_lim = 0.478705760559;
    tmp_msg_0.pos_sim_err_wrn = 0.993541506915;
    tmp_msg_0.pos_sim_err_timeout = 25282U;
    tmp_msg_0.converg_max = 0.9115847173;
    tmp_msg_0.converg_timeout = 36453U;
    tmp_msg_0.comms_timeout = 50563U;
    tmp_msg_0.turb_lim = 0.245975551566;
    tmp_msg_0.custom.assign("UJPFPYYPSYEUWBDDBGNLARKAYNPKZHGGZIISBLJGETZIZEAEOGSWCOSQCTDFCTETKJQLHDULQXTXNLQKPHMGOJNBGOWHQZXMMIVVCYWIXMAQFAYDVHMARKGSMVZRNULVVWDIXJHIRZFMVTWHWIQOOWMNAFQRJLNBOKTMXTWGLSBXX");
    msg.data.set(tmp_msg_0);
    IMC::Pressure tmp_msg_1;
    tmp_msg_1.value = 0.567647842886;
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
    msg.setTimeStamp(0.739265600702);
    msg.setSource(47211U);
    msg.setSourceEntity(232U);
    msg.setDestination(2768U);
    msg.setDestinationEntity(209U);
    msg.source_man.assign("PMXECCEJCDEUHNAJDDIJLNOBHQVZECWGVDYXYGLFCDSSOYPHXTNMTPUGOZLHVXIGCFBUGSKRRSXHRUODSMFBHEPKNUBWWZGWIIFFJLQYRQJCTBNI");
    msg.dest_man.assign("EUWZLZLIWVUXFKOEIWMNGHDPGZDTNOXBBVDKYSJWUSFHPIOKDISQAQANYPDOUVAIVWWTHHREUYJZUBAMNMVMXXGTHFSKNOHIPGEZCALJGTYVOQQUQIDEFRAQIJBQOUPNRCRMMJFKCKYJGLF");
    msg.conditions.assign("ZOLGRANTTHETUJWSJDQKHWDVWEVPLUZVYJWAPUPBLBSQMKAPCIXMCFVXZDXOIORRYUOGXQHQCHCTYFHYFAMSHVZJCASIEMKGVAWFDSQBEJMPYIBW");

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
    msg.setTimeStamp(0.316866102944);
    msg.setSource(53258U);
    msg.setSourceEntity(77U);
    msg.setDestination(12660U);
    msg.setDestinationEntity(239U);
    msg.source_man.assign("CNRUSVNXFXEVIGQYQOOPWSFLOLLOZETKXMLTEYXJQVIBTHSINMLWQEIJWXGSEFURWCBEYHUWGZPFWSEFOQAMBPFRNKCADAGAKUWENMBZVKGLYCJOACVBHKIVJBWWQDUYSJMGYSDXDIRCOALDCYBOTRFXDDQQMGBTJDGKNUCPOZAHZBMYVHEKPUSFEHVPXKZXSKFDXKRI");
    msg.dest_man.assign("ELBUAFCMMDJEEKRQBBTDJXQDISEZJUTXMNTNKPHCDJANQBUMOCMOKNVLOBRQEQWMWTPO");
    msg.conditions.assign("AYHYFQXZWISFPSVSCKNLDMFHMROHNTOLMZJNIEJIPLAWRJOBMYFGCYUWFYWTEPNVRCEHQSYHXUOXGAGHEUBXXUFPEOVFTIACJKBIAKRLDULJGCYBGTSARGZWQCWZXPMMTZWPUTGDAITKPQQIKLBYMAQROYRQBEQPE");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JQJZVKEZYEFYJXXXEMOMWNIWNWIQDDMBSAVOAZLXGCPNDECFCRSEKHYVHSDJPGBISIMYXDHZLFQFBAFZAKWLCABTVIJZOSZOLQCVNUCOQLBTMVTPQZUUSNAHYWTGCDQGXMMBVBKNDSIJBFLQGUERWPRFSNAJWODALRHQBUTIYKOIWMHXIKYTXFBLPFYSJHNPGPYTUTVEUXLYRWCAGVUKXEWHCGHQGMNEASZUR");
    tmp_msg_0.attr_type = 184U;
    tmp_msg_0.min.assign("EUPARBQYAVHRAQJFIYNPCATSUTWDUOJIOSRQQWPLBNQEXBUYMNMHHIYKWEYXRFETROOMICZDNAIASJFSMXWGSLUAFWKQVKJZPEXXOEWLFZDAZGGLRVCEPXSDKCYKWNJTOILQRRQVMZLWVBFLECWDBZF");
    tmp_msg_0.max.assign("DXUOMFHNBGBINPIHIOJTMNXNYGXWCOIRDHAQOYEGJXQRHEFWKPPWYBTLCYGNFUBSZGPEJSUULPUVILEUMMGKSVEWMYHPCKXRKMXSRHIDJXDVFKUSWQFJSEVWFZTGTKAZD");
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.749043534354);
    msg.setSource(3514U);
    msg.setSourceEntity(230U);
    msg.setDestination(32800U);
    msg.setDestinationEntity(1U);
    msg.source_man.assign("FUEZMALVJBICGFWCRJCOITGXYDGNMWJIQHUAGEPKZXNVYIHLWPPSPDKEDORKKXTRJSQKCLCVXUUQRRCZAWBYMH");
    msg.dest_man.assign("UURSAWWFHUCWGSXCCWKQUICDFEQMBAXLAETPMLQFSNZBEEOQJBBYTAIPBSOLBWZVVIFE");
    msg.conditions.assign("HPZRHUYCJQSIIZWPDFXNTZJKSJGAXDMVKHYWEOGGCRUMVNURPQEUYUBOUHRPEZQIFWXKAJNJYSJJWXYVMZJQMERBHULZBPDAEXCAYTFZMTBHOTXLBOJCKAKWABAMOHVPHRLVGECXZTNYFBVWQSBSTNFLGYLFVGRTPPQSZBDANDSKA");

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
    msg.setTimeStamp(0.663418386937);
    msg.setSource(12202U);
    msg.setSourceEntity(162U);
    msg.setDestination(40654U);
    msg.setDestinationEntity(212U);
    msg.command = 68U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GVMASDTYJKEJURVUGQHHQGBZUFDDBZTWLFXEJFAEPKPFWSYAKKDZWL");
    tmp_msg_0.description.assign("PHVWJJNXIOHCUXCDCBDXNKAIBSTKGFXLTRNSTJYDFNQLOSPWLMDYCBPBSREUSHVMNTVLAXFVDALZMQWTQZNWWOQEBOQLKZQBYJUWENYHCVLRWERLHGDWMFJFGTJKYUAZKXAEGLUIPKJCHXQSPWIDXMKIFFIYOEBATG");
    tmp_msg_0.vnamespace.assign("INESNYRZWEYECRXIOTIMFSPPLUDHXASZEGTUPYKVBTPIVXBQJHQDVBGDTFXTOYECFADZDETQVLYBWHAFKOQSTCSJDORXTOKJGAALKNNIVUXQMRUWJASZGAZVZMWOOCLUPKHRFLMDGTFVBWININPNBZRJKUUFYFWJSZHHKQRVTNJMLQXENYCCIQRECHYJKQCCVLIHSMFVZUNWWXOLYAZMJMHPOBHMDUXGPK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NZIKQRCTRDAW");
    tmp_tmp_msg_0_0.value.assign("DVTQGAGBBLSRINOGLEZGAFOQXKZBCZNRIIPFQNXQODGITMRKKMITBQRJUPLSHAIMKIXVDZAHSOVJGSEJYLCXANXPOQEDMPVDBYLMXCVUNCDRCSAFWTOUEHEBMOHNTIXFWEXGHZYWUQFRZDSOO");
    tmp_tmp_msg_0_0.type = 131U;
    tmp_tmp_msg_0_0.access = 136U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("LTYTJEWMEHYOQKOGLXURMXJNLKFHFCEEOBSSFPBOZKWURXIGEXPWPJFJQOIDBZASYAZRZFSUSAEQNRMR");
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
    msg.setTimeStamp(0.862984310596);
    msg.setSource(37176U);
    msg.setSourceEntity(134U);
    msg.setDestination(6250U);
    msg.setDestinationEntity(81U);
    msg.command = 215U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BRAVSVCMIVSOAYTGLQGNUGLHKNYAZCJWQAYHSYWRTWHGYQPRUPKRGZVPLBEJDZVDMPPUEDAOYOEDVXRTZSRFLNY");
    tmp_msg_0.description.assign("QFEKRUJWLRUNUBYNFTKNUNQD");
    tmp_msg_0.vnamespace.assign("IIJEQGCDAJGCCHDKEYBSZSOWHADOPIAUELVJOTDKBLTNDIWFSYNXJCEYHJZUUVPSMVKKGWDZLCPWXXESOLCDIONGKKSKXIMSQNICGWVXNABSUHBFCVMJOEUQZMEXJNNOSCTKIQPMKLRVYVTWUPAGEQFUAOYXHRBZGLNHHTBJMGJXRPTFULLRFZWOMQVXZHDIMDJNPFLQRPAYFRXRLEYBHYSWUMPWMIGKHZRAVQFTYQGFPAUOYBBERWQZTA");
    tmp_msg_0.start_man_id.assign("YYKUANQOAFPMVBAQKMNBTQRKHUQWJFFXNVLACVZVRGJQRYSSQHJTOAJXLYGFYULIEXASHMHPYADNMTBILWBQMBXCSJTTUEMDTDKUIUJWZAILXZPZNTGSZOGECIPCIOEACSGOSEZEJCDGKPDCTJHFAYTTGBZBICFHRLMWEBVPSFDZOKLHPBRKNPGWXIWUPRUPOWGBZWUCKYNOJQERYZVXRLCOIHKSLVXHEVJFNXD");
    IMC::SessionStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sessid = 1200783906U;
    tmp_tmp_msg_0_0.status = 73U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.705612650841);
    msg.setSource(12612U);
    msg.setSourceEntity(23U);
    msg.setDestination(53700U);
    msg.setDestinationEntity(143U);
    msg.command = 11U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DFGXAIJLCOEPLOTMITURCOJEJKWPUJRPBDPBHNDLVBZBVGFEWPAYUSQYTCRAJGMGOHIMDSTGJHDNHNYPXOLHEKRTKBXAPOMNZQFVZRFDEVTREJMNFZYCKCSVTMTBNUXCGKKHQHJQWSDIGBSZYPORWDFGMDFMRREMUISBJV");
    tmp_msg_0.description.assign("DPDBCOJTGSSVSRELRBFLYKXKEZRMRXIUYMWVJZLHVYNUEWPOHFOZITQPJLZHKSMKAZUTRTKJAWLCQIMCVTWYNBHHOUVGJGULPAQNULHQKFZQMNNUOMRCBXABGVCDVGBQFYNWEFHDTBNASCKXZJZGCEDKOOPSPXIHBMPATRWKEFTECIISZCIAXMJYGOXYDQDSAPUFVODTHMKJVIDXWHAXWFRNLXWUNRQIAPEDTRGFJLJSNEPYLCGVYZIWUFYQSB");
    tmp_msg_0.vnamespace.assign("NLBCTIFOWDHXOKERKDIZUFCWJG");
    tmp_msg_0.start_man_id.assign("QJAQWJYMSVSSJUEXOGNSXJAPFFUMEHGBRWWBBUBZEJIRNKIFOPCZKHZNPKITKLYYCHGDMTTDDLLFGGBQFTBLGHDOXYJHYQOZVNOLIWPWVWQZEWVZNSNMRMOBDMTIKQKCSQCUEARZNVWEFQXAOTT");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("AGMNPPKKRMABYSYDWTNLWYZCPEFNIYKLQBCECNVOJUWHIVGNRGOSGUNERLEYHMTVIFHLLOYUKBZZFHQFJZKVQGOOVXWOMLKJZRVJALEVFSXFDBCIADXEQTQY");
    IMC::Takeoff tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.845836802326;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.794296794052;
    tmp_tmp_tmp_msg_0_0_0.z = 0.367928117601;
    tmp_tmp_tmp_msg_0_0_0.z_units = 3U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.998712077796;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 45U;
    tmp_tmp_tmp_msg_0_0_0.takeoff_pitch = 0.908794821518;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("OMYNVTSEARGJXIRLKXIMYWOIOEETJXOJUBJGMKBKESDPFWRHFVRXIHJWRDFPCAIAKKEZUQBYDUKZDQGYTVTXHJGQDVNIRHJPFVOAQLWFWYEXJCNC");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::SoiState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.state = 200U;
    tmp_tmp_tmp_msg_0_0_1.plan_id = 13234U;
    tmp_tmp_tmp_msg_0_0_1.wpt_id = 204U;
    tmp_tmp_tmp_msg_0_0_1.settings_chk = 32935U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ONUWLEIUSXAJOHETBGFYSXHVAMBWKIITHWRJIKYJCMUBNLAACRSXOZBEMCALTLYKKNKLPPVQRNLFFJZQFBETWWXNSMRRPWBJWFCCACDGLKXMZMGFIBHNVHWGNXLXBGBISUUQGJLRVSADGSLDJTXDJYQYEFYZVQMUPCMKSEHRDICZETKPEKPRCVOIATMOTOEAPDENHSOWXOUAZUDYPGJFQQZVZSVQDTHWPDBPNCZFDXKUVGYZYUGOI");
    tmp_tmp_msg_0_1.dest_man.assign("HOOOWWPAJGLYQYEIMSLIXSXNLSLMKDZEBZUYGMQTPRWYJTNZLPRHVTLVSWPHGCUQJNGLOSNCSGMYOEVEEJFBGXLORWNJAQIRIJMYVOTJKZIXEIAAKDPKZYPCFWODZDMPCJCFCZVWXIDNQIZMHENXDHFGSHJRAUIULAUXUFFYXFDLKBVXARKBZ");
    tmp_tmp_msg_0_1.conditions.assign("NFBGHCFJAANOJIFVJUSTRZDCRJMIMKLYITJROLYJXYQUDIGVDBSIOPABBMMOWCLSZDXEVWMAYQBZSUYPBVLBOWPVCCGTLIVFZRPXATXCMAXDUWXZZVUYEPIGAYRIQLOXKZKPDSKQOFKQHBVDWMZUTXCEETBLKQWKLHGANMH");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::SmsTx tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.seq = 746810100U;
    tmp_tmp_msg_0_2.destination.assign("YCMSLRUEDNHOSYIWZIDLRSCKMMFHSAYDCETIUQNKYQDOCNBAPKNLQFJQQFYDSGIZPHDRJLPCYJSPWTOXQATESVIAJVBAVBTFUYROFNYUBGFVTZDNPLGZYAIVVLFPOJZGTWWMMQLEQDHXHLTKIPADRASBECLACTDMMWHGVJPXFWKJUHBXZOQ");
    tmp_tmp_msg_0_2.timeout = 41259U;
    const char tmp_tmp_tmp_msg_0_2_0[] = {-83, 118, 85, -97, -61, -18, 117, -13, -18, -73, -65, -39, -2, -6, -15, -53, 68, -15, -32, -2, -114, -56, -17, 41, 82, -86, -113, 74, -85, 99, 26, -112, -87, 27, -36, -92, 1, 93, -22, 89, -99, 17, -105};
    tmp_tmp_msg_0_2.data.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.392388544871);
    msg.setSource(12173U);
    msg.setSourceEntity(223U);
    msg.setDestination(15051U);
    msg.setDestinationEntity(234U);
    msg.state = 21U;
    msg.plan_id.assign("JGOYWKOTUQMBXVQPPPHHOZMIHCOZQGFQSTOBWEZA");
    msg.comm_level = 80U;

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
    msg.setTimeStamp(0.181178589221);
    msg.setSource(6032U);
    msg.setSourceEntity(65U);
    msg.setDestination(52392U);
    msg.setDestinationEntity(222U);
    msg.state = 188U;
    msg.plan_id.assign("UNWFNUGQMVBVNRWWHKJCPZAKNYJNOGGHXKWBEEAEQHEOTQJDCUWGMVIGFFHMQSPFUUZEJNMMBZPYVDLRSICSILDKPKULAMXROYXXQNGFIYAADWLKOVINMLPOJKCHHHTQOAXKFXEZUVSICVEZWIUPPYECHGGPTRFJBIAULXHFJIQCTGMRTTTDEMGPABRV");
    msg.comm_level = 89U;

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
    msg.setTimeStamp(0.571548055279);
    msg.setSource(49121U);
    msg.setSourceEntity(14U);
    msg.setDestination(65502U);
    msg.setDestinationEntity(65U);
    msg.state = 154U;
    msg.plan_id.assign("YGJJXHWPAAHZREOCUFLVOZXMXGDSSWQUA");
    msg.comm_level = 51U;

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
    msg.setTimeStamp(0.0310856018039);
    msg.setSource(3769U);
    msg.setSourceEntity(83U);
    msg.setDestination(64657U);
    msg.setDestinationEntity(108U);
    msg.type = 200U;
    msg.op = 115U;
    msg.request_id = 60531U;
    msg.plan_id.assign("ZIRJATWWOADAYDFUPQMBDSFFCTFFRPPTXCBJYQTKFPILROIBIENRZMZPDBDH");
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 26U;
    tmp_msg_0.goal_id.assign("ASWNVNLHPKRGWYSWFHREALLVHCCWWRAUSJQIISKJFILHVVVLXKYZZXGBPJJPQDQQXLDCQJQAKVLNIOTVGFJPPDHRMNTBEFTQXZWHPTKEUEOXKEXHUHSCTDARHWTJRCDRXIYUMEGOQNZSGNYKUAOLBJODCKIRTJBSCWZUFGYTGODUVMPRTRNBFFGYPZMMZLOOYACNTIBUIBNEAAXKGHAB");
    tmp_msg_0.goal_xml.assign("EMXNTITUSHGUXVKRICVSJGELYYOBUMYSSQJQNBASXGEQUIZYUEOQZCBPDDCDHKBPMJXCJCAMZZQGMQPKVZKVGRZBNYHRTUAFFSBTWBYOKLMRWQXHHLBWKTPLGNDFZQNAMQCKWGTPORBISDAFDOVCMIRVNHJATJLRXUCIGGAJSVOWUPJQGXOKUMSDTIXLYCOV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AYEQRJIPPUYYUTDXHIMFBRLDKUSXSMNKSTIVIXUNRRLMUKFPQXVFORBLIZECEMJUOZRCTZHOQCWYHWYAJLUGNYGVBAEYCFOHCDNEBAARAJTJZQTWHEXNTKAOZHMJRVWZKHUPIGFZQDXRJMJDYGGFETQNOKQJERXIWLBLV");

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
    msg.setTimeStamp(0.80759629242);
    msg.setSource(57274U);
    msg.setSourceEntity(159U);
    msg.setDestination(23569U);
    msg.setDestinationEntity(112U);
    msg.type = 175U;
    msg.op = 218U;
    msg.request_id = 36928U;
    msg.plan_id.assign("ZORYCIPGJIETWNXJSHXFSGMQKGAKEMRLKPAVUYHZWRVNDKBOCBOTEZWWMJZFRNXLPIJBFZCXEMFTCEGTBIDZKHHMNFCRBKHOZTJQUI");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.803271548736;
    tmp_msg_0.speed_units = 1U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DFZLDSBTKJVZIVGMGKQXHAAQPNAZUSWKFEJBAWTONKMITJDLQZRVPPLWVZKNCDYQEVRGBRHGEDEPMHAJAZNYFZYCGOGSKFLONMYCGLOSIYXSKOLSAHBAQXEOAWVMWBRILQHQRXLRLGGITBSERCYBJPWHIINUUXREFZCUDJIXXSMMRNUONGLCICPUCEVJBBUZUQSIOAHEFOPNVDMTBPOJDS");

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
    msg.setTimeStamp(0.628286231325);
    msg.setSource(56590U);
    msg.setSourceEntity(242U);
    msg.setDestination(28253U);
    msg.setDestinationEntity(211U);
    msg.type = 162U;
    msg.op = 175U;
    msg.request_id = 41094U;
    msg.plan_id.assign("AUOTGNWHXZCDBEVUTOTEKHNWFLUKXINPBSYAMSXMXFJYJFOFISLLWLVZENMIKZCHEQNEVRTPSQYTYNCHJGGPVWRKDKVXKYULIJJSPVQXUKYJXKCWSJVEDTEJCAPYWVIGBYKOOPCLGXEHTIPTGFUPPDDHXZXGQRYRYHURQZMLMVCTNOBILDFHBRSR");
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.350591478898;
    tmp_msg_0.ch02 = 0.835947778566;
    tmp_msg_0.ch03 = 0.893391714954;
    tmp_msg_0.ch04 = 0.00382117220665;
    tmp_msg_0.ch05 = 0.255542211302;
    tmp_msg_0.ch06 = 0.85244141052;
    tmp_msg_0.ch07 = 0.348978736245;
    tmp_msg_0.ch08 = 0.202572588156;
    tmp_msg_0.ch09 = 0.15625657344;
    tmp_msg_0.ch10 = 0.255740210808;
    tmp_msg_0.ch11 = 0.257227407274;
    tmp_msg_0.ch12 = 0.837254149686;
    tmp_msg_0.ch13 = 0.188293510342;
    tmp_msg_0.ch14 = 0.117546257706;
    tmp_msg_0.ch15 = 0.452827892061;
    tmp_msg_0.ch16 = 0.400521821799;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LRMBHBSYETHZLNNMGUQGLWSDIOLGJPTCEZXMROQVINTVZJCFNKKSSJLADVHNMSIDPTNUPCQTHUQFQGETBHJWHMMTTTYGRWPIXVWXZYXD");

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
    msg.setTimeStamp(0.0808647888059);
    msg.setSource(52273U);
    msg.setSourceEntity(80U);
    msg.setDestination(58888U);
    msg.setDestinationEntity(6U);
    msg.plan_count = 58235U;
    msg.plan_size = 164095663U;
    msg.change_time = 0.0717659780115;
    msg.change_sid = 50304U;
    msg.change_sname.assign("ROOLRRKRTISZOBLRGVKBKHSDPPNFMYCPUPHRGZYCEQHANHEAXANSNFJLELSDMOQHIQOCOYCYUSBIITJQWQSSGEYLWEQTIXOARPTSBYMZHDLMRJVEWPJUDQUVJFXVRZZXLCKJSERYVZIJKBIGXLWQJGAFHADPKNPZDMFADTBKTGYCXGDUMWETIVYCOIGXWMFLXZNTDVBPTENHUNMJVUIHNVQZXWXOZUOMKLJUMBCKCF");
    const char tmp_msg_0[] = {77, -57, 36, 87, 106, -20, -128, 50, 51, -56, -107, -68, 100, 36, 83, -80, 72, -92, -18, -103, 73, 104, 16, 87, 44, 101, -115, 48, -115, 46, 2, 124, -48, 125, 29, -16, -85, 48, -8, -23, -108, 62, 54, 100, -117, -73, -71, 104, 110, -2, -13, -16, 16, -14, 72, 54, 29, -4, -101, -12, -44, -66, 79, -15, 35, -37, -83, 86, -90, 58, 11, -72, -2, 25, 42, -37, -55, -110, -50, -113, -96, -103, 5, -126, -86, -8, 8, 112, 87, 15, -57, 36, 14, -80, -61, -45, 118, 91, -92, -115, 62, -117, -41, 113, -85, -127, 88, -31, -23, -93, 9, -35, 42, 16, -57, -21, 117, 46, -94, 52, -13, 0, -70, 58, 113, -10, -124, -58, -63, 36, -96, -3, -24, -9, -96, -110, -51, -23, -102, 85, 68, -87, -115, 46, 86, -127, -62, 10, 5, 118, 15, -40, 103, -79, -122, -33, -109, -67, -105, 81, -74, -89, -100, -70, -93, 108, 93, -71, -17, 103, -126, -30, 32, -111, 78, -101, -17, -32, -111, 35, 97, 113, 35, -51, 95, 95, -76, 50, 12, 59, 84, 17, 93, 118, 110, -104, 55, -125, 119, -82, -89, 69, -78, -99, -112, 75, -35, -123, 3, -18, 78, 30, 71, 94, 61, 47};
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
    msg.setTimeStamp(0.463421095741);
    msg.setSource(3152U);
    msg.setSourceEntity(71U);
    msg.setDestination(58810U);
    msg.setDestinationEntity(252U);
    msg.plan_count = 26222U;
    msg.plan_size = 2776615639U;
    msg.change_time = 0.260970407515;
    msg.change_sid = 25162U;
    msg.change_sname.assign("KGWPXJXYFTJTHFWMWCOKQMRSHQAVEUHAMZCHDDKKXDAGZXDSICIZOIUTCKTLEAWUBGILRZLPBHMPZJXEXNJIPNCVLVPNZOHGTCWAMQYLTDPJFBFCJHATAWZIOOMSSNWYGBGFDFELIYVYIPFZBFQEWXUUENNFTDSBAPQLYSQTJQPYBUCA");
    const char tmp_msg_0[] = {91, 111, -26, -68, 8, 88, -5, 108, -16, 102, 25, 126, 36, -72, 62, -44, -67, -41, 103, 50, 68, 21, 49, -84, 43, -71};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("OPMTYQHHLEEULETZDALHRCNOURXHDLEFEUATXLRJKDYDEBWOVIVQVITKDHNIXKAIIZFKRPNFQUOOWGNFYYPQZZQAGOPKRFEHFPSGMIXYGVIJXSIAFOGCRWZSPVLSBRPKTNCKJLCZOWQBDHWVSHKSAQYSWXNDUGCCUWIVBBXRAJUKAJMMJXVXQZPTQLOHJBNEMJHWUVGECTLSMTFDACUQPNDBIJDYNTOCAFGKSGFZSZUXWBJLGMEMYRBWY");
    tmp_msg_1.plan_size = 52889U;
    tmp_msg_1.change_time = 0.280830022022;
    tmp_msg_1.change_sid = 51045U;
    tmp_msg_1.change_sname.assign("XMURSRREPVZHQVXAJFI");
    const char tmp_tmp_msg_1_0[] = {24, -71, -118, 86, 34, -109, -112, 64, -21, -60, -103, 30, -61, 111, 122, -6, 10, -128, 31, -102, 89, -98, -98, -1, 81, -11, -55, -107, 92, 83, -14, 57, 65, -7, 59, -108, 40, -108, -89, -15, 121, 97, -109, 53, -126, -5, -24, -48, -44, -49, 98, -13, 7, -94, 15, -51, 109, 97, 109, -119, -32, 72, 2, 32, 47, 18, 70, 80, 103, -35, -56, 48, -89, 50, 53, 42, -47, 15, -117, -84, 4, -44, 5, 119, -103, 104, 94, 60, 1, 27, -36, 74, -8, -84, 94, 11, -9, 86, -43, -109, 92, -106, 35, 4, 69, 16, -27, 122, -61, 120, 17, 46, 1, 80, 68, 59, -106, -56, -21, 63, -18, -43, 57, 9, 79, 28, -59, -97, 121, 110, -61, 35, -108, -124, 46, -127, 56, -42, -11, -6, 57, -105, 31, 10, 10, 3, 35, 39, 70, 31, -64, -122, -31, -6, -14, 119, 124, -54, -74, -128, 111, 68, -94, -79, 13, 34, 55, 63, -123, -26, -102, -69, -122, 28, -39, 58, 77, -73, 27, 82, -92, 40, -9, -119, -108};
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
    msg.setTimeStamp(0.539954331197);
    msg.setSource(8451U);
    msg.setSourceEntity(141U);
    msg.setDestination(58248U);
    msg.setDestinationEntity(189U);
    msg.plan_count = 2477U;
    msg.plan_size = 3032310407U;
    msg.change_time = 0.785800412229;
    msg.change_sid = 21376U;
    msg.change_sname.assign("SDAZMCTEMWIARXAMJBHEFHNPPRMQGUGMLEPRALEVVFBITTHKNKGIYIXQWIZOGPBSLCYVDK");
    const char tmp_msg_0[] = {13, 52, -51, 23, 16, -51, -50, -73, 94, -34, 87, 65, 13, -26, 93, 67, -58, -112, -29, -55, -2, 11, -120, -47, -9, 67, 53, 120, 64, 16, 51, -120, -35, -107, 96, 94, 79, -64, 37, -124, 48, 94, -39, 97, -57, 90, 121, -43, 16, -65, 46, -85, 105, -67, -34, -71, 16, 50, 80, 114, -55, 93, -41, -97, -41, -92, -85, -10, -6, 70, 28, -83, 112, 112, 31, -107, 79, -60, 104, -18, 89, -57, -99, 59, 47, -51, 109, -27, 28, -90, -123, -12, -106, -86, -88, -16, -105, -128};
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
    msg.setTimeStamp(0.380822184731);
    msg.setSource(16489U);
    msg.setSourceEntity(81U);
    msg.setDestination(6490U);
    msg.setDestinationEntity(3U);
    msg.plan_id.assign("UWUOODCGCJHXDXYCEBIHRKPBUYLRVZPTPUHFYFQYMZAVVURVBNI");
    msg.plan_size = 8186U;
    msg.change_time = 0.560484008299;
    msg.change_sid = 44913U;
    msg.change_sname.assign("WXGUOQFCWSVMYEMTXH");
    const char tmp_msg_0[] = {-51, 1, -21, -8, -127, -118, -7, -45, 111, 109, -2, 45, -116, 50, -109, 69, -102, 89, 12, -20, -40, -16, -99, -4, -81, 56, 22, -41, -44, 55, -6, -27, -74, -87, -18, -25, 57, 57, 58, 95, 106, -49, -23, 93, -94, -32, 26, 85, 104, -7, 87, 105, -116, 45, -14, -125, 79, 31, 17, -120, -66, -64, -31, 36, 61, 16, 87, 51, 80, 26, 91, 0, -15, 39, 86, -17, 20, 39, 0, 125, -128, -97, 32, -69, 32, 67, 74, 91, -29, -78, 108, -21, 15, 18, 91, -20, 26, -105, -32, -125, -95, 126, -93, 126, -68, 59, -11, 89, -56, 37, -33, -14, 73, 77, -128, 43, 43, 78, -50, 55, -103, 39, 93, -10, 126, 91, -22, 107, 60, 52, -66, -94, -1, 53, -106, 8, 13, -99, -100, 67, -101, 74, -17, 63, -22, -64, -5, -90, -35, 19, 101, -80, 98, 43, 58, -62, 120, -20, -55, 35, 55, 124, 118, 51, 38, 11, -8, 25, -29, -46, 7, -59, 48, 75, 37, 96, -31, 64, -75, -46, -82, -39, 88, 114, 28, 65, -6, 69, 111, 68, 126, -121, -24, 69, -40, 52, 112, -57, 44, 59, -97, 65, -75, 86, 94, -117, -29, -34, -43, 5, 36, 66, -35, 88, 64, -63};
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
    msg.setTimeStamp(0.949663324878);
    msg.setSource(32620U);
    msg.setSourceEntity(58U);
    msg.setDestination(21068U);
    msg.setDestinationEntity(244U);
    msg.plan_id.assign("KTTCPWJEZYBKQPFOYVGWFRSOUPTHSMEJBNWGLRTZZKSBQDCXSIKDLWYSYMAZYARCSKQGREBLXUPUMGDUXXGVGLMMPFRAIWAADWUXXNQFLKUZPSUUIWFK");
    msg.plan_size = 45179U;
    msg.change_time = 0.356053484037;
    msg.change_sid = 49301U;
    msg.change_sname.assign("LGUNBAYICPTFZOKZHWILGHCYBPMTXCKMHJRLGUGMEJSQRZDDHEYFXKEXFTSANJZXVJSGVCXJMFFUUUEYPHAMOPVQDTPUSLOPNAONHZLFVNTNWIEBNQSCQCDSAJXQEGHTIMWSLXTAJVKYSJUEBILRUUZGDDWGQDWJVRFWB");
    const char tmp_msg_0[] = {-19, 15, 70, 20, -111, -87, 107, 72, -99, -35, 40, -79, -9, -35, 87, 12, 16, 13, 51, 37, -100, 66, -55, -104, -71, 90, -74, -54, 58, 42, -25, -13, 99, -43, -11, 18, -59, -94, -64, -40, -64, 83, 3, -28, -98, 31, -28, -42, 56, -91, -35, -41, -90, -89, 41, -85, -70, -127, 32, 74, -10, -75, 34, -99, -110, -98, 36, -35, -79, -112, -24, -54, -72, -104, 94, 77, -18, -113, -88, 113, 117, 12};
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
    msg.setTimeStamp(0.788508221629);
    msg.setSource(34402U);
    msg.setSourceEntity(227U);
    msg.setDestination(57444U);
    msg.setDestinationEntity(186U);
    msg.plan_id.assign("DXYYDMHJEZZXVPNMNFESECKEZKLVTWZLBTPJOSSANOOTBTRZCXGJHJADGESLBKRMGUQCBURS");
    msg.plan_size = 6930U;
    msg.change_time = 0.827109868155;
    msg.change_sid = 28923U;
    msg.change_sname.assign("PSXVECPNJPQZBUTRFGBVVLLBDZXMARIHVIOXTYFTHVLMMTNAZSOHSCZXLJDVJKRJHZEFRBPWFNMYWSREHEZONFDYDXNOAHRDHIJYDCSGUAYEBCGIGGIIXQWNXUSREWCXLNQEDQCCQTUPCGRVJMMZAQKOSUOWFWAFOKSBGAUKBAFKEWKUZYLPAKLTMABGCZEOYUIMWTJWTHKEIUPYPVGVLRRWOSMZDTHKNXLYUBOTNFMBSYVJLQDXNDJ");
    const char tmp_msg_0[] = {-111, 32, 80, -56, -25, 6, -57, 17, 24, 32, 5, -92, -63, 75, 82, -114, 102, 24, 68, -112, 85, -87, 5, 106, 103, -114, -30, -105, 4, -107, 70, -21, 112, -117, 62, 111, -99, 65, 101, 57, 100, -77, 43, 86, -112, 88, 32, -89, -66, -84, 67, -79, -109, -112, 60, 87, -39, 75, 106, -38, 61, 15, 50, -27, 93, 111, 122, 80, -73, -56, 74, 42, 116, 87, 37, 8, -41, 15, 20, 72, 112, -33, 80, 87, 107, -100, -83, -12, -7, 45, -53, -89, 68, 20, -51, 108, -21, 49, -46, -54, 11, 93, -60, 118, 3, -53, -23, 104, 116, -8, -90, 40, 54, -50, -69, 57, -30, -54, -5, 102, 64, 39, -118, -53, -64, 33, 14, 77, 110, 102, 103, -59, 99, -3, -40, -83, 7, -53, -55, -48, 71, -78, -12, -114, 40, -93, 0, 97, -95, 121, 107, -11, 59, 107, -81, 117, -85, -85, 15, -84, 23, 54, 13, 31, -92, -117, -124, 51, -126, -30, -102, 51, -47, 12, -23, -34, -22, -46, 67, -110, -29, -78, 109, -29, -94, 72, 123, -103, 86, 32, 77, 14, -4, 95, 49, -96, 92, -75, 30, -111, -66, 107, -71, 3, -70, 18, -9, 18, -65, -24, -49, 77, -48, -29, -54, -73, 2, 100, 53, 115, 124, -104, -14, 23, -85, -37, 124, 52, 126, -116, -65, 46, -61, -125, -5, 2, 119, -122, -13, -34, 70, 78, 107, 78};
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
    msg.setTimeStamp(0.118105778013);
    msg.setSource(41118U);
    msg.setSourceEntity(61U);
    msg.setDestination(1729U);
    msg.setDestinationEntity(116U);
    msg.type = 182U;
    msg.op = 51U;
    msg.request_id = 11792U;
    msg.plan_id.assign("EORYPWALLHCTXHKLADKPUNZUUVSCPEMXLCTZVCYQRRIPZTDENCJRLBANITGMZTFIMPBQMSGGWEZIXJNKSGRFWQMAFL");
    msg.flags = 58922U;
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 196U;
    tmp_msg_0.op = 3U;
    tmp_msg_0.err_mean = 0.986340454882;
    tmp_msg_0.dist_min_abs = 0.214154246793;
    tmp_msg_0.dist_min_mean = 0.40769634911;
    tmp_msg_0.roll_rate_mean = 0.0487269600996;
    tmp_msg_0.time = 0.590143149866;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 13U;
    tmp_tmp_msg_0_0.lon_gain = 0.971449446187;
    tmp_tmp_msg_0_0.lat_gain = 0.570075487722;
    tmp_tmp_msg_0_0.bond_thick = 0.871616512943;
    tmp_tmp_msg_0_0.lead_gain = 0.710053976218;
    tmp_tmp_msg_0_0.deconfl_gain = 0.983960403799;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.838562095482;
    tmp_tmp_msg_0_0.safe_dist = 0.658676064092;
    tmp_tmp_msg_0_0.deconflict_offset = 0.973776218625;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.570026887105;
    tmp_tmp_msg_0_0.accel_lim_x = 0.430311695248;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UTGQOLADQSADEZHOIVJIABNGTMIEWWRKQESZUGYQWDLURUVWSBOPJRGGIUXKJPAYMLOWULRQLJDGEZUEZOIJRXDZNSBHHCJXBWURCTMXYHPJCAMPFFYBJYVHKQHQ");

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
    msg.setTimeStamp(0.977994228616);
    msg.setSource(23174U);
    msg.setSourceEntity(60U);
    msg.setDestination(15944U);
    msg.setDestinationEntity(237U);
    msg.type = 182U;
    msg.op = 73U;
    msg.request_id = 6951U;
    msg.plan_id.assign("BCNTSIHXMJBQYEYUCBTXOWQJKHJMPLGYGOXFDIZFUGRJIFUFKHQYHLDRPVHWXIMRIDTFCQGNKKOVCENMHJBHDXMWBWGQNPXNYLEGZJVGWSPWJQSYPDDXRJLWLOEYLDUQLYSJSQHEYUMPRQHBEOINUOIRUTHCAMUOLCATCVITDJEVLMSKVTYKIGOWZMDFCUAUVBAF");
    msg.flags = 35967U;
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 107U;
    tmp_msg_0.goal_id.assign("OKDTCKDVBCGMTINXQJBMAQIFFAWIYPYMOEFNSSLCZZOTSNCGEASRJMKBQRPDCVHSCMAXOHTEBLUPEWIQZLWLFDPJSHLOGMFNQDTBQWITKNYMWBPYZRPFURZUFEQCGHZBXXXHIJGKTIWCUFCE");
    tmp_msg_0.goal_xml.assign("QDPTXZJXCQSVLSXBANLZGMRUZVWVVBJCNWJTOADBRSAPUYGRJIFT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PRANOYURGPMRJTBFIIWMOWTSYGNHOSWPUFZLKQXKFBSSOXFHTZNVFOHDHOBDEEWQTADDKQXQMCCEEY");

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
    msg.setTimeStamp(0.350788858291);
    msg.setSource(57121U);
    msg.setSourceEntity(245U);
    msg.setDestination(39207U);
    msg.setDestinationEntity(245U);
    msg.type = 178U;
    msg.op = 84U;
    msg.request_id = 41767U;
    msg.plan_id.assign("PHEVKUAMNXQRZIJTSKUYWSJOKKQFHLPFLPRRCVQNZOFROLFYXKPTRWHWUZVMGFSOSGFCFJOYRIDLVUAHYGKTFBNZDBBCAUAUKDKAGERBPQHQWGLWLMDCTPNJXLEXPPZFADRTWNEK");
    msg.flags = 1882U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 1568U;
    tmp_msg_0.custom.assign("HNDMMKTYXCIQCXFBVGDGVRFGWVWSUELYXEGXPVBVWACPCCZRHWBTMZIUPW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NRWFLXGHPCGJGUEAMHDUMDUNABCUMZBYPEQIMWIPLQYUCECVOMOKYIBOLIFGAKXREAURQRKLPFFBSIYYGLGVURQYJPYXXGDEKJAAHAKACJIWQSDZNNTLKTXHJRSAMTE");

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
    msg.setTimeStamp(0.242671123281);
    msg.setSource(19232U);
    msg.setSourceEntity(206U);
    msg.setDestination(50253U);
    msg.setDestinationEntity(6U);
    msg.state = 180U;
    msg.plan_id.assign("VJOTURENBFGEQLDSIJYITPZKJGFWVCJAKSCLBOIFAGDZPCNPVPNORWPHCYIAGJNETSAEJMFDMLQNMVTXGWFVJSZZUFWNDTIKOIUOUODDQKDLYOTKWEBXUPEBHRTSHIHEIBEOFWYFVPGXAZQFOGBGSRHMQPCT");
    msg.plan_eta = -479852749;
    msg.plan_progress = 0.471673628883;
    msg.man_id.assign("QMJDPWUWLTVRBOCAXXUSHZPLVDGFLXNQJAUHUOINKEHHYBJRZYGGVTXCRPJTPAFVFYTBPWEOJYVEZVCDUKFONVVKEQKBZSQFXMGFMRSHHGYHEAWAHEJCCHWBIYDMBFRDQTYOIOEZSCNLDYKFTSNREXOXGLKOCXSDMNWJSCPDLGUTQLAOKNVJBFIWIZIPJCSQKNIDTHGUTRAQTGIUWKEPRRXDZWLIKZUSNQRJYMWMAZBZLBPMAEPACBXM");
    msg.man_type = 47103U;
    msg.man_eta = -1927352441;
    msg.last_outcome = 128U;

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
    msg.setTimeStamp(0.0906226685995);
    msg.setSource(56633U);
    msg.setSourceEntity(198U);
    msg.setDestination(16167U);
    msg.setDestinationEntity(50U);
    msg.state = 9U;
    msg.plan_id.assign("NSWNCPIMZTOBYPL");
    msg.plan_eta = -195361090;
    msg.plan_progress = 0.0416114784806;
    msg.man_id.assign("YJOBDQBDTITGVQLAMRZPYAGIR");
    msg.man_type = 23317U;
    msg.man_eta = 471326965;
    msg.last_outcome = 108U;

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
    msg.setTimeStamp(0.481137489803);
    msg.setSource(19885U);
    msg.setSourceEntity(10U);
    msg.setDestination(25237U);
    msg.setDestinationEntity(134U);
    msg.state = 181U;
    msg.plan_id.assign("PNFPWZJKBGGROIAXHQEKVGNURWSZCDGFFIAFGZYKPGKXKIIQHUOWBPLETHMOASAMVQRDYRRRNBUKPZTFCSXJXAFPUXHCSPSHTRPQUTTLQXYYZKUTLZTBJWGLIEDGBYFNCMHNAMEMSLCZQJBXMEQVLNLONEBCCJHWVSYCLHPDZQDOOWYEQIRWBOIJEEGUIFUVKUOXWDFMEQTJNWHOGKPVBXTDACJUCXSRWDAYDJTOKLLANDFZMZHMYANVJIBMSY");
    msg.plan_eta = -650141490;
    msg.plan_progress = 0.0415207058538;
    msg.man_id.assign("NDENIHSWWHKUTADSNRGMOWFOQJLOVQACCZIVTAZXTHRBIBUYYBXIIYVKECHWBPRZMQWENJMCLPNCZMBHDIZDAO");
    msg.man_type = 10895U;
    msg.man_eta = 407809590;
    msg.last_outcome = 156U;

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
    msg.setTimeStamp(0.0378534626243);
    msg.setSource(62080U);
    msg.setSourceEntity(57U);
    msg.setDestination(52337U);
    msg.setDestinationEntity(112U);
    msg.name.assign("IBBPMVQGWHERNBBLNUMDAEXGOPWVQULTGGKSFDWGMPBCRDJWCHENZHGGYUWOCOISSYSZRHUTEDLZAQYIDMBZNDTVSGOYJKAXCNLOVBMQSPXFTJMUJEKZUBEWFCAFYNKZZRYAZPLHMVORUQJKCCITRJRFXFZKVIYXAYTIBDPEFQHLYRPLOESRCCQPKQWHIAWGPWINVXMKAHTAEFXUVKHSXNWLTETXLLRJJ");
    msg.value.assign("RXNCRWPZAFKBUHNWYNMQCOSQBMELAJLSXRLTZGYCCYPISDAPZGOCEADHOULYYSKXXJUETDUXIVMRNTSHMWNDBFRFSQTCLIRVAWNHJAPPFUQBPLXFKASH");
    msg.type = 11U;
    msg.access = 191U;

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
    msg.setTimeStamp(0.976296207175);
    msg.setSource(8433U);
    msg.setSourceEntity(173U);
    msg.setDestination(24561U);
    msg.setDestinationEntity(91U);
    msg.name.assign("NGRXFLSLDEJDFUOFEULKIXBKPGTLAVBQSNFHIXSZYNDQXFDESMRFXKSZKDAPGJIQ");
    msg.value.assign("YRVMXFCTIHPMNLAZYJWAXYTZALYXJDDYNJUMNYVFQSPTMBSQOABUPSIQKLOUJDUUVVDSZTLPCLDUFQTFNGSJNWQSGUNGDBHMRBNHBZMIETKPEPZHGDRCOUAKQVNFEKCRARYLWIJBEOKJJKKMVSWHRJVUQXETBGCUCYETYFGOSNWTKMWRXLPLIOZIHNPWJADAXIQZXFDCBHAWELKGOMQLPOHZSYIVGRWCFGIZPXBZCVHEODF");
    msg.type = 36U;
    msg.access = 113U;

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
    msg.setTimeStamp(0.0152883743067);
    msg.setSource(30115U);
    msg.setSourceEntity(130U);
    msg.setDestination(40324U);
    msg.setDestinationEntity(112U);
    msg.name.assign("QYFZRQLHWQTUSBQHDFWQJLPHRMDZQEHMMTCAGOZVYCOMJSWKRYHFTLCHJHNXLPPYFDAGVUVXMWQFLBEMUJFAGXWJSOWNWRUOIJAMUZDDCVAHLIPYLEVVWRBZXEKOFKZCEKNQOGFPJNGPUTSBALYBMHRKDIRXNYBNIWHKTVJCSECJSKUNVPARFZCPRUCSIMLAKTRMYSQSDKAEOVNXTWEGDVUXXIZXGNTEZYUDY");
    msg.value.assign("CSNBYMZTCIRHXKAOGSWRNGSCWIPMLENFBOAZIAJEXDTQTRVULUIWYERFXDIVUUHMXQJKLIHOXTHZWYEGEPPUPTCPISDCXUOYMSBFDTYBLGQCFTRNJZKWQPGOVPXPBDEVVZSJRVNSEOBDFKXLUJUVZRHKAGPHCYBD");
    msg.type = 28U;
    msg.access = 17U;

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
    msg.setTimeStamp(0.0967874136004);
    msg.setSource(43920U);
    msg.setSourceEntity(206U);
    msg.setDestination(38747U);
    msg.setDestinationEntity(205U);
    msg.cmd = 198U;
    msg.op = 40U;
    msg.plan_id.assign("HNTJHNGIXMUMGKIHSOGYVZSEAZGDCJDMQCZEATLHOXMHEAADXUSKEPVRJRNEMBZOCIJPHMLLHRQPYRTRNWRDWCBIUJHXPZIGFWFYBBZIOOUVWYOIXVYHFRPGSTCJQFZMTLJJYDDFANIKYMCVOOZFUXXPDDBEXNULKJYZKTOLGTJYLFAYTOEXNQRVCEASNKBQQLF");
    msg.params.assign("OIJCXUBCQMYFJRZHCPYWUYJJPKUAGTYKMRATLTKBRQCBCGJZZYBZTZSHKSKKMWITANMDNMZKVLKNOFXGJYTQJWLHVIOYLVUKMTXUARIAPXQBXNHZGOVMHGKLEIQPWFGDNECQNSTRHYVOMLDPFIUPDAXLEUJLUYDFRWGAFSAQEGBSUOXSPLWDZSRXHJEBWQZTNIEMEVVMQNHNCAP");

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
    msg.setTimeStamp(0.220217176039);
    msg.setSource(60453U);
    msg.setSourceEntity(191U);
    msg.setDestination(44025U);
    msg.setDestinationEntity(63U);
    msg.cmd = 51U;
    msg.op = 137U;
    msg.plan_id.assign("KOKNZQMJWDNOWFCDISHZHFROLCGBEFEUFSENBCIJQRZVISBQKGTQLDOXTVPGENKUNAAQVVFGXJYB");
    msg.params.assign("ELGUSRRTLMBMIWPOSWDWIHASJKEWFMXSGSEUKMXNMOCETVXPKHZDNHADVBDBKTWPZURCVQLGHLUASSRDVFNQLKVBFJLGVXTIJZUCVEOLYDKJEXAWDNHXYUXRZRVIMTNQPGQVBUFAGZFUIQPOYAYYOAJQRENRHIESOBXTXEDIYNOCVKWBICNHICFGK");

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
    msg.setTimeStamp(0.00721250448719);
    msg.setSource(36974U);
    msg.setSourceEntity(55U);
    msg.setDestination(49809U);
    msg.setDestinationEntity(87U);
    msg.cmd = 102U;
    msg.op = 232U;
    msg.plan_id.assign("HFHKMKKKLAANJISYIFYURVWFMCNBQGTJAVBSXZMZWNOPAXFCHIDIQCNXUOSCELRXERMPLTPYJUZEVJGTMYDBRPFSLWSDOZYJAOIQSHRPANXXRPPWFQZYYXWDPULNXNEBETTGPHWTGVEEDCMOUZQVRINVTBWIYEJWGZBTSCKTOVHEIJLGNYDYBBKCVAWSUFHQPXK");
    msg.params.assign("AZYWHUPJHTEQDOHXQXEQWSHWBNMYEMQTSLUXYKITSFYXFJCQNEZPKJBCBADJEAFFEBKDCEJLLMYQAIEMXPBPRYLPXORJNAPUVJCLENDLRHMDOSMMRSNOHZFXWAGLVDOFRVDDZCTCZKMHVZDYZRXKTNMJUFYOKVSBLGLTBGCXQKGQRIVIICGIYLMRTBTU");

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
    msg.setTimeStamp(0.0990090481418);
    msg.setSource(22929U);
    msg.setSourceEntity(237U);
    msg.setDestination(60830U);
    msg.setDestinationEntity(15U);
    msg.group_name.assign("NBTKHUEDYAKRKVMTYJVULWYGRUBCNUJEQMSAMRPETFXFHLCOEUZHLRWYEBARYPXZALFDXXSNDXILGENXUSOOZBAJJLYHTWGADJDIBCOXCXRMPWMITGIWDARPNHDQTSSNPZWMVYFIQBEQK");
    msg.op = 148U;
    msg.lat = 0.223626481031;
    msg.lon = 0.872794853407;
    msg.height = 0.455683933384;
    msg.x = 0.614899155768;
    msg.y = 0.47579971155;
    msg.z = 0.967074628175;
    msg.phi = 0.824292648804;
    msg.theta = 0.723168682567;
    msg.psi = 0.211988802497;
    msg.vx = 0.202389473882;
    msg.vy = 0.168926353923;
    msg.vz = 0.471262347999;
    msg.p = 0.950313291916;
    msg.q = 0.830964970771;
    msg.r = 0.63472622083;
    msg.svx = 0.107619868803;
    msg.svy = 0.792109811116;
    msg.svz = 0.292821216665;

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
    msg.setTimeStamp(0.485485910393);
    msg.setSource(27822U);
    msg.setSourceEntity(52U);
    msg.setDestination(20877U);
    msg.setDestinationEntity(225U);
    msg.group_name.assign("UEFMCIFVUMGMTCYWAAUBNOADLXSBMYDFRKVOGOAWKSWXPETZSJWYRJXXGQEMFUIPLRDPVVNCGPXANYQRPBYNJGZSYQZAGXOEDGCODMQQLISOOTEDPCEORCSHRLBNCCWLYKGWNFZSNHYOE");
    msg.op = 226U;
    msg.lat = 0.0279418955858;
    msg.lon = 0.343763162802;
    msg.height = 0.763633445311;
    msg.x = 0.131494039516;
    msg.y = 0.3635613811;
    msg.z = 0.0949650076421;
    msg.phi = 0.862931889707;
    msg.theta = 0.669114031832;
    msg.psi = 0.785653147685;
    msg.vx = 0.448561644938;
    msg.vy = 0.849935327743;
    msg.vz = 0.565095174646;
    msg.p = 0.788511347794;
    msg.q = 0.433516667592;
    msg.r = 0.983131805385;
    msg.svx = 0.232114865371;
    msg.svy = 0.244982160803;
    msg.svz = 0.0627117953444;

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
    msg.setTimeStamp(0.86251175917);
    msg.setSource(38782U);
    msg.setSourceEntity(92U);
    msg.setDestination(35309U);
    msg.setDestinationEntity(117U);
    msg.group_name.assign("QZJVSUEAOGDUPPUKVVAXPMHORFHBYPQPJICOYYHKBGMGYRMFABSVFAZSIWWKVAKQZHYLFCENBITTTAGYCLZUOIIEETKSSQJDLIJTNHFQWGLPZVGWOECJWAD");
    msg.op = 63U;
    msg.lat = 0.998066997371;
    msg.lon = 0.39361726554;
    msg.height = 0.670397239051;
    msg.x = 0.845606115077;
    msg.y = 0.503934493818;
    msg.z = 0.420212584732;
    msg.phi = 0.932413987705;
    msg.theta = 0.510729141508;
    msg.psi = 0.123531418312;
    msg.vx = 0.152536578433;
    msg.vy = 0.575301235192;
    msg.vz = 0.19368845699;
    msg.p = 0.578120079994;
    msg.q = 0.704425018611;
    msg.r = 0.990979713932;
    msg.svx = 0.516817697857;
    msg.svy = 0.481054387922;
    msg.svz = 0.404176719177;

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
    msg.setTimeStamp(0.0664346840706);
    msg.setSource(53652U);
    msg.setSourceEntity(170U);
    msg.setDestination(64945U);
    msg.setDestinationEntity(202U);
    msg.plan_id.assign("JJAZMFPCWRZPZSEMFWJZTRQKMBWVJQFRADDTVQIPBRCXDCZIQNEXPDUEPSLYIEMANASQBOUXQGTVDMNHGXZYWYWFKDFHNPUVRRSNWCVEDJVIXYZUEKV");
    msg.type = 43U;
    msg.properties = 223U;
    msg.durations.assign("JVHUOZMYMFTROLBAXNPWAGQSMBFRWXWUBTUXRCGTEETCLXAYOYWQVZVGQQASNHCJSRDCITBITMYAQNDWKUJQHZFESCYBIUAFJRNODIYPRPOSMLBNHFZDFDECVYIKRLYLJSLIEDBKWTCPVNVSPGDCETHBHFGNGVIBATDTEYWXQPCXYOCSIAJZUXQGGZZKXHPWPJNXELDZKFONJGAJZJOMRZGUVLRUUPIRNBWMMKLHAHKUSHFFO");
    msg.distances.assign("JYPVZHMWIFPNOUTBPHROHAFYTGEJJOCEERZFACKIGTPTUFZXUQOLTQLIKDHFLCCLDOLTMFBGWYDWNPCLOPHEHENDDVZYJQKRXNSHINSOVJNUCAGJOIDEVQYNIHMAXHHBWURZWLQRUSSDQTRKAZKWLBAXWCGVXSDIDCXUISWJVGKUJVWVPWBMKZAXZXB");
    msg.actions.assign("XCUVQUQAQTVUQCWERMVGPBVXVWRGFNWZHJPDGXCCXRJNPLUOEFADZZFLKOIQARYCXFIOPWVKIUKSONFLHYTDUKGFZSGYKXANFSQBOKTPDSDZBBUXMLRS");
    msg.fuel.assign("BGFLJGOQSWAKVCDNGVLIPGYVASXNUOGRWYRTCAVLNPXZFKWDNDVQOGCMHISJWERNTEKUDOCPCOJLTHFDZKQOWSXDRAIYPRJUGMFUZPRPIITHUBNALCERXOYHWSWISLFNZIBBDZXHAABFHOJSYQERYGQVPCQMTQCYMIBHXUUMJXOKEGBYKMCALARLTBOZSBQHKGHEPVKSUHEVFJMDWTETTMNBEZSVJATMPQIY");

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
    msg.setTimeStamp(0.830140309568);
    msg.setSource(10382U);
    msg.setSourceEntity(144U);
    msg.setDestination(37107U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("WWIJASFTOYGDOVWILGWEDPCOXPBIMNUONHTGZKBIKXLYEZEYRLXZIQNFWTKLZHSADUNSZSRGMTHKAJCEHVYOXBWTBRIRYYEYVJOC");
    msg.type = 202U;
    msg.properties = 81U;
    msg.durations.assign("NTYPUTDCEISKQDYBUCUXHDBSVHCXJRTFWGGRFNZXGRPWOLBHKCOCHUAPPXCTWQRKTNOPVFGQHPMQAVBFDXEMDVKWAEVHZFNKKGYZLMDONEQSGLRRACKIAWQUBEWIGMPBBSFZJMKOCYRLHVXYRZYWZIPKDBULFAVQEFYMYJ");
    msg.distances.assign("GZJMWLDUDLMXBOUGIXBCKWDSHZSPLBDFMMDHYVKUWKYFYRUEIMCAFYPKJEOTIBHPFKANBBPDSXYZOEJXNAFCIZADKHLSRNRVYQWAUZCPRKQZDQTADHZLWEUIVJGG");
    msg.actions.assign("CIQIIDBXWYPKPXHLEINYWJPHNDJJBBKZMUJAVKXNAQAVCKNPGYTVRLLZMEFARFZTEMZSCYOZGJNXUYTDZGBEDFKWHSJSALBDCLTLLNFJHIFRKOVZQOPUGIFCPRXMHSPGWINVSYOWEVUUQDKOEGKPTRYPONGFSBSGRRXHC");
    msg.fuel.assign("DOYZIZXAAVDAOCONCGJZMGWHBLNIKRUTQWKVRMGXFEEKKKNGWOJRZXLSNHSCRTOYQGSPYDXILETXWGJTKIBIAEXZTSIGNSDGQPWHZLESRCRKNJNEQPULNMFFSDZMFUHSCYAWMUMIEA");

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
    msg.setTimeStamp(0.723744917781);
    msg.setSource(7685U);
    msg.setSourceEntity(53U);
    msg.setDestination(52042U);
    msg.setDestinationEntity(39U);
    msg.plan_id.assign("YCQEIGBXECXQWOWPRRAGGRDCSEFQUQIMJBZZSCMBNZGURTVYUVIYHCAEWTJPSBWZTYWAMQVTEDDQXFNORDYNDKKSKYVPMAFMTKSMPIBVLKSHJLVXSLDPMBJCUDHLUJYUXCRIPTPEELXSCVUHRA");
    msg.type = 187U;
    msg.properties = 84U;
    msg.durations.assign("CNRIEBZZHGLTAFONWDKKLCEDCSQOVUAHMDXJXXPOTKCIJRZEPGPCTOVMTTYYKAVZNNHCSPSDIHIKNJFBZYQFRYGMMBGQRGPJMIBPSLGYXKULAHMOVSEQCXMSAXCCUHDNFLVLOARGNEYAXQIWNSQDECZGUDBWANEWBULYRPAPLMK");
    msg.distances.assign("WLDBQVEUMGEXGYLXZAUBMSOZNWXKWNKRRSGFICAPODTFPFAILXJUFALQBFUDUONVOXPPSAICSCZGRFDTDYGPWUONMEISKQDFONDHBTMKBYJVHLWSHMUZY");
    msg.actions.assign("RTZXRCBQXTEUORLGGAUSZMGURZJPQDNFQFIGDABTJPYYNVUOEODUZPUWXCDYYNWXHMAXENHTTLEVFMNMYIECEQHUWJISFPAVWXMVPGNBJSDKYWLIUAXWEFRIVGSXRJOPRWATPHDZDPQFGJGLGCCIIYNSEAJLBQZNQHZKKYBIHR");
    msg.fuel.assign("TNOGFDXFQLWNNQQMODPCLITQAMYJSPFDNOJREEIVJRKUMOVTDHBHGFXVJENWALLYOADPRVVRKGXTKVNYARNUXFFJQMRRUINTZF");

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
    msg.setTimeStamp(0.962391543296);
    msg.setSource(24721U);
    msg.setSourceEntity(243U);
    msg.setDestination(1690U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.0849767804663;
    msg.lon = 0.0233862486788;
    msg.depth = 0.507609928611;
    msg.roll = 0.323856175658;
    msg.pitch = 0.379188924267;
    msg.yaw = 0.312780880568;
    msg.rcp_time = 0.706035926681;
    msg.sid.assign("FIETOZQOCMHQPXNLNIAPXCDWWSEBDFOJVVIWRFJSVYBKMEPUMAPIQRGPFYIEVTYLHIHOIWSQEJNIKFUTYJXWNCNCPUZSVGMBWRVNGHQHDEZSVZDOVJNTFBCPNAMHZHXRRAXNFCEDGKLAAKHODAQQRQKTJVRBQPZOYLLJMUXYXDUREZSOUBIZNMPAVFSBTJCKWTUBCWELKGRFGMDLYAMJMZWYUCXDBLRXAHKHYTTSGXOBPYLILFG");
    msg.s_type = 170U;

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
    msg.setTimeStamp(0.525263487551);
    msg.setSource(54474U);
    msg.setSourceEntity(74U);
    msg.setDestination(49558U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.454012984925;
    msg.lon = 0.15161804849;
    msg.depth = 0.647894873425;
    msg.roll = 0.132506654804;
    msg.pitch = 0.595373777441;
    msg.yaw = 0.927149292335;
    msg.rcp_time = 0.138564283808;
    msg.sid.assign("HSPCONCDFXSXTXXVUBHTMOGIZRKXYXGOPIZAIGVFODZBQGPAMSNFAIKPFYXFPVCGJSOQDKTJMPJUKNRLUVHBHJWCLXWYAUVAIPMWOKLFBLGUHCJARCIFUANNDJQZIFPGSKRWOBEHMVCIRRDOTJUWWNTDECZEXSKQQJGEZMEUKETPMYODVUEALTJACVDMEQZYBFHZVHYRNXLKR");
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
    msg.setTimeStamp(0.403501351411);
    msg.setSource(21571U);
    msg.setSourceEntity(187U);
    msg.setDestination(15603U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.620608793638;
    msg.lon = 0.984786094955;
    msg.depth = 0.134453619;
    msg.roll = 0.53410578789;
    msg.pitch = 0.241459058219;
    msg.yaw = 0.348401390573;
    msg.rcp_time = 0.689123635974;
    msg.sid.assign("HAPHGFBUISEXHKTEBOUBNKRGDJYAWFOYYZGRRVZWGVLVFLDVGLXWWCBPDFIGGVTJQUBIIBJYPAMYCNXIHVXHPKQQDNDWJMZJAENKXLYWINFSLTCTFVMOHTNQAJZJMURXRHCVKKLRZJUMCFPBNSJXWVCZITEOLMKSMENZQSEPSASFPELCURAOVGOFTQEXRDDDUOSMTIUQZOFRCOMYQRQTADWZWYNZKSHXIYLESTLHPGOBPEAWGBKIM");
    msg.s_type = 208U;

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
    msg.setTimeStamp(0.890298124793);
    msg.setSource(5542U);
    msg.setSourceEntity(135U);
    msg.setDestination(14569U);
    msg.setDestinationEntity(98U);
    msg.id.assign("VNUPYGEQSFBUVNZZAJAKKCKTGAXWDHWFCKMRIYJTQWKMMXKHTGQCYFTSDGVOSJWUILJBEYSRLYPMDMNIJDYDPVZZUQTOXENYTXUUABIRBWKDBVXUWIHHJCYXSANYAMVXFSEBVZSNYHMHTUNHOJVVWGRCPDNHRUIRKFDIACRLWEOSEDLMPGPBLOUGGWTPCDZCLOZALFKQRZHOXISTJAVFOPEZBJFGL");
    msg.sensor_class.assign("UGDBGFVORMDENNOGLNUBJYMKOWMCKRIUYVAMXXOQZMJABXKOSJIFZLUACFHTMAPAYTFWVYSCCAXJYBVSKJNAECZMWCISTSFIEVBWZTNWOWJPFHVEPDJQGRHDZOJLQCLBXTYOQVUUTWDMRKIJEKRDVDBRTLPTAWQKHUMESHCKGLFINZAQTDBXFYHIQDNGKHZUSVZPREPQUXSVXZQDANYIOKQEBYJGGXGPL");
    msg.lat = 0.308275677477;
    msg.lon = 0.577267814119;
    msg.alt = 0.738253559558;
    msg.heading = 0.796688354529;
    msg.data.assign("DPYTRAMKMLBXHNHFFQNNPCBXYTKCWNJRWNIVQDJAJJACJCLMJVUYNBTMFZQVWGIOCTZYEPZJGLDZIVUSUCPKFRWWMMDRIFXYHCRCGXMSQZHKYXQQJRFAVUIFVBGDNYQXIWTYWTGLHPEYSOYKLK");

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
    msg.setTimeStamp(0.845351919527);
    msg.setSource(51695U);
    msg.setSourceEntity(97U);
    msg.setDestination(55058U);
    msg.setDestinationEntity(87U);
    msg.id.assign("CINOOFMXPVSYUPMDQCOLPZNIWTTXAZUARIHYJTEGQVPMTKQFJGFRBUIYZBAJMOLSLYESZTULYGWNBBJBVWFFXLQKFOYINPRDUENVHXJFUZLUQXIBZREXQVMAMUNFWTBGOHUKSCZKRQKWMARIYLOYCKGSQKIGJAFAJWPXCZWWHGDGOIEPCELADSSCJLQHHIAUNOX");
    msg.sensor_class.assign("ACDIPXHNTYQQBUXISAEGWKHLDQWJWDLCACBHMVZYWKJBHZIVJJURBPTVOEGBTUDIQMHRPSXLCHKCDQLBNNANTKYQOVDVAOLFFPNUNFGEXUDMTCHILKAPCFEKQSBTNTYTCHYZCISRMYRPYOGVDXYVFSAUFZULMLEEWXIYSIKV");
    msg.lat = 0.825438910566;
    msg.lon = 0.419976043283;
    msg.alt = 0.084550700436;
    msg.heading = 0.918097769635;
    msg.data.assign("DOIHVBCHNWICPTAJXSUTDKDLROZDOYODAHDPDRUXEPJJJSDSVMMUVLY");

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
    msg.setTimeStamp(0.50415270193);
    msg.setSource(309U);
    msg.setSourceEntity(112U);
    msg.setDestination(36917U);
    msg.setDestinationEntity(29U);
    msg.id.assign("KUIOBFKXKRLJWKSZTDFSUZGIKOCHJIXLERNVGDGLJGTFBMJTBALCJYZZOECXRWDIBFCKQBYNUMRXTHZBESNSYMYPEQGJCCWQYMSYNAYPCDIPHXSHLDAGWTYRYLIWSLAUTMXPKFXOUSTFSVEXTPEHCHAZEQHMPQFNJKLMAKNKHOMTNWUERWVZRFWDOJQLQQDMOWEVOGJHRANTCIIPPUEFSMRBPUXDRUVBVIGZGJIVZODVYQANCPVNLUAH");
    msg.sensor_class.assign("OSKIDTNTGDLDFTXFSRZCNJKDBKOPNPEGZTJFYDJCLKGXOUHJCJORUQBCJGAMOMXWCMQUPFEAJSOCHCPGJVMWFOVXDYFEIIWDGRAJZLZWCEVFVLRHBALARQXMXDURHNSYZPGDHFNIYLOUAOLIWBBDUSXAMMNZGBPAVVYLYGZQSZWKTQLKIENLRHUVUXATFQMZWSNVIWQPQHICGQVTMEPYTXEKIBSJWSYN");
    msg.lat = 0.114778633315;
    msg.lon = 0.664187726242;
    msg.alt = 0.356277217159;
    msg.heading = 0.717830346712;
    msg.data.assign("SWDPYUTOQKQWUZLGVNGMQFLOLAITFIKTVADVVVNBGDDNRKKDFXJPPM");

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
    msg.setTimeStamp(0.947992995478);
    msg.setSource(6473U);
    msg.setSourceEntity(204U);
    msg.setDestination(50946U);
    msg.setDestinationEntity(201U);
    msg.id.assign("NMSGQAOLIZECUJZWLJWYZXFFISEWZUMNAYMPEKQVDDKEYTKQRXGUKUQZIGPPAVFDYKWVOBORJVREVIULBWZMJVMFHDEOPNEPBLAKUWDNTXJTHOIPYOVHTRBNCGFMZSFSACYTAPIRCVBFOTDDLTPOSVWNVJNLSMXACIUKUGQLCBGRAGHRCIWAGXIBXOGZSBQZYHMHITKTXZDHUPCRSFGDBKRELNAENMTWDWHQNYJOFJKYLCJYUCQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WMNADWCKFJHZJXOSSLEFHCMONXFXIZAOINHXGVYKJWDTBHABUMOKDPXQDMTGBTOPJWHZRQNVBZNOSGLYTHUTQYCYSDYCIILFMJKAQGXOVRBWXZVTFKRPREWEDHPVQGWJEAZJYGVCHPRZSCOACVVBIIZQUXQMXCHSFLZKRODMYYLWAXUJPQBKVEUGRFI");
    tmp_msg_0.feature_type = 116U;
    tmp_msg_0.rgb_red = 173U;
    tmp_msg_0.rgb_green = 197U;
    tmp_msg_0.rgb_blue = 174U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.129520183161;
    tmp_tmp_msg_0_0.lon = 0.558066196946;
    tmp_tmp_msg_0_0.alt = 0.427805466055;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.138136241063);
    msg.setSource(8472U);
    msg.setSourceEntity(137U);
    msg.setDestination(1438U);
    msg.setDestinationEntity(227U);
    msg.id.assign("SVNXRAWQQATKOIFZAOXBTISDNSJBICSUSFAGLIDQLJRKEXCUOFHNDMBWGEDCSLEVRONTZUERXHWCLPIFNMDUIVWXQHRYT");

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
    msg.setTimeStamp(0.778947991393);
    msg.setSource(52215U);
    msg.setSourceEntity(16U);
    msg.setDestination(58644U);
    msg.setDestinationEntity(179U);
    msg.id.assign("IGYRVUTZXONUVDOAHAAFVHLCRCCFAXVXQRERVEPTGYULDHYJLGQWTKDYUILVSFUAKWZAXCPNRKREDNQIVKTMGZSVETMTWTZZLTNHLOLGAOPOEHWNS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ILEBGHHVNPJOQQEZMDEWTJLRSJZBWVMMWHSNKHEFMMXK");
    tmp_msg_0.feature_type = 213U;
    tmp_msg_0.rgb_red = 11U;
    tmp_msg_0.rgb_green = 95U;
    tmp_msg_0.rgb_blue = 84U;
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
    msg.setTimeStamp(0.602553288374);
    msg.setSource(62940U);
    msg.setSourceEntity(168U);
    msg.setDestination(48645U);
    msg.setDestinationEntity(207U);
    msg.id.assign("JGAEXQCAZDRGIRRTGLNUQWIGSTVIMISKHJAHTJYAWCIRAPFUSGGWNOATKUCVCRDKOHIZNHIYMJZKPEFSOQHMYOOVROVBWCSSKALHEPJTR");
    msg.feature_type = 139U;
    msg.rgb_red = 0U;
    msg.rgb_green = 103U;
    msg.rgb_blue = 49U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.274550483818;
    tmp_msg_0.lon = 0.983548782574;
    tmp_msg_0.alt = 0.433149347375;
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
    msg.setTimeStamp(0.140352074991);
    msg.setSource(26674U);
    msg.setSourceEntity(171U);
    msg.setDestination(3312U);
    msg.setDestinationEntity(209U);
    msg.id.assign("WLENSOMRKWFFHHAJGLJIEGMDVCKLDYNTUBAZDVHTMUJUTCXFDEQNSKGNSAXEXKKUZIWFZZENRBBILJSMOGIXZKXHHALLNIDQKMYAXUQPNZIWBMFDCBSCPYVGMGAVZFPUJJZWITQTMOWOSJQFEBRSZGVCYSVFPGQDPAQFKHTPWYCTTMEDXARQBRCKABHJQKYCRHYYJRVBRLOUOGLIOPEOSGMFUNOWZCIAYL");
    msg.feature_type = 62U;
    msg.rgb_red = 106U;
    msg.rgb_green = 27U;
    msg.rgb_blue = 239U;

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
    msg.setTimeStamp(0.999896638768);
    msg.setSource(64675U);
    msg.setSourceEntity(8U);
    msg.setDestination(15248U);
    msg.setDestinationEntity(14U);
    msg.id.assign("KXDIZDIEFFQWSEERKYDBGJPRPOHGVBHBQCCMGFNMVHRNIOUNXMWBZATURUJXVDLTTCDZBSOLTHBZJGIYEDEBPPORIYVRWYXIEZDSZLUARMYXRVHCUMSFNGQNMTJCUKJVWODBQLKLFXGOATLYXEZTJBKYIMPKCSOHQQVYLSZWIQPOUFW");
    msg.feature_type = 239U;
    msg.rgb_red = 234U;
    msg.rgb_green = 63U;
    msg.rgb_blue = 95U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.473639974716;
    tmp_msg_0.lon = 0.55674129052;
    tmp_msg_0.alt = 0.155033644103;
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
    msg.setTimeStamp(0.177364407078);
    msg.setSource(35050U);
    msg.setSourceEntity(245U);
    msg.setDestination(33802U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.410408339385;
    msg.lon = 0.601207494562;
    msg.alt = 0.214757878507;

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
    msg.setTimeStamp(0.797539452196);
    msg.setSource(43261U);
    msg.setSourceEntity(40U);
    msg.setDestination(9371U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.650283394352;
    msg.lon = 0.79460906418;
    msg.alt = 0.755111829746;

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
    msg.setTimeStamp(0.641091256859);
    msg.setSource(45750U);
    msg.setSourceEntity(112U);
    msg.setDestination(47041U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.207448076057;
    msg.lon = 0.896522511923;
    msg.alt = 0.462045072742;

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
    msg.setTimeStamp(0.884838673279);
    msg.setSource(49402U);
    msg.setSourceEntity(42U);
    msg.setDestination(38846U);
    msg.setDestinationEntity(82U);
    msg.type = 196U;
    msg.id.assign("LFASHAPQTYBXMJNIJRVFDIVOUJSZUWOTHOQOGTSUCMBUHMGZBRNAAJPPUGWBRRIBSHQBFBVIGXMLAKZLZVNGPYCNQFMWRPYUOQKHHD");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.274299265988;
    tmp_msg_0.lon = 0.615757833674;
    tmp_msg_0.z = 0.674830375272;
    tmp_msg_0.z_units = 36U;
    tmp_msg_0.radius = 0.69363298673;
    tmp_msg_0.duration = 31692U;
    tmp_msg_0.speed = 0.769371551091;
    tmp_msg_0.speed_units = 41U;
    tmp_msg_0.popup_period = 8291U;
    tmp_msg_0.popup_duration = 33553U;
    tmp_msg_0.flags = 90U;
    tmp_msg_0.custom.assign("MZVKTYHQUNIGJOKUCTNQDZWGBJCZUXWLYVIRAMHZGNMHPIIEMDTJXSAXDTHISTKPBVMBGARDJFMSGSVHALYBGKIE");
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
    msg.setTimeStamp(0.195045269711);
    msg.setSource(48157U);
    msg.setSourceEntity(36U);
    msg.setDestination(49314U);
    msg.setDestinationEntity(141U);
    msg.type = 10U;
    msg.id.assign("VEJNXOEJFWIGBMZEWLKBDLZDRTAWVHUQRTPAFQNHPZLKPOPBPUTXTDCKFQQKMTVNSGQKXNKXLBYDWRIKGHWZFRZYPCFFQNCXMMFOYVTJLDMHFKPNMERYSATIFXNYANHXGEIHMGQOLU");
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.929958981507;
    tmp_msg_0.x = 0.403004527382;
    tmp_msg_0.y = 0.211223675284;
    tmp_msg_0.z = 0.823259824259;
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
    msg.setTimeStamp(0.533812038021);
    msg.setSource(17757U);
    msg.setSourceEntity(40U);
    msg.setDestination(47556U);
    msg.setDestinationEntity(152U);
    msg.type = 161U;
    msg.id.assign("RQQWYUBITMCKPXQMKFQJREFYIABAEYKEPGGKWZVLVGJSLEVGXPJKUVOZAUEVSRWHHGGBGHJANDZCBTZYDCRXGFTBLYZTNWLCCYKQKRORUOIMKYFROTWFJQEPCTBGHULNGVZFSDAILPSCXASZBADILSPCMQJBXCAWRROZPEQTOWHPIPOUBMIDTEAJDLQYSURDJBVDHMJMV");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.472112267277;
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
    msg.setTimeStamp(0.0681954717418);
    msg.setSource(21698U);
    msg.setSourceEntity(8U);
    msg.setDestination(5434U);
    msg.setDestinationEntity(225U);
    msg.localname.assign("KZWWSIDMCRPGCHXOZKFOZJSHOTALTXDTDHDTMROQNCAXLQXTNAHALYXZNLVYBNIGBOVJZZUGQRLOBSIGNHMGJQCMPFE");

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
    msg.setTimeStamp(0.511592850383);
    msg.setSource(7269U);
    msg.setSourceEntity(231U);
    msg.setDestination(23384U);
    msg.setDestinationEntity(48U);
    msg.localname.assign("LGJFVLPYSZTWGSBFUGNYENXIPAVBQJERZRCFITVYYGTODYXXHRFCURKQMA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WWJAPQEUPJWOBQXSUEPICWDNDLGFICWKSABTZDZVSVAMYZBNMRQIPTOXPTVIEJTYKUOCCXNSXPFJJHHUJLVSVFSXHRZMHZNCWPCNUYMUAFBGFMYQUJSKFDLIPEGTKAQCUDQWFXOXRUYHTETMIHGMXYLZAVMNFKRLIGHNCIHHDZMQVERBIFKWOFQIAD");
    tmp_msg_0.sys_type = 72U;
    tmp_msg_0.owner = 2126U;
    tmp_msg_0.lat = 0.130483571007;
    tmp_msg_0.lon = 0.286460258333;
    tmp_msg_0.height = 0.639244769029;
    tmp_msg_0.services.assign("IDXNBJBOWIYEPBMHBHGQSZPKUZMNVSUSCZSQNIQWJTHKMEPAUENGYXIYUHNEIZRLBRGPBOPDXRJVUVXMSWPFTFZSXJYZAOANMDTKUFODEYTSGXOKDSCAHTXAFGIIERFMASXLQXJAYWKDKRREHGNPBYMZDQWLEUJTCZJTKPJHGLTRWLVPFAYWCMRVDQOOELZQVUV");
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
    msg.setTimeStamp(0.433297072432);
    msg.setSource(43407U);
    msg.setSourceEntity(222U);
    msg.setDestination(38104U);
    msg.setDestinationEntity(150U);
    msg.localname.assign("OSTLYVNXWBAJXGRBNEDTTLOBLWDOLNSKZYKHSSGLSRLPFQQVYTFVOCZWVVSQFJGFRVYFGWHXXPCMUUAQVBZZIBNINQRLAMKAWQIUZRCIGGKWUUEEDNDJCPRYJKQUKPRKSYBHVJMXMMTEEOFLBYMANDQXGPQJXHGJJJVHRHGC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ETWYGZQXMXIDSBRFKPB");
    tmp_msg_0.sys_type = 75U;
    tmp_msg_0.owner = 12693U;
    tmp_msg_0.lat = 0.522229621349;
    tmp_msg_0.lon = 0.104465387859;
    tmp_msg_0.height = 0.0836577817851;
    tmp_msg_0.services.assign("UDXIOLORCLFCBFPLFFKTTFLYUAHJKLBDYBIHEEQOIJEPNEFBNSKDVWGSCJHGZZXXQXEPDNIMHXABDUXWDPOSXPYYWPIZONEVRHGZTTBNDGNUKKJPAMVVNAGTQKYWDONTQWMMJMFWVPDVSQZHIWCPOZVHYRGWCGILZSGMLJV");
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
    msg.setTimeStamp(0.708257681006);
    msg.setSource(53791U);
    msg.setSourceEntity(196U);
    msg.setDestination(5628U);
    msg.setDestinationEntity(234U);
    msg.timeline.assign("PSZYOBZZTZWLRLANITOCWJDORSUTVFRSEWTSIXHDDNNKRXLZPQGELMUJEQJUMRMCCRXTQXAADBMQVHHDKXYNMIQPSNZBUUIBDMYUVEBGCGFQLZYNAYSEWIKJQVVBQTSLPQRYITDKUXFAVCKPPXDHYAJFCSAVECSVXOHHWNLZHHOJQMCPHFGPJVNYMOLKGT");
    msg.predicate.assign("KTEVILDZLLRMQOLGHPYOHCFJVSHZBNNBKAHGEWHPKTWMRVDYEXKXFXZAEDWRKLFXNYSTJJBSUWRAOCCTDZGUNPFTAYQAFNIWBM");
    msg.attributes.assign("CBBPLRJIBGPRCNLYHJRTTYRTYJGLLIXRQPEAJXEWYEZH");

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
    msg.setTimeStamp(0.226717923476);
    msg.setSource(27890U);
    msg.setSourceEntity(54U);
    msg.setDestination(40348U);
    msg.setDestinationEntity(205U);
    msg.timeline.assign("PQPQNITHYLFAGGLMXJLGVTSKZYSVRTDGFMPVRZEFHKFFNBHJUOVUBHLYYAWUGKKMDEEVFWTCUWRADXHJUWHYHUBZOUCZNBKPSYKBGQIRXCUMUHJNFEIJJOTKYFRDYLQDBOLVQNWASDEQTLPBXFD");
    msg.predicate.assign("ZOIGEKXRPLNXGLTUQQEYXAQCBZOTTRXSFHGHKPREMXXIIANMWRFWOJFBANSLYFRUKWNBVCKKADTUPJLHGVCDOFT");
    msg.attributes.assign("MIRBRQSHSPFKKXTVTGZARMDFCZHIBWJWXFTLYAYMEAJXQIUFNCVNVJEHCEPFUFBWYDERHIINVPTAQRXOPMLUWBNKJYORDLOSQCNZOCPDCCQGGFKWEDYGJYBG");

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
    msg.setTimeStamp(0.773197355977);
    msg.setSource(38268U);
    msg.setSourceEntity(80U);
    msg.setDestination(46990U);
    msg.setDestinationEntity(56U);
    msg.timeline.assign("AOIAQCYQMQGZDRBJJFFSYAVZSQPOOSFPQTIVB");
    msg.predicate.assign("OWASKMHIIFQBTWKCTMLRAJYVNLHZYLLUPDZNPXUYWGHOBRTVUEMDOSHIBEIUZCFRTNAWCWZAGGKZLJSLHSLRHVRRRUDGUZRMIEJ");
    msg.attributes.assign("FKJQNMQEEGGSJSKLOGAMXBFJXZMVXNUKTDBWIIYHIBFUDWTHCNPLOJBQLEZICTQKCAPRMUPVPFZAHEPMKFDASMUNMXSMYLJIROQBHBEYEAKVCFFTSVFNGDJLXQFP");

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
    msg.setTimeStamp(0.776387980655);
    msg.setSource(51733U);
    msg.setSourceEntity(238U);
    msg.setDestination(16219U);
    msg.setDestinationEntity(15U);
    msg.command = 145U;
    msg.goal_id.assign("AUEHEJHBIPLTMPMYEIIGLNXMQRFPRAORPDKDELVDGPCUZOVBSBXNMEHGZULZGSSCWKHFLFWZQRFENQZVOXWGBYWRTWIHVCXAYHASWGJRGSDCLTQABVOZNCXFZJCZHUSMOVTRTONGKKOEKAYPCJQZYXAHBPFVEDWIUV");
    msg.goal_xml.assign("RGTQPONRRYBEGVBDFJOEAPBHPMOIJZSEBAANPPECJURKAFOYHIHEXNQONTBXVSEJQVYOGKUONPVCFINPNJTYCUGYMCXIRHDBLDHKAGPLMQTVCUJIJFLHDBXYKIHINMIRFQZDSYMXLKLISZDEEUZBTYDSUGLIEAQJWBACMFDKWOVNZMVWSSLMBWJPGADTRUAWYNSULRZALMTRCXOFCTUOPFJTZSQCKFVWKQMLQZWTZGWEKXZRSDHVYVFQHG");

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
    msg.setTimeStamp(0.841193449455);
    msg.setSource(15933U);
    msg.setSourceEntity(226U);
    msg.setDestination(41289U);
    msg.setDestinationEntity(33U);
    msg.command = 88U;
    msg.goal_id.assign("QNKXNJMRVWXUCU");
    msg.goal_xml.assign("RBHBSUIZWDJMCMLNJIKAGIDMMDHDVTJHKEQWKYNJZDYNJFLQOTVIMPFCSEWCAYSSIIVUPUXCRFJSXWDLQOILVZNGQTKUHQKOZETLWLRPBGTCUHRXAWVFLOKABUFUVYNS");

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
    msg.setTimeStamp(0.993922050149);
    msg.setSource(23515U);
    msg.setSourceEntity(196U);
    msg.setDestination(21152U);
    msg.setDestinationEntity(217U);
    msg.command = 26U;
    msg.goal_id.assign("HFTKKHAXIJCYIEDOJHARLQXDGSAEKMYFWSVCEQBUYTSIZLHNBZMOJSANRGVKNHGDAPAFPQIWDZURPKPMMFGWYTWDKTQVIUKTMWFJQFNUTAEZSRGEONPZIELQSRJNHVWPOOXHIWGXRPDJQSJORKNARQXURZMBYOSLOQCUBXBMGPVDFBVHVTYEUDCGEHSTKCCRTLXSXNVDBDXFVITFJCXAJPYW");
    msg.goal_xml.assign("LHIELKQESEXYXVFVKZRYEZWZSNQNCQAQEIVXOLSJCUWROAADRMLFDEFLJWZXAMSFLCAXHTOVAFIOUVENTJ");

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
    msg.setTimeStamp(0.726160333254);
    msg.setSource(45262U);
    msg.setSourceEntity(193U);
    msg.setDestination(3594U);
    msg.setDestinationEntity(35U);
    msg.op = 189U;
    msg.goal_id.assign("UDNOWDZAAROAPONXKMWRZTFKRCAEBYQEIZFDNXUJYEISBRIGKIWFNZBUIBHQHETSCLNCFTOHVDBRYOLGWKRZJPYHLBRIKCEELSHJMBXDHYEUHZHWJMGQIOJFVDKMDCWSMYRFMGFRQAZYUWQTUZSVCQWNKJEVLQPLEJPUXXPMUPTKFGNXVFBUYWLTPTHCTGXVDBBUZOXSQCAPMMI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SUMYFMVJZDHOGT");
    tmp_msg_0.predicate.assign("WYAWVWVRJTAXBPQHEXVIBIAKWNGEXNZJMQQDZVLIDQEJCDAUNSZCEKIHQEJTGRONMSLFJIVDPPHLMHCDYRUEJAFCGEMAMDSEGXQKZBKTZDWMSSNTDBHSXOUQSGNPWRTUKLFEOTFKSJHJWFDHUMJORMPXNVYCBURLYPZRTFDISHIZBATGEWAGCTOYNGBSGWPVMOQBTKRAXABYZCYYVUCRPXVLJHKYILKOZOOYBZQRWPKUQOVXIGFPFLNNLI");
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
    msg.setTimeStamp(0.371392263175);
    msg.setSource(6214U);
    msg.setSourceEntity(20U);
    msg.setDestination(62521U);
    msg.setDestinationEntity(64U);
    msg.op = 209U;
    msg.goal_id.assign("DOABQIQYFUSBCNOUOIWPPTBKMZTIVKFYPWTRFHCCWJGGLVJPJMRZQHJAXBGAJNEYZEDKGUHZMBKCHXKHMPCMRKCSXUWVDPRISEGCLOBOHBJARAMXARUUHOKCXJAEOXRLQRIDYUSGEIAVTWDNDLKRNGNIPWGTIADQSXVQNYCTEMQTZGIGYKLFFSUOHNUQTBBLFJMHFOMHSDLWJWJCXURPVSZQZZFIMAPNYNTWYFFXKEODYSQXSBWYNLZLTEP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XJDRDQUYXENTQSYLYNVXKECIGVRHOADBRIZUPMGWFXIUZDJUXQEGPXVRWNTYIAKUEHFSMSXFEQZYXADQLFZJTRRORPWJEBLDOZWTSAUOFRBLVBNKTHKAVBGTWIPSMZAVMQERLLTBGPMOYIWNPSFLCWUXPAYZHMJOMKNFGJVBLTZCCFBEOSAHQQIDBJQKTDVCFCZMWGLPNINVKYLIYRHYDKONGCGCAMAUJSWXSNSMUJGCDQIHZOHTKJ");
    tmp_msg_0.predicate.assign("DFJGXQIIZDDUBMBLXUPCMKZYLXATYCHQIRUVHFVPOGYKWAEHUBXWHIWNEVTEGGJLDSHWGUAGUUONNIVQZTVAWWJZQJHUESVDYNAZMFOASSUCZVWMKS");
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
    msg.setTimeStamp(0.849574367966);
    msg.setSource(44653U);
    msg.setSourceEntity(131U);
    msg.setDestination(28722U);
    msg.setDestinationEntity(90U);
    msg.op = 226U;
    msg.goal_id.assign("YFTWDGTKVYRSRLEVKOTUVAJSDIVZBZRTMZHWCVHJBCNRMSDYWJNNTLQLKTCGQDESBSUFGUQUEBIXPKDARHL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FVGNQWROMKZUORIORZIAJSXXSZFZJKUHATVXVEPYZBDRYWQYEHYSAQMLFAYXCNKEUTGCKPNBRRCZMVUEQUMSTYN");
    tmp_msg_0.predicate.assign("PGYUEGFCEYQPTLPZZIJZRYRPMSGCNANYWPXDIXGOSTJJAQGKFVYMURAQVOUONCZTVVNIWLJOYAAXQOGGKYQSNVUWCRHXWONWSTLXCDJSFQXYPBHJGXTCZFDKMUXBZLQOFSHDRFEEQRNJLHIVUPZBLDQVFHZSRYDNBTTPTDGIJESKKV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QCHEFAMYEALJRWRNQIFZLYTHKPMYTXUUPOVKYGMMHPCTVVSELKTQSBNDDLYEHGOZJAYXMMNUYKIFNWGTUYILOKSIAMPATWOARDXWFRCBQIABXUDEVVEQFDQKNGZYPHQBXRLODZTRHRKMJFIBYHCFMTBEGBGOWWFXJUQWZSAORIKNEVOBGUEAXUJRTJVVNLXCOJNLCZFHTWZSEXRD");
    tmp_tmp_msg_0_0.attr_type = 67U;
    tmp_tmp_msg_0_0.min.assign("TQMDQKJPENLYSXBICQXNCNHIAHXERXNQXMEONTFWGEZKMYCVJQFKBCKNDJAHKPJRLGLHERZMKCIDSZCUOUJHWWOVIIHGOSRLTCSJGKAWEQARKUWHIMAPLRBVJOVFSPUPJYVPTWIQAFUYSCZZSXGKXODDDGWIMPFZUGZXQFFPUOOUYDUVRMCLWZVYOXJMWVTBGWCHAIPTVNBEASFVRFSBBEQUKBAEIPALNJDBTOYFRTYMTZXE");
    tmp_tmp_msg_0_0.max.assign("XTOVYEQDMFQZFDDOSTKZFSNYRWAIIMGBZPNTHELBETFYUICGHKXUCEINTXUNYOWULJAVPWIEZGLQRRFPKYFXVIKHSAZWUKQYGEHBJLPDXAYBEOAMDWAVNCMGOOUBSPHOYLI");
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
    msg.setTimeStamp(0.647618991217);
    msg.setSource(4853U);
    msg.setSourceEntity(142U);
    msg.setDestination(44323U);
    msg.setDestinationEntity(114U);
    msg.name.assign("OPAAHZJLYVHKKLUZBITVSKCZJHATUAYBOQUFDBJMCQWWTTLVAIGDZXOZGSGNPDAUFOBOYPJLOOMIRFNNYNDMWHDZYYITGPMISXBNVTYLPRUSRTPQXHAOYELBAKWLXGRFNSMKRVUEKSXZMVWEEISNRIIDQFYMGUJJJQZZBCPNBCHWUVVCUXKWMVSXQKEXVQLGMIFKFTXRWHHQJXFHNWSLCETREAEWCKEUSP");
    msg.attr_type = 63U;
    msg.min.assign("BTNFQIHHYNKCLZPYPIUNCLDDQGAPWWXBGCGCOMWWAFHBIAWQZYHTNFSWHQSHKPQEVOAIHMFXTYOMZZBQBRPMTVS");
    msg.max.assign("VQZBAGCSWLCGEFQRMIOZITYDRCHIAVENTISMRYETUHARTWJKZPKVRJBWUFKDXIZUKQOPVMDGJTGZHNGFDPOYMFNMYKZKHQFJZWTQNLVXQWQGIALNNCXNADEJLMHYGLIERNLLKXSEPRNTLCJRGYPZUIDPVKOHUDUQSHOXTVDHXNBEEBMJACIVTFCPYSRKHSBGMEJOBQLOREWCAIVPSWDQBXYFUXMBUDSKZWPJAAFCCXLUWOYXSZFWHTOBOAVPFG");

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
    msg.setTimeStamp(0.644676447667);
    msg.setSource(17717U);
    msg.setSourceEntity(141U);
    msg.setDestination(21012U);
    msg.setDestinationEntity(51U);
    msg.name.assign("VEDRMSRZLOXAEWJIFXMTRJGTVVQSCONVPHUKURPZUOLZORWWJSCWEUSFBMXTZDFCCRZSVHEAFUWJMFKYBEYSDQUTZMIGBMXIBLHOLOOELIGTSXDZNXJENFAYAJVKUPNPIPGQUYMLAKRSVHXYAHVWOKYYTFQWPWACWVJZMJUQNLPYQBFHKZHTGKJJDNEFBCBXSNCCIHRDCDGLMVAYYGRBGDEGKZQRQFIGIWKQTPXHTLPAPBBMXTSU");
    msg.attr_type = 41U;
    msg.min.assign("BNLWJWSUGTTDOGRKRUAELLSHWPUBEYTOGAVSHIPSDVQULWRKGRBXVNOAEPDYRYZAWFYHGRUCJMWNRBFHPSAXSRVQQBECOWMYXMBKJPEOAIFVHOIFALKFXYHGGUILBKZLIDSJKETOTWUVNIHEZDXZNQCQSZXNSTQIXJTCUMJMINXPIILEGCVCVFYFVPDJMPXFMHFXKDBYWTWBNVYJLRPUZZNGKADF");
    msg.max.assign("NUCLOBHXXVHXJPOTINHEQIWCKGSEKJXSHJBVMOTYEZHMVPNGYZZWDADTFLMEUIGPWHWIGXVRESKRVOYZFIPQDGIFGWHRPFUCAQFYCMJVZYBLO");

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
    msg.setTimeStamp(0.910017390703);
    msg.setSource(46249U);
    msg.setSourceEntity(43U);
    msg.setDestination(2662U);
    msg.setDestinationEntity(189U);
    msg.name.assign("QAUXAOBDCZLQFLZNGGAWIFDSJSRZNQLELESDILHMGOCGFFIPTTCLRDBSPMKFDBWWYBFIPTBQLETIHKBYCVBNJOAVGHXGYDRUEIHSVXCDCQYQQJWUZDZKOQIGHANPRVHVONLBWSMUZPAMMKOUEODPVYVXANUAQSRMRYXEERGXQITONYPKZSSAEPJGTMUZUUWYKTICJTRWXVFKKHLNROKWTYBOHJNFKVZLMZNJPEHPFMM");
    msg.attr_type = 165U;
    msg.min.assign("ANSRBHINIPVYTVTZBXWRXHHEYXMNPMVLSQKPOZVLASKSLMYKODLDBGQTCYFFSCFIHNZTJEBYZLXFNCMBXJOWIAMJQKHQGUIQKJDPUWIOINULAYAGOVUVWUFATRXGZPCVGTJOOWSEVYNKUGKGIDQHDWRUDERDFDPUMOCLBMHTAEAEJZTRASRRNLQYCKYNWSJSDPWHZTGZXXFBCEXEQXPVZJIJHRLSQMYTOWKHUUBVNWKCQABRGPO");
    msg.max.assign("FKERXALQZVPGCPTEAJANCEGPEDCQZHVMSUUUEWRMKYAQXOTAKOPXSDAKWOHBOBIPZJLVRTWJWLHNNUQJSJWKVNGSXOQZGVYBSVPDFEJYGRLZNWYVMTNQFUXNGTOYOODRFGYLTMCVHWIQZLEDKCODMIEMSFBDBABNDLRYZTHJHYGJPMVXIFANDKFSGIZSYKIPAULMUFRYIALIEXKSURJQILJHNXHGWCSZCUBEXMIBZBORTWPFCQHKVCC");

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
    msg.setTimeStamp(0.853664766833);
    msg.setSource(19654U);
    msg.setSourceEntity(124U);
    msg.setDestination(4241U);
    msg.setDestinationEntity(126U);
    msg.timeline.assign("HWGCYCBFPIKUPSUVCYZQBYVXYCDUJEXZIOGLJXGWDMQASQMDMOPIITDAFKITGGRSTMLHOOIQGGLNRSVDZNEYNNCPBFZBACQEOXPFKFEZMMEPOWHFTSLPWJTBERYITANARLRXXNEHRRLAZKWCZEFJWVBCIEBFRJAKTRHDSCNJLJODKLRKOZAZJUBQQPXAUDYVMDHXVQPVIHSWLOMAE");
    msg.predicate.assign("YDSBXXMAQGAOHVEUHGPFTCRCUSPCHDFFEYMIGGSOQREQSJLTNANYHFHBONIEIRKNLTMWTGMDRK");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BTKCUIGSMEJZJNPNCJDMQZIPAFUYKLCUYELWDQSUXCIALGNVALUOHGXYSGXWREQKCKQKYBMITWJVCRRLGSZIHOUBHHKLRFPYDVNGRWVNENHMWVMXHPB");
    tmp_msg_0.attr_type = 145U;
    tmp_msg_0.min.assign("YPUVPNTSXPQSKXHTCRQZXQRXKIIKXVFBPOCUHAUEZTHMISDKSEFYFDPARPNQOMFYDSWEFIEJDOUONBREZIKSVTYMTHVSFWDNRXOHJABWAXZHGTVLZBQUCOWABFTGWTJLKGIFOQTRGWIEMGSCSJNMJLOZGLIBVCYFJKIOITZKQUGWU");
    tmp_msg_0.max.assign("YORQAJBUXABNSYJEKWJFBPILGBMMYYHVVHDDFLWPEBKJRWJBZNUYJXDWAHVNLEYSFILMUYXSIVARLTCFITWNKMIXCTHEKTNTHNXSXCSEOHPAWQYCXDCOBHSUUNXAYMWCZLTDVROFDDNEDILPXULLTXGPQRPPEIPQTQDOGOAEBBRIMTYZSNAGRKCJSZGNOUCFMHQQZSAQQKMWFZUCWZFZHDKOTKZEJMQVMFGJOSJWPIIGGBRCGPRRZOVV");
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
    msg.setTimeStamp(0.131788389723);
    msg.setSource(34680U);
    msg.setSourceEntity(143U);
    msg.setDestination(48885U);
    msg.setDestinationEntity(226U);
    msg.timeline.assign("CYPXDWVFAQTGKYJNIHRBZFYQYFJZPFBOCDMMEROLJQNPOCTZBIKHAOHMJBZGCBCLUHQBRSQSZDDNAKEUISUJYPLVYMCGPESXXNFEFEKGXUTCKKWKW");
    msg.predicate.assign("CSYAHQTBFXXPTLBOOGBAGCFBVBGFFWKELZOEOMAXPLRJSUYGCRRIQIZRLMIFRNDJUKXHSFVQWNCHINDQXUASJJQWTIABCQJDSDGPHLVZVXNKSTSTIBZEHMSPIEZTJFWOIWHMUMQFJVRULNBRAZKRMNWUQYMZCFJDNCWVZPQCPUQEJSDSWWIXEZZTYLTKBP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("IRQPSPDZMGWEFMRCHCNYAHVYKGLYWJQVYMLIGUOLJDIDXNBWAFRXNDKJQAZJMGLYTPAZWLCSXIBPUYEKNGFAXQXWSFPQNUFZCPBOMURHLWDVOVOKBRTFSAYTCOFMOKEHDBEZAPCETUHFWEEQPENBGWCRYAFGREYBMJQHOBXROIXTQEHLMUUTWWNCKXIAVUPOHVZTKVLJRIBOVAHJUZSLTJMVJRKGYSSSKN");
    tmp_msg_0.attr_type = 74U;
    tmp_msg_0.min.assign("IRLRNZFDNYVWUMWYPJKTQYJVVSIDPKPSNVHDRTRDSBCUHGRJAUTRPCSSPXNLEQJTPNNDWMDBQZKIMMXNLTAUGDSTX");
    tmp_msg_0.max.assign("KALFKBABTVKCRUVXGWQXIMHGQIDFZSQTQHGNEQJNWRSGRIURCCECPSTWDJURBYBFYONAHLKIUMZMUVFEAVMLAXDMPNAVTBGEEYVXEQTAWHYERFHLCJRPOKFWRGQHYITKYWCLOIGDFIDGSDNOYJOCXBPHSGHETDZQXIOHDVKMRSGDLZILXZASSPPPAQWXFWCLBNHEFLLAXPMUJBBWZVNIMJKFDOYSRNKT");
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
    msg.setTimeStamp(0.0305584984998);
    msg.setSource(42765U);
    msg.setSourceEntity(6U);
    msg.setDestination(4648U);
    msg.setDestinationEntity(98U);
    msg.timeline.assign("RTBLFBQCDHQLGBKJFNMOYGDZNKMQ");
    msg.predicate.assign("ZJYADUYSGPMDVWGSGXLTLWY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PLDVLKQRDULOPNBOTLTEMYTPSBFSHWUSUYNQWAVVAQMJEEAPRIVMJLRXOGHGTFKTSQWYUZXXBXDLQDAYGKVUECXAILWCSYIEQZJFVMCDRQOPGFBRN");
    tmp_msg_0.attr_type = 189U;
    tmp_msg_0.min.assign("SDPEABAFZIQZBVJZ");
    tmp_msg_0.max.assign("RCEIUYMEYNKYHCIKPFJSXIQZKTXCNWXMUKSSKPWPIOUMBRNBECAJKGCWKYMROMBINURUGMRWYVQVCPTTQHDIGOYGILLVJBJXNDJPSONQITZCPWGLESFSZVXFEJODOW");
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
    msg.setTimeStamp(0.977519643052);
    msg.setSource(20198U);
    msg.setSourceEntity(166U);
    msg.setDestination(40917U);
    msg.setDestinationEntity(73U);
    msg.reactor.assign("ZJUDPNVKONEFWVFMDEBFWTBNUYXSPSMSHMPGAIXHQZSPNYTRDRYGWDGFDRJHGPSYQLNCIEZEJWMUFCIQGBZHGJSYZTAJNMTFKRHSEGMYLCUFEEBMKXKSWLKFPBNQABR");

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
    msg.setTimeStamp(0.337230518677);
    msg.setSource(42328U);
    msg.setSourceEntity(65U);
    msg.setDestination(16145U);
    msg.setDestinationEntity(54U);
    msg.reactor.assign("SBJUZUPFZYTWDFWYUDQCRCYNMCTCXGTPISXBPKTWHSMWOYOQKDOXBXRKGQGNULOGDBKBRFZUMQKSUAVFADKQOPJRIBOYBCXILEEAKKELLXXGMDASIDHRSLOMWHIZVNLONEGSCVPIKZCZLTGJTVNHFVSCVIP");

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
    msg.setTimeStamp(0.775785211117);
    msg.setSource(47988U);
    msg.setSourceEntity(88U);
    msg.setDestination(43535U);
    msg.setDestinationEntity(56U);
    msg.reactor.assign("EJSLLUEAIXVBFLFHVCTUGJFSCCNBMTFEUKWTWRSOQBOHULUWSKREMSIHXWDURBIVSXPFEHNMAFHWNPFZCPIQVIPMPDG");

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
    msg.setTimeStamp(0.935607397675);
    msg.setSource(20697U);
    msg.setSourceEntity(203U);
    msg.setDestination(63637U);
    msg.setDestinationEntity(229U);
    msg.topic.assign("ADYBPGZCHYFBTRPOLVVDVSURNDTRAGCYKLGFDTZIBBICSNOENHGUQYSVFCUYFHOMGWHGJNSMGWKNLVHROOZZUWYAFAOZEZZXBSLTXSTLPDGSXOMDDOFMJFEXPPEHBJNOBXAQKWTVKIBFLTCMJACEWBDUXPUMJSWQEWKJKDMRJUTCJZMWQULXWZAPNRTHBWUKKVMQFJGYUIZ");
    msg.data.assign("EKOMXOYPHQNVIOYBGJXWPMWZKOMFVSVTGEZCNYEUBQKEFULKJESFOLCKNWKLJYTEUKHAVINGPZPAILVRHAZIFPMZUSCWTTFNRYCWUTXFXFSHAMYSDBFMVDRYPGRASIDZCLJHELZUCILGALRMVQMGLQDZIWGPXJXYPVBHTPTLBDJGCWJUYJAHRHBUCECTGAZQNAXRQVHSWNJXUDOFBYSQJNMDXOUWRKTTIZOMDBEOESCVIQSABRGDIRQHONXFKB");

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
    msg.setTimeStamp(0.0413456428719);
    msg.setSource(42095U);
    msg.setSourceEntity(98U);
    msg.setDestination(47908U);
    msg.setDestinationEntity(88U);
    msg.topic.assign("HEULREJYAYPSMLAEGEKLIFCQWXXRMHZNTBAGEZWCUVPWBOKFJHPOQDGRLZMNGNYAZZLBPVXMXTWQXNJXHSGMDKERPFKABHCDQLQTTDZUNVPGNPVOQYFKUVSVMUSRJAAXOSCDAHYYFSEYFWWFRHRFCIJKIRWUYCBBXOOQCTSQ");
    msg.data.assign("OZGXAZNSKWRLV");

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
    msg.setTimeStamp(0.0370023576737);
    msg.setSource(1273U);
    msg.setSourceEntity(190U);
    msg.setDestination(31243U);
    msg.setDestinationEntity(56U);
    msg.topic.assign("XFIUOQFWPPD");
    msg.data.assign("QRGQFIDWXADFSPSSDTDLKKFDAHVEUJQLN");

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
    msg.setTimeStamp(0.247351607294);
    msg.setSource(21777U);
    msg.setSourceEntity(20U);
    msg.setDestination(56276U);
    msg.setDestinationEntity(81U);
    msg.frameid = 37U;
    const char tmp_msg_0[] = {101, -3, -76, -61, -12, -113, 107, 54, 114, 50, -5, 56, 110, 85, 117, -40, -109, 87, 22, 125, 40, 3, 114, -108, 92, -52, 55, 15, 116, 111, -40, 51, 123, 70, 59, -34, -119, -51, 27, 70, -49, -33, -60, 59, -11, -87, -7, 25, -16, -64, 94, 118, -121, 44, -30, 3, 18, -25, -76, 31, -110, -114, 85, 40, 73, -59, 52, 49, -86, 15, 9, 24, -74, 88, 107, 58, -39, 86, 22, -10, -52};
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
    msg.setTimeStamp(0.661224413618);
    msg.setSource(13908U);
    msg.setSourceEntity(253U);
    msg.setDestination(53248U);
    msg.setDestinationEntity(65U);
    msg.frameid = 119U;
    const char tmp_msg_0[] = {45, 2, -53, -70, 30, 68, -37, -65, 5, -119, -106, -45, -116, -37, -54, -45, 57, 77, -53, -107, -39, -17, 19, -12, -68, -59, 63, -99, -66, -108, 28, -91, -85, -85, 12, -52, -121, -41, 10, -68, 1, 49, -70, -74, 101, -7, 115, 26, 28, -114, -50, 34, -18, 70, 43, 47, -31, 113, 3, 86, -128, -117, -18, 116, -18, 12, 50, 81, 25, -12, 86, 107, -77, 47, 11, 105, 34, 64, -113, -78, -75, 56, -95};
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
    msg.setTimeStamp(0.692620332508);
    msg.setSource(20874U);
    msg.setSourceEntity(192U);
    msg.setDestination(8952U);
    msg.setDestinationEntity(83U);
    msg.frameid = 183U;
    const char tmp_msg_0[] = {-72, -73, -51, 78, 105, -60, 63, -126, -32, -100, -128, -94, -120, -110, 117, 126, 67, -7, -92, -23, 16, -44, -96, 94, -99, 77, -57, -15, 82, -104, -54, -125, -36, 118, -62, 125, 90, -59, -114, -69, -109, 19, -128, 49, -119, 63, -105, -14, -20, -113, 45, -119, 1, 90, 120, 42, -16, -128, -109};
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
    msg.setTimeStamp(0.807275274416);
    msg.setSource(64610U);
    msg.setSourceEntity(254U);
    msg.setDestination(25238U);
    msg.setDestinationEntity(6U);
    msg.fps = 230U;
    msg.quality = 79U;
    msg.reps = 97U;
    msg.tsize = 198U;

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
    msg.setTimeStamp(0.426730577363);
    msg.setSource(61579U);
    msg.setSourceEntity(28U);
    msg.setDestination(28085U);
    msg.setDestinationEntity(222U);
    msg.fps = 168U;
    msg.quality = 77U;
    msg.reps = 187U;
    msg.tsize = 252U;

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
    msg.setTimeStamp(0.281144130092);
    msg.setSource(13954U);
    msg.setSourceEntity(6U);
    msg.setDestination(44407U);
    msg.setDestinationEntity(39U);
    msg.fps = 28U;
    msg.quality = 80U;
    msg.reps = 70U;
    msg.tsize = 230U;

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
    msg.setTimeStamp(0.303595052416);
    msg.setSource(34489U);
    msg.setSourceEntity(156U);
    msg.setDestination(30343U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.792876495088;
    msg.lon = 0.22940402337;
    msg.depth = 45U;
    msg.speed = 0.0461374186331;
    msg.psi = 0.156164828168;

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
    msg.setTimeStamp(0.622811861151);
    msg.setSource(23479U);
    msg.setSourceEntity(137U);
    msg.setDestination(25085U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.780820689763;
    msg.lon = 0.294044939292;
    msg.depth = 203U;
    msg.speed = 0.399458942815;
    msg.psi = 0.137430269238;

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
    msg.setTimeStamp(0.820605612972);
    msg.setSource(22103U);
    msg.setSourceEntity(162U);
    msg.setDestination(34802U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.463045623438;
    msg.lon = 0.0157570408097;
    msg.depth = 184U;
    msg.speed = 0.604716733438;
    msg.psi = 0.0527556413478;

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
    msg.setTimeStamp(0.791747565219);
    msg.setSource(26176U);
    msg.setSourceEntity(77U);
    msg.setDestination(29870U);
    msg.setDestinationEntity(98U);
    msg.label.assign("FZJPCFATAPJBTSNKMFEHEIUGIGBCGGWDAQAZSSEYWTCBNXIXLLGNXTOZPAWJYZFXFEMQFCWTOJBOASYKTNGCKPVAKSMRDLHDSMWDCUKXRNEPYIEOCPQMOZINXTRPHUZYDHSUONTZLTMVQNVYXHEVRKWDTQK");
    msg.lat = 0.804016129677;
    msg.lon = 0.825909840176;
    msg.z = 0.0134378172556;
    msg.z_units = 38U;
    msg.cog = 0.580608976281;
    msg.sog = 0.0544451077768;

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
    msg.setTimeStamp(0.957068682609);
    msg.setSource(10963U);
    msg.setSourceEntity(98U);
    msg.setDestination(10988U);
    msg.setDestinationEntity(45U);
    msg.label.assign("TUYLIEJYGAZBSQNPOFPRKOSOKXHJCETBWKWETB");
    msg.lat = 0.237643278045;
    msg.lon = 0.512583121473;
    msg.z = 0.608055635651;
    msg.z_units = 156U;
    msg.cog = 0.0910152340565;
    msg.sog = 0.783288913089;

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
    msg.setTimeStamp(0.410847935349);
    msg.setSource(32608U);
    msg.setSourceEntity(85U);
    msg.setDestination(52292U);
    msg.setDestinationEntity(252U);
    msg.label.assign("EEPCMGTULAPVPRDOWWRXCQTGOIZZNOMYZFAEQJOKCHYREFGXGLQIROVZYHNQHDUJMKUXBJFTLDB");
    msg.lat = 0.622042336138;
    msg.lon = 0.714052001196;
    msg.z = 0.503197364457;
    msg.z_units = 212U;
    msg.cog = 0.703010792799;
    msg.sog = 0.833631488547;

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
    msg.setTimeStamp(0.467653706786);
    msg.setSource(56566U);
    msg.setSourceEntity(130U);
    msg.setDestination(44140U);
    msg.setDestinationEntity(65U);
    msg.name.assign("VNRENJKIVOHWYGXRSFULGLBZJZAZCHYKXMTWBPQISPYABOPPXFWYJPANWZBZPFXRA");
    msg.value.assign("PFRHIPYAEBZQWEZIBISPVFLSMGTNZKVUKMWCCHLBOJHYAXRGHAXCLTOEIAWICNQMHGXBTHRFHGVSHTETJPAVIQXZDATPUPQOLRYCDZCDVAFMDTPKAQXLYYYXKXUBDOPTS");

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
    msg.setTimeStamp(0.177006405787);
    msg.setSource(8427U);
    msg.setSourceEntity(4U);
    msg.setDestination(33093U);
    msg.setDestinationEntity(124U);
    msg.name.assign("AMEXRIZKLPNDXDYFXZOAQSXBWQIPACKEJPHNIQKIMYGWUQMGVOWBMSSWFBLIVEQIGHGMRZUUFATPNPCJILMEDHJRGRECYABTUIXKRDPEUCOXNVQPGYQRFMHDTNNJFCZJJHEVTAZMICVYAVCKFTYFB");
    msg.value.assign("VWLUKSTVGGRFVMGBCMRLEXNOLAYDOOYFIUXCKNVHPDXMSBUGWPWBYEEGDWDCLGTLPOTAVRDXEZYODMMCRTAWLKTEHSFXIFLWYPJZFKBVBZJHGFENNIYAZVNBOCHPYBIFQXTCFHYKDMJZLKBNWQAZQSEJTSVTDXIHUUXAZMSWJSEITPIIKMRWOOYARHFJCOXQVUQFVZHQQTOACSQNGMRPNEUDXGHMLKSR");

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
    msg.setTimeStamp(0.492516411132);
    msg.setSource(45326U);
    msg.setSourceEntity(124U);
    msg.setDestination(26223U);
    msg.setDestinationEntity(198U);
    msg.name.assign("YQVBBBPOVRLPAEKYSPFIHZFHSQTCXBUYXTKZFMKVJRYDQDROOKAAIDJTGACZMGZDKGWPPHPYBSENVQRGMJCWAFIIDJVZCIBGROUALHCXENSEOCMRYMONEKXLSMIIYUHAJEVWWJTUTAQXVFSOTTGQDPNQLLDWCBGPXBISHZLGWNNTDSCKZDUSWLHUNGHRQNSJDQBTTLKGVNKWXFWMYEUKI");
    msg.value.assign("KPYMUXFCSAJDDYYLVHBBGNFGHPWTYQREAITKOCMQWZWJJIJQLOUKJMJW");

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
    msg.setTimeStamp(0.476921815254);
    msg.setSource(25990U);
    msg.setSourceEntity(151U);
    msg.setDestination(3767U);
    msg.setDestinationEntity(58U);
    msg.name.assign("TXZHLDKEWCSWFNDGHTMBQWSYBIVIZBQWXNELEPEKCJIOLUTPBCCLIHTGOZDRNRKNJAVIZIWDAQMZVCBYRKSCJEFTYVSMVPJKFGNSGERSQNPQFCSZHBRLYXWUFRWGCMTYVAIHRGBJEHSLMZOQCNLDKRSKVWKWDULPVHJXFLD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DAFKQIWQCREJYXGPFYEPMXABNYNRGYMSPMEEOBZTHLJDCZVKVHULAZQIOZDZDRPTKCDCXGRNGUMNJFSNSXEEJLYCEJAVRLHVGOMIICUFWXNUAFPQJNFSPGEFCTUCBFZATLXLOTFELQLVTOIKHJODBQDXVSAPKRXNIIKBZQTVZTXHPUFNWSE");
    tmp_msg_0.value.assign("FXUKBQNSMSSSBRFRVDLEBOORNYGJCDJQYMJAXBHZHUGQKOEIOVZVBLMLNRDZNFAIJJYDVXAFIYWSXUFPHTUMGGAHNZSFTNTTMPXOZQXOKYERTFDAKCCCWOXPQUHWTHYRIJLKVKGEPOECYHEWIBFVMQ");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.263534669893);
    msg.setSource(29233U);
    msg.setSourceEntity(172U);
    msg.setDestination(13708U);
    msg.setDestinationEntity(24U);
    msg.name.assign("TTINYXZHOWNQILXTVICUFEEFGRTPYFRDVKHQJGQWSVJNPENSNHVCZLHVMDUURJWTGUHBYUENUFWXOSGBRKBUZCMCRTFBKAMPRGUHDWPVIVJOQKJLZREVPVFQSMOGCWXLIHAUE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NTJSWTFBOXYJVBASRWKAZGKPCGPWILCFOHCRSQBFCNADVKXIXNHAWDRDEPBLEDOZKJZYMGFPQYONXSJHWPYIUHVEZFMMPWZSRATEHZKNQLUOTZTGXEVDLKCWPLXJSIKYQUYJNFCGZQKXUEKVGUTWYMVOYQMOZVOCCMRDNHGFJETHDECIJPDSSEMUIIBXVFNRUIFVBULNOHGLRXGJBSYAWAJLNHAIFAAHRZBBXULTLKSQQTDOCGPYTUBQRIDM");
    tmp_msg_0.value.assign("JSNQUZFOPHLADVQEJZQQDUTDROBYRALJBQSUOPZLNKJQDZOGWLEECNXAFIGXXGCQRKEWYSYFORVMCQEAJIRHZIVYIKHDEHODDZUEDITHLXIXHHYTYWWYVFCUVTZPBSMBWFLOJQUNSMSBJRFPFWPFZIVFUBRXLBOKHDVGOYJNXIVZRRXWCTBNGGMPKITMCPHWTWBSZBUPWNKAXGISKYAKMN");
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
    msg.setTimeStamp(0.113135378943);
    msg.setSource(45149U);
    msg.setSourceEntity(239U);
    msg.setDestination(60431U);
    msg.setDestinationEntity(58U);
    msg.name.assign("OFIOULEOBZTQAJRAQCMWNERNYAYYGDAFSCERLDZITVBYFJRMWPBJHMJASZSWKMSTNFHCGIFZALQKXIHGJMFM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SEGLECDJBRECRSPUDNQZLQGAZOADEEJN");
    tmp_msg_0.value.assign("JBGLCZRIAQIMGZTTPCBUNWGDVSXFVUPAYTZYKEWOUDM");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.867313602122);
    msg.setSource(20032U);
    msg.setSourceEntity(163U);
    msg.setDestination(7895U);
    msg.setDestinationEntity(38U);
    msg.name.assign("BTQPJIWKFQFLGLEUCONQSNXXUXHXQNCYFAXJJLZBWWOYMY");
    msg.visibility.assign("ANQFKUGLMEEZQMAYFPYJJYYTIJHCZPADTFLCBWRMZXUSWHDXUXVISZBEBQHHOTNRBBVDUOXWMHEKKIUMXACHSVNIQGCWQOZVWCVKJCTNTANKDACRVGUPFBUXKOAUJFGEYFCPITJNSJRYPKXXYYAWDEJVJVKQRKZZBNJMCRWCFIRMBSTXTG");
    msg.scope.assign("ZSMUYNXWDQRDUYTZKGUWIDJMTUXXFSNCIINYWDITDAQDHCBKWQXLPRFFBMFFPPGYOTACJDTSVEXQPQHUYEKQESHRGXJTWXWSYOWRYJCLKFBVOHOUBGVVXLZBNKYTMPCVLQJMCK");

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
    msg.setTimeStamp(0.123608985249);
    msg.setSource(10438U);
    msg.setSourceEntity(129U);
    msg.setDestination(57051U);
    msg.setDestinationEntity(175U);
    msg.name.assign("NQKINPAOOPIWCPWMLSXXMQOTDSOXHDGNHHGUVHEYJJQUUIMZJNPVFNOBETBOGOUXTYNPACKRIRFJXIBJWKDRZJYUAADGCPVHVTXNJSIDEPMT");
    msg.visibility.assign("SXSJEBMGVCTJNMPFHZZSICBAHLORRVTVSOTJNQQJCIMEHDEHBNGGWGYIZFBAFCHVGAGWFVULTALHLPENQYADCXVDMZQYIOLNXRMMNDHRQPGTTGLYRIALHSZRXTIAEFCCBUUVXYAKOIQWIHJDUYFKVOBQKWKKDUTZOQRDXEFKRHGMNBVUCOAZWWNUUDLE");
    msg.scope.assign("HITJSPTKGKGDTPMXLYFWHOGNUFUFSEVVXQQMALQZTSGFYGEZKUKEDDYIBZZHLZPHSKALWPAVUVXGQLSADCYFBQJFTOFJRNXMDOMGNNQJWCHRRIMJ");

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
    msg.setTimeStamp(0.862270457394);
    msg.setSource(46536U);
    msg.setSourceEntity(182U);
    msg.setDestination(6045U);
    msg.setDestinationEntity(31U);
    msg.name.assign("IIQZMTTOFDUMFCYYSUVCJMBJHYMFEBROGWBTAZVVXZCGCAMOXKSJVDGQEPFAEZUNOBJSHPSHSVXKHKUKFLPTXOCWEHGVWMIPYZQXEVLYFKWXTMEDJIBMPPRGZIIWREJDAQECPFTAYFHCWCYKNURSRUGYSGBUHCTUSXLHZJHKXNTGOTXLALGDQMOOTBBWLVYKQZJROLSIQU");
    msg.visibility.assign("WJDXHAALYLEESHCQXREOSOCJRBITSQSBLQQMBMUOPHSSBFYSWKRWYAMTTMCAZONNHVRDDPGHKQHRAYYFJQPJENNXQZUTTMCHSOZONLBRFGZJUYWJDNUVLCFEVVZOIYFVCIGKPPWTKGBBGKVLIFCLOXLIUVUMPGFEELQWGKLTNRXTCMJYWUAOPDEDRAPINKWPXYQGKKMBASOEZUSXXIPYCJWIQIFZDMHA");
    msg.scope.assign("FZYLKFUBCNRLRBTJHSOLSSSULZAAEPQTJBZTIOQQTEPYMFEJQGGPRWKEQBA");

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
    msg.setTimeStamp(0.795202768769);
    msg.setSource(3911U);
    msg.setSourceEntity(247U);
    msg.setDestination(4190U);
    msg.setDestinationEntity(62U);
    msg.name.assign("YVDYNLNDILTLCBZWIADPEVBYVIIPYAYBRNUARJXCHDBFXJXKPNTEZPHZCSJFQPXZYUSGGSOHGOHHPBCEIQKFNMDSQCRTGSVCVPDOHFNOUHNBTCDJEYZQTRMENILHFJCYTMEODPZWXODYGSFVMCKIG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LYCPLQAOAURIYPQQGERCKDUGSKGTEBZQZCOIRDFJWYZXMYHLGCDYBKZIFDXUMRQPHBMOTQMKIFHXALDWGZOUUEJSIVFTRJHTNRECVSSKJVVFYKKINNBHTBDMJLKECBXYWGPYVLXXIHZIRSAASOAZKPXYNRWCNCQAUPXRNUBOEVZFMSMJDXUAFMSMHGGPJUBTMEJJNOOVHULZ");
    tmp_msg_0.value.assign("KTKYESRAIUGIVUDEJMLAILITDJEOLRMRVMCBGOMYDRGMTSRENOCQUWQJBZSYJNSLZNXKYTGXEYRUQOXFWHSTJKJEQVLGCEIAMBWPSKHEOBPXZOTAKYFVKAZGBXZFPATCIUPWQDWYXFXAJ");
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
    msg.setTimeStamp(0.738036385795);
    msg.setSource(25637U);
    msg.setSourceEntity(101U);
    msg.setDestination(22443U);
    msg.setDestinationEntity(166U);
    msg.name.assign("YWLNGWURDBNXVHQQGSLZULUYGBSQAHPSWGSKFFAQNSUQXFOCMOJCROHTZBFLAAGWDZMJCAFPVWBHRXZNREOFIVKNKXUYKLPLAXTTXFHUYEMEZCCPQKRWFXAHOBIYBSKTFAVDRZEEAHMGINOGIJHSAZPLBRSGTEJSLJOWEEGXTZJPMBPUNRUYMNJTQQPMFTEITKIOLWHVCVZVQNDRRVLDKHMZY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZJQDLSYUOLJWBXPKOPFWLJKRHARSWHKAXEZL");
    tmp_msg_0.value.assign("UQBZAHSVAMJMJATOBAVQBYMDDLBIXDIPCAIUGUOEYUIRUOWVSKIBIEDTSPKQXLPYCCLQLJYPNXXXWZYTTFVWNADOSSXURNWKOIOLHJZKKRZXBKFFORZYITQEK");
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
    msg.setTimeStamp(0.0363248604055);
    msg.setSource(53910U);
    msg.setSourceEntity(194U);
    msg.setDestination(39404U);
    msg.setDestinationEntity(96U);
    msg.name.assign("TPEMEZXIDRFL");

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
    msg.setTimeStamp(0.569803245629);
    msg.setSource(25058U);
    msg.setSourceEntity(196U);
    msg.setDestination(57141U);
    msg.setDestinationEntity(248U);
    msg.name.assign("FACICUMSTTAMFDCJAZQCGQBEHMXWEPDGKOYDZGWCMADQCBBKZVRVFSXWGPEWGXILXQBNTKSVOWQEXDGFOUTTSTBEIQ");

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
    msg.setTimeStamp(0.909085852068);
    msg.setSource(8779U);
    msg.setSourceEntity(29U);
    msg.setDestination(49756U);
    msg.setDestinationEntity(202U);
    msg.name.assign("ENBWSTSTHGTGIGUFVXLWLJUMJAFSIGGYHMXYJOZTRENXCZCABBGN");

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
    msg.setTimeStamp(0.10117854573);
    msg.setSource(31516U);
    msg.setSourceEntity(49U);
    msg.setDestination(50412U);
    msg.setDestinationEntity(97U);
    msg.name.assign("VWIPRSISIHRSVENJMEPQQNQUGURLAKWIBNTKQPSLXUPXQSZRYMIEDSDJZLYWALJDJAOFGJXCCAVBPLOX");

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
    msg.setTimeStamp(0.773020416792);
    msg.setSource(44077U);
    msg.setSourceEntity(206U);
    msg.setDestination(38338U);
    msg.setDestinationEntity(177U);
    msg.timeout = 3896151225U;

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
    msg.setTimeStamp(0.673105778934);
    msg.setSource(18509U);
    msg.setSourceEntity(143U);
    msg.setDestination(10653U);
    msg.setDestinationEntity(208U);
    msg.timeout = 1305237279U;

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
    msg.setTimeStamp(0.521195114399);
    msg.setSource(42318U);
    msg.setSourceEntity(113U);
    msg.setDestination(7573U);
    msg.setDestinationEntity(44U);
    msg.timeout = 3566487466U;

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
    msg.setTimeStamp(0.439181921767);
    msg.setSource(46790U);
    msg.setSourceEntity(6U);
    msg.setDestination(16399U);
    msg.setDestinationEntity(54U);
    msg.sessid = 2672187310U;

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
    msg.setTimeStamp(0.231010746786);
    msg.setSource(9096U);
    msg.setSourceEntity(177U);
    msg.setDestination(47364U);
    msg.setDestinationEntity(125U);
    msg.sessid = 1135143822U;

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
    msg.setTimeStamp(0.595384720778);
    msg.setSource(2633U);
    msg.setSourceEntity(49U);
    msg.setDestination(53774U);
    msg.setDestinationEntity(93U);
    msg.sessid = 3420281729U;

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
    msg.setTimeStamp(0.778048986349);
    msg.setSource(59767U);
    msg.setSourceEntity(221U);
    msg.setDestination(19768U);
    msg.setDestinationEntity(104U);
    msg.sessid = 2860521804U;
    msg.messages.assign("EEDJCWMALORJDILVUPKWMUHMLTVETJKRSGRYEIBAVZJCFFLPBMVQBGXYTMWQYJHCDUGEM");

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
    msg.setTimeStamp(0.61423117743);
    msg.setSource(18814U);
    msg.setSourceEntity(240U);
    msg.setDestination(6505U);
    msg.setDestinationEntity(1U);
    msg.sessid = 1081835998U;
    msg.messages.assign("ZXFINQHWWBAZASFHUPVQDVEKNTHABZBICGOXPJKWOWSYFBDIIZPIGCMEGUTTOXTXFUCQSTYWMEWOGRDPFPJLGYFVVJQEOQQMNMSMTIQPOTHVBORKRJXYEJUZALHUEBVXYENDOLFZUBDQBGYDIEILKLNPVTLUFDCSHRAMPGNMBLCCGIFZCM");

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
    msg.setTimeStamp(0.951589483356);
    msg.setSource(45388U);
    msg.setSourceEntity(89U);
    msg.setDestination(40466U);
    msg.setDestinationEntity(193U);
    msg.sessid = 3489411004U;
    msg.messages.assign("BEQSNHIZKGTUVXNQDBOWTDR");

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
    msg.setTimeStamp(0.147442089767);
    msg.setSource(53647U);
    msg.setSourceEntity(145U);
    msg.setDestination(3561U);
    msg.setDestinationEntity(20U);
    msg.sessid = 1790233949U;

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
    msg.setTimeStamp(0.314335501165);
    msg.setSource(56648U);
    msg.setSourceEntity(253U);
    msg.setDestination(14895U);
    msg.setDestinationEntity(186U);
    msg.sessid = 2350310065U;

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
    msg.setTimeStamp(0.0566664439244);
    msg.setSource(2548U);
    msg.setSourceEntity(233U);
    msg.setDestination(56935U);
    msg.setDestinationEntity(148U);
    msg.sessid = 207697429U;

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
    msg.setTimeStamp(0.208766188123);
    msg.setSource(9860U);
    msg.setSourceEntity(138U);
    msg.setDestination(43447U);
    msg.setDestinationEntity(145U);
    msg.sessid = 3143574245U;
    msg.status = 2U;

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
    msg.setTimeStamp(0.961351912892);
    msg.setSource(19948U);
    msg.setSourceEntity(237U);
    msg.setDestination(22375U);
    msg.setDestinationEntity(202U);
    msg.sessid = 1500823391U;
    msg.status = 245U;

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
    msg.setTimeStamp(0.324587748395);
    msg.setSource(15491U);
    msg.setSourceEntity(12U);
    msg.setDestination(56089U);
    msg.setDestinationEntity(36U);
    msg.sessid = 2147599344U;
    msg.status = 31U;

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
    msg.setTimeStamp(0.644686300493);
    msg.setSource(29748U);
    msg.setSourceEntity(179U);
    msg.setDestination(7960U);
    msg.setDestinationEntity(176U);
    msg.name.assign("QGRLHXJNZQTVNVMKZGDMOJNGFRLXZDUIOAEVICXYDQNWZFKRLZCWUYJMPTANCETOMBKIBZJXHOBPHTJXIXKCIRRYAPTRBWUQDBRKF");

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
    msg.setTimeStamp(0.168826814224);
    msg.setSource(27385U);
    msg.setSourceEntity(194U);
    msg.setDestination(11291U);
    msg.setDestinationEntity(209U);
    msg.name.assign("LSVOROAHDUSTPJAHDFICWLWZNXWMZKAYBJKXIC");

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
    msg.setTimeStamp(0.603746495711);
    msg.setSource(17584U);
    msg.setSourceEntity(58U);
    msg.setDestination(41386U);
    msg.setDestinationEntity(49U);
    msg.name.assign("XCZCLKTZDKQQGZIRGXSPH");

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
    msg.setTimeStamp(0.423923661611);
    msg.setSource(49409U);
    msg.setSourceEntity(214U);
    msg.setDestination(5045U);
    msg.setDestinationEntity(187U);
    msg.name.assign("OICVZYVIPTDBVYAPEFDTHEKJNJQXGCGOAOKBBCUAIMCUKZW");

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
    msg.setTimeStamp(0.478618605055);
    msg.setSource(52108U);
    msg.setSourceEntity(139U);
    msg.setDestination(9129U);
    msg.setDestinationEntity(175U);
    msg.name.assign("VOVJVKEWYDKJIQGFYEFJUODIYCEXZDXBWGLSQMUHPNEINFPTEEBQKJQCXBQXDZPBSQBFBPLSRJZMCWFRKCNXCGLZZHXRTNRQLBSPINCAGUTNTVQFBWWHFDCVDGMGWPNUIISMMMFAVAYAMHMYPYPYZALQHNDEDUFJZHNOXWHYVYZLLPWJRAOJAJKLSEJUIMLKKAMSKRITDBRCVXITOOHZKEXGQVP");

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
    msg.setTimeStamp(0.264532850625);
    msg.setSource(40683U);
    msg.setSourceEntity(77U);
    msg.setDestination(33623U);
    msg.setDestinationEntity(59U);
    msg.name.assign("KVSIQIPNCN");

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
    msg.setTimeStamp(0.0897068914374);
    msg.setSource(55502U);
    msg.setSourceEntity(11U);
    msg.setDestination(12773U);
    msg.setDestinationEntity(185U);
    msg.type = 21U;
    msg.error.assign("KLZMAMVNGJTFIBNXOLBKHPLERSXTDFCXQZEJCAGEOAHETXQCTL");

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
    msg.setTimeStamp(0.982708374944);
    msg.setSource(5215U);
    msg.setSourceEntity(113U);
    msg.setDestination(27394U);
    msg.setDestinationEntity(17U);
    msg.type = 197U;
    msg.error.assign("QOMMOPYRMTGLZCSAFNYNUDOJLFOSYYQAWZJYXWIDKABVLSRZMCFGAJEJCXCBSXIGIPZRUFRREFZRWDAKRUEQGVPKKVFOMKWCFYWCPOLNFCBUZAZLGIDLBUTRWEXVHQBWVZNJYRQWKTVWAJNMIQHBSLBOQSDIPPNEHXODXK");

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
    msg.setTimeStamp(0.615314689042);
    msg.setSource(14182U);
    msg.setSourceEntity(175U);
    msg.setDestination(5534U);
    msg.setDestinationEntity(93U);
    msg.type = 76U;
    msg.error.assign("LUHSOMWJRVIDAQDZSZYSTRAEMBGORJXJHRXXFNXAJDCVMBUCBGKOQZATRWENZAYXJPWWUEMNWGLLPZWILCYTUFFBVERPRCPFBGWMVIIDVYDCWLTXDPQFSBOURYMFYCFQDJHDQZAZGHEIVEUXHJGKQLOVSWXIZAAYKGXAIVNRYTPOIKIXNYFRKMOFBIUMNNLEHVJCLPTZKSTGFCUMLNNLHDABDSVKBSHCUBHEZPENOOYMQSQKETKJPQSTK");

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
    msg.setTimeStamp(0.683423298654);
    msg.setSource(38734U);
    msg.setSourceEntity(96U);
    msg.setDestination(8994U);
    msg.setDestinationEntity(69U);
    msg.seq = 59431U;
    msg.sys_dst.assign("WBXUBDGDNKKNMOLCSXCYYMKZHXSKCGDUVXOIZWXTJVTUSAJDFEHYRMQLMVSLNVPNFCYHEE");
    msg.flags = 33U;
    const char tmp_msg_0[] = {5, -108, -8, -105, 87, -58, 43, -40, 49, -35, -54, 119, 49, 50, 102, 98, 116, -19, -118, 67, 60, 11, -113, 120, -93, -113, 76, 1, -98, -108, 57, -80, 12, -97, 27, 11, -10, -17, 5, -11, 104, -109, -92, 98, -82, 63, 81, 96, -38, 80, -12, -22, 52, 107, 17, -90, -81, 81, -94, 74, -75, -21, -92, 22, 16, -71, -124, -100, -61, -86, -64, -97, 56, -56, -25, -89, -13, 72, 19, -49, 56, -68, 54, 120, -59, 57, -33, 96, -11, 64, 81, -106, -38, 110, -104, 114, 99, 112, -51, -105, -6, 13, -34, 36, -27, 95, -109, -3, -95, -60, -76, -53, -45, 119, 71, 111, 58, -60, 57, -1, -86, -69, -28, -37, -112, 43, -119, -32, -34, -23, 31, 124, 98, -62, -84, -78, 83, -4, -1, -20, 20, 121, -51, 99, -96, 66, -49, 65, -113, -111, 121, 5, 72, -25, -22, 100, 30, -66, 7, -93, -66};
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
    msg.setTimeStamp(0.316927104411);
    msg.setSource(1806U);
    msg.setSourceEntity(66U);
    msg.setDestination(13979U);
    msg.setDestinationEntity(23U);
    msg.seq = 47060U;
    msg.sys_dst.assign("GOMNYNSNPFXTJZGTHBEVEFJFLKRUQVUCFAISYNCAUDHCSPSTPZKZBBNXSDVWBTHC");
    msg.flags = 48U;
    const char tmp_msg_0[] = {-116, 96, 126, -52, -21, 84, 79, 42, -109, -44, 69, 110, 89, 114, -89, 124, 75, 2, 39, 10, 116, 123, -22, -15, 108, 55, -80, 11, -54, 37, -42, 41, -37, 113, -40, 59, -92, -39, -117, 58, 18, -62, -13, 112, -36, 79, -90, -37, -38, 48, -13, 85, 48, 25, -39, 22, 64, 73, -36, 39, 83, -108, -14, -79, -76, -61, 27, -40, -55, 15, -109, -56, -120, -13, -59, 106, 103, -115, 1, 22, 49, -85, 34, 28, -40, -73, 76, -2, 93, -67, -11, -85, 8, -24, 27, -114, 58, 23, -94, -32, -85, 52, 103, -1, -14, -16, 58, 14, -105, -67, 77, 11, 65, 113, -66, 99, -113, -55, -4, -41, 55, 50, 17, 52, -83, -111, -18, -72, 66, 115, 18, -79, 57, -22, -19, -42, 83, -10, 72, 104, 20, 119, 119, -56, 110, 29, 47, -54, -71, -98, -98, -51, -74, 86, 97, 62, 124, -73, 93, -79, -74, 31, 16, -48, -82, -83, 29, 69, 93, 81, -113, -128, 106, -123, -118, 32, 41, 45, 117, 112, 116, -100, 104, 115, 124, 1, 30, -96, 48, 110, 97, 109, 73, -27, -60, -103, 40, 1, -128, 72, -7, -81, 73, 38, 18, -96, -2};
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
    msg.setTimeStamp(0.242869476045);
    msg.setSource(49758U);
    msg.setSourceEntity(151U);
    msg.setDestination(45937U);
    msg.setDestinationEntity(106U);
    msg.seq = 5107U;
    msg.sys_dst.assign("SDSCEQGDJCIWXSYKUMMFPTVA");
    msg.flags = 101U;
    const char tmp_msg_0[] = {111, -47, -38, 5, -89, 16, 26, 47, -17, 123, 12, -13, 19, -8, 22, -12, 68, -88, -91, 1, -22, -88, -89, -19, 40, 28, 40, 9, -116, -31, -19, 68, 48, 17, -35, 56, -97, -107, 33, 102, 111, -122, -37, -18, -87, -58, 81, -18, -125, -60, 71, 33, -121, -7, -80, -46, -35, 119, -91, -121, 79, -55, -44, -100, 80, 68, 119, 10, 96, 9, 94, -59, -72, 109, 23, -86, -18, -8, 32, -93, 6, 105, 71, -96, -13, 82, -101, -82, 83, 110, 108, -38, 16, -124, 41, 100, -106, 97, -94, 14, 106, -32, 84, 36};
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
    msg.setTimeStamp(0.344607370002);
    msg.setSource(64635U);
    msg.setSourceEntity(197U);
    msg.setDestination(9313U);
    msg.setDestinationEntity(103U);
    msg.sys_src.assign("LDITGQQBAXDCGZFHHUXCQMFPKTTYZLDICEZPSZZGEOKEIWBUNFG");
    msg.sys_dst.assign("ELDOWRDQGMBYYNXAMWTYGBGBYOHTCJNEDYFMMYYUVIUIEKUVUTAKIRFULPVVPMGREIOHHYKZCGZQZRZEMLNWFJLDNESZCLZPQJXKOUEFNOTNUDLPSZHLMQTFFXQIVDKZPBWQWBJAREBYWIXHJXVBDGIFGZQJRPBVTAACSWISCKHJTHZSSBVKBVDUXXOVNPXSRKHQNRRDROJSMXNLCLQADHOOPYFATAUICFASJ");
    msg.flags = 249U;
    const char tmp_msg_0[] = {37, -81, -32, -55, -8, -29, -61, 23, -78, -67, -28, -9, -34, -52, -77, -38, -77, -36, -98, 77, -111, -31, -52, 120, 34, -127, -30, -89, 33, 90, 74, -98, 28, 84, 59, 28, 46, 118, 59, 93, -24, 87, -33, 6, -24, -43, 118, -47, 120, -61, 101, 21, -55, -125, -81, 108, 115, 31, -64, -77, 91, 115, 3, -10, 16, 12, 49, -123, -109, 109, -125, -77, -49, 55, 106, -42, 39, 40, -75, 22, -79, -6, 48, 120, 108, -33, -7, 100, 116, -83, -109, -49, 11, -72, 117, -117, -118, 87, 23, -11, -116, -7, -104, -58, -119, 27, -70, -39, 15, 109, -26, 54, 74, -87, 96, -16, 83, 45, -112, -38, -12, -112, -90, -81, 61, 71, 27, 65, 94, 3, 45, -114, 8, -47, 111, -72, 30, -40, -60, 27, -90, 120, -28, -79, -59, 116, -72, 72, 12, 40, 96, 56, -58, -93, -23, 14, -44, 103, -30, -12, -66, 117, -111, 78, -41, 68, -120, -122, -91, -80, 76, 92, -25, 11, 82, 18, 93, 76, 19, 0, -106, 40, -54, -89};
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
    msg.setTimeStamp(0.0748134835439);
    msg.setSource(34189U);
    msg.setSourceEntity(90U);
    msg.setDestination(18936U);
    msg.setDestinationEntity(251U);
    msg.sys_src.assign("QPTTQEDKTDJKBEWXF");
    msg.sys_dst.assign("WTXGBHZRFDVXPNCWZYGEEHRRIRZKFTWEKZZKQPPRAYHDCUHJHFCXNAOAMHVYPTWITCMCJEXGBYTGGFVOTOMPFCNZKAICZTPJQKKDQGDMMFAANRBYYFIWQUMEODIVILMXICZGRSMISNTVAULUYPUKJUKEWYVVOQBBZNVSSURLMWBXESYJTJWVMONOVCFOFHADLORJPSBJLLENQJHOPPSDQXBJUDULLLQYKTWQKXREDAQEG");
    msg.flags = 236U;
    const char tmp_msg_0[] = {-78, 66, -115, 117, 58, 40, 87, 91, 42, 22, 72, -111, 105, 18, -52, 33, -69, -77, 118, 103, 109, -91, -73, 30, 80, -109, 15, -43, -22, 12, 14, 125, 121, 37, -9, 120, 41, 53, -113, 33, 62, 99, 13, 82, -80, -51, -34, 5, 3, 112, 2, 53, -9, -69, 6, 63, 76, 55, -82, 52, 4, -13, -27, 102, -114, 20, 117, 71, 110, -87, 91, -96, -119, -2, -34, 110, -114, -28, -83, 99, -97, -69, -5, 67, 95, 0, 83, -86, 28, 51, -2, 13, -51, -113, 43, -53, 27, -119, -31, -81, 20, 1, 122, -8, 85, 91, 98, 49, -55, 59, -37, 111, 4, 96, -53, -100, -62, 22, 57, 117, -13, -22, -20, 48, 33, -73, 122, -99, 63, 16, -67, -88, -55, -61, -109, 96, 50, 60, -25, -20, 96, 106, 39, -72, 122, -80, -46, -16, -96, -75, 112, 79, -43, 113, -76, -92, 43, -118, -102, 93, -114, -118, 22, 19, 52, -79, -101, -91, 111, -53, -118, -38, 60, -78, -100, -14, 115, 24, -77, 60, -42, 123, 14, -48, 32, 6, 7, -37, 63, -88, -47, 54, -6, -126, 12, 108, 11, 4, -104, 44, -96, -112, 19, -79, 48, 117, 69, -111, 45, -23, 58, -109, 94, 93, 9, 17, -17, -76, 13, -50, 50, 13, 1, 0, -39, -81, 24, -43, -92, 114, -79, 99, -62, 2, 66, -102, 121, 34, 98, -50, 43, 63, 35, 3, -47, 94, 61, 33, 62, -41, 55, 93, -45};
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
    msg.setTimeStamp(0.202004720671);
    msg.setSource(31667U);
    msg.setSourceEntity(53U);
    msg.setDestination(45836U);
    msg.setDestinationEntity(100U);
    msg.sys_src.assign("LDXBQWZSVCFHKWOPCPQNFLBJIZJZHDXNLMURFZELQFADKIMPXGOEMTRNWFAGOGAHCEYMTXMTEOOOODHJYCIYXNVJZZGTHBWWNRQVQQAJYLKVRYDRFKPRCLSFNWTRXUMARXMMUIDVVEOHKASECKBCCXUKWNSK");
    msg.sys_dst.assign("LCKRUDADBQNTNCSHSFVGLUEOCMZQCMLNAHQOFEIVTNABWKFDBOAOCYWDPSLPRHBXJKVPE");
    msg.flags = 140U;
    const char tmp_msg_0[] = {51, -56, 1, 86, 10, -9, -127, 114, -98, -113, -47, 81, 113, 91, -5, -47, -86, 82, 91, 113, 90, 110, -61, 17, 35, -120, 94, 30, 126, 101, 56, -38, -94, 43, -53, 30, 75, 116, -74, -69, 24, -79, 69, 58, -29, 103, 111, -72, 63, 21, -96, -95, -116, 57, 102, -104, -40, -78, -120, -108, -61, -56, 21, -11, 37, -126, 7, -58, 55, -34, -71, -39, -38, 102, -14, 49};
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
    msg.setTimeStamp(0.652632156443);
    msg.setSource(54466U);
    msg.setSourceEntity(234U);
    msg.setDestination(2468U);
    msg.setDestinationEntity(121U);
    msg.seq = 40461U;
    msg.value = 96U;
    msg.error.assign("UQXCFSAGLFTDOAEFNTJOQTXITIKGTEDBCCQFQYPVIVQDLUHHZSXYVVGTANWPZRWEHXSAUDFWCBEURKLUNZMGWECITLSMOVEALKVPJIYRGC");

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
    msg.setTimeStamp(0.810617728029);
    msg.setSource(27024U);
    msg.setSourceEntity(144U);
    msg.setDestination(50375U);
    msg.setDestinationEntity(20U);
    msg.seq = 25702U;
    msg.value = 63U;
    msg.error.assign("MQTVRJAMBXKLGAYYVSJLTOKQWERCXPDKORPUDQC");

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
    msg.setTimeStamp(0.0862077469742);
    msg.setSource(6823U);
    msg.setSourceEntity(223U);
    msg.setDestination(52870U);
    msg.setDestinationEntity(248U);
    msg.seq = 21690U;
    msg.value = 88U;
    msg.error.assign("TVTYMICGWNWHZWVOASIHNUMCRJTMKLTLKXUGDGQINLNMRTXOAXUNZBHJCVABWTZLDYUYYKVHOHJJGEUVMQUDSJQXBPYWYDYZHFFRSUVGAKHDLEYTZHAWGGMSIFUPIXIPCEVTDMRECWQBOBKOZBELNBSG");

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
    msg.setTimeStamp(0.915613704639);
    msg.setSource(39470U);
    msg.setSourceEntity(36U);
    msg.setDestination(11001U);
    msg.setDestinationEntity(190U);
    msg.seq = 26748U;
    msg.sys.assign("TCFHTRFLGBPHZDQLXHQGPBTCSFNQDWKRKODTSOMHBPDPLGIBIXUAGJBUHUCKYUJXOWEOCNJQA");
    msg.value = 0.445411332948;

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
    msg.setTimeStamp(0.447554370291);
    msg.setSource(53677U);
    msg.setSourceEntity(197U);
    msg.setDestination(31620U);
    msg.setDestinationEntity(228U);
    msg.seq = 57345U;
    msg.sys.assign("QMQHBYVVERPRHVETJDWZMIGCQUSJ");
    msg.value = 0.198567519677;

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
    msg.setTimeStamp(0.190684488698);
    msg.setSource(49479U);
    msg.setSourceEntity(229U);
    msg.setDestination(57459U);
    msg.setDestinationEntity(66U);
    msg.seq = 3816U;
    msg.sys.assign("VYEXQDROHMXZSFYCDEJJLUFQQMFKKMQRMPAVCBUCOBTKTVHSJYQXNRVQBGFFREKRWHPIMKGMYAQDZDMUCTNAUUNHIWGWPLNIVDGSUWETWDYACHMMLTZILSPGJOBKLSESKCWKFBYGKJRSOXCLPNONJ");
    msg.value = 0.237858536293;

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
    msg.setTimeStamp(0.646952310197);
    msg.setSource(693U);
    msg.setSourceEntity(12U);
    msg.setDestination(17846U);
    msg.setDestinationEntity(68U);
    msg.action = 104U;
    msg.longain = 0.985598810367;
    msg.latgain = 0.128003323008;
    msg.bondthick = 4208298468U;
    msg.leadgain = 0.473241599529;
    msg.deconflgain = 0.483373685733;

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
    msg.setTimeStamp(0.0621365438186);
    msg.setSource(1286U);
    msg.setSourceEntity(29U);
    msg.setDestination(11054U);
    msg.setDestinationEntity(3U);
    msg.action = 8U;
    msg.longain = 0.386191315757;
    msg.latgain = 0.696924493899;
    msg.bondthick = 499447447U;
    msg.leadgain = 0.694196245151;
    msg.deconflgain = 0.279609349496;

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
    msg.setTimeStamp(0.705854142324);
    msg.setSource(4354U);
    msg.setSourceEntity(110U);
    msg.setDestination(26171U);
    msg.setDestinationEntity(240U);
    msg.action = 41U;
    msg.longain = 0.400302374832;
    msg.latgain = 0.507015250267;
    msg.bondthick = 2585461998U;
    msg.leadgain = 0.414731623363;
    msg.deconflgain = 0.583551291644;

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
    msg.setTimeStamp(0.298337090312);
    msg.setSource(51893U);
    msg.setSourceEntity(219U);
    msg.setDestination(19487U);
    msg.setDestinationEntity(118U);
    msg.err_mean = 0.8413036244;
    msg.dist_min_abs = 0.654697460737;
    msg.dist_min_mean = 0.625856947252;

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
    msg.setTimeStamp(0.274094808363);
    msg.setSource(36755U);
    msg.setSourceEntity(173U);
    msg.setDestination(24786U);
    msg.setDestinationEntity(215U);
    msg.err_mean = 0.937488792521;
    msg.dist_min_abs = 0.248964670078;
    msg.dist_min_mean = 0.519135826259;

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
    msg.setTimeStamp(0.239254443565);
    msg.setSource(59995U);
    msg.setSourceEntity(148U);
    msg.setDestination(21701U);
    msg.setDestinationEntity(237U);
    msg.err_mean = 0.380548775701;
    msg.dist_min_abs = 0.184545003893;
    msg.dist_min_mean = 0.186816637916;

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
    msg.setTimeStamp(0.926979459328);
    msg.setSource(33550U);
    msg.setSourceEntity(127U);
    msg.setDestination(36754U);
    msg.setDestinationEntity(57U);
    msg.action = 58U;
    msg.lon_gain = 0.336855837854;
    msg.lat_gain = 0.726928182874;
    msg.bond_thick = 0.661743546014;
    msg.lead_gain = 0.98209062798;
    msg.deconfl_gain = 0.583441796198;
    msg.accel_switch_gain = 0.104744746066;
    msg.safe_dist = 0.103306140873;
    msg.deconflict_offset = 0.0267010128073;
    msg.accel_safe_margin = 0.0451164342127;
    msg.accel_lim_x = 0.316678889703;

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
    msg.setTimeStamp(0.141939505261);
    msg.setSource(61021U);
    msg.setSourceEntity(228U);
    msg.setDestination(54959U);
    msg.setDestinationEntity(154U);
    msg.action = 146U;
    msg.lon_gain = 0.45023838557;
    msg.lat_gain = 0.230919482968;
    msg.bond_thick = 0.218383485574;
    msg.lead_gain = 0.728213235553;
    msg.deconfl_gain = 0.370513086898;
    msg.accel_switch_gain = 0.692302861243;
    msg.safe_dist = 0.0154144666976;
    msg.deconflict_offset = 0.910059113799;
    msg.accel_safe_margin = 0.632626860013;
    msg.accel_lim_x = 0.244732755978;

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
    msg.setTimeStamp(0.638000939912);
    msg.setSource(59445U);
    msg.setSourceEntity(253U);
    msg.setDestination(59627U);
    msg.setDestinationEntity(98U);
    msg.action = 55U;
    msg.lon_gain = 0.360273191193;
    msg.lat_gain = 0.987273491079;
    msg.bond_thick = 0.629533095228;
    msg.lead_gain = 0.0295845827089;
    msg.deconfl_gain = 0.442655693222;
    msg.accel_switch_gain = 0.966823145018;
    msg.safe_dist = 0.118210946884;
    msg.deconflict_offset = 0.921432043724;
    msg.accel_safe_margin = 0.452105468638;
    msg.accel_lim_x = 0.388717057584;

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
    msg.setTimeStamp(0.334611309059);
    msg.setSource(64863U);
    msg.setSourceEntity(210U);
    msg.setDestination(21572U);
    msg.setDestinationEntity(23U);
    msg.type = 22U;
    msg.op = 142U;
    msg.err_mean = 0.378057967371;
    msg.dist_min_abs = 0.0699644094671;
    msg.dist_min_mean = 0.735631224137;
    msg.roll_rate_mean = 0.604964056495;
    msg.time = 0.171337054327;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 66U;
    tmp_msg_0.lon_gain = 0.0268217228467;
    tmp_msg_0.lat_gain = 0.891786739976;
    tmp_msg_0.bond_thick = 0.602410574104;
    tmp_msg_0.lead_gain = 0.742097999646;
    tmp_msg_0.deconfl_gain = 0.308771291266;
    tmp_msg_0.accel_switch_gain = 0.395250786965;
    tmp_msg_0.safe_dist = 0.924158646596;
    tmp_msg_0.deconflict_offset = 0.787791933288;
    tmp_msg_0.accel_safe_margin = 0.254728755901;
    tmp_msg_0.accel_lim_x = 0.668926978178;
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
    msg.setTimeStamp(0.173486102458);
    msg.setSource(59645U);
    msg.setSourceEntity(98U);
    msg.setDestination(43006U);
    msg.setDestinationEntity(104U);
    msg.type = 99U;
    msg.op = 217U;
    msg.err_mean = 0.839044026916;
    msg.dist_min_abs = 0.415717548877;
    msg.dist_min_mean = 0.637596992361;
    msg.roll_rate_mean = 0.646569789155;
    msg.time = 0.881815018502;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 22U;
    tmp_msg_0.lon_gain = 0.64711167571;
    tmp_msg_0.lat_gain = 0.0758993761911;
    tmp_msg_0.bond_thick = 0.71205124333;
    tmp_msg_0.lead_gain = 0.975776077161;
    tmp_msg_0.deconfl_gain = 0.178486848335;
    tmp_msg_0.accel_switch_gain = 0.843410490753;
    tmp_msg_0.safe_dist = 0.184179475731;
    tmp_msg_0.deconflict_offset = 0.181488949055;
    tmp_msg_0.accel_safe_margin = 0.0560572496034;
    tmp_msg_0.accel_lim_x = 0.193030180966;
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
    msg.setTimeStamp(0.52757862448);
    msg.setSource(48133U);
    msg.setSourceEntity(168U);
    msg.setDestination(33240U);
    msg.setDestinationEntity(247U);
    msg.type = 52U;
    msg.op = 97U;
    msg.err_mean = 0.382003392855;
    msg.dist_min_abs = 0.811019794312;
    msg.dist_min_mean = 0.937850696674;
    msg.roll_rate_mean = 0.130006785802;
    msg.time = 0.330126825416;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 83U;
    tmp_msg_0.lon_gain = 0.45099620444;
    tmp_msg_0.lat_gain = 0.576559631677;
    tmp_msg_0.bond_thick = 0.143268067614;
    tmp_msg_0.lead_gain = 0.199148546379;
    tmp_msg_0.deconfl_gain = 0.43680771105;
    tmp_msg_0.accel_switch_gain = 0.803910840352;
    tmp_msg_0.safe_dist = 0.0284828235705;
    tmp_msg_0.deconflict_offset = 0.34705141507;
    tmp_msg_0.accel_safe_margin = 0.636346111025;
    tmp_msg_0.accel_lim_x = 0.370343023479;
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
    msg.setTimeStamp(0.71864600937);
    msg.setSource(36081U);
    msg.setSourceEntity(142U);
    msg.setDestination(43475U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.477955633215;
    msg.lon = 0.66897919361;
    msg.eta = 2897907746U;
    msg.duration = 24590U;

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
    msg.setTimeStamp(0.360328254759);
    msg.setSource(48570U);
    msg.setSourceEntity(237U);
    msg.setDestination(10596U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.512404844518;
    msg.lon = 0.309254816337;
    msg.eta = 532681063U;
    msg.duration = 59414U;

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
    msg.setTimeStamp(0.333467426987);
    msg.setSource(65307U);
    msg.setSourceEntity(18U);
    msg.setDestination(41996U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.463707447683;
    msg.lon = 0.453918350903;
    msg.eta = 1146195649U;
    msg.duration = 45382U;

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
    msg.setTimeStamp(0.618631837945);
    msg.setSource(191U);
    msg.setSourceEntity(201U);
    msg.setDestination(42103U);
    msg.setDestinationEntity(158U);
    msg.plan_id = 27170U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.56987198719;
    tmp_msg_0.lon = 0.0757877841897;
    tmp_msg_0.eta = 4226292088U;
    tmp_msg_0.duration = 29817U;
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
    msg.setTimeStamp(0.164496232237);
    msg.setSource(11424U);
    msg.setSourceEntity(125U);
    msg.setDestination(56956U);
    msg.setDestinationEntity(46U);
    msg.plan_id = 53507U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.372834680023;
    tmp_msg_0.lon = 0.786122283119;
    tmp_msg_0.eta = 100245955U;
    tmp_msg_0.duration = 62653U;
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
    msg.setTimeStamp(0.933149074884);
    msg.setSource(4578U);
    msg.setSourceEntity(15U);
    msg.setDestination(15900U);
    msg.setDestinationEntity(121U);
    msg.plan_id = 11861U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.312722237228;
    tmp_msg_0.lon = 0.200882166123;
    tmp_msg_0.eta = 2947602034U;
    tmp_msg_0.duration = 7521U;
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
    msg.setTimeStamp(0.111574542775);
    msg.setSource(55519U);
    msg.setSourceEntity(137U);
    msg.setDestination(29957U);
    msg.setDestinationEntity(33U);
    msg.type = 40U;
    msg.command = 9U;
    msg.settings.assign("UMAZRUYMLBWCJQJ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 49946U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.580713573184;
    tmp_tmp_msg_0_0.lon = 0.0776983436877;
    tmp_tmp_msg_0_0.eta = 3946721989U;
    tmp_tmp_msg_0_0.duration = 36099U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JTLBXJCTRCXDYZSHLCFCETBRSFTMHLJYRFLEFUPIYOUVOWPMTMOHBQARGZAKEKLMGSOANGXUONKZQRDQSFRWHFAZGRBGIGIOILNEFXKBNVIECMBLDVNONEPJLSJWXIDPAADIAYFHCLMAKJTHVWOEYSVQXDEWZHJGXJRDWNYCSHUCDGPVPYYWQVAMSKCPISFVMRVNBAITUTCUZZBUKBRXOGJKKHWUXZYEJMNBYMWHSNIQQDDOPQTKWVQLFZ");

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
    msg.setTimeStamp(0.231091442772);
    msg.setSource(13471U);
    msg.setSourceEntity(137U);
    msg.setDestination(3722U);
    msg.setDestinationEntity(236U);
    msg.type = 182U;
    msg.command = 243U;
    msg.settings.assign("CRBZKDJCDLXGYVKVUTRKUXIIJQJBPSRKRXJUTHKACRSCZHSDPEFFMIBCWVSOHRUYKTPAYZUZHOMVZUIVVFLYFMIXANFWTKIUAYCQBDWZLGCNOWMEQYVQZTO");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 27149U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ZCHPSXCDSMSXJLIEPOJRENFUAVOUOPEMGHTNZCAIJQUKLFONRCMUUGAPNFELPYDDHSBBHYGMEJRUQTNGBQLGBLKKDEFKSWUFWYHVWVNOPIYVXDAZWQYAKWZRCQAPMZXHLETXTVUTQIVGZAVOVUDMBKZIZXXJMOJNI");

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
    msg.setTimeStamp(0.429917902586);
    msg.setSource(23174U);
    msg.setSourceEntity(189U);
    msg.setDestination(24815U);
    msg.setDestinationEntity(119U);
    msg.type = 84U;
    msg.command = 208U;
    msg.settings.assign("TMEQQHXIBWOIOTRQUHLIUPGNAUNYMXQUDDXFJDKCSCFVRRFICWHESJNJTPCAVMMRXTTEEKHWBHMYFKEAFKNECJHQGLZIPLOROZXREYCTZCYWPIZDVUOFRUNJNGTNWEDNFLOHPCXJLKBLNQIJLSIQYPUGY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 30593U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("OCDUETFXBMXKAZKLYIZVPMQBWFJHUGNLLSQUIIMAMWAXLCPOVMHEMKYZGZYCXRCAQDGXYTOTMAVAVVTEQNGIRYSWVVJYNLRKLIXIDHSFUKOFYFRRNJSSKWFIPYGWTMZIGGULBNUKTSNLRHHNMDRBOZTHBXLBWCJNYFPWPDUBAJFSZOGEOGCLTKZYXSPQHINJWUBSEODJWEHPDFM");

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
    msg.setTimeStamp(0.684061715846);
    msg.setSource(47499U);
    msg.setSourceEntity(218U);
    msg.setDestination(45212U);
    msg.setDestinationEntity(135U);
    msg.state = 199U;
    msg.plan_id = 62256U;
    msg.wpt_id = 183U;
    msg.settings_chk = 7853U;

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
    msg.setTimeStamp(0.183244574563);
    msg.setSource(57512U);
    msg.setSourceEntity(49U);
    msg.setDestination(4479U);
    msg.setDestinationEntity(35U);
    msg.state = 106U;
    msg.plan_id = 4862U;
    msg.wpt_id = 244U;
    msg.settings_chk = 38862U;

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
    msg.setTimeStamp(0.0654715546573);
    msg.setSource(25371U);
    msg.setSourceEntity(36U);
    msg.setDestination(24069U);
    msg.setDestinationEntity(191U);
    msg.state = 33U;
    msg.plan_id = 16019U;
    msg.wpt_id = 106U;
    msg.settings_chk = 41721U;

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
    msg.setTimeStamp(0.608646329249);
    msg.setSource(55871U);
    msg.setSourceEntity(133U);
    msg.setDestination(11354U);
    msg.setDestinationEntity(130U);
    msg.uid = 0U;
    msg.frag_number = 183U;
    msg.num_frags = 17U;
    const char tmp_msg_0[] = {38, 96, -6, 76, 107, -103, -2, -64, 12, 73, -54, -30, -17, -52, 14, 6, -45, 85, -43, -123, -1, -93, -24, -86, -85, 42, 24, -73, -59, -82, 7, 81, -92, -40, 39, 100, -18, 65, -106, 13, -86, 113, -123, 71, -123, 73, 41, 38, 27, 112, 49, -122, 0, 103, -110, 84, -99, 75, 8, 96, -18, 15, -40, 77, 47, 73, -121, 75, 3, 37, 84, 32, -34, 16, -77, -128, 118, -90, -20, 64, 113, 103, 53, -72, 60, 114, -54, -61, 119, 49, -3, -1, 25, -70, 65, 50, 21, -100, -66, 42, 89, -113, 62, 95, -21, -117, 118, 20, 121, -46, 5, 37, 10, -85, -122, 1, -12, 86, 112, 110, 41, -128, 62, 70, 63, 14, 36, 8, 51, 101};
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
    msg.setTimeStamp(0.276699357023);
    msg.setSource(3370U);
    msg.setSourceEntity(161U);
    msg.setDestination(16512U);
    msg.setDestinationEntity(129U);
    msg.uid = 225U;
    msg.frag_number = 99U;
    msg.num_frags = 172U;
    const char tmp_msg_0[] = {87, 94, 104, 48, -57, -110, -41, 74, 126, 75, -97, -28, 89, -125, 41, 32, 72, -97, -25, 39, 5, -35, 4, -51, -48, 24, 126, 75, -99, 104, -4, 80, -101, -73, 114, -67, 36, 31, 94, -31, -29, 103, 57, 65, 50, 117, -112};
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
    msg.setTimeStamp(0.641101789694);
    msg.setSource(15631U);
    msg.setSourceEntity(55U);
    msg.setDestination(29562U);
    msg.setDestinationEntity(104U);
    msg.uid = 196U;
    msg.frag_number = 245U;
    msg.num_frags = 207U;
    const char tmp_msg_0[] = {27, -73, 0, -16, 97, -93, -84, 14, -120, -10, -9, 25, -97, -29, -109, -21, 25, 124, 11, -65, 93, -10, 109, -24, -65, -122, 123, 93, 64, 63, 113, 7, 11, -63, -86, -119, -72, -9, -59, -90, -74, -13, -47, 18, 22, 64, -17, 36, -76, -74, 116, 114, 71, 59, 105, -64, 45, 87, 121, -74, 117, -20, 99, 78, -84, 116, 18, 0, -125, -21, 60, -40, 124, 4, -100, -59, 2, -92, 47, -116, -13, 61, 36, 64, 80, 52, -4, 41, 47, -47, 119, 119, 102, 27, -83, -77, -53, 20, 81, -67, 38};
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
    msg.setTimeStamp(0.210835497707);
    msg.setSource(27709U);
    msg.setSourceEntity(22U);
    msg.setDestination(40956U);
    msg.setDestinationEntity(207U);
    msg.content_type.assign("XIOPIXOXMAFOUNMNLJGUDPGBKLPVHIHPCBUEODLNPIXNOBADKGREJRWZMFKLVVWVNCUMZXQJZUAHJTKSWANHCKMPQFYSSANYTLHFWCQYEKDHPWNUWTHCMYQIDXSLBSZGMUVQYQKCTNJXVQJLOUXRCHIOHQJMYTGRARBFWYWZTSFSKOVPIGRIGTLZYEMAZPLETDARBBTCWV");
    const char tmp_msg_0[] = {-68, -103, 120, -53, 78, 117, -93, -69, -25, 34, -25, 4, 18, -125, -2, -10, 13, 80, 97, 75, -55, -57, -20, -20, 26, 104, -23, 35, 112, -112, -50, -78, 55, 32, 126, 126, -29, -61, -85, 33, 53, -119, -22, -10, 65, 86, 79, 70, 15, 19, -9, 29, 120, -22, -30, -9, -13, 86, -68, 67, 16, -113, 69, 63, 96, 87, -102, -95, 120, -52, 102, 82, -76, 0, -93, 10, 103, 10, -16, -95, -78, -74, -5, 69, -16, 32, -8, -37, 19, -2, -119, -40, 58, -69, 28, -64, -13, -100, -36, 2, 40, -26, 1, -105, -19, -6, -94, 15, -42, 2, 4, 8, -60, 117, -62, -95, 70, -85, -89, -35, 76, -91, -128, -103, -27, 72, -58, -106, 43, -25, -56, -40, -36, -119, 117, -4, -65, 105, -127, -126, 25, 118, 76, 89, 56, 30, 99, -124, -31, 12, 8, -109, -30, -77, 30, -25, 86, 122, -25, 96, 66, -38, 73, -9, -58, -23, -112, -91, 88, -29, -57, 113, -1, 83, -47, -36, 46, 0, 125, 37, 61, -42, -24};
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
    msg.setTimeStamp(0.729829500331);
    msg.setSource(3530U);
    msg.setSourceEntity(237U);
    msg.setDestination(7453U);
    msg.setDestinationEntity(91U);
    msg.content_type.assign("PCLVQVQJMVTPZZTWEODCIJOCEMCDPLSBLRBRLELQHXJKCASHMBQXJYMPRGYIDLHTOKRQXJFPZMFRMSAIUFVENWEKDHFGCTADUFILGYOJAYHBKGGRUORTWXUUXGDXZOBKWWGKVAJHQEEBWDWGSCDOQNPNTNCFSYBIZHTGVNNIFFVLAWJALYVSKSTEMZUSNINZQYPQFZIUOOAAPDOIMSSQMJZHPH");
    const char tmp_msg_0[] = {-16, -80, -47, 108, 92, -40, -114, -70, -108, 4, 26, -124, 30, -68, 71, 37, 117, 24, -29, 16, -56, -38, -59, -125, -22, -95, -58, -25, -114, -76, -62, -39, -84, -84, -108, 49, 10, -91, 35, 85, 14, 125, 114, -67, -40, -58, -120, 25, 105, -60, 57, -81, -72, 64, -46, 99, 50, 103, 114, -28, -62, 27, -26, 116, 9, 70, -48, -41, -82, -99, -78, 92, 67, -25, 36, -13, -10, 50, -104, -93, -33, 86, 80, 69, 113, -15, -118, -46, -78, 108, 110, -31, -60, -25, 14, -32, 83, -114, 109, 78, -49, -95, 53, -22, -124, 103, -126, 14, -79, 88, 113, 114, 97, -99, -51, 43, -10, 94, -110, 114, -127, -61, 31, 74, -108, -58, -2, 15, 70, 32, 12, -44, -77, 95, -59, 112, 9, -54, -97, -98, 121, -80, 31, -96, 28, 114, -22, -63, -80, 95, -70, -23, -10, -112, 46, -10, -108, -76, 99, -116, 72, 56, -71, 22, -23, 46, 22, 86, -4, 23, -115, 100, 16, 87, 95, -9, -49, 46, -13, 66, -66, -36, -105, -111, 62, -101, -126, 94, 56, 7, -85, 124, 89, 18, -83, 13, -101, 19, -45, -24, -106, -40, -128, -10, 19, -64, -102, -22, 17, -41, -84, 112, -69, 75, -36};
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
    msg.setTimeStamp(0.344436650481);
    msg.setSource(12340U);
    msg.setSourceEntity(102U);
    msg.setDestination(59140U);
    msg.setDestinationEntity(114U);
    msg.content_type.assign("MCAXEVVXLYAIFTXPXINBITUBCSVRJGQEOUMKGFYOIVKQGSBRFZUOZHNRRZQWTKKZPDJSMIXEXYBDYPLVZGFNRSWESYETOPQMAPHNIAWEYPMZSDEBKSQYNYKVMDELUPLOIKRAHPTLGCVDKBFTCMQEGFUNIHXEHJZWJFAMJXJUVCONTHINBZGCQUCHWULAJWFARSDLMDJTAHGSULKWXCGPBVQWIKQJFTCURMBHLNQCYSZZOND");
    const char tmp_msg_0[] = {-80, -62, 29, -128, 96, -46, -97, 123, -77, 78, -100, -120, 47, -71, -36, 55, -75, -17, 96, -120, -18, -41, 80, 99, 41, 101, 93, 96, 86, -93, 79, 18, -105, -125, -59, 16, 118, 47, 52, 103, -42, 64, -114, -41, -52, -41, 64, 40, -30, -113, -50, 98, 118, 44, 27, -67, -107, -71, -43, 111, -71, 118, 96, -114, 93, 91, -100, -88, 7, 3, 86, 113, 95, -76, 111, -119, -69, 118, 98, 102, -29, -75, -89, -38, 94, 37, 111, -108, 74, 18, 85, 117, 110, -7, 35, 39, -76, 1, 60, -43, -44, -22, -57, 2, 67, -40, -44, -41, 118, -99, -64, -38, 5, 123, 57, 45, -127, -36, 39, -119, -77, 64, -10, -26, 81, 112, 71, 20, -82, -29, -28, 14, -102, 97, -109, -50, 24, -71, 99, 101, 35, -48, 58, -4, 71, 46, -56, 116, 117, -90, -53, -49, -35, 86, -104, 38, 98, -17, 91, 2, -105, -86, 103, -43, -110, -53, 79, 68, 57, 64, 87, 105, 57, -123, 28, -32, -44, 9, -62, -104, -77, 37, -35, -105, 32, 38, -49, -73, 75, -56, 1, 35, 47, 37, 99, -93, -43, 37, -73, -10, -34, 97, 67, -33, -83, 122, -96, -23, 100, -59, -9, 104, -31, -52, 92, 54, -50, -90, 126, -66, 24, 123, 52, -74, -14, -40, 72, 102, 121, 87, 89, -102, 71, -35, -102, 25, 86, -54, -96, -49, -92, 120, 44, -60, -73, 90};
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
    msg.setTimeStamp(0.413131594997);
    msg.setSource(6370U);
    msg.setSourceEntity(98U);
    msg.setDestination(52935U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.000318194052032);
    msg.setSource(8347U);
    msg.setSourceEntity(173U);
    msg.setDestination(6095U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.964062183796);
    msg.setSource(58001U);
    msg.setSourceEntity(47U);
    msg.setDestination(24075U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.0378106384478);
    msg.setSource(10153U);
    msg.setSourceEntity(116U);
    msg.setDestination(43026U);
    msg.setDestinationEntity(18U);
    msg.target = 63976U;
    msg.bearing = 0.208323671778;
    msg.elevation = 0.345934502768;

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
    msg.setTimeStamp(0.0812500976309);
    msg.setSource(42238U);
    msg.setSourceEntity(149U);
    msg.setDestination(6226U);
    msg.setDestinationEntity(84U);
    msg.target = 20541U;
    msg.bearing = 0.413539270733;
    msg.elevation = 0.204788299705;

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
    msg.setTimeStamp(0.847266549606);
    msg.setSource(31075U);
    msg.setSourceEntity(76U);
    msg.setDestination(16221U);
    msg.setDestinationEntity(184U);
    msg.target = 16435U;
    msg.bearing = 0.0218764934276;
    msg.elevation = 0.826089843755;

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
    msg.setTimeStamp(0.439903399694);
    msg.setSource(8945U);
    msg.setSourceEntity(184U);
    msg.setDestination(1213U);
    msg.setDestinationEntity(43U);
    msg.target = 32860U;
    msg.x = 0.258431005582;
    msg.y = 0.0742374677625;
    msg.z = 0.579289220626;

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
    msg.setTimeStamp(0.892421424433);
    msg.setSource(1546U);
    msg.setSourceEntity(66U);
    msg.setDestination(37490U);
    msg.setDestinationEntity(69U);
    msg.target = 46183U;
    msg.x = 0.681718084484;
    msg.y = 0.685517489889;
    msg.z = 0.789809262214;

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
    msg.setTimeStamp(0.322141835027);
    msg.setSource(42999U);
    msg.setSourceEntity(18U);
    msg.setDestination(57126U);
    msg.setDestinationEntity(223U);
    msg.target = 14678U;
    msg.x = 0.658742134209;
    msg.y = 0.441458689902;
    msg.z = 0.373746126327;

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
    msg.setTimeStamp(0.43081612706);
    msg.setSource(42277U);
    msg.setSourceEntity(243U);
    msg.setDestination(43674U);
    msg.setDestinationEntity(6U);
    msg.target = 45404U;
    msg.lat = 0.620248122592;
    msg.lon = 0.690934615492;
    msg.z_units = 238U;
    msg.z = 0.00319300023529;

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
    msg.setTimeStamp(0.301866725092);
    msg.setSource(36485U);
    msg.setSourceEntity(219U);
    msg.setDestination(48707U);
    msg.setDestinationEntity(121U);
    msg.target = 55515U;
    msg.lat = 0.570074365533;
    msg.lon = 0.780038254955;
    msg.z_units = 139U;
    msg.z = 0.586198726386;

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
    msg.setTimeStamp(0.217552411157);
    msg.setSource(11500U);
    msg.setSourceEntity(99U);
    msg.setDestination(65153U);
    msg.setDestinationEntity(216U);
    msg.target = 49863U;
    msg.lat = 0.176754404637;
    msg.lon = 0.133144037554;
    msg.z_units = 83U;
    msg.z = 0.722861396888;

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
    msg.setTimeStamp(0.405003329407);
    msg.setSource(7590U);
    msg.setSourceEntity(191U);
    msg.setDestination(24227U);
    msg.setDestinationEntity(1U);
    msg.locale.assign("KCNIKCLGZJRABLURVAUOZWNUPXNPYBBVGFJTEIEAIDECDPENBLTCXJOKVDTJXWCPRHODULVWMZMGHGDWSREVRPETVRWKMURJISFBBQZVGBSTQHDISUKFABYOOFPOZSDUIFSNQJYWXFBLORTWQHLQNEDISJTZSQWIZNZLXJTSHPAKTVGLYXCPPTLKGMSZYHAELUBQU");
    const char tmp_msg_0[] = {-125, 9, -55, 23, -46, -93, 76, -124, 107, 106, -31, -127, -65, 106, -94, -87, -116, -72, -26, -38, -96, -115, 117, 86, -113, 24, -65, -94, 69, 31, 36, -76, -10, 17, -71, -31, 63, 21, 63, 0, 80, -34, -40, 99, 11, -99, 1, -11, -116, 86, 19, -87, 70, 123, -108, 120, -39, -103, 122, 98, 95, -35, -61, -48, -110, 118, -71, 66, 34, 104, 111, -71, -80, 43, 54, 81, -96, -55, 29, 117, 114, 45, -89, 104, 34, -60, -56, 15, -44, 1, 67, 90, 59, 47, -128, -109, 11, 31, -17, 35, 19, 122, 8, -102, 109, 63, -33, 64, -117, 14, -98, 76, 71, 126, -37, 90, 78, 64, -95, -112, -63, 89, -109, -44, 102, -61, 84, 105, 110, -9, 83, -115, 70, -78, 80, -73, -120, -98, 65, -70, -18, -127, 74, 89, -5, -95, 37, 113, -105, -8, -25, 66, -13, 37, 105, -124, -89, 102, -83, -84, -28, 37, -128, -111, -12, -79, -56, 103, 75, 42, 122, 62, 54, -2, -68, -13, -59, -6, 72, 110, -113, 68, -17, 124, 47, -4, 92, 18, -81, 13, -38, -12, 18, 58, -34, -2, -87, -8, -53, -80, -127, -59, -46, -60, 68, 32, -58, -22, 118, -125, -56};
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
    msg.setTimeStamp(0.306981224053);
    msg.setSource(25305U);
    msg.setSourceEntity(162U);
    msg.setDestination(23745U);
    msg.setDestinationEntity(121U);
    msg.locale.assign("USUJSGRGHJGDWWLEUOKCBSOCMFTZLAKDWPEMSNDIGVOMGPXLJLGEARGEZNHREIOXOPENAFKXAMEZQTURMWPPJWSADSJQDYTWCQZLYOBBZWZOZKIUNINWAVLZETRRKSPPQCGDPSDHVXBLDMVTOUOIYVFCDUBAPCBWJXFMJTHJHATDBHLKMCFVQPUHSYFNQQVNIIRLNTQGTR");
    const char tmp_msg_0[] = {-110, 39, -9, -20, 5, -64, -72, 125, -105, 43, -104, 113, -120, -31, 84, 17, 106, -15, -7, -16, -126, -74, 42, 15, -120, -50, -58, -12, 45, -125, -109, -2, 120, 27, -32, -34, 25, 18, 88, 28, 20, 123, 107, -45, 7, 104, -80, -33, -21, -100, -24, -104, -57, -84, -26, -66, 12, 117, -10, -103, -47, -88, 97, 58, 71, -105, 40, -4, -100, 48, 77, 65, 77, 122, -62, 33, 118, 74, -87, -19, -20, -60, -82, -112, -100, 57, 34, 15, 100, 3, 97, 75, -70, 8, 5, -128, -50, 121, -8, 78, 123, -4, 45, -64, -10, -80, 61, 34, 97, -72, -91, 15, 116, -39, 114, -27, 97, -61, 81, 39, -18, -79, -11, -35, 82, -61, 12, -87, 59, -88, 116, 51, -7, -42, 82, 59, 102, 91, -24, 121, -79, -118, 77, -102, 97, 68, 23, -87, 96, -115, -62, 84, -61, -53, 84, -22, 15, -88, -32, 78, -12, -30, 102, 47, -22, -10, 36, 106, -124, 7, -14, 106, -5, 106, -45, -44, -109, 39, 99, 81, -121, -57, 116, 25, -68, 90, 93, 126, -121, -93, 113, -25, -24, -53, 49, -12, 20, -68, 97, 15, 97, 91, -39, -19, -79, 122, 24, 17, 114, -39, 8, 126, -36, -37, 80, 16, -91, -71, 83, -61, 21};
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
    msg.setTimeStamp(0.179335498342);
    msg.setSource(21089U);
    msg.setSourceEntity(180U);
    msg.setDestination(50912U);
    msg.setDestinationEntity(224U);
    msg.locale.assign("HKQDCYKFCBOTCWRVRKNWEVGKGAGPTECABENAESEQLNOUITOEUUTHKGCSVFSXGPHAWZIYQDLRWCNXTRQDJOSYOPNPJWFPKFFGQZJNMYFCGXHZEIYJVMNQDUQURDVVTHTPBXSUYUPZMBHGGWPFQKHGSJVLZVIETLYNKSLSLOLYFLCXMRSDCWRJOWVXBIQBEKXJLZRMDZHDIAXQMWEBVOZZJBDNBF");
    const char tmp_msg_0[] = {-46, -81, -43, -9, 115, -45, 50, 85, 53, -29, -1, -73, -86, -31, 54};
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
    msg.setTimeStamp(0.68042683725);
    msg.setSource(53099U);
    msg.setSourceEntity(160U);
    msg.setDestination(39901U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.0154433970549);
    msg.setSource(25439U);
    msg.setSourceEntity(197U);
    msg.setDestination(8023U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.381326087852);
    msg.setSource(41443U);
    msg.setSourceEntity(44U);
    msg.setDestination(1116U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.309967817146);
    msg.setSource(28108U);
    msg.setSourceEntity(227U);
    msg.setDestination(13766U);
    msg.setDestinationEntity(104U);
    msg.camid = 209U;
    msg.x = 40306U;
    msg.y = 3421U;

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
    msg.setTimeStamp(0.208151330693);
    msg.setSource(17894U);
    msg.setSourceEntity(171U);
    msg.setDestination(59383U);
    msg.setDestinationEntity(252U);
    msg.camid = 91U;
    msg.x = 18545U;
    msg.y = 40443U;

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
    msg.setTimeStamp(0.692038439163);
    msg.setSource(4516U);
    msg.setSourceEntity(10U);
    msg.setDestination(53387U);
    msg.setDestinationEntity(164U);
    msg.camid = 99U;
    msg.x = 34948U;
    msg.y = 46531U;

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
    msg.setTimeStamp(0.780377008349);
    msg.setSource(48954U);
    msg.setSourceEntity(183U);
    msg.setDestination(42659U);
    msg.setDestinationEntity(186U);
    msg.camid = 17U;
    msg.x = 50495U;
    msg.y = 33992U;

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
    msg.setTimeStamp(0.896197870336);
    msg.setSource(61141U);
    msg.setSourceEntity(27U);
    msg.setDestination(19903U);
    msg.setDestinationEntity(33U);
    msg.camid = 130U;
    msg.x = 43834U;
    msg.y = 49564U;

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
    msg.setTimeStamp(0.484121339192);
    msg.setSource(2483U);
    msg.setSourceEntity(38U);
    msg.setDestination(40402U);
    msg.setDestinationEntity(108U);
    msg.camid = 4U;
    msg.x = 45632U;
    msg.y = 26916U;

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
    msg.setTimeStamp(0.117368319291);
    msg.setSource(63570U);
    msg.setSourceEntity(57U);
    msg.setDestination(51710U);
    msg.setDestinationEntity(61U);
    msg.tracking = 130U;
    msg.lat = 0.785616994603;
    msg.lon = 0.878207099643;
    msg.x = 0.00573928780289;
    msg.y = 0.610851629026;
    msg.z = 0.876912407398;

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
    msg.setTimeStamp(0.992148799463);
    msg.setSource(65261U);
    msg.setSourceEntity(79U);
    msg.setDestination(21341U);
    msg.setDestinationEntity(107U);
    msg.tracking = 19U;
    msg.lat = 0.300891350366;
    msg.lon = 0.979500541233;
    msg.x = 0.207568677866;
    msg.y = 0.145933305951;
    msg.z = 0.267752438914;

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
    msg.setTimeStamp(0.27007731038);
    msg.setSource(32776U);
    msg.setSourceEntity(214U);
    msg.setDestination(10549U);
    msg.setDestinationEntity(202U);
    msg.tracking = 114U;
    msg.lat = 0.426401698957;
    msg.lon = 0.913954331141;
    msg.x = 0.964918482503;
    msg.y = 0.452250264044;
    msg.z = 0.615910271746;

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
    msg.setTimeStamp(0.465998060793);
    msg.setSource(14309U);
    msg.setSourceEntity(10U);
    msg.setDestination(60386U);
    msg.setDestinationEntity(211U);
    msg.target.assign("SIDUIPYCFEIBISLNLDZRULFJQOSBVEQRAXMMAUISAFJHLEJVWQGIHGXGVVCOLASTWKRODGZDQNTUMBXVSUUEZFWPYGKZKGNWFYCIRBNXLDXOYRKNKWPTBVMYOZXEGVYLFPBPQJXRMOAMDVGYHTWJCKMRPXUYZFYFAFRXAYUXLOHNPVLZHHGNIJFQTVJENPTKQBDASQCSETCQGBNLWARKPRZJUOWMCWTSKCPMM");
    msg.lbearing = 0.0373610005373;
    msg.lelevation = 0.98103346088;
    msg.bearing = 0.452745245391;
    msg.elevation = 0.80812033465;
    msg.phi = 0.693682632575;
    msg.theta = 0.096614928261;
    msg.psi = 0.374829729756;
    msg.accuracy = 0.920443920166;

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
    msg.setTimeStamp(0.126388641619);
    msg.setSource(28564U);
    msg.setSourceEntity(57U);
    msg.setDestination(23236U);
    msg.setDestinationEntity(99U);
    msg.target.assign("YXSOKOGEKVWWBQPPMNMHJRNYNHJOZFNAXAPOSLOHDLFORKZCSSDEQQOWKDMDPAKCPXZVZQKWHWNRCURENZMFMAYFIMXQ");
    msg.lbearing = 0.0406288554649;
    msg.lelevation = 0.121438866333;
    msg.bearing = 0.373066216073;
    msg.elevation = 0.830923803595;
    msg.phi = 0.960076120936;
    msg.theta = 0.699419947974;
    msg.psi = 0.288584623603;
    msg.accuracy = 0.901230080209;

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
    msg.setTimeStamp(0.302656667491);
    msg.setSource(64499U);
    msg.setSourceEntity(79U);
    msg.setDestination(12405U);
    msg.setDestinationEntity(29U);
    msg.target.assign("NANKQJXNYXJCCGVPYMPDZOASWCZABREFEIVIWHLVFBICKWCLKPFRFBMCQNUJHWTOYBVVYRQFWFZRUVQZXZDQORXGSIAKRBYWLZJFTYEGDXBAFUTHLG");
    msg.lbearing = 0.931995596199;
    msg.lelevation = 0.737747165155;
    msg.bearing = 0.638758703619;
    msg.elevation = 0.351611496157;
    msg.phi = 0.466234935899;
    msg.theta = 0.0683496862045;
    msg.psi = 0.0298048141783;
    msg.accuracy = 0.56331049118;

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
    msg.setTimeStamp(0.545083549877);
    msg.setSource(7420U);
    msg.setSourceEntity(185U);
    msg.setDestination(16747U);
    msg.setDestinationEntity(217U);
    msg.target.assign("DZFTYZGHTPFNJNJUVAPWMKLTQTRZSXJUSPGAPQNLGAOWIQTMMUGPOJTRTHPSPXOZBEYLGUNCZGXDWFEVUKDARDYBYCFQFVCOHUNVW");
    msg.x = 0.582861363229;
    msg.y = 0.40951546819;
    msg.z = 0.210345961005;
    msg.n = 0.608828578386;
    msg.e = 0.344461213794;
    msg.d = 0.306224170869;
    msg.phi = 0.757689313354;
    msg.theta = 0.954153825;
    msg.psi = 0.0438861014942;
    msg.accuracy = 0.986869498978;

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
    msg.setTimeStamp(0.984389831338);
    msg.setSource(24668U);
    msg.setSourceEntity(26U);
    msg.setDestination(2525U);
    msg.setDestinationEntity(220U);
    msg.target.assign("LKDJTNBSSYOFQUWSTYMXYXXZZJXNRSVQRBFBYGVVNDGAQBDXCQGTYDCRQUSIVAKALCWWZWZFPGKTWVJWUSTCNTIFJFMCTMJYDIRFLKNEFONHTHOPECH");
    msg.x = 0.708163246305;
    msg.y = 0.288157471318;
    msg.z = 0.115800004928;
    msg.n = 0.960431143563;
    msg.e = 0.187407130576;
    msg.d = 0.203754376771;
    msg.phi = 0.150748137487;
    msg.theta = 0.291302090199;
    msg.psi = 0.241698892718;
    msg.accuracy = 0.930242911025;

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
    msg.setTimeStamp(0.381339229349);
    msg.setSource(31957U);
    msg.setSourceEntity(89U);
    msg.setDestination(31725U);
    msg.setDestinationEntity(165U);
    msg.target.assign("GGGHJFNSHCELVZWBQFLJZZJVWKFXXRNBFTHBKDTSAORBDHZQJBIMMWMXVGDA");
    msg.x = 0.97434830194;
    msg.y = 0.820703079515;
    msg.z = 0.874944163413;
    msg.n = 0.65637911112;
    msg.e = 0.707712207624;
    msg.d = 0.797021062603;
    msg.phi = 0.924218941797;
    msg.theta = 0.686777247791;
    msg.psi = 0.795294411704;
    msg.accuracy = 0.959560333792;

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
    msg.setTimeStamp(0.0559830048536);
    msg.setSource(34318U);
    msg.setSourceEntity(188U);
    msg.setDestination(23241U);
    msg.setDestinationEntity(60U);
    msg.target.assign("CEXJMEFCZRXZWEVLBYDNOJLKPQGBHIUUQEZACWNUKDWUADJRXSLRBDIKTOJEKEBUWAYQDVJOBNFLNFPPZHAKNRCZGLLAWSGNXSQJOBBFISCGPYPXIRDOEJJ");
    msg.lat = 0.197189946575;
    msg.lon = 0.708918633609;
    msg.z_units = 252U;
    msg.z = 0.570496339298;
    msg.accuracy = 0.711785579888;

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
    msg.setTimeStamp(0.200104948728);
    msg.setSource(62311U);
    msg.setSourceEntity(147U);
    msg.setDestination(57825U);
    msg.setDestinationEntity(109U);
    msg.target.assign("BIUUQKUERAUGNWGXITMGJNTJTFASANVUMNUBBULJKQXDKEAHCYLDLYIHVQSAQOCMRPVJGDKZYLXZCHHURMPTPWKAZZTIKTTNWKYODUBJLGWFNTVPIWSFDVYONCCYZAYMFJGQCXSMFSRSHCFOSZJXUWGMGBIKLQRIDISYLTIARFEMAETLPOBHZVQEKPOWXFOEBDMRLCDQRXYPQHBWZQWPZCNNVVVDHVSOY");
    msg.lat = 0.435713731245;
    msg.lon = 0.434357410503;
    msg.z_units = 77U;
    msg.z = 0.726826480687;
    msg.accuracy = 0.435286743325;

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
    msg.setTimeStamp(0.2365425958);
    msg.setSource(28790U);
    msg.setSourceEntity(159U);
    msg.setDestination(27579U);
    msg.setDestinationEntity(53U);
    msg.target.assign("RKOQKHFGCOEGIQPRLFTHNNLZSCBDSLJCDKKIGIXLAMHOXUFFCFZMCZQPEWXVFUHWROWGYNGDLFTYULJEPKBNTTFVLYYMTUCNITTWDWBWUAQDJAQPMSSZBRZOCUJJHRNAGVILEOAVBKMVUZSEXHIITZSXFSDQWYYMBMNJAUN");
    msg.lat = 0.961773724789;
    msg.lon = 0.720728975638;
    msg.z_units = 86U;
    msg.z = 0.0043369064208;
    msg.accuracy = 0.613549766364;

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
    msg.setTimeStamp(0.732241534397);
    msg.setSource(11019U);
    msg.setSourceEntity(77U);
    msg.setDestination(10390U);
    msg.setDestinationEntity(115U);
    msg.name.assign("WBOGQASAXVPVOZRZDHHKCSZRJEJJKNNBAEZUHVDXAJCUTAWXUFBCHFADQPDBWMIIMEDLBMCLIXYHCMVJEFKOUGLNIVEPZCXNAQROKWNTZBIUNTVXQDFBGNTYFROFYFMWBLHGERK");
    msg.lat = 0.073137133455;
    msg.lon = 0.920322835736;
    msg.z = 0.265954679766;
    msg.z_units = 206U;

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
    msg.setTimeStamp(0.109476875084);
    msg.setSource(2616U);
    msg.setSourceEntity(141U);
    msg.setDestination(39470U);
    msg.setDestinationEntity(93U);
    msg.name.assign("FUWOSGQEVTFCEYUNZVLMBRYTAVNKWVUSVMYWHVQZEGNXZTUJSIZQDHPDPHXHASWPA");
    msg.lat = 0.695710653934;
    msg.lon = 0.806512653843;
    msg.z = 0.414574201247;
    msg.z_units = 87U;

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
    msg.setTimeStamp(0.765191672073);
    msg.setSource(42066U);
    msg.setSourceEntity(163U);
    msg.setDestination(30384U);
    msg.setDestinationEntity(16U);
    msg.name.assign("XFXOCIZSGZYSYDBZOCRKSWJARCXIIHWVLAUOYEMPJWNVEBGMOWPJGHAG");
    msg.lat = 0.880293459952;
    msg.lon = 0.719530081141;
    msg.z = 0.920688668909;
    msg.z_units = 131U;

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
    msg.setTimeStamp(0.851131028636);
    msg.setSource(52651U);
    msg.setSourceEntity(74U);
    msg.setDestination(9954U);
    msg.setDestinationEntity(68U);
    msg.op = 120U;

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
    msg.setTimeStamp(0.848014872453);
    msg.setSource(28566U);
    msg.setSourceEntity(77U);
    msg.setDestination(17239U);
    msg.setDestinationEntity(195U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.555762522409);
    msg.setSource(22244U);
    msg.setSourceEntity(152U);
    msg.setDestination(60604U);
    msg.setDestinationEntity(243U);
    msg.op = 172U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("UOOMCMTSIOUHGBYEBNKPKNSVZICXPASLG");
    tmp_msg_0.lat = 0.904810478347;
    tmp_msg_0.lon = 0.583458135812;
    tmp_msg_0.z = 0.568059696358;
    tmp_msg_0.z_units = 50U;
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
    msg.setTimeStamp(0.66767745566);
    msg.setSource(28896U);
    msg.setSourceEntity(231U);
    msg.setDestination(65043U);
    msg.setDestinationEntity(141U);
    msg.value = 0.241896641194;
    msg.type = 72U;

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
    msg.setTimeStamp(0.949180140441);
    msg.setSource(25165U);
    msg.setSourceEntity(122U);
    msg.setDestination(8336U);
    msg.setDestinationEntity(223U);
    msg.value = 0.577426015045;
    msg.type = 49U;

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
    msg.setTimeStamp(0.743941628787);
    msg.setSource(54423U);
    msg.setSourceEntity(44U);
    msg.setDestination(23994U);
    msg.setDestinationEntity(184U);
    msg.value = 0.312171247104;
    msg.type = 209U;

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
    msg.setTimeStamp(0.11233635518);
    msg.setSource(59971U);
    msg.setSourceEntity(249U);
    msg.setDestination(30106U);
    msg.setDestinationEntity(1U);
    msg.value = 0.941547931022;

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
    msg.setTimeStamp(0.600825825593);
    msg.setSource(25695U);
    msg.setSourceEntity(227U);
    msg.setDestination(39483U);
    msg.setDestinationEntity(237U);
    msg.value = 0.44786668137;

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
    msg.setTimeStamp(0.624946389809);
    msg.setSource(41254U);
    msg.setSourceEntity(11U);
    msg.setDestination(58981U);
    msg.setDestinationEntity(11U);
    msg.value = 0.95459470062;

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
    msg.setTimeStamp(0.543791795346);
    msg.setSource(14955U);
    msg.setSourceEntity(35U);
    msg.setDestination(42875U);
    msg.setDestinationEntity(31U);
    msg.timestamp_last_service = 0.428414447941;
    msg.time_next_service = 0.21258874153;
    msg.time_motor_next_service = 0.105273109426;
    msg.time_idle_ground = 0.293851388067;
    msg.time_idle_air = 0.668762542911;
    msg.time_idle_water = 0.310886386671;
    msg.time_idle_underwater = 0.504624182262;
    msg.time_idle_unknown = 0.0249008081584;
    msg.time_motor_ground = 0.0138825695311;
    msg.time_motor_air = 0.30600094217;
    msg.time_motor_water = 0.71776764168;
    msg.time_motor_underwater = 0.398151789058;
    msg.time_motor_unknown = 0.82628882258;
    msg.rpm_min = -16049;
    msg.rpm_max = 4051;
    msg.depth_max = 0.66033713231;

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
    msg.setTimeStamp(0.686163489776);
    msg.setSource(37509U);
    msg.setSourceEntity(105U);
    msg.setDestination(20501U);
    msg.setDestinationEntity(20U);
    msg.timestamp_last_service = 0.760784834713;
    msg.time_next_service = 0.325363559114;
    msg.time_motor_next_service = 0.0133428791695;
    msg.time_idle_ground = 0.532846110605;
    msg.time_idle_air = 0.822502360585;
    msg.time_idle_water = 0.174236836491;
    msg.time_idle_underwater = 0.198540045053;
    msg.time_idle_unknown = 0.632035861246;
    msg.time_motor_ground = 0.529990491531;
    msg.time_motor_air = 0.775314817944;
    msg.time_motor_water = 0.682824613807;
    msg.time_motor_underwater = 0.460801222233;
    msg.time_motor_unknown = 0.135952257031;
    msg.rpm_min = -552;
    msg.rpm_max = -1808;
    msg.depth_max = 0.389265364338;

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
    msg.setTimeStamp(0.847043712198);
    msg.setSource(26987U);
    msg.setSourceEntity(62U);
    msg.setDestination(51321U);
    msg.setDestinationEntity(79U);
    msg.timestamp_last_service = 0.976644088498;
    msg.time_next_service = 0.427081194012;
    msg.time_motor_next_service = 0.337400458608;
    msg.time_idle_ground = 0.176239762659;
    msg.time_idle_air = 0.491856132137;
    msg.time_idle_water = 0.108923813042;
    msg.time_idle_underwater = 0.433416844243;
    msg.time_idle_unknown = 0.561883169844;
    msg.time_motor_ground = 0.0515575420039;
    msg.time_motor_air = 0.681823681759;
    msg.time_motor_water = 0.376111303957;
    msg.time_motor_underwater = 0.493030397934;
    msg.time_motor_unknown = 0.046944460246;
    msg.rpm_min = 15998;
    msg.rpm_max = 7551;
    msg.depth_max = 0.315707567997;

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
    msg.setTimeStamp(0.978344378056);
    msg.setSource(28067U);
    msg.setSourceEntity(155U);
    msg.setDestination(602U);
    msg.setDestinationEntity(0U);
    msg.severity = 187U;
    msg.text.assign("BMSKTHDNKKLSDBEDRYOZCPSIJNZYOUUVLLUODMKBMHQZQVABICQAGGOIGPTEDNKSSSWHQYELZELHFWVKQCDTUCMGEMPQBXPRSDXNPFJMJAIYXXCSCUXDIRPOLPUNWUZJETOAENFAFAHNSTIWAEMAWGVWRQFKTBVCPFIEFIWAXJ");

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
    msg.setTimeStamp(0.0448524244123);
    msg.setSource(51099U);
    msg.setSourceEntity(102U);
    msg.setDestination(38509U);
    msg.setDestinationEntity(23U);
    msg.severity = 241U;
    msg.text.assign("SFEDNQRYXGNCMFONCFQWHXCZZRJBGSPVBRGNBFFJJPULJRUQDYHVPXBZXOYSTOHDVYKENKTKDTKKOBPMHWKIGUMWLPRBTWIRQZMUWPMNYSKRFFOJHMQKVJICVGPOLJVNAUADTIZTRCWECGLGXXQUFFATUOORCIAGAQIXZVZMLDCQ");

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
    msg.setTimeStamp(0.430340947784);
    msg.setSource(38335U);
    msg.setSourceEntity(19U);
    msg.setDestination(7579U);
    msg.setDestinationEntity(115U);
    msg.severity = 222U;
    msg.text.assign("YEBOJBAXBFBKFBJGDUPNAMKTUVTHARTEDNPDBIHVSIGLOAIGSHURGDZFDPYWPFJXOWYZ");

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
    msg.setTimeStamp(0.910569216238);
    msg.setSource(37343U);
    msg.setSourceEntity(163U);
    msg.setDestination(46685U);
    msg.setDestinationEntity(68U);
    msg.channel = -14;
    msg.value = -1682431772;
    msg.gain = 64U;

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
    msg.setTimeStamp(0.393955536831);
    msg.setSource(12881U);
    msg.setSourceEntity(129U);
    msg.setDestination(46772U);
    msg.setDestinationEntity(62U);
    msg.channel = -36;
    msg.value = -635536509;
    msg.gain = 198U;

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
    msg.setTimeStamp(0.500845848188);
    msg.setSource(51527U);
    msg.setSourceEntity(218U);
    msg.setDestination(1093U);
    msg.setDestinationEntity(72U);
    msg.channel = 92;
    msg.value = -1418962902;
    msg.gain = 184U;

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
    msg.setTimeStamp(0.930040428649);
    msg.setSource(31067U);
    msg.setSourceEntity(5U);
    msg.setDestination(24547U);
    msg.setDestinationEntity(116U);
    msg.ch01 = 0.181782351411;
    msg.ch02 = 0.0999257807775;
    msg.ch03 = 0.550045391146;
    msg.ch04 = 0.807051347415;
    msg.ch05 = 0.877658914231;
    msg.ch06 = 0.461616733268;
    msg.ch07 = 0.444719062091;
    msg.ch08 = 0.0416551293499;
    msg.ch09 = 0.957726956458;
    msg.ch10 = 0.324341802667;
    msg.ch11 = 0.0940573692554;
    msg.ch12 = 0.236333301173;
    msg.ch13 = 0.466078076708;
    msg.ch14 = 0.429485503942;
    msg.ch15 = 0.846792589421;
    msg.ch16 = 0.342215293585;

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
    msg.setTimeStamp(0.674270154566);
    msg.setSource(44061U);
    msg.setSourceEntity(202U);
    msg.setDestination(546U);
    msg.setDestinationEntity(109U);
    msg.ch01 = 0.563712696189;
    msg.ch02 = 0.558704783878;
    msg.ch03 = 0.759085727449;
    msg.ch04 = 0.651113211798;
    msg.ch05 = 0.837028646127;
    msg.ch06 = 0.376940623736;
    msg.ch07 = 0.543913354908;
    msg.ch08 = 0.493762924896;
    msg.ch09 = 0.370451080794;
    msg.ch10 = 0.507756665818;
    msg.ch11 = 0.0555432812403;
    msg.ch12 = 0.638314536841;
    msg.ch13 = 0.70440552645;
    msg.ch14 = 0.0980271891349;
    msg.ch15 = 0.456761538354;
    msg.ch16 = 0.0701938771175;

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
    msg.setTimeStamp(0.89620891995);
    msg.setSource(43679U);
    msg.setSourceEntity(139U);
    msg.setDestination(24311U);
    msg.setDestinationEntity(31U);
    msg.ch01 = 0.988246572925;
    msg.ch02 = 0.574134495307;
    msg.ch03 = 0.861636266742;
    msg.ch04 = 0.737624162609;
    msg.ch05 = 0.37141574239;
    msg.ch06 = 0.331058964109;
    msg.ch07 = 0.814590082188;
    msg.ch08 = 0.0506506259127;
    msg.ch09 = 0.759067796671;
    msg.ch10 = 0.973637668593;
    msg.ch11 = 0.00189802734301;
    msg.ch12 = 0.638442119384;
    msg.ch13 = 0.0158624354836;
    msg.ch14 = 0.139697534773;
    msg.ch15 = 0.857004613128;
    msg.ch16 = 0.541923494929;

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
    msg.setTimeStamp(0.385280391211);
    msg.setSource(2790U);
    msg.setSourceEntity(246U);
    msg.setDestination(60872U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.881023162222;
    msg.lon = 0.249784291581;
    msg.x = 0.0900536405069;
    msg.y = 0.246165693783;
    msg.z = 0.680211693346;
    msg.vx = 0.417899971324;
    msg.vy = 0.812113784234;
    msg.vz = 0.00195347087253;
    msg.depth = 16U;
    msg.speed = 0.564578902864;
    msg.psi = 0.0893091153813;
    msg.omega = 0.854792489053;

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
    msg.setTimeStamp(0.918174212828);
    msg.setSource(61471U);
    msg.setSourceEntity(160U);
    msg.setDestination(22696U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.267859239768;
    msg.lon = 0.242889344233;
    msg.x = 0.31835950268;
    msg.y = 0.333845609119;
    msg.z = 0.774816297246;
    msg.vx = 0.246961880586;
    msg.vy = 0.331224807901;
    msg.vz = 0.234598339734;
    msg.depth = 247U;
    msg.speed = 0.37671755647;
    msg.psi = 0.553999143013;
    msg.omega = 0.581087188236;

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
    msg.setTimeStamp(0.103623717903);
    msg.setSource(48229U);
    msg.setSourceEntity(252U);
    msg.setDestination(60741U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.389043559746;
    msg.lon = 0.982690081589;
    msg.x = 0.00829373658768;
    msg.y = 0.966999328422;
    msg.z = 0.4645636092;
    msg.vx = 0.399934839941;
    msg.vy = 0.770837040103;
    msg.vz = 0.992383161335;
    msg.depth = 209U;
    msg.speed = 0.00898414860114;
    msg.psi = 0.292930306573;
    msg.omega = 0.281142957646;

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
    msg.setTimeStamp(0.740521382079);
    msg.setSource(51355U);
    msg.setSourceEntity(136U);
    msg.setDestination(46909U);
    msg.setDestinationEntity(93U);
    msg.ctrl_cmd_v = 0.451640166122;
    msg.ctrl_cmd_omega = 0.358678332451;
    msg.sat_ctrl_cmd_v = 0.555663661196;
    msg.sat_ctrl_cmd_omega = 0.0384062128566;
    msg.robust_v = 0.0590050542101;
    msg.robust_omega = 0.768672967783;
    msg.gamma = 0.609346337162;
    msg.gamma_dot = 0.811571781013;
    msg.gamma_ref = 0.51538571986;
    msg.g_err = 0.811911311363;
    msg.target_x = 0.526707749677;
    msg.target_y = 0.800005814641;
    msg.target_z = 0.419238687796;
    msg.target_psi = 0.563053530458;
    msg.target_vx = 0.516253492188;
    msg.target_vy = 0.241932454111;
    msg.target_vz = 0.835514209277;
    msg.target_omega = 0.0838913120306;
    msg.x = 0.890314372815;
    msg.y = 0.641984621124;
    msg.z = 0.431051152586;
    msg.psi = 0.833030719738;
    msg.vx = 0.909569880405;
    msg.vy = 0.706412433951;
    msg.vz = 0.71756975277;
    msg.pd_x = 0.972405539902;
    msg.pd_y = 0.80108778887;
    msg.p_ref_x = 0.441385317506;
    msg.p_ref_y = 0.92900368937;
    msg.norm_mpf_err = 0.0755067173868;
    msg.mpf_err_x = 0.382366932494;
    msg.mpf_err_y = 0.281097137281;
    msg.mpf_err_z = 0.835603086207;
    msg.err_x = 0.669092850807;
    msg.err_y = 0.80243504102;
    msg.err_z = 0.0445238682968;
    msg.pest_x = 0.838231422024;
    msg.pest_y = 0.0637246364021;
    msg.psi_est = 0.904203766804;
    msg.perr_x = 0.88663715445;
    msg.perr_y = 0.830477828497;
    msg.psi_err = 0.507980128073;
    msg.dest_x = 0.467003730068;
    msg.dest_y = 0.727188143486;
    msg.domega_est = 0.0297451659765;

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
    msg.setTimeStamp(0.00805251970769);
    msg.setSource(44192U);
    msg.setSourceEntity(23U);
    msg.setDestination(5498U);
    msg.setDestinationEntity(123U);
    msg.ctrl_cmd_v = 0.883647359026;
    msg.ctrl_cmd_omega = 0.536446363696;
    msg.sat_ctrl_cmd_v = 0.248530064018;
    msg.sat_ctrl_cmd_omega = 0.741869511133;
    msg.robust_v = 0.870101204246;
    msg.robust_omega = 0.484294071445;
    msg.gamma = 0.118000692622;
    msg.gamma_dot = 0.43962135587;
    msg.gamma_ref = 0.733385746236;
    msg.g_err = 0.663054105203;
    msg.target_x = 0.771565547878;
    msg.target_y = 0.487955301369;
    msg.target_z = 0.719498744226;
    msg.target_psi = 0.217547876126;
    msg.target_vx = 0.85244236004;
    msg.target_vy = 0.283916585856;
    msg.target_vz = 0.588476930091;
    msg.target_omega = 0.565057958548;
    msg.x = 0.792204695043;
    msg.y = 0.172609829355;
    msg.z = 0.425938484445;
    msg.psi = 0.791575152011;
    msg.vx = 0.545571872295;
    msg.vy = 0.761377607281;
    msg.vz = 0.0895128230083;
    msg.pd_x = 0.965545992613;
    msg.pd_y = 0.536464480798;
    msg.p_ref_x = 0.491971453481;
    msg.p_ref_y = 0.671898986806;
    msg.norm_mpf_err = 0.462174426348;
    msg.mpf_err_x = 0.120347329316;
    msg.mpf_err_y = 0.0908184999406;
    msg.mpf_err_z = 0.477594114647;
    msg.err_x = 0.255211943762;
    msg.err_y = 0.465274196575;
    msg.err_z = 0.357372958443;
    msg.pest_x = 0.58131265052;
    msg.pest_y = 0.255674872484;
    msg.psi_est = 0.746085166239;
    msg.perr_x = 0.615292811072;
    msg.perr_y = 0.316298913267;
    msg.psi_err = 0.628618811121;
    msg.dest_x = 0.666991991245;
    msg.dest_y = 0.597823781585;
    msg.domega_est = 0.450716103108;

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
    msg.setTimeStamp(0.258141941723);
    msg.setSource(30833U);
    msg.setSourceEntity(6U);
    msg.setDestination(2483U);
    msg.setDestinationEntity(106U);
    msg.ctrl_cmd_v = 0.95853081789;
    msg.ctrl_cmd_omega = 0.756861850063;
    msg.sat_ctrl_cmd_v = 0.529189573554;
    msg.sat_ctrl_cmd_omega = 0.613557843095;
    msg.robust_v = 0.156835302458;
    msg.robust_omega = 0.491393278439;
    msg.gamma = 0.0922387246789;
    msg.gamma_dot = 0.544438808849;
    msg.gamma_ref = 0.428277806237;
    msg.g_err = 0.353138785994;
    msg.target_x = 0.402276099267;
    msg.target_y = 0.400151281888;
    msg.target_z = 0.740688160099;
    msg.target_psi = 0.284070815736;
    msg.target_vx = 0.785231547775;
    msg.target_vy = 0.95168644543;
    msg.target_vz = 0.129973788608;
    msg.target_omega = 0.114403983091;
    msg.x = 0.548269750758;
    msg.y = 0.0602967149138;
    msg.z = 0.787578756664;
    msg.psi = 0.348230180714;
    msg.vx = 0.429774600147;
    msg.vy = 0.316403471434;
    msg.vz = 0.00916321076357;
    msg.pd_x = 0.417955104587;
    msg.pd_y = 0.913473813974;
    msg.p_ref_x = 0.530714248747;
    msg.p_ref_y = 0.456605260394;
    msg.norm_mpf_err = 0.782059668794;
    msg.mpf_err_x = 0.0174312863035;
    msg.mpf_err_y = 0.5161480889;
    msg.mpf_err_z = 0.731201014396;
    msg.err_x = 0.00269966003211;
    msg.err_y = 0.291608997551;
    msg.err_z = 0.271533409374;
    msg.pest_x = 0.668584530665;
    msg.pest_y = 0.71540994561;
    msg.psi_est = 0.784557171516;
    msg.perr_x = 0.320263981266;
    msg.perr_y = 0.50633410201;
    msg.psi_err = 0.815947970208;
    msg.dest_x = 0.286746039334;
    msg.dest_y = 0.931406891247;
    msg.domega_est = 0.0400824774509;

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
    msg.setTimeStamp(0.190746836258);
    msg.setSource(55363U);
    msg.setSourceEntity(139U);
    msg.setDestination(35064U);
    msg.setDestinationEntity(153U);
    msg.gamma = 0.424286264212;
    msg.systemid = 39U;

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
    msg.setTimeStamp(0.0682342746368);
    msg.setSource(34819U);
    msg.setSourceEntity(19U);
    msg.setDestination(49542U);
    msg.setDestinationEntity(189U);
    msg.gamma = 0.0398899671804;
    msg.systemid = 95U;

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
    msg.setTimeStamp(0.936548508712);
    msg.setSource(54181U);
    msg.setSourceEntity(224U);
    msg.setDestination(8893U);
    msg.setDestinationEntity(16U);
    msg.gamma = 0.714774757993;
    msg.systemid = 254U;

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
    msg.setTimeStamp(0.314545197504);
    msg.setSource(13008U);
    msg.setSourceEntity(0U);
    msg.setDestination(7504U);
    msg.setDestinationEntity(160U);
    msg.value = 0.409945178847;

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
    msg.setTimeStamp(0.79588741613);
    msg.setSource(13462U);
    msg.setSourceEntity(117U);
    msg.setDestination(5456U);
    msg.setDestinationEntity(206U);
    msg.value = 0.00434455890264;

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
    msg.setTimeStamp(0.479618847395);
    msg.setSource(51827U);
    msg.setSourceEntity(111U);
    msg.setDestination(13488U);
    msg.setDestinationEntity(51U);
    msg.value = 0.79840113485;

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
