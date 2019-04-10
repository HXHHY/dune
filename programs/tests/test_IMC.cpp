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
// IMC XML MD5: 308226469d065ee385084a0ce5c35397                            *
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
    msg.setTimeStamp(0.546961601671);
    msg.setSource(15714U);
    msg.setSourceEntity(120U);
    msg.setDestination(44502U);
    msg.setDestinationEntity(233U);
    msg.state = 133U;
    msg.flags = 206U;
    msg.description.assign("YNZFYVIWFLGOUCBPHCTAKYDAMQORKXYLCNXFYEEXPVJUAQAHBMRDETDHBAYCMJGSCRFRPQCBJAWJLBZDTIVKJXJGQEGHVLZXWGLDSSEOZVKOTWRYUFORFXBOUOMWRSWIVTDZMHDGGRFQBKKJCXWWAHWULZXSIKPITPOITVVFCMPIUVDPQZABMGNBESASGIEKWRKLG");

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
    msg.setTimeStamp(0.830250788777);
    msg.setSource(35228U);
    msg.setSourceEntity(108U);
    msg.setDestination(15681U);
    msg.setDestinationEntity(81U);
    msg.state = 150U;
    msg.flags = 252U;
    msg.description.assign("LUXPLGMPSYOUFBARCGQFSBFEDIMXSPWSALWEUJICAZQDWIHJQCSFNGLXICODGNYJYRIZVONHWTKMVJZULGIJEHHVZCOQKLVTEFBMOFQXWFQHBQZMOIKNSWMKRL");

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
    msg.setTimeStamp(0.382753424491);
    msg.setSource(28613U);
    msg.setSourceEntity(180U);
    msg.setDestination(55365U);
    msg.setDestinationEntity(59U);
    msg.state = 0U;
    msg.flags = 195U;
    msg.description.assign("CEPRCCWGUQFLHSDSTOWOYJJVJEY");

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
    msg.setTimeStamp(0.1744648638);
    msg.setSource(5114U);
    msg.setSourceEntity(60U);
    msg.setDestination(7534U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.382462552445);
    msg.setSource(32906U);
    msg.setSourceEntity(229U);
    msg.setDestination(54853U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.446086346698);
    msg.setSource(43814U);
    msg.setSourceEntity(128U);
    msg.setDestination(57414U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.972548801819);
    msg.setSource(43907U);
    msg.setSourceEntity(33U);
    msg.setDestination(23646U);
    msg.setDestinationEntity(116U);
    msg.id = 11U;
    msg.label.assign("PEJLWYKRSNZKPNXREBMFLRJYWNYIQSDKLLXWCGVEICTTCUBVXGUSUFMOYDAMZIQOEKSYTWBKQLGVPTVGRPSAMSWDEOIZUXDVGMBDALHPAAJXHKY");
    msg.component.assign("JEDHFMBDDAVKTMSRQXRKJBCGQBZGIKGCISUYPYHNWJLHAOKWOFNABZUWOPQRUZZIARMAWTPNMPDXAFHOCHCLGJUHFZLFSDORSGXLSWILGICDXCAHJBNLJUKHXMCYOUCQKQPTPEVUQGOUNMKPTBOEGEYZBEFLAGRSWMSTPKYINIKTVWDKMVTQIATRCNWIVSNSBNZPLSYWX");
    msg.act_time = 27950U;
    msg.deact_time = 49626U;

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
    msg.setTimeStamp(0.886650680919);
    msg.setSource(18527U);
    msg.setSourceEntity(220U);
    msg.setDestination(44545U);
    msg.setDestinationEntity(17U);
    msg.id = 1U;
    msg.label.assign("CLKLGLXSJJMIAZVYQSNVCARVGABIMUXNUHOEVUDJZEDVOOHCLUNAAMMSTXBPIZFNOFPTEASEHPFTSWEWYLDWPXKOERIZGJRRMKHPHWSBNXXMXPMTACSPFVHUITRHTOPIYFDUDAKWPAWGWGQYRKFQDYYYQKEKOGJMVHUQHQXWICDBDZUMLIJJSNAZDGGFJKNTLQXYBFRLRFYQEMQEIOILTKQSK");
    msg.component.assign("NMOQMOAQDBVEZZBNCEMZFFRVDPWJNSDCGHRPSFAOYLVDCSDCIOJZXSZRMPJRTDMUPGLNPPSTMTNIEPDAHBEALCFKBWHWCHWHUUJSLKUKRSEGVXYZ");
    msg.act_time = 13210U;
    msg.deact_time = 29328U;

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
    msg.setTimeStamp(0.696297034765);
    msg.setSource(21349U);
    msg.setSourceEntity(162U);
    msg.setDestination(39169U);
    msg.setDestinationEntity(194U);
    msg.id = 156U;
    msg.label.assign("WVOCQKHWVFLYTDRAUHDRFNHDNFSRPYONRGFEKSZBDADJLMPMJBSCGJFZYDSXYKXGGKETFCXVZCAVNGT");
    msg.component.assign("WZCFZPNREHHVLAEQFSTGLMXTWZDOBLTILFUVYKAVMTPQMCDKLGEOTBSBWXZWIXQDQXQXBA");
    msg.act_time = 40352U;
    msg.deact_time = 49262U;

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
    msg.setTimeStamp(0.881565616003);
    msg.setSource(58760U);
    msg.setSourceEntity(162U);
    msg.setDestination(43720U);
    msg.setDestinationEntity(38U);
    msg.id = 47U;

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
    msg.setTimeStamp(0.893242856423);
    msg.setSource(42960U);
    msg.setSourceEntity(243U);
    msg.setDestination(14420U);
    msg.setDestinationEntity(144U);
    msg.id = 235U;

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
    msg.setTimeStamp(0.119857002115);
    msg.setSource(38609U);
    msg.setSourceEntity(155U);
    msg.setDestination(27087U);
    msg.setDestinationEntity(87U);
    msg.id = 37U;

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
    msg.setTimeStamp(0.784496843007);
    msg.setSource(40545U);
    msg.setSourceEntity(34U);
    msg.setDestination(18278U);
    msg.setDestinationEntity(126U);
    msg.op = 74U;
    msg.list.assign("EHMZZJTSMDDXLZAVLCEPRRIRQKYXQPMQZALEBTJZELIOATQJ");

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
    msg.setTimeStamp(0.450675209755);
    msg.setSource(14338U);
    msg.setSourceEntity(147U);
    msg.setDestination(52490U);
    msg.setDestinationEntity(242U);
    msg.op = 60U;
    msg.list.assign("TAWVSIKEWJCMR");

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
    msg.setTimeStamp(0.221035265778);
    msg.setSource(33669U);
    msg.setSourceEntity(93U);
    msg.setDestination(43510U);
    msg.setDestinationEntity(57U);
    msg.op = 46U;
    msg.list.assign("UYNPTLOPICRKKEXQZUDEWCSEYJOIVTZLAMYAQLI");

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
    msg.setTimeStamp(0.76949556126);
    msg.setSource(56636U);
    msg.setSourceEntity(48U);
    msg.setDestination(19438U);
    msg.setDestinationEntity(112U);
    msg.value = 122U;

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
    msg.setTimeStamp(0.922711431268);
    msg.setSource(31965U);
    msg.setSourceEntity(67U);
    msg.setDestination(13987U);
    msg.setDestinationEntity(188U);
    msg.value = 216U;

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
    msg.setTimeStamp(0.0598437798378);
    msg.setSource(39674U);
    msg.setSourceEntity(22U);
    msg.setDestination(19369U);
    msg.setDestinationEntity(160U);
    msg.value = 63U;

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
    msg.setTimeStamp(0.483695410496);
    msg.setSource(45971U);
    msg.setSourceEntity(95U);
    msg.setDestination(54822U);
    msg.setDestinationEntity(65U);
    msg.consumer.assign("YFHYCYAVPOATRDZVIVHVIONXLSPRDVDQMYFUJBJJGCQPAEEUSMPFDIPGBHRFROMUONNXUEWQNRSVOGUKWJTCVYMGIPKWLLTLGDNVAKPDIALLDMWYWAEZIZPJMFTUPZXMKSNECUGPQDQQBXHCNBWUNIONSZJIEGEKRJEBRELKSGSFJUALYEQCHRLCBCRTKTUQKLZAXYXXTZWMWZHOXQ");
    msg.message_id = 7448U;

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
    msg.setTimeStamp(0.635616115843);
    msg.setSource(7064U);
    msg.setSourceEntity(244U);
    msg.setDestination(35569U);
    msg.setDestinationEntity(4U);
    msg.consumer.assign("IGWEHEUILLCSFQPNCOJHPTTZIXSUOHLTVPPAYQGLIWBEBJZEDSOWLYTMFHYPMAEYKTZAWPVRYQNQOGKJQKQJDLSVOJNSRQADUPFCNRNKHMKDSUMSCTIBNQBOAMWXWFMBGBBMVOMYFCRAKKZXXJPLDUCWWHTDRJYVXVQJUXRXZAYZHYKDWBUFNWPUCRLCGLMRLSZOGMXDCVUFERIFHHVTEBTEKDGHZFJNN");
    msg.message_id = 2407U;

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
    msg.setTimeStamp(0.654735704753);
    msg.setSource(62517U);
    msg.setSourceEntity(231U);
    msg.setDestination(12383U);
    msg.setDestinationEntity(133U);
    msg.consumer.assign("SDPQEJXPBGGPAAYJXTDDQCNAMHDTYSGBTZAFERDNXFWFSYMDCVCYIFXFQDHHVXZEKOZVBPTKIPVNKXATRHOUZWHEHTAUOENXVEOIYCLSHJGKVKUAPIIMWRIVLSGGBRTYYYBJNCLLGYEZNLIQQJALUDADZMLWSQBMDKVUSTVCSSEO");
    msg.message_id = 51540U;

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
    msg.setTimeStamp(0.121170358805);
    msg.setSource(22259U);
    msg.setSourceEntity(13U);
    msg.setDestination(37154U);
    msg.setDestinationEntity(220U);
    msg.type = 109U;

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
    msg.setTimeStamp(0.70640089917);
    msg.setSource(63428U);
    msg.setSourceEntity(235U);
    msg.setDestination(49316U);
    msg.setDestinationEntity(55U);
    msg.type = 230U;

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
    msg.setTimeStamp(0.058585343866);
    msg.setSource(58345U);
    msg.setSourceEntity(146U);
    msg.setDestination(19327U);
    msg.setDestinationEntity(19U);
    msg.type = 186U;

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
    msg.setTimeStamp(0.287306858122);
    msg.setSource(23376U);
    msg.setSourceEntity(60U);
    msg.setDestination(8286U);
    msg.setDestinationEntity(92U);
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
    msg.setTimeStamp(0.587953420578);
    msg.setSource(32649U);
    msg.setSourceEntity(17U);
    msg.setDestination(28737U);
    msg.setDestinationEntity(153U);
    msg.op = 246U;

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
    msg.setTimeStamp(0.927382514704);
    msg.setSource(6508U);
    msg.setSourceEntity(254U);
    msg.setDestination(17010U);
    msg.setDestinationEntity(179U);
    msg.op = 217U;

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
    msg.setTimeStamp(0.093402769475);
    msg.setSource(54842U);
    msg.setSourceEntity(134U);
    msg.setDestination(24301U);
    msg.setDestinationEntity(193U);
    msg.total_steps = 177U;
    msg.step_number = 48U;
    msg.step.assign("ESANCIOTTGBMXMDVJOQJLVUXTEMFEUKYSKIQZTJETKBJSKWBADZNSHCRDCWQHZGNBQYVIBSDURLPXYGSOCDTREWLVOIZWHCCBPXONLDEHXNKFUKFZYBACVMJSCPAMXNWPJQZLGVRRQOPHYLNVNTXCKXLRISWAYPJABUOZQOYPIMLCIDKUKXWIQGFHGSRFYSMBJFJAUAHJUEBHFLZVNRI");
    msg.flags = 97U;

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
    msg.setTimeStamp(0.843054681829);
    msg.setSource(33066U);
    msg.setSourceEntity(197U);
    msg.setDestination(20445U);
    msg.setDestinationEntity(107U);
    msg.total_steps = 240U;
    msg.step_number = 0U;
    msg.step.assign("LETIFHBHKXNONDXPTGOXAWQVZYCMKEVCRIFYWOBOEBKTUADLROEOCKXTZVNDCGTQYIEDWJGUSYUYWTZIQATQVLFSBJBDQJPCQHWPQFIXJHWCDTULEVSBPYLXNOHIABZUR");
    msg.flags = 95U;

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
    msg.setTimeStamp(0.531447424853);
    msg.setSource(51933U);
    msg.setSourceEntity(104U);
    msg.setDestination(22391U);
    msg.setDestinationEntity(37U);
    msg.total_steps = 69U;
    msg.step_number = 253U;
    msg.step.assign("BDLLWRDAQYRZPVUDYELGXHDOGNPQPTGXQFACJMSVCZCUZHDJMMERAPTTWIFUMLNDEXVFXMOHLQDNRYPLVVIWTPBGJLFE");
    msg.flags = 81U;

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
    msg.setTimeStamp(0.671000941182);
    msg.setSource(30329U);
    msg.setSourceEntity(249U);
    msg.setDestination(21645U);
    msg.setDestinationEntity(60U);
    msg.state = 254U;
    msg.error.assign("GGBQDNPEFVWMLUTAIDQTXGSPAZLDFRDOCBOVEFVUYKAMOGOTPMFZFOVEEYJPUUCRIZXPHBEFDOYUAYBKXTVQSWGWFQCURQVMSSHRZJRMRGVEHWWIYXPIJKFMLZCRMHYBRJOAKXCPMVOUN");

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
    msg.setTimeStamp(0.445121324016);
    msg.setSource(62635U);
    msg.setSourceEntity(221U);
    msg.setDestination(20042U);
    msg.setDestinationEntity(210U);
    msg.state = 209U;
    msg.error.assign("NAODBJOYLJXAHJIBKFKZSGPMTOEPPUUXXHVJERJSYQGPSWCBPNIIJAUDFQHUNPSALPDHTMUDMEGOFZGRMVZNPYFCNKEGKTSKEIMJLAMYXHTRBYBWSVJWRIGWSORVAQMYCLZZXILTYNXXMXATFLHRHZGLRYKDTELG");

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
    msg.setTimeStamp(0.471635720826);
    msg.setSource(58522U);
    msg.setSourceEntity(187U);
    msg.setDestination(35768U);
    msg.setDestinationEntity(153U);
    msg.state = 206U;
    msg.error.assign("AJMNKIYZBJDLXXDMLATTVOEUBZPFOUMSOQUYVWZLTNNNIGUAIWWWRNP");

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
    msg.setTimeStamp(0.2069647177);
    msg.setSource(34548U);
    msg.setSourceEntity(83U);
    msg.setDestination(42444U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.957445786237);
    msg.setSource(7973U);
    msg.setSourceEntity(170U);
    msg.setDestination(7263U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.729173779101);
    msg.setSource(40978U);
    msg.setSourceEntity(146U);
    msg.setDestination(22183U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.927148367613);
    msg.setSource(2507U);
    msg.setSourceEntity(58U);
    msg.setDestination(10122U);
    msg.setDestinationEntity(40U);
    msg.op = 19U;
    msg.speed_min = 0.496612528353;
    msg.speed_max = 0.260914392708;
    msg.long_accel = 0.550443502497;
    msg.alt_max_msl = 0.205668671156;
    msg.dive_fraction_max = 0.444490253427;
    msg.climb_fraction_max = 0.55638069812;
    msg.bank_max = 0.65558565753;
    msg.p_max = 0.121486078513;
    msg.pitch_min = 0.824128622049;
    msg.pitch_max = 0.215304423363;
    msg.q_max = 0.380013244364;
    msg.g_min = 0.0943929456808;
    msg.g_max = 0.905770181564;
    msg.g_lat_max = 0.298707623123;
    msg.rpm_min = 0.740490350525;
    msg.rpm_max = 0.950538536848;
    msg.rpm_rate_max = 0.0786351359598;

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
    msg.setTimeStamp(0.216120970722);
    msg.setSource(57662U);
    msg.setSourceEntity(169U);
    msg.setDestination(47368U);
    msg.setDestinationEntity(253U);
    msg.op = 48U;
    msg.speed_min = 0.976562771727;
    msg.speed_max = 0.159842670807;
    msg.long_accel = 0.427912388789;
    msg.alt_max_msl = 0.427165944723;
    msg.dive_fraction_max = 0.724657441832;
    msg.climb_fraction_max = 0.364416543766;
    msg.bank_max = 0.548664101038;
    msg.p_max = 0.901883781398;
    msg.pitch_min = 0.704913387392;
    msg.pitch_max = 0.931816364198;
    msg.q_max = 0.432714497219;
    msg.g_min = 0.0880244941359;
    msg.g_max = 0.365726430876;
    msg.g_lat_max = 0.956452260555;
    msg.rpm_min = 0.565479314402;
    msg.rpm_max = 0.755140622038;
    msg.rpm_rate_max = 0.925521720199;

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
    msg.setTimeStamp(0.859722625241);
    msg.setSource(22697U);
    msg.setSourceEntity(185U);
    msg.setDestination(17946U);
    msg.setDestinationEntity(36U);
    msg.op = 238U;
    msg.speed_min = 0.347744273249;
    msg.speed_max = 0.20269109499;
    msg.long_accel = 0.00261103055804;
    msg.alt_max_msl = 0.204869755909;
    msg.dive_fraction_max = 0.763682330273;
    msg.climb_fraction_max = 0.595006879432;
    msg.bank_max = 0.982388361557;
    msg.p_max = 0.194335626801;
    msg.pitch_min = 0.432932181241;
    msg.pitch_max = 0.0743754463777;
    msg.q_max = 0.293677008619;
    msg.g_min = 0.975504214918;
    msg.g_max = 0.800492493028;
    msg.g_lat_max = 0.835103347832;
    msg.rpm_min = 0.178013646148;
    msg.rpm_max = 0.714533841326;
    msg.rpm_rate_max = 0.886461968457;

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
    msg.setTimeStamp(0.0415879399123);
    msg.setSource(37935U);
    msg.setSourceEntity(66U);
    msg.setDestination(33760U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.362136992491);
    msg.setSource(31053U);
    msg.setSourceEntity(249U);
    msg.setDestination(13922U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.388626831885);
    msg.setSource(33036U);
    msg.setSourceEntity(250U);
    msg.setDestination(38978U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.129631317361);
    msg.setSource(21078U);
    msg.setSourceEntity(95U);
    msg.setDestination(7507U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.0427676468991;
    msg.lon = 0.684204377789;
    msg.height = 0.719445313521;
    msg.x = 0.844992713061;
    msg.y = 0.244289496387;
    msg.z = 0.111842739562;
    msg.phi = 0.325395738874;
    msg.theta = 0.287446331665;
    msg.psi = 0.669031082057;
    msg.u = 0.0596295497466;
    msg.v = 0.0232776489042;
    msg.w = 0.261166924551;
    msg.p = 0.349717172903;
    msg.q = 0.32866273218;
    msg.r = 0.0960396492387;
    msg.svx = 0.432545243953;
    msg.svy = 0.884588180086;
    msg.svz = 0.744076075619;

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
    msg.setTimeStamp(0.955189986222);
    msg.setSource(19U);
    msg.setSourceEntity(161U);
    msg.setDestination(61539U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.733593331776;
    msg.lon = 0.565117929336;
    msg.height = 0.178195083084;
    msg.x = 0.750231293944;
    msg.y = 0.270108770291;
    msg.z = 0.426939149474;
    msg.phi = 0.815348020813;
    msg.theta = 0.905321643803;
    msg.psi = 0.637922067914;
    msg.u = 0.362835122729;
    msg.v = 0.734216370503;
    msg.w = 0.460017661803;
    msg.p = 0.0842320133545;
    msg.q = 0.141682381114;
    msg.r = 0.59180646237;
    msg.svx = 0.347537431674;
    msg.svy = 0.388871801998;
    msg.svz = 0.750884474313;

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
    msg.setTimeStamp(0.433434114642);
    msg.setSource(24987U);
    msg.setSourceEntity(161U);
    msg.setDestination(15279U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.661778607546;
    msg.lon = 0.916823293113;
    msg.height = 0.662460529311;
    msg.x = 0.452642359886;
    msg.y = 0.926116942059;
    msg.z = 0.47652137096;
    msg.phi = 0.645421949534;
    msg.theta = 0.555566385032;
    msg.psi = 0.888072893357;
    msg.u = 0.524286988727;
    msg.v = 0.502595677964;
    msg.w = 0.135022728605;
    msg.p = 0.0884873679239;
    msg.q = 0.915450902903;
    msg.r = 0.421689138917;
    msg.svx = 0.87899474833;
    msg.svy = 0.281280817206;
    msg.svz = 0.664982667791;

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
    msg.setTimeStamp(0.0730250016614);
    msg.setSource(9143U);
    msg.setSourceEntity(42U);
    msg.setDestination(65079U);
    msg.setDestinationEntity(28U);
    msg.op = 205U;
    msg.entities.assign("VXYXYKTMFMJNPCBWBHYKSVMRECWRPHTXNDZIKLPYVESOLFJZEXCUQRHGKLFMLDXDWATUDLOITXVBIBFSHYOEFOXZBIRQCHZHKIRGVKENRSBCNQAV");

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
    msg.setTimeStamp(0.129497890608);
    msg.setSource(35333U);
    msg.setSourceEntity(245U);
    msg.setDestination(9002U);
    msg.setDestinationEntity(242U);
    msg.op = 243U;
    msg.entities.assign("VTAQYBBNOMOYLPUUFIULSUGFIENRBNOZQPKXAEDIHSCTDSISTDGCGQODYNNRHJMHAFZAVWMBAWJUTSYOZIOGZYATDLSPFLMZLHWRZKFXRZTQDJMNEUMNGQGXNWLYBKAJHBCJYPFCVYIXEWJVCCDUIGVEK");

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
    msg.setTimeStamp(0.372545731628);
    msg.setSource(10476U);
    msg.setSourceEntity(93U);
    msg.setDestination(22656U);
    msg.setDestinationEntity(28U);
    msg.op = 176U;
    msg.entities.assign("YAVWRPNBISUDOVRFGYNWRPSNPDZOKAIQXBHDESQULYBIGSFATADEATNIHYGWVUQDLMDSNAQPYBQTTZEXTGMVZKRRWCEHAZTJKOTXXMCOPGBKHZGJFDUYNRYRVOFB");

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
    msg.setTimeStamp(0.50594194523);
    msg.setSource(37506U);
    msg.setSourceEntity(195U);
    msg.setDestination(15457U);
    msg.setDestinationEntity(95U);
    msg.type = 29U;
    msg.speed = 31311U;
    const char tmp_msg_0[] = {7, 1, 92, -61, -80, 106, 12, -114, 103, -85, 88, 60, 50, -101, -66, 29, 43, 110, 11, 9, 32, 61, 107, -80, 1, 84, 76, 35, 106, -38, -1, -41, 46, -126, -64, 97, -80, 72, 3, -124, 80, 106, 29, -18, -16, -73, -62, 103, 41, -23, -100, 50, 71, 61, -48, 108, 72, -43, 33, -31, 22, -101, -110, -66, 126, -107, -83, 101, 18, -58, 58, 92, 105, -21, 71, 105, 13, -4, 31, 103, -8, 92, -77, 93, -51, 116, -21, -98, -105, 86, 122, 116, -106, 83, -52, 62, 104, 113, -89, -36, 111, -29, -43, 94, -81, 56, 115, -118, 21, 52, -119, -40, -57, -114, 84, 101, -70, -50, -70, 85, 7, -8, -32, 61, -42, 1, 49, 81, -22, -34, 84, -11, -56, -106, 101, 46, 35, -96, 37, 107, -73, -5, -122, -97, -20};
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
    msg.setTimeStamp(0.751935512501);
    msg.setSource(13326U);
    msg.setSourceEntity(226U);
    msg.setDestination(35894U);
    msg.setDestinationEntity(198U);
    msg.type = 234U;
    msg.speed = 60442U;
    const char tmp_msg_0[] = {32, -8, 69, 90, 119, -91, 66, 96, 111, -77, 1, 51, -64, -112, -44, 50, 121, -106, -102, -14, 92, -89, 34, -43, 25, 77, 26, -89, 20, -117, 69, -88, -12, 96, -123, -15, 115, -86, 115, -103, -69, -48, -3, -77, -72, -107, -64, -15, 41, -66, -88, -13, -127, -31, 12, 28, 75, 16, 61, -57, 38, -93, 36, 86, -52, -122, -65, -72, -119, -70, 97, 70, 63, 41, 87, -21, 0, -98, -84, -21, -39, 1, 60, 23, -81, 119, -109, -20, -70, 55, 52, 115, -102, 61, -27, -17, -70, -106, -110, 44, 100, 26, 62, 77, -99, -32, 83, 40, -86, -90, 100, -53, -103, -60, 23, 54, -115, 34, 43, -104, 73, -99, 47, 31, -84, -87, 82, 15, 110, -58, -47, -39, -82, -84, -108, 39, -101, -30, -44, -96, -23, 47, 117, 83, -52, -107, 122, -81, -101, -123, -1, 46, -15, 59, 104, -102, 68, 76, 45, -100, 48, -80, -68, -126, 3, -13, 119, 115, -121, -75, -65, -44, -42, -67, 29};
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
    msg.setTimeStamp(0.921901094953);
    msg.setSource(14615U);
    msg.setSourceEntity(123U);
    msg.setDestination(55345U);
    msg.setDestinationEntity(127U);
    msg.type = 244U;
    msg.speed = 61597U;
    const char tmp_msg_0[] = {51, -91, 78, 103, 24, 2, 103, -82, 78, -26, 101, -85, -27, 91, 31, 34, 84, -71, 115, 12, -34, 5, 34, -15, -100, 99, 53, 94, -122, -102, 61, 100, -3, -43, -70, -65, 23, 7, -4, 101, 87, 3, 101, 37, -128, 28, 55, 28, 75, -96, 5, 18, -125, 94, 60, -26, 5, -25, -120, -17, -69, -116, -70, -38, -77};
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
    msg.setTimeStamp(0.166085502352);
    msg.setSource(58992U);
    msg.setSourceEntity(62U);
    msg.setDestination(35636U);
    msg.setDestinationEntity(101U);
    msg.op = 45U;
    msg.tas2acc_pgain = 0.168979035581;
    msg.bank2p_pgain = 0.838441480347;

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
    msg.setTimeStamp(0.859603827649);
    msg.setSource(59997U);
    msg.setSourceEntity(233U);
    msg.setDestination(36731U);
    msg.setDestinationEntity(52U);
    msg.op = 149U;
    msg.tas2acc_pgain = 0.529292582554;
    msg.bank2p_pgain = 0.686593128809;

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
    msg.setTimeStamp(0.177758894326);
    msg.setSource(49334U);
    msg.setSourceEntity(245U);
    msg.setDestination(38487U);
    msg.setDestinationEntity(132U);
    msg.op = 212U;
    msg.tas2acc_pgain = 0.37865895175;
    msg.bank2p_pgain = 0.779820108901;

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
    msg.setTimeStamp(0.303871393244);
    msg.setSource(64956U);
    msg.setSourceEntity(249U);
    msg.setDestination(62482U);
    msg.setDestinationEntity(6U);
    msg.available = 3922201815U;
    msg.value = 137U;

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
    msg.setTimeStamp(0.257760380144);
    msg.setSource(60326U);
    msg.setSourceEntity(85U);
    msg.setDestination(19823U);
    msg.setDestinationEntity(223U);
    msg.available = 646754763U;
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
    msg.setTimeStamp(0.405433666142);
    msg.setSource(47961U);
    msg.setSourceEntity(135U);
    msg.setDestination(22746U);
    msg.setDestinationEntity(118U);
    msg.available = 2376532637U;
    msg.value = 184U;

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
    msg.setTimeStamp(0.0109811661458);
    msg.setSource(8528U);
    msg.setSourceEntity(28U);
    msg.setDestination(41420U);
    msg.setDestinationEntity(46U);
    msg.op = 235U;
    msg.snapshot.assign("FOLYJVHQZCMQPIBHDEGRTAACKOWTPUUTKZJNWARVAVZNEYVDIYIEMBLBXORMNHQOGMARUCDUDBYYSRYGFBIEFCFPALHNDYFXLCTOZLOOBJGDUMLIRPSBRDRXPUKNYG");
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.739644268227;
    tmp_msg_0.m = 0.0339772814483;
    tmp_msg_0.n = 0.160839433279;
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
    msg.setTimeStamp(0.0558710846395);
    msg.setSource(35305U);
    msg.setSourceEntity(41U);
    msg.setDestination(25437U);
    msg.setDestinationEntity(100U);
    msg.op = 81U;
    msg.snapshot.assign("HZIKJOKVGFEEJLOQMPUMQMRNCZKIAPTTBSUYWNBVEQIORHGREFQJXYZSDZFSALAZMEFXMWBRFIMVQDAYEPUDQHSJYGOGZNEGBWUWXHDBWTVKOTFSTPBG");
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.670352010244;
    tmp_msg_0.base_lon = 0.625457650148;
    tmp_msg_0.base_time = 0.273740954052;
    const char tmp_tmp_msg_0_0[] = {89, 0, -115, 100, -88, 117, -16, -46, 113, 98, 27, -50, -101, -80, 24, 67, 60, 48, 65, -84, -38, 101, -87, 59, 115, -32, -82, 37, -88, 40, -99, 66, -73, 97, 102, -61, -6, -97, 45, -53, -126, 27, 104, -111, -1, -50};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.947833945273);
    msg.setSource(11561U);
    msg.setSourceEntity(88U);
    msg.setDestination(45570U);
    msg.setDestinationEntity(153U);
    msg.op = 218U;
    msg.snapshot.assign("HWZBZBDTODFFXSDUCNOQKMUWPLPFWSKRYZIVZVWRROQWHZXEDRZOEUTFPIHBLPNBSXVJDGQIBJUTVYLIAESGHIAJQAZDCAQRQIKZCNFZPUMGYGSFCRJXJLSDGKEMVB");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 7830U;
    tmp_msg_0.lat = 0.193111502199;
    tmp_msg_0.lon = 0.901542595833;
    tmp_msg_0.z = 0.993447648357;
    tmp_msg_0.z_units = 28U;
    tmp_msg_0.speed = 0.352502118378;
    tmp_msg_0.speed_units = 133U;
    tmp_msg_0.bearing = 0.0638724912609;
    tmp_msg_0.cross_angle = 0.193647095516;
    tmp_msg_0.width = 0.283423243809;
    tmp_msg_0.length = 0.0591608797117;
    tmp_msg_0.hstep = 0.043105265638;
    tmp_msg_0.coff = 67U;
    tmp_msg_0.alternation = 235U;
    tmp_msg_0.flags = 18U;
    tmp_msg_0.custom.assign("VULBGSAWJPEVFKWZHTERTOPWIBGEODBRKGEKVWPNOQFHTZUQAKLTOZVXXCGHIHRJXYMAWSJGIYFQFNMNNIZNTGXCNEIOYMHJSEWRISEAVNHKAYGQXLHJSPOTCLUPUTFDBAOWSMYFLHQCILTPRPPCKUXXOGKSBJDPQZVAQWYKZCBCKSVTAIHYWUDBKUM");
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
    msg.setTimeStamp(0.852052920936);
    msg.setSource(30864U);
    msg.setSourceEntity(43U);
    msg.setDestination(44610U);
    msg.setDestinationEntity(151U);
    msg.op = 243U;
    msg.name.assign("OQHSAKLAXMZXXITVCDZLHQHCBBCJQDKMXQASOQATTETJIZPKYNKEGNPMVXRTCHJXUVEYDOWQCNAPKLWZNUGGPAJTHFOVHMMUIYUBSELZZDVLCWEOICYUFGFTOKU");

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
    msg.setTimeStamp(0.824748342041);
    msg.setSource(31151U);
    msg.setSourceEntity(184U);
    msg.setDestination(65155U);
    msg.setDestinationEntity(205U);
    msg.op = 150U;
    msg.name.assign("BPNGQDEMKWBMLMOATMDILZQVECFGMKBMIHJBPXMJXSCAX");

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
    msg.setTimeStamp(0.0690502907253);
    msg.setSource(46523U);
    msg.setSourceEntity(149U);
    msg.setDestination(61058U);
    msg.setDestinationEntity(49U);
    msg.op = 15U;
    msg.name.assign("RYKROAIKSDRCHGZCTLXEAPWIWBVMSEHDCVIZKGRQTEGHYCFTEQIBTBOFVFDJKIHMUPXQDVPYUWYTVZBLRQUTZWBKKXMLSRRSELQOAZLEDNVPKZNWWBLUBOWPJSJHYXIKPDFZSVEZYA");

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
    msg.setTimeStamp(0.3511832379);
    msg.setSource(27365U);
    msg.setSourceEntity(124U);
    msg.setDestination(21883U);
    msg.setDestinationEntity(178U);
    msg.type = 4U;
    msg.htime = 0.488833473883;
    msg.context.assign("NPUUHVSEFSMYVLBJFDMXAPBYEFUOMDUTEXZBHLQILEZCUEAYLKCRGRCGVVWDCECRSRGSNWZYPFOLDYNNQKXYFTOTILDLAWQVSXXHOYOZUGZQEMUTFMKMYGARXKFPLDWNCSQRNHHDRQDTCQBB");
    msg.text.assign("CRPNJSQBCIRQIRMGTKVAIHJVVCDLWUDMLYUWMWSZHKSDUBMYCFQFAAYXNGYCINGVWPZESECKKPVRIYBOTFWEGTVGOBKQHNCRDAEHHP");

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
    msg.setTimeStamp(0.914961087453);
    msg.setSource(9168U);
    msg.setSourceEntity(148U);
    msg.setDestination(31702U);
    msg.setDestinationEntity(155U);
    msg.type = 244U;
    msg.htime = 0.856293474798;
    msg.context.assign("ZCJIQAFWAZQLINNICJHMMOIKRTXHIXRRQQJTUABWBASPQLBOMPSO");
    msg.text.assign("EFWSMXEWPQQNNWOAOVLXOWYLPBWWABKOJCGGTFDYQDKETUNQIRRZMVAIWKZMKSUHERBQSIACTPWCLPRPCIHDGKTYPZULPJDHLMDFJGYBICHUDUCGEYFUOJSVJCACVMZVODX");

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
    msg.setTimeStamp(0.0599409675064);
    msg.setSource(13564U);
    msg.setSourceEntity(230U);
    msg.setDestination(46215U);
    msg.setDestinationEntity(159U);
    msg.type = 114U;
    msg.htime = 0.183845258494;
    msg.context.assign("FNRIVWVFHCHOJRMDXRBEYHZJAKFZGHFEQDJICOLSILTEMEJUBLSJKQHMAMWDACEALXEXAUFVUVUDTCAMUPYLPTZFXPTDOZQEQPDXZXNZVQVWSMMFRVBUCCYWWHFBJTOPNOPLBWIVHGVIPSCJDRPZQKZRPSKMKHAXRHYSKITGGBGMGOLEQXBWGYBYNCJLOSTPNAJDSCLUNIBYNOOIQ");
    msg.text.assign("JMHNQAKCMCWRPRQXJJSUVXBAICBVZWTMRRVMECOJYKIDAGMKLOFAEDSDEDBZQZGHRUDUUGQTBR");

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
    msg.setTimeStamp(0.750765594357);
    msg.setSource(41418U);
    msg.setSourceEntity(232U);
    msg.setDestination(56091U);
    msg.setDestinationEntity(208U);
    msg.command = 241U;
    msg.htime = 0.405904384203;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 71U;
    tmp_msg_0.htime = 0.0108687516955;
    tmp_msg_0.context.assign("BOGFNEXXWWOPYYHNGBTJBBXLSFDRZBYCZLUJGCNUDCQONIRCVYVEBUAAGMZYUHKONOETVPTRWJGQWATXQTBMTXKUPVTWGDECGDPPZIACQEHKMEVVDLLOJGAXGEJCMYDAHZSEXZVTIFIPDPFVVQZKWHFGQLUKNSHUZLSOFKIFMDQRXIMMJSSRSAWLDZMZNLJNQMUFYIXBYVDSICRCESHNPJHQRPIKHRWJOHXKAIMTJQLUUCOASAWKBFRFOBR");
    tmp_msg_0.text.assign("ABYHWUNXESSIICQUBBWDTBBOSKZWEEZIAUJKFOUCBDMKKLPDQEKRAJWPMALBQZMFRIYZQUORDTCVOPIWJYHHBLTSSIKEICGHCZPDIQCMLVXSKMSBAPPJCGRSLCQWMXUFXWJWESMNPURXNWMCOGVYKHLHPNAQFCXFEZJXNDFYVLZPJEAXZMGZDDQHYLONNJEGAQVLVFOGTELPAIDDVGGKUIFQTTHJROXFVFYRRBTJ");
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
    msg.setTimeStamp(0.744951287841);
    msg.setSource(46443U);
    msg.setSourceEntity(182U);
    msg.setDestination(43674U);
    msg.setDestinationEntity(239U);
    msg.command = 14U;
    msg.htime = 0.113744164445;

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
    msg.setTimeStamp(0.543213160202);
    msg.setSource(383U);
    msg.setSourceEntity(147U);
    msg.setDestination(38276U);
    msg.setDestinationEntity(157U);
    msg.command = 73U;
    msg.htime = 0.200806960426;

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
    msg.setTimeStamp(0.322527472597);
    msg.setSource(42112U);
    msg.setSourceEntity(194U);
    msg.setDestination(60411U);
    msg.setDestinationEntity(254U);
    msg.op = 197U;
    msg.file.assign("RCRZUCCQZMSVTJZHUACBSLZGVDFBXXRRQQSNGHTZHRXVFTSYXOMDBWEKXWYBZAEENTLVOSAKPORLHSBXRVTCMFGVOWXHHFXCNHGAEWJDAXYMDBZNJOJLJOPYTBEOGNYGANIZEUYNKSBDFDYWPIQNKKYFUWEAYMLCAICLPMUWRDQXUQBEPGTMVDMGGKOTUUSQIJOSEK");

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
    msg.setTimeStamp(0.50963983154);
    msg.setSource(43550U);
    msg.setSourceEntity(101U);
    msg.setDestination(56430U);
    msg.setDestinationEntity(137U);
    msg.op = 13U;
    msg.file.assign("ZZAMQSTBUKOIYSJHZSEJQIDCEDQXEIVPYUSNPQPCMWHAKCRHFRKBFDENWXIRASVTCWRVJWKZMJZKMBBWJKCBADOVAEORNGGXFJLYABOWCAFUMTDPXZBHP");

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
    msg.setTimeStamp(0.946435892996);
    msg.setSource(21366U);
    msg.setSourceEntity(193U);
    msg.setDestination(30228U);
    msg.setDestinationEntity(177U);
    msg.op = 234U;
    msg.file.assign("EWXWXMFJSWYDOVC");

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
    msg.setTimeStamp(0.33211518778);
    msg.setSource(44142U);
    msg.setSourceEntity(133U);
    msg.setDestination(40138U);
    msg.setDestinationEntity(78U);
    msg.op = 160U;
    msg.clock = 0.851506301445;
    msg.tz = -113;

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
    msg.setTimeStamp(0.497094073739);
    msg.setSource(15204U);
    msg.setSourceEntity(42U);
    msg.setDestination(16934U);
    msg.setDestinationEntity(122U);
    msg.op = 218U;
    msg.clock = 0.105347326921;
    msg.tz = 41;

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
    msg.setTimeStamp(0.905754848042);
    msg.setSource(54268U);
    msg.setSourceEntity(59U);
    msg.setDestination(9315U);
    msg.setDestinationEntity(94U);
    msg.op = 168U;
    msg.clock = 0.66821660934;
    msg.tz = 62;

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
    msg.setTimeStamp(0.449505903892);
    msg.setSource(27868U);
    msg.setSourceEntity(120U);
    msg.setDestination(57668U);
    msg.setDestinationEntity(159U);
    msg.conductivity = 0.870154376871;
    msg.temperature = 0.703108716576;
    msg.depth = 0.13634142677;

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
    msg.setTimeStamp(0.477930275256);
    msg.setSource(25100U);
    msg.setSourceEntity(57U);
    msg.setDestination(52936U);
    msg.setDestinationEntity(35U);
    msg.conductivity = 0.800104717538;
    msg.temperature = 0.984001656148;
    msg.depth = 0.409301430225;

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
    msg.setTimeStamp(0.718382254308);
    msg.setSource(54232U);
    msg.setSourceEntity(154U);
    msg.setDestination(13052U);
    msg.setDestinationEntity(6U);
    msg.conductivity = 0.635598355426;
    msg.temperature = 0.855443166095;
    msg.depth = 0.312469095788;

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
    msg.setTimeStamp(0.759642527507);
    msg.setSource(8679U);
    msg.setSourceEntity(63U);
    msg.setDestination(17493U);
    msg.setDestinationEntity(144U);
    msg.altitude = 0.00569324019592;
    msg.roll = 22556U;
    msg.pitch = 35253U;
    msg.yaw = 2364U;
    msg.speed = 28145;

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
    msg.setTimeStamp(0.264363038354);
    msg.setSource(7487U);
    msg.setSourceEntity(68U);
    msg.setDestination(62166U);
    msg.setDestinationEntity(122U);
    msg.altitude = 0.936079198745;
    msg.roll = 55864U;
    msg.pitch = 63655U;
    msg.yaw = 19349U;
    msg.speed = -2613;

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
    msg.setTimeStamp(0.6641713424);
    msg.setSource(53519U);
    msg.setSourceEntity(142U);
    msg.setDestination(47440U);
    msg.setDestinationEntity(157U);
    msg.altitude = 0.811107421643;
    msg.roll = 43488U;
    msg.pitch = 57653U;
    msg.yaw = 50517U;
    msg.speed = -15131;

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
    msg.setTimeStamp(0.0720017654502);
    msg.setSource(26169U);
    msg.setSourceEntity(105U);
    msg.setDestination(20464U);
    msg.setDestinationEntity(218U);
    msg.altitude = 0.0792896722333;
    msg.width = 0.558732354015;
    msg.length = 0.45700134486;
    msg.bearing = 0.309602727199;
    msg.pxl = 4555;
    msg.encoding = 231U;
    const char tmp_msg_0[] = {-31, -85, -126, -2, 50, -19, -42, 126, 50, 28, 5};
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
    msg.setTimeStamp(0.115343550754);
    msg.setSource(50462U);
    msg.setSourceEntity(124U);
    msg.setDestination(43382U);
    msg.setDestinationEntity(13U);
    msg.altitude = 0.570841975224;
    msg.width = 0.453900190361;
    msg.length = 0.211231988526;
    msg.bearing = 0.93720821649;
    msg.pxl = 4283;
    msg.encoding = 186U;
    const char tmp_msg_0[] = {56, -101, -29, 88, -93, 97, -70, -69, 13, 108, -84, 33, 47, -95, 18, 41, 5, 23, -39, 46, 36, 88, -28, -12, 13, -94, -69, -82, 75, -45, -68, 1, 5, 42, 21, 86, 49, 119, -7, 79, -85, -105, 120, -10, 106, 70, -37, -107, -22, -66, 60, -53, 62, -63, -110, 11, 108, 87, 100, -1, -20, -38, -33, -36, 1, -47, 44, 42, -50, 105, 68, 87, 103, 0, -94, -2, -97, -60, -33, -33, -34, -61, -32, -27, 106, 57, -13, -114, -128, 4, -20, -128, -75, -79, -115, -105, -118, 124, 61, 64, -102, 57, 99, 35, 39, 25, 27, -125, -12, -59, 42, 78, 8, 114, -27, -9, 120, -39, -79, -71, 107, 88, 14, 3, 56, -27, -70, 110, -82, -107, -57, 96, 6, -118, -35, -88, 86, 25, 102, 96, 53, 87, 100, -106, -33, 43, 44, -102, 20, -37, 8, -51, 92, -122, -55, -103, 5, 5, -83, -89, -106, -8, -74, 120, -9, -105, 101, 91, 25, -112, -128, 126, -70, 41, -66, 60, 79, -88, -15, 117, 42, -29, 71, -80, 43, 78, -32, -26, 123, -42, -82, -105, -83, 51, -124, 83, -66, 48, 97, 97, -80, 115, -118, -66, -125, -37, 38, -104, -93, 18, 106, -36, -104, -21, -1, 28, -46, 116, 0, -100, -66, -82, 38, 62, 7, -54};
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
    msg.setTimeStamp(0.173026907948);
    msg.setSource(23246U);
    msg.setSourceEntity(56U);
    msg.setDestination(16139U);
    msg.setDestinationEntity(246U);
    msg.altitude = 0.747330299286;
    msg.width = 0.554618494935;
    msg.length = 0.123764110248;
    msg.bearing = 0.238620638157;
    msg.pxl = -9426;
    msg.encoding = 41U;
    const char tmp_msg_0[] = {122, -2, 40, 68, -116, -24, 117, 9, 106, -59, -76, -53, -112, -39, -45, -44, -93, -52, 24, 35, -78, 12, -5, 58, 123, -34, 22, -116, 86, -39, -67, -49, 36, -49, 33, -95, 33, 117, 7, 114, 43, 9, -46, -66, -40, 83, -74, -20, -41, 80, 34, 42, 87, 15, -78, 75, 125, 19, -105, 72, -15, 66, -16, 82, 80, 7, 55, -7, 85, -79, -23, -9, -82, 59, 19, 111, -38, 17, -53, 57, -68, 104, 126, 107, 78, -83, -108, 29, -49, -40, -75, 68, -70, 54, 44, 7, 87, -36, 67, 78, 15, 54, -94, 78, 111, 41, -57, -32, -7, 7, -10, -62, 33, -108, 78, 99, -80, 65, 18, 13, -22, 11, -101};
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
    msg.setTimeStamp(0.930986536017);
    msg.setSource(9130U);
    msg.setSourceEntity(176U);
    msg.setDestination(45998U);
    msg.setDestinationEntity(151U);
    msg.text.assign("DWPPMLGRCOVKQOJLHRXYEKSRANFUASTISEOMMYNWFFKXJKIJRXKLRENJGOVMXCYIEWRFHQTERLJAOKCDHZJHOUMMWDODKPGQLFVLUTALZEBG");
    msg.type = 107U;

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
    msg.setTimeStamp(0.514361458705);
    msg.setSource(39153U);
    msg.setSourceEntity(153U);
    msg.setDestination(28233U);
    msg.setDestinationEntity(92U);
    msg.text.assign("UJQJDDDKDXAFABQZKJGVQBDBINXQKMLHZIUZOLWHYDQKHNVROLWFQGCEYYIUBECWYKFOCTYEJVVAIXLWZDMZIQFGLAZOSHEBVAWMFFPGGEOEZACXIOHTBHMSPIVRXPYUCPJXZSSUEIUNYRLKRPBDURPCANXJJMTFICGYEPSPZMXRWDUEADNERPSMZCTTWUYMWTAVLJKNXWNPGLGAMKJ");
    msg.type = 93U;

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
    msg.setTimeStamp(0.184070898994);
    msg.setSource(47814U);
    msg.setSourceEntity(30U);
    msg.setDestination(27145U);
    msg.setDestinationEntity(240U);
    msg.text.assign("RGNPAXCPVMDVSBMDJRJMQYWEEZRRKTVSMILLLDSWGQCKSYTJEPLRDIQOXGAECNLPGTIIAPWANKCVKYDFGKBBVVSPNSPZQQFUEMJJHLGHHIAOPOYDYAFWQWCUX");
    msg.type = 91U;

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
    msg.setTimeStamp(0.00853766830204);
    msg.setSource(14609U);
    msg.setSourceEntity(226U);
    msg.setDestination(27640U);
    msg.setDestinationEntity(186U);
    msg.parameter = 211U;
    msg.numsamples = 135U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 53833U;
    tmp_msg_0.avg = 0.26935455718;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.469643062704;
    msg.lon = 0.242664910429;

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
    msg.setTimeStamp(0.349053068881);
    msg.setSource(24496U);
    msg.setSourceEntity(232U);
    msg.setDestination(62760U);
    msg.setDestinationEntity(189U);
    msg.parameter = 59U;
    msg.numsamples = 47U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 24804U;
    tmp_msg_0.avg = 0.151407028782;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.485377522508;
    msg.lon = 0.942710448442;

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
    msg.setTimeStamp(0.577286439424);
    msg.setSource(44358U);
    msg.setSourceEntity(122U);
    msg.setDestination(43398U);
    msg.setDestinationEntity(128U);
    msg.parameter = 24U;
    msg.numsamples = 30U;
    msg.lat = 0.446579709454;
    msg.lon = 0.122509188287;

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
    msg.setTimeStamp(0.786826197376);
    msg.setSource(35814U);
    msg.setSourceEntity(106U);
    msg.setDestination(61113U);
    msg.setDestinationEntity(205U);
    msg.depth = 50958U;
    msg.avg = 0.119953803893;

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
    msg.setTimeStamp(0.375698831586);
    msg.setSource(15098U);
    msg.setSourceEntity(132U);
    msg.setDestination(48818U);
    msg.setDestinationEntity(245U);
    msg.depth = 8382U;
    msg.avg = 0.288583960659;

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
    msg.setTimeStamp(0.473790299932);
    msg.setSource(60110U);
    msg.setSourceEntity(47U);
    msg.setDestination(45600U);
    msg.setDestinationEntity(144U);
    msg.depth = 43941U;
    msg.avg = 0.424675017791;

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
    msg.setTimeStamp(0.299479539041);
    msg.setSource(48200U);
    msg.setSourceEntity(62U);
    msg.setDestination(63894U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.971454117369);
    msg.setSource(12975U);
    msg.setSourceEntity(70U);
    msg.setDestination(41946U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.525081115161);
    msg.setSource(24305U);
    msg.setSourceEntity(12U);
    msg.setDestination(19629U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.29798858666);
    msg.setSource(13494U);
    msg.setSourceEntity(121U);
    msg.setDestination(48449U);
    msg.setDestinationEntity(183U);
    msg.sys_name.assign("GYWUDBJQTLBGFFLTCDUIYGMVLNBEGHZUXZUSUMSIOFKONUNJOEJIMILTRFZXVECFGAXOYHHUVRTLWERHVHKFHTKICXGGMSIQOZLSBWCZPBWKH");
    msg.sys_type = 41U;
    msg.owner = 51436U;
    msg.lat = 0.0568279890672;
    msg.lon = 0.68042508136;
    msg.height = 0.748375116233;
    msg.services.assign("ZZKOKGHHTUPABRDARVPZFYDUNGDOXLRWZJOUYHKPWNBYLBOSRSLUKVTXFRMJHNJIN");

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
    msg.setTimeStamp(0.71299161054);
    msg.setSource(51029U);
    msg.setSourceEntity(39U);
    msg.setDestination(13681U);
    msg.setDestinationEntity(153U);
    msg.sys_name.assign("MAWVLMRYOHKNNXDKPWUTXVKQTPRUIFDYBJRCWAIHQSFOTWLZAHIWCJGJQYYMANWKZFDXGYLEBWBIJCFFXDIKMCSTJSGQENUPOCEVHKGZASOHBGCYEKIQKVORCBYXMEYODHPUTJJNVS");
    msg.sys_type = 74U;
    msg.owner = 52930U;
    msg.lat = 0.399917068664;
    msg.lon = 0.617523857162;
    msg.height = 0.0513204198349;
    msg.services.assign("DLDSUNXVMBRPCXXFLOKCKDGYWIGRSUTWAPUCMVMZEFXWQFQGAPTWWNKUAJGOPBBKUJKPTRVSYSEDLCVFXUAZIXKUJGJLHYJITUXBIAHZCWSCXQBGCINOPDHIRCVGTUIFQEWTOHMDALKAPVCY");

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
    msg.setTimeStamp(0.885840748819);
    msg.setSource(23982U);
    msg.setSourceEntity(84U);
    msg.setDestination(62401U);
    msg.setDestinationEntity(251U);
    msg.sys_name.assign("IEQHSQDOPLRICLFBJEDAFZIDKMICNGSKUXMJRWAULILQLZIFSXKMULPBYOJKXSIOKCUPXUXTGZBATWPUJXVOVFGABVLHQLBXOJHYQZDPTMHVRREXPERZCNCNQGYWHFEMRHVKYFUJCGPBDMBZKJTYMI");
    msg.sys_type = 234U;
    msg.owner = 21971U;
    msg.lat = 0.775190189934;
    msg.lon = 0.575661483889;
    msg.height = 0.602303730837;
    msg.services.assign("CUFXWYEEJYIBJLSYCDKDNATXOQDIRTZNTKHRSIIVWDUZXMUJNMRYJCWXFWZPBDIKAIFSQFDKMQGOLJKZQLZDVPAKKNDICLVWRCMJXMQSDSUHGOMBUYPJFOOARRCSRMWIBCPVEWQLSU");

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
    msg.setTimeStamp(0.0845444725124);
    msg.setSource(58211U);
    msg.setSourceEntity(98U);
    msg.setDestination(21129U);
    msg.setDestinationEntity(202U);
    msg.service.assign("GMLKOBKAJBONRY");
    msg.service_type = 248U;

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
    msg.setTimeStamp(0.910646987765);
    msg.setSource(41190U);
    msg.setSourceEntity(231U);
    msg.setDestination(20072U);
    msg.setDestinationEntity(121U);
    msg.service.assign("FMVKKGGPAAAHYJIOGMHHQSRKJBLRUYPAQPMLBCZFALQXDINMDTZFAQOHQJARMRLSSKCGQDGDBNNYIWPVWZIHHRHZWGYXTICBZDSHNWUJMUOEKAXYQJDJSCGOEYWEMDNTTGVFOONZUTSOJ");
    msg.service_type = 37U;

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
    msg.setTimeStamp(0.160892150332);
    msg.setSource(16290U);
    msg.setSourceEntity(226U);
    msg.setDestination(37767U);
    msg.setDestinationEntity(219U);
    msg.service.assign("VRNFTJEUKZQMIMVZVZJCGBARRUSTCUHMDWTBVAPZLTOWFPLWCPRVPXAFKHTSUFDRCVYDMBNHINUHTORUAUMJGYBXOWAXWGXVLYUIZIGXWPRRPAHPKDJY");
    msg.service_type = 189U;

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
    msg.setTimeStamp(0.0106404549659);
    msg.setSource(60393U);
    msg.setSourceEntity(1U);
    msg.setDestination(49708U);
    msg.setDestinationEntity(125U);
    msg.value = 0.333146878443;

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
    msg.setTimeStamp(0.371838958091);
    msg.setSource(53605U);
    msg.setSourceEntity(110U);
    msg.setDestination(37739U);
    msg.setDestinationEntity(41U);
    msg.value = 0.745567841991;

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
    msg.setTimeStamp(0.74170033674);
    msg.setSource(54547U);
    msg.setSourceEntity(239U);
    msg.setDestination(4468U);
    msg.setDestinationEntity(78U);
    msg.value = 0.299619190011;

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
    msg.setTimeStamp(0.5148889216);
    msg.setSource(21720U);
    msg.setSourceEntity(112U);
    msg.setDestination(56427U);
    msg.setDestinationEntity(104U);
    msg.value = 0.0910540765461;

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
    msg.setTimeStamp(0.600176020948);
    msg.setSource(33131U);
    msg.setSourceEntity(7U);
    msg.setDestination(34016U);
    msg.setDestinationEntity(172U);
    msg.value = 0.0106832380358;

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
    msg.setTimeStamp(0.167933333444);
    msg.setSource(26500U);
    msg.setSourceEntity(165U);
    msg.setDestination(381U);
    msg.setDestinationEntity(217U);
    msg.value = 0.719624998465;

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
    msg.setTimeStamp(0.901794030834);
    msg.setSource(54839U);
    msg.setSourceEntity(44U);
    msg.setDestination(33230U);
    msg.setDestinationEntity(252U);
    msg.value = 0.911348986991;

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
    msg.setTimeStamp(0.532042058815);
    msg.setSource(6041U);
    msg.setSourceEntity(148U);
    msg.setDestination(17316U);
    msg.setDestinationEntity(41U);
    msg.value = 0.0909580176812;

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
    msg.setTimeStamp(0.00830123602317);
    msg.setSource(40771U);
    msg.setSourceEntity(155U);
    msg.setDestination(9955U);
    msg.setDestinationEntity(3U);
    msg.value = 0.942969445059;

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
    msg.setTimeStamp(0.123980111843);
    msg.setSource(14884U);
    msg.setSourceEntity(101U);
    msg.setDestination(32560U);
    msg.setDestinationEntity(43U);
    msg.number.assign("JAVRRCWPDOBQDDGNKJUOKXFUCEZLMLFLLYUNRGISNFWCZBIIHRZYWOYMRTBFGBXDATEXSOGQKVSNMICDQZEUOQCQEBWTGMGUNEKUXXTCJSBDFSGKLSZIHOTXXLJRHMYBOPVABAEZVPGYWPPUQMNKHFZACLRNOEMJSDUADQEKFTLWQIOCWHPAFLLZIEHIYWJKYVXIVPRYJHWMTBHQFWTCFZMEDQZSJGOVB");
    msg.timeout = 46552U;
    msg.contents.assign("UWRPPLPKJJICFJURNJHNVHSIFJENLHQWDIWDORYKVIRTZPVFXATCSTYPZKURGOKKGDTEFLQZDUFLOECUAMVBMGNMXHTOMUXYXWTCGUMKKWXZFELYDJLMQWRYVCLJGZBNGUONOVXFQHIABVHSYAJKLVEAZBQBQSCSHAQBVSOWWQQNZHLIKCEADSQGWXFIEXTJWICZ");

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
    msg.setTimeStamp(0.463648090501);
    msg.setSource(28868U);
    msg.setSourceEntity(23U);
    msg.setDestination(7493U);
    msg.setDestinationEntity(223U);
    msg.number.assign("EMISCCMRZGVUAWHAMZYRCQFQTDEXUKSJFQDRLXRFPQNCERBVNSEOZHLHEYTJWJJDMHTSKXWKYWVGGSOLWIUYEEEAJXLEQHDVFDKMNMQZJOSHAANZYIZZOOKPUOKXAGQNJFASGUTJRTARLHYATXUBXMOVQXBVHPIVXZRJPPLMFBKNLXCNIYDDATZCYFU");
    msg.timeout = 50807U;
    msg.contents.assign("CNAUMKOIVNJPKBWFDQCRVBWPVRFXWBTTLYHGBPOHWEUCFVQPLMUXPKNDQTWSLDHXWAVKJOCKCLMOSGEFXCSVFNKRTEDLJSCNHZDJSEHFAQAREQAHVERVTMTTGSAOGUKPSKMVYIGRUAOYLZEBGG");

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
    msg.setTimeStamp(0.708197383325);
    msg.setSource(50614U);
    msg.setSourceEntity(48U);
    msg.setDestination(57981U);
    msg.setDestinationEntity(117U);
    msg.number.assign("ZXPHOBXNYBQQQHUNEXBTEJNOSOPKUNUYWXJFEQWFL");
    msg.timeout = 6204U;
    msg.contents.assign("VGVWSTFIBNQEMODPSCAALTCPKABTBKDUHLAXDZGWPRUDMUBNXVZHKTIKURJSHCEWLSPBEQZWOYXXOLRZGWIJJJCPZKYMSOSKNWTSZMRXDTUQKRIMRQQVSPEAVFGGINJCTEQFLDHDTOLVNIEBKKMDWUYBZEJAQFNJMCXZRYYYJHBRZNFFHXHGDIQNGTQTAMXLMBEENJSOGZPPDLLSPAUOYBXCLVGUGMHPCWOKUHUE");

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
    msg.setTimeStamp(0.762281534092);
    msg.setSource(32271U);
    msg.setSourceEntity(173U);
    msg.setDestination(54614U);
    msg.setDestinationEntity(22U);
    msg.seq = 3717560019U;
    msg.destination.assign("WHNGRACCIZIYMKSPQGDMEFTJWPOSVHLJRQORLPBKHLSIYEXUCEJSVZMHLOHJDEUIQBKMVTMEBHIAAZELFVLNFRDPNEDRNGAGIDCZBMPQUIHOEWNVVLNNCDGVXFUAFZDPBQKR");
    msg.timeout = 8432U;
    const char tmp_msg_0[] = {-66, 15, 9, -54, 29, -24, 64, 70, -95, -92, -18, 64, 59, -104, -23, -109, -30, -68, 119, -69, 51, 112, 125, 17, 97, -94, -32, 125, -110, 84, 107, 65, -9, 19, 30, -101, -55, -67, -42, 27, -59, 86, 54, 49, 16, -98, -90};
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
    msg.setTimeStamp(0.390407877024);
    msg.setSource(45048U);
    msg.setSourceEntity(223U);
    msg.setDestination(58488U);
    msg.setDestinationEntity(80U);
    msg.seq = 1357700681U;
    msg.destination.assign("FDOCJXIRUBFTQXNTHGYGHTXBLSSQNYUKGUCHOEIJEPCFBMLAPTTIVCYHZXOECUXYPNWDQLSFJDNMLZYLVTACGHQEKKRSLUYZKCUTPIISNPQWQDLFHOMAUBOIDEZPNIEXKBVAPOWSRFWEVHMNPOWZFGFJDWQRJA");
    msg.timeout = 13873U;
    const char tmp_msg_0[] = {-2, 112, 74, -125, 86, -128, 112, -75, -106, 35, -74, 125, -50, -73, 46, 101, -105, -25, -33, -21, 43, 63, -87, 46, 36, 16, -96, -104, 46, -121, -63, -50, 104, 110, 87, 10, -82, -44, 124, -127, 55, 35, -83, -31, -15, -10, 52, -43, -111, 71, -124, -118, -127, 11, 74, 108, 48, -122, -27, 12, 115, -67, -64, 39, -11, -101, -31, 49, 5, -44};
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
    msg.setTimeStamp(0.697771468696);
    msg.setSource(46631U);
    msg.setSourceEntity(9U);
    msg.setDestination(19023U);
    msg.setDestinationEntity(234U);
    msg.seq = 2529681841U;
    msg.destination.assign("PBTWZQEUQBHDJVLOUOMOYTFGKPAFNMBTAPINJUOSPGUGWZHJAWSFXBSINCTTOEMMUEHSCXZYIAIRLJEKYSEPVRCJADKGHOVDHZWFHPDLLBZCBFZIRJ");
    msg.timeout = 63781U;
    const char tmp_msg_0[] = {34, 38, 120, 44, -68, -7, 73, 72, 20, 119, 104, 2, 25, 93, 41, -49, -73, 118, -39, -37, -48, 27, -123, -112, -82, -56, -44, 75, -51, -3, -24, -52, -122, -38, -73, -72, 56, 47, -69, -2, 116, -70, 6, 103, -13, 77, 36, 48, -81, 5, -84, 47, -81, -27, 81, -94, -28, 30, 77, -10, 8, -66, -2, 96, -87, -97, -121, -71, 114, -122, -113, 42, -21, -6, 23, 14, -109, -44, -7, -40, -120, -116, -74, -26, -65, -8, -51, 1, -126, 25, -98, 105, 47, 5, -67, 10, 92, 87, -92, 62, -107, -126, -96, -9, 67, -68, 53, -29, -39, -22, -67, 35, 50, 38, 4, -36, 1, -100, 12, 0, -75, 107, 48, -32, 90, 90, 85, -66, 84, 29, -105, -34, 101, 81, 120, -20, 65, -27, 22, -96, 54, 4, -99, 23, -22, 59, -39, -48, 44, 21, -65, 59, -83, -97, 63, -124, 75, 101, 67, -8, -37, 49, -41, -25, -58, 107, 19, 41, -29, 80, 121, -62, 82, 49, 87, -105, -124, 51, -41, 14, 122, 47, -78, -123, -18, 44, 3, -72, 59, -127, 66, 43, -85, 4, -101, 51, 91, 32, 102, 59, 65, -82, -79, -41, -104, 97, 123, -30, -98, 122, -71, 48, 94, -39, -28, 55, -17, -11, 74, 116, 101, -101, -125, 7, 25, 116, 2, -50, -7, -45, 98, -86, 44, -56, 40};
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
    msg.setTimeStamp(0.43811493435);
    msg.setSource(37453U);
    msg.setSourceEntity(203U);
    msg.setDestination(17404U);
    msg.setDestinationEntity(106U);
    msg.source.assign("YFZPIUPZBTNALCOMRVYXERITKUGITQIMNHZZBSBBVHCHFNAHIISKIDFNJLWEWYJYVBRFASDZ");
    const char tmp_msg_0[] = {51, -108, -34, 33, 66, -109, 19, -59, 50, 103, 119, -102, -125, 11, -16, -44, -31, 47, 96, -98, 44, 46, -66, 79, 83, 7, -8, -10, 11, -13, -64, -17, -66, 106, -116, -63, 46, -104, 68, -3, -99, -45, 122, -125, 54, 75, -6, -91, -12, -54, -23, 26, 19, 64, 30, -9, 19, 79, 109, 74, 78, 77, -63, -49, 9, -84, 119, -19, 67, 27, -70, 65, -82, 22, 34, 50, -54, 58, -26, -75, -44, -67, -9, -60, 117, -43, 77, 6, -25, 113, -28, 95, 117, 46, -1, -126, 69, 117, -113, 109, -1, -30, -111, -119, -99, -116, -113, 75, 13, -51, 44, 53, -59, 3, -51, 22, 83, -123, 126, -119, -103, 52, -57, 0, -83, 3, 60, 90, 24, 66, -64, 117, -106, -2, 43, -87, -61, 32, -34, 92, -16, -42, -28, 23, 11, 19, 45, -33, -98, 47, -48, 37, -5, -41, 100, -93, 43, 92, 115, 102, -23, 55, -18, 96, -61, 105, -48, 33, 70, -67, -116, 16, -24, 41, 123, -19, -7, -65, 40, 51, 121, -112, 97, 77, -37, -28, 38, 10, 119, -1, 91, -113, -36, -34, 110, -77, 13, 8, -46, 12, 61, 105, 15, 60, 35, -2, 58, 5, 87, -65, -128, -101, 61, -6, 46, 104, -82, 80, 82, -78, -92, -119, -60, 86, 41, -26, 26, -38, 79, -84, 12, 12, -115, -97, -38, 58};
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
    msg.setTimeStamp(0.624010499725);
    msg.setSource(37377U);
    msg.setSourceEntity(236U);
    msg.setDestination(56979U);
    msg.setDestinationEntity(141U);
    msg.source.assign("GWOFRIBFPWKMKHWIRQCYIHAKJWOZOZGDNMDVWYUKITJINCNUAKTTZQDWNJEEESGNELZXRFGFJSHCUPMWZOPLKNCORUQHMEADKRXVWOBURLVMUZZHWXAHJKRPBBLCTJWTBLPEBZMEBSPAHTBOASRRPDPMX");
    const char tmp_msg_0[] = {-118, 13, 32, 42, 20, -68, 61, 23, 76, 19, 108, 110, -75, 6, 69, -4, 57, -92, 115, 39, 106, 111, 19, 78, 3, 83, -22, 12, -32, 119, -63, 122, 75, 23, -128, 77, 112, 61, 96, -61, 50, -20, 93, 110, 112, -89, -117, -122, 61, -15, -101, 38, 84, -54, 11, 7, -126, 125, -114, 122, 30, -14, 32, 44, 85, -99, 119, -125, 45, -32, 59, 120, -1, -126, -67, 114, -76, 74, -30, -100, 95, -101, 65, -117, -38, 69, -54, 107, 50, -20, -23, 38, -10, 53, -99, 12, -69, 66, -1, 64, -99, -100, -77, -111, 45, 43, -11};
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
    msg.setTimeStamp(0.0193911717472);
    msg.setSource(33740U);
    msg.setSourceEntity(21U);
    msg.setDestination(14692U);
    msg.setDestinationEntity(166U);
    msg.source.assign("XCQUBHJWNPFUT");
    const char tmp_msg_0[] = {-124, -78, -3, 113, -9, -124, 46, 79, 45, 112, -3, 39, -79, 68, 52, -22, -9, 70, -56, -51, 90, 125, -77, 119, -4, -46, -18, 20, 108, -75, 104, -27, -16, 113, -61, -46, -93, -33, 103, 19, 114, 86, 80, -12, -91, -112, 42, 61, -64, 15, -108, -120, -128, 81, 118, -38, 0, 121, 61, 87, -9, -52, -54, -61, -24, -9, -117, -76, -60, 107, -127, 42, -86, -2, -52, -67, -106, 68, -95, -10, -109, -126, 39, 96, 122, 113, 112, -91, -116, 83, 22, -13, 32, 49, 93, 90, -107, 0, -79, 31, -36, 48, -111};
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
    msg.setTimeStamp(0.203734198135);
    msg.setSource(19292U);
    msg.setSourceEntity(107U);
    msg.setDestination(40518U);
    msg.setDestinationEntity(94U);
    msg.seq = 3494412391U;
    msg.state = 203U;
    msg.error.assign("GLOIRUAGJJTOSCZCKYGGEWKXCHEMDERRSOSCEXGEFUJSMWAUUTMAJZRLOFVZWCNEUMFDBGNDGTNTARFPUWBARFHPAQVZBECUJHCBEBWIOVRWLAAUVYBWYPSMQDWXYNQDRPMIJXTZPOZZLOQOIBKIPXQPZNPUAFFEWXGSJOFWXQMVVHBVKORNIJGDIDPTKQBVBZFCHYHHLDKDEHXLXLKMLQRPGJTHTSIYDTNZ");

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
    msg.setTimeStamp(0.032581585755);
    msg.setSource(50198U);
    msg.setSourceEntity(167U);
    msg.setDestination(25848U);
    msg.setDestinationEntity(44U);
    msg.seq = 2909713071U;
    msg.state = 209U;
    msg.error.assign("YFTJPXNBTMEEMOLZOOFFAMFAIZHBKSBRPWFXXMQNXHIFYEZNRSJZXZLQJMKXATKRONQCAEKRBUVRUF");

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
    msg.setTimeStamp(0.994296418786);
    msg.setSource(61348U);
    msg.setSourceEntity(103U);
    msg.setDestination(43092U);
    msg.setDestinationEntity(84U);
    msg.seq = 2755889163U;
    msg.state = 15U;
    msg.error.assign("SEFGEKPBVMCPUFNYECDHRFPSQOURJESXRUUKQLWOCHUOAUNNGVIBHRBKFQQXVNHKDCGZAVQNXSYHWNDBQTVOLGWNXUKGWTZTUOMCLBIEPZOHPKCUAKVHZSZBGBFDHPQAEDOCDXZWEOTJYTKRMXRTLDMWHAVEFEKFPRWBWYC");

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
    msg.setTimeStamp(0.0992444747349);
    msg.setSource(35673U);
    msg.setSourceEntity(99U);
    msg.setDestination(11565U);
    msg.setDestinationEntity(1U);
    msg.origin.assign("RWACVJJOTVGSGGXVWENETWSURKMSFUNQMQSHOSITUQHPJUEJEKRGPTXIEKNVOXMHCJKRQFJMEMFVRAIEYNQIUHLMYODZVBXKDAGKBNNGHCRPVANBILIQIAXBCAKDSZEWMJNCTDRJHLXHYAUPXDIRTGFDW");
    msg.text.assign("CUTRFOJSRTNZYLWFNQGVXOUDYWBJFPGCKGRJDMBUQAHJBTCFSWHNXRRUDFSEXYCCIJMIYAWOHSKXQLAKTWVGUBDLEVDYQCXFDGVORLSWGFBJKZXLACRYIPNBPIVBYJOBAXPDWSTTAZRPOJAZNTHFPDOENQCIVLTSVPQUAOHZHIGKVAZSMEEMEDEFMRVODOWMPLGBIUZHAEWWKQNXNLEZLNFBYPQUKIZNZ");

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
    msg.setTimeStamp(0.652129182623);
    msg.setSource(4116U);
    msg.setSourceEntity(72U);
    msg.setDestination(4008U);
    msg.setDestinationEntity(206U);
    msg.origin.assign("OWNKJWKBZAYOFRPJBROQJTXXNPNWMQBSRXHYZVQKWEISFJFJKCKIUHVWDNWQBAGQPGCGURVVHFSIBFCDDXESRROVLTUYBYKZUZLCQAELAYLPJVMLTPWSTCFQENEQIIAUGAKGRXMNDWCMGRZFQIHYXMTPEEJHCBJZOU");
    msg.text.assign("MEZRVAFRZOXFLHUPYUSPBFEHSQIDYLUWCWZOPSLKSZYDJJMIMZMGMZWUNLCWHGSRALDGLRBFQEOMDNAHKQANVWVSHFHGCTEEVDKWGKOCSMGTRWXBOYBYNKLXCWDJYTRBBNKGPJZTJIYDMFNQKWJPTCTIIJMDVPCUPUFALVPAQHZPARNJAJSDVCYOZGWSGIIVIEXSOUTXEYZLMURXTRNCQJIXNELBHKENQ");

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
    msg.setTimeStamp(0.707430070334);
    msg.setSource(6991U);
    msg.setSourceEntity(126U);
    msg.setDestination(61035U);
    msg.setDestinationEntity(53U);
    msg.origin.assign("RZJSCEYURLHNPQWUULAOWCWZEPHPWDLOJEFMFFQHKIABDNGCYVCNTVNBOGDLFZCLCGKEIKBWVIQLJNVAXFCAJQPHKSLRFWXOHXTMBTXFPERZRPGCHIZNAIRUSSSBHFIETSSKBZJKEAQBVQOLTJXDMDVUMBWUYGOCYSYPIWYJKWLFHYZIFSQUVXDYMKRPTSQUNNORIAAIXAZDLGMMDWJRAMOEMJBGVGZXPEQNZBGTOEGRJDNCKYHYUTVX");
    msg.text.assign("FCHEHAIIASIHOGWRZREQWDJVPAYAPMXB");

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
    msg.setTimeStamp(0.861553050299);
    msg.setSource(16695U);
    msg.setSourceEntity(239U);
    msg.setDestination(31348U);
    msg.setDestinationEntity(76U);
    msg.origin.assign("IRBYUDDMWPQMCTPJLERPJMHDNMJWTVYZFBAGHWVZIQADSAYQKEBTJWOWOTSYYOLLLSNHQVMXFNMPERNNFJUZFDHJLUVAKCQUXGGQAHAADTPWBUASEQVTOKPHKILCIHFRWBCFFIHYFSNCDOBNDZIUAEVSGAQIMYEKRRSGPUPYTIWCEEGCMXTLOBNNGXTVSXHBMXPORRZDJXXIQKRDSYWGVOCTGBYHFOJPFULKSCJJVKBWVKCGZOZMIZKRXEQL");
    msg.htime = 0.72690971506;
    msg.lat = 0.893146874618;
    msg.lon = 0.545278424769;
    const char tmp_msg_0[] = {-34, 55, -75, 73, 101, -31, 114, -34, 18, 3, -55, -82, -26, -87, 120, -31, 32, 66, 55, 30, 14, -109, -96, -43, -120, 83, 64, 16, 90, -73, -113, -98, -83, -36, 48, 121, -52, 121, 23, 97, 56, -84, -121, -98, -127, -7, -126, 17, 88, -25, 113, 86, -83, 2, -15, -34, -61, -24, -94, 120, 93, -106, -34, 3, -5, -3, 64, 30, 53, -114, -40, 53, -91, 77, -47, 97, 49, -30, -58, 51, 120, -63, 19, 92, 56, -126, 58, 24, 111, 69, 62, 120, 116, -4, -34, 90, 80, 93, 83, -17, 29, -73, -59, -125, 111, 86, -100, -96, 93, 66, 123, 66, -95, 68, -101};
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
    msg.setTimeStamp(0.730287747319);
    msg.setSource(44086U);
    msg.setSourceEntity(99U);
    msg.setDestination(6301U);
    msg.setDestinationEntity(245U);
    msg.origin.assign("GXMJVEFVNIEBVTBEFMKHPFQWEWRSXDDKTWDGLAYGKCDCLBSZALKZFQHVAVNHFIALR");
    msg.htime = 0.102634047744;
    msg.lat = 0.896340527669;
    msg.lon = 0.324663147529;
    const char tmp_msg_0[] = {-13, 58, -66, 3, -81, -99, -35, -127, 100, -124, -113, -2, -53, -41, 65, -106, -127, 31, 41, 75, 51, 26, 123, 96, -55, 24};
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
    msg.setTimeStamp(0.0569566187517);
    msg.setSource(45095U);
    msg.setSourceEntity(186U);
    msg.setDestination(8102U);
    msg.setDestinationEntity(162U);
    msg.origin.assign("KTDTDPARRMUIFOGFFDLVDPYEHHESUMVSUKLXJOIBYZRETZKQXLJUGETTLMVMQRVDBZYXWEZYBOOPAQRCFQFGYBMKIUKEEVGBCOCSWLMKDNDHCWOFQUKBTNPWYWHICKNXSLVDIWGPJMJEXRGXBHCZYUJGXWHHBQLSZJVKGAROSJJ");
    msg.htime = 0.129980375064;
    msg.lat = 0.1263759685;
    msg.lon = 0.209587406051;
    const char tmp_msg_0[] = {-81, -49, 31, 0, 55, -41, -71, 110, -108, -123, -8, 82, 56, -80, -82, -105, -50, 3, 0, 29, 29, 82, 65, -67, -7, -64, -26, -120, -36, -100, -57, 111, 38, 17, -27, 126, 9, -13, 68, 125, 89, 98, 85, -39, 0, -102, -58, 30, 81, 64, -126, 38, -20, 5, -96, -67, -101, -36, 50, -126, -109, 17, -99, 65, 101, -88, -103, -52, -46, -118, -17, 57, -96, -122, 96, -113, 112, 26, -44, -49, -65, 112, -13, 9, 60, -94, 117, 125, -10, -111, 125, -71, 32, -19, -55, 27, 108, 95, 91, 15, 35, -100, 80, -35, -20, -120, -99, -100, 82, 110, -1, -34, -52, -104, -12, 11, -9, -124, -127, 77, -81, 109, 29, 7, -61, 57, -63, 117, 47, -5, 119, 46, -39, 14, -56, 124, 81, 51, -8, 40, -101, 110, 32, 109, 0, 50, 2, -67, 21, -75, 44, -62, -75, -84, 43, -27, -18, 62, 40, -60, -119, 7, -27, 64, 92, 56, -86, 55, 13, -112, -89, 50, 8, 123, 19, -21, 10, 97, -38, -67, -124, -13, 37, -98, -5, -12, 100, 110, 18, -65, -119, -2, 27, -108, 98, -86, 5, -126, -98, -15, -101, 87, -76, -115, -59, -58};
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
    msg.setTimeStamp(0.949945493691);
    msg.setSource(52701U);
    msg.setSourceEntity(111U);
    msg.setDestination(15754U);
    msg.setDestinationEntity(199U);
    msg.req_id = 13802U;
    msg.ttl = 65319U;
    msg.destination.assign("POJAHLYEIRPCQCLVMVIATGOEWLQMHUBHSUTFWEVYXHTOYQVAUIYMPJEVNQJWZUKHHFXDRUJDWJNAAMSCGNTIFTGRKJESDCEZRHNLQUKGRORHUXKGNKBYSDTOAPARIVFSJDSGFXYDCIWFMLETEQXGRDGOZFCMDNAMCYUGBWKXIKLKTRCMZESYXBQPXNZNQNJZWYEIBPZUFLKPBBIFVWARPOFCTBHQLPTMYSZPGLZKQHACDDWJWBNMOOIJUSVSOB");
    const char tmp_msg_0[] = {5, -104, 62, -81, 1, 95, -84, 99, 59, -74, -75, 53, 21, 96, 10};
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
    msg.setTimeStamp(0.192158950222);
    msg.setSource(46460U);
    msg.setSourceEntity(245U);
    msg.setDestination(6084U);
    msg.setDestinationEntity(211U);
    msg.req_id = 38522U;
    msg.ttl = 49049U;
    msg.destination.assign("SRKLBMVZMGCMQWMNGTXJDURCWMGAEJBKHWLOPFQGQADAAVHCYWZOWTCLIEELDNDPKCPBUVZFCHVCSGFYXBJXVRMZWFIGXNTOBISCGQNKDXLPHETUOHLAUQFYVGEZTYMVVPRRXF");
    const char tmp_msg_0[] = {-7, -116, -105, 30, 88, -42, -36, -84, 13, -127, -68, -59, -128, -114, -50, 77, -69, 57, 119, 122, 36, -2, 116, -74, -37, 62, -112, 6, -90, -18, -113, -59, 68, -103, -61, 49, 72, 120, -101, 93, 86, 86, -45, 59, -76, 56, -107, -22, -78, 42, 61, -30, 114, -57, -29, 112, 121, 41, -43, -15, -26, 54, 72, 110, 85, -35, 35, -94, -93, -33, -87, 87, -19, -15, 14, 95, -1, 111, -114, -13, 5, 60, 33, -100, 94, 62, 67, 64, -102, 83, 81, -113, -100, -54, -8, 37, -38, 83, 6, 71, -1, 62, -91, -34, -29, -110, 71, 65, -118, -126, -128, -117, 57, 97, 104, 114, -30, 59, -89, -34, -9, -76, -49, -90, -119, 51, 41, 101, 98, -101, -8, -85, -21, 89, -70, -30, 19, 9, -48, 23, -55, 74, -22, 95, 76, -4, 24, -92, 24, 94, 7, 89, -11, 8, -11, -10, -92, -115, -4, 46, -4, 60, 104, -54, -92, 56, 11, -43, 76, -7, 103, -124, 37, -50, -53, 64, 70, -115, 34, -126, -67, -68, 64, -98, -64, 56, -5, 116, -85, -83, -71, 9, -62, 41, -60, 46, -101, -126, -37, 87, -6, -101, -15, -58, -78, 18, 55, 21, -126, 72, -14, 91, 8, 40, -2};
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
    msg.setTimeStamp(0.379837438348);
    msg.setSource(33273U);
    msg.setSourceEntity(188U);
    msg.setDestination(9621U);
    msg.setDestinationEntity(21U);
    msg.req_id = 36764U;
    msg.ttl = 28256U;
    msg.destination.assign("KDHBXLXRADPOWMLKEIKTOSXEGAIBIVSTFDFJTQXSWUHIOGAWYDULZJHQLOANEXAQHQRHXRGTLMFTHVKVSBJBXMSXO");
    const char tmp_msg_0[] = {-79, 0, -67, 2, 109, -45, -71, -17, 3, 126, 64, -24, -121, -94, -72, -66, 104, -3, 79, 107, 53, -77, 4, -123, 49, -46, 125, -28, -68, 119, 124, -94, 52, 24, 70, -112, 109, -115, 57, 12, -121, -93, 50, 95, 94, 63, -61, -41, 77, -58, 18, 56, 112, 2, 69, -60, 102, 90, 15, 96, -72, 50, -124, 118, -87, 88, -86, 85, -17, -97, 20, 21, 68, -84, -113, -48, -26, 106, -103, 61, 103, 85, -93, -97, -79, 94, -124, 17, 92, 123, 72, -127, 56, -71, -110, 64};
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
    msg.setTimeStamp(0.933632513888);
    msg.setSource(44118U);
    msg.setSourceEntity(72U);
    msg.setDestination(23855U);
    msg.setDestinationEntity(135U);
    msg.req_id = 44396U;
    msg.status = 177U;
    msg.text.assign("QHVSADTXOWHMVNXLKTLPICQXZYWOILZZLRJEBRKSZAQLCRPQVZUOBTTXDJUBPCMSGSTALJIJFIGKSOOJTFNNOFNVPILLTVYVHBHSUWUFUDNWVDHDZXMYJTCPPAQDINHAEJTCREWGJQYKBXILAPVGAWQBYHAMFUZJIGKKIIECEMWECENNCBOEKOMSVFXLQMGCUDCHPARHFYXZWRXGKRWRDNJBBKOTPUPFGRSDUKNRYMFWQFUAZ");

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
    msg.setTimeStamp(0.21983044288);
    msg.setSource(3043U);
    msg.setSourceEntity(106U);
    msg.setDestination(2491U);
    msg.setDestinationEntity(78U);
    msg.req_id = 48408U;
    msg.status = 253U;
    msg.text.assign("CPTKTSMJNFDAUIAMMRBLTWVDZKOHTKGMXEHNPOCMZUEHZWGUDISZJ");

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
    msg.setTimeStamp(0.817167188618);
    msg.setSource(9890U);
    msg.setSourceEntity(189U);
    msg.setDestination(28633U);
    msg.setDestinationEntity(85U);
    msg.req_id = 34731U;
    msg.status = 77U;
    msg.text.assign("DXXEWALFIGCYYKFEHGNLNDVWSOPCVXQNFZUTDHRMUKIKWJREIWZZXWWJFSVHCJAMFRQSLPUCEWZTMERKDEAGWPQBMKUNUVQEIWKSOLRMGOAESMPOHTILTPJROSYFHBPBCWVVUQIAKTXGLTTJMGKZEVTFRGUYXRSTJIXQUXDVIPZOBIFACQBYLBANHZHSPBHPCDSNDYLMYRITKMOBRJJJYQOLCPF");

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
    msg.setTimeStamp(0.123552713116);
    msg.setSource(23725U);
    msg.setSourceEntity(188U);
    msg.setDestination(60717U);
    msg.setDestinationEntity(147U);
    msg.group_name.assign("IXISZBCHBEANMURLHRUCWQMGSEFABODACDUXINNSYEZQTKPPDKIEHWTGCUYGTBGCPHEJQMAPLKVOVFTFOQZJWKXQKVPFVYPJTYUAGEDHPBRNSZBYLFTQRLQGGSWSUBKWXDMIXPMAFFMZLUSFDLLPRCTFDRJVEYIZHOWASAGSVBVNL");
    msg.links = 3996238137U;

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
    msg.setTimeStamp(0.971366595283);
    msg.setSource(55253U);
    msg.setSourceEntity(139U);
    msg.setDestination(10758U);
    msg.setDestinationEntity(63U);
    msg.group_name.assign("WIIRMPSXXIFOCJAHJHDHAKWNXCGZVORNVZJIEMHIULVKKGVBMJLTMZDWXY");
    msg.links = 511473215U;

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
    msg.setTimeStamp(0.423447405806);
    msg.setSource(12416U);
    msg.setSourceEntity(1U);
    msg.setDestination(8676U);
    msg.setDestinationEntity(148U);
    msg.group_name.assign("QTVMXJVMHRCAIQDOOYFBXZIDQWJDQBIMGPPXSFWDLNBPZTOCZLLTEHZHKNEPJWYBNCZREVDLHVLFHBUAFDSOFVIYXBEPJGIJCHNWMXLMSSAAZAXUGHDVSNKBTNEAYHODGPRETCUO");
    msg.links = 4281047712U;

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
    msg.setTimeStamp(0.114394279557);
    msg.setSource(687U);
    msg.setSourceEntity(89U);
    msg.setDestination(65312U);
    msg.setDestinationEntity(166U);
    msg.groupname.assign("YEMZURCKHZKAOSTQYQBPAHOJFQIVOKNDKNTEFCIYXQCHGAGMPNSJRXZUEBQWUDCVMLEOHXUKQIQAIVHCKMMEZWFFKQNF");
    msg.action = 212U;
    msg.grouplist.assign("XAGZBSDNMOMWCEVXYSANEMMNTMBBTTWKIOARHFRDNGYBYCIQFJFULMJTHDCSQCKAPVRFOXCUOJCYKAJGVHVFQZXDUZDLYRUGQTESVPAYNXVIYPEPBUBDARUGYHIMLHWGARWEHDFZBKSOPXBPXGVBJWIKQLLGWJHEIC");

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
    msg.setTimeStamp(0.863669113311);
    msg.setSource(57870U);
    msg.setSourceEntity(51U);
    msg.setDestination(27975U);
    msg.setDestinationEntity(20U);
    msg.groupname.assign("FUHMZIEMYUN");
    msg.action = 89U;
    msg.grouplist.assign("WSZKMLWMDBKODFWLHUOCRQCLFVZMGYJMJIWXMBVLTPXJSARSYGWWHMVLBBBNFZDPTQZLDZXFHLHCCVYTUNUGHAUVYIEETNJINHOFZDHBPAQCEGRMJIAIAGKGFZASMZUPSACLXLUTRIOAJKPFYQROWTOSXTNHXJRYDVHOFKWGRIYXTDYVVKUUCQIRBMWUGQEAXJKOKYQPINCFTRS");

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
    msg.setTimeStamp(0.186884496096);
    msg.setSource(43445U);
    msg.setSourceEntity(249U);
    msg.setDestination(33806U);
    msg.setDestinationEntity(59U);
    msg.groupname.assign("TGXMWJFYSRZMPSKAYVFOXVFSTEOEZTFQBYSROAYTFLWLXUBRZVHVNJGGDOVHMYZOPRUCMQIFEUMQJHGMQFHIXCPMBLXDMSJKSOLKDIUAUHCFKGSFEEMLINEJUNXIQYWDZGHJIHXROPUGWXRTYNWBALIQDUVCOJVBNEYXSUZCKNJLUQHLAKYTNCSIFPBTNWCDZARHLDNPEKZCEDWPVCMNPBAZYGATTQKSOBDZCARKBEPJRLVAQPORWDVJH");
    msg.action = 103U;
    msg.grouplist.assign("YOIEMZZSHDQWZHDOAJXKURMQTCIBVINPGTHYXQUHTBAZHGUMGZDGJCPUWEUBVFRPSSCCSBYNAOFQOCNCXGSSJTHBMWLJKPZIIIOFQDMRWKNGPJXCEYDUBBHZYXMDFKUXOQQTRWJFNPJUTKLJQQJAXKRDHTYINPIQBIUARUXKMMPJLDVRFHFOESOEWNKAEXLDTNHDVCYI");

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
    msg.setTimeStamp(0.700841884333);
    msg.setSource(28738U);
    msg.setSourceEntity(184U);
    msg.setDestination(26279U);
    msg.setDestinationEntity(237U);
    msg.value = 0.717054355321;
    msg.sys_src = 60951U;

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
    msg.setTimeStamp(0.649980690422);
    msg.setSource(41454U);
    msg.setSourceEntity(29U);
    msg.setDestination(54059U);
    msg.setDestinationEntity(136U);
    msg.value = 0.30267463377;
    msg.sys_src = 39734U;

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
    msg.setTimeStamp(0.514621146585);
    msg.setSource(15825U);
    msg.setSourceEntity(93U);
    msg.setDestination(30851U);
    msg.setDestinationEntity(109U);
    msg.value = 0.0229884109787;
    msg.sys_src = 32484U;

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
    msg.setTimeStamp(0.0275271036199);
    msg.setSource(49223U);
    msg.setSourceEntity(189U);
    msg.setDestination(11005U);
    msg.setDestinationEntity(71U);
    msg.value = 0.00498316082783;
    msg.units = 12U;

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
    msg.setTimeStamp(0.0137800704379);
    msg.setSource(41711U);
    msg.setSourceEntity(152U);
    msg.setDestination(60035U);
    msg.setDestinationEntity(126U);
    msg.value = 0.789610501981;
    msg.units = 233U;

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
    msg.setTimeStamp(0.213226226919);
    msg.setSource(41390U);
    msg.setSourceEntity(127U);
    msg.setDestination(58340U);
    msg.setDestinationEntity(235U);
    msg.value = 0.418737336473;
    msg.units = 14U;

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
    msg.setTimeStamp(0.755752305832);
    msg.setSource(60783U);
    msg.setSourceEntity(147U);
    msg.setDestination(11726U);
    msg.setDestinationEntity(31U);
    msg.base_lat = 0.840902674205;
    msg.base_lon = 0.742082390987;
    msg.base_time = 0.610930784218;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 34093U;
    tmp_msg_0.priority = -70;
    tmp_msg_0.x = -5273;
    tmp_msg_0.y = 12746;
    tmp_msg_0.z = 16332;
    tmp_msg_0.t = -7474;
    IMC::DevCalibrationState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.total_steps = 192U;
    tmp_tmp_msg_0_0.step_number = 84U;
    tmp_tmp_msg_0_0.step.assign("SRLFTCCUNZEMZBJAGZWQAFHBSVEOVGZZLBNBMQSVKNMBELNTSPXBSRJAQTYCVKTPLCXPJXODXCFDRHFQCJLQRNWTLSYFHITSROFTOXKXLOBPEOKGNYVUXMJJAKMPETZWVGPBYPHHIKNYZGJWIXPYIDUDDQFRIWHFVKEGLISILYDJMLRDMCNUU");
    tmp_tmp_msg_0_0.flags = 102U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.440516054252);
    msg.setSource(28577U);
    msg.setSourceEntity(40U);
    msg.setDestination(43863U);
    msg.setDestinationEntity(127U);
    msg.base_lat = 0.237476251079;
    msg.base_lon = 0.875361935525;
    msg.base_time = 0.825041496338;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 15566U;
    tmp_msg_0.destination = 12873U;
    tmp_msg_0.timeout = 0.826292750439;
    IMC::GroupMembershipState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.group_name.assign("SGTMNUJCBLVVULCFYCPIHKUKHXYFPLSTNQRTQMFEEFRIWPZJSKKYJASNDHEJZDRLBOJHMSGVCFXTK");
    tmp_tmp_msg_0_0.links = 244754760U;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.378308383457);
    msg.setSource(25851U);
    msg.setSourceEntity(133U);
    msg.setDestination(55469U);
    msg.setDestinationEntity(225U);
    msg.base_lat = 0.6439449428;
    msg.base_lon = 0.327525393267;
    msg.base_time = 0.425901890977;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 45626U;
    tmp_msg_0.destination = 29622U;
    tmp_msg_0.timeout = 0.193145662208;
    IMC::RelativeHumidity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.599868081823;
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
    msg.setTimeStamp(0.803584134288);
    msg.setSource(24609U);
    msg.setSourceEntity(135U);
    msg.setDestination(2856U);
    msg.setDestinationEntity(59U);
    msg.base_lat = 0.113360647032;
    msg.base_lon = 0.128304828054;
    msg.base_time = 0.278395527387;
    const char tmp_msg_0[] = {116, 76, -76, -20, 43, -100, 5, -125, -72, -38, -108, -54, 119, -84, -16, -77, 100, -69, -113, -48, -13, -68, 85, 49, 71, 74, 3, 23, -65, -108, -56, -101, -10, 101, -123, 22, 0, 19, 124, 16, 120, -39, -31, -41, 66, 36, 1, 33, -85, 49, -98, -38, 29, -125, -61, 1, 54, -126, 7, 99, 108, 106, 120, 94, 61, 99, -37, -98, -33, -41, 24, 62, 84, 71, 87, -66, -85, 41, -1, -69, 11, 23, -32, 22, 69, -31, 36, -1, -73, -38, 19, 53, -101, -15, 26, 36, 4, 60, 116, -60, -4, -98, 84, -84, 17, -98, -28, 114, -25, -53, -86, -57, 20, -93, -81, 111, 71, 63, 119, 5, 44, 54, -106, -24, -79, -1, -113, -51, 84, -28, 3, 88, 59, 107, 61, -53, -28, 10, 81, -11, -38, 111, -66, 27, -58, -93, 66, -104, -111, -74, -100, 114, 62, -66, 61, 66, 112, 104, -90, 9, 6};
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
    msg.setTimeStamp(0.563166665014);
    msg.setSource(15220U);
    msg.setSourceEntity(22U);
    msg.setDestination(24862U);
    msg.setDestinationEntity(201U);
    msg.base_lat = 0.0489716303801;
    msg.base_lon = 0.0864846611324;
    msg.base_time = 0.745724617778;
    const char tmp_msg_0[] = {46, -104, -82, 38, -8, 119, 72, 68, -77, 72, -111, -9, -103};
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
    msg.setTimeStamp(0.594464729528);
    msg.setSource(35470U);
    msg.setSourceEntity(138U);
    msg.setDestination(42576U);
    msg.setDestinationEntity(141U);
    msg.base_lat = 0.50633809813;
    msg.base_lon = 0.801846376901;
    msg.base_time = 0.0544019993863;
    const char tmp_msg_0[] = {-79, -93, 40, -108, -49, 102, 80, -65, -113, -100, -34, 67, -8, 77, 12, -57, -41, 108, 120, 61, 82, 16, -88, -100, -118, -119, 58, -20, 20, -114, -4, -103, 71, 90, 13, 61, 26, -36, 76, -121, 111, -100, 80, 73, 30, -61, 85, 46, 45, 116, -70, 10, -54, 20, -43, 50, -5, -110, -50, -1, 14, 10, -124, 72, -8, -72, 78, 93, 44, -120, -72, 112, -66, -115, 104, 107, -51, -67, 27, -11, 32, -46, 41, -20, -84, -58, -113, -37, 102, -66, -32, -77, -119, -109, 102, 103, 13, -78, -116, -90, 117, 72, -69, -9, 103, -54, 72, -74, -29, 4, -62, -56, -58, 16, 79, -20, 28, 24, 122, 48, -12, 20, -108, 123, -90, -67, 56, 101, -61, 46, -99, -20, -14, -108, 95, 40, -95, -49, -117, 44, 77, 112, 24, -21, 24, 83, 22, -122, -13, -60, -55, -123, -125, 67, -115, 57, 72, 85, -10, -117, -9, 49, 110, 17, -73, 122, 100, 66, 60, 79, 126, 30, 105, 89, 30, 120, -79, -17, -115, -79, 83, 120, -20, 67, -33, 16, -26, -104, -72, -127, 70, 50, -15, 70, 7, -38, 71, -127, 104, -89, -105, -17, 5, 36, 81, -47, 16, -46, -60, 24, 32};
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
    msg.setTimeStamp(0.385405712706);
    msg.setSource(30892U);
    msg.setSourceEntity(154U);
    msg.setDestination(26481U);
    msg.setDestinationEntity(100U);
    msg.sys_id = 876U;
    msg.priority = -56;
    msg.x = 7807;
    msg.y = -7019;
    msg.z = -14352;
    msg.t = 30388;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 22744U;
    tmp_msg_0.lat = 0.884526212019;
    tmp_msg_0.lon = 0.828140904367;
    tmp_msg_0.z = 0.22456506089;
    tmp_msg_0.z_units = 201U;
    tmp_msg_0.amplitude = 0.219510152967;
    tmp_msg_0.pitch = 0.331212978788;
    tmp_msg_0.speed = 0.881200995201;
    tmp_msg_0.speed_units = 0U;
    tmp_msg_0.custom.assign("SYLESVHJBVFYRZIPOWIZNVTCCQVXSZXTUMSAAOBCU");
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
    msg.setTimeStamp(0.751978414704);
    msg.setSource(58035U);
    msg.setSourceEntity(74U);
    msg.setDestination(25200U);
    msg.setDestinationEntity(224U);
    msg.sys_id = 15624U;
    msg.priority = -110;
    msg.x = -1905;
    msg.y = -19527;
    msg.z = 12491;
    msg.t = -18719;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("YPJOXQSGDADCXVXKBCFGMTEUJDZJJQKSWVWNYEVLSFOMVZHTUDHOARUXLKMCFQYZYNJHXOXXYLWDOVDTUMTAQCFYLAOSEUPHKHEBRNAIPBJIWGFCCMLOUBZDTECJHIZQDZGGNSGIVPMLWESTOYSNUAVQIGKNPRNMTSIQYLARRMBWRHMDIFKKRZFKFJCTFABYAOBBZETERYHJNGPGATILECNWHKIRVVQRPZILSL");
    tmp_msg_0.value = 101U;
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
    msg.setTimeStamp(0.780475856316);
    msg.setSource(26062U);
    msg.setSourceEntity(171U);
    msg.setDestination(28000U);
    msg.setDestinationEntity(252U);
    msg.sys_id = 58699U;
    msg.priority = 73;
    msg.x = 20419;
    msg.y = -17698;
    msg.z = -9425;
    msg.t = 31784;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("FDYHAEXIRJWRDDPHWPPGQOIKQZGIGXSOFGKLXIWLPZTTGDVCORJS");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("JAPVOZBQJXLVWFDUPTFDMNRUJHJBEXALZINSVQMERZIUQKYTXY");
    tmp_tmp_msg_0_0.predicate.assign("YEHOVYRCGADWMKBYMOBFMJRMMLZNWDXVBYRLLSTLTIUXIYCE");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("FLTWFBPVKVSTGEMYOIS");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 90U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("XMIDIBGNMMIXRPWXMUWCPKNSCYBCYCIKXNL");
    tmp_tmp_tmp_msg_0_0_0.max.assign("FAACIMSPLDRHSLHQGUOANWKWWZIHJZQOXTVRCBKJRHKQZCPWRBTFXBTHDOYJKDQCHYZJPJTKPVCBFFCSEXNCLOTQTALMSJOMMYLSUYSIGSAPDQWAEDVVETNGIFTJRWWDRSYZBU");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.tokens.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.696911314665);
    msg.setSource(26061U);
    msg.setSourceEntity(242U);
    msg.setDestination(62520U);
    msg.setDestinationEntity(79U);
    msg.req_id = 7666U;
    msg.type = 117U;
    msg.max_size = 877U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.422724456879;
    tmp_msg_0.base_lon = 0.786671059963;
    tmp_msg_0.base_time = 0.646781490877;
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
    msg.setTimeStamp(0.446538168958);
    msg.setSource(56841U);
    msg.setSourceEntity(163U);
    msg.setDestination(17754U);
    msg.setDestinationEntity(194U);
    msg.req_id = 14385U;
    msg.type = 74U;
    msg.max_size = 18248U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.386219499841;
    tmp_msg_0.base_lon = 0.984064109848;
    tmp_msg_0.base_time = 0.986929620887;
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
    msg.setTimeStamp(0.759640037247);
    msg.setSource(11531U);
    msg.setSourceEntity(85U);
    msg.setDestination(24416U);
    msg.setDestinationEntity(45U);
    msg.req_id = 65026U;
    msg.type = 182U;
    msg.max_size = 17204U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.126038090726;
    tmp_msg_0.base_lon = 0.495769010075;
    tmp_msg_0.base_time = 0.798129019131;
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
    msg.setTimeStamp(0.816157156435);
    msg.setSource(36147U);
    msg.setSourceEntity(152U);
    msg.setDestination(6944U);
    msg.setDestinationEntity(36U);
    msg.original_source = 23305U;
    msg.destination = 49059U;
    msg.timeout = 0.153308098692;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 21464U;
    tmp_msg_0.lat = 0.69635708736;
    tmp_msg_0.lon = 0.0610784115709;
    tmp_msg_0.z = 0.442879251691;
    tmp_msg_0.z_units = 111U;
    tmp_msg_0.speed = 0.811520338602;
    tmp_msg_0.speed_units = 159U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.150379413249;
    tmp_tmp_msg_0_0.y = 0.433950730491;
    tmp_tmp_msg_0_0.z = 0.041384618867;
    tmp_tmp_msg_0_0.t = 0.437103846207;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("MAXTQZBPRZRKLJWCAHHIYNNJEXJZZHKOARWQHZOWZCCSRSLTPLSGIBBVNCACBQBTIPPNZHDUPLAVUGVXBKAZSNPIHUDGYQUSKEKEKRWFJMGDULQUMIDFWYTMQSGJAQVNOYRVIOMMXPKDESPHWXSMBOCIGTLBFEPETQUOJFNONUCTWGLJNOCEVYHVQUCBXFMWRLELTFYGFTSX");
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
    msg.setTimeStamp(0.621737290398);
    msg.setSource(41665U);
    msg.setSourceEntity(137U);
    msg.setDestination(26464U);
    msg.setDestinationEntity(10U);
    msg.original_source = 39230U;
    msg.destination = 20922U;
    msg.timeout = 0.535541475807;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 5986U;
    tmp_msg_0.plan_size = 550930161U;
    tmp_msg_0.change_time = 0.38080095748;
    tmp_msg_0.change_sid = 3523U;
    tmp_msg_0.change_sname.assign("SBCQOCEDNZDMUSWMFWMUUQWSSLCZGODMQMJCZEHQACTOYYYUETTRMCSQJTIQSIVOVIXRVBPJNFWWPHEFABXXG");
    const char tmp_tmp_msg_0_0[] = {-77, -69, -60, 118, 85, 119, 54, -121, 79, -4, -25, -122, -104, 91, 109, -24, -34, -114, -64, -34, 60, -20, -79, 32, -113, 117, 15, 98, 77, -74, 21, -9, -50, -65, -44, -13, -92, 26, 93, -104, 79, 103, 116, 7, -60, 61, 75, -5, -121, -17, 31, 18, 100, -121, -92, 61, 70, 34, -40, -117, -99, -48, -3, -124, 41, 5, -91, -60, 62, -70, -28, 113, 108, -26, -42, 48, 31, 118, -32, 11, 65, -47, 65, 117, -8};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.853156818457);
    msg.setSource(64622U);
    msg.setSourceEntity(16U);
    msg.setDestination(44638U);
    msg.setDestinationEntity(159U);
    msg.original_source = 12026U;
    msg.destination = 19545U;
    msg.timeout = 0.0214531134928;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 39417U;
    tmp_msg_0.custom.assign("JTYKACVROQVMHXJFPNCQXZEKLSLIIBEVGSFVOMRKDFGWWNWZZZOEBHUYFAKKXGQZBEYSPONIANVMO");
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
    msg.setTimeStamp(0.00550170967645);
    msg.setSource(36048U);
    msg.setSourceEntity(135U);
    msg.setDestination(27903U);
    msg.setDestinationEntity(56U);
    msg.type = 134U;
    msg.comm_interface = 55036U;
    msg.model = 40250U;
    msg.list.assign("CKTBXKKZGVNGMCLJNBPJCMTTNFCPUIHQIJHMTGXVGOSKUENOHRYPBHMXEPOECLGOXEVRRWMQSVAUAHINSFOUZMPAHQHLXBLIBQOZWVMDFDFVHUNBWBTQWGYXYRNZRJZWSJVQNDDKLYLOJGGLOITYOINGFQTDCEFJHPAESTSXSUEXNWBTPLIUVFWAFRDPZRCZSJTRMEUCVCHZWQZYYPDBKDPYKJIZALYIWKOMAQXJRKISAMWAVXQBESAU");

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
    msg.setTimeStamp(0.158398364929);
    msg.setSource(36450U);
    msg.setSourceEntity(159U);
    msg.setDestination(34502U);
    msg.setDestinationEntity(208U);
    msg.type = 217U;
    msg.comm_interface = 58209U;
    msg.model = 27826U;
    msg.list.assign("EBWCXKGLORHCWHQMYFZHDUVATNCBTVKZYWTLYNEJVHRPDQHCKCBEPOWFEPYHRMJQXTKMLD");

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
    msg.setTimeStamp(0.822610329165);
    msg.setSource(37658U);
    msg.setSourceEntity(116U);
    msg.setDestination(59113U);
    msg.setDestinationEntity(110U);
    msg.type = 129U;
    msg.comm_interface = 49706U;
    msg.model = 29838U;
    msg.list.assign("CLOSIQRISGAAKMGTXFNUVUGKMJMGFJUWRHMJKADPFCSMPAHHVWOXFZOVBWBY");

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
    msg.setTimeStamp(0.853832509197);
    msg.setSource(19961U);
    msg.setSourceEntity(238U);
    msg.setDestination(28881U);
    msg.setDestinationEntity(101U);
    msg.type = 74U;
    msg.req_id = 858261435U;
    msg.ttl = 47626U;
    msg.code = 30U;
    msg.destination.assign("QSJKVTUOWKSEGCMJRIUSRPFMCYYEJFNUHUGKM");
    msg.source.assign("NKHPEJHRGTGAGZCDDVAMDUMNB");
    msg.acknowledge = 1U;
    msg.status = 248U;
    const char tmp_msg_0[] = {-73, 77, 47, -45, -66, -12, 69, -48, 90, -80, 39, 69, -40, 14, -54, -11, -34, 124, -104, -80, 7, -21, -24, 36, 103, -46, -33, 57, 59, -106, -125, -93, -88, 119, 115, -58, -15, 69, 66, 27, 14, 55, -107, 30, 46, -48, 30, -105, -111, -88, 41, -63, -82, 45, 66, 70, 123, 114, 45, -40, -92, -74, -61, 55, -63, 124, -116};
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
    msg.setTimeStamp(0.369700871308);
    msg.setSource(37871U);
    msg.setSourceEntity(59U);
    msg.setDestination(49460U);
    msg.setDestinationEntity(221U);
    msg.type = 94U;
    msg.req_id = 3851134061U;
    msg.ttl = 53614U;
    msg.code = 56U;
    msg.destination.assign("KLIQFFNWSZPRCNVOPWJKNXUAWPMTZIOXAOUDJHIAEVAOTQEIKBFLGENFJOMBXSGZTVZIPOFUVMBDRHBXAJDRTANUOWZUFGBXMRIMCHTRGGZXVYYJWSQVKVPNDQLKHTQCLDSWYYGYUZGMYIFRLJYDHBKNLQCQSVJESTZAZROPCMCKFLGRYCSEKSJPKHHYQNEMVVPHUSDLEIBBRXFWGEAOJWN");
    msg.source.assign("HXPOFRAYEVJGHYQYFHAEOWQGFZGHBBSOFKJJYJYX");
    msg.acknowledge = 7U;
    msg.status = 3U;
    const char tmp_msg_0[] = {-79, 43, -12, 97, 69, 114, -48, -70, -112, -123, 12, -123, 39, 125, -63, 18, -8, 121, -89, -30, 105, -71, 21, 12, 43, 5, -52, -67, -37, -28, 26, -81, 48, -80, -14, 95, -29, -87, 76, 16, 104, -76, -27, -6, 27, -53, 100, -8, 94, -10, 5, -49, -45, -20, -28, 36, -58, 17, -49, 64, 113, -4, 21, -61, -29, -80, -92, -65, 77, 15, -31, -22, -20, -38, 95, -32, -1, 29, -91, -112, 46, 20, -18, 48, -55, 116, -64, 101, 84, 32, 22, -89, 62, 30, -33, 80, 120, 26, 43, 85, -97, -54, -3, -76, 62, -48, 123, -65, -102, 69, 6, 84, 12, 115, 54, -62, 71, 46, -100, -122, -15, -4, -57, 65, 48, 109, 58, 60, -126, -3, -57, -80, -88, -88, -27, -14, 33, 46, 10, 116, -7, 18, 124, 99, 108, 119, -124, 109, -13, -80, 49, -18, -64, 39, -69, 34, 63, -3};
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
    msg.setTimeStamp(0.0644899635001);
    msg.setSource(55257U);
    msg.setSourceEntity(215U);
    msg.setDestination(59331U);
    msg.setDestinationEntity(141U);
    msg.type = 178U;
    msg.req_id = 55090170U;
    msg.ttl = 55590U;
    msg.code = 100U;
    msg.destination.assign("QMOBWNSJFHRLBMYYRDDKAME");
    msg.source.assign("BKRDENKBGUHHKRCIPKFWAVDRUNBRYHBLOQCAMLSAWQASGA");
    msg.acknowledge = 94U;
    msg.status = 59U;
    const char tmp_msg_0[] = {-96, -39, -35, 63, 52, -111, -95, -27, 9, 63, -44, 81, -124, 37, 109, 66, 83, -24, -61, -111, 80, 13, -95, 51, -41, -58, -100, -100, 51, -65, 13, -77, 37, -37, -93, -57, 60, -43, 4, -101, -99, 44, 90, 80, -122, 113, -82, 44, 102, -41, 10, 78, -61, 15, -27, 94, -3, 2, 45, 83, -51, -73, -122, 122, -96, -57, -3, 101, -45, 17, -28, -21, 16, 110, 107};
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
    msg.setTimeStamp(0.682836174186);
    msg.setSource(39691U);
    msg.setSourceEntity(239U);
    msg.setDestination(46504U);
    msg.setDestinationEntity(73U);
    msg.id = 42U;
    msg.range = 0.960870260351;

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
    msg.setTimeStamp(0.814445104855);
    msg.setSource(39000U);
    msg.setSourceEntity(176U);
    msg.setDestination(905U);
    msg.setDestinationEntity(153U);
    msg.id = 245U;
    msg.range = 0.195823111458;

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
    msg.setTimeStamp(0.409498038014);
    msg.setSource(5703U);
    msg.setSourceEntity(116U);
    msg.setDestination(62817U);
    msg.setDestinationEntity(207U);
    msg.id = 132U;
    msg.range = 0.0591396654764;

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
    msg.setTimeStamp(0.420545632069);
    msg.setSource(16966U);
    msg.setSourceEntity(226U);
    msg.setDestination(55299U);
    msg.setDestinationEntity(136U);
    msg.beacon.assign("FVAXFZWCGCLWRDHWBNXWFLSOSKASBVNVYTHOWRGOLTJJTUPNPBLKPP");
    msg.lat = 0.232244976969;
    msg.lon = 0.43308358765;
    msg.depth = 0.885456828692;
    msg.query_channel = 8U;
    msg.reply_channel = 189U;
    msg.transponder_delay = 179U;

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
    msg.setTimeStamp(0.488056030514);
    msg.setSource(64444U);
    msg.setSourceEntity(205U);
    msg.setDestination(26011U);
    msg.setDestinationEntity(120U);
    msg.beacon.assign("QNCJEFIGLOJOMEQVUUQZJSNSPKFKKPWJWDIPXHMSCSLUZILZEXTJRAVCRWAPIYVKKRMSGBOBVZQYTZRGHQDBNDUFMTFXDHUWATTSBASLKWYBTREWKQECLYOYBVOVUYCQBFVXDFJHKGVQOFSXCWBUGIXPIOZGGYMTYQPLSXJICRNNSNOHXAUKTIXDTNYGIJGRXYDOCICAMMFNCVJZTZHARQUKWOEPERAWMAZHNG");
    msg.lat = 0.42922098335;
    msg.lon = 0.747306569288;
    msg.depth = 0.505528040443;
    msg.query_channel = 81U;
    msg.reply_channel = 161U;
    msg.transponder_delay = 55U;

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
    msg.setTimeStamp(0.278604266862);
    msg.setSource(31643U);
    msg.setSourceEntity(89U);
    msg.setDestination(1541U);
    msg.setDestinationEntity(131U);
    msg.beacon.assign("KUUQSJYSQBJZKVYHDKMLRZPCSLORBQJBBJFSPEOFBZJXQQESPSLKVWIDNUCYWRAKBHVZLRQTQTNCUHABXXWNCEPQKWYGPATMXBPROCRIEDTHDIZAXKTHNQLDZCBJWAHWTHVGEIYJYOTVRCFLFKIEUWCIVGSCUAMLAZUQWTBOOGRTMUMXPVWELMYYMYPJXJMOWXZKENDKSFNRMNUZIGGODNVVLUHFHFXSXIGFGGFCFVIYPZNOEAIPNRDLH");
    msg.lat = 0.61444391403;
    msg.lon = 0.458833816702;
    msg.depth = 0.0614307979367;
    msg.query_channel = 92U;
    msg.reply_channel = 108U;
    msg.transponder_delay = 218U;

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
    msg.setTimeStamp(0.0635152659838);
    msg.setSource(60885U);
    msg.setSourceEntity(37U);
    msg.setDestination(36016U);
    msg.setDestinationEntity(247U);
    msg.op = 203U;

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
    msg.setTimeStamp(0.275721490654);
    msg.setSource(54994U);
    msg.setSourceEntity(177U);
    msg.setDestination(35402U);
    msg.setDestinationEntity(19U);
    msg.op = 200U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BDNHJFQRZKVRZXKDZQQQTGOXEBONVEGZQRQXOICUUHCJK");
    tmp_msg_0.lat = 0.817165006294;
    tmp_msg_0.lon = 0.428433968992;
    tmp_msg_0.depth = 0.843249755138;
    tmp_msg_0.query_channel = 157U;
    tmp_msg_0.reply_channel = 35U;
    tmp_msg_0.transponder_delay = 57U;
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
    msg.setTimeStamp(0.586189693991);
    msg.setSource(6963U);
    msg.setSourceEntity(7U);
    msg.setDestination(40965U);
    msg.setDestinationEntity(116U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.347669356017);
    msg.setSource(15037U);
    msg.setSourceEntity(100U);
    msg.setDestination(9133U);
    msg.setDestinationEntity(215U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RTRUIOOYIUMYWUJFNPJCEVGDGQMLCMDPPITYLFLABSHEPFGQSBHTBNANHWVZBFLGUJUSJXRELOWAZPTQTJJBKQMFJIOCPKISKWDWOSLXQSVJXHHMOQYRSMPWVUDVAGLQDSQBUUFWCKANAHBFKECIITMNMWTVMCJODDXEBCZHKZAGNAYNUBVELRZEXOVTXZIWRLWGMUCZVTVNFXYYRORTHRIDHGEQNQDLRHPGAPZYZKSXXEXE");
    tmp_msg_0.lat = 0.224371150366;
    tmp_msg_0.lon = 0.796930363178;
    tmp_msg_0.depth = 0.641660611135;
    tmp_msg_0.query_channel = 197U;
    tmp_msg_0.reply_channel = 86U;
    tmp_msg_0.transponder_delay = 7U;
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
    msg.setTimeStamp(0.0471427253109);
    msg.setSource(65254U);
    msg.setSourceEntity(12U);
    msg.setDestination(60915U);
    msg.setDestinationEntity(36U);
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 25U;
    tmp_msg_0.quality = 189U;
    tmp_msg_0.reps = 45U;
    tmp_msg_0.tsize = 12U;
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
    msg.setTimeStamp(0.924912949107);
    msg.setSource(44535U);
    msg.setSourceEntity(10U);
    msg.setDestination(48919U);
    msg.setDestinationEntity(58U);
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.517325716916;
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
    msg.setTimeStamp(0.436384595629);
    msg.setSource(58443U);
    msg.setSourceEntity(206U);
    msg.setDestination(47044U);
    msg.setDestinationEntity(61U);
    msg.op = 241U;
    msg.system.assign("DVSVXBYMZEOIJKYWTFLKVNISWHUUXACHNYUYDLATADUXYUOQOWINXZPSZJVMPCP");
    msg.range = 0.689337471544;
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.438128973586;
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
    msg.setTimeStamp(0.778320876245);
    msg.setSource(64037U);
    msg.setSourceEntity(246U);
    msg.setDestination(48626U);
    msg.setDestinationEntity(33U);
    msg.op = 1U;
    msg.system.assign("PREXMFMUKTSWAHNATZJDBTGWWCBTUBAMHQAZJXMLQUBITDPPOJXDGJANHYKJEWFRFDYSXQVHWEEVLRMYBQBECSORDRUXGKHTZXCFMITRWEVJLVTIYAXWPGPNTZWYQGHLXOFFRDSLPZOQWOIVLECLA");
    msg.range = 0.763698577928;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.191368689446;
    tmp_msg_0.y = 0.961814967341;
    tmp_msg_0.z = 0.852099451366;
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
    msg.setTimeStamp(0.472126484204);
    msg.setSource(26879U);
    msg.setSourceEntity(121U);
    msg.setDestination(29245U);
    msg.setDestinationEntity(203U);
    msg.op = 23U;
    msg.system.assign("FTMHPDHHMIPBXBGTFWIYUHWBATNILCBNOPNRGKYQLLQEMKLXIULEHVGCMFTZOBAYZXZCRBAXSDMUNJMFKTTVHNQLSZZIZXLHUROTDK");
    msg.range = 0.632123277851;
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("FBBCWRLNTRTQUCIGECJJUPNVSWDJVDXKKNSFHLEEVFBIEQFKZVMHXGJMBGEUMMYKTYRHANNZTENPIRVMVBCVLGUTCHKIXYAUKWFYLNIVUODRFAXBMZQHVDDLSDHHSXOWUZUJBGOZBYCCGBNXSJTERISCZSGJWXJSORJC");
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
    msg.setTimeStamp(0.532545389224);
    msg.setSource(11313U);
    msg.setSourceEntity(169U);
    msg.setDestination(16612U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.965531035719);
    msg.setSource(45996U);
    msg.setSourceEntity(206U);
    msg.setDestination(52299U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.449956299473);
    msg.setSource(50814U);
    msg.setSourceEntity(68U);
    msg.setDestination(26873U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.476028366226);
    msg.setSource(47842U);
    msg.setSourceEntity(123U);
    msg.setDestination(15087U);
    msg.setDestinationEntity(196U);
    msg.list.assign("URXBWSPJNAQSHVOFRESAJLDTLZQIDDFBJVAOQEUFWPMBCCEICUEWIYLCWDJV");

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
    msg.setTimeStamp(0.297387569779);
    msg.setSource(53704U);
    msg.setSourceEntity(199U);
    msg.setDestination(34008U);
    msg.setDestinationEntity(117U);
    msg.list.assign("SUGJDZVKZRPFNCZUPFIDFAQKPFQSGQMFSMIMWVUCPIHJYNWEKSJVXXQEF");

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
    msg.setTimeStamp(0.602533240514);
    msg.setSource(8945U);
    msg.setSourceEntity(36U);
    msg.setDestination(52756U);
    msg.setDestinationEntity(151U);
    msg.list.assign("BWIXUZAJHOXJKJAGLEDIVIBCGIOYUZXBGUEMRLQWTQNLQKOHMEKVXHJJOKFSWCKTMPZWBDCDEDVHWIAAZIFCIEYZUYEJUFZLYKSXTNSSXYIPIBHUVEUAQNQFWNFRBDPGTNKMSOAUCDTHRDHHMTDEBWODXBLOOMVRXXYZOFNQCPRBKTGKPQTANUXGAPGROYYDAJIVRJZFCNRWCPQKWNQFZSZNMSYSLPQHEWPRPSVMLGMLYFGVUVFA");

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
    msg.setTimeStamp(0.765184022416);
    msg.setSource(34259U);
    msg.setSourceEntity(236U);
    msg.setDestination(31787U);
    msg.setDestinationEntity(61U);
    msg.peer.assign("KRTDNNNGLAIURNKYNSPHKDNRGSNOJQCADPRFIPZXZUYGFYDMWTKTPHXJCFHRQHOFFBDJLOJFUKGWEFPEPRIIXVSEWZPTMGEIUXBYSQGSSJVNMXHGZWVEDYCSPYBAVOXSTUBBMAABYQKQMBAFVOOGUKWADZLTACCWSUTLXNYMCOUWMTEIWRYKVEUL");
    msg.rssi = 0.581916277404;
    msg.integrity = 64264U;

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
    msg.setTimeStamp(0.660846883276);
    msg.setSource(13910U);
    msg.setSourceEntity(236U);
    msg.setDestination(1996U);
    msg.setDestinationEntity(66U);
    msg.peer.assign("GEDVKJNKSHKRHGBHFJNWZEZGAASTJRNTWTYXJEIISLTDYSUCONVMQVMORFSQTZEZUAHDMMNBVZPBKTAUOAFGUHYGUYFEYCQGRLBHCHNFIGPBUDUEMMQCOKXYITPJCROAGCPRPIJDUCSPMLXKFPOXXJKMEZVDOKCTZSKGLD");
    msg.rssi = 0.67150898746;
    msg.integrity = 36519U;

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
    msg.setTimeStamp(0.908063335396);
    msg.setSource(36039U);
    msg.setSourceEntity(188U);
    msg.setDestination(56541U);
    msg.setDestinationEntity(86U);
    msg.peer.assign("MYTUWTLQBPAWWJZHWMJKSPMOIVORSDTPXYTNUGKFWVXJMUZMFLESFBCLBCWROPALVI");
    msg.rssi = 0.621335691627;
    msg.integrity = 52525U;

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
    msg.setTimeStamp(0.139470843486);
    msg.setSource(50372U);
    msg.setSourceEntity(151U);
    msg.setDestination(50145U);
    msg.setDestinationEntity(118U);
    msg.value = 28764;

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
    msg.setTimeStamp(0.299129878947);
    msg.setSource(42728U);
    msg.setSourceEntity(180U);
    msg.setDestination(8055U);
    msg.setDestinationEntity(251U);
    msg.value = -18833;

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
    msg.setTimeStamp(0.336471436356);
    msg.setSource(33943U);
    msg.setSourceEntity(13U);
    msg.setDestination(49348U);
    msg.setDestinationEntity(231U);
    msg.value = 7527;

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
    msg.setTimeStamp(0.902801353714);
    msg.setSource(11603U);
    msg.setSourceEntity(151U);
    msg.setDestination(51218U);
    msg.setDestinationEntity(159U);
    msg.value = 0.00960367231397;

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
    msg.setTimeStamp(0.0956490922408);
    msg.setSource(50701U);
    msg.setSourceEntity(79U);
    msg.setDestination(10429U);
    msg.setDestinationEntity(29U);
    msg.value = 0.208900961276;

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
    msg.setTimeStamp(0.992397716583);
    msg.setSource(6570U);
    msg.setSourceEntity(215U);
    msg.setDestination(236U);
    msg.setDestinationEntity(148U);
    msg.value = 0.742912516558;

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
    msg.setTimeStamp(0.361950695491);
    msg.setSource(42611U);
    msg.setSourceEntity(242U);
    msg.setDestination(8148U);
    msg.setDestinationEntity(110U);
    msg.value = 0.569644480056;

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
    msg.setTimeStamp(0.868053606906);
    msg.setSource(36398U);
    msg.setSourceEntity(138U);
    msg.setDestination(58134U);
    msg.setDestinationEntity(6U);
    msg.value = 0.862074881015;

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
    msg.setTimeStamp(0.936895891512);
    msg.setSource(61753U);
    msg.setSourceEntity(63U);
    msg.setDestination(27104U);
    msg.setDestinationEntity(92U);
    msg.value = 0.244624387812;

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
    msg.setTimeStamp(0.830533040394);
    msg.setSource(30262U);
    msg.setSourceEntity(84U);
    msg.setDestination(48723U);
    msg.setDestinationEntity(84U);
    msg.validity = 43901U;
    msg.type = 176U;
    msg.utc_year = 9472U;
    msg.utc_month = 212U;
    msg.utc_day = 246U;
    msg.utc_time = 0.211105562654;
    msg.lat = 0.125966218193;
    msg.lon = 0.032604924295;
    msg.height = 0.0929077891102;
    msg.satellites = 251U;
    msg.cog = 0.705445788718;
    msg.sog = 0.379643700029;
    msg.hdop = 0.770935499946;
    msg.vdop = 0.0438537367525;
    msg.hacc = 0.248972836703;
    msg.vacc = 0.196673753012;

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
    msg.setTimeStamp(0.924887807955);
    msg.setSource(49950U);
    msg.setSourceEntity(201U);
    msg.setDestination(12995U);
    msg.setDestinationEntity(245U);
    msg.validity = 39148U;
    msg.type = 245U;
    msg.utc_year = 24771U;
    msg.utc_month = 143U;
    msg.utc_day = 194U;
    msg.utc_time = 0.969193707671;
    msg.lat = 0.0435548389485;
    msg.lon = 0.17778726922;
    msg.height = 0.458703653799;
    msg.satellites = 130U;
    msg.cog = 0.367045193328;
    msg.sog = 0.280918599367;
    msg.hdop = 0.054980262192;
    msg.vdop = 0.135449841898;
    msg.hacc = 0.260881494617;
    msg.vacc = 0.0871604726138;

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
    msg.setTimeStamp(0.910006498267);
    msg.setSource(1984U);
    msg.setSourceEntity(52U);
    msg.setDestination(37966U);
    msg.setDestinationEntity(28U);
    msg.validity = 22319U;
    msg.type = 155U;
    msg.utc_year = 60703U;
    msg.utc_month = 149U;
    msg.utc_day = 68U;
    msg.utc_time = 0.00796246496204;
    msg.lat = 0.766757006682;
    msg.lon = 0.851617582512;
    msg.height = 0.947403884485;
    msg.satellites = 17U;
    msg.cog = 0.128419333978;
    msg.sog = 0.849235491684;
    msg.hdop = 0.847178378405;
    msg.vdop = 0.744219105967;
    msg.hacc = 0.713864026298;
    msg.vacc = 0.481689330559;

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
    msg.setTimeStamp(0.560978955661);
    msg.setSource(27332U);
    msg.setSourceEntity(229U);
    msg.setDestination(44122U);
    msg.setDestinationEntity(0U);
    msg.time = 0.155350823654;
    msg.phi = 0.0417110816621;
    msg.theta = 0.279626287007;
    msg.psi = 0.413621411294;
    msg.psi_magnetic = 0.952961651794;

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
    msg.setTimeStamp(0.353175316886);
    msg.setSource(52261U);
    msg.setSourceEntity(50U);
    msg.setDestination(56294U);
    msg.setDestinationEntity(153U);
    msg.time = 0.892377868314;
    msg.phi = 0.820921994113;
    msg.theta = 0.0405501090099;
    msg.psi = 0.332700619478;
    msg.psi_magnetic = 0.80565868055;

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
    msg.setTimeStamp(0.609385058156);
    msg.setSource(41833U);
    msg.setSourceEntity(138U);
    msg.setDestination(3452U);
    msg.setDestinationEntity(177U);
    msg.time = 0.465015926575;
    msg.phi = 0.15088221822;
    msg.theta = 0.66092307746;
    msg.psi = 0.248568590689;
    msg.psi_magnetic = 0.933752094369;

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
    msg.setTimeStamp(0.34379741275);
    msg.setSource(26585U);
    msg.setSourceEntity(237U);
    msg.setDestination(51097U);
    msg.setDestinationEntity(198U);
    msg.time = 0.270187747236;
    msg.x = 0.0158717290536;
    msg.y = 0.515306596982;
    msg.z = 0.116142919484;
    msg.timestep = 0.138133441416;

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
    msg.setTimeStamp(0.469434429691);
    msg.setSource(37634U);
    msg.setSourceEntity(179U);
    msg.setDestination(46787U);
    msg.setDestinationEntity(38U);
    msg.time = 0.874712269369;
    msg.x = 0.169638916909;
    msg.y = 0.330048444928;
    msg.z = 0.621982036745;
    msg.timestep = 0.221754329537;

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
    msg.setTimeStamp(0.17249972745);
    msg.setSource(25673U);
    msg.setSourceEntity(252U);
    msg.setDestination(46704U);
    msg.setDestinationEntity(74U);
    msg.time = 0.263742069552;
    msg.x = 0.527369550396;
    msg.y = 0.23724104339;
    msg.z = 0.310852653105;
    msg.timestep = 0.888497327207;

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
    msg.setTimeStamp(0.566910382158);
    msg.setSource(37665U);
    msg.setSourceEntity(39U);
    msg.setDestination(57203U);
    msg.setDestinationEntity(19U);
    msg.time = 0.730948380485;
    msg.x = 0.700890849919;
    msg.y = 0.995922455214;
    msg.z = 0.036359509558;

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
    msg.setTimeStamp(0.444948094535);
    msg.setSource(34165U);
    msg.setSourceEntity(63U);
    msg.setDestination(40640U);
    msg.setDestinationEntity(21U);
    msg.time = 0.195661369792;
    msg.x = 0.639201951489;
    msg.y = 0.0957748039046;
    msg.z = 0.206794437148;

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
    msg.setTimeStamp(0.343022503894);
    msg.setSource(27370U);
    msg.setSourceEntity(154U);
    msg.setDestination(13405U);
    msg.setDestinationEntity(105U);
    msg.time = 0.970291658443;
    msg.x = 0.0475402899757;
    msg.y = 0.299513967515;
    msg.z = 0.201658803146;

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
    msg.setTimeStamp(0.373686479429);
    msg.setSource(5280U);
    msg.setSourceEntity(252U);
    msg.setDestination(12219U);
    msg.setDestinationEntity(236U);
    msg.time = 0.897540762605;
    msg.x = 0.577147639971;
    msg.y = 0.638140694904;
    msg.z = 0.389979726554;

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
    msg.setTimeStamp(0.271253575151);
    msg.setSource(10780U);
    msg.setSourceEntity(115U);
    msg.setDestination(21661U);
    msg.setDestinationEntity(180U);
    msg.time = 0.396432269033;
    msg.x = 0.426194057169;
    msg.y = 0.107863543593;
    msg.z = 0.185207172871;

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
    msg.setTimeStamp(0.518950644866);
    msg.setSource(24793U);
    msg.setSourceEntity(107U);
    msg.setDestination(16727U);
    msg.setDestinationEntity(190U);
    msg.time = 0.844039113624;
    msg.x = 0.416458761244;
    msg.y = 0.0508504872713;
    msg.z = 0.979428721703;

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
    msg.setTimeStamp(0.404348261689);
    msg.setSource(32315U);
    msg.setSourceEntity(162U);
    msg.setDestination(17868U);
    msg.setDestinationEntity(219U);
    msg.time = 0.136110393048;
    msg.x = 0.240383769035;
    msg.y = 0.607364251224;
    msg.z = 0.395866424854;

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
    msg.setTimeStamp(0.050654261724);
    msg.setSource(30097U);
    msg.setSourceEntity(111U);
    msg.setDestination(19307U);
    msg.setDestinationEntity(69U);
    msg.time = 0.573278045285;
    msg.x = 0.797985323865;
    msg.y = 0.292599982768;
    msg.z = 0.986929147252;

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
    msg.setTimeStamp(0.591471834178);
    msg.setSource(48072U);
    msg.setSourceEntity(109U);
    msg.setDestination(46185U);
    msg.setDestinationEntity(96U);
    msg.time = 0.661310857113;
    msg.x = 0.695226245162;
    msg.y = 0.526701685186;
    msg.z = 0.701870741351;

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
    msg.setTimeStamp(0.283730972534);
    msg.setSource(42782U);
    msg.setSourceEntity(49U);
    msg.setDestination(4250U);
    msg.setDestinationEntity(152U);
    msg.validity = 157U;
    msg.x = 0.213809696466;
    msg.y = 0.835044931033;
    msg.z = 0.591696663193;

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
    msg.setTimeStamp(0.0450134363515);
    msg.setSource(21487U);
    msg.setSourceEntity(241U);
    msg.setDestination(61486U);
    msg.setDestinationEntity(128U);
    msg.validity = 90U;
    msg.x = 0.824703379806;
    msg.y = 0.0735682190625;
    msg.z = 0.817849934327;

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
    msg.setTimeStamp(0.606499618186);
    msg.setSource(13942U);
    msg.setSourceEntity(139U);
    msg.setDestination(58363U);
    msg.setDestinationEntity(115U);
    msg.validity = 198U;
    msg.x = 0.00504806821555;
    msg.y = 0.0374328286065;
    msg.z = 0.978297369457;

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
    msg.setTimeStamp(0.994263345522);
    msg.setSource(40561U);
    msg.setSourceEntity(232U);
    msg.setDestination(56415U);
    msg.setDestinationEntity(145U);
    msg.validity = 135U;
    msg.x = 0.332383379515;
    msg.y = 0.540627325207;
    msg.z = 0.346183369597;

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
    msg.setTimeStamp(0.879729888392);
    msg.setSource(166U);
    msg.setSourceEntity(175U);
    msg.setDestination(10350U);
    msg.setDestinationEntity(105U);
    msg.validity = 23U;
    msg.x = 0.600810324929;
    msg.y = 0.120159257426;
    msg.z = 0.306239925951;

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
    msg.setTimeStamp(0.361263629738);
    msg.setSource(56063U);
    msg.setSourceEntity(118U);
    msg.setDestination(17397U);
    msg.setDestinationEntity(251U);
    msg.validity = 81U;
    msg.x = 0.394761568973;
    msg.y = 0.670123047791;
    msg.z = 0.591135068687;

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
    msg.setTimeStamp(0.737797405218);
    msg.setSource(20266U);
    msg.setSourceEntity(175U);
    msg.setDestination(35844U);
    msg.setDestinationEntity(83U);
    msg.time = 0.555392348316;
    msg.x = 0.0399427180327;
    msg.y = 0.0341102237365;
    msg.z = 0.0535895666082;

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
    msg.setTimeStamp(0.0984068335025);
    msg.setSource(5243U);
    msg.setSourceEntity(248U);
    msg.setDestination(54301U);
    msg.setDestinationEntity(123U);
    msg.time = 0.127523688567;
    msg.x = 0.485838925926;
    msg.y = 0.830588154329;
    msg.z = 0.800469978678;

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
    msg.setTimeStamp(0.805545159537);
    msg.setSource(48578U);
    msg.setSourceEntity(214U);
    msg.setDestination(42285U);
    msg.setDestinationEntity(112U);
    msg.time = 0.675809296441;
    msg.x = 0.87014332913;
    msg.y = 0.692581745097;
    msg.z = 0.860511519386;

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
    msg.setTimeStamp(0.0126551382594);
    msg.setSource(33035U);
    msg.setSourceEntity(91U);
    msg.setDestination(17069U);
    msg.setDestinationEntity(22U);
    msg.validity = 170U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.597600132114;
    tmp_msg_0.y = 0.318160252929;
    tmp_msg_0.z = 0.8584865805;
    tmp_msg_0.phi = 0.786272330852;
    tmp_msg_0.theta = 0.468565991035;
    tmp_msg_0.psi = 0.79039386122;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.514138164481;

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
    msg.setTimeStamp(0.887071255393);
    msg.setSource(38961U);
    msg.setSourceEntity(224U);
    msg.setDestination(13542U);
    msg.setDestinationEntity(67U);
    msg.validity = 15U;
    msg.value = 0.28881215997;

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
    msg.setTimeStamp(0.307995827467);
    msg.setSource(53978U);
    msg.setSourceEntity(123U);
    msg.setDestination(3657U);
    msg.setDestinationEntity(174U);
    msg.validity = 101U;
    msg.value = 0.89005261273;

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
    msg.setTimeStamp(0.311543613875);
    msg.setSource(34118U);
    msg.setSourceEntity(128U);
    msg.setDestination(53453U);
    msg.setDestinationEntity(89U);
    msg.value = 0.0942176721363;

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
    msg.setTimeStamp(0.792955879639);
    msg.setSource(13159U);
    msg.setSourceEntity(48U);
    msg.setDestination(64111U);
    msg.setDestinationEntity(113U);
    msg.value = 0.25318221711;

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
    msg.setTimeStamp(0.29324993347);
    msg.setSource(5481U);
    msg.setSourceEntity(196U);
    msg.setDestination(7781U);
    msg.setDestinationEntity(62U);
    msg.value = 0.894024746101;

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
    msg.setTimeStamp(0.22549272089);
    msg.setSource(11809U);
    msg.setSourceEntity(92U);
    msg.setDestination(35961U);
    msg.setDestinationEntity(122U);
    msg.value = 0.446413692074;

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
    msg.setTimeStamp(0.076647338462);
    msg.setSource(13696U);
    msg.setSourceEntity(159U);
    msg.setDestination(44313U);
    msg.setDestinationEntity(180U);
    msg.value = 0.00613153311682;

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
    msg.setTimeStamp(0.686923600576);
    msg.setSource(49770U);
    msg.setSourceEntity(37U);
    msg.setDestination(48657U);
    msg.setDestinationEntity(64U);
    msg.value = 0.879825741785;

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
    msg.setTimeStamp(0.567608186953);
    msg.setSource(25189U);
    msg.setSourceEntity(153U);
    msg.setDestination(14315U);
    msg.setDestinationEntity(248U);
    msg.value = 0.722831476996;

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
    msg.setTimeStamp(0.894320009184);
    msg.setSource(13787U);
    msg.setSourceEntity(140U);
    msg.setDestination(16147U);
    msg.setDestinationEntity(250U);
    msg.value = 0.66397896099;

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
    msg.setTimeStamp(0.290275305441);
    msg.setSource(12822U);
    msg.setSourceEntity(25U);
    msg.setDestination(24384U);
    msg.setDestinationEntity(29U);
    msg.value = 0.14510857976;

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
    msg.setTimeStamp(0.668105312582);
    msg.setSource(24175U);
    msg.setSourceEntity(237U);
    msg.setDestination(42170U);
    msg.setDestinationEntity(132U);
    msg.value = 0.15630504615;

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
    msg.setTimeStamp(0.317348332973);
    msg.setSource(58332U);
    msg.setSourceEntity(6U);
    msg.setDestination(37028U);
    msg.setDestinationEntity(236U);
    msg.value = 0.61694998144;

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
    msg.setTimeStamp(0.707883560565);
    msg.setSource(40234U);
    msg.setSourceEntity(239U);
    msg.setDestination(18151U);
    msg.setDestinationEntity(115U);
    msg.value = 0.854097186373;

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
    msg.setTimeStamp(0.00842825177806);
    msg.setSource(26125U);
    msg.setSourceEntity(163U);
    msg.setDestination(3380U);
    msg.setDestinationEntity(240U);
    msg.value = 0.848547279672;

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
    msg.setTimeStamp(0.103171540136);
    msg.setSource(21906U);
    msg.setSourceEntity(212U);
    msg.setDestination(57344U);
    msg.setDestinationEntity(105U);
    msg.value = 0.548322706437;

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
    msg.setTimeStamp(0.177990068895);
    msg.setSource(4535U);
    msg.setSourceEntity(52U);
    msg.setDestination(62779U);
    msg.setDestinationEntity(195U);
    msg.value = 0.146466088287;

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
    msg.setTimeStamp(0.231318425259);
    msg.setSource(60865U);
    msg.setSourceEntity(121U);
    msg.setDestination(14046U);
    msg.setDestinationEntity(43U);
    msg.value = 0.378416243347;

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
    msg.setTimeStamp(0.731384920362);
    msg.setSource(27476U);
    msg.setSourceEntity(251U);
    msg.setDestination(29529U);
    msg.setDestinationEntity(219U);
    msg.value = 0.378342256296;

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
    msg.setTimeStamp(0.577710799448);
    msg.setSource(52896U);
    msg.setSourceEntity(175U);
    msg.setDestination(56140U);
    msg.setDestinationEntity(199U);
    msg.value = 0.279301256419;

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
    msg.setTimeStamp(0.250475502969);
    msg.setSource(40128U);
    msg.setSourceEntity(219U);
    msg.setDestination(63456U);
    msg.setDestinationEntity(0U);
    msg.value = 0.0898636535852;

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
    msg.setTimeStamp(0.73995274686);
    msg.setSource(19616U);
    msg.setSourceEntity(113U);
    msg.setDestination(8637U);
    msg.setDestinationEntity(160U);
    msg.value = 0.86157771809;

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
    msg.setTimeStamp(0.704960379697);
    msg.setSource(33123U);
    msg.setSourceEntity(236U);
    msg.setDestination(45556U);
    msg.setDestinationEntity(38U);
    msg.value = 0.0428008004832;

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
    msg.setTimeStamp(0.558844938652);
    msg.setSource(22436U);
    msg.setSourceEntity(198U);
    msg.setDestination(48122U);
    msg.setDestinationEntity(202U);
    msg.value = 0.00212521056523;

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
    msg.setTimeStamp(0.778210114781);
    msg.setSource(36282U);
    msg.setSourceEntity(42U);
    msg.setDestination(45498U);
    msg.setDestinationEntity(72U);
    msg.value = 0.599642219182;

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
    msg.setTimeStamp(0.436338754255);
    msg.setSource(28633U);
    msg.setSourceEntity(143U);
    msg.setDestination(61382U);
    msg.setDestinationEntity(18U);
    msg.value = 0.762833914237;

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
    msg.setTimeStamp(0.507476248484);
    msg.setSource(57773U);
    msg.setSourceEntity(169U);
    msg.setDestination(61501U);
    msg.setDestinationEntity(228U);
    msg.direction = 0.880139637514;
    msg.speed = 0.680844468298;
    msg.turbulence = 0.952348915351;

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
    msg.setTimeStamp(0.736986443828);
    msg.setSource(54828U);
    msg.setSourceEntity(143U);
    msg.setDestination(29995U);
    msg.setDestinationEntity(89U);
    msg.direction = 0.962091766963;
    msg.speed = 0.492708055554;
    msg.turbulence = 0.705091270553;

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
    msg.setTimeStamp(0.653051518529);
    msg.setSource(8173U);
    msg.setSourceEntity(100U);
    msg.setDestination(54671U);
    msg.setDestinationEntity(139U);
    msg.direction = 0.790765807416;
    msg.speed = 0.470518705091;
    msg.turbulence = 0.114565547879;

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
    msg.setTimeStamp(0.473358648207);
    msg.setSource(20686U);
    msg.setSourceEntity(41U);
    msg.setDestination(29688U);
    msg.setDestinationEntity(227U);
    msg.value = 0.804896466066;

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
    msg.setTimeStamp(0.485928283366);
    msg.setSource(7476U);
    msg.setSourceEntity(98U);
    msg.setDestination(3049U);
    msg.setDestinationEntity(107U);
    msg.value = 0.912789733246;

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
    msg.setTimeStamp(0.399141976615);
    msg.setSource(60584U);
    msg.setSourceEntity(162U);
    msg.setDestination(53479U);
    msg.setDestinationEntity(58U);
    msg.value = 0.558848992625;

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
    msg.setTimeStamp(0.332185562813);
    msg.setSource(26155U);
    msg.setSourceEntity(91U);
    msg.setDestination(15499U);
    msg.setDestinationEntity(28U);
    msg.value.assign("EHGQOBMSVKVCYHVAYOHRUXKDPGCBRAQKUFAVFNCYBTKNBYCQWEUHAPORPGXWDLLTCCHFKISLTDLFKUDXGZZJWNTEGYDHVIWGFOLMHNCQBODBEGDGHYMXISVWXLMFKYXPQEZJRCOTXPFCSBKTPZJLATISRUZZTRZYNJCQYUMBMJNQZFMFLYRNWNKQRUREOISNRXQSDEQXWAJAZDAGIODVP");

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
    msg.setTimeStamp(0.95282851627);
    msg.setSource(24616U);
    msg.setSourceEntity(158U);
    msg.setDestination(23884U);
    msg.setDestinationEntity(216U);
    msg.value.assign("XDMODHINKEZBUNKWWKLPCIWQZXJDGYK");

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
    msg.setTimeStamp(0.369357132787);
    msg.setSource(7521U);
    msg.setSourceEntity(94U);
    msg.setDestination(7555U);
    msg.setDestinationEntity(187U);
    msg.value.assign("BCNRQSINWTWOOINZEXJRNGFWWGMPQMUFZRVKBFXZOEAJKOVBTSVUOBICNSSZUVGTPQXBGFPABRDCOMWJDMBJCIVRXGCXBIHBAHYQPRMTDKNYFFZUCRPCZQYLIALVOJEHQYWRAZXHAGKQYELNWJNJSHPVAJQHOSRVUKCREPHPWAYLQIUWYLSMDHFNUTDUZFAPOGTGZFWQJIESIFKTLUMSTLMHKXMLTCEMX");

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
    msg.setTimeStamp(0.887269656738);
    msg.setSource(5764U);
    msg.setSourceEntity(191U);
    msg.setDestination(42032U);
    msg.setDestinationEntity(156U);
    const char tmp_msg_0[] = {54, -101, -110, -124, 25, 44, -68, 97, 43, 71, -25, -104, 123, -111, -56, -39, 109, -35, 111, 84, -37, 85, -108, 49, 86, 22, -48, -74, -56, 4, -3, -1, -11, -76, -59, 65, 63, -60, -39, 9, 120, -114, -45, -79, 115, -17, 77, 3, -21, -58, -11, 119, -26, -80, 9, 115, 113, -36, 24, 6, 126, -20, 111, 10, 4, -1, 17, 119, -110, 124, -105, 78, -65, -51, -33, -48, 90, -118, 18, 17, 30, -51, -35, 32, 43, -40, 109, -116, 92, 102, 113, 72, -91, 86, 49, -83, 29, 12, -110, -114, -69, 124, -88, -76, 96, -84, -93, -102, 55, 126, 101, -113, 87, -56, -55, 39, -8, 12, -74, 30, -19, -126, 44, -96, -58, -54, 110, 50, -53, 78, -110, 59, -94, -81, -70, 62, -127, 84, 85, -69, -44, -46, 79, 59, -101, 120, -58, -83, -53, 33, -29, 108, 75, 94, -89, -12, -78, -46, 16, 49, 19, 51, 9, -111, -39, -87, 33, -16, 81, -116, 59, -6, -39, -93, 104, 65, -98, -46, -86, 85, -56, 110, 73, -69, -23, 70, -79, 61, -51, 59, 64, 5, -57, 114, 50, -75, -28, 89, -111, 35, -85, -114, -7, -106, 5, -24, -90, 22, 73, 107, -3, -57, 71, 43, 83, -113, 80, 76, -105, 53, -96, -54, 86, -14, -87, 9, -89, 15, -41, 110, -112, 29, 37, 26, 15, 81, -21, -29, -70, -74, -61, 13, 36, -44, -17, -69};
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
    msg.setTimeStamp(0.842003352456);
    msg.setSource(7822U);
    msg.setSourceEntity(233U);
    msg.setDestination(26567U);
    msg.setDestinationEntity(159U);
    const char tmp_msg_0[] = {-50, -124, 40, -86, 36, 53, -66, -37, -72, 112, 106, 49, -89, 43, 73, -64, -118, -57, 33, -32, 90, 126, -29, 45, 47, 23, -26, -38, 78, 109, 86, 87, -48, 48, -35, -55, 75, -99, 62, 87, 108, -96, -82, -20, -123, 42, -104, -107, 18, -84, -115, -80, -91, -11, -52, -107, 104, -100, 27, 61, 93, -27, 106, -16, 109, 9, 18, -53, -87, -57, -68, -50, -5, 19, -119, -85, 56, -61, -112, 42, -109, 99, -36, 36, 62, -96, -11, -111, -22, -126, 1, 95, -75, -115, 34, 15, 27, -110, 28, -15, 117, 32, -107, -71, -6, 95, 106, -73, 120, -31, -96, -93, 26, -101, 103, -99, 102, 64, 29, -60, 103, -125, 81, -116, -83, -37, -116, -49, -76, 27, -5, 10, 37, 72, 105, -7, 74, -95, -121, -104, -100, 117, -75, -119, 101, 80, -123, 95, 79, 125, 113, -49, -42, -71, -123, -69, -8, 111, 55, 67, -109, -97, 96, -74, 83, 31, 61, -117, -90, 3, -57, -85, 3, 95, -106, -62, 12, -61, 87, 61, 7, -114, 91, -99, -3, -123, -2, -13, 43, -30, -54, 20, 61, -67, 41, 18, -64, 36, -104, 58, 87, -115, 9, -50, 65, 77, -107, 116, 17, -7, -90, -83, -126, 4, 45, 88, -6, -14, 62, 69, 88, 19, -85, 32, 94, 85, -15};
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
    msg.setTimeStamp(0.474399117015);
    msg.setSource(2902U);
    msg.setSourceEntity(38U);
    msg.setDestination(19259U);
    msg.setDestinationEntity(0U);
    const char tmp_msg_0[] = {-73, 64, -5, 49, 12, 58, 9, -41, 18, 115, 94, -62, -15, -32, 21, 103, 101, 32, -94, 58, -53, 90, 11, 7, -44, -103, -56, 69, 7, -31, 63, 36, -118, -114, 66, 111, 17, -125, 110, -22};
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
    msg.setTimeStamp(0.347488686211);
    msg.setSource(51122U);
    msg.setSourceEntity(70U);
    msg.setDestination(21662U);
    msg.setDestinationEntity(207U);
    msg.value = 0.99688058699;

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
    msg.setTimeStamp(0.976051444343);
    msg.setSource(56627U);
    msg.setSourceEntity(146U);
    msg.setDestination(39758U);
    msg.setDestinationEntity(200U);
    msg.value = 0.0965790325189;

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
    msg.setTimeStamp(0.183696798733);
    msg.setSource(52922U);
    msg.setSourceEntity(20U);
    msg.setDestination(18619U);
    msg.setDestinationEntity(20U);
    msg.value = 0.058466127671;

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
    msg.setTimeStamp(0.97519363643);
    msg.setSource(46540U);
    msg.setSourceEntity(204U);
    msg.setDestination(7487U);
    msg.setDestinationEntity(189U);
    msg.type = 26U;
    msg.frequency = 1096675451U;
    msg.min_range = 34860U;
    msg.max_range = 52123U;
    msg.bits_per_point = 80U;
    msg.scale_factor = 0.85780109029;
    const char tmp_msg_0[] = {-22, -104, -115, -77, -117, -54, -9, -104, -7, 110, -21, 118, -99, 121, -98, -104, 11, -49, -34, 108, 62, 27, -44, 6, -12, -63, -34, -25, -52, -117, -126, -71, 4, 104, 101, -89, 31, 64, -124, 112, 20, 10, -7, 69, 76, 114, -49, 94, -66, -16, 27, 2, 111, 120, -19, 12, 95, 18, 91, -7, 18, 63, 97, 49, 95, 6, -43, 94, -2, -106, 52, 97, -25, 62, 58, -68, -7, 26, 77, 95, -125, 64, -53, 66, 41, -106, 61, -59, 123, -14, -88, -20, -66, -39, 26, 32, -44, -54, -29, -114, 14, 21, 44, -5, -28, 97, 113, 87, -124, -49, 7, -72, -15, -44, 94, 46, 8, 9, 91, 79, -64, -46, -90, 14, 9, -81, 114, -117, 10, -99, 18, -74, -124, -126, 51, 80, -38, -39, -44, -128, 76, 44, 99, 17, -2, 4, 122, -25, -68, -41, -105, 126, 39, -44, -34, 7, -117, -101, -79, -102, -44, -76, 56, -114, -40, 58, -119, -122, 17, 95, 34, 71, -104, -46, 117, -14, -20, 87};
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
    msg.setTimeStamp(0.0256120433788);
    msg.setSource(5939U);
    msg.setSourceEntity(89U);
    msg.setDestination(28013U);
    msg.setDestinationEntity(231U);
    msg.type = 141U;
    msg.frequency = 630104560U;
    msg.min_range = 47216U;
    msg.max_range = 16965U;
    msg.bits_per_point = 210U;
    msg.scale_factor = 0.00108728870358;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.251019889603;
    tmp_msg_0.beam_height = 0.874601144046;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-12, 34, -13, 37, -40, 18, 116, -60, -55, 88, 67, -110, -27, -83, -73, 38, -128, -95, -9, 53, -44, 111, 38, 65, -72, -29, -91, -82, -38, 15, -63, 79, -69, 33, -6, 3, -43, -4};
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
    msg.setTimeStamp(0.0600378102293);
    msg.setSource(23583U);
    msg.setSourceEntity(227U);
    msg.setDestination(34900U);
    msg.setDestinationEntity(6U);
    msg.type = 92U;
    msg.frequency = 2154385523U;
    msg.min_range = 34275U;
    msg.max_range = 4869U;
    msg.bits_per_point = 149U;
    msg.scale_factor = 0.659934598508;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.940278457134;
    tmp_msg_0.beam_height = 0.97081177416;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {75, -12, -34, -24, 124, 69, -59, 88, 57, -104, 24, 12, -21, 46, 53, -116, 43, -16, 110, 111, 55, -74, -63, 45, -46, 69, 24, 77, 72};
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
    msg.setTimeStamp(0.469810164686);
    msg.setSource(55652U);
    msg.setSourceEntity(104U);
    msg.setDestination(17487U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.961134327637);
    msg.setSource(34783U);
    msg.setSourceEntity(12U);
    msg.setDestination(9947U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.574907249691);
    msg.setSource(33056U);
    msg.setSourceEntity(218U);
    msg.setDestination(14861U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.2903135286);
    msg.setSource(27695U);
    msg.setSourceEntity(22U);
    msg.setDestination(2348U);
    msg.setDestinationEntity(93U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.417536291271);
    msg.setSource(47795U);
    msg.setSourceEntity(204U);
    msg.setDestination(34883U);
    msg.setDestinationEntity(226U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.0240027619807);
    msg.setSource(39699U);
    msg.setSourceEntity(107U);
    msg.setDestination(39388U);
    msg.setDestinationEntity(83U);
    msg.op = 30U;

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
    msg.setTimeStamp(0.571706473109);
    msg.setSource(15018U);
    msg.setSourceEntity(119U);
    msg.setDestination(38078U);
    msg.setDestinationEntity(172U);
    msg.value = 0.407989557279;
    msg.confidence = 0.308813112846;
    msg.opmodes.assign("HUACQBHINEFRWWCXKGZWMPKWNCNTRFLCXKLOSMZHUKLVUKHEAEVOAEKMBVDCBUJFBUYMTKBYPYLFNBPJJXZFDSTOJGAQZOGEOSNOJTMGFREWQVKRIXZOVMQNYFYRGWMRCUZHRGPESEUWCZFYITCZNGTZWREYIHVDQSLVYTDXLBNKJMFASPIDMXNBSWLODABLGHTIXAABKRJJIIQDDOUGVXQJTPQZDSUAPGIECSXYVQPDQHNJLMXSHOITWH");

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
    msg.setTimeStamp(0.125325564889);
    msg.setSource(62086U);
    msg.setSourceEntity(217U);
    msg.setDestination(54378U);
    msg.setDestinationEntity(233U);
    msg.value = 0.544389583819;
    msg.confidence = 0.397239686012;
    msg.opmodes.assign("LBISKYRODORMAXDWYBSALNGKVZQVJAWHBFBABIRMHZGHSODQUMNHUHPTCJUVIPYXECXWDTMXPECLIXXVWHACVOTJDRFOSOPYAZBLVOAOQZYNNLRRDLWCBXHGUVBEALWFISFEFXFKTQNWYTEMYFEVJKLC");

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
    msg.setTimeStamp(0.801688086303);
    msg.setSource(53852U);
    msg.setSourceEntity(84U);
    msg.setDestination(42814U);
    msg.setDestinationEntity(225U);
    msg.value = 0.696333988427;
    msg.confidence = 0.16578050954;
    msg.opmodes.assign("RYBRHOEPTJPNBDZCSMXFEGZPDRLXDYBW");

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
    msg.setTimeStamp(0.887658703289);
    msg.setSource(41637U);
    msg.setSourceEntity(177U);
    msg.setDestination(51309U);
    msg.setDestinationEntity(7U);
    msg.itow = 905187788U;
    msg.lat = 0.456045232853;
    msg.lon = 0.430611044849;
    msg.height_ell = 0.751111229252;
    msg.height_sea = 0.0623393971289;
    msg.hacc = 0.537250111976;
    msg.vacc = 0.809836985874;
    msg.vel_n = 0.478923391161;
    msg.vel_e = 0.653887351322;
    msg.vel_d = 0.36865298722;
    msg.speed = 0.0128366407106;
    msg.gspeed = 0.850099209372;
    msg.heading = 0.673078393151;
    msg.sacc = 0.673972249137;
    msg.cacc = 0.479750683584;

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
    msg.setTimeStamp(0.859423906603);
    msg.setSource(36027U);
    msg.setSourceEntity(2U);
    msg.setDestination(60785U);
    msg.setDestinationEntity(212U);
    msg.itow = 4110593343U;
    msg.lat = 0.0915858432182;
    msg.lon = 0.919097369229;
    msg.height_ell = 0.872449749609;
    msg.height_sea = 0.0800287703834;
    msg.hacc = 0.646918847197;
    msg.vacc = 0.730132143523;
    msg.vel_n = 0.676112944608;
    msg.vel_e = 0.683281380691;
    msg.vel_d = 0.751890546788;
    msg.speed = 0.0954144307196;
    msg.gspeed = 0.391075029975;
    msg.heading = 0.00259862214712;
    msg.sacc = 0.201501246787;
    msg.cacc = 0.476281977132;

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
    msg.setTimeStamp(0.543359075429);
    msg.setSource(54146U);
    msg.setSourceEntity(57U);
    msg.setDestination(32388U);
    msg.setDestinationEntity(51U);
    msg.itow = 57117898U;
    msg.lat = 0.907436695738;
    msg.lon = 0.9118904187;
    msg.height_ell = 0.968493677877;
    msg.height_sea = 0.8775229771;
    msg.hacc = 0.685724656121;
    msg.vacc = 0.86071327874;
    msg.vel_n = 0.320350881267;
    msg.vel_e = 0.259340014399;
    msg.vel_d = 0.438611932628;
    msg.speed = 0.252059119523;
    msg.gspeed = 0.212528874005;
    msg.heading = 0.285107768504;
    msg.sacc = 0.636479431744;
    msg.cacc = 0.0952210746637;

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
    msg.setTimeStamp(0.00305006412798);
    msg.setSource(25324U);
    msg.setSourceEntity(16U);
    msg.setDestination(7016U);
    msg.setDestinationEntity(44U);
    msg.id = 6U;
    msg.value = 0.647784283098;

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
    msg.setTimeStamp(0.674915259045);
    msg.setSource(60311U);
    msg.setSourceEntity(150U);
    msg.setDestination(33905U);
    msg.setDestinationEntity(187U);
    msg.id = 250U;
    msg.value = 0.501344234211;

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
    msg.setTimeStamp(0.707109674968);
    msg.setSource(26374U);
    msg.setSourceEntity(97U);
    msg.setDestination(62689U);
    msg.setDestinationEntity(137U);
    msg.id = 184U;
    msg.value = 0.881045937616;

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
    msg.setTimeStamp(0.0337321746704);
    msg.setSource(54821U);
    msg.setSourceEntity(66U);
    msg.setDestination(11854U);
    msg.setDestinationEntity(196U);
    msg.x = 0.705670739485;
    msg.y = 0.949268269615;
    msg.z = 0.861242148265;
    msg.phi = 0.685179548879;
    msg.theta = 0.444751838863;
    msg.psi = 0.327805821861;

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
    msg.setTimeStamp(0.446343304383);
    msg.setSource(51378U);
    msg.setSourceEntity(247U);
    msg.setDestination(57580U);
    msg.setDestinationEntity(253U);
    msg.x = 0.777872836899;
    msg.y = 0.37308479416;
    msg.z = 0.70051392471;
    msg.phi = 0.967868253171;
    msg.theta = 0.177649622006;
    msg.psi = 0.573120794834;

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
    msg.setTimeStamp(0.315953351849);
    msg.setSource(54382U);
    msg.setSourceEntity(198U);
    msg.setDestination(15506U);
    msg.setDestinationEntity(206U);
    msg.x = 0.372663317888;
    msg.y = 0.487707714882;
    msg.z = 0.561484337063;
    msg.phi = 0.788078917081;
    msg.theta = 0.6164349828;
    msg.psi = 0.647850665142;

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
    msg.setTimeStamp(0.13403169129);
    msg.setSource(58018U);
    msg.setSourceEntity(82U);
    msg.setDestination(3464U);
    msg.setDestinationEntity(113U);
    msg.beam_width = 0.435111910621;
    msg.beam_height = 0.101182355912;

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
    msg.setTimeStamp(0.691956467377);
    msg.setSource(38109U);
    msg.setSourceEntity(136U);
    msg.setDestination(7614U);
    msg.setDestinationEntity(2U);
    msg.beam_width = 0.524768866449;
    msg.beam_height = 0.13760405081;

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
    msg.setTimeStamp(0.925565834223);
    msg.setSource(33646U);
    msg.setSourceEntity(239U);
    msg.setDestination(63945U);
    msg.setDestinationEntity(148U);
    msg.beam_width = 0.250112738759;
    msg.beam_height = 0.618534663582;

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
    msg.setTimeStamp(0.0567742755362);
    msg.setSource(6527U);
    msg.setSourceEntity(121U);
    msg.setDestination(52986U);
    msg.setDestinationEntity(33U);
    msg.sane = 105U;

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
    msg.setTimeStamp(0.103950976973);
    msg.setSource(57079U);
    msg.setSourceEntity(185U);
    msg.setDestination(15336U);
    msg.setDestinationEntity(245U);
    msg.sane = 207U;

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
    msg.setTimeStamp(0.0179053193826);
    msg.setSource(23363U);
    msg.setSourceEntity(88U);
    msg.setDestination(43891U);
    msg.setDestinationEntity(138U);
    msg.sane = 159U;

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
    msg.setTimeStamp(0.0239381261195);
    msg.setSource(25096U);
    msg.setSourceEntity(203U);
    msg.setDestination(35687U);
    msg.setDestinationEntity(50U);
    msg.value = 0.5117196042;

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
    msg.setTimeStamp(0.0401982867891);
    msg.setSource(8814U);
    msg.setSourceEntity(24U);
    msg.setDestination(17174U);
    msg.setDestinationEntity(1U);
    msg.value = 0.542252811322;

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
    msg.setTimeStamp(0.357680025305);
    msg.setSource(61240U);
    msg.setSourceEntity(10U);
    msg.setDestination(9789U);
    msg.setDestinationEntity(37U);
    msg.value = 0.555894623356;

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
    msg.setTimeStamp(0.530491654827);
    msg.setSource(2944U);
    msg.setSourceEntity(88U);
    msg.setDestination(11855U);
    msg.setDestinationEntity(122U);
    msg.value = 0.0580851866756;

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
    msg.setTimeStamp(0.645712793302);
    msg.setSource(56230U);
    msg.setSourceEntity(80U);
    msg.setDestination(4749U);
    msg.setDestinationEntity(100U);
    msg.value = 0.230264099068;

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
    msg.setTimeStamp(0.565379274203);
    msg.setSource(47672U);
    msg.setSourceEntity(38U);
    msg.setDestination(10584U);
    msg.setDestinationEntity(110U);
    msg.value = 0.324490219712;

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
    msg.setTimeStamp(0.0939159603792);
    msg.setSource(50967U);
    msg.setSourceEntity(127U);
    msg.setDestination(32271U);
    msg.setDestinationEntity(214U);
    msg.value = 0.467079588637;

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
    msg.setTimeStamp(0.616689873075);
    msg.setSource(45585U);
    msg.setSourceEntity(175U);
    msg.setDestination(38124U);
    msg.setDestinationEntity(123U);
    msg.value = 0.208197270007;

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
    msg.setTimeStamp(0.6262935745);
    msg.setSource(63655U);
    msg.setSourceEntity(33U);
    msg.setDestination(15549U);
    msg.setDestinationEntity(158U);
    msg.value = 0.853379958352;

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
    msg.setTimeStamp(0.924780348167);
    msg.setSource(27330U);
    msg.setSourceEntity(183U);
    msg.setDestination(53195U);
    msg.setDestinationEntity(66U);
    msg.value = 0.434275878258;

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
    msg.setTimeStamp(0.827094064075);
    msg.setSource(6823U);
    msg.setSourceEntity(253U);
    msg.setDestination(57134U);
    msg.setDestinationEntity(88U);
    msg.value = 0.910373976544;

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
    msg.setTimeStamp(0.139711134044);
    msg.setSource(28486U);
    msg.setSourceEntity(8U);
    msg.setDestination(48350U);
    msg.setDestinationEntity(181U);
    msg.value = 0.117676870467;

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
    msg.setTimeStamp(0.278979741027);
    msg.setSource(41404U);
    msg.setSourceEntity(15U);
    msg.setDestination(19363U);
    msg.setDestinationEntity(211U);
    msg.value = 0.0439792230391;

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
    msg.setTimeStamp(0.512390941009);
    msg.setSource(11225U);
    msg.setSourceEntity(121U);
    msg.setDestination(65408U);
    msg.setDestinationEntity(104U);
    msg.value = 0.704981924466;

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
    msg.setTimeStamp(0.348460754199);
    msg.setSource(57043U);
    msg.setSourceEntity(150U);
    msg.setDestination(10866U);
    msg.setDestinationEntity(12U);
    msg.value = 0.218954836734;

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
    msg.setTimeStamp(0.709478037021);
    msg.setSource(15585U);
    msg.setSourceEntity(198U);
    msg.setDestination(5639U);
    msg.setDestinationEntity(115U);
    msg.value = 0.0640423967511;

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
    msg.setTimeStamp(0.557054148041);
    msg.setSource(42283U);
    msg.setSourceEntity(190U);
    msg.setDestination(16902U);
    msg.setDestinationEntity(164U);
    msg.value = 0.776464486394;

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
    msg.setTimeStamp(0.544157003563);
    msg.setSource(44585U);
    msg.setSourceEntity(147U);
    msg.setDestination(49416U);
    msg.setDestinationEntity(79U);
    msg.value = 0.793399470929;

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
    msg.setTimeStamp(0.981570362174);
    msg.setSource(53113U);
    msg.setSourceEntity(102U);
    msg.setDestination(9424U);
    msg.setDestinationEntity(231U);
    msg.value = 0.771324225332;

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
    msg.setTimeStamp(0.963567800184);
    msg.setSource(2347U);
    msg.setSourceEntity(181U);
    msg.setDestination(59754U);
    msg.setDestinationEntity(210U);
    msg.value = 0.328645621708;

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
    msg.setTimeStamp(0.292846436328);
    msg.setSource(48021U);
    msg.setSourceEntity(192U);
    msg.setDestination(45989U);
    msg.setDestinationEntity(62U);
    msg.value = 0.997814674015;

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
    msg.setTimeStamp(0.235300460805);
    msg.setSource(22414U);
    msg.setSourceEntity(225U);
    msg.setDestination(47830U);
    msg.setDestinationEntity(14U);
    msg.value = 0.85152391865;

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
    msg.setTimeStamp(0.280546003192);
    msg.setSource(12668U);
    msg.setSourceEntity(53U);
    msg.setDestination(41072U);
    msg.setDestinationEntity(4U);
    msg.value = 0.0745039551684;

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
    msg.setTimeStamp(0.969053269205);
    msg.setSource(27904U);
    msg.setSourceEntity(240U);
    msg.setDestination(32094U);
    msg.setDestinationEntity(99U);
    msg.value = 0.444139216264;

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
    msg.setTimeStamp(0.409147386542);
    msg.setSource(41612U);
    msg.setSourceEntity(58U);
    msg.setDestination(28910U);
    msg.setDestinationEntity(235U);
    msg.validity = 52444U;
    msg.type = 251U;
    msg.tow = 2503526757U;
    msg.base_lat = 0.713240660355;
    msg.base_lon = 0.641141066725;
    msg.base_height = 0.289027836821;
    msg.n = 0.482067449353;
    msg.e = 0.515695671961;
    msg.d = 0.232624072761;
    msg.v_n = 0.526910375479;
    msg.v_e = 0.602177032405;
    msg.v_d = 0.416033755787;
    msg.satellites = 230U;
    msg.iar_hyp = 13644U;
    msg.iar_ratio = 0.830778993696;

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
    msg.setTimeStamp(0.769931385968);
    msg.setSource(25771U);
    msg.setSourceEntity(187U);
    msg.setDestination(10766U);
    msg.setDestinationEntity(93U);
    msg.validity = 51709U;
    msg.type = 12U;
    msg.tow = 2543346557U;
    msg.base_lat = 0.560831377205;
    msg.base_lon = 0.138265764827;
    msg.base_height = 0.759043304596;
    msg.n = 0.502550585439;
    msg.e = 0.970063911828;
    msg.d = 0.939404052547;
    msg.v_n = 0.750260767007;
    msg.v_e = 0.339971824452;
    msg.v_d = 0.214672740245;
    msg.satellites = 60U;
    msg.iar_hyp = 8480U;
    msg.iar_ratio = 0.785906344935;

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
    msg.setTimeStamp(0.564025658212);
    msg.setSource(63160U);
    msg.setSourceEntity(218U);
    msg.setDestination(38840U);
    msg.setDestinationEntity(200U);
    msg.validity = 9377U;
    msg.type = 4U;
    msg.tow = 1338931306U;
    msg.base_lat = 0.271227460675;
    msg.base_lon = 0.288082440916;
    msg.base_height = 0.86154408011;
    msg.n = 0.479063421774;
    msg.e = 0.702946000137;
    msg.d = 0.814028598794;
    msg.v_n = 0.938394565905;
    msg.v_e = 0.798913974107;
    msg.v_d = 0.768712383838;
    msg.satellites = 233U;
    msg.iar_hyp = 20905U;
    msg.iar_ratio = 0.0712303973691;

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
    msg.setTimeStamp(0.91319160781);
    msg.setSource(39352U);
    msg.setSourceEntity(5U);
    msg.setDestination(8189U);
    msg.setDestinationEntity(149U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.611570949521;
    tmp_msg_0.lon = 0.0206548344832;
    tmp_msg_0.height = 0.449281542664;
    tmp_msg_0.x = 0.194553801258;
    tmp_msg_0.y = 0.484498330887;
    tmp_msg_0.z = 0.686437020309;
    tmp_msg_0.phi = 0.306140547562;
    tmp_msg_0.theta = 0.0099790321976;
    tmp_msg_0.psi = 0.517291696811;
    tmp_msg_0.u = 0.917071918538;
    tmp_msg_0.v = 0.144514522042;
    tmp_msg_0.w = 0.417704479136;
    tmp_msg_0.vx = 0.546148718141;
    tmp_msg_0.vy = 0.915119670416;
    tmp_msg_0.vz = 0.0467149720811;
    tmp_msg_0.p = 0.965014173411;
    tmp_msg_0.q = 0.119418459946;
    tmp_msg_0.r = 0.761878091037;
    tmp_msg_0.depth = 0.17587830459;
    tmp_msg_0.alt = 0.732722437276;
    msg.state.set(tmp_msg_0);
    msg.type = 215U;

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
    msg.setTimeStamp(0.51187753194);
    msg.setSource(48878U);
    msg.setSourceEntity(105U);
    msg.setDestination(22751U);
    msg.setDestinationEntity(76U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.53722102115;
    tmp_msg_0.lon = 0.770748652751;
    tmp_msg_0.height = 0.788751537358;
    tmp_msg_0.x = 0.510181421854;
    tmp_msg_0.y = 0.292005210585;
    tmp_msg_0.z = 0.191776968546;
    tmp_msg_0.phi = 0.446484945197;
    tmp_msg_0.theta = 0.885665286071;
    tmp_msg_0.psi = 0.530073618723;
    tmp_msg_0.u = 0.802175747287;
    tmp_msg_0.v = 0.522704225434;
    tmp_msg_0.w = 0.19678923761;
    tmp_msg_0.vx = 0.966377305072;
    tmp_msg_0.vy = 0.0245580363304;
    tmp_msg_0.vz = 0.624450962901;
    tmp_msg_0.p = 0.430310737564;
    tmp_msg_0.q = 0.538843678241;
    tmp_msg_0.r = 0.605215163643;
    tmp_msg_0.depth = 0.634359727936;
    tmp_msg_0.alt = 0.206815142304;
    msg.state.set(tmp_msg_0);
    msg.type = 96U;

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
    msg.setTimeStamp(0.350206200992);
    msg.setSource(4904U);
    msg.setSourceEntity(136U);
    msg.setDestination(32892U);
    msg.setDestinationEntity(146U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.321814156879;
    tmp_msg_0.lon = 0.959394189805;
    tmp_msg_0.height = 0.86546484516;
    tmp_msg_0.x = 0.842472528464;
    tmp_msg_0.y = 0.598803651927;
    tmp_msg_0.z = 0.721964119727;
    tmp_msg_0.phi = 0.633523170534;
    tmp_msg_0.theta = 0.533619951794;
    tmp_msg_0.psi = 0.806090580131;
    tmp_msg_0.u = 0.731830478902;
    tmp_msg_0.v = 0.892456788606;
    tmp_msg_0.w = 0.514996998038;
    tmp_msg_0.vx = 0.926610673229;
    tmp_msg_0.vy = 0.145983616397;
    tmp_msg_0.vz = 0.937683086595;
    tmp_msg_0.p = 0.547560105029;
    tmp_msg_0.q = 0.500673279328;
    tmp_msg_0.r = 0.950674820222;
    tmp_msg_0.depth = 0.753814175418;
    tmp_msg_0.alt = 0.353479938527;
    msg.state.set(tmp_msg_0);
    msg.type = 201U;

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
    msg.setTimeStamp(0.0772096134418);
    msg.setSource(49076U);
    msg.setSourceEntity(165U);
    msg.setDestination(53512U);
    msg.setDestinationEntity(104U);
    msg.value = 0.900698847594;

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
    msg.setTimeStamp(0.282698269265);
    msg.setSource(37960U);
    msg.setSourceEntity(54U);
    msg.setDestination(17283U);
    msg.setDestinationEntity(134U);
    msg.value = 0.093678121833;

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
    msg.setTimeStamp(0.0307500091408);
    msg.setSource(21137U);
    msg.setSourceEntity(29U);
    msg.setDestination(58507U);
    msg.setDestinationEntity(23U);
    msg.value = 0.923507861205;

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
    msg.setTimeStamp(0.686330952686);
    msg.setSource(22469U);
    msg.setSourceEntity(234U);
    msg.setDestination(44318U);
    msg.setDestinationEntity(203U);
    msg.value = 0.58837635359;

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
    msg.setTimeStamp(0.811934977485);
    msg.setSource(23496U);
    msg.setSourceEntity(95U);
    msg.setDestination(18168U);
    msg.setDestinationEntity(133U);
    msg.value = 0.394498227686;

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
    msg.setTimeStamp(0.520928871407);
    msg.setSource(9176U);
    msg.setSourceEntity(46U);
    msg.setDestination(34294U);
    msg.setDestinationEntity(26U);
    msg.value = 0.323948606036;

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
    msg.setTimeStamp(0.344662976822);
    msg.setSource(3343U);
    msg.setSourceEntity(17U);
    msg.setDestination(30995U);
    msg.setDestinationEntity(194U);
    msg.value = 0.889284674182;

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
    msg.setTimeStamp(0.786017303425);
    msg.setSource(25435U);
    msg.setSourceEntity(254U);
    msg.setDestination(6974U);
    msg.setDestinationEntity(253U);
    msg.value = 0.666834454066;

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
    msg.setTimeStamp(0.760425469331);
    msg.setSource(22958U);
    msg.setSourceEntity(63U);
    msg.setDestination(55993U);
    msg.setDestinationEntity(60U);
    msg.value = 0.413598425281;

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
    msg.setTimeStamp(0.416295650624);
    msg.setSource(54726U);
    msg.setSourceEntity(175U);
    msg.setDestination(14033U);
    msg.setDestinationEntity(165U);
    msg.value = 0.60303476988;

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
    msg.setTimeStamp(0.652498932134);
    msg.setSource(51163U);
    msg.setSourceEntity(114U);
    msg.setDestination(52668U);
    msg.setDestinationEntity(98U);
    msg.value = 0.304773382617;

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
    msg.setTimeStamp(0.717669919758);
    msg.setSource(55927U);
    msg.setSourceEntity(146U);
    msg.setDestination(39977U);
    msg.setDestinationEntity(178U);
    msg.value = 0.190735009568;

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
    msg.setTimeStamp(0.10214135109);
    msg.setSource(8525U);
    msg.setSourceEntity(43U);
    msg.setDestination(19159U);
    msg.setDestinationEntity(249U);
    msg.value = 0.979500114144;

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
    msg.setTimeStamp(0.0489368838355);
    msg.setSource(16039U);
    msg.setSourceEntity(0U);
    msg.setDestination(24034U);
    msg.setDestinationEntity(124U);
    msg.value = 0.703949573306;

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
    msg.setTimeStamp(0.367847289827);
    msg.setSource(13061U);
    msg.setSourceEntity(247U);
    msg.setDestination(56265U);
    msg.setDestinationEntity(168U);
    msg.value = 0.388873758011;

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
    msg.setTimeStamp(0.187664562763);
    msg.setSource(6977U);
    msg.setSourceEntity(54U);
    msg.setDestination(44655U);
    msg.setDestinationEntity(101U);
    msg.id = 56U;
    msg.zoom = 167U;
    msg.action = 53U;

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
    msg.setTimeStamp(0.194547207645);
    msg.setSource(58031U);
    msg.setSourceEntity(60U);
    msg.setDestination(3515U);
    msg.setDestinationEntity(243U);
    msg.id = 3U;
    msg.zoom = 124U;
    msg.action = 144U;

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
    msg.setTimeStamp(0.577950607198);
    msg.setSource(1356U);
    msg.setSourceEntity(34U);
    msg.setDestination(47522U);
    msg.setDestinationEntity(196U);
    msg.id = 130U;
    msg.zoom = 75U;
    msg.action = 90U;

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
    msg.setTimeStamp(0.687746736025);
    msg.setSource(44121U);
    msg.setSourceEntity(252U);
    msg.setDestination(51183U);
    msg.setDestinationEntity(249U);
    msg.id = 128U;
    msg.value = 0.705602115265;

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
    msg.setTimeStamp(0.150335556272);
    msg.setSource(41111U);
    msg.setSourceEntity(196U);
    msg.setDestination(17287U);
    msg.setDestinationEntity(246U);
    msg.id = 48U;
    msg.value = 0.904582839563;

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
    msg.setTimeStamp(0.114273622569);
    msg.setSource(607U);
    msg.setSourceEntity(233U);
    msg.setDestination(11714U);
    msg.setDestinationEntity(156U);
    msg.id = 64U;
    msg.value = 0.49181920562;

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
    msg.setTimeStamp(0.543654215397);
    msg.setSource(39764U);
    msg.setSourceEntity(168U);
    msg.setDestination(62161U);
    msg.setDestinationEntity(244U);
    msg.id = 123U;
    msg.value = 0.0892395079628;

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
    msg.setTimeStamp(0.20763490593);
    msg.setSource(11451U);
    msg.setSourceEntity(182U);
    msg.setDestination(59565U);
    msg.setDestinationEntity(184U);
    msg.id = 124U;
    msg.value = 0.752513601085;

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
    msg.setTimeStamp(0.908216802947);
    msg.setSource(37984U);
    msg.setSourceEntity(76U);
    msg.setDestination(15756U);
    msg.setDestinationEntity(239U);
    msg.id = 183U;
    msg.value = 0.318093382212;

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
    msg.setTimeStamp(0.281351501721);
    msg.setSource(2434U);
    msg.setSourceEntity(89U);
    msg.setDestination(63962U);
    msg.setDestinationEntity(121U);
    msg.id = 136U;
    msg.angle = 0.110170443702;

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
    msg.setTimeStamp(0.286694066448);
    msg.setSource(32858U);
    msg.setSourceEntity(249U);
    msg.setDestination(56964U);
    msg.setDestinationEntity(249U);
    msg.id = 79U;
    msg.angle = 0.673624176903;

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
    msg.setTimeStamp(0.786519343788);
    msg.setSource(59446U);
    msg.setSourceEntity(230U);
    msg.setDestination(29173U);
    msg.setDestinationEntity(120U);
    msg.id = 249U;
    msg.angle = 0.84747712472;

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
    msg.setTimeStamp(0.966226080155);
    msg.setSource(6089U);
    msg.setSourceEntity(170U);
    msg.setDestination(11089U);
    msg.setDestinationEntity(206U);
    msg.op = 62U;
    msg.actions.assign("RIVUFHMPANYULGZNVBASPCFZYEMZFJQHKHLQNIUXQPBOZYUAMKSTOGJBBQKPOTEAZKWLYKPWGCFYDDATBGJGMSOMFBNDXHCIOWUGXZXHZWMIOLQXDSRBZJJOWMKUYSUXKCLFLFRPMCAECITDOVFIGREFKZHDVSTWRMDGRNTNIJWLYXTTIPAORBMFCBZPXQVYWEOEJCDJQELEDACWANSPGYVGXQLQL");

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
    msg.setTimeStamp(0.923828130919);
    msg.setSource(42485U);
    msg.setSourceEntity(182U);
    msg.setDestination(13268U);
    msg.setDestinationEntity(4U);
    msg.op = 236U;
    msg.actions.assign("VYQDEPPRAQMIZHPMDHJWABHFGTLSEVDYSAUECBXCPUWVZFLNYYJHYVJJQKUBWRFAIPTXMFTYOOLODPGWP");

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
    msg.setTimeStamp(0.0562074649885);
    msg.setSource(47313U);
    msg.setSourceEntity(145U);
    msg.setDestination(44359U);
    msg.setDestinationEntity(240U);
    msg.op = 33U;
    msg.actions.assign("ALBSANFTZDQRUFIDSOEHRAORSKGHKQDFAPWXIQHPTJYEVNILSXRXIJGXYNURGTYQYLIHUTLZVLRMVMCTWWVQMVBBLPJOYFBWPSKPNAMFODECAOWMMQNKKNWQCJAJJHHPCJRPLIFBVGDMXKUULESMVDVROAXULZDRIYENOTH");

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
    msg.setTimeStamp(0.367684561532);
    msg.setSource(44136U);
    msg.setSourceEntity(33U);
    msg.setDestination(56293U);
    msg.setDestinationEntity(221U);
    msg.actions.assign("RLPUZQWSASQIBBACMOIUJPLCNCHRWXDJZMEAKOYDPZUDVURGGMFGCHNBETACMECVIBGKHDRYMQYVVHFIOQLZYEDGXBNKKJBOUANWLXSDHTWYKFPAEIAJKQOHXEGDTJISXIMOCVTJNPVVSTFRYCMF");

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
    msg.setTimeStamp(0.127687608236);
    msg.setSource(53746U);
    msg.setSourceEntity(212U);
    msg.setDestination(41231U);
    msg.setDestinationEntity(22U);
    msg.actions.assign("RJEIHDKRKWVFZPOWUDCNZYAOKCSPWJXMQFCBDQOSLTDCPDYKOVSMLTXCLPJJSIGRXWYVUATJSYQHVFGJMYHNDQELRJEUYLGQZKMPLXPTTJWIVCOHALGUMVUIFZHBPTXRNHINZVXTBNQPCMGZFYDFRUYRDNZMKALBSNGTINMIKLJWCMTZSXEYCAOFQQHMODSXTOIEEAROGURXNW");

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
    msg.setTimeStamp(0.709380247548);
    msg.setSource(39364U);
    msg.setSourceEntity(156U);
    msg.setDestination(59117U);
    msg.setDestinationEntity(221U);
    msg.actions.assign("QKAOHEWHUAERWHTDIJBYXKHYUJCCCJDTOUQVSZHWEPNBOZBKMIJYWTAWZELOAZKVOJXYQHLMRSJUNLYSAVXCWDIZGDBQVBDNOVLCTUNTFXHFSZMMXAWCUURPEVGHGREMJBQPNAAXILLRO");

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
    msg.setTimeStamp(0.979250864118);
    msg.setSource(60750U);
    msg.setSourceEntity(179U);
    msg.setDestination(32640U);
    msg.setDestinationEntity(148U);
    msg.button = 103U;
    msg.value = 125U;

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
    msg.setTimeStamp(0.744453129415);
    msg.setSource(57854U);
    msg.setSourceEntity(191U);
    msg.setDestination(48641U);
    msg.setDestinationEntity(226U);
    msg.button = 251U;
    msg.value = 1U;

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
    msg.setTimeStamp(0.796421340962);
    msg.setSource(63520U);
    msg.setSourceEntity(104U);
    msg.setDestination(61193U);
    msg.setDestinationEntity(210U);
    msg.button = 208U;
    msg.value = 47U;

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
    msg.setTimeStamp(0.328987391044);
    msg.setSource(39720U);
    msg.setSourceEntity(0U);
    msg.setDestination(10299U);
    msg.setDestinationEntity(200U);
    msg.op = 21U;
    msg.text.assign("ICBDJUHFVPPOEKLGTNIRUXBXIUMMRPCBYFQLXTKZSMEJUZQSNHYXQJNOMFHTZZURABIOAENUZRXWYYQTQCCVOC");

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
    msg.setTimeStamp(0.551129102038);
    msg.setSource(24999U);
    msg.setSourceEntity(157U);
    msg.setDestination(59847U);
    msg.setDestinationEntity(189U);
    msg.op = 93U;
    msg.text.assign("COCSETYJMQXZLEPFSZQNCJRQGFDUFKUJSLXDYQYZDVKMMORWAVOPTHMVHWWXJQDATQEYHBQNTPHAYWGRUILBKCEBLQHCNHF");

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
    msg.setTimeStamp(0.413761082994);
    msg.setSource(24997U);
    msg.setSourceEntity(2U);
    msg.setDestination(20965U);
    msg.setDestinationEntity(251U);
    msg.op = 234U;
    msg.text.assign("ZHLCURINCOUKRWUCAJVIGYQQGSIMEIIOMDAGRHEXVHZTLRDSGLFNXNRBKOTASOJIHOOWRQEJJGALGQDANXLTMAGWFVIWBJUUKVXHTVYPDFWBUAPQCDOMHKBWGYLAVPNYRKSNDZUXDBPZCAFGVJWQZRYLIAFGBYMBITELWFHHDFQZTWSETMJOQLCEDQEJETPBKIZCNFYEDPZSOBCVKVWZHZTYXHPQSRUVMMTRULSPM");

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
    msg.setTimeStamp(0.516548081904);
    msg.setSource(44552U);
    msg.setSourceEntity(129U);
    msg.setDestination(24668U);
    msg.setDestinationEntity(248U);
    msg.op = 216U;
    msg.time_remain = 0.860339989641;
    msg.sched_time = 0.0990885264801;

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
    msg.setTimeStamp(0.51739760632);
    msg.setSource(17200U);
    msg.setSourceEntity(206U);
    msg.setDestination(55244U);
    msg.setDestinationEntity(76U);
    msg.op = 111U;
    msg.time_remain = 0.0652077734961;
    msg.sched_time = 0.033454450241;

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
    msg.setTimeStamp(0.333287109901);
    msg.setSource(14627U);
    msg.setSourceEntity(76U);
    msg.setDestination(9371U);
    msg.setDestinationEntity(124U);
    msg.op = 13U;
    msg.time_remain = 0.890982993546;
    msg.sched_time = 0.356256974243;

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
    msg.setTimeStamp(0.324105402398);
    msg.setSource(52884U);
    msg.setSourceEntity(25U);
    msg.setDestination(55529U);
    msg.setDestinationEntity(132U);
    msg.name.assign("JKTPLUZFEKJKGYDDPFHLZRCTOBSQXKVOUPGTSOHYIWQWLFGBYQRAOVZEASSKRSUHRVAPBFEVXAGNOIVCRFDNTTXXHMQYYMVFJHTFBWLWPSSTGASZFWZODHVMLUOQWZWCQKZCXHBNDXPJIGXTQFDYRMEHIBMZSEKTCPFLVGMUNUUZLWRDXGJWIMDAJEEMBBQYBEUNQENQBRYKHCGOCOVRJYSGVIRIN");
    msg.op = 18U;
    msg.sched_time = 0.829075418026;

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
    msg.setTimeStamp(0.732438565192);
    msg.setSource(27554U);
    msg.setSourceEntity(24U);
    msg.setDestination(53285U);
    msg.setDestinationEntity(126U);
    msg.name.assign("CGVGNMCVYKMANVBZTCNSWMYDHTBCAYLLS");
    msg.op = 140U;
    msg.sched_time = 0.46568757363;

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
    msg.setTimeStamp(0.447085360478);
    msg.setSource(13134U);
    msg.setSourceEntity(45U);
    msg.setDestination(20786U);
    msg.setDestinationEntity(220U);
    msg.name.assign("NXJSMDWUUQQLTPGDVGDKHWMKPLPHKXJQHSENAVBTCGEAWBTMHUXCIZPUBIAZRFXNMQAQYHHGLKHRWJDZBSVAXRLSVPROUONIYEZUJMKNBCUIZGGZFNLLXLKQTBVTJGFCFVTYOOSZDIOYRAAT");
    msg.op = 213U;
    msg.sched_time = 0.527780913242;

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
    msg.setTimeStamp(0.639014471492);
    msg.setSource(10591U);
    msg.setSourceEntity(100U);
    msg.setDestination(56544U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.513099639989);
    msg.setSource(18498U);
    msg.setSourceEntity(178U);
    msg.setDestination(23909U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.967137015008);
    msg.setSource(10378U);
    msg.setSourceEntity(133U);
    msg.setDestination(22500U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.464739691254);
    msg.setSource(16934U);
    msg.setSourceEntity(98U);
    msg.setDestination(901U);
    msg.setDestinationEntity(24U);
    msg.name.assign("FXWKOYKHHNEYEPTGWFDZJGRQLOJLAIZBNNATQYGOEYIQDJBIPUMXFHHLDUABVRBDVZNNPQSOERDYWZHTUXXJUIUGGAMLQDIKH");
    msg.state = 235U;

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
    msg.setTimeStamp(0.458602203686);
    msg.setSource(54686U);
    msg.setSourceEntity(194U);
    msg.setDestination(16734U);
    msg.setDestinationEntity(146U);
    msg.name.assign("NNDERRPNFOIJAAXHEPUAQGGHLPFHKTDEYSXYMFGARURVQX");
    msg.state = 193U;

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
    msg.setTimeStamp(0.534946327352);
    msg.setSource(14828U);
    msg.setSourceEntity(174U);
    msg.setDestination(8980U);
    msg.setDestinationEntity(149U);
    msg.name.assign("OYAVMCLWFRTRDUZAXQHGDPDJZCWNWIOCHRNBPOYSXFBMEDBRVLHAZSWDUYRFAOBAKCJIPHKFDVDNJQSNEGXTKGONECQEBUHXFGCTQXGZKVCNIICASNQACNVLLKUZMVSIPOTZPZDOIMVWOWCSSHKUYQRVEMOMUHYZRLKMIQOSEAUWFYEKYJFMBIEYPEPKTGHJJRBGJLKTDFTXTLYPT");
    msg.state = 56U;

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
    msg.setTimeStamp(0.589560803202);
    msg.setSource(19238U);
    msg.setSourceEntity(60U);
    msg.setDestination(63143U);
    msg.setDestinationEntity(140U);
    msg.name.assign("YURHARJQLDHUODESRIMPSCLZZIVZPZOYHHWOGMOMCGCOJIWNTAHVNBMSYAYJXPJBTWERMGTYHOWBVANIGFNVCKDHHZDCEZSBRIAPEKFGJTSAQPRGKKXVTEUXQUIGZBQJSAQDDMXULJSMUKFFETUPDWKFLCWXSLFOGTXZLCIXVCPPWROCBMUKWRMSAQFYVBLNYAXVOTW");
    msg.value = 232U;

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
    msg.setTimeStamp(0.712736842796);
    msg.setSource(41590U);
    msg.setSourceEntity(180U);
    msg.setDestination(11439U);
    msg.setDestinationEntity(185U);
    msg.name.assign("FPZBTKFLPKTGTQPFICHJDHCWVYVJEKYEKUGQQTZFEDYZINOMVNHILJNGRGMQBADRUETCXVRFXDSJMEHDSNWWWOYGPCOYPYIFQLHXVKNOBRXLQKSPSMCYYNMKDCABIVURAZLXAROWBYJJULUSLARKUIBSJBEVILCAWODNRWHGYQJHHOWOQOMPJIZRWSUBVMEFXJDSHTFEFHMCXODPECZKCLTGTXPRV");
    msg.value = 203U;

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
    msg.setTimeStamp(0.723302324508);
    msg.setSource(139U);
    msg.setSourceEntity(186U);
    msg.setDestination(47535U);
    msg.setDestinationEntity(172U);
    msg.name.assign("UNXLPCKDPHQIZOSBDJIGOPGOJTLZCGRFXRHOGRWVSLCTZEXGVTUOLTQNHFYBVOQKUDVKWAWJXPLFXQPIZZYSCTBEVLYXETTPRRSNDMZSFPJZRDVUCNYWAULBBKFNWNOVYSVQFMAYDUUZSKQZGNNIJQUHPACDYBJJERRKQDCLJTQJBAXMOENWJAFCTRDFMHGRBFWBSQIISEMG");
    msg.value = 203U;

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
    msg.setTimeStamp(0.959387710836);
    msg.setSource(12086U);
    msg.setSourceEntity(57U);
    msg.setDestination(53209U);
    msg.setDestinationEntity(215U);
    msg.name.assign("FZCURLZBZJEJHUVQYJWKKVHPOKWJQOOTTIPEGFPYGZXUXRLDSQRISTTWQHNCAHJXWPDYQKLAIEZSNVBLYOSPORWJNFFLZBOXWNWTNRMLGYYZMHPOUKBNMGGBHQTDTMVHVXOJLCCAHJDIOMKUGCIFEYJUEXFCDEIEAQUBDMPGNRVAIBAAZCXYPRYCRVSVTDRCBERQISJNMLCDKZHKAGQSQZFXKHFIVLMUKM");

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
    msg.setTimeStamp(0.519230291969);
    msg.setSource(62511U);
    msg.setSourceEntity(203U);
    msg.setDestination(17281U);
    msg.setDestinationEntity(20U);
    msg.name.assign("YDMLOGWCDNPABWQCEHGVJQVUOFAIPRKPEVKVHKWSLSSVJOZQNEBVNHPFYIHANQRMTUNGTEGIJQZZPNMRTKFUWKMHJMUJXTXFODQBXFIXPDALBWNPRKCSVJKXIOWWAUIGFOCCHMRIOSYUSEAQSAEZQMZGYUIHYYPLCBQCTOLBJFADY");

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
    msg.setTimeStamp(0.377789302308);
    msg.setSource(48698U);
    msg.setSourceEntity(95U);
    msg.setDestination(49105U);
    msg.setDestinationEntity(93U);
    msg.name.assign("ESIVWXKGITGKZZHUAXWDKMYIHFOYCFZDHGBNBSHDJKJCOBCKPFVLCWCZYXTZGAMUEMSFLMFAIDUDUKUTWSEOIAVPYFHOZQHLMLFTMGFDRPPBXLUSHYJTPMHZQXZGBQGVYCSIJNLZETZRIOGVBBPSXMMDCRKNWQJRKCEIRKHEOLAJSAXNVTVQTJWEYAWRQSXKULRSTNJRDVIYPQAPY");

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
    msg.setTimeStamp(0.995018458948);
    msg.setSource(65397U);
    msg.setSourceEntity(37U);
    msg.setDestination(13738U);
    msg.setDestinationEntity(143U);
    msg.name.assign("MCSCRVKEZXHDT");
    msg.value = 189U;

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
    msg.setTimeStamp(0.820024649937);
    msg.setSource(58557U);
    msg.setSourceEntity(70U);
    msg.setDestination(46499U);
    msg.setDestinationEntity(174U);
    msg.name.assign("XVCXFURNNQEDWTACTYCWGUKBPLHIKAVVWEMXDHKZSRRXEGBFUAMMZYIAOVBLXUNGFDMUSOQKPYLLUIOCJIKBGCWWMRXIGIEZQJBOTRPH");
    msg.value = 124U;

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
    msg.setTimeStamp(0.0773674384786);
    msg.setSource(59855U);
    msg.setSourceEntity(97U);
    msg.setDestination(24184U);
    msg.setDestinationEntity(23U);
    msg.name.assign("RUPVXYIAGQOVWOTNPFVOJSUIWDOINKWMPAKMBYMBVCGMHILJBZCGZARLTJHZXMLFNGVIYWDABPTLSSMZVIYHGEUUHGXSVLQGAAMSVFSEAYFLTXTWSDCKERIOUECFBSPYDLFRYKENJBYHWFWNHCNRERZSXTIRIHPRUZAZOMHCLDRKVEPZDQFKBGBOTANCQUOQUHYUCKONVCW");
    msg.value = 27U;

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
    msg.setTimeStamp(0.860517351706);
    msg.setSource(13974U);
    msg.setSourceEntity(182U);
    msg.setDestination(27249U);
    msg.setDestinationEntity(194U);
    msg.id = 96U;
    msg.period = 2330523127U;
    msg.duty_cycle = 857947304U;

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
    msg.setTimeStamp(0.0756339055816);
    msg.setSource(51260U);
    msg.setSourceEntity(109U);
    msg.setDestination(4894U);
    msg.setDestinationEntity(180U);
    msg.id = 239U;
    msg.period = 3998719556U;
    msg.duty_cycle = 2705188345U;

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
    msg.setTimeStamp(0.536770313957);
    msg.setSource(41085U);
    msg.setSourceEntity(100U);
    msg.setDestination(11180U);
    msg.setDestinationEntity(41U);
    msg.id = 67U;
    msg.period = 80081877U;
    msg.duty_cycle = 3361694411U;

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
    msg.setTimeStamp(0.256519628294);
    msg.setSource(18596U);
    msg.setSourceEntity(155U);
    msg.setDestination(6272U);
    msg.setDestinationEntity(202U);
    msg.id = 137U;
    msg.period = 4253392132U;
    msg.duty_cycle = 3752885751U;

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
    msg.setTimeStamp(0.889436554806);
    msg.setSource(12696U);
    msg.setSourceEntity(174U);
    msg.setDestination(57043U);
    msg.setDestinationEntity(42U);
    msg.id = 47U;
    msg.period = 2702682179U;
    msg.duty_cycle = 3623389185U;

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
    msg.setTimeStamp(0.621488643391);
    msg.setSource(18177U);
    msg.setSourceEntity(10U);
    msg.setDestination(29822U);
    msg.setDestinationEntity(56U);
    msg.id = 202U;
    msg.period = 2416924261U;
    msg.duty_cycle = 83926850U;

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
    msg.setTimeStamp(0.155791113378);
    msg.setSource(19893U);
    msg.setSourceEntity(53U);
    msg.setDestination(11886U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.930444362584;
    msg.lon = 0.299201247057;
    msg.height = 0.22523910882;
    msg.x = 0.371303617952;
    msg.y = 0.460381836941;
    msg.z = 0.494541990277;
    msg.phi = 0.0884757012404;
    msg.theta = 0.587570991258;
    msg.psi = 0.389185026193;
    msg.u = 0.807454654358;
    msg.v = 0.795646193253;
    msg.w = 0.670252468164;
    msg.vx = 0.816315994757;
    msg.vy = 0.397544502;
    msg.vz = 0.826717960986;
    msg.p = 0.771277367637;
    msg.q = 0.497068117561;
    msg.r = 0.258226518373;
    msg.depth = 0.812378069558;
    msg.alt = 0.0328628349844;

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
    msg.setTimeStamp(0.86844534836);
    msg.setSource(48019U);
    msg.setSourceEntity(232U);
    msg.setDestination(59442U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.0265442914851;
    msg.lon = 0.0722807704411;
    msg.height = 0.935394405165;
    msg.x = 0.874122576839;
    msg.y = 0.629487075173;
    msg.z = 0.671177782028;
    msg.phi = 0.180700783477;
    msg.theta = 0.638420817348;
    msg.psi = 0.579696462116;
    msg.u = 0.43380533486;
    msg.v = 0.0866289067135;
    msg.w = 0.827732801587;
    msg.vx = 0.3247861417;
    msg.vy = 0.14976158033;
    msg.vz = 0.460274325482;
    msg.p = 0.81259037075;
    msg.q = 0.0638787489786;
    msg.r = 0.476337256566;
    msg.depth = 0.160953583627;
    msg.alt = 0.237847470096;

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
    msg.setTimeStamp(0.602535056959);
    msg.setSource(4487U);
    msg.setSourceEntity(185U);
    msg.setDestination(29788U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.323114635412;
    msg.lon = 0.421289286084;
    msg.height = 0.302935505448;
    msg.x = 0.257169949983;
    msg.y = 0.618248043009;
    msg.z = 0.470702560964;
    msg.phi = 0.807749927061;
    msg.theta = 0.262751680712;
    msg.psi = 0.981949369384;
    msg.u = 0.88593752136;
    msg.v = 0.244621203569;
    msg.w = 0.398148351994;
    msg.vx = 0.681204220786;
    msg.vy = 0.537279046878;
    msg.vz = 0.53784547497;
    msg.p = 0.204740932739;
    msg.q = 0.977718791556;
    msg.r = 0.85935470618;
    msg.depth = 0.883757584855;
    msg.alt = 0.640842608082;

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
    msg.setTimeStamp(0.0207651857864);
    msg.setSource(35952U);
    msg.setSourceEntity(222U);
    msg.setDestination(62940U);
    msg.setDestinationEntity(26U);
    msg.x = 0.156944774357;
    msg.y = 0.553336119235;
    msg.z = 0.644139667981;

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
    msg.setTimeStamp(0.360055232786);
    msg.setSource(29443U);
    msg.setSourceEntity(121U);
    msg.setDestination(11126U);
    msg.setDestinationEntity(242U);
    msg.x = 0.350111650042;
    msg.y = 0.318871038316;
    msg.z = 0.604022122608;

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
    msg.setTimeStamp(0.708997626995);
    msg.setSource(21980U);
    msg.setSourceEntity(76U);
    msg.setDestination(63295U);
    msg.setDestinationEntity(177U);
    msg.x = 0.254389114198;
    msg.y = 0.390312244187;
    msg.z = 0.322070153815;

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
    msg.setTimeStamp(0.827139013396);
    msg.setSource(45919U);
    msg.setSourceEntity(90U);
    msg.setDestination(18232U);
    msg.setDestinationEntity(136U);
    msg.value = 0.39111636766;

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
    msg.setTimeStamp(0.754524143373);
    msg.setSource(59527U);
    msg.setSourceEntity(120U);
    msg.setDestination(63247U);
    msg.setDestinationEntity(77U);
    msg.value = 0.886725707737;

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
    msg.setTimeStamp(0.51637750253);
    msg.setSource(50625U);
    msg.setSourceEntity(93U);
    msg.setDestination(47472U);
    msg.setDestinationEntity(185U);
    msg.value = 0.739031095213;

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
    msg.setTimeStamp(0.482480749641);
    msg.setSource(14240U);
    msg.setSourceEntity(88U);
    msg.setDestination(47894U);
    msg.setDestinationEntity(170U);
    msg.value = 0.0979637535907;

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
    msg.setTimeStamp(0.309849257234);
    msg.setSource(597U);
    msg.setSourceEntity(48U);
    msg.setDestination(45572U);
    msg.setDestinationEntity(176U);
    msg.value = 0.402994022919;

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
    msg.setTimeStamp(0.996579581481);
    msg.setSource(61054U);
    msg.setSourceEntity(221U);
    msg.setDestination(19586U);
    msg.setDestinationEntity(241U);
    msg.value = 0.248128175583;

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
    msg.setTimeStamp(0.747135189335);
    msg.setSource(15573U);
    msg.setSourceEntity(170U);
    msg.setDestination(14711U);
    msg.setDestinationEntity(94U);
    msg.x = 0.287852853483;
    msg.y = 0.474650919471;
    msg.z = 0.446550406294;
    msg.phi = 0.098261583081;
    msg.theta = 0.488387057404;
    msg.psi = 0.0831357722903;
    msg.p = 0.256985613274;
    msg.q = 0.401354838268;
    msg.r = 0.288773141909;
    msg.u = 0.317503025468;
    msg.v = 0.241845386568;
    msg.w = 0.0517182999063;
    msg.bias_psi = 0.190642512647;
    msg.bias_r = 0.876384406738;

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
    msg.setTimeStamp(0.187310569657);
    msg.setSource(64919U);
    msg.setSourceEntity(157U);
    msg.setDestination(16787U);
    msg.setDestinationEntity(246U);
    msg.x = 0.477547741892;
    msg.y = 0.0446096291116;
    msg.z = 0.788950082269;
    msg.phi = 0.310901636939;
    msg.theta = 0.343706205569;
    msg.psi = 0.265611338824;
    msg.p = 0.834432132218;
    msg.q = 0.270036092072;
    msg.r = 0.160879754963;
    msg.u = 0.550674195337;
    msg.v = 0.142843533835;
    msg.w = 0.253052375462;
    msg.bias_psi = 0.800140600705;
    msg.bias_r = 0.526922931805;

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
    msg.setTimeStamp(0.0529767178871);
    msg.setSource(61260U);
    msg.setSourceEntity(42U);
    msg.setDestination(19006U);
    msg.setDestinationEntity(64U);
    msg.x = 0.188202795194;
    msg.y = 0.94305022391;
    msg.z = 0.0678661906766;
    msg.phi = 0.0312494118255;
    msg.theta = 0.754578795741;
    msg.psi = 0.192130829283;
    msg.p = 0.287455834041;
    msg.q = 0.159953771762;
    msg.r = 0.824878358134;
    msg.u = 0.66816749645;
    msg.v = 0.463025662006;
    msg.w = 0.956906769838;
    msg.bias_psi = 0.484261115552;
    msg.bias_r = 0.311208070173;

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
    msg.setTimeStamp(0.271534572892);
    msg.setSource(49340U);
    msg.setSourceEntity(4U);
    msg.setDestination(28862U);
    msg.setDestinationEntity(35U);
    msg.bias_psi = 0.267086340179;
    msg.bias_r = 0.943082856771;
    msg.cog = 0.0219561993141;
    msg.cyaw = 0.471004094038;
    msg.lbl_rej_level = 0.905390332782;
    msg.gps_rej_level = 0.200892460693;
    msg.custom_x = 0.504206895727;
    msg.custom_y = 0.841161656148;
    msg.custom_z = 0.418119615775;

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
    msg.setTimeStamp(0.879470461452);
    msg.setSource(2191U);
    msg.setSourceEntity(4U);
    msg.setDestination(38017U);
    msg.setDestinationEntity(93U);
    msg.bias_psi = 0.278066322034;
    msg.bias_r = 0.318049872975;
    msg.cog = 0.107699319647;
    msg.cyaw = 0.510861667878;
    msg.lbl_rej_level = 0.132155078338;
    msg.gps_rej_level = 0.143503617004;
    msg.custom_x = 0.475469127012;
    msg.custom_y = 0.538173121468;
    msg.custom_z = 0.911110537472;

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
    msg.setTimeStamp(0.466463228725);
    msg.setSource(25428U);
    msg.setSourceEntity(69U);
    msg.setDestination(39414U);
    msg.setDestinationEntity(59U);
    msg.bias_psi = 0.00204772975636;
    msg.bias_r = 0.746459944221;
    msg.cog = 0.951057639879;
    msg.cyaw = 0.329640948557;
    msg.lbl_rej_level = 0.0994217535004;
    msg.gps_rej_level = 0.322886331165;
    msg.custom_x = 0.418088112958;
    msg.custom_y = 0.750762985159;
    msg.custom_z = 0.590298452543;

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
    msg.setTimeStamp(0.60445920369);
    msg.setSource(49158U);
    msg.setSourceEntity(129U);
    msg.setDestination(20420U);
    msg.setDestinationEntity(240U);
    msg.utc_time = 0.97019183857;
    msg.reason = 39U;

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
    msg.setTimeStamp(0.650316992584);
    msg.setSource(11439U);
    msg.setSourceEntity(47U);
    msg.setDestination(29712U);
    msg.setDestinationEntity(94U);
    msg.utc_time = 0.635272303792;
    msg.reason = 1U;

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
    msg.setTimeStamp(0.809197623483);
    msg.setSource(16289U);
    msg.setSourceEntity(110U);
    msg.setDestination(19144U);
    msg.setDestinationEntity(69U);
    msg.utc_time = 0.15731382251;
    msg.reason = 139U;

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
    msg.setTimeStamp(0.225230133568);
    msg.setSource(13218U);
    msg.setSourceEntity(28U);
    msg.setDestination(45627U);
    msg.setDestinationEntity(5U);
    msg.id = 107U;
    msg.range = 0.55463622354;
    msg.acceptance = 203U;

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
    msg.setTimeStamp(0.412247584462);
    msg.setSource(898U);
    msg.setSourceEntity(60U);
    msg.setDestination(58895U);
    msg.setDestinationEntity(245U);
    msg.id = 237U;
    msg.range = 0.892702778419;
    msg.acceptance = 36U;

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
    msg.setTimeStamp(0.518268298695);
    msg.setSource(61476U);
    msg.setSourceEntity(207U);
    msg.setDestination(41678U);
    msg.setDestinationEntity(199U);
    msg.id = 18U;
    msg.range = 0.8280192849;
    msg.acceptance = 79U;

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
    msg.setTimeStamp(0.212038833006);
    msg.setSource(5696U);
    msg.setSourceEntity(240U);
    msg.setDestination(29917U);
    msg.setDestinationEntity(40U);
    msg.type = 106U;
    msg.reason = 179U;
    msg.value = 0.0496311295434;
    msg.timestep = 0.471155071283;

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
    msg.setTimeStamp(0.00839921645431);
    msg.setSource(18949U);
    msg.setSourceEntity(87U);
    msg.setDestination(49436U);
    msg.setDestinationEntity(34U);
    msg.type = 95U;
    msg.reason = 166U;
    msg.value = 0.995129723228;
    msg.timestep = 0.759021513135;

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
    msg.setTimeStamp(0.0439687557665);
    msg.setSource(15832U);
    msg.setSourceEntity(148U);
    msg.setDestination(40029U);
    msg.setDestinationEntity(177U);
    msg.type = 127U;
    msg.reason = 45U;
    msg.value = 0.334688453661;
    msg.timestep = 0.240243693699;

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
    msg.setTimeStamp(0.431005596308);
    msg.setSource(47612U);
    msg.setSourceEntity(191U);
    msg.setDestination(19990U);
    msg.setDestinationEntity(179U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZVBAPDAZLNBHPHDFNBOAOBFWOLICBNFCMAKEUJLRZPUVQUBWMXGHOFKOKLFSGDCTYMDGQOCTNRDJTSQITZCWYRMUJKVUBQPBJVAIYHEEVJXVOJEGJEIZYRYXZHPJRGQSHPDAGIXOQMKEIAUTSNQMRZMYESMXWUPEBOAWRNSQXDKHKCANYLSYDEJCGVPTCXLHWDKSWSROYKHRLWVWTXVIJSZDXQVAPTLTKUUFFNGFYBXIHQGRMLCNCWU");
    tmp_msg_0.lat = 0.402026505542;
    tmp_msg_0.lon = 0.272188564382;
    tmp_msg_0.depth = 0.652744787741;
    tmp_msg_0.query_channel = 201U;
    tmp_msg_0.reply_channel = 241U;
    tmp_msg_0.transponder_delay = 103U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.90899286031;
    msg.y = 0.641653595178;
    msg.var_x = 0.788226124786;
    msg.var_y = 0.585579449845;
    msg.distance = 0.246359112172;

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
    msg.setTimeStamp(0.340750085527);
    msg.setSource(14693U);
    msg.setSourceEntity(156U);
    msg.setDestination(42232U);
    msg.setDestinationEntity(156U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VNEMWHVQYOXFFVPHWOPXQCVZOTZUKNYTQKTKWHTFBWEOIZFMEW");
    tmp_msg_0.lat = 0.807235643349;
    tmp_msg_0.lon = 0.560008636726;
    tmp_msg_0.depth = 0.28979588769;
    tmp_msg_0.query_channel = 81U;
    tmp_msg_0.reply_channel = 213U;
    tmp_msg_0.transponder_delay = 63U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.175381873457;
    msg.y = 0.41734121375;
    msg.var_x = 0.737293140236;
    msg.var_y = 0.425605933998;
    msg.distance = 0.789634474834;

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
    msg.setTimeStamp(0.765563411287);
    msg.setSource(52150U);
    msg.setSourceEntity(95U);
    msg.setDestination(25324U);
    msg.setDestinationEntity(0U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NOJDJDIKMQHVZLVNQAQJJJCBDHSWWUEUDLGJMYWLTWWTYSSFCPWGTUBYEAWHHTNIOTJUJVLZUQBQRKUWPNITDFDNOYZ");
    tmp_msg_0.lat = 0.391030349818;
    tmp_msg_0.lon = 0.546456883552;
    tmp_msg_0.depth = 0.906289119525;
    tmp_msg_0.query_channel = 51U;
    tmp_msg_0.reply_channel = 25U;
    tmp_msg_0.transponder_delay = 65U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.88569630942;
    msg.y = 0.390314562805;
    msg.var_x = 0.662992529649;
    msg.var_y = 0.765880627021;
    msg.distance = 0.695810603134;

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
    msg.setTimeStamp(0.00368095887543);
    msg.setSource(48429U);
    msg.setSourceEntity(236U);
    msg.setDestination(56010U);
    msg.setDestinationEntity(95U);
    msg.state = 40U;

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
    msg.setTimeStamp(0.450282838004);
    msg.setSource(37494U);
    msg.setSourceEntity(235U);
    msg.setDestination(31999U);
    msg.setDestinationEntity(185U);
    msg.state = 29U;

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
    msg.setTimeStamp(0.332878307986);
    msg.setSource(49384U);
    msg.setSourceEntity(153U);
    msg.setDestination(47830U);
    msg.setDestinationEntity(198U);
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
    msg.setTimeStamp(0.0429144551374);
    msg.setSource(55523U);
    msg.setSourceEntity(185U);
    msg.setDestination(24969U);
    msg.setDestinationEntity(114U);
    msg.x = 0.425467713269;
    msg.y = 0.618211839935;
    msg.z = 0.147747206709;

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
    msg.setTimeStamp(0.443573518871);
    msg.setSource(53454U);
    msg.setSourceEntity(92U);
    msg.setDestination(31484U);
    msg.setDestinationEntity(54U);
    msg.x = 0.349720264687;
    msg.y = 0.392076283259;
    msg.z = 0.618580485507;

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
    msg.setTimeStamp(0.622794405815);
    msg.setSource(36493U);
    msg.setSourceEntity(73U);
    msg.setDestination(53954U);
    msg.setDestinationEntity(31U);
    msg.x = 0.825794944911;
    msg.y = 0.923179752244;
    msg.z = 0.376292531132;

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
    msg.setTimeStamp(0.854259108923);
    msg.setSource(35209U);
    msg.setSourceEntity(49U);
    msg.setDestination(32832U);
    msg.setDestinationEntity(165U);
    msg.va = 0.682692063193;
    msg.aoa = 0.603907253685;
    msg.ssa = 0.236521308109;

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
    msg.setTimeStamp(0.285584097839);
    msg.setSource(16103U);
    msg.setSourceEntity(146U);
    msg.setDestination(1454U);
    msg.setDestinationEntity(19U);
    msg.va = 0.457871270046;
    msg.aoa = 0.117842764638;
    msg.ssa = 0.794801994895;

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
    msg.setTimeStamp(0.653154863475);
    msg.setSource(31041U);
    msg.setSourceEntity(3U);
    msg.setDestination(35039U);
    msg.setDestinationEntity(7U);
    msg.va = 0.96082062847;
    msg.aoa = 0.478111318378;
    msg.ssa = 0.72764382165;

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
    msg.setTimeStamp(0.759461168962);
    msg.setSource(27082U);
    msg.setSourceEntity(121U);
    msg.setDestination(35311U);
    msg.setDestinationEntity(254U);
    msg.value = 0.0336451961447;

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
    msg.setTimeStamp(0.391270116179);
    msg.setSource(9298U);
    msg.setSourceEntity(213U);
    msg.setDestination(37068U);
    msg.setDestinationEntity(72U);
    msg.value = 0.0266166194925;

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
    msg.setTimeStamp(0.398806512735);
    msg.setSource(27720U);
    msg.setSourceEntity(71U);
    msg.setDestination(27551U);
    msg.setDestinationEntity(126U);
    msg.value = 0.507708916337;

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
    msg.setTimeStamp(0.78052678881);
    msg.setSource(41468U);
    msg.setSourceEntity(241U);
    msg.setDestination(15589U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0736704502508;
    msg.z_units = 248U;

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
    msg.setTimeStamp(0.798274535103);
    msg.setSource(46953U);
    msg.setSourceEntity(158U);
    msg.setDestination(21305U);
    msg.setDestinationEntity(35U);
    msg.value = 0.688519735687;
    msg.z_units = 188U;

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
    msg.setTimeStamp(0.301126345186);
    msg.setSource(9794U);
    msg.setSourceEntity(251U);
    msg.setDestination(57015U);
    msg.setDestinationEntity(96U);
    msg.value = 0.344549728967;
    msg.z_units = 245U;

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
    msg.setTimeStamp(0.526376565763);
    msg.setSource(59802U);
    msg.setSourceEntity(110U);
    msg.setDestination(37863U);
    msg.setDestinationEntity(179U);
    msg.value = 0.555963210334;
    msg.speed_units = 69U;

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
    msg.setTimeStamp(0.0967506133034);
    msg.setSource(11603U);
    msg.setSourceEntity(94U);
    msg.setDestination(11372U);
    msg.setDestinationEntity(190U);
    msg.value = 0.313126212916;
    msg.speed_units = 130U;

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
    msg.setTimeStamp(0.659744440622);
    msg.setSource(44283U);
    msg.setSourceEntity(131U);
    msg.setDestination(55231U);
    msg.setDestinationEntity(232U);
    msg.value = 0.493188028638;
    msg.speed_units = 246U;

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
    msg.setTimeStamp(0.433750490412);
    msg.setSource(22429U);
    msg.setSourceEntity(157U);
    msg.setDestination(11110U);
    msg.setDestinationEntity(219U);
    msg.value = 0.838866271354;

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
    msg.setTimeStamp(0.215201730108);
    msg.setSource(2571U);
    msg.setSourceEntity(96U);
    msg.setDestination(56063U);
    msg.setDestinationEntity(159U);
    msg.value = 0.816720540647;

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
    msg.setTimeStamp(0.446096765955);
    msg.setSource(18346U);
    msg.setSourceEntity(43U);
    msg.setDestination(26542U);
    msg.setDestinationEntity(98U);
    msg.value = 0.205462092496;

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
    msg.setTimeStamp(0.0552175435);
    msg.setSource(35719U);
    msg.setSourceEntity(68U);
    msg.setDestination(63359U);
    msg.setDestinationEntity(141U);
    msg.value = 0.742960470942;

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
    msg.setTimeStamp(0.267759458071);
    msg.setSource(32570U);
    msg.setSourceEntity(120U);
    msg.setDestination(28453U);
    msg.setDestinationEntity(84U);
    msg.value = 0.420759639299;

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
    msg.setTimeStamp(0.920416135197);
    msg.setSource(16077U);
    msg.setSourceEntity(203U);
    msg.setDestination(46859U);
    msg.setDestinationEntity(188U);
    msg.value = 0.586107298988;

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
    msg.setTimeStamp(0.565974637272);
    msg.setSource(52612U);
    msg.setSourceEntity(133U);
    msg.setDestination(56458U);
    msg.setDestinationEntity(149U);
    msg.value = 0.0529154042759;

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
    msg.setTimeStamp(0.571999906851);
    msg.setSource(64997U);
    msg.setSourceEntity(90U);
    msg.setDestination(23651U);
    msg.setDestinationEntity(187U);
    msg.value = 0.447543524567;

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
    msg.setTimeStamp(0.853913920862);
    msg.setSource(29952U);
    msg.setSourceEntity(92U);
    msg.setDestination(45988U);
    msg.setDestinationEntity(95U);
    msg.value = 0.549057480369;

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
    msg.setTimeStamp(0.121745108584);
    msg.setSource(60229U);
    msg.setSourceEntity(99U);
    msg.setDestination(53378U);
    msg.setDestinationEntity(48U);
    msg.path_ref = 2620701481U;
    msg.start_lat = 0.649321236226;
    msg.start_lon = 0.605250652954;
    msg.start_z = 0.902482038126;
    msg.start_z_units = 241U;
    msg.end_lat = 0.898552582616;
    msg.end_lon = 0.591482862893;
    msg.end_z = 0.967232570017;
    msg.end_z_units = 42U;
    msg.speed = 0.305615398071;
    msg.speed_units = 150U;
    msg.lradius = 0.76640098038;
    msg.flags = 159U;

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
    msg.setTimeStamp(0.771255980899);
    msg.setSource(28774U);
    msg.setSourceEntity(177U);
    msg.setDestination(10932U);
    msg.setDestinationEntity(79U);
    msg.path_ref = 3441599001U;
    msg.start_lat = 0.707079763313;
    msg.start_lon = 0.686880053621;
    msg.start_z = 0.0451496878444;
    msg.start_z_units = 11U;
    msg.end_lat = 0.845402112333;
    msg.end_lon = 0.950300896862;
    msg.end_z = 0.52116782471;
    msg.end_z_units = 95U;
    msg.speed = 0.389023423575;
    msg.speed_units = 198U;
    msg.lradius = 0.602104002918;
    msg.flags = 157U;

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
    msg.setTimeStamp(0.723941791266);
    msg.setSource(5695U);
    msg.setSourceEntity(58U);
    msg.setDestination(46878U);
    msg.setDestinationEntity(41U);
    msg.path_ref = 3047331680U;
    msg.start_lat = 0.486244801762;
    msg.start_lon = 0.931574662343;
    msg.start_z = 0.431438783183;
    msg.start_z_units = 127U;
    msg.end_lat = 0.790981205735;
    msg.end_lon = 0.101687103876;
    msg.end_z = 0.359270143029;
    msg.end_z_units = 245U;
    msg.speed = 0.0798137508173;
    msg.speed_units = 159U;
    msg.lradius = 0.291574045054;
    msg.flags = 61U;

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
    msg.setTimeStamp(0.137819787642);
    msg.setSource(1688U);
    msg.setSourceEntity(159U);
    msg.setDestination(44694U);
    msg.setDestinationEntity(236U);
    msg.x = 0.246836929752;
    msg.y = 0.603891163303;
    msg.z = 0.587631614101;
    msg.k = 0.0988552330074;
    msg.m = 0.121143378657;
    msg.n = 0.0787518491231;
    msg.flags = 216U;

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
    msg.setTimeStamp(0.068929706306);
    msg.setSource(60028U);
    msg.setSourceEntity(139U);
    msg.setDestination(53391U);
    msg.setDestinationEntity(43U);
    msg.x = 0.526050250927;
    msg.y = 0.973926377271;
    msg.z = 0.601180334369;
    msg.k = 0.786613457239;
    msg.m = 0.677727297692;
    msg.n = 0.179916475591;
    msg.flags = 54U;

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
    msg.setTimeStamp(0.836728016064);
    msg.setSource(12394U);
    msg.setSourceEntity(173U);
    msg.setDestination(29920U);
    msg.setDestinationEntity(133U);
    msg.x = 0.537673400026;
    msg.y = 0.692401478725;
    msg.z = 0.98297569571;
    msg.k = 0.753627346997;
    msg.m = 0.279456000814;
    msg.n = 0.914660062032;
    msg.flags = 148U;

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
    msg.setTimeStamp(0.977535694922);
    msg.setSource(49297U);
    msg.setSourceEntity(240U);
    msg.setDestination(7162U);
    msg.setDestinationEntity(242U);
    msg.value = 0.01390652862;

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
    msg.setTimeStamp(0.879241481538);
    msg.setSource(50259U);
    msg.setSourceEntity(213U);
    msg.setDestination(30214U);
    msg.setDestinationEntity(180U);
    msg.value = 0.143951650755;

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
    msg.setTimeStamp(0.894468343063);
    msg.setSource(57738U);
    msg.setSourceEntity(27U);
    msg.setDestination(14818U);
    msg.setDestinationEntity(130U);
    msg.value = 0.270175235631;

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
    msg.setTimeStamp(0.828064933716);
    msg.setSource(25769U);
    msg.setSourceEntity(13U);
    msg.setDestination(30610U);
    msg.setDestinationEntity(31U);
    msg.u = 0.700922891474;
    msg.v = 0.727229422736;
    msg.w = 0.00289212791258;
    msg.p = 0.231341120504;
    msg.q = 0.441626768693;
    msg.r = 0.0686533655771;
    msg.flags = 71U;

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
    msg.setTimeStamp(0.205215838794);
    msg.setSource(12103U);
    msg.setSourceEntity(185U);
    msg.setDestination(16229U);
    msg.setDestinationEntity(99U);
    msg.u = 0.0335751275378;
    msg.v = 0.174486497894;
    msg.w = 0.745956419274;
    msg.p = 0.460867531712;
    msg.q = 0.999385250467;
    msg.r = 0.432360200551;
    msg.flags = 25U;

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
    msg.setTimeStamp(0.797676633228);
    msg.setSource(30363U);
    msg.setSourceEntity(110U);
    msg.setDestination(33568U);
    msg.setDestinationEntity(142U);
    msg.u = 0.897201547508;
    msg.v = 0.134227306873;
    msg.w = 0.464416307146;
    msg.p = 0.361007825142;
    msg.q = 0.0970333469758;
    msg.r = 0.661575742246;
    msg.flags = 207U;

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
    msg.setTimeStamp(0.701160234709);
    msg.setSource(27748U);
    msg.setSourceEntity(207U);
    msg.setDestination(27949U);
    msg.setDestinationEntity(99U);
    msg.path_ref = 545593432U;
    msg.start_lat = 0.545791371868;
    msg.start_lon = 0.824026579002;
    msg.start_z = 0.710468363014;
    msg.start_z_units = 33U;
    msg.end_lat = 0.457880322958;
    msg.end_lon = 0.880401848612;
    msg.end_z = 0.982657544017;
    msg.end_z_units = 52U;
    msg.lradius = 0.305868187992;
    msg.flags = 161U;
    msg.x = 0.699721574678;
    msg.y = 0.738567638636;
    msg.z = 0.830521993013;
    msg.vx = 0.732026883397;
    msg.vy = 0.721647069575;
    msg.vz = 0.00203275461381;
    msg.course_error = 0.523046565047;
    msg.eta = 54056U;

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
    msg.setTimeStamp(0.367321512442);
    msg.setSource(11515U);
    msg.setSourceEntity(64U);
    msg.setDestination(45059U);
    msg.setDestinationEntity(22U);
    msg.path_ref = 1126298661U;
    msg.start_lat = 0.837058301808;
    msg.start_lon = 0.271186240064;
    msg.start_z = 0.770412498532;
    msg.start_z_units = 186U;
    msg.end_lat = 0.239102544297;
    msg.end_lon = 0.643754344666;
    msg.end_z = 0.279750775658;
    msg.end_z_units = 106U;
    msg.lradius = 0.598550604964;
    msg.flags = 79U;
    msg.x = 0.71308534216;
    msg.y = 0.00870738812203;
    msg.z = 0.345857922671;
    msg.vx = 0.759460852328;
    msg.vy = 0.813388255872;
    msg.vz = 0.942844171192;
    msg.course_error = 0.142089844564;
    msg.eta = 53120U;

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
    msg.setTimeStamp(0.876438030751);
    msg.setSource(2882U);
    msg.setSourceEntity(66U);
    msg.setDestination(28655U);
    msg.setDestinationEntity(250U);
    msg.path_ref = 2840791466U;
    msg.start_lat = 0.243744304983;
    msg.start_lon = 0.348639411324;
    msg.start_z = 0.396959185835;
    msg.start_z_units = 50U;
    msg.end_lat = 0.970609784844;
    msg.end_lon = 0.318177084734;
    msg.end_z = 0.515624896904;
    msg.end_z_units = 68U;
    msg.lradius = 0.437359834272;
    msg.flags = 250U;
    msg.x = 0.471854509196;
    msg.y = 0.77959326691;
    msg.z = 0.683800679252;
    msg.vx = 0.989868914509;
    msg.vy = 0.686894228867;
    msg.vz = 0.60146926075;
    msg.course_error = 0.992794005004;
    msg.eta = 29998U;

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
    msg.setTimeStamp(0.980419065597);
    msg.setSource(41776U);
    msg.setSourceEntity(186U);
    msg.setDestination(24591U);
    msg.setDestinationEntity(3U);
    msg.k = 0.536701405517;
    msg.m = 0.191645508717;
    msg.n = 0.37799273916;

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
    msg.setTimeStamp(0.749290287414);
    msg.setSource(16905U);
    msg.setSourceEntity(238U);
    msg.setDestination(32576U);
    msg.setDestinationEntity(61U);
    msg.k = 0.935979355189;
    msg.m = 0.241691875094;
    msg.n = 0.851542747569;

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
    msg.setTimeStamp(0.168565766219);
    msg.setSource(39507U);
    msg.setSourceEntity(222U);
    msg.setDestination(28062U);
    msg.setDestinationEntity(15U);
    msg.k = 0.752676925672;
    msg.m = 0.990381716092;
    msg.n = 0.844944587191;

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
    msg.setTimeStamp(0.457421085505);
    msg.setSource(60951U);
    msg.setSourceEntity(21U);
    msg.setDestination(45942U);
    msg.setDestinationEntity(16U);
    msg.p = 0.254183109375;
    msg.i = 0.449375978136;
    msg.d = 0.305808178495;
    msg.a = 0.37073579482;

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
    msg.setTimeStamp(0.328877014985);
    msg.setSource(23704U);
    msg.setSourceEntity(251U);
    msg.setDestination(31591U);
    msg.setDestinationEntity(46U);
    msg.p = 0.969070002231;
    msg.i = 0.0112561095878;
    msg.d = 0.905009823782;
    msg.a = 0.425917876091;

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
    msg.setTimeStamp(0.134618627574);
    msg.setSource(45119U);
    msg.setSourceEntity(18U);
    msg.setDestination(32729U);
    msg.setDestinationEntity(196U);
    msg.p = 0.790827171541;
    msg.i = 0.259188480056;
    msg.d = 0.808428753556;
    msg.a = 0.107952623512;

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
    msg.setTimeStamp(0.818880128192);
    msg.setSource(6093U);
    msg.setSourceEntity(95U);
    msg.setDestination(10327U);
    msg.setDestinationEntity(240U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.963246624155);
    msg.setSource(23542U);
    msg.setSourceEntity(6U);
    msg.setDestination(13915U);
    msg.setDestinationEntity(30U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.871307564653);
    msg.setSource(18517U);
    msg.setSourceEntity(69U);
    msg.setDestination(46587U);
    msg.setDestinationEntity(91U);
    msg.op = 73U;

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
    msg.setTimeStamp(0.609031203495);
    msg.setSource(24077U);
    msg.setSourceEntity(113U);
    msg.setDestination(7097U);
    msg.setDestinationEntity(52U);
    msg.x = 0.566393909723;
    msg.y = 0.525948396121;
    msg.z = 0.0818251205508;
    msg.vx = 0.99799066555;
    msg.vy = 0.835908615273;
    msg.vz = 0.0334420919185;
    msg.ax = 0.528932929158;
    msg.ay = 0.086919639417;
    msg.az = 0.00712367963086;
    msg.flags = 18505U;

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
    msg.setTimeStamp(0.0218746487037);
    msg.setSource(5288U);
    msg.setSourceEntity(183U);
    msg.setDestination(59898U);
    msg.setDestinationEntity(229U);
    msg.x = 0.670633367223;
    msg.y = 0.0919679633761;
    msg.z = 0.427939945585;
    msg.vx = 0.763210203428;
    msg.vy = 0.0158178644608;
    msg.vz = 0.954442145368;
    msg.ax = 0.409770686406;
    msg.ay = 0.0826985217165;
    msg.az = 0.0328098449018;
    msg.flags = 38450U;

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
    msg.setTimeStamp(0.798473625069);
    msg.setSource(4021U);
    msg.setSourceEntity(57U);
    msg.setDestination(59881U);
    msg.setDestinationEntity(182U);
    msg.x = 0.969854958981;
    msg.y = 0.942844984542;
    msg.z = 0.467030759529;
    msg.vx = 0.844299907415;
    msg.vy = 0.779708648239;
    msg.vz = 0.453294572578;
    msg.ax = 0.235729452788;
    msg.ay = 0.876587813726;
    msg.az = 0.538896947923;
    msg.flags = 53410U;

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
    msg.setTimeStamp(0.493317867785);
    msg.setSource(53011U);
    msg.setSourceEntity(84U);
    msg.setDestination(55367U);
    msg.setDestinationEntity(94U);
    msg.value = 0.220353899572;

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
    msg.setTimeStamp(0.821919011986);
    msg.setSource(49827U);
    msg.setSourceEntity(81U);
    msg.setDestination(50454U);
    msg.setDestinationEntity(47U);
    msg.value = 0.539322568005;

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
    msg.setTimeStamp(0.580019874411);
    msg.setSource(6737U);
    msg.setSourceEntity(209U);
    msg.setDestination(15573U);
    msg.setDestinationEntity(185U);
    msg.value = 0.545326241242;

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
    msg.setTimeStamp(0.684270675629);
    msg.setSource(1061U);
    msg.setSourceEntity(8U);
    msg.setDestination(19005U);
    msg.setDestinationEntity(134U);
    msg.timeout = 30015U;
    msg.lat = 0.851546535959;
    msg.lon = 0.343235174911;
    msg.z = 0.788250846194;
    msg.z_units = 47U;
    msg.speed = 0.672457344758;
    msg.speed_units = 157U;
    msg.roll = 0.368490758938;
    msg.pitch = 0.273596446985;
    msg.yaw = 0.0390474445248;
    msg.custom.assign("UZJEPLLTDQZAEXMQHNGXKDCFTTRUTRUMFLCJAWPNCIYZYHIOBHGAERDPOPYBXHTRBHNVYZUCEPAQTTDFBGPWVCXVJWKPTIDLKUFGNVGHQQXMPWMANBTOQRNVCQIKZYCSXOBUZRGMEJAYVIKLAUIOLPRNXVWPKOLDLUITDLBMISEQLSNSAMJCBWKJJFVSOGMRXAHZEV");

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
    msg.setTimeStamp(0.238197477416);
    msg.setSource(9976U);
    msg.setSourceEntity(61U);
    msg.setDestination(50836U);
    msg.setDestinationEntity(185U);
    msg.timeout = 36832U;
    msg.lat = 0.501222865526;
    msg.lon = 0.55702808303;
    msg.z = 0.468480445896;
    msg.z_units = 115U;
    msg.speed = 0.54937814199;
    msg.speed_units = 126U;
    msg.roll = 0.535101934022;
    msg.pitch = 0.0172911209151;
    msg.yaw = 0.719698120947;
    msg.custom.assign("AIHVDOPSFZARMELPVXSDEMFQMBJYNMXOOBRVXMWYJEVSHXOEOUFEWUTFGPGDYXFFGLWLVOQCGDZBULTKVPIJIOPNRLWSS");

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
    msg.setTimeStamp(0.308551455008);
    msg.setSource(13317U);
    msg.setSourceEntity(241U);
    msg.setDestination(18086U);
    msg.setDestinationEntity(18U);
    msg.timeout = 4652U;
    msg.lat = 0.675340566395;
    msg.lon = 0.747217164104;
    msg.z = 0.1551009616;
    msg.z_units = 119U;
    msg.speed = 0.290825985233;
    msg.speed_units = 158U;
    msg.roll = 0.571876750277;
    msg.pitch = 0.801192886004;
    msg.yaw = 0.941312344818;
    msg.custom.assign("JBDVWBEXQBXNNDIFCCMUWDMIYZAEYTNBOJEDATGQIOLIDVECRKUKKDZNSIHLMSFONKXMEXRKZLACWYTWACEYBFNLQJJMDPVVVJTVGQKPVAHJDPDU");

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
    msg.setTimeStamp(0.0901456892648);
    msg.setSource(36006U);
    msg.setSourceEntity(49U);
    msg.setDestination(48543U);
    msg.setDestinationEntity(121U);
    msg.timeout = 50243U;
    msg.lat = 0.845194108435;
    msg.lon = 0.3068726449;
    msg.z = 0.35000049777;
    msg.z_units = 117U;
    msg.speed = 0.473874592338;
    msg.speed_units = 222U;
    msg.duration = 14665U;
    msg.radius = 0.260517380729;
    msg.flags = 100U;
    msg.custom.assign("TVXJETSRNSWPPFKDUSABKJRONFAUYSEUGJTJAKEFKDIAKUYCQVFCVXVTMPOIBKIRSACHPX");

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
    msg.setTimeStamp(0.131250926799);
    msg.setSource(45155U);
    msg.setSourceEntity(171U);
    msg.setDestination(57267U);
    msg.setDestinationEntity(122U);
    msg.timeout = 60120U;
    msg.lat = 0.526865685537;
    msg.lon = 0.429809168612;
    msg.z = 0.468702735513;
    msg.z_units = 170U;
    msg.speed = 0.129275528767;
    msg.speed_units = 30U;
    msg.duration = 58531U;
    msg.radius = 0.846623643748;
    msg.flags = 170U;
    msg.custom.assign("MLLKILTBBJWQMCGTUXGIXBNWEMVWBSZNZXZYRHTKTTMAWYSAJVRTELDQKTLZVQFESQGOICOUHPEUYJRXCENNRFVJLVWCGERDECAAFTSMDBPHGCRNPUGFFLHYVDOSMJGUAFTPKIBOGKKUSRICWLEAPNWADVYZSCGPIIAPNYYVWQVFFO");

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
    msg.setTimeStamp(0.446116183964);
    msg.setSource(31554U);
    msg.setSourceEntity(92U);
    msg.setDestination(65358U);
    msg.setDestinationEntity(5U);
    msg.timeout = 3148U;
    msg.lat = 0.525521845037;
    msg.lon = 0.258495117738;
    msg.z = 0.622730903554;
    msg.z_units = 168U;
    msg.speed = 0.771831683299;
    msg.speed_units = 253U;
    msg.duration = 36711U;
    msg.radius = 0.495817832477;
    msg.flags = 94U;
    msg.custom.assign("OPRIJGBMTNUREMYKLIDSAU");

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
    msg.setTimeStamp(0.389863596535);
    msg.setSource(1767U);
    msg.setSourceEntity(0U);
    msg.setDestination(8925U);
    msg.setDestinationEntity(117U);
    msg.custom.assign("WMIWVXTHUVNFCQGSSBPUHNIRFKIPSNIRVWKTYOLFQJECOETNJJJNUJVEELLPKEUCGQPWGJZLHUJNZCHYYKDYWCHDFABSORZZTDAERCRNZBEMUNDYWIKBMYOTMMHVKAJRSDIHICDRAZ");

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
    msg.setTimeStamp(0.389856511105);
    msg.setSource(8948U);
    msg.setSourceEntity(216U);
    msg.setDestination(4880U);
    msg.setDestinationEntity(193U);
    msg.custom.assign("WBLTQRCOBNOWDXYIFPRE");

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
    msg.setTimeStamp(0.357420772791);
    msg.setSource(16001U);
    msg.setSourceEntity(223U);
    msg.setDestination(23184U);
    msg.setDestinationEntity(190U);
    msg.custom.assign("ADRQGRJCXYHYEEQOOPPKHFNNJWNBQHFUWQELIHCDLZWPQSOJLUMFSBZFGQMHULXZDZWUGICIMAALNDWGWVBUQRTTTJSZFWCNPTRRNHEXEHMQZTYK");

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
    msg.setTimeStamp(0.419350205168);
    msg.setSource(55412U);
    msg.setSourceEntity(250U);
    msg.setDestination(15663U);
    msg.setDestinationEntity(168U);
    msg.timeout = 47677U;
    msg.lat = 0.0445904338403;
    msg.lon = 0.799262433066;
    msg.z = 0.0967934491473;
    msg.z_units = 32U;
    msg.duration = 26581U;
    msg.speed = 0.49245024555;
    msg.speed_units = 54U;
    msg.type = 98U;
    msg.radius = 0.79049681641;
    msg.length = 0.045211589599;
    msg.bearing = 0.2226177763;
    msg.direction = 192U;
    msg.custom.assign("GCGEKQOAJAARDSKXJQCXRLEMLVYDLBSCBHNWDSKPCHFQBVNCFBCMKNFTMRVEEHMFNHLZVUQRDIWUUOOUDYQVZTSTUYOKAVSNOXVYWGFEWHUPSDHMROUZIKJ");

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
    msg.setTimeStamp(0.124506279284);
    msg.setSource(10359U);
    msg.setSourceEntity(196U);
    msg.setDestination(25793U);
    msg.setDestinationEntity(7U);
    msg.timeout = 49570U;
    msg.lat = 0.269380046576;
    msg.lon = 0.888433477439;
    msg.z = 0.421674403999;
    msg.z_units = 82U;
    msg.duration = 40428U;
    msg.speed = 0.201844747553;
    msg.speed_units = 251U;
    msg.type = 72U;
    msg.radius = 0.632080397504;
    msg.length = 0.0255859111109;
    msg.bearing = 0.550099798936;
    msg.direction = 54U;
    msg.custom.assign("QUPVBIXUFGPJFTFFTOVLMGSFEYEKAQFYFWDXJTYSIIRVDCZWHZOPMROLVCCPV");

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
    msg.setTimeStamp(0.10159215094);
    msg.setSource(49319U);
    msg.setSourceEntity(179U);
    msg.setDestination(54172U);
    msg.setDestinationEntity(207U);
    msg.timeout = 41369U;
    msg.lat = 0.421382974717;
    msg.lon = 0.119252721548;
    msg.z = 0.668325800747;
    msg.z_units = 30U;
    msg.duration = 16031U;
    msg.speed = 0.999296335119;
    msg.speed_units = 161U;
    msg.type = 103U;
    msg.radius = 0.829205671566;
    msg.length = 6.60715847751e-05;
    msg.bearing = 0.480557488934;
    msg.direction = 43U;
    msg.custom.assign("JEYWVGDNZATZFMHWBWLBZICFYOEUEAMCXFQDAXWPPBOLVLGGTSZQYJIU");

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
    msg.setTimeStamp(0.802457801126);
    msg.setSource(8087U);
    msg.setSourceEntity(162U);
    msg.setDestination(26864U);
    msg.setDestinationEntity(15U);
    msg.duration = 54968U;
    msg.custom.assign("VOZAQNHLXNTIIZLPIJDSPAMHHOSRBTSXCPCVUURIGEAXQXQAMTGYAJMYKDWKSTGRLUMWPLXJNTKMPHASSMXKEHMRZSVJKJHJHVFRVBKDTNZUYOJDWJDHHCAVLYNLCNZEOPLGQKXBGEZZFSZMCJPWOCVWBQMVKQRIBCWFIWDETUSBYUAUCVGJNFKIYETEPPYZFRFYXECBQKIDIMZLCGQGNOTDYUA");

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
    msg.setTimeStamp(0.864294978426);
    msg.setSource(63090U);
    msg.setSourceEntity(44U);
    msg.setDestination(62932U);
    msg.setDestinationEntity(205U);
    msg.duration = 45178U;
    msg.custom.assign("CHEGTZYMPLAPNPDOYCLVVFFGPEHXPIKZAKXLVEMOCLJZQBYNSDKDVEFTCEFXWZSOOEBMZYTHDJMABRJKEI");

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
    msg.setTimeStamp(0.367972288499);
    msg.setSource(47808U);
    msg.setSourceEntity(46U);
    msg.setDestination(45599U);
    msg.setDestinationEntity(215U);
    msg.duration = 7627U;
    msg.custom.assign("CAJLFZFHIXIIVEZSYOKWFIZJEQPTRJTKBDULAHLZPDICMMKIHEOGMXK");

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
    msg.setTimeStamp(0.0131067058468);
    msg.setSource(32789U);
    msg.setSourceEntity(32U);
    msg.setDestination(28154U);
    msg.setDestinationEntity(238U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.637782826054;
    msg.control.set(tmp_msg_0);
    msg.duration = 16891U;
    msg.custom.assign("ZUZTVJDOXHZDFVRHAGSVOAYXJNWLWGDIUGKGXTEZSRBEISIVEHNDUQUDWNCJOKURVBAGENOGRTUSBZMTNSDSLSNYNMTYRPHBENRLQPVCOKQJLTFXTKCVQUSKLMDXHSACPIIOKFUBECZAXLQYKQJCFYEEEQ");

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
    msg.setTimeStamp(0.683607695986);
    msg.setSource(25480U);
    msg.setSourceEntity(99U);
    msg.setDestination(15070U);
    msg.setDestinationEntity(164U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.643402850724;
    msg.control.set(tmp_msg_0);
    msg.duration = 22375U;
    msg.custom.assign("RUBKJARRTLQKSYJXATTXQEIPVDPVRNIFFBWYYTGDMBVGIJWFYBIIOOYLCKSNARESSCPFDGIHAHENWOSPVVOMRUUBGJZPHMVIUTNURHHKJELYTONVVZFTVXTJNIEUDCWMDOARAAIWBKGXZDPMBLTPQWVKBOULCEHRCSQPGAJEZMLPZWOYCJAJXGHWKFQCRBZNLWNBUQNQZSGEZFKMIUMLOXTXAZDEKJWXFEYQF");

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
    msg.setTimeStamp(0.540115656038);
    msg.setSource(43465U);
    msg.setSourceEntity(185U);
    msg.setDestination(2299U);
    msg.setDestinationEntity(64U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3018150695U;
    tmp_msg_0.start_lat = 0.292521955081;
    tmp_msg_0.start_lon = 0.291962368345;
    tmp_msg_0.start_z = 0.584855318367;
    tmp_msg_0.start_z_units = 13U;
    tmp_msg_0.end_lat = 0.648579561267;
    tmp_msg_0.end_lon = 0.647364449892;
    tmp_msg_0.end_z = 0.948760821728;
    tmp_msg_0.end_z_units = 128U;
    tmp_msg_0.speed = 0.0481832461212;
    tmp_msg_0.speed_units = 55U;
    tmp_msg_0.lradius = 0.582483533248;
    tmp_msg_0.flags = 94U;
    msg.control.set(tmp_msg_0);
    msg.duration = 452U;
    msg.custom.assign("TJELCNTNDPVMSJGIQADGFZCOAGZOMIGNMULPXWEPM");

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
    msg.setTimeStamp(0.654823260019);
    msg.setSource(18310U);
    msg.setSourceEntity(162U);
    msg.setDestination(58020U);
    msg.setDestinationEntity(154U);
    msg.timeout = 9925U;
    msg.lat = 0.258471615638;
    msg.lon = 0.693498998742;
    msg.z = 0.336332718454;
    msg.z_units = 108U;
    msg.speed = 0.0801210630665;
    msg.speed_units = 136U;
    msg.bearing = 0.971911328189;
    msg.cross_angle = 0.14484330053;
    msg.width = 0.590977885162;
    msg.length = 0.918064797767;
    msg.hstep = 0.392873821954;
    msg.coff = 139U;
    msg.alternation = 124U;
    msg.flags = 214U;
    msg.custom.assign("LWFXSWDESBJFXRNJKNYSWULTAXFSTDODGPMLJUJAXOEYQECZOEN");

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
    msg.setTimeStamp(0.828508074936);
    msg.setSource(12109U);
    msg.setSourceEntity(107U);
    msg.setDestination(57584U);
    msg.setDestinationEntity(188U);
    msg.timeout = 28577U;
    msg.lat = 0.304391854332;
    msg.lon = 0.176095043392;
    msg.z = 0.967450899433;
    msg.z_units = 254U;
    msg.speed = 0.338618306689;
    msg.speed_units = 188U;
    msg.bearing = 0.770115878774;
    msg.cross_angle = 0.990094823562;
    msg.width = 0.16720978561;
    msg.length = 0.854685906455;
    msg.hstep = 0.587592612998;
    msg.coff = 108U;
    msg.alternation = 202U;
    msg.flags = 75U;
    msg.custom.assign("IFDDUFGQKXNVRLIDZLFAIGUJQPFAMSJBQOCBNPXEVAXEZ");

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
    msg.setTimeStamp(0.124479029911);
    msg.setSource(18145U);
    msg.setSourceEntity(191U);
    msg.setDestination(841U);
    msg.setDestinationEntity(101U);
    msg.timeout = 47886U;
    msg.lat = 0.0396382393814;
    msg.lon = 0.808169432576;
    msg.z = 0.00134008096185;
    msg.z_units = 243U;
    msg.speed = 0.942569810993;
    msg.speed_units = 91U;
    msg.bearing = 0.0287247783138;
    msg.cross_angle = 0.93683702714;
    msg.width = 0.820486877068;
    msg.length = 0.500524687486;
    msg.hstep = 0.672311137405;
    msg.coff = 38U;
    msg.alternation = 102U;
    msg.flags = 134U;
    msg.custom.assign("RJWXGQBFCBZBXUDQAPDRNRGBDXSHMFLZFDNKMRNIROOGZTBIURDOZTZDUAXSQRLKSCPTPMMHMREOHXHLANOCRJZYQLMPECTBJHUXCPOYZS");

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
    msg.setTimeStamp(0.208139251913);
    msg.setSource(30138U);
    msg.setSourceEntity(151U);
    msg.setDestination(58166U);
    msg.setDestinationEntity(148U);
    msg.timeout = 17483U;
    msg.lat = 0.533484961487;
    msg.lon = 0.114323350589;
    msg.z = 0.829927083353;
    msg.z_units = 150U;
    msg.speed = 0.189764007751;
    msg.speed_units = 239U;
    msg.custom.assign("YGAYWHDWJQJESPLAZUOXNRITKQITVLIMDYBMMJIGAVZYTAYSQFVTZIJAGJPLTENSRSWXXLNWCLCQHFJCCOBIEASFOCUKM");

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
    msg.setTimeStamp(0.544475981839);
    msg.setSource(50646U);
    msg.setSourceEntity(239U);
    msg.setDestination(13673U);
    msg.setDestinationEntity(112U);
    msg.timeout = 15075U;
    msg.lat = 0.846616189394;
    msg.lon = 0.326139397012;
    msg.z = 0.686206792662;
    msg.z_units = 2U;
    msg.speed = 0.174999307079;
    msg.speed_units = 76U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.179458873435;
    tmp_msg_0.y = 0.326855695911;
    tmp_msg_0.z = 0.6897378302;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NYGLRHQNAMIYEOHTZSBYHORMCWFPPGIKCZEHKNDTKNDQRQQFPLBQFDKAOSAIJLJXTTEXXNOCSIVALFMFVTAPEKKAAJUSSAPICRZULBURNOAQCFQOVLSGIUWRWHSKCF");

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
    msg.setTimeStamp(0.466990720376);
    msg.setSource(24191U);
    msg.setSourceEntity(134U);
    msg.setDestination(20623U);
    msg.setDestinationEntity(249U);
    msg.timeout = 19669U;
    msg.lat = 0.602241790073;
    msg.lon = 0.0892819673956;
    msg.z = 0.447307600066;
    msg.z_units = 236U;
    msg.speed = 0.939431338101;
    msg.speed_units = 121U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0444836878506;
    tmp_msg_0.y = 0.672450991775;
    tmp_msg_0.z = 0.493922891017;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FUTMYVTOCFCYUOGGWSXEIECQCUWDVQQRFSDDS");

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
    msg.setTimeStamp(0.817282383484);
    msg.setSource(31726U);
    msg.setSourceEntity(165U);
    msg.setDestination(21913U);
    msg.setDestinationEntity(36U);
    msg.x = 0.250754600908;
    msg.y = 0.23848484181;
    msg.z = 0.702665385987;

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
    msg.setTimeStamp(0.334964623338);
    msg.setSource(7380U);
    msg.setSourceEntity(130U);
    msg.setDestination(11364U);
    msg.setDestinationEntity(95U);
    msg.x = 0.794944846151;
    msg.y = 0.570734839056;
    msg.z = 0.108240105781;

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
    msg.setTimeStamp(0.765252839543);
    msg.setSource(47159U);
    msg.setSourceEntity(0U);
    msg.setDestination(34644U);
    msg.setDestinationEntity(217U);
    msg.x = 0.987233737164;
    msg.y = 0.142025771527;
    msg.z = 0.0993770971552;

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
    msg.setTimeStamp(0.753121136588);
    msg.setSource(56442U);
    msg.setSourceEntity(86U);
    msg.setDestination(25508U);
    msg.setDestinationEntity(224U);
    msg.timeout = 16008U;
    msg.lat = 0.82244890559;
    msg.lon = 0.0959702629565;
    msg.z = 0.681153407577;
    msg.z_units = 57U;
    msg.amplitude = 0.0790934923044;
    msg.pitch = 0.816264556428;
    msg.speed = 0.721970155128;
    msg.speed_units = 133U;
    msg.custom.assign("HUCGUSPYTZOGWOEIXSHWDTNFPCIAOANYLGHICXSQUXOQJSLXIRJELLAMCTFXQRMEGZZMQMKONNVPGULQEGOCIZQBPTRZPDKYHNWTYBRRQVRBPTCCXTNPMLQOAYVMJXSUZVJJBUVFKHJRPZKGBSCANISHXBWBRMUDNJARCDKFOENLSUMZFW");

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
    msg.setTimeStamp(0.1060513488);
    msg.setSource(53447U);
    msg.setSourceEntity(133U);
    msg.setDestination(16746U);
    msg.setDestinationEntity(176U);
    msg.timeout = 33594U;
    msg.lat = 0.927197613336;
    msg.lon = 0.299353999861;
    msg.z = 0.380296938569;
    msg.z_units = 78U;
    msg.amplitude = 0.737702063626;
    msg.pitch = 0.627409734874;
    msg.speed = 0.613375157663;
    msg.speed_units = 177U;
    msg.custom.assign("OKQDANQUUTHVFTXCVTEBRUVJDAMSXDEPOFJOYIWOSNGWNBFARYNFTCIQRTHPGILLXJWYFLSZICHSXOHFSCLWXNRXDEBHSEORXLAZRMCKCRIZUGQMOMLSDTDUGNCKZVQZUAKZLFICAYKEJASPQWVUJHEJPRXKLPGGDPFGBYGNBCBVBKZHWOPGH");

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
    msg.setTimeStamp(0.116517826421);
    msg.setSource(1965U);
    msg.setSourceEntity(39U);
    msg.setDestination(31229U);
    msg.setDestinationEntity(23U);
    msg.timeout = 31210U;
    msg.lat = 0.983468309729;
    msg.lon = 0.342758470169;
    msg.z = 0.409455025184;
    msg.z_units = 241U;
    msg.amplitude = 0.430049850916;
    msg.pitch = 0.708041847431;
    msg.speed = 0.977682752518;
    msg.speed_units = 27U;
    msg.custom.assign("XAIQCXOKQAYLWAPXHMLGFSRVFRXAOOCEORTZWJPJUYWHSDTRTPKYQLGLIFHLVSWJXJNTAZNEKGEFCKZYNIUVXNEUGZBDMKG");

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
    msg.setTimeStamp(0.457268924862);
    msg.setSource(33498U);
    msg.setSourceEntity(169U);
    msg.setDestination(60365U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.754259399812);
    msg.setSource(139U);
    msg.setSourceEntity(227U);
    msg.setDestination(13588U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.318262190076);
    msg.setSource(30152U);
    msg.setSourceEntity(60U);
    msg.setDestination(19379U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.63827990345);
    msg.setSource(22019U);
    msg.setSourceEntity(47U);
    msg.setDestination(34531U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.460069129013;
    msg.lon = 0.378385763869;
    msg.z = 0.806833799004;
    msg.z_units = 76U;
    msg.radius = 0.86665757368;
    msg.duration = 31788U;
    msg.speed = 0.915290463115;
    msg.speed_units = 123U;
    msg.custom.assign("ULBLMBNAVZPWMHXTCGOBMJTIVXOSAVIKJKSYCHGDSMKWXSCDKZGEUXJMRNCZWOYBICLFGCWVOERVXARMKQOEDUHDSEQFOUEXWJMWKEPVVGBQFSDJPRYNLIBJQYIQHPDTCOPTIQLTMDELZFHHDQUGCSPRWSRVLEHRKWDAFPZQUVTGNIYZNDCJJIAUIUTFWXPRYOXTXMXBLNNGNJHPNIGAMAJZOGAQFTEHTBCWFHLYZSOSVZFAZLFKQY");

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
    msg.setTimeStamp(0.278213678617);
    msg.setSource(25045U);
    msg.setSourceEntity(78U);
    msg.setDestination(65308U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.227285790676;
    msg.lon = 0.495275489036;
    msg.z = 0.369227596424;
    msg.z_units = 35U;
    msg.radius = 0.240562378395;
    msg.duration = 64685U;
    msg.speed = 0.69704297626;
    msg.speed_units = 137U;
    msg.custom.assign("MZAXFAJMLPPEZWOGSSMWPVMWEHFDTSRCJVAVUSGGEZWONIUCWQGZNDKXOIGNFZVFFYDODLKAIAEORSDYYXMFZHCMTURQWADDNVXKLJEWOESAKMKOLSDEHUCGBWUNJFQDYCRWXYQVRIMITLUTTRBNXBCOPBEXOTUJKEZAPGMQHFBTJYUXFJQLHKVNUVBCIINPZPCHHTJKEILB");

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
    msg.setTimeStamp(0.888957281233);
    msg.setSource(48252U);
    msg.setSourceEntity(83U);
    msg.setDestination(24623U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.867288478353;
    msg.lon = 0.359701889913;
    msg.z = 0.289994400331;
    msg.z_units = 82U;
    msg.radius = 0.672025308303;
    msg.duration = 41151U;
    msg.speed = 0.425025931986;
    msg.speed_units = 223U;
    msg.custom.assign("MFWDWPUOVJRNAVNBIOFKIQYVMHCZBWRTGQGREEAVEVMAXXILGHKTNJEJSYRAYOCITNOSLRZBJMXPCBVPRZUJFUQFRBPYQPPKVSGKNXWIRXEYQHSKERZVSWTGXGBJUOFQPNOJDNCEQZPKWCUTLALFTZKXMMIYSVKWUFHUFUCEMWUA");

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
    msg.setTimeStamp(0.174792079487);
    msg.setSource(19105U);
    msg.setSourceEntity(54U);
    msg.setDestination(49534U);
    msg.setDestinationEntity(119U);
    msg.timeout = 56893U;
    msg.flags = 61U;
    msg.lat = 0.758221781995;
    msg.lon = 0.313932075473;
    msg.start_z = 0.329635813022;
    msg.start_z_units = 229U;
    msg.end_z = 0.841380134927;
    msg.end_z_units = 163U;
    msg.radius = 0.158268822712;
    msg.speed = 0.490858066887;
    msg.speed_units = 145U;
    msg.custom.assign("RGZNNEHXHWKZRCPFUZPCIMJTNFIXKEKVIOJCMTLJOUYO");

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
    msg.setTimeStamp(0.318129775883);
    msg.setSource(37141U);
    msg.setSourceEntity(124U);
    msg.setDestination(40658U);
    msg.setDestinationEntity(17U);
    msg.timeout = 50381U;
    msg.flags = 155U;
    msg.lat = 0.624961784105;
    msg.lon = 0.887002551311;
    msg.start_z = 0.567848076208;
    msg.start_z_units = 67U;
    msg.end_z = 0.00538318369538;
    msg.end_z_units = 53U;
    msg.radius = 0.266864089181;
    msg.speed = 0.276243462102;
    msg.speed_units = 44U;
    msg.custom.assign("SHWLCLXSVVJXYTVAGNKUSPGMXVTVLVYUWOJYZGJFCICFNIUWM");

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
    msg.setTimeStamp(0.352697202878);
    msg.setSource(1038U);
    msg.setSourceEntity(167U);
    msg.setDestination(32318U);
    msg.setDestinationEntity(219U);
    msg.timeout = 25744U;
    msg.flags = 152U;
    msg.lat = 0.577981903128;
    msg.lon = 0.995447855115;
    msg.start_z = 0.441681505494;
    msg.start_z_units = 118U;
    msg.end_z = 0.271089740377;
    msg.end_z_units = 186U;
    msg.radius = 0.731012497963;
    msg.speed = 0.862821999518;
    msg.speed_units = 43U;
    msg.custom.assign("PLIIUYALLKFSELPMSKQQHAOCWNAAYJRVNOFJXKYSGABZDZJURRQYCXFQBEV");

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
    msg.setTimeStamp(0.346499485645);
    msg.setSource(29417U);
    msg.setSourceEntity(12U);
    msg.setDestination(23318U);
    msg.setDestinationEntity(96U);
    msg.timeout = 18071U;
    msg.lat = 0.752948923773;
    msg.lon = 0.276161497387;
    msg.z = 0.886033498662;
    msg.z_units = 113U;
    msg.speed = 0.200398075678;
    msg.speed_units = 70U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.450941991514;
    tmp_msg_0.y = 0.629015440537;
    tmp_msg_0.z = 0.932969078433;
    tmp_msg_0.t = 0.46227156555;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HQGDYHNPOXIMQNMNXYRZSHALYHXEOUBPSSFVHQPFEGWOJCFGXWVNTAFXDKCMORPQKPWAVSGVRTOVNZAXTIGNMKQKOTSXDNWOCJUCGRWPIVOLDNDVLHBSJITSIDAHDKMFZFLZRXUIPOWLZUMBOURAZANIPWLYMZUFUYKSKSJLZBEREVCHDQJDRPMRVJTEBWBFELTJSJKBFIBKJMQAPYDHZLETGEWCQXR");

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
    msg.setTimeStamp(0.858845230588);
    msg.setSource(2033U);
    msg.setSourceEntity(37U);
    msg.setDestination(61749U);
    msg.setDestinationEntity(58U);
    msg.timeout = 56234U;
    msg.lat = 0.743768268806;
    msg.lon = 0.677026020945;
    msg.z = 0.448404412852;
    msg.z_units = 115U;
    msg.speed = 0.871054749511;
    msg.speed_units = 220U;
    msg.custom.assign("TRQSNBGWAMJHLJWMALXHONIINGAIXMFVSVVVCMCUTBGWJRDEHJGBANBEHKOTICQUMYNIQFEQUCJZBEYLDUYDKZ");

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
    msg.setTimeStamp(0.977744777944);
    msg.setSource(47073U);
    msg.setSourceEntity(222U);
    msg.setDestination(61566U);
    msg.setDestinationEntity(168U);
    msg.timeout = 47220U;
    msg.lat = 0.625171243618;
    msg.lon = 0.891245230068;
    msg.z = 0.556801080433;
    msg.z_units = 244U;
    msg.speed = 0.983262297656;
    msg.speed_units = 234U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.52837486685;
    tmp_msg_0.y = 0.0026483261477;
    tmp_msg_0.z = 0.909020457897;
    tmp_msg_0.t = 0.0670340594084;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MRPUZVLBJNFHMQXWOMHFHFBGSFGOYWPDVDEWSMYUFGIODRHQIBLREBCKVOWTCKNDDUJZYNUBYCAWCZZRKNAPIYSZUGJGUSTTXDGSXIDEHPZBXQEMYVGFUXGEUF");

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
    msg.setTimeStamp(0.431967507714);
    msg.setSource(45144U);
    msg.setSourceEntity(76U);
    msg.setDestination(50270U);
    msg.setDestinationEntity(248U);
    msg.x = 0.540322422409;
    msg.y = 0.667182343501;
    msg.z = 0.103443232676;
    msg.t = 0.797341384236;

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
    msg.setTimeStamp(0.513712778546);
    msg.setSource(33129U);
    msg.setSourceEntity(82U);
    msg.setDestination(1018U);
    msg.setDestinationEntity(130U);
    msg.x = 0.88591545119;
    msg.y = 0.901400931841;
    msg.z = 0.954766676021;
    msg.t = 0.0737536546391;

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
    msg.setTimeStamp(0.576055992084);
    msg.setSource(12981U);
    msg.setSourceEntity(201U);
    msg.setDestination(41329U);
    msg.setDestinationEntity(196U);
    msg.x = 0.0516485526313;
    msg.y = 0.756880919993;
    msg.z = 0.87495128267;
    msg.t = 0.940539212141;

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
    msg.setTimeStamp(0.699634698489);
    msg.setSource(39601U);
    msg.setSourceEntity(1U);
    msg.setDestination(6017U);
    msg.setDestinationEntity(222U);
    msg.timeout = 17855U;
    msg.name.assign("ABQKHQNAIPQOHNTKZYUTGJBLJEGJOWLCMZJWNXQLLKDOYFRTMKAGSJOSMGVNKVPYHDAHRDQIWJVXDRDPFAKCHUYKPVEEMMCXQNCZIJHGYVQLDZYNRSLUXAENZFHEGEIBOVWACKYMTPGFOZFCLUSRSZBAGERTIILCXDOMUPOITBVEFGXXJWXBSDKBHWTIQFRETUFYMIIPYUOUFQLTPUJSTCXBNVLH");
    msg.custom.assign("IURFKYPJNRRLSJMIMNDHGMFGOAJRMTXVWBTAUKCDQAHXUZDOPNPLINBWXRNXAHQYUIREPWBFQHDHJADAOYOFSKTTLQFQXAKHHPZYZTPMHOWLQDWQFFSJOMSWEPEBVNGAEQNBBNIXETSSWTSMTQUVZZUWBCUKGCQV");

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
    msg.setTimeStamp(0.57055606736);
    msg.setSource(37951U);
    msg.setSourceEntity(124U);
    msg.setDestination(13857U);
    msg.setDestinationEntity(123U);
    msg.timeout = 6918U;
    msg.name.assign("LBXOGNAABMQBFSGGHKYVDAGLSUPWCEBRHRPVOVPFWBVGWMZLTZUEBOKRIMNGHXRNZUYIHAWPBDYQGLULQSOYJZQRUJMFIPFVSTJWVI");
    msg.custom.assign("VNRTUBQZARBHGVCIPBKVQTFWIRJVKLHBGZIOPHXISEUIWLWAKYKEMDOPJMEMHQNFVOAMZAODGCMDHYETDZDSFGQSMX");

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
    msg.setTimeStamp(0.84829471958);
    msg.setSource(10403U);
    msg.setSourceEntity(66U);
    msg.setDestination(11143U);
    msg.setDestinationEntity(34U);
    msg.timeout = 53869U;
    msg.name.assign("KXIIDOSAKGPDSCHYJPOCCBKZRKZQNAMGLFQBNEDAWGDWGUZXXLWAOKCPVCYGTTVDTLFUADBUMTWEULHSOGBNPYAN");
    msg.custom.assign("WYHHZCRKNRQZLAEIDCZOPETEUOFZYVGGONTDRIJAQXMBLWVRAOMKQUII");

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
    msg.setTimeStamp(0.387313318161);
    msg.setSource(13958U);
    msg.setSourceEntity(158U);
    msg.setDestination(30971U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.460610823215;
    msg.lon = 0.578873808607;
    msg.z = 0.383761530209;
    msg.z_units = 176U;
    msg.speed = 0.928035986751;
    msg.speed_units = 224U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.547972714576;
    tmp_msg_0.y = 0.429182039188;
    tmp_msg_0.z = 0.133985545773;
    tmp_msg_0.t = 0.0725801590964;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.0502780098905;
    msg.custom.assign("UNGCTVPLIBZIXBPSXFKLJBIFLQHQWDMVSIXMUGGAWYJVRAFRBUYCIAQQWALGEZKSIXNTTRNMZYWMEUCSHKYRIXCRFPWXNIADXYACJLHSTHHBHSOQEBKLWOXPGNZUZSMYDLPEFYJMMRCVELEOVCUPNOHPFUWQKBVPPGZOAJU");

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
    msg.setTimeStamp(0.671415450334);
    msg.setSource(54613U);
    msg.setSourceEntity(81U);
    msg.setDestination(9044U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.847574960807;
    msg.lon = 0.278827823744;
    msg.z = 0.235919625248;
    msg.z_units = 195U;
    msg.speed = 0.193168214485;
    msg.speed_units = 74U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.938973524151;
    tmp_msg_0.y = 0.723842899661;
    tmp_msg_0.z = 0.237584259072;
    tmp_msg_0.t = 0.419180860658;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.906078821842;
    msg.custom.assign("EBYGABYKRHALLGMJMEFYEJDZGWRMCCGTOCAAMVKAQNVJHHIPQXGSPGHVWENERABCHSIYTIBUXUEILTMBTCIGZATJEBPFEFNWVDMDGURPUJQMPYFWVOQNPKINHUUYOXJPKDFWMXKRMSDYYWWUXNXOCNNBKFIRLFVOVRVEHXLVKZTMBGZBFKTWCNISCDFOOSXPALQRKDLSLUYSQGCTRZWUHZPJFJDQKSSXSDIR");

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
    msg.setTimeStamp(0.677742487439);
    msg.setSource(14257U);
    msg.setSourceEntity(89U);
    msg.setDestination(21571U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.635165450836;
    msg.lon = 0.509163459169;
    msg.z = 0.896434470656;
    msg.z_units = 222U;
    msg.speed = 0.0757374314471;
    msg.speed_units = 105U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.817729222831;
    tmp_msg_0.y = 0.695432515783;
    tmp_msg_0.z = 0.975659276705;
    tmp_msg_0.t = 0.049926384566;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.531194624199;
    msg.custom.assign("MLEFIFTCJADIBUDYYAOFSPOQSERWECLZSFTRIIDPRMBJZONXVOSYEWBBWWPLDRMQKNPGZCJUEKUELKQQIHLRAPJX");

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
    msg.setTimeStamp(0.0250250123545);
    msg.setSource(42695U);
    msg.setSourceEntity(141U);
    msg.setDestination(52825U);
    msg.setDestinationEntity(237U);
    msg.vid = 38493U;
    msg.off_x = 0.405159725627;
    msg.off_y = 0.299278726548;
    msg.off_z = 0.371353796321;

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
    msg.setTimeStamp(0.577336228926);
    msg.setSource(796U);
    msg.setSourceEntity(79U);
    msg.setDestination(57744U);
    msg.setDestinationEntity(177U);
    msg.vid = 63137U;
    msg.off_x = 0.0570349774358;
    msg.off_y = 0.983976865373;
    msg.off_z = 0.22526133012;

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
    msg.setTimeStamp(0.934238222631);
    msg.setSource(7189U);
    msg.setSourceEntity(136U);
    msg.setDestination(65384U);
    msg.setDestinationEntity(216U);
    msg.vid = 32730U;
    msg.off_x = 0.74947939691;
    msg.off_y = 0.350022387964;
    msg.off_z = 0.780712373635;

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
    msg.setTimeStamp(0.375780907819);
    msg.setSource(32305U);
    msg.setSourceEntity(119U);
    msg.setDestination(56159U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.46155224522);
    msg.setSource(61955U);
    msg.setSourceEntity(49U);
    msg.setDestination(56843U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.305643687884);
    msg.setSource(26741U);
    msg.setSourceEntity(194U);
    msg.setDestination(52188U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.345522262073);
    msg.setSource(64180U);
    msg.setSourceEntity(221U);
    msg.setDestination(46485U);
    msg.setDestinationEntity(226U);
    msg.mid = 50749U;

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
    msg.setTimeStamp(0.84704285783);
    msg.setSource(13331U);
    msg.setSourceEntity(128U);
    msg.setDestination(32365U);
    msg.setDestinationEntity(250U);
    msg.mid = 26078U;

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
    msg.setTimeStamp(0.660239218295);
    msg.setSource(47945U);
    msg.setSourceEntity(138U);
    msg.setDestination(31305U);
    msg.setDestinationEntity(135U);
    msg.mid = 17017U;

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
    msg.setTimeStamp(0.765001882571);
    msg.setSource(56147U);
    msg.setSourceEntity(58U);
    msg.setDestination(21706U);
    msg.setDestinationEntity(55U);
    msg.state = 33U;
    msg.eta = 38711U;
    msg.info.assign("SMBUKZBRAICABTVTXQN");

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
    msg.setTimeStamp(0.777195002617);
    msg.setSource(23380U);
    msg.setSourceEntity(49U);
    msg.setDestination(50789U);
    msg.setDestinationEntity(233U);
    msg.state = 70U;
    msg.eta = 18966U;
    msg.info.assign("PHZNFBKCPIP");

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
    msg.setTimeStamp(0.837552321692);
    msg.setSource(16658U);
    msg.setSourceEntity(6U);
    msg.setDestination(59664U);
    msg.setDestinationEntity(0U);
    msg.state = 156U;
    msg.eta = 61263U;
    msg.info.assign("NYVBHOWTHLOHATAT");

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
    msg.setTimeStamp(0.160955381476);
    msg.setSource(22358U);
    msg.setSourceEntity(65U);
    msg.setDestination(44856U);
    msg.setDestinationEntity(95U);
    msg.system = 61410U;
    msg.duration = 13600U;
    msg.speed = 0.822814366288;
    msg.speed_units = 163U;
    msg.x = 0.597726595538;
    msg.y = 0.14063330555;
    msg.z = 0.884424436848;
    msg.z_units = 103U;

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
    msg.setTimeStamp(0.454012676211);
    msg.setSource(20051U);
    msg.setSourceEntity(8U);
    msg.setDestination(7044U);
    msg.setDestinationEntity(232U);
    msg.system = 29985U;
    msg.duration = 10521U;
    msg.speed = 0.723799393124;
    msg.speed_units = 59U;
    msg.x = 0.7398039478;
    msg.y = 0.611596934395;
    msg.z = 0.877324796199;
    msg.z_units = 191U;

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
    msg.setTimeStamp(0.891609930527);
    msg.setSource(48630U);
    msg.setSourceEntity(188U);
    msg.setDestination(18932U);
    msg.setDestinationEntity(101U);
    msg.system = 497U;
    msg.duration = 50414U;
    msg.speed = 0.186471293403;
    msg.speed_units = 107U;
    msg.x = 0.997639317381;
    msg.y = 0.778103075617;
    msg.z = 0.9250118051;
    msg.z_units = 145U;

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
    msg.setTimeStamp(0.0797947156784);
    msg.setSource(47404U);
    msg.setSourceEntity(24U);
    msg.setDestination(8961U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.00604513970902;
    msg.lon = 0.0876151853249;
    msg.speed = 0.213871971998;
    msg.speed_units = 120U;
    msg.duration = 11494U;
    msg.sys_a = 22634U;
    msg.sys_b = 23078U;
    msg.move_threshold = 0.0786116794922;

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
    msg.setTimeStamp(0.783561514165);
    msg.setSource(27979U);
    msg.setSourceEntity(2U);
    msg.setDestination(62269U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.738303714147;
    msg.lon = 0.307175445061;
    msg.speed = 0.981966659475;
    msg.speed_units = 135U;
    msg.duration = 49894U;
    msg.sys_a = 57806U;
    msg.sys_b = 13239U;
    msg.move_threshold = 0.546230098534;

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
    msg.setTimeStamp(0.196292750327);
    msg.setSource(5249U);
    msg.setSourceEntity(164U);
    msg.setDestination(55048U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.464490674371;
    msg.lon = 0.966006548405;
    msg.speed = 0.4792095825;
    msg.speed_units = 148U;
    msg.duration = 550U;
    msg.sys_a = 26971U;
    msg.sys_b = 39162U;
    msg.move_threshold = 0.405256281461;

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
    msg.setTimeStamp(0.0577548713421);
    msg.setSource(34050U);
    msg.setSourceEntity(175U);
    msg.setDestination(50245U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.620785776788;
    msg.lon = 0.693738120065;
    msg.z = 0.816517147431;
    msg.z_units = 138U;
    msg.speed = 0.648979834306;
    msg.speed_units = 198U;
    msg.custom.assign("QQLOHGXHVRAKGYPSJEKSSEWBXMCOOHONBDLZIYHWGMYFODTPRIFCEZQMFAEPPALAUTMJGTNZJCUTIMOVVZDCQAOPWDRUJYTRGVSRBQSTIKRSKYBHPPNRQGYFKXUCERLMZFQOLCTZPIGDVQZXIJBCFGXNQWOXWADXSFDKAJILRCZD");

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
    msg.setTimeStamp(0.209968215829);
    msg.setSource(4630U);
    msg.setSourceEntity(213U);
    msg.setDestination(57566U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.36101029292;
    msg.lon = 0.72744858876;
    msg.z = 0.104716943123;
    msg.z_units = 110U;
    msg.speed = 0.698432222778;
    msg.speed_units = 148U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.139607857928;
    tmp_msg_0.lon = 0.485249990126;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("JGXNXLXPMFYAKVKNYHEJPFEXWJOSVNRDVCYTKQVPEJTVPVOANROYYBJWVIHKMLRGGXAXKRSGZNKEBDBYPLASIBSCNWURSTNBWYURTMPZESKWUSDIXAODIQFQYUSDZVTGBCOPUZLGNIOKNBQUWWAPFMIMRDSMZTHZFFEQDQLFYF");

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
    msg.setTimeStamp(0.685214141981);
    msg.setSource(17396U);
    msg.setSourceEntity(106U);
    msg.setDestination(34801U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.235185768994;
    msg.lon = 0.849242108233;
    msg.z = 0.840004191243;
    msg.z_units = 94U;
    msg.speed = 0.856005104985;
    msg.speed_units = 168U;
    msg.custom.assign("EDYVPZQKIYWCPXLJYRQYBWONQABNOHKFTEFGSHXPVSUUQIOHANCNWIYSOZQBBBIKJLEDLJVUMRCOGHGFWMSHGESCABFDUMLCHTTXKRVXMNKDMBORXEUBVKERUYGWUDAXBKNGPHVNNXXFDNWQ");

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
    msg.setTimeStamp(0.728266789288);
    msg.setSource(18448U);
    msg.setSourceEntity(119U);
    msg.setDestination(61957U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.637560789386;
    msg.lon = 0.937566000613;

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
    msg.setTimeStamp(0.225770781962);
    msg.setSource(6540U);
    msg.setSourceEntity(127U);
    msg.setDestination(16707U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.153720152151;
    msg.lon = 0.00476741772154;

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
    msg.setTimeStamp(0.986782149458);
    msg.setSource(15758U);
    msg.setSourceEntity(29U);
    msg.setDestination(47779U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.0403213743833;
    msg.lon = 0.744602301884;

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
    msg.setTimeStamp(0.739940411115);
    msg.setSource(11731U);
    msg.setSourceEntity(225U);
    msg.setDestination(6081U);
    msg.setDestinationEntity(43U);
    msg.timeout = 18625U;
    msg.lat = 0.991526739451;
    msg.lon = 0.178451865903;
    msg.z = 0.281184124544;
    msg.z_units = 132U;
    msg.pitch = 0.259027450727;
    msg.amplitude = 0.577556353919;
    msg.duration = 51498U;
    msg.speed = 0.424793330029;
    msg.speed_units = 14U;
    msg.radius = 0.966859552273;
    msg.direction = 201U;
    msg.custom.assign("KDSZHJILLSCPBMNGDRWUUFMKOHARMVAWOXEQUPYOJLHVROSAKHFAPVZCP");

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
    msg.setTimeStamp(0.990058265755);
    msg.setSource(27866U);
    msg.setSourceEntity(112U);
    msg.setDestination(26116U);
    msg.setDestinationEntity(172U);
    msg.timeout = 29510U;
    msg.lat = 0.387360041361;
    msg.lon = 0.216563470981;
    msg.z = 0.711947260044;
    msg.z_units = 129U;
    msg.pitch = 0.538268381391;
    msg.amplitude = 0.657457872352;
    msg.duration = 32577U;
    msg.speed = 0.970475382613;
    msg.speed_units = 139U;
    msg.radius = 0.82108508662;
    msg.direction = 50U;
    msg.custom.assign("IKWJUGZGJRATVQNNJYWNJSNMAADGRWRYVDGKIBHTJNCOPQRLCHQYFCDZFBWJSAKLPZRGHYEJPKCQHRYFCN");

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
    msg.setTimeStamp(0.188275030268);
    msg.setSource(51523U);
    msg.setSourceEntity(101U);
    msg.setDestination(48282U);
    msg.setDestinationEntity(125U);
    msg.timeout = 20620U;
    msg.lat = 0.4493578121;
    msg.lon = 0.896456244237;
    msg.z = 0.49353739934;
    msg.z_units = 254U;
    msg.pitch = 0.562607848942;
    msg.amplitude = 0.214417353822;
    msg.duration = 17058U;
    msg.speed = 0.904391504041;
    msg.speed_units = 89U;
    msg.radius = 0.00741088604819;
    msg.direction = 227U;
    msg.custom.assign("RQLJICEZSXYWCXEBNLGPZKAOKKZAVRCREKAPSJVPBQCOEIMQZYTWVBVKTTESSJKGPAXIOGKSDZJNSDWTGOHTHFDWIEXGDLEMCLMEORFCPKQNQPWXMKUQZJFZRFUUVDHDBLFJUFLNUNOGLQOAMRJCYYWIUXAYYTGEWXYQNMFYHUQRWBSTBBDIZYUONJHRPJBBFHWCSDOUSBTPLHMCNIYNUFZGLZOVHADGKSMVELXAXPTNMIVHFAHR");

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
    msg.setTimeStamp(0.358083709199);
    msg.setSource(59842U);
    msg.setSourceEntity(163U);
    msg.setDestination(12836U);
    msg.setDestinationEntity(203U);
    msg.formation_name.assign("PDJGKATTOBUHOOQHKZXTONWEGIBHEBDLXCZGJDOIVZVCSRMJTBSIMDEBMUFPSPQROORLKGYESCHUZSFXGTUCMVEJYXUVKCQCCRUPLWINBQBJYZFAIEWPGBLBNTYZLAGNS");
    msg.reference_frame = 52U;
    msg.custom.assign("BGRDACCHCLBBKSVVHCUEBOPQLZZKOKYBGCQPJOXLHJGZSNFPYUZRNIBIPJFEXWYZDCIQTNYEKLSDFEXGMETDRRJAPFZVJUWPLMEUETEQJOHWKTHRQVOSCLKVFWMFFNLTWYDBLPFMLGI");

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
    msg.setTimeStamp(0.0914906239958);
    msg.setSource(52831U);
    msg.setSourceEntity(196U);
    msg.setDestination(62429U);
    msg.setDestinationEntity(133U);
    msg.formation_name.assign("PNSKGZUSLYNPVLWCFQSKREUDRTQUTJUDWSBFSWJIRQKOTPJMMEQCYYNAKCZFXOJZJXDWP");
    msg.reference_frame = 4U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6305U;
    tmp_msg_0.off_x = 0.948073346947;
    tmp_msg_0.off_y = 0.951112571938;
    tmp_msg_0.off_z = 0.967578518652;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MYXRJIIWEGXKZKBYMHYSKQMDMVQBIAZUXABNZBWKHNGVYLZRZLJMCOPZGXUZDBQGVQJTWEODTFFKEIQDFOLRGYOHUVKVINMMUI");

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
    msg.setTimeStamp(0.153618616075);
    msg.setSource(31948U);
    msg.setSourceEntity(201U);
    msg.setDestination(19061U);
    msg.setDestinationEntity(16U);
    msg.formation_name.assign("HSOOFPZFGALIMUXDGSJWEXVCDNCLSSBTHCULTPHATSWUHLVEJQBIUWBNXOHEMZOGTCMZXXPBKMSKXLIEAYIRFIFTYPABQOJWKEQOROGNGPMUVP");
    msg.reference_frame = 248U;
    msg.custom.assign("POWPXFKYVSVVUGFAMBJKHJLJBXYPMQYNFDHELEIASIUPYVFDTAQADHBCTLSLBBPOCYTUGRTVZUPLYMHGKEJGZNQBWLQYLYWJOJCPIKNKLSJRXETXCCRMCQRTIHXJNTKRTWUVMAOGPHSRVWGDQAFWHEFNDZRGCAIXCHOZQN");

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
    msg.setTimeStamp(0.866974603824);
    msg.setSource(1847U);
    msg.setSourceEntity(80U);
    msg.setDestination(63092U);
    msg.setDestinationEntity(22U);
    msg.group_name.assign("BAQHYPONKHXWMVGVQZBEFATPKLOQDVRREQYXYAFOGVUPRMANYXPKWPSYZNJNABOLCSPKDXXCE");
    msg.formation_name.assign("OXJPHDUABFVJWXEOCMTURWYDRL");
    msg.plan_id.assign("MZSDKAZIZOXIZCSRUPIUVSUQYNJCSSVKBHRIKZHDZBBMTLMNJRDBYONLHTFEPWGKUAAANGAYBBSGDCDEVJRECYGEETKXWWCGXUJWWNNWIJUWLXNXLIJPXMMAK");
    msg.description.assign("NFODOUWQTRCGOZDQQGBMVNMDGMPRUKWTGMEQELFYJTKTCEZCAWDCCLTANMORKRUAHUVPVBVYZMLJOSXAIAECNEVYFXKULOBEZFQECTXHKDEIRBLGFYYDUYXCSRMWOUQAAMQMXNVGNFWRCWHVGSHHWUGTZSPDAFOBKLILHXDLBJIOHJTSJXNHSABSJPVZYJFXBISDPBXROCPKSFVITKMIBJJYFGYULEHLIXHR");
    msg.leader_speed = 0.115939756663;
    msg.leader_bank_lim = 0.92277159202;
    msg.pos_sim_err_lim = 0.0532528372414;
    msg.pos_sim_err_wrn = 0.221607707759;
    msg.pos_sim_err_timeout = 61198U;
    msg.converg_max = 0.0578477572063;
    msg.converg_timeout = 28971U;
    msg.comms_timeout = 59209U;
    msg.turb_lim = 0.00318300857322;
    msg.custom.assign("DSTLAPAGMGWNDBCIFTIFWVLLVATCLEDXDZEJTLEUZFBOKRYVXETEQKCDOQQYOKPHHKZONJHNULJBWWHRECDXGNLCO");

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
    msg.setTimeStamp(0.958631350012);
    msg.setSource(14964U);
    msg.setSourceEntity(154U);
    msg.setDestination(32664U);
    msg.setDestinationEntity(34U);
    msg.group_name.assign("CLECTFXXVIBZWBNJGKOIBYDSWELMCYQTRSGCURTXIDXSYQYNWDULZDAPWLV");
    msg.formation_name.assign("RAZWXQSBFRXTQFFQZYIJGIIACEMC");
    msg.plan_id.assign("CZHONJJDLHHBUBOTFBGUAUNEVNBQCYZTMLQYKGPAEKRHXMJWZTWZWQSXUQYWNHGJNORMSMJFUIRRMBGIXFFBKABRPAVJEV");
    msg.description.assign("IULGCSDYWBCNYVOELLAOJKXVSIEBKXLCEZORVUZMEMTDBXKWHXPIINA");
    msg.leader_speed = 0.304156975738;
    msg.leader_bank_lim = 0.376759871647;
    msg.pos_sim_err_lim = 0.176184639611;
    msg.pos_sim_err_wrn = 0.269248519831;
    msg.pos_sim_err_timeout = 57687U;
    msg.converg_max = 0.229834317138;
    msg.converg_timeout = 4099U;
    msg.comms_timeout = 39091U;
    msg.turb_lim = 0.973117562333;
    msg.custom.assign("KBDCXBPBCJIFOLSLWUTGOKMXLNNIXIHFRXVBSRTDYJKRZIYXQHWXFVJAYJPWPZFGBPEOZHJSFOZNPSWEEFQSMLWOGFRGUWYLBJHOHBDIZYPICDMBJKTQCSKTVDLVGCDEZNNKKFEWUIZATQAUXQUSPUMGRWIGKDTPROCTPHMMZHLWBYHQAJVSQXSALOZCGKAVHMNTQDECLRYNMQOTVTALCIQMCNOREWRMSNGXVEEFVDUG");

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
    msg.setTimeStamp(0.559648541238);
    msg.setSource(39387U);
    msg.setSourceEntity(175U);
    msg.setDestination(24544U);
    msg.setDestinationEntity(26U);
    msg.group_name.assign("YAWTYWWTUSWVCW");
    msg.formation_name.assign("AFGIHDVVGSUSTJBFETRGPVTDKYLRGOLKIQOVMEZIKPHGOPIXXRIVOSXNQCMQANSBUFWJEOSTTZCAWQQYYZRSEBOAGQLULFKZRBBGGLFLNRYAMPRAFPYTQFMUWLCAUPZXTPHHPJMNKXDPYDGKCZKBRIASBYXLDICOHBGHCYENJVOISFCHAOTMVJMMIJDEUZLKDDZQSTTHH");
    msg.plan_id.assign("QDYWQLAMOTDLUZRZPDMAJNICMCXHQLEUUEZKXPYNWSETHFAASZTKENTFOTYKHMARWKJRKHUZYMEGPWJJBTERIWEVEJRWXQBIFCMAMCVWHUWIYLOMPGKFJCFTZOXZLOPZFIRVOPQGRKHFSWXNGLQCDBQIOGECTFKVFNSJBBVGHXRBUYSVKRVFNYLDDLSDISPKYCMXBABNSJOIECASLAQBANZPIIHDUCHT");
    msg.description.assign("EPYKVHFGYMCDBNLBNDRBZQYDPEUZMRTVEYOGDCRSAIPXATOLXBWEHCPCFUDWVMTJKEBXUCXIVQSILLTUWTWXFRNPGNULZ");
    msg.leader_speed = 0.341862942797;
    msg.leader_bank_lim = 0.355888368078;
    msg.pos_sim_err_lim = 0.462733273462;
    msg.pos_sim_err_wrn = 0.264998539726;
    msg.pos_sim_err_timeout = 25710U;
    msg.converg_max = 0.671243452231;
    msg.converg_timeout = 28864U;
    msg.comms_timeout = 27670U;
    msg.turb_lim = 0.293637917012;
    msg.custom.assign("BMUSXCRNORYIDXJQICYPPHPWXDTPCKQUEXTPTGFBORIABDJTWELSEIVTXDBYHVSFLERUCLRYZTKIMIIAOSOHUYWLQVSTLMFADVHPZMBBEKOZXDFKPNHIKBGNXAAAAZFBQGKQVXBUFXNQRCLRD");

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
    msg.setTimeStamp(0.620306805333);
    msg.setSource(55340U);
    msg.setSourceEntity(237U);
    msg.setDestination(57158U);
    msg.setDestinationEntity(154U);
    msg.control_src = 22767U;
    msg.control_ent = 109U;
    msg.timeout = 0.691860851693;
    msg.loiter_radius = 0.790330612815;
    msg.altitude_interval = 0.400584968736;

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
    msg.setTimeStamp(0.378079013774);
    msg.setSource(13657U);
    msg.setSourceEntity(139U);
    msg.setDestination(6134U);
    msg.setDestinationEntity(19U);
    msg.control_src = 41576U;
    msg.control_ent = 150U;
    msg.timeout = 0.623871918731;
    msg.loiter_radius = 0.0305618970191;
    msg.altitude_interval = 0.262199029352;

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
    msg.setTimeStamp(0.766421758568);
    msg.setSource(12593U);
    msg.setSourceEntity(211U);
    msg.setDestination(23091U);
    msg.setDestinationEntity(116U);
    msg.control_src = 3955U;
    msg.control_ent = 168U;
    msg.timeout = 0.277681376359;
    msg.loiter_radius = 0.594232909596;
    msg.altitude_interval = 0.025955897538;

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
    msg.setTimeStamp(0.110185045484);
    msg.setSource(55056U);
    msg.setSourceEntity(202U);
    msg.setDestination(22023U);
    msg.setDestinationEntity(113U);
    msg.flags = 100U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0562278390469;
    tmp_msg_0.speed_units = 247U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.595460855752;
    tmp_msg_1.z_units = 125U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.759025301716;
    msg.lon = 0.804186769894;
    msg.radius = 0.618488350092;

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
    msg.setTimeStamp(0.668589908713);
    msg.setSource(211U);
    msg.setSourceEntity(242U);
    msg.setDestination(24805U);
    msg.setDestinationEntity(29U);
    msg.flags = 195U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.24632668736;
    tmp_msg_0.speed_units = 77U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.489314829853;
    tmp_msg_1.z_units = 178U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.923010111931;
    msg.lon = 0.201553799891;
    msg.radius = 0.400482433802;

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
    msg.setTimeStamp(0.212139028027);
    msg.setSource(50404U);
    msg.setSourceEntity(160U);
    msg.setDestination(14769U);
    msg.setDestinationEntity(50U);
    msg.flags = 226U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.821727245671;
    tmp_msg_0.speed_units = 164U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.928640412014;
    tmp_msg_1.z_units = 232U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.890580716442;
    msg.lon = 0.711478448831;
    msg.radius = 0.341412790115;

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
    msg.setTimeStamp(0.678741468049);
    msg.setSource(64085U);
    msg.setSourceEntity(160U);
    msg.setDestination(21948U);
    msg.setDestinationEntity(114U);
    msg.control_src = 64288U;
    msg.control_ent = 20U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 229U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.611344129923;
    tmp_tmp_msg_0_0.speed_units = 148U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.771261430414;
    tmp_tmp_msg_0_1.z_units = 175U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.919048849156;
    tmp_msg_0.lon = 0.280571078434;
    tmp_msg_0.radius = 0.334720113774;
    msg.reference.set(tmp_msg_0);
    msg.state = 123U;
    msg.proximity = 246U;

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
    msg.setTimeStamp(0.962184545955);
    msg.setSource(12210U);
    msg.setSourceEntity(129U);
    msg.setDestination(5058U);
    msg.setDestinationEntity(25U);
    msg.control_src = 17038U;
    msg.control_ent = 251U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 232U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.526382483984;
    tmp_tmp_msg_0_0.speed_units = 33U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.72585224677;
    tmp_tmp_msg_0_1.z_units = 159U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.845696053628;
    tmp_msg_0.lon = 0.819813799884;
    tmp_msg_0.radius = 0.184599459377;
    msg.reference.set(tmp_msg_0);
    msg.state = 252U;
    msg.proximity = 250U;

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
    msg.setTimeStamp(0.563356875643);
    msg.setSource(49204U);
    msg.setSourceEntity(191U);
    msg.setDestination(53503U);
    msg.setDestinationEntity(188U);
    msg.control_src = 38073U;
    msg.control_ent = 100U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 38U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.265136681316;
    tmp_tmp_msg_0_0.speed_units = 173U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.270745270882;
    tmp_tmp_msg_0_1.z_units = 107U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.549371998066;
    tmp_msg_0.lon = 0.594581635894;
    tmp_msg_0.radius = 0.699622596728;
    msg.reference.set(tmp_msg_0);
    msg.state = 166U;
    msg.proximity = 226U;

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
    msg.setTimeStamp(0.560236618338);
    msg.setSource(40183U);
    msg.setSourceEntity(43U);
    msg.setDestination(55988U);
    msg.setDestinationEntity(244U);
    msg.ax_cmd = 0.766113140721;
    msg.ay_cmd = 0.630105358123;
    msg.az_cmd = 0.214453201333;
    msg.ax_des = 0.421657435398;
    msg.ay_des = 0.881657158784;
    msg.az_des = 0.891672460987;
    msg.virt_err_x = 0.868988351705;
    msg.virt_err_y = 0.154713533377;
    msg.virt_err_z = 0.0898398042041;
    msg.surf_fdbk_x = 0.798167052946;
    msg.surf_fdbk_y = 0.746434505463;
    msg.surf_fdbk_z = 0.510776445045;
    msg.surf_unkn_x = 0.788928104737;
    msg.surf_unkn_y = 0.721524042462;
    msg.surf_unkn_z = 0.318120418308;
    msg.ss_x = 0.448815453844;
    msg.ss_y = 0.865964699599;
    msg.ss_z = 0.662638293094;

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
    msg.setTimeStamp(0.674732474693);
    msg.setSource(5081U);
    msg.setSourceEntity(193U);
    msg.setDestination(13981U);
    msg.setDestinationEntity(157U);
    msg.ax_cmd = 0.550863144189;
    msg.ay_cmd = 0.745914953131;
    msg.az_cmd = 0.139110629924;
    msg.ax_des = 0.0112406294955;
    msg.ay_des = 0.115474881061;
    msg.az_des = 0.747608287724;
    msg.virt_err_x = 0.584143646311;
    msg.virt_err_y = 0.911759192542;
    msg.virt_err_z = 0.117923510907;
    msg.surf_fdbk_x = 0.175570971741;
    msg.surf_fdbk_y = 0.37417471084;
    msg.surf_fdbk_z = 0.443162731003;
    msg.surf_unkn_x = 0.213737922637;
    msg.surf_unkn_y = 0.59435383996;
    msg.surf_unkn_z = 0.459736472701;
    msg.ss_x = 0.858839873086;
    msg.ss_y = 0.96003308266;
    msg.ss_z = 0.25444779043;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ABXGOYCATDAIUQKKWYFDMHTBJYUWJTCYWEFZVITISYLVASTZSWZUQEMEQAEIYXTLYXIHKLURONMKJDBNGDLSVPJBNBZLQANVXMXSKXDQOCRDHCREVAVFJ");
    tmp_msg_0.dist = 0.213095982456;
    tmp_msg_0.err = 0.640499061195;
    tmp_msg_0.ctrl_imp = 0.806094450179;
    tmp_msg_0.rel_dir_x = 0.723198839085;
    tmp_msg_0.rel_dir_y = 0.154203380935;
    tmp_msg_0.rel_dir_z = 0.40975540478;
    tmp_msg_0.err_x = 0.0947759821996;
    tmp_msg_0.err_y = 0.508929921956;
    tmp_msg_0.err_z = 0.206126737125;
    tmp_msg_0.rf_err_x = 0.506578278585;
    tmp_msg_0.rf_err_y = 0.894521379179;
    tmp_msg_0.rf_err_z = 0.518185836233;
    tmp_msg_0.rf_err_vx = 0.20186915525;
    tmp_msg_0.rf_err_vy = 0.78814071946;
    tmp_msg_0.rf_err_vz = 0.982332355117;
    tmp_msg_0.ss_x = 0.305288362837;
    tmp_msg_0.ss_y = 0.504100952902;
    tmp_msg_0.ss_z = 0.286204103853;
    tmp_msg_0.virt_err_x = 0.221797135546;
    tmp_msg_0.virt_err_y = 0.596286337072;
    tmp_msg_0.virt_err_z = 0.0343077852503;
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
    msg.setTimeStamp(0.0517161009517);
    msg.setSource(57776U);
    msg.setSourceEntity(201U);
    msg.setDestination(57701U);
    msg.setDestinationEntity(163U);
    msg.ax_cmd = 0.522512123295;
    msg.ay_cmd = 0.621408012793;
    msg.az_cmd = 0.820026806917;
    msg.ax_des = 0.840637562967;
    msg.ay_des = 0.464685638655;
    msg.az_des = 0.572473925088;
    msg.virt_err_x = 0.720544879024;
    msg.virt_err_y = 0.165203984866;
    msg.virt_err_z = 0.584003008076;
    msg.surf_fdbk_x = 0.594644114569;
    msg.surf_fdbk_y = 0.23198541841;
    msg.surf_fdbk_z = 0.919480302256;
    msg.surf_unkn_x = 0.564940527464;
    msg.surf_unkn_y = 0.412960411531;
    msg.surf_unkn_z = 0.989073965373;
    msg.ss_x = 0.204009771025;
    msg.ss_y = 0.244914774238;
    msg.ss_z = 0.0688989699938;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YDBMGSQQUQUJUVUABJYRCKFLCWWXVYGYONEJVUCOFPRMMMNNJKGNDTAFIEAEAQVYHXXHYUGMZSQOOHINWBETMFSZXBTDLYZFKGLTMKVHKRIAISEHQDNDEAHQKWOUTPKFOOPXIKWHRWUCYZLGLVCZZGVDMRNQBGG");
    tmp_msg_0.dist = 0.556973175765;
    tmp_msg_0.err = 0.843042384625;
    tmp_msg_0.ctrl_imp = 0.964355639303;
    tmp_msg_0.rel_dir_x = 0.744871054896;
    tmp_msg_0.rel_dir_y = 0.842385098398;
    tmp_msg_0.rel_dir_z = 0.130529067719;
    tmp_msg_0.err_x = 0.555922058134;
    tmp_msg_0.err_y = 0.723294577226;
    tmp_msg_0.err_z = 0.35964209674;
    tmp_msg_0.rf_err_x = 0.261274600393;
    tmp_msg_0.rf_err_y = 0.116976939102;
    tmp_msg_0.rf_err_z = 0.0292931605266;
    tmp_msg_0.rf_err_vx = 0.803525659285;
    tmp_msg_0.rf_err_vy = 0.136646200795;
    tmp_msg_0.rf_err_vz = 0.406654594952;
    tmp_msg_0.ss_x = 0.418134156845;
    tmp_msg_0.ss_y = 0.941598542391;
    tmp_msg_0.ss_z = 0.578452150962;
    tmp_msg_0.virt_err_x = 0.522546667713;
    tmp_msg_0.virt_err_y = 0.616267790269;
    tmp_msg_0.virt_err_z = 0.780558786318;
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
    msg.setTimeStamp(0.108239592847);
    msg.setSource(5067U);
    msg.setSourceEntity(201U);
    msg.setDestination(22678U);
    msg.setDestinationEntity(154U);
    msg.s_id.assign("GYHFLKUNOFNIYQHKABMAYWTZHMVXSPPHQCIADVDDYLDWCGTRPJUDBSM");
    msg.dist = 0.712858033772;
    msg.err = 0.0595821537782;
    msg.ctrl_imp = 0.439722443606;
    msg.rel_dir_x = 0.131226802219;
    msg.rel_dir_y = 0.372100071706;
    msg.rel_dir_z = 0.913009763942;
    msg.err_x = 0.778362856955;
    msg.err_y = 0.883011168656;
    msg.err_z = 0.319108722709;
    msg.rf_err_x = 0.88183866316;
    msg.rf_err_y = 0.55502588967;
    msg.rf_err_z = 0.546362982996;
    msg.rf_err_vx = 0.516306812457;
    msg.rf_err_vy = 0.93756621679;
    msg.rf_err_vz = 0.319170738249;
    msg.ss_x = 0.0288455752572;
    msg.ss_y = 0.249995627239;
    msg.ss_z = 0.400665115957;
    msg.virt_err_x = 0.926975256518;
    msg.virt_err_y = 0.117018894511;
    msg.virt_err_z = 0.396937564849;

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
    msg.setTimeStamp(0.811460150622);
    msg.setSource(32720U);
    msg.setSourceEntity(75U);
    msg.setDestination(62053U);
    msg.setDestinationEntity(8U);
    msg.s_id.assign("FDZLLRLNTGSMGOGFCBBKTSMFXAZOUXJUYDPIKA");
    msg.dist = 0.102155911725;
    msg.err = 0.5660558486;
    msg.ctrl_imp = 0.515423424582;
    msg.rel_dir_x = 0.0196349413264;
    msg.rel_dir_y = 0.999687475153;
    msg.rel_dir_z = 0.639738876985;
    msg.err_x = 0.244003562001;
    msg.err_y = 0.137946726741;
    msg.err_z = 0.543497678077;
    msg.rf_err_x = 0.137850420558;
    msg.rf_err_y = 0.120029279159;
    msg.rf_err_z = 0.314613362329;
    msg.rf_err_vx = 0.52030069349;
    msg.rf_err_vy = 0.679163592884;
    msg.rf_err_vz = 0.409330815896;
    msg.ss_x = 0.440626890205;
    msg.ss_y = 0.660354991838;
    msg.ss_z = 0.601806467304;
    msg.virt_err_x = 0.416870358995;
    msg.virt_err_y = 0.246061095582;
    msg.virt_err_z = 0.281908089243;

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
    msg.setTimeStamp(0.256889288377);
    msg.setSource(49691U);
    msg.setSourceEntity(246U);
    msg.setDestination(15855U);
    msg.setDestinationEntity(193U);
    msg.s_id.assign("OJYBZLNFETEVZHYMHYJUFHKFEYNWPINBSRUQKKWZTPCMJUDFLAVHVLOTLDXNOHJYISQZLMJXMTWWQNUKLRPTMSPHBRFRUCD");
    msg.dist = 0.374178044176;
    msg.err = 0.996199639547;
    msg.ctrl_imp = 0.0418160793611;
    msg.rel_dir_x = 0.541382073575;
    msg.rel_dir_y = 0.191078840747;
    msg.rel_dir_z = 0.85325215416;
    msg.err_x = 0.96450257429;
    msg.err_y = 0.670653406381;
    msg.err_z = 0.508277352137;
    msg.rf_err_x = 0.2040319834;
    msg.rf_err_y = 0.946316826127;
    msg.rf_err_z = 0.337183716109;
    msg.rf_err_vx = 0.745965811645;
    msg.rf_err_vy = 0.171578417024;
    msg.rf_err_vz = 0.55100765293;
    msg.ss_x = 0.461213247906;
    msg.ss_y = 0.917449433904;
    msg.ss_z = 0.468078109427;
    msg.virt_err_x = 0.482409950752;
    msg.virt_err_y = 0.0981265069087;
    msg.virt_err_z = 0.987297447869;

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
    msg.setTimeStamp(0.237703059419);
    msg.setSource(61961U);
    msg.setSourceEntity(122U);
    msg.setDestination(34277U);
    msg.setDestinationEntity(153U);
    msg.timeout = 36126U;
    msg.rpm = 0.5932187097;
    msg.direction = 148U;
    msg.custom.assign("ETABGZANHWAOEEWBGYYDUXJVSCXRDZMUTCYMFIYMGWKFYCEQQUNZPFKIRHWGHXUBNBHIZKJSVUBRSVSULFCVQDNPKTETBJQYAMQIJPHUSWMEOIOFQJJPFLRHNVCSMOBHLAWSWCTKMRRCUZMTORRDXUOYCHXIXQPIKTQMJITESLPAOHVWZIRKPQNZYLTLXVDNXJZGNAGGGCEFKGFHODBEBGZMOYDCKSLPFAVIPDJLAQLRDEN");

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
    msg.setTimeStamp(0.904113190658);
    msg.setSource(47443U);
    msg.setSourceEntity(234U);
    msg.setDestination(58218U);
    msg.setDestinationEntity(177U);
    msg.timeout = 63520U;
    msg.rpm = 0.47557265186;
    msg.direction = 156U;
    msg.custom.assign("GFHHOTISEPHBBCQJOPZJGZKCEREMLLPSWGWMRFTYGVZPDWXIUBRWUFLFTQGUTASNSDBXXOUYYXTVOKNNHTWWZLHRMDZMKUUDVXXOHBQZGRRFDPZILVKIOXAWLWBCVIATHSZ");

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
    msg.setTimeStamp(0.238921381809);
    msg.setSource(32435U);
    msg.setSourceEntity(191U);
    msg.setDestination(672U);
    msg.setDestinationEntity(234U);
    msg.timeout = 35442U;
    msg.rpm = 0.495270165332;
    msg.direction = 60U;
    msg.custom.assign("MMISWLQDNWYAXNIAJZKFMVVMDCOOPNXTJITJDLUSRARRVPBRMDNJXOWBUNLYDVXLYCWNLVSEHYGIGXAZIEPSFTHBSRHUCCIZLEAQJIKOYVKKVXPDYGPLFBAMWZUMTYNCBZSQXSYBQWXLLIDABGIUPHZXNDYGPWFRONEEUKSEWOGQZJMCOHDXFJFZTZFUVBCRFOKFYUCBQFOPTSHGMBETWKOJDVQUEECHTUQNJLRJZERKCG");

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
    msg.setTimeStamp(0.228806459968);
    msg.setSource(5156U);
    msg.setSourceEntity(216U);
    msg.setDestination(44566U);
    msg.setDestinationEntity(20U);
    msg.formation_name.assign("ZYONFQZIEBUGGHUDLWUMDKBDWFJYSTABIFTIYCSLYQUKXITDTGCYLORZGUBWNXDJPCQKNEOYHWYAFRKSXNPVNPBXUSAFKZZJWDQQLRXBKHCCUKKUXOSDURXXFVCRAGHCTGMLJBTLCQYSHEOPOHVPZ");
    msg.type = 62U;
    msg.op = 10U;
    msg.group_name.assign("KZEKMSWUTXSSINOMBGECZUBLZTOYNHYTVPGDQKRCQEPYFLMOREOHX");
    msg.plan_id.assign("VQAYSUVKUKQKSHBAXIUWQXEIOFBWSOOUPQTMEJADVKEGLGTXHIZHVRQFPXYQWCOJYIJFFDZWGBFJTLTMEEPLRVYBWGDOMMCTOCNWKAHGAVEZDNRFJHUBIYFUZDQGQZSSWCHBRAJXFTUKHXDLCGCIKNSDLRYK");
    msg.description.assign("GVIZGNCEEACKQVOWWANBMCLYTTIUNVHOQZVYIXQSHSYMBTPUMCCFEWYGDXDNCLSJYKDVKPJKGBGOSWBXAITETISZLHYZGTURAFNWYPPSXSQDUUEFYWRGMVVAPJGNEAGPCPWRJRJMYXOLLURPMFFMLODHIFDMQQEBBHZKLABROOHKDSWLZPRRXQ");
    msg.reference_frame = 132U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 21153U;
    tmp_msg_0.off_x = 0.424419689521;
    tmp_msg_0.off_y = 0.630126289308;
    tmp_msg_0.off_z = 0.84204429012;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.024423849962;
    msg.leader_speed_min = 0.472577514927;
    msg.leader_speed_max = 0.811633457587;
    msg.leader_alt_min = 0.0977148190339;
    msg.leader_alt_max = 0.140240049964;
    msg.pos_sim_err_lim = 0.14206778522;
    msg.pos_sim_err_wrn = 0.499594286368;
    msg.pos_sim_err_timeout = 43656U;
    msg.converg_max = 0.0829348444763;
    msg.converg_timeout = 10528U;
    msg.comms_timeout = 26273U;
    msg.turb_lim = 0.831603592474;
    msg.custom.assign("JBQIKZURXZDRDRWOPLWDGHQKDRQPMAPJKUHHONOKEXHNSGGWESGLEMTLBQZMJMVVVNXUGGMOFJBEHUCIPJZHAQCGPSBNNFACMARDWMELCQOIPWYLVJYDYFXYDNOEBPCWNTFJLERASURFT");

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
    msg.setTimeStamp(0.48416847774);
    msg.setSource(20241U);
    msg.setSourceEntity(4U);
    msg.setDestination(49729U);
    msg.setDestinationEntity(236U);
    msg.formation_name.assign("ODXJHMLEUTEYNGPTWEPBMUH");
    msg.type = 247U;
    msg.op = 228U;
    msg.group_name.assign("JMKTFMRLBTVGSUNBOLBUOFJHJSZNLZSMHAYZPQHOJFNCOUNEWZYGCNVRCOAGUIBGQFXXCATLXWVZGPHFDVULFNIBXGWBRQZWJAWSRIDTYGLXEDQAHMYHVNPFTXRCFSBTDHBAEWCIXIKTVZDQTTPCUAHXHIUSDISMQNPXUFYWOHQNPPLEQQLMKXJEPWNYYGWZADKJIYKKRKCPPMWKSIEM");
    msg.plan_id.assign("YBPGRFBCWJTTVNEPCFHUQFULKSYQSKBQEFOYRUMJEMEEAXZDITJLOOAGSOXSDRNXLPDNNMVRSYKOZYEBIWZAVXUXCJAPLBZUDEWNRVJHVIUFIDKVVHKBMRZBHHKDZGCLATIYMCINJRDPBPCMLWVYHGZNZATSCNUPYXFP");
    msg.description.assign("LHJRBZOWNNVNDKJWLJWLHLIVUNRESVEQRIGPLKVYGYHCZFELGNHNMOPMEOFQUJXPTQWONZWCD");
    msg.reference_frame = 189U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 28734U;
    tmp_msg_0.off_x = 0.0831127038276;
    tmp_msg_0.off_y = 0.759694661302;
    tmp_msg_0.off_z = 0.642760565372;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.513813980819;
    msg.leader_speed_min = 0.929538696295;
    msg.leader_speed_max = 0.500134461464;
    msg.leader_alt_min = 0.716818384177;
    msg.leader_alt_max = 0.0729752747022;
    msg.pos_sim_err_lim = 0.90681825896;
    msg.pos_sim_err_wrn = 0.850341947979;
    msg.pos_sim_err_timeout = 14331U;
    msg.converg_max = 0.148701932274;
    msg.converg_timeout = 58523U;
    msg.comms_timeout = 46219U;
    msg.turb_lim = 0.291831728852;
    msg.custom.assign("ONKVMXQPEAUMXCTCTLLACCAFZTLLIBZJMAWCUUIUJKAVGXRPGCOMYNFRHORMMIWRNBYYSDVXIXQ");

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
    msg.setTimeStamp(0.12981152147);
    msg.setSource(49447U);
    msg.setSourceEntity(73U);
    msg.setDestination(10258U);
    msg.setDestinationEntity(55U);
    msg.formation_name.assign("ADSYGIHIGKQMGMBVJOCHVNPKVCYCNKPCYDRBLLBZUJDWQFSKENQQZBYLYKZFLIIDEQKVLJZAIXMESYZEZTYHENLPJBOKILJWDBPATSONHSTWDUUURHXAAHWKUCRMAMQATPOHBHMUQNSMRFQHFVODWGFJXVNTVRBWRWIEIPITTXWEBLTUVZJSOXJFUAFOFGAEXGDOQEPRLMWXYFZPGXNAMCJSOWPDCTSY");
    msg.type = 201U;
    msg.op = 217U;
    msg.group_name.assign("HNGSCXJLGPIUUUHBQKDOEVHWGXQWJILDTCRTUZDIWKVLHFNJEQSADHVBQKCZUTRCBMMELMIMBTJDWQVKPJTFAHLSXDANAFYUABXBIFCSMYFLMDK");
    msg.plan_id.assign("FGJKEKUDTWIZWZFYWAFKPGEAMOMJOBHAELLDGAVKPTYHLYWAQSQFLANRWDGYCBPNJIQLCEJIGX");
    msg.description.assign("KANNVWZBULJYZQPUQSTBLURREDHGHWJDDUPWSGQHDAYIJMNVEWSXHRTYPTCOIXZDGPVBJLKGIHWNAOFVETJHTRKPAPBKXMXLYERKSEBMIVYHBDYASMRVKEOSNFFIZQNZMNICEUQSGAKAF");
    msg.reference_frame = 113U;
    msg.leader_bank_lim = 0.924315709845;
    msg.leader_speed_min = 0.150707506711;
    msg.leader_speed_max = 0.431052733313;
    msg.leader_alt_min = 0.0400265770142;
    msg.leader_alt_max = 0.31447592041;
    msg.pos_sim_err_lim = 0.264506655572;
    msg.pos_sim_err_wrn = 0.151990093922;
    msg.pos_sim_err_timeout = 42615U;
    msg.converg_max = 0.734092577009;
    msg.converg_timeout = 17468U;
    msg.comms_timeout = 16517U;
    msg.turb_lim = 0.578544069478;
    msg.custom.assign("TIZZHLNDBITYMRTRCAYVGFETAIKXPWNMKOHUQTDKFHFPRRRONCLOBCZYJEGPYGXJYFVYUHKSIOVRXJXSPIQPEPGPJBQHHBNWMOTMAQQSKAFNZKDQFKSWEUDNVUTUAXAONYMZRZUOODEYEXYGILCHPCIJZ");

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
    msg.setTimeStamp(0.618352766538);
    msg.setSource(34477U);
    msg.setSourceEntity(207U);
    msg.setDestination(58789U);
    msg.setDestinationEntity(67U);
    msg.timeout = 10710U;
    msg.lat = 0.442095498737;
    msg.lon = 0.531674760728;
    msg.z = 0.527690241536;
    msg.z_units = 114U;
    msg.speed = 0.981179812174;
    msg.speed_units = 220U;
    msg.custom.assign("DFAHELQZHOTUGYKCNQVLKXNWQEZYHOKPDGDPBZWOVBFLWWGGZSMVFRWJAJXNYCSIQNKHZMMUYTJXURPHEDU");

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
    msg.setTimeStamp(0.163346974976);
    msg.setSource(13522U);
    msg.setSourceEntity(222U);
    msg.setDestination(33455U);
    msg.setDestinationEntity(12U);
    msg.timeout = 47658U;
    msg.lat = 0.202759040469;
    msg.lon = 0.459591314695;
    msg.z = 0.366464135932;
    msg.z_units = 226U;
    msg.speed = 0.191128317782;
    msg.speed_units = 160U;
    msg.custom.assign("UGPQSGZBKMKCBFCJOWTVARUPCULDLVTRZSZNYDVTYNPQWAFJKOEGMKOOAYRKLUQKASJOJQNUQBCLXREFEEVAAFCMLGQFWPRGENSXXDIOMPNDGGKZUPSKCNVGWRDZAMETJTDFYEIIBVLRIHXVMYWQCHNFHRDLHSSLJJWCWXTYGPZWNXUOWNVEDVBPXYTCJUBYNMRZLGZJXWHBII");

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
    msg.setTimeStamp(0.734713050751);
    msg.setSource(4574U);
    msg.setSourceEntity(159U);
    msg.setDestination(38737U);
    msg.setDestinationEntity(49U);
    msg.timeout = 21412U;
    msg.lat = 0.386005291332;
    msg.lon = 0.321656082219;
    msg.z = 0.828051613249;
    msg.z_units = 163U;
    msg.speed = 0.467554471925;
    msg.speed_units = 122U;
    msg.custom.assign("JZIAVUKBSHDHOCCFTXSPPCAFLHMIZGMSEWFMJKUNOIQCOTBLZDEVENHVQRVBDRYWPGOHBBFSMMQFKJIKYUUJAYYXXDGYAD");

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
    msg.setTimeStamp(0.126657694118);
    msg.setSource(61372U);
    msg.setSourceEntity(102U);
    msg.setDestination(51358U);
    msg.setDestinationEntity(244U);
    msg.timeout = 31851U;
    msg.lat = 0.181935106114;
    msg.lon = 0.117609902487;
    msg.z = 0.327036677931;
    msg.z_units = 32U;
    msg.speed = 0.431786264309;
    msg.speed_units = 130U;
    msg.custom.assign("LEDGINBHAIRXSUOJXYYLYZMSAZEOPLWMKCEWHKMGRFSICTXFTUJPCKEPFGSGDYHRWXPOGLVTNTVXXHJYGNAMFXQZTQQZQKSKFYBDFSAVBXFRHJCPBJQXFQCJVDNYVHYCSXDDGJUAYPDAWARGTKDYQKZLUVEHMFPIESQULJUWJMBODIANMHERBEKNNKEBLBJ");

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
    msg.setTimeStamp(0.919608603019);
    msg.setSource(4464U);
    msg.setSourceEntity(156U);
    msg.setDestination(11776U);
    msg.setDestinationEntity(171U);
    msg.timeout = 45877U;
    msg.lat = 0.947653752865;
    msg.lon = 0.268663960361;
    msg.z = 0.151174250737;
    msg.z_units = 1U;
    msg.speed = 0.580351317634;
    msg.speed_units = 139U;
    msg.custom.assign("SUWXYEHVGZQSTFPBUGWLRZASYUPCORHYWBZDGWZDZJDYLBFLJUWMHHRMJTJLMKIIKARWIEPUKEFHGBNNMHVIVBLDVKOXOASUENNCMGRCTBHTTGXAPCUFCSXQPOMJKNBALQABJZYNOWETSIELPXDHXCSMVJTRKHXKXVBFBPRGHJZVPPUQAOISXKRVMIFQDMTEZILAPDANVYCQXWILOYVFOSGNCODROZQTAUEFRFIQUTDYFKQJSNY");

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
    msg.setTimeStamp(0.179086074702);
    msg.setSource(11461U);
    msg.setSourceEntity(2U);
    msg.setDestination(6756U);
    msg.setDestinationEntity(229U);
    msg.timeout = 20546U;
    msg.lat = 0.449804598279;
    msg.lon = 0.632924015736;
    msg.z = 0.363747811724;
    msg.z_units = 120U;
    msg.speed = 0.537407378492;
    msg.speed_units = 157U;
    msg.custom.assign("ZUTXQSMBPBLCBIAHARYOJOBEEFTATDMJVXAZLHJVQVNBGWRWONASZWXXIRGPIUKLADFHGUYHRDLKBEWQVQGKLZFIDGXRNVRPUBGNJMTPDOSFMWIEAKCPSWNLTSYPHJLQBVPOSYYUUKCQCYU");

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
    msg.setTimeStamp(0.647236440925);
    msg.setSource(36658U);
    msg.setSourceEntity(123U);
    msg.setDestination(36520U);
    msg.setDestinationEntity(103U);
    msg.arrival_time = 0.882374387863;
    msg.lat = 0.213990788831;
    msg.lon = 0.884322437244;
    msg.z = 0.37967173136;
    msg.z_units = 146U;
    msg.travel_z = 0.976922676911;
    msg.travel_z_units = 210U;
    msg.delayed = 96U;

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
    msg.setTimeStamp(0.471494612985);
    msg.setSource(16239U);
    msg.setSourceEntity(3U);
    msg.setDestination(16081U);
    msg.setDestinationEntity(10U);
    msg.arrival_time = 0.484906140605;
    msg.lat = 0.0834277439352;
    msg.lon = 0.139032586318;
    msg.z = 0.293292887045;
    msg.z_units = 77U;
    msg.travel_z = 0.804933684369;
    msg.travel_z_units = 185U;
    msg.delayed = 183U;

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
    msg.setTimeStamp(0.493160389406);
    msg.setSource(25842U);
    msg.setSourceEntity(241U);
    msg.setDestination(14243U);
    msg.setDestinationEntity(14U);
    msg.arrival_time = 0.167269351727;
    msg.lat = 0.565739548772;
    msg.lon = 0.489020005151;
    msg.z = 0.683055867119;
    msg.z_units = 189U;
    msg.travel_z = 0.224113560737;
    msg.travel_z_units = 90U;
    msg.delayed = 242U;

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
    msg.setTimeStamp(0.381551994736);
    msg.setSource(2179U);
    msg.setSourceEntity(168U);
    msg.setDestination(27355U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.233057234456;
    msg.lon = 0.336867446581;
    msg.z = 0.980896410932;
    msg.z_units = 9U;
    msg.speed = 0.26981672152;
    msg.speed_units = 38U;
    msg.bearing = 0.509593873956;
    msg.cross_angle = 0.959634065751;
    msg.width = 0.948975032626;
    msg.length = 0.86854117453;
    msg.coff = 0U;
    msg.angaperture = 0.209101666197;
    msg.range = 12388U;
    msg.overlap = 110U;
    msg.flags = 185U;
    msg.custom.assign("FWTMYCRYNVATSQKMSOBLHFABQIHDHIPZMZZKGSKOPHEXQMRYNUWUXKILBYJAWWDISPVMKIEGXAJGEVIITFLRSHOLELOEXBCDHRDEAGPDUZUWNQTSXQOJSPCGAQYRNFRZWIGABQOTCYVWDYNSJZCBSZFBNFLTYMILUPGUXXHVJYODRBAFWRVUUTZWJCCJLVJCEPBRXMANXVUPQHTEKVWOHGERZMDSIFLNXKCMJB");

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
    msg.setTimeStamp(0.301827287689);
    msg.setSource(30829U);
    msg.setSourceEntity(141U);
    msg.setDestination(54747U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.252150480092;
    msg.lon = 0.408570953888;
    msg.z = 0.663763543058;
    msg.z_units = 145U;
    msg.speed = 0.406790460776;
    msg.speed_units = 146U;
    msg.bearing = 0.591960681128;
    msg.cross_angle = 0.117375128602;
    msg.width = 0.595581774827;
    msg.length = 0.454272322881;
    msg.coff = 28U;
    msg.angaperture = 0.0741084897823;
    msg.range = 14126U;
    msg.overlap = 157U;
    msg.flags = 180U;
    msg.custom.assign("QZOMWELVZLANUDHQGNNBIPKJHREGZGTBHFHDNISDMLCDBFIDJXSXYHLEOWDJKBMJOUJTSYUFPSHQQCCRGGCHTXXRI");

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
    msg.setTimeStamp(0.772751652048);
    msg.setSource(64718U);
    msg.setSourceEntity(214U);
    msg.setDestination(1943U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.954841476515;
    msg.lon = 0.205782802168;
    msg.z = 0.367556373125;
    msg.z_units = 151U;
    msg.speed = 0.18212244183;
    msg.speed_units = 251U;
    msg.bearing = 0.193371312137;
    msg.cross_angle = 0.82688273686;
    msg.width = 0.233085874529;
    msg.length = 0.490684429747;
    msg.coff = 177U;
    msg.angaperture = 0.521763261989;
    msg.range = 10395U;
    msg.overlap = 114U;
    msg.flags = 177U;
    msg.custom.assign("MTJWVXONPIO");

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
    msg.setTimeStamp(0.514362123396);
    msg.setSource(34908U);
    msg.setSourceEntity(70U);
    msg.setDestination(58055U);
    msg.setDestinationEntity(178U);
    msg.timeout = 29560U;
    msg.lat = 0.476548524891;
    msg.lon = 0.932316252734;
    msg.z = 0.64551883739;
    msg.z_units = 252U;
    msg.speed = 0.677951705823;
    msg.speed_units = 24U;
    msg.syringe0 = 159U;
    msg.syringe1 = 93U;
    msg.syringe2 = 129U;
    msg.custom.assign("ICXQNNWFCILTATWNGYBUCAQHDSNYGDGKFHUSTGPOLSFBDRZXZAQAIMRQZYRDDWAXOUARXGQWMKPHBEQGITFJOQXVEXWJYAZNURQPICIVVOEDSTDKBFEJMOPUSSDLBDZHRJKSWFLOPKOFUPVSDZXNETNGVHSYLMGXEIHYVJTMOHWHA");

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
    msg.setTimeStamp(0.992670015113);
    msg.setSource(31316U);
    msg.setSourceEntity(142U);
    msg.setDestination(694U);
    msg.setDestinationEntity(97U);
    msg.timeout = 19047U;
    msg.lat = 0.539531722742;
    msg.lon = 0.981386598652;
    msg.z = 0.510248703766;
    msg.z_units = 34U;
    msg.speed = 0.0988661768624;
    msg.speed_units = 203U;
    msg.syringe0 = 129U;
    msg.syringe1 = 82U;
    msg.syringe2 = 10U;
    msg.custom.assign("IGCMFBSFIUVTQAZDNVSFNGSCGYLZUBERFSQEYJTLUGQSWZDKOZYSYOKMZUGVBKCMJHEWHIPPWRXAQJPKHDKCSOTXHTULJINIBXRFAPOJORKXAEGVDHUQXUARTNPKIWGVZHDTNCGMVLWQQCHMFZOFOLECWXTZZEPBTABDIJGYBTDQAACIHTPOSJEDVCSHAXHMVWDXNJKEFEBNXLUYOLILKRADCVJQIF");

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
    msg.setTimeStamp(0.240244739169);
    msg.setSource(5664U);
    msg.setSourceEntity(211U);
    msg.setDestination(8134U);
    msg.setDestinationEntity(248U);
    msg.timeout = 64069U;
    msg.lat = 0.0315892423437;
    msg.lon = 0.896165461546;
    msg.z = 0.920165200501;
    msg.z_units = 43U;
    msg.speed = 0.906606665321;
    msg.speed_units = 181U;
    msg.syringe0 = 228U;
    msg.syringe1 = 25U;
    msg.syringe2 = 85U;
    msg.custom.assign("JXSNCMSXRHTVOSRINZSGSLSWAYZMYFAGKEFNILLPBDJOWKAKLYYCCAOFQOZTWMIJEIFWUPBEZMENFIOWCMHDAMGJIKZUAQOUMNBPTDQOVFPVZNDBSRMNHKIQUARQHRCBLATBTGLEAWMRCMXLUUPENWLVHFYWLJUVETTZIOCVBDWGJCHNSHSRXKPJXDZDDPIDBGKYZLKUGHXQFPVJQENZFGXEIQBTGU");

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
    msg.setTimeStamp(0.910808123468);
    msg.setSource(33776U);
    msg.setSourceEntity(234U);
    msg.setDestination(474U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.245109976144);
    msg.setSource(15799U);
    msg.setSourceEntity(14U);
    msg.setDestination(24810U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.0189917128086);
    msg.setSource(20317U);
    msg.setSourceEntity(88U);
    msg.setDestination(61884U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.494190439563);
    msg.setSource(40850U);
    msg.setSourceEntity(154U);
    msg.setDestination(24062U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.588760166057;
    msg.lon = 0.237855275776;
    msg.z = 0.243686234382;
    msg.z_units = 126U;
    msg.speed = 0.0395538567224;
    msg.speed_units = 221U;
    msg.takeoff_pitch = 0.687554887046;
    msg.custom.assign("QCXIIIOKVKWSAZXUENPMPJFHRQNDAEBWRDWURYXWIOQPNJKLKWNYUVJCMKJGSGBVOJVBPCVCBGBIHHXRQAUJHUGNZRFWPFDFXSUBCUTMTLDOTLFLSBVFDCXRHAHKITTGNMKRLNGEZCXEPEOEQUJNEVMNQDUMOOVLLVNFJYYKILMZHDBIKEGEAGSSJSPXATIUGMQDOTTRCHFWZTBADDYAOLSYZZYCZX");

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
    msg.setTimeStamp(0.0644324298731);
    msg.setSource(1302U);
    msg.setSourceEntity(13U);
    msg.setDestination(1192U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.93608928685;
    msg.lon = 0.440489123799;
    msg.z = 0.408629960962;
    msg.z_units = 116U;
    msg.speed = 0.130655230424;
    msg.speed_units = 78U;
    msg.takeoff_pitch = 0.386134602254;
    msg.custom.assign("UOTGFQFXRAYLLRZIDIQRDOSBQWYGNKEAXLVDOVHVIPJYGTGVCLJXHULHSMFCUMCFRKKJTKZKBVZLZTUIH");

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
    msg.setTimeStamp(0.578129151885);
    msg.setSource(62719U);
    msg.setSourceEntity(137U);
    msg.setDestination(22434U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.129773493497;
    msg.lon = 0.959557361573;
    msg.z = 0.0199024839662;
    msg.z_units = 26U;
    msg.speed = 0.126822151664;
    msg.speed_units = 45U;
    msg.takeoff_pitch = 0.49546166244;
    msg.custom.assign("FXBGZLNAYQWZDMPDVEOOQXSTMAUDPKBLGFILQWCXHDGWULSQIARBUTXNHYRLWFKTZEPKUFKIFRJJHMPVKDTABZMCSQCLCYHANIJAIISEUNVNISAUPKWJNYQCETPCTYHEWRUNRWNLGWYVHJJOGZFOBSBZYPZCQMPHBFDQXGDVZNPMKHEXETTEMXMSV");

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
    msg.setTimeStamp(0.677660221721);
    msg.setSource(5041U);
    msg.setSourceEntity(25U);
    msg.setDestination(27163U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.401312953192;
    msg.lon = 0.2387105009;
    msg.z = 0.0179354241415;
    msg.z_units = 210U;
    msg.speed = 0.0152261159419;
    msg.speed_units = 31U;
    msg.abort_z = 0.0374261894651;
    msg.bearing = 0.178655869178;
    msg.glide_slope = 24U;
    msg.glide_slope_alt = 0.0162864699622;
    msg.custom.assign("PHJSRXVFKLLVTOAFRPFPTIZCVELCLKWNGIJWVGZVOBCECMEMULTYIQCIRZPADENHIMEZGBZNKHSHBJNQPWCXSOQOWDDOVCEKDXHADSHHRUUNFQPYUTBAUZRUEQIJILVTIBXAWDFKYTSWVSCNMXNUNYSZMHOCTPWYJRBJAPDCWJQQDZGBJGRQGXGYSOLSAJGZXKKOXGLVTYFFASMEAYDFZPWIMXWBVQIFKPEUKFJ");

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
    msg.setTimeStamp(0.0765989808208);
    msg.setSource(31347U);
    msg.setSourceEntity(21U);
    msg.setDestination(43408U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.17961594687;
    msg.lon = 0.837240368621;
    msg.z = 0.233334008303;
    msg.z_units = 92U;
    msg.speed = 0.491746130033;
    msg.speed_units = 136U;
    msg.abort_z = 0.593488624807;
    msg.bearing = 0.391759243345;
    msg.glide_slope = 228U;
    msg.glide_slope_alt = 0.480759252684;
    msg.custom.assign("YPXGRBKSDXPLLEOJTTIUFMPYDQSHBZQNAKVWRJUYRK");

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
    msg.setTimeStamp(0.558605901249);
    msg.setSource(11728U);
    msg.setSourceEntity(131U);
    msg.setDestination(41031U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.605425348638;
    msg.lon = 0.609928572179;
    msg.z = 0.80500115515;
    msg.z_units = 222U;
    msg.speed = 0.325731157641;
    msg.speed_units = 15U;
    msg.abort_z = 0.259437307644;
    msg.bearing = 0.798477891574;
    msg.glide_slope = 212U;
    msg.glide_slope_alt = 0.801853237687;
    msg.custom.assign("NPPFQXJHTYEQKLAOPYEMIZWSNDJNFCCQLCAMRVKUQUZCJMSABXRWEVCXEDIYFFIFOURKWOSIQYSNTBBFPXRUMDQDTBAMSSRDUGZRFWQKQKLEXITVWTEGFBACJHKMRLUXJAHNBHLATHJLHDTERPZVVIWYFKDOGGKBGUKCLZAPZNSVHUYZXHONPWMGRYGPBXLQHVBUWKSYCVSVQTAIOTNDOYAZEBYVTZMRJLNGGJIUXXEOFLDNISJIOCJPDP");

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
    msg.setTimeStamp(0.397652332953);
    msg.setSource(26558U);
    msg.setSourceEntity(202U);
    msg.setDestination(61406U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.533618248973;
    msg.lon = 0.0400574957916;
    msg.speed = 0.900812500353;
    msg.speed_units = 25U;
    msg.limits = 183U;
    msg.max_depth = 0.154083053314;
    msg.min_alt = 0.490153397556;
    msg.time_limit = 0.60126760676;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.1577285934;
    tmp_msg_0.lon = 0.808272969083;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("INYCUFAFCNQSDAVQGQISTNSTCZWZEUGNOYHWABAMKLFZNBFPZRVEBZYMBXAGTMGOPMSKRCXBCYAISGLIQUQKTZJCIDVEERONYWYF");
    msg.custom.assign("TWODTAZNURXRHEVBQCTDGUPKYAJRMSJMASJAWDYXPREQOIWUFCYJSUYFVZHZMSBYFOTKKCWMIBVJZTPXLBFHTHKQGG");

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
    msg.setTimeStamp(0.886043673247);
    msg.setSource(616U);
    msg.setSourceEntity(157U);
    msg.setDestination(19742U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.704105478773;
    msg.lon = 0.362249345505;
    msg.speed = 0.994461157943;
    msg.speed_units = 48U;
    msg.limits = 87U;
    msg.max_depth = 0.619218752546;
    msg.min_alt = 0.118877780423;
    msg.time_limit = 0.764823248801;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.288081163574;
    tmp_msg_0.lon = 0.585409677514;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("GXASZOHCXDRYAPCSBWSQVESKCOCCWFXAIYUMBYG");
    msg.custom.assign("XSWSQCVKUHNAOYMTPYZCXTAJASORSXVZISISUPTBBZGHRNIFECINXGZJABJOINRMJHBVDJDQKOWQENFYKRLRCWUHNAALZBZVKCHYMBZEWEG");

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
    msg.setTimeStamp(0.262949550515);
    msg.setSource(59650U);
    msg.setSourceEntity(36U);
    msg.setDestination(32748U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.145960799617;
    msg.lon = 0.0509148241927;
    msg.speed = 0.634105346956;
    msg.speed_units = 14U;
    msg.limits = 204U;
    msg.max_depth = 0.226616548896;
    msg.min_alt = 0.281142403862;
    msg.time_limit = 0.786441469623;
    msg.controller.assign("OZJVDKZDEWNHPWJJQVFPBMGLYSDLRQLSEICOIANZGNIIESBGRTHFJPANCVBWONPCSTSCJYXKVHUXZCRSTAMWJOWVQWQKAOLFBINMZFIVYYBQIJAAUDJKVHGVEKOCWKVFLMQUJCNMVEUWRTDZUSUIUBXSNPSQDCGAFHPFZCXYPLQIXAMMNLEDFYFFWOKGYUCJ");
    msg.custom.assign("PISWYXHIJMVSMQILNDLZSZKQNLKVHCMGYEXNFWNYJUUZVOUPWLWYTHFQXWMYEFBVJGZVKMCUSSJCZJTUDTSBGMOGQIXCHMCAIUTXXMRGOMZCBBPEKKTRTJEDVWAOKAFRSRLAGNZDQPQCXZCGWUITXKANOOKAHDJNWUVYLVIAHNQIBBS");

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
    msg.setTimeStamp(0.844125330393);
    msg.setSource(41215U);
    msg.setSourceEntity(182U);
    msg.setDestination(35631U);
    msg.setDestinationEntity(210U);
    msg.target.assign("JCFOBLEUFSOAVRUWDOCQJE");
    msg.max_speed = 0.366704644392;
    msg.speed_units = 249U;
    msg.lat = 0.0143559130317;
    msg.lon = 0.170660914363;
    msg.z = 0.805661828028;
    msg.z_units = 6U;
    msg.custom.assign("UHFCWRNAWKJBBXQLYSDGJSVFNGSWUGHQPABYDQDVDIMUXVCXORWFXTIXHZNXFDMZTJQOQQSRKDARDBGTMQKNMDOIEUNIAYKIYWHRMZXQLRLZPANFSBTJPWHHEANRVYIGAPOEBLSOEJFVLEIBINLSDMOCVZPJHZUKFWPOMJOFYUNUBTJGKMKIZGECWCAPVMCTLRVUCPKHYGUGUCOLETAKFDXJMCIRECRQJVEY");

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
    msg.setTimeStamp(0.534472999458);
    msg.setSource(22235U);
    msg.setSourceEntity(170U);
    msg.setDestination(32865U);
    msg.setDestinationEntity(233U);
    msg.target.assign("ZOJPGAMXQYNOARWGLMBDABJJSKXFUTBXZECIDHRCYGDXXSOKUGVZINHQDCUEADHIHVVJOLOBEWYSKUVHUHRZFLPETDSCVFKFAYRTSFQYUQERZOHTWLNGEOWXCIAMMWPABWDLKCLJKMBMIPFYN");
    msg.max_speed = 0.48399087;
    msg.speed_units = 5U;
    msg.lat = 0.80538204235;
    msg.lon = 0.323038074011;
    msg.z = 0.670814929802;
    msg.z_units = 215U;
    msg.custom.assign("OHEDRURXCWDJEOLSIOPFACMQZVTXVRLPTORTSBYFXLHRDMLCFGHTGVICBWOHYBGYIJETYLFVJYIFFCQTHEKPZHPKYRPDSZNKIGGWMNJUXSNXOXBZUATBXXNRUUHHOUQTQGZMSQYEVUIUWIEMBVVGZJEDILOQRGVKNAKBLPXGAWMGDNDASZDURNWHVDQMMYPBYAJYWEKQUFSKASWJAHATSAM");

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
    msg.setTimeStamp(0.391020563092);
    msg.setSource(24484U);
    msg.setSourceEntity(6U);
    msg.setDestination(29198U);
    msg.setDestinationEntity(227U);
    msg.target.assign("GGOSZMDWIYIRAPCLJRGZLKVKHHTPRUNXERJDAVXMCYPNRLRBDZSOYVSENSAJBUBDDQETZGKZQBCFDTJLKNDAVFHBVWLTMFEEBNYZGCOCWSCECJJCYUIBOMUJYVPKDFKKWFMSXXVIQAFOHNTRXMXZW");
    msg.max_speed = 0.662577026321;
    msg.speed_units = 220U;
    msg.lat = 0.246758576171;
    msg.lon = 0.0566409352717;
    msg.z = 0.331156488887;
    msg.z_units = 2U;
    msg.custom.assign("SPYYLCNPHHRMTAZUGQZOSXUHIRXWHNIHWGNSKVHOFFOTBTGQHINZJYJAKAEWEGBDKKIQDNACCIKGNVVMRTXEDYOJYDVIRSTUAMTFRVYBFBYPLQWKECMJXAVAUUZSZNMIZQXYXXWVSOZDAFMBFIJTICTINBCTRPGWLFDQJRMCBTJHNKPMCUWDWWXPSEVBZBODJQUFLOLYQXERPBDHLCKMLULJDCKSYUFEQLR");

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
    msg.setTimeStamp(0.651973525199);
    msg.setSource(25224U);
    msg.setSourceEntity(232U);
    msg.setDestination(46669U);
    msg.setDestinationEntity(9U);
    msg.timeout = 37889U;
    msg.lat = 0.057877564916;
    msg.lon = 0.763099998203;
    msg.speed = 0.425882744632;
    msg.speed_units = 90U;
    msg.custom.assign("TUJPVBZVLVIZHNDTHBBIAEQBBFHYQCVKUPDOVLZYYNXUTPGQWYFSREAQ");

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
    msg.setTimeStamp(0.719614549695);
    msg.setSource(65525U);
    msg.setSourceEntity(8U);
    msg.setDestination(32447U);
    msg.setDestinationEntity(193U);
    msg.timeout = 31053U;
    msg.lat = 0.0789502850128;
    msg.lon = 0.0997977543348;
    msg.speed = 0.502869891674;
    msg.speed_units = 77U;
    msg.custom.assign("HDRPFBFSETNVHKZVPTLZOHDCFHGRUFWNIYVKQBZMMFHEHZAMWMOJAAEQMXVOCFXRZIZISRTLZDWTSAKFLJYCMKJUEINDWQLKPTMDXGQLRXUWQKOUYKCRSNY");

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
    msg.setTimeStamp(0.145172230036);
    msg.setSource(42439U);
    msg.setSourceEntity(38U);
    msg.setDestination(62891U);
    msg.setDestinationEntity(19U);
    msg.timeout = 25572U;
    msg.lat = 0.0327743775761;
    msg.lon = 0.988831136646;
    msg.speed = 0.632923187223;
    msg.speed_units = 191U;
    msg.custom.assign("GLIEOSCEDEOAURMEXVTIRAMNBVMWTYLFCAZBLFZMNOZSLNCJLDEYPHDXLKBPKLQKBCUFIGF");

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
    msg.setTimeStamp(0.145621183503);
    msg.setSource(42796U);
    msg.setSourceEntity(15U);
    msg.setDestination(10235U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.902987671083;
    msg.lon = 0.911623013015;
    msg.z = 0.511120438109;
    msg.z_units = 121U;
    msg.radius = 0.228371618861;
    msg.duration = 63903U;
    msg.speed = 0.0827543366437;
    msg.speed_units = 34U;
    msg.popup_period = 43996U;
    msg.popup_duration = 58415U;
    msg.flags = 165U;
    msg.custom.assign("MLOCZTRGGZIULSRHAGPISQSGKNUUSKFBOLKEUBJMHYAZFNJBGJGOZYVGPKBNWJTCAJGVMKWQUDOHCOLPLLDBTM");

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
    msg.setTimeStamp(0.659146695092);
    msg.setSource(58272U);
    msg.setSourceEntity(168U);
    msg.setDestination(25517U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.372123039511;
    msg.lon = 0.571773215771;
    msg.z = 0.855066855919;
    msg.z_units = 45U;
    msg.radius = 0.135181662206;
    msg.duration = 25991U;
    msg.speed = 0.771074265028;
    msg.speed_units = 171U;
    msg.popup_period = 61282U;
    msg.popup_duration = 60267U;
    msg.flags = 11U;
    msg.custom.assign("BHZUZKSZYNEXCLJCGIKJEVRMGVUISTINALAHLBEMEGSZYCXCBNWRVKOTSAWXIPGCUGFCMKZRNNOZYWTWUSTJFMNBOOKYVWJETRIOCQJNYTAQDULAAFZDYNQHXAJVBGVQEVXNJRREDEPPFX");

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
    msg.setTimeStamp(0.773213545094);
    msg.setSource(16340U);
    msg.setSourceEntity(76U);
    msg.setDestination(41103U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.501089881255;
    msg.lon = 0.0304847812173;
    msg.z = 0.508600181955;
    msg.z_units = 50U;
    msg.radius = 0.760650767604;
    msg.duration = 52466U;
    msg.speed = 0.35484765343;
    msg.speed_units = 183U;
    msg.popup_period = 23829U;
    msg.popup_duration = 44712U;
    msg.flags = 76U;
    msg.custom.assign("UBAKDMTHVXZUKFESVFZERDISGFOFOTTNOCGPEPZXWHIHPTISMLUFRQKDJLGIGKMGWNDWVDSEUXJTOSPSQMSQMTHEKICCWYWLNAHQCRPUJAFWKXDAKNHOBWLZSBORGLFENVZMJQMBBHGQXYOZPCENMPZCNHBYVVUUGYXEQ");

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
    msg.setTimeStamp(0.74434830056);
    msg.setSource(24869U);
    msg.setSourceEntity(5U);
    msg.setDestination(2344U);
    msg.setDestinationEntity(188U);
    msg.timeout = 56928U;
    msg.lat = 0.020081636863;
    msg.lon = 0.0371301337264;
    msg.z = 0.869292121723;
    msg.z_units = 21U;
    msg.speed = 0.961219652854;
    msg.speed_units = 168U;
    msg.bearing = 0.60527815949;
    msg.width = 0.473890249661;
    msg.direction = 27U;
    msg.custom.assign("JEMROHUQEUHZCICSDJMSXNFWOBXBSPDHPHOZMGVSRENBDWKRQGTVQAFILZADDITKXRYSESWRNXAAHBUMDKZBFZLXJQOUQAPTNZLJFDHPIGGQOKBYCHQPLIEGAOCRRWSBVOGNBPJP");

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
    msg.setTimeStamp(0.253428454964);
    msg.setSource(19484U);
    msg.setSourceEntity(244U);
    msg.setDestination(34467U);
    msg.setDestinationEntity(221U);
    msg.timeout = 47278U;
    msg.lat = 0.910659742635;
    msg.lon = 0.538801252692;
    msg.z = 0.902902201546;
    msg.z_units = 191U;
    msg.speed = 0.6615188938;
    msg.speed_units = 34U;
    msg.bearing = 0.698073281742;
    msg.width = 0.339044905355;
    msg.direction = 183U;
    msg.custom.assign("JFXISWQRJDRHRZLDMYOBCGNGDNFKOGIUKNLAUEZFXNMIFNAJKABXWDUCGMZCVZHYKJNWQSGETVAATOGQZD");

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
    msg.setTimeStamp(0.812405898871);
    msg.setSource(1229U);
    msg.setSourceEntity(125U);
    msg.setDestination(22548U);
    msg.setDestinationEntity(158U);
    msg.timeout = 19939U;
    msg.lat = 0.755952538345;
    msg.lon = 0.114853570065;
    msg.z = 0.114099312042;
    msg.z_units = 19U;
    msg.speed = 0.845464639262;
    msg.speed_units = 119U;
    msg.bearing = 0.77590605658;
    msg.width = 0.924982820919;
    msg.direction = 159U;
    msg.custom.assign("RWOMWXPFTXVAEZGHLQAPDFJYLHCTZOBJFWSUAXBHSRWEJCRJFOGIBMUVFTPZKJKBJOEZCUQNAYSQZJDBPUIXBZDDELNVQDRBLLIMGZXHZTWQARYMISUKBULSHTODFKFTMHSPCIZERMAOYGGGVARNKCQEQSUORGDYSYNMLBFO");

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
    msg.setTimeStamp(0.222147164166);
    msg.setSource(25421U);
    msg.setSourceEntity(240U);
    msg.setDestination(40628U);
    msg.setDestinationEntity(8U);
    msg.op_mode = 23U;
    msg.error_count = 234U;
    msg.error_ents.assign("QOAKZAORVFMPILRUWSAXZWBEMCNFQVHGDVMSNCNAYJYYVKLOHIOUKXSRVLZHDRRJOQIDRBEYBGDKTJGJLPTTIXJBNFKNCCDDNUWBMFKYBEVQYPATTLDPICUELPUJSTWSGTEMTCERKVKZGMUWMZWOPVWHRYOABODMPBXGWQFHEYSAIFASHQFESVNJLTUZCLGILUUIBQNCJXZWGLQHHZIQPVWAIKOGCXNEFYPJXMTKR");
    msg.maneuver_type = 61580U;
    msg.maneuver_stime = 0.119947038499;
    msg.maneuver_eta = 11032U;
    msg.control_loops = 3631289600U;
    msg.flags = 108U;
    msg.last_error.assign("TASCQVXSCZFFDFTOKESMXOYBIXUQWWQTDZBMONCIJYGGTJPZCOUZJVJ");
    msg.last_error_time = 0.276355561257;

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
    msg.setTimeStamp(0.90712191486);
    msg.setSource(44363U);
    msg.setSourceEntity(79U);
    msg.setDestination(2542U);
    msg.setDestinationEntity(186U);
    msg.op_mode = 19U;
    msg.error_count = 10U;
    msg.error_ents.assign("XBVGRRCFHGXNMJYPOCOILLNHPZVXTFFKLFZWQFBTQYWSWHNESEYNGFBHTIYKHAXKQTSZKIUODTOXJMMOHUKDLAUAUNPDMAJQGCJOQGAVMNJOJIDZZZDCDBKFUTXEHTVWZDIGFUSSZUTKSZUTGXWBYLVCDNJNAVOHJURQQPSWRLJZMMLQPHKHEPFDCGOPCYICNBPBMXCGEAEVVKNRJACSFYPA");
    msg.maneuver_type = 35402U;
    msg.maneuver_stime = 0.809376561518;
    msg.maneuver_eta = 20267U;
    msg.control_loops = 4167547948U;
    msg.flags = 151U;
    msg.last_error.assign("RCZAOTBOFROCQUMUEKXEDLGVNYPAKDBJKGULGRVYAZJTCTTJPYDEHEXZZPQAFZENXPMUWCBGVISJZWDUMZCGWXDQNOW");
    msg.last_error_time = 0.490056485834;

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
    msg.setTimeStamp(0.292474794218);
    msg.setSource(41065U);
    msg.setSourceEntity(45U);
    msg.setDestination(56898U);
    msg.setDestinationEntity(65U);
    msg.op_mode = 143U;
    msg.error_count = 170U;
    msg.error_ents.assign("ANGAJGOJHZUVMOSRVZBBJYQAJLLXQJTBSHEYIJFDUVTCNRTZYFGOCMLHDWXCAMWFIBXVRQFGZCWHGAHXPDFQXECAOSDRKKZWYWPMUGLHCQIGWGQLWWELYKJPXUQBEFEZEBUPDMJCQTARLPBRBRDCNKILIWVYYSJDXKPEPSNVRDFTMVCSKOQKHKKMTELXVZFUAOHNAPZIDLCROFSYNIOVSIJYFNOYUTUNXGNTRSEOTPZH");
    msg.maneuver_type = 39091U;
    msg.maneuver_stime = 0.461114259842;
    msg.maneuver_eta = 1832U;
    msg.control_loops = 3846181621U;
    msg.flags = 194U;
    msg.last_error.assign("DNAGBZYQYKNKJLTGKVAZKMEWFGRKYXFCPDOUMQRBJGVDPUQOTLMANGMTBTIHRIGCYUSHDLPQZCQJHANFCGWNVOSXUYROBPZSMWIMVXTLVWXNWKKHEDJW");
    msg.last_error_time = 0.855801061346;

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
    msg.setTimeStamp(0.078729493893);
    msg.setSource(55938U);
    msg.setSourceEntity(241U);
    msg.setDestination(39581U);
    msg.setDestinationEntity(210U);
    msg.type = 2U;
    msg.request_id = 45099U;
    msg.command = 93U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 15666U;
    tmp_msg_0.lat = 0.900734387763;
    tmp_msg_0.lon = 0.454266606519;
    tmp_msg_0.z = 0.0412689684114;
    tmp_msg_0.z_units = 174U;
    tmp_msg_0.speed = 0.450880507075;
    tmp_msg_0.speed_units = 239U;
    tmp_msg_0.custom.assign("KAIMHYKHGCVRSMBNODWIUOFNLSUFQNUOCXJIGVYU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 50052U;
    msg.info.assign("KHUWQSVLHIROMSYUBISKHKKLRBAYTDBSPTBGIDDWYHTNIIESUVTFBNKMCROPCQLMQHNCBHNPDDSBTEJRGLCQEUUX");

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
    msg.setTimeStamp(0.650013423129);
    msg.setSource(45897U);
    msg.setSourceEntity(249U);
    msg.setDestination(60010U);
    msg.setDestinationEntity(248U);
    msg.type = 165U;
    msg.request_id = 3264U;
    msg.command = 110U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 62958U;
    tmp_msg_0.lat = 0.4485355806;
    tmp_msg_0.lon = 0.137420150059;
    tmp_msg_0.z = 0.426037324193;
    tmp_msg_0.z_units = 13U;
    tmp_msg_0.pitch = 0.365834987423;
    tmp_msg_0.amplitude = 0.436408966649;
    tmp_msg_0.duration = 57594U;
    tmp_msg_0.speed = 0.181023154991;
    tmp_msg_0.speed_units = 35U;
    tmp_msg_0.radius = 0.764664300205;
    tmp_msg_0.direction = 75U;
    tmp_msg_0.custom.assign("PDQUKFKHPKGPRLWDOVFFYOPFDQMCWXQPJWXMIWYQMNIOGVPSKRJKUUBRDAXIKEMBHRTJWBCFVXTNALWQXGEZSQGHYCAITECXASEVSIXINJOMLPLMYVLDQBF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 1721U;
    msg.info.assign("AWDHASKHFZVIETVYFJAYXJTZXIGAQUVILAQDXRFWL");

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
    msg.setTimeStamp(0.0166290487373);
    msg.setSource(38161U);
    msg.setSourceEntity(208U);
    msg.setDestination(9391U);
    msg.setDestinationEntity(49U);
    msg.type = 137U;
    msg.request_id = 14285U;
    msg.command = 70U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.568368867485;
    tmp_tmp_msg_0_0.z_units = 102U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 9649U;
    tmp_msg_0.custom.assign("IGECRDAISYTSFSCRCXUUBPWAJHDYBJVMLUSYXASXNPONFAHTGAIDWTJEUXZDPQNFWZLESKRPITWXDNZMBJJMCZQCBUPGZZWUJK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 41722U;
    msg.info.assign("WICRFKBUAUVULGDRVXYSTOFPEZFCDYGQCHQGYKRZUXJXJMRTTCRAWYVHFUUO");

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
    msg.setTimeStamp(0.656710962462);
    msg.setSource(24372U);
    msg.setSourceEntity(176U);
    msg.setDestination(24073U);
    msg.setDestinationEntity(112U);
    msg.command = 2U;
    msg.entities.assign("ZXDLPLWFTGXIYQIFBRZCXFTAZYLJNROGEHCEDXZXQEGDNDLHPXITOURMJLMLHHINWVBKTKMTFGIWRNFOTDUAMHWQAJRXHSCBRKSWSTWZKANJCVPGPVAAGYSIBUK");

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
    msg.setTimeStamp(0.747134832728);
    msg.setSource(20963U);
    msg.setSourceEntity(16U);
    msg.setDestination(46838U);
    msg.setDestinationEntity(135U);
    msg.command = 113U;
    msg.entities.assign("XCNCWCQQMKGMUOBDARRKQEFRFEFAQTVROOLJVPSPDTAYIDZER");

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
    msg.setTimeStamp(0.0743931019757);
    msg.setSource(56682U);
    msg.setSourceEntity(247U);
    msg.setDestination(31251U);
    msg.setDestinationEntity(112U);
    msg.command = 124U;
    msg.entities.assign("DHEELQBQWKUYWQNAMRYPZMCVUCAFLHLPYNMGKGKJCITZRGXOIBCUXIEGPOCZMRBFMQDYVOUNMZTZWJBCIETEKIHRNHZLUSYPWVYYXVFUWGSUUVARQOQYRMJXAZBXZPIDTFJOQIDSAHGZUNEMCCHITSJVUGIN");

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
    msg.setTimeStamp(0.741864869607);
    msg.setSource(28656U);
    msg.setSourceEntity(235U);
    msg.setDestination(2401U);
    msg.setDestinationEntity(130U);
    msg.mcount = 247U;
    msg.mnames.assign("AWAMTTZYBUPRBMPBHNVTMDTACRHCEKCJEEHWLXPONJCOQFILOJLNYHWOBKXPR");
    msg.ecount = 25U;
    msg.enames.assign("PCTTJTORYDVRNSCLFERQXLIZBZIXXLYAOHNODUQBTDIOPONRDRGEYWKFOXRHTVSKQKJWSWEANFQVKDWLMZUCWIUMWWIJOHJVBXMTQEMYGSYJACFEZPKRHGNFDHYOQQHBYVSEZPXGVJXKANVWSPFSCLUJLHYNCBZKWWAYGKPTCDFPFAIYPOLI");
    msg.ccount = 179U;
    msg.cnames.assign("ARAKZAYKDOFHPKONJYIARULJTCDMLYKQXMTTKYDVWLFVLZQIQCCDCMFLCFEAHFABTVMSNWYWNLZ");
    msg.last_error.assign("ZYNHZDVUUMMXTNNBUYOLYMKNURIRQDRGBTIZJHKMAEQYIOUNJCKIXCKGIOSJSGJTCHXPBTSOHHUYCEPABTTKKJRPHFQWSNMXVDMEJFZGSPRBQFFSAPCY");
    msg.last_error_time = 0.0815924979208;

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
    msg.setTimeStamp(0.528958251507);
    msg.setSource(43935U);
    msg.setSourceEntity(20U);
    msg.setDestination(8207U);
    msg.setDestinationEntity(109U);
    msg.mcount = 74U;
    msg.mnames.assign("CUDCFXTENXDTBYXRMZTPAVNOLRHOKASEGQKPJQZHBAPWYZDSHDITGXPBSSVLUKWTIFNHAAILVIBTIZMYGK");
    msg.ecount = 6U;
    msg.enames.assign("YLABZFKSGQGMQFDMDMPPTGNWEUELZHJNRFDILYJNIPQZMRWJTVRSKWXQHSVZPQYTHEMMVYHOTFIPBTCOIRWFBCEUKRVUFBDKEDPEVRGFMYCUBXONXXCSSVZDRRCFZJMHWAASAXHJIBJTOLCRKMUHIKOAUDYOHOBXIGYKPJWZYTMILGVBLECGDEXSTGABNBPOWNHHSZASACEINEQXNYKWDCVDUJA");
    msg.ccount = 190U;
    msg.cnames.assign("TRZVKWMYBFDGPFPDEESSAMSOUQPHPRXVKHMZGOEPTJROIATJPUVXDFIEPRMWEIJKUKOSXLSAGCUBDZYPYNOICLIKPYWALWZNRNTNHKCBNUILKFDSTKZYLCXTRCXFRZKGOJRUKLFVLUNFWOSHWXGYMBBHVFSYDWUIVETJUICHGSDHWGJLWCTVBCQMZEBEBHTIAZQZTLJDHXAXS");
    msg.last_error.assign("KEAGURKOBQWKFEACYNQUPKQZXRARFMCPWZVTENVGZYWJQVTULSXASIICCXIGCFWCRJMPEEJYIWBRVNANWKMOXBSKVXRSGBAHVVHQRXBTRIZOHGSOKYFDTSJO");
    msg.last_error_time = 0.267867253972;

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
    msg.setTimeStamp(0.462382833966);
    msg.setSource(26332U);
    msg.setSourceEntity(82U);
    msg.setDestination(20421U);
    msg.setDestinationEntity(86U);
    msg.mcount = 194U;
    msg.mnames.assign("UFUXMUWXLOFBRCNPZDCZKCMNIPF");
    msg.ecount = 32U;
    msg.enames.assign("UXWEOCTIHRQSDIMOUCWJHOLZBFGPHEZDLORZAFMDSCEQSVBWECDRPYCLNXAGTKZXKDNPXABXDGIABCFDQZYVQAVVFJOQQGRVJJGFOAJUVLNYHEEDBESKICZZAIINPWLHITYRKPEWHNDZOELWRLBLVNXYDNWOBPJUGFUGFUTKMRP");
    msg.ccount = 99U;
    msg.cnames.assign("SCJLWEABZYMEVOYLDONZAXUQFUFBJRUAOMBIPWPKNJUAUGTKDLMHXCGFEHQMKHTGZVQKWSOYWUWKFISWARKVCGFOQOKBLTENMZEXYQXRJYLEPYVAGBFCQNVIVGMPZTVTYGRBDIRAOLWOFVSZOYNMJRRQJSQSPNXDCWFNOIPDCCHRXSRNGCLPQJYHBBUXSIDTJCXHEMESCUXBBIZKDLTDHVVAE");
    msg.last_error.assign("QWMNKBIZJHMJDFPFCGFGFXBRKMNSMXGSSCKUVCZCA");
    msg.last_error_time = 0.595108949946;

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
    msg.setTimeStamp(0.994136655372);
    msg.setSource(42038U);
    msg.setSourceEntity(68U);
    msg.setDestination(51094U);
    msg.setDestinationEntity(194U);
    msg.mask = 219U;
    msg.max_depth = 0.243309767656;
    msg.min_altitude = 0.242681379737;
    msg.max_altitude = 0.735091251158;
    msg.min_speed = 0.75846558398;
    msg.max_speed = 0.769338050628;
    msg.max_vrate = 0.126023383226;
    msg.lat = 0.243616190616;
    msg.lon = 0.816007137554;
    msg.orientation = 0.33850207034;
    msg.width = 0.912223507292;
    msg.length = 0.579397396312;

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
    msg.setTimeStamp(0.0357955403177);
    msg.setSource(61591U);
    msg.setSourceEntity(102U);
    msg.setDestination(20184U);
    msg.setDestinationEntity(5U);
    msg.mask = 125U;
    msg.max_depth = 0.463170036067;
    msg.min_altitude = 0.56481546475;
    msg.max_altitude = 0.196086318911;
    msg.min_speed = 0.257362899968;
    msg.max_speed = 0.0018062895883;
    msg.max_vrate = 0.150979544054;
    msg.lat = 0.3812569879;
    msg.lon = 0.281969698402;
    msg.orientation = 0.172539565214;
    msg.width = 0.226038727709;
    msg.length = 0.827485599339;

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
    msg.setTimeStamp(0.681011836294);
    msg.setSource(11654U);
    msg.setSourceEntity(181U);
    msg.setDestination(56026U);
    msg.setDestinationEntity(198U);
    msg.mask = 32U;
    msg.max_depth = 0.0614842495024;
    msg.min_altitude = 0.29512173656;
    msg.max_altitude = 0.295796089642;
    msg.min_speed = 0.719569618709;
    msg.max_speed = 0.747288119997;
    msg.max_vrate = 0.55225221445;
    msg.lat = 0.850251443005;
    msg.lon = 0.493428055423;
    msg.orientation = 0.415995142105;
    msg.width = 0.647634377833;
    msg.length = 0.170493569745;

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
    msg.setTimeStamp(0.0699418209995);
    msg.setSource(21168U);
    msg.setSourceEntity(58U);
    msg.setDestination(46714U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.44419335978);
    msg.setSource(64121U);
    msg.setSourceEntity(46U);
    msg.setDestination(47175U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.168956625641);
    msg.setSource(61872U);
    msg.setSourceEntity(219U);
    msg.setDestination(31044U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.228068427008);
    msg.setSource(18156U);
    msg.setSourceEntity(94U);
    msg.setDestination(42180U);
    msg.setDestinationEntity(198U);
    msg.duration = 10887U;

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
    msg.setTimeStamp(0.891278670332);
    msg.setSource(20201U);
    msg.setSourceEntity(217U);
    msg.setDestination(14232U);
    msg.setDestinationEntity(37U);
    msg.duration = 43692U;

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
    msg.setTimeStamp(0.525398670394);
    msg.setSource(2555U);
    msg.setSourceEntity(164U);
    msg.setDestination(28832U);
    msg.setDestinationEntity(246U);
    msg.duration = 46543U;

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
    msg.setTimeStamp(0.772289882575);
    msg.setSource(45949U);
    msg.setSourceEntity(190U);
    msg.setDestination(30911U);
    msg.setDestinationEntity(37U);
    msg.enable = 122U;
    msg.mask = 464963799U;
    msg.scope_ref = 2886638820U;

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
    msg.setTimeStamp(0.648796078825);
    msg.setSource(57243U);
    msg.setSourceEntity(9U);
    msg.setDestination(13250U);
    msg.setDestinationEntity(219U);
    msg.enable = 117U;
    msg.mask = 2573795384U;
    msg.scope_ref = 2467784649U;

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
    msg.setTimeStamp(0.994758311633);
    msg.setSource(20605U);
    msg.setSourceEntity(162U);
    msg.setDestination(5948U);
    msg.setDestinationEntity(30U);
    msg.enable = 87U;
    msg.mask = 1582545617U;
    msg.scope_ref = 4063277924U;

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
    msg.setTimeStamp(0.929275256543);
    msg.setSource(30635U);
    msg.setSourceEntity(39U);
    msg.setDestination(1367U);
    msg.setDestinationEntity(113U);
    msg.medium = 243U;

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
    msg.setTimeStamp(0.116154962721);
    msg.setSource(13282U);
    msg.setSourceEntity(138U);
    msg.setDestination(58699U);
    msg.setDestinationEntity(202U);
    msg.medium = 188U;

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
    msg.setTimeStamp(0.994043895544);
    msg.setSource(9488U);
    msg.setSourceEntity(231U);
    msg.setDestination(37683U);
    msg.setDestinationEntity(4U);
    msg.medium = 111U;

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
    msg.setTimeStamp(0.968182717047);
    msg.setSource(12825U);
    msg.setSourceEntity(230U);
    msg.setDestination(13563U);
    msg.setDestinationEntity(40U);
    msg.value = 0.950821140645;
    msg.type = 29U;

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
    msg.setTimeStamp(0.306317571642);
    msg.setSource(42954U);
    msg.setSourceEntity(117U);
    msg.setDestination(43142U);
    msg.setDestinationEntity(170U);
    msg.value = 0.723175352007;
    msg.type = 133U;

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
    msg.setTimeStamp(0.750254137319);
    msg.setSource(29489U);
    msg.setSourceEntity(74U);
    msg.setDestination(47516U);
    msg.setDestinationEntity(29U);
    msg.value = 0.910076246836;
    msg.type = 5U;

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
    msg.setTimeStamp(0.271612066744);
    msg.setSource(11405U);
    msg.setSourceEntity(222U);
    msg.setDestination(182U);
    msg.setDestinationEntity(130U);
    msg.possimerr = 0.876963258827;
    msg.converg = 0.717912976179;
    msg.turbulence = 0.921346624827;
    msg.possimmon = 119U;
    msg.commmon = 129U;
    msg.convergmon = 210U;

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
    msg.setTimeStamp(0.125015408921);
    msg.setSource(7697U);
    msg.setSourceEntity(189U);
    msg.setDestination(33507U);
    msg.setDestinationEntity(130U);
    msg.possimerr = 0.871061536865;
    msg.converg = 0.147189081203;
    msg.turbulence = 0.972869421023;
    msg.possimmon = 233U;
    msg.commmon = 74U;
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
    msg.setTimeStamp(0.0241691809955);
    msg.setSource(44968U);
    msg.setSourceEntity(94U);
    msg.setDestination(57103U);
    msg.setDestinationEntity(105U);
    msg.possimerr = 0.457157826846;
    msg.converg = 0.728102671569;
    msg.turbulence = 0.267347312776;
    msg.possimmon = 76U;
    msg.commmon = 87U;
    msg.convergmon = 20U;

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
    msg.setTimeStamp(0.172321713777);
    msg.setSource(19845U);
    msg.setSourceEntity(202U);
    msg.setDestination(30241U);
    msg.setDestinationEntity(153U);
    msg.autonomy = 149U;
    msg.mode.assign("GOSUBLGIYFJEIQISBSVECLUMFHCZPIUJJMYDGODENZKPDYJIKKUAHQPJVTZXMCWRKPKRODRWAMKEJCXZEHUHUDQNAYRXWYLLTFPMQECOZSDPFXEGJWLSTTWVWIFALGHDABVGXC");

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
    msg.setTimeStamp(0.422679620555);
    msg.setSource(3000U);
    msg.setSourceEntity(177U);
    msg.setDestination(47346U);
    msg.setDestinationEntity(95U);
    msg.autonomy = 130U;
    msg.mode.assign("VGYDQEZUSJTHUXFDEYNTWEAMTDGLDLDWKQYFALATIYXLCPFBZPWSDZWLIKLJKMKNOZUEJCZBYGUXCUSGXAAVCXHXJKUMOAJOSLMTKT");

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
    msg.setTimeStamp(0.0368807062725);
    msg.setSource(6276U);
    msg.setSourceEntity(112U);
    msg.setDestination(15102U);
    msg.setDestinationEntity(64U);
    msg.autonomy = 138U;
    msg.mode.assign("TVPACOYPAHGNTRTSLFWCCPMGYBVWFDGPBANUYDNBEBBXJHSRYAJEFXRBWJTOLZCDUMQIIYCQUDMKQJHERKFYR");

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
    msg.setTimeStamp(0.656333537071);
    msg.setSource(57675U);
    msg.setSourceEntity(129U);
    msg.setDestination(47474U);
    msg.setDestinationEntity(145U);
    msg.type = 69U;
    msg.op = 114U;
    msg.possimerr = 0.494175154255;
    msg.converg = 0.830233188218;
    msg.turbulence = 0.482007226416;
    msg.possimmon = 214U;
    msg.commmon = 77U;
    msg.convergmon = 238U;

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
    msg.setTimeStamp(0.0651220315081);
    msg.setSource(22248U);
    msg.setSourceEntity(4U);
    msg.setDestination(40529U);
    msg.setDestinationEntity(119U);
    msg.type = 102U;
    msg.op = 185U;
    msg.possimerr = 0.589338295828;
    msg.converg = 0.467526393734;
    msg.turbulence = 0.771131155983;
    msg.possimmon = 161U;
    msg.commmon = 247U;
    msg.convergmon = 156U;

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
    msg.setTimeStamp(0.336608660266);
    msg.setSource(55015U);
    msg.setSourceEntity(30U);
    msg.setDestination(28246U);
    msg.setDestinationEntity(46U);
    msg.type = 105U;
    msg.op = 218U;
    msg.possimerr = 0.375438762324;
    msg.converg = 0.784860724056;
    msg.turbulence = 0.92324508599;
    msg.possimmon = 108U;
    msg.commmon = 173U;
    msg.convergmon = 17U;

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
    msg.setTimeStamp(0.808642870587);
    msg.setSource(12665U);
    msg.setSourceEntity(201U);
    msg.setDestination(26461U);
    msg.setDestinationEntity(62U);
    msg.op = 156U;
    msg.comm_interface = 132U;
    msg.period = 6573U;
    msg.sys_dst.assign("FRIVWURQWBKEVIDWDZEWHFQARXPOUYTLFXJBMVYZLCENTZQXQ");

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
    msg.setTimeStamp(0.104887735001);
    msg.setSource(11544U);
    msg.setSourceEntity(129U);
    msg.setDestination(19258U);
    msg.setDestinationEntity(197U);
    msg.op = 216U;
    msg.comm_interface = 232U;
    msg.period = 16409U;
    msg.sys_dst.assign("RYSOXTBBQFOEEJRORFFJSOXTZBPPRCSQULTWGAKKYWHHZMHEZEHFPJXSIXJGBNQWAPKJTZNZUGCFYZOQGVZKCJUDQMVKSHEWCUHHKJNLRFMCNPLGCSRDBM");

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
    msg.setTimeStamp(0.603532667957);
    msg.setSource(22099U);
    msg.setSourceEntity(242U);
    msg.setDestination(54336U);
    msg.setDestinationEntity(127U);
    msg.op = 173U;
    msg.comm_interface = 106U;
    msg.period = 5922U;
    msg.sys_dst.assign("JSWFGTZPEMTGGLTQUNGIZOJRUFSKIGCKWJNIRBMSYNBVILKUHJJTYNDZFCPOJMHRVYXGARACVMESODQYDLGAXCEYTDQOEOLPVHWOIUFOJUAGQTWVBUHXVXNNAPYYPXNZLHQFWKUENMCLAYMCRMAKTTBBEETHXXBMCCVFISJFLRDPUHCSOAPIXGSJRNFDSZVDKHKBTBYQHWORVVQKDYLILAUERXFSWZ");

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
    msg.setTimeStamp(0.621499343661);
    msg.setSource(24242U);
    msg.setSourceEntity(115U);
    msg.setDestination(48032U);
    msg.setDestinationEntity(15U);
    msg.stime = 16116623U;
    msg.latitude = 0.23499558816;
    msg.longitude = 0.704397507789;
    msg.altitude = 35478U;
    msg.depth = 15478U;
    msg.heading = 29531U;
    msg.speed = 21145;
    msg.fuel = -75;
    msg.exec_state = -92;
    msg.plan_checksum = 14970U;

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
    msg.setTimeStamp(0.125936297039);
    msg.setSource(65014U);
    msg.setSourceEntity(141U);
    msg.setDestination(30836U);
    msg.setDestinationEntity(160U);
    msg.stime = 73644942U;
    msg.latitude = 0.576618304281;
    msg.longitude = 0.793477353961;
    msg.altitude = 7308U;
    msg.depth = 52477U;
    msg.heading = 38811U;
    msg.speed = 27972;
    msg.fuel = -56;
    msg.exec_state = 74;
    msg.plan_checksum = 40574U;

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
    msg.setTimeStamp(0.929410892967);
    msg.setSource(46913U);
    msg.setSourceEntity(93U);
    msg.setDestination(30760U);
    msg.setDestinationEntity(93U);
    msg.stime = 17622123U;
    msg.latitude = 0.601578761269;
    msg.longitude = 0.70056250023;
    msg.altitude = 16712U;
    msg.depth = 29337U;
    msg.heading = 8968U;
    msg.speed = -26094;
    msg.fuel = -68;
    msg.exec_state = -32;
    msg.plan_checksum = 55582U;

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
    msg.setTimeStamp(0.666010802562);
    msg.setSource(8222U);
    msg.setSourceEntity(26U);
    msg.setDestination(48233U);
    msg.setDestinationEntity(41U);
    msg.req_id = 26507U;
    msg.comm_mean = 196U;
    msg.destination.assign("BZKVCGMDRKJQPUBSBQZWAHOLCDIHKJFYJQMTUCBBLDPAHCQPESJNTVLRYNXYCUIUCRXNBCZOTKDFYAIMMELHPFIZYVJXLOTSFOFDSPMIOSEXZZYVVEQTNPSUZFRRMTZKSBHOMETAQOUVSMBGJILAIQWSXIIGNQWNFULMDDXRNEJYXPHOWVDGEELYKZCNXIQTAWJREDNCHGBAGMWHBDGGPYSEKWFJYAXVHACGUPATKWKHWFORLVQUKOP");
    msg.deadline = 0.239551522158;
    msg.data_mode = 183U;
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.987544058547;
    tmp_msg_0.y = 0.940868317123;
    tmp_msg_0.z = 0.759054736541;
    tmp_msg_0.k = 0.508214360078;
    tmp_msg_0.m = 0.22033932739;
    tmp_msg_0.n = 0.708913953674;
    tmp_msg_0.flags = 239U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("FCAJWUCQTKFZMIPZNFBLYHSPCGHBMWZFAEWKZKYQCGRCJNWJOXRSBOKHGEBEWDCVLXCNNVTRLNVRHALIUKGYYQPYQPKJDUZEQRULIZHAVRAIIWM");
    const char tmp_msg_1[] = {104, -91, 120, 125, -123, 114, -118, -87, -81, -112, -80, 96, 123, -3, 11, -119, 1, 18, 22, -7, -9, 114, -124, 103, -46, 81, 30, -114, 113, 23, 23, -101, -74, 89, 42, 101, -31, -116, -87, 112, -100, -9, -111, 80, -78, 54, -126, -17, -120, -89, 89, 66, -3, 44, -99, 48, -110, -39, -110, 41, 9, -101, 85, -126, 74, 70, -101, 106, 11, 118, -47, -115, -35, 44, -100, -106, -23, -47, -104, 98, -73, 108, 102, -4, 3, 63, -126, 121, 26, 113, -23, 1, -107, 31, 53, -39, 68, -40, 109, -10, -61, 75, -3, 51, 19, -91, 126, 87, 57, -12, 0, -115, 110, -83, 4, -34, -104, 97, -14, -97, 37, 75, -21, -46, -91, 3, -2, 70, 105};
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
    msg.setTimeStamp(0.376741325997);
    msg.setSource(3187U);
    msg.setSourceEntity(62U);
    msg.setDestination(19547U);
    msg.setDestinationEntity(46U);
    msg.req_id = 65213U;
    msg.comm_mean = 140U;
    msg.destination.assign("JXSXLZBAQITUGKVKPCOWIXLVLNMTTDJGOKHKVZAFVCVGDZOUKJSUQVSWSSGEEYIOENGVUQNLQMRLAPBQVTHNAVCTHQWHCDDIGTMRBENWALVIZU");
    msg.deadline = 0.387273135516;
    msg.data_mode = 154U;
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.601065224606;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ODXIKHJYCKTFIUAWEQZOHBXXOAVEMVIYXGDZJCNPRLGJANZSGLCIJJFWBQKRTIIXVNGGZGROCPBRMILAUREGSLWG");
    const char tmp_msg_1[] = {64, -61, -107, 90, -119, -89, -92, -37, 109, -19, 109, 27, 41, 12, -16, -10, 123, 21, 8, -55, -71, 64, -57, 2, -57, 99, -12, 85, -109, -91, -91, 16, 29, 70, 118, -20, -63, 84, 77, 90, 27, 100, 10, -103, -118, -22, 71, -15, 96, 7, 39, 48, 74, 38, -75, 90, -98, -116, 4, 76, -45, 114, 53, 109, -36, 26, -27, -3, 25, -66, 9, 81, -102, 104, 52, -36, -109, 44, -16, 117, -85, -61, -9, 7, 40, -103, 18, -66, -8, 0, -91, 13, -57, 43, 57, 41, -110, -56, 39, -111, -85, 3, 125, -117, -114, 111, -125, 52, -98, 59, 56, -79, 124, 69, -82, -100, 69, 17, -87, 33, 3, -84, 20, 63, 111, 29, -87, -114, -16, -60, 37, 79, 33, 32, -16, -65, 126, -99, -78, -32, 105, -3, 4, -88, -79, 80, -113, -89, 95, -26, 91, -62, 110, -18, -25, -109, 42, 29, 82, -12, 23, 67, 118, -30, -119, 6, 17, -92, -64, -71, 89, 82, -9, -99, -83, 41, 105, -113, 58, 36, 23, -30, -127, 26, 25, 49, 82, 21, -83, -116, 0, -62, 88, 22, -113, -82, -27, 123, -45, -80, -97, 101, 56, 68, -101, 67, -12, -118, -34, 88, 116, 73, -64, -107, -124, -68, 77, -106, 2, 116, -108, 77, 102, -107, 75, -71, -67, -55, -29, 52, -39, 16, 67, 116, 8};
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
    msg.setTimeStamp(0.288652293233);
    msg.setSource(6992U);
    msg.setSourceEntity(115U);
    msg.setDestination(43235U);
    msg.setDestinationEntity(20U);
    msg.req_id = 56676U;
    msg.comm_mean = 135U;
    msg.destination.assign("IQPXEZLPDYQQJZHAQSKHEBBWSIBFXLYECJGUNUIMEZUALFMBMCWLGSOONVQSEUHJSRCVBMJUNUROHCIRXREEODBSQPXXCPIUOTOKTZGVYHYCKFFMVVPXQZXRBWQKRDMDZWJNHFGWXFMYYRFTVKKVLVAYPQJNJAXDMPMHZVGDOCKYWKEGD");
    msg.deadline = 0.55019857768;
    msg.data_mode = 241U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.956895104357;
    tmp_msg_0.lon = 0.566005304718;
    tmp_msg_0.z = 0.742057595911;
    tmp_msg_0.z_units = 130U;
    tmp_msg_0.speed = 0.745371230055;
    tmp_msg_0.speed_units = 234U;
    tmp_msg_0.takeoff_pitch = 0.19491182336;
    tmp_msg_0.custom.assign("CORSLNMLVBBQUUSAFUCVMGYZQEVKIBNCUGPPPZDPYNOVZQTZDQIMRLCUBOFPIWRNHZOLCGSMAKVWKHUEOWKPYTVWMVWGVDEIURVELFQZRBCIRPAXXFYQIJOZAKMUOQQYQJYJPJODEAHTNNHFCDLJRREHDTYSGSXERZRYGITHGCXAXPBCT");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("EKZIFCAWPFTNMQDKVFYCHLXOORDAPXHOKSBXTKKMDALZFGOLMCEBZOVCSKEDQJQUVUCRVVVQN");
    const char tmp_msg_1[] = {114, -73, 90, -111, 51, -51, -55, -102, 87, -122, 12, 2, 23, 20, -51, 108, 100, -74, 68, -56, -69, 38, 103, 78, 12, -38, 80, 60, 10, -10, 123, 100, -33, -21, -107, -118, 118, -32, -100, 76, -87, -49, -96, 50, 12, -26, 12, 54, -57, -87, -69, -71, 19, 5, 64, -32, -86, 66, 44, 108, 70, -36, -61, -56, -1, -94, 52, -23, -44, -73, 107, -50, 113, -30, -4, -71, -31, 3, 94, 88, 56, 35, 94};
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
    msg.setTimeStamp(0.855619974086);
    msg.setSource(32733U);
    msg.setSourceEntity(210U);
    msg.setDestination(50248U);
    msg.setDestinationEntity(7U);
    msg.req_id = 62355U;
    msg.status = 8U;
    msg.info.assign("KPKHXWAAMZDSSXORXFXWCVVVPFQOZYDDDTGVQYTTETIQEKODMAJSIFUALWSHCXRZBWZMSAJOJJMVLOUTLHRMUUFHNLEAVHABNSORKBELSPFGPXNGPRHCDAKFEUHLCKENCLQIOQGUHIXJZSKGDYF");

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
    msg.setTimeStamp(0.765501440888);
    msg.setSource(56732U);
    msg.setSourceEntity(18U);
    msg.setDestination(60899U);
    msg.setDestinationEntity(59U);
    msg.req_id = 40833U;
    msg.status = 132U;
    msg.info.assign("ZQMRJZZKGIIBJWQLHYROXKRZYUTLHZRMHWWQAURCFPIYLGBVFXNJWNKUOITFFOSTOEBMOWJFNDKVGIANZYOLZVLXPTLGDXLNVXFGPREYMHFQHBSUYJCDSPTGMEPYDTQELPTAAEQFHVLKJMRLPDVAIGEUPPDQSCYKZNI");

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
    msg.setTimeStamp(0.670058234119);
    msg.setSource(57341U);
    msg.setSourceEntity(44U);
    msg.setDestination(36486U);
    msg.setDestinationEntity(4U);
    msg.req_id = 35661U;
    msg.status = 145U;
    msg.info.assign("VMAURUMORISWNVIZRXLTONFUFWCOVMQDJNBIQSMJDJFBBQGNKFJLXEZTTGCMMRUQAWHPYTFZPZWVSASBPZHGIEBVAKNLEELSMEKFDLKUUGYJFSPYOKZGRHPHYBMRONGVKXLYHDFZCQETWQIDIVLGOPHYCHANYLCAGBRQDLXVMXTBOCUUQPDWKHNKIKUSASJCWRJBWDYJWSTPJOSFIXPTPAMDGXNXWUTEZNAVELGTHKYVEHIBFCECRQZAQIZ");

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
    msg.setTimeStamp(0.212716546804);
    msg.setSource(33418U);
    msg.setSourceEntity(24U);
    msg.setDestination(56522U);
    msg.setDestinationEntity(164U);
    msg.req_id = 19359U;
    msg.destination.assign("CAZQVVSUMWPVKGQYILMTLKNKQTXKYXEMLJPCFUSTWOZSHWEHQDHBGTBNBHHTTCRTAZCYKUVMRXIBFTZQWDOXWEBOOMRFSAEQNYGDOILVXUIRISOOQPEQZPCYFDPRKQRFHMVGIFBEPGJEZGSANNJS");
    msg.timeout = 0.102532375157;
    msg.sms_text.assign("FKSDJDFEBSVIQYVUNGWR");

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
    msg.setTimeStamp(0.320772365);
    msg.setSource(21491U);
    msg.setSourceEntity(101U);
    msg.setDestination(61618U);
    msg.setDestinationEntity(199U);
    msg.req_id = 54728U;
    msg.destination.assign("YKQPPVCUMLKQEIMDZZBFUYACHSJPQHHMKDKFGIEOZLIGOMJVETIHXTDLJFLQFXXODSBGFHEAEKOWJZRZNPSR");
    msg.timeout = 0.727926574511;
    msg.sms_text.assign("TAGQBANTXVCCWIWSUYYKXHOUNDZVWKRXGJPCZPNPLKMQEXWZGYYINUGEZRMMMPKSHFACJURVGWSAKBQAXSHUTCIODSRTUGVJRHFWSLCMTAFDIUXUENKZBPZKQQDJPFZGNBJCNYATPREOJHJWDZASVYAIHILCLBHCTMXQF");

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
    msg.setTimeStamp(0.495086763513);
    msg.setSource(14136U);
    msg.setSourceEntity(22U);
    msg.setDestination(49209U);
    msg.setDestinationEntity(102U);
    msg.req_id = 42198U;
    msg.destination.assign("ZDRIAVRFLLBPSHLWCPYJDYDSWBTLNXZEBSTFMYFSCWTMWUCJHXIZARGRSBTJTVZJQCS");
    msg.timeout = 0.785158754606;
    msg.sms_text.assign("IGSKZJWLNFUGFAJCBVCHJIQWVLBJOBDJXWQZWMWYFJCSDYATPIJTDOTGNZYCPKGHGOPRHRFZERVCNLGQPIAMEOKVJGAEHYTZXKKXMPHCMVLKQRCLCRRVYYFXQEMOUDTPEZUDROKOUBMFDA");

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
    msg.setTimeStamp(0.876377823023);
    msg.setSource(21416U);
    msg.setSourceEntity(125U);
    msg.setDestination(55558U);
    msg.setDestinationEntity(220U);
    msg.req_id = 34024U;
    msg.status = 191U;
    msg.info.assign("OMTFVQWTPBAFAEDXIOODHKXYLMSSNZHXNCMTHBLPJDWWXOSCOOZZKIGAXXQTULTBONFDLMSKUBJUVJXBMGEDRIJAQLBVIRFBCFUVMJPULLGJKYIDYCJBAHIRVRTSHEXECMVOLZRVYQYLFPAWQFKFAWBIRHGXUPHEEYANFSZQWYYZY");

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
    msg.setTimeStamp(0.152281591137);
    msg.setSource(31898U);
    msg.setSourceEntity(251U);
    msg.setDestination(50254U);
    msg.setDestinationEntity(163U);
    msg.req_id = 31847U;
    msg.status = 141U;
    msg.info.assign("AVFPGTADQHRJKQCFXUTMCSESNPUZDXJNWYEJGNAVBUPBCWDACKCVGFHRYHUAPUWNRFNIBZHTGTZDMOWEZXCVQYPOIYNSBGLHKEAEGDJUEOJIYLHJYVOZSMRAQMTPYBZAXMDTBCGSNSRQLOFVBMLJ");

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
    msg.setTimeStamp(0.883601375308);
    msg.setSource(60936U);
    msg.setSourceEntity(202U);
    msg.setDestination(27288U);
    msg.setDestinationEntity(13U);
    msg.req_id = 16153U;
    msg.status = 112U;
    msg.info.assign("IZJRKAUFVEGLDFMPZZVWCCNJBPIBCVUEIXORPDZLAIYBKSRFXGW");

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
    msg.setTimeStamp(0.127915258917);
    msg.setSource(54202U);
    msg.setSourceEntity(214U);
    msg.setDestination(2876U);
    msg.setDestinationEntity(44U);
    msg.state = 103U;

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
    msg.setTimeStamp(0.709287897409);
    msg.setSource(63742U);
    msg.setSourceEntity(242U);
    msg.setDestination(47830U);
    msg.setDestinationEntity(84U);
    msg.state = 175U;

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
    msg.setTimeStamp(0.260202830757);
    msg.setSource(44360U);
    msg.setSourceEntity(111U);
    msg.setDestination(9458U);
    msg.setDestinationEntity(14U);
    msg.state = 208U;

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
    msg.setTimeStamp(0.0256378793498);
    msg.setSource(13945U);
    msg.setSourceEntity(207U);
    msg.setDestination(3200U);
    msg.setDestinationEntity(198U);
    msg.state = 211U;

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
    msg.setTimeStamp(0.118538412956);
    msg.setSource(4455U);
    msg.setSourceEntity(164U);
    msg.setDestination(34792U);
    msg.setDestinationEntity(132U);
    msg.state = 25U;

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
    msg.setTimeStamp(0.384986090936);
    msg.setSource(7430U);
    msg.setSourceEntity(93U);
    msg.setDestination(38719U);
    msg.setDestinationEntity(228U);
    msg.state = 83U;

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
    msg.setTimeStamp(0.712254053431);
    msg.setSource(37868U);
    msg.setSourceEntity(244U);
    msg.setDestination(39942U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.910405169479);
    msg.setSource(17603U);
    msg.setSourceEntity(254U);
    msg.setDestination(11482U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.885723628599);
    msg.setSource(34900U);
    msg.setSourceEntity(183U);
    msg.setDestination(11490U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.740770983497);
    msg.setSource(55197U);
    msg.setSourceEntity(246U);
    msg.setDestination(40628U);
    msg.setDestinationEntity(244U);
    msg.plan_id.assign("HYGRSVOCNBEXOGYCWXVLHQNCWHYUJRARBMNRMQMYTMQTZTQBAGZKGQWZMNQCJRHXWEAIFIXICMLYYJPQCADVHRSLPGGBIKCZZSLXEOLW");
    msg.description.assign("FJCMSITHDHOIFEPIEKVGPYRZOJVDFBNEYXXTNALDMQJUCLEGQRZJMZHFDZRLWBHMPMUPNTIEDDOBOCBXJWTTFQBAQGPQWJOARZLKKAYMH");
    msg.vnamespace.assign("DFXJMWYHROCAPTBJUBZSKWYTRYYYMGDYBCGAJDMKCIWUOQVSARQUPJTAEGPAMPCRGTXOKNZCIPQEQSPIFNUZQJNARBCDWGNOPFIXHRBFEODZRVXMTTKS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TFZKSRGNMIIWLDUKBTXNWMECNUPSCYYJFBWLFWDDNKGJFGKZSYWYJJSALWVVUVKVUZIABWFCTROKXCTAEARGIYKQHIBMEBAUGUBIRDZ");
    tmp_msg_0.value.assign("DBDKXVWXCMOOJYOLRBRTZGVXMZVBVFIITVCUXVNDCGLIRKHNLZBSISJYAFSCQCTLQFUZWIEOKYKBEDSKHXFYOGJWPAHISAGXNURLZWLGFRIFNAAWPHJHEUAUJPHDTTRZMEREXMSCPNOMLFPJCNZXHWBUODKHDMSSNTQNBVVSEEAWUYMJWOACPGMKLPFJQGQZCZPBMTQUGZKJEIYKAEKWQYUCIV");
    tmp_msg_0.type = 30U;
    tmp_msg_0.access = 36U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IXJFCWRDQSQILVGJZAFQ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("TGNXVWWMAERWKZMTHXPCLURUUAHFSMXHLDAXEHHVUMRV");
    tmp_msg_1.dest_man.assign("HOMKQFIAHJPUZNXSVAVCJKUPSNKCYJEAMGJBRMKE");
    tmp_msg_1.conditions.assign("JKOQNBQWFJKNRZUJCOIDCSKEQLUWXEDJZYSPZYDSAWFPCQBMTQMWRRGXTUPKICECNGFISUGSXUZHVWNFY");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Formation tmp_msg_2;
    tmp_msg_2.formation_name.assign("RCFBTODDQVGOJOZAERZEEYSVBMKUMQKZFESJVJKMIBVHWNOQSTMFQCHPIGAYPZVXUINXMPVYMTNNXTKKTYQZQDQGNZBOLUYLFXPLOFLUSRTEYHLBJYXUMGFNJSMOKUMEZEEDQDKGCMUQRINHSFNWHSKRJILLAKRABUKLZHJRWAIPBDIGQPGHPFCJJWDBADTGSLT");
    tmp_msg_2.type = 96U;
    tmp_msg_2.op = 97U;
    tmp_msg_2.group_name.assign("GLXGBGMBUXNVXERQGSDZAWQTHYIVI");
    tmp_msg_2.plan_id.assign("DGJCWBKUXSXWWMPCEQWJOZSZTONSPQQYLMTCXUOFVUEDACOPVVFBZFWMRYBLQDOCJXW");
    tmp_msg_2.description.assign("DIWICSALLAGUYUBGJKYLSZHOZ");
    tmp_msg_2.reference_frame = 206U;
    tmp_msg_2.leader_bank_lim = 0.205203674737;
    tmp_msg_2.leader_speed_min = 0.819602342021;
    tmp_msg_2.leader_speed_max = 0.31684611412;
    tmp_msg_2.leader_alt_min = 0.663725347392;
    tmp_msg_2.leader_alt_max = 0.778247214953;
    tmp_msg_2.pos_sim_err_lim = 0.4523717867;
    tmp_msg_2.pos_sim_err_wrn = 0.166209305716;
    tmp_msg_2.pos_sim_err_timeout = 62940U;
    tmp_msg_2.converg_max = 0.143399779937;
    tmp_msg_2.converg_timeout = 60864U;
    tmp_msg_2.comms_timeout = 37927U;
    tmp_msg_2.turb_lim = 0.466488866479;
    tmp_msg_2.custom.assign("FXKPPTAHLVZBJPKAXYFKTDGKVUCJOSRSSQZMEHNYZKLLMQIDAAMCDXANUSSWHVWQRJEVYOBCSJKQBESMFPQCIWIBPGIJPUOOQZJMWQVVNFEXRTGDDBRLNPQMIJZB");
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.421712304884);
    msg.setSource(29618U);
    msg.setSourceEntity(162U);
    msg.setDestination(43305U);
    msg.setDestinationEntity(89U);
    msg.plan_id.assign("AZZPCTMKALSYBZXOUCJPULFVCAPHQCIGFOWOWOKVWLHMEGDIEOIKLSHQHPUJIMZHYLONIUBKJPHMBHRQRFHUNDBQKSMEAGTJPOARGJXXYCWPBDILRBDGQCRAX");
    msg.description.assign("MBWUCFMGFEDXCIMELALWUOGCJXFHKLAYNCALNDTLITIJYHOZLUGVEKKWILXLXFWFWYFATABOPRVBXKZIWUFPJQEAXMPBDYOYONBSVZLXJRVHRVKUZWVR");
    msg.vnamespace.assign("WMJXYHXPIXJZUWFPAPTTCGVWGUKFEYEQWZSNXAUYBMRDOWMTCNGOQPVJMTELCHYZLXILPHVVRZHJKQDFDJASZGKSSUTTMJOKVFEOYWWNUSPNBWMLQZCQZMDFCOFRJVMSIFVPTUMUTSOROHOFIZLAYEKNHTDWR");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BGNWLBWCFLNQJEPWWZSGHJHMMKMAPBUVVROMLXGECQLJQDUMAMTPXQNQHAKIKPMMNSEOGFEIVZEQFKYRTUUKRNJSVZODPLGISTRJWYZKVTGXYQUCBFBPKAQAE");
    tmp_msg_0.value.assign("OLQFLBEINSPUTHBZAKZAKVNWVIHKJXAOGEHJFXJEUTOKHBGQMVXGGTPUMIIRGSLFLRGSYHECWJWKEYDHQSALFFSWVTSKJDYYZOQPHLRUMUTWQTAKAQQBAEOVZWNLBXQYZVABZRFFFDNJALNMBWSKTWAT");
    tmp_msg_0.type = 200U;
    tmp_msg_0.access = 80U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IZMEZANJCTYDRMCIRZDOLEFUJKCCYXJCDVEBBKKSHGLHWXCXNTJMBUVEWMAAQQBAXVYTSGFQLKOLTQFIYTVXOUNFRDFRAGJRLJEUMSLXMQJQRWSZACWJBYKJTEGHCANBQWVPKNBTHIOIPHUOZSQWESPKLIMSVQDGUVIGHONXPUHDMPFBGHNMZGZYXPDSOEXIYKPEUAYFOGQHWROJLIBTYNKDKNRFMUIGVPELWTCVFONAZLVSRPXWWZSCDYFZA");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("AOBACZORGUJAQCLFZSULONZEKPMERPIQEPCEDLBTKPUMORADPQUVRYENWTPXQVSTPNMHJZWTAXNWDAVVGCKLQKXLIIYCJNOZHNBHMEBIIWQKYXVHDGWMOBIFKUNMZYRHBPKAOWQBLDPSWUYRRQJMIZSJTYTDABRHXWHYJYPSKRZVKGIIZEQGFBAEGFWSS");
    IMC::CoverArea tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.581734016241;
    tmp_tmp_msg_1_0.lon = 0.716554199262;
    tmp_tmp_msg_1_0.z = 0.881555587027;
    tmp_tmp_msg_1_0.z_units = 221U;
    tmp_tmp_msg_1_0.speed = 0.756675181685;
    tmp_tmp_msg_1_0.speed_units = 112U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.lat = 0.42544491202;
    tmp_tmp_tmp_msg_1_0_0.lon = 0.551791444009;
    tmp_tmp_msg_1_0.polygon.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("YOFKSONEYUADOJLBMQOLRWJHUJBOGVIIHMEXZCZBDYTJQPSKIDQONNBAIVAKBJSNWMZQGUXQACUISUDLSXPTL");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::CompressedHistory tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.base_lat = 0.746574712362;
    tmp_tmp_msg_1_1.base_lon = 0.349640664126;
    tmp_tmp_msg_1_1.base_time = 0.695562635713;
    const char tmp_tmp_tmp_msg_1_1_0[] = {102, 68, 66, -108, -64, 54, 27, -120, 54, 91, -94, -5, -44, -90, -32, 118, 45, -11, -62, -85, 23, -127, -1, -114, -50, -38, 118, 89, -14, -8, 119, 38, -11, 48, -19, -82, 88, -27, 9, 104, -16, 43, -127, 63, -69, 1, -11, -107, 4, -94, -47, -7, 50, 114, 119, 121, -119, -98, -115, -113, 1, -64, 8, 39, -105, 85, -74, -102, 42, -59, -122, -105, -9, 87, 45, -76, 89, -75, 24, 114, -3, -54, 122, -128, 107, 52, 112, 79, -57, -91, 107, 4, -5, 5, 52, 90, -52, 43, 53, 28, -3, -119, 85, -106, -37, -43, 123, 36, -107, -82, -70, 63, 17, -105, -59, 76, -81, 69, 46, -48, 88, 46, 98, 75, -128, -49, -37, -9, 92, -118, -43, 124, -61, 118, 63, -76, -118, -107, 22, 73, 75, 78, -106, -82, 32, 58, -57, 29, -2, -17, -106, 15, 24, -63, -44, 83, 54, -66, 44, 114, -94, -49, -47, -75, -5, 23, 41, 112, 104, 46, -108, 52, -51, 14, -128, -54, -78, -57, 5, 91, -6, 110, 107, -60, -58, -108, 20, -40, -45, 101, 60, 85, 100, -105, 107, -76, -58, 70, -64, -21, -56, 55, 58, 65, -118, -76, -82, 11, 35, -3, -109, 19, -9, 111, 103, 57, -110, -85, -75, 69, 71, -9, -72, 126, -77, -11, 110, 95, -111, -37, 11, -70, 9, -60, 109, -34, 75, -41, -59, -119, -73, 20};
    tmp_tmp_msg_1_1.data.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::FormationControlParams tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.action = 26U;
    tmp_tmp_msg_1_2.lon_gain = 0.679623921358;
    tmp_tmp_msg_1_2.lat_gain = 0.181421387093;
    tmp_tmp_msg_1_2.bond_thick = 0.790733226711;
    tmp_tmp_msg_1_2.lead_gain = 0.233992056152;
    tmp_tmp_msg_1_2.deconfl_gain = 0.122341252747;
    tmp_tmp_msg_1_2.accel_switch_gain = 0.625879574439;
    tmp_tmp_msg_1_2.safe_dist = 0.21501973842;
    tmp_tmp_msg_1_2.deconflict_offset = 0.883069994793;
    tmp_tmp_msg_1_2.accel_safe_margin = 0.314125438923;
    tmp_tmp_msg_1_2.accel_lim_x = 0.14043417229;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::Goto tmp_msg_2;
    tmp_msg_2.timeout = 35708U;
    tmp_msg_2.lat = 0.379717335516;
    tmp_msg_2.lon = 0.00578893130712;
    tmp_msg_2.z = 0.758745474718;
    tmp_msg_2.z_units = 82U;
    tmp_msg_2.speed = 0.517418721437;
    tmp_msg_2.speed_units = 74U;
    tmp_msg_2.roll = 0.355987165172;
    tmp_msg_2.pitch = 0.439145914994;
    tmp_msg_2.yaw = 0.139716635314;
    tmp_msg_2.custom.assign("YKRNPCFOOGTGUABLOQANLSTZIYNAFHLLPUGIXVYLEUCVNJGEACIYLRWBJWKOBMDRWVAAWBJTUVPGWNDKWIKYZKQPPLTJZEFCEGLMMEPNNHVFDIKRGYKUXHYOOBYMJFPFSMZGMBGMQJFQMFJQSBVSEPUJRXATCZLLQAHDMBEWXSIRKXPTRHHSNDZFEOXBRHCVUUJSDKDWZTWAXDSTDXAHIONSCHWKQCZTHIGEIOESVYRBRJUQMZZOYQIXVFNCVQ");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::UsblFix tmp_msg_3;
    tmp_msg_3.target = 44798U;
    tmp_msg_3.lat = 0.324359466988;
    tmp_msg_3.lon = 0.136525099405;
    tmp_msg_3.z_units = 133U;
    tmp_msg_3.z = 0.88888908684;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.990387000723);
    msg.setSource(52315U);
    msg.setSourceEntity(80U);
    msg.setDestination(57278U);
    msg.setDestinationEntity(235U);
    msg.plan_id.assign("AQYPUYSNHFPZNRRXOQNEQOHKLSHHBEBDXJGVETOEWXIDGZGHESTTZNFWQJQUFMNFLPJRWUGBAVLTRCR");
    msg.description.assign("GAMOQLPYDEZVNEMBUBEXASTNHPGVRLHYOSNQEMOXJKTSOMLJQIBPHULIMVZCUHQQDYFAYGLZTFQNXYWXRMMOPASJUELFJRJXGUXMJKVWYUNIRPKCGXTCVGKWHZESMTWHLCFACBWSUPPFVNAAKDOFVYYXOIZFKCFGZQBZICYVMWRKJDTFP");
    msg.vnamespace.assign("TFFNMXXXPNYMFZYQLLSHWMGEVIHOUKRERZVDWOJTUFSXLDSJCHICEGLUOKFBRDELCVLZZAILWNBJOFKUNZCJOBQPDQPHSNVXWOUINNRTEJKEWMYIDPCGABAFBCFUDUOIEUQGKDBDKMVSUDRZGJJTHPQQHZNG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("AMOMJIGVDNJRHCFNWKIJKXNWPPKSKARLMVBQGOSZFDTBXDXLYPNZGUAGPOWHVRXLGMKFDCVAATETYMUBZQEJJZXFFYXPTYWRRTLYOGJQSCUQVCPYPZQMWZHWRKUNCPPSKRREMXFKNOUAEAZSTBASLVKEBPJNEURWEMQQHMDHYAHXGGUAHWLOQEDIYDSVIXJFLBTBCBSZMDFLONDTHXIBSVTSCICUQEUQOVLJELW");
    tmp_msg_0.value.assign("VPIMYFNZLHDJUYGPEOLRETAAVQQBDXFRMGNLKESVLEWCXGYASZSZYJDHPIKGPBCGSKJVFRGLWBYXIXLAPLAJRTUTKHZAHTEMUAWILSTHZWVQYRODKACJQUDZFKRCQZXHJQHRWSIUURSNOWACBROSDFQBFTPYTNOFHMZTPJIRDMENDMBLGNOGCCGENTWXMWBCGSWSQPIOMILJFCDTMVJEMYKJIHNZAFNBEIQPEBBUPUOXNQCHDYUWKVXX");
    tmp_msg_0.type = 82U;
    tmp_msg_0.access = 4U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("XSPOXRGOITZTFUJKOBQBGMNXMABBEMLDICQAWUQLNDUYAQEDZCYZFDONBPKAQYYIMOVBCHLKWTKQPMEJFZHMKFNEZSARCHIEUFWVQKDHRMPCIPZSUUYWPVZHCJIWNXJJRQBDENUYTWXTVWKJNVXOOCKTLRXSGTGAJBZPLHVIONHYEYDGVWSFGXMSKRKLV");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("QVEYVHOBLHJXWCRMEWCIVIALDUKJMHTGYBMSKUXIZL");
    IMC::Takeoff tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.520289942982;
    tmp_tmp_msg_1_0.lon = 0.939740804432;
    tmp_tmp_msg_1_0.z = 0.407944588062;
    tmp_tmp_msg_1_0.z_units = 134U;
    tmp_tmp_msg_1_0.speed = 0.185961553029;
    tmp_tmp_msg_1_0.speed_units = 230U;
    tmp_tmp_msg_1_0.takeoff_pitch = 0.628288839808;
    tmp_tmp_msg_1_0.custom.assign("UKLPIZJDCMOSABFWHGHXMVMYTIVNLYAYLXQGADLWWYUBCNTKUGNZUWHXCFFKAKDTGZAZMQFGCQGWPWSVRVVEGPAHDGQVDRGQPZKUNDTHFXJQOBVTYDQBIJYNCTBJOZYALEVCSXNSVDNOFMHZNMCFJPS");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DesiredControl tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.x = 0.322511153402;
    tmp_tmp_msg_1_1.y = 0.912596079563;
    tmp_tmp_msg_1_1.z = 0.673726650689;
    tmp_tmp_msg_1_1.k = 0.736088296539;
    tmp_tmp_msg_1_1.m = 0.260870443662;
    tmp_tmp_msg_1_1.n = 0.829228063594;
    tmp_tmp_msg_1_1.flags = 169U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.240421761527);
    msg.setSource(44996U);
    msg.setSourceEntity(251U);
    msg.setDestination(30648U);
    msg.setDestinationEntity(84U);
    msg.maneuver_id.assign("ZQZAXINLTXOFGRABBVTLBOUCKZJXDHVNJPYLJFZGKMYHMBTGKWVASCDOHWDDJEPSZIGDMIXXAXWFWIFJTVYSBVUYYPRVAPECHLXYSFR");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 26640U;
    tmp_msg_0.lat = 0.585721781443;
    tmp_msg_0.lon = 0.690216672331;
    tmp_msg_0.z = 0.400746578434;
    tmp_msg_0.z_units = 98U;
    tmp_msg_0.speed = 0.49515081432;
    tmp_msg_0.speed_units = 190U;
    tmp_msg_0.custom.assign("MIOPNGHRGFDWOCKARLQGYBCBSCZIAVKNHLMLBVAYTGPDCZFITXPQGPDHPHJSDECZQXCVTNPCYQSYJAZVBESRIVGUHHREBCOBVEXYCXUXWQUNLVDFJGPDYXFJIEJVUFWZUMEUIMGTPFKQZYQBVEIMNMEDFXYHSIMWWNNSSUQTNUKTSAXYKTOAAMMLZRPZNKDWUTLWKLFDEOWBORPBZFTGLGSRSKHOWOXKQZACRIJRNXVEOHJFKBT");
    msg.data.set(tmp_msg_0);
    IMC::ApmStatus tmp_msg_1;
    tmp_msg_1.severity = 93U;
    tmp_msg_1.text.assign("JYNCWFCBKYPMBLNLTYUGWCMBWBKUWFQUPLNEMAGVZMRFHNZRAYAHBCCXIMJXYGUKJITPDDZXAVNAROCQVMNEDRPPGKZXSXTWQZIIOHNNVYY");
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
    msg.setTimeStamp(0.41410775938);
    msg.setSource(52473U);
    msg.setSourceEntity(119U);
    msg.setDestination(8281U);
    msg.setDestinationEntity(190U);
    msg.maneuver_id.assign("JXKHAJTXUFWUYTZPAOQGRNIES");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 14248U;
    tmp_msg_0.lat = 0.730732059065;
    tmp_msg_0.lon = 0.20065032921;
    tmp_msg_0.z = 0.787158439865;
    tmp_msg_0.z_units = 50U;
    tmp_msg_0.amplitude = 0.233314284899;
    tmp_msg_0.pitch = 0.502569884108;
    tmp_msg_0.speed = 0.683644254589;
    tmp_msg_0.speed_units = 44U;
    tmp_msg_0.custom.assign("ONOCNWXSXKINKPWHYISYPRHPEMVFUHBIBUBPEFWZUYOJDJGHEWRSUATHGXNMIVXLBHAUZFBGXJGUNZKUKDQSSUPMHCSIDRYAIOIZQASOENVUBXELRMMBKPVLGQTHJYGPSZYGVRTLPRQAWIQKTLAZFETDQQOLLGJXTBVOYUNKTJMKIRIJCKVPFT");
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
    msg.setTimeStamp(0.486902476276);
    msg.setSource(22707U);
    msg.setSourceEntity(4U);
    msg.setDestination(53649U);
    msg.setDestinationEntity(91U);
    msg.maneuver_id.assign("EHWGTLMFULUWEFDNNKWKFVUOCTVYHAQYJYLSGCPCMKQZUADDSOVPIRREPSHAQWVZQQBHRQLAYCLOUHWJIPBOAKIVXXVXMOJFGFGZIYZDNKMDBXIFNUZTSLYJYZATCBEALTDMQGXOOXEXIHUXEFTJKBZJUSTVCEJRPWFPLHYFKRZABLSBJIVMGCWSHIVCOORADESMGJTXN");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 33396U;
    tmp_msg_0.name.assign("ZBQOMXUYOVWFYJLNMOUBSYIXGGAZNEKYHJTIMGLLWCTEYKDZVKXLJWZDOXGJMATZTXJBMMSNPQRRYQMAHTNLFJHEFDRNEZFHAHPACUOYNXUXSLDOKZJWEIKKDMHBNTGCLVUGDWRAVDADBPISUUXUBLFKCPODNEWSVEEOAILMTPNTKGJRZVWMFPCRZCHVHAOGXIIOIPQBQW");
    tmp_msg_0.custom.assign("ZQSMDVYAOPMDJAVTAJUIFURZIQNDZMORNFHGDMQYACSWLLRFCCZLZABOENEJPKMXKQFYEDHLFUIKPPDLVPPHIMBYAYAHZEDSXCVHLWUHQXCGZUBVFDALRTNSPPNXSWRNIUOECBIRNUJUCVMRPJGQIWQKGSGTVSXWBXBEOKTSZTV");
    msg.data.set(tmp_msg_0);
    IMC::CreateSession tmp_msg_1;
    tmp_msg_1.timeout = 3770032963U;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.04246811855);
    msg.setSource(35704U);
    msg.setSourceEntity(188U);
    msg.setDestination(15012U);
    msg.setDestinationEntity(162U);
    msg.source_man.assign("MSUKXDHMKCRVE");
    msg.dest_man.assign("PKZSTLYLMLWRRSDRXDBWUBJS");
    msg.conditions.assign("BXMJDSFMZEYUFASJGOTQZGWKPWSLFFWXXJLJXZOEYTEIICLXLDNIDHNCTLMNDSDHFBTDZIUZAOGSATXODMVMNJLPVBBBTOERKGPKRY");

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
    msg.setTimeStamp(0.0376396871787);
    msg.setSource(64612U);
    msg.setSourceEntity(194U);
    msg.setDestination(62999U);
    msg.setDestinationEntity(50U);
    msg.source_man.assign("ZTIADTDRINULTIQORYZCHQIJCPQMXKRJBYRLIHVTXWQTNBSJVEGJIKEEHLCWCKMNMOFHCSUVPGJTNFJRJXWASQSFBVMVNBOXZQIVHPKHFNGEYAKALMEJEWWKDECDYMHQBFRY");
    msg.dest_man.assign("EKMHOGBYZFIKRQXEFYDVKTBLRQPIEXXXVVTFKTVRARAGHRBNCGKUXTEHDTCBLHIYRNKAXNHUEMMGLWHOWKZZQIFFTEKSFSQOFWUSPEJTABBZCVMRVGGLLNMNMMYNZCQSXYCJBGQUSWHIFDRLOTTWPZIMDLDVIOBNMDGUPARSINJPJPXHFZN");
    msg.conditions.assign("HZNBKNRDGEYXTLHRHPTLGYEHXMEORNHBYTSLFWWRVDKGZULKPNDAJBHUQCNOSMBDAUCYGRAVJQNWLOX");
    IMC::GpsFixRtk tmp_msg_0;
    tmp_msg_0.validity = 12071U;
    tmp_msg_0.type = 93U;
    tmp_msg_0.tow = 2157918366U;
    tmp_msg_0.base_lat = 0.809234970178;
    tmp_msg_0.base_lon = 0.85593107375;
    tmp_msg_0.base_height = 0.150600712467;
    tmp_msg_0.n = 0.520314716879;
    tmp_msg_0.e = 0.98957373117;
    tmp_msg_0.d = 0.0216710149696;
    tmp_msg_0.v_n = 0.0607132081624;
    tmp_msg_0.v_e = 0.177665384207;
    tmp_msg_0.v_d = 0.199489880243;
    tmp_msg_0.satellites = 46U;
    tmp_msg_0.iar_hyp = 47803U;
    tmp_msg_0.iar_ratio = 0.973637325142;
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
    msg.setTimeStamp(0.653440620341);
    msg.setSource(26303U);
    msg.setSourceEntity(231U);
    msg.setDestination(25345U);
    msg.setDestinationEntity(14U);
    msg.source_man.assign("VOTEHZZERZBUWMTLMJSIBHXFPAEQYGLNOTZPFQAKGPZQJPKLRWDZINRMEJQFQCXNUUTCULFDCIYACIVFBHTPOZTHMIVSWVWXLOSJBKMWXIGNQLTYWKYXYJHSNEOJINENJQSRAZMGEIAOPIKAYZLRUMGFDLYCJRIRUAUHRUSHVOTDBF");
    msg.dest_man.assign("YJNVZKXRTOQFQBBEZDGUAUEAHESLQZYZFSTCEGTOVRPBUTVBBVMAQJWYDQJNQPHGNFLTFAADGXIMWEVAAUBGTCHERIDKLORSDULIEGMCYCHZISDPLPUBYWWLKBYRTTIOHWTGOTJZYRSXIEFIVQCFLUINMQFKOMNG");
    msg.conditions.assign("CPUCYCOZAWKYPENAPWRPGOMJZUABAIRLASMKUFTCXGPTTVDTBNBOODEBVALLYVPXQUZKFPINJNZWNLOHSKEGQRFYXMJQHYYJFFQJQZTBILDMKMZPKLHODXBSSGWQUWIBRNCQFRLJHKHEHRGWGEMRSKDDGNTIEJSZECUICVWMFRIBERMKGQKESAWWUYFTHDVZGBFFJCNNCPTNXTYUHXLEQGHMO");
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = 55;
    tmp_msg_0.value = -1086590473;
    tmp_msg_0.gain = 106U;
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
    msg.setTimeStamp(0.144194962997);
    msg.setSource(43372U);
    msg.setSourceEntity(63U);
    msg.setDestination(54796U);
    msg.setDestinationEntity(119U);
    msg.command = 96U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OOSZZJDIVTELRTPWPUXIVFSBUORPXQDKLDMPSQYEEDCJSKABJUYOEOTSTBRZDNDVWGOGIEMXZMQGDANXPLAVPZFWWMZHNUFEACCBLBMKKYUBREFHYVPJRFBCZVTLQHAXELMJVDUXGHKQAUWQTQBGCLGAMSLYMMXIONBDYFKYGXJJBQEHTAOYNQSNHI");
    tmp_msg_0.description.assign("ZNSSKFZQPXWDGBLVDAORXYBZHUKMRXULRKXHBXFCWYIITKBGXNNELYVTFAAVOVOFVOIJQLMQDPYVKUUMRBNRIBJDJIOLCTNHMJYCFQMRLCBTQHXTBEEPNFGYGHFTGPDESAQCFVKZGIOZJKSUYMALYLQJXU");
    tmp_msg_0.vnamespace.assign("ZZEQTJNJDSOANCKXYLGULUDXVJSATVFIHKIKRBLEJUHIAPBHPVNQJVOFLUYJUOIUWDHEFISNMXVSVPZENYURFZYPFMWWDMCJKOKWLGFSGGQHSZBROQWDBWPZMEMRBDCCBTLYOYUCNVHBFATPEOHYJKNVSMSDOOHHRLBPWENKJAGAIWIGYMZBHCXPBXKAMXQQTERXQEPY");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RCLHWCOCLPUVZGVDNHFPZECLUYQHCJP");
    tmp_tmp_msg_0_0.value.assign("OLGDWSPVXTFNMCNDEUIXDTR");
    tmp_tmp_msg_0_0.type = 132U;
    tmp_tmp_msg_0_0.access = 235U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PXILUZTBYWSVRBNVHBCZTXLVUEPLSETALKLNHPKWQRLCQTRKSGAAFWZVUVMTUHVNBDNYEDGIVOXCSEJZJNXITTWMSPUMULJFOJWPHKXCHFXCREKAYSI");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("JYNTVCPYCVYLOKKRLFAMTBOIEDQKXMQQLJWEORJIXEXUXSNMCUWGVTAZLDCJJCAKMKIJZSPEQBEPGOHGBYVTPAXVLDLQBWFFMYGUPTCTMFHDMANOOEHNCCSRUREXYHPMWBYNEQSRSUZGATKWYEDVGYVKSLUJOKMTAIJTHZRWURNGZBBHSXUZIJZXUSHEPHLPXGVYSHWWJ");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.146541851967;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.505208212016;
    tmp_tmp_tmp_msg_0_1_0.z = 0.223883481112;
    tmp_tmp_tmp_msg_0_1_0.z_units = 15U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.192737643481;
    tmp_tmp_tmp_msg_0_1_0.duration = 24099U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.533811793019;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 142U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("HYMDQVYXSUARSSNCJIZABSDUTWJOZRNZGHSXPFGMEQADBGXNYXCOYHJNUMILVYPEQTHVPCPXYZTHUDWETLGJAQJCERNFEWRDPVBCVEWTMRFWUKHKUJAHGWZFLHQTQRDILRPMBFEKJCAPXQIA");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.910389232328);
    msg.setSource(2871U);
    msg.setSourceEntity(165U);
    msg.setDestination(27891U);
    msg.setDestinationEntity(78U);
    msg.command = 230U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OHXHHLBWOMKOPHAYBILCBBTYKXRJTPFGGKZEGQMCDAEJYPVSKGSPLUDNARGKJGCVMCSBXZERYMTXQEDGTPQFOUYZXOHRBFHSIIKHPNIJEIWFEDONMQVDQEOZBMQSPKVUWISYTFTKVRNXQJXIWYIPOAAYOGMWXTLYWNHLWRIDGKSAKAUAXBJZAVEZZBERQCCJCCGMPBLLFMDR");
    tmp_msg_0.description.assign("CONMFHQBCFTWJVFPWOZACERQABOSHLEKHLAUMAJSJWUFGWLDEOBZUBLMHAYPKDYPXUOHTXHVYRLR");
    tmp_msg_0.vnamespace.assign("QJCTLBFSMNA");
    tmp_msg_0.start_man_id.assign("HXLKIUOOJNDVMJEAGJFJFEVKOWRNQNFJCPY");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("MOQONERRAKONWWJTEKPXYLQIZUCGFFVKJMCGQTLAMUGRKKTDCGGQRDJPARIQSAAKOIBUHZBKJUEVXEJZYOSLHXPNHFWSZEVTCWJIGYHWPQTDNXPUCMIHIIQRSGWJVEOZTODHNFURDBWVOPUQDDKKNXFTVBCPLMLJITZWCNEYERMSDCBYPALXZDNHCBLDAVUEFNYAYMVOXRWGFPWHSBGMJQSHLBVUTJCMVALTYNFRISLQPKXAFOX");
    tmp_tmp_msg_0_0.dest_man.assign("QIZIAQTUJYLDHMMYYTDULHSZCOUBLGMAWJHUXRJKSADIWECENVGOJRXSIRTCR");
    tmp_tmp_msg_0_0.conditions.assign("IBNXBWFIZWISRWNLHQHEAWGNXASXMYZGUZZKEAACQYYVWJGDBSQHPFLTVCKVLGPBBTSYPEKUQYFJUJUXMDDORRNMIJFOOWCU");
    IMC::ReportedState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.281266132085;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.960700341063;
    tmp_tmp_tmp_msg_0_0_0.depth = 0.336295358058;
    tmp_tmp_tmp_msg_0_0_0.roll = 0.247691455635;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.590013011527;
    tmp_tmp_tmp_msg_0_0_0.yaw = 0.0591878231413;
    tmp_tmp_tmp_msg_0_0_0.rcp_time = 0.402507732456;
    tmp_tmp_tmp_msg_0_0_0.sid.assign("AFSBVDQNSOTWZXKTWHEXSMGCFKHBPHEVKETXCQCMZYPUFYPGGMLYZVRLRRBWJXDBAQEAYZWGDEJLFLUOUFDBBGMQCHUTTQLAONNMJLLZJDKQLTGKZSAIXHSHEHASBTADWNJNNODMPCFCUVLRSARZQRVUIHSMNPYXFFKRXKQMPYZK");
    tmp_tmp_tmp_msg_0_0_0.s_type = 194U;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::AcousticMessage tmp_tmp_msg_0_1;
    IMC::DynamicsSimParam tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.op = 68U;
    tmp_tmp_tmp_msg_0_1_0.tas2acc_pgain = 0.604798373651;
    tmp_tmp_tmp_msg_0_1_0.bank2p_pgain = 0.283201708384;
    tmp_tmp_msg_0_1.message.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DepthOffset tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.899603590624;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.102645415231);
    msg.setSource(44316U);
    msg.setSourceEntity(197U);
    msg.setDestination(59099U);
    msg.setDestinationEntity(187U);
    msg.command = 205U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BVSLEMVAOIEHMHXIUCMYKCCICHKTGPPLKAAMYTVSHBDNQOSCZNTFFSIKMAFTVPFBXMJFKCUVFDIDNURNEWNHUFTIPPLXNZZWYESSWQQ");
    tmp_msg_0.description.assign("DCAWOWTXORIBLQPUHVPOPFJKRWSWNNVYMJKAVEGTUYTHYQTHWFGZBUMFIQVFQVCIOYJBZGULAXRAIKPLALQERDQBZGCCBCNCVWIHMAUMTXZFZOLRIVDPRQZWSURCKBLTINFAQNBZZKXYUXJJWHFDGNEEFGOTJXBYICSLKPJUVFYSTTYIMONQEMSGWGPDJPVUSOXRLPYSVZDKSROFNSKMEMDOQWAAHREZUKHKXCSBDN");
    tmp_msg_0.vnamespace.assign("VFTLEGEVWVYCUIPSWKCZSSOYKKQFUPNGOHFGXIXAONVRKSLEDFDHPTZPBSHTGICPMJOGDNXVCICIOADTFXAAHBGQIYYZXSYAYKRIDWHGOHUWMQ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DQMKFWHIGVFPCXLIEDJYPWQRHAAOWKQSDWBKGVTFEGHJTOWQVMZHWYXJNFPJKOYIRRUEWAZZMBAMJZEDYBIZYJFZLXTTSPXPETRHRDLKRVOIBMTKCNLHNNQJJSQ");
    tmp_tmp_msg_0_0.value.assign("JPCYWCQXNPCXDVNQEZSEJXFOAHJJVALPOMSNXEOGXDLLLHHVERQBBYVAMXGZDFJVIYNHRIMKQCHUGDMITOEOQZNRJLLMKVWGDUYBJYABWCTLLCQPYWNHWJRZSCZOEZDZBZKOMZSRYTGFPFULCTUIKYRSOMQTTGOPBUUTSEACNKIUXVWIEKJEGPDTYQWBINFHDAHQDVFGIUAKYGOPMIPWTXMNWAGFMSUFNVT");
    tmp_tmp_msg_0_0.type = 52U;
    tmp_tmp_msg_0_0.access = 131U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PDFCYGLKJHYEVKJJOLDJOJKHNVGZKNDWPMXEMGFC");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ZRJKTQOPLVFSKEVZOAHETRMLMMNYXVRIFXLDVXTQPGHQBVNQLAKCUNUXGFYXPZRCNBEADKCWQBEIAHVTINMUFOTWNGBACDYTHLOTIBODSHPYFUSGLSIYVZUFWXGBGBAAMFKRLWRUGMVLEOSYSBWHQBNLCAPRKSYPIYTTHUZOPJQPAVKDZUIOSJGVMIUSEZDWPKJJFJXM");
    tmp_tmp_msg_0_1.dest_man.assign("LERURPGNUWIYQHVCDAMOYTLLZTAIFLHCDJKVJ");
    tmp_tmp_msg_0_1.conditions.assign("IISIEDHYJPEKBFZLMTGMGCRY");
    IMC::PopUp tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 6886U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.345854856934;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.153927459843;
    tmp_tmp_tmp_msg_0_1_0.z = 0.643384807507;
    tmp_tmp_tmp_msg_0_1_0.z_units = 254U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.835594164449;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 172U;
    tmp_tmp_tmp_msg_0_1_0.duration = 17790U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.240350876653;
    tmp_tmp_tmp_msg_0_1_0.flags = 154U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("NPNPXCCCJYJHTCAPKIJGYXUEOKKIWBJJWADBSFUYDZOXU");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::PlanSpecification tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.plan_id.assign("MVHITBZLFGKOEAACDYPBFEUECCXQJSVSEZLDQKRPODASPVRVGDPTXPJYOSIKVCALKONFMWWIDNSVTSZQIYZWNQYWCRCYDKFUAMJBYTLXRBYYNCIKRDQGXWMRTRPBFFQKHFWNOUUONIKJAMTSBAMOPLYSUGGLGJUTZFJHDBMOHQDEJPTHHLUVBEOSNAZEPIJEGIJM");
    tmp_tmp_msg_0_2.description.assign("SBTYZGJWUOMTCANBBKHFJHRMOFMZGCRUXLYYNUDSMVIKDZWUVQSLI");
    tmp_tmp_msg_0_2.vnamespace.assign("WNYXLPOSNHGSTPGKRFCFIDSRFCIEXXBHZMAKTIQMHMCEXHDNWKCHSBRDKMYTHAQOLJTZAYVXEJEOTJRONYIUFEGYFOJUWOGGEQPXCBOAZY");
    tmp_tmp_msg_0_2.start_man_id.assign("EDAMFQOGMXWHXBXHDGNBBVJEWBAVNAIFLCTBHRKIFIONGAGMPINBREHJYOSNRETHWDLAUHAWTFGTOABNQTNSFMCCMLKRHCLVLDZCRWXVGEYTPSIRJQJDXMDOGUZQRLGDICWBOXPQTWLGIMPUBSJZHPFHCZFDDZZUJYIPOXPFQPVTDRNYUIUZWQSYCKSKPRTEZAKUEOUJKAHMNKPXTQEVSYJRK");
    IMC::ControlParcel tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.p = 0.0165687958223;
    tmp_tmp_tmp_msg_0_2_0.i = 0.141588420258;
    tmp_tmp_tmp_msg_0_2_0.d = 0.934247851963;
    tmp_tmp_tmp_msg_0_2_0.a = 0.967892191687;
    tmp_tmp_msg_0_2.end_actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.910748416615);
    msg.setSource(43178U);
    msg.setSourceEntity(75U);
    msg.setDestination(2473U);
    msg.setDestinationEntity(227U);
    msg.state = 113U;
    msg.plan_id.assign("AXDZDWSCPSBCSCTYDMRLBLQQTSNEZPQNFXFKEFVYQBRWTFBESURHIZOCBFMZAHEDVEGHUOLVEWX");
    msg.comm_level = 229U;

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
    msg.setTimeStamp(0.859792412815);
    msg.setSource(62186U);
    msg.setSourceEntity(99U);
    msg.setDestination(12591U);
    msg.setDestinationEntity(29U);
    msg.state = 38U;
    msg.plan_id.assign("NHIDXWNBCFBAVDRTQWJVAUQFDZTESBKUBWHPJJMPPXEILHKQZCQFVOKOAHFVQPRQYKWTOTIDDBLTSJAAEHCLSTKEKLPHUIVOHAARRXXEKAJHGXGMFLSFZCFPNVURCNLHEOCGDGQRRWNVOIDVNYMOOEYPBUUUWZWRUMZ");
    msg.comm_level = 169U;

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
    msg.setTimeStamp(0.862930759763);
    msg.setSource(56515U);
    msg.setSourceEntity(235U);
    msg.setDestination(29790U);
    msg.setDestinationEntity(138U);
    msg.state = 240U;
    msg.plan_id.assign("OLTKAESZOEIGJAWCCFIZRDQZZSZJRCUMJGQ");
    msg.comm_level = 64U;

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
    msg.setTimeStamp(0.0665758346091);
    msg.setSource(35857U);
    msg.setSourceEntity(217U);
    msg.setDestination(47317U);
    msg.setDestinationEntity(168U);
    msg.type = 45U;
    msg.op = 44U;
    msg.request_id = 42355U;
    msg.plan_id.assign("OFUOKERTKIEXQPKHDYCKHAIWBSJVHYKBRIWMQGVNBONGPMSUATZ");
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 2584348487U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PQATIZODDPBFBGAIUYABAPCXSPCFBCQKAKAUVWGRZTLLJMHGGZCRMYOHUNHSFONVMOUPWYKLIEJTIXIOTFVMHS");

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
    msg.setTimeStamp(0.526439235479);
    msg.setSource(885U);
    msg.setSourceEntity(182U);
    msg.setDestination(48998U);
    msg.setDestinationEntity(43U);
    msg.type = 7U;
    msg.op = 6U;
    msg.request_id = 12151U;
    msg.plan_id.assign("TVKOENWKIKGZSJWXWPFSWFXFMPAZXLDHGTPBGCZHUOJMEOIZKIZBCAYWOJOJKQBTNQHQAPRPEMAKBNPLBBKVPRRVTYAAMMSJQVDVILQBZXQCVE");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 19729U;
    tmp_msg_0.flags = 18U;
    tmp_msg_0.lat = 0.0333242767906;
    tmp_msg_0.lon = 0.862269903111;
    tmp_msg_0.start_z = 0.620713144126;
    tmp_msg_0.start_z_units = 76U;
    tmp_msg_0.end_z = 0.892070115926;
    tmp_msg_0.end_z_units = 169U;
    tmp_msg_0.radius = 0.861179609582;
    tmp_msg_0.speed = 0.352274340319;
    tmp_msg_0.speed_units = 219U;
    tmp_msg_0.custom.assign("ZOUGKNETUGKKBZSMQAXJLNHAWCYWPVTWLXLXVCSMJEEWAUOUGDQCKZLIXSNWUNBBUXRCOHMQTRDYUBPFQHENASWFPFHPPKPIWOVYRZAEDYXYJMKMKMCPKSCZZVOGFLZALUHJOFLWUEEDXRBDIZNIXGJBQIKTFIKJVRMANECXIRAEBHJQPIRJCHRYXJN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QWTZEOZSMWDELAAAOLMVWRVRSWJHOFEGHFQB");

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
    msg.setTimeStamp(0.309180090515);
    msg.setSource(43103U);
    msg.setSourceEntity(249U);
    msg.setDestination(11613U);
    msg.setDestinationEntity(181U);
    msg.type = 100U;
    msg.op = 43U;
    msg.request_id = 61373U;
    msg.plan_id.assign("KKIBZMSVCYHTFNIPYDUAMRQURPPDSLOJXEFEQLBYUZKGVGIPSIXWWVTJBGTWSHTNVLYMZCELYHNOFYVRHLACSUZQXKXTAAURXWPJXHMSCHNHLPSFRKEIDMFZBGRLCWMTJBCPOGZKCRNOXJGDBMTCWJOBKBTLQRQDJSVVDHLUADFGEGPMIWNBXSUJREQOOIRVFKYLEZYYMOQMUADZOEAHEAQGDDTPEONWQVZUQUJYJAXZSNIFCNW");
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.634488533817;
    tmp_msg_0.lon = 0.332848129553;
    tmp_msg_0.z = 0.807682817711;
    tmp_msg_0.z_units = 180U;
    tmp_msg_0.speed = 0.084759364549;
    tmp_msg_0.speed_units = 169U;
    tmp_msg_0.bearing = 0.238411596852;
    tmp_msg_0.cross_angle = 0.0947516311032;
    tmp_msg_0.width = 0.805941922087;
    tmp_msg_0.length = 0.559978289901;
    tmp_msg_0.coff = 243U;
    tmp_msg_0.angaperture = 0.388696881072;
    tmp_msg_0.range = 21126U;
    tmp_msg_0.overlap = 100U;
    tmp_msg_0.flags = 136U;
    tmp_msg_0.custom.assign("JEHIKRIUTJJOAZQBJXKDVMQRAANEGKXGRSDSWOCSONKWHOCBYIRHYYKXRQVXVBFGDYDPIGHQOKZNDQBYVJHPZUSFVKJFMGOYVHFHJMTMZXTANZEWWKMWFCXMWTCUHSIVFJYEAROTNUYZPUVNQRDFPBWLGQOAFDTNRLSZCUCSEGQHRXQLBLTIGMTLPLVAU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RLBFVICDPLWOKLESXPKWGBKBZGEQCCYUMWPYDJOAVASFZJIYWFTHTWLSMSKVZMPMPHQEGDDNTCUGTABTRQHHTRZJDHRFBJFISISJJUNOURPABNKZZZLSVCEVAMNNIDOCODYNLPXCCZNSUUWFMUQXQFWGIEBVQEFDHKQJYEYEAIKJHGXRXUQMAOUHDTVSEETJZROYCAJTYFCTQAMHXPRPOAY");

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
    msg.setTimeStamp(0.46627891843);
    msg.setSource(16453U);
    msg.setSourceEntity(22U);
    msg.setDestination(63140U);
    msg.setDestinationEntity(213U);
    msg.plan_count = 54281U;
    msg.plan_size = 2675235024U;
    msg.change_time = 0.014178607391;
    msg.change_sid = 48249U;
    msg.change_sname.assign("OKLHPRCMBURMJMFDRHIJJNLYFGURRBTDIIWDHYGSTWFPAIGVGHCCIEXHWKUHTIAVNAQGFDCIZIEJETKBBSQDNWBSCJNLKTFRAHQMLNSKLEYNBXVZAOURPBMOKWBDZROXQGUMVYFLLZSXPWKNNGDVTALFSLVZTF");
    const char tmp_msg_0[] = {23, -51, -71, -48, -105, 114, -21, 75, -33, -38, 116, -105, -15, -93, -22, -109, 0, -65, -7, 6, 106, 87, -36, 110, 11, -12, -4, -84, -17, -101, 94, 60, -62, 48, -101, 123, 63, 103, 94, -65, -47, 13, -111, 36, 1, 27, -34, -81, -68, 42, 34, 59, 125, -56, -100, 42, -73, 22, -14, -94, -64, -56, -110, -12, -42, -32, 5, 67, -117, -13, -5, 90, -25, 57, 4, 29, 6, -122, -109, 55, -18, 111, 73, -91, 120, -23, -31, 10, 77, 21, -40, -91, -14, -75, 85, -92, 11, -84, 62, 38, 109, -35, -44, -118, 20, 90, -22, 122, 35, 84, -65, 55, -89, -126, -56, -49, -60, 35, -1, -113};
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
    msg.setTimeStamp(0.206820305912);
    msg.setSource(6406U);
    msg.setSourceEntity(154U);
    msg.setDestination(16139U);
    msg.setDestinationEntity(75U);
    msg.plan_count = 21877U;
    msg.plan_size = 230099502U;
    msg.change_time = 0.988447072999;
    msg.change_sid = 10177U;
    msg.change_sname.assign("UMRUVJURALIBHQQLZRTYXDGPQVKOCUSVXIOCBNJLVIFAJPROWRRCTHNULOMXAFYHX");
    const char tmp_msg_0[] = {-63, -36, 99, 66, 122, 11, 58, -110, 28, -85, 13, 109, -77, 94, -14, 91, 101, 113, 64, -99, -110, 101, -66, 58, 41, 70, 115, 88, 66, 106, -119, -68, 111, 71, 32, -80, 126, 120, 85, 3, -104, -47, -68, -68, -22, 86, -41, -125, 31, -119, 55, -89, -16, 91, 40, 62, -114, 80, 91, 60, -47, -64, 30, -52, -41, 36, -96, 99, -90, 60, -12, 13, -40, -43, -96, 69, -58, -121, 91, -32, 81, -113, -8, -15, -104, 100, 91, -107, -12, -55, -9, 70, -61, 1, -80, 64, 11, 72, 39, -70, -95, 28, -19, -79, 77, 30, 76, 45, -84, 92, 77, -2, 115, -85, -87, -28, 118, -107, 41, -13, -87, 48, -17, 28, 51, -57, 20, -80, 64, 121, 34, 49, -51, -35, -114, 38, 12, -21, -42, 66, 18, -90, 49, -46, -112, 15, -90, 61, 53, 113, 64, -6, -1, 101, 63, -73, -103, 74, 65, -60, -41, -73, 56, -23, -62, 9, 13, -68, 81, -53, 92, 116, -121, 59, -100, 21, 84, -94, 123, -35, -90, -127, 117, -78, -113, 48, 125, -95, -93, -33, 28, 47, 41, 58, -104, -33, 6, -47, 50, 82, -33, -22, -109, -28, -53, 88, 13, -2, 35, -92, -40, 0, 5, 10, -27, 71, 105, 50, 15, -104, 78, 77, 73, 89, -88, -82, 13, -91, 64, 27, -50, -2, 94, -16, -94, 83, -75, 19, 86, 8, 9, 121, -82, 94, -4, 57, 28, 109, 106, 80};
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
    msg.setTimeStamp(0.163538476986);
    msg.setSource(21917U);
    msg.setSourceEntity(11U);
    msg.setDestination(14855U);
    msg.setDestinationEntity(159U);
    msg.plan_count = 785U;
    msg.plan_size = 3163970764U;
    msg.change_time = 0.12785492996;
    msg.change_sid = 4900U;
    msg.change_sname.assign("NWMJDTXVSETZSGEYEMXUDTZKMLYXQRYNVGHCWJYE");
    const char tmp_msg_0[] = {18, -116, 44, -122, -6, 100, 6, -77, -26, -76, -33, -88, 54, 112, 107, -57, 3, 13, 123, -111, 23, -47, -16, 97, -33, -12, 31, -107, 12, 102, 75, -75, 72, -107, 13, 9, -21, -106, 94, -54, 62, -33, -71, -31, 52, -127, 60, 50, 42, -79, -124, -103, -106, 93, -55, 123, -111, 46, 22, -16, -32, -63, 114, 23, 11};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IMLCZKQZKLTCUYN");
    tmp_msg_1.plan_size = 8756U;
    tmp_msg_1.change_time = 0.304779505827;
    tmp_msg_1.change_sid = 36963U;
    tmp_msg_1.change_sname.assign("LBENUIRLWOJBRQVSLLDQGMFDHGLAOKLFHBKCWCTHIUEEDMAMDVAOATOHRGBKYLFPZLAXPAJSDHMRTYDNSOURHNCPRCEZZYFRENUTJGISBYGXBTWSJNIUCXWAHQBZCMPREILVIWORLWVTJDGTKMECXPPSAOOMJZEKVBZMPHIVHJCNJUYYZOYFWXXQRVWMYQZNGSCNYJWXADHQIEF");
    const char tmp_tmp_msg_1_0[] = {12, -46, -75, -13, 39, 81, -48, -90, 36, -13, -45, -44, -47, -128, -43, -89, -5, 97, 28, 111, 120, -87, -35, 87, 99, -44, 108, 101, 99, 79, -67, 71, -8, -86, -19, -39, -15, 95, -103, 72, 28, 88, 66, 115};
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
    msg.setTimeStamp(0.0841627440991);
    msg.setSource(33149U);
    msg.setSourceEntity(248U);
    msg.setDestination(20759U);
    msg.setDestinationEntity(208U);
    msg.plan_id.assign("UZDQSTNMFYRRYIXWDFDYSXVYRFDCKZCASWYMRWNJAQQEDLETYSBLLBBKLXVPMEGSIADKTKHBGRZWPNTPMTPZTUQWJWYQOGROEQDVUPITCHHHOBNLNLEIGA");
    msg.plan_size = 10810U;
    msg.change_time = 0.512991158427;
    msg.change_sid = 33054U;
    msg.change_sname.assign("ZBYHAYAEXNSXCKZNYXDFGQDRAIQZFYTCLCPHZUOBGXKNWJLVDMWRXSBZGXICFQHQPEZBQEECPFQKEGEMFRAREQNKWTWVONPRGCLNNZCAFBWYNXPPWSUMHMUKJYHXTFAKKVQKDVRUUIZIJUHBSBADGHFTQIRDSMTROEXUGAUGDORCVCPYHSMZPTBSJWSLTTKMYVMEQVVVHNUJYTPLVBIJXRMWFLGJOIYZ");
    const char tmp_msg_0[] = {60, -55, 71, -50, -79, 11, 53, -101, 61, 101, 48, -59, -95, 118, 56, 85, -99, 33, 13, -114, -127, -33, -16, 91, -32, 33, -21, -12, -3, 108, -23, -64, 64, -116, 107, -45, 49, 66, -116, 83, 55, -47, 4, 67, 126, -70, -113, -36, -117, 60, -45, -38, 91, -27, -42, -82, -103, 20, -99};
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
    msg.setTimeStamp(0.0446519075323);
    msg.setSource(16205U);
    msg.setSourceEntity(235U);
    msg.setDestination(61876U);
    msg.setDestinationEntity(179U);
    msg.plan_id.assign("RVTNETGOSJPISXSKXLUDCGLLCETLFCEEKFIHHINBQHWHQODMCBFZNBGTDPHQMVUSFZBVVAVRQYZHZXIWFPCWJRFTMQEKNKYRMYITJGNCM");
    msg.plan_size = 48474U;
    msg.change_time = 0.746366233635;
    msg.change_sid = 22088U;
    msg.change_sname.assign("OMHYMDGFAACKGSDSQIFDDNCEC");
    const char tmp_msg_0[] = {9, 29, 94, 76, -95, 40, -115, -38, 75, -46, -14, 23, -51, 8, 73, 39, -86, -12, -17, 10, -87, -59, -47, 39, -16, 105, 112, -29, -108, -80, 113, 123, 119, -125, 124, 71, 67, -21, 101, 62, 65, -86, -42, -89, -18, 69, -6, -15, -119, 103, 69, 83};
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
    msg.setTimeStamp(0.451547328876);
    msg.setSource(35631U);
    msg.setSourceEntity(89U);
    msg.setDestination(25646U);
    msg.setDestinationEntity(171U);
    msg.plan_id.assign("LUFVTSZSXDWQNCTHHPNVSEMCJYHSWXGXWBFDKAZWWHLVURZPKSAUCBJBMDGREJEMFHTKJVOMJMLFMWVEQAIKEQLKNUJQGSRGURTCZFKYHSMAPZBNNRGIZJQYUGYZBHCKDUNGQVBOGWZBIPPKHSTQFOYNECYOFBYLLXJTFARYVODOIODURJIKDTVLSPBAZEYQPGJCPTTDWWPNBTYAXRDOOQLXNCWIDFCOIXXUKMMAMVCXHPFISNEAERUQ");
    msg.plan_size = 762U;
    msg.change_time = 0.0881251520893;
    msg.change_sid = 10970U;
    msg.change_sname.assign("TVLBKYLHSWMQFSLKCPMBKCYNOQZZTUZOBWDLHXXATYZTEGOEFOXWNQOCIBRNJVFZTHU");
    const char tmp_msg_0[] = {-34, -40, 116, 54, 66, -24, -83, 105, -111, -48, 9, 55, 17, 52, -24, 49, 89, 86, 125, -27, -110, -88, -34, 109, 49, -88, -98, 102, 59, -18, 92, 50, -47, 30, -49, 91, -108, 118, -27, -24, -83, -92, 50, 105, 36, 97, 107, 96, 23, -62, 49, -106, -40, 41, 35, -13, 14, 114, 3, 104, 107, 124, -20, -54, -53, -88, 66, -94, -18, 90, -74, -44, 22, -122, 105, 29, 3, 108, -66, -30, -32, 29, -71, -28, -4, -101, -51, -27, 16, -65, -76, -117, 60, -41, 74, -63, -123, -30, -70, -46, 94, 102, -42, 79, 49, 64, -65, -14, -3, 37, 105, 38, -75, 32};
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
    msg.setTimeStamp(0.600228884721);
    msg.setSource(46521U);
    msg.setSourceEntity(165U);
    msg.setDestination(52809U);
    msg.setDestinationEntity(213U);
    msg.type = 120U;
    msg.op = 217U;
    msg.request_id = 56214U;
    msg.plan_id.assign("EKOKUQLNGCMYSWBVEULFFWSRMHFVHZCNMIBPASTRRXHKLATMOEYAPNOWXFXPTPWAWHTDLJITQQXZEBZNDJNDPYADAGYPVDJJBFOUSLFAJTGKJICCJFXRPMYZUCRKDQLZWKUSXGKDTCBGBRIFNJEYYTMDESALVJWGNCKCGMLNIYZHSJXGQIGRMIUELBHTBVVNEAXKWUOYHMBZZGQWDUIVRRMOAHKQYFTSPQHQIDOCSORSOVXVNPEPCZVI");
    msg.flags = 17971U;
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OIZHTIQZVGKUSLGUDUXCZCKLOEYWZKJMLWKHNFYVYNCJUWIFMOKTNLMHVUCNXTKDWLTPDQBARCTBYJTGRABYIECRGOIITKBVQLNKOMIEUPOZFFBNEAEGNBFRQFXUSXQGMSMBGXEVVWKLWROTIDWIPEJBDSZQNWXEOMGAMXPQSJBZFZQWYPGYVPANAYFWPAACXDHOKTARLFYRGFYCTHDLJPRUIRJZSJ");
    tmp_msg_0.value.assign("USTKBOUIWIZMVLLECSCNQLBOYCDWIXEFWJJMDPAGKLAMVRLPNTWSYZGVKCEBHZCNYIYJXUMIQFKOMXKBKLKNEPHXJMDBUFZRLAQRFEOGZVVPSBQAOONXGGQKVZUVWOWGEU");
    tmp_msg_0.type = 156U;
    tmp_msg_0.access = 91U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XSOCDMURCMDTLBHEKYEYPZVWSEJBIRBCVJEGSZPQEYZTOONXMWVCGYHRTALIIJMPFWJSSFBWGEJCWLEXDCSLDADDZZLFPIFRHURKATCXKEQ");

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
    msg.setTimeStamp(0.856442105741);
    msg.setSource(45237U);
    msg.setSourceEntity(7U);
    msg.setDestination(28210U);
    msg.setDestinationEntity(224U);
    msg.type = 38U;
    msg.op = 223U;
    msg.request_id = 50253U;
    msg.plan_id.assign("WBJNQOCTTNIAOBPJLAGHTDRUKYJLLBWBWMMGWGTZHSFBOSSVZQRAMUSWXFCBYBVPSAPJVUHWYIITKXMBRQCFTPFMGLXDKXRJXWINRKYJGQNLQGOPTCIUGNRDKYSEKKNOLPAQDIJXLOTARWFVEVFYDYQNSZPCALFROMUTPHYIDHZNYZHOZEX");
    msg.flags = 11011U;
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("VSCRWGASNOZIPMSFMZJIVKTHILOPGLQQZVYZQGANBFIFUOMPSHBCHXPKHHENVWWRLTUNBNOBXLDMLKYGVIKHNHEFDBQRTIJXCXGCSQDXWHDZMHUOTMYLRWQTYYIYJJTKXDRRBEJOKMBCRVZAYEWQCIIIGOPSVFQPMJLRWUSJUHPCTAAXLFO");
    tmp_msg_0.predicate.assign("AJKRAQPDJFEDHTWQJNPBMQQUWUNBVHFKIVTTJGCPUIKNGRMTBQIEIRIYJFQOZCRSUDFHFXLSMFEXDHYYPWSCOWVVTSMXUXWCFQHXVYVWIDKESRDOZGVOADKURXXSAFLOSYYENLLPSUGNUJYSLMGLOKBYCRGADLWUKUGBITWDWMRITNOVNQKSHCEBZJHXXTZCHFCVA");
    tmp_msg_0.attributes.assign("UYGNWEZGRYSQRNCPUZBIBHHMLRUZDBHFWVJWWYXDNYPISAMPSGHATCNVQM");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FIDROPCBOBUPGPQNIVQKEXJQLVXZAAMRNQULGAATGZEHXEBWMLNQEYATEKCSYI");

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
    msg.setTimeStamp(0.146289388049);
    msg.setSource(19446U);
    msg.setSourceEntity(72U);
    msg.setDestination(27739U);
    msg.setDestinationEntity(239U);
    msg.type = 27U;
    msg.op = 172U;
    msg.request_id = 15972U;
    msg.plan_id.assign("AMBXTPHXJUSANPYWOBBAIFQAXEWUQPLSRPBTIDCNBWJQHEVJWNOUQJQDECHMWIRGGXXWPLGDRTHOJOTDFCYERQNKLXCIHHZSXEDKYTNSODFOYCRURIYIMCLKKNSFGQWWOGPUZELHJKSCMTTZNEZYSBLVFPVDADFUSMZEYPNFBRXEETTGGNJMKKGXIPIFTIVIQ");
    msg.flags = 1899U;
    IMC::StopManeuver tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OPAGWAZOEBXRRAQDONTKWKBRCGCKPTYBQSLREAWFXNVPODEXXFVMIUSTUJMOLQHINIDHFMRMWITGBXYSYDRIKLCYZGZLZCKMJKIBSHVYPOJDULZMFWJLECQNZTDALXNMYQSKCJQHFWLGVMSQPFHGLHWUAAKZFXVRWFMUTIUBVSOXVTUKNDGBQBOOLDYZZTNJCVPJEPKNYSJRGAYIBPXGFAIW");

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
    msg.setTimeStamp(0.829345303393);
    msg.setSource(12868U);
    msg.setSourceEntity(16U);
    msg.setDestination(36335U);
    msg.setDestinationEntity(86U);
    msg.state = 158U;
    msg.plan_id.assign("RLNYOHUHFUUBZEWHJFAZMCIZTNIXARMWIFYWZURQIOAYHFVKSBVPLKYUQDNHBOJWXGZUANNIXAYQETIHLBQNMKEEDTDOYURSGLVCRVCCQBCRTXBXNGNJIZMKGVHANSTDCXPAUDYYTGSCBOWZFJQJA");
    msg.plan_eta = 1209750162;
    msg.plan_progress = 0.0999363070584;
    msg.man_id.assign("ESEQFDLZHAPIFXE");
    msg.man_type = 22988U;
    msg.man_eta = 894105859;
    msg.last_outcome = 191U;

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
    msg.setTimeStamp(0.909202367062);
    msg.setSource(24481U);
    msg.setSourceEntity(79U);
    msg.setDestination(25924U);
    msg.setDestinationEntity(36U);
    msg.state = 82U;
    msg.plan_id.assign("MNWWMHSGNCK");
    msg.plan_eta = -1402116049;
    msg.plan_progress = 0.431242677268;
    msg.man_id.assign("GPQXFOHCHPIAMQHOJIFDLRFOUWBOTFIVYLROEKCZORCVTSPRBQPVEBAMJLQJISNGIFSVYRMIEZKGRAMUWSPQUUJFBLPDUKUXLFYUXGRJIADKAWPFHCJWEUHOTAVPQAHVLJHP");
    msg.man_type = 25999U;
    msg.man_eta = 1596684455;
    msg.last_outcome = 151U;

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
    msg.setTimeStamp(0.319573766078);
    msg.setSource(32777U);
    msg.setSourceEntity(80U);
    msg.setDestination(48628U);
    msg.setDestinationEntity(244U);
    msg.state = 179U;
    msg.plan_id.assign("PDRGZKOZWZJWBSPRVXDUAZJSBVCFWEQBIENUSLGNEDEMKPTRDIMAXLVUTDEGBQBOQVRYDFBBLEEQMJMDMIJKSVHPBNSMANMYZYUXISKGULVWZPYXCRCUNYXHTOIIXHNCLJ");
    msg.plan_eta = 831185388;
    msg.plan_progress = 0.0866052044994;
    msg.man_id.assign("JDQQTTSCIUZFITHYMNESFMIPDLPZGIRXFCUPJOKAPHBNGJTKVFRWPJPGKLWHIXIWWHSERVUEMXZZTNYNPYSGMOIKLUOYRDSXVHLFCTYGZWWKLXCRJVOHEWKECAWOIMZBHTCATSLYFJCSMKUQKTHVPVQW");
    msg.man_type = 63987U;
    msg.man_eta = 2114544239;
    msg.last_outcome = 95U;

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
    msg.setTimeStamp(0.430029602831);
    msg.setSource(50620U);
    msg.setSourceEntity(66U);
    msg.setDestination(370U);
    msg.setDestinationEntity(212U);
    msg.name.assign("JDZVZQGJROMNXVUDXGTUSEXQBOUSLCICUNAJKDOIFSBDWMCPXNPZFPOXHKRMHYFUVIMGWOKYOOIJMDPIWZICADBRZRZPVFVQHWRYTFRJLHIGUNHEYFTLTTHKVABLQFTEBSESACKMUAQBSHGXMEJIAIMYWVR");
    msg.value.assign("NZZXJZDIMUQGNSAGGEQBMUSYVLAQMFCESIBXGGV");
    msg.type = 37U;
    msg.access = 30U;

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
    msg.setTimeStamp(0.832157957332);
    msg.setSource(11915U);
    msg.setSourceEntity(131U);
    msg.setDestination(31847U);
    msg.setDestinationEntity(15U);
    msg.name.assign("UYFDZHHQTJODOGJNAEMVOYGCRGUEPLXJPAJEPKKNNCYSCRQNVEVAAQPSYMJSWKJHASMMGALYCWBHHDEEVMUQTBSOKDWKDZXFBQHKRTMNRWDOFNXJOHQLIFTNAMQIAECYXBRGMTQOXKZVWKJFKCPUGLDIIMNPCRITUXPZVSIHGFXUTGEQBSFHWEARLRCVWL");
    msg.value.assign("PFEXVLRUWPHFEDERNXJOKDOROEKEJZZXSLUFDXNCQWBZKYAFKTUBETAYLGCEZJBVNWCAGJCCNDQNEAFMQNVQMHCYLARKVVYSSPM");
    msg.type = 33U;
    msg.access = 63U;

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
    msg.setTimeStamp(0.0434517737279);
    msg.setSource(5994U);
    msg.setSourceEntity(238U);
    msg.setDestination(21586U);
    msg.setDestinationEntity(91U);
    msg.name.assign("ZVCFDGOFRJNISAOLTDWXQIHGTKWBYMVEPROZSJDCEHEMFJHVPUYPEQYEBZPGZDCRUROTCWGJLTCQOLKKBQNFMXAW");
    msg.value.assign("JXHQTPUWPUYUODKMNTODBAHBXUTNXPZXMESPKQQYDWEZJVKAKLHZNMICGAKFCDANF");
    msg.type = 175U;
    msg.access = 39U;

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
    msg.setTimeStamp(0.882576576177);
    msg.setSource(30863U);
    msg.setSourceEntity(107U);
    msg.setDestination(62692U);
    msg.setDestinationEntity(188U);
    msg.cmd = 6U;
    msg.op = 54U;
    msg.plan_id.assign("BIWGIMZFUWPPBHYXNAWVZOLUKSLGR");
    msg.params.assign("WMVZEKTTRIWZYUZJSNQGBTVQDNHYJGFWVDACJMOCBEFUAUXYAZLWFRSSEECPMGNGAAIVBFSELIOGUUJBWDIRDTRWMIUNKCFSEKLHNPKUHTOXYMHPNSQDGCJGHMXOOCUAFPRMCHEWTRLRGXORBITNTXDVYJODPBLWYIVXEKZBJCLYIIHCKJPEVMLXLDFW");

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
    msg.setTimeStamp(0.0307402610426);
    msg.setSource(42016U);
    msg.setSourceEntity(110U);
    msg.setDestination(57032U);
    msg.setDestinationEntity(97U);
    msg.cmd = 101U;
    msg.op = 32U;
    msg.plan_id.assign("COBIYXIOBVBEQJJVYDLYAR");
    msg.params.assign("CTHZXJZOAODKVKFMJOXEQNLZRIETPMBLSSYAVBOHBOHVTXWXRQEVKUBLDHAADLGNXYUYMMVNPSVMMZHFZXLROSCQYZSOOHFJGVGQYKTDKGRYDEAXYCWWDCGOCAFPDUBCWJEITGLKVWJIWWNTNLUKGELXJSIPNJGMPUWMCNTZSPBACQRWTVQUPLJDHMXAXLAZTFNHBRJOVPUBGRRA");

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
    msg.setTimeStamp(0.0110758616909);
    msg.setSource(630U);
    msg.setSourceEntity(12U);
    msg.setDestination(3419U);
    msg.setDestinationEntity(113U);
    msg.cmd = 67U;
    msg.op = 116U;
    msg.plan_id.assign("FYBTNZKSRLWOLKMVJGADCJYQWPKBCOAMPKEWEHCUJVYXWFDJYIVMNAJQEIDJCYETRWKVSRSDYIHVXQHPUVQLTIDBBWXSSGR");
    msg.params.assign("ILSYELMFUHXRSQQXNITSTNEGYHUQSWOWNPUZYPDKGVKDYLAWUVKJUATYVOMDBHXEMNPHMRZAQOQAFFGJXWRBOAMVQHTIBVNVUIYLNGKHTCBIUGYCSJSPAMENEKZLPSJUYXWLKCQLEGOIVKTWMEHUJFWJFWBCDWICGSBVKPDRRWLRGJLHRGBXCYQDZZPLOCBIXSQP");

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
    msg.setTimeStamp(0.260568834308);
    msg.setSource(19962U);
    msg.setSourceEntity(196U);
    msg.setDestination(4669U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("MYJYGLCQKGYERUARUNPVYDAIQUWSLJRGOXYVYMSOKVXEANCFWBZABJHPGFPTRRXFESDQYLVIFIZSUZEVDDFQXABCSRKTMHGCDTKWMFLDVOGBXLXUJJWRKIOQYZABJNPVMOHTJQIZNII");
    msg.op = 232U;
    msg.lat = 0.820046286824;
    msg.lon = 0.112086086157;
    msg.height = 0.291857980133;
    msg.x = 0.217693768928;
    msg.y = 0.420980014425;
    msg.z = 0.432472737918;
    msg.phi = 0.49848261175;
    msg.theta = 0.959333544444;
    msg.psi = 0.00407265270411;
    msg.vx = 0.722310033751;
    msg.vy = 0.0108206035072;
    msg.vz = 0.22947075441;
    msg.p = 0.16891052852;
    msg.q = 0.972705807983;
    msg.r = 0.411847748424;
    msg.svx = 0.449112939853;
    msg.svy = 0.124491823719;
    msg.svz = 0.850739370456;

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
    msg.setTimeStamp(0.136764363276);
    msg.setSource(37508U);
    msg.setSourceEntity(109U);
    msg.setDestination(29931U);
    msg.setDestinationEntity(184U);
    msg.group_name.assign("FFGQXXMALICWOBZREBIJSCSKCEZTQKMVIFXVTHPBMPIKVWEPQHOHCWDQFHPYOLSQYLMQRCPDFUEDHKIHCTHTAUKURMXDIJDOBUEFSRQBTWDADLZYMBWIWJJTZRMPLQONYGESGQKPZNYXWUIRSKPJDHEMONAUVJGTANXYWICSPHULWZRBATVJHNQGNPVNSYVEAUOGLZFY");
    msg.op = 133U;
    msg.lat = 0.549805626248;
    msg.lon = 0.2744151556;
    msg.height = 0.675592995497;
    msg.x = 0.24206196371;
    msg.y = 0.570079922229;
    msg.z = 0.24617211321;
    msg.phi = 0.367587807216;
    msg.theta = 0.136797647866;
    msg.psi = 0.0361368471544;
    msg.vx = 0.175109803794;
    msg.vy = 0.382872830713;
    msg.vz = 0.0154131631502;
    msg.p = 0.633775583592;
    msg.q = 0.161004856536;
    msg.r = 0.910129146651;
    msg.svx = 0.453233931918;
    msg.svy = 0.584690537542;
    msg.svz = 0.845940747927;

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
    msg.setTimeStamp(0.228821198515);
    msg.setSource(46778U);
    msg.setSourceEntity(125U);
    msg.setDestination(4493U);
    msg.setDestinationEntity(102U);
    msg.group_name.assign("XKSLMDQGBSIZXCPCGSTSGKBAINCSVDMROYHFREAHCNIODLDGMVPJPIARITQYXHTBJNKGNVCXJLWHFYNXKMWDHHVWNYIKAS");
    msg.op = 49U;
    msg.lat = 0.695199294706;
    msg.lon = 0.961697280703;
    msg.height = 0.591005322083;
    msg.x = 0.435973601901;
    msg.y = 0.661035453861;
    msg.z = 0.625272615512;
    msg.phi = 0.997790523173;
    msg.theta = 0.0785829738322;
    msg.psi = 0.105756774571;
    msg.vx = 0.97390341732;
    msg.vy = 0.050530358791;
    msg.vz = 0.570526666315;
    msg.p = 0.2902274234;
    msg.q = 0.760861248901;
    msg.r = 0.740931844549;
    msg.svx = 0.952213182551;
    msg.svy = 0.0117197048629;
    msg.svz = 0.162008902585;

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
    msg.setTimeStamp(0.546050378579);
    msg.setSource(6135U);
    msg.setSourceEntity(6U);
    msg.setDestination(29316U);
    msg.setDestinationEntity(228U);
    msg.plan_id.assign("YPLXGLKJGLWPQVQVAODDBYUVYMWWBQYZFSDUNTFCCEWTMYACMZOODUZSGZXRSYQTOZSPJDKOVTGCIETLIFPXLQHVGFPRWZNMGLYOBRSBUPJAXJEXNFMOKRUHRGFGBJXLFCJUPIOJRABLLIWRQTEBVHM");
    msg.type = 246U;
    msg.properties = 32U;
    msg.durations.assign("OVGPKWBPKMCYBYNFDEPHQNEGJXYTLIITRTFBLEJSTXSGGUTKRDHKSWQIWQOYQHDWIBQRDHXVQFMFMCUVLFCSVGZSIOHDWZPEZNZQYRNXYUTCJKNMKZGQBVSNVYMAORKFUJXXXIJF");
    msg.distances.assign("JEDIVZTMOUAHNPJGLEVPWXAGILSMKMATZGBKXUURZHZBQSGEPDFYCHEPQNNXVBWRLWFQCFKPPJXGQBRNIZVTUEORRXRXTAOORTIASOHSZBDIBZDILPJKQPJJNPXBKOMWZWBODLJYHDMHFVIVMJ");
    msg.actions.assign("POLQCBPZVMHSPSJCKVFTQXEMYOKBUNNZRZVULSIWXRBY");
    msg.fuel.assign("CEOREGXQPKVJVKBGAUDUHLYQPXCGYSUDCKVHPERUOZILDQLORKBJRNXWBSYHTXFNEYQJDPZDZKKOYCPGSMQYZZPQGQBFFTFBASYRHUXZWRSTPTTAADBNIHR");

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
    msg.setTimeStamp(0.62342697748);
    msg.setSource(60168U);
    msg.setSourceEntity(151U);
    msg.setDestination(27823U);
    msg.setDestinationEntity(39U);
    msg.plan_id.assign("YJQMLWSXVGKCXLMKVZFTRFSFHUTSFYJNFGKUISBOAZADSNCWXIYKZ");
    msg.type = 79U;
    msg.properties = 42U;
    msg.durations.assign("PKYZUMQRACPYITNQKGRWFDZK");
    msg.distances.assign("ESITYEVBKDWENRVWASNGYQFMNGDNRQSJMXOXGJVXYUCPEUJFDUEIBADVWIUHYPFVERXWCLSOMAFHTFYUAZTKHXCLOOYQTKCVOHTBPBERFOSJNTKCHALKBNQKMKVQQPWYFZWAJ");
    msg.actions.assign("UKJKQXGFMYHAMWGUAQKOTCOBTTXJRPAVHAWMVUXUNNFIDILILNBKTDJYOTOXPZWXGORMUQXJCYGAXJMIWEHPWAEDLEUCQMDHSVZZFORQRXDVHSMSHRALBDXVZFIVQY");
    msg.fuel.assign("HSBNHNVHABTOEUNDELFPJVIRDIIEUGGTQQJLR");

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
    msg.setTimeStamp(0.999367893735);
    msg.setSource(59404U);
    msg.setSourceEntity(218U);
    msg.setDestination(18510U);
    msg.setDestinationEntity(98U);
    msg.plan_id.assign("NREUOWQJFZDFZYUWKLGQIDCOWNUFOCQAKVGKUJAMZHNBSHLHIGOTHPKCIMPJSOMRHLEEPPDAHDMYCHFJXTIVAXPERXSLJBWXHDIUDUSDYFASNXPIQWRZUGWFQEXONYGDKRAVIZRLOYLTPGABMJUWSSDCOOCMMUTBJAZYGFWBNNCFQPJESVQMJBYZZRQCGITVKUILCGXLEGXSTBAHKEEFSYWDITVXPQHZTJVRTNLANKKVWBBZOYMV");
    msg.type = 69U;
    msg.properties = 94U;
    msg.durations.assign("FVMQBZFCXJWTQMDSFPKEDVEUIQWCDBDUHZNWENYYTSKXALAAOJAPFHYPGBUJEOGAMOFGTVXYMUBYOUTQIJQSMWZJLBNVOIHTLININPBQELLQUTCRXRJRXOUFGKRNMAIDPPALRWZRZUCXIZKNLIIZYGASTUDEOCPZVOSYAQMVDRWTGJLG");
    msg.distances.assign("XGCJRFSKDDMEZXNRPLWLOMVZGYCUFUNIQZBCDZPQQMVVFGNSLVLHBIKTYDTBPPAEKOXMZDBHRVVJWECVQFFAYQOSRBJTMUEUGEHWGPKBXLSIICXRYSHWKLQCKUPMIVCADXOMXH");
    msg.actions.assign("PROAXRCNDFOBHIPJOCENOHLYVNBOEOXWLQCWXVHDUMXIYKJPVJJFRDZTLMIUULWHGCHYNARWUWQLILSUEKCNVPNENXEXPTLBPTGSGFDZICCKTWMSKOPIIEIMGXWVOWQGRBDZASDYYURAFRDTSWMKMGOKSUFZYFJDPHNQMZGKQAXYRSMSCQUTTELGQZCAUA");
    msg.fuel.assign("AFTUFAYYDPYZUJPBDRSOCHQJHZNHVGGTSLPLDZJOMNUBCCGNOBQPPRWJVGVIIBDVYOLCPFXELYDSRCVDLIITEIETBTHVRSXQUJYTJBHVNHCEWNKTCROFLMKRKQRRSZDDQINXOMWEUCRZYKTIAHXWQKBDXTIHHSEWWAYTYXXFPJOVSMEPEIUCSJADFJFSZZGXNUMKZONGFIAGBFUYRLAZW");

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
    msg.setTimeStamp(0.262341401006);
    msg.setSource(19298U);
    msg.setSourceEntity(205U);
    msg.setDestination(13831U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.919553738281;
    msg.lon = 0.86070046353;
    msg.depth = 0.456889642371;
    msg.roll = 0.933056900848;
    msg.pitch = 0.930042908885;
    msg.yaw = 0.611455209845;
    msg.rcp_time = 0.364613818665;
    msg.sid.assign("ZCIEWKXRKDWVBBPDSARGYSQIHZFDMQUANZYRHMJBXOLIJPSBXDPNUVCLCWXFFKODXJGEFYZOIVLNRCHPJRQHVXMUTSEVRBKACZXTOZAWKPNTTPHHWENQMOQWYMOUZFSFWGWTDEAGZUHFCJUODLURCWMVNFDNKSUBVTCITHYMIJLPIFNEPTSBIEQLSKVBARX");
    msg.s_type = 102U;

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
    msg.setTimeStamp(0.345741346641);
    msg.setSource(28251U);
    msg.setSourceEntity(154U);
    msg.setDestination(41420U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.722794607199;
    msg.lon = 0.250043946545;
    msg.depth = 0.08143252144;
    msg.roll = 0.435941523047;
    msg.pitch = 0.813628173646;
    msg.yaw = 0.110514618501;
    msg.rcp_time = 0.791722220133;
    msg.sid.assign("QIOWKLGDAVOQWFGLWYSXUXZSJXMOGHKWLNYPWBUCGWZFNOTZDOTCVYRQNYBJARMN");
    msg.s_type = 58U;

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
    msg.setTimeStamp(0.0578839780444);
    msg.setSource(52422U);
    msg.setSourceEntity(43U);
    msg.setDestination(17457U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.82726366973;
    msg.lon = 0.320330901319;
    msg.depth = 0.510884345009;
    msg.roll = 0.043618567291;
    msg.pitch = 0.520724704734;
    msg.yaw = 0.697913323962;
    msg.rcp_time = 0.562365633899;
    msg.sid.assign("DPPWXMMSJRVBKGTTCESCQFLHBEGFYVMONEJQCIKZQMQHWXQUKUKRGICUVLANJWPNBRFUA");
    msg.s_type = 12U;

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
    msg.setTimeStamp(0.0817634737741);
    msg.setSource(37827U);
    msg.setSourceEntity(232U);
    msg.setDestination(510U);
    msg.setDestinationEntity(192U);
    msg.id.assign("WXYMJSIOQHUPKCXQWLZIFZRJIHLPLXOLCPCYUEGBMFXSJWTVJNJZDODWAVMIQOFFNBF");
    msg.sensor_class.assign("WOCHQSNMDJFTKAEHJDDGLGXZU");
    msg.lat = 0.711605436444;
    msg.lon = 0.270097329729;
    msg.alt = 0.451433216118;
    msg.heading = 0.540321386382;
    msg.data.assign("FETQPTZPOJHMAVTEXUZKQJASGBJVQMKSNZMAZLGXTBUYKMAXGLRPKGUVCDFAAOYFYLRDBRILOVELBYYDFFIRCQKFULFPLZHZJBCHSGMCPBTOGCWTWITPQ");

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
    msg.setTimeStamp(0.319309882801);
    msg.setSource(44531U);
    msg.setSourceEntity(75U);
    msg.setDestination(13896U);
    msg.setDestinationEntity(54U);
    msg.id.assign("LSIUZWDQCHEFWLKERJVXBCMHBUGONJJREOKOQHDEJIPLPAERABBQIJSWAWIYEPTNNWNYOUZMGMSTCXTFODHIWPSRNSHXPYZIQRIAHDLZHPMZVXLMUMKKDELQVTTAGQRYAOXLXVWFOCDLSFBCVHTDIBRKJBEQUNXORHDNWGLJRKQYUTCAZSCYGKKEIFFWUOHZKNWADQJGBPPSFCGMYEZVYFCVPIONXTLAMGVMTDTGVYFC");
    msg.sensor_class.assign("QAKKFLCGJICBCOEKDRJFUDGBJOPMLNZIAOJVBMEEIPEFKRELCIIYGQUPTZOYVOAJFPAHDULBNTJL");
    msg.lat = 0.673712715007;
    msg.lon = 0.322282955678;
    msg.alt = 0.978985434872;
    msg.heading = 0.767909229685;
    msg.data.assign("QBPRSVKVONYISGEWCXCLFPNDPQFKMQDQSYBOJVWJMFOXJPFUYCWCCZSTGZIDTSTRNUSJGHFNKXKHALMNOGPMZYPVHWHECPKENVYEUOPIDLRZLENWBCFLRJXRXOZRTKRGVBQXJDZZWYABGENCHHGXQI");

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
    msg.setTimeStamp(0.144772160261);
    msg.setSource(14048U);
    msg.setSourceEntity(92U);
    msg.setDestination(13804U);
    msg.setDestinationEntity(169U);
    msg.id.assign("UYMKJWUUSJXOOYNLTVYJBYDWCIIDSQZIKPCKZKLRNIMLWXOWIDYPGAPTBMNFJYTESZUHKRZTQCGUJADSLOTTNQDDKRADIFSSNXEMNLQHFPBSEBIMMRMYZNKAGHDDMUTVWLPJFWXKQQKBCHBECRYYBEGUQGIHRXPZVAOACWERTGVHWELUFJWLHFS");
    msg.sensor_class.assign("TVNVZPKEUHQYAEUPIDVLSEVSALQYBTVEIFPPBGZPGRSLKFDZSRTIB");
    msg.lat = 0.820609270075;
    msg.lon = 0.801789321358;
    msg.alt = 0.538752996379;
    msg.heading = 0.282925148339;
    msg.data.assign("JKJKYBVTFWYKTHRDQIVGQLPWERNAEPWWJFRALXTCMWWHBLALUYLNGXGITZLCCIJBYAVLZNVKHDPEJCQIBSQMBVSPCPMMMNZHKQUTYPUONXDZCCMFXIXHDXULMOAFBZEAVYIVPNSSGLKEIGBTODFCPXYSYXMHBAUDIEFRGCAWGERVHSWPAXOVOUKORESJZSYSZFHTTRHTENKFJCFJTIZUWOPQZMBGNDUBRDUHAO");

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
    msg.setTimeStamp(0.265064564821);
    msg.setSource(61249U);
    msg.setSourceEntity(164U);
    msg.setDestination(35843U);
    msg.setDestinationEntity(14U);
    msg.id.assign("YMPLXJNHPRIZDUBKAVSEPMDAHLAVLUPBLTHIVAWITOXQAXCRTLEOGNCFUQMLRMHWYNAGTRKQVYNOZLEZESEZGKJBODSMOLPARVZMPWYVFDOAVEGCTZTSYITOSBLJSOYMAGRXKYTBUFSSOWHYIVLXBIEHCBSCZXWUPWWKBTWDQCIFXNUFHNIPCKZRGWCFZJSUNHBGNQFDYQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ZERNXKHRRFIWLDUAVSVBEAIWCQWIDHVZJZEHIFDKKYMNBEBEARXFXPESTXUFNFLGPCBQVYQNMNEMQAYUVTUFLUSAIAUDCHVKESCHTQSHMLMYJVOLUWJMGOWWTZRFLMHPOLCAJGJQXYQRSVGFPGHKXERTYYXDRBWJBOYYUGVZCKGCKLDKCIFPJRUWPNHITZEBPWGNHOOIPDBR");
    tmp_msg_0.feature_type = 202U;
    tmp_msg_0.rgb_red = 221U;
    tmp_msg_0.rgb_green = 172U;
    tmp_msg_0.rgb_blue = 161U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.216446706324;
    tmp_tmp_msg_0_0.lon = 0.295171601226;
    tmp_tmp_msg_0_0.alt = 0.387607470952;
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
    msg.setTimeStamp(0.381389524468);
    msg.setSource(59956U);
    msg.setSourceEntity(228U);
    msg.setDestination(12162U);
    msg.setDestinationEntity(64U);
    msg.id.assign("FRLYEBYUBADKPRYDVXISPJXQGAUVCBWSWIUAMCLFROMJHJHTPZGLKNTYANKWTVYSUUDZSOZSZOEYDMJBCAXEZGVQWNPMHAOVDLPXBHWKQRCRHIOXBQLQHGNZQYUKDTIAHZIXBYARGJSITNQFHGCMPIFONGPULICOTDQSJHLZGTRLXDXDNLNOEUOAYEVFKEKMEPGCMEGCFVWWUDVPRJJMIJBTYTMICUFRMTBZVWFWFPKKBWEQONNXVZQSSEJFX");

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
    msg.setTimeStamp(0.603809577746);
    msg.setSource(20741U);
    msg.setSourceEntity(76U);
    msg.setDestination(3882U);
    msg.setDestinationEntity(8U);
    msg.id.assign("BSMVTORDVMPUBTPICAHHJAUHFHUTBYJYIYYTUMLDVJWULLQKGCWCWWGXCIKTPCNZAZURSOPOAYDAYTNESZRLOBOCKIKOVUTKFUIVBFXQNRQZQJEUIPCINFYIUJXMKBGFVWELEFNBTWSRJFAGZSSXKNLENEBLYNNGHVFZVWCSHDGRGHQWHBDEEAYDBWGRLHJORQOCXQYPRIPXZTDZSOEPDPXKMFDOTCH");

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
    msg.setTimeStamp(0.368656999317);
    msg.setSource(8926U);
    msg.setSourceEntity(87U);
    msg.setDestination(20500U);
    msg.setDestinationEntity(24U);
    msg.id.assign("XUCXLHVFAMYUGVDIOXLGEBZJMLGEBDITXPAMWWOHNBLPOZZXZLYYBBQTAHXHRJFPSTI");
    msg.feature_type = 163U;
    msg.rgb_red = 104U;
    msg.rgb_green = 153U;
    msg.rgb_blue = 159U;

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
    msg.setTimeStamp(0.837300886584);
    msg.setSource(21465U);
    msg.setSourceEntity(218U);
    msg.setDestination(43251U);
    msg.setDestinationEntity(102U);
    msg.id.assign("ZZXLTQFZKFHOFBDIVXCCWASXXJUAZBBKWMBGPLDJOHMCHZIGOVMGJPTTDVUKLVEILWEHHTPEZTAOLYOQCCPEUPVOJNCESNRQPJRWPYCGVQJDUAOMQDGHWKDSXLXYDQSWIOYRNHTSDBRFWFOCTNHZELAGFJFPKXQLXQUFCWYDOAKFN");
    msg.feature_type = 244U;
    msg.rgb_red = 57U;
    msg.rgb_green = 132U;
    msg.rgb_blue = 185U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.824152117768;
    tmp_msg_0.lon = 0.218421623843;
    tmp_msg_0.alt = 0.244583067388;
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
    msg.setTimeStamp(0.673912759342);
    msg.setSource(54933U);
    msg.setSourceEntity(224U);
    msg.setDestination(41392U);
    msg.setDestinationEntity(245U);
    msg.id.assign("DJGQBHJKDRCIXJQOMZEXEULRTMITTRNGQEYGBUFDIVGTOEJKXIYFCTLUTZBHYDONKPOZAQFVQOWQFKNAWNKHFZPWWSCLLFMABMCVZWJHJBMG");
    msg.feature_type = 193U;
    msg.rgb_red = 32U;
    msg.rgb_green = 205U;
    msg.rgb_blue = 0U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.591209691826;
    tmp_msg_0.lon = 0.0357405155957;
    tmp_msg_0.alt = 0.472081597904;
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
    msg.setTimeStamp(0.127369258986);
    msg.setSource(34729U);
    msg.setSourceEntity(18U);
    msg.setDestination(7617U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.281004126739;
    msg.lon = 0.158213314777;
    msg.alt = 0.573661338827;

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
    msg.setTimeStamp(0.384532708184);
    msg.setSource(37597U);
    msg.setSourceEntity(35U);
    msg.setDestination(15149U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.00492675564352;
    msg.lon = 0.848321332104;
    msg.alt = 0.11678449422;

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
    msg.setTimeStamp(0.339775611351);
    msg.setSource(17272U);
    msg.setSourceEntity(85U);
    msg.setDestination(15931U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.0550142455685;
    msg.lon = 0.0888206812198;
    msg.alt = 0.00712306911081;

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
    msg.setTimeStamp(0.478944160264);
    msg.setSource(64357U);
    msg.setSourceEntity(153U);
    msg.setDestination(15568U);
    msg.setDestinationEntity(120U);
    msg.type = 30U;
    msg.id.assign("PMNERYRESQCHNOKXAUFGYQBMFZ");
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 30U;
    tmp_msg_0.mnames.assign("YZSOYBJDUHIUJJQINNPRAXQKBUAWWCGJGTYLUAXLVPQFSKTZDQCRFVJEXOXWIWVFGHNERBHDIQWFWRLEWSBJEOIKKSQAGFYPGDGXFEAOVLPHNNUHMWVYCPHFLEDAQNZDBDQOKWMERVUMOZNYLCRXMBJKGCHPXKBHOXLMOQSKAHDOUHYYABZMZPNGNIFQXESGEUVRWCEMPFMTSMIDZUYGMFSVTKJCABYPTIZCACJOVJTLCLRVTTTTZDR");
    tmp_msg_0.ecount = 179U;
    tmp_msg_0.enames.assign("PGMKDBWTDIVAQZXRREHPLRXKCKIORKFPDMATVYTYTTVTSNDZNHGSRLGOKIBLCAHWKWJYQULVSIWQZYDPNWISXWWNIMLGCHTZJMJFEMUSFHUBJXBPHGZBAUXNAEPAAVMDZQBEJUZCUZKVHXYXEHAWDEBIORUFCYNGIELZGSDIJPQJSLNFOEEAYXQGDOBFMXOBSQQCVFTSOUKHCMULYPWQJTKX");
    tmp_msg_0.ccount = 190U;
    tmp_msg_0.cnames.assign("ZJYSDBPMEFXEMSJVODCAEBDJWBLWQNWHLFFCMCHHIXJEMEZAABEVIZTOGTGUWDWNZPUODLMDFLUJGPYRSHIDOTQSUGNNBCUYZILWAKQZRYEHHLAAXEIPGCXYFRQAJVCLLBCJSTMLPKZEXHDNJXPRBKUMNKPAZVLOTHTONUAXWQGUVURQZRKROTYKKNRMBVFOFXYVSNGSPHQPIASGISJQVUBVDCEYSTOKWCNTMF");
    tmp_msg_0.last_error.assign("YSZYCOICINYQRUVZPHDESXKKPOWQKAEVZRMITEUWPRXKBLMACOJEEZVNHBAYALVOHYSENKILKWJZGOJQVMVYBBJHQPUKIXWRTTSJJBTHCGDXXRCTMWFQBVVLNKGMRDJZUUGMF");
    tmp_msg_0.last_error_time = 0.828965591663;
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
    msg.setTimeStamp(0.781094719514);
    msg.setSource(12420U);
    msg.setSourceEntity(221U);
    msg.setDestination(27674U);
    msg.setDestinationEntity(188U);
    msg.type = 153U;
    msg.id.assign("TVICQXBVSHBZLYXAIWQZROSLWWAEZVOCKLNPCIYTWCOSGKBIUSFGHMWFIVHCNDODQBXNQRTDSABTFQYSTHZICZMLJSNJLEEVZTXJTOYJSODCRXUCJAJPWGEUAGENKFUIRJHRQPKGWYYCLVALGNRUZDBPKHYMBUEHVNGMMJKJSRWFMIGTZDRQEBWDKOXVEPMDLCLYFLPDKMPFXXUEVUPTJAVHNORQOBGRNIOXGYUNXYBHMFFAAZTDS");
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.899789472753);
    msg.setSource(61018U);
    msg.setSourceEntity(129U);
    msg.setDestination(16746U);
    msg.setDestinationEntity(197U);
    msg.type = 68U;
    msg.id.assign("GVCTDQMXQYLHXBXNKMKDLHVBNRNJSPCIXHJFKPOYAJNGFBFGRGEKSIYGNUBPNEHOXVMQBIVCYCFMBLFVIJETWYWZYSTNIAXGJDGZBTUXZRMS");
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 557074756U;
    tmp_msg_0.state = 35U;
    tmp_msg_0.error.assign("DWEXPLSVVFZKHXPYLXRNNOZGPBOWEBXFZGULXFLAINKPKFQUXCAZUHCOVMMEELEHDROF");
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
    msg.setTimeStamp(0.98622530319);
    msg.setSource(55756U);
    msg.setSourceEntity(46U);
    msg.setDestination(62106U);
    msg.setDestinationEntity(53U);
    msg.localname.assign("YQAUDCAOFZRHMRDFEPSWWSDXUEIIAEAKVLHCHMYMLLPLJDCEPXLGTRBKBYASAZHLKDHGEGMVCUWBZINZITFKDQUZSHXSPYFSXTOIOGSXVQV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EORBASIOITNP");
    tmp_msg_0.sys_type = 190U;
    tmp_msg_0.owner = 40022U;
    tmp_msg_0.lat = 0.147000108335;
    tmp_msg_0.lon = 0.13964589336;
    tmp_msg_0.height = 0.358070386381;
    tmp_msg_0.services.assign("HUGEWASXFLVGTFIKNYSSQFCAIDWIMADZQCIFPJOFRAPZGGYTYULEBZEZIHKWPUDANWXDDMQLHFZVQBAWKNGYHETUMHTTXEJGZBNOQIDTXRGVXXYJDHOCWEEABLLJQRSPQZQWCDYBVWRKOKVRPCOGJSMRUJHEKLINXSKOPGLSIFXKENZBNMYRVMSUFZRBHTBMRIHCMDWQNCPKNUVCHAVJYUMVOSPWTQZTKEIGJMJALBOPTVDNLOYRULSYCP");
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
    msg.setTimeStamp(0.847302702261);
    msg.setSource(7431U);
    msg.setSourceEntity(124U);
    msg.setDestination(47910U);
    msg.setDestinationEntity(247U);
    msg.localname.assign("GMOJLVQGIIQRDOBEBAFRASWPYMAGEYEYHLMJPXNCTRMDSWWICVZISPJFDXDICQAWGSEQLSXHGMWMTRWQKFKIZPLONJSUKTBPSARRC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TCSYOEKGWBIDSNULUMJCKQWMPQXZCOMPWLFXWYSJRQVHAENAXZGONUDAZYEFRAAKHKEKDTZJXVEGKFGIXJSIFFBFOOJGLYAWKPHJPLKDPXCEVSYHDHBGIWRCTPWDNNMHBDHUQFEOEZGXKDPLSFHCLCFMNZIZQASIVDRRILIBCWYCURTWNT");
    tmp_msg_0.sys_type = 197U;
    tmp_msg_0.owner = 11568U;
    tmp_msg_0.lat = 0.207784174838;
    tmp_msg_0.lon = 0.727435713708;
    tmp_msg_0.height = 0.888891443735;
    tmp_msg_0.services.assign("ERXZKJTPMRZHHGDYMRPBOUCSMAJTTFBIKTKFSRHMSOCGNXXDOIAQVLXCIJDUIVEUUILNAHLYIJAQTWYZLDADWFDVTFWFWGNJMKUHGPFVVUNZBKQNOAZNBIGOZTVNECSHLCRQEGWIZPRPIOMXHNCZFXKJDVYGEPSQUJVLPUAVOWPFVRQRAOZYQSYULLNDUSOGNBJXFWBKHCKPXBJGMKYS");
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
    msg.setTimeStamp(0.791753251762);
    msg.setSource(22023U);
    msg.setSourceEntity(13U);
    msg.setDestination(17061U);
    msg.setDestinationEntity(41U);
    msg.localname.assign("RPDYWBDMLTPBJORCCJCRBUQNHHBXLQKUCOHIPJKEOKVWKOVIUZVELXHMTYFNZGMICYABEBHVYNDDEJPHFTXBZZDGQLCFXIGLURFORXDFTKXJWEZAAEHYMAANEEFTDWJFGYSGUMYKGDLAQUOV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TVPUJCGYMHUKG");
    tmp_msg_0.sys_type = 44U;
    tmp_msg_0.owner = 60536U;
    tmp_msg_0.lat = 0.429383077732;
    tmp_msg_0.lon = 0.538151939903;
    tmp_msg_0.height = 0.529614267304;
    tmp_msg_0.services.assign("MOMYSBXLEYVRGCMUTGJBTRZZOLJTOXFZUYFVDSJWTRSBIFAKGHYAHBBFXCPSLXUV");
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
    msg.setTimeStamp(0.816611699732);
    msg.setSource(1447U);
    msg.setSourceEntity(83U);
    msg.setDestination(16771U);
    msg.setDestinationEntity(178U);
    msg.timeline.assign("JLNLGSQLNDFTYOEUCTFHRGIMXCGHQCEHHHPKVRPQDVMSYYDEUWISHWAKTMJXOZRUAXMAVNITDAFIOLOJHUKLAXXOEJYQUMJBSNSBDKBSWWCL");
    msg.predicate.assign("NJRDWOEISJNYRVUSQRPKMXYGAKNFLIHULMTGCNWVXCFKMEFTDWHJUVDCNGPDBMHSCFNMAYXAZTIVYBULRYSXOGHBRJMDBWKDHSFVMFPLJYEAJMEZCAQIOWZAQCSQYDZKXCUS");
    msg.attributes.assign("CINQBFEHOCGLWJQYFSYWCTNAXPNARFZXNADMHZKMVESGJDPPIDIIGEYOQMEHXABLOBHLGXCTUEGWFYFSHTGQDEWOJXEJUPZWETVZAKZMTLQLJQBZUKCLXJSLLVBCHDUIEIRSQYQFOUAVNTDHZRVCKTDFKSODLVPBVINRURMTZBIFHJGCCQIUXWYFQSMKRYABGYPZPKWNGUPRXNBWEVNNYRKJCIHKXSDWKRHTARBJVAODZYLU");

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
    msg.setTimeStamp(0.0542712559235);
    msg.setSource(31442U);
    msg.setSourceEntity(86U);
    msg.setDestination(55161U);
    msg.setDestinationEntity(85U);
    msg.timeline.assign("WXQNYPZBXEWJGWMVIKNHISTELQVWTUQEGKGGBNTLBMIRKJIJUZXICUHAKEDXHMVOFRXZPELOMABLAVHQHPZBAZAUSKCJYCN");
    msg.predicate.assign("WUBTLXUBQNEWBZLQRFJPYGSYKLQHSRHRIOKBVECCUXMSPKPJGGVRBIZVUMHZKMNLONIJPGKSKONRHSEPVFVRXYAPKDCCCVDYDAEUOVBHTLLZGZHZAOWEMAIVSEZHYIYOHPYXALOXNEURUWUTSOREWCHDCGQAXTPDPTNM");
    msg.attributes.assign("OFKLADWRDHXHISICZPRHCKMMJQLWERWZJGROALQUCMZTVXGZGGNVKPVMYHDJQYXHLCQKYPTPWVLIKGYHMRURTLXPZOIC");

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
    msg.setTimeStamp(0.0176957356713);
    msg.setSource(34852U);
    msg.setSourceEntity(93U);
    msg.setDestination(45643U);
    msg.setDestinationEntity(197U);
    msg.timeline.assign("HWKBIJSDAZVRYPMXGCCBDEOUYQXVETFWHIAWUQYFFVDOMMGUNPNWWBVXIYMMJPVISBSAGNQBFTCCTEGYONXEHJVCDECRANTQGYKQUXTFFMFUIIKKSRWBBKLTMOGPTSJTAMGXEPPYLORWVFPYRCUUE");
    msg.predicate.assign("STFIIAENVQXPIAAJMSUUWXVYSERQOKCRZKAMGNJGGNUZJVBYNDEOWDTSPZCEDTWARJBWFPHMHDPTGGTLPHTRBQFFMPOHDFFPZHDCYQHQJWSH");
    msg.attributes.assign("ZFPDLTYBNIUWUBXATLKETBUWJMNCOZMZKFGLCOHOALTNVYZQWCZVXLNDRUBQKHUAGIBRTEHRZWDGNKNFEAROVTEDBCUJJKCDZQFPYUVBICOOSMZYJGRWJBD");

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
    msg.setTimeStamp(0.0898321487633);
    msg.setSource(61977U);
    msg.setSourceEntity(15U);
    msg.setDestination(31524U);
    msg.setDestinationEntity(122U);
    msg.command = 18U;
    msg.goal_id.assign("IWPTOPPYKJUTEDMBUZWWRIVHGJRZMMMETXHUVIUBFMBBFBSBDVXPQZIHGVJNKPBCLNJAASLSGFOHUERHZHMNFMWVRQZCXLZEAPQFVPUNNEOTRYZVIWSNJICNCAAMGEWQHUSIOASJHERPVDKCZBZRCJZXKKFYGDRKCTQARDHXOLQXAHO");
    msg.goal_xml.assign("ZUALVMVLLYXTYGZNCOJGPAURMKIFBOCMHOXEAVFBPRWDYPSMRFNIBHWNZOFSWLPQCXCJCQYLUEPGNQSBGFEYWTMJQHRAXOHIBUMEAINXRSRWEZXVTNS");

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
    msg.setTimeStamp(0.0103777244648);
    msg.setSource(22110U);
    msg.setSourceEntity(54U);
    msg.setDestination(579U);
    msg.setDestinationEntity(241U);
    msg.command = 106U;
    msg.goal_id.assign("TDKAXJDJQNPATASQVIVRYYTTTMJIZJYXHTHKCMDRRZLSUQHFHYIIJZCLGWXMRETAQFDCYEHZENWELDHMHNYNVSXULYTGOZKGQCAOSBUIUBMNIBDMCOOWUCVJMXEUPKZQWNRYFUSVQCZXVLYNYGGNKCGAOOEQQBFINQZBKRJPWKARSORGEZFBKJJVLVEOT");
    msg.goal_xml.assign("MLPJBVCLVQAOSEHPBMKJIBFRGKFRDCLDUUNYFWLCXNNSIAYSZPRWUCXGYIZLOPAUAGQYLQDMTBMQHNXMMPDNQJHDVTVTLPGHTEPFCISJTCZCHSEUEUFVTJVRYBJTEZRUHQBEOOZJIEZWNKFWIOGYQPSMJZSQXNKGHJLGVFMDWCLYXOSBFEANLHXITCKTODRJIIDWNAXEZDMRCYOOTSH");

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
    msg.setTimeStamp(0.510694755216);
    msg.setSource(31116U);
    msg.setSourceEntity(122U);
    msg.setDestination(46310U);
    msg.setDestinationEntity(156U);
    msg.command = 223U;
    msg.goal_id.assign("CWNWRJQVPFCFNAYHCHQEWBVTXVHXMUQZAQIOINVDBFNOJBYVVOTZWIDDKSNQZOUKJBZGDRSASHMOXBVWVNDUUWCXLELFGLGQCRWQVHNMHCKBYAVKHBUGAMXOEIESXKPGUFDSCJPZEPYIAKNRSETWGCNDNJZMEXTGLJKXIDTEHSLHRCBTADUKYUGPOSYDWFITQQPLFMRRKSRFOEPPLGJOTARPFUZPCKILY");
    msg.goal_xml.assign("EQUJXBQCKNRFADDNDKILERTOCPAZWUSTFPFQDVWIVJOCXSQRVQIBNGXAJQYXSTODWFSHLBJANGBVNKSYZVGPYYPLZCWTZSCVLVIFFIOOTHIOWHGLMWDSKHRKAYJRZLBSPGRTXYTAAZJDUGUZFCZPVHAPPCAKIUKRPH");

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
    msg.setTimeStamp(0.856685513779);
    msg.setSource(47825U);
    msg.setSourceEntity(111U);
    msg.setDestination(33876U);
    msg.setDestinationEntity(155U);
    msg.op = 38U;
    msg.goal_id.assign("QIVOWMQKGNUITFYDUWOPISQRIEBDSLZYCJVKCQIWTISIYGEBVISSKUJMXNRQWFYJYVAEPORRMMUTCMJJMFAHIYWZENCTOQSZALXNKTXOANWWXJKMK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YTKMNPYZGIFHHVNQAGOFAIMECXNWOJGJRMGQWXGUIKNAEURBMVCJNIRVLJPTXAELXEEOKRWRYZCHQSZNEKDHVUHLVUIFFZTTIRACBCXTVZJDDSSWLIKDBGTEEPMHNDOFHYCMTKOHSUZOQMJBRPYFWNZQ");
    tmp_msg_0.predicate.assign("LWSTKICWHLQJVMJO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GFDWQYKWOZWFKROTXQODGJYMKSQPENZUMYTKVTPIVMPKNXGOSQHECAHXNOSNGIZVZCGCWEJLLNUBDJMACSKZNBDSPRKNQRCLUIQWTGBIZAWPFIXMOLJMYQTAILCTY");
    tmp_tmp_msg_0_0.attr_type = 83U;
    tmp_tmp_msg_0_0.min.assign("GBTGTUVMKZDKXARUDVRRWWRSRAZIKTCQXLUZIUHDDCIJQXTBGXRYQGS");
    tmp_tmp_msg_0_0.max.assign("PEMZYLLMFKFHEEZKATOFHLVIZJTIPIGTFWTDRCYJEDXWRWWYXSGBAZRWEGFEFPSSCQYIQWMXLZQELIPDAHZTWKKWTNDWKEVOSQNODEMALIFLSMGCCXNOFVPHVOMRHHYQCAVZJJHBTNKOZXMMWGBTTYJSLKNYXGRIHDUNSQCUSAXPBCVAFBCSUGCOASUZAIEVUBQGJDUOPFVKBNUI");
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
    msg.setTimeStamp(0.816096492985);
    msg.setSource(35394U);
    msg.setSourceEntity(83U);
    msg.setDestination(37796U);
    msg.setDestinationEntity(191U);
    msg.op = 242U;
    msg.goal_id.assign("IYGZYUMAHRGGEIZOKQUEKJDBJKMHCGWMMCBVTSCXADEXFQCYHNOYKZLBBLEDMDSHXIPWXPLIPUJKPYZTKTJVOUF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LUTERXTFAZVSQVGQGSNORZJAUIULUIVHPWVDHZIYRYGJNDYWFOHPPFSCQJVQBNMEZZHJNKYOIADYQTHIZZCBUBVESEDRZRBIXHSCYOWNADWXBZTUXRWQTJQRBIBDAW");
    tmp_msg_0.predicate.assign("OAYJXITTUEGPENOKXTBXWBBPNXOJOQADNCPZMTPFYHLCSUKWCCCUCDHQSVJVOETXJWCDZIJFVMVDSCJWXZFKKROJPZUHNQISBWRYURUWGNYIHAKDRZCVOQXQAYLIGEYBHRMAMKGZJTLWLZHPPTSV");
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
    msg.setTimeStamp(0.160670939675);
    msg.setSource(49981U);
    msg.setSourceEntity(177U);
    msg.setDestination(60486U);
    msg.setDestinationEntity(186U);
    msg.op = 151U;
    msg.goal_id.assign("PKDSAHKPETYGLZZVCBGCJVQVJRJEZRCDNMWICHUINABWF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DEZYAFMENHJTAHBSVWTLGIALZHBGCDB");
    tmp_msg_0.predicate.assign("KSUVZFRCRZLHDVTVPWUQADEICEXBVBENZASODTBDYQNPJSAKDHBRGSZWVCSFAREYHFDMIPWHSXQCLUTWKWPQFESZXAZYVTGIPYQRNFRNGQJLYRMZLSUOTRUWAJIOUGIEKUIJAXGBEEAFWBOONPITYWHQQLCT");
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
    msg.setTimeStamp(0.49449776189);
    msg.setSource(36533U);
    msg.setSourceEntity(15U);
    msg.setDestination(47966U);
    msg.setDestinationEntity(197U);
    msg.name.assign("FKMALWELTHL");
    msg.attr_type = 64U;
    msg.min.assign("LYGPINMKEWKHAADIYNXABUOBRSJMFETLRVPXIRCDZISMTXZFDNMWBGXNEVNXBUSKPJGERQLCQLYTRVVPDBVGKGJFDPFYNZRJEALBZDAYKKVVWMZPLUCHUPRRGJSCZNLOCGTKHJFYHPMYTO");
    msg.max.assign("RYAMXBQXZSZFEXPJNINWRZNNSHDHVODLSNM");

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
    msg.setTimeStamp(0.991801785184);
    msg.setSource(62439U);
    msg.setSourceEntity(159U);
    msg.setDestination(33933U);
    msg.setDestinationEntity(39U);
    msg.name.assign("LMYKJYYBARUSHVLVBWLLOGYCKVWNZYISEACOKOAQRBKXADPUIBKVAUUMQOGVJSJGQFITTXGRBCPKUVWOOKDNFEFNQKEWRZITSPJMVHZFHGTMNTGNJYATDAPCSMVIWYUYLTWLFRICQUDAWZXJADJKFZLMSFNHEOGZDBRNXBCINEGZWBXAEUKWFGUWVYHLXRZBYPGFLQHXRZSLCMSQCISNQTQHTXXQDOONJMRM");
    msg.attr_type = 171U;
    msg.min.assign("MNLFNUJOUYPXSRPSBWLMZREXSVABOPRUKMBYIRMEKHKSUYNVIHNXBYISQFOGXGPWNKDCCHFDTFVJZNTLEOGFCAFSZYVYLRQKICEPJMABGNDQQRAWKBYXQOKGHPJTXKVTOCJAOVYWPWGLHZLJLDIOIUQUVXOZ");
    msg.max.assign("AFHXJJKSRXXVEFQVNPRSVUOWUDCTRKGMXTZVFYGEQTRYRABBHTPUCBRYKIOOQWSXHDPNZAJTEKHTWUNUSGYOQDPYCXWOCMJG");

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
    msg.setTimeStamp(0.131888772871);
    msg.setSource(27691U);
    msg.setSourceEntity(201U);
    msg.setDestination(59509U);
    msg.setDestinationEntity(4U);
    msg.name.assign("VVKGCKWQSYEGZPJDJITCGNFYWUMRKTYTHLVQIRJYOWPKXQKXDAGFLJEIFTANAIBXSNLZGZUEYQZGFJKHWODMYPDNBNDSKIAKRUPLXHBTKRRHGNJNWDAUOCPZORCMYQHUHVMTFWWLPDCMCTAVUEIBHQJCZAMWHQZYPVDXLZVF");
    msg.attr_type = 219U;
    msg.min.assign("QNSPZWDDZBWHWKGCJUVZIGCTCJJSZVASBEPFHOSDYVHSHKIFRQKJKXFGJBLSOBMLDYOFFAKCLPRNTMNYILNMSCWRVMODSXYDYIEEWGUUEWKIFYGHXXMXSUQHXWLOLATLLGUEVHPUTERGKNZUAJJTAPJIQCBQKZDAPFQNAIYARBFZDBTQDNYYSPIJUXYIXZRUVWDQFOEAHVTQKUENGXMPXOLBMRCGHEBBCNFMQNHEOICGTRTMZLOZCVTMA");
    msg.max.assign("VGMVYZTBHTSGZWC");

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
    msg.setTimeStamp(0.897849924668);
    msg.setSource(34975U);
    msg.setSourceEntity(41U);
    msg.setDestination(48720U);
    msg.setDestinationEntity(219U);
    msg.timeline.assign("LUOZVAEIDFVJXJWZFUATCHSDTBYMOTVXQJO");
    msg.predicate.assign("EXKDRVADSGWYGNBIXCXWZZEZTHATYEBFPPIDNFKVIJTSJBRVQTRWQKFBWFOULCTKMZOXVVJ");

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
    msg.setTimeStamp(0.342034522261);
    msg.setSource(41686U);
    msg.setSourceEntity(232U);
    msg.setDestination(28618U);
    msg.setDestinationEntity(136U);
    msg.timeline.assign("XDWBUELKQLEZCPLHPSEZOQGITIHRBAHKHOHQXEFSNDMJYCSANDJFIRWQFMXQALTYRBTYGFKBXGNLTYVFKDWYJVVTORNEMMWCZPUNBJSBTHKNIPEQRQZIHVWRSOQOBGDUXZDIFXGSTJBLYBCUYQMJCFZVGZEZYMYNTTRSGKNXGAEOUCUUWXAFQDPRNOUAR");
    msg.predicate.assign("QWXZZIFIKCEJPAHALPYOBZVJPFAEMXHJYUKMGYLBVORVXWBKECABTLMVNGOFLCQRXZPBWEIMNIDVESYHOJMAUVSBRGZCCUHCBWKXNYNDHIRTLPICYWGKFRAEHASPPDIOTOUQWHTSBSGTLFJJXDINNLARNMGVOQZCDJKJZRQWDUDGEEXUJKNVZCOAWTUSPXQYKRSQMJTMNUVCGDADDPPGOFOLWHKZXNGQIKYBZ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HOTEBVBCMQITCUPYDXRGFJEDJOUJPSWHZPVALQAGGSKQVOTJFUVKNWQBSNBDNKYPLSDKHACVKYGNJCNODZIWXWYMUDXFSUYHHOEPNMQFWFRCNPVLHCNXGBQUEORIEMOEUPHMDGSYCXJHYQWAEROVEZIEOICBIDXRPPKNYSMGFZTTWKXXZLJKOUIJQLY");
    tmp_msg_0.attr_type = 105U;
    tmp_msg_0.min.assign("ZIEIJRNNDJRVXHCJYLYHGVKZLKNTCGBTJEEGXSSFLOMCGUHBPFRTDOHSMOJVLUIRMYRTHNVHROFKE");
    tmp_msg_0.max.assign("RMTGKELMBZVAHZKTNIVNTSFKPQSVAMNUFJEJZMWDSCFNQNQVAEPOHREGTBJRIUQHPBWYHYBLQITOUCWZBKVUZJTOXIKKFDAWGOXUCMATMWCTPHAIZRLVDFXKGTYUBRXBNCYQJRRCGVRJZVDQKXERPF");
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
    msg.setTimeStamp(0.512774169393);
    msg.setSource(28725U);
    msg.setSourceEntity(236U);
    msg.setDestination(37362U);
    msg.setDestinationEntity(194U);
    msg.timeline.assign("TZQJFDXUSUOAVGZSJXXGEVSWOPTETAHKXKOUDPTFPBRCYVAFUZA");
    msg.predicate.assign("NPEHUGZWMKOXGHAVHRBZEHLVMOAGERUIWMZZTBRDJTXFMEQJUJXREZRGLLAFXXLKXHGKTDXAAQCUDZXIQVHJYPNYWLDCYMFYLEAFOIUPVUEMBCOWIJILWET");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HXFJWGGOETZRRUIBYNFLNICGJAEABZSTFPDAOEYEUUALJQYWJTAQIEGJYWTVVRKAFMVOXJFDEPKPZQSIJQZVQRWKDCBNOBDGCGLPZSHVVMWYWNZYPOFETWVAMNGDQCFPCKUSHYUOLONNXCYUWVNPZELSIKIBPKVHYNQXMWEFKPTUUKJHCRZFDMMPBTLTLRCJHVBQFQMXHDOLDXASRLBH");
    tmp_msg_0.attr_type = 164U;
    tmp_msg_0.min.assign("JDMNMJWGYOHKFFGEWSZYZMDCYUQAIHRUKPIKQRERDLNIFMTPLUABZORLVTRLDHHRICIVRBPBGHDTUFIEESYOKFJAWXYAF");
    tmp_msg_0.max.assign("VCILATOMRKYNSNJSHCJNCIGFLFMIGGPJGBPUHQDQGQMREJDOAVEIQFBU");
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
    msg.setTimeStamp(0.3049225441);
    msg.setSource(27962U);
    msg.setSourceEntity(40U);
    msg.setDestination(21664U);
    msg.setDestinationEntity(28U);
    msg.reactor.assign("CMLMYGBEMAPNUTCTKHYFVMBEXZRPHKYIJPHSETOUAIMZHXDWVFRVKKCAXGCNVABFUHPQCAWJELHRAXDFBUEHTZPQUPXDORZFRDXUJBNEWWRPTJYGVTIWRATTEWZOBUDOTMVNNNDPBZAVCVUGZQKGYXQLJKOFSERYVWRSGQLOLNKCOFJAESVKBKSJGSPFLLYHOIGXMCFCMJQQKTQSIGOJZRQSZWWINUMG");

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
    msg.setTimeStamp(0.138474688688);
    msg.setSource(24641U);
    msg.setSourceEntity(120U);
    msg.setDestination(53957U);
    msg.setDestinationEntity(89U);
    msg.reactor.assign("DLEJVDDMXMFAISETTUYBBZUOMGVWOQIXCCFZYSZFP");

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
    msg.setTimeStamp(0.136436977614);
    msg.setSource(5280U);
    msg.setSourceEntity(107U);
    msg.setDestination(26380U);
    msg.setDestinationEntity(153U);
    msg.reactor.assign("YPDKAGKPNVZQXPKPVQSVBMGP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XTXMGYGCHNBRP");
    tmp_msg_0.predicate.assign("NKVBYPCSHI");
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.507237179392);
    msg.setSource(60359U);
    msg.setSourceEntity(232U);
    msg.setDestination(47197U);
    msg.setDestinationEntity(154U);
    msg.topic.assign("NDZVEGKQVHBPBNNOTGCIWETYQMCPBJCPZUMQTQMRKWZZKFLURENAVQUKDISO");
    msg.data.assign("DXRTUUTKMALZBNROZVPYEBPGFCAXYSSYIQHRCSWJZOJOPHRMDMPIXZVYGQOCQBGKCSVFSRAPLMTSABUJOMQYVDFUVUDECKAZNPXOFMOPGZKRNNKZPSTWIJKUXGVSYTQIGSJIPUDEOMNCYAGQQOXLDYHTEXLBCLBCRHNFSEKBTJKONWQFIHEHLZALGNCFURAZWFWZEIYKIQWWMWEAFBDBYETJUNKGXTLHQRVWHGEVX");

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
    msg.setTimeStamp(0.0454815279594);
    msg.setSource(44894U);
    msg.setSourceEntity(140U);
    msg.setDestination(31871U);
    msg.setDestinationEntity(7U);
    msg.topic.assign("DRTDZIZKDUHGXFNKTOTFQZKKEOZHDGZGANNAITQFWFVZGYUGLODSCZSPGNSBWCNJXSDAWWBSNUMSXAJWEYXWKYMCGOQMZCNXTVWPYCJPWOJJYVYIBEVNLAWTEILLJHOYCKVHHEXHMDRPNMBJRUOPRAJT");
    msg.data.assign("QKNETGODBJWPDKIJXIYPWMEQYPTHQRDZSBFIQJAPUXXEVGGTOBRHZOCGEMEBSMKNKJUYQ");

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
    msg.setTimeStamp(0.624470370755);
    msg.setSource(45209U);
    msg.setSourceEntity(131U);
    msg.setDestination(23593U);
    msg.setDestinationEntity(46U);
    msg.topic.assign("GIFIYYEAVSEMNNCEBMZLCROAVTMZMXOLYDVZOMYQCPCIYSIBOHKPDGUKGVNZECJIRUNWXUDSVTHTZAPWWPAWLSNBPHZJJNCHGGKXRFHSWXZFJHJCFUEYUTNLJRDXIWK");
    msg.data.assign("ZADOFRUFEZNLGAKGHMGQIZVUOVPOKOX");

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
    msg.setTimeStamp(0.757501094647);
    msg.setSource(65443U);
    msg.setSourceEntity(218U);
    msg.setDestination(53122U);
    msg.setDestinationEntity(11U);
    msg.frameid = 173U;
    const char tmp_msg_0[] = {20, 7, -56, -6, 48, 80, -114, 12, 74, -37, -108, -30, -50, 94, 80, -24, -23, -77, 115, -14, 96, 105, -108, 79, -82, 62, 99, 100, 50, -70, 46, 105, -52, 31, -66, 45, 97, -118, 19, -39, 64, -121, 17, 56, 81, -3, 86, -90, -112, 77, 96, -23, 49, 79, -94, -32, 37, -67, 4, 51, 112, -47, -71, 59, -70, 13, 88, -84, 42, 96, 19, 82, -44, 43, 83, 36, -97, -93, -7, -108, -104, 39, -105, -77, -72, -98, -70, -21, -37, 34, -88, 54, 10, -91, -93, -101, -79, -7, -71, 50, 39, -32, -86, -126};
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
    msg.setTimeStamp(0.432497188232);
    msg.setSource(46239U);
    msg.setSourceEntity(83U);
    msg.setDestination(22233U);
    msg.setDestinationEntity(138U);
    msg.frameid = 246U;
    const char tmp_msg_0[] = {35, -112, -69, -32, -25, -103, -118, -29, -15, -121, 68, 68, -13, 50, 110, 32, -46, -74, -124, 101, -68, -122, -36, 103, 27, 26, -43, -64, -77, 96, -30, -51, 88, 75, -96, -50, -94, -31, 95, 103, -83, 10, 101, 121, -13, 41, -4, 49, -9, 5, -1, -35, 3, 17, -87, -17, 2, 53, 79, -87, 39, 126, -18, -20, -15, 58, 121, -60, 126, -74, -86, -121, 74, -109, 25, 0, 117, 79, -116, 69, -105, 102, 121, -6, -27, -120, -19, -12, -100, -49, -48, -51, 62, 107, -86, -48, -101, -28, 62, 3, 54, 41, 24, 20, 66, -68, -47, 118, 18, -20, 42, 125, 10, 0, 111, 38, -68, 107, -80, -81, 74, 107, 66, -4, -115, -24, -4, -47, -35, -62, 108, -56, -37, -13, 15, -21, -97, -14, -26, 53, 30, 56, -33, 48, 86, -91, -84, -76, 87, 44, -31, 105, 52, 17, -50, -61, 8, 111, 41, -113, 62, 44, 5, 14, 75, 62, -106, -20, -97, -114, 126, -14, 15, 27, -32, 1, -70, 115, -105, -56, -32, 76, 117, -105, 5, 26, 68, 24, 9, -34, 1, -43};
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
    msg.setTimeStamp(0.0791993629705);
    msg.setSource(36977U);
    msg.setSourceEntity(85U);
    msg.setDestination(13152U);
    msg.setDestinationEntity(103U);
    msg.frameid = 98U;
    const char tmp_msg_0[] = {25, -23, -20, -64, -29, 92, 101, 56, -74, 59, 6, -69, 63, -32, 36, -50, -67, 91, 68, 116, 93, -106, -93, 5, 125, -28, 113, -12, -4, -86, 110, -81, 109, 91, 67, 119, -117, 64, -76, -89, 97, -22, 41, 102, 63, -86, 66, -9, -87, -118, 3, -71, 22, -90, -13, -81, -128, -46, 107, -61, 121, -23, -75, -69, 17, 121, -33, 82, 117, -67, -104, -67, 60, 126, 62, 109, 8, 82, 42, 92, 38, -126, -38, -44, -24, -27, -33, 19, -30, -82, -125, -111, -108, 107, -25};
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
    msg.setTimeStamp(0.373496941269);
    msg.setSource(46151U);
    msg.setSourceEntity(40U);
    msg.setDestination(29924U);
    msg.setDestinationEntity(145U);
    msg.fps = 100U;
    msg.quality = 160U;
    msg.reps = 143U;
    msg.tsize = 93U;

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
    msg.setTimeStamp(0.160928952537);
    msg.setSource(57381U);
    msg.setSourceEntity(206U);
    msg.setDestination(58423U);
    msg.setDestinationEntity(32U);
    msg.fps = 159U;
    msg.quality = 154U;
    msg.reps = 140U;
    msg.tsize = 205U;

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
    msg.setTimeStamp(0.322281547883);
    msg.setSource(15547U);
    msg.setSourceEntity(192U);
    msg.setDestination(31960U);
    msg.setDestinationEntity(142U);
    msg.fps = 254U;
    msg.quality = 246U;
    msg.reps = 243U;
    msg.tsize = 146U;

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
    msg.setTimeStamp(0.389139861357);
    msg.setSource(29611U);
    msg.setSourceEntity(166U);
    msg.setDestination(10750U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.494678679501;
    msg.lon = 0.0369069140819;
    msg.depth = 124U;
    msg.speed = 0.205567189836;
    msg.psi = 0.534311392362;

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
    msg.setTimeStamp(0.00736270040851);
    msg.setSource(26509U);
    msg.setSourceEntity(125U);
    msg.setDestination(50106U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.834752642934;
    msg.lon = 0.615362197274;
    msg.depth = 17U;
    msg.speed = 0.605421451504;
    msg.psi = 0.257280447784;

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
    msg.setTimeStamp(0.28928662509);
    msg.setSource(39627U);
    msg.setSourceEntity(140U);
    msg.setDestination(21529U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.0281639892753;
    msg.lon = 0.746767138225;
    msg.depth = 36U;
    msg.speed = 0.273314712414;
    msg.psi = 0.661021818794;

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
    msg.setTimeStamp(0.228455690359);
    msg.setSource(28865U);
    msg.setSourceEntity(249U);
    msg.setDestination(10006U);
    msg.setDestinationEntity(233U);
    msg.label.assign("AQTFJHDRZCIBFHKKHEPKFANEVGFTNPKQGDYHZPSZXUIHETGSDTXSTWZSSIXDEVEBHTYBJWPOYIKUZDPEZERPSAXQLIFLPNYLPRNAJXKUVNWGIUYFUTHYZXOUKIBAYJ");
    msg.lat = 0.336819033233;
    msg.lon = 0.368505660133;
    msg.z = 0.20541306497;
    msg.z_units = 196U;
    msg.cog = 0.0790485530449;
    msg.sog = 0.608940558938;

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
    msg.setTimeStamp(0.609363782873);
    msg.setSource(38254U);
    msg.setSourceEntity(25U);
    msg.setDestination(639U);
    msg.setDestinationEntity(0U);
    msg.label.assign("DKWDNQKGRCWTWVDVZULMLTMJBGHMBVDAFRZBQVAUAQWHOOAJCEGSKBIATIKXFDXRDCEWCZOJOTAXXOMYZHHUEHKJSIGFYKQEHRZVXMUYQSSPICYVVKWNGGSSTSRCAJYPDGNEBHPTTCRKGIKPLFZCERRNBUSWUAULFMNDQYZJZBDTYCJIYHJJDPNPIW");
    msg.lat = 0.197513786768;
    msg.lon = 0.849993562545;
    msg.z = 0.66678912507;
    msg.z_units = 214U;
    msg.cog = 0.173967344139;
    msg.sog = 0.690878934208;

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
    msg.setTimeStamp(0.882676156374);
    msg.setSource(7522U);
    msg.setSourceEntity(238U);
    msg.setDestination(7073U);
    msg.setDestinationEntity(211U);
    msg.label.assign("PMBOEDEJOHIRBLLEOYRITVHYEBSBXDLNODGPDPFAQZWKDTJLHUJRWGOODTRRGTQBKNSWBNCZAKOEQUBDQIYDTQSZXIEVMEXTVKMTRJSJANUNFZOCIWSFMMPNPHAFXCCIEUHHJNPF");
    msg.lat = 0.962408519334;
    msg.lon = 0.312735828702;
    msg.z = 0.813115291762;
    msg.z_units = 179U;
    msg.cog = 0.916459237858;
    msg.sog = 0.260833899103;

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
    msg.setTimeStamp(0.789387545928);
    msg.setSource(65483U);
    msg.setSourceEntity(126U);
    msg.setDestination(4732U);
    msg.setDestinationEntity(159U);
    msg.name.assign("ZFAYYVOWXHFNXPRSZKVEQYEJSVIGDTPJCMUGJYTIPJNHPNADOZIJXDJKNLOSMPQHSFYVKXSPNVTZUMTFSILSYWACOWKXIBQIEQGUMGEHBCGULAQIZTPBTFNBBROHACBQUNEKUDUWERLZUSZOHGMPEFRCPXAVTBNXTHSMKGIUXWJCFHMTLERRDABARXKLCRJYHVYVDDWONNVRJCAAWIRLIDFSWLFLLVCQOBCZGQWYQZUM");
    msg.value.assign("PJZQWVHNKINFEUKCEJTGPYCDXJBZUUKSARBZLBCCTAXLQWPTWENCOJFEJYOCAWTCGBWSVGYMGBRGIRFOAOUNXY");

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
    msg.setTimeStamp(0.651129607636);
    msg.setSource(61626U);
    msg.setSourceEntity(40U);
    msg.setDestination(60272U);
    msg.setDestinationEntity(65U);
    msg.name.assign("ATWIBVKJGYPLYTGBKBBVWFQXHQTWSQAFPMNQPHFJAGJXXZCPDDZUCMUIWPETMPBGMBGSHFVJNUJTFYDLRACZUOFMNOYCRZWEICKZKKDIWCLQCERAHUBVQSLSRNEJQQWITZOEUUBIJEMXDDLOHRKOVMDZSHMHGSPEEXHURCRENVBTKMZYQBXVTGHWNNFOPXJICNSVAYXYW");
    msg.value.assign("WGPUGEZLZLRBDIDHZKCJGXIMDCNVJBHX");

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
    msg.setTimeStamp(0.840711865275);
    msg.setSource(53860U);
    msg.setSourceEntity(76U);
    msg.setDestination(27109U);
    msg.setDestinationEntity(15U);
    msg.name.assign("MSOKNWTLPOMSHQBFTFHHDEYRXEWERVEIXFVYRUVLGFIYXRRVNCMSLXYYABAFOCGTPAEJTBKCTNZYGXYHPXGZPOWJUEULOKGSBJIDIKKSRCPRBDINHGDZBHHZBSUTAZNDCXQWQNRHWZTWFVJJWUABCIVCIUFQQJGKOERVHVKMQBIDDYSENGZAGJZAJIOPLNSLMMNZQDLFBPWLNJMDCCTXGXOUUKCSLYUMQTQFAYWLRPDEPZMIATJOKF");
    msg.value.assign("UMEKVIUDLZEAFZJVJSPNXISWUZVHGVPVAHQUUKSEMGGQCZRKAFXIIDFWLSABHYZBUJBHKBQORYRDDJQFCYMFODPFAGCTGVOTSRLHYCBFLWESPKWBKEGTBKKBPJZMZCMOQOSEXUEQYXLKUXCECWUQGMVOHWHPTDKRDNXQDWTCVPIBRGQSMYJIQHGPRAMOPXWLJFXRZYJTCYINJJMMXCTEARHALNITBXNNOPYTHSLIZADT");

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
    msg.setTimeStamp(0.765407666238);
    msg.setSource(60472U);
    msg.setSourceEntity(90U);
    msg.setDestination(36470U);
    msg.setDestinationEntity(190U);
    msg.name.assign("BGZUPAGEAHXERJBBABXDUGROEYNSMILXUJBXWJLEQIWTQCWKARRYFJYTAKTDLGZGKXMFKDNJZUASJQCLHALLKNTIRVUHEHIMYUAKRYPGVPTQXCCIONWFSHQQEFFZDVZVDNVFHTPKBBPCWEIYO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HUKSPTAXJEWWRTBWXSLFQHUYQRPJNLUBYZQCHGWUTUHSXIACARYCOUQIAMDNCMBESPPXABCZNVJHGTMGIKDWFXRGYWJJJPOISOLDVCBFPVAUYZLVEHEVYLRKVOFUEDMBJIPZUIVILOOHNLGKRJKIKCTQJBBFFONERXCGAMWBSNOWDXTUEWNFTQKDYMQMFQSMKILFIXHXKGGVDTFHAAEZDWDZ");
    tmp_msg_0.value.assign("CCDLFKENSKWQEHZASPLMEKGTKIYIKCVMSMWPHVCYXORUHUAQOCKGIHLNOTAVRNFVUBDDEYPMDBOJDBUHYENWPNFEJCGYZIPJTSQBVCDTRMQMWOVSHIRWHDQIYLJGXDEYPSKAFONNU");
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
    msg.setTimeStamp(0.480631868955);
    msg.setSource(38160U);
    msg.setSourceEntity(9U);
    msg.setDestination(38066U);
    msg.setDestinationEntity(82U);
    msg.name.assign("EOOSUARDYXKNWZSXIDESBDONKTH");

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
    msg.setTimeStamp(0.608085213179);
    msg.setSource(2508U);
    msg.setSourceEntity(201U);
    msg.setDestination(41575U);
    msg.setDestinationEntity(31U);
    msg.name.assign("NNZZALQUXOJRLGDGJMYUPHRSEVRXQWVHIEZTETAQSXCKFSKSOXBGNKOOMUMUSXNYFLDBWCYTKBTIFPWHCWYBKAOVUWERYKSFIOGCJKVHIFVHZNWLWMARDOYDPRJFJSXTUNBYLQEGBSYBTVKQLJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SYBNKDYSMDTOZLUNIZWSKUOVGUYDDLAJJQRBSXMXIHPNFOXWBPJNHWKEVRHSYNLGRBXZKEGJYLQXFXJIKZXMVPKICOVOYCFQMEAGAJUZCOPWNDEMDDSQRBWXNTLPBNZZTKJFJRPXHBCUTGX");
    tmp_msg_0.value.assign("QNNUKNMUVNZWHWOHGTZUYVFBNAMJYDCGXBMZYWQPCFEIORERUZW");
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
    msg.setTimeStamp(0.334076229993);
    msg.setSource(12609U);
    msg.setSourceEntity(121U);
    msg.setDestination(58256U);
    msg.setDestinationEntity(42U);
    msg.name.assign("CEFDVMACYQVBIKIMWMMRDQQXDXTSSUWXGLZUUGHMCYAAHJBWYYJWHKYFAEXUQPDOTGNISCDRZJVFPJKZNNDQSRSBARABQJTDTFHNKEBNZHNKFHIKYVLFYJNEZILHBYPOBIRHRYVTLFXSKCUXBWXJJISKKODQEGMUFTTGRWLZDFW");
    msg.visibility.assign("EGBEMJMQFEVCFSEKRTIYZTRQIBJ");
    msg.scope.assign("URTOYXPMRFUMYUIEEUFINJWZRXWCTCQCZQMMWDMAOBDZJKGTQZMNYADOHUXSYRXGDTAELKFNOIJMQSNCTSCUNRZJOWVYJPDSLPUPMPHXRJVVLHHETIXVFIEFVTHBVADGARZPTXTYFJWFYBIQLGJAJIEQASGPKIXAWGKLVZCYGLPADLSESXRKZNCSKWOLUNBVWKO");

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
    msg.setTimeStamp(0.387800622657);
    msg.setSource(28717U);
    msg.setSourceEntity(110U);
    msg.setDestination(15806U);
    msg.setDestinationEntity(98U);
    msg.name.assign("QQRRZUDBMIXWUBZNIUTUHQPAQBSUMLIGP");
    msg.visibility.assign("MGYXLOUZTFKTYSEBNOBHXZKIOFQNJXXPGNJBUSAWMQYCRFFXTECSRZVIDDWDMKTGNZDCHCVVFPAPWCKERIFZGHEJU");
    msg.scope.assign("QWBSDVSVBYIYBRCJHEQPUOXINCULMWGKOSJWPYBDNAZLTKLIEAMNCMCHWNHTRXFQBBSSUOMZPPJIGY");

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
    msg.setTimeStamp(0.660246551327);
    msg.setSource(31100U);
    msg.setSourceEntity(157U);
    msg.setDestination(7782U);
    msg.setDestinationEntity(107U);
    msg.name.assign("PZCUXNDHQKNDZURIYQGGSNEDWXJPATNKIXPKYAQJNSRWCBNQWTNPYTLSUVMVPTQBLYETPGVEWAIDBSSZCFFMRWIWNWOQEGUZEHHOVQLLFMCYXDHVMIUVLKOMI");
    msg.visibility.assign("TVPRHAYTGIYZVOWTIFOCWZZXWHNOUHCGBQUZSERATOGEXMNODZPLXUXKAYCKXLLUXCVIKMLRPJNLAJNHDVMATXDPYQSFAIEWBMUKHFDEWAKDCWSFAPKMRDFCWQFROEULKRBJNVOZK");
    msg.scope.assign("RRYUEDLGFCWAKBVVNQBUBGLFESHMJVEYJHLNAXFUGRMUWMQQQDZIYKORPGVVJUM");

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
    msg.setTimeStamp(0.396479429427);
    msg.setSource(10894U);
    msg.setSourceEntity(125U);
    msg.setDestination(38761U);
    msg.setDestinationEntity(106U);
    msg.name.assign("VUDDNKVDHXZBWOEOPXUJBOPCYKVYWZEPWMJSHFWGYBUDXTJWBFXXRYGMTSSNNIHAVEIVAEMCUUKWXRCKAHRDMOAFLWIQXSLDIRIHEKYFAJDSQCKLUGLZXRGELPGLZDYCYSMNMTOTPJTUBNIFKSFZJKXAFYANJPMZNLKCQRCDXIQMZGSOBGQQJFHJQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FTTVSIZPTTOJFWHBALJSCSCDVNJJAWNOVMBORXGYCRLZQSMQPENERHKCPNUSXJDMQDIHAZSQPTBFLVMLBSGCMFNHAEARBCQKHNPDAMXLYREZLLOQFXLVTKIWJTQOKKGZMSWZLOOEPIKNGWDIBQXBEYIIHGDPHWVDPWUZKXEMJAFKUGVWCVGAREYQPYBCIKFFLGBCRGXGXHXUOAWDYSVRFMHYVRN");
    tmp_msg_0.value.assign("ALUZUNFKTKVCUSIEEXTMDOULNSHWLIXNQEYLPTGWJSQHQZPTLRUAGRIPLZCQTMJPQDZVEDJFYLNPSGHBKVUXAOXGKHEMKZUJSBQDTAAVLFFIMIBBGVSMORFRYIQAVGSNWXRATZURR");
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
    msg.setTimeStamp(0.884144777999);
    msg.setSource(24014U);
    msg.setSourceEntity(54U);
    msg.setDestination(60787U);
    msg.setDestinationEntity(226U);
    msg.name.assign("PFXOOMZWUOEKMUTWVASYNHXWPKSPXAVJYKYWDMXHTPFMHVXWTURVKBEGMRPNXGIWIXTTPEVEIKCMXLGIFADSTXIHRZGFSJPTOGYQMLEQTSCZQGVYWISXQBNCJAQNDOMBRUDDOSHIGZNJZWKPBHBVQOOKNHDCYCULQDYDRBLBCBZHFYKZUFZIITYJFTFRFJHFCQCLEJCUZYNCREQADKLAIN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GIYSDTSEUXQOERYHURPMJXXWCFGNJAXHFIMGQKMNNGLVQVBZTPILASCABOWRRNDPYCRPUGCMNGZNQGEQOPUBSKYPXPQMBOQUQOZURYEXMFHMCWSTOBWTZBFYVQLZVJVBFJJTWYILFVHIAUFBDMWCRFDUOFULUQWSXSEYOCSKTEPKIJPMEWADVCJXJLGIELSBEAYXTZDIKDR");
    tmp_msg_0.value.assign("ULAMQPTSITDRJNUOYIUKHQVZLQVAQNLIBHDVZRLNPHETYRRYETTCDRIRAMMWDBWADOEOYTRVKFHPPDVPJJLNNMJBIJCTEVFDUKBAYUWOTXLHSXEZXGOIRZWSFQBQGONHNVPAIDFLXXYJAGRZMJOLQKGMUZYHGHACOITWGUEZLSSSEWEIYDFCXFGNKCKJDKEFBBUPCUCVGKLFBFPKFSGPCSIMS");
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
    msg.setTimeStamp(0.977579198546);
    msg.setSource(37904U);
    msg.setSourceEntity(59U);
    msg.setDestination(54905U);
    msg.setDestinationEntity(157U);
    msg.name.assign("ERKSZVVRHTIHRV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WVDHZGWCTMMDBDDNLFQQTVQKSLBSVEEIROZCGITWUSQLASPJRLTKNQKTLHYWMXPWWGUKZKVZQPKXSQRZCJRUEFOXJYYTMIESFMYKNBCGNYXA");
    tmp_msg_0.value.assign("AOBYAILMPHJTQJLHLDOQMVRZPWFZDHCFDNEIJLXZOWKITNVNECRURHXHDRWJHCUQHGIYQVYLOBTLCVCMQZZONQJZGMIOKEQJEIVXAKUXRRYPSBTGMPBHWKXFSFUPHAEMQZSUXSFILCBXUOVCYRKVYJCSBDAEPMNIDCABGODMKPKAMNYKKGSWUOGJQGXBNE");
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
    msg.setTimeStamp(0.210656464119);
    msg.setSource(39486U);
    msg.setSourceEntity(5U);
    msg.setDestination(11041U);
    msg.setDestinationEntity(236U);
    msg.name.assign("IXFSWHTDKQKOONSTCNMUJPVQKXTRYRELTZMSMXIEBUDMUUJPUHWVBCFOWVNGAWFQLTRGYHSOWGXVBNUGGEOCVHLMZI");

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
    msg.setTimeStamp(0.136280113474);
    msg.setSource(2644U);
    msg.setSourceEntity(234U);
    msg.setDestination(34855U);
    msg.setDestinationEntity(253U);
    msg.name.assign("LPGAIHASDJXDQQUEYWNVZWWDPWOKXUFKIZMZAMPIFSMHBZ");

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
    msg.setTimeStamp(0.497469529666);
    msg.setSource(61052U);
    msg.setSourceEntity(118U);
    msg.setDestination(8932U);
    msg.setDestinationEntity(70U);
    msg.name.assign("SMEZUHHIJOGYYFLUQVNYIMJKTIEMLTHALKOOHYFSDSBQBROARAJCQJCUPVAQXNDSWWHAEMXVKQCBKZOQLRIDTJXZFUGOWPCVQTNUTIHXSKRCNBWLOUYYMEYLZWQNDXFENGNPPT");

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
    msg.setTimeStamp(0.231596688897);
    msg.setSource(28835U);
    msg.setSourceEntity(46U);
    msg.setDestination(32820U);
    msg.setDestinationEntity(49U);
    msg.timeout = 2397064828U;

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
    msg.setTimeStamp(0.247594486223);
    msg.setSource(9351U);
    msg.setSourceEntity(154U);
    msg.setDestination(37899U);
    msg.setDestinationEntity(4U);
    msg.timeout = 4047907931U;

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
    msg.setTimeStamp(0.248117110265);
    msg.setSource(26553U);
    msg.setSourceEntity(13U);
    msg.setDestination(4176U);
    msg.setDestinationEntity(199U);
    msg.timeout = 3163923614U;

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
    msg.setTimeStamp(0.481839237795);
    msg.setSource(23711U);
    msg.setSourceEntity(98U);
    msg.setDestination(16225U);
    msg.setDestinationEntity(117U);
    msg.sessid = 1003415884U;

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
    msg.setTimeStamp(0.285023073953);
    msg.setSource(47764U);
    msg.setSourceEntity(131U);
    msg.setDestination(37148U);
    msg.setDestinationEntity(114U);
    msg.sessid = 2307796348U;

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
    msg.setTimeStamp(0.471180581608);
    msg.setSource(28353U);
    msg.setSourceEntity(137U);
    msg.setDestination(63082U);
    msg.setDestinationEntity(136U);
    msg.sessid = 276141934U;

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
    msg.setTimeStamp(0.686128125539);
    msg.setSource(50182U);
    msg.setSourceEntity(249U);
    msg.setDestination(7480U);
    msg.setDestinationEntity(237U);
    msg.sessid = 1006509853U;
    msg.messages.assign("OSOKTCLUZGPCTBUWDNELOBXSGZCBTHMFFKJZKFWIRIGJWOHGZVCLDQRVJCTPMITQJZQJIHBICMEHUSXFOHGQQSVQUQYBIHENUAVXEXQUOTKGALRIOLYFYLYTSVXDZLIHKDKIMHAAGLWHFDODVMSZDONMNNNISGDVCBKJBZAFJNRTWUNHRCERMJMPVEKJTYWXPFPBDCDERMBPRPQTYYESWVORAANQXSPLALAVYPZEFFBGAWNU");

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
    msg.setTimeStamp(0.592986274193);
    msg.setSource(3140U);
    msg.setSourceEntity(127U);
    msg.setDestination(60357U);
    msg.setDestinationEntity(248U);
    msg.sessid = 1257307795U;
    msg.messages.assign("AEVSYMYFEKQTSEJOMEYSDJTUSPTZYANBDRKPYGRXLPKHTKIQCZKLEMUTCAERHQKHVQHLWDJLBS");

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
    msg.setTimeStamp(0.085581134298);
    msg.setSource(64016U);
    msg.setSourceEntity(76U);
    msg.setDestination(60418U);
    msg.setDestinationEntity(245U);
    msg.sessid = 4211302966U;
    msg.messages.assign("JHCGVWEDIPZWIKQMPQPAROMVKXPCFUMINLEASTOAYRUCFXYUAVHRHVQGBVNEEUFYFBXMTAYSYQMSSVLGTDWDWDHXGCRTCBUTND");

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
    msg.setTimeStamp(0.521786180378);
    msg.setSource(52789U);
    msg.setSourceEntity(124U);
    msg.setDestination(26564U);
    msg.setDestinationEntity(197U);
    msg.sessid = 3992462985U;

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
    msg.setTimeStamp(0.207265841887);
    msg.setSource(4500U);
    msg.setSourceEntity(158U);
    msg.setDestination(61300U);
    msg.setDestinationEntity(203U);
    msg.sessid = 2500874125U;

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
    msg.setTimeStamp(0.340145316891);
    msg.setSource(44526U);
    msg.setSourceEntity(177U);
    msg.setDestination(56925U);
    msg.setDestinationEntity(128U);
    msg.sessid = 11314912U;

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
    msg.setTimeStamp(0.221558732161);
    msg.setSource(53413U);
    msg.setSourceEntity(17U);
    msg.setDestination(23870U);
    msg.setDestinationEntity(219U);
    msg.sessid = 2804802834U;
    msg.status = 123U;

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
    msg.setTimeStamp(0.521618713322);
    msg.setSource(5329U);
    msg.setSourceEntity(213U);
    msg.setDestination(24138U);
    msg.setDestinationEntity(26U);
    msg.sessid = 1062298889U;
    msg.status = 67U;

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
    msg.setTimeStamp(0.0407123108486);
    msg.setSource(6631U);
    msg.setSourceEntity(5U);
    msg.setDestination(13529U);
    msg.setDestinationEntity(41U);
    msg.sessid = 2318879441U;
    msg.status = 56U;

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
    msg.setTimeStamp(0.0319833050468);
    msg.setSource(52246U);
    msg.setSourceEntity(0U);
    msg.setDestination(46552U);
    msg.setDestinationEntity(39U);
    msg.name.assign("JLXUZYLUZZDAMHKCTASQJNTCTKYPESOZKVRWRCDUKJQBEJDLVOYOHNIZUNMVYFFBDXPGOURTVJMPEDBFFIQBXHXHFHZCKJAMHIXOZSLBMTCEKIFQWGKTXEVQICQMJDGHIXBHGEWQFQLNAYMWVPBCVPUGSBLIAKGENXTOWVSMWQYJLROLVHYJTBRYXIYPHPOSZSAKEGMNKECRWPYUEUUXSIJUTBWWDRNZONFOS");

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
    msg.setTimeStamp(0.176969372736);
    msg.setSource(45252U);
    msg.setSourceEntity(101U);
    msg.setDestination(16181U);
    msg.setDestinationEntity(98U);
    msg.name.assign("ZSNHIPKQWFFVLYONHCFLZJZUCZJMRFRKNEIRQWYHAWKCGGYWPNGNVSLKINKSTYZQEUEHFXGJMFGUCOMQDZXRLTHKNIEZSINRMSAPPTVSWZLLXXYMLOOXDCSUUCBQ");

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
    msg.setTimeStamp(0.76758059647);
    msg.setSource(56791U);
    msg.setSourceEntity(143U);
    msg.setDestination(42706U);
    msg.setDestinationEntity(184U);
    msg.name.assign("DDGBYTOESP");

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
    msg.setTimeStamp(0.336696421231);
    msg.setSource(30842U);
    msg.setSourceEntity(187U);
    msg.setDestination(30613U);
    msg.setDestinationEntity(125U);
    msg.name.assign("XLBLITJNCLWOGUJZKUEMCRASSJMBXLQYGAWOXVFCGGKXQTSWRTSLPEAIZSLAAFOWZHMVBHVJYWXKPRHOMNPXKCKVAXVOSNEMGYZJIVETESYTKDBOQZUHXCUKLROKIZVTWHZJPAUEEITHBDZNJPWBCVLFDFRQJDQFSRNUMGQYABAZKHHQATNGGDIUUFHMEFPBUOMXONHFCGDVNBRCITDFJXZODYUPQWRPWFISJKNLDSMYIPCPRDYQ");

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
    msg.setTimeStamp(0.626161153868);
    msg.setSource(32599U);
    msg.setSourceEntity(98U);
    msg.setDestination(34376U);
    msg.setDestinationEntity(72U);
    msg.name.assign("IQNVBRUBLLBPI");

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
    msg.setTimeStamp(0.766739517706);
    msg.setSource(29835U);
    msg.setSourceEntity(250U);
    msg.setDestination(32846U);
    msg.setDestinationEntity(106U);
    msg.name.assign("SPSBLJDTWYKUSDGTFXYFETIZICMPHLPATQUZAXOBKRUORQQKADISHQIUXHYRJHTQADCUTLYJXYUKAABEJFLJOGXGWLGUREOXZFNGRGNTWVECKVDYZENXQZTODYIMBHXPJCWPCKWJKV");

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
    msg.setTimeStamp(0.799787765361);
    msg.setSource(36504U);
    msg.setSourceEntity(92U);
    msg.setDestination(62215U);
    msg.setDestinationEntity(240U);
    msg.type = 56U;
    msg.error.assign("ZZLGAFKPOMSMFTPSHULRRIKHKWUEIOJCHEWAJLBRRVCLAVCQXNFGBVKVPZCJUREZNOSWKPGJCNYWTGORZEUMGYDWFZMOJDOXDHPXGYDEYXUCNYHRFYRGAFTHJGXCCUOPXVIAJLBFQEDMBYANNUISDBQKJJTZKSBWU");

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
    msg.setTimeStamp(0.822966207347);
    msg.setSource(12840U);
    msg.setSourceEntity(62U);
    msg.setDestination(20318U);
    msg.setDestinationEntity(115U);
    msg.type = 244U;
    msg.error.assign("XNVYQSJJBEMDMYWGGUMIPFDQWEIPNQBIIZFPHJMFAKRSPWNKHXCUVBDTJOPTNITNQNOKWXIGIHSWBOJTSYTKZFVGMAVAFVXMYHEHEGDCHWKTLNOELQAESQYKMGSXGOUCZLKRRDDLUJVMRBHWCCUWWFZZBUEOSLZXCTYDNLNQPESYPLXZPRIAGTODAMFVTRLNVEXXEZCKHQCOAJFWBBDYGBCYCZRZQ");

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
    msg.setTimeStamp(0.416232055338);
    msg.setSource(53551U);
    msg.setSourceEntity(246U);
    msg.setDestination(38294U);
    msg.setDestinationEntity(7U);
    msg.type = 161U;
    msg.error.assign("MLZQEJAHPBGMZCOQCPDGIKJXWCKQMNOHARLUMWDKXKBRNLTGBLPYCGWZTUQGAIWCNHFDIVVJKNGLHXSBBAVWOFWMQ");

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
    msg.setTimeStamp(0.978385382025);
    msg.setSource(42348U);
    msg.setSourceEntity(129U);
    msg.setDestination(21860U);
    msg.setDestinationEntity(91U);
    msg.seq = 40188U;
    msg.sys_dst.assign("MMWBOAJYZAQPBEATQRDKEJLOINJFJSJLUUELEKVKGICFLKWPGHFSXUFHSAFIQMLRNBMYPBIMGXKHONCWSEGTZDRKJIOBIZQPNSVBUZ");
    msg.flags = 183U;
    const char tmp_msg_0[] = {-124, -93, 74, 16, -56, 116, 26, -12, 4, 42, 69, 34, 83, 26, 102, -81, -119, 45, 35, -91, 110, 70, 24, -97, -94, 15, 93, 50, 114, 87, -92, -115, -119, -90, -8, 97, -36, 59, -1, -124, 87, 51, 126, -117, -53, 102, -26, -47, -113, -123, 33, 106, -26, -48, -3, -9, 102, -57, -9, 14, -79, 23, 123, -28, 35, -83, 84, -5, 86, -52, 68, 46, 85, 62, -68, 12, 93, 72, -4, -64, 55, 19, 78, -12, 18, -114, -107, 23, -26, -60, 37, 103, -109, -91, -102, 59, -92, -122, 24, -104, 98, 79, 50, 113, -54, 107, -106, -103, -17, 22, -24, -85, 79, -116, -27, 3, -93, 29, -8, -19, 95, -124, -97, -24, 80, -9, -40, -97, 5, 5, -64, -31, -17, -123, 55, 117, 18, 0, 58, 44, 71, 81, -78, 118, -44, -31, 66, -118, -124, -54, -112, -61, 20, 119, -64, 26, 120, 51, -95, 39, -114, 86, 104, -87, -114, -20, -70, -5, -28, -31, -6, 13, -72, 35, -90, -4, -123, 12, 90, -112, 8, 15, -99, 14, -74, 4, 29, 61, -85, 72, -72, -123, -47, 32, -6, -82, -55, -6, 83, -30, 43, 119, -52, -52, 122, 122, 31, -81, 120, -86, -69, -72, 113, 4, 85, -2, 50, 88, -20, -75, 49, 53, -111, 3, 72, -105, 114, 10, -28, 17, 4, -71, 8, 14, 105, -14, 2, -106, 27, -85, -72, 94};
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
    msg.setTimeStamp(0.547853160944);
    msg.setSource(59279U);
    msg.setSourceEntity(231U);
    msg.setDestination(19178U);
    msg.setDestinationEntity(94U);
    msg.seq = 6626U;
    msg.sys_dst.assign("AECCNSTTFTGBBDEDQDXPUBJPJYSUPIUQIYXLQMKGHLSYQRYERHCNSNBGXPTOXVWZLKLFLFMVQTHXHDACKXRJLBLLMFPRPAFVOBKTWBPWMCWCSDHFRO");
    msg.flags = 142U;
    const char tmp_msg_0[] = {-122, 59, 9, 103, 52, 83, -85, -98, -48, -89, -76, 19, 48, 109, 57, 57, -59, -60, 55, 36, 55, 75, 46, -79, 111, 29, 73, 16, -86, 16, 51, -49, -107, 25, 96, -124, 79, 43, 97, 88, -2, -8, 57, 25, -44, -103, 13, -10, 12, 52, 31, 31, 12, 20, -104, -10, 83, 48, -3, 69, 88, -57, 77, -75, 103, 121, 90, 100, -125, -44, -125, 31, 8, 103, 33, -2, -68, 34, -83, 125, -81, 3, 117, -49, -79, -119, -13, 19, 68, 3, -94, -109, -11, -111, -106, 57, -102, -90, -87, -128, -44, -22, -6, 3, -93, -38, -102, 121, 79, -115, -16, 7, 92, 70, -56, 98, 85, 12, -85, 123, 65, -82, 52, 99, 108, -39, -85, -54, -112, -42, -100, 60, 49, -77, -62, -116, -29, -69, 90, 126, 97, 16, 116, -109, -55, -26, 3, -106, -49, -46, -66, -15, 112, -97, 57, -18, 80, -15, 63, -34, -126};
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
    msg.setTimeStamp(0.326074338654);
    msg.setSource(54319U);
    msg.setSourceEntity(207U);
    msg.setDestination(9080U);
    msg.setDestinationEntity(4U);
    msg.seq = 1523U;
    msg.sys_dst.assign("ULSPULKFHPMRGBBUOYBQTDYTCAADIBWEXXBGZTSDSAOIIZPMIEWLQNGDFZJC");
    msg.flags = 55U;
    const char tmp_msg_0[] = {41, 101, 62, 68, -20, -107, -83, 46, -17, -35, 101, 76, 0, 38, -68, 34, -51, -88, 123, -16, -41, -35, 50, -62, 40, -25, 101};
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
    msg.setTimeStamp(0.288723970565);
    msg.setSource(57524U);
    msg.setSourceEntity(10U);
    msg.setDestination(23126U);
    msg.setDestinationEntity(44U);
    msg.sys_src.assign("TNKBIZHNYWAQWFPQQEYPCPKYCOWEPEFZ");
    msg.sys_dst.assign("TYIJQSHEUROOOBRWGJWNLECFECGBMAQXHKBFVPXLWNFZTMZIDWTPFGLKZOZJRVYWNSNNPQEXXMTECBLRNADCAVBUXXHIHOVSVAMUYDQWTXBHVZZYDFMFHLJSIVUCAYFCBGWPPOEXEZDHRRISCBQTLIJATFONYCNUAPDGXKZULIGWZJQKK");
    msg.flags = 8U;
    const char tmp_msg_0[] = {87, -23, 94, 116, -62, 108, -45, -121, -63, 123, -67, 15, -120, -116, 83, 91, 5, -104, -124, 97, 48, 109, 73, -80, 31, 9, -56, -110, -70, 114, 93, -64, 28, 91, 53, -41, -49, -109, -55, 84, -119, -47, 40, 41, -34, -104, 33, 37, 42, -65, 90, -24, -69, 100, 88, -105, 43, 100, 87, 103, -68, -60, 54, 104, 17, -78, -17, 95, -5, -62, -77, 101, -3, 7, 52, -20, 60, 126, -121, -101, 124, -21, -119, 109, 70, -102, -6, 49, -107, -69, -84, -11, 108, 35, -50, -128, -20, -125, -69, -18, -21, -119, 79, 71, -3, -75, 125, -68, -119, 66, -79, 107, -44, -61, 36, 102, -77, -71, 106, 126, -31, 67, -90, 91, -51, 73, -87, 115, 72, -123, -71, -67, 111, 116, 46, 69, -15, 115, -77, -68, -81, 46, -93, 18, -66, -98, 122, 12, 101, 26, 18, -125, 27, -6, -36, 31, -109, -2, 14, -30, 35};
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
    msg.setTimeStamp(0.799760213532);
    msg.setSource(1727U);
    msg.setSourceEntity(170U);
    msg.setDestination(4345U);
    msg.setDestinationEntity(180U);
    msg.sys_src.assign("CXRBRUBRTLUPTDHOKYFMILYORXEVOMIQMSEUSHLPVBPYGWIMEPSTXHTTKUEUBAHILKNOARJVGEYRYERPDJBIEDLZKFKYQFVIHDNJJTHBW");
    msg.sys_dst.assign("BNBMMRCVCGPHFGKTARJSLINEQZBNSPTYYEBXLQVOUIRNMMKYDTVMKFIIQKDZRUVOPYUDAOSHCEJIMQWGURZHJWDIYGJTZHDNWOCMEZLHLUWLHASQCZZXTJPGGQKFLTEEZFUFORELUEAQTFWYKFZOOBTLDXSXWHAANIAPYGFOGISRQWXXNAFGNLTPJWBRHIWCVBQPJRKGCXBJIYRSEZKDSQCVVFPODVLCPMXKBDJMVAXJTSNSEPBUV");
    msg.flags = 98U;
    const char tmp_msg_0[] = {-97, -56, -101, 83, 84, -117, 79, 22, 54, -11, -87, 71, 48, 34, 109, 93, 62, -61, 74, 84, -108, 5, -11, 106, 122, 3, -71, 73, -20, -16, 15, -21, 88, 86, 45, 95, 13, 105, -15, 119, 102, -18, 117, 121, 115, -115, 49, -121, -56, 58, 54, 81, -75, 74, -74, -114, -64, 65, 43, -18, -64, -105, -83, -69, -61, 103, 19, -29, -1, -119, 125, -46, 90, -20, 105, 57, 115, 123, -51, 118, -105, -22, 78, 86, -11};
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
    msg.setTimeStamp(0.569540850823);
    msg.setSource(51276U);
    msg.setSourceEntity(209U);
    msg.setDestination(20152U);
    msg.setDestinationEntity(123U);
    msg.sys_src.assign("ONAAWSMNNHLGUWJZJBP");
    msg.sys_dst.assign("VJWZEMVPLTVBMPBVVKNRMAIBZHZOYE");
    msg.flags = 135U;
    const char tmp_msg_0[] = {92, 119, -10, 76, -32, 115, -115, -118, 79, 121, 59, 98, -61, -105, 109, 52, -43, -19, -122, 14, -29, 82, 110, 108, -38, -90, -43, 28, -97, 9, 77, 120, 37, 42, -18, 27, 126, 74, 118, 20, 84, 49, -97, 123, -36, 92, -72, 30, -104, -34, 77, -118, 46, 125, 91, 74, -89, -36, 67, -25, 89, 36, -40, 17, -58, 22, 120, -16, -52, -54, 99, -13, 46, 47, -49, 55, -73, 57, 69, 71, 93, -23, -29, 86, -73, -12, -117, 8, 26, 122, -97, 97, -39, -97, -59, -34, -46, -55, 125, 105, 36, -35, 1, 55, 30, 12, -32, 5, -95, 22, -100, -33, -12, 37, 104, -112, -125, 26, 76, -121, 93, -121, 56, 114, 112, -32, -90, 39, 43, -124, 42, 63, 79, 80, -70, -72, -50, -85, -11, -24, -72, 32, 33, 126, 95, 99, 64, -12, 50, -70, 59, 83, 11, 83, 0, 53, -111, 85, 28, 113, 38, 17, -99, -54, 87, -23, 76, -116, -25, 22, 23, -124, 102, -18, 18, -12, -52, -122, 57, 105, 81, -115, 23, -8, 30, 6, -75, 70, 99, 94, 74, -71, 16, -56, 97, 110, -41, 92, 91, 88, -49, -63, 70, 103, 89, 8, 15, 52, -106, -94, -40, -89, 23, -44, -19, -121, -6, -32, -72, 29, -70, -3, -49, -32};
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
    msg.setTimeStamp(0.167276315929);
    msg.setSource(19796U);
    msg.setSourceEntity(60U);
    msg.setDestination(23824U);
    msg.setDestinationEntity(104U);
    msg.seq = 58382U;
    msg.value = 153U;
    msg.error.assign("LJENTUYRBXBNWKPSKMXKTCUUSXSTFLFEDJLHMPCTTQRHXMUQROAJXJIHLAETBSXMFCBSWEUZGWDYQPZYOBTWZYDHWKRISVYEILHCGLUBSRDNMNHKRRLFUGDDMXVCFSBOPSFMLKJXPFFEXZLEJINWKNEYRHVGIAANHICAYSQFIWGPAZPK");

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
    msg.setTimeStamp(0.911944598187);
    msg.setSource(2257U);
    msg.setSourceEntity(4U);
    msg.setDestination(40986U);
    msg.setDestinationEntity(22U);
    msg.seq = 29733U;
    msg.value = 37U;
    msg.error.assign("ZVSKEFWLFVVYRVORNPWURWFEGANZEGGJXCQMAMXDYEAVHGAOOFPJ");

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
    msg.setTimeStamp(0.764178417148);
    msg.setSource(26106U);
    msg.setSourceEntity(214U);
    msg.setDestination(11448U);
    msg.setDestinationEntity(217U);
    msg.seq = 27362U;
    msg.value = 123U;
    msg.error.assign("TBOHERMYVXXJDWTSUYXNWHCOVNOMIZBVY");

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
    msg.setTimeStamp(0.507121015739);
    msg.setSource(2045U);
    msg.setSourceEntity(30U);
    msg.setDestination(38742U);
    msg.setDestinationEntity(10U);
    msg.seq = 26599U;
    msg.sys.assign("JVRMPLSOISRIKVSHKBUANHIEGPTFRHRIMCLNSMAOGQGLNUFMYVBRCXICAZXXJGIGXEGDALWA");
    msg.value = 0.598917638277;

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
    msg.setTimeStamp(0.525809131664);
    msg.setSource(46828U);
    msg.setSourceEntity(146U);
    msg.setDestination(52392U);
    msg.setDestinationEntity(207U);
    msg.seq = 23349U;
    msg.sys.assign("SLPIHVNMBOCTPMDUUWBMPGAFQTQRCEVLQEIHRERIJDQILDMIRDJFWUK");
    msg.value = 0.308141284627;

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
    msg.setTimeStamp(0.662855119943);
    msg.setSource(50991U);
    msg.setSourceEntity(236U);
    msg.setDestination(62905U);
    msg.setDestinationEntity(181U);
    msg.seq = 11853U;
    msg.sys.assign("USGCTFGFYKZNUGMSJLFYQABNCBCJFHTHGHZGFESPNYPLKVAKBMAXYHOKKYTEKGSZJSLXTFLEYOYSAMXUBEKNDTEHUHTIIFARSIEIWRMLPNJOXJOZPRTJRWWRCNWBILRLGYJVAVZIBNQXUDOVNQXHRJEALGPMNOQWZRHMVIPSAHWZNPTJZEBCEKHBPOGSWUFV");
    msg.value = 0.970887988313;

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
    msg.setTimeStamp(0.687683433482);
    msg.setSource(25992U);
    msg.setSourceEntity(13U);
    msg.setDestination(5811U);
    msg.setDestinationEntity(124U);
    msg.action = 171U;
    msg.longain = 0.261605286234;
    msg.latgain = 0.879663629671;
    msg.bondthick = 3224049858U;
    msg.leadgain = 0.991493556198;
    msg.deconflgain = 0.284965762633;

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
    msg.setTimeStamp(0.20348551016);
    msg.setSource(39653U);
    msg.setSourceEntity(16U);
    msg.setDestination(7792U);
    msg.setDestinationEntity(84U);
    msg.action = 18U;
    msg.longain = 0.456036213617;
    msg.latgain = 0.483283435089;
    msg.bondthick = 2395443638U;
    msg.leadgain = 0.536216602653;
    msg.deconflgain = 0.993187440813;

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
    msg.setTimeStamp(0.470923977815);
    msg.setSource(2771U);
    msg.setSourceEntity(109U);
    msg.setDestination(37615U);
    msg.setDestinationEntity(114U);
    msg.action = 56U;
    msg.longain = 0.670748882742;
    msg.latgain = 0.54365533713;
    msg.bondthick = 800006482U;
    msg.leadgain = 0.499784563811;
    msg.deconflgain = 0.468107065673;

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
    msg.setTimeStamp(0.0139213794365);
    msg.setSource(5102U);
    msg.setSourceEntity(238U);
    msg.setDestination(45803U);
    msg.setDestinationEntity(124U);
    msg.err_mean = 0.961467228226;
    msg.dist_min_abs = 0.96593058473;
    msg.dist_min_mean = 0.0406808076927;

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
    msg.setTimeStamp(0.62439652953);
    msg.setSource(60192U);
    msg.setSourceEntity(88U);
    msg.setDestination(26031U);
    msg.setDestinationEntity(35U);
    msg.err_mean = 0.210617232983;
    msg.dist_min_abs = 0.421928878298;
    msg.dist_min_mean = 0.91437949821;

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
    msg.setTimeStamp(0.696817299632);
    msg.setSource(12218U);
    msg.setSourceEntity(65U);
    msg.setDestination(22829U);
    msg.setDestinationEntity(135U);
    msg.err_mean = 0.133075835338;
    msg.dist_min_abs = 0.353391864833;
    msg.dist_min_mean = 0.407400214965;

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
    msg.setTimeStamp(0.225747191706);
    msg.setSource(42569U);
    msg.setSourceEntity(61U);
    msg.setDestination(63415U);
    msg.setDestinationEntity(39U);
    msg.action = 229U;
    msg.lon_gain = 0.885359081383;
    msg.lat_gain = 0.0264507768133;
    msg.bond_thick = 0.400487145072;
    msg.lead_gain = 0.502818648575;
    msg.deconfl_gain = 0.633168478407;
    msg.accel_switch_gain = 0.629125928765;
    msg.safe_dist = 0.910157988674;
    msg.deconflict_offset = 0.217002871305;
    msg.accel_safe_margin = 0.446387376865;
    msg.accel_lim_x = 0.533581186053;

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
    msg.setTimeStamp(0.528335236085);
    msg.setSource(54061U);
    msg.setSourceEntity(158U);
    msg.setDestination(10227U);
    msg.setDestinationEntity(12U);
    msg.action = 142U;
    msg.lon_gain = 0.149125791665;
    msg.lat_gain = 0.58169705633;
    msg.bond_thick = 0.997682745521;
    msg.lead_gain = 0.518295123455;
    msg.deconfl_gain = 0.417505867611;
    msg.accel_switch_gain = 0.0729282094611;
    msg.safe_dist = 0.776048482381;
    msg.deconflict_offset = 0.762296346952;
    msg.accel_safe_margin = 0.0951152096748;
    msg.accel_lim_x = 0.98039265782;

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
    msg.setTimeStamp(0.62312172714);
    msg.setSource(31889U);
    msg.setSourceEntity(10U);
    msg.setDestination(50349U);
    msg.setDestinationEntity(244U);
    msg.action = 219U;
    msg.lon_gain = 0.749977597447;
    msg.lat_gain = 0.143284743729;
    msg.bond_thick = 0.827899166333;
    msg.lead_gain = 0.478866574252;
    msg.deconfl_gain = 0.786993546052;
    msg.accel_switch_gain = 0.10871806594;
    msg.safe_dist = 0.151437406247;
    msg.deconflict_offset = 0.796157160234;
    msg.accel_safe_margin = 0.0792000908922;
    msg.accel_lim_x = 0.643793217715;

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
    msg.setTimeStamp(0.440424734509);
    msg.setSource(37914U);
    msg.setSourceEntity(88U);
    msg.setDestination(19268U);
    msg.setDestinationEntity(212U);
    msg.type = 160U;
    msg.op = 254U;
    msg.err_mean = 0.54867556324;
    msg.dist_min_abs = 0.0825753295007;
    msg.dist_min_mean = 0.879588155407;
    msg.roll_rate_mean = 0.443779425697;
    msg.time = 0.101009915126;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 212U;
    tmp_msg_0.lon_gain = 0.0766126059771;
    tmp_msg_0.lat_gain = 0.369734821462;
    tmp_msg_0.bond_thick = 0.0932836194454;
    tmp_msg_0.lead_gain = 0.83535539986;
    tmp_msg_0.deconfl_gain = 0.348970000363;
    tmp_msg_0.accel_switch_gain = 0.0696617698331;
    tmp_msg_0.safe_dist = 0.565754302569;
    tmp_msg_0.deconflict_offset = 0.679451184032;
    tmp_msg_0.accel_safe_margin = 0.0317799760922;
    tmp_msg_0.accel_lim_x = 0.431332871248;
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
    msg.setTimeStamp(0.549055327645);
    msg.setSource(44248U);
    msg.setSourceEntity(41U);
    msg.setDestination(28569U);
    msg.setDestinationEntity(245U);
    msg.type = 73U;
    msg.op = 86U;
    msg.err_mean = 0.597870575809;
    msg.dist_min_abs = 0.718990935794;
    msg.dist_min_mean = 0.568666822789;
    msg.roll_rate_mean = 0.93123305922;
    msg.time = 0.779901252611;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 220U;
    tmp_msg_0.lon_gain = 0.0255910609879;
    tmp_msg_0.lat_gain = 0.388287719913;
    tmp_msg_0.bond_thick = 0.82868044664;
    tmp_msg_0.lead_gain = 0.837166319908;
    tmp_msg_0.deconfl_gain = 0.566029676723;
    tmp_msg_0.accel_switch_gain = 0.440961728294;
    tmp_msg_0.safe_dist = 0.128597873514;
    tmp_msg_0.deconflict_offset = 0.627866887981;
    tmp_msg_0.accel_safe_margin = 0.108986770007;
    tmp_msg_0.accel_lim_x = 0.426049618174;
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
    msg.setTimeStamp(0.987389639857);
    msg.setSource(17319U);
    msg.setSourceEntity(101U);
    msg.setDestination(37799U);
    msg.setDestinationEntity(96U);
    msg.type = 235U;
    msg.op = 133U;
    msg.err_mean = 0.461999600851;
    msg.dist_min_abs = 0.425597296316;
    msg.dist_min_mean = 0.492136714999;
    msg.roll_rate_mean = 0.147091487957;
    msg.time = 0.69368428029;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 25U;
    tmp_msg_0.lon_gain = 0.790973008129;
    tmp_msg_0.lat_gain = 0.364232450812;
    tmp_msg_0.bond_thick = 0.137431229012;
    tmp_msg_0.lead_gain = 0.467168291528;
    tmp_msg_0.deconfl_gain = 0.572839360888;
    tmp_msg_0.accel_switch_gain = 0.76742360607;
    tmp_msg_0.safe_dist = 0.605344654485;
    tmp_msg_0.deconflict_offset = 0.401370622778;
    tmp_msg_0.accel_safe_margin = 0.178402882944;
    tmp_msg_0.accel_lim_x = 0.839500216145;
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
    msg.setTimeStamp(0.899688645029);
    msg.setSource(4490U);
    msg.setSourceEntity(146U);
    msg.setDestination(13244U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.545241305649;
    msg.lon = 0.527916954927;
    msg.eta = 492726925U;
    msg.duration = 52474U;

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
    msg.setTimeStamp(0.962619264727);
    msg.setSource(55657U);
    msg.setSourceEntity(118U);
    msg.setDestination(34181U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.899709277991;
    msg.lon = 0.544655984524;
    msg.eta = 3867351412U;
    msg.duration = 21047U;

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
    msg.setTimeStamp(0.291892634745);
    msg.setSource(10061U);
    msg.setSourceEntity(133U);
    msg.setDestination(54241U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.158665701152;
    msg.lon = 0.625380543506;
    msg.eta = 1473546168U;
    msg.duration = 23941U;

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
    msg.setTimeStamp(0.784500668038);
    msg.setSource(16201U);
    msg.setSourceEntity(245U);
    msg.setDestination(46755U);
    msg.setDestinationEntity(251U);
    msg.plan_id = 33458U;

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
    msg.setTimeStamp(0.121309856749);
    msg.setSource(27739U);
    msg.setSourceEntity(161U);
    msg.setDestination(45996U);
    msg.setDestinationEntity(29U);
    msg.plan_id = 12784U;

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
    msg.setTimeStamp(0.462223292412);
    msg.setSource(12720U);
    msg.setSourceEntity(180U);
    msg.setDestination(26713U);
    msg.setDestinationEntity(79U);
    msg.plan_id = 4898U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.78329035643;
    tmp_msg_0.lon = 0.0737131582393;
    tmp_msg_0.eta = 3265886355U;
    tmp_msg_0.duration = 60463U;
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
    msg.setTimeStamp(0.527471505565);
    msg.setSource(26561U);
    msg.setSourceEntity(213U);
    msg.setDestination(32052U);
    msg.setDestinationEntity(80U);
    msg.type = 21U;
    msg.command = 248U;
    msg.settings.assign("KZMFXUYBMSOQSHCPYZQIQFZCYNDEZLWAYYMRUBACPIGMWOHJWUTESOJUUXJIYACUPOPMASARIRHKXVDLPXBFHNMTXXCQZBLARKJPGODCIOBKGAQOQQZBCYDLVIMGPFVTVCTKBNRYEAEUENITPFBDPA");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 50785U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YRKQJHUEMIGZLNWUYPBGBBNQBHYGEOSZPGYXMYZDREDOMTDQNNOBVKKFQHRIHJLRTAXBAXOCBRSIDVVFRTPWOVTGEZCPOUMNZJHCTIY");

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
    msg.setTimeStamp(0.787209032658);
    msg.setSource(42911U);
    msg.setSourceEntity(220U);
    msg.setDestination(47434U);
    msg.setDestinationEntity(76U);
    msg.type = 140U;
    msg.command = 240U;
    msg.settings.assign("RPLYAUESKVNZXSDILUJRERWBVXKNCNCJBPJYZQFBEIEMY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 8291U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("HTHIVXGCABVHYVJHOVWYODYNXCDBEAGBSAYSABXIRESTLMQODQOUORJBWEQWKMMZNZKLKTEBXXDZTNXUNWHTJGSDFRICXEXAVRLAWCCYJKKWRIEDSTFPWCHBTFQHVGCSKMPRCHJYSKGRSVZZYYJQNRDFWZFWGZMR");

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
    msg.setTimeStamp(0.299989606553);
    msg.setSource(34359U);
    msg.setSourceEntity(114U);
    msg.setDestination(59211U);
    msg.setDestinationEntity(149U);
    msg.type = 8U;
    msg.command = 98U;
    msg.settings.assign("PADQIYGVPYQHAVZBEGGLHGBNINDWRSNTVUBAJQEODLRCJIMMVFUMNKMSJIWBOURCPHOAXLQLXBLMXCTKZNKFXTDXJGXMWQVGYWSYEVHVOSNADQFHTTXRJRPMNFHFBIPWUKCWGVGRZIJQVJCZRECDOBSJNBXEPFADDXTYYNCDWKSKCPMFFNZQUOPZAKUFE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 3591U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QRGEFILGFRCITSZKBKUMGZDZKPRJFMBPNLPILSLOCBHNCOUOXFJGDCUMWVVVXSAOAQUJKXYTVHCTQAKWNNEMISJELJDDQSWQIIHWTYZFOALOAGZVEIPHXWULXOHFEXPNCDMFMRQZZGRKRHJPYWFHQQQWENTHYBPKGQOOVUTELAMJNUCFPHMUGUYX");

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
    msg.setTimeStamp(0.141897448888);
    msg.setSource(16359U);
    msg.setSourceEntity(235U);
    msg.setDestination(41474U);
    msg.setDestinationEntity(173U);
    msg.state = 18U;
    msg.plan_id = 50925U;
    msg.wpt_id = 22U;
    msg.settings_chk = 8013U;

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
    msg.setTimeStamp(0.453458100195);
    msg.setSource(37803U);
    msg.setSourceEntity(124U);
    msg.setDestination(64628U);
    msg.setDestinationEntity(85U);
    msg.state = 161U;
    msg.plan_id = 13308U;
    msg.wpt_id = 94U;
    msg.settings_chk = 5832U;

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
    msg.setTimeStamp(0.61740281368);
    msg.setSource(62621U);
    msg.setSourceEntity(224U);
    msg.setDestination(43000U);
    msg.setDestinationEntity(197U);
    msg.state = 118U;
    msg.plan_id = 56414U;
    msg.wpt_id = 60U;
    msg.settings_chk = 63902U;

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
    msg.setTimeStamp(0.140251876784);
    msg.setSource(48704U);
    msg.setSourceEntity(48U);
    msg.setDestination(8248U);
    msg.setDestinationEntity(28U);
    msg.uid = 136U;
    msg.frag_number = 188U;
    msg.num_frags = 91U;
    const char tmp_msg_0[] = {122, 9, -58, -109, -83, -108, -39, 103, -107, -96, -125, 71, -104, 17, -61, -116, -120, -29, -20, 97, 113, -75, -12, -74, -103, 34, -101, 36, -82, 94, 23, 63, -92, -78, 104, 31, 77, 8, 96, -90, -114, -100, 49, 2, -30, -97, 56, -127, 113, 109, -47, -71, 69, -49, 3, -92, 122, -57, -58, -65, 112, 74, 7, -117, -70, 97, 67, 125, 113, 79, -78, 60, 11, -54, -8, 53, -44, 33, 75, 9, 43, -16, 16, 89, -47, -84, 2, 1, 21, 111, 70, -88, 20, -35, 87, -112, -54, 123, 17, 57, -118, -115, -67, -82, -51, -38, 106, -6, -34, 59, -11, 97, 97, 37, -96, 11, 92, -68, 22, -19, -3, -80, 92, -64, -29, 36, -6, 1, -117, 6, 117, 58, -75, -34, -28, -3, 103, -84, -80, -79, -72, -90, 26, -116, -37, 14, 72, 57, -42, -89, -7, -114, -50, -74, -26, 59, 47, 53, 99, -66, -118, -105, -42, -85, 126, 71, -42, -67, -46, -74, 82, 91};
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
    msg.setTimeStamp(0.658482382315);
    msg.setSource(14529U);
    msg.setSourceEntity(199U);
    msg.setDestination(25885U);
    msg.setDestinationEntity(188U);
    msg.uid = 43U;
    msg.frag_number = 34U;
    msg.num_frags = 48U;
    const char tmp_msg_0[] = {121, -84, -77, 93, -37, 43, -82, -102, 90, 19, 71, -65, 121, -67, 2, -21, -75, -43, -89, 22, -82, 60, 110, 107, -10, -7, 63, 28, 124, 25, 51, -89, 10, 42, -37, 66, -98, 88, 121, -56, 0, 37, -73, 125, 82, -78, -20, -119, 2, -63, -102, -36, -56, 42, 94, -118, 56, 88, 21, 76, -99, 46, 67, -89, 50, 96, 105, -60, -40, -72, -127, 115, -126, 66, -11, 48, -65, -39, 110, 121, 96, 87, 37, 36, -82, 109, 92, -72, -115, 3, 74, -1, 95, -105, -113, -44, 103, 15, -123, 51, 70, 112, 6, 5, 4, -50, 10, 32, -48, -104, 13, 11, -19, 45, 90, -29, -119, -56, -83, 58, 123, 42, 22, 64, -108, -10, -22, -94, -35, -95, 122, 117, -98, -13, 114, -84, -66, 112, -90, -77, 58, 39, -81, -65, 40, -111, 108, -38, 42, 12, -27, 86, -78, -89, -21, 23, -14, -83, 122, 93, 31, 74, 26, 36, -36, -108, -107, 109, -11, 94, 92, -67, 117, -80, -95, -111, 12, 97, 85, 28, -69, -64, 59, -125, 67, 90, 44, -26, 22, -17, 55, -52, -112, -71, 1, 89, -29, 22, 63, -24};
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
    msg.setTimeStamp(0.787898510437);
    msg.setSource(2551U);
    msg.setSourceEntity(178U);
    msg.setDestination(64076U);
    msg.setDestinationEntity(215U);
    msg.uid = 134U;
    msg.frag_number = 231U;
    msg.num_frags = 151U;
    const char tmp_msg_0[] = {-63, -123, -90, 51, 10, -102, 23, 47, -33, -17, 30, -124, 108, -72, 63, -51, 53, 118, -20, 20, -67, 72, 7, -107, 10, 32, 76, 41, -127, -114, 77, 3, 84, -65, -2, -14, -76, 100, 22, 33, 75, 120, -68, 126, -59, -121, 113, 5, -90, 87, 7, 126, -125, -45, -103, 67, -8, -19, 27, 7, 43, 13, 45, 95, 114, 121, 83, 24, 78, 120, -1, 23, 64, -67, 74, -54, 24, -102, -2, -19, 60, 86, -45, -35, -118, -5, -62, -67, -13, 19, 79, 5, -46, -44, 2, -104, -42, 53, 58, -31, 103, 47, -31, 57, -128, 22, 24, 34, 93, 96, -40, 14, -85, -115, -86, 84, -57, 75, 113, 3, -98, 89, 99, 116, 54, 98, -78, -51, 126, -95, 38, 101, -119, -85, -43, 119, 126, 86, -3, 101, -7, -81, 97, -125, 94, -62, 14, -48, 46, -2, -64, -41, 19, 23, 77, 48, -30};
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
    msg.setTimeStamp(0.402060591066);
    msg.setSource(11342U);
    msg.setSourceEntity(138U);
    msg.setDestination(63259U);
    msg.setDestinationEntity(163U);
    msg.content_type.assign("FGZBOYMJOPBXMQCVTPFGBYQSXFJEOXKJWWTKVPPSGKCWDWCOGYSZHDEHLTBJIERUZGTEOCIRNYTKEEZMCKEIPLIDPOXQVWHNWPAAURATKEDFEVQTDNHKLMMAUHZBRCJLASVLOHUNRLWIYJFIIGYDXSNXMEVCFONAAQRFUTIJQCAYMXQWNBLGHCNIMUXFQGJX");
    const char tmp_msg_0[] = {7, -102, -61, -76, -59, -120, -5, -49, 28, 65, -116, -40, 87, 103, -64, -125, -31, -99, 74, 18, 35, -6, 68, 68, 79, 65, 3, 92, -31, 6, -73, -62, 68, 76, 19, -24, 59, 44, 88, 71, 31, 91, 105, -63, -77, 53, 9, 5, 71, 90, 102, 69, 20, -62, 97, -67, -67, -85, -90, 62, 60, -76, -85, -58, -79, 0, 84, -40, -87, -12, -91, 31, 111, 106, 18, -65, -7, 7, -85, 111, 84, 108, -108, -107, -41, -37, 80, -62, -97, 91, 68, -55, -1, -75, -15, -5, -60, -34, -79, -66, 89, -33, 113, -46, 11, 114, 29, 105, -115, -63, -78, -49, -18, 120, -25, 86, -20, 69, 3, 116, -45, -40, -78, -1, -44, 96, -10, -31, 46, 52, -36, 51, -117, -4, -50, 61, 6, -9, 20, 72, -81, 112, -123, -29, 9, -95, 115, 123, -67, -2, 14, -73, -86, 23, 17, -84, 56, 80, 21, 74, -34, 41, 63, 20};
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
    msg.setTimeStamp(0.862469529807);
    msg.setSource(16446U);
    msg.setSourceEntity(251U);
    msg.setDestination(32711U);
    msg.setDestinationEntity(85U);
    msg.content_type.assign("NEESBZDDHORETXLCUACIBNVZZBTSRGNUVJNXSSZREJXSAWJBOCOGJTIEKOKAKVPXHSIZZVFOOTGQIWNWNRQYGSDMQXFCUXFKOPRWXHEENQKHBKJZMEPYYUAHUFYQHFMBLWGLSIMVLEJDJOPOUGDAQLWQTYMZMKBNTRKALACCYAYDXQT");
    const char tmp_msg_0[] = {63, -72, 120, 58, 65, -69, -104, -47, -61, -44, -33, 26, -38, 42, -92, -126, 63, 35, -97, 72, -93, 110, -90, 27, 112, 25, -10, 17, 113, 116, 103, -42, -51, -121, -31, -118, -78, -22, -105, 105, -76, 68, 33, 82, 75, -33, 1, 14, 35, -51, 103, -124, -14, 126, -109, 81, -37, -59, -122, -55, -109, 4, 4, -30, 92, -60, -28, -73, 62, 41, 66, -20, -60, 99, 111, 124, 79, 113, -81, 86, 43, -59, -58, -61, -37, 27, -123, 17, -73, 25, -109, -32, 68, 60, 99, 20, 46, -50, 69, -46, 68, 108, 17, 98, 42, 112, 57, -1, -111, 102, 95, -86, -30, 122, 84, -122, -43, 64, 30, 56, 104, -8, -19, -48, -93, -54, -69, -100, -25, -6, -89, -5, 84, -93, -38, -100, -25, -91, 7, -111, -42, -45, -87, 58, 86, 75, 49, -81, -48, -123, 10, -63, 63, -52, 5, 41, -10, 35, -10, -50, 76, 63, 55, -62, -26, 33, -112, -104, 18, -15, 106, -121, 84, 51, -125, 108, 20, 90, -10, 83, -20, -17, -125, 12, -30, -91, -114};
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
    msg.setTimeStamp(0.529567736911);
    msg.setSource(28758U);
    msg.setSourceEntity(37U);
    msg.setDestination(23748U);
    msg.setDestinationEntity(126U);
    msg.content_type.assign("VVTZDWVTLQTZ");
    const char tmp_msg_0[] = {65, 54, -23, -72, 125, 114, 69, -77, 33, -106, 2, -17, 117, 86, -10, 85, -85, -114, -55, -123, -91, -117, -4, 31, 20, -3, -47, -67, 73, 122, -64, -59, 91, -110, -4, -124, 94, -128, 102, -78, -48, -109, -128, -58, 121, 113, -16, 41, 91, -50, -57, -108, -72, -22, -127, -33, 80, 43, -21, 98, 98, -48};
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
    msg.setTimeStamp(0.259765256874);
    msg.setSource(42845U);
    msg.setSourceEntity(34U);
    msg.setDestination(35516U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.103118373965);
    msg.setSource(31110U);
    msg.setSourceEntity(247U);
    msg.setDestination(2006U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.315660959514);
    msg.setSource(44662U);
    msg.setSourceEntity(30U);
    msg.setDestination(58702U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.280342174912);
    msg.setSource(1744U);
    msg.setSourceEntity(96U);
    msg.setDestination(35858U);
    msg.setDestinationEntity(122U);
    msg.target = 21712U;
    msg.bearing = 0.626753784158;
    msg.elevation = 0.53916701278;

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
    msg.setTimeStamp(0.167290804097);
    msg.setSource(16798U);
    msg.setSourceEntity(104U);
    msg.setDestination(32969U);
    msg.setDestinationEntity(170U);
    msg.target = 54946U;
    msg.bearing = 0.793380767877;
    msg.elevation = 0.600938329209;

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
    msg.setTimeStamp(0.403135637669);
    msg.setSource(52431U);
    msg.setSourceEntity(140U);
    msg.setDestination(55420U);
    msg.setDestinationEntity(122U);
    msg.target = 42655U;
    msg.bearing = 0.970156357676;
    msg.elevation = 0.382150490781;

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
    msg.setTimeStamp(0.505513535875);
    msg.setSource(64315U);
    msg.setSourceEntity(111U);
    msg.setDestination(5664U);
    msg.setDestinationEntity(16U);
    msg.target = 48331U;
    msg.x = 0.0587967625838;
    msg.y = 0.912237560595;
    msg.z = 0.185495821019;

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
    msg.setTimeStamp(0.455696777443);
    msg.setSource(738U);
    msg.setSourceEntity(57U);
    msg.setDestination(38970U);
    msg.setDestinationEntity(57U);
    msg.target = 38346U;
    msg.x = 0.976869982133;
    msg.y = 0.719989776286;
    msg.z = 0.822335753406;

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
    msg.setTimeStamp(0.0700841085156);
    msg.setSource(39454U);
    msg.setSourceEntity(50U);
    msg.setDestination(50731U);
    msg.setDestinationEntity(205U);
    msg.target = 40876U;
    msg.x = 0.413165018561;
    msg.y = 0.568316963218;
    msg.z = 0.261985524723;

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
    msg.setTimeStamp(0.655930207488);
    msg.setSource(17901U);
    msg.setSourceEntity(30U);
    msg.setDestination(43825U);
    msg.setDestinationEntity(216U);
    msg.target = 9839U;
    msg.lat = 0.0440060404949;
    msg.lon = 0.746281310605;
    msg.z_units = 187U;
    msg.z = 0.67946240653;

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
    msg.setTimeStamp(0.214845549573);
    msg.setSource(40378U);
    msg.setSourceEntity(194U);
    msg.setDestination(39002U);
    msg.setDestinationEntity(68U);
    msg.target = 11652U;
    msg.lat = 0.75786406843;
    msg.lon = 0.0450842478863;
    msg.z_units = 120U;
    msg.z = 0.943152186649;

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
    msg.setTimeStamp(0.407684915466);
    msg.setSource(43804U);
    msg.setSourceEntity(123U);
    msg.setDestination(40402U);
    msg.setDestinationEntity(137U);
    msg.target = 44824U;
    msg.lat = 0.449592394449;
    msg.lon = 0.118331189631;
    msg.z_units = 157U;
    msg.z = 0.878095534807;

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
    msg.setTimeStamp(0.0245746108424);
    msg.setSource(10159U);
    msg.setSourceEntity(52U);
    msg.setDestination(54707U);
    msg.setDestinationEntity(185U);
    msg.locale.assign("HHDQLSRGFPYFUDAWJOAVPWLBNOVKZSORZILVEEPVWVJTKSUKZERBPARBOQPJCEZZMDQJGLBVWGKKDBFHPDVTUYKIAXDOWPHUIDNOJXHHVQKUZWSLLNEWMUUXSBMMNPAPSLF");
    const char tmp_msg_0[] = {-70, 58, 115, 34, 69, -80, -67, 4, 48, 89, -110, 117, 43, 67, -98, 27, 97, -48, -66, 82, 31, -36, 13, 64, -43, -47, 23, -36, -19, -11, 5, -14, 79, -81, 14, -115, -48, 16, 25, -43, 72, -123, 3, -43, 52, 44, -105, -46, -107, -20, -51, -79, -52, -99, 59, -87, -116, 32, 27, -64, -90, -112, -71, -79, -1, 102, -49, -46, 47, 111, 81, 23, 73, 117, -101, -33, 2, 12, 82};
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
    msg.setTimeStamp(0.859099377815);
    msg.setSource(45035U);
    msg.setSourceEntity(117U);
    msg.setDestination(31089U);
    msg.setDestinationEntity(134U);
    msg.locale.assign("SEJTSIKIINJAXWQVWWGVBCCYOFMSKMGIAUJFJAHIRAYIEPKHRLMTXCLJUPQTHFNMVNBQRPJMCLLWZSLSRRGTZNWIQOPHUPPGFVQFCVCVWREOMYNEDTEVIDERYOWANZOKUBYQZXPKPYDNBYJATF");
    const char tmp_msg_0[] = {-57, -99, -63, -84, 61, -32, -99, 7, -85, -50, -17, -106, -94, -40, -123, -29, -42, -19, -61, -50, 58, -1, 44, -60, 4, 88, 119, -87, -105, 14, -93, -102, -46, 52, 94, -61, 45, -18, 51, 76, -20, 78, 15, 74, 85, -68, -18, -40, 68, -5, 19, 117, -10, -122, 12, 66, -74, -81, -58, -19, 49, 75, 22, 70, 56, 78, -67, 22, -94, 97, 4, -85, 19, 90, 46, 67, -76, -3, 61, -78, 62, -47, 89, -125, 96, 29, 124, 120, 36, 18, -105, -97, -97, 116, -34, 126, -53, 97, 72, -15, -114, 2, 114, -78, 28, -115, -87, 52, 126, -67, -33, -83, -119, -34, -65, -12, 21, -55, -77, -16, 28, -4, -49, -78, -11, 110, -7, -51, -121, -81, 68, -70, 86, 28, 95, 39, 40, 120, 47, -31, 119, -18, 83, -103, -124, 121, 84, 19, -71, 47, 1, 108, 108, 76, 120, -103, -122, -22, -110, 67, 33, -75, 126, 46, -119, -11, -84, 91, -121, 31, -50, 24, 55, 68, 105, -28, 64, 59, -57, 65, -29, 108, 78, 61, 20, -68, 18, 93, -45, 79, 2, -68, 8, 116, 29, -20, 85, -21, 25, -9, -41, 12, -23};
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
    msg.setTimeStamp(0.613033781577);
    msg.setSource(16875U);
    msg.setSourceEntity(215U);
    msg.setDestination(58461U);
    msg.setDestinationEntity(243U);
    msg.locale.assign("TPKFVAIIAPXAYDMGEEALCUQHRYADBAJTRMHRVLTPRBROYFQFLVZZQOMKQJIBOMGKGKXSTHJXLZLXFPITIVHMXKODECWSNUTFKJTSREUSUKCNIEMIYPNBDHAKTZLDCUWOGWBVVRZQOKGPHSNBVMDRYUUIEDCWCVWGQMADQSLEYCQCMNTZZFUHPZKOMSALEUZ");
    const char tmp_msg_0[] = {76, -64, -68, -4, 48, 56, 99, 25, 119, -32, 30, -36, -39, 90, -12, 91, -111, -86, -106, -82, -17, 55, -23, -97, 116, -39, 26, -111, -7, -30, -51, 5, -92, 120, -1, -2, 22, 67, -124, 24, 59, 91, -119, 83, 13, -113, 71, -15, -81, -126, 5, 118, 56, -3, -102, 65, -80, -54};
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
    msg.setTimeStamp(0.830666425796);
    msg.setSource(1161U);
    msg.setSourceEntity(95U);
    msg.setDestination(32881U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.675475028239);
    msg.setSource(43912U);
    msg.setSourceEntity(162U);
    msg.setDestination(49544U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.961278391619);
    msg.setSource(4361U);
    msg.setSourceEntity(14U);
    msg.setDestination(16451U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.950419567532);
    msg.setSource(46216U);
    msg.setSourceEntity(136U);
    msg.setDestination(41804U);
    msg.setDestinationEntity(233U);
    msg.camid = 99U;
    msg.x = 27711U;
    msg.y = 54843U;

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
    msg.setTimeStamp(0.722987469333);
    msg.setSource(43790U);
    msg.setSourceEntity(245U);
    msg.setDestination(4943U);
    msg.setDestinationEntity(34U);
    msg.camid = 13U;
    msg.x = 30180U;
    msg.y = 44186U;

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
    msg.setTimeStamp(0.416149432795);
    msg.setSource(29695U);
    msg.setSourceEntity(65U);
    msg.setDestination(17025U);
    msg.setDestinationEntity(18U);
    msg.camid = 100U;
    msg.x = 13153U;
    msg.y = 27141U;

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
    msg.setTimeStamp(0.785337673319);
    msg.setSource(64647U);
    msg.setSourceEntity(62U);
    msg.setDestination(64410U);
    msg.setDestinationEntity(71U);
    msg.camid = 243U;
    msg.x = 13467U;
    msg.y = 16014U;

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
    msg.setTimeStamp(0.695135720332);
    msg.setSource(4786U);
    msg.setSourceEntity(130U);
    msg.setDestination(60277U);
    msg.setDestinationEntity(7U);
    msg.camid = 73U;
    msg.x = 55661U;
    msg.y = 64172U;

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
    msg.setTimeStamp(0.932587528042);
    msg.setSource(61501U);
    msg.setSourceEntity(10U);
    msg.setDestination(52715U);
    msg.setDestinationEntity(193U);
    msg.camid = 51U;
    msg.x = 46696U;
    msg.y = 4612U;

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
    msg.setTimeStamp(0.527983386052);
    msg.setSource(33386U);
    msg.setSourceEntity(42U);
    msg.setDestination(62519U);
    msg.setDestinationEntity(182U);
    msg.tracking = 23U;
    msg.lat = 0.34587077477;
    msg.lon = 0.425738842199;
    msg.x = 0.10343563935;
    msg.y = 0.536022409454;
    msg.z = 0.307088912695;

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
    msg.setTimeStamp(0.262075156615);
    msg.setSource(57066U);
    msg.setSourceEntity(141U);
    msg.setDestination(48915U);
    msg.setDestinationEntity(119U);
    msg.tracking = 201U;
    msg.lat = 0.43700501319;
    msg.lon = 0.865978374633;
    msg.x = 0.842044247196;
    msg.y = 0.819013447748;
    msg.z = 0.951761790803;

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
    msg.setTimeStamp(0.918930216643);
    msg.setSource(1337U);
    msg.setSourceEntity(182U);
    msg.setDestination(38117U);
    msg.setDestinationEntity(156U);
    msg.tracking = 110U;
    msg.lat = 0.592552286297;
    msg.lon = 0.580358712841;
    msg.x = 0.417019726628;
    msg.y = 0.0651395335566;
    msg.z = 0.462708768307;

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
    msg.setTimeStamp(0.646688869144);
    msg.setSource(23867U);
    msg.setSourceEntity(205U);
    msg.setDestination(14753U);
    msg.setDestinationEntity(103U);
    msg.target.assign("BDSDYOAACHXMVNJLVLIPDWEKHMCBJQKRCKEIROGFNLVGZUAFKOHNSKRDLEOPDIPFOQGTMFNKNBGZPLHGZSADJPRYVTJAAPFMTSXNPUFSEWCRGLBZSWFMXARIOVYKPSITTCYUTJHNHIHGIBXLSRTGLWIZOVNVOHTJMXSUYWZVAIDRBKUXQWAGMFWYZYSEETXFRCZEXIOBRVEWZ");
    msg.lbearing = 0.976326688356;
    msg.lelevation = 0.84764488117;
    msg.bearing = 0.11470991709;
    msg.elevation = 0.369927378317;
    msg.phi = 0.496945485834;
    msg.theta = 0.489977144456;
    msg.psi = 0.897553731195;
    msg.accuracy = 0.225669497079;

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
    msg.setTimeStamp(0.820599948604);
    msg.setSource(31228U);
    msg.setSourceEntity(118U);
    msg.setDestination(19830U);
    msg.setDestinationEntity(185U);
    msg.target.assign("FJOXBGQDIQGJTSCFZSORKHHTKBOBIMDODFNEIPZUCLNEKEDCAKFQFXKJELTMZYVFYMQSUBZVCGWWJYMZQAXBKPHBVTQWZCRJZCSRDVKFNUXSCLGXPQHPVNWYHDVNUFPPJURKEMNHAGJGAVSOMWOROGIALTXTPATOJXIWUTGLIFKYLIFESHQNXBACRXRAHRWZLJYNMPLSPREWEJPHNDIXQVZTUWOUYZAVYTKYSDEBAU");
    msg.lbearing = 0.596463639094;
    msg.lelevation = 0.393512533464;
    msg.bearing = 0.333336383375;
    msg.elevation = 0.88119431763;
    msg.phi = 0.0610096483023;
    msg.theta = 0.320795777593;
    msg.psi = 0.920404738059;
    msg.accuracy = 0.826184945065;

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
    msg.setTimeStamp(0.641457657713);
    msg.setSource(60454U);
    msg.setSourceEntity(171U);
    msg.setDestination(23059U);
    msg.setDestinationEntity(95U);
    msg.target.assign("IEAYFKFPIEZXUGIMNUNGWHTRCILCDMHLJ");
    msg.lbearing = 0.76803380967;
    msg.lelevation = 0.939576207781;
    msg.bearing = 0.607983103226;
    msg.elevation = 0.527003620025;
    msg.phi = 0.88506973761;
    msg.theta = 0.0738217386022;
    msg.psi = 0.38134499161;
    msg.accuracy = 0.773571642286;

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
    msg.setTimeStamp(0.0329019611154);
    msg.setSource(56884U);
    msg.setSourceEntity(253U);
    msg.setDestination(39351U);
    msg.setDestinationEntity(9U);
    msg.target.assign("QPWGNCNBZJUJNCVUIFPSLGPOZDLPOFGCCACRZGURPJOQCJLU");
    msg.x = 0.876724093846;
    msg.y = 0.683056933471;
    msg.z = 0.535234523038;
    msg.n = 0.781963060014;
    msg.e = 0.565234210147;
    msg.d = 0.15883380934;
    msg.phi = 0.794752461547;
    msg.theta = 0.824660829267;
    msg.psi = 0.7732834;
    msg.accuracy = 0.46733670924;

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
    msg.setTimeStamp(0.591441965459);
    msg.setSource(36668U);
    msg.setSourceEntity(124U);
    msg.setDestination(37045U);
    msg.setDestinationEntity(134U);
    msg.target.assign("ENWUCGUIJPHIVKTJKIZTANVLZSXNSKCJAYGDCWLQITYFUPABCGHQOVYJRTATODTRKRUWIEREDFGLCUNRRERDAIQXOXLOCDNXTPLMBWMSPGQQBDZVL");
    msg.x = 0.85294188239;
    msg.y = 0.820689129129;
    msg.z = 0.899322909863;
    msg.n = 0.443518594195;
    msg.e = 0.788915945254;
    msg.d = 0.0684095499293;
    msg.phi = 0.236566219762;
    msg.theta = 0.145016629108;
    msg.psi = 0.765644655685;
    msg.accuracy = 0.410734156103;

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
    msg.setTimeStamp(0.418302246941);
    msg.setSource(6471U);
    msg.setSourceEntity(249U);
    msg.setDestination(27825U);
    msg.setDestinationEntity(94U);
    msg.target.assign("YTNGEDEXOHCJBEIWUPXDBFNIVVTPQKDXPZAOKNDXIVIFUZJHFXZOHOLDPUQVLWNSQQADAOACIIFFUQGNNYMTWVSRRYSKWBRNGBHYQNRPOJLBFMTSMQUECDWSGUZJGZTKHDHSYGTPCIKJMTH");
    msg.x = 0.781411376538;
    msg.y = 0.925601192852;
    msg.z = 0.30578142631;
    msg.n = 0.206036502211;
    msg.e = 0.319510527975;
    msg.d = 0.0519038404884;
    msg.phi = 0.841638100401;
    msg.theta = 0.885413506622;
    msg.psi = 0.186567704222;
    msg.accuracy = 0.839135487128;

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
    msg.setTimeStamp(0.229800929997);
    msg.setSource(33201U);
    msg.setSourceEntity(253U);
    msg.setDestination(43487U);
    msg.setDestinationEntity(127U);
    msg.target.assign("FXNSOHHOOGQKBNTLNWOTMENGVHYNZMFDACXPFYZVIBOYECVEUMEPJDVSPEKCIZTMQBRNETUVTZVZULBEITLAYWPPDJKNUFPAGAASRKWJWPSLLRIGPQSXJCMWBXLARUGMKKXPLZCLIRITJTDDJSJQGOIXQHATGSZFOJJCYKNFCHJ");
    msg.lat = 0.0219033005565;
    msg.lon = 0.17099319622;
    msg.z_units = 122U;
    msg.z = 0.809239840036;
    msg.accuracy = 0.302615273869;

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
    msg.setTimeStamp(0.460568863309);
    msg.setSource(42865U);
    msg.setSourceEntity(216U);
    msg.setDestination(5478U);
    msg.setDestinationEntity(122U);
    msg.target.assign("FFSLHYGBUZTVKCLFINPWZTQYPCXRMEMLOLSHNGIKXYJPGXWOLZLFNEQHORHFECMHDVXSURQEGCDRBMYCUIOMMBARQUSQCHRQJPGAAAAUGMO");
    msg.lat = 0.193319247827;
    msg.lon = 0.466111844647;
    msg.z_units = 44U;
    msg.z = 0.0579274110706;
    msg.accuracy = 0.86280735677;

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
    msg.setTimeStamp(0.678073977289);
    msg.setSource(59799U);
    msg.setSourceEntity(166U);
    msg.setDestination(18366U);
    msg.setDestinationEntity(165U);
    msg.target.assign("BJVMTOFLPGGRBXMXAXNETTUDQSZIBXFMNYEHCYUKHCWFCALCWZPQKCQUBOKPTRQTWBWOIMNYDPZFIVASBCJZHGJVNSWODUDPLWNYMNTCMRELSKBFDGTKEITVIJAPOFMQNOPKGRRURURRYZSDHCLAXIKZPVGCEBDJEHVHDDEQGBFFOSIWLHMERHUIXOUD");
    msg.lat = 0.505607505689;
    msg.lon = 0.305700384421;
    msg.z_units = 168U;
    msg.z = 0.624190929805;
    msg.accuracy = 0.842774998627;

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
    msg.setTimeStamp(0.0666611851048);
    msg.setSource(38716U);
    msg.setSourceEntity(195U);
    msg.setDestination(54076U);
    msg.setDestinationEntity(75U);
    msg.name.assign("AWFSMHPBBKASBZYTKTSGKHMPPCDUMOFOYOXWMGPQDQLEOYZEBQIVPLLCOMXNUKTVZGPXKEAIBGFSAKENJWNUMUUZOHYLOXGTUYUDLJYFVWFQZRXNSTDCQANILLKJHPFBDSGDMSMJWIKJRRAIFNGIXYZQTVHRACHXULFWHTBTSZQVKPWXQCJHZHRCCUWACYRBFPAENJVVCQYKITRZEDNBEIOYSRLCJDJTGNIHUSXAGRFEWPL");
    msg.lat = 0.37642341873;
    msg.lon = 0.767789663327;
    msg.z = 0.381741279913;
    msg.z_units = 143U;

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
    msg.setTimeStamp(0.328849122351);
    msg.setSource(5774U);
    msg.setSourceEntity(169U);
    msg.setDestination(5697U);
    msg.setDestinationEntity(56U);
    msg.name.assign("VEGDEADJCPHJABOQZDTRZOIGISASTZONTXRXLHFZZDJHLAUKLXXMTQGPYKTTPWDPSJYESKWWTAGABCINAIKWIRMCYXVXYCUEWHNFXMKLOKEFQCGHNSEZUJQCUQNLIFCPMRDWKFLQSMCARYUPBAVBQBTGOBDPLWQQMHKDVNLZONUORXWIIMNXFNSOGFZRURGPBJSTMVSMVFJVYYPDPVIYEHKWBLOWGQKI");
    msg.lat = 0.544088182526;
    msg.lon = 0.345798813241;
    msg.z = 0.450524460506;
    msg.z_units = 122U;

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
    msg.setTimeStamp(0.187878116642);
    msg.setSource(22046U);
    msg.setSourceEntity(39U);
    msg.setDestination(61132U);
    msg.setDestinationEntity(242U);
    msg.name.assign("YCDJNVESKENGTHOOBJMRQGSELUKWOWVZFLXURAHMEBCUVFFIDGQRWBBNFROBLJJOMRTUEOFILUFXTPCTJTVRIZVGVTXHNXTSQUSYWSRYXCQYQMNIESDSZSKIMDDAZIFPWYKYECBZRFLJTOMOXTBGPBMPJBSOEDQUFRKGPCQTMFXHXZLPKHIGMAKIKUHCVPYAWZBZUPYADJINNZYRGWJPNHWWCKCHINPCQLDZHLXNUAYMLHAVEAEGOXJ");
    msg.lat = 0.747816484649;
    msg.lon = 0.977867367873;
    msg.z = 0.759709782807;
    msg.z_units = 92U;

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
    msg.setTimeStamp(0.698341431715);
    msg.setSource(15489U);
    msg.setSourceEntity(75U);
    msg.setDestination(44667U);
    msg.setDestinationEntity(127U);
    msg.op = 101U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("EQUNYPTDVCULGYTPPGCBTQLEQMREAVKAJCNLCIUGFUYSKTRVGEZSMBUDJRIHOEQDTXRBUNEPMBWIPFDLVGMBM");
    tmp_msg_0.lat = 0.634045340157;
    tmp_msg_0.lon = 0.143083002056;
    tmp_msg_0.z = 0.53623819672;
    tmp_msg_0.z_units = 217U;
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
    msg.setTimeStamp(0.231714820662);
    msg.setSource(3598U);
    msg.setSourceEntity(31U);
    msg.setDestination(13289U);
    msg.setDestinationEntity(125U);
    msg.op = 44U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("QVANDBAPXJPDUUJFBXJWHVRGWTBEUEDPBTLILRECMOJDRYCHFCTSTDGVGDISCNZHCDVQAYORGXJWLKZPVKQVWBFXSZJHHRRAKFYFCQSYKRFRAGVEQTDMALCZIBYBEWNAMITQXHLQ");
    tmp_msg_0.lat = 0.706676174848;
    tmp_msg_0.lon = 0.220599190462;
    tmp_msg_0.z = 0.453277224413;
    tmp_msg_0.z_units = 225U;
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
    msg.setTimeStamp(0.722557855967);
    msg.setSource(8173U);
    msg.setSourceEntity(152U);
    msg.setDestination(13495U);
    msg.setDestinationEntity(176U);
    msg.op = 152U;

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
    msg.setTimeStamp(0.199160453413);
    msg.setSource(56199U);
    msg.setSourceEntity(35U);
    msg.setDestination(20455U);
    msg.setDestinationEntity(183U);
    msg.value = 0.624171594619;
    msg.type = 232U;

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
    msg.setTimeStamp(0.854948936958);
    msg.setSource(47361U);
    msg.setSourceEntity(178U);
    msg.setDestination(5873U);
    msg.setDestinationEntity(138U);
    msg.value = 0.196398935241;
    msg.type = 229U;

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
    msg.setTimeStamp(0.337064416143);
    msg.setSource(35059U);
    msg.setSourceEntity(146U);
    msg.setDestination(52184U);
    msg.setDestinationEntity(180U);
    msg.value = 0.332103063098;
    msg.type = 147U;

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
    msg.setTimeStamp(0.695184402862);
    msg.setSource(27489U);
    msg.setSourceEntity(225U);
    msg.setDestination(51223U);
    msg.setDestinationEntity(17U);
    msg.value = 0.747067064285;

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
    msg.setTimeStamp(0.106193651944);
    msg.setSource(15052U);
    msg.setSourceEntity(153U);
    msg.setDestination(24082U);
    msg.setDestinationEntity(222U);
    msg.value = 0.157923256922;

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
    msg.setTimeStamp(0.989226394781);
    msg.setSource(53263U);
    msg.setSourceEntity(184U);
    msg.setDestination(57065U);
    msg.setDestinationEntity(199U);
    msg.value = 0.413776349221;

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
    msg.setTimeStamp(0.744296744558);
    msg.setSource(7070U);
    msg.setSourceEntity(208U);
    msg.setDestination(50115U);
    msg.setDestinationEntity(204U);
    msg.timestamp_last_service = 0.119401876601;
    msg.time_next_service = 0.534447229339;
    msg.time_motor_next_service = 0.987030936659;
    msg.time_idle_ground = 0.708367941529;
    msg.time_idle_air = 0.559513843265;
    msg.time_idle_water = 0.610318337664;
    msg.time_idle_underwater = 0.222014356829;
    msg.time_idle_unknown = 0.431859271783;
    msg.time_motor_ground = 0.726210573993;
    msg.time_motor_air = 0.684583972857;
    msg.time_motor_water = 0.128680550722;
    msg.time_motor_underwater = 0.188132794022;
    msg.time_motor_unknown = 0.0948590437154;
    msg.rpm_min = -2896;
    msg.rpm_max = 25735;
    msg.depth_max = 0.0963110843049;

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
    msg.setTimeStamp(0.716519031732);
    msg.setSource(30905U);
    msg.setSourceEntity(21U);
    msg.setDestination(57248U);
    msg.setDestinationEntity(145U);
    msg.timestamp_last_service = 0.396787207397;
    msg.time_next_service = 0.177658014827;
    msg.time_motor_next_service = 0.257108270672;
    msg.time_idle_ground = 0.470088941054;
    msg.time_idle_air = 0.0364717507969;
    msg.time_idle_water = 0.257709087809;
    msg.time_idle_underwater = 0.256222363286;
    msg.time_idle_unknown = 0.209579883169;
    msg.time_motor_ground = 0.0722885645678;
    msg.time_motor_air = 0.793551311394;
    msg.time_motor_water = 0.972220919606;
    msg.time_motor_underwater = 0.49379307245;
    msg.time_motor_unknown = 0.506937141121;
    msg.rpm_min = -18299;
    msg.rpm_max = 13972;
    msg.depth_max = 0.247090505378;

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
    msg.setTimeStamp(0.855429818855);
    msg.setSource(3183U);
    msg.setSourceEntity(166U);
    msg.setDestination(40493U);
    msg.setDestinationEntity(21U);
    msg.timestamp_last_service = 0.139446531604;
    msg.time_next_service = 0.309758445851;
    msg.time_motor_next_service = 0.0711914446396;
    msg.time_idle_ground = 0.59099775063;
    msg.time_idle_air = 0.347300531038;
    msg.time_idle_water = 0.395509306378;
    msg.time_idle_underwater = 0.839966551221;
    msg.time_idle_unknown = 0.417925219785;
    msg.time_motor_ground = 0.919715235682;
    msg.time_motor_air = 0.620803693859;
    msg.time_motor_water = 0.94087594415;
    msg.time_motor_underwater = 0.297549948945;
    msg.time_motor_unknown = 0.0825659038507;
    msg.rpm_min = 27754;
    msg.rpm_max = 3663;
    msg.depth_max = 0.284114236413;

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
    msg.setTimeStamp(0.000185439463974);
    msg.setSource(52106U);
    msg.setSourceEntity(74U);
    msg.setDestination(4461U);
    msg.setDestinationEntity(185U);
    msg.severity = 248U;
    msg.text.assign("UAFIWMCZMESOXJPCGIVRMYSQVNEWPHEPZEQLUIEXVLNKIFYGIDZJSAOCXGJKRZTVWRDOMTBEKQMWDGHBRABABRLWGSZFSYJYDJUPKFJLAUCBMKHGFZINOKNDDHGTIMKYYEZXURRVOSBKDRXJOQYCULPQJFTHEZBFGXHQLGEDTTYOXONCNPTFBADVLAQSONVVHBZMKCWMHSKTHQIESJFXPNNLZTCJPVUFQWNUUMGTDUAROXPLV");

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
    msg.setTimeStamp(0.632631051659);
    msg.setSource(24330U);
    msg.setSourceEntity(3U);
    msg.setDestination(11652U);
    msg.setDestinationEntity(76U);
    msg.severity = 71U;
    msg.text.assign("RJWWFNQSNKIQNGKWQJZAXIYIDSYWAQTUQRNHBTFNAEFUNBZQRZTFJXZSEXXLCHCZAYPUQIIVSRGNCTRPBGKJWXASVHIWNBTLDUKEKQHHDWPDGPKMLRWXGIGSVYQJIEWZCZHMLRTGOEMYUBERVLPVACKPZDRXXDFOPANOYJSEPVMALJSCFTLOIJFUAEBTRKJOK");

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
    msg.setTimeStamp(0.940332499678);
    msg.setSource(14617U);
    msg.setSourceEntity(72U);
    msg.setDestination(62131U);
    msg.setDestinationEntity(148U);
    msg.severity = 37U;
    msg.text.assign("XLOGWIXPWCCUQTVDFRDHGIYRZUWVXJDSSPECPQSNBOOTMEIEGSWFVOQXKUBFAYJTYLMLJWGLXRPDUPFLCUFGGTEVPBAERHQQAKYMKFZGZVDYNKWVB");

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
    msg.setTimeStamp(0.452272852857);
    msg.setSource(43887U);
    msg.setSourceEntity(159U);
    msg.setDestination(15823U);
    msg.setDestinationEntity(9U);
    msg.channel = -95;
    msg.value = -1381830523;
    msg.gain = 181U;

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
    msg.setTimeStamp(0.472498648516);
    msg.setSource(36897U);
    msg.setSourceEntity(42U);
    msg.setDestination(59704U);
    msg.setDestinationEntity(138U);
    msg.channel = 59;
    msg.value = 564272817;
    msg.gain = 20U;

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
    msg.setTimeStamp(0.278967870563);
    msg.setSource(16674U);
    msg.setSourceEntity(189U);
    msg.setDestination(12633U);
    msg.setDestinationEntity(208U);
    msg.channel = -57;
    msg.value = -1913588956;
    msg.gain = 246U;

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
    msg.setTimeStamp(0.519500733237);
    msg.setSource(34109U);
    msg.setSourceEntity(247U);
    msg.setDestination(1987U);
    msg.setDestinationEntity(157U);
    msg.ch01 = 0.907456393113;
    msg.ch02 = 0.171693793222;
    msg.ch03 = 0.0672964263946;
    msg.ch04 = 0.988987826105;
    msg.ch05 = 0.112430955581;
    msg.ch06 = 0.482648190613;
    msg.ch07 = 0.0396205237874;
    msg.ch08 = 0.742471687212;
    msg.ch09 = 0.630466784438;
    msg.ch10 = 0.670381856762;
    msg.ch11 = 0.484048460276;
    msg.ch12 = 0.522818530269;
    msg.ch13 = 0.57771656569;
    msg.ch14 = 0.988050761764;
    msg.ch15 = 0.248111230905;
    msg.ch16 = 0.618611841925;

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
    msg.setTimeStamp(0.478299262218);
    msg.setSource(46278U);
    msg.setSourceEntity(94U);
    msg.setDestination(14763U);
    msg.setDestinationEntity(54U);
    msg.ch01 = 0.810797123506;
    msg.ch02 = 0.0392858756325;
    msg.ch03 = 0.938906971239;
    msg.ch04 = 0.835379657349;
    msg.ch05 = 0.905990598813;
    msg.ch06 = 0.133788128104;
    msg.ch07 = 0.480780814119;
    msg.ch08 = 0.433380163106;
    msg.ch09 = 0.257006638611;
    msg.ch10 = 0.0274037674072;
    msg.ch11 = 0.877524819561;
    msg.ch12 = 0.73818160495;
    msg.ch13 = 0.725256717919;
    msg.ch14 = 0.486660163921;
    msg.ch15 = 0.742252579758;
    msg.ch16 = 0.00529682934119;

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
    msg.setTimeStamp(0.91798195427);
    msg.setSource(57563U);
    msg.setSourceEntity(153U);
    msg.setDestination(23175U);
    msg.setDestinationEntity(59U);
    msg.ch01 = 0.861556796987;
    msg.ch02 = 0.895066837884;
    msg.ch03 = 0.898886817291;
    msg.ch04 = 0.278610213594;
    msg.ch05 = 0.123255534375;
    msg.ch06 = 0.698763744426;
    msg.ch07 = 0.115957434421;
    msg.ch08 = 0.889588902048;
    msg.ch09 = 0.328194549241;
    msg.ch10 = 0.442198149923;
    msg.ch11 = 0.0263731918513;
    msg.ch12 = 0.811184162494;
    msg.ch13 = 0.926076549714;
    msg.ch14 = 0.764504798168;
    msg.ch15 = 0.274962636807;
    msg.ch16 = 0.615204051922;

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
    msg.setTimeStamp(0.932448000843);
    msg.setSource(41857U);
    msg.setSourceEntity(20U);
    msg.setDestination(23234U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.295029193836;
    msg.lon = 0.722799590414;
    msg.x = 0.0928938088994;
    msg.y = 0.216411167701;
    msg.z = 0.685595999718;
    msg.vx = 0.0809337712634;
    msg.vy = 0.729054505233;
    msg.vz = 0.823334230546;
    msg.depth = 36U;
    msg.speed = 0.282497214912;
    msg.psi = 0.730304573024;
    msg.omega = 0.143783064076;

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
    msg.setTimeStamp(0.432819491436);
    msg.setSource(40180U);
    msg.setSourceEntity(104U);
    msg.setDestination(4489U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.10787281194;
    msg.lon = 0.00124353165154;
    msg.x = 0.799647859882;
    msg.y = 0.688104902144;
    msg.z = 0.568527246354;
    msg.vx = 0.935491152383;
    msg.vy = 0.388593410494;
    msg.vz = 0.427782855957;
    msg.depth = 194U;
    msg.speed = 0.18582166857;
    msg.psi = 0.985184099568;
    msg.omega = 0.593719478038;

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
    msg.setTimeStamp(0.441414489466);
    msg.setSource(6034U);
    msg.setSourceEntity(219U);
    msg.setDestination(9805U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.909172387968;
    msg.lon = 0.351732825852;
    msg.x = 0.326230650433;
    msg.y = 0.665528532699;
    msg.z = 0.111747284532;
    msg.vx = 0.268551002079;
    msg.vy = 0.902891822443;
    msg.vz = 0.0849914199821;
    msg.depth = 230U;
    msg.speed = 0.0118612794518;
    msg.psi = 0.103818325303;
    msg.omega = 0.753508747673;

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
    msg.setTimeStamp(0.928367544284);
    msg.setSource(39348U);
    msg.setSourceEntity(10U);
    msg.setDestination(38809U);
    msg.setDestinationEntity(92U);
    msg.ctrl_cmd_v = 0.280401329548;
    msg.ctrl_cmd_omega = 0.897020625834;
    msg.sat_ctrl_cmd_v = 0.513215624795;
    msg.sat_ctrl_cmd_omega = 0.887861275719;
    msg.robust_v = 0.0852490971123;
    msg.robust_omega = 0.117757309228;
    msg.gamma = 0.733985676197;
    msg.gamma_dot = 0.546272128618;
    msg.gamma_ref = 0.928811953516;
    msg.g_err = 0.623460399694;
    msg.target_x = 0.522444639705;
    msg.target_y = 0.831179172557;
    msg.target_z = 0.789820930813;
    msg.target_psi = 0.795706177873;
    msg.target_vx = 0.0885135953774;
    msg.target_vy = 0.454079440361;
    msg.target_vz = 0.899653195109;
    msg.target_omega = 0.838837307195;
    msg.x = 0.297629980113;
    msg.y = 0.552123395793;
    msg.z = 0.797588562271;
    msg.psi = 0.203588769412;
    msg.vx = 0.077373554825;
    msg.vy = 0.198068944029;
    msg.vz = 0.983488153183;
    msg.pd_x = 0.348957139569;
    msg.pd_y = 0.0449333916547;
    msg.p_ref_x = 0.769572626784;
    msg.p_ref_y = 0.108777154329;
    msg.norm_mpf_err = 0.560972892828;
    msg.mpf_err_x = 0.481413633752;
    msg.mpf_err_y = 0.705849770365;
    msg.mpf_err_z = 0.67236970777;
    msg.err_x = 0.460837386856;
    msg.err_y = 0.581668077939;
    msg.err_z = 0.576351480021;
    msg.pest_x = 0.466927467232;
    msg.pest_y = 0.743487120104;
    msg.psi_est = 0.349728121511;
    msg.perr_x = 0.668504183544;
    msg.perr_y = 0.928427004326;
    msg.psi_err = 0.219653607611;
    msg.dest_x = 0.696654002776;
    msg.dest_y = 0.886722578314;
    msg.domega_est = 0.989945575118;

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
    msg.setTimeStamp(0.729358884192);
    msg.setSource(44888U);
    msg.setSourceEntity(103U);
    msg.setDestination(18478U);
    msg.setDestinationEntity(12U);
    msg.ctrl_cmd_v = 0.242702204616;
    msg.ctrl_cmd_omega = 0.790360654566;
    msg.sat_ctrl_cmd_v = 0.644809955459;
    msg.sat_ctrl_cmd_omega = 0.0328321940603;
    msg.robust_v = 0.100102472241;
    msg.robust_omega = 0.493679037695;
    msg.gamma = 0.254823423146;
    msg.gamma_dot = 0.77859759357;
    msg.gamma_ref = 0.737802328817;
    msg.g_err = 0.03315263407;
    msg.target_x = 0.133576786461;
    msg.target_y = 0.99620036547;
    msg.target_z = 0.962150175804;
    msg.target_psi = 0.0188733303157;
    msg.target_vx = 0.33071301638;
    msg.target_vy = 0.794675462931;
    msg.target_vz = 0.565605297605;
    msg.target_omega = 0.369391410469;
    msg.x = 0.774026023019;
    msg.y = 0.390005908863;
    msg.z = 0.382699631755;
    msg.psi = 0.165081416519;
    msg.vx = 0.641751432302;
    msg.vy = 0.225197921617;
    msg.vz = 0.730805372874;
    msg.pd_x = 0.632590374323;
    msg.pd_y = 0.250446357285;
    msg.p_ref_x = 0.687458335375;
    msg.p_ref_y = 0.95043876094;
    msg.norm_mpf_err = 0.0119498325558;
    msg.mpf_err_x = 0.0869791384317;
    msg.mpf_err_y = 0.349021800176;
    msg.mpf_err_z = 0.922173792168;
    msg.err_x = 0.539376439197;
    msg.err_y = 0.15591853949;
    msg.err_z = 0.795065551202;
    msg.pest_x = 0.161631416148;
    msg.pest_y = 0.689731143762;
    msg.psi_est = 0.286268741119;
    msg.perr_x = 0.391897957219;
    msg.perr_y = 0.809881989357;
    msg.psi_err = 0.633120908902;
    msg.dest_x = 0.8779466966;
    msg.dest_y = 0.225232897245;
    msg.domega_est = 0.211072826621;

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
    msg.setTimeStamp(0.995568743891);
    msg.setSource(21661U);
    msg.setSourceEntity(202U);
    msg.setDestination(8636U);
    msg.setDestinationEntity(188U);
    msg.ctrl_cmd_v = 0.326257499965;
    msg.ctrl_cmd_omega = 0.79788154708;
    msg.sat_ctrl_cmd_v = 0.298045770844;
    msg.sat_ctrl_cmd_omega = 0.0674737807858;
    msg.robust_v = 0.379764472211;
    msg.robust_omega = 0.700462782221;
    msg.gamma = 0.0491678106803;
    msg.gamma_dot = 0.95946425264;
    msg.gamma_ref = 0.724986933194;
    msg.g_err = 0.875620314089;
    msg.target_x = 0.631895966112;
    msg.target_y = 0.808451647149;
    msg.target_z = 0.35236416604;
    msg.target_psi = 0.514168488409;
    msg.target_vx = 0.277681523137;
    msg.target_vy = 0.628954437851;
    msg.target_vz = 0.628391029503;
    msg.target_omega = 0.341055991607;
    msg.x = 0.0114007481555;
    msg.y = 0.571688897975;
    msg.z = 0.0815895434955;
    msg.psi = 0.767088859352;
    msg.vx = 0.544266427622;
    msg.vy = 0.0140103924226;
    msg.vz = 0.514454537855;
    msg.pd_x = 0.786532525202;
    msg.pd_y = 0.625600271192;
    msg.p_ref_x = 0.43888743789;
    msg.p_ref_y = 0.184131696056;
    msg.norm_mpf_err = 0.0236254439871;
    msg.mpf_err_x = 0.380390712277;
    msg.mpf_err_y = 0.00792553279302;
    msg.mpf_err_z = 0.0248073457318;
    msg.err_x = 0.301192088659;
    msg.err_y = 0.768019241586;
    msg.err_z = 0.804340162154;
    msg.pest_x = 0.120205393994;
    msg.pest_y = 0.590869626485;
    msg.psi_est = 0.452676100884;
    msg.perr_x = 0.581123398646;
    msg.perr_y = 0.829829264071;
    msg.psi_err = 0.266701707764;
    msg.dest_x = 0.340708041785;
    msg.dest_y = 0.730079364447;
    msg.domega_est = 0.172833904591;

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
    msg.setTimeStamp(0.624650615413);
    msg.setSource(12064U);
    msg.setSourceEntity(27U);
    msg.setDestination(7899U);
    msg.setDestinationEntity(125U);
    msg.gamma = 0.757698423936;
    msg.systemid = 117U;

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
    msg.setTimeStamp(0.825759832503);
    msg.setSource(45540U);
    msg.setSourceEntity(216U);
    msg.setDestination(17471U);
    msg.setDestinationEntity(224U);
    msg.gamma = 0.782825235144;
    msg.systemid = 217U;

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
    msg.setTimeStamp(0.344490377515);
    msg.setSource(26582U);
    msg.setSourceEntity(181U);
    msg.setDestination(29497U);
    msg.setDestinationEntity(53U);
    msg.gamma = 0.755231334421;
    msg.systemid = 241U;

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
    msg.setTimeStamp(0.860179496203);
    msg.setSource(63996U);
    msg.setSourceEntity(210U);
    msg.setDestination(65486U);
    msg.setDestinationEntity(130U);
    msg.value = 0.217431518194;

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
    msg.setTimeStamp(0.785396433012);
    msg.setSource(60792U);
    msg.setSourceEntity(210U);
    msg.setDestination(17423U);
    msg.setDestinationEntity(211U);
    msg.value = 0.381521842012;

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
    msg.setTimeStamp(0.373307505954);
    msg.setSource(39261U);
    msg.setSourceEntity(237U);
    msg.setDestination(41393U);
    msg.setDestinationEntity(181U);
    msg.value = 0.0373396294352;

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
