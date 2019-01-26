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
// IMC XML MD5: a18b01fa9c94fda29288d50d199f56f3                            *
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
    msg.setTimeStamp(0.826443032487);
    msg.setSource(5039U);
    msg.setSourceEntity(210U);
    msg.setDestination(22987U);
    msg.setDestinationEntity(134U);
    msg.state = 65U;
    msg.flags = 169U;
    msg.description.assign("YVVKKAPPQQRCGEKCHLDBTVMPKRRSLFOGQADZOHWJZACWFHSAJYOTTCFESEHUNRTUQUIVEJWSZZLPZTICMWLKPOXRIGUQSLCTVMBDSYOMGLQDDWYNNZAHRQSILWLOARYBXBWNOGTPMHQLRKHAYEJRANUETCUXPZHCNLBBDJNCTGZF");

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
    msg.setTimeStamp(0.926150354183);
    msg.setSource(27766U);
    msg.setSourceEntity(153U);
    msg.setDestination(58180U);
    msg.setDestinationEntity(215U);
    msg.state = 63U;
    msg.flags = 61U;
    msg.description.assign("WMPURZAOBTMD");

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
    msg.setTimeStamp(0.290777970068);
    msg.setSource(44466U);
    msg.setSourceEntity(179U);
    msg.setDestination(52806U);
    msg.setDestinationEntity(124U);
    msg.state = 135U;
    msg.flags = 115U;
    msg.description.assign("XOOGGLJZVTGQZGTOJDWZFTTOTKXJULJHRIWAFIBAKULHFELOJCBHLIKVUWXSXBBPANNCBMEAYOWSEZEQVDHYMRJLMQQDSULBOPACSUPNYHTHEUBCBVNLUMPMUFGNZQPMKHZKKAAFNDZXT");

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
    msg.setTimeStamp(0.611239768746);
    msg.setSource(42557U);
    msg.setSourceEntity(232U);
    msg.setDestination(23977U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.136039505098);
    msg.setSource(25314U);
    msg.setSourceEntity(170U);
    msg.setDestination(12107U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.270429871223);
    msg.setSource(54164U);
    msg.setSourceEntity(196U);
    msg.setDestination(12025U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.403767014288);
    msg.setSource(33295U);
    msg.setSourceEntity(200U);
    msg.setDestination(11574U);
    msg.setDestinationEntity(244U);
    msg.id = 146U;
    msg.label.assign("YRPVCRHBBTZFZWNFVWUIYWKLOXOSOSJ");
    msg.component.assign("GMEMGBIDDFTBYLDQAOJPYYPFCKNVIBWUBXAPBSXMFGUGMSFSDJVHEZKKATFSMNQNJZVCOIYIHNUKGJXJUYHCGNEUYJTIZLARQUGYNDRMTOYXMGXRHRSEVEBRQVSZWLJXRDFWJOKPQRHEABWUVOIPWWHVRNCYKAFCBGRUZILHTZTHFEKDDODZIPXXCABXIMXPCNVMWDSNWTESOELLQNQAUA");
    msg.act_time = 40460U;
    msg.deact_time = 45620U;

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
    msg.setTimeStamp(0.898152697989);
    msg.setSource(44640U);
    msg.setSourceEntity(75U);
    msg.setDestination(41455U);
    msg.setDestinationEntity(213U);
    msg.id = 125U;
    msg.label.assign("DNXJLBWJZYIKBHZDSDECJWLTPLJAHFTGNYYQSYMIXFZGOVOUCLAUCGDVWBVAQDECXOPNRMVKZQIRQFGVIIXWHPGTBNQMKEEWIQQRXHCUYOJMCROPDNFLBQKYMBIJZ");
    msg.component.assign("QMFHAWBFIWHCFFHJARCPVRKGXSCSLTGRUQFUYVVZWJTKOIEVNOBAJLCYZSXEUYNTVZUADFNCDNARWDQSOROCWIMGJTNTTOBYSC");
    msg.act_time = 59381U;
    msg.deact_time = 26663U;

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
    msg.setTimeStamp(0.770855226749);
    msg.setSource(14408U);
    msg.setSourceEntity(154U);
    msg.setDestination(28825U);
    msg.setDestinationEntity(249U);
    msg.id = 65U;
    msg.label.assign("JUJPFREGQWBSYADHNFHWJVLXIBBVBZQLWOHJQTWBFIEBONOWKFTWRESAQJQXTRKDZTISZZZIKCOARAYMXGYKMPVFXGKPZADVPSUFRVEHCGAVETYALJHOEOLMZIINRCFZVGATPKDFWQYJGPHDBDTQY");
    msg.component.assign("LIWKYFZZPIEQDREMUSDJBBPPCPHWLQWNTOQUFMLTJOCWMSDJCNLIXUQJVZSTXBMYJUEXYVAVAPKMZY");
    msg.act_time = 39673U;
    msg.deact_time = 31102U;

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
    msg.setTimeStamp(0.468767510221);
    msg.setSource(46789U);
    msg.setSourceEntity(109U);
    msg.setDestination(27983U);
    msg.setDestinationEntity(171U);
    msg.id = 83U;

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
    msg.setTimeStamp(0.947945630586);
    msg.setSource(62932U);
    msg.setSourceEntity(205U);
    msg.setDestination(25466U);
    msg.setDestinationEntity(120U);
    msg.id = 50U;

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
    msg.setTimeStamp(0.518143682457);
    msg.setSource(8146U);
    msg.setSourceEntity(99U);
    msg.setDestination(13530U);
    msg.setDestinationEntity(93U);
    msg.id = 121U;

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
    msg.setTimeStamp(0.397721613714);
    msg.setSource(34975U);
    msg.setSourceEntity(16U);
    msg.setDestination(44612U);
    msg.setDestinationEntity(23U);
    msg.op = 121U;
    msg.list.assign("EGNDGCVTJXUYELEKLHREZBRZSMJUDEYJATOQMAPIGXVNHOTIVCVNKODONTIQGQMPWTMUNZLLLYWGTXGQQHWPSUEVSWDAXDILFAJNJXZKNJCZPHBUOBZQHRROHMFOFPAMKCGYUKGGKMFCKZEQBD");

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
    msg.setTimeStamp(0.686739351043);
    msg.setSource(44176U);
    msg.setSourceEntity(70U);
    msg.setDestination(45593U);
    msg.setDestinationEntity(177U);
    msg.op = 128U;
    msg.list.assign("YKASGLMQWPEXGCRGUWRHGFVZEXTDZRAEIINMHKUFQHBVKJQSQYXDAESRBWKSIIEZXQOVSJQZAHFCVLOSPDJRICMHLDZECOAPZBLJMJWTT");

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
    msg.setTimeStamp(0.327925153671);
    msg.setSource(38707U);
    msg.setSourceEntity(147U);
    msg.setDestination(3203U);
    msg.setDestinationEntity(234U);
    msg.op = 2U;
    msg.list.assign("QDWZPWHSOYOFIEUWJRJIDJGKLTHNTYWUMSLVZQEKOIZHITMDBXTYYY");

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
    msg.setTimeStamp(0.714607989764);
    msg.setSource(48140U);
    msg.setSourceEntity(104U);
    msg.setDestination(3105U);
    msg.setDestinationEntity(174U);
    msg.value = 54U;

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
    msg.setTimeStamp(0.615037499046);
    msg.setSource(25708U);
    msg.setSourceEntity(107U);
    msg.setDestination(6433U);
    msg.setDestinationEntity(90U);
    msg.value = 13U;

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
    msg.setTimeStamp(0.0802469968407);
    msg.setSource(40960U);
    msg.setSourceEntity(9U);
    msg.setDestination(13598U);
    msg.setDestinationEntity(174U);
    msg.value = 91U;

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
    msg.setTimeStamp(0.560683293364);
    msg.setSource(11701U);
    msg.setSourceEntity(121U);
    msg.setDestination(34209U);
    msg.setDestinationEntity(32U);
    msg.consumer.assign("UZEHDWWJXOAENYSJUTDWXAHATKBWIDPEDAGDOTVZKEROFAVLYPREFXHFZIVDISCTQARNHVUCBKZLSHUXQJELIYCLSLNTKVROGBGHFYNUVRXCLMQHFMGRSDFOXNFJCVITMQKAMEWYOPMCSOHQUEYISRXPKPWWIYNELZGCHFJQJPYQRTLBVOWZUQPGXDLYW");
    msg.message_id = 45223U;

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
    msg.setTimeStamp(0.17312155925);
    msg.setSource(16915U);
    msg.setSourceEntity(170U);
    msg.setDestination(44293U);
    msg.setDestinationEntity(14U);
    msg.consumer.assign("UKCIWOGIPTCTQWVUCZSNXHGINJQLOKLDPDZZGEWCCCUPBLSKWVIHXFYRAQRMTWWYCIWHLKZULADQYFSGSXJTPPVCBERKNWZTGQERBYMRBHHUAXBETLNRHEPFFKTKRVXAMWNSKMBXVDRVMSVZHOGEOVCASPJJILUYLADNTBEOCFHADYXOXZYYPUSWINHUHFVVJMBISJIJEMKAQIFXZPNJDGJROYMSEDNKUPMTLFO");
    msg.message_id = 14610U;

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
    msg.setTimeStamp(0.851911184336);
    msg.setSource(64131U);
    msg.setSourceEntity(20U);
    msg.setDestination(19013U);
    msg.setDestinationEntity(133U);
    msg.consumer.assign("ALRUQGDXWURNXAYHFBWRDTQPCDZMIWBCSHZSEKVVNCSOHNMLRCCNQEZFKDCAHDYLPI");
    msg.message_id = 10695U;

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
    msg.setTimeStamp(0.74945640727);
    msg.setSource(65202U);
    msg.setSourceEntity(224U);
    msg.setDestination(21477U);
    msg.setDestinationEntity(169U);
    msg.type = 154U;

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
    msg.setTimeStamp(0.552084798509);
    msg.setSource(26842U);
    msg.setSourceEntity(63U);
    msg.setDestination(44559U);
    msg.setDestinationEntity(98U);
    msg.type = 233U;

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
    msg.setTimeStamp(0.754350743904);
    msg.setSource(15133U);
    msg.setSourceEntity(138U);
    msg.setDestination(14057U);
    msg.setDestinationEntity(51U);
    msg.type = 170U;

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
    msg.setTimeStamp(0.552731007517);
    msg.setSource(42580U);
    msg.setSourceEntity(9U);
    msg.setDestination(21420U);
    msg.setDestinationEntity(204U);
    msg.op = 243U;

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
    msg.setTimeStamp(0.00188061431716);
    msg.setSource(62910U);
    msg.setSourceEntity(163U);
    msg.setDestination(17508U);
    msg.setDestinationEntity(160U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.561857106566);
    msg.setSource(12596U);
    msg.setSourceEntity(116U);
    msg.setDestination(52393U);
    msg.setDestinationEntity(149U);
    msg.op = 118U;

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
    msg.setTimeStamp(0.758715801111);
    msg.setSource(7065U);
    msg.setSourceEntity(199U);
    msg.setDestination(14120U);
    msg.setDestinationEntity(252U);
    msg.total_steps = 249U;
    msg.step_number = 164U;
    msg.step.assign("ZQGDFCBGSAQBXDQGKIQUFTYKHGHJDSLZNPUCXNOYZCIVYPTKNBLYYHMGKBWAIYJPDTRHJHORFBJVREAIGJVJDAXTMCJMIPURNXVLPIUHKJGZPMTKNJCVETUHLPZNRZZBLBMHORLXDXZKSKAIVNDBMQWPFSCAXXYYUWO");
    msg.flags = 166U;

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
    msg.setTimeStamp(0.168742673088);
    msg.setSource(58218U);
    msg.setSourceEntity(59U);
    msg.setDestination(60857U);
    msg.setDestinationEntity(200U);
    msg.total_steps = 168U;
    msg.step_number = 162U;
    msg.step.assign("THUKQJTJFNMBVKLGHPJMMGPSPWBODJCIGXQZNCVTLTACWCXRYWIAEHHQQSOJODNEKLXZRJTHRZAVIIYEGNYYWOAGAOPKDDUSPFNXGSYEVEUDOFJKFMRUVMRIQAWYTWRVTSOCHNSPBLTWIAFOGBNMCIRLBDMHIVXUXCQUEKDZWZVPBNMLUFHTQYKXBXAYSSBFKREDVKYJLIRGSZXUCNGUDZVZQKOEBHJESPFTRPAMFCWBLNZDQ");
    msg.flags = 92U;

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
    msg.setTimeStamp(0.387209063118);
    msg.setSource(55582U);
    msg.setSourceEntity(149U);
    msg.setDestination(48764U);
    msg.setDestinationEntity(72U);
    msg.total_steps = 32U;
    msg.step_number = 112U;
    msg.step.assign("WKCQHLYSXVLGNRBFENFFZRNPWPRCQWGAUEAKPDYQDGNJKEAJJCZNVEHLMV");
    msg.flags = 62U;

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
    msg.setTimeStamp(0.710904424875);
    msg.setSource(26566U);
    msg.setSourceEntity(210U);
    msg.setDestination(48050U);
    msg.setDestinationEntity(118U);
    msg.state = 224U;
    msg.error.assign("RPLPYIKSBUQSNTQXFBXQPKMJXDNPZDKFGCW");

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
    msg.setTimeStamp(0.796378127384);
    msg.setSource(27285U);
    msg.setSourceEntity(232U);
    msg.setDestination(49559U);
    msg.setDestinationEntity(145U);
    msg.state = 222U;
    msg.error.assign("IEKGEVMWEHOPKZLQPITNSJPQLKQULBPYCLJYAVHNNVEJBVSAVFIABQTSSNGYUREFSRXYLQVZLOZDQSPRHMGCTLZLWZJACTMZDBBJCWIRRTDTJSYHUEQBOIZOHBDOPLCQKLR");

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
    msg.setTimeStamp(0.70604121424);
    msg.setSource(20204U);
    msg.setSourceEntity(46U);
    msg.setDestination(48621U);
    msg.setDestinationEntity(178U);
    msg.state = 187U;
    msg.error.assign("FTVTSAQWRFIPNHEJEVOGCYAIEOVAAQXCBPMKEXIBXSUQVSWNRWLTJLYZBZ");

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
    msg.setTimeStamp(0.404590313655);
    msg.setSource(61801U);
    msg.setSourceEntity(142U);
    msg.setDestination(36739U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.0562083888421);
    msg.setSource(6256U);
    msg.setSourceEntity(31U);
    msg.setDestination(34594U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.887195712167);
    msg.setSource(14607U);
    msg.setSourceEntity(91U);
    msg.setDestination(34402U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.955266074244);
    msg.setSource(34299U);
    msg.setSourceEntity(39U);
    msg.setDestination(36082U);
    msg.setDestinationEntity(131U);
    msg.op = 101U;
    msg.speed_min = 0.397332795344;
    msg.speed_max = 0.762498924746;
    msg.long_accel = 0.683483761202;
    msg.alt_max_msl = 0.0340162947414;
    msg.dive_fraction_max = 0.906708722196;
    msg.climb_fraction_max = 0.879188196387;
    msg.bank_max = 0.961608082083;
    msg.p_max = 0.567610021888;
    msg.pitch_min = 0.751199782016;
    msg.pitch_max = 0.355049474422;
    msg.q_max = 0.795238489694;
    msg.g_min = 0.489468400624;
    msg.g_max = 0.147035775475;
    msg.g_lat_max = 0.983319123556;
    msg.rpm_min = 0.5519474601;
    msg.rpm_max = 0.495392706077;
    msg.rpm_rate_max = 0.89582984769;

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
    msg.setTimeStamp(0.547187548443);
    msg.setSource(40588U);
    msg.setSourceEntity(186U);
    msg.setDestination(15451U);
    msg.setDestinationEntity(35U);
    msg.op = 116U;
    msg.speed_min = 0.560965970772;
    msg.speed_max = 0.302364676697;
    msg.long_accel = 0.837049203969;
    msg.alt_max_msl = 0.447306810726;
    msg.dive_fraction_max = 0.393937938602;
    msg.climb_fraction_max = 0.75598329012;
    msg.bank_max = 0.2305683667;
    msg.p_max = 0.547084299079;
    msg.pitch_min = 0.761977680517;
    msg.pitch_max = 0.785842516567;
    msg.q_max = 0.294519995308;
    msg.g_min = 0.793314936931;
    msg.g_max = 0.174715238487;
    msg.g_lat_max = 0.205733887252;
    msg.rpm_min = 0.514905644708;
    msg.rpm_max = 0.705756430753;
    msg.rpm_rate_max = 0.0241209666093;

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
    msg.setTimeStamp(0.549532547442);
    msg.setSource(30431U);
    msg.setSourceEntity(10U);
    msg.setDestination(12440U);
    msg.setDestinationEntity(213U);
    msg.op = 61U;
    msg.speed_min = 0.86993046097;
    msg.speed_max = 0.875361160823;
    msg.long_accel = 0.686562668294;
    msg.alt_max_msl = 0.69988412526;
    msg.dive_fraction_max = 0.192831968666;
    msg.climb_fraction_max = 0.626337432518;
    msg.bank_max = 0.860629591506;
    msg.p_max = 0.632654336419;
    msg.pitch_min = 0.481792687378;
    msg.pitch_max = 0.220148791347;
    msg.q_max = 0.412811355768;
    msg.g_min = 0.172391419347;
    msg.g_max = 0.0333657767176;
    msg.g_lat_max = 0.693965051604;
    msg.rpm_min = 0.964690350628;
    msg.rpm_max = 0.0349566350322;
    msg.rpm_rate_max = 0.914358208623;

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
    msg.setTimeStamp(0.807877421812);
    msg.setSource(2424U);
    msg.setSourceEntity(9U);
    msg.setDestination(42487U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.914537115397);
    msg.setSource(61099U);
    msg.setSourceEntity(106U);
    msg.setDestination(2241U);
    msg.setDestinationEntity(95U);
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("NTXXSWXATOAIXTRGPKWPUJJMWBAFPJYIFEIFELBCGFRRSTCQWHTNDXRLLLZLJJNTAYHPLMIUFWIDBR");
    tmp_msg_0.reference_frame = 168U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 44477U;
    tmp_tmp_msg_0_0.off_x = 0.1507961247;
    tmp_tmp_msg_0_0.off_y = 0.438184538413;
    tmp_tmp_msg_0_0.off_z = 0.446650332379;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("PYUNYIDKOTDLZWQFBMNPFAOWUZQRAAMVEJACMXGDFZTSIEXWRILQZIUNJNEJTPGDSCFELILBSBRHZILUVHKYPQYGNCRMDCQ");
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
    msg.setTimeStamp(0.247836326579);
    msg.setSource(36094U);
    msg.setSourceEntity(116U);
    msg.setDestination(24972U);
    msg.setDestinationEntity(176U);
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.678918565468;
    tmp_msg_0.reason = 192U;
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
    msg.setTimeStamp(0.905983992726);
    msg.setSource(15227U);
    msg.setSourceEntity(252U);
    msg.setDestination(2783U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.117895461173;
    msg.lon = 0.757376455364;
    msg.height = 0.472925624654;
    msg.x = 0.515745238905;
    msg.y = 0.8683827218;
    msg.z = 0.297527244584;
    msg.phi = 0.77029492601;
    msg.theta = 0.65625406322;
    msg.psi = 0.744646580386;
    msg.u = 0.142123065414;
    msg.v = 0.3800173525;
    msg.w = 0.440631483629;
    msg.p = 0.877487849999;
    msg.q = 0.964494925968;
    msg.r = 0.154869748147;
    msg.svx = 0.548566432114;
    msg.svy = 0.668526155617;
    msg.svz = 0.480429204597;

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
    msg.setTimeStamp(0.121100833967);
    msg.setSource(59736U);
    msg.setSourceEntity(33U);
    msg.setDestination(12247U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.124954323947;
    msg.lon = 0.105070298261;
    msg.height = 0.330222457083;
    msg.x = 0.219823646976;
    msg.y = 0.775884391011;
    msg.z = 0.143609194721;
    msg.phi = 0.560300390606;
    msg.theta = 0.272106786304;
    msg.psi = 0.450523280088;
    msg.u = 0.252655138987;
    msg.v = 0.277368518591;
    msg.w = 0.994470078436;
    msg.p = 0.364354248325;
    msg.q = 0.440993320193;
    msg.r = 0.880767746478;
    msg.svx = 0.36235811628;
    msg.svy = 0.0516944371307;
    msg.svz = 0.95904181975;

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
    msg.setTimeStamp(0.57725592195);
    msg.setSource(22209U);
    msg.setSourceEntity(96U);
    msg.setDestination(15872U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.976603254421;
    msg.lon = 0.991165172733;
    msg.height = 0.154678619026;
    msg.x = 0.160748340116;
    msg.y = 0.629485889637;
    msg.z = 0.629423951478;
    msg.phi = 0.360789105211;
    msg.theta = 0.33484165205;
    msg.psi = 0.599310059905;
    msg.u = 0.50693995078;
    msg.v = 0.833700888077;
    msg.w = 0.782499743275;
    msg.p = 0.671741888285;
    msg.q = 0.391684787692;
    msg.r = 0.525912745604;
    msg.svx = 0.784996651533;
    msg.svy = 0.455747987744;
    msg.svz = 0.669793622991;

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
    msg.setTimeStamp(0.951181662041);
    msg.setSource(43810U);
    msg.setSourceEntity(134U);
    msg.setDestination(31249U);
    msg.setDestinationEntity(195U);
    msg.op = 138U;
    msg.entities.assign("THGFHWANCYEDQLWYKLQKFIETXMYJWGTSBGIJXWVPZVPFDEGZSATVPLPMWGXFNUFPAHQMEXHOVVTAZMQPALEMURIWDWOCVMMBTOIRKYZUESJJHCJMTQGBNIERANBGZPBRJAOBYAMHEYDCFOQDXBLLCSCXDNLERLAANUNSHOQRBBHUOWBVXIYVTSQMRTQCESZNHZKNXWCCVNLDUUUFFRGXDZHXKZLQYSUKDIWZJJVPOSJYJI");

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
    msg.setTimeStamp(0.460922634081);
    msg.setSource(29862U);
    msg.setSourceEntity(217U);
    msg.setDestination(18585U);
    msg.setDestinationEntity(134U);
    msg.op = 228U;
    msg.entities.assign("EDWSBUIBSRHWXMYCMMRHRHIZSLOTLARZMTDWVCBOZNA");

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
    msg.setTimeStamp(0.225790929297);
    msg.setSource(41035U);
    msg.setSourceEntity(139U);
    msg.setDestination(10447U);
    msg.setDestinationEntity(112U);
    msg.op = 166U;
    msg.entities.assign("FHEZDBEHKPKSQITZC");

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
    msg.setTimeStamp(0.699900419815);
    msg.setSource(53697U);
    msg.setSourceEntity(107U);
    msg.setDestination(15671U);
    msg.setDestinationEntity(253U);
    msg.type = 111U;
    msg.speed = 52687U;
    const char tmp_msg_0[] = {-104, 54, 105, 83, 43, -81, -55, 101, 20, 112, -74, 118, -21, 64, 84, 89, -1, -94, 12, -17, 58, -97, 11, 107, 10, -108, -12, 5, -93, 58, 36, 64, 122, 122, -106, 67, 112, -90, -12, 37, -18, -121, -122, 7, -2, -25, 113, 42, 67, -34, -5, -51, 47, 31, 5, 120, 18, -103, -8, -102, -93, 63, -51, 67, -60, -45, -15, -94, 17, 21, 18, -122, 104, 105, -19, 92, -77, -26, 19, -27, 71, 9, 54, 110, -102, -34, 40, 50, 57, -69, 41, 63, 62, 31, 2, -87, -62, -7, 45, 73, 77, 49, 57, -89, -72, 50, -128, -82, -113, -107, -54, 21, 120, 60, 13, -63, -56, -98, -99, -7, 92, -118, 56, 60, 3, -45, 21, -77, 105, 94, 40, -51, 82, -26, 30, 41, -83, -81, -45, 6, 7, -111, -94, 117, 11, -41, 83, 18, -19, -59, -76, -29, -35, -85, -57, 124, 108, -99, 100, -44, 61, 76, -126, 2, -6, -118, 33, 37, 63, 63, -48, 30, 118, 17, -50, -121, 67, 51, -45, 112, -109, -107, 44, 124};
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
    msg.setTimeStamp(0.0137246084536);
    msg.setSource(55792U);
    msg.setSourceEntity(169U);
    msg.setDestination(37642U);
    msg.setDestinationEntity(186U);
    msg.type = 100U;
    msg.speed = 42020U;
    const char tmp_msg_0[] = {-86, -127, 107, -114, 71, 88, 24, 50, -47, -66, -3, -47, 56, -13, 72, 41, -106, 47, 117, -99, -59, -47, -12, 29, -40, -101, 68, 28, 15, -51, 86, 56, -68, -12, -124, -46, 17, 33, -23, 96, -77, -103, 90, -118, -115, 7, -71, -115, 77, 114, -40, 122, -58, 35, -61, -67, -120, -97, -56, 85, -33, -13, -80, -58, 77, -100, -49, -85, -63, -84, 98};
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
    msg.setTimeStamp(0.179960351766);
    msg.setSource(45618U);
    msg.setSourceEntity(7U);
    msg.setDestination(55026U);
    msg.setDestinationEntity(122U);
    msg.type = 183U;
    msg.speed = 28625U;
    const char tmp_msg_0[] = {-28, -98, 67, -119, -38, -39, 27, 123, -119, 74, 65, 117, -51, -78, 32, 48, 125, 16, -114, -119, 28, -64, -109, 53, -114, -21, -26, -42, 112, -3, -77, 37, 57, 98, 115, 5, 121, 84, -100, -9, -118, 113, -108, -6, 60, 122, -42, -116, -3, -118, -88, 84, -3, -110, -7, 19, -46, -46, -100, 101, 37, -110, -94, 71, -77, 4, 123, 35, -84, 109, 63, 89, 73, 11, 75, 38, -114};
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
    msg.setTimeStamp(0.81344357098);
    msg.setSource(48143U);
    msg.setSourceEntity(140U);
    msg.setDestination(8080U);
    msg.setDestinationEntity(50U);
    msg.op = 91U;
    msg.tas2acc_pgain = 0.42715255307;
    msg.bank2p_pgain = 0.971357242261;

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
    msg.setTimeStamp(0.677552629012);
    msg.setSource(39029U);
    msg.setSourceEntity(19U);
    msg.setDestination(54840U);
    msg.setDestinationEntity(237U);
    msg.op = 60U;
    msg.tas2acc_pgain = 0.167428069856;
    msg.bank2p_pgain = 0.244069998322;

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
    msg.setTimeStamp(0.953478823205);
    msg.setSource(15133U);
    msg.setSourceEntity(137U);
    msg.setDestination(42629U);
    msg.setDestinationEntity(62U);
    msg.op = 62U;
    msg.tas2acc_pgain = 0.973691355574;
    msg.bank2p_pgain = 0.545511176577;

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
    msg.setTimeStamp(0.0915182115648);
    msg.setSource(23097U);
    msg.setSourceEntity(55U);
    msg.setDestination(20382U);
    msg.setDestinationEntity(197U);
    msg.available = 2965585010U;
    msg.value = 174U;

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
    msg.setTimeStamp(0.476836760726);
    msg.setSource(24477U);
    msg.setSourceEntity(198U);
    msg.setDestination(6417U);
    msg.setDestinationEntity(46U);
    msg.available = 520154390U;
    msg.value = 155U;

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
    msg.setTimeStamp(0.392788413497);
    msg.setSource(28716U);
    msg.setSourceEntity(200U);
    msg.setDestination(45812U);
    msg.setDestinationEntity(254U);
    msg.available = 2173568462U;
    msg.value = 104U;

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
    msg.setTimeStamp(0.802952648769);
    msg.setSource(37850U);
    msg.setSourceEntity(26U);
    msg.setDestination(33866U);
    msg.setDestinationEntity(212U);
    msg.op = 20U;
    msg.snapshot.assign("MSFSBQLJBQOYPZDKQSFFVDMCHNAESIVUANAZCLJROVQBRHABDKXVBITLKZLKSL");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.0301929340158;
    tmp_msg_0.lon = 0.954675323444;
    tmp_msg_0.depth = 0.5465223279;
    tmp_msg_0.roll = 0.00106189482822;
    tmp_msg_0.pitch = 0.61574647387;
    tmp_msg_0.yaw = 0.769760860726;
    tmp_msg_0.rcp_time = 0.858771329201;
    tmp_msg_0.sid.assign("TDYLBLXVDTSQTNUKLRDPIAOGVUGEHFZBJIUNBMYZKTHYGGYCJKFEMYDGPQZTPQNRIBPOCTRKEWEIVCOHIANBCQJFNNSMBHFNJSQYQUUBWMVWDORSLYJSFIFZWABOEPHMWIWWKZZGCHSKXTQSLMDGWHVCAZWQXDAJJTUPKXFULEPKXBKOVZRCNURIFEWZRZUYTMAPPLIMGKXCOJQHJR");
    tmp_msg_0.s_type = 49U;
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
    msg.setTimeStamp(0.91788515317);
    msg.setSource(15621U);
    msg.setSourceEntity(230U);
    msg.setDestination(26429U);
    msg.setDestinationEntity(184U);
    msg.op = 144U;
    msg.snapshot.assign("XNTUAFOJCYNFOQTPTWIXVLHUEMQRSBEXCFEUVBWRWYHZDKMCVTRNCAKEL");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 48622U;
    tmp_msg_0.lat = 0.0307408257009;
    tmp_msg_0.lon = 0.363189952242;
    tmp_msg_0.z = 0.949389057322;
    tmp_msg_0.z_units = 241U;
    tmp_msg_0.speed = 0.104049567307;
    tmp_msg_0.speed_units = 251U;
    tmp_msg_0.bearing = 0.717991700207;
    tmp_msg_0.cross_angle = 0.418541995583;
    tmp_msg_0.width = 0.948772478471;
    tmp_msg_0.length = 0.0885949535611;
    tmp_msg_0.hstep = 0.167907522795;
    tmp_msg_0.coff = 63U;
    tmp_msg_0.alternation = 4U;
    tmp_msg_0.flags = 88U;
    tmp_msg_0.custom.assign("KWYBPFDVXWQJTJMFGMTMMZAAZLDSNHOVIYGBQJZRABYVBYLACWIRZASLXGTNKCTQTEJNWOGNHBLFHDECXJAUARZHZVPANNYS");
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
    msg.setTimeStamp(0.601671774008);
    msg.setSource(11661U);
    msg.setSourceEntity(1U);
    msg.setDestination(43592U);
    msg.setDestinationEntity(140U);
    msg.op = 185U;
    msg.snapshot.assign("RJQWAABBNKCHFUEUPIHUUIONCSNYLNLSMKGOWIXBSKEPPJK");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 60083U;
    tmp_msg_0.lat = 0.323211636306;
    tmp_msg_0.lon = 0.67898290096;
    tmp_msg_0.z = 0.372175681858;
    tmp_msg_0.z_units = 165U;
    tmp_msg_0.pitch = 0.625504275007;
    tmp_msg_0.amplitude = 0.499116643594;
    tmp_msg_0.duration = 27239U;
    tmp_msg_0.speed = 0.290360455933;
    tmp_msg_0.speed_units = 224U;
    tmp_msg_0.radius = 0.0146003266061;
    tmp_msg_0.direction = 66U;
    tmp_msg_0.custom.assign("GLXPMMDHVOEBFAUEIOY");
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
    msg.setTimeStamp(0.964389807347);
    msg.setSource(44065U);
    msg.setSourceEntity(225U);
    msg.setDestination(36739U);
    msg.setDestinationEntity(123U);
    msg.op = 251U;
    msg.name.assign("QEHJJOJSLQOOBIBEWZBFRWMF");

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
    msg.setTimeStamp(0.941235796986);
    msg.setSource(55091U);
    msg.setSourceEntity(194U);
    msg.setDestination(31812U);
    msg.setDestinationEntity(115U);
    msg.op = 85U;
    msg.name.assign("OBRWGLOPXLECTXLYWVYSMNMREVEOCPEL");

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
    msg.setTimeStamp(0.475197449205);
    msg.setSource(35346U);
    msg.setSourceEntity(172U);
    msg.setDestination(23280U);
    msg.setDestinationEntity(98U);
    msg.op = 96U;
    msg.name.assign("YNXAGXTRECUHVNEXLPJIXAUQQKTGOCYSXPXALXRWEIVGFZJHJUBJYUZCFTKPJLUHCJDDBNANZBZKJEEOFSNDRKBPWZMXNSOOCFFAVPRSAMQZFCSTNLFWFZWPHWBVUVUIRMIIHYLUHIYMEIRHMYBVIEADQULBSKRDQMZVKLQFICSYZGTYNNMWTHQGXMCGDTGRAIJ");

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
    msg.setTimeStamp(0.16620852641);
    msg.setSource(51850U);
    msg.setSourceEntity(80U);
    msg.setDestination(11131U);
    msg.setDestinationEntity(186U);
    msg.type = 227U;
    msg.htime = 0.385150611064;
    msg.context.assign("NOSBSNXEQYCZDAGPKOMQBBEYNBLTUQWJNOWSTIYVFFCOFFMAUCRGVHOHGHYGBXCSDPXZCLGUEQZAMORNEDCPJTSQGPVWIUPVKNSMDFDBKJWAEYKXLDUAYRCUDHIBZPLAWDOZWIIJFXDTHJMPHCVMPJWJKTNQIWVEWCOABAVTKRSYURPDYFTKXVEQHUCKOGIPITJZQNJLEARZGXYNLRSG");
    msg.text.assign("EXHMGWJPGRDOKQVSSGPDVPIDTZIDQQLKZSSRCGAYSYMUKLRMCJAJZLZCZBSQMYPNAFSTBCUBFAUNVXPKMPBORRUPTUSBYPXZXHAUKOQSLIHWRTLNFKDLRADTFIIKJCPTMHYUOYDCEKMQXEJJOCXLNHNBA");

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
    msg.setTimeStamp(0.53920414205);
    msg.setSource(13748U);
    msg.setSourceEntity(116U);
    msg.setDestination(12053U);
    msg.setDestinationEntity(156U);
    msg.type = 104U;
    msg.htime = 0.733144372982;
    msg.context.assign("IYVILEPQRUSCLYRQTIWWOXYCJPFAPZBKZZDWAQUZNFGVVHOJDESZRJQEJGWMYHYAWTMNFGNBJUWCBCSKZBMXQNBCEZERGACZQSAUFXIKVHDDGPFDRURUBSLPGUAFXAKZVCKTUPBHOBIYDTMCLMTPFATFOWRHDMILNNTHPEDHSYEEZTOLVSC");
    msg.text.assign("FPPQGISMZNGQOKAHIKEMPBVGZPRPEWYQJGWUOQVLOVAMHJIKIJHOGDUKVFOTCCSAWNXTZNBSDQISBDMZXMCUVRRXGKPKWBZTK");

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
    msg.setTimeStamp(0.589491449877);
    msg.setSource(17961U);
    msg.setSourceEntity(34U);
    msg.setDestination(57027U);
    msg.setDestinationEntity(132U);
    msg.type = 85U;
    msg.htime = 0.938052626411;
    msg.context.assign("MVROJWFAVLNZOEFPFVDYTFJVMVMMAEUEPOWHCAAZUGOEITEQZJQYXCRMDPLJGSLSUHZGKRECEPSGARRZOGGQJBWXRIDTGIBMSADNNIYHXCQSMXXNXYKZJNTHFNBKILUKYQWIXJWKSDILVJBIPKSTUDTMTXNKNPKVOMPADZWHLVUBOXJYBIUOOQZTQTKRCTCIHKNJGWYDVMHRBRAYYHBSLPHBCQLWSXNSWP");
    msg.text.assign("KTIZPVVHMIOGLMCAMGBNXFBKINSISLJSZCHQLEEWZXMUGHDXKEKEZPVDWEHWVKHBZZDXRKEMDURYWPVKYNPJTTJSAYIQCATZILPTSFWFRSCEKYWLACWMNYZECUSVNDWNLFUABWNGSCPQPURDPN");

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
    msg.setTimeStamp(0.0702473375634);
    msg.setSource(60895U);
    msg.setSourceEntity(199U);
    msg.setDestination(20256U);
    msg.setDestinationEntity(145U);
    msg.command = 249U;
    msg.htime = 0.937899266775;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 80U;
    tmp_msg_0.htime = 0.804015853229;
    tmp_msg_0.context.assign("FWXJKPPWIAOOTKHQGGAFAWDLXCPWVZQVZCSKATUMBDDBJSLQHYHQLIMBYBGZUTBYRXLCBKVRUR");
    tmp_msg_0.text.assign("BQYUOPOCZQFMGDHFDYLUINRLTBTWXGQSMBEVMPSOTIXTSWWITLDUSAZFADRBSKXWWKCZFVJQDUZLCNJEDJQLEFBMUXZVRXH");
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
    msg.setTimeStamp(0.292200711964);
    msg.setSource(28610U);
    msg.setSourceEntity(249U);
    msg.setDestination(11713U);
    msg.setDestinationEntity(63U);
    msg.command = 244U;
    msg.htime = 0.418058046757;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 39U;
    tmp_msg_0.htime = 0.604886337405;
    tmp_msg_0.context.assign("DZUSCIBMAXBXXLNJIFZHPVXBTGPISCDVIGGPYUNNKCOKLGXAGZVVSUQDFPLKEHZUQRXJUKQBWCCJFVEOSTWUREKXWRYIGONHVAYSBGAKTZFEEEMGYLEAUJPHDJKWBNNDYTVVHBRHGHQSLZNDWSMMJRUVQJTWMLSFPCZBXEATIRPQEBTVAXLFYUZIK");
    tmp_msg_0.text.assign("KORNCZPGQRBHCXKJSNGYHGKFMHJHSLUKESJOXTHSAABEYVOENBNPGSVZDBVBUZXOOBFAVRCOVIKYLVBJEJKRSERLUFNMFQLGWDISTWMYLCYCDTLNIOWTTEFHRXUNEYDGCWFDVWMHAUBJYZIJFEVQOLDURMGDMXPAQLVUFTXWLCDZVLKQHPUDPXIQNJSAIPTSMOPIQHAJTIQBRZA");
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
    msg.setTimeStamp(0.858173742367);
    msg.setSource(1576U);
    msg.setSourceEntity(123U);
    msg.setDestination(18873U);
    msg.setDestinationEntity(66U);
    msg.command = 64U;
    msg.htime = 0.586580365833;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 237U;
    tmp_msg_0.htime = 0.370487227669;
    tmp_msg_0.context.assign("ZXMPCUZYBHQRCAAZSRYQQETAUDDTJRCKBISERPZBJCTGGQZORMSPUJNVPFIZLOLKFTXNKUQESWKMPDCLZROBWYRGUOTPNKYANDPILNPYZQFHOSOBFYZHXKJHXIFGRGLEGYEDYRINEKJVMTBWUFPVTDFEOBCADJCLHLUIMWDTQHGOSWPWTJENXVYBXWDDQIVQMZKJMNWUNECGVHAFVGOHSXUKM");
    tmp_msg_0.text.assign("XTJOHNLRTMODSXRWCYQWFUSZQKYRJSRUJFAFETVNTNMDRCGJNCOWAGAWTDCPIHFVVJMDWSHDQEEZHXLPQLEIUYOUJYKRCSZOUUXDCXZHTVCQKWYRFIVMLOVUVXLLGIKLTFGDIAXWXBSJJIZPKCGBDKYNNFANKZDEXDHJVUPNZRKINBLTOBZACYQQFWHAVHMEMILOOJWTSVKSHYEOFEPZBTICPGGPRMKQIQLSBEPBAGBYXRQYPBMAB");
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
    msg.setTimeStamp(0.31539211198);
    msg.setSource(24542U);
    msg.setSourceEntity(219U);
    msg.setDestination(15931U);
    msg.setDestinationEntity(219U);
    msg.op = 61U;
    msg.file.assign("DBLHOMYPEUHXKQEBFIENTRNREMUTCCXXTIDDJFQWJFBYSDNGIBKBGNBXRCYVBMQGWTZYKBZCHJBENDSAOIOVCOFGLUKJANPRYGRALKBHEWPFUQQFMTXJLLNGRJGRTXWCFJHMPKHZXVXFORSEUSVUHTDODAIONDWSZYAUUPYEIWVCQWWTKMXASJYIOMEGPQRPYVOZXDZQSNKPS");

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
    msg.setTimeStamp(0.81187837213);
    msg.setSource(45863U);
    msg.setSourceEntity(24U);
    msg.setDestination(7101U);
    msg.setDestinationEntity(200U);
    msg.op = 32U;
    msg.file.assign("DBZZBJIVSGBBLSPIKLTPGIASMOUBECOWNXVEPYMHUZLNOUQECCQFNZZMRBYKQKZ");

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
    msg.setTimeStamp(0.171801396427);
    msg.setSource(65224U);
    msg.setSourceEntity(69U);
    msg.setDestination(17079U);
    msg.setDestinationEntity(50U);
    msg.op = 201U;
    msg.file.assign("VYTQRAUNRWRJOXUHSJWRJKZUIVVNHGGOJQMHYXQGOTEEJGNDRPIAILDCPQJFHGSXBQWZRKVRFSCAZIDSWTDKNKCEWLCNGMMSUEKBYTWJREFXACMYBHOYPUSXAEUAMZWMXSWDTCJZCQWHOYFPBKXLHAEAODLOPNPZUPSALTNXLGJMIBPHZKD");

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
    msg.setTimeStamp(0.099219425656);
    msg.setSource(14123U);
    msg.setSourceEntity(167U);
    msg.setDestination(7290U);
    msg.setDestinationEntity(8U);
    msg.op = 147U;
    msg.clock = 0.27555373808;
    msg.tz = -15;

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
    msg.setTimeStamp(0.439560667458);
    msg.setSource(56169U);
    msg.setSourceEntity(62U);
    msg.setDestination(18092U);
    msg.setDestinationEntity(201U);
    msg.op = 173U;
    msg.clock = 0.20181778533;
    msg.tz = 68;

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
    msg.setTimeStamp(0.354343577732);
    msg.setSource(9699U);
    msg.setSourceEntity(206U);
    msg.setDestination(6403U);
    msg.setDestinationEntity(195U);
    msg.op = 69U;
    msg.clock = 0.730195220491;
    msg.tz = -6;

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
    msg.setTimeStamp(0.134796671534);
    msg.setSource(50275U);
    msg.setSourceEntity(53U);
    msg.setDestination(827U);
    msg.setDestinationEntity(90U);
    msg.conductivity = 0.940814985243;
    msg.temperature = 0.842505513053;
    msg.depth = 0.135246024855;

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
    msg.setTimeStamp(0.983637671702);
    msg.setSource(30538U);
    msg.setSourceEntity(92U);
    msg.setDestination(45808U);
    msg.setDestinationEntity(111U);
    msg.conductivity = 0.64802267008;
    msg.temperature = 0.888971586642;
    msg.depth = 0.270803670825;

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
    msg.setTimeStamp(0.282356210839);
    msg.setSource(58697U);
    msg.setSourceEntity(0U);
    msg.setDestination(3123U);
    msg.setDestinationEntity(220U);
    msg.conductivity = 0.596984496351;
    msg.temperature = 0.494655288467;
    msg.depth = 0.078331945882;

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
    msg.setTimeStamp(0.0972947313186);
    msg.setSource(3951U);
    msg.setSourceEntity(181U);
    msg.setDestination(15202U);
    msg.setDestinationEntity(12U);
    msg.altitude = 0.0163555224691;
    msg.roll = 60188U;
    msg.pitch = 6714U;
    msg.yaw = 62848U;
    msg.speed = -6325;

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
    msg.setTimeStamp(0.582691661989);
    msg.setSource(49985U);
    msg.setSourceEntity(165U);
    msg.setDestination(35366U);
    msg.setDestinationEntity(22U);
    msg.altitude = 0.388967293941;
    msg.roll = 38744U;
    msg.pitch = 54141U;
    msg.yaw = 32728U;
    msg.speed = 24457;

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
    msg.setTimeStamp(0.470705141941);
    msg.setSource(11199U);
    msg.setSourceEntity(113U);
    msg.setDestination(8651U);
    msg.setDestinationEntity(249U);
    msg.altitude = 0.921633088108;
    msg.roll = 16071U;
    msg.pitch = 1154U;
    msg.yaw = 59344U;
    msg.speed = -27876;

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
    msg.setTimeStamp(0.260599629877);
    msg.setSource(9911U);
    msg.setSourceEntity(18U);
    msg.setDestination(56748U);
    msg.setDestinationEntity(116U);
    msg.altitude = 0.127209140597;
    msg.width = 0.277323081465;
    msg.length = 0.463842719479;
    msg.bearing = 0.740637140189;
    msg.pxl = -13358;
    msg.encoding = 138U;
    const char tmp_msg_0[] = {7, 61, 60, -118, 4, -77, 84, 103, 110, 20, -28, -99, -3, 12, 83, -13, 107, -70, -65, -85, 121, -59, 13, 126, 51, 38, -55, -51, 78, -48, -25, -33, -55, 3, 94, -101, 97, -28, -54, -2, 60, -105, -118, -75, 74, -119, 10, 79, 112, 110, 23, -51, -7, -58, -59, -25, 10, -64, -11, -98, -58, 116, -41, 2, 67, 72, 115, 89, 66, -41, -45, 99, 1, 71, 12, -57, -18, 119, 90, -3, -28, -34, -27, 60, -120, 111, 44, 86, 68, -119, 117, -61, 75, -116, 94};
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
    msg.setTimeStamp(0.332692436583);
    msg.setSource(17695U);
    msg.setSourceEntity(132U);
    msg.setDestination(46909U);
    msg.setDestinationEntity(71U);
    msg.altitude = 0.99905327288;
    msg.width = 0.119055774022;
    msg.length = 0.909955156968;
    msg.bearing = 0.928306088766;
    msg.pxl = 6966;
    msg.encoding = 219U;
    const char tmp_msg_0[] = {39, 14, 53, 83, -77, -109, 52, 14, -54, 58, -93, 79, 24, -36, 125, 34, -12, 57, 20, 36, -79, -46, -8, -119, 53, -21, 97, -64, -73, -69, -86, -87, 24, -2, 22, -114, -120, -48, -3, -84, 91, -85, 92, 90, -105, -92, 15, -74, 79, -49, 116, -69, 53, -32, 43, 17, -81, -39, -16, -103, 123, 68, 92, 34, 94, -91, 110, 82, -7, 38, 123, -86, 37, 39, 63, -44, -73, 52, 121, 99, -103, -39, 111, 73, -118, -120, 21, -115, -42, 44, -25, 105, 120, 125, 6, 67, -16, 31, -54, 46, -62, -28, 88, -96, -118, 39, -120, -52, 114, -25, -22, 31, 71, 89, -82, 33, -68, -58, -124, 73, 17, 50, 67, -55, -96, 36, 66, -7, -80, 119, 99, -29, -106, 26, -117, 93, 106, 45, 39, 99, 99, 83, 70, -115, -82, 77, 88, 96, -86, -35, -11, -93, 40, 108, -109, -79, 42, -102, -2, -65, -70, 76, -72, 1, -116, -1, 39, 75, -102, 62, 91, 123, -8, -114, -61, -84, -81, -21, -28, -31, 16, 125, 112, -115, 80, -41, 7, 48, -118, 49, -76, 39, -93, 71, -48, 66, -119, -22, -99, 104, 97, -11, 31, -77, 3, -100, 89, -58, -103, -66, 93, 16, 70, -14, 89, -58, 83, -87, 93, -94, -9, -28, 4, -99, -100, 125, -113, -12, -101, 111, 47, 3, 93, -75};
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
    msg.setTimeStamp(0.292005879908);
    msg.setSource(3735U);
    msg.setSourceEntity(238U);
    msg.setDestination(64494U);
    msg.setDestinationEntity(40U);
    msg.altitude = 0.501849616949;
    msg.width = 0.568118800959;
    msg.length = 0.596881005847;
    msg.bearing = 0.815395295263;
    msg.pxl = -21970;
    msg.encoding = 152U;
    const char tmp_msg_0[] = {112, -120, -54, 63, -107, -18, 28, -71, 78, 18, -103, 48, -61, -36, -19, -114, 86, -99, -106, 50, 111, 1, 10, 100, -97, -14, 98, -79, 44, -54, -12, -2, 19, -99, -49, -57, 58, 38, -34, -119, 93, -78, 21, -95, -127, 52, -29, 87, -43, 115, -54, -34, 79, 107, -47, 24, 65, 33, 113, 126, 71, 77, -32, -109, -46, 83, -60, 74, -3, -83, -121, 30, 0, -93, -90, 61, -3, -15, -92, 52, 87, 10, -13, -69, 85, -4, -52, -56, -117, -44, 97, 32, 6, 75, -63, -67, 33, -90, -26, -91, 54, -70, 69, 55, 47, 73, 34, -76, -126, 22, 98, 15, -97, -55, -57, -32, -81, 62, 8, -17, 98, 107, -77, 63, -81, -92, 61, -3, 118, 96, 85, 64, -72, 101, 81, -85, -23, 80, 64, 44, -37, -6, -75, 59, -14};
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
    msg.setTimeStamp(0.560222919132);
    msg.setSource(50128U);
    msg.setSourceEntity(37U);
    msg.setDestination(8934U);
    msg.setDestinationEntity(149U);
    msg.text.assign("WXNRDQNLZRHKLTLEKZFWVWSORAMNTEILQQYDOBVPESIMNGJCJRWHOXAXEZQRAAYPOTOASDZHUHYRNKGBCGXMGVMZDBJUGWRFNJUIAUNGYDTSEKVABSZDGIBSAKCLVKSTEWHMGIEUPWZOVXRXJYPZEYQTKCMCCDBKJXDNOYVUNPQQGWSPJFXLLIWXBOIFGYBLCMRDLHSIFQIFUIVZNUCETMTFHVCMHFJLEPJSDFH");
    msg.type = 240U;

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
    msg.setTimeStamp(0.42641450105);
    msg.setSource(27691U);
    msg.setSourceEntity(236U);
    msg.setDestination(23444U);
    msg.setDestinationEntity(224U);
    msg.text.assign("CKKXIFNYDQHLRUQPLGZCOTPZUPSAEBAUNTVEUTXPZOVTBGREELJKANVLSBNUMGAOYFMVWIADLHZJNKUCGXWWRLUCBHUPBSGORNJCMJOCGKXEDITOEXCSFVIHJPBIDAOQYVYKEDDWZPFLWMNBNBGCKVHTFQRAQFPZTVWFRPYXHOJOBKYGYWLZQSSSJDDWQPIEWMZXZTAQJUMR");
    msg.type = 194U;

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
    msg.setTimeStamp(0.290633796968);
    msg.setSource(27548U);
    msg.setSourceEntity(51U);
    msg.setDestination(25838U);
    msg.setDestinationEntity(251U);
    msg.text.assign("MIYMEFLDKCWMPCBUGVMXYHTSPHZSXLBPGJHICHIHZBTUQAVDKLODYGNAVDQPWEZYDLPUNKBOVLEEZNYQ");
    msg.type = 208U;

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
    msg.setTimeStamp(0.711230235476);
    msg.setSource(45571U);
    msg.setSourceEntity(238U);
    msg.setDestination(50598U);
    msg.setDestinationEntity(238U);
    msg.parameter = 148U;
    msg.numsamples = 24U;
    msg.lat = 0.541619202706;
    msg.lon = 0.168871726716;

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
    msg.setTimeStamp(0.548209261378);
    msg.setSource(36116U);
    msg.setSourceEntity(100U);
    msg.setDestination(51065U);
    msg.setDestinationEntity(86U);
    msg.parameter = 237U;
    msg.numsamples = 128U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 26322U;
    tmp_msg_0.avg = 0.120855731146;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.90057382276;
    msg.lon = 0.0657908794981;

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
    msg.setTimeStamp(0.544090917543);
    msg.setSource(33859U);
    msg.setSourceEntity(96U);
    msg.setDestination(65417U);
    msg.setDestinationEntity(181U);
    msg.parameter = 38U;
    msg.numsamples = 108U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 3880U;
    tmp_msg_0.avg = 0.890889325264;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.886732902306;
    msg.lon = 0.402344296131;

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
    msg.setTimeStamp(0.148424638934);
    msg.setSource(11644U);
    msg.setSourceEntity(1U);
    msg.setDestination(27227U);
    msg.setDestinationEntity(224U);
    msg.depth = 14308U;
    msg.avg = 0.846405776931;

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
    msg.setTimeStamp(0.103006576829);
    msg.setSource(32653U);
    msg.setSourceEntity(154U);
    msg.setDestination(6182U);
    msg.setDestinationEntity(0U);
    msg.depth = 49070U;
    msg.avg = 0.926169928333;

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
    msg.setTimeStamp(0.169373016565);
    msg.setSource(27141U);
    msg.setSourceEntity(98U);
    msg.setDestination(34932U);
    msg.setDestinationEntity(92U);
    msg.depth = 13730U;
    msg.avg = 0.299921475291;

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
    msg.setTimeStamp(0.0814208156426);
    msg.setSource(30725U);
    msg.setSourceEntity(27U);
    msg.setDestination(54805U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.73134374309);
    msg.setSource(37839U);
    msg.setSourceEntity(59U);
    msg.setDestination(60516U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.0957735911818);
    msg.setSource(2587U);
    msg.setSourceEntity(41U);
    msg.setDestination(28808U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.755629048612);
    msg.setSource(59586U);
    msg.setSourceEntity(225U);
    msg.setDestination(25913U);
    msg.setDestinationEntity(22U);
    msg.sys_name.assign("IMRJTMLJLOLPLADMKFDNFHRIXXXESCZCMWZZGHERQOVJHEKWHASUBVQUWVXHRCYDSNRELWLKXWAFIVTEZTM");
    msg.sys_type = 103U;
    msg.owner = 64118U;
    msg.lat = 0.813545244996;
    msg.lon = 0.399998509679;
    msg.height = 0.823364938332;
    msg.services.assign("WUWGPSAFEHTNHDXKWUDFXQLMKBYAXHZKUUZTKIEBVJXMFEYJARMAGQEXVJGJQUHLXUEKFPPGIVBTYHZFOELFRZHATRFLOBHSEHCXKCWORBRPWOLBYTIWPEMNNBQTZZLVJNOUWMYYBEHRVYBAZPOIKAWRDLSINJCLGGVGMXIHZMCDYPJOZMPRDLCTSSUFUGCTATQNLUWOOMNJE");

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
    msg.setTimeStamp(0.458734343798);
    msg.setSource(21612U);
    msg.setSourceEntity(171U);
    msg.setDestination(52811U);
    msg.setDestinationEntity(208U);
    msg.sys_name.assign("LIJFSZGECNBVSWWYCWHPTMAQILJJQBRLQOFINREWMTAUZYNJVWQDW");
    msg.sys_type = 74U;
    msg.owner = 39301U;
    msg.lat = 0.576402801556;
    msg.lon = 0.805783108063;
    msg.height = 0.419880586294;
    msg.services.assign("PBGOGSVFJZETZAQRYIIKWAAHDGMSSQJYHGBAOXGCLSJZVUWGLCRVKPRNZIBRJUSKYWRXTCKFAIHKQFDQXDGFDVCMIDULETMSODDATJUWWPFJLQLFZQBOJUMBFXWEOHPKXICJNGJTCHHUEEWUPZEWQEFXNJMKXEYCH");

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
    msg.setTimeStamp(0.0756749655294);
    msg.setSource(2339U);
    msg.setSourceEntity(86U);
    msg.setDestination(11188U);
    msg.setDestinationEntity(133U);
    msg.sys_name.assign("FNXGNPHUUZCCVZNEBBJTAOYFJSQPDTKINEEDLTAWYRTYBHFUDOADYRUXASKVAKNTSILXPDWGQGQWTUIJBHWJUSHARWTZWHFNZZQLFKADJJALWMNPRPTIJOMIYYSVHIJVRFLSTLBFGBOHVPVMXOQMMZYQPTXRYHGEUQMCJEEURCEVVDRQZMMQGKOANN");
    msg.sys_type = 87U;
    msg.owner = 60478U;
    msg.lat = 0.494466116512;
    msg.lon = 0.964085624162;
    msg.height = 0.198005282176;
    msg.services.assign("BEWZTUQWXKTHXXZQMNLSVZVCLGNJAQXIJXGSFJYUHBWKNBOAGAPSPTTCOHKVAVTNKQAMUZBXTQMPPZNFFJQZSDYAPBYIGEGKZDCCZJVULRLWWCBFSTABERGRMYFECGTXGEKKPUKFJDOUDDDSYNZLIYUULOCIQICIVFWBREESHDYRFWQKJMAHPOCYZSPSDMJDMTBLGJRTIIQEBXLRPRYMOEFWRQVWNJNUCNDIYSNHOEPVXHOARF");

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
    msg.setTimeStamp(0.0729651411212);
    msg.setSource(3782U);
    msg.setSourceEntity(232U);
    msg.setDestination(24928U);
    msg.setDestinationEntity(66U);
    msg.service.assign("ILKOQTEVEGGH");
    msg.service_type = 24U;

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
    msg.setTimeStamp(0.598724745827);
    msg.setSource(63931U);
    msg.setSourceEntity(162U);
    msg.setDestination(63322U);
    msg.setDestinationEntity(146U);
    msg.service.assign("VEUVJFFODBAHJRXHITLJXYBYWXLPBEAAJGYLECHNIHACUVVPLEFPCMTVZQRKOVGBPRPMQNFMQGMBYOFTNSYUGTMDLSGFXDMNTSJKKZCRDBICSBUWICCPBOTYQKTMOOPYJYGIKLDAHMHHDSUZYWCOCZXWZMNZISQEJGRZIRIELZUFMBDYPHFFNPJRTVKWUWTHWAAEIVVOUOERRUXXQQXUJGSQVSEAJDNEKHQLOWIALTKLXWDCGKWA");
    msg.service_type = 194U;

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
    msg.setTimeStamp(0.114211075765);
    msg.setSource(14019U);
    msg.setSourceEntity(60U);
    msg.setDestination(64073U);
    msg.setDestinationEntity(18U);
    msg.service.assign("NLKOHEMJWLQGZINPVGUKQJOTYPKAYTTXFKFJVNPUGVXBCFMZWCIIUHBILCKCWFGNTQDUCAOVFKKBOGIYEDECZLSOQLXYJCRXVSNCNSKO");
    msg.service_type = 195U;

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
    msg.setTimeStamp(0.205040993567);
    msg.setSource(62997U);
    msg.setSourceEntity(165U);
    msg.setDestination(18189U);
    msg.setDestinationEntity(207U);
    msg.value = 0.7957375672;

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
    msg.setTimeStamp(0.289180850892);
    msg.setSource(65356U);
    msg.setSourceEntity(187U);
    msg.setDestination(8893U);
    msg.setDestinationEntity(219U);
    msg.value = 0.808762152264;

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
    msg.setTimeStamp(0.71997381531);
    msg.setSource(32857U);
    msg.setSourceEntity(56U);
    msg.setDestination(2378U);
    msg.setDestinationEntity(33U);
    msg.value = 0.799834794205;

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
    msg.setTimeStamp(0.215216675465);
    msg.setSource(48871U);
    msg.setSourceEntity(201U);
    msg.setDestination(47477U);
    msg.setDestinationEntity(26U);
    msg.value = 0.168058749202;

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
    msg.setTimeStamp(0.17524794903);
    msg.setSource(28680U);
    msg.setSourceEntity(252U);
    msg.setDestination(18526U);
    msg.setDestinationEntity(238U);
    msg.value = 0.663502199143;

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
    msg.setTimeStamp(0.870637466403);
    msg.setSource(9727U);
    msg.setSourceEntity(178U);
    msg.setDestination(44388U);
    msg.setDestinationEntity(69U);
    msg.value = 0.497968644708;

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
    msg.setTimeStamp(0.0248537769115);
    msg.setSource(32744U);
    msg.setSourceEntity(113U);
    msg.setDestination(26465U);
    msg.setDestinationEntity(34U);
    msg.value = 0.426290781049;

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
    msg.setTimeStamp(0.00122160267809);
    msg.setSource(36051U);
    msg.setSourceEntity(23U);
    msg.setDestination(56405U);
    msg.setDestinationEntity(129U);
    msg.value = 0.0663486850905;

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
    msg.setTimeStamp(0.651089405622);
    msg.setSource(28688U);
    msg.setSourceEntity(108U);
    msg.setDestination(10397U);
    msg.setDestinationEntity(221U);
    msg.value = 0.115726696676;

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
    msg.setTimeStamp(0.990889854495);
    msg.setSource(11369U);
    msg.setSourceEntity(128U);
    msg.setDestination(55458U);
    msg.setDestinationEntity(201U);
    msg.number.assign("OPQREBTJJDESWQNLUGAVOTQXGHELQXWYWUPTXIQLEREBADNGFAVAKHOILAXKOSWMETDCZVGUVJSEKURKWAKIYHFAQKKBBWNFLECFPMDCOAILPUCCMPAGFUVHOMJRDHDOIPDYQECFZYGUITJVRBWWPOQTCXRBMHKBMXVSROLZDIMMPNYTHFRMAHSJDSQJXZWZMLHPZSYYCFNLZUFPYQDVKNFGTZNXUGEGRLBBTZXSIVHZBUJRSICYXWONIN");
    msg.timeout = 11987U;
    msg.contents.assign("WHKWANDPTDZLHTQMRNCIGNXJFCSOLFKFUZOIMVDTYBOJSYMWHXJYRDURELIRIBORZSKYNFQYTIHMBAPEULKUIYKFXCTRHWXBCIZDYUEGSEOD");

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
    msg.setTimeStamp(0.24711277159);
    msg.setSource(41686U);
    msg.setSourceEntity(183U);
    msg.setDestination(56328U);
    msg.setDestinationEntity(152U);
    msg.number.assign("IGUCYLXWJEGHGUGWIVOVZBARYXWRGFOXODLMZNJIZIQXDBLXJSCJDGAEYRLHUYDCATVCKTKIPXRYSMKVAFFBMONQUVPAPEMQEQZUWWIOOETTHPKKBAAJTCMUSHGNUWRTSKN");
    msg.timeout = 46845U;
    msg.contents.assign("HNPVJXHSRTTAZLISFPAYMGRBRNUXBWGYOJNKYHBCLHDFTDDUZLJMCMUGAQWYCEMHMZPTSCXWAIKXOGQJPNSGKFREUJPJNAQTYFOEMLKRIZJMTMFWZEYBRQBLJXZNNVEQLLRVQXIFRIOABWJQQGIJUSPTEZFKCEMKDWRDVVDHYAUIHFUTVWAOXZOVASIFSSBKGHLBNPLKHYPKYTNFXLXUEGBY");

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
    msg.setTimeStamp(0.0552110912875);
    msg.setSource(54165U);
    msg.setSourceEntity(162U);
    msg.setDestination(18653U);
    msg.setDestinationEntity(38U);
    msg.number.assign("IRMWZJOKMTCOYDFPHRNTZKWXCPCOWETNRLBXBRXMGVDLUCJTCSINNUGUDQMWASKTMVPLALZYJGOAYAENMVHAKEXJWVPENLOJILAZLGKEHHPQIUHYSGNTMAHXHIVFUEEUQFFDLSFJDWQEVPBZQXGLBZWOCDIWKFQHGJQVWDFZIPEFQOXNKBUPSAIJCRTZRHXUAOYFUZJCUKIBJZDXMBYHPYBQDGYFERMRRSGWOKSDTALSVPMCK");
    msg.timeout = 11259U;
    msg.contents.assign("LNBYGKBUGYCVPQYGUFPINMXEBEUZFWYOZWKRUMHHNFJYHZOCKDFARZFEQJGSAJAQVLBUVJERGMKWCDURDIQVNLXDJJLMJSDDDRKPIWOPJQKHQTRXMARXYTACDDMWXHILZRWNTXYPULZOHXCWBZLCKVAMSPYUIEAAMQVXOAAHQTEOWNBMPUEGCLUEGSJXQIVNLYPTCWTYTTBNSSHQOFPKXVKBSEESONOZOMZPFCGK");

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
    msg.setTimeStamp(0.367225375254);
    msg.setSource(14168U);
    msg.setSourceEntity(2U);
    msg.setDestination(8463U);
    msg.setDestinationEntity(177U);
    msg.seq = 4188200062U;
    msg.destination.assign("IXZMHNUDFKHEKMWLVKLYNDZXSNFOASCGAJBSIHVRRDFVUYJHXEDJURFZPEQWKHTUNOCTTWJGTBPXMWHFURBLJPJPMIZCWUXULCYEJRECQULUVFEPDPNMAQKSVASVOWGUPBAMROMDGKYNKPMBQYOHBGKROEXLFSQWHJWJPIMNLHCVZHIXCLBYMOQVVIYPIXYTQXGQTGRBAGZLCSVGAEKTIAJWRETALWGAZODTYXNFTNKONDQSBZZIFBZ");
    msg.timeout = 59597U;
    const char tmp_msg_0[] = {119, 16, -84, -110, -112, -56, 20, 8, 63, -114, 107, 107, 75, 31};
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
    msg.setTimeStamp(0.495081462886);
    msg.setSource(26011U);
    msg.setSourceEntity(162U);
    msg.setDestination(9685U);
    msg.setDestinationEntity(128U);
    msg.seq = 727512077U;
    msg.destination.assign("RKHGBJLDCGTICUAMKIGYSPNPUMTZLVSJDIYTPQNZRUKNIHSTPODGOVCXJWVCDIAJMJAJMPQAQEFTDRKWHKDFWMISZQEENMADZJFXKFEZJRGJTRGBWBPCSUYUBHWNLIBARWCVBCTWAZHERXLVBXKWBIUPFQEFPKLQAHZCYXVD");
    msg.timeout = 46973U;
    const char tmp_msg_0[] = {3, -122, -85, 27, 18, -57, -50, -82, -2, -109, -63, 0, -16, -79, -13, 13, -126, -73, -39, -63, -4, 90, -49, 10, -67, 124, 60, -27, 68, 113, 33, 20, 111, 0, 63, -107, 34, -114, 103, -54};
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
    msg.setTimeStamp(0.681967550236);
    msg.setSource(12585U);
    msg.setSourceEntity(38U);
    msg.setDestination(13190U);
    msg.setDestinationEntity(68U);
    msg.seq = 48030812U;
    msg.destination.assign("DSUDJQCCBMYKBRLIUKDAGGWOVCRZTUMXGAHOLQQYBXJOAYTEREMYIBVKWVAUIQGFJZEBOWFW");
    msg.timeout = 21729U;
    const char tmp_msg_0[] = {-89, -13, -97, 63, 37, -36, 63, 96, 16, 9, -95, -53, -21, 46, -40, 112, 76, 69, -74, 27, 63};
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
    msg.setTimeStamp(0.790450059612);
    msg.setSource(14855U);
    msg.setSourceEntity(240U);
    msg.setDestination(52262U);
    msg.setDestinationEntity(147U);
    msg.source.assign("QHHBQZVWKWKZZTANGYLNRVMRKUQGKPQQCBHDOLJEHTSHBMLOWJSRHAICQTZEZPCUZRQOFVDCYDD");
    const char tmp_msg_0[] = {-118, -82, 45, -16, 50, 47, -103, 113, -115, -123, 29, -117, -12, 124, -25, 53, -33, 108, 93, -58, 79, -45, 96, 63, -39, -40, 86, 16, 53, 17, -19, 8, 71, -30, -62, -54, -95, -48, -54, -63, -26, 25, -46, -102, 66, 26, -28, -22, -69, 60, 82, 49, -106, -104, 57, -60, -97, 88, -126, 58, 98, -41, 99, 55, -26, 75, 37, 74, -87, -32, 81, 51, 122, -22, -54, 30, 37, -48, 108, -99, 1, -21, -67, 92, 120, 19, 64, -32, 72, 113, -4, -4, -13, 52, 7, -68, 88, 3, 42, -91, 76, 44, -71, -68, -82, 89, -36, 106, 70, 72, -18, -5, 116, 41, 24, 72, 24, 90, 4, -26, 115, 36, 20, -18, -89, -37, 48, -104, -96, 66};
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
    msg.setTimeStamp(0.33920677462);
    msg.setSource(37608U);
    msg.setSourceEntity(101U);
    msg.setDestination(11449U);
    msg.setDestinationEntity(218U);
    msg.source.assign("ZUDJAOXUSEMIBYVGHQRNQATTSZJCVGCLCRMHBLEASGYZHLBWHZMICHFQQKGASFCRHTXZEXPKPKNNBKUYPABSYURLJFWOZUIEUXJDMMVEMOGIDJDGEVJIOVUOWREKTREWBXXHPNTUD");
    const char tmp_msg_0[] = {126, -72, 9, -2, -66, -25, -12, 8, 114, 16, 28, 119, -29, 120, -104, 94, 112, 115, -117, -62, 104, 69, -40, 63, 26, 28, -117, 46, -23, 121, 66, -90, -51, 96, 32, -121, 35, 44, 121, -10, -111, -3, 66, 109, -22, 58, 16, 17, 26, -118, 43, -99, -88, -111, 70, -1, 48, 121, -125, -57, -7, -55, 36, -101, 103, -68, -80, 120, -7, 30, 106, 73, -49, -123, -47, -51, 45, 103, -85, 38, -113, -97, 86, -36, 83, 118, -110, 114, -77, 100, 7, -88, 17, -128, 77, 76, 50, 74, 87, 16, -124, 47, 111, -101, -24, -103, -98, -19, 18, 53, -47, -60, 20, -99, 1, -52, 22, 60, -17, 41, 1, -64, -24, -30, -8, 111, -49, -104, 73, -76, -18, 124, 20, 35, -24, 85, -28, -112, -57, 45, -102, -115, -109, -60, 92, 85, -7, -78, 32, 52, 28, -10, -115, -104, -54, 38, -10, 64, 12, 118, -90, 67, -123, -57, -62, -1, 42, -82, -8, 70, 23, 49, 90, 4, -29, -71, -18, 53, -81, 91, 29, 82, 113, -51, 21, 2, -47, 16, 85, -98, -64, 4, 44, 33, -71, -41, 72, -11, 113, -52, -92, 17, -32, 21, -16, -45, 24, -33, 26, 118, -106, 67, -23, 59, -44, -42, -83, -108, -110, -8, -16, 124, -66, 59, 25, -79, 106};
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
    msg.setTimeStamp(0.69985463195);
    msg.setSource(22181U);
    msg.setSourceEntity(67U);
    msg.setDestination(39104U);
    msg.setDestinationEntity(76U);
    msg.source.assign("UCPAGKTZVULFZTOFLVUUIDPGKHOSVFQJIUPBLKDHMRKVCRDYQBVKSAXIVXRLYIXHEFGXJIHEXRMJKTWOSTWTUSSSBZKDAGPSCNBFYQJDP");
    const char tmp_msg_0[] = {-92, -44, -113, -78, 10, -5, 79, -99, 47, 54, 58, -25, -7, -29, -108, 96, -112, 10, -74, 1, 8, -5, -111, 55, 30, 61, 74, -111, 46, -87, -6, 35, -29, 31, 107, 34, -30, 20, -80, -43, -49, 33, 86, 33, 64, -36, 53, -27, 120, 8, -20, -60, 13, 111, -21, 16, -95, 12, -21, -16, -64, 42, 43, 70, -15, 16, 9, -84, 58, -28, 38, -40, 70, 114, -13, 5, -74, -86, 88, -12, 104, -29, 2, -38, -92, 59, 104, 93, -27, -112, -72, -90, -13, -61, -16, 97, -118, -62, -63, -10, 99, -82, 115, -14, -102, 0, -89, 45, 7, 31, 37, -66, 53, -74};
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
    msg.setTimeStamp(0.47145528378);
    msg.setSource(45284U);
    msg.setSourceEntity(183U);
    msg.setDestination(35047U);
    msg.setDestinationEntity(236U);
    msg.seq = 263713646U;
    msg.state = 192U;
    msg.error.assign("BFZGGKTBYOZULQLWXCWONPBGEDVGVFQOTKCAAGPKDRPGU");

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
    msg.setTimeStamp(0.1756740454);
    msg.setSource(6608U);
    msg.setSourceEntity(201U);
    msg.setDestination(47627U);
    msg.setDestinationEntity(82U);
    msg.seq = 1045230242U;
    msg.state = 220U;
    msg.error.assign("QLNAICLDPYWZEO");

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
    msg.setTimeStamp(0.894748111584);
    msg.setSource(7439U);
    msg.setSourceEntity(0U);
    msg.setDestination(49958U);
    msg.setDestinationEntity(165U);
    msg.seq = 3924398383U;
    msg.state = 94U;
    msg.error.assign("ZPRFGELYWNUVBGSYJOHJPQSQQPJDSRNAKBXOGRJPMUIFPTLJIEMKGQAUMHJBDKCPDBBPVMGIDADSSVVTDITQHQOVCBHBWRTUTVDEU");

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
    msg.setTimeStamp(0.352318282699);
    msg.setSource(37255U);
    msg.setSourceEntity(35U);
    msg.setDestination(45968U);
    msg.setDestinationEntity(181U);
    msg.origin.assign("RETHGXDEJMDWLBSZWTDGOUILOFQGBQVZKRKMHTJNSFJOMJLUTOXXBDUPUUHAQCNUVARGBPRRNCEUWWHVDFJZADKSJCWQQJZIEWPPPWYCTPLKGVROUOAVNVDKGJHQICIAXUQEIPW");
    msg.text.assign("XDYBLKCDEIBRVUGTKTSFKUDCHQTOWJONUYNDPJLKOZZMNJFKZDGPZBTWVSELRAGNGQZJOZPWEXCOTFVGVMDEFJDMRMOQSNARELERJZEXIPDAEFBYWWXCITBNHXOUVNPWYHGHZMLUDEXARILKJIBGMLPUQBSGVUAHRKWVQSZMPJXFNAPWCQQSMXAOQCSMLHBPLKABIYVKXKS");

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
    msg.setTimeStamp(0.567619538541);
    msg.setSource(54201U);
    msg.setSourceEntity(146U);
    msg.setDestination(2341U);
    msg.setDestinationEntity(209U);
    msg.origin.assign("GTUPBCSTLZTAIYXOXDRKTEUKLVWYOSBSAWBXEKFTSOPSQUIPWEZTARWLVKQBEVDVGDUHYFSBKELQPZUDC");
    msg.text.assign("ACGGPEABCVSJGKNFOOKEZGVQBTTVCSXWEYCLNPUMZPRJXHBAPXGFYLWNSZJZBUWYJHAMHAYAYXLWQPKIGDMBXFUTTOFUIVSLVORDE");

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
    msg.setTimeStamp(0.5123269898);
    msg.setSource(56059U);
    msg.setSourceEntity(234U);
    msg.setDestination(10722U);
    msg.setDestinationEntity(122U);
    msg.origin.assign("FDNGNQVBTRQQMJEPZGBMODALJKCEPDLBWXMSSMPVSDXKVGGOKACGYIRGHKGWRPHDUVEXXHHXAEHVJE");
    msg.text.assign("FPUHHTDQJZBWOEQTARMTUUJHDPXDGWSGLBZPOJMHUXDRIDENGSWRMJLWFNVWLKBLOUEKJQSCDVJQSTMHNIDFTJSIJXVZRNYHACIFYJBKRHAPYBBMQRYYZPKVMUOIVEUZOAZKLPXENKGHQCNZKEQBCVYCPMSEEWNAIVRFFVBGHTCFEUYEAWVCDZH");

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
    msg.setTimeStamp(0.833833793317);
    msg.setSource(60467U);
    msg.setSourceEntity(95U);
    msg.setDestination(60212U);
    msg.setDestinationEntity(48U);
    msg.origin.assign("QESRUBRNSTASGBPMCFIFQEKEQWDXGZGDBZZPWRVISFLWXYAAFNHGLTLUXTLTVALSXTFEDWOEVPCOAQYJEGDOUWYTAJFABXPKBJMYCAJELMUZVTWULCIISCJVJIHQZQBUQMGXYXKZBEMWZVUMGRBOJSHOYBHUDRNKDSVTXIOOOOARKPYNIFKISEQBDLSRWDYQPZDPWHNIZIYMAUKNTXUHJJOHKMNHNGCZKNCJFRGPRCETDVWNQHRKXLH");
    msg.htime = 0.0945453443773;
    msg.lat = 0.43722183333;
    msg.lon = 0.198286779652;
    const char tmp_msg_0[] = {97, 75, -68, 14, -40, -2, -112, -83, 66, 45, -108, 23, -98, 76, -15, -80, 37, 34, 59, -35, 89, 42, -109, 112, -45, 32};
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
    msg.setTimeStamp(0.894244901732);
    msg.setSource(30671U);
    msg.setSourceEntity(189U);
    msg.setDestination(45345U);
    msg.setDestinationEntity(99U);
    msg.origin.assign("TRTGEVHEQGUWLCHKYKPXPSNZLVLQSCPBDJZXAXUBTAHITWWMAEDKSETHHRJLFAYODRWNJPRZSGKRLDQTVHSCYNQUXOEZGNOOBOGGBMUXPVPYRFYIIVOOQDBODFXAJOLUGPCRCDXDAYWZHSDNAWBUNBIKVNW");
    msg.htime = 0.704295213069;
    msg.lat = 0.000836759916027;
    msg.lon = 0.244999104708;
    const char tmp_msg_0[] = {-121, 36, -101, -105, -45, 37, -121, 35, 11, -125, -122, -33, 120, -38, 94, -9, 115, -125, 44, 110, -86, -109, 9, -16, 26, 60, 43, -84, 27, -6, -99, -55, 33, -84, 29, 26, -10, -32, 49, -116, -31, -58, 103, -105, 123};
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
    msg.setTimeStamp(0.461646755666);
    msg.setSource(51790U);
    msg.setSourceEntity(71U);
    msg.setDestination(42583U);
    msg.setDestinationEntity(53U);
    msg.origin.assign("RIARXQWZWOOMRQQKDQXDJIIJUXIGYBAUIRGFNKLNEGZZTPFKZCNJBTOLAYWIOMLMQKMAYGMHHLW");
    msg.htime = 0.434052347233;
    msg.lat = 0.593580239605;
    msg.lon = 0.320615371748;
    const char tmp_msg_0[] = {6, 10, -72, -90, -25, 108, -31, -33, 9, -34, 51, -111, 78, 77, -38, 112, -107, 95, -52, 50, 8, -50, -127, -50, -82, 1, -112, -7, -87, 77, -81, 18, -41, 111, -89, 41, -23, 65, -42, -66, -125, -82, 37, -109, -78, -23, 82, -75, -90, -125, -74, -80, -108, 6, 50, 33, -73, -85, -67, -104, -35, -47, -9, -92, 10, 2, -37, -82, 82, 18, 116, -98, 11, -13, 19, -102, 62, -68, 71, 46, -60, -95, 77, 33, -47, -110, 45, -77, 109, 105, 56, 93};
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
    msg.setTimeStamp(0.309040669232);
    msg.setSource(25232U);
    msg.setSourceEntity(159U);
    msg.setDestination(14681U);
    msg.setDestinationEntity(103U);
    msg.req_id = 46890U;
    msg.ttl = 12121U;
    msg.destination.assign("EDTRKFNSWHHONDXGBZFRGYJSPMEVWOOWTSASGCSUEBVQMEPYNKJTYZCLFOFQ");
    const char tmp_msg_0[] = {90, 76, -49, 93, -59, -111, -41, 61, 122, -47, -97, -102, 26, -30, 91, 105, -87, -117, -30, 13, 85, 89, 119, -87, -70, -21, 122, 83, -47, 74, -24, -128, 42, 79, 44, 107, -101, -60, 114, -33, -80, -97, -48, -103, 22, 75, 58, -120, 111, -126, -52, -46, 84, 29, 101, -64, 4, -122, 17, -16, -88, -29, -101};
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
    msg.setTimeStamp(0.440830010814);
    msg.setSource(39620U);
    msg.setSourceEntity(116U);
    msg.setDestination(36063U);
    msg.setDestinationEntity(144U);
    msg.req_id = 39022U;
    msg.ttl = 64455U;
    msg.destination.assign("PZNNRRDZGVHCMMOBYCGOREDKHIWKTUKLDUSCTUOKLVHEXVFAAHYYGGBWEKWQQZWSIQSNZGOQLTBOPXJMJAWCXABWASNNYLZJSCGCXTGIZMECWPKJJEDHULWFJMECTRRPVVPNEYIFDXUBVJSULVMPNBQMKFMLVQYGJTWZFHADZFQSYQSRXOIJALWXOABNAUTDGIPPCVQOREYOHIQMRUYFTCDZZITBHNSILKFPIBXUKEJXDONVLHGMPXTHRF");
    const char tmp_msg_0[] = {-42, 114, 125, 54, 82, 13, -87, 90, -24, 76, -92, 18, 49, 82, 54, 91, -42, -5, 103, -70, -118, -53, -75, 123, -98, -109, 112, 44, -106, -76, 105, -23, -126, 63, -27, -91, 2, -30, 102, -100, -47, 88, 126, -56, 108, 54, -89, -58, 52, -53, 107, 121, -10, 17, -69, -93, 22, 108, -10, 87, 125, 2, 12, 36, 31, -99, -11, 52, -84, -30, -116, 21, -1, -67, 10, 33, 74, 81, -95, -55, -12, 5, 90, 68, 95, 17, -84, 22, -100, -55, -53, 123, -39, 5, 67, 31, -75, 49, -15, -65, -84, -96, 22, -42, -110, -127, 14, -55, -117};
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
    msg.setTimeStamp(0.914021726071);
    msg.setSource(28427U);
    msg.setSourceEntity(97U);
    msg.setDestination(13842U);
    msg.setDestinationEntity(49U);
    msg.req_id = 29725U;
    msg.ttl = 56495U;
    msg.destination.assign("CUVECEUJBQARWNWOTKBVEEVUZZDDLPTMYFUKHSXQKBXLPAIVBWSHQGZVIFQCPISCPCLOBGJABFOUHGJLLDDBBPBADOSMFCKBVNSYAKIZNNGHJPTCHASGATOLJQEMVOZMHMDFKATXNSWNFMLTFVTDGXHMJXQITRDRQXCKWMLRZYVEWIYQOTOOIJFRXUYSNJRHPKFINLWICOLEENHDWUKYYZXFWZCGGAYUUDHPRWESVRANM");
    const char tmp_msg_0[] = {93, 118, -84, 104, -66, -24, 113, -101, 93, -101, -106, 94, -17, 85, -77, 72, 75, 36, 27, 34, -21, 23, -89, 110, -53, 5, 123, -83, 99, -95, -81, 18, -82, 114, -13, 123, -127, -79, -68, -26, -98, 106, 95, 16, 65, 94, -7, 34, -81, 30, 77, -65, 61, -18, -99, 116, 64, 63, 59, -56, -17, -93, 115, 25, -122, -17, -81, -75, -107, 84, 119, 24, -49, 80, 42, 1, 68, 126, -83, -128, -18, 0, -49, -60, 88, -19, -31, -78, 19, -101, 1, -53, 1, 35, -114, -33, -78, 73, -87, -49, -118, -105, -50, 22};
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
    msg.setTimeStamp(0.263641626164);
    msg.setSource(9459U);
    msg.setSourceEntity(163U);
    msg.setDestination(46367U);
    msg.setDestinationEntity(239U);
    msg.req_id = 33344U;
    msg.status = 189U;
    msg.text.assign("QJNELDVCBVWLYFUQVZLJGQZSWXYGVSATTSDUUPXOZANXYCLTKULRCSHHOWMUCBWUIRTYFDINPURKZMYELXKRHQDJFQMRXDDJTITIZKWPHAYHGAEEOJIGOTAOKKNWJJACXJURPAKOPOAONGMKNIEIZLXFMORDHM");

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
    msg.setTimeStamp(0.939102173329);
    msg.setSource(39439U);
    msg.setSourceEntity(191U);
    msg.setDestination(28753U);
    msg.setDestinationEntity(228U);
    msg.req_id = 13093U;
    msg.status = 100U;
    msg.text.assign("HJJSLLXBWDFIQMAKOFFDVKWTHLCDHNUPTNRTGBCMQYXJHIJPIAVVKQIAUMKPGQOMNNYBFUPFAZEZWONPRBLFATSJIWTEZVAVBPOETYYGSXUQLRDPKZEWWMOIZO");

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
    msg.setTimeStamp(0.374957153386);
    msg.setSource(19957U);
    msg.setSourceEntity(178U);
    msg.setDestination(5237U);
    msg.setDestinationEntity(187U);
    msg.req_id = 18752U;
    msg.status = 246U;
    msg.text.assign("IKNBWCMJECVXQJJBAEBZYATLFORPJKKTXGAOULFBFVQAEKQMWKVNNNULUPIGJOVIAJSHKGZRZSTPYIYYMGQSIYJCPOWWGMVHUPLCWXGCZFEENDOTUFVEODZWF");

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
    msg.setTimeStamp(0.474012768882);
    msg.setSource(43884U);
    msg.setSourceEntity(193U);
    msg.setDestination(43956U);
    msg.setDestinationEntity(211U);
    msg.group_name.assign("YHXQBZSXLYGCYIFJTVWGJMMGEJPPNKMDVACTRCUYVKUPVXROUKHBNEZLTXHBCXKKCULNQEBLKACJZEFVGNONTIXIL");
    msg.links = 3371749983U;

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
    msg.setTimeStamp(0.354232033699);
    msg.setSource(5014U);
    msg.setSourceEntity(54U);
    msg.setDestination(45119U);
    msg.setDestinationEntity(91U);
    msg.group_name.assign("WQOFDMWRPEDARWOUOEGDOLKXVIIEETKMUWOAIJVSCBTUFUXVBPZGKFINYLXCHXJTQITNZMEBNXDIPENBVPMVFWAQZOMGIGVFTHJGREWSSNJAHJTMSFYJPWLKQQHCLPIROQDAZLJD");
    msg.links = 113389562U;

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
    msg.setTimeStamp(0.583613274233);
    msg.setSource(44459U);
    msg.setSourceEntity(17U);
    msg.setDestination(14602U);
    msg.setDestinationEntity(124U);
    msg.group_name.assign("VPIBAILDFPWXOHQEQMCSKYWOUMBRKFZSEEVZVGUBAYIJYYQ");
    msg.links = 2714990448U;

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
    msg.setTimeStamp(0.860811854791);
    msg.setSource(26112U);
    msg.setSourceEntity(63U);
    msg.setDestination(51187U);
    msg.setDestinationEntity(157U);
    msg.groupname.assign("JHTBWKKDQAMLQNRHLFUATQHNRYKBMPCXLOZEASIYKLIZGEKOFRXOWZOCBCROQCJDJDXIYKTPKPXQNFASIGDPICDWVRQEEMBFVDNVETQVOFXYJZNDSROXRAPIGHZIEHZQYZWIZVYUHLYQYPGRHDDVIXETALWJFAIV");
    msg.action = 225U;
    msg.grouplist.assign("PPVQXGVLPLDAWUBDKKFGNMNDPLUNTXCWRFGCTQHCWWXSGJFIZJLUAFYCXWEBPJOBCEZGMDMTYYHGIEBONFVDTJTJSXHQBSLDQSYWIVUYPIOXUIA");

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
    msg.setTimeStamp(0.881635075297);
    msg.setSource(56660U);
    msg.setSourceEntity(35U);
    msg.setDestination(27632U);
    msg.setDestinationEntity(141U);
    msg.groupname.assign("LFONGNYWCPNEEQEDTLOLKYQR");
    msg.action = 77U;
    msg.grouplist.assign("BOAIWFCQROKFFDYVMQEGYCZZNOLMLRUPODJHLRKZWTHDSULHOZGBBNQVIZVMRGVKWSYXUCQBGPZDPIOQGKVZPOUJTTWEQPAYKWNMIUUPFLYJSIAHAORIUVDPKEFMAMRXHQJTMIZQKZSYEFMTVZIASITEXARKDLHSFXJONLWKTJWBMHQWPSTTCNNVGFYBGUGLHHAUXTUNWFCCRLBJX");

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
    msg.setTimeStamp(0.303763645125);
    msg.setSource(50533U);
    msg.setSourceEntity(89U);
    msg.setDestination(21754U);
    msg.setDestinationEntity(105U);
    msg.groupname.assign("PVYCEFTPMAWEQZCBNTBFOCYSHDIKISMFCXMEWUQOPZMIDJLCPXCOWNNGSVAHJAPSKPQLUGJEGKUVEJIUJOUBRDSZKSLVBBFGCTHXVMRUYZNOHRLQJMJAQURGKVUOWVWYVBD");
    msg.action = 113U;
    msg.grouplist.assign("YYUAEJHOUHEFZAWEIISUIQCKTFDDQAZKMORYWMSTIMOPYCCFCVQCSHZJFWMTOXKKLKBJVVSNCSO");

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
    msg.setTimeStamp(0.00751751340752);
    msg.setSource(21427U);
    msg.setSourceEntity(207U);
    msg.setDestination(64259U);
    msg.setDestinationEntity(46U);
    msg.value = 0.35913767115;
    msg.sys_src = 9622U;

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
    msg.setTimeStamp(0.352488553032);
    msg.setSource(39554U);
    msg.setSourceEntity(99U);
    msg.setDestination(61458U);
    msg.setDestinationEntity(16U);
    msg.value = 0.874289350236;
    msg.sys_src = 9656U;

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
    msg.setTimeStamp(0.376583753802);
    msg.setSource(5252U);
    msg.setSourceEntity(26U);
    msg.setDestination(31991U);
    msg.setDestinationEntity(41U);
    msg.value = 0.790278371918;
    msg.sys_src = 21684U;

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
    msg.setTimeStamp(0.959763436726);
    msg.setSource(28286U);
    msg.setSourceEntity(250U);
    msg.setDestination(40503U);
    msg.setDestinationEntity(242U);
    msg.value = 0.319490846055;
    msg.units = 92U;

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
    msg.setTimeStamp(0.760081446821);
    msg.setSource(9907U);
    msg.setSourceEntity(136U);
    msg.setDestination(11357U);
    msg.setDestinationEntity(2U);
    msg.value = 0.983133936579;
    msg.units = 197U;

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
    msg.setTimeStamp(0.556592485116);
    msg.setSource(9816U);
    msg.setSourceEntity(101U);
    msg.setDestination(5968U);
    msg.setDestinationEntity(179U);
    msg.value = 0.731590793808;
    msg.units = 88U;

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
    msg.setTimeStamp(0.143880294239);
    msg.setSource(17432U);
    msg.setSourceEntity(185U);
    msg.setDestination(29966U);
    msg.setDestinationEntity(132U);
    msg.base_lat = 0.105197750506;
    msg.base_lon = 0.0494349055752;
    msg.base_time = 0.489304873386;

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
    msg.setTimeStamp(0.176284089237);
    msg.setSource(16861U);
    msg.setSourceEntity(113U);
    msg.setDestination(45696U);
    msg.setDestinationEntity(143U);
    msg.base_lat = 0.790063974698;
    msg.base_lon = 0.940555491951;
    msg.base_time = 0.23261310825;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 250U;
    tmp_msg_0.destination = 65092U;
    tmp_msg_0.timeout = 0.509911095662;
    IMC::RelativeState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.s_id.assign("WKVJRYSWDBOTZIQILSRTZDJWBVVJDQHFIVNIJXCFWEFTZRLJOROGUYQUSMPBGQGXHHLKKZDZHWOVZEUUOYLMTTEHWVKNUVNMCTSAGKUYXPKRQXHXHFBULOITBJFXKFNWCBICYGJJARNEMRWXCDVQIPUDTHMMXCLJDBGRXMZMIODKFDAYESDVBESCHPUQGGFQIKFWZONLPZAYPUEEFHATSQXSTVSAPPABCMJEORYGCYLNQLGOZIPSYWNA");
    tmp_tmp_msg_0_0.dist = 0.998533381548;
    tmp_tmp_msg_0_0.err = 0.377571214103;
    tmp_tmp_msg_0_0.ctrl_imp = 0.263665729159;
    tmp_tmp_msg_0_0.rel_dir_x = 0.637813853914;
    tmp_tmp_msg_0_0.rel_dir_y = 0.623757900549;
    tmp_tmp_msg_0_0.rel_dir_z = 0.899981738499;
    tmp_tmp_msg_0_0.err_x = 0.224351192181;
    tmp_tmp_msg_0_0.err_y = 0.245469948814;
    tmp_tmp_msg_0_0.err_z = 0.345095919917;
    tmp_tmp_msg_0_0.rf_err_x = 0.199779207822;
    tmp_tmp_msg_0_0.rf_err_y = 0.8844804441;
    tmp_tmp_msg_0_0.rf_err_z = 0.736897428201;
    tmp_tmp_msg_0_0.rf_err_vx = 0.621205821029;
    tmp_tmp_msg_0_0.rf_err_vy = 0.396820620658;
    tmp_tmp_msg_0_0.rf_err_vz = 0.744820831995;
    tmp_tmp_msg_0_0.ss_x = 0.409995483704;
    tmp_tmp_msg_0_0.ss_y = 0.556984445024;
    tmp_tmp_msg_0_0.ss_z = 0.0103513884237;
    tmp_tmp_msg_0_0.virt_err_x = 0.541908134868;
    tmp_tmp_msg_0_0.virt_err_y = 0.333529270506;
    tmp_tmp_msg_0_0.virt_err_z = 0.628004082692;
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
    msg.setTimeStamp(0.924482549773);
    msg.setSource(40800U);
    msg.setSourceEntity(112U);
    msg.setDestination(57898U);
    msg.setDestinationEntity(191U);
    msg.base_lat = 0.494532323271;
    msg.base_lon = 0.749961900202;
    msg.base_time = 0.633407868207;

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
    msg.setTimeStamp(0.697471280844);
    msg.setSource(10799U);
    msg.setSourceEntity(61U);
    msg.setDestination(39124U);
    msg.setDestinationEntity(250U);
    msg.base_lat = 0.593055767352;
    msg.base_lon = 0.239610964941;
    msg.base_time = 0.604310730629;
    const char tmp_msg_0[] = {92, 60, -91, -103, -46, 121, 53, -5, -90, 67, -25, 113, -15, -22, -115, -45, -110, -46, -118, 112, -26, 42, 92, 18, -33, -4, 58, 99, 103, 113, 40, -121, 117, 15, -26, 85, -128, 102, -56, -40, -113, -115, -13, -61, -34, -120, 90, 5, -16, 36, -20, 73, -116, 4, 101, -42, -83, -87, -32, -126, 125, 70, 9, 11, -77, -61, 102, 52, 75, -126, 83, -89, 44, 70, 83, -54, 118, -116, -20, -121, -74, -105, -35, 30, -117, 20, 4, 23, -114, -51, -44, -99, -85, -54, -119, 119, -3, 90, -55, -25, 50, 112, 28, -28, -26, 40, -9, 113, 75, 102, 118, -109, -90, 33, 54, -24, 94, -123, 60, -4, -37, -33, 124, 96, -60, 2, -3, 75, -72, 35, -33, 28, -41, -120, -21, -44, 15, 71, 88, 114, -51, -69, -42, 25, -25, -82, -28, -7, 20, -22, -75, 23, 109, 4, 11, 2, 57, -45, 10, 13, -11, 122, 21, 5, 56, -14, -84, 54, 32, 90, 118, -98, 123};
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
    msg.setTimeStamp(0.763323052791);
    msg.setSource(63571U);
    msg.setSourceEntity(197U);
    msg.setDestination(1978U);
    msg.setDestinationEntity(129U);
    msg.base_lat = 0.791900042283;
    msg.base_lon = 0.673771950805;
    msg.base_time = 0.300011345401;
    const char tmp_msg_0[] = {-88, -121, 47, 109, -118, 48, -91, 86, 98, 46, 25, 118, -103, -12, -92, -30, 71};
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
    msg.setTimeStamp(0.0258807877966);
    msg.setSource(27300U);
    msg.setSourceEntity(254U);
    msg.setDestination(24641U);
    msg.setDestinationEntity(172U);
    msg.base_lat = 0.618158816473;
    msg.base_lon = 0.0177286278037;
    msg.base_time = 0.902095307499;
    const char tmp_msg_0[] = {-69, -108, -78, -47, 46, -87, -62, 47, -123, -20, -64, 46, -90, -84, 58, -105, -76, -1, 5, 52, 20, 58, 95};
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
    msg.setTimeStamp(0.305187596511);
    msg.setSource(31635U);
    msg.setSourceEntity(190U);
    msg.setDestination(6396U);
    msg.setDestinationEntity(156U);
    msg.sys_id = 60770U;
    msg.priority = 56;
    msg.x = -21528;
    msg.y = -9000;
    msg.z = -24779;
    msg.t = -4594;
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("DPJOPCVMZUJPTQANKFTUKNASIPSMYWXAYWHNOZUVILWDXHURZGHYCEHGBUUOOKCUELMYRWWQGZWZFIYENWQBLWRULGEBHHDXRDESYZLRJAXAXOAQFJPIWEQUPQSLGLTERSMDKPKNPLCVOFDRQGXHUTNNFRJXZVFHOSIOKFGJTMLSZJJASFJIOCLFMVFRKDQCCXYDPNSPSMYQBQVBKIKHMADBJZNVBWKBTAETVEACVOG");
    const char tmp_tmp_msg_0_0[] = {-53, -67, 55, -64, -117, 115, 14, 2, 123, -81, -71, -39, 32, -72, -109, 2, -3, 64, 65, -39, 41, -119, -84, -87, 95, 80, -46, -95, -47, 104, 64, 100, -86, 1, -113, 74, 107, 126, 40, -98, 114, -114, -56, 0, -36, -33, 85, 18, 69, 84, -71, -6, -68, 121, 0, -61, 104, -90, 2, -3, 9, -82, -93, 74, -50, 119, 119, 15, -62, -103, 70, 12, 32, -54, -9, -70, 13, 54, -104, 112, 126, -103, 96, -111, 39, 85, -82, 4, -9, -6, -41, 100, -56, 44, -68, 0, 65, -65, 4, -39, -39, 94, -50, -102, 106, 40, 121, -101, 108, -67, -70, -125, -50, -48, 1, 35, 83, 22, 16, -73, -127, -74, 29, 94, 118, 42, -84, -14, 100, 17, -62, 4, 112, -104, -21, 56, -118, -85, 70, -61, -7, -80, 53, -84, -79, 79, -78, 3, -92, -2, 49, -106, -71, 86, -47, 109, 126, -89, -10, 21, 106, 97, 24, 32, 41, 15, 62, 9, -86, -38, -42, -124, 118, -86, -124, -66, 121, 27, -19, -119, 29, -46, 116, -101, 61, -122, 57, 65, -48, -72, 7, 37, -64, 114};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.0365926100719);
    msg.setSource(17722U);
    msg.setSourceEntity(151U);
    msg.setDestination(29651U);
    msg.setDestinationEntity(54U);
    msg.sys_id = 703U;
    msg.priority = -25;
    msg.x = 20654;
    msg.y = -4509;
    msg.z = -24465;
    msg.t = 29472;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.497534369521;
    tmp_msg_0.lon = 0.739744500162;
    tmp_msg_0.depth = 40U;
    tmp_msg_0.speed = 0.148051384185;
    tmp_msg_0.psi = 0.863765020299;
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
    msg.setTimeStamp(0.0950287103152);
    msg.setSource(35275U);
    msg.setSourceEntity(80U);
    msg.setDestination(28007U);
    msg.setDestinationEntity(217U);
    msg.sys_id = 43667U;
    msg.priority = 55;
    msg.x = -11742;
    msg.y = 14123;
    msg.z = -31895;
    msg.t = -30874;
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("NBTEPKWPHBQOXVEDGXOBTHVQPSIXYALOKFIOHEQVRFTDBINKUIQDMYRLLZLZGXOCGNHFZQMUWWFZKAVVHFMRCUAWNGXIMRRPQIULNGSFJYPJQDAD");
    tmp_msg_0.lbearing = 0.453959114674;
    tmp_msg_0.lelevation = 0.790066993148;
    tmp_msg_0.bearing = 0.617823077885;
    tmp_msg_0.elevation = 0.508536164518;
    tmp_msg_0.phi = 0.318977527792;
    tmp_msg_0.theta = 0.616679226771;
    tmp_msg_0.psi = 0.318963434381;
    tmp_msg_0.accuracy = 0.33709183912;
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
    msg.setTimeStamp(0.487172104431);
    msg.setSource(24861U);
    msg.setSourceEntity(195U);
    msg.setDestination(52163U);
    msg.setDestinationEntity(12U);
    msg.req_id = 61343U;
    msg.type = 184U;
    msg.max_size = 62546U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.244527114793;
    tmp_msg_0.base_lon = 0.0188512358156;
    tmp_msg_0.base_time = 0.800662816693;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 37203U;
    tmp_tmp_msg_0_0.destination = 6355U;
    tmp_tmp_msg_0_0.timeout = 0.136683445253;
    IMC::LinkLatency tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.153600148575;
    tmp_tmp_tmp_msg_0_0_0.sys_src = 64806U;
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
    msg.setTimeStamp(0.488729230685);
    msg.setSource(7230U);
    msg.setSourceEntity(167U);
    msg.setDestination(49436U);
    msg.setDestinationEntity(43U);
    msg.req_id = 2551U;
    msg.type = 228U;
    msg.max_size = 2631U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.897905608711;
    tmp_msg_0.base_lon = 0.494039614711;
    tmp_msg_0.base_time = 0.624424406161;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 62989U;
    tmp_tmp_msg_0_0.destination = 49768U;
    tmp_tmp_msg_0_0.timeout = 0.497653344203;
    IMC::Rows tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 26482U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.553980270422;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.379015897272;
    tmp_tmp_tmp_msg_0_0_0.z = 0.426143129571;
    tmp_tmp_tmp_msg_0_0_0.z_units = 72U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.872757038494;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 202U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.644439048474;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.618060646344;
    tmp_tmp_tmp_msg_0_0_0.width = 0.405778887859;
    tmp_tmp_tmp_msg_0_0_0.length = 0.241291055378;
    tmp_tmp_tmp_msg_0_0_0.hstep = 0.291494784557;
    tmp_tmp_tmp_msg_0_0_0.coff = 173U;
    tmp_tmp_tmp_msg_0_0_0.alternation = 94U;
    tmp_tmp_tmp_msg_0_0_0.flags = 229U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("GRAONZXTFXIGAAYLYFMDEOOEXKITZWMVUVHQXQAASDMZWZPIZFQLTJYAADQBRKFCZKWMPBOTVWMXMNUJBVGCKRMSLUXBAUEYHSEYPGHBDUPWIGLVUIBKJOHXWHDGSPSWLYDULDEEHHSHFENJJCOROVCIJHRNVEGDCYNMKAZCBHEBIPIGMMCFTLYLPDPZRDJTOP");
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
    msg.setTimeStamp(0.241409590304);
    msg.setSource(34600U);
    msg.setSourceEntity(62U);
    msg.setDestination(13955U);
    msg.setDestinationEntity(223U);
    msg.req_id = 49513U;
    msg.type = 86U;
    msg.max_size = 12608U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.482236335067;
    tmp_msg_0.base_lon = 0.720503454814;
    tmp_msg_0.base_time = 0.415094812172;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 26347U;
    tmp_tmp_msg_0_0.priority = 63;
    tmp_tmp_msg_0_0.x = 7564;
    tmp_tmp_msg_0_0.y = 20460;
    tmp_tmp_msg_0_0.z = -26593;
    tmp_tmp_msg_0_0.t = 16406;
    IMC::Calibration tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.duration = 8824U;
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
    msg.setTimeStamp(0.377246181098);
    msg.setSource(12971U);
    msg.setSourceEntity(192U);
    msg.setDestination(35910U);
    msg.setDestinationEntity(66U);
    msg.original_source = 40668U;
    msg.destination = 25524U;
    msg.timeout = 0.36248635008;
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.339100679635;
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
    msg.setTimeStamp(0.123361561751);
    msg.setSource(36294U);
    msg.setSourceEntity(223U);
    msg.setDestination(4125U);
    msg.setDestinationEntity(111U);
    msg.original_source = 22500U;
    msg.destination = 6766U;
    msg.timeout = 0.173399150257;
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("KUNUOMEFDKDBFQZXHEYTKBKQPQURGDHCYWJXWELIYIKDFHUWOCVJPNBLVLXGOEVHVTSYEVNBMXWVCVFMQXRDYCLTLPAIYGOXTBGQUZFJLZBHMTTRGIPSTMJFOAHWDGHJCKGOPCWGFRFWMUSLAIAEXQDQPAIRXSKDRJVSOFZQSAYYZZSKGZVQPEXTYWPRZIVZBBCHPKEIFITUWAQRCMUSNGUJDLMRNOEJINNNZRNHBTNLAOSJAYAMMBKJX");
    const char tmp_tmp_msg_0_0[] = {-124, 60, -21, 31, -50, -19, 86, -48, -89, 99, -51};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.860205890174);
    msg.setSource(52429U);
    msg.setSourceEntity(242U);
    msg.setDestination(46838U);
    msg.setDestinationEntity(241U);
    msg.original_source = 2380U;
    msg.destination = 48485U;
    msg.timeout = 0.590511873398;
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.0321382126903;
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
    msg.setTimeStamp(0.97305061838);
    msg.setSource(43254U);
    msg.setSourceEntity(166U);
    msg.setDestination(33851U);
    msg.setDestinationEntity(240U);
    msg.type = 67U;
    msg.comm_interface = 1884U;
    msg.model = 55649U;
    msg.list.assign("GQEHMBVNHUQYMAUZNFZCOMRKCAEYOAKDLUTCRGAQJYZOVPB");

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
    msg.setTimeStamp(0.279804376419);
    msg.setSource(22997U);
    msg.setSourceEntity(164U);
    msg.setDestination(53777U);
    msg.setDestinationEntity(248U);
    msg.type = 27U;
    msg.comm_interface = 29876U;
    msg.model = 9626U;
    msg.list.assign("UZQPRBMFEJIKFQHEGNALJZRPOQZVKLGAVWESIWFTCBCPYFZBYNAFCDHLXXQQSPAJVJOVYIPEUUZKWTTOXLZXOEHYJOADWYYRVKWWMHHILQDCGAWPTTIXRGKSOCDGDXCDLS");

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
    msg.setTimeStamp(0.0958764683533);
    msg.setSource(43505U);
    msg.setSourceEntity(134U);
    msg.setDestination(17494U);
    msg.setDestinationEntity(149U);
    msg.type = 161U;
    msg.comm_interface = 63814U;
    msg.model = 10748U;
    msg.list.assign("OGHYUJDIWYOJLMOPMMTLBKPBYYIIXEETZOZUKQFRYACGFRJZXUCUTDXHQJZZA");

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
    msg.setTimeStamp(0.381049802657);
    msg.setSource(58675U);
    msg.setSourceEntity(88U);
    msg.setDestination(26620U);
    msg.setDestinationEntity(41U);
    msg.type = 252U;
    msg.req_id = 1129080437U;
    msg.ttl = 14024U;
    msg.code = 218U;
    msg.destination.assign("JYEAXIIFPZWWBPYMNSXWHONRETPEYHTAJIPEVBUHVYOZHQUKAESSUDROEWTRXRPBIOOOTXQTOLAJFZDKDNSGQZOJHVYVNICIWYYUDUGGYMJQZNCWRGQMSBUIKZKQQRLMJSLUGSJPLEKEWYY");
    msg.source.assign("VTUIRUEZKOSSKCDTDEAHKFSLVMZQDLIKMLWGNPXKFRCVLQCXIRUGMNDFKKWCCIZZGQOYTYGAZYQLYWXDTRBWPHEURPXGEVPJPTJHONHNBEDHGEMCAVNOQLASRCYLBQXFOMRIQXDBQIBEZHZUTJSLTVTDACQUMUXSWDLCJAYORXKOMERJXYNGLKFEXJJMZKMRINFGAZAWIBFQSNJDPPWPIHIUNMSYJNSHUFBFWVAPBGPVOZT");
    msg.acknowledge = 41U;
    msg.status = 8U;
    const char tmp_msg_0[] = {100, -41, -28, 38, -100, 79, -51, 11, -125, -63, -37, 114, -20, 120, -3, 77, -30, 94, 103, 68, 117, 115, -91, -102, 119, -82, -55, 83, 97, -97, -119, 18, -55, 54, -119, -111, -72, 15, 53, 59, 100, -36, -34, 58, -112, -107};
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
    msg.setTimeStamp(0.015135861805);
    msg.setSource(42566U);
    msg.setSourceEntity(167U);
    msg.setDestination(38987U);
    msg.setDestinationEntity(25U);
    msg.type = 240U;
    msg.req_id = 231039565U;
    msg.ttl = 12292U;
    msg.code = 27U;
    msg.destination.assign("FSHKELNGHLUYQMJGYJGMFBEBJXXSBOTIMKTAANWZDLONEIDSSXFUPMYWLNPTRPQFNCLCYZAADXKWVEGONYVTXQGCRZVXNKXUZQVARTMBPSTVPYINLDDQHBDPRJYEEUMZDGKSZBQYOTMHJOTZMSKRCRYBIFWCPRHVZPJUOHQOXXBFTLRBXOJGYSWPJUCI");
    msg.source.assign("KGQNPRHVLBUWSMJNORKBOTBOZIYLFGCDFTEPZXFXEMEDHDJVVMNQVLUMZIAELOXKCUTHCAZWJPDQZOBONYVEGCKGQYWJNAXRRNRIH");
    msg.acknowledge = 92U;
    msg.status = 149U;
    const char tmp_msg_0[] = {27, 103, -50, 89, 9, -12, 41, -35, -5, 26, -55, 122, -8, -16, 44, 73, 8, 42, 109, 0, 86, -45, 34, 20, 17, -77, 69, -99, -128, -121, -112, -19, 107, 107, 94, -16, 4, 45, 19, -51, -127, 29, 75, 1, -96, -116, -41, 100, 57, -16, 85, -53, -12, 116, 93, -74, -77, -77, -49, 60, 55, -34, 43, -17, -60, 28, -47, -108, -93, -17, -67, -42, -57, -104, -92, 108, -35, -57, -93, -41, -95, 81, 2, -85, -126, 120, -1, -119, 23, -62, 3, -97, -13, -8, -77, -34, -107, -98, 53, 39, -38, -114, 63, 57, -10, -64, 1, 52, 2, -11, 51, -113, 34, -107, -52, -70, -45, 64, -16, -86, -116, 81, 102, 76, -128, -48, 106, 38, 53, 71, 120, -21, 113, -93, 34, -92, -12, 24, -118, 13, -72, -96, 117, 89, 114, -101, 96, -42, 43, -90, -37, -73, 82, 96, 108, 123, -85, -105, -65, -55, 108, 37, 35, 91, 124, -45, 34, -106, -62, -33, -81, -7, -44, -55, 42, 99, -5, 86, 110, 31, -85, 29, 21, 94, -96, -87, 106, 101, -17, -119, 41, -123, 68, 56, 123, 86, 67, 14, -123, -115, 6, 94, -97, -38, -7, 82, 20, -68, -94, 67, -103, 34, -13, 126, 1, -4, 111, 17, -33, 9, 0, -115, 42, 29, -79, 124, -68, -8, 13, -77, -79, 87, 59, 41, -21, -69};
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
    msg.setTimeStamp(0.286347946981);
    msg.setSource(3121U);
    msg.setSourceEntity(185U);
    msg.setDestination(30610U);
    msg.setDestinationEntity(184U);
    msg.type = 247U;
    msg.req_id = 3616080412U;
    msg.ttl = 24510U;
    msg.code = 6U;
    msg.destination.assign("QDIOGDLWKGKAXDPKBRFMAHAHCQZOVPEICVVDBWYJPWJITXQXKLPYHLBAYGBJTSAXXRSFIGQQLTYRZALRRDVHEBWGYOQEUVVOW");
    msg.source.assign("AUENRAFOHNBPQMMMYZPEWUXZVJTMHUGEQSKYWRPGLRJFMAJVQZGHTWKRVJPRAFYFMQSCLAWGPWESPQOFDUKXBECIWMHODCFDCIEVQKCUTCZAHVH");
    msg.acknowledge = 4U;
    msg.status = 237U;
    const char tmp_msg_0[] = {-43, 88, -64, -1, -49, -4, 96, 13, -18, -16, 78, -4, 48, -123, 92, 70, -69, 50, 121, 32, 50, 16, 90, -72, -115, 96, 125, 125, -40, -79, -127, 92, -52, -101, 17, 126, -93, -6, 40, -46, 36, 18, -114, 80, 124, -68, -117, 22, 115, 34, 108, 85, 66, 65, 121, -34, 101, 26, -121, -29, -119};
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
    msg.setTimeStamp(0.726780422744);
    msg.setSource(59540U);
    msg.setSourceEntity(62U);
    msg.setDestination(27068U);
    msg.setDestinationEntity(241U);
    msg.id = 230U;
    msg.range = 0.683908627419;

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
    msg.setTimeStamp(0.551332505819);
    msg.setSource(39902U);
    msg.setSourceEntity(194U);
    msg.setDestination(52823U);
    msg.setDestinationEntity(139U);
    msg.id = 149U;
    msg.range = 0.828913813909;

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
    msg.setTimeStamp(0.552240198314);
    msg.setSource(33123U);
    msg.setSourceEntity(132U);
    msg.setDestination(21712U);
    msg.setDestinationEntity(203U);
    msg.id = 184U;
    msg.range = 0.239291340507;

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
    msg.setTimeStamp(0.049448361273);
    msg.setSource(26375U);
    msg.setSourceEntity(98U);
    msg.setDestination(28197U);
    msg.setDestinationEntity(181U);
    msg.beacon.assign("OFHDPOWTQPFSRXUMSHLWGQZPXRQGCYZJXPHTJOOVRMZAHFYGEOLCOBRHFWCWAFRRPNPVCXOGLJMGLYVKZOWENJLDEBDUZOHSNTTMFNUVDQFUHLCSMADWSGEKQOJCQDYZQTMBBBVMICMGTAIBKINNIDUELWD");
    msg.lat = 0.374582198898;
    msg.lon = 0.748034125273;
    msg.depth = 0.19853636335;
    msg.query_channel = 114U;
    msg.reply_channel = 83U;
    msg.transponder_delay = 80U;

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
    msg.setTimeStamp(0.461733949695);
    msg.setSource(58303U);
    msg.setSourceEntity(206U);
    msg.setDestination(6091U);
    msg.setDestinationEntity(172U);
    msg.beacon.assign("DTUWWXSORVIMHIPWOYMOGXLKJMNAPNRVDVCPZQQNNVUEWJAKDFBQEDXFRBIDCNUZDJTYGHIUTPDOGXPNZYMLJCGTUPVMKMQPSTCLBSFBLIUWZDXCMWUDQKFGLMLUAYYFZPNBZJLYVNZCJEVDTWSMQHXREOYVNBTCJRKWFEEHOGAOERCOHEKZOQBTVK");
    msg.lat = 0.61172767127;
    msg.lon = 0.933189942773;
    msg.depth = 0.825645013751;
    msg.query_channel = 85U;
    msg.reply_channel = 194U;
    msg.transponder_delay = 25U;

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
    msg.setTimeStamp(0.866089765807);
    msg.setSource(51442U);
    msg.setSourceEntity(97U);
    msg.setDestination(16392U);
    msg.setDestinationEntity(45U);
    msg.beacon.assign("COLKMELMDQKSLGQDEFPBPSIXHXNCBZTBAPNNCGWEIGTCMGVSUSNDOQTJALOAREVUCOHYLKQDDLIKSWLUFIWJXFUKSOIJNDTXYPRSHHBRRCUFZJNVJVWYOOZRLGI");
    msg.lat = 0.704528790741;
    msg.lon = 0.446550850793;
    msg.depth = 0.21712556794;
    msg.query_channel = 62U;
    msg.reply_channel = 241U;
    msg.transponder_delay = 10U;

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
    msg.setTimeStamp(0.091828485899);
    msg.setSource(40712U);
    msg.setSourceEntity(176U);
    msg.setDestination(20441U);
    msg.setDestinationEntity(100U);
    msg.op = 142U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UPEUCBMGGUVIBAYUKFXJDRAQXSTLJKBOGIZTQLKYIXWMILLLMRPZXFZICMWJTXVWUQSOBGTZKWBNHPNEQHDDHJAJHQZENZFZWQUPHMNGXOPBEWSYVXJQTSLPFVHWMFAILYNKUFXMGVCBCEHOCIDURARIPVYQHAYRPLUOWWCKAXZGYRJPEOZLAKPYGFSOJGOEQJTS");
    tmp_msg_0.lat = 0.0959746910676;
    tmp_msg_0.lon = 0.872395536314;
    tmp_msg_0.depth = 0.885332708821;
    tmp_msg_0.query_channel = 189U;
    tmp_msg_0.reply_channel = 180U;
    tmp_msg_0.transponder_delay = 242U;
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
    msg.setTimeStamp(0.880889647781);
    msg.setSource(25916U);
    msg.setSourceEntity(166U);
    msg.setDestination(57757U);
    msg.setDestinationEntity(238U);
    msg.op = 158U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YRKBVIVXODBSHHDTJCCBPQZMJYJIGUUNFVYRZFRBCGAXAHTVSNJESBUWOMGMGLDZGNUSAVCIRSRHKTXMAIUCZFHWDNQEOGFFLQMHPAWFPGYTQGNOLELEZXVQRDEEIWGQPMENYBNDKZTXMUWSWFWDRTIVROWIUQJJKFLGHYWPZPZQDKKXYPSHAZTCSLIDVCMRLOND");
    tmp_msg_0.lat = 0.850774169711;
    tmp_msg_0.lon = 0.48972326513;
    tmp_msg_0.depth = 0.18334707336;
    tmp_msg_0.query_channel = 215U;
    tmp_msg_0.reply_channel = 82U;
    tmp_msg_0.transponder_delay = 113U;
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
    msg.setTimeStamp(0.164919929454);
    msg.setSource(8498U);
    msg.setSourceEntity(151U);
    msg.setDestination(35952U);
    msg.setDestinationEntity(233U);
    msg.op = 97U;

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
    msg.setTimeStamp(0.0648489504655);
    msg.setSource(38349U);
    msg.setSourceEntity(81U);
    msg.setDestination(43176U);
    msg.setDestinationEntity(59U);
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 87U;
    tmp_msg_0.longain = 0.816413401395;
    tmp_msg_0.latgain = 0.543525639759;
    tmp_msg_0.bondthick = 1553197839U;
    tmp_msg_0.leadgain = 0.4756935557;
    tmp_msg_0.deconflgain = 0.638182171685;
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
    msg.setTimeStamp(0.835546745187);
    msg.setSource(19617U);
    msg.setSourceEntity(191U);
    msg.setDestination(60782U);
    msg.setDestinationEntity(125U);
    IMC::SmsStatus tmp_msg_0;
    tmp_msg_0.req_id = 43119U;
    tmp_msg_0.status = 91U;
    tmp_msg_0.info.assign("ZVYLZSRWPPVPKIYTJAABLXDGTVFFKWJIIIHGQFEOAVXSCKDNEPBAWFTDDRJOXDLWCMHKOYGUHRZHPLEGTQOEUZCMIEAMGYJDQYVLSCXTQH");
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
    msg.setTimeStamp(0.0501096543689);
    msg.setSource(57587U);
    msg.setSourceEntity(245U);
    msg.setDestination(57553U);
    msg.setDestinationEntity(154U);
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 126U;
    tmp_msg_0.quality = 178U;
    tmp_msg_0.reps = 90U;
    tmp_msg_0.tsize = 104U;
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
    msg.setTimeStamp(0.19633169057);
    msg.setSource(28746U);
    msg.setSourceEntity(166U);
    msg.setDestination(52796U);
    msg.setDestinationEntity(135U);
    msg.op = 10U;
    msg.system.assign("YVFMYPRINOXIPEWANGIWLMQHUGLCBYQCUFOBWCHREGBVHKOEXIGJLJQMACJPJCRRQTITBXTQKTXSKSFJWQBNJZF");
    msg.range = 0.231584486654;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 11068U;
    tmp_msg_0.name.assign("GGKOLURKSUBDOGSNKZIRXQHTVCIUTSXOXDGJUOFYMFVAAVDUKQBINUKUCMNBONXARWLYVXEIFJODXQCOFBFHBBAPYEDRJQQJYHBKQYOSKPJPLDMBCCDHIRMXPKHZBHBAWSFKWSCZNVTNSZAJAMTWQZNLOWHTEHWTXRUMAFAZJS");
    tmp_msg_0.custom.assign("AFRVRMBYBCWBMCEXTJDBHOADQAPKSUURJQPLLJVYMJSKKSHFRFCPSIZTPRKLCMIKGXYVEXOOLTNFNVXIGEBAMAJCTIYINRSQZBQPZWZGHAZNRIFUEVJVCWDOHMWDGFTHZYQQGXSAHQYMQRPBXDSXGALSCUUHQFLNEWKWEEVKILLTRUZKMIAVOVUZMCRNNTJBTDKUISPXCWJBWOQDNILFBMYDXUCSTXPENOZGGFGT");
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
    msg.setTimeStamp(0.77022998224);
    msg.setSource(47096U);
    msg.setSourceEntity(120U);
    msg.setDestination(42696U);
    msg.setDestinationEntity(240U);
    msg.op = 49U;
    msg.system.assign("QLRIBNYLZDBAUYSLCBXXKVAQMHLSFMRPBDZFXVHMREFJPAYTEEIWWUBOEJGLLZQFPKJVMAHRZTYLACUVNQDRCKXINTQDWHCZZSAVSSKHVTFFCVISMDMQJMRWAKGRWVBTNPPENSHONNFYGFWWZILGVHKWIZJQYGDUDPOTNSDABYQTKGMNEYUGGTJOGXEZPWYNCKVUEKQUBDEPXDHHORUUPFJORHXLOECOJMIGCO");
    msg.range = 0.194856400476;
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("PRHVUJPJYSVEECDVUMIDOXFTWGDMZBYNDUARIEZXQSLPPIBKFHVQBHXUMGYZGGWGATEEVGQKLHHMIQVNDSQXCCFLRUNMYIYYYCONWNBCRIEEHDLKF");
    tmp_msg_0.value = 46U;
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
    msg.setTimeStamp(0.249674127784);
    msg.setSource(46932U);
    msg.setSourceEntity(56U);
    msg.setDestination(63528U);
    msg.setDestinationEntity(224U);
    msg.op = 189U;
    msg.system.assign("FGSVZCJRWZNRCVRSPGHYYPOFCPBYFQEOTAHFPLFUMFQYPTICAYMCUBKPDRMQLLGXMKHJHNWNDBOYNZYHGWEJXVPOXKAGXKLIMHLWDXAFCTOXJNZKWUUDFJTQQZTKQBIIZTTRDGUYANUBKAXPYIHEKENJQCPLAXAIKFAPCSVBMHZUBEEYEMWTWSDNVGSDCZFWLRZJNGOSBWLEGQHDVQLIVJUGVTJZWJMIXASSOSBROUKBR");
    msg.range = 0.516551999298;
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 1087U;
    tmp_msg_0.sys.assign("JHIEWYIZICAXSEUSVIBRBEKMRMLXHBLFPNEQROGRPMLIUGZMKKVXXOXWXGQQDZHUCCNPQSLTYCNWZGZNNHUDTARMFLTYLZJBFUPFOJJARXNKCGBJNLVAPPMUPCVTWHQGSFTYSLKEPKIYWLSKOTACZNHTBHYVSYGSRBMOJVNRGKYXWXDEPJYIKOYZECZMMEUUVFDJZIQHTJOPTLWOHGAASBHQDORRAXMFFQSDWKUAWOTCGD");
    tmp_msg_0.value = 0.258801539547;
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
    msg.setTimeStamp(0.149670540589);
    msg.setSource(16822U);
    msg.setSourceEntity(109U);
    msg.setDestination(6393U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.77078785919);
    msg.setSource(49451U);
    msg.setSourceEntity(71U);
    msg.setDestination(24857U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.345992231596);
    msg.setSource(39134U);
    msg.setSourceEntity(98U);
    msg.setDestination(44434U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.244836381228);
    msg.setSource(28481U);
    msg.setSourceEntity(11U);
    msg.setDestination(36866U);
    msg.setDestinationEntity(51U);
    msg.list.assign("JCTOMBJKUZBPCLOWAQTIPGQLAJLYCVSSCNZBESUXFVICKRNUXZZWDMDNDWHEGPUTVQJSHPMEVTANJIRRHFBXHYWAENPANDWKQSQGVRKITOCEDFPFHNBFYSOYIQYJEKTPDIAIXITDZMOMUOFQXEMKJQOWLPKSCEGVYHTUZLGBDWMJJHTZUWABGIKFMAOSXPMHGXRTFBHBCRBG");

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
    msg.setTimeStamp(0.403229012999);
    msg.setSource(6423U);
    msg.setSourceEntity(53U);
    msg.setDestination(12929U);
    msg.setDestinationEntity(40U);
    msg.list.assign("PSWXWPNROMIDCKONWWEKBQGTWJWNKVLGXGZLGMPIKHNSZCQDRDLAVUXGXEAESKQKIIORICUCHUSSQRCPOTRQMUGPCVAJFPVZWYODSUWFZQNFNAFEXSPJZIXQIUGHYGBYBYQXTJOJVBHFDQMWMKXURHCLIMLMJYJ");

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
    msg.setTimeStamp(0.349700018203);
    msg.setSource(7743U);
    msg.setSourceEntity(57U);
    msg.setDestination(16236U);
    msg.setDestinationEntity(100U);
    msg.list.assign("SDPWIYOURWVHKSGPZAF");

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
    msg.setTimeStamp(0.913157577483);
    msg.setSource(55957U);
    msg.setSourceEntity(218U);
    msg.setDestination(5937U);
    msg.setDestinationEntity(139U);
    msg.peer.assign("FBWQAHTIBADYZDPSOAGHOSRVVGIKADUEIXSRRLOBCYSKRQYZLQPSWIG");
    msg.rssi = 0.0861652960103;
    msg.integrity = 36235U;

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
    msg.setTimeStamp(0.675964709845);
    msg.setSource(31505U);
    msg.setSourceEntity(68U);
    msg.setDestination(29262U);
    msg.setDestinationEntity(198U);
    msg.peer.assign("JWMAUFTTLEQNNCJSFXCTOBGQEDDKOJPFENDMMQCAUFMLJHOOHYJPMORMGFCEAVMDPMEANVIPTEZBYEJVDDQXPCRNUKQTWWOFLMIIIJXLJNIZDRBSRQAHUHIVLSXKHJDYSOYCVIQXZSRCROAGUUTPYUUZUGRHWZZYPSYBBRXTSLUSODDFGAGQZALECQRNGGPZXJTECHSNWKTCP");
    msg.rssi = 0.679861737133;
    msg.integrity = 24499U;

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
    msg.setTimeStamp(0.0835231556999);
    msg.setSource(32558U);
    msg.setSourceEntity(239U);
    msg.setDestination(63265U);
    msg.setDestinationEntity(149U);
    msg.peer.assign("CJDHDJWQVABGJTEJWVFCLAIDGFZELBUVXIZUSZUEKEXYQCXPNFXKNMHSHLTCQVLSYBRTKRKGBIGEXOLIZSJXTWKQVXZFF");
    msg.rssi = 0.322682725821;
    msg.integrity = 51357U;

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
    msg.setTimeStamp(0.984029404169);
    msg.setSource(32612U);
    msg.setSourceEntity(143U);
    msg.setDestination(26362U);
    msg.setDestinationEntity(64U);
    msg.value = 3064;

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
    msg.setTimeStamp(0.819784049924);
    msg.setSource(23765U);
    msg.setSourceEntity(163U);
    msg.setDestination(52280U);
    msg.setDestinationEntity(84U);
    msg.value = -2910;

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
    msg.setTimeStamp(0.725375804417);
    msg.setSource(53180U);
    msg.setSourceEntity(215U);
    msg.setDestination(2159U);
    msg.setDestinationEntity(138U);
    msg.value = -13559;

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
    msg.setTimeStamp(0.71030218844);
    msg.setSource(8110U);
    msg.setSourceEntity(190U);
    msg.setDestination(25668U);
    msg.setDestinationEntity(112U);
    msg.value = 0.316020141461;

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
    msg.setTimeStamp(0.324016411582);
    msg.setSource(24028U);
    msg.setSourceEntity(94U);
    msg.setDestination(35178U);
    msg.setDestinationEntity(19U);
    msg.value = 0.706287681862;

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
    msg.setTimeStamp(0.0883647504163);
    msg.setSource(43560U);
    msg.setSourceEntity(77U);
    msg.setDestination(28935U);
    msg.setDestinationEntity(0U);
    msg.value = 0.826152207094;

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
    msg.setTimeStamp(0.654823251346);
    msg.setSource(16209U);
    msg.setSourceEntity(169U);
    msg.setDestination(54485U);
    msg.setDestinationEntity(1U);
    msg.value = 0.497567315446;

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
    msg.setTimeStamp(0.310574173494);
    msg.setSource(62784U);
    msg.setSourceEntity(103U);
    msg.setDestination(3922U);
    msg.setDestinationEntity(126U);
    msg.value = 0.98234993229;

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
    msg.setTimeStamp(0.511860898578);
    msg.setSource(54220U);
    msg.setSourceEntity(229U);
    msg.setDestination(13421U);
    msg.setDestinationEntity(90U);
    msg.value = 0.103734142904;

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
    msg.setTimeStamp(0.646197320672);
    msg.setSource(47368U);
    msg.setSourceEntity(132U);
    msg.setDestination(45281U);
    msg.setDestinationEntity(234U);
    msg.validity = 49252U;
    msg.type = 187U;
    msg.utc_year = 16049U;
    msg.utc_month = 227U;
    msg.utc_day = 148U;
    msg.utc_time = 0.479108398742;
    msg.lat = 0.271150099782;
    msg.lon = 0.728201829566;
    msg.height = 0.267930749722;
    msg.satellites = 43U;
    msg.cog = 0.999144461694;
    msg.sog = 0.44395913663;
    msg.hdop = 0.683831931151;
    msg.vdop = 0.336750143761;
    msg.hacc = 0.969085086859;
    msg.vacc = 0.513642477941;

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
    msg.setTimeStamp(0.268791374577);
    msg.setSource(59159U);
    msg.setSourceEntity(75U);
    msg.setDestination(11014U);
    msg.setDestinationEntity(79U);
    msg.validity = 25048U;
    msg.type = 103U;
    msg.utc_year = 59664U;
    msg.utc_month = 169U;
    msg.utc_day = 23U;
    msg.utc_time = 0.321667029113;
    msg.lat = 0.17361390005;
    msg.lon = 0.0974687221375;
    msg.height = 0.457055873647;
    msg.satellites = 100U;
    msg.cog = 0.112225076326;
    msg.sog = 0.778117955334;
    msg.hdop = 0.987771651364;
    msg.vdop = 0.713309942091;
    msg.hacc = 0.247343508058;
    msg.vacc = 0.335152195109;

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
    msg.setTimeStamp(0.162558563793);
    msg.setSource(147U);
    msg.setSourceEntity(37U);
    msg.setDestination(28067U);
    msg.setDestinationEntity(26U);
    msg.validity = 6162U;
    msg.type = 138U;
    msg.utc_year = 50637U;
    msg.utc_month = 217U;
    msg.utc_day = 54U;
    msg.utc_time = 0.134893614907;
    msg.lat = 0.327381163972;
    msg.lon = 0.898872307822;
    msg.height = 0.783324680119;
    msg.satellites = 203U;
    msg.cog = 0.926574546826;
    msg.sog = 0.696684522327;
    msg.hdop = 0.214996797536;
    msg.vdop = 0.245107353584;
    msg.hacc = 0.27633124301;
    msg.vacc = 0.913875021423;

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
    msg.setTimeStamp(0.668737861442);
    msg.setSource(17082U);
    msg.setSourceEntity(231U);
    msg.setDestination(32819U);
    msg.setDestinationEntity(108U);
    msg.time = 0.540491898872;
    msg.phi = 0.619197777334;
    msg.theta = 0.389844791219;
    msg.psi = 0.944049847173;
    msg.psi_magnetic = 0.82980459955;

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
    msg.setTimeStamp(0.894796617151);
    msg.setSource(46547U);
    msg.setSourceEntity(151U);
    msg.setDestination(45127U);
    msg.setDestinationEntity(147U);
    msg.time = 0.240711262801;
    msg.phi = 0.204361571887;
    msg.theta = 0.29072416315;
    msg.psi = 0.915022476573;
    msg.psi_magnetic = 0.217742004014;

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
    msg.setTimeStamp(0.0336395058901);
    msg.setSource(47983U);
    msg.setSourceEntity(206U);
    msg.setDestination(53614U);
    msg.setDestinationEntity(87U);
    msg.time = 0.641763965386;
    msg.phi = 0.0185962999011;
    msg.theta = 0.94383439626;
    msg.psi = 0.821807807966;
    msg.psi_magnetic = 0.19213862353;

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
    msg.setTimeStamp(0.951504711653);
    msg.setSource(7119U);
    msg.setSourceEntity(0U);
    msg.setDestination(15879U);
    msg.setDestinationEntity(162U);
    msg.time = 0.0106525778789;
    msg.x = 0.319124996173;
    msg.y = 0.663927366386;
    msg.z = 0.821132097855;
    msg.timestep = 0.298743588952;

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
    msg.setTimeStamp(0.639281694685);
    msg.setSource(58467U);
    msg.setSourceEntity(190U);
    msg.setDestination(61296U);
    msg.setDestinationEntity(164U);
    msg.time = 0.310392650993;
    msg.x = 0.00177860881402;
    msg.y = 0.604747070638;
    msg.z = 0.866641816932;
    msg.timestep = 0.91160012939;

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
    msg.setTimeStamp(0.330627305848);
    msg.setSource(64590U);
    msg.setSourceEntity(37U);
    msg.setDestination(22759U);
    msg.setDestinationEntity(32U);
    msg.time = 0.533930871379;
    msg.x = 0.0244733715851;
    msg.y = 0.276000916191;
    msg.z = 0.0808121650812;
    msg.timestep = 0.519501047854;

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
    msg.setTimeStamp(0.693522245647);
    msg.setSource(19718U);
    msg.setSourceEntity(175U);
    msg.setDestination(61683U);
    msg.setDestinationEntity(20U);
    msg.time = 0.218604748248;
    msg.x = 0.558083226486;
    msg.y = 0.0145500080222;
    msg.z = 0.976219188158;

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
    msg.setTimeStamp(0.998520559203);
    msg.setSource(27630U);
    msg.setSourceEntity(210U);
    msg.setDestination(31639U);
    msg.setDestinationEntity(38U);
    msg.time = 0.0531079103472;
    msg.x = 0.0975423365216;
    msg.y = 0.747372173719;
    msg.z = 0.564391180147;

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
    msg.setTimeStamp(0.601855343778);
    msg.setSource(36168U);
    msg.setSourceEntity(159U);
    msg.setDestination(59496U);
    msg.setDestinationEntity(70U);
    msg.time = 0.984628139973;
    msg.x = 0.488167106836;
    msg.y = 0.29992435545;
    msg.z = 0.502691309912;

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
    msg.setTimeStamp(0.558640802207);
    msg.setSource(29765U);
    msg.setSourceEntity(160U);
    msg.setDestination(26117U);
    msg.setDestinationEntity(21U);
    msg.time = 0.196850752617;
    msg.x = 0.368938728244;
    msg.y = 0.632679749625;
    msg.z = 0.00845133499206;

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
    msg.setTimeStamp(0.93395506505);
    msg.setSource(39321U);
    msg.setSourceEntity(202U);
    msg.setDestination(31568U);
    msg.setDestinationEntity(136U);
    msg.time = 0.0795014548756;
    msg.x = 0.186025886594;
    msg.y = 0.671216390297;
    msg.z = 0.858873649916;

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
    msg.setTimeStamp(0.191300274972);
    msg.setSource(28963U);
    msg.setSourceEntity(132U);
    msg.setDestination(64049U);
    msg.setDestinationEntity(19U);
    msg.time = 0.318840221973;
    msg.x = 0.28298391289;
    msg.y = 0.741487150642;
    msg.z = 0.358194775387;

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
    msg.setTimeStamp(0.160929092853);
    msg.setSource(62072U);
    msg.setSourceEntity(62U);
    msg.setDestination(50287U);
    msg.setDestinationEntity(77U);
    msg.time = 0.835530729266;
    msg.x = 0.998440169162;
    msg.y = 0.129056713511;
    msg.z = 0.752019955396;

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
    msg.setTimeStamp(0.895265771898);
    msg.setSource(48405U);
    msg.setSourceEntity(152U);
    msg.setDestination(52009U);
    msg.setDestinationEntity(132U);
    msg.time = 0.766300832567;
    msg.x = 0.917397646395;
    msg.y = 0.920744345885;
    msg.z = 0.166270228283;

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
    msg.setTimeStamp(0.453096796075);
    msg.setSource(63430U);
    msg.setSourceEntity(17U);
    msg.setDestination(42922U);
    msg.setDestinationEntity(60U);
    msg.time = 0.00260874564222;
    msg.x = 0.33673330736;
    msg.y = 0.0443608825431;
    msg.z = 0.365722497858;

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
    msg.setTimeStamp(0.533598129831);
    msg.setSource(48263U);
    msg.setSourceEntity(234U);
    msg.setDestination(49119U);
    msg.setDestinationEntity(167U);
    msg.validity = 184U;
    msg.x = 0.749837920553;
    msg.y = 0.155439811508;
    msg.z = 0.443914890388;

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
    msg.setTimeStamp(0.378036374141);
    msg.setSource(18385U);
    msg.setSourceEntity(154U);
    msg.setDestination(41088U);
    msg.setDestinationEntity(234U);
    msg.validity = 215U;
    msg.x = 0.728361482105;
    msg.y = 0.826387704402;
    msg.z = 0.576704995811;

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
    msg.setTimeStamp(0.579219084332);
    msg.setSource(39474U);
    msg.setSourceEntity(59U);
    msg.setDestination(33851U);
    msg.setDestinationEntity(16U);
    msg.validity = 173U;
    msg.x = 0.434990428034;
    msg.y = 0.689296677734;
    msg.z = 0.545268629269;

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
    msg.setTimeStamp(0.764314746699);
    msg.setSource(49757U);
    msg.setSourceEntity(223U);
    msg.setDestination(21851U);
    msg.setDestinationEntity(187U);
    msg.validity = 177U;
    msg.x = 0.499802835622;
    msg.y = 0.0275484846149;
    msg.z = 0.864466528993;

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
    msg.setTimeStamp(0.854162807117);
    msg.setSource(27899U);
    msg.setSourceEntity(41U);
    msg.setDestination(6900U);
    msg.setDestinationEntity(35U);
    msg.validity = 215U;
    msg.x = 0.617964347152;
    msg.y = 0.534233498966;
    msg.z = 0.90838441746;

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
    msg.setTimeStamp(0.236091835645);
    msg.setSource(7634U);
    msg.setSourceEntity(115U);
    msg.setDestination(10433U);
    msg.setDestinationEntity(52U);
    msg.validity = 97U;
    msg.x = 0.789253064302;
    msg.y = 0.602079220003;
    msg.z = 0.790648136472;

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
    msg.setTimeStamp(0.727466175988);
    msg.setSource(51678U);
    msg.setSourceEntity(30U);
    msg.setDestination(63080U);
    msg.setDestinationEntity(118U);
    msg.time = 0.406387197981;
    msg.x = 0.0318478912993;
    msg.y = 0.0517579422296;
    msg.z = 0.454597390748;

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
    msg.setTimeStamp(0.588396053521);
    msg.setSource(29843U);
    msg.setSourceEntity(151U);
    msg.setDestination(59357U);
    msg.setDestinationEntity(135U);
    msg.time = 0.90600993503;
    msg.x = 0.320868150564;
    msg.y = 0.549073364594;
    msg.z = 0.582687829685;

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
    msg.setTimeStamp(0.882489845922);
    msg.setSource(7366U);
    msg.setSourceEntity(196U);
    msg.setDestination(41593U);
    msg.setDestinationEntity(23U);
    msg.time = 0.0994907932766;
    msg.x = 0.955216051444;
    msg.y = 0.774275279105;
    msg.z = 0.897661580894;

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
    msg.setTimeStamp(0.958574155624);
    msg.setSource(50445U);
    msg.setSourceEntity(179U);
    msg.setDestination(28171U);
    msg.setDestinationEntity(56U);
    msg.validity = 2U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.917736622398;
    tmp_msg_0.y = 0.886405244778;
    tmp_msg_0.z = 0.760071185882;
    tmp_msg_0.phi = 0.260273022356;
    tmp_msg_0.theta = 0.606358063087;
    tmp_msg_0.psi = 0.975674814711;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.235127747145;
    tmp_msg_1.beam_height = 0.312590905862;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.158928690732;

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
    msg.setTimeStamp(0.446406999879);
    msg.setSource(65317U);
    msg.setSourceEntity(38U);
    msg.setDestination(58598U);
    msg.setDestinationEntity(42U);
    msg.validity = 198U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0545256439043;
    tmp_msg_0.y = 0.250602679356;
    tmp_msg_0.z = 0.150288860251;
    tmp_msg_0.phi = 0.296353639918;
    tmp_msg_0.theta = 0.961903088098;
    tmp_msg_0.psi = 0.745957523262;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.628323650753;
    tmp_msg_1.beam_height = 0.370664866528;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.542389429385;

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
    msg.setTimeStamp(0.171774610111);
    msg.setSource(32259U);
    msg.setSourceEntity(99U);
    msg.setDestination(54382U);
    msg.setDestinationEntity(121U);
    msg.validity = 152U;
    msg.value = 0.411564663061;

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
    msg.setTimeStamp(0.238738175774);
    msg.setSource(21034U);
    msg.setSourceEntity(104U);
    msg.setDestination(47686U);
    msg.setDestinationEntity(53U);
    msg.value = 0.870398042032;

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
    msg.setTimeStamp(0.962771601722);
    msg.setSource(39341U);
    msg.setSourceEntity(250U);
    msg.setDestination(10437U);
    msg.setDestinationEntity(33U);
    msg.value = 0.280005128661;

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
    msg.setTimeStamp(0.20536344994);
    msg.setSource(39875U);
    msg.setSourceEntity(143U);
    msg.setDestination(43036U);
    msg.setDestinationEntity(243U);
    msg.value = 0.747506253452;

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
    msg.setTimeStamp(0.617269191008);
    msg.setSource(36786U);
    msg.setSourceEntity(32U);
    msg.setDestination(7231U);
    msg.setDestinationEntity(12U);
    msg.value = 0.392983051013;

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
    msg.setTimeStamp(0.133993499853);
    msg.setSource(55661U);
    msg.setSourceEntity(36U);
    msg.setDestination(25012U);
    msg.setDestinationEntity(151U);
    msg.value = 0.766369225861;

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
    msg.setTimeStamp(0.385540460216);
    msg.setSource(12536U);
    msg.setSourceEntity(145U);
    msg.setDestination(30389U);
    msg.setDestinationEntity(222U);
    msg.value = 0.202022801995;

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
    msg.setTimeStamp(0.366591252929);
    msg.setSource(41116U);
    msg.setSourceEntity(151U);
    msg.setDestination(59941U);
    msg.setDestinationEntity(149U);
    msg.value = 0.234366090212;

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
    msg.setTimeStamp(0.426535000049);
    msg.setSource(39908U);
    msg.setSourceEntity(141U);
    msg.setDestination(32882U);
    msg.setDestinationEntity(78U);
    msg.value = 0.559188987348;

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
    msg.setTimeStamp(0.483007288039);
    msg.setSource(65515U);
    msg.setSourceEntity(153U);
    msg.setDestination(7678U);
    msg.setDestinationEntity(16U);
    msg.value = 0.34486500989;

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
    msg.setTimeStamp(0.602240978161);
    msg.setSource(43949U);
    msg.setSourceEntity(116U);
    msg.setDestination(14652U);
    msg.setDestinationEntity(83U);
    msg.value = 0.678539391658;

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
    msg.setTimeStamp(0.7539067891);
    msg.setSource(46159U);
    msg.setSourceEntity(206U);
    msg.setDestination(54059U);
    msg.setDestinationEntity(37U);
    msg.value = 0.0616884980076;

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
    msg.setTimeStamp(0.385501922123);
    msg.setSource(19327U);
    msg.setSourceEntity(249U);
    msg.setDestination(21423U);
    msg.setDestinationEntity(246U);
    msg.value = 0.486369243455;

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
    msg.setTimeStamp(0.595700536806);
    msg.setSource(11960U);
    msg.setSourceEntity(7U);
    msg.setDestination(34023U);
    msg.setDestinationEntity(190U);
    msg.value = 0.128302825346;

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
    msg.setTimeStamp(0.538957785271);
    msg.setSource(11654U);
    msg.setSourceEntity(65U);
    msg.setDestination(34239U);
    msg.setDestinationEntity(116U);
    msg.value = 0.643262052353;

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
    msg.setTimeStamp(0.326488843434);
    msg.setSource(16629U);
    msg.setSourceEntity(236U);
    msg.setDestination(17705U);
    msg.setDestinationEntity(3U);
    msg.value = 0.888555378768;

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
    msg.setTimeStamp(0.845170111937);
    msg.setSource(24369U);
    msg.setSourceEntity(182U);
    msg.setDestination(61326U);
    msg.setDestinationEntity(88U);
    msg.value = 0.29985388515;

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
    msg.setTimeStamp(0.67104980003);
    msg.setSource(14656U);
    msg.setSourceEntity(230U);
    msg.setDestination(6534U);
    msg.setDestinationEntity(65U);
    msg.value = 0.811510213147;

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
    msg.setTimeStamp(0.625199004009);
    msg.setSource(39814U);
    msg.setSourceEntity(169U);
    msg.setDestination(45210U);
    msg.setDestinationEntity(67U);
    msg.value = 0.487677051911;

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
    msg.setTimeStamp(0.853185205173);
    msg.setSource(58651U);
    msg.setSourceEntity(69U);
    msg.setDestination(4623U);
    msg.setDestinationEntity(168U);
    msg.value = 0.102692236516;

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
    msg.setTimeStamp(0.341757255021);
    msg.setSource(41734U);
    msg.setSourceEntity(83U);
    msg.setDestination(25916U);
    msg.setDestinationEntity(56U);
    msg.value = 0.667145639011;

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
    msg.setTimeStamp(0.982758843276);
    msg.setSource(33666U);
    msg.setSourceEntity(131U);
    msg.setDestination(9014U);
    msg.setDestinationEntity(28U);
    msg.value = 0.963601401033;

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
    msg.setTimeStamp(0.417102660641);
    msg.setSource(22761U);
    msg.setSourceEntity(244U);
    msg.setDestination(18356U);
    msg.setDestinationEntity(13U);
    msg.value = 0.164663960261;

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
    msg.setTimeStamp(0.813003849605);
    msg.setSource(60264U);
    msg.setSourceEntity(4U);
    msg.setDestination(34035U);
    msg.setDestinationEntity(196U);
    msg.value = 0.549750310476;

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
    msg.setTimeStamp(0.934195966213);
    msg.setSource(48568U);
    msg.setSourceEntity(185U);
    msg.setDestination(47255U);
    msg.setDestinationEntity(143U);
    msg.value = 0.964787999569;

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
    msg.setTimeStamp(0.0690499428918);
    msg.setSource(32143U);
    msg.setSourceEntity(29U);
    msg.setDestination(63434U);
    msg.setDestinationEntity(64U);
    msg.direction = 0.9660419029;
    msg.speed = 0.888256915157;
    msg.turbulence = 0.544979513059;

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
    msg.setTimeStamp(0.695653538039);
    msg.setSource(53964U);
    msg.setSourceEntity(247U);
    msg.setDestination(24377U);
    msg.setDestinationEntity(49U);
    msg.direction = 0.296594706478;
    msg.speed = 0.475172711329;
    msg.turbulence = 0.832594922917;

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
    msg.setTimeStamp(0.550030983824);
    msg.setSource(36237U);
    msg.setSourceEntity(140U);
    msg.setDestination(15771U);
    msg.setDestinationEntity(147U);
    msg.direction = 0.820443462108;
    msg.speed = 0.310200000594;
    msg.turbulence = 0.62241761689;

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
    msg.setTimeStamp(0.980644496811);
    msg.setSource(4005U);
    msg.setSourceEntity(103U);
    msg.setDestination(37610U);
    msg.setDestinationEntity(9U);
    msg.value = 0.418282205295;

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
    msg.setTimeStamp(0.818683029523);
    msg.setSource(19531U);
    msg.setSourceEntity(230U);
    msg.setDestination(20788U);
    msg.setDestinationEntity(39U);
    msg.value = 0.743394652886;

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
    msg.setTimeStamp(0.187844758563);
    msg.setSource(57642U);
    msg.setSourceEntity(120U);
    msg.setDestination(24870U);
    msg.setDestinationEntity(119U);
    msg.value = 0.978793977301;

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
    msg.setTimeStamp(0.848559573512);
    msg.setSource(61859U);
    msg.setSourceEntity(196U);
    msg.setDestination(19400U);
    msg.setDestinationEntity(43U);
    msg.value.assign("KQGAXLGILYSRL");

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
    msg.setTimeStamp(0.260752645907);
    msg.setSource(28039U);
    msg.setSourceEntity(142U);
    msg.setDestination(7110U);
    msg.setDestinationEntity(252U);
    msg.value.assign("EYRGYGTHPJAJVTYZQNPEDPJFGBYFNEISIKSGDMFHPKCUFHWVEJLELYKCZQVQKMWPSTMVOZPZELARMHCFLZHDTNLLVDKDVXJTOTGOEIOSDQSMBATZBRRIUUCIOBIADQPBWDABOXCWXRZGFNVCSXBRLTNPFUQCMBHNEIBPOVXXYQCIMKLZAJRCMEUVOROERGXUQHURWWDTFZUSKYXQHJKFYLYWGJJDMXMWHNKSAXZJNBOHAIFPSKLGIWSNAY");

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
    msg.setTimeStamp(0.235460123416);
    msg.setSource(61632U);
    msg.setSourceEntity(149U);
    msg.setDestination(52560U);
    msg.setDestinationEntity(2U);
    msg.value.assign("EGWTEBEWYGSVQBQEMIHPACOJIVVIIFMLLDZKSTVYFUVDXWFHGWJURKMHNXQCOYDOTGMKBAZVTSGSZRKHWUKWXFJNSXIBVESDBYZKMKIPFYSGJCIMSMRTBTWJKYACPUBJQXJNJYDDHRERLBXLXALHVPNNKMAFCUBAESXDQUVGKLAJNNIRXCDLTGMPDHSOOJOCUZACPP");

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
    msg.setTimeStamp(0.628345805189);
    msg.setSource(5143U);
    msg.setSourceEntity(199U);
    msg.setDestination(32063U);
    msg.setDestinationEntity(18U);
    const char tmp_msg_0[] = {40, -24, 126, 65, -127, 88, 25, 98, -12, -35, -13, 48, 42, 72, 24, 18, 68, -64, 12, 66, -121, -16, -15, 104, -53, 9, 34, 90, 8, 63, 35, -101, -44, 117, -21, 92, -61, 126, -14, -90, -99, -47, 124, -14, -24, -65, 41, 66, 44, -116, -88, 93, -26, -122, -59, -10, -31, -54, 14, -28, 58, -9, 28, -39, 62, -122, -73, 104, 122, 25, 70, -64, -108, 95, -110, 61, -64, -106, -70, 63, -26, 88, -121, 93, 86, -27, -103, -114, 18, 122, -73, -78, 65, 47, -54, 35, 45, 5, 48, 70, 37, 35, -126, 78, 39, -87, -108, -80, -41, -11, -79, 25, -47, -10, 6, -96, -52, 105, -126, 79, 32, 73, 3, -87, -48, 123, 28, -74, -77, 12, -106, 105, 116, 111, 112, 87, 5, 88, -32, 26, -65, -108, -124, -54, -115, -11, -93, 123, -8, -32, -106, 15, 70, -91, -59, 79, 112, -31, -29, -96, 33, -34, -39, 93, 105, 31, 60, -63, 38};
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
    msg.setTimeStamp(0.400221770442);
    msg.setSource(33612U);
    msg.setSourceEntity(41U);
    msg.setDestination(5456U);
    msg.setDestinationEntity(17U);
    const char tmp_msg_0[] = {35, -117, -31, -83, 75, 2, -60, -99, 67, 95, -99, -106, -20, -118, 24, 21, 102, -115, 95, 69, -85, 18, 85, -11, 7, -33};
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
    msg.setTimeStamp(0.582933298481);
    msg.setSource(18944U);
    msg.setSourceEntity(220U);
    msg.setDestination(54212U);
    msg.setDestinationEntity(116U);
    const char tmp_msg_0[] = {49, -104, -21, 32, 67, 15, 75, -17, -82, -10, 92, 86, -46, -98, 28, -63, -37, 44, -64, -109, -25, -18, 96, -102, -79, -96, -10, 56, 101, 32, 37, -103, -81, 1, 75, 23, 101, -88, 3, 64, -48, -24, 1, -114, 14, 118, -78, 75, -67, -37, -64, 52, -39, -4, 7, -68, -30, 27, 27, 6, -27, -128, 57, -23, 118, -124, 45, -57, 47, -48, -49, 99, 5, 1, -122, -62, 119, 41, -122, -78, 70, -103, -117, 42, 89, -61, -59, -26, -35, 86, -55, 119, 83, -49, -71, -122, 98, 117, -89, 72, 111, -98, 66, -50, 101, -27, -24, 42, 71, -115, -50, 76, -67, 15, -108, 115, 108, -67, -17, 122, 61, -8, 45, -59, 66, 7, 35, -122, -61, 80, 65};
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
    msg.setTimeStamp(0.181896709744);
    msg.setSource(36021U);
    msg.setSourceEntity(31U);
    msg.setDestination(31000U);
    msg.setDestinationEntity(252U);
    msg.value = 0.00665040867643;

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
    msg.setTimeStamp(0.779389021636);
    msg.setSource(51869U);
    msg.setSourceEntity(49U);
    msg.setDestination(27124U);
    msg.setDestinationEntity(176U);
    msg.value = 0.232362196316;

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
    msg.setTimeStamp(0.946167368124);
    msg.setSource(5023U);
    msg.setSourceEntity(164U);
    msg.setDestination(20070U);
    msg.setDestinationEntity(170U);
    msg.value = 0.243022704873;

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
    msg.setTimeStamp(0.337197571247);
    msg.setSource(5323U);
    msg.setSourceEntity(138U);
    msg.setDestination(46394U);
    msg.setDestinationEntity(246U);
    msg.type = 46U;
    msg.frequency = 3184485483U;
    msg.min_range = 35372U;
    msg.max_range = 36943U;
    msg.bits_per_point = 0U;
    msg.scale_factor = 0.213197453471;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.188789240442;
    tmp_msg_0.beam_height = 0.00123881354094;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-55, 86, -70, -98, -45, 55, 57, 28, -47, 77, -94, -90, -81, 104, -127, 120, -9, 24, -29, 106, 0, -50, -46, -105, -23, 65, 54, 63, -91, 2, -77, -25, -23, 10, -63, 17, -39, -96, 91, -1, 74, -111, 116, -53, 72, 95, -1};
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
    msg.setTimeStamp(0.387414476211);
    msg.setSource(42268U);
    msg.setSourceEntity(213U);
    msg.setDestination(45513U);
    msg.setDestinationEntity(191U);
    msg.type = 35U;
    msg.frequency = 3269985024U;
    msg.min_range = 56357U;
    msg.max_range = 54404U;
    msg.bits_per_point = 75U;
    msg.scale_factor = 0.978882298764;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.095841377632;
    tmp_msg_0.beam_height = 0.575097257334;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {113, -123, 31, -61, 82, 11, 47, -57, -74, -127, 101, -66};
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
    msg.setTimeStamp(0.496431136959);
    msg.setSource(8275U);
    msg.setSourceEntity(254U);
    msg.setDestination(46130U);
    msg.setDestinationEntity(238U);
    msg.type = 39U;
    msg.frequency = 3040201989U;
    msg.min_range = 48096U;
    msg.max_range = 29648U;
    msg.bits_per_point = 136U;
    msg.scale_factor = 0.414355279496;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.760950744362;
    tmp_msg_0.beam_height = 0.553763295879;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {48, -33, 56, -33, -77, -91, -86, 76, -72, -108, -87, 56, -114, -69, -47, 87, 57, 35, 31, 34, 85, 9, -76, 20, 61, 54, -44, 45, -115, -60, 49, 118, 67, -23, -127, 113, -62, -13, -67, -18, 67, -16, -51, 28, -25, -116, -97, 104, -80, 48, 13, -6, -35, 75, 80, -123, 109, 55, 42, 94, -43, 107, -123, -94, -26, -71, -104, -35, 48, -67, -92, -98, -29, -102, -2, 113, 67, -87, 90, 42, 124, 81, 56, -44, -38, -24, 40, 51, 40, -113, -64, 32};
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
    msg.setTimeStamp(0.330647706123);
    msg.setSource(61942U);
    msg.setSourceEntity(249U);
    msg.setDestination(16591U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.181657196892);
    msg.setSource(59170U);
    msg.setSourceEntity(77U);
    msg.setDestination(57703U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.379887061487);
    msg.setSource(33760U);
    msg.setSourceEntity(108U);
    msg.setDestination(39825U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.180316630922);
    msg.setSource(46723U);
    msg.setSourceEntity(165U);
    msg.setDestination(56287U);
    msg.setDestinationEntity(57U);
    msg.op = 106U;

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
    msg.setTimeStamp(0.502746683356);
    msg.setSource(28519U);
    msg.setSourceEntity(172U);
    msg.setDestination(31231U);
    msg.setDestinationEntity(216U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.252991715361);
    msg.setSource(5061U);
    msg.setSourceEntity(55U);
    msg.setDestination(59905U);
    msg.setDestinationEntity(107U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.75654191086);
    msg.setSource(3690U);
    msg.setSourceEntity(91U);
    msg.setDestination(28925U);
    msg.setDestinationEntity(50U);
    msg.value = 0.0203966168745;
    msg.confidence = 0.574674426352;
    msg.opmodes.assign("RSKAQNIGZRHEIAXZKZUKYCYZVECRCXHXXADYPQLRUBDARAMITVYJFAOMNQJBDHUBHNLZYKVUAAVOYSDCQJCCILMFCPMQMKQLSLJYBCTBWGHPYEKAOPUSDJQVGRPZOERSEPGOZIEMZWMKIS");

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
    msg.setTimeStamp(0.233889190941);
    msg.setSource(22339U);
    msg.setSourceEntity(101U);
    msg.setDestination(38945U);
    msg.setDestinationEntity(160U);
    msg.value = 0.633067097984;
    msg.confidence = 0.712377388547;
    msg.opmodes.assign("QRBRYTAPPNEZLPNJSKNWDZAPWXWANAGTUHPNPRYUZYSVIVVSRGTGLGQFMKARKGHZMVRDYDECEKUKPQWGAONIXSBWQBIKLONZCYQQQEWXOHXUCXVLPLTRTUJTEHCLBXSUSTIVTKGGIQQUJGCFKYNWMCJHFCIYBBFJEFXUZPHJKZC");

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
    msg.setTimeStamp(0.849840611956);
    msg.setSource(37578U);
    msg.setSourceEntity(149U);
    msg.setDestination(14679U);
    msg.setDestinationEntity(58U);
    msg.value = 0.881492967272;
    msg.confidence = 0.928193756594;
    msg.opmodes.assign("SRZJZUQFFBBRHLNCQOJVKBDFIWDBFZXUXYFYQNDYDZYMAOEROIRJCSHIJPYCOTNDVEKDBULESUSKSFSZXEOQFPRNBUSGQLBCQPVGGGUHHBGNWJQNVFYSHLUTK");

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
    msg.setTimeStamp(0.0667989470461);
    msg.setSource(34904U);
    msg.setSourceEntity(141U);
    msg.setDestination(26674U);
    msg.setDestinationEntity(232U);
    msg.itow = 1882154823U;
    msg.lat = 0.239925649284;
    msg.lon = 0.663773497742;
    msg.height_ell = 0.017614081609;
    msg.height_sea = 0.364799827755;
    msg.hacc = 0.62369849434;
    msg.vacc = 0.773205260971;
    msg.vel_n = 0.0929607096447;
    msg.vel_e = 0.904291881946;
    msg.vel_d = 0.084437025768;
    msg.speed = 0.968241362042;
    msg.gspeed = 0.653477689139;
    msg.heading = 0.668938506047;
    msg.sacc = 0.245754747676;
    msg.cacc = 0.0829237454759;

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
    msg.setTimeStamp(0.899372886298);
    msg.setSource(14219U);
    msg.setSourceEntity(3U);
    msg.setDestination(29125U);
    msg.setDestinationEntity(224U);
    msg.itow = 3463508352U;
    msg.lat = 0.117614276825;
    msg.lon = 0.85100555098;
    msg.height_ell = 0.660594049217;
    msg.height_sea = 0.273350414654;
    msg.hacc = 0.588830766815;
    msg.vacc = 0.534050305964;
    msg.vel_n = 0.50165669276;
    msg.vel_e = 0.173031877514;
    msg.vel_d = 0.284416532279;
    msg.speed = 0.847493829072;
    msg.gspeed = 0.870443544689;
    msg.heading = 0.103959384081;
    msg.sacc = 0.559182416549;
    msg.cacc = 0.846738463469;

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
    msg.setTimeStamp(0.833819476991);
    msg.setSource(37316U);
    msg.setSourceEntity(126U);
    msg.setDestination(1014U);
    msg.setDestinationEntity(122U);
    msg.itow = 1289314877U;
    msg.lat = 0.419260919331;
    msg.lon = 0.909250737498;
    msg.height_ell = 0.608363519411;
    msg.height_sea = 0.600977058482;
    msg.hacc = 0.793688080607;
    msg.vacc = 0.626353215661;
    msg.vel_n = 0.837328860268;
    msg.vel_e = 0.166755642349;
    msg.vel_d = 0.376822950857;
    msg.speed = 0.513654912365;
    msg.gspeed = 0.04713992209;
    msg.heading = 0.088809297371;
    msg.sacc = 0.0618980865762;
    msg.cacc = 0.799834335056;

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
    msg.setTimeStamp(0.408397828013);
    msg.setSource(5124U);
    msg.setSourceEntity(8U);
    msg.setDestination(3087U);
    msg.setDestinationEntity(194U);
    msg.id = 195U;
    msg.value = 0.660383559175;

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
    msg.setTimeStamp(0.143807741275);
    msg.setSource(14019U);
    msg.setSourceEntity(80U);
    msg.setDestination(12374U);
    msg.setDestinationEntity(165U);
    msg.id = 68U;
    msg.value = 0.681276558011;

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
    msg.setTimeStamp(0.876486043568);
    msg.setSource(1232U);
    msg.setSourceEntity(30U);
    msg.setDestination(35338U);
    msg.setDestinationEntity(56U);
    msg.id = 154U;
    msg.value = 0.896243862658;

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
    msg.setTimeStamp(0.542926490825);
    msg.setSource(15880U);
    msg.setSourceEntity(86U);
    msg.setDestination(60168U);
    msg.setDestinationEntity(185U);
    msg.x = 0.433320446222;
    msg.y = 0.211647947737;
    msg.z = 0.154141210272;
    msg.phi = 0.0339809275048;
    msg.theta = 0.168549510738;
    msg.psi = 0.783676456339;

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
    msg.setTimeStamp(0.60226870472);
    msg.setSource(39174U);
    msg.setSourceEntity(18U);
    msg.setDestination(49089U);
    msg.setDestinationEntity(188U);
    msg.x = 0.0665785663801;
    msg.y = 0.737106591921;
    msg.z = 0.752639771952;
    msg.phi = 0.995296921497;
    msg.theta = 0.831356787186;
    msg.psi = 0.151169773345;

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
    msg.setTimeStamp(0.412317407653);
    msg.setSource(15685U);
    msg.setSourceEntity(9U);
    msg.setDestination(18089U);
    msg.setDestinationEntity(233U);
    msg.x = 0.28312286377;
    msg.y = 0.873946552403;
    msg.z = 0.475190095526;
    msg.phi = 0.475421358574;
    msg.theta = 0.119171973162;
    msg.psi = 0.792321017183;

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
    msg.setTimeStamp(0.602625705966);
    msg.setSource(49715U);
    msg.setSourceEntity(233U);
    msg.setDestination(26397U);
    msg.setDestinationEntity(31U);
    msg.beam_width = 0.646955015433;
    msg.beam_height = 0.164675124989;

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
    msg.setTimeStamp(0.816484564001);
    msg.setSource(30826U);
    msg.setSourceEntity(92U);
    msg.setDestination(39509U);
    msg.setDestinationEntity(224U);
    msg.beam_width = 0.468362835636;
    msg.beam_height = 0.570493901563;

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
    msg.setTimeStamp(0.450536171758);
    msg.setSource(58768U);
    msg.setSourceEntity(28U);
    msg.setDestination(39498U);
    msg.setDestinationEntity(29U);
    msg.beam_width = 0.606350464357;
    msg.beam_height = 0.959673900683;

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
    msg.setTimeStamp(0.668413689847);
    msg.setSource(33116U);
    msg.setSourceEntity(150U);
    msg.setDestination(19890U);
    msg.setDestinationEntity(251U);
    msg.sane = 208U;

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
    msg.setTimeStamp(0.0571988594844);
    msg.setSource(37827U);
    msg.setSourceEntity(55U);
    msg.setDestination(30826U);
    msg.setDestinationEntity(178U);
    msg.sane = 117U;

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
    msg.setTimeStamp(0.90226792038);
    msg.setSource(7694U);
    msg.setSourceEntity(129U);
    msg.setDestination(56802U);
    msg.setDestinationEntity(208U);
    msg.sane = 168U;

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
    msg.setTimeStamp(0.235643795622);
    msg.setSource(25088U);
    msg.setSourceEntity(32U);
    msg.setDestination(49440U);
    msg.setDestinationEntity(58U);
    msg.value = 0.973251205935;

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
    msg.setTimeStamp(0.320514129074);
    msg.setSource(11973U);
    msg.setSourceEntity(139U);
    msg.setDestination(34172U);
    msg.setDestinationEntity(59U);
    msg.value = 0.353569429218;

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
    msg.setTimeStamp(0.721629939973);
    msg.setSource(5792U);
    msg.setSourceEntity(32U);
    msg.setDestination(37253U);
    msg.setDestinationEntity(126U);
    msg.value = 0.779519369132;

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
    msg.setTimeStamp(0.796498205589);
    msg.setSource(20033U);
    msg.setSourceEntity(135U);
    msg.setDestination(22176U);
    msg.setDestinationEntity(238U);
    msg.value = 0.437058272607;

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
    msg.setTimeStamp(0.580189503669);
    msg.setSource(43664U);
    msg.setSourceEntity(82U);
    msg.setDestination(43543U);
    msg.setDestinationEntity(148U);
    msg.value = 0.527007551884;

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
    msg.setTimeStamp(0.870923057102);
    msg.setSource(23960U);
    msg.setSourceEntity(222U);
    msg.setDestination(16269U);
    msg.setDestinationEntity(89U);
    msg.value = 0.868529827882;

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
    msg.setTimeStamp(0.738751396409);
    msg.setSource(12000U);
    msg.setSourceEntity(184U);
    msg.setDestination(44227U);
    msg.setDestinationEntity(225U);
    msg.value = 0.105714160374;

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
    msg.setTimeStamp(0.717175536734);
    msg.setSource(46199U);
    msg.setSourceEntity(22U);
    msg.setDestination(60085U);
    msg.setDestinationEntity(145U);
    msg.value = 0.763020943075;

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
    msg.setTimeStamp(0.031603918046);
    msg.setSource(56792U);
    msg.setSourceEntity(214U);
    msg.setDestination(4509U);
    msg.setDestinationEntity(99U);
    msg.value = 0.874744312064;

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
    msg.setTimeStamp(0.481585221558);
    msg.setSource(32888U);
    msg.setSourceEntity(57U);
    msg.setDestination(8725U);
    msg.setDestinationEntity(247U);
    msg.value = 0.330013193293;

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
    msg.setTimeStamp(0.377499393755);
    msg.setSource(61493U);
    msg.setSourceEntity(247U);
    msg.setDestination(35394U);
    msg.setDestinationEntity(218U);
    msg.value = 0.568849115896;

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
    msg.setTimeStamp(0.579666846034);
    msg.setSource(7340U);
    msg.setSourceEntity(154U);
    msg.setDestination(9381U);
    msg.setDestinationEntity(103U);
    msg.value = 0.108517838926;

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
    msg.setTimeStamp(0.651919642196);
    msg.setSource(33954U);
    msg.setSourceEntity(38U);
    msg.setDestination(42634U);
    msg.setDestinationEntity(250U);
    msg.value = 0.341094710743;

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
    msg.setTimeStamp(0.922495283036);
    msg.setSource(20702U);
    msg.setSourceEntity(13U);
    msg.setDestination(56521U);
    msg.setDestinationEntity(112U);
    msg.value = 0.871039447157;

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
    msg.setTimeStamp(0.22352356041);
    msg.setSource(57507U);
    msg.setSourceEntity(114U);
    msg.setDestination(49107U);
    msg.setDestinationEntity(52U);
    msg.value = 0.852718352207;

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
    msg.setTimeStamp(0.12180453909);
    msg.setSource(9473U);
    msg.setSourceEntity(181U);
    msg.setDestination(60874U);
    msg.setDestinationEntity(232U);
    msg.value = 0.198927209158;

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
    msg.setTimeStamp(0.869608221042);
    msg.setSource(40394U);
    msg.setSourceEntity(54U);
    msg.setDestination(42115U);
    msg.setDestinationEntity(195U);
    msg.value = 0.397916528783;

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
    msg.setTimeStamp(0.79452362622);
    msg.setSource(34467U);
    msg.setSourceEntity(117U);
    msg.setDestination(24662U);
    msg.setDestinationEntity(19U);
    msg.value = 0.728452690897;

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
    msg.setTimeStamp(0.178976251398);
    msg.setSource(35571U);
    msg.setSourceEntity(184U);
    msg.setDestination(59006U);
    msg.setDestinationEntity(201U);
    msg.value = 0.866870940688;

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
    msg.setTimeStamp(0.334886394682);
    msg.setSource(35454U);
    msg.setSourceEntity(153U);
    msg.setDestination(12313U);
    msg.setDestinationEntity(102U);
    msg.value = 0.681465027222;

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
    msg.setTimeStamp(0.00345523501973);
    msg.setSource(23779U);
    msg.setSourceEntity(46U);
    msg.setDestination(12359U);
    msg.setDestinationEntity(45U);
    msg.value = 0.96905504846;

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
    msg.setTimeStamp(0.6090592103);
    msg.setSource(25208U);
    msg.setSourceEntity(78U);
    msg.setDestination(13458U);
    msg.setDestinationEntity(119U);
    msg.value = 0.805310868514;

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
    msg.setTimeStamp(0.0834026318226);
    msg.setSource(41694U);
    msg.setSourceEntity(28U);
    msg.setDestination(36784U);
    msg.setDestinationEntity(50U);
    msg.value = 0.361403485809;

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
    msg.setTimeStamp(0.871331587862);
    msg.setSource(6766U);
    msg.setSourceEntity(213U);
    msg.setDestination(42952U);
    msg.setDestinationEntity(211U);
    msg.value = 0.883843282273;

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
    msg.setTimeStamp(0.512278203007);
    msg.setSource(54321U);
    msg.setSourceEntity(104U);
    msg.setDestination(24181U);
    msg.setDestinationEntity(226U);
    msg.validity = 55140U;
    msg.type = 1U;
    msg.tow = 2841076232U;
    msg.base_lat = 0.254666873371;
    msg.base_lon = 0.128041928583;
    msg.base_height = 0.506248832128;
    msg.n = 0.0974341022517;
    msg.e = 0.621299213408;
    msg.d = 0.253259290343;
    msg.v_n = 0.885690520787;
    msg.v_e = 0.474433141303;
    msg.v_d = 0.0665305613715;
    msg.satellites = 209U;
    msg.iar_hyp = 44316U;
    msg.iar_ratio = 0.229291723293;

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
    msg.setTimeStamp(0.631977060194);
    msg.setSource(17002U);
    msg.setSourceEntity(149U);
    msg.setDestination(16842U);
    msg.setDestinationEntity(61U);
    msg.validity = 60088U;
    msg.type = 2U;
    msg.tow = 281623075U;
    msg.base_lat = 0.740667896281;
    msg.base_lon = 0.127838507079;
    msg.base_height = 0.67183236485;
    msg.n = 0.966727575352;
    msg.e = 0.342548075379;
    msg.d = 0.719000903386;
    msg.v_n = 0.614106514084;
    msg.v_e = 0.352593926284;
    msg.v_d = 0.19213583541;
    msg.satellites = 62U;
    msg.iar_hyp = 32658U;
    msg.iar_ratio = 0.429491125151;

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
    msg.setTimeStamp(0.502164309706);
    msg.setSource(38381U);
    msg.setSourceEntity(185U);
    msg.setDestination(16388U);
    msg.setDestinationEntity(174U);
    msg.validity = 17746U;
    msg.type = 94U;
    msg.tow = 1089407102U;
    msg.base_lat = 0.886294802175;
    msg.base_lon = 0.277488108445;
    msg.base_height = 0.193456859671;
    msg.n = 0.887273839194;
    msg.e = 0.434010801339;
    msg.d = 0.572138354994;
    msg.v_n = 0.744819591674;
    msg.v_e = 0.5002586301;
    msg.v_d = 0.358880396788;
    msg.satellites = 220U;
    msg.iar_hyp = 16432U;
    msg.iar_ratio = 0.22031555381;

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
    msg.setTimeStamp(0.290569696996);
    msg.setSource(43000U);
    msg.setSourceEntity(120U);
    msg.setDestination(18099U);
    msg.setDestinationEntity(38U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.487046755385;
    tmp_msg_0.lon = 0.000189809209256;
    tmp_msg_0.height = 0.447755078681;
    tmp_msg_0.x = 0.434365406245;
    tmp_msg_0.y = 0.571214495343;
    tmp_msg_0.z = 0.645688512406;
    tmp_msg_0.phi = 0.321992242007;
    tmp_msg_0.theta = 0.0281873932981;
    tmp_msg_0.psi = 0.644094316875;
    tmp_msg_0.u = 0.443591662498;
    tmp_msg_0.v = 0.989526902897;
    tmp_msg_0.w = 0.478262381109;
    tmp_msg_0.vx = 0.87566465899;
    tmp_msg_0.vy = 0.540102919988;
    tmp_msg_0.vz = 0.661890854105;
    tmp_msg_0.p = 0.904198146212;
    tmp_msg_0.q = 0.0256446568018;
    tmp_msg_0.r = 0.934563780832;
    tmp_msg_0.depth = 0.92438532302;
    tmp_msg_0.alt = 0.462293511363;
    msg.state.set(tmp_msg_0);
    msg.type = 64U;

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
    msg.setTimeStamp(0.219115805451);
    msg.setSource(59017U);
    msg.setSourceEntity(14U);
    msg.setDestination(57743U);
    msg.setDestinationEntity(179U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.742555849538;
    tmp_msg_0.lon = 0.7496840333;
    tmp_msg_0.height = 0.621946973543;
    tmp_msg_0.x = 0.223995542184;
    tmp_msg_0.y = 0.718720229299;
    tmp_msg_0.z = 0.51210874893;
    tmp_msg_0.phi = 0.432673187845;
    tmp_msg_0.theta = 0.154583606442;
    tmp_msg_0.psi = 0.726750161987;
    tmp_msg_0.u = 0.673385018327;
    tmp_msg_0.v = 0.287721729596;
    tmp_msg_0.w = 0.651610587038;
    tmp_msg_0.vx = 0.697002153851;
    tmp_msg_0.vy = 0.441531958916;
    tmp_msg_0.vz = 0.0303697980994;
    tmp_msg_0.p = 0.588925504085;
    tmp_msg_0.q = 0.537452485495;
    tmp_msg_0.r = 0.974631048818;
    tmp_msg_0.depth = 0.060445754846;
    tmp_msg_0.alt = 0.735131377519;
    msg.state.set(tmp_msg_0);
    msg.type = 131U;

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
    msg.setTimeStamp(0.791060671423);
    msg.setSource(36974U);
    msg.setSourceEntity(91U);
    msg.setDestination(16897U);
    msg.setDestinationEntity(78U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.97485042211;
    tmp_msg_0.lon = 0.211571515691;
    tmp_msg_0.height = 0.473835850392;
    tmp_msg_0.x = 0.579325642607;
    tmp_msg_0.y = 0.0432092077611;
    tmp_msg_0.z = 0.829599887043;
    tmp_msg_0.phi = 0.353976314955;
    tmp_msg_0.theta = 0.780217963;
    tmp_msg_0.psi = 0.733913099218;
    tmp_msg_0.u = 0.377806023629;
    tmp_msg_0.v = 0.370824131619;
    tmp_msg_0.w = 0.891650910218;
    tmp_msg_0.vx = 0.363489117545;
    tmp_msg_0.vy = 0.654843995522;
    tmp_msg_0.vz = 0.246679071636;
    tmp_msg_0.p = 0.312735075582;
    tmp_msg_0.q = 0.465839559953;
    tmp_msg_0.r = 0.511671738554;
    tmp_msg_0.depth = 0.337942953426;
    tmp_msg_0.alt = 0.382312612769;
    msg.state.set(tmp_msg_0);
    msg.type = 108U;

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
    msg.setTimeStamp(0.905957459451);
    msg.setSource(38438U);
    msg.setSourceEntity(11U);
    msg.setDestination(14572U);
    msg.setDestinationEntity(99U);
    msg.value = 0.735254064104;

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
    msg.setTimeStamp(0.613917987708);
    msg.setSource(39010U);
    msg.setSourceEntity(224U);
    msg.setDestination(11498U);
    msg.setDestinationEntity(89U);
    msg.value = 0.714933247622;

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
    msg.setTimeStamp(0.709411098601);
    msg.setSource(55106U);
    msg.setSourceEntity(62U);
    msg.setDestination(42354U);
    msg.setDestinationEntity(155U);
    msg.value = 0.425683620101;

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
    msg.setTimeStamp(0.765158157322);
    msg.setSource(45838U);
    msg.setSourceEntity(204U);
    msg.setDestination(56549U);
    msg.setDestinationEntity(153U);
    msg.value = 0.0933805775011;

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
    msg.setTimeStamp(0.380245510245);
    msg.setSource(59359U);
    msg.setSourceEntity(16U);
    msg.setDestination(45277U);
    msg.setDestinationEntity(168U);
    msg.value = 0.578052947331;

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
    msg.setTimeStamp(0.490528876649);
    msg.setSource(23500U);
    msg.setSourceEntity(159U);
    msg.setDestination(12455U);
    msg.setDestinationEntity(179U);
    msg.value = 0.172792767658;

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
    msg.setTimeStamp(0.352675975837);
    msg.setSource(6482U);
    msg.setSourceEntity(34U);
    msg.setDestination(26439U);
    msg.setDestinationEntity(56U);
    msg.value = 0.675559973493;

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
    msg.setTimeStamp(0.696778092703);
    msg.setSource(39109U);
    msg.setSourceEntity(174U);
    msg.setDestination(48604U);
    msg.setDestinationEntity(194U);
    msg.value = 0.554440960571;

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
    msg.setTimeStamp(0.189943090674);
    msg.setSource(23610U);
    msg.setSourceEntity(34U);
    msg.setDestination(32828U);
    msg.setDestinationEntity(193U);
    msg.value = 0.521060762449;

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
    msg.setTimeStamp(0.208446249602);
    msg.setSource(15526U);
    msg.setSourceEntity(173U);
    msg.setDestination(12737U);
    msg.setDestinationEntity(2U);
    msg.value = 0.59082568545;

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
    msg.setTimeStamp(0.970428041344);
    msg.setSource(4246U);
    msg.setSourceEntity(43U);
    msg.setDestination(32541U);
    msg.setDestinationEntity(86U);
    msg.value = 0.0791423080812;

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
    msg.setTimeStamp(0.505294509104);
    msg.setSource(14113U);
    msg.setSourceEntity(70U);
    msg.setDestination(43875U);
    msg.setDestinationEntity(35U);
    msg.value = 0.686268954685;

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
    msg.setTimeStamp(0.993612202576);
    msg.setSource(8265U);
    msg.setSourceEntity(125U);
    msg.setDestination(48747U);
    msg.setDestinationEntity(62U);
    msg.value = 0.471759568985;

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
    msg.setTimeStamp(0.959955767452);
    msg.setSource(60458U);
    msg.setSourceEntity(209U);
    msg.setDestination(26910U);
    msg.setDestinationEntity(35U);
    msg.value = 0.741771249838;

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
    msg.setTimeStamp(0.54297396105);
    msg.setSource(27418U);
    msg.setSourceEntity(62U);
    msg.setDestination(49946U);
    msg.setDestinationEntity(145U);
    msg.value = 0.423669593315;

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
    msg.setTimeStamp(0.0734324062221);
    msg.setSource(38187U);
    msg.setSourceEntity(144U);
    msg.setDestination(11211U);
    msg.setDestinationEntity(207U);
    msg.id = 133U;
    msg.zoom = 153U;
    msg.action = 107U;

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
    msg.setTimeStamp(0.996600510585);
    msg.setSource(11706U);
    msg.setSourceEntity(76U);
    msg.setDestination(62742U);
    msg.setDestinationEntity(0U);
    msg.id = 227U;
    msg.zoom = 47U;
    msg.action = 82U;

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
    msg.setTimeStamp(0.91395554566);
    msg.setSource(26426U);
    msg.setSourceEntity(76U);
    msg.setDestination(16569U);
    msg.setDestinationEntity(36U);
    msg.id = 190U;
    msg.zoom = 51U;
    msg.action = 89U;

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
    msg.setTimeStamp(0.32229909644);
    msg.setSource(16482U);
    msg.setSourceEntity(245U);
    msg.setDestination(17014U);
    msg.setDestinationEntity(60U);
    msg.id = 173U;
    msg.value = 0.12030759229;

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
    msg.setTimeStamp(0.811242884209);
    msg.setSource(54472U);
    msg.setSourceEntity(228U);
    msg.setDestination(57220U);
    msg.setDestinationEntity(179U);
    msg.id = 249U;
    msg.value = 0.036200630207;

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
    msg.setTimeStamp(0.230579874094);
    msg.setSource(43049U);
    msg.setSourceEntity(185U);
    msg.setDestination(3266U);
    msg.setDestinationEntity(125U);
    msg.id = 48U;
    msg.value = 0.154484471659;

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
    msg.setTimeStamp(0.00735182516801);
    msg.setSource(4000U);
    msg.setSourceEntity(85U);
    msg.setDestination(8436U);
    msg.setDestinationEntity(19U);
    msg.id = 35U;
    msg.value = 0.490516216476;

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
    msg.setTimeStamp(0.982861398035);
    msg.setSource(40664U);
    msg.setSourceEntity(52U);
    msg.setDestination(7763U);
    msg.setDestinationEntity(225U);
    msg.id = 81U;
    msg.value = 0.178096168287;

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
    msg.setTimeStamp(0.963174069053);
    msg.setSource(62535U);
    msg.setSourceEntity(27U);
    msg.setDestination(58708U);
    msg.setDestinationEntity(22U);
    msg.id = 216U;
    msg.value = 0.529521073105;

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
    msg.setTimeStamp(0.294772868843);
    msg.setSource(51380U);
    msg.setSourceEntity(1U);
    msg.setDestination(60608U);
    msg.setDestinationEntity(13U);
    msg.id = 236U;
    msg.angle = 0.885428754242;

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
    msg.setTimeStamp(0.169384062485);
    msg.setSource(27408U);
    msg.setSourceEntity(253U);
    msg.setDestination(30311U);
    msg.setDestinationEntity(1U);
    msg.id = 207U;
    msg.angle = 0.510363279787;

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
    msg.setTimeStamp(0.467932672502);
    msg.setSource(58572U);
    msg.setSourceEntity(215U);
    msg.setDestination(56530U);
    msg.setDestinationEntity(54U);
    msg.id = 188U;
    msg.angle = 0.862933871653;

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
    msg.setTimeStamp(0.638897147344);
    msg.setSource(45912U);
    msg.setSourceEntity(250U);
    msg.setDestination(53177U);
    msg.setDestinationEntity(113U);
    msg.op = 162U;
    msg.actions.assign("FEVIEINTTSZFLDWJZSEGSQBKXLRGIFYQQUANMABTKJHZQUXJVG");

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
    msg.setTimeStamp(0.285876901408);
    msg.setSource(65510U);
    msg.setSourceEntity(142U);
    msg.setDestination(28806U);
    msg.setDestinationEntity(181U);
    msg.op = 61U;
    msg.actions.assign("RSGCKOLUTMDMRPXFILSUTWVBPUJBQDDDKSSWSSIOSWVSDBYVEJAKCACJJPMQCNVQHXFVMTONXVXLMDJYFYIULZQQGHVLIUKQPKVIKOBEDANFMVXCEEQYCR");

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
    msg.setTimeStamp(0.319886952595);
    msg.setSource(30813U);
    msg.setSourceEntity(77U);
    msg.setDestination(22079U);
    msg.setDestinationEntity(6U);
    msg.op = 159U;
    msg.actions.assign("IIEHUMVMRIAGFPWJEHPLQOZZQNTKTOYOPKEWQWDZVBMCSKFVHDWVTIRIOTUZBBDBYQRUYRJEIEHRRCSZMXLPCXIBSRUJWFKOGNHAWFJWTBNURVZOL");

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
    msg.setTimeStamp(0.453613795307);
    msg.setSource(4368U);
    msg.setSourceEntity(13U);
    msg.setDestination(35705U);
    msg.setDestinationEntity(207U);
    msg.actions.assign("TULZNOCQHYTWZPIDLZWNSINZPVQBSORAIUYLIAKMCPNNKDMKLECKZQXJQABLMPYXMNDRVRHDAVUDXFMTRFWQAFJSUVKWALEMLDOOJAVGYTRENBFQYLGGMEBVXSHUXJJLEBDUBVWDVMRORQPPEKVSRCCOCXCIIWWFZICFGNXZBKJTNOHOTGDYRJTNAIUSQ");

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
    msg.setTimeStamp(0.434257854915);
    msg.setSource(24492U);
    msg.setSourceEntity(44U);
    msg.setDestination(34279U);
    msg.setDestinationEntity(225U);
    msg.actions.assign("YFDWACRSGOUKRQEXYVJMDDJANUDKPGFCVXKUDTUXKIDPWHNBFPEQRJHFRCEWEFOHMBRHNAGDSPGMTIRILONSIUJNWYXTTIWOOLBJIEKMYSMFZTJSQYBGPDTWVAVJRPFOYBSFXUZJVBXENYSKOLPPKDHQNYOHJMUPNBZSTZIFMCVHFZALVEWKGQLUAALKEENSBXTQGWSVWAZKACZLBQUXUL");

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
    msg.setTimeStamp(0.71280719111);
    msg.setSource(17169U);
    msg.setSourceEntity(202U);
    msg.setDestination(21564U);
    msg.setDestinationEntity(228U);
    msg.actions.assign("NMLIEASLNPUXPEBCSIPZDPTDIRRWGHRTESQRMVUCKBAZEHCPWWHKXGBGZRRGOKCPWQDRBJOHFTZKJJYXTYZKZPNZEBITTFYUYOUMVQAONQGVOOMJFOALEJMJOWCYJLAXDXVESUMNYTCLGIHUDMQQLXVULNYNYKNGIVD");

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
    msg.setTimeStamp(0.143974313514);
    msg.setSource(47106U);
    msg.setSourceEntity(51U);
    msg.setDestination(8914U);
    msg.setDestinationEntity(52U);
    msg.button = 54U;
    msg.value = 131U;

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
    msg.setTimeStamp(0.761138395158);
    msg.setSource(42352U);
    msg.setSourceEntity(100U);
    msg.setDestination(14317U);
    msg.setDestinationEntity(174U);
    msg.button = 3U;
    msg.value = 219U;

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
    msg.setTimeStamp(0.372230874429);
    msg.setSource(32984U);
    msg.setSourceEntity(103U);
    msg.setDestination(44829U);
    msg.setDestinationEntity(66U);
    msg.button = 148U;
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
    msg.setTimeStamp(0.185009386047);
    msg.setSource(62956U);
    msg.setSourceEntity(229U);
    msg.setDestination(15068U);
    msg.setDestinationEntity(17U);
    msg.op = 13U;
    msg.text.assign("CXWHCJXREARECJWBLOHWLDKNJKVCNLQEYFILPTJXWUX");

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
    msg.setTimeStamp(0.61445824667);
    msg.setSource(1241U);
    msg.setSourceEntity(106U);
    msg.setDestination(1861U);
    msg.setDestinationEntity(99U);
    msg.op = 213U;
    msg.text.assign("FRISAWTFVNTVLEKTMAQRCBLTVPVNTLPDHZHDWGFQXHWZZZXGMGHLXCCJNUNSJ");

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
    msg.setTimeStamp(0.832981756331);
    msg.setSource(40037U);
    msg.setSourceEntity(181U);
    msg.setDestination(29737U);
    msg.setDestinationEntity(11U);
    msg.op = 242U;
    msg.text.assign("HDLDDDHHYCDJAXJIRNCFXEEZRTYWTJCEKIEYQTLUIWLFDRBBXVNGJVGPMXJDOSFZCBCZUYDGBUKVSTWBESMGBQBPQPQFYBPUAPLGTLNGQAQKKTROCNGINKRPIYLEWMOOYFURHSZHILGXURJUOQUZAZOXGSCMXRNQHIFOVSJMZGMVCOMNQAAUDHFPIPFHLEVWZYJWPEWYOKTDIVWNAYVBEAQRTJLMJIFARSXZ");

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
    msg.setTimeStamp(0.950798011689);
    msg.setSource(65533U);
    msg.setSourceEntity(134U);
    msg.setDestination(46832U);
    msg.setDestinationEntity(182U);
    msg.op = 187U;
    msg.time_remain = 0.61980082245;
    msg.sched_time = 0.871665522079;

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
    msg.setTimeStamp(0.836298479745);
    msg.setSource(49616U);
    msg.setSourceEntity(185U);
    msg.setDestination(26518U);
    msg.setDestinationEntity(251U);
    msg.op = 85U;
    msg.time_remain = 0.802401077838;
    msg.sched_time = 0.290336758712;

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
    msg.setTimeStamp(0.811048491029);
    msg.setSource(35912U);
    msg.setSourceEntity(48U);
    msg.setDestination(37460U);
    msg.setDestinationEntity(243U);
    msg.op = 60U;
    msg.time_remain = 0.965994785143;
    msg.sched_time = 0.628742114983;

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
    msg.setTimeStamp(0.338552482355);
    msg.setSource(37755U);
    msg.setSourceEntity(125U);
    msg.setDestination(54417U);
    msg.setDestinationEntity(120U);
    msg.name.assign("NIQLJBXFCNDAKXMRZZMMBMUTQEAFKWHRFSYSJYCQQ");
    msg.op = 94U;
    msg.sched_time = 0.0171015592755;

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
    msg.setTimeStamp(0.0764361576831);
    msg.setSource(60390U);
    msg.setSourceEntity(22U);
    msg.setDestination(60258U);
    msg.setDestinationEntity(178U);
    msg.name.assign("TYFASQLKUGTEWGOSBJJBTJJPOPZAOMIRNTHWKYPMQSRAQWSBQRJFLYGKTXDYFDEEHDSEOJBSCELUNSNYKQDZNMMVVLLXEBXBLSVXCGRZKCNVMQHMNNGAXTRLYXMZHHCVIOF");
    msg.op = 218U;
    msg.sched_time = 0.211345835086;

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
    msg.setTimeStamp(0.0673481054171);
    msg.setSource(4276U);
    msg.setSourceEntity(168U);
    msg.setDestination(21283U);
    msg.setDestinationEntity(253U);
    msg.name.assign("LBIRHHOEDHMMYORAPDRNGWXZUUYAWIKVXBCRUHFJKARQCBAVGQOFVWJEOYLTWBCYIMZNWICJMAVJJAXINFKBQVIGDMNMZDNTIXDGFLFWWLUKQUXEPQWNSMOGZFEENBKBCZLLXLIZQKYFEZEJSZPBROTPHRVWFNQIFAELKVXOAITA");
    msg.op = 154U;
    msg.sched_time = 0.784932473917;

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
    msg.setTimeStamp(0.790397513599);
    msg.setSource(29517U);
    msg.setSourceEntity(164U);
    msg.setDestination(50635U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.772889104203);
    msg.setSource(21172U);
    msg.setSourceEntity(94U);
    msg.setDestination(25582U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.100819900086);
    msg.setSource(15536U);
    msg.setSourceEntity(25U);
    msg.setDestination(38919U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.479688322338);
    msg.setSource(55350U);
    msg.setSourceEntity(133U);
    msg.setDestination(40368U);
    msg.setDestinationEntity(247U);
    msg.name.assign("FAKTUADIOIPOMSOSEMRVJVWKTAKJZCBDJQKGRHLHTKPCMIMOXTUEIHJMTIAVOGYUBFIFVTGWY");
    msg.state = 212U;

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
    msg.setTimeStamp(0.861699747365);
    msg.setSource(21562U);
    msg.setSourceEntity(55U);
    msg.setDestination(10122U);
    msg.setDestinationEntity(23U);
    msg.name.assign("VWWUNOJPOIVXEYHVTDQOOLTMESPCZIQKMGIOMCEGVNNPSHXKAVSULXRCEFAGPIBTMBCHUOR");
    msg.state = 20U;

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
    msg.setTimeStamp(0.225216514492);
    msg.setSource(63276U);
    msg.setSourceEntity(83U);
    msg.setDestination(27078U);
    msg.setDestinationEntity(22U);
    msg.name.assign("PAGRLZCTOWONFKCVJGIABUHWNEWUVDAIKGUKAAJEMANICXO");
    msg.state = 137U;

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
    msg.setTimeStamp(0.905167637736);
    msg.setSource(62340U);
    msg.setSourceEntity(227U);
    msg.setDestination(61997U);
    msg.setDestinationEntity(27U);
    msg.name.assign("UQUTLNJXEXJHCXZIEFBAIINEEWPUWZQHBAVLAFGEEIVLRNPKVLTXXVZVGLDQRPFQSSBOCMMX");
    msg.value = 67U;

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
    msg.setTimeStamp(0.0464037047083);
    msg.setSource(31696U);
    msg.setSourceEntity(115U);
    msg.setDestination(38848U);
    msg.setDestinationEntity(37U);
    msg.name.assign("HMHYFEELGSXTLZAFDRNKPYVPVBRLWEMKBDYGYHSNZJCHULWECUUVKLXFYJOWCTVQPQQQIJCVMCYIVRNTQFQWHVLXCTZJHZOVGMAVMDXPIJXEKYXOPBQRNBFBPPCXOP");
    msg.value = 116U;

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
    msg.setTimeStamp(0.398276520031);
    msg.setSource(42068U);
    msg.setSourceEntity(225U);
    msg.setDestination(59771U);
    msg.setDestinationEntity(153U);
    msg.name.assign("XEECFQBWBAQJSMOHEJESZCGHELMPHCVLUKCQWDLYDTVOXRJNDKWGPKRCUIYOBGVNPSIQCLATZLWMNUPRZLOYHBTWLWZKPPGXAETPRSQJMHXSSTMJAARXIWBZFWEICGZDPKOOVDEOPDXNJYQGBFCTDAGANBAJTKXVIIXBFXHMIKOVIFARNLQZHOHDMMZKWYUZMYGXRKKAFVDQHTFVVDNZRUCYUYFBHLJQNGFVSRJLYWTONUTCUYRIESM");
    msg.value = 40U;

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
    msg.setTimeStamp(0.254211551763);
    msg.setSource(19642U);
    msg.setSourceEntity(144U);
    msg.setDestination(27511U);
    msg.setDestinationEntity(226U);
    msg.name.assign("TYICURAPXRAVWKMXEZGCEQELZRGGSWNWWNRUUCBFPENQVCZIWSKHGNQUBTDOIQVISPSLGXBTXXSLHVLPMZEKYSPNRITMBPIRWOXMIALLXOMAOODHZGHFBJWUCXENJJOJMOHYZVSYKDFATKBVMDLAQOKIYPQ");

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
    msg.setTimeStamp(0.096145515999);
    msg.setSource(21156U);
    msg.setSourceEntity(30U);
    msg.setDestination(11050U);
    msg.setDestinationEntity(223U);
    msg.name.assign("CPKQGJGGDEBPWNSYKMYMROCWVLEUUWQTTREVVUONALOUQCMMSPNCPTFEFTKVCRPEKTBSRGLAZAPASDOFWIFTNXJBWXDFXDYYCLDWZSWCHAZVWZNJAZQJJEEMNILJJYOJYYRKQMUBWRECMHXDPZRPDHUHFMUPZHGMLSTFKIAHUTGZB");

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
    msg.setTimeStamp(0.962503311207);
    msg.setSource(26347U);
    msg.setSourceEntity(170U);
    msg.setDestination(17702U);
    msg.setDestinationEntity(110U);
    msg.name.assign("HZHVBJANWJLGJLCPIELQASORMSMUCOQUWPKCYDTIGSPGQVVCTFVNSFVTBPJTWDUKDFXCSPULRCFZVGMDSOAIFKL");

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
    msg.setTimeStamp(0.648673479995);
    msg.setSource(28575U);
    msg.setSourceEntity(140U);
    msg.setDestination(32571U);
    msg.setDestinationEntity(30U);
    msg.name.assign("JZWKFBIHFTKHRWHZVMBDNAWPUQRCFOZGBXXOZPHRFCQCDPTMNTXVIXFPPOKAVQSGBERIVGUYTAFQZOWFRWJAMIUDTFCVOPWIRFUPNYVKWMSZFYWEAHQUYKSSCNNK");
    msg.value = 188U;

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
    msg.setTimeStamp(0.758457503958);
    msg.setSource(63339U);
    msg.setSourceEntity(250U);
    msg.setDestination(35283U);
    msg.setDestinationEntity(72U);
    msg.name.assign("LKDYSIUFEUOXZMZ");
    msg.value = 181U;

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
    msg.setTimeStamp(0.191267292441);
    msg.setSource(11153U);
    msg.setSourceEntity(173U);
    msg.setDestination(25921U);
    msg.setDestinationEntity(166U);
    msg.name.assign("OBABLVCAKPJFZEFYBRZZNGKLROPOPAGRNDKLAYNNUUDAUGMMHDEIUSACYVIDRVYYEZXCXWHMTFFKWSJDISJOLWIJTAWUNOZFPVLPXZNUPUDPMBWYXYWQZHCYWXGHVEMECHNEZQLVHXMKQMIFJGGDHKQUCJRBPGSAJVSSTRTESFJKQFVGXLMAMQUSEIKNBWSBEJVLTBP");
    msg.value = 243U;

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
    msg.setTimeStamp(0.845837014134);
    msg.setSource(9142U);
    msg.setSourceEntity(28U);
    msg.setDestination(23219U);
    msg.setDestinationEntity(101U);
    msg.id = 235U;
    msg.period = 8502119U;
    msg.duty_cycle = 3433702081U;

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
    msg.setTimeStamp(0.521238983287);
    msg.setSource(33460U);
    msg.setSourceEntity(3U);
    msg.setDestination(14499U);
    msg.setDestinationEntity(207U);
    msg.id = 46U;
    msg.period = 3001022111U;
    msg.duty_cycle = 2674984309U;

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
    msg.setTimeStamp(0.23770466184);
    msg.setSource(56504U);
    msg.setSourceEntity(136U);
    msg.setDestination(18583U);
    msg.setDestinationEntity(240U);
    msg.id = 134U;
    msg.period = 2640991941U;
    msg.duty_cycle = 2077644809U;

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
    msg.setTimeStamp(0.858849986618);
    msg.setSource(41765U);
    msg.setSourceEntity(63U);
    msg.setDestination(55547U);
    msg.setDestinationEntity(114U);
    msg.id = 160U;
    msg.period = 1470018925U;
    msg.duty_cycle = 3599379502U;

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
    msg.setTimeStamp(0.403711244408);
    msg.setSource(14634U);
    msg.setSourceEntity(28U);
    msg.setDestination(55434U);
    msg.setDestinationEntity(137U);
    msg.id = 183U;
    msg.period = 480294727U;
    msg.duty_cycle = 3469197336U;

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
    msg.setTimeStamp(0.340236154353);
    msg.setSource(42792U);
    msg.setSourceEntity(82U);
    msg.setDestination(64571U);
    msg.setDestinationEntity(97U);
    msg.id = 203U;
    msg.period = 4084557377U;
    msg.duty_cycle = 2652566802U;

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
    msg.setTimeStamp(0.119490157841);
    msg.setSource(22882U);
    msg.setSourceEntity(14U);
    msg.setDestination(55592U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.120896556069;
    msg.lon = 0.534346275202;
    msg.height = 0.0200141940038;
    msg.x = 0.883215133487;
    msg.y = 0.898260534407;
    msg.z = 0.736809061484;
    msg.phi = 0.0966603260967;
    msg.theta = 0.183628727603;
    msg.psi = 0.881678883366;
    msg.u = 0.771669867047;
    msg.v = 0.96405023314;
    msg.w = 0.992364400124;
    msg.vx = 0.912445763789;
    msg.vy = 0.586504573435;
    msg.vz = 0.492153882208;
    msg.p = 0.36417643157;
    msg.q = 0.311502397452;
    msg.r = 0.631324992699;
    msg.depth = 0.108960945907;
    msg.alt = 0.909973512606;

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
    msg.setTimeStamp(0.541115402243);
    msg.setSource(62032U);
    msg.setSourceEntity(59U);
    msg.setDestination(8838U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.881492833782;
    msg.lon = 0.947701537559;
    msg.height = 0.376518386856;
    msg.x = 0.99274358797;
    msg.y = 0.0529748264423;
    msg.z = 0.425672640697;
    msg.phi = 0.0812389517182;
    msg.theta = 0.955313517442;
    msg.psi = 0.925348217751;
    msg.u = 0.99281881202;
    msg.v = 0.371240361614;
    msg.w = 0.65696179063;
    msg.vx = 0.306880261542;
    msg.vy = 0.333501206807;
    msg.vz = 0.779706179557;
    msg.p = 0.516915919667;
    msg.q = 0.661449239461;
    msg.r = 0.110514923949;
    msg.depth = 0.54796787637;
    msg.alt = 0.752065261757;

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
    msg.setTimeStamp(0.628383645991);
    msg.setSource(5371U);
    msg.setSourceEntity(151U);
    msg.setDestination(39302U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.0948485510347;
    msg.lon = 0.0182070823812;
    msg.height = 0.80167416924;
    msg.x = 0.363160399779;
    msg.y = 0.871440490145;
    msg.z = 0.367921726624;
    msg.phi = 0.261430948706;
    msg.theta = 0.01492117734;
    msg.psi = 0.039742433014;
    msg.u = 0.243960400723;
    msg.v = 0.723176108012;
    msg.w = 0.00676381204252;
    msg.vx = 0.3115456768;
    msg.vy = 0.696654115087;
    msg.vz = 0.316374718131;
    msg.p = 0.138822649691;
    msg.q = 0.414504024434;
    msg.r = 0.440981772061;
    msg.depth = 0.748900745189;
    msg.alt = 0.778167161622;

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
    msg.setTimeStamp(0.345476153208);
    msg.setSource(7683U);
    msg.setSourceEntity(42U);
    msg.setDestination(39667U);
    msg.setDestinationEntity(223U);
    msg.x = 0.62119085046;
    msg.y = 0.843019401382;
    msg.z = 0.673899619408;

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
    msg.setTimeStamp(0.694946325103);
    msg.setSource(57335U);
    msg.setSourceEntity(79U);
    msg.setDestination(64032U);
    msg.setDestinationEntity(62U);
    msg.x = 0.828710969068;
    msg.y = 0.8153208528;
    msg.z = 0.865511028379;

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
    msg.setTimeStamp(0.052212691408);
    msg.setSource(26494U);
    msg.setSourceEntity(151U);
    msg.setDestination(28531U);
    msg.setDestinationEntity(218U);
    msg.x = 0.329823556378;
    msg.y = 0.358270545119;
    msg.z = 0.401482429715;

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
    msg.setTimeStamp(0.705836513331);
    msg.setSource(10667U);
    msg.setSourceEntity(188U);
    msg.setDestination(30150U);
    msg.setDestinationEntity(131U);
    msg.value = 0.0768753995209;

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
    msg.setTimeStamp(0.148285247966);
    msg.setSource(58358U);
    msg.setSourceEntity(90U);
    msg.setDestination(49722U);
    msg.setDestinationEntity(8U);
    msg.value = 0.557463135945;

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
    msg.setTimeStamp(0.0155161842699);
    msg.setSource(10867U);
    msg.setSourceEntity(65U);
    msg.setDestination(16169U);
    msg.setDestinationEntity(186U);
    msg.value = 0.457676140653;

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
    msg.setTimeStamp(0.406704009694);
    msg.setSource(6972U);
    msg.setSourceEntity(23U);
    msg.setDestination(11238U);
    msg.setDestinationEntity(116U);
    msg.value = 0.45374065898;

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
    msg.setTimeStamp(0.255329910829);
    msg.setSource(3257U);
    msg.setSourceEntity(250U);
    msg.setDestination(20610U);
    msg.setDestinationEntity(176U);
    msg.value = 0.601226224498;

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
    msg.setTimeStamp(0.51771140108);
    msg.setSource(48091U);
    msg.setSourceEntity(220U);
    msg.setDestination(5867U);
    msg.setDestinationEntity(180U);
    msg.value = 0.761372654098;

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
    msg.setTimeStamp(0.382820538026);
    msg.setSource(52885U);
    msg.setSourceEntity(231U);
    msg.setDestination(48088U);
    msg.setDestinationEntity(177U);
    msg.x = 0.443108739756;
    msg.y = 0.366170646225;
    msg.z = 0.178015616398;
    msg.phi = 0.748299004649;
    msg.theta = 0.446751611734;
    msg.psi = 0.977920914566;
    msg.p = 0.286087909444;
    msg.q = 0.735816371065;
    msg.r = 0.934211271744;
    msg.u = 0.909553117681;
    msg.v = 0.00633726736449;
    msg.w = 0.0686046990116;
    msg.bias_psi = 0.0550223169349;
    msg.bias_r = 0.25408197736;

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
    msg.setTimeStamp(0.307404312437);
    msg.setSource(55818U);
    msg.setSourceEntity(193U);
    msg.setDestination(22873U);
    msg.setDestinationEntity(144U);
    msg.x = 0.904543476896;
    msg.y = 0.62546791595;
    msg.z = 0.600894756989;
    msg.phi = 0.741388077628;
    msg.theta = 0.286985281875;
    msg.psi = 0.673512353779;
    msg.p = 0.963102404269;
    msg.q = 0.841843705621;
    msg.r = 0.846103847593;
    msg.u = 0.535565968184;
    msg.v = 0.315829647228;
    msg.w = 0.678105523842;
    msg.bias_psi = 0.264405263325;
    msg.bias_r = 0.208304324819;

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
    msg.setTimeStamp(0.883456834178);
    msg.setSource(24723U);
    msg.setSourceEntity(61U);
    msg.setDestination(50991U);
    msg.setDestinationEntity(127U);
    msg.x = 0.501375267492;
    msg.y = 0.368050214743;
    msg.z = 0.280709629856;
    msg.phi = 0.955744870819;
    msg.theta = 0.394742045928;
    msg.psi = 0.995171908027;
    msg.p = 0.634040188244;
    msg.q = 0.989507753327;
    msg.r = 0.897212660194;
    msg.u = 0.888123719156;
    msg.v = 0.0674995018557;
    msg.w = 0.188748685058;
    msg.bias_psi = 0.323895521311;
    msg.bias_r = 0.675314506005;

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
    msg.setTimeStamp(0.829373473736);
    msg.setSource(52091U);
    msg.setSourceEntity(68U);
    msg.setDestination(5515U);
    msg.setDestinationEntity(218U);
    msg.bias_psi = 0.30271314642;
    msg.bias_r = 0.0712568170682;
    msg.cog = 0.255888240705;
    msg.cyaw = 0.101270973326;
    msg.lbl_rej_level = 0.20261752324;
    msg.gps_rej_level = 0.672718725341;
    msg.custom_x = 0.781883064968;
    msg.custom_y = 0.257989889373;
    msg.custom_z = 0.574808765212;

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
    msg.setTimeStamp(0.0658665309059);
    msg.setSource(17879U);
    msg.setSourceEntity(157U);
    msg.setDestination(21825U);
    msg.setDestinationEntity(218U);
    msg.bias_psi = 0.360240914288;
    msg.bias_r = 0.985658596451;
    msg.cog = 0.540267218858;
    msg.cyaw = 0.663905828087;
    msg.lbl_rej_level = 0.288688591456;
    msg.gps_rej_level = 0.816997962005;
    msg.custom_x = 0.49175887544;
    msg.custom_y = 0.109366030562;
    msg.custom_z = 0.800491177285;

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
    msg.setTimeStamp(0.481492060145);
    msg.setSource(23718U);
    msg.setSourceEntity(160U);
    msg.setDestination(11958U);
    msg.setDestinationEntity(150U);
    msg.bias_psi = 0.784724987537;
    msg.bias_r = 0.37269883122;
    msg.cog = 0.0321247938237;
    msg.cyaw = 0.329073276608;
    msg.lbl_rej_level = 0.578967802112;
    msg.gps_rej_level = 0.234734277251;
    msg.custom_x = 0.421207011355;
    msg.custom_y = 0.286610782656;
    msg.custom_z = 0.0494947748421;

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
    msg.setTimeStamp(0.436907184889);
    msg.setSource(24688U);
    msg.setSourceEntity(180U);
    msg.setDestination(48639U);
    msg.setDestinationEntity(81U);
    msg.utc_time = 0.933785710801;
    msg.reason = 121U;

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
    msg.setTimeStamp(0.215098204639);
    msg.setSource(2939U);
    msg.setSourceEntity(181U);
    msg.setDestination(23531U);
    msg.setDestinationEntity(83U);
    msg.utc_time = 0.827316347841;
    msg.reason = 45U;

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
    msg.setTimeStamp(0.590261307159);
    msg.setSource(55540U);
    msg.setSourceEntity(94U);
    msg.setDestination(60590U);
    msg.setDestinationEntity(174U);
    msg.utc_time = 0.89152832258;
    msg.reason = 86U;

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
    msg.setTimeStamp(0.207858092787);
    msg.setSource(65083U);
    msg.setSourceEntity(73U);
    msg.setDestination(26856U);
    msg.setDestinationEntity(132U);
    msg.id = 74U;
    msg.range = 0.866628221351;
    msg.acceptance = 103U;

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
    msg.setTimeStamp(0.708815198549);
    msg.setSource(47958U);
    msg.setSourceEntity(198U);
    msg.setDestination(26005U);
    msg.setDestinationEntity(0U);
    msg.id = 222U;
    msg.range = 0.249319898784;
    msg.acceptance = 236U;

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
    msg.setTimeStamp(0.857016763448);
    msg.setSource(62818U);
    msg.setSourceEntity(102U);
    msg.setDestination(30652U);
    msg.setDestinationEntity(14U);
    msg.id = 108U;
    msg.range = 0.811929396964;
    msg.acceptance = 245U;

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
    msg.setTimeStamp(0.418268235449);
    msg.setSource(9106U);
    msg.setSourceEntity(103U);
    msg.setDestination(34940U);
    msg.setDestinationEntity(152U);
    msg.type = 120U;
    msg.reason = 202U;
    msg.value = 0.42334450605;
    msg.timestep = 0.277160381674;

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
    msg.setTimeStamp(0.0797808641951);
    msg.setSource(33986U);
    msg.setSourceEntity(194U);
    msg.setDestination(22916U);
    msg.setDestinationEntity(216U);
    msg.type = 72U;
    msg.reason = 38U;
    msg.value = 0.890054998238;
    msg.timestep = 0.658552647874;

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
    msg.setTimeStamp(0.250158467335);
    msg.setSource(61712U);
    msg.setSourceEntity(69U);
    msg.setDestination(44074U);
    msg.setDestinationEntity(238U);
    msg.type = 231U;
    msg.reason = 154U;
    msg.value = 0.808998456701;
    msg.timestep = 0.0912139096171;

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
    msg.setTimeStamp(0.396014150806);
    msg.setSource(13801U);
    msg.setSourceEntity(230U);
    msg.setDestination(20103U);
    msg.setDestinationEntity(91U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DXKWQEZQSBEOUBYGLBCMQDXHYEHAAEPUBGQIVNNDHVPPALEBOGEKFOZZPJAETZNFDIMMGZGKLTSVPJZYTXMQCTDLWLMILVRHXCFWANZLOUYCJTICFBQSWUNFRORKSFHRFGKDXUDTBQYACFMRVQPRHYKAFMLQGBAJSJYUIJRAWNWZJF");
    tmp_msg_0.lat = 0.0883765523345;
    tmp_msg_0.lon = 0.645212961634;
    tmp_msg_0.depth = 0.718433447343;
    tmp_msg_0.query_channel = 111U;
    tmp_msg_0.reply_channel = 215U;
    tmp_msg_0.transponder_delay = 54U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.00814196187385;
    msg.y = 0.174965515919;
    msg.var_x = 0.859853003894;
    msg.var_y = 0.423778027028;
    msg.distance = 0.413064113082;

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
    msg.setTimeStamp(0.87730757586);
    msg.setSource(16343U);
    msg.setSourceEntity(210U);
    msg.setDestination(21806U);
    msg.setDestinationEntity(181U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RSFTJACMXXVQWDSDZTPCLSXFGYDBTENZAQFEIOCMWXHZYPGOEJFFVKMAZDLJLQKTPZVIRVWCHMKFZHNVNXDMKWTOFUKOVIXUOULGTQWKYDDWWEYUADWWDXBMYLSTETEYCSQIHI");
    tmp_msg_0.lat = 0.469554767641;
    tmp_msg_0.lon = 0.738389061491;
    tmp_msg_0.depth = 0.428549345216;
    tmp_msg_0.query_channel = 239U;
    tmp_msg_0.reply_channel = 86U;
    tmp_msg_0.transponder_delay = 253U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.376263856727;
    msg.y = 0.679529673229;
    msg.var_x = 0.21891243819;
    msg.var_y = 0.0498132295109;
    msg.distance = 0.928314055917;

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
    msg.setTimeStamp(0.947224005841);
    msg.setSource(35001U);
    msg.setSourceEntity(15U);
    msg.setDestination(44072U);
    msg.setDestinationEntity(5U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SBNSIZTCKKGEHFNCUOKMTW");
    tmp_msg_0.lat = 0.646623795704;
    tmp_msg_0.lon = 0.602114822531;
    tmp_msg_0.depth = 0.522987909444;
    tmp_msg_0.query_channel = 227U;
    tmp_msg_0.reply_channel = 202U;
    tmp_msg_0.transponder_delay = 63U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.898240847271;
    msg.y = 0.405799428789;
    msg.var_x = 0.937973359954;
    msg.var_y = 0.108426170859;
    msg.distance = 0.462960398194;

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
    msg.setTimeStamp(0.388292017126);
    msg.setSource(36193U);
    msg.setSourceEntity(83U);
    msg.setDestination(7171U);
    msg.setDestinationEntity(198U);
    msg.state = 104U;

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
    msg.setTimeStamp(0.413539810812);
    msg.setSource(2750U);
    msg.setSourceEntity(2U);
    msg.setDestination(50797U);
    msg.setDestinationEntity(81U);
    msg.state = 37U;

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
    msg.setTimeStamp(0.54979696089);
    msg.setSource(39147U);
    msg.setSourceEntity(121U);
    msg.setDestination(6562U);
    msg.setDestinationEntity(133U);
    msg.state = 144U;

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
    msg.setTimeStamp(0.968785053463);
    msg.setSource(2813U);
    msg.setSourceEntity(254U);
    msg.setDestination(28403U);
    msg.setDestinationEntity(3U);
    msg.x = 0.726728883523;
    msg.y = 0.0125188771605;
    msg.z = 0.823079192287;

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
    msg.setTimeStamp(0.300743355226);
    msg.setSource(28847U);
    msg.setSourceEntity(4U);
    msg.setDestination(19102U);
    msg.setDestinationEntity(160U);
    msg.x = 0.319838104226;
    msg.y = 0.520369528952;
    msg.z = 0.134598628277;

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
    msg.setTimeStamp(0.451060176253);
    msg.setSource(17994U);
    msg.setSourceEntity(129U);
    msg.setDestination(1233U);
    msg.setDestinationEntity(11U);
    msg.x = 0.852929183475;
    msg.y = 0.193543120071;
    msg.z = 0.0134592187243;

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
    msg.setTimeStamp(0.582494763223);
    msg.setSource(58410U);
    msg.setSourceEntity(132U);
    msg.setDestination(48797U);
    msg.setDestinationEntity(213U);
    msg.va = 0.700305459187;
    msg.aoa = 0.278757738837;
    msg.ssa = 0.175339447043;

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
    msg.setTimeStamp(0.189518349517);
    msg.setSource(6632U);
    msg.setSourceEntity(3U);
    msg.setDestination(27254U);
    msg.setDestinationEntity(9U);
    msg.va = 0.373425340955;
    msg.aoa = 0.1228704485;
    msg.ssa = 0.216338721994;

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
    msg.setTimeStamp(0.943784679233);
    msg.setSource(61396U);
    msg.setSourceEntity(173U);
    msg.setDestination(54114U);
    msg.setDestinationEntity(215U);
    msg.va = 0.870084982854;
    msg.aoa = 0.23500112055;
    msg.ssa = 0.419888956875;

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
    msg.setTimeStamp(0.445953136732);
    msg.setSource(11343U);
    msg.setSourceEntity(25U);
    msg.setDestination(56716U);
    msg.setDestinationEntity(32U);
    msg.value = 0.571628939489;

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
    msg.setTimeStamp(0.852229027905);
    msg.setSource(58979U);
    msg.setSourceEntity(151U);
    msg.setDestination(5078U);
    msg.setDestinationEntity(207U);
    msg.value = 0.644040817772;

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
    msg.setTimeStamp(0.958645947583);
    msg.setSource(30464U);
    msg.setSourceEntity(8U);
    msg.setDestination(46333U);
    msg.setDestinationEntity(221U);
    msg.value = 0.0886704441017;

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
    msg.setTimeStamp(0.418894406766);
    msg.setSource(25490U);
    msg.setSourceEntity(90U);
    msg.setDestination(25903U);
    msg.setDestinationEntity(87U);
    msg.value = 0.922002849301;
    msg.z_units = 159U;

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
    msg.setTimeStamp(0.557095112776);
    msg.setSource(6580U);
    msg.setSourceEntity(184U);
    msg.setDestination(30318U);
    msg.setDestinationEntity(202U);
    msg.value = 0.512526704407;
    msg.z_units = 118U;

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
    msg.setTimeStamp(0.673111034627);
    msg.setSource(47287U);
    msg.setSourceEntity(219U);
    msg.setDestination(63626U);
    msg.setDestinationEntity(55U);
    msg.value = 0.735081980871;
    msg.z_units = 120U;

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
    msg.setTimeStamp(0.506747449859);
    msg.setSource(49084U);
    msg.setSourceEntity(94U);
    msg.setDestination(10842U);
    msg.setDestinationEntity(188U);
    msg.value = 0.448262777125;
    msg.speed_units = 160U;

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
    msg.setTimeStamp(0.816253204692);
    msg.setSource(43970U);
    msg.setSourceEntity(225U);
    msg.setDestination(65356U);
    msg.setDestinationEntity(25U);
    msg.value = 0.741382991159;
    msg.speed_units = 55U;

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
    msg.setTimeStamp(0.764122778818);
    msg.setSource(9090U);
    msg.setSourceEntity(231U);
    msg.setDestination(38121U);
    msg.setDestinationEntity(36U);
    msg.value = 0.474067547711;
    msg.speed_units = 7U;

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
    msg.setTimeStamp(0.295216185171);
    msg.setSource(45866U);
    msg.setSourceEntity(186U);
    msg.setDestination(57312U);
    msg.setDestinationEntity(171U);
    msg.value = 0.608420095291;

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
    msg.setTimeStamp(0.309974845594);
    msg.setSource(541U);
    msg.setSourceEntity(233U);
    msg.setDestination(16241U);
    msg.setDestinationEntity(225U);
    msg.value = 0.543808664401;

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
    msg.setTimeStamp(0.539522695956);
    msg.setSource(25630U);
    msg.setSourceEntity(63U);
    msg.setDestination(8551U);
    msg.setDestinationEntity(167U);
    msg.value = 0.821732042617;

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
    msg.setTimeStamp(0.529032293568);
    msg.setSource(36759U);
    msg.setSourceEntity(163U);
    msg.setDestination(45553U);
    msg.setDestinationEntity(147U);
    msg.value = 0.0984820519172;

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
    msg.setTimeStamp(0.461820648145);
    msg.setSource(28398U);
    msg.setSourceEntity(152U);
    msg.setDestination(57018U);
    msg.setDestinationEntity(213U);
    msg.value = 0.607988244974;

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
    msg.setTimeStamp(0.530719543476);
    msg.setSource(58083U);
    msg.setSourceEntity(94U);
    msg.setDestination(19370U);
    msg.setDestinationEntity(252U);
    msg.value = 0.436618790062;

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
    msg.setTimeStamp(0.0853480405648);
    msg.setSource(48971U);
    msg.setSourceEntity(170U);
    msg.setDestination(62393U);
    msg.setDestinationEntity(175U);
    msg.value = 0.299500370811;

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
    msg.setTimeStamp(0.428133440636);
    msg.setSource(9756U);
    msg.setSourceEntity(254U);
    msg.setDestination(46267U);
    msg.setDestinationEntity(202U);
    msg.value = 0.896235912716;

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
    msg.setTimeStamp(0.351735304894);
    msg.setSource(23607U);
    msg.setSourceEntity(19U);
    msg.setDestination(15757U);
    msg.setDestinationEntity(194U);
    msg.value = 0.647778974699;

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
    msg.setTimeStamp(0.148041342954);
    msg.setSource(28665U);
    msg.setSourceEntity(222U);
    msg.setDestination(45673U);
    msg.setDestinationEntity(69U);
    msg.path_ref = 3405303185U;
    msg.start_lat = 0.536028412896;
    msg.start_lon = 0.171493827189;
    msg.start_z = 0.547381608409;
    msg.start_z_units = 239U;
    msg.end_lat = 0.938944267766;
    msg.end_lon = 0.624494037482;
    msg.end_z = 0.185089027334;
    msg.end_z_units = 171U;
    msg.speed = 0.915234300163;
    msg.speed_units = 173U;
    msg.lradius = 0.670375780516;
    msg.flags = 69U;

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
    msg.setTimeStamp(0.842040983227);
    msg.setSource(35847U);
    msg.setSourceEntity(96U);
    msg.setDestination(9582U);
    msg.setDestinationEntity(52U);
    msg.path_ref = 3419106297U;
    msg.start_lat = 0.784827720527;
    msg.start_lon = 0.493154624258;
    msg.start_z = 0.0413046086456;
    msg.start_z_units = 85U;
    msg.end_lat = 0.282434354106;
    msg.end_lon = 0.740237406901;
    msg.end_z = 0.6146544037;
    msg.end_z_units = 95U;
    msg.speed = 0.155500411425;
    msg.speed_units = 87U;
    msg.lradius = 0.471685339517;
    msg.flags = 233U;

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
    msg.setTimeStamp(0.549795608348);
    msg.setSource(57212U);
    msg.setSourceEntity(103U);
    msg.setDestination(7282U);
    msg.setDestinationEntity(74U);
    msg.path_ref = 2756840602U;
    msg.start_lat = 0.333301175586;
    msg.start_lon = 0.995879038122;
    msg.start_z = 0.289607785046;
    msg.start_z_units = 235U;
    msg.end_lat = 0.0555045412556;
    msg.end_lon = 0.208803031718;
    msg.end_z = 0.85392413616;
    msg.end_z_units = 167U;
    msg.speed = 0.98208425108;
    msg.speed_units = 226U;
    msg.lradius = 0.497698680916;
    msg.flags = 82U;

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
    msg.setTimeStamp(0.452093116082);
    msg.setSource(60159U);
    msg.setSourceEntity(119U);
    msg.setDestination(52706U);
    msg.setDestinationEntity(210U);
    msg.x = 0.856085962421;
    msg.y = 0.83223858305;
    msg.z = 0.989814806089;
    msg.k = 0.171629793315;
    msg.m = 0.994938646544;
    msg.n = 0.70403842594;
    msg.flags = 78U;

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
    msg.setTimeStamp(0.296412558828);
    msg.setSource(64584U);
    msg.setSourceEntity(184U);
    msg.setDestination(54599U);
    msg.setDestinationEntity(86U);
    msg.x = 0.901654119967;
    msg.y = 0.719818071049;
    msg.z = 0.331810225924;
    msg.k = 0.654052213388;
    msg.m = 0.919529376153;
    msg.n = 0.617641444529;
    msg.flags = 29U;

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
    msg.setTimeStamp(0.64450599513);
    msg.setSource(9483U);
    msg.setSourceEntity(65U);
    msg.setDestination(5459U);
    msg.setDestinationEntity(81U);
    msg.x = 0.267780533482;
    msg.y = 0.444701243794;
    msg.z = 0.586643671011;
    msg.k = 0.842007981018;
    msg.m = 0.347016904528;
    msg.n = 0.215306292349;
    msg.flags = 205U;

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
    msg.setTimeStamp(0.290322016912);
    msg.setSource(48878U);
    msg.setSourceEntity(173U);
    msg.setDestination(2578U);
    msg.setDestinationEntity(18U);
    msg.value = 0.573671379904;

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
    msg.setTimeStamp(0.157543280828);
    msg.setSource(28698U);
    msg.setSourceEntity(74U);
    msg.setDestination(34451U);
    msg.setDestinationEntity(32U);
    msg.value = 0.861714850522;

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
    msg.setTimeStamp(0.463612048351);
    msg.setSource(33694U);
    msg.setSourceEntity(144U);
    msg.setDestination(33637U);
    msg.setDestinationEntity(106U);
    msg.value = 0.651358189875;

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
    msg.setTimeStamp(0.28057117561);
    msg.setSource(47169U);
    msg.setSourceEntity(53U);
    msg.setDestination(3748U);
    msg.setDestinationEntity(24U);
    msg.u = 0.0754976822916;
    msg.v = 0.0551752739331;
    msg.w = 0.379355553936;
    msg.p = 0.461128925216;
    msg.q = 0.933894975739;
    msg.r = 0.79823652485;
    msg.flags = 194U;

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
    msg.setTimeStamp(0.883611096469);
    msg.setSource(21045U);
    msg.setSourceEntity(103U);
    msg.setDestination(29769U);
    msg.setDestinationEntity(49U);
    msg.u = 0.210382674992;
    msg.v = 0.324649516354;
    msg.w = 0.519595105223;
    msg.p = 0.665629134189;
    msg.q = 0.721384240961;
    msg.r = 0.161424926306;
    msg.flags = 119U;

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
    msg.setTimeStamp(0.65418718302);
    msg.setSource(41646U);
    msg.setSourceEntity(81U);
    msg.setDestination(22342U);
    msg.setDestinationEntity(178U);
    msg.u = 0.533323750012;
    msg.v = 0.64373037464;
    msg.w = 0.365760325756;
    msg.p = 0.439030925038;
    msg.q = 0.214555756568;
    msg.r = 0.531834149297;
    msg.flags = 94U;

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
    msg.setTimeStamp(0.326723562742);
    msg.setSource(27280U);
    msg.setSourceEntity(122U);
    msg.setDestination(2449U);
    msg.setDestinationEntity(240U);
    msg.path_ref = 337879381U;
    msg.start_lat = 0.919271122152;
    msg.start_lon = 0.862798738667;
    msg.start_z = 0.254882990285;
    msg.start_z_units = 86U;
    msg.end_lat = 0.387359434189;
    msg.end_lon = 0.842752491401;
    msg.end_z = 0.768044808526;
    msg.end_z_units = 121U;
    msg.lradius = 0.842232550097;
    msg.flags = 129U;
    msg.x = 0.683851238719;
    msg.y = 0.7549375302;
    msg.z = 0.330314397341;
    msg.vx = 0.188050268079;
    msg.vy = 0.890713343357;
    msg.vz = 0.801088277294;
    msg.course_error = 0.617218585786;
    msg.eta = 6410U;

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
    msg.setTimeStamp(0.837124997026);
    msg.setSource(16396U);
    msg.setSourceEntity(223U);
    msg.setDestination(22609U);
    msg.setDestinationEntity(73U);
    msg.path_ref = 3818073761U;
    msg.start_lat = 0.300511317867;
    msg.start_lon = 0.588424602759;
    msg.start_z = 0.0511066630102;
    msg.start_z_units = 112U;
    msg.end_lat = 0.906689045054;
    msg.end_lon = 0.448599419983;
    msg.end_z = 0.602459869487;
    msg.end_z_units = 138U;
    msg.lradius = 0.347951773729;
    msg.flags = 36U;
    msg.x = 0.696402136546;
    msg.y = 0.815633703541;
    msg.z = 0.632011144236;
    msg.vx = 0.596653669081;
    msg.vy = 0.679961224454;
    msg.vz = 0.0715403268672;
    msg.course_error = 0.908585428825;
    msg.eta = 6171U;

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
    msg.setTimeStamp(0.801490548943);
    msg.setSource(6399U);
    msg.setSourceEntity(181U);
    msg.setDestination(52085U);
    msg.setDestinationEntity(12U);
    msg.path_ref = 2187911502U;
    msg.start_lat = 0.173573469627;
    msg.start_lon = 0.84525847149;
    msg.start_z = 0.0126741056265;
    msg.start_z_units = 249U;
    msg.end_lat = 0.878943243078;
    msg.end_lon = 0.2214893008;
    msg.end_z = 0.938060500093;
    msg.end_z_units = 125U;
    msg.lradius = 0.809000362747;
    msg.flags = 97U;
    msg.x = 0.920173080018;
    msg.y = 0.35577331456;
    msg.z = 0.176256901652;
    msg.vx = 0.102570953094;
    msg.vy = 0.137892102903;
    msg.vz = 0.485022776389;
    msg.course_error = 0.116759112199;
    msg.eta = 31987U;

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
    msg.setTimeStamp(0.185806829474);
    msg.setSource(59135U);
    msg.setSourceEntity(156U);
    msg.setDestination(3952U);
    msg.setDestinationEntity(251U);
    msg.k = 0.0273175371319;
    msg.m = 0.841541881027;
    msg.n = 0.711963828283;

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
    msg.setTimeStamp(0.843774005776);
    msg.setSource(51672U);
    msg.setSourceEntity(160U);
    msg.setDestination(30846U);
    msg.setDestinationEntity(93U);
    msg.k = 0.135088750871;
    msg.m = 0.197072946338;
    msg.n = 0.302389992103;

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
    msg.setTimeStamp(0.107074109338);
    msg.setSource(14219U);
    msg.setSourceEntity(239U);
    msg.setDestination(54529U);
    msg.setDestinationEntity(196U);
    msg.k = 0.322470491928;
    msg.m = 0.0453676128288;
    msg.n = 0.443901516473;

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
    msg.setTimeStamp(0.876660756946);
    msg.setSource(2268U);
    msg.setSourceEntity(244U);
    msg.setDestination(38544U);
    msg.setDestinationEntity(18U);
    msg.p = 0.402313350072;
    msg.i = 0.738944941743;
    msg.d = 0.408914097037;
    msg.a = 0.849422566457;

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
    msg.setTimeStamp(0.442762148196);
    msg.setSource(28815U);
    msg.setSourceEntity(112U);
    msg.setDestination(29527U);
    msg.setDestinationEntity(190U);
    msg.p = 0.492914828115;
    msg.i = 0.760756688211;
    msg.d = 0.729655896998;
    msg.a = 0.121429354351;

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
    msg.setTimeStamp(0.448663840032);
    msg.setSource(39405U);
    msg.setSourceEntity(93U);
    msg.setDestination(54099U);
    msg.setDestinationEntity(97U);
    msg.p = 0.959002109013;
    msg.i = 0.588622227438;
    msg.d = 0.343719027109;
    msg.a = 0.122667649647;

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
    msg.setTimeStamp(0.980551702957);
    msg.setSource(26811U);
    msg.setSourceEntity(65U);
    msg.setDestination(7561U);
    msg.setDestinationEntity(156U);
    msg.op = 202U;

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
    msg.setTimeStamp(0.820645852083);
    msg.setSource(37630U);
    msg.setSourceEntity(121U);
    msg.setDestination(6622U);
    msg.setDestinationEntity(10U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.285109930333);
    msg.setSource(20610U);
    msg.setSourceEntity(165U);
    msg.setDestination(19491U);
    msg.setDestinationEntity(83U);
    msg.op = 173U;

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
    msg.setTimeStamp(0.450145521742);
    msg.setSource(236U);
    msg.setSourceEntity(155U);
    msg.setDestination(23067U);
    msg.setDestinationEntity(7U);
    msg.x = 0.591026789523;
    msg.y = 0.981848959119;
    msg.z = 0.172128011433;
    msg.vx = 0.553369552513;
    msg.vy = 0.0650900100884;
    msg.vz = 0.280376467456;
    msg.ax = 0.856267334596;
    msg.ay = 0.932292944422;
    msg.az = 0.739047073971;
    msg.flags = 42072U;

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
    msg.setTimeStamp(0.920380115989);
    msg.setSource(3827U);
    msg.setSourceEntity(98U);
    msg.setDestination(56528U);
    msg.setDestinationEntity(221U);
    msg.x = 0.152748921962;
    msg.y = 0.269783255432;
    msg.z = 0.266389989598;
    msg.vx = 0.467083595732;
    msg.vy = 0.0726142073757;
    msg.vz = 0.972995735394;
    msg.ax = 0.907370381374;
    msg.ay = 0.738714879676;
    msg.az = 0.807318582762;
    msg.flags = 24442U;

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
    msg.setTimeStamp(0.893741439313);
    msg.setSource(28832U);
    msg.setSourceEntity(144U);
    msg.setDestination(5883U);
    msg.setDestinationEntity(254U);
    msg.x = 0.0251964759084;
    msg.y = 0.407564614789;
    msg.z = 0.937815178541;
    msg.vx = 0.228294762594;
    msg.vy = 0.713731225107;
    msg.vz = 0.477396495692;
    msg.ax = 0.494025577067;
    msg.ay = 0.73923011516;
    msg.az = 0.481100271107;
    msg.flags = 44498U;

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
    msg.setTimeStamp(0.0729258649095);
    msg.setSource(20995U);
    msg.setSourceEntity(213U);
    msg.setDestination(16092U);
    msg.setDestinationEntity(66U);
    msg.value = 0.53613937433;

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
    msg.setTimeStamp(0.927256963516);
    msg.setSource(16448U);
    msg.setSourceEntity(103U);
    msg.setDestination(6063U);
    msg.setDestinationEntity(61U);
    msg.value = 0.92124940107;

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
    msg.setTimeStamp(0.98561673756);
    msg.setSource(64950U);
    msg.setSourceEntity(94U);
    msg.setDestination(63772U);
    msg.setDestinationEntity(59U);
    msg.value = 0.450720199993;

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
    msg.setTimeStamp(0.360790013229);
    msg.setSource(24429U);
    msg.setSourceEntity(187U);
    msg.setDestination(25531U);
    msg.setDestinationEntity(227U);
    msg.timeout = 13688U;
    msg.lat = 0.209822795835;
    msg.lon = 0.46820080117;
    msg.z = 0.120603846648;
    msg.z_units = 195U;
    msg.speed = 0.25365569959;
    msg.speed_units = 16U;
    msg.roll = 0.890245303755;
    msg.pitch = 0.526718368592;
    msg.yaw = 0.941416491826;
    msg.custom.assign("YLMNSAIKEACBHCVIGSNDIDFRVADXSZMXJIPIFTMRGNZYVXPUNUOWBYFEOJORAFSPCCBRNLHWOFPAKWEHONCOLXZBTHJVDEIFSZCAPJLBLQYRPVSMQUKHPERUQIBTNJHEXXQYOUEPUMKWJMDYWBUPVGY");

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
    msg.setTimeStamp(0.834491106772);
    msg.setSource(29528U);
    msg.setSourceEntity(157U);
    msg.setDestination(54091U);
    msg.setDestinationEntity(240U);
    msg.timeout = 7513U;
    msg.lat = 0.999609559563;
    msg.lon = 0.884740663702;
    msg.z = 0.0941052928537;
    msg.z_units = 99U;
    msg.speed = 0.755071970547;
    msg.speed_units = 196U;
    msg.roll = 0.676504209186;
    msg.pitch = 0.955544187283;
    msg.yaw = 0.434403529694;
    msg.custom.assign("IXLSDZLPPMAYWTQLZTWHZPAKCJOIQBYPUQIVXGNWCHRZABCZFRPABREDNMOXGDNCOMGQVUODXTXQMEWFUUMSXHEY");

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
    msg.setTimeStamp(0.454574034455);
    msg.setSource(65090U);
    msg.setSourceEntity(184U);
    msg.setDestination(29066U);
    msg.setDestinationEntity(42U);
    msg.timeout = 34817U;
    msg.lat = 0.023743728644;
    msg.lon = 0.910576543674;
    msg.z = 0.498972852604;
    msg.z_units = 17U;
    msg.speed = 0.341215652178;
    msg.speed_units = 252U;
    msg.roll = 0.270600051051;
    msg.pitch = 0.206805380637;
    msg.yaw = 0.546388351461;
    msg.custom.assign("DLKTTUJRBLEDGJOSCVPPCUPGPYSJLHZPRQJWLOYMNTHNIOAKDGCVAWBMKIYYQBFDWUOP");

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
    msg.setTimeStamp(0.837544969481);
    msg.setSource(49203U);
    msg.setSourceEntity(135U);
    msg.setDestination(40835U);
    msg.setDestinationEntity(78U);
    msg.timeout = 8316U;
    msg.lat = 0.635856189769;
    msg.lon = 0.89272134442;
    msg.z = 0.95399494478;
    msg.z_units = 248U;
    msg.speed = 0.246937438632;
    msg.speed_units = 222U;
    msg.duration = 51940U;
    msg.radius = 0.313775389386;
    msg.flags = 125U;
    msg.custom.assign("TQURVHVJOJDDLKEGNHDLLIKWGFIPEVWKNMUOXAYQAECROMRYXIBJLWNUYITKBBPTARNZPTFYVAVSUZHWSZOXHXIPFANI");

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
    msg.setTimeStamp(0.0763813873105);
    msg.setSource(47499U);
    msg.setSourceEntity(211U);
    msg.setDestination(40277U);
    msg.setDestinationEntity(94U);
    msg.timeout = 51809U;
    msg.lat = 0.470818197345;
    msg.lon = 0.747528601196;
    msg.z = 0.297084966485;
    msg.z_units = 55U;
    msg.speed = 0.760113080876;
    msg.speed_units = 95U;
    msg.duration = 23072U;
    msg.radius = 0.93806161627;
    msg.flags = 56U;
    msg.custom.assign("VJSRFKKRHGWLBEOZGQJHXKDPMIVFDTNMBRPRRTWNFWNTIAPCLIJDQNBAWQKOGUUCXQQVVYWPNBXNWVKKHBNMRFIZYPFZJESBQLXJEYZNFGXCOKIBCSHIAFUQLUZSMVXHMQDUOOBASTAPF");

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
    msg.setTimeStamp(0.456064182365);
    msg.setSource(27406U);
    msg.setSourceEntity(2U);
    msg.setDestination(50337U);
    msg.setDestinationEntity(200U);
    msg.timeout = 18283U;
    msg.lat = 0.263783394114;
    msg.lon = 0.482566341771;
    msg.z = 0.264651454305;
    msg.z_units = 251U;
    msg.speed = 0.355301879367;
    msg.speed_units = 225U;
    msg.duration = 11222U;
    msg.radius = 0.201394819323;
    msg.flags = 119U;
    msg.custom.assign("XZHJFIFBSCLQDTSOBXAZCXVLUWUVIMAHWGQSEGAPLWDCKURTIAFTCOJPMAOAWHAYYLVODUOYYDMXEARFFXQQHQBKNICBGLHKZKW");

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
    msg.setTimeStamp(0.548789002398);
    msg.setSource(48598U);
    msg.setSourceEntity(240U);
    msg.setDestination(31923U);
    msg.setDestinationEntity(240U);
    msg.custom.assign("UIPQYLBTMYVIVSTJNZCHXFOAYOMGBIYFEENHVQOAFLLKILMQKNBERFHLGZWEOTKGIBMPDJAZXTAUMWSEFOHRXQZYENCB");

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
    msg.setTimeStamp(0.0996009460283);
    msg.setSource(18607U);
    msg.setSourceEntity(20U);
    msg.setDestination(55139U);
    msg.setDestinationEntity(102U);
    msg.custom.assign("QGSQJZPKLGWHRNEKMTLUCGAXAUPSCYRVDKPELEQWOJROCFNHVZQVKQPXBCWMZDSRMXQHPERAJMEAMXLBTJZHLCZPSJJODXFXBQGUHGYLTFZQQLOCKNDVXHWFUJKMIOOCTIHADEIYFGSSTKIZDGMYKBFYLVAPWVESBYLURDBUSNGIAMMPHRZUSDRLEXFWVAVNRXBOYWPTVINVPYOYNQZIFICXTNUNOANKJHJAKUWEZUSWTRFHBDTJWITCGODCFB");

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
    msg.setTimeStamp(0.284738966303);
    msg.setSource(19267U);
    msg.setSourceEntity(173U);
    msg.setDestination(37729U);
    msg.setDestinationEntity(127U);
    msg.custom.assign("BUEBVNPGLUMQHMPMIGOCOEXOILIHBKSFWCYTLDJROVHCGGJCSFWOEDOLALPSIRVBWXDDVMHWXACQFINGJNSFOBUSQPGHXNFRZBYGPFKPFENCAKQRTFERATBXCUQEMXAGTUPBBYXGWDIW");

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
    msg.setTimeStamp(0.251674926243);
    msg.setSource(20016U);
    msg.setSourceEntity(59U);
    msg.setDestination(34298U);
    msg.setDestinationEntity(175U);
    msg.timeout = 43384U;
    msg.lat = 0.514518789746;
    msg.lon = 0.753179115077;
    msg.z = 0.279496889205;
    msg.z_units = 189U;
    msg.duration = 55945U;
    msg.speed = 0.138401698899;
    msg.speed_units = 53U;
    msg.type = 252U;
    msg.radius = 0.533083950393;
    msg.length = 0.91814794422;
    msg.bearing = 0.522401057351;
    msg.direction = 205U;
    msg.custom.assign("LQTPYXGXANKISBHRERFOKYRKNDYRUJYXPGHATBEGDOYQVDONHHKFSGCHHUCVFLIIRBDVGTWOCFHUVXXTZREGFZQZCQQJNKSVWAPTESAPBMDNAPBMIBUJXOJCHWLVKXTSVTPPEIADEOLUXTIGWKUJMISFYPMOVZCAZKIEWRNVWBQLLXUEZDENGAZVLZTJRQWYQHOLAYNCBYGOFLDBSMILSZNOQAUQJFKYJ");

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
    msg.setTimeStamp(0.226667509109);
    msg.setSource(31287U);
    msg.setSourceEntity(225U);
    msg.setDestination(52379U);
    msg.setDestinationEntity(215U);
    msg.timeout = 60319U;
    msg.lat = 0.328874223826;
    msg.lon = 0.854420315067;
    msg.z = 0.28634760808;
    msg.z_units = 171U;
    msg.duration = 40155U;
    msg.speed = 0.265632949975;
    msg.speed_units = 21U;
    msg.type = 38U;
    msg.radius = 0.574676975754;
    msg.length = 0.38538733595;
    msg.bearing = 0.22373804703;
    msg.direction = 212U;
    msg.custom.assign("AKZBBHGPIJUDZEBKXCTUFMHLVRGBAJOUTMRAVVLLRDMMXHXTAOANEPLUDJSLTPJFZXPBKKSF");

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
    msg.setTimeStamp(0.658650446146);
    msg.setSource(50044U);
    msg.setSourceEntity(80U);
    msg.setDestination(29289U);
    msg.setDestinationEntity(60U);
    msg.timeout = 5649U;
    msg.lat = 0.211775698514;
    msg.lon = 0.234556950283;
    msg.z = 0.508704757475;
    msg.z_units = 90U;
    msg.duration = 28128U;
    msg.speed = 0.964142034443;
    msg.speed_units = 27U;
    msg.type = 167U;
    msg.radius = 0.283001573011;
    msg.length = 0.47906246361;
    msg.bearing = 0.758189719926;
    msg.direction = 13U;
    msg.custom.assign("ERQLOIYSPWPADUFNFFCUAMQXJOCMVRATTPBZBASBJUKYSKNLZUWOGHDMLPDHIOHSFDWWYMWDDMJOCL");

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
    msg.setTimeStamp(0.581550206613);
    msg.setSource(11652U);
    msg.setSourceEntity(84U);
    msg.setDestination(27299U);
    msg.setDestinationEntity(161U);
    msg.duration = 48426U;
    msg.custom.assign("RDZBPZOEKWYCEWLGCFTOKFSDHGPJHPMNDSIKGKMDVPRUCMQUAOAPCOFNESEYBHQGQNBVLOSLWGBWRDLYHINDLMKCPXROQZSKUOIIBNGOFLFKMDQXVWQXNVEIQXUXGTTNHUUDEXFJZQSVDZL");

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
    msg.setTimeStamp(0.607360785152);
    msg.setSource(37904U);
    msg.setSourceEntity(46U);
    msg.setDestination(47282U);
    msg.setDestinationEntity(205U);
    msg.duration = 10114U;
    msg.custom.assign("VFKKGIRWMMTFDQLUYRTAYDAANICVWUATRPWVMSVSEXJPDSUEFPDGZISIZGJWRMBVNVJZXXBGJFIOOJYGZMRPGCCQQLXBEKPUSMYRTWHOLNHOJISRDCEFBAJHRWUKLBPH");

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
    msg.setTimeStamp(0.0457140917681);
    msg.setSource(41069U);
    msg.setSourceEntity(192U);
    msg.setDestination(50394U);
    msg.setDestinationEntity(151U);
    msg.duration = 39459U;
    msg.custom.assign("KYGVXMRDCIBUSPKYBMJUPEDGHILWYOBAGIIRNAQBPCQMZTNPTVYAZWVBUDXLWSDQYJKSJNRXYIVATIWHTWSPUEOJULJXNQIBTLFXPQRNNZYFJBICMQCSPMEGJAKELUHGNVFLJVFQWZTEHPIAHSCLXJVVZXGADODXOGSGSWNKFEMZEVDKAJKUKBTHOAEOACPD");

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
    msg.setTimeStamp(0.893873450001);
    msg.setSource(356U);
    msg.setSourceEntity(208U);
    msg.setDestination(12946U);
    msg.setDestinationEntity(128U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.814350178076;
    msg.control.set(tmp_msg_0);
    msg.duration = 13735U;
    msg.custom.assign("XJGUOHPLLIOIQZZUCWTPQPADTVS");

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
    msg.setTimeStamp(0.444725894248);
    msg.setSource(57009U);
    msg.setSourceEntity(233U);
    msg.setDestination(44438U);
    msg.setDestinationEntity(160U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.508890390821;
    msg.control.set(tmp_msg_0);
    msg.duration = 64456U;
    msg.custom.assign("JBUFAWUZMALAWCVELZCHSMSZNXQQEZPRBDDBDYNQEBSLFIJQUEMLKJOGQMXIWFVOQFCBFSHXCYYAUWVPKKZJRNXDPYXBV");

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
    msg.setTimeStamp(0.583534232519);
    msg.setSource(13019U);
    msg.setSourceEntity(129U);
    msg.setDestination(10475U);
    msg.setDestinationEntity(204U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.313794283206;
    msg.control.set(tmp_msg_0);
    msg.duration = 57200U;
    msg.custom.assign("GKYCPVUTCBKWVAEJGHXDZADSGOKFIWRHUWMLXXLKSVSREMMKBJCHSWZFNDYUJWKVHTHFJYVHZEBVXDUOLLDMXLGNCELCTVZEAOFQJBJPUOKXPZCNCWIMVQHONHIRBYTIBUIYKRYWBDSOTCPHAGELFASQRTUNAUZNKDBFPECIQYQQFDNSJDVTVRXOROTEXLIHGMUPIFOGTDQQXGFQJSITMQPEBMOZYBCYYJSFLIXPPZKANZAWW");

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
    msg.setTimeStamp(0.204871724232);
    msg.setSource(20965U);
    msg.setSourceEntity(23U);
    msg.setDestination(28416U);
    msg.setDestinationEntity(9U);
    msg.timeout = 35616U;
    msg.lat = 0.828074938078;
    msg.lon = 0.207491272338;
    msg.z = 0.536222950716;
    msg.z_units = 137U;
    msg.speed = 0.690607959846;
    msg.speed_units = 104U;
    msg.bearing = 0.218901433118;
    msg.cross_angle = 0.450051770512;
    msg.width = 0.977651067387;
    msg.length = 0.355839469876;
    msg.hstep = 0.679158653113;
    msg.coff = 230U;
    msg.alternation = 78U;
    msg.flags = 97U;
    msg.custom.assign("VRWFUNTRWJGDOQNFDPQNDCPWOTAPKUSYHHVMWTHASVFKWYBXQMLSZJGRJRLBQXVZULKEYVOSRJIECIZFVKHNKFXIJKJTNGEEWKOBZZYYQVMMOGCDMZICHXZSHFHRHKTXEGXEKYRUGNUDEPNXDKJQOWRSSPADBBGUDORQFQIAZIASVOPLVYCSMDMQFNNITQWULPPLMGAYBTIBATWBBWHUDLUMLJJAXXVEEZUYELJ");

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
    msg.setTimeStamp(0.287607944722);
    msg.setSource(56477U);
    msg.setSourceEntity(82U);
    msg.setDestination(21373U);
    msg.setDestinationEntity(247U);
    msg.timeout = 40844U;
    msg.lat = 0.292759868712;
    msg.lon = 0.913503518541;
    msg.z = 0.423288822562;
    msg.z_units = 49U;
    msg.speed = 0.379436443385;
    msg.speed_units = 58U;
    msg.bearing = 0.375230335238;
    msg.cross_angle = 0.501157343887;
    msg.width = 0.858447692252;
    msg.length = 0.865906397074;
    msg.hstep = 0.380338839393;
    msg.coff = 173U;
    msg.alternation = 6U;
    msg.flags = 162U;
    msg.custom.assign("PXFYZSPVJSHOUCMBTVXSDRIARGLYIBNFUTWKCEUE");

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
    msg.setTimeStamp(0.971720271318);
    msg.setSource(44446U);
    msg.setSourceEntity(21U);
    msg.setDestination(26608U);
    msg.setDestinationEntity(73U);
    msg.timeout = 43053U;
    msg.lat = 0.807627604243;
    msg.lon = 0.0337776959094;
    msg.z = 0.101977519305;
    msg.z_units = 10U;
    msg.speed = 0.809461988874;
    msg.speed_units = 86U;
    msg.bearing = 0.896918115183;
    msg.cross_angle = 0.689607626666;
    msg.width = 0.246991730455;
    msg.length = 0.0150287325997;
    msg.hstep = 0.140191971681;
    msg.coff = 79U;
    msg.alternation = 130U;
    msg.flags = 93U;
    msg.custom.assign("MSIUYLVXTVYVVUBNXUHVCWMCIFBRUNEFQRDKLOCJYRESYNRNHBETTAWNRLQNFPXFZTJVQJKGLZOJOZDSTBGDEMPIXYSQGIDPIRAPGLDCFXZBAVASKAVLLRESCMUDZHOJAPGMSTRCQFUHWWPOHYBGXSQWSM");

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
    msg.setTimeStamp(0.743490675);
    msg.setSource(43625U);
    msg.setSourceEntity(46U);
    msg.setDestination(17222U);
    msg.setDestinationEntity(83U);
    msg.timeout = 19211U;
    msg.lat = 0.868932029011;
    msg.lon = 0.665463214475;
    msg.z = 0.0198067082942;
    msg.z_units = 224U;
    msg.speed = 0.780648756892;
    msg.speed_units = 62U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.039381663697;
    tmp_msg_0.y = 0.685458651498;
    tmp_msg_0.z = 0.195590915787;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NJSKPKLDSYJTXVJCKYSNIPBXEHZUNDCURNSYVAYTHWEJDMCDCPFZAXVBHCOBHZIAILUENPACFTSUVQLTYJHFMZXEVONQKQOREGLVGQSBMCICEIDSDFZWTRNQKILVVEALKQUFWZKRLBALHWNBCKTYGGOALBSFZOPHRDIIXUJWPGURPMUDBMKJHTXSOWYLBGXQRJDHFBD");

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
    msg.setTimeStamp(0.73291613977);
    msg.setSource(23531U);
    msg.setSourceEntity(16U);
    msg.setDestination(54934U);
    msg.setDestinationEntity(244U);
    msg.timeout = 32903U;
    msg.lat = 0.444154876874;
    msg.lon = 0.504840704477;
    msg.z = 0.100475692464;
    msg.z_units = 122U;
    msg.speed = 0.740747041175;
    msg.speed_units = 225U;
    msg.custom.assign("PTJFFVAXTDUPTQGXBAGELOYZGEQUHYMZKWSCZAWIVIHYBCRYTOHSOWUKVEUAYCJMGHZFOVPGUBGNQNKWMSILVQVDDRKLMWTTZJAUED");

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
    msg.setTimeStamp(0.647236308848);
    msg.setSource(5655U);
    msg.setSourceEntity(108U);
    msg.setDestination(53815U);
    msg.setDestinationEntity(232U);
    msg.timeout = 38826U;
    msg.lat = 0.191695301021;
    msg.lon = 0.752048863088;
    msg.z = 0.0200538001742;
    msg.z_units = 91U;
    msg.speed = 0.180393092377;
    msg.speed_units = 148U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.999175365677;
    tmp_msg_0.y = 0.0738078932527;
    tmp_msg_0.z = 0.308163606689;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BHHVXNERKAUJCWEXVVMKHGZBBWPZKISTNXQMDNSHMRGIPWFXPESVOLTHYTFUKJYDDFLOCQRHDNBCMYRLQSAUKTPYIAKXDJFGOSWJBLDMCWUZVLAGNYSUHQCZHQCVWQPXPERZHINGTCMUPUSKAGAASABILOEV");

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
    msg.setTimeStamp(0.969406591267);
    msg.setSource(20995U);
    msg.setSourceEntity(52U);
    msg.setDestination(15937U);
    msg.setDestinationEntity(158U);
    msg.x = 0.933923231906;
    msg.y = 0.98409443305;
    msg.z = 0.74768929013;

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
    msg.setTimeStamp(0.137816826748);
    msg.setSource(59918U);
    msg.setSourceEntity(170U);
    msg.setDestination(52797U);
    msg.setDestinationEntity(250U);
    msg.x = 0.795816308754;
    msg.y = 0.57584346187;
    msg.z = 0.760992470243;

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
    msg.setTimeStamp(0.314104087584);
    msg.setSource(25327U);
    msg.setSourceEntity(226U);
    msg.setDestination(53082U);
    msg.setDestinationEntity(165U);
    msg.x = 0.591660058015;
    msg.y = 0.282430835705;
    msg.z = 0.897194167531;

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
    msg.setTimeStamp(0.51439976098);
    msg.setSource(26682U);
    msg.setSourceEntity(200U);
    msg.setDestination(34673U);
    msg.setDestinationEntity(200U);
    msg.timeout = 3391U;
    msg.lat = 0.893628944165;
    msg.lon = 0.427962301415;
    msg.z = 0.85811434883;
    msg.z_units = 5U;
    msg.amplitude = 0.255570808217;
    msg.pitch = 0.154787105417;
    msg.speed = 0.295905192652;
    msg.speed_units = 45U;
    msg.custom.assign("CWYFIPLTJKNLRNWUGVNRGOFDYQIFNCJJPDBBGPLVMUQMPSEHOUXHROWHADZCAVLAVDAXKEESOSXFEFTJYCJBYWACKVIGDSGCAYMNZQDMUPTEJXBMVDKONBAQXBJLQCXTPFELSIQEAHGKNRNMJBERZHFBNPRIGYWPGYOCLUTECWTSD");

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
    msg.setTimeStamp(0.0550739018043);
    msg.setSource(24791U);
    msg.setSourceEntity(109U);
    msg.setDestination(43196U);
    msg.setDestinationEntity(230U);
    msg.timeout = 2197U;
    msg.lat = 0.373089716998;
    msg.lon = 0.146410769874;
    msg.z = 0.485074479986;
    msg.z_units = 50U;
    msg.amplitude = 0.760370722488;
    msg.pitch = 0.522551003669;
    msg.speed = 0.320489098115;
    msg.speed_units = 39U;
    msg.custom.assign("DMBMZKKJGVAJYRWMXHKGSDPGMJVBDRRHOKIHTEFUTFUFSEOIKDPXQYLPXCASJDTKNTRUQLVYNTGAOYMNUWCHGZYNWUYBCNVPYFOOVMQUZEWYAWFBGYMOBTCGSMECIIHPPEIVWQEQDRWAAQJQPNLOCXSBJRRSSDODKLIFYFXLCELWIVEOUNFKTDAHSTPQWVUNQEKGQPZILECZOXLJHHFZJLLJXCPIH");

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
    msg.setTimeStamp(0.553703454493);
    msg.setSource(17211U);
    msg.setSourceEntity(8U);
    msg.setDestination(25399U);
    msg.setDestinationEntity(148U);
    msg.timeout = 60021U;
    msg.lat = 0.238452670461;
    msg.lon = 0.704814115485;
    msg.z = 0.646109860501;
    msg.z_units = 230U;
    msg.amplitude = 0.674993253051;
    msg.pitch = 0.750818729187;
    msg.speed = 0.971286234121;
    msg.speed_units = 31U;
    msg.custom.assign("KICNENLXGWBRYNCSLLVVEOLSYMNJPSUQTTFCZXPSDDOVTACWZHWVBTAYBXAKKMFMDCQFCOWLRDYITEOSUQSFIRXKIXNOZWNKLBKPDEWEFHFZNBXSKMQPGOO");

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
    msg.setTimeStamp(0.442515712896);
    msg.setSource(31932U);
    msg.setSourceEntity(1U);
    msg.setDestination(17699U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.0414381919551);
    msg.setSource(10110U);
    msg.setSourceEntity(229U);
    msg.setDestination(10855U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.423366913149);
    msg.setSource(11730U);
    msg.setSourceEntity(62U);
    msg.setDestination(20121U);
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
    msg.setTimeStamp(0.01374215129);
    msg.setSource(50093U);
    msg.setSourceEntity(107U);
    msg.setDestination(47996U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.544424462293;
    msg.lon = 0.573115488015;
    msg.z = 0.497602485403;
    msg.z_units = 98U;
    msg.radius = 0.588331691805;
    msg.duration = 53547U;
    msg.speed = 0.369606271797;
    msg.speed_units = 150U;
    msg.custom.assign("TBKOTCTHIIVVJIAGGMRRSEWECYFFLTYEMNGRDDSRDGDEXXZNQXRIBVYXXRPJHDMRFFYVYTMSQKHCAGOXTKB");

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
    msg.setTimeStamp(0.351293976747);
    msg.setSource(4071U);
    msg.setSourceEntity(69U);
    msg.setDestination(19571U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.954306653581;
    msg.lon = 0.706119790519;
    msg.z = 0.758991871599;
    msg.z_units = 141U;
    msg.radius = 0.326522927905;
    msg.duration = 25613U;
    msg.speed = 0.695570107183;
    msg.speed_units = 130U;
    msg.custom.assign("PFLKYRQVWWRPIVBPKHKVGYXLGXVRSFPZEOOXFYCFQCBYZMNSHDLKRULRMOUUQYESXBZRNISDVHENKWINAKRSADSAQRCPJQHUAJKLFTSVQQEWNCWZGPIEAZAXUFJFJLAUCGCRMQIBTZYJFPMXH");

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
    msg.setTimeStamp(0.138368954536);
    msg.setSource(27461U);
    msg.setSourceEntity(73U);
    msg.setDestination(33536U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.481944378976;
    msg.lon = 0.231488463455;
    msg.z = 0.869252043636;
    msg.z_units = 231U;
    msg.radius = 0.237090191722;
    msg.duration = 20091U;
    msg.speed = 0.188615089053;
    msg.speed_units = 203U;
    msg.custom.assign("NCGUBWYCZAGGWVIYJGYKHMOLPMQOFQPTLLIYEWRABHUIUNBWDHAREXPCTBPJSPZTMSIHAKDTIHRVKAEIZKJNGWOVXRGJOIZYJIZCSWXPVXF");

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
    msg.setTimeStamp(0.534413561756);
    msg.setSource(11492U);
    msg.setSourceEntity(38U);
    msg.setDestination(3958U);
    msg.setDestinationEntity(63U);
    msg.timeout = 46557U;
    msg.flags = 206U;
    msg.lat = 0.461314293944;
    msg.lon = 0.551275807762;
    msg.start_z = 0.764508433515;
    msg.start_z_units = 187U;
    msg.end_z = 0.836019404345;
    msg.end_z_units = 221U;
    msg.radius = 0.0168584309346;
    msg.speed = 0.751150501209;
    msg.speed_units = 201U;
    msg.custom.assign("IKBZRFVCWZWMUQSCGHPHBIUNKXISVPOSCQUGLTKPHIQGABYFHJZODRNVDYEUDREEEEJQNXEWRMYYIXVGKBIRBUNCXBOXXYDSPPLMQHGDJAOVPGJYMIEKLOOKCCGGNX");

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
    msg.setTimeStamp(0.0953634183598);
    msg.setSource(9058U);
    msg.setSourceEntity(127U);
    msg.setDestination(35684U);
    msg.setDestinationEntity(79U);
    msg.timeout = 20881U;
    msg.flags = 54U;
    msg.lat = 0.149112440288;
    msg.lon = 0.275395941122;
    msg.start_z = 0.193420460038;
    msg.start_z_units = 137U;
    msg.end_z = 0.767873062674;
    msg.end_z_units = 133U;
    msg.radius = 0.0891603904849;
    msg.speed = 0.295603878155;
    msg.speed_units = 56U;
    msg.custom.assign("IMWPSKKYCHTWCADCKXGUEGWOCAIETWGJMXKYBUUBFSVIDMGZQSZHFSOQBTNQESBBQVBIVHZGNBXYESDKNLVHOIRPCDJFSRBQRWTXOPOLBAJJILEXCKNYWOAAAMYQZFCPWRLXKFMRDZ");

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
    msg.setTimeStamp(0.993268284232);
    msg.setSource(8485U);
    msg.setSourceEntity(244U);
    msg.setDestination(43581U);
    msg.setDestinationEntity(76U);
    msg.timeout = 58564U;
    msg.flags = 112U;
    msg.lat = 0.387831637536;
    msg.lon = 0.388828740514;
    msg.start_z = 0.706014588534;
    msg.start_z_units = 21U;
    msg.end_z = 0.434855306186;
    msg.end_z_units = 49U;
    msg.radius = 0.228522994543;
    msg.speed = 0.915666683712;
    msg.speed_units = 202U;
    msg.custom.assign("AJCXPYAXSWNRKTLZWPFOOPVVHCVPUXKBLKKDUJAIRLWHOONPGRLKZWOKAKXQHTHRRAENVGSYCJVHEOBYUFBQBJWLTZYKMELBMQAIIQMYCMSZNEZWI");

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
    msg.setTimeStamp(0.237437945149);
    msg.setSource(59794U);
    msg.setSourceEntity(204U);
    msg.setDestination(6131U);
    msg.setDestinationEntity(108U);
    msg.timeout = 25555U;
    msg.lat = 0.40993119518;
    msg.lon = 0.0615453970476;
    msg.z = 0.82685067709;
    msg.z_units = 204U;
    msg.speed = 0.748041899655;
    msg.speed_units = 164U;
    msg.custom.assign("EGAFEQRTRISFJHUSKVMWJAGECPMXKPMYITMYBAGDNEOJKSYCQFQXEF");

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
    msg.setTimeStamp(0.605344974939);
    msg.setSource(62296U);
    msg.setSourceEntity(186U);
    msg.setDestination(55253U);
    msg.setDestinationEntity(25U);
    msg.timeout = 14070U;
    msg.lat = 0.700844920186;
    msg.lon = 0.924893490054;
    msg.z = 0.253127378415;
    msg.z_units = 78U;
    msg.speed = 0.620590531332;
    msg.speed_units = 11U;
    msg.custom.assign("NTMBSPVSKQYDGGTEMQCVPTIXWBQQXPCHSERNGGLUIICWKS");

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
    msg.setTimeStamp(0.521944992099);
    msg.setSource(21930U);
    msg.setSourceEntity(200U);
    msg.setDestination(57038U);
    msg.setDestinationEntity(230U);
    msg.timeout = 64944U;
    msg.lat = 0.291633363089;
    msg.lon = 0.75367511734;
    msg.z = 0.0845365691633;
    msg.z_units = 43U;
    msg.speed = 0.449903981887;
    msg.speed_units = 33U;
    msg.custom.assign("VONPKRINVPOJMQEJDKRALNQFKLTJIOETEMYKDEVYITQKNOUHRCAPDXHTYRFDJTWFLNGMNKMNDCTVPWWFDPGEWRTXOUAIRDXL");

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
    msg.setTimeStamp(0.824619479249);
    msg.setSource(14844U);
    msg.setSourceEntity(60U);
    msg.setDestination(27567U);
    msg.setDestinationEntity(4U);
    msg.x = 0.535252997955;
    msg.y = 0.712231597749;
    msg.z = 0.265545491267;
    msg.t = 0.176792068004;

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
    msg.setTimeStamp(0.967179119513);
    msg.setSource(49810U);
    msg.setSourceEntity(197U);
    msg.setDestination(61476U);
    msg.setDestinationEntity(49U);
    msg.x = 0.460258847959;
    msg.y = 0.163729164808;
    msg.z = 0.730389922174;
    msg.t = 0.499544555957;

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
    msg.setTimeStamp(0.64590638108);
    msg.setSource(60468U);
    msg.setSourceEntity(164U);
    msg.setDestination(30232U);
    msg.setDestinationEntity(44U);
    msg.x = 0.714232860556;
    msg.y = 0.797146105271;
    msg.z = 0.108503701007;
    msg.t = 0.61309075493;

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
    msg.setTimeStamp(0.997372389751);
    msg.setSource(30U);
    msg.setSourceEntity(139U);
    msg.setDestination(51285U);
    msg.setDestinationEntity(110U);
    msg.timeout = 7768U;
    msg.name.assign("PJPJDOLPVKMDJOEGLZDVQRBXCAXHHAJGSRHWRZXCHABZWCUIPRKDQQNIMKOTCLXELKRQSCVWTYXYNYNSKFLNJPWEJUMODBZNMDDGTUECQRLTV");
    msg.custom.assign("LRNZYIVUCKNDPAZYSCYJUUHWNMSEQYAPNEHNLPZGTQERPZAOJUMNVHILIFDBOKBMKPQVOWMGKUTIAHEQDSXEKCZARFUKZGCIMFEZCKIGVXPHIPGFERLTFTJYXMNYDFGGDKJWAVVBFWXLDLXYTZMHDZMCWHXJBORUATTRIBSNJKTZHXTRLBGTMVDFGSFBDQBSJOGJYWQPYNXCIHRQQAEXQBURWLPQPACLSFVNOBOCVESOXDMOYRWEKH");

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
    msg.setTimeStamp(0.718074000436);
    msg.setSource(37758U);
    msg.setSourceEntity(131U);
    msg.setDestination(4360U);
    msg.setDestinationEntity(189U);
    msg.timeout = 943U;
    msg.name.assign("EUAHYURLNJOLCPJZPKSXTZMWKFJWSVDVUSYOFKFJCODWIQOIWFPLNKRYMXYUJBHGESYOBADVWYFXNKLHJEBNQBMZYSDIELKCWPSCMCXQHTFVJRERTEVRSHZPUXEAJGDRABHBUVVQMQSIQTIRMPGXJTZNWREOY");
    msg.custom.assign("RJCEDSCXFNNJYXXPVYACSSYNPEMMZFORZXZRMKHWQMDGVWPUIMQPKBKKGQFTYWCYADMXBLUINJTKHZADCQSZAUVIDJBHAUSJCMPKWFFWRISDINGGGXLRVVMSLWBFUGWHUJJLHDYOTHEXYVZXFOKTLLVVWTTEDIZHPNSDCRQBIVUBTEEAZLGPKRGTXLFNZOBDPNFUGLUVRSCQ");

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
    msg.setTimeStamp(0.913850673943);
    msg.setSource(33082U);
    msg.setSourceEntity(128U);
    msg.setDestination(48754U);
    msg.setDestinationEntity(16U);
    msg.timeout = 17227U;
    msg.name.assign("EWLZNXCNVLXLERCMDPYLHWBAQOHASLOXGSTMIFYEDXGUBVHQFDALITEWOCQIFYXHGWAJQWHTKNILSASCAFUXKCSSFBQKQCZEUNHTPRHZRDCMBHKZOHMEKUJPRASGUKQGVMOBFGGTRVPCNASXUFGZWZYNJPFXURRUMYAROBMGVDL");
    msg.custom.assign("BJTGUFGMDCWWTBYYOTEWVZHZJBARHQSZDBVMKHFJNBIFHUKKAWQBPSBJUPMIBPCSSFXREDZIQVNYBUPGHOMHIRZRTOHIDVGUOYZNSZFJVJIIUJWXMQFUUAGG");

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
    msg.setTimeStamp(0.229123916764);
    msg.setSource(1167U);
    msg.setSourceEntity(58U);
    msg.setDestination(23114U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.976881226233;
    msg.lon = 0.729680319504;
    msg.z = 0.445666158588;
    msg.z_units = 109U;
    msg.speed = 0.890809632714;
    msg.speed_units = 5U;
    msg.start_time = 0.667890735024;
    msg.custom.assign("PJJGVNMTQHBPSLASHRWSNAVPYKYXMZEYADEWSWWOKTTKZVFWYYXMPAEUEMJIQRSXZDCUAIFBUBTDOISQXJYBHDFNAGTIIMLCZHPNOLFLEDGCWAKZGCVCIJINGQDXEVMZCUNCSFVHHKPELBYIOK");

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
    msg.setTimeStamp(0.856838997519);
    msg.setSource(23400U);
    msg.setSourceEntity(119U);
    msg.setDestination(50367U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.149545756447;
    msg.lon = 0.528542947462;
    msg.z = 0.229216098327;
    msg.z_units = 33U;
    msg.speed = 0.158539281787;
    msg.speed_units = 131U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.667219663746;
    tmp_msg_0.y = 0.979504306229;
    tmp_msg_0.z = 0.124104489165;
    tmp_msg_0.t = 0.146368722047;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 29235U;
    tmp_msg_1.off_x = 0.589994343914;
    tmp_msg_1.off_y = 0.579311518294;
    tmp_msg_1.off_z = 0.264996722671;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.47072497423;
    msg.custom.assign("QDILZWPVATRLEPEFOPDZGGBYSZH");

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
    msg.setTimeStamp(0.798866651464);
    msg.setSource(31016U);
    msg.setSourceEntity(45U);
    msg.setDestination(44230U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.52497345769;
    msg.lon = 0.7637786752;
    msg.z = 0.300206194638;
    msg.z_units = 138U;
    msg.speed = 0.501116473919;
    msg.speed_units = 167U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.355564680137;
    tmp_msg_0.y = 0.416122432237;
    tmp_msg_0.z = 0.191861310749;
    tmp_msg_0.t = 0.194941202251;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.539754803543;
    msg.custom.assign("DVHOFAMYRMBDCPOJJEAQCWNZFRHBOVDVOYKQCTRGGQECIHYGLTHUSXISNZXWRUXKTQKFJNZOGKBUYFWCKSWXIPAFTXWNBPIYMSLOBTULCSOGMRYCBGHNFEWDXHUZJXIXAVIRIRFLLBVSBSTPYCMMQKQIPOUWLEGKPDMJVNKVDDLQUCZRH");

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
    msg.setTimeStamp(0.0232434558179);
    msg.setSource(63543U);
    msg.setSourceEntity(43U);
    msg.setDestination(57833U);
    msg.setDestinationEntity(56U);
    msg.vid = 55638U;
    msg.off_x = 0.54168163477;
    msg.off_y = 0.539714216636;
    msg.off_z = 0.751006069894;

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
    msg.setTimeStamp(0.0532429851279);
    msg.setSource(19657U);
    msg.setSourceEntity(157U);
    msg.setDestination(49768U);
    msg.setDestinationEntity(212U);
    msg.vid = 7169U;
    msg.off_x = 0.529866689538;
    msg.off_y = 0.985241828882;
    msg.off_z = 0.0102838632591;

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
    msg.setTimeStamp(0.331650800729);
    msg.setSource(7344U);
    msg.setSourceEntity(175U);
    msg.setDestination(13788U);
    msg.setDestinationEntity(107U);
    msg.vid = 36368U;
    msg.off_x = 0.85871047943;
    msg.off_y = 0.074740303953;
    msg.off_z = 0.405914960373;

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
    msg.setTimeStamp(0.311411013253);
    msg.setSource(63870U);
    msg.setSourceEntity(157U);
    msg.setDestination(61339U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.949746019652);
    msg.setSource(51227U);
    msg.setSourceEntity(60U);
    msg.setDestination(22741U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.744823648871);
    msg.setSource(61389U);
    msg.setSourceEntity(206U);
    msg.setDestination(53612U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.268021141948);
    msg.setSource(2542U);
    msg.setSourceEntity(230U);
    msg.setDestination(12616U);
    msg.setDestinationEntity(237U);
    msg.mid = 47386U;

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
    msg.setTimeStamp(0.744406614239);
    msg.setSource(5379U);
    msg.setSourceEntity(11U);
    msg.setDestination(59U);
    msg.setDestinationEntity(13U);
    msg.mid = 36512U;

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
    msg.setTimeStamp(0.787413157126);
    msg.setSource(30892U);
    msg.setSourceEntity(140U);
    msg.setDestination(47593U);
    msg.setDestinationEntity(132U);
    msg.mid = 21986U;

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
    msg.setTimeStamp(0.627058082114);
    msg.setSource(39783U);
    msg.setSourceEntity(171U);
    msg.setDestination(48608U);
    msg.setDestinationEntity(216U);
    msg.state = 162U;
    msg.eta = 46013U;
    msg.info.assign("MOXSPTAQGLJNLGU");

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
    msg.setTimeStamp(0.924021197774);
    msg.setSource(41525U);
    msg.setSourceEntity(103U);
    msg.setDestination(48889U);
    msg.setDestinationEntity(145U);
    msg.state = 155U;
    msg.eta = 42764U;
    msg.info.assign("AMRONRDYWRUWLJHBCAADPGOXDQVXSZKFHHNXPUTYARFNTQZJXJVVRSMRATZTCBILHKJYUXRWLCITBXUMJBRONOFVOLHHUQCRWEWWODJSAFUGEEVCYLYMJOVBAQQHNRSY");

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
    msg.setTimeStamp(0.699222720186);
    msg.setSource(62560U);
    msg.setSourceEntity(109U);
    msg.setDestination(17063U);
    msg.setDestinationEntity(205U);
    msg.state = 215U;
    msg.eta = 6379U;
    msg.info.assign("HXVUDULYFKFNQYSGJEEULXAAQWIHPMEJKSDGOVLCVGAJKQXXMGRBFWATMRBLFJQKNTTOFHPIJBXJUBXXFBZEAWETNRCYVVPZHKNVWEYMKHMNUTHBBOBZXZYJKZSDOZGGODGGQFTCVHGLSSQYWNILFRODHCMAPL");

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
    msg.setTimeStamp(0.0626682497105);
    msg.setSource(46938U);
    msg.setSourceEntity(61U);
    msg.setDestination(23759U);
    msg.setDestinationEntity(244U);
    msg.system = 14112U;
    msg.duration = 54755U;
    msg.speed = 0.131336902702;
    msg.speed_units = 246U;
    msg.x = 0.223815053111;
    msg.y = 0.218970547339;
    msg.z = 0.267039070418;
    msg.z_units = 97U;

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
    msg.setTimeStamp(0.58817791058);
    msg.setSource(35031U);
    msg.setSourceEntity(169U);
    msg.setDestination(21617U);
    msg.setDestinationEntity(50U);
    msg.system = 55202U;
    msg.duration = 15353U;
    msg.speed = 0.905621000863;
    msg.speed_units = 250U;
    msg.x = 0.644041865319;
    msg.y = 0.5378704528;
    msg.z = 0.47212212156;
    msg.z_units = 239U;

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
    msg.setTimeStamp(0.544587779465);
    msg.setSource(32154U);
    msg.setSourceEntity(110U);
    msg.setDestination(12243U);
    msg.setDestinationEntity(181U);
    msg.system = 7865U;
    msg.duration = 39845U;
    msg.speed = 0.413160184264;
    msg.speed_units = 143U;
    msg.x = 0.346584487506;
    msg.y = 0.702799628518;
    msg.z = 0.994180222024;
    msg.z_units = 3U;

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
    msg.setTimeStamp(0.382166259285);
    msg.setSource(26874U);
    msg.setSourceEntity(234U);
    msg.setDestination(64792U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.542024552914;
    msg.lon = 0.413970881267;
    msg.speed = 0.33785178344;
    msg.speed_units = 114U;
    msg.duration = 4123U;
    msg.sys_a = 45332U;
    msg.sys_b = 40665U;
    msg.move_threshold = 0.733969825073;

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
    msg.setTimeStamp(0.311382328876);
    msg.setSource(56731U);
    msg.setSourceEntity(41U);
    msg.setDestination(28368U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.997864447495;
    msg.lon = 0.338125473368;
    msg.speed = 0.0615761465401;
    msg.speed_units = 220U;
    msg.duration = 63532U;
    msg.sys_a = 52170U;
    msg.sys_b = 63404U;
    msg.move_threshold = 0.883000369836;

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
    msg.setTimeStamp(0.0560146966841);
    msg.setSource(20868U);
    msg.setSourceEntity(203U);
    msg.setDestination(21273U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.218651616151;
    msg.lon = 0.452813936582;
    msg.speed = 0.919053992124;
    msg.speed_units = 181U;
    msg.duration = 21231U;
    msg.sys_a = 42970U;
    msg.sys_b = 18431U;
    msg.move_threshold = 0.448479929101;

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
    msg.setTimeStamp(0.891416853022);
    msg.setSource(64659U);
    msg.setSourceEntity(134U);
    msg.setDestination(2766U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.453523064645;
    msg.lon = 0.305942413932;
    msg.z = 0.386654760187;
    msg.z_units = 223U;
    msg.speed = 0.615804926733;
    msg.speed_units = 243U;
    msg.custom.assign("OIETQHTMRDYKVOABNCKPHXTHFKBQMAEJBCVMZLBHUIZDFMGIQWZYROPJXKVROYVPSOLVKVCRZZSWXFZTZVZARHTDSXFSIQICOKZAYPIUBFVXGCLTNGRMULEMQASCRJTPHNMDSCBWKURMENILQWZRBYLHUOVMHNJNKPWEDGO");

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
    msg.setTimeStamp(0.156876974153);
    msg.setSource(21459U);
    msg.setSourceEntity(56U);
    msg.setDestination(14827U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.508972994787;
    msg.lon = 0.540015776559;
    msg.z = 0.421331290872;
    msg.z_units = 98U;
    msg.speed = 0.119374648137;
    msg.speed_units = 179U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.553905463565;
    tmp_msg_0.lon = 0.553334254474;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CQNRALEHWKXNUGRCQAMSTYZMGVHTXAWLPGKVWGBQOVPUUAXAKBHKBFLOSSDPPGKEDVXQDPZDIYLUSONTIFKCWVJNEU");

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
    msg.setTimeStamp(0.337840104566);
    msg.setSource(1160U);
    msg.setSourceEntity(38U);
    msg.setDestination(49853U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.412409567104;
    msg.lon = 0.424572268446;
    msg.z = 0.0499231458153;
    msg.z_units = 132U;
    msg.speed = 0.627509418909;
    msg.speed_units = 73U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.18840665974;
    tmp_msg_0.lon = 0.458699081977;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VTZHJLCKTFPUGZLAYXQHZKGFREYCISDATBIITMQSPAHOEGYE");

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
    msg.setTimeStamp(0.14963848023);
    msg.setSource(28639U);
    msg.setSourceEntity(147U);
    msg.setDestination(53331U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.290321953799;
    msg.lon = 0.248001964275;

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
    msg.setTimeStamp(0.587705995395);
    msg.setSource(34237U);
    msg.setSourceEntity(36U);
    msg.setDestination(9774U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.326338621011;
    msg.lon = 0.0358132718073;

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
    msg.setTimeStamp(0.0235985743535);
    msg.setSource(53697U);
    msg.setSourceEntity(55U);
    msg.setDestination(53935U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.119774662725;
    msg.lon = 0.870950308091;

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
    msg.setTimeStamp(0.598052001678);
    msg.setSource(50149U);
    msg.setSourceEntity(55U);
    msg.setDestination(7863U);
    msg.setDestinationEntity(191U);
    msg.timeout = 62780U;
    msg.lat = 0.213969219834;
    msg.lon = 0.956312484646;
    msg.z = 0.479939334234;
    msg.z_units = 138U;
    msg.pitch = 0.0426129207983;
    msg.amplitude = 0.159225231434;
    msg.duration = 48231U;
    msg.speed = 0.812226936541;
    msg.speed_units = 27U;
    msg.radius = 0.961918033789;
    msg.direction = 50U;
    msg.custom.assign("WNBQHLTMQZXWEBSDFFETCJOGWXASIFJQPPYXJCNYPOBFTIUUYIFZNIXXNNCRYMMDCJQSBDODFKXVCKHSTGZHGQDQAKVVDRJZGHFOPXORE");

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
    msg.setTimeStamp(0.878960199912);
    msg.setSource(42761U);
    msg.setSourceEntity(75U);
    msg.setDestination(20083U);
    msg.setDestinationEntity(99U);
    msg.timeout = 1995U;
    msg.lat = 0.858746846611;
    msg.lon = 0.278501171094;
    msg.z = 0.438134106831;
    msg.z_units = 126U;
    msg.pitch = 0.109351357619;
    msg.amplitude = 0.629340684045;
    msg.duration = 3777U;
    msg.speed = 0.680212583905;
    msg.speed_units = 46U;
    msg.radius = 0.0454007518375;
    msg.direction = 37U;
    msg.custom.assign("CRRORXUGNPAGBLIEIEXITQNZKQSYDWGPGXTITQMPEXTSWRIHODLGIITSXZBLQBDRAPRNDDAMFUOZSCSEQGFFWTDUCSYPWOJQFVY");

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
    msg.setTimeStamp(0.328943999648);
    msg.setSource(49402U);
    msg.setSourceEntity(194U);
    msg.setDestination(32078U);
    msg.setDestinationEntity(137U);
    msg.timeout = 12262U;
    msg.lat = 0.499540597542;
    msg.lon = 0.158943111461;
    msg.z = 0.0989284298218;
    msg.z_units = 79U;
    msg.pitch = 0.123546997891;
    msg.amplitude = 0.851429157282;
    msg.duration = 6791U;
    msg.speed = 0.23158151527;
    msg.speed_units = 86U;
    msg.radius = 0.225854207077;
    msg.direction = 217U;
    msg.custom.assign("OYYXCNAJWEHGKOVMIDUBTKWXENNSWCCRJBW");

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
    msg.setTimeStamp(0.39945655369);
    msg.setSource(41748U);
    msg.setSourceEntity(67U);
    msg.setDestination(6702U);
    msg.setDestinationEntity(173U);
    msg.formation_name.assign("BRUYHMNLVQLNWRIQJYURCMHHVVXTKKNUWZFAQWGAOGESYZSITOELCSXFMDUJZLMMATLIZIJQIPTOALPOBITYWKPIXNASCDXRBKB");
    msg.reference_frame = 239U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 58158U;
    tmp_msg_0.off_x = 0.727898694411;
    tmp_msg_0.off_y = 0.773295964149;
    tmp_msg_0.off_z = 0.756585233074;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UODZXOKIKLJVCREXMCRQYQAMUQWWBYKGPTJGRDPJUYTBAITOQDALUAFGGOFHCWVCMPYNNNLEWHGTPJMFJHYNSMAIOTRSMZZHWVALGQBYJYSLXCOQKXUFNWXTPFGAHZTULSCWINHIKARBCXIBJY");

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
    msg.setTimeStamp(0.224979178239);
    msg.setSource(60339U);
    msg.setSourceEntity(192U);
    msg.setDestination(21786U);
    msg.setDestinationEntity(102U);
    msg.formation_name.assign("LRRHDIMZDQAQLFOHJJFTXCNXVKYIGZSYYZRDSDURMRBYHDQFUOWFNBEAHJCIILXBXSOZBTKSZCNPXRHKMVJELTNZIYNPICCVEMCIPDVISWIZGXSERTMAHAK");
    msg.reference_frame = 46U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 63502U;
    tmp_msg_0.off_x = 0.753778956869;
    tmp_msg_0.off_y = 0.600250498714;
    tmp_msg_0.off_z = 0.962532992049;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JZTDDNTIFGMZOUDOVKXONDIAQWQWQWXJNLQEKTERQYOYONWKGLKRUCDRBLBMMSHINCWSVZVLHGYXAUPUQFLCIGAUSXVDMIATQT");

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
    msg.setTimeStamp(0.734665998574);
    msg.setSource(40097U);
    msg.setSourceEntity(236U);
    msg.setDestination(41370U);
    msg.setDestinationEntity(217U);
    msg.formation_name.assign("VOITFBXRCGXSGTXWYWZZEXPIMIQAARTDADEFMHGNZVGMELHWUEXAUJGLYRECJPVANJVQPNGDEUBZEBWRUWORSPHKUFOTZLQFVFMDIPFYWCJET");
    msg.reference_frame = 251U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 61696U;
    tmp_msg_0.off_x = 0.0968523832948;
    tmp_msg_0.off_y = 0.0944050457011;
    tmp_msg_0.off_z = 0.806360369834;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BTDRMBSHSKOOKEJDPMTDFZSLIULZMGWPFXWHOHAPXZWWUFYLBWXZGMPKMGXDNCYCGOPSGAIPTTEOVBJWKZFCTRJFCJYRHNGQPKRZRYDUNIREKUXJEKJHOACOCNTDYJLQQUJFPAQWJAQODZTGIAAQXWDNFSVFKMCYZHXTVTRVOENLYODYSHMBNQAILHGESGKLZMWVMBYIZHLLPI");

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
    msg.setTimeStamp(0.35057157985);
    msg.setSource(53723U);
    msg.setSourceEntity(179U);
    msg.setDestination(21675U);
    msg.setDestinationEntity(20U);
    msg.group_name.assign("JESKOAWXZLJPQYSTWFJPVPOSKJDRDUIPQONCABEJLCPZCKRUBXTGLGTWPYZGDTMLTGJXSXCNNAFQGBTZJGFEPCBFGUMOLSCFNGXOVUITRYVXYAKJ");
    msg.formation_name.assign("FCASHUKZUOPUGVNEBCTVYQLHILTQGQTPRAFXMGKMYVFRESROZOVTYZFSYIEDXKHFOAYEWPZGLNBXMWJSPISLFSMZRHKKUNOHXMQOWOVDCEIAWQNUUPMUADTLSNKZJUINBAVBCKJQCQSPYOQEFXTSJYGAOQJLNPTLTIIREBRZUEPYMAGWEBCHWXDDDCMJIRUSIVTZAZWXLLKJFXMMCVGLBWXAH");
    msg.plan_id.assign("CISBSRPEZRIXSSDKMUWALLAWOVSXKOVDJUKNWYFP");
    msg.description.assign("ETJRRGZDQYRZXJSQRITPMSTRHBFMZPYAMASNUUDXQHXWJUQCIVEFHLDCBLGAKEVDUPRXPLJBIVHBCUPXIHCERLTYVVQTHIGAYGBYRLMLOVINEDIWJDSCMQKQP");
    msg.leader_speed = 0.0544497469003;
    msg.leader_bank_lim = 0.631446835741;
    msg.pos_sim_err_lim = 0.832904358929;
    msg.pos_sim_err_wrn = 0.807575926868;
    msg.pos_sim_err_timeout = 29091U;
    msg.converg_max = 0.439559907846;
    msg.converg_timeout = 7554U;
    msg.comms_timeout = 33533U;
    msg.turb_lim = 0.0353484762224;
    msg.custom.assign("OHJIBTUFWATQVG");

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
    msg.setTimeStamp(0.205377006655);
    msg.setSource(13528U);
    msg.setSourceEntity(246U);
    msg.setDestination(7462U);
    msg.setDestinationEntity(197U);
    msg.group_name.assign("OTGGZRZNFAVWGYLVUSGJICCOJSLONPQXVRWJEKJCKEDBZEFUSCOKERQRNIKUYPBEJDHWSLDFHOWWRAZVFOFJBUUHCYYOMKI");
    msg.formation_name.assign("AJJLVRNZVJEWYKOXFTZMFYBZQDQTXZLLVKIOIZGONCGFYSMNUPRPGACWQVOBRBHHRSHDUXLTTNELYEBIYDWLDNPWJRJCICNOYCAVLHHXYUELKXPKPHTJAANGMUBGJUKQKGQXDMFLPHJOAGFVGZRCTMQUUMXERHVWEDGZNCAEEHZFXWPIOFIMRATMAWQUOIQBXYIVUSSGEDNCUSPKV");
    msg.plan_id.assign("ZFVFNFMBMEIBLSLCQALXFEFSKQPCPQMDNCVVNGBQOSJNTGIWVWH");
    msg.description.assign("NCLCNNYZHJGKKZRQMGKIABGJYVSBOZMXYTRQDHTZLDUYUVSNPJIPPANEHUJDHBHEMBIPTRDIHFNMESJFCPVAKFLPRBBBFTAOQEHTKNOSTGMRVALBYOEGLSDSKEDULMCFGGHSPWZZWNKXWLHASKGXANIQVJKQMTAUZXJGXEFUEWIBLQDCMZQMDWZAUQTKIXIFYXLSCJ");
    msg.leader_speed = 0.383865698187;
    msg.leader_bank_lim = 0.05323990912;
    msg.pos_sim_err_lim = 0.709672338797;
    msg.pos_sim_err_wrn = 0.219333352172;
    msg.pos_sim_err_timeout = 6106U;
    msg.converg_max = 0.280783195178;
    msg.converg_timeout = 27351U;
    msg.comms_timeout = 29282U;
    msg.turb_lim = 0.25039303469;
    msg.custom.assign("NWRPAXZRIDFMRISBWINXZXSEAQWJYRJCIACCTXDYJYOQLBOVDVEMUAVMPHZJIWZJZ");

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
    msg.setTimeStamp(0.112707020164);
    msg.setSource(18117U);
    msg.setSourceEntity(250U);
    msg.setDestination(28391U);
    msg.setDestinationEntity(218U);
    msg.group_name.assign("HCUITLPGGRNEUCEIYTZBRATJOHZZOCBPIJVCMHCSCTWNZDSIJMDACPYULDTGQAFV");
    msg.formation_name.assign("RUREUUEVBSLACMLOGRZKYYWXWZBKXQLBVGQRIFQCDCYGIVCEHIATSCBONDOWXUTLAKGMDSUUWZROQCCPSNWFCTDJFQJAHAZEYAPY");
    msg.plan_id.assign("LJKJGMWYMRUQEMISOUJRBHFZWKMZKXDOHGETZEIKUVVDMIAGCJCJRNQFHLQVFANZZMGBUKTSHQFETLUVLJUGPAXYOGEVPUXXVPORWCDOOAUNXDNZOIEJRANRSYMDCIALCQYKVSNWFKYBPDHXGPFISCLAXMSGYUSFUQEYHIWTBSSWEETBLTTYBFWBVQAJJIVYNPBGADSXR");
    msg.description.assign("VKVFSHYMPXDHRYMNCIWJTTDXUHWCNJHAUFWWCGZOSHGUMQATENKBNIWNIKSREU");
    msg.leader_speed = 0.116581338248;
    msg.leader_bank_lim = 0.80740860586;
    msg.pos_sim_err_lim = 0.866686990625;
    msg.pos_sim_err_wrn = 0.389856811152;
    msg.pos_sim_err_timeout = 35640U;
    msg.converg_max = 0.406960002765;
    msg.converg_timeout = 14043U;
    msg.comms_timeout = 14577U;
    msg.turb_lim = 0.124325516571;
    msg.custom.assign("SEIXYTUGWIXZJTCNJYIMXVCHTUIOYDCNPVLLRHOMEEQAZNHYYJVTERMOUNLWBWUUWQFROYSQZACXUNSPABMLDKNPSKVABL");

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
    msg.setTimeStamp(0.285990350826);
    msg.setSource(50637U);
    msg.setSourceEntity(61U);
    msg.setDestination(6084U);
    msg.setDestinationEntity(107U);
    msg.control_src = 4483U;
    msg.control_ent = 154U;
    msg.timeout = 0.843978817386;
    msg.loiter_radius = 0.997903168683;
    msg.altitude_interval = 0.0665667905255;

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
    msg.setTimeStamp(0.115435061833);
    msg.setSource(5425U);
    msg.setSourceEntity(113U);
    msg.setDestination(1687U);
    msg.setDestinationEntity(66U);
    msg.control_src = 8692U;
    msg.control_ent = 244U;
    msg.timeout = 0.612488732729;
    msg.loiter_radius = 0.302850186587;
    msg.altitude_interval = 0.485973175351;

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
    msg.setTimeStamp(0.701802602636);
    msg.setSource(43227U);
    msg.setSourceEntity(126U);
    msg.setDestination(58558U);
    msg.setDestinationEntity(25U);
    msg.control_src = 34139U;
    msg.control_ent = 139U;
    msg.timeout = 0.139180527361;
    msg.loiter_radius = 0.714832252129;
    msg.altitude_interval = 0.302596142086;

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
    msg.setTimeStamp(0.753632301257);
    msg.setSource(62230U);
    msg.setSourceEntity(241U);
    msg.setDestination(32887U);
    msg.setDestinationEntity(31U);
    msg.flags = 46U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.914157185697;
    tmp_msg_0.speed_units = 238U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0715044103287;
    tmp_msg_1.z_units = 22U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.400430874239;
    msg.lon = 0.779191394215;
    msg.radius = 0.76437687743;

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
    msg.setTimeStamp(0.389337704712);
    msg.setSource(62114U);
    msg.setSourceEntity(79U);
    msg.setDestination(59217U);
    msg.setDestinationEntity(111U);
    msg.flags = 69U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.190743681429;
    tmp_msg_0.speed_units = 121U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.576451836192;
    tmp_msg_1.z_units = 10U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.755593888089;
    msg.lon = 0.975549359909;
    msg.radius = 0.374894333524;

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
    msg.setTimeStamp(0.116909117387);
    msg.setSource(30567U);
    msg.setSourceEntity(215U);
    msg.setDestination(10495U);
    msg.setDestinationEntity(191U);
    msg.flags = 93U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0534653507305;
    tmp_msg_0.speed_units = 212U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.759568684636;
    tmp_msg_1.z_units = 239U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.310767353824;
    msg.lon = 0.21218940356;
    msg.radius = 0.318436849546;

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
    msg.setTimeStamp(0.565011771298);
    msg.setSource(27818U);
    msg.setSourceEntity(34U);
    msg.setDestination(23852U);
    msg.setDestinationEntity(0U);
    msg.control_src = 16803U;
    msg.control_ent = 84U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 77U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.102180700617;
    tmp_tmp_msg_0_0.speed_units = 78U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.317642261103;
    tmp_tmp_msg_0_1.z_units = 35U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.608640452936;
    tmp_msg_0.lon = 0.952625126675;
    tmp_msg_0.radius = 0.0313921098384;
    msg.reference.set(tmp_msg_0);
    msg.state = 98U;
    msg.proximity = 236U;

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
    msg.setTimeStamp(0.206341018084);
    msg.setSource(52581U);
    msg.setSourceEntity(33U);
    msg.setDestination(52612U);
    msg.setDestinationEntity(76U);
    msg.control_src = 2487U;
    msg.control_ent = 253U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 235U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.330223908986;
    tmp_tmp_msg_0_0.speed_units = 253U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.655175833001;
    tmp_tmp_msg_0_1.z_units = 4U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.175043955878;
    tmp_msg_0.lon = 0.442980598521;
    tmp_msg_0.radius = 0.695690564128;
    msg.reference.set(tmp_msg_0);
    msg.state = 158U;
    msg.proximity = 172U;

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
    msg.setTimeStamp(0.794518704166);
    msg.setSource(21696U);
    msg.setSourceEntity(226U);
    msg.setDestination(58028U);
    msg.setDestinationEntity(63U);
    msg.control_src = 6582U;
    msg.control_ent = 18U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 46U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.577471820648;
    tmp_tmp_msg_0_0.speed_units = 2U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.510514805118;
    tmp_tmp_msg_0_1.z_units = 198U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.587553017873;
    tmp_msg_0.lon = 0.895752818683;
    tmp_msg_0.radius = 0.0129293049003;
    msg.reference.set(tmp_msg_0);
    msg.state = 130U;
    msg.proximity = 71U;

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
    msg.setTimeStamp(0.310595705133);
    msg.setSource(2755U);
    msg.setSourceEntity(86U);
    msg.setDestination(27569U);
    msg.setDestinationEntity(138U);
    msg.ax_cmd = 0.654962987687;
    msg.ay_cmd = 0.645935494081;
    msg.az_cmd = 0.996060827178;
    msg.ax_des = 0.664636962191;
    msg.ay_des = 0.989157818782;
    msg.az_des = 0.611200126978;
    msg.virt_err_x = 0.320680572466;
    msg.virt_err_y = 0.721509471339;
    msg.virt_err_z = 0.537638998377;
    msg.surf_fdbk_x = 0.236870697232;
    msg.surf_fdbk_y = 0.805358515867;
    msg.surf_fdbk_z = 0.00804790237816;
    msg.surf_unkn_x = 0.756654595666;
    msg.surf_unkn_y = 0.656378309364;
    msg.surf_unkn_z = 0.452222834046;
    msg.ss_x = 0.822617742908;
    msg.ss_y = 0.771430622836;
    msg.ss_z = 0.616396115073;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("EYYQZJRWTRFBHMDLDSDREARJVIZNGRVNEOLMBJHBPZGNWLOUSQEAAQPSCGYNICBSKWXJZMGTTDUEMPHYCAAQBPLXGUYDBZLWZSNFEUWQVMHRUOMPQJIKBTMCXOLWACCXIJKJMRTVMUKHGTJJZRNQKGIQCUKYCZOVOUFIKFNCFUWGHPSWDDETIELVHFBMOSYSVFRLTYONBSLXINTKRHFPXODACWKPSNY");
    tmp_msg_0.dist = 0.355531755802;
    tmp_msg_0.err = 0.768071264527;
    tmp_msg_0.ctrl_imp = 0.824323435094;
    tmp_msg_0.rel_dir_x = 0.0919836475236;
    tmp_msg_0.rel_dir_y = 0.694363117272;
    tmp_msg_0.rel_dir_z = 0.0186123548111;
    tmp_msg_0.err_x = 0.624357898533;
    tmp_msg_0.err_y = 0.699409650409;
    tmp_msg_0.err_z = 0.758849695977;
    tmp_msg_0.rf_err_x = 0.614279696225;
    tmp_msg_0.rf_err_y = 0.312891401416;
    tmp_msg_0.rf_err_z = 0.606698381454;
    tmp_msg_0.rf_err_vx = 0.206048440052;
    tmp_msg_0.rf_err_vy = 0.666417105441;
    tmp_msg_0.rf_err_vz = 0.585432203563;
    tmp_msg_0.ss_x = 0.412659582004;
    tmp_msg_0.ss_y = 0.871431522579;
    tmp_msg_0.ss_z = 0.135589996702;
    tmp_msg_0.virt_err_x = 0.788701526957;
    tmp_msg_0.virt_err_y = 0.955614880074;
    tmp_msg_0.virt_err_z = 0.054908659033;
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
    msg.setTimeStamp(0.0159121030413);
    msg.setSource(15514U);
    msg.setSourceEntity(72U);
    msg.setDestination(40885U);
    msg.setDestinationEntity(159U);
    msg.ax_cmd = 0.46572928488;
    msg.ay_cmd = 0.363523993135;
    msg.az_cmd = 0.543816441166;
    msg.ax_des = 0.177990812795;
    msg.ay_des = 0.0364993262612;
    msg.az_des = 0.741711578486;
    msg.virt_err_x = 0.153761512073;
    msg.virt_err_y = 0.198984727956;
    msg.virt_err_z = 0.137952866049;
    msg.surf_fdbk_x = 0.78321595262;
    msg.surf_fdbk_y = 0.271927008195;
    msg.surf_fdbk_z = 0.0488888417661;
    msg.surf_unkn_x = 0.588991999683;
    msg.surf_unkn_y = 0.759580540827;
    msg.surf_unkn_z = 0.517964911199;
    msg.ss_x = 0.465313624468;
    msg.ss_y = 0.758971631764;
    msg.ss_z = 0.420998279659;

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
    msg.setTimeStamp(0.575374259372);
    msg.setSource(33690U);
    msg.setSourceEntity(75U);
    msg.setDestination(18383U);
    msg.setDestinationEntity(40U);
    msg.ax_cmd = 0.306177435856;
    msg.ay_cmd = 0.775303682102;
    msg.az_cmd = 0.379723428262;
    msg.ax_des = 0.494697905406;
    msg.ay_des = 0.0221922648951;
    msg.az_des = 0.299977419328;
    msg.virt_err_x = 0.401274950067;
    msg.virt_err_y = 0.862347709165;
    msg.virt_err_z = 0.307006079194;
    msg.surf_fdbk_x = 0.177371185016;
    msg.surf_fdbk_y = 0.950236194699;
    msg.surf_fdbk_z = 0.966957421996;
    msg.surf_unkn_x = 0.878372653163;
    msg.surf_unkn_y = 0.876238986207;
    msg.surf_unkn_z = 0.800938330687;
    msg.ss_x = 0.372823492053;
    msg.ss_y = 0.702430687156;
    msg.ss_z = 0.0678738405699;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("JWUUYKCFDHJSPJXEZKMDATRBPIXYPOQKPHJIQUPEGFYDBYVQMLNLUWBSFPCATNIQRNZFYDGFHRITTQTXBIKBLDGSMWCNOJIZQOEOGKSRNTACRWKUHNZXOHPPECSXUOBBVANJGFZELTJ");
    tmp_msg_0.dist = 0.992952536727;
    tmp_msg_0.err = 0.940603069704;
    tmp_msg_0.ctrl_imp = 0.392026361616;
    tmp_msg_0.rel_dir_x = 0.990678796488;
    tmp_msg_0.rel_dir_y = 0.345460916078;
    tmp_msg_0.rel_dir_z = 0.0395934119887;
    tmp_msg_0.err_x = 0.148951663143;
    tmp_msg_0.err_y = 0.857987917355;
    tmp_msg_0.err_z = 0.470176269454;
    tmp_msg_0.rf_err_x = 0.0894273330791;
    tmp_msg_0.rf_err_y = 0.728641445322;
    tmp_msg_0.rf_err_z = 0.358303020469;
    tmp_msg_0.rf_err_vx = 0.33534646075;
    tmp_msg_0.rf_err_vy = 0.729851468355;
    tmp_msg_0.rf_err_vz = 0.363421478634;
    tmp_msg_0.ss_x = 0.901516900543;
    tmp_msg_0.ss_y = 0.33350755055;
    tmp_msg_0.ss_z = 0.508330684516;
    tmp_msg_0.virt_err_x = 0.627145615943;
    tmp_msg_0.virt_err_y = 0.597855189441;
    tmp_msg_0.virt_err_z = 0.501274314856;
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
    msg.setTimeStamp(0.824240886128);
    msg.setSource(41096U);
    msg.setSourceEntity(213U);
    msg.setDestination(61745U);
    msg.setDestinationEntity(129U);
    msg.s_id.assign("BUYAQZEILKDAHJZFVDGNAQCEMQPEKPOKEMFKUMMSQRVYSSMIMAQCITSFZACHDPYUWCROJYDLOUIGHJEFYFKTZQVPURPLFNTBTTIDXLLXNSNRRMUZZGWGQOHLPJBWQWQTAWOZGXSLNGYNIWXRVFGHVTHXEDUOVUAKJIABBBWJDXWMNNVKOMHCFCBTEVJZGBAPCPOBGOURILZVDPWESRTNX");
    msg.dist = 0.59710012378;
    msg.err = 0.38726491708;
    msg.ctrl_imp = 0.892869500509;
    msg.rel_dir_x = 0.0933760639331;
    msg.rel_dir_y = 0.306944993626;
    msg.rel_dir_z = 0.76424525934;
    msg.err_x = 0.559336035027;
    msg.err_y = 0.684708772143;
    msg.err_z = 0.659501694835;
    msg.rf_err_x = 0.498064226785;
    msg.rf_err_y = 0.958940457092;
    msg.rf_err_z = 0.0517858048326;
    msg.rf_err_vx = 0.563198251773;
    msg.rf_err_vy = 0.227579928519;
    msg.rf_err_vz = 0.527035190393;
    msg.ss_x = 0.685718854792;
    msg.ss_y = 0.346921024382;
    msg.ss_z = 0.517300531423;
    msg.virt_err_x = 0.740505064874;
    msg.virt_err_y = 0.496334378637;
    msg.virt_err_z = 0.0804221952119;

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
    msg.setTimeStamp(0.306770521232);
    msg.setSource(11187U);
    msg.setSourceEntity(250U);
    msg.setDestination(5213U);
    msg.setDestinationEntity(206U);
    msg.s_id.assign("PGYLOMSHAXBUPGHWFBDCLABHNZKENJWYYESCKLEHEXHSZPRMYWIKNORTZVLAQFIYCLKXOMCJGYMMCNJUZJRUTNQIVVFBRJZVNAAVDKVADRBCLDQCSMZRSOKCQPTQRFGVZTWWJZDOPKQUTLAO");
    msg.dist = 0.810546662418;
    msg.err = 0.501300478994;
    msg.ctrl_imp = 0.925527778976;
    msg.rel_dir_x = 0.330132194188;
    msg.rel_dir_y = 0.597994408839;
    msg.rel_dir_z = 0.215169850301;
    msg.err_x = 0.514363240195;
    msg.err_y = 0.247791305698;
    msg.err_z = 0.6616911343;
    msg.rf_err_x = 0.0962935487679;
    msg.rf_err_y = 0.110185897592;
    msg.rf_err_z = 0.148445326538;
    msg.rf_err_vx = 0.955324977063;
    msg.rf_err_vy = 0.798298394921;
    msg.rf_err_vz = 0.568281543666;
    msg.ss_x = 0.512323940925;
    msg.ss_y = 0.617864939495;
    msg.ss_z = 0.996014596634;
    msg.virt_err_x = 0.0495748920725;
    msg.virt_err_y = 0.665222383283;
    msg.virt_err_z = 0.552406513991;

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
    msg.setTimeStamp(0.51777655614);
    msg.setSource(53906U);
    msg.setSourceEntity(60U);
    msg.setDestination(23334U);
    msg.setDestinationEntity(176U);
    msg.s_id.assign("BHNTVYBRUBJTPY");
    msg.dist = 0.144734821677;
    msg.err = 0.561889917269;
    msg.ctrl_imp = 0.172267153764;
    msg.rel_dir_x = 0.0256117658169;
    msg.rel_dir_y = 0.628781949645;
    msg.rel_dir_z = 0.125713108889;
    msg.err_x = 0.00985759767451;
    msg.err_y = 0.500121956773;
    msg.err_z = 0.981031051399;
    msg.rf_err_x = 0.433479626369;
    msg.rf_err_y = 0.930639076843;
    msg.rf_err_z = 0.382260955998;
    msg.rf_err_vx = 0.696706445224;
    msg.rf_err_vy = 0.331772148069;
    msg.rf_err_vz = 0.384468122102;
    msg.ss_x = 0.508877121508;
    msg.ss_y = 0.62848534656;
    msg.ss_z = 0.180485944447;
    msg.virt_err_x = 0.267663181017;
    msg.virt_err_y = 0.551551283843;
    msg.virt_err_z = 0.526134568647;

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
    msg.setTimeStamp(0.748230764856);
    msg.setSource(27732U);
    msg.setSourceEntity(22U);
    msg.setDestination(64499U);
    msg.setDestinationEntity(98U);
    msg.timeout = 36031U;
    msg.rpm = 0.00428370025486;
    msg.direction = 211U;
    msg.custom.assign("MSGECXONFJQRFTNHVUDERBKJASTOWVUFLTJHFMVKGDPVPZIUIFGLAMNSKXYBATCQUASQPPJJZQCDQJFXUHPWEQCNYTEHWQYTUKXBVIRIDYBWLEDXRACRWZQSLDHIFOVHKALCGNEKTIBLJFKMBLQBEMZUVMH");

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
    msg.setTimeStamp(0.915746263819);
    msg.setSource(34042U);
    msg.setSourceEntity(3U);
    msg.setDestination(63068U);
    msg.setDestinationEntity(40U);
    msg.timeout = 6524U;
    msg.rpm = 0.347239896684;
    msg.direction = 169U;
    msg.custom.assign("AAJMDHBNRVENAYCYYZHUTRBGBPGOLGUWZEFEKAUIUGXZMFTUSOFSYKMYLKMKGEBEYEHJTFLUUKBLCINLWTXFENZYKCUINLXWHMHXWFPJKKDJHROIRYDXNFCXZQRIXVQOAQHSXUZSBIJAOWMSSETHODSQCCVJOSDVTTRBXWISBJJZRJLZGPQTZNPIVDXRLG");

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
    msg.setTimeStamp(0.248360202294);
    msg.setSource(51679U);
    msg.setSourceEntity(26U);
    msg.setDestination(50487U);
    msg.setDestinationEntity(185U);
    msg.timeout = 4776U;
    msg.rpm = 0.242868502355;
    msg.direction = 98U;
    msg.custom.assign("AGNNAKRJRIKWGEKADKXCEOLSQUOYWBPOCHEZQZTIPLADKTZMLMMQIMNLGMTBAUVSVIFCERDSMTSUQQNUPENYICKAYDJKQZOXFKCHHBKWTURHHXDOVJVUHPBDBURRZBQWSFINFOPLLOGZZFIYEUGYDWXZNMIHBSQEVYJBVGWMHTEKPGXCCXQSUJXLIAHYACYMFAVFHTTVLSXFRLNSCNNFBADOJJWCUVZM");

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
    msg.setTimeStamp(0.830222138497);
    msg.setSource(533U);
    msg.setSourceEntity(37U);
    msg.setDestination(41360U);
    msg.setDestinationEntity(99U);
    msg.formation_name.assign("MZCBYDZRXKELZSCJTIJERHWZKQXFQEKVLZHCQVURPFTKQDVLWHNUUIDOZLJMSDVZBLWQVNEZGTNTGHDODPMWRRJYUANTXMNBWHEOGHXJWOMQMEVXTUSPEJFADAGRKQCKFMWBPFALY");
    msg.type = 150U;
    msg.op = 183U;
    msg.group_name.assign("NKPYVPLJHXJEAIHMFSTSUJRGOLPQHFCOOXSHVDLWSWPKENFBJVBLVCNAEEITXSQRQTTZMOAXJEYNODUQBQDTJAKYOCQZGFHOJIPZMRDTUYAGAAWJBBETDJMCDSUGIUZYSZWNAVRDJZUXOWVBMYFUGCRGBMVYCGQMLPIPDLNECSCZUXVLUXYLPXHHZGEVWHIDOKSBDKVHCKZYWSBRZHOGFWIRAKPENTGXAMQMFEKRKPIBIRQNFNUNRKCI");
    msg.plan_id.assign("VEGWCEWAHGVWB");
    msg.description.assign("COHBZJYPFKEPSHWWTTBJMNWQVLYXCGVBPFQSXWICPQTTLLWYAESMBSCIHLALTVLDZCEDN");
    msg.reference_frame = 201U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 61211U;
    tmp_msg_0.off_x = 0.628819666234;
    tmp_msg_0.off_y = 0.124134194636;
    tmp_msg_0.off_z = 0.157659213074;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.403819621608;
    msg.leader_speed_min = 0.278654528523;
    msg.leader_speed_max = 0.760593487694;
    msg.leader_alt_min = 0.538906502639;
    msg.leader_alt_max = 0.711463234166;
    msg.pos_sim_err_lim = 0.662123741049;
    msg.pos_sim_err_wrn = 0.623673277825;
    msg.pos_sim_err_timeout = 23066U;
    msg.converg_max = 0.875439219562;
    msg.converg_timeout = 6114U;
    msg.comms_timeout = 63252U;
    msg.turb_lim = 0.987786549404;
    msg.custom.assign("IJLWOQPKOWQPZVXMLSZOVDHGMZRNLBUQKEFNOWJNYFKMROOZDJNXZEYXDVWGJZBLGILIHEYWMEMPWXFKZPFCXIBCCXAVTIGHYAWQOWCVULJURYRUNCSCKSSUBWUDOGDATGPBTRIYWEZXKVHBDCGAFLMIBJEGDJOSTEFBPFFRXJCYASKQDMREA");

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
    msg.setTimeStamp(0.267469672686);
    msg.setSource(47930U);
    msg.setSourceEntity(180U);
    msg.setDestination(6288U);
    msg.setDestinationEntity(16U);
    msg.formation_name.assign("DEKQDGVFHGIVZRBHZQVAVCZMOPRNPENFMIXRBWCYKNIHIUFMRAPTITHVPNCYSWJTHELQGAFCYLOREYFQTCDFIMSMGWDWAFOGHLECMEVPGTUVJNHAYZKBAYSSKXQXWJJNNSXWZPHZAWUURLKHIJLEHTSZQPPKUQSRCOMSOTUCFYCAQVZXBMOOZGM");
    msg.type = 165U;
    msg.op = 74U;
    msg.group_name.assign("LHQWJPZRUUDIVMGOCODPJCEGHQIEYRAOAVNWXQDNWJMDCIGLYJTIEVQXRFMADOHGDEWEAYLRUFSSIYKKSRZJXOMXXQOTPAENPWFVWJMACTRIFPPABHNHUSCTSONEYPTDZVRTQHWTYDUVSISFKQFRUYISMUZRGKYNBKLVQCHZXBDWLLOBHMPIMNYCLXQNUSZIMQKFBNHCCWWJZTSLTZVGPBLEZOMJUDKFBPEAZJAEXJGFRBTGNOBLCA");
    msg.plan_id.assign("XSYGTDKSBQVWNEDPYZMNPXTALOPJWYDEQZCXFSPRZRLXJUZAKCFBERXJLZQGLGLLRVOHFGIYNBQKFKLMPZYFEEHVVOHMGIFLDMEKJCTHTOCJVSAYEFUYQPAUCFWWTJEICWSWRQNJ");
    msg.description.assign("WIQDKGLGGYEJZMJYLVUESENKUIAZIBLSGAYXLIQOTCRTWYGLWZNQNDRQEVAILNPWSHCFLWBDOCIJPFARETMNCUAKWVXMVPYPRQYLIMKITFPTRVXTEOKCPQGFTUZHBWMBQNMSLHJJZNQWHCVOSFZUXSACABOXOQTHJ");
    msg.reference_frame = 140U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32782U;
    tmp_msg_0.off_x = 0.520162695192;
    tmp_msg_0.off_y = 0.181429137337;
    tmp_msg_0.off_z = 0.521299703088;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.187498453962;
    msg.leader_speed_min = 0.942264283231;
    msg.leader_speed_max = 0.0294996619773;
    msg.leader_alt_min = 0.0876899720094;
    msg.leader_alt_max = 0.0650048639078;
    msg.pos_sim_err_lim = 0.235439850882;
    msg.pos_sim_err_wrn = 0.549179810676;
    msg.pos_sim_err_timeout = 62282U;
    msg.converg_max = 0.891319345747;
    msg.converg_timeout = 63645U;
    msg.comms_timeout = 12696U;
    msg.turb_lim = 0.451022852265;
    msg.custom.assign("KAFKEZOQYSMAPIVWHZNLMUNMSBOGWFXXNYUUREPRDOMHFYGLKAIYLDNJIAFARVFFOWUSVFJMUDHPJRVWAQURXBXFCCKTJBNMBSSJJIAKVQZTSEVFZISVZCBJDQJXPYXPEQARSCBSKUMZPWGKRCRGILHTHICLZDQCCCNTQSRYGIYKXTNPQMIVMKWLQHEGZJDWYHFXOPIPOYHAVALEWUGUNEX");

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
    msg.setTimeStamp(0.667187848032);
    msg.setSource(56358U);
    msg.setSourceEntity(199U);
    msg.setDestination(51407U);
    msg.setDestinationEntity(112U);
    msg.formation_name.assign("JZBZKHSSHXTHKZUKQNTDHTXRZCNLGANBYUUTUTAWMIIGGECLIADZROY");
    msg.type = 182U;
    msg.op = 172U;
    msg.group_name.assign("IAPDLJKRAQXOCYZIZPOXDVXQHDFSPGHIKLHXQBBSRCGUIUHYFLVSGOKDBUKIDMVZOTIVZFCZ");
    msg.plan_id.assign("AJSXZGSIUAHWZUREZZVPCGRGYAIHJATYQVGTUMQQFYFWKNMTPCJQUMABHITCJWXIMCJOLLZYSFBDQGGSXDVYAXMHSEPPHAOFNKPDYEEEQCMZCKSNMKKORBUPUKXFYILLLSDXJCW");
    msg.description.assign("FIXSWBNUAZQFHOFQNUMMRZXPKMKLVMBFSBILLMTODVMHXZQLGGVHWNSIOBKBBSQPSXIQYTWCFUIVLVYLWGGXNTOTRTTQAOUJSPQGPPDCMVJRQBEIPWEHCBVJCRRHJHZKJFIPBTUALAEZGAJYWBIHIENNPNSYXQZWDAMSKXVCTDXRYNDMKNCOOHEVKCUGXYHPZZDYDKXUEUQVSOJEFOAFROADIYTMWALJY");
    msg.reference_frame = 197U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18475U;
    tmp_msg_0.off_x = 0.0762267533231;
    tmp_msg_0.off_y = 0.865644679484;
    tmp_msg_0.off_z = 0.297926297497;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.96972670255;
    msg.leader_speed_min = 0.44466066122;
    msg.leader_speed_max = 0.496285345994;
    msg.leader_alt_min = 0.702419068474;
    msg.leader_alt_max = 0.0139664473368;
    msg.pos_sim_err_lim = 0.66040487387;
    msg.pos_sim_err_wrn = 0.495007350032;
    msg.pos_sim_err_timeout = 64001U;
    msg.converg_max = 0.890188198727;
    msg.converg_timeout = 11989U;
    msg.comms_timeout = 4004U;
    msg.turb_lim = 0.748234333605;
    msg.custom.assign("FBQLZWTKGUYLRSAAQVKFKOMNLSUTWAGMTCOCXRHKAHODPXZJOBLQPLCNOPMKQEHQYYEEIVOUWZPJPDXAYOFEBTYWRNBRBIJOPIYFUPKEWYJNHDCXCMJUEVPTSKWUMNXSOQGDTDXHJUZUVTRZRLFPULSQCJGGIWTMAAPIWNFGWRDXAINCVDXWJSBZMAVQSIENSNXTVYCGL");

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
    msg.setTimeStamp(0.857506081331);
    msg.setSource(17092U);
    msg.setSourceEntity(61U);
    msg.setDestination(42331U);
    msg.setDestinationEntity(116U);
    msg.timeout = 40390U;
    msg.lat = 0.392326916652;
    msg.lon = 0.8921995033;
    msg.z = 0.984552320011;
    msg.z_units = 238U;
    msg.speed = 0.484973811007;
    msg.speed_units = 14U;
    msg.custom.assign("URAXQEKHYYNQMZIGERZSVIPTHNSMCGJOZSKSIGDTQPODLEHHVDZPJWEVRPJNCELARWAUMWVQAZIODZUXHDSNNVRZBELBPWDACQJFCKLVPUWGCFXCZUDTLSFBMPLKTOFOUTVTJARIQWEMSRVPUIZTYWKXNHBTGM");

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
    msg.setTimeStamp(0.181796253173);
    msg.setSource(31014U);
    msg.setSourceEntity(16U);
    msg.setDestination(42332U);
    msg.setDestinationEntity(193U);
    msg.timeout = 26598U;
    msg.lat = 0.0572296946905;
    msg.lon = 0.94488187442;
    msg.z = 0.398856481249;
    msg.z_units = 103U;
    msg.speed = 0.0913809815044;
    msg.speed_units = 112U;
    msg.custom.assign("CSFGSRSSVQVKWSGOELMLZZFBFQCAEJPLVBZJLIVNWVRIXUUDKPHLVJHCPSRBXRPCIWJM");

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
    msg.setTimeStamp(0.188687425014);
    msg.setSource(41502U);
    msg.setSourceEntity(197U);
    msg.setDestination(43936U);
    msg.setDestinationEntity(2U);
    msg.timeout = 27708U;
    msg.lat = 0.773736165086;
    msg.lon = 0.436695276804;
    msg.z = 0.437292450819;
    msg.z_units = 45U;
    msg.speed = 0.0201263871479;
    msg.speed_units = 233U;
    msg.custom.assign("GJAQMONLNBPUKCLEPETXYMTIEXXCXIJDSRPLJCUTJDRMVZWBNMZUECTGQHHNEFRQUSXYGUWIMUOVQHPUTWGGYZGBRBOSFWZFDTGFFWKRIBXOBFNVHDA");

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
    msg.setTimeStamp(0.381881904145);
    msg.setSource(25581U);
    msg.setSourceEntity(205U);
    msg.setDestination(17064U);
    msg.setDestinationEntity(48U);
    msg.timeout = 38137U;
    msg.lat = 0.301324791068;
    msg.lon = 0.424160936045;
    msg.z = 0.833405688535;
    msg.z_units = 124U;
    msg.speed = 0.878960121462;
    msg.speed_units = 17U;
    msg.custom.assign("KQBZCMLAXSGHRQGUJKTPWXJTLDHJKWJHSQPNVHNKUZQVQPNTDXTRBJEMTPHIYZOABRYYMMEOPCZSWEMBJPOREPLSQRLYEDCRGPMFNSZUYOVIBLNOLXUIWRYUNEWIWDTKXBUJMSGOHKZQMWDCBKYFAFNEHBDGVZGGFQTUCCURQLEHLGF");

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
    msg.setTimeStamp(0.714639993022);
    msg.setSource(16871U);
    msg.setSourceEntity(48U);
    msg.setDestination(53964U);
    msg.setDestinationEntity(28U);
    msg.timeout = 28107U;
    msg.lat = 0.548651143284;
    msg.lon = 0.0727439363203;
    msg.z = 0.136752251616;
    msg.z_units = 115U;
    msg.speed = 0.467342992992;
    msg.speed_units = 213U;
    msg.custom.assign("QPGLWSHNNKRHNTNXZXWLFAWPPYHHLCIU");

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
    msg.setTimeStamp(0.0492623756185);
    msg.setSource(47824U);
    msg.setSourceEntity(194U);
    msg.setDestination(52215U);
    msg.setDestinationEntity(112U);
    msg.timeout = 10949U;
    msg.lat = 0.915955579131;
    msg.lon = 0.499396109812;
    msg.z = 0.716564055068;
    msg.z_units = 181U;
    msg.speed = 0.0670182879028;
    msg.speed_units = 56U;
    msg.custom.assign("BVCEKBOTIQSLHIAIFRXJMBJEPTEMTORLPXWRFSBVCCXKUZOFWKKVAWEOGNXJTVVMQEOSZHNMWTYUPIEGKYFSQJLICLZUWYGSFX");

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
    msg.setTimeStamp(0.446225385403);
    msg.setSource(25447U);
    msg.setSourceEntity(169U);
    msg.setDestination(42832U);
    msg.setDestinationEntity(48U);
    msg.arrival_time = 0.218959630363;
    msg.lat = 0.13569154823;
    msg.lon = 0.78788365636;
    msg.z = 0.243664457389;
    msg.z_units = 156U;
    msg.travel_z = 0.617044938491;
    msg.travel_z_units = 14U;
    msg.delayed = 250U;

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
    msg.setTimeStamp(0.838579093246);
    msg.setSource(54203U);
    msg.setSourceEntity(76U);
    msg.setDestination(17610U);
    msg.setDestinationEntity(245U);
    msg.arrival_time = 0.000185944689348;
    msg.lat = 0.101789509339;
    msg.lon = 0.657747171245;
    msg.z = 0.686941555683;
    msg.z_units = 145U;
    msg.travel_z = 0.136764705037;
    msg.travel_z_units = 208U;
    msg.delayed = 91U;

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
    msg.setTimeStamp(0.845357869136);
    msg.setSource(49288U);
    msg.setSourceEntity(47U);
    msg.setDestination(54975U);
    msg.setDestinationEntity(140U);
    msg.arrival_time = 0.982309541496;
    msg.lat = 0.266254164489;
    msg.lon = 0.798744330263;
    msg.z = 0.43334690058;
    msg.z_units = 55U;
    msg.travel_z = 0.209260749219;
    msg.travel_z_units = 17U;
    msg.delayed = 127U;

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
    msg.setTimeStamp(0.36731839344);
    msg.setSource(4995U);
    msg.setSourceEntity(60U);
    msg.setDestination(43596U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.624194305377;
    msg.lon = 0.0483615985313;
    msg.z = 0.238650491331;
    msg.z_units = 2U;
    msg.speed = 0.0307017400592;
    msg.speed_units = 11U;
    msg.bearing = 0.742543205726;
    msg.cross_angle = 0.278998766647;
    msg.width = 0.439379254521;
    msg.length = 0.310163615192;
    msg.coff = 97U;
    msg.angaperture = 0.342192085179;
    msg.range = 18221U;
    msg.overlap = 172U;
    msg.flags = 142U;
    msg.custom.assign("FSQEPZZCEKRDHLESJZ");

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
    msg.setTimeStamp(0.550333147692);
    msg.setSource(14270U);
    msg.setSourceEntity(226U);
    msg.setDestination(26318U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.709776023603;
    msg.lon = 0.63241166188;
    msg.z = 0.716327719845;
    msg.z_units = 88U;
    msg.speed = 0.0493571107031;
    msg.speed_units = 25U;
    msg.bearing = 0.173756584433;
    msg.cross_angle = 0.678389333324;
    msg.width = 0.400069573252;
    msg.length = 0.164002087969;
    msg.coff = 37U;
    msg.angaperture = 0.0200183583953;
    msg.range = 36528U;
    msg.overlap = 12U;
    msg.flags = 161U;
    msg.custom.assign("BCXGEBKBJVYALYUMAAVISHCPLHHIUV");

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
    msg.setTimeStamp(0.522128819743);
    msg.setSource(57896U);
    msg.setSourceEntity(199U);
    msg.setDestination(55061U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.367771957303;
    msg.lon = 0.741773052525;
    msg.z = 0.405311337334;
    msg.z_units = 167U;
    msg.speed = 0.871631142604;
    msg.speed_units = 0U;
    msg.bearing = 0.0901419035218;
    msg.cross_angle = 0.748426120375;
    msg.width = 0.99831161726;
    msg.length = 0.404228767072;
    msg.coff = 48U;
    msg.angaperture = 0.463081809926;
    msg.range = 32878U;
    msg.overlap = 31U;
    msg.flags = 134U;
    msg.custom.assign("IUHIHQTWSOMNTVAGSKBPRWZOOMDGHEURILYAAJSFIXJJDMLBEOGZCHASGYCETVZYFPVTDMIZOMQTEXXUZEYKXGJOKNSUCOCSKCZNPDNOFYPUSEEXJDFWPVNXZMKUTFEDXJYNYSDTPBRARDPTZVLIUEPPABJOGWNSEIKWBGVCHGWQOWZKCBHARNKNLLRVNVJYDFXQRMHWPLRBMCUHHI");

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
    msg.setTimeStamp(0.407690186857);
    msg.setSource(25682U);
    msg.setSourceEntity(170U);
    msg.setDestination(12018U);
    msg.setDestinationEntity(155U);
    msg.timeout = 20260U;
    msg.lat = 0.282616374058;
    msg.lon = 0.152609459149;
    msg.z = 0.0357617305565;
    msg.z_units = 43U;
    msg.speed = 0.543072797914;
    msg.speed_units = 49U;
    msg.syringe0 = 115U;
    msg.syringe1 = 225U;
    msg.syringe2 = 103U;
    msg.custom.assign("HKCMTCGWIMBQBRKXRENQBKOODVYIMYOKTCGRRXYQGPAZEZPXHBRIMRTHSYPREZWOSPWKOLVBZOZXYLXIAXTCTMEPNR");

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
    msg.setTimeStamp(0.829005024293);
    msg.setSource(12323U);
    msg.setSourceEntity(124U);
    msg.setDestination(12649U);
    msg.setDestinationEntity(112U);
    msg.timeout = 43070U;
    msg.lat = 0.552176546307;
    msg.lon = 0.262555379514;
    msg.z = 0.40894390752;
    msg.z_units = 235U;
    msg.speed = 0.800669396831;
    msg.speed_units = 24U;
    msg.syringe0 = 90U;
    msg.syringe1 = 220U;
    msg.syringe2 = 150U;
    msg.custom.assign("OUYIJBAVAMPSBKJRLKCEZRYQANLHKYZRMGDVMHBSJTNAHJXWLBCAOTWAXOVFNZJWXRNFZOYEKVPMOINTWCSCELHJQBLZOMYVXDXQDPGMUHZOVNTRUMRJPXGSVTMKCEXGDZAXCPIGIIIYNBFPDOGEFTPDNKIFXUKAFWMQHGBUEIQBRVUFUDNLEPGKDTJESCAQGWJHSZSRP");

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
    msg.setTimeStamp(0.946456116892);
    msg.setSource(23495U);
    msg.setSourceEntity(33U);
    msg.setDestination(8739U);
    msg.setDestinationEntity(188U);
    msg.timeout = 56411U;
    msg.lat = 0.98775648135;
    msg.lon = 0.13754242066;
    msg.z = 0.180314283969;
    msg.z_units = 81U;
    msg.speed = 0.267341532248;
    msg.speed_units = 247U;
    msg.syringe0 = 52U;
    msg.syringe1 = 205U;
    msg.syringe2 = 14U;
    msg.custom.assign("GAQPRSPGOCXHTWYCDYJORFRLC");

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
    msg.setTimeStamp(0.686546784796);
    msg.setSource(58573U);
    msg.setSourceEntity(206U);
    msg.setDestination(12022U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.930845239192);
    msg.setSource(16820U);
    msg.setSourceEntity(106U);
    msg.setDestination(11748U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.817467755893);
    msg.setSource(37538U);
    msg.setSourceEntity(101U);
    msg.setDestination(17809U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.747309997899);
    msg.setSource(14230U);
    msg.setSourceEntity(16U);
    msg.setDestination(23413U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.558418678427;
    msg.lon = 0.249172641479;
    msg.z = 0.545421067826;
    msg.z_units = 66U;
    msg.speed = 0.133682628616;
    msg.speed_units = 198U;
    msg.takeoff_pitch = 0.562015044966;
    msg.custom.assign("LBUDUCEMHGIOMDXAOGJKKJPTLJRDVBJODZRCPKKTAORQSAZHUYGLWLOKJAIHGZOMONIXFKVRCYWTZLLKGHNFEADYJCKWREOMDSUUJPPSWHXJDYYNQCBXNSZUQQCYBQPWAEYXQFIJAIFBPGMDJDNIFSPBLBSVEFETITHGRTABKUMPFSXGEVHWQVRVOHCPVQFIVCRYUTIXSNZNZVBEIVCFXSNLWUC");

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
    msg.setTimeStamp(0.0714482440068);
    msg.setSource(32496U);
    msg.setSourceEntity(152U);
    msg.setDestination(44584U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.182373432517;
    msg.lon = 0.247667648331;
    msg.z = 0.565884475923;
    msg.z_units = 83U;
    msg.speed = 0.401544629819;
    msg.speed_units = 67U;
    msg.takeoff_pitch = 0.458688023457;
    msg.custom.assign("CIZSVCCVPNSRAWKLOHTWRUOHHANPDNFBPBYRMOVPZGLOPSFRUUPBYHHRPJAXXBIOZAVRJDZZUICENEMFTKUCXOZWKYRYVYMSXDGTEIQYNTUADQPKJHOCEMXMFDRYDETOBZMYELFXQWJFTQZXKTGALMGAWJESERUBGHUAWLLWYWQLVL");

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
    msg.setTimeStamp(0.929402210063);
    msg.setSource(1075U);
    msg.setSourceEntity(147U);
    msg.setDestination(57040U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.860234075703;
    msg.lon = 0.659649496936;
    msg.z = 0.851173131654;
    msg.z_units = 148U;
    msg.speed = 0.572413442215;
    msg.speed_units = 118U;
    msg.takeoff_pitch = 0.269497332796;
    msg.custom.assign("KEZUOQXHNMVWEETUAGZMGMBXTVVLDSIYNLPEVVLAGLWXZUSMQSRKHMBMQSMANDOZTKBVBPGOOLHSXDKYGGXYOAEXYPVEUCRVHCYMTJKPGHFDRWFRTZTQCZLDQJKIGXYNLLKWPCLHGRUBONFBSJUMAESBVHUWFUFTAHKNYXJMYBRCFQFPJFNXPGSQEIZDKSAQJYOWQORIWDWBPSAVJAUHZOIAERPCBCT");

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
    msg.setTimeStamp(0.0315802951311);
    msg.setSource(9475U);
    msg.setSourceEntity(6U);
    msg.setDestination(47106U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.791305912092;
    msg.lon = 0.748722799482;
    msg.z = 0.790824249411;
    msg.z_units = 11U;
    msg.speed = 0.130404447171;
    msg.speed_units = 46U;
    msg.abort_z = 0.651581614078;
    msg.bearing = 0.254734924061;
    msg.glide_slope = 69U;
    msg.glide_slope_alt = 0.565861785174;
    msg.custom.assign("EDRMHXGWRBZPDFVPTFMXUADVVYRIFLZMJOKAKDYXRSFQRQXNVSHOFPHWQMDIGGPBWWDBLLTHVMZQATLIBEBJPKWKEILZIYNKIEQWJBNAZJSTCKAIMUXKPPBSNNHBATZGIXSAZOWOIIYKHLUNJBAPZNODPYUDCJSTVTVJVGOYEMAYSFFRGSLQXEOGHNURVCOECAQTQDQWSHCMUFHEFXRSZMYBGEOKUCURJENTMKCZCDWG");

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
    msg.setTimeStamp(0.286136677237);
    msg.setSource(16545U);
    msg.setSourceEntity(168U);
    msg.setDestination(56744U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.552086658874;
    msg.lon = 0.653259124591;
    msg.z = 0.067760395629;
    msg.z_units = 186U;
    msg.speed = 0.172417174071;
    msg.speed_units = 203U;
    msg.abort_z = 0.503061443013;
    msg.bearing = 0.349196688798;
    msg.glide_slope = 254U;
    msg.glide_slope_alt = 0.204500899105;
    msg.custom.assign("GUTZJMOFWAEOSVAYIKJHPQCISPYEHPELPLSIYBEDRVBQUH");

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
    msg.setTimeStamp(0.192789892928);
    msg.setSource(13593U);
    msg.setSourceEntity(134U);
    msg.setDestination(18256U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.807244814133;
    msg.lon = 0.150929678807;
    msg.z = 0.604719495397;
    msg.z_units = 175U;
    msg.speed = 0.648129420531;
    msg.speed_units = 125U;
    msg.abort_z = 0.666250165101;
    msg.bearing = 0.777954486957;
    msg.glide_slope = 21U;
    msg.glide_slope_alt = 0.193850605898;
    msg.custom.assign("ZRVEEHMSYNGIFGTZBFCLTWOJKVRAXPPCDTVFXKQYLBCRPSUBUZVKDLMYUEHB");

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
    msg.setTimeStamp(0.375188994175);
    msg.setSource(31668U);
    msg.setSourceEntity(112U);
    msg.setDestination(37535U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.663316496326;
    msg.lon = 0.0347810410522;
    msg.speed = 0.0385648301608;
    msg.speed_units = 135U;
    msg.limits = 22U;
    msg.max_depth = 0.477177340339;
    msg.min_alt = 0.681213343174;
    msg.time_limit = 0.0470920464994;
    msg.controller.assign("AOXCUQUVMWMVKKLDXBGNEANHRMGWRTQGKKYJLHAWOVVTALRJFHOHGCXJQBQOFMWZSTBKYACGOWYENNCYWZRXYCLBJFYOTZJOXEYUIJGBEDMKCZSHJZHDDHSJQLXERQWILYZXQUFURPATUPPWXZSIPLTMMWPVBHUYEPKXLUDDCVLFULEAGFSEOHSZGPWZCFMKTRPAQRBG");
    msg.custom.assign("DUHBLWKQYHUNIHQXPIBGQNXDJNBYFFOITTBDCEEUJHFRPPZQAEKDMAWMOLIYQOVSZCIOAMRRVSQDAOCSWVVJNRMGDIBYZGFKTAMOGVWCERULXVNYEXPVKNULTAODCBJXUTSZRXTRNGKLKTJMUSMQKZMNWCULTPZGPTWKKCPSDWCYHQHECEYYACWFJFNDBJMWEQ");

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
    msg.setTimeStamp(0.353545035299);
    msg.setSource(28480U);
    msg.setSourceEntity(83U);
    msg.setDestination(24944U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.27632774153;
    msg.lon = 0.640506682101;
    msg.speed = 0.375244233289;
    msg.speed_units = 104U;
    msg.limits = 65U;
    msg.max_depth = 0.694565774355;
    msg.min_alt = 0.382449547358;
    msg.time_limit = 0.983809516931;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.116144430824;
    tmp_msg_0.lon = 0.322565791356;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("KLUGUHZJZFYMJULBSBBSMRFNWPRTVVNWRHAQNZAFDNAKLIYRMGHTZMCERXAFGZPWGEDQXPNRTDFOMFSTCPKGOAPNLXVQBMDZQMDHICZQHSSKTVWLFOCLXVBWNKCBNWEGJIFRPWNJXLASHIGHQLJECPGXOJUZYEYGAOCQVDIDYKIUAUQDPMBIQWLZHSU");
    msg.custom.assign("KPQPYWQIWJHRBEYROUQXBPZXWDEZHVYECXYDCULNJBFUZNFBBAMNMK");

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
    msg.setTimeStamp(0.87474291915);
    msg.setSource(55660U);
    msg.setSourceEntity(80U);
    msg.setDestination(26097U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.674360731767;
    msg.lon = 0.223052031733;
    msg.speed = 0.857653682356;
    msg.speed_units = 159U;
    msg.limits = 242U;
    msg.max_depth = 0.532101658295;
    msg.min_alt = 0.580090290121;
    msg.time_limit = 0.0214375846647;
    msg.controller.assign("KUBRRYFXVVPLUYQNROQCMYUT");
    msg.custom.assign("LFIGABGGQTTEIDCOPYSXJNFVDXGKBETHENNLZUKLIHZ");

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
    msg.setTimeStamp(0.474780656291);
    msg.setSource(35957U);
    msg.setSourceEntity(61U);
    msg.setDestination(13713U);
    msg.setDestinationEntity(47U);
    msg.target.assign("PHENPCTQLSLRJHABBXFCNGVOIBQDEKGAHHVGAFZKDGHOACWXLFIQVACSTKRIZZEFVXEZQYCFCRLJUOOGNKQHUUSCXFSWXCZNDQIJJQWWDVBVAIPKUIWXVEDJDRMSMWZTYXLOTBKOEPWIIHJSTLRDOPYVLEUJDOTAYYQZGZBVUMMLAFEYSYTPDJYSIJMMQYGMFMCGWXETNLXHRTPENHNJYROSU");
    msg.max_speed = 0.258912600127;
    msg.speed_units = 51U;
    msg.lat = 0.403874784838;
    msg.lon = 0.366671847142;
    msg.z = 0.328988054965;
    msg.z_units = 78U;
    msg.custom.assign("YBLFNKCGUDGJBDQGAKWVIUSFPDYCTZNZLZRMFSLWADCHWTSBRFNRWFTXGVBNZCUIWQWYBDS");

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
    msg.setTimeStamp(0.989608976831);
    msg.setSource(55866U);
    msg.setSourceEntity(16U);
    msg.setDestination(37666U);
    msg.setDestinationEntity(61U);
    msg.target.assign("SHDPCGJIXDFAYMPSNZQLAIHAYFWMBGKPWQVGIYVTPJKHPLKEZWLRSZNKRTRFQHLIQOGONNGEPMJFHAEHRLRUVCCKABRBLJIKVGFGEPZRVWAZYJFIOUOVKZGMIXFBESLZXFTNMLTUHTOPUWWRBDQEXQOIXBKXTNBHDTUEFAODAPSQJNWDVDJTOHVYYMTQD");
    msg.max_speed = 0.709751024085;
    msg.speed_units = 37U;
    msg.lat = 0.788997653909;
    msg.lon = 0.440191535955;
    msg.z = 0.233403793609;
    msg.z_units = 4U;
    msg.custom.assign("TTVDCZXQIBBGFRHWXRPXUPUSTKWVIBMRGJUQUZCPHOIMYZKQBLQBJPXBEQGKLBCTAJQWXQSXGMFFZSWSIIEQKHSBLFZIJEPPNWHELFACSJJMIDGNRXYONUAUMZDAWCXSSLOCNECTZFAVAYVISKREQYGYOGCQNWMUXFNKOWMADEFYMYVJBLEEYNRDLGHATHRWCDHNVVMFV");

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
    msg.setTimeStamp(0.61682697441);
    msg.setSource(42928U);
    msg.setSourceEntity(70U);
    msg.setDestination(22679U);
    msg.setDestinationEntity(250U);
    msg.target.assign("XDYQTVBAWLLMHEYFFQNLTLNBGVKEAEMDJQDHZFNIAZIO");
    msg.max_speed = 0.801468644765;
    msg.speed_units = 234U;
    msg.lat = 0.956411724476;
    msg.lon = 0.799057153266;
    msg.z = 0.595423726965;
    msg.z_units = 66U;
    msg.custom.assign("NJFLPXXPOGRCLAPFBAIGBDMIBIRGVDXHNYRZGEUEVEGVSEZKXADWAYUYYVIOBXBBFHUCWOIWWDUAOCTKZRJYJKFFLJZXCRJUTQNNQXTZTUTMOGPYKZDYJN");

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
    msg.setTimeStamp(0.0481718385171);
    msg.setSource(62756U);
    msg.setSourceEntity(128U);
    msg.setDestination(17767U);
    msg.setDestinationEntity(49U);
    msg.timeout = 58939U;
    msg.lat = 0.0865547836191;
    msg.lon = 0.47822996609;
    msg.speed = 0.773206916214;
    msg.speed_units = 120U;
    msg.custom.assign("CSPSPAEJRCSFAADMWGYHQTNBFIWCDLHSQAOPKSWQYSKABYHLMDEUUIYBVGOAHPNXKJTUSPDTRIVVLKWXKXWXEMXYQOLITYHBTXQJODMQWRNEHDDBMFNYCRVRCHKBRIORFAGZGYZNWVNKMNMSZMJGYRGUTFLWWVZAIR");

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
    msg.setTimeStamp(0.7675349957);
    msg.setSource(25408U);
    msg.setSourceEntity(62U);
    msg.setDestination(30390U);
    msg.setDestinationEntity(106U);
    msg.timeout = 29395U;
    msg.lat = 0.223701425047;
    msg.lon = 0.212482496833;
    msg.speed = 0.266386176666;
    msg.speed_units = 51U;
    msg.custom.assign("HNLDGGACRJXHAAMQSTXCYSUZMCSTNPYPNVRZUCVRLIDEXTAWYXNJAFVOHBFLSUOIWWGXUSOGNHJSWWKMCVATHRPJFRGNEUHDCTZTFFSELNODMGEKAZMYPKDSWZAQDJDBXUJYYUHVHGMBLBMKEOSEFCHDQECKVQKXRNWBYYXJAHIEULLVMIZVZPIDWBYXCTOTDRTUFOPYAOIBWGEVSBLQ");

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
    msg.setTimeStamp(0.974469223081);
    msg.setSource(15567U);
    msg.setSourceEntity(140U);
    msg.setDestination(27990U);
    msg.setDestinationEntity(68U);
    msg.timeout = 42828U;
    msg.lat = 0.447095970293;
    msg.lon = 0.681252369948;
    msg.speed = 0.147575394261;
    msg.speed_units = 28U;
    msg.custom.assign("KIAULPCTOYYHFBMOXVNXRZDKPJUTI");

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
    msg.setTimeStamp(0.0999828790606);
    msg.setSource(25043U);
    msg.setSourceEntity(104U);
    msg.setDestination(61267U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.564259295354;
    msg.lon = 0.78686061293;
    msg.z = 0.0812007997328;
    msg.z_units = 181U;
    msg.radius = 0.877358769457;
    msg.duration = 63790U;
    msg.speed = 0.093875167326;
    msg.speed_units = 160U;
    msg.popup_period = 45483U;
    msg.popup_duration = 27951U;
    msg.flags = 187U;
    msg.custom.assign("JAZBNQMKCENFSHFDGEYZQTJVKRWDPEBMNYSKTPWGYCQRMDEMZQGPYOUPGVDURPDIOSGSHVBNJMIQWIPUJHMRJHGLWFFEXLOEDPLXNZVDYPWHCCSUTZALCDARXDSVQSALYLIKBOVITUCXOZQMKJHJOUKMFYVFCUFJSIAHQZBHTGSYXTZZUEFBBAWLWIWSBTXAWOAOROHNXAUTTYWHGNAGQZVIOXCMLLYKKUCPRPBVMQKKFGJXNDEXRFC");

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
    msg.setTimeStamp(0.0508943521185);
    msg.setSource(28453U);
    msg.setSourceEntity(134U);
    msg.setDestination(46663U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.389139908473;
    msg.lon = 0.805645509206;
    msg.z = 0.880274598889;
    msg.z_units = 139U;
    msg.radius = 0.0304525891741;
    msg.duration = 16798U;
    msg.speed = 0.91311980228;
    msg.speed_units = 152U;
    msg.popup_period = 24293U;
    msg.popup_duration = 23927U;
    msg.flags = 166U;
    msg.custom.assign("ROPMRJLMQTRKGBHUFFKYUQYJLDSREWOFJVDJHTJUPOXBXBOGQTXJOQVTQMEGZAEZNSNFSRCLFBYREKCHCLMVIYWITYJUXDDPLZURXLOMBYATCYCJRPPQUSQUOVU");

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
    msg.setTimeStamp(0.0650052591702);
    msg.setSource(28474U);
    msg.setSourceEntity(75U);
    msg.setDestination(10647U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.372458915476;
    msg.lon = 0.305238489174;
    msg.z = 0.17445841242;
    msg.z_units = 121U;
    msg.radius = 0.571956098869;
    msg.duration = 59034U;
    msg.speed = 0.00745401980383;
    msg.speed_units = 22U;
    msg.popup_period = 46774U;
    msg.popup_duration = 56392U;
    msg.flags = 60U;
    msg.custom.assign("MDBOETKPWBRSSSKIPGCEUVZKGYCXMKCYRXFCXVRSONKIXGVIJVHMFYSGTERLRAOTVHWRHJOZNUXFCAQTAIFJBOPKVIQOFUFWLVWZZAQMCEKLDDXHUSQSPUNDWDNEAJBHJXQAPPIHLIIDHL");

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
    msg.setTimeStamp(0.484273484043);
    msg.setSource(47232U);
    msg.setSourceEntity(153U);
    msg.setDestination(12731U);
    msg.setDestinationEntity(151U);
    msg.timeout = 11141U;
    msg.lat = 0.816307186002;
    msg.lon = 0.803994351549;
    msg.z = 0.0592873849902;
    msg.z_units = 197U;
    msg.speed = 0.360600042063;
    msg.speed_units = 187U;
    msg.bearing = 0.585100881356;
    msg.width = 0.792530599064;
    msg.direction = 204U;
    msg.custom.assign("KUAXLONJTMHMMLOQTDJEMIITYDFHIDGTJZIAONBBKUWRDWC");

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
    msg.setTimeStamp(0.72623820387);
    msg.setSource(18083U);
    msg.setSourceEntity(208U);
    msg.setDestination(26195U);
    msg.setDestinationEntity(141U);
    msg.timeout = 45620U;
    msg.lat = 0.574020290102;
    msg.lon = 0.101485016757;
    msg.z = 0.340460333647;
    msg.z_units = 0U;
    msg.speed = 0.0573441662901;
    msg.speed_units = 19U;
    msg.bearing = 0.166338076647;
    msg.width = 0.330449397823;
    msg.direction = 16U;
    msg.custom.assign("EBPSPDCODSVABQUVHNJQVWDLEEUDJFSEDANIOPGOTADYWXNBVAIDSTMSFCUGYNDRJTILTHFSTGAWZRLCORZQYQRPBPPHNSRBTRZXIFVFJTJTCPQSTDCCFEAKHDVTIPGYMJKVMVWLWCJXVUKNGIXMSWVUJKHAYGLCBOMSMXKGUIKNZFOUHCNJAHQXZRWLLMNQXZFEKJREIBMXICEYXZGMHBRGHKGELNMYEBAOO");

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
    msg.setTimeStamp(0.957389676844);
    msg.setSource(12290U);
    msg.setSourceEntity(28U);
    msg.setDestination(52649U);
    msg.setDestinationEntity(156U);
    msg.timeout = 62293U;
    msg.lat = 0.175145460705;
    msg.lon = 0.169763162045;
    msg.z = 0.230891303304;
    msg.z_units = 76U;
    msg.speed = 0.944286996452;
    msg.speed_units = 77U;
    msg.bearing = 0.0302413327619;
    msg.width = 0.533499896799;
    msg.direction = 93U;
    msg.custom.assign("UMAYTFIMVLWJROCUEAGZPFUGTGJNOUXJDAQWNOMODP");

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
    msg.setTimeStamp(0.809637674946);
    msg.setSource(30715U);
    msg.setSourceEntity(192U);
    msg.setDestination(59986U);
    msg.setDestinationEntity(185U);
    msg.op_mode = 24U;
    msg.error_count = 228U;
    msg.error_ents.assign("MPZGNMYCOAVESYVTCGQWZFYSAHSWHTQQENDKRJDJQGSOSWAEXQDRWLVKPWWWNHCUDSTWPICVXMIIZMXPOUXLPGDHSQHEFBLHUBUPLGAMMTJPCKVUJTUTTBMIIUELS");
    msg.maneuver_type = 58618U;
    msg.maneuver_stime = 0.0690045196262;
    msg.maneuver_eta = 51189U;
    msg.control_loops = 3799126209U;
    msg.flags = 174U;
    msg.last_error.assign("IMPMVWQHTNYMDPEKXMZZNJZYJCUIUN");
    msg.last_error_time = 0.622045530789;

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
    msg.setTimeStamp(0.265005381825);
    msg.setSource(43464U);
    msg.setSourceEntity(19U);
    msg.setDestination(22762U);
    msg.setDestinationEntity(244U);
    msg.op_mode = 2U;
    msg.error_count = 248U;
    msg.error_ents.assign("NPVPZNSEQDNKOSQTPTDJRSSBQGRJHGBZIQEUUGCKVJRYYOMVTBYRTIMEYCUMXJMOAYUHLTMEMNFLKQRHVXTOFQFBYDBDILDKWAWLP");
    msg.maneuver_type = 17351U;
    msg.maneuver_stime = 0.0175858932127;
    msg.maneuver_eta = 6073U;
    msg.control_loops = 234440156U;
    msg.flags = 119U;
    msg.last_error.assign("TMTETNNQJYQLNWCVOEFXWIRIMLXVBWCNRPUUYGWJBZANSHAIFNMJWGCIYKZJSNCCZRCMHHFHFPLBUNEVBFLDYLXETPKZTERGWH");
    msg.last_error_time = 0.252370953727;

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
    msg.setTimeStamp(0.295844454514);
    msg.setSource(12399U);
    msg.setSourceEntity(42U);
    msg.setDestination(12194U);
    msg.setDestinationEntity(185U);
    msg.op_mode = 123U;
    msg.error_count = 39U;
    msg.error_ents.assign("EYGHNVJXZMBOAPZIJEWPTHBVFYTLSMDEEYELMMOCDKWSBKRCAAAUVCAUFXOIQQQGXDFPUFMRIUICNKAAVUMAJPZBBBHLSJWOOIOIUHCXHZCGLSAOJYNGEPNZXPIDTMHNXREWYWMLUVNPHREKCQLFSR");
    msg.maneuver_type = 35756U;
    msg.maneuver_stime = 0.22089774042;
    msg.maneuver_eta = 8060U;
    msg.control_loops = 3719893506U;
    msg.flags = 195U;
    msg.last_error.assign("WYUNSTSNNPBEJWPZHVQXMWTZDLEZFZNKHFDJXZCUZCYPSEPILUVAJXPEOHDTCKQREEVMWIFKBYHZKFBHQJXGTXJSUMLKAHPSJGDLWUJX");
    msg.last_error_time = 0.601040755146;

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
    msg.setTimeStamp(0.124786014529);
    msg.setSource(6882U);
    msg.setSourceEntity(213U);
    msg.setDestination(34280U);
    msg.setDestinationEntity(81U);
    msg.type = 237U;
    msg.request_id = 8339U;
    msg.command = 48U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 8112U;
    tmp_msg_0.lat = 0.372648393598;
    tmp_msg_0.lon = 0.0226936667585;
    tmp_msg_0.z = 0.822901443904;
    tmp_msg_0.z_units = 7U;
    tmp_msg_0.speed = 0.125295165203;
    tmp_msg_0.speed_units = 65U;
    tmp_msg_0.custom.assign("EWWCUGJBAMZOYOTOHVWVFXQUUVSJTKTNJISGKPPOXNHWTCGNZRWAAEYGSBOIWXMSIEFAVOLYSRCLYUIOVGSXUNMEHISDQZHLFUKDEVBUFRKDAQEPNZRJGIESTPUKEMVRTJPKZNBTRUVWYQCFCEIQRATDNMBDBZUFALLYMOHS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 5608U;
    msg.info.assign("IZAGKETLHCYWJZYSWFENECHRWSRMFATSBBJTICLYXAXUTUHJPVFNGGOKTROCBGVKBOFWIZHSCLKUNDHIMQUHXURYVLQIDJENFBRBHUKQPDEMESEMXSCPDWJQLPFBAWBOOXTVLPWFYCJFKLYWDZUVFAUMKOVYQGWTSKAVGYGSJOZSRNDXZXZMXJKWNOJQLMAPXD");

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
    msg.setTimeStamp(0.117282632557);
    msg.setSource(12774U);
    msg.setSourceEntity(150U);
    msg.setDestination(18560U);
    msg.setDestinationEntity(129U);
    msg.type = 44U;
    msg.request_id = 35740U;
    msg.command = 134U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.185941145844;
    tmp_msg_0.lon = 0.0831967762762;
    tmp_msg_0.speed = 0.804358565179;
    tmp_msg_0.speed_units = 165U;
    tmp_msg_0.duration = 48243U;
    tmp_msg_0.sys_a = 8385U;
    tmp_msg_0.sys_b = 5854U;
    tmp_msg_0.move_threshold = 0.744094625556;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 8409U;
    msg.info.assign("GFFPOYQYWTCTSZZIYZRDGXQPIJTRKBUN");

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
    msg.setTimeStamp(0.510496574522);
    msg.setSource(46538U);
    msg.setSourceEntity(47U);
    msg.setDestination(5979U);
    msg.setDestinationEntity(142U);
    msg.type = 123U;
    msg.request_id = 23625U;
    msg.command = 116U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.267619674607;
    tmp_msg_0.lon = 0.590855078078;
    tmp_msg_0.z = 0.54779966356;
    tmp_msg_0.z_units = 165U;
    tmp_msg_0.radius = 0.516222395854;
    tmp_msg_0.duration = 10229U;
    tmp_msg_0.speed = 0.305136018382;
    tmp_msg_0.speed_units = 203U;
    tmp_msg_0.popup_period = 4859U;
    tmp_msg_0.popup_duration = 58544U;
    tmp_msg_0.flags = 242U;
    tmp_msg_0.custom.assign("AWEQRPZRIZXLNGEMNLRHFUOXNESXQOEBODACQGOEVVVFRDNMVATBEJPBCLTYGJJHWNXMULQCHWKPUULAETSIQK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 51405U;
    msg.info.assign("HXFPOWEXBNUYMBNPNZUAGSCQVPMGGKFJKJWAPOXTIJTOGDCDMDZGCOVJSWFYCSEHAJLVCOPRTYZTFARVBFRRPKNEWXEMRAWEGQXYAMSVEDILNBHYYAFIQKDPUQXYZOQZIGKHVXRVZNCCGBZFDUTPYTLJZQIUCRWVKXKJSOEEHPEYATBJIDBVULRKKGLXWONKXLHMQILTCOMDNIRWFSPJL");

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
    msg.setTimeStamp(0.383549554084);
    msg.setSource(47737U);
    msg.setSourceEntity(62U);
    msg.setDestination(46408U);
    msg.setDestinationEntity(253U);
    msg.command = 47U;
    msg.entities.assign("HMNNZAYHDRVQFUQMAATAUYSTUFNBAGIIXECMGOPWYVLWOSGUKSPABCIVVACYTKYHHEAIJDGKWWOXTYIEVZBNHLGRVCNWNGBURTRTTFZYXLODPIWZRUHDZJOKHSQVRMJFBJTMFKCWWBLVDKMUKMLXDQEWU");

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
    msg.setTimeStamp(0.688576907268);
    msg.setSource(37117U);
    msg.setSourceEntity(247U);
    msg.setDestination(40536U);
    msg.setDestinationEntity(124U);
    msg.command = 131U;
    msg.entities.assign("OMZGAOLQLEHBNPEUPOMTDAE");

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
    msg.setTimeStamp(0.585313423366);
    msg.setSource(35186U);
    msg.setSourceEntity(34U);
    msg.setDestination(43860U);
    msg.setDestinationEntity(177U);
    msg.command = 11U;
    msg.entities.assign("RJHIAQJZLLJQFSOWKKUCNPFYAEOPSBIIZXIZBTXDIQAOKPMSCMNTPXDUUGXWOYGREBLXULGFCFSBVNTOEDYVTHJORMCLHHIETDTDQASRMPRMVILQXUONVVHXFAXZM");

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
    msg.setTimeStamp(0.764539562975);
    msg.setSource(1044U);
    msg.setSourceEntity(73U);
    msg.setDestination(15526U);
    msg.setDestinationEntity(146U);
    msg.mcount = 140U;
    msg.mnames.assign("HPPOCJXNBZVRIKAVDAYAVTDFTCBAEVBHUAILONBNSEXWKRVYPQZUMIYEKIRMHLYEJBQYWIHZYTKFOSIXMNCMZYHTSBFUTCQAKLLVLQKFUUQOXDGQJKEVSWGXBUJKPFWYPOLREFBUSZRPEWXZZCGIMLGUPZMEORXAYJCADKRBJOXXNLGVHN");
    msg.ecount = 143U;
    msg.enames.assign("GYHKYSEBVFBPAWTQNWDVVDACXZGUEEUORNDEMXHATVGRJMZGFTOUGSRRIAUCSLXJDCQPEMVBXWXPOUCARUMKPMKHFVFBIOWLBTZUHJLOIEFBGRPGMBLFKOFQYYCNZXPXALIRTRMCWWKSFHRWGAUJUIGYISICQKAJDSTFQQDKIJQCATWZBEMSEZNLZPFDNLPXJDABONPHLNGTYVSTTSEENC");
    msg.ccount = 58U;
    msg.cnames.assign("ETOYSVCQFCXNRKJMAKPTIXDGMWINIAJTCEOBRHVDIUHZENTVXXFQBXWBOSIIKBGSZKNCCMHKDGECWSERDMR");
    msg.last_error.assign("KZDFDWYLOZIUKRTCXBLOBXGEPLHJOKZNBXGFMBKLOACJHXADUBATWZULSZIVUUMKLPGRIYCAOEJOYIQGOQAFLDJTHHMEMVUPPRHPXYFJMEHRRBWKNYSXFIDMBKPUSXIECIHDXMVQNLCTKSGUFJTDGNVSGVQRVRCFNNRRVDISENSJHUZWGNFZOACPWGPOPYSGNCVBATLM");
    msg.last_error_time = 0.89934413184;

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
    msg.setTimeStamp(0.29489615238);
    msg.setSource(20995U);
    msg.setSourceEntity(132U);
    msg.setDestination(54716U);
    msg.setDestinationEntity(116U);
    msg.mcount = 16U;
    msg.mnames.assign("VFVHTGEUNWHJNORZQOSAZNJYADLDWZTHYQBBAJMLFLSICWMKFOXIPKCZQUEEKEANWWEUKCBIACJSHFRKCWDJMTGHPYETRGTXLVXDMLTLIKRVPICBPAGOGSFWPXBJXSGGZQSOVJGUQMNOZUTULBBTIQUYDPAGPAIYABTVSVZGMCHLLYYRDRO");
    msg.ecount = 253U;
    msg.enames.assign("NOVIFSKQKHAAVOXDLKVPCWSEBVYGGBTOEPQRISSSBTHCADCMXSBIUBDFCZMSI");
    msg.ccount = 39U;
    msg.cnames.assign("YETQEUJVNXVDWCAJBKSWVONWCPDNBQOYLWEAMCFBNQXGFDPBIZPRXSZZECBFSENBUUR");
    msg.last_error.assign("XMWEZNZDJQPWCLLREWBDRTMSHTUZQLWBRXOOASSSMRFDAOHPPFVUWNJYKAHUEBQTJLMJLXNODKTHBBNLXKYPKVGGVDMGXKLPQJRIC");
    msg.last_error_time = 0.209628324068;

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
    msg.setTimeStamp(0.675059100274);
    msg.setSource(1657U);
    msg.setSourceEntity(253U);
    msg.setDestination(17290U);
    msg.setDestinationEntity(228U);
    msg.mcount = 234U;
    msg.mnames.assign("MGMWXMOYDCAGZJIHHSLORFWWYAVHLAKHJTZNIPRZKLRNEZLFQBISBNVELWMXGZWQLYKCMQIOEXGGNDTJBICKJDETUQZZOSPZLTFRHSLDBOAUOUNOGJOFXZFEWSKJCMWOASLTABYHUDOHYGTIPEKI");
    msg.ecount = 126U;
    msg.enames.assign("QYNKPSKJYPPVVHBLBLHAEOVILWMOGRSAIWPSVEKTFVIVSPZDLGAQIKWINDUHCJRGVJLYCCCBZYXQNITHCOWKFLMMOIDLLBCTUMZQX");
    msg.ccount = 107U;
    msg.cnames.assign("RDEDTOQFGSQAIBLEACPXXJMNSHDGVLDUPRCLXWITTVVTVJQWGKEHZWSHYJCTWWFZUVBSUNRWFZUATBTQHNBDCRPOXYOKZBXBGGDPFPIYJUKWTWHAKMKPZISRMUVCYLECVIAHO");
    msg.last_error.assign("WRHDSDQFNXVUKNXIGBTWRMTBPPIXYDJECSCVZOZRDRGMCLSLNAEWGP");
    msg.last_error_time = 0.41500349891;

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
    msg.setTimeStamp(0.187199628679);
    msg.setSource(9963U);
    msg.setSourceEntity(120U);
    msg.setDestination(63295U);
    msg.setDestinationEntity(116U);
    msg.mask = 229U;
    msg.max_depth = 0.0329636992358;
    msg.min_altitude = 0.641461682717;
    msg.max_altitude = 0.63855374676;
    msg.min_speed = 0.440335717773;
    msg.max_speed = 0.139878888059;
    msg.max_vrate = 0.714647537065;
    msg.lat = 0.547533611502;
    msg.lon = 0.542843842363;
    msg.orientation = 0.772143458823;
    msg.width = 0.411303065132;
    msg.length = 0.340566190124;

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
    msg.setTimeStamp(0.139604813253);
    msg.setSource(1494U);
    msg.setSourceEntity(98U);
    msg.setDestination(51883U);
    msg.setDestinationEntity(65U);
    msg.mask = 102U;
    msg.max_depth = 0.223777351394;
    msg.min_altitude = 0.12493928026;
    msg.max_altitude = 0.345749336447;
    msg.min_speed = 0.243469291117;
    msg.max_speed = 0.0808295650574;
    msg.max_vrate = 0.97119373526;
    msg.lat = 0.0372773139624;
    msg.lon = 0.672195149676;
    msg.orientation = 0.907835349027;
    msg.width = 0.663144961647;
    msg.length = 0.075160072838;

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
    msg.setTimeStamp(0.183728608758);
    msg.setSource(51008U);
    msg.setSourceEntity(188U);
    msg.setDestination(1U);
    msg.setDestinationEntity(68U);
    msg.mask = 63U;
    msg.max_depth = 0.379464070261;
    msg.min_altitude = 0.576193838985;
    msg.max_altitude = 0.943162636537;
    msg.min_speed = 0.463377617102;
    msg.max_speed = 0.968289337805;
    msg.max_vrate = 0.277068118505;
    msg.lat = 0.39412501659;
    msg.lon = 0.44494814934;
    msg.orientation = 0.413743458334;
    msg.width = 0.198491615085;
    msg.length = 0.671892193921;

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
    msg.setTimeStamp(0.411544723789);
    msg.setSource(30619U);
    msg.setSourceEntity(92U);
    msg.setDestination(59390U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.441671477124);
    msg.setSource(30283U);
    msg.setSourceEntity(7U);
    msg.setDestination(46420U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.0420014312934);
    msg.setSource(5934U);
    msg.setSourceEntity(36U);
    msg.setDestination(9806U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.513045896585);
    msg.setSource(42955U);
    msg.setSourceEntity(40U);
    msg.setDestination(14985U);
    msg.setDestinationEntity(242U);
    msg.duration = 24902U;

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
    msg.setTimeStamp(0.955292548645);
    msg.setSource(1994U);
    msg.setSourceEntity(10U);
    msg.setDestination(17036U);
    msg.setDestinationEntity(0U);
    msg.duration = 27027U;

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
    msg.setTimeStamp(0.75211670703);
    msg.setSource(43687U);
    msg.setSourceEntity(239U);
    msg.setDestination(53698U);
    msg.setDestinationEntity(128U);
    msg.duration = 48349U;

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
    msg.setTimeStamp(0.0683986431882);
    msg.setSource(16339U);
    msg.setSourceEntity(63U);
    msg.setDestination(37561U);
    msg.setDestinationEntity(77U);
    msg.enable = 142U;
    msg.mask = 1813360239U;
    msg.scope_ref = 417081747U;

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
    msg.setTimeStamp(0.924759848911);
    msg.setSource(13079U);
    msg.setSourceEntity(213U);
    msg.setDestination(64968U);
    msg.setDestinationEntity(168U);
    msg.enable = 115U;
    msg.mask = 2319891214U;
    msg.scope_ref = 4136485024U;

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
    msg.setTimeStamp(0.22113469001);
    msg.setSource(39451U);
    msg.setSourceEntity(166U);
    msg.setDestination(62665U);
    msg.setDestinationEntity(68U);
    msg.enable = 42U;
    msg.mask = 55488858U;
    msg.scope_ref = 1485511440U;

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
    msg.setTimeStamp(0.0877594983115);
    msg.setSource(9303U);
    msg.setSourceEntity(58U);
    msg.setDestination(5874U);
    msg.setDestinationEntity(25U);
    msg.medium = 161U;

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
    msg.setTimeStamp(0.894793673777);
    msg.setSource(22914U);
    msg.setSourceEntity(103U);
    msg.setDestination(5362U);
    msg.setDestinationEntity(34U);
    msg.medium = 128U;

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
    msg.setTimeStamp(0.396286507369);
    msg.setSource(53943U);
    msg.setSourceEntity(106U);
    msg.setDestination(4036U);
    msg.setDestinationEntity(81U);
    msg.medium = 109U;

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
    msg.setTimeStamp(0.219887759887);
    msg.setSource(2108U);
    msg.setSourceEntity(111U);
    msg.setDestination(13987U);
    msg.setDestinationEntity(234U);
    msg.value = 0.198667943839;
    msg.type = 115U;

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
    msg.setTimeStamp(0.272489477527);
    msg.setSource(27045U);
    msg.setSourceEntity(178U);
    msg.setDestination(26981U);
    msg.setDestinationEntity(148U);
    msg.value = 0.0176039336267;
    msg.type = 98U;

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
    msg.setTimeStamp(0.589436073439);
    msg.setSource(32070U);
    msg.setSourceEntity(235U);
    msg.setDestination(41970U);
    msg.setDestinationEntity(242U);
    msg.value = 0.00940524637947;
    msg.type = 135U;

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
    msg.setTimeStamp(0.609111034478);
    msg.setSource(11403U);
    msg.setSourceEntity(141U);
    msg.setDestination(15689U);
    msg.setDestinationEntity(242U);
    msg.possimerr = 0.824931711567;
    msg.converg = 0.18126330542;
    msg.turbulence = 0.267834152034;
    msg.possimmon = 1U;
    msg.commmon = 223U;
    msg.convergmon = 157U;

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
    msg.setTimeStamp(0.605468827241);
    msg.setSource(26378U);
    msg.setSourceEntity(133U);
    msg.setDestination(51979U);
    msg.setDestinationEntity(166U);
    msg.possimerr = 0.575371858319;
    msg.converg = 0.0110593247209;
    msg.turbulence = 0.453923763026;
    msg.possimmon = 20U;
    msg.commmon = 111U;
    msg.convergmon = 59U;

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
    msg.setTimeStamp(0.546429688278);
    msg.setSource(36871U);
    msg.setSourceEntity(112U);
    msg.setDestination(11739U);
    msg.setDestinationEntity(104U);
    msg.possimerr = 0.864471032773;
    msg.converg = 0.344912788941;
    msg.turbulence = 0.0156860767502;
    msg.possimmon = 221U;
    msg.commmon = 30U;
    msg.convergmon = 82U;

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
    msg.setTimeStamp(0.928401562961);
    msg.setSource(56636U);
    msg.setSourceEntity(3U);
    msg.setDestination(9117U);
    msg.setDestinationEntity(77U);
    msg.autonomy = 207U;
    msg.mode.assign("MSMBKJAWIHZEMJGGJPCALFRIZBATVSCQAOEAKGTCCFWZHFXDSRFDQGWKQHOYHVWRXTSNDETJSRNDHR");

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
    msg.setTimeStamp(0.109777742094);
    msg.setSource(6940U);
    msg.setSourceEntity(11U);
    msg.setDestination(16911U);
    msg.setDestinationEntity(98U);
    msg.autonomy = 72U;
    msg.mode.assign("UENOHOVXKWDITXEVWYIGHAGLZMTETJXMDXLARUUTNZDRGWCPJGSYSLKJZSHFAFLXEGZPJJJMHBPGUTCVGNPRZOBGOEPRTUCBRNAXMAFDFNOUAMFKQNINTQQSPWMTQKCSRYZRLZBPUWBWUAVFXXEYMVSIBUXRHTMDEWHPYLUXCORCIECJKYNJBWGFIKYVHZDDCQWFLLSQ");

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
    msg.setTimeStamp(0.232041406535);
    msg.setSource(11148U);
    msg.setSourceEntity(150U);
    msg.setDestination(62259U);
    msg.setDestinationEntity(124U);
    msg.autonomy = 147U;
    msg.mode.assign("CURUDQTRPMLZKPQKIXCSRUWSFUZXBWXBWXLQQWCMHHNTGDHJHBSCKUYLANTFCHUJKSBLGKFKNGBIYZNMOBZQYJGXNFIINCAXEEIMFCFELBXLTNMKVWZRWKORSOGVVASSESYYZPRPZRRHDTEPYMXVGARMJUBEDHFANFIMPKWOCDQ");

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
    msg.setTimeStamp(0.939901998164);
    msg.setSource(30841U);
    msg.setSourceEntity(33U);
    msg.setDestination(2471U);
    msg.setDestinationEntity(232U);
    msg.type = 155U;
    msg.op = 241U;
    msg.possimerr = 0.643105583497;
    msg.converg = 0.771212646294;
    msg.turbulence = 0.404056329074;
    msg.possimmon = 35U;
    msg.commmon = 79U;
    msg.convergmon = 85U;

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
    msg.setTimeStamp(0.328495234511);
    msg.setSource(55679U);
    msg.setSourceEntity(105U);
    msg.setDestination(16928U);
    msg.setDestinationEntity(176U);
    msg.type = 229U;
    msg.op = 29U;
    msg.possimerr = 0.165901328035;
    msg.converg = 0.197351275847;
    msg.turbulence = 0.999306547156;
    msg.possimmon = 86U;
    msg.commmon = 112U;
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
    msg.setTimeStamp(0.177462008643);
    msg.setSource(50495U);
    msg.setSourceEntity(142U);
    msg.setDestination(52645U);
    msg.setDestinationEntity(235U);
    msg.type = 230U;
    msg.op = 239U;
    msg.possimerr = 0.371801254076;
    msg.converg = 0.266084002052;
    msg.turbulence = 0.631260246921;
    msg.possimmon = 31U;
    msg.commmon = 37U;
    msg.convergmon = 180U;

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
    msg.setTimeStamp(0.641603959304);
    msg.setSource(11986U);
    msg.setSourceEntity(95U);
    msg.setDestination(7108U);
    msg.setDestinationEntity(225U);
    msg.op = 183U;
    msg.comm_interface = 215U;
    msg.period = 48467U;
    msg.sys_dst.assign("RJUBQNOQXTSEVMJNWQBABUSBFLSWAKWVEYPMWXBWCMRTYZKXCFBCOHKKEKPSRHDMKPIEGDOEJJUYRANVPUCPNJPTLYMFVWTLLNONQFRMRJASEAYDWPDKGTKXTWFVCUWAJKHLNOYGINQAIFZGYUXFIAHBVZQYIUGCXZJGEVZLODCHLOQHFIOZQKXRSTPLQSUHGZUHPXPHRDGRFEIWXDJVOMVLDBLSZRIYBCNGTMVCGQUYAFIECIAHBZ");

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
    msg.setTimeStamp(0.85397209486);
    msg.setSource(24171U);
    msg.setSourceEntity(32U);
    msg.setDestination(7903U);
    msg.setDestinationEntity(153U);
    msg.op = 65U;
    msg.comm_interface = 105U;
    msg.period = 5214U;
    msg.sys_dst.assign("RRZLIGLBNRPFBWOGZKXIKXYQVPYKJFKTWOQZHIITLVKXOWPLYXGUPIMDOHTNBAHJHSKDUOEEMWOPVTQTGCIUDJSWOZWIBXEGLKXCJCCDMZGYDFCWHJUADQJJARSCRBTQRJZLIMFGXTVAWNNUQHYYSCVECOUEEEYDPFYSCEZKFJULYBNTPLXDRNKUGFAHVMDGUABQQCANVXLVOVMRGSQHZZFEMMRTWEHJOBWXUIDAFSYLABAZ");

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
    msg.setTimeStamp(0.903483472664);
    msg.setSource(9858U);
    msg.setSourceEntity(20U);
    msg.setDestination(20146U);
    msg.setDestinationEntity(51U);
    msg.op = 18U;
    msg.comm_interface = 44U;
    msg.period = 2839U;
    msg.sys_dst.assign("FMUIZYTZSTABIBCFHZFGXTUPKLKVZQNQZZHZNYQOWZJGTGULDCEURDCFOQSHTYTXJIMYWPXGLGXEHRPHRHULKPUNKIHUWQMNJXEKXJVKWWBRSYEGDLKXAIAPRDPNYOXLEVAJOBPTROJYQPOVMIEBALDGSTSZCZDIFFXPDRLIAACWFPWQEMSMARMKYHRCGNQFGJOCJQXNQBSNWSEUUJDBIFOSITMGNLVEKHYCLMWACHKVCBU");

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
    msg.setTimeStamp(0.472885360589);
    msg.setSource(16636U);
    msg.setSourceEntity(190U);
    msg.setDestination(38682U);
    msg.setDestinationEntity(69U);
    msg.stime = 620737127U;
    msg.latitude = 0.415430534296;
    msg.longitude = 0.226569183934;
    msg.altitude = 17595U;
    msg.depth = 13643U;
    msg.heading = 2667U;
    msg.speed = -8372;
    msg.fuel = 91;
    msg.exec_state = -76;
    msg.plan_checksum = 42600U;

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
    msg.setTimeStamp(0.688171545905);
    msg.setSource(61937U);
    msg.setSourceEntity(65U);
    msg.setDestination(51013U);
    msg.setDestinationEntity(16U);
    msg.stime = 2101647039U;
    msg.latitude = 0.807966491324;
    msg.longitude = 0.8937453442;
    msg.altitude = 4617U;
    msg.depth = 51642U;
    msg.heading = 9621U;
    msg.speed = -19225;
    msg.fuel = 26;
    msg.exec_state = 3;
    msg.plan_checksum = 18819U;

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
    msg.setTimeStamp(0.752888591664);
    msg.setSource(33763U);
    msg.setSourceEntity(189U);
    msg.setDestination(24382U);
    msg.setDestinationEntity(254U);
    msg.stime = 948871807U;
    msg.latitude = 0.149888880698;
    msg.longitude = 0.547191304559;
    msg.altitude = 60993U;
    msg.depth = 9384U;
    msg.heading = 889U;
    msg.speed = 28008;
    msg.fuel = -74;
    msg.exec_state = 60;
    msg.plan_checksum = 63053U;

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
    msg.setTimeStamp(0.886417702974);
    msg.setSource(47918U);
    msg.setSourceEntity(28U);
    msg.setDestination(11177U);
    msg.setDestinationEntity(235U);
    msg.req_id = 15385U;
    msg.comm_mean = 246U;
    msg.destination.assign("TSQWYLOEPYDAJISTLMPKAVONXGVJGLANKUAIYUCOZHFMRVKQHLBIYRRRYBWCSTMEDDPGFTZZQPKUKHNLBYOVCXGLGIORFRYTEORPXAVEFSMPCNHXDWJZIWIWMBQSUXSPPZQDPZMYTHNCJHHLTKASSEGQXITUZFTBQJECGMNVWJKJZJHJVUPHINKZRQYB");
    msg.deadline = 0.312675199392;
    msg.data_mode = 41U;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 68U;
    tmp_msg_0.range = 0.95293909559;
    tmp_msg_0.acceptance = 54U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JEXGDEHMROQURWFVVDTIIEHLRSFJUPACYIVBPSZOSEZSKZDWNXGLZRIZLWPBPDJXWBQZXZZYAFMHMTHUJVMPJTYBHNCLFCADALQIOAPKEOWJFBVJCUNKDZGMVSPOKQWHERDEUZHGAWCBGRYPIFMQGJFHYCASTE");
    const char tmp_msg_1[] = {55, -76, 82, 1, -127, 89, 90, 57, 64, -113, -125, 11, 73, 58, 60, 12, -32, -71, 49, -29, -122, -112, 92, 107, -82, 42, -81, -93, 96, -110, 73, -119, 41, -13, 5, -76, -41, -100, -20, -99, -76, 115, 94, 76, 124, 91, 48, -74, -54, -67, 42, -49, -64, 59, 37, 47, 31, 122, -76, 102, -99, 112, -124, -58, -25, -127, -48, 105, -98, 36, -74, -92, -6, -52, -106, -19, -89, -33, -24, -3, 8, -43, 42, -99, 96, -69, -96, -30, 1, -10, 41, 29, 122, -89, 25, -3, 21, 54, 122, 36, -66, 87, -110, 79, 97, 68, -54, -55, 3, -43, 31, -42, 83, -25, 49, 6, 41, 91, 18, -91, 16, 113, -69, 65, 39, -109, -17, -8, 84, -26, -110, 81, 33, 39, -109, -56, -111, -114, 81, 19, 69, 40, -94, -87, -54, -53, 86, 60, -48, -36, -80, -100, -108, -28, 73, 125, -33, 26, -85, -93, -90, -116, 98, -4, 45, 50, 10, 109, -70, 101, -122, -57, 43, -27, 56, 27, -27, 88, -70, 49, 94, -79, -48, 114, 98, -122, 123, 111, -113, -46, 82, -7, -87};
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
    msg.setTimeStamp(0.664003875333);
    msg.setSource(50815U);
    msg.setSourceEntity(134U);
    msg.setDestination(31706U);
    msg.setDestinationEntity(50U);
    msg.req_id = 17481U;
    msg.comm_mean = 125U;
    msg.destination.assign("HEQOELIUEFLJIRKBCLPMQWNGBKGQMEDHGITNBSHQRDUJHNXTOSXIULMOOLJFSFPGAECFYRADPRFMWCMVZQDXZNBPMYWARXOUCDOLTIZVGVCAYOMCJESOLPMTDFXPHHZPTDBAYVFBRDYKJHZJINZAZKXZVPHLWBNINBWZEACJSQCKVJGWXPNQSMYAVPAGWBGFMYVRQCETTIUNEDTHSXQKHAOWUSWULKWVZOERYQTLJCYT");
    msg.deadline = 0.981412963762;
    msg.data_mode = 160U;
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("MCKROATMORBDCVIHJWMCVKGFAXYTIEWIFQTQSPBGPNWAKAYODYSJGXWZDVBJECHJEE");
    tmp_msg_0.lat = 0.354098657893;
    tmp_msg_0.lon = 0.773166995089;
    tmp_msg_0.z = 0.650886938071;
    tmp_msg_0.z_units = 108U;
    tmp_msg_0.cog = 0.545881992968;
    tmp_msg_0.sog = 0.667776956263;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PWDVCPINHHKUVRMNYQIJAKXAABNZSVPCDMGAIGTVZVGEDGPJCDNMIEWGTTLXTZLTSMYQNUIRFOQDSXTLUWHDPOEVMZEGLTULYWDTZYKHCYGJUJJQOQFUQAPIAKFGFFRZOUH");
    const char tmp_msg_1[] = {-16, -17, 19, -95, -39, 64, 109, 51, -96, -110, -6, 82, 125, -32, -13, -110, -46, 105, -118, 67, 54, 26, -111, 40, 125, -71, -37, -42, -20, 27, -33, 123, -75, 55, -33, 121, -37, -88, -117, -21, 25, 67, -73, 16, -30, -87, -113, -101, -110, 39, 44, 46, 17, 36, -54, -35, -47, -12, 103, -42, 30, 94, -87, 23, 102, -3, -93, -126, 34, 123, -39, -57, -42, 94, 41, -30, 109, -50, 114, -23, -117, 33, 88, -122, 123, 64, 56, 67, 105, -14, 82, -40, -66, -30, 91, -17, -83, 111, 67, -61, -106, 101, 1, -52, -70, 90, 4, 53, 31, -90, 117, 16, -85, -8, -28, -124, -100, 22, -28, -25, -4, -60, 7, 15, 46, -121, -43, 109, 24, -117, -75, -90, 115, 90, -47, -70, 126, 62, 58, -59, -100, -83, 54, -20, 77, 6, -47, 118, -117, -58, 30, -76, 57, 69, -4, -108, -125, -17, -50, -21, -66, 117, 78, 3, 36, 69, 108, -109, 12, 22, -122, 110, 82, -114, 19, -97, 94, -7, -125, 17, -46, 115, -5, 71, -88, 8, -32, -111, -45, 107, -36, -23, -38, -92, -27, -117, 121, 120, -76, -122, 23, 33, -125, -109, -110, -99, 46, 42, -58, -48, -102, 64, -111, -26, -104, -71, -49, -17, -34, -104, -99, 30, 17, 106, 50, -40, -77, 13, -78, 65, -45, -4, -109, 10, 90, 63, 64, 37, -98, -118, 20, 109, 85, 116, -42, -116, 108};
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
    msg.setTimeStamp(0.765600958892);
    msg.setSource(14692U);
    msg.setSourceEntity(2U);
    msg.setDestination(38846U);
    msg.setDestinationEntity(61U);
    msg.req_id = 7121U;
    msg.comm_mean = 194U;
    msg.destination.assign("TYTOLCTYIDLWZVPPQGZMAZVAWCQVGEKRXGEGTOOLVMGWGZPEGQRXLZZYXQKNCVGTLUAFUEEYPFDSUBMHWOJSEFAOYUVCIIMHFWHNSCSRNXUVJRCIYFHIMZIMKEPIXWKBTLPXNAMDDQJSREEFSVWUAHBPNHLYRNJWKRSKFNDHRUUETCNUYYIO");
    msg.deadline = 0.44870534881;
    msg.data_mode = 192U;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 5U;
    tmp_msg_0.error.assign("UNGCWTJDDOBDSGNDLSYUKBPFANUKLZQUREOQRFCPTRJTYCXZDXVUHGPYZYKQBTWSHYVVHBELZKWJIWPXWSNZZHMPTZLVYFRJTFFCSBCQKAONUQMSIWCMEAAMXHGGPYVZASGGAAIRVKQLBTYGIJOBMEPJYVISULFJKFRXJMGDQUTXRIPEKNAWRAXOCOWHBYJDQILBEVGDOULVMRHPMWZDSFOH");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BKWIBUBEYPBARJDRUQFZJHGOEHPZITATFOCZJXGJJNRIALGBXXVZEOLHJXUIZSMZTVKYVHVJHBSYMNDWEYSJHUTXGTLQMYEOYUTXCGSNBW");
    const char tmp_msg_1[] = {-116, -69, 65, 118, -80, 82, -10, 114, 76, 63, -52, 38, 79, 91, -58, -36, -3, 116, -8, -123, -127, 67, -122, 126, -28, 18, -32, -65, 45, 38, -51, 83, 43, -51, -11, -77, 23, 93, -3, -121, 119, -55, 58, 114, 122, 8, 0, 6, 75, -56, 59, 81, -73, 59, -81, -12, -105, 106, 122, 85, -112, -116, -75, 3, -120, -104, -12, 110, -90, -74, -121, -101, -60, -93, -13, -37, 4, -45, -78, 102, -98, -41, -88, -30, 100, -38, -98, -55, 112, 91, 79, 44, 46, -17, 30, 48, 102, 19, 115, 24, 121, -124, 41, -29, -122, -102, -39, -68, 26, 89, 76, 66, 16, -55, 95, -113, 65, 12, -126, -48, 106, 104, -27, 58, 13, -35, -37, -30, 6, 73, 47, -111, -26, 23, 39, -110, -106, 31, 29, -80, 66, 15, -62, -46, 13, -93, 33, 20, -73, -113, 62, -78, 76, -53, -68, -108, -106, 53, 34, -71, 80, -2, 48, 3, -124, -15, -79, 79, -27, 11, 68, 54, -32, -72, 50, -69};
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
    msg.setTimeStamp(0.976271020802);
    msg.setSource(18811U);
    msg.setSourceEntity(180U);
    msg.setDestination(35428U);
    msg.setDestinationEntity(171U);
    msg.req_id = 48459U;
    msg.status = 86U;
    msg.info.assign("XOGMFIJAIWPXRUSZKBZSVTYPQQFOJDDYCOXHFTOYOXWDAPERYCZJDLUHWEVLYEIHMQWDTTTSPPMGNETEGRH");

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
    msg.setTimeStamp(0.531050675858);
    msg.setSource(17665U);
    msg.setSourceEntity(163U);
    msg.setDestination(1686U);
    msg.setDestinationEntity(157U);
    msg.req_id = 31196U;
    msg.status = 99U;
    msg.info.assign("QBQWTDOENQJGTAIHJKVHMKZXNOGKUCLRCFXEHVVDFFHIPNIKIDVTTMVYFLBALSSLDBCQKKNGBTAYSGHPPSJLKFXGXIWTCMLUEUYGUJZURIABGYNUDWYRCBPEEXVASCYQFKELYSGPSQEOUMZASYTMUWODODMZQZARQPWXNSRSRFWMJZFVLCBDZDMAAZLPVZTXLRXEAPRICXWPVQHEOVPIJHWRDJHCBKZINHBXKGURONYFNJMOMBITGOJWWHYUJ");

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
    msg.setTimeStamp(0.108360951084);
    msg.setSource(58244U);
    msg.setSourceEntity(151U);
    msg.setDestination(44671U);
    msg.setDestinationEntity(75U);
    msg.req_id = 5794U;
    msg.status = 231U;
    msg.info.assign("IJDVDKZWPDP");

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
    msg.setTimeStamp(0.499104990778);
    msg.setSource(54040U);
    msg.setSourceEntity(96U);
    msg.setDestination(19884U);
    msg.setDestinationEntity(196U);
    msg.req_id = 61355U;
    msg.destination.assign("EHQMVYAMCRBDTFKZAQWLHBLZOCVUEVCUXZNOZHSIIHWOWSTNYGRWILFOKQGTDLSNALZBHROARCEQSVHUPJYNRHEZOTHMFIMFWCPUYLOQSQWVFVAPLKCPKDAVTLDUGBJBSWIAHQYPCPGKEXSYDAVRDSL");
    msg.timeout = 0.503593759647;
    msg.sms_text.assign("ZIWNMJMTHWNUYJXJPMSTXRRXNQDNYBWD");

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
    msg.setTimeStamp(0.24460088891);
    msg.setSource(26636U);
    msg.setSourceEntity(135U);
    msg.setDestination(57014U);
    msg.setDestinationEntity(1U);
    msg.req_id = 31227U;
    msg.destination.assign("RGIZRGIJPUMMWPUCRAVLFKQETFRLCYBIOKAVQGHMZFXEJTHFNLNQJYTNWPBILGPHAJXKJBRLDWFNRBWCRKEVWDAPJOBOVYRCXEDSGMJLGUMFITIVXMTFPQXHBBFKMETCINVINPUVSSZNTAOOVSEHYGSNAHSZYICCWHUPWBKBXYTLMQEO");
    msg.timeout = 0.909759444052;
    msg.sms_text.assign("UEOVXICZFCQKAJYLMTTEBYRWPFZBOPYMXQDMAUWCGMPDLDPTBVHGBHNIYKSELODJTXLXLDHGPRDAQEMZQXFNWHVVUZCHFSEVRCTQQOCVKSNTSJUHMEP");

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
    msg.setTimeStamp(0.639402410485);
    msg.setSource(27097U);
    msg.setSourceEntity(33U);
    msg.setDestination(19972U);
    msg.setDestinationEntity(49U);
    msg.req_id = 18735U;
    msg.destination.assign("ULTSQKFBFIRSO");
    msg.timeout = 0.338754490189;
    msg.sms_text.assign("XGFPEEMQJIIPOUOWOAHNAKHSMAGWICVIBJJVEATFPSKMOEXUMGNFDWEKADKL");

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
    msg.setTimeStamp(0.564266999973);
    msg.setSource(30130U);
    msg.setSourceEntity(235U);
    msg.setDestination(54966U);
    msg.setDestinationEntity(3U);
    msg.req_id = 45738U;
    msg.status = 187U;
    msg.info.assign("ACRYVPEMDCAJEWMZMCFWZHMAYXDNFSLHITATKLJBNMFSUWCOEKJRRPCHFFEUUWOXJPAKLEEPISIPNHOFRXKGZSDYKKNUOFWVQQIOIVNHBGLREJLIOGBTOXFXUKTJQSMVEVTDTCKBZZRIPLPCAPAKPLZRTQLYQWDYYYFXESKXGVDGORTYTSXYGWWLZAHNBNVJUPDBYCS");

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
    msg.setTimeStamp(0.536275009419);
    msg.setSource(24260U);
    msg.setSourceEntity(227U);
    msg.setDestination(13683U);
    msg.setDestinationEntity(135U);
    msg.req_id = 64511U;
    msg.status = 122U;
    msg.info.assign("LVWHEBMQANKTNKQCCAVSGDEKDTKXNDYWPQZZEOLTIYMPZXMHRIBOACJVETPURFPGVHDWJVVNTITIYAABCWIUITZHZCYOFXHXHFYPEJUMQPOSYXKMHQYRBOSJDYZNWKMWZNFALMDFEIGJDEACJJYWKMCJSVLZMO");

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
    msg.setTimeStamp(0.196740434164);
    msg.setSource(20933U);
    msg.setSourceEntity(112U);
    msg.setDestination(42188U);
    msg.setDestinationEntity(190U);
    msg.req_id = 23247U;
    msg.status = 230U;
    msg.info.assign("MKBIETWVQWQRWZDLHEOLBOFWKCBPHHUUQMBRXKAYFMTTAXBRIBLNCKQVBYYQFCGXELSNYHJ");

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
    msg.setTimeStamp(0.50981407968);
    msg.setSource(17585U);
    msg.setSourceEntity(52U);
    msg.setDestination(59932U);
    msg.setDestinationEntity(245U);
    msg.state = 170U;

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
    msg.setTimeStamp(0.129562150849);
    msg.setSource(49351U);
    msg.setSourceEntity(135U);
    msg.setDestination(8083U);
    msg.setDestinationEntity(253U);
    msg.state = 163U;

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
    msg.setTimeStamp(0.591788747261);
    msg.setSource(32513U);
    msg.setSourceEntity(121U);
    msg.setDestination(61239U);
    msg.setDestinationEntity(122U);
    msg.state = 9U;

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
    msg.setTimeStamp(0.0935718186544);
    msg.setSource(11736U);
    msg.setSourceEntity(44U);
    msg.setDestination(18995U);
    msg.setDestinationEntity(69U);
    msg.state = 65U;

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
    msg.setTimeStamp(0.869034381902);
    msg.setSource(19854U);
    msg.setSourceEntity(230U);
    msg.setDestination(47955U);
    msg.setDestinationEntity(101U);
    msg.state = 218U;

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
    msg.setTimeStamp(0.765021016545);
    msg.setSource(7860U);
    msg.setSourceEntity(93U);
    msg.setDestination(10966U);
    msg.setDestinationEntity(168U);
    msg.state = 172U;

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
    msg.setTimeStamp(0.288876254387);
    msg.setSource(27117U);
    msg.setSourceEntity(59U);
    msg.setDestination(47775U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.0266600303966);
    msg.setSource(11320U);
    msg.setSourceEntity(67U);
    msg.setDestination(19207U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.868328290816);
    msg.setSource(14464U);
    msg.setSourceEntity(230U);
    msg.setDestination(46500U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.74876551828);
    msg.setSource(6402U);
    msg.setSourceEntity(177U);
    msg.setDestination(13038U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("VASFAXDBICVDMVDFCPAOTUITWBLDWAXYSLVIWIXCXMKHJSYXMTWZGBXNAQJYMXLRRFNZSCZQZQEBFJRGEHUGNNMOAPUJRSFFZPJDHNCKKOSBIMWHVZLNBIHXFHHSTCTZVGLPXCGVVCKDZEQNQRLMUVKYTMTJWYK");
    msg.description.assign("AJGQRFLYSCRICYGBCBAGZKCJZQSIIPLWOITBQFIWDEAWKUNTOMHXOGUPTZSXUVYGDWNHZXKXPZUYWHMECYHOPKBCTYJNUCDWDIAQHXOHNUPDLEZLYRZGTCPEGVVUPJVVJKRBNMXMWXNTENEJVADMHLYEOQBTLBRFTVSQUZNFAJDSSXCMQIPDIABWZKPRILBFKSOWDFEZFBRSQTRAQOOJWLVNYEVXHKHSCQAFGSRXHYGJADNMPMEMKMLOTKFGVI");
    msg.vnamespace.assign("BGNYLTIZDCAOVWGPRYNWNIGDKMSWKEVZKEQGNJXHGYFVEYJQELFXDUVOJLRBVBNQBOALQPOAMTFFJNKPZPMWO");
    msg.start_man_id.assign("YJRAKYOGTLIAQITEHXXRPGSRUKPOZXCBSXGRJMCLDLPHBPOFAFNSEUHJLUDYCWQZNDFRRVPISZZCMEVRSGDAMBINY");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 58474U;
    tmp_msg_0.lat = 0.906972945657;
    tmp_msg_0.lon = 0.830480252055;
    tmp_msg_0.z = 0.697308203075;
    tmp_msg_0.z_units = 10U;
    tmp_msg_0.speed = 0.0396537782184;
    tmp_msg_0.speed_units = 30U;
    tmp_msg_0.duration = 39569U;
    tmp_msg_0.radius = 0.989475656544;
    tmp_msg_0.flags = 118U;
    tmp_msg_0.custom.assign("ZUOKHUWQXZHOZYQLQEVIJAQUUMCYMTPFLBITHGWOECLNJBHTCUQJIATCTGHIWYBLYFQGRFWNXPFDSEDARORWHBCDKHATRPKCYAKKEEUISBMGNSLGMFLYJSQPDPOVDONIUMPMHMNYVDAFDSMODRRPQGEEVGSKKTOQXESTJXWRWLVKEVIWZHBGDJYRVP");
    msg.start_actions.push_back(tmp_msg_0);
    IMC::EstimatedState tmp_msg_1;
    tmp_msg_1.lat = 0.203617012884;
    tmp_msg_1.lon = 0.998657681667;
    tmp_msg_1.height = 0.187746602487;
    tmp_msg_1.x = 0.140226942469;
    tmp_msg_1.y = 0.312950518879;
    tmp_msg_1.z = 0.666070085853;
    tmp_msg_1.phi = 0.321905788469;
    tmp_msg_1.theta = 0.902082132769;
    tmp_msg_1.psi = 0.486046327645;
    tmp_msg_1.u = 0.0391874402855;
    tmp_msg_1.v = 0.529341925807;
    tmp_msg_1.w = 0.42982531052;
    tmp_msg_1.vx = 0.83888311905;
    tmp_msg_1.vy = 0.0424162569721;
    tmp_msg_1.vz = 0.623083509402;
    tmp_msg_1.p = 0.676423049176;
    tmp_msg_1.q = 0.55192804192;
    tmp_msg_1.r = 0.96185909209;
    tmp_msg_1.depth = 0.296181180346;
    tmp_msg_1.alt = 0.814218982413;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.639414559538);
    msg.setSource(59457U);
    msg.setSourceEntity(73U);
    msg.setDestination(2565U);
    msg.setDestinationEntity(124U);
    msg.plan_id.assign("FYVGUPZKEAKCUJQYIVOGBAVEQNQDDUVFPCXSRLHWZPIDOUKNNQQLIHLWIXVKILHEHZCBU");
    msg.description.assign("LZKTBGCKZHWLWIYMWOBELIIDIJKXCTFYKAFLSSNKJROHJVGSRNJNPKQEBZXUFZTTZZFNZGIQMQMZEOJSCXRWGOCCUYGXPMGJENBMGWAKRBFFXYPSUROCOOTYXGRQUMUXXHYOVDLADRIFMJJVPBJHPVDAUVYNIRXIBPDUSQSZDHXDLUVAWVAVEYCIBNQKEOATOSTLIHCJEVLDLWSBAMBCHWAGNEAUQMFFQPLPTFKEWGWYMEPQ");
    msg.vnamespace.assign("ZDAATVCWAOOCFICPTOKERRRKERBCNTTMQEGRANJDBBPPCUILNCHOPGFZFFQDKUGCYEYHZLMJULXIPLVWMAVPWTYDQBVCIHRNYSSOQODASJYDFVLSESXHERVGAIMBPUBEJXNMOFTZZUUIMLEUXFNSQGZJJDIHQALXGVZPXVNUFSN");
    msg.start_man_id.assign("YRQIBPSIEYMWDULAOZDQIBVDTRUUZYOMKT");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("KCMTRPFWXTGUZUFFKVDTHQLELEDLKAYBICXRYZSPWIVASUQADRXAKKRWFSVCCYMINHDMNOPKQNUFMYMCGODYLOHGJOZNSQAZPZQIHPRLKVLMPIEXOEF");
    IMC::StationKeepingExtended tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0257049242657;
    tmp_tmp_msg_0_0.lon = 0.982163736642;
    tmp_tmp_msg_0_0.z = 0.0767905721677;
    tmp_tmp_msg_0_0.z_units = 15U;
    tmp_tmp_msg_0_0.radius = 0.594948921255;
    tmp_tmp_msg_0_0.duration = 36953U;
    tmp_tmp_msg_0_0.speed = 0.567546386713;
    tmp_tmp_msg_0_0.speed_units = 135U;
    tmp_tmp_msg_0_0.popup_period = 52098U;
    tmp_tmp_msg_0_0.popup_duration = 33610U;
    tmp_tmp_msg_0_0.flags = 84U;
    tmp_tmp_msg_0_0.custom.assign("CPSOCRVTSSGCWQEBJRIJKCFTXOBEBWRVOANOPLRDGYTRBANLFRYYOTYNMXVNCTPDCIYOKSLZUQQQIEYIHDMVSZAPYBDQZUWLBEFLMDGWKTEJPVPHPFWCZNHORDZKGWZADONCEVCHYUMDUKLUSIAUOMMZRQVGXWJGXGMXTISMGQPHDXZEBEDIKNUHRHFHVJGRJJAGYIMFIQXEBYE");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Force tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.1449496803;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("VYKRZJAQZNBRYDRBTLESTKDYSXBVLIGUBOYNIENIYWEAGCMHVLZWSCHTELWE");
    tmp_msg_1.dest_man.assign("FQLRCLRFIIW");
    tmp_msg_1.conditions.assign("HKELVITAWBSEWJIEVEOKSLPAKWGPNZHAMDRRXBRDADFXHSUMQOFCNYOUZKFBPOSIUPCOSUNEISKMKJSCPTRHCFFUYQQMLLBYZWWCCGYUXTJCTNAXBMALYIHGIOOUGMUQNSSWFFYTKMCVZQABH");
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
    msg.setTimeStamp(0.697234265363);
    msg.setSource(2066U);
    msg.setSourceEntity(20U);
    msg.setDestination(1672U);
    msg.setDestinationEntity(113U);
    msg.plan_id.assign("OCAUDYUYNYTLFXEZQCREGSBNSXIWOEGWUWMPQVCRTGAIPJBJTJKEXWQIZGCYBXR");
    msg.description.assign("FPOWRSGBEHZIJSMQVEIUGZJYDNSIBEBGAYCURHTOFMUFAJBNQMGMBJBCCVYLKXIJWCDQHNTAXHKYTULAXPKQOQLFVDRPONDMGHDCRMXZNTLDIACWBPNQDT");
    msg.vnamespace.assign("JNUGPBHHERYZNVZXPMSTZMZGRNBZOLGAOTVBOSJYACPAIKR");
    msg.start_man_id.assign("GVGFAMHUDMKBYKENQXFNAGBIYJTZHVPXBYSRCGNOOCUKDJXGKZMCPKOQZBQAFTORUNLTMHDJBWVRRDHQPWDPA");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("QRWSFIUEVLKJVQUILWOVOZZAGOBNEWSGBAPAQURGJRTKYVYZKDVIJEBCYJFXHMDQSZNLEHTGSPQXTDKCLSNMYHODPEAIXXCMYFDDJHFFMVWCZCOYTSVKDCRUXIKEACTNLBJNALHGIKTZWSPWFQWINCYRXYRXDAONOLHHIVSOAUUGHQZXJNCMUECEOJKKOXFLPRIGAPMQRPDTBNBPBQFHMUMUPTJYZDZRUWYZWELLMBVVHFSGIBBTFAPKGXNM");
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 55273U;
    tmp_tmp_msg_0_0.control_ent = 10U;
    tmp_tmp_msg_0_0.timeout = 0.79389902528;
    tmp_tmp_msg_0_0.loiter_radius = 0.0299570700038;
    tmp_tmp_msg_0_0.altitude_interval = 0.704036085862;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::WindSpeed tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.direction = 0.908418477363;
    tmp_tmp_msg_0_1.speed = 0.661360761632;
    tmp_tmp_msg_0_1.turbulence = 0.547689878055;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("KUUSXNELBZMILYAOPFVNOFDIZMLLFDAVBSLPXFQBWLXVACBBYYODOPYMKKXDHIBRTQJRHMNVQONQRIEDJDVBWKTPNQPPIBMEGIICQNTUYWVHXQILEGCOWIGQNUZCSRVSSYBETRPWEJCSRTKAXADUEKHFCJFAOUDWDGUA");
    tmp_msg_1.dest_man.assign("GPMANBDWKNXMKEQCMRLQGYEQZFYMVTZYTSSUZBIDUBCVQIZKGOJCFGVOXBIUMKTHS");
    tmp_msg_1.conditions.assign("ZVAXDMQTZICCNUOVDNEGJJXOROYAOHGPFMQTSEOPELSDJOTHAJWY");
    IMC::ImageTracking tmp_tmp_msg_1_0;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.530401345964);
    msg.setSource(44697U);
    msg.setSourceEntity(126U);
    msg.setDestination(26624U);
    msg.setDestinationEntity(210U);
    msg.maneuver_id.assign("BFIXQBITQNAJJPPIUTYCXEWJUZCPZUUJRDGNSKFJRIJRVTQSQBCMCWUKGFSPZRMHYTADU");
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 18986U;
    tmp_msg_0.lat = 0.271904994937;
    tmp_msg_0.lon = 0.348855571916;
    tmp_msg_0.speed = 0.642238450087;
    tmp_msg_0.speed_units = 176U;
    tmp_msg_0.custom.assign("MGZTZGAIOTSSOOQXWPNTXMQKTOVCLBKUYJIXITHFWMJBEYTCAABLEYRPXVNOBRUHFMBRGKPFCCXLRKEIAOBIAZIWNDRVZMNJVIAUGKYQXKKQOCWQSGEDSLNVGXPHDELNLYMJSKWHH");
    msg.data.set(tmp_msg_0);
    IMC::ScheduledGoto tmp_msg_1;
    tmp_msg_1.arrival_time = 0.414143472636;
    tmp_msg_1.lat = 0.284915300798;
    tmp_msg_1.lon = 0.543708860067;
    tmp_msg_1.z = 0.626077235033;
    tmp_msg_1.z_units = 92U;
    tmp_msg_1.travel_z = 0.618034379717;
    tmp_msg_1.travel_z_units = 86U;
    tmp_msg_1.delayed = 225U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SessionSubscription tmp_msg_2;
    tmp_msg_2.sessid = 1228710272U;
    tmp_msg_2.messages.assign("DKYRYLIKCTEQROEFPIVYYLESGZSAJBOPOTOIVHORUKMUAOXNDFNBMONHBEKXUBAUWIVPAGGCGRRTWQRAMSZZKDPTMCABBVKWEGVQMINPXZPTGEHFDESVDQWCUQGGXJKFJOHCHNAXKRLYMIUYIEOUZJLLUZRVRCIQQYJWYMCIXSDCMSHVYAOYJCSLPZMCDLGFFHIXSEWDWGFQPTMSHHTTTJLSDJFXXNRLNZN");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.440378375766);
    msg.setSource(53036U);
    msg.setSourceEntity(59U);
    msg.setDestination(44861U);
    msg.setDestinationEntity(216U);
    msg.maneuver_id.assign("JGGHOJNRKHVMMFYBHWASJNNHIMOUFYDXYLHCBSFPOLSRHJQLUQZVTHRKWPDSBTMFOZGNLBDKZCTFSHENQ");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.133998920332;
    tmp_msg_0.lon = 0.245654199741;
    tmp_msg_0.z = 0.0994728995725;
    tmp_msg_0.z_units = 136U;
    tmp_msg_0.radius = 0.24250108035;
    tmp_msg_0.duration = 44214U;
    tmp_msg_0.speed = 0.423007958065;
    tmp_msg_0.speed_units = 42U;
    tmp_msg_0.popup_period = 63449U;
    tmp_msg_0.popup_duration = 46068U;
    tmp_msg_0.flags = 2U;
    tmp_msg_0.custom.assign("PAFUAWHDKMWKXTTVKAABVCGNBDKCWXWCOQPUBBUYGCBMQCWARKJGFYHLPOIVDSETJJJEFUVJRPBPZFBQAUGJCTCTXSOQMTMXKMWDWEUNYYOZTSNKGNBDOGIVLLIFHEMDUZDYVILSLRYQXLDVEODLKMPURJLNYHHOQDVCJPABNXUZRKESAZQNRAHLXZO");
    msg.data.set(tmp_msg_0);
    IMC::Loiter tmp_msg_1;
    tmp_msg_1.timeout = 57851U;
    tmp_msg_1.lat = 0.237947260629;
    tmp_msg_1.lon = 0.54453093198;
    tmp_msg_1.z = 0.474077727508;
    tmp_msg_1.z_units = 206U;
    tmp_msg_1.duration = 34016U;
    tmp_msg_1.speed = 0.423741151638;
    tmp_msg_1.speed_units = 98U;
    tmp_msg_1.type = 181U;
    tmp_msg_1.radius = 0.131199054416;
    tmp_msg_1.length = 0.171137413584;
    tmp_msg_1.bearing = 0.569493532177;
    tmp_msg_1.direction = 165U;
    tmp_msg_1.custom.assign("ANVSJLRQOAPJDPYRVEAWVPEHXFELVSQGKFOOCMGBCBXIXWGDEANWJSXRTIMJJKDYAKOZTNMCXQHVZLUXD");
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
    msg.setTimeStamp(0.244330670423);
    msg.setSource(62598U);
    msg.setSourceEntity(220U);
    msg.setDestination(9106U);
    msg.setDestinationEntity(249U);
    msg.maneuver_id.assign("DWCOKJLFOJFHNCKLFXFIBBWPAJQSTHURCIBNRUIQTBJMXAHTUWGZUKWAARPEGXAQYLDMXKBCCYPVADTJPUVLEQVXSM");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 61959U;
    tmp_msg_0.lat = 0.924513434322;
    tmp_msg_0.lon = 0.851980893554;
    tmp_msg_0.z = 0.322808941504;
    tmp_msg_0.z_units = 177U;
    tmp_msg_0.speed = 0.147336027134;
    tmp_msg_0.speed_units = 76U;
    tmp_msg_0.custom.assign("AKXRARXANDBPYXCTZM");
    msg.data.set(tmp_msg_0);
    IMC::LblConfig tmp_msg_1;
    tmp_msg_1.op = 151U;
    IMC::LblBeacon tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.beacon.assign("NYDUKWLJMIMZQFHPNZIVGURPJYGFGRUODYEOIRADEQQFUAAZEYOPYJRYGHTMXSAXEYSTGSIMFZKTATCLLABSKCKRVGYRRIIKOMBBUABTEYSVHJIV");
    tmp_tmp_msg_1_0.lat = 0.855782837862;
    tmp_tmp_msg_1_0.lon = 0.260693171478;
    tmp_tmp_msg_1_0.depth = 0.522111722995;
    tmp_tmp_msg_1_0.query_channel = 14U;
    tmp_tmp_msg_1_0.reply_channel = 251U;
    tmp_tmp_msg_1_0.transponder_delay = 191U;
    tmp_msg_1.beacons.push_back(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.619325201182);
    msg.setSource(45857U);
    msg.setSourceEntity(200U);
    msg.setDestination(49416U);
    msg.setDestinationEntity(14U);
    msg.source_man.assign("VUXSGCTRPBSUVTZZKAYMSDRJEQVPJBNVAICPQHMWDMHYOYUFZCKGKJNQRZHQLXZ");
    msg.dest_man.assign("PGSNDWRHBFNHIXYULBHGTXNKSYWZFLUFUIRUWEFBVDHXSPBVHQJUOKPCVDMDVDCZPJYGBSGXYNQWCOREVUACNBAYIASFZLDMSXDKAUVTDXLNANUWZVTVACIRWVEILJEAKYTMQTXJRJCJRQQLYZGCZPLHYCQDGJPEEBNFUQBKJOIBHJK");
    msg.conditions.assign("WKLGXHHXWOFWWTUHDFCOYZUGFKYXNBQEBVDGCADNITYOBKTZCFK");

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
    msg.setTimeStamp(0.640720009023);
    msg.setSource(45204U);
    msg.setSourceEntity(12U);
    msg.setDestination(59077U);
    msg.setDestinationEntity(167U);
    msg.source_man.assign("NQEBIYDKYXPPTCGSSXSWKQSGHZDDLAARMLENYMHJUOMULKQNMYHZOFBVBZUGWVSRNFDUYVAGIDVRROMMWSOYKFRWFEWWKTRJQUHWBYPXMKHTCEHLSQXXLPNPXTLLJIZSIQAACYXAVXEXTPSJFDGZWENGOQCKZUBTQJFGOHZYVCVBBRNLRGZUDOVWBTUKDCGMKLYJBAPFPNPATMIESIUVJFWGMHCEFPVDJREL");
    msg.dest_man.assign("VRZUJQZXNIKKKVFLROWNQJFZVSVHHKIUAEBUHRGIGJZVYGXTPNVTWPXMNTOPHAMVKCGFANXOJYRFFGFALRYZMPSDKZDHBCJCCOKBCAJMYMTCDBEMSXYPTISXRUKNSWWFCBGTELXSUWQHIOSDUIEWTBPHVYYNMCBSWXXRLFMWGQLDIFOTNQPMEASCWHGZOTEQAUJBYLOORVLIZHIUEUDMZGVDIPTJCJXFA");
    msg.conditions.assign("SRVHYNWRIGDOCLPIYFYQEDCMFFIKFZSFDQJNEZDNWXRBSYUCVQPCPJJTAJGGAEPZAUVQOFVRHHUTYYBKKLCKXWTHTZIXPHLCTVWKLBKGXCKJZLIRKIFUEVWHUSUBJHMWJGNMHIOUGQQORDODHYAZQBFDMXJMYCMKTETYWQCIKSLMNUEMXARVRRQOOVHZTPXNACBOGSLBDXFNZLSPMXEPGJAADBIZLLZPTXEFSNOGEUNDMONYST");
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 579594614U;
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
    msg.setTimeStamp(0.102458243593);
    msg.setSource(1054U);
    msg.setSourceEntity(68U);
    msg.setDestination(53117U);
    msg.setDestinationEntity(79U);
    msg.source_man.assign("SAEFMKOYCUZWSCCPXNALDZUGFAYLLNLJVHJHJTGSFOZCGLKYGIMVPQNPYPSRMIGCGRKAQZBBXUFYDNALEERCFFOGUVIIPDRUOQKKE");
    msg.dest_man.assign("ADEYJREUZMQXQQYTNHFLEMLPGDXVLIXQDMTZCKQG");
    msg.conditions.assign("JJIPIWZLYJVPCDTADRWOXWYQIBHXMGDZOPJECAWNNDPTFVACHZUYASLHBODC");
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 232U;
    tmp_msg_0.op = 190U;
    tmp_msg_0.plan_id.assign("OCXPOAIQJJUGKZLVWYFELHFWSDEYALIACOULZCHPIDOVROPBOMNRBUWBVQRYQXAVDJVEHFVNXCTKLOJFIKYYEMEPVVFJBESATSHQABIUNZAPKTXMPYMLWRBXJYWZHZHMYTLUDNSGRCNMSHSZKXMTDHCTNQLMBJLNGSQIULGXUXFIZFRFGVPORWXTKJJITUQOFADGMNQGEHDEPJCDEFIUBRZQZRGVBESCWDYUZIKASWSPHATOYGMXQTNCK");
    tmp_msg_0.params.assign("MPNXQHUZQVLYJKCMRUBZGAXBFUALNUEFFWWZQJYBXRTHEMEQIOKBNLMTOLJQZCDDKWDKTOJTUMCPTGZVYHGYIDNRACVXEBABSIEKQSSUCVADVYNPRONRZKATOPWLQGYJGZLFHV");
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
    msg.setTimeStamp(0.257534592936);
    msg.setSource(23119U);
    msg.setSourceEntity(7U);
    msg.setDestination(2517U);
    msg.setDestinationEntity(190U);
    msg.command = 220U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JVTVNXORIOKDMHTJMPJEGVAMCQRHYWHYCZQHWPYUKMICIMPNLFRTUXPJKZVUSABZUNJOTNSLJKOFSHNQJPOFEARLSGDGRQRKMHQMZBTVFLWURLYQCSXVCYEFPNWLNSHXPXPTCPYGZNL");
    tmp_msg_0.description.assign("OTCUBSAUUHJCGYNOSROGVRBDIIYEUQBBJWXEQUDEALOPRPKOIFGXNYSZEVZPAXHYFEIRWNYCDMLAFZQZNMHCCMZDMJBLWLJIFTFIKKXLQWIREKLXHDLIQHHECWABZWMFMTGJFYWWAXZAODNZNQIJVGJETVHCXDFVWEKPASLFZRIJLJCGFKUGAVXOMNTGPRWQBNUQHKOODGQXLBPPBVUMPSDYUTMSSERVRDPCJHYTCUASYVOTHNNGTYK");
    tmp_msg_0.vnamespace.assign("TNQWVCFKYINZBTCEZOYOHJGANEAYDPWDWEBVMRKVHJXWPEPDWDZIMIBTXCJRBITPUMCXZEMQLDVGJOQWZPBPBMOCALSGXAQRUCCRWKXYAEKHIQJALYRPSCSTAKHXDRSUIYNSYFOEGNHHWNUGFVGKI");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SNMQGFFTAJWPPARUAPEIOGWBUZHEURYSGKHGPQLMDIFOSMIAHMQBPUIULLJMTYDXJYKYXBBXTECXHSNUBBVBDTMTIENCIJXIMLVASVQVWCHZEDKNLWOXFGWXGVDGBVENOZGDAPYJCRZGTZAEDVSRMVOZUZOFUZKNTLPRVDWYZHVFNHS");
    tmp_tmp_msg_0_0.value.assign("EDGFPKXJHTNBFPYERFNNJVUYWPRQXWKIKMIGBJUALNRDLPKAXLUQPICOUTEXBRGBLKWFMTVHGSIVZGPNLBPVAYTVWVSRAYKUOEHWQTCDEZIYIGVRAPDECBHABZHLCZQQNPAXMQMHLAOSUWZJYCXYWIIYJIJPVUADBGFKSOQSTAMKMECWMOHRGIEYSYWLWVVTUZNOHBDRDMZOCFFUXQQZQECTJFJCSGOCNXHJTF");
    tmp_tmp_msg_0_0.type = 246U;
    tmp_tmp_msg_0_0.access = 142U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DHZPYYRXMEO");
    IMC::HistoricCTD tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.conductivity = 0.711392831666;
    tmp_tmp_msg_0_1.temperature = 0.739853131855;
    tmp_tmp_msg_0_1.depth = 0.455827596909;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.195630397729);
    msg.setSource(25317U);
    msg.setSourceEntity(137U);
    msg.setDestination(40979U);
    msg.setDestinationEntity(6U);
    msg.command = 180U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PUUDFNQIBCYKHNLDJJQJHFJIJRZVCIUYNOLSTCPSMGREMEQHSCKCAFVRTUXVOKMXFXMTITHWGWNGWQANGNXZYCVIDVPUCUXYQRAPQRHXBMFDFBSDAVLEAPYLPXAGMLOHJGCPKKTZLSQTMRUEJLZHIHNZREZWALKBGSBDMXJFDNJBYOADKOTSGQBUATJRPLKWPGISQWSYOBEFVEWCKWCOZMONVS");
    tmp_msg_0.description.assign("QAGHAHWESFCTNVCSFLPKXUJEMQYRWBJOGOVCYUBKRTOSVRLUSAKQFQZTIHPMIAHDQDAJVOFDXBMFMCWLXSYQUSXMZUTWYYDAEIEXTXGPZZEQVHSKDMVTCFOSTJBHEPPYPYRZIRDMVENAZJLMPHPYWLHCSBBKZGQHRUGOGLFGRCRIENAOELXJJNPSZBNWILFIJNNTJDVMAPIUUFLGIWDZODIWGW");
    tmp_msg_0.vnamespace.assign("DXLQJWFNXDUHLOJDCBJUXXLHAUQIRPGGDFMPXQSZPTCBCOSMHLREGMKAHHSAHVYGPZIERCVIFXSPGYIQBTSAFJKPOWYOAKAYRRITHBUXEWQJMWOKDUOKANINBFLGGWMUDXLMJUTSNWZOKWRQFTVMUQQWMOQVVEJNZKEXPRANMGTDSZBLOGF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XABJMUJLZBQZWZHKNSPKTZOLDFJSTXBYDWZQWATHUJVWVYYFJAQWVLXMQCCELPGABZYMBCGVDLLTGAEKIYIMLRTRFAKCKHJRSNOJCEBRDTPANHDUZTVPCCUJASFDWFGUCTGDMLBKCBOIXQUISWPGQIUHFMHVMWNRNTRQGOAVPAPGNCEKVMBVUFZJOREPQHXOIXSXRMIIYPJYYLZGXUIEUOSKNSKWMYFZDFNEHWNXQS");
    tmp_tmp_msg_0_0.value.assign("ICEXOIHPTZWBDBLVBAIQDVYEQTBQLENRQLYZYDYOMXUFPNACGQRXWRXSUFWASEMCIIJFHDDUNAKLWJSQTGIOCSZXJBQTWAEFDKRMJAJPLXYVMERHWBCUOSMJLZRXGARIDXFJTVWUULENDLHBKQZFAESFLJVCBVYGWHGSVMMNDJPUROKZWXU");
    tmp_tmp_msg_0_0.type = 236U;
    tmp_tmp_msg_0_0.access = 10U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GKKHNTGXXTZWSCMQYALBCVHUZOAOJIKGZDGSOWXHREJMCNMGIINQDEBKYQYFWJPBUSUQYPWEJSIFAASHAEEZTTQKWJVUIEYIDEGHODFMWLOSNLJKXMCVQEZDRNUDJCTPBQUFLTUHVVWLPRNCWAVBDXJTMRZLLTFAOYGXCKAZYBRW");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("YNGSMFWJKWFOFPYAJIKQZYPNPLOMRWDKTLJSGAVVYTDMDNOSXDOYIQIQLBGCUZPZCUZPPXXGGUHCVXUMEOUJEENCSYGYDBR");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.621233221141;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.57285389256;
    tmp_tmp_tmp_msg_0_1_0.z = 0.307154305098;
    tmp_tmp_tmp_msg_0_1_0.z_units = 210U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.761500399114;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 208U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.x = 0.750062234028;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.y = 0.470676984353;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.z = 0.725458342409;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.t = 0.37884598474;
    tmp_tmp_tmp_msg_0_1_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_0_1_0_1;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.vid = 27858U;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.off_x = 0.736143870748;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.off_y = 0.47156223927;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.off_z = 0.300160569895;
    tmp_tmp_tmp_msg_0_1_0.participants.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_1);
    tmp_tmp_tmp_msg_0_1_0.start_time = 0.727576258066;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("CSVKBMHIJVONHDXOOXCJJDOTRBAHKROWHTULRISGVZAWEXIJILAPZEWKQBUDWPPYEAZCJSKYALWLTVJXFPHCFRXMPFIRYGNQBWEIFKPSLNTRKYCAMDWCOEVYXISNRSZJOLMZVEQTTMHEYFKDWQFO");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::MPFVariables tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.ctrl_cmd_v = 0.771835341744;
    tmp_tmp_tmp_msg_0_1_1.ctrl_cmd_omega = 0.364391131272;
    tmp_tmp_tmp_msg_0_1_1.sat_ctrl_cmd_v = 0.184562866406;
    tmp_tmp_tmp_msg_0_1_1.sat_ctrl_cmd_omega = 0.746871055161;
    tmp_tmp_tmp_msg_0_1_1.robust_v = 0.284337634448;
    tmp_tmp_tmp_msg_0_1_1.robust_omega = 0.318403285301;
    tmp_tmp_tmp_msg_0_1_1.gamma = 0.234459840223;
    tmp_tmp_tmp_msg_0_1_1.gamma_dot = 0.890594022606;
    tmp_tmp_tmp_msg_0_1_1.g_err = 0.668235781712;
    tmp_tmp_tmp_msg_0_1_1.target_x = 0.489021093016;
    tmp_tmp_tmp_msg_0_1_1.target_y = 0.690477162492;
    tmp_tmp_tmp_msg_0_1_1.target_z = 0.894375776767;
    tmp_tmp_tmp_msg_0_1_1.target_vx = 0.368873000573;
    tmp_tmp_tmp_msg_0_1_1.target_vy = 0.614023963144;
    tmp_tmp_tmp_msg_0_1_1.target_vz = 0.303242646653;
    tmp_tmp_tmp_msg_0_1_1.x = 0.0768762730497;
    tmp_tmp_tmp_msg_0_1_1.y = 0.852468123566;
    tmp_tmp_tmp_msg_0_1_1.z = 0.948931844713;
    tmp_tmp_tmp_msg_0_1_1.vx = 0.503861551129;
    tmp_tmp_tmp_msg_0_1_1.vy = 0.415946366274;
    tmp_tmp_tmp_msg_0_1_1.vz = 0.0606145744223;
    tmp_tmp_tmp_msg_0_1_1.pd_x = 0.12514206104;
    tmp_tmp_tmp_msg_0_1_1.pd_y = 0.487981503681;
    tmp_tmp_tmp_msg_0_1_1.p_ref_x = 0.985561737545;
    tmp_tmp_tmp_msg_0_1_1.p_ref_y = 0.40570454351;
    tmp_tmp_tmp_msg_0_1_1.norm_mpf_err = 0.781353325002;
    tmp_tmp_tmp_msg_0_1_1.mpf_err_x = 0.128781933513;
    tmp_tmp_tmp_msg_0_1_1.mpf_err_y = 0.526651748624;
    tmp_tmp_tmp_msg_0_1_1.mpf_err_z = 0.708311065925;
    tmp_tmp_tmp_msg_0_1_1.err_x = 0.302409183914;
    tmp_tmp_tmp_msg_0_1_1.err_y = 0.374727177249;
    tmp_tmp_tmp_msg_0_1_1.err_z = 0.0192837718288;
    tmp_tmp_tmp_msg_0_1_1.start_x = 0.249360406069;
    tmp_tmp_tmp_msg_0_1_1.start_y = 0.963403633348;
    tmp_tmp_tmp_msg_0_1_1.start_z = 0.534795854456;
    tmp_tmp_tmp_msg_0_1_1.end_x = 0.30836081018;
    tmp_tmp_tmp_msg_0_1_1.end_y = 0.453312519614;
    tmp_tmp_tmp_msg_0_1_1.end_z = 0.641745517341;
    tmp_tmp_tmp_msg_0_1_1.stuck = 254U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("SCMLXKAGXGFHOVTBSLYMOTEQPXZDFTAYMNPCZUJQDQMLGYPFLZVPKXBKRFFTPJIHVQNSZKDCOBZWNESSBMRFTONKQWTGHDXGRUJXWBHWOAAGYFRWINVJAMORL");
    tmp_tmp_msg_0_2.dest_man.assign("NPPMYWOMBKYUPUKXSGODQCSAKJGKIMLZLJCMEFUUDZQHXMTFBBWDELOEJBN");
    tmp_tmp_msg_0_2.conditions.assign("VCCERZCYQTHVTJAGPPDZKIFZSNAUMMZTHLGEENXOFOIEWOSRJOMVVIBMXMCJGCLEHIOMBYPTCGIGWHQWKFSDHJUBIEKKSPWYQRGTXQRXWURWEDJKPUJNVDJYOLWUNIRAIPPBYMCHVOKLSAATBSSCXNAHZKFQZNZEKDAFBDFABLRYWZVHSOCMDUKERXLNXRQUHQLFJFIJYGAGQEWUUGHDQGLPOMYJYXPTZTBVVSVIWMLXSBNDXDQTNTZLYFAFP");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::StopManeuver tmp_tmp_msg_0_3;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::PH tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.value = 0.402209299797;
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
    msg.setTimeStamp(0.443291555383);
    msg.setSource(18001U);
    msg.setSourceEntity(70U);
    msg.setDestination(22720U);
    msg.setDestinationEntity(224U);
    msg.command = 234U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GBVSMJYUWEXDRTIALATMVTVJHNDULBUHAJUDDCOBZKGGDISBSCOVBULYDPRAXYYMMYEUCIEHKMYOBWHYPTNZKVYMAZPIKUEPWFFSEINPTFJHKGQRTRXSOOXZOICGCTECWCDVGVMJBKELKJLZPCAJRFFXWDIA");
    tmp_msg_0.description.assign("YGDHPNDSVSNWWKRGLPJHQVPYSVVFVIXKWXUDAWPVOSRUCOLNITAEJUSYWZQOZIXICRRQZWRIPJUFBJDOBFGKHHGJHUTMMCAGAIMCLIZYNWUZSJVYFMGLTIAMIKXBBUOCLUDJETRYMCUBWKAQCAQEFYKQQXKJLLPCWSWDEEQKBEXKHDLEGIHURMX");
    tmp_msg_0.vnamespace.assign("TFWWUZNHTRCIUXLTGSPCMPIJQLGIUSMYQKLLXWONCUAGSQIBZCKVYALZNLFXKEAHKZIQEZGOQNRNCBFVOABJWJTQVSPLOPHMXEJWMAVFDRUBJKFOYNDMWJYSGZLKOFHDJBUIIBAUIQIJMRGZPNECSCAHTHDKTDEPKNDDWOKHLPWXTHFCRRECEVWYGVMVFTTBYDBPBYBPQDJLXGFRUOZOEMRZQTSVSFVXHIQACXHRORZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QPJXXEHWSPVOWKNCPBKXVRYAVYFCPABKTIPCXCOEZUPTZZWVGEJJADBIRLJQPGJGOVWZMRWNHYLVIFVIHDTZTSYJCRMHJLWQJSIUWDLFUXGPVRCGYFHEQTCVKTKERHKXKMDVETZOXYUAJFYAXYPNNBLRCFHKMNZSHFMSNDQEBOUSSLBGMZ");
    tmp_tmp_msg_0_0.value.assign("XQFCUPFENBLSREOMSQALRBFVXABFHGHEUYUIKHBJUWJHRVLJDABKPEEYPGV");
    tmp_tmp_msg_0_0.type = 149U;
    tmp_tmp_msg_0_0.access = 144U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JZVGUTAJKDPEOWKCKMPZBTJVLIBXDZTYRQLLDZSSTWGRUVGAZTLYOENHYXWRKGXTMNSOMBMHNCJUCWMMQDQEDQMBBYEZCOJJNNHFREFYYUOFGEXXXCVDFCXFAUUQLZCAWWGOKGBJRLAIPDAJTJYWWZVIPWLDINUKMBKSGYVIBQRQSPIAVHUXDFVLQSSPZANUXEFAYVGCVHRPPKIFLHEPWAY");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("KUVFSACXJILUXCDDODZRYGWQATIUWQXKSUBSBNZBBAVGWQCMCPJOMDXHAWETKZGTRRZCGJIMEOAVDLOGJUPLFIMRGZHVTBREDJFZTFOBBJYTNOXYHJVFIRMHUBYSXLAQZIWOTPLYMWBISUEFLLSUKPZESXJZPFDASPGKCQHKYHAGUNQIPNLLGRPNDEVVYQV");
    IMC::Sample tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 2215U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.68766548872;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.713685907258;
    tmp_tmp_tmp_msg_0_1_0.z = 0.359066757967;
    tmp_tmp_tmp_msg_0_1_0.z_units = 93U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.0815379590416;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 53U;
    tmp_tmp_tmp_msg_0_1_0.syringe0 = 81U;
    tmp_tmp_tmp_msg_0_1_0.syringe1 = 139U;
    tmp_tmp_tmp_msg_0_1_0.syringe2 = 97U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("CAASEAOEYDULSAXBQZCDRWIOBZBDSARVUYQTTJSIKYRTK");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::QueryLedBrightness tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.name.assign("DHPZVOXXILPRUIOLECSTOEDFGGNYQKNRVZHYBGMEFKQWXIRWMNWPQLSYNMXBGHFOWMVHNTCNSZYXJFUOJVAZQNKEZDGFBRXGJUIFMCQTPIEWDKEAZJBIYCKSKOOZKELQBYCIRYUUBDULVJSUK");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::OperationalLimits tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.mask = 168U;
    tmp_tmp_tmp_msg_0_1_2.max_depth = 0.110092340816;
    tmp_tmp_tmp_msg_0_1_2.min_altitude = 0.357118373403;
    tmp_tmp_tmp_msg_0_1_2.max_altitude = 0.377084598894;
    tmp_tmp_tmp_msg_0_1_2.min_speed = 0.810257194503;
    tmp_tmp_tmp_msg_0_1_2.max_speed = 0.58776515526;
    tmp_tmp_tmp_msg_0_1_2.max_vrate = 0.119889635571;
    tmp_tmp_tmp_msg_0_1_2.lat = 0.95903793742;
    tmp_tmp_tmp_msg_0_1_2.lon = 0.260027504676;
    tmp_tmp_tmp_msg_0_1_2.orientation = 0.186981747283;
    tmp_tmp_tmp_msg_0_1_2.width = 0.40945751974;
    tmp_tmp_tmp_msg_0_1_2.length = 0.328634226162;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::Map tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id.assign("WKEPQYYTPZHCAMZXUAIMVZCEYRHYUYZBMHPXKUMCRBHNIRKZOONVAFRVFVQHCIKGYJYRFLQSDFSUVEMLFYJUUGSTDSWTBRTBS");
    IMC::MapFeature tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.id.assign("KTYFHJYDZXICRKUBMFAELEAEEBKMPMCHSTTNMTODAMGKYJNVCPDVERHYZQMPGSBQAEEANBCYXDXRJVNLUXLRDBGSBWFSSUZWLCVTSFJDSOIQPHROZFYR");
    tmp_tmp_tmp_msg_0_2_0.feature_type = 236U;
    tmp_tmp_tmp_msg_0_2_0.rgb_red = 40U;
    tmp_tmp_tmp_msg_0_2_0.rgb_green = 174U;
    tmp_tmp_tmp_msg_0_2_0.rgb_blue = 239U;
    IMC::MapPoint tmp_tmp_tmp_tmp_msg_0_2_0_0;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.lat = 0.621385809741;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.lon = 0.326574468933;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.alt = 0.177099764812;
    tmp_tmp_tmp_msg_0_2_0.feature.push_back(tmp_tmp_tmp_tmp_msg_0_2_0_0);
    tmp_tmp_msg_0_2.features.push_back(tmp_tmp_tmp_msg_0_2_0);
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
    msg.setTimeStamp(0.814063936385);
    msg.setSource(43643U);
    msg.setSourceEntity(219U);
    msg.setDestination(13433U);
    msg.setDestinationEntity(10U);
    msg.state = 174U;
    msg.plan_id.assign("ULSAOUCQYEFWCUETYWGSBMMYKJYDSWQXRJQFGIWRKIAMDYMJAAYWRILXTFLSUTXDQAFIGBZUCZFNZJYBPKHZOGHQUVBDSTLSIMTO");
    msg.comm_level = 101U;

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
    msg.setTimeStamp(0.874756858764);
    msg.setSource(41974U);
    msg.setSourceEntity(202U);
    msg.setDestination(32649U);
    msg.setDestinationEntity(28U);
    msg.state = 239U;
    msg.plan_id.assign("ZCGXKFTBUKAQKPPCIUVQLGXPDRERXEIIDFNJQDREVYJPSEMOMNOZUUDXHYJCBTSFAYSHILKGSSBFGLVVBOBPTYHOHMAVQRNKONPVPNLVPWWFQAIDECOMQFWOBDGMWIFAXTYXWMBZBTESJUHNTZECWCFDUTCFALHWLHTTGGGHXKHLMWJZYYKINDOLJSMQCROTAQXKJIRCRZDGUIGJYVKMRIXWSZRZQZNCJPUEPQAWDREKMZSNJH");
    msg.comm_level = 238U;

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
    msg.setTimeStamp(0.670141647016);
    msg.setSource(64531U);
    msg.setSourceEntity(13U);
    msg.setDestination(49359U);
    msg.setDestinationEntity(225U);
    msg.state = 93U;
    msg.plan_id.assign("JPSXZBLHYSYMGCJMKBDXCVMPTZFYFDUVIJHPWDISDYEXHNQQQBSMVZPEIFLZOFXOHPMRFJINBKCWZRKIDONEBUGLLAMUDCRABCYIWDSLXPJRTKTEVRPSHEOXTIFGYFXLTYGWYSQUMMCGGQITRMVJWINDOACNKRNSNPDGZEIGQXHLBCNAOVOUTUSAXKWUXORQJRZTKJTEAJCZYEOZQCHJAF");
    msg.comm_level = 108U;

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
    msg.setTimeStamp(0.452758597728);
    msg.setSource(12381U);
    msg.setSourceEntity(32U);
    msg.setDestination(57744U);
    msg.setDestinationEntity(100U);
    msg.type = 253U;
    msg.op = 62U;
    msg.request_id = 42390U;
    msg.plan_id.assign("QZCHZLUBWSCYPXZKUHWSNKJHGGTIYUMTLYSAUBBKGHQBLZEAVGQTUTVHDMPIRWDJIEQGOWXHYSZMQBXIIRDDFALXFMTDUYLKURERPWYNHWJSJOZJMIETNPOFMNFQEMUSVVVZCWKMJEACN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VSTHPWAPFIICGGGZUWRSFAXELXMUSEJHDEVNNEAGDEJDMPFBLZLMQATQFJTJOBSDMJPCWEHOBDQNPWSHZZYVBKZ");
    tmp_msg_0.sys_type = 49U;
    tmp_msg_0.owner = 45410U;
    tmp_msg_0.lat = 0.105487213192;
    tmp_msg_0.lon = 0.698668206578;
    tmp_msg_0.height = 0.310795004568;
    tmp_msg_0.services.assign("QSPQOFOJDKAUTEGSWFUKNHKAUYFPHIAAMDAUGYWBSOWFKMTYSVTNLZEJEUCLHVBRCCRELHXBLLAZGQKWPNKOZNFIPBMMNYTNVAPWULPITXMMJYRDOQCDSYKBVBXPOTESUZERXCDWAACLJBGXFISPOMIGFSYWVYXIRQRNDXBKMHMGQCWHQUIDFKFIHTZYJJEFXVGRTGSXZEJNRXLUSALPYICCEVP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DCUAECYIMHFQGRJGGWHSIVPGYAIENCLAZ");

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
    msg.setTimeStamp(0.859014915045);
    msg.setSource(50074U);
    msg.setSourceEntity(141U);
    msg.setDestination(47023U);
    msg.setDestinationEntity(11U);
    msg.type = 95U;
    msg.op = 81U;
    msg.request_id = 59616U;
    msg.plan_id.assign("LBNYOZWOVPRWXGAPMKROIXSNHFZZQTBOKDNHOVCERNFELYDNHVYWHUSBSIHTMWLJCGZGUZLCISKHXYADAFPOFTGTCQQNEETPFUKAXMCAXVDJLTZEDMESISPEGVJABCKYRAJGWAJVEIMQOQPDEURPYFOVVJYHZUHUXRYKHQGREVMLRXICMRSUOCPFWXBKQKIXMYBJLZZTOKBSWTBXNUNJGFSCJTAZPWATDGBINWKIYQLGSVBLIDMNWUCRP");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 1558U;
    tmp_msg_0.flags = 87U;
    tmp_msg_0.lat = 0.743385219984;
    tmp_msg_0.lon = 0.542036724156;
    tmp_msg_0.start_z = 0.542947402205;
    tmp_msg_0.start_z_units = 133U;
    tmp_msg_0.end_z = 0.0159903910989;
    tmp_msg_0.end_z_units = 228U;
    tmp_msg_0.radius = 0.766747590721;
    tmp_msg_0.speed = 0.272471815677;
    tmp_msg_0.speed_units = 37U;
    tmp_msg_0.custom.assign("TGHOGRINSWOCBNXNBAJDYJXOWBKVKIPCYVLTHQOEZVYKQGNORUDHURWJPJLJZIRKVRUBQEFSQUMXMIMPASHZTLLZQUHVJKTVXMNCMWJIWSQAOUWVXELGDZFWRDWPAIROIAGRLXZNBXEHWDFSKDPPTQJBKCAMDQHUNQDQXWFODCVIYFSBYJCKFCZBCVZNNYAFYOYERKPOGGAPCHTBGBM");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SZXCHVPCZLEFOZFLGXBWKWLDSGMBKPFRTDSNRFSDUIAYKVKOOSUGEEKGLIGJPEQXWISSFKQJWYLODPAABXTCPAUWGVIUPQRANUYLIANU");

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
    msg.setTimeStamp(0.797124210442);
    msg.setSource(7067U);
    msg.setSourceEntity(7U);
    msg.setDestination(20389U);
    msg.setDestinationEntity(236U);
    msg.type = 95U;
    msg.op = 134U;
    msg.request_id = 54182U;
    msg.plan_id.assign("FQGWJBKHFIKQMDFQSEQZYGCYWLRJUZIJMPUVQNXFZRMJVRDUWULFBHNHHNVIXSTSMKRRXAOBSSXYQQEVCGISFUNFEMTFMCADBDGHYBULJJGISNPNRBCANHFZSJLOAEGUOPEECENQTTZMSDWZJADUVGRKGTLOJVPTRVAPIBIKPIELHEMCPXRPLRVCKUBYOKNSIGWMLVOCBKYKAIAQYNVOTWZUDPCLKDTXO");
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 49987U;
    tmp_msg_0.x = 0.175192840087;
    tmp_msg_0.y = 0.48075153967;
    tmp_msg_0.z = 0.435043769778;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MWCMHMCBHD");

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
    msg.setTimeStamp(0.00383602431607);
    msg.setSource(63962U);
    msg.setSourceEntity(188U);
    msg.setDestination(6463U);
    msg.setDestinationEntity(40U);
    msg.plan_count = 32770U;
    msg.plan_size = 2741375804U;
    msg.change_time = 0.930944981221;
    msg.change_sid = 20385U;
    msg.change_sname.assign("LOHCWGGXDVDRZFFSCJXOLCVGMHEULOEAZUJLWACSCRBVXOSFTHCNBPGNKYPXNMMRPNJSFSCNIHIYSWTPVUXBRAXSOWOHQUUVEKXGRYWFJTTAIFGHTWPWTVWRCJLCDBOLYJRGNN");
    const char tmp_msg_0[] = {-115, -64, 18, 51, 61, -66, -44, -63, 60, 46, 29, -90, -110, -56, -90, 39, -41, -105, 56, -84, -73, -14, -23, 19, -19, -39, 11, 12, -42, -52, -125, -44, 73, -53, 17, 73, 80, -115, -11, -13, 2, 34, 113, -38, 20, -127, 27, -102, 101, 47, -13, 90, 92, 53, 37, -84, -43, -7, -92, 58, 47, -65, 66, 35, -78, 34, 76, -27, 124, 115, -62, -16, -45, 35, 54, 73, -67, 114, 118, -30, 11, 76, 8, -114, -15, -80, 58, -16, 1, 119, -17, -92, 11, -11, 109, 24, 91, -80, -44, -52, 67, 48, 125, -124, 85, 113, -73, 118, -1, -61, 32, -117, -87, -40, -63, -70, 29, 105, -1, 81, -72, -81, -19, 35, -77, -7, 0, -116, -59, -82, -60, 112, 93, -92, -15, -30, 28, 12, -62, -12, -59, -18, -55, 21, 84, -127, 32, 70, 33, -1, -72, 60, -121, 30, -84, -123, 126, 75, -12, 33, 39, 72, -1, 106, 98, -93, 67, 1, -120, 24, -109, 28, 21, 88, -55, 93, 69, -7, -47, -117, 125, 52, 24, 103, 95, -110, 58, 4, 82, -40, 47, 88, -94, -38, -33, 68, -35, -83, 23, 27, 98};
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
    msg.setTimeStamp(0.443954810387);
    msg.setSource(34222U);
    msg.setSourceEntity(244U);
    msg.setDestination(8934U);
    msg.setDestinationEntity(111U);
    msg.plan_count = 13507U;
    msg.plan_size = 929708814U;
    msg.change_time = 0.692230542288;
    msg.change_sid = 8057U;
    msg.change_sname.assign("KYWTWPPPUKXIDKEEZSGROEUMPEREGFWXHNAWLCEADTJZQECOXMJKIHKXMROOOJMANDVIZVONYHHXKVLTTDFYRAPQRLSANBSUGKIJHSFQMCQFQLASNGBQMZQWCGVNCFWZPSLGPBBBUTPFJCUCAVBGEJEDNVRGGCUYNCHK");
    const char tmp_msg_0[] = {37, -112, 34, -100, 92, -92, 85, -95, 90, -115, -92, 125, 52, -76, 43, -46, -47, -109, -15, -18, 86, 120, -43, -97, 32, -86, -106, -116, -88, 16, -49, 57, 81, -102, 51, 13, 119, 74, -83, -58, 122, 109, 106, 19, 9, 95, 6, 53, -12, 93, 47, -76, 72, -24, 38, -55, 46, -11, 77, -112, -12, 33, 23, -103, 9, -126, 108, 41, -45, 104, -126, -100, 104, 28, 47, 11, 14, 52, 43, 37, -77, -113, 65, 46, 109, -52, -71, 25, 69, -54, -10, 58, -128, -24, 103, -119, 37, -69, -25, -3, -32, 63, 3, 0, 41, -108, 84, -122, -64, -66, 60, 56, 108, 47, -25, -56, 97, -118, -39, 122, 2, -91, -39, -78, -54, 90, 6, -8, -96, -75, 55, 66, 11, 32, -28, 95, -89, 103, 96, 9, -55, -16, 64, 15, 47, -95, -121, 58, 79, -87, -78, -116, 26, -75, 117, 41, -123, -36, -107, -16, -91, -116, 125, 116, -97, 69, -27, 106, 118, 109, -30, 116, -96, -31, 102, -113, 111, -22, -96, 70, 126, -11, -105, -59, -124, -104, 1, 34, 34, 16, -50, 43, 96, -123, -49, -43, -87, 102, -28, -68, -63, 125, 28, 19, 81, -31, 81, -86, -120, 109, -127, 46, 40, 88, 76, -69, 81, -53, 107, 87, -35, -50, 92, 42, 36, 26, 48, 10, -106, -118};
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
    msg.setTimeStamp(0.981230928531);
    msg.setSource(53683U);
    msg.setSourceEntity(244U);
    msg.setDestination(25548U);
    msg.setDestinationEntity(155U);
    msg.plan_count = 58334U;
    msg.plan_size = 1038680889U;
    msg.change_time = 0.906356498753;
    msg.change_sid = 26005U;
    msg.change_sname.assign("FFEWIOXDNYHJBSRDYMLUILUGFEABRWVZXSQBTFANRBAYTKWKJEVRTXASTBJTOQCAVDMUXWYTSCLIYPVXKNOHMLHMUFSGJWRAPAWOOEIZRHQZUJVTBIIKRCYSRDNIBTNQLWHCVAULHBNQGPVPTFYNXXHCPMUETDVAZIPFMGYKLRXRGZJGNOFKXLNJZJKVGCPBBJKFPESUFSGUKJDHQDKECSZYV");
    const char tmp_msg_0[] = {89, -104, -51, 21, -23, 44, -94, -101, -51, -61, -5, 120, -32, 122, -102, 72, -42, -54, -64, -69, 87, -51, 52, 98, 92, 62, -109, -8, -65, 44, 29, 51, -4, 114, 126, -105, 21, -112, 28, -69, -98, -63, 51, 61, -3, -105, -59, 16, 69, -84, 75, -34};
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
    msg.setTimeStamp(0.657909791287);
    msg.setSource(2328U);
    msg.setSourceEntity(95U);
    msg.setDestination(22418U);
    msg.setDestinationEntity(156U);
    msg.plan_id.assign("DQFIAJSXCHAUGPGGIPPXZIQHDLNEWSTLIRVPGXFPYHOFGUWWXRWRWDZZMKKFQCTKNEIXWHRGSTPP");
    msg.plan_size = 5091U;
    msg.change_time = 0.821965925385;
    msg.change_sid = 12895U;
    msg.change_sname.assign("KYDTVQKLMWBPHMPMQRZKIXCVPGKXRGOSXIUQDWKFNJVRUSHI");
    const char tmp_msg_0[] = {96, 97, -36, 6, 11, -61, 18, -85, -30, 0, -14, -56, -55, -31, 59, 60, 4, -78, -9, -78, -5, 92, 56, -76, 36, 13, 86, -15, 21, 76, 111, -6, -61, 65, -5, -10, -118, -30, 12, 32, -107, 97, 76, -3, 112, -13, -38, 4, -54, 53, 109, 50, -104, -48, 85, 56, -7, -100, -42, 80, -118, 111, 102, -101, 5, -81, -125, -106, -42, -122, -56, 78, 55, 7, 66, 36, -38, 19, -123, 95, 9, -66, 28, 100, -14, -107, -65, -71, -28, 28, 49, -94, 64, -41, -13, 121, 8, -107, 52, 101, -72, -96, -128, 61, -21, 72, -31, -67, -10, 57, 51, 38, 95, -37, 25, 94, -5, 99, 13, 88, -103, 10, 11, 99, 103, 20, 16, 49, -27, -113, 76, -124, -38, 14, -66, 68, 107, -110, 126, 95, 34, 32, 35, 91, 103, 61, -83, 55, 58, 27, 21, 23, -78, 121, 52, -69, -22, -112, 65, 99, -9, 40, 55, -36, -106, 30, -51, 84, -26, -23, -100, -93, 40, -125, 82, 94, -57, -124, -126, 54, -2, 66, -84, -120, -30, -24, -76, -23, 92, -95, -28};
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
    msg.setTimeStamp(0.992512636384);
    msg.setSource(40371U);
    msg.setSourceEntity(22U);
    msg.setDestination(54543U);
    msg.setDestinationEntity(68U);
    msg.plan_id.assign("ZLKYUKLIFHNWGOVWEQMCQKLTBMHHISCBDCXYSTIRGVGQETOEOQJBOAVQVKXUEUVWXHARKTVRRNWZMYXEXDFFELWCOGVBOIFLMETMUZJOWWIEPRSPWPXZUZYFSCBNTHADYZTIJXGHOLPHQSPJMKHWSSMGNZNHCDDCRFNLG");
    msg.plan_size = 36551U;
    msg.change_time = 0.647615123351;
    msg.change_sid = 63669U;
    msg.change_sname.assign("AOKRLCPESGUCTRFTKCNEFNUHMRISUKSPVKHBPJXUWZYPKNGTFUXPVVQHWKRYZBMKRQHOFOJXPGIBVMMEGNROFWVEDAQFECYCGOGHSBXBDVQBYDGTOJDSAIEQKZPNCXWIMZTQFXARAWTDARVYMRNNQLOBMEZICZPCUJWIUJZVDPLDMYEHYJVZYCZSIMXAALHG");
    const char tmp_msg_0[] = {-8, 80, -115, 71, -38, 19, -69, -48, -95, -82, -76, -78, 30, 87, -48, 68, -108, 57, 0, 37, 7, -33, 9, -64, 76, 97, -43, 88, 20, 14, 109, 108, -75, 123, -115, 98, 48, -123, -49, -33, -29, 59, -55, -8, -123, 20, -116, 44, -45, -84, -46, -26, 54, -74, 50, 28, -52, -123, -127, -80};
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
    msg.setTimeStamp(0.0631402439786);
    msg.setSource(42923U);
    msg.setSourceEntity(254U);
    msg.setDestination(44425U);
    msg.setDestinationEntity(93U);
    msg.plan_id.assign("JCKSKRJSDCTTUWGTYAONURWDRVIJTHBAHSRWGCAMLKOCXICXEQJPLDBVAIXMQYGLPLFIWNYLZIFTMXPHXWTEDJNGMYOIBPVIUAEPSDVPNMAXUDZFIHQKDCQEHTRFRQJTYCYRZWPZSCMBQZBLKPAYOQXVCGRXYSGE");
    msg.plan_size = 9866U;
    msg.change_time = 0.0720028436359;
    msg.change_sid = 63911U;
    msg.change_sname.assign("MZHNIHWPZAIUDNVOSTGGAUNYFKSUJBTTDPOSZMMRKEHLOJUKWCEUFACRLHNJJMIENQWBLYRHCTKXYLENTSXHPCCTRXTMUBP");
    const char tmp_msg_0[] = {45, 111, -47, -83, 92, 0, -54, -53, 37, 47, 96, 120, -125, -30, 3, 58, -64, 59, -22, 121, 74, -50, -111, 47, -123, 31, -87, -11, -50, 78, -100, -69, 103};
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
    msg.setTimeStamp(0.591507401377);
    msg.setSource(41272U);
    msg.setSourceEntity(50U);
    msg.setDestination(47983U);
    msg.setDestinationEntity(36U);
    msg.type = 183U;
    msg.op = 166U;
    msg.request_id = 64187U;
    msg.plan_id.assign("ZNPPZKFZMDULIJORSZKWBIEFUCOQPDFHXLESWJJMYUSEAVWMWLVFHBUAHDEPQBPUSZNAQUITGRJOUNLXQOSJFTKCEDQKXZPQXG");
    msg.flags = 18417U;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.844084412184;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GKMTKQSOILYSUJAIREBJFAGVAVDJWSWLXPERSAUTIJNYMOEBHTMJYREGBIDPOQDLQOAZDZUCSJDDKAWMMFAWKUENPUNOUOOHHTCITRRDHKMPNESCGOA");

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
    msg.setTimeStamp(0.710834005377);
    msg.setSource(27380U);
    msg.setSourceEntity(244U);
    msg.setDestination(46215U);
    msg.setDestinationEntity(113U);
    msg.type = 128U;
    msg.op = 123U;
    msg.request_id = 11909U;
    msg.plan_id.assign("TEZLYKWBNMMGFWIVLDDYJCTMJOKXKZYAOOMWDJNUXUNBZNWKUPEICEUOFIAQXDZIQJIHVFYAJBUSAGSNZCRVCEUGCEKRHNPQIXXXERPBZHRAKVQJLRAMPHMFLMANDATNIMCXGKUZHYRISPBDWRDFSTTF");
    msg.flags = 63126U;
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 122U;
    tmp_msg_0.plan_id.assign("ZXUSBSIYGYQBIFINIXNGTWSBTYNZPSRHXPMQAJLTFECLEDJJQSUYJDMTOAVMWFZVTMYWQPRRDBTXITJUTEMAVUUFOSHDGZYQKGNXRVRXSKCNZKHSALDOGJKCDHLAFWOHCWDDVLNLKOQDKAVKSEZLCKMEVMIEXYECKCNHPUWR");
    tmp_msg_0.plan_eta = 752137945;
    tmp_msg_0.plan_progress = 0.822889031467;
    tmp_msg_0.man_id.assign("GOJOAYBEEPFWILXKFCLNRSKPSWXBQRJPFEEYQSBNHPUMUZMVGXZHGMMBYMBBEWONUGKGGIHHSZJJTPICQANQIUTAIKNXLJEXQQQTZKYZPTKWNZSAUKZXGZLCVTJWDRGSFPJLXPMLMDHTQLVUFYJDPUVMCGNAPISOLNXHRHCAVWOJVDCUCWTHFCQFJFMTV");
    tmp_msg_0.man_type = 8268U;
    tmp_msg_0.man_eta = -33337528;
    tmp_msg_0.last_outcome = 189U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VVWGHDYWQFQJHVDGZFAIRDQTPWQUBTTPBTSGASRFMLIUNKHAGZISFXRVAMZMMDBWSUJTECOBNCWMBPOBIVEQZNKUHXFOAJWYQDCJEHLQMTUXIGRKZCVWSAILCYZLXALQGYIXKDPJLLZJRIEDGPIAUXYARYOEOMQMDMLOCUWRHKEHBEKJPPACDRXGUGHBFOVTFCDLFNYGFZKTRMJINKXVVSNUEWUOSSCTKTOHFYYZRLVHOJSXQWZPEJKNCPEB");

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
    msg.setTimeStamp(0.10765994561);
    msg.setSource(63323U);
    msg.setSourceEntity(158U);
    msg.setDestination(29915U);
    msg.setDestinationEntity(169U);
    msg.type = 229U;
    msg.op = 253U;
    msg.request_id = 52554U;
    msg.plan_id.assign("ARJUZCQVMKUGSKELRVHSXBKBKGGIUVCAJVPEZDDTODYCIBKQTFPIFRMHMGLQWBTWOLDAGPJAIYHOYYWMTMQVUVSMZOCEOMWSF");
    msg.flags = 34254U;
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.931641851513;
    tmp_msg_0.dist_min_abs = 0.409682973887;
    tmp_msg_0.dist_min_mean = 0.427308527249;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VJUUKQCEPALYICMNVGAUNHSGIRSHFKDGYPOXIJPZXBDFLUUZCLPNIEKTAYRHBYESYRSKRNXSFCVUWTQZTUWXLCYKIPGQFVGFQFZZYNJWEYJBJVOMTSARXQOEGWGMZWZJDBBINUMKSAKGKTRTHLBQAXVVPMNXLDBVRIDJLMFQDHLUITREWEQTZOTERXSDQCBPAOCJCZAMBOAPRSGNFJKAC");

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
    msg.setTimeStamp(0.428679010193);
    msg.setSource(6532U);
    msg.setSourceEntity(146U);
    msg.setDestination(2676U);
    msg.setDestinationEntity(225U);
    msg.state = 4U;
    msg.plan_id.assign("LIAMJIJORWJCSEEDPIATZMJAHPBLURAATXKRXTWCCWDVQDFXTSTGIFBZVCZOVNIADTRLQYTDNPGQLHHPQOQELSUOSVMLLEEPNTFGFAKMPEMWIKNJUPEHBUBBXNYOBRIZHVJVFXNWFQGYRLRYPRFKMOJOCOSOSJGYSVAKZQMGKDSZYAYUIXENLNGFHECB");
    msg.plan_eta = -109315962;
    msg.plan_progress = 0.319023843067;
    msg.man_id.assign("AJJBZMPKRAYVYQFSDQZIJITLUTUKEFDVYFDJNONRPJYGPOALSWQNCJWQWOFHXUBDXWUYVZSZSGKFVLRNFBJHGYOCLTSEKGTHPTRBGNGTHINDMXHSMRBUMEMDQIWMXQVRPWPHKWWKFGUDVRKSHYEPLIAEGONAPBCBMWJLVLXDDSZNAIDMCYQRMEYILSX");
    msg.man_type = 25416U;
    msg.man_eta = 1418801409;
    msg.last_outcome = 202U;

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
    msg.setTimeStamp(0.334323207711);
    msg.setSource(14785U);
    msg.setSourceEntity(205U);
    msg.setDestination(12088U);
    msg.setDestinationEntity(237U);
    msg.state = 254U;
    msg.plan_id.assign("OAUCTUGHLVXIYTRJMPEKYOQHLNRTUHELZFRDOLKSWSLSXNXTPYKFFOUVYDMQBVMLGSGSNHFPILJWGHHENHBREDLUTAIBDCQSNWIEMYNMQVRPKLB");
    msg.plan_eta = 374568612;
    msg.plan_progress = 0.147355370659;
    msg.man_id.assign("IRZTMMRAXSMJATKZFDGLXYYVQUTNLXSGNNHJBCQFSSEWKBWXUWBTOABNXFQNVUZGKPKYVLCFOAKHEIJYONRIQPUYYUAJKMOLHFHGIAGWDVHKSJCSESDMTFRTYBCXXUHNOLKRCTEWVADHNEDQMWAGFG");
    msg.man_type = 3782U;
    msg.man_eta = -1986795594;
    msg.last_outcome = 211U;

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
    msg.setTimeStamp(0.308227269008);
    msg.setSource(18441U);
    msg.setSourceEntity(235U);
    msg.setDestination(10856U);
    msg.setDestinationEntity(212U);
    msg.state = 54U;
    msg.plan_id.assign("TXCKHOPNBIZBOESZSYIESFPSVUTCUKFGDFYAQOLWEYZNXGDPQNHOJHYUGZIKMMURXRTRWPJZBQHLDYXYIOKKUHMULGBFAOQVAOEXQSMVTPFDCLCLTJJDVWHVCGIQUMPDYKPRWSIABZRXTLWHJIEGSJLLSEXSFRCEVQBGNRAPEYBYKJGJKWZNX");
    msg.plan_eta = -1976479922;
    msg.plan_progress = 0.770717216919;
    msg.man_id.assign("ECGPUWZEFBTHKFOZPAXHLRPPJYIFPCVTGVTAAIYTOQTKEKQSPZJRRMKTXHNJUSLCQLZNABNUSCFFSBHDICRYLQOVOSXLNSXRMPYABOYNXAAINOJVHXZLXYKSDSGRGCYUBWIUDNEMKUAECJBROUFZLJ");
    msg.man_type = 44761U;
    msg.man_eta = -103106905;
    msg.last_outcome = 228U;

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
    msg.setTimeStamp(0.333497514336);
    msg.setSource(3760U);
    msg.setSourceEntity(186U);
    msg.setDestination(47428U);
    msg.setDestinationEntity(125U);
    msg.name.assign("QAVYLASRBCXFZZCEDPEVRTAMOKDAVPSKTWIGSPLOPTEJBPEJKVVCYNJTDDWXMMGEDFFFNCSUWUWFGOKZGYHDBBBFMDZYOXPLYZQTRQHQRVUTVZICSZSRMPMIRKJNLPQHLWKGMSFJEXBYZYBBUEIXKFUAPAKCZUGQXJHLGJKNUAWGU");
    msg.value.assign("QLFPXBXAGLGYAHGQEYMKSTYUUZUQBHEZDWJCSUHSEITNDLFOLHZXCQIEOCJIIUWODSJRDCVBTFMMWRQFPPSGDRAAPEFGGFQVPHEVRTARXLZSKKEKHRESPXVJRPHIMJBKTJMIAODLTVCRTMBUDIOCGKJANBXBWJISOYFUNW");
    msg.type = 143U;
    msg.access = 124U;

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
    msg.setTimeStamp(0.64252328099);
    msg.setSource(22569U);
    msg.setSourceEntity(244U);
    msg.setDestination(64972U);
    msg.setDestinationEntity(250U);
    msg.name.assign("WNOYDPIJOQBTMHGX");
    msg.value.assign("XYLDDOWJKBHBIQQXMEONWSBNTNWCAGDULVKQUXBTUWCERNMLVXVGAZSXNVMKRGSLIGXKHKWJWKCYRTQOZTLQSLNPOJWPNZZEXYYDPVRTDRIGOPLFFEAJPPUFMMTVSGUNMEDIAKCEXBDHSLNHAMQYGFPCYOZFVGPFU");
    msg.type = 17U;
    msg.access = 46U;

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
    msg.setTimeStamp(0.412067774396);
    msg.setSource(12475U);
    msg.setSourceEntity(39U);
    msg.setDestination(22342U);
    msg.setDestinationEntity(94U);
    msg.name.assign("CRNBBHJMZFMNZIAFGSLSCWKPPCXBDNUVTGRDJARMCAPGBVWLEXVAUYKOYTXHSDJTVZXLAAQNFUHJWXANZTHYBHMDQIUAMGHVFSJPSZSIEJTWPPIFNBQBJSNRYNOVKLIDOZSSM");
    msg.value.assign("VHDVERBLFHJVBTANTXOXBRINAWBEQVQMQQZIWKGJMT");
    msg.type = 124U;
    msg.access = 252U;

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
    msg.setTimeStamp(0.843339698002);
    msg.setSource(54475U);
    msg.setSourceEntity(162U);
    msg.setDestination(62444U);
    msg.setDestinationEntity(146U);
    msg.cmd = 108U;
    msg.op = 18U;
    msg.plan_id.assign("RHTZNOPKJYLAYKAANTXWOTBDTONLXFDEZEFZHPDCNPDDYVFFJERGCUVKZOJUKQKMHUWZFDJFMLTYRQQYGUYGIDQMEKQYVGJLOSSXUDGIZJPYCMIRCCBMGJNCGQOCVBZFRNACRWHYWAYIVOFEIZXXOBBBPHITERVHOAAMPMEHTLSWWKJEDHVMQVBUHCLUBISMUWRVWXSANTEQLNEKXPQCLUMTIAXQGTUDPALZRLBVI");
    msg.params.assign("XNYGRURPFIKCOPWEKJFWWGBUAUVMTNXCAVAYSSIDTBCEHQDDCACVIHCOQCRJEIGFVPWNRDXPKYQMIZHVPOSNCWJUHSJFUGMAZGJYWXGQRLTEZFEYDQZAHVHMGRQFMMDVOTVSTUIMXZOHLGYBKYCADEIJPZSOEFDQJPFKLRNLLBJYNOWTTQXGDGRCSVXEIDNXWPNKSYOBLZJBBFIEQZTANOBOPHRZKVKPBUFKYNUTHMHLWJARLULK");

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
    msg.setTimeStamp(0.277260943883);
    msg.setSource(35387U);
    msg.setSourceEntity(80U);
    msg.setDestination(36620U);
    msg.setDestinationEntity(92U);
    msg.cmd = 225U;
    msg.op = 7U;
    msg.plan_id.assign("FDIQJHUWDNRONKLWVFCQOJUDOGNRIZYTXVABOCQMVRHCGPNFWUZKDSVOBMDCTJTZGVNF");
    msg.params.assign("CTFWBGFCGMERHWXCLPCUJHCBEFRLIKMGBHKZCVXJREXTZCWFNKSRFUOSMYFNSOEVIDMQQHVEDMGGVXYQASEOKQRLUPBFEZDJRVRKCWIBKYTSXLVITYJSIPVIZBGWPNQ");

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
    msg.setTimeStamp(0.12335751079);
    msg.setSource(17696U);
    msg.setSourceEntity(161U);
    msg.setDestination(49289U);
    msg.setDestinationEntity(197U);
    msg.cmd = 229U;
    msg.op = 23U;
    msg.plan_id.assign("INNCYZUHDSOFXBHHVOIJRGELIMCDTFRIFVLQUWRAVJHVWSOXHMYVTKKUHTAACMKCPLOWIWSEKLANBUYLUUISIZDOSWGRKIDAJAVTTRNMZZUQAGYJLCXZVXARYEHEZKFSNBBFQVBGPWVJZKXXYRCKCPODFCXPOJHTTXJSDDMXLJWPXTVNFSEBYGNMPHESTEDOLWFYQNPELGEAMMCSIQZBJKGRBGD");
    msg.params.assign("WFPQSTVYPSQHWAVSIKPJTXGYZROPGRSLXDHIVOJBRTYYEUWHCVZKGQYBVUFGCQTUMJOJEMMNNXPKC");

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
    msg.setTimeStamp(0.782573953506);
    msg.setSource(15064U);
    msg.setSourceEntity(1U);
    msg.setDestination(29703U);
    msg.setDestinationEntity(161U);
    msg.group_name.assign("ZXYYHIMZEIDXEOITNKSMNCOQJUVGMBSMTSIGHALKPHHJRACMVXBDSQTAPDEBQBKY");
    msg.op = 87U;
    msg.lat = 0.0975062695389;
    msg.lon = 0.455129406037;
    msg.height = 0.269380581711;
    msg.x = 0.0723411608572;
    msg.y = 0.107947391661;
    msg.z = 0.603153669751;
    msg.phi = 0.514288818676;
    msg.theta = 0.570513129605;
    msg.psi = 0.999760667998;
    msg.vx = 0.440444670036;
    msg.vy = 0.15539554051;
    msg.vz = 0.109066353355;
    msg.p = 0.919776763327;
    msg.q = 0.693015091455;
    msg.r = 0.976678834607;
    msg.svx = 0.664371946546;
    msg.svy = 0.978567270259;
    msg.svz = 0.0719589756525;

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
    msg.setTimeStamp(0.415073152422);
    msg.setSource(56503U);
    msg.setSourceEntity(233U);
    msg.setDestination(50034U);
    msg.setDestinationEntity(219U);
    msg.group_name.assign("GFZGVIXHVAWHQEHGNLVXJBPTEBCNZOPAEPIVQHMIOGRFSKWUSJGMEOFUAAWIXYJONRZUMLIOJWKGRIRYHNIMURRLDPQNQGCGCYKEULXSMHCQYVWDDJTHYYRHJZOXAETUYBARNLNQTIOSVOPQVPDEUTTLFFDMXSBNEYAQDGSFCAKKVVLZYBQIBK");
    msg.op = 187U;
    msg.lat = 0.56368741009;
    msg.lon = 0.511598052815;
    msg.height = 0.728296500089;
    msg.x = 0.170855462602;
    msg.y = 0.77430763607;
    msg.z = 0.846948400444;
    msg.phi = 0.735470378075;
    msg.theta = 0.0649265247504;
    msg.psi = 0.0380015800644;
    msg.vx = 0.465274574413;
    msg.vy = 0.4938697059;
    msg.vz = 0.488768419894;
    msg.p = 0.0368468342198;
    msg.q = 0.775935668949;
    msg.r = 0.727906297758;
    msg.svx = 0.56266590413;
    msg.svy = 0.620392763905;
    msg.svz = 0.32209188898;

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
    msg.setTimeStamp(0.876191358329);
    msg.setSource(23335U);
    msg.setSourceEntity(79U);
    msg.setDestination(44236U);
    msg.setDestinationEntity(54U);
    msg.group_name.assign("AFITCJDTOVWYUSZWAEFRYSRJANYPZTWJVMUI");
    msg.op = 138U;
    msg.lat = 0.158234220354;
    msg.lon = 0.892491613384;
    msg.height = 0.957339068376;
    msg.x = 0.407097171688;
    msg.y = 0.78709364975;
    msg.z = 0.0382743798756;
    msg.phi = 0.483400444606;
    msg.theta = 0.690450512013;
    msg.psi = 0.342121272929;
    msg.vx = 0.0497008186095;
    msg.vy = 0.857718960584;
    msg.vz = 0.540592513189;
    msg.p = 0.822508225797;
    msg.q = 0.397142391779;
    msg.r = 0.445207720291;
    msg.svx = 0.391200167776;
    msg.svy = 0.121071284751;
    msg.svz = 0.473168886567;

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
    msg.setTimeStamp(0.606432614946);
    msg.setSource(65333U);
    msg.setSourceEntity(84U);
    msg.setDestination(45781U);
    msg.setDestinationEntity(155U);
    msg.plan_id.assign("SBEOGTNZRBEMHSEGJEKUQPVQITKISBAITRYPRYXOPOZQHBQYQGRGCSLOWAECUUGIXOUKQLCBZHBVLYVDIBLFOJTWIHTTHEYDVDIJMIEFXWUDZUVAVFJRJMNYXZYATULQVJRNPWJWTHDUECJNZGYY");
    msg.type = 83U;
    msg.properties = 156U;
    msg.durations.assign("YJQSAQNRTBXITNGXHHQLZNAWRSQUESEAGTVVIHDGNAXCYYCAFEWJENMKFBUUSXCZMHFABNJJPBBVBGNHPCGYUWDVVNKWTZCQGDKGZKIIQBODLULQEBUHXPZYWLOIXMTICWYVYVMIHRSBWUVWKFIXKOLAVRTDDMOKZPLZOTSYHSSJKLPMXSFZOIGMBACJIJGOU");
    msg.distances.assign("HITPRUQUGAIIXHFZHGJWNSCBAVZLUQFHKYYUJMIGEWCXJZUWDIRFRAFVXZSZEZWBZJZQDNNXVJQCLSGLNECNRSDGMKDJOYVTGTFIEKWYTFPJIRSAJHMDANSDAHCUJOCUFSEKEB");
    msg.actions.assign("JKRZZJOYBVZRCNRQULSKMVVQWFRMEZPCPPMCZFWDDTESAIMXLHHMNNJXIETXFGHMFGLSGEPJNTTAHLFUNWQBOTQJYUQBPBEGTUEMSRBMYXVJOGQOPLXJNGZSYKITBZORUQYVUQOHHKDWDAHSOEFQFAKXAJGBSDOKLARCBIWSOWTXVIKDXIDIYZUSGJGKEERCJVPNPZRYEVMAHMDATZKSWNDCYWVLFHVHFXCYUUCILGCAORINLYPCWL");
    msg.fuel.assign("GBQYDLMTKUZFXPLNSWWUDXOMSIZUOIBTKODLMSRWBIFCEMCJZUGUUBGTWRECIQXWKFO");

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
    msg.setTimeStamp(0.0645418120786);
    msg.setSource(56392U);
    msg.setSourceEntity(199U);
    msg.setDestination(32436U);
    msg.setDestinationEntity(172U);
    msg.plan_id.assign("LSSSTSWEIWQIXWNOLWVAUGUBITWITTDXSJBVQTMXFCJDTBRYARVEFPZXWUUMMCDYIGINBQJFKGHYCGNMVFC");
    msg.type = 95U;
    msg.properties = 105U;
    msg.durations.assign("IKJFDUXASANCMWBYDYRIDQMPMARLRIKOZIDGNKBOBWOXEJZOPSPKQLHAFQVRYULWYFDAFXUXNCCSALLNBIHYVJHQGOZJLRSEGUXLSCFENVSCIRYZSISQTSVJQECFCJOCBWLCMZKRGHAPEHTYRVDBTMWKHZTVVYGMFIOMKJUDNFHPGXVEBMQMSXXRPBUZCAAPBZTGKRKOTOWPVTXZQINQPWJ");
    msg.distances.assign("HAWJPXEMMJGCJGWRAVRFFKAHABMUKHENZUDEQSBZDHDQGXTOCGDHAQVHCTHEIGCITRFIVIVAPDFYJGOBHZSSYSOWNFLNYXNUMTLWNNONEVZZBEHGCFIRYEYOWQZSAMBRLEMDGGLIFYKIPKUZL");
    msg.actions.assign("VBKLUZIXMSDDKZXYRGZSMLTEETUNWYUWHDYDHOKNMWOEJJYCNFNYNOSLSEGZVANBPAFHVKCLMVIZGEGCFFWOXVNBWXKZHEKWBZQKXXXVEJPPPPSFZUUAHRWUALWZJNQXHSANDDIFGMLYQCCPOUCPCOMFIMRLR");
    msg.fuel.assign("PFPOIRHISGHQSVLRPFMVUBTKWEUNWCWDABC");

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
    msg.setTimeStamp(0.583538104792);
    msg.setSource(19816U);
    msg.setSourceEntity(82U);
    msg.setDestination(25013U);
    msg.setDestinationEntity(84U);
    msg.plan_id.assign("ZBNEWGHAACGLONWISFJXWDMITQIKNQAGOEFUIZDYZUNPPXXAFSUBBOSJEDAZTFYELZJUDUWWZAJYXTRLJYDWDZMRSIJIONEFVWKQVBDDPLQYCNPMXUHSKIQOSGZFELUKSFSZMROQHVNHGCHPYKAVBFPRXTSKITNXHNEPWKBTVIZRXGOMQOJSMTAQHGHYFBBQYCJOMPGHLMXHFJ");
    msg.type = 159U;
    msg.properties = 6U;
    msg.durations.assign("DCFHGOYIBXGTNCQNMGGHIOFJTVQZOUEDCFYJSPJCIZUVJUTLHOXKLBMWLLMMRLCXPSCJKFIYAQBIAQFEWZHGIQXMHSGTQBZVLBZGSEIJKJAKDGNAPNUHLDDIHEMYDDJSSRAFYYVYEKPCRRRXTWTSXPLSOUNBPWUDZY");
    msg.distances.assign("BNFSPTNWCIOWWNPXLHEUUVXBNPVNNSFSGTUDVATQKHIJAQDTVHJLLRTUOIHZCAGLBJGDOQIZJJLPXZGRYYWYDJSXEGMGAYHZVXQYOCMWILZCVTWIIXMVNZYSJPRZBWDQRROIHEWTEEHYVOKFLUKIRYPUAXIOMMBFSDUNJDRNYFELDGCTUKKAOBMBGCAFRJNFQE");
    msg.actions.assign("DZKECAHFCVIMECJVZPNMWDJXWZSYGQKBSJFCOVWBBQQUNIOWUAXPUTPALYFHUNGIFLGXYKUTZLUOVOBGSGOCVPMOEZTVZSXTHMWHDHREINKNOHTYDEFWTAGXDZWPPEXSSLEWEYNOMIRDFSTJTFXLQWBYPRBNAPDQZVOTKQJBZXYYJHRKCXDRJIDLMUFFGNWRANRNSYQAAKRUKKICLAIATMMHJCJ");
    msg.fuel.assign("GTGSYIVDCJKSRBQVMJSVHAMTPRXKNYGHDBDVDCXWFXHNEZRJNABJYPUVYMGMNFRRRYYOEHJIPCLIJKNZDDZZOXCWOCVTIMPGJRTVOYHERWKMQCPQLUEKAFEGAGBHWJKBZSNQSMVZWFTKUKQYHOGMWNCOSLRNQLOXTINPUUDPUSUADFTWVAFJDKWXIAMFXLFSAXHOABLEQEBQUUFJERQ");

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
    msg.setTimeStamp(0.661257160706);
    msg.setSource(33849U);
    msg.setSourceEntity(125U);
    msg.setDestination(18748U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.119453920405;
    msg.lon = 0.66159000946;
    msg.depth = 0.87275782886;
    msg.roll = 0.69324507148;
    msg.pitch = 0.951069397438;
    msg.yaw = 0.404765397891;
    msg.rcp_time = 0.921681060804;
    msg.sid.assign("FRBFGUNKQLEJPGPDCFOWAFAPAGCTWUJJEZWRNOQOVYYSNXEVDRLIXAFAWHMQJJAOKJGLVDDXYPPDPNLVSZKQVNUMBNTXWZOAAMNGEBMTHCCMCMZFWJRZTFENOHXBXHOOUQOEKFPJBBLXCSRUNUCTCGYCXKIETHERVLIIZYXUDIEHZRKHIJNAVSKLODBBRDXYAQGWDRKCS");
    msg.s_type = 14U;

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
    msg.setTimeStamp(0.146751092138);
    msg.setSource(7076U);
    msg.setSourceEntity(105U);
    msg.setDestination(15652U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.642306251582;
    msg.lon = 0.806235124103;
    msg.depth = 0.211696836076;
    msg.roll = 0.979387565433;
    msg.pitch = 0.0751381118253;
    msg.yaw = 0.399478761996;
    msg.rcp_time = 0.739909304254;
    msg.sid.assign("TLVCIBIDAGOMIPTOZSHWZKMLDYOQIKNOMNZULWUQJTXOROIBFHCDNDGHQKRGYXDCEJAUGTRENEMWJGCIETTKAZVDLXMISDQZQPBNGKOIERALPUZBRYCMBTSNBFPQJDMKHURVEHYRUJWYHSWK");
    msg.s_type = 218U;

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
    msg.setTimeStamp(0.759019038926);
    msg.setSource(43096U);
    msg.setSourceEntity(127U);
    msg.setDestination(24098U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.627739709865;
    msg.lon = 0.626164791108;
    msg.depth = 0.892157839617;
    msg.roll = 0.643848439241;
    msg.pitch = 0.101098009704;
    msg.yaw = 0.647543606903;
    msg.rcp_time = 0.0123637755433;
    msg.sid.assign("UIRXXEPOSJOUHZZXETKXFYZIHTBBXKOGRDXWLCYUOLGLROTZBGENYTRWVQGMEBAUKEPZWSCUETBFXJSPZZPGIQGUZFLDVQQQBSKUPNRYGHEJXHRAMDSFIPZOFBTCLZFWFAKUQSAVAMKCMKCFDJNJLNWDWAAQRKIDJNCETSPNJTQXTRWV");
    msg.s_type = 126U;

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
    msg.setTimeStamp(0.65353948244);
    msg.setSource(56737U);
    msg.setSourceEntity(110U);
    msg.setDestination(41686U);
    msg.setDestinationEntity(227U);
    msg.id.assign("CZRAYBECZROOGLZAJFQTNXOKBYADYJATZPMHZFKJTNKMTDPSTVFMXSTVZQHSYRGERNABCEMIEXKSLCGAFMJNIIWHVIVVW");
    msg.sensor_class.assign("GPFRXUATGFBCYOKDHEEYYWGAZUFTHBWUWTOEKNAFWPPTKJTQAJXLEJTOMZRJTCSOXXVNOOIXEXCDIQFZKXNZAUJOBDKHQGMFVZEGYOULWXTGJZHYEFRLGBREYYQPCMKDKLRIZAHBLQNIQBADWMEFSDMSVYBNZMPKTUBWSWMIPVDSDJSEIIFLYCCSVGHOQUUQRPPXLQRIVNNGZCOK");
    msg.lat = 0.496243270421;
    msg.lon = 0.27205082219;
    msg.alt = 0.811045905022;
    msg.heading = 0.620927278427;
    msg.data.assign("KEATMBQGFZWTRXOTOIFOJLJYFLKTULGRCEBGUINNKLYCVSPUCLLRDUPEVOOEBIKCXTQUYKRVYJUTUIEIBBZVVTRBLYSLWXHADJWPQOSWBZWZQJAGRSPSWDLSZYHMZURVUEXXESPWK");

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
    msg.setTimeStamp(0.64637529886);
    msg.setSource(61824U);
    msg.setSourceEntity(120U);
    msg.setDestination(14428U);
    msg.setDestinationEntity(68U);
    msg.id.assign("KGEIEWGDHPYYLHDCONISILOFFEMZKOZLSFXYHAUJPKHVSGBOOCNFCIEZEJGXQDQNUJNADBWVTXBXIYJSBUJJFJAOVLPKWVXFBMHVMZUKYNCELRWEZWHNXMHGEUDMVRRJFMUKTAHC");
    msg.sensor_class.assign("CQIRMIIKKOSKFENYLUOYIDAIASSBESDRIKMXCDODJHHQOJBIFXBWVYULTMMVWOLEJPLHFJWFRWUYKDIUUAFGDVPERBMYGFHGZHGRCZAXNZDGFLHNXLYVNMBBSSZQTCJWFBXCWZXRCKYGLNGEKRIEZQSPMVNX");
    msg.lat = 0.584196255262;
    msg.lon = 0.543004003037;
    msg.alt = 0.518724520221;
    msg.heading = 0.529517070286;
    msg.data.assign("EAOWMFANUBCJXRMCOCPEEYCWIHTQQBEQIPVXUDDTLFIYKXAVTILOMSYTOIHKBRPZLDQSUPVRX");

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
    msg.setTimeStamp(0.254019748326);
    msg.setSource(24242U);
    msg.setSourceEntity(134U);
    msg.setDestination(45892U);
    msg.setDestinationEntity(36U);
    msg.id.assign("WHFTQNPZVYBXBPVATVUDUVQCKGRNIELEXOJHWOECYLXFMHLPJIKKRMULFXJMQUIOKGWZQVTCBDCHVWFRECKASXXNWYHWPGANGCIQSZADOOPRVNBUPYPJIUQJTQBNKCTYZAELGSLEESOGQOAKJYEDLFSUYSASCLWOD");
    msg.sensor_class.assign("KBQZTEXPUVWQSSBGAJAFMIVCMMQERFTWHACRYJEVMCZLGGGCJVEMNIIDTUHWOWJWIRIOPUDJURVNXHNHHXATAXUUZCDCMIYQTBQKQYPURFADTYKTJZLNXEZSOZSKFGFLTXQINERIYPCBRCRRSPKPKTSGEAWF");
    msg.lat = 0.694350715963;
    msg.lon = 0.0567434007533;
    msg.alt = 0.721112091661;
    msg.heading = 0.280955352972;
    msg.data.assign("ICBFDTOOHRZUPCIZYKMHVTZHYAXKEGVVDSRWERGFVOPLAPEAUIQAGPSKXBAIMZEMDXWJRMOVBHBRSPSTGNIQZLETLSPULRZNXKJWIULSLYUHTNAPQEKYDXDJNHKJVNSFYOYOKQMUHTWRGHOQJGVJJXXBAALWSPXPWQJURELZLHRQGICFGDFDOIFBVZWIBOMCNMKFATPVZCCFQNIMGWCDTENCBSTLERXCMWYBTWBNYSUZQAHKFUYDUNVGQKCM");

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
    msg.setTimeStamp(0.964263140649);
    msg.setSource(64444U);
    msg.setSourceEntity(189U);
    msg.setDestination(23494U);
    msg.setDestinationEntity(239U);
    msg.id.assign("TKMYMNPRVHFT");

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
    msg.setTimeStamp(0.82630323551);
    msg.setSource(23542U);
    msg.setSourceEntity(23U);
    msg.setDestination(62141U);
    msg.setDestinationEntity(192U);
    msg.id.assign("RSMSEVRAOGUKCFHLNPBNHRVEVTEPUHCGZGLLYMQYWLLPPFPTDQVSFJBAMXHWGZAEDUQKIXNYFVSKAIVJNGVIJUZLRWWDKXBYVOTJDJABUPNFHTUVMTWDEPWCYSFLBQMXMMIAFM");

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
    msg.setTimeStamp(0.567375244384);
    msg.setSource(34507U);
    msg.setSourceEntity(68U);
    msg.setDestination(13034U);
    msg.setDestinationEntity(197U);
    msg.id.assign("ASHCGSIXRLZRQAGGJXTCWMMSBPEKJBICGHVPZLIQDDETVLTMPUTWJSVOTCMUMKUSCPOTGYXVQNMKAZZVUPFOZAUOCDIPXDHLHHIAZNBKVACCPYUFLAOEQCGSNHGKREBJGIPHJRFHVZBNTIDYTJGYXMRQIJSWBSQMOVONYQUCXBPWITUXLAXGJLWFFYEQWRIKWESYVNWMDJEOAFRLMXFJDULKYBDPH");

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
    msg.setTimeStamp(0.607339522721);
    msg.setSource(9041U);
    msg.setSourceEntity(202U);
    msg.setDestination(12562U);
    msg.setDestinationEntity(119U);
    msg.id.assign("AQMBUMZSQGVTXBKRRHYAEYRDMNEHHKTBJUBDLYMNMCWEUXFVOLTEONPXYTBIHZVCPCQMGSDTZJKQZDNF");
    msg.feature_type = 12U;
    msg.rgb_red = 79U;
    msg.rgb_green = 158U;
    msg.rgb_blue = 188U;

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
    msg.setTimeStamp(0.377159118814);
    msg.setSource(44412U);
    msg.setSourceEntity(100U);
    msg.setDestination(64829U);
    msg.setDestinationEntity(29U);
    msg.id.assign("SNNVTEWEIGKAOAIKWVSKOWGYVBOJOUDOWEPIDFEXISTJRQBOMUNIBHZMECVYARHRARGBFARCVHGYIHKFXLKVDPAIXPOFJGMYNWXUYDCAQUXMOBGQWIXRSAGEZZMNTBUGWCMR");
    msg.feature_type = 33U;
    msg.rgb_red = 173U;
    msg.rgb_green = 141U;
    msg.rgb_blue = 178U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.774410580957;
    tmp_msg_0.lon = 0.305520828004;
    tmp_msg_0.alt = 0.0319630825688;
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
    msg.setTimeStamp(0.725630532356);
    msg.setSource(42785U);
    msg.setSourceEntity(229U);
    msg.setDestination(57619U);
    msg.setDestinationEntity(22U);
    msg.id.assign("TXYASRADVZKVZKWKITRDGLUVUDIEZAWOGPIUPXAPRVNPQWOBFFHESUQLGOEFVXHRSBCQDCLJYNHOZBMXVTQCBOBMKWSTPCWFYBNECMXBGLXCJJHKX");
    msg.feature_type = 136U;
    msg.rgb_red = 29U;
    msg.rgb_green = 13U;
    msg.rgb_blue = 239U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.538533635443;
    tmp_msg_0.lon = 0.0341786448943;
    tmp_msg_0.alt = 0.845983305648;
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
    msg.setTimeStamp(0.933652388184);
    msg.setSource(41539U);
    msg.setSourceEntity(149U);
    msg.setDestination(1014U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.891797182503;
    msg.lon = 0.285890626566;
    msg.alt = 0.1914781901;

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
    msg.setTimeStamp(0.818598600752);
    msg.setSource(36422U);
    msg.setSourceEntity(50U);
    msg.setDestination(61770U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.129231963927;
    msg.lon = 0.512001574338;
    msg.alt = 0.335089413475;

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
    msg.setTimeStamp(0.107055694109);
    msg.setSource(34128U);
    msg.setSourceEntity(187U);
    msg.setDestination(44128U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.494964830716;
    msg.lon = 0.589699584677;
    msg.alt = 0.812033595663;

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
    msg.setTimeStamp(0.254190160789);
    msg.setSource(42105U);
    msg.setSourceEntity(39U);
    msg.setDestination(8926U);
    msg.setDestinationEntity(244U);
    msg.type = 203U;
    msg.id.assign("HJPREWTZUVOLUUQETEKHSVPRKXESYDLBDKPBJPQYVBIITKKSESJWXVXCAQXFOMVDYXHIBNYRVFANERUTCYLSKIDFZXPXAOSLBJNNAGRLQFBYTCFFTWGCOIPQBIQYPBKCXLFFSEKUWHFOJZGYIUJDWDOPGZVNZRRGTNXMSZGNFZOROICNNAWKMAHMGNTMITQZLBTS");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 110U;
    tmp_msg_0.reason = 162U;
    tmp_msg_0.value = 0.385971146559;
    tmp_msg_0.timestep = 0.0462685043369;
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
    msg.setTimeStamp(0.761307772351);
    msg.setSource(37022U);
    msg.setSourceEntity(125U);
    msg.setDestination(23431U);
    msg.setDestinationEntity(153U);
    msg.type = 149U;
    msg.id.assign("JJWDVWGHCDFAIQGCPPHFJYCUHNYIEDSZOQYCRXTJKCQKPMX");
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.625626315092;
    tmp_msg_0.lon = 0.170965535844;
    tmp_msg_0.depth = 225U;
    tmp_msg_0.speed = 0.965631242554;
    tmp_msg_0.psi = 0.15167014151;
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
    msg.setTimeStamp(0.232319191952);
    msg.setSource(25859U);
    msg.setSourceEntity(231U);
    msg.setDestination(12485U);
    msg.setDestinationEntity(143U);
    msg.type = 91U;
    msg.id.assign("LJNRSOLHYAFUBPGNVBTLDNHXXFHWBVYXAWCPYMEMQIQVFWSFXPDDMTHRWIFEHVSJJMNKQBDUUYBKWEZKBHKYTWPKIRRRSQBLOSREOPCEYZPCLIMCMWZUUZNTVROQNOGWEPLGDKJUJ");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("DQJCKRTINJFGAICCZEBMWIJBUWQGWIPLWRSXKDQNWQVFWOLENFMRYDBPJVMDQSRFFVIJXIZXHOVRDIHKUYPVFFRALHICHHYHGTTRJXVESTLYJLOBKXLTHMMYRQUEDIQNKAOJJADDK");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("TASADFLEKGMXSAXULSVOPDLXNZLRSHWPDRNYZIWCITNTUIBZWJBXPXDOILYQNVELRDRRHHIXEUFQCMMSKGFJQUQWSADBGUIVWCKABGNOBYPKNWGWGMTQHZJMNGXSFEYYOOVAGCHJSHFCJDAZYIEKPMWMAKQH");
    tmp_tmp_msg_0_0.sys_type = 186U;
    tmp_tmp_msg_0_0.owner = 49860U;
    tmp_tmp_msg_0_0.lat = 0.927251325064;
    tmp_tmp_msg_0_0.lon = 0.809611449875;
    tmp_tmp_msg_0_0.height = 0.658129187931;
    tmp_tmp_msg_0_0.services.assign("XDBWATXUMSKXSZVBFUNOIPLZOMCDWKCUVVPCXYAGZOOIWLOKJMYTLSARCIQHHXYVFJGBMQYWKRLBKVFLYARSIFYZQQHQRXLPFRTGKHXVUCPSJRRHNSTJGNEDZSXWLFMDSUGPDGUDAGWYZJLPUROQJTXPGJEMDHTNEYKSUHIOGPQOVVTTJJCDATUFQLOAZPBMVQNWFXOZBCKUDIZEIYBWNWHQALWEMVM");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.790647925994);
    msg.setSource(37839U);
    msg.setSourceEntity(28U);
    msg.setDestination(31736U);
    msg.setDestinationEntity(138U);
    msg.localname.assign("RPWSROGZCRBJPLBXQWRWSHVLBMBEHGNJONKLCAAGKDZOMPSELDNUQTNJWPHEYNCGRSIMUQIAOZQWSFFFEMPVCCTHLCGHHTUKWMJJOWZWUYKPAKYJIQJCPXXBTZMHFLLYNXGKKHHGYVXYTTQCFAKXGINZVMXDPVTUPOBDALUHQSDUOZLXGKFPDVFEAVRAQOTQFRGTYCMXI");

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
    msg.setTimeStamp(0.211838035966);
    msg.setSource(7893U);
    msg.setSourceEntity(206U);
    msg.setDestination(53084U);
    msg.setDestinationEntity(3U);
    msg.localname.assign("LGHFQOALUJMJEVKDCSZKIHRWCAAZXCSGAOJEJUAXFPHVJDQUXYNBIYEBLUKDYJBUBHOMYWUSZNIEXVPYWGIOQNMMALAYDIFKDLTJIELLPVCGNMEHNZOKHRUPQRZYDXTCTWO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZWRTQGAMVLKUTZYKEPJRWSYVOHGSATXZGPKKNTEKXIGLWZLXZABVIUYOSHMFLSOCDIPZHBTUDTFZWXGBHDGOJCJAUMPJZBZJNXJYMLVXV");
    tmp_msg_0.sys_type = 167U;
    tmp_msg_0.owner = 11772U;
    tmp_msg_0.lat = 0.0536800142998;
    tmp_msg_0.lon = 0.757714511299;
    tmp_msg_0.height = 0.709401412453;
    tmp_msg_0.services.assign("MHNBPJRWXYBZJCZRAPKVCQSGQYBTZGVADDUMUPAAGFIDOSGHRXMILXGLMVIPEADYFNWJTCJNMNCDSQGHNOLFLWZWHNCCJODOVVOXCDXMBMXSHSMCKTKQAHRHENPYRIICSWTKIYLHEJ");
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
    msg.setTimeStamp(0.64829481341);
    msg.setSource(18983U);
    msg.setSourceEntity(166U);
    msg.setDestination(60834U);
    msg.setDestinationEntity(110U);
    msg.localname.assign("UWVPTCUOSPLVDDDVVBGBGDQONSUELUPBXIOAQBWGNLFWFXMCONTIKCKGLCIVQVMXKSAZIFWUPKRBLNXFOYAZERJWTHHRDWNUEYRZMNEYPBYYQBDZVJXMRZULHEMDOPAVKMJLHQVFQY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BBBUSZHNLVKYOYDSZVJHXIHSQOYLLYVLBETPRMXCEEQMOGUAMFYXLCVCAFGNDFQTQLGFPDODUVFARTKJPUHCKVOJUYANSVCYGBJGJBEHWZCAFTTUAZGIMDALYDORTUKCVBIARGAMVFPMQKIETGO");
    tmp_msg_0.sys_type = 106U;
    tmp_msg_0.owner = 22533U;
    tmp_msg_0.lat = 0.311891688715;
    tmp_msg_0.lon = 0.150074139405;
    tmp_msg_0.height = 0.0956011623994;
    tmp_msg_0.services.assign("XSISIQEJYVQAIKFDNUBDFGMQEMUPFCYHPOMTYZNUSHCBIRYQNKJVLNHNHRDXKKZW");
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
    msg.setTimeStamp(0.285022147664);
    msg.setSource(1546U);
    msg.setSourceEntity(157U);
    msg.setDestination(32563U);
    msg.setDestinationEntity(189U);
    msg.timeline.assign("QIHUOEQZJYRVQQBHIVNEXZFFXLWGKQBNWXZTTMVRPOCENTJQFKIMDD");
    msg.predicate.assign("ITHLPLQIONSUMOJKWZNLCQGELBSLWRKRTXUZWFYZEDFNPCJTPZAPYZLPFMYVGUKKPISNRHWKFFACXUDEGRBASNFSAZHYYNVOVSQJSGLUTRCBJZTXHNFTJVTKMANEKNJRIEOALRBMZBODDYQGVXKXWIEYMTWJWXARQCFZSPULGDRUPOPJDSCCJYOR");
    msg.attributes.assign("BRSMBSQQUCFNBNPLNCYTOMZSQUIJVGOBDMWLIXENXPBKESRCVPWEHXGAHDPBITXIGUXNOKVZIGDITDGFQUYJLFPVRFDPLMDXSDRKXJBQHYNJCJKPMRZRYCQIXBVHTPKYAHOZCFEECTZHSGFBKGMKWTNZFHWJLSZHYMAZVEFPDPIOCLDYUMUAWSZVA");

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
    msg.setTimeStamp(0.371352870826);
    msg.setSource(48986U);
    msg.setSourceEntity(207U);
    msg.setDestination(61653U);
    msg.setDestinationEntity(66U);
    msg.timeline.assign("XBYWQMCVRBPEKPZSFWYNLUXWSNBI");
    msg.predicate.assign("GFCYBVEDCPIWUKGEJXTGQRVHILETIJLRQTRJXZAUQLMGTWSVSDPOTIMXSLHLCSFYURPWNOMQTSNBXAPKBHWQHDDFSTKLEWZNFZAKBWAYUPOJFBOQPRAYFQXYYIBRQZJYGABSRUKAYFNQLRCJIFMHZHRMUVSEXDMNEEMKVAHZHDUEUHSJQEXIKF");
    msg.attributes.assign("UZHFTOWTFZXQAUUUWTLSMKZRNDVWCDKVSCVRIGOPMBZDDBWGSYPDPCYNCGLFOYDWGZRZLVBXZLYEHASEONDFWSRSCMGRAAQLRYYEDTQTHFCGHXHAVFIJNMRPXHVMOXTAMYJCEUAHU");

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
    msg.setTimeStamp(0.119680561636);
    msg.setSource(9998U);
    msg.setSourceEntity(152U);
    msg.setDestination(43724U);
    msg.setDestinationEntity(96U);
    msg.timeline.assign("OWNQTMIWHTMVPZYGXKIVXNRDHLNNLAQGKPEKPCTIVUGOCBEFIRMVDPCKGKYZPBCWJUJSFDVRW");
    msg.predicate.assign("JYVSJYUJRVCFCGGCGVHTNELPOEFFZZGJROPGNVRZDSGFLEQLQJHUDOIHAXIKTFJQNUBQFABWKNWEKUOCKNECXKQUZKHZRRRSSSOBIHMVRYBLMVKAEYAWSLFSWMBDOVIAVVNMDHY");
    msg.attributes.assign("VYAKPQOKNDWEFTJHDYTBPKCLUINRTDXBWCCAVRPMFFQCHFLOJUFPNZLLRDZPGMVTSLYLTPVTXRDADQPJSFNYVV");

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
    msg.setTimeStamp(0.809776639286);
    msg.setSource(39221U);
    msg.setSourceEntity(119U);
    msg.setDestination(41253U);
    msg.setDestinationEntity(29U);
    msg.command = 192U;
    msg.goal_id.assign("GCZERYDOONOGIDCNNLXFZUZVRBUQBXXGFZHTKJSKMLEJSQARXZWYXUWFIVUPBSHPRTDHILWDHDAJDJMFQCOICQENVKCBCYETYNDOIVWKJFOMBGKYUIQHZLARPVSEYRDFQHXZGRIX");
    msg.goal_xml.assign("IUTHUTVDZZXASZOAXMZCJQNGXSNOLKGDDKQHMYNOMGTAEQMKRWOBWXAJVJHVESYRCKBVNVNWIVLHEFKPUZWVJMPNZRPQFNBSPC");

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
    msg.setTimeStamp(0.599985560143);
    msg.setSource(23383U);
    msg.setSourceEntity(127U);
    msg.setDestination(37187U);
    msg.setDestinationEntity(131U);
    msg.command = 168U;
    msg.goal_id.assign("RNTMXMPQBVHXNILRYGVJWGKIAIYJDLHWCQQARBSINSOKFAYTFJZWPGXFMVBHFBQHAZSWSAIRYFCQCDOPMGKFJPLJQLKXBXEYYBAGEJBDXOBNUENJENMWTZDIUIHXQDOMWUPHNGSQ");
    msg.goal_xml.assign("GVFRHOJKJAEMPTWIPGAKFCYDKSUINOSRGXHYGXLVEFCIQZGMQEMSXBDPEVQJW");

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
    msg.setTimeStamp(0.18360198707);
    msg.setSource(12153U);
    msg.setSourceEntity(158U);
    msg.setDestination(15478U);
    msg.setDestinationEntity(6U);
    msg.command = 134U;
    msg.goal_id.assign("PYTCZSKHMEQKZGETFXCDFEYLPRMODDGIHXEUDZQMOBUEESZAHGMAYWFBFMOUPOHXCBZGQXUDGTFFMUQIWBPRZDELXQJVIRNWXGVJYQMYWNWJVTPKNHIDHJNRYGVJNKZBSRLQBBCYHDENPNYSPLOCOVIDMAUFQKHWVHWPZXQAFSDTILWCSAZTCOPRJUKSLRIWSBHUVGTKBGSTXKVJFLOVUAXTTLGMUBAACRQYFCMXCELZORJ");
    msg.goal_xml.assign("LDPXDFTVLKRDONIFXBYWOMLRWPZFKWXXZKJDNJCPFPDCTAFQKHINWMIJAZUQNGGWRRNOIHBOCRDOSDGHGFUXAZYBJWYPAEVRYCFRKWIVVTXGSNTHOZWBMLVNBJVEEXHQBGQOTZESXOCZHBNPXBJMMRGAESQCYIIJHKAOE");

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
    msg.setTimeStamp(0.881010242575);
    msg.setSource(29312U);
    msg.setSourceEntity(237U);
    msg.setDestination(41285U);
    msg.setDestinationEntity(224U);
    msg.op = 147U;
    msg.goal_id.assign("XXOINFOPCMMIXCAAIQXPWJYZPKSJPRHPJISBZXWYNLUGNCOUAYHPOLVJHD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LAZGVPMQPLZNENANRRLAEUOUUXWDCKYTSMGQLOKFXBZBWWBRFTQARBYEYMAOFSLUFDEDQQFJTOAKWSXTPXVHUSJFRPBIARLOHOBVXDVWMTCBHFIACSDQUCKVSMTEIKHYUJTGPEHVEZLGIFOGRNIUCYINESDAQCYCYJYJJQMIIXVWMGWZFHNQZBGVWPMICBHEHURKHDUTZEPNGNSGSDJJOXKITPJYWBTD");
    tmp_msg_0.predicate.assign("USXBAVQVPONTOYAUODICCZXZDJQLMMSVHHJSXNEBRGWXGJOMIROIIBGGHPMRIAFSRHVYZMGENWGBJSTJHFNKTMUXDPPQXPANKWAAMAPPNTROKIJWBDKWVUQXGYNTLTHZYYFZYTQLHFQRIUUIKCTWLDFSDIGJVYZNBLCWNRO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QSMNWMHQWDCTCNQQLIGZKDKMQSRJBNYJPYOOONESDMPGTMFDURISBGWSPNAHSNRYDRVUQQYFPLVMKKCZXELIFTVXPHHRJBXBNYCDBTKTAZLQDKHABOAGWVGVENZEIVZLZPHFUWAFDXDEMDRYPBJOZKFHPEUTLUIASNWZWAUIEUTMJI");
    tmp_tmp_msg_0_0.attr_type = 22U;
    tmp_tmp_msg_0_0.min.assign("TTEVLUGJTNYBLOIFBZDPBBCUHPQHCVASAVVGYWDDKNUMZMCUWOSWLERXKBHQXVHYETUOCIIGCJGZILJRFZLSPHBKURUGUIZFMHYRAIWAWMGPBYSCMKJDFQKVPQWWXNPFOBIEJSNRJTPVSQBQYWOBILCYAXKCRZAVSAQXLPMJH");
    tmp_tmp_msg_0_0.max.assign("HRWQKVWNCONNDTIXIFAQQESTQKY");
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
    msg.setTimeStamp(0.811308070793);
    msg.setSource(22723U);
    msg.setSourceEntity(48U);
    msg.setDestination(52345U);
    msg.setDestinationEntity(15U);
    msg.op = 3U;
    msg.goal_id.assign("UFUZAEZZCYUHKZDONALCVKXRWSSFWQXCVJCEFDGZBRBHNNGEJSLYRREOAOXDNOHWRKTGCWALYCDOLSJQITFUPHQPLNPWQKUHSXKILEYBIMBBWTGDWTIVRAUVDYOBMQXGZHWGGQSTLFVDMHCWJMQBB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NIDYWDYTBTWQXDLTBYVXSALRCPIYOHPRLVNOYHSJQGOBKNNFUGKHFCBMMSSKLFIZVSTZJRQBNWSJJEOHQSRODSZCFENHOMECVIAXFJKRXKMIUGRZIBNVEULRDTWMAMZSKINEP");
    tmp_msg_0.predicate.assign("CXBUSINWZFTYFOBKTCMJVZZIOUOVTNPSJVQNUCYHNYDBKAFOFABQMWKWYQEJMMQGEWVWHEELPODRIVAUQHEUZMOBGOFBT");
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
    msg.setTimeStamp(0.266787045822);
    msg.setSource(11233U);
    msg.setSourceEntity(194U);
    msg.setDestination(2834U);
    msg.setDestinationEntity(44U);
    msg.op = 2U;
    msg.goal_id.assign("IQGNDGPHQEIOEMTAPALIUOPTTWVHIYOOZJWRQMCWBNNMQLGGKHHBCDPGJRXRMSRVYOGIC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GAWZIXHJHQUV");
    tmp_msg_0.predicate.assign("BWPHYSEPSVQKWLRQUDADVXKTPWCQRLHNEXATDEJFGKLXMXORNMBCQIZRDLHVEKHZXLRJPGDXCFKKFVJISLNUQBBYCSBIYIYUCJGZMNOHPMVJUNJTACNSTMHJYTACFJDSTCKVYSIVMSIWMOXMZWQTOEMQMOWIPAYBPHWVWTDANOZQGWTYHRGGNFQEOROYZZLBOUUIQFFISLXZVGUYBFPURNRKCPTHLGOAXGLAJUBZEJFGEREAEDKUSNBVADH");
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
    msg.setTimeStamp(0.582325695099);
    msg.setSource(38738U);
    msg.setSourceEntity(135U);
    msg.setDestination(55212U);
    msg.setDestinationEntity(199U);
    msg.name.assign("EOSYLLTPRMDFWHUFJCYAERAALUMHTKGGZOQZOJEOMFKWJCZUBVZDQUXHPOQHBLWVMWJDEQGTVDSSGHBSKQJXNGOTXBACEITZCNNFDYLNUBEQBELMPZNZGWXSPLDTXRYIDHDKSKRVUNFXIMNVDTCHCNMARZUNYHIGNJCOYVXBVLYWXMZFIKXAWHFOVKRYSEYKPLISVPJXKAQYARJPLTGQMDAQRABJFBIFHICIQMGJWURFOGRWEVE");
    msg.attr_type = 151U;
    msg.min.assign("JCURXNKICKMTNQPBOLFBAQNQUNQLAGWRGSWAYJMZVDPOOPCLWRDHJZUWYZMCBYIIEURAUWLREGSXAOMDABGGVGTPWAL");
    msg.max.assign("QNYFRXQAEWGJPVUDHBUHUSLSYFUMGTXAZKTKISBBWNADHTZMHOQEXKRPFDKSUDFPOPWLPCLPFILBQSLDCBAYEDKVRSQSOQYRBCZARNNINWKXTMNEIQGFZYCZYXLVVKLWASBCIV");

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
    msg.setTimeStamp(0.666523078413);
    msg.setSource(53677U);
    msg.setSourceEntity(104U);
    msg.setDestination(55373U);
    msg.setDestinationEntity(29U);
    msg.name.assign("FLLSTMHBMECNNTIBPOBENGPDRLXWAOEDGXDBXOIZADJZRZKBYVQIGGXWYSWCGIWXGYFAUCJKYUDPYQORBXMSJKTISQNGZNZLLFEHPETAWJZAQNVHQTUZAPQULEAXUASHDWVEKYIHILUYVVZEDMW");
    msg.attr_type = 208U;
    msg.min.assign("IODHRLFXYTO");
    msg.max.assign("NPPVKDBPWWQWEIOTIFRLXBKIXQDBXRBCUEEAFAFSWJUUHDVJYZATIMFANJ");

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
    msg.setTimeStamp(0.556283650411);
    msg.setSource(4038U);
    msg.setSourceEntity(26U);
    msg.setDestination(46685U);
    msg.setDestinationEntity(147U);
    msg.name.assign("VRHJISWWJNYIMVGOJDCHFXQKAHPRBCSCOLUVXUJYFEPQPAMVNT");
    msg.attr_type = 189U;
    msg.min.assign("ZPVXCQMSIVAAOOIXWURXVHZKFJOZFTLACJSLDVNTKOYBZBNBOLINQJVYWIULPEGVNBPATXGSJBISYUAJURRSSREKFEPXGTHRDWFMKDMZOWSCBWJMGEUKLCQXXUEJATYPDDUHPMWGKDGXHAHDTXDFPHLUJPCVCAMNYKSRQILQBKYEGMMLRZZSXYESYLTGCOTIZWQNHFQNVDUMERAREABYIJWVFTTWZCEBQNH");
    msg.max.assign("JKMNDLDCFFVILPXGORAEKNRBSNMDBUOZWNYGNQGDTZJWWYHWMCHSPYKAYEASQIB");

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
    msg.setTimeStamp(0.992900666373);
    msg.setSource(12220U);
    msg.setSourceEntity(190U);
    msg.setDestination(55903U);
    msg.setDestinationEntity(129U);
    msg.timeline.assign("EWJDHOOJIUPUNTOIRUMBBJRHQXVXTPHZKWAIQMKCH");
    msg.predicate.assign("UVRRAWOSYFRPWHSBOMAENARHGILJTXCLSZZJEDHNCELQEAGRTJLAHUUNHCGOQHWQUDXNOBGPADLAAJBCOKFQZFMDDVYUEXUMXHZYKWOIEQIJFARJJXDBT");

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
    msg.setTimeStamp(0.18503161513);
    msg.setSource(8298U);
    msg.setSourceEntity(244U);
    msg.setDestination(35466U);
    msg.setDestinationEntity(113U);
    msg.timeline.assign("PCVSERQOVNMJQVIXGULKRGUJROKVXSKOPDARHHSXZYABJDFIHIZNHYPSEXWDRHFBWFACCPKXGNPOBVYFPLJXSNDKTEZXJTBBVDSMCOUIOYWLBZFTBLWQGYAGCKVZUXWZIYBIPSWQQNTMMLCYAXAJTEDUKITUZJRQWRFDBOQREZRZTGNFAIOEFUJLXDYFGNUSEIGKVAIDOHRQWMGLNLTHBAMELYCSHPVWQPFCPEKHNMDUQCK");
    msg.predicate.assign("OUTVGPJOUWENUAGNHSLQPLMTEIAIRAUHFEIJQCLRYRET");

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
    msg.setTimeStamp(0.970408410455);
    msg.setSource(48578U);
    msg.setSourceEntity(200U);
    msg.setDestination(51508U);
    msg.setDestinationEntity(43U);
    msg.timeline.assign("QQZIJMSUGIYQOVAZPEPNVLOYXBYRSCOBLUDFOWTNRQGSEETYGFLTBSHBAYMTQRQMIZTZKUBLLDIYSUQBVJFNUPQGSXILTAUADXKHDNZCDIVVDJXHUPCEOFJHEGAVOW");
    msg.predicate.assign("BKOAEHTATHHNTPXPJZISHFPKFXNMCCHOVWLOAEJFTJVQJXUMLVYDRXAFRAOCXSRBLGMWZZKM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("NZPPHKEXDIECMUTIVAGRYHULUAKCLBQOSLAIPGJBZIJGNKOKPFSXIHPRDTYNCDKDCDZHLFYWQAVZFRTTYHNQXHABUXXWYJKOJHIGXOCZJVQBESQUNETAORXSZURMVOJUOQRFEDJBGQNLTKTKVJMEEIEBMRGYXUWOHWFWNYPWL");
    tmp_msg_0.attr_type = 29U;
    tmp_msg_0.min.assign("OXUCVODLQAYFUOSOPRKGNGSMGLZMRXLUBEBTLQZSXJWQTSHBHWASBJCSCTLJCZUGWBRKCOXUIGFWJNPURXIWGYXPHMTWGNZWJWCWKCORLYXGFATYPVKYKHIBQJDXHAFHAUPT");
    tmp_msg_0.max.assign("GMCKLAPZLCOMCCLREYTTARAFQZLQQJULLVOIHDWGMWZQOKHSA");
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
    msg.setTimeStamp(0.729402878502);
    msg.setSource(57816U);
    msg.setSourceEntity(23U);
    msg.setDestination(3381U);
    msg.setDestinationEntity(95U);
    msg.reactor.assign("GPHWJQMFVRJTESWPCBYTOXPMBURHYTASDHKFQNHVOZSXCLRHQJTBDDMZR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GFKNQZMYUBDRTGDDJLGWBAKSMYGOIPAQSIFYRMAXVLKKQSPBRLTJYWVXXEKFNZDEQ");
    tmp_msg_0.predicate.assign("MPDFYNCUZHWNFQFGAGDHCGXHSBRIESCFZXOABDMELAOBJDAVFIADYLIPNYNCEWLWWCSNKPPKKYNRGGCVVYPQMTTTBCOVVOOERPUOZPUXVTXJCNLZYRWKLUZQHGJPQULOEFTBVTSQQXLBZKIAEWRHHYXPJQMAUBTMJLTJITKBUIRNKLMHVMMSFGOSWJSXGSZTRDEQOXCDQHRVOKDJZEDKPDYWEAGULXSYJIBUCIZFAMNRWANZ");
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
    msg.setTimeStamp(0.179637349685);
    msg.setSource(18109U);
    msg.setSourceEntity(135U);
    msg.setDestination(10441U);
    msg.setDestinationEntity(121U);
    msg.reactor.assign("OXRLNDGZWTMWUZAKLPOZGCAAJTTLMXQVNLEOYYZJQPQENUYTDGBUWRSUXICRHIPQUFOXKEZVAHKPFDNBUGVJWBGTUKKJYAQLIVDHSOSZINXBHGZMEGITCENQUHIPDIENAQERDFOYTGSMSCRZMBAVVZCTLCMMSBBRMPPJSDXXTEJJRBQSYCUALJEKSIIJHVZVLMRVWPHYCLFNIGYM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SEWETLBFATEFUPPDWDLTNGYBBQHJOYUMEWJRNZPGOSJJLKAXJTCKPLJSIKZRVSIWYDASLDUITWVUHLMFLXXHZXJXYGWHBYQILQQIRFXRNAINWFNEMCZSJPQKWWEMWQCBDBIRGJVHPQHECOCYXERQBCNAZCMTOMVZGSKNVKOABRINXTZVKFDCPTHQXHLHMYNYNZPGUVMOXSTFGGRTKQDDIBRKFJGORGMUZCSF");
    tmp_msg_0.predicate.assign("BCEKTVSXGGKFWGZRHLJYLKIAPFGAMVGKBLPLKUEALTVDEJXQQYNHGXYWRYZHQJVOBNQFJEZDWXIFSIKVDWUOHDMTVPXKTGGELOIUQXLSMHNNOFMPNWYWSGTAICCMTLNNDT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SFEMGMKTPHJQWQWMXMWCAEBIPUFLMOCLQMRBJSXXIUCGOPHFRWCFVRGDBDAJTBKDJZNJXEJJEETDKPIVCATLYHZTPQKMHNYQAPWDKAKZKIXYWENKYVNYTQROBRIRHADXIOCLFMSEQYUKMWUCYZSWBWS");
    tmp_tmp_msg_0_0.attr_type = 148U;
    tmp_tmp_msg_0_0.min.assign("VHLDHINROOIGGHQUJOXYUPRNWUKCJXCDSQEPJNFMTXPJUJITZYMX");
    tmp_tmp_msg_0_0.max.assign("SSCESWBRSFMBTEVJKBGIFZUZJKEIBYUFRACXCWTODLCKJJAA");
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
    msg.setTimeStamp(0.310171885192);
    msg.setSource(51503U);
    msg.setSourceEntity(95U);
    msg.setDestination(18722U);
    msg.setDestinationEntity(125U);
    msg.reactor.assign("IEDIFSEVLICOPNINWHZBQXTFDVHTGT");

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
    msg.setTimeStamp(0.825375227397);
    msg.setSource(29405U);
    msg.setSourceEntity(99U);
    msg.setDestination(56059U);
    msg.setDestinationEntity(177U);
    msg.topic.assign("MBHILWQVFBOHCNCGWXSCMNWBAIPWGCIIQRGBQVZVSKSKCJSGEQHKQTKAFWAEPOOYULOYZXRBNUWSCDVJHYIFUJTXNJHHDSLLAPCTBWURKMJZLEQDRTAJPIGQVOPZLWGTZJAXNHRXMDYUBOEXOTOPAVQMYEQEPVPHVXURZISMNLBFDNNDYNGFFYMGWTEMETZKKRSBANUDECVF");
    msg.data.assign("HXGJCFFHECZZMUPVPNBLGOWVWNMUNGDJFHDBCNCBEUSOBLDWUZSKKDAPSUYQPAWAEZQHQWGNAVMBOSSTYGJSLZLXPKZFRWJOILHBQEJZVNBLPUQDIZXVTKSKWLUFGJOYDTYOFPGHFCUKYTJAXKNODCZQYHITYABTMMATOEOETFKBOJSBMIRVQXTHMRARVGYWFRRCQMLJJFTAXRGYEVIIPUKQICMYRZWXI");

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
    msg.setTimeStamp(0.037042208622);
    msg.setSource(44044U);
    msg.setSourceEntity(197U);
    msg.setDestination(10164U);
    msg.setDestinationEntity(45U);
    msg.topic.assign("YCDNGWDPGRTCPMCBGWQJRSHVNIRHENDBHMOQMCDZDOFJLKGEAQRZLAIXTURYVZXVUJBYEVQOHHIOFXUVYVUWTNTLIYNJKXIWAVAWKPUAPSYQJZKFMQIERFQTQJSVHUWXTCIMRZFUBGZXWYUGKTKJEEBCWFYSPKKNCZHUDASNBPPSEGJGIZMLFTRQCIMKBFBPSEAXLQELXLPXGFKMLHUXOZOTREDVNGCBOSJWYHNTZOSFYDMONAJABVD");
    msg.data.assign("IZRGEXHAQEOXHLNZIEGLDJDQKWIBFPXBFMXLCKPDEKFBRUCJEHKWWPARFTYXDAZPCAUUWUKPPGPOVIUOOGOECLTSMSSYIHGEZMMLPTJXRNVYSJNZRHUKXWNJGQSOJCK");

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
    msg.setTimeStamp(0.150422543603);
    msg.setSource(31836U);
    msg.setSourceEntity(177U);
    msg.setDestination(32699U);
    msg.setDestinationEntity(69U);
    msg.topic.assign("SVNJMPANURQGSPHXJHKYVYVUZKQAFIMCYDQEEKGQDNFBRZTXEWMEXUGRBAXUOCQTPNMLBVKCKLHMGBBJVHOUNOTJFIZCPAOCDLSWHULPYVAWXWOZTNBYWFFDXOXSBDILKXEYQMKYAYDX");
    msg.data.assign("OAWYVJWSNIAQERZHCUBBABSWVAARGLSZGKHOBTFIYQXMSNCEBUOTMVMANLNRDRGCMKWZTYPNSXOIYZPYDMPSOEFCKVXCDKWRHJEXC");

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
    msg.setTimeStamp(0.167596820726);
    msg.setSource(53468U);
    msg.setSourceEntity(196U);
    msg.setDestination(9981U);
    msg.setDestinationEntity(43U);
    msg.frameid = 48U;
    const char tmp_msg_0[] = {111, 63, 71, 27, -71, 55, -13, -75, 0, -51, 4, 14, -102, -104, 113, -61, -67, -77, -18, -75, -127, -30, -80, 107, 89, -35, 92, -67, -48, -7, -98, 82, -124, -13, -22, -2, -36, -2, 94, -59, -40, -95, -2, -84, 97, -97, -35, 80, -66, -55, -3, 98, 49, 95, 72, 48, 92, 74, 126, 18, 86, -30, -72, 17, 50, 126, -109, 117, 86, 108, -88, 119, -25, 109, -28, -21, 45, 81, 61, -18, -122, 118, -118, -10, 108, -63, -118, 111, -50, 84, -59, 22, 107, -121, -77, -97, 116, -103, 83, 65, -19, 42, 20, 15, 67, -64, -79, 73, -91, 5, -78, 30, 124, 55, -23, 11, -118, 107, -83, -30, -68, -15, 119, 12, 18, -82, 8, -5, -9, 52, -2, -43, 7, 48, 42, 89, -4, 59, 69, -102, -122, 55, -28, 113, 20, -14, 7, -121, -120, -86, 24, 123, 29, -26, -41, -46, -51, 44, -83, 65, -128};
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
    msg.setTimeStamp(0.988172947287);
    msg.setSource(48630U);
    msg.setSourceEntity(127U);
    msg.setDestination(44406U);
    msg.setDestinationEntity(0U);
    msg.frameid = 171U;
    const char tmp_msg_0[] = {-12, 51, 22, 44, 110, 65, -9, -97, 63, -97, -82, 32, 111, 15, 65, -105, 109, 124, 11, 48, -86, -105, -71, -32, -128, 94, 105, -15, 5, -117, 51, 20, 123, 55, -83, 70, 7, 20, -103, -81, -73, 80, 83, 36, 120, -81, -112, -21, -108, -25, -94, 95, -25, -60, -30, -83, -77, -53, -52, -72, 75, -54, 108, -16, -8, 67, 125, -98, -104, -94, 120, 86, 50, -112, 13, -28, -6};
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
    msg.setTimeStamp(0.208378018252);
    msg.setSource(60783U);
    msg.setSourceEntity(167U);
    msg.setDestination(40786U);
    msg.setDestinationEntity(171U);
    msg.frameid = 14U;
    const char tmp_msg_0[] = {-34, 30, 110, -25, -73, -123, 27, 57, -91, 56, 108, -115, 38, 22, 76, 23, 108, 9, 69, 96, -20, 104, 84, -69, 105, 50, -58, 47, 126, 68, 31, 11, -87, -102, -76, 92, -108, -94, 2, -57, -70, -122, 70, -33, -30, 23, -31, -38, -13, 8, -99, 109, -19, -22, -98, 116, 97, 14, 36, 90, 112, 68, 66, 45, -75, -89, -29, 62, 85, -13, 69, 54, -96, 83, 109, 63, 115, -29, 42, 111, 113, 84, 108, -128, 14, 47, 17, -91, -125, 24, 50, -104, -26, 23, -41, -10, 91, -68, 84, -10, -45, 107, 120, 30, 17, 96, 29, -21, -92, -47, -57, -118, 62, 15, -54, 51, -96, -44, 96, -42, 92, -86, 92, -35, -64, 85, -112, -5, -76, -38, 43, 81, 108, -105, 101, -72, -89, 106, -78, -60, 120};
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
    msg.setTimeStamp(0.103549468782);
    msg.setSource(58195U);
    msg.setSourceEntity(12U);
    msg.setDestination(2052U);
    msg.setDestinationEntity(11U);
    msg.fps = 52U;
    msg.quality = 104U;
    msg.reps = 148U;
    msg.tsize = 141U;

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
    msg.setTimeStamp(0.836207975326);
    msg.setSource(39544U);
    msg.setSourceEntity(93U);
    msg.setDestination(8366U);
    msg.setDestinationEntity(218U);
    msg.fps = 65U;
    msg.quality = 201U;
    msg.reps = 116U;
    msg.tsize = 220U;

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
    msg.setTimeStamp(0.592764968851);
    msg.setSource(50274U);
    msg.setSourceEntity(13U);
    msg.setDestination(59517U);
    msg.setDestinationEntity(61U);
    msg.fps = 254U;
    msg.quality = 45U;
    msg.reps = 195U;
    msg.tsize = 80U;

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
    msg.setTimeStamp(0.3664293763);
    msg.setSource(34769U);
    msg.setSourceEntity(91U);
    msg.setDestination(56392U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.88333801462;
    msg.lon = 0.24580950031;
    msg.depth = 226U;
    msg.speed = 0.96592125393;
    msg.psi = 0.152942510764;

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
    msg.setTimeStamp(0.22448912744);
    msg.setSource(63558U);
    msg.setSourceEntity(211U);
    msg.setDestination(49151U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.226970607189;
    msg.lon = 0.64828520061;
    msg.depth = 62U;
    msg.speed = 0.803136094842;
    msg.psi = 0.635044264907;

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
    msg.setTimeStamp(0.769769038419);
    msg.setSource(50849U);
    msg.setSourceEntity(75U);
    msg.setDestination(53978U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.363125702214;
    msg.lon = 0.244604715039;
    msg.depth = 17U;
    msg.speed = 0.45341337237;
    msg.psi = 0.455654057982;

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
    msg.setTimeStamp(0.276822216656);
    msg.setSource(54354U);
    msg.setSourceEntity(10U);
    msg.setDestination(35726U);
    msg.setDestinationEntity(111U);
    msg.label.assign("NZUJAPWOZNHMSLJHOUSBKQTUPJSFEDKKTQZUCXSIDNUHRFDLJACSJGVQISMKLSFRBQZAQIZVRBNHLGRTHZKLCDZTBYACMXMBOUDOCWDNGJPVHDNEUTFXTOTVWPVFRWBXZMHNWNPGLYBFEGRPDAMJCGQLZVLIBYQGETCJEVAFXXRJ");
    msg.lat = 0.342209100705;
    msg.lon = 0.0688574067272;
    msg.z = 0.525386294404;
    msg.z_units = 133U;
    msg.cog = 0.562269268454;
    msg.sog = 0.670897011668;

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
    msg.setTimeStamp(0.700368348696);
    msg.setSource(65382U);
    msg.setSourceEntity(195U);
    msg.setDestination(3423U);
    msg.setDestinationEntity(212U);
    msg.label.assign("LAANAODWBYKONJCTROKI");
    msg.lat = 0.661823481683;
    msg.lon = 0.804208672686;
    msg.z = 0.846822231681;
    msg.z_units = 196U;
    msg.cog = 0.0494160301872;
    msg.sog = 0.721037503079;

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
    msg.setTimeStamp(0.597103506035);
    msg.setSource(19755U);
    msg.setSourceEntity(232U);
    msg.setDestination(11920U);
    msg.setDestinationEntity(123U);
    msg.label.assign("UGHMDEGNQWRWGRVKVCOOP");
    msg.lat = 0.292856255611;
    msg.lon = 0.73934077115;
    msg.z = 0.0312136500469;
    msg.z_units = 157U;
    msg.cog = 0.115773780291;
    msg.sog = 0.745562705165;

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
    msg.setTimeStamp(0.687618541937);
    msg.setSource(32167U);
    msg.setSourceEntity(150U);
    msg.setDestination(41143U);
    msg.setDestinationEntity(88U);
    msg.name.assign("WNVRCCAQWSZITDHZTKCWTAZXZYGWWKRDSGFDSZIOJMISMDUOVVMQWGQNXMGAUQLFROYJNWUFINBIEMLMUHTQOEVARENOIATDKJCLXXBOJDHNFBRKEKQBYMJEDJOELYSVFSDDFCCIOZJVDNBRNPYRVGJYHUECSZHHTMWXPJLEGRPQCBTQFIXZLPNKHASBUUOXYVYEZSMN");
    msg.value.assign("YBOMSJUZVIMBADFKFMVPJVMESHXXZSGFIVMDBLAAKIZGQXWDWMCWSXWXYJILTAHDCSBPNNFKDHLLCRGWYVOTYDYQUBQPONURNUXAWJVRMIERYHCRITLLVEZCTKJPRNHBMEPARXGXGHELJIJFTCLTIKSCRJBVKNXKEEAQWUDGCFSGWOQBUCZBQFLTEIDROENYZUJZMNAAURBQJQ");

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
    msg.setTimeStamp(0.0566898591277);
    msg.setSource(55407U);
    msg.setSourceEntity(131U);
    msg.setDestination(51337U);
    msg.setDestinationEntity(14U);
    msg.name.assign("RZCYJSBLWOLRVIEQGBFPTUYLQLMLTXFJOSNHXYJKPFZYDXTPMAWQGRIDPQFMZPAVCEKECTNZNJKVKOUSOIKDOPUIAGGJSVOFHMBWWHLOAZUATZQOSHQFXEMCNPBLABSPADNPWYECRUVKFHYWACJKVHSJYUHDWELINYBEMKGIYNOXKFRWBCFMDNXRLFTVVHXTPUVQUXDCCKWMQIRLRWBGMZIXBUTEUXYGEQHJBDDICZV");
    msg.value.assign("XPSGHLIOKPSSODWYMQPUCNPWZHIQLSOQXOBRWZOGKFSLYFDLUNHFTZXIVJYGUURPEBJSKRVURZVIFJTJFNTFCWIWQYGVLMUWXGGINZXETRKJYPDZIJJKCKFOVIWBI");

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
    msg.setTimeStamp(0.0111945310866);
    msg.setSource(62948U);
    msg.setSourceEntity(114U);
    msg.setDestination(41397U);
    msg.setDestinationEntity(57U);
    msg.name.assign("KQZAWIKYDCKAEYSCRUZINRHYBIOKIPXPNMMFLBSUNAQPRVUCDZSGGECDFHTXNLQPVZXVMLWYYJECEKTIXQHG");
    msg.value.assign("PQAXBSWJXZQSXWBDPHIUXRKSWCVCWODKXURPHMDOMNTPEKEHVSBIZQBTO");

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
    msg.setTimeStamp(0.831131413609);
    msg.setSource(1221U);
    msg.setSourceEntity(68U);
    msg.setDestination(48461U);
    msg.setDestinationEntity(226U);
    msg.name.assign("JUVQWMFKJVTWOFLGQAGKRHLCCHNPOPIZIEUKAHPDJPYJUTUAYLGREF");

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
    msg.setTimeStamp(0.510353652737);
    msg.setSource(1334U);
    msg.setSourceEntity(215U);
    msg.setDestination(2766U);
    msg.setDestinationEntity(196U);
    msg.name.assign("VJBFZZBFWHDKDCGCXKKSLJZSDBYPPIRNMQLIRVSGAKTERZRENIXBJUCWBGKMUPARRSGINETOJFYWCCAPAMGTDVANISYPCLXFLUCOHUFVZSDCFGDEJDYXRRFHWGIYKYXABPKQLHYVQWDXPMCPAZQZ");

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
    msg.setTimeStamp(0.0853294778627);
    msg.setSource(41663U);
    msg.setSourceEntity(201U);
    msg.setDestination(63344U);
    msg.setDestinationEntity(53U);
    msg.name.assign("XKWHECCLDADYLLLBSGHWQGDLZPMBTKVSSEEZCQOKOURUCBYGAEUIGOTZAMTJRZRRJGGUHCCGDXGHF");

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
    msg.setTimeStamp(0.959578757954);
    msg.setSource(10540U);
    msg.setSourceEntity(150U);
    msg.setDestination(13071U);
    msg.setDestinationEntity(208U);
    msg.name.assign("FDZWOWEMNFQAATFXODDFIJGFFZRRDAIKYKVSXSNODLXNRTUHPLIYXAMYTSDQAAJDPVCRYBBKGPSTXS");
    msg.visibility.assign("JBGNXMIUSYPJKNUFLXAEHJZFTABQRMLHHBNTVXMGOHKRJLALKYAYCVXKBXZURCRTOZSFLQROOMBUADNZEONFWNUQDVSSVCWQVADKVPMDTELJPILX");
    msg.scope.assign("BRKGJMOEUSUSNSQUVTWWYWNKWXPJXOGRBRQBMNCZXUVRMHIVTB");

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
    msg.setTimeStamp(0.134086822064);
    msg.setSource(13400U);
    msg.setSourceEntity(206U);
    msg.setDestination(34521U);
    msg.setDestinationEntity(7U);
    msg.name.assign("XLPHOGUQMSQHNUSEREPLFEZUAISNSXPKATRMJRCXQGQWNFCRPCXXHPHLVXGIZDKKSIEONTUILAVJYAVWVMGLGOZZSTFWVNRCAGIDXOWJAXZNMCATFAGPITKRBODWPSIKUBCZLYSIQSKCOMWTTKEHVUHJJBEBRVUBDMDLMJ");
    msg.visibility.assign("VFZYCPXVZGVFPRJMLQKSSUEMAHFPWKCXKGVJGEBFENQLRSRVNASRNJ");
    msg.scope.assign("PUEGFDYPLRJENAEMJZCYBDROJIJEFLSAXSQMULHFPZEBNMVPKZSVHDBKNRWJBTHDMIGWUZEKCMRISEXHCIIHNKBWVHBIRQ");

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
    msg.setTimeStamp(0.397721190791);
    msg.setSource(17223U);
    msg.setSourceEntity(210U);
    msg.setDestination(58417U);
    msg.setDestinationEntity(232U);
    msg.name.assign("BBPNQOGFQTOYKKJXRYVCTIVTRSLOIWKJJXCPXPPEIMHLUCYRFZEEHRYWBVRFXSDUYFPBMHXRGMASEDWUUWCHWZMWAXEMLAAAXFRDD");
    msg.visibility.assign("RHFMDBKOGFBBBZGYRDIXXNKVWUCBNQGBULENLHYAPDZASYJJMFDETK");
    msg.scope.assign("XKMXGFMCYEVSFTV");

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
    msg.setTimeStamp(0.567061986173);
    msg.setSource(2789U);
    msg.setSourceEntity(206U);
    msg.setDestination(16212U);
    msg.setDestinationEntity(8U);
    msg.name.assign("NKNVBAJKSIEBNQHWKKGLHVUWFNPYSPPZGNYHZNCHUOMJGRTTXOWSKSJHOFRPRKYMCUKPZKCW");

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
    msg.setTimeStamp(0.576185612316);
    msg.setSource(52175U);
    msg.setSourceEntity(94U);
    msg.setDestination(31301U);
    msg.setDestinationEntity(75U);
    msg.name.assign("POOCJBCWMOFGSXAGNKVLMDVPSMJBUOJDXDYPEFBSTVETRSEMXURTYJGOKWQOWKVSIDAWZAGGXIOBVSLIFNKPBSALCFZUPHJQQZQAACCKKIRNLWNQPRUREYWUPHEUDYIIPNTSYTBHFLDXUGCLVZJRFRENJP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PMHUDQULJPHDXYZYQMENVXEVROZBWYXODRPGHEIDTESSKAGGSBFCWLOEHDIMNOAGNMGYCACOZ");
    tmp_msg_0.value.assign("ZQFJOQNBDOGWWIYRQOGPBSZYXMFBPGHZUASJDVFCJXIFOEHMLQUBJRNKMJEWQGDMNUUOZIMORAXBVEXNHGHUPGRP");
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
    msg.setTimeStamp(0.614115891052);
    msg.setSource(58180U);
    msg.setSourceEntity(220U);
    msg.setDestination(48610U);
    msg.setDestinationEntity(115U);
    msg.name.assign("EITYGXXZNUQLUKENCURXLVUPICCRXZYXGDBTMCIWQQDUBOIERPETMZXDLGSRVGSEJWTNBCNYYGEMDRH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MDTYDAYSBANHZAIGDNDHEMHZOXZIJFKOXJOHWGMISSRHKITSRMFLUMCYXPUXIMPFVN");
    tmp_msg_0.value.assign("DZENRQBVLTLAHTLKNZOICQBYMBEZUUFHQJSFIBG");
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
    msg.setTimeStamp(0.474347471917);
    msg.setSource(1233U);
    msg.setSourceEntity(121U);
    msg.setDestination(34242U);
    msg.setDestinationEntity(75U);
    msg.name.assign("DWABXMKLTCXKHCSTASBESKXUJYGPBFBOAIEVNJVMUEAXQQHJZNZMLUUIGAWZUWULKPXVJBEDORGVSONHCUWHHYQZIUZBLGDIFFSMFGQKRNPQFJLRRYTIHFCSIZHVRWPKSZITRNPYRWNWLGJVDNBQSYAENKYDFSJBJMWTZVATPLEY");

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
    msg.setTimeStamp(0.607857312592);
    msg.setSource(55547U);
    msg.setSourceEntity(4U);
    msg.setDestination(54887U);
    msg.setDestinationEntity(144U);
    msg.name.assign("SBJJONFVRYTOXIJAUICUSIAMFCKRFLHQLQTIXPIBJYKZGWZVQEELRHKMLXKORXFRBKLINAIQPTSBTUBEGOPCXDQVSZEJFDENSGGEPFJZZMQUGMOMZPYVNMNWDVAOPDOGZHHTWAPVTDWUVBYSYLNJDZXISYLTQWSVGPAWAPEPCXFFYNURNZQUMX");

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
    msg.setTimeStamp(0.70103157027);
    msg.setSource(15162U);
    msg.setSourceEntity(86U);
    msg.setDestination(14888U);
    msg.setDestinationEntity(232U);
    msg.name.assign("NGASQLMIBNJONBAGYFWBMMAUKAMSQWSZFVDODPBWUIIQJQFTGQLHUZNYJWQVXFGEDMXA");

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
    msg.setTimeStamp(0.75668599562);
    msg.setSource(22817U);
    msg.setSourceEntity(168U);
    msg.setDestination(19539U);
    msg.setDestinationEntity(62U);
    msg.timeout = 3692795323U;

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
    msg.setTimeStamp(0.164267037821);
    msg.setSource(37913U);
    msg.setSourceEntity(47U);
    msg.setDestination(21010U);
    msg.setDestinationEntity(210U);
    msg.timeout = 1644945899U;

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
    msg.setTimeStamp(0.77648155292);
    msg.setSource(22523U);
    msg.setSourceEntity(223U);
    msg.setDestination(9144U);
    msg.setDestinationEntity(216U);
    msg.timeout = 4294433906U;

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
    msg.setTimeStamp(0.252555274304);
    msg.setSource(27910U);
    msg.setSourceEntity(91U);
    msg.setDestination(1542U);
    msg.setDestinationEntity(85U);
    msg.sessid = 562307308U;

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
    msg.setTimeStamp(0.496601680883);
    msg.setSource(64220U);
    msg.setSourceEntity(10U);
    msg.setDestination(13296U);
    msg.setDestinationEntity(81U);
    msg.sessid = 4241941782U;

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
    msg.setTimeStamp(0.301955379606);
    msg.setSource(38220U);
    msg.setSourceEntity(25U);
    msg.setDestination(4897U);
    msg.setDestinationEntity(65U);
    msg.sessid = 1761549409U;

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
    msg.setTimeStamp(0.086772660626);
    msg.setSource(11944U);
    msg.setSourceEntity(10U);
    msg.setDestination(16317U);
    msg.setDestinationEntity(217U);
    msg.sessid = 3189874288U;
    msg.messages.assign("MXKPZIFXKCGQFQUYXLUDXBYENVHCFSHZOYBECFHDRCLTGRKMJNEJNTUVABSMTDZSFDYEDKAWLQNTWMXKDDBZWCMBLHVBSSMNYKTMGDJCQPSPURASXDLXGXRGQIUONWZUPQAAPCKTCOMXJPUTFARVIEWRSIPNSUHVROOZQHBLEZQIHJGFQFJCMAAKNJEHODYFIOQXEVHKJLYUYWCOIBGGPJTMLRWSV");

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
    msg.setTimeStamp(0.0458521731234);
    msg.setSource(62054U);
    msg.setSourceEntity(105U);
    msg.setDestination(16246U);
    msg.setDestinationEntity(135U);
    msg.sessid = 3663107548U;
    msg.messages.assign("BZJTKCLNTUDWBKZKHSJNMZVEHPPHYYLRFWGJVOEGQDNFROZAMGZGSSCIAVOHJDXSFRZZAEDKFEZCKBVUANIHEPBOVOV");

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
    msg.setTimeStamp(0.180880878508);
    msg.setSource(60517U);
    msg.setSourceEntity(77U);
    msg.setDestination(65295U);
    msg.setDestinationEntity(38U);
    msg.sessid = 4283080190U;
    msg.messages.assign("XXBMAFNHTWHHYFZLIMFYRHLSMYEFASVKIPIPJBOKNILQSGVTHXAWG");

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
    msg.setTimeStamp(0.208431151051);
    msg.setSource(12822U);
    msg.setSourceEntity(60U);
    msg.setDestination(15302U);
    msg.setDestinationEntity(138U);
    msg.sessid = 3321133477U;

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
    msg.setTimeStamp(0.917205926952);
    msg.setSource(26548U);
    msg.setSourceEntity(87U);
    msg.setDestination(14149U);
    msg.setDestinationEntity(56U);
    msg.sessid = 3097939059U;

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
    msg.setTimeStamp(0.914432409795);
    msg.setSource(52139U);
    msg.setSourceEntity(228U);
    msg.setDestination(19103U);
    msg.setDestinationEntity(17U);
    msg.sessid = 459277074U;

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
    msg.setTimeStamp(0.327248363659);
    msg.setSource(11926U);
    msg.setSourceEntity(86U);
    msg.setDestination(21831U);
    msg.setDestinationEntity(236U);
    msg.sessid = 3823284706U;
    msg.status = 51U;

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
    msg.setTimeStamp(0.554489097839);
    msg.setSource(48309U);
    msg.setSourceEntity(211U);
    msg.setDestination(30121U);
    msg.setDestinationEntity(159U);
    msg.sessid = 228326121U;
    msg.status = 50U;

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
    msg.setTimeStamp(0.349788465575);
    msg.setSource(34280U);
    msg.setSourceEntity(169U);
    msg.setDestination(36140U);
    msg.setDestinationEntity(240U);
    msg.sessid = 1172330761U;
    msg.status = 112U;

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
    msg.setTimeStamp(0.157705773803);
    msg.setSource(36448U);
    msg.setSourceEntity(219U);
    msg.setDestination(38617U);
    msg.setDestinationEntity(112U);
    msg.name.assign("JQJTKKFNOIXLJTKPAUDSCEREOJORLIZTDOLLHUBGYDHOJRIYCGCWBKAUHXSCWCGEKCIXLZXTSKFHHMPFLEJAPMZJJZFTMHGSGWBNNIRC");

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
    msg.setTimeStamp(0.0163480890034);
    msg.setSource(13111U);
    msg.setSourceEntity(164U);
    msg.setDestination(10482U);
    msg.setDestinationEntity(110U);
    msg.name.assign("GKYAADXESXTFTVPGHTD");

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
    msg.setTimeStamp(0.813575942226);
    msg.setSource(26706U);
    msg.setSourceEntity(144U);
    msg.setDestination(35906U);
    msg.setDestinationEntity(181U);
    msg.name.assign("RWHAMIKLCHSSRWSVJKZYFXEJQPSIBQVWHRVHRQNRMIJDNGHOLKODJXGFIMBVKEMJLQWATFASPWPWHEOQDQMOXDVNBJFCEHPUHCBCIMTCYZDQLWETGGXBAUYZVSCGLXIEETGSFVZOAGHUTIZKFZOECYITSQBXGUHSRJUWIRBNCOTCFOTKYUNGPZ");

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
    msg.setTimeStamp(0.0611595401528);
    msg.setSource(7130U);
    msg.setSourceEntity(93U);
    msg.setDestination(62504U);
    msg.setDestinationEntity(205U);
    msg.name.assign("NUKYVPKFHFVNIGESRRPTAVQUXHSMQXQDRDAMNOLERADATIVSXTQDJLDBIQAFBYWZATEHPYLEGIJLZCMBJUQHRBMUCOFRZGFIWQWQJCZYMLTGWBXTYYPSVVUFWRWGIBFEPXCCFPNZCSGTYNZAMXWHBV");

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
    msg.setTimeStamp(0.0463291112958);
    msg.setSource(18508U);
    msg.setSourceEntity(243U);
    msg.setDestination(46980U);
    msg.setDestinationEntity(69U);
    msg.name.assign("JKWLKVQGBRDLAVBLGDOMCJVQWSEGCENBSHRCJRZQBUPZFZFRTPTBNHEHSTJBSYFKGDYARNIOPWPPGDBLIQUOTQNJWENJPUXGDFVFZUMHXOARGINSPPTNMUOEWXSJCOLDNIHHFUDKXCOSVPITIOXSVCRQQSCGLEUAYADPRCYAWIXQLMSDVKK");

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
    msg.setTimeStamp(0.388267963082);
    msg.setSource(35348U);
    msg.setSourceEntity(37U);
    msg.setDestination(30066U);
    msg.setDestinationEntity(106U);
    msg.name.assign("OPQAAEFWCPUWFQTBWGHKKQBXYYIPZKUBPZCCZOWJLQSHHHTTGSIIFQSJGXIMAHWRFIUAVSXOFQKNHIJNUMJYBDDAATFRJGJYXGHTJQMEDEGNLKQGAAWETVXYMMVYZLSRKCNDWLZOVSKFEBPTLZVDEMLERRDPSGNZTWULEO");

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
    msg.setTimeStamp(0.276016289853);
    msg.setSource(55911U);
    msg.setSourceEntity(201U);
    msg.setDestination(26481U);
    msg.setDestinationEntity(80U);
    msg.type = 35U;
    msg.error.assign("ZSHTBDZRJQCKJPGJFXBAKWVAVYDJPVYVBLAWRHZFYKLNVCTNOIGBSIKBDXYUNDMMTMYOOARXXKQMEGMLMTJNKAJHQMILTIISLAMGPQAUIJUFQRBYKGTEOWIPVUWLKUZYWBAPDPESETUGHS");

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
    msg.setTimeStamp(0.795614489908);
    msg.setSource(58277U);
    msg.setSourceEntity(101U);
    msg.setDestination(12909U);
    msg.setDestinationEntity(81U);
    msg.type = 115U;
    msg.error.assign("SBTBAAGYMCNUKJDLFYBCKUQWJORJTWIYSMDMIMZIAOTZCKAIVXGTEPFQWATVLWDFFLZPCRLSXAJXUSVQVSDFLDSCCQZYCEQOELCWKIHPKCEGNAJIAMKPRHVMRNXUEGTVYQHMDYFJPJTPOLUQJSBBYKXAZFCRQFGLXSMLBXHWPEWKEDWBUMZNIMVYPRUNPOONDGIOFYDEZYKTNNPAQOBRSGONZHVSRHHHIWDJUWQHVGZREGHXJTOFIGBKU");

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
    msg.setTimeStamp(0.217443659816);
    msg.setSource(46379U);
    msg.setSourceEntity(232U);
    msg.setDestination(63169U);
    msg.setDestinationEntity(113U);
    msg.type = 253U;
    msg.error.assign("KKNYIEFWQLHVSBZAURCZXAPCUJOFHRORDWUCFZQGVOJQTKSVSBVUMUHUOTCGDLTSKQKLCYNOS");

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
    msg.setTimeStamp(0.0216525436858);
    msg.setSource(12061U);
    msg.setSourceEntity(54U);
    msg.setDestination(44830U);
    msg.setDestinationEntity(148U);
    msg.seq = 5876U;
    msg.sys_dst.assign("NSGIWPSNVGDJBGNJQWCUIUKYBQCTRENPJUDHTPIQLBEIVCOWURDAEGSLVSTEPQMHZLOLGAXTEFEGGBVYAPBJRSPHJNGVRXRT");
    msg.flags = 146U;
    const char tmp_msg_0[] = {122, 84, 69, -51, -100, -103, 102, -48, 39, 116, -38, 110, 60, 76, 65, 50, -125, 58, 124, 59, -49, 87, 123, 48, 119, -3, 34, -32, 54, 113, -122, 124, 77, -27, -50, -73, -38, -47, 125, -115, -52, -117, 120, -66, 5, -49, -60, -19, -77, -128, -65, 34, -73, 47, 2, 83, 75, 92, -125, 113, 22, -23, -15, 7, 91, 2, 86, -58, 33, 99, -63, 92, -89, -123, -52, -90, -33, -48, 37, -80, -64, 4, -95, -79, -85, 53, -35, -48, -83, -2, -83, 16, -3, 17, -80, 51, 4, 66, 9, -108, -35, 108, 36, 57, 87, 67, -124, 33, 88, -93, 71, -26, 8, -43, 8, -38, -111, 33, -56, 0, 125, -99, 58, 65, 42, -28, -98, -28, 107, 20, -100, -54, -111, 96, -49, -75, 26, -16, 4, -35, -38, 74, 55, 123, 33, 106, -35, 2, -17, 21, -95, -12, -79, 94, 54, 100, 16, 5, 47, 32, -46, -117, 85, 75, -30, 49, 82, 18, 65, -124, -48, 46, 62, -113, 45, -70, -23, 72, 79, -88, -111, -3, -13, 19, 93, -66, -123, -9, -72, 54, 14, 40, -16, 113, -115, 96, -101, -45, -27, -26, -122, 47, -19, 102, -7, 49, 88, -112, -123, 61, -107, 73, -89, -24, -4, -56, 46, 53, 107, -105, -115, -20, -88, 111, -24, 13, 108, 91, -5, -42, 96, 13};
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
    msg.setTimeStamp(0.385972652035);
    msg.setSource(17624U);
    msg.setSourceEntity(72U);
    msg.setDestination(61598U);
    msg.setDestinationEntity(14U);
    msg.seq = 40961U;
    msg.sys_dst.assign("OMYJHLCUHWYPTXUWRMZXGMBQERAZBGHUJZOQUJPUBVLHLZCNZGDVSCZBCEGFNEJLTOPWACSVIMLFAUWWDUCGQYCQXUBDYFEQEGQJKEBBENCADDZJKRHISFMHOQGLRTIZENHFKVHKIDZSOXVIROPLTTLWYHABVSCKTRPKBNFDWNIEMAQALJLPSSIYPIRQJMKNMDQCKOBOIPAMVHEKZJSXVNTJYGPXWXXTFNWYPFTOSFYINFGVOD");
    msg.flags = 22U;
    const char tmp_msg_0[] = {68, -71, 9, -19, 30, -36, -107, -79, -59, 95, 22, 57, -65, 77, 44, 25, 42, 49, -14, -64, 123, -120, 91, -71, -121, 54, -58, 33, -80, -68, -25, 121, -46, -88, -101, -19, 109, -102, -54, 59, 41, -124, -98, -51, -51, 90, 1, 31, 114, 108, -63, 9, 19, 6, 22, 94, -23, -4, -20, -67, 25, -28, 67, 100, 116, 30, -2, -89, 117, 20, 94, 82, 40, -69, 42, -62, 74, -4, 53, -18, 3, 8, 120, -104, 69, -70, 117, -112, -105, -99, -38, 114, 75, 65, 98, 116, -120, -126, -108, -3, 71, 106, -110, 126, -43, 125, -121, 106, 66, 30, -83};
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
    msg.setTimeStamp(0.050773945796);
    msg.setSource(33433U);
    msg.setSourceEntity(66U);
    msg.setDestination(11078U);
    msg.setDestinationEntity(134U);
    msg.seq = 60414U;
    msg.sys_dst.assign("JAMRWTDWLGZBMHBUFXLBZHZAPKPLDBBQLKGXYJTGXAKXTQSGZWQHMHZ");
    msg.flags = 52U;
    const char tmp_msg_0[] = {-37, -50, 119, 99, 3, 13, -63, -104, -66, -10, 35, 49, -91, -24, 0, -90, -12, 43, 44, 89, -125, -77, -55, 77, -34, -107, -59, -52, 10, 77, -63, -122, 90, 115, 113, 27, 113, -8, 100, 31, -20, -54, -78, -10, -115, 57, -48, -87, -41, 53, 113, 98, -49, -12, 2, -54, 31, -26, -99, 64, 10, -46, 85, -1, -121, -4, 120, -89, -5, 5, -123, -92, 27, 19, -60, 14, 79, -87, -86, -120, 33, 63, 56, 18, -115, -32, -1, 57, 36, -126, -106, 20, 4, -119, 115, 50, 116, 91, 61, 37, 113, -99, 86, -85, -79, -84, 60, 22, 107, -3, -126, -51, 68, 5, -51, 54, 114, 87, 36, 66, -128, -53, 88, 31, 117, 82, 66, -25, 18, -88, -47, 116, 20, 77, 79, -91, 88, -105, 104, -83, -28, -102, -110, 74, -101, 15, 87, 47, -119, 59, 122, 72, 31, -122, -81, -43, -77, 57, -22, -8, -97, -81, 29, 40, -25, 37, 122, 43, -31, -9, -10, -69, 56, -11, 74, 29, 6, 13, 86, -29, 17, 42, -5, -18, -9, 15, -21, -91, 87, -71, 19, 71, -16, 22, -3, 59};
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
    msg.setTimeStamp(0.456637579778);
    msg.setSource(24402U);
    msg.setSourceEntity(110U);
    msg.setDestination(28922U);
    msg.setDestinationEntity(114U);
    msg.sys_src.assign("KDKSNYRZJPBIXWJLEEZCXZMFVIDPADMCMGAFBUZCBLYITVGGPPSRCEXFHDSZHSXXIEQJVEQRQKADGZDRJUQWOOGNYLNPRPNATALBULWHCDTOTONQOEBQWVOBPHESPYZTWZQSMXEALUUOZQFI");
    msg.sys_dst.assign("NVMUOHTKTABQUSBPBYZVSRXAEAFMNDKWULWAYUFKOKDZLRVTVJBONCWQTPRZMLHCCEQPDOKKAGDIUIEMSVICCJOFPZGMHMBBIOXSJPYIEXEVXBWDKXUSKLYRJZFNNPGSJTVUKIJEPVAXCHADNLNWAFLWZBVXULVEDQLZHQGWHHSGZNGCYDIACFSAOLXYTKTRXBTCZSOQRFIMRXYFSYQUGOGFDQQWEGTQDYFLORYTEJMRINMUPZ");
    msg.flags = 151U;
    const char tmp_msg_0[] = {-114, 2, 17, -42, 11, -47, -100, -65, 91, 40, 26, -61, 35, 40, -73, 78, 49, -74, 42, 117, -17, 108, 74, -32, -127, 74, -85, -61, -100, 21, -97, 19, 5, 125, 55, 47, -81, 30, 2, -91, 2, 106, -32, -54, 119, -74, 60, 118, -14, 114, 59, -91, -39, -64, 89, 13, 9, -1, 99, 41, -44, -62, 47, -67, -94, 92, -64, -51};
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
    msg.setTimeStamp(0.170626532224);
    msg.setSource(53567U);
    msg.setSourceEntity(44U);
    msg.setDestination(51372U);
    msg.setDestinationEntity(4U);
    msg.sys_src.assign("IYPFZNYJXIKRVLQBFODILZEPYCXXKQLZCSKFYRJOVMBEIMNBOHUNQDDTNARJEQRXBRHWPCIZFZUTWJNDYEVEZILGQQXDGOLVLCMIPUZETSSFOMRLNRBDVKLVTTPHOLIBNKUUJZMGFAHSHWSMCXYOCXGEYOWDIUZRPZDSVCJMFOHMCCWASJGGXYKHKTHIHAEFATBBBPYGXQPQGJNVWAPCGWMUKNUALRDMAFNRTUX");
    msg.sys_dst.assign("GTRUQOBHNJXLDEHLWUBENRHDTHAMXXMSBTKLZOXCFKKIVAZUAOOMYOQPXSWCYDBQPJDFXQWTEEYJXYWBNMCAJCKISMMRFIDYMAUQWAQGKNXXKUTFICNUWINUGJSSKNZVBFRSLVNGEXIQSQFNEIMHKIQFWLDYPZAOGUPHKZGLOLSPWFOVTMERJGSICHPZRCCYTOVCRTGBHLVMDEJGWEDZJDVHBRBYYJCAJZBZUAPVLAITVRETKDLH");
    msg.flags = 26U;
    const char tmp_msg_0[] = {4, 98, 111, 28, -70, 102, -52, 34, 11, -26, 14, -42, -27, 0, 75, -106, 51, 8, 126, 82, -76, -75, -38, -63, 89, -88, 106, 96, -44, -101, -37, 74, 103, -83, 37, -118, 44, 125, 125, 41, 3, -105, 48, -57, 13, -1, 99, -16, -40, -59, 101, 30, 55, 5, 43, -72, 5, -11, -121, 47, -96, 3, 52, 62, -30, -14, -113, 116, -12, -122, -40, -82, 102, -7, -32, 6, -80, -27, 91, -50, 72, 108, 4, 60, 90, 41, -9, -48, 89, 118, 122, -2, -40, -100, 116, -128, -19, -3, 85, 27, 75, 116, -109, -24, 94, 9, 114, -89, 70, -107, 4, 35, 46, -111, -78, -85, -49, 59, 13, -20, -89, -72, 58, -77, 92, 75, 50, 114, 17, 44, 46, -58, 94, -82, -99, -32, 125, 47, 13, 65, 30, -39, 113, -68, -99, 12, 69, -83, 61, 34, 25, -113, -60, -4, 85, 35, 56, 89, 46, 115, -111, 40, -12, -113, -19, -84, -87, -110, 1, 90, -125, -54, -51, -84, 48, -88, -66, 6, -115, -24, 98, 28, -84, -21, -93, 29, -27, 65, 24, 106, -124, -124, 98, -34, -2, -58, -19, 117, 81, -113, 61, 29, 12, 56, -60, -51, 122, -119, 105, -96, -91, 73, -112, -28, 103, -82, -8, 79, 98, 104, 116, -92, 1, 17, 47, -16, 21};
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
    msg.setTimeStamp(0.323077566359);
    msg.setSource(38490U);
    msg.setSourceEntity(193U);
    msg.setDestination(39903U);
    msg.setDestinationEntity(53U);
    msg.sys_src.assign("MKQYXDFQYFWWWOUIDJQEFHBXHXPGTSLPZGFAJJRLGUWSEIEVQDIMVMFSODJHZNGZCWECJREKGYRHVLFKZFPIQKWIDPAHTRSXIRCYWVXUCPKGARXYOXZCIMHUSWQOQPYCSUKG");
    msg.sys_dst.assign("GGJVWEGNDTORLEQATTSXONRTGRLYYJKZGBLFKLHFHNHGNICSSXIRPMPXHJBQMQIWJNTABFDFYOPQGQFVXRRTISTQWGXSWLPKNCHWODMMQIAFLUOVYZBMKAKFMEDAZJVSWLCGLDHAEHMOZWZVBJDRXTDKJUMCXXHEPIDVZPIEHSNLJCVQBOOMUKYBEAWADVDYXEMIVTGNPFBEURKNSAXWBKQPB");
    msg.flags = 239U;
    const char tmp_msg_0[] = {62, 51, -62, 17, -94, -126, -56, 75, 11, -33, 46, -98, 71, 70, -126, -41, -47};
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
    msg.setTimeStamp(0.0262246685117);
    msg.setSource(39736U);
    msg.setSourceEntity(3U);
    msg.setDestination(21360U);
    msg.setDestinationEntity(227U);
    msg.seq = 62589U;
    msg.value = 42U;
    msg.error.assign("OSQCBUPNEGMQBSNWEXTSSRPJKVNIQNDPWEZQRYWILWCTUAPODOGYHHQCEJZJBAKMTFLGBRQYG");

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
    msg.setTimeStamp(0.864889430505);
    msg.setSource(42908U);
    msg.setSourceEntity(63U);
    msg.setDestination(53959U);
    msg.setDestinationEntity(55U);
    msg.seq = 23786U;
    msg.value = 191U;
    msg.error.assign("QAYDKQAFFQCJCQUHGOKKHEYWVFGUKKFWIPPSEMHVHNVWHBAZIIFVSPZRCVIXDPMOVYBAFKMQCTXCMWEBUYMZOOEZPWBXAREZWENZUGXELNJICTSZNIMRTAVTAJGLZSPMRMNJNXKBUYZWUTRDRLWBPLDYNONRXSDYQTSXOZOBYGNNBJUOTMKQJWIXPHSFVKCFWVGQCGIGAATFHDSGDRIMYGBTP");

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
    msg.setTimeStamp(0.286653336871);
    msg.setSource(9779U);
    msg.setSourceEntity(143U);
    msg.setDestination(34709U);
    msg.setDestinationEntity(110U);
    msg.seq = 37426U;
    msg.value = 82U;
    msg.error.assign("FNRZLZBQCIIJHMVBGZVZAHGWMEVSRENIVNONEUTOJKJPLADSTENIZQBXUOLCCTGYIAAXDIVKPHCDPWWZTK");

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
    msg.setTimeStamp(0.544762016957);
    msg.setSource(38469U);
    msg.setSourceEntity(8U);
    msg.setDestination(65457U);
    msg.setDestinationEntity(119U);
    msg.seq = 37773U;
    msg.sys.assign("DQPYVARXTIXSOFNDLCWLGGFTDNQNHKSBAUAHSCHMFOCZVLLHXXMCWBOZFPGQLYCTRINXFOZDAMQIFWDPTULWSZIJIYWEOJIJSOBTENXDHVGRUFBDCYXRAHQVYBVVJLZRE");
    msg.value = 0.092509016218;

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
    msg.setTimeStamp(0.303172975384);
    msg.setSource(16589U);
    msg.setSourceEntity(55U);
    msg.setDestination(11968U);
    msg.setDestinationEntity(53U);
    msg.seq = 23835U;
    msg.sys.assign("FJHRRTEOBNUCSVBPYNDOZVPWYWVDOCNHRJQGRLMOFLWAGWTYJLTHTJUKGQTZJLBQAFXAYIZGFFKQYDHBTVSBRIYHAJIDRCENBXCLCLKKTUJ");
    msg.value = 0.439726696225;

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
    msg.setTimeStamp(0.0801937472709);
    msg.setSource(9675U);
    msg.setSourceEntity(246U);
    msg.setDestination(54576U);
    msg.setDestinationEntity(114U);
    msg.seq = 62953U;
    msg.sys.assign("SCLTKPYKRFXTCQHUMZJBMFGXYOUYUDKDOWTFZDSCPATLAXGNJDNEMFIBVMQLQBBSLAEZZSDCJHIUJUCVLJYMBSDMAQAXAPZGQEGKMLVRFYRFUMRJKRBNNOOQSLQUUOGKU");
    msg.value = 0.739808295767;

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
    msg.setTimeStamp(0.0749508410296);
    msg.setSource(16848U);
    msg.setSourceEntity(51U);
    msg.setDestination(13453U);
    msg.setDestinationEntity(200U);
    msg.action = 140U;
    msg.longain = 0.569484757318;
    msg.latgain = 0.51147387537;
    msg.bondthick = 3942476376U;
    msg.leadgain = 0.613808189796;
    msg.deconflgain = 0.260808199173;

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
    msg.setTimeStamp(0.0646668532454);
    msg.setSource(32265U);
    msg.setSourceEntity(67U);
    msg.setDestination(14926U);
    msg.setDestinationEntity(250U);
    msg.action = 231U;
    msg.longain = 0.593467669017;
    msg.latgain = 0.782770612536;
    msg.bondthick = 1299605531U;
    msg.leadgain = 0.624671065495;
    msg.deconflgain = 0.507596447349;

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
    msg.setTimeStamp(0.414289707038);
    msg.setSource(47663U);
    msg.setSourceEntity(194U);
    msg.setDestination(65051U);
    msg.setDestinationEntity(251U);
    msg.action = 4U;
    msg.longain = 0.462093721034;
    msg.latgain = 0.420713759099;
    msg.bondthick = 1462631245U;
    msg.leadgain = 0.306865547722;
    msg.deconflgain = 0.143708700772;

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
    msg.setTimeStamp(0.0754159932766);
    msg.setSource(20081U);
    msg.setSourceEntity(190U);
    msg.setDestination(30726U);
    msg.setDestinationEntity(183U);
    msg.err_mean = 0.0526492955632;
    msg.dist_min_abs = 0.18942623267;
    msg.dist_min_mean = 0.18270750275;

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
    msg.setTimeStamp(0.127196054534);
    msg.setSource(56682U);
    msg.setSourceEntity(163U);
    msg.setDestination(17183U);
    msg.setDestinationEntity(208U);
    msg.err_mean = 0.545531579571;
    msg.dist_min_abs = 0.948446670649;
    msg.dist_min_mean = 0.371112528053;

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
    msg.setTimeStamp(0.652934325896);
    msg.setSource(55557U);
    msg.setSourceEntity(36U);
    msg.setDestination(33310U);
    msg.setDestinationEntity(50U);
    msg.err_mean = 0.953808924408;
    msg.dist_min_abs = 0.0154203546877;
    msg.dist_min_mean = 0.770154986102;

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
    msg.setTimeStamp(0.799238535485);
    msg.setSource(46U);
    msg.setSourceEntity(237U);
    msg.setDestination(48149U);
    msg.setDestinationEntity(178U);
    msg.action = 120U;
    msg.lon_gain = 0.135501247408;
    msg.lat_gain = 0.20295830955;
    msg.bond_thick = 0.588122237607;
    msg.lead_gain = 0.35659745652;
    msg.deconfl_gain = 0.144931112123;
    msg.accel_switch_gain = 0.439673026557;
    msg.safe_dist = 0.167568790636;
    msg.deconflict_offset = 0.586974445953;
    msg.accel_safe_margin = 0.867821021561;
    msg.accel_lim_x = 0.502188890845;

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
    msg.setTimeStamp(0.872690813883);
    msg.setSource(40545U);
    msg.setSourceEntity(252U);
    msg.setDestination(45711U);
    msg.setDestinationEntity(25U);
    msg.action = 121U;
    msg.lon_gain = 0.343131341275;
    msg.lat_gain = 0.0130685952204;
    msg.bond_thick = 0.968608901937;
    msg.lead_gain = 0.316301760638;
    msg.deconfl_gain = 0.957112663394;
    msg.accel_switch_gain = 0.800191066979;
    msg.safe_dist = 0.181589337641;
    msg.deconflict_offset = 0.346144001966;
    msg.accel_safe_margin = 0.163026214139;
    msg.accel_lim_x = 0.0139891957238;

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
    msg.setTimeStamp(0.693012143578);
    msg.setSource(42353U);
    msg.setSourceEntity(69U);
    msg.setDestination(3765U);
    msg.setDestinationEntity(89U);
    msg.action = 75U;
    msg.lon_gain = 0.139810733506;
    msg.lat_gain = 0.910550217665;
    msg.bond_thick = 0.11425554536;
    msg.lead_gain = 0.743251594405;
    msg.deconfl_gain = 0.772829512364;
    msg.accel_switch_gain = 0.019015249949;
    msg.safe_dist = 0.0701423357368;
    msg.deconflict_offset = 0.537575549534;
    msg.accel_safe_margin = 0.655392903083;
    msg.accel_lim_x = 0.641253764736;

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
    msg.setTimeStamp(0.2225524771);
    msg.setSource(13284U);
    msg.setSourceEntity(6U);
    msg.setDestination(18906U);
    msg.setDestinationEntity(246U);
    msg.type = 149U;
    msg.op = 146U;
    msg.err_mean = 0.259715196227;
    msg.dist_min_abs = 0.749200798963;
    msg.dist_min_mean = 0.550368374097;
    msg.roll_rate_mean = 0.235111213701;
    msg.time = 0.79546691124;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 124U;
    tmp_msg_0.lon_gain = 0.676260068732;
    tmp_msg_0.lat_gain = 0.0142269586736;
    tmp_msg_0.bond_thick = 0.191186560233;
    tmp_msg_0.lead_gain = 0.698751296756;
    tmp_msg_0.deconfl_gain = 0.689722243523;
    tmp_msg_0.accel_switch_gain = 0.257642255468;
    tmp_msg_0.safe_dist = 0.377865316014;
    tmp_msg_0.deconflict_offset = 0.772918583173;
    tmp_msg_0.accel_safe_margin = 0.422367314803;
    tmp_msg_0.accel_lim_x = 0.781102159789;
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
    msg.setTimeStamp(0.492843671986);
    msg.setSource(10520U);
    msg.setSourceEntity(119U);
    msg.setDestination(12769U);
    msg.setDestinationEntity(241U);
    msg.type = 205U;
    msg.op = 34U;
    msg.err_mean = 0.0303096948071;
    msg.dist_min_abs = 0.460022619852;
    msg.dist_min_mean = 0.550265820695;
    msg.roll_rate_mean = 0.918157738806;
    msg.time = 0.0453440804709;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 175U;
    tmp_msg_0.lon_gain = 0.843373303034;
    tmp_msg_0.lat_gain = 0.493877326885;
    tmp_msg_0.bond_thick = 0.248416643589;
    tmp_msg_0.lead_gain = 0.260811001668;
    tmp_msg_0.deconfl_gain = 0.131210295732;
    tmp_msg_0.accel_switch_gain = 0.535931313438;
    tmp_msg_0.safe_dist = 0.493992772174;
    tmp_msg_0.deconflict_offset = 0.658186280302;
    tmp_msg_0.accel_safe_margin = 0.0576628376136;
    tmp_msg_0.accel_lim_x = 0.702009117592;
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
    msg.setTimeStamp(0.0412021908493);
    msg.setSource(12402U);
    msg.setSourceEntity(99U);
    msg.setDestination(3220U);
    msg.setDestinationEntity(235U);
    msg.type = 104U;
    msg.op = 76U;
    msg.err_mean = 0.0106681881337;
    msg.dist_min_abs = 0.0288730476871;
    msg.dist_min_mean = 0.114403535113;
    msg.roll_rate_mean = 0.677958651156;
    msg.time = 0.507499800449;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 38U;
    tmp_msg_0.lon_gain = 0.113478311105;
    tmp_msg_0.lat_gain = 0.50970028686;
    tmp_msg_0.bond_thick = 0.226355872845;
    tmp_msg_0.lead_gain = 0.45765574403;
    tmp_msg_0.deconfl_gain = 0.345796856442;
    tmp_msg_0.accel_switch_gain = 0.134663965477;
    tmp_msg_0.safe_dist = 0.139291210844;
    tmp_msg_0.deconflict_offset = 0.504108243552;
    tmp_msg_0.accel_safe_margin = 0.099836356405;
    tmp_msg_0.accel_lim_x = 0.969781830938;
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
    msg.setTimeStamp(0.03866594366);
    msg.setSource(30083U);
    msg.setSourceEntity(179U);
    msg.setDestination(63572U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.636739221985;
    msg.lon = 0.839299595924;
    msg.eta = 2000432351U;
    msg.duration = 53024U;

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
    msg.setTimeStamp(0.852121738992);
    msg.setSource(32181U);
    msg.setSourceEntity(164U);
    msg.setDestination(49128U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.207097597175;
    msg.lon = 0.422879806048;
    msg.eta = 1537197878U;
    msg.duration = 20790U;

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
    msg.setTimeStamp(0.998464631658);
    msg.setSource(43663U);
    msg.setSourceEntity(117U);
    msg.setDestination(13067U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.780547738253;
    msg.lon = 0.444726946733;
    msg.eta = 2940486917U;
    msg.duration = 8753U;

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
    msg.setTimeStamp(0.309792126435);
    msg.setSource(24477U);
    msg.setSourceEntity(223U);
    msg.setDestination(12456U);
    msg.setDestinationEntity(56U);
    msg.plan_id = 28287U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.115900692342;
    tmp_msg_0.lon = 0.839364831094;
    tmp_msg_0.eta = 1830499460U;
    tmp_msg_0.duration = 14480U;
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
    msg.setTimeStamp(0.256667962561);
    msg.setSource(17421U);
    msg.setSourceEntity(4U);
    msg.setDestination(50495U);
    msg.setDestinationEntity(225U);
    msg.plan_id = 15858U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.110549573053;
    tmp_msg_0.lon = 0.664529865244;
    tmp_msg_0.eta = 887806693U;
    tmp_msg_0.duration = 56495U;
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
    msg.setTimeStamp(0.0840123657067);
    msg.setSource(30687U);
    msg.setSourceEntity(32U);
    msg.setDestination(64476U);
    msg.setDestinationEntity(99U);
    msg.plan_id = 62571U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.890898211075;
    tmp_msg_0.lon = 0.788716580919;
    tmp_msg_0.eta = 3111033111U;
    tmp_msg_0.duration = 24352U;
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
    msg.setTimeStamp(0.503417516876);
    msg.setSource(16734U);
    msg.setSourceEntity(236U);
    msg.setDestination(62348U);
    msg.setDestinationEntity(22U);
    msg.type = 80U;
    msg.command = 114U;
    msg.settings.assign("WXMRIMUJIKWNSOTMFPEMESEKZUBIBIMAUENUGNCFNOBYPTVSWMWFYVMORGHSVOAXZGDHDJPDVALVHGGTYGWHWXDRIGEEOKQMPFPZELFWYJZXLWLHYSDKNJJKEYVCSPEBQFHTMUBTLRXTHXIAUVJNVKQCUNGUPRBPPRAYQJOLBFARVKAHHDCFSCRDCKNZOQYFTZQBCOATZPCJISZCLOLULXIWX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 24677U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.604232349394;
    tmp_tmp_msg_0_0.lon = 0.815069975062;
    tmp_tmp_msg_0_0.eta = 1509386987U;
    tmp_tmp_msg_0_0.duration = 31644U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XOPBFHUTWVJNELCYLMMLIPBEYJTSERAXXOHVFBQAMSWFVKXBWBGGAPUST");

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
    msg.setTimeStamp(0.685990454319);
    msg.setSource(22825U);
    msg.setSourceEntity(66U);
    msg.setDestination(35957U);
    msg.setDestinationEntity(85U);
    msg.type = 56U;
    msg.command = 122U;
    msg.settings.assign("NAIXUQRGOHLIUEHELSCRZCCQPAIZVFUWLNCACHYOOZAIAFZEJRSJXNKCDVFXSPESVBRCWIMESVEGDKOQEIADJRQXKUJXPPTYAWBBWIQMSDNHNZVKJUWJWIYTKZOFGLKGAUFYBWXXSRPBDEQKGMVFGYTPLUHRYZTMMNIOXYIW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 52625U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BZZMXLLNXRLPCAMDOZMCURWIAVEVKSKJRPDGBNYVEVZVQWCIIBKOKJWHGYPMELJIPIMJNLMGJAYHGISIHWQDZHTJTEUDKPQDOODKDTYYQWXRBEFQJWMUPBDREMGRLYXHNWRCEXZMXTFFKCHGBQGYVFUTRGKPQFKHXZTQSEOHITSAOCCBNZFPNTSUZXFYNPVYCXXYOEUULOUBNVBCAZAPHAMDJWANTSOSRDJQOIVSJLNVUWQIUERHLSG");

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
    msg.setTimeStamp(0.0114480545905);
    msg.setSource(4525U);
    msg.setSourceEntity(50U);
    msg.setDestination(30955U);
    msg.setDestinationEntity(218U);
    msg.type = 6U;
    msg.command = 188U;
    msg.settings.assign("ZQBGLSXFXVBFJEFFNNYTOJIEAQZBLCDPZTMIOJCFKPONMGWYKSBOWXNYSEWYGRHMWT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 2301U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.718583177731;
    tmp_tmp_msg_0_0.lon = 0.436822454756;
    tmp_tmp_msg_0_0.eta = 2219245470U;
    tmp_tmp_msg_0_0.duration = 44565U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TVDIQOLJQIYQRKKNWEDNBDUVXUNEWWBLKAFJHBOAHLWXWTZKFZZHTVGSAQTEDSMCJFRDYUPEEHAFMJZUGSRXJJUMBCAROCQZJDIXXHSRBYYPYPCDWICWTPFSQMMEPGLNVFGLCOHITJKR");

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
    msg.setTimeStamp(0.640762054677);
    msg.setSource(48687U);
    msg.setSourceEntity(200U);
    msg.setDestination(18925U);
    msg.setDestinationEntity(172U);
    msg.state = 152U;
    msg.plan_id = 65149U;
    msg.wpt_id = 146U;
    msg.settings_chk = 33797U;

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
    msg.setTimeStamp(0.607258396482);
    msg.setSource(14535U);
    msg.setSourceEntity(49U);
    msg.setDestination(20242U);
    msg.setDestinationEntity(118U);
    msg.state = 89U;
    msg.plan_id = 61800U;
    msg.wpt_id = 31U;
    msg.settings_chk = 39382U;

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
    msg.setTimeStamp(0.561088755355);
    msg.setSource(5198U);
    msg.setSourceEntity(155U);
    msg.setDestination(51712U);
    msg.setDestinationEntity(70U);
    msg.state = 124U;
    msg.plan_id = 26139U;
    msg.wpt_id = 71U;
    msg.settings_chk = 60697U;

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
    msg.setTimeStamp(0.972902942974);
    msg.setSource(6939U);
    msg.setSourceEntity(252U);
    msg.setDestination(45273U);
    msg.setDestinationEntity(179U);
    msg.uid = 254U;
    msg.frag_number = 124U;
    msg.num_frags = 198U;
    const char tmp_msg_0[] = {-46, -52, -72, 79, -127, -109, -103, -94, 54, 55, 25, -115, -116, 4, 9, 70, 20, 122, -67, -63, 123, -113, -81, -75, 51, -56};
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
    msg.setTimeStamp(0.57691733723);
    msg.setSource(34142U);
    msg.setSourceEntity(183U);
    msg.setDestination(10269U);
    msg.setDestinationEntity(26U);
    msg.uid = 232U;
    msg.frag_number = 9U;
    msg.num_frags = 3U;
    const char tmp_msg_0[] = {-100, -13, 85, -59, -118, -5, -101, -4, 72, 37, 61, -57, 113, -79, 34, -103, 10, 13, 116, 120, 33, -55, -2, -87, 59, -46, -118, 69, 81, -15, 52, 72, 34, 24, -50, 41, 108, 119, -21, 107, -49, 93, 123, -64, -112, 17, 43, 69, 42, 39, -126, 93, -48, -40, 90, 23, 66, 3, -11, -74, 87, -102, 68, -100, 58, 39, -4, 61, 12, 30, -12, -90, -51, -112, 48, 113, -13, -49, -61, 15, 23, -18, 77, -12, -39, -110, 101, 59, 107, -23, -102, -72, 31, -9, -46, 7, 102, -44, -2, -121, 11, -80, -104, -90, 93, 70, 45, -64, -6, 84, -49, 9, -121, 123, 18, 110, -60, -15, 62, 28, 30, 95, 82, -17, -28, 109, 68, 28, -127, 37, -56, 60, -35, -102, -15, -89, 9, 33, 82, 73, 61, -12, -51, -8, -12, -99, -90, 62, 41, -79, 86, -61, 70, 16, -127, 79, 7, 99, -53, 83, 38, -57, 114, 53, -56, -103, -118, 50, 91, 56, -95, 93, 50, -44, -63, 4, -125, -30, -91, -109, -109, -57, -108, 100, -78, -49, 45, 94, 81, 109, -74, 58, -119, 83, -27, -7, -87, 23, 48, 42, -30, 94, -30, 70, 22, -10, 103, 104, 93, 6, -8, 1, -105, 63, 11, -73, 89, -119, 44, 20, 51, -69, 60, -91, 5, 64, -42, -93, 75, -14, 10, 35};
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
    msg.setTimeStamp(0.773404644982);
    msg.setSource(22017U);
    msg.setSourceEntity(239U);
    msg.setDestination(37257U);
    msg.setDestinationEntity(36U);
    msg.uid = 253U;
    msg.frag_number = 235U;
    msg.num_frags = 170U;
    const char tmp_msg_0[] = {-21, 108, -52, 3, 91, -126, -79, 20, -54, 17, 101, -114, -93, 38, -28, -22, 5, -23, -72, 81, -61, -106, -39, 109, 125, 89, 85, -69, 121, -115, 28, -63, 87, 103, 54, 2, -90, 55, 116, 116, 94, 96, -85, -20, 38, -4, -79, 118, -33, 110, -66, 111, 64, 9, -81, -36, -93, -97, 3, 102, -37, -98, 23, -74, 45, -126, 93, 14, 86, 103, -97, -20, 44, -59, 20, 69, -73, 126, 87, -82, 16, 114, -23, -24, 67, -38, -43, 79, -107, -7, -72, 28, 29, -84, -95, 54, 94, 21, -24, -106, 58, 120, -64, 28, -48, 7, -83, 69, -11, 122, -15, 68, -1, -22, -60, -70, -69, 21, 123, -1, 16, 29, 31, -88, 124, 12, 35, -103, -116, 85, -14, 19, 94, 56, 79, 45, 0, 50, -112, -53, 39, 111, -47, 114, -105, 108, -100, -49, 50, -2, 53, 119, 116, 99, 89, 32, 118};
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
    msg.setTimeStamp(0.413294726358);
    msg.setSource(48246U);
    msg.setSourceEntity(220U);
    msg.setDestination(63838U);
    msg.setDestinationEntity(1U);
    msg.content_type.assign("YBLHSSFXUOESGOYFWCCTUBCQOBYUV");
    const char tmp_msg_0[] = {-78, -81, -74, 30, -38, 48, 95, 70, 90, -18, -88, -79, 60, -27, -102, 91, -106, 64, 2, -29, 83, -4, 18, -106, -1, -26, -110, -18, 35, -61, -17, -65, 47, -65, -30, 81, -56, -2, 97, 80, -120, -68, 116, 41, -96, 91, -14, -47, -126, 101, -101, 46, 106, -105, -49, 1, -102, -99, -92, -49, -23, -47, -119, 23, -73};
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
    msg.setTimeStamp(0.824562099593);
    msg.setSource(31700U);
    msg.setSourceEntity(222U);
    msg.setDestination(62058U);
    msg.setDestinationEntity(164U);
    msg.content_type.assign("PHESZHKDQRKUDLOTYRCETLZGNDBPQQMPJUNSSBBKRHUATQVCYEVMJFZACZBSUGIVLKAQTNMPWCXGEGVFCNMRFABOCJGVDJKUQHKZCUOOVSIEIXIJLDXGMVJARDQHZEXKZHSRFWFIGOENNIEIUZNKAWWOAYNWXEHCLLQXIYKGMDBGVITFJPVZHUMLMJOWPNXEAMOHQAPNTCYZJXRXWCLBXSYSFFTAMKDURRBLOIPYBVGFYDYRBWHTYT");
    const char tmp_msg_0[] = {123, -46, 106, 74, -125, 98, -72, 125, 26, -77, 107, 44, -86, -103, 63, -116, -4, 32, -51, 14, -111, -92, 69, 90, 17, -14, -62, 18, 108, 43, 85, 83, -58, 55, -79, -108, 26, 66, 20, 71, 34, -41, -26, 111, -55, -29, -122, -32, -126, 77, -26, 91, -122, 73, 93, -66, 35, -37, -9, 51, 23, 99, -62, -85, -39, 61, -63, -96, -111, 117, 58, -73, -17, -121, 89, -58, 46, -80, 39, -39, -52, 90, 93, -95, 32, -17, -93, 107, -3, -94, 55, -52, 47, 93, -28, 2, 86, 1, 19, -38, 100, 46, -75, 117, 102, 41, 14, 126, -126, 71, 47, 35, 10, -27, 64, 22, -39, -16, -2, 81, -44, 6, 25, -40, 93, -61, -7, -110, -120, 0, 122, 66, 87, -121, 113, 109, 26, -68, -107, -16, 51, -15, -69, -30, 29, -74, 1, -25};
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
    msg.setTimeStamp(0.575650278117);
    msg.setSource(27452U);
    msg.setSourceEntity(83U);
    msg.setDestination(15908U);
    msg.setDestinationEntity(149U);
    msg.content_type.assign("OGVQKRNBQCZSUCSFBQYKJPUVDTDRBJTXKZPLONXUJTDMEZNPVQYBSLJPVYOPGWJXUYFVZFQWEGDSNOKJBITLHICTTLTCHYWRAXEEACFJIHEVTI");
    const char tmp_msg_0[] = {-89, -11, 37, 86, -8, -18, -25, 14, 115, -76, -118, 48, 94, -50, -33, -72, 61, 124, 76, 69, -112, 86, -4, -50, -77, 18, 13, 13, 33, -88, 26, -21, 68, 59, -37, -5, 50, 83, -6, 72, -40, 88, -43, 55, -29, -37, 6, 6, -107, -26, -53, 37, -15, 88, -95, -62, -6, -65, 52, -93, -57, 122, -105, -128, 116, -64, 10, 6, -120, 19, 53, 16, -101, -46, -116, -44, 47, 123, -108, -70, 61};
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
    msg.setTimeStamp(0.462133047608);
    msg.setSource(17840U);
    msg.setSourceEntity(80U);
    msg.setDestination(42267U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.671879360729);
    msg.setSource(35937U);
    msg.setSourceEntity(225U);
    msg.setDestination(5943U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.456061358725);
    msg.setSource(26707U);
    msg.setSourceEntity(143U);
    msg.setDestination(53360U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.276744023594);
    msg.setSource(18136U);
    msg.setSourceEntity(136U);
    msg.setDestination(18779U);
    msg.setDestinationEntity(95U);
    msg.target = 51560U;
    msg.bearing = 0.807391798795;
    msg.elevation = 0.991158980183;

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
    msg.setTimeStamp(0.589155289488);
    msg.setSource(62119U);
    msg.setSourceEntity(102U);
    msg.setDestination(20781U);
    msg.setDestinationEntity(249U);
    msg.target = 24002U;
    msg.bearing = 0.218478253933;
    msg.elevation = 0.443446299925;

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
    msg.setTimeStamp(0.298699992389);
    msg.setSource(59857U);
    msg.setSourceEntity(5U);
    msg.setDestination(58409U);
    msg.setDestinationEntity(230U);
    msg.target = 31944U;
    msg.bearing = 0.766934206472;
    msg.elevation = 0.981511776945;

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
    msg.setTimeStamp(0.897445715466);
    msg.setSource(11504U);
    msg.setSourceEntity(220U);
    msg.setDestination(55778U);
    msg.setDestinationEntity(141U);
    msg.target = 48780U;
    msg.x = 0.564064467255;
    msg.y = 0.927195836416;
    msg.z = 0.934755220435;

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
    msg.setTimeStamp(0.653140847684);
    msg.setSource(23846U);
    msg.setSourceEntity(129U);
    msg.setDestination(57808U);
    msg.setDestinationEntity(4U);
    msg.target = 40114U;
    msg.x = 0.434135895731;
    msg.y = 0.170213811979;
    msg.z = 0.113535668724;

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
    msg.setTimeStamp(0.243582150661);
    msg.setSource(56461U);
    msg.setSourceEntity(71U);
    msg.setDestination(23269U);
    msg.setDestinationEntity(169U);
    msg.target = 14916U;
    msg.x = 0.994212697939;
    msg.y = 0.75478705786;
    msg.z = 0.0282914470406;

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
    msg.setTimeStamp(0.863215354344);
    msg.setSource(34325U);
    msg.setSourceEntity(160U);
    msg.setDestination(61300U);
    msg.setDestinationEntity(40U);
    msg.target = 49976U;
    msg.lat = 0.436166792005;
    msg.lon = 0.52668362147;
    msg.z_units = 17U;
    msg.z = 0.362697885732;

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
    msg.setTimeStamp(0.986539986635);
    msg.setSource(14158U);
    msg.setSourceEntity(227U);
    msg.setDestination(12451U);
    msg.setDestinationEntity(83U);
    msg.target = 39951U;
    msg.lat = 0.154517950066;
    msg.lon = 0.178953248362;
    msg.z_units = 92U;
    msg.z = 0.268038659263;

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
    msg.setTimeStamp(0.991972468479);
    msg.setSource(7971U);
    msg.setSourceEntity(159U);
    msg.setDestination(57422U);
    msg.setDestinationEntity(3U);
    msg.target = 8181U;
    msg.lat = 0.382547749623;
    msg.lon = 0.943065702508;
    msg.z_units = 7U;
    msg.z = 0.75590831964;

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
    msg.setTimeStamp(0.612108647407);
    msg.setSource(33645U);
    msg.setSourceEntity(105U);
    msg.setDestination(41541U);
    msg.setDestinationEntity(135U);
    msg.locale.assign("HBMEIJGEKNGFGOARWFMSTZCNUVRGJUBMKGSQSNUVLCKXQPZHIVRPQOOXILXOZYEYIAPHNRVWWLITMVDCBWETKEVAWHBNQAKSXDMEAZUEALSBUKPLWYMGJOZARATQHZRJMDOJUPGWVIHXCLBPKBPFDTFFJLXHBKXQJYCGLFDYNHYRDVFUFMRITDQCZNDEJQZXKXUDNI");
    const char tmp_msg_0[] = {-78, -35, 82, -52, 108, 72, 90, -92, -66, 61, -51, -58, 22, 23, 124, 81, 98, -8, 100, -13, 25, 38, 101, 104, -58, -37, -61, -22, -50, 77, -69, -71, 72, 8, 14, -64, 123, -106, 106, 22, 74, -111, 115, 126, 106, 24, 24, -61, 113, 109, -114, 98, 116, 104, -11, -127, 42, 65, -53, 67, -115, -6, -51, 28, -32, 68, 11, 92, 120, -126, -9, -57, -2, -82, -98, 61, 84, -76, 28, -56, 3, -120, -93, -26, -103, 86, 12, 126, -63, -39, 59, -101, 116, -23, 94, 119, -117, -36, -11, 84, 105, 71, 28, -44, 107, 123, 23, -35, -119, -52, 94, -48, -46, -111, 96, 29, -95, -105, -55, -40, 81, -68, 91, -128, -21, 57, -49, 44, 88, -45, -61, -108, 22, -91, -81, -90, 55, -117, 85, -15, -99, 20, 68, -8, -125, -84, -55, 91, 37, 72, -24, -112, 115, 51, -5, 39, 95, -48, 125, 83, -18, 49, -53, 125, 74, -63, -101, -78, 14, 111, -18, -101, 99, -71, 97, -6, 59, -80, -19, -62, -120, -118, 1, -119, 36, 118, 2, 69, 69, 117, -93, -110, 29, 105, 2, 94, -99, -54, -97, 70, 61, -10, 31, -107, -97, 81, -89, -123, -48, 74, -63, -56, 0, 104, -42, 116, 34, -112, 49, 65, -74, -114, -81, -42, -95, -72, -24, 53, 25, -117, 28, -2, 75, 42, 122, -23, 35, -100, -3, 90, -72, 92, -31, 72, 30, 35, -54, -85};
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
    msg.setTimeStamp(0.327445633742);
    msg.setSource(40011U);
    msg.setSourceEntity(63U);
    msg.setDestination(15055U);
    msg.setDestinationEntity(93U);
    msg.locale.assign("MMUSGHDFGJTDLIYNHABKCPPYNUQBVURRWGRHJNYJHCQSGYZMMFOQOWOVSFEACZLTEZVYZRBDSBNDXPHDBKRYKTNGIMIQNCNLUIAWRAPMJOLVXKETYTAAKLVPIXGSHIQFVUWSUHCRHXA");
    const char tmp_msg_0[] = {-117, -113, -22, -47, -48, 54, -100, 110, 82, 120, -38, -80, 47, 89, 111, -127, 123, -107, -88, 105, 106, 10, 79, -106, 100, -33, -93, -7, -70, 39, 117, -87, -108, 53, -19, 107, 18, 65, 90, -29, 108, -1, 0, 2, 110, 122, 90, 88, -23, 4, -40, 13, -122, 72, 38, 81, -113, 5, 23, 14, -1, -100, -13, -59, -76, -93, 23, -117, 105, -50, -70, 117, -47, 102, -34, -31, 1, -5, 31, -124, 37, 110, -61, 112, -63, -2, 119, -107, 71, 72, -72, 1, 14, -116, -102, 45, -94, -17, -124, -39, 46, 53, 7, -87, 113, 3, -115, -50, -91, 20, -108, -45, -49, -101, 28, -26, -69, 68, 15, 126, -63, -33, 14, -18, 81, -11, -121, 77, -74, 95, 74, -109, -56, -114, -37, 7, 25, 80, -123, -33, 25, -43, -77, 91, -66, 39, -96, -67, -33, 121, 39, -114, -106, 29, -47, -6, -43, -10, -104, 39, 43, 5, 50, -10, -24, -105, -9, -45, 23, -59, -94, -127, 10, 98, -110, 52, 118, 102, 68, -125, 78, -100, 70, -39, 86, 75, 78, -73, 48, 114, -57, -10, -64, -118, -25, -54, -33, -43, 100, 71, -23, -106, 109, -59, 73, 93, 21, -17, -23, 9, 60, 26, -89, -37, 46, -114, -19, -61, 60, 18, 21, 70, -47, 78, 77, -85, -117, 66, 83, -36, -98, 33, -19, -90, 78, -5, -67, -22, 13, 38, 79, -51, -125, 77, 77, 105, 60, -42, 24, -51, -62, 113, -48, -65};
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
    msg.setTimeStamp(0.581335782152);
    msg.setSource(33416U);
    msg.setSourceEntity(142U);
    msg.setDestination(27443U);
    msg.setDestinationEntity(240U);
    msg.locale.assign("STKEDZCHFEVLBEXFBXIYJVXSCOSMROJEFOIVZPTGAYIDNSBWU");
    const char tmp_msg_0[] = {35, 78, -36, -81, 38, 50, -74, 122, 5, -108, -11, -38, 56, 72, -70, -32, 25, 105, 38, 3, -99, 98, 27, 24, -69, -101, 89, 27, 18, 20, 5, 116, -49, -111, -28, -94, 21, 124, 44, -38, 7, -21, -56, 41, -81, 61, -95, -94, -78, 52, -97, 17, -99, -108, 83, -12, 41, 26, -102, -115, 67, 109, 58, -39, 119, 37, -106, -120, 57, 45, 111, 50, -15, 123, 45, -13, 27, 19, -67, -110, -24, 9, 64, -99, 9, 115, -99, -22, 98, -19, -117, -14, -43, 94, 118, -68, -108, 120, -22, 95, -20, 110, -58, -92, 80, 52, -110, 5, -100, 121, -51, -26, 96, -86, -42, -66, -111, -55, 125, -87, 42, 98, 123, -115, 6, 36, 122, 30, -85, -81, 30, 50, -15, 20, -4, -31, -115, -44, 114, -63, -62, -99, -51, -58, -19, -32, -121, 51, -85, -36, -108, -19, -16, 62, 19, -51, 61, 66, 56, -73, 4, 78, -58, -34, 34, -14, 85, 94, 54, -20, -79, -8, -100, -119, -37, -111, -24, -32, -102, -123, -48, 15, 40, 64, -38, -118, 20, 98, -16, -80, -90, 41, 46, 55, -8, 117, 102, 95, -22, -62, 12, 108, 86, -38, -84, -55, -127, 76, -77, -94, -122, 64, -35, -24, 24, -72, 33, 47, 58, 3, -17, 115, 87, 56, -48, 64, -9, 111, 15, -76, 100, 99, 117, -128, -76, 65, 124, 88, -113, -117};
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
    msg.setTimeStamp(0.923192636658);
    msg.setSource(9632U);
    msg.setSourceEntity(216U);
    msg.setDestination(10355U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.525740577575);
    msg.setSource(47688U);
    msg.setSourceEntity(171U);
    msg.setDestination(8687U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.883943815699);
    msg.setSource(47549U);
    msg.setSourceEntity(241U);
    msg.setDestination(30623U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.239664313513);
    msg.setSource(26922U);
    msg.setSourceEntity(102U);
    msg.setDestination(48161U);
    msg.setDestinationEntity(129U);
    msg.camid = 54U;
    msg.x = 34537U;
    msg.y = 32646U;

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
    msg.setTimeStamp(0.599181055771);
    msg.setSource(64563U);
    msg.setSourceEntity(241U);
    msg.setDestination(9763U);
    msg.setDestinationEntity(46U);
    msg.camid = 16U;
    msg.x = 385U;
    msg.y = 41164U;

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
    msg.setTimeStamp(0.142295139755);
    msg.setSource(44054U);
    msg.setSourceEntity(173U);
    msg.setDestination(22262U);
    msg.setDestinationEntity(96U);
    msg.camid = 245U;
    msg.x = 21366U;
    msg.y = 8802U;

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
    msg.setTimeStamp(0.435309493355);
    msg.setSource(58383U);
    msg.setSourceEntity(60U);
    msg.setDestination(54344U);
    msg.setDestinationEntity(210U);
    msg.camid = 36U;
    msg.x = 46932U;
    msg.y = 40789U;

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
    msg.setTimeStamp(0.313624865785);
    msg.setSource(64935U);
    msg.setSourceEntity(38U);
    msg.setDestination(52719U);
    msg.setDestinationEntity(193U);
    msg.camid = 160U;
    msg.x = 50994U;
    msg.y = 56071U;

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
    msg.setTimeStamp(0.357683261006);
    msg.setSource(64275U);
    msg.setSourceEntity(19U);
    msg.setDestination(23536U);
    msg.setDestinationEntity(99U);
    msg.camid = 135U;
    msg.x = 11888U;
    msg.y = 39634U;

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
    msg.setTimeStamp(0.372974590825);
    msg.setSource(41309U);
    msg.setSourceEntity(206U);
    msg.setDestination(4432U);
    msg.setDestinationEntity(209U);
    msg.tracking = 180U;
    msg.lat = 0.484151814881;
    msg.lon = 0.560298258474;
    msg.x = 0.074389019011;
    msg.y = 0.692688994917;
    msg.z = 0.203085035135;

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
    msg.setTimeStamp(0.816519473199);
    msg.setSource(29157U);
    msg.setSourceEntity(186U);
    msg.setDestination(32424U);
    msg.setDestinationEntity(250U);
    msg.tracking = 62U;
    msg.lat = 0.143522610977;
    msg.lon = 0.256491410813;
    msg.x = 0.956892106893;
    msg.y = 0.741498502178;
    msg.z = 0.174428872291;

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
    msg.setTimeStamp(0.70136048336);
    msg.setSource(38602U);
    msg.setSourceEntity(56U);
    msg.setDestination(27657U);
    msg.setDestinationEntity(94U);
    msg.tracking = 193U;
    msg.lat = 0.962930057335;
    msg.lon = 0.485409017765;
    msg.x = 0.483898882574;
    msg.y = 0.655996185677;
    msg.z = 0.760478972775;

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
    msg.setTimeStamp(0.702227422485);
    msg.setSource(58160U);
    msg.setSourceEntity(52U);
    msg.setDestination(52852U);
    msg.setDestinationEntity(78U);
    msg.target.assign("NSNOMUEACOWKGKUPEIVVDIVKMYZPZLUFADHPDFRJGSLRZTJFEMEIRRIMXKHBVXBFLKEZBYRLYANPSNDSHELUJYCKHFNUCQSLAXOBTOLTJXQQWOIONZMPWHMGTGUKVBMFNKXZIZKHTBRIZ");
    msg.lbearing = 0.714535119028;
    msg.lelevation = 0.104838208593;
    msg.bearing = 0.826577372778;
    msg.elevation = 0.412518072393;
    msg.phi = 0.562618801236;
    msg.theta = 0.123213323464;
    msg.psi = 0.367567153648;
    msg.accuracy = 0.427498037951;

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
    msg.setTimeStamp(0.115600907819);
    msg.setSource(57978U);
    msg.setSourceEntity(48U);
    msg.setDestination(56597U);
    msg.setDestinationEntity(90U);
    msg.target.assign("ADZQJMEAHKIOGXZYHFEARCRDDUJORDGMRJXSTRXCNABUKBVMNQZGMOQFYHELQJ");
    msg.lbearing = 0.700884448144;
    msg.lelevation = 0.328570547489;
    msg.bearing = 0.876631013706;
    msg.elevation = 0.662570884652;
    msg.phi = 0.24746384546;
    msg.theta = 0.242446597542;
    msg.psi = 0.797919405988;
    msg.accuracy = 0.206842984177;

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
    msg.setTimeStamp(0.742032888767);
    msg.setSource(59533U);
    msg.setSourceEntity(105U);
    msg.setDestination(36937U);
    msg.setDestinationEntity(80U);
    msg.target.assign("UFURSZNKANGZNIQZYJUSINZWGCZCYTKFBHZGCJLEBMKJLXUUYEFIZDMKSDMARBSUOECEGMYNPCSFHVAWWBIKGRHIVZNEOSTWXBTFXVMKSRQPTIHUXBGJQYXJDPAVYWUVHBJAA");
    msg.lbearing = 0.501422269637;
    msg.lelevation = 0.237672695424;
    msg.bearing = 0.0848968618702;
    msg.elevation = 0.309570124662;
    msg.phi = 0.525191153801;
    msg.theta = 0.301885986734;
    msg.psi = 0.974460776896;
    msg.accuracy = 0.938090782138;

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
    msg.setTimeStamp(0.511511602086);
    msg.setSource(10108U);
    msg.setSourceEntity(166U);
    msg.setDestination(46071U);
    msg.setDestinationEntity(253U);
    msg.target.assign("OBNUQBSVCCEUZYXGMQDFEDDWTRCEYDXGDHOLNVCJBISOWOGTVQZYZRTODHSKXPGIWHEQICULSPTTYBIXTLDXZFWFLATRMLFCAZFIFLAMEGVMBJVUWQASUWRBZJIKJS");
    msg.x = 0.948487361532;
    msg.y = 0.538367501002;
    msg.z = 0.89969200548;
    msg.n = 0.999494027064;
    msg.e = 0.626805143956;
    msg.d = 0.661240674928;
    msg.phi = 0.873628355122;
    msg.theta = 0.048553440613;
    msg.psi = 0.571815496762;
    msg.accuracy = 0.86777477354;

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
    msg.setTimeStamp(0.593793535083);
    msg.setSource(55769U);
    msg.setSourceEntity(89U);
    msg.setDestination(11362U);
    msg.setDestinationEntity(82U);
    msg.target.assign("TEEWTMBSISVSESWTIMAWZSPJXNHECXMHTKMUBILKDBGCECVJQMYJRAWHUQOJZGMKLTPUFIPDGSXAR");
    msg.x = 0.876286780533;
    msg.y = 0.341130051732;
    msg.z = 0.87861321301;
    msg.n = 0.28202747323;
    msg.e = 0.72873515748;
    msg.d = 0.942202596839;
    msg.phi = 0.995499936513;
    msg.theta = 0.248397424093;
    msg.psi = 0.17801567797;
    msg.accuracy = 0.872944455799;

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
    msg.setTimeStamp(0.778122466003);
    msg.setSource(32965U);
    msg.setSourceEntity(142U);
    msg.setDestination(6393U);
    msg.setDestinationEntity(243U);
    msg.target.assign("ONWMNIFYIJIDUSSGFRKUXDREMYZMSRLUVPINXYKAVCZNRUJLFUXOEDHKKCCPVOATEEICDQSCGBTBLNMGWQCTPBGDYWOQTFIANMWBOXZCZGGIHGNXQBZTFHUXVAAGYJVZTYJAJMIODWHKSRESRLIKRNQRSLHPJJVRXYJAKFHPLGTIYZUHKZAFWQPNREHWSHVNDYZOXLWAMQBDPJMDUUCPOWQCB");
    msg.x = 0.484208827917;
    msg.y = 0.76127801107;
    msg.z = 0.924047548569;
    msg.n = 0.180878172953;
    msg.e = 0.428664386708;
    msg.d = 0.547739196078;
    msg.phi = 0.0878138541638;
    msg.theta = 0.479663707242;
    msg.psi = 0.870760613221;
    msg.accuracy = 0.313595410338;

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
    msg.setTimeStamp(0.717561386723);
    msg.setSource(10791U);
    msg.setSourceEntity(212U);
    msg.setDestination(33169U);
    msg.setDestinationEntity(77U);
    msg.target.assign("BINIBRYCHUQRAHSGUZOHOCHUYTBOAYZAXAVHOPCOSWKOEPOTEOJJIVXIBI");
    msg.lat = 0.342069862529;
    msg.lon = 0.128978090561;
    msg.z_units = 34U;
    msg.z = 0.285043733592;
    msg.accuracy = 0.237180997513;

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
    msg.setTimeStamp(0.543723413092);
    msg.setSource(1613U);
    msg.setSourceEntity(2U);
    msg.setDestination(59648U);
    msg.setDestinationEntity(53U);
    msg.target.assign("RLOVGVLKAGZEYYKTOHFIIXBQMGNJRPYDBBPRZGNWRZROLMTEICPRNZROPKENXWZVFBQOKWLKRQYATMOQVPPIBDACAHAHZUQWKYEGESDHWUAUFNMRCUBJJSOFGTXHHVXCCYQXOXLTPMFWUBDECDXQPMUQIOAVSUDLFRFPHJD");
    msg.lat = 0.860639581647;
    msg.lon = 0.488043807128;
    msg.z_units = 78U;
    msg.z = 0.806464533211;
    msg.accuracy = 0.171692227864;

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
    msg.setTimeStamp(0.330072378698);
    msg.setSource(40611U);
    msg.setSourceEntity(121U);
    msg.setDestination(27503U);
    msg.setDestinationEntity(100U);
    msg.target.assign("NHPWELSRNNSHKVZOJIXXBYNGAKMCYLHUXZBVDGRWIFOESTENKMACWFQNQPUUTVVCCZJLYSVWBJBJSIKJSHOOEHUEKMQLGBQXTJUTNMZIVGGOKCYQDZXYWCXWPPIEGAGXAARAOXQOTLDMZMPVSBTLRUEDYMCLQIOAQVICZNNPVYZSRHHFFSUXZBGTKLBRIQYPMPFXEJFPDURVAUMKZWIYDEHUTJDHBRFTEYKORCCOBPKFARFWSWTDLGGINDDWFJ");
    msg.lat = 0.159895241862;
    msg.lon = 0.741793235831;
    msg.z_units = 188U;
    msg.z = 0.181107763472;
    msg.accuracy = 0.84344045592;

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
    msg.setTimeStamp(0.389229489313);
    msg.setSource(20076U);
    msg.setSourceEntity(5U);
    msg.setDestination(36243U);
    msg.setDestinationEntity(177U);
    msg.name.assign("BKBSZHLODEAJCUFRDBHAXHABGINNWBAMZPNZQLGNGNUBRMIWBISDKLYOTOOCQGZRHDAECTMUUXXAYLTYVMYSKEKAPFIGLDSYPLGAUMNWDVFEWEZVIWUWSXVVEZGEUKVXCQXWPHGMFOTABIQQRARJHQFRUKIFQJDOJBFFTTUZORZRNYRZGQNPLDJ");
    msg.lat = 0.0757632377815;
    msg.lon = 0.616330399099;
    msg.z = 0.201009636698;
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
    msg.setTimeStamp(0.844130514429);
    msg.setSource(15787U);
    msg.setSourceEntity(156U);
    msg.setDestination(30808U);
    msg.setDestinationEntity(124U);
    msg.name.assign("YYEQFCHASTVWVLBWAMTUUYRLARVVWSPNHWKAPICOSRHJQPFIDZCJXWIPXWEQKNXRLUQITGNJVNORRSEHPXDQEHZMKFZCOABQDPTXODZJMNGAYIKFJWDOUDMDLHFBIOFCGOXTKOMWJXEYDETHSEYPUL");
    msg.lat = 0.877303918758;
    msg.lon = 0.615799800578;
    msg.z = 0.693542364717;
    msg.z_units = 54U;

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
    msg.setTimeStamp(0.472294263625);
    msg.setSource(55757U);
    msg.setSourceEntity(144U);
    msg.setDestination(12155U);
    msg.setDestinationEntity(26U);
    msg.name.assign("XYGPGXGNZFYOGIJFZMNTNJTTTIQRGJSHXDBSWLXOWCBTPBMAMELTNCKHIOKTNITJUQVJCDFYCQQFBIHHRORIFAUHCHIKJZCXSUDAXZD");
    msg.lat = 0.242268826306;
    msg.lon = 0.777479424624;
    msg.z = 0.760745756937;
    msg.z_units = 3U;

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
    msg.setTimeStamp(0.510010376651);
    msg.setSource(37499U);
    msg.setSourceEntity(87U);
    msg.setDestination(21649U);
    msg.setDestinationEntity(248U);
    msg.op = 35U;

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
    msg.setTimeStamp(0.0111991283704);
    msg.setSource(27481U);
    msg.setSourceEntity(197U);
    msg.setDestination(43988U);
    msg.setDestinationEntity(133U);
    msg.op = 208U;

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
    msg.setTimeStamp(0.50634280346);
    msg.setSource(14513U);
    msg.setSourceEntity(240U);
    msg.setDestination(6703U);
    msg.setDestinationEntity(88U);
    msg.op = 46U;

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
    msg.setTimeStamp(0.429834113336);
    msg.setSource(9704U);
    msg.setSourceEntity(171U);
    msg.setDestination(37497U);
    msg.setDestinationEntity(111U);
    msg.value = 0.403335770426;
    msg.type = 89U;

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
    msg.setTimeStamp(0.235490215465);
    msg.setSource(21756U);
    msg.setSourceEntity(0U);
    msg.setDestination(10010U);
    msg.setDestinationEntity(84U);
    msg.value = 0.341713659837;
    msg.type = 76U;

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
    msg.setTimeStamp(0.468011532834);
    msg.setSource(22274U);
    msg.setSourceEntity(211U);
    msg.setDestination(32549U);
    msg.setDestinationEntity(63U);
    msg.value = 0.283157420141;
    msg.type = 142U;

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
    msg.setTimeStamp(0.0814705018874);
    msg.setSource(32232U);
    msg.setSourceEntity(249U);
    msg.setDestination(4275U);
    msg.setDestinationEntity(205U);
    msg.value = 0.878128675447;

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
    msg.setTimeStamp(0.665511461768);
    msg.setSource(48524U);
    msg.setSourceEntity(75U);
    msg.setDestination(16863U);
    msg.setDestinationEntity(223U);
    msg.value = 0.233639598668;

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
    msg.setTimeStamp(0.854532305048);
    msg.setSource(33579U);
    msg.setSourceEntity(149U);
    msg.setDestination(61611U);
    msg.setDestinationEntity(137U);
    msg.value = 0.605221416447;

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
    msg.setTimeStamp(0.862751719654);
    msg.setSource(65078U);
    msg.setSourceEntity(87U);
    msg.setDestination(64819U);
    msg.setDestinationEntity(26U);
    msg.timestamp_last_service = 0.303213925963;
    msg.time_next_service = 0.727596517809;
    msg.time_motor_next_service = 0.637973508058;
    msg.time_idle_ground = 0.363135349219;
    msg.time_idle_air = 0.77956110274;
    msg.time_idle_water = 0.892169978492;
    msg.time_idle_underwater = 0.469020148428;
    msg.time_idle_unknown = 0.0820451012046;
    msg.time_motor_ground = 0.64911997498;
    msg.time_motor_air = 0.245560864159;
    msg.time_motor_water = 0.741410870142;
    msg.time_motor_underwater = 0.0571067737734;
    msg.time_motor_unknown = 0.745214203787;
    msg.rpm_min = 8764;
    msg.rpm_max = 23385;
    msg.depth_max = 0.189821228956;

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
    msg.setTimeStamp(0.736143966735);
    msg.setSource(30810U);
    msg.setSourceEntity(119U);
    msg.setDestination(52153U);
    msg.setDestinationEntity(178U);
    msg.timestamp_last_service = 0.66195329737;
    msg.time_next_service = 0.109596859122;
    msg.time_motor_next_service = 0.964315268623;
    msg.time_idle_ground = 0.333670802693;
    msg.time_idle_air = 0.42470217751;
    msg.time_idle_water = 0.132223334008;
    msg.time_idle_underwater = 0.520253605205;
    msg.time_idle_unknown = 0.470379693903;
    msg.time_motor_ground = 0.810071838304;
    msg.time_motor_air = 0.492883827256;
    msg.time_motor_water = 0.724361688069;
    msg.time_motor_underwater = 0.0679948871222;
    msg.time_motor_unknown = 0.0283442073947;
    msg.rpm_min = 9828;
    msg.rpm_max = 18898;
    msg.depth_max = 0.621382182363;

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
    msg.setTimeStamp(0.752453593638);
    msg.setSource(20247U);
    msg.setSourceEntity(211U);
    msg.setDestination(50830U);
    msg.setDestinationEntity(244U);
    msg.timestamp_last_service = 0.173746197656;
    msg.time_next_service = 0.924204202976;
    msg.time_motor_next_service = 0.0903639506428;
    msg.time_idle_ground = 0.951532721821;
    msg.time_idle_air = 0.0263372652879;
    msg.time_idle_water = 0.575186739364;
    msg.time_idle_underwater = 0.826235431704;
    msg.time_idle_unknown = 0.268013018265;
    msg.time_motor_ground = 0.784895572693;
    msg.time_motor_air = 0.687288875712;
    msg.time_motor_water = 0.148638573299;
    msg.time_motor_underwater = 0.136570494794;
    msg.time_motor_unknown = 0.954013971708;
    msg.rpm_min = -11151;
    msg.rpm_max = -20570;
    msg.depth_max = 0.810816052654;

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
    msg.setTimeStamp(0.546718244621);
    msg.setSource(37529U);
    msg.setSourceEntity(215U);
    msg.setDestination(23050U);
    msg.setDestinationEntity(95U);
    msg.severity = 16U;
    msg.text.assign("JOTJCGXSSXEDTADLWNYJHZGLQILCBZZMQKTVXPXHJHHGXMNERDKOGYDKDVZWSHAIPUVNECYWYNBFMSWPLTQCFXYFLIPKEDIHEFSCURALNGBAEQXNJKDCEVURTQIDIMWVNUQGBWSWFIZYEGMFOTTXQKGFFNUPUN");

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
    msg.setTimeStamp(0.579826810754);
    msg.setSource(21309U);
    msg.setSourceEntity(14U);
    msg.setDestination(49184U);
    msg.setDestinationEntity(217U);
    msg.severity = 25U;
    msg.text.assign("CXOADMVKILSUESIJGAUBZNFKNZAXMTADJRRSZIURWRRTGUBDATFJMDXREMJ");

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
    msg.setTimeStamp(0.322903717701);
    msg.setSource(36736U);
    msg.setSourceEntity(48U);
    msg.setDestination(37685U);
    msg.setDestinationEntity(75U);
    msg.severity = 108U;
    msg.text.assign("MNMKWNRFCIPNZQCWMVJETSRLYKSGAJQMCWUOTVVYUBZUQQZFYOCXNUQRAQNUHJTHESMSNZOCPHTMEBAIQJOKLNBDKOTVMAXPSWXIDJTCQPWTWIPZLWPLMPILALVFRLPXPDUAMRXYNXYIXFRGXUFJWISSTOGUZRFWKDDOSCHVRBVYEAEQUBIWJCIRCTFHLYVJDIDKHDUANHBOHGFHSVABNRYGYDBKHOZTAXEBEGGMBFSG");

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
    msg.setTimeStamp(0.37587325402);
    msg.setSource(61612U);
    msg.setSourceEntity(150U);
    msg.setDestination(36730U);
    msg.setDestinationEntity(169U);
    msg.channel = -83;
    msg.value = -1277735004;
    msg.gain = 209U;

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
    msg.setTimeStamp(0.383332151992);
    msg.setSource(40283U);
    msg.setSourceEntity(36U);
    msg.setDestination(35393U);
    msg.setDestinationEntity(166U);
    msg.channel = 71;
    msg.value = 470981701;
    msg.gain = 218U;

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
    msg.setTimeStamp(0.157496938923);
    msg.setSource(4597U);
    msg.setSourceEntity(146U);
    msg.setDestination(6488U);
    msg.setDestinationEntity(236U);
    msg.channel = 97;
    msg.value = 436961029;
    msg.gain = 252U;

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
    msg.setTimeStamp(0.130840892709);
    msg.setSource(25355U);
    msg.setSourceEntity(185U);
    msg.setDestination(489U);
    msg.setDestinationEntity(0U);
    msg.ch01 = 0.689910131145;
    msg.ch02 = 0.358875727896;
    msg.ch03 = 0.0295608609899;
    msg.ch04 = 0.75353786929;
    msg.ch05 = 0.477085286137;
    msg.ch06 = 0.0386284683748;
    msg.ch07 = 0.0599828917421;
    msg.ch08 = 0.324132447313;
    msg.ch09 = 0.657650076921;
    msg.ch10 = 0.707126441192;
    msg.ch11 = 0.72887064998;
    msg.ch12 = 0.522752481469;
    msg.ch13 = 0.653983715122;
    msg.ch14 = 0.553602432359;
    msg.ch15 = 0.0483812713687;
    msg.ch16 = 0.956681891382;

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
    msg.setTimeStamp(0.142334510661);
    msg.setSource(22205U);
    msg.setSourceEntity(10U);
    msg.setDestination(50695U);
    msg.setDestinationEntity(78U);
    msg.ch01 = 0.201484586992;
    msg.ch02 = 0.0324681159326;
    msg.ch03 = 0.508828036879;
    msg.ch04 = 0.105245309952;
    msg.ch05 = 0.670370105136;
    msg.ch06 = 0.774151583379;
    msg.ch07 = 0.404777867033;
    msg.ch08 = 0.557535030392;
    msg.ch09 = 0.398683618651;
    msg.ch10 = 0.784029970052;
    msg.ch11 = 0.243152341335;
    msg.ch12 = 0.640386468757;
    msg.ch13 = 0.159917407596;
    msg.ch14 = 0.438605993884;
    msg.ch15 = 0.561560555271;
    msg.ch16 = 0.759196439653;

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
    msg.setTimeStamp(0.0849554384925);
    msg.setSource(7960U);
    msg.setSourceEntity(19U);
    msg.setDestination(57910U);
    msg.setDestinationEntity(90U);
    msg.ch01 = 0.931395727053;
    msg.ch02 = 0.580754746344;
    msg.ch03 = 0.567182636743;
    msg.ch04 = 0.115699028266;
    msg.ch05 = 0.44471552256;
    msg.ch06 = 0.837055909544;
    msg.ch07 = 0.792653519005;
    msg.ch08 = 0.17436558289;
    msg.ch09 = 0.640940102277;
    msg.ch10 = 0.267974565566;
    msg.ch11 = 0.415162461901;
    msg.ch12 = 0.533367219308;
    msg.ch13 = 0.603218242854;
    msg.ch14 = 0.332626939666;
    msg.ch15 = 0.373704190638;
    msg.ch16 = 0.64595779874;

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
    msg.setTimeStamp(0.305481859198);
    msg.setSource(39686U);
    msg.setSourceEntity(3U);
    msg.setDestination(42344U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.247655806613;
    msg.lon = 0.69820475847;
    msg.x = 0.294713469556;
    msg.y = 0.46135279728;
    msg.z = 0.999239839076;
    msg.vx = 0.68095209594;
    msg.vy = 0.250664407349;
    msg.vz = 0.497732762231;
    msg.depth = 59U;
    msg.speed = 0.304818750083;
    msg.psi = 0.945597350909;
    msg.omega = 0.902439942962;

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
    msg.setTimeStamp(0.49967728957);
    msg.setSource(46606U);
    msg.setSourceEntity(199U);
    msg.setDestination(40026U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.353749964855;
    msg.lon = 0.100230434075;
    msg.x = 0.382751808994;
    msg.y = 0.446049030501;
    msg.z = 0.589988484382;
    msg.vx = 0.973032857804;
    msg.vy = 0.0329475261283;
    msg.vz = 0.446790044504;
    msg.depth = 206U;
    msg.speed = 0.429602102389;
    msg.psi = 0.972348956105;
    msg.omega = 0.548645100322;

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
    msg.setTimeStamp(0.275824980713);
    msg.setSource(43217U);
    msg.setSourceEntity(182U);
    msg.setDestination(52589U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.75359723693;
    msg.lon = 0.940081797574;
    msg.x = 0.128603931361;
    msg.y = 0.390395035625;
    msg.z = 0.858942997119;
    msg.vx = 0.396840123783;
    msg.vy = 0.85680154747;
    msg.vz = 0.704411598873;
    msg.depth = 72U;
    msg.speed = 0.676227005302;
    msg.psi = 0.158802149429;
    msg.omega = 0.735638740355;

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
    msg.setTimeStamp(0.507371906825);
    msg.setSource(26482U);
    msg.setSourceEntity(197U);
    msg.setDestination(60804U);
    msg.setDestinationEntity(96U);
    msg.ctrl_cmd_v = 0.343206589304;
    msg.ctrl_cmd_omega = 0.445578400812;
    msg.sat_ctrl_cmd_v = 0.353323950269;
    msg.sat_ctrl_cmd_omega = 0.428173315816;
    msg.robust_v = 0.480244115607;
    msg.robust_omega = 0.949628041143;
    msg.gamma = 0.62866191807;
    msg.gamma_dot = 0.098654895;
    msg.g_err = 0.506426367092;
    msg.target_x = 0.354846589787;
    msg.target_y = 0.441240570439;
    msg.target_z = 0.192301499013;
    msg.target_vx = 0.703840374907;
    msg.target_vy = 0.0337387932682;
    msg.target_vz = 0.372029099516;
    msg.x = 0.251027966281;
    msg.y = 0.77743454255;
    msg.z = 0.835096199675;
    msg.vx = 0.0142229258783;
    msg.vy = 0.99185966176;
    msg.vz = 0.36624509748;
    msg.pd_x = 0.0925770504611;
    msg.pd_y = 0.0910188402139;
    msg.p_ref_x = 0.30666437139;
    msg.p_ref_y = 0.47755031241;
    msg.norm_mpf_err = 0.370604066634;
    msg.mpf_err_x = 0.189321952185;
    msg.mpf_err_y = 0.660076584091;
    msg.mpf_err_z = 0.11244905937;
    msg.err_x = 0.691242035432;
    msg.err_y = 0.827250856656;
    msg.err_z = 0.542177410008;
    msg.start_x = 0.353787132549;
    msg.start_y = 0.894373321922;
    msg.start_z = 0.169097909228;
    msg.end_x = 0.61146859107;
    msg.end_y = 0.402844488624;
    msg.end_z = 0.778283702657;
    msg.stuck = 15U;

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
    msg.setTimeStamp(0.818877212469);
    msg.setSource(32469U);
    msg.setSourceEntity(180U);
    msg.setDestination(39156U);
    msg.setDestinationEntity(219U);
    msg.ctrl_cmd_v = 0.170754808916;
    msg.ctrl_cmd_omega = 0.424470812022;
    msg.sat_ctrl_cmd_v = 0.821669768288;
    msg.sat_ctrl_cmd_omega = 0.601381758989;
    msg.robust_v = 0.968323691731;
    msg.robust_omega = 0.426997803663;
    msg.gamma = 0.442871755884;
    msg.gamma_dot = 0.0651851388004;
    msg.g_err = 0.770752080419;
    msg.target_x = 0.134857442922;
    msg.target_y = 0.900894104598;
    msg.target_z = 0.80515215239;
    msg.target_vx = 0.470700344659;
    msg.target_vy = 0.197080620082;
    msg.target_vz = 0.786669602604;
    msg.x = 0.355963082251;
    msg.y = 0.881347372451;
    msg.z = 0.0068260164691;
    msg.vx = 0.0221748172452;
    msg.vy = 0.304019373665;
    msg.vz = 0.69502527855;
    msg.pd_x = 0.575573019455;
    msg.pd_y = 0.576704053995;
    msg.p_ref_x = 0.452758263116;
    msg.p_ref_y = 0.401100238975;
    msg.norm_mpf_err = 0.503800295921;
    msg.mpf_err_x = 0.777727832768;
    msg.mpf_err_y = 0.0481313573496;
    msg.mpf_err_z = 0.0621322377002;
    msg.err_x = 0.595313458099;
    msg.err_y = 0.382383957358;
    msg.err_z = 0.12924355523;
    msg.start_x = 0.17885534597;
    msg.start_y = 0.46060412368;
    msg.start_z = 0.0467592617411;
    msg.end_x = 0.79600619898;
    msg.end_y = 0.600138375663;
    msg.end_z = 0.809648270248;
    msg.stuck = 220U;

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
    msg.setTimeStamp(0.73815911023);
    msg.setSource(56839U);
    msg.setSourceEntity(217U);
    msg.setDestination(63454U);
    msg.setDestinationEntity(148U);
    msg.ctrl_cmd_v = 0.891377495096;
    msg.ctrl_cmd_omega = 0.549280907703;
    msg.sat_ctrl_cmd_v = 0.756780046339;
    msg.sat_ctrl_cmd_omega = 0.935584351509;
    msg.robust_v = 0.0817716512941;
    msg.robust_omega = 0.291006414283;
    msg.gamma = 0.590190818521;
    msg.gamma_dot = 0.865466665575;
    msg.g_err = 0.426473231101;
    msg.target_x = 0.843744827138;
    msg.target_y = 0.88840906798;
    msg.target_z = 0.978582063015;
    msg.target_vx = 0.0709478036271;
    msg.target_vy = 0.476582882063;
    msg.target_vz = 0.619242736873;
    msg.x = 0.119073588351;
    msg.y = 0.873978797596;
    msg.z = 0.498820579597;
    msg.vx = 0.292709168318;
    msg.vy = 0.283807492206;
    msg.vz = 0.274502067582;
    msg.pd_x = 0.351839823043;
    msg.pd_y = 0.143733279414;
    msg.p_ref_x = 0.287555748119;
    msg.p_ref_y = 0.223009089149;
    msg.norm_mpf_err = 0.33247093712;
    msg.mpf_err_x = 0.433478433057;
    msg.mpf_err_y = 0.053784419892;
    msg.mpf_err_z = 0.572526361629;
    msg.err_x = 0.602590668195;
    msg.err_y = 0.905811540263;
    msg.err_z = 0.941978352759;
    msg.start_x = 0.198987199275;
    msg.start_y = 0.387137973291;
    msg.start_z = 0.727750348171;
    msg.end_x = 0.379500733041;
    msg.end_y = 0.568226961715;
    msg.end_z = 0.507959807353;
    msg.stuck = 181U;

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
    msg.setTimeStamp(0.626401726439);
    msg.setSource(59360U);
    msg.setSourceEntity(10U);
    msg.setDestination(38084U);
    msg.setDestinationEntity(189U);
    msg.value = 0.419170800956;

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
    msg.setTimeStamp(0.309661463274);
    msg.setSource(56222U);
    msg.setSourceEntity(4U);
    msg.setDestination(43956U);
    msg.setDestinationEntity(22U);
    msg.value = 0.526209990219;

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
    msg.setTimeStamp(0.903886033152);
    msg.setSource(1483U);
    msg.setSourceEntity(26U);
    msg.setDestination(58495U);
    msg.setDestinationEntity(84U);
    msg.value = 0.0455574760972;

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
