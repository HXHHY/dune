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
// IMC XML MD5: 69c3cb090afe3a9831f7621d6b723ff3                            *
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
    msg.setTimeStamp(0.752787606099);
    msg.setSource(8616U);
    msg.setSourceEntity(64U);
    msg.setDestination(27936U);
    msg.setDestinationEntity(78U);
    msg.state = 16U;
    msg.flags = 241U;
    msg.description.assign("BMINCLKFVIUTHJYLLBSJAIOGCTEXVDGXLSNZFKCCNVNKBCGYFBEPKHYAJMEWDOXIEEVOJQVIWRUN");

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
    msg.setTimeStamp(0.335891671855);
    msg.setSource(502U);
    msg.setSourceEntity(50U);
    msg.setDestination(46129U);
    msg.setDestinationEntity(107U);
    msg.state = 82U;
    msg.flags = 229U;
    msg.description.assign("VXEFYWVIVMFYGPASIHHQFHGKNTSTEPMYRHJJOCUYOJCYHNXDMJMOWGDQXBPRFXXZPVCFWBOJOHHSYPGTVTZDRJBNYNJNEGKXOCVAUVBAUVBPXLEXIMLUCASIPBKGVHQGLFFAZCEZBSAAJDQIHSQGAWBQWLPCHZF");

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
    msg.setTimeStamp(0.746287218726);
    msg.setSource(52712U);
    msg.setSourceEntity(148U);
    msg.setDestination(7497U);
    msg.setDestinationEntity(250U);
    msg.state = 70U;
    msg.flags = 238U;
    msg.description.assign("CFQPAQAQRMVXDOCYRWZBUKSECUXQRPNRHEAVHADQXUBGLZVPYYYTWPDPMYOEYFIABSHRAWBTKKCXTJTNZUVKJWSBONMZRJOLTZELLQVWMBHX");

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
    msg.setTimeStamp(0.991369743375);
    msg.setSource(2454U);
    msg.setSourceEntity(86U);
    msg.setDestination(32184U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.206395840806);
    msg.setSource(64230U);
    msg.setSourceEntity(98U);
    msg.setDestination(13841U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.481894885532);
    msg.setSource(27652U);
    msg.setSourceEntity(0U);
    msg.setDestination(24095U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.0624205934233);
    msg.setSource(27544U);
    msg.setSourceEntity(86U);
    msg.setDestination(3793U);
    msg.setDestinationEntity(72U);
    msg.id = 117U;
    msg.label.assign("YHACTJGSQAPRIQWEMKRALKSVOGDIRDEYHJCLGQLMOIZVFCGHIYLFXXQXUTPNFARIBZVHDANZVTWSPDJITMBMGVSHEYBLPRYZTDCPQVPYHHAJIXWXLNBEAKBTWCOKHDOESIRUPFJEDUMNFTUCYTFK");
    msg.component.assign("OKUYNIBICJLBHMMFCEPWDRIDFKPOZILQQPWSSFMMWVWQ");
    msg.act_time = 15575U;
    msg.deact_time = 28698U;

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
    msg.setTimeStamp(0.800825331111);
    msg.setSource(54791U);
    msg.setSourceEntity(242U);
    msg.setDestination(49714U);
    msg.setDestinationEntity(217U);
    msg.id = 250U;
    msg.label.assign("DCXTNTXIEXIRSFRYBPIXOXEMVJOCRAEOHFJSTQAZKQBIIYTHVGETSJENNWLPDBATUKXZQRUSKMACMMDOERKFLYIJBEDDFOJPYTPNSCQAWMRHWJKAVYEYQWHFMBMGZGTNPHRYOSXFIWSRJNKGJZVAIWWLYDWEJYKLDQLISAPKUVDWPUUUUNPPSREWVQLIPGQLBLZOHCTGAHVMGFQGCOFDCVZ");
    msg.component.assign("XZYADMPTIAQXSASJPBHXAPIYUFQKTBEJZNSBQDCCIVEXNOYLLMEIGCJNANOTEHKBCSWKFQXGUFVMDSUINFZWKJGEZCQQIIPXLSHFBKMBOKTPUFJGENMHW");
    msg.act_time = 49177U;
    msg.deact_time = 47004U;

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
    msg.setTimeStamp(0.826506273283);
    msg.setSource(15383U);
    msg.setSourceEntity(181U);
    msg.setDestination(48691U);
    msg.setDestinationEntity(174U);
    msg.id = 157U;
    msg.label.assign("PEZNLSVDEDGICLQNRIWPPWOSMUCVYUNZXURXGNCQEMHYNQDNTEWTTGOBVIKUWRLAKICJGDEUOJDNAHBJFYMXXYFQNIEPVUSSHMRBNJXJ");
    msg.component.assign("VGZPBKLMPR");
    msg.act_time = 23029U;
    msg.deact_time = 57410U;

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
    msg.setTimeStamp(0.350286160804);
    msg.setSource(64209U);
    msg.setSourceEntity(82U);
    msg.setDestination(24822U);
    msg.setDestinationEntity(129U);
    msg.id = 120U;

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
    msg.setTimeStamp(0.8787897108);
    msg.setSource(735U);
    msg.setSourceEntity(247U);
    msg.setDestination(13510U);
    msg.setDestinationEntity(139U);
    msg.id = 238U;

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
    msg.setTimeStamp(0.703990724753);
    msg.setSource(1755U);
    msg.setSourceEntity(94U);
    msg.setDestination(1900U);
    msg.setDestinationEntity(146U);
    msg.id = 197U;

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
    msg.setTimeStamp(0.160907329999);
    msg.setSource(51120U);
    msg.setSourceEntity(124U);
    msg.setDestination(28264U);
    msg.setDestinationEntity(252U);
    msg.op = 141U;
    msg.list.assign("XOIILDNLKJXAGGAWIIYMQAKYYCDOETVJDEFTYODNARMGESTCVCYBFCACGNEQOHYFTRYJDFMIGLWVWKCRWURPLVBZKFUNHNOKVBTWZFVEZBWNIPDMKADSWIOPNWBLQUCFSY");

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
    msg.setTimeStamp(0.779913937559);
    msg.setSource(16390U);
    msg.setSourceEntity(56U);
    msg.setDestination(50301U);
    msg.setDestinationEntity(31U);
    msg.op = 192U;
    msg.list.assign("WCFTISQZROLRDBYIJPATMWUSIZXSJPLSAOIJHWKXYVLARWIUXWTRXRDESODKIBYIGKPRPLGFNCFKACZZRISMAKWCBMNOGVVNLVMCEUMKJBLOK");

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
    msg.setTimeStamp(0.99318922624);
    msg.setSource(30836U);
    msg.setSourceEntity(186U);
    msg.setDestination(48988U);
    msg.setDestinationEntity(10U);
    msg.op = 136U;
    msg.list.assign("UXTXBXQWLTVYMWSAEJJBBQFZGZHFZUGNJYMDNPAARWNENGJHXPWXQXQYUKNSDMDQRMROEKHPCMBAPSETVBIRVBKCWQHTGEXVMUIZHZMQHVPYIYCWMVIOCRATARLWEXZUZGGRVYEEBDQNIVYCLKLIROJDAIKFSKIVYHFYQUCTETOJFRGQTFUVNLWLHYT");

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
    msg.setTimeStamp(0.499991450439);
    msg.setSource(53423U);
    msg.setSourceEntity(32U);
    msg.setDestination(54801U);
    msg.setDestinationEntity(248U);
    msg.value = 85U;

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
    msg.setTimeStamp(0.836758899009);
    msg.setSource(56404U);
    msg.setSourceEntity(144U);
    msg.setDestination(38351U);
    msg.setDestinationEntity(214U);
    msg.value = 238U;

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
    msg.setTimeStamp(0.847005427936);
    msg.setSource(61104U);
    msg.setSourceEntity(39U);
    msg.setDestination(56178U);
    msg.setDestinationEntity(188U);
    msg.value = 112U;

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
    msg.setTimeStamp(0.870303252865);
    msg.setSource(41074U);
    msg.setSourceEntity(42U);
    msg.setDestination(52842U);
    msg.setDestinationEntity(211U);
    msg.consumer.assign("ZFLQBWZQPDJIXDBSACTLIRPIPMOBCXBTKICIUBYLVFRBWKJFJUOJOOUDFQEMURYQRSLNNECEYMQPTFKCGSPHGALZNNZYAHRMZQKHNJNSXKTCAZLRSZJNXUTHFIQUWMECYMFDOVBKRNHOGGWTSWXWILTMLPYEFYKGESRSXQPVJXAVWUHTWACMEYKBPBIEIHDDCVLYPHSPXIRKHKJGOAZGAGJXOEDQFVNMAXUTBQDVHGUCVDMVJWOZDYT");
    msg.message_id = 60633U;

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
    msg.setTimeStamp(0.478928936063);
    msg.setSource(8901U);
    msg.setSourceEntity(221U);
    msg.setDestination(14719U);
    msg.setDestinationEntity(213U);
    msg.consumer.assign("HNQABEODUEKXIKFMMJHGCPWSNDIFNRVJEKYLMVJGOPGCOLSMOCNYCMVLEPDAAGUPIMISPNNIQSTRSIYQZVTDUKGALJLRCDWXJYQBILTXYAYZULYEGDLPUHMOZSBSPTHSCBGHDEXBRXABZFKVTCFRKONGZIBITWXNRWVEQRJDYPIDWMALTNOXUKFGWVZFFEJBCEMWHNVZOPKAURTXOZBCW");
    msg.message_id = 6005U;

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
    msg.setTimeStamp(0.250695935773);
    msg.setSource(56292U);
    msg.setSourceEntity(86U);
    msg.setDestination(20188U);
    msg.setDestinationEntity(49U);
    msg.consumer.assign("GKFNJBWXPYQWVMJLHDSEVZFSONHKTMWCPLAAPJVFUGMVNCQDCCKHSYBLIUNWICOUPXDOMGIHKPRKIIYGRTWQIXXANOIAZDZVLNTJAUHSOEYHLJXYQDQWFXGVLB");
    msg.message_id = 40386U;

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
    msg.setTimeStamp(0.914252747985);
    msg.setSource(11696U);
    msg.setSourceEntity(226U);
    msg.setDestination(30718U);
    msg.setDestinationEntity(57U);
    msg.type = 56U;

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
    msg.setTimeStamp(0.23575722322);
    msg.setSource(46124U);
    msg.setSourceEntity(7U);
    msg.setDestination(34130U);
    msg.setDestinationEntity(132U);
    msg.type = 197U;

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
    msg.setTimeStamp(0.955276795288);
    msg.setSource(20187U);
    msg.setSourceEntity(129U);
    msg.setDestination(53989U);
    msg.setDestinationEntity(64U);
    msg.type = 55U;

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
    msg.setTimeStamp(0.0718085297174);
    msg.setSource(37708U);
    msg.setSourceEntity(85U);
    msg.setDestination(33184U);
    msg.setDestinationEntity(155U);
    msg.op = 235U;

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
    msg.setTimeStamp(0.752190497246);
    msg.setSource(8788U);
    msg.setSourceEntity(73U);
    msg.setDestination(4602U);
    msg.setDestinationEntity(83U);
    msg.op = 224U;

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
    msg.setTimeStamp(0.538384856474);
    msg.setSource(37605U);
    msg.setSourceEntity(98U);
    msg.setDestination(42964U);
    msg.setDestinationEntity(40U);
    msg.op = 222U;

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
    msg.setTimeStamp(0.457220335019);
    msg.setSource(42586U);
    msg.setSourceEntity(174U);
    msg.setDestination(19988U);
    msg.setDestinationEntity(12U);
    msg.total_steps = 246U;
    msg.step_number = 27U;
    msg.step.assign("UFRJMXCVVLSUURGOXZKXAXGNBUMFENZKZEFTACLQLLGEKRIEUPSQPBGLWLESOHPXMWXBDUBDSGHSXJABIBPXDYAFODHEYXBYPRJIMXOQOQCHGMYSPZQJIAZJOYWVPKNQKDWTZQOOYTCNCSVKZEUYH");
    msg.flags = 18U;

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
    msg.setTimeStamp(0.465614613791);
    msg.setSource(48749U);
    msg.setSourceEntity(122U);
    msg.setDestination(64855U);
    msg.setDestinationEntity(132U);
    msg.total_steps = 191U;
    msg.step_number = 35U;
    msg.step.assign("AOWYJEKJOAATSYUDECZFBZKJRIDKCPWVZPWGVLXESIKSORNSVNMTOJWNHHLFQPCKWJUXEIGWIMIDPTRYASHPDCQOLTXAJPKN");
    msg.flags = 69U;

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
    msg.setTimeStamp(0.451405911615);
    msg.setSource(32951U);
    msg.setSourceEntity(215U);
    msg.setDestination(33345U);
    msg.setDestinationEntity(141U);
    msg.total_steps = 251U;
    msg.step_number = 204U;
    msg.step.assign("TSVIQTSBELKGZLZMXSQIHLOPKODIPRSLVOIFNSZBYVUUJDOXNSCGTTKBONHLGWAQUXHYQOKRTPJCDVGKUOMDIXWORTAMZGCWHUVUPWWFBJQPCOPSJYHZRVNXEDEWEKAMWYRSVFMNELXPBMJYZNDYFDCJBACGDENRKSZKXQRJTRHUBVTOGTAGZXAIFIFSFLXAPJDMFNAYFPANWBJHMWULWLBQRZCUXCQGYIHEYDMNQ");
    msg.flags = 108U;

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
    msg.setTimeStamp(0.00291191510212);
    msg.setSource(37238U);
    msg.setSourceEntity(224U);
    msg.setDestination(50048U);
    msg.setDestinationEntity(242U);
    msg.state = 9U;
    msg.error.assign("ZOHOACOEHFXWZSDJPOAKATROBTGWICBFNNRTHCVXCTDPCSIYVQGHFGWGNXHBAXCPJRUPFJKUECUVJSNHLJIMZGNIMMLNTRHHFXWGZQDEQNYNUGRPYSEKVRZWJFVKIMOLUFDIARZPRTFMCLBOSPQQZYUKRYSQELHEUOOETZDQLMHAQXMBYM");

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
    msg.setTimeStamp(0.461769036808);
    msg.setSource(49621U);
    msg.setSourceEntity(141U);
    msg.setDestination(60564U);
    msg.setDestinationEntity(134U);
    msg.state = 88U;
    msg.error.assign("YQYMJNPKUPJGGNBZSKUSSHZOAXNBBKLWMJUJKLTTEFPJIHILEVMGXWTIGYDFYWGDYVOCIAKIQDUBPCJ");

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
    msg.setTimeStamp(0.922963702062);
    msg.setSource(30702U);
    msg.setSourceEntity(25U);
    msg.setDestination(11666U);
    msg.setDestinationEntity(210U);
    msg.state = 28U;
    msg.error.assign("CASQWLJHGCHAVKRWOESKMEQUOOCLIHBSMSFVXTQAVUYUCYLJZPQZDTZANIPNBRLFYWPXTSJWDGXNYLWLNECOXMSVRWPGPXMZZAJIUQSUKJZSNPEUJEDOLQOBGDDRGTHNYYGOIBOZFANKDZZJPOARCQRVPIVGXKXPHKFFBMAIMPYWWVTECUXHBLMCFQDYJRRHWBKEMSIFASBGKMHDNHIQITBT");

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
    msg.setTimeStamp(0.896801675631);
    msg.setSource(53702U);
    msg.setSourceEntity(73U);
    msg.setDestination(36626U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.643354168261);
    msg.setSource(13429U);
    msg.setSourceEntity(182U);
    msg.setDestination(25411U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.781687708766);
    msg.setSource(39310U);
    msg.setSourceEntity(178U);
    msg.setDestination(37108U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.0256080927983);
    msg.setSource(29530U);
    msg.setSourceEntity(87U);
    msg.setDestination(14064U);
    msg.setDestinationEntity(226U);
    msg.op = 229U;
    msg.speed_min = 0.275996338486;
    msg.speed_max = 0.915093795398;
    msg.long_accel = 0.952232825322;
    msg.alt_max_msl = 0.593201577451;
    msg.dive_fraction_max = 0.916571064511;
    msg.climb_fraction_max = 0.667108185281;
    msg.bank_max = 0.173555289819;
    msg.p_max = 0.422147906876;
    msg.pitch_min = 0.526497784522;
    msg.pitch_max = 0.592181252424;
    msg.q_max = 0.0067964227937;
    msg.g_min = 0.483666692355;
    msg.g_max = 0.338890816727;
    msg.g_lat_max = 0.441970180693;
    msg.rpm_min = 0.764018582533;
    msg.rpm_max = 0.34197999327;
    msg.rpm_rate_max = 0.03447684362;

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
    msg.setTimeStamp(0.65999028068);
    msg.setSource(5335U);
    msg.setSourceEntity(134U);
    msg.setDestination(48256U);
    msg.setDestinationEntity(119U);
    msg.op = 204U;
    msg.speed_min = 0.663965037061;
    msg.speed_max = 0.61058407955;
    msg.long_accel = 0.779898154421;
    msg.alt_max_msl = 0.682110820945;
    msg.dive_fraction_max = 0.584844575045;
    msg.climb_fraction_max = 0.792876939677;
    msg.bank_max = 0.62979673887;
    msg.p_max = 0.395697640734;
    msg.pitch_min = 0.467357361277;
    msg.pitch_max = 0.123972226986;
    msg.q_max = 0.231975355043;
    msg.g_min = 0.521890906517;
    msg.g_max = 0.575827580812;
    msg.g_lat_max = 0.154334459857;
    msg.rpm_min = 0.302372442903;
    msg.rpm_max = 0.143006722646;
    msg.rpm_rate_max = 0.7165884286;

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
    msg.setTimeStamp(0.790340009713);
    msg.setSource(60885U);
    msg.setSourceEntity(92U);
    msg.setDestination(4256U);
    msg.setDestinationEntity(78U);
    msg.op = 7U;
    msg.speed_min = 0.586043480287;
    msg.speed_max = 0.391372583411;
    msg.long_accel = 0.930832873441;
    msg.alt_max_msl = 0.602738457526;
    msg.dive_fraction_max = 0.29057010926;
    msg.climb_fraction_max = 0.467193352913;
    msg.bank_max = 0.31422906506;
    msg.p_max = 0.105841168408;
    msg.pitch_min = 0.443585849912;
    msg.pitch_max = 0.506309312252;
    msg.q_max = 0.77702041527;
    msg.g_min = 0.497973677332;
    msg.g_max = 0.276441997762;
    msg.g_lat_max = 0.932804729742;
    msg.rpm_min = 0.95553707411;
    msg.rpm_max = 0.700059212347;
    msg.rpm_rate_max = 0.400005509531;

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
    msg.setTimeStamp(0.897878612631);
    msg.setSource(63994U);
    msg.setSourceEntity(170U);
    msg.setDestination(1797U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.799241919819);
    msg.setSource(34403U);
    msg.setSourceEntity(149U);
    msg.setDestination(21303U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.400810321925);
    msg.setSource(20132U);
    msg.setSourceEntity(119U);
    msg.setDestination(32421U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.378937365539);
    msg.setSource(43346U);
    msg.setSourceEntity(126U);
    msg.setDestination(42717U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.00182774300806;
    msg.lon = 0.237435062598;
    msg.height = 0.266788510728;
    msg.x = 0.197429757529;
    msg.y = 0.758047414822;
    msg.z = 0.179638966102;
    msg.phi = 0.0449236882895;
    msg.theta = 0.296011717406;
    msg.psi = 0.967093177101;
    msg.u = 0.931627457973;
    msg.v = 0.552268148062;
    msg.w = 0.677882470373;
    msg.p = 0.0831041765421;
    msg.q = 0.0175531188538;
    msg.r = 0.0969166338182;
    msg.svx = 0.730300628964;
    msg.svy = 0.693953183414;
    msg.svz = 0.481835705624;

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
    msg.setTimeStamp(0.977527035439);
    msg.setSource(60175U);
    msg.setSourceEntity(89U);
    msg.setDestination(11523U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.638248360081;
    msg.lon = 0.420042011634;
    msg.height = 0.122492142244;
    msg.x = 0.274297636921;
    msg.y = 0.663732426461;
    msg.z = 0.305692966741;
    msg.phi = 0.12380316686;
    msg.theta = 0.223433614663;
    msg.psi = 0.639414228458;
    msg.u = 0.732375640385;
    msg.v = 0.771597358936;
    msg.w = 0.372859690643;
    msg.p = 0.305797953661;
    msg.q = 0.804192361573;
    msg.r = 0.377067752395;
    msg.svx = 0.47890193759;
    msg.svy = 0.996975632775;
    msg.svz = 0.774568032168;

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
    msg.setTimeStamp(0.0913896799586);
    msg.setSource(33800U);
    msg.setSourceEntity(174U);
    msg.setDestination(37503U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.527487721137;
    msg.lon = 0.680516829903;
    msg.height = 0.103620596981;
    msg.x = 0.494424480957;
    msg.y = 0.0880868866237;
    msg.z = 0.548487698386;
    msg.phi = 0.970872363701;
    msg.theta = 0.810265991104;
    msg.psi = 0.0415551645669;
    msg.u = 0.144582564893;
    msg.v = 0.0269972296157;
    msg.w = 0.934795576492;
    msg.p = 0.546943094294;
    msg.q = 0.61516030596;
    msg.r = 0.583511743688;
    msg.svx = 0.42222539178;
    msg.svy = 0.182843839092;
    msg.svz = 0.517728459853;

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
    msg.setTimeStamp(0.37688899524);
    msg.setSource(57325U);
    msg.setSourceEntity(197U);
    msg.setDestination(46450U);
    msg.setDestinationEntity(230U);
    msg.op = 194U;
    msg.entities.assign("KSKBGANQLRQMWDKRWICSTCCSLCGHBJFWHLKRTYFUTNNNHUULOQDDHOXBMDSYIPAHXCVWOPVJTBWFZNLMUUHRENBIVSNKHVQZWAIGALKQVTHEWOYGZQRIXFPZPDEFEHRMPQMFGE");

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
    msg.setTimeStamp(0.155131678301);
    msg.setSource(61460U);
    msg.setSourceEntity(45U);
    msg.setDestination(23409U);
    msg.setDestinationEntity(19U);
    msg.op = 39U;
    msg.entities.assign("EQSXNGLHFALQPJLFNSKEDPZRZMSVNXJUSGZPNRVURRQKWARTQPDVYHUGVPEMCLZVLDZKRNZHYUFESHOIXKQCBMYCPIATDLYSBWHOADTGELSBBKNPRMUWNGUHBVQRECIICOFVLBTOITPITYICXRZFDYHMEMYJEUJZXJKDKGTYAWBQXEOAWYGNZZNXXEIKCAOLBKJABOPDTHUCISCLURHSIMFGWWXFJCAVOYMHFGVQTVWDPNQMDFAFOS");

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
    msg.setTimeStamp(0.582752358775);
    msg.setSource(32844U);
    msg.setSourceEntity(8U);
    msg.setDestination(13754U);
    msg.setDestinationEntity(78U);
    msg.op = 34U;
    msg.entities.assign("VVMKAUOUWSZLGFQKIDXQATLAOZRGPNOVBQEISUPAFGUTEQDRLWZYFZAKJTMCPKSYHDQLCZRJVONUSACWMQOBPLNGXHJWFQBWICJEMURIZWYHVQHOMVBGJOGNFPFXYBPJATPRXSNHPSHEEDIEMLVNAWTDORUXJCOL");

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
    msg.setTimeStamp(0.814870489981);
    msg.setSource(12457U);
    msg.setSourceEntity(186U);
    msg.setDestination(22275U);
    msg.setDestinationEntity(20U);
    msg.type = 92U;
    msg.speed = 4041U;
    const char tmp_msg_0[] = {60, 50, 68, -96, -45, 45, -41, -49, -70, 6, -106, -52, 90, 81, 6, -89, -69, -76, 10, 9, -118, -73, 78, 0, -5, -11, 103, 22, 120, 36, -69, 55, 75, -74, -34, 94, 1, -57, 45, 85, 63, -110, -115, -33, 72, 118, 74, -11, -108, 86, -99, 15, 87, -54, -80, 48, 15, -12, -98, -111, -19, 36, -3, 71, 23, 36, -56, -120, 120, -83, 76, 53, 12, -43, -32, -90, -123, 71, 12, -65, 57, 103, -3, 115, 74, -62, -64, 90, -89, 100, -6};
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
    msg.setTimeStamp(0.167100351798);
    msg.setSource(46986U);
    msg.setSourceEntity(9U);
    msg.setDestination(42200U);
    msg.setDestinationEntity(40U);
    msg.type = 63U;
    msg.speed = 42454U;
    const char tmp_msg_0[] = {54, 61, 46, -9, -88, 90, -52, -22, -98, 118, 58, -74, -19, -106, 53, -68, 32, -39, -54, -46, -5, 73, -16, -54, -28, -41, -30, -124, 29, 78, -82, -84, -48, -124, -93, 53, 79, 61, 49, 73, -114, 22, -64, 79, -4, -63, -27, -121, -79, 55, 84, -34, 39, -17, 1, 122, -112, 32, 31, -61, -89, -87, 40, 8, 93, -1, 81, 119, 40, 76, -47, -118, -126, 1, 54, -120, -80, 27, -51, -55, 28, -23, 100, 76, -27, -64, 36, 89, -74, 73, -94, 2, -17, 36, 98, -7, -108, -110, -24, 104, -66, -30, 16, -12, -21, 31, 71, -97, 96, 65, 65, 75, 91, -99, -7, -20, 123, -104, 97, -120, 45, 66, 73, -16, -37, -8, -56, -39, 63, 102, 124, 7, 65, -35};
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
    msg.setTimeStamp(0.0141940807238);
    msg.setSource(5173U);
    msg.setSourceEntity(89U);
    msg.setDestination(42046U);
    msg.setDestinationEntity(38U);
    msg.type = 183U;
    msg.speed = 59431U;
    const char tmp_msg_0[] = {-19, 81, 123, -17, 61, 93, -61, 116, 38, -102, 116, -84, -104, 84, 35, 112, -17, 85, 66, -67, -96, 88, -70, -21, 37, 39, -2, 113, 53, 80, 38, 77, 15, -18, 107, -33, -78, 12, 21, 73, 56, 85, 38, 125, -52, -38, 73, -44, 105, 26, -9, 72, 73, -94, -108, -38, -18, -112, -32, 123, 50, 72, 56, 118, 70, 15, -109, -50, 89, 62, 83, 14, 67, -50, -106, 56, -17, -36, -20, -117, -82, -41, -108, -112, 14, 122, -62, -42, -78, -106, 110, 88, -22, 40, 122, -28, 61, 37, 95, -114, -92, 58, -52, 8, -20, 102, 59, 2, -44, -11, -35, 112, 5, -37, -34, 23, 42, -59, -102, 8, -22, -78, 35, -6, -118, 104, -15, 116, -51, -50, -42, 1, -15, -86, 77, 107, 34, 77, 54, 114, 37, -125, -10, 126, -122, 3, -91, -72, 110, -65, 82, 101, 77, -46, -88, 82, 30, 2, -69};
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
    msg.setTimeStamp(0.0118906907423);
    msg.setSource(34854U);
    msg.setSourceEntity(249U);
    msg.setDestination(24068U);
    msg.setDestinationEntity(175U);
    msg.op = 236U;
    msg.tas2acc_pgain = 0.260153882511;
    msg.bank2p_pgain = 0.430991941752;

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
    msg.setTimeStamp(0.688668772113);
    msg.setSource(2131U);
    msg.setSourceEntity(33U);
    msg.setDestination(56933U);
    msg.setDestinationEntity(157U);
    msg.op = 184U;
    msg.tas2acc_pgain = 0.555129090642;
    msg.bank2p_pgain = 0.786668897222;

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
    msg.setTimeStamp(0.791101384412);
    msg.setSource(43222U);
    msg.setSourceEntity(125U);
    msg.setDestination(10066U);
    msg.setDestinationEntity(248U);
    msg.op = 102U;
    msg.tas2acc_pgain = 0.285763685781;
    msg.bank2p_pgain = 0.262932019463;

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
    msg.setTimeStamp(0.660360661707);
    msg.setSource(44617U);
    msg.setSourceEntity(216U);
    msg.setDestination(39958U);
    msg.setDestinationEntity(254U);
    msg.available = 3511339716U;
    msg.value = 111U;

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
    msg.setTimeStamp(0.999638679221);
    msg.setSource(61512U);
    msg.setSourceEntity(99U);
    msg.setDestination(64378U);
    msg.setDestinationEntity(211U);
    msg.available = 1209931147U;
    msg.value = 234U;

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
    msg.setTimeStamp(0.668601090364);
    msg.setSource(44306U);
    msg.setSourceEntity(133U);
    msg.setDestination(33765U);
    msg.setDestinationEntity(145U);
    msg.available = 155562813U;
    msg.value = 211U;

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
    msg.setTimeStamp(0.343301138182);
    msg.setSource(17490U);
    msg.setSourceEntity(125U);
    msg.setDestination(16726U);
    msg.setDestinationEntity(130U);
    msg.op = 200U;
    msg.snapshot.assign("WXWXUYHVAVTJWADFRNHIGJTBVPOTNXNBZFVKZYQRMAQQHMSEERUIYSNEOHZSJKHXVIX");
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.558882685196;
    tmp_msg_0.ch02 = 0.0730191351219;
    tmp_msg_0.ch03 = 0.382846870444;
    tmp_msg_0.ch04 = 0.841598046171;
    tmp_msg_0.ch05 = 0.338054595251;
    tmp_msg_0.ch06 = 0.182477004983;
    tmp_msg_0.ch07 = 0.514897438595;
    tmp_msg_0.ch08 = 0.981957127973;
    tmp_msg_0.ch09 = 0.692435538558;
    tmp_msg_0.ch10 = 0.671032732706;
    tmp_msg_0.ch11 = 0.465443690989;
    tmp_msg_0.ch12 = 0.483922826775;
    tmp_msg_0.ch13 = 0.787594088633;
    tmp_msg_0.ch14 = 0.873645568849;
    tmp_msg_0.ch15 = 0.386524258848;
    tmp_msg_0.ch16 = 0.650472973348;
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
    msg.setTimeStamp(0.391514344067);
    msg.setSource(24426U);
    msg.setSourceEntity(139U);
    msg.setDestination(57084U);
    msg.setDestinationEntity(115U);
    msg.op = 30U;
    msg.snapshot.assign("JPICZCYBAACMXMNZKHWWZFHZCJSUYUDAAKJOZMJGWZMMGPPPFQVPLIHSZUBHGKPYIIBSWCXAHXULFNDXSNYYTTYBNFTCNSTDKOOSGEDZFOQRQUMDPKOKLRLIQHBCHCUTUEOQGOAYQHBGIYWJE");
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 135U;
    tmp_msg_0.plan_id.assign("XNHCKLPMHOVDNKXZOQVZBPHDJZYCVMXTPRSAWHFELUHPQFUPJKVKIISBSIQUSTBNCEYQUCYZRVGLBGTYKHJEFNIHDLQJHIAJOTOORTKRRQAMWIVVLXTLUQREMWBZCBJRTIECFNAZFYAYGANETQCJNO");
    tmp_msg_0.comm_level = 32U;
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
    msg.setTimeStamp(0.485386219341);
    msg.setSource(45705U);
    msg.setSourceEntity(190U);
    msg.setDestination(6454U);
    msg.setDestinationEntity(177U);
    msg.op = 163U;
    msg.snapshot.assign("EICRDILXSYENYIBSU");
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("FKFUSLWCBPBIURVCTNPBVXNJSE");
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
    msg.setTimeStamp(0.690854464332);
    msg.setSource(54518U);
    msg.setSourceEntity(251U);
    msg.setDestination(13917U);
    msg.setDestinationEntity(155U);
    msg.op = 17U;
    msg.name.assign("TZKYUMPVBLNYGCICVJADQWPVRAVQHYWNXLEKNNIHEENDBBPMVIJZLYXOEDYRGPIMIRRDWGSLBTGSLCMCXIJWFHRPQNWUCTQMATUOCGSQAEVWSAJCRWMPULMHEPXIVGQDDDVRDQISSSAOMHPRXJLWZIENNCKJHOCKBLYKZBKFDLGAEGTKFFYXRBSFUKVWIUFUUZFYEBJYK");

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
    msg.setTimeStamp(0.4642875243);
    msg.setSource(57333U);
    msg.setSourceEntity(68U);
    msg.setDestination(9524U);
    msg.setDestinationEntity(109U);
    msg.op = 238U;
    msg.name.assign("HZIQADCIFSAJXVOUNPGTDCHORUVCHMXOMBLBSQFEHNSQPFWFYHPVCRPMVBOXUWPCQYBRLVZIPIGGLSEOFEKAWJPGRKXDJFVHTKZFCVKOWXNASQYVNGWRQKWUKTZLZLDLJNUQFIFBKYBCUIIYHLGTYZIPMCUMOEXRBDYZUAMUHKEJJTLANWAIPFRSITDOMNZBDXLNJSAGYCXNZJHGDWDMQTGVNYRCEXBKBSMEDGJVAK");

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
    msg.setTimeStamp(0.888398703318);
    msg.setSource(12461U);
    msg.setSourceEntity(93U);
    msg.setDestination(28741U);
    msg.setDestinationEntity(25U);
    msg.op = 193U;
    msg.name.assign("QYCEOYQVTGDPBMEJWWSZKMLIMHDTAEEJKCRHIDAXVHAJTFLOBBFZONGB");

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
    msg.setTimeStamp(0.354140003095);
    msg.setSource(42376U);
    msg.setSourceEntity(216U);
    msg.setDestination(60044U);
    msg.setDestinationEntity(49U);
    msg.type = 40U;
    msg.htime = 0.890048535339;
    msg.context.assign("BXNCMVTNYZKZZGKVEGFRCNKTLQTFFSFEYNHWOTJMVUJGCAHCZWXECJYGCPXTERHJMNVDWDHDPNPRXLCRZWEDRSPEYOSQBZRH");
    msg.text.assign("VSVBAPFIBEYNRKEQJEJNUZTXQJIOTDPNOOHEDBZHAGURVASEATIGFZSPMYKLMVTCHJQAEDYODIXBWXHXRKWYVTNIWIHFPWHBCTNZZQIWMGCPTCFUUXPJNUOEDHRFSVMCJGBGWMNWGKGZ");

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
    msg.setTimeStamp(0.871834573009);
    msg.setSource(21686U);
    msg.setSourceEntity(95U);
    msg.setDestination(59592U);
    msg.setDestinationEntity(3U);
    msg.type = 53U;
    msg.htime = 0.109350297836;
    msg.context.assign("PEFIGMPRLOQXPHGYLUYJGZTNVMEVJZSYBOARIYEGDUOKSDOWVNEEARPUWKMSTFIZLWRKZ");
    msg.text.assign("CJNIGVKQIWUHNHFKMMOICVKYVHWLYABBSBZEZXOYZFGJQEQQIHJEWLONPPJMKZYNMTSIKTQWBDWXUKDUFNMIGPCZMDREGPWRRSHRVCFBVOMDS");

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
    msg.setTimeStamp(0.0965163582458);
    msg.setSource(47024U);
    msg.setSourceEntity(224U);
    msg.setDestination(7494U);
    msg.setDestinationEntity(147U);
    msg.type = 33U;
    msg.htime = 0.132442000045;
    msg.context.assign("DOYKWYHVAXPCCYJRMZBQINUWYTLPOFVDFDY");
    msg.text.assign("INUQRXLBOFBVDRIQDLFBMMIIXJWNYKJCVZJZNURCAGHBELVYPFRPCLDTJCUSOWACQMZGOPGLOLVBOKFOHZTMYHTGDUEAEHXBWBLBVPKEIEIHQCDZKXKDYZSNEUZVFFD");

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
    msg.setTimeStamp(0.85180077335);
    msg.setSource(47821U);
    msg.setSourceEntity(143U);
    msg.setDestination(575U);
    msg.setDestinationEntity(119U);
    msg.command = 229U;
    msg.htime = 0.147881775872;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 93U;
    tmp_msg_0.htime = 0.30700943979;
    tmp_msg_0.context.assign("TISDQWIBBYOUDBOAVTTJFNDHUCDHJJIRXIHAXRUWNBYHOKVLAIRERIZYGOEEXHMVYIHXOKRUCWGHTE");
    tmp_msg_0.text.assign("IARZKRKUNESMYXPAIMEQAQQZMUSQWPLXDFOZXSSYDNYCWJLWQBTNJLMPDRAZVCLLYWGEROHGCTPFHFPWKOMXUOTJNDBIVWCIRHKFMAZEBOVKEZKMLQXVGPOLUPQFBGZJWHZJCIWVBGUJTDUACENIOZNTBAWUHUYIKQSNMXMUAGFHDCDRRTGJXJIXDCSCVETEBATTQGHVXJFKRYYYQYUHLLTSDPF");
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
    msg.setTimeStamp(0.82077948169);
    msg.setSource(25174U);
    msg.setSourceEntity(100U);
    msg.setDestination(18645U);
    msg.setDestinationEntity(219U);
    msg.command = 59U;
    msg.htime = 0.596808516865;

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
    msg.setTimeStamp(0.166606671952);
    msg.setSource(24532U);
    msg.setSourceEntity(211U);
    msg.setDestination(13928U);
    msg.setDestinationEntity(31U);
    msg.command = 167U;
    msg.htime = 0.655992809675;

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
    msg.setTimeStamp(0.538040926946);
    msg.setSource(12001U);
    msg.setSourceEntity(148U);
    msg.setDestination(52579U);
    msg.setDestinationEntity(120U);
    msg.op = 228U;
    msg.file.assign("VBUJEQRTRGHOZPBLDCEZNNYTVVXPNPWIINWDJIOHMUDLPVGHJBMQWXIAXHFFSEKKTKNORWYZWLSFQZQJHHOXVJRNYYQDBXAMTXZIYUTXUDKHNKYBAFMNOEZOVQWDFLJZPPCSCSMWUVETBKS");

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
    msg.setTimeStamp(0.667890953414);
    msg.setSource(10401U);
    msg.setSourceEntity(189U);
    msg.setDestination(46579U);
    msg.setDestinationEntity(98U);
    msg.op = 202U;
    msg.file.assign("ACKEKMOYISRRKOQOUEW");

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
    msg.setTimeStamp(0.649911325794);
    msg.setSource(13057U);
    msg.setSourceEntity(131U);
    msg.setDestination(25153U);
    msg.setDestinationEntity(245U);
    msg.op = 3U;
    msg.file.assign("JAQHBUUKANGYFRCAZLMZKJBECRMGDZXEKVEEGEGHJPIUELFOYNRDLFJPBBMPLRTUWVYWNGNWKLVWCXVLSEHKISBAUJYMFNPYCRSHUNVTDPYGGIZIEAOOFIBUKVJRYVAFELJWQDWHQCVEXASRIKCS");

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
    msg.setTimeStamp(0.861597312875);
    msg.setSource(44571U);
    msg.setSourceEntity(127U);
    msg.setDestination(8313U);
    msg.setDestinationEntity(11U);
    msg.op = 247U;
    msg.clock = 0.916687026881;
    msg.tz = 103;

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
    msg.setTimeStamp(0.583047007274);
    msg.setSource(29086U);
    msg.setSourceEntity(224U);
    msg.setDestination(41939U);
    msg.setDestinationEntity(38U);
    msg.op = 136U;
    msg.clock = 0.347845473866;
    msg.tz = 16;

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
    msg.setTimeStamp(0.434586361609);
    msg.setSource(54290U);
    msg.setSourceEntity(219U);
    msg.setDestination(43315U);
    msg.setDestinationEntity(35U);
    msg.op = 93U;
    msg.clock = 0.880819666027;
    msg.tz = 17;

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
    msg.setTimeStamp(0.487475520566);
    msg.setSource(15649U);
    msg.setSourceEntity(182U);
    msg.setDestination(30762U);
    msg.setDestinationEntity(31U);
    msg.conductivity = 0.60394731564;
    msg.temperature = 0.271192547234;
    msg.depth = 0.105232361179;

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
    msg.setTimeStamp(0.93905644519);
    msg.setSource(62841U);
    msg.setSourceEntity(205U);
    msg.setDestination(57286U);
    msg.setDestinationEntity(237U);
    msg.conductivity = 0.455900900319;
    msg.temperature = 0.306128976064;
    msg.depth = 0.186458735445;

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
    msg.setTimeStamp(0.070543131525);
    msg.setSource(62455U);
    msg.setSourceEntity(76U);
    msg.setDestination(59732U);
    msg.setDestinationEntity(58U);
    msg.conductivity = 0.394646909778;
    msg.temperature = 0.739016920853;
    msg.depth = 0.888531400753;

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
    msg.setTimeStamp(0.156928383405);
    msg.setSource(45931U);
    msg.setSourceEntity(4U);
    msg.setDestination(57852U);
    msg.setDestinationEntity(139U);
    msg.altitude = 0.789437117644;
    msg.roll = 30484U;
    msg.pitch = 17032U;
    msg.yaw = 3618U;
    msg.speed = 24871;

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
    msg.setTimeStamp(0.642104256029);
    msg.setSource(19001U);
    msg.setSourceEntity(108U);
    msg.setDestination(22745U);
    msg.setDestinationEntity(0U);
    msg.altitude = 0.262889913211;
    msg.roll = 31381U;
    msg.pitch = 54498U;
    msg.yaw = 65086U;
    msg.speed = -174;

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
    msg.setTimeStamp(0.759909684204);
    msg.setSource(61799U);
    msg.setSourceEntity(36U);
    msg.setDestination(40457U);
    msg.setDestinationEntity(252U);
    msg.altitude = 0.840456319159;
    msg.roll = 41701U;
    msg.pitch = 31058U;
    msg.yaw = 33661U;
    msg.speed = 14597;

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
    msg.setTimeStamp(0.166865843106);
    msg.setSource(64819U);
    msg.setSourceEntity(2U);
    msg.setDestination(3076U);
    msg.setDestinationEntity(186U);
    msg.altitude = 0.118844864384;
    msg.width = 0.0203464606402;
    msg.length = 0.157091952387;
    msg.bearing = 0.59862128304;
    msg.pxl = 20912;
    msg.encoding = 180U;
    const char tmp_msg_0[] = {3, -6, 46, 59, -100, 104, 48, -104, -49, 44, -80, 42, -49, -26, -68, -38, 24, -126, -38, -2, 14, 91, -46, -66, 24, 90, 96, 99, 42, -80, 19, -69, 45, -49, 64, -53, 69, -98, -1, -74, -15, 101, -49, 65, -12, 60, 98, 61, -56, 5, 51, -127, -48, 86, -32, 125, 108, 17, -99, 79, -49, 123, 53, -111, -86, 58, -114, -11, -39, 60, -76, -22, -14, 59, -70, 63, -6, -50, -26, -90, 43, 72, 20, 119, -89, -104, 90, -4, -37, -61, -43, -63, -52, -63, -104, -77, -71, -57, -96, -13, 87, 97, -51, 25, 105, -32, 62, 84, 114, -26, 17, 17, -24, 69, -38, -117, 3, 57, 111, 76, 0, -58, -91, 42, -128, -107, -23, -69, -118, 39, -48, 45, -92, 96, 94, -93, -91, 81, -2, 87, 40, -85, -20, 6, -50, -78, 60, -126, -109, -124, -6, 12, 105, 59};
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
    msg.setTimeStamp(0.1491222552);
    msg.setSource(34318U);
    msg.setSourceEntity(121U);
    msg.setDestination(22025U);
    msg.setDestinationEntity(218U);
    msg.altitude = 0.264727179362;
    msg.width = 0.13150366818;
    msg.length = 0.288736561441;
    msg.bearing = 0.161925494249;
    msg.pxl = -15570;
    msg.encoding = 68U;
    const char tmp_msg_0[] = {18, 7, -27, -68, -77, -52, -109, -46, 35, 87, 78, 3, 89, 97, 24, -35, 40, 34, -9, -118, 45, 80, -77, 8, 26, -122, -42, 96, 60, 105, 104, -113, -106, -72, 35, -99, 49, -117, 108, -4, -128, 46, 29, 39, 47, -119, -95, 16, -78, -44, 66, -48, 81, 76, 59, 117, -26, 107, -79, -112, 97, -59, -122, 11, -101, -16, -87, -110, -40, 116, 8, 63, -11, -44, -66, 56, 74, -70, 93, -11, -113, 40, 126, -81, 82, 70, 74, 83, -84, -35, -3, 74, 98, -21, 1, 66, -42, -51, 1, 98, 116, -120, -98, -81, -97, -11, 69, -26};
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
    msg.setTimeStamp(0.557100685975);
    msg.setSource(31365U);
    msg.setSourceEntity(149U);
    msg.setDestination(52990U);
    msg.setDestinationEntity(73U);
    msg.altitude = 0.129510992019;
    msg.width = 0.57527444037;
    msg.length = 0.180039973944;
    msg.bearing = 0.408104298427;
    msg.pxl = -7457;
    msg.encoding = 4U;
    const char tmp_msg_0[] = {58, -115, -37, -104, -123, 80, 16, -121, 126, -11, -8, -51, 13, -128, -86, 107, -20, 45, 91, 45, 101, -68, -32, -127, 14, 15, -97, -126, 61, 115, -64, 48, 50, -25, 106, -59, 20, 67, 43, -69, -121, 25, -21, 14, 107, 61, 22, -79, 75, -57, -27, 17, 40, -109, 115, -8, -73, 80, -14, -49, 116, -81, -81, -73, 78, -128, 115, 113, 8, 104, 67, 73, 0, 7, -112, 94, 37, -88, -70, -48, 112, -118, 18, 28, 51, 118, 109, -98, -3, -102, -40, -99, -14, -110, -108, -102, 95, -79, -38, -66, 79, -45, -6, -126, 59, -90, -75, -99, -90, 60, -64, -71, 67, 21, 44, -26, -107, 42, 99, -30, -86, 24, -111, -66, 34, -83, -58, -94, -22, 81, -54, 70, 45, -80, -102, 40, 12, -40, -106, 63, 58, 59, -35, 96, 30, -63, 44, -124, -55, 48, -28, 44, 15, 40, -79, 7, 74, -5, 38, -68, -28, 45, -123, -79, 65, -66, -61, 118, -13, -72, -65, 12, -56, -35, 12, 113, 58, -6, 66, 114, -87, -42, 34, 24, -99, 41, -1, -56, 44, 97, -56, 87, 110, -100, -111, 34, -18, -49, -63, 13, 84, 26, 10, -39, -40, 56, 29, -56, -24, 124, 61};
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
    msg.setTimeStamp(0.38763939652);
    msg.setSource(6477U);
    msg.setSourceEntity(27U);
    msg.setDestination(635U);
    msg.setDestinationEntity(153U);
    msg.text.assign("EPCFHKZIVRIECLRJXEIIDTAJVNBTGZDMIKWNGZVJROEQVHWJXUCKXMZDHUSQBGHADMAFOTYPRVTPCXMFSAGFDNYHSMCABFLZQKDEGQNHTKSBEAUNICVHLOYHWUDGIMDVWCKOSLENMEPOOVZXFLXOQXNDXZBPGHQYPIYUYZEQFYKILUTLJWKUPTRASLSMBLTNWMGHUSKC");
    msg.type = 189U;

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
    msg.setTimeStamp(0.767328578937);
    msg.setSource(10651U);
    msg.setSourceEntity(106U);
    msg.setDestination(55716U);
    msg.setDestinationEntity(53U);
    msg.text.assign("JEZGGWSSRYNMYKYVTIPXKWARPMUWIHHQYHZRGVQPMPJDEMBBCATSWFNNMDCOZRNNFVAJHBUSJCCLOBPGPAEQQPZGZDNOXKCZDJMGQEQJVNFGXPEYFRWBMIFTJENBSCOICWKXHJUWSVTAXOULQAXRUYLXTIBLX");
    msg.type = 219U;

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
    msg.setTimeStamp(0.48881977672);
    msg.setSource(4923U);
    msg.setSourceEntity(138U);
    msg.setDestination(40546U);
    msg.setDestinationEntity(6U);
    msg.text.assign("QLBKSNMIGQKAKTYIVDOFRMOWWHXBJCSLMMFDLYDWQSDDNIDIYTXNAAQSRENU");
    msg.type = 34U;

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
    msg.setTimeStamp(0.131318569366);
    msg.setSource(13578U);
    msg.setSourceEntity(228U);
    msg.setDestination(31747U);
    msg.setDestinationEntity(107U);
    msg.parameter = 2U;
    msg.numsamples = 85U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 19012U;
    tmp_msg_0.avg = 0.175633492592;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.329736141049;
    msg.lon = 0.602243694952;

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
    msg.setTimeStamp(0.563817721567);
    msg.setSource(16309U);
    msg.setSourceEntity(155U);
    msg.setDestination(25146U);
    msg.setDestinationEntity(6U);
    msg.parameter = 59U;
    msg.numsamples = 71U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 33347U;
    tmp_msg_0.avg = 0.0342708751912;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.334591719914;
    msg.lon = 0.951779145157;

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
    msg.setTimeStamp(0.389109988897);
    msg.setSource(42280U);
    msg.setSourceEntity(113U);
    msg.setDestination(8600U);
    msg.setDestinationEntity(106U);
    msg.parameter = 181U;
    msg.numsamples = 127U;
    msg.lat = 0.358225254731;
    msg.lon = 0.677758970446;

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
    msg.setTimeStamp(0.5028472189);
    msg.setSource(46591U);
    msg.setSourceEntity(181U);
    msg.setDestination(33461U);
    msg.setDestinationEntity(192U);
    msg.depth = 44544U;
    msg.avg = 0.339600215711;

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
    msg.setTimeStamp(0.81247300072);
    msg.setSource(31450U);
    msg.setSourceEntity(179U);
    msg.setDestination(23546U);
    msg.setDestinationEntity(231U);
    msg.depth = 18245U;
    msg.avg = 0.386318386228;

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
    msg.setTimeStamp(0.35371177062);
    msg.setSource(57415U);
    msg.setSourceEntity(175U);
    msg.setDestination(58806U);
    msg.setDestinationEntity(59U);
    msg.depth = 10694U;
    msg.avg = 0.989473445883;

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
    msg.setTimeStamp(0.878000842161);
    msg.setSource(9256U);
    msg.setSourceEntity(143U);
    msg.setDestination(21699U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.190077915654);
    msg.setSource(170U);
    msg.setSourceEntity(89U);
    msg.setDestination(1561U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.377172877632);
    msg.setSource(2262U);
    msg.setSourceEntity(194U);
    msg.setDestination(24416U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.970474041403);
    msg.setSource(12913U);
    msg.setSourceEntity(50U);
    msg.setDestination(19786U);
    msg.setDestinationEntity(254U);
    msg.sys_name.assign("KFNFYXGTMPAMYUWWNDMWOGBEOCDVXSACOGWAQPWSSMLTCMJIIWQVMZNRMAKPNJZDKSQOOFOPHAPZOEBYZTHKJAINRVMDFDOSDEQGNNRCJALLJPKXVYUQUEAHTGKSLJIQVLAVEBEXXQWGCFHDJUXZBXPZOIQMTPYLNKGHDYWYXII");
    msg.sys_type = 139U;
    msg.owner = 60465U;
    msg.lat = 0.75435481118;
    msg.lon = 0.108895238118;
    msg.height = 0.148952942713;
    msg.services.assign("ZMTDAZREGEOGXUIEHSBGVGWWHPDZBQHXXBMTNWTJRXAAHKFAIQOCPSNHZEIGDNPAWUBHJLKTRHTYGUVXXIHBQJWVOCBOUPSRNAOJMIGCKQNFCFJMFMLOJSPZMGDXVCQYFYKSKDWCQTYFNJFJHVCBPAZHQPXUPDDVRLGLCOKDIRSJFDLKCSPYMLLSZUWZYORPAVUWKIRUXLMATIQAFITDROEYENSBYEYTEYFVNNMRGWUMVKXZIE");

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
    msg.setTimeStamp(0.634935916172);
    msg.setSource(51934U);
    msg.setSourceEntity(14U);
    msg.setDestination(20176U);
    msg.setDestinationEntity(71U);
    msg.sys_name.assign("YICGOWAQETGMNYFVCOPOCMFYAZFTHDVJOPNNUMHRHROQDJQQPCAHWWWRJHBJJYVFZRABDOBUIZNZLYLIHEAMRUDBGTITVFEZRQVU");
    msg.sys_type = 248U;
    msg.owner = 36796U;
    msg.lat = 0.989083649842;
    msg.lon = 0.870531493714;
    msg.height = 0.291587371936;
    msg.services.assign("ILWFYFNUVSQDRSAKMOXWDMHLDDQOROCZSCPYOUHGKQVOJMSCROAVEMQFNV");

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
    msg.setTimeStamp(0.333365504348);
    msg.setSource(35513U);
    msg.setSourceEntity(3U);
    msg.setDestination(60625U);
    msg.setDestinationEntity(15U);
    msg.sys_name.assign("SFBUZGHNQIPNODPREYPDGHHVFGPQJYUHMNFVFTDBSOJIFUABPEXPWBIZKMNDFDSHZZKUGHXBOLSLHPTRMJBBDZWQCSIMJXLDUXHNWUTKTACEOWQGNXCIDACTROXWNQVOAVISYAFQHNGUIZMDEEMWKAYANGLKOTXXIRMFVEROQYBBLJCCQHACPYXRPVE");
    msg.sys_type = 233U;
    msg.owner = 4505U;
    msg.lat = 0.893581844633;
    msg.lon = 0.245929276668;
    msg.height = 0.407177267895;
    msg.services.assign("LKNSNSBZWLAFWFONAMTNWKRQLVTSQKHKOIGCBIIEDTYIVZUOFLIBXIRXMHQLWHVWQXBGDYCUWPF");

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
    msg.setTimeStamp(0.177240589901);
    msg.setSource(53684U);
    msg.setSourceEntity(58U);
    msg.setDestination(32893U);
    msg.setDestinationEntity(39U);
    msg.service.assign("YEFEOJUKAEFHLPMSZCOQALKUMVNRRGEYTJDINUDLEHOOJGWFWBMVRORFRDAZLOMUPSMXNFHINIXVWRJDXUDDHKAIJ");
    msg.service_type = 100U;

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
    msg.setTimeStamp(0.340563236362);
    msg.setSource(36688U);
    msg.setSourceEntity(205U);
    msg.setDestination(472U);
    msg.setDestinationEntity(180U);
    msg.service.assign("JZCCUUCDKJIMIXLCVRZZOHPHMIKEDXCGUMQFTMPLAAWVCTEDJKLFOQRRNYLCVKXBKUMPDHXBXEUSRPLBL");
    msg.service_type = 101U;

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
    msg.setTimeStamp(0.122913394652);
    msg.setSource(32848U);
    msg.setSourceEntity(64U);
    msg.setDestination(42349U);
    msg.setDestinationEntity(110U);
    msg.service.assign("MBGAPHWVTAIGORFWJQDSJOJUZ");
    msg.service_type = 63U;

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
    msg.setTimeStamp(0.473887495533);
    msg.setSource(15773U);
    msg.setSourceEntity(163U);
    msg.setDestination(46227U);
    msg.setDestinationEntity(40U);
    msg.value = 0.619058119182;

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
    msg.setTimeStamp(0.990403036062);
    msg.setSource(40876U);
    msg.setSourceEntity(75U);
    msg.setDestination(24603U);
    msg.setDestinationEntity(51U);
    msg.value = 0.353570470041;

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
    msg.setTimeStamp(0.789362798555);
    msg.setSource(391U);
    msg.setSourceEntity(81U);
    msg.setDestination(1392U);
    msg.setDestinationEntity(213U);
    msg.value = 0.444843021646;

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
    msg.setTimeStamp(0.224215220435);
    msg.setSource(38090U);
    msg.setSourceEntity(196U);
    msg.setDestination(57963U);
    msg.setDestinationEntity(198U);
    msg.value = 0.513407169305;

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
    msg.setTimeStamp(0.118344990049);
    msg.setSource(34820U);
    msg.setSourceEntity(45U);
    msg.setDestination(33428U);
    msg.setDestinationEntity(200U);
    msg.value = 0.100271046317;

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
    msg.setTimeStamp(0.602474424842);
    msg.setSource(40542U);
    msg.setSourceEntity(96U);
    msg.setDestination(37192U);
    msg.setDestinationEntity(10U);
    msg.value = 0.0334612113516;

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
    msg.setTimeStamp(0.28872172177);
    msg.setSource(12053U);
    msg.setSourceEntity(31U);
    msg.setDestination(53761U);
    msg.setDestinationEntity(200U);
    msg.value = 0.942091699773;

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
    msg.setTimeStamp(0.38296654146);
    msg.setSource(38862U);
    msg.setSourceEntity(42U);
    msg.setDestination(5025U);
    msg.setDestinationEntity(116U);
    msg.value = 0.00877264552311;

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
    msg.setTimeStamp(0.233822579008);
    msg.setSource(45039U);
    msg.setSourceEntity(237U);
    msg.setDestination(37838U);
    msg.setDestinationEntity(59U);
    msg.value = 0.120165757536;

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
    msg.setTimeStamp(0.868245884562);
    msg.setSource(262U);
    msg.setSourceEntity(181U);
    msg.setDestination(62287U);
    msg.setDestinationEntity(238U);
    msg.number.assign("MBUKGIHWOMWGOPVOHVNCCGZCWYNAJPRVQSVGWFTUDQBXXUTAWWMNGTGJBBICZPSOLYXQLPWEQDNDKEROEMXECW");
    msg.timeout = 5794U;
    msg.contents.assign("UCCFIGERKJHEKUTAZCTXURNQBRVFJWCOWUIXKELJWWMZODMDSGAHSOWUASDAMJLEOZPTBINYGXFQPIKDZGQGVLHLYFHDNPQWNXZRDSQIDBSHIVYRTATXZBJCOSW");

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
    msg.setTimeStamp(0.127839467006);
    msg.setSource(34606U);
    msg.setSourceEntity(24U);
    msg.setDestination(17434U);
    msg.setDestinationEntity(188U);
    msg.number.assign("XNOBZSRNEL");
    msg.timeout = 60409U;
    msg.contents.assign("OAPOZGCVRKRLUTDZYNGAPBUWURNVUNZQGKBEASPFCBVTMQYEVQMZXAAMZTTBUDLDYJBIFIOCMQLPHGJDYFOGTLSCDZBAOHJCGQVNXDKWHNXAHDTPCTCEVYKSXPPXRWEBFRIHSGMMNKXHESUYFFOSXHLWGKJTB");

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
    msg.setTimeStamp(0.24709819004);
    msg.setSource(50446U);
    msg.setSourceEntity(105U);
    msg.setDestination(29254U);
    msg.setDestinationEntity(136U);
    msg.number.assign("CQCRZNAFXHCYPLQBTLGIYWRYGNWELHGMORKCZSITSOFCKXMXDGPPRJOPVSAPGFATUYJHNKOJFOGIADSMMFCVEQHXMJLFDSZGFNGBMKWACNRYCKYXTBXZFXVHARPHWQTEIKADQJYJRDSYAQVMLHKZUHLEZLWTUDNVPDDXIBBHJLOQPWHKUL");
    msg.timeout = 20586U;
    msg.contents.assign("JDJUSYCFSNHFDZOGEKTOTYQXXMWIWDJYBMKBEZTHMPNYRQLFTSCLZHRDSONNPNHWKQWUDPJBVATGRFLLRDPZRKWELRDNAAZXRFPCLDIQEOMIIMKFI");

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
    msg.setTimeStamp(0.716292266528);
    msg.setSource(50111U);
    msg.setSourceEntity(229U);
    msg.setDestination(54096U);
    msg.setDestinationEntity(218U);
    msg.seq = 3374402049U;
    msg.destination.assign("XSUAXPFXBMHDTUSBPYBCNHRQLVDDDMNZEGLONOGGDCQSMSKZVSMFSGYIKXRQKJOKSGOCQBOVUNSUMNKTPPEEYAFERJYWRBKJXHMRFCDVRVEUUQHOPGTVRTJRGNIWZCPBAICFCRUAJAYYAHNHEJBHKGLRQQTFWWEQDVCFKFOXXLJTTUBZNEAL");
    msg.timeout = 838U;
    const char tmp_msg_0[] = {-72, 30, 14, 111, 20, -22, -83, 120, 119, 13, -108, 69, -126, 7, -67, 74, -108, 9, 26, 39, 27, 124, -25, -32, -115, -22, 31, -114, 69, -111, -7, 90, -71, 119, -117, -97, 58, -42, 80, -69, 72, 109, -125, -112, -120, 7, -53, -109, -112, 34, 74, -106, -22, 5, -72, -105, 81, 21, -3, -6, 58, 77, -25, 111, 73, -48, 9, -100, 73, 60, 80, 125, 12, 56, 36, 120, -56, 11, 110, 54, -72, -2, 95, -60, 89, 21, 89, -37, 36, -28, 74, -48, 85, -128, 94, 18, 85, 105, 49, 4, 118, -77, 118, -26, 24, -75, 40, -18, -84, -93, 101, 82, -57, 29, -52, -100, -117, 52, -6, -99, 38, 78, 66, -10, 22, -97, 112, 60, 33, -69, 2, -116, 100, -99, 41, 36, 14, 5, -11, -24, 69, 92, -64, -110, 34, 22, -60, -112, -26, -116, 1, 71, 69, -54, 25, -61, 86, -20, 119, -22, -111, -14, 36, 41, -101, 19, -42, -47, -2, 84, 119, -49, -74, -53, -125, -118, -16, -58, 20, 66, 122, 16, -11, -40, 109, -59, 104, -32, 15, -100, -74, 82, 77, -70, -66, -116, -86, 90, -39, 118, 22, -12, -43, 47, -93, -116, 44, 55, -93, 74, 89, 115, 60, -59, 82, 100, 12, -71, 55, -93, 2, -43, -103, 6, -105, -86, -40, 117, 120, 74, -108, 94, 66, -15, 15, 60, -74, -116, -77, 79, 105, -17, -128, 52, 58};
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
    msg.setTimeStamp(0.287637372978);
    msg.setSource(36249U);
    msg.setSourceEntity(249U);
    msg.setDestination(41000U);
    msg.setDestinationEntity(17U);
    msg.seq = 4260009194U;
    msg.destination.assign("IPEMKKQZCXYPOOQAMJOGONQSIDQNFROUAJIXYHFGYBNGRSTVOUPKQIIBTRIVHABRCACZSFMBAU");
    msg.timeout = 12488U;
    const char tmp_msg_0[] = {113, 84, 54, -95, -45, -100, -1, 65, -105, 2, 66, -71, 6, -15, -4, -104, 75, -55, 71, -120, 104, 73, -69, -27, -81, -17, -79, 30, -59, -9, 11, 3, 122, 109, -42, -32, 85, -11, 29, 61, -81, -94, 46, -26, -65, -43, -121, -27, 97, 106, -126, 64, -101, 108, -7, -74, -10, 82, -100, -12, 64, -79, -63, 81, 90, -98, -64, 83, -67, -56, 55, -7, 75, -39, 34, 24, 94, 94, -23, 96, -84, -57, 47, 13, 116, -99, -50, -54, -96, 98, 29, -21, -40, 111, 126, -43, -14, 54, -60, -14, 107, 39, 90, 115, -112, -55, 12, -8, 82, -111, -62, 83, 50, 32, 56, 76, 81, -43, 81, 120, 103, 121, 3, -88, 120, -26, -85, 92, 12, 108, -23, -113, -58, -29, -8, 34, -105, -50, 35, 4, 113, -68, 125, 71, -58, -88, 38, -50, 4, -41, -87, 45, -4, -43, -105, 90, 75, -99, 76, -66, 61, -62, -126, -61, -91, 23, 4, -66, -42, 33, -45, -112, 58, -88, -64, 108, 32, 1, 102, -100, 53, -106, 81, 92, -62, 33, 53, 121, 112, 35, 67, -18, -7, -45, 53, -21, -7, 108, 14, 101, 120, -31, 99, -12, -17, 121, 46, -67, -115, -15, 33, 79, -121, 124, 11, 42, 100, 124, 11, 10, 113, -51, -59, 97, -124, -82, -74, -114, -63, -83, -83, 5, -71, 90, -100, 45, -78, -114, 85, -128, 71, -96, 110, -76, 82, 122, -16, -89, 2, 46};
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
    msg.setTimeStamp(0.668284425805);
    msg.setSource(45989U);
    msg.setSourceEntity(34U);
    msg.setDestination(30275U);
    msg.setDestinationEntity(100U);
    msg.seq = 2046372915U;
    msg.destination.assign("EGNWVFTCEWKPZEANWFSIBYVHGJGBBZRBXE");
    msg.timeout = 53406U;
    const char tmp_msg_0[] = {-17, 55, 99, -2, 62, -41, 42, 64, -51, -76, -81, -48, 121, -106, -48, -28, 4, -107, -127, -37, 57, -8, -30, 60, -53, -13, 1, -119, -27, -29, -105, 77, -90, -1, 39, -71, -75, 83, 4, -59, 9, -106, 12, 79, -103, -9, 31, 0, 122, 5, -23, -32, -26, -21, 32, 122, -81, 28, 4, 56, 75, -28, 102, 37, 24, 67, -54, 61, 63, 111, -23, -68, -75, 19, 69, 17, 45, -51, 34, 25, 28, 109, -22, 74, 111, -53, -5, 28, -46, -92, -87, 40, 50, 86, -84, 116, -58, -123, 54, 51, 39, -61, -45, -75, 7, 112, 2, 55, 34, -38, 91, -70, 108, -94, 26, -24, 55, 40, 48, -88, -100, 64, -56, -8, 33, 61, 11, 78, 124, -48, 0, -66, 121, 106, -84, -13, 70, 55, -29, 107, -121, 35, 21, 14, 85, 126, -6, 67, -75, -44, -81, 25, -56, 3, 126, -92, 95, -102, 110, 47, 125, -83, -8, -17, 37, -60, -78, -35, -27, 42, -107, -122, 120, 4, 42, 11, -110, -22, 29, -55};
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
    msg.setTimeStamp(0.995438529953);
    msg.setSource(3609U);
    msg.setSourceEntity(104U);
    msg.setDestination(61692U);
    msg.setDestinationEntity(44U);
    msg.source.assign("BJRMVQTDUGEIJZOFQIUAAXWEPBDXGCCRLKNJMJYVHLQVPTKYNLTCYIQLCYCQDGLDRTWXNXNVYHTHJINMSIJTQRENRARWOOAYLXFFWFAWKZGZUAZTFHBVJLQSCENCFXMFZEOKJUSUUTXZEEQQNBMVSPNKGGKOQXTFSUGPAZITMHDXIWOBWBPDJFPZKWRVE");
    const char tmp_msg_0[] = {-90, 39, -3, -96, -109, -60, 124, 41, -51, 14, 109, -13, 32, -7, -46, -128, 60, 104, -70, -5, 80, 8, -28, 53, 38, 51, -60, 114, -98, 106, -111, 54, -69, -56, -22, 116, -29, -124, -34, 43, 82, 12, -77, -118, 92, -46, 22, -32, 25, -26, 93, -57, 0, 87, 120, -78, 114, -10, -42, -126, -14, -23, -24, -84, 117, 12, 40, 74, -27, -47, 68, -14, 118, -21, -114, 46, 17, -53, -120, -54, -84, -50, 31, -72, 111, 69, -14, -74, 65, 112, 21, -36, 28, -120, -57, -23, 12, 96, -40, 56, -85, 113, 62, -87, 33, -63, 12, -66, -96, -48, 12, -60, 59, -71, 55, -35, -45, -95, -7, 30, 58, -20, -8, 107, -5, 96, 62, 118, 1, 119, 124, -40, -94, -36, 2, -123, 86, 85, -121, 62, -18, -94, -79, -77, -55, -127, -33, 73, 7, 59, -115, 100, -62, -29, 45, -27, 44, 73, 126, -5, 0, -26, 110, -67, 28, 41, 85, -77, 99, 83, -71, 86, -74, 80, -53, 102, -117, -60, 123, 22, -127, -107, -56, -59, -119, 22, -44, 57, -62, -32, 16, -75, -12, -123};
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
    msg.setTimeStamp(0.158789741779);
    msg.setSource(39874U);
    msg.setSourceEntity(217U);
    msg.setDestination(15509U);
    msg.setDestinationEntity(160U);
    msg.source.assign("GEJOWGEORPQQGC");
    const char tmp_msg_0[] = {-10, -2, 0, 95, 45, -40, -5, 43, 75, -103, 94, 73, 39, 109, 93, 100, 57, -110, 6, 101, 126, -13, 90, 122, 122, -14, -40, -5, -76, -15, 29, 4, 23, -38, -121, -11, 121, 47, 28, 96, -78, 67, 101, -80, 77, -61, 87, -51, 38, 83, -48, 24, -53, -37, -111, 5, 84, 93, -28, 71, -11, 114, 47, 122, -79, -65, 101, 97, 98, -40, 93, 56, 21, 65, 58, -26, 95, 81, 26, 27, 58, 119, 24, 120, -27, 102, -35, 60, -88, 19, -60, 40, -87, -34, 88, 77, -43, 78, 56, 43, 6, 88, 6, 83, 58, -28, 70, -117, -93, -49, -25, 66, 92, 93, -66, 69, 53, -30, 89, 35, -113, -48, -27, -2, -27, -90, 109, -121, -114, -47, -61, 86, -86, 77, -89, 53, -48, -61, 94, 43, -127, -36, -30, -59, -35, -34, -31, -63, -27, -126, 125, -46, -4};
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
    msg.setTimeStamp(0.0239997044255);
    msg.setSource(20502U);
    msg.setSourceEntity(248U);
    msg.setDestination(5984U);
    msg.setDestinationEntity(6U);
    msg.source.assign("BPFYEZRJPPCBYFNNHQRSDDGLPNHHSFOFPPAEVOZKXPIEDR");
    const char tmp_msg_0[] = {122, -92, 82, 67, -4, -14, 94, 103, 42, -102, 98, -29, -68, 92, 43, -8, 96, 44, 50, 114, -48, -16, -102, -126, -1, -47, -12, 85, -57, -119, 121, 90, 44, -3, 0, -54, 56, -33, 41, -121, -80, -25, 15, -26, -55, 50, 99, 44, -14, 56, 122, -59, -35, 88, 1, 51, 110, 15, 45, -100, -101, -75, 68, 98, -75, -39, -41, -79, 34, 61, -87, 2, -93, 87, 14, 28, 104, -80, -108, 80, 20, -105, 123, -121, -126, 120, -6, -115, -32, 39, -29, -32, -104, 88, -53, -18, -39, 67, -12, -65, 102, -93, -65, -70, 11, 108, 104, 119, -79, -55, 94, -17, 9, -96, 57, -23, -8, -119, 83, -57, -58, 56, 0, -59, 5, -22, -18, -74, -117, 34, -110, -71, -25, 97, 80, -86, -68, -87, -102, 76, 105, 44, 125, -5, -101, -46, 62, -2, 85, 56, -13, -39, 68, -76, -102, -70, 70, 117, -97, 109, 48, -21, -13, -64, 105, -48, -106, -57, -13, 10, -98, -127, 77, 102, -1, -65, 4, -39, -99, -122, -92, -59, -112, -2, -54, -110, -82, 69, 121, -32, -100, 61, 115, 28, 65, 58, -43, -71, -41, -119, -53, 68, -22, -72, 105, -113, -32, -47, -89, 4, -47, -85, 78, -77, 116, -14, 26, 94};
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
    msg.setTimeStamp(0.93447768804);
    msg.setSource(43230U);
    msg.setSourceEntity(108U);
    msg.setDestination(60302U);
    msg.setDestinationEntity(254U);
    msg.seq = 861110237U;
    msg.state = 251U;
    msg.error.assign("DZGCEWNKIYGUHKEHMOAQLTCNSCGFYMSHULAMJWVDWK");

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
    msg.setTimeStamp(0.130662434551);
    msg.setSource(58711U);
    msg.setSourceEntity(154U);
    msg.setDestination(13586U);
    msg.setDestinationEntity(193U);
    msg.seq = 3111892103U;
    msg.state = 32U;
    msg.error.assign("VMZNXGEIBPGSQUYAKSJNAPDRLHJTBUAJPDCBGTTILFENX");

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
    msg.setTimeStamp(0.889462293607);
    msg.setSource(33192U);
    msg.setSourceEntity(4U);
    msg.setDestination(45061U);
    msg.setDestinationEntity(234U);
    msg.seq = 2362585609U;
    msg.state = 20U;
    msg.error.assign("ULSPXAYRJDZYHVRDHSNTSXFXJDQVIDAZBMRKIIAGHWOZKAAOTTNBMCQJLSSWGGBAHBCEUZRMEDZRPQYVTFPCBHUUYFQYNGFBIYPWSSGZPEXLJKLBNOERGDTKNXAQZKRMAUNQHHCEWNIGJLKBEVCTAULSFJOUVZJCJDUMIKEBOBVYEFJQZZLWOLKWFNYSIGTVMSQOKUXOUD");

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
    msg.setTimeStamp(0.478127027293);
    msg.setSource(47270U);
    msg.setSourceEntity(152U);
    msg.setDestination(7965U);
    msg.setDestinationEntity(138U);
    msg.origin.assign("LMYPUIBQBPQVCSXQDLTFSFFEMOVGJC");
    msg.text.assign("YQCRFCNSCMHKZLMGOBTTXJCZQ");

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
    msg.setTimeStamp(0.56640691423);
    msg.setSource(20823U);
    msg.setSourceEntity(127U);
    msg.setDestination(542U);
    msg.setDestinationEntity(224U);
    msg.origin.assign("ZZXAROPLPPGZR");
    msg.text.assign("QDIWBUTBCZJRVWRQGITBDTTKCKYPCKJCXSGHVKOHVILLVOFUWE");

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
    msg.setTimeStamp(0.560405338944);
    msg.setSource(51743U);
    msg.setSourceEntity(158U);
    msg.setDestination(3878U);
    msg.setDestinationEntity(166U);
    msg.origin.assign("MCBAABLFKKGFDGMBVSBWOTULRNZQZKCNFWEDFLWZDADVQPMUJSYIJTTDTCFYPHLNZCKJLGXDVGKPOJVNFUBXY");
    msg.text.assign("ODNIUNCZJAJQLPUEUXEFGCMAPIYKNNSTOXFXNZECUCPFKVJNBEKRYIQVPEJGZHDKJLXYFRYWFFQEIOFXHTXZBDTSWUVQGMKLUEGRPLHJOWTDHSCQBOIDZKHJTYWXEJZVRZKHBNSYESGWHRNKVCVBLLTRSVABMSTVAHFJQALRIDTILQCAGUFIVQGM");

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
    msg.setTimeStamp(0.904489182757);
    msg.setSource(37073U);
    msg.setSourceEntity(251U);
    msg.setDestination(7194U);
    msg.setDestinationEntity(48U);
    msg.origin.assign("AOQTHPKKQJXTEKIUZNQLGRUAIPANACKWAYXPTXNLCNSRMRVJUPZGVNBYYZDVDCAUDWKDTCXTMHZDCZBZSUEHUODLPIWLVSGNJDOFQRBSNIMOHRBDMJMGE");
    msg.htime = 0.414166990072;
    msg.lat = 0.830043817818;
    msg.lon = 0.874061974917;
    const char tmp_msg_0[] = {1, 78, 53, 72, -2, -62, -18, 36, 84, -119, 97, 20, -7, -83, 124, -42, 47, 120, -36, -100, -96, 2, 34, -127, 17, -19, -9, -25, -3, 2, -13, -61, -36, -82, -34, -50, -3, 105, -56, 12, 19, -103, 50, 55, 118, -81, 13, 85, -103, 113, -68, -100, -127, -113, -91, -104, -27, -59, 8, 2, 5, 53, 38, 23, -42, -71, -77, 7, -112, -16, 63, -13, -26, -8, 4, -74, -84, -78, -71, -1, -35, -25, -76, -66, 85, -93, -86, -80, 45, 80, -51, -60, -82, 103, 85, -70, 48, -15, -79, 29, 44, 122, -10, 105, -116, 52, -99, -28, -124, 95, 26, 26, 29, -128, 14, -97, -57, 58, 72, 2, -102, 116, -110, -122, -114, 67, 81, -35, -57, -79, 59, 102, 103, 1, 9, 8, 124, 103, 38, 90, 70, 95, -95, -6, 73, 124, -19, -82, -121, 103, 29, 94, -21, 48, -73, -29, -47, 2, -120, -56, -64, -75, -46, -79, -87, 120, -44, 84, 15, 80, -60, 89, 125, -7, 38, 103, 126, 47, -119, -98, 93, -98, 98, 112, 110, -116, -81, 49, -18, -74, -50, -74, -86, 81, -25, -53, 7, 91, 59, -19, -15, 59, -128, 48, 91, 7, -9, -37, -96, 104, 35, 99, -118, 43, 109, 14, -127, 25, -65, 68, 114, 49, 41, -114, -54};
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
    msg.setTimeStamp(0.481193096127);
    msg.setSource(33828U);
    msg.setSourceEntity(3U);
    msg.setDestination(50744U);
    msg.setDestinationEntity(89U);
    msg.origin.assign("TDPQHVPQIFRTUWHOCEILAKYDRGRJCQTGCLZNNGYCCDDKTMWSVLAXOLTYWIPQWMOANNMIH");
    msg.htime = 0.507971556767;
    msg.lat = 0.21365809632;
    msg.lon = 0.269033307284;
    const char tmp_msg_0[] = {95, -21, 34, 64, -119, -10, 117, -66, 9, -46, 9, -126, -74, -73, -88, 105, -52, 63, 80, 93, 79, -39, -14, 97, -22, 90, 24, 20, 61, -72, -48, 124, -65, 121, -37, -46, 28, 2, 77, 119, -74, 20, 37, 91, -126, -47, 10, -106, 84, -49, 36, 77, -86, 58, -106, -73, -7, 50, 84, -55, -51, 63, -100, -18, 22, -124, -115, 91, -92, 42, -112, -52, -120, -95, 111, -110, 103, 104, -86, -113, 98, -26, -7, -103, 101, 59, -114, 18, 33, 62, 8, 29, -53, 63, 75, -39, 17, 49, 80, 38, -54, 74, 16, -112, -49, -8, 27};
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
    msg.setTimeStamp(0.106707461011);
    msg.setSource(62912U);
    msg.setSourceEntity(73U);
    msg.setDestination(11091U);
    msg.setDestinationEntity(236U);
    msg.origin.assign("OVKBNLIBYCDZUJLYUYKTZGFBLBITHWHWTRTKRUODXMDLNUQZMUCHJGNYDXZDHMSQVFFI");
    msg.htime = 0.145185464168;
    msg.lat = 0.493642766601;
    msg.lon = 0.146831881762;
    const char tmp_msg_0[] = {-84, 26, -64, -36, -4, 122, 75, -49, -19, 91, -52, 97, 8, 14, -23, 124, 85, -89, -99, 10, 36, -122, -18, 60, -67, -9, 8, 100, 13, 42, 27, -102, -3, 28, 32, -81, -112, -1, -100, 114, -106, -9, 56, 46, 109, 123, -15, -93, -84, -55, 29, 24, -31, 52, 37, -67, 29, 15, 89, 62, -73, 50, -75, -96, -109, -116, -89, 39, -68, 30, -62, -20, -98, -74, -121, -78, 110, -34, 111, 126, -122, 52, 34, 80, -128, -90, 15, 113, -45, -125, -118, 54};
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
    msg.setTimeStamp(0.471457285357);
    msg.setSource(36156U);
    msg.setSourceEntity(178U);
    msg.setDestination(17472U);
    msg.setDestinationEntity(88U);
    msg.req_id = 18803U;
    msg.ttl = 4060U;
    msg.destination.assign("FMNSEWHAFGUZFNXIDTEMQDFOAKWYOASTKIZPHCLSCKOUXHFIOQI");
    const char tmp_msg_0[] = {-53, -17, -38, -1, -113, -6, 8, -16, -105, 71, -28, 40, 101, -79, -110, 34, -97, -122, -71, 2, 55, -61, -110, 30, 41, 115, -67, 14, 92, 121, -23, 17, 50, 87, -92, -72, 16, -28, -45, -80, 101, -117, 39, -62, 43, 54, 89, -41, -32, 53, 120, -124, 42, 75, 66, 73, -100, -10, -76, 45, 14, 57, 101, -105, -2, -32, -52, -8, 98, 72, -73, -96, -14, -43, -15, 80, 109, 33, -85, -80, -33, -28, -24, 54, 54, -78, -61, 8, 30, -106, -119, -97, -83, 89, -25, -94, 76, -2, -104, -4, -112, -96, 17, -114, -41, 100, 45, -18, -87, 115, 45, -40, -87, 53, -107, -31, 49, -71, 83, 6, -16, 32, -116, -33, 25};
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
    msg.setTimeStamp(0.997028799603);
    msg.setSource(39727U);
    msg.setSourceEntity(218U);
    msg.setDestination(63154U);
    msg.setDestinationEntity(236U);
    msg.req_id = 8031U;
    msg.ttl = 18809U;
    msg.destination.assign("XCHQWUVNGROIITOMQHOSHGVPLMTLELIOSPMVUQPVNQCDCDKMKOYDOTBBSRQFBRHLEESAZTVPXBFFBHADINRYMNUOUWMWGPDWEEDISGQINFPTNZYHBKLWAZRWCVYTFPAUQCIIYUBAASJQLDNFIJEYZGEJYDXRVXREKMXTCXHAPHOFNMNZGAGFRTPQVCFUZKWYLYOXLLHKEDNJEVCKOBJUPYHQS");
    const char tmp_msg_0[] = {-25, -56, 55, -52, -98, -77, -56, 33, -75, 34, -99, -54, 84, 117, -15, -83, -6, -96, 83, -97, 7, -5, 57, 70, -10, -42, 39, -70, -83, -50, -116, 17, -111, 108, -100, 125, -31, 119, -22, -87, 82, -70, 94, 30, 33, -89, 6, 15, 113, 21, -124, -72, -107, -55, 60, 107, -36, 122, 74, 96, 70, -115, 43, 70, 9, -57, -4, 109, -124, -14, 3, 32, -11, 98, 52, -6, -4, -115, -69, -38, -18, -36, 62, 24, -115, 82, 112, 99, 16, -40, 47, 96, -64, 82, -44, -15, -105, 31, 118, 32, -98, 103, 34, 53, 84, -59, -22, -14, -44, -13, -18, 13, 111, 105, -37, 22, -45, -60, 46, 84, -7, 93, 73, -6, 112, 27, 19, 55, 40, 54, 9, -76, 65, 67, 39, 19, 102, -39, -88, -27, 108};
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
    msg.setTimeStamp(0.946961897369);
    msg.setSource(12974U);
    msg.setSourceEntity(231U);
    msg.setDestination(38863U);
    msg.setDestinationEntity(176U);
    msg.req_id = 26350U;
    msg.ttl = 64915U;
    msg.destination.assign("XXZEKRNQBTWCYHOQSZXGHIEWNGQJDPJGRHLJETVBTMQLRBARRQUJIUBOEMDISKKKLEAYPDOALJMFVOOWKGDRYSUAUKJ");
    const char tmp_msg_0[] = {-13, -50, 55, 95, 3, 120, -81, 48, 106, 18, 57, -4, 110, 90, -7, 110, -19, -29, -24, -30, -31, 108, -36, 56, -96, 56, -118, 30, -52, -4, 63, 8, 14, 50, 41, -8, 47, 77, -76, -12, 49, -78, -122, 121, -111, 35, 84, 122, -55, 36, -83, 60, 58, 75, 26, -106, -1, -46, 45, 71, 123, -107, 123, -52, -70, 100, -101, -128, 89, -123, 55, 63, -99, -77, -108, -66, -77, 13, 119, -51, 116, 120, -90, 18, -110, 13, -99, -111, -27, 125, -4, -114, -76, -18, -71, 55, 48, 78, 114, 100, 21, 31, -41, 98, -61, 114, -57, 16, -22, 88, 4, -104, -92, -113, 20, -26, 76, 45, -75, 22, 56, 40, 66, -14, -124, -122, -35, 45, -63, -57, -119};
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
    msg.setTimeStamp(0.218846390341);
    msg.setSource(50995U);
    msg.setSourceEntity(237U);
    msg.setDestination(3746U);
    msg.setDestinationEntity(99U);
    msg.req_id = 3002U;
    msg.status = 93U;
    msg.text.assign("WFQSICAJKOPBQNSJJPWFOZVNGBTPXRLVNXXQSMFLMURQEXHARIZNFYLVHDVSOTUCXKGSSYBCUAZRZCBVUDOHCTOIPIKWUGFHITGBLQAPYRYFYOYKJDHIKRJLMMBQEACGIPECUDJNINRBFXXAPOVMIEMRZODLHWTPDQLWAFHGVZLJGYVNPXZYEWCTUUJKZHEGIXLTBEMHAMYEUFSNEATBCQDMWQSOEKSGWGYSQNDTRBZVCOWDVJ");

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
    msg.setTimeStamp(0.942005572943);
    msg.setSource(58079U);
    msg.setSourceEntity(185U);
    msg.setDestination(50204U);
    msg.setDestinationEntity(71U);
    msg.req_id = 29541U;
    msg.status = 23U;
    msg.text.assign("AHLUHTGVTBJQMNPNPMNZBGBQCDZESIYVNXWCEFJTSAYCICFUIAYDEASRMQTQBWPYFXPKXBZBDTQRWFUGRWHUJODAFVZSAPLHFMVOPIDMNHKWJLXSTHFICKQBCJSRNZLIAYNJAWOCAMGPZXTCDFUCDYXWG");

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
    msg.setTimeStamp(0.876511972224);
    msg.setSource(16011U);
    msg.setSourceEntity(69U);
    msg.setDestination(18179U);
    msg.setDestinationEntity(206U);
    msg.req_id = 26852U;
    msg.status = 94U;
    msg.text.assign("HBVKMYYTXSOBXGOVAIGJGLHXMSKJUWQGMABSGIBPDDHZWEALDMJKTLYOULRRNFLFMYSYPVCVJXHAJKHL");

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
    msg.setTimeStamp(0.170059427792);
    msg.setSource(1808U);
    msg.setSourceEntity(136U);
    msg.setDestination(37246U);
    msg.setDestinationEntity(206U);
    msg.group_name.assign("SQTXWLLWTYDWZGAMJNTIMLGYXNQQULDBRWHFAAZFSFVWKKPHQRCSSOEMKUUDXNCTYRRMOBVJAWZOISKBTYEKQLITFWEJUFRRZVBBPVCHVAHBLMHHNALCOFJICQ");
    msg.links = 2564064867U;

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
    msg.setTimeStamp(0.48725152854);
    msg.setSource(37465U);
    msg.setSourceEntity(9U);
    msg.setDestination(21900U);
    msg.setDestinationEntity(139U);
    msg.group_name.assign("RKBDTVWBAGRQQYYXNUJRSAPWGYSVGGFBDMRMVZWGXSKCEPUKDJIMSNOSOTFLJECHEMABMDXNBS");
    msg.links = 1843683144U;

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
    msg.setTimeStamp(0.596633103688);
    msg.setSource(11433U);
    msg.setSourceEntity(69U);
    msg.setDestination(54233U);
    msg.setDestinationEntity(118U);
    msg.group_name.assign("ORIHKHUBGFCDHLACTBMZCOXZZLJRDGRPCFIBAQJGDGJEFVWCWAVDGFIZKETLHDNBFRSEVXIULDTNVHUPATOCJQPVQBIGGEYFNCPXOANFPSSDZHKFYPYUNZXGTUCDQIBOK");
    msg.links = 107143619U;

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
    msg.setTimeStamp(0.894780668548);
    msg.setSource(45217U);
    msg.setSourceEntity(176U);
    msg.setDestination(40623U);
    msg.setDestinationEntity(152U);
    msg.groupname.assign("OXLLPRQUGEIIPOOXORRKBJUFLIGNFTWACYNJYZZHVHDFRQZPYVVUJYQUJZDEDUUDMCQEYIJJXLUKPZHBFUJARMBYBKWEVSGQAMNMNAFIEYQCSVDDOZWWPTMTNMTAXTIONOPEKLQLZBJLWQHWCJVGOGXIMFCXRAGKXWNKSSDHDDZPMYFSNXDJNPHFBWGSYKEOTLIKS");
    msg.action = 87U;
    msg.grouplist.assign("EUJKDYKMTTRHWYLLIVAFRUFTBSZLGDSNUZJFYBTACMHLZVBYCKKTFWOGEODAGPIZXPGDVLDEUCGNBZOFXMNOHKEWSMROXDWCQQXQQRAZNCHLQGNPI");

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
    msg.setTimeStamp(0.92485691746);
    msg.setSource(48213U);
    msg.setSourceEntity(103U);
    msg.setDestination(44286U);
    msg.setDestinationEntity(221U);
    msg.groupname.assign("EAOLBYKEYORUFZTTKFIBYTCYQNWNAWETQLLKYMRJXGWAZKFMBLUSRTMBCZVORBDGIAYLUIVHDPSECVZBWGNNMKCILXASNZEDSRDGPUGNJHMJQPBDMWKHSLNVSWFLOLCJZCTCOCPOQONXIUIXRMBVWPFEXQAVJXJUVEPQGTHORZZYDFWWAYPZMWJPFRDUUDNJXDOIQGHSKXTHUGGRPDICSKJSVSFQAHLYUIVTHJXMFPGKEZATHBAHXBC");
    msg.action = 238U;
    msg.grouplist.assign("OGRCFCNXEYVDJNFOHAWKEISJETUUSVTAIUIWDUIAYMZOLOHKHKMFKFABSEMOGRJLPVTTGJMCBWKPQXEDENHTGMBBQJLFQVLMQXDRMBLOTPVWSSZXYLEVPIWBBQGIYFULKCWJZINYDHLUQIHPGTJMSFNHLDONFAXHRTQRUOAOUCBWAVKHHRF");

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
    msg.setTimeStamp(0.415045304278);
    msg.setSource(38430U);
    msg.setSourceEntity(73U);
    msg.setDestination(59481U);
    msg.setDestinationEntity(130U);
    msg.groupname.assign("GLUJXNUEKYZZGTWNRHVEVVWTXJWLHAXBTIOXQ");
    msg.action = 19U;
    msg.grouplist.assign("PHLICDGUWHHZCXZTBKAIGOPXGAMZPADERXMUGIYBHZDEKFQDPOV");

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
    msg.setTimeStamp(0.401798418999);
    msg.setSource(31694U);
    msg.setSourceEntity(249U);
    msg.setDestination(10851U);
    msg.setDestinationEntity(218U);
    msg.value = 0.522571981093;
    msg.sys_src = 63955U;

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
    msg.setTimeStamp(0.733216616426);
    msg.setSource(17300U);
    msg.setSourceEntity(79U);
    msg.setDestination(55375U);
    msg.setDestinationEntity(194U);
    msg.value = 0.0622601643925;
    msg.sys_src = 22578U;

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
    msg.setTimeStamp(0.493703161273);
    msg.setSource(4027U);
    msg.setSourceEntity(176U);
    msg.setDestination(55649U);
    msg.setDestinationEntity(33U);
    msg.value = 0.597483577752;
    msg.sys_src = 55867U;

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
    msg.setTimeStamp(0.775714157807);
    msg.setSource(57905U);
    msg.setSourceEntity(137U);
    msg.setDestination(42638U);
    msg.setDestinationEntity(189U);
    msg.value = 0.998650321967;
    msg.units = 254U;

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
    msg.setTimeStamp(0.426328544972);
    msg.setSource(21640U);
    msg.setSourceEntity(126U);
    msg.setDestination(38801U);
    msg.setDestinationEntity(29U);
    msg.value = 0.664437229732;
    msg.units = 144U;

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
    msg.setTimeStamp(0.992717180479);
    msg.setSource(720U);
    msg.setSourceEntity(247U);
    msg.setDestination(48644U);
    msg.setDestinationEntity(38U);
    msg.value = 0.502001561851;
    msg.units = 250U;

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
    msg.setTimeStamp(0.265441900177);
    msg.setSource(59778U);
    msg.setSourceEntity(176U);
    msg.setDestination(9600U);
    msg.setDestinationEntity(14U);
    msg.base_lat = 0.370714077557;
    msg.base_lon = 0.257990427665;
    msg.base_time = 0.197164842394;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 29331U;
    tmp_msg_0.priority = -50;
    tmp_msg_0.x = 6817;
    tmp_msg_0.y = 17015;
    tmp_msg_0.z = 24554;
    tmp_msg_0.t = 28526;
    IMC::HistoricTelemetry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.altitude = 0.244994784902;
    tmp_tmp_msg_0_0.roll = 55399U;
    tmp_tmp_msg_0_0.pitch = 32311U;
    tmp_tmp_msg_0_0.yaw = 54872U;
    tmp_tmp_msg_0_0.speed = -23425;
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
    msg.setTimeStamp(0.0298159137815);
    msg.setSource(42228U);
    msg.setSourceEntity(231U);
    msg.setDestination(53348U);
    msg.setDestinationEntity(23U);
    msg.base_lat = 0.748520269672;
    msg.base_lon = 0.118307205112;
    msg.base_time = 0.674868282988;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 36329U;
    tmp_msg_0.priority = 9;
    tmp_msg_0.x = -15459;
    tmp_msg_0.y = 3366;
    tmp_msg_0.z = -31312;
    tmp_msg_0.t = 15701;
    IMC::SoundSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.702257951371;
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
    msg.setTimeStamp(0.992986028629);
    msg.setSource(6308U);
    msg.setSourceEntity(203U);
    msg.setDestination(26719U);
    msg.setDestinationEntity(248U);
    msg.base_lat = 0.507864803281;
    msg.base_lon = 0.327981282402;
    msg.base_time = 0.00191291576984;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 19515U;
    tmp_msg_0.destination = 14760U;
    tmp_msg_0.timeout = 0.0859825034753;
    IMC::ParametersXml tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.locale.assign("OQKOUYZMGPLBUMZZLNWORZJYEPOJCKOIOYINJSWVYANWXQTTCXVWVGAKZUCVUHXSJQRRLCDIVZCQYUDQFPIZSSIWEWKFJPXDSPTGMELGOVWATQPAWJEFMAKLGSHQXXNNVRSYLFINKZRNEIHTATRQMVRVFPLEMJUFHUZYRVF");
    const char tmp_tmp_tmp_msg_0_0_0[] = {-18, 25, 104, 6, -104, 84, 16, 5, -117, -57, 9, 69, 5, -31, -118, 126, 120, 33, 119, 19, 5, -36, 65, 125, 57, -73, 76, -63, -121, 100, 89, 66, -20, -8, 25, 40, 27, 72, 87, 35, 50, -118, -40, -37, 26, -32, -79, 23, 33, 97, -92, 116, 17, -4, 83, -13, 60, -63, -31, 21, 9, -77, 25, -98, 47, 95, 116, -124, 120, -46, -31, -127, -121, -120, -123, -95, 68, -1, -98, 97, -51, -38, -51, 35, -64, 124, -24, 113, -86, -56, 32, -1, 88, 38, 66, 72, -5, 65, 11, 82, -7, 123, -67, -55, 108, 3, 108, -87, -98, -23, -92, 90, 104, 19, -86, 26, 111, -115, -35, 21, 73, 43, 21, 31, -9, 119, -105, -95, -73, 14, -47, 25, -23, 74, 114, 25, -41, -87, -64, -94, -37, -80, -33, 0, -91, -30, 99, 124, -105, 56, 77, 31, -83, 107, -80, -93, -92, -20, -112, -59, 102};
    tmp_tmp_msg_0_0.config.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
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
    msg.setTimeStamp(0.37234107802);
    msg.setSource(1491U);
    msg.setSourceEntity(87U);
    msg.setDestination(30821U);
    msg.setDestinationEntity(0U);
    msg.base_lat = 0.23562467199;
    msg.base_lon = 0.261212545854;
    msg.base_time = 0.650524524971;
    const char tmp_msg_0[] = {-20, 56, 121, -90, -71, 47, 118, -36, -23, -95, 85, -96, 53, -57, -119, -22, 85, -14, -1, 82, -57, 13, -114, -55, 62, 76, 16, 95, -111, 76, -84, 75, 15, 101, 37, -72, -11, 115, 116, 10, 75, -76, -58, 19, 71, 113, 20, -81, 110, 51, 90, -76, 27, 42, 67, -112, -101, 0, -85, 12, 93, 49, -86, 77, 14, 77, -72, -111, 97, -94, -60, -92, -127, 30, 107, -110, -28, -97, -7, 62, 14, -76, -28, -46, 108, -56, -72, -39, -62, -63, -5, 63, -70, 30, 18, -63, -18, -99, 27, -66, -37, -106, -20, -125, -88, 86, -111, -88, 20, -13, -25, 17, -104, -110, -9, 60, -70, -61, -105, -29, -51, 54, -22, 51, 122, -44, 108, -79, 51, -75, 40, 42, -22, -122, -11, 34, -122, -48, -81, 65, -16, -86, -85, -27, -89, -123, -49, 41, -90, 56, -113, -91, -80, -120, 80, 12, -119, 45, -88, 52, -31, -8, 116, 100, 67, -80, 11, -95, -43, 11, -80, 41, -34, -47, 0, 32, -52, -49, 40, -109, -52, -31, -63, -34, 125, 125, 86, 32, -14, -113, 68, 113, 66, -96, 71, 43, 115, -111, 15, -73, -27, -37, 61, 73, -43, -10, 72, 40, -21, 105, -124, 51, -122, -90, 52, 11, -25, 69, 93, 73, -10, 126, 57, 120, -93, -53, 74, -45, 67, -41, -67, 42, 43, 110, -95, -67, 39, -51, -10, -45, 105, 3, -46, 110, -113, 4, 69, -15, -17, -10, -71, 43, 58, 96};
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
    msg.setTimeStamp(0.720666879187);
    msg.setSource(5073U);
    msg.setSourceEntity(190U);
    msg.setDestination(5981U);
    msg.setDestinationEntity(120U);
    msg.base_lat = 0.478351427597;
    msg.base_lon = 0.920912752561;
    msg.base_time = 0.652654471367;
    const char tmp_msg_0[] = {72, -122, 81, -97, 104, -110, 14, 94, -32, 118, 5, -59, -69, -106, 36, -19, -41, -106, 76, -23, 8, 79, 78, -38, -90, -104, 69, -110, 67, -18, 119, 63, -34, 63, 51, 69, -64, 103, 108, -28, 18, -103, 49, 94, -57, -50, 71, 103, 100, -56, 61, -53, 79, 122, 29, 45, -86, 63, -83, 61, 92, -63, -38, 91, 96, -87, -72, -29, -79, 44, -111, 36, 25, -97, 22, 89, 23, 20, -3, 8, 78, -14, -48, 104, -15, 56, 87, -93, 58, -96, -42, -106, 26, -41, 21, 94, -47, -104, -73, -127, 87, 19, 15, -46, -67, 71, 90, -96, 54, 76, -106, -128, -82, 1, -59, 70, 62, -39, -64, 40, -81, -126, 45, 29, -48, 119, -109, -43, -51, -77, -82, 55, -23, -90, 111, -96, 54, 13, 120, 64, 47, -88, 81, -125, -77, 30, 90, 15, -67, 44, -6, -113, 72, -114, -15, -49, -62, 92, 109, -38, 48, 122, 22, -100, 4, -7, 116, -28, -87, -108, 29, 47, 82, -42, -54, 15, -6, 121, -41, 0, 125, -10, 54, -38, -63, -113, -97, 39, 36, -83, 28, 118, -117, -113, 115, -5, 66, 93, 54, 15, 92, -118, -96, -118, 6, 4, 37, -78, -114, -73, -73, 74, 114, -72, -2, -89, -125, 34, 16, -77, 116, 31, 56, -79, 67, 15, 67, -45, -104, -112, -15, -40, -14, -68, 95, -55, -5, -95, 54, -36, 3, 86, 47, -12, -3, -88, -79, -49};
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
    msg.setTimeStamp(0.367092188267);
    msg.setSource(64657U);
    msg.setSourceEntity(183U);
    msg.setDestination(3352U);
    msg.setDestinationEntity(203U);
    msg.base_lat = 0.538375958069;
    msg.base_lon = 0.455016612495;
    msg.base_time = 0.55422704527;
    const char tmp_msg_0[] = {57, -61, -122, -22, 11, -27, -123, -49, -67, -108, -39, -91, 81, 116, 94, -100, 94, -88, 75, -57, -79, 86, 97, 89, 63, 75, 62, -10, 35, 74, -45, 28, -103, -93, -22, -82, 41, -111, -80, 50, -128, 90, 103, 102, 110, -15, -112, 102, -92, -74, -37, -114, 15, 89, 36, 82, -21, 4, 15, 116, -72, -46, 117, 43, 67, 99, -121, -57, 26, -56, -63, 24, 115, 123, -90, 42, 18, -76, 93, -20, -10, -105, 27, 24, -86, 66, 35, -55, -55, 8, 31, 118, 23, 70, -109, -28, 99, 17, 65, -42, 49};
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
    msg.setTimeStamp(0.366911450039);
    msg.setSource(51670U);
    msg.setSourceEntity(130U);
    msg.setDestination(51071U);
    msg.setDestinationEntity(232U);
    msg.sys_id = 44826U;
    msg.priority = 86;
    msg.x = -19276;
    msg.y = -19953;
    msg.z = 29312;
    msg.t = -22196;
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 123U;
    tmp_msg_0.value = 0.726132659238;
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
    msg.setTimeStamp(0.552232033439);
    msg.setSource(61647U);
    msg.setSourceEntity(197U);
    msg.setDestination(297U);
    msg.setDestinationEntity(5U);
    msg.sys_id = 36177U;
    msg.priority = 8;
    msg.x = 25965;
    msg.y = 32432;
    msg.z = -14236;
    msg.t = 18473;
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 251U;
    tmp_msg_0.value = 0.0562122922798;
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
    msg.setTimeStamp(0.061217370396);
    msg.setSource(49523U);
    msg.setSourceEntity(101U);
    msg.setDestination(19618U);
    msg.setDestinationEntity(102U);
    msg.sys_id = 43546U;
    msg.priority = -4;
    msg.x = 27209;
    msg.y = -10017;
    msg.z = -24317;
    msg.t = 22745;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.0795975542856;
    tmp_msg_0.lon = 0.71675733881;
    tmp_msg_0.speed = 0.558513920735;
    tmp_msg_0.speed_units = 102U;
    tmp_msg_0.limits = 67U;
    tmp_msg_0.max_depth = 0.391539120268;
    tmp_msg_0.min_alt = 0.524824788169;
    tmp_msg_0.time_limit = 0.0043434117958;
    tmp_msg_0.controller.assign("LHSZQKYMCYTFONCUJEGCJXRNWFFHSNWDZPULCZSACQIBDBSVFEQAMBWBGUCAOTPFJFSQUSODSDGPOWYWJNVUELBNRMVGVQBCIQXPKYJYVDGKXTZXLEMRRITBFESOQNAWIHAFXZVAPLUOYAOSUXOOAIDRRIOWXBPYWJNVMFHHDUWNRILUJXIFJKQMMVTGJXEZHAKPREPGRYUB");
    tmp_msg_0.custom.assign("UBAIZXBSVLPIRSQJWKGQGGUYNR");
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
    msg.setTimeStamp(0.988304840136);
    msg.setSource(17688U);
    msg.setSourceEntity(36U);
    msg.setDestination(18771U);
    msg.setDestinationEntity(36U);
    msg.req_id = 59087U;
    msg.type = 161U;
    msg.max_size = 50319U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.957312984731;
    tmp_msg_0.base_lon = 0.404298338951;
    tmp_msg_0.base_time = 0.288016908598;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 63592U;
    tmp_tmp_msg_0_0.priority = 83;
    tmp_tmp_msg_0_0.x = -9096;
    tmp_tmp_msg_0_0.y = 26229;
    tmp_tmp_msg_0_0.z = -1661;
    tmp_tmp_msg_0_0.t = -1748;
    IMC::UamTxFrame tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.seq = 34070U;
    tmp_tmp_tmp_msg_0_0_0.sys_dst.assign("SRRFHTFRINYHNTIOUMMDFAWUTRIZVXAKNHVUQVBQWGBICMKDOGUSSXPJBFDNYZBAJYUJWVFOKLBMVPDLYHPJSFPCCRKDKPEKCPTSAUBGRIVNEKFHZCCQWXCUEUDXXZHGTFEOTLJJIOEWXVYRDOIOZJLXRGYKOQSCEWCMMAAANWUQFWMNSJLUAYENSZQSTKGPGTVQOYPRMLYOHIXWIGFIEVYZXLDQDQGQCGTP");
    tmp_tmp_tmp_msg_0_0_0.flags = 194U;
    const char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {29, 84, 16, -98, 88, -121, -11, -59, 61, -31, 61, -7, 123, 123, -3, 45, 44, -27, 65, 13, -123, 12, 57, 67, 53, 5, -93, 124, 119, -16, -62, -108, 42, 68, 86, 113, -16, -77, -66, 61, 66, 112, 82, -91, -116};
    tmp_tmp_tmp_msg_0_0_0.data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
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
    msg.setTimeStamp(0.218192289811);
    msg.setSource(16240U);
    msg.setSourceEntity(132U);
    msg.setDestination(64383U);
    msg.setDestinationEntity(238U);
    msg.req_id = 55955U;
    msg.type = 65U;
    msg.max_size = 3829U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.270653940718;
    tmp_msg_0.base_lon = 0.644995951824;
    tmp_msg_0.base_time = 0.975945291523;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 25722U;
    tmp_tmp_msg_0_0.destination = 25605U;
    tmp_tmp_msg_0_0.timeout = 0.503000020406;
    IMC::PWM tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id = 9U;
    tmp_tmp_tmp_msg_0_0_0.period = 2276820596U;
    tmp_tmp_tmp_msg_0_0_0.duty_cycle = 1559952298U;
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
    msg.setTimeStamp(0.634964019283);
    msg.setSource(31998U);
    msg.setSourceEntity(33U);
    msg.setDestination(22371U);
    msg.setDestinationEntity(23U);
    msg.req_id = 57172U;
    msg.type = 229U;
    msg.max_size = 43528U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.363761778633;
    tmp_msg_0.base_lon = 0.184222466685;
    tmp_msg_0.base_time = 0.184807094394;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 61443U;
    tmp_tmp_msg_0_0.priority = -25;
    tmp_tmp_msg_0_0.x = -8542;
    tmp_tmp_msg_0_0.y = 12051;
    tmp_tmp_msg_0_0.z = -5078;
    tmp_tmp_msg_0_0.t = 31519;
    IMC::VehicleState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op_mode = 25U;
    tmp_tmp_tmp_msg_0_0_0.error_count = 172U;
    tmp_tmp_tmp_msg_0_0_0.error_ents.assign("KFOPKIMHMSHDXLVUIBUQNQQOOXPOAEZAIJOSYMEXNPJNDTGEVYYOM");
    tmp_tmp_tmp_msg_0_0_0.maneuver_type = 16457U;
    tmp_tmp_tmp_msg_0_0_0.maneuver_stime = 0.295550099326;
    tmp_tmp_tmp_msg_0_0_0.maneuver_eta = 32637U;
    tmp_tmp_tmp_msg_0_0_0.control_loops = 1927555603U;
    tmp_tmp_tmp_msg_0_0_0.flags = 193U;
    tmp_tmp_tmp_msg_0_0_0.last_error.assign("TBVRQQETRCXLIHJBPNQYSAOOCCOYWZTSKNGKCDTDAWOKZRZYTDVRNPLXTLIAKDEACEHWPZFIJPFKIIJSEFJGTTBFNQZUYBMNSZKZFDRZMFLQNVWQDAJEFDMUYWESLNMLZQIKHLPRUSFHVABCKDXPUWDJSURJVYI");
    tmp_tmp_tmp_msg_0_0_0.last_error_time = 0.857835405879;
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
    msg.setTimeStamp(0.909526034028);
    msg.setSource(25789U);
    msg.setSourceEntity(136U);
    msg.setDestination(49811U);
    msg.setDestinationEntity(146U);
    msg.original_source = 19741U;
    msg.destination = 1770U;
    msg.timeout = 0.698120160697;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 98U;
    tmp_msg_0.request_id = 9684U;
    tmp_msg_0.command = 124U;
    IMC::Elevator tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 11375U;
    tmp_tmp_msg_0_0.flags = 243U;
    tmp_tmp_msg_0_0.lat = 0.557180794991;
    tmp_tmp_msg_0_0.lon = 0.422468318598;
    tmp_tmp_msg_0_0.start_z = 0.575947338051;
    tmp_tmp_msg_0_0.start_z_units = 190U;
    tmp_tmp_msg_0_0.end_z = 0.616135269845;
    tmp_tmp_msg_0_0.end_z_units = 138U;
    tmp_tmp_msg_0_0.radius = 0.267759369312;
    tmp_tmp_msg_0_0.speed = 0.269362074627;
    tmp_tmp_msg_0_0.speed_units = 61U;
    tmp_tmp_msg_0_0.custom.assign("THMYPPWWBNZTXENLZUCPMSGUHATMUIQAGRVAWFSJOJLEKUHHPNGRQPYVSLEFDGTEQYHGJBMZWFECOFVGBUJRKDIBVFCSKNKMERXUNIZHWTDVHCSCTPHPJYBHGVAWKFPVOGNOXRZMLLSAUBLQJAXUNXDIZYSFKQITRAAFASDVAWCPYZDILOQLTJHXKURYEVYZONROGRXDZVNSQNWOQXZDMCDLCQGKIJIBIPBWTCOXKUXESJQMYFBOT");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 3479U;
    tmp_msg_0.info.assign("MGPHXNFZNFKQJPIYOTNWXZMAJTRAACPGOU");
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
    msg.setTimeStamp(0.682731707234);
    msg.setSource(2312U);
    msg.setSourceEntity(59U);
    msg.setDestination(19489U);
    msg.setDestinationEntity(58U);
    msg.original_source = 61553U;
    msg.destination = 24038U;
    msg.timeout = 0.193069770731;
    IMC::Airflow tmp_msg_0;
    tmp_msg_0.va = 0.858187815715;
    tmp_msg_0.aoa = 0.591755100753;
    tmp_msg_0.ssa = 0.570847795047;
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
    msg.setTimeStamp(0.378356717992);
    msg.setSource(32344U);
    msg.setSourceEntity(45U);
    msg.setDestination(22009U);
    msg.setDestinationEntity(187U);
    msg.original_source = 10300U;
    msg.destination = 5608U;
    msg.timeout = 0.392323524889;
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 181U;
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
    msg.setTimeStamp(0.24670936783);
    msg.setSource(16989U);
    msg.setSourceEntity(80U);
    msg.setDestination(28232U);
    msg.setDestinationEntity(49U);
    msg.type = 85U;
    msg.comm_interface = 43704U;
    msg.model = 48568U;
    msg.list.assign("MQWZUQOIBTWXEEQOSIYUMBOMUHYNCITBMYZZASINKDPRTHUMIKCWPEDOYZCJACCTPQNRHGXNPVMQYKETLWCSALZRYOGFKGUPFAOJAVNULRDPJSYPDDSNRVCQQYMRLSBHPFVAAIKLVVFGGLLXQAAFFRVTUSRSBYPHNVJNVLWJWDGGXHTXDCJJTUFMZQWXHKRMJOMGIUKESEKZBWTFXGUNEKVZFBHXOIXIYOBJOCLBEZETIDNWFKDLEP");

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
    msg.setTimeStamp(0.341225301574);
    msg.setSource(15814U);
    msg.setSourceEntity(88U);
    msg.setDestination(18605U);
    msg.setDestinationEntity(132U);
    msg.type = 125U;
    msg.comm_interface = 2245U;
    msg.model = 27434U;
    msg.list.assign("HLEBDRNUYCENYIQYJIZGYTPJNPZMQRKWIQARYAZPFNBJCLROCOIHUTWXVQJNJRHWFALOQKQMEZNSFJPWJHPRWVPBBBSMZGXBVIFDKOOSUUJKYQHKVTKFSMJITYCVSNLMWWRUTCPTHSOAVDDRAGXRHZUEXFOCOPAWCTDEKLXGCMQIGMUYXWLAEOYGTPVEXCSUDIV");

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
    msg.setTimeStamp(0.39050552862);
    msg.setSource(61880U);
    msg.setSourceEntity(169U);
    msg.setDestination(44478U);
    msg.setDestinationEntity(77U);
    msg.type = 66U;
    msg.comm_interface = 31729U;
    msg.model = 12555U;
    msg.list.assign("QKZXAWVVMJOBZPXUFFJVKLYDNHQHAPVVFLYUWFSHIIGGJDMGKZENRLIGHGBYTZOPHPGWABFMXMTJGRKLXUQZEVAUMHCQQKPDMACNNTECZUTIOESXBUEXNAODBECSBESZRJGZAZOXSNQBICTBYSWWVQEJAQOPWMOWKPTPCXNLLPACHKDVIFNPTNLRKHBUOTDIYLMWJCCTRGGORSWDIJKMIDWXAKNZSRFRVYDYYTCBFFIUMH");

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
    msg.setTimeStamp(0.292786405706);
    msg.setSource(24072U);
    msg.setSourceEntity(130U);
    msg.setDestination(24337U);
    msg.setDestinationEntity(79U);
    msg.type = 125U;
    msg.req_id = 492927654U;
    msg.ttl = 15158U;
    msg.code = 21U;
    msg.destination.assign("QHVTWLVOOPXIZAN");
    msg.source.assign("LZUZQIHMFEWBCBLNOFTBRVNYTANUTWCLWIBPFXRMTTKIYTJAFPMYXARSNRKVEFDKWTCINCSG");
    msg.acknowledge = 52U;
    msg.status = 143U;
    const char tmp_msg_0[] = {34, 31, -45, 119, 39, -19, 84, 88, 21, 108, 97, 123, -28, 10, 9, -10, -6, 119, 66, 71, 81, -67, 103, -1, 57, -81, 59, -121, 38, 108, -114, -49, -74, 0, -105, -92, 16, -102, 85, -49, -38, -28, 120, -36, 51, 78, 47, -122, -125, 99, -103, 77, -82, 106, -52, -59, 87, -8, 51, 84, 108, -70, 46, -62, 108, 35, -106, -20, 50, 81, -112, -19, 71, 120, 81, -76, 109, 66, 61, -58, 108, 54, -6, 34, -61, -19, -56, -83, -18, 56, 54, 93, 40, -119, -50, -77, -27, 108, -34, 16, 7, 72, 62, -17, 77, 8, 94, -108, 37, 33, -78, 37, -14, -96, 57, -67, -101, -112, 25, 97, 21, -127, -44, 65, -52, -72, 43, -16, 60, -83, 4, -99, 91, 69, -26, 92, -50, 21, 42, -20, 101, 93, 42, 32, -33, -126, -22, -86, -70, 85, -67, 121, -16, 94, -78, -25, 86, 80, -28, -77, 3, -114, -66, 119, 21, -5};
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
    msg.setTimeStamp(0.447547696994);
    msg.setSource(60343U);
    msg.setSourceEntity(140U);
    msg.setDestination(17592U);
    msg.setDestinationEntity(209U);
    msg.type = 1U;
    msg.req_id = 3638678984U;
    msg.ttl = 30556U;
    msg.code = 112U;
    msg.destination.assign("HJYCLSVCRWGBLFKMHQHVXNNWJJAANNXXGNIWRPOMNWQBTQSZJECYUYKTBYCRSGOERTDSZVXCEUHGPP");
    msg.source.assign("IDVHQEVXDDSGC");
    msg.acknowledge = 207U;
    msg.status = 250U;
    const char tmp_msg_0[] = {41, 38, -106, -17, 13, 9, -112, -93, -59, 41, 15, 123, 5, -7, 6, 79, -4, 126, -108, -115, -47, -56, 122, -25, -75, 77, -121, -100, 27, 124, -85, -25, 110, 38, 105, -74, 10, 32, 88, 114, 60, -86, -77, 60, 55, -90, 97, -48, 30, 1, 0, 125, 55, 76, -104, -86, 113, -9, -41, -96, 70, -55, 109};
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
    msg.setTimeStamp(0.0138054450043);
    msg.setSource(35881U);
    msg.setSourceEntity(176U);
    msg.setDestination(1502U);
    msg.setDestinationEntity(241U);
    msg.type = 250U;
    msg.req_id = 1846606163U;
    msg.ttl = 39709U;
    msg.code = 121U;
    msg.destination.assign("GAUZMONWDTEUDIREICBDHUCBHQRQKIGQSWUPCSDYXASGZVSVCRFPHUFUENSNCZPWTASSFAMIFZKUGVEBEZOFTXWEJPDTRRPTKNKKOKHZKQKDYLBBZKQOARCJMYVHIQVULOZWCSTWOLETFYBPOJIRMDYMUMQNXHTNMQCDXVLRXYVBAVWAJPYLXNAWXLLLCOVJYEJJIGHCJNPMWLNSBIGZQB");
    msg.source.assign("OZQPTSMWZSBYHMZOMRMQXGNCXFWHZJKCHLHEKXBLGZNPRUATDJNAPKPSASREGQEAORNKYUFFWZBSFGXWCYBNTEISDJOGRKVDJTLQUGCEIZSFWFLNPDXNGIRVREOMIDTCCYLIMROWDBWQMKZVUCLASKFVDQQKADJBGXXJWORAGOUUHZSPQALVAUVLVIJEHBLMY");
    msg.acknowledge = 101U;
    msg.status = 181U;
    const char tmp_msg_0[] = {-72, -119, 61, 122, 80, -79, -43, -83, -76, -47, 45, -99, -93, -85, -30, 97, 71, -54, 109, 70, 110, 44, 24, -27, 113, -67, 101, -45, -15, 46, -126, 13, 45, -7, -111, 37, -67, -11, 11};
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
    msg.setTimeStamp(0.356259198828);
    msg.setSource(14642U);
    msg.setSourceEntity(158U);
    msg.setDestination(58930U);
    msg.setDestinationEntity(65U);
    msg.id = 224U;
    msg.range = 0.353982019022;

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
    msg.setTimeStamp(0.304726395383);
    msg.setSource(49712U);
    msg.setSourceEntity(107U);
    msg.setDestination(52687U);
    msg.setDestinationEntity(111U);
    msg.id = 35U;
    msg.range = 0.867458227213;

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
    msg.setTimeStamp(0.0511154338832);
    msg.setSource(39520U);
    msg.setSourceEntity(26U);
    msg.setDestination(1092U);
    msg.setDestinationEntity(102U);
    msg.id = 237U;
    msg.range = 0.913766937161;

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
    msg.setTimeStamp(0.361061333465);
    msg.setSource(10408U);
    msg.setSourceEntity(95U);
    msg.setDestination(39714U);
    msg.setDestinationEntity(130U);
    msg.beacon.assign("CURDARZRGBHFFTRKRCJIKFWPVHKTRPLMOAGOIAFDMSYKDYNLSJXGSLAHWNINOXSXJQUDPFXYMWRZLZAZIUTVSZCVMGXZIBLQPCWZXNAGNGPMBTKTDFAWGVOQXWOCBDIJDJRJUEEZVUEDSHQEYVTOTYKPBPTCQVCNACINM");
    msg.lat = 0.881685259351;
    msg.lon = 0.283537316997;
    msg.depth = 0.171632096691;
    msg.query_channel = 65U;
    msg.reply_channel = 7U;
    msg.transponder_delay = 47U;

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
    msg.setTimeStamp(0.497115095312);
    msg.setSource(33712U);
    msg.setSourceEntity(89U);
    msg.setDestination(5401U);
    msg.setDestinationEntity(153U);
    msg.beacon.assign("OSEITLQONNYUUNKRIRBNCSYIRENAECMSDFDTYCOWCVDYEEXKUQYHRFASLLPUGNMJQBSZCZMHGPMXWFVQFWIWMNHSKDBKIKLGTJBZIPLUVBWKQXZUYIZZRWUPLPXPWCGYKRBXGXJHJODGDVKUZLDSJAZEHDBACHVESOLQMMXHRTICAXGGJVKP");
    msg.lat = 0.294132438663;
    msg.lon = 0.486446923118;
    msg.depth = 0.935419235909;
    msg.query_channel = 216U;
    msg.reply_channel = 22U;
    msg.transponder_delay = 134U;

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
    msg.setTimeStamp(0.952379833356);
    msg.setSource(31975U);
    msg.setSourceEntity(142U);
    msg.setDestination(3286U);
    msg.setDestinationEntity(250U);
    msg.beacon.assign("PHNVKSUKWEONMVYK");
    msg.lat = 0.34428762636;
    msg.lon = 0.350548171829;
    msg.depth = 0.637853855005;
    msg.query_channel = 56U;
    msg.reply_channel = 75U;
    msg.transponder_delay = 53U;

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
    msg.setTimeStamp(0.933421068118);
    msg.setSource(35843U);
    msg.setSourceEntity(110U);
    msg.setDestination(12418U);
    msg.setDestinationEntity(245U);
    msg.op = 148U;

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
    msg.setTimeStamp(0.509412885508);
    msg.setSource(62856U);
    msg.setSourceEntity(133U);
    msg.setDestination(61158U);
    msg.setDestinationEntity(79U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.580662154393);
    msg.setSource(2026U);
    msg.setSourceEntity(112U);
    msg.setDestination(43076U);
    msg.setDestinationEntity(119U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.585106308052);
    msg.setSource(61869U);
    msg.setSourceEntity(137U);
    msg.setDestination(26067U);
    msg.setDestinationEntity(150U);
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.263661938522;
    tmp_msg_0.x = 0.360895236484;
    tmp_msg_0.y = 0.997739239279;
    tmp_msg_0.z = 0.532012483073;
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
    msg.setTimeStamp(0.928143061893);
    msg.setSource(32221U);
    msg.setSourceEntity(56U);
    msg.setDestination(329U);
    msg.setDestinationEntity(198U);
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("GTIKLXHLDCUQSWQXQMVSJPGOHGREUHWQUORAGISKBZHCFTGAVSIKKVOFJJDPLBIETWSKKHXMILUEZBLWSNQXABV");
    tmp_msg_0.links = 2524200135U;
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
    msg.setTimeStamp(0.943583776911);
    msg.setSource(57410U);
    msg.setSourceEntity(111U);
    msg.setDestination(35577U);
    msg.setDestinationEntity(44U);
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("HNZXBMXITKRSOWIXJOEVISGDPWAHSUNCJGPAMYEHELDVRGQDIKGRGQXBUTHTUQYRQCADKLUNHLJVXOWUPEW");
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
    msg.setTimeStamp(0.0799443898317);
    msg.setSource(2144U);
    msg.setSourceEntity(161U);
    msg.setDestination(59795U);
    msg.setDestinationEntity(1U);
    msg.op = 143U;
    msg.system.assign("GNUBGFSEGQLZJAPFVNCYATQEDIRLMUFFGCHXDMPLJYCDDVLSDRBKVZNRVAQZWNEGBZGHORHWAECHQMBWIKZCNHVYXCFFZATQSJSPKKTIMUIYXWFUWNFXRKEZDPOLATBOSHBCLIMSNYCGDNNDLMHYJTETWKVAEWSKUVMPFXLRZJMOQJEASXWJUQBSJUMRXLYLDZT");
    msg.range = 0.202147805942;
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 196U;
    tmp_msg_0.x = 0.533865211358;
    tmp_msg_0.y = 0.928981187116;
    tmp_msg_0.z = 0.860708482784;
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
    msg.setTimeStamp(0.947223686377);
    msg.setSource(61713U);
    msg.setSourceEntity(224U);
    msg.setDestination(2521U);
    msg.setDestinationEntity(212U);
    msg.op = 172U;
    msg.system.assign("JWVIGHGFUFCYTGYBCFAGFCQYBNDLUWDVLQRRXNNXWVISOLSNJFRODLDTYQKDXEONWCHPMYAVLUWXFOSPSREJGNXDYSATZMRHTRVHQDTPGKSXOTDUOAKUPBGMUTVRLMKMVACCODPBKZNSYPHHNXILSGHHIZQBSGMVMCFXEYHWCJLBAJIQYMIZJVEKFEPMEZJQAEAPCDBZOQLWIRBSRUBJWUHEJZIIUKTTN");
    msg.range = 0.0404277313661;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 75U;
    tmp_msg_0.htime = 0.764900837309;
    IMC::LogBookEntry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 121U;
    tmp_tmp_msg_0_0.htime = 0.315799187114;
    tmp_tmp_msg_0_0.context.assign("BRYIRHTTJWGTQEDVYAFLNACMFQNJFUPPKBWRKCMBML");
    tmp_tmp_msg_0_0.text.assign("DOYVNOBIHJVNTCFTIGXRNWJSSFREEDAQYLLFVDTZQWHFDDGMOZTHQXJTQALRFCVALHFSYUOUZMAVAUAPIBJACVNQMKC");
    tmp_msg_0.msg.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5750406425);
    msg.setSource(9620U);
    msg.setSourceEntity(184U);
    msg.setDestination(53928U);
    msg.setDestinationEntity(51U);
    msg.op = 245U;
    msg.system.assign("TLTHCUXJFLEIOFROZHTYCDGHKUFOBAXHKFFINVTTCUUWYSYFCNVVQYIEXMEQARVKSEPBKCRGDMFHHQNRZWOLUUZEIWWEAJUCTIBSKGLXEJQLRZNMTNDXZORCMCPNHFIJWQYYHPBXPDOUIGVFWGXGOOCMNNSQDVPPKLGSNPBBQZSTJZRJODFKGGOAVVBRVJIAAEMWWSGHPVBSMUILYQKDPTSKRZWMJQULCXHYXKRLZJQWDXSYLTAJAZNEABP");
    msg.range = 0.00213763745259;
    IMC::GetParametersXml tmp_msg_0;
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
    msg.setTimeStamp(0.33157304441);
    msg.setSource(29750U);
    msg.setSourceEntity(146U);
    msg.setDestination(15116U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.277002789106);
    msg.setSource(45306U);
    msg.setSourceEntity(77U);
    msg.setDestination(43146U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.178697702794);
    msg.setSource(56171U);
    msg.setSourceEntity(43U);
    msg.setDestination(34942U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.0412169441448);
    msg.setSource(7089U);
    msg.setSourceEntity(109U);
    msg.setDestination(25971U);
    msg.setDestinationEntity(70U);
    msg.list.assign("HNXYUEYVAKSGABMVSOKRMZPZDGCSFLULELGUAFLXVCIQZHTRZKRQDLIPNZJXHFXCRMBWTUQJBYHKQUJZTFFKUGGPWNMMRZOFXLPBDIIMAAJGYQCINCTPYKWORLMUHTNCBTPOJSNJSWFOWPEHNTCERACDSJSIRYCKAWLRJOALQZOPVBHIHUAZSBENEJAGBEHXRTPYJEODVUSVTDVTYWIXDXIGHMEQVNOFKWLQGXWQWGIEVFPK");

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
    msg.setTimeStamp(0.00623220549598);
    msg.setSource(33756U);
    msg.setSourceEntity(237U);
    msg.setDestination(6409U);
    msg.setDestinationEntity(207U);
    msg.list.assign("ZVVKJAKLXDUGLCVZBVCPEHWCZNSWJHUTUZEBDPKOIUSQCPLYSHHNBQGHUHOMNDYAVYXUAIMCXFBUWDVWCMYBSNWRRUABZTTSAEYKITTSWOABRYJLKCBKOBIDSENZRQEVNTHDDANXKFPFTNIHKPRXKJOEFLOZLJWSACMGNWZQWXEQOGIQVIIAPMZYPNWDMFFLYOJTFMGKYZSPFBH");

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
    msg.setTimeStamp(0.663040170128);
    msg.setSource(63820U);
    msg.setSourceEntity(194U);
    msg.setDestination(22706U);
    msg.setDestinationEntity(41U);
    msg.list.assign("GRQNPZHBJXAKPNQWXJRJLVBWWFTUGSCDCUABYMMAGKGSLWTHOQLMDYJFNYPFP");

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
    msg.setTimeStamp(0.266395810223);
    msg.setSource(27756U);
    msg.setSourceEntity(58U);
    msg.setDestination(50765U);
    msg.setDestinationEntity(66U);
    msg.peer.assign("UBJYPUZFWXTVIAAZYLUYRAIRVXWTTUXXDBLBVFCBDHJGSUTCKKILFVENOGOTWIYMEHHDQVYLXALPERQQYKPSDULPGNAGBBANOZILIGCTPX");
    msg.rssi = 0.615173471612;
    msg.integrity = 49715U;

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
    msg.setTimeStamp(0.765959575393);
    msg.setSource(5584U);
    msg.setSourceEntity(105U);
    msg.setDestination(55443U);
    msg.setDestinationEntity(12U);
    msg.peer.assign("HWTNFLKFJHNYYLNBRCKPGZEFFDQPJTLPCADSNMZUOFERCUCGFLATKTQMLXPOVORWBKGFCPKYDBBJDJVYRXKZAQYZNGEAXTVQUPLVPBYJYOSGRIVIHBGCWOWVZIHZTUJZNAOI");
    msg.rssi = 0.383333814249;
    msg.integrity = 27999U;

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
    msg.setTimeStamp(0.845790657881);
    msg.setSource(12602U);
    msg.setSourceEntity(24U);
    msg.setDestination(37540U);
    msg.setDestinationEntity(253U);
    msg.peer.assign("HYRTLBBRXYVAREWWNTZGCLSDIZGDFBSQUIJHRDFMINWGYZUKVBPDPCKBGQGQLKRUYNQNUMHCTGJZODHXRQZIPXZYFHALMLJMXSVQGLETNTXXVCVWUAOQEHGNTEAMDMSEPRKOCOKJICSDFVW");
    msg.rssi = 0.266201696232;
    msg.integrity = 43309U;

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
    msg.setTimeStamp(0.143546437305);
    msg.setSource(33264U);
    msg.setSourceEntity(210U);
    msg.setDestination(31705U);
    msg.setDestinationEntity(124U);
    msg.value = 2676;

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
    msg.setTimeStamp(0.049738229793);
    msg.setSource(25301U);
    msg.setSourceEntity(48U);
    msg.setDestination(34447U);
    msg.setDestinationEntity(99U);
    msg.value = 29453;

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
    msg.setTimeStamp(0.147631120158);
    msg.setSource(37543U);
    msg.setSourceEntity(216U);
    msg.setDestination(42824U);
    msg.setDestinationEntity(45U);
    msg.value = -18027;

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
    msg.setTimeStamp(0.52450905337);
    msg.setSource(34067U);
    msg.setSourceEntity(145U);
    msg.setDestination(50210U);
    msg.setDestinationEntity(187U);
    msg.value = 0.732405259888;

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
    msg.setTimeStamp(0.602005668887);
    msg.setSource(41770U);
    msg.setSourceEntity(162U);
    msg.setDestination(15766U);
    msg.setDestinationEntity(114U);
    msg.value = 0.386882723754;

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
    msg.setTimeStamp(0.0148488508592);
    msg.setSource(46241U);
    msg.setSourceEntity(198U);
    msg.setDestination(22490U);
    msg.setDestinationEntity(33U);
    msg.value = 0.92276841311;

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
    msg.setTimeStamp(0.829602911996);
    msg.setSource(41802U);
    msg.setSourceEntity(220U);
    msg.setDestination(47631U);
    msg.setDestinationEntity(156U);
    msg.value = 0.396686022827;

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
    msg.setTimeStamp(0.768060255585);
    msg.setSource(58552U);
    msg.setSourceEntity(104U);
    msg.setDestination(40116U);
    msg.setDestinationEntity(118U);
    msg.value = 0.126646805167;

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
    msg.setTimeStamp(0.557023461788);
    msg.setSource(48332U);
    msg.setSourceEntity(38U);
    msg.setDestination(49671U);
    msg.setDestinationEntity(166U);
    msg.value = 0.930574085943;

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
    msg.setTimeStamp(0.396931398309);
    msg.setSource(11300U);
    msg.setSourceEntity(96U);
    msg.setDestination(11440U);
    msg.setDestinationEntity(232U);
    msg.validity = 41747U;
    msg.type = 135U;
    msg.utc_year = 47579U;
    msg.utc_month = 197U;
    msg.utc_day = 193U;
    msg.utc_time = 0.33645016159;
    msg.lat = 0.0137881811982;
    msg.lon = 0.95050899541;
    msg.height = 0.568295367285;
    msg.satellites = 99U;
    msg.cog = 0.0187472332966;
    msg.sog = 0.755666542609;
    msg.hdop = 0.29010281135;
    msg.vdop = 0.135923424367;
    msg.hacc = 0.852814019391;
    msg.vacc = 0.870407476911;

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
    msg.setTimeStamp(0.953276252664);
    msg.setSource(17089U);
    msg.setSourceEntity(217U);
    msg.setDestination(54780U);
    msg.setDestinationEntity(244U);
    msg.validity = 20276U;
    msg.type = 29U;
    msg.utc_year = 47033U;
    msg.utc_month = 22U;
    msg.utc_day = 236U;
    msg.utc_time = 0.709466371111;
    msg.lat = 0.322423301529;
    msg.lon = 0.115584662497;
    msg.height = 0.181855293472;
    msg.satellites = 82U;
    msg.cog = 0.504527105804;
    msg.sog = 0.622923820841;
    msg.hdop = 0.130334961451;
    msg.vdop = 0.89951801322;
    msg.hacc = 0.835663846148;
    msg.vacc = 0.174953764792;

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
    msg.setTimeStamp(0.129196723245);
    msg.setSource(57808U);
    msg.setSourceEntity(198U);
    msg.setDestination(60739U);
    msg.setDestinationEntity(242U);
    msg.validity = 2172U;
    msg.type = 189U;
    msg.utc_year = 56500U;
    msg.utc_month = 9U;
    msg.utc_day = 214U;
    msg.utc_time = 0.982313609442;
    msg.lat = 0.828281844415;
    msg.lon = 0.430868521411;
    msg.height = 0.903921852835;
    msg.satellites = 15U;
    msg.cog = 0.591801162839;
    msg.sog = 0.965811435394;
    msg.hdop = 0.399664436728;
    msg.vdop = 0.0374603878084;
    msg.hacc = 0.775107650544;
    msg.vacc = 0.744246400123;

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
    msg.setTimeStamp(0.201206386831);
    msg.setSource(28712U);
    msg.setSourceEntity(130U);
    msg.setDestination(27519U);
    msg.setDestinationEntity(216U);
    msg.time = 0.784820002783;
    msg.phi = 0.783298103346;
    msg.theta = 0.304868498754;
    msg.psi = 0.231985321364;
    msg.psi_magnetic = 0.727437849458;

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
    msg.setTimeStamp(0.661420899934);
    msg.setSource(2246U);
    msg.setSourceEntity(84U);
    msg.setDestination(36810U);
    msg.setDestinationEntity(97U);
    msg.time = 0.145916545002;
    msg.phi = 0.87016477808;
    msg.theta = 0.727868730171;
    msg.psi = 0.683207256546;
    msg.psi_magnetic = 0.992216097661;

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
    msg.setTimeStamp(0.847072880581);
    msg.setSource(2090U);
    msg.setSourceEntity(123U);
    msg.setDestination(26481U);
    msg.setDestinationEntity(54U);
    msg.time = 0.428006963661;
    msg.phi = 0.520536746988;
    msg.theta = 0.0169769051931;
    msg.psi = 0.922860797298;
    msg.psi_magnetic = 0.234066988581;

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
    msg.setTimeStamp(0.299852229906);
    msg.setSource(55326U);
    msg.setSourceEntity(181U);
    msg.setDestination(2053U);
    msg.setDestinationEntity(182U);
    msg.time = 0.677836864676;
    msg.x = 0.0974380260624;
    msg.y = 0.842189908478;
    msg.z = 0.113263189922;
    msg.timestep = 0.300019417816;

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
    msg.setTimeStamp(0.557484908076);
    msg.setSource(64093U);
    msg.setSourceEntity(198U);
    msg.setDestination(32948U);
    msg.setDestinationEntity(189U);
    msg.time = 0.420337911574;
    msg.x = 0.201607853465;
    msg.y = 0.105600944021;
    msg.z = 0.204024061071;
    msg.timestep = 0.63749658147;

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
    msg.setTimeStamp(0.146538671151);
    msg.setSource(2250U);
    msg.setSourceEntity(244U);
    msg.setDestination(33451U);
    msg.setDestinationEntity(150U);
    msg.time = 0.286566334375;
    msg.x = 0.507397257404;
    msg.y = 0.397233010581;
    msg.z = 0.544280087764;
    msg.timestep = 0.751566823549;

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
    msg.setTimeStamp(0.650886334743);
    msg.setSource(35517U);
    msg.setSourceEntity(57U);
    msg.setDestination(15284U);
    msg.setDestinationEntity(91U);
    msg.time = 0.455781012804;
    msg.x = 0.143354371598;
    msg.y = 0.485563061388;
    msg.z = 0.158972340749;

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
    msg.setTimeStamp(0.371699914008);
    msg.setSource(45528U);
    msg.setSourceEntity(197U);
    msg.setDestination(64650U);
    msg.setDestinationEntity(23U);
    msg.time = 0.88956546454;
    msg.x = 0.313997280151;
    msg.y = 0.246175355737;
    msg.z = 0.896057571821;

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
    msg.setTimeStamp(0.541799334656);
    msg.setSource(32201U);
    msg.setSourceEntity(89U);
    msg.setDestination(7657U);
    msg.setDestinationEntity(7U);
    msg.time = 0.985366995212;
    msg.x = 0.599988126617;
    msg.y = 0.45112262214;
    msg.z = 0.683652880825;

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
    msg.setTimeStamp(0.0844077730272);
    msg.setSource(5485U);
    msg.setSourceEntity(156U);
    msg.setDestination(207U);
    msg.setDestinationEntity(14U);
    msg.time = 0.613785912216;
    msg.x = 0.324316068182;
    msg.y = 0.108731587857;
    msg.z = 0.295188328067;

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
    msg.setTimeStamp(0.911061992559);
    msg.setSource(29624U);
    msg.setSourceEntity(19U);
    msg.setDestination(13481U);
    msg.setDestinationEntity(114U);
    msg.time = 0.94385424759;
    msg.x = 0.859079288752;
    msg.y = 0.29342015833;
    msg.z = 0.360952921267;

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
    msg.setTimeStamp(0.672882450456);
    msg.setSource(1249U);
    msg.setSourceEntity(198U);
    msg.setDestination(17194U);
    msg.setDestinationEntity(162U);
    msg.time = 0.315220950233;
    msg.x = 0.501608007935;
    msg.y = 0.829220440048;
    msg.z = 0.795373443911;

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
    msg.setTimeStamp(0.134275663979);
    msg.setSource(20581U);
    msg.setSourceEntity(230U);
    msg.setDestination(12362U);
    msg.setDestinationEntity(168U);
    msg.time = 0.691438171347;
    msg.x = 0.889121621812;
    msg.y = 0.677767145264;
    msg.z = 0.836906692212;

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
    msg.setTimeStamp(0.319446129995);
    msg.setSource(46688U);
    msg.setSourceEntity(86U);
    msg.setDestination(4422U);
    msg.setDestinationEntity(82U);
    msg.time = 0.603505309459;
    msg.x = 0.924531331661;
    msg.y = 0.573890868611;
    msg.z = 0.3877089983;

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
    msg.setTimeStamp(0.0295803723823);
    msg.setSource(13386U);
    msg.setSourceEntity(15U);
    msg.setDestination(63952U);
    msg.setDestinationEntity(209U);
    msg.time = 0.433673059927;
    msg.x = 0.983149233745;
    msg.y = 0.0590479682704;
    msg.z = 0.221886885107;

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
    msg.setTimeStamp(0.339394598631);
    msg.setSource(37377U);
    msg.setSourceEntity(93U);
    msg.setDestination(38525U);
    msg.setDestinationEntity(35U);
    msg.validity = 187U;
    msg.x = 0.992654870693;
    msg.y = 0.263608115942;
    msg.z = 0.178218452834;

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
    msg.setTimeStamp(0.42174822718);
    msg.setSource(38010U);
    msg.setSourceEntity(15U);
    msg.setDestination(45944U);
    msg.setDestinationEntity(228U);
    msg.validity = 70U;
    msg.x = 0.493359671444;
    msg.y = 0.216284925286;
    msg.z = 0.487141025597;

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
    msg.setTimeStamp(0.7729646464);
    msg.setSource(24192U);
    msg.setSourceEntity(176U);
    msg.setDestination(58437U);
    msg.setDestinationEntity(89U);
    msg.validity = 14U;
    msg.x = 0.0727829743347;
    msg.y = 0.624574566803;
    msg.z = 0.655024832776;

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
    msg.setTimeStamp(0.0448813855732);
    msg.setSource(17371U);
    msg.setSourceEntity(116U);
    msg.setDestination(36870U);
    msg.setDestinationEntity(4U);
    msg.validity = 140U;
    msg.x = 0.744994249559;
    msg.y = 0.663707991471;
    msg.z = 0.521983172203;

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
    msg.setTimeStamp(0.250997388442);
    msg.setSource(13342U);
    msg.setSourceEntity(84U);
    msg.setDestination(22202U);
    msg.setDestinationEntity(123U);
    msg.validity = 17U;
    msg.x = 0.553600423428;
    msg.y = 0.000877140208927;
    msg.z = 0.0370710315432;

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
    msg.setTimeStamp(0.826004822375);
    msg.setSource(49397U);
    msg.setSourceEntity(94U);
    msg.setDestination(52415U);
    msg.setDestinationEntity(172U);
    msg.validity = 233U;
    msg.x = 0.463175529395;
    msg.y = 0.791605639092;
    msg.z = 0.21762090002;

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
    msg.setTimeStamp(0.70211695187);
    msg.setSource(24645U);
    msg.setSourceEntity(30U);
    msg.setDestination(59258U);
    msg.setDestinationEntity(98U);
    msg.time = 0.662058080325;
    msg.x = 0.158467159826;
    msg.y = 0.00942409961482;
    msg.z = 0.419209532488;

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
    msg.setTimeStamp(0.242577866961);
    msg.setSource(23252U);
    msg.setSourceEntity(2U);
    msg.setDestination(50615U);
    msg.setDestinationEntity(143U);
    msg.time = 0.98331213194;
    msg.x = 0.26665400612;
    msg.y = 0.569064895798;
    msg.z = 0.0326610366547;

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
    msg.setTimeStamp(0.73041222904);
    msg.setSource(39105U);
    msg.setSourceEntity(207U);
    msg.setDestination(32532U);
    msg.setDestinationEntity(241U);
    msg.time = 0.908408337163;
    msg.x = 0.629027355887;
    msg.y = 0.658601653776;
    msg.z = 0.138693763294;

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
    msg.setTimeStamp(0.656593462337);
    msg.setSource(40116U);
    msg.setSourceEntity(14U);
    msg.setDestination(50701U);
    msg.setDestinationEntity(43U);
    msg.validity = 119U;
    msg.value = 0.102245492177;

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
    msg.setTimeStamp(0.887879215714);
    msg.setSource(45404U);
    msg.setSourceEntity(100U);
    msg.setDestination(38855U);
    msg.setDestinationEntity(163U);
    msg.validity = 246U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.827446596135;
    tmp_msg_0.y = 0.274058478701;
    tmp_msg_0.z = 0.158534853894;
    tmp_msg_0.phi = 0.716268252302;
    tmp_msg_0.theta = 0.574436758238;
    tmp_msg_0.psi = 0.420828325833;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.725507188085;

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
    msg.setTimeStamp(0.249205849714);
    msg.setSource(35992U);
    msg.setSourceEntity(70U);
    msg.setDestination(30760U);
    msg.setDestinationEntity(184U);
    msg.validity = 208U;
    msg.value = 0.132874708569;

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
    msg.setTimeStamp(0.214018225579);
    msg.setSource(61981U);
    msg.setSourceEntity(63U);
    msg.setDestination(22421U);
    msg.setDestinationEntity(35U);
    msg.value = 0.435120708884;

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
    msg.setTimeStamp(0.287701589429);
    msg.setSource(51480U);
    msg.setSourceEntity(35U);
    msg.setDestination(12637U);
    msg.setDestinationEntity(16U);
    msg.value = 0.858721628002;

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
    msg.setTimeStamp(0.694594548865);
    msg.setSource(8362U);
    msg.setSourceEntity(233U);
    msg.setDestination(30290U);
    msg.setDestinationEntity(221U);
    msg.value = 0.997303255732;

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
    msg.setTimeStamp(0.787185165477);
    msg.setSource(57363U);
    msg.setSourceEntity(210U);
    msg.setDestination(36042U);
    msg.setDestinationEntity(16U);
    msg.value = 0.797893090536;

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
    msg.setTimeStamp(0.67567797263);
    msg.setSource(12257U);
    msg.setSourceEntity(249U);
    msg.setDestination(62317U);
    msg.setDestinationEntity(75U);
    msg.value = 0.234623688199;

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
    msg.setTimeStamp(0.353542942175);
    msg.setSource(14931U);
    msg.setSourceEntity(128U);
    msg.setDestination(36691U);
    msg.setDestinationEntity(106U);
    msg.value = 0.535695988549;

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
    msg.setTimeStamp(0.427839786021);
    msg.setSource(49965U);
    msg.setSourceEntity(129U);
    msg.setDestination(61785U);
    msg.setDestinationEntity(153U);
    msg.value = 0.539163211716;

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
    msg.setTimeStamp(0.346993642091);
    msg.setSource(3175U);
    msg.setSourceEntity(55U);
    msg.setDestination(10462U);
    msg.setDestinationEntity(195U);
    msg.value = 0.411535344255;

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
    msg.setTimeStamp(0.911122033048);
    msg.setSource(13676U);
    msg.setSourceEntity(29U);
    msg.setDestination(55814U);
    msg.setDestinationEntity(157U);
    msg.value = 0.196774050574;

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
    msg.setTimeStamp(0.978980861919);
    msg.setSource(14828U);
    msg.setSourceEntity(73U);
    msg.setDestination(39445U);
    msg.setDestinationEntity(122U);
    msg.value = 0.760870985082;

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
    msg.setTimeStamp(0.645783678859);
    msg.setSource(55203U);
    msg.setSourceEntity(190U);
    msg.setDestination(33653U);
    msg.setDestinationEntity(84U);
    msg.value = 0.278605236442;

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
    msg.setTimeStamp(0.310359426397);
    msg.setSource(9244U);
    msg.setSourceEntity(172U);
    msg.setDestination(23186U);
    msg.setDestinationEntity(149U);
    msg.value = 0.885368995929;

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
    msg.setTimeStamp(0.278612577389);
    msg.setSource(16468U);
    msg.setSourceEntity(169U);
    msg.setDestination(14647U);
    msg.setDestinationEntity(24U);
    msg.value = 0.302340036852;

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
    msg.setTimeStamp(0.894188057681);
    msg.setSource(34938U);
    msg.setSourceEntity(151U);
    msg.setDestination(20865U);
    msg.setDestinationEntity(128U);
    msg.value = 0.985386827935;

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
    msg.setTimeStamp(0.831763923169);
    msg.setSource(28975U);
    msg.setSourceEntity(232U);
    msg.setDestination(37592U);
    msg.setDestinationEntity(62U);
    msg.value = 0.514150131313;

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
    msg.setTimeStamp(0.156165298332);
    msg.setSource(22095U);
    msg.setSourceEntity(206U);
    msg.setDestination(27360U);
    msg.setDestinationEntity(211U);
    msg.value = 0.433346279145;

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
    msg.setTimeStamp(0.257369628937);
    msg.setSource(47916U);
    msg.setSourceEntity(221U);
    msg.setDestination(31704U);
    msg.setDestinationEntity(31U);
    msg.value = 0.130015071453;

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
    msg.setTimeStamp(0.125502810507);
    msg.setSource(22380U);
    msg.setSourceEntity(214U);
    msg.setDestination(38857U);
    msg.setDestinationEntity(254U);
    msg.value = 0.782188304133;

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
    msg.setTimeStamp(0.889889157327);
    msg.setSource(25568U);
    msg.setSourceEntity(104U);
    msg.setDestination(55833U);
    msg.setDestinationEntity(69U);
    msg.value = 0.340506585396;

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
    msg.setTimeStamp(0.898624396756);
    msg.setSource(57983U);
    msg.setSourceEntity(160U);
    msg.setDestination(17330U);
    msg.setDestinationEntity(225U);
    msg.value = 0.574332007212;

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
    msg.setTimeStamp(0.476127996959);
    msg.setSource(41427U);
    msg.setSourceEntity(9U);
    msg.setDestination(11900U);
    msg.setDestinationEntity(52U);
    msg.value = 0.444169643555;

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
    msg.setTimeStamp(0.729214551045);
    msg.setSource(45079U);
    msg.setSourceEntity(116U);
    msg.setDestination(7281U);
    msg.setDestinationEntity(178U);
    msg.value = 0.651344527636;

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
    msg.setTimeStamp(0.655395948799);
    msg.setSource(31684U);
    msg.setSourceEntity(147U);
    msg.setDestination(47351U);
    msg.setDestinationEntity(136U);
    msg.value = 0.66579779591;

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
    msg.setTimeStamp(0.922033836625);
    msg.setSource(37814U);
    msg.setSourceEntity(53U);
    msg.setDestination(63125U);
    msg.setDestinationEntity(3U);
    msg.value = 0.131822525875;

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
    msg.setTimeStamp(0.445720619641);
    msg.setSource(52638U);
    msg.setSourceEntity(161U);
    msg.setDestination(64021U);
    msg.setDestinationEntity(192U);
    msg.direction = 0.246430834199;
    msg.speed = 0.403449896079;
    msg.turbulence = 0.038871257375;

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
    msg.setTimeStamp(0.90601374443);
    msg.setSource(16604U);
    msg.setSourceEntity(170U);
    msg.setDestination(22081U);
    msg.setDestinationEntity(47U);
    msg.direction = 0.78413395943;
    msg.speed = 0.710310432954;
    msg.turbulence = 0.208818818462;

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
    msg.setTimeStamp(0.92221198212);
    msg.setSource(20333U);
    msg.setSourceEntity(129U);
    msg.setDestination(17809U);
    msg.setDestinationEntity(6U);
    msg.direction = 0.752899822648;
    msg.speed = 0.972430153059;
    msg.turbulence = 0.977367702523;

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
    msg.setTimeStamp(0.645210127861);
    msg.setSource(22944U);
    msg.setSourceEntity(41U);
    msg.setDestination(44609U);
    msg.setDestinationEntity(232U);
    msg.value = 0.732653879159;

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
    msg.setTimeStamp(0.632546573669);
    msg.setSource(8386U);
    msg.setSourceEntity(26U);
    msg.setDestination(17215U);
    msg.setDestinationEntity(103U);
    msg.value = 0.487267213314;

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
    msg.setTimeStamp(0.15980630887);
    msg.setSource(7969U);
    msg.setSourceEntity(135U);
    msg.setDestination(22377U);
    msg.setDestinationEntity(114U);
    msg.value = 0.681139347201;

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
    msg.setTimeStamp(0.822228237435);
    msg.setSource(63977U);
    msg.setSourceEntity(119U);
    msg.setDestination(36629U);
    msg.setDestinationEntity(120U);
    msg.value.assign("RBAPVNSQQXDGBOGNYEJLLOZUIRYZUWVRQCPAROGVUPJPTTGQNDUKAPJVOIYGCBFMLJLKHXWDDVUFXZWAXFPGEXFWCNNKNLADOTDVLYKVYMEWAESNZWTSCRRUTAXIPPIOGFRZHAYMDDCEEHMOZIHHBMMKFYHWAQKMBYTTDQFXVUJSEXSMBCWUPVHELECQIIALGWFOTZROJSRHFJBZTGUQVXBSYDNQNBMCIHCOSJMLYTXKIWPKCZGLJQ");

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
    msg.setTimeStamp(0.65826625086);
    msg.setSource(49489U);
    msg.setSourceEntity(170U);
    msg.setDestination(33002U);
    msg.setDestinationEntity(100U);
    msg.value.assign("ADNWNSMHCXOCFIVULOXRYWIQNPUPRQKVMOHBAIUEGEERSDWXOJJPRNYQEPVIKKOWYJADKCHBMJLZWTGMLAWJFCLEZVCIZXDTZRIUZISGSFYZQQQNDGACW");

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
    msg.setTimeStamp(0.726459273146);
    msg.setSource(62573U);
    msg.setSourceEntity(229U);
    msg.setDestination(39664U);
    msg.setDestinationEntity(153U);
    msg.value.assign("WXUTNXQKHMOXCLLXRRAGAKUPFMCELIEQZYYHEOQ");

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
    msg.setTimeStamp(0.370776621271);
    msg.setSource(26925U);
    msg.setSourceEntity(125U);
    msg.setDestination(54606U);
    msg.setDestinationEntity(231U);
    const char tmp_msg_0[] = {-44, 61, -71, -50, -47, 1, -75, 12, -24, -109, -40, -20, 30, 29, 56, 89, 64, -66, 41, -86, 118, -6, -45, -47, -110, 59, -26, -19, -110, 77, -3, -88, -13, -123, -28, 126, 55, 110, -80, 111, 107, 100, 121, 76, 10, -39, 118, 28, 27, 93, -72, 87, 68, -128, 75, -84, 24, -39, 53, 125, -59, 39, 31, -70, -95, 109, 38, 12, -46, 8, 78, -108, 103, 44, 52, 26, 28, -27, 11, 16, 122, 75, -50, 104, -59, 20, -12, 51, 59, 41, 6, -22, -119, -106, -68, 57, 100, -116, 51, 26, 121, 101, -117, -70, 22, 122, 20, 119, -66, -60, -64, -86, 12, 61, -123, 114, -128, -31, -63, 17, 37, -104, 71, 105, 81, -48, -88, -99, 71, -104, -56, -61, 38, -58, -15, 99, 13, 105, 33, 14, -124, -75, 81, -100, 0, -65, 42, -80, -94, 61, 74, -9, 35, 118, -59, 108, 113, 118, 106, 12, -13, 46};
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
    msg.setTimeStamp(0.00384876723742);
    msg.setSource(57200U);
    msg.setSourceEntity(37U);
    msg.setDestination(58994U);
    msg.setDestinationEntity(224U);
    const char tmp_msg_0[] = {-126, 17, 30, 14, -126, -115, 90, 21, 85, -89, 7, -97, 71, -18, 107, 5, 85, -87, 34, -31, -80, -16, -7, 65, -96, 33, -24, -128, -15, -51, 34, 48, 53, -120, -6, -45, 119, 118, 117, -66, 55, -120, 109, -41, 66, 45, 118, 67, 91, -26, -84, 55, -74, -59, -27, 21, -103, -43, 1, -79, -119, -24, -32, 40, 21, -27, 107, 2, -29, 60, 64, -71, 86, -90, 83, 94, 5, -41, -94, -115, -100, -70, -85, -23, -53, 117, -90, 124, -102, 73, 108, 113, -121, -95, 29, 125, -86, -49, -17, -18, 110, -122, -84, 92, -92, 66, -107, -125, 20, -2, 77, -4, -98, 84, 124, -91, -34, -79, 78, 22, 124, -73, 67, -8, 86, 124, -73, -124, -72, -9, -48, 7, 52, -25, 116, 105, 93, -44, -51, 11, -121, 74, -40, 49, -80, 99, -19, 73, -78, -31, 61, -88, 55, -97, -100, -105, -82, -87, 113, 98, -27, -37, -110, -8, 34, -84, -31, -14, 5, 18, 120, -12, -38, -53, 51, -64, -110, 57, -23, 71, -24, -72, 60, -53, 67, 27, 44, -82, -77, 102, 63, -89, -5, -110, -105, 81, 30, 90, -113, -5, -15, -56, 101, 124, 22, -114, -79, 13, -3, 126, -110, 83, -125};
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
    msg.setTimeStamp(0.486756274363);
    msg.setSource(63345U);
    msg.setSourceEntity(172U);
    msg.setDestination(37655U);
    msg.setDestinationEntity(126U);
    const char tmp_msg_0[] = {67, -69, -38, -38, -102, 6, 42, -21, 48, -50, 105, 93, -123, -113, -125, 27, 11, 13, 72, 35, 100, 37, -84, -113, 91, 69, 28, 109, -8, 73, -13, 51, -34, 18, 99, -61, 45, -61, 8, -4, 63, -32, 40, 62, 53, -87, 93, -85, -56, -50, 75, 89, -19, -109, -103, -95, 82, -27, 70, 57, 29, -124, 51, -78, -86, -24, -25, 59, 39, 97, 105, -53, -13, 122, 97, 84, 36, -87, -128, 16, -84, -36, -32, -59, -104, -26, -74, 2, -10, -40, -82, 20, -1, 80, -118, 103, -18, -45, 26, 123, 65, -21, 53, -125, 63, -103, 114, 76, 34, -31, -68, -70, 84, 118, -24, -67, 13, -2, 11, 71, -97, -105, -108, -118, 108, 111, -81, -18, 70, 79, 31, -49};
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
    msg.setTimeStamp(0.528634503797);
    msg.setSource(20750U);
    msg.setSourceEntity(165U);
    msg.setDestination(22949U);
    msg.setDestinationEntity(82U);
    msg.value = 0.868095107115;

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
    msg.setTimeStamp(0.696945800501);
    msg.setSource(890U);
    msg.setSourceEntity(237U);
    msg.setDestination(63486U);
    msg.setDestinationEntity(132U);
    msg.value = 0.0430314953041;

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
    msg.setTimeStamp(0.885295807276);
    msg.setSource(559U);
    msg.setSourceEntity(176U);
    msg.setDestination(53376U);
    msg.setDestinationEntity(205U);
    msg.value = 0.528706348177;

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
    msg.setTimeStamp(0.912784211233);
    msg.setSource(4718U);
    msg.setSourceEntity(54U);
    msg.setDestination(5332U);
    msg.setDestinationEntity(194U);
    msg.type = 77U;
    msg.frequency = 438429984U;
    msg.min_range = 28921U;
    msg.max_range = 28732U;
    msg.bits_per_point = 247U;
    msg.scale_factor = 0.810886776537;
    const char tmp_msg_0[] = {-118, -78, -111, 94, 41, -109, -93, 121, 56, 24, 122, 6, -18, 120, 55, -2, -26, 111, -116, 2, 36, -7, -113, 64, -67, 108, -67, 12, 32, -67, 19, -15, 83, 82, 115, 34, -98, -35, -32, -103, -122, 123, 64, 89, -96, 19, 46, 37, -69, -58, 62, -124, -62, 57, 24, -58, 56, -109, -96, -17, -99, -101, 96, -39, -89, -2, -17, -104, 85, -24, 36, -51, 54, 62, 97, -15, -73, -49, 6, 110, 76, 126, 67, -116, 121, 59, 87, 113, -9, 68, -116, -73, 4, 69, 86, -80, -127, -28, 38, -93, 116, 46, 123, 79, 121, 54, 63, -5, 13, -19, 17, 78, 61, -65, -41, 64, 31, 83, 125, 5, 98, 58, 100, 93, -128, -29, 66, -43, 36, -3, -110, -103, 77, -59, -92, -49, -113, 7, -28, 24, 8, 107, -23, -82, -101, -16, -125, -57, 112, -110, -99, 87, -3, -3, 112, 63, 50, 39, -63, 56, 62, 104, -23, 4, -114, 36, -55, -19, -48, 126, 36, 122, 52, 71, 47, -80, 87, -58, -63, 16, 98, -63, 16, 69, -64, 82, 33, 123, -120, 102, -37, -70, 101, 64, -80, 33, 24, 35, -119, -116, -102, -48, 67, 27, 0, 40, -39, -16, 97, 111, -64, 112, 37, -127, -44, 115, -95, 47, 20, -69, 33};
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
    msg.setTimeStamp(0.254018817079);
    msg.setSource(5701U);
    msg.setSourceEntity(83U);
    msg.setDestination(64682U);
    msg.setDestinationEntity(197U);
    msg.type = 40U;
    msg.frequency = 2444376224U;
    msg.min_range = 3198U;
    msg.max_range = 38740U;
    msg.bits_per_point = 71U;
    msg.scale_factor = 0.672012102183;
    const char tmp_msg_0[] = {39, 126, 68, 109, 58, -78, 30, 76, -118, 38, 37, 89, -51, -100, 35, 12, 73, -98, -88, -53, 72, 106, 115, -9, -82, -64, 87, 88, 58, -85, 125, 27, -42, 14, 33, -56, -15, -117, 123, 7, -123, -33, -124, -88, 48, 14, -33, 61, 1, 80, 87, -127, -18, -36, -46, -19, 116, 111, -16, 99, 24, -35, -79, -11, 104, -65, 14, 42, -49, -4, 4, -102, -26, 89, -10, -57, -113, -95, 117, -57, -9, 97, 44, 82, 2, 19, 82, -83, -76, -124, -71, 73, 15, 86, -107, 27, 39, -90, -96, -64, 111, 95, -94, -128, 21, 11, -67, 103, -32, -91, 56, 4, -14, 61, -73, -109, 1, 115, 113, -36, 110, 94, -40, 102, 24, 23, -101, -121, -25, 16, 29, -70, -98, -52, -10, 93, -38, -41, -51, 86, -124, -79, 56, 107, 64, -51, -68, 11, 117, -36, -116, -6, 99, 89, -51, -96, -37, 59, -100, 121, -25, 20, -2, -101, 32, -41, 12, 44, 69, 106, -123, -47, -38, 98, -32, -53, -58, -71, -10, -32, -28, -51, 19, -125, 25, 10, 49, -64, -100, 19, -54, -106, 99, -84, -47, 90, -28, 17, -127, 75, 29, 119, 98, -27, -45, -47, 105, 75, 67, 22, -90, -47, -123, -116, -6, -6, -18, -53, -60, 44, 39, -2, 33, -94, -23, -115, -55, -103, -102, -106, 94, -13, 73, -11, -1, -65, -67, 11, -123, 13, -86, 12, 102, -54, -79, 0};
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
    msg.setTimeStamp(0.371587135535);
    msg.setSource(405U);
    msg.setSourceEntity(92U);
    msg.setDestination(35702U);
    msg.setDestinationEntity(8U);
    msg.type = 1U;
    msg.frequency = 1799677017U;
    msg.min_range = 4132U;
    msg.max_range = 50207U;
    msg.bits_per_point = 15U;
    msg.scale_factor = 0.629151585175;
    const char tmp_msg_0[] = {-35, 110, -111, 37, -10, -87, -31, 108, -93, -101, 100, 104, -40, 125, -92, -93, -10, -85, -56, -39, -123, -93, 13, -88, -49, 69, 84, -103, -36, -42, -99, 69, -57, 80, -68, -4, 28, -124, 0, -83, 104, -98, 3, -20, -68, -67, 73, -67, -3, 65, -61, 85, 46, 8, 13, 25, -60, -28, -100, 17, -110, -85, -110, 36, -71, 81, -82, -102, -24, 117, 22, -70, 42, -65, -32, -128, -96, -30, 110, 71, 96, -29, -8, -36, 104, -83, -124, 89, 55, 14, -50, -98, 120, -72, -34, 72, -79, -18, -35, 17, -23, 79, -89, 57, -72, -66, -51, 93, -26, -92, 0, -75, -82, -56, 28, 2, -20, 79, 71, 92, -105, -64, 99, 74, -84, 122, 109, 106, -76, -92, 55, 33, -37, 120, -114};
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
    msg.setTimeStamp(0.828221922237);
    msg.setSource(49614U);
    msg.setSourceEntity(161U);
    msg.setDestination(39991U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.28998388532);
    msg.setSource(3034U);
    msg.setSourceEntity(218U);
    msg.setDestination(49996U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.19916946518);
    msg.setSource(36954U);
    msg.setSourceEntity(31U);
    msg.setDestination(3537U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.558677529983);
    msg.setSource(1888U);
    msg.setSourceEntity(122U);
    msg.setDestination(56930U);
    msg.setDestinationEntity(118U);
    msg.op = 68U;

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
    msg.setTimeStamp(0.776668304378);
    msg.setSource(28457U);
    msg.setSourceEntity(110U);
    msg.setDestination(4513U);
    msg.setDestinationEntity(32U);
    msg.op = 34U;

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
    msg.setTimeStamp(0.388988899946);
    msg.setSource(58777U);
    msg.setSourceEntity(68U);
    msg.setDestination(59510U);
    msg.setDestinationEntity(209U);
    msg.op = 218U;

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
    msg.setTimeStamp(0.891110168544);
    msg.setSource(46172U);
    msg.setSourceEntity(9U);
    msg.setDestination(63417U);
    msg.setDestinationEntity(185U);
    msg.value = 0.211958529479;
    msg.confidence = 0.374521333741;
    msg.opmodes.assign("CPUQDGDDJLWZRJHCVEYKTXLWUVFSDTGEGEAIJPLFOWUDTHZPQXOOSPEQYHNNNZQWEQGTXPUMINPEGFWQQHVMGKPQDGAIFLRCJOIMVCEWIBGJHLRCUDKAXOSKKDNQEZMZNFZBJCFQTJMRSXXZHEYXBBTCARACVVHRRYOXBAYFMVZLJOMKVLGXBNDEOCWAVIIBUZFSLRNPTFTMAARKRSBOHJITHKHOBSFIUZVJUYSDWTLLYCWSGBKYXMUNWYPYP");

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
    msg.setTimeStamp(0.416917114926);
    msg.setSource(7473U);
    msg.setSourceEntity(43U);
    msg.setDestination(39605U);
    msg.setDestinationEntity(167U);
    msg.value = 0.68433912474;
    msg.confidence = 0.205718067721;
    msg.opmodes.assign("DYMNQDUHILUISF");

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
    msg.setTimeStamp(0.5822013187);
    msg.setSource(47625U);
    msg.setSourceEntity(155U);
    msg.setDestination(58825U);
    msg.setDestinationEntity(85U);
    msg.value = 0.974578289724;
    msg.confidence = 0.0643943498079;
    msg.opmodes.assign("JOMYRWGRDBBCGTMJZUZSUGPBXNPZQPBBEDJAPSHETODZJIVTKFVWOSSLYADADSCFTNZMXIFUJYALYQRHXIHWYIFGXIYVQKANHJRLUYFLAVPLTOKWCRAEMNQLVYL");

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
    msg.setTimeStamp(0.333541895258);
    msg.setSource(13238U);
    msg.setSourceEntity(201U);
    msg.setDestination(2723U);
    msg.setDestinationEntity(11U);
    msg.itow = 2989193612U;
    msg.lat = 0.346288724156;
    msg.lon = 0.464811660897;
    msg.height_ell = 0.592208710264;
    msg.height_sea = 0.0389890938175;
    msg.hacc = 0.947596691352;
    msg.vacc = 0.36204374403;
    msg.vel_n = 0.438310692653;
    msg.vel_e = 0.257861901431;
    msg.vel_d = 0.557303971314;
    msg.speed = 0.894417891585;
    msg.gspeed = 0.197625190564;
    msg.heading = 0.848191705466;
    msg.sacc = 0.729191809967;
    msg.cacc = 0.537388786976;

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
    msg.setTimeStamp(0.215459828023);
    msg.setSource(36904U);
    msg.setSourceEntity(42U);
    msg.setDestination(466U);
    msg.setDestinationEntity(211U);
    msg.itow = 1768132908U;
    msg.lat = 0.960187356468;
    msg.lon = 0.163160683836;
    msg.height_ell = 0.470837257237;
    msg.height_sea = 0.278138245505;
    msg.hacc = 0.56002705227;
    msg.vacc = 0.0129867780418;
    msg.vel_n = 0.426501239246;
    msg.vel_e = 0.562778342338;
    msg.vel_d = 0.334999722573;
    msg.speed = 0.472729920697;
    msg.gspeed = 0.04948646609;
    msg.heading = 0.656203910478;
    msg.sacc = 0.177438353244;
    msg.cacc = 0.29580720545;

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
    msg.setTimeStamp(0.89733751978);
    msg.setSource(60800U);
    msg.setSourceEntity(150U);
    msg.setDestination(61008U);
    msg.setDestinationEntity(244U);
    msg.itow = 1938122134U;
    msg.lat = 0.520657462997;
    msg.lon = 0.628819429691;
    msg.height_ell = 0.296648675472;
    msg.height_sea = 0.529176273353;
    msg.hacc = 0.0679419522057;
    msg.vacc = 0.239645777652;
    msg.vel_n = 0.62704936188;
    msg.vel_e = 0.91733422834;
    msg.vel_d = 0.316839871072;
    msg.speed = 0.174002359912;
    msg.gspeed = 0.191157561363;
    msg.heading = 0.0495861441469;
    msg.sacc = 0.732116565918;
    msg.cacc = 0.542026367259;

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
    msg.setTimeStamp(0.472783284883);
    msg.setSource(61686U);
    msg.setSourceEntity(107U);
    msg.setDestination(33842U);
    msg.setDestinationEntity(124U);
    msg.id = 213U;
    msg.value = 0.720996453771;

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
    msg.setTimeStamp(0.845561809024);
    msg.setSource(25596U);
    msg.setSourceEntity(173U);
    msg.setDestination(57621U);
    msg.setDestinationEntity(232U);
    msg.id = 21U;
    msg.value = 0.771137401239;

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
    msg.setTimeStamp(0.256531515564);
    msg.setSource(37913U);
    msg.setSourceEntity(188U);
    msg.setDestination(55736U);
    msg.setDestinationEntity(155U);
    msg.id = 48U;
    msg.value = 0.199700134241;

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
    msg.setTimeStamp(0.106965123771);
    msg.setSource(48625U);
    msg.setSourceEntity(188U);
    msg.setDestination(48303U);
    msg.setDestinationEntity(98U);
    msg.x = 0.117457599493;
    msg.y = 0.781959285703;
    msg.z = 0.292531693034;
    msg.phi = 0.823155130837;
    msg.theta = 0.882215492126;
    msg.psi = 0.326685360094;

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
    msg.setTimeStamp(0.457278084651);
    msg.setSource(8556U);
    msg.setSourceEntity(44U);
    msg.setDestination(27354U);
    msg.setDestinationEntity(93U);
    msg.x = 0.545638569247;
    msg.y = 0.273192527297;
    msg.z = 0.983216472248;
    msg.phi = 0.19491285829;
    msg.theta = 0.401493520738;
    msg.psi = 0.535611458262;

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
    msg.setTimeStamp(0.215799903113);
    msg.setSource(59033U);
    msg.setSourceEntity(16U);
    msg.setDestination(45873U);
    msg.setDestinationEntity(253U);
    msg.x = 0.654223897459;
    msg.y = 0.42004007465;
    msg.z = 0.401508291425;
    msg.phi = 0.345262212396;
    msg.theta = 0.320073017156;
    msg.psi = 0.116782449298;

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
    msg.setTimeStamp(0.633700051957);
    msg.setSource(46144U);
    msg.setSourceEntity(73U);
    msg.setDestination(47322U);
    msg.setDestinationEntity(175U);
    msg.beam_width = 0.914041297014;
    msg.beam_height = 0.841317252449;

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
    msg.setTimeStamp(0.421375791007);
    msg.setSource(34756U);
    msg.setSourceEntity(142U);
    msg.setDestination(60012U);
    msg.setDestinationEntity(75U);
    msg.beam_width = 0.380760691412;
    msg.beam_height = 0.827482429746;

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
    msg.setTimeStamp(0.826950794436);
    msg.setSource(48498U);
    msg.setSourceEntity(41U);
    msg.setDestination(14852U);
    msg.setDestinationEntity(1U);
    msg.beam_width = 0.980146380066;
    msg.beam_height = 0.389565058826;

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
    msg.setTimeStamp(0.500519266547);
    msg.setSource(54716U);
    msg.setSourceEntity(1U);
    msg.setDestination(44891U);
    msg.setDestinationEntity(46U);
    msg.sane = 252U;

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
    msg.setTimeStamp(0.480569349219);
    msg.setSource(52237U);
    msg.setSourceEntity(51U);
    msg.setDestination(34431U);
    msg.setDestinationEntity(132U);
    msg.sane = 149U;

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
    msg.setTimeStamp(0.890805182447);
    msg.setSource(4580U);
    msg.setSourceEntity(152U);
    msg.setDestination(30789U);
    msg.setDestinationEntity(213U);
    msg.sane = 41U;

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
    msg.setTimeStamp(0.433300008196);
    msg.setSource(6053U);
    msg.setSourceEntity(231U);
    msg.setDestination(14357U);
    msg.setDestinationEntity(123U);
    msg.value = 0.274545860677;

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
    msg.setTimeStamp(0.587340280978);
    msg.setSource(45642U);
    msg.setSourceEntity(126U);
    msg.setDestination(36729U);
    msg.setDestinationEntity(148U);
    msg.value = 0.187668324853;

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
    msg.setTimeStamp(0.247094167457);
    msg.setSource(40629U);
    msg.setSourceEntity(116U);
    msg.setDestination(29225U);
    msg.setDestinationEntity(54U);
    msg.value = 0.817744049238;

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
    msg.setTimeStamp(0.690543650964);
    msg.setSource(55282U);
    msg.setSourceEntity(104U);
    msg.setDestination(6337U);
    msg.setDestinationEntity(58U);
    msg.value = 0.0371027593881;

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
    msg.setTimeStamp(0.42686135262);
    msg.setSource(41062U);
    msg.setSourceEntity(208U);
    msg.setDestination(1517U);
    msg.setDestinationEntity(40U);
    msg.value = 0.261055255361;

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
    msg.setTimeStamp(0.785861091604);
    msg.setSource(16981U);
    msg.setSourceEntity(100U);
    msg.setDestination(23369U);
    msg.setDestinationEntity(48U);
    msg.value = 0.298193066493;

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
    msg.setTimeStamp(0.345621161576);
    msg.setSource(42813U);
    msg.setSourceEntity(68U);
    msg.setDestination(30124U);
    msg.setDestinationEntity(60U);
    msg.value = 0.915233619201;

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
    msg.setTimeStamp(0.0238231910442);
    msg.setSource(1486U);
    msg.setSourceEntity(91U);
    msg.setDestination(25181U);
    msg.setDestinationEntity(27U);
    msg.value = 0.296892898502;

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
    msg.setTimeStamp(0.974678430996);
    msg.setSource(8795U);
    msg.setSourceEntity(17U);
    msg.setDestination(48066U);
    msg.setDestinationEntity(175U);
    msg.value = 0.377557772272;

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
    msg.setTimeStamp(0.101085156627);
    msg.setSource(50279U);
    msg.setSourceEntity(183U);
    msg.setDestination(42227U);
    msg.setDestinationEntity(183U);
    msg.value = 0.42084107183;

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
    msg.setTimeStamp(0.698541849371);
    msg.setSource(8748U);
    msg.setSourceEntity(189U);
    msg.setDestination(39105U);
    msg.setDestinationEntity(140U);
    msg.value = 0.176790529199;

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
    msg.setTimeStamp(0.697883456845);
    msg.setSource(51236U);
    msg.setSourceEntity(41U);
    msg.setDestination(22751U);
    msg.setDestinationEntity(221U);
    msg.value = 0.697105118918;

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
    msg.setTimeStamp(0.163539828315);
    msg.setSource(13345U);
    msg.setSourceEntity(237U);
    msg.setDestination(46887U);
    msg.setDestinationEntity(241U);
    msg.value = 0.410329480779;

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
    msg.setTimeStamp(0.997283319872);
    msg.setSource(17378U);
    msg.setSourceEntity(62U);
    msg.setDestination(50526U);
    msg.setDestinationEntity(177U);
    msg.value = 0.935923099973;

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
    msg.setTimeStamp(0.682852314993);
    msg.setSource(21377U);
    msg.setSourceEntity(189U);
    msg.setDestination(24665U);
    msg.setDestinationEntity(225U);
    msg.value = 0.368641496705;

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
    msg.setTimeStamp(0.0144100593105);
    msg.setSource(28240U);
    msg.setSourceEntity(79U);
    msg.setDestination(53733U);
    msg.setDestinationEntity(75U);
    msg.value = 0.0194310097589;

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
    msg.setTimeStamp(0.813121200004);
    msg.setSource(61180U);
    msg.setSourceEntity(179U);
    msg.setDestination(57U);
    msg.setDestinationEntity(205U);
    msg.value = 0.354907473652;

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
    msg.setTimeStamp(0.49976393143);
    msg.setSource(2084U);
    msg.setSourceEntity(43U);
    msg.setDestination(63048U);
    msg.setDestinationEntity(167U);
    msg.value = 0.0520409476035;

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
    msg.setTimeStamp(0.985164491808);
    msg.setSource(41446U);
    msg.setSourceEntity(90U);
    msg.setDestination(4368U);
    msg.setDestinationEntity(96U);
    msg.value = 0.323032309804;

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
    msg.setTimeStamp(0.00468717028752);
    msg.setSource(51681U);
    msg.setSourceEntity(91U);
    msg.setDestination(10474U);
    msg.setDestinationEntity(23U);
    msg.value = 0.802007542325;

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
    msg.setTimeStamp(0.0594957311047);
    msg.setSource(41915U);
    msg.setSourceEntity(216U);
    msg.setDestination(21017U);
    msg.setDestinationEntity(40U);
    msg.value = 0.683954767656;

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
    msg.setTimeStamp(0.416181323004);
    msg.setSource(60642U);
    msg.setSourceEntity(185U);
    msg.setDestination(60744U);
    msg.setDestinationEntity(25U);
    msg.value = 0.392559284528;

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
    msg.setTimeStamp(0.11473694276);
    msg.setSource(10486U);
    msg.setSourceEntity(60U);
    msg.setDestination(29963U);
    msg.setDestinationEntity(200U);
    msg.value = 0.783561315241;

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
    msg.setTimeStamp(0.317333083197);
    msg.setSource(9091U);
    msg.setSourceEntity(12U);
    msg.setDestination(41888U);
    msg.setDestinationEntity(36U);
    msg.value = 0.315250947355;

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
    msg.setTimeStamp(0.34695279918);
    msg.setSource(33008U);
    msg.setSourceEntity(224U);
    msg.setDestination(14654U);
    msg.setDestinationEntity(135U);
    msg.validity = 523U;
    msg.type = 91U;
    msg.tow = 3438060705U;
    msg.base_lat = 0.57673595295;
    msg.base_lon = 0.739060050625;
    msg.base_height = 0.421293996211;
    msg.n = 0.937754311462;
    msg.e = 0.924056433372;
    msg.d = 0.315590804197;
    msg.v_n = 0.088883304778;
    msg.v_e = 0.352537406533;
    msg.v_d = 0.106354063235;
    msg.satellites = 142U;
    msg.iar_hyp = 26141U;
    msg.iar_ratio = 0.803121518478;

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
    msg.setTimeStamp(0.682635671325);
    msg.setSource(9862U);
    msg.setSourceEntity(79U);
    msg.setDestination(29957U);
    msg.setDestinationEntity(182U);
    msg.validity = 59673U;
    msg.type = 95U;
    msg.tow = 2711662738U;
    msg.base_lat = 0.262853679597;
    msg.base_lon = 0.878936767645;
    msg.base_height = 0.382831538252;
    msg.n = 0.273874373923;
    msg.e = 0.926473651797;
    msg.d = 0.605938737228;
    msg.v_n = 0.06375037627;
    msg.v_e = 0.528130689628;
    msg.v_d = 0.677227043093;
    msg.satellites = 54U;
    msg.iar_hyp = 48628U;
    msg.iar_ratio = 0.895189103237;

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
    msg.setTimeStamp(0.738079115968);
    msg.setSource(14922U);
    msg.setSourceEntity(166U);
    msg.setDestination(2170U);
    msg.setDestinationEntity(135U);
    msg.validity = 5229U;
    msg.type = 22U;
    msg.tow = 235588353U;
    msg.base_lat = 0.949019085421;
    msg.base_lon = 0.101572130744;
    msg.base_height = 0.236323792023;
    msg.n = 0.475020509454;
    msg.e = 0.958249738126;
    msg.d = 0.944026691721;
    msg.v_n = 0.551722020177;
    msg.v_e = 0.769503784984;
    msg.v_d = 0.776994235767;
    msg.satellites = 82U;
    msg.iar_hyp = 64657U;
    msg.iar_ratio = 0.127660181081;

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
    msg.setTimeStamp(0.171941974234);
    msg.setSource(5393U);
    msg.setSourceEntity(226U);
    msg.setDestination(56754U);
    msg.setDestinationEntity(182U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.00777796495242;
    tmp_msg_0.lon = 0.685661407935;
    tmp_msg_0.height = 0.148209280286;
    tmp_msg_0.x = 0.641930807537;
    tmp_msg_0.y = 0.93173020391;
    tmp_msg_0.z = 0.457596615048;
    tmp_msg_0.phi = 0.486065445009;
    tmp_msg_0.theta = 0.66508022529;
    tmp_msg_0.psi = 0.445947561377;
    tmp_msg_0.u = 0.67790619433;
    tmp_msg_0.v = 0.27883805102;
    tmp_msg_0.w = 0.753608157025;
    tmp_msg_0.vx = 0.10212433773;
    tmp_msg_0.vy = 0.620913245445;
    tmp_msg_0.vz = 0.582591490139;
    tmp_msg_0.p = 0.133760700029;
    tmp_msg_0.q = 0.517532474744;
    tmp_msg_0.r = 0.49740187235;
    tmp_msg_0.depth = 0.684017838323;
    tmp_msg_0.alt = 0.749566530477;
    msg.state.set(tmp_msg_0);
    msg.type = 33U;

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
    msg.setTimeStamp(0.0939866419814);
    msg.setSource(65324U);
    msg.setSourceEntity(108U);
    msg.setDestination(13277U);
    msg.setDestinationEntity(119U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.78904780109;
    tmp_msg_0.lon = 0.476132492327;
    tmp_msg_0.height = 0.468002266888;
    tmp_msg_0.x = 0.193967937049;
    tmp_msg_0.y = 0.319889196637;
    tmp_msg_0.z = 0.561603881287;
    tmp_msg_0.phi = 0.713881864869;
    tmp_msg_0.theta = 0.934153149744;
    tmp_msg_0.psi = 0.175824837101;
    tmp_msg_0.u = 0.598616751259;
    tmp_msg_0.v = 0.129304523074;
    tmp_msg_0.w = 0.846732828924;
    tmp_msg_0.vx = 0.60678068426;
    tmp_msg_0.vy = 0.675354610789;
    tmp_msg_0.vz = 0.897180050653;
    tmp_msg_0.p = 0.98079149078;
    tmp_msg_0.q = 0.587029517113;
    tmp_msg_0.r = 0.684028248111;
    tmp_msg_0.depth = 0.4716188901;
    tmp_msg_0.alt = 0.0661031449314;
    msg.state.set(tmp_msg_0);
    msg.type = 198U;

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
    msg.setTimeStamp(0.389640162056);
    msg.setSource(50959U);
    msg.setSourceEntity(225U);
    msg.setDestination(44877U);
    msg.setDestinationEntity(133U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.141520220273;
    tmp_msg_0.lon = 0.195499177943;
    tmp_msg_0.height = 0.591768148938;
    tmp_msg_0.x = 0.973091677444;
    tmp_msg_0.y = 0.270833963522;
    tmp_msg_0.z = 0.213982962103;
    tmp_msg_0.phi = 0.326516790662;
    tmp_msg_0.theta = 0.919249429905;
    tmp_msg_0.psi = 0.809566719862;
    tmp_msg_0.u = 0.633491888597;
    tmp_msg_0.v = 0.220834269554;
    tmp_msg_0.w = 0.898317467763;
    tmp_msg_0.vx = 0.494890353183;
    tmp_msg_0.vy = 0.466465583146;
    tmp_msg_0.vz = 0.13652644136;
    tmp_msg_0.p = 0.935396606344;
    tmp_msg_0.q = 0.960036454797;
    tmp_msg_0.r = 0.259316462023;
    tmp_msg_0.depth = 0.93001103499;
    tmp_msg_0.alt = 0.476214883463;
    msg.state.set(tmp_msg_0);
    msg.type = 157U;

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
    msg.setTimeStamp(0.886872871994);
    msg.setSource(50388U);
    msg.setSourceEntity(93U);
    msg.setDestination(17981U);
    msg.setDestinationEntity(136U);
    msg.value = 0.618712881328;

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
    msg.setTimeStamp(0.513570161726);
    msg.setSource(7858U);
    msg.setSourceEntity(246U);
    msg.setDestination(30466U);
    msg.setDestinationEntity(196U);
    msg.value = 0.0971645042925;

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
    msg.setTimeStamp(0.239189253775);
    msg.setSource(13220U);
    msg.setSourceEntity(182U);
    msg.setDestination(36972U);
    msg.setDestinationEntity(189U);
    msg.value = 0.15727016838;

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
    msg.setTimeStamp(0.84998394151);
    msg.setSource(36852U);
    msg.setSourceEntity(98U);
    msg.setDestination(17301U);
    msg.setDestinationEntity(53U);
    msg.value = 0.701001468028;

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
    msg.setTimeStamp(0.139696250595);
    msg.setSource(19821U);
    msg.setSourceEntity(40U);
    msg.setDestination(19304U);
    msg.setDestinationEntity(67U);
    msg.value = 0.454327097719;

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
    msg.setTimeStamp(0.276189292613);
    msg.setSource(50004U);
    msg.setSourceEntity(133U);
    msg.setDestination(6049U);
    msg.setDestinationEntity(57U);
    msg.value = 0.525398917725;

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
    msg.setTimeStamp(0.268317028731);
    msg.setSource(61667U);
    msg.setSourceEntity(214U);
    msg.setDestination(54310U);
    msg.setDestinationEntity(159U);
    msg.value = 0.203401445763;

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
    msg.setTimeStamp(0.740983750228);
    msg.setSource(45117U);
    msg.setSourceEntity(101U);
    msg.setDestination(57561U);
    msg.setDestinationEntity(250U);
    msg.value = 0.575493649297;

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
    msg.setTimeStamp(0.456383317524);
    msg.setSource(56536U);
    msg.setSourceEntity(250U);
    msg.setDestination(55015U);
    msg.setDestinationEntity(160U);
    msg.value = 0.416734476854;

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
    msg.setTimeStamp(0.123126574719);
    msg.setSource(4771U);
    msg.setSourceEntity(24U);
    msg.setDestination(62751U);
    msg.setDestinationEntity(179U);
    msg.value = 0.411014047454;

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
    msg.setTimeStamp(0.194284634841);
    msg.setSource(15937U);
    msg.setSourceEntity(124U);
    msg.setDestination(53221U);
    msg.setDestinationEntity(225U);
    msg.value = 0.0990500811494;

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
    msg.setTimeStamp(0.0303148317479);
    msg.setSource(41368U);
    msg.setSourceEntity(25U);
    msg.setDestination(31257U);
    msg.setDestinationEntity(143U);
    msg.value = 0.618334444157;

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
    msg.setTimeStamp(0.29047958842);
    msg.setSource(57529U);
    msg.setSourceEntity(238U);
    msg.setDestination(7938U);
    msg.setDestinationEntity(139U);
    msg.value = 0.376960863732;

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
    msg.setTimeStamp(0.232325060441);
    msg.setSource(24827U);
    msg.setSourceEntity(206U);
    msg.setDestination(15698U);
    msg.setDestinationEntity(178U);
    msg.value = 0.285933738494;

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
    msg.setTimeStamp(0.246618394356);
    msg.setSource(9726U);
    msg.setSourceEntity(23U);
    msg.setDestination(53073U);
    msg.setDestinationEntity(164U);
    msg.value = 0.0818493886332;

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
    msg.setTimeStamp(0.196315092416);
    msg.setSource(1424U);
    msg.setSourceEntity(249U);
    msg.setDestination(30108U);
    msg.setDestinationEntity(201U);
    msg.id = 115U;
    msg.zoom = 46U;
    msg.action = 46U;

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
    msg.setTimeStamp(0.666856849313);
    msg.setSource(49817U);
    msg.setSourceEntity(251U);
    msg.setDestination(7577U);
    msg.setDestinationEntity(133U);
    msg.id = 20U;
    msg.zoom = 5U;
    msg.action = 237U;

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
    msg.setTimeStamp(0.694096932631);
    msg.setSource(2171U);
    msg.setSourceEntity(84U);
    msg.setDestination(33660U);
    msg.setDestinationEntity(45U);
    msg.id = 168U;
    msg.zoom = 230U;
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
    msg.setTimeStamp(0.467113730058);
    msg.setSource(19526U);
    msg.setSourceEntity(202U);
    msg.setDestination(34591U);
    msg.setDestinationEntity(195U);
    msg.id = 170U;
    msg.value = 0.661548849108;

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
    msg.setTimeStamp(0.875529377747);
    msg.setSource(36434U);
    msg.setSourceEntity(54U);
    msg.setDestination(2710U);
    msg.setDestinationEntity(80U);
    msg.id = 153U;
    msg.value = 0.227974523054;

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
    msg.setTimeStamp(0.935703146667);
    msg.setSource(57136U);
    msg.setSourceEntity(53U);
    msg.setDestination(13482U);
    msg.setDestinationEntity(48U);
    msg.id = 238U;
    msg.value = 0.85784527072;

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
    msg.setTimeStamp(0.418159924569);
    msg.setSource(25534U);
    msg.setSourceEntity(127U);
    msg.setDestination(24451U);
    msg.setDestinationEntity(26U);
    msg.id = 14U;
    msg.value = 0.86484618108;

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
    msg.setTimeStamp(0.300442430992);
    msg.setSource(20954U);
    msg.setSourceEntity(213U);
    msg.setDestination(29727U);
    msg.setDestinationEntity(75U);
    msg.id = 230U;
    msg.value = 0.559595152182;

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
    msg.setTimeStamp(0.655209655355);
    msg.setSource(3975U);
    msg.setSourceEntity(42U);
    msg.setDestination(40703U);
    msg.setDestinationEntity(132U);
    msg.id = 209U;
    msg.value = 0.972300671892;

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
    msg.setTimeStamp(0.186991709969);
    msg.setSource(24868U);
    msg.setSourceEntity(251U);
    msg.setDestination(32605U);
    msg.setDestinationEntity(252U);
    msg.id = 82U;
    msg.angle = 0.288270310126;

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
    msg.setTimeStamp(0.925593669617);
    msg.setSource(4494U);
    msg.setSourceEntity(235U);
    msg.setDestination(3938U);
    msg.setDestinationEntity(56U);
    msg.id = 2U;
    msg.angle = 0.454436963315;

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
    msg.setTimeStamp(0.35406084042);
    msg.setSource(45366U);
    msg.setSourceEntity(124U);
    msg.setDestination(41079U);
    msg.setDestinationEntity(37U);
    msg.id = 42U;
    msg.angle = 0.541597967876;

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
    msg.setTimeStamp(0.909494218262);
    msg.setSource(21925U);
    msg.setSourceEntity(107U);
    msg.setDestination(32381U);
    msg.setDestinationEntity(244U);
    msg.op = 158U;
    msg.actions.assign("AMWFBFMXHUSGGIJPLIVNNRMQZHSEFBDKGTRTUIIHEMEMZTFKGQDUMPGZDKNPKFSKEYGHBQPSUVSCZEKAYEWIANGHUNAVOKZTNRBGBOMOWQRZ");

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
    msg.setTimeStamp(0.989941108891);
    msg.setSource(50427U);
    msg.setSourceEntity(99U);
    msg.setDestination(35517U);
    msg.setDestinationEntity(87U);
    msg.op = 222U;
    msg.actions.assign("FXRXWHLWJNGYKHQCEONIEUKBRVLXTQZTSKIVHCKMZNLFSLGJDLGNRIRTQPKNWUQMIUSCMQIXCHKWCUTODYRRPBSTZJTBPOCFJUEQODASGLKMISFAVYQWXXBFHGIVSVAGYSONUUFNUZCGCUTJLTWZWACPSEYLMDADROQAFHVHFRWRPKMYLFNE");

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
    msg.setTimeStamp(0.341490110956);
    msg.setSource(11078U);
    msg.setSourceEntity(81U);
    msg.setDestination(46484U);
    msg.setDestinationEntity(229U);
    msg.op = 223U;
    msg.actions.assign("KNJHWBGHOIXOPEYEUZFOFZEJTGIBSPLBYRAUAGETJTZCRWUWZQPXPBNSTTIEHCIAKEGSCBTCFTOGMJPKEHMGCXBQIIPMGFFQAZVBHDDMARGBOIYW");

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
    msg.setTimeStamp(0.377165150901);
    msg.setSource(56034U);
    msg.setSourceEntity(143U);
    msg.setDestination(54310U);
    msg.setDestinationEntity(89U);
    msg.actions.assign("NJIMAPBTKQBFUZHHAADPENEOOXVKVRSDEEMUSFYKEVAOMNKPTWGVYWUDZYCKXGGFPAUELQDVTHCORGLIJKNISASZQNUZWMHNTECBWFLBCPBAOWJYJSDNFHKRLPJZWPUKFXXTWRDCRBIVQJIKUHTCPQLXYOLRKTBQSSQRCQNDGXYVUBMNPXAYMYSHZETOFGUXADJAZIQJERBMOXFILZIQCGDJMBHHOT");

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
    msg.setTimeStamp(0.852999841285);
    msg.setSource(60068U);
    msg.setSourceEntity(174U);
    msg.setDestination(47061U);
    msg.setDestinationEntity(125U);
    msg.actions.assign("NUEATBKGRBBIWQRWVVEZLRRWLKAQESPBTKHYQMVATVLIBHCDIIKQQSO");

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
    msg.setTimeStamp(0.225325680449);
    msg.setSource(15683U);
    msg.setSourceEntity(87U);
    msg.setDestination(7437U);
    msg.setDestinationEntity(102U);
    msg.actions.assign("KSKLNBWIYKGVLGGRIEBILCILNUOALY");

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
    msg.setTimeStamp(0.619320545637);
    msg.setSource(3243U);
    msg.setSourceEntity(38U);
    msg.setDestination(54982U);
    msg.setDestinationEntity(77U);
    msg.button = 187U;
    msg.value = 7U;

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
    msg.setTimeStamp(0.423710171089);
    msg.setSource(51998U);
    msg.setSourceEntity(125U);
    msg.setDestination(19560U);
    msg.setDestinationEntity(118U);
    msg.button = 66U;
    msg.value = 155U;

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
    msg.setTimeStamp(0.972334763271);
    msg.setSource(37747U);
    msg.setSourceEntity(66U);
    msg.setDestination(57549U);
    msg.setDestinationEntity(73U);
    msg.button = 46U;
    msg.value = 86U;

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
    msg.setTimeStamp(0.515001166553);
    msg.setSource(5877U);
    msg.setSourceEntity(103U);
    msg.setDestination(50711U);
    msg.setDestinationEntity(8U);
    msg.op = 9U;
    msg.text.assign("XDOLYYSMAWFGUCFFZHIYATWPXZXTVNQGVLWTEYGXKJSIFJBMICOTQRTNEQURWUAGOHXQVDRZWOSPLZAPPHDQGPTCHPUXRZI");

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
    msg.setTimeStamp(0.0456523929089);
    msg.setSource(53342U);
    msg.setSourceEntity(77U);
    msg.setDestination(62689U);
    msg.setDestinationEntity(171U);
    msg.op = 99U;
    msg.text.assign("SHHCTFCKIMGQKQVZBTCLRNPPBYAKSWVWNLYZZFWGNVEMMFBBYZNQGXULKHBIXDRDXRPUMBAFZVEKNPXXHOJFRTSADPIBXYJJLAWERAFUZTYYGTHLEAECNXTTQWOLZO");

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
    msg.setTimeStamp(0.124056785483);
    msg.setSource(39970U);
    msg.setSourceEntity(71U);
    msg.setDestination(56393U);
    msg.setDestinationEntity(139U);
    msg.op = 251U;
    msg.text.assign("LBSTOADXCJYTDJZZSWIMTRVEKGZFGKGAPHPHXKNYXPQYIWTSOSTFXKDHBBKVPSNFLQODKHVWUXIHHRACVMDXHBDUUIUUSNOLKCEMRWWKEIPJNADUVUWMPVGYQYQNICZZLFWVCNSQPESQ");

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
    msg.setTimeStamp(0.768588925996);
    msg.setSource(65432U);
    msg.setSourceEntity(35U);
    msg.setDestination(14524U);
    msg.setDestinationEntity(247U);
    msg.op = 14U;
    msg.time_remain = 0.634201146529;
    msg.sched_time = 0.776024589288;

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
    msg.setTimeStamp(0.463372934528);
    msg.setSource(35379U);
    msg.setSourceEntity(230U);
    msg.setDestination(26733U);
    msg.setDestinationEntity(87U);
    msg.op = 196U;
    msg.time_remain = 0.340267958324;
    msg.sched_time = 0.839925777024;

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
    msg.setTimeStamp(0.148888400853);
    msg.setSource(11526U);
    msg.setSourceEntity(68U);
    msg.setDestination(33281U);
    msg.setDestinationEntity(177U);
    msg.op = 7U;
    msg.time_remain = 0.0938101070794;
    msg.sched_time = 0.106839548695;

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
    msg.setTimeStamp(0.891488117922);
    msg.setSource(39825U);
    msg.setSourceEntity(153U);
    msg.setDestination(60249U);
    msg.setDestinationEntity(220U);
    msg.name.assign("EQJYNMOHRXWLBQLQIODALUKXWOKCISEONEYXJSJADNGCJFTSXMVPTMXYLTYUBZPFTBLS");
    msg.op = 243U;
    msg.sched_time = 0.660173434318;

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
    msg.setTimeStamp(0.522444463366);
    msg.setSource(48491U);
    msg.setSourceEntity(188U);
    msg.setDestination(18276U);
    msg.setDestinationEntity(10U);
    msg.name.assign("LWFUKJUYRGCNGAOHLIZBBXTRFMQTZXTYMCNHMCQNOVBYSRHSBKOPCPKUSLTMKIISZQXFTGIOEADLXADECDJELXYOTCYWWLBOIMGOWOEYGHAJTVHCPKWIPZFJKDCTSLUETNEQAQVAJUDEHMDS");
    msg.op = 169U;
    msg.sched_time = 0.465991633047;

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
    msg.setTimeStamp(0.15495179379);
    msg.setSource(62722U);
    msg.setSourceEntity(174U);
    msg.setDestination(9452U);
    msg.setDestinationEntity(231U);
    msg.name.assign("TCDOELIVZBXQVVQTILSNWEYVQFTEWCJNUAMODTFKJWMFKLLRJQFRKZDSAMYHBSBRCLOATEOLXSCURJIDEAVSSBZQKIGMRPGZTXCKEMVHPECIKMUEKQKIXGKGOXWHPYZZFMYLRNYGEQ");
    msg.op = 58U;
    msg.sched_time = 0.941352510181;

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
    msg.setTimeStamp(0.166887574632);
    msg.setSource(23453U);
    msg.setSourceEntity(37U);
    msg.setDestination(1970U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.763782751587);
    msg.setSource(26283U);
    msg.setSourceEntity(121U);
    msg.setDestination(18099U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.750678125896);
    msg.setSource(50473U);
    msg.setSourceEntity(61U);
    msg.setDestination(557U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.629930359691);
    msg.setSource(53831U);
    msg.setSourceEntity(91U);
    msg.setDestination(31009U);
    msg.setDestinationEntity(152U);
    msg.name.assign("ZVZSOZQPZFQOSWMYHWTTRAKNIDHIJLGCCAVKSGYKBNILZAAFEOYTREFQFFKGBXJGVJBZNKZVCGMWFJWTZUSFUHHIAQHOSRLMUEPWBCAJLT");
    msg.state = 176U;

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
    msg.setTimeStamp(0.351654517281);
    msg.setSource(26032U);
    msg.setSourceEntity(220U);
    msg.setDestination(47147U);
    msg.setDestinationEntity(98U);
    msg.name.assign("FJVOXEXELMRHLBIKRKXQYEJLOMOVFKVYCCGOPEAZFPJADQSLPSMIZJNIORAHSWRVYSIMRIQWWTPENGGHHFYAWIQXUCDBWYBKRGPEVGCXWUJGSZEXJNYGAIJVMUWQSDKKBFXOFWLDMORUOTCYHGBQRFKDHUSBEFVYHMX");
    msg.state = 169U;

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
    msg.setTimeStamp(0.27586297844);
    msg.setSource(51073U);
    msg.setSourceEntity(138U);
    msg.setDestination(32885U);
    msg.setDestinationEntity(20U);
    msg.name.assign("CCSIPJZWQAEAOOIRAINTKGAUDKPRPYQMLUZFBMLODYNHMQFLUOUYKNJCSZVQKKCIMKMCHRLDLJIYQC");
    msg.state = 2U;

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
    msg.setTimeStamp(0.674294328982);
    msg.setSource(19498U);
    msg.setSourceEntity(229U);
    msg.setDestination(40575U);
    msg.setDestinationEntity(54U);
    msg.name.assign("PRULGBLBPFMMCZAMVIVCDAYOWQSHBLGLEISLFZDBKGTXFZUJKGYDWYINOWOEAHNT");
    msg.value = 26U;

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
    msg.setTimeStamp(0.137487326434);
    msg.setSource(37889U);
    msg.setSourceEntity(21U);
    msg.setDestination(17794U);
    msg.setDestinationEntity(98U);
    msg.name.assign("LXAZVVDVQGGOKIUFUJBMITHAYB");
    msg.value = 59U;

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
    msg.setTimeStamp(0.0466962210833);
    msg.setSource(11348U);
    msg.setSourceEntity(85U);
    msg.setDestination(41093U);
    msg.setDestinationEntity(168U);
    msg.name.assign("QUUKCWKSHZPEDIELQUMTXMPZAIUYVQXEILSSDNSQDVKAXNHYLNFUAHTHFYVIOYVZERTCKBGMBSPBZJCRDSLBXISIJXDBCVMVDTNRAWVHKGLMAZYACNHGRJJGIDRZTPLWRFJ");
    msg.value = 124U;

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
    msg.setTimeStamp(0.535077546048);
    msg.setSource(44247U);
    msg.setSourceEntity(196U);
    msg.setDestination(34823U);
    msg.setDestinationEntity(50U);
    msg.name.assign("THEOGVWZMCDNQNTXBUIDUMYYXZXWPEONZPQGLZGEUFLCTSYHZIKKFBAVTMRCHGJHJQBORWUGZYOORJZYUNLLDKKCAUICMMYCZTXSBYKSDJYFFKKFIZIMWNWAXHUPVLDNXTOBTJBKPQDREDSWSPDBMVSHPPJQJWROWWFANQBSJAECENYGOCFNCMSWEHOUIBIKQTXRHS");

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
    msg.setTimeStamp(0.539610347423);
    msg.setSource(25982U);
    msg.setSourceEntity(67U);
    msg.setDestination(58079U);
    msg.setDestinationEntity(136U);
    msg.name.assign("QBVUBGPIITIUALLWPDKERKGSFXZVOUXQMIHFMYSLAVYBYCNPDTJORURKHSRUXOEBANMFRZBDOHFOAIVQPIJEERGB");

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
    msg.setTimeStamp(0.0628386841331);
    msg.setSource(41330U);
    msg.setSourceEntity(241U);
    msg.setDestination(42187U);
    msg.setDestinationEntity(181U);
    msg.name.assign("XQZRHSDUSUIXVOEHXVKEXZCIQOWCWBONHHKTOVYGZSBONPJHITXMQRTVRERKDFGUMWMTJPWE");

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
    msg.setTimeStamp(0.880787916812);
    msg.setSource(54045U);
    msg.setSourceEntity(238U);
    msg.setDestination(62426U);
    msg.setDestinationEntity(43U);
    msg.name.assign("ILWCYERSOVPDLQCUPVTCNXDETTOSRNXNXEZIBFMZXKNGOJEAQHXGSACJMISBCPVMIEHRIZSGGPZHTUNYWGCUNMBLFTFVVYLQMSFJYKKYFOXIPQQZIUFVZILJAWPMYYOADEDBDHEYERLLAJJGMHTSCOKINQOBLNHDDHPXSRLWJJBCMPGDGBFEICZPWGBKZNCOJNVWVTBKRXATUUKSQUMDRXSADAQZTQYEAARWHHOWOUHTZQWVRUKFKMGRYKBF");
    msg.value = 175U;

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
    msg.setTimeStamp(0.884619551877);
    msg.setSource(4705U);
    msg.setSourceEntity(24U);
    msg.setDestination(40949U);
    msg.setDestinationEntity(219U);
    msg.name.assign("PLLBYKPGMAXIITDQQZPKEMIFMKFPIRPVXFWVZUXNHFEHQDNBQKGJWWYJUUEAARXRVUJGCRAWBNJOTWUSDWCLIDSNHKQDLRGVIQGCHNIXHYJUCZTXAWPTZAURKQLSJZOAHCYSFCNFDVPKUBFRANHYXQSCEWZDORGKVYOBZVNPSIWTKSXTSXOEIHCATEEOHDFQUGSCKMJEZZLJTYNM");
    msg.value = 83U;

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
    msg.setTimeStamp(0.714028387959);
    msg.setSource(58775U);
    msg.setSourceEntity(50U);
    msg.setDestination(35794U);
    msg.setDestinationEntity(151U);
    msg.name.assign("RNYAINLEGIVLVHJFSXBMBFDBMBFBCAGZTOTFYEMJUJPUKFKODLEETKFHCXZYIRCYGWTQTEIXHMAFEQJRSAUHMPNZBSSNJMYPJSKHIRGPVGHICVVWIKTQWUWNLLJSZKAWUDQHDRAFU");
    msg.value = 6U;

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
    msg.setTimeStamp(0.55076812234);
    msg.setSource(54893U);
    msg.setSourceEntity(225U);
    msg.setDestination(34983U);
    msg.setDestinationEntity(173U);
    msg.id = 165U;
    msg.period = 2833604664U;
    msg.duty_cycle = 3508102878U;

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
    msg.setTimeStamp(0.359189386851);
    msg.setSource(23944U);
    msg.setSourceEntity(122U);
    msg.setDestination(42969U);
    msg.setDestinationEntity(99U);
    msg.id = 41U;
    msg.period = 4031418273U;
    msg.duty_cycle = 3098629460U;

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
    msg.setTimeStamp(0.216887261078);
    msg.setSource(22216U);
    msg.setSourceEntity(172U);
    msg.setDestination(46071U);
    msg.setDestinationEntity(51U);
    msg.id = 254U;
    msg.period = 3719043310U;
    msg.duty_cycle = 3777952291U;

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
    msg.setTimeStamp(0.597047362917);
    msg.setSource(53207U);
    msg.setSourceEntity(109U);
    msg.setDestination(52624U);
    msg.setDestinationEntity(131U);
    msg.id = 134U;
    msg.period = 4025722504U;
    msg.duty_cycle = 2381110048U;

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
    msg.setTimeStamp(0.764911651759);
    msg.setSource(35518U);
    msg.setSourceEntity(114U);
    msg.setDestination(58446U);
    msg.setDestinationEntity(80U);
    msg.id = 28U;
    msg.period = 264062512U;
    msg.duty_cycle = 2589739021U;

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
    msg.setTimeStamp(0.128427588312);
    msg.setSource(9631U);
    msg.setSourceEntity(19U);
    msg.setDestination(31156U);
    msg.setDestinationEntity(112U);
    msg.id = 207U;
    msg.period = 3254175542U;
    msg.duty_cycle = 4116542303U;

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
    msg.setTimeStamp(0.82268651237);
    msg.setSource(35933U);
    msg.setSourceEntity(40U);
    msg.setDestination(10817U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.31970715314;
    msg.lon = 0.873515286076;
    msg.height = 0.950591147404;
    msg.x = 0.371853900816;
    msg.y = 0.192881638427;
    msg.z = 0.355854932512;
    msg.phi = 0.017499237845;
    msg.theta = 0.797895437624;
    msg.psi = 0.413668751258;
    msg.u = 0.441969972029;
    msg.v = 0.507777642592;
    msg.w = 0.800347688169;
    msg.vx = 0.00754936218266;
    msg.vy = 0.429142748011;
    msg.vz = 0.521941495433;
    msg.p = 0.960757406278;
    msg.q = 0.0886432954447;
    msg.r = 0.323792823933;
    msg.depth = 0.681167828873;
    msg.alt = 0.527408689595;

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
    msg.setTimeStamp(0.203035831132);
    msg.setSource(514U);
    msg.setSourceEntity(5U);
    msg.setDestination(15502U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.815397981325;
    msg.lon = 0.416085607954;
    msg.height = 0.976370201026;
    msg.x = 0.0661967926433;
    msg.y = 0.0586020504281;
    msg.z = 0.169293154723;
    msg.phi = 0.566666786214;
    msg.theta = 0.00942570828225;
    msg.psi = 0.893017093097;
    msg.u = 0.126194955183;
    msg.v = 0.79511436706;
    msg.w = 0.745050634126;
    msg.vx = 0.0543159223606;
    msg.vy = 0.732370419024;
    msg.vz = 0.646038063771;
    msg.p = 0.165193326119;
    msg.q = 0.310378146171;
    msg.r = 0.908125707071;
    msg.depth = 0.452198076715;
    msg.alt = 0.330511943893;

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
    msg.setTimeStamp(0.890151056251);
    msg.setSource(17871U);
    msg.setSourceEntity(72U);
    msg.setDestination(25603U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.457052248286;
    msg.lon = 0.503436091428;
    msg.height = 0.0344153149025;
    msg.x = 0.743854531306;
    msg.y = 0.889401481063;
    msg.z = 0.37438588422;
    msg.phi = 0.653463463438;
    msg.theta = 0.876462613918;
    msg.psi = 0.403351575331;
    msg.u = 0.9502787383;
    msg.v = 0.515259235126;
    msg.w = 0.620961202854;
    msg.vx = 0.820474502745;
    msg.vy = 0.90074072891;
    msg.vz = 0.0141615663759;
    msg.p = 0.260094892184;
    msg.q = 0.628162452161;
    msg.r = 0.990525787331;
    msg.depth = 0.755389990668;
    msg.alt = 0.722494012713;

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
    msg.setTimeStamp(0.227445238503);
    msg.setSource(2992U);
    msg.setSourceEntity(235U);
    msg.setDestination(20479U);
    msg.setDestinationEntity(75U);
    msg.x = 0.441351202119;
    msg.y = 0.300261320184;
    msg.z = 0.196337514251;

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
    msg.setTimeStamp(0.917610103456);
    msg.setSource(62996U);
    msg.setSourceEntity(1U);
    msg.setDestination(45424U);
    msg.setDestinationEntity(253U);
    msg.x = 0.684273335756;
    msg.y = 0.041768228512;
    msg.z = 0.579714049955;

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
    msg.setTimeStamp(0.158429910771);
    msg.setSource(32767U);
    msg.setSourceEntity(54U);
    msg.setDestination(18028U);
    msg.setDestinationEntity(176U);
    msg.x = 0.945446376537;
    msg.y = 0.86451965296;
    msg.z = 0.429836622014;

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
    msg.setTimeStamp(0.0786740232636);
    msg.setSource(57820U);
    msg.setSourceEntity(89U);
    msg.setDestination(41519U);
    msg.setDestinationEntity(54U);
    msg.value = 0.224731669022;

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
    msg.setTimeStamp(0.365793434177);
    msg.setSource(16845U);
    msg.setSourceEntity(49U);
    msg.setDestination(37761U);
    msg.setDestinationEntity(55U);
    msg.value = 0.801815967857;

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
    msg.setTimeStamp(0.776217389992);
    msg.setSource(40703U);
    msg.setSourceEntity(212U);
    msg.setDestination(25768U);
    msg.setDestinationEntity(230U);
    msg.value = 0.603177051753;

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
    msg.setTimeStamp(0.742560210414);
    msg.setSource(26749U);
    msg.setSourceEntity(210U);
    msg.setDestination(37796U);
    msg.setDestinationEntity(204U);
    msg.value = 0.847041691539;

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
    msg.setTimeStamp(0.787367264498);
    msg.setSource(45087U);
    msg.setSourceEntity(208U);
    msg.setDestination(48824U);
    msg.setDestinationEntity(15U);
    msg.value = 0.846870487779;

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
    msg.setTimeStamp(0.51584708372);
    msg.setSource(17091U);
    msg.setSourceEntity(40U);
    msg.setDestination(45399U);
    msg.setDestinationEntity(105U);
    msg.value = 0.694715375883;

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
    msg.setTimeStamp(0.720436010615);
    msg.setSource(4852U);
    msg.setSourceEntity(151U);
    msg.setDestination(34945U);
    msg.setDestinationEntity(69U);
    msg.x = 0.742855596712;
    msg.y = 0.0823594900991;
    msg.z = 0.540188668042;
    msg.phi = 0.678129480622;
    msg.theta = 0.214731618255;
    msg.psi = 0.927144748652;
    msg.p = 0.889944945989;
    msg.q = 0.497107327933;
    msg.r = 0.126722681877;
    msg.u = 0.355792524741;
    msg.v = 0.0629454919378;
    msg.w = 0.998238152141;
    msg.bias_psi = 0.690004878845;
    msg.bias_r = 0.392560818863;

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
    msg.setTimeStamp(0.228047480127);
    msg.setSource(9773U);
    msg.setSourceEntity(241U);
    msg.setDestination(23698U);
    msg.setDestinationEntity(110U);
    msg.x = 0.634389252261;
    msg.y = 0.668674093295;
    msg.z = 0.954410760837;
    msg.phi = 0.54559805437;
    msg.theta = 0.350481045252;
    msg.psi = 0.496794680167;
    msg.p = 0.207377897456;
    msg.q = 0.354795040655;
    msg.r = 0.809433308252;
    msg.u = 0.473038627801;
    msg.v = 0.700769747667;
    msg.w = 0.472559487443;
    msg.bias_psi = 0.459185566632;
    msg.bias_r = 0.621909740899;

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
    msg.setTimeStamp(0.116268537368);
    msg.setSource(21755U);
    msg.setSourceEntity(0U);
    msg.setDestination(43374U);
    msg.setDestinationEntity(38U);
    msg.x = 0.817344769813;
    msg.y = 0.401831411446;
    msg.z = 0.993619487909;
    msg.phi = 0.156121915941;
    msg.theta = 0.314254002392;
    msg.psi = 0.665001115118;
    msg.p = 0.985806378829;
    msg.q = 0.886627920028;
    msg.r = 0.750910642457;
    msg.u = 0.932056057674;
    msg.v = 0.98705724937;
    msg.w = 0.640380900336;
    msg.bias_psi = 0.407631548125;
    msg.bias_r = 0.276425603693;

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
    msg.setTimeStamp(0.126695989192);
    msg.setSource(48270U);
    msg.setSourceEntity(248U);
    msg.setDestination(26547U);
    msg.setDestinationEntity(134U);
    msg.bias_psi = 0.922689679292;
    msg.bias_r = 0.879095939552;
    msg.cog = 0.635186882698;
    msg.cyaw = 0.393902876622;
    msg.lbl_rej_level = 0.882636246907;
    msg.gps_rej_level = 0.600459276831;
    msg.custom_x = 0.200774567801;
    msg.custom_y = 0.787211361331;
    msg.custom_z = 0.395422633721;

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
    msg.setTimeStamp(0.131046332147);
    msg.setSource(19862U);
    msg.setSourceEntity(167U);
    msg.setDestination(20157U);
    msg.setDestinationEntity(219U);
    msg.bias_psi = 0.292819106039;
    msg.bias_r = 0.725220942546;
    msg.cog = 0.0814602014642;
    msg.cyaw = 0.136134590621;
    msg.lbl_rej_level = 0.357084230658;
    msg.gps_rej_level = 0.173351054377;
    msg.custom_x = 0.463958112682;
    msg.custom_y = 0.474479251914;
    msg.custom_z = 0.313705812067;

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
    msg.setTimeStamp(0.387041954477);
    msg.setSource(7696U);
    msg.setSourceEntity(74U);
    msg.setDestination(37838U);
    msg.setDestinationEntity(44U);
    msg.bias_psi = 0.944608498523;
    msg.bias_r = 0.21544854973;
    msg.cog = 0.437693489305;
    msg.cyaw = 0.724917809299;
    msg.lbl_rej_level = 0.689095850159;
    msg.gps_rej_level = 0.979819696426;
    msg.custom_x = 0.624526426513;
    msg.custom_y = 0.804169343529;
    msg.custom_z = 0.176067124705;

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
    msg.setTimeStamp(0.677382594612);
    msg.setSource(12868U);
    msg.setSourceEntity(95U);
    msg.setDestination(4394U);
    msg.setDestinationEntity(78U);
    msg.utc_time = 0.0685455648992;
    msg.reason = 169U;

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
    msg.setTimeStamp(0.724093968863);
    msg.setSource(37143U);
    msg.setSourceEntity(187U);
    msg.setDestination(14654U);
    msg.setDestinationEntity(118U);
    msg.utc_time = 0.408965004154;
    msg.reason = 185U;

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
    msg.setTimeStamp(0.704536880164);
    msg.setSource(46361U);
    msg.setSourceEntity(253U);
    msg.setDestination(49189U);
    msg.setDestinationEntity(196U);
    msg.utc_time = 0.712177718783;
    msg.reason = 203U;

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
    msg.setTimeStamp(0.371751980792);
    msg.setSource(13745U);
    msg.setSourceEntity(80U);
    msg.setDestination(44998U);
    msg.setDestinationEntity(161U);
    msg.id = 125U;
    msg.range = 0.845462246369;
    msg.acceptance = 2U;

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
    msg.setTimeStamp(0.0571240270105);
    msg.setSource(42736U);
    msg.setSourceEntity(154U);
    msg.setDestination(40246U);
    msg.setDestinationEntity(93U);
    msg.id = 245U;
    msg.range = 0.811815661352;
    msg.acceptance = 124U;

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
    msg.setTimeStamp(0.322178213752);
    msg.setSource(14942U);
    msg.setSourceEntity(67U);
    msg.setDestination(25368U);
    msg.setDestinationEntity(164U);
    msg.id = 155U;
    msg.range = 0.316330284444;
    msg.acceptance = 65U;

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
    msg.setTimeStamp(0.5771994174);
    msg.setSource(61670U);
    msg.setSourceEntity(159U);
    msg.setDestination(14933U);
    msg.setDestinationEntity(124U);
    msg.type = 162U;
    msg.reason = 112U;
    msg.value = 0.417946137252;
    msg.timestep = 0.60826012249;

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
    msg.setTimeStamp(0.436952717219);
    msg.setSource(62622U);
    msg.setSourceEntity(54U);
    msg.setDestination(58298U);
    msg.setDestinationEntity(65U);
    msg.type = 6U;
    msg.reason = 192U;
    msg.value = 0.405835551267;
    msg.timestep = 0.0508083280488;

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
    msg.setTimeStamp(0.678051121522);
    msg.setSource(30826U);
    msg.setSourceEntity(19U);
    msg.setDestination(43385U);
    msg.setDestinationEntity(3U);
    msg.type = 213U;
    msg.reason = 217U;
    msg.value = 0.815988556299;
    msg.timestep = 0.879799823105;

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
    msg.setTimeStamp(0.798768172038);
    msg.setSource(56620U);
    msg.setSourceEntity(182U);
    msg.setDestination(40048U);
    msg.setDestinationEntity(222U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LHCLQUPYXQBMYEXJVROPBBXUWEKCJBDMZYLMAVLPNLKOVCDTIZAHAEVJODAJGYOTTCWNZDBFNWCUVSGMIABMDLDIRGVHQXYTGRHRKYCPZVFILSVQZQGATSROBWFXJZKXIPWHTFIHHDQWQQXKRWKRUGMUYLFQORFEXNHEJSMEJVBPEENFINZFPYSHOKOJGKLKCCDCQASCNSXNRITMESZFPTIYETTLSPJOFVUZMUHNGAABDBWPMAWWU");
    tmp_msg_0.lat = 0.261343456636;
    tmp_msg_0.lon = 0.805329161859;
    tmp_msg_0.depth = 0.0924454846878;
    tmp_msg_0.query_channel = 180U;
    tmp_msg_0.reply_channel = 131U;
    tmp_msg_0.transponder_delay = 208U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.99955327936;
    msg.y = 0.0333169914858;
    msg.var_x = 0.568352618786;
    msg.var_y = 0.0936386447239;
    msg.distance = 0.582137355866;

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
    msg.setTimeStamp(0.00816180188805);
    msg.setSource(53717U);
    msg.setSourceEntity(252U);
    msg.setDestination(49625U);
    msg.setDestinationEntity(77U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BUEPEUYBQFRTYWDHNLZCZMSOLVJFKUUNBFMTHQKGONLPQFHIADTVQDPNHXRORWSGNTGKTFCLLNIHJBKQCLPPVMWXQVZMVOLSYPALYOTLLGHNOXZBEEXBRAJJEYTOMCIAXXDOQFADWIBSROSPTBXSFFFDGCEKUQPQCBUGAARDCQPSXEOZUMJTZVMZVWHWKXZAWTWGDXIIBYCE");
    tmp_msg_0.lat = 0.0936822466639;
    tmp_msg_0.lon = 0.379938676845;
    tmp_msg_0.depth = 0.964083758928;
    tmp_msg_0.query_channel = 223U;
    tmp_msg_0.reply_channel = 96U;
    tmp_msg_0.transponder_delay = 28U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.559155615552;
    msg.y = 0.884080229135;
    msg.var_x = 0.383332839012;
    msg.var_y = 0.470464608483;
    msg.distance = 0.550001743804;

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
    msg.setTimeStamp(0.962634829726);
    msg.setSource(1U);
    msg.setSourceEntity(118U);
    msg.setDestination(9383U);
    msg.setDestinationEntity(246U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZCGLRFBPNDMESGBEERASJKORFYIEFLPUQQJHTPCZDJMMZBSMVRZJFEHGHBCKXTBZVSMLIUBIOTKVYJQLTJ");
    tmp_msg_0.lat = 0.370714738444;
    tmp_msg_0.lon = 0.509541416021;
    tmp_msg_0.depth = 0.551891309406;
    tmp_msg_0.query_channel = 227U;
    tmp_msg_0.reply_channel = 56U;
    tmp_msg_0.transponder_delay = 199U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.381844057134;
    msg.y = 0.195892228268;
    msg.var_x = 0.310061752804;
    msg.var_y = 0.179802304249;
    msg.distance = 0.754520011059;

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
    msg.setTimeStamp(0.0865192439299);
    msg.setSource(38940U);
    msg.setSourceEntity(218U);
    msg.setDestination(14852U);
    msg.setDestinationEntity(152U);
    msg.state = 221U;

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
    msg.setTimeStamp(0.836938731222);
    msg.setSource(30046U);
    msg.setSourceEntity(18U);
    msg.setDestination(11945U);
    msg.setDestinationEntity(5U);
    msg.state = 22U;

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
    msg.setTimeStamp(0.652296201526);
    msg.setSource(14449U);
    msg.setSourceEntity(156U);
    msg.setDestination(35622U);
    msg.setDestinationEntity(30U);
    msg.state = 74U;

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
    msg.setTimeStamp(0.437188335519);
    msg.setSource(52982U);
    msg.setSourceEntity(16U);
    msg.setDestination(11138U);
    msg.setDestinationEntity(195U);
    msg.x = 0.3691078759;
    msg.y = 0.169750170936;
    msg.z = 0.228449690931;

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
    msg.setTimeStamp(0.295506306511);
    msg.setSource(13574U);
    msg.setSourceEntity(24U);
    msg.setDestination(58327U);
    msg.setDestinationEntity(77U);
    msg.x = 0.0974585598133;
    msg.y = 0.879544452434;
    msg.z = 0.052647557602;

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
    msg.setTimeStamp(0.154602092354);
    msg.setSource(7307U);
    msg.setSourceEntity(37U);
    msg.setDestination(22627U);
    msg.setDestinationEntity(58U);
    msg.x = 0.921065241817;
    msg.y = 0.675944577438;
    msg.z = 0.00802408043327;

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
    msg.setTimeStamp(0.109728933152);
    msg.setSource(18325U);
    msg.setSourceEntity(208U);
    msg.setDestination(59596U);
    msg.setDestinationEntity(85U);
    msg.va = 0.0933477557948;
    msg.aoa = 0.167281208015;
    msg.ssa = 0.473247719643;

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
    msg.setTimeStamp(0.885968913032);
    msg.setSource(39665U);
    msg.setSourceEntity(102U);
    msg.setDestination(31577U);
    msg.setDestinationEntity(251U);
    msg.va = 0.409522661;
    msg.aoa = 0.350167646771;
    msg.ssa = 0.858669273498;

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
    msg.setTimeStamp(0.231530989371);
    msg.setSource(31276U);
    msg.setSourceEntity(198U);
    msg.setDestination(17355U);
    msg.setDestinationEntity(213U);
    msg.va = 0.934529653425;
    msg.aoa = 0.197935187213;
    msg.ssa = 0.179097002958;

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
    msg.setTimeStamp(0.246363784465);
    msg.setSource(50449U);
    msg.setSourceEntity(124U);
    msg.setDestination(61729U);
    msg.setDestinationEntity(37U);
    msg.value = 0.0047563627396;

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
    msg.setTimeStamp(0.976940167683);
    msg.setSource(58433U);
    msg.setSourceEntity(63U);
    msg.setDestination(53687U);
    msg.setDestinationEntity(248U);
    msg.value = 0.804206834396;

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
    msg.setTimeStamp(0.707216375541);
    msg.setSource(12531U);
    msg.setSourceEntity(159U);
    msg.setDestination(52326U);
    msg.setDestinationEntity(66U);
    msg.value = 0.735232709437;

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
    msg.setTimeStamp(0.384554559361);
    msg.setSource(42950U);
    msg.setSourceEntity(33U);
    msg.setDestination(27746U);
    msg.setDestinationEntity(39U);
    msg.value = 0.886125942451;
    msg.z_units = 144U;

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
    msg.setTimeStamp(0.821258380825);
    msg.setSource(55316U);
    msg.setSourceEntity(172U);
    msg.setDestination(21962U);
    msg.setDestinationEntity(103U);
    msg.value = 0.461336375183;
    msg.z_units = 198U;

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
    msg.setTimeStamp(0.253574904965);
    msg.setSource(26162U);
    msg.setSourceEntity(168U);
    msg.setDestination(16997U);
    msg.setDestinationEntity(25U);
    msg.value = 0.270451072654;
    msg.z_units = 81U;

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
    msg.setTimeStamp(0.462279463862);
    msg.setSource(63785U);
    msg.setSourceEntity(60U);
    msg.setDestination(13243U);
    msg.setDestinationEntity(140U);
    msg.value = 0.418377518019;
    msg.speed_units = 45U;

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
    msg.setTimeStamp(0.910065562857);
    msg.setSource(35313U);
    msg.setSourceEntity(253U);
    msg.setDestination(55998U);
    msg.setDestinationEntity(54U);
    msg.value = 0.81122263027;
    msg.speed_units = 40U;

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
    msg.setTimeStamp(0.387225557248);
    msg.setSource(49834U);
    msg.setSourceEntity(179U);
    msg.setDestination(57743U);
    msg.setDestinationEntity(201U);
    msg.value = 0.861648665808;
    msg.speed_units = 16U;

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
    msg.setTimeStamp(0.883452720666);
    msg.setSource(36875U);
    msg.setSourceEntity(60U);
    msg.setDestination(56143U);
    msg.setDestinationEntity(22U);
    msg.value = 0.222478869117;

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
    msg.setTimeStamp(0.519614064036);
    msg.setSource(20918U);
    msg.setSourceEntity(27U);
    msg.setDestination(9951U);
    msg.setDestinationEntity(208U);
    msg.value = 0.620083968856;

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
    msg.setTimeStamp(0.923081365537);
    msg.setSource(40286U);
    msg.setSourceEntity(40U);
    msg.setDestination(6174U);
    msg.setDestinationEntity(147U);
    msg.value = 0.394919943418;

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
    msg.setTimeStamp(0.0881047833508);
    msg.setSource(61262U);
    msg.setSourceEntity(20U);
    msg.setDestination(54540U);
    msg.setDestinationEntity(2U);
    msg.value = 0.615556643458;

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
    msg.setTimeStamp(0.493444514165);
    msg.setSource(64222U);
    msg.setSourceEntity(131U);
    msg.setDestination(58467U);
    msg.setDestinationEntity(25U);
    msg.value = 0.159963700334;

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
    msg.setTimeStamp(0.38511964864);
    msg.setSource(8034U);
    msg.setSourceEntity(58U);
    msg.setDestination(28958U);
    msg.setDestinationEntity(148U);
    msg.value = 0.975444361942;

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
    msg.setTimeStamp(0.325292205296);
    msg.setSource(52542U);
    msg.setSourceEntity(217U);
    msg.setDestination(56493U);
    msg.setDestinationEntity(146U);
    msg.value = 0.594357846884;

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
    msg.setTimeStamp(0.708609715058);
    msg.setSource(33129U);
    msg.setSourceEntity(18U);
    msg.setDestination(49742U);
    msg.setDestinationEntity(33U);
    msg.value = 0.49039703372;

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
    msg.setTimeStamp(0.907866800576);
    msg.setSource(47419U);
    msg.setSourceEntity(49U);
    msg.setDestination(16881U);
    msg.setDestinationEntity(46U);
    msg.value = 0.345867556688;

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
    msg.setTimeStamp(0.620203617368);
    msg.setSource(7666U);
    msg.setSourceEntity(41U);
    msg.setDestination(64053U);
    msg.setDestinationEntity(42U);
    msg.path_ref = 172237703U;
    msg.start_lat = 0.568056944104;
    msg.start_lon = 0.441940408658;
    msg.start_z = 0.49397568114;
    msg.start_z_units = 114U;
    msg.end_lat = 0.480734293506;
    msg.end_lon = 0.447771432165;
    msg.end_z = 0.370693322584;
    msg.end_z_units = 148U;
    msg.speed = 0.286933983766;
    msg.speed_units = 144U;
    msg.lradius = 0.684213746976;
    msg.flags = 187U;

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
    msg.setTimeStamp(0.0662409520533);
    msg.setSource(16638U);
    msg.setSourceEntity(10U);
    msg.setDestination(10463U);
    msg.setDestinationEntity(49U);
    msg.path_ref = 1312949874U;
    msg.start_lat = 0.37637699173;
    msg.start_lon = 0.917967994649;
    msg.start_z = 0.271262484526;
    msg.start_z_units = 208U;
    msg.end_lat = 0.252076843986;
    msg.end_lon = 0.577207796397;
    msg.end_z = 0.623151982962;
    msg.end_z_units = 123U;
    msg.speed = 0.393828003021;
    msg.speed_units = 0U;
    msg.lradius = 0.43014998863;
    msg.flags = 236U;

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
    msg.setTimeStamp(0.670691911655);
    msg.setSource(64071U);
    msg.setSourceEntity(37U);
    msg.setDestination(45843U);
    msg.setDestinationEntity(50U);
    msg.path_ref = 2639956842U;
    msg.start_lat = 0.821867463126;
    msg.start_lon = 0.884307366255;
    msg.start_z = 0.357392324645;
    msg.start_z_units = 232U;
    msg.end_lat = 0.235295372245;
    msg.end_lon = 0.731649496928;
    msg.end_z = 0.783921056711;
    msg.end_z_units = 103U;
    msg.speed = 0.469473580801;
    msg.speed_units = 49U;
    msg.lradius = 0.512918961185;
    msg.flags = 17U;

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
    msg.setTimeStamp(0.418355821924);
    msg.setSource(49009U);
    msg.setSourceEntity(110U);
    msg.setDestination(45141U);
    msg.setDestinationEntity(171U);
    msg.x = 0.473615868811;
    msg.y = 0.170824541972;
    msg.z = 0.60289684604;
    msg.k = 0.617873101554;
    msg.m = 0.75337577164;
    msg.n = 0.821183255687;
    msg.flags = 249U;

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
    msg.setTimeStamp(0.493439916666);
    msg.setSource(45136U);
    msg.setSourceEntity(196U);
    msg.setDestination(38801U);
    msg.setDestinationEntity(115U);
    msg.x = 0.878929240892;
    msg.y = 0.214736427167;
    msg.z = 0.811978669377;
    msg.k = 0.308481993658;
    msg.m = 0.477109946458;
    msg.n = 0.46347718809;
    msg.flags = 251U;

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
    msg.setTimeStamp(0.585147071228);
    msg.setSource(28246U);
    msg.setSourceEntity(19U);
    msg.setDestination(6423U);
    msg.setDestinationEntity(136U);
    msg.x = 0.0939365699493;
    msg.y = 0.585340557624;
    msg.z = 0.546209045665;
    msg.k = 0.562037778585;
    msg.m = 0.309601728287;
    msg.n = 0.00382707566154;
    msg.flags = 134U;

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
    msg.setTimeStamp(0.0300624911286);
    msg.setSource(1379U);
    msg.setSourceEntity(178U);
    msg.setDestination(38305U);
    msg.setDestinationEntity(95U);
    msg.value = 0.479125600824;

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
    msg.setTimeStamp(0.225474780676);
    msg.setSource(45107U);
    msg.setSourceEntity(6U);
    msg.setDestination(36783U);
    msg.setDestinationEntity(174U);
    msg.value = 0.702810335897;

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
    msg.setTimeStamp(0.74473034379);
    msg.setSource(55174U);
    msg.setSourceEntity(234U);
    msg.setDestination(28526U);
    msg.setDestinationEntity(9U);
    msg.value = 0.730407099986;

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
    msg.setTimeStamp(0.934158783494);
    msg.setSource(8478U);
    msg.setSourceEntity(72U);
    msg.setDestination(52561U);
    msg.setDestinationEntity(150U);
    msg.u = 0.120170432569;
    msg.v = 0.457463004661;
    msg.w = 0.412542281364;
    msg.p = 0.207300226885;
    msg.q = 0.96793252921;
    msg.r = 0.34360607826;
    msg.flags = 207U;

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
    msg.setTimeStamp(0.483291075863);
    msg.setSource(31312U);
    msg.setSourceEntity(126U);
    msg.setDestination(35955U);
    msg.setDestinationEntity(189U);
    msg.u = 0.941435424434;
    msg.v = 0.882893942246;
    msg.w = 0.241964085819;
    msg.p = 0.331258880315;
    msg.q = 0.202323222102;
    msg.r = 0.972420755366;
    msg.flags = 158U;

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
    msg.setTimeStamp(0.168696935985);
    msg.setSource(14127U);
    msg.setSourceEntity(41U);
    msg.setDestination(51754U);
    msg.setDestinationEntity(234U);
    msg.u = 0.885834678152;
    msg.v = 0.509107372112;
    msg.w = 0.982603830767;
    msg.p = 0.976453847628;
    msg.q = 0.492553077206;
    msg.r = 0.866282565056;
    msg.flags = 25U;

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
    msg.setTimeStamp(0.649313660225);
    msg.setSource(583U);
    msg.setSourceEntity(170U);
    msg.setDestination(12834U);
    msg.setDestinationEntity(77U);
    msg.path_ref = 3613159345U;
    msg.start_lat = 0.1354166949;
    msg.start_lon = 0.0256056076185;
    msg.start_z = 0.84185391133;
    msg.start_z_units = 98U;
    msg.end_lat = 0.62344330046;
    msg.end_lon = 0.641039430471;
    msg.end_z = 0.663345077553;
    msg.end_z_units = 182U;
    msg.lradius = 0.123232562342;
    msg.flags = 209U;
    msg.x = 0.0974094757568;
    msg.y = 0.0827828372143;
    msg.z = 0.7114077462;
    msg.vx = 0.324589718464;
    msg.vy = 0.46113941286;
    msg.vz = 0.120592700313;
    msg.course_error = 0.918262786725;
    msg.eta = 14750U;

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
    msg.setTimeStamp(0.938892885805);
    msg.setSource(9378U);
    msg.setSourceEntity(51U);
    msg.setDestination(51694U);
    msg.setDestinationEntity(143U);
    msg.path_ref = 2016053432U;
    msg.start_lat = 0.689909223314;
    msg.start_lon = 0.642079617533;
    msg.start_z = 0.675776860044;
    msg.start_z_units = 89U;
    msg.end_lat = 0.861367150991;
    msg.end_lon = 0.567993334859;
    msg.end_z = 0.45839182881;
    msg.end_z_units = 207U;
    msg.lradius = 0.305824295956;
    msg.flags = 212U;
    msg.x = 0.147199935951;
    msg.y = 0.00208140959764;
    msg.z = 0.756097636724;
    msg.vx = 0.038409423593;
    msg.vy = 0.653034479253;
    msg.vz = 0.393358079451;
    msg.course_error = 0.917369857318;
    msg.eta = 58555U;

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
    msg.setTimeStamp(0.0653626783341);
    msg.setSource(19421U);
    msg.setSourceEntity(1U);
    msg.setDestination(47268U);
    msg.setDestinationEntity(138U);
    msg.path_ref = 3836770477U;
    msg.start_lat = 0.989166759803;
    msg.start_lon = 0.0698752096448;
    msg.start_z = 0.426123334681;
    msg.start_z_units = 103U;
    msg.end_lat = 0.939220443983;
    msg.end_lon = 0.832701273559;
    msg.end_z = 0.632922376093;
    msg.end_z_units = 17U;
    msg.lradius = 0.230756897619;
    msg.flags = 234U;
    msg.x = 0.109371272496;
    msg.y = 0.886482220479;
    msg.z = 0.666228836033;
    msg.vx = 0.836208050271;
    msg.vy = 0.772420681969;
    msg.vz = 0.158858712281;
    msg.course_error = 0.186370127173;
    msg.eta = 52548U;

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
    msg.setTimeStamp(0.406998702582);
    msg.setSource(3470U);
    msg.setSourceEntity(59U);
    msg.setDestination(63167U);
    msg.setDestinationEntity(73U);
    msg.k = 0.658484876668;
    msg.m = 0.255279675614;
    msg.n = 0.975900252435;

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
    msg.setTimeStamp(0.418398261138);
    msg.setSource(47271U);
    msg.setSourceEntity(58U);
    msg.setDestination(22803U);
    msg.setDestinationEntity(84U);
    msg.k = 0.32800420032;
    msg.m = 0.245967339024;
    msg.n = 0.828316477516;

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
    msg.setTimeStamp(0.544944931268);
    msg.setSource(58100U);
    msg.setSourceEntity(86U);
    msg.setDestination(40878U);
    msg.setDestinationEntity(15U);
    msg.k = 0.246935389266;
    msg.m = 0.177799540943;
    msg.n = 0.208751726068;

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
    msg.setTimeStamp(0.831764405161);
    msg.setSource(8368U);
    msg.setSourceEntity(97U);
    msg.setDestination(1112U);
    msg.setDestinationEntity(117U);
    msg.p = 0.882442348388;
    msg.i = 0.0483116134286;
    msg.d = 0.19879841359;
    msg.a = 0.400568715277;

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
    msg.setTimeStamp(0.386562033116);
    msg.setSource(22944U);
    msg.setSourceEntity(41U);
    msg.setDestination(49040U);
    msg.setDestinationEntity(16U);
    msg.p = 0.838386660198;
    msg.i = 0.263038697453;
    msg.d = 0.101448366054;
    msg.a = 0.951431036255;

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
    msg.setTimeStamp(0.760195428464);
    msg.setSource(31080U);
    msg.setSourceEntity(59U);
    msg.setDestination(47954U);
    msg.setDestinationEntity(62U);
    msg.p = 0.428813289565;
    msg.i = 0.448675535445;
    msg.d = 0.180002693036;
    msg.a = 0.651081721182;

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
    msg.setTimeStamp(0.241066481991);
    msg.setSource(30715U);
    msg.setSourceEntity(154U);
    msg.setDestination(48432U);
    msg.setDestinationEntity(249U);
    msg.op = 9U;

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
    msg.setTimeStamp(0.742073325348);
    msg.setSource(50415U);
    msg.setSourceEntity(61U);
    msg.setDestination(56604U);
    msg.setDestinationEntity(113U);
    msg.op = 167U;

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
    msg.setTimeStamp(0.227514898264);
    msg.setSource(28208U);
    msg.setSourceEntity(151U);
    msg.setDestination(1113U);
    msg.setDestinationEntity(54U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.659998512904);
    msg.setSource(29269U);
    msg.setSourceEntity(87U);
    msg.setDestination(61964U);
    msg.setDestinationEntity(137U);
    msg.x = 0.856976156398;
    msg.y = 0.285243643375;
    msg.z = 0.741216992981;
    msg.vx = 0.35642617168;
    msg.vy = 0.0345943258189;
    msg.vz = 0.644408190033;
    msg.ax = 0.571586368976;
    msg.ay = 0.649369963628;
    msg.az = 0.324518834599;
    msg.flags = 12415U;

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
    msg.setTimeStamp(0.525551058386);
    msg.setSource(41038U);
    msg.setSourceEntity(156U);
    msg.setDestination(29866U);
    msg.setDestinationEntity(36U);
    msg.x = 0.594471149545;
    msg.y = 0.588474694042;
    msg.z = 0.353506147969;
    msg.vx = 0.861064300595;
    msg.vy = 0.585810353964;
    msg.vz = 0.517939068104;
    msg.ax = 0.540455461016;
    msg.ay = 0.82729897019;
    msg.az = 0.760410830857;
    msg.flags = 10556U;

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
    msg.setTimeStamp(0.316940275629);
    msg.setSource(48254U);
    msg.setSourceEntity(40U);
    msg.setDestination(36811U);
    msg.setDestinationEntity(177U);
    msg.x = 0.827617941373;
    msg.y = 0.0870279295086;
    msg.z = 0.447006856938;
    msg.vx = 0.982236352162;
    msg.vy = 0.0363027196649;
    msg.vz = 0.150869724719;
    msg.ax = 0.030132203794;
    msg.ay = 0.702416660092;
    msg.az = 0.59999013162;
    msg.flags = 61869U;

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
    msg.setTimeStamp(0.276165919739);
    msg.setSource(35663U);
    msg.setSourceEntity(82U);
    msg.setDestination(638U);
    msg.setDestinationEntity(86U);
    msg.value = 0.797613422049;

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
    msg.setTimeStamp(0.731800658285);
    msg.setSource(3766U);
    msg.setSourceEntity(233U);
    msg.setDestination(8432U);
    msg.setDestinationEntity(85U);
    msg.value = 0.250096607237;

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
    msg.setTimeStamp(0.927688780757);
    msg.setSource(50017U);
    msg.setSourceEntity(198U);
    msg.setDestination(2548U);
    msg.setDestinationEntity(131U);
    msg.value = 0.883698192011;

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
    msg.setTimeStamp(0.971178584972);
    msg.setSource(26588U);
    msg.setSourceEntity(127U);
    msg.setDestination(44863U);
    msg.setDestinationEntity(78U);
    msg.timeout = 42459U;
    msg.lat = 0.318632541557;
    msg.lon = 0.174742527146;
    msg.z = 0.501581241587;
    msg.z_units = 116U;
    msg.speed = 0.921840733597;
    msg.speed_units = 18U;
    msg.roll = 0.596516493311;
    msg.pitch = 0.927446192411;
    msg.yaw = 0.414260700621;
    msg.custom.assign("BKXJYJOFVBLPVYNQNYDJHWLWPCLXWFELPF");

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
    msg.setTimeStamp(0.422263327941);
    msg.setSource(48943U);
    msg.setSourceEntity(86U);
    msg.setDestination(18402U);
    msg.setDestinationEntity(68U);
    msg.timeout = 58856U;
    msg.lat = 0.249443186994;
    msg.lon = 0.404430471676;
    msg.z = 0.60335313625;
    msg.z_units = 107U;
    msg.speed = 0.874500397411;
    msg.speed_units = 249U;
    msg.roll = 0.691740513963;
    msg.pitch = 0.574143554674;
    msg.yaw = 0.926923560672;
    msg.custom.assign("UDDDFCAIRRQHMUGKAIIJUGMBLHRUYWITSTBLKCSRAPKBXVWVFHHWBERATXMZQVNIAWSFCAQZOXGTZUSRCVRFSRIJWQCZXMFJPGZUWOVMQJDGLPBDHDNEJCTWAZXQGIWLTOOSDLPCBICSPHEPOUCLKJWNVJAQEJSXVONOHMNIBWGEYOPKJBNPDGKMMEAXPEDYBHKEZNIYYKXFMXUGHVGTTLVMZOXYLQSYAPFKRRETYD");

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
    msg.setTimeStamp(0.572826077025);
    msg.setSource(34024U);
    msg.setSourceEntity(20U);
    msg.setDestination(599U);
    msg.setDestinationEntity(47U);
    msg.timeout = 35874U;
    msg.lat = 0.898598131836;
    msg.lon = 0.869157954803;
    msg.z = 0.36887963559;
    msg.z_units = 202U;
    msg.speed = 0.650379685281;
    msg.speed_units = 44U;
    msg.roll = 0.0658651302949;
    msg.pitch = 0.804883805015;
    msg.yaw = 0.282162327368;
    msg.custom.assign("OOKRFACVDWSFRBMKUZICKHVCEBTAGELSDAERDBZ");

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
    msg.setTimeStamp(0.615944345168);
    msg.setSource(32770U);
    msg.setSourceEntity(116U);
    msg.setDestination(20914U);
    msg.setDestinationEntity(70U);
    msg.timeout = 14077U;
    msg.lat = 0.448911483136;
    msg.lon = 0.49334969375;
    msg.z = 0.117329928451;
    msg.z_units = 126U;
    msg.speed = 0.170092921872;
    msg.speed_units = 176U;
    msg.duration = 50280U;
    msg.radius = 0.850110465455;
    msg.flags = 163U;
    msg.custom.assign("DWLPVMTHREZLFVENWRSBWHXJASIQCWHIHLDCCBOUDESJFSGHGFCMIPUNLIRYXSMAEEKTXBUDABOVGHQMTGJXSJAGASUYJKOMZJZESBUPQUBDOPWJRCQJXPERCFYFFFZFYRHHHMWNCBXPKKOLOIDQWYUIYYBVANRTAKVKLIPDKWEFGLMUGJKVQUVGNOUAXYORXZVAJRMHNYCKYTIQDBMZWOGQXIPQQ");

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
    msg.setTimeStamp(0.074301058052);
    msg.setSource(45563U);
    msg.setSourceEntity(109U);
    msg.setDestination(64929U);
    msg.setDestinationEntity(211U);
    msg.timeout = 60724U;
    msg.lat = 0.709266091274;
    msg.lon = 0.935880696542;
    msg.z = 0.141597336887;
    msg.z_units = 238U;
    msg.speed = 0.231319522259;
    msg.speed_units = 254U;
    msg.duration = 11838U;
    msg.radius = 0.256984784957;
    msg.flags = 54U;
    msg.custom.assign("OYJZIGQYPFKSQBCPLOXKHRJQKGJZCSDAUWOAIVZDYFILCCSNEFBLENFVVWJUHWORHBGNWMFUYIDVPEUWTLJYHCKMTALAZRERYSWIDOCXSYPARQXRUZEMRHNIFCTYSUIHXBQVTHWZFVNERIQUDKSNDPYASGTLVRMKMBDMHBITMQQVCOBMPXOPEUEYAEUTWTBLQM");

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
    msg.setTimeStamp(0.586651934324);
    msg.setSource(64629U);
    msg.setSourceEntity(241U);
    msg.setDestination(59047U);
    msg.setDestinationEntity(228U);
    msg.timeout = 9931U;
    msg.lat = 0.978768652083;
    msg.lon = 0.00163277440127;
    msg.z = 0.812840745426;
    msg.z_units = 178U;
    msg.speed = 0.718720225251;
    msg.speed_units = 182U;
    msg.duration = 3107U;
    msg.radius = 0.599296689508;
    msg.flags = 221U;
    msg.custom.assign("STUXMJDXEJYMPPTBDCZOXNKPOTBUCWLBOWWMVQHMJERBHJTYJLICWTHPODDHGRGYZOZRWADTZPHQMNOLCXEKPTMAEOIRTZWMONGBQKRIFCBPKXEJHGIXXELGNVGRFLEDWCNUYSXDJFGSOGUEXFTVCSFGBWSSJHRQAUVPRHKVUAADICRYLMPAVOIIQZNEWFVYMEFUANKKY");

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
    msg.setTimeStamp(0.365002372074);
    msg.setSource(42670U);
    msg.setSourceEntity(79U);
    msg.setDestination(9058U);
    msg.setDestinationEntity(210U);
    msg.custom.assign("SUMWEDPTMUXUFITCKWYZLZAVLJRCOGORKOZSWGROGKFCSUQGHXFU");

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
    msg.setTimeStamp(0.671946822675);
    msg.setSource(11099U);
    msg.setSourceEntity(46U);
    msg.setDestination(13264U);
    msg.setDestinationEntity(36U);
    msg.custom.assign("HLKXWFIJPUKSJYDGURQRKVFPVWALJPNMWZSUQALLHKKKFMC");

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
    msg.setTimeStamp(0.798290065001);
    msg.setSource(25248U);
    msg.setSourceEntity(240U);
    msg.setDestination(20813U);
    msg.setDestinationEntity(42U);
    msg.custom.assign("GJXDVYPARQZLZJOFCMKGCISIBBKLCSJRDREKKMBOETSRAZP");

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
    msg.setTimeStamp(0.373690944778);
    msg.setSource(49648U);
    msg.setSourceEntity(107U);
    msg.setDestination(227U);
    msg.setDestinationEntity(61U);
    msg.timeout = 51608U;
    msg.lat = 0.291462335072;
    msg.lon = 0.22361763122;
    msg.z = 0.197717987682;
    msg.z_units = 63U;
    msg.duration = 47212U;
    msg.speed = 0.0115056965352;
    msg.speed_units = 116U;
    msg.type = 70U;
    msg.radius = 0.726265184805;
    msg.length = 0.827203088032;
    msg.bearing = 0.705895827932;
    msg.direction = 252U;
    msg.custom.assign("HWYBQQJWAJGVVSCQIIZTYPAOSSJHZXEHVJYNQUVMOISYONWPOGRUICEENLNFLDKNWRFEMTFKMIBIUKJSBWUWPZMQTLYVVPNBAJHARFAGWPCHUEUBUZBLKDQZONYFTHOIPXSATXAOLPGRZDYHL");

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
    msg.setTimeStamp(0.300744153048);
    msg.setSource(41469U);
    msg.setSourceEntity(118U);
    msg.setDestination(3498U);
    msg.setDestinationEntity(79U);
    msg.timeout = 52104U;
    msg.lat = 0.593080999079;
    msg.lon = 0.466458561584;
    msg.z = 0.562768133329;
    msg.z_units = 124U;
    msg.duration = 4863U;
    msg.speed = 0.610347315176;
    msg.speed_units = 214U;
    msg.type = 44U;
    msg.radius = 0.24394597534;
    msg.length = 0.0666257388355;
    msg.bearing = 0.932041347528;
    msg.direction = 91U;
    msg.custom.assign("LWNSFLRAZFBBETJANEBKBCKDGXYZOSWELWTOQHJUVGHQQCEMIRJVPOLUFXSAHHDWDPMIKTDHDUOUNWRQDVAEZVKGXXISILLEMHGGQDCGEFXPMWGIAFWBQJSZ");

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
    msg.setTimeStamp(0.572958015095);
    msg.setSource(46564U);
    msg.setSourceEntity(161U);
    msg.setDestination(9925U);
    msg.setDestinationEntity(37U);
    msg.timeout = 34775U;
    msg.lat = 0.625599581818;
    msg.lon = 0.478338555005;
    msg.z = 0.740887650286;
    msg.z_units = 28U;
    msg.duration = 25425U;
    msg.speed = 0.178163413489;
    msg.speed_units = 162U;
    msg.type = 147U;
    msg.radius = 0.0433346141819;
    msg.length = 0.226936779332;
    msg.bearing = 0.666000590071;
    msg.direction = 128U;
    msg.custom.assign("JWZQKJCCUJIXNKJHFJGZMQWIPADXTWUMUHUUFBHORJMKFCLVWXZINNPJBAQTSLHOLXWDUTGFUQKVZBSWIODNGHVXPEWFXSAIKOEOMCLNSTNMLMEFVIEYCALAKGRKOGPQHIKFPNWCBYJQYGDSIADMLAHOCYZZBEZFYLSRGMSEXTWYOGORWRBMQTTDHDODTURJXVVQSRDKAMPCHJVSC");

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
    msg.setTimeStamp(0.343025090591);
    msg.setSource(16948U);
    msg.setSourceEntity(66U);
    msg.setDestination(48671U);
    msg.setDestinationEntity(50U);
    msg.duration = 7331U;
    msg.custom.assign("TMAHGFIRLIPXQKCFLRMHJBGJYGQULXDXKGANNN");

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
    msg.setTimeStamp(0.507838120626);
    msg.setSource(39271U);
    msg.setSourceEntity(40U);
    msg.setDestination(34178U);
    msg.setDestinationEntity(115U);
    msg.duration = 6475U;
    msg.custom.assign("QDYLZZIRDSKVHQYBHFYQMILQJEWUDHKDGMCEUSXWJ");

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
    msg.setTimeStamp(0.146335229333);
    msg.setSource(37558U);
    msg.setSourceEntity(195U);
    msg.setDestination(25462U);
    msg.setDestinationEntity(23U);
    msg.duration = 39821U;
    msg.custom.assign("JYUFWOYQQLSCKEHDKJGACFYDNIYSQJVCIZTWQDOJDELOOXVZBSZUIXWBJOOZGRRLTRZIXNRFJGDBMKPEVIMYJXCBHOGXCMZUDKESEGCDHWMABNGMLBAPVDMGYAAGFVDNMLXXUNCBWJVUNPGNHSCEKQPSANZTGONQZRTEALWUHBLCADUBRYSMUIVESWWKLQKCYJRFPVFYIZ");

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
    msg.setTimeStamp(0.56412937062);
    msg.setSource(3148U);
    msg.setSourceEntity(90U);
    msg.setDestination(30722U);
    msg.setDestinationEntity(53U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.765212819206;
    msg.control.set(tmp_msg_0);
    msg.duration = 38737U;
    msg.custom.assign("UOJFKMFXMRBEAGQYVVPMUBDACOYBGAUWRENCFHQQDOYTVMUKKZHGTGNZPEMJHBGASAEUQWARIXTJDOJLNSJWKVCDRPLYRXTFSYPWIVUCBXZTUKPSZLJTGIGMDDNLBDEYGNYOVRZRHGCFJKIFVMKLXWQFVNXYJXXSBZLIWFCVKNTJJDQNENICETOLMWLBOWARBPTUZIVPKIHHSCDKFCXYHHESBDGAEPQWWQRPLO");

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
    msg.setTimeStamp(0.133152095907);
    msg.setSource(1215U);
    msg.setSourceEntity(183U);
    msg.setDestination(49426U);
    msg.setDestinationEntity(15U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1240824610U;
    tmp_msg_0.start_lat = 0.783370372076;
    tmp_msg_0.start_lon = 0.651646268262;
    tmp_msg_0.start_z = 0.361193089257;
    tmp_msg_0.start_z_units = 169U;
    tmp_msg_0.end_lat = 0.097068229391;
    tmp_msg_0.end_lon = 0.613288884377;
    tmp_msg_0.end_z = 0.426144831486;
    tmp_msg_0.end_z_units = 30U;
    tmp_msg_0.speed = 0.0435343166664;
    tmp_msg_0.speed_units = 137U;
    tmp_msg_0.lradius = 0.841755766169;
    tmp_msg_0.flags = 49U;
    msg.control.set(tmp_msg_0);
    msg.duration = 30730U;
    msg.custom.assign("QBBJITOVOPMIIYLAAOBFIPUVSTPWKG");

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
    msg.setTimeStamp(0.757739532425);
    msg.setSource(58184U);
    msg.setSourceEntity(215U);
    msg.setDestination(18053U);
    msg.setDestinationEntity(248U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.00784679759132;
    tmp_msg_0.speed_units = 248U;
    msg.control.set(tmp_msg_0);
    msg.duration = 58248U;
    msg.custom.assign("TQODHKJPWYGYFVDXOUMMGZLZGAWGRKHDOOBPPMYDEQZCPQXYIHPVWTMAUEKDUOFESGIXFP");

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
    msg.setTimeStamp(0.0689674701604);
    msg.setSource(15544U);
    msg.setSourceEntity(138U);
    msg.setDestination(42726U);
    msg.setDestinationEntity(142U);
    msg.timeout = 27595U;
    msg.lat = 0.88654165374;
    msg.lon = 0.518939936109;
    msg.z = 0.472362759196;
    msg.z_units = 175U;
    msg.speed = 0.94599233673;
    msg.speed_units = 156U;
    msg.bearing = 0.652752291826;
    msg.cross_angle = 0.596088351235;
    msg.width = 0.180606543038;
    msg.length = 0.145798170035;
    msg.hstep = 0.0774465620808;
    msg.coff = 143U;
    msg.alternation = 238U;
    msg.flags = 226U;
    msg.custom.assign("LQLKZEBZVGNWGWDNQXLVTBARMXCEYXICAUSOFHAXZAISNEQXQQSSSRWGADWBCUKGVNXCTXFYRCORMEPYJSWMVILJVIPXEYMHHPUKYZGLADPUOHUMDRZWFOSSZVDHKCPATJIAENUQDXGOGVCT");

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
    msg.setTimeStamp(0.650390637615);
    msg.setSource(13124U);
    msg.setSourceEntity(167U);
    msg.setDestination(37087U);
    msg.setDestinationEntity(3U);
    msg.timeout = 35539U;
    msg.lat = 0.732300053832;
    msg.lon = 0.181869072595;
    msg.z = 0.882738084605;
    msg.z_units = 232U;
    msg.speed = 0.369380771157;
    msg.speed_units = 229U;
    msg.bearing = 0.0330749115925;
    msg.cross_angle = 0.889144251103;
    msg.width = 0.954792044673;
    msg.length = 0.809423078257;
    msg.hstep = 0.649775138141;
    msg.coff = 149U;
    msg.alternation = 108U;
    msg.flags = 67U;
    msg.custom.assign("FFCRDDBOFTWXJFHMZMZMUVNHVOZKZAZZLXHDSWKMJPGENMXAJFAKKKLLXXVBVWODQPDFZTZMKUOARFMDVTUNAGIFJS");

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
    msg.setTimeStamp(0.733777412816);
    msg.setSource(25088U);
    msg.setSourceEntity(110U);
    msg.setDestination(41761U);
    msg.setDestinationEntity(221U);
    msg.timeout = 3560U;
    msg.lat = 0.618117789469;
    msg.lon = 0.0963277045701;
    msg.z = 0.689555997209;
    msg.z_units = 70U;
    msg.speed = 0.327786213272;
    msg.speed_units = 68U;
    msg.bearing = 0.315760906913;
    msg.cross_angle = 0.0203908934319;
    msg.width = 0.428009161432;
    msg.length = 0.252220142196;
    msg.hstep = 0.987692084072;
    msg.coff = 247U;
    msg.alternation = 115U;
    msg.flags = 143U;
    msg.custom.assign("CLXKNDYFHGVDDMMNBRMSMVXRVKURZRYISAMZZAALQZPGIGTXNUQNDTPYNCDCKPIGPWSLSTYTJCGGEFTOABJOVOYOUCBTEALGECCPPUTQNXFGETKKFDVDRIYHGVPXAQUVSICUFJZ");

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
    msg.setTimeStamp(0.0998109868671);
    msg.setSource(10680U);
    msg.setSourceEntity(227U);
    msg.setDestination(34514U);
    msg.setDestinationEntity(28U);
    msg.timeout = 20780U;
    msg.lat = 0.430637577415;
    msg.lon = 0.982632534888;
    msg.z = 0.469192106908;
    msg.z_units = 201U;
    msg.speed = 0.374163345698;
    msg.speed_units = 22U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0662760007456;
    tmp_msg_0.y = 0.33236841699;
    tmp_msg_0.z = 0.296384129686;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XXBXSWUPSDHNZUEYEWLJECPMVMYJYKMJVVSVAVOGKDCWXPUROHTCLMTMECSABXBPMGWUNPGBCJYGTQJJRNXRLDHHGNQBPNRCFWSSIOS");

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
    msg.setTimeStamp(0.494414651164);
    msg.setSource(6600U);
    msg.setSourceEntity(169U);
    msg.setDestination(26479U);
    msg.setDestinationEntity(49U);
    msg.timeout = 63825U;
    msg.lat = 0.438714569037;
    msg.lon = 0.183917386957;
    msg.z = 0.645840768217;
    msg.z_units = 197U;
    msg.speed = 0.424336985194;
    msg.speed_units = 177U;
    msg.custom.assign("OFKGVPJSDHZNOTBPHNEWJMIXCWFVITDTMRSPEVQLXENHUJVJNXZBFBXWILELMOEGYJRKAVOCDPJCGQELZXCNASSGUVYDJSTRBOZJPVFSFVKTJGBWMWRLWPBIUHEDGDUFMOYYNNEDMPKVARAODQFIWHUMIRKJLMBQPTXACECSNMSTHILKUOUYPEAAQQIUKOITRCYVQZBPBZTGGMF");

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
    msg.setTimeStamp(0.533028438461);
    msg.setSource(38854U);
    msg.setSourceEntity(182U);
    msg.setDestination(23798U);
    msg.setDestinationEntity(124U);
    msg.timeout = 14261U;
    msg.lat = 0.61214942238;
    msg.lon = 0.903320435469;
    msg.z = 0.726832904582;
    msg.z_units = 100U;
    msg.speed = 0.299577543424;
    msg.speed_units = 133U;
    msg.custom.assign("ADMVMAKCYSRFLWJSGEYVPYDIAJFYXOYZQZCXLJNEQEQOWTXILPJXUTHEUJLFJTWFZBCKOEVFDJNDAICEJDGXSIKAWLKVWLZORONVOPCCRBMZKEVXILYAHGFVERBKHPZBYSNXUGTBDBNVRCYPHNXNMUXKETQGGFGHRGRQAOMIIICFUDQDQVOSQFUZUM");

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
    msg.setTimeStamp(0.261282564028);
    msg.setSource(42121U);
    msg.setSourceEntity(202U);
    msg.setDestination(63470U);
    msg.setDestinationEntity(46U);
    msg.x = 0.324012907378;
    msg.y = 0.554711137914;
    msg.z = 0.850935542121;

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
    msg.setTimeStamp(0.132868217149);
    msg.setSource(44997U);
    msg.setSourceEntity(9U);
    msg.setDestination(59327U);
    msg.setDestinationEntity(110U);
    msg.x = 0.195484331609;
    msg.y = 0.719629437839;
    msg.z = 0.775971957679;

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
    msg.setTimeStamp(0.0232642594795);
    msg.setSource(2848U);
    msg.setSourceEntity(6U);
    msg.setDestination(51199U);
    msg.setDestinationEntity(26U);
    msg.x = 0.461651920867;
    msg.y = 0.875074155196;
    msg.z = 0.345013329888;

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
    msg.setTimeStamp(0.269480926899);
    msg.setSource(20056U);
    msg.setSourceEntity(87U);
    msg.setDestination(54982U);
    msg.setDestinationEntity(89U);
    msg.timeout = 36154U;
    msg.lat = 0.0834245362941;
    msg.lon = 0.689890544456;
    msg.z = 0.841334258758;
    msg.z_units = 241U;
    msg.amplitude = 0.659366949009;
    msg.pitch = 0.546077764427;
    msg.speed = 0.83369803042;
    msg.speed_units = 192U;
    msg.custom.assign("YVOSZODHLXPZRCYLLE");

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
    msg.setTimeStamp(0.293033272072);
    msg.setSource(52960U);
    msg.setSourceEntity(213U);
    msg.setDestination(24683U);
    msg.setDestinationEntity(185U);
    msg.timeout = 64080U;
    msg.lat = 0.63600093439;
    msg.lon = 0.70668728571;
    msg.z = 0.633838581105;
    msg.z_units = 138U;
    msg.amplitude = 0.291054355842;
    msg.pitch = 0.364367764595;
    msg.speed = 0.574250602281;
    msg.speed_units = 19U;
    msg.custom.assign("PAKKWQOTZGRJJUKEETLMFZBJMKQUPWFTQOHDFMNKUTOCA");

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
    msg.setTimeStamp(0.782587079181);
    msg.setSource(31248U);
    msg.setSourceEntity(169U);
    msg.setDestination(31995U);
    msg.setDestinationEntity(16U);
    msg.timeout = 10444U;
    msg.lat = 0.801697701345;
    msg.lon = 0.435380073475;
    msg.z = 0.41907455688;
    msg.z_units = 212U;
    msg.amplitude = 0.625026738003;
    msg.pitch = 0.61166170007;
    msg.speed = 0.997298518901;
    msg.speed_units = 159U;
    msg.custom.assign("VOMCHCUVMIJMPXNISXTOXMKTVEOXFQWRDKLOUATGKRDLLZDNQXVMPOWFKLWQZSJLVENAAIUQJBDYJFWCJRTQPCLRCVEARVQJVPFANZXUESPYFDKHZYYLMTNRFNUYFURWOCKWZMISYPSLHGOBAFNKDFUBAIBHJUBWZGNXEFGHPCGDNPIPERALSKSEISDVQAWGRKGHJPMZAHQBDHXBC");

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
    msg.setTimeStamp(0.223446295631);
    msg.setSource(47252U);
    msg.setSourceEntity(245U);
    msg.setDestination(450U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.403877881273);
    msg.setSource(22690U);
    msg.setSourceEntity(2U);
    msg.setDestination(49630U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.482099007238);
    msg.setSource(4206U);
    msg.setSourceEntity(59U);
    msg.setDestination(16329U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.239586935127);
    msg.setSource(48922U);
    msg.setSourceEntity(134U);
    msg.setDestination(58195U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.595941113115;
    msg.lon = 0.49728138265;
    msg.z = 0.895285679823;
    msg.z_units = 219U;
    msg.radius = 0.807993942444;
    msg.duration = 14475U;
    msg.speed = 0.541031880829;
    msg.speed_units = 110U;
    msg.custom.assign("IKPKLQUQQMAZBFTRTXTEBRDLUHHVTSLQYDKRDMVCWQZZBZXOAAQXSVFUAKCQPKOGMDJFNDVFIYCOLIINPZJGHLMTEUMRMRFRCGCOKXNZRYNKLAYAFWLMBSZPOSHIJGTHXDGJLBJIGHMSXZFMOVN");

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
    msg.setTimeStamp(0.237127368543);
    msg.setSource(21U);
    msg.setSourceEntity(195U);
    msg.setDestination(49609U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.107373415529;
    msg.lon = 0.25247126483;
    msg.z = 0.97527038097;
    msg.z_units = 118U;
    msg.radius = 0.147667990676;
    msg.duration = 59546U;
    msg.speed = 0.0320296828176;
    msg.speed_units = 221U;
    msg.custom.assign("WWFEDFNPIMFVNASLJAXWAHBWELZMDBPOITDKRAUPZZEYNOOYUBSRETNDFJDIQFTCYPXHJPBQJTQBLAMZRTSYYHJIJCESCMQXOSNNUYVHOBWQBKWMOUVKOCQNQWXHPIGYFUDKCPORVLMVWLMYDAWUNNUBTVRRWISRTGUPCTJAKZJVZDAZNCTXTQXXCLERCGCOQMFEFXSZKJSHLMGGEDGGIHH");

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
    msg.setTimeStamp(0.998606437495);
    msg.setSource(61285U);
    msg.setSourceEntity(240U);
    msg.setDestination(52822U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.590713148845;
    msg.lon = 0.518278689917;
    msg.z = 0.620877137098;
    msg.z_units = 64U;
    msg.radius = 0.784816720455;
    msg.duration = 2758U;
    msg.speed = 0.710556709023;
    msg.speed_units = 196U;
    msg.custom.assign("ZLLUVUJCEVRKWPPMREKLGSUXOVFMGVGPERFBCHJJSGXCMKCXEONJHOUEHVTSFQOAWKZZKBDBXXNIRMQUUIEQYROJJKQHAAJLVVFYZJXCSAFQOARFNQGWMIVBNYCLUTUAJUFERXGQSIIXHYLWYAOJKLCICYMPZMZFMVNNRSBWNDNDDCZIYSDUHEBALPDSTLLQMTQZZPBTKNYKCBHPDTHGVDWXITGXG");

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
    msg.setTimeStamp(0.415501676945);
    msg.setSource(45538U);
    msg.setSourceEntity(218U);
    msg.setDestination(15990U);
    msg.setDestinationEntity(113U);
    msg.timeout = 50153U;
    msg.flags = 160U;
    msg.lat = 0.521149437577;
    msg.lon = 0.519554226033;
    msg.start_z = 0.401502983508;
    msg.start_z_units = 205U;
    msg.end_z = 0.764785916948;
    msg.end_z_units = 27U;
    msg.radius = 0.83141939263;
    msg.speed = 0.862553480981;
    msg.speed_units = 201U;
    msg.custom.assign("RWUMUKLUETHKERFYFORJTVYBORYJTVYWSDDEOLSZSGXNGARKIUEVPZQHAQOPQAYNHLGEJINVXMMWVDDHCHBFIWTWLBLPJQXGSXRYZEYSZRQUUJZKOCNCADAXFJYSEZKTBCCQYBDOIAZMPBLVIAMJCFFOKJOWDUUPWICOJDRFHMMXWTLMMEKGGHXAVKQI");

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
    msg.setTimeStamp(0.51369454881);
    msg.setSource(31616U);
    msg.setSourceEntity(64U);
    msg.setDestination(733U);
    msg.setDestinationEntity(11U);
    msg.timeout = 42933U;
    msg.flags = 79U;
    msg.lat = 0.156927182333;
    msg.lon = 0.656778474712;
    msg.start_z = 0.905905707357;
    msg.start_z_units = 91U;
    msg.end_z = 0.348990494539;
    msg.end_z_units = 100U;
    msg.radius = 0.509420964524;
    msg.speed = 0.782277198383;
    msg.speed_units = 92U;
    msg.custom.assign("UZVBDNVCFOXWYCKIQDHIQHYABRACNDZONKOISGTZUFDEMYFAJFBRYQOVQMEWRGANKHAOFFEZSPYSIYAFWWGVPZKYLXCPNCMPBDGIIPVEGIANHLVRFLN");

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
    msg.setTimeStamp(0.311552025326);
    msg.setSource(31384U);
    msg.setSourceEntity(3U);
    msg.setDestination(19780U);
    msg.setDestinationEntity(187U);
    msg.timeout = 22313U;
    msg.flags = 151U;
    msg.lat = 0.809221393536;
    msg.lon = 0.297711617183;
    msg.start_z = 0.0157076324356;
    msg.start_z_units = 5U;
    msg.end_z = 0.0117959388483;
    msg.end_z_units = 181U;
    msg.radius = 0.765680819535;
    msg.speed = 0.492561252608;
    msg.speed_units = 245U;
    msg.custom.assign("PYOOLGLZVMWLTP");

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
    msg.setTimeStamp(0.445430205701);
    msg.setSource(13557U);
    msg.setSourceEntity(157U);
    msg.setDestination(62031U);
    msg.setDestinationEntity(223U);
    msg.timeout = 63732U;
    msg.lat = 0.475937575907;
    msg.lon = 0.0113590361682;
    msg.z = 0.944873953362;
    msg.z_units = 26U;
    msg.speed = 0.99806655482;
    msg.speed_units = 2U;
    msg.custom.assign("SVOOQBRYQALFXXDRHIWVCNQZPUMMOGVOHHELCWPSNWEQAMHXKNAOZQBKBFYTGSYPKFGEGVNBNIPQZAABQYPTIEUDRDTYLVMZKRHJONLREXHLSIDKOQELGCELMLYAWTIJKAGWASSGGCJUUFCBISTYPPMOFKDZKDVE");

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
    msg.setTimeStamp(0.902394895913);
    msg.setSource(13447U);
    msg.setSourceEntity(240U);
    msg.setDestination(7891U);
    msg.setDestinationEntity(44U);
    msg.timeout = 17894U;
    msg.lat = 0.472691892068;
    msg.lon = 0.329367702855;
    msg.z = 0.715906239993;
    msg.z_units = 226U;
    msg.speed = 0.841978881781;
    msg.speed_units = 10U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.614818981049;
    tmp_msg_0.y = 0.623606068961;
    tmp_msg_0.z = 0.0920109780332;
    tmp_msg_0.t = 0.374335978227;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CGIWUKDELKLAFHDGEA");

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
    msg.setTimeStamp(0.314522464603);
    msg.setSource(54094U);
    msg.setSourceEntity(48U);
    msg.setDestination(51126U);
    msg.setDestinationEntity(200U);
    msg.timeout = 43395U;
    msg.lat = 0.62971309361;
    msg.lon = 0.0879260972754;
    msg.z = 0.426699435162;
    msg.z_units = 163U;
    msg.speed = 0.567357687547;
    msg.speed_units = 239U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.60619202572;
    tmp_msg_0.y = 0.573056336179;
    tmp_msg_0.z = 0.00520981256609;
    tmp_msg_0.t = 0.244916473366;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UZWIXSWOLBUYSQHASDHCUOTPEWRYIUDUQNVPGKXPUKXQCGTYVNPLNBLZZJILOVFBPVEGKRVZBTWIOTGFRWIDKNSYECBKGWJZFMEINWNZLPWXSHKUNKSGIRARFZAXGDAECXCXCCRMFKOTTAEFFKU");

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
    msg.setTimeStamp(0.284424521122);
    msg.setSource(51918U);
    msg.setSourceEntity(248U);
    msg.setDestination(57937U);
    msg.setDestinationEntity(122U);
    msg.x = 0.427665334538;
    msg.y = 0.794687851575;
    msg.z = 0.936724029953;
    msg.t = 0.086645168221;

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
    msg.setTimeStamp(0.75830388415);
    msg.setSource(47376U);
    msg.setSourceEntity(121U);
    msg.setDestination(7110U);
    msg.setDestinationEntity(101U);
    msg.x = 0.346762606408;
    msg.y = 0.500706865834;
    msg.z = 0.0915134345806;
    msg.t = 0.969872300732;

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
    msg.setTimeStamp(0.428227255891);
    msg.setSource(44957U);
    msg.setSourceEntity(184U);
    msg.setDestination(62175U);
    msg.setDestinationEntity(213U);
    msg.x = 0.818246697415;
    msg.y = 0.428143656184;
    msg.z = 0.715034663244;
    msg.t = 0.564491665723;

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
    msg.setTimeStamp(0.610117316007);
    msg.setSource(51948U);
    msg.setSourceEntity(135U);
    msg.setDestination(45431U);
    msg.setDestinationEntity(249U);
    msg.timeout = 61510U;
    msg.name.assign("GTBAVNPWKUPIUODJFBNZLXBCFQNVEWJEBDUMSFG");
    msg.custom.assign("TOWGXUMLQMOMQPFQAAMJORDAEGCTFYXNDIGYENPJQHPBIFEZIQSIXVDIZRSHUCLGKJGKNWUCLTVEGDMSGADVKKXMYYLYVMNZORCBUZTSTOB");

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
    msg.setTimeStamp(0.532838304808);
    msg.setSource(22740U);
    msg.setSourceEntity(165U);
    msg.setDestination(15058U);
    msg.setDestinationEntity(21U);
    msg.timeout = 26988U;
    msg.name.assign("TKLGSWOMDWIOGUTGBJCCGCEZEEXZOIXGJQQHBTUVGSIJIJLPDQIPJMVMMCXQPJDGOENRYYTNSLVDMRVNFXFGZWMLZDXR");
    msg.custom.assign("XAJSGTRZZRIOUOWZZVCPPQAPMYDWLFQUVTMOZKFUOWADHPIAPOELCNIMLFUDYYXSFKWEDPIEMSQZAKUOJJNRLHNEMBCAGMVYCGWAVFUVWNXUCFDHPWIERZFQHEKDAXHKRZQEYJJNYMSRLRQGMRPGUYLYJSHVCGKNWXOQYRJTGEBHFDNCBTBYBUTGQILERUZTLOJQAJVBXGBCILPKVSFXHASMDZWBLJTXDSNMBCTNEVHW");

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
    msg.setTimeStamp(0.783421203572);
    msg.setSource(46469U);
    msg.setSourceEntity(29U);
    msg.setDestination(4526U);
    msg.setDestinationEntity(198U);
    msg.timeout = 43132U;
    msg.name.assign("VNBTKZFXOTEAUIOBHMJAEJCUJHDESLAJTW");
    msg.custom.assign("YSGSVJZULSAWWHAENXDAATVGLSXSQTOHDBZAECJIUARQLIJMBPUEPTNFBCCZAEVVDTDZQZOTGAKGUTZZQKCCMKOHFFKDYDYSNZOJBNYWRYJNEHRWFIDWSKHNNVGXCHYVXERLWIBMFFOBWWYNKTDJTQKVAQFIPAJHXGLPYVRPLERCCPXNFBROBIWPKICQSSMOUHBXOMMERYPTPRXJSIEURUXVMMCPOLHJKENDTLYGWZLHOZBUQMIQGGIXGQJF");

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
    msg.setTimeStamp(0.721816306963);
    msg.setSource(28288U);
    msg.setSourceEntity(17U);
    msg.setDestination(17795U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.0984632361107;
    msg.lon = 0.784210866694;
    msg.z = 0.106166589749;
    msg.z_units = 1U;
    msg.speed = 0.776387030284;
    msg.speed_units = 100U;
    msg.start_time = 0.909380652119;
    msg.custom.assign("ZIXKKKQCKEHJITFLRJLUWQPUETJBYWTSNWMRABYSOEUJYZVTAPVVEMIINVPXBRWYNLXAOZNJQMBGTGAMLDCOEKIRDIHOGJLQVRBNZAFRUHFQWSUYQSVSTOGMXDCGJCKDWKVNYMKLFSZCFFGHUWNZBOYXOHMYJHURSBBXUDCGBMVERVDCNJSLSGEXPLECCYZTGLHQQTLITJZTBQOMPOVPPYDSXWFFXHKRZPEAAKEGDRPDADF");

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
    msg.setTimeStamp(0.467734595802);
    msg.setSource(10807U);
    msg.setSourceEntity(51U);
    msg.setDestination(40804U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.745475851247;
    msg.lon = 0.051446295321;
    msg.z = 0.511625853852;
    msg.z_units = 48U;
    msg.speed = 0.832617262768;
    msg.speed_units = 72U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.463152805183;
    tmp_msg_0.y = 0.834218320669;
    tmp_msg_0.z = 0.0966767462251;
    tmp_msg_0.t = 0.252805386642;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.250502831154;
    msg.custom.assign("IVUAKYVBWVBSCLKTLYTZDDKBUPSOCBPJNNRXEHECKAPOZYZXJHFWMWJLDIQYVAXZNUFXXLMETDBYSBMYRPTSINEGBZDRGMZFQMAWQEZNFNEMWUMSKSQQCUANVEGFHQUVCOKWAMSCGELDZWIIPXVOLCPZOKFGCKCXDYLGMJABRIXYVDLGDPHOAPRDNPM");

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
    msg.setTimeStamp(0.212751491193);
    msg.setSource(6844U);
    msg.setSourceEntity(165U);
    msg.setDestination(62533U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.278017829203;
    msg.lon = 0.401398316643;
    msg.z = 0.855395926853;
    msg.z_units = 205U;
    msg.speed = 0.853414904462;
    msg.speed_units = 33U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.175333561306;
    tmp_msg_0.y = 0.337715497002;
    tmp_msg_0.z = 0.358316947573;
    tmp_msg_0.t = 0.289376710871;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 16063U;
    tmp_msg_1.off_x = 0.622815272911;
    tmp_msg_1.off_y = 0.491421001974;
    tmp_msg_1.off_z = 0.849384259395;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.12144768514;
    msg.custom.assign("CVRSTIJFXPYFCWQFQKLPSWTGOZWSLEYRYBQZPFVBCOMTJDHCGMM");

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
    msg.setTimeStamp(0.41701323759);
    msg.setSource(17130U);
    msg.setSourceEntity(109U);
    msg.setDestination(50775U);
    msg.setDestinationEntity(164U);
    msg.vid = 54279U;
    msg.off_x = 0.20587744063;
    msg.off_y = 0.559725138202;
    msg.off_z = 0.681915374963;

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
    msg.setTimeStamp(0.864769161508);
    msg.setSource(61994U);
    msg.setSourceEntity(166U);
    msg.setDestination(43438U);
    msg.setDestinationEntity(196U);
    msg.vid = 29346U;
    msg.off_x = 0.96757005621;
    msg.off_y = 0.831024602612;
    msg.off_z = 0.89796052279;

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
    msg.setTimeStamp(0.545056126935);
    msg.setSource(42334U);
    msg.setSourceEntity(60U);
    msg.setDestination(53710U);
    msg.setDestinationEntity(79U);
    msg.vid = 51836U;
    msg.off_x = 0.145679167821;
    msg.off_y = 0.285110381715;
    msg.off_z = 0.927887298308;

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
    msg.setTimeStamp(0.624047773399);
    msg.setSource(30532U);
    msg.setSourceEntity(180U);
    msg.setDestination(54911U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.393888531439);
    msg.setSource(27716U);
    msg.setSourceEntity(254U);
    msg.setDestination(1977U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.469188638682);
    msg.setSource(24974U);
    msg.setSourceEntity(91U);
    msg.setDestination(31680U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.87746717787);
    msg.setSource(61400U);
    msg.setSourceEntity(172U);
    msg.setDestination(49106U);
    msg.setDestinationEntity(243U);
    msg.mid = 53283U;

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
    msg.setTimeStamp(0.357337422954);
    msg.setSource(14570U);
    msg.setSourceEntity(241U);
    msg.setDestination(27848U);
    msg.setDestinationEntity(28U);
    msg.mid = 56857U;

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
    msg.setTimeStamp(0.12990150242);
    msg.setSource(48670U);
    msg.setSourceEntity(231U);
    msg.setDestination(25347U);
    msg.setDestinationEntity(67U);
    msg.mid = 53841U;

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
    msg.setTimeStamp(0.549938152529);
    msg.setSource(32761U);
    msg.setSourceEntity(207U);
    msg.setDestination(26152U);
    msg.setDestinationEntity(244U);
    msg.state = 152U;
    msg.eta = 26419U;
    msg.info.assign("LAGQQZPTUIZOCRFPPAYYFAZEHWASZNHGTCRDFPXWXUAUDZATOTMDKMWIUJTXIUBQWBQXCXESGYQSCPUR");

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
    msg.setTimeStamp(0.97736691825);
    msg.setSource(6787U);
    msg.setSourceEntity(130U);
    msg.setDestination(27204U);
    msg.setDestinationEntity(246U);
    msg.state = 69U;
    msg.eta = 63180U;
    msg.info.assign("FPGWEOJYJVYYSSBRIHMFBPXWCJTLERONEBEUEIDCISKYTWSLAWEZUGAVMPCTAHCXHDQOVDSMKSBNAFUKIF");

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
    msg.setTimeStamp(0.698700579843);
    msg.setSource(29835U);
    msg.setSourceEntity(2U);
    msg.setDestination(29124U);
    msg.setDestinationEntity(160U);
    msg.state = 19U;
    msg.eta = 48099U;
    msg.info.assign("HDWKDXWORPEFGVPWQOVITZMXLKIKPCVYGRPICWWSXMKKZJFJXUVNTUEKQYIGBDNABIBBXBSGEUMGBPJXSQGHVQJNBFTYSMXDTUKZKZICICNQATRPQKLZPCJBHSMYYUZLAAFAHHYFNLPQEAREZUJOLOTLRJTDKSEZPOHACYIJYLEWQIMZEFLWCUFBSGFLYHXRUCNADROOTRVJCSEPHTDSNUMWRGRQSENLVXOUMWFGNHMHVYVOGDCBFTJANV");

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
    msg.setTimeStamp(0.798826034468);
    msg.setSource(44118U);
    msg.setSourceEntity(15U);
    msg.setDestination(6801U);
    msg.setDestinationEntity(135U);
    msg.system = 41286U;
    msg.duration = 50402U;
    msg.speed = 0.602311492209;
    msg.speed_units = 83U;
    msg.x = 0.874157852747;
    msg.y = 0.221975564295;
    msg.z = 0.984693983892;
    msg.z_units = 242U;

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
    msg.setTimeStamp(0.469884666995);
    msg.setSource(27536U);
    msg.setSourceEntity(237U);
    msg.setDestination(1847U);
    msg.setDestinationEntity(197U);
    msg.system = 27437U;
    msg.duration = 35650U;
    msg.speed = 0.164122454267;
    msg.speed_units = 222U;
    msg.x = 0.522074475258;
    msg.y = 0.0372757723312;
    msg.z = 0.740517558725;
    msg.z_units = 74U;

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
    msg.setTimeStamp(0.835214279987);
    msg.setSource(14846U);
    msg.setSourceEntity(131U);
    msg.setDestination(54051U);
    msg.setDestinationEntity(26U);
    msg.system = 51716U;
    msg.duration = 26350U;
    msg.speed = 0.600542682242;
    msg.speed_units = 185U;
    msg.x = 0.682633741298;
    msg.y = 0.454458779956;
    msg.z = 0.0435586650756;
    msg.z_units = 6U;

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
    msg.setTimeStamp(0.470225746554);
    msg.setSource(45277U);
    msg.setSourceEntity(102U);
    msg.setDestination(11657U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.992976073552;
    msg.lon = 0.971723366829;
    msg.speed = 0.899027859235;
    msg.speed_units = 230U;
    msg.duration = 32735U;
    msg.sys_a = 45043U;
    msg.sys_b = 7943U;
    msg.move_threshold = 0.222491463464;

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
    msg.setTimeStamp(0.494332478265);
    msg.setSource(30284U);
    msg.setSourceEntity(180U);
    msg.setDestination(60794U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.880680366526;
    msg.lon = 0.712376891086;
    msg.speed = 0.936467085233;
    msg.speed_units = 64U;
    msg.duration = 57111U;
    msg.sys_a = 6868U;
    msg.sys_b = 7320U;
    msg.move_threshold = 0.771356674493;

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
    msg.setTimeStamp(0.212442696985);
    msg.setSource(1186U);
    msg.setSourceEntity(187U);
    msg.setDestination(18494U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.68557945814;
    msg.lon = 0.752682996814;
    msg.speed = 0.0459021441891;
    msg.speed_units = 142U;
    msg.duration = 59705U;
    msg.sys_a = 37721U;
    msg.sys_b = 37289U;
    msg.move_threshold = 0.770011218978;

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
    msg.setTimeStamp(0.295210210812);
    msg.setSource(34364U);
    msg.setSourceEntity(134U);
    msg.setDestination(1607U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.634119284992;
    msg.lon = 0.953742988346;
    msg.z = 0.0388398575746;
    msg.z_units = 147U;
    msg.speed = 0.861353293206;
    msg.speed_units = 33U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.456879733349;
    tmp_msg_0.lon = 0.206242660865;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("POHNEEYEDVQSDASYQAIWSOUJKNGXFFXMXPGBSVMSCEUWQOKTZHWKUDTATNBCFCHJJGALBINRLKUMPWLPPHZFJKGMKNWIBJHXFATBRVMYQOXIKV");

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
    msg.setTimeStamp(0.876440946795);
    msg.setSource(54377U);
    msg.setSourceEntity(168U);
    msg.setDestination(30561U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.481510362648;
    msg.lon = 0.203376895777;
    msg.z = 0.888823941945;
    msg.z_units = 129U;
    msg.speed = 0.331559655499;
    msg.speed_units = 173U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.640909076591;
    tmp_msg_0.lon = 0.438561949857;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("PPBKCRCCRRHAAJAQQRTTIRTDBBQJRVYAIUUWGIVMSHLHOCZXSMFOACZWWITZUSXWBDOKGFSUFYFAFZVKZDKVZHYIENBUDLYNSQTNJDNYGNSOQLCMMIRMGWWTXF");

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
    msg.setTimeStamp(0.795936674689);
    msg.setSource(42552U);
    msg.setSourceEntity(21U);
    msg.setDestination(65135U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.648667285623;
    msg.lon = 0.73867918587;
    msg.z = 0.565250098433;
    msg.z_units = 128U;
    msg.speed = 0.283919383824;
    msg.speed_units = 127U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.233681967464;
    tmp_msg_0.lon = 0.60267125335;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("OIWPZXHEGIDFWEQGPFVJAUTMNPGYGISQWTB");

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
    msg.setTimeStamp(0.624041668043);
    msg.setSource(51871U);
    msg.setSourceEntity(82U);
    msg.setDestination(37530U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.161877318293;
    msg.lon = 0.937881358062;

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
    msg.setTimeStamp(0.571224945899);
    msg.setSource(65370U);
    msg.setSourceEntity(97U);
    msg.setDestination(5917U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.108215128293;
    msg.lon = 0.62989594099;

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
    msg.setTimeStamp(0.958243998866);
    msg.setSource(39445U);
    msg.setSourceEntity(118U);
    msg.setDestination(1660U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.0164851543877;
    msg.lon = 0.892839742152;

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
    msg.setTimeStamp(0.950809555577);
    msg.setSource(65327U);
    msg.setSourceEntity(89U);
    msg.setDestination(21154U);
    msg.setDestinationEntity(109U);
    msg.timeout = 11808U;
    msg.lat = 0.327612536943;
    msg.lon = 0.42476677086;
    msg.z = 0.955399807244;
    msg.z_units = 187U;
    msg.pitch = 0.38296955992;
    msg.amplitude = 0.141500575842;
    msg.duration = 12538U;
    msg.speed = 0.679901906936;
    msg.speed_units = 89U;
    msg.radius = 0.966388825293;
    msg.direction = 220U;
    msg.custom.assign("NNTAKPPUKEFSJ");

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
    msg.setTimeStamp(0.287131576212);
    msg.setSource(56422U);
    msg.setSourceEntity(71U);
    msg.setDestination(28801U);
    msg.setDestinationEntity(87U);
    msg.timeout = 23738U;
    msg.lat = 0.975089899268;
    msg.lon = 0.299694247783;
    msg.z = 0.775460915909;
    msg.z_units = 67U;
    msg.pitch = 0.893186482992;
    msg.amplitude = 0.0704135294631;
    msg.duration = 4883U;
    msg.speed = 0.717547360804;
    msg.speed_units = 80U;
    msg.radius = 0.993634384356;
    msg.direction = 120U;
    msg.custom.assign("FASWXSFHRQXAOIEFYUEBWUPICDIVHUUPOHPBRSMEYXVOAUPGJLCJYATXXKYPFFKD");

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
    msg.setTimeStamp(0.838691023584);
    msg.setSource(31825U);
    msg.setSourceEntity(78U);
    msg.setDestination(16888U);
    msg.setDestinationEntity(146U);
    msg.timeout = 37845U;
    msg.lat = 0.273148311733;
    msg.lon = 0.692017306103;
    msg.z = 0.279298873816;
    msg.z_units = 44U;
    msg.pitch = 0.946238996099;
    msg.amplitude = 0.618358731646;
    msg.duration = 48862U;
    msg.speed = 0.245315325214;
    msg.speed_units = 158U;
    msg.radius = 0.850701722976;
    msg.direction = 149U;
    msg.custom.assign("DOREGDWMMCRUFYTNLNPAAVZS");

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
    msg.setTimeStamp(0.213372361762);
    msg.setSource(23378U);
    msg.setSourceEntity(158U);
    msg.setDestination(51527U);
    msg.setDestinationEntity(82U);
    msg.formation_name.assign("BCQTJAGNPAMSZXCDNMOEGNSZPUKBNXLLEOQFEILJWUZJKYDRAWSVHXIFXEEJKZRAYLWAHXTWEHCUNUKTIJHZTNYZOSDPSBFPPXUMMTWHKCYAVYQCHCUZYJDLKTLDOC");
    msg.reference_frame = 9U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25542U;
    tmp_msg_0.off_x = 0.449679527622;
    tmp_msg_0.off_y = 0.235937102681;
    tmp_msg_0.off_z = 0.161233124375;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("TCMNXVVRMFPKROSAAWBYFIWTZSIWWCGRVKEYYQTDHUZHABEWMGRJXENASXHSYQMFCGLFWJPPOPQOOCTDTDLLQVBOEFHTWRRQJVBBLNZJMPANLCKGHUUMYUCALUDPNJLEMSSYDNDYFVWXCYGNWEFNHXJBCODXOZETBUKZXNIHQAQIADCNYAVLUHVULKZQIRKRFPEGVAWORQZGSOSZYKTIMRSF");

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
    msg.setTimeStamp(0.0673649130194);
    msg.setSource(36924U);
    msg.setSourceEntity(38U);
    msg.setDestination(1178U);
    msg.setDestinationEntity(57U);
    msg.formation_name.assign("HYRGHLILDFICJYOKHKXBITTGCSJLBTASPOUKOSXMIQNWLFNQPKBVAOZYGJYJRNZMOZFLNWXYOMPQWGTFXMRDUCYKJGGIHEQWHCPEARLJVPZAQFBOACRPTEEILCPGQVWKDNUHSDXVORCWMEYJMWNXJEVAKFFAAGGMRDPKIMKVNEZETEZFRHPJAZTRGVYFOBEWWHXCOTCZNUSSVBQVWUXMIIQQBUYATK");
    msg.reference_frame = 108U;
    msg.custom.assign("SASTYPMJNHCTQLOVMOJHOPPOXEYZENGHDBIMYDAUMZTJVBXRJXHERTHYTKBLZYVREWOAGTUBFUCLRIPUVCDUZWVPMIYKCIMCEPXTSEMNHBCWJKGXWSIQKDXLAKQGICWNLXNPCZVZWKXWFFTFQPFLAYKBYOOVJSHXMDWEUKMVABXEAWLBQNEDNSFOTORLUIDQQGZPDGJDNQDERUJTSJGZNKAHGWZLZBAC");

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
    msg.setTimeStamp(0.322162221357);
    msg.setSource(60501U);
    msg.setSourceEntity(203U);
    msg.setDestination(64292U);
    msg.setDestinationEntity(172U);
    msg.formation_name.assign("DQSZWKVAKCRRVXAZUVLADXOAZDFHIMQHSUGUNAYAXBLPWTZNFANUGICFPEZZXTNDGPEMCSNKGQUBWROVCOHTVJFRQIYHGRHVGIFZYDCEWBNKCWTDHQDKGTIYAIRIWYJLBLSJXORKLKNQLPVYUHQPTOFBPFAMQLEXCHPSAFVNSLBGEVDUJDZXFFMVYIEEJNHSDKXNCTJPYSYBEITMQUEUZOMJRRXKWWRLOSYPQCHMOJWMITCTGZMUMBBJPB");
    msg.reference_frame = 120U;
    msg.custom.assign("SAAOTZUNNEJOLZORWCKBYGWAABAXVEXLEFRYMZZNWTISUNDXYQPIWPPWNSIHHCJVMSBYEOKMIVGTPKCLTSZIHTPLBKOYJISBEXGEHURNQLZIXXDFYVFCKLDPGJCCSVRSSOUCZFVKRFFOKTIGFOJTDMZYNDGUAP");

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
    msg.setTimeStamp(0.186593144708);
    msg.setSource(64842U);
    msg.setSourceEntity(232U);
    msg.setDestination(53622U);
    msg.setDestinationEntity(171U);
    msg.group_name.assign("EOVTPWYBUQHQNFQADBPSPJDMEHSTGGRWBLGVW");
    msg.formation_name.assign("YVCJERDLWEHMJUDSJESOEYMSIRAVVDCXZUVBGIENYHAIGHVKXXXWPNCEDGBRFYBEYIZFQHXJCAOBWVXKOVGVPWJTFPCPPOKJFKEOUFYAMTGZPFJVRHOOGLWKQPAYXJATUI");
    msg.plan_id.assign("MZPTBGEMDAUVQFCNSJSEXPDABOKRTHBMHZBGACMUODAEIHYAXDSGHJPWCGLOKVOQJXFMBROFDYZSLMXTTXSIEEQQLESPWZOJCIVLYILRZMMVUEFVSQIOJMNVJNKJZZFZKANYTVQBOWGXQRWRSWZDGSKLITUAPPRPRKUNHWNVDILIEGCGXDFNXYQJPWGBKIRHSDBYFHXEFIUTKBLCFATHHWTLBNFPVOROLWXYYCUUDAACRCKQYZWUTMEC");
    msg.description.assign("TXOMZDAGMDSSHWAKCJKKUQBNNKLPYIZHRISWDRTAHYSAQGIOLSUQVAPPVDUUQQIIPSSHFMBZRFDXUEDJMTUNHEHYJOBOQIFWRGLBJXRAGKHWTKCILPYPRNNGNMJFBFYKVUXCTGXWTLHJWBNMPSEXCUVAUMJQ");
    msg.leader_speed = 0.829053503286;
    msg.leader_bank_lim = 0.19843434346;
    msg.pos_sim_err_lim = 0.360421027671;
    msg.pos_sim_err_wrn = 0.355303072087;
    msg.pos_sim_err_timeout = 42008U;
    msg.converg_max = 0.905365732483;
    msg.converg_timeout = 51959U;
    msg.comms_timeout = 61793U;
    msg.turb_lim = 0.912611060797;
    msg.custom.assign("AOLVKZBOSIYGZHYPRPSCFCRZHPTVMGOEJNMVLCJGXFRUPIRUUXIDRWNKPYHEIFJUGNMJKKHXNMMPVLFXUPFUZTALNAJCWLREAOTVBMGWHOLKHNCDOCTKD");

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
    msg.setTimeStamp(0.95116313904);
    msg.setSource(19412U);
    msg.setSourceEntity(144U);
    msg.setDestination(24159U);
    msg.setDestinationEntity(245U);
    msg.group_name.assign("UGDCKXIIEQXCYVEKCYSQVCEHDLHVGQUBCYWZOHAGWXAKQUALMTWWAPDODPNPQXBHOONEERBMECWSPJWO");
    msg.formation_name.assign("NNTVGTKSHDIRXNBIPSDZDBDACKOOQXKIOENKMIJNDNZHBPWZUWFZGYTHVFLUSMDVUQYSLBWEGGIWEHNHSRZCEFFMODPLAVJXCKKYOJBUSYQUPTARCVBIUGKGLCSFKDGXLTAECQ");
    msg.plan_id.assign("TBUHNVVSMEVPEUOKOMRJOOPYOVLBAYXRHIXJFMDXPRPFQTDHIVAZEZCLEMSSNNSWJKJNLDQRHGFWYKWFWGBJOJZGAGTIBLSCFEXTFCDYAKYWSNBPBIASCLOLOKGQMZEBYLMDYQKYVHVQXOPCLUQJUCNEHODNNZBMQWXTPQGUHZCQCXUKDAIAFWRDGTETLRCGEAMAXWKKSQLUG");
    msg.description.assign("DPIZZYMLRFYZNFAZVMBKCRRFGULSGPJQQTEMBSEWJGVXYFOOOTLFVBNLUJKUPMJVVTQSTGETUMUCDXHENYBIJKXFXEKHSBXHBILDQWDJKIPERXHLADTPAOALEDOVPGADYFYFCHONCWSTQXFWQIUZTJQNQIVCJMWMWGSHYKVNHUAXAZSBEWMIRPDHLAURTRYNCWDIHZSOGBWCDYWGKOE");
    msg.leader_speed = 0.530814244105;
    msg.leader_bank_lim = 0.550694535507;
    msg.pos_sim_err_lim = 0.578026251896;
    msg.pos_sim_err_wrn = 0.453987554329;
    msg.pos_sim_err_timeout = 53217U;
    msg.converg_max = 0.761909301196;
    msg.converg_timeout = 10401U;
    msg.comms_timeout = 45654U;
    msg.turb_lim = 0.0485584783535;
    msg.custom.assign("JNSIFWGONCLYPZNUBOGQWDCSEIRIETDXYFMUUOGLHSHSOPPEPYPCSQKMIIBFDDMUBSINTHIHOAQLXJUNKHVVIAENHYJMKGZBNVGXAGRMVDWEGEPCHOTIPBRQWEVXFOWTQWZLQMTKVUXJUCUORKWMRFMPALFGNRBCRVMCRLAVUOJSDQSCDKLZPLQQDFBFJKSXLABPYWZHJEYUYESFZRKCTZETBMWAARCJBGTZIQYH");

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
    msg.setTimeStamp(0.164485458785);
    msg.setSource(55109U);
    msg.setSourceEntity(19U);
    msg.setDestination(33377U);
    msg.setDestinationEntity(151U);
    msg.group_name.assign("MJTUTALDYGOTNCOHQNYMLPJYUCEBBBUNRIIPZARTFFKHACPITAHWSPAZRRRCQHMFMZWCSEPDXXWPEULIWRLLXXWGKYHDKQKVTDHJQZGFNBIQGWYWNLNNMETEEGBQ");
    msg.formation_name.assign("VRMMQWEUBDGVUTEOCGZOAIBKKJCLBBWNAXTGYPDZEYGMIXBRMZHJDWMVQXLZKIMBCTVRUNECMYJZSDKLEAJJYLZQGXIPGXKCWCPJPRVNIHWCTIDZOQPDIEQJFLHSPXWRXTEOMVKYFTCJDSSPHRSVZGMHZLYJFRUSYOYDFHHSTBSTUTFSCTBADVANXPFEKGGURHQQHCLZAANQUOAOWDLSKGXYOHYJWURI");
    msg.plan_id.assign("UNHLTZPZXQNCFHUSXLDSGZQIQCBVNDMYPMIYVPZQWMHTATVKHLKKSXXYGLCFNFSPLAYJUKZQXVVYGYPDOFOMR");
    msg.description.assign("EKSRVAXNOQFRYUKZRQZIGFDTUZIAXFLERPMOUDYFXOILUHVPNMWCJCNCMHLKQLVQDTDTDOVEZHSWGCRWIYTDRY");
    msg.leader_speed = 0.449435392345;
    msg.leader_bank_lim = 0.809429618993;
    msg.pos_sim_err_lim = 0.723724741701;
    msg.pos_sim_err_wrn = 0.465479865665;
    msg.pos_sim_err_timeout = 21198U;
    msg.converg_max = 0.85870024826;
    msg.converg_timeout = 63879U;
    msg.comms_timeout = 50628U;
    msg.turb_lim = 0.673271709017;
    msg.custom.assign("KUZCZBJRSJVIELSEEZKOQBBSCMSMYJGPWFYPZFNHQVIVWQULNRSVROATQCMBKYAITZKRMPDKQVKUFTVJFIJOYRNNGAXWCNYWTDEHOJXNDJ");

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
    msg.setTimeStamp(0.468180097736);
    msg.setSource(10581U);
    msg.setSourceEntity(143U);
    msg.setDestination(44605U);
    msg.setDestinationEntity(213U);
    msg.control_src = 24945U;
    msg.control_ent = 87U;
    msg.timeout = 0.590429257324;
    msg.loiter_radius = 0.306160488267;
    msg.altitude_interval = 0.191291746946;

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
    msg.setTimeStamp(0.785113750701);
    msg.setSource(14399U);
    msg.setSourceEntity(192U);
    msg.setDestination(58938U);
    msg.setDestinationEntity(248U);
    msg.control_src = 10509U;
    msg.control_ent = 168U;
    msg.timeout = 0.345518777912;
    msg.loiter_radius = 0.372979748279;
    msg.altitude_interval = 0.354578140506;

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
    msg.setTimeStamp(0.183799664999);
    msg.setSource(3887U);
    msg.setSourceEntity(95U);
    msg.setDestination(1500U);
    msg.setDestinationEntity(141U);
    msg.control_src = 6935U;
    msg.control_ent = 2U;
    msg.timeout = 0.151359104375;
    msg.loiter_radius = 0.028607474954;
    msg.altitude_interval = 0.108709909943;

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
    msg.setTimeStamp(0.916806608372);
    msg.setSource(36791U);
    msg.setSourceEntity(139U);
    msg.setDestination(31167U);
    msg.setDestinationEntity(186U);
    msg.flags = 213U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.431563141344;
    tmp_msg_0.speed_units = 161U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.301387341665;
    tmp_msg_1.z_units = 2U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.267029785283;
    msg.lon = 0.296817372385;
    msg.radius = 0.301717543006;

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
    msg.setTimeStamp(0.904490255527);
    msg.setSource(20252U);
    msg.setSourceEntity(6U);
    msg.setDestination(60067U);
    msg.setDestinationEntity(159U);
    msg.flags = 91U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.653430449593;
    tmp_msg_0.speed_units = 160U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.610415872581;
    tmp_msg_1.z_units = 236U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.494890502548;
    msg.lon = 0.611136081977;
    msg.radius = 0.602712689054;

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
    msg.setTimeStamp(0.422210936988);
    msg.setSource(33641U);
    msg.setSourceEntity(59U);
    msg.setDestination(51402U);
    msg.setDestinationEntity(142U);
    msg.flags = 138U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.291692400306;
    tmp_msg_0.speed_units = 150U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.943158442038;
    tmp_msg_1.z_units = 12U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.657049544719;
    msg.lon = 0.244357183293;
    msg.radius = 0.05819172216;

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
    msg.setTimeStamp(0.742433577342);
    msg.setSource(63345U);
    msg.setSourceEntity(148U);
    msg.setDestination(14961U);
    msg.setDestinationEntity(163U);
    msg.control_src = 34167U;
    msg.control_ent = 194U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 38U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.780031941789;
    tmp_tmp_msg_0_0.speed_units = 159U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.974578127951;
    tmp_tmp_msg_0_1.z_units = 172U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.112728330903;
    tmp_msg_0.lon = 0.22720033828;
    tmp_msg_0.radius = 0.791168612944;
    msg.reference.set(tmp_msg_0);
    msg.state = 132U;
    msg.proximity = 196U;

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
    msg.setTimeStamp(0.769211333133);
    msg.setSource(55470U);
    msg.setSourceEntity(52U);
    msg.setDestination(57428U);
    msg.setDestinationEntity(199U);
    msg.control_src = 45686U;
    msg.control_ent = 245U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 251U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.766107342476;
    tmp_tmp_msg_0_0.speed_units = 223U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.741534661712;
    tmp_tmp_msg_0_1.z_units = 241U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.700401629223;
    tmp_msg_0.lon = 0.0670091952672;
    tmp_msg_0.radius = 0.829339068229;
    msg.reference.set(tmp_msg_0);
    msg.state = 253U;
    msg.proximity = 86U;

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
    msg.setTimeStamp(0.76784104585);
    msg.setSource(60736U);
    msg.setSourceEntity(180U);
    msg.setDestination(32964U);
    msg.setDestinationEntity(98U);
    msg.control_src = 25314U;
    msg.control_ent = 169U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 247U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0900049648258;
    tmp_tmp_msg_0_0.speed_units = 32U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.428931546551;
    tmp_tmp_msg_0_1.z_units = 54U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.587640741642;
    tmp_msg_0.lon = 0.717179256995;
    tmp_msg_0.radius = 0.811577857655;
    msg.reference.set(tmp_msg_0);
    msg.state = 233U;
    msg.proximity = 201U;

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
    msg.setTimeStamp(0.792588304115);
    msg.setSource(29401U);
    msg.setSourceEntity(125U);
    msg.setDestination(2976U);
    msg.setDestinationEntity(0U);
    msg.ax_cmd = 0.781180565979;
    msg.ay_cmd = 0.686559125405;
    msg.az_cmd = 0.233229988989;
    msg.ax_des = 0.865436654987;
    msg.ay_des = 0.74520645509;
    msg.az_des = 0.320385041838;
    msg.virt_err_x = 0.869889933814;
    msg.virt_err_y = 0.300438173202;
    msg.virt_err_z = 0.113483336828;
    msg.surf_fdbk_x = 0.538713358984;
    msg.surf_fdbk_y = 0.404886897434;
    msg.surf_fdbk_z = 0.477685343194;
    msg.surf_unkn_x = 0.272064552347;
    msg.surf_unkn_y = 0.394011868063;
    msg.surf_unkn_z = 0.305813678844;
    msg.ss_x = 0.951548218224;
    msg.ss_y = 0.714902739024;
    msg.ss_z = 0.97916627344;

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
    msg.setTimeStamp(0.354671783534);
    msg.setSource(46867U);
    msg.setSourceEntity(13U);
    msg.setDestination(44711U);
    msg.setDestinationEntity(99U);
    msg.ax_cmd = 0.925378420275;
    msg.ay_cmd = 0.935123742706;
    msg.az_cmd = 0.155878427552;
    msg.ax_des = 0.726573989366;
    msg.ay_des = 0.846425668225;
    msg.az_des = 0.351527133383;
    msg.virt_err_x = 0.188419739646;
    msg.virt_err_y = 0.452639995654;
    msg.virt_err_z = 0.407955247693;
    msg.surf_fdbk_x = 0.712305116489;
    msg.surf_fdbk_y = 0.696236153671;
    msg.surf_fdbk_z = 0.954975266983;
    msg.surf_unkn_x = 0.217690817473;
    msg.surf_unkn_y = 0.762478954367;
    msg.surf_unkn_z = 0.256191277982;
    msg.ss_x = 0.232514099703;
    msg.ss_y = 0.975527977593;
    msg.ss_z = 0.965427059284;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LEDAKNUWAFZBMBEYUHXUVCFKRVWFPWBBCYYNCNTMUAIBSOIBVTRCSFTYJLKZSNVVRAKOEPANNETAYELRBUDYAMUQZDGIRFBVZGJGXAQEQYBHERBRKJLMTHDUZQAUXQCOXRZJMOGQOWPDTREL");
    tmp_msg_0.dist = 0.294402626839;
    tmp_msg_0.err = 0.0296050786345;
    tmp_msg_0.ctrl_imp = 0.0267477934828;
    tmp_msg_0.rel_dir_x = 0.665507003209;
    tmp_msg_0.rel_dir_y = 0.852725852688;
    tmp_msg_0.rel_dir_z = 0.200377154395;
    tmp_msg_0.err_x = 0.956886977343;
    tmp_msg_0.err_y = 0.743683131337;
    tmp_msg_0.err_z = 0.921187369028;
    tmp_msg_0.rf_err_x = 0.398640006029;
    tmp_msg_0.rf_err_y = 0.587308978172;
    tmp_msg_0.rf_err_z = 0.696538970936;
    tmp_msg_0.rf_err_vx = 0.70189283171;
    tmp_msg_0.rf_err_vy = 0.514614516612;
    tmp_msg_0.rf_err_vz = 0.224001900419;
    tmp_msg_0.ss_x = 0.497851391447;
    tmp_msg_0.ss_y = 0.891672857783;
    tmp_msg_0.ss_z = 0.776060712461;
    tmp_msg_0.virt_err_x = 0.218809170781;
    tmp_msg_0.virt_err_y = 0.824031244999;
    tmp_msg_0.virt_err_z = 0.525151752026;
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
    msg.setTimeStamp(0.194663619659);
    msg.setSource(44420U);
    msg.setSourceEntity(190U);
    msg.setDestination(44834U);
    msg.setDestinationEntity(89U);
    msg.ax_cmd = 0.101448635367;
    msg.ay_cmd = 0.86641351649;
    msg.az_cmd = 0.791571091417;
    msg.ax_des = 0.475941967681;
    msg.ay_des = 0.478126323074;
    msg.az_des = 0.154561762315;
    msg.virt_err_x = 0.759798997315;
    msg.virt_err_y = 0.94812087028;
    msg.virt_err_z = 0.89495461737;
    msg.surf_fdbk_x = 0.207698812206;
    msg.surf_fdbk_y = 0.611732200156;
    msg.surf_fdbk_z = 0.90165961186;
    msg.surf_unkn_x = 0.933668580827;
    msg.surf_unkn_y = 0.16394773557;
    msg.surf_unkn_z = 0.82797394509;
    msg.ss_x = 0.943548838565;
    msg.ss_y = 0.424894086413;
    msg.ss_z = 0.704715715517;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("HVGPABOZIN");
    tmp_msg_0.dist = 0.692233511955;
    tmp_msg_0.err = 0.119783537411;
    tmp_msg_0.ctrl_imp = 0.499381099402;
    tmp_msg_0.rel_dir_x = 0.189066434044;
    tmp_msg_0.rel_dir_y = 0.146127666901;
    tmp_msg_0.rel_dir_z = 0.357538836643;
    tmp_msg_0.err_x = 0.867546019995;
    tmp_msg_0.err_y = 0.253094181562;
    tmp_msg_0.err_z = 0.982106213423;
    tmp_msg_0.rf_err_x = 0.613246935928;
    tmp_msg_0.rf_err_y = 0.295714567697;
    tmp_msg_0.rf_err_z = 0.630910641292;
    tmp_msg_0.rf_err_vx = 0.805889884376;
    tmp_msg_0.rf_err_vy = 0.944506921194;
    tmp_msg_0.rf_err_vz = 0.631896769041;
    tmp_msg_0.ss_x = 0.184187894888;
    tmp_msg_0.ss_y = 0.614774941678;
    tmp_msg_0.ss_z = 0.237020199324;
    tmp_msg_0.virt_err_x = 0.613614499773;
    tmp_msg_0.virt_err_y = 0.424392514043;
    tmp_msg_0.virt_err_z = 0.626446372095;
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
    msg.setTimeStamp(0.945307724991);
    msg.setSource(50552U);
    msg.setSourceEntity(62U);
    msg.setDestination(58580U);
    msg.setDestinationEntity(249U);
    msg.s_id.assign("OZCQDGXIJEJASXBSYNHQNBSLYDAFIEMRVMTWXYVBKPGZPYZVKDRFDIEQHCYCYZFALBEMWDZQZEPYBEYKETZDRNIRKAUVIRNQGUJMFWPBGFBPUDFHTCOCUVQGHQFAAOSXGLTWSCTWTZTGUIVOTBPKVSFRRMACMPXBJOOLOZXJJALONKXYVQFSXEWKDMRWQHJUSNXLRDTIH");
    msg.dist = 0.000658013889771;
    msg.err = 0.254721179577;
    msg.ctrl_imp = 0.375266561064;
    msg.rel_dir_x = 0.657407077311;
    msg.rel_dir_y = 0.767507215482;
    msg.rel_dir_z = 0.167181575426;
    msg.err_x = 0.100700877303;
    msg.err_y = 0.103254624597;
    msg.err_z = 0.773314329112;
    msg.rf_err_x = 0.407872367053;
    msg.rf_err_y = 0.416371921232;
    msg.rf_err_z = 0.245603448603;
    msg.rf_err_vx = 0.615978956871;
    msg.rf_err_vy = 0.308338650746;
    msg.rf_err_vz = 0.319618524694;
    msg.ss_x = 0.203992254753;
    msg.ss_y = 0.402155970167;
    msg.ss_z = 0.151285549004;
    msg.virt_err_x = 0.324121839092;
    msg.virt_err_y = 0.138336338551;
    msg.virt_err_z = 0.952902259173;

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
    msg.setTimeStamp(0.824389403651);
    msg.setSource(9170U);
    msg.setSourceEntity(185U);
    msg.setDestination(12536U);
    msg.setDestinationEntity(43U);
    msg.s_id.assign("IZYZMCPXBGKPDHTAGZREKUNVZODTNWOM");
    msg.dist = 0.975154330292;
    msg.err = 0.797046792327;
    msg.ctrl_imp = 0.17175398398;
    msg.rel_dir_x = 0.134654944014;
    msg.rel_dir_y = 0.644084532141;
    msg.rel_dir_z = 0.423451827374;
    msg.err_x = 0.314544634055;
    msg.err_y = 0.544099364706;
    msg.err_z = 0.47334957924;
    msg.rf_err_x = 0.83505782698;
    msg.rf_err_y = 0.274350620645;
    msg.rf_err_z = 0.144332912723;
    msg.rf_err_vx = 0.130737978275;
    msg.rf_err_vy = 0.83126414959;
    msg.rf_err_vz = 0.580084651871;
    msg.ss_x = 0.510339367457;
    msg.ss_y = 0.931800507767;
    msg.ss_z = 0.928999858778;
    msg.virt_err_x = 0.681152101197;
    msg.virt_err_y = 0.0311291721442;
    msg.virt_err_z = 0.692443320138;

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
    msg.setTimeStamp(0.176744882485);
    msg.setSource(24842U);
    msg.setSourceEntity(240U);
    msg.setDestination(23316U);
    msg.setDestinationEntity(136U);
    msg.s_id.assign("EEFZHFNPZWEGVEXQHUPBUYEXRFGPKDVKLYSTDXRXEZHBPIOWMULQBKRNJJMASNVQIWNYNHCUCTLCIEOVCJWDVZSEGHXBIUNUAMVUTCMPHUIBAEYSANNYPAWPGOPJXWRLCWMWAHDIHKZOAKIDDSNJU");
    msg.dist = 0.160264643242;
    msg.err = 0.256613882056;
    msg.ctrl_imp = 0.270718027793;
    msg.rel_dir_x = 0.762065766636;
    msg.rel_dir_y = 0.358347624027;
    msg.rel_dir_z = 0.863447527717;
    msg.err_x = 0.89558149277;
    msg.err_y = 0.827003259148;
    msg.err_z = 0.422616231507;
    msg.rf_err_x = 0.986199583451;
    msg.rf_err_y = 0.521397391705;
    msg.rf_err_z = 0.565905060027;
    msg.rf_err_vx = 0.763224582631;
    msg.rf_err_vy = 0.583312389537;
    msg.rf_err_vz = 0.420112393413;
    msg.ss_x = 0.748569189698;
    msg.ss_y = 0.739703364599;
    msg.ss_z = 0.337997151435;
    msg.virt_err_x = 0.655669433891;
    msg.virt_err_y = 0.12410810112;
    msg.virt_err_z = 0.814095131503;

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
    msg.setTimeStamp(0.949287003501);
    msg.setSource(2501U);
    msg.setSourceEntity(138U);
    msg.setDestination(25178U);
    msg.setDestinationEntity(158U);
    msg.timeout = 27300U;
    msg.rpm = 0.774051854372;
    msg.direction = 251U;
    msg.custom.assign("ZAHXBSXTSITVQMXDFYWMCTAOFEIPEAZEULDIFDHNRQBUKQMPYNVOCCGWWGUY");

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
    msg.setTimeStamp(0.116840645347);
    msg.setSource(28709U);
    msg.setSourceEntity(65U);
    msg.setDestination(55772U);
    msg.setDestinationEntity(242U);
    msg.timeout = 26805U;
    msg.rpm = 0.642638374151;
    msg.direction = 78U;
    msg.custom.assign("TINPRQQVBZRWVOQFJOXOQFWUCMNPEUPJVRYKMHZWLIIIWUKNOIGKMXAEKBBZEIFVQGVCRJSTSEHHEQBWZHJDCXGXNZNLGKPLFGXIHHPQYMXRSAGYDATUCEAFMSBREHVVTCUEVYLDHQGOIRAYKRWSQOZLIPIGJTZDDYBLHXUXONZRPXKYYSMBUFZVBAVGXJCQWTCSYZDKADUULASPLYBFNKPMW");

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
    msg.setTimeStamp(0.379115425968);
    msg.setSource(4076U);
    msg.setSourceEntity(98U);
    msg.setDestination(16091U);
    msg.setDestinationEntity(7U);
    msg.timeout = 861U;
    msg.rpm = 0.498310260356;
    msg.direction = 206U;
    msg.custom.assign("ZSMYNOSHZOCDZRZPYAWSMDKOEXKTIFCOMWGGLQUFHXMRUNQYKIGZSBFMQPSQLLUCNQYIOFFJRGZPGVPVJEVTHLDZYIOZVWHCBBRWHVUKYKIBHKBLMXXTIKEJLPYW");

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
    msg.setTimeStamp(0.404222696099);
    msg.setSource(34079U);
    msg.setSourceEntity(232U);
    msg.setDestination(27099U);
    msg.setDestinationEntity(179U);
    msg.formation_name.assign("TPDGLZTIJZSIXFNRHEMTSOTXOFDHYLDSPLRZWAFVHYHMWDNSKUMWXEAVCKBVFXQHJHEGZLFQJQGZBXZUNTMHGNSAVFILONXSWICGEQSRKOXFVXRWYTROHQQKUBTRYVLKWFVNSQKICLVLAUTMIJKAUUGQKLPMATJMQCWEDYATPRCVYZRXYOGPISBLJYIFYDKSGCINOB");
    msg.type = 15U;
    msg.op = 53U;
    msg.group_name.assign("BUHUIARZOLUCIAZVDBRQIAHIDUYKBKDJLEWKGRNWOFFXQBUGEQYLJEAPMRTZZHBLYEHPCLAVTFJAMCOFPOQPKDLHYIDXVFEPGNNSBJUAHZSRQUYSMRMJXWXERHTOIGDPSZDLVWNBMJZFNDXFOIVKTFRTGNLQJKKNSXJSLIWJYQECCGWQPSOAFXXBWWPHTHCYVPZASHOYLXUVMTMKUVXUZGNYPACBNVKEGMTOTTKIYVNCRGMIEMQDC");
    msg.plan_id.assign("JNPLUKRHDQYZBQAUTXHAHOOVDOSACZDWXFGKJGOE");
    msg.description.assign("SNFCYTNVYSBDZACCVPTASWXGZHGRZEMPBQMPGQSADAHOWQHUWNZELUZURDPATFABTLWBBKGKTXEDACITDVJFOLTIEXHLRFWIHMJDPMSCXQXMVQEZVANZTULIMGPJYIKZUHOWNRHKUKZXRBRLCOOERZBLEOJGKBYOJIJREOXQPRBSSCQFHMVGYGCPQDJLSWJQNYLSPIMHUUCRANWW");
    msg.reference_frame = 110U;
    msg.leader_bank_lim = 0.137388689163;
    msg.leader_speed_min = 0.894359035989;
    msg.leader_speed_max = 0.14960525198;
    msg.leader_alt_min = 0.63912755082;
    msg.leader_alt_max = 0.460545934037;
    msg.pos_sim_err_lim = 0.641321681737;
    msg.pos_sim_err_wrn = 0.223279839049;
    msg.pos_sim_err_timeout = 27464U;
    msg.converg_max = 0.953785542948;
    msg.converg_timeout = 35611U;
    msg.comms_timeout = 16173U;
    msg.turb_lim = 0.594001654887;
    msg.custom.assign("WYHVJLLQRPUIXSNUNYABQGOZUCSSWVETTVKHODDIFAEARCIJWITLGNODCGUEBWZYMWMIPNSRKQPJZOTVMEBNIBKJZKXVZSJHVDUMKEWEOAJCLQYV");

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
    msg.setTimeStamp(0.185595905814);
    msg.setSource(26164U);
    msg.setSourceEntity(88U);
    msg.setDestination(52088U);
    msg.setDestinationEntity(152U);
    msg.formation_name.assign("YVXWNYQXLJFDEVYGWLLPEHLHRQORDDOUZJUQVIVYJDBUNFIUAGDBSWVEQJZCMVEEJWFCNTFFMZESTGHDIAOVMSCBXGGHJKJSPNORKPIGGHOYSTYYCRZFWNIEUKWPXGMNCQSUBKAXYAAKIPZAIURBXDJPBCORKHOUDRTXHMWBTNIMXZTRHZZCEMKAESLPRMZVPNITSKLFUQERCUWCXVVTDHAOWJOKMAPYQIF");
    msg.type = 149U;
    msg.op = 168U;
    msg.group_name.assign("VKAJMFTTYJEGXFQUPUOLUMXTICXXUPHHSMAMBYDZBGYRXHCHBTGBMKVWOKGNZLYJLZYIIXSRKWDQFOILFTUVQMXYIDIBOWZKLSTTRGLWWGCESVNVGIXWZIJBFHIUVARUERBMIQPZDFSPQCLCEOPHZAUCPMEDCMAAJTQFFXBPAGERGNVTLSZYPJDRHSYSCLNUY");
    msg.plan_id.assign("HXGSPRFLEVWPJLNCFYUTOFAEBUQTYOWBQSVEZOYJDGBDGGRNSPAMQTTUIKCIQZSVCXLGHOHRMMCUZHWXXMVKZISXVFQQYPWNNWPKRTKNOJLXREBCLHHUCXIDRYXPBDSW");
    msg.description.assign("ZCVNRUOXCDMZZPKDHCNSBQGXDQFQWCJRBSIIKYHMFRCANYXAKMOHJPFNFQLGVSGIAFSWLNETKTRWBZHIXQXTSQEMPOIDATQUKTBOAEBRPJBJENVZMNTRKWAFOWEQVCOBRMJUMECRGLHGRFLWDSVIFUBOJBPUETDYDYPGWTAEUSUZIPQAUKEFLXANWLSABXZYXKVMVYHLOJETYUW");
    msg.reference_frame = 228U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 60565U;
    tmp_msg_0.off_x = 0.571536069072;
    tmp_msg_0.off_y = 0.664771804717;
    tmp_msg_0.off_z = 0.297239238669;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.0462688223322;
    msg.leader_speed_min = 0.0423561591893;
    msg.leader_speed_max = 0.695421137672;
    msg.leader_alt_min = 0.445315350263;
    msg.leader_alt_max = 0.436095846203;
    msg.pos_sim_err_lim = 0.522430061503;
    msg.pos_sim_err_wrn = 0.363479467594;
    msg.pos_sim_err_timeout = 31741U;
    msg.converg_max = 0.191983996056;
    msg.converg_timeout = 14234U;
    msg.comms_timeout = 14588U;
    msg.turb_lim = 0.931251973719;
    msg.custom.assign("BARRHVFHHKTUGHVWKYTJNEQIHYILYRZNACQINJPPXTRTUQGFKWTSBZAGDMJZGWQBKAGPUBXUQLKVNOSDUIVVEBYTLKNKACCJWDDCFXDGWMZFDDUAQIIUAHHFOSOJBSVOROZKVXWKYOSDLFVBGHMQCIJZYXHLSXIYBUADZSTLNMUNTJPZNEGEEUTZXFPFONLRGCNZMIWEHPJRPRYMCQFEYOQOQLEVSSDLPOITYXERFGMWPMCBA");

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
    msg.setTimeStamp(0.163970896133);
    msg.setSource(18466U);
    msg.setSourceEntity(34U);
    msg.setDestination(50975U);
    msg.setDestinationEntity(40U);
    msg.formation_name.assign("BEDFWHPIAEWDHUMFPGIGYYIKVWCRVAXLITLXOFOYJRLQSEICTRRLMNQO");
    msg.type = 15U;
    msg.op = 162U;
    msg.group_name.assign("ERFAULCZDEAOIWVEBFVPHNRJWJFVCDOXSMTIUFXKLIQGZOBKVRLXCODOBVGOZEZNUBRMMWIDHEICRGETGNFXJGGCHYZHIPKJWKADNMNSJT");
    msg.plan_id.assign("JCCNOODVLSPSPWTNQMVMOXGLJQDYEAEANMWRKJ");
    msg.description.assign("LSSBHQPPYEQMYLBMDUCAJRVEJZTKXLWVXOUPCPIYSOPKKZPEHWNFHVANFJAQFHTCRMHUAJHBFTDBXDTZKKFRIVDKARWVEDSRLAIXYHFVRSOTESOXXCCBPXMNMUMZKALOCSEW");
    msg.reference_frame = 151U;
    msg.leader_bank_lim = 0.465802701795;
    msg.leader_speed_min = 0.892762602544;
    msg.leader_speed_max = 0.541936278904;
    msg.leader_alt_min = 0.939430949989;
    msg.leader_alt_max = 0.778291086504;
    msg.pos_sim_err_lim = 0.733606577805;
    msg.pos_sim_err_wrn = 0.607435406422;
    msg.pos_sim_err_timeout = 61111U;
    msg.converg_max = 0.94755223736;
    msg.converg_timeout = 33050U;
    msg.comms_timeout = 65317U;
    msg.turb_lim = 0.923978816979;
    msg.custom.assign("VTKQDQZSWXYHLLLRUBUSZDBWQCPUGGKEJXJDYSEKNBLGNMSBDRKTWPVWPGBGKNRLCIVUNXEZJICXBIRRAOKHVYPJFTBAOYOQVAFMBRGRLCRJHAJITPCIZLIQLGXIYSWOMSZGUZGWEPQTVVZMJBEF");

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
    msg.setTimeStamp(0.660350954837);
    msg.setSource(6054U);
    msg.setSourceEntity(29U);
    msg.setDestination(65529U);
    msg.setDestinationEntity(105U);
    msg.timeout = 9876U;
    msg.lat = 0.627285956551;
    msg.lon = 0.849887627027;
    msg.z = 0.20993519005;
    msg.z_units = 232U;
    msg.speed = 0.064209348458;
    msg.speed_units = 206U;
    msg.custom.assign("FVYUIAFPVWJFNVAALOESSYXGWPPQXCGDPQJKDVYOBFREFTGKRRAEHZKRZETLXALGNGYIDTBLYFMORGMZCWUETHZJNBSTFMOPOWVYIWHTEMOJAHEIHKRGIVNTCURBQRQSNSUUMETCCOSUVOXWQWKDZBHOOWCJXRIAPIUSEKVPLCPHVXXCGMLZXHIBYNIMAFEMFHYNJLZJUDCZWTSJBAQ");

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
    msg.setTimeStamp(0.491258126111);
    msg.setSource(53731U);
    msg.setSourceEntity(113U);
    msg.setDestination(14697U);
    msg.setDestinationEntity(248U);
    msg.timeout = 17699U;
    msg.lat = 0.896333838316;
    msg.lon = 0.942153981377;
    msg.z = 0.818522489445;
    msg.z_units = 146U;
    msg.speed = 0.443701376842;
    msg.speed_units = 62U;
    msg.custom.assign("KHLOMCWAUJVYWXCQLNOUVDDKFMEGZHTLFEHKAZBEUBWKCVLONTDIDNPJXRIDEBHMHGFIBFYGAXYEYFIAATWGGSQELBOATVWERYXRTSJRKZBVIDOHXITSBKVOQNUOGFCLLSRYQYTCONZCJNCJETFQGHBYJRRCDDDNUJZXKZPXQMPUPHQANZKSXBBFPUUKPCYPGOKAUSRNMWDRMJZQCJYSFWSSGQETZMAPRLILSE");

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
    msg.setTimeStamp(0.783984438016);
    msg.setSource(8609U);
    msg.setSourceEntity(41U);
    msg.setDestination(48313U);
    msg.setDestinationEntity(129U);
    msg.timeout = 65429U;
    msg.lat = 0.985497474819;
    msg.lon = 0.708025190488;
    msg.z = 0.833256652279;
    msg.z_units = 158U;
    msg.speed = 0.880158078771;
    msg.speed_units = 136U;
    msg.custom.assign("XTXZNBSMCRTIGJKIGUIPFPKCYVEHOSBWTFGODNQGCWTJVVJAPAMFPUDMWIGWJEYXEGESRRQCMLHUPHUOVLOHWJLAMXGNAWRCFAXYAFHZVQUQONQFJIEZBTPGYLYNYLCUFPNWHDSXKZINOVNMRDROOMUTFTAHEABSVDRKLZZLFEZOQKLBSEQORKRJCRIJEHNWKYXQ");

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
    msg.setTimeStamp(0.382599188772);
    msg.setSource(62079U);
    msg.setSourceEntity(121U);
    msg.setDestination(25298U);
    msg.setDestinationEntity(200U);
    msg.timeout = 25593U;
    msg.lat = 0.621641877492;
    msg.lon = 0.526921958393;
    msg.z = 0.9716032065;
    msg.z_units = 216U;
    msg.speed = 0.372714940866;
    msg.speed_units = 183U;
    msg.custom.assign("LQPRJVLFARURU");

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
    msg.setTimeStamp(0.524656991297);
    msg.setSource(52211U);
    msg.setSourceEntity(179U);
    msg.setDestination(52150U);
    msg.setDestinationEntity(146U);
    msg.timeout = 4061U;
    msg.lat = 0.787495600569;
    msg.lon = 0.142806756334;
    msg.z = 0.982888276278;
    msg.z_units = 72U;
    msg.speed = 0.124252846973;
    msg.speed_units = 229U;
    msg.custom.assign("IXXTVVIWGFHCNKHELYUGLFLIFJZGRPNUJUEBQYMEZSKBAZHYSFKWPVBBTPJMIHWJGQXTKGCUZYMTKWMSZJLHJDDNOTWYJAWCMQOFXVWQPUVASCHSLLCNPRRI");

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
    msg.setTimeStamp(0.711870974953);
    msg.setSource(50773U);
    msg.setSourceEntity(162U);
    msg.setDestination(59254U);
    msg.setDestinationEntity(139U);
    msg.timeout = 29663U;
    msg.lat = 0.974932419041;
    msg.lon = 0.806060098852;
    msg.z = 0.633991795477;
    msg.z_units = 213U;
    msg.speed = 0.872650864833;
    msg.speed_units = 28U;
    msg.custom.assign("VOUMVLZSDLIWXAWQRWNRAFBVDWMKUZBPDUMLMYLMZLGHDFPFQDBTKXZDFGVFQOFNBKONNZIFSMWNWJCZYICNRDXSYYRKJJEKEAFBUCBIKGLVPHPTNJPKJSAJIJUYUMDYO");

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
    msg.setTimeStamp(0.23999060874);
    msg.setSource(50708U);
    msg.setSourceEntity(230U);
    msg.setDestination(35481U);
    msg.setDestinationEntity(37U);
    msg.arrival_time = 0.991945841606;
    msg.lat = 0.317456930228;
    msg.lon = 0.146777762022;
    msg.z = 0.865285269917;
    msg.z_units = 204U;
    msg.travel_z = 0.951441646343;
    msg.travel_z_units = 46U;
    msg.delayed = 144U;

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
    msg.setTimeStamp(0.262845168154);
    msg.setSource(58231U);
    msg.setSourceEntity(80U);
    msg.setDestination(59348U);
    msg.setDestinationEntity(95U);
    msg.arrival_time = 0.116359340479;
    msg.lat = 0.0838998755449;
    msg.lon = 0.382304189127;
    msg.z = 0.882063039083;
    msg.z_units = 50U;
    msg.travel_z = 0.813703771794;
    msg.travel_z_units = 197U;
    msg.delayed = 221U;

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
    msg.setTimeStamp(0.645786701211);
    msg.setSource(50392U);
    msg.setSourceEntity(138U);
    msg.setDestination(21986U);
    msg.setDestinationEntity(156U);
    msg.arrival_time = 0.896304738758;
    msg.lat = 0.607810767419;
    msg.lon = 0.383306215757;
    msg.z = 0.377890062715;
    msg.z_units = 14U;
    msg.travel_z = 0.245387929959;
    msg.travel_z_units = 64U;
    msg.delayed = 47U;

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
    msg.setTimeStamp(0.0541200933012);
    msg.setSource(20920U);
    msg.setSourceEntity(44U);
    msg.setDestination(22401U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.462229741859;
    msg.lon = 0.23187800086;
    msg.z = 0.790919726457;
    msg.z_units = 42U;
    msg.speed = 0.242063581569;
    msg.speed_units = 245U;
    msg.bearing = 0.108375612927;
    msg.cross_angle = 0.260680487095;
    msg.width = 0.953642949152;
    msg.length = 0.191995749323;
    msg.coff = 95U;
    msg.angaperture = 0.387182620557;
    msg.range = 18382U;
    msg.overlap = 95U;
    msg.flags = 39U;
    msg.custom.assign("VITYIYNKFGTRQISDYTQNMZNWULMNQHUBZBLOXUERQACEMCNECOJYIBKFJDSTMKUMYZFPGSXSCMWMEHPJKWEKSHQCOOCKNEGJWJRXFHUWKZRSPVZPUZXULWBODOVXNAABHRTTCOUW");

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
    msg.setTimeStamp(0.916783091154);
    msg.setSource(13352U);
    msg.setSourceEntity(231U);
    msg.setDestination(33924U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.71043367459;
    msg.lon = 0.2778136295;
    msg.z = 0.979195326549;
    msg.z_units = 205U;
    msg.speed = 0.48885478408;
    msg.speed_units = 104U;
    msg.bearing = 0.582385325555;
    msg.cross_angle = 0.0700652804927;
    msg.width = 0.532193120125;
    msg.length = 0.993658205163;
    msg.coff = 122U;
    msg.angaperture = 0.146217227593;
    msg.range = 34845U;
    msg.overlap = 249U;
    msg.flags = 128U;
    msg.custom.assign("KDQYODOIYUXPYKBWVJGQLZHAMMERPAGPNJSAGTRKXBLQIXQFOZDQIXYIUNURGXGIQJKUXSVAHJFURDVEPDCEZFZCDRQINNQSPTEBDLCPNENYTHVTMEHKLTLVVICSLCYGTLHXKFFUQZWAYRFRIBOGAMSSRGBHWMMHJZNOASOJYDPMKDZETZHCJZSCLOWGOBOBLXUKXWFESUWPCNDVAKUUFNMBJBT");

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
    msg.setTimeStamp(0.2801408443);
    msg.setSource(18085U);
    msg.setSourceEntity(49U);
    msg.setDestination(15467U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.284198421575;
    msg.lon = 0.0720225844125;
    msg.z = 0.672873001479;
    msg.z_units = 211U;
    msg.speed = 0.350149995721;
    msg.speed_units = 185U;
    msg.bearing = 0.0491706190679;
    msg.cross_angle = 0.282907729801;
    msg.width = 0.615963711425;
    msg.length = 0.313522886576;
    msg.coff = 56U;
    msg.angaperture = 0.918144971708;
    msg.range = 49896U;
    msg.overlap = 211U;
    msg.flags = 23U;
    msg.custom.assign("QSNSGJDARGSIBOPMIMYVAVNUZQZHQOOVUMGDQOJDRNKDOCPDBGMRCFFOBUYVJBUPKPGAMCTNHLTYVZZTBKPRALMIRSNQEBBQDCGTLJFXUOLNYHKTLJHHTXXOZUIZRRKSSWFNFGGFJYENGXCXFIOQWIEAJHRKTNMRTRWHCZQZYAOBEMHXPALYCZYXWUIDWJI");

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
    msg.setTimeStamp(0.906086906456);
    msg.setSource(42525U);
    msg.setSourceEntity(238U);
    msg.setDestination(21638U);
    msg.setDestinationEntity(158U);
    msg.timeout = 27476U;
    msg.lat = 0.916649398434;
    msg.lon = 0.14484921493;
    msg.z = 0.545794564522;
    msg.z_units = 148U;
    msg.speed = 0.601167719186;
    msg.speed_units = 159U;
    msg.syringe0 = 180U;
    msg.syringe1 = 251U;
    msg.syringe2 = 211U;
    msg.custom.assign("TAXRUUIAIPURYCVHCZFCKEFJHNPXNPIESJCSIKPPUVTKFJISUYOXNVYADVQOWKTHCOJHRNRFLVNSQDMMTFSDFTEOJQSEMAUBNVLIZCTVSGXHOPYYEKQXOGOTKXJMNZQFWXVVHLJNZHYBWELZZZOUIBBLQMUXGUTAGRKWQKOAOBGLUMDFWPWZJLYRMBHERVBWGGBQTER");

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
    msg.setTimeStamp(0.759674567839);
    msg.setSource(31305U);
    msg.setSourceEntity(213U);
    msg.setDestination(54105U);
    msg.setDestinationEntity(196U);
    msg.timeout = 1138U;
    msg.lat = 0.273219577813;
    msg.lon = 0.381576868162;
    msg.z = 0.75199931597;
    msg.z_units = 192U;
    msg.speed = 0.401977770421;
    msg.speed_units = 141U;
    msg.syringe0 = 93U;
    msg.syringe1 = 96U;
    msg.syringe2 = 172U;
    msg.custom.assign("BWZQHMWEASWRPAVLINBFBYEDPIJGNXHVFQVZGSEAIZUFYGOOZHNLUDHVPAZBXIHPUOLSSJJLFMUGYINTCUBYETHXIAIQYTVQP");

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
    msg.setTimeStamp(0.826328410552);
    msg.setSource(6104U);
    msg.setSourceEntity(34U);
    msg.setDestination(7990U);
    msg.setDestinationEntity(77U);
    msg.timeout = 9644U;
    msg.lat = 0.844920031803;
    msg.lon = 0.0593611309354;
    msg.z = 0.730546745195;
    msg.z_units = 242U;
    msg.speed = 0.696737358241;
    msg.speed_units = 186U;
    msg.syringe0 = 196U;
    msg.syringe1 = 147U;
    msg.syringe2 = 204U;
    msg.custom.assign("MILBRODBEFHCZYTKOFTYFKMCRRGJARPSMYNAEQUUHAJNNWNEVAAAJPMYEPC");

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
    msg.setTimeStamp(0.416894308568);
    msg.setSource(53313U);
    msg.setSourceEntity(207U);
    msg.setDestination(17531U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.30736215915);
    msg.setSource(40008U);
    msg.setSourceEntity(64U);
    msg.setDestination(24847U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.283198955019);
    msg.setSource(46952U);
    msg.setSourceEntity(229U);
    msg.setDestination(54651U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.39486497629);
    msg.setSource(20554U);
    msg.setSourceEntity(71U);
    msg.setDestination(16447U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.386721013824;
    msg.lon = 0.895833714709;
    msg.z = 0.654535882609;
    msg.z_units = 128U;
    msg.speed = 0.108878607738;
    msg.speed_units = 34U;
    msg.takeoff_pitch = 0.246150495698;
    msg.custom.assign("HLZXIVJEXRAIIPCPXAIJKHUJJWQKNACJASYSHNKPEMPBOXAVICYYDQOWAOHYFVHLIDGWMKMFZQWKGMJUAIOUNRMJYWUEICOTQUCTLVSFRAFTDEMQYVSYMNSNPKMBSJZLBCQ");

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
    msg.setTimeStamp(0.133230700237);
    msg.setSource(42955U);
    msg.setSourceEntity(28U);
    msg.setDestination(57652U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.9933798013;
    msg.lon = 0.112674797234;
    msg.z = 0.243400970443;
    msg.z_units = 17U;
    msg.speed = 0.322985796983;
    msg.speed_units = 34U;
    msg.takeoff_pitch = 0.46259933623;
    msg.custom.assign("DVIMRTDGJQGIETMLZXDYTFYSISSAQOKNNLTWRAANOMJPGAZFSGKKUWOXZQFUGUTJVNPTHBAHOYFVGBXGBMEYFELILHMMAHEVWOANUOCGMIUDTHOBBBHCALZIZQBICSSYZCLCOUHVEKBYEKPGYRLBUHPJSHSCWEWL");

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
    msg.setTimeStamp(0.326532939258);
    msg.setSource(43099U);
    msg.setSourceEntity(190U);
    msg.setDestination(31550U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.891755044092;
    msg.lon = 0.334189563608;
    msg.z = 0.200289281657;
    msg.z_units = 197U;
    msg.speed = 0.758264296032;
    msg.speed_units = 94U;
    msg.takeoff_pitch = 0.43840799798;
    msg.custom.assign("MLDJBLWUYLIAZTUEAOHPVZZJMDTWLGTZXLYYFMXXXOTYWAZPWYELSKAGQBEANUOZCCEQJIGTRNGGXVIRATSUVFMIROAWNXFJBROBYPIVRUKTVCKVSTJDMEXCSCQAHPCINBHKCSXZFQPKDUMOOULWWEWJIXKCHMPYMGOEIMSSFQZSFBFBKRNBJEHRZCVJDTDYBRHVEHNQFTWHHGFNDQLUSPIRNPUKICVJYRNUNSFKKQGVQLMJOOXEGDA");

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
    msg.setTimeStamp(0.404963383175);
    msg.setSource(21874U);
    msg.setSourceEntity(200U);
    msg.setDestination(2215U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.722812911049;
    msg.lon = 0.849690093279;
    msg.z = 0.469316968671;
    msg.z_units = 216U;
    msg.speed = 0.670943038184;
    msg.speed_units = 114U;
    msg.abort_z = 0.738741214083;
    msg.bearing = 0.520985025669;
    msg.glide_slope = 244U;
    msg.glide_slope_alt = 0.740618233462;
    msg.custom.assign("KVDJTJOQRSHMTRFMMQNUXPLHPIOZEJYSELKJOQFDIRCNLNUNLBFQTYARGOFUKAGBMSUILPFZGWVLJKWWUPUQLCUURGBZM");

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
    msg.setTimeStamp(0.08279179241);
    msg.setSource(60537U);
    msg.setSourceEntity(42U);
    msg.setDestination(53931U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.677240038723;
    msg.lon = 0.655851865647;
    msg.z = 0.403715892874;
    msg.z_units = 64U;
    msg.speed = 0.371525020887;
    msg.speed_units = 36U;
    msg.abort_z = 0.309060024506;
    msg.bearing = 0.502007265083;
    msg.glide_slope = 245U;
    msg.glide_slope_alt = 0.563359240118;
    msg.custom.assign("CUFYJXXCPFTHFVRYOIXEDGQLBIZWUFIVCPQAEORGENSUPOISJOLKRAPJTGPKYBLXLBJDNRWDHJQZMGBENYUQKSJSZUNNXEBRGYSZKZCHQUIMOFKIEANPMZHBVKXNVRTTRAPQFMIXSAXDYCGYBPQOKSITMVPJWRLVYHEFTKAPGWXBAZVQORMLHCCWXWWZVMEKTYHSZUDGFBWWVEGGMRLFNAJLOOIKJNQ");

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
    msg.setTimeStamp(0.294565205912);
    msg.setSource(16384U);
    msg.setSourceEntity(205U);
    msg.setDestination(41663U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.115837400966;
    msg.lon = 0.138945507469;
    msg.z = 0.127009775484;
    msg.z_units = 119U;
    msg.speed = 0.928041460816;
    msg.speed_units = 246U;
    msg.abort_z = 0.770849468457;
    msg.bearing = 0.814574316086;
    msg.glide_slope = 230U;
    msg.glide_slope_alt = 0.324796968854;
    msg.custom.assign("CJGTJNQSDQROGUMBXJHRWNLFFDUAFAWQGDOXTVTTYVYKIVASBCPBBKDWQWISYQZJSKUQUIMTODISXUPCXMJMCNBHONYHQTYEROOOAHBERBRMQPAJEPSERPHNENGJLXYIXZTSLCLGEBZBGVFHDFUMNWSZAQZIRVWIDHXWTNPCKRTJDGKVZNMCELKHFIFFOOZDKIKNXLP");

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
    msg.setTimeStamp(0.171897945143);
    msg.setSource(57673U);
    msg.setSourceEntity(54U);
    msg.setDestination(31719U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.252496533882;
    msg.lon = 0.220313279831;
    msg.speed = 0.0958143596703;
    msg.speed_units = 116U;
    msg.limits = 174U;
    msg.max_depth = 0.481460540776;
    msg.min_alt = 0.505438281585;
    msg.time_limit = 0.133404981035;
    msg.controller.assign("ESZNHTCYVWIVIUSQFIKZCYXHSQKPCDARDFUGJLNEGMKLAZOTRIWSXEKZ");
    msg.custom.assign("OGIYFDGEHCHCSGKWIHQKSNAMNXVPQOPVGHQUAQRBWOFDZNLCVDMF");

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
    msg.setTimeStamp(0.155456042924);
    msg.setSource(49034U);
    msg.setSourceEntity(60U);
    msg.setDestination(21239U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.0755774785646;
    msg.lon = 0.3709530987;
    msg.speed = 0.698800593662;
    msg.speed_units = 248U;
    msg.limits = 78U;
    msg.max_depth = 0.573067683281;
    msg.min_alt = 0.149700028883;
    msg.time_limit = 0.27552882477;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.507260435802;
    tmp_msg_0.lon = 0.142159967205;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("MGRTFRTYPZYLSHMHGEPEEVXEQIHFBJJIBCJGFWSGCFDJOZCVOSWBLHEKSZWONOETACYQQWHKDDSKCZACRDLNXUJIIARZNTKVQGBMLUAMORDZQYEIWWBURONTWQTKXIUCQGPKGUMPUTRNXNAHXCZNRSNQGSKTDILFAUPJZVNAIPXUMXPIHJDTLOTSYQFWJJPFLPBZCRAOJMMSAFUYVCVZK");
    msg.custom.assign("GKTVDHZSFHXDRYAPKCUOIEPDGOELLYE");

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
    msg.setTimeStamp(0.772128731517);
    msg.setSource(54648U);
    msg.setSourceEntity(225U);
    msg.setDestination(53606U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.0594389172018;
    msg.lon = 0.818081253577;
    msg.speed = 0.926321454617;
    msg.speed_units = 16U;
    msg.limits = 235U;
    msg.max_depth = 0.235497854042;
    msg.min_alt = 0.520246862827;
    msg.time_limit = 0.334120402836;
    msg.controller.assign("FGJTMQWVSKQSSOACRCZHFLFZIKJYDZEKBEDUBVCGGFWKCBZKOUALHHUHWRQCXSOZJWBGLMTUUZVXNLGCXWTWTLHNEBGOVYMDSFMGTINNPINWXOQIAEZQIRTFKQFVXIKBDAVUJPUNISUQRKTRXVSYDXYMEZBVWPJGPTVUALORVPXMRRJASRRJOPDQOCNNMWZEYHDNIACJLSFYYGNSF");
    msg.custom.assign("ADVJXDAUVLFJDLTJESMRFGKHGXGNLSEHURPVYDWMFBTBCISWSZKSXZVEPLCSEQUYIZTBNOGVNTXEZEIEGYRFB");

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
    msg.setTimeStamp(0.501082688726);
    msg.setSource(20854U);
    msg.setSourceEntity(154U);
    msg.setDestination(43620U);
    msg.setDestinationEntity(164U);
    msg.target.assign("OVPKHIXWDMDUQGILTRVRHHSOXUEUOJPLIJLYONOETGRNCDNYLPPNNQSQOSMSPATYLDVJGHOMKHAPCKXJFWBRXJZGXJIPTTRHXVTCGOWRBVKQSWDUZCLEHFARWDHFHRCWBJDGMZZLAOJSDWTLQCRXFMUDVSANEBPBNGEJVQKFLEAYYBVXULKUKXUXZYIYMBTJCMNVKAGCFMCKEOBFIBSZUDAEYWSMGMWHGQQAYUFIZCNZSRVYEZTIIF");
    msg.max_speed = 0.907316967517;
    msg.speed_units = 164U;
    msg.lat = 0.680843624446;
    msg.lon = 0.316675911923;
    msg.z = 0.757336936662;
    msg.z_units = 28U;
    msg.custom.assign("XCRMDZQJCCAEKCIOFTGIQZBATPUEWQDBWYMMYXQIHQTSFVBVUDWVZDBWVMFSDEDYNPFQETSDOPXUZYBJWUHXIKHIOAPJTKFOZLXMVLKLBINOKHRYVGHNPSSAKCFABEPFGATUWMRNHNPOZRMLQJLRFVZESYKUZRLPTZDFXIRQUJIZVKTYCXGGMAEDUJVTSUUEFXYCMRODQJBWINNVHC");

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
    msg.setTimeStamp(0.172569097842);
    msg.setSource(31567U);
    msg.setSourceEntity(217U);
    msg.setDestination(22755U);
    msg.setDestinationEntity(105U);
    msg.target.assign("OIYOMOQBKPFXJKNPHUQZBPAMPXKEGGJLMSAQSYKVMYWMUWESGRVVDDEZZKFJGVVFWUEBTEBVOLTLBCONRYPICPCXHKZDYIADIYRJFOBZMQLNVGHRQGWQWTAOYHLKXANWEBSHEL");
    msg.max_speed = 0.605411403584;
    msg.speed_units = 161U;
    msg.lat = 0.108736310515;
    msg.lon = 0.916561016612;
    msg.z = 0.539300092108;
    msg.z_units = 11U;
    msg.custom.assign("XAVGYXTMFMK");

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
    msg.setTimeStamp(0.253395823708);
    msg.setSource(6592U);
    msg.setSourceEntity(19U);
    msg.setDestination(11582U);
    msg.setDestinationEntity(133U);
    msg.target.assign("ZWQLUYFAGVBMGHRFDJNMLTHOIJMUAKJAOGDQPLFGKUNVISAJLZGCLKFDANEROHWXKSFSCWPBFXRQSARHBQKJZKCBXGPXNFUUBOWAJZPMBVNHUIQFBMZLYAIXXTQCOPXRI");
    msg.max_speed = 0.940145661851;
    msg.speed_units = 2U;
    msg.lat = 0.912221839757;
    msg.lon = 0.221155137466;
    msg.z = 0.517896384921;
    msg.z_units = 168U;
    msg.custom.assign("BGJBOSFZUGJIMEUAEUPIWRNASAHTECQCOPCWFUSDMHBFPGWOTQAZQXHQBQUMFYAKYGAXFLDJJEXTNDLLWBHVFTOQYALDNVJOLIKEKFDIGERPJZRNEWRTLSKGXDKMTZPBCYVBHVAPVRZCHILNCKTZYBMOLDFIHKNCNIYXZGWHILTINDSWXCYXPSQQAELMKOQVZRVWPFJVXUUWKMURYZSBK");

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
    msg.setTimeStamp(0.622554284581);
    msg.setSource(44382U);
    msg.setSourceEntity(111U);
    msg.setDestination(51849U);
    msg.setDestinationEntity(209U);
    msg.timeout = 53352U;
    msg.lat = 0.592463806124;
    msg.lon = 0.155846851083;
    msg.speed = 0.540510866316;
    msg.speed_units = 68U;
    msg.custom.assign("UTWICPBUMBGXHDRCSIVMVFTYASOBYWOQKLAHBJIIUNNEZYMOGWCOLDXUSAOVPLUZKTSMEJEGFGJYORNZASQOLSFQXIQNVTQUHKMQYDXCWVZDLHKZUZJHFXKWUTEAPQNJTIQZHJLPNC");

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
    msg.setTimeStamp(0.296828400213);
    msg.setSource(45826U);
    msg.setSourceEntity(216U);
    msg.setDestination(62567U);
    msg.setDestinationEntity(20U);
    msg.timeout = 40281U;
    msg.lat = 0.15596270672;
    msg.lon = 0.0189060696893;
    msg.speed = 0.599311187149;
    msg.speed_units = 131U;
    msg.custom.assign("SBOFMLFYGMVQETBWEOXLCCUHOIGADOVKGZNHNCNMWS");

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
    msg.setTimeStamp(0.353516989668);
    msg.setSource(18724U);
    msg.setSourceEntity(242U);
    msg.setDestination(34135U);
    msg.setDestinationEntity(120U);
    msg.timeout = 29448U;
    msg.lat = 0.574398788414;
    msg.lon = 0.302449739352;
    msg.speed = 0.411250179705;
    msg.speed_units = 171U;
    msg.custom.assign("ALYLDZDPBCIVQFEHLNVKUJAAYIRKXMTWPTNNXUAMEUPTITUTWIBQBNSEHDPQUALNOXCYAPB");

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
    msg.setTimeStamp(0.489321736374);
    msg.setSource(47011U);
    msg.setSourceEntity(186U);
    msg.setDestination(9519U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.816622622365;
    msg.lon = 0.538140736034;
    msg.z = 0.447130795674;
    msg.z_units = 167U;
    msg.radius = 0.0901361035671;
    msg.duration = 62032U;
    msg.speed = 0.326340860642;
    msg.speed_units = 56U;
    msg.popup_period = 59296U;
    msg.popup_duration = 22201U;
    msg.flags = 136U;
    msg.custom.assign("RCWZIMPSQEZATNNOJJPGYAKOHJKUHSXUJWEOVLJLWNASDYDBAHUHXBWLPLVICKAWRYBODQKTQSXVQFIBTDUAXTZRBNZFCBOGEICXHOBZHFIIQJYYSWMOUTMEAQCYRHZIKDTXNMDXQVIZGUNAJCNWCOQMKGSTZYOVBGHFFPERASIBZKTEYXGUGBVXUMKDCXEPGCVURJPDFLDETUFQ");

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
    msg.setTimeStamp(0.820355044375);
    msg.setSource(36830U);
    msg.setSourceEntity(128U);
    msg.setDestination(39995U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.435332169937;
    msg.lon = 0.908183370271;
    msg.z = 0.507740304221;
    msg.z_units = 81U;
    msg.radius = 0.926066105323;
    msg.duration = 28360U;
    msg.speed = 0.765685232063;
    msg.speed_units = 169U;
    msg.popup_period = 53069U;
    msg.popup_duration = 8588U;
    msg.flags = 228U;
    msg.custom.assign("KGAAHOLDRVAISEJHKDZLJWFKFAPTLVZIVCWSEEIUTDRINYGJKTUPPLYBXPCSXITNCXCOGHXKVQSDJAYIFBNFJUCUWEBYGOGPWKHUOGWRCNENMDDVOUOKILEZHTLDEUITLBXRPJKNBRMXHOMFQMGQXFVWXCFZRYOBGCHVQZRDYQZMHGBMHUWTVMLMDWRISPVLQFZFPYSQEOGEMRQSUHBJPXOYWQSJIFRNJSEZAMVNC");

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
    msg.setTimeStamp(0.416175637261);
    msg.setSource(4355U);
    msg.setSourceEntity(77U);
    msg.setDestination(14823U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.0484865871604;
    msg.lon = 0.155575336298;
    msg.z = 0.847358792386;
    msg.z_units = 166U;
    msg.radius = 0.206427745641;
    msg.duration = 25646U;
    msg.speed = 0.63407324278;
    msg.speed_units = 148U;
    msg.popup_period = 38238U;
    msg.popup_duration = 2636U;
    msg.flags = 17U;
    msg.custom.assign("MTIJXFFPIDSPACUD");

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
    msg.setTimeStamp(0.236511759184);
    msg.setSource(59990U);
    msg.setSourceEntity(188U);
    msg.setDestination(4921U);
    msg.setDestinationEntity(89U);
    msg.timeout = 9830U;
    msg.lat = 0.104571052532;
    msg.lon = 0.647147873215;
    msg.z = 0.451337374936;
    msg.z_units = 236U;
    msg.speed = 0.940757116645;
    msg.speed_units = 219U;
    msg.bearing = 0.203395159436;
    msg.width = 0.432267501716;
    msg.direction = 195U;
    msg.custom.assign("ITZXUCHSRZDNHEYPSSTATMMUXAAYZLKRZUVHTPQUQYVGXTLNEEYAGKLUCEIPCXBCVWBLJQOAFSRMXDSLAIFIEVQZWIJJVUGPNEERHUMNGFYJTYTDHGVJOPXGQORGAHNCZVKBWRLLDYSMXRWGEJPDYMWUBLJOJKGRDOKOKJTQLACVAQYFUFOKRQHMZXDHCPIOFBFSTUEBZFNGRHOHQPMMLNCVWMFCPVJOIPKAEZINCZWTNWSXSD");

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
    msg.setTimeStamp(0.916984899574);
    msg.setSource(53728U);
    msg.setSourceEntity(188U);
    msg.setDestination(57486U);
    msg.setDestinationEntity(112U);
    msg.timeout = 23948U;
    msg.lat = 0.8019246105;
    msg.lon = 0.871690732793;
    msg.z = 0.0372551171104;
    msg.z_units = 91U;
    msg.speed = 0.950958912217;
    msg.speed_units = 104U;
    msg.bearing = 0.954279731228;
    msg.width = 0.911193437598;
    msg.direction = 224U;
    msg.custom.assign("ZKAEHMNGKBRPLECPHOWWIBBYCRNMJINVYROBWGYXZLCTJDJYAVEXQGDXIVSVXLBSYYAOCFHBSYQXHHFTYPBOIERAQIWOCRTXSMNMXEOMILSHRMSAELVCWMCJIRP");

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
    msg.setTimeStamp(0.962941408154);
    msg.setSource(37833U);
    msg.setSourceEntity(2U);
    msg.setDestination(55289U);
    msg.setDestinationEntity(16U);
    msg.timeout = 59510U;
    msg.lat = 0.874740839977;
    msg.lon = 0.137836986042;
    msg.z = 0.289603736688;
    msg.z_units = 146U;
    msg.speed = 0.580772462681;
    msg.speed_units = 239U;
    msg.bearing = 0.0188226519523;
    msg.width = 0.769595474161;
    msg.direction = 13U;
    msg.custom.assign("TBGGRUGWKFSOBXIAWAUJVFODJQLRHVWHPZMXJFOSUCLMVBPWCTVMUQYYPTTGKHICSOLEAGFURVDWTJSPFXKZJVLTAHDKQJSYU");

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
    msg.setTimeStamp(0.181645810907);
    msg.setSource(62967U);
    msg.setSourceEntity(200U);
    msg.setDestination(29008U);
    msg.setDestinationEntity(184U);
    msg.op_mode = 169U;
    msg.error_count = 201U;
    msg.error_ents.assign("JOVXCJFYXMASVMDRKYDBKXPBBTNURSIRZUWARSDVBKDWEAAVLMDEOYCRXUTGWGPQZHQRZPPEISWOHKKNIZMFFMWQLIXWASNLONTSEBLXNOOWCMGCFTSCYFNJFHBJAFWYJVESJETTDTZCIRQUJLFVGZKBEMRNVHDMXBLPHLDUYOWCPCISEDYHQBKULFACOMGCOUDK");
    msg.maneuver_type = 11139U;
    msg.maneuver_stime = 0.827969828075;
    msg.maneuver_eta = 54330U;
    msg.control_loops = 67671265U;
    msg.flags = 88U;
    msg.last_error.assign("UVPNUSMYPWFWRTHUEHCRUZJFAUAVZIXZHCVJBYMGJNGZZOEMLA");
    msg.last_error_time = 0.285147403167;

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
    msg.setTimeStamp(0.079526329509);
    msg.setSource(50974U);
    msg.setSourceEntity(25U);
    msg.setDestination(11792U);
    msg.setDestinationEntity(85U);
    msg.op_mode = 238U;
    msg.error_count = 5U;
    msg.error_ents.assign("VJRUZXMFNXFLWSHONTTBIXQCFDPFDNDUCPFVPEEXOYL");
    msg.maneuver_type = 3865U;
    msg.maneuver_stime = 0.0613402635306;
    msg.maneuver_eta = 56177U;
    msg.control_loops = 1241921870U;
    msg.flags = 33U;
    msg.last_error.assign("SYLIIJEPLBDZSNRAYOSDLAEPUEFFQPCQZVZZAKVXPWDTWTVBECNIEFSVMRSUFMZGPMRORUATHGRKAIOSZCCXBLDBQXJWHYDMCGVOCNJHWRBDGAYGHGJYQOAIGLWXGVDYVUEQRKEQYRNBDFUDSIYXARVIZZPZMQOXCFULJOFANZVJHQHCJJFLUKJEIFTQPJKCHTTWEXTTTVSDKMXOSMPSWCHPKMIUONBWKBNYLPU");
    msg.last_error_time = 0.810138240163;

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
    msg.setTimeStamp(0.0425760758193);
    msg.setSource(38088U);
    msg.setSourceEntity(87U);
    msg.setDestination(37294U);
    msg.setDestinationEntity(59U);
    msg.op_mode = 7U;
    msg.error_count = 37U;
    msg.error_ents.assign("VHDODVISCWYKGUTFRWRIDGXVGZRIJKKQJHLFJYLHPQWETBTOWC");
    msg.maneuver_type = 10538U;
    msg.maneuver_stime = 0.973802692164;
    msg.maneuver_eta = 63110U;
    msg.control_loops = 712961210U;
    msg.flags = 174U;
    msg.last_error.assign("GQKUZNAGTWOYHWGIHGUMCEQWFUNOLLHXEFJJNJXMXMPCEEIDYSZTDVLRNUTIJPCVMSVGYDLEYSLGAXADLXVCTJBHOMERUKTMIOUWZCNIVRKBEUHFGJRFSQKPJBPYDBLCVBLRCLDMMSOHSKDWRNZQTNWYOPGIUAZHECGQUZKNEFOQXFAKQIBPADFNKWQFAVEKFHPQPNRHRPXIYXOYOSWYTLSZJDTAVZOPQBZCZBGWM");
    msg.last_error_time = 0.708400593172;

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
    msg.setTimeStamp(0.86057037036);
    msg.setSource(10964U);
    msg.setSourceEntity(18U);
    msg.setDestination(8608U);
    msg.setDestinationEntity(98U);
    msg.type = 15U;
    msg.request_id = 1088U;
    msg.command = 117U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 42089U;
    tmp_msg_0.lat = 0.422708831044;
    tmp_msg_0.lon = 0.816126044263;
    tmp_msg_0.z = 0.943882544959;
    tmp_msg_0.z_units = 207U;
    tmp_msg_0.speed = 0.0611735788782;
    tmp_msg_0.speed_units = 6U;
    tmp_msg_0.custom.assign("MEVOPRUTZYOHKMIIFOSVACHQLHCZAJIBALJXGDQCLBDQYGKNCPJTLZPXIBYQTTSYQMOVUZLFOGAJQVYMEPFDUNWBCBHNRSEXDEGLXNGASMCGKWXNMIPYIEJEJRCXLBFJTLZOVIXGAWBWVLBJVZEBFQWWGRKHSEQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 19144U;
    msg.info.assign("CJDUBYVEHXFUIVABGFSYJXPJHPWCTUZOICYA");

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
    msg.setTimeStamp(0.77899062523);
    msg.setSource(55246U);
    msg.setSourceEntity(3U);
    msg.setDestination(43032U);
    msg.setDestinationEntity(95U);
    msg.type = 18U;
    msg.request_id = 31807U;
    msg.command = 174U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 1908U;
    tmp_msg_0.lat = 0.335129152033;
    tmp_msg_0.lon = 0.0587704863095;
    tmp_msg_0.z = 0.607112827434;
    tmp_msg_0.z_units = 243U;
    tmp_msg_0.speed = 0.669595754976;
    tmp_msg_0.speed_units = 96U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.860539408297;
    tmp_tmp_msg_0_0.y = 0.576267857002;
    tmp_tmp_msg_0_0.z = 0.0229190318078;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("MNCSXSYYGBJXZMDZXNMSGGZFCCHRORWYFPIJWMOQKEOPEGVISUTNQWZLFRKNSCRJFLWGMVOOAVEEDAUUOKYMOYUUHUGLRYICAZHILMZKDUDTDBAQLVRWLTDPHOGWPFJDQQESIPLXVFHRABCJKZWKFXHTLIJBABSQOATNVFJQIPWBAFKRVLPYCAYWJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 63245U;
    msg.info.assign("GLJQKWRJCPVBLQHJGQUCNGVQPXYDILLFYCMCGNSFUERM");

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
    msg.setTimeStamp(0.920538128717);
    msg.setSource(57746U);
    msg.setSourceEntity(70U);
    msg.setDestination(731U);
    msg.setDestinationEntity(4U);
    msg.type = 146U;
    msg.request_id = 52270U;
    msg.command = 175U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 57211U;
    tmp_msg_0.custom.assign("NTMEKLXKOZCXDNMMBFKVEQRSYEFGPJDAPZGIALYLISKDZLHUCFYEITVWSJXETMEKZBJDGRSOFXSBALHJHVDOSUMBRFOQGVWHOUVBQTAYUJIKIZGZZBKPBPCYMZATZPQEWOCLUSGIWYWYJTICHKKDMFSDGMQL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 36806U;
    msg.info.assign("PTSBFISRZRZNVAVXAPQOYKUMFQYGHOZYTEDRIUNQCRZSXBWOTVOTJBLFOEKFZSVOWSWJFECSBRUWUS");

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
    msg.setTimeStamp(0.405905198232);
    msg.setSource(144U);
    msg.setSourceEntity(98U);
    msg.setDestination(11838U);
    msg.setDestinationEntity(193U);
    msg.command = 142U;
    msg.entities.assign("ZYXKDEZJEWBINZJMCCIAWXJFYRCGPTMKEAZTJYQYIOXBSNGSBOXPOKTUJBYKFVCUZSBUPHBPWFCQPOICXTVAPMRINMIOWLHLFRNAHDYOZBIUXHVFQEPQLBECCFYNQSDNDTROCVWMAXIGSVTGORQAJEUMQQDXZAAZCXSMDBJPKHGOEGZYHLUSBHWTTWRGKUMJYFPQDVRLMRJSVGEEHLXEGNTVSQWKDAWFOR");

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
    msg.setTimeStamp(0.255427102645);
    msg.setSource(6019U);
    msg.setSourceEntity(112U);
    msg.setDestination(32468U);
    msg.setDestinationEntity(180U);
    msg.command = 252U;
    msg.entities.assign("KOGZKWJFZLPMQXYOEWLOPVGKUQEGAAVAVPVKURMJQKYECFKELYYYZOZWWQMUMYWSDTNFUSZELQCNAZANVGAWRRBOVCROGDSJYAETMMRDVGTEKWOUYIXWTUQAXJSINXJHFYIELXFPXGIIHZNOPBBQQJOLDRNRHATIJAIYXVQKFDRKWVPMNXTGUNZBXPOMBCSII");

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
    msg.setTimeStamp(0.061598218879);
    msg.setSource(757U);
    msg.setSourceEntity(200U);
    msg.setDestination(50977U);
    msg.setDestinationEntity(196U);
    msg.command = 27U;
    msg.entities.assign("YSOZEQLNZNMVZJVDWECOYDUOYCGCYUHBNRUKHAPTMK");

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
    msg.setTimeStamp(0.174570817738);
    msg.setSource(30205U);
    msg.setSourceEntity(89U);
    msg.setDestination(52878U);
    msg.setDestinationEntity(53U);
    msg.mcount = 157U;
    msg.mnames.assign("CQXBERBJIGOTHLQYEMHDEQJSJISTRIKLXGIODERUDATHKZZIFCHPNXDBVRMCGKRAOEDGIBFTAPMQZURLVCNQZAPIZONJVXACTGENBKWZYWFSPPJ");
    msg.ecount = 223U;
    msg.enames.assign("TYZERGRVKVKLUE");
    msg.ccount = 177U;
    msg.cnames.assign("QCCCDDDKGUAHFRUNIRDVBTVAVFJOXSEHLWZGSDRKGTKCOQOTUZTETTZKWELUMZIUJHXRICBBTYXUCVRWPIOAX");
    msg.last_error.assign("PUBZKXMJFNOXCJGIMMOEKVYEVBMWQTSSWHCQHPPLCYBGGEKLJCASX");
    msg.last_error_time = 0.861449314489;

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
    msg.setTimeStamp(0.640736604116);
    msg.setSource(25381U);
    msg.setSourceEntity(148U);
    msg.setDestination(42960U);
    msg.setDestinationEntity(26U);
    msg.mcount = 243U;
    msg.mnames.assign("PYXUYLGPXVLZRGFHNKMACVBUJSZEKZKYFMUQSVTFERTGCDMCYNRHMSOXCAHYSCOKKDRQSZYNKBSYCNWGTAZNZNFTFIGQDJWPVDBJAHHJDTGBXEUVKACETWUIYBVDZGSHTLVGLIOLFGZOPSHDKICEP");
    msg.ecount = 235U;
    msg.enames.assign("LKZDVDBORLLUDNNVFBMFSYUNKPMIDPGBNYQYXHUWCAQJGONJYQJPCREZFOMVAXKPNLHWOCMHWARJEIFYEAPKWNQTSUBHBHJFSIWSTULOKRIJOYZRECWVFDSENT");
    msg.ccount = 81U;
    msg.cnames.assign("YOBMCRFEXFQMPHOTCJPVYUXMTPIVSZEEWNAGPGYISIMEKXDGNNLELOARYXKNUMBGPHTUMDVKNSZGAZRBABZBQPWJDYOXICCXNJHHIZEAQFGYGNCVJWHBLWSEGYQYJPOLWHTSUUFURDOMPDOUVRIOAZJLHTJCKOXEFQLFZFJDKPSCMUBCTIBNMAHTPAEYBWKQYCQVRDSSKGDLAQNJXNLVIHLUACVFDRFQFSWOZWSUJLMVTTZXBWXHVKKRWI");
    msg.last_error.assign("JTQVGDEYLCRPJBBUHXVDNUVNIPXZWWSCKIUFOIPUFIMPSKLNMOTKPTOFGFUZJMFFNUHJATEKMLQBTMCWAXWFDRBJIGEWHVNLEWELYDSQWMTLOFQCVZKVNSHRLVRIQLDYRHYZSZKLBCNAOOGZHZTTYSKEVJBTPXCUXJDWCZBOHUYIKKMVUGGMEQQKSMWURQRDRENNGTAQDBOMPYAOPJIRGJZVAFABASXPHYHCQAFSCHGYXZRXBESXIWI");
    msg.last_error_time = 0.507784457583;

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
    msg.setTimeStamp(0.959285909068);
    msg.setSource(27168U);
    msg.setSourceEntity(130U);
    msg.setDestination(1925U);
    msg.setDestinationEntity(15U);
    msg.mcount = 202U;
    msg.mnames.assign("UFEEZBLVENNZDFLGHJTSKJQWBUXHPIMVIAGRZSZFKCXRITUHTBYSAGSRQFQMPIFMTNGWPIOQHUBGDSJXGURSQKPVNMUXMZLXTWTPZBDBWJLIVWGUTOFTKCVQWPKJVCGADQJOWPKACSMEXQIYLOVVBRBNOKHDERVEFCYOSMVMLYSUUHAFYJTRIRB");
    msg.ecount = 30U;
    msg.enames.assign("XPRDCEXJTMZADDNFUBAXRVRZQCQFLCYBKUOKHKWMNBYMNQVSAJOKZURVTXJWITMKXPGYEGSCKPWVJSHGVYMSAVSSJKEOSQGFPEXUQDBRRCPLHJWNQMBOWJABENFAPJHZNTMZFFWGHOMMPIOYHTQRUOQLPIULEIYTYDTRBDVAHIZXILAJDUZTUNESLFUDIFLZKFYPOSHIYFNXMII");
    msg.ccount = 236U;
    msg.cnames.assign("DPFHWFYHAZYDJDEBYCGILKSVWEUUPED");
    msg.last_error.assign("VHIYQHIXBSBQFEC");
    msg.last_error_time = 0.805703544625;

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
    msg.setTimeStamp(0.339575346215);
    msg.setSource(2932U);
    msg.setSourceEntity(225U);
    msg.setDestination(7858U);
    msg.setDestinationEntity(155U);
    msg.mask = 228U;
    msg.max_depth = 0.545900799796;
    msg.min_altitude = 0.861208192461;
    msg.max_altitude = 0.776573769151;
    msg.min_speed = 0.0699611795623;
    msg.max_speed = 0.769480555901;
    msg.max_vrate = 0.676335659314;
    msg.lat = 0.238856528443;
    msg.lon = 0.925517796751;
    msg.orientation = 0.774315181746;
    msg.width = 0.421356301121;
    msg.length = 0.016473059884;

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
    msg.setTimeStamp(0.784202332982);
    msg.setSource(47829U);
    msg.setSourceEntity(138U);
    msg.setDestination(1144U);
    msg.setDestinationEntity(143U);
    msg.mask = 204U;
    msg.max_depth = 0.485322762562;
    msg.min_altitude = 0.662921495956;
    msg.max_altitude = 0.942283063137;
    msg.min_speed = 0.465690191094;
    msg.max_speed = 0.349032882933;
    msg.max_vrate = 0.111151030374;
    msg.lat = 0.513248781605;
    msg.lon = 0.772342962383;
    msg.orientation = 0.876158073822;
    msg.width = 0.720143625612;
    msg.length = 0.0524518586362;

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
    msg.setTimeStamp(0.696630827016);
    msg.setSource(23822U);
    msg.setSourceEntity(160U);
    msg.setDestination(55934U);
    msg.setDestinationEntity(4U);
    msg.mask = 9U;
    msg.max_depth = 0.162657021872;
    msg.min_altitude = 0.544622548676;
    msg.max_altitude = 0.0363932025757;
    msg.min_speed = 0.195685748848;
    msg.max_speed = 0.552520316579;
    msg.max_vrate = 0.0172930062714;
    msg.lat = 0.381542938329;
    msg.lon = 0.00743750768706;
    msg.orientation = 0.0850090845235;
    msg.width = 0.973915379655;
    msg.length = 0.865990945106;

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
    msg.setTimeStamp(0.736695886412);
    msg.setSource(1564U);
    msg.setSourceEntity(234U);
    msg.setDestination(38392U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.807127647988);
    msg.setSource(41256U);
    msg.setSourceEntity(163U);
    msg.setDestination(18947U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.928131353205);
    msg.setSource(2166U);
    msg.setSourceEntity(82U);
    msg.setDestination(20428U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.778764132599);
    msg.setSource(18476U);
    msg.setSourceEntity(28U);
    msg.setDestination(18276U);
    msg.setDestinationEntity(157U);
    msg.duration = 1221U;

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
    msg.setTimeStamp(0.117297353675);
    msg.setSource(21579U);
    msg.setSourceEntity(237U);
    msg.setDestination(32008U);
    msg.setDestinationEntity(52U);
    msg.duration = 58848U;

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
    msg.setTimeStamp(0.514297821463);
    msg.setSource(51962U);
    msg.setSourceEntity(115U);
    msg.setDestination(32087U);
    msg.setDestinationEntity(49U);
    msg.duration = 58109U;

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
    msg.setTimeStamp(0.405255805135);
    msg.setSource(46455U);
    msg.setSourceEntity(81U);
    msg.setDestination(56751U);
    msg.setDestinationEntity(218U);
    msg.enable = 135U;
    msg.mask = 2430501782U;
    msg.scope_ref = 3936835845U;

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
    msg.setTimeStamp(0.317635302588);
    msg.setSource(59388U);
    msg.setSourceEntity(96U);
    msg.setDestination(14165U);
    msg.setDestinationEntity(37U);
    msg.enable = 96U;
    msg.mask = 417239004U;
    msg.scope_ref = 3897091134U;

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
    msg.setTimeStamp(0.822551166175);
    msg.setSource(16742U);
    msg.setSourceEntity(129U);
    msg.setDestination(39448U);
    msg.setDestinationEntity(169U);
    msg.enable = 117U;
    msg.mask = 1128378338U;
    msg.scope_ref = 1372631207U;

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
    msg.setTimeStamp(0.914426284267);
    msg.setSource(6023U);
    msg.setSourceEntity(40U);
    msg.setDestination(54887U);
    msg.setDestinationEntity(223U);
    msg.medium = 149U;

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
    msg.setTimeStamp(0.811305675785);
    msg.setSource(65057U);
    msg.setSourceEntity(35U);
    msg.setDestination(43748U);
    msg.setDestinationEntity(226U);
    msg.medium = 250U;

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
    msg.setTimeStamp(0.882829238914);
    msg.setSource(15611U);
    msg.setSourceEntity(28U);
    msg.setDestination(38294U);
    msg.setDestinationEntity(252U);
    msg.medium = 120U;

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
    msg.setTimeStamp(0.221246149075);
    msg.setSource(6277U);
    msg.setSourceEntity(189U);
    msg.setDestination(8304U);
    msg.setDestinationEntity(70U);
    msg.value = 0.0725327528564;
    msg.type = 14U;

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
    msg.setTimeStamp(0.385003637574);
    msg.setSource(6067U);
    msg.setSourceEntity(68U);
    msg.setDestination(34596U);
    msg.setDestinationEntity(214U);
    msg.value = 0.706204818244;
    msg.type = 161U;

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
    msg.setTimeStamp(0.725917655299);
    msg.setSource(4926U);
    msg.setSourceEntity(229U);
    msg.setDestination(10062U);
    msg.setDestinationEntity(27U);
    msg.value = 0.661492258798;
    msg.type = 72U;

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
    msg.setTimeStamp(0.409079778747);
    msg.setSource(60946U);
    msg.setSourceEntity(126U);
    msg.setDestination(24405U);
    msg.setDestinationEntity(235U);
    msg.possimerr = 0.830834196971;
    msg.converg = 0.194732731722;
    msg.turbulence = 0.48408954267;
    msg.possimmon = 191U;
    msg.commmon = 82U;
    msg.convergmon = 191U;

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
    msg.setTimeStamp(0.171233051479);
    msg.setSource(26603U);
    msg.setSourceEntity(49U);
    msg.setDestination(57404U);
    msg.setDestinationEntity(239U);
    msg.possimerr = 0.468943881419;
    msg.converg = 0.282222392262;
    msg.turbulence = 0.0826699495468;
    msg.possimmon = 228U;
    msg.commmon = 206U;
    msg.convergmon = 171U;

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
    msg.setTimeStamp(0.00805168866645);
    msg.setSource(12341U);
    msg.setSourceEntity(176U);
    msg.setDestination(55958U);
    msg.setDestinationEntity(188U);
    msg.possimerr = 0.530232902645;
    msg.converg = 0.598364218961;
    msg.turbulence = 0.946576890931;
    msg.possimmon = 194U;
    msg.commmon = 47U;
    msg.convergmon = 159U;

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
    msg.setTimeStamp(0.291376653958);
    msg.setSource(34605U);
    msg.setSourceEntity(142U);
    msg.setDestination(12703U);
    msg.setDestinationEntity(152U);
    msg.autonomy = 242U;
    msg.mode.assign("JPISWDGMBQENRGFPJVALRIJITCZBNDROGRFNQFTLRCCISEOZKDWOOLAZLKQQHTDKCIDFNLVUDUWSSKXXODUYWZDRWMBYALRUFFAKMETJTPHWYVFZGNVQJQCVXOSIHGCNMHSTVTAIFHYWSNAUPZA");

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
    msg.setTimeStamp(0.402738164831);
    msg.setSource(35006U);
    msg.setSourceEntity(248U);
    msg.setDestination(61388U);
    msg.setDestinationEntity(216U);
    msg.autonomy = 74U;
    msg.mode.assign("EVWSVQIQFPALYARWTKIZELDYAIXUFHZUCELXYLNJCNVRAYNTYVXSNIEJGKMCNLTXYKPGFMKODFFGZTSHWTIHZJHGKSODBDGJIQBWPGFLAUZBKYSNDTLOTVUHRHOENBPXOJMPDURU");

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
    msg.setTimeStamp(0.951136229314);
    msg.setSource(64085U);
    msg.setSourceEntity(80U);
    msg.setDestination(59034U);
    msg.setDestinationEntity(193U);
    msg.autonomy = 144U;
    msg.mode.assign("CELVGYRTICGMHZRAVAXTABWJMGSLNHYKOGWHKIYGYPOHJRKRXJUZVMRTRCLBXYHAEGBZIIAEOFWCKADLJCENMREXFTZSOKIQKVWRTFYFOWFD");

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
    msg.setTimeStamp(0.882439488673);
    msg.setSource(31283U);
    msg.setSourceEntity(135U);
    msg.setDestination(19648U);
    msg.setDestinationEntity(217U);
    msg.type = 104U;
    msg.op = 102U;
    msg.possimerr = 0.412167300506;
    msg.converg = 0.337235755622;
    msg.turbulence = 0.455211773681;
    msg.possimmon = 24U;
    msg.commmon = 82U;
    msg.convergmon = 40U;

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
    msg.setTimeStamp(0.807599465041);
    msg.setSource(25828U);
    msg.setSourceEntity(125U);
    msg.setDestination(41003U);
    msg.setDestinationEntity(131U);
    msg.type = 169U;
    msg.op = 157U;
    msg.possimerr = 0.00538970797338;
    msg.converg = 0.474654414509;
    msg.turbulence = 0.387170701816;
    msg.possimmon = 159U;
    msg.commmon = 235U;
    msg.convergmon = 9U;

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
    msg.setTimeStamp(0.932589647386);
    msg.setSource(52280U);
    msg.setSourceEntity(237U);
    msg.setDestination(58378U);
    msg.setDestinationEntity(122U);
    msg.type = 46U;
    msg.op = 56U;
    msg.possimerr = 0.228272489402;
    msg.converg = 0.836486592174;
    msg.turbulence = 0.13153930376;
    msg.possimmon = 150U;
    msg.commmon = 6U;
    msg.convergmon = 150U;

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
    msg.setTimeStamp(0.367304356589);
    msg.setSource(59079U);
    msg.setSourceEntity(146U);
    msg.setDestination(34847U);
    msg.setDestinationEntity(171U);
    msg.op = 112U;
    msg.comm_interface = 63U;
    msg.period = 20278U;
    msg.sys_dst.assign("FBRSLUDZUTMHUSOIPYZTDYUITUXPLQKMKLTXBJKYLCNQXSRHOYQEPEAYFBSSLEKZCMAWDSGZVZKHATVCMVKJWGMVCPCABEHLRATYGFNEUQJWFOOGTFIKHIQRXUUWRGZVLMWGJHXTDNIKRPBBNHEBLCJIJWPZ");

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
    msg.setTimeStamp(0.622200824065);
    msg.setSource(18741U);
    msg.setSourceEntity(210U);
    msg.setDestination(27336U);
    msg.setDestinationEntity(6U);
    msg.op = 116U;
    msg.comm_interface = 243U;
    msg.period = 11589U;
    msg.sys_dst.assign("PPCBAHKHIFWMGYZIOFXLAFRTAUFYJQDYMPBGHTGKUVVKZUMFUETIIFVZSZLOOALMJDHGAWJBTZSVJRXIIDMSPBZ");

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
    msg.setTimeStamp(0.99802792528);
    msg.setSource(13568U);
    msg.setSourceEntity(40U);
    msg.setDestination(38525U);
    msg.setDestinationEntity(53U);
    msg.op = 223U;
    msg.comm_interface = 137U;
    msg.period = 18025U;
    msg.sys_dst.assign("IMDPVROQRYQJIDNLMNUGUWSWEWQBGTAOARNWOSVZCSDZELXZVNEKHFMSNRSYXGSKQFUKCSBAPOOWFGDDAFEREFKHZBNNIBQJVOZTWMPPWXGRTHLAAHPXH");

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
    msg.setTimeStamp(0.471332242286);
    msg.setSource(43441U);
    msg.setSourceEntity(246U);
    msg.setDestination(5498U);
    msg.setDestinationEntity(218U);
    msg.stime = 222088703U;
    msg.latitude = 0.758332509467;
    msg.longitude = 0.920394994104;
    msg.altitude = 38761U;
    msg.depth = 55308U;
    msg.heading = 43968U;
    msg.speed = 17201;
    msg.fuel = 93;
    msg.exec_state = 126;
    msg.plan_checksum = 56846U;

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
    msg.setTimeStamp(0.943644384016);
    msg.setSource(13892U);
    msg.setSourceEntity(96U);
    msg.setDestination(41513U);
    msg.setDestinationEntity(63U);
    msg.stime = 2909278728U;
    msg.latitude = 0.442342794959;
    msg.longitude = 0.369517343474;
    msg.altitude = 37900U;
    msg.depth = 12978U;
    msg.heading = 9529U;
    msg.speed = 3152;
    msg.fuel = 108;
    msg.exec_state = 30;
    msg.plan_checksum = 60166U;

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
    msg.setTimeStamp(0.196072945141);
    msg.setSource(54357U);
    msg.setSourceEntity(183U);
    msg.setDestination(35531U);
    msg.setDestinationEntity(80U);
    msg.stime = 3125340269U;
    msg.latitude = 0.804970488111;
    msg.longitude = 0.087565393809;
    msg.altitude = 45815U;
    msg.depth = 11243U;
    msg.heading = 23214U;
    msg.speed = 7787;
    msg.fuel = -102;
    msg.exec_state = 52;
    msg.plan_checksum = 798U;

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
    msg.setTimeStamp(0.852983035817);
    msg.setSource(51766U);
    msg.setSourceEntity(128U);
    msg.setDestination(21501U);
    msg.setDestinationEntity(26U);
    msg.req_id = 2703U;
    msg.comm_mean = 18U;
    msg.destination.assign("TQQZOBMIFHODCPXINWWQBKRGLPXMUSLGYAEMCMHKGTFULRDANYMXIFUFRHHNUAJJFJPITVDOBQRAHRLISJXSOUEKXCCURNLAVNFIEBRALILWXZDLFZPZEVLDWTVOTWEVVMHGYVPWJPDOSUTZEJKBHNFZORSJNBVAPKMGQWCTJHRMHNMVTENIYDNYBFWUXVMKTFYPCYSWGEZCUJK");
    msg.deadline = 0.525779718324;
    msg.data_mode = 8U;
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 55U;
    tmp_msg_0.label.assign("DFEWRWJYGWBESLHCDAHVWRMIQKGMLFMKEIYXWNWYZSRMIPNQGYQLVKFAUDTBUMIVOOTXSJEAXOLNANLUBLQHDTPVTZBDSGECJBSNPBMFGOZFNGTKZLFBIJMJYVAKFQWMTJNVZPWAHFASLZDTSQJZYRXIQXCCGM");
    tmp_msg_0.component.assign("HVALERWAQZORCYJOYGMTTGUXHNPBVFEAJZIIDYMTMKMPJNTSBFSQBODNPGBEHIOPFQSKPBYOYATKNXWEQRJAUMKLDREUCCBNAAFSZJKHWTWBUPVDVFCYQALHSGWRXNYJCXQHJMEMPLVUPBIGWDHTJIGQVTIGYDZGEUEQSHTLVROZFCDSANNJXUCEFLDZUYCTBHZQJZEUNLXXLBKXRGIKSLPOXISNHR");
    tmp_msg_0.act_time = 19937U;
    tmp_msg_0.deact_time = 44679U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ITNZZOIKHIAQLNRRAGLLXBBZHDYAULHYMPYTFHQIZJPRUIKZBLRZOPIJWVQDSVRS");
    const char tmp_msg_1[] = {-70, -119, -57, 34, -110, -128, -41, -114, 68, 100, -38, -57, 59, -118, -64, -47, 39, -68, -63, -92, -95, -110, 92, 58, -100, -97, 24, 48, 16, -9, 49, 64, 92, -117, 24, -128, -73, -104, -75, 66, -44, -11, -25, -89, 121, -93, 117, 79, -34, -53, -37, 125, 79, -64, -16, 105, -11, -61, 74, 59, 96, 34, -14, -89, 67, 89, -75, -46, -60, -97, -86, 6, -46, -105, -60, 35, 72, 72, 51, 16, 101, -78, 65, -90, 88, -47, -65, 91, -52, -39, -25, 14, 52, -120, 35, -76, -110, 85, 90, -120, 60, -89, 9, -5, 122, 118, -98, 63};
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
    msg.setTimeStamp(0.703969951146);
    msg.setSource(7135U);
    msg.setSourceEntity(110U);
    msg.setDestination(44866U);
    msg.setDestinationEntity(65U);
    msg.req_id = 28310U;
    msg.comm_mean = 113U;
    msg.destination.assign("HVHEKYCJZRIIMHFWEY");
    msg.deadline = 0.0695375594639;
    msg.data_mode = 4U;
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 100U;
    tmp_msg_0.x = 22441U;
    tmp_msg_0.y = 57268U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("CLEOTUKJCDQQIIQHKUPHWPGXHOEOJACWRCXQFNPWKCZEJYHLKMVGRWRLBLYWYFOTMRUVVIAINCBYYRODUUTTAUJWKVFKPIZUDODGYIQBCSTAMTPJENSOBGJKZXFLFXALWAGRCXJFETHLNEESNDCLLTRQAAIUMDZZ");
    const char tmp_msg_1[] = {35, -19, 88, 82, 90, -78, 118, 119, 60, 70, -13, 75, 48, 17, -89, -107, 95, 20, 42, 108, -98, 114, 10, 101, 119, 113, 79, -118, -113, 38, 71, 23, 34, 40, 119, -10, 29, 52, -37, -78, 99, 113, 71};
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
    msg.setTimeStamp(0.894405654137);
    msg.setSource(53828U);
    msg.setSourceEntity(235U);
    msg.setDestination(31218U);
    msg.setDestinationEntity(174U);
    msg.req_id = 42278U;
    msg.comm_mean = 128U;
    msg.destination.assign("XYAUFLSWBZLWJIBATZMXYHEARRGUUGTUKOMBMWIBLOMBJLRKQUAQXEDQRNOBPLTQYOTXEDUIFIVSNHRZOUMGGOTEVDHADVAPXWOLPPPZOZUFETHFDXVYDCNMSNRSZHHOZDZKXFSDKCQLJEAGUBXSNBJEOPTKCJRGNRQPAAJYTUGDWMICFMHEHBFLRWPBREVSCGQXYQKWVCCSWNKZAFKTDIJIHNYQVNLKGJPQVJCWVSMGKICEIJTNCXSMVF");
    msg.deadline = 0.238357946331;
    msg.data_mode = 153U;
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 29374U;
    tmp_msg_0.destination.assign("HAOPYOUEPO");
    tmp_msg_0.timeout = 0.682826784568;
    tmp_msg_0.sms_text.assign("AARMNIXYRVJWXWDWVAAVNDKJXIYPSYNXVGYHPBOROHLQEUDCBLZKPBJQMFGEKTHOYTKFNIAJZQIVPCJWHPOTKLWNQSBNJHLEGBCSCZCLAXGJJWOOBSIZTLNVDTRSIVMZUVEPRHLIMQVUEXKURQNDHLNZWPCYMGTGDTOFBKJMDOTSMPRFHFIGOKXQEYFESPAKRTYIWVXYGSCCAIZKWXUQUUQNWRXESQRMAESEOFDTDGCULBBZFHMFPUZACUYDZB");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZPJKESOLFGDRAVYJDNFMTAIQAZDQUYIPNPPCTEIRCMLFZPUGWCFSIZFJLTTISIQYVLTWSYQQRKKXRQVZPHBBCVHGWMXBWKSGSENYLVGXMJTZUUCJBJFAHEOSUVFERNUWXPINILXNKEUDPHBLMDRTHCGDRIEUAQYZCCTEZBKICDDCOOHFVGXZMVANVLMFAYWFTBX");
    const char tmp_msg_1[] = {39, 26, 24, -115, 123, 43, 52, -98, 101, -89, 15, -89, -28, -128, -120, -81, 11, -34, 91, 26, -79, 36, -49, -101, 44, -24, -104, -10, -72, -114, 40, 22, -50, -77, -118, -78, 4, 81, -35, 15, -94, 31, 50, 71, 72, 94, -21, 14, 33, 80, 108, 63, 66, 46, -31, 122, 7, 25, -34, 66, -124, -107, -26, -101, 5, -32, 111, -111, 101, 26, -32, 80, -32, -101, -104, -14, 71, 86, -56, -25, -65, 53, -109, 120, -120, 45, 0, 76, 42, -20, -83, 120, -79, -117, 41, -93, 75, -85, -57, 92, -76, 99, 84, -71, -58, 91, 20, -125, 12, 26, 112, -57, -5, -37, 42, -62, 50, 52, -23, -116, -18, -105, -26, -119, -30, -23, 77, 15, -117, -32};
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
    msg.setTimeStamp(0.233558555735);
    msg.setSource(30528U);
    msg.setSourceEntity(162U);
    msg.setDestination(806U);
    msg.setDestinationEntity(14U);
    msg.req_id = 48676U;
    msg.status = 202U;
    msg.info.assign("BXLNYMEUYVJEED");

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
    msg.setTimeStamp(0.817010869711);
    msg.setSource(57653U);
    msg.setSourceEntity(188U);
    msg.setDestination(312U);
    msg.setDestinationEntity(66U);
    msg.req_id = 18405U;
    msg.status = 129U;
    msg.info.assign("HSGTKXWCALMXFQIQNHEFQMDYZVMGHRQCPQIWWVFHEPRWZLJLAVOAOBWZYZGPAXVZGNKNTTUSCCRXWJUJBGAXBEUTHKUEBNXDIEJBZZJMDYQONDSXQQMOKYGNMWJVPVAXQGCAOJSMWFUDSMVDIRITBUPRLLSJTZNLXKNPCWEHDKPSCNOHLVZHYGDKPTSHPMRIXKBAQJFYUBGTWR");

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
    msg.setTimeStamp(0.794990274657);
    msg.setSource(33412U);
    msg.setSourceEntity(217U);
    msg.setDestination(45265U);
    msg.setDestinationEntity(182U);
    msg.req_id = 45650U;
    msg.status = 73U;
    msg.info.assign("MGXBAQHAFNUEBXJJIQJYYUKTPSCPSXRFMIQEUBPDDDYQIMURLLSNWPXBDJKSGXHOMPZEQSCTWCKLPPNAVOEKHYJWWAIELYZIZSZHAOHLTVBDIZOFVGNRJYVBOGEBUFRMXNTKPHMJOTZVRXWHDXTYCECCQAOBFMWZUCVHFYYXERTCAKGUKMLMEIIG");

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
    msg.setTimeStamp(0.794459574724);
    msg.setSource(16013U);
    msg.setSourceEntity(147U);
    msg.setDestination(43104U);
    msg.setDestinationEntity(12U);
    msg.req_id = 54605U;
    msg.destination.assign("KDFQWLEIRGJTMRWNLLJZOODGVPBICVBGVSHYXHRIGXYEHQJTAMCKNSJINTPJIVELUPDDTXHDTATEVAEDRTPFSROKIYXYRXUTHKKCAFYVUOZPSKHGWMLJSVLWNZMUBZMYQQGUWCLWONVEPUKFYQCDBASPAANPOONBGFJQRDRZHZMQIKBQIUTLCCGIZXTWZRHXFGXQWSBPCUFFJYQSBXUEOEGWAUYKZLNMZAFCLOPWJ");
    msg.timeout = 0.861267095363;
    msg.sms_text.assign("DZGQJWUBFBQCNPATSNKFWEFMSRAHYDKYALCKAPVIWTYARZYLJSQMLYICOCXJN");

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
    msg.setTimeStamp(0.265408861494);
    msg.setSource(17222U);
    msg.setSourceEntity(100U);
    msg.setDestination(16353U);
    msg.setDestinationEntity(249U);
    msg.req_id = 1459U;
    msg.destination.assign("ECOKHHJTECQLWZDCWNUGPQNLXBHIQOBUKOGRJHTYYLBPOKMXRPHTLDVLAAMSVUJFIJRNJXOLPERKWUEGVSQROAEGTMVRSQQDNSMQFJCEEAJWPGBQIIVPFWYSDUFSIBBJLKLAZUYUNEAHSRCBMVFDMDYYXCUCJAXBIGRZQRIHTBYLHNAZYKIZNFIMG");
    msg.timeout = 0.694975110105;
    msg.sms_text.assign("JEHVRWZELWIGQCGQMKZAATLLBTVYEFGJYHLIFBZNQMNNOSBAESENWYAGSLGVRTHAPICVXHEPNMCSNUIFWLRQJDPZMVBYXKVOWMHCOFBIBSGDPXGFTHAIEJYGJPNOFXLXTARKYFSBJCXFZANALVVTBWRKICZHQHCSOT");

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
    msg.setTimeStamp(0.384313567364);
    msg.setSource(34436U);
    msg.setSourceEntity(204U);
    msg.setDestination(38681U);
    msg.setDestinationEntity(34U);
    msg.req_id = 45233U;
    msg.destination.assign("OBOJSRLUPNQTYPHYLACSVRPEOYKWUGNSVCLGXLLPTZITYIMGMBQJLVFVIGLEACOBOWIZTKENIXPPIQCZLUFKWSTEQPNCAZPMNGDVAVURWADXQEWWWUSJEMOWGDMPICVKAQYDQEBKGISZRHUFBZRKCDEJYGQVAAHFHZDXLMRMFHXTJKCKROICFFZFNNXYSNJVAKDUYVTH");
    msg.timeout = 0.0320664410502;
    msg.sms_text.assign("FVXRHJACIBOHOWJENALSGLFRYSGMPUSFDTTXBGUDJWIYADGPKFRLVTVAJMWKMDLYBRUXBANINAROPVCQQVVPXDOAZFUXFNSUAFRMEDGIMZHVOPNQOMXLLRTOUKVYKBWLIEXEBSVRTLNANOVFCDWKSFBTPYFKCTBISTZNRKXHUWPZCJZEYCSQEQZYZWUXGDCLZDMYOWBJPQCHHGOHCDHJPLJIIMESCGXIEQNZSRQHYTPBAUTMGKMWKJUIEQJGW");

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
    msg.setTimeStamp(0.485231700006);
    msg.setSource(30709U);
    msg.setSourceEntity(104U);
    msg.setDestination(10066U);
    msg.setDestinationEntity(196U);
    msg.req_id = 63133U;
    msg.status = 57U;
    msg.info.assign("CAUBEIDRPJRHRNIKIYECWLAKTZHQLHATJIRYKCVFBGWHBEQHNQPPCPBQMZGEWEURCXOFCJLXADXGQTLMVVGPZUWTBYKDSAVSZGYDLJPDQGMNPIKOHBAIHYOPYNXOWOTXBUXNTHIZQZEKXZKGRBLSKMSIISCECBPYUVWMSMADFBDUFFHORESFRZZWPXDXQSLVQUW");

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
    msg.setTimeStamp(0.28635256962);
    msg.setSource(26038U);
    msg.setSourceEntity(64U);
    msg.setDestination(21161U);
    msg.setDestinationEntity(68U);
    msg.req_id = 45213U;
    msg.status = 117U;
    msg.info.assign("FPFMBWYEKWJNRGZWSGZGOMBVQVNDUMUGQHECULTYIOESAOCDFLRWBITDXDYWKYVDNKYROTKUJMRDWMBKOWIPENGLLMAEXGTCALFEXEHQTJPUSWCQNHHHYGXPDCZYTAHXJZEJVKRFFVUSHWQCCXBGXJQVZNFSMUBLRRXRSVWUTCGJPTPFBAAILZSPCHGUJOAUKMQNNZJHCPNXMIFFAKZ");

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
    msg.setTimeStamp(0.514200768285);
    msg.setSource(59589U);
    msg.setSourceEntity(199U);
    msg.setDestination(17479U);
    msg.setDestinationEntity(125U);
    msg.req_id = 52288U;
    msg.status = 171U;
    msg.info.assign("HOIJAGGJPXYSIQTZDUENMOHELTJPEANGBUAYCRQNXHVQSNQNDGROVIYMXZCOBJWAELTGFWMHAQPTVLCMAQITODYNSKKKMAFEGZFYEVDZSXTLTBIOBIQAOESHSXBEIBKWKDXRTMFVXJPSMRQPVDCIRVYJACKGSRYZKFYQWFSBGPOOULPBUVLDDCFUDEOZBFVRWHLWYFHNWXSHJTPXWZMYNAUUZJUILLPIURCNGKMMKXKRW");

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
    msg.setTimeStamp(0.212615961913);
    msg.setSource(10096U);
    msg.setSourceEntity(144U);
    msg.setDestination(11625U);
    msg.setDestinationEntity(238U);
    msg.state = 167U;

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
    msg.setTimeStamp(0.898594932856);
    msg.setSource(51030U);
    msg.setSourceEntity(71U);
    msg.setDestination(53750U);
    msg.setDestinationEntity(167U);
    msg.state = 35U;

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
    msg.setTimeStamp(0.400224701083);
    msg.setSource(5632U);
    msg.setSourceEntity(153U);
    msg.setDestination(52591U);
    msg.setDestinationEntity(86U);
    msg.state = 158U;

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
    msg.setTimeStamp(0.391685335434);
    msg.setSource(24587U);
    msg.setSourceEntity(107U);
    msg.setDestination(64459U);
    msg.setDestinationEntity(226U);
    msg.state = 30U;

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
    msg.setTimeStamp(0.980914481419);
    msg.setSource(21251U);
    msg.setSourceEntity(71U);
    msg.setDestination(3179U);
    msg.setDestinationEntity(230U);
    msg.state = 80U;

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
    msg.setTimeStamp(0.377543884205);
    msg.setSource(3843U);
    msg.setSourceEntity(120U);
    msg.setDestination(23620U);
    msg.setDestinationEntity(111U);
    msg.state = 30U;

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
    msg.setTimeStamp(0.669000479641);
    msg.setSource(12949U);
    msg.setSourceEntity(193U);
    msg.setDestination(34177U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.677265574103);
    msg.setSource(7443U);
    msg.setSourceEntity(57U);
    msg.setDestination(30749U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.853569964901);
    msg.setSource(64020U);
    msg.setSourceEntity(252U);
    msg.setDestination(17171U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.840958840561);
    msg.setSource(62316U);
    msg.setSourceEntity(241U);
    msg.setDestination(46314U);
    msg.setDestinationEntity(212U);
    msg.plan_id.assign("WPUJYJWYQXBXQVSIVQEMCWQOCXNUJQKEREADYZTAFZHEFOPIQJPALYXNMRJOJBSIO");
    msg.description.assign("MZITHYVXEVWVGQFMAKJTJGBSLQVDBSCQZGOHAMFYMUBIOEKHWHGDJRKDIZKELMKMLCUBSWDRDCHAOMVKPCISAEAF");
    msg.vnamespace.assign("RGXGOLQYTZFZLULPGNUKLRZTOLMBNQWMXJVAXSZJVOZEBDAJEBGYCCONDWNVGDHGNAAHHRZPSYEIUUCUUIKXYFUWGTJIDWXKEPOHOEWSLVVQOJGBXQYN");
    msg.start_man_id.assign("GSMAAGZZWDSWPRZBRLDVLTGYIPPKZIWJSUTQYLZEUMEKTOTNBRPVHPMATHRZCRUDNNUFJTOLXBMNSAVSVYGFBOEWGLOPNVSUKDXSNMGWQBLHWABDMOWZDZJPRYNJKCHEMQAMIS");
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 177U;
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
    msg.setTimeStamp(0.789352715298);
    msg.setSource(2250U);
    msg.setSourceEntity(202U);
    msg.setDestination(58260U);
    msg.setDestinationEntity(109U);
    msg.plan_id.assign("QUKULPZQBDSBHYKSXXGTVUIBFVYTVNWUTKSOCNJKEAMFSGOLXZGZXHKSJUKGOYVLMLXYVRDATUPBAPRCRGTIUARDJONNBCPHPDAYRUNWXOPHEIDXBHTIAOKJLTDAXJFFDIBQQPWRBWFPFCRJYHINPJFTNGWCERZXLBZ");
    msg.description.assign("YOWTPLGEIKXIKMXOSWDYLLPOTORHKPXIRGTNVLQGGXNXTAGFGXPLWVZBODRRUCQESRVBJFCPSAYRNEBHJZASZFAGVJFQINPYVMWEKMYZMGICCGSLAUXESXEDKA");
    msg.vnamespace.assign("KBURSIRDEJFDUMZXNDYOXMVNAYBVRMGJSWFQNIXHZLXPISAYQCKSHKTKAVYUTJXCHRLDYPKTQUWZLFAQGIKSIQOHODIWSBMDGUACDBMOLBCSGHLBEIZMNWKJAPPXVRCRCJAFKVUJSWGHQTUFMEROAPHDCFXMLNVFZKGVWVZYXEVXGGHYCIFJRKTDIBEMQILJPBZQNTDPFPTLOYNNRJBHYAQU");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YRAUWNFTFQWJORTLBLGYSVIRHZNCAXWHHCUJZOZGTVQQYIPWGBQFPUKGUYCKPRMHDAVAWHUYRDLSCQPNGKNRYYBBOMLDDCEXCXOYUKXVGTGXSSODWLJYKCBBSBTIHFNJBWELAFJLFMBSDUHPPXEVAKI");
    tmp_msg_0.value.assign("BPWTRUIYLMTDQGFCTMRJEXLJMRSXZMOCXXUNYPBUDWIINTYBHFGBHQZKIAEXKIWVOSMOUMKCLLHXQJYPAOCUSFQEDID");
    tmp_msg_0.type = 236U;
    tmp_msg_0.access = 36U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FTUZHQINMGHDNGRHEZLRURVYYQENKTDQLSJIUVGJPRWKZWEFKTZRQXSSJCPLJBYMMOXHQDCWRKCVAEBLDRCHWDEYBVDHFUJZBGGXSVCUWBVPGKONAFAUZTQOORDXWGBPWDVLYNKNYJZOFXPWGMQFIPKNOKYAQWTYIAGBVMEIXBHDMTPNITFAIFXCIBKMMIRBLHHJUAKTIEGHZWZEQOXOC");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("SIFKKJXEVKL");
    IMC::StationKeeping tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.67182960619;
    tmp_tmp_msg_1_0.lon = 0.151097693095;
    tmp_tmp_msg_1_0.z = 0.903136668945;
    tmp_tmp_msg_1_0.z_units = 174U;
    tmp_tmp_msg_1_0.radius = 0.831273132757;
    tmp_tmp_msg_1_0.duration = 176U;
    tmp_tmp_msg_1_0.speed = 0.983337460423;
    tmp_tmp_msg_1_0.speed_units = 162U;
    tmp_tmp_msg_1_0.custom.assign("WMSSQHNWSOQLUFIOMEWNQELCDHXESLABUENGZCTTUXKDXNLKVOKQUXFCWRBVUBJGGXIESGQRJHKJNHKFAPOZLNJVGOBRFLDKLPRESYEJVD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::CommsRelay tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.lat = 0.961786650537;
    tmp_tmp_msg_1_1.lon = 0.751814868996;
    tmp_tmp_msg_1_1.speed = 0.340673301743;
    tmp_tmp_msg_1_1.speed_units = 71U;
    tmp_tmp_msg_1_1.duration = 18921U;
    tmp_tmp_msg_1_1.sys_a = 27316U;
    tmp_tmp_msg_1_1.sys_b = 51853U;
    tmp_tmp_msg_1_1.move_threshold = 0.932995661792;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::StationKeepingExtended tmp_msg_2;
    tmp_msg_2.lat = 0.484748794134;
    tmp_msg_2.lon = 0.675329967274;
    tmp_msg_2.z = 0.574003239006;
    tmp_msg_2.z_units = 96U;
    tmp_msg_2.radius = 0.0485121967417;
    tmp_msg_2.duration = 41560U;
    tmp_msg_2.speed = 0.720859245253;
    tmp_msg_2.speed_units = 132U;
    tmp_msg_2.popup_period = 26825U;
    tmp_msg_2.popup_duration = 38610U;
    tmp_msg_2.flags = 26U;
    tmp_msg_2.custom.assign("LQNEXTRVZXKZHTLPVOORNQYRHFXARUXBOTZJAVFPYJAYGAEWWVCUQEUATMSMCDHNKMGJSOSIDIDYOLVJCWKMJWHCEKMBBINSDYYXZBXSDYFELYDHW");
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.867613832387);
    msg.setSource(9243U);
    msg.setSourceEntity(237U);
    msg.setDestination(55986U);
    msg.setDestinationEntity(107U);
    msg.plan_id.assign("XMODHBLKHHJUIQZASVXZHKCAPPFUJVBVGLYRQRJOGMOHQGAZRTAHIUNWCDTOFJASNZDQIRKXJDMLUXPXNIBZJHYPPBCSWJOTBQSHNTYYNDHCJMBOACYORCTQMMEPIEPWPREUMAXKWEWFBAMXWILBOGVCFFHKGPDUFYVOLLGFNLRUYPVDTGSKNENQUFUJKNIAECIJXRQSZBIBZLZWZSIRVYLSKUDEWQYDZSOTKE");
    msg.description.assign("PNPNFVQDVZECSQOOMOLIJOCPNTCMYQZFLOAPMZMFKJFUOEABHFFLIHLEPSGJCXUUDMQTYSASRNRYIXCIALMEPBGGOTQBGJFBWTSO");
    msg.vnamespace.assign("GBKQUGXAYTUERLRWJSIFWUOUJTDPOSDXDSIZFYZGZIBFMHVKQRONATFAYV");
    msg.start_man_id.assign("DWJZXPOXLMNBLPQFMTMPSQUCYAJUULJDJQRHAWDZMBCLVBMTNNRPVBGMUQHNVOIKYYASOREOWNCGEKSYFHECOLKMUKDDFBCQDHHTAHWLSXPPCNGZPWKODGVIESLWRQXRGPYZKEZKVNXKGJQARFYHKTTTBU");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DELGFQPXWKEMJUETBJICZMDQMQTTJHRQLGRLFQKVXRRAFBRHRFKBTKNSVWDFLVWKETKUAYMGSVILECMUQXDZSMAFJAVOMYNSXZJHRYOPIYCBCXEHUMAFGWCQSQLTIWTJZPKBUYGQNYSPIFEBPNYAEIISFKUXPRYGJWAAGXRBDIELCNBDYGABOFXLTZHHRWKSZNUONTPCHDVMOXGEJGPLWIZNPDDTILVJPUXUQ");
    IMC::ScheduledGoto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.arrival_time = 0.308742251499;
    tmp_tmp_msg_0_0.lat = 0.506299030496;
    tmp_tmp_msg_0_0.lon = 0.752112556718;
    tmp_tmp_msg_0_0.z = 0.819962356993;
    tmp_tmp_msg_0_0.z_units = 249U;
    tmp_tmp_msg_0_0.travel_z = 0.700742428277;
    tmp_tmp_msg_0_0.travel_z_units = 38U;
    tmp_tmp_msg_0_0.delayed = 158U;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::SetImageCoords tmp_msg_1;
    tmp_msg_1.camid = 37U;
    tmp_msg_1.x = 58334U;
    tmp_msg_1.y = 52651U;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.356818989038);
    msg.setSource(29598U);
    msg.setSourceEntity(207U);
    msg.setDestination(10169U);
    msg.setDestinationEntity(236U);
    msg.maneuver_id.assign("ITAEHNQTPPKFGEZKTILNTHXXHCBAGYFLASSDXNPJCAYOZUIBKMVNZMCSCEOFIOTUWIPHQYGWSLMFKZRYVEIXMRPXUIJVWAHBEFQFDOAWWVLBKKTBRVHCLTBWYCYXCBRDLDVLOYJACSPU");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 2000U;
    tmp_msg_0.lat = 0.353872005514;
    tmp_msg_0.lon = 0.990207776288;
    tmp_msg_0.z = 0.122146039297;
    tmp_msg_0.z_units = 223U;
    tmp_msg_0.speed = 0.906237676483;
    tmp_msg_0.speed_units = 216U;
    tmp_msg_0.bearing = 0.251237184763;
    tmp_msg_0.cross_angle = 0.859779090085;
    tmp_msg_0.width = 0.625336248096;
    tmp_msg_0.length = 0.894606944529;
    tmp_msg_0.hstep = 0.690080825958;
    tmp_msg_0.coff = 186U;
    tmp_msg_0.alternation = 254U;
    tmp_msg_0.flags = 149U;
    tmp_msg_0.custom.assign("YWTNNOSHYYNKDYJVEIPETWZTXOPLRGPPJPDOSUFJZWIHHUMCMALPOXTXZINZUQEHXFZLCKQNKFFWEDLCDXBIGUQKQYYYMSGIBBJNYIWOD");
    msg.data.set(tmp_msg_0);
    IMC::PlanGeneration tmp_msg_1;
    tmp_msg_1.cmd = 50U;
    tmp_msg_1.op = 252U;
    tmp_msg_1.plan_id.assign("EOPECXMZKZHBOKMCIVYDMIGSUAOFBJGNUZOEYFXLPNHOJNFJMZRMGYDTTZCCSATILHEEDGNZCJZVWFBIRHRSCHBILYFJUDRMUTXUQWQCMLCBAFHNYVYQTUAZBOVGKHLXGJXDJMKXVKAKRFLAWNU");
    tmp_msg_1.params.assign("YQADCHRVYUICJWAUOWVRNRFEQXMMDEMXGGFOWFOTOGBBOVCZKBETOHVUQCAJOFKUJDYQUTVABBKXLEJXEDSFHWUTCRVKCNSKBLLIATJDPKHIHTLICEDDEYDXKNUSIZRZALKXNPOBPMPPJPSRGFGZHTULSPFAIWGRWMNNOMAUVGFIISYPTQSJHCWSZUXQYWMQLDWCBXTONEMRPRLVQTXAPZFHEAQGYYVZLYHNBJVHMIMWRQSG");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TrexToken tmp_msg_2;
    tmp_msg_2.timeline.assign("JSEUWYOQZEMAFQBUQELBGABJAXRMRYLWIFLJOMWHJI");
    tmp_msg_2.predicate.assign("NWPTQZECLDWYOIMKXOYGQYCJJAWKOSLBMNXCWLCGIPQEHMMPUVAHOIRKAVYYYZJEPQWZWZFOXYIMNVTWGTAFBZAMXBTVSAUWIVHGDRSEDKBZZRCMSGELEXEBFKHLNZFVRLLJDDNDAHUBTLBOKSDITFOZBNTKLNPBYREMRFBSUGAIJICROHUNXJECGUFXURRAKQEPGJPDSXJKDLCNQJIQCTVSDFOPSHHXYAQMVWVHJIPFQZS");
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
    msg.setTimeStamp(0.856160728446);
    msg.setSource(48912U);
    msg.setSourceEntity(240U);
    msg.setDestination(3399U);
    msg.setDestinationEntity(182U);
    msg.maneuver_id.assign("PNABEJARDGUXCHTPBUMXWEKYBZQXENYBTZQFMPSYSDTUCLISBRRIDHAWLZFVETDCLIIVSW");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 64238U;
    tmp_msg_0.lat = 0.3474907227;
    tmp_msg_0.lon = 0.810102107633;
    tmp_msg_0.z = 0.400461030419;
    tmp_msg_0.z_units = 28U;
    tmp_msg_0.speed = 0.56970001816;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.custom.assign("EHRYIOEIQZTRPVKMLBLVWXJFGSTHIIVNCZBYDAHCCQJULTAVPUDEOIARHSDHDAALPAFDURLFRZRTEXNFHWSPKHODZXGBCIJODFOGCFKCYUDUWNNHMAFXRIGABIJQYZFJQWEJKOMGSPZJQNZEYAPOULLCMDXGZCWUPFBNGIVSBWHNQBVZYKVASUBGQCZFSBTVJBOIXNXEXLRQRWEUHGOQLXOWSUMTTWYYJKKMRVTGYXKSEPNMCSDMJW");
    msg.data.set(tmp_msg_0);
    IMC::UsblConfig tmp_msg_1;
    tmp_msg_1.op = 136U;
    IMC::UsblModem tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("HZYKPYNKONKUROLHRMDDJISBYZGGWFGOG");
    tmp_tmp_msg_1_0.lat = 0.487705592374;
    tmp_tmp_msg_1_0.lon = 0.446902167525;
    tmp_tmp_msg_1_0.z = 0.216616069717;
    tmp_tmp_msg_1_0.z_units = 1U;
    tmp_msg_1.modems.push_back(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.392601782715);
    msg.setSource(43048U);
    msg.setSourceEntity(129U);
    msg.setDestination(53971U);
    msg.setDestinationEntity(248U);
    msg.maneuver_id.assign("CXQNTZJYVKNZPDVHASVOGSXIERZUPDWBKSYJMZPFEZPYGFUJWGQLWHSQNYWMDKTRZEILBGDFEVXZMWVVTLRSUSYFRHNYJYFWVFYMECGDCLBUXNBZAJJPGUHPORJIISTOQGHTXFWMQLCJILKRFP");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 37061U;
    tmp_msg_0.lat = 0.464168291665;
    tmp_msg_0.lon = 0.648348631195;
    tmp_msg_0.z = 0.78734216461;
    tmp_msg_0.z_units = 187U;
    tmp_msg_0.speed = 0.0339546745339;
    tmp_msg_0.speed_units = 186U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.53275978222;
    tmp_tmp_msg_0_0.y = 0.787588895862;
    tmp_tmp_msg_0_0.z = 0.368123169772;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("YPNCQSBLUOVYWIRMJOBTTQXYSCINVDBTSXVLNQIVDDFBGWKHURFCRBKOZECOPDBHIEJXOEAQAZUMCFTLVXIANEPGFXUNGHKHGDYZBHNMRPJAAXWZMEJIJDOJDNIGXJYXOXDECSAUHUTKIHLRSBRCRGFTBYSRZDONYKCGVTZQZUMWEWWNYXPUGPOTMVIYAIYJPHFNKAGCZQMZEAESVMWAWJQQHE");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.159506609512);
    msg.setSource(55105U);
    msg.setSourceEntity(3U);
    msg.setDestination(28239U);
    msg.setDestinationEntity(83U);
    msg.source_man.assign("RHFTKONCWDXHVLKDDAYQKVZHZFZVVBXGICRTMTMJETFUIBFRGIEDGLIKJNZDXHVFUMWOKCZLEITPQOWGSQPMJBOOAWPIUEQIYJJHQZSQXUPEGTSYYPCG");
    msg.dest_man.assign("ZPTFHSTGQIFGOKRAGZNMENREJHCDMUIXAXGXTVXHHBQOFNMGDXGTVGRCWDNXWLUPMUZDTKLMXJCZQYROTBZOBFHQVWJUAHAFGTYPDTNDLMOITPCIWISBRLKHJYVRODLWLBSENZEKCUEAMSYWQGDFHPWNBYJOLSYIEVLZFWSNJCWXOPBPURPUICAY");
    msg.conditions.assign("THZTTLEECXHYFLVZDWXSZKGEOIKSNEPCIRXHBWMXJZKJGMUNGAAWFWBOSORVZKMXUNSEFGEYAHJBKDCLQJXUYQWSQCMQOTWWDMIEUVPBVCVYJRHNDRTMUVROLWALRFDPLZOWTCKSVRIDNFRKJQBRXYYBQPZVIZQUNHVGRTDCIULICEFGHI");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 60U;
    tmp_msg_0.tas2acc_pgain = 0.730445583766;
    tmp_msg_0.bank2p_pgain = 0.675673187718;
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
    msg.setTimeStamp(0.90728257346);
    msg.setSource(14842U);
    msg.setSourceEntity(199U);
    msg.setDestination(64797U);
    msg.setDestinationEntity(166U);
    msg.source_man.assign("XAEALMBMWPKSHTKMWGOPDEUBQJGMINMVVABYLWSILONCRAKYYBFUZHZXEUESINQRTTJPYXCGRGUVOYJXGJEWRYQKAHHQTUQEXRQCGKZJTYLVKJRQLUFZRBSNTROLXLXIDEPGWIA");
    msg.dest_man.assign("VDNBTLWQJSGGYIPQWXUPVZUEJXSOKJZBHZMDHZTKUWDRIPWAMLQUBBGWIXCOM");
    msg.conditions.assign("YRDXERXURXFOOCWQHCDTHQFOJZYMDXMGHJQZLYVRMPPFRWENSTGDHQCY");

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
    msg.setTimeStamp(0.121017894126);
    msg.setSource(57784U);
    msg.setSourceEntity(36U);
    msg.setDestination(40742U);
    msg.setDestinationEntity(14U);
    msg.source_man.assign("VUBITGWMOREVKCNTXSNXPVCRLEGCFAHKIDZJKPGCOYQESAJFXILATOHHOUVTIMKSBCXBHEWSMFIYRH");
    msg.dest_man.assign("ALFGAURMXDGFEPHVTCQDOYPRQUXPJTCNWGJFSNWFLZOCVQFKYZZRNTOHRIAJRTMFCDJKEYTBQXODRILBAMHWAMHUOMKMGNVYBQGWSIFMDSDYTGEZACDULULOLGVULPKKOWJLWVZBOIOZYQWAFXHCKGNQNHWLQTYSRLPNOFCVHVBDIYAMNIZGXSEINEPE");
    msg.conditions.assign("UTUXHEXVJOUILPYYIYWMJWVNSHBDFCEOQBPIVDARHFGPYXDGJZLDYALHSBWKKZXGKUPSPBFFNLGNOYDPWHQUAPUAMFZKAFMVLMNJMSLVVQVUZZJKCMCSMXKVEANIMZCBBEKADJLWSCSYUQOTIZAIOTWRSXOEE");
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.170795146821;
    tmp_msg_0.y = 0.601717622623;
    tmp_msg_0.z = 0.747586795132;
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
    msg.setTimeStamp(0.146468930317);
    msg.setSource(5567U);
    msg.setSourceEntity(248U);
    msg.setDestination(7685U);
    msg.setDestinationEntity(9U);
    msg.command = 82U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QLSKFCYYYAIUDRHXUSVXQDFIWAOTYQWXUXVHRYKLLBZMMRTNSWCMNVWSSOTMSJDQNRYNUNGBVILUVUXGFYVWWZQCVBMZOF");
    tmp_msg_0.description.assign("APXUUVXQSYRSPUJJJKAPLRVWYUSNEXSDMHRMANOSZUFCNBRKRTHWVFKJJCDARYUGKOZEMTWXNRITMCHDFEVWLIBOTBQQJFDQFMHGSVVDJWAEZYPTWOPZCFBOIJPUGGEDYAPNKSLJMCQRBMZNDZRFIIHFKKSEQVHEZLHDTYNFAACCAPGLXXCAUDHNYTOCQYGLUYQLRVQHISUWLG");
    tmp_msg_0.vnamespace.assign("JNFCAALGTRXEVFKXPEHFKLIPFLLWTEOUCHMXWJPDEIFHKGSDBTNFWIZD");
    tmp_msg_0.start_man_id.assign("XEZOFNHISIRZTZFATGSNWQTQJLKAOHCEZFULDFPLHXACJUTBDTXCSEKZAJQSGMSPPBQVIRRFYEUJXBLXZLIYVEMVMSGBKKHCHSBQJGNXZXAVWJOPILFKUD");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("VBGAPGGLLZWXMZOKZXSRBYPBQMBZJAENRLQUMKTJCNHKJIVJJABLIDVQOINCFEYGEAIMEDJBSRVVURCCMJOOISSAUKOFWHWHRQSTLKRKYDPMHCUQMYAFB");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 26690U;
    tmp_tmp_tmp_msg_0_0_0.name.assign("EMSWDQVYNWEEHJXAILHLIBKRGCFMZXFCEXGYPQNONBFBWRSXNYFBDRCGRJMOHPPGSAQDTUATYLMDASVTCYJECKMJFPWPRUBZTOVPNYOUGKIUEWGHXUGRAOZPZMFXPVXWSAQHBRDKCGPBODDX");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("BJRYHRLHFHJKMYMAIETWXZNNOVGGAVKISUETDKPQTONZMTAQHWQIKKLSRCNNWSNQQTPEUGTDJVUQWAPZCXZTJWQJLLIXDGEDWE");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::SessionStatus tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.sessid = 2157717555U;
    tmp_tmp_tmp_msg_0_0_1.status = 64U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::SessionStatus tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.sessid = 2970146556U;
    tmp_tmp_tmp_msg_0_0_2.status = 108U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::SoiState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.state = 169U;
    tmp_tmp_msg_0_1.plan_id = 26998U;
    tmp_tmp_msg_0_1.wpt_id = 51U;
    tmp_tmp_msg_0_1.settings_chk = 41461U;
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
    msg.setTimeStamp(0.651644451985);
    msg.setSource(4693U);
    msg.setSourceEntity(57U);
    msg.setDestination(65467U);
    msg.setDestinationEntity(163U);
    msg.command = 157U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ITODVJJWSKEUQHVOOTLQPFFVGNIDFSZTXNTXALACWFURRCNPDEVPKIYHBJTRINBVIFJTXAOCUUZLPBHWYCFRBGLMRGKIHYIEGIWQHLKDYXNGZFNUMFJRMDSYEVLMWWPQNTOHLMAAUZPSODHGBBKHQXOKGKXOTLSKHAXCUPRYESFROTXCBQWTMFEKSHZMUDWKNVLCIXDQJBSZNYOEJE");
    tmp_msg_0.description.assign("VDFGMREGFFRJGTMHOHPJJEVNHRKFDFLEIVBWLJXVQDGSQGTDSYWDOFPLBECUYZSUPRSVWNADCZCCGRNQAAZIMOBDQNSPXWWYWEEEWTPKMWYALBGSAWUKVHRVJCAAFZTZCOFVCFNHQKBZZKTOPNIBHISROUBEWICEXXJPZHMUFLOAHCNLSYKTIIBQOPPSKXMUELYJNYIZXANQUVPAH");
    tmp_msg_0.vnamespace.assign("NKWPAYRMFTCGQVJALNHQSBWZMHPWLAULLHFSUROTZXDQZZCCICS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JRVIIXYQKOGNYKHHSITBCRKGYMNEZSGGFJDAXTNXBXJHUCCBRVDTZHGJLZEKOPVYOUUJLIVQHOBSSVVIOWLTVMWIAYEWLXFEBLPFELBQLFRKKPIQRJKEQDWUYAEBBJAFZGZPZMNKMYFUACLEQSKQUDBWWTIAIXOYXONTRHAFOEVJQDLGCJNDECRS");
    tmp_tmp_msg_0_0.value.assign("QZBZKHMADCXULWNFFFNRKJFSETPKLQQTCFHYGRUAZDEBQRMJCPSWPVNSVWPTGNWYWDUDQSGHISLUNUVAKBYWOAUXQXXVSIKEODFOVBOHYHEVELLXUZOR");
    tmp_tmp_msg_0_0.type = 227U;
    tmp_tmp_msg_0_0.access = 92U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HIICOVFGTKFJLAOSMBGTGJAACYCMIDQNQSFMQGZAZLCFHMUWNQ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("UZNWNOXYTNXPAUORFRPLDNMDAKDNIABEFDJCRGVYXQJCEZDPWCVUZOYGONVHHEBBTEQZPCQBLYCIPYIXQVZBADBKJXJNMSOHGBIAOTIUKSHIXMJRFLPKUFFZPBVTQRXFGWIRMHJUQSPKOVGPTLLESWLXJYGHZUKESLGYHOSQRXXEGLVNOYJONVMBBCACTPQMGDFTSSCUKUDYWSEQLWJGDZA");
    IMC::Land tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.328142307532;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.9331505128;
    tmp_tmp_tmp_msg_0_1_0.z = 0.707172423459;
    tmp_tmp_tmp_msg_0_1_0.z_units = 215U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.687930610914;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 43U;
    tmp_tmp_tmp_msg_0_1_0.abort_z = 0.985235391403;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.445844127652;
    tmp_tmp_tmp_msg_0_1_0.glide_slope = 66U;
    tmp_tmp_tmp_msg_0_1_0.glide_slope_alt = 0.148291185632;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("GRELDKQMLPFNRCMSQESIXZSLGNBTHGGFSLIQD");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::QueryEntityActivationState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("BUHDSSDZYSAANCQVUHEESBKV");
    tmp_tmp_msg_0_2.dest_man.assign("EJSGZHHSADQBBUPYZPOPLXXJFLDIUJVMJNRRMBQVYYSTSKOVSZADWQFWPLARKTNRMNMCNINIELLJQWSGTVSTEOFAYQKQGBAMCIONJW");
    tmp_tmp_msg_0_2.conditions.assign("JJYXYEJHKPRIBCJCAASFFTYBMWSHKOUBQHHMBFDWEONPPCDOLRUVXEPVGLMVIUSPNRDKKRJZPXISLRGYEOGHNKBAXXFQUYATJRBOVVEHVYASGRLCBBHWCGDDWSIWFVIENEWOWPNUVPQ");
    IMC::OpticalBackscatter tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value = 0.0343382501043;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::PushEntityParameters tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.name.assign("MNBTEIMUUFXFOUOCRATZCHMROOHDDLJYPLEKJGQKBSDBWBZUADSFZYXFZYUCJIIWTZQFNLPQWCXHTQQSJFOALGLNYSVKGTVGCGEZKAOWBKEIPKWONYJKWMFFRCRPPLC");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.573056152861);
    msg.setSource(48418U);
    msg.setSourceEntity(169U);
    msg.setDestination(30590U);
    msg.setDestinationEntity(172U);
    msg.command = 187U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SSRVOVOVBTSYJNYOKVTCVCWCJZLFAQPGODWKEUNOHRDXZZPAQGXMUYUZAXFHEDJOYXLPNNFULHKQWA");
    tmp_msg_0.description.assign("TPYIPJHOHLGWAEXTDEJDXFMSUSZBOKDFRKCTPOZTIREPHVYIMQX");
    tmp_msg_0.vnamespace.assign("JXOLGANODSWGYHCGNCQBBWAGYEFZHUPMJVPYPQXJZLMISNKROQSFTNLPSQEXGCYPUFSALIPVCYIVWNBHCTOHNUMZRXDRWKXRSLLOFSFAIBLZCFNLMMVSBVKGQEBCWHVUTXJZDMUIQZKHKZMTNCTGWGAWRMRKHBXRZRGGJADJEHXUSAYKBVRVEICXO");
    tmp_msg_0.start_man_id.assign("HSLLBUSRVSGQFAUUKDTNIOGGVLOIZNRTCLWQFIUAWMXGNJBKXKYLDPFSLDNRXTUKTRCQRBMIQLXAHMWXUZOWDYPEYJHTNHJYCFPVMWHZALNXPVGCFGHMUCHBATFDUWVFHGVBACENHQZAOWYZKUIEVFZTJKEEDMJKJWAICSKCDIXRPABRXPGPMYYSRZINOMDOQFKVZRSQSPQOAVEELWIMHTEYJSJYCDXCPONOJRJZBNBXGTLOSDQMGW");
    IMC::StateReport tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.stime = 1035020928U;
    tmp_tmp_msg_0_0.latitude = 0.85706481966;
    tmp_tmp_msg_0_0.longitude = 0.921080278661;
    tmp_tmp_msg_0_0.altitude = 3805U;
    tmp_tmp_msg_0_0.depth = 40065U;
    tmp_tmp_msg_0_0.heading = 647U;
    tmp_tmp_msg_0_0.speed = -27797;
    tmp_tmp_msg_0_0.fuel = 94;
    tmp_tmp_msg_0_0.exec_state = -31;
    tmp_tmp_msg_0_0.plan_checksum = 29626U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.449621481564);
    msg.setSource(3442U);
    msg.setSourceEntity(233U);
    msg.setDestination(20594U);
    msg.setDestinationEntity(141U);
    msg.state = 108U;
    msg.plan_id.assign("JLVJZWPCYIQOBJWEOFOQYMFANIETUUDTBMMHGDGBTJPWKQPVBITMALKNYVVXYBUYTKSCVHBAFKOHOQWNTIPNASHPIZLWFPFABYCMIZNCJADBWRIFPOECDLTSYKSWMSHVUZFLUGRXEGSUDNVPJXYTLCFQGGJYI");
    msg.comm_level = 251U;

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
    msg.setTimeStamp(0.841309412488);
    msg.setSource(11648U);
    msg.setSourceEntity(254U);
    msg.setDestination(21202U);
    msg.setDestinationEntity(164U);
    msg.state = 225U;
    msg.plan_id.assign("MHTXGENNJVYGLUKAPOPOMPYGGNKLHHSWHSTOIEWLXHRXDWFXCPCPBYAEISLQSVWIQETVUZBQNUUOKAURGJCMZGUKHBQIIWSXBDGTEYJMZEKPAIHRNAYQNDSCJYLLPKSUVAQBGYCOEFTMFEUOJAR");
    msg.comm_level = 193U;

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
    msg.setTimeStamp(0.370348084688);
    msg.setSource(20612U);
    msg.setSourceEntity(224U);
    msg.setDestination(57972U);
    msg.setDestinationEntity(138U);
    msg.state = 88U;
    msg.plan_id.assign("QGNBJNNLALLZJMBAZULKOUPYTTGWDWZRRGSGHBYKSKTMSANYVNPIWZYULAPGRIWTAPKEFXYPPDIWQJABTGHHO");
    msg.comm_level = 156U;

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
    msg.setTimeStamp(0.341778146254);
    msg.setSource(16323U);
    msg.setSourceEntity(225U);
    msg.setDestination(64660U);
    msg.setDestinationEntity(50U);
    msg.type = 123U;
    msg.op = 216U;
    msg.request_id = 40952U;
    msg.plan_id.assign("OWOUIVDQYMCZBSKPPNRFCBQHJCWOBUWMOGEEYBALZUMRWALCAAJSMQCWSNLKCXUMFZJSMIWQAGTTNPFJHUPXJSEXBIVLYXXAFNFHMXCGBKJTVPIDORIEZHEUBDOZRJTDHTTXGIUYFPKHWEDJYEAMVRYKHKRKLKHNLVBCSQVXAFLMOQOYEWBYDPGEJIRHUFIO");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.0265167509612;
    tmp_msg_0.x = 0.835553884678;
    tmp_msg_0.y = 0.727247596477;
    tmp_msg_0.z = 0.23394998435;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KIGGGLTXWFDZTZJPWFGBKTNLXZPJVKNBZRWMYCVVYLVHFAFQDNAFUGADEMZSWINOEDAYTIXBMYWHCKTPYOSXRSZKIHCHNUBAFYLZERRMCHFNOONXIWMCSXOJJDJUPBPKVUHOTMSAVTYRNWVOBVCCKYTZQPKTPXELJIGUDQPTKSIILAAFMBHPDSORYEENDXUYQQWVIVCGGABEHQOWLXGDEQMESPRRZKBLUIJMA");

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
    msg.setTimeStamp(0.170268629348);
    msg.setSource(53624U);
    msg.setSourceEntity(169U);
    msg.setDestination(54604U);
    msg.setDestinationEntity(223U);
    msg.type = 156U;
    msg.op = 131U;
    msg.request_id = 1932U;
    msg.plan_id.assign("CHYEMKXPYEDEJLEMSOPEFLPPATFFJAOHMZOZUTNJQOKNEWHIKYUTBCBTXSFXXGZQQUXYRFWRCRGSSAXPVQZUUNHGZLVEVOHPJRKPGGVSABOOSWKPSDGLWUZQDNCDMHQXNTDBNGAZYKWNYELOL");
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 237U;
    tmp_msg_0.value = 0.684890406863;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QSUDPUQWXYKXZNBQFSZTCORAPBIQAQQVHYMBJCAJKETBPMXDCKRFUCWGTLYPIGACOFTMLPSBHLYQGZCMJYQZPAZNZFDVWEFWEXKAORJWGTGXRYHSIDTNEPIUKCXLRLHNHFSDCOWPIIVKICRKBEXVHZNSLJXIZBOHFLKMGOOXVUEHTBONMVAODFLFIKSYGYNUJMURBKOAEVSMRWXWVACSLPJFVIVJMEQGBUSNNYRTUMJ");

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
    msg.setTimeStamp(0.615923876631);
    msg.setSource(46010U);
    msg.setSourceEntity(126U);
    msg.setDestination(1355U);
    msg.setDestinationEntity(174U);
    msg.type = 211U;
    msg.op = 142U;
    msg.request_id = 27808U;
    msg.plan_id.assign("DIXOFKMSFFRNDOWCWSSYIALROUWCDUDUNJWHJKHOTOLIJZMZSALBYJSMQQJSCUEVQPOPQLVBIITQUGKKARJFKZMQMVIRBTZVGQNVKVYEUREMXLHYSPNYKXNJHEHQACBLBADEWSRZCTFLTPGDVUBGCLGMAXZWGGHRYBMDNXFLCNNFWUFAVXYHFWTWECT");
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.0795996455917;
    tmp_msg_0.sys_src = 11726U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VCQBQCQMAWPDXYIBDCRBTENEIMLNGFZKMKNXVVHOEVRLDBSJRNPMIIIYCMYROLGUNUXXRBENXHWLFKIJZXATIUGTQACDPGGSCPGAQGJPJTWHWJFOWKVYMXGTZESTSAJDZRBOBBXYCPNRYLPPOWEWCMVOCUEUZFL");

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
    msg.setTimeStamp(0.687631362632);
    msg.setSource(60785U);
    msg.setSourceEntity(128U);
    msg.setDestination(2456U);
    msg.setDestinationEntity(88U);
    msg.plan_count = 37302U;
    msg.plan_size = 1079870563U;
    msg.change_time = 0.0889381649714;
    msg.change_sid = 58088U;
    msg.change_sname.assign("YSAKWZEIDTAULR");
    const char tmp_msg_0[] = {-59, -24, 104, 115, 29, 67, -101, -69, 87, -66, 37, 15, -102, 8, 3, 28, -25, -103, 52, -11, 69, -88, 82, -68, -26, 46, 118, 24, 75, 9, -82, 92, -6, -112, 92, 63, 91, -59, -61, -18, 54, 63, 97, -28, -41, -55, 15, -41, 5, -51, -67, -5, -110, -106, 17, -68, -12, -10, 27, -11, 74, -127, -36, -44, -83, 66, -71, 68, 30, -72, -75, 21, 84, -34, -111, 20, 39, 14, 16, -37, -74, 13, 17, 72, -16, -123, -123, 115, 0, 40, -38, -115, -51, 81, -26, -82, 1, -2, -128, 70, 117, -74, -27, 119, 75, -113, -94, -114, 101, 29, -121, 104, -48, -31, 97, -122, 10, -8, -87, -118, 110, 117, 63, 74, -99, 58, 3, 106, 36, 34, -122, -50, -74, 99, -110, -128, -119, 14, -19, 53, 39, -51, -67, -120, 72, 122, 87, 87, -68, 16, -112, -76, 109, -128, -37, -49, -4, 53, 22, -34, -22, -21, -26, -31, -53, 48, 42, 9, 14, 69, -125, 13, 20, 107, 124, -85, -9, 35, 34, -43, 9, -72, -59, 53, -80, -14, 32, 4, 97, -97, -30, 67, 125, -33, 109, -9, -59, -75, -103, 87, -64, -23, -9, 26, -64, -24, 92, -62, -4, 87, 85, -108, 28, 28, 26, -102, 55, 79, 124, 43, -73, -76, -63, 30, -47, -26};
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
    msg.setTimeStamp(0.0320452340405);
    msg.setSource(54379U);
    msg.setSourceEntity(66U);
    msg.setDestination(35086U);
    msg.setDestinationEntity(206U);
    msg.plan_count = 14759U;
    msg.plan_size = 2756758270U;
    msg.change_time = 0.136491188479;
    msg.change_sid = 42776U;
    msg.change_sname.assign("YKLHZYPTTTSIBGFGNYWTQUDAYXJOTMWVFKCAOOELJPHPRAQXZLXONGYKJXHSVZDWGNUMNUCPRWXYVKYEIRMSQCCHEFLSJIRKAXELCW");
    const char tmp_msg_0[] = {-118, 8, -119, 31, 63, -20, 49, -59, 26, 94, 49, 65, -11, 85, -78, 0, -125, 17, -2, 90, -44, 95, -6, 101, 67, 34, 111, 4, 60, 12, 101, -63, 59, 62, -66, -117, -34, -14, -76, 65, 5, 53, -7, -47, 58, 96, -104, -105, 86, -19, -32, 1, 39, 4, 43, 3, 106, 14, 50, 30, -70, -13, -21, -104, -73, -105, -5, -7, -92, -121, 89, 26, -89, 86, 43, 104, -60, 18, -111, -25};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LLTRHKFYAWCOHODELUUXZBKMKQAEFZPXBSDIEOUTUZTPMQWTGFHXPJNMHRCNYVAFPDOTLOFHJPFMCIWHQZUVGZRACARGRUOWOYKMCNYQLGIZTDZAQ");
    tmp_msg_1.plan_size = 34314U;
    tmp_msg_1.change_time = 0.890336998417;
    tmp_msg_1.change_sid = 14420U;
    tmp_msg_1.change_sname.assign("KDNYLXFTERKAVEZQVTAYWVUVDYZWJECMTIKIXZQQHKIFIRTTWUUDIOVKPGFKJXBLTJDWGCNQCCXERWUSHMASXRMWKFFDILOIWZNFQYPFDYZRCTWEUBRGPUJBAIQTBOEVSESVMSBIPYYJHZAUXJHFQNHLDGHOPVGNMABSZYPEUSGSRMALJGOFZCAKBHBEWPVLQXABZQQOYSRPOYMFZUUDJSMLXOPHGRLJNHWB");
    const char tmp_tmp_msg_1_0[] = {81, -104, -26, -30, -115, 10, -93, 70, 106, 28, 126, 74, -122, 5, -73, 12, -8, 110, -110, 40, -66, 56, 64, 93, 25, -34, -102, -71, -88, 43, -3, -113, -39, 76, 31, -32, -23, 112, 61, -21, -118, 62, 21, -128, -91, 44, -88, -119, -115, 58, -24, 99, 64, -12, -18, -26, -85, -104, 70, -122, -71, 61, -72, 100, -68, -40, -122, -48, 52, -14, 42, -63, -55, 123, -74, -22, -85};
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
    msg.setTimeStamp(0.791448341452);
    msg.setSource(62807U);
    msg.setSourceEntity(174U);
    msg.setDestination(55537U);
    msg.setDestinationEntity(194U);
    msg.plan_count = 9312U;
    msg.plan_size = 3954909575U;
    msg.change_time = 0.795012727752;
    msg.change_sid = 56974U;
    msg.change_sname.assign("CQOJHRNOMESTNPLQQAZGADYPRXZYGSUCYJVQRHGGVHMFFMZWSSRHYKKB");
    const char tmp_msg_0[] = {-69, -39, 87, 101, 115, 67, -22, 58, 14, -102, -20, 29, 112, -32, 107, -70, 80, 57, 98, -67, 109, -21, -29, 98, -5, -95, -117, 50, -100, 30, 50, 100, 83, -84, -128, 53, -41, -32, 22, 123, 24, 65, 108, -61, 16, -68, 114, 35, 118, -28, -61, 51, -34, -111, 47, 91, 9, -38, -121, -112, 92, -118, -90, -115, -80};
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
    msg.setTimeStamp(0.858484023723);
    msg.setSource(11122U);
    msg.setSourceEntity(131U);
    msg.setDestination(18666U);
    msg.setDestinationEntity(210U);
    msg.plan_id.assign("PFGLXJWFUOBJCSBMZRWFRXZDQOQBIAXEKVSFUSNZMJYWCBCHXSETAYQYFXHWJGRZLMVYHYZLPURXAOJOKALGCAPLEUNDKARTWMATENPOYOPQGVEMHVVIOIGGHEGYTLUSZSVUPDSQXDGDWODNLGMYABRVVZRRHDFIUMFJQFHZHEIUTVEPLWLZSMTBCKIIBWHJDZK");
    msg.plan_size = 855U;
    msg.change_time = 0.0214637538695;
    msg.change_sid = 51198U;
    msg.change_sname.assign("OWWTOKUMZRQTJVGYKASSTWHWFYKZUDVDPGOJTMBJCBGFDWXQFZLUWMMQGUYDEFVPJHXZODBAGOENYZMWRRIENTVIMCFDIISZGXDBCKMEONPCBGJWNLNLCFPUTVZEYBDSVLAXLHSXKJSYPNYXHQTIUNVGHRMVRKIF");
    const char tmp_msg_0[] = {-81, -128, 36, 64, 104, -92, -100, 64, -22, -69, 22, -19, 62, 45, 9, -66, -56, 98, -79, -100, 118, -12, 112, 108, 40, 21, 110, -30, -42, -122, -121, -51, 100, -33, 106, 30, -50, -8, 57, 63, -29, -127, -14, 68, 49, 125, -4, -100, 100, -40, 52, -96, 80, 112, 119, -97, -74, 64, 40, 91, -117, -76, -3, 43, 91, -100, 69, 2, -55, 87, 105, 97, 32, -40, -24, -13, 21, 107, 109, -61, 45, -95, -40, -27, 100, 44, 48, 92, 46, 21, 14, -41, 62, -71, 90, -25, 11, -69, 56, -17, -81, -32, 97, 21, -122, 120, 11, -74, -13, -93, 80, -62, 103, -53, 72, 125, -126, 116, 42, -120, 65, -73, -47, -74, -126, -119, 49, 92, 2, 105, -14, 49, 22, 29, 67, -55, -121, -55, -94, -19, -45, 86, -13, 49};
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
    msg.setTimeStamp(0.00258018417718);
    msg.setSource(39289U);
    msg.setSourceEntity(128U);
    msg.setDestination(37383U);
    msg.setDestinationEntity(39U);
    msg.plan_id.assign("CITCKEMGUJOJMAJYXDWDJWWTWJNUCNFZNHXBRQCXLVZSRBVLCCIRHSKOMBOOXFSWCQGDAFHTVAEYYAKJZUVAGTFVKEEFNMWGUPHAXLLBTVIHWPOYLGQIZUWQICBSYDHDST");
    msg.plan_size = 28357U;
    msg.change_time = 0.451609984959;
    msg.change_sid = 61307U;
    msg.change_sname.assign("TCYLMMAHUJQRQSXBNZHPIUPPQCOLFZENOVYKZLQNFLSJRZJUHEWNVSDIIBGEGWAGAZSHQFYRNIGHDIINSCZAPNOFLCFBPYAFKIWVWNWRUMPTVNTXPYVPR");
    const char tmp_msg_0[] = {-82, -10, 17, -66, -99, 20, 112, 125, 81, -40, 18, 19, -7, -117, -63, -60, 47, -69, -29, 62, -10, 107, -43, -69, 21, 66, 114, -75, -109, 107, -58, 124, -58};
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
    msg.setTimeStamp(0.735639039671);
    msg.setSource(37360U);
    msg.setSourceEntity(232U);
    msg.setDestination(30025U);
    msg.setDestinationEntity(80U);
    msg.plan_id.assign("DWALXTSHKYWAUZBFSTSZNJLPMMYFTGTZIIGGJFVCPMMJJJFDTAVIOTDKAOEKEPQHSLLHRRCCULBNE");
    msg.plan_size = 23089U;
    msg.change_time = 0.885379573194;
    msg.change_sid = 30656U;
    msg.change_sname.assign("MXBIEQHMBHZWYTKSWTRHPZLGOFCJOJVNLEOSJDGABWLUYVPC");
    const char tmp_msg_0[] = {-32, -32, -17, -15, -106, -34, -67, 60, -18, -121, -60, 111, -47, 21, -46, -80, 84, 119, 50, -45, -52, 48, -112, -26, 90, 89, -57, -90, -86, -115, 37, -56, 97, -39, 85, 5, -27, -7, 104, -53, 20, -59, -2, 50, 45, -88, 82, 119, 58, 11, 67, -19, -62, 75};
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
    msg.setTimeStamp(0.404232304845);
    msg.setSource(44199U);
    msg.setSourceEntity(218U);
    msg.setDestination(56393U);
    msg.setDestinationEntity(188U);
    msg.type = 192U;
    msg.op = 124U;
    msg.request_id = 30511U;
    msg.plan_id.assign("VQZLHYVBKRAWZDNBLFIPPCGGPNVLSTENGAFABMSCHIPOAHZOTMBMMFZRXZNCOQ");
    msg.flags = 17629U;
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 18457U;
    tmp_msg_0.destination.assign("SSOYPESAGKTRZYGDXEHYOTJZYPYODHFKMPAGYSXKXAKCZQNJKFQGSEQMFFSCIPHIKTCDMOG");
    tmp_msg_0.timeout = 0.393195579553;
    tmp_msg_0.sms_text.assign("RLANNXIEZSZIRQKGLAQYFDHMPCXFETBKZWTISVYLABWKXQN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PZSVDMBWIAWYQYEGZLIQCMEJPGTUOHEJWOCLOEUTCZARJTWNLKQIVOOSYEBWDDRWHBWOEHILSOUQPSFMBMMKZIRCRGNSIUHFXRSCBVBYHLMWXEWAXSEDQYXKPZAHPJGLLFRUDKBIZLPRKAKTIWMZPMQPTGSUSTQDTBCVKFFABNRJANUCVV");

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
    msg.setTimeStamp(0.330827611837);
    msg.setSource(61783U);
    msg.setSourceEntity(81U);
    msg.setDestination(42998U);
    msg.setDestinationEntity(222U);
    msg.type = 155U;
    msg.op = 32U;
    msg.request_id = 42001U;
    msg.plan_id.assign("MXNKOGGDJJAHPGCHIOPMXWJLRKVSUTTHDZJQAQQDSBXTOSKWTRDCQZFQWKFBCANBVERMDPNTUWJNDCDOGOHEZAVYHAHWAZBXVGVSOLWJDVORXJYKXLNZWMRGPUXAUZURTIMFZWFVBRFNHTEMMEBJGIZKYVFIXUUYCYLQWPETNMSYWVPPOOTIICBGXZKICYMSQLAQLQZGSNSBKHILQABCPYHBIGPNROFDUISEEDYLEFJELFU");
    msg.flags = 5595U;
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 150U;
    tmp_msg_0.goal_id.assign("YAXJOYQUUZPWKDXCZDKBJZKWPIZEQZULJSXOMIQWEKEDVTCOIRBRDGYQCRUIRHLGLTUKFEVJFGYCZWZNEWVIFAXNVEWNYXHOMMMUTENCEYYSUNTHHHNCDFNLTRIYSQMDHWTFZBPKUJIVLCMDLRXUSPIADZHNAKJMOSBCFFVFFAHEKJASOGBPWMSMALLPPCDTORSKRIAPPSJBAEQXGNGOOXRNLCAYQQHHFVLSWGOGKZRBQG");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("HOCKWHQTWGYBLGLVGSYCZRKCOZAGKAIXUNNJHNPYYXEDYWKZLAVQWQEODVUNTVOLIJRIKDEJXRFJBPWZYNZRWIWCUNNXTDRSMULPVRMNPBSQGSGCETFFFKOFYRGMASQLHFZKXTEXEIPTVUDMZAQJCNHMJXRSMOYIIBVUJBEDVCPXBSZMLYDLYBGHCMORFSHTSDADHPLNKSGAJWLZDAOPXUFUGMQXBPFEJKHAVBOQWJQIQBTPVTHECIKAU");
    tmp_tmp_msg_0_0.predicate.assign("LJICLHNUFGLQEIRYTBISBESTZKFG");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("SZUEXYTPHVTSZCOPANBUENMIRSFFZCXBMQSLTAGBIVKIVCCTIQBRGXYLOVEQDKCVXQAXKXNRXJTMMYZRENJRVHRA");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 103U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("ENHCDXJPEYHWNXYHOXPSMIKDJWASQUZTJNLOTIJYBOVOCERQVHOTUGZFFIYQEISKDEPFIABMLJGKWDBXJFMYQWQTNY");
    tmp_tmp_tmp_msg_0_0_0.max.assign("PGIESOZBLYTNZGXETFDXOTXQUGMBHJSDCWALRMPWBBFQEKMONOJLSDVYKORBDJTHFYVRQYTOHYZJRGNRISOXEHVVZNMTCAKURKUZNPORFVACMLCXSSPHYCIKIEHASEVRYISGORWTTSCRPWXCEXYCNJJFAFEMANZIGDIUBAUNTUWYI");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SCZWILKPOGMUOMWGUVGYNDDBJSEKFCUJVACQHZZPBKJNHUCGOZGPINISATAMWVNXAEHLIQLYQKRHTBZXXWQLMVRRWVPGCJFMWDTDAIJCJQPAPSNYKU");

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
    msg.setTimeStamp(0.488810499109);
    msg.setSource(28782U);
    msg.setSourceEntity(67U);
    msg.setDestination(48096U);
    msg.setDestinationEntity(145U);
    msg.type = 74U;
    msg.op = 138U;
    msg.request_id = 50143U;
    msg.plan_id.assign("GMZPNXYYIHVDCVEHEEREMMRLFCTCMBF");
    msg.flags = 24646U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.864551134994;
    tmp_msg_0.speed_units = 162U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OFLBXIJRKCLYIAVCXHEQHEMWCKXJLXNNVETRKQIMGGSKYHTGUSZNDJIZZUZSQAK");

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
    msg.setTimeStamp(0.80555460188);
    msg.setSource(40293U);
    msg.setSourceEntity(244U);
    msg.setDestination(31910U);
    msg.setDestinationEntity(83U);
    msg.state = 141U;
    msg.plan_id.assign("ODLMTJKCXNHWUSCGEGZESQBQOJCVWNXQXRROCBNYLIMJUHPBNAYHUAEUIRUNBXAVOVIJFXHSFVDAWYRHKFPIMBYTGVYOSKGSAIKMMWBMLZBRTFYUMPZJDDFAERCECTFGQCVQWYNMDFVZBLRCKPPGNUVPGQGPAOMBXLTYJPNBYHWKIIOYRWFJKWQNGLTDXKETISNEDXQRMHSTOWKUCEOZFLZJASLZOZSTAEJHQI");
    msg.plan_eta = -635485761;
    msg.plan_progress = 0.281389854079;
    msg.man_id.assign("BJCEGQELSFRETWRLQAJGNZSUMKJPGVIYEDOFXPINOLDAQRCTVUFFTURJVXENCJZEDQVOPDICNOAHZHHZOWY");
    msg.man_type = 62270U;
    msg.man_eta = 1568082924;
    msg.last_outcome = 67U;

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
    msg.setTimeStamp(0.670879007121);
    msg.setSource(64674U);
    msg.setSourceEntity(43U);
    msg.setDestination(751U);
    msg.setDestinationEntity(125U);
    msg.state = 197U;
    msg.plan_id.assign("QKKKYWEMTAWMWBTBSINCKUDVGOQBMRGKXOOYHBWJYLQIZFRYPWIPGCZIOQDJBHRHUGOVSOZVPEZNXJNIFKFOVFYSMHSNUVYDKNBSEGANZDKJQDRJRDXPGSBGWZYDLIGWFUFDNXMTTPSLXLFMWPRHTOXFACYACATLZQXMZPBPPYCAVLELRGDTHMOIGSJAJERNOCWAAQVBQJTNCTIUFREFEIE");
    msg.plan_eta = 267491328;
    msg.plan_progress = 0.851612624889;
    msg.man_id.assign("ODKYCIJWWSKQJMZFUQZHVVPYEWTOOOGMSNJAICKTVHPHPFRQWURQGDVORYTIFJFLCJLXVNPTODSBTYZLSPCIPIDULWOKYQPRGYPMTBAXVANQLNPEKVMAHNOG");
    msg.man_type = 48003U;
    msg.man_eta = -1169694775;
    msg.last_outcome = 153U;

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
    msg.setTimeStamp(0.767849166408);
    msg.setSource(33443U);
    msg.setSourceEntity(7U);
    msg.setDestination(20244U);
    msg.setDestinationEntity(111U);
    msg.state = 17U;
    msg.plan_id.assign("GGBMLCFHQUQENJTPYNNMGXFRQABESWXTSEJCEKBVMDZYWRDXWEUKFLFMZUPSKEKQGANBUGFICXQIZTREMANPDEVHTOMVUWPJQHNUDODXYUIADPWIJQZPGGBSOGOOTAL");
    msg.plan_eta = 478473537;
    msg.plan_progress = 0.713619208682;
    msg.man_id.assign("UNOBOVOHDZYNOSWWMJVEAELGKBCYBTJJJGPBKFJPPTQZLXOWTUXZNKVJTRSSLNQYPQFXDUXGLIBEBZYYUOGUFSNYKSWUWCKMOPFEHAFYKHOHCQLWQXARTCAMFNDXCRIHAJDJSSNCXDKENLHYVTBKAYZEPTAQD");
    msg.man_type = 17121U;
    msg.man_eta = 1291595544;
    msg.last_outcome = 245U;

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
    msg.setTimeStamp(0.0574582813853);
    msg.setSource(22808U);
    msg.setSourceEntity(75U);
    msg.setDestination(32195U);
    msg.setDestinationEntity(8U);
    msg.name.assign("TCMABXPYZOQURFEZDMZIPMMFXBRKHOCDHGVWVNYXQQCSDVFWERNYEBZWOSPVDVNKABLILRCJKRYBTYTXEAGLSUNCVQQZMKKFLTIEBHJJHXGNPFRNUESSJDCFHOEUWASDBKFPPUAGKRWSLBTBKXJNJHUDWPJAEDW");
    msg.value.assign("ZPINOJGXOAHBYYPWAEMBOWRKYLKLPJZXKJYGPZCADSFXYPITPO");
    msg.type = 195U;
    msg.access = 218U;

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
    msg.setTimeStamp(0.412104899878);
    msg.setSource(58185U);
    msg.setSourceEntity(62U);
    msg.setDestination(24288U);
    msg.setDestinationEntity(193U);
    msg.name.assign("IEIYXIJVTMILKWBWKUXZZRQVOEARFRSLLNEKTQNCACYDXOQECMQJGQXUQRBSNKZPZCFMHVLOPQWAVYWBRZMRTYFJIZGDPFSWTUSFP");
    msg.value.assign("BHWRYJXHAZYJRATEEYXMSZHRWISORJOJVY");
    msg.type = 245U;
    msg.access = 141U;

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
    msg.setTimeStamp(0.424923471025);
    msg.setSource(7129U);
    msg.setSourceEntity(87U);
    msg.setDestination(65366U);
    msg.setDestinationEntity(115U);
    msg.name.assign("ZAHMYCUKLCSAVWZUAKRZQKIKLIFNGZROFAAWIGLFNOOTZCRHGQYHHKVTSUUKPDCPOUQRCWUUOUSVIYGWDXQHNEBCIQPLEBEXZBNRFFSWEJEEABFEDKTKUHTVQXMGVJJBNVTETIRRQJJXFEYNYQWLNSVDSHSPMJRFVKOYJAXGGMLOMDWISRDGOASDXTZMWRWFSZDPYKNTMLQLYXMXNCCPCBMPULEPMHH");
    msg.value.assign("YURTUKOWYGHAIGLMSSHRAWO");
    msg.type = 149U;
    msg.access = 223U;

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
    msg.setTimeStamp(0.0636579831432);
    msg.setSource(31642U);
    msg.setSourceEntity(206U);
    msg.setDestination(61319U);
    msg.setDestinationEntity(235U);
    msg.cmd = 97U;
    msg.op = 209U;
    msg.plan_id.assign("HECLCHUTSYRLJSZUVILKXIGGSQNZWRXIUBPYMBNTAYPUXWJEPIKPPDLKTQRSVFZGJVUXLEYCEKTHTWATYCDJWHDVDSTUWKNFLMLUCQEVNPAORIUXXBJRZVRSAPXZNKEGAOFTMABSRHAMFKJQXZJGMORBKZKGOFZMIDBVRYOAYO");
    msg.params.assign("BNKTLTYKGOPDGPMKLSISAXHNBRXXACUOQOVDBAMCRHUVHMMWJVGYP");

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
    msg.setTimeStamp(0.972500808309);
    msg.setSource(29192U);
    msg.setSourceEntity(103U);
    msg.setDestination(63062U);
    msg.setDestinationEntity(1U);
    msg.cmd = 68U;
    msg.op = 124U;
    msg.plan_id.assign("NGSRPMUXHDHAXSHHFDDBVTVAZWTIT");
    msg.params.assign("MGPBIEQYTCRIXINNMD");

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
    msg.setTimeStamp(0.297234910832);
    msg.setSource(49367U);
    msg.setSourceEntity(216U);
    msg.setDestination(18709U);
    msg.setDestinationEntity(1U);
    msg.cmd = 119U;
    msg.op = 107U;
    msg.plan_id.assign("RDXLAPDFCEJAGISQCXZUQVGLJZAOLUNMBJIQJBIYDHUUCANGOMIENFMEOXMBAOFWCRXVQYACQYPTHOPIXVPBBMM");
    msg.params.assign("FIIHZNQEAHTYJOURMRCXAZVBQCINXQQCOMIZNYPVEARBJWSWYQONZSRNGGYCDRLMSDFEWTYEQCCNHGKAEFFTEGLHLRHFSTACLURITWMOUCAMHIFVPMCABDPGUXBOBSHVGJJXAZJDBNINYEYESWUXQKGBGLUWSPKUOKIBPTTQJFCJKZDXFKLBK");

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
    msg.setTimeStamp(0.581540469968);
    msg.setSource(53248U);
    msg.setSourceEntity(252U);
    msg.setDestination(55844U);
    msg.setDestinationEntity(1U);
    msg.group_name.assign("KCBBFGKBVSGYOWGPXXTEXMDSRBUGKFJNHIMSQBCKKUXEJWC");
    msg.op = 114U;
    msg.lat = 0.909104692738;
    msg.lon = 0.592943257196;
    msg.height = 0.153224657445;
    msg.x = 0.695144208369;
    msg.y = 0.170434817416;
    msg.z = 0.579005621786;
    msg.phi = 0.953859005742;
    msg.theta = 0.502664640154;
    msg.psi = 0.0691880433307;
    msg.vx = 0.501255113897;
    msg.vy = 0.126912908917;
    msg.vz = 0.119296380312;
    msg.p = 0.0655727119989;
    msg.q = 0.0130770192557;
    msg.r = 0.722768917987;
    msg.svx = 0.473721205475;
    msg.svy = 0.292235420147;
    msg.svz = 0.696437938633;

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
    msg.setTimeStamp(0.0708731169228);
    msg.setSource(62696U);
    msg.setSourceEntity(227U);
    msg.setDestination(60747U);
    msg.setDestinationEntity(50U);
    msg.group_name.assign("KRUUUSXMPOZGEEKQANPMCVDXFTPPMJXGDJHGENWSHOJRDDVSLZSAYAOATUSJBZZMXZKDYFQDRBRMGEYNRNBLAGWLXVKNEQFVBLCTSBUOLHDHTLBENFCRODIUZMQMWDGWOIOYRRTQSWGVIEEXWHWKWJOVHFOSVZAJTDYFIBPIMQRXFVSQQHTJTYPAHYIPAKCIIEFFYUNTJALTXHCWZMCNMJ");
    msg.op = 248U;
    msg.lat = 0.759898052216;
    msg.lon = 0.157977783287;
    msg.height = 0.769880287074;
    msg.x = 0.0285979137959;
    msg.y = 0.105338968534;
    msg.z = 0.176598950136;
    msg.phi = 0.457043904104;
    msg.theta = 0.407742746927;
    msg.psi = 0.0864717904987;
    msg.vx = 0.0140920639006;
    msg.vy = 0.48479119617;
    msg.vz = 0.892339043045;
    msg.p = 0.0312190804353;
    msg.q = 0.388912419281;
    msg.r = 0.816225736871;
    msg.svx = 0.823882991995;
    msg.svy = 0.856662611609;
    msg.svz = 0.291143917552;

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
    msg.setTimeStamp(0.649299804455);
    msg.setSource(59851U);
    msg.setSourceEntity(43U);
    msg.setDestination(9049U);
    msg.setDestinationEntity(112U);
    msg.group_name.assign("FUOCULXPDDGMZMAFQTWMEAPBVTZYKJMOHNGRQJMYDVIZNUPCEYEFEKLQUCCXJVLYHQEBZLPKABGZTIHJLNMEWPNJUIVIXRVOWCHBGWIZUKCEUXQSOFZRRFSKNAGTWPLRHCAZQVBWFFLYIMTWXQCKZXNMPIZLSRVOGGYUDENACSKYHHATDTIDXTWJNIELKSTHFRJCPY");
    msg.op = 170U;
    msg.lat = 0.853818675044;
    msg.lon = 0.451968765165;
    msg.height = 0.639034087083;
    msg.x = 0.814998264684;
    msg.y = 0.478833234431;
    msg.z = 0.734696934195;
    msg.phi = 0.12264530381;
    msg.theta = 0.792966018612;
    msg.psi = 0.936014919326;
    msg.vx = 0.421127853564;
    msg.vy = 0.111282179567;
    msg.vz = 0.315455384627;
    msg.p = 0.30843562585;
    msg.q = 0.258241037439;
    msg.r = 0.424957769485;
    msg.svx = 0.694738345582;
    msg.svy = 0.171599408519;
    msg.svz = 0.282382813701;

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
    msg.setTimeStamp(0.906966769753);
    msg.setSource(35415U);
    msg.setSourceEntity(127U);
    msg.setDestination(35264U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("SYOAJOYDVMFCCBQGSGESHZXJQOTTKMNYMYDML");
    msg.type = 212U;
    msg.properties = 130U;
    msg.durations.assign("ORASCXSDVDRBTQBDWAHCUMYDSGXOBTFZFSXFBASLYHOPOPPXBAVDGJCBNKKPITVIBWQVHWNWEXUPUZOLZNWUGXZUAAUIIETPZVNLOVDYDZAEZYNIKQXDRGZLJEGCWTRTQGHYDMFCKQ");
    msg.distances.assign("JLNCQRWZLQMIIXLNOBRZEWGRIUNQJZRUAKJAFPNNOZHSVOTNAKHECPXEDKWJBWXQNLJBURYDPDJWQKMGAXUPYLSCEKLNTLDOGYYZBSLGSESFZFTIKTVIQAIWTUJOEIZDSGHHBOMPUSM");
    msg.actions.assign("VKNXNCRERMCPEIOZBTWWJTDBJZXOFBAWVFWDFAXXQMXMFASKNBGACCNKWBPGPOB");
    msg.fuel.assign("UBDCLHRJTVDRXJUNKOUYFKRDOBZDGLGLTNFUTMBFGYFGCWUDWPHLSGYZHJHOSRFDEFMAUNKTPYWDDNBPSCA");

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
    msg.setTimeStamp(0.968992256699);
    msg.setSource(21055U);
    msg.setSourceEntity(156U);
    msg.setDestination(13002U);
    msg.setDestinationEntity(32U);
    msg.plan_id.assign("ASOWOMRVGYGYFMBNSKVCKHUQNCHTPMZWYOSPRIVJLEFNIIGOIGQCAGBQOSGKFZQERNBZODPLGYAPOJSDGAHUBVRKMYLNSZWVUHNUTJXFUZDBQTAXTAIFQG");
    msg.type = 54U;
    msg.properties = 136U;
    msg.durations.assign("SCEOVZACCEHJWUROYODXMRFGXDLALPPAVGFLNKYNDJISMPGFEMMXIQHGVNGXQESHMZLWVCNKWCFRSOIURXFVHDQDUYZLRUBFIITYXGJSNLUTTWBYGJCICONLXKRRJYCMPUXJWMMVJD");
    msg.distances.assign("SOXLWXUVERONRACOFPOMBMULWLVHMUIWFWYZQQDVSGRVLRKGXANZBADMWEGFCWQOMIUTAHTTYFPDGNYOBNZTOICHNJEUKCTKUSELSFJTVIYYPHQQANKVSYVKIOETTMQCBBWNXLEQDJLNCSHVAYQBAFXYZCIJLPVIRXDZQAEPJZVOEWZMWNKZCWPUGHFHCPHQBMZHSPZJATIULBGODIXTBRKKXEMJK");
    msg.actions.assign("FCZNBHHYMMAVZSUQYBWMSLYGHFXXRAGRTCOQBCYYIZKQMMYJYBNGVVIEFHNMLQIHGMVUNQCLQEWVRCBQAAASYTBUJDWXNSWPSWBPRYLDVGKAKEJTXRIXWQTPNOUJYDTDPSKRFITFKTPCPOETLFDHJVISOOG");
    msg.fuel.assign("QHNGVOVVOAMESLXLYYBZLUAAAVBZLJDFMQSEQWQXLXSYFILUGEYWCMK");

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
    msg.setTimeStamp(0.614744507834);
    msg.setSource(27251U);
    msg.setSourceEntity(160U);
    msg.setDestination(5180U);
    msg.setDestinationEntity(220U);
    msg.plan_id.assign("ELJNMMPTOITGHLFEWKLNPPWLDVTZQQVGFMHCHAVXEDHRSYGKZHQOHMBBNSJIYAEPAXJMHC");
    msg.type = 114U;
    msg.properties = 28U;
    msg.durations.assign("TWFFLZEBDQJBLQSJJCFBKUHXGIGJKBXIYTWCVXRGVPIESUODQKDGWYWNASLVUUKMDFZHIIHZIMMNFPZZXLSEMEUDKMAEPFJNXMQDLAGIHNBQBUDVWRHQVVUSHYEWRSZSLXOPQONWCDCYGGHAMGZCAAIHANYNCPBZFTXMVXRRYKFHJHTZLQEKOJU");
    msg.distances.assign("SUGPJQEJKAOCNDLZMOEJSEXBPQAEKOFEWALGBODDZTTBEUBGPFPTZOKCEWQZMOIYKJNYCIJIVXWIQUNIFJVGLZOCZKPATNHAXNQHIYKXFCWRVNHZSRPDLWLSYUMVTLQMODCXJHGMYREBPHKDDZWITFGMBBKLNIGSPUQMMEZNAVVBVRYSCWWXTAFIDNHQYPRXQUCXLHUSIXGWCYOHOHFACTRDWKMS");
    msg.actions.assign("FNMZUWFQDPTNNUHBIHXPGGRSIZBFNOERBPJSTZLQNHAXBJNIEEOSLNWFFMVTZPQFAGUOQWKEFICBSTDCFAOVMJGDMHVLQJJNAVCZGKWJAA");
    msg.fuel.assign("BQOCZNEZFLIWGOVINMXLGYMMPQDPRDNCGUXNJU");

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
    msg.setTimeStamp(0.754992817914);
    msg.setSource(26073U);
    msg.setSourceEntity(19U);
    msg.setDestination(22778U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.892779690297;
    msg.lon = 0.0154384478696;
    msg.depth = 0.460602784579;
    msg.roll = 0.578296484401;
    msg.pitch = 0.621955903406;
    msg.yaw = 0.923740599572;
    msg.rcp_time = 0.0294268126454;
    msg.sid.assign("CKARPXNNIJMHOWBAFQRHEHPBCKQSUPVNXDPCNPLWGDSIAXPZGTKJKNAYJFFJNDENWDPUXOVFQGBJQSGVMDLIDZSZMNZEASQWTSPYCYYEVIULUERCTVTOUUOLLMABKETBNUQGWQEPFRGXUIXISWQIRRVWQVODHBYRIXN");
    msg.s_type = 183U;

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
    msg.setTimeStamp(0.883687123899);
    msg.setSource(32793U);
    msg.setSourceEntity(82U);
    msg.setDestination(36556U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.0331183566862;
    msg.lon = 0.477567044102;
    msg.depth = 0.0399463584754;
    msg.roll = 0.925216842279;
    msg.pitch = 0.289585917524;
    msg.yaw = 0.755843483054;
    msg.rcp_time = 0.163340139741;
    msg.sid.assign("ZPSZOZDHRHJLLBKMWOVKPMSHAXDWTXAFVXSCJNGCSLQMUROWYYYZVHQDGBKJGODJCIASLBKMMEKQTTERYTSEIXMJEVEIVGPYIZXJPUFWU");
    msg.s_type = 42U;

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
    msg.setTimeStamp(0.643335137117);
    msg.setSource(53115U);
    msg.setSourceEntity(238U);
    msg.setDestination(26864U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.763325948403;
    msg.lon = 0.98236127005;
    msg.depth = 0.181417467537;
    msg.roll = 0.22009348302;
    msg.pitch = 0.334322248162;
    msg.yaw = 0.334533022162;
    msg.rcp_time = 0.420948162272;
    msg.sid.assign("TLNDOETDVIBQFIHMMLXQXIEIGMSDSGRBQBYZOKAROLPSNGGKKZFXEZRUZFLQCATPONRGHMGLEKHYDKUZEJOEDW");
    msg.s_type = 246U;

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
    msg.setTimeStamp(0.360585137603);
    msg.setSource(14814U);
    msg.setSourceEntity(97U);
    msg.setDestination(33744U);
    msg.setDestinationEntity(64U);
    msg.id.assign("JSJUINAMPPTXVAQBXJEMJLQVKBIXGGFYXYNDUKLYFCOQTAQEBCFVVFKKIVXJRSOYTHSDGUFULFPLBRBRHZROMUPCCMMHCDDVYNKGUJEOZPMNHZDIOUALJTBRUWTLRKMEDJTNGSPASICAZJAETSOQUONFAVNTGHTHOGORAKYBHRYFLGEQIZGNQ");
    msg.sensor_class.assign("TDJGLGUEWYFAYULUWXVMZPKEQCGVFLJXHZVNQHVHTMNGPTLHIAXGHTQMNITDBGTGDJDWBEOSCPLLUUXOKYOYRPRWFWBYEMTQJSWWOJAYUEPPPQCZVGQDYERRCIMVOZJVUJKJHBBFBOCCOAIUXHUGBHZMZXTALMAVSKKWZSWRDPFOAITIFSEKZYVYSCHYDQANWSNRDCBKRQP");
    msg.lat = 0.19000238596;
    msg.lon = 0.609312297668;
    msg.alt = 0.593730452025;
    msg.heading = 0.0850499884021;
    msg.data.assign("WQUBFDRQITADOCVIPVXQFIAFGHXDOOFGLYCEKPRTQHLABQVKULADYKUNOOCVXLUHKEUNZCBUZVLGEYWNXJFWKFTS");

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
    msg.setTimeStamp(0.00932802407699);
    msg.setSource(33008U);
    msg.setSourceEntity(160U);
    msg.setDestination(50839U);
    msg.setDestinationEntity(16U);
    msg.id.assign("AYVHSFRXANPQJKNFKARLKBWQYUIZNTCRGHZSDUOKEUFPXOTGWKTQTHOSXAQKBCHMKKJCRXPPOVVJWNMAMIWJIWJVBYUFYVSCIHDSZVLJEYMULCMIBHIRNGXDEDMDLZURMICEYZKBGDUBTXFNYCNEWRRDQQPAJQEORHHUGSSPFBEYAXPJAUPY");
    msg.sensor_class.assign("ICDLYFTYNWQVLSDUPLXZFBKGEZTQOBPJNVDVKAGWXIENTAFBCQORAAVIKYDXLBHYIWSBJRWPAKZSLDRUMMWJLHSUPFWYKPDOBERZQQMETCPMUOZCEIJLQGSTEBHNIZTVTXKEONJOWMSDRAVFERDJYHOHKKBGTVUGGKTDYUNCXGORZGJTP");
    msg.lat = 0.866027571307;
    msg.lon = 0.408125381647;
    msg.alt = 0.132738619325;
    msg.heading = 0.041517705748;
    msg.data.assign("TPWESCSKFYVYZFRJFYHTQPHSDYWJWYDHKRMFLPJURRBMWCDIONUCNDNUQOHITLKEQZMQGCOTFAMBRXSYRAFDHDNEJGPBJTYXXGNBJQZGPBXWVXOVLKZAXUPWJOEGIMIZDNSIBAUMSLCOAKTDGEIYBORUNAUEWGPLVHECTTZFLFTVBHLOQZSGZKCRPLF");

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
    msg.setTimeStamp(0.474170692982);
    msg.setSource(24993U);
    msg.setSourceEntity(159U);
    msg.setDestination(39004U);
    msg.setDestinationEntity(44U);
    msg.id.assign("XKBHQIWXRMJNYR");
    msg.sensor_class.assign("ZQUPDVBNFGCFJXZBUSLKIRZXWFCYQWKAJXYVELITYZGRMDKOMZCYFNPFFDKNEEARBYCHUTLJGSTSBDNIQPARSHIIIKSHXRESWQZJJCQTUOOZXSVHLARUHKPLMZWYOMEOJQUTLMAHWGQNVMYPEBUDQPAJONFMSLNDZYFCHBXNIEVKPQTDOZMCXXGUGDENBAGFVOACKVKHJETKCHUB");
    msg.lat = 0.638684514422;
    msg.lon = 0.106451113584;
    msg.alt = 0.38405916881;
    msg.heading = 0.333777474822;
    msg.data.assign("ZAIRHEIMPOAQZNDRRMWBLSIVBSZOCD");

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
    msg.setTimeStamp(0.145484112177);
    msg.setSource(17004U);
    msg.setSourceEntity(180U);
    msg.setDestination(261U);
    msg.setDestinationEntity(209U);
    msg.id.assign("NTONKVOVAVOGWMUAXVSKAUXZJHIAAPDFNMKMIXCIQGOGYMALDONWBHTPYYIIAMZSHZRCKLVJUVHEXPQWBSESFNZBDNVEQMUECFNGJOFBNGKHRCYCEQ");

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
    msg.setTimeStamp(0.642020304193);
    msg.setSource(5464U);
    msg.setSourceEntity(146U);
    msg.setDestination(27849U);
    msg.setDestinationEntity(51U);
    msg.id.assign("PSNUCXGEVYZYRSACMLHKXMOYGCDIHY");

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
    msg.setTimeStamp(0.701005681711);
    msg.setSource(4388U);
    msg.setSourceEntity(174U);
    msg.setDestination(41554U);
    msg.setDestinationEntity(135U);
    msg.id.assign("NDYCKFVDKIALFIUPZWEASBBXAAVSYXCRCPKHUSFQDMEGWGWJPWRJJJBUKPAYEAOYPQLPCNSQVNCIXJBTWSZNTRONOGEFM");

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
    msg.setTimeStamp(0.517213683023);
    msg.setSource(15611U);
    msg.setSourceEntity(61U);
    msg.setDestination(14804U);
    msg.setDestinationEntity(19U);
    msg.id.assign("UMJOEVPBSKSUDSCQWHLFFHAAVFFYRQSKQWIZYXKNLOBXHFMVSXEKCKZXBRGPYNCMGZSJGEYCERYWEPGPJROOYXUUJJQIPQHVQM");
    msg.feature_type = 232U;
    msg.rgb_red = 177U;
    msg.rgb_green = 116U;
    msg.rgb_blue = 15U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.439532758686;
    tmp_msg_0.lon = 0.046921008916;
    tmp_msg_0.alt = 0.179844830813;
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
    msg.setTimeStamp(0.764017717719);
    msg.setSource(2213U);
    msg.setSourceEntity(46U);
    msg.setDestination(56591U);
    msg.setDestinationEntity(95U);
    msg.id.assign("OEHUEJNZILXMAJIDOVUTSLGKFAZYONDLMRFAZIAVPKHCJIDDHDTQRZYUVDMUZGEVP");
    msg.feature_type = 173U;
    msg.rgb_red = 154U;
    msg.rgb_green = 188U;
    msg.rgb_blue = 90U;

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
    msg.setTimeStamp(0.923334840345);
    msg.setSource(39282U);
    msg.setSourceEntity(235U);
    msg.setDestination(15306U);
    msg.setDestinationEntity(115U);
    msg.id.assign("DCFWFFMLZLSVVICGM");
    msg.feature_type = 121U;
    msg.rgb_red = 128U;
    msg.rgb_green = 168U;
    msg.rgb_blue = 74U;

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
    msg.setTimeStamp(0.739728087538);
    msg.setSource(51381U);
    msg.setSourceEntity(9U);
    msg.setDestination(7900U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.273615064549;
    msg.lon = 0.866379120036;
    msg.alt = 0.0697305593449;

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
    msg.setTimeStamp(0.248898328151);
    msg.setSource(6462U);
    msg.setSourceEntity(70U);
    msg.setDestination(29942U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.290830109081;
    msg.lon = 0.17266396179;
    msg.alt = 0.0179091221436;

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
    msg.setTimeStamp(0.452287475573);
    msg.setSource(31086U);
    msg.setSourceEntity(69U);
    msg.setDestination(58328U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.259098172939;
    msg.lon = 0.732428821898;
    msg.alt = 0.0545133385947;

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
    msg.setTimeStamp(0.792409002407);
    msg.setSource(11818U);
    msg.setSourceEntity(12U);
    msg.setDestination(2286U);
    msg.setDestinationEntity(43U);
    msg.type = 203U;
    msg.id.assign("OTLNHTNDJWMACMNREVIHQOXBCUGSPOUZTRFVCUXGRCFQVXIFTHGZVUZJWLBBYAOWFYRYXQTJVADDAPFKPHRREHNBGAISLPJLODLHIUOKCSJFQFXEOSMSIDJHJOCSLMZWLVDVMEIEN");
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 176U;
    tmp_msg_0.x = 0.0227768212942;
    tmp_msg_0.y = 0.0237837881779;
    tmp_msg_0.z = 0.540625605114;
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
    msg.setTimeStamp(0.606991235117);
    msg.setSource(53973U);
    msg.setSourceEntity(80U);
    msg.setDestination(57042U);
    msg.setDestinationEntity(142U);
    msg.type = 66U;
    msg.id.assign("EZHJVTZDTGWJJDSDDAZWAIEIRPOXEWOHYBPMJMTOQERGJEUXQSVZFYKBWKOKPYFLGAXEBNBCIYZWICIWLFGXPRQNJMAIKUXACFODYSKFHDMKSUQYEWSBMMAVPHOMRNHFHYOTVAIVHUNSPJTKTVCVLLUCTIXRSDQEFREPPVGSURYYMDXOTZNMENHQPJHQKZJSLZWVTOUGUFCSUAHXQIFWCPBTAQBFRONCNRKLVDUZLLGCRIJ");
    IMC::TransmissionRequest tmp_msg_0;
    tmp_msg_0.req_id = 30490U;
    tmp_msg_0.comm_mean = 201U;
    tmp_msg_0.destination.assign("DLSEPQUXOTAIWLPCIUHZDMVGBLPUZWXFDUOLGBOFXRDGZNOEBEIRZOTNZNHXWNSNHTAPJORWJOCTMBYHKOUIUAMRDPLGJFKVAPXKLQNUWCWAHJQBLZYXOSILQVSKRKUJFMVAVKTFYMEBIQTDIMPMRPZTWNHEYYHCRRNRTLYSVSWERFGCHKZTFJAAIBPDHBZGJMKDXCIVSDUSHEMGNBCV");
    tmp_msg_0.deadline = 0.152130349864;
    tmp_msg_0.data_mode = 156U;
    IMC::SmsRequest tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.req_id = 29347U;
    tmp_tmp_msg_0_0.destination.assign("MQHZHIUMEIPFBYUJPVZCAUYZCKRQTEJWXBWGULRLQLSVAGXSYPPKODGYLDOTDNLDQRQJQG");
    tmp_tmp_msg_0_0.timeout = 0.651708087691;
    tmp_tmp_msg_0_0.sms_text.assign("AIBKJVYVPUGMXOQYTAQRUBMOERWPPNIVOFRMUWDRANTWZBBQAMDSGRXIBXBAGSCKKQCAATXQQSZYHT");
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
    tmp_msg_0.txt_data.assign("DMDGDYVUTBCWDNHSSATEJVDTQXHJBIYONUHFWTPWPGOWGPYHTVQVGOVQBWHXUJWABVBEKCMFNDAAYZGLMQJYWUKFXKKJXUZZYBSXDMFFEWLCLKGTJAIVYHRBNECRSTROQJJRHKLQZFLBZOGAEIPXOUHNIXIDWSIOESSYOCJMREFQLMGULRQQARZNC");
    const char tmp_tmp_msg_0_1[] = {-36, -23, 85, 19, 25, -32, 110, 60, 12, -51, -113, 55, -107, -6, -98, -82, -27, -76, 42, -116, 55, -84, 54, -22, -83, 111, -71, 12, 98, -37, -31, 50, -15, -30, 88, -13, -108, 89, 45, -80, -81, 121, 97, 25, 90, -31, 101, -125, -79, 84, -40, 78, 42, -24, -125, 25, -77, -87, 24, -29, 52, 18, 21};
    tmp_msg_0.raw_data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
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
    msg.setTimeStamp(0.816378694344);
    msg.setSource(21649U);
    msg.setSourceEntity(177U);
    msg.setDestination(42121U);
    msg.setDestinationEntity(249U);
    msg.type = 158U;
    msg.id.assign("TRWMACWCKMIGCEPTQERPQHXSMOYSKNSUSYXHJJFAR");
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 173U;
    tmp_msg_0.flags = 221U;
    tmp_msg_0.description.assign("HLLCZKGOLSVUCXBUZXDAZVHUDOVFTYSNMBIEJBQBJCMNJHSTXAQ");
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
    msg.setTimeStamp(0.613375157732);
    msg.setSource(22702U);
    msg.setSourceEntity(73U);
    msg.setDestination(14340U);
    msg.setDestinationEntity(41U);
    msg.localname.assign("CAFIRNYPPTABRPPVRZENXCICMYTSEJYDCOEJIXQDKQAXVZGXUUPPHZZUKLJY");

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
    msg.setTimeStamp(0.0753918721576);
    msg.setSource(31432U);
    msg.setSourceEntity(246U);
    msg.setDestination(14322U);
    msg.setDestinationEntity(6U);
    msg.localname.assign("LTMFLOXWFDRKUGNIYMVOMWGAOEVQSFTCXOSEDXSTPNSYSCWIQRAZHFZDCZRPOEXQSPQBVDEAXBJJZGAVLUWEBUEERBCORTXQUVHMVKHKQSUVWGYKYKYITWKFDHLUBLTGODNZKCQGIPIOVCGNBXUZCMHLABPZUJWYKDWDVIUAAJIXLQNRDETPFBTQOJXQJM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PUDHOEKJIRDTBVWGTYOAYNMTPUPDXTNVLLPIYXSJWTZNOCJL");
    tmp_msg_0.sys_type = 253U;
    tmp_msg_0.owner = 25771U;
    tmp_msg_0.lat = 0.289326097239;
    tmp_msg_0.lon = 0.566627552489;
    tmp_msg_0.height = 0.378219491901;
    tmp_msg_0.services.assign("BCQZVDMJCBDIEELLJOLGBSGPL");
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
    msg.setTimeStamp(0.284903180908);
    msg.setSource(58620U);
    msg.setSourceEntity(160U);
    msg.setDestination(23152U);
    msg.setDestinationEntity(59U);
    msg.localname.assign("OOKRBAPBJGSCAQCXIUXZLUTMDAITGYZEDAQTAQIIDRLPWYJENNGREWWYKEEXQMFMUMVAOYXSBZSDZSJEIYBCMPWAJICTTSAOUKHLWVUYDFSFRQFDCVPKWKNVDXJTLGPRWHJDRBGCKNXJLQYPBIISVAYYWXZQKPNBBUGCLFUGCSGNCEFXPHZFNKHMSSHMAJKMG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("FWXBJCPHDSSUZVKIPULSUTXKZXPKSFL");
    tmp_msg_0.sys_type = 46U;
    tmp_msg_0.owner = 15845U;
    tmp_msg_0.lat = 0.520085102241;
    tmp_msg_0.lon = 0.322226237717;
    tmp_msg_0.height = 0.149753444285;
    tmp_msg_0.services.assign("PNOALJXUCINDQHPRSOJAXACK");
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
    msg.setTimeStamp(0.558213754002);
    msg.setSource(51330U);
    msg.setSourceEntity(111U);
    msg.setDestination(3879U);
    msg.setDestinationEntity(99U);
    msg.timeline.assign("MUIVBEXGYDIPEVYAMAWMHWHIAIIVZXSTJSSHBVTLSLZDIJKIQYMYOQKWRLPDUIEARWBQDWDLZCRRFQPNDPTKRMGSZVDEFFJTLDCSGGB");
    msg.predicate.assign("NVLYSDYERIJHIFWKIYMLCBVRPGQQWIAIPCJBDRZLHGEVFDKZERCUAKJBBBIIGTKCWKLDOSFGWSHZCEIYRQSMNPWVGIPRHFGGXQCYRJUUNKAFTTPCKXWPHXMQNBYMQPMWOTFMDUPFAJUSTYXAXXVHYZOLTUBDYMFAPMKGRAMSQXOZABSTHSEOEJUDOLQTHWJSUCJKNEGVNXDTOBEOXMLHQNOVJZDXVBZOTDHJZLNLA");
    msg.attributes.assign("ESLNRXFMRCVORONPSTSVBBGYFMHWXWNNLTUNNRHWWVWPBAYOXEGESXEYZUQRBCFLIFOELFHDJGSNJSRRYDRDOVAWIDTGLAVHBEWZGPMHVLJMYCWQQJKTIQZDTVTCXDXJNFJAXATQUKCIVBZMQILMXHLFPCKURIZWUXBQOPZSTDJKSRUKTCSUOACMPPDPNAIAMIUGKNCJPEHFQQKFIXOCKZJZWHDAUBMHGFOLYEVOYSEQUJIBVYGZ");

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
    msg.setTimeStamp(0.313914004603);
    msg.setSource(40740U);
    msg.setSourceEntity(147U);
    msg.setDestination(14975U);
    msg.setDestinationEntity(56U);
    msg.timeline.assign("DBDSOAGGWRTYBKGMLINJESXCFVZNAIKFMXITLDSRVTJKPUOPCRBGPEEPSNVQLBYRJAADZWNIMAOIYMTIUWWWRXFCYREEXHJBPFJUOEPUVXAOBCJQRCHLZSCK");
    msg.predicate.assign("STSJLCJANSAAJXVMZCHEMYSWEYHTLRSFQZKXJZMUECZCTBODMUEQVPTILGRRKZYJPQXEZQFKPSWWKXUSBSDDQPSVNOMENIBMUVNYLFJTOAECTPNDMDDAPIBZBZHXOURYIYOVBQDUEKUHAZDOQCPIXXVOGMJHGMXGHVFRFOURRWFJRIWRBIHGCSDUJCINLADPFXHPKJEFK");
    msg.attributes.assign("DBUMMIPQOCLNFMOIMSHHULDQWKWAAZLPECSQYSAVJFYEYNFFICRYGXTRIBXRIJZUDRZZDSI");

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
    msg.setTimeStamp(0.0298098239432);
    msg.setSource(7965U);
    msg.setSourceEntity(239U);
    msg.setDestination(64537U);
    msg.setDestinationEntity(46U);
    msg.timeline.assign("TLBQSFWRKCLROYBXTZPIAJAIQMOHDEFNJHPBBAFYKIRBLTZURQVNCDQRDXWQIZNBJGOHLEWEMYQXMCFJOFYFOVGUGBLUCPOVMR");
    msg.predicate.assign("XRONLIDCEYSFFTJRTLCPMHBKVEIVBVQDGZVHYYFOSZVCQTUWJWNTUBBAFOJSGMMOIRODKTJIWYCQEAXOUUYONEGLVRCKSGYDNZIVMMPJDRABGIGAIACVVSNHMP");
    msg.attributes.assign("DYNUIITHUPTTXGVWCLORWOEEPBUVBTRQSDPAJXWKC");

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
    msg.setTimeStamp(0.938382923321);
    msg.setSource(2695U);
    msg.setSourceEntity(71U);
    msg.setDestination(51810U);
    msg.setDestinationEntity(229U);
    msg.command = 216U;
    msg.goal_id.assign("DMDJQWDKKLDGXOHSNXORYYPVYZUXMDGWCTINSCQOFOUTABBEJMFWLCASWNCEDBRUPGBFQFAKZXDQJHIWWAKFTJGK");
    msg.goal_xml.assign("SMAFVVDKXRGQIXYJIEQT");

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
    msg.setTimeStamp(0.331201697232);
    msg.setSource(28610U);
    msg.setSourceEntity(172U);
    msg.setDestination(60037U);
    msg.setDestinationEntity(187U);
    msg.command = 39U;
    msg.goal_id.assign("HJSKZCHORIVPPFDYHQVWVLKMYJFZIQA");
    msg.goal_xml.assign("PFMITBCVGXOEWHDO");

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
    msg.setTimeStamp(0.982799190595);
    msg.setSource(3644U);
    msg.setSourceEntity(135U);
    msg.setDestination(35874U);
    msg.setDestinationEntity(252U);
    msg.command = 175U;
    msg.goal_id.assign("UQMJJZXAQZUAPDYZJYQIETMLHWVMTCWXWBKSDCVCUJGQIEGOYSEJPFVCIYKPWRYNHWJOXSWEHNBLFFTVBFAKJFIPYKCNUFZXBREHVGLHOQGBIPYONGMZXEPWQRSMFBSBDCKLPBJUVFFDOSVLMRNCEYECRDZVDZODLNLCACAAOQITHGLHAZK");
    msg.goal_xml.assign("YOTMTXQIRDGUTAKJXERINCWHRNIOCULSOOJVAJQNCDQVBJPYODBPDEHESHPOVJLZKJDWOCIVLGENMTAQFHNAIWFSUKDPXWIJAKEPSKCQTBXDMZAQDZIHYRVSFZEGXDKBAWQLCQJUGXHZTATZXRLUTYBKZTYGFNMSLJOMRQYIPEUWFGRVUKWCC");

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
    msg.setTimeStamp(0.782660329753);
    msg.setSource(57020U);
    msg.setSourceEntity(85U);
    msg.setDestination(8254U);
    msg.setDestinationEntity(205U);
    msg.op = 74U;
    msg.goal_id.assign("QDVBFFSSWJTZXOMICVQM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EAKWBLKBHETNURBDWDNOFBFJSYPUGAPTWFWQDWIIPRZOKVOPARVNCGSAOLMGSTXKTQQUUOSIXXZNEDUGZJTMHYYGAKSWGYUKQOBHCBAEUYTONPCXGCFDFVHFMWMLBQCYIMXQWREIWJJYAYHFRRMXCLPUVJISYGBUFXRTCRIMZZDPOLAAPCLTLRJHFFEQPVOXBDOANJLIHWUMZYKMZZK");
    tmp_msg_0.predicate.assign("HBZQGVERXYJDOWKBDYJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IBUNXVEQESQPAYEKYHDLUYGZNAGJWITNVLFIHLDLGCJDEQAPOCDMWEGCXLGPMBKCLKMTPQAKDRFHJETHTZCAFZYPOSFFHJOSOXGPRWTFWZLQAWHEZFUIXZIVJB");
    tmp_tmp_msg_0_0.attr_type = 73U;
    tmp_tmp_msg_0_0.min.assign("FVLOHKWBAUXLWQSQFXHSCPWBHCMYYGSIGLNEIXCCURRKPHYHRMGRDUTYRTGIAZPNCDQWFYPMYHVKULNTJVCFSRUXWQNZKWAOJMZKOBMQ");
    tmp_tmp_msg_0_0.max.assign("MUQLMUDRSUOAFVFOJEICZJGCHWPBUCBVPNZMCESIDCQPSIDFYKXKHJHMUWVQSTFZNCBBNLMTJQZHCYABARDBPQZXULEDVOBMWCWWUKKXAKGIJXLLIEXYTFRTGATYHLSYSLSIOBRTAKCZNFKQQDZFIRGIPWTZTPXVRGHJSPZSJHRRLHWDNQVEAOWPD");
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
    msg.setTimeStamp(0.78132523259);
    msg.setSource(39014U);
    msg.setSourceEntity(50U);
    msg.setDestination(41155U);
    msg.setDestinationEntity(196U);
    msg.op = 131U;
    msg.goal_id.assign("LSVGOOEKLSYPUHTIXOFWUKYQNHNSDHKPRIBAZZXWWJHCSQDYPV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KBMSKRVTFKAVTJLHQHMRUGVLLXQLJIMZHCGOOPMSESWEIVWEEZXIWVMYSVXPLXJQJHITKQYENXJMVOZJFKYTANRFNBXKMRYYTOA");
    tmp_msg_0.predicate.assign("EFPBMKLXJSTMZJDIGFFMZLMQNICRXREMEZLXQRHTWIBBNBKMLCIOTYAXXV");
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
    msg.setTimeStamp(0.613762207786);
    msg.setSource(27355U);
    msg.setSourceEntity(4U);
    msg.setDestination(50257U);
    msg.setDestinationEntity(52U);
    msg.op = 51U;
    msg.goal_id.assign("KLUWJVSJVRPDP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MZXWHHSGIHWQTNWYOOZUKVDPBMNQGSOCMXDSONZWJGEBZODREDLAQXUHYPUJQTLOLZGGAXPNKATTNYSRFBVSGIOVJNVKLLGLOEDQASQHDSVJCHRXPMKHXRWDGIZAZSPXMPFLFSBYCCDWVUEU");
    tmp_msg_0.predicate.assign("HXZCYAZSKJANBUNSUIVRLYKUVTCAGEQCBGUQFSWJWYFXCLMLMDUQVIBAZAMESKBIOLMTONVHOPWMPNT");
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
    msg.setTimeStamp(0.107708293166);
    msg.setSource(8181U);
    msg.setSourceEntity(132U);
    msg.setDestination(31677U);
    msg.setDestinationEntity(222U);
    msg.name.assign("OTYGLCMMFFRCTNVRUZTNZWDTDPPDXYBZGCJCEBMOBSOWPJUIVJQY");
    msg.attr_type = 145U;
    msg.min.assign("LFRGWQFLVGDGQBXUNAIQKPAODECEXZTNTRXNHNTXHYKCZMHGBMJXHIHOCFPIXAPFLBCUOIUSTWPFYHEULPTADQRFEJRMDKUOVJMUYELQSOBVNFKJQPZCSUCRYGALCMWBJZWOEDJBDP");
    msg.max.assign("KJPWXREWQQZNNTBCMWTJDWFQLVJNUMPCBRECQSKOUF");

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
    msg.setTimeStamp(0.648391225105);
    msg.setSource(59645U);
    msg.setSourceEntity(249U);
    msg.setDestination(39566U);
    msg.setDestinationEntity(45U);
    msg.name.assign("UCKUUXQSZEOLZMENVRLJBWUHVWHLOMUPZNCAJTMVFOVQDHMQCRQVACXKRRJNDNQZBAKWDHGPHAMJEITNRMURIDCYMZXVLKYAFJCXQZHAHFCSVEXECZOTEWBEODGRADEBGIYLYIPYTVSFBPYBRWDGFTLNNCESBKWLUQYMNLPKYABJIFYFLRXOXDFOQIQDUZXTHKJZOSQPUAKFTSWPNBKUSMSKCPRPMHITDTGIIJWAHXNZOVXOJWVSSFWGGTPJGB");
    msg.attr_type = 234U;
    msg.min.assign("CPZZTJIBIVMPENAYSYWEXOJJ");
    msg.max.assign("ZAQIHFCSAKUQCGELGQIMKYMWRCRBSBXVDYZDPKJCMCGOUZHHQYLBVFKVLMEBOWPNQQUIVZFPNIASVPBRSOUCYISDKPHKCNAKSGIWNZGJPQRFNEYTPKJWEMZSXJVDUQKXGLWERJRFFVLGCMZMYTLDVUXORLWUUWORFHXYZTMEBNDAGORBOUTKXHHNDASBTRQWPLTCBXLPAO");

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
    msg.setTimeStamp(0.466095381988);
    msg.setSource(39584U);
    msg.setSourceEntity(123U);
    msg.setDestination(65037U);
    msg.setDestinationEntity(43U);
    msg.name.assign("PNEUNDKVJWXZMIXVZUMPYAHYUUGXUQZBMLCBH");
    msg.attr_type = 198U;
    msg.min.assign("NEQBIVPGTNAQQYMACEVIXKVCISUDJQNPWMTFXLOEQBFHWTGCXDOLKSISHZXSLFUDLVBOTFQVBYPNWAKJBDOJRLSKZQRGCYGNIVAEUJYYI");
    msg.max.assign("HRVATSOUBHWEZTJCZMAOXLAIYRHPYLYRKWVEVCKSNTGMXGTJBVQYVDSVRDIHYDZLETFJXCBZTLCEGXOJDHUERGYGOHYSAILDTWZGKDUUQPDUKSZESBVMMENRAIFXHANTFPECKVQRFOQHITDWXIYMBCRGOMLANCOJKIQUKM");

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
    msg.setTimeStamp(0.441529136047);
    msg.setSource(31802U);
    msg.setSourceEntity(242U);
    msg.setDestination(12965U);
    msg.setDestinationEntity(29U);
    msg.timeline.assign("LUDUFZIMXPCZQTXXHYVLKDFZRBKUXYXNBXMVIRZELNLNKUJIMEAOBIPVAMTFGWKTGZYBJYKWIACGUEHNBEKFQCTDROJSJWYUJWGNGCFROAJZQDVPOPZWJV");
    msg.predicate.assign("VTZXCRQTPJIXVKKDONTGJWRFLYOVZSMJRPNVGTCQZDUPXIUEKQCJBQPHWUCKEIFLBENOPDTHFVFPTZENFSBILEWIMNQXDPFSSRIVJYNXXMAHEXTMTMWAVWYIOHALAUAEUQD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ECDDGTDBTLZXJJAVJUJJFZWGHYYLZFETHTDHIIBENAZASRHSPPKKEPOCJDTKSCQODOLJEAUGQVPFYUEHVLXSCSOSORMGGHLQLKUPSIIVQIXWVBUUUKHTBKAXPWCFHDRDBNLZYVJS");
    tmp_msg_0.attr_type = 208U;
    tmp_msg_0.min.assign("YDFHQZVZESDAYPXEAPCRBWSNHSAZOEMTYOBTKGOWYDQVNNADYJTCRTDGRMKXVMUCJORKWVFETXMCAJDREZPQDJHRJISLUMOXAONUIEZJPNAUKNCXIQTMJELZURZGCVKB");
    tmp_msg_0.max.assign("MSXRXTGQVIKSMLCNRJFJNSEBCGCWKYOTQCGOHLOWGVPNMYIQGVQC");
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
    msg.setTimeStamp(0.718083791189);
    msg.setSource(24398U);
    msg.setSourceEntity(193U);
    msg.setDestination(40715U);
    msg.setDestinationEntity(104U);
    msg.timeline.assign("HALLGAILIRESZYFHJKLDWNHWKXJTQMWGQDMKXGPSOPNRYAXLOOLUVDGLNNKORUHTQFPTWETKBBAVCOPSMUGVRCHBWJCYESWFHSRUKAQPMREKFNZTUHIYZJOVEHPFXBOQYCWISGBIMJMWRSUDACAFZSLKOBBBNUFZFIGIHIDQDXGMJOTVDIXHZT");
    msg.predicate.assign("FALXXYVNAFOPECMLJYHBEPDCKQGBLGDZAYJQUOJIPFMYEL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RKBROQKNGOQQZXFBYCJUXYETQPFJIPRDWICJRKHLZUPIMFWDMYGEWVRAPSXZUGLIASNAMNVYTCDDCGXNTNTTNPOGXTFCCDKFWFVHQUPEFMXJIYXFAZC");
    tmp_msg_0.attr_type = 144U;
    tmp_msg_0.min.assign("SUGACWZURNFNORFNEILABJBWCAKQOLIITZPRIPMTIMTCRNNZLWLEGEGPZQGCUVHYWOCXZSPGDFHTKPLBVQWKVCSJIXDHMWRNYKSVBPVTMJXWXXKERASUZBTCBOGJADUODAQNJIEFL");
    tmp_msg_0.max.assign("TZEMFRLGTCJJNXDSSSCABCFCOCDNBAEXXUFVFLVESOSIPCYWVNQXZZGRYAPHWCQQPKKJOWBIIIHDOOKGYAURQRNQJHQAIMEVYEDVWFGYDATRNEUHQJADSWMMIPKPHNUYHOGBEDNLKCXMPNFWARDOPVGMTQWWL");
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
    msg.setTimeStamp(0.231105635603);
    msg.setSource(176U);
    msg.setSourceEntity(223U);
    msg.setDestination(43538U);
    msg.setDestinationEntity(113U);
    msg.timeline.assign("KONPXECBWKBFYTOQCUKLWZPZCAHUKWJNBYWCOEQFZCPQSMSTVHGDSVTPVNHMUGHZGVBRFQASYIYETUYDWEJXIWDDACUFRYKISBSUEXAZIVLCITIJAMURNGELHZZQTZHTANOBBFGZTTCKYADXJJAFCMXNUPXUBDSXVGESPJRQJAYOEWFLLDAIQOPPHILBVSGLLQPOVCFJXMHHGQTVMGEIWKRMNXQSRZRNGOPLLIUYKKROMDRWRHDBMJWOKMJ");
    msg.predicate.assign("JIGIEYVCVVUYRCGQIPSMNLOSLKMCLBLXWMQUIFJWZUAZDCJRBSCQYVYQUSBRETPMGCHGHZGFUTSJXUQSYKSSJKPEJDQKYPQPJENXFSOTTUKACAVDADAHOAEQANICKOZVTRTGWIOBIAZHBBPUORKMQANSRFOBZDXXRDFJWVUEPWDJTLFVFOYPYWFHDXOEMVKCRWE");

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
    msg.setTimeStamp(0.410281280469);
    msg.setSource(50969U);
    msg.setSourceEntity(202U);
    msg.setDestination(27266U);
    msg.setDestinationEntity(254U);
    msg.reactor.assign("JPIKEDYWPFPWILBSRSRBKNXIRMZRFIUBZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NFPRSTANPXDJWYVIZHUVXHUJKOXMMLLPXEDAKQJNEZRAGGLKUXVOHGHIEVSOXJYYFBAXZIJNSPQBKTYMWOBVHTBQMCFDDGLKIYLKHWWMBYLQGNPJIJABESKKGNTYWCCMFPLZFDZREJGTCCHSCURFLURHQSPACYS");
    tmp_msg_0.predicate.assign("PCLSJAXYIAJNATXIUYZZKOJGBBEOVVNKSNHJVLNQLAVQEFJLMBXEYCTTNCLXHOOFCDOWLGMFRDXRURGPRWIRBZJXPYYACIXMWTCHJDQIU");
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
    msg.setTimeStamp(0.832246567988);
    msg.setSource(6108U);
    msg.setSourceEntity(220U);
    msg.setDestination(47810U);
    msg.setDestinationEntity(120U);
    msg.reactor.assign("SDNZPTBVTMIWFJROFZBYMNCOIUQBDHCYNDHJGNQPJR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FRLWGEEEAHJKQTSFMVJOALDNAYTGTYNSMTOSVRYWYWCXZNFRATOVLFFBCXTSSEOYJLRLAFRBZABDRAZPFSCGKJHPSJHCHOXINMMEUVQDBXAGLBBZTQAYWLUIXPCMJDKQWIEDTSMCVXOKGMHZOPUKEFMDDHRECRWJZUBHUQLEPGOVIOVVJ");
    tmp_msg_0.predicate.assign("SLNOKJJESXDKIWEKRNPRBIBEUTJPTHEJGJSNGALHTYTVUMXAOWSBERVXKXIVZPHRMHCGJNFYQHUZANCYGLOKMYDWUTWEUFAAHLWRXLVYBAFPBWDGODXUPRYMUICJRVOQKQEVYNLHJTMDFATIDTXPDQCZVVQCVWCXQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KWXSIGMMHJWTDTPNJCSZQUEWGCHSFEXVLIZVQDSLDYLWGEAMDPLYUYIJHBQJSHTZOKHBFGFWANG");
    tmp_tmp_msg_0_0.attr_type = 71U;
    tmp_tmp_msg_0_0.min.assign("ZYXVHHZSYUBEKAFSZCYJIFKKPWVNGBAMPOFUQPYKISBPAZFFXQWMXWGNNTTERKFDIJMLJUFXSMSYDDHKEDGJTEFLZGORITVXRDRAMCOJCBYTXQWVAXRAVINLMRUEDKQJBUXCUPPVECCZXDYDDELWDGMLHBTAWLIPYQZYOQNRIGLUUEOLRCAPNGRVQXTNZVGNJMHZINHOGFOWCIBIQSSTCJFYHPSUPOVCWESJOKKRAQHBLUSGZHJTOKMVWQL");
    tmp_tmp_msg_0_0.max.assign("HTSUFJHNUMYHZZCGUSOQZMSNPCSIYOJENFGDFHTALYXTFKHRNMRMJJOJBLPQPBBODFHGCKFFIEEXXDRUFZBBZXGMLCDWVYZATKIOSWWNTHVYANYEXHLIPUCQDLUTJVCSWWWQASIOBD");
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
    msg.setTimeStamp(0.141303127431);
    msg.setSource(23601U);
    msg.setSourceEntity(98U);
    msg.setDestination(11253U);
    msg.setDestinationEntity(111U);
    msg.reactor.assign("URFCAOTIIPDUPUSWKYZEBPKBDETDIXNLYMLJJFVAUOOAPWIJUUILIRGKWLHIXTPFBPAZOSVQQZBNIMWLDXWTYNXEDCCREOPSGLFFEVYDARFRESQXAHBFYHTVCGIOQRXOSMWQNKJPCHYBMMMPNUNUYLEOQELKRQYVMDHXDBEXSYWKNHKWCNHBGJBYJCXOVAVWMTGFHZHFJWKTLCQVJSCKMMQDARSVAGATUZKIZGZNDGVZTERLSG");

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
    msg.setTimeStamp(0.950494145984);
    msg.setSource(46707U);
    msg.setSourceEntity(194U);
    msg.setDestination(12849U);
    msg.setDestinationEntity(211U);
    msg.topic.assign("GJTOYPDDKZAWSB");
    msg.data.assign("XGPWRVYOPCGFFDVSDRXNESXNFACYPRIBOGDKOJEUWTSNZZCVAQHSWLNEKMGMEMHNABFQLHJBLIWHHCXONDSOYMEBIKNRGXEUNUFSEYCPLDRWTZQALALBEVZHHVCOAGUGSULMRUOUDAAZFWQQXEHZTTWXNPQAMDJGQCLBRIRDFYVYPTXWEOKZDSQMQKVRJKOFIOBJZYPFUVHSCJZ");

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
    msg.setTimeStamp(0.411322415651);
    msg.setSource(9545U);
    msg.setSourceEntity(221U);
    msg.setDestination(62429U);
    msg.setDestinationEntity(91U);
    msg.topic.assign("QXNXFYYTSOVYZEJDJDOTFTHMFCPYKCSLEATEZLJZERKHSUBKPUIRIDMJKLMMZWRQSGCEYETNFEGQJWJPFDBKAFNWUVCACNPHARBJGPLIOZBGWXPKIBOLEANCQTVQGIBGBFUZWMQZQIDSUCMYKLETAXUGHMASEVYPRWUWBHNXBOADCZJGIOYVFTLVPYRBDQTIFRDGZOWXNAMWKMXCRFVVOODSXULDLHGHYIXSPINTSMJWOR");
    msg.data.assign("ROIJUSWTAZXOXKYHNPNBBNWCOKPPEGRSFQCKYMPDOLVJQAHUCIEFENSYYLONESTIQQIXQSKNOHLDAGTMYECUTFGZTEPPFUXTAVJAFFYYRJZNZEMPDZSSCLURYGQLDGIIWEDFGCJWUHMHKLZEBXIAVCTWFDRLJBVKOBXGPJMKCQBZZFIOYDMSXNPJSLADRBTXKIZQUVYHQ");

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
    msg.setTimeStamp(0.824113175598);
    msg.setSource(12466U);
    msg.setSourceEntity(110U);
    msg.setDestination(38195U);
    msg.setDestinationEntity(223U);
    msg.topic.assign("HUMWJGOWBHNJKEFFHOVTIMSOUEZVSJMAPLGZOXZYXBTWAYCDQRKZBQTYCVJMNAUAVFNAXXHYNUFRFNCKMITOGXYDSMWEBWCEDLPRRATIQKHCBWELBXZLUUQBGWGGTWMUJDNDDIQUDZHXDXSISPCFEWTKEPHOYFKTCC");
    msg.data.assign("WKBXNDHUTRJZJTJHXCPVMSNYPJZKXZZNSMETIWSIDRFSHWMVRVOCYULPJYMQVDHHAIONHRAEOYKGOZMEPEIQUJCPCGLGGRIPQRBLCHNOSONSCEWUWDKQZKYKBMSUSTNNAFOJKOQDUFDJLAZPWCIKLBSFBKMIYORPBVLDQXH");

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
    msg.setTimeStamp(0.419652220576);
    msg.setSource(4830U);
    msg.setSourceEntity(186U);
    msg.setDestination(27582U);
    msg.setDestinationEntity(40U);
    msg.frameid = 81U;
    const char tmp_msg_0[] = {65, 0, -26, -112, -63, 106, 32, -113, -78, -62, -35, 60, -6, -86, 15, -44, -71, 55, 76, 66, -12, -15, -120, -60, -33, 21, -100, 8, -66, 9, -109, 6, -19, 76, 54, -43, -114, -30, 0, 34, -115, 37, 90, 56, 75, 18, -24, 79, 27, 93, 43, -60, 85, 91, 103, -50, 77, 66, -12, 93, 65, 75, 64, -103, 70, 42, 30, -20, 72, -42, 61, -74, 55, -111, -19, -106, -17, -69, -83, 28, -2, -111, 92, -100, -101, -31, 126, -90, 118, 59, 53, -15, 50, 77, -1, -53, 83, -87, -86, -128, -100, 104, 104, -103, 4, 38, -39, 10, 78, 107, -104, -37, 126, 85, 75, 76, -118, -75, -74, 78, 121, 122, 44, 107, -62, -12, 77, -19, -63, 99, 64, 77, -121, 95, -91, 25, 81, 90};
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
    msg.setTimeStamp(0.182347272596);
    msg.setSource(35638U);
    msg.setSourceEntity(203U);
    msg.setDestination(37066U);
    msg.setDestinationEntity(43U);
    msg.frameid = 225U;
    const char tmp_msg_0[] = {66, -34, 93, -105, 44, -82, -86, 78, -26, 59, 89, -26, -11, 7, 79, 50, -105, 74, -82, 33, -27, -90, 119, 27, -18, -123, -21, -64, -81, 35, 94, -54, 32, 60, 99, -44, -101, -117, -67, 78, 121, 24, 83, -36, -50, 8, -47, -80, 106, 32, -29, 111, -93, -87, -88, 57, -85, 57, 16, 102, 51, 26, 14, -61, -43, -63, 91, -72, 115, 33, -27, -62, -36, -89, 77, 97, 79, 33, 98, 79, -114, 5, 37, 57, 41, 88, -127, -101, 67, 121, -37, -84, 68, 104, 66, -45, -127, -117, -68, 104, -39, 58, 113, -18, 52, 104, 109, -81, 38, 64, 88, 60, 20, -15, -128, -45, 13, -75, 25, -85, 78, 0, -55, 69, 19, -111, -110, -23, -11, -98, -55, 19, 16};
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
    msg.setTimeStamp(0.78722227387);
    msg.setSource(47292U);
    msg.setSourceEntity(213U);
    msg.setDestination(63219U);
    msg.setDestinationEntity(190U);
    msg.frameid = 91U;
    const char tmp_msg_0[] = {21, 45, -117, -62, -102, -75, -48, 123, -2, 99, -114, -50, 117, -88, 105, 26, 96, -104, 61, -41, 46, 44, 69, 64, 89, 1, -53, -111, -113, 107, -53, 79, 98, 25, -37, 96, 121, -63, -97, 84, 44, -14, 26, -38, 33, -87, 29, 101, -36, -98, -71, 123, 19, -39, 15, -101, -124, -31, -4, 60, 36, -27, -107, -7, 64, -26, -12, 20, 42, -58, 88, -30, -98, -73, 87, 23, -77, -37, 71, -34, 80, 8, -50, -68, -20, 98, -35, -12, -21, 15, 69, 45, 93, 57, 119, -18, -61, -19, -94, 111, -31, 35, -34, -59, 113, 52, 110, -89, -113, 0, 107, 110, 19, -8, -114, 89, -89, -53, 118, -76, -42, 94, 90, -79, 94, -114, 59, 47, 38, -78, -102, 124, 47, 53, 45, 95, 46, -5, 116, -113, -89, 70, 94, 62, -56, 104, -122, -57, -2, -58, 11, -24, -90, -91, -65, -63, -72, -3, 38, 75, -26, -20, 119, -66, -65, -15, 95, -46, 23, 94, 16, 85, -70, -78, 37, 63, 64, -123, 2, 20, 101, 57, 24, -33, -18, 37, 79, 20, -14, 87, 76};
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
    msg.setTimeStamp(0.29835483386);
    msg.setSource(56361U);
    msg.setSourceEntity(151U);
    msg.setDestination(50940U);
    msg.setDestinationEntity(139U);
    msg.fps = 106U;
    msg.quality = 28U;
    msg.reps = 63U;
    msg.tsize = 147U;

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
    msg.setTimeStamp(0.180611021246);
    msg.setSource(14537U);
    msg.setSourceEntity(102U);
    msg.setDestination(31503U);
    msg.setDestinationEntity(70U);
    msg.fps = 12U;
    msg.quality = 219U;
    msg.reps = 122U;
    msg.tsize = 149U;

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
    msg.setTimeStamp(0.925048531275);
    msg.setSource(25509U);
    msg.setSourceEntity(227U);
    msg.setDestination(17989U);
    msg.setDestinationEntity(205U);
    msg.fps = 212U;
    msg.quality = 218U;
    msg.reps = 177U;
    msg.tsize = 246U;

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
    msg.setTimeStamp(0.538186367462);
    msg.setSource(14749U);
    msg.setSourceEntity(184U);
    msg.setDestination(45388U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.886907387271;
    msg.lon = 0.944814422846;
    msg.depth = 150U;
    msg.speed = 0.271609951768;
    msg.psi = 0.44496952554;

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
    msg.setTimeStamp(0.600355154978);
    msg.setSource(51557U);
    msg.setSourceEntity(168U);
    msg.setDestination(1007U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.574348264224;
    msg.lon = 0.339673385938;
    msg.depth = 164U;
    msg.speed = 0.320557208276;
    msg.psi = 0.235720531116;

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
    msg.setTimeStamp(0.76751529589);
    msg.setSource(37912U);
    msg.setSourceEntity(53U);
    msg.setDestination(11129U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.18164625332;
    msg.lon = 0.185504037759;
    msg.depth = 181U;
    msg.speed = 0.0304921634459;
    msg.psi = 0.567238606013;

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
    msg.setTimeStamp(0.222772104804);
    msg.setSource(13289U);
    msg.setSourceEntity(87U);
    msg.setDestination(26743U);
    msg.setDestinationEntity(251U);
    msg.label.assign("IQMVLSMMBBPQTCSGEQOTKTTGKICOVDLXSZLKZNMTBMVRBBCQZMFHUYFZQUYOUKECGBPHJTJARCXOSERPBDXYVOQRTLWUFMDNTAULHSPFUSWVHSHRPVDUPFSDCDQPXEZCWFKHDGEKCLLKTYMCIILHYNJIXKMFIVUBTXDYNIAORSJJGYFEUXNXHZGZAAGLLHXJQXFGPIJDYPNEVGUARIBARRWJVNYPWKVFWGNAOOWZNQCHJWIN");
    msg.lat = 0.046249335666;
    msg.lon = 0.446114619427;
    msg.z = 0.903738712885;
    msg.z_units = 141U;
    msg.cog = 0.778361904571;
    msg.sog = 0.441440729362;

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
    msg.setTimeStamp(0.900896494436);
    msg.setSource(34098U);
    msg.setSourceEntity(208U);
    msg.setDestination(23229U);
    msg.setDestinationEntity(200U);
    msg.label.assign("WMDLVOGFRFDVVWWVXUNYMPACREUTOXQZAFZDKKUK");
    msg.lat = 0.521015451595;
    msg.lon = 0.744703563717;
    msg.z = 0.867660081003;
    msg.z_units = 159U;
    msg.cog = 0.254095503218;
    msg.sog = 0.417234456718;

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
    msg.setTimeStamp(0.172544994276);
    msg.setSource(32951U);
    msg.setSourceEntity(120U);
    msg.setDestination(55079U);
    msg.setDestinationEntity(7U);
    msg.label.assign("MKZPPPJNYHZWNYJDTMNQEPVVRBRJOHUSR");
    msg.lat = 0.710315621583;
    msg.lon = 0.986617383185;
    msg.z = 0.91990687586;
    msg.z_units = 117U;
    msg.cog = 0.700045130643;
    msg.sog = 0.912616618552;

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
    msg.setTimeStamp(0.120695327117);
    msg.setSource(181U);
    msg.setSourceEntity(18U);
    msg.setDestination(46442U);
    msg.setDestinationEntity(167U);
    msg.name.assign("FUPVTGTWOPBBLSOOVKRZVUEHYJACPZFUXMMSIQGDXFYKAQLMLNJKCCSPXCRRWQJBDRGSWJSYAQIWKIFSUBUUIFRUWGGAOBTZYZGWAQNGYNCEYDCMWUKRNLBXSCFLDMCDBZSGAEK");
    msg.value.assign("LZUSXPRBIQCKGKYSHNFWOIBRNFPIGE");

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
    msg.setTimeStamp(0.907975217838);
    msg.setSource(46110U);
    msg.setSourceEntity(93U);
    msg.setDestination(55049U);
    msg.setDestinationEntity(186U);
    msg.name.assign("CVWSWUKXFEYRIKUVARGSJLLVKTPBIKXMPQDIZIWEDFVDPDKPJPOTZXAJNPTIMFVWOBAAHTXMIZQNKULWELOZCWHHCYVQLORLSXVZNGOFQXNMTOYRRATEXJSHFSNYYMMQHDSJDBGGJBNKRHMWXYVYEAFYXYGPQCSGFUVURICJWSTGZBAHTEJBHFZBRCDTGBUDFQZWMNZJZRVQOWJOGIOHCNGCAXMPKASUMIYFBRDUNHCKBCQLEPOTPQ");
    msg.value.assign("JIOZQBZWDORYGGCBABKCGLDG");

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
    msg.setTimeStamp(0.665377983964);
    msg.setSource(43863U);
    msg.setSourceEntity(193U);
    msg.setDestination(5007U);
    msg.setDestinationEntity(229U);
    msg.name.assign("PFFDEAMZNSUMTCALYQCJXOUQPXVOFONMNCNTTFLVEYGLZUINFNIHISPXLWOSKFHKFQMUVMRXPURGIKKATJGQHWGRVRXYNIBBJUHZBDXSZIOQMBWKJOMARDYETFYJHJEDSQTJLWZLIKBCLPVHWDKAEDYORHGWCLWCTMPTCHSAGUTXKLXODBXBUMOBYDAPWHSWVAVYFSEQRYABSEJOCUCEPFIIHYNQGWPXMVDJANGIBQZGUKQLPR");
    msg.value.assign("NYHOPRDFSYPFIBUWKFKQJQAYGJXRFHTTVUBILAALAYRNIQVNTEUSMXDNMUXTHZCMUROVBYCPZMDGIRPXGGDCLDDRNDKAIBVMTJCHDNEJNLSZGVULUIXIBHOYEUWCWFWIAVOQLSPBPGZWQSJYGAIFYOZUSPSHARJWOQPQEMQVYLHZJKHKWXGXGVRXZJCCTOEMNJKBDZODFWETAEWFPOXSCMHLERVTGCVKFBRQZYHCLTNMKLTKUXOQ");

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
    msg.setTimeStamp(0.17972153056);
    msg.setSource(23616U);
    msg.setSourceEntity(228U);
    msg.setDestination(14584U);
    msg.setDestinationEntity(46U);
    msg.name.assign("TXBFXPBYPXFGEREQRCCJCFUSJFXLDNNTQZZXWELNNYOMOYGZJIRDKNDNBURGPDXTKMJJLYIXNPRUAWWDHYLSFEPNKGIESGXWZQVMUQCMKVSAATLBSZKAOXAPHFUYLATTBPHBAIECQQCOAWONWMJYUVHTLRHPFPGSMDIZNLVWZHJODOFMFIDKMQDRCKEAIOFG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TSCQNPFGHYUQVAJTFWITDOKCOOTTDGPQRYRNVNHEPUFQEVE");
    tmp_msg_0.value.assign("NJKORXDHYOAHNFBRNBGXAEKDEHQOXMJBGPKPTYDGRVUHZYHPDFHZRPAQFBBCCRVG");
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
    msg.setTimeStamp(0.23690981377);
    msg.setSource(65530U);
    msg.setSourceEntity(229U);
    msg.setDestination(13247U);
    msg.setDestinationEntity(114U);
    msg.name.assign("AHYDPTGMSXWFFAZVLZYMJOYJVNNJEBZMAKGESPCKOGNSWBVJRJYTWRTOYQXNSIFQHBJUPZUXUYRBOCQVWMGLKLSDDDQBTTONYKPKYHMFCXAZWCGDVKAURDIDZHAIJZUSQQZIWLVJEPTLZDCGHHIPKFRPFSQHORYAQNIIWAPOBENVGUDLQAEDEKUPELFCXUGNBOV");

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
    msg.setTimeStamp(0.4126112942);
    msg.setSource(12995U);
    msg.setSourceEntity(89U);
    msg.setDestination(78U);
    msg.setDestinationEntity(71U);
    msg.name.assign("WVNMFNZXJEGGQHPOQMYYFKYRKBUSSUXJLRDVQKMVWCIVILRCADLUSNXLUPWNMGWKEHPNMTQIDBICZSVGFPGEARLEDTJZHICTHKGOWXFEATGPBYKOMSXEDJWGLVORZBKUDXWOPXDEMCQCTBRNJNHIIBZWYNXHZAFYFNLPRWDZCQFYFBUJMYHMGKCLSBCHQUBDPOTSVTECPRTSUJDUYTAZXLAVAAQNOMWFS");

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
    msg.setTimeStamp(0.822696174148);
    msg.setSource(27340U);
    msg.setSourceEntity(207U);
    msg.setDestination(1260U);
    msg.setDestinationEntity(43U);
    msg.name.assign("KFHWGXEBUTSKJHPGOQDWLTHZHHPCMTJSRQVIDOUIFXYXJBOWWARTULBDQDAVYVYBWKSLAMTAKQINFXPPISLXZCFLXFGNDIQFAPMFJJZQVHTNNONMEYESIJCLZQMWJOXBAHMZSZOBWKZWSMPAVRBZGURYLJVDKEWCUXDUMSJVGPUNJ");
    msg.visibility.assign("GFORAMZGTKJKPVKCDDWKKYOPOELNONZFCGOMVDGYNXHBRPWBQSSILFTBGHBNHLETKMWPQJLRRQBSHJXJMZRASZVQYEHGLNIROTTYAYFQPXDPHWXIQZDMVQEKAFVDUKUKIMUTLXWVSTCQEIDUMQXSMJCYXVFBBZUWWLYSNFNRXJGWNR");
    msg.scope.assign("UWMWKUSKNCOXGHSVRFPSATIFMAHBVKMWZNYNXSSOUARUHJCQKVUTYBJQIREMEBHSYTSVLTLPCVLMFZEHZPYPYBQHTRHYQXDZJYFSEKQFUOUQNPVFKCFAZIQDNKGAWXBMCJGZMTDIEWCLWORLICUISBQIRNQVCDRPVXPDMPGOAAJXEYVUCLNOZABZIZEJNTETEDLKGNKXHHRLOBOJBAGJXDDWDGIFUKEOLBSVMLFHYWZTCGPMJ");

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
    msg.setTimeStamp(0.831224530196);
    msg.setSource(42541U);
    msg.setSourceEntity(103U);
    msg.setDestination(8309U);
    msg.setDestinationEntity(11U);
    msg.name.assign("GRQZTVVMTVYOPLJSPMPZDCIBKWIWXSSFYLJESTGTEMYKOCIXFNOATDVHLMODOVPEFPRSUNQUH");
    msg.visibility.assign("JTNCKJVVZZFPTFZQJRKNKYHUQEEBNFXFMWVCQTBDPHZUWVSYWJWGGHBMWYGJITMMOLNIGETMEUDZXWRHKCRVLWNNRJXVADGAIMEDKQBOIXZLCILHIIPIEMMNOXSYJWAHUQGEBPYMUCHLDKYCPBNKXXUFDAFGDRSJQSPDGGVEVALSLXMPALVQN");
    msg.scope.assign("KENCOIUQHCVTJKBYJBSNPPYFYRDMAWIHAQBMWEMFCZMJNLGNCIAXTZYSGBGLDPSVDAXGRKMGLWGFAQNHXRKPUBIYEXPFDUBZCKYLKYWODTGSNRPZLE");

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
    msg.setTimeStamp(0.240584015561);
    msg.setSource(4973U);
    msg.setSourceEntity(67U);
    msg.setDestination(49376U);
    msg.setDestinationEntity(58U);
    msg.name.assign("LEOALJOGYKMXLQDGUJMZQCYLUZASRVMZPSVWZFGLCATYYIUHUJZSPKMCVNWISIGTUWOYCTARAPJQKFPNOJDAKMWNBLBAXQABKBUWZHZGPHTYNRSRTKJQJEIFVWQSEGBDROKUDZHBJRBDSDXRESEZAYFJIFTNDFKTJVPXHISRVMHFAUFN");
    msg.visibility.assign("NHRNPFLCGHEUWTFLFEICDHEJJXCJGMVNKRQJIKILPTBTFCPXNYSWIPVAJDTEKHZODDZEIWJWAEDSJOUFHRVIGZQCCFIMFSVYZBEONDQWAWVTZKTGCSHURXNWUNDLBXBIXTOSJQLBVVWDXTYM");
    msg.scope.assign("UNFAPWWRAVUQSXDQQNJLYAYFHLGSRWMYGWDCUYTZPLVIEJSDLVHXQOHEQRFRFBOWOAYDG");

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
    msg.setTimeStamp(0.772909639565);
    msg.setSource(58547U);
    msg.setSourceEntity(33U);
    msg.setDestination(47105U);
    msg.setDestinationEntity(130U);
    msg.name.assign("MZTETGVEHFXKPLFMZWKBQZDXWLNORVAFWIYKRGYOGYBEHOPPBAMLHV");

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
    msg.setTimeStamp(0.963256726577);
    msg.setSource(27057U);
    msg.setSourceEntity(7U);
    msg.setDestination(16903U);
    msg.setDestinationEntity(3U);
    msg.name.assign("WJWWGLZJVMMTKUDPZZGHVHHHVONQSJDYADZCKBCIZLTAWAZYYLAQPQWREQXMDJILCRFJMRGJIXBEGLKXXTPNRXJOTCPBIWCSEWTFNESKIAYMXUBEF");

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
    msg.setTimeStamp(0.570944082645);
    msg.setSource(22984U);
    msg.setSourceEntity(69U);
    msg.setDestination(5967U);
    msg.setDestinationEntity(91U);
    msg.name.assign("ERDZJPQEWMGHWKUATSORCMDEQHOOQWAUNPXFWNZBHJALSGYZYVDIPTVHJDMRRNIWEVINKGTBHIWFSVCEUREZLTUQXZHIYGDQVBEJOKUXTINSKJHFBXEGQDJZLSJOPYFUGYBCWWTOFIGKFVGCMJOMXALBIZEUTNLADFOBHILMXVPYDLSNQLCUQFHMKZRJDBXNPCGSREUKPRXNTQTOZMMHFCLQCONMTAIVYYUJVKRYAYAKWBFCSPVDPLWXKSCX");

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
    msg.setTimeStamp(0.567432204418);
    msg.setSource(62991U);
    msg.setSourceEntity(48U);
    msg.setDestination(35029U);
    msg.setDestinationEntity(144U);
    msg.name.assign("IHTZVEZIRRYWGXORRVVSUXUUAAPKDKCDCPOLIH");

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
    msg.setTimeStamp(0.332026378198);
    msg.setSource(49098U);
    msg.setSourceEntity(37U);
    msg.setDestination(17432U);
    msg.setDestinationEntity(48U);
    msg.name.assign("GMJPABFZMYDWVCORKVMPPOQHSKUQCSXGTMLJFCJNIVRIFUPZPPDKLZYKGTISMEQUQSARUYUMDEJHKWZXROMWUUKSSQBHGCCKMJATMQENVBLZOBGFOQPAXULNWNSTAGXZXWJDFINVVQUIWVWXERRXABFVFRNBFRKYZEJPYYRCCTSYAKTSXEWGZLCLDEFWOGHJWEQZZHDHHPVTNBHYXKN");

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
    msg.setTimeStamp(0.555489146905);
    msg.setSource(13936U);
    msg.setSourceEntity(234U);
    msg.setDestination(59581U);
    msg.setDestinationEntity(33U);
    msg.name.assign("LEWCESQCRAODOTDIMEUXXQQPEIMJQXIMEYQTBSVAPTTCOLKJBVFQUWSBSFZDMRHSBUBMJGTAWKPZGZIMVINUFZAGJHJXEOUKIJKXKHCQNVITREFGLTAGJQSWCFLIQYSUZQNEOUXHNLZPBWCNBNHPDSJKOTXBBGGLEWYRGRPDVLKRNPWOVZDHOURNYYGAGHFMELMSSCVYWAX");

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
    msg.setTimeStamp(0.92772148716);
    msg.setSource(9460U);
    msg.setSourceEntity(50U);
    msg.setDestination(36358U);
    msg.setDestinationEntity(120U);
    msg.timeout = 3399156141U;

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
    msg.setTimeStamp(0.992549671207);
    msg.setSource(11151U);
    msg.setSourceEntity(148U);
    msg.setDestination(209U);
    msg.setDestinationEntity(142U);
    msg.timeout = 2223255363U;

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
    msg.setTimeStamp(0.120880876011);
    msg.setSource(27583U);
    msg.setSourceEntity(224U);
    msg.setDestination(59017U);
    msg.setDestinationEntity(232U);
    msg.timeout = 113796386U;

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
    msg.setTimeStamp(0.379957059901);
    msg.setSource(52723U);
    msg.setSourceEntity(222U);
    msg.setDestination(28498U);
    msg.setDestinationEntity(151U);
    msg.sessid = 4024282409U;

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
    msg.setTimeStamp(0.549949287768);
    msg.setSource(25498U);
    msg.setSourceEntity(58U);
    msg.setDestination(33093U);
    msg.setDestinationEntity(43U);
    msg.sessid = 3179068620U;

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
    msg.setTimeStamp(0.518149732275);
    msg.setSource(9187U);
    msg.setSourceEntity(187U);
    msg.setDestination(23302U);
    msg.setDestinationEntity(181U);
    msg.sessid = 1836794499U;

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
    msg.setTimeStamp(0.63033041442);
    msg.setSource(45803U);
    msg.setSourceEntity(82U);
    msg.setDestination(32729U);
    msg.setDestinationEntity(15U);
    msg.sessid = 567654694U;
    msg.messages.assign("JPQIGRXNCEYBVMXNRSXGUNBWXYRUSPVGLMKEJBYIDOYEMZQLEEQAPQAESGDBFPKDXTRAOGAJNURCMHWFCJKKGLRIXJYADWGQHAJLCKTNCZRYTFYZCDPFKLVMCNHPLVYRWGTOHSKHVUOOBLWVKBCSRFMNWBEZDJXXGVRTQSQKAUOZBSVHBWCPAMZHOVIKXAHTDSQEADGIOZWUQSQFLWPZSIMLIOZUPUMTWPFHOYFFJTJZFUNEIYJTUM");

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
    msg.setTimeStamp(0.2425398951);
    msg.setSource(53335U);
    msg.setSourceEntity(238U);
    msg.setDestination(31132U);
    msg.setDestinationEntity(101U);
    msg.sessid = 279774220U;
    msg.messages.assign("YYTPTOMGFTKQQQIGNMTGKTBDZBBOPIZPZHCVGRYVAUBPFUHNCSKVSXVATFSMRSIQMDUHHDPZJPUJILFQRNMWYXLZWPQQEOZYEZWIANRREJRUSUFUPMFLTVFRVXAMKDNDWRRVUGAVNJFZSDJYHADQSCECANCOJXJNFXQLBAOXKQXJPWMCUXCWWIIZREGHEBVIJK");

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
    msg.setTimeStamp(0.790766890063);
    msg.setSource(43787U);
    msg.setSourceEntity(171U);
    msg.setDestination(46483U);
    msg.setDestinationEntity(1U);
    msg.sessid = 2988100200U;
    msg.messages.assign("VVCSNOULVBFLPQGTSRRXTDEWOJBEWTYNZAZBBYJOSIGVETUPGEREVQKZLIBYQDLOJFCFZFLHMMIUNMCESXIBDQCZLPKTOHLPRJKADKGAIJTNNMCIDSPXMCEBBHXLRMWASNRXBYRUAAKMEGMWNFQWVIXVYPZJZHUKXUTFF");

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
    msg.setTimeStamp(0.269543832776);
    msg.setSource(44710U);
    msg.setSourceEntity(248U);
    msg.setDestination(20660U);
    msg.setDestinationEntity(46U);
    msg.sessid = 3620704415U;

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
    msg.setTimeStamp(0.472707552509);
    msg.setSource(4787U);
    msg.setSourceEntity(31U);
    msg.setDestination(38870U);
    msg.setDestinationEntity(160U);
    msg.sessid = 2582554276U;

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
    msg.setTimeStamp(0.668413750029);
    msg.setSource(27033U);
    msg.setSourceEntity(12U);
    msg.setDestination(64741U);
    msg.setDestinationEntity(103U);
    msg.sessid = 2145965432U;

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
    msg.setTimeStamp(0.0279049685186);
    msg.setSource(57578U);
    msg.setSourceEntity(120U);
    msg.setDestination(44527U);
    msg.setDestinationEntity(239U);
    msg.sessid = 2003318693U;
    msg.status = 126U;

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
    msg.setTimeStamp(0.675418825007);
    msg.setSource(3740U);
    msg.setSourceEntity(118U);
    msg.setDestination(40901U);
    msg.setDestinationEntity(14U);
    msg.sessid = 2100137688U;
    msg.status = 171U;

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
    msg.setTimeStamp(0.396048999334);
    msg.setSource(43690U);
    msg.setSourceEntity(29U);
    msg.setDestination(29402U);
    msg.setDestinationEntity(27U);
    msg.sessid = 3711999133U;
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
    msg.setTimeStamp(0.831025219651);
    msg.setSource(63565U);
    msg.setSourceEntity(183U);
    msg.setDestination(53457U);
    msg.setDestinationEntity(37U);
    msg.name.assign("EITKWVJYICPFWNJXQSKFGGCTXKDDEFSJOXUACUBBMDGPLXTIYRJXPNTUAGSDJIWQNZGLETZSUWOVLISYWHBOCHVCBNNSPQFCTEHQYGBDAYXDLRCQCJINVUIRSMPHFIOODBKNHMEMPQNPLGKHOTZTFWVOHUKFMZROSMEIPRVPXCYKYUQHUQGOGMRLLQSVNBJAHZEZLFBLWVTEUUALSGFZPOYZMIJNMRYDEAKAHBXWVRWYAZAVE");

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
    msg.setTimeStamp(0.666356469818);
    msg.setSource(18254U);
    msg.setSourceEntity(48U);
    msg.setDestination(55495U);
    msg.setDestinationEntity(207U);
    msg.name.assign("CQYVTEXJOQTQVGHMODRFHFPWWMRRLQK");

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
    msg.setTimeStamp(0.0911975054434);
    msg.setSource(44020U);
    msg.setSourceEntity(85U);
    msg.setDestination(7217U);
    msg.setDestinationEntity(108U);
    msg.name.assign("JSOPFMOAIQDNIRYANUUUDKRDRURBQIWCGUCLCZEUKXKEHVLAJT");

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
    msg.setTimeStamp(0.302277052984);
    msg.setSource(50980U);
    msg.setSourceEntity(237U);
    msg.setDestination(7575U);
    msg.setDestinationEntity(52U);
    msg.name.assign("SWXPCVRLRFMRNOHAHXQOQLFBQDHYCUZAWYVQHMVNPGPLETAOTREPLLUYGTEBGDKILKSDMWFDOIWVTUFFTVFNGMWQYJZRDPDXSHKDAIKWLEBAYYHBICXBQUVIGCQAZPXUWJ");

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
    msg.setTimeStamp(0.72693444298);
    msg.setSource(51758U);
    msg.setSourceEntity(87U);
    msg.setDestination(60461U);
    msg.setDestinationEntity(202U);
    msg.name.assign("NBMMRWLOZDJGAUARMTBQQCUIPYFIJJAVUHBNDRQOYGHSIYQPFGAHKSYDLAZGPNBIVHLDPENJJSYCIGHHBFZCCMPXZZEYIBYOTBVEFASBDRJLSKWJDSWZUILXOXTTQRDWDIULICBRVUERGZWWEPAKEKOEPXMLSITMYNAZKCZVHCHKFXMNQKVCOTXW");

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
    msg.setTimeStamp(0.864912180208);
    msg.setSource(4220U);
    msg.setSourceEntity(126U);
    msg.setDestination(49022U);
    msg.setDestinationEntity(253U);
    msg.name.assign("CTUATNLEQZMXRDXCLMQJDSBDUYSJWMOXKRLDGFGNTULHJNEITEEVARGTPODKXJBAKFKIQCBYGLWXOCWRVZHPWABPRAFKN");

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
    msg.setTimeStamp(0.970331436155);
    msg.setSource(63303U);
    msg.setSourceEntity(50U);
    msg.setDestination(322U);
    msg.setDestinationEntity(30U);
    msg.type = 24U;
    msg.error.assign("PZWBDRJONLHZCMGDZCFMGRJAINDTXU");

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
    msg.setTimeStamp(0.724632250329);
    msg.setSource(19706U);
    msg.setSourceEntity(33U);
    msg.setDestination(64124U);
    msg.setDestinationEntity(42U);
    msg.type = 59U;
    msg.error.assign("DQPPDFNRGZRGJZYHOMGUFHSESMMPYCXGPFJVLYUWFWBVIAQQEBCJAXJZDMCECLROQDSUOZPHJEEKQSGRZGXZTJXAJNWWPWCKMHOBRBYYLLCBWSKXQLULHVTXUWELCCUINOKA");

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
    msg.setTimeStamp(0.276454499555);
    msg.setSource(38198U);
    msg.setSourceEntity(105U);
    msg.setDestination(41001U);
    msg.setDestinationEntity(7U);
    msg.type = 79U;
    msg.error.assign("LIBCKGIVCFICJLGXKKWNUZAPBLCWOAAXNBMAGKEUXPTSYDIPFXJNPZCSTFGJVSTKISBYILMQRBNFBPBHDQNHPJJSYM");

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
    msg.setTimeStamp(0.890907902625);
    msg.setSource(59030U);
    msg.setSourceEntity(90U);
    msg.setDestination(29602U);
    msg.setDestinationEntity(46U);
    msg.seq = 23673U;
    msg.sys_dst.assign("DGNMFEHGTXKDDCRMMKLXZCPATUHNMJYUABJTWFSROHONKWKYJVEWGIZVDZSICVKIVZSNLQPSMIAQETZECTECQLEKXPNZRLLNRIVRFGODBSLRMXTPKALGYAMUFXFXAFQYENYBUPZRKFYIHCFJLGRDUWXJVCPZTVHWPKCWOHXAOONBTXEJDSHCQ");
    msg.flags = 19U;
    const char tmp_msg_0[] = {-20, -6, -61, 15, 89, -107, -68, -94, -116, -29, -82, 25, 86, -56, -106, 73, 69, 2, 33, -43, 73, -12, -76, 65, 119, -26, -124, 63, 9, -24, 70, -51, 109, -53, -82, 46, -95, -118, 80, 68, 125, -128, 23, 54, 117, 109, -69, 98, 54, 45, -39, -38, 80, -11, -13, -105, 59, 47, -88, 43, -75, 124, 41, -18, -35, -34, -113, 28, 117, 77, -35, 17, -51, -33, -34, 0, 4, 18, 44, 43, 73, -59, -65, 25, 107, -35, 104, 49, -122, -62, -66, 15, -12, 107, -122, 120, 50, 0, -127, -84, -124, -84, -39, 67, -81, 71, -45, 100, -50, -12, 114, 2, -108, -71, 113, -38, -112, -107, 58, 123, -45, -44, -92, -82, -55, -79, -88, -81, -15, 5, 110, 21, -41, 1, 109, 121, 7, 75, 86, -103, -128, -88, -117, -55, 11, -66, 78, 23, -58, 108, 113, -51, 19, 98, 103, -57, -114, 53, -14, 114, -98, -35, -75, 69, -71, -34, -52, 119, 16, 60, 30, 112, -43, -92, 78, 126, -58, -96, 106, 8, -127, 86, 113, -86, 124, 14, -103, 14, 103, 114, -99, -30, 101, -12, 18, 98, 125, -16, -106, 50, 80, 36, 73, 77, -112, 43, 105, -80, 40, -128, 101, -85, -89, -26, -67, 23, -83, 109, -40, -108, -114, 22, -121, 56, -67, 94, -96, 38, -94, -41, 29, -13, -82, -118, 21, 21, 58, 111, -61, 22, 90, 76, 3, -64, 99, -92, -6, 22, 76};
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
    msg.setTimeStamp(0.767973843311);
    msg.setSource(5811U);
    msg.setSourceEntity(198U);
    msg.setDestination(47765U);
    msg.setDestinationEntity(114U);
    msg.seq = 12160U;
    msg.sys_dst.assign("VATUZVJOFCBTEYIZFNGLPPVYQHKRJBYCFGXWYBOIKDZDTAVJSHQNKVBWHOISGVGSJHPNQXDMRDRSELOUHEQXWJMBEFTEOQWYDMZSJGTPZBJPITWKBQATHKYIMXCBERUUJDIMDALCHFWOVFCGXRFEOKZOUUNMYJQALNMAMWDRNWBIIQVHIULZIYNRCGGY");
    msg.flags = 189U;
    const char tmp_msg_0[] = {-121, 11, -30, 52, -41, 79, -35, 64, -9, -68, 85, -118, -39, 118, -44, -6, -62, -101, -104, 0, -61, 24, 1, 99, -64, -65, -27, -19, -20, -37, -30, 118, 47, -25, 108, -34, 21, 93, 31, 126, 11, 17, 24, 111, 82, 122, -120, 14, -95, 83, -91, -37, 101, -73, 72, 43, -108, -33, 1, -118, 30, -93, -116, 65, -84, -110, -35, -64, 24, -73, 104, -106, -41, 58, 62, 109, -100, 0, -38, -80, -43, -66, 100, 82, -10, 112, 126, -53, -76, 55, 125, -47, -111, -64, 16, -21, 63, 67, -83, 120, 117, 38, 123, 82, -18, -103, -69, 124, -31, -102, -127, 111};
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
    msg.setTimeStamp(0.400093229845);
    msg.setSource(63120U);
    msg.setSourceEntity(221U);
    msg.setDestination(41061U);
    msg.setDestinationEntity(8U);
    msg.seq = 63223U;
    msg.sys_dst.assign("JSYYBVXOJRFDZS");
    msg.flags = 137U;
    const char tmp_msg_0[] = {-123, -46, -112, -2, -96, 27, -71, 72, -59, -89, 7, 94, 20, -107, -6, 50, 89, 94, -4, 47, 17, 88, 11, 90, 9, -85, 98, -3, -36, -84, -44, 48, -78, 68, -106, 21, -74, 12, -31, -65, 57, -33, -127, 89, -103, 63, 95, -83, -93, 82, -103, 43, 60, -13, 71, -49, 37, 62, -90, -49, 42, -68, 66, -119, -123, 89, -65, 61, -98, 32, -53, 26, -83, 78, -87, 120, -8, 56, 14, -3, 125, -93, -57, -54, 83, -67, -39, -23, 112, -82, 76, -34, -82, 3, 3, 86, -57, -100, 81, 25, -53, 20, -11, -83, 98, -99, 113, 93, 60, -117, -61, 103, 55, 72, 124, -97, -118, 19, 67, 102, 104, 34, -10, 112, -64, 55};
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
    msg.setTimeStamp(0.786928628778);
    msg.setSource(60185U);
    msg.setSourceEntity(25U);
    msg.setDestination(16102U);
    msg.setDestinationEntity(10U);
    msg.sys_src.assign("PYDAELPZLRTDPFDDWRAKBHCMKBFYY");
    msg.sys_dst.assign("XKLMRJUMIXNIVGOXRSXOJQRDHTFICUTOHOVLYWOQGPQSIDTOFBHEDKBDIGMPBFTEWUUZBUDJFSQNFULURVZKATGNZPPMEEAXDXTDEVOYLXGSHBZWNGAKAMYVJZCHMLPYRNHSYDJNSKPESTXFVDWECYILOAHIGQCCBTBOVMZAUDWMALTQ");
    msg.flags = 165U;
    const char tmp_msg_0[] = {-66, -126, -120, -80, -32, -66, -45, 15, 48, 62, -73, -40, 0, -127, -35, 22, 37, -55, 104, -23, 44, -77, -92, -34, -97, 65, -105, -121, -73, -57, 23, 21, 104, 51, -63, 114, -39, 38, 121, 44, 82, 0, -109, 87, -65, -11, -16, 78, 6, 124, 82, -85, -15, 98, -111, -5, 72, -81, 110, -2, -101, -73, 68, -14, -76, -70, 42, 40, -90, -21, 32, -79, -46, 49, 114, -110, -109, -99, 109, -84, -5, 64, -109, 34, 10, -109, 7, 91, -25, -82, 79, -34, -47, 71, 68, 105, 43, -51, -60, -128, -18, -6, 124, 50, -82, -99, -111, -99, -2, -46, 50, 65, 36, 33, 59, -51, -26, 114, 95, 77, 81, -21, 30, 47, 19, 105, -92, 21, 107, 64, -44, -6, -11, -42, -56, -116, 41};
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
    msg.setTimeStamp(0.92230334231);
    msg.setSource(58545U);
    msg.setSourceEntity(99U);
    msg.setDestination(35788U);
    msg.setDestinationEntity(2U);
    msg.sys_src.assign("BPTGLWOLCPRVAZJGGGFYXHKZQDYWSMYVHACZNXQBSPOYTFLRXNACSWXHYELRPJRBXITOIKONFEKJNFVTWICQRFLFNSDEOTQMCAUHKHUJBPIFUZADWQJPAGUWOCPHUZLBFNEEISSROUXQBBSVDSWXMVHVYUEJBIZREIDALJCJBEGSWCHSIKMNXVADZKUTYGVMQYMGLOAMLFODXPDKDBKYMDEPNCWUHVNUVRZIWLK");
    msg.sys_dst.assign("FVLMXOBKHLMMUBVUAVIBSTGZDPEXWVGIGRJBAJZEWHWPURDWVHOWNXWTITFTGIEUKSSTPGRSEZGZOHDKKMQZNWCUDAYYAFIZSZPFCDKBLMQFKXXQQNJTCCTQHEQAVUPNLTIPWSUBCPXYEHJURFMKCYNOLFDRTRPQDXENYMCOSNBLHRFPDIYGENWSHUNBYZMAJDQOZOGVLKUILHDLPCOASXKBWXVVOGRABYALMVFCRK");
    msg.flags = 53U;
    const char tmp_msg_0[] = {-1, -35, -119, -82, -108, 43, 27, -53, -128, -102, -8, 18, 68, 24, -94, 94, 94, 69, 11, -71, -73, 87, -82, -114, 17, 56, 9, -29, -81, 4, 54, 91, 83, 69, -61, -110, 50, -78, -10, 34, -71, -79, -77, 35, 41, 72, 42, -126, 41, -93, -78, -100, 88, -101, -127, 116, -75, 54, -59, -35, -39, 124, -125, -105, -85, -98, -113, -80, -115, 16, -126, 124, 75, 0, -107, 102, -22, 62, -78, -16, 52, 110, 65, 54, 78, -83, -121, 4, 46, 39, 23, -116, -24, 51, -25, -28, 103, 87, 31, -101, -109, -42, 40, 10, -54, -30, -57, -75, 90, -103, 88, 54, -84, -65, 69, -109, -80, 70, -48, -117, 80, 60, 10, 41, -66, 81, -38};
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
    msg.setTimeStamp(0.805856660004);
    msg.setSource(16365U);
    msg.setSourceEntity(170U);
    msg.setDestination(42467U);
    msg.setDestinationEntity(206U);
    msg.sys_src.assign("RXYKQTXJBGVBDASBTVLPARWCF");
    msg.sys_dst.assign("NGJJHFIUBHSHZXXYZZMXSVHNPXECPTMMCYFMUERNEIAHBFYDPJOPZLBBJIBZKQWHIECGPGAXSQWXULTHPGGZNZJOPIENJPGKREDWZDGWCKAQSFEFVUZARVJNVODOFHIYHOSIQONBTCTULVDXKNWMDKTYSQUWZFSCYGQM");
    msg.flags = 156U;
    const char tmp_msg_0[] = {5, -46, 61, -84, 32, 25, -9, 88, 20, -117, -74, 39, 105, 12, -7, 103, -42, 49, 23, 92, 110, -30, -101, 101, -70, -33, 26, -85, 24, -41, 98, -102, -93, -110, -3, -32, -74, 102, -16, 40, -33, 28, 114, 103, -15, -109, 38, 17, -74, -59, -36, 48, -47, -113, -92, -18, -18, 61, 87, -29, -101, 56, 71, 14, -19, 2, 123, 115, 21, -21, 88, 51, -54, 80, -109, 119, 32, -119, -14, 115, -40, -84, 27, -33, 90, 0, 71, -88, -42, 18, 46, 51, -13, -15, 114, -4, -1, 1, 113, 55, 39, 87, 114, 52, 63, 47, -122, 40, -127, -54, -34, -64, -25, -124, 97, -92, 13, 104, -125, 115, -21, -65, 97, -6, -28, -14, -84, -27, 104, -69, 48, -109, 65, -93, 5, 16, 84, 107, 85, 78, -63, 83, 44, -101, -60, -124, -95, 11, 72, 53, -119, 40, 10, 33, 121, -37, 30, 121, -106, 118, -1, 11, -74};
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
    msg.setTimeStamp(0.101071358234);
    msg.setSource(22794U);
    msg.setSourceEntity(226U);
    msg.setDestination(51958U);
    msg.setDestinationEntity(212U);
    msg.seq = 13340U;
    msg.value = 39U;
    msg.error.assign("HNFIPNWIVEHOXTBYEP");

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
    msg.setTimeStamp(0.201083699148);
    msg.setSource(23411U);
    msg.setSourceEntity(50U);
    msg.setDestination(55057U);
    msg.setDestinationEntity(70U);
    msg.seq = 19646U;
    msg.value = 127U;
    msg.error.assign("ZJCABSWUQG");

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
    msg.setTimeStamp(0.237464383246);
    msg.setSource(16285U);
    msg.setSourceEntity(88U);
    msg.setDestination(64151U);
    msg.setDestinationEntity(222U);
    msg.seq = 65140U;
    msg.value = 253U;
    msg.error.assign("EZRCYXMUKAFLPFGKZEYNSVNWADUUPT");

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
    msg.setTimeStamp(0.753565174319);
    msg.setSource(33837U);
    msg.setSourceEntity(118U);
    msg.setDestination(47840U);
    msg.setDestinationEntity(239U);
    msg.seq = 47229U;
    msg.sys.assign("OMTZSOPUFASYLKJXEQUGJUDYJPTKSYRLERAOWKEEGDLWPHVMEQYMATMZPSQYEDJVCDLPKRMZKKZLHQCPGOW");
    msg.value = 0.427751500822;

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
    msg.setTimeStamp(0.596212203357);
    msg.setSource(16084U);
    msg.setSourceEntity(217U);
    msg.setDestination(1032U);
    msg.setDestinationEntity(49U);
    msg.seq = 59737U;
    msg.sys.assign("UAEBHQUFOTUDKGRKIPQXTXWOBYRMCWCFORHLAZLVMYBNFEJOPDDALMKTWYOORJDRPCVDARZDYZIVGJEPHT");
    msg.value = 0.142978787121;

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
    msg.setTimeStamp(0.035406796539);
    msg.setSource(49609U);
    msg.setSourceEntity(144U);
    msg.setDestination(34614U);
    msg.setDestinationEntity(22U);
    msg.seq = 52419U;
    msg.sys.assign("VTWPOOMRGQRNUQOPSVZFBIWWOGYL");
    msg.value = 0.909604240186;

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
    msg.setTimeStamp(0.325576477054);
    msg.setSource(44974U);
    msg.setSourceEntity(211U);
    msg.setDestination(37351U);
    msg.setDestinationEntity(98U);
    msg.action = 203U;
    msg.longain = 0.783221805801;
    msg.latgain = 0.217987860259;
    msg.bondthick = 381286145U;
    msg.leadgain = 0.287755415003;
    msg.deconflgain = 0.839369986936;

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
    msg.setTimeStamp(0.0947271448401);
    msg.setSource(22839U);
    msg.setSourceEntity(200U);
    msg.setDestination(35217U);
    msg.setDestinationEntity(205U);
    msg.action = 91U;
    msg.longain = 0.244877215674;
    msg.latgain = 0.645902114105;
    msg.bondthick = 1455698835U;
    msg.leadgain = 0.06959101019;
    msg.deconflgain = 0.374168602593;

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
    msg.setTimeStamp(0.417496639657);
    msg.setSource(44456U);
    msg.setSourceEntity(152U);
    msg.setDestination(54794U);
    msg.setDestinationEntity(197U);
    msg.action = 194U;
    msg.longain = 0.528886614071;
    msg.latgain = 0.259673655656;
    msg.bondthick = 2406975910U;
    msg.leadgain = 0.0535544401654;
    msg.deconflgain = 0.246517954724;

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
    msg.setTimeStamp(0.326106452347);
    msg.setSource(34552U);
    msg.setSourceEntity(18U);
    msg.setDestination(6447U);
    msg.setDestinationEntity(11U);
    msg.err_mean = 0.175030770992;
    msg.dist_min_abs = 0.269928475043;
    msg.dist_min_mean = 0.896704253238;

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
    msg.setTimeStamp(0.0511876866004);
    msg.setSource(9988U);
    msg.setSourceEntity(152U);
    msg.setDestination(60913U);
    msg.setDestinationEntity(133U);
    msg.err_mean = 0.17666015844;
    msg.dist_min_abs = 0.483835183755;
    msg.dist_min_mean = 0.61173966916;

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
    msg.setTimeStamp(0.448268775196);
    msg.setSource(21679U);
    msg.setSourceEntity(9U);
    msg.setDestination(58516U);
    msg.setDestinationEntity(40U);
    msg.err_mean = 0.6274878777;
    msg.dist_min_abs = 0.858806692767;
    msg.dist_min_mean = 0.35285879908;

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
    msg.setTimeStamp(0.539873208983);
    msg.setSource(47813U);
    msg.setSourceEntity(223U);
    msg.setDestination(48513U);
    msg.setDestinationEntity(101U);
    msg.action = 237U;
    msg.lon_gain = 0.505743477613;
    msg.lat_gain = 0.861821734841;
    msg.bond_thick = 0.529268244766;
    msg.lead_gain = 0.506000016625;
    msg.deconfl_gain = 0.86709923234;
    msg.accel_switch_gain = 0.499676044066;
    msg.safe_dist = 0.393374927496;
    msg.deconflict_offset = 0.978494811578;
    msg.accel_safe_margin = 0.0342116856839;
    msg.accel_lim_x = 0.272011530303;

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
    msg.setTimeStamp(0.0111981989834);
    msg.setSource(54240U);
    msg.setSourceEntity(2U);
    msg.setDestination(7506U);
    msg.setDestinationEntity(63U);
    msg.action = 203U;
    msg.lon_gain = 0.124573970924;
    msg.lat_gain = 0.756834869814;
    msg.bond_thick = 0.99007021276;
    msg.lead_gain = 0.789086624203;
    msg.deconfl_gain = 0.889354057845;
    msg.accel_switch_gain = 0.422678221489;
    msg.safe_dist = 0.0367306396581;
    msg.deconflict_offset = 0.773451434489;
    msg.accel_safe_margin = 0.426697716359;
    msg.accel_lim_x = 0.885178236591;

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
    msg.setTimeStamp(0.258121504943);
    msg.setSource(58453U);
    msg.setSourceEntity(10U);
    msg.setDestination(964U);
    msg.setDestinationEntity(170U);
    msg.action = 170U;
    msg.lon_gain = 0.639035130484;
    msg.lat_gain = 0.22189819239;
    msg.bond_thick = 0.830932351745;
    msg.lead_gain = 0.0124975870617;
    msg.deconfl_gain = 0.410145183474;
    msg.accel_switch_gain = 0.319167256879;
    msg.safe_dist = 0.260068393387;
    msg.deconflict_offset = 0.294812355484;
    msg.accel_safe_margin = 0.707088804349;
    msg.accel_lim_x = 0.311923970691;

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
    msg.setTimeStamp(0.819751471576);
    msg.setSource(19398U);
    msg.setSourceEntity(94U);
    msg.setDestination(18946U);
    msg.setDestinationEntity(105U);
    msg.type = 57U;
    msg.op = 216U;
    msg.err_mean = 0.680246106949;
    msg.dist_min_abs = 0.370143749237;
    msg.dist_min_mean = 0.528881645367;
    msg.roll_rate_mean = 0.688533153787;
    msg.time = 0.740180529502;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 55U;
    tmp_msg_0.lon_gain = 0.00639075543731;
    tmp_msg_0.lat_gain = 0.382026336707;
    tmp_msg_0.bond_thick = 0.813365585578;
    tmp_msg_0.lead_gain = 0.825725516929;
    tmp_msg_0.deconfl_gain = 0.664868507379;
    tmp_msg_0.accel_switch_gain = 0.831566364264;
    tmp_msg_0.safe_dist = 0.641697279017;
    tmp_msg_0.deconflict_offset = 0.0878830069821;
    tmp_msg_0.accel_safe_margin = 0.281366970967;
    tmp_msg_0.accel_lim_x = 0.598674438838;
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
    msg.setTimeStamp(0.154712955205);
    msg.setSource(35892U);
    msg.setSourceEntity(241U);
    msg.setDestination(915U);
    msg.setDestinationEntity(198U);
    msg.type = 222U;
    msg.op = 104U;
    msg.err_mean = 0.631061190544;
    msg.dist_min_abs = 0.219643893887;
    msg.dist_min_mean = 0.412567134509;
    msg.roll_rate_mean = 0.8377425795;
    msg.time = 0.11703920883;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 54U;
    tmp_msg_0.lon_gain = 0.934608715955;
    tmp_msg_0.lat_gain = 0.0806068998375;
    tmp_msg_0.bond_thick = 0.30544312851;
    tmp_msg_0.lead_gain = 0.0962415787974;
    tmp_msg_0.deconfl_gain = 0.125246935591;
    tmp_msg_0.accel_switch_gain = 0.236827665961;
    tmp_msg_0.safe_dist = 0.843350930488;
    tmp_msg_0.deconflict_offset = 0.385104906994;
    tmp_msg_0.accel_safe_margin = 0.0594156440869;
    tmp_msg_0.accel_lim_x = 0.670180176833;
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
    msg.setTimeStamp(0.767143055078);
    msg.setSource(46188U);
    msg.setSourceEntity(203U);
    msg.setDestination(43389U);
    msg.setDestinationEntity(98U);
    msg.type = 72U;
    msg.op = 85U;
    msg.err_mean = 0.87293492988;
    msg.dist_min_abs = 0.0282802985833;
    msg.dist_min_mean = 0.494970786844;
    msg.roll_rate_mean = 0.868581820677;
    msg.time = 0.0147713868257;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 139U;
    tmp_msg_0.lon_gain = 0.0416344290048;
    tmp_msg_0.lat_gain = 0.728662651506;
    tmp_msg_0.bond_thick = 0.294222841536;
    tmp_msg_0.lead_gain = 0.217091993983;
    tmp_msg_0.deconfl_gain = 0.67524593361;
    tmp_msg_0.accel_switch_gain = 0.0155739864076;
    tmp_msg_0.safe_dist = 0.0174537800619;
    tmp_msg_0.deconflict_offset = 0.555614792787;
    tmp_msg_0.accel_safe_margin = 0.035528260663;
    tmp_msg_0.accel_lim_x = 0.876334396278;
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
    msg.setTimeStamp(0.251658522198);
    msg.setSource(5470U);
    msg.setSourceEntity(182U);
    msg.setDestination(44177U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.519776019631;
    msg.lon = 0.84446046616;
    msg.eta = 1392167902U;
    msg.duration = 25997U;

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
    msg.setTimeStamp(0.27113967571);
    msg.setSource(57761U);
    msg.setSourceEntity(228U);
    msg.setDestination(17243U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.6316108425;
    msg.lon = 0.559527949052;
    msg.eta = 1196130877U;
    msg.duration = 3181U;

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
    msg.setTimeStamp(0.29854441851);
    msg.setSource(61993U);
    msg.setSourceEntity(243U);
    msg.setDestination(55226U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.0799951862079;
    msg.lon = 0.461083208674;
    msg.eta = 2756150773U;
    msg.duration = 3661U;

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
    msg.setTimeStamp(0.319710267228);
    msg.setSource(16443U);
    msg.setSourceEntity(168U);
    msg.setDestination(11239U);
    msg.setDestinationEntity(111U);
    msg.plan_id = 30772U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.679310219497;
    tmp_msg_0.lon = 0.908551910908;
    tmp_msg_0.eta = 3009782981U;
    tmp_msg_0.duration = 51289U;
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
    msg.setTimeStamp(0.621096161431);
    msg.setSource(983U);
    msg.setSourceEntity(68U);
    msg.setDestination(49555U);
    msg.setDestinationEntity(136U);
    msg.plan_id = 6377U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.630459299404;
    tmp_msg_0.lon = 0.993807264118;
    tmp_msg_0.eta = 1773910654U;
    tmp_msg_0.duration = 40180U;
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
    msg.setTimeStamp(0.868021955915);
    msg.setSource(13414U);
    msg.setSourceEntity(127U);
    msg.setDestination(18956U);
    msg.setDestinationEntity(1U);
    msg.plan_id = 25105U;

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
    msg.setTimeStamp(0.468210475929);
    msg.setSource(5185U);
    msg.setSourceEntity(229U);
    msg.setDestination(24197U);
    msg.setDestinationEntity(47U);
    msg.type = 77U;
    msg.command = 204U;
    msg.settings.assign("WNBLEIEDGCWIWSLOXOHIFPGMQSQQJSYEKXKMAMSYSBYUUXWJPZZQWWLHCAELXXBZLGEUYRJNDABDNIHTZQZIHPILDXBGOKAVKMARVZQCWLCFVZUAZFSTZQIWHUREPKFSVVWFCYYRBWDEXMHXSSJJANQOLPTJYRFDDAETDUCHKGGGNS");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 51034U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.751315688557;
    tmp_tmp_msg_0_0.lon = 0.568075294329;
    tmp_tmp_msg_0_0.eta = 3837771809U;
    tmp_tmp_msg_0_0.duration = 39557U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("HNPVXIDKWPYMKHWAHIFUYESPRITXTBTLJGZINQULURXYOIDKMPJBQCRZPQERJLXMMO");

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
    msg.setTimeStamp(0.999539242477);
    msg.setSource(64061U);
    msg.setSourceEntity(95U);
    msg.setDestination(11160U);
    msg.setDestinationEntity(130U);
    msg.type = 150U;
    msg.command = 122U;
    msg.settings.assign("CYIYXHQWVGLZRJKZWFGZJUKQAHEFOCTDJWSHOIUJFXMKUMLNLSJJFFWBQRCMBNLPRYBFNSEQPXKAAEIMHAHNFTMZSYKGUDLOREZOBWELRHYFRDATYEPPQOYVPGEMABJLSHSZVTNWTYDIRXVRWTOBGP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 50748U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("PKLSGDIFYEKSDBZIJFWWYVKEPWGVEVBTFICDMVTRMZEPLNNQNGIMCYSMUVBMWEYTKJTYPCCGILNZZIATXGZRXHMFRXCHRZCYHOQGLQEBQOTVLLAJPDFEYAJNXSMNRSDOXBUJUWRGPDWFKPDWOYNARKFKFECSHWSAUJXWHLLZCX");

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
    msg.setTimeStamp(0.335075191405);
    msg.setSource(52064U);
    msg.setSourceEntity(48U);
    msg.setDestination(1077U);
    msg.setDestinationEntity(143U);
    msg.type = 253U;
    msg.command = 191U;
    msg.settings.assign("ABVEEZZPEUXNQYGZJTBLGSXGLADQDDJIRVMODSNUSCJBXCATACRMYQZZCWFFDAWHYXLGJNROHVQPAIOVEHFOBVSTKUEIUCKLDJFPERKGQBWNECGFHRKCVEIKKLOIFFPQKYUTMJSYKHFMMZPPLMBDCEHJOSIDBANWJNWWMPMYKFZZHUVEDGTQZZRYLIJTOINSNT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 33934U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TOEVHMLNRSKFKYTHMHSFKZDZBHWJNIOBUPBZOZASWGLWQBYAYEIBXIFSAPDSWSPPUWDMPWJFAVFELFNLUKWPYFACUYJLUJZKMVHNVKJDHTIXUQORSHWDRQZECTJUIZLNVAOGJMBXXQRTFBWOGRCXYGIUHPCXGRNXIMIECGMCXDGHSLUM");

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
    msg.setTimeStamp(0.155980751456);
    msg.setSource(27927U);
    msg.setSourceEntity(134U);
    msg.setDestination(56389U);
    msg.setDestinationEntity(136U);
    msg.state = 129U;
    msg.plan_id = 59748U;
    msg.wpt_id = 212U;
    msg.settings_chk = 52414U;

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
    msg.setTimeStamp(0.20547374274);
    msg.setSource(56053U);
    msg.setSourceEntity(247U);
    msg.setDestination(18068U);
    msg.setDestinationEntity(41U);
    msg.state = 156U;
    msg.plan_id = 9186U;
    msg.wpt_id = 23U;
    msg.settings_chk = 62424U;

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
    msg.setTimeStamp(0.659972170023);
    msg.setSource(55830U);
    msg.setSourceEntity(53U);
    msg.setDestination(41976U);
    msg.setDestinationEntity(166U);
    msg.state = 80U;
    msg.plan_id = 27909U;
    msg.wpt_id = 64U;
    msg.settings_chk = 29257U;

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
    msg.setTimeStamp(0.0257591784689);
    msg.setSource(16424U);
    msg.setSourceEntity(5U);
    msg.setDestination(35980U);
    msg.setDestinationEntity(133U);
    msg.uid = 21U;
    msg.frag_number = 173U;
    msg.num_frags = 106U;
    const char tmp_msg_0[] = {47, 108, 17, 77, 9, -85, -126, 5, -70, -53, -104, 63, -37};
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
    msg.setTimeStamp(0.0977768262251);
    msg.setSource(9666U);
    msg.setSourceEntity(106U);
    msg.setDestination(11849U);
    msg.setDestinationEntity(121U);
    msg.uid = 113U;
    msg.frag_number = 235U;
    msg.num_frags = 226U;
    const char tmp_msg_0[] = {-67, -91, -118, 97, -87, 45, -19, -119, 6, 63, 85, 53, -107, -73, -113, 86, -57, -48, 61, -93, 113, 37, -83, -101, -80, 41, 122, 48, 93, -97, 80, 4, -2, -59, 95, 87, 17, 76, -49, -64, 21, -103, -93, -57, -71, -73, -106, 57, 18, -68, -28, 124, 46, -104, 86, -88, 19, -54, -66, 50, -115, 45, 13, -48, -116, 39, 121, 96, -108, -97, -8, -74, -57, -36, 88, 61, 50, -93, -127, 16, 54, 19, 121, -128, 30, 115, 119, -98, -92, 26, 73, -101, 61, -27, 82, 110, -27, -97, -118, -83, -22, -108, 46, 85, -30, -86, -84, -124, -26, 10, 102, -97, 2, 43, 114, -91, -58, 103, 29, -89, -28, -77, 106, -122, -11, 65, 62, -122, 81, 0, 106, 123, -102, 24, 101, 33, 117, -24, 120, 91, 78, 73, 44, 15, -121, -123, 15, -6, 81, -92, 121, 79, -93, 99, -9, -75, 42, 13, 13, 35, -112, -23, -86, -56, 48, 17, -121, -63, -125, 119, 122, -22, 6, -15, -72, -10, -44, 21, -60, 66, -3, 63, 23, 103, 121, 59, 18, 92, 57, 124, -117, 94, 96, 100, 34, -31, -68, 4, -67, -38, 80, -76, -119, 106, 5, 53, -118, -55, 94, 50, -95, 76, -26, -2, 58, 10, 106, 89, -62, -14, -47, 52, 45, 9, 34, 59, 95, 126, 50, 121, -23, 6, -46, -4, 61, 118, -89, -95, -70};
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
    msg.setTimeStamp(0.212401181401);
    msg.setSource(55724U);
    msg.setSourceEntity(44U);
    msg.setDestination(41786U);
    msg.setDestinationEntity(121U);
    msg.uid = 141U;
    msg.frag_number = 183U;
    msg.num_frags = 233U;
    const char tmp_msg_0[] = {71, 101, 124, -75, 40, 87, 110, 71, -5, -105, -108, -67, -101, 39, 46, -5, 30, 64, -112, 74, 32, 8, -16, -32, -108, -47, 0, 60, -52, -32, -65, -23, -101, 61, 53, -25, 88, -101, -29, 83, -89, 46, -69, -47, -33, -54, -67, -74, 104, 41, 102, 86, 40, -123, -10, 12, -107, -74, 114, -90, -39, 67, 109, -19, 109, -107, 35, 101, 106, 46, 59, 122, -19, -84};
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
    msg.setTimeStamp(0.59394485271);
    msg.setSource(7458U);
    msg.setSourceEntity(195U);
    msg.setDestination(34072U);
    msg.setDestinationEntity(179U);
    msg.content_type.assign("BMFSXYVJVDUGCIDXAXSGXVHECSBNBQWDWINUFLCQTILFMAWYWKJHQZBUIPMOITXUOPCHMUJZ");
    const char tmp_msg_0[] = {-100, 120, 79, -104, -91, 126, 44, 55, -125, -65, -21, -70, 86, -1, 36, -100, 7, -68, 28, -119, -85, 91, -61, -16, 90, -107, 33, -20, -38, 62, 19, 67, 76, -110, -57, -17, 81, -43, 19, -82, -48, 57, 15, 56, -89, -59, 95, -102, -83, 122, -58, 67, 126, -84, -6, 53, 32, -78, 22, -83, -123, 65, 88, 95, 120, -95, 126, 66, 68, 39, -51, -27, -7, 9, 116, 68, 53, 95, -76, 0, -126, 108, -45, 125, 113, -60, 85, 122, 7, -37, -25, 119, 37, 16, -89, -47, -39, 104, -78, -28, 20, 53, 101, -3, 33, -110, -81, 56, 98, -46, 75, 119, -32, -72, -63, -28, 5, -95, -118, -53, -85, -89, -25, -116, 109, 63, 63, 120, 112, -103, 124, 34, 3, 120, -124, 102, 123, -67, 108, -45, 58, -54, 79, 88, -76, 67, -100, 58, -107, -45, 30, -1, 116, 39, 114, -122, 49, 27, -26, -76, 94, 89, 116, 25, 106, 120, -58, -75, -96, -5, -63, -3, -86, 81, -2, 28, -61, -69, 22, 93, 70, 93, -17, -116, -111, 114};
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
    msg.setTimeStamp(0.714419972535);
    msg.setSource(46974U);
    msg.setSourceEntity(105U);
    msg.setDestination(62336U);
    msg.setDestinationEntity(58U);
    msg.content_type.assign("MYDUDPSGHKGTXPFKXQLKECEPHBGNTFJXDGKHLIEYXCHVPDNBBMUSPIVMBIWAEEEMQHQZVAMNDNLTIWLIHVVOCBOAURZT");
    const char tmp_msg_0[] = {-41, 19, -94, 5, 113, 29, -13, -19, -62, 104, 25, -40, 37, 31, -112, -90, 91, 97, -46, -69, 30, 11, 13, -87, -49, 33, -115, 87, 86, 117, -13, -2, 120, -90, -54, -72, -51, 99, -118, 84, 0, 118, -43, 8, 71, 51, -49, -11, -105, -62, 122, 47, 73, 123, -53, -63, -91, 96, 51, -91, -16, -60, 57, 97, -63, 119, -27, 48, -103, 102, 104, 8, -89, -47, -121, -41, 62, -121, -75, -73, -34, -6, 100, -115, 45, -102, 106, 54, -42, 109, -125, 68, -50, 106, -71, -7, -27, 24, 78, -116, -56, 108, -106, -104, -8, 67};
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
    msg.setTimeStamp(0.994730575872);
    msg.setSource(26619U);
    msg.setSourceEntity(72U);
    msg.setDestination(62200U);
    msg.setDestinationEntity(235U);
    msg.content_type.assign("JAGGBPCRNDMXEYYFZCIQQUILCTAUXEJDKDHKWBJRHSGOOMGOCXVCEOHLZSXVAJXADRBFPJTPZBMCJFTHKOICSHTJQODNPYJIVVOHGYBPEUEHBMSLZPXRMHABWMIQDJYRCPLFFJZTAVDTSNXPYFOT");
    const char tmp_msg_0[] = {-66, 31, 0, 94, 89, -96, -88, 115, 3, -57, 116, -32, 6, -2, -1, 61, -49, 7, 73, 67, 66, -63, 8, 1, -94, -26, 17, -48, 94, 24, 36, -122, -90, 57, -95, -32, 81, 109, 78, -46, 29, 44, -114, 81, -34, 8, -31, -80, -32, -89, -7, -117, -31, -18, -60, -41, -107, 61, 45, -106, 61, -12, 95, 15, -115, 56, -112, 102, -74, -60, 74, -102, -108, 124, 98, -15, -34, 73, 104, 17, -82, 79, -23, -124, 50, -53, 101, 29, 95, -6, 97, 26, 39, 124, 9, -63, 38, 106, -44, 61, -98, -47, -47, 102, -88, -82, -70, -64, 89, 87, 49, 46, -58, 123, 27, 65, 115, 84, -119, 71, 7, -25, 107, 120, 109, 21, 50, 74, -100, 17, -54, -2, 40, 2, -20, 65, -72, 13, 16, 62, -91, -21, 40, 89, -100, -105, -121, 116, 76, -85, 44, 49, 67, -96, -84, 41, -101, 85, -123, -38, -89, -127, -45, 3, 55, -10, 30, -50, 67, 19, -6, 52, -43, -128, 20, -91, -2, 73, 121, -13, 100, -89, 21, -122, -109, 122, -23, 82, -56, 94, -25, -116, 10, 80, -108, 7, 0, -9, 9, 20, -113, 103, 22, -48, -29, 53, 57, -9, 37, -51, -103, 46, -20, -78, -67, 105, 119, 58, -12, 75, -33};
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
    msg.setTimeStamp(0.256153143098);
    msg.setSource(45618U);
    msg.setSourceEntity(69U);
    msg.setDestination(24162U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.414707118255);
    msg.setSource(39944U);
    msg.setSourceEntity(226U);
    msg.setDestination(62652U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.597309531915);
    msg.setSource(45371U);
    msg.setSourceEntity(76U);
    msg.setDestination(10997U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.34142234275);
    msg.setSource(27645U);
    msg.setSourceEntity(235U);
    msg.setDestination(62975U);
    msg.setDestinationEntity(103U);
    msg.target = 2244U;
    msg.bearing = 0.528244819138;
    msg.elevation = 0.691358229124;

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
    msg.setTimeStamp(0.783949720627);
    msg.setSource(64160U);
    msg.setSourceEntity(253U);
    msg.setDestination(53132U);
    msg.setDestinationEntity(111U);
    msg.target = 24605U;
    msg.bearing = 0.227292031285;
    msg.elevation = 0.377599877741;

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
    msg.setTimeStamp(0.676944844515);
    msg.setSource(23167U);
    msg.setSourceEntity(64U);
    msg.setDestination(36040U);
    msg.setDestinationEntity(201U);
    msg.target = 1027U;
    msg.bearing = 0.851232364512;
    msg.elevation = 0.240684490783;

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
    msg.setTimeStamp(0.00517968513965);
    msg.setSource(25534U);
    msg.setSourceEntity(28U);
    msg.setDestination(15052U);
    msg.setDestinationEntity(87U);
    msg.target = 65209U;
    msg.x = 0.793800318174;
    msg.y = 0.464823352826;
    msg.z = 0.160461024952;

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
    msg.setTimeStamp(0.0859922443901);
    msg.setSource(229U);
    msg.setSourceEntity(2U);
    msg.setDestination(57937U);
    msg.setDestinationEntity(41U);
    msg.target = 6371U;
    msg.x = 0.126312039752;
    msg.y = 0.910579706258;
    msg.z = 0.602903194546;

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
    msg.setTimeStamp(0.754887723884);
    msg.setSource(18087U);
    msg.setSourceEntity(48U);
    msg.setDestination(34109U);
    msg.setDestinationEntity(87U);
    msg.target = 35823U;
    msg.x = 0.801641426696;
    msg.y = 0.166592157434;
    msg.z = 0.0846857375215;

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
    msg.setTimeStamp(0.569810173737);
    msg.setSource(11811U);
    msg.setSourceEntity(116U);
    msg.setDestination(46146U);
    msg.setDestinationEntity(205U);
    msg.target = 1517U;
    msg.lat = 0.262444072703;
    msg.lon = 0.191307836283;
    msg.z_units = 51U;
    msg.z = 0.431526394223;

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
    msg.setTimeStamp(0.838080897885);
    msg.setSource(17550U);
    msg.setSourceEntity(179U);
    msg.setDestination(26789U);
    msg.setDestinationEntity(95U);
    msg.target = 64026U;
    msg.lat = 0.783317585648;
    msg.lon = 0.883727637073;
    msg.z_units = 10U;
    msg.z = 0.0240186068117;

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
    msg.setTimeStamp(0.216372224209);
    msg.setSource(19332U);
    msg.setSourceEntity(168U);
    msg.setDestination(3143U);
    msg.setDestinationEntity(181U);
    msg.target = 31410U;
    msg.lat = 0.00331890211155;
    msg.lon = 0.983852974047;
    msg.z_units = 216U;
    msg.z = 0.202987252399;

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
    msg.setTimeStamp(0.258787977604);
    msg.setSource(53731U);
    msg.setSourceEntity(83U);
    msg.setDestination(50001U);
    msg.setDestinationEntity(23U);
    msg.locale.assign("CLGMKCBFGVXRFZJGOXUEUVVWJJYMBWZQSIAFZPTBMFDZHIETOKEKHOTPHKNCQDJUFXTEUKWSIIZTYDULMJXBLDSWRVQDODKLAHAPOSAKWGASROMGFWEBYBRHCQZNVJLMDXSKNEQMOSUQPGRZRPPVXZYDMUZBFHELPBBJIJNCZUTFGVAIYNYAGLXYNPLAQGRNJQNRODOFTIVYJXIHNKYSYCKNQCHTEILPGVHQERHPWXOEVDWASWULSUCFMBC");
    const char tmp_msg_0[] = {-9, 78, -57, 60, 65, 98, -8, 69, 44, -9, -65, 50, 98, 51, -122, -34, -4, -10, 114, -104, -100, -47, 10, -104, -112, 105, -75, 24, 93, 79, -61, -100, -48, 121, -112, 96, -2, 34, 60, -21, 113, -110, -97, 88, -24, -43, 76, -59, 122, -83, 53, 74, -6, -52, 126, -39, 44, 31, 72, -30, 73, -51, 106, 80, -71, 63, -112, 27, -102, 14, -127, 44, -38, -6, 41, -53, 65, -62, 109, 26, -35, 62, -31, 12, -24, -43, -120, -62, -54, -87, 87, -62, -53, -124, 31, -103, 112, -95, 106, -110, 27, -57, 69, -121, -49, -114, 72, -86, 60, -77, 125, 75, -50, -93, 100, 90, 57, 20, -118, -17, -117, 103, 87, 122, -17, 47, 40, -43, -25, -121, 82, 10, -123, 61, 112, -41, 91, -24, -85, 81, 93, 68, -125, -34, 82, 14, -42, -39};
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
    msg.setTimeStamp(0.941378633871);
    msg.setSource(37945U);
    msg.setSourceEntity(25U);
    msg.setDestination(62816U);
    msg.setDestinationEntity(165U);
    msg.locale.assign("REQMFIXKKNHDZIVSUCTPOGNKPMJHHGPTECDJNJYEGASNQDXPZLUQVRWEOUIKSHNYLRILKYCYUMVDMYXEOOFCLJOCSCPWSVROQAEXWPGAEHKGNYZFAMIRDUJCBU");
    const char tmp_msg_0[] = {35, -61, 16, -75, 119, -21, -53, -28, 24, 49, 103, -45, -62, 27, -69, 73, -74, -124, -124, 19, -77, -103, -69, -108, 63, -6, 23, -68, 19, 26, -116, 27, 94, -65, -55, -18, 71, -18, 92, -1, -79, 36, -19, -88, -51, 121, -30, 85, -81, -18, 84, 55, -109, 29, -7, 67, 123, 107, -93, -24, -19, -2, -107, -7, 58, -17, 60, -80, -56, 102, 4, -99, 12, 108, -40, -41, 24, 27, -105, 53, 63, 21, -124, 5, -27, 54, 92, 105, 5, -96, 16, -75, 46, -26, 11, -25, 76, -107, -87, -127, 102, -84, 111, -20, 52, -102, 60, 41, 12, 67, 45, -91, 94, 80, 71, -115, -41, -30, -71, 19, -66, 122, -123, 23, -49, 102, -96, 83, -112, 51, 96, 32, 76, 14, -6, -102, -87, -27, -87, 48, 121, 74, -125, -61, 25, -50, -119, -43, -28, -4, 23, -62, 102, -34, -84, -31, -89, -110, -31, -51, 69, -106, 10, -66, -44, 85, 84};
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
    msg.setTimeStamp(0.0168371258599);
    msg.setSource(60278U);
    msg.setSourceEntity(23U);
    msg.setDestination(9826U);
    msg.setDestinationEntity(185U);
    msg.locale.assign("WZKSWCKLIIFQPQNRPGIEHPJDQGJLAQUAXSWTITTXUVWBBRKXEDPOYWSJCUXRGFMXLGFELOIIINYMYGKHRLTEMSZOQAKWCAVVYZAZWGVCHSDGRPTOHNCVUEZUAJVOCJBYJPMUGKGBQVTOWQNNSWSNRURITQYXDUMZDPRPZPDDC");
    const char tmp_msg_0[] = {100, -59, -79, 48, -39, -59, -77, 94, 20, -95, 7, 39, -39, 76, 113, 7, -12, -119, -35, 99, -94, -46, 53, -62, 90, 0, 85, 80, -24, -31, 114, 75, -13, -83, -96, 59, 0, 119, -78, 81, -60, 105, 91, -28, -10, 81, 97, 50, 1, -26, 4, -70, 30, 36, -96, -48, 73, -21, 106, -84, 4, -122, 64, -26, -7, 51, -67, -91, -116, 121, -14, 91, -128, 35, 56, 102, -87, -127, 2, 85, -108, 11, 105, 97, 83, 64, -8, 78, 109, -76, 61, -11, 95, 8, -104, 75, 63, 92, -122, -73, 85, -110, -126, 87, 100, 110, 19, -24, 87, -86, 70, 55, 26, 115, -52, -29, -79, -25, 58, -34, 47, -116, -90, -20, 34, -59, 45, -58, 82, -50, 105, -97, -122, -32, 12, 31, 52, 6, -113, -1, 50, 81, -110, 120, -27, -13, 34, 4, -56, 53, -34, -128, -58, 0, -75, 125, 97, 1, 47, -77, 61, -43, -41, -13, 7, -5, 101, 87, 102, 29};
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
    msg.setTimeStamp(0.619282377887);
    msg.setSource(60088U);
    msg.setSourceEntity(23U);
    msg.setDestination(33594U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.331465400395);
    msg.setSource(5680U);
    msg.setSourceEntity(125U);
    msg.setDestination(33216U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.502783249462);
    msg.setSource(51597U);
    msg.setSourceEntity(75U);
    msg.setDestination(41844U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.109518530219);
    msg.setSource(56045U);
    msg.setSourceEntity(161U);
    msg.setDestination(36843U);
    msg.setDestinationEntity(31U);
    msg.camid = 155U;
    msg.x = 9233U;
    msg.y = 6453U;

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
    msg.setTimeStamp(0.0400042510885);
    msg.setSource(59712U);
    msg.setSourceEntity(87U);
    msg.setDestination(7308U);
    msg.setDestinationEntity(89U);
    msg.camid = 163U;
    msg.x = 24533U;
    msg.y = 30957U;

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
    msg.setTimeStamp(0.101840624856);
    msg.setSource(45810U);
    msg.setSourceEntity(233U);
    msg.setDestination(29054U);
    msg.setDestinationEntity(28U);
    msg.camid = 71U;
    msg.x = 36635U;
    msg.y = 59982U;

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
    msg.setTimeStamp(0.512194634788);
    msg.setSource(57510U);
    msg.setSourceEntity(19U);
    msg.setDestination(15819U);
    msg.setDestinationEntity(28U);
    msg.camid = 103U;
    msg.x = 12148U;
    msg.y = 49710U;

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
    msg.setTimeStamp(0.419991544419);
    msg.setSource(27299U);
    msg.setSourceEntity(198U);
    msg.setDestination(32209U);
    msg.setDestinationEntity(116U);
    msg.camid = 212U;
    msg.x = 8233U;
    msg.y = 14306U;

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
    msg.setTimeStamp(0.762897044655);
    msg.setSource(42914U);
    msg.setSourceEntity(38U);
    msg.setDestination(25912U);
    msg.setDestinationEntity(250U);
    msg.camid = 2U;
    msg.x = 7999U;
    msg.y = 3988U;

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
    msg.setTimeStamp(0.175775699195);
    msg.setSource(15962U);
    msg.setSourceEntity(207U);
    msg.setDestination(6523U);
    msg.setDestinationEntity(152U);
    msg.tracking = 54U;
    msg.lat = 0.0386801565611;
    msg.lon = 0.809316959625;
    msg.x = 0.519381264471;
    msg.y = 0.625262077827;
    msg.z = 0.253021329032;

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
    msg.setTimeStamp(0.197706181969);
    msg.setSource(33002U);
    msg.setSourceEntity(229U);
    msg.setDestination(41107U);
    msg.setDestinationEntity(223U);
    msg.tracking = 2U;
    msg.lat = 0.325184833398;
    msg.lon = 0.928060009476;
    msg.x = 0.584920689766;
    msg.y = 0.386047532635;
    msg.z = 0.043721068336;

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
    msg.setTimeStamp(0.728459143284);
    msg.setSource(11720U);
    msg.setSourceEntity(140U);
    msg.setDestination(56442U);
    msg.setDestinationEntity(251U);
    msg.tracking = 246U;
    msg.lat = 0.303282843919;
    msg.lon = 0.0770907242805;
    msg.x = 0.858004969331;
    msg.y = 0.819464857077;
    msg.z = 0.607934581469;

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
    msg.setTimeStamp(0.867766050611);
    msg.setSource(16816U);
    msg.setSourceEntity(49U);
    msg.setDestination(12816U);
    msg.setDestinationEntity(125U);
    msg.target.assign("MFICPJAODYKFIEXFRLULBOBFURCT");
    msg.lbearing = 0.447525165595;
    msg.lelevation = 0.68851413578;
    msg.bearing = 0.839609556334;
    msg.elevation = 0.249289060481;
    msg.phi = 0.306379336764;
    msg.theta = 0.865773666423;
    msg.psi = 0.868943870516;
    msg.accuracy = 0.434964634974;

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
    msg.setTimeStamp(0.103210958178);
    msg.setSource(63230U);
    msg.setSourceEntity(186U);
    msg.setDestination(61993U);
    msg.setDestinationEntity(98U);
    msg.target.assign("RNAEWJLPDFJZFNIVOVKPDGIAVSRHAUCUQOMISGLAIQXLZTXSBLXNKRLZRAPUJORYGELBMDJSXQANWYCYPTLVBFPVJXOMVBTOPBCRDEFQJYLXEUWVSSZMBPXWVHASYMKYANZFGGSQMKUAVKBDNTWKIFTHOEZGWSFHJKZQRPTGYNZ");
    msg.lbearing = 0.595291769183;
    msg.lelevation = 0.0877787838327;
    msg.bearing = 0.350065773937;
    msg.elevation = 0.799355889407;
    msg.phi = 0.795320781266;
    msg.theta = 0.880041922407;
    msg.psi = 0.00181824850943;
    msg.accuracy = 0.953256116529;

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
    msg.setTimeStamp(0.864323712881);
    msg.setSource(51670U);
    msg.setSourceEntity(24U);
    msg.setDestination(65115U);
    msg.setDestinationEntity(180U);
    msg.target.assign("LUTSFDWKQZQTCC");
    msg.lbearing = 0.789982677958;
    msg.lelevation = 0.905021453593;
    msg.bearing = 0.148695366715;
    msg.elevation = 0.727155145993;
    msg.phi = 0.665433395339;
    msg.theta = 0.0684841939992;
    msg.psi = 0.250947152607;
    msg.accuracy = 0.227946171002;

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
    msg.setTimeStamp(0.166747599923);
    msg.setSource(43063U);
    msg.setSourceEntity(195U);
    msg.setDestination(38367U);
    msg.setDestinationEntity(131U);
    msg.target.assign("QWEURGWBMXIKDZFVOF");
    msg.x = 0.621614493267;
    msg.y = 0.416690247022;
    msg.z = 0.127015971659;
    msg.n = 0.64510745643;
    msg.e = 0.731527848228;
    msg.d = 0.460552239409;
    msg.phi = 0.713781872445;
    msg.theta = 0.376560991502;
    msg.psi = 0.67450004252;
    msg.accuracy = 0.4596962745;

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
    msg.setTimeStamp(0.555094823268);
    msg.setSource(25776U);
    msg.setSourceEntity(245U);
    msg.setDestination(17688U);
    msg.setDestinationEntity(219U);
    msg.target.assign("JNQTUKYQLAVCMTIFLWZRVVHJSUSDFMFBCBCJZOBHDVCOBJQ");
    msg.x = 0.705616993788;
    msg.y = 0.456336662792;
    msg.z = 0.0510515146758;
    msg.n = 0.386996542089;
    msg.e = 0.586332904777;
    msg.d = 0.696280144685;
    msg.phi = 0.80006133791;
    msg.theta = 0.837052079212;
    msg.psi = 0.468344578246;
    msg.accuracy = 0.67222510795;

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
    msg.setTimeStamp(0.407952805547);
    msg.setSource(33848U);
    msg.setSourceEntity(55U);
    msg.setDestination(25529U);
    msg.setDestinationEntity(241U);
    msg.target.assign("OGUSQYPZARQDPIWXCVYEVHINWATIVDOAMWDAVFMIBUXHINDRSNSBJXZIXJCPYHNNIVRPJBEKGUZHQDWEGZOGBSHFLRFJVQJMXFCJDYEBNRCVTAQWXQHKQCLZJVSPKSXEQOMABEFESWFUYVLDAHKOVAIZFYGOBLDLTCRTWGZSNBBYWGMTP");
    msg.x = 0.397202120001;
    msg.y = 0.211083560152;
    msg.z = 0.504518867136;
    msg.n = 0.187922776619;
    msg.e = 0.54388859855;
    msg.d = 0.991126296121;
    msg.phi = 0.876968429333;
    msg.theta = 0.496123081369;
    msg.psi = 0.138699358332;
    msg.accuracy = 0.633834033604;

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
    msg.setTimeStamp(0.478352376584);
    msg.setSource(4368U);
    msg.setSourceEntity(140U);
    msg.setDestination(24623U);
    msg.setDestinationEntity(70U);
    msg.target.assign("CCKMOQBKVDGUWLWJQGJGBQHEYEGCINUJIVAYSXQPFPBRGZYDWEHCBUHAYNYXODRAKAVFDAUPVJJSOHGUOCNHKKNWHUJEHEZWVVNUMFSQXMTKKTNKIEAQELYSOZMCXFFYQNVKMPHEDTMIQBFGMTSKXLRMVYRRZAHCTDYUAOJCRPISFBLXULPGPWG");
    msg.lat = 0.70327501212;
    msg.lon = 0.815530422087;
    msg.z_units = 1U;
    msg.z = 0.195988867032;
    msg.accuracy = 0.615488166514;

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
    msg.setTimeStamp(0.462208350696);
    msg.setSource(52149U);
    msg.setSourceEntity(46U);
    msg.setDestination(8159U);
    msg.setDestinationEntity(171U);
    msg.target.assign("PRYUJDJSAZIAUMDKNWBFECLWQPVNZJPQKRETQSTKLHZIKBYUKVPOEC");
    msg.lat = 0.651880331713;
    msg.lon = 0.668533279099;
    msg.z_units = 197U;
    msg.z = 0.777909569539;
    msg.accuracy = 0.932966325711;

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
    msg.setTimeStamp(0.277674264816);
    msg.setSource(44783U);
    msg.setSourceEntity(171U);
    msg.setDestination(51981U);
    msg.setDestinationEntity(87U);
    msg.target.assign("HIWNXRUXLBMZKVEYRCBUIBZOPLJDMZAVLIDXGDOWUTTUQCBXDZSRIHOLPGASUCFFCVQAAPSIJHGXDSKVJIKKYCHPNNLWBNRSOGXGWYMBFZLHEHYJIEJZRKQNWVTSVXEPYLHAGJOOTFZRTMJBCAARTPMTSEOEWYGCUKIQBMAGOFOJJDSCQSZCMQMKPPXQZWQTUGIFFHCXDDAWPRUENKESERYHNWUVUBKLWPFQTVFDYZVLHMEBQVGKJRA");
    msg.lat = 0.999086481518;
    msg.lon = 0.0155143801572;
    msg.z_units = 105U;
    msg.z = 0.190854197982;
    msg.accuracy = 0.854703234292;

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
    msg.setTimeStamp(0.125918515927);
    msg.setSource(48884U);
    msg.setSourceEntity(114U);
    msg.setDestination(450U);
    msg.setDestinationEntity(32U);
    msg.name.assign("AAGNMBHMPZHJUIKFDEJAICPXDIYTHOETHFXJOKQXMNALRRFDLEYESDJVKWCNLHQXGHVYPQSTWCNUWZTTVCJMFARYCWRSIQZGZAIWKTCMIRYKSKCAVIZUDNJFULTZXEGZMJQIVNDQICXBPYHYLDZGTPFLVHLSACUEONUXVKUKWWBBGAUFQELOBSBUVPCDPXNVEOOOMAMBSFRSMOEYRSPDYPGEXNJOPUHQGTRMHJKWJBWQILZGNYOVBT");
    msg.lat = 0.418703358498;
    msg.lon = 0.721275135474;
    msg.z = 0.934934686118;
    msg.z_units = 67U;

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
    msg.setTimeStamp(0.849046080128);
    msg.setSource(19194U);
    msg.setSourceEntity(229U);
    msg.setDestination(48787U);
    msg.setDestinationEntity(2U);
    msg.name.assign("ORXNVGXJIPSVXHNNPGKOQTHLZJAVQVMCHYSSXGQTLTSDGRTCCOHRXDKXYLCORDPWKGRHZZVYSXYGTMMJEUNOJIKAUODCFNHMQTGXAZTABHSWUIAALUIKPVTNGNXBYLPIQEYJGDJBMMSKVKFFHIIUEWOELREJODSJPU");
    msg.lat = 0.946291160519;
    msg.lon = 0.519306242955;
    msg.z = 0.999737765395;
    msg.z_units = 200U;

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
    msg.setTimeStamp(0.149995509663);
    msg.setSource(9511U);
    msg.setSourceEntity(137U);
    msg.setDestination(24530U);
    msg.setDestinationEntity(7U);
    msg.name.assign("CNTVDABGKJJXVLZJRVMEYDSMKNORWRQAIAUKPUWMCVNYTAADQSFAMHYTEELA");
    msg.lat = 0.291467332641;
    msg.lon = 0.317162067933;
    msg.z = 0.101244455481;
    msg.z_units = 122U;

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
    msg.setTimeStamp(0.539266012065);
    msg.setSource(10396U);
    msg.setSourceEntity(245U);
    msg.setDestination(23957U);
    msg.setDestinationEntity(183U);
    msg.op = 122U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("SWDLGEPGQIOHBOTHAJIQOLMRRCSYXHWMZMRYJMKDYOFEIQESKWZGKLMDTIQXXXXDGNBEDHYUUBNFWMJYBJSRVHOHSCFFQRAGWFCAPQLZTTZKDEWJOUURIJIZRINCALTEBNXUEPSLULWBVYCNRMOXGVQ");
    tmp_msg_0.lat = 0.0791449486787;
    tmp_msg_0.lon = 0.440150048355;
    tmp_msg_0.z = 0.984163373067;
    tmp_msg_0.z_units = 118U;
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
    msg.setTimeStamp(0.103564229515);
    msg.setSource(59822U);
    msg.setSourceEntity(143U);
    msg.setDestination(56055U);
    msg.setDestinationEntity(193U);
    msg.op = 37U;

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
    msg.setTimeStamp(0.619590398357);
    msg.setSource(36315U);
    msg.setSourceEntity(65U);
    msg.setDestination(16077U);
    msg.setDestinationEntity(30U);
    msg.op = 39U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("XKHBYMNZJIPIGMPIETQRUPVQGYTNCBFDKSIANWANLFJOJVAPYOESMRPKUTLACFEICUVANXNZDZQRTHYKUPMRCTFZCYJEVJPTWRAXNZTKGOIVVGBHDKBPXZFDOSWORZVMUXBFXDJRSGHLTYNLZOQJLHOLHAGHDIPQBXHGRYINUADEOVTFNDBUOQXXBBBQFYESYCKIVFLSGFOKWAUXSESMDLJ");
    tmp_msg_0.lat = 0.312153322458;
    tmp_msg_0.lon = 0.73639096559;
    tmp_msg_0.z = 0.993527021147;
    tmp_msg_0.z_units = 249U;
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
    msg.setTimeStamp(0.271747331249);
    msg.setSource(8580U);
    msg.setSourceEntity(88U);
    msg.setDestination(46720U);
    msg.setDestinationEntity(119U);
    msg.value = 0.995044915441;
    msg.type = 91U;

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
    msg.setTimeStamp(0.679077220548);
    msg.setSource(8975U);
    msg.setSourceEntity(146U);
    msg.setDestination(58588U);
    msg.setDestinationEntity(16U);
    msg.value = 0.190187232179;
    msg.type = 67U;

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
    msg.setTimeStamp(0.220814133944);
    msg.setSource(2900U);
    msg.setSourceEntity(156U);
    msg.setDestination(44653U);
    msg.setDestinationEntity(6U);
    msg.value = 0.29350386433;
    msg.type = 119U;

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
    msg.setTimeStamp(0.517664259827);
    msg.setSource(50448U);
    msg.setSourceEntity(248U);
    msg.setDestination(54164U);
    msg.setDestinationEntity(231U);
    msg.value = 0.572099970651;

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
    msg.setTimeStamp(0.938840384752);
    msg.setSource(40043U);
    msg.setSourceEntity(47U);
    msg.setDestination(27243U);
    msg.setDestinationEntity(0U);
    msg.value = 0.773790132907;

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
    msg.setTimeStamp(0.964565385984);
    msg.setSource(34341U);
    msg.setSourceEntity(103U);
    msg.setDestination(2638U);
    msg.setDestinationEntity(252U);
    msg.value = 0.28839643806;

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
    msg.setTimeStamp(0.180076515382);
    msg.setSource(52116U);
    msg.setSourceEntity(69U);
    msg.setDestination(11783U);
    msg.setDestinationEntity(57U);
    msg.timestamp_last_service = 0.0950876406003;
    msg.time_next_service = 0.521469622046;
    msg.time_motor_next_service = 0.967887723724;
    msg.time_idle_ground = 0.005335170261;
    msg.time_idle_air = 0.65825089319;
    msg.time_idle_water = 0.228545360212;
    msg.time_idle_underwater = 0.605951666929;
    msg.time_idle_unknown = 0.672872442959;
    msg.time_motor_ground = 0.500255810324;
    msg.time_motor_air = 0.940039225704;
    msg.time_motor_water = 0.241281283338;
    msg.time_motor_underwater = 0.340429781306;
    msg.time_motor_unknown = 0.753917113859;
    msg.rpm_min = -6542;
    msg.rpm_max = 19483;
    msg.depth_max = 0.50632169583;

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
    msg.setTimeStamp(0.678969125045);
    msg.setSource(14580U);
    msg.setSourceEntity(6U);
    msg.setDestination(59875U);
    msg.setDestinationEntity(28U);
    msg.timestamp_last_service = 0.947771079732;
    msg.time_next_service = 0.709356007304;
    msg.time_motor_next_service = 0.824825263613;
    msg.time_idle_ground = 0.0381734516347;
    msg.time_idle_air = 0.354339633127;
    msg.time_idle_water = 0.144651447091;
    msg.time_idle_underwater = 0.593112612248;
    msg.time_idle_unknown = 0.176618063297;
    msg.time_motor_ground = 0.629695831367;
    msg.time_motor_air = 0.0731182589397;
    msg.time_motor_water = 0.154818579362;
    msg.time_motor_underwater = 0.838344897241;
    msg.time_motor_unknown = 0.900373797408;
    msg.rpm_min = 32500;
    msg.rpm_max = -11341;
    msg.depth_max = 0.61679318845;

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
    msg.setTimeStamp(0.291129896745);
    msg.setSource(42491U);
    msg.setSourceEntity(161U);
    msg.setDestination(11390U);
    msg.setDestinationEntity(197U);
    msg.timestamp_last_service = 0.265757840268;
    msg.time_next_service = 0.6495754486;
    msg.time_motor_next_service = 0.0624079012273;
    msg.time_idle_ground = 0.310630234667;
    msg.time_idle_air = 0.204795240682;
    msg.time_idle_water = 0.911866805319;
    msg.time_idle_underwater = 0.229704999993;
    msg.time_idle_unknown = 0.416061681884;
    msg.time_motor_ground = 0.0834236013687;
    msg.time_motor_air = 0.682565513495;
    msg.time_motor_water = 0.0942934714051;
    msg.time_motor_underwater = 0.455346078796;
    msg.time_motor_unknown = 0.092407553015;
    msg.rpm_min = -8056;
    msg.rpm_max = 1787;
    msg.depth_max = 0.263394276561;

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
    msg.setTimeStamp(0.561914840769);
    msg.setSource(13670U);
    msg.setSourceEntity(75U);
    msg.setDestination(17317U);
    msg.setDestinationEntity(163U);
    msg.severity = 53U;
    msg.text.assign("AHYHIFAIWGSFNTDWXNESGLUMTQBTMWARYFRBCPFXJLYSPDPOORXYVJVELUVFKJGVVAQDERUXIKPWMCXJMBJLNQLZCMWPKMYAHKWNVSJUZBZDHFTNWHTZGBBWUYCIBBPQCUZQEMEPFOKNYUXYEORYKQFFSCDCITHGSLFEOZSNYATXDKAZXIR");

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
    msg.setTimeStamp(0.858176488584);
    msg.setSource(22809U);
    msg.setSourceEntity(24U);
    msg.setDestination(47471U);
    msg.setDestinationEntity(92U);
    msg.severity = 194U;
    msg.text.assign("CVASVXQSJADJXZPCMMBVUNSTAJHNQYPVXPFRZNWQAUDYHVPMSKMVCSGTOPYDRUSBLQISFQXKGOYGXPKETWEMRGUMQKNXBWSZYQWCZCATDFDUUHDVFGGXELKOWFWQAJRHORHJAGFTVQFGTJPZUBYIODELHNBICCYAELCZFROPYIJMFGCIMKKVJODRPTOLXHLLDPSQGVTYCEBZEFNEIDEUWWRITHABNTKOIZNJWJLYNMRRBULSXKZMHB");

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
    msg.setTimeStamp(0.288890410743);
    msg.setSource(32035U);
    msg.setSourceEntity(59U);
    msg.setDestination(13711U);
    msg.setDestinationEntity(12U);
    msg.severity = 57U;
    msg.text.assign("VDYZSHQGPLOARARCYBPFYYNJLUFSRNIMMLEEBCNXZRDOQJVKURJKWZWTDGADZZTNNLGXKJWXHQKQKSATADYHVIFCOFEYBCWUSAWHJOPICQGEQKBHTVMNMWPLVAUYBJGOCMIDTUZZJCSSTBVQVFMPENFOZVXONPETLEFIWQXCXHUSRXSGZQLMLIKLTFJDNFYUBSKMCBHIRVTISVBMDYRAEWYMPGPXGPUOGLODNCFZQBJURUDJWGAIAXERPTHIH");

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
    msg.setTimeStamp(0.373485417459);
    msg.setSource(64714U);
    msg.setSourceEntity(29U);
    msg.setDestination(37245U);
    msg.setDestinationEntity(161U);
    msg.channel = 76;
    msg.value = -304768492;
    msg.gain = 16U;

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
    msg.setTimeStamp(0.677854751858);
    msg.setSource(17828U);
    msg.setSourceEntity(57U);
    msg.setDestination(23213U);
    msg.setDestinationEntity(147U);
    msg.channel = -92;
    msg.value = -519540915;
    msg.gain = 3U;

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
    msg.setTimeStamp(0.162733719044);
    msg.setSource(26968U);
    msg.setSourceEntity(54U);
    msg.setDestination(30206U);
    msg.setDestinationEntity(6U);
    msg.channel = -68;
    msg.value = 1859674042;
    msg.gain = 188U;

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
    msg.setTimeStamp(0.0836174233176);
    msg.setSource(35882U);
    msg.setSourceEntity(5U);
    msg.setDestination(45493U);
    msg.setDestinationEntity(166U);
    msg.ch01 = 0.906667741374;
    msg.ch02 = 0.890912674481;
    msg.ch03 = 0.566898801647;
    msg.ch04 = 0.444536535737;
    msg.ch05 = 0.351015538739;
    msg.ch06 = 0.192862623466;
    msg.ch07 = 0.599051310526;
    msg.ch08 = 0.5441387814;
    msg.ch09 = 0.11311564505;
    msg.ch10 = 0.518623042409;
    msg.ch11 = 0.48461602146;
    msg.ch12 = 0.883524993042;
    msg.ch13 = 0.153391895487;
    msg.ch14 = 0.875248989651;
    msg.ch15 = 0.477593269388;
    msg.ch16 = 0.065097416817;

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
    msg.setTimeStamp(0.799703257878);
    msg.setSource(39885U);
    msg.setSourceEntity(129U);
    msg.setDestination(62663U);
    msg.setDestinationEntity(59U);
    msg.ch01 = 0.0244318635489;
    msg.ch02 = 0.339808212641;
    msg.ch03 = 0.290325903814;
    msg.ch04 = 0.991190053821;
    msg.ch05 = 0.87823043065;
    msg.ch06 = 0.252115091202;
    msg.ch07 = 0.110627766774;
    msg.ch08 = 0.712628558351;
    msg.ch09 = 0.808328395832;
    msg.ch10 = 0.492063075275;
    msg.ch11 = 0.597169625947;
    msg.ch12 = 0.264644097738;
    msg.ch13 = 0.752240924215;
    msg.ch14 = 0.90329847067;
    msg.ch15 = 0.806371870517;
    msg.ch16 = 0.953919658473;

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
    msg.setTimeStamp(0.339699114644);
    msg.setSource(27828U);
    msg.setSourceEntity(157U);
    msg.setDestination(14757U);
    msg.setDestinationEntity(122U);
    msg.ch01 = 0.787686694087;
    msg.ch02 = 0.844884954937;
    msg.ch03 = 0.504873224004;
    msg.ch04 = 0.235768476865;
    msg.ch05 = 0.944137384639;
    msg.ch06 = 0.37641025747;
    msg.ch07 = 0.197898917387;
    msg.ch08 = 0.74764504802;
    msg.ch09 = 0.219915875384;
    msg.ch10 = 0.989613071918;
    msg.ch11 = 0.0258207307857;
    msg.ch12 = 0.443457940106;
    msg.ch13 = 0.922720045906;
    msg.ch14 = 0.769037193398;
    msg.ch15 = 0.622733017804;
    msg.ch16 = 0.134093499866;

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
    msg.setTimeStamp(0.210292929845);
    msg.setSource(267U);
    msg.setSourceEntity(192U);
    msg.setDestination(62513U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.591233297589;
    msg.lon = 0.278147488756;
    msg.x = 0.909189956868;
    msg.y = 0.140262898259;
    msg.z = 0.0250404430485;
    msg.vx = 0.870388942201;
    msg.vy = 0.00143044074619;
    msg.vz = 0.506093211024;
    msg.depth = 182U;
    msg.speed = 0.286816811959;
    msg.psi = 0.256812235356;

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
    msg.setTimeStamp(0.151071529424);
    msg.setSource(27149U);
    msg.setSourceEntity(102U);
    msg.setDestination(38026U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.862998559499;
    msg.lon = 0.397810781866;
    msg.x = 0.625090270234;
    msg.y = 0.85922596865;
    msg.z = 0.359068279001;
    msg.vx = 0.431263816059;
    msg.vy = 0.892976887175;
    msg.vz = 0.460263920914;
    msg.depth = 189U;
    msg.speed = 0.85645246613;
    msg.psi = 0.271576851175;

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
    msg.setTimeStamp(0.763763240733);
    msg.setSource(25524U);
    msg.setSourceEntity(179U);
    msg.setDestination(36190U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.63214198082;
    msg.lon = 0.3438472187;
    msg.x = 0.779712747901;
    msg.y = 0.958813747735;
    msg.z = 0.217008503079;
    msg.vx = 0.916380230743;
    msg.vy = 0.292902441025;
    msg.vz = 0.756511546428;
    msg.depth = 9U;
    msg.speed = 0.040935525875;
    msg.psi = 0.152446524706;

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
    msg.setTimeStamp(0.659386454945);
    msg.setSource(14391U);
    msg.setSourceEntity(108U);
    msg.setDestination(40777U);
    msg.setDestinationEntity(186U);
    msg.ctrl_cmd_v = 0.714449626591;
    msg.ctrl_cmd_omega = 0.637181886292;
    msg.sat_ctrl_cmd_v = 0.283852759933;
    msg.sat_ctrl_cmd_omega = 0.818594539057;
    msg.robust_v = 0.36991886465;
    msg.robust_omega = 0.0317432451855;
    msg.gamma = 0.408315502849;
    msg.gamma_dot = 0.291787191241;
    msg.g_err = 0.703064880614;
    msg.target_x = 0.246542900257;
    msg.target_y = 0.0879713172139;
    msg.target_z = 0.29417100548;
    msg.target_vx = 0.824024667204;
    msg.target_vy = 0.0461968226856;
    msg.target_vz = 0.890065493316;
    msg.x = 0.358541762966;
    msg.y = 0.673278506142;
    msg.z = 0.837887160264;
    msg.vx = 0.0469481810962;
    msg.vy = 0.547136494484;
    msg.vz = 0.38371757998;
    msg.pd_x = 0.769591815883;
    msg.pd_y = 0.0868882523946;
    msg.p_ref_x = 0.798507949606;
    msg.p_ref_y = 0.254000100784;
    msg.norm_mpf_err = 0.19609715453;
    msg.mpf_err_x = 0.860577783599;
    msg.mpf_err_y = 0.308232217827;
    msg.mpf_err_z = 0.990963557051;
    msg.err_x = 0.375594093222;
    msg.err_y = 0.367743300362;
    msg.err_z = 0.850710489414;
    msg.start_x = 0.274415649834;
    msg.start_y = 0.495484797758;
    msg.start_z = 0.571679172788;
    msg.end_x = 0.981884132609;
    msg.end_y = 0.716429939047;
    msg.end_z = 0.943354128795;

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
    msg.setTimeStamp(0.298962625556);
    msg.setSource(1561U);
    msg.setSourceEntity(153U);
    msg.setDestination(39450U);
    msg.setDestinationEntity(243U);
    msg.ctrl_cmd_v = 0.0294785844587;
    msg.ctrl_cmd_omega = 0.845318004572;
    msg.sat_ctrl_cmd_v = 0.0612034770968;
    msg.sat_ctrl_cmd_omega = 0.229581645939;
    msg.robust_v = 0.536180066085;
    msg.robust_omega = 0.483401122132;
    msg.gamma = 0.280999066524;
    msg.gamma_dot = 0.82249525204;
    msg.g_err = 0.575692735798;
    msg.target_x = 0.618312895189;
    msg.target_y = 0.298347147783;
    msg.target_z = 0.849758547098;
    msg.target_vx = 0.595919735027;
    msg.target_vy = 0.288783571803;
    msg.target_vz = 0.587027510314;
    msg.x = 0.251537218157;
    msg.y = 0.871698234688;
    msg.z = 0.0540588652882;
    msg.vx = 0.302431589673;
    msg.vy = 0.496954239178;
    msg.vz = 0.263101989162;
    msg.pd_x = 0.956386396432;
    msg.pd_y = 0.922965967603;
    msg.p_ref_x = 0.893425729403;
    msg.p_ref_y = 0.946684058842;
    msg.norm_mpf_err = 0.98884951833;
    msg.mpf_err_x = 0.585243737464;
    msg.mpf_err_y = 0.641516962224;
    msg.mpf_err_z = 0.329412896634;
    msg.err_x = 0.650502213753;
    msg.err_y = 0.148806274966;
    msg.err_z = 0.148723790645;
    msg.start_x = 0.0185629759363;
    msg.start_y = 0.0464181052182;
    msg.start_z = 0.594719236179;
    msg.end_x = 0.913640367848;
    msg.end_y = 0.422933987345;
    msg.end_z = 0.0608349269271;

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
    msg.setTimeStamp(0.971711639901);
    msg.setSource(45818U);
    msg.setSourceEntity(115U);
    msg.setDestination(54456U);
    msg.setDestinationEntity(39U);
    msg.ctrl_cmd_v = 0.169393104922;
    msg.ctrl_cmd_omega = 0.741347530243;
    msg.sat_ctrl_cmd_v = 0.444619761096;
    msg.sat_ctrl_cmd_omega = 0.586136568265;
    msg.robust_v = 0.766805684842;
    msg.robust_omega = 0.506170995255;
    msg.gamma = 0.592136487829;
    msg.gamma_dot = 0.0424888979102;
    msg.g_err = 0.736801303988;
    msg.target_x = 0.267008918083;
    msg.target_y = 0.751702768293;
    msg.target_z = 0.298146869342;
    msg.target_vx = 0.770732402467;
    msg.target_vy = 0.50567153229;
    msg.target_vz = 0.978508097352;
    msg.x = 0.769957507603;
    msg.y = 0.751412503516;
    msg.z = 0.502700151295;
    msg.vx = 0.00344852741303;
    msg.vy = 0.527351787281;
    msg.vz = 0.800415938167;
    msg.pd_x = 0.349861787912;
    msg.pd_y = 0.0790892759755;
    msg.p_ref_x = 0.447278457658;
    msg.p_ref_y = 0.872154311739;
    msg.norm_mpf_err = 0.333405204692;
    msg.mpf_err_x = 0.87178227594;
    msg.mpf_err_y = 0.799694711042;
    msg.mpf_err_z = 0.84797903476;
    msg.err_x = 0.228700334459;
    msg.err_y = 0.174403876962;
    msg.err_z = 0.428469483391;
    msg.start_x = 0.685341155585;
    msg.start_y = 0.158264130048;
    msg.start_z = 0.464254674834;
    msg.end_x = 0.239853848812;
    msg.end_y = 0.439283651995;
    msg.end_z = 0.400294431626;

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
    msg.setTimeStamp(0.720257279199);
    msg.setSource(54922U);
    msg.setSourceEntity(165U);
    msg.setDestination(49956U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0917791679764;

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
    msg.setTimeStamp(0.0591006111332);
    msg.setSource(52608U);
    msg.setSourceEntity(16U);
    msg.setDestination(51769U);
    msg.setDestinationEntity(77U);
    msg.value = 0.219949211775;

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
    msg.setTimeStamp(0.757396071621);
    msg.setSource(39348U);
    msg.setSourceEntity(206U);
    msg.setDestination(30492U);
    msg.setDestinationEntity(15U);
    msg.value = 0.569125665619;

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
