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
// IMC XML MD5: 2a39ad05f1ee6252f29ef5993b719833                            *
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
    msg.setTimeStamp(0.149097005737);
    msg.setSource(40013U);
    msg.setSourceEntity(81U);
    msg.setDestination(49325U);
    msg.setDestinationEntity(161U);
    msg.state = 100U;
    msg.flags = 241U;
    msg.description.assign("SOJSEMXXWFITHVGLCQEQYIKOXZPRQDKFVSHAKIXJZMSUYWGVVRTDUARUBJNDLOGKTYZNSQTNFLQQEAGBAILTHBDAFIMGAOPFBOCVGOREZWPNNCXAUJKCKFUUOYNICGPLYWXRJBOSPHNYRFBMCCEDIPPMRSVQGXXYVLLMLMFACOWWMJZXVF");

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
    msg.setTimeStamp(0.870213150356);
    msg.setSource(19469U);
    msg.setSourceEntity(204U);
    msg.setDestination(62132U);
    msg.setDestinationEntity(131U);
    msg.state = 179U;
    msg.flags = 158U;
    msg.description.assign("BKOSZHAYACTBUUCOVZEITAPNWNVMEXUCZQPOITNAFVWBJEZDQJUISWLWKSTVZKVMYPDKEXLCMEALTOURXJVRTKZPYZLWSQDOWNNSSLXYRNJBXMQPEUIAYNEDGGPHFKXGBDHSLMAGJNAOFIHBHDGEXUWGFRSCKLGTMLYYAQUQBKVWZCBUEZHDECYJDKHNFPITRVGNDFIPPTMMMJBORWOSAGUWFHVCLHLFYT");

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
    msg.setTimeStamp(0.291343738538);
    msg.setSource(448U);
    msg.setSourceEntity(179U);
    msg.setDestination(23551U);
    msg.setDestinationEntity(31U);
    msg.state = 129U;
    msg.flags = 28U;
    msg.description.assign("LVSATGQIQJKLBOEOBUSRRFRVZTXPDCSBXAMZSCYSGDTUUPYAPPDSEJJIMQNZURJKLONDHNVIDCBNSAUHMIZQVCOHVEURRRSTWUVQTKIZMWGWBNOIXZZNIQDYZXFLYLBMJOIHISFQOKVJKJBYWKLUIWACXCAPKWHPCGFFLMHGOFMGX");

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
    msg.setTimeStamp(0.0903734196095);
    msg.setSource(49364U);
    msg.setSourceEntity(177U);
    msg.setDestination(21732U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.0736312274028);
    msg.setSource(34957U);
    msg.setSourceEntity(68U);
    msg.setDestination(17153U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.309140905708);
    msg.setSource(15221U);
    msg.setSourceEntity(189U);
    msg.setDestination(47160U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.461613680085);
    msg.setSource(9421U);
    msg.setSourceEntity(228U);
    msg.setDestination(7714U);
    msg.setDestinationEntity(83U);
    msg.id = 116U;
    msg.label.assign("BEIGKCKZZYLGTJMOFPLNZJPKLCPPBFMGPSMJOHQSAVWYYDFWQDJRRUUJDKNMQKEPNSQURXJNXQBCWGGUXVNOIMFLFXUXBGGFEWHPQDRQBMOIGVYASMKYMQ");
    msg.component.assign("CGGZUCVDXKYXIQKJMEPKUPMFELFYWDPNCPYDSQGQJEGRQVNDCUMDHJKNPAVUBLCKIPMTRKWOVBCHBFSWAEYVFQNZJFEIAUREJICJLBZIELLJERCLZTHECNGDBKYRUBJPTFKCST");
    msg.act_time = 59258U;
    msg.deact_time = 28766U;

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
    msg.setTimeStamp(0.373019897096);
    msg.setSource(13137U);
    msg.setSourceEntity(105U);
    msg.setDestination(33542U);
    msg.setDestinationEntity(65U);
    msg.id = 220U;
    msg.label.assign("EUXHJTJUVTQYDZHJRTBQEUVRKSMMOQITIIENGBZBUCYXSIEKPJLZLIWUNBCLAXVMCDEHQERSXDM");
    msg.component.assign("SYAHOYECOIMSWNRWJTBLZCCZLUEYQDBPBPXJNTVJNMLVWEEGLSVFBOIMPHBQYRTPJWIODDCCIKISMKGROTORDPVUIHJKCSZQCERLSKLOHEZUGRWYNXDIGZDJUGFLZCQKNSSXHWURQTFAJBQJXFTEETDWBMXHDVWQKZMIAPPAGTFRSHNACALVYXUHKQRXLMUPROEWJCVVPKUMINTYYHZAOSFMUDXBBFNWTFZGAKBNHQGFDIAUNMVXZ");
    msg.act_time = 30811U;
    msg.deact_time = 30645U;

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
    msg.setTimeStamp(0.138580318671);
    msg.setSource(16709U);
    msg.setSourceEntity(195U);
    msg.setDestination(5131U);
    msg.setDestinationEntity(18U);
    msg.id = 218U;
    msg.label.assign("JEBHGLPZXUMSGNOSKRVGHYNIBKZCDOWJNUQPNWLIBFWYYYSAELHWCLVTFDSXPMKMUTQUQERZHFEACWJRDNCBCLPTCTSXTVLNDGLAHJXWFGQQIAXOVQMSDCRCMXZWECMJBPUKERUDNGPZZ");
    msg.component.assign("YHLYZMMRHMEGTYYMXVRNLAPSBBCNQFCKBPFUDMUHSXTSURUNRMWNCLCLBHFICLQKHQJXWUSKTJERKGVWOKYJVVUJIGQPGDYTPACZIPELNEXRIHBMKSUCWLRSUFID");
    msg.act_time = 13256U;
    msg.deact_time = 5944U;

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
    msg.setTimeStamp(0.781281715014);
    msg.setSource(20486U);
    msg.setSourceEntity(37U);
    msg.setDestination(52511U);
    msg.setDestinationEntity(252U);
    msg.id = 251U;

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
    msg.setTimeStamp(0.852984423775);
    msg.setSource(27629U);
    msg.setSourceEntity(250U);
    msg.setDestination(28840U);
    msg.setDestinationEntity(36U);
    msg.id = 194U;

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
    msg.setTimeStamp(0.178540189679);
    msg.setSource(51768U);
    msg.setSourceEntity(241U);
    msg.setDestination(64776U);
    msg.setDestinationEntity(152U);
    msg.id = 105U;

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
    msg.setTimeStamp(0.580940900683);
    msg.setSource(26240U);
    msg.setSourceEntity(70U);
    msg.setDestination(11010U);
    msg.setDestinationEntity(204U);
    msg.op = 47U;
    msg.list.assign("BLPVVHIGTCAUMTYDOUIUTIALPJOWICS");

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
    msg.setTimeStamp(0.792069118346);
    msg.setSource(57812U);
    msg.setSourceEntity(53U);
    msg.setDestination(53963U);
    msg.setDestinationEntity(98U);
    msg.op = 231U;
    msg.list.assign("UFWZCTSHLDHVMFSEDLXQKOQHOKVDQHRRQUSBAAXBJAOSWTPYIYOPRGFWWEVXMCKXTSLIHGNHLZELNBXWPIIYMRUQIQRPBNBKLVNNYCSZBHFGUXCVOLACUXLIWXPQOZHKGQOUVKRXLRMFNZEOGJYJEDBTJOBHOSCKVTGIVHWPJDV");

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
    msg.setTimeStamp(0.498673636334);
    msg.setSource(36337U);
    msg.setSourceEntity(23U);
    msg.setDestination(28636U);
    msg.setDestinationEntity(144U);
    msg.op = 144U;
    msg.list.assign("MQLCHGMJILHCSDSXTFDZOPZRUELVYVVKXQGBCCXVBRBCSWZLOKWSWMDZKYXAGIJWWZPSRYEHNADUMRBPTMWACTKZUIKFXFTYLHRKADPEOIHVQNTNNLFGIBXUQJOSMIFRJEDQFPKYOJLGKWFVOQSRVPVINUUD");

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
    msg.setTimeStamp(0.320727986874);
    msg.setSource(1347U);
    msg.setSourceEntity(25U);
    msg.setDestination(51491U);
    msg.setDestinationEntity(116U);
    msg.value = 153U;

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
    msg.setTimeStamp(0.0541066304868);
    msg.setSource(15930U);
    msg.setSourceEntity(147U);
    msg.setDestination(12651U);
    msg.setDestinationEntity(39U);
    msg.value = 182U;

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
    msg.setTimeStamp(0.142102170148);
    msg.setSource(6960U);
    msg.setSourceEntity(100U);
    msg.setDestination(33739U);
    msg.setDestinationEntity(46U);
    msg.value = 72U;

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
    msg.setTimeStamp(0.375484392238);
    msg.setSource(9406U);
    msg.setSourceEntity(171U);
    msg.setDestination(55665U);
    msg.setDestinationEntity(243U);
    msg.consumer.assign("DSDLYDQIRACHWTGZMEQCAAYWLWFKHVPJIUTWREQESLMETJSVFYBLHPTVUAYZPLFPUSHBIHWLEJGNZNNCPJZAYCDIFROKTGQMQWVHCXDRAYCSUAHXWWIOTYWHOZXOSMFBXRGDZIMTMUZPPRTECMPAONNDVBJUAPKJIGGBDFLXQXVFKYSIAEMBDOJRUJKHCKFKSXHFNVKOYTNROGUXCQQNZBZUJLUSBQJGYNWGREVENVKIQVIROEBXKMLGTD");
    msg.message_id = 14881U;

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
    msg.setTimeStamp(0.601360036594);
    msg.setSource(13986U);
    msg.setSourceEntity(96U);
    msg.setDestination(3170U);
    msg.setDestinationEntity(106U);
    msg.consumer.assign("QFNRRIVILBQJZOUMXVNHQAXMCIXMFBGUQDEWAKEJTWPNDPZLABKINWJICKFCPUYWASGPTNWKUVTXAVSCYSCCIXZZMJPYHEUARNSDOUHLOOSWTDEGXLRHSVKRO");
    msg.message_id = 65382U;

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
    msg.setTimeStamp(0.127334597171);
    msg.setSource(40676U);
    msg.setSourceEntity(227U);
    msg.setDestination(8428U);
    msg.setDestinationEntity(240U);
    msg.consumer.assign("DVNIVSMYXOFDTDAWYGXSJRAQBCMWOMGCOLEMQULBKWZLFDJKOIKTRPZLAWXFTXGHPRQZZ");
    msg.message_id = 61291U;

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
    msg.setTimeStamp(0.738284063119);
    msg.setSource(40423U);
    msg.setSourceEntity(240U);
    msg.setDestination(28550U);
    msg.setDestinationEntity(191U);
    msg.type = 232U;

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
    msg.setTimeStamp(0.950104990498);
    msg.setSource(27507U);
    msg.setSourceEntity(240U);
    msg.setDestination(11724U);
    msg.setDestinationEntity(212U);
    msg.type = 203U;

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
    msg.setTimeStamp(0.881095011708);
    msg.setSource(33837U);
    msg.setSourceEntity(78U);
    msg.setDestination(31126U);
    msg.setDestinationEntity(182U);
    msg.type = 9U;

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
    msg.setTimeStamp(0.572198855495);
    msg.setSource(50620U);
    msg.setSourceEntity(45U);
    msg.setDestination(16439U);
    msg.setDestinationEntity(209U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.91073986544);
    msg.setSource(36862U);
    msg.setSourceEntity(87U);
    msg.setDestination(34620U);
    msg.setDestinationEntity(59U);
    msg.op = 199U;

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
    msg.setTimeStamp(0.638151407033);
    msg.setSource(58066U);
    msg.setSourceEntity(136U);
    msg.setDestination(54398U);
    msg.setDestinationEntity(222U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.355849784383);
    msg.setSource(34028U);
    msg.setSourceEntity(191U);
    msg.setDestination(51099U);
    msg.setDestinationEntity(130U);
    msg.total_steps = 78U;
    msg.step_number = 169U;
    msg.step.assign("NCTOQNYIGUQNOQUTMOXKJRQIBSUHEZYWVQMBNETAXDWVHHFBZROKOWXTDXESJTZPENIFWUDFRPAAKCJYIJLWLFBGPSMAOZXXULPMPOLYGCCDBFQTYRINWAVXTFCHECXBVLUEUEHVAYUGMRIDPKHCKKYDMFCFVIWNSBGJBKPFZMSJGMECUJTSQVRZOEHNWEQYPHGWCGNOPMHHLPK");
    msg.flags = 39U;

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
    msg.setTimeStamp(0.690591633296);
    msg.setSource(22352U);
    msg.setSourceEntity(204U);
    msg.setDestination(16743U);
    msg.setDestinationEntity(56U);
    msg.total_steps = 198U;
    msg.step_number = 122U;
    msg.step.assign("VTZZWNIKMANVXQEBSRXCJRHRJUKKVJFTVGKEWYXBMWREPUSZOUGVJTLUOVLUDYDCMNPHHPBCBOMAEIQPWRZBXPEQJHMBZFLYSKGXSXTCUFFDLNQBIDPHHSI");
    msg.flags = 63U;

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
    msg.setTimeStamp(0.970600155817);
    msg.setSource(7656U);
    msg.setSourceEntity(169U);
    msg.setDestination(57476U);
    msg.setDestinationEntity(139U);
    msg.total_steps = 101U;
    msg.step_number = 50U;
    msg.step.assign("VREWWZTATKNLDOMNDSLCYADTBZIFTLLSBZZBMSCYRWGXVGGPZTIJOEVTAZMLRZAAWJRWYCCPUBEHSYSERXLVQWXEGPLXRKDE");
    msg.flags = 198U;

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
    msg.setTimeStamp(0.272826311954);
    msg.setSource(20213U);
    msg.setSourceEntity(21U);
    msg.setDestination(50423U);
    msg.setDestinationEntity(181U);
    msg.state = 39U;
    msg.error.assign("PXXYERMFNLHDHVYRBPGVCDYTSNMTIEOIKNFENOBIJXCUXFHWAQGYYTCIKBLJXELKOLORBBDGCZLLYSHSPXQOHDNWBAKSINTPOQFVDDLQFNNNRZALGMOGYUKMKDWHUQYQFFSUZAEWJHVQRIIRUJSKAKCP");

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
    msg.setTimeStamp(0.619966682074);
    msg.setSource(12185U);
    msg.setSourceEntity(121U);
    msg.setDestination(31700U);
    msg.setDestinationEntity(85U);
    msg.state = 13U;
    msg.error.assign("ZECOPCWLKVNHOYPUBCNQXPGICFRVYMLGUBEZ");

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
    msg.setTimeStamp(0.70735570758);
    msg.setSource(58594U);
    msg.setSourceEntity(232U);
    msg.setDestination(34585U);
    msg.setDestinationEntity(95U);
    msg.state = 189U;
    msg.error.assign("WJSTTUNGDZSKBGHHNNFNXSKAEDZTMVLRBAGKAIHXPFHXLNBJMYXECOBCJQUZVMOQRQSFPYDAWOJFMJDWEDCIRNPTUVYQDRKSUHOVPOQBNYPOTAHPGFPFZOLOVPQJEIBGWTXQRIMVZIQFEZIREYLLUAMM");

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
    msg.setTimeStamp(0.866531143569);
    msg.setSource(24427U);
    msg.setSourceEntity(94U);
    msg.setDestination(13910U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.472335849219);
    msg.setSource(30662U);
    msg.setSourceEntity(232U);
    msg.setDestination(21460U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.620613216526);
    msg.setSource(32565U);
    msg.setSourceEntity(249U);
    msg.setDestination(26047U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.131351942465);
    msg.setSource(19731U);
    msg.setSourceEntity(109U);
    msg.setDestination(55013U);
    msg.setDestinationEntity(55U);
    msg.op = 99U;
    msg.speed_min = 0.267728949547;
    msg.speed_max = 0.198641939162;
    msg.long_accel = 0.358549171192;
    msg.alt_max_msl = 0.424302641227;
    msg.dive_fraction_max = 0.665750740335;
    msg.climb_fraction_max = 0.00386214315735;
    msg.bank_max = 0.930822056212;
    msg.p_max = 0.785272018511;
    msg.pitch_min = 0.496892660157;
    msg.pitch_max = 0.447097046687;
    msg.q_max = 0.0284495782462;
    msg.g_min = 0.847054022416;
    msg.g_max = 0.305481715054;
    msg.g_lat_max = 0.916138579402;
    msg.rpm_min = 0.0734869632436;
    msg.rpm_max = 0.729883558271;
    msg.rpm_rate_max = 0.0708984017542;

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
    msg.setTimeStamp(0.279641798266);
    msg.setSource(10857U);
    msg.setSourceEntity(118U);
    msg.setDestination(18448U);
    msg.setDestinationEntity(102U);
    msg.op = 114U;
    msg.speed_min = 0.512273177147;
    msg.speed_max = 0.0447364078216;
    msg.long_accel = 0.785180935115;
    msg.alt_max_msl = 0.759713432756;
    msg.dive_fraction_max = 0.121190961442;
    msg.climb_fraction_max = 0.798440900099;
    msg.bank_max = 0.465915642406;
    msg.p_max = 0.76895547503;
    msg.pitch_min = 0.394525192548;
    msg.pitch_max = 0.655796281128;
    msg.q_max = 0.651572670282;
    msg.g_min = 0.19182217632;
    msg.g_max = 0.718828592091;
    msg.g_lat_max = 0.00125203281399;
    msg.rpm_min = 0.0109107901066;
    msg.rpm_max = 0.97732269454;
    msg.rpm_rate_max = 0.218499311633;

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
    msg.setTimeStamp(0.678820657096);
    msg.setSource(41183U);
    msg.setSourceEntity(48U);
    msg.setDestination(39036U);
    msg.setDestinationEntity(187U);
    msg.op = 105U;
    msg.speed_min = 0.408983866384;
    msg.speed_max = 0.422513593176;
    msg.long_accel = 0.153344282682;
    msg.alt_max_msl = 0.115126477055;
    msg.dive_fraction_max = 0.833047816301;
    msg.climb_fraction_max = 0.739224810998;
    msg.bank_max = 0.0692158213514;
    msg.p_max = 0.853396951484;
    msg.pitch_min = 0.372910307569;
    msg.pitch_max = 0.821928680801;
    msg.q_max = 0.14140753255;
    msg.g_min = 0.933317734773;
    msg.g_max = 0.151502666475;
    msg.g_lat_max = 0.0231170698022;
    msg.rpm_min = 0.464424067211;
    msg.rpm_max = 0.0152000821452;
    msg.rpm_rate_max = 0.0756822363423;

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
    msg.setTimeStamp(0.689974497742);
    msg.setSource(19785U);
    msg.setSourceEntity(234U);
    msg.setDestination(41785U);
    msg.setDestinationEntity(31U);
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.660987770841;
    tmp_msg_0.confidence = 0.11520182985;
    tmp_msg_0.opmodes.assign("ZJOYUQSQIOCUVPMCZLCJMDSYQTTSCVSFNGVVUKBIWWCPYTDORMKBLEQFFAKXKGINYOSHOSONCUEXNSONQWEPIDGKLRDXXJGYAMHPXMUMLVMOATDQNDJBIRHOBZUQFFAHSGNVEYLLCPSRRFYXPUWCZMBTRKJQCGVJ");
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
    msg.setTimeStamp(0.910030275629);
    msg.setSource(4713U);
    msg.setSourceEntity(88U);
    msg.setDestination(49817U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.959341764582);
    msg.setSource(21496U);
    msg.setSourceEntity(192U);
    msg.setDestination(23313U);
    msg.setDestinationEntity(104U);
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("DHPIPCJELOIWNXNFHQSVZBVAQWRWBOCZREOMFHVYNRVNGKCCGJURZZRDTBYPNBWKFUAAZGSDZLMTBBQHMQLXIFKOOTKYKVSGAMAYKHJ");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GIUJUGQAFDZLJPGNDRDBLK");
    tmp_tmp_msg_0_0.value.assign("GXUDJNTVTYSOZMLYJVJWAUHVHHBXILMWE");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.788407650409);
    msg.setSource(47336U);
    msg.setSourceEntity(128U);
    msg.setDestination(24073U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.178888774433;
    msg.lon = 0.716309355385;
    msg.height = 0.298517995681;
    msg.x = 0.833927308122;
    msg.y = 0.616728875011;
    msg.z = 0.561772669434;
    msg.phi = 0.418968313949;
    msg.theta = 0.668217647305;
    msg.psi = 0.68060728642;
    msg.u = 0.751214188789;
    msg.v = 0.153268512701;
    msg.w = 0.955296136172;
    msg.p = 0.68256062602;
    msg.q = 0.662698903267;
    msg.r = 0.553904207941;
    msg.svx = 0.833208314683;
    msg.svy = 0.753302190938;
    msg.svz = 0.557932479263;

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
    msg.setTimeStamp(0.594541529725);
    msg.setSource(53589U);
    msg.setSourceEntity(216U);
    msg.setDestination(1688U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.415597861783;
    msg.lon = 0.818865357036;
    msg.height = 0.836858339127;
    msg.x = 0.393030592596;
    msg.y = 0.052388189389;
    msg.z = 0.91380911424;
    msg.phi = 0.86391886541;
    msg.theta = 0.562358976492;
    msg.psi = 0.441514511374;
    msg.u = 0.510011292185;
    msg.v = 0.183063254613;
    msg.w = 0.162321625654;
    msg.p = 0.914887221179;
    msg.q = 0.210529236915;
    msg.r = 0.0903505908677;
    msg.svx = 0.854580832103;
    msg.svy = 0.867183016672;
    msg.svz = 0.914260177274;

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
    msg.setTimeStamp(0.189357678262);
    msg.setSource(24235U);
    msg.setSourceEntity(56U);
    msg.setDestination(59962U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.513227151523;
    msg.lon = 0.758485639925;
    msg.height = 0.480572924237;
    msg.x = 0.365195933425;
    msg.y = 0.934784903921;
    msg.z = 0.743243081452;
    msg.phi = 0.291970012557;
    msg.theta = 0.183409207273;
    msg.psi = 0.171735483159;
    msg.u = 0.832236213201;
    msg.v = 0.373123508843;
    msg.w = 0.839376148266;
    msg.p = 0.885340932986;
    msg.q = 0.168805044957;
    msg.r = 0.139608588185;
    msg.svx = 0.258976292474;
    msg.svy = 0.743542632128;
    msg.svz = 0.169015343638;

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
    msg.setTimeStamp(0.585504387638);
    msg.setSource(27073U);
    msg.setSourceEntity(53U);
    msg.setDestination(18662U);
    msg.setDestinationEntity(148U);
    msg.op = 90U;
    msg.entities.assign("DVJZBARQQLUZDPXYOHINGYZVBBGCGHAGRFWNCERSUYDNLZEPHDICTONLBZQZMQLTTCACUJWKWDCROESWXPVAEBSAIDOZIXNKTWFDMHRUWIHBSRHWTGTXOIAFDESGZVSKZTIXHYRXVBNUPYQWQTKNPVOMSGQMEJPPDXWUYNAUXAMLMFDUCGMHULUHBFBEFLEATGJVCPZRKMBFFOOKPYEJQSCTAJMJQVPLEGXWXIVJQSRJYIOFONKKHIKL");

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
    msg.setTimeStamp(0.149133592617);
    msg.setSource(34415U);
    msg.setSourceEntity(70U);
    msg.setDestination(37632U);
    msg.setDestinationEntity(119U);
    msg.op = 121U;
    msg.entities.assign("KIBDEDKNSMXQVFKUZAYXAAQEVDUTTGZJXOXNAHKHHUYPWBHQNIBDMUNBAHLZSGBGGCXWEQETRMMJQUUGTWDQBKCOLMHOQYAHTRUCEKNWSJCVDALVZAJRNELOLSHCPJZVBIRDZFVENOVBEAGXYYXOBPSQQJXATKI");

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
    msg.setTimeStamp(0.225717402875);
    msg.setSource(6755U);
    msg.setSourceEntity(113U);
    msg.setDestination(55769U);
    msg.setDestinationEntity(20U);
    msg.op = 120U;
    msg.entities.assign("BCQMVFGISSEDNBZKSKVGENGZSRLUDKFBSQVJTUGCJDF");

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
    msg.setTimeStamp(0.579399146404);
    msg.setSource(34804U);
    msg.setSourceEntity(159U);
    msg.setDestination(50709U);
    msg.setDestinationEntity(145U);
    msg.type = 242U;
    msg.speed = 29323U;
    const char tmp_msg_0[] = {-35, -1, 22, 122, 11, 84, -10, 117, -37, -65, -8, -18, -68, -38, 58, -111, -119, -109, -13, 20, 80, 4, -6, 26, 64, 0, -105, -32, -88, -37, -46, -120, -99, 69, 88, -77, 18, -19, 51, -101, -92, -56, -2, -8, -64, -98, 52, 27, -62, 21, -37, -99, 57};
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
    msg.setTimeStamp(0.271331899386);
    msg.setSource(1071U);
    msg.setSourceEntity(94U);
    msg.setDestination(10978U);
    msg.setDestinationEntity(20U);
    msg.type = 61U;
    msg.speed = 33073U;
    const char tmp_msg_0[] = {-127, -82, -44, 71, 38, -98, -42, -19, 11, 62, 23, -1, -93, 10, 12, -98, 101, -87, 61, -113, -13, -56, 64, -128, 28, 3, -63, -87, 104, 48, -81, -18, -44, -45, 24, -65, 30, -3, 8, -68, 109, 24, -3, -67, -23, -39, -104, 64, -50, -50, -34, -95, 47, 77, -127, -35, 29, 125, 37, 17, -38, 100, -10};
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
    msg.setTimeStamp(0.454499739751);
    msg.setSource(61066U);
    msg.setSourceEntity(50U);
    msg.setDestination(14807U);
    msg.setDestinationEntity(204U);
    msg.type = 62U;
    msg.speed = 41299U;
    const char tmp_msg_0[] = {-7, -58, -30, 25, -5, -4, -45, -40, 86, -9, 79, -33, -100, -90, -122, -4, 125, 36, 33, 5, -82, -22, -22, -46, 105, -128, -55, -40, 100, -66, -61, -91, -6, 124, -85, -22, -23, 65, -124, 72, 70, -108, 11, 107, 55, -30, 38, 89, -119, -117, -10, -110, 47, 30, 41, -46, 82, -114, -12, -80, 1, 23, -115, 58, -96, -14, 122, -64, 86, -49, 106, -2, -7, 81, -107, -100, -127, -126, -12, -55, 94, 45, -16, 71, 67, -22, -111, 119, 109, 117, -103, -104, -103, 112, 123, -79, 81, -93, 56, -46, -79, -12, 63, -45, 9, 91, 38, -35, -95, -40, -31, -91, -58, 25, 78, 29, 97, -68, 38, -93, 83, 35, -12, -117, 3, -39, -30, 108, -42, 28, 121, 32, 110, 9, 62, -105, -76, -4, 78, 8, -126, 120, -12, -16, -102, -128, 6, -99, 14, 28, -114, 107, 82, -91, 8, 80, -102, -110, -128, -68, -108, -80, -124, 65, 125, 3, -98, -42, 70, -43, -39, -115, 109, -111, 124, 16, -66, 49, -33, -112, 59, 12, 114, 35, -53, -33, 3, -73, 32, 35, 68, -48, 2, -107, 95, 49, -41, -58, 13, 52, -97, -43, 52, -99, 77, 8, -61, 112, 14, 49, 105, 2, 109, -62, -23, 110, 105, 43, -3, -86, 72, -127, 96, 126, -1, 86, 32, -84, -108, 96, -9, -56, -62, -54, 112, -102, -5, 18, 31, -68, -13, 76, 3, -42, 105, 46, 73, 90, 45, -31, -58, -54};
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
    msg.setTimeStamp(0.0787255883025);
    msg.setSource(1400U);
    msg.setSourceEntity(50U);
    msg.setDestination(22906U);
    msg.setDestinationEntity(125U);
    msg.op = 148U;
    msg.tas2acc_pgain = 0.397517695706;
    msg.bank2p_pgain = 0.307951799533;

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
    msg.setTimeStamp(0.814108981304);
    msg.setSource(62231U);
    msg.setSourceEntity(176U);
    msg.setDestination(50015U);
    msg.setDestinationEntity(68U);
    msg.op = 149U;
    msg.tas2acc_pgain = 0.736500533981;
    msg.bank2p_pgain = 0.475576067709;

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
    msg.setTimeStamp(0.38627033099);
    msg.setSource(45643U);
    msg.setSourceEntity(153U);
    msg.setDestination(30440U);
    msg.setDestinationEntity(104U);
    msg.op = 242U;
    msg.tas2acc_pgain = 0.182570658253;
    msg.bank2p_pgain = 0.676040192377;

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
    msg.setTimeStamp(0.427518601608);
    msg.setSource(17960U);
    msg.setSourceEntity(134U);
    msg.setDestination(58382U);
    msg.setDestinationEntity(251U);
    msg.available = 3901955718U;
    msg.value = 30U;

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
    msg.setTimeStamp(0.453192918287);
    msg.setSource(26440U);
    msg.setSourceEntity(42U);
    msg.setDestination(7506U);
    msg.setDestinationEntity(162U);
    msg.available = 2262180244U;
    msg.value = 145U;

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
    msg.setTimeStamp(0.804621168457);
    msg.setSource(25059U);
    msg.setSourceEntity(195U);
    msg.setDestination(3169U);
    msg.setDestinationEntity(213U);
    msg.available = 2557684179U;
    msg.value = 192U;

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
    msg.setTimeStamp(0.44971849636);
    msg.setSource(58156U);
    msg.setSourceEntity(145U);
    msg.setDestination(41840U);
    msg.setDestinationEntity(142U);
    msg.op = 123U;
    msg.snapshot.assign("MGQGRHPOKHETAQDYDHJEGHVYWAIQPNSNJNRWSFXWPMOLYXPAKWCFLSIREGIWINYDFQYEPJBAATIXUVSHLSQLMFZEKHKLQPWBDJAOYBUGITXXEJMHUNTOLHUMCARWTBMUQJIBFWKYLICBSVRVZRPOXKUEXUJRCJEVZNLZZZHYYYPTPOBGPWZFIXITDTCTHCMDWVFVFKGESBEQNKSZCZODALADF");
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.878096489368;
    tmp_msg_0.y = 0.538398290118;
    tmp_msg_0.z = 0.811815653111;
    tmp_msg_0.phi = 0.930514250856;
    tmp_msg_0.theta = 0.792375793927;
    tmp_msg_0.psi = 0.911687742222;
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
    msg.setTimeStamp(0.0275076119205);
    msg.setSource(59801U);
    msg.setSourceEntity(151U);
    msg.setDestination(18054U);
    msg.setDestinationEntity(115U);
    msg.op = 206U;
    msg.snapshot.assign("NXBLYYAFQKWFYCUVSKBMGYVEPTCVYVJZOHKEBQPQHGCTOTOVXXDVUMBTDKQIPSHLRVUUUAFHUYXZDHZXJNYEIAAQSZPHZJXNMWJEMPSASJTTPJOPOCGNBGSWMXKWRKYUGEWCBRNSRQJUDOIHGNIROLNZFHIAHGQIFMRRW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZUYTPNNSFHEUNKTQZIQWJYBNQKVBLBVCUSMJRYFSSFKORBQDTKAUABHRMRKXWSUKOTTLNOOXYHQTMEMQDXJEZFIYIVPVQDWVLCOCLXOYEOSR");
    tmp_msg_0.value.assign("UZREOZYDQJIJXSOQCFLOMJJRIPRBHLHGKYQVVAOGDZBDPBMCLBESADFHVRKYKWMWUKVNDZLRFQKGHD");
    tmp_msg_0.type = 219U;
    tmp_msg_0.access = 20U;
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
    msg.setTimeStamp(0.197786408667);
    msg.setSource(14118U);
    msg.setSourceEntity(250U);
    msg.setDestination(12751U);
    msg.setDestinationEntity(135U);
    msg.op = 71U;
    msg.snapshot.assign("KSXFORQSZTABPECBSXCHZWZGTGZJNLDQWJSDTPOYUBVTLLCLYRENUDLFMAVSYZCUNTXVHPMXPUXRMYKLGKXQSPDNOAPKJFRRTJMHEUFNARCJPUEWDFLWGQIWVIGEYKCOWEWDCNYFDRFZMJMKITKBJIQLEKLWNSHMSVZXONVRMJMPJYOVGBLUEBICOXOWGDAVTZAYURIDCFMQNYIIHIQQUZXDVPTBFHKAQRCZOEBHPAGUXBAI");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 61508U;
    tmp_msg_0.flags = 176U;
    tmp_msg_0.lat = 0.472916862085;
    tmp_msg_0.lon = 0.641135083924;
    tmp_msg_0.start_z = 0.155571483881;
    tmp_msg_0.start_z_units = 43U;
    tmp_msg_0.end_z = 0.590418939618;
    tmp_msg_0.end_z_units = 212U;
    tmp_msg_0.radius = 0.71954643361;
    tmp_msg_0.speed = 0.781737525218;
    tmp_msg_0.speed_units = 67U;
    tmp_msg_0.custom.assign("TMCRLBWRBGHS");
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
    msg.setTimeStamp(0.166593415797);
    msg.setSource(14414U);
    msg.setSourceEntity(129U);
    msg.setDestination(55249U);
    msg.setDestinationEntity(29U);
    msg.op = 237U;
    msg.name.assign("PVCBQFUGINBMYDWNUPMXCNXBHKGEPKMBRVJSLWKUZTVWKYVGWXHVJYUJINNARJCCHONCTRHXULVXMQNVQRSBJMQZORJCYOFSTNMZUMEXLFHDUDFJTATGZPTPQHEDIIORPAASATBHPYOYEBVDZHFZGLAJBAOKEPCIHQMQKGSKTLECVYDWRGIWRVDXWJLBFQOAG");

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
    msg.setTimeStamp(0.269623000673);
    msg.setSource(40667U);
    msg.setSourceEntity(236U);
    msg.setDestination(61382U);
    msg.setDestinationEntity(144U);
    msg.op = 114U;
    msg.name.assign("QWVWCVCMGIBGBPBSPSJEOMADXXGLPZQQTOWZETHFKHUDXGTVWDTNKOYMYGLVCVVXPCSHTPFCPFGESZ");

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
    msg.setTimeStamp(0.40382724973);
    msg.setSource(13080U);
    msg.setSourceEntity(206U);
    msg.setDestination(60308U);
    msg.setDestinationEntity(209U);
    msg.op = 89U;
    msg.name.assign("OAMCXUUZZPSZTFGESTCNYAFMXWVDDWHAGJSLPIDHZRQPKRLBMHFNBVCLWRQHRKNKQSHYMUAQRJWCVGJOPSQEYUOWIGHDCTYIFVXHLZJEIZJIBYHTTCCADQMYYZEJXDWLSLN");

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
    msg.setTimeStamp(0.328370082888);
    msg.setSource(25599U);
    msg.setSourceEntity(95U);
    msg.setDestination(23723U);
    msg.setDestinationEntity(221U);
    msg.type = 58U;
    msg.htime = 0.799135207852;
    msg.context.assign("CIIIFNEHXKFULSYIQQFBNXSPCSNXDTTAJAOYONSNMVSAMGWBDXHGYQULIYNATXKZGCSVWJRJMKIVRYNTVEGEJGZAEFPMMEXMMYOZLLFABVKSXZ");
    msg.text.assign("EUMCEZIETKZIKMJRMTLLFIXSSRCCBRRQAPEOTZSYVNVQUDPWRXZSCVBIEJERYOPWAMSJBHQWBGNRIPWGYMJLJEMINHGZTFFKQGESOWDXWZRDJGUYLLKOPQZKNKDHWGDQNNQOWVUAAMGEFPFHDUIAMLFISONVCUDFHGCBJATISHNCMXDTNBFJZXCAYXVELOXOFHNVWBPIFRABBYYHHDJ");

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
    msg.setTimeStamp(0.718902679458);
    msg.setSource(39193U);
    msg.setSourceEntity(4U);
    msg.setDestination(52195U);
    msg.setDestinationEntity(199U);
    msg.type = 249U;
    msg.htime = 0.466723657881;
    msg.context.assign("RULZPJKRYMPLZXYJRPOVHRSUQSCZMAGDDSMJHECVCDLAICYWASMYOMZANQQMKILWGTZIOXVSJLUJGEGFNMHMFNTVZNTUWZHEAPHXMAUTNYPWKPGCCOICDCUKFBQXKEHNKZXCGYI");
    msg.text.assign("DZAUNLDWGOKAMUOFAFCXVGXFDTIPENHCSIAYLCDYJWHUSWNWZRAGJJLNBHEPEJBEUPHWCLEOVXZKISRMVNWACKQXKRBGDGUMLITJI");

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
    msg.setTimeStamp(0.789032478923);
    msg.setSource(55206U);
    msg.setSourceEntity(160U);
    msg.setDestination(41890U);
    msg.setDestinationEntity(56U);
    msg.type = 69U;
    msg.htime = 0.874657048462;
    msg.context.assign("FTDUURZDWMTOUHVTIDMMASLYVJJLUHADOVWHPCGPTQKSWWIKPRIKBWDYJRJGXXXQYKVPUURJMGNTCRLQIYFJFQGPIGRIXHWMSGDFJCRSQZFANYXBHIDLFOAEVKFSFHESUPNYCEQNKYHZSOCBWNLZBNTQMDVBLSLCLTNGAUZRTEIYVEXSVRHKKBEIMIUAGLCWBHXSJZPMJANEEVXZXNVWROWDXDCLOPFAPZOZMQUHMGQEABYA");
    msg.text.assign("KVPLUZETKIPKPMWXFBEUJWRZRNCLZGAMMLTYEGPPDTAYWYVJLMEZGEDFXXMTNJLTQFQYIMAZZRZLNBHTPJULKXYHVSNJJJQURUESWGYZBBTXQBOPUESOOMQFDAFNNHTINHFQSKSGVKDGHUAXSHQTKCXCPCXWJFROROCDOPMEHAQMFZSWHEVOVJGXGFYCVIRHLISKDIWBVDDWNVRIQTLYYORPCMBWAOBUCQZBVAKN");

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
    msg.setTimeStamp(0.14079866597);
    msg.setSource(32373U);
    msg.setSourceEntity(191U);
    msg.setDestination(115U);
    msg.setDestinationEntity(86U);
    msg.command = 60U;
    msg.htime = 0.360626328468;

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
    msg.setTimeStamp(0.117103637398);
    msg.setSource(8788U);
    msg.setSourceEntity(14U);
    msg.setDestination(1343U);
    msg.setDestinationEntity(29U);
    msg.command = 145U;
    msg.htime = 0.606502513262;

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
    msg.setTimeStamp(0.670828102336);
    msg.setSource(35525U);
    msg.setSourceEntity(115U);
    msg.setDestination(41951U);
    msg.setDestinationEntity(193U);
    msg.command = 96U;
    msg.htime = 0.300790366499;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 201U;
    tmp_msg_0.htime = 0.80237108419;
    tmp_msg_0.context.assign("PHDQFMVKKSWTEXKAJSRBDWIPJHAEAICYZZJLUOIGMUCHXHZMELOEXRKESDOKLBZMQIYWOWFONEIFBNPKZPCLADTXFYTUVERVYGGXZISJHYNCFEQKNVCUNAGTPPRDRXBXYQAJUEBQRVTUBUZHZLJWFZQNOJGDWOSLYQNTRGLUQLFBRBXOVSHAWFJGDYNSSLLGYCMTHTMQODPCWIFCMIROGDFQZMTVJSYIDXACHUNBCBUKKJSWVVXEPMIHP");
    tmp_msg_0.text.assign("XZCKMQQZLMYPDASKJNOYENVNUVMEPCVATHJLJATGOIBFJUWFGOVPCNKPYOMGVQNDKULJQKIWLRHRVIPXFAAOILFKJNRZ");
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
    msg.setTimeStamp(0.415313513348);
    msg.setSource(11329U);
    msg.setSourceEntity(59U);
    msg.setDestination(22317U);
    msg.setDestinationEntity(174U);
    msg.op = 152U;
    msg.file.assign("LLACROJQJLVTRNGLDYVZOZWHWG");

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
    msg.setTimeStamp(0.00381132813659);
    msg.setSource(42846U);
    msg.setSourceEntity(172U);
    msg.setDestination(22767U);
    msg.setDestinationEntity(95U);
    msg.op = 105U;
    msg.file.assign("RKDWKWUOFFIFWDLRTDOKISCFQ");

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
    msg.setTimeStamp(0.242100726473);
    msg.setSource(62354U);
    msg.setSourceEntity(241U);
    msg.setDestination(37291U);
    msg.setDestinationEntity(51U);
    msg.op = 69U;
    msg.file.assign("RSKONDXZUVTMKKGUGKCTTIVFCVJDIGWZOL");

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
    msg.setTimeStamp(0.96380899491);
    msg.setSource(42283U);
    msg.setSourceEntity(153U);
    msg.setDestination(17667U);
    msg.setDestinationEntity(170U);
    msg.op = 46U;
    msg.clock = 0.480237056315;
    msg.tz = 99;

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
    msg.setTimeStamp(0.0719028845592);
    msg.setSource(6109U);
    msg.setSourceEntity(28U);
    msg.setDestination(10107U);
    msg.setDestinationEntity(35U);
    msg.op = 110U;
    msg.clock = 0.502306338738;
    msg.tz = -113;

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
    msg.setTimeStamp(0.820475613831);
    msg.setSource(10611U);
    msg.setSourceEntity(219U);
    msg.setDestination(11188U);
    msg.setDestinationEntity(59U);
    msg.op = 35U;
    msg.clock = 0.26508816681;
    msg.tz = -100;

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
    msg.setTimeStamp(0.745984344454);
    msg.setSource(65002U);
    msg.setSourceEntity(137U);
    msg.setDestination(60688U);
    msg.setDestinationEntity(209U);
    msg.conductivity = 0.59875903356;
    msg.temperature = 0.682459625257;
    msg.depth = 0.0564605955246;

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
    msg.setTimeStamp(0.887838193525);
    msg.setSource(45961U);
    msg.setSourceEntity(76U);
    msg.setDestination(24292U);
    msg.setDestinationEntity(24U);
    msg.conductivity = 0.033941614807;
    msg.temperature = 0.101194003017;
    msg.depth = 0.0844628755314;

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
    msg.setTimeStamp(0.399541200065);
    msg.setSource(50991U);
    msg.setSourceEntity(153U);
    msg.setDestination(55663U);
    msg.setDestinationEntity(171U);
    msg.conductivity = 0.113073220409;
    msg.temperature = 0.767746384357;
    msg.depth = 0.741330002602;

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
    msg.setTimeStamp(0.399377841095);
    msg.setSource(52144U);
    msg.setSourceEntity(90U);
    msg.setDestination(30709U);
    msg.setDestinationEntity(124U);
    msg.altitude = 0.150076174254;
    msg.roll = 51905U;
    msg.pitch = 33308U;
    msg.yaw = 34232U;
    msg.speed = -17717;

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
    msg.setTimeStamp(0.590724112083);
    msg.setSource(52780U);
    msg.setSourceEntity(129U);
    msg.setDestination(64570U);
    msg.setDestinationEntity(37U);
    msg.altitude = 0.958941557247;
    msg.roll = 5329U;
    msg.pitch = 25135U;
    msg.yaw = 22302U;
    msg.speed = 31793;

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
    msg.setTimeStamp(0.926888627449);
    msg.setSource(5419U);
    msg.setSourceEntity(250U);
    msg.setDestination(21507U);
    msg.setDestinationEntity(237U);
    msg.altitude = 0.302150489798;
    msg.roll = 5374U;
    msg.pitch = 43164U;
    msg.yaw = 36262U;
    msg.speed = 9931;

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
    msg.setTimeStamp(0.09824438534);
    msg.setSource(27337U);
    msg.setSourceEntity(104U);
    msg.setDestination(18880U);
    msg.setDestinationEntity(54U);
    msg.altitude = 0.466289283733;
    msg.width = 0.410204970785;
    msg.length = 0.854725081081;
    msg.bearing = 0.359150749782;
    msg.pxl = 14046;
    msg.encoding = 246U;
    const char tmp_msg_0[] = {104, 73, 2, 43, 69, -42, -69, 40, 116, 111, 62, 89, -117, -65, -53, 82, -112, 44, -4, -106, 85, 97, -45, 81, 37, 19, -25, -96, 12, 109, 39, -103, 40, -29, 9, 8, -100, 21, -126, -12, 79, -8, -55, -19, -67, -111, 17, -81, 114, -25, -116, -101, -7, -61, -57, 42, 73, -6, 105, -28, -87, -123, -127, 110, -42, -86, 78, -42, -64, 113, 74, 11, -16, 79, -38, -11, -85, -3, 11, 126, -70, 96, -12, 14, -24, -75, -107, -20, 119, -114, 123, -127, -5, -18, -56, -2, -31, 114};
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
    msg.setTimeStamp(0.670071582845);
    msg.setSource(4735U);
    msg.setSourceEntity(176U);
    msg.setDestination(62996U);
    msg.setDestinationEntity(152U);
    msg.altitude = 0.521462388758;
    msg.width = 0.562666797785;
    msg.length = 0.479037770435;
    msg.bearing = 0.783827283654;
    msg.pxl = 11624;
    msg.encoding = 92U;
    const char tmp_msg_0[] = {62, -88, -88, 82, 5, 124, 43, -57, 100, 73, 21, -108, -55, -58, 11, -54, 13, -38, -86, -43, 28, 95, 94, 84, -20, -100, 82, -95, 43, 97, 30, 44, -108, 29, 104, 69, 16, 24, 116, -84, -47, -69, -77, 97, -57, 50, 20, 45, -40, 125, -73, -40, -36, -108, -44, 122, 31, 106, 20, -116, 25, 115, 76, 93, 70, -101, 51, -18, -122, -65, -72, 20, -118, 77, 27, 48, 17, 27, 36, 71, 40, -81, 44, -40, -93, 33, -3, -49, -67, -107, -25, -20, -64, -69, -50, -106, 86, 56, -116, -15, 18, 68, 63, -114, 56, -127, 24, 43, -55, -125, 42, 6, 51, 45, -128, 0, 31, -24, -16, -127, -84, -66, 12, 63, 70, 12, -15, -126, -25, -14, 13, 61, 17, 62, -21, -79};
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
    msg.setTimeStamp(0.707181770684);
    msg.setSource(64226U);
    msg.setSourceEntity(35U);
    msg.setDestination(16354U);
    msg.setDestinationEntity(145U);
    msg.altitude = 0.163724946837;
    msg.width = 0.184705143934;
    msg.length = 0.349256359955;
    msg.bearing = 0.320545356741;
    msg.pxl = 14869;
    msg.encoding = 217U;
    const char tmp_msg_0[] = {41, -29, -17, -45, -30, 93, 89, 58, -65, -41, -78, -73, -30, 18, 14, 72, 38, 46, 27, 88, -34, 48, -115, 33, -84, -47, -24, -14, -59, 70, 86, 13, -74, 52, 67, -17, 74, -22, 76, -75, 103, 3, 25, -54, -88, -115, 91, -60, 29, 49, 40, -95, 79, -76, 84, 116, 5, 15, 63, 90, 74, -15, 79, -30, 44, 121, 114, 118, -114, 81, -15, -11, 12, -71, 117, 33, -116, -81, 51, 102, -110, -97, -114, -55, -51, 57, -23, 103, -66, 108, -51, 42, -91, 80, -11, -73, 31, 40, 1, 113, 56, -60, -49, -81, -97, 3, 117, 126, 82, -120, -12, -93, -36, 111, -51, 4, -33, 74, 10, 77, -32, 40, 116, -43, 79, 62, 6, -21, 60, 106, -116, 70, -87, -109, 70, 37, -78, -16, -22, 15, 84, -125, 72, -30, 114, 100, 76, 14, -32, -91, 80, -8, 108, 6, -62, 57, -36, -69, -75, 99, -26, 120, -33, 29, -112, -51, 37, -119, -20, 43, 1, 24, -6, 57, -87, -19, -8, 38, 55, 24, -33, -55, 64, 27, 41, 91, 52, -10, -54};
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
    msg.setTimeStamp(0.232130909983);
    msg.setSource(19210U);
    msg.setSourceEntity(110U);
    msg.setDestination(11957U);
    msg.setDestinationEntity(155U);
    msg.text.assign("DJRGFCKJGHVOZYXQSORFKBBBJATEWZOPNCZEXWRJSFUFQLGDTSOFIQRHUNVAMYCVHFCLOVVMJTQBDVZTEWPIWKFIHCMRHTHCGUIFNQGBYHMORORXZJGXQKIEQXLAIVWINENZCTOABEDTWPLEVWUKJXUPAGPPAUWDRGVYISQRGKMBGMDNYLCMYRISKMKYBMZOZAJSYJNTUPUEQLYADEHPKZOSUETLSCTXCDSJHHQXWBLXPNIN");
    msg.type = 36U;

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
    msg.setTimeStamp(0.502525496063);
    msg.setSource(31894U);
    msg.setSourceEntity(153U);
    msg.setDestination(51517U);
    msg.setDestinationEntity(97U);
    msg.text.assign("UJEKAMDGBGTENZUFAKECVWNWTLXROZTBMXQDRFZFOYASICPUVOCPAUKBRJNPUUKDWNGTAAHITSYWGYIAZXINCSMUQBZWDDHTATUZICBGLTSYCTGUROZONLDVQBNWPYQIFOEQYHVKQZDYGZAORVVYHTPFMX");
    msg.type = 213U;

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
    msg.setTimeStamp(0.651849026693);
    msg.setSource(19149U);
    msg.setSourceEntity(235U);
    msg.setDestination(43243U);
    msg.setDestinationEntity(254U);
    msg.text.assign("NYUSWOYOSTSEBVQWTDFTZQCEHUZWWHRIVDNBKMEIEPIIRJDYJIVIKRMYCZNAJQUYGJSMOGSPWVPFQNDAWEUGJXCNHRSYRMPTTXHPETAMXDJKQDIHRIQTESFQBSMKACTXDVNHAGSIYBLGCMZOCMKAPMLOHLWLTYAQKLYBBZRVEJIEPDVZCGCNVPZKTJDZXFMBONFHLUOXXFFFHYNLFRUBVURXLQRPXOUUEAOXWGCNLWBKALVOUZSGPFBAJCKZ");
    msg.type = 149U;

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
    msg.setTimeStamp(0.14556413012);
    msg.setSource(65194U);
    msg.setSourceEntity(196U);
    msg.setDestination(36697U);
    msg.setDestinationEntity(151U);
    msg.parameter = 241U;
    msg.numsamples = 81U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 3808U;
    tmp_msg_0.avg = 0.874602837066;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.709740977538;
    msg.lon = 0.704185926908;

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
    msg.setTimeStamp(0.54502629374);
    msg.setSource(44097U);
    msg.setSourceEntity(45U);
    msg.setDestination(47889U);
    msg.setDestinationEntity(93U);
    msg.parameter = 212U;
    msg.numsamples = 254U;
    msg.lat = 0.336228091169;
    msg.lon = 0.301277601185;

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
    msg.setTimeStamp(0.0846890036942);
    msg.setSource(39090U);
    msg.setSourceEntity(166U);
    msg.setDestination(35808U);
    msg.setDestinationEntity(58U);
    msg.parameter = 109U;
    msg.numsamples = 235U;
    msg.lat = 0.34545803881;
    msg.lon = 0.557417248195;

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
    msg.setTimeStamp(0.580193617253);
    msg.setSource(6379U);
    msg.setSourceEntity(51U);
    msg.setDestination(37175U);
    msg.setDestinationEntity(168U);
    msg.depth = 58625U;
    msg.avg = 0.832870347928;

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
    msg.setTimeStamp(0.774310821239);
    msg.setSource(23544U);
    msg.setSourceEntity(35U);
    msg.setDestination(827U);
    msg.setDestinationEntity(239U);
    msg.depth = 16423U;
    msg.avg = 0.628271906287;

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
    msg.setTimeStamp(0.0353186536241);
    msg.setSource(19900U);
    msg.setSourceEntity(161U);
    msg.setDestination(4157U);
    msg.setDestinationEntity(144U);
    msg.depth = 45802U;
    msg.avg = 0.860680337439;

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
    msg.setTimeStamp(0.733136611343);
    msg.setSource(25989U);
    msg.setSourceEntity(126U);
    msg.setDestination(45642U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.48308723151);
    msg.setSource(30303U);
    msg.setSourceEntity(169U);
    msg.setDestination(58610U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.454357431564);
    msg.setSource(47249U);
    msg.setSourceEntity(254U);
    msg.setDestination(15903U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.344043643889);
    msg.setSource(6041U);
    msg.setSourceEntity(168U);
    msg.setDestination(46037U);
    msg.setDestinationEntity(202U);
    msg.sys_name.assign("UCALPSIIIXZTGEVZYUBTACINEZITCXY");
    msg.sys_type = 156U;
    msg.owner = 51282U;
    msg.lat = 0.996612097038;
    msg.lon = 0.578720857022;
    msg.height = 0.598780080848;
    msg.services.assign("OQCIDWUPEIENKAGDA");

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
    msg.setTimeStamp(0.0714266271944);
    msg.setSource(2039U);
    msg.setSourceEntity(85U);
    msg.setDestination(64628U);
    msg.setDestinationEntity(185U);
    msg.sys_name.assign("OILXRNGPPBPZNYGFSCBMRCGLTVMMQNZLSWTEBXYHSYGCPJNHQKJSEISYHLKAHDIUJSUMZNXUFMRRMJTIRRXBTCGWZLCIVOCAMMAXGPFQXDYQQLRXJOJBKQFZWFTKVBDBYPYITZNUVAZEBFUDANODPIELACAJQRNTUVFHWCNKITJUEEAOROWGPJ");
    msg.sys_type = 0U;
    msg.owner = 53000U;
    msg.lat = 0.233435959913;
    msg.lon = 0.0807670073235;
    msg.height = 0.382409650404;
    msg.services.assign("LVSUMHGQBBNJIHTTFMQXPPXCQCVKWNMMPYDOJETCRHVGUGJWAECLQRCJVBJDSSQXKHOQBDNHEWLZROCTTGTZKJRWSEVSPJELAOQWPBAZYRVPFSSWBWSYTDAFZZAIPLWAQZAUGEZCNMIYEXHPXXNQNZOVFDDKLLOISUILUKCBCJVICNMLGOGDJKMUZFEMMXAGRXARIFTXWYPFLKPTKDISRWTHMUOJVYHHXGHIUVABFBZYKNRIN");

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
    msg.setTimeStamp(0.0674993520299);
    msg.setSource(59468U);
    msg.setSourceEntity(122U);
    msg.setDestination(48142U);
    msg.setDestinationEntity(171U);
    msg.sys_name.assign("UXGGFTZYIBONLWMIDJKXEUNJVZMXAKECAVQBRTTHCKSEYJAWAFCARWHSMARKQZDENDJSWUZXCYNDRLXESTFWFBUERQOGSCXZKRHZUIIKKPBMHVPFNABMGXMZEIEQLJPSJODB");
    msg.sys_type = 123U;
    msg.owner = 63084U;
    msg.lat = 0.486199355093;
    msg.lon = 0.959321898699;
    msg.height = 0.992145048876;
    msg.services.assign("RGTPABQLQWZIXZVGHCEIEDVUTRXKMOUNKIEROJYFDZNFEQGYYQFMKLZAALKEMRRNMZDSKFGSCQO");

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
    msg.setTimeStamp(0.11152442859);
    msg.setSource(671U);
    msg.setSourceEntity(81U);
    msg.setDestination(17826U);
    msg.setDestinationEntity(236U);
    msg.service.assign("DAEYGRBOXYHAMSKHPDZGCWXGEIOAJWQQPIUKWIQXYJYQILDUWJQHMOTRIBAYZGJWZGJLKVHQLLITGWFUYYECVJNRNEBBALOUXOEEIHCNWMFSXZONPPKTTZTRWGNIDHVSHJVXEMTRMRFULPOMFYDRZFKHTKXXOOMJFKUMXVCBNSB");
    msg.service_type = 235U;

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
    msg.setTimeStamp(0.450951754961);
    msg.setSource(19260U);
    msg.setSourceEntity(170U);
    msg.setDestination(13193U);
    msg.setDestinationEntity(220U);
    msg.service.assign("LVAJKJDGVNZIKEBYUDTMUZPQNEJZXRSEAOPFWYNHFSHIPAKRGLSWWMFYEFRECPFINFICIXXOAGYCZMBCIJGXWMBJNXVNLTGVSNZYHGQOVLZUPJYCIDEQZRVMUSTUGWOQHQG");
    msg.service_type = 65U;

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
    msg.setTimeStamp(0.257135094177);
    msg.setSource(35183U);
    msg.setSourceEntity(189U);
    msg.setDestination(26667U);
    msg.setDestinationEntity(20U);
    msg.service.assign("KQUZGPXTPAWRDVWFMQ");
    msg.service_type = 144U;

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
    msg.setTimeStamp(0.31460429567);
    msg.setSource(43718U);
    msg.setSourceEntity(140U);
    msg.setDestination(21385U);
    msg.setDestinationEntity(87U);
    msg.value = 0.278168196009;

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
    msg.setTimeStamp(0.492910486633);
    msg.setSource(20227U);
    msg.setSourceEntity(37U);
    msg.setDestination(10892U);
    msg.setDestinationEntity(181U);
    msg.value = 0.169272979251;

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
    msg.setTimeStamp(0.163953624087);
    msg.setSource(32242U);
    msg.setSourceEntity(160U);
    msg.setDestination(54874U);
    msg.setDestinationEntity(78U);
    msg.value = 0.427048725793;

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
    msg.setTimeStamp(0.489666227053);
    msg.setSource(33875U);
    msg.setSourceEntity(89U);
    msg.setDestination(41096U);
    msg.setDestinationEntity(169U);
    msg.value = 0.636962657142;

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
    msg.setTimeStamp(0.607108840675);
    msg.setSource(27446U);
    msg.setSourceEntity(47U);
    msg.setDestination(48764U);
    msg.setDestinationEntity(219U);
    msg.value = 0.904293294281;

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
    msg.setTimeStamp(0.536346819614);
    msg.setSource(26254U);
    msg.setSourceEntity(137U);
    msg.setDestination(33413U);
    msg.setDestinationEntity(108U);
    msg.value = 0.954781829488;

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
    msg.setTimeStamp(0.382920407424);
    msg.setSource(22605U);
    msg.setSourceEntity(90U);
    msg.setDestination(45853U);
    msg.setDestinationEntity(190U);
    msg.value = 0.596750365605;

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
    msg.setTimeStamp(0.684454022155);
    msg.setSource(18312U);
    msg.setSourceEntity(93U);
    msg.setDestination(18817U);
    msg.setDestinationEntity(139U);
    msg.value = 0.396536489045;

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
    msg.setTimeStamp(0.618249163181);
    msg.setSource(16908U);
    msg.setSourceEntity(169U);
    msg.setDestination(5981U);
    msg.setDestinationEntity(53U);
    msg.value = 0.13216801962;

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
    msg.setTimeStamp(0.346602709113);
    msg.setSource(30384U);
    msg.setSourceEntity(49U);
    msg.setDestination(47213U);
    msg.setDestinationEntity(138U);
    msg.number.assign("JVOERSCNTBAPRQMFLXXQYMLUAOAVORQONBTJXPDIIEHPWZILRWRNZCFSYDXVTEIPWJGQSTZEKZZCXHWFGACCMLIWYHVHSMBLEEFGJMVMPIKDPBHLNQUOGTTIFBDWQKAWFMUNEXTRISZJSLTDZHY");
    msg.timeout = 25543U;
    msg.contents.assign("RRRCAYJPLSABAFISATDJZJXSIZKTIFPPGOQTQYGVFHWDQXLTGIDSQF");

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
    msg.setTimeStamp(0.980543949579);
    msg.setSource(24395U);
    msg.setSourceEntity(229U);
    msg.setDestination(41811U);
    msg.setDestinationEntity(113U);
    msg.number.assign("TNRJSFEEPDVCTJKIRXAJVMNQDTKWQGPJANOLGTZLOEXSCMYVTBWCWPAZUKWBOLZRWENIUPWANHSDPKRFDLPKERNHVXFZBUUALHMJHQDNBDFFRIBKJRDELCLSGLALOYVQKDIRUMQY");
    msg.timeout = 22649U;
    msg.contents.assign("WBIDULYIKASXJNYFVJVNRMHLXDQXHIROTVQQMKXDUCSPZQWJQYCEQVTGSMZXKAWXNKCQXFLADZDOJJYR");

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
    msg.setTimeStamp(0.617060309636);
    msg.setSource(45992U);
    msg.setSourceEntity(21U);
    msg.setDestination(49409U);
    msg.setDestinationEntity(190U);
    msg.number.assign("NMZHLQNOWFCDCKLJTCUEPVDLDNSXYQNEHIMAUSDSMMRTPKAYMQGAJWJPSXGLKXWUNAFACUYPKIDEVKFKYWBUSTSIAMMDOXEJQGOLHGWRWFKYSUBODRROTQHWWEXZMOTGVCPSQYRHLLRXVHJVDCIBBJNEUJOBGZCSP");
    msg.timeout = 46020U;
    msg.contents.assign("JYTEEHVITLWQWQQKLAINCMLCNZK");

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
    msg.setTimeStamp(0.299456951858);
    msg.setSource(55298U);
    msg.setSourceEntity(44U);
    msg.setDestination(5109U);
    msg.setDestinationEntity(32U);
    msg.seq = 998692920U;
    msg.destination.assign("JRYZYPGOFDSJLCFPKCAQRZLATKPJHVZNIWJLZEAWTGLTFYXYSVUBALBXJJMODSUIOBFVTHPWXGKQQLNNVZYSP");
    msg.timeout = 10369U;
    const char tmp_msg_0[] = {-6, -54, -110, 76, 80, -114, -17, 2, -84, 91, 6, -96, -3, -7, 49, -69, 101, -78, -38, -64, -51, 47, -66, -82, 53, 7, 82, -24, -26, 113, -83, -73, 75, 52, 29, 74, 57, -98, -127, -39, 11, 27, 53, 23, 101, -10, 78, -123, 40, -86, -13, -86, 8, -74, 72, -1, 57, -76, 34, 51, 104, -68, -118, -107, 21, -12, -106, 15, 18, 68, 83, -103, -35, -34, -35, -92, 114, 117};
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
    msg.setTimeStamp(0.616912266504);
    msg.setSource(48867U);
    msg.setSourceEntity(173U);
    msg.setDestination(55642U);
    msg.setDestinationEntity(40U);
    msg.seq = 2103930066U;
    msg.destination.assign("SYBRNSAZHGEDPYBGAJSXHLNGOXJOEVFXRFEZI");
    msg.timeout = 12628U;
    const char tmp_msg_0[] = {41, 40, 77, -2, 46, -46, 22, 13, -80, -115, 94, -5, 21, 87, 118, -85, -54, 54, 56, -72, -65, 29, -77, 125, -37, -128, 11, -42, -124, -102, -101, -4, 9, -50, -67};
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
    msg.setTimeStamp(0.445308296674);
    msg.setSource(46326U);
    msg.setSourceEntity(71U);
    msg.setDestination(6807U);
    msg.setDestinationEntity(32U);
    msg.seq = 3432016964U;
    msg.destination.assign("VTTNPTIPZZEFVPJMLOEOETLFILXAUBHBHYCZGFECATEVEYUHKGIVRZNQKNQVDQPPBFVGKRSEMAIDCEQYQTHJINMTRVMNDNFHYBWHWCGLUQKGCMQVDOYHADUITODNAXJXRAGUCDVBWSRFCRDLDFHAJJGSOKMAZMXOBKYXIPXKEFBJWZPWWXUSKIXGSCAYZFLZUYNKQHHSPSGALGWMRZIWXRYJJLMQOMFSCKJBRBUTDLOI");
    msg.timeout = 2071U;
    const char tmp_msg_0[] = {-66, -29, -105, -26, 106, 122, -105, -118, -25, -52, -57, -21, -37, -44, -77, 66, 85, -99, -125, 26, -93, 100, -65, -8, 66, -12, 99, -54, -13, 28, -74, -124, -5, -97, -22, -53, 41, 4, 25, -105, 114, -70, -96, -3, 49, -40, 117, 95, -61, 67, -86, 15, -11, -84, 125, -53, 80, -40, -108, -122, 69, -7, 61, -119, -46, -95, 57, 22, -103, 85, -56, -120, 117, -115, -52, -93, 77, 50, 40, -36, -47, -49, -105, -116, 122, -12, -12, 17, 118, -57, -121, 15, 110, -14, -93, 34, 125, 111, 100, 19, 95, -17, -1, 64, -124, 98, -128, -41, -78, -120, -2, -5, 68, -7, 60, -121, -58, 94, -52, 112, 30, -93, 107, 83, -101, -90, 97, -121, 105, 65, -75, -84, 101, -60, -45, 124, -116, 79, -66, 89, -74, 66, 11, 18, 118, 14, 39, -47, -19, 109, 97, 123, -107, 104, -10, 101, -33, 61, 118, -90, -87, -101, -94, -117, 123, -99, -40, 92, 37, 115, 9, 74, -62, 52, 88, 13, -69, -31, -67, 20, 108, 4, -30, 71, 61, -52, -119, -19, 79, -76, -6, -85, 29, -46, -79, -9, -112, 70, 25, 97, 79, -27, 94, -18, -44, 50, -26, 61};
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
    msg.setTimeStamp(0.78003511942);
    msg.setSource(37356U);
    msg.setSourceEntity(46U);
    msg.setDestination(531U);
    msg.setDestinationEntity(55U);
    msg.source.assign("YQDMPSXTLYQYXFAEBUOXIQODHZTGXLHPKWNJPGHTYUDTJELIKHNIJWSODFBUESVKJMQJPHFAJINMTTHQTKDUPZAGDCCQEFZJMQHBVNWICKUYSZNOBYKJJVMEFYLOXDRCNLUE");
    const char tmp_msg_0[] = {87, 64, -33, 116, 102, -111, -30, 102, 0, 113, -34, -35, 76, -123, -41, 86, -15, 121, 114, 68, -57, 96, 90, 122, -9, 72, -35, -96, 93, 3, 34, -64, 18, -31, -86, -77, -82, -110, -89, -28, 68, 106, -3, 79, 44, -53, 6, -41, -83, -53, 41, 95, 40, 57, 49, -89, 32, -77, -48, 83, -59, -116, 30, -126, -33, 1, -126, -71, 24, 109, -34, -32, 56, -122, -127, -126, -114, -30, 86, 85, 70, 39, 125, 47, 79, 28, 71, -42, -24, -123, 15, 123, 13, -43, -60, -49, -49, 122, 113, 103, 45, -81, 57, 17, -39, -9, 30, -117, -113, -66, -108, -82, 48, 116, -66, -47, 52, 83, 27, 37, -49, 41, 97, 34, 78, 98, 3, -23, -84, 54, -96, 108, -47, 86, -112, 29, 96, 50, 91, -81, 57, -102, 115, 117, 109, 69, 19, 17, 25, -45, -17, -9, 12, 9, -24, 7, -120, -43, -64, 115, 62, -35, -69, 97, -62, -18, 9, 55, 120, -42, 67, -108, 21, -20, -3, -16, -36, -71, 118, 85, -101, -126, 16, -77, 93, 70, 3, 54, -27, -99, -12, 103, 25, 100, 32, 38, 26, 126, -126, 79, 72, -62, 39, -126, -83, -11, -128, 112, 79, 13, 95, -28, 70, 99, 43, -22, 39, 50, 115, -92};
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
    msg.setTimeStamp(0.772983937954);
    msg.setSource(17743U);
    msg.setSourceEntity(250U);
    msg.setDestination(56714U);
    msg.setDestinationEntity(127U);
    msg.source.assign("XLQHTGWUHTLVXPQFZSDRPIZJWYLCGNLTNHVRHAVMPQKYJGVDBBSQMRYPEJOOIICTTEENHXIVYMKDNJMTHEYSNMBCBPRWEORZDQFUTLOAVDBXMPWJERXUFUBKAZFSOWHPMIXSHFVGZOJ");
    const char tmp_msg_0[] = {-93, 69, -12, 18, 126, -124, 120, 116, -118, 32, -37, 24, 29, -32, -84, -104, 56, 89, -115, 54, -28, -99, -124, 1, 106, -17, -31, 81, 42, 78, 91, 86, -105, -43, 109, -66, -71, 68, -81, -116, 25, -72, -24, -127, -7, 33, 7, -58, -41, -60, 28, 10, -68, -124, 4, 103, -76, -111, -94, -109, -45, 2, -74, 10, 10, -64, -79, 110, 126, -124, 121, 47, 39, 93, 114, -62, -11, -1, 92, 27};
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
    msg.setTimeStamp(0.496690157801);
    msg.setSource(30409U);
    msg.setSourceEntity(127U);
    msg.setDestination(61538U);
    msg.setDestinationEntity(150U);
    msg.source.assign("WZUOMDRFQYSNYDRRZBFEMFBBXNFAKNXTZPAHJXMWUPQDTNXLUUKVMAIWFVFYXELLCWQDPKKTRLIDFQOUJUNWLLH");
    const char tmp_msg_0[] = {-110, 120, 113, 35, 33, -35, 59, 71, -53, -9, -8, 38, 87, -96, -34, 122, -101, 91, 97, -121, 62, 19, 123, -84, -31, -77, 111, -59, 126, -116, 78, -94, -106, -76, -17, 34, 6, 7, -91, -116, 79, 35, -10, -71, 88, 77, 116, -86, 50, 56, -54, 87, -20, 56, 88, 121, -79, -102, 14, 8, -68, 100, -90, -36, -87, 100, -55, -81, 118, 33, -80, 94, -116, -65, -10, 74, 87, -10, 100, -80, -30, 18, 72, -60, -52, 54, -69, -88, 37, -23, -46, 48, -123, -100, 106, 1, -51, 30, 44, 8, 80, -65, -26, -65, 44, 69, -68, -79, 43, -88, -84, 24, -37, -22, -25, 113, -54, -5, -116, 118, 83, 32, 124, -94, 86, -106, -96, -92, 55, 13, 108, 35, -9, 43, 11, 56, 98, -89, -122, 114, -99, -33, -121, 45, -95, -71, -120, -15, -112, -126, -90, -84, -87, 57, -1, 65, 80, -41, -48, 43, 126, -12, 125, 123, -23, 15, 117, -63, 36, -33, 19, 102, -119, -73, -35, 99, -101, -22, -38, 95, 46, -2, -121, 71, -101, 62, -25, 58, 67, 32, -34, -70, -39, -109, 69, -111, -43, 53, -102, 76, 42};
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
    msg.setTimeStamp(0.511299628105);
    msg.setSource(57516U);
    msg.setSourceEntity(117U);
    msg.setDestination(15550U);
    msg.setDestinationEntity(194U);
    msg.seq = 4291317070U;
    msg.state = 21U;
    msg.error.assign("VZZYKUFSMICLSEOONOCGCABNXAFBORRNWBOESCBEZCUBVMKSXAEGHJCJQTPUMIKTVECFQIOPLZLHRYLHJNWGKFDQPTNMYHHPHUAAXURAYFDPPWOTFSTWJVLLUYDXTJTPQZNQJIZDKQQMBDGYNKHFWZRAAZIGAMOHLDTJXSHVXSNDXFUBJQOYWPIPOR");

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
    msg.setTimeStamp(0.865508078304);
    msg.setSource(31058U);
    msg.setSourceEntity(174U);
    msg.setDestination(6832U);
    msg.setDestinationEntity(59U);
    msg.seq = 2230659211U;
    msg.state = 133U;
    msg.error.assign("VSROCECQVUOFHAIOKJWRSIHCGIDMGEPRXEMOXBSMUBFIAYSMIGXTGYCRQJJLYGCLBWQFSCFNJEYQXXPKNQPIDVXDSTPWTZWHYTMEYIXSBVAOLMFDNDGXOPHBDGUKVHOYVCVLTHGLKSQRPQZTVMDUAJZIKDTIWIALETQOJSNAWMCJDWWKFZHKDCQEFEBJNTBXRZUFRQLPPBVNXMNHKPZVYAMNBUWJNRFPYGJZUUNRUZA");

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
    msg.setTimeStamp(0.326755475381);
    msg.setSource(21478U);
    msg.setSourceEntity(72U);
    msg.setDestination(32395U);
    msg.setDestinationEntity(248U);
    msg.seq = 1738528882U;
    msg.state = 182U;
    msg.error.assign("TMIECVQVBTTGCCHOXKEUSAIYPMFWPNMHWRDPKLVNIHQWKQOKZPUEWDOACHYJBEAKNFQZERJSBRPYAQPTHGBPVQIJNOZJAMXSLYTEEPMIL");

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
    msg.setTimeStamp(0.954414728461);
    msg.setSource(19194U);
    msg.setSourceEntity(183U);
    msg.setDestination(59888U);
    msg.setDestinationEntity(129U);
    msg.origin.assign("EOUEZVUUSLIJQAHPPKUABQMENYQCKCFQLNRQSELDJPTXUUGYIMWJCINVCOJZFHVDKPLMTKFBZQAJLWGBEWNNYZZFMCMAPLAAUSGHIDCRUGBTI");
    msg.text.assign("MMSYNPSWABQBISGLDUASBHFMQVLOWCBRTWIHJDIZRNZWNHDRIEVORTWBHLSYQANKHLMBGJALUBKYIZDZYZOOTZPFHWJKZWGDRXUOGKXLRXPQVMECQWVMKFKCLZUNGDNONJYYJFSNDXQIMYXQCUSSKFZUXXAVRPYVCNEWVBDAICEAEDQGCBUPCVUEMFCLHFWNHPPKIHXQKJSLJPYYTFTITGTMMGOBJXORJTSOAOZKQIAEDAXTVTCVJPL");

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
    msg.setTimeStamp(0.771869750799);
    msg.setSource(42816U);
    msg.setSourceEntity(59U);
    msg.setDestination(18900U);
    msg.setDestinationEntity(98U);
    msg.origin.assign("WQUOKNRITGKKPSSOJYTIADUASBOZUKSMXIMFLNHTLDLEEQQXPREMXZDFZJXSNOBXCRIQLDZENVBOKVGYCIGPHWHJLJJCWSMEVECJGWIBJTHLAJWPEFPQVOGBPVRPGUHRUYOVPMVWHZRZKTUNEAZFAFCFMTYCWBOHHHMAXQQDRQGDSRPIITYXKRYAWBBOTYJSBVZNUPUVKDCKILMLDUFLHWUNVWXYSZYAJGNFAQFCXCMGBEQGCINAKXTZLTRDSD");
    msg.text.assign("MLXFLJBBABHSKTQCKERRMJHQODOCOFDXUGEQCIBRKENXXMQWDGHECPIWCDVPTVKIAJXDGYPSUYVIMKQIDGVJYJFSFKBZYEJXRLKEANBCTNYEMUELOZLNVOCYHMGQZTZHZYCFUZTNHYXVZTQUQWRS");

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
    msg.setTimeStamp(0.454049238574);
    msg.setSource(23496U);
    msg.setSourceEntity(113U);
    msg.setDestination(64759U);
    msg.setDestinationEntity(247U);
    msg.origin.assign("FUYKTODIOIUXYHSQMRDUPCFFPRUFSIFSPCHDAEWTROJNUPTNRHLNIIVJQYPKPHDRENKQSZWKMZBEZCYOPBGLLGKXXUTUQTVTHDFCEROUIBGKALCWNWAQYAVOQADOJPFXGBYABZVOYWQRPQBJZXIDGSOYFMETGBNUDWGSYRLGCBEMDQKIHEXEWMHLVEMNCNARURLVVHWNJJMSZTQWCVDHMKZNMXALJBZECASKJMPVVTIYKLJFC");
    msg.text.assign("XIBYYVRQSPKLTFNAZPEUYSJVCCHHWGJMJW");

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
    msg.setTimeStamp(0.830397269731);
    msg.setSource(10089U);
    msg.setSourceEntity(182U);
    msg.setDestination(44454U);
    msg.setDestinationEntity(76U);
    msg.origin.assign("LOCSFQFHILZMCFD");
    msg.htime = 0.224722959692;
    msg.lat = 0.156965692238;
    msg.lon = 0.915042164079;
    const char tmp_msg_0[] = {104, -29, -27, 116, 123, -118, -65, -96, -87, 125, -63, -14, 83, -71, 74, -24, 8, -11, -23, -95, 4, -51, -54, 87, 18, 97, -19, 77, -8, 123, -38, 93, 116, 82, 63, 123, -29, -36, 109, -5, -78, 85, -53, -29, -23, -16, -101, 30, 94, -81, -57, 76, -95, 51, -36, 110, -126, 13, -83, -108, 69, -113, -7, -121, 1, 29, -76, 73, -87, -98, -57, 40, 99, 29, 100, 97, -51, 118, -38, -9, -9, -29, -57, 112, 8, -32, 29, -87, 79, -87, -54, -108, 86, 18, -115, 34, 32, -114, 106, -115, 72, -100, 36, 16, 7, 110, -95, 88, -124, 44, 83, -70, -30, 10, 93, 3, 37, -82, 96, -58, -1, 77, 5, 65, -62, -33, 21, -100, -43, 107, -87, -41, 98, -106, -99, 48, 118, 16, -126, -42, -128, 100, -73, -90, 80, 125, -73, 83, -51, 72, -80, -4, 85, -123, 72, -44, 23, 57, -121, 43, 118, 50, 117, 2, -90, -11, -121, -8, -127, 54, -94, -19, -29};
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
    msg.setTimeStamp(0.936675382313);
    msg.setSource(9875U);
    msg.setSourceEntity(245U);
    msg.setDestination(49126U);
    msg.setDestinationEntity(56U);
    msg.origin.assign("ZKPBJHFPSXNGOTHIZDUSQDIKKTZPNIXGHAEYAPOKCMBWBFRGNLSDJVJUWJOQIACYDQJXXPXHVPLFWFXQLKLVPZXXDQAMBZWNONACRHOQZEVVZGBAYITYYCFSKDMVFGCVRGLEOBTLWHHRCXCWFEGUVPAJBZ");
    msg.htime = 0.134857809576;
    msg.lat = 0.0823191507792;
    msg.lon = 0.516077004086;
    const char tmp_msg_0[] = {17, -62, -117, -11, -94, 92, 68, -73, -124, -13, 114, 92, -13, 6, 31, -64, 36, -20, 56, 118, -42, -49, 55, 1, 74, 53, 40, 50, -98, 66, -37, -45, 103, 57, -127, 17, 97, -51, 69, -26, -13, -25, -113, 36, 70, 23, 92, -30, -65, 122, 1, 1, -18, -39, 19, -44, 116, 74, 54, -110, 88, -69, 87, 11, -30, 33, -78, 106, 6, -44, -115, 1, -48, 96, 106, 107, -18, -110, 108, 12, 121, -97, -116, -2, -75, 85, 60, -34, -44, 88, -49, -66, -47, -48, -12, -46, 13, 88, 24, 38, 74, 63, 101, -55, -54, 125, -19, 35, -26, 43, -74, -122, 73, 80, -45, -69, 113, 107, -45, 121, -68, 78, -125, 28, -53, -21, -118, -108, 40, -40, 106, -115, 6, -28, -24, 1, 117, -108, -16, -43, -46, 86, -56, 16, -57, 101, -99, -2, -37, -54, -64, 1, 56, -119, -107, 14, 88, 69, 82, 81, -89, 45, 5, -20, -47, 106, 0, -42, 25, -77, -106, 10, -61, 47, 99, 29, -33, 97, -9, 105, 23, -58, -97, 64, 119, -9, -95, -64, -53, 14, -21, 89, 86, 27, 19, -111, 110, 78, -111, -73, -114, -66, 46, 79};
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
    msg.setTimeStamp(0.328351039086);
    msg.setSource(37435U);
    msg.setSourceEntity(223U);
    msg.setDestination(14582U);
    msg.setDestinationEntity(196U);
    msg.origin.assign("VMCJTOAESAVUWNUUHFZHCHHXSBMRORHEFUHWCJOAQSZUZQOOFKGGQPPAFTIVBXQYEQLXTKYIVUPPRJKABVPBKINUELTVMWSGTZPJNFBGIYGPIMKDZIXETNMRJIGRSDPYXCC");
    msg.htime = 0.00566527623613;
    msg.lat = 0.101891799915;
    msg.lon = 0.00680074422184;
    const char tmp_msg_0[] = {-106, -52, 34, 74, -66, 105, -53, 121, 107, 47, -48, 77, -73, 24, 108, 39, -30, 115, -114, -45, 56, -21, -117, -36, -6, -127, 9, 102, -72, -82, -90, 63, -116, -99, 82, -50, -102, -95, -99, 72, 96, 49, 81, -22, 102, -102, -114, -37, 99, 87, -66, -13, 108, -66, 48, 111, -123, 107, -105, -74, -94, -75, 6, -96, -36, -19, -64, -93, 40, 85, 125, -37, 122, -32, 43, -52, -47, -104, -65, -32, 30, 76, 15, -106, -8, 2, -63, 77, 51, 75, 120, -100, -71, -10, -127, -69, 112, 121, -36, 76, 15, -37, 40, 53, -45, -49, 8, -127, 45, -109, 57, 12, 71, -48, -27, -52, 106, 96, 24, -39, 64, -82, -98, 49, -26, 57, 56, -101, 3, -27, 46, -21, 84, 93, -79, -29, 106, -94, 45, 22, -110, -74, 91, -46, -126, -51, 49, 74, -16, -69, 8, -19, 35, -2, 100, -99, 86, 96, -102, 25, -121, -54, 21, 101, 31, 36, -1, -103, -95, 8, -121, -31, 85, -19, 50, 42, 121, 93, -85, -43, 49, 33, 101, 84, 12, -74, -49, -20, -38, 75, -10, -11, -98, 85, -18, 121, 100, 72, -42, 51, -74, 34, 73, -8, -36, 52, 85, -13, 36, 93, 62, -39, -126, 101, -123, 48, -95, -32, 75, -70, -84, 126, -44, -10, 24, 107, 119, 16, 62, -23, 36, -22, -109, 23, 56, -100, 114, 124, -55, 85, 104, -65, 57, 27, 53, 4, 5, 96};
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
    msg.setTimeStamp(0.30514383087);
    msg.setSource(45299U);
    msg.setSourceEntity(193U);
    msg.setDestination(55111U);
    msg.setDestinationEntity(44U);
    msg.req_id = 58797U;
    msg.ttl = 3228U;
    msg.destination.assign("UYZVXVABXKNMQEDRMMVNIDAEGYSNVQFXVPESCQJSJUFPKOLXUHGPPHFAWTIFDTTOZRAQSEJLIKGQEPKYEUQZNGHLVDBHAROPITLUITJOBECDAYOKZRFWPQSPMFEVWBCNXCDBWJMCZEWHTUZCHWSNSXUBLMRFXGHSAKJKUWAPIZGUYVYYBBTWLSNWCRKSZXVPHXMIN");
    const char tmp_msg_0[] = {49, -51, -81, -104, -88, 70, 86, -90, -105, -27, -43, -66, 126, 124, -32, 56, -126, 104, -37, 33, 7, 95, -104, -49, 19, 118, -113, -72, -41, -127, -82, -51, -32, 23, 2, 49, -63, 82, -118, -12, -95, 29, -3, 51, 35, -62, -4, -112, 121, -65, -43, 110, 116, 79, 49, -98, 34, 116, 111, 24, -13, 18, -5, 79, -62, -92, -19, -31, 43, -73, -105, -65, 1, -81, 3, -105, -3, 55, 99, 82, -109, -20, 29, 92, -112, 18, -24, 122, 44, -76, -91, 5, 112, -13, -77, 72, 60, -17, 107, -11, 19, 69, -22, 25, -114, -86, -75, -37, 105, -20, 115, 4, 4, -79, -15, 125, 8, -16, 0, -62, 84, -85, 8, -69, 116, -78, -58, 122, -38, -68, -107, 42, 48, -104, 114, 20, -50, 35, 108, -43, -44, 98, -24, 52, 60, 56, 97, -50, 110, 20, -82, 46, -25};
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
    msg.setTimeStamp(0.531174060643);
    msg.setSource(37162U);
    msg.setSourceEntity(227U);
    msg.setDestination(49768U);
    msg.setDestinationEntity(64U);
    msg.req_id = 87U;
    msg.ttl = 20946U;
    msg.destination.assign("MGIIVSNHXUMAJAVLGGWTBXKNYZFATRWWHKDLYPVEDSTXUWCCSOMEXGZVUAQWVJQEVKOCXBXVGBDRLWHVQOUG");
    const char tmp_msg_0[] = {70, 124, 113, -72, 42, -24, -79, 11, 6, 34, -16, -105, 118, -93, -105, 122, -20, 73, -67, -99, 5, -42, -95, 66, 53, -31, 22, 8, 68, 29, 77, -32, -80, -85, -30, -32, -120, 80, 47, -13, -16, -64, 63, 118, -122, 67, -73, 46, -36, -41, -82, 30, -66, 92, 101, 111, 13, -88, -96, 25, -31, 43, 0, 94, 74, -91, -112, -48, -40, 119, -52};
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
    msg.setTimeStamp(0.945763835738);
    msg.setSource(467U);
    msg.setSourceEntity(221U);
    msg.setDestination(15580U);
    msg.setDestinationEntity(32U);
    msg.req_id = 45461U;
    msg.ttl = 62466U;
    msg.destination.assign("VAHQOFMEJJAVUUDLTINXUNVTVLZMYBNPGOEWOHRVHTIMYQPIHWRSNSUQANOPVIBYZGZNHSAFCSRGJCPOZUTKTMRXYULISBFELSPVIJBHQVDDOLMXCCGWXF");
    const char tmp_msg_0[] = {-68, -28, -32, 36, -33, 90, -19, 53, 104, -66, -97, -103, -124, 38, -8, 23, -17, 77, -102, -28, 34, -67, -38, -44, 86, 82, 81, -68, -117, 25, -18, 1, -10, -88, -114, -111, -93, 96, 122, -112, -31, -95, 73, -98, 98, 43, -128, -62, 48, 109, 7, -86, -98, -111, -123, 70, 45, -3, 83, -49, 114, 50, -97, 55, -44, -106, -117, 61, 23, 81, -105, -16, -77, -28, -76, 31, -11, 9, 60, 124, -84, -23, 1, -81, -54, -100, -61, 6, 22, -23, -41, 83, 36, -94, 33, -48, 37, 53, 113, -37, -115, -7, -20, 49, 6, 61, -114, -120, 63, -79, 52, -112, -38, 124, -11, -89, -31, 83, -36, 53, -24, 77, 46, 71};
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
    msg.setTimeStamp(0.290513107771);
    msg.setSource(6205U);
    msg.setSourceEntity(174U);
    msg.setDestination(3487U);
    msg.setDestinationEntity(4U);
    msg.req_id = 19528U;
    msg.status = 43U;
    msg.text.assign("YPFVXBLVAIATELGOONEHMNDXFOCIJMVSWBPACUJNTTSRHHHNTTFDYQMQVXOCJFQIGNZOYXEYQDMLMKBZZRZICIQXGQZRXLHLSTEQNDVBIMPWFHOCOBRAXKJRAVDCHXUEWJIUEJGKJDVMAZNBAIWOLMVGUAUSIKTCEG");

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
    msg.setTimeStamp(0.075286390027);
    msg.setSource(23145U);
    msg.setSourceEntity(224U);
    msg.setDestination(9276U);
    msg.setDestinationEntity(7U);
    msg.req_id = 34686U;
    msg.status = 226U;
    msg.text.assign("VLYUSSDJLHVVJRLMRQDDJWRCDGQWMCYDHAEUNSIYPWIMOIWOEEKCVRUJEPNOEASHSTMPBGH");

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
    msg.setTimeStamp(0.00967830793499);
    msg.setSource(10075U);
    msg.setSourceEntity(199U);
    msg.setDestination(48829U);
    msg.setDestinationEntity(192U);
    msg.req_id = 21959U;
    msg.status = 135U;
    msg.text.assign("QIFFPEPDVQGRDZBQGJAUAJABNZTLPWGHLJRJVSXDVOUCLBNTNXIGUKIKJJSTRLEOYIPOHWKIBQGULSAOCNWTRIVIMAKER");

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
    msg.setTimeStamp(0.797345292657);
    msg.setSource(13294U);
    msg.setSourceEntity(213U);
    msg.setDestination(62837U);
    msg.setDestinationEntity(1U);
    msg.group_name.assign("JSPHCGDKZYRLJNZEKDEZNPMJXMGSSSVGHZNOVJKOEUHRBXZKWWJIVWFAXRNAGYEWWNLPCLUAZRLBLOGTFZCDKQTVINQOTBHKSFQMBNLEZTWXFYEFQASMFFFPWOMAYADVRBYPCQAMWRQYTIQVZIPGVAYODUILJKXZUTTCCNVUUERNACUGUQDDOMGERYRTUHIBMFA");
    msg.links = 2412165210U;

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
    msg.setTimeStamp(0.616740429598);
    msg.setSource(16210U);
    msg.setSourceEntity(73U);
    msg.setDestination(16473U);
    msg.setDestinationEntity(57U);
    msg.group_name.assign("JSIIFZNPLIDEOPGRZUTCMNHWJDFIESONEYEAUJPVJKIFGYVPLRNNQWZBTIVXXZSVRQJGTZSXQCQXVMUWFQBVHJLHTEYSWRKDKHNNYUUBERQRHXTDJPEWACECSOXTAHMMUOIGPKTVRFOEBGMLBSZEBXKYZALDXBKDTLHDVCYZUKCGMANCBSHKSM");
    msg.links = 3335431366U;

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
    msg.setTimeStamp(0.498135116236);
    msg.setSource(46754U);
    msg.setSourceEntity(34U);
    msg.setDestination(35364U);
    msg.setDestinationEntity(178U);
    msg.group_name.assign("RWCFLXKKVNPJYQVZIRJYNRCJDJLDBBNSHQCTBKLEIALLZIBHADWWUSHXCTTTBHOVUVGUOWMERGUDWLKBERQPYEISPTZQHEVRGGNGYEYQAUXJYDBQWUYHGBPSPZGUPLXOOUCVSZRYUJFPFCPFQXCRIQPJFDHAKMXTVBHFYUZMXJHALFLTMEZFC");
    msg.links = 2388079008U;

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
    msg.setTimeStamp(0.324065729904);
    msg.setSource(64428U);
    msg.setSourceEntity(122U);
    msg.setDestination(46440U);
    msg.setDestinationEntity(115U);
    msg.groupname.assign("OZUBVFZQENYQDNLPOWEUJLVMMJHXVHPFSNTRAQACTGXHAFXHZUBVSZTYXEKWIFRTUUKYKKWQAFGDHGILDQFWPVVEQBJINIWATAOHKRZBLZGCSLGHVAEBYLTXSSRMYNHIOEHRTFQRLCUJRDCGQAKXJMWBYDCGGMPGDAMNSZRVDZWVBXLOZNSEFPKWUJOJP");
    msg.action = 81U;
    msg.grouplist.assign("RWMOCZCCDTAIPXNYZQXXLJIZFUEKCWQBUUOXWHPAIYLZCVNJQYEWOIXYKM");

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
    msg.setTimeStamp(0.943483102577);
    msg.setSource(39016U);
    msg.setSourceEntity(96U);
    msg.setDestination(3357U);
    msg.setDestinationEntity(147U);
    msg.groupname.assign("QLDSMOGBQUJAPFRLIDQRPKPEHMCGRHUPRBBHCOZFDCDTROTIWZLXRUGHJKTXCXAUBWNILXAHLZKVNQBZSICDNAZAOYQOVFGENLLZBIVGDEYXSN");
    msg.action = 90U;
    msg.grouplist.assign("VNBXBTRFJTQZZQJZHCYRIPAQKUOYEZLSDDOAHUZICODWIUMKNWWQHUBPVYFYLODISPCHXAGKMCTKGPBIRIBDRANSGGMVOPJTBDZASCMWGQUKTBAQUFYSLAWGEYFXRLCPGJPFQLISTAKHPCJGNZRCDFVXMMBRXKRSOTTEERKW");

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
    msg.setTimeStamp(0.110235970583);
    msg.setSource(58992U);
    msg.setSourceEntity(75U);
    msg.setDestination(11218U);
    msg.setDestinationEntity(186U);
    msg.groupname.assign("KTAJLXXXSFHSNFJGUDBJMWS");
    msg.action = 50U;
    msg.grouplist.assign("LDJUOXOQZEPWWLITMYXZLUVARQVSDJRKHJOWYBJGVGFFAWFGHCKKUVMIRBTPSHTFWSEVKAWAITIZKSFHUAEBSQNMYWHPNKVPOSPVREPQDYEJMEWNRJDCDICMKGLIMIMLNOZXBYOTYDOZM");

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
    msg.setTimeStamp(0.170821924716);
    msg.setSource(18246U);
    msg.setSourceEntity(139U);
    msg.setDestination(5167U);
    msg.setDestinationEntity(36U);
    msg.value = 0.0902716485499;
    msg.sys_src = 50588U;

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
    msg.setTimeStamp(0.10657993228);
    msg.setSource(45140U);
    msg.setSourceEntity(86U);
    msg.setDestination(1225U);
    msg.setDestinationEntity(192U);
    msg.value = 0.419884414927;
    msg.sys_src = 13613U;

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
    msg.setTimeStamp(0.904665610504);
    msg.setSource(47863U);
    msg.setSourceEntity(23U);
    msg.setDestination(55019U);
    msg.setDestinationEntity(168U);
    msg.value = 0.661021446535;
    msg.sys_src = 3850U;

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
    msg.setTimeStamp(0.888149815211);
    msg.setSource(18860U);
    msg.setSourceEntity(63U);
    msg.setDestination(53921U);
    msg.setDestinationEntity(210U);
    msg.value = 0.268936705914;
    msg.units = 199U;

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
    msg.setTimeStamp(0.325057449735);
    msg.setSource(55745U);
    msg.setSourceEntity(74U);
    msg.setDestination(21311U);
    msg.setDestinationEntity(44U);
    msg.value = 0.834744766597;
    msg.units = 110U;

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
    msg.setTimeStamp(0.872551906997);
    msg.setSource(58362U);
    msg.setSourceEntity(37U);
    msg.setDestination(30208U);
    msg.setDestinationEntity(182U);
    msg.value = 0.870457244861;
    msg.units = 83U;

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
    msg.setTimeStamp(0.102888530739);
    msg.setSource(25637U);
    msg.setSourceEntity(145U);
    msg.setDestination(13718U);
    msg.setDestinationEntity(204U);
    msg.base_lat = 0.308777533074;
    msg.base_lon = 0.709878562504;
    msg.base_time = 0.432111059866;

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
    msg.setTimeStamp(0.0751500606618);
    msg.setSource(11129U);
    msg.setSourceEntity(133U);
    msg.setDestination(31619U);
    msg.setDestinationEntity(173U);
    msg.base_lat = 0.372644387485;
    msg.base_lon = 0.82613670505;
    msg.base_time = 0.158408612845;

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
    msg.setTimeStamp(0.362153445179);
    msg.setSource(33255U);
    msg.setSourceEntity(163U);
    msg.setDestination(36034U);
    msg.setDestinationEntity(228U);
    msg.base_lat = 0.352111258352;
    msg.base_lon = 0.901116841296;
    msg.base_time = 0.430787949921;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 28251U;
    tmp_msg_0.priority = 32;
    tmp_msg_0.x = -14850;
    tmp_msg_0.y = -7314;
    tmp_msg_0.z = -27257;
    tmp_msg_0.t = 25183;
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 21995U;
    tmp_tmp_msg_0_0.lat = 0.933907098761;
    tmp_tmp_msg_0_0.lon = 0.569863268939;
    tmp_tmp_msg_0_0.z = 0.462126799555;
    tmp_tmp_msg_0_0.z_units = 219U;
    tmp_tmp_msg_0_0.amplitude = 0.967025935494;
    tmp_tmp_msg_0_0.pitch = 0.116485043744;
    tmp_tmp_msg_0_0.speed = 0.227611089896;
    tmp_tmp_msg_0_0.speed_units = 206U;
    tmp_tmp_msg_0_0.custom.assign("USLWMLTCPLREFAWLSAADHUOUEIUJBHPTORCKPFIGQDLUFHOPJJXVJNMOEEYVKGQPNACGDANJZXMFVYTSEDVOTKKJBBTHCFURIAZNOGGPZFYSHIBBIZQPQEIWQKBZPIVYRARNQTCJNVGTKVLKESJWMUGFWIHHCHOXYZDHOTQFUDNNEJKAAMXYMBMSHAUSVYRZXCEMUXSBYNLZGDGCJFGXMLYSQOXRWEBZQXWIMKIRPXOLTPFKDNTWYVW");
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
    msg.setTimeStamp(0.448374108449);
    msg.setSource(46965U);
    msg.setSourceEntity(71U);
    msg.setDestination(34062U);
    msg.setDestinationEntity(44U);
    msg.base_lat = 0.10500877778;
    msg.base_lon = 0.469859842701;
    msg.base_time = 0.343511874113;
    const char tmp_msg_0[] = {-80, 62, -48, 65, -101, -117, 94, 23, 75, 36, -5, -5, 78, 113, -107, -26, 36, -32, -34, 10, 45, 125, -91, -70, 51, -119, -91, 83, -94, 109, -116, 90, 31, -45, 87, -69, -121, 88, -44, -65, -11, 21, 20, -12, 49, -79, -101, -52, 52, 93, 19, -74, 102, 112, 41, 27, 31, -53, -16, 103, 15, -94, -4, -20, -113, -70, -47, 81, 97, 124, 80, -116, -5, -92, -89, -29, 87, 108, -43, -58, -111, 92, 121, 42, -33, -17, 40, -99, -88, 73, 25, -11};
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
    msg.setTimeStamp(0.477640862803);
    msg.setSource(16038U);
    msg.setSourceEntity(38U);
    msg.setDestination(2146U);
    msg.setDestinationEntity(130U);
    msg.base_lat = 0.741486935194;
    msg.base_lon = 0.544647146744;
    msg.base_time = 0.76814696701;
    const char tmp_msg_0[] = {-74, 80, 119, 84, -125, 44, -54, -128, -12, -43, -39, -109, -96, 100, -36, -5, 60, -49, 74, -8, -112, -47, 21, 119, 28, 24, -43, 29, -124, -121, -70, -43, -62, -45, -13};
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
    msg.setTimeStamp(0.0971250727233);
    msg.setSource(19468U);
    msg.setSourceEntity(173U);
    msg.setDestination(48942U);
    msg.setDestinationEntity(183U);
    msg.base_lat = 0.459468176241;
    msg.base_lon = 0.878212405342;
    msg.base_time = 0.709656025212;
    const char tmp_msg_0[] = {79, -115, 57, -124, 14, 94, 52, 28, 114, -23, -64, 8, -90, 19, 64, -104, 74, -34, 113, -6, 117, -20, 46, -46, 62, -77, 23, -114, 45, -37, -33, 112, -54, -84, -43, -32, 88, 94, -51, 53, 66, 6, -80, -96, 90, 13, 101, 80, 66, -107, 57, 114, 69, -63, 93, -58, 19, 20, 8, -37, 14, 85, 119, -24, -62, -119, 10, -13, -17, 6, -48, 104, -10, 6, 78, -90, 45, 36, -60, -87, 116, -26, 104, 47, 85, 77, 76, -84, 9, -34, 56, 77, 101, -45, 31, 90, 17, -31, -42, -11, 29, 42, -44, -27, 100, 113, -106, 30, 89, -48, -15, 113, -34, 52, 58, 25, -32, -51, 71, -98, 23, -101, -99, 122, 117, 93, 55, -79, 94, -33, -81, 33, 5, -92, 44, -81, -54, 37, -77, -84, -122, 21, 10, 35, -85, 59, -33, -47, 95, 36, -60, -119, 54, -35, 28, -128, 6, -4, 61, 41, 108, -77, -81, 92, 49, -2, -69, 53, -91, 76, 33, 51, -101, 111, -112, 89, 53, 76, 68, 51, -4, 11, -27, -75, -58, -26, 11, 78, -31, -17, -49, -115, 19, 67, 79, 2, 49, 15, -97, 104, -51, 117, -45, 8, -67, 12, 104, -82, -119, 56, 14, -27, 86, -38, -113, -13, 96, -22, 114, 18, -59, -46, 9, -32, -45, 105, -52, 116, -102, 5, 22, 72, 34, 104, -63, -34, 107, 64, -125, -77, -124, -19, -56, 52, 12, -40, -60, -3, -91};
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
    msg.setTimeStamp(0.0596207278954);
    msg.setSource(25064U);
    msg.setSourceEntity(216U);
    msg.setDestination(18431U);
    msg.setDestinationEntity(78U);
    msg.sys_id = 42190U;
    msg.priority = -76;
    msg.x = 32756;
    msg.y = 12950;
    msg.z = 1170;
    msg.t = -3381;
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("ISDZYZJDEPRMCQTXOPAKWPLZGFINXVEABLEKHTFLLCTJUMBJSMPLXFRRQAXXRZCWNIZHIONYPXIYCUEFRPPSQVLSMJJTPGAIBNGVVSHFNTBWEERGHJVCPFCNSNTTQOHQOME");
    tmp_msg_0.data.assign("HPFSKDFEQMIPTMXKYVOZRDHJKVWTQOAQVQCZEXCYOVGXJXGUDUIBJNPZNLJROZBKNYUBWSBTSCPLZBRICLQHSHBOUBERSWRRNSMFMRUKHDIFZXNJACQM");
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
    msg.setTimeStamp(0.493054819308);
    msg.setSource(26368U);
    msg.setSourceEntity(240U);
    msg.setDestination(44586U);
    msg.setDestinationEntity(210U);
    msg.sys_id = 45365U;
    msg.priority = 83;
    msg.x = -12688;
    msg.y = 13474;
    msg.z = 6800;
    msg.t = 21872;
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("IWWUCFPKBIJQAAWKMRGPDYSGXLQDVKCW");
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
    msg.setTimeStamp(0.879056456629);
    msg.setSource(28476U);
    msg.setSourceEntity(112U);
    msg.setDestination(12922U);
    msg.setDestinationEntity(104U);
    msg.sys_id = 46293U;
    msg.priority = 92;
    msg.x = -30109;
    msg.y = 2640;
    msg.z = -5530;
    msg.t = 26811;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 214U;
    tmp_msg_0.entities.assign("OQQPVJGOVGYKZLXSEEHIVTCBJYDKAGFEINLFELRDSCRPYYD");
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
    msg.setTimeStamp(0.906196329414);
    msg.setSource(12277U);
    msg.setSourceEntity(41U);
    msg.setDestination(20665U);
    msg.setDestinationEntity(23U);
    msg.req_id = 46071U;
    msg.type = 44U;
    msg.max_size = 61884U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.919492936176;
    tmp_msg_0.base_lon = 0.757726442429;
    tmp_msg_0.base_time = 0.721524340991;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 10837U;
    tmp_tmp_msg_0_0.destination = 3110U;
    tmp_tmp_msg_0_0.timeout = 0.492514181277;
    IMC::Rpm tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = -4638;
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
    msg.setTimeStamp(0.4570736748);
    msg.setSource(29860U);
    msg.setSourceEntity(134U);
    msg.setDestination(49003U);
    msg.setDestinationEntity(133U);
    msg.req_id = 62291U;
    msg.type = 239U;
    msg.max_size = 47714U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.858755446442;
    tmp_msg_0.base_lon = 0.852538080837;
    tmp_msg_0.base_time = 0.274155042816;
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
    msg.setTimeStamp(0.279843544834);
    msg.setSource(21972U);
    msg.setSourceEntity(53U);
    msg.setDestination(19710U);
    msg.setDestinationEntity(238U);
    msg.req_id = 19530U;
    msg.type = 64U;
    msg.max_size = 34228U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.135759801564;
    tmp_msg_0.base_lon = 0.80955703168;
    tmp_msg_0.base_time = 0.0410931249557;
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
    msg.setTimeStamp(0.181283163674);
    msg.setSource(1824U);
    msg.setSourceEntity(228U);
    msg.setDestination(35589U);
    msg.setDestinationEntity(160U);
    msg.original_source = 1618U;
    msg.destination = 61953U;
    msg.timeout = 0.522360350584;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("FLVVTIQWFKQWPMUGNHNLHMUERCJSTHYWOPKISOJRWONEZLXKDIAZYBAVTYEAMOGNVFGIVBYUSIWSZNEESJEZQAPGPKSABJLSHMIZTYCZGBDEMIOHKHDVMPFDVADOCRLQIXFJJBXLWTPHTXTQCUSHBDFBGOXJKWMFELCZUSQGEJFRNMCGMTRROCDAGLTQFJVLDCXZNQETLCRCRRHFBAXONWIZ");
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
    msg.setTimeStamp(0.390758297722);
    msg.setSource(31608U);
    msg.setSourceEntity(120U);
    msg.setDestination(19219U);
    msg.setDestinationEntity(215U);
    msg.original_source = 60237U;
    msg.destination = 52588U;
    msg.timeout = 0.501126854805;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.954311837654;
    tmp_msg_0.lon = 0.582636599246;
    tmp_msg_0.speed = 0.741131519376;
    tmp_msg_0.speed_units = 64U;
    tmp_msg_0.limits = 181U;
    tmp_msg_0.max_depth = 0.648437159386;
    tmp_msg_0.min_alt = 0.296927205453;
    tmp_msg_0.time_limit = 0.124124846822;
    tmp_msg_0.controller.assign("VFCLPBUMDRTAPXOBLYKRFJDJVKLRXDFLKSYOHXBTZIDOQHTPURHQLCSQBVBPSSYNNHQVUOGYFXCPFEYITGSIXNCMFAVTIZNXUCUNGUESFZXKWQLGMHOZQLXW");
    tmp_msg_0.custom.assign("WFMUARVIXQUAUSZNFDSWNCVQFLKTILJXAKRNGUTYWUNGYLYAHBTDYIVOXBYGOOSOIQCGJKPFSEDXDIPEZJCXCPAJLWQCGDFCCBPJTSQTELUVJUKTFJUQEMXMWECRAQGZVDRWLNEHLIVDEUGBIVERZAPTXZBHBPAVYXMPFNTRWDHWMZDPSVMHKSYRKYKSWNFZNKZJMRQHZBLJOESCUHNETZDORIAMK");
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
    msg.setTimeStamp(0.29967966147);
    msg.setSource(44074U);
    msg.setSourceEntity(165U);
    msg.setDestination(2269U);
    msg.setDestinationEntity(170U);
    msg.original_source = 53605U;
    msg.destination = 10570U;
    msg.timeout = 0.145857089481;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("EPSNRUMFIVKTDPIARSCOQHHTYGFTOVFEZAVEISFJNKDJPUQXHJVHTINQFUSTEOMRKXHWXPHUVAYMYTLCMWPWPIBZCZHTAHBDLVK");
    tmp_msg_0.sensor_class.assign("HWSFCIYJDFBUBFGCDMBRMHUYJFTEUKRSWMAIRPPFLNOUNXNKNOTGKXKMKIPTGYKXVAUJZSGZOCHUWNBPSTFZSCGKHMODIQQDQEUDYTLTRHKJYYDYWBCZXADMQORZRSMZAPMFBUYDRVVCEEWCWIXMJSZGGCVIQDBGSFVNZAL");
    tmp_msg_0.lat = 0.44289619261;
    tmp_msg_0.lon = 0.0910316812601;
    tmp_msg_0.alt = 0.164566411721;
    tmp_msg_0.heading = 0.9411880415;
    tmp_msg_0.data.assign("XUJUNAODWBNKHQVKTYOIKXHJLMSHIJWSRLNKDOZVCFGGOFPEGGWJBOWCKXAKPDYTLFFPOEQHZUDLFDMRURQKRVUJWSGEXEIRHBTASVTYIBWRGRVIMUTQQEJIYVZFZXZPZJSBEWJZQICCABXSAWSSVINC");
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
    msg.setTimeStamp(0.386304690407);
    msg.setSource(51634U);
    msg.setSourceEntity(63U);
    msg.setDestination(48219U);
    msg.setDestinationEntity(106U);
    msg.type = 206U;
    msg.comm_interface = 42066U;
    msg.model = 62257U;
    msg.list.assign("SEHVCZWQIAYPFFXDDJFGQKKOHCOYEYSDGHIONCQVTRKRMGYFMPFCXQSXHBDSTMVIWOSNXQ");

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
    msg.setTimeStamp(0.188038146822);
    msg.setSource(63124U);
    msg.setSourceEntity(117U);
    msg.setDestination(38360U);
    msg.setDestinationEntity(104U);
    msg.type = 45U;
    msg.comm_interface = 24778U;
    msg.model = 34295U;
    msg.list.assign("RADDJACNTYCFKTLJNXOFHJRCOPSLDZZVUWMDCRZEWBXSAECKQPBTYFFIQZYJHPDRGNTPEVCDBEHWNQASPSKPXLMUZLQJNGUERBLH");

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
    msg.setTimeStamp(0.250304164479);
    msg.setSource(40247U);
    msg.setSourceEntity(53U);
    msg.setDestination(27755U);
    msg.setDestinationEntity(88U);
    msg.type = 50U;
    msg.comm_interface = 22027U;
    msg.model = 19142U;
    msg.list.assign("KQLJWDZHCOEMCPELRAPKXAGDQAPNEBCIXVCYVPUHDYYBQBMCCLGGYRJAPRYMNZXWNZMPNFBOHOAITBFBOWHDKSFTFXPQJABTUZSAIHNCICZWSESNLMNMVOVLBJOX");

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
    msg.setTimeStamp(0.401856918157);
    msg.setSource(33971U);
    msg.setSourceEntity(214U);
    msg.setDestination(39506U);
    msg.setDestinationEntity(150U);
    msg.type = 44U;
    msg.req_id = 2008947458U;
    msg.ttl = 22910U;
    msg.code = 253U;
    msg.destination.assign("FXSSADHMLDGDJCPCRCELYTOQDWCGTZLSEIUNZRGJIXZIPEVNADGIMNYOAVUMBESWEHOFEFQWMIIKDJKKL");
    msg.source.assign("XDZVGGMITOEVDBOCFNQNEIWWLWPEODMLFNOESJLRZLNSSWPTAHYAGOEKIYKQUGYBUVYQAEPPCFTMSUKJZXUIEKRRHCFZTFLBCDYWXJPCBBVIIRAYSAJCPKWSGJIVHOGXQUVXJFAHUROXYMXQXTBEWXOKUGUWWHRFTHNQQSAMNTCKZHCFRNJPIIMNKZPXADY");
    msg.acknowledge = 241U;
    msg.status = 44U;
    const char tmp_msg_0[] = {-86, 41, -6, -115, -15, 102, 89, 45, 20, -123, 10, -66, 19, 91, 62, -64, 36, 33, -82, 42, 98, 22, -32, -26, -52, -19, -62, -72, -108, -50, 0, -1, -84, 77, 17, -40, 35, 36, 61, 72, -46, 65, 53, -102, -20, -4, 33, 62, -10, -98, -122, 113, -18, 71, 21, 124, -124, 40, 71, 45, 54, 113, 114, 14, 50, 2, 59, 51, -111, 37, 100, -20, 77, 111, -31, -30, 62, -128, 101, -22, -83, 73, 103, 10, -84, 72, 10, -102, -78, 95, 123, 57, -3, 55, 125, 65, -86, -78, 104, -108, 111, 56, 116, -126, -54, 97, 126, 105, -112, 28, 105, -110, -20, -33, 64, 13, 46, -75, 4, -83, -126, -62, 21, -95, -74, 82, -33, 15, 0, 14, -49, 103, -124, 73, 18, 13, -126, 8, 39, -14, 14, -100, -85, 109, 22, 116, 35, -41, 96, -53, -16, -112, 22, 119, -9, -117, 115, 50, -12, -95, 70, 20, -96, 28, 51, -123, 6, -102, -100, -120, 26, -44, -92, -79, -24, -40, 101, -11, -71, 103, 9, 20, 114, -67, -96, 126, -70, 49, -38, -117, 75, 103, 41, -96, 63, 42, 82, 17, -68, 103, -61, -62, 17, -27, 41, -11, 53, -76, -56, -106, -73, -62, -56, -78, 120, 87, -40, 120, 123, -41, 10, -23, 18, 38, -31, -49, -5, 54, 85, -77, 33, -127, 75, -77, 96, 103, 87, -95, -8, 96, -110, 126, -123, -39, 49, -11, 83};
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
    msg.setTimeStamp(0.352952345778);
    msg.setSource(52586U);
    msg.setSourceEntity(52U);
    msg.setDestination(49378U);
    msg.setDestinationEntity(248U);
    msg.type = 203U;
    msg.req_id = 3369937393U;
    msg.ttl = 43366U;
    msg.code = 243U;
    msg.destination.assign("TFICIUTWBEWRLXERQZZGXTCVFFDOJVNFGPDCYZIVIYJSKLRWWHDQTGJKNPCTLFCUSROLELLEZQXNDKGMYYQOQYMMJINIUKCQSGNZDBKNFKBKDOPMEABNHNEAVRRZDWVUKYRTFM");
    msg.source.assign("ENWMDRXMFBLAYSGEGINUFMTVWYCMJKVVQZGDURPFZBNZLSMOIEUBPDIHDGORHUUDBZXGEDIHECJSQPPXMRZIAWKVUGVEWGTWGTEIEKUCZBUCZNPGPSSVCYASTZBMCXLXJFAPYFKRFIUOISXSBOKORKTVWHXUQHTTLXWLOWPJRNOPTIKFFRRAJDLVJKYVVKFQTNDHZACNDOLYHGBARANJW");
    msg.acknowledge = 218U;
    msg.status = 233U;
    const char tmp_msg_0[] = {-88, -50, -21, 82, -79, -65, -99, 107, 49, 4, 29, -45, -107, -31, -93, -36, -123, -108, 98, 38, -33, 79, 82, -79, -105, -1, 45, -48, -114, -32, 96, -48, 101, 112, -111, -64, 66, 11, -89, 78, 112, -105, -125, -114, -123, -102, -117, 100, 53, 88, 69, -98, -120, -30, -52, 9, 38, 10, -10, 26, -81, 85};
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
    msg.setTimeStamp(0.174434122318);
    msg.setSource(3305U);
    msg.setSourceEntity(98U);
    msg.setDestination(20408U);
    msg.setDestinationEntity(241U);
    msg.type = 97U;
    msg.req_id = 2352216443U;
    msg.ttl = 21457U;
    msg.code = 213U;
    msg.destination.assign("FFRGYOVEBFSGTSKBROQUXMJXJFMQMXWQTWJCOYMNBWWMUJSVAQEUROZLEQMISBAJZDNCYPHSITNITASAFTRULEZWDZFHHYZPICBTIJASKAENPWMSPSKQZMCCMETOCCGUCWRIZZVDQKGALUZDXFDXZEHQNGLWLNXLIFTKCEGDROBXYHDXFPAHEBVV");
    msg.source.assign("JTRGZYCQGMGGJTQDWUPRRWVGMHAOQEAIGIVYXZZSSORILXJHOPYJKEYRUWZTIUXYHLUJMLFRHSXBCTSVKFHDJQSZLXLQMYMDMVNCEXCXBIATDWBGONNLCPFKVFKOCESOZOHWODTRAUKKBIVRRAADDUWEI");
    msg.acknowledge = 70U;
    msg.status = 12U;
    const char tmp_msg_0[] = {-106, -121, -59, -109, -101, -105, -111, 122, 55, -33, 6, 22, 117, -92, 23, 36, 84, -127, -128, -21, 63, 84, -63, 113, 68, 99, 77, 119, -48, -30, 8, 79, -22, -82, 120, 108, 36, -34, -121, -89, 73, 29, 33, -117, 98, -57, -91, 106, -97, -107, -60, 49, 6, -82, 55, 11, -48, -113, -90, 36, 10, -77, -122, 103, -71, -5, -121, -3, -57, -28, 48, -21, -89, 103, -122, 4, 66, -92, -23, -38, 109, -52, -9, -119, -46, 11, -9, -71, -92, -124, -60, -77, 67, 35, -69, -48, -55, 18, 52, -122, 90, -61, 1, -4, -36, -71, -93, 30, 122, 124, 84, -60, 69, -5, 68, 124, 97, 22, -101, -9, -96, -71, -17, -61, -17, 47, 124, 120, 18, -109, -44, -36, -124, 15, -12, 116, -104, 42, 98, 83, -124, -109, -119, -125, 110, -104, -35, 30, -16, -3, -31, 4, 71, 76, -37, 126, -119, 61, 97, 59, -59, -108, 113, 107, 75, 19, -10, -4, 50, -92, 62, -126, 79, -38, 37, -95, 67, 29, 48, 19, 112, -104, -28, -44, 25, -126, 40, -89, -80, -47, 49, -41, -91, -25, -89, -117, -2, -64, 118, 70, -112, 62, 69, 61, -11, 24, 96, 40, 86, -33, -26, 20, 67, 53, 42};
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
    msg.setTimeStamp(0.294286269175);
    msg.setSource(35006U);
    msg.setSourceEntity(164U);
    msg.setDestination(46685U);
    msg.setDestinationEntity(119U);
    msg.id = 192U;
    msg.range = 0.46317381404;

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
    msg.setTimeStamp(0.313886066014);
    msg.setSource(40618U);
    msg.setSourceEntity(13U);
    msg.setDestination(57637U);
    msg.setDestinationEntity(63U);
    msg.id = 131U;
    msg.range = 0.747743801145;

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
    msg.setTimeStamp(0.0529300175429);
    msg.setSource(32761U);
    msg.setSourceEntity(227U);
    msg.setDestination(34994U);
    msg.setDestinationEntity(97U);
    msg.id = 140U;
    msg.range = 0.688621174809;

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
    msg.setTimeStamp(0.0741204357382);
    msg.setSource(12419U);
    msg.setSourceEntity(157U);
    msg.setDestination(18232U);
    msg.setDestinationEntity(31U);
    msg.beacon.assign("HNBZOSGYOAEQAFARKGXIBJAUXPRDYQNDLNPFNOCJSTRMTRQPTMSFXMLFFLDOCXPQKWJVKNHWBUDDAFTCTKVDGJTNWUYVVJQAHVWBTFNZIDOPAAJJIBKOOENUFTPEQBGOMCCXVEQZIGJZLWONDJUUWHKHRLYRYIZUZHKGUHMXESQAMZWGD");
    msg.lat = 0.95507711707;
    msg.lon = 0.689819686774;
    msg.depth = 0.804638961162;
    msg.query_channel = 53U;
    msg.reply_channel = 8U;
    msg.transponder_delay = 121U;

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
    msg.setTimeStamp(0.895202675575);
    msg.setSource(34588U);
    msg.setSourceEntity(143U);
    msg.setDestination(30435U);
    msg.setDestinationEntity(241U);
    msg.beacon.assign("PUOTNJXQBDFMPJZHRQYHRESKVCOEJRDUNLWXFTXYXXDLNSQQVWTCNZOJTDIEZGHAZKNLDMIELMJRTKIBXMDBKHWBAIIXNFOLDGCYBRNUIMYGUEIDTZVPSFPJNZBWUBAUXWGHSMEULYKPXFYYWFBPLGAJ");
    msg.lat = 0.956196180045;
    msg.lon = 0.927670839766;
    msg.depth = 0.155258663264;
    msg.query_channel = 23U;
    msg.reply_channel = 222U;
    msg.transponder_delay = 125U;

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
    msg.setTimeStamp(0.968475939867);
    msg.setSource(24529U);
    msg.setSourceEntity(130U);
    msg.setDestination(14877U);
    msg.setDestinationEntity(253U);
    msg.beacon.assign("GWNYLHXGCGEAJBGPZRQRIDNBAHPZLWHTJBVUOHWNLEKZGJAAWEANMGZMYSNEMWHDDLRAPOSFRZWUBVUNHIEDOPLLCJDFJQRQESWLTNCPMAZXDJXKLAQSSPHUYYXCHZVOYWXNVJNJBIOKYEFDXQPBFXUSZBZVAVOCKQXFURSQPROJIYQIDIFAUCDMGVGKXCMKEFMKIILLICPCYWCUVZVKTSHFEIOFBRSKTNVBMXHQGQOETTGWFTP");
    msg.lat = 0.0925943566233;
    msg.lon = 0.453197890524;
    msg.depth = 0.231872990371;
    msg.query_channel = 141U;
    msg.reply_channel = 6U;
    msg.transponder_delay = 208U;

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
    msg.setTimeStamp(0.385488320704);
    msg.setSource(60552U);
    msg.setSourceEntity(33U);
    msg.setDestination(26949U);
    msg.setDestinationEntity(242U);
    msg.op = 185U;

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
    msg.setTimeStamp(0.162074746663);
    msg.setSource(47061U);
    msg.setSourceEntity(218U);
    msg.setDestination(52617U);
    msg.setDestinationEntity(163U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.500056005838);
    msg.setSource(37346U);
    msg.setSourceEntity(150U);
    msg.setDestination(24988U);
    msg.setDestinationEntity(214U);
    msg.op = 220U;

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
    msg.setTimeStamp(0.799404085059);
    msg.setSource(41646U);
    msg.setSourceEntity(207U);
    msg.setDestination(45631U);
    msg.setDestinationEntity(146U);
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("DKXBQUNDAWLIOISHIXWGDSXNZTGSZDAHVEJUPIHLBNTEKUITXPQQQINRVVQEJSNTDOSMFWUTLATCSRFFWYYGJXRWYU");
    tmp_msg_0.htime = 0.830806381382;
    tmp_msg_0.lat = 0.619598750324;
    tmp_msg_0.lon = 0.265535425538;
    const char tmp_tmp_msg_0_0[] = {18, -89, 38, 56, -26, 87, -86, -6, 114, -90, -85, -4, 65, -8, -104, 39, -74, 72, 108, 33, -16, -33, 109, -128, 73, -26, -18, 32, -126, 27, -88, 98, -49, -30, -16, 8, -28, -36, 48, -11, 120, 113, 49, 94, 25, 42, 40, 44, 68, -38, 37, 52, 6, 14, 123, -28, -120, 79, -47, -22};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.132600629637);
    msg.setSource(21210U);
    msg.setSourceEntity(156U);
    msg.setDestination(1399U);
    msg.setDestinationEntity(62U);
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 168U;
    tmp_msg_0.error.assign("YBINQUWTAOGRAJVYJXYZQVRRPIKGEPJUTQJXDZESASPJHREHSBHPOGFHWQINTYTBAYEDBKZLCNHWMPVZXDSCPLNIRXUFMEWOBOQDKCTVRQSJALAZWMKUHDWNQCMTKEJLBMFMZIDQUFBKFCYZZBDRAUHJFG");
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
    msg.setTimeStamp(0.178039303003);
    msg.setSource(9858U);
    msg.setSourceEntity(209U);
    msg.setDestination(13815U);
    msg.setDestinationEntity(55U);
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 78U;
    tmp_msg_0.max_depth = 0.684533154788;
    tmp_msg_0.min_altitude = 0.257667289476;
    tmp_msg_0.max_altitude = 0.0716364851956;
    tmp_msg_0.min_speed = 0.419355494033;
    tmp_msg_0.max_speed = 0.960973145958;
    tmp_msg_0.max_vrate = 0.540834548767;
    tmp_msg_0.lat = 0.149221632004;
    tmp_msg_0.lon = 0.130022313749;
    tmp_msg_0.orientation = 0.159045535593;
    tmp_msg_0.width = 0.108226850144;
    tmp_msg_0.length = 0.823102219264;
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
    msg.setTimeStamp(0.0395992696489);
    msg.setSource(63224U);
    msg.setSourceEntity(201U);
    msg.setDestination(55917U);
    msg.setDestinationEntity(193U);
    msg.op = 68U;
    msg.system.assign("GQQXCPAQNEKIGZGFMRKUCOITPZLGTZGXNBGHESDNNGOSOVHJWVZEBPELMUOLHRXAYFYMSJERRVXINBXDTAAFVYQHXFKQNJKOZMMKFESMAHTZYSRXBJLGCFFCWPZAQDKOITNSZXIDDXVJTIMEXANEICSLPDNWRLOCKLUBMJBWINWROQWVQPBJZBKTHCWHWSCR");
    msg.range = 0.696246718546;
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.77222285645;
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
    msg.setTimeStamp(0.620600170711);
    msg.setSource(2718U);
    msg.setSourceEntity(107U);
    msg.setDestination(55734U);
    msg.setDestinationEntity(186U);
    msg.op = 41U;
    msg.system.assign("FAOQJZVFGDIIEPTZJTCIOIGLSQFZORXLSQDWEYJGTWHVMVNKRTURQVJLLMEMFZISCSJGYFKEGNXMEGHUKIYOASBHRWBPKERENPOIRGMJPCCJQXBFHYUXQVMQHCAQEFOWSYYHIBSXDVKUFTVPLEBCCBTWARZTXYFWSOLTMPWDDUDYBHTKKLBPAUUOBLQRDZVNOZMVDXNJCUNAHWYLAQGSGWNWKAJXHXEATNDDPNOIZCKMFJRUPCZMSIKLVN");
    msg.range = 0.823066779433;
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 69U;
    tmp_msg_0.mask = 384872545U;
    tmp_msg_0.scope_ref = 1891872704U;
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
    msg.setTimeStamp(0.846955151801);
    msg.setSource(12526U);
    msg.setSourceEntity(207U);
    msg.setDestination(21924U);
    msg.setDestinationEntity(90U);
    msg.op = 52U;
    msg.system.assign("TDTKOHBEHNMDTFGDUQMADZQWZKTFGRCMSXERGJZACVNXAPZKDFGVLBHVXMNSBCRONIHXSHZODOJPPPWOOYIKAOQDVHZRHJBSXYUUFHAYLTUUWFPUYGQYDPUYFFJZEZRFOCVJYBJCRCBUXBNKKUCLIWXVLQKHVNJLVLIPPTGJBEZCSQWTCWMKBCGWJTVIAMWSTAPQSMLOFLJALHGXANEGPAKQD");
    msg.range = 0.95534710286;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.58345588948;
    tmp_msg_0.speed = 0.291747826396;
    tmp_msg_0.turbulence = 0.692199167701;
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
    msg.setTimeStamp(0.896103548072);
    msg.setSource(17032U);
    msg.setSourceEntity(183U);
    msg.setDestination(30042U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.0339222443761);
    msg.setSource(65213U);
    msg.setSourceEntity(36U);
    msg.setDestination(61050U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.818016171089);
    msg.setSource(39758U);
    msg.setSourceEntity(95U);
    msg.setDestination(53231U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.837100707813);
    msg.setSource(23151U);
    msg.setSourceEntity(120U);
    msg.setDestination(19498U);
    msg.setDestinationEntity(235U);
    msg.list.assign("QLYXYREMSGBCESRHQAMIBMTYFVQTVDICUZCMVODO");

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
    msg.setTimeStamp(0.785136197692);
    msg.setSource(44685U);
    msg.setSourceEntity(25U);
    msg.setDestination(41970U);
    msg.setDestinationEntity(106U);
    msg.list.assign("GZDNYCHMXYBFUGJLYFUMVKZEFGQMPWXGBCAFWESRXREMTURVQEFZDJJPYFOVYIWLNXPXZELIFRMNVAMSQHANVQLGHAPOLKCBRXXKKJQVCPM");

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
    msg.setTimeStamp(0.106155577199);
    msg.setSource(1270U);
    msg.setSourceEntity(183U);
    msg.setDestination(61082U);
    msg.setDestinationEntity(27U);
    msg.list.assign("VTLJEIQRENGAIUPAKDGHCGDHSVNSMSSWDHHQYWQRTWVHYFUCXYFUIDXDXUCAPNTOVHJGSEJGDYZQNFIVVPKPMABYXQZLLDWCDTTPPZIEHLMKRJTZRTQRBNOQSBNOMPMGJHKUFZXAEAEFCVOJZLAYVOBZKYBBWUBAKPHZLAEWKMXXBEXOZFULYOEICJSXGULISQX");

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
    msg.setTimeStamp(0.619248643444);
    msg.setSource(53765U);
    msg.setSourceEntity(1U);
    msg.setDestination(49856U);
    msg.setDestinationEntity(154U);
    msg.peer.assign("HOWJRKXZFQRHZLGSCSLINLPQTTPVDGWSGANWMMDUHUVYYAWFXCRWPVKQCPHUINDSKVHCDUZZWJXHOKQJWLQIVTIMOARXOFQMJPZONFCDOYXGQJEDBIUEMOXYMBZAFJOQPVFTSUWAZEREEMNJUBFPPGWNDKERPLXIMEKIJSVDTEXILVGCANHYXBSSQWGLZFRQYKBTGCKETBVGBHYZUOADHJFNOI");
    msg.rssi = 0.0791715928204;
    msg.integrity = 55415U;

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
    msg.setTimeStamp(0.20700159149);
    msg.setSource(8780U);
    msg.setSourceEntity(210U);
    msg.setDestination(38292U);
    msg.setDestinationEntity(152U);
    msg.peer.assign("UMECWBLMEGSXBUWMGTRGAFDHINN");
    msg.rssi = 0.652423406758;
    msg.integrity = 42687U;

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
    msg.setTimeStamp(0.349898494261);
    msg.setSource(32302U);
    msg.setSourceEntity(215U);
    msg.setDestination(48517U);
    msg.setDestinationEntity(159U);
    msg.peer.assign("YZODBAUZUVZLLDCYJGOLHGMSVANKIWYBTKFMUQVCZFBKHLGQIGNMYDBTXBVHJPUGCQPZVLEJXPCHPHQQJMHCPUICXXFAJWJVORMCKWBWFSCEXT");
    msg.rssi = 0.544404573311;
    msg.integrity = 578U;

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
    msg.setTimeStamp(0.150354577719);
    msg.setSource(64937U);
    msg.setSourceEntity(127U);
    msg.setDestination(65446U);
    msg.setDestinationEntity(111U);
    msg.value = -19773;

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
    msg.setTimeStamp(0.714985667746);
    msg.setSource(46858U);
    msg.setSourceEntity(82U);
    msg.setDestination(6951U);
    msg.setDestinationEntity(235U);
    msg.value = 25966;

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
    msg.setTimeStamp(0.930105727772);
    msg.setSource(36228U);
    msg.setSourceEntity(192U);
    msg.setDestination(32995U);
    msg.setDestinationEntity(124U);
    msg.value = 9200;

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
    msg.setTimeStamp(0.0869388944512);
    msg.setSource(53187U);
    msg.setSourceEntity(190U);
    msg.setDestination(47336U);
    msg.setDestinationEntity(133U);
    msg.value = 0.197097724846;

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
    msg.setTimeStamp(0.074853265355);
    msg.setSource(11688U);
    msg.setSourceEntity(138U);
    msg.setDestination(63575U);
    msg.setDestinationEntity(156U);
    msg.value = 0.314728025554;

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
    msg.setTimeStamp(0.91624407688);
    msg.setSource(42668U);
    msg.setSourceEntity(205U);
    msg.setDestination(4820U);
    msg.setDestinationEntity(24U);
    msg.value = 0.670754577864;

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
    msg.setTimeStamp(0.198567392613);
    msg.setSource(37295U);
    msg.setSourceEntity(162U);
    msg.setDestination(2031U);
    msg.setDestinationEntity(123U);
    msg.value = 0.0945805520803;

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
    msg.setTimeStamp(0.0848084094907);
    msg.setSource(59367U);
    msg.setSourceEntity(57U);
    msg.setDestination(24855U);
    msg.setDestinationEntity(27U);
    msg.value = 0.995533627195;

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
    msg.setTimeStamp(0.385750489228);
    msg.setSource(13818U);
    msg.setSourceEntity(222U);
    msg.setDestination(65271U);
    msg.setDestinationEntity(38U);
    msg.value = 0.137916150448;

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
    msg.setTimeStamp(0.340375312424);
    msg.setSource(4268U);
    msg.setSourceEntity(78U);
    msg.setDestination(15499U);
    msg.setDestinationEntity(11U);
    msg.validity = 5100U;
    msg.type = 20U;
    msg.utc_year = 24048U;
    msg.utc_month = 184U;
    msg.utc_day = 18U;
    msg.utc_time = 0.294041678047;
    msg.lat = 0.720231860466;
    msg.lon = 0.0780700348157;
    msg.height = 0.799371535842;
    msg.satellites = 139U;
    msg.cog = 0.507362533688;
    msg.sog = 0.691323942665;
    msg.hdop = 0.459363698046;
    msg.vdop = 0.912468220057;
    msg.hacc = 0.220152287695;
    msg.vacc = 0.220829347274;

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
    msg.setTimeStamp(0.0920995518408);
    msg.setSource(51090U);
    msg.setSourceEntity(48U);
    msg.setDestination(36919U);
    msg.setDestinationEntity(15U);
    msg.validity = 53286U;
    msg.type = 182U;
    msg.utc_year = 48997U;
    msg.utc_month = 7U;
    msg.utc_day = 181U;
    msg.utc_time = 0.377659712476;
    msg.lat = 0.185420807795;
    msg.lon = 0.82414764806;
    msg.height = 0.378308364404;
    msg.satellites = 108U;
    msg.cog = 0.246316902893;
    msg.sog = 0.89384228347;
    msg.hdop = 0.0479331512156;
    msg.vdop = 0.162454836405;
    msg.hacc = 0.863948823257;
    msg.vacc = 0.00209412287052;

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
    msg.setTimeStamp(0.0594181799478);
    msg.setSource(56934U);
    msg.setSourceEntity(110U);
    msg.setDestination(17654U);
    msg.setDestinationEntity(52U);
    msg.validity = 6212U;
    msg.type = 52U;
    msg.utc_year = 63920U;
    msg.utc_month = 36U;
    msg.utc_day = 251U;
    msg.utc_time = 0.364263350177;
    msg.lat = 0.207525505764;
    msg.lon = 0.180058021794;
    msg.height = 0.890181201663;
    msg.satellites = 176U;
    msg.cog = 0.458778804422;
    msg.sog = 0.498087224865;
    msg.hdop = 0.92349953029;
    msg.vdop = 0.805645411243;
    msg.hacc = 0.470087771619;
    msg.vacc = 0.00458242180217;

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
    msg.setTimeStamp(0.985351882305);
    msg.setSource(34234U);
    msg.setSourceEntity(194U);
    msg.setDestination(59564U);
    msg.setDestinationEntity(225U);
    msg.time = 0.0280348904205;
    msg.phi = 0.348511446156;
    msg.theta = 0.741131595412;
    msg.psi = 0.966666511153;
    msg.psi_magnetic = 0.465382876378;

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
    msg.setTimeStamp(0.0965537915503);
    msg.setSource(36085U);
    msg.setSourceEntity(124U);
    msg.setDestination(37277U);
    msg.setDestinationEntity(247U);
    msg.time = 0.602849396982;
    msg.phi = 0.987962122305;
    msg.theta = 0.106855169979;
    msg.psi = 0.301746883996;
    msg.psi_magnetic = 0.570819710547;

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
    msg.setTimeStamp(0.0889726743327);
    msg.setSource(45410U);
    msg.setSourceEntity(120U);
    msg.setDestination(23745U);
    msg.setDestinationEntity(253U);
    msg.time = 0.622625636378;
    msg.phi = 0.0739113840459;
    msg.theta = 0.0943059007225;
    msg.psi = 0.0849302842848;
    msg.psi_magnetic = 0.704398352472;

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
    msg.setTimeStamp(0.534280549144);
    msg.setSource(51791U);
    msg.setSourceEntity(253U);
    msg.setDestination(62412U);
    msg.setDestinationEntity(143U);
    msg.time = 0.28216842413;
    msg.x = 0.499638697598;
    msg.y = 0.0160538816308;
    msg.z = 0.353465092683;
    msg.timestep = 0.996982600623;

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
    msg.setTimeStamp(0.026505960151);
    msg.setSource(34437U);
    msg.setSourceEntity(217U);
    msg.setDestination(31359U);
    msg.setDestinationEntity(82U);
    msg.time = 0.592744812516;
    msg.x = 0.0340322077586;
    msg.y = 0.457932234435;
    msg.z = 0.990719788162;
    msg.timestep = 0.765071203048;

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
    msg.setTimeStamp(0.153065573913);
    msg.setSource(29947U);
    msg.setSourceEntity(53U);
    msg.setDestination(19112U);
    msg.setDestinationEntity(222U);
    msg.time = 0.765664702229;
    msg.x = 0.194041312938;
    msg.y = 0.188622828931;
    msg.z = 0.702345735614;
    msg.timestep = 0.0306238340114;

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
    msg.setTimeStamp(0.853840726924);
    msg.setSource(33996U);
    msg.setSourceEntity(154U);
    msg.setDestination(61903U);
    msg.setDestinationEntity(237U);
    msg.time = 0.187254939036;
    msg.x = 0.545274194923;
    msg.y = 0.128755830683;
    msg.z = 0.0906884216939;

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
    msg.setTimeStamp(0.46242696936);
    msg.setSource(9404U);
    msg.setSourceEntity(152U);
    msg.setDestination(4878U);
    msg.setDestinationEntity(186U);
    msg.time = 0.179843388201;
    msg.x = 0.215194794848;
    msg.y = 0.287800919162;
    msg.z = 0.153665663899;

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
    msg.setTimeStamp(0.152808918897);
    msg.setSource(17766U);
    msg.setSourceEntity(245U);
    msg.setDestination(13692U);
    msg.setDestinationEntity(182U);
    msg.time = 0.321963327995;
    msg.x = 0.685177564063;
    msg.y = 0.784207546407;
    msg.z = 0.569385829591;

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
    msg.setTimeStamp(0.0895610764784);
    msg.setSource(44577U);
    msg.setSourceEntity(120U);
    msg.setDestination(31464U);
    msg.setDestinationEntity(143U);
    msg.time = 0.297439535321;
    msg.x = 0.0878794920664;
    msg.y = 0.673143729107;
    msg.z = 0.813436978489;

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
    msg.setTimeStamp(0.239804225624);
    msg.setSource(17343U);
    msg.setSourceEntity(231U);
    msg.setDestination(5770U);
    msg.setDestinationEntity(32U);
    msg.time = 0.916324832532;
    msg.x = 0.894303280372;
    msg.y = 0.982981995588;
    msg.z = 0.423867669937;

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
    msg.setTimeStamp(0.712839197753);
    msg.setSource(7001U);
    msg.setSourceEntity(204U);
    msg.setDestination(7559U);
    msg.setDestinationEntity(150U);
    msg.time = 0.712030119295;
    msg.x = 0.707222748811;
    msg.y = 0.0905108391438;
    msg.z = 0.304031421013;

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
    msg.setTimeStamp(0.0843931040589);
    msg.setSource(47386U);
    msg.setSourceEntity(30U);
    msg.setDestination(57969U);
    msg.setDestinationEntity(145U);
    msg.time = 0.819567435209;
    msg.x = 0.935102049085;
    msg.y = 0.648125391062;
    msg.z = 0.0232593177969;

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
    msg.setTimeStamp(0.642142927105);
    msg.setSource(52671U);
    msg.setSourceEntity(50U);
    msg.setDestination(5981U);
    msg.setDestinationEntity(114U);
    msg.time = 0.758338177381;
    msg.x = 0.275806714823;
    msg.y = 0.217072600495;
    msg.z = 0.0627821783133;

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
    msg.setTimeStamp(0.456096033308);
    msg.setSource(37899U);
    msg.setSourceEntity(221U);
    msg.setDestination(41227U);
    msg.setDestinationEntity(114U);
    msg.time = 0.0794869025971;
    msg.x = 0.74656834935;
    msg.y = 0.424974397177;
    msg.z = 0.898691484177;

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
    msg.setTimeStamp(0.674528034931);
    msg.setSource(22660U);
    msg.setSourceEntity(135U);
    msg.setDestination(38994U);
    msg.setDestinationEntity(111U);
    msg.validity = 73U;
    msg.x = 0.10208120465;
    msg.y = 0.934619365765;
    msg.z = 0.692920622348;

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
    msg.setTimeStamp(0.914450437999);
    msg.setSource(21417U);
    msg.setSourceEntity(126U);
    msg.setDestination(12083U);
    msg.setDestinationEntity(195U);
    msg.validity = 8U;
    msg.x = 0.231464644718;
    msg.y = 0.543148567702;
    msg.z = 0.920945571212;

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
    msg.setTimeStamp(0.055934177682);
    msg.setSource(20837U);
    msg.setSourceEntity(107U);
    msg.setDestination(42702U);
    msg.setDestinationEntity(150U);
    msg.validity = 44U;
    msg.x = 0.290256599312;
    msg.y = 0.423402959419;
    msg.z = 0.298352689056;

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
    msg.setTimeStamp(0.122229456998);
    msg.setSource(64552U);
    msg.setSourceEntity(215U);
    msg.setDestination(3524U);
    msg.setDestinationEntity(87U);
    msg.validity = 147U;
    msg.x = 0.642301812313;
    msg.y = 0.92036618602;
    msg.z = 0.401844614418;

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
    msg.setTimeStamp(0.697853240739);
    msg.setSource(1749U);
    msg.setSourceEntity(106U);
    msg.setDestination(15179U);
    msg.setDestinationEntity(10U);
    msg.validity = 205U;
    msg.x = 0.74101755063;
    msg.y = 0.332653011996;
    msg.z = 0.0220446630944;

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
    msg.setTimeStamp(0.756329306086);
    msg.setSource(50652U);
    msg.setSourceEntity(20U);
    msg.setDestination(30366U);
    msg.setDestinationEntity(3U);
    msg.validity = 17U;
    msg.x = 0.625063952892;
    msg.y = 0.209765904273;
    msg.z = 0.461216755904;

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
    msg.setTimeStamp(0.984121608133);
    msg.setSource(35397U);
    msg.setSourceEntity(44U);
    msg.setDestination(50274U);
    msg.setDestinationEntity(197U);
    msg.time = 0.23869551684;
    msg.x = 0.931051396059;
    msg.y = 0.471624319391;
    msg.z = 0.86112730609;

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
    msg.setTimeStamp(0.244955296093);
    msg.setSource(32879U);
    msg.setSourceEntity(125U);
    msg.setDestination(59418U);
    msg.setDestinationEntity(63U);
    msg.time = 0.296072024363;
    msg.x = 0.737784418032;
    msg.y = 0.287799829376;
    msg.z = 0.488763819532;

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
    msg.setTimeStamp(0.423152632668);
    msg.setSource(9198U);
    msg.setSourceEntity(231U);
    msg.setDestination(41355U);
    msg.setDestinationEntity(231U);
    msg.time = 0.0516774360699;
    msg.x = 0.95693325501;
    msg.y = 0.30711676261;
    msg.z = 0.520700224144;

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
    msg.setTimeStamp(0.803067153553);
    msg.setSource(6235U);
    msg.setSourceEntity(61U);
    msg.setDestination(27464U);
    msg.setDestinationEntity(36U);
    msg.validity = 26U;
    msg.value = 0.547316953028;

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
    msg.setTimeStamp(0.338023574871);
    msg.setSource(5592U);
    msg.setSourceEntity(147U);
    msg.setDestination(5700U);
    msg.setDestinationEntity(173U);
    msg.validity = 135U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.74206418989;
    tmp_msg_0.y = 0.590456410552;
    tmp_msg_0.z = 0.36710095904;
    tmp_msg_0.phi = 0.900988551939;
    tmp_msg_0.theta = 0.664703289073;
    tmp_msg_0.psi = 0.985313364687;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.819218894559;
    tmp_msg_1.beam_height = 0.742408073632;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.0228649275332;

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
    msg.setTimeStamp(0.899698291276);
    msg.setSource(51309U);
    msg.setSourceEntity(136U);
    msg.setDestination(53441U);
    msg.setDestinationEntity(209U);
    msg.validity = 120U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.508137772684;
    tmp_msg_0.y = 0.594243234817;
    tmp_msg_0.z = 0.173638798298;
    tmp_msg_0.phi = 0.316938340723;
    tmp_msg_0.theta = 0.702207243002;
    tmp_msg_0.psi = 0.288972039553;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.128431370623;

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
    msg.setTimeStamp(0.522585316162);
    msg.setSource(3911U);
    msg.setSourceEntity(208U);
    msg.setDestination(27727U);
    msg.setDestinationEntity(153U);
    msg.value = 0.613194746361;

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
    msg.setTimeStamp(0.443352214087);
    msg.setSource(24700U);
    msg.setSourceEntity(49U);
    msg.setDestination(56094U);
    msg.setDestinationEntity(226U);
    msg.value = 0.137933374501;

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
    msg.setTimeStamp(0.196396732995);
    msg.setSource(19360U);
    msg.setSourceEntity(188U);
    msg.setDestination(53545U);
    msg.setDestinationEntity(134U);
    msg.value = 0.712149580804;

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
    msg.setTimeStamp(0.98717927872);
    msg.setSource(24367U);
    msg.setSourceEntity(91U);
    msg.setDestination(15478U);
    msg.setDestinationEntity(213U);
    msg.value = 0.634944802874;

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
    msg.setTimeStamp(0.42545921546);
    msg.setSource(46310U);
    msg.setSourceEntity(146U);
    msg.setDestination(35026U);
    msg.setDestinationEntity(163U);
    msg.value = 0.884617862846;

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
    msg.setTimeStamp(0.51028815244);
    msg.setSource(951U);
    msg.setSourceEntity(171U);
    msg.setDestination(25167U);
    msg.setDestinationEntity(180U);
    msg.value = 0.0992015955237;

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
    msg.setTimeStamp(0.0110235274455);
    msg.setSource(23686U);
    msg.setSourceEntity(111U);
    msg.setDestination(25097U);
    msg.setDestinationEntity(38U);
    msg.value = 0.478613229242;

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
    msg.setTimeStamp(0.641917204954);
    msg.setSource(4046U);
    msg.setSourceEntity(43U);
    msg.setDestination(11901U);
    msg.setDestinationEntity(156U);
    msg.value = 0.635838507474;

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
    msg.setTimeStamp(0.479841690023);
    msg.setSource(50651U);
    msg.setSourceEntity(197U);
    msg.setDestination(42575U);
    msg.setDestinationEntity(212U);
    msg.value = 0.131516541249;

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
    msg.setTimeStamp(0.950516230293);
    msg.setSource(27244U);
    msg.setSourceEntity(121U);
    msg.setDestination(17990U);
    msg.setDestinationEntity(214U);
    msg.value = 0.524793504239;

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
    msg.setTimeStamp(0.663829682969);
    msg.setSource(31698U);
    msg.setSourceEntity(75U);
    msg.setDestination(40223U);
    msg.setDestinationEntity(225U);
    msg.value = 0.822404566924;

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
    msg.setTimeStamp(0.94159088096);
    msg.setSource(51779U);
    msg.setSourceEntity(38U);
    msg.setDestination(58914U);
    msg.setDestinationEntity(109U);
    msg.value = 0.876523075356;

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
    msg.setTimeStamp(0.607798710745);
    msg.setSource(63199U);
    msg.setSourceEntity(152U);
    msg.setDestination(18080U);
    msg.setDestinationEntity(250U);
    msg.value = 0.741625025451;

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
    msg.setTimeStamp(0.0170032343429);
    msg.setSource(17287U);
    msg.setSourceEntity(84U);
    msg.setDestination(28335U);
    msg.setDestinationEntity(62U);
    msg.value = 0.333894163981;

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
    msg.setTimeStamp(0.227885410891);
    msg.setSource(29559U);
    msg.setSourceEntity(20U);
    msg.setDestination(3039U);
    msg.setDestinationEntity(250U);
    msg.value = 0.014784827305;

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
    msg.setTimeStamp(0.251926456168);
    msg.setSource(48036U);
    msg.setSourceEntity(167U);
    msg.setDestination(17485U);
    msg.setDestinationEntity(243U);
    msg.value = 0.975808506793;

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
    msg.setTimeStamp(0.443010638538);
    msg.setSource(44129U);
    msg.setSourceEntity(76U);
    msg.setDestination(25078U);
    msg.setDestinationEntity(235U);
    msg.value = 0.566100830849;

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
    msg.setTimeStamp(0.694165438174);
    msg.setSource(60321U);
    msg.setSourceEntity(173U);
    msg.setDestination(32498U);
    msg.setDestinationEntity(110U);
    msg.value = 0.383881646801;

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
    msg.setTimeStamp(0.232543065729);
    msg.setSource(373U);
    msg.setSourceEntity(6U);
    msg.setDestination(25843U);
    msg.setDestinationEntity(17U);
    msg.value = 0.531226981517;

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
    msg.setTimeStamp(0.230909472679);
    msg.setSource(2157U);
    msg.setSourceEntity(70U);
    msg.setDestination(35363U);
    msg.setDestinationEntity(7U);
    msg.value = 0.197037082406;

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
    msg.setTimeStamp(0.868270907301);
    msg.setSource(57370U);
    msg.setSourceEntity(144U);
    msg.setDestination(11460U);
    msg.setDestinationEntity(220U);
    msg.value = 0.825256627103;

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
    msg.setTimeStamp(0.268204056479);
    msg.setSource(5665U);
    msg.setSourceEntity(163U);
    msg.setDestination(50962U);
    msg.setDestinationEntity(46U);
    msg.value = 0.979513034715;

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
    msg.setTimeStamp(0.0917994633453);
    msg.setSource(16510U);
    msg.setSourceEntity(199U);
    msg.setDestination(59865U);
    msg.setDestinationEntity(120U);
    msg.value = 0.964941934859;

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
    msg.setTimeStamp(0.102917984826);
    msg.setSource(24848U);
    msg.setSourceEntity(195U);
    msg.setDestination(56669U);
    msg.setDestinationEntity(164U);
    msg.value = 0.849649210261;

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
    msg.setTimeStamp(0.718260347356);
    msg.setSource(47147U);
    msg.setSourceEntity(62U);
    msg.setDestination(63277U);
    msg.setDestinationEntity(97U);
    msg.direction = 0.170603848831;
    msg.speed = 0.504928181085;
    msg.turbulence = 0.648243480192;

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
    msg.setTimeStamp(0.303800809668);
    msg.setSource(46153U);
    msg.setSourceEntity(85U);
    msg.setDestination(22U);
    msg.setDestinationEntity(116U);
    msg.direction = 0.608488254924;
    msg.speed = 0.261842542761;
    msg.turbulence = 0.618996238515;

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
    msg.setTimeStamp(0.924482408759);
    msg.setSource(31477U);
    msg.setSourceEntity(128U);
    msg.setDestination(47765U);
    msg.setDestinationEntity(116U);
    msg.direction = 0.823605221026;
    msg.speed = 0.528689399661;
    msg.turbulence = 0.605454678;

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
    msg.setTimeStamp(0.407668726088);
    msg.setSource(49357U);
    msg.setSourceEntity(22U);
    msg.setDestination(9783U);
    msg.setDestinationEntity(172U);
    msg.value = 0.19476296483;

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
    msg.setTimeStamp(0.550680303001);
    msg.setSource(24840U);
    msg.setSourceEntity(240U);
    msg.setDestination(63210U);
    msg.setDestinationEntity(224U);
    msg.value = 0.74654386874;

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
    msg.setTimeStamp(0.146356589936);
    msg.setSource(10644U);
    msg.setSourceEntity(248U);
    msg.setDestination(20134U);
    msg.setDestinationEntity(78U);
    msg.value = 0.851836385163;

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
    msg.setTimeStamp(0.0798233191275);
    msg.setSource(15456U);
    msg.setSourceEntity(114U);
    msg.setDestination(61068U);
    msg.setDestinationEntity(29U);
    msg.value.assign("ASGYSXEQIAPIRZAJBYGOFHBTHPTKYIJGCIDMTKWDVNVBQMRMQQATOBVPVJGJWZECDXUOQUKHYZLKMYBZTFEAFFXCPILZTLSPCMQAUOCBIOEZWKFPRKXKSJPDPDUCVVVOVNMEKLYRSNLZGSINPMGHUHWNDGHEGEFCWOAYCDEFCRUVGSQHGAQXDSBMWHODPBIWJUTUZRWZSAWYFQJ");

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
    msg.setTimeStamp(0.572953653461);
    msg.setSource(55312U);
    msg.setSourceEntity(184U);
    msg.setDestination(22285U);
    msg.setDestinationEntity(162U);
    msg.value.assign("ZBPXVLOTJVEDYFRRRBCYTRHMEEBMNNPUXNVHNCZPLXAYYZZFTSUMEFMKFRGONDHGJKLMYTJKCWCPNLSXBWQBTZDZOIDUFV");

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
    msg.setTimeStamp(0.832628486655);
    msg.setSource(14271U);
    msg.setSourceEntity(218U);
    msg.setDestination(31678U);
    msg.setDestinationEntity(177U);
    msg.value.assign("YBCYMMTUIJZEWKJWOLKEFECQQBNEJXAWPMWDTSWMWIMOUNINGSZYTKNPDAKFGGRKBJRALZGXXEHCHODTHOZXHZYQVSXL");

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
    msg.setTimeStamp(0.795990855053);
    msg.setSource(57210U);
    msg.setSourceEntity(66U);
    msg.setDestination(36954U);
    msg.setDestinationEntity(62U);
    const char tmp_msg_0[] = {75, 105, -128, -71, 56, 83, 125, -25, -34, -89, -40, 121, -46, 39, -101, 39, 77, -48, 18, -6, 89, -32, -28, -119, -16, -89, 104, -13, -28, 105, -44, -9, -59, -81, 116, 57, 2, -64, -64, -114, 12, 25, 0, -85, 35, -73, 91, 4, -88, -89, 71, 78, 50, -110, 97, 2, 118, -13, 12, 60, -58, 86, 28, 1, 61, 45, 10, -56, -114, -79, -64, 67, 51, -52, 87, -45, -6, -34, -22, -43, -80, -11, -41, -11, 83, 36, 5, -103, 1, 40, -33, 64, 6, -41, 60, 61, 10, -127, 11, 27, 73, 96, -128, 98, -55, -1, -39, 54, 74, 3, 114, -53, -50, -13, -49, 70, 62, -5, -5, -123, -84, -89, -44, 28, -18, 78, 115, -6, 3, -77, 55, -104, 29, 85, -50, 89, -8, -35, 30, 119, 63, -123, -57, 33, -96, 109, 97, 112, 76, 95, 5, 102, 115, 17, -36, 93, 117, 26, 75, -68, 27, 103, 102, 61, -104, 26, -111, 8, 54, 115, 109, -115, -26, 73, -3, 60, -76, -24, -66, 28, 91, -9, -48, 122, -1, -45, -48, 60, -72, -96, 53, 102, 115};
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
    msg.setTimeStamp(0.948382810886);
    msg.setSource(28531U);
    msg.setSourceEntity(165U);
    msg.setDestination(16598U);
    msg.setDestinationEntity(248U);
    const char tmp_msg_0[] = {-70, -13, 107, -97, 91, 49, 57, 20, -25, -82, -79, 3, -126, -37, -7, 94, 26, -124, -117, -111, 49, -62, -52, 116, -104, 74, -53, -108, -22, -111, -73, 101, 79, -11, 92, 108, 62, 30, 42, -100, -43, -5, -86, 79, 28, -80, -67, 122, 5, 120, -43, 31, 21, 53, -60, 43, -51, -102, -27, 90, -48, 92, -93, -1, -70, -27, -96, -114, 85, -79, 117, -108, 27, -110, 126, -122, 70, -11, -120, 33, -68, 38, -116, -26, -105, 16, -15, -104, -14, -128, 70, 71, 59, -72, -104, 14, 123, 93, 35, 126, 18, -54, -83, -61, -43, -103, 50, -20, -88, 101, -100, 62, -124, 35, 88, 79, -126, -5, -10, 92, -122, -78, 111, -74, -116, 47, 88, 102, -70, -55, -25, -59, 33, 18, -122, 6};
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
    msg.setTimeStamp(0.68062465927);
    msg.setSource(49102U);
    msg.setSourceEntity(248U);
    msg.setDestination(18502U);
    msg.setDestinationEntity(130U);
    const char tmp_msg_0[] = {-87, -124, 19, -54, 61, 103, -95, -69, -33, -26, -24, -46, -60, 16, 30, 31, 93, 119, 37, 93, 11, 30, 65, -56, -128, -104, -59, -21, 72, -115, -68, 65, -2, 101, -20, 67, 118, 66, 94, -12, 50, -51, -6, 100, -1, 9, 40, -20, 14, -88, 44, 101, -54, 41, 122, -122, -78, 66, -16, -75, -1, -10, 35, 15, -91, 76, -122, -12, 34, 61, 110, -5, 114, 91, -54, 124, 42, -126, 69, -49, 41, -15, 36, 61, -97, 110, -81, -122, -13, -32, -32, -119, 0, 36, 118, 106, 90, 13, -63, -10, -105, 111, -118, 0, -75, 122, -5, -103, -10, -108, 36, 6, -36, 95, 27, -40, -106, -99, 126, -78, -113, -122, -120, 45, -19, -78, 106, 21, -89, 125, 101, -42, -29, -35, -14, -8, 66, 14, 61, 38, 22, -124, -79, -11, 55, -45, -121, 41, 9, -109, 29, -73, -59, -126, 112, 78, -20, 100, 107, 84, 97, 99, 86, -24, 43, -62, -124, -61, 55, 105, 30, 21, 5, 61, -73, 104, 63, -3, 63, 10, -73, -109, 84, 33, -86, -7, 90, 126, -67, 2, 86, -116, -48, -80, 18, 77, 104, 79, -10, 67, -38, -81, -56, -115, 6, 124, 105, -125, -104, 100, 15, -46, 40, 105, -117, -1, 116, -25, 20, 49, 11, 32, -89, 26, -87, 119, -33, -17, 92, 98, 54, 76, -19, -42, -80, 97};
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
    msg.setTimeStamp(0.547812674449);
    msg.setSource(62033U);
    msg.setSourceEntity(47U);
    msg.setDestination(28592U);
    msg.setDestinationEntity(147U);
    msg.value = 0.201157339447;

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
    msg.setTimeStamp(0.931973320943);
    msg.setSource(9191U);
    msg.setSourceEntity(246U);
    msg.setDestination(45516U);
    msg.setDestinationEntity(247U);
    msg.value = 0.88758338467;

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
    msg.setTimeStamp(0.440281918848);
    msg.setSource(356U);
    msg.setSourceEntity(8U);
    msg.setDestination(39077U);
    msg.setDestinationEntity(72U);
    msg.value = 0.551003165875;

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
    msg.setTimeStamp(0.976620559531);
    msg.setSource(1459U);
    msg.setSourceEntity(189U);
    msg.setDestination(24849U);
    msg.setDestinationEntity(107U);
    msg.type = 125U;
    msg.frequency = 2858961596U;
    msg.min_range = 35822U;
    msg.max_range = 9426U;
    msg.bits_per_point = 154U;
    msg.scale_factor = 0.382421263164;
    const char tmp_msg_0[] = {-81, 46, 78, -20, -72, -32, -103, -44, -39, -126, -71, -37, -91, -92, -51, 93, 82, 75, -96, -24, 63, -64, 101, -38, -55, -27, -123, 8, 91, 8, 67, 115, 104, 21, 77, 89, -127, -108, -17, 14, -105, 117, -27, 45, 122, -7, 66, 53, 5, -93, -2, 26, 3, 10, -40, -71, 65, -84, 92, -82, -124, -5, 10, 62, -128, 121, -19, 63, 52, 116, -122, 48, -40, 24, 96, -11, -125, -74, 2, -17, -48, 123, -47, -89, -102, -91, -104, -6, -110, -28, -100, -67, -81, 87, -3, 20, 123, -34, -31, 75, -10, -128, 43, -94, 73, -46, -23, 7, -108, -65, 88, -96, -114, -20, -104, 28, -102, 86, -100, -123, -96, 94, -42, -62, -29, 22, 29, -34, 80, 24, 27, 25, -19, 121, 47, 11, 47, 43, -126, 61, -19, 82, 63, 113, 14, -95, -93};
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
    msg.setTimeStamp(0.39132698912);
    msg.setSource(2289U);
    msg.setSourceEntity(43U);
    msg.setDestination(6047U);
    msg.setDestinationEntity(72U);
    msg.type = 144U;
    msg.frequency = 1755147614U;
    msg.min_range = 30036U;
    msg.max_range = 17352U;
    msg.bits_per_point = 118U;
    msg.scale_factor = 0.797255307246;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.645862961501;
    tmp_msg_0.beam_height = 0.255127590343;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-26, 46, -121, -69, -108, 45, 120, 120, 90, 6, 32, -104, -6, 55, 62};
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
    msg.setTimeStamp(0.99882853499);
    msg.setSource(50778U);
    msg.setSourceEntity(40U);
    msg.setDestination(36037U);
    msg.setDestinationEntity(81U);
    msg.type = 185U;
    msg.frequency = 2311393494U;
    msg.min_range = 51995U;
    msg.max_range = 27079U;
    msg.bits_per_point = 32U;
    msg.scale_factor = 0.00302919714667;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.597775307472;
    tmp_msg_0.beam_height = 0.675300234878;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-113, -44, -94, -92, 121, -46, 41, 76, 22, -67, -51, -58, -6, -48, 55, 57, 95, 9, 75, 65, -86, -35, -55, -52, -78, -58, -88, -67, -62, 11, -123, 106, -126, 100, 17, 57, -123, -107, 121, -87, -110, -92, 101, 34, -78, -125, 73, -109, 2, -48, 92, 38, -88, -59, -63, 24, 85, 114, -83, 115, -107, -117, -63, -18, -98, 9, -17, 107, 30, 54, -27, -22, 90, 7, -72, -59, -96, -70, -101, -57, -121, -14, 11, -82, -21, 15, -82, 49, -10, 73, 63, -112, 47, 94, -54, -114, -43, -83, 17, 44, 20, -46, 94, 117, 106, -97, 93, 26, 10, 124, -76, 42, -92, 52, -15, -25, 26, 80, 14, 56, -63, -114, 10, -69, -48, -76, -61, 16, -37, -121, -14, -29, 97, -84, 29, 81, -41, -61, 61, 115, -1, 83, 45, 105, 70, 113, 7, 92, 126, -108, 31, -73, -60, 82, -56, 64, 64, -2, 36, 7, 67, -8, 49, -15, -25, -104, -116, 80, 3, 118, -49, -122, 64, -112, 6, -124, 34, 5, 30, 39, -37, -122, -83, 19, -87, -48, 116, -35, 19, -21, 2, 106, -35, -41, -99, -59, -115, -24, -91, 7, -42, -78, 31, 33, 76, -112, -18, -52, -110, -72, 20, 83, 89, -100, 96, -27, 11, 35, -52, -41, -30, -45, 38, -15, 80, -29, -18, -29, -82, 59, -124, 98, -49, -74, -2, 73, -87, -32, 69, 111, -104, -22, -92, 50, 11, 40, 123, -28, 29, 95, 41, -80, -82};
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
    msg.setTimeStamp(0.945969903118);
    msg.setSource(56322U);
    msg.setSourceEntity(190U);
    msg.setDestination(41539U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.363667210386);
    msg.setSource(57309U);
    msg.setSourceEntity(212U);
    msg.setDestination(21489U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.612583096064);
    msg.setSource(1386U);
    msg.setSourceEntity(130U);
    msg.setDestination(42257U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.955945115673);
    msg.setSource(32097U);
    msg.setSourceEntity(123U);
    msg.setDestination(23920U);
    msg.setDestinationEntity(54U);
    msg.op = 108U;

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
    msg.setTimeStamp(0.111733651604);
    msg.setSource(30665U);
    msg.setSourceEntity(25U);
    msg.setDestination(57030U);
    msg.setDestinationEntity(210U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.442513408793);
    msg.setSource(65141U);
    msg.setSourceEntity(254U);
    msg.setDestination(47176U);
    msg.setDestinationEntity(2U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.560605761184);
    msg.setSource(59465U);
    msg.setSourceEntity(79U);
    msg.setDestination(28761U);
    msg.setDestinationEntity(31U);
    msg.value = 0.998681092216;
    msg.confidence = 0.741389902587;
    msg.opmodes.assign("LSMOBFZUATWYCUFDVWQAZLZBMBBTUVSXQPKGKQUVVYZXDDVRAWHAFGMTUTHKYBXRQNXBFHGASJEVYMWIIMW");

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
    msg.setTimeStamp(0.451187357952);
    msg.setSource(54234U);
    msg.setSourceEntity(64U);
    msg.setDestination(48632U);
    msg.setDestinationEntity(211U);
    msg.value = 0.825436330146;
    msg.confidence = 0.285348799706;
    msg.opmodes.assign("SZJKSROUMOPRAWXVYVKWQTFZOBSIQZZNCCQFWJNFIDODMHCSIAJHOFIFYXVOGAZGUGPORGXCVNLKHIQQJBADEGLGWHYEHEYVMACFMELEMBNGTWX");

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
    msg.setTimeStamp(0.734580306535);
    msg.setSource(26238U);
    msg.setSourceEntity(172U);
    msg.setDestination(54760U);
    msg.setDestinationEntity(177U);
    msg.value = 0.98124602003;
    msg.confidence = 0.137335961238;
    msg.opmodes.assign("UQGUSZKOAZBQQRJEPENRLMNXSAECRNFFBIJZOOHDBVPXLHHTYPOYLERWYXWSJNKMDSHGBNATNPEPLAGIHOGXNTCAUHTIFSKZUWVBFQDMYFZOVFWATDDKCLUSFOIULDWXIOKXSBRVJEHAYMVYCUYDWJIWCEBUJQVUWLKCIRNGBCSEYPGPXMLFRKMDZRYPHHSBHLVFFGGRCEQVDZMEJJQQPOZXVBU");

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
    msg.setTimeStamp(0.672867506089);
    msg.setSource(17021U);
    msg.setSourceEntity(0U);
    msg.setDestination(1918U);
    msg.setDestinationEntity(90U);
    msg.itow = 2255052299U;
    msg.lat = 0.0874375658399;
    msg.lon = 0.384508849918;
    msg.height_ell = 0.622326710554;
    msg.height_sea = 0.0147246190263;
    msg.hacc = 0.735149614438;
    msg.vacc = 0.291712340001;
    msg.vel_n = 0.863716450862;
    msg.vel_e = 0.232135985479;
    msg.vel_d = 0.449963345655;
    msg.speed = 0.397407703521;
    msg.gspeed = 0.917647493155;
    msg.heading = 0.629223283423;
    msg.sacc = 0.315116371275;
    msg.cacc = 0.303289622199;

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
    msg.setTimeStamp(0.606430914117);
    msg.setSource(19668U);
    msg.setSourceEntity(158U);
    msg.setDestination(51143U);
    msg.setDestinationEntity(66U);
    msg.itow = 2038835607U;
    msg.lat = 0.838914138905;
    msg.lon = 0.0642509792681;
    msg.height_ell = 0.157260554107;
    msg.height_sea = 0.53792123319;
    msg.hacc = 0.258959297401;
    msg.vacc = 0.0285321962987;
    msg.vel_n = 0.904163100312;
    msg.vel_e = 0.583228303673;
    msg.vel_d = 0.642165938615;
    msg.speed = 0.0139554809048;
    msg.gspeed = 0.0743155924355;
    msg.heading = 0.634719251005;
    msg.sacc = 0.356427641096;
    msg.cacc = 0.243051698383;

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
    msg.setTimeStamp(0.249684824425);
    msg.setSource(45885U);
    msg.setSourceEntity(198U);
    msg.setDestination(39312U);
    msg.setDestinationEntity(120U);
    msg.itow = 1227255397U;
    msg.lat = 0.724797514511;
    msg.lon = 0.183590007406;
    msg.height_ell = 0.0622827435467;
    msg.height_sea = 0.518891470478;
    msg.hacc = 0.322897731379;
    msg.vacc = 0.0923787460107;
    msg.vel_n = 0.0377863868653;
    msg.vel_e = 0.539305361426;
    msg.vel_d = 0.589100896464;
    msg.speed = 0.554945862186;
    msg.gspeed = 0.170925650395;
    msg.heading = 0.883420482821;
    msg.sacc = 0.367208016005;
    msg.cacc = 0.730094762026;

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
    msg.setTimeStamp(0.686674722377);
    msg.setSource(15081U);
    msg.setSourceEntity(77U);
    msg.setDestination(6811U);
    msg.setDestinationEntity(215U);
    msg.id = 191U;
    msg.value = 0.216700712823;

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
    msg.setTimeStamp(0.0195275794725);
    msg.setSource(50846U);
    msg.setSourceEntity(197U);
    msg.setDestination(17057U);
    msg.setDestinationEntity(215U);
    msg.id = 47U;
    msg.value = 0.680286915321;

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
    msg.setTimeStamp(0.869162267928);
    msg.setSource(58181U);
    msg.setSourceEntity(86U);
    msg.setDestination(21411U);
    msg.setDestinationEntity(133U);
    msg.id = 57U;
    msg.value = 0.804117852414;

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
    msg.setTimeStamp(0.0271796874459);
    msg.setSource(25063U);
    msg.setSourceEntity(103U);
    msg.setDestination(13250U);
    msg.setDestinationEntity(130U);
    msg.x = 0.281906808264;
    msg.y = 0.446043401818;
    msg.z = 0.410138478318;
    msg.phi = 0.711355157152;
    msg.theta = 0.206231141176;
    msg.psi = 0.865974329445;

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
    msg.setTimeStamp(0.409236036215);
    msg.setSource(26347U);
    msg.setSourceEntity(70U);
    msg.setDestination(18523U);
    msg.setDestinationEntity(123U);
    msg.x = 0.788561528114;
    msg.y = 0.0340246823497;
    msg.z = 0.770993207325;
    msg.phi = 0.0365138337845;
    msg.theta = 0.855267089322;
    msg.psi = 0.977077860743;

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
    msg.setTimeStamp(0.158224396243);
    msg.setSource(62901U);
    msg.setSourceEntity(187U);
    msg.setDestination(58132U);
    msg.setDestinationEntity(154U);
    msg.x = 0.333817655751;
    msg.y = 0.864900558853;
    msg.z = 0.701847286058;
    msg.phi = 0.480087951795;
    msg.theta = 0.505496359303;
    msg.psi = 0.779221993324;

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
    msg.setTimeStamp(0.463887425777);
    msg.setSource(12242U);
    msg.setSourceEntity(21U);
    msg.setDestination(48824U);
    msg.setDestinationEntity(181U);
    msg.beam_width = 0.0636976550296;
    msg.beam_height = 0.554768539028;

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
    msg.setTimeStamp(0.818086939176);
    msg.setSource(331U);
    msg.setSourceEntity(228U);
    msg.setDestination(9084U);
    msg.setDestinationEntity(193U);
    msg.beam_width = 0.0697714469187;
    msg.beam_height = 0.461470406836;

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
    msg.setTimeStamp(0.885350823219);
    msg.setSource(16727U);
    msg.setSourceEntity(130U);
    msg.setDestination(30167U);
    msg.setDestinationEntity(179U);
    msg.beam_width = 0.779550894401;
    msg.beam_height = 0.456708765535;

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
    msg.setTimeStamp(0.302381471664);
    msg.setSource(62906U);
    msg.setSourceEntity(227U);
    msg.setDestination(2867U);
    msg.setDestinationEntity(76U);
    msg.sane = 150U;

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
    msg.setTimeStamp(0.038925190411);
    msg.setSource(23272U);
    msg.setSourceEntity(108U);
    msg.setDestination(29261U);
    msg.setDestinationEntity(231U);
    msg.sane = 43U;

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
    msg.setTimeStamp(0.421098941726);
    msg.setSource(20278U);
    msg.setSourceEntity(61U);
    msg.setDestination(2813U);
    msg.setDestinationEntity(39U);
    msg.sane = 33U;

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
    msg.setTimeStamp(0.729336175053);
    msg.setSource(53663U);
    msg.setSourceEntity(134U);
    msg.setDestination(34203U);
    msg.setDestinationEntity(6U);
    msg.value = 0.913777730044;

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
    msg.setTimeStamp(0.719883130603);
    msg.setSource(18580U);
    msg.setSourceEntity(49U);
    msg.setDestination(28215U);
    msg.setDestinationEntity(175U);
    msg.value = 0.0241062961699;

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
    msg.setTimeStamp(0.0871730068231);
    msg.setSource(723U);
    msg.setSourceEntity(142U);
    msg.setDestination(59054U);
    msg.setDestinationEntity(67U);
    msg.value = 0.869364612272;

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
    msg.setTimeStamp(0.795648717237);
    msg.setSource(57423U);
    msg.setSourceEntity(31U);
    msg.setDestination(5496U);
    msg.setDestinationEntity(11U);
    msg.value = 0.40227803085;

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
    msg.setTimeStamp(0.137149071694);
    msg.setSource(10470U);
    msg.setSourceEntity(48U);
    msg.setDestination(4247U);
    msg.setDestinationEntity(199U);
    msg.value = 0.332614829952;

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
    msg.setTimeStamp(0.993570849172);
    msg.setSource(27598U);
    msg.setSourceEntity(95U);
    msg.setDestination(26721U);
    msg.setDestinationEntity(103U);
    msg.value = 0.228481299231;

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
    msg.setTimeStamp(0.141603111487);
    msg.setSource(59681U);
    msg.setSourceEntity(21U);
    msg.setDestination(59298U);
    msg.setDestinationEntity(124U);
    msg.value = 0.480067249094;

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
    msg.setTimeStamp(0.308228137354);
    msg.setSource(57383U);
    msg.setSourceEntity(182U);
    msg.setDestination(34845U);
    msg.setDestinationEntity(5U);
    msg.value = 0.910379274066;

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
    msg.setTimeStamp(0.494194849764);
    msg.setSource(13565U);
    msg.setSourceEntity(212U);
    msg.setDestination(10703U);
    msg.setDestinationEntity(135U);
    msg.value = 0.341210260661;

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
    msg.setTimeStamp(0.393929216782);
    msg.setSource(57308U);
    msg.setSourceEntity(220U);
    msg.setDestination(24996U);
    msg.setDestinationEntity(19U);
    msg.value = 0.0035956857603;

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
    msg.setTimeStamp(0.764694780982);
    msg.setSource(27215U);
    msg.setSourceEntity(2U);
    msg.setDestination(37038U);
    msg.setDestinationEntity(245U);
    msg.value = 0.0350115020975;

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
    msg.setTimeStamp(0.820652842258);
    msg.setSource(14276U);
    msg.setSourceEntity(170U);
    msg.setDestination(49528U);
    msg.setDestinationEntity(204U);
    msg.value = 0.728627744731;

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
    msg.setTimeStamp(0.399933551938);
    msg.setSource(2972U);
    msg.setSourceEntity(98U);
    msg.setDestination(41788U);
    msg.setDestinationEntity(138U);
    msg.value = 0.548830014835;

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
    msg.setTimeStamp(0.743541079619);
    msg.setSource(7396U);
    msg.setSourceEntity(148U);
    msg.setDestination(13716U);
    msg.setDestinationEntity(157U);
    msg.value = 0.516065964737;

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
    msg.setTimeStamp(0.587303000555);
    msg.setSource(38888U);
    msg.setSourceEntity(129U);
    msg.setDestination(40064U);
    msg.setDestinationEntity(55U);
    msg.value = 0.0137414248105;

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
    msg.setTimeStamp(0.438669996287);
    msg.setSource(27698U);
    msg.setSourceEntity(227U);
    msg.setDestination(25108U);
    msg.setDestinationEntity(119U);
    msg.value = 0.0896148701913;

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
    msg.setTimeStamp(0.9995452562);
    msg.setSource(48261U);
    msg.setSourceEntity(198U);
    msg.setDestination(16570U);
    msg.setDestinationEntity(29U);
    msg.value = 0.556442901941;

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
    msg.setTimeStamp(0.249963954029);
    msg.setSource(41928U);
    msg.setSourceEntity(191U);
    msg.setDestination(38972U);
    msg.setDestinationEntity(177U);
    msg.value = 0.352295249725;

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
    msg.setTimeStamp(0.253699780633);
    msg.setSource(2965U);
    msg.setSourceEntity(220U);
    msg.setDestination(51359U);
    msg.setDestinationEntity(69U);
    msg.value = 0.978861261629;

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
    msg.setTimeStamp(0.973138241705);
    msg.setSource(51346U);
    msg.setSourceEntity(52U);
    msg.setDestination(64654U);
    msg.setDestinationEntity(253U);
    msg.value = 0.135709230894;

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
    msg.setTimeStamp(0.161903295259);
    msg.setSource(34598U);
    msg.setSourceEntity(21U);
    msg.setDestination(24458U);
    msg.setDestinationEntity(170U);
    msg.value = 0.803033368667;

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
    msg.setTimeStamp(0.479087228664);
    msg.setSource(41542U);
    msg.setSourceEntity(12U);
    msg.setDestination(37416U);
    msg.setDestinationEntity(200U);
    msg.value = 0.542575293967;

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
    msg.setTimeStamp(0.49619716062);
    msg.setSource(22435U);
    msg.setSourceEntity(81U);
    msg.setDestination(61335U);
    msg.setDestinationEntity(138U);
    msg.value = 0.298058843686;

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
    msg.setTimeStamp(0.885377029336);
    msg.setSource(32501U);
    msg.setSourceEntity(174U);
    msg.setDestination(19330U);
    msg.setDestinationEntity(68U);
    msg.value = 0.185908152244;

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
    msg.setTimeStamp(0.66920277929);
    msg.setSource(46846U);
    msg.setSourceEntity(226U);
    msg.setDestination(32240U);
    msg.setDestinationEntity(224U);
    msg.validity = 58145U;
    msg.type = 75U;
    msg.tow = 3834648829U;
    msg.base_lat = 0.974700181125;
    msg.base_lon = 0.14663279553;
    msg.base_height = 0.800482453406;
    msg.n = 0.382574201592;
    msg.e = 0.336140599155;
    msg.d = 0.161470099131;
    msg.v_n = 0.744190938534;
    msg.v_e = 0.70144643337;
    msg.v_d = 0.451575114329;
    msg.satellites = 229U;
    msg.iar_hyp = 45125U;
    msg.iar_ratio = 0.0290173752695;

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
    msg.setTimeStamp(0.323283426905);
    msg.setSource(18528U);
    msg.setSourceEntity(95U);
    msg.setDestination(27689U);
    msg.setDestinationEntity(142U);
    msg.validity = 45566U;
    msg.type = 31U;
    msg.tow = 2299662898U;
    msg.base_lat = 0.437425239263;
    msg.base_lon = 0.751182174092;
    msg.base_height = 0.472533117585;
    msg.n = 0.284980312894;
    msg.e = 0.0694062651273;
    msg.d = 0.656391508318;
    msg.v_n = 0.913394263985;
    msg.v_e = 0.690587198379;
    msg.v_d = 0.431936392341;
    msg.satellites = 80U;
    msg.iar_hyp = 32467U;
    msg.iar_ratio = 0.337656203472;

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
    msg.setTimeStamp(0.851082550667);
    msg.setSource(36995U);
    msg.setSourceEntity(225U);
    msg.setDestination(34901U);
    msg.setDestinationEntity(222U);
    msg.validity = 28491U;
    msg.type = 27U;
    msg.tow = 920851536U;
    msg.base_lat = 0.653140908008;
    msg.base_lon = 0.993949621537;
    msg.base_height = 0.757252314299;
    msg.n = 0.0637838532753;
    msg.e = 0.870290134661;
    msg.d = 0.818311250411;
    msg.v_n = 0.338180621678;
    msg.v_e = 0.0761050824977;
    msg.v_d = 0.22362785177;
    msg.satellites = 132U;
    msg.iar_hyp = 23245U;
    msg.iar_ratio = 0.597042545315;

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
    msg.setTimeStamp(0.819966501905);
    msg.setSource(55693U);
    msg.setSourceEntity(71U);
    msg.setDestination(56733U);
    msg.setDestinationEntity(39U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.776444052756;
    tmp_msg_0.lon = 0.477385290447;
    tmp_msg_0.height = 0.463467133584;
    tmp_msg_0.x = 0.518546990501;
    tmp_msg_0.y = 0.45810435643;
    tmp_msg_0.z = 0.674587529451;
    tmp_msg_0.phi = 0.483399532144;
    tmp_msg_0.theta = 0.793612929149;
    tmp_msg_0.psi = 0.396096002669;
    tmp_msg_0.u = 0.181564367554;
    tmp_msg_0.v = 0.0700676146143;
    tmp_msg_0.w = 0.726670598053;
    tmp_msg_0.vx = 0.105671412212;
    tmp_msg_0.vy = 0.164967848806;
    tmp_msg_0.vz = 0.611395996908;
    tmp_msg_0.p = 0.312387648343;
    tmp_msg_0.q = 0.451774487191;
    tmp_msg_0.r = 0.680404995771;
    tmp_msg_0.depth = 0.781369518426;
    tmp_msg_0.alt = 0.555093285738;
    msg.state.set(tmp_msg_0);
    msg.type = 151U;

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
    msg.setTimeStamp(0.1558849415);
    msg.setSource(23023U);
    msg.setSourceEntity(48U);
    msg.setDestination(54743U);
    msg.setDestinationEntity(248U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.876443633513;
    tmp_msg_0.lon = 0.252000015628;
    tmp_msg_0.height = 0.0636702011608;
    tmp_msg_0.x = 0.926117510857;
    tmp_msg_0.y = 0.0784815394957;
    tmp_msg_0.z = 0.696723091454;
    tmp_msg_0.phi = 0.742632699022;
    tmp_msg_0.theta = 0.910932261428;
    tmp_msg_0.psi = 0.108707260293;
    tmp_msg_0.u = 0.118234642614;
    tmp_msg_0.v = 0.620323764291;
    tmp_msg_0.w = 0.959651243294;
    tmp_msg_0.vx = 0.648272237364;
    tmp_msg_0.vy = 0.861842196683;
    tmp_msg_0.vz = 0.960037097571;
    tmp_msg_0.p = 0.991086533172;
    tmp_msg_0.q = 0.781135078153;
    tmp_msg_0.r = 0.626124216948;
    tmp_msg_0.depth = 0.843449690186;
    tmp_msg_0.alt = 0.658379622414;
    msg.state.set(tmp_msg_0);
    msg.type = 245U;

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
    msg.setTimeStamp(0.63305246279);
    msg.setSource(8542U);
    msg.setSourceEntity(112U);
    msg.setDestination(31457U);
    msg.setDestinationEntity(142U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.692132962085;
    tmp_msg_0.lon = 0.558584821322;
    tmp_msg_0.height = 0.429513587254;
    tmp_msg_0.x = 0.301717985272;
    tmp_msg_0.y = 0.088137022763;
    tmp_msg_0.z = 0.829063519719;
    tmp_msg_0.phi = 0.164866071218;
    tmp_msg_0.theta = 0.596715741176;
    tmp_msg_0.psi = 0.331984332257;
    tmp_msg_0.u = 0.337911600809;
    tmp_msg_0.v = 0.789007072334;
    tmp_msg_0.w = 0.959413558209;
    tmp_msg_0.vx = 0.848079433179;
    tmp_msg_0.vy = 0.279108960021;
    tmp_msg_0.vz = 0.0791104710263;
    tmp_msg_0.p = 0.323740400319;
    tmp_msg_0.q = 0.101708805537;
    tmp_msg_0.r = 0.302746846732;
    tmp_msg_0.depth = 0.532316964213;
    tmp_msg_0.alt = 0.7957204434;
    msg.state.set(tmp_msg_0);
    msg.type = 251U;

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
    msg.setTimeStamp(0.520831018078);
    msg.setSource(29451U);
    msg.setSourceEntity(36U);
    msg.setDestination(39120U);
    msg.setDestinationEntity(206U);
    msg.value = 0.447037182141;

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
    msg.setTimeStamp(0.783950967728);
    msg.setSource(23995U);
    msg.setSourceEntity(85U);
    msg.setDestination(24161U);
    msg.setDestinationEntity(190U);
    msg.value = 0.772101627142;

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
    msg.setTimeStamp(0.580754473557);
    msg.setSource(49771U);
    msg.setSourceEntity(102U);
    msg.setDestination(25445U);
    msg.setDestinationEntity(211U);
    msg.value = 0.348082041111;

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
    msg.setTimeStamp(0.6752591364);
    msg.setSource(47980U);
    msg.setSourceEntity(132U);
    msg.setDestination(17551U);
    msg.setDestinationEntity(179U);
    msg.value = 0.326500901095;

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
    msg.setTimeStamp(0.81589565747);
    msg.setSource(43223U);
    msg.setSourceEntity(85U);
    msg.setDestination(2554U);
    msg.setDestinationEntity(1U);
    msg.value = 0.548781824272;

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
    msg.setTimeStamp(0.924381505569);
    msg.setSource(62360U);
    msg.setSourceEntity(221U);
    msg.setDestination(21712U);
    msg.setDestinationEntity(18U);
    msg.value = 0.929469088093;

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
    msg.setTimeStamp(0.114908920729);
    msg.setSource(41025U);
    msg.setSourceEntity(243U);
    msg.setDestination(44081U);
    msg.setDestinationEntity(182U);
    msg.value = 0.909240114526;

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
    msg.setTimeStamp(0.29008784816);
    msg.setSource(42680U);
    msg.setSourceEntity(29U);
    msg.setDestination(54524U);
    msg.setDestinationEntity(23U);
    msg.value = 0.895124126983;

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
    msg.setTimeStamp(0.0755138706791);
    msg.setSource(19317U);
    msg.setSourceEntity(59U);
    msg.setDestination(56221U);
    msg.setDestinationEntity(214U);
    msg.value = 0.109388761009;

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
    msg.setTimeStamp(0.302180304953);
    msg.setSource(44288U);
    msg.setSourceEntity(38U);
    msg.setDestination(8442U);
    msg.setDestinationEntity(57U);
    msg.value = 0.489517749598;

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
    msg.setTimeStamp(0.022195280001);
    msg.setSource(31103U);
    msg.setSourceEntity(37U);
    msg.setDestination(7257U);
    msg.setDestinationEntity(227U);
    msg.value = 0.974901601949;

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
    msg.setTimeStamp(0.452948376344);
    msg.setSource(60707U);
    msg.setSourceEntity(62U);
    msg.setDestination(22140U);
    msg.setDestinationEntity(130U);
    msg.value = 0.709245720058;

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
    msg.setTimeStamp(0.69071176032);
    msg.setSource(36548U);
    msg.setSourceEntity(16U);
    msg.setDestination(3079U);
    msg.setDestinationEntity(51U);
    msg.value = 0.233457885987;

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
    msg.setTimeStamp(0.310898294898);
    msg.setSource(18864U);
    msg.setSourceEntity(24U);
    msg.setDestination(36202U);
    msg.setDestinationEntity(211U);
    msg.value = 0.0529216531859;

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
    msg.setTimeStamp(0.768717409061);
    msg.setSource(45925U);
    msg.setSourceEntity(25U);
    msg.setDestination(20578U);
    msg.setDestinationEntity(72U);
    msg.value = 0.850207696254;

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
    msg.setTimeStamp(0.919152366269);
    msg.setSource(39418U);
    msg.setSourceEntity(170U);
    msg.setDestination(22201U);
    msg.setDestinationEntity(118U);
    msg.id = 241U;
    msg.zoom = 199U;
    msg.action = 67U;

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
    msg.setTimeStamp(0.0103468059334);
    msg.setSource(59087U);
    msg.setSourceEntity(40U);
    msg.setDestination(463U);
    msg.setDestinationEntity(222U);
    msg.id = 59U;
    msg.zoom = 50U;
    msg.action = 149U;

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
    msg.setTimeStamp(0.542681673449);
    msg.setSource(49368U);
    msg.setSourceEntity(129U);
    msg.setDestination(10102U);
    msg.setDestinationEntity(197U);
    msg.id = 240U;
    msg.zoom = 8U;
    msg.action = 195U;

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
    msg.setTimeStamp(0.937807008311);
    msg.setSource(26574U);
    msg.setSourceEntity(163U);
    msg.setDestination(25235U);
    msg.setDestinationEntity(50U);
    msg.id = 97U;
    msg.value = 0.729087779019;

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
    msg.setTimeStamp(0.197565032278);
    msg.setSource(50534U);
    msg.setSourceEntity(67U);
    msg.setDestination(31986U);
    msg.setDestinationEntity(59U);
    msg.id = 43U;
    msg.value = 0.549351223426;

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
    msg.setTimeStamp(0.860433794488);
    msg.setSource(44092U);
    msg.setSourceEntity(193U);
    msg.setDestination(60205U);
    msg.setDestinationEntity(233U);
    msg.id = 134U;
    msg.value = 0.336252380794;

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
    msg.setTimeStamp(0.85420023903);
    msg.setSource(18455U);
    msg.setSourceEntity(33U);
    msg.setDestination(47051U);
    msg.setDestinationEntity(189U);
    msg.id = 77U;
    msg.value = 0.26700453215;

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
    msg.setTimeStamp(0.524416546335);
    msg.setSource(2442U);
    msg.setSourceEntity(174U);
    msg.setDestination(47701U);
    msg.setDestinationEntity(36U);
    msg.id = 232U;
    msg.value = 0.297135968443;

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
    msg.setTimeStamp(0.0154920354261);
    msg.setSource(26215U);
    msg.setSourceEntity(43U);
    msg.setDestination(41066U);
    msg.setDestinationEntity(57U);
    msg.id = 127U;
    msg.value = 0.573906344879;

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
    msg.setTimeStamp(0.25967589861);
    msg.setSource(15035U);
    msg.setSourceEntity(245U);
    msg.setDestination(33134U);
    msg.setDestinationEntity(238U);
    msg.id = 140U;
    msg.angle = 0.425666463276;

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
    msg.setTimeStamp(0.614196221543);
    msg.setSource(60405U);
    msg.setSourceEntity(55U);
    msg.setDestination(54117U);
    msg.setDestinationEntity(218U);
    msg.id = 35U;
    msg.angle = 0.978809415433;

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
    msg.setTimeStamp(0.114173415552);
    msg.setSource(17009U);
    msg.setSourceEntity(55U);
    msg.setDestination(1920U);
    msg.setDestinationEntity(25U);
    msg.id = 30U;
    msg.angle = 0.520579617332;

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
    msg.setTimeStamp(0.293449141951);
    msg.setSource(51828U);
    msg.setSourceEntity(56U);
    msg.setDestination(4774U);
    msg.setDestinationEntity(126U);
    msg.op = 39U;
    msg.actions.assign("HZAETGNUETZMYHSLXACWQSJPEFHMCEQIWRMIROQLDOEUZRYEQMIQPZKUTTAYTHEFLYHTMXPBDEKRHXYYZOAWIOZJSJFVSGPOLQFCVTHGXLQDF");

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
    msg.setTimeStamp(0.308699425201);
    msg.setSource(18479U);
    msg.setSourceEntity(51U);
    msg.setDestination(19774U);
    msg.setDestinationEntity(85U);
    msg.op = 202U;
    msg.actions.assign("HAJZRYMMLXFLEPQGTPTLFEEVJJHRFQTAEKKOLHQAUDRZTOJCSBWPNBDKIKUQJGVLGINUJMRXBWUXRWDHSDPQBCIWPDDNGAYCJKSYGIHCRMCVCGBOJNSCRHWYAHAPQPYSLZXLSZUKLTVVAZYLSGX");

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
    msg.setTimeStamp(0.442921066062);
    msg.setSource(3699U);
    msg.setSourceEntity(176U);
    msg.setDestination(44012U);
    msg.setDestinationEntity(7U);
    msg.op = 181U;
    msg.actions.assign("JUOIZDYHWIIRGDUYRQUQXCMALBZLHGMEOUNCUBZAJTPYTJQSPYJMDZOMEXPMKFRFVABDHVTAIPKRFGRAOWDFWNVHIEKWPQLMWNDYJZKYCIGOZNDXVDVRLASQBGNICWHDSMQFQFVFCHXNEAPXPPCOVCLHJAEWKFYMAGRGESBXLSEVOXZKQOUVEPKPHGIOSMVSNE");

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
    msg.setTimeStamp(0.714837118639);
    msg.setSource(32724U);
    msg.setSourceEntity(150U);
    msg.setDestination(30304U);
    msg.setDestinationEntity(93U);
    msg.actions.assign("QKIEXBOJHWXJONKMPHGNVEYQOMBNUXTPLEYOWZOBCRGUARNHAIDCRIDWJXKKYPHAPTSOFBPBDZNMNVBCEHBRDLFUAZQXDVWEFHMYGVCVWMCXILLJXGSFTOLGVWGJJINRYWDZQBCESZARRGRZPIFZISLDYDABRYPO");

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
    msg.setTimeStamp(0.858886135836);
    msg.setSource(1065U);
    msg.setSourceEntity(106U);
    msg.setDestination(16378U);
    msg.setDestinationEntity(44U);
    msg.actions.assign("QZRAMHWPEIOIHSYIWZFTWZHWPWDSBFNHNCKRGLAXMXMYSXAZFEHBKDENFQVVOTFNVBWVDQAIZJTORECCJLDKESKYLTECVPSTXMPFAGUYGXVAZJXOAEYPZTNBWGCRFIMUBSPUKMRIDTOWIADUGNHLGIJMSKGEVJRXIGCYQJCRJDFGBSXZPJMRVLBIAQFLPAUCQZJBB");

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
    msg.setTimeStamp(0.28757232278);
    msg.setSource(19596U);
    msg.setSourceEntity(224U);
    msg.setDestination(37132U);
    msg.setDestinationEntity(136U);
    msg.actions.assign("CTFFPRWLUHBDVARRUVTSWEXFRAWWVZQMAQZAMVIUXCZDI");

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
    msg.setTimeStamp(0.0179570432889);
    msg.setSource(31565U);
    msg.setSourceEntity(168U);
    msg.setDestination(493U);
    msg.setDestinationEntity(210U);
    msg.button = 78U;
    msg.value = 231U;

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
    msg.setTimeStamp(0.732162007091);
    msg.setSource(63415U);
    msg.setSourceEntity(53U);
    msg.setDestination(22546U);
    msg.setDestinationEntity(107U);
    msg.button = 206U;
    msg.value = 8U;

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
    msg.setTimeStamp(0.302808363677);
    msg.setSource(58363U);
    msg.setSourceEntity(248U);
    msg.setDestination(32563U);
    msg.setDestinationEntity(160U);
    msg.button = 48U;
    msg.value = 26U;

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
    msg.setTimeStamp(0.112778492371);
    msg.setSource(56296U);
    msg.setSourceEntity(197U);
    msg.setDestination(254U);
    msg.setDestinationEntity(208U);
    msg.op = 103U;
    msg.text.assign("JIZYGGFFQHXH");

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
    msg.setTimeStamp(0.0122600587273);
    msg.setSource(30840U);
    msg.setSourceEntity(122U);
    msg.setDestination(8497U);
    msg.setDestinationEntity(242U);
    msg.op = 251U;
    msg.text.assign("NTSNUWZVYVITDJOVAJXRNCMJEPFZFUFTFPJKYQJGNWEHTFUNRHXMVJYQTYSKCGZOOJVYZASGLRGPFZIAAOAIBAYDWTHXYVMMRLLWKIZDECJMEQCXLMUDESHBUGRTLEPRLBHSHUSKLSPZPRRC");

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
    msg.setTimeStamp(0.839879052593);
    msg.setSource(1814U);
    msg.setSourceEntity(160U);
    msg.setDestination(52520U);
    msg.setDestinationEntity(24U);
    msg.op = 236U;
    msg.text.assign("KLYCWHZTADHIWQTXMNHMSKJWJFRKQHWMIESHQXZREKSBGBPTOUFVDAQCWEQLALEVDAJOYHMORHPEDFUOCGSHKYONVJYLLZWGZG");

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
    msg.setTimeStamp(0.895889808289);
    msg.setSource(62774U);
    msg.setSourceEntity(222U);
    msg.setDestination(46046U);
    msg.setDestinationEntity(107U);
    msg.op = 67U;
    msg.time_remain = 0.447568110422;
    msg.sched_time = 0.571702975059;

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
    msg.setTimeStamp(0.724758664453);
    msg.setSource(20358U);
    msg.setSourceEntity(211U);
    msg.setDestination(59126U);
    msg.setDestinationEntity(50U);
    msg.op = 147U;
    msg.time_remain = 0.147421593495;
    msg.sched_time = 0.350567287131;

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
    msg.setTimeStamp(0.981166319516);
    msg.setSource(55603U);
    msg.setSourceEntity(198U);
    msg.setDestination(47147U);
    msg.setDestinationEntity(0U);
    msg.op = 217U;
    msg.time_remain = 0.359586013717;
    msg.sched_time = 0.961690076051;

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
    msg.setTimeStamp(0.466563920859);
    msg.setSource(60485U);
    msg.setSourceEntity(167U);
    msg.setDestination(53290U);
    msg.setDestinationEntity(221U);
    msg.name.assign("RWFPMSLBMXPBTQWWTRWZMRUSYPJEBCQNBGRAPFUDHOJHHVQIFNULCAYTPDLZDITZXFHZHWKVLWUMGYFEXVGQZYTPBCIFBEKDECINQFWLSLNVLBOXN");
    msg.op = 88U;
    msg.sched_time = 0.692224664949;

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
    msg.setTimeStamp(0.0141130076965);
    msg.setSource(22032U);
    msg.setSourceEntity(38U);
    msg.setDestination(58138U);
    msg.setDestinationEntity(138U);
    msg.name.assign("UQKGNHIYRBLATUCQXYCMWFOOHXVSRZHTKSGYJMKKFTTGIOQUXDFEMQWNDXVWGQOKXITUDCYLSII");
    msg.op = 79U;
    msg.sched_time = 0.818312988949;

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
    msg.setTimeStamp(0.283886357812);
    msg.setSource(12604U);
    msg.setSourceEntity(85U);
    msg.setDestination(13461U);
    msg.setDestinationEntity(50U);
    msg.name.assign("PSPTXYBKHWNVFEUWDJRQNCICVBJCVOKWMBIGMUU");
    msg.op = 202U;
    msg.sched_time = 0.656444113105;

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
    msg.setTimeStamp(0.841950581064);
    msg.setSource(63279U);
    msg.setSourceEntity(247U);
    msg.setDestination(34467U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.0830261152228);
    msg.setSource(2649U);
    msg.setSourceEntity(118U);
    msg.setDestination(12385U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.570529276308);
    msg.setSource(39908U);
    msg.setSourceEntity(139U);
    msg.setDestination(60429U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.266472161764);
    msg.setSource(36521U);
    msg.setSourceEntity(245U);
    msg.setDestination(46489U);
    msg.setDestinationEntity(91U);
    msg.name.assign("CRTXHGDCCKJSOADOUSLWLUZYORXQZQBDJKZZAWTBTLHEYEMKIDEOFSVNBIXPIVNGXWMXJISLWCQZAPAWUFIHYVKMTRJ");
    msg.state = 161U;

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
    msg.setTimeStamp(0.240943196728);
    msg.setSource(36263U);
    msg.setSourceEntity(62U);
    msg.setDestination(65249U);
    msg.setDestinationEntity(122U);
    msg.name.assign("CXKNUWULZVEXGFJZCNPVTEIQZKJKAFRDXBSMBAFRXNGLJMKSBJACDDODDWWENBKRIDHTTDHEQNZNJBJVEFTVJYSQFPPKCYBOAKSVKGOXPHYQPLIKPIELCROWV");
    msg.state = 95U;

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
    msg.setTimeStamp(0.762697821901);
    msg.setSource(58931U);
    msg.setSourceEntity(92U);
    msg.setDestination(26147U);
    msg.setDestinationEntity(168U);
    msg.name.assign("JPCDMLARBTOXTNQCOLYFFBXVYTGQKPVNVBVNAEXGNRVRJSKOGPDR");
    msg.state = 122U;

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
    msg.setTimeStamp(0.591824076007);
    msg.setSource(436U);
    msg.setSourceEntity(187U);
    msg.setDestination(44170U);
    msg.setDestinationEntity(74U);
    msg.name.assign("AUSDLTNANWBZFXAMDUBNHIAMOEEWUYSNOBGOXMWJSNOQLJKKCIREBXIAFMBRLQ");
    msg.value = 5U;

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
    msg.setTimeStamp(0.458672698638);
    msg.setSource(3902U);
    msg.setSourceEntity(81U);
    msg.setDestination(53931U);
    msg.setDestinationEntity(88U);
    msg.name.assign("YVNSWPGOCRCGGXMNHHUPKVMQQEGGGFDRDNWKPUQMJHHLICVELYXABHKCGAEIXZPFCBPENSWCGONPJVQDKITYWUODJYOUBJBNUXMLDWTLAKFIXOAJSURNFEDULQWSKSFAALJEBYIFHETTRIAJQVMESFUCGFWQRMOZHRWYIDMMRSXVROB");
    msg.value = 173U;

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
    msg.setTimeStamp(0.795906724687);
    msg.setSource(16652U);
    msg.setSourceEntity(220U);
    msg.setDestination(9989U);
    msg.setDestinationEntity(155U);
    msg.name.assign("VXBONKDJHGFYLVQGTVJFUSPGQKJFGWPL");
    msg.value = 150U;

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
    msg.setTimeStamp(0.643934816097);
    msg.setSource(46071U);
    msg.setSourceEntity(10U);
    msg.setDestination(8520U);
    msg.setDestinationEntity(232U);
    msg.name.assign("NAFGKQWXRONCJSCWRJEZMRIHDODFJACPKXXUQCUKYHOZTUYACMGVFTWARHQNHTGZANXDVWFIXNOLVTMRPGZQSVPHBXLGJPZYENPHNAIVFTMZIXDIWTJPQFGZPYBLVEHYYOKXQGWACRDLAPYTWYSQBNSLMDCHIVOCPEUGKMFIFRYCENLIJBOMDTSERKYUEABMUWHUTRXNOOLGUJKFJTLIEKSSQEUJBSZZDOSKE");

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
    msg.setTimeStamp(0.387004488403);
    msg.setSource(23117U);
    msg.setSourceEntity(123U);
    msg.setDestination(28004U);
    msg.setDestinationEntity(232U);
    msg.name.assign("IRIZESRERPAASQIMORLTGXBGTJHLMFJKMSZIULGAMAYQYNXEGWWLFDFVKTWSDNVDWHERIEQQXNQALXWYWHDXSHAEKVRJXJPZBCFBLFKPTTGCVTKFYJUGSICXPOOBNPMJBMAZUHZGHQQYCIBOROIUBVMKUUEUNDSIHXSOLCWMSCJWUPL");

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
    msg.setTimeStamp(0.503132067553);
    msg.setSource(37661U);
    msg.setSourceEntity(158U);
    msg.setDestination(47744U);
    msg.setDestinationEntity(154U);
    msg.name.assign("TXTCMUYNCALUZDGTGOVOJMRTLIJMLCDRDOIBHKNBJQCVOTSCTJLISZNERADMCELCFHCEYERQSWWFFWIGPQIUVAYVUKMFJGZQOQYNONOBTXDNNFNYKAXHJAOLMFRBMJFHXFHWJRLRFDGEVBYXVECMXATYKBRAZIESPUXMDSZWXYWKAJQKAWSKKZGNKYEPHSZVHUDIZYPUDEPDVQZGBLBBXWOOPKSFUIWSTHGILP");

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
    msg.setTimeStamp(0.585368173523);
    msg.setSource(34537U);
    msg.setSourceEntity(21U);
    msg.setDestination(27822U);
    msg.setDestinationEntity(106U);
    msg.name.assign("WTZCBYMMXHHXQLFLEGOOUJAKQTSVAUXPPTWTNEQPVSWPQBGSKUZVUPFUAZFHYQPVWHKRINBJSDZIWEGIUJPXAQCXTYECIIZFLSXREVWQNLJZJRGFOMMTMRACQMOOCHAWNERZMHOAYVIDXGEDSV");
    msg.value = 157U;

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
    msg.setTimeStamp(0.555618466486);
    msg.setSource(35209U);
    msg.setSourceEntity(233U);
    msg.setDestination(339U);
    msg.setDestinationEntity(42U);
    msg.name.assign("JSFOIQIHMDUHEFBQNUGWRQBWXEMZKREPEUMKYRWPEGBBDXDACUXXLXYNKVJJYUPAPYVAMVYEDEKMCPIZLAAKYXFSTHFJYOPZGORBPVOMDIRVBYLOJOIH");
    msg.value = 188U;

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
    msg.setTimeStamp(0.693317125758);
    msg.setSource(59552U);
    msg.setSourceEntity(28U);
    msg.setDestination(64076U);
    msg.setDestinationEntity(146U);
    msg.name.assign("NYDSENLZCHZSLZHWJUXYEGUALBZTKYUDMIGIKNWSCWQCSFHFSFAPKGGBJRECONJPAQNOLYVLRNUZFZMHUNBCGBEYMVPKHTTJYHGDEWWKBQRVPTMNRKVGKWBILEUIFFZXOJUFXNSYHOEVOCZEAKHPLAPQCCBVQBLOLOA");
    msg.value = 217U;

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
    msg.setTimeStamp(0.721690128727);
    msg.setSource(31568U);
    msg.setSourceEntity(90U);
    msg.setDestination(56408U);
    msg.setDestinationEntity(137U);
    msg.id = 2U;
    msg.period = 1801888463U;
    msg.duty_cycle = 1718748465U;

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
    msg.setTimeStamp(0.666359716165);
    msg.setSource(8594U);
    msg.setSourceEntity(86U);
    msg.setDestination(49450U);
    msg.setDestinationEntity(104U);
    msg.id = 232U;
    msg.period = 1241765182U;
    msg.duty_cycle = 1001586635U;

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
    msg.setTimeStamp(0.574442566811);
    msg.setSource(7542U);
    msg.setSourceEntity(76U);
    msg.setDestination(22047U);
    msg.setDestinationEntity(79U);
    msg.id = 0U;
    msg.period = 2979586420U;
    msg.duty_cycle = 839022431U;

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
    msg.setTimeStamp(0.195386688532);
    msg.setSource(28804U);
    msg.setSourceEntity(218U);
    msg.setDestination(44337U);
    msg.setDestinationEntity(92U);
    msg.id = 62U;
    msg.period = 1571894122U;
    msg.duty_cycle = 1234204836U;

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
    msg.setTimeStamp(0.271488397166);
    msg.setSource(13306U);
    msg.setSourceEntity(170U);
    msg.setDestination(45047U);
    msg.setDestinationEntity(73U);
    msg.id = 6U;
    msg.period = 2542041471U;
    msg.duty_cycle = 3584001746U;

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
    msg.setTimeStamp(0.482868153301);
    msg.setSource(61180U);
    msg.setSourceEntity(42U);
    msg.setDestination(9422U);
    msg.setDestinationEntity(64U);
    msg.id = 42U;
    msg.period = 1426030265U;
    msg.duty_cycle = 2258118381U;

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
    msg.setTimeStamp(0.982617540982);
    msg.setSource(34962U);
    msg.setSourceEntity(176U);
    msg.setDestination(29079U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.833813508924;
    msg.lon = 0.166065493264;
    msg.height = 0.336657024554;
    msg.x = 0.609338733869;
    msg.y = 0.724242077842;
    msg.z = 0.235556036465;
    msg.phi = 0.653576387247;
    msg.theta = 0.819862859011;
    msg.psi = 0.256222690484;
    msg.u = 0.0282153291622;
    msg.v = 0.492296482325;
    msg.w = 0.58033003535;
    msg.vx = 0.820410518068;
    msg.vy = 0.846538277156;
    msg.vz = 0.299699285047;
    msg.p = 0.847466144519;
    msg.q = 0.0944611680136;
    msg.r = 0.681588234761;
    msg.depth = 0.592885941389;
    msg.alt = 0.934395818019;

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
    msg.setTimeStamp(0.592317156002);
    msg.setSource(29888U);
    msg.setSourceEntity(140U);
    msg.setDestination(61148U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.328834864923;
    msg.lon = 0.161629907693;
    msg.height = 0.915893359977;
    msg.x = 0.315041757207;
    msg.y = 0.437476951579;
    msg.z = 0.716147986299;
    msg.phi = 0.991499365649;
    msg.theta = 0.692374298158;
    msg.psi = 0.14827279698;
    msg.u = 0.116236509053;
    msg.v = 0.346326499301;
    msg.w = 0.716563504004;
    msg.vx = 0.472219471213;
    msg.vy = 0.138482787458;
    msg.vz = 0.0366279370894;
    msg.p = 0.476207528701;
    msg.q = 0.212266766436;
    msg.r = 0.937677664356;
    msg.depth = 0.742322411606;
    msg.alt = 0.452617265599;

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
    msg.setTimeStamp(0.53482554816);
    msg.setSource(3347U);
    msg.setSourceEntity(53U);
    msg.setDestination(1819U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.734611206072;
    msg.lon = 0.935796157285;
    msg.height = 0.677614702756;
    msg.x = 0.581556780137;
    msg.y = 0.654430483433;
    msg.z = 0.501735803071;
    msg.phi = 0.41695541529;
    msg.theta = 0.353247351854;
    msg.psi = 0.860591441488;
    msg.u = 0.658702033679;
    msg.v = 0.886777248654;
    msg.w = 0.281941965268;
    msg.vx = 0.115892905496;
    msg.vy = 0.0370115783177;
    msg.vz = 0.641154445997;
    msg.p = 0.837579632123;
    msg.q = 0.806579737758;
    msg.r = 0.919453854548;
    msg.depth = 0.0629071523435;
    msg.alt = 0.912686349805;

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
    msg.setTimeStamp(0.985592503773);
    msg.setSource(57479U);
    msg.setSourceEntity(65U);
    msg.setDestination(3443U);
    msg.setDestinationEntity(132U);
    msg.x = 0.35680113491;
    msg.y = 0.981461944172;
    msg.z = 0.0433993542995;

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
    msg.setTimeStamp(0.0591142090907);
    msg.setSource(27564U);
    msg.setSourceEntity(187U);
    msg.setDestination(60870U);
    msg.setDestinationEntity(118U);
    msg.x = 0.460255493324;
    msg.y = 0.0637023966187;
    msg.z = 0.841905317735;

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
    msg.setTimeStamp(0.990074472799);
    msg.setSource(61210U);
    msg.setSourceEntity(36U);
    msg.setDestination(30730U);
    msg.setDestinationEntity(235U);
    msg.x = 0.753013821126;
    msg.y = 0.191852106273;
    msg.z = 0.929554603667;

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
    msg.setTimeStamp(0.781600822323);
    msg.setSource(31765U);
    msg.setSourceEntity(140U);
    msg.setDestination(56029U);
    msg.setDestinationEntity(92U);
    msg.value = 0.674595871055;

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
    msg.setTimeStamp(0.539054704997);
    msg.setSource(24176U);
    msg.setSourceEntity(190U);
    msg.setDestination(59882U);
    msg.setDestinationEntity(214U);
    msg.value = 0.545337780636;

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
    msg.setTimeStamp(0.38503303792);
    msg.setSource(6703U);
    msg.setSourceEntity(129U);
    msg.setDestination(61866U);
    msg.setDestinationEntity(66U);
    msg.value = 0.207180339201;

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
    msg.setTimeStamp(0.427360507392);
    msg.setSource(20901U);
    msg.setSourceEntity(193U);
    msg.setDestination(30256U);
    msg.setDestinationEntity(99U);
    msg.value = 0.34040087984;

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
    msg.setTimeStamp(0.994922643236);
    msg.setSource(17190U);
    msg.setSourceEntity(158U);
    msg.setDestination(5438U);
    msg.setDestinationEntity(240U);
    msg.value = 0.885450161835;

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
    msg.setTimeStamp(0.139928696515);
    msg.setSource(62551U);
    msg.setSourceEntity(178U);
    msg.setDestination(10951U);
    msg.setDestinationEntity(206U);
    msg.value = 0.804757568545;

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
    msg.setTimeStamp(0.370212182851);
    msg.setSource(61573U);
    msg.setSourceEntity(86U);
    msg.setDestination(33725U);
    msg.setDestinationEntity(170U);
    msg.x = 0.902706903047;
    msg.y = 0.250597549102;
    msg.z = 0.36574566358;
    msg.phi = 0.543807909217;
    msg.theta = 0.542939245022;
    msg.psi = 0.709467216069;
    msg.p = 0.970686717439;
    msg.q = 0.568983415895;
    msg.r = 0.252645656559;
    msg.u = 0.0339776718028;
    msg.v = 0.881618779072;
    msg.w = 0.129975707003;
    msg.bias_psi = 0.0497142071696;
    msg.bias_r = 0.541025565471;

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
    msg.setTimeStamp(0.803988242595);
    msg.setSource(4737U);
    msg.setSourceEntity(105U);
    msg.setDestination(58411U);
    msg.setDestinationEntity(243U);
    msg.x = 0.248121501054;
    msg.y = 0.999708674538;
    msg.z = 0.789873232476;
    msg.phi = 0.611438138345;
    msg.theta = 0.483806046978;
    msg.psi = 0.336529055227;
    msg.p = 0.551600882297;
    msg.q = 0.452730746479;
    msg.r = 0.156310523063;
    msg.u = 0.954445098752;
    msg.v = 0.444147072174;
    msg.w = 0.160626717258;
    msg.bias_psi = 0.388582449623;
    msg.bias_r = 0.388185688266;

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
    msg.setTimeStamp(0.751134489273);
    msg.setSource(25920U);
    msg.setSourceEntity(156U);
    msg.setDestination(3227U);
    msg.setDestinationEntity(236U);
    msg.x = 0.771221649122;
    msg.y = 0.524156450722;
    msg.z = 0.346174323083;
    msg.phi = 0.358276890175;
    msg.theta = 0.316635580603;
    msg.psi = 0.0394865275501;
    msg.p = 0.643250809476;
    msg.q = 0.307777322411;
    msg.r = 0.636397990376;
    msg.u = 0.805609100441;
    msg.v = 0.923946580803;
    msg.w = 0.932112213373;
    msg.bias_psi = 0.968489575501;
    msg.bias_r = 0.63389201426;

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
    msg.setTimeStamp(0.966689665475);
    msg.setSource(43664U);
    msg.setSourceEntity(92U);
    msg.setDestination(30644U);
    msg.setDestinationEntity(173U);
    msg.bias_psi = 0.295220546743;
    msg.bias_r = 0.480073474138;
    msg.cog = 0.216602447695;
    msg.cyaw = 0.456921424705;
    msg.lbl_rej_level = 0.888829665586;
    msg.gps_rej_level = 0.158335585968;
    msg.custom_x = 0.949196649265;
    msg.custom_y = 0.73275741961;
    msg.custom_z = 0.507606214031;

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
    msg.setTimeStamp(0.353034882859);
    msg.setSource(16502U);
    msg.setSourceEntity(164U);
    msg.setDestination(2394U);
    msg.setDestinationEntity(14U);
    msg.bias_psi = 0.567942531477;
    msg.bias_r = 0.625448467103;
    msg.cog = 0.0640561562513;
    msg.cyaw = 0.81890098851;
    msg.lbl_rej_level = 0.659224213715;
    msg.gps_rej_level = 0.699329310728;
    msg.custom_x = 0.763909177144;
    msg.custom_y = 0.582249600205;
    msg.custom_z = 0.0760472226377;

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
    msg.setTimeStamp(0.142329285747);
    msg.setSource(1603U);
    msg.setSourceEntity(206U);
    msg.setDestination(38588U);
    msg.setDestinationEntity(173U);
    msg.bias_psi = 0.155939093249;
    msg.bias_r = 0.316431937024;
    msg.cog = 0.507540259732;
    msg.cyaw = 0.189537348791;
    msg.lbl_rej_level = 0.767479635393;
    msg.gps_rej_level = 0.95111130161;
    msg.custom_x = 0.196350228726;
    msg.custom_y = 0.868661318905;
    msg.custom_z = 0.838398803608;

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
    msg.setTimeStamp(0.618561095012);
    msg.setSource(4361U);
    msg.setSourceEntity(75U);
    msg.setDestination(12783U);
    msg.setDestinationEntity(169U);
    msg.utc_time = 0.856085781638;
    msg.reason = 225U;

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
    msg.setTimeStamp(0.767323169213);
    msg.setSource(48180U);
    msg.setSourceEntity(232U);
    msg.setDestination(49711U);
    msg.setDestinationEntity(51U);
    msg.utc_time = 0.165724704292;
    msg.reason = 244U;

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
    msg.setTimeStamp(0.430626825612);
    msg.setSource(40863U);
    msg.setSourceEntity(129U);
    msg.setDestination(63016U);
    msg.setDestinationEntity(99U);
    msg.utc_time = 0.821608935362;
    msg.reason = 196U;

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
    msg.setTimeStamp(0.573913533396);
    msg.setSource(62963U);
    msg.setSourceEntity(101U);
    msg.setDestination(47898U);
    msg.setDestinationEntity(191U);
    msg.id = 129U;
    msg.range = 0.597959134983;
    msg.acceptance = 247U;

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
    msg.setTimeStamp(0.824539148836);
    msg.setSource(51538U);
    msg.setSourceEntity(68U);
    msg.setDestination(34191U);
    msg.setDestinationEntity(97U);
    msg.id = 222U;
    msg.range = 0.00694793463699;
    msg.acceptance = 117U;

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
    msg.setTimeStamp(0.871661010237);
    msg.setSource(9789U);
    msg.setSourceEntity(185U);
    msg.setDestination(62071U);
    msg.setDestinationEntity(20U);
    msg.id = 143U;
    msg.range = 0.174120127499;
    msg.acceptance = 111U;

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
    msg.setTimeStamp(0.350607786196);
    msg.setSource(8878U);
    msg.setSourceEntity(184U);
    msg.setDestination(43787U);
    msg.setDestinationEntity(19U);
    msg.type = 69U;
    msg.reason = 223U;
    msg.value = 0.467177760072;
    msg.timestep = 0.689545139073;

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
    msg.setTimeStamp(0.108546662863);
    msg.setSource(18145U);
    msg.setSourceEntity(44U);
    msg.setDestination(38616U);
    msg.setDestinationEntity(211U);
    msg.type = 36U;
    msg.reason = 106U;
    msg.value = 0.0128003832976;
    msg.timestep = 0.214151690203;

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
    msg.setTimeStamp(0.653278114127);
    msg.setSource(27423U);
    msg.setSourceEntity(100U);
    msg.setDestination(30769U);
    msg.setDestinationEntity(208U);
    msg.type = 90U;
    msg.reason = 114U;
    msg.value = 0.315019793489;
    msg.timestep = 0.728420992716;

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
    msg.setTimeStamp(0.451371563085);
    msg.setSource(44774U);
    msg.setSourceEntity(105U);
    msg.setDestination(18481U);
    msg.setDestinationEntity(50U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EORCZPOVKBEFMVRKNFZADCGPYTDTECJROLJXQPBMLVDEOXBXKILNRBUQMVNFFAPRNWWIPMSXJJXISNEEKQQHBCHWYUNHNVALWQGJDQIHAEYYQSTJDGBXZYOPJMAPXJYMWRUFZKWSBIHJXVZEFULZVNCHHUOMPGGXOHDFOSGAAICRGWTDYXS");
    tmp_msg_0.lat = 0.882908085538;
    tmp_msg_0.lon = 0.129265827121;
    tmp_msg_0.depth = 0.954793541348;
    tmp_msg_0.query_channel = 127U;
    tmp_msg_0.reply_channel = 126U;
    tmp_msg_0.transponder_delay = 176U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.849701426609;
    msg.y = 0.150595283729;
    msg.var_x = 0.207129204748;
    msg.var_y = 0.437539002419;
    msg.distance = 0.379522074101;

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
    msg.setTimeStamp(0.00560832672311);
    msg.setSource(6100U);
    msg.setSourceEntity(32U);
    msg.setDestination(36468U);
    msg.setDestinationEntity(233U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MEEHSDWXADFECOKKVWHOLQGRPAGDUDEAXZJFKEMOAWVMJKRXMMGKCHTWBGAUIJFLVNSPZPFVSRLZTHTSHJPCIIYKJCRCOFWRULTGJYVBGBNLPWMKYZWL");
    tmp_msg_0.lat = 0.9650068989;
    tmp_msg_0.lon = 0.413426309117;
    tmp_msg_0.depth = 0.776935465004;
    tmp_msg_0.query_channel = 102U;
    tmp_msg_0.reply_channel = 25U;
    tmp_msg_0.transponder_delay = 139U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.97105649587;
    msg.y = 0.548682320719;
    msg.var_x = 0.24922966966;
    msg.var_y = 0.275327557515;
    msg.distance = 0.897057847081;

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
    msg.setTimeStamp(0.170518423265);
    msg.setSource(41178U);
    msg.setSourceEntity(247U);
    msg.setDestination(56402U);
    msg.setDestinationEntity(7U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MJEGVSKJEHIXOEMXTVZKGRVEYKUYFXZCYMMICFNQVSNGVPGHROJWCKTNDAWNBFDEVMUNXCERZBVAGWQFVRPOAENTKZUIRDDYSTSFOZPZUIZLKAGBMJVNCHBAYZJNLFLQAWOKSMPZWJMVHSUOTWSCQWDKWAUYEIPOKGXXOHXAIDGLCSFHPUFTDQEUFAOP");
    tmp_msg_0.lat = 0.154735042155;
    tmp_msg_0.lon = 0.33218077179;
    tmp_msg_0.depth = 0.0104055417184;
    tmp_msg_0.query_channel = 171U;
    tmp_msg_0.reply_channel = 8U;
    tmp_msg_0.transponder_delay = 111U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.89602193786;
    msg.y = 0.0664562576968;
    msg.var_x = 0.627043970999;
    msg.var_y = 0.0125500366639;
    msg.distance = 0.628503146562;

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
    msg.setTimeStamp(0.775538967508);
    msg.setSource(39998U);
    msg.setSourceEntity(182U);
    msg.setDestination(11197U);
    msg.setDestinationEntity(205U);
    msg.state = 241U;

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
    msg.setTimeStamp(0.148555445433);
    msg.setSource(64361U);
    msg.setSourceEntity(163U);
    msg.setDestination(12571U);
    msg.setDestinationEntity(237U);
    msg.state = 128U;

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
    msg.setTimeStamp(0.110347450041);
    msg.setSource(59236U);
    msg.setSourceEntity(66U);
    msg.setDestination(1995U);
    msg.setDestinationEntity(29U);
    msg.state = 72U;

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
    msg.setTimeStamp(0.528932485439);
    msg.setSource(47558U);
    msg.setSourceEntity(121U);
    msg.setDestination(37245U);
    msg.setDestinationEntity(200U);
    msg.x = 0.232999394812;
    msg.y = 0.226470516853;
    msg.z = 0.178531669073;

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
    msg.setTimeStamp(0.19602277921);
    msg.setSource(26910U);
    msg.setSourceEntity(242U);
    msg.setDestination(21237U);
    msg.setDestinationEntity(8U);
    msg.x = 0.682837864919;
    msg.y = 0.832089098268;
    msg.z = 0.0971525791994;

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
    msg.setTimeStamp(0.565468287574);
    msg.setSource(26228U);
    msg.setSourceEntity(7U);
    msg.setDestination(33464U);
    msg.setDestinationEntity(41U);
    msg.x = 0.58277887308;
    msg.y = 0.999756209067;
    msg.z = 0.535016652511;

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
    msg.setTimeStamp(0.570481780017);
    msg.setSource(22072U);
    msg.setSourceEntity(150U);
    msg.setDestination(1867U);
    msg.setDestinationEntity(31U);
    msg.va = 0.386311059044;
    msg.aoa = 0.664193144033;
    msg.ssa = 0.0150194535522;

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
    msg.setTimeStamp(0.927786490902);
    msg.setSource(37810U);
    msg.setSourceEntity(232U);
    msg.setDestination(4878U);
    msg.setDestinationEntity(251U);
    msg.va = 0.512577797037;
    msg.aoa = 0.486464138886;
    msg.ssa = 0.658536446651;

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
    msg.setTimeStamp(0.763396957876);
    msg.setSource(58860U);
    msg.setSourceEntity(242U);
    msg.setDestination(6239U);
    msg.setDestinationEntity(181U);
    msg.va = 0.192727430415;
    msg.aoa = 0.156317541705;
    msg.ssa = 0.929445954296;

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
    msg.setTimeStamp(0.182432760275);
    msg.setSource(51699U);
    msg.setSourceEntity(4U);
    msg.setDestination(17662U);
    msg.setDestinationEntity(247U);
    msg.value = 0.909948389242;

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
    msg.setTimeStamp(0.607206273219);
    msg.setSource(19858U);
    msg.setSourceEntity(169U);
    msg.setDestination(18363U);
    msg.setDestinationEntity(26U);
    msg.value = 0.616213157144;

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
    msg.setTimeStamp(0.78527781634);
    msg.setSource(14047U);
    msg.setSourceEntity(123U);
    msg.setDestination(35426U);
    msg.setDestinationEntity(64U);
    msg.value = 0.862861058711;

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
    msg.setTimeStamp(0.362962561249);
    msg.setSource(47525U);
    msg.setSourceEntity(134U);
    msg.setDestination(34793U);
    msg.setDestinationEntity(189U);
    msg.value = 0.144374926354;
    msg.z_units = 251U;

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
    msg.setTimeStamp(0.69433155268);
    msg.setSource(2661U);
    msg.setSourceEntity(212U);
    msg.setDestination(40720U);
    msg.setDestinationEntity(44U);
    msg.value = 0.437743144326;
    msg.z_units = 17U;

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
    msg.setTimeStamp(0.323678547016);
    msg.setSource(47295U);
    msg.setSourceEntity(218U);
    msg.setDestination(52211U);
    msg.setDestinationEntity(157U);
    msg.value = 0.677379734721;
    msg.z_units = 93U;

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
    msg.setTimeStamp(0.616361883215);
    msg.setSource(3081U);
    msg.setSourceEntity(211U);
    msg.setDestination(20608U);
    msg.setDestinationEntity(66U);
    msg.value = 0.62197726703;
    msg.speed_units = 176U;

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
    msg.setTimeStamp(0.966906394513);
    msg.setSource(8733U);
    msg.setSourceEntity(129U);
    msg.setDestination(58754U);
    msg.setDestinationEntity(164U);
    msg.value = 0.828420870941;
    msg.speed_units = 249U;

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
    msg.setTimeStamp(0.295081787176);
    msg.setSource(38301U);
    msg.setSourceEntity(54U);
    msg.setDestination(54832U);
    msg.setDestinationEntity(229U);
    msg.value = 0.25948048714;
    msg.speed_units = 19U;

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
    msg.setTimeStamp(0.271258878005);
    msg.setSource(50735U);
    msg.setSourceEntity(101U);
    msg.setDestination(62473U);
    msg.setDestinationEntity(19U);
    msg.value = 0.350392374007;

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
    msg.setTimeStamp(0.198053214675);
    msg.setSource(54842U);
    msg.setSourceEntity(254U);
    msg.setDestination(39017U);
    msg.setDestinationEntity(141U);
    msg.value = 0.0215997063543;

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
    msg.setTimeStamp(0.266590046115);
    msg.setSource(45957U);
    msg.setSourceEntity(121U);
    msg.setDestination(23985U);
    msg.setDestinationEntity(128U);
    msg.value = 0.837580043142;

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
    msg.setTimeStamp(0.179834497183);
    msg.setSource(13958U);
    msg.setSourceEntity(252U);
    msg.setDestination(51041U);
    msg.setDestinationEntity(206U);
    msg.value = 0.425665421859;

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
    msg.setTimeStamp(0.286813425795);
    msg.setSource(33361U);
    msg.setSourceEntity(145U);
    msg.setDestination(15659U);
    msg.setDestinationEntity(0U);
    msg.value = 0.628517932444;

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
    msg.setTimeStamp(0.822009228663);
    msg.setSource(37892U);
    msg.setSourceEntity(152U);
    msg.setDestination(10942U);
    msg.setDestinationEntity(198U);
    msg.value = 0.594612794554;

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
    msg.setTimeStamp(0.010931483122);
    msg.setSource(33886U);
    msg.setSourceEntity(94U);
    msg.setDestination(41392U);
    msg.setDestinationEntity(242U);
    msg.value = 0.352558279715;

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
    msg.setTimeStamp(0.715904802605);
    msg.setSource(63992U);
    msg.setSourceEntity(76U);
    msg.setDestination(43729U);
    msg.setDestinationEntity(3U);
    msg.value = 0.287043183567;

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
    msg.setTimeStamp(0.25097719977);
    msg.setSource(15659U);
    msg.setSourceEntity(113U);
    msg.setDestination(61759U);
    msg.setDestinationEntity(38U);
    msg.value = 0.667794490441;

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
    msg.setTimeStamp(0.51650062966);
    msg.setSource(61936U);
    msg.setSourceEntity(135U);
    msg.setDestination(2387U);
    msg.setDestinationEntity(182U);
    msg.path_ref = 752905401U;
    msg.start_lat = 0.107556005261;
    msg.start_lon = 0.756317680487;
    msg.start_z = 0.0606786035337;
    msg.start_z_units = 15U;
    msg.end_lat = 0.0175302243445;
    msg.end_lon = 0.87187029907;
    msg.end_z = 0.208014575321;
    msg.end_z_units = 57U;
    msg.speed = 0.92907929034;
    msg.speed_units = 141U;
    msg.lradius = 0.112884527999;
    msg.flags = 30U;

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
    msg.setTimeStamp(0.927687645243);
    msg.setSource(18519U);
    msg.setSourceEntity(144U);
    msg.setDestination(28449U);
    msg.setDestinationEntity(77U);
    msg.path_ref = 3644461112U;
    msg.start_lat = 0.651477982322;
    msg.start_lon = 0.00468599524448;
    msg.start_z = 0.30553490972;
    msg.start_z_units = 98U;
    msg.end_lat = 0.80991680895;
    msg.end_lon = 0.196944287331;
    msg.end_z = 0.619111009163;
    msg.end_z_units = 156U;
    msg.speed = 0.6581964411;
    msg.speed_units = 111U;
    msg.lradius = 0.42428865503;
    msg.flags = 100U;

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
    msg.setTimeStamp(0.145121290725);
    msg.setSource(64823U);
    msg.setSourceEntity(77U);
    msg.setDestination(14950U);
    msg.setDestinationEntity(98U);
    msg.path_ref = 1506938885U;
    msg.start_lat = 0.0498779668754;
    msg.start_lon = 0.9164856906;
    msg.start_z = 0.58866340757;
    msg.start_z_units = 111U;
    msg.end_lat = 0.540934193507;
    msg.end_lon = 0.447387430737;
    msg.end_z = 0.183652375374;
    msg.end_z_units = 180U;
    msg.speed = 0.78499929234;
    msg.speed_units = 148U;
    msg.lradius = 0.656602260812;
    msg.flags = 188U;

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
    msg.setTimeStamp(0.962341323577);
    msg.setSource(28801U);
    msg.setSourceEntity(252U);
    msg.setDestination(27514U);
    msg.setDestinationEntity(206U);
    msg.x = 0.421156197296;
    msg.y = 0.366262765734;
    msg.z = 0.194928536628;
    msg.k = 0.996494992771;
    msg.m = 0.426946562691;
    msg.n = 0.072586424668;
    msg.flags = 175U;

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
    msg.setTimeStamp(0.0443746096199);
    msg.setSource(33287U);
    msg.setSourceEntity(174U);
    msg.setDestination(65105U);
    msg.setDestinationEntity(164U);
    msg.x = 0.432790702677;
    msg.y = 0.522243684267;
    msg.z = 0.0111169224912;
    msg.k = 0.537957321037;
    msg.m = 0.485196673333;
    msg.n = 0.0992824771748;
    msg.flags = 48U;

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
    msg.setTimeStamp(0.365545086167);
    msg.setSource(57154U);
    msg.setSourceEntity(103U);
    msg.setDestination(33410U);
    msg.setDestinationEntity(83U);
    msg.x = 0.0681942180612;
    msg.y = 0.227353882205;
    msg.z = 0.988937319996;
    msg.k = 0.0639391426894;
    msg.m = 0.467922143709;
    msg.n = 0.16797830211;
    msg.flags = 108U;

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
    msg.setTimeStamp(0.490594595611);
    msg.setSource(57020U);
    msg.setSourceEntity(117U);
    msg.setDestination(59648U);
    msg.setDestinationEntity(105U);
    msg.value = 0.92008649335;

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
    msg.setTimeStamp(0.03259999226);
    msg.setSource(61894U);
    msg.setSourceEntity(49U);
    msg.setDestination(20661U);
    msg.setDestinationEntity(227U);
    msg.value = 0.79230614709;

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
    msg.setTimeStamp(0.473025708638);
    msg.setSource(57198U);
    msg.setSourceEntity(38U);
    msg.setDestination(13271U);
    msg.setDestinationEntity(148U);
    msg.value = 0.735441568539;

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
    msg.setTimeStamp(0.500762926037);
    msg.setSource(15123U);
    msg.setSourceEntity(223U);
    msg.setDestination(51241U);
    msg.setDestinationEntity(60U);
    msg.u = 0.79117794577;
    msg.v = 0.270516106805;
    msg.w = 0.76074858067;
    msg.p = 0.146517205096;
    msg.q = 0.00725624972558;
    msg.r = 0.180341820279;
    msg.flags = 137U;

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
    msg.setTimeStamp(0.42304049823);
    msg.setSource(36173U);
    msg.setSourceEntity(85U);
    msg.setDestination(51348U);
    msg.setDestinationEntity(18U);
    msg.u = 0.886425719703;
    msg.v = 0.339046303383;
    msg.w = 0.170352243715;
    msg.p = 0.85634622314;
    msg.q = 0.891348485157;
    msg.r = 0.579733506252;
    msg.flags = 129U;

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
    msg.setTimeStamp(0.664753207096);
    msg.setSource(42591U);
    msg.setSourceEntity(94U);
    msg.setDestination(56258U);
    msg.setDestinationEntity(40U);
    msg.u = 0.0996798505405;
    msg.v = 0.491717663597;
    msg.w = 0.457866372272;
    msg.p = 0.804408762294;
    msg.q = 0.667734820782;
    msg.r = 0.891617824252;
    msg.flags = 3U;

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
    msg.setTimeStamp(0.723982826092);
    msg.setSource(29944U);
    msg.setSourceEntity(90U);
    msg.setDestination(59561U);
    msg.setDestinationEntity(190U);
    msg.path_ref = 2012468005U;
    msg.start_lat = 0.517650287999;
    msg.start_lon = 0.322925331505;
    msg.start_z = 0.882316285097;
    msg.start_z_units = 212U;
    msg.end_lat = 0.0541636994842;
    msg.end_lon = 0.699260559288;
    msg.end_z = 0.184666355688;
    msg.end_z_units = 9U;
    msg.lradius = 0.076250580059;
    msg.flags = 151U;
    msg.x = 0.547781277801;
    msg.y = 0.332314570913;
    msg.z = 0.240060091969;
    msg.vx = 0.164052976126;
    msg.vy = 0.546828204278;
    msg.vz = 0.16373386209;
    msg.course_error = 0.425927599888;
    msg.eta = 64639U;

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
    msg.setTimeStamp(0.26911005185);
    msg.setSource(63561U);
    msg.setSourceEntity(237U);
    msg.setDestination(29583U);
    msg.setDestinationEntity(235U);
    msg.path_ref = 3726441549U;
    msg.start_lat = 0.216595178845;
    msg.start_lon = 0.746231226872;
    msg.start_z = 0.0835789055151;
    msg.start_z_units = 31U;
    msg.end_lat = 0.226968736736;
    msg.end_lon = 0.896558411593;
    msg.end_z = 0.325781743549;
    msg.end_z_units = 162U;
    msg.lradius = 0.541141362123;
    msg.flags = 175U;
    msg.x = 0.41933104432;
    msg.y = 0.498091172277;
    msg.z = 0.339069925639;
    msg.vx = 0.481713323312;
    msg.vy = 0.478954839993;
    msg.vz = 0.886696513229;
    msg.course_error = 0.0614426899324;
    msg.eta = 10772U;

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
    msg.setTimeStamp(0.332075859847);
    msg.setSource(61298U);
    msg.setSourceEntity(66U);
    msg.setDestination(43604U);
    msg.setDestinationEntity(135U);
    msg.path_ref = 586744303U;
    msg.start_lat = 0.935260675375;
    msg.start_lon = 0.714388178884;
    msg.start_z = 0.592239942181;
    msg.start_z_units = 239U;
    msg.end_lat = 0.169261362708;
    msg.end_lon = 0.529267771056;
    msg.end_z = 0.522845622548;
    msg.end_z_units = 77U;
    msg.lradius = 0.345115965905;
    msg.flags = 229U;
    msg.x = 0.970041316082;
    msg.y = 0.0508012214867;
    msg.z = 0.177021603692;
    msg.vx = 0.0797613333773;
    msg.vy = 0.492548952565;
    msg.vz = 0.654262277202;
    msg.course_error = 0.254718744666;
    msg.eta = 9193U;

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
    msg.setTimeStamp(0.0422541340292);
    msg.setSource(33834U);
    msg.setSourceEntity(82U);
    msg.setDestination(25786U);
    msg.setDestinationEntity(115U);
    msg.k = 0.0630227427945;
    msg.m = 0.608224292329;
    msg.n = 0.90477653089;

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
    msg.setTimeStamp(0.622320656376);
    msg.setSource(23149U);
    msg.setSourceEntity(244U);
    msg.setDestination(58378U);
    msg.setDestinationEntity(158U);
    msg.k = 0.858564746981;
    msg.m = 0.495951050497;
    msg.n = 0.434840595391;

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
    msg.setTimeStamp(0.423223601251);
    msg.setSource(14850U);
    msg.setSourceEntity(90U);
    msg.setDestination(17909U);
    msg.setDestinationEntity(119U);
    msg.k = 0.304195713871;
    msg.m = 0.304816449485;
    msg.n = 0.669166815529;

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
    msg.setTimeStamp(0.46576856681);
    msg.setSource(64894U);
    msg.setSourceEntity(224U);
    msg.setDestination(11700U);
    msg.setDestinationEntity(155U);
    msg.p = 0.984498176769;
    msg.i = 0.239755306313;
    msg.d = 0.143952090328;
    msg.a = 0.90430528693;

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
    msg.setTimeStamp(0.259575217615);
    msg.setSource(25927U);
    msg.setSourceEntity(130U);
    msg.setDestination(15636U);
    msg.setDestinationEntity(149U);
    msg.p = 0.753862429867;
    msg.i = 0.622141725642;
    msg.d = 0.900472217404;
    msg.a = 0.660608932813;

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
    msg.setTimeStamp(0.223251671177);
    msg.setSource(33287U);
    msg.setSourceEntity(88U);
    msg.setDestination(26587U);
    msg.setDestinationEntity(72U);
    msg.p = 0.538143586344;
    msg.i = 0.913336424795;
    msg.d = 0.0889968272861;
    msg.a = 0.390985607133;

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
    msg.setTimeStamp(0.417942700973);
    msg.setSource(10300U);
    msg.setSourceEntity(182U);
    msg.setDestination(48088U);
    msg.setDestinationEntity(88U);
    msg.op = 251U;

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
    msg.setTimeStamp(0.426689262503);
    msg.setSource(26312U);
    msg.setSourceEntity(121U);
    msg.setDestination(58819U);
    msg.setDestinationEntity(6U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.849312492791);
    msg.setSource(22349U);
    msg.setSourceEntity(251U);
    msg.setDestination(37153U);
    msg.setDestinationEntity(33U);
    msg.op = 153U;

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
    msg.setTimeStamp(0.957403614335);
    msg.setSource(8714U);
    msg.setSourceEntity(62U);
    msg.setDestination(39957U);
    msg.setDestinationEntity(156U);
    msg.x = 0.754449376597;
    msg.y = 0.252464314029;
    msg.z = 0.911012846581;
    msg.vx = 0.0771584934561;
    msg.vy = 0.0193474534757;
    msg.vz = 0.0805261551284;
    msg.ax = 0.285415068993;
    msg.ay = 0.415328255478;
    msg.az = 0.341159598583;
    msg.flags = 26531U;

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
    msg.setTimeStamp(0.999410140837);
    msg.setSource(24726U);
    msg.setSourceEntity(0U);
    msg.setDestination(63247U);
    msg.setDestinationEntity(137U);
    msg.x = 0.531092354591;
    msg.y = 0.847099918352;
    msg.z = 0.0293321731116;
    msg.vx = 0.100489385857;
    msg.vy = 0.409479252505;
    msg.vz = 0.127436037751;
    msg.ax = 0.372274878982;
    msg.ay = 0.338470979485;
    msg.az = 0.934298844961;
    msg.flags = 50710U;

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
    msg.setTimeStamp(0.0148064804493);
    msg.setSource(28679U);
    msg.setSourceEntity(214U);
    msg.setDestination(14467U);
    msg.setDestinationEntity(193U);
    msg.x = 0.433170989904;
    msg.y = 0.527887994987;
    msg.z = 0.0201616883947;
    msg.vx = 0.911317864466;
    msg.vy = 0.0271148105032;
    msg.vz = 0.205103593285;
    msg.ax = 0.543573077107;
    msg.ay = 0.924597631931;
    msg.az = 0.0860975977301;
    msg.flags = 18810U;

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
    msg.setTimeStamp(0.102697002219);
    msg.setSource(37782U);
    msg.setSourceEntity(99U);
    msg.setDestination(53719U);
    msg.setDestinationEntity(76U);
    msg.value = 0.189844210357;

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
    msg.setTimeStamp(0.866078683415);
    msg.setSource(54727U);
    msg.setSourceEntity(53U);
    msg.setDestination(14765U);
    msg.setDestinationEntity(174U);
    msg.value = 0.125537947972;

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
    msg.setTimeStamp(0.141697538074);
    msg.setSource(25720U);
    msg.setSourceEntity(106U);
    msg.setDestination(22263U);
    msg.setDestinationEntity(83U);
    msg.value = 0.697260623421;

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
    msg.setTimeStamp(0.64723079581);
    msg.setSource(50944U);
    msg.setSourceEntity(26U);
    msg.setDestination(5373U);
    msg.setDestinationEntity(149U);
    msg.timeout = 7363U;
    msg.lat = 0.957969011365;
    msg.lon = 0.720323838136;
    msg.z = 0.179606389071;
    msg.z_units = 136U;
    msg.speed = 0.440925691101;
    msg.speed_units = 205U;
    msg.roll = 0.788246784629;
    msg.pitch = 0.598310088816;
    msg.yaw = 0.956975802781;
    msg.custom.assign("TDIHSLJEEDYIECVSZOUNQMTGZKYWUJAYHQFGGUXXSEBTGHONQCRXBUG");

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
    msg.setTimeStamp(0.105015335846);
    msg.setSource(19846U);
    msg.setSourceEntity(74U);
    msg.setDestination(52143U);
    msg.setDestinationEntity(239U);
    msg.timeout = 25971U;
    msg.lat = 0.479300445525;
    msg.lon = 0.626150387848;
    msg.z = 0.641738186923;
    msg.z_units = 85U;
    msg.speed = 0.912096198801;
    msg.speed_units = 203U;
    msg.roll = 0.249354197486;
    msg.pitch = 0.289851432704;
    msg.yaw = 0.852978094203;
    msg.custom.assign("TFSENAREHSHJGXRREZWHEXAFNGDHJPRQDILKYWAPSZZGRVMKHTPWTFLCCEAQNYQYIQVYRLPMYSRZKXQOWOHXLDASWUBJUGZFNSKMIYOHHWGFBBXHVOTZIGJTFTSCMMTFYYDNZGDKTDEMGUTLYJQBEVL");

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
    msg.setTimeStamp(0.939481647417);
    msg.setSource(51857U);
    msg.setSourceEntity(243U);
    msg.setDestination(9093U);
    msg.setDestinationEntity(141U);
    msg.timeout = 53014U;
    msg.lat = 0.548833257118;
    msg.lon = 0.0170601052031;
    msg.z = 0.0294802234332;
    msg.z_units = 14U;
    msg.speed = 0.354342625479;
    msg.speed_units = 60U;
    msg.roll = 0.321158893496;
    msg.pitch = 0.999656423537;
    msg.yaw = 0.452203546658;
    msg.custom.assign("BOSIRFZSWFJKODOHXUZVNCPNPDMTPKUZG");

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
    msg.setTimeStamp(0.263315313044);
    msg.setSource(15684U);
    msg.setSourceEntity(2U);
    msg.setDestination(62309U);
    msg.setDestinationEntity(5U);
    msg.timeout = 24640U;
    msg.lat = 0.758865487417;
    msg.lon = 0.555838773508;
    msg.z = 0.4718897485;
    msg.z_units = 167U;
    msg.speed = 0.566268653974;
    msg.speed_units = 79U;
    msg.duration = 37454U;
    msg.radius = 0.6919990223;
    msg.flags = 98U;
    msg.custom.assign("OOWTPPUYEDLWGEEPAWVVNVXLQMVWKYLDRUIIIDLFRJNAQOCJKUPHYSGPTXGQIDTQNXRZFZHSRAHZCFKTCFKMJKGAEAKI");

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
    msg.setTimeStamp(0.766110192011);
    msg.setSource(55620U);
    msg.setSourceEntity(1U);
    msg.setDestination(39410U);
    msg.setDestinationEntity(132U);
    msg.timeout = 58382U;
    msg.lat = 0.252150385046;
    msg.lon = 0.980258405236;
    msg.z = 0.863625644581;
    msg.z_units = 249U;
    msg.speed = 0.75364194324;
    msg.speed_units = 206U;
    msg.duration = 61163U;
    msg.radius = 0.854121191817;
    msg.flags = 225U;
    msg.custom.assign("FZQWMFJBPCINXDAQXUNBFTJHGOOSIJNDEJYKICHVVYU");

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
    msg.setTimeStamp(0.712797845328);
    msg.setSource(22306U);
    msg.setSourceEntity(200U);
    msg.setDestination(34455U);
    msg.setDestinationEntity(239U);
    msg.timeout = 8U;
    msg.lat = 0.922849432706;
    msg.lon = 0.611308832432;
    msg.z = 0.674117236772;
    msg.z_units = 88U;
    msg.speed = 0.609078269618;
    msg.speed_units = 248U;
    msg.duration = 43818U;
    msg.radius = 0.868035373472;
    msg.flags = 114U;
    msg.custom.assign("SKXAKUJXHNJNGEBSGBLVGWAZPIGDJLLKQAGTQKHUGLBFAWMORMBEQBHZSIQNZAFYTRWSZOGTGWKOJQDTGRYHMBFONJYUMLQVZXEZQSIFRFDICNDOOVYQOJSERHCNXMIMWKAWSCELFVXUIZYBEMSYTWMPTOHESJVMUJESOCCEZRWWNXKLCWRNDHPFNPFRVYZQVUUDAFIHAKHILCUPYAINYTJPUXPPMCKPBBDRYDJVDKVTZITEXUTCXVGALRDH");

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
    msg.setTimeStamp(0.857138973474);
    msg.setSource(3325U);
    msg.setSourceEntity(53U);
    msg.setDestination(12226U);
    msg.setDestinationEntity(57U);
    msg.custom.assign("XVABDFFSALIYCAMQOEPKJIRVCDJPXCMNLMGLKXMNLWUSPDNWVSXONJXBEJWBPZCIJIQZAZEOTMHPHGKJUNFIYDRBKTTOVODBTTBYYMNMLPZHFRDRXQWAZQYYLDQRSDUYGCIBQKGYVQJNPFRNROSGFWJOAEVWUUGEVMASTHBVMGXHXZ");

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
    msg.setTimeStamp(0.363213782593);
    msg.setSource(10708U);
    msg.setSourceEntity(32U);
    msg.setDestination(17834U);
    msg.setDestinationEntity(50U);
    msg.custom.assign("IBUAORWYRTAJGMLFENRAJMIBQEDOQCLYECSOSETFPZAITNOTXEMZRIKWDCXPZZJSNMGBVCFSVPPWAMZQUNCDUFZHQLDYUNDCEHBKUJCNCBIPIKMRUPVQJGEPWDAMSR");

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
    msg.setTimeStamp(0.0349969977717);
    msg.setSource(53889U);
    msg.setSourceEntity(230U);
    msg.setDestination(55242U);
    msg.setDestinationEntity(122U);
    msg.custom.assign("EJCWYTEALVOPMTBJNKAVRHZAWJZJNOYKYUKAQGZROCDDQZYNXFGZLZBBQKDDWLMXTLCPMPBGMMOPJTAMWFSJCVIDNEOKLNYBFWQNGXSFUSKIHGEXLEXRWVSEGREQCLPYVFPNSRAOANQXJIKFXMVCFDCBXYMX");

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
    msg.setTimeStamp(0.666299477485);
    msg.setSource(25649U);
    msg.setSourceEntity(33U);
    msg.setDestination(78U);
    msg.setDestinationEntity(114U);
    msg.timeout = 28887U;
    msg.lat = 0.612353368325;
    msg.lon = 0.000151383716644;
    msg.z = 0.81033357378;
    msg.z_units = 45U;
    msg.duration = 31752U;
    msg.speed = 0.380233281805;
    msg.speed_units = 210U;
    msg.type = 231U;
    msg.radius = 0.971469047319;
    msg.length = 0.510425716045;
    msg.bearing = 0.804479202178;
    msg.direction = 241U;
    msg.custom.assign("CAGQCULAWKWTSJKNMXBPRRUIJYINVEFAYCUDPZEXBDTHPGQMTDUAYBKUOJRGPJEFEDCYBXWQYCHJWFFMUMPPTIRNWIQVSZVLXNSUUZGOMCVIWYUYKGXNAEJKFSBXTMNSNRFUKSGEBWQOPMQGBREOEBLHTE");

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
    msg.setTimeStamp(0.701412627592);
    msg.setSource(54465U);
    msg.setSourceEntity(43U);
    msg.setDestination(9243U);
    msg.setDestinationEntity(56U);
    msg.timeout = 28008U;
    msg.lat = 0.0580029278168;
    msg.lon = 0.42736828159;
    msg.z = 0.371824422067;
    msg.z_units = 186U;
    msg.duration = 58305U;
    msg.speed = 0.984140008454;
    msg.speed_units = 40U;
    msg.type = 75U;
    msg.radius = 0.588848633343;
    msg.length = 0.669988859944;
    msg.bearing = 0.257275908306;
    msg.direction = 112U;
    msg.custom.assign("IURDJPANQQNZSIDGEJFASTVORLUZIBJFTPJIDRCFLKHKMQRAUHTWWXMFUXEWFHTQBCWKKCTURRPNAKETLYGXKUCFNUGPVXDOWXJRZBVEEWAHBYPYICIHRQNSHASLMPYYYMMDJSBGACYJSBUQJCIWMZQFWQEYPNYTVUGLGGBOCCBLTYPOXHMAMILZSEBGEMRHONK");

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
    msg.setTimeStamp(0.203800650921);
    msg.setSource(38845U);
    msg.setSourceEntity(202U);
    msg.setDestination(44953U);
    msg.setDestinationEntity(108U);
    msg.timeout = 38676U;
    msg.lat = 0.576001980526;
    msg.lon = 0.777714619845;
    msg.z = 0.219018321864;
    msg.z_units = 52U;
    msg.duration = 19886U;
    msg.speed = 0.490167086545;
    msg.speed_units = 87U;
    msg.type = 74U;
    msg.radius = 0.874317381294;
    msg.length = 0.271597829848;
    msg.bearing = 0.0361871231412;
    msg.direction = 122U;
    msg.custom.assign("OAAUWCHFLZBMUKNPCUBDPJWNLDYUTIAKNCQRDZEFOPDGHYNHPVMPENJIFLMSLEZORRXWREGX");

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
    msg.setTimeStamp(0.366060478987);
    msg.setSource(38610U);
    msg.setSourceEntity(85U);
    msg.setDestination(27201U);
    msg.setDestinationEntity(180U);
    msg.duration = 26630U;
    msg.custom.assign("NTAXRJNOXWPKGKDPJXFBLHAEEUVHNQGQYMKZISQUHKSHEZLWMMAXODTYZSZTHRPQTLVOUDJRUXLOVNAEDIGZEPLSIHIVSNUEOTBMMUFFIBCRVDTNLKIAFYWOYAQPGJVZZWMGKBOPWRTWRWA");

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
    msg.setTimeStamp(0.36346298141);
    msg.setSource(39291U);
    msg.setSourceEntity(65U);
    msg.setDestination(11129U);
    msg.setDestinationEntity(152U);
    msg.duration = 3108U;
    msg.custom.assign("IBOVIUGZNQOOASHJCPCGMADUAPNJLQROTZVRYEUFFWNGFTCVDTBZYLCSCOANQMRPCZXDGUOLVMKUWMKDESQH");

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
    msg.setTimeStamp(0.516849246671);
    msg.setSource(5096U);
    msg.setSourceEntity(172U);
    msg.setDestination(18453U);
    msg.setDestinationEntity(49U);
    msg.duration = 62780U;
    msg.custom.assign("PQRXKSMRXBZMGRUPWEDLEIXDUMWNENHNZLUAZCWYUUBZPCCELHDSIHQHIPQYDYNULAYMWOVAYFJCNVBJJMJMCIMXXSVQJNKVITZTFWZRFNATRJEGGPDPDLAKFWQKQHOAQSFWVTJPDBRFYFEATTJWUHDCLTFFSUEOYWXVDXBNSBOZLCKUJVLBYB");

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
    msg.setTimeStamp(0.33791598164);
    msg.setSource(38240U);
    msg.setSourceEntity(81U);
    msg.setDestination(47783U);
    msg.setDestinationEntity(87U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.878730062008;
    tmp_msg_0.speed_units = 141U;
    msg.control.set(tmp_msg_0);
    msg.duration = 17562U;
    msg.custom.assign("JMVBVACIYPTTWRKBDOFGYDNKGUZNKBOMDFKRTHGNHIMRSOQEJRCDNQBCIRUSKXIYZNCRWYWEBLNDOCTOTMVEVEWVSXGS");

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
    msg.setTimeStamp(0.624421974294);
    msg.setSource(23510U);
    msg.setSourceEntity(26U);
    msg.setDestination(43353U);
    msg.setDestinationEntity(14U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.0733260672417;
    msg.control.set(tmp_msg_0);
    msg.duration = 57923U;
    msg.custom.assign("PMSRMVEQGZRWNNDLPCPKDMYPUJWASFLGJBMINZFLVYIGEPLOBYXHHTQMVTIXUJRNUKUWCFDCLTQDHBYPXBJXJQZNELTZUESCQRQRGWKHIAKTJDCZLLLRIVEZMWQKSABAUIOSNCDGOISAYGHONBEQBYYNYDBPFIFAAJHIFGYHOAPWUPXNTBXOUVSKRGTXRTDMOFFFWQUXDWUXVBKCWAGMFILJAMZXVETWEYVCOZOKRNKCGHETQVZDPRZO");

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
    msg.setTimeStamp(0.315133233797);
    msg.setSource(32397U);
    msg.setSourceEntity(95U);
    msg.setDestination(8495U);
    msg.setDestinationEntity(69U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.352041083076;
    msg.control.set(tmp_msg_0);
    msg.duration = 51639U;
    msg.custom.assign("DNVSZTYHIKMXGTQQDEZMLJMYTTCTCKGRRHUWUOAYNNFMVCGWXZLRYOZGFYOPPEDRVYWAJSFEULITGKPQYHQIAQWMGWYAHDBCUWTNSJSPMDHJNFADNWVEJQLWFBDIBZVGOUKNEATKGOHMDEIZTRCTSAOGVIAJCZLQRIBXKJPRKEBMLZAXEWLUSPKXXBHCJXSQYRICCLFWZEOFRQKUISOJUNHXSVVDICAPJVXOUFNBKBBSBMHPZDHQFLUVY");

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
    msg.setTimeStamp(0.515131653525);
    msg.setSource(20723U);
    msg.setSourceEntity(244U);
    msg.setDestination(56728U);
    msg.setDestinationEntity(184U);
    msg.timeout = 10743U;
    msg.lat = 0.0427999052922;
    msg.lon = 0.804564831062;
    msg.z = 0.818225838256;
    msg.z_units = 252U;
    msg.speed = 0.515953593704;
    msg.speed_units = 96U;
    msg.bearing = 0.834713550187;
    msg.cross_angle = 0.344224578668;
    msg.width = 0.156625326627;
    msg.length = 0.165520916129;
    msg.hstep = 0.751362458256;
    msg.coff = 113U;
    msg.alternation = 228U;
    msg.flags = 170U;
    msg.custom.assign("EGXNSRWHPVJIOJYGGPQMWWUVOPVKKMSCHZIHMYSRGOPQXLSUXSUENZ");

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
    msg.setTimeStamp(0.86225049796);
    msg.setSource(44110U);
    msg.setSourceEntity(232U);
    msg.setDestination(17906U);
    msg.setDestinationEntity(151U);
    msg.timeout = 38411U;
    msg.lat = 0.499082701747;
    msg.lon = 0.085415065336;
    msg.z = 0.280586892077;
    msg.z_units = 74U;
    msg.speed = 0.228511957298;
    msg.speed_units = 34U;
    msg.bearing = 0.429141641368;
    msg.cross_angle = 0.095896098224;
    msg.width = 0.156053707105;
    msg.length = 0.766847690749;
    msg.hstep = 0.110643862946;
    msg.coff = 26U;
    msg.alternation = 94U;
    msg.flags = 176U;
    msg.custom.assign("YNEYXHHEQODMZFHCXNOKRYAQGBGLITEABVQENNUSELKBTSINXCDUJMIJALWYFMFZAYXIFKPTNPQHGHBAQVSTWSZCMNAPEMLSRRTUVEKGRGUZOIWDPIXPJWUKBHUSSPPQOCPMNARVIIGQSOEALTHXDBHGEVC");

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
    msg.setTimeStamp(0.275950180033);
    msg.setSource(39714U);
    msg.setSourceEntity(207U);
    msg.setDestination(45574U);
    msg.setDestinationEntity(151U);
    msg.timeout = 4623U;
    msg.lat = 0.827228055044;
    msg.lon = 0.200558659975;
    msg.z = 0.150968276269;
    msg.z_units = 189U;
    msg.speed = 0.863694950527;
    msg.speed_units = 239U;
    msg.bearing = 0.262351868629;
    msg.cross_angle = 0.0167523382963;
    msg.width = 0.749089602558;
    msg.length = 0.11041968681;
    msg.hstep = 0.271515021018;
    msg.coff = 55U;
    msg.alternation = 202U;
    msg.flags = 16U;
    msg.custom.assign("LWHNBSADZMMMJSYOGPYUPSOEUHROODVYOQEUKIXJMAWGHKQLJPW");

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
    msg.setTimeStamp(0.237926962931);
    msg.setSource(44713U);
    msg.setSourceEntity(159U);
    msg.setDestination(21650U);
    msg.setDestinationEntity(190U);
    msg.timeout = 61499U;
    msg.lat = 0.0904981364645;
    msg.lon = 0.865160916674;
    msg.z = 0.350395986494;
    msg.z_units = 230U;
    msg.speed = 0.308636584188;
    msg.speed_units = 238U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.165566255135;
    tmp_msg_0.y = 0.843824871591;
    tmp_msg_0.z = 0.697714418757;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SYTLSSZLUSWRPBHLLIIHNKYIUTRIDODERFPGZHICCVCYRWXEKFNHXKOYOKVVZWSNLNRGHCBFPDPCOQOCYQJAQBCXPUSPHOWEZDLTHELKITJGYV");

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
    msg.setTimeStamp(0.705416669704);
    msg.setSource(50916U);
    msg.setSourceEntity(208U);
    msg.setDestination(35236U);
    msg.setDestinationEntity(35U);
    msg.timeout = 17476U;
    msg.lat = 0.577366840252;
    msg.lon = 0.14201122942;
    msg.z = 0.954475783366;
    msg.z_units = 118U;
    msg.speed = 0.485086372015;
    msg.speed_units = 137U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.371712626037;
    tmp_msg_0.y = 0.0242720488126;
    tmp_msg_0.z = 0.0274776343918;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WHLMYXSTGRHNZPCHTNROMAOOPSNHLYIXODCGVYHCUKPUUGWJGCUVXKDOJXYQIPEBSVDINSYIMKNLUAIVXEIFBKRBTNYKEPVVJAEEBELDHSCOZFJBOSDCRHDCZTSSFPTXJFQPFNAMMWYSHOAJRBT");

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
    msg.setTimeStamp(0.704688035621);
    msg.setSource(49080U);
    msg.setSourceEntity(158U);
    msg.setDestination(16524U);
    msg.setDestinationEntity(141U);
    msg.timeout = 28066U;
    msg.lat = 0.516345054493;
    msg.lon = 0.258190436665;
    msg.z = 0.793080733797;
    msg.z_units = 12U;
    msg.speed = 0.114210817099;
    msg.speed_units = 250U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.549810781051;
    tmp_msg_0.y = 0.647729829705;
    tmp_msg_0.z = 0.848239687672;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VBHVENGUTBTNLSPVMSTDGEYSTXIDCCIDHCIZWQLWFBZZKHYUBDPJLLRGTFPJRSFQQWTQCUOZQXHLIIKGDLQEYWTLFUBGDGLQMAEOYDWRZJODVWKVAOXZFJPUTQARBPCIGSUHRTOSZHJPVMGNYFCAVXXOPCCKBXIEXRBKPRNJEQVRMOAWKUYFMTURDXFAZJEEMGHNEKS");

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
    msg.setTimeStamp(0.366786393131);
    msg.setSource(28683U);
    msg.setSourceEntity(137U);
    msg.setDestination(46468U);
    msg.setDestinationEntity(93U);
    msg.x = 0.558622328656;
    msg.y = 0.985331360783;
    msg.z = 0.336713210963;

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
    msg.setTimeStamp(0.228576832391);
    msg.setSource(46688U);
    msg.setSourceEntity(70U);
    msg.setDestination(49735U);
    msg.setDestinationEntity(0U);
    msg.x = 0.296155312907;
    msg.y = 0.377292415884;
    msg.z = 0.210193072519;

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
    msg.setTimeStamp(0.756109014171);
    msg.setSource(54298U);
    msg.setSourceEntity(173U);
    msg.setDestination(337U);
    msg.setDestinationEntity(91U);
    msg.x = 0.343046176764;
    msg.y = 0.00344261685708;
    msg.z = 0.363717019183;

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
    msg.setTimeStamp(0.108725837151);
    msg.setSource(23918U);
    msg.setSourceEntity(38U);
    msg.setDestination(50352U);
    msg.setDestinationEntity(78U);
    msg.timeout = 65358U;
    msg.lat = 0.416123344879;
    msg.lon = 0.233232913877;
    msg.z = 0.587737539155;
    msg.z_units = 127U;
    msg.amplitude = 0.397741064559;
    msg.pitch = 0.384278620662;
    msg.speed = 0.272713285154;
    msg.speed_units = 0U;
    msg.custom.assign("IJVMNAUEXWFBKEJMBDRUGPKCKCHXHJJIPOWHRRNJFFEIOAGWKFWRA");

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
    msg.setTimeStamp(0.498978339267);
    msg.setSource(41507U);
    msg.setSourceEntity(209U);
    msg.setDestination(41363U);
    msg.setDestinationEntity(10U);
    msg.timeout = 47829U;
    msg.lat = 0.920730337587;
    msg.lon = 0.127833298742;
    msg.z = 0.379033016141;
    msg.z_units = 231U;
    msg.amplitude = 0.379730382368;
    msg.pitch = 0.164404687399;
    msg.speed = 0.553279006943;
    msg.speed_units = 39U;
    msg.custom.assign("SVALJTOGPGBPMCEMUYQKBJHCRIGQETOVTTWBHAUYHVMEXZFWUJPYPTQHRUPTOSKEQYKSGNABCMJZLZVAZIQOBFPZKEZVQWCHOKHQKXVNEFKJYWQPSWOFIIHINLLKKBXWULAGVCIRYYDB");

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
    msg.setTimeStamp(0.417982029764);
    msg.setSource(33227U);
    msg.setSourceEntity(199U);
    msg.setDestination(40491U);
    msg.setDestinationEntity(168U);
    msg.timeout = 57850U;
    msg.lat = 0.214570183352;
    msg.lon = 0.22133087164;
    msg.z = 0.272871043549;
    msg.z_units = 96U;
    msg.amplitude = 0.86329833088;
    msg.pitch = 0.0172384459454;
    msg.speed = 0.189736371318;
    msg.speed_units = 225U;
    msg.custom.assign("QUPTWKFVEMNIWRNCXGIQQVWMXLLIHTWNRTLXPIIVOHITSBYDRNYHYHLFHCXAKQMVKOUSFYRZGDBMPPIAYEAZGLSFETPAOYDRLKOQHIBEXJVGDTNNPDFZMCRCVJMWZBEUYADVRDWQCJWYGXADFJCDAAXPZTTQMVBHZEACUPBFKLCKWDUIMKKKUPZSZBQLNOBHWCXVNUEMJTOOMUBONRGFGSCLFSWEV");

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
    msg.setTimeStamp(0.644646215931);
    msg.setSource(35220U);
    msg.setSourceEntity(165U);
    msg.setDestination(4215U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.654791566294);
    msg.setSource(8779U);
    msg.setSourceEntity(172U);
    msg.setDestination(9005U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.456882166233);
    msg.setSource(462U);
    msg.setSourceEntity(88U);
    msg.setDestination(49045U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.688993322387);
    msg.setSource(9592U);
    msg.setSourceEntity(223U);
    msg.setDestination(64055U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.550642832446;
    msg.lon = 0.725004645554;
    msg.z = 0.861077487801;
    msg.z_units = 90U;
    msg.radius = 0.542494553084;
    msg.duration = 9226U;
    msg.speed = 0.252942303157;
    msg.speed_units = 227U;
    msg.custom.assign("ZZGCADQIYHUXALQISZBDATRLCVVAHFZLRGGWERWBTWJTCLNFFIUWBMRMATEDKFHMCIANPFAONWIJLNIOYWXZJEGASSTRZSOFLBMMPBCNJHYTXXMGVJYBYQBJOLBHFP");

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
    msg.setTimeStamp(0.594159972243);
    msg.setSource(53401U);
    msg.setSourceEntity(103U);
    msg.setDestination(39832U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.0544408830136;
    msg.lon = 0.549673396381;
    msg.z = 0.616126990425;
    msg.z_units = 96U;
    msg.radius = 0.168401238153;
    msg.duration = 64527U;
    msg.speed = 0.100568407058;
    msg.speed_units = 124U;
    msg.custom.assign("QEAHRSTJPGANSGCIXEXZJODIYQIOYFJBXTESAMYLZLBCNVCGFPGWFGZMRBYUSPXMZTELVFUKUZPYCLWRQHPWKRYSSNRHFUHBNZIDWUJROEDAWWGTZHXKXZDCKXOCDFDJUULRIIQQEILTUVHNSSWXDJLRGKVWELJOHBNENBWDVSJBBULXAVBDCREVHTNVMPGPVTKYYROTOPHMDMATHAZQFWISQQTMKGJGAXQYKKNOJZMLEFMKIFPVCACC");

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
    msg.setTimeStamp(0.889153696217);
    msg.setSource(5194U);
    msg.setSourceEntity(17U);
    msg.setDestination(18805U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.393838927925;
    msg.lon = 0.228664708344;
    msg.z = 0.371180147262;
    msg.z_units = 152U;
    msg.radius = 0.895256213268;
    msg.duration = 12798U;
    msg.speed = 0.442414512992;
    msg.speed_units = 214U;
    msg.custom.assign("BSCHVRCBGJKSTVZSIKLSMMDUYJGFNNYLLAPMFHXOSIILOVPGQRBXWUUVOAETWZDTROGHBXPIFMAHCIBAGFLGWTCDMUWHYERMMBDCKDXTWLVBQWBIEBAPSKJYFEFRJXCMEOTQJKAWFZORVDYGTJEEFQQJYVRZCP");

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
    msg.setTimeStamp(0.762656455548);
    msg.setSource(43854U);
    msg.setSourceEntity(186U);
    msg.setDestination(65206U);
    msg.setDestinationEntity(69U);
    msg.timeout = 4091U;
    msg.flags = 164U;
    msg.lat = 0.453535571978;
    msg.lon = 0.0393747039695;
    msg.start_z = 0.342990347212;
    msg.start_z_units = 110U;
    msg.end_z = 0.0864866498271;
    msg.end_z_units = 142U;
    msg.radius = 0.770322876992;
    msg.speed = 0.922020445708;
    msg.speed_units = 164U;
    msg.custom.assign("AKGBMJNBAVQBFEOLRIMHQNBGGYOVPOAPMRAZEZNKABPHSKEOIRCUCWQULEJZMZOAJTZVQSXEDYYAULNUNDTCCIKEDXGBQQUPBYKDXSNYRGMSCIAYWRKXPQBGPZCRLJURMHOFENLIXDNECUHFZLMFMJGBUSHYLNDSKKYISVOPTETTVALHMRTSWPWWQSAVIICVWDEJQLVSPJOVXFQDPXYFDMZ");

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
    msg.setTimeStamp(0.286807550132);
    msg.setSource(61068U);
    msg.setSourceEntity(10U);
    msg.setDestination(48895U);
    msg.setDestinationEntity(176U);
    msg.timeout = 18153U;
    msg.flags = 171U;
    msg.lat = 0.103487600239;
    msg.lon = 0.597767768262;
    msg.start_z = 0.0287031981046;
    msg.start_z_units = 18U;
    msg.end_z = 0.774559177436;
    msg.end_z_units = 147U;
    msg.radius = 0.903554416302;
    msg.speed = 0.608166401798;
    msg.speed_units = 54U;
    msg.custom.assign("LLLDSXBWBAFRSJXVMOIKXEQQIHVRKTZYQFSJEDJUKDSICCUHULFUGFGGJSNLPLNNIFCAZ");

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
    msg.setTimeStamp(0.33203246098);
    msg.setSource(41269U);
    msg.setSourceEntity(248U);
    msg.setDestination(8673U);
    msg.setDestinationEntity(89U);
    msg.timeout = 42264U;
    msg.flags = 192U;
    msg.lat = 0.972775656633;
    msg.lon = 0.789393874494;
    msg.start_z = 0.235841315537;
    msg.start_z_units = 129U;
    msg.end_z = 0.0690580617603;
    msg.end_z_units = 122U;
    msg.radius = 0.82218473334;
    msg.speed = 0.675144534123;
    msg.speed_units = 84U;
    msg.custom.assign("FVLVPKYXLAFCPDJJFQ");

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
    msg.setTimeStamp(0.421378579271);
    msg.setSource(40120U);
    msg.setSourceEntity(57U);
    msg.setDestination(7601U);
    msg.setDestinationEntity(153U);
    msg.timeout = 50134U;
    msg.lat = 0.22402117791;
    msg.lon = 0.216618229892;
    msg.z = 0.258566693302;
    msg.z_units = 89U;
    msg.speed = 0.073640584714;
    msg.speed_units = 138U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.875996712465;
    tmp_msg_0.y = 0.268050128014;
    tmp_msg_0.z = 0.0177295552782;
    tmp_msg_0.t = 0.425251401472;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UFNWVKTAQELQMOIJLKCAJNOHUYIKTWQILPFIDYZBOCTMPQLL");

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
    msg.setTimeStamp(0.0401650916952);
    msg.setSource(10032U);
    msg.setSourceEntity(6U);
    msg.setDestination(5021U);
    msg.setDestinationEntity(206U);
    msg.timeout = 12052U;
    msg.lat = 0.940464440769;
    msg.lon = 0.342131433375;
    msg.z = 0.153992899653;
    msg.z_units = 77U;
    msg.speed = 0.0745844138743;
    msg.speed_units = 25U;
    msg.custom.assign("JNSXRITSCFFRZUJNVSLZWXHQHYRBSACCDENHIQCIHNPZWNXCWKVSMGWLHXGICRQCXVRACMLWYDTDPDIUGDUIYBIQOAECMOPQMPSXQGFE");

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
    msg.setTimeStamp(0.0922514677536);
    msg.setSource(1097U);
    msg.setSourceEntity(79U);
    msg.setDestination(4002U);
    msg.setDestinationEntity(81U);
    msg.timeout = 31917U;
    msg.lat = 0.495284635002;
    msg.lon = 0.0337470637388;
    msg.z = 0.819532690104;
    msg.z_units = 162U;
    msg.speed = 0.830628253946;
    msg.speed_units = 24U;
    msg.custom.assign("GJKUXZNFQEOQNAUREOXLETPRSEPRHPJAIACZIGYFRY");

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
    msg.setTimeStamp(0.327743101133);
    msg.setSource(7891U);
    msg.setSourceEntity(28U);
    msg.setDestination(46038U);
    msg.setDestinationEntity(51U);
    msg.x = 0.928042834263;
    msg.y = 0.619257268893;
    msg.z = 0.685853189568;
    msg.t = 0.682573751169;

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
    msg.setTimeStamp(0.544577914129);
    msg.setSource(562U);
    msg.setSourceEntity(81U);
    msg.setDestination(62708U);
    msg.setDestinationEntity(227U);
    msg.x = 0.575345669614;
    msg.y = 0.472137956932;
    msg.z = 0.0096382013129;
    msg.t = 0.0868757882424;

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
    msg.setTimeStamp(0.118305159219);
    msg.setSource(9809U);
    msg.setSourceEntity(141U);
    msg.setDestination(33065U);
    msg.setDestinationEntity(144U);
    msg.x = 0.629960105895;
    msg.y = 0.668296929341;
    msg.z = 0.522326159587;
    msg.t = 0.731515096717;

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
    msg.setTimeStamp(0.0907978645528);
    msg.setSource(23196U);
    msg.setSourceEntity(53U);
    msg.setDestination(55183U);
    msg.setDestinationEntity(243U);
    msg.timeout = 65137U;
    msg.name.assign("JKAGRPAXGSYLVFWSIYISICKJYFUGHXIDVNYUSJINQXCTRQDNEYWPLHZVWGMTLUAQXCMALBIVQDDJVXBYBWTVXKNCE");
    msg.custom.assign("BBQMLUTRJVQLLCAYCXHLJENCJRDIKUTKTHPNBTWHILOFGQALGTPAGYCONZFLDIBOYUAKIPWNPECRFASSTPLDHDUFHRCZMCPJMUGQUWEKJJAEZGDIVXRZB");

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
    msg.setTimeStamp(0.723191575343);
    msg.setSource(27945U);
    msg.setSourceEntity(164U);
    msg.setDestination(52141U);
    msg.setDestinationEntity(199U);
    msg.timeout = 47287U;
    msg.name.assign("ANGEGXRXFGZRFEGYIOVUEMBYFWCWUGRHUAZVASMICLLVMSWJWGIVZZFLQRCVTNEEQPPZAUNQRIOJYJJYNDTXSVLOXBEEQKBFCGROTCPXUBWXODBAWONIUQSWPTDELFHKMECSDNZ");
    msg.custom.assign("SNMQRZDRKUWNYPCHZVUBZWFLVAMEYEKYXOJFGLLYSABKIBIRJUMUEBMTFKKPQZCHEHSAVHDPDDKRJCNXHOBJJVGXZDJSEGAUPGEOWWGJCQDHWIOQRNFLMPSRWWPSQVFQHTCIKMFLPGKCKZMDRWUPRXTAHXNGTMHGPYZTAOLVGCTBNAMAUXJWTHTEJYNAFFQLIOMARONLDBOPLRIJVQXXKBQYNVUVDXOOIWYCZIENZIGCQXCSSIDBEZV");

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
    msg.setTimeStamp(0.583415517636);
    msg.setSource(59863U);
    msg.setSourceEntity(180U);
    msg.setDestination(64329U);
    msg.setDestinationEntity(235U);
    msg.timeout = 15705U;
    msg.name.assign("GMZFSTPFAMIECHWVDFVFCRDOARYKLQNZTAXKDJYQURRKELHXUICKKCHNUXZWQVZRCFFRHBALBENNIXUEGMJPCBCSUXIIABLLDGOQPLESLPQNWZDVTWZVQYZVXJMWRR");
    msg.custom.assign("OSVVLVQRAMIIDPMMUFYFXHQGMAWWCWTVPIWEORXQDPYVDHMUVSVEIDHVHRIDBKTYBYDZTQPNWSGSXAXQLTKAOXDNJKDSIHKGVYEUNXFMRZBGKBAKKHEZOXCIUWZLNLJIJCBCAWPFJGSBBAEEMZYNDUJWWRELOOJRSSYXKQXTLOCGUZCBKUPINOMBQCBGLP");

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
    msg.setTimeStamp(0.921555587332);
    msg.setSource(53645U);
    msg.setSourceEntity(252U);
    msg.setDestination(39976U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.613783611867;
    msg.lon = 0.492400866887;
    msg.z = 0.401738467797;
    msg.z_units = 197U;
    msg.speed = 0.192749170835;
    msg.speed_units = 51U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.659476423348;
    tmp_msg_0.y = 0.323645506829;
    tmp_msg_0.z = 0.316081510112;
    tmp_msg_0.t = 0.52637450934;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 1505U;
    tmp_msg_1.off_x = 0.0155807213282;
    tmp_msg_1.off_y = 0.655249767364;
    tmp_msg_1.off_z = 0.454386192771;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.560637356295;
    msg.custom.assign("FSEZBSHWCRDHNCZOCUDTBABWDLLATCFRHPGNIFYQBNGNRISJRKNIHCXMJTTVOJVUOUPYXMSTYAKWLNSKVDTPUOWBOMKOQMJWKCFHQDVDYLSYXVBEIBRQDZQTLKTPUAZTYJLRFLGVJYHIJILOGU");

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
    msg.setTimeStamp(0.467698635551);
    msg.setSource(11229U);
    msg.setSourceEntity(21U);
    msg.setDestination(9661U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.762692442445;
    msg.lon = 0.944347733589;
    msg.z = 0.854325277684;
    msg.z_units = 33U;
    msg.speed = 0.622154090784;
    msg.speed_units = 90U;
    msg.start_time = 0.86541564281;
    msg.custom.assign("RWFCUSRSMKBYUVREGBWCWNLWNTYJRJUTKXGLLJOCIOFSIGEOCEJNVADXNMPRJOFEPIABKAXTZSMGWKEAZDCUMKFXRLXMRRZHHQDNXYRCUOBZYVWKDDGGSPHEPFAKNNVPWAJFCZSIEGFOQUMZLQTBBGTGLDEWJNZOBPA");

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
    msg.setTimeStamp(0.726332234884);
    msg.setSource(3785U);
    msg.setSourceEntity(103U);
    msg.setDestination(21740U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.971255182015;
    msg.lon = 0.663659254872;
    msg.z = 0.821636184055;
    msg.z_units = 36U;
    msg.speed = 0.657474818731;
    msg.speed_units = 134U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.294290090283;
    tmp_msg_0.y = 0.241588617112;
    tmp_msg_0.z = 0.421579645175;
    tmp_msg_0.t = 0.502312639305;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 61324U;
    tmp_msg_1.off_x = 0.41171132274;
    tmp_msg_1.off_y = 0.48373172458;
    tmp_msg_1.off_z = 0.805741740948;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.96524425096;
    msg.custom.assign("TVVWOYKUBHRTCNJZAYISZAFEFDHWKRDJAKRFBHEMZFGELPCCRCYOJUXESIZSXDYCUOBMYCRFOBPNYEWOPQBPWNCFDDHXHKVGPXVLEFSAWTVMWLUKQVZUDGAMGQWINGPQMJELXIJBQWOGZRZECUXOKHPZVMJ");

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
    msg.setTimeStamp(0.294673095059);
    msg.setSource(27948U);
    msg.setSourceEntity(37U);
    msg.setDestination(37018U);
    msg.setDestinationEntity(32U);
    msg.vid = 43207U;
    msg.off_x = 0.185110908943;
    msg.off_y = 0.57690259249;
    msg.off_z = 0.283497383047;

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
    msg.setTimeStamp(0.60977633114);
    msg.setSource(42511U);
    msg.setSourceEntity(51U);
    msg.setDestination(51811U);
    msg.setDestinationEntity(51U);
    msg.vid = 5435U;
    msg.off_x = 0.420287083201;
    msg.off_y = 0.208576941728;
    msg.off_z = 0.648440819993;

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
    msg.setTimeStamp(0.612795837727);
    msg.setSource(50680U);
    msg.setSourceEntity(183U);
    msg.setDestination(12228U);
    msg.setDestinationEntity(136U);
    msg.vid = 15742U;
    msg.off_x = 0.20233255814;
    msg.off_y = 0.4954882699;
    msg.off_z = 0.434397987905;

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
    msg.setTimeStamp(0.618670759117);
    msg.setSource(46909U);
    msg.setSourceEntity(88U);
    msg.setDestination(59050U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.554450280865);
    msg.setSource(6464U);
    msg.setSourceEntity(208U);
    msg.setDestination(36574U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.63676708065);
    msg.setSource(32154U);
    msg.setSourceEntity(70U);
    msg.setDestination(1536U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.208588898951);
    msg.setSource(18874U);
    msg.setSourceEntity(210U);
    msg.setDestination(28754U);
    msg.setDestinationEntity(113U);
    msg.mid = 56764U;

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
    msg.setTimeStamp(0.784665323595);
    msg.setSource(41857U);
    msg.setSourceEntity(36U);
    msg.setDestination(15497U);
    msg.setDestinationEntity(205U);
    msg.mid = 55074U;

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
    msg.setTimeStamp(0.223760838749);
    msg.setSource(19898U);
    msg.setSourceEntity(230U);
    msg.setDestination(21129U);
    msg.setDestinationEntity(160U);
    msg.mid = 52463U;

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
    msg.setTimeStamp(0.879732500355);
    msg.setSource(59828U);
    msg.setSourceEntity(179U);
    msg.setDestination(29158U);
    msg.setDestinationEntity(113U);
    msg.state = 222U;
    msg.eta = 47311U;
    msg.info.assign("APDCFUTSDKESFZQFCMHFIMIHTYWZZERIQDLVENOUIKTKQHZMHNGPWMVFRLJMAUNQYJPCVCZHDEAUYDZSWFWGFLFIEDCWGYLOKVMMNBHIQOVOUACIUZYXALLGBTJJOUDUIHCRAKMYUFJ");

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
    msg.setTimeStamp(0.182552344463);
    msg.setSource(12224U);
    msg.setSourceEntity(224U);
    msg.setDestination(24876U);
    msg.setDestinationEntity(25U);
    msg.state = 2U;
    msg.eta = 4736U;
    msg.info.assign("LWDETRYSCFHAONVEBLVEKTQDQLMMAGDDOJCOGHYDLPNRZXXACXAWQOUZZBYKJSJPIIBRXTWCOBOOTTDTQZJBGJTPDRHZQATEWURAKDYYBBSFEJMJWGLKZJPVIUAXNLHCZYKUZGBGQVMSK");

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
    msg.setTimeStamp(0.540945811103);
    msg.setSource(37205U);
    msg.setSourceEntity(188U);
    msg.setDestination(32116U);
    msg.setDestinationEntity(140U);
    msg.state = 176U;
    msg.eta = 17095U;
    msg.info.assign("XVRWUBABIGLQFZZOHFZJDMHPOGDCLEEIGNCHTYARIU");

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
    msg.setTimeStamp(0.00167813116753);
    msg.setSource(11462U);
    msg.setSourceEntity(138U);
    msg.setDestination(13713U);
    msg.setDestinationEntity(65U);
    msg.system = 11659U;
    msg.duration = 33631U;
    msg.speed = 0.274106385266;
    msg.speed_units = 178U;
    msg.x = 0.953925982651;
    msg.y = 0.945874383786;
    msg.z = 0.583044945296;
    msg.z_units = 68U;

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
    msg.setTimeStamp(0.457773830779);
    msg.setSource(55363U);
    msg.setSourceEntity(36U);
    msg.setDestination(22645U);
    msg.setDestinationEntity(13U);
    msg.system = 7986U;
    msg.duration = 62152U;
    msg.speed = 0.248645726035;
    msg.speed_units = 223U;
    msg.x = 0.0713183725176;
    msg.y = 0.259953726503;
    msg.z = 0.632928963431;
    msg.z_units = 234U;

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
    msg.setTimeStamp(0.400024102407);
    msg.setSource(58698U);
    msg.setSourceEntity(83U);
    msg.setDestination(57262U);
    msg.setDestinationEntity(171U);
    msg.system = 38264U;
    msg.duration = 60223U;
    msg.speed = 0.436480398108;
    msg.speed_units = 48U;
    msg.x = 0.807691540335;
    msg.y = 0.572158530319;
    msg.z = 0.438267153593;
    msg.z_units = 180U;

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
    msg.setTimeStamp(0.741410758544);
    msg.setSource(49818U);
    msg.setSourceEntity(92U);
    msg.setDestination(58284U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.638099751765;
    msg.lon = 0.360645382104;
    msg.speed = 0.962849800994;
    msg.speed_units = 3U;
    msg.duration = 45791U;
    msg.sys_a = 9488U;
    msg.sys_b = 59703U;
    msg.move_threshold = 0.956478073808;

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
    msg.setTimeStamp(0.287095615062);
    msg.setSource(23749U);
    msg.setSourceEntity(133U);
    msg.setDestination(61944U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.472941731488;
    msg.lon = 0.448471121994;
    msg.speed = 0.601579652706;
    msg.speed_units = 127U;
    msg.duration = 10530U;
    msg.sys_a = 7223U;
    msg.sys_b = 15359U;
    msg.move_threshold = 0.292830285345;

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
    msg.setTimeStamp(0.761643531099);
    msg.setSource(17048U);
    msg.setSourceEntity(27U);
    msg.setDestination(8932U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.252238770705;
    msg.lon = 0.243512208883;
    msg.speed = 0.914917128474;
    msg.speed_units = 222U;
    msg.duration = 65367U;
    msg.sys_a = 57429U;
    msg.sys_b = 20760U;
    msg.move_threshold = 0.532373146788;

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
    msg.setTimeStamp(0.787971924384);
    msg.setSource(7118U);
    msg.setSourceEntity(146U);
    msg.setDestination(12210U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.358912526338;
    msg.lon = 0.719993942086;
    msg.z = 0.327227334545;
    msg.z_units = 123U;
    msg.speed = 0.295572922367;
    msg.speed_units = 216U;
    msg.custom.assign("SREQEBWFULTYYZTRILKDBMHTODMMLIMGKTGCDOXBSGTFUAMHBGLHXEPUSGKYLGBLZMANSMQVSARXLNDDUIAZQDBVWOVOXIORHMHYJLQBMAQIRHOZEAKPNXYHNFKPSHJJUMERGKSJFQBKRXXVTUVZIGFZCZEVCIJCOLPXR");

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
    msg.setTimeStamp(0.438393967997);
    msg.setSource(38569U);
    msg.setSourceEntity(190U);
    msg.setDestination(52894U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.461932276851;
    msg.lon = 0.266312845365;
    msg.z = 0.649623040439;
    msg.z_units = 38U;
    msg.speed = 0.458823262707;
    msg.speed_units = 13U;
    msg.custom.assign("ACFHPZVDDYCRFOEEIZBBWNSNVDPTUCYGMEMKQBMV");

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
    msg.setTimeStamp(0.739639473123);
    msg.setSource(57438U);
    msg.setSourceEntity(176U);
    msg.setDestination(1439U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.232075514335;
    msg.lon = 0.103177284559;
    msg.z = 0.404388376813;
    msg.z_units = 19U;
    msg.speed = 0.474569989912;
    msg.speed_units = 239U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.559251121742;
    tmp_msg_0.lon = 0.986431699639;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("HSNUTLKCFYKHYDPOQDVYZEJUBZQPXZWMOFLZIZMIWNECBXSLXTFRDOJGVKNMMHJTXWGJBTVJTPQPBECQBAFRROLHTJMHIEMAHAXHEIMODALLBSSENJCWQIVUIZAREKPNNAKUBIAFJWLGKCSMASALSPSMRRCVDGGEVNGVOK");

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
    msg.setTimeStamp(0.655115954236);
    msg.setSource(37911U);
    msg.setSourceEntity(73U);
    msg.setDestination(40320U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.391123465171;
    msg.lon = 0.633270768144;

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
    msg.setTimeStamp(0.0154051378648);
    msg.setSource(33557U);
    msg.setSourceEntity(148U);
    msg.setDestination(61057U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.758174397996;
    msg.lon = 0.758852061598;

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
    msg.setTimeStamp(0.00247933286968);
    msg.setSource(10166U);
    msg.setSourceEntity(66U);
    msg.setDestination(19834U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.771751014349;
    msg.lon = 0.500865113574;

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
    msg.setTimeStamp(0.585243529544);
    msg.setSource(16056U);
    msg.setSourceEntity(77U);
    msg.setDestination(58422U);
    msg.setDestinationEntity(41U);
    msg.timeout = 9451U;
    msg.lat = 0.244712943675;
    msg.lon = 0.777642203045;
    msg.z = 0.113273952873;
    msg.z_units = 211U;
    msg.pitch = 0.690659549216;
    msg.amplitude = 0.328139532313;
    msg.duration = 59042U;
    msg.speed = 0.463303715108;
    msg.speed_units = 32U;
    msg.radius = 0.274022664832;
    msg.direction = 122U;
    msg.custom.assign("MJZWCCGGZALGPKIEMTBMDZZDQVTFJHIFPFLFWDLIXLJWDESJUQANYTUAYMGLXDKXMBOBCVAPXPCWQLVVRHBRPFCSGSOOXJCQMPARQNVLYXXISRUOTJWWUJBASWZONHMTYEUJXIYSBOERKRNQCGROJABIEPUAVHTLGNUZQZNUYRHHQWKYMWFHSSHUACRZOXGYRBYDSKEKKZNEJQYOMKTDFKA");

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
    msg.setTimeStamp(0.975063649039);
    msg.setSource(10794U);
    msg.setSourceEntity(100U);
    msg.setDestination(61303U);
    msg.setDestinationEntity(240U);
    msg.timeout = 54235U;
    msg.lat = 0.622209244685;
    msg.lon = 0.0463527650835;
    msg.z = 0.247242978391;
    msg.z_units = 142U;
    msg.pitch = 0.395090070737;
    msg.amplitude = 0.994650442191;
    msg.duration = 48857U;
    msg.speed = 0.941729209493;
    msg.speed_units = 178U;
    msg.radius = 0.910343851579;
    msg.direction = 112U;
    msg.custom.assign("JRXYAKCQNNPOAHRTIGMDHWBKEHIIJGZYDVCSEFOASBJFPNGAFWMLJDKCCVUCLOLOXLVMVRIYCLORSSSGCNYMNFNDWKPHLXIFPHBWMWVSTHDZDFEZBZKVKQEXXTCFAADRAQBIQABPRMOFGJZJEGMWUPPYUWEHFLQWIVIGUDJZZUR");

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
    msg.setTimeStamp(0.516078372049);
    msg.setSource(8356U);
    msg.setSourceEntity(75U);
    msg.setDestination(35061U);
    msg.setDestinationEntity(21U);
    msg.timeout = 38292U;
    msg.lat = 0.0948833342852;
    msg.lon = 0.907993244367;
    msg.z = 0.85622355747;
    msg.z_units = 42U;
    msg.pitch = 0.816431717596;
    msg.amplitude = 0.702446456241;
    msg.duration = 47794U;
    msg.speed = 0.985805603585;
    msg.speed_units = 33U;
    msg.radius = 0.250517439557;
    msg.direction = 75U;
    msg.custom.assign("XQNUMHVPORYVAGYJBZKMXLGWJFINPYVKHCBRNDXLXEZBJUSIERHNCGUPIPBKHJUWNERFBONKTACLMTNUOKYCXMILUTAAICWYLPOSDLOTRKFYUMPJEACNSQTUCMCFQGZMJRVIL");

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
    msg.setTimeStamp(0.161840018208);
    msg.setSource(48291U);
    msg.setSourceEntity(175U);
    msg.setDestination(14512U);
    msg.setDestinationEntity(201U);
    msg.formation_name.assign("PLTDFQHXVZCBPFJAGCHZURQHVFDKYPGRODYNUTMDOPJYGKNNEHUUTSSZWOWRYIMDWFWNYCXURZRMKCYCUHQUMJFRPKKOCQLNXLVBELZIXJFBYXBWAOBVV");
    msg.reference_frame = 154U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52901U;
    tmp_msg_0.off_x = 0.77108815078;
    tmp_msg_0.off_y = 0.780427326671;
    tmp_msg_0.off_z = 0.868481264397;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("SIUSWTUBQGCFPFIOIKDODJFUPKTZBGQYDQERTSMZFXJFQPJMLFEXALZQXXZNRSOGHCAHUPYHGAXVGVWOSCUTSRKPTRONCGRQLGQEOCKBVWVURENVXWWZLEYIEANAWBMHCCMTZKAIMDHNCHJBMUNRYBFPKHOPLSZVSD");

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
    msg.setTimeStamp(0.415050057368);
    msg.setSource(10587U);
    msg.setSourceEntity(53U);
    msg.setDestination(45328U);
    msg.setDestinationEntity(254U);
    msg.formation_name.assign("SBVBXQCGDKFRMCCRFYTHFINEIAZEZVXMTWRYGHMJQPHLHTVQYCJQWCWYHLSQPESXXESWNEJJXGVNTEFAWUFQMORNMDKEQJOENWSOATNOZHPDYSPDBBERNNVDCWOKVZD");
    msg.reference_frame = 223U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 51587U;
    tmp_msg_0.off_x = 0.875104689197;
    tmp_msg_0.off_y = 0.924240804793;
    tmp_msg_0.off_z = 0.594132412358;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BVOXYYMHOFCXUKRLUNUIJTKEZIVLGWVFOKKUFFRLRXUEGVGARZCWSGDXBSQCEKOCPXJLMEQOYPOEZPORFSVWSEMTTCPTTMNDBCBFNVGTLKRHVMLQJCBGQGGZNOEDIIBIYWAUCABCJPYIDTLYAHSITGQKJEP");

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
    msg.setTimeStamp(0.0616484736537);
    msg.setSource(51212U);
    msg.setSourceEntity(245U);
    msg.setDestination(10372U);
    msg.setDestinationEntity(232U);
    msg.formation_name.assign("FVFJMVAJTXKNPAIJBPQVUMZWCQKWGBDMIMBUQIVBSELQLLQGFNOLRYMWOHZCIELVSSTIDTUGGQXOLYZQFRKHURPYPOOPWHLCRWDVKQTOFUSR");
    msg.reference_frame = 144U;
    msg.custom.assign("GOYNXWDQDVHZPUDVFMBROVKWIPTMOIFWEABWLOKCRALEFXETDEJQXSHTUVKLXHMILYXHBWGPQJRMZVOXKJCXPAYMCUHSLZSMLARTGPHVXULFNQMNRUPCMTTANLSMCQGHTDZEDEAW");

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
    msg.setTimeStamp(0.680824870521);
    msg.setSource(25407U);
    msg.setSourceEntity(48U);
    msg.setDestination(44791U);
    msg.setDestinationEntity(156U);
    msg.group_name.assign("HPUSOIXLERIIRJSJUMSDVHDZPNHLGCMVFAPNMTXJYOYYJUGBKEZHMVGQSTFJMBRNBBEQFOOEOLXKA");
    msg.formation_name.assign("UCSUGPCCNVEDSWGNFGLKJWVWMIKJKURYTQQHJYAMXDMULDEHLJPTXVNTHEYLOJESUQBNTX");
    msg.plan_id.assign("AOHTJWIJHGBQCNLCDDZKAZFQKXNKEFRDNWSLKFBGTPRYBEHYNAZJNBDXWDHNQMFMBQCVIILUWOYUDVFQDOBVHYCQOPOQCLCJHFZYILRUXRYIVAWOUQXVZYLTIEZWPXMXIMJCEXGJKKUJKXBGSIRVEKXVMBZAFNVHSEPPNHITOKWZDGTPRBLDXESGLRTMPHSWRMCYDHAAYJNWMLKGUPAFUUVBTQETPMSEOJCPAGNYFCL");
    msg.description.assign("ZAEZJLHJZFNAUKRIWSBFRLNOGCYNSYDHCCNIRNUENLKKMDUBCGKFWXHFAXEMLOKCIEXKYIUADMACNHZEQPAEFQYOWWSEZPCRFDQTBOHDXDFQIBPMJPOFKAJITGDPITMCLVVOPQTXNPZEOGTRAQCWRGAXPMSKSYUNIZYEBBYYYWHOLGRXAGVPKRUSBHE");
    msg.leader_speed = 0.951751828779;
    msg.leader_bank_lim = 0.42991907959;
    msg.pos_sim_err_lim = 0.328624188056;
    msg.pos_sim_err_wrn = 0.844118625813;
    msg.pos_sim_err_timeout = 769U;
    msg.converg_max = 0.897785422521;
    msg.converg_timeout = 40385U;
    msg.comms_timeout = 43325U;
    msg.turb_lim = 0.742131037144;
    msg.custom.assign("CPFYFUDYXUFSETJLQMRRKLBIYUMHPDVLQPHKLGO");

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
    msg.setTimeStamp(0.917907630677);
    msg.setSource(61281U);
    msg.setSourceEntity(21U);
    msg.setDestination(47564U);
    msg.setDestinationEntity(218U);
    msg.group_name.assign("XPALSTCOPLZWWLUPATUFEQAGSWFLWKKBZGVTXTQDEQCVCIKZXHMVXMBAUIOHKOCWVOHONXQWMNNOWKPMWSUQWPETGUIPLDGEVZMZMCXYRNJIERVBXDORELGJQBGYJHRNMLLFZVHYDNTHSAJYDYFSBMFOZLBDFSMGYAKHOENPCREPHTAXDRWXIQBKVUCCMTVNUYRDFSEAKIFEIKJKSXGJVUOQQNJRRZSJLTJAIDDRGYBC");
    msg.formation_name.assign("EQLEOOUYJSFQCJYMIRUVBLFCQETBGZBFZLWJHHEDLOXBWNAUNZRPUHCUKOALVGCTYMIOXKDVSVWTILKYPDEGXXBXLMVAWAQNBNQWTHMSLAFNNGYSCAQZDDYGWZGIOBRRRADMRVBMFUKUXJQOZKIITDRPYSFIOLZRKHPWIZSHWSFCWVZQHUYUSXJDMNLDRCGVEEUFKTKTXNCGHWJSQYKFVXPPXVAGAPHTJT");
    msg.plan_id.assign("JNXFNABKYJAZIBVUZOFMUMTDMBHFFWNOMOAOOVXCHGEGTHMMXVL");
    msg.description.assign("SLXKZICWNBQDSQLDDHIUPCFKQOFIBEUTEUDWVSZGDUGKGNFBRJOHVMMLFKX");
    msg.leader_speed = 0.79804489228;
    msg.leader_bank_lim = 0.136983736818;
    msg.pos_sim_err_lim = 0.763658557493;
    msg.pos_sim_err_wrn = 0.414058628705;
    msg.pos_sim_err_timeout = 50431U;
    msg.converg_max = 0.241089715377;
    msg.converg_timeout = 1453U;
    msg.comms_timeout = 30729U;
    msg.turb_lim = 0.628595423918;
    msg.custom.assign("VMURGYTFWSY");

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
    msg.setTimeStamp(0.495138161605);
    msg.setSource(8582U);
    msg.setSourceEntity(71U);
    msg.setDestination(55561U);
    msg.setDestinationEntity(159U);
    msg.group_name.assign("BKCNTIUCJKNAQVBYANXJSCFMBEHOXGRZPLRWTQHMWZNXMUFFMSEYYJRHWNPZIQSXIWWXSVCFQXBMYLIBEMEBBUMEYDTKAUOYNJSGXVVBATHVHAHZGPDZIZYOTAKLHJRUBFDDDUKPAXDKLZAOVYESITGUPVEGGKQCGGCSUPWDOKJJNVSZISQKRHWFUGRRYOIONJFAOTEPCHMZRXQDVOPLDMQILRZXEJRDUNLQ");
    msg.formation_name.assign("ZKHESRRIXMWXJBAMANTUPELWMHBSFTIXKOIMHQKDGHXBQEKWHEADVTKGYHQQLIWNZFMDJTPCPLBDNHBYIMVNRFMOYCOACMLQJDWJLOQVIFSYZLFCTPJAWXXVYDLWIMAZZELMLCAHTEURKGREFGUXPDGYGKJNKRJREOFRKWNUUOYFJOBBZRIUOXWSUZPTIUOSCZPQCBSVNXCNSSDDBQGNFVLTNPSWJTPFTYCZOCSYJEAHG");
    msg.plan_id.assign("WIARQXVKGINDATAJKVUMNGJSBAZZPAWMOSMPWFCZSBQYEYTNZEXYRAFOTVUHJVXLCQDKPWBRYE");
    msg.description.assign("CMNWSLFCERYSAHANHMWCKRMHOFBPUHLXXEQVUAWLDVEVGJVFTMLLUBVNBMRYYZLDJRNSOHMHCCYKPQVEZSDWKXWRTNRUZKIJHEXALEGOZCNPIUPMYBQUFSDLXWCXZGACIWXOTTHKPJADWXBIUBQOFSVDP");
    msg.leader_speed = 0.250160802925;
    msg.leader_bank_lim = 0.785710646421;
    msg.pos_sim_err_lim = 0.370287390955;
    msg.pos_sim_err_wrn = 0.788670599491;
    msg.pos_sim_err_timeout = 7626U;
    msg.converg_max = 0.243575281459;
    msg.converg_timeout = 47705U;
    msg.comms_timeout = 13042U;
    msg.turb_lim = 0.367426892651;
    msg.custom.assign("CYIITIDVAGBVGIGJCURWEMTAMZAUMRXTLJORWNTCFKAPXTLBOKZJLOEVOIGHMNENBUWVYBDYBCSSVXZLCIFAZHCZNTRDIEKHTPHHSXMBVAJZSAIDAXHKJQYNJOZ");

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
    msg.setTimeStamp(0.561527084225);
    msg.setSource(31273U);
    msg.setSourceEntity(235U);
    msg.setDestination(20064U);
    msg.setDestinationEntity(192U);
    msg.control_src = 53646U;
    msg.control_ent = 108U;
    msg.timeout = 0.27512971113;
    msg.loiter_radius = 0.658577010341;
    msg.altitude_interval = 0.262091563663;

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
    msg.setTimeStamp(0.281660459942);
    msg.setSource(2797U);
    msg.setSourceEntity(129U);
    msg.setDestination(30657U);
    msg.setDestinationEntity(167U);
    msg.control_src = 48075U;
    msg.control_ent = 119U;
    msg.timeout = 0.308848713324;
    msg.loiter_radius = 0.841841150559;
    msg.altitude_interval = 0.928291813401;

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
    msg.setTimeStamp(0.756653249923);
    msg.setSource(37053U);
    msg.setSourceEntity(216U);
    msg.setDestination(5113U);
    msg.setDestinationEntity(69U);
    msg.control_src = 36448U;
    msg.control_ent = 175U;
    msg.timeout = 0.571000844646;
    msg.loiter_radius = 0.339151627545;
    msg.altitude_interval = 0.606641649199;

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
    msg.setTimeStamp(0.480692596367);
    msg.setSource(53212U);
    msg.setSourceEntity(20U);
    msg.setDestination(6044U);
    msg.setDestinationEntity(185U);
    msg.flags = 178U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.621109387625;
    tmp_msg_0.speed_units = 231U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0477725773666;
    tmp_msg_1.z_units = 165U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.663582169874;
    msg.lon = 0.492918170172;
    msg.radius = 0.597066208969;

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
    msg.setTimeStamp(0.0441721424917);
    msg.setSource(61708U);
    msg.setSourceEntity(209U);
    msg.setDestination(25465U);
    msg.setDestinationEntity(224U);
    msg.flags = 30U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.474097427671;
    tmp_msg_0.speed_units = 252U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0925911677627;
    tmp_msg_1.z_units = 239U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.704024153387;
    msg.lon = 0.883435036162;
    msg.radius = 0.827925725298;

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
    msg.setTimeStamp(0.969443727614);
    msg.setSource(17009U);
    msg.setSourceEntity(19U);
    msg.setDestination(35040U);
    msg.setDestinationEntity(57U);
    msg.flags = 237U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.290733607514;
    tmp_msg_0.speed_units = 224U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0349977170594;
    tmp_msg_1.z_units = 189U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0592514033722;
    msg.lon = 0.452926435856;
    msg.radius = 0.856189372486;

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
    msg.setTimeStamp(0.206814884314);
    msg.setSource(11882U);
    msg.setSourceEntity(58U);
    msg.setDestination(42014U);
    msg.setDestinationEntity(30U);
    msg.control_src = 34026U;
    msg.control_ent = 132U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 242U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.786926683801;
    tmp_tmp_msg_0_0.speed_units = 163U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.324537625746;
    tmp_tmp_msg_0_1.z_units = 225U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.373818655397;
    tmp_msg_0.lon = 0.91345857977;
    tmp_msg_0.radius = 0.753579360143;
    msg.reference.set(tmp_msg_0);
    msg.state = 27U;
    msg.proximity = 194U;

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
    msg.setTimeStamp(0.917620878007);
    msg.setSource(24113U);
    msg.setSourceEntity(118U);
    msg.setDestination(52959U);
    msg.setDestinationEntity(195U);
    msg.control_src = 11159U;
    msg.control_ent = 10U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 73U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.319644473047;
    tmp_tmp_msg_0_0.speed_units = 12U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.363576435837;
    tmp_tmp_msg_0_1.z_units = 47U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.158177756842;
    tmp_msg_0.lon = 0.529917145417;
    tmp_msg_0.radius = 0.719290398835;
    msg.reference.set(tmp_msg_0);
    msg.state = 48U;
    msg.proximity = 161U;

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
    msg.setTimeStamp(0.363602405372);
    msg.setSource(53386U);
    msg.setSourceEntity(141U);
    msg.setDestination(22173U);
    msg.setDestinationEntity(132U);
    msg.control_src = 60489U;
    msg.control_ent = 132U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 105U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.182801003469;
    tmp_tmp_msg_0_0.speed_units = 208U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.542295991368;
    tmp_tmp_msg_0_1.z_units = 152U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.836708713866;
    tmp_msg_0.lon = 0.279342054401;
    tmp_msg_0.radius = 0.559086917002;
    msg.reference.set(tmp_msg_0);
    msg.state = 93U;
    msg.proximity = 13U;

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
    msg.setTimeStamp(0.584860950169);
    msg.setSource(35112U);
    msg.setSourceEntity(27U);
    msg.setDestination(34367U);
    msg.setDestinationEntity(68U);
    msg.ax_cmd = 0.580040172929;
    msg.ay_cmd = 0.596449056985;
    msg.az_cmd = 0.634184413284;
    msg.ax_des = 0.361245547744;
    msg.ay_des = 0.620155512534;
    msg.az_des = 0.714103866953;
    msg.virt_err_x = 0.931716943363;
    msg.virt_err_y = 0.960102590946;
    msg.virt_err_z = 0.399825714777;
    msg.surf_fdbk_x = 0.984210813193;
    msg.surf_fdbk_y = 0.159905540829;
    msg.surf_fdbk_z = 0.392753547846;
    msg.surf_unkn_x = 0.751144223962;
    msg.surf_unkn_y = 0.654044995292;
    msg.surf_unkn_z = 0.0443076334452;
    msg.ss_x = 0.729910221049;
    msg.ss_y = 0.936433383263;
    msg.ss_z = 0.440012011583;

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
    msg.setTimeStamp(0.382520905941);
    msg.setSource(32598U);
    msg.setSourceEntity(248U);
    msg.setDestination(10249U);
    msg.setDestinationEntity(41U);
    msg.ax_cmd = 0.0860819645663;
    msg.ay_cmd = 0.725082615184;
    msg.az_cmd = 0.312319467859;
    msg.ax_des = 0.256793227081;
    msg.ay_des = 0.471401222184;
    msg.az_des = 0.534969401992;
    msg.virt_err_x = 0.609174681666;
    msg.virt_err_y = 0.928832790243;
    msg.virt_err_z = 0.476059632615;
    msg.surf_fdbk_x = 0.0729908149194;
    msg.surf_fdbk_y = 0.175872273545;
    msg.surf_fdbk_z = 0.996437350987;
    msg.surf_unkn_x = 0.946871641498;
    msg.surf_unkn_y = 0.808078846461;
    msg.surf_unkn_z = 0.154814627467;
    msg.ss_x = 0.781717713127;
    msg.ss_y = 0.579352364128;
    msg.ss_z = 0.764590882565;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("SJWJVTGSAEVFFWVQBPKLVSXCXNVPLDHHCZJVMLUPZCDHBSBTQETRZATTEKBWXTUYBMUGHJKEHKPOQGNKPLYMDJAYOHATSXIHQLPR");
    tmp_msg_0.dist = 0.440353800741;
    tmp_msg_0.err = 0.611894493617;
    tmp_msg_0.ctrl_imp = 0.676270963616;
    tmp_msg_0.rel_dir_x = 0.33573552766;
    tmp_msg_0.rel_dir_y = 0.704876857856;
    tmp_msg_0.rel_dir_z = 0.222524364218;
    tmp_msg_0.err_x = 0.708675419672;
    tmp_msg_0.err_y = 0.722969982148;
    tmp_msg_0.err_z = 0.602913806035;
    tmp_msg_0.rf_err_x = 0.437546289307;
    tmp_msg_0.rf_err_y = 0.0306276619147;
    tmp_msg_0.rf_err_z = 0.673381892065;
    tmp_msg_0.rf_err_vx = 0.495622046861;
    tmp_msg_0.rf_err_vy = 0.887091335092;
    tmp_msg_0.rf_err_vz = 0.054555925466;
    tmp_msg_0.ss_x = 0.0626284956644;
    tmp_msg_0.ss_y = 0.00719329843885;
    tmp_msg_0.ss_z = 0.708340889525;
    tmp_msg_0.virt_err_x = 0.403494132104;
    tmp_msg_0.virt_err_y = 0.00803333644636;
    tmp_msg_0.virt_err_z = 0.628097049646;
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
    msg.setTimeStamp(0.712305759023);
    msg.setSource(25272U);
    msg.setSourceEntity(211U);
    msg.setDestination(6580U);
    msg.setDestinationEntity(253U);
    msg.ax_cmd = 0.696478144281;
    msg.ay_cmd = 0.073128162975;
    msg.az_cmd = 0.477996764682;
    msg.ax_des = 0.374622091275;
    msg.ay_des = 0.444166003811;
    msg.az_des = 0.602655195705;
    msg.virt_err_x = 0.569711377868;
    msg.virt_err_y = 0.624616509471;
    msg.virt_err_z = 0.0561549527991;
    msg.surf_fdbk_x = 0.631125085579;
    msg.surf_fdbk_y = 0.635765100233;
    msg.surf_fdbk_z = 0.561473060659;
    msg.surf_unkn_x = 0.534382323586;
    msg.surf_unkn_y = 0.791474963284;
    msg.surf_unkn_z = 0.0475682536653;
    msg.ss_x = 0.592966816718;
    msg.ss_y = 0.229573046207;
    msg.ss_z = 0.311035391297;

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
    msg.setTimeStamp(0.125435887393);
    msg.setSource(35340U);
    msg.setSourceEntity(35U);
    msg.setDestination(18454U);
    msg.setDestinationEntity(68U);
    msg.s_id.assign("QGZJGTABZJJUYIHVIWEKJCTOZBIBQUZTBSILKTPKDTZMGKMPMYULAEURFHZFHABDHXWFWQMDITBNGAYFEXXIBUTQSBLDHGYMFTXKRBCDQPPDEVSCFNONVZGGMPEPNCCKNNHHPYIMAVWASJVOSLGEOGROMPQSNMSWVEQTERQOXAQRLC");
    msg.dist = 0.867018883291;
    msg.err = 0.280040996508;
    msg.ctrl_imp = 0.0424309968092;
    msg.rel_dir_x = 0.296743055168;
    msg.rel_dir_y = 0.366420721711;
    msg.rel_dir_z = 0.328467884844;
    msg.err_x = 0.711449602501;
    msg.err_y = 0.683483850788;
    msg.err_z = 0.149672243518;
    msg.rf_err_x = 0.819028188022;
    msg.rf_err_y = 0.811146818874;
    msg.rf_err_z = 0.340172028128;
    msg.rf_err_vx = 0.652873195807;
    msg.rf_err_vy = 0.535722436008;
    msg.rf_err_vz = 0.0205595642711;
    msg.ss_x = 0.682308112337;
    msg.ss_y = 0.300306953737;
    msg.ss_z = 0.210110959652;
    msg.virt_err_x = 0.201831522823;
    msg.virt_err_y = 0.444614071102;
    msg.virt_err_z = 0.578573372201;

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
    msg.setTimeStamp(0.716055685619);
    msg.setSource(47194U);
    msg.setSourceEntity(232U);
    msg.setDestination(8499U);
    msg.setDestinationEntity(189U);
    msg.s_id.assign("HBCZQEEBTTUKZJCVECCDDQYLGKVWPXLXXRHOMHKUITFFQPZTRPORSBORGLYMVQPFXCGXNNHCAFISYUVJMCCHNDQKGBSGOUGAJWWZLXJQURXRGANWMASONSKEMIFFEGVEGZTSISFROWHJODKVNEIBYQYWKEWFQYZNQQIHWYCTYDOOVAHCAEVLPVKFLRTNZMYWAIFMUJSGHBSUKTPXPJUALALWBBEUDHDMJNVZNIRUZIMSORJPLXPDYTLKDMJIXZ");
    msg.dist = 0.73454617185;
    msg.err = 0.0755243278309;
    msg.ctrl_imp = 0.104815110563;
    msg.rel_dir_x = 0.188297259485;
    msg.rel_dir_y = 0.352801181578;
    msg.rel_dir_z = 0.311580394426;
    msg.err_x = 0.440940682614;
    msg.err_y = 0.976368198045;
    msg.err_z = 0.036770779043;
    msg.rf_err_x = 0.606801752241;
    msg.rf_err_y = 0.559707714927;
    msg.rf_err_z = 0.490423451752;
    msg.rf_err_vx = 0.830396909392;
    msg.rf_err_vy = 0.321638125091;
    msg.rf_err_vz = 0.666775760724;
    msg.ss_x = 0.476132123141;
    msg.ss_y = 0.537282269434;
    msg.ss_z = 0.633502772209;
    msg.virt_err_x = 0.831958639065;
    msg.virt_err_y = 0.101148424458;
    msg.virt_err_z = 0.0528678892645;

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
    msg.setTimeStamp(0.710686603697);
    msg.setSource(23905U);
    msg.setSourceEntity(38U);
    msg.setDestination(21693U);
    msg.setDestinationEntity(150U);
    msg.s_id.assign("BPMDVKTQIWCDLWSTHVBKMGUAWKUNVEIYWYDMINMJWXKVLNWJDPNRXREOJIRGJZTIONTQZEDUKDAECFNHXADALOBMZBBGHEHGXACDCHPKFOWXLSUMAGLQHJPQERMRZXLFSNXROSYQBWOJSTHAVOCSLWPE");
    msg.dist = 0.0319911916467;
    msg.err = 0.17423464216;
    msg.ctrl_imp = 0.640282875921;
    msg.rel_dir_x = 0.663286659554;
    msg.rel_dir_y = 0.309828717491;
    msg.rel_dir_z = 0.0231613628695;
    msg.err_x = 0.560137638428;
    msg.err_y = 0.906761293918;
    msg.err_z = 0.926633785488;
    msg.rf_err_x = 0.947145517022;
    msg.rf_err_y = 0.12496969539;
    msg.rf_err_z = 0.657136730507;
    msg.rf_err_vx = 0.445663518754;
    msg.rf_err_vy = 0.703724078348;
    msg.rf_err_vz = 0.363700623895;
    msg.ss_x = 0.197834614303;
    msg.ss_y = 0.502009550545;
    msg.ss_z = 0.105831077124;
    msg.virt_err_x = 0.233095314908;
    msg.virt_err_y = 0.939461760824;
    msg.virt_err_z = 0.478432880305;

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
    msg.setTimeStamp(0.453175233783);
    msg.setSource(11394U);
    msg.setSourceEntity(242U);
    msg.setDestination(21676U);
    msg.setDestinationEntity(201U);
    msg.timeout = 61159U;
    msg.rpm = 0.00946861346119;
    msg.direction = 122U;
    msg.custom.assign("WPMUJYSMKTNUMCFBTGGMITKNUISOPVWNWBHRKLLWCBOIUXQSKHXJCUJPPALDQMHBHPMAYKRCWYBSTOVQXVBEFYKILDDFZKFVFZXSUUREVYUREAARADRIMCGNXOMUGZNJGBQZJCIRSFLOIMQJDQFLZXEWAZRWGHXYYSGDMIODFSZHRGLDEQHAOVDFAJNWXUVLYTNTCWEPXONHDVQPZPETLNQYSHJLKNBPWCEAITZOYCVSRBTJEAOVKGXGZBQ");

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
    msg.setTimeStamp(0.917591100476);
    msg.setSource(46235U);
    msg.setSourceEntity(5U);
    msg.setDestination(21115U);
    msg.setDestinationEntity(217U);
    msg.timeout = 15297U;
    msg.rpm = 0.0911219747326;
    msg.direction = 158U;
    msg.custom.assign("APWWTGOVZJRDSQPSQAQGBCYRTMOLRTRNKABZIDJJEOIBXPXIRLLQJUHNXOEFSUSVJWBMDWAMIFLXFJKLZCEQXZQGAHGWTOOPTXWVYMBKMUIEVZGEZCKKJYDCRSTBNGBHCILWEHVFQVMVYZPWLMCDQDRAGZNDCNHSJNOIDFYPUOBUTEBHHJRYPHSZ");

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
    msg.setTimeStamp(0.250593519684);
    msg.setSource(18488U);
    msg.setSourceEntity(48U);
    msg.setDestination(6955U);
    msg.setDestinationEntity(34U);
    msg.timeout = 41665U;
    msg.rpm = 0.397384473837;
    msg.direction = 157U;
    msg.custom.assign("UINLHGPNZNKDTFBIJFFZYXFEOXTWNVUJEKMXHKGSXSMKSRXMDSWFGVBKRAXARTEZPCITMPBLJUCBNRPOGCHZYIEFESPXVZVTESMWLJUGEHRZXQNKDCVULIVBDOXWRKPUTLWDZXJDUSQNLGOVQLMERTYWHJFVAHCDITOLLNURYWQSKTJMUVWCHKAAEIOYZYDAQRGOWBPAAGQBFDMOSZMJQQCUJLHPFAYQMRIBGBTKW");

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
    msg.setTimeStamp(0.204834509851);
    msg.setSource(13865U);
    msg.setSourceEntity(195U);
    msg.setDestination(25390U);
    msg.setDestinationEntity(69U);
    msg.formation_name.assign("NUUFBPPNCBX");
    msg.type = 16U;
    msg.op = 53U;
    msg.group_name.assign("HAKSFGRGJYPHZVNMNXBHOXROOJCZBHYGISTEDGSQUCQ");
    msg.plan_id.assign("VMWPIMNASYJVIQZVZLVRQUZNQGUKIIZWYRJUAHXOEIFTMUGUWPYNUPQRVCIHULKQCHSSFFLHKSFLZRKEJAZLOJQEDFMGFKSCNGNXWGRTXTIMMPTNGJWDSNASMAOWTLOCYUSDDHZXBHBMELEPINFBUEQZBKJEDBXFCYO");
    msg.description.assign("NVWXMLOMXVNIYQSWFI");
    msg.reference_frame = 150U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 8791U;
    tmp_msg_0.off_x = 0.523691555109;
    tmp_msg_0.off_y = 0.577532796673;
    tmp_msg_0.off_z = 0.447981728827;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.554520047134;
    msg.leader_speed_min = 0.733999685543;
    msg.leader_speed_max = 0.155847222256;
    msg.leader_alt_min = 0.327297920323;
    msg.leader_alt_max = 0.605526519618;
    msg.pos_sim_err_lim = 0.805083455604;
    msg.pos_sim_err_wrn = 0.486190419681;
    msg.pos_sim_err_timeout = 14916U;
    msg.converg_max = 0.956414721487;
    msg.converg_timeout = 62807U;
    msg.comms_timeout = 37944U;
    msg.turb_lim = 0.871422091167;
    msg.custom.assign("GECIITZUSRCHBDZCMRCYWKYTVZAAYKKSJUVOHBFZVDKLPEWLVNHONJDKAMRBZMFCXPQILSXMDPQXMKOODGTCUFUFMSMTGSNOIQBXPSGLKHJBYFMNTRGOCIBNQJVGEALSLONLHQDTYUNZJENULNXFPVEZSQNLPWCTMSTYRHMVHGRYOCSFXPQADAEIJABJRQOUQDFETHVWZUGRJXWIWWKBKPAFE");

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
    msg.setTimeStamp(0.00731957127935);
    msg.setSource(30300U);
    msg.setSourceEntity(234U);
    msg.setDestination(31443U);
    msg.setDestinationEntity(235U);
    msg.formation_name.assign("LQIQJUVPGCCXMVUOOEYAYNZIVNKQCBWLGJFJEMFYPSFJPLCIRXSOJGYWLHRAWPPPASGYQVNOQONSFBFTSGHRSVFRGQEBQEKGTBSRVEIBFFPAHOAEDAWNKMTKDHWIMXMPFSDUZVHCUNHZJXQVUCTZLCURONMDMOTGNUTVBIDRIRHXUWYDJASTUBEZSLQKBMTPAETKRO");
    msg.type = 75U;
    msg.op = 149U;
    msg.group_name.assign("JHPJHDQNAEZJFVJAAPUDUJYYXHIWDNDKBTXOOGQPEWPKTQKIXCTMNUPTLBAEECWL");
    msg.plan_id.assign("MPFXFZWJPVDPPHOUZTIMBOKXRVFOYZYRVWRMSHUSNTIHOCFNNDJSGCUSBGBYDPQUNUEEAZGLH");
    msg.description.assign("RZLEREMFWRDLPVEXCQEHDLFNESDIFOZVIVYPOBCRXUHDSUUTUMCAPUFMKNQHNHOLWYKYOYNNCSCYFWVXHCKOMFHIITAVIERSLBWGOCLJYLIMTHTHAAZUGWDQGTPESOQSQJBSAJSUJJVZURZAPPXEMTZIXVBDGRXJKWAAYPUNBGDGSBZYHEYLGQG");
    msg.reference_frame = 216U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 34487U;
    tmp_msg_0.off_x = 0.525278264131;
    tmp_msg_0.off_y = 0.820269291659;
    tmp_msg_0.off_z = 0.306515848022;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.997851262591;
    msg.leader_speed_min = 0.168018959721;
    msg.leader_speed_max = 0.138893600573;
    msg.leader_alt_min = 0.229908905399;
    msg.leader_alt_max = 0.653904621771;
    msg.pos_sim_err_lim = 0.646908406552;
    msg.pos_sim_err_wrn = 0.95837099085;
    msg.pos_sim_err_timeout = 6199U;
    msg.converg_max = 0.703907912876;
    msg.converg_timeout = 8570U;
    msg.comms_timeout = 47661U;
    msg.turb_lim = 0.863419952905;
    msg.custom.assign("JVYDZSMDAPJKXVHVCEFRHELHVBADNDNOZGUPEBOTSJBKHVMFZACPBORWRFIJSRRBTQXSNIIYSTHJZZDPICTYNUELYTUTDAVFXABZGQJANBPMGJAZZISJZNWPECBLURQGMHOWKWFFCMNJWITDSWMFEWQXCORXFOVHORLUMTZKGLGBSOUOYHQCBNLPMNHXAMVQPWUFQGLAGPGIEYDKVVRDOLXEJXASQIYFYKLCGETRWUPLKUDWS");

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
    msg.setTimeStamp(0.58220419189);
    msg.setSource(13084U);
    msg.setSourceEntity(243U);
    msg.setDestination(32344U);
    msg.setDestinationEntity(1U);
    msg.formation_name.assign("NQVKZRLWDFFPSSLVPOUCXNDSXVNAFORQNDBIOFANMPZ");
    msg.type = 159U;
    msg.op = 20U;
    msg.group_name.assign("PWILLRHUSULRFCNCMSYRIZAVQZMNHOEBTACJKY");
    msg.plan_id.assign("KORAEOZRHKIEQLEUGTYMZATFWOJCJJILHDMIXDYQGTHJUGWSANCFMRASNVFYUAVVPPKKWVYUZSMLNLAGXNDM");
    msg.description.assign("AEXLVFJYYCJYAXYHJXLLMOBGMQWNCTOGTHXJNSVOSRAUVRSSIUJSZOWXGCXQUWRCSQKUZCFFJBKXACKWGEPPQQEEBLFKUKSZEDWGBHBZZLPDKIRSIKDUPLNUOUWYMHAFGXCEVWSMDKTQEQVNH");
    msg.reference_frame = 221U;
    msg.leader_bank_lim = 0.86782762776;
    msg.leader_speed_min = 0.305525416554;
    msg.leader_speed_max = 0.714767251598;
    msg.leader_alt_min = 0.393313144862;
    msg.leader_alt_max = 0.806076123745;
    msg.pos_sim_err_lim = 0.363394386264;
    msg.pos_sim_err_wrn = 0.724754269635;
    msg.pos_sim_err_timeout = 47109U;
    msg.converg_max = 0.377010025623;
    msg.converg_timeout = 10714U;
    msg.comms_timeout = 47019U;
    msg.turb_lim = 0.635565988193;
    msg.custom.assign("WLHYGPZHSVPXIFNFIYOOGSQWXNDFQXKPHPOINOWWHJWEXCZFDVIRXMJKRMEPHNIUJADKIGXGMMCRBIKOUSMLRJYFBITZXJBCSDEMGOWYVEAUXGBGJPEQERVNLOYBYSQLGEMBSQMULNRCYQRSAHLFTYPGLPIWHDXMUNRKBFFUTZZZACJSTHAVVKZEDNVRGOABSEMAFTZVPLDTQTJHNJDFTXLKY");

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
    msg.setTimeStamp(0.937281946785);
    msg.setSource(11325U);
    msg.setSourceEntity(183U);
    msg.setDestination(30499U);
    msg.setDestinationEntity(244U);
    msg.timeout = 60459U;
    msg.lat = 0.32479703032;
    msg.lon = 0.705699999611;
    msg.z = 0.98547328194;
    msg.z_units = 163U;
    msg.speed = 0.151186716645;
    msg.speed_units = 156U;
    msg.custom.assign("UZPPDZFQTGAZDOAGQNLHSCJXTEQBBMXJTMDVEVTEDISNSPXYXHHOKZMJLLGQLLUDVFYNRSCQAODWMNFCBULDWSEQWSQJICM");

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
    msg.setTimeStamp(0.531658346065);
    msg.setSource(52415U);
    msg.setSourceEntity(21U);
    msg.setDestination(33820U);
    msg.setDestinationEntity(250U);
    msg.timeout = 47738U;
    msg.lat = 0.689397497873;
    msg.lon = 0.52933970324;
    msg.z = 0.268730734176;
    msg.z_units = 177U;
    msg.speed = 0.296936661463;
    msg.speed_units = 167U;
    msg.custom.assign("SOEIHBCKODNCWYXBJSWPNSOLZHRKVJHPIUMNXDEQFKWLJL");

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
    msg.setTimeStamp(0.561001431849);
    msg.setSource(48166U);
    msg.setSourceEntity(94U);
    msg.setDestination(25558U);
    msg.setDestinationEntity(53U);
    msg.timeout = 1289U;
    msg.lat = 0.858995554761;
    msg.lon = 0.44955027102;
    msg.z = 0.269789444509;
    msg.z_units = 190U;
    msg.speed = 0.666031113187;
    msg.speed_units = 127U;
    msg.custom.assign("IDXSGMVSWDLOUFAZYMUSRMKAQOJACEFULDYNOPNVVQJUCDLMVERBT");

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
    msg.setTimeStamp(0.55798047352);
    msg.setSource(33907U);
    msg.setSourceEntity(212U);
    msg.setDestination(37083U);
    msg.setDestinationEntity(195U);
    msg.timeout = 46768U;
    msg.lat = 0.127261724158;
    msg.lon = 0.486368197777;
    msg.z = 0.320803040556;
    msg.z_units = 101U;
    msg.speed = 0.948906732324;
    msg.speed_units = 121U;
    msg.custom.assign("JKGATKXCPUGAJWDSELGXRSPEQREPKVBWUGXAPTMFWLRFHQDKTKTCGVTZZOJLLNJUENMXHDOJDNYZMEBDFBSMIIF");

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
    msg.setTimeStamp(0.805054508682);
    msg.setSource(35817U);
    msg.setSourceEntity(33U);
    msg.setDestination(27593U);
    msg.setDestinationEntity(188U);
    msg.timeout = 3595U;
    msg.lat = 0.672133268958;
    msg.lon = 0.402028672095;
    msg.z = 0.292930647998;
    msg.z_units = 65U;
    msg.speed = 0.0754362534566;
    msg.speed_units = 163U;
    msg.custom.assign("YBCZGPQICCXNNZUFQYHDVROMPKYWJOLATRIITAVVBQQCLHOLMNFJPGFRHDWXFXEPVEMJZVNVSOUDRAACYLFLZUKPX");

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
    msg.setTimeStamp(0.397119259738);
    msg.setSource(51437U);
    msg.setSourceEntity(160U);
    msg.setDestination(16889U);
    msg.setDestinationEntity(70U);
    msg.timeout = 9600U;
    msg.lat = 0.17094399197;
    msg.lon = 0.024377392543;
    msg.z = 0.0663917292469;
    msg.z_units = 92U;
    msg.speed = 0.654703459805;
    msg.speed_units = 59U;
    msg.custom.assign("EFUAOAOLUSHFLESVQMCONPXTHBZTEVKHRYWYVDAVPMCJQKSHDNZCPRMQTATJRAXJYEMGFUWHTGYBWSELBVJXDFYKLDKZRXFLGWYAWJDIZQZONQREWLFXXCGBDXWZBCCQPHIGRBQIOVSE");

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
    msg.setTimeStamp(0.723000956612);
    msg.setSource(59017U);
    msg.setSourceEntity(27U);
    msg.setDestination(62223U);
    msg.setDestinationEntity(76U);
    msg.arrival_time = 0.40712869915;
    msg.lat = 0.209007030586;
    msg.lon = 0.135891863189;
    msg.z = 0.780989271678;
    msg.z_units = 181U;
    msg.travel_z = 0.92333525269;
    msg.travel_z_units = 215U;
    msg.delayed = 22U;

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
    msg.setTimeStamp(0.514099601982);
    msg.setSource(17397U);
    msg.setSourceEntity(244U);
    msg.setDestination(680U);
    msg.setDestinationEntity(113U);
    msg.arrival_time = 0.971136549499;
    msg.lat = 0.465142412733;
    msg.lon = 0.607854464011;
    msg.z = 0.723943508194;
    msg.z_units = 220U;
    msg.travel_z = 0.280017835262;
    msg.travel_z_units = 172U;
    msg.delayed = 19U;

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
    msg.setTimeStamp(0.823434440023);
    msg.setSource(37629U);
    msg.setSourceEntity(136U);
    msg.setDestination(6062U);
    msg.setDestinationEntity(88U);
    msg.arrival_time = 0.471070493521;
    msg.lat = 0.309016113819;
    msg.lon = 0.826188072058;
    msg.z = 0.735361590157;
    msg.z_units = 19U;
    msg.travel_z = 0.497439183724;
    msg.travel_z_units = 182U;
    msg.delayed = 116U;

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
    msg.setTimeStamp(0.205391241071);
    msg.setSource(16881U);
    msg.setSourceEntity(125U);
    msg.setDestination(27964U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.684635097219;
    msg.lon = 0.441650527269;
    msg.z = 0.8684234785;
    msg.z_units = 185U;
    msg.speed = 0.291645735041;
    msg.speed_units = 203U;
    msg.bearing = 0.313820223806;
    msg.cross_angle = 0.642140598242;
    msg.width = 0.471418826605;
    msg.length = 0.594626811538;
    msg.coff = 4U;
    msg.angaperture = 0.65097355335;
    msg.range = 21980U;
    msg.overlap = 161U;
    msg.flags = 6U;
    msg.custom.assign("VCSKTDXHAJJFDHZ");

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
    msg.setTimeStamp(0.708646340949);
    msg.setSource(20938U);
    msg.setSourceEntity(203U);
    msg.setDestination(34399U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.922929697282;
    msg.lon = 0.79099108854;
    msg.z = 0.151868615345;
    msg.z_units = 89U;
    msg.speed = 0.906818757307;
    msg.speed_units = 203U;
    msg.bearing = 0.735805675897;
    msg.cross_angle = 0.19041928305;
    msg.width = 0.011105606423;
    msg.length = 0.569572325926;
    msg.coff = 92U;
    msg.angaperture = 0.409143986367;
    msg.range = 55765U;
    msg.overlap = 3U;
    msg.flags = 199U;
    msg.custom.assign("QTRYGTCHUXTBDNWVIPDJHZGGOPWSRUIBW");

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
    msg.setTimeStamp(0.545911987431);
    msg.setSource(55690U);
    msg.setSourceEntity(166U);
    msg.setDestination(34230U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.965048139602;
    msg.lon = 0.46037587662;
    msg.z = 0.245992509282;
    msg.z_units = 54U;
    msg.speed = 0.0764777881103;
    msg.speed_units = 228U;
    msg.bearing = 0.169059653977;
    msg.cross_angle = 0.0568681125162;
    msg.width = 0.701721884201;
    msg.length = 0.504667995787;
    msg.coff = 195U;
    msg.angaperture = 0.326248523852;
    msg.range = 56305U;
    msg.overlap = 155U;
    msg.flags = 223U;
    msg.custom.assign("TQTVZMBIOXKIBYXNQGLLPIOGAQHLMDIKKKVUISAGVWSXFVWLFRRNLJGBCAESJKJRATEHUCRJKUAPDHNWHSTPSLXLHFDULUNEBHBZTHZJOVQHNDQQAPMXMTEVFI");

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
    msg.setTimeStamp(0.733494153675);
    msg.setSource(3270U);
    msg.setSourceEntity(114U);
    msg.setDestination(49579U);
    msg.setDestinationEntity(241U);
    msg.timeout = 1921U;
    msg.lat = 0.325600944897;
    msg.lon = 0.897967524559;
    msg.z = 0.533166769522;
    msg.z_units = 81U;
    msg.speed = 0.477783810212;
    msg.speed_units = 246U;
    msg.syringe0 = 192U;
    msg.syringe1 = 202U;
    msg.syringe2 = 16U;
    msg.custom.assign("JCTCAMURRIYMCSFJMOZYBZIEZXTQIXEOHLBPKGETMPDUWZCLKIYRWOVSRCLTGAMOVPUMBJYSGVGIZAZMBFHKTEWRQIFOOQITFYTVKYNZVJLHJQLWOAFUHRALLZUWBGYQDFNNDSCJSMLBXNWRVMKZDIHUGPNMNKRFGBBRJA");

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
    msg.setTimeStamp(0.982001056462);
    msg.setSource(46558U);
    msg.setSourceEntity(244U);
    msg.setDestination(2970U);
    msg.setDestinationEntity(80U);
    msg.timeout = 41456U;
    msg.lat = 0.536299071725;
    msg.lon = 0.52046621712;
    msg.z = 0.311926787302;
    msg.z_units = 248U;
    msg.speed = 0.691446141493;
    msg.speed_units = 50U;
    msg.syringe0 = 117U;
    msg.syringe1 = 230U;
    msg.syringe2 = 170U;
    msg.custom.assign("HNAOKPGBJGIUEIHXGPDLHIVQBUAYITEKVTNCQKUNAVQBMNJUXLENMWWFOFECSKKXZHPRSUORTO");

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
    msg.setTimeStamp(0.0218612621105);
    msg.setSource(40801U);
    msg.setSourceEntity(99U);
    msg.setDestination(18143U);
    msg.setDestinationEntity(83U);
    msg.timeout = 56514U;
    msg.lat = 0.320467082845;
    msg.lon = 0.69772356101;
    msg.z = 0.0715812173008;
    msg.z_units = 202U;
    msg.speed = 0.177235502472;
    msg.speed_units = 183U;
    msg.syringe0 = 50U;
    msg.syringe1 = 109U;
    msg.syringe2 = 167U;
    msg.custom.assign("YJUCRILVVPPGCABBJKNWMAQDXECFMLZURJANPOPEQIZCDQIRHKMQJKUVGZBXPSUCVOGXYWRINPKOWNTXFATVTAVGZGMYEOMQVBXEESWULMZJFLFLUMWSELEY");

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
    msg.setTimeStamp(0.76503799313);
    msg.setSource(18435U);
    msg.setSourceEntity(228U);
    msg.setDestination(57624U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.900046793785);
    msg.setSource(52331U);
    msg.setSourceEntity(164U);
    msg.setDestination(19960U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.394110244145);
    msg.setSource(26871U);
    msg.setSourceEntity(72U);
    msg.setDestination(54959U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.709065138066);
    msg.setSource(1929U);
    msg.setSourceEntity(31U);
    msg.setDestination(22441U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.101023666187;
    msg.lon = 0.102116858658;
    msg.z = 0.942450573122;
    msg.z_units = 217U;
    msg.speed = 0.977746771819;
    msg.speed_units = 120U;
    msg.takeoff_pitch = 0.305000763501;
    msg.custom.assign("STEZOTGCSLCFZFWAKQDLVPFLQHBZ");

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
    msg.setTimeStamp(0.143437941112);
    msg.setSource(32233U);
    msg.setSourceEntity(66U);
    msg.setDestination(17301U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.716952931881;
    msg.lon = 0.193328519039;
    msg.z = 0.937998702219;
    msg.z_units = 184U;
    msg.speed = 0.135012852658;
    msg.speed_units = 51U;
    msg.takeoff_pitch = 0.395625458383;
    msg.custom.assign("RNKBVPRZAEUANZYAVXEBOSY");

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
    msg.setTimeStamp(0.0510908303773);
    msg.setSource(33081U);
    msg.setSourceEntity(40U);
    msg.setDestination(52921U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.328404299582;
    msg.lon = 0.0266085740899;
    msg.z = 0.284283179862;
    msg.z_units = 100U;
    msg.speed = 0.134939676902;
    msg.speed_units = 144U;
    msg.takeoff_pitch = 0.904855418724;
    msg.custom.assign("UWWORAKDLXMOYBPMFVUGDPXRFTYVJQZLJFNDYGPCAWHITQERHRTGMMNLWVIIGOHKJSNSIZYUBWLBUINAUNXEFEUNEMVY");

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
    msg.setTimeStamp(0.741088927802);
    msg.setSource(19291U);
    msg.setSourceEntity(225U);
    msg.setDestination(41143U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.279914578865;
    msg.lon = 0.703524490221;
    msg.z = 0.796203424565;
    msg.z_units = 243U;
    msg.speed = 0.0647751139893;
    msg.speed_units = 214U;
    msg.abort_z = 0.615280993054;
    msg.bearing = 0.783182878847;
    msg.glide_slope = 61U;
    msg.glide_slope_alt = 0.84017925067;
    msg.custom.assign("BXNKMRRBAVXBCW");

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
    msg.setTimeStamp(0.3555035804);
    msg.setSource(3300U);
    msg.setSourceEntity(221U);
    msg.setDestination(60657U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.142483504845;
    msg.lon = 0.826924004902;
    msg.z = 0.410248600061;
    msg.z_units = 222U;
    msg.speed = 0.115107564973;
    msg.speed_units = 195U;
    msg.abort_z = 0.354687887931;
    msg.bearing = 0.413534519137;
    msg.glide_slope = 132U;
    msg.glide_slope_alt = 0.167252696227;
    msg.custom.assign("ZVWYBOXQZKYMCBNRDWLLUPEUVKJTKDIRXJBNAXGJFILDROSZAHKYMHOQYTHVHBUELVPVLJIQCQPGTALZEKYNSDADFECOCABTNINYHFWJVIMAFNQXHLYDYWSORSVNCJPGRIRRAGWIUFGVXTZNTQDUKWUBCKQSNRTWGOLPLROZFCGEFBJYDFCJOZMXPQDUXMTFWBINCVAHAUWMGOZOYKSQJEIZUTXHPE");

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
    msg.setTimeStamp(0.374735694061);
    msg.setSource(62678U);
    msg.setSourceEntity(169U);
    msg.setDestination(21078U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.0182254590733;
    msg.lon = 0.377079449355;
    msg.z = 0.294618176271;
    msg.z_units = 236U;
    msg.speed = 0.248281384897;
    msg.speed_units = 30U;
    msg.abort_z = 0.499655213736;
    msg.bearing = 0.757961819481;
    msg.glide_slope = 152U;
    msg.glide_slope_alt = 0.657106764451;
    msg.custom.assign("YBQEIAJRSNEZCZKTVWHQERTUMUCGAVILXCNKYZMQZSROFIOWAJGDEYNWRVULWCUDLGPSMDTJXFBTYFGAVYADQZIIJFIKVPLVHZWBRPEQOFNZCTOGDFRQCQKHXVMALVBCAJTPSWHPEHXVSVAHBMRLPQFYLDIBWOMLGKYKJQPTFGXEKGNXKCHRIHEWOSI");

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
    msg.setTimeStamp(0.621778406388);
    msg.setSource(59878U);
    msg.setSourceEntity(145U);
    msg.setDestination(44240U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.750327264459;
    msg.lon = 0.305733040337;
    msg.speed = 0.218838746437;
    msg.speed_units = 254U;
    msg.limits = 46U;
    msg.max_depth = 0.806492493199;
    msg.min_alt = 0.94201754169;
    msg.time_limit = 0.76189051938;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.654633482897;
    tmp_msg_0.lon = 0.348473010677;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("YWCYZJYREVAWTNKLHIXOQCEFBEULGBEMYGKLTGKDIIMWYJKESUDVIMGZNAUTZEPHEJKCUBEMAJNQXOQPAHBQFJCXIWRBFQGVGBGGDPSTTNIJETVNASYCLWMCILH");
    msg.custom.assign("YIOWCXQFMRMBWEECTLZGAERZBBENRVDBYQ");

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
    msg.setTimeStamp(0.177312613826);
    msg.setSource(59548U);
    msg.setSourceEntity(70U);
    msg.setDestination(25913U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.999521018962;
    msg.lon = 0.174201132115;
    msg.speed = 0.30575821022;
    msg.speed_units = 201U;
    msg.limits = 184U;
    msg.max_depth = 0.998358653655;
    msg.min_alt = 0.96962607482;
    msg.time_limit = 0.0201466376255;
    msg.controller.assign("RRATEDPNRCNXMUACZONJUHFWBHVBYGHPDOXIFAKEBLQGVFXKWZ");
    msg.custom.assign("WTEDTWPRRIBCRTDKZYXDZHFUIKTKGRWTLBMYIHYDCKBMDNISWTSBHVUGYHHXPELQYCGWJCAGUYQLXRFSUPVQSLPFQDZJAIVJEAINSFQUPBHPSPOETYIBXPHACOELGLFORBLWQGSVLOKCEAXUUQSQTKZZXMHOUZGFEGN");

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
    msg.setTimeStamp(0.582188444748);
    msg.setSource(41089U);
    msg.setSourceEntity(100U);
    msg.setDestination(64932U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.0981594799675;
    msg.lon = 0.170978223853;
    msg.speed = 0.254170948925;
    msg.speed_units = 133U;
    msg.limits = 161U;
    msg.max_depth = 0.374745640032;
    msg.min_alt = 0.499369726947;
    msg.time_limit = 0.562549917201;
    msg.controller.assign("CIRCCGWPAFFBSXLNQJLQZDWTJOEVOLWZYMQPLSIPYTQJKIYOQWXURMMMFRJAROXEDKPYPUOKRYMHUFAALHEGHYGBSCBNFX");
    msg.custom.assign("XIDLUVFJHCSSCCDKPIEHCTQLTEZ");

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
    msg.setTimeStamp(0.581478917102);
    msg.setSource(7241U);
    msg.setSourceEntity(137U);
    msg.setDestination(15029U);
    msg.setDestinationEntity(70U);
    msg.target.assign("JWFKHOZPFYXZKFRYWMSOIZVQDCMGTWZDSCCAFYLTWVSNAROYEVXWMZZJDNFVIOVLWSAGRQLHGUBXHTDPMHENNBYKBTEFGOBKNJMPNAHLJMCJYKUYODUUHEJRSVKXXYKTIIXPPOJXUTRIMTVZHECWCAVLRSBDW");
    msg.max_speed = 0.784632617775;
    msg.speed_units = 54U;
    msg.lat = 0.348224733608;
    msg.lon = 0.519091283709;
    msg.z = 0.622524067151;
    msg.z_units = 16U;
    msg.custom.assign("BODRLWLWQBMXTRPHBCFEEOSCDXMEIZSSNXJHPEWRSBHILRJFFMOKH");

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
    msg.setTimeStamp(0.430629761838);
    msg.setSource(35685U);
    msg.setSourceEntity(145U);
    msg.setDestination(61088U);
    msg.setDestinationEntity(155U);
    msg.target.assign("YGTSCJIOOECXWNCTLULPFGUHNWWJWIYHNLCIWDQYREMZVGHUXHXGPKWKLTCFDRFJJQYQWEJNIBNCOVHPRLYRKUCWEJBXHQFLNZMYURLMSAJZOKRSSYCNKFSTPDFDHEGRZVABGAQTAQTAMZEZNDEQAZNZQKPRKFMVPVMWMJTSYETXOIKFVASDISVEUQJDZXWVODNUDPSBBHB");
    msg.max_speed = 0.905672101002;
    msg.speed_units = 240U;
    msg.lat = 0.476183650111;
    msg.lon = 0.943417759189;
    msg.z = 0.704212081607;
    msg.z_units = 39U;
    msg.custom.assign("IBTWZBFDORJOKXYYBMBEJJPBKUFMQHFYVPNSZZIKRXPIBPLQOZQYTDBPXOIEJSLRVNKFRPLXSZOFKMIEEZPGDYKONUFGDASLMFUHHLWINSASOVJGHMHNVDQACRZBMMBAIQUFAWJWMMZQRUXRDJOCZTKKHICYCSGHPGNJVGYHNHSUGTVDSUEQAVVCVDKQCYRHMLBWJWDRPWUJIXTWCNXOCIGXNSCLEWL");

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
    msg.setTimeStamp(0.438678247697);
    msg.setSource(1684U);
    msg.setSourceEntity(1U);
    msg.setDestination(48410U);
    msg.setDestinationEntity(155U);
    msg.target.assign("WXLICBWEKQPGBLWVJSAHNJWDVGBKNHBEPVYJGZXKSORDEYFAWLJJWVBENGIEUCHVCTAEQXFRDSD");
    msg.max_speed = 0.480771574065;
    msg.speed_units = 153U;
    msg.lat = 0.0269509729999;
    msg.lon = 0.375924312023;
    msg.z = 0.786011181241;
    msg.z_units = 175U;
    msg.custom.assign("TUMCZSCQCSDNGMVLQVBZCGEJUBOTGNLRWNCDEQNFXGMOUJACUEVOXDFWEKPHLJUSQQISVJGDRRPFTYILUPXPACGYSDRYXIQAEZEUYYATMZJHFQYXDWNBONRMSKPIHXOWAWJHICEEOARUPC");

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
    msg.setTimeStamp(0.135713708164);
    msg.setSource(20481U);
    msg.setSourceEntity(117U);
    msg.setDestination(16432U);
    msg.setDestinationEntity(148U);
    msg.timeout = 18605U;
    msg.lat = 0.570557559354;
    msg.lon = 0.207832843914;
    msg.speed = 0.66451197803;
    msg.speed_units = 203U;
    msg.custom.assign("NETTNVKGSEXILJYFBFRODLOKYIELVMASWGJBWAJZIOVBROTJSTUHJQGXKKFFMUWISRXZZRMLJZR");

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
    msg.setTimeStamp(0.823325909532);
    msg.setSource(3327U);
    msg.setSourceEntity(214U);
    msg.setDestination(14541U);
    msg.setDestinationEntity(69U);
    msg.timeout = 50785U;
    msg.lat = 0.259088869916;
    msg.lon = 0.333941595532;
    msg.speed = 0.275433378814;
    msg.speed_units = 122U;
    msg.custom.assign("IPUZEVQDTQWVHXTHPCWHAROMCGDKWDOXVGSABHIWOEXSOAVJBPTZRLCFVCNKBUECNQMMZETZEK");

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
    msg.setTimeStamp(0.847535507408);
    msg.setSource(47449U);
    msg.setSourceEntity(20U);
    msg.setDestination(39222U);
    msg.setDestinationEntity(133U);
    msg.timeout = 40019U;
    msg.lat = 0.133026819663;
    msg.lon = 0.377413863992;
    msg.speed = 0.241704588176;
    msg.speed_units = 57U;
    msg.custom.assign("KUWHNGJVCDLBKKAIDZMQZPBEADSWZXLPUDSZNCSQKFCYXVWPNVWQNGKQOCEVMXBIZGLJHSTXICRHAGATJMMLTOBGZSGYYSIROAQJIDYBUBYCIJGQURBDEWEIRRJTOVWSPENUJHFXGHULERXBTQIGLNFYUBHHTPXOLJINNSZRKXCTMWFPWPOQYFOFVLFCTDXVAVVPPDFMWKYNTMRQOUQMTAGHDPOLRAZEAMUENRZAIXZEHBKVWCLYKJDOKYH");

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
    msg.setTimeStamp(0.854178814093);
    msg.setSource(19029U);
    msg.setSourceEntity(18U);
    msg.setDestination(32258U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.760559515289;
    msg.lon = 0.20381542478;
    msg.z = 0.389556232414;
    msg.z_units = 209U;
    msg.radius = 0.391791745727;
    msg.duration = 8728U;
    msg.speed = 0.679923684647;
    msg.speed_units = 179U;
    msg.popup_period = 6913U;
    msg.popup_duration = 54923U;
    msg.flags = 230U;
    msg.custom.assign("TWDMHEJZFROJOPYUHJOOBBQFEEGDXETWWLTRQQAUUSTHCXAZCYWLTZIVUZFOGCRXCTOYQURFYAFLBHQVHRNTGEVDNIVCJGJFPKHEPQIAXLSAHCEXEHMVMBGCXFURNGWXALKVBPZPSMRHOZLIJCIZDPJS");

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
    msg.setTimeStamp(0.928290069155);
    msg.setSource(7823U);
    msg.setSourceEntity(174U);
    msg.setDestination(42074U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.993066005126;
    msg.lon = 0.41815949378;
    msg.z = 0.487700122346;
    msg.z_units = 155U;
    msg.radius = 0.040143234771;
    msg.duration = 60389U;
    msg.speed = 0.443303259115;
    msg.speed_units = 150U;
    msg.popup_period = 20466U;
    msg.popup_duration = 63809U;
    msg.flags = 31U;
    msg.custom.assign("YXULAIOQUMEMZTEXFDGNGEMKJSUJPCDTFGXHTJRYFLZSILMRFCVOYNZTQTOWRBQRUWNBBJXQPHVMGSSBICNQVWYGWKASKDCGAWNPEQFFAJEDNRAPZMYTXLDFYBBICWBINVQKKHZSSZEHRRFHUOGUSCXKWANHLVHDDTSKIKMVLQMTPANIEXNGBUZJDYQTVVOLOPXOVXLKCAQUXFAHKWVWFHUCBPP");

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
    msg.setTimeStamp(0.0673666502627);
    msg.setSource(38710U);
    msg.setSourceEntity(196U);
    msg.setDestination(11709U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.0937711647419;
    msg.lon = 0.285033027038;
    msg.z = 0.478304804581;
    msg.z_units = 227U;
    msg.radius = 0.84207496273;
    msg.duration = 49215U;
    msg.speed = 0.545369019648;
    msg.speed_units = 221U;
    msg.popup_period = 39989U;
    msg.popup_duration = 23600U;
    msg.flags = 57U;
    msg.custom.assign("BNBZCMEGTTLXAERERQAERLTGUTCWZKHOSPGAKMLVPUFSDKJNIQIDLFONDXUVPGHLUZYVJGQBCMZPZUEBVBDQTMVIDRKDUGDMYMQSEYEOHAONZUFGWKNNTHOHOYJGFUWTCODAIGPWIFAHCSI");

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
    msg.setTimeStamp(0.0340423858122);
    msg.setSource(64557U);
    msg.setSourceEntity(58U);
    msg.setDestination(14134U);
    msg.setDestinationEntity(159U);
    msg.timeout = 10087U;
    msg.lat = 0.236006964976;
    msg.lon = 0.0636194250567;
    msg.z = 0.574139729236;
    msg.z_units = 124U;
    msg.speed = 0.810170244764;
    msg.speed_units = 10U;
    msg.bearing = 0.623023015868;
    msg.width = 0.325834678114;
    msg.direction = 77U;
    msg.custom.assign("ONFITPPFCSGPWJJUJXJFRHXWNIYDBLJWVESHGITESPSTKLKUZVHUHZPKCAWADCAOIHBMWWXANELCDKOSWIOITDJDYRINKOBVLTXFXBVXFALHZSYBPEBDFFSQOYYQZNGQRMXXYCQH");

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
    msg.setTimeStamp(0.829820980923);
    msg.setSource(5825U);
    msg.setSourceEntity(176U);
    msg.setDestination(11544U);
    msg.setDestinationEntity(126U);
    msg.timeout = 38546U;
    msg.lat = 0.817130159106;
    msg.lon = 0.297214164057;
    msg.z = 0.28814056487;
    msg.z_units = 131U;
    msg.speed = 0.134129868277;
    msg.speed_units = 148U;
    msg.bearing = 0.541678470279;
    msg.width = 0.819127241587;
    msg.direction = 122U;
    msg.custom.assign("NFKPQQXHZGLHRIKGXUFJASQOFWKAJGCUJV");

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
    msg.setTimeStamp(0.396430154146);
    msg.setSource(43798U);
    msg.setSourceEntity(4U);
    msg.setDestination(21314U);
    msg.setDestinationEntity(24U);
    msg.timeout = 32701U;
    msg.lat = 0.479792604976;
    msg.lon = 0.855630441011;
    msg.z = 0.676710556685;
    msg.z_units = 171U;
    msg.speed = 0.363570993157;
    msg.speed_units = 41U;
    msg.bearing = 0.0940843408572;
    msg.width = 0.825900158119;
    msg.direction = 65U;
    msg.custom.assign("AOZSJAJGGEPOTTORVEDNSCVNSGEUPNTPVOFUFYKVRBUBDEWAPGXHIMJHTRWZEHDWHZACTIEIKGFQNKBTSVDLLATFUBQBVYAZBCJATXNLIVEFQMSUHREPQKMKROJLWNYLFPRXFNGIXDZQ");

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
    msg.setTimeStamp(0.613001648106);
    msg.setSource(48455U);
    msg.setSourceEntity(21U);
    msg.setDestination(63883U);
    msg.setDestinationEntity(128U);
    msg.op_mode = 124U;
    msg.error_count = 73U;
    msg.error_ents.assign("NBFZGIBGAKUMHMPPCCRVWEMFOJHHRTJHASWKSMXDRBLAWTCETDCOEVMXVVPZNIBUHTNPYSZSCOXNDUYUUSIOVTRSRJDBWNIYKAKLOPAUBWNTCOQNAKFGZEIGURGDGPMCOFTPNSGIOJGXQVZRRWZZUZVILPYQKFRWTBLDKJSWMOBWCQGLROAFJKVPYQZYJC");
    msg.maneuver_type = 61244U;
    msg.maneuver_stime = 0.993285648207;
    msg.maneuver_eta = 63849U;
    msg.control_loops = 3496666193U;
    msg.flags = 218U;
    msg.last_error.assign("PDWOYBNVHONVRIPNCCJSVQCGPLOVUKWAETMYKIXJIBBJAOUMFMXUSSLFTOQKWNDOFPQZGOWITUAARIGDRYWNLKBLGIKZVWBFCEPMFZUDXQVKZTHMJHRFGSKTEYRWSPPNCYJEZGMRQMHHZNCDZWWRHBSRKPJBTVXIGRLAAMNFGKSUYDBDELIATSQFRZXGHJTPEYNKOFXLQPZAWJOZIENMAJHXUMHYVXIDEL");
    msg.last_error_time = 0.164124145623;

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
    msg.setTimeStamp(0.572223644953);
    msg.setSource(21203U);
    msg.setSourceEntity(117U);
    msg.setDestination(47136U);
    msg.setDestinationEntity(228U);
    msg.op_mode = 165U;
    msg.error_count = 84U;
    msg.error_ents.assign("ANLFTMMOCUURLZFWWLMTXYTDXFGYUIRQYCTELDUWFPNJNSALFSOPHANHHSSAZJRMUHPBMVTLNMFIZBDANWPDDWHLJGPNXRKPQQJKQEKDKZFXHQVHLUQYIMAOEZPWHXEZQCKOWQPUMGRDBTDYYXDQEVBGWYYKFTGZBJWVOKCQCNOOHVOGKLZJSTVZBIPGOXJMTJEIBBIJLEXK");
    msg.maneuver_type = 63234U;
    msg.maneuver_stime = 0.402571622156;
    msg.maneuver_eta = 60141U;
    msg.control_loops = 897561482U;
    msg.flags = 209U;
    msg.last_error.assign("KLFOOBRUKEIAXWVACYVCWIGJDPEEXLZOMJXQLATFKFPPQEZMHPICOKNSJQDCJFHOKMKQHOJSBTRNTPJMKLXITSBCDOVVQPKOSGSUHKGMGRHWEIBAMSLDDTHVZRNMDDEAEUUVJZIUFKIPYFCMYLZYEFNOBGQGDTUIGXZLCSQQBTBMNEXTWLOGHVWAUIFYZRNRN");
    msg.last_error_time = 0.771160084218;

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
    msg.setTimeStamp(0.629264971057);
    msg.setSource(18460U);
    msg.setSourceEntity(37U);
    msg.setDestination(24280U);
    msg.setDestinationEntity(101U);
    msg.op_mode = 110U;
    msg.error_count = 165U;
    msg.error_ents.assign("OUXTSDHZPTERNZEGBJVWVXJJGSKVSKOIIBVXEJKDKMCUCAGNBPHKNBLTPTCJGBZHTPUONZZTFZLOKPGLTCHDRYIGCXFLSYAXWADSRMHUVNHFQGYWHOQNKIMCYRJEMBJGVIOREOEGLQXLJTCQBVINMCSRRBUSRLKVFQVWAEWNSVFQTAKZDUUQBPEZPDYWPZMDEFMAQ");
    msg.maneuver_type = 48206U;
    msg.maneuver_stime = 0.998828774679;
    msg.maneuver_eta = 43984U;
    msg.control_loops = 3931479239U;
    msg.flags = 117U;
    msg.last_error.assign("PDBPSQQOEKYLIGFACZIUMOULCHFKWONNZLCMDZUQHWGUTJAHNWDTYMRWQXOTYGROMAKTELGEMBTISPTPKXRDGZZQXSMSIBGTBHFOQIHRBXJMVYEUJKFYEKAVYIOUCRMYOUTZUTLPEPDAMIGNPKVICKDAVXDNBHXOVKNNRHQLVDQLXIUVKFVWYFFCJOXWDWNABEXSNRFMZPJWEJZJFYJSTLYRSAVZWGGQQUPVHCX");
    msg.last_error_time = 0.522534438341;

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
    msg.setTimeStamp(0.0524804840995);
    msg.setSource(18726U);
    msg.setSourceEntity(46U);
    msg.setDestination(34082U);
    msg.setDestinationEntity(48U);
    msg.type = 62U;
    msg.request_id = 39743U;
    msg.command = 110U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 15107U;
    tmp_msg_0.lat = 0.0820395548553;
    tmp_msg_0.lon = 0.0947706206908;
    tmp_msg_0.z = 0.564127292494;
    tmp_msg_0.z_units = 152U;
    tmp_msg_0.speed = 0.707129454926;
    tmp_msg_0.speed_units = 61U;
    tmp_msg_0.custom.assign("WOCVXIGDSTMYMFUCQLZKBXAQPWPGJAYJZETMUDNQITORVHEIRGVEPWRTBJMSXAYEWWKBSCUZLZNKQKLFUCPAJLDWEZGMECJJHZFDDHUBPGNNOUIELRXFMHPTFNOFUXQKOYVXQSFVZWATYBRHCLZLBHKJUENNIZJYGRKEBWYSSAXPRMIZHLYODKODDUJQTFJA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 13479U;
    msg.info.assign("WEKWBGRUVXUFKCIHWPVPYVYZVOAEZCHXXKOHMSRARKCIHNTRATPRZMLCMXHFFTRWIZTWMNBSCJXJTFWEUDZDFIUNJDEMXURJUSOMHSTTBGVEYJADZYYGEEGQRIFEMDVQRQITHTVQAQKUGNCZKLNDRFBUIEPIMQHFBNSSGVWXKPSWOQCODJGFOMAJNTAJVSYDGBHUIGKSAYZQWDD");

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
    msg.setTimeStamp(0.021343832275);
    msg.setSource(34786U);
    msg.setSourceEntity(23U);
    msg.setDestination(25685U);
    msg.setDestinationEntity(25U);
    msg.type = 215U;
    msg.request_id = 53473U;
    msg.command = 144U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.552961663119;
    tmp_msg_0.lon = 0.772833992359;
    tmp_msg_0.z = 0.228883094649;
    tmp_msg_0.z_units = 37U;
    tmp_msg_0.speed = 0.954217884257;
    tmp_msg_0.speed_units = 102U;
    tmp_msg_0.abort_z = 0.237094246282;
    tmp_msg_0.bearing = 0.370560451737;
    tmp_msg_0.glide_slope = 204U;
    tmp_msg_0.glide_slope_alt = 0.0126730818064;
    tmp_msg_0.custom.assign("ZDQPLXLTSVSEFNFQCDAOFNHLMSCDGRZXIAEKSPONNHARGVTZSAMEATQXBBWPAMU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7052U;
    msg.info.assign("RTMCXGDYFGUDKNYIIAHMOABVTMYPGDWEBTARDOZYKXAVFOJGNSOBZQCLFEEZUSGHUWNYIDDCCFRTWXUSHHWESLXIVNZWJEOLMPKIOFNRJRUNJCPBPVTKHZSCQDEFBBOPRHHKSZXEHLVLVUNJWAEBLONTBQRLQMGQIYEAULIKKMPGBQJPCVXJDUGVXNITAMKDJZCWABYGMHMISLONKFPTJTCXWAQRCRTSDRSZMYWHQIKXQAVEFZWS");

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
    msg.setTimeStamp(0.268451850083);
    msg.setSource(16011U);
    msg.setSourceEntity(175U);
    msg.setDestination(24136U);
    msg.setDestinationEntity(82U);
    msg.type = 118U;
    msg.request_id = 6529U;
    msg.command = 242U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 34609U;
    tmp_msg_0.lat = 0.724137840941;
    tmp_msg_0.lon = 0.648563432621;
    tmp_msg_0.z = 0.504906285164;
    tmp_msg_0.z_units = 34U;
    tmp_msg_0.speed = 0.0426472234871;
    tmp_msg_0.speed_units = 237U;
    tmp_msg_0.custom.assign("GKXOBVFZSNSUMGNFGTSBIPQEIZGDLXHPKKOSQIHUKIDGZTMFVCYVHYCQMPFAEIRTNNQCYLAAQHGYGLMSHATSQFCVQDXWROPYAYPWELADVLSEDENZRVHYUCUJSBJRCVKJXBKPOLHWETYKBZIPENWFOXRGXWRXJHSGDCCMOKWCOUVNEVMZBAUZMUFJJTAUVIRHDXARDOJNDLLOWNREAIBWPLYXPWLFQSFPIHBFNMWEIKQQKYZBXJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 11447U;
    msg.info.assign("RIPSODCEGTSJCYCYBPXBUHHDKEDLRHTCMJLHAGMZOAKEKNSOSFGWEVNXWFAWXNOVJXKECWHYWPGRCKBNEBUVMDPIFXTJZZPLYPUWJUCDFOLOQUYVRLVNGIMYRIOAJMVVOTQOAFDFPTWJTOBWFIIZUKEJASUCYCQRMGDQUHYVGGLCVLUJYTZAPGKSJTWANHLSRDQNNHRQKBQZUXPSTKIDEZWQBXDE");

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
    msg.setTimeStamp(0.233902216823);
    msg.setSource(62335U);
    msg.setSourceEntity(249U);
    msg.setDestination(28510U);
    msg.setDestinationEntity(95U);
    msg.command = 154U;
    msg.entities.assign("DAZPNHDHXCWYSXLKYPRDAFFIWBTJCB");

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
    msg.setTimeStamp(0.611238489083);
    msg.setSource(28388U);
    msg.setSourceEntity(198U);
    msg.setDestination(47927U);
    msg.setDestinationEntity(165U);
    msg.command = 121U;
    msg.entities.assign("HGNPVBGKSAQSYFABXYLNLNQEVRKBHOFTOQKKDLPEEFOEDWNSNXIKGQTGVEBZOIJCSARYTURCJAJYZAOXZHPMUZUERFLDBIWRICUFNAWFZKQSYMGMTNONWTIGXYOXDMMGVWEVAZABCPXPQPDJIUTCSALRDPXVMLUHXPVSPYLOUMFGHIJJHERTDKZMRZKGZXISUWFBSCGROVADBKNKFUECDYBJIRLMOJENHQCSTCHIQ");

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
    msg.setTimeStamp(0.0715872796257);
    msg.setSource(12357U);
    msg.setSourceEntity(204U);
    msg.setDestination(61779U);
    msg.setDestinationEntity(219U);
    msg.command = 98U;
    msg.entities.assign("ZPJZNGTCOBMCIRKCAJTJBYCJIRUBAXYDNLPLSYNFZDGXEWKEFATKNLODFGIUEIAHPSKQJRYELAZBLGGYNBWAOQCTXSXOGTHUEQDVVSVZCOUTPVONCYLXWU");

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
    msg.setTimeStamp(0.160727370885);
    msg.setSource(52724U);
    msg.setSourceEntity(222U);
    msg.setDestination(59686U);
    msg.setDestinationEntity(33U);
    msg.mcount = 221U;
    msg.mnames.assign("BXTGLLTHFFIRWMTMOPQEVGJTE");
    msg.ecount = 105U;
    msg.enames.assign("GUIUYEDPZHZXRGPEFJDHRRTNSGLPMQMGHFIVWBLWUUA");
    msg.ccount = 163U;
    msg.cnames.assign("SYLKTNLHCBNEURTEFOJAGNXJACPKXOWHQXREJADUQXSIGZDRPXYTKYAYRZMYBVVVXHAVDSKOCNGUFAJWQEJILQSVKSVGRZL");
    msg.last_error.assign("FVABFMPGVWWJVGNJXEJIMLECMHQBUSGZGDXBQAXHYRIATWTRHYLZWJTDKTXBZOLFTDTNMJXANOYXKCVMLWAEVQEKYKVJPKTXQGOSZKUBEKHNYFJDHQNTMHQNXBIGUPICBERDAJTZVIUDSUYEAMLFIBWPVZNFCCZQGVIIWUDLLDL");
    msg.last_error_time = 0.562659848861;

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
    msg.setTimeStamp(0.42245612562);
    msg.setSource(1260U);
    msg.setSourceEntity(125U);
    msg.setDestination(38401U);
    msg.setDestinationEntity(190U);
    msg.mcount = 193U;
    msg.mnames.assign("XYHTOQRQOWBJIYSDDMGSLNGFQUGIFARXHGQCBHRTNJZCYCLADYZQSFCEZXHNDKRZPPV");
    msg.ecount = 166U;
    msg.enames.assign("YMOWCVSGBLGXHQLJEXGSAGUFZCPPSWVDTJEMCBBLXEIGXYXIVLFUWUEUBQFIYZWXYCDRPUCYMUNRZVRITFBHWWNNFHOENPRAMMVKGQOJVNSIRAOZONHIYNGHAWTOZTZIFBDLFPEKPUHYBTDCEMQJADSABGTSUZXPMYHSILVFRXHDQSRDOQEWJVYKAPRDLTRBMLLLKZJSKQOINCETYSPKWUXMVPGEUK");
    msg.ccount = 39U;
    msg.cnames.assign("SLFHFUWQOMNKSVVYYILVBNJIGUJSDKJGVNCLBKFKBYXOZQKFKPGVSDLWFZCIAHSLAUURTWZGYZCVMOGEAOYKA");
    msg.last_error.assign("VWGCXZQDBPZHWFMSZSAVJSFZFHRCPFEWGRYQUACMKPXJKEXSCYPMPOCQGLJOQXPMYMAWVYSTLPUINSAUVANUILPERINCDLJOGBYQMBJGLROZOUYGTNLITDTMEHXJAUMGQSKYHVXIDJIUODONROTEWUL");
    msg.last_error_time = 0.165228147189;

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
    msg.setTimeStamp(0.799045521534);
    msg.setSource(7331U);
    msg.setSourceEntity(52U);
    msg.setDestination(43175U);
    msg.setDestinationEntity(2U);
    msg.mcount = 53U;
    msg.mnames.assign("KKMMFIYHTDMBQJZFEQTPGVWGFOTPXKQLFJFURRNTVJJROGCVXPRAIHPBEEADBM");
    msg.ecount = 2U;
    msg.enames.assign("RAZBISGEKYQPCZGEOKMABSRPLFCUPMNMXDMYUSUEZNGNODESWTLSKLHVTARGJCRBAKBMVHDIOGKUOFTYOTPXRNYXJBVLTBSZMHXOHLCDLHWHTPTIWKCQQMFKVQWOVQJZIJBH");
    msg.ccount = 253U;
    msg.cnames.assign("GDIABPHHTZBPBKCH");
    msg.last_error.assign("JWGMZNFKZSHOFDGGCFTELMNRLVZPEXULUKYOZTLQGBWXBVTQYZQJVHAMLCYPUOURNPZJXZGUUGHNBMOOFBPBJN");
    msg.last_error_time = 0.422073556596;

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
    msg.setTimeStamp(0.30074041393);
    msg.setSource(44138U);
    msg.setSourceEntity(165U);
    msg.setDestination(33522U);
    msg.setDestinationEntity(154U);
    msg.mask = 114U;
    msg.max_depth = 0.666967978904;
    msg.min_altitude = 0.263664115604;
    msg.max_altitude = 0.940195955845;
    msg.min_speed = 0.412324536388;
    msg.max_speed = 0.275081362265;
    msg.max_vrate = 0.0355462901654;
    msg.lat = 0.383239545362;
    msg.lon = 0.956294059473;
    msg.orientation = 0.0532076295894;
    msg.width = 0.78574552561;
    msg.length = 0.233146270958;

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
    msg.setTimeStamp(0.370500187321);
    msg.setSource(38782U);
    msg.setSourceEntity(114U);
    msg.setDestination(46514U);
    msg.setDestinationEntity(145U);
    msg.mask = 213U;
    msg.max_depth = 0.875275360846;
    msg.min_altitude = 0.346616492284;
    msg.max_altitude = 0.790491776611;
    msg.min_speed = 0.542839520995;
    msg.max_speed = 0.134597478866;
    msg.max_vrate = 0.420974316621;
    msg.lat = 0.689823001535;
    msg.lon = 0.282254870384;
    msg.orientation = 0.189011575853;
    msg.width = 0.313198800129;
    msg.length = 0.2594667289;

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
    msg.setTimeStamp(0.665700894297);
    msg.setSource(21341U);
    msg.setSourceEntity(179U);
    msg.setDestination(12902U);
    msg.setDestinationEntity(60U);
    msg.mask = 249U;
    msg.max_depth = 0.745729697632;
    msg.min_altitude = 0.610166558632;
    msg.max_altitude = 0.512652875172;
    msg.min_speed = 0.364645191587;
    msg.max_speed = 0.930697865531;
    msg.max_vrate = 0.983643726438;
    msg.lat = 0.315923580928;
    msg.lon = 0.059394951374;
    msg.orientation = 0.281737773099;
    msg.width = 0.550596301286;
    msg.length = 0.778998384605;

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
    msg.setTimeStamp(0.857098923474);
    msg.setSource(40793U);
    msg.setSourceEntity(236U);
    msg.setDestination(17459U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.0186936351086);
    msg.setSource(32766U);
    msg.setSourceEntity(133U);
    msg.setDestination(38724U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.222638128682);
    msg.setSource(37303U);
    msg.setSourceEntity(85U);
    msg.setDestination(34826U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.123759706588);
    msg.setSource(43248U);
    msg.setSourceEntity(84U);
    msg.setDestination(60924U);
    msg.setDestinationEntity(75U);
    msg.duration = 2457U;

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
    msg.setTimeStamp(0.090004770716);
    msg.setSource(16321U);
    msg.setSourceEntity(69U);
    msg.setDestination(14164U);
    msg.setDestinationEntity(9U);
    msg.duration = 36806U;

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
    msg.setTimeStamp(0.819841150847);
    msg.setSource(23977U);
    msg.setSourceEntity(192U);
    msg.setDestination(60750U);
    msg.setDestinationEntity(222U);
    msg.duration = 7856U;

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
    msg.setTimeStamp(0.0814571466023);
    msg.setSource(9526U);
    msg.setSourceEntity(2U);
    msg.setDestination(18985U);
    msg.setDestinationEntity(111U);
    msg.enable = 161U;
    msg.mask = 3710838913U;
    msg.scope_ref = 832872858U;

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
    msg.setTimeStamp(0.241423916529);
    msg.setSource(44498U);
    msg.setSourceEntity(90U);
    msg.setDestination(38687U);
    msg.setDestinationEntity(174U);
    msg.enable = 183U;
    msg.mask = 315361460U;
    msg.scope_ref = 1907132194U;

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
    msg.setTimeStamp(0.48457191101);
    msg.setSource(21602U);
    msg.setSourceEntity(241U);
    msg.setDestination(22372U);
    msg.setDestinationEntity(84U);
    msg.enable = 112U;
    msg.mask = 3906112524U;
    msg.scope_ref = 2101569298U;

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
    msg.setTimeStamp(0.94664981622);
    msg.setSource(15564U);
    msg.setSourceEntity(177U);
    msg.setDestination(42505U);
    msg.setDestinationEntity(202U);
    msg.medium = 55U;

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
    msg.setTimeStamp(0.252856244814);
    msg.setSource(20295U);
    msg.setSourceEntity(223U);
    msg.setDestination(15733U);
    msg.setDestinationEntity(226U);
    msg.medium = 30U;

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
    msg.setTimeStamp(0.752270207089);
    msg.setSource(41551U);
    msg.setSourceEntity(84U);
    msg.setDestination(45190U);
    msg.setDestinationEntity(184U);
    msg.medium = 77U;

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
    msg.setTimeStamp(0.51055067765);
    msg.setSource(55781U);
    msg.setSourceEntity(191U);
    msg.setDestination(24792U);
    msg.setDestinationEntity(205U);
    msg.value = 0.49175843988;
    msg.type = 151U;

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
    msg.setTimeStamp(0.513097239865);
    msg.setSource(5834U);
    msg.setSourceEntity(112U);
    msg.setDestination(63855U);
    msg.setDestinationEntity(39U);
    msg.value = 0.483110235437;
    msg.type = 30U;

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
    msg.setTimeStamp(0.837815426223);
    msg.setSource(33874U);
    msg.setSourceEntity(75U);
    msg.setDestination(29309U);
    msg.setDestinationEntity(188U);
    msg.value = 0.438435123424;
    msg.type = 75U;

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
    msg.setTimeStamp(0.898185388673);
    msg.setSource(63458U);
    msg.setSourceEntity(62U);
    msg.setDestination(56697U);
    msg.setDestinationEntity(65U);
    msg.possimerr = 0.456451715825;
    msg.converg = 0.674655460199;
    msg.turbulence = 0.736987244056;
    msg.possimmon = 207U;
    msg.commmon = 208U;
    msg.convergmon = 120U;

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
    msg.setTimeStamp(0.587935591961);
    msg.setSource(57619U);
    msg.setSourceEntity(75U);
    msg.setDestination(34109U);
    msg.setDestinationEntity(52U);
    msg.possimerr = 0.205151776477;
    msg.converg = 0.158038079035;
    msg.turbulence = 0.759590686477;
    msg.possimmon = 73U;
    msg.commmon = 61U;
    msg.convergmon = 218U;

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
    msg.setTimeStamp(0.46303538431);
    msg.setSource(54449U);
    msg.setSourceEntity(64U);
    msg.setDestination(33539U);
    msg.setDestinationEntity(123U);
    msg.possimerr = 0.611072793837;
    msg.converg = 0.567002628005;
    msg.turbulence = 0.280808879235;
    msg.possimmon = 26U;
    msg.commmon = 27U;
    msg.convergmon = 49U;

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
    msg.setTimeStamp(0.892782870715);
    msg.setSource(26248U);
    msg.setSourceEntity(109U);
    msg.setDestination(4060U);
    msg.setDestinationEntity(120U);
    msg.autonomy = 75U;
    msg.mode.assign("ORUIXJTBQGRLAKVLGVANTGKHVTSFXOOFPJPXSRWYIDQFQSULIZNCJKBGOCMUITJATBMACPDPBILIRHZIZGOAWXYYHEDEKLEKGZRPLOJFCOAGCFMMBNLEUHWZBEVYJRDGDKRSWUVXJZMJVNQDXMV");

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
    msg.setTimeStamp(0.301706823368);
    msg.setSource(41878U);
    msg.setSourceEntity(90U);
    msg.setDestination(53647U);
    msg.setDestinationEntity(98U);
    msg.autonomy = 251U;
    msg.mode.assign("BGOVPKXXGFPSKVPR");

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
    msg.setTimeStamp(0.538843186851);
    msg.setSource(45896U);
    msg.setSourceEntity(234U);
    msg.setDestination(59622U);
    msg.setDestinationEntity(0U);
    msg.autonomy = 201U;
    msg.mode.assign("TSHIFPFJYLOOGGNHEFMIEMMKQXJV");

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
    msg.setTimeStamp(0.426939320371);
    msg.setSource(23121U);
    msg.setSourceEntity(238U);
    msg.setDestination(51756U);
    msg.setDestinationEntity(92U);
    msg.type = 127U;
    msg.op = 152U;
    msg.possimerr = 0.535441769121;
    msg.converg = 0.0638863451045;
    msg.turbulence = 0.920081182765;
    msg.possimmon = 203U;
    msg.commmon = 100U;
    msg.convergmon = 76U;

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
    msg.setTimeStamp(0.490309828188);
    msg.setSource(54353U);
    msg.setSourceEntity(104U);
    msg.setDestination(40123U);
    msg.setDestinationEntity(190U);
    msg.type = 245U;
    msg.op = 244U;
    msg.possimerr = 0.720860079016;
    msg.converg = 0.783162802363;
    msg.turbulence = 0.338129901998;
    msg.possimmon = 143U;
    msg.commmon = 25U;
    msg.convergmon = 180U;

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
    msg.setTimeStamp(0.825478633151);
    msg.setSource(14223U);
    msg.setSourceEntity(96U);
    msg.setDestination(21103U);
    msg.setDestinationEntity(84U);
    msg.type = 210U;
    msg.op = 95U;
    msg.possimerr = 0.143261596614;
    msg.converg = 0.302049775658;
    msg.turbulence = 0.758282922936;
    msg.possimmon = 103U;
    msg.commmon = 117U;
    msg.convergmon = 16U;

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
    msg.setTimeStamp(0.675006628424);
    msg.setSource(14567U);
    msg.setSourceEntity(197U);
    msg.setDestination(45782U);
    msg.setDestinationEntity(218U);
    msg.op = 239U;
    msg.comm_interface = 213U;
    msg.period = 52703U;
    msg.sys_dst.assign("ERLCEWYCAKNTDMKKQDMSWSNLEGSAETDQINBOKDQHAYKZRWCVFMLDHVITVNRMLNKSLUJUHEBQWZTUSHSXJFLSZVAGPUUGCQGVJMVMHNBHBERRVTAYUGWNOIBVITSTPAIOJFEWZMMFPEUUJBUGCGCNKIYDPDHPXEZGPILZXXFQFAOXCJABWOGPROLZLKKNFSD");

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
    msg.setTimeStamp(0.625099579677);
    msg.setSource(45506U);
    msg.setSourceEntity(116U);
    msg.setDestination(17788U);
    msg.setDestinationEntity(168U);
    msg.op = 28U;
    msg.comm_interface = 173U;
    msg.period = 11642U;
    msg.sys_dst.assign("ZIMJEJIELHFPPUOOMYXMGRKSLAZHQXURZDRLUUVQZJNPZSAYBRDOTHOXVHBTFJIRXHTTIEBVTTFFRSPCDGWNMYWAJQOMLSKCPSGXXBADFBNOIWHNDSFQKXZUBUQZDNBMKEYSLTAGFERGYCRYKZNCCALVZIDMWIHLEMXTJKDHGNKSWHTVCKXJYVEBFVNN");

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
    msg.setTimeStamp(0.252601436905);
    msg.setSource(37087U);
    msg.setSourceEntity(251U);
    msg.setDestination(51646U);
    msg.setDestinationEntity(192U);
    msg.op = 62U;
    msg.comm_interface = 110U;
    msg.period = 19098U;
    msg.sys_dst.assign("YBXRGCNFRAOOEQHWOQZPXGTXTJUJXJFNMYEKASSTGIIFZOZQFLOPWDFWWPQFCYKCEPZMZTCZMGJDVVEGOWLYODGRLKLWJDILAGZPXAYQVIAUOUYMVKURJBDBHYEKUKGCZSNETDNIIBHRUMKHFXADRUKSJWVYSIPHEWQASUBCMEBRUWQFEVVQQARASTRPMXHYCJUTYNPOXDCIPLTHZTNQSBJDVESWBDSTMCPILOCAKNRH");

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
    msg.setTimeStamp(0.673039229554);
    msg.setSource(35795U);
    msg.setSourceEntity(162U);
    msg.setDestination(17953U);
    msg.setDestinationEntity(50U);
    msg.stime = 1630226763U;
    msg.latitude = 0.617330747174;
    msg.longitude = 0.293077108974;
    msg.altitude = 63039U;
    msg.depth = 33799U;
    msg.heading = 18132U;
    msg.speed = 15394;
    msg.fuel = 57;
    msg.exec_state = 65;
    msg.plan_checksum = 28524U;

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
    msg.setTimeStamp(0.959462945881);
    msg.setSource(1388U);
    msg.setSourceEntity(138U);
    msg.setDestination(56106U);
    msg.setDestinationEntity(221U);
    msg.stime = 3919008452U;
    msg.latitude = 0.526238644117;
    msg.longitude = 0.59234458409;
    msg.altitude = 50163U;
    msg.depth = 36156U;
    msg.heading = 52001U;
    msg.speed = -18373;
    msg.fuel = 24;
    msg.exec_state = -34;
    msg.plan_checksum = 15203U;

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
    msg.setTimeStamp(0.0162164570901);
    msg.setSource(4141U);
    msg.setSourceEntity(198U);
    msg.setDestination(6637U);
    msg.setDestinationEntity(45U);
    msg.stime = 2622049116U;
    msg.latitude = 0.41625303004;
    msg.longitude = 0.802364937387;
    msg.altitude = 8822U;
    msg.depth = 32173U;
    msg.heading = 9828U;
    msg.speed = -11185;
    msg.fuel = -16;
    msg.exec_state = 64;
    msg.plan_checksum = 6626U;

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
    msg.setTimeStamp(0.937471467978);
    msg.setSource(5772U);
    msg.setSourceEntity(52U);
    msg.setDestination(1786U);
    msg.setDestinationEntity(174U);
    msg.req_id = 12268U;
    msg.comm_mean = 203U;
    msg.destination.assign("UYSTQXAUOKIFPQBRJTLPYJVCOQOHEUWOLVYQMXIIRSCEABJXGMHJHGLXYKXCOEZDDACKEJRXGKMULKHXZLMSHLVSNSEAFHNNQCKCJRCPSAP");
    msg.deadline = 0.968508121313;
    msg.data_mode = 125U;
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 41350U;
    tmp_msg_0.sys.assign("PPNCKALOCXVACKHNMBNLJVQTSWYWTQFIJODYSBEZJPBUCFWEQWDWXLWJEKVIJMGDGLZEAYSTVSFOYOSRIFPGUSRMOZKLUQFGRSTNEUJOVPYLCGNVIACMQBAIUHJPDHEKNDWVTDOERSUTRMEUIMNZHPITZJYWAXLHHRQJFKXWGAPEUTIOFZLQKGLHLQFXMFVNZPXFHZQXKXQUYDJXGYTBWOCRGAXKPRB");
    tmp_msg_0.value = 0.357241801819;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GVPUEQRFURHZQUAPDRCYETRJXJXPHVYBYBTLLTGDKKGTNCDYFZWNFORJIAEJQIZFGGNOCBZYGTDUQFKLNCWNNWIAGHAZPESECIKLYMRGODTFVSQNVSXTES");
    const char tmp_msg_1[] = {45, 38, 63, -9, 81, 77, 42, 14, -90, -7, 20, -15, -79, 91, 72, -22, 105, 95, 67, -32, -4, -113, 21, -73, 34, 78, -80, 99, -89, -35, -95, -90, -75, 47, 114, 1, 10, -21, 3, 115, 110, -64, 102, 47, 40, -115, 61, 102, 76, 27, 32, -82, 71, 29, -14, -3, -30, -77, 8, -4, -8, -52, 84, 46, -63, -94, -34, -109, -49, 58, 40, 121};
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
    msg.setTimeStamp(0.469104716154);
    msg.setSource(5253U);
    msg.setSourceEntity(120U);
    msg.setDestination(108U);
    msg.setDestinationEntity(115U);
    msg.req_id = 23655U;
    msg.comm_mean = 197U;
    msg.destination.assign("TOMQMJLPUACXKRFKBWZNPVNZIJBWKPENUWUIVTWOMNB");
    msg.deadline = 0.47808730963;
    msg.data_mode = 80U;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 173U;
    tmp_msg_0.flags = 164U;
    tmp_msg_0.description.assign("RPIIZFNVOYXYLDNUOUPNNGPTDAQLONQKEXQWUSIYPSRFDMV");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("IMXBAAFTJKTBDDRCNOROYTVEPWS");
    const char tmp_msg_1[] = {124, -7, -70, -71, 10, -28, 59, -76, 2, 55, 98, 77, 92, -44, 51, 82, -4, 83, -83, 41, -72, -28, -113, -24, 106, 0, -24, 33, -107, -19, 24, -2, 62, 80, 19, -97, 38, 4, 47, -59, 5, 94, -51, 70, 61, -79, -66, 71, -55, 88, -127, 100, 28, 113, 99, -33, -46, -24, 31, 41, -111, 4, -103, 45, -86, -96, -114, -33, -49, -99, 64, -28, -65, -59, 77, -116, 70, -119, 76, -124, -68, -64, 123, -45, 26, 54, -46, 120, 104, 0, 94, 3, 73, -42, -24, -76, 82, 16, -65, -76, 61, 109, 96, 0, 62, 3, -104, 6, -84, -34, -66, 125, 55, 109, 20, 76, -112, -111, 3, -73, -87, -109, -92, 19, -15, -72, -100, -60, -68, 66, 27, 110, 106, 42, -52, -44, 75, -95, -80, -75, -98, -113, 109, 31, 103, -22, 119, -125, 97, -104, 96, 52, 25, -93, 84, 53, -83, -7, 30, -53, 41, -51, -10, 89, 116, -66, 61, -95, 5, 38, 12};
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
    msg.setTimeStamp(0.418185813606);
    msg.setSource(17905U);
    msg.setSourceEntity(18U);
    msg.setDestination(55964U);
    msg.setDestinationEntity(87U);
    msg.req_id = 25495U;
    msg.comm_mean = 198U;
    msg.destination.assign("CIGRDXBXFJHWOYNMNUJHVOSEFKSSXYRVIIYCDIAZJUIKHMFSMBSXLJNPMJJSXCSXSLBGNKUURKRWQDTWRRRAOVMMXWCVQVPZGVMKMLONUZLBKTQUTKQQLZECGMQFNTLA");
    msg.deadline = 0.43749921593;
    msg.data_mode = 71U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.path_ref = 4229886811U;
    tmp_tmp_msg_0_0.start_lat = 0.444985395346;
    tmp_tmp_msg_0_0.start_lon = 0.965254989043;
    tmp_tmp_msg_0_0.start_z = 0.652488427013;
    tmp_tmp_msg_0_0.start_z_units = 235U;
    tmp_tmp_msg_0_0.end_lat = 0.128663251418;
    tmp_tmp_msg_0_0.end_lon = 0.430144981234;
    tmp_tmp_msg_0_0.end_z = 0.545636576767;
    tmp_tmp_msg_0_0.end_z_units = 232U;
    tmp_tmp_msg_0_0.speed = 0.851685759662;
    tmp_tmp_msg_0_0.speed_units = 184U;
    tmp_tmp_msg_0_0.lradius = 0.622260572837;
    tmp_tmp_msg_0_0.flags = 69U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 33138U;
    tmp_msg_0.custom.assign("OKPHGIRXQILXGOUBTPGTWDJIOPTAHZQVEKDMNQRTCQLMRSPWVGEULFVVLEESFMPJIACIRGBRVZSZLHHCDEANINCEJFCJUZWTXMFJMIULBMVAWRBHWSMDXPZSOZHQYWSENPNHRGQHMOGFVPFOSLLNBTRCJDUTCTCBPDXBBKPSAASXYVETQWYVFKCQWDXUMFLKBDNIYJYGAKFVGYXGKYOQZJFHYOWJMEUSNZXZOH");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("CYRIAGUOFHPSKKZJMUUWQEUQDSSRSEFXKWDJIAOMVQHWVJUYHUVDDZTCDTSKPSQMEP");
    const char tmp_msg_1[] = {-108, -84, -68, -119, -82, -54, -39, -94, -97, -70, 20, 30, -13, -52, 19, -29, 10, -123, -99, -69, -99, -41, -7, 33, -43, 91, -95, -7, -55, -74, 87, -16, -1, -98, -119, 13, 30, 117, -66, -123, 115, 58, 92, 20, 17, -82, 95, 58, 18, 78, -70, 100, 105, -43, 100, 97, -116, 123, -87, -64, 58, 24, -38, -112, 44, 4, 86, 2, -115, -120, -17, -46, -99, 121, 40, -80, 63, 34, 80, 120, -54, 108, 84, -29, -83, -64, -5, 120, 125, -57, -38, 99, 57, 116, 69, 57, 50, 104, -42, -91, -116, 107, -31, 48, -15, 110, 10, 13, 4, -92, 117, 104, -121, -117, 57, -37, -93, -29, 9, -109, -37, 36, -67, 103, -46, 80, 68, -53, 29, 111, -49, 27, 90, -58, 78, -30, 123};
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
    msg.setTimeStamp(0.248555559853);
    msg.setSource(64090U);
    msg.setSourceEntity(95U);
    msg.setDestination(26162U);
    msg.setDestinationEntity(226U);
    msg.req_id = 50872U;
    msg.status = 125U;
    msg.info.assign("DMFOTPMSDTKNCHHCKSAOZKDOUYNVLKWWVJWQPIQRZNMPXTRHXRBAHIOVXNIWINBUMYFPCNCMBUYHGNYHTWXADPCGBDRPVWJDIULPQFIDONAF");

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
    msg.setTimeStamp(0.200534367069);
    msg.setSource(8091U);
    msg.setSourceEntity(24U);
    msg.setDestination(11669U);
    msg.setDestinationEntity(12U);
    msg.req_id = 62509U;
    msg.status = 85U;
    msg.info.assign("GQIUUDNIYBPSHHLVCPJSMCKICHPAUXRFGJOAQOZVOVLVZXNGWSFEABTHQWPMMXXUCYKZFWFDJMSNO");

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
    msg.setTimeStamp(0.864304612627);
    msg.setSource(64247U);
    msg.setSourceEntity(77U);
    msg.setDestination(35909U);
    msg.setDestinationEntity(160U);
    msg.req_id = 26876U;
    msg.status = 65U;
    msg.info.assign("MFFYVYCUVPJYDHZBUZZEPXBSREUDTOQOPXGJHQBLEUQVKJJKCOLEYRBFTGRAWXGCGIVRLMEPB");

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
    msg.setTimeStamp(0.186588940632);
    msg.setSource(36045U);
    msg.setSourceEntity(38U);
    msg.setDestination(30412U);
    msg.setDestinationEntity(162U);
    msg.req_id = 48337U;
    msg.destination.assign("QWJEZOZAQRYNLZUFMQJMYAOFALVHLIEYVXMFCZTSCCHGPZHXUEPCUDPMSZJXETTRQILGRZNGZAQUQWAQLGOSPFNRCXBXRLASQABFSHAJ");
    msg.timeout = 0.134912108745;
    msg.sms_text.assign("TXNNNCFJZOFNTNPUYGVZRSKXDSQWFKVROFFADBWCTMOOQHOFLMSQMZOSPQWWZXJFIHGYLECHRJSYBWGXBABYNEGDJPGJOZYCLHANQIDITVJLNRSLEPDKKOGGBLKIQEDEUDHSXCZASKEUMHQHMKFUIQVDMXECSCSJXJIRMHTAGLFNMIXDZWXOOARGRABKV");

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
    msg.setTimeStamp(0.548760701564);
    msg.setSource(17915U);
    msg.setSourceEntity(154U);
    msg.setDestination(53384U);
    msg.setDestinationEntity(12U);
    msg.req_id = 38067U;
    msg.destination.assign("OTZCGIYZVRUYDWTEKLGLXMZRYKAEZPYLQVHKSQZHWERKXPXDHYZBCTHTTGVUXWSQIEBECMIQNFJOKKGSTIIVENDXXPYQJMO");
    msg.timeout = 0.160014806804;
    msg.sms_text.assign("ROAEUGHWUSCGAFIHDPUSXSKQVFFJHXKJYYBCIDBISKCFIJFAQICKGBDDMEBTMFEGEWGVULPWEFMOXUDHBBPAMZYSJSQAUVZDVNCUQEMVOIADKZBTAYWNGMZPCC");

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
    msg.setTimeStamp(0.561666337456);
    msg.setSource(52477U);
    msg.setSourceEntity(80U);
    msg.setDestination(54441U);
    msg.setDestinationEntity(151U);
    msg.req_id = 46483U;
    msg.destination.assign("UBPLZWHJICTEBGSSSZTCYWOULWKNPERBVIELXKVUCNTXQRXMQMAPPSVJCFAMOQYAWDVZCBLQCXMWDBWOUMEHFTEBQRCJVSGNMGDJIJBWNHADKLROQMRDYNTALVIXUPPZYJCSHFNWJDIKXGKPIGRKNOCUQYRLEKGKXHRPIMATELVAUZGDHERBBZQPBUFFHTTGIWFIXOZMFHVYJFHEOSR");
    msg.timeout = 0.769584641815;
    msg.sms_text.assign("AGRUMOVSTYVDTZHJXWCXEOQXHIBJIQOPBEVQBRUTIVDITQMJQGSBLECBZHAENYPWPFOZHLWSVMHSFXLACMQNZCDMCNLPFGNZPMSQEAILDZKWJCELFRTNLCJVSKUGGTOLMCKEKECQPRNJKPHLGAFKDHYYOERXVMHTTKVMZWUJAROYGZIFPUYQUNBBFTWODOPIBQIBZJFAJJUSAGSUBDPWNNELUGZYDFAXMHSRDKTYAYVWWXXVOXNRYRRI");

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
    msg.setTimeStamp(0.911560405477);
    msg.setSource(8143U);
    msg.setSourceEntity(157U);
    msg.setDestination(8014U);
    msg.setDestinationEntity(209U);
    msg.req_id = 20206U;
    msg.status = 188U;
    msg.info.assign("WJMKHCCEYXHWDFCIDPHWPNJEXWLCFWFOMIABFFNIDVAPSOPEDXMQRTTVUROOIVZGBSDLPRAGKAFFFGUXWRAISMVCZMBEJGOCHEPAVZIPCABHNQMPYBZNKTQZSZAEVQIOJZBFQYQSJBJXLDYEQHURKZJLOTUOTTTPMVGFUWKUSUDNJLQLOZSNYMMHSGXBNERRRYULTUJKPXDNXWSSARCBVLILHVYQYETGXGAUGILKNKBYMNYJHXDHCWK");

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
    msg.setTimeStamp(0.346476462451);
    msg.setSource(1421U);
    msg.setSourceEntity(184U);
    msg.setDestination(42859U);
    msg.setDestinationEntity(52U);
    msg.req_id = 7404U;
    msg.status = 105U;
    msg.info.assign("VQSLERRBEHLFAWBQFMKWYUTWQJJBJWOFSXFTOFTXIVKGIPFKXBCNEVXKYUBEMYBOMSRQSNQHNMRQGPOULMANELZVPAACFQXWUROIHUVBDCAZDNSRHTZHMSDVJJPXVYKAZLGOGXYZYCUSUFWYDLOMZCIGFBJYJKISDNDVTQANZEIGPTRFMKHCVWHIGAYRJITYPKQOJWNMPCSX");

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
    msg.setTimeStamp(0.00826995927492);
    msg.setSource(16091U);
    msg.setSourceEntity(94U);
    msg.setDestination(50487U);
    msg.setDestinationEntity(219U);
    msg.req_id = 8533U;
    msg.status = 12U;
    msg.info.assign("VNDNXEMAZRTFBWHQRFOTQWJSNOLSGYNHBWYKPDRUPHBFAMZYISVKCLMBSAZGRQJSQLKICEKZCBTCLQTKSBXCOKJTTYZFEFKZWVCPDNAVHURMPQQHPHLZWNUWEZGHRQTVOMTWYIGIXHXUZSMKXIAWMHWVYXJF");

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
    msg.setTimeStamp(0.826614817123);
    msg.setSource(5780U);
    msg.setSourceEntity(21U);
    msg.setDestination(64662U);
    msg.setDestinationEntity(201U);
    msg.state = 180U;

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
    msg.setTimeStamp(0.309115248813);
    msg.setSource(15536U);
    msg.setSourceEntity(28U);
    msg.setDestination(19771U);
    msg.setDestinationEntity(95U);
    msg.state = 39U;

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
    msg.setTimeStamp(0.32463205123);
    msg.setSource(23663U);
    msg.setSourceEntity(209U);
    msg.setDestination(15933U);
    msg.setDestinationEntity(166U);
    msg.state = 38U;

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
    msg.setTimeStamp(0.913667083971);
    msg.setSource(16212U);
    msg.setSourceEntity(26U);
    msg.setDestination(51026U);
    msg.setDestinationEntity(105U);
    msg.state = 57U;

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
    msg.setTimeStamp(0.00665687862601);
    msg.setSource(40537U);
    msg.setSourceEntity(51U);
    msg.setDestination(22525U);
    msg.setDestinationEntity(59U);
    msg.state = 51U;

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
    msg.setTimeStamp(0.911388500056);
    msg.setSource(58333U);
    msg.setSourceEntity(77U);
    msg.setDestination(20130U);
    msg.setDestinationEntity(7U);
    msg.state = 235U;

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
    msg.setTimeStamp(0.530106511416);
    msg.setSource(32309U);
    msg.setSourceEntity(114U);
    msg.setDestination(28703U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.160358188391);
    msg.setSource(3927U);
    msg.setSourceEntity(157U);
    msg.setDestination(42766U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.570548934909);
    msg.setSource(34550U);
    msg.setSourceEntity(183U);
    msg.setDestination(45698U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.0310049854059);
    msg.setSource(55564U);
    msg.setSourceEntity(178U);
    msg.setDestination(62015U);
    msg.setDestinationEntity(35U);
    msg.plan_id.assign("WPJHCRDLGTLVNYUZEOKZWYCTDLSFNHGZOKXLMIHWMPVMQDOACWMGUHUJFZEBRLGZEAMPPNSFZFOXDRORKUF");
    msg.description.assign("KSJGXURQIIYESBBYFFPNVFLOVCBPNDLPCERUBNIQWRBOEWZCHTZMPWRHCMCGKGGYULVWMXZULSIIFOFSKQOEOCEDAMPWGBUQHXTDMTYNEQWNNPZRACAPLIIHVWJQTUMUYWCXJTEZMJILRTBSPFXRQEXFBDHHKSQKJGDAHJEYOTJDXGUWXQFJKNGVSVALKMHPXWCJTDKZLGRZYDBOMIZZFRQAHUOMUOYCIANAZYLVSRAANEOKDGSKHFVNT");
    msg.vnamespace.assign("PSIBXUBCHFOLALATEZNFZSPTDVYNYMMQZNGUYOVNAZVENKSXBPFLDAGTRZFPRWQCWXCKUYSNPGKQMXBRLTERUAQOQFFWPNAKDGWVFDRAOZIIFBPAXJFYYCOVGGEBICHHSQSLVQGNLEZCK");
    msg.start_man_id.assign("ZCMWPLJMBOXHAOOIVOUISUGFNRMQPJXBYGTZRBTCAZUAKSPJKPYKDKUWVZEEFNL");
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 229U;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.593987008225);
    msg.setSource(57862U);
    msg.setSourceEntity(173U);
    msg.setDestination(23351U);
    msg.setDestinationEntity(169U);
    msg.plan_id.assign("ZOZMQXKBSVQYMKCQRTSOLOTEVTHVUEZPHHOLQBCJZFZBROXRROSNKMWNKZBNFMSSXISGWYZPHJAVKJFJCRWYJQBANSXAXWELHYTKCLBIZHGDTFYNVGFCVDVEPZDXUHXRJDORAAPXUGEYWZGFXA");
    msg.description.assign("BLDQTYMEZXXVQNYYQNUKJOCQJUHTGCRIBVOMAESEMPVHGLVUANRVPQXTXKFHHCFLBHUKAPNTOXUTNJHRRDFENKPZKGYDDWYOJNMQZOJSEBVLIDDJBXCASKDZRIOCLTAWGEKDIAFCEXCCG");
    msg.vnamespace.assign("DKSXWMADYJJDVQKNIAGRZJCHZBFJOZWTAQJYIKUUYOMRXOIOZYNLRDQPGEEYHLNANSFDYCXGOAPULQEOVVWUWHTXRSJMAUVFVLCQKKDYIJCDNOTXSBILHQWKSLRXXVCPZDTRANXHKYBMUSMWHEVXQQBH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NGNMKBRBEQLNZESHCHSQXRRXFFOXQQFYTMAOYXTWZECGGZEXDKLOSOBDYDRWLXVAKNVEXOPHINJJBENWUDFWHUIKKDGICCKCK");
    tmp_msg_0.value.assign("MRZHTYPQHATBXMXNUDHFICBFDDYR");
    tmp_msg_0.type = 175U;
    tmp_msg_0.access = 73U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JIMIRLMPSTXDRQVQJTOWZGPYRYIYJJVXSWEIZSCHKOCLVAZWBNLTNTWEHMONCHIFSBQXJYORBMKDMBZATTVCNQFLGGFNUASUHIIJWGSIYDQGLRPZHAVAHWUDJMKBKMYPXORFKTLYSVQAWOQPXDBFJOUKZSEVPUKNABPYPKGWKSEQXCGNUZGDUGFCAJDFFSCVHTCCMROVMTEARLNGYIVXYWENOAUDIZRBKHLFXZUERDDUEHPLBZBCEMF");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("KBYOVYZPNIVVKDYDHSZLVTNBHQONONYDQSJUHRMNSYMJSCTIBVJKPKZXOQOJXGCLBFLFFXQXNGUIQARFRLRPZXPLIYDEYYLJMZMLVMJQEDWWIWFIHKATEVGFCTVQFHMKXWWMISOITWPWPZUCOJUFGPDVAJOEYJXQRUNCZPHWPGUTAEUOCXANVSHOGCCEDZMHQNAKXB");
    IMC::Goto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 28044U;
    tmp_tmp_msg_1_0.lat = 0.254369479798;
    tmp_tmp_msg_1_0.lon = 0.847287025485;
    tmp_tmp_msg_1_0.z = 0.999293361916;
    tmp_tmp_msg_1_0.z_units = 121U;
    tmp_tmp_msg_1_0.speed = 0.0117796677026;
    tmp_tmp_msg_1_0.speed_units = 21U;
    tmp_tmp_msg_1_0.roll = 0.581767774321;
    tmp_tmp_msg_1_0.pitch = 0.953824359882;
    tmp_tmp_msg_1_0.yaw = 0.121637860705;
    tmp_tmp_msg_1_0.custom.assign("IADHXTTWDUTFVXSEHOLYQLNTCAEBCYXSOVKRODAYPQQSKPBLBVNPVND");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::LblRange tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.id = 80U;
    tmp_tmp_msg_1_1.range = 0.508040797476;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.764786112069);
    msg.setSource(33449U);
    msg.setSourceEntity(223U);
    msg.setDestination(35283U);
    msg.setDestinationEntity(74U);
    msg.plan_id.assign("NPCMQBSMFUUQVSLUVMXZTHFVBAMJDFNJUIHAZNJNALXORLJYAPAGDSEYJAPQTWSUHIQGNERUUBOZVXJMQERZKZGMCTIMYNLDOCOPSLXB");
    msg.description.assign("MDLAECKJCUGNZMWISKAFFLAFHDZCHDXOIRXTRPHJCXYJTEFFZQZZXEWKFNUKINRAYFPIOFVKUYBUIBJVVNYAZGTVSNBPUWJBCSXCVJBPIYURVXOPASANSPFSVKBXHBYDQHQGDZPYGRKLOMQGXECRHMTYTGYNVLBOJZWUWEMHUVHTZWVDQERWGGRJGSQUOBPYFKLKNTODTHAPIJQHOQMLIQRMICTWOMXEWSGLPEANW");
    msg.vnamespace.assign("AYWAUYOWRSZMEPJFWDITJYQTHAHSRGCVEBKSRQUDPBMJMAVUTOFZTEMSDIYZIBKYTFHFOLAQLJYZHFVSPMGSRLCYXBAZHKNMIVDZZLPO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NXXQSZPYOWKTVTUGVGLM");
    tmp_msg_0.value.assign("MEPDDVVIZEMFQKATSAN");
    tmp_msg_0.type = 229U;
    tmp_msg_0.access = 150U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DEENFAEAPGBSGXQHTVCLURKIOYTZMKJMRLZHLSOEVKESTYETPGDFMJVGUNWMJQDZQDHHKKUSRBGWDBFIRCTPCFRNXKWLGEIJQTSXEAKZNMYUWSBAFHHLMXQPPIUCKORLAMSIONVYTIDQNRKINFMOICJJUWOHJASHQFVPZBEVBCOJFDRWWCDLZXUMTJYWYZRVLVAF");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("YTBRNRZIUYBHOEKHVJCHVQUE");
    IMC::FollowReference tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.control_src = 40624U;
    tmp_tmp_msg_1_0.control_ent = 129U;
    tmp_tmp_msg_1_0.timeout = 0.514216666278;
    tmp_tmp_msg_1_0.loiter_radius = 0.159823852855;
    tmp_tmp_msg_1_0.altitude_interval = 0.307424311617;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::QueryEntityState tmp_tmp_msg_1_1;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::VehicleFormation tmp_msg_2;
    tmp_msg_2.lat = 0.584179924084;
    tmp_msg_2.lon = 0.233381010449;
    tmp_msg_2.z = 0.769776068019;
    tmp_msg_2.z_units = 110U;
    tmp_msg_2.speed = 0.312058002292;
    tmp_msg_2.speed_units = 20U;
    IMC::TrajectoryPoint tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.x = 0.417383318123;
    tmp_tmp_msg_2_0.y = 0.504062037498;
    tmp_tmp_msg_2_0.z = 0.185926350591;
    tmp_tmp_msg_2_0.t = 0.934941244762;
    tmp_msg_2.points.push_back(tmp_tmp_msg_2_0);
    tmp_msg_2.start_time = 0.941239375993;
    tmp_msg_2.custom.assign("HESVQUCODJMCNFRYDOLEHZJTCFQBZUANHDVLJKSIAQJSYNVVFFDAWWFONKZDKTNZDBYWZACZLQZCETMLIFBSPKNMASRISIXUKJWVJKNBYHFQXAONMUNGVXDSGCZYQDOVTYAMLPIPXWUXOBKLBAGUGEQSGHHMCLUFXRWXOPRFQCDXTHPRWSBEETJIURJPLVEBMEKTLBWJYHRRKXGNAQPTZCTYGBMUUVQFEGPDHWJCHOZEMRGGKISAVYWXIRIIP");
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
    msg.setTimeStamp(0.472086568312);
    msg.setSource(51225U);
    msg.setSourceEntity(194U);
    msg.setDestination(23204U);
    msg.setDestinationEntity(34U);
    msg.maneuver_id.assign("RFRPSZBBAZUTHTXYVBUKENTUGEJAOQKXXU");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 45519U;
    tmp_msg_0.lat = 0.732735638622;
    tmp_msg_0.lon = 0.819534792455;
    tmp_msg_0.z = 0.895594039785;
    tmp_msg_0.z_units = 230U;
    tmp_msg_0.duration = 17075U;
    tmp_msg_0.speed = 0.840347122169;
    tmp_msg_0.speed_units = 88U;
    tmp_msg_0.type = 238U;
    tmp_msg_0.radius = 0.603410738392;
    tmp_msg_0.length = 0.678475001802;
    tmp_msg_0.bearing = 0.959559558933;
    tmp_msg_0.direction = 10U;
    tmp_msg_0.custom.assign("AMGHVEIASYBEIRKSOBCNXSOYYJZMCLUHPVHJOOTRCNUUVJGKDOHUCLBAQ");
    msg.data.set(tmp_msg_0);
    IMC::VSWR tmp_msg_1;
    tmp_msg_1.value = 0.0353628037003;
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
    msg.setTimeStamp(0.780434962285);
    msg.setSource(37301U);
    msg.setSourceEntity(238U);
    msg.setDestination(39222U);
    msg.setDestinationEntity(15U);
    msg.maneuver_id.assign("CKZQFSVSRFNNARPAYPIVHDFRQKMLAGMOWTFFBGMZZMVLPQCYMHHYTKBTQOUYYJZXOGVNAQLXJAITRPROAAPJIYBXHEXHITRHKDEJDFZSZBKCWLIMNXDKUWCJKTVWOJYCQCWNXRTWUDAPHUWCYMRDMGUTGPWOIQVOQKFSASEVSLWEEKVNXHCUEXIBNKVRJG");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 7306U;
    tmp_msg_0.lat = 0.768828739417;
    tmp_msg_0.lon = 0.747665983045;
    tmp_msg_0.z = 0.847674292885;
    tmp_msg_0.z_units = 77U;
    tmp_msg_0.speed = 0.0526358001725;
    tmp_msg_0.speed_units = 12U;
    tmp_msg_0.bearing = 0.0237081012064;
    tmp_msg_0.cross_angle = 0.845057692172;
    tmp_msg_0.width = 0.130214123103;
    tmp_msg_0.length = 0.725130441759;
    tmp_msg_0.hstep = 0.880562706792;
    tmp_msg_0.coff = 25U;
    tmp_msg_0.alternation = 41U;
    tmp_msg_0.flags = 55U;
    tmp_msg_0.custom.assign("KEULBLGMOLQYMDHFZBRACXVYNCXFXSQERTUBKUHJQDPZFSWYXTCCLOIJVFEUGTGVPJPIZCPHMTHFNFOIHZNETGIQRBPEWGNQXVIJIDQSYMSLAYYIHLRDOYOKCDQGDUPWWGRJRNKZWIKGSHWTFJPFEEQBWIQWNELFRWXYEPQJTNFOXDAKNUVZUDCEUBMDLZTASSLGCILZHAZVAKBSBHNACKJMYNOXJHOXSGTXUURDPKJVAV");
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
    msg.setTimeStamp(0.148471443893);
    msg.setSource(653U);
    msg.setSourceEntity(119U);
    msg.setDestination(16788U);
    msg.setDestinationEntity(183U);
    msg.maneuver_id.assign("YWCZPMZVEIWKAIHDLDADTOUGUDMZCIRQZJPLBVESJRRGK");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 27119U;
    tmp_msg_0.lat = 0.70745903725;
    tmp_msg_0.lon = 0.618080558514;
    tmp_msg_0.z = 0.576229755072;
    tmp_msg_0.z_units = 21U;
    tmp_msg_0.speed = 0.681606505571;
    tmp_msg_0.speed_units = 189U;
    tmp_msg_0.syringe0 = 109U;
    tmp_msg_0.syringe1 = 87U;
    tmp_msg_0.syringe2 = 180U;
    tmp_msg_0.custom.assign("UKIZDATSPBDOYRQNAYHODNHJIJYWCFTOTUXNRLFGOHCEXLYRZEXIDEGXACPCBTBMPRZ");
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
    msg.setTimeStamp(0.728865474799);
    msg.setSource(9022U);
    msg.setSourceEntity(187U);
    msg.setDestination(8453U);
    msg.setDestinationEntity(57U);
    msg.source_man.assign("WCWGXSUHBCOBNEEHTQKKAVBGKRVOLHYQXWMPFYCWVFJFGSUBZFUDKDJOKIIYXWNIVODHFFUGVJMHMGTZPIKTBQZPMRTLKDQJWLUMRCMQHCXPLOIJXCAJZNBVGDSZCOREERSTHUXYKUZLAZCRNYYWNBPRSAJWLAFGPLIDJZVCTCIKAOQYAUOXSXKBTSTEQFFRJEZDMTUDDVBMDOYEXASMPGLGNHPIGVSQOMHBVXE");
    msg.dest_man.assign("CJGAEQMLOROVGRXFFQKSAEGIHTTFHYAXVNCPUNGIEKXZCLFXPYYCYXZUUBQSOTHFSNWTKQNUJAWAEEBNBOWJXCSIDOJBFNZYRNAMZMBMHZEIVJDEPZDGPVDRSJJKALHKQ");
    msg.conditions.assign("YMPFMTYIKWPLHFTWJOHBDWIMVJBSTXAGHDDWCRQZERUYCXTXVQZXVCOGEIVUAMGQXTUSBAKNCIJOGUMGFFIPNYWQLDZXWMUXFOYQFJIBAMNOMQARUNBKWULGBASVDUNXSSZQN");

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
    msg.setTimeStamp(0.269354617505);
    msg.setSource(44201U);
    msg.setSourceEntity(252U);
    msg.setDestination(62258U);
    msg.setDestinationEntity(243U);
    msg.source_man.assign("AZMATHGHESOLOZJBDQCLS");
    msg.dest_man.assign("QHTOFFUOOXUDKCBTVKQLXPQTHOMEYTCLWVUUPYBSKZJPXCPBSKOIULRLCCWWJGZXUIJHHJNIBJFEYBONKYLHOZHDMJAWZZXECBLKINNMXLRDMMMXGROGIMTFGGDDSKSHVSUKRRHNNPVIBAWVERFIAGZBQYJCKDTBBSGIEGWIUJJPNECLRDGFMRATWLDAYJSIDWSPCXUCMDAPFSQ");
    msg.conditions.assign("EDMVGVRCWDSYLIDFIYRRSUERKYALHNZETQQRQWBOZUYZZV");

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
    msg.setTimeStamp(0.337270493352);
    msg.setSource(40589U);
    msg.setSourceEntity(62U);
    msg.setDestination(1991U);
    msg.setDestinationEntity(148U);
    msg.source_man.assign("IXGORUISCMKEHQSPZKUZLAEDXEWJDHVVPMOATBZYERNPLBYZSQXQRZNQRSGWTDNASNITOCLFUVJRUOFVZXLHBUDCHHUGVAGPRNJKLTIXVKYLHWMCPSYWRGSFYLWIBCZZJHUAYBGQQUDGNZVAXEVNYLOAIHKDOZITMPJUKDJEJKPDOBBD");
    msg.dest_man.assign("EMWABMGNYQTSLRISOKWEXMZHHLUFYLCJRERUWCSMNICPGCTYFYMNEPFEAZKULVFYZSMGFYJEAPVJNPJGOWSESJWOZMULFXNJLBWGOTLBBKJUVLQYCGXHYFWNTHVBDINBIHBKASCQOPURXCAZKOEDKGHOZQNQHRZGBTUADZBEPQRGQMDXDNGXHRMMTZHYVIPT");
    msg.conditions.assign("SIIXRAHZDIOEJATGARNRILCMNIEOYLTKKTEJTMAGUBUGXNSJVQFBVTYZFMPONNWMMUHUFGLEVAFWHCOFUVWJFHWDDCCGVFKQODACNBXYDABJSSHPGQZQFWFOEBWJYLNGQTVMOSWEUWDPIYXEINTLTZAMUKCMXQGQUVJDPSLPQIGPDEPMDANLKLVRKRWSWHVKRYIALDXHZYNCOSMPURJBLP");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("LEUIACDRYIWFDKNIJYBJSOLWSUROSYFOXHYWRRAGYDFREMHLPCCNJLSZYTXXDFBBKVPUJFMWJNOLVUZZGAREMXELVUDNOHKBZPTUUFMKKZCGJCBSSXGMEQIVSZJTMKPAHRSMUDPIBQPUKCNRTCFOGDQCBKBXNGVXLFQHFEWIBHNONPTOV");
    tmp_msg_0.max_speed = 0.431501059121;
    tmp_msg_0.speed_units = 117U;
    tmp_msg_0.lat = 0.116193086298;
    tmp_msg_0.lon = 0.387452855611;
    tmp_msg_0.z = 0.967399572347;
    tmp_msg_0.z_units = 232U;
    tmp_msg_0.custom.assign("XMIKLLWWQGFBGSVUGGTRGMJZVJBBJTPMFUFIVPDYQXHYMJOJZOBONPOEMHINOFAYCRKIMABWKTWVJCKKEQRANUZWTNWBXZQCDDNBFPMTYFSLWXVGVZQCUINSHUNKUZCKWQYOTHHDSHEGPXASVBNNQOIJJLPUSESKVRYSLRESAFRJORNLR");
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
    msg.setTimeStamp(0.117434267996);
    msg.setSource(26476U);
    msg.setSourceEntity(229U);
    msg.setDestination(60161U);
    msg.setDestinationEntity(36U);
    msg.command = 91U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YJLZDUZXKQQVXZGAHYUGUEAHBRDXUATTDQYYWVKNPMSCOUJDLOSBLEENVLHDCOGBHBVMSQCPBFUKNTXDIKBZLPSJJABXQSUNMOCIBARGCKCFCIODJEPOLSSQANPPBHTIGQIRFJSUGJVUTMMWWAULHYYEAYGKNKHSGFMTJYHROKGWPW");
    tmp_msg_0.description.assign("OVTUAHRNKHEDZPXVOKNZQRQGEHEFGPFYGOHHQFBLXUMYPTKDBDPJGHBOVYOKSUJZQQZUSOQURGMEMRTPAWOBFFHCCQKUJJULFCGVNBRIQRVIGZALSNATWXNSHVOMFVIJCHLAMNIJEDFUPMCWZALLSELXEZTDQRAIYO");
    tmp_msg_0.vnamespace.assign("GEHBMLNYGIWNYACZSYXWMVOBIYCURVPFFWVQKFAJNKC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JCQZQLBECKBVEEUGUOTDNHYYZZDVXGMSHMOFUVCARMJWIPLAUAKMJWPSIIOHXXSHWZAHKQREIVZUPLWCMTTLTZQPZUQSLDOCFYDTOPOJSJRMVNBQAFMGBFDCNBEWKFPWXBDPNCWURZCXPRSMKKRXIGPDGKMTKVDEMOQHFHLYASTAZOSYQFHUCRAYAVLWNEENEGDJNHBUWSBTJBTIWUYGYNZQ");
    tmp_tmp_msg_0_0.value.assign("OXDYQKLYAEQAXMZTYVEHHUODMSTWDDBFGXJXOYQNOCOBISZURMAMWIFXRHGQTCURZGNLYZNEHWWTRWQPDJYRSPOKMKDIOBLUEFPYEVBWXZMRLAGKNFVIOQLAHUXTSCGTHLFSVAWXHCZBVSXM");
    tmp_tmp_msg_0_0.type = 198U;
    tmp_tmp_msg_0_0.access = 6U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WTMOFWEQBVSKCWKIBVELTYUWNZDFKMOAZJQMKETVPPABCUFVJCJEHQEZDUDMDEFGLCUHAGIBPUKBDSBXTJGOQENWCGHNXMVUSZKGXVIEORYRAJROVPNDXTHLVFSQQRFJHNNPXOVRIMWTXKIIUBZCERAULLJKEBLJPOXRVPKQMFYPDBWANANSJHTMFZWYR");
    IMC::UASimulation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 61U;
    tmp_tmp_msg_0_1.speed = 52972U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {71, -29, -64, -121, 107, -100, 116, 71, 65, 23, -83, -39, 1, -95, -23};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::VelocityDelta tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.time = 0.841183260478;
    tmp_tmp_msg_0_2.x = 0.431016785511;
    tmp_tmp_msg_0_2.y = 0.762020714528;
    tmp_tmp_msg_0_2.z = 0.83203280318;
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
    msg.setTimeStamp(0.282156909743);
    msg.setSource(49049U);
    msg.setSourceEntity(174U);
    msg.setDestination(52207U);
    msg.setDestinationEntity(36U);
    msg.command = 48U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KWEUCPIPIRFJBGODCQJCBSDRRTGELJWHYEHEUWZPLDIIZKKHKCUMRZJGAWHPURKEO");
    tmp_msg_0.description.assign("UNPHKGWFCOQEEOAILFDBSJVBQLNTCHGPAMGRRMVTVETBSTEVCUHHVIB");
    tmp_msg_0.vnamespace.assign("YKGNHCAOEDKBSLPYHMFRXTHOSXBKXMKUNUEAVPQEEOMTTJGGFKRVOWKDQSZQRQHTWPBGMYIPNGZGBIKHOAGLWDCBSWNQAJSROHZTGLMIUBOVXJNESAZYUPEVQJDKLZEETDIWVXCXFYRPUMXKXCLFVCLJSWHCKDMNWULZISMJNEDTJFFFCAPTYDRZMILCAAVZRCWUYIJVHYHXCLQVRQUYBGJSW");
    tmp_msg_0.start_man_id.assign("BICOCHGVLQLRMKOPIEBLVFBPTUORMZUNAAPUPYDWTJTSYETNAWOXSUOSQUZHLELRJAMGTENZHWJRKQFWXIVMZBITCHSYRCDWLDCPGMVGIBGXDSJVMZGYOQNNFPLKRHESAFDDAQMKPSHKIUXRXELVFLCAYOFNEXGHJXOWCJEARCKUZDJKNDZJHFWPJVURMFYBQWWJUDSNZMZQCBVXITGKRAYQZBNV");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("FDKMBXIKSIIWBDUVDAGXPBBJPNGFMNVQGSGBOQJAHDKNGJZJARCLHPLBDRWSOPRLTYESPZLCTLGRCYKFTKDSAUENXWCCMVXQSNHUOAZEQUNZRXVTWRCFKFQEXIWYBKMNELMSZPTTIJYRQHVOSLURIGYYMVFDBW");
    IMC::Goto tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 48590U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.122532740381;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.138267537606;
    tmp_tmp_tmp_msg_0_0_0.z = 0.416360871187;
    tmp_tmp_tmp_msg_0_0_0.z_units = 13U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.7050845414;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 157U;
    tmp_tmp_tmp_msg_0_0_0.roll = 0.616187977979;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.252274076448;
    tmp_tmp_tmp_msg_0_0_0.yaw = 0.422081100672;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("SPWIPMZTPFZBJOVEURQCCQEUYELFEXXDGFQSJFVRGRDLSEAAHIKXNVGOQZQKGZHSOIZRXDBVMYNUKMNVF");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::SetLedBrightness tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.name.assign("YAAINHOZHFSNTQFJQUBCKWRVUUOTMOVGGLFDRVPLEOKDNPHSWPSRCBVSJUDEZLYTPCHXQHPWJTXKJCEEYMKJSXQZSXVWXMAIIVOWRPDNRGGVYRKGFLWAEJKUNLADZLIELEGFAYEPYWPBMJIPFYDDRMHZWAAUZJATTUUBICDMDOBBCLFHYTIGGENKQDXSZBILHPTOZMJCQWUXRUQBGISHCVMLJOEKXWCGFRSQYQOMX");
    tmp_tmp_tmp_msg_0_0_1.value = 31U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("IOKFEOLOPTNAKFJQIEQOGJUWNBCYMTGVIADJHFUHNWZJPOBCQYBRMKQMMRTASNPHBLGWZXKJTXOGVOUTIQWERHXXIEMYWFVCMGSLLZUZWDUUHZPGCTOHSYIQIVVXEC");
    tmp_tmp_msg_0_1.dest_man.assign("MLJXYYNKSVCJJMPNNVBKIYREVXQSDPCWGBUMBSUXIOGCIGXCLFDVZWETSMHSAQTWPLMKWHZHTHDPEFBKYSYBULCWNONWPTPVPQFQ");
    tmp_tmp_msg_0_1.conditions.assign("ETAZHVBSPOGQSOC");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::CustomManeuver tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 11901U;
    tmp_tmp_msg_0_2.name.assign("SAQFOTFDALTGLHNDJNCUXILVKIXZMWYMHKNMGZXNPTXIJJQPFQZQXPHIWCKZRKPFQGFW");
    tmp_tmp_msg_0_2.custom.assign("GBBXUBXPYGRKREEHUHSLTLWYEEJMVZBIBETXDXLJEYXGMBWANLPMLPFCIKUOUDIACPGQXBDIHWMTDZOFNWJOYQRXYNPROHZIKZVJCFXHVSQKUOTULNSJMKQLMICJQBRZOHWONKWIRUD");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::IridiumMsgRx tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.origin.assign("UWDTUWCNYVSCNSOLERPQOKXIVPPZMJSQSJUTDHXVDBXQNKKBPZHTUADMARCRHLBXHCNLCIHAXUZQOVETHLWNZJXJHGBDYFMKEIMNSRJMVGFHBMUZRFEYFFLVXBKMXPIAUJGKUCWQNODDZSRDEPITLSPVFXDWYEZAEOFTVTGBOWIISOALMFZIBKKOCORLRWDQUJMATNYTGGGKXPTZBQEYWSFLVYHPPYSNFAGRCRJIVQCWJWUJQ");
    tmp_tmp_msg_0_3.htime = 0.540127760071;
    tmp_tmp_msg_0_3.lat = 0.334432429111;
    tmp_tmp_msg_0_3.lon = 0.985062038587;
    const char tmp_tmp_tmp_msg_0_3_0[] = {10, -126, 123, -39, 89, -6, 87, -69, -4, 15, -127, -83, -97, -86, 13, 113, -44, -15, -96, -54, 59, 34, 10, 10, 116, -61, 5, -82, 38, 89, -24, -47, 59, 14, 77, 59, -80, 24, 90, -75, 22, 115, -93, 65, 99, 84, 70, 77, -68, 8, -96, 68, 96, 97, 51, 28, 44, 95, 4, -15, -37, 95, 98, -128, 16, -119, -45, -78, 120, -32, -23, 90, -58, 70, 37, -42, -2, -72, 110, 105, -38, 42, 67, -99, -24, -6, -1, -105, 76, -51, 20, -25, -82, -15, 6, -36, -83, -19, -94, 32, 94, 104, 57, 34, 122, 42, -55, -73, 66, -77, 33, 38, -104, 85, 104, -13, -117, 95, 120, 96, 93, 117, 8, 118, 126, 89, -25, 25, 54, -1, -30, 114, -70, 26, 114, 90, 115, 61, 46, -113, 123, 58, 79, -22, 103, 41, -2, -49, -42, 12, 68, -44, -6, 61, 15, 73, -28, 46, -12, -27, -49, 84, 17, -112, -109, 15, 98, 54, 117, 6, -31, 74, -25, -112, -24, 8, -78, -67, 39, 123};
    tmp_tmp_msg_0_3.data.assign(tmp_tmp_tmp_msg_0_3_0, tmp_tmp_tmp_msg_0_3_0 + sizeof(tmp_tmp_tmp_msg_0_3_0));
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
    msg.setTimeStamp(0.98239302096);
    msg.setSource(9642U);
    msg.setSourceEntity(4U);
    msg.setDestination(54257U);
    msg.setDestinationEntity(31U);
    msg.command = 121U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WIMPURHQICDKYIICPLPSRGRABCLBVAEGJTVXISAINCMGHAFVYKQHUTSXVJLWNRJFKWMXQQLIEKHBODLHVDYCAJKNUWROSNXXGFLAQBFMXGJDPRVAWRMFEOKSZJDVZYNHWWGDUSYTCPUDYMZOSOAKABQQEQATKQLCIOMOLBDNHQINBHYCSSXJFHNZBBPFOWLOMERCMTWZENXEZYMEJDLNGPUUUGJTETCPIZDGXVTFZKV");
    tmp_msg_0.description.assign("VGYVAMXXEKNGOZMUWNLIMFREBMKPNAXXRNYENBFHRBEJRRIBGZCFZ");
    tmp_msg_0.vnamespace.assign("HQENKRMQHXKNZKZHXBQJFJVADSRMCWIIIPWTRAMOGHMOJRWMSTHRUOYVUVVUVZGPXKDHTLIIUHZDGAWUJYSSOVLSZTXBUFGEBJHLGSDCVSDJCNPSZEANTORJWKVFHZYINRXZEGAKCCWCIBFCTXGQLKJMXWRPGSZWTYPPKYNQJYUEFDTDHOMFIWENLXLBBFNQQPBDWPGARAFCMZDEUPOQMQKCEBRX");
    tmp_msg_0.start_man_id.assign("ADTWEDNVSTQEEOUHECKKJUOVLNXAGMMKLUCKYXNQPTJBPKRXSMMJVUQDNPAZHVLRTBRDKOPJ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("EKTDFPUHOZVRLBNPPSPAXIAYNAIXFYEBDBWDMRLGSHIMFZMTOOWRAZECKPIQZJIFKUYQGNMNGGKDJGEJLUXYOBVEFBCZRBDZOWPJFMLKERYPAHGTMZ");
    IMC::YoYo tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 63139U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.301394219301;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.476535853659;
    tmp_tmp_tmp_msg_0_0_0.z = 0.253742748893;
    tmp_tmp_tmp_msg_0_0_0.z_units = 186U;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.180303664964;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.153317912878;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.543719190096;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 199U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("IHAVJZTPKVXGVWSQDVZOHSGZFYWYPPQCRCEAWCKMDZRCVMZQMYWCYPHII");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ZFXBLJFYXRTJYGBHKXFPLLMCRAIZGKTJFXTSIMLUQOHBJUWSYTCAAITWWREQBQZSMYMIODDBTFUTPJCAVFABNRWOSEECOKMVRRIIFHNGYEWMJAQONUYNUAPXLPMNPBQZIONXGIDPRKFWLZNQUJEZAQLBKEVEBNNGCHPAZCH");
    tmp_tmp_msg_0_1.dest_man.assign("TYHYQVEPGGANRLAYIMOHNHQDCDPTSGT");
    tmp_tmp_msg_0_1.conditions.assign("GUBPEFZTDWMRJKSIABUQDVGTBZKQSJXLMCEDLNBRDBOHKOPCXERFRUASJUQHWZHPZWQVUTKHAR");
    IMC::Goto tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 18910U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.0980326120726;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.954369658969;
    tmp_tmp_tmp_msg_0_1_0.z = 0.59312712525;
    tmp_tmp_tmp_msg_0_1_0.z_units = 171U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.622493856562;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 147U;
    tmp_tmp_tmp_msg_0_1_0.roll = 0.88174090587;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.496338455889;
    tmp_tmp_tmp_msg_0_1_0.yaw = 0.61491466577;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("OLIWRTFNILMHWMOLWKOUKFSYLTEIAWVOKYVQMPRNEQAPTVXHUDDDGFGBTEDCZRNTKANVZISQEEYNWNMSWULIAERJDHUKIYRXFPGMKRVJWMTTVBKSPCEYSJROCAOSDVBCBPRNSGBGYCKGKHISKTVLQLLZRBZLFFQVZJUGQIQGYOBMGAHQJOPSDWXDCXZAZXHAXJBHFYTCZIBXWPJEYORUQMJSZFXCHMFG");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.729832932048);
    msg.setSource(16211U);
    msg.setSourceEntity(180U);
    msg.setDestination(52611U);
    msg.setDestinationEntity(141U);
    msg.state = 94U;
    msg.plan_id.assign("SMIMEKUWEDFOKXAGJCLZSMBYGVSWTBXLPYZBHTPCYTPQBYJPRBNAAYZTNFZNPQTAEFRKWO");
    msg.comm_level = 165U;

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
    msg.setTimeStamp(0.308061263933);
    msg.setSource(33850U);
    msg.setSourceEntity(175U);
    msg.setDestination(56202U);
    msg.setDestinationEntity(97U);
    msg.state = 185U;
    msg.plan_id.assign("HPUUIBKFCWPBOCMSBDCLXVZCQMNPZUFQANAWDKHJMGGXWIPDBHIFKALKAXQHIJLMAPEFRSBMTPROSMQQYRMLBBJQLMDYLCHZLWKZXGASMSIUAEYERJCTJEAXPJTENEXWCKZNHRUYRQYFYEQVTELFBTMOFANFIV");
    msg.comm_level = 174U;

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
    msg.setTimeStamp(0.389973411541);
    msg.setSource(53806U);
    msg.setSourceEntity(130U);
    msg.setDestination(55695U);
    msg.setDestinationEntity(66U);
    msg.state = 180U;
    msg.plan_id.assign("ZEPNKBRJCPDSBSGAYEYAKGJMYMIXOGCYRLSJQVXYDEFCPTVGQOUYTAFXZGHRLIZKVXCQPMBBXFYOWBWCPKMBVNJQMUEBPLGXTUWEWASJJFBUCHAWQMGDSJWKHTLSIZEWAHHEOWSLFDMEFLQTQDKIRVCI");
    msg.comm_level = 165U;

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
    msg.setTimeStamp(0.192021947404);
    msg.setSource(382U);
    msg.setSourceEntity(147U);
    msg.setDestination(48194U);
    msg.setDestinationEntity(151U);
    msg.type = 81U;
    msg.op = 47U;
    msg.request_id = 13721U;
    msg.plan_id.assign("IXXELDGNEHUWRKRDUYBDKTMHGMQRWMAMWYKDTLXBNVPAWSLHIFQBIRRHJRIACMUXDNZY");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 61251U;
    tmp_msg_0.name.assign("HJONMGVJQALKRYSDWNUWOFWQLHAFSCDYZEUEORLBEIYCVHFKUQHYBPLJTDGQGCAISRDBLTFADWTDNMGKOTNXHZSCVHNFKMAUFMUJFGIQSGEIWPEYYDBEJQIQDEZJUCNZPQAABGSKPZHQJCKZSVKPLMMZRTWUIVOTXOENHWOMZXHWSTRBZASWCCIJJKFN");
    tmp_msg_0.custom.assign("VENHEASSCDAVRQNXKXMYLJMDHLCWPJKRKJUJYIMYITPSZMLBESCTSHWLKARGCZSKATXPRLNGVZRLPYVTMGJABTDDMGQHLGNMINLHFFYFRFVZNXTQWBPQRDABEJICPRHBSRXFKJBMAUOMDOVQUCOJNBSFVNXEXTIUJEWFUQIODPWAGZGOI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VJZERVOANUZMTBZACSQGIJGLIGEDPOHPRLEYKBFCAOWZTLLOPBSUUCPKYEBTNXQZXMAAXOHROBZYRLWHKEQSMQDKIWIQRURMCIWNRXFLHJPKSOYEUKTAVSCVXLXCGYHGPPTFVUJNGLFDTITM");

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
    msg.setTimeStamp(0.201248568161);
    msg.setSource(40160U);
    msg.setSourceEntity(55U);
    msg.setDestination(37231U);
    msg.setDestinationEntity(17U);
    msg.type = 119U;
    msg.op = 102U;
    msg.request_id = 22193U;
    msg.plan_id.assign("WHXRTVFGMHAXPMLWXHTRBAJXBIHZSPUESKFKYRYNIJMRUZUPPZHBDGZRQHJWRTA");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("OFMFYZXZCKNDWNNDTRTWWSOCXHEABJRUBKHVQYWJZPRULSEERJNGNMXHYNPDCFYOLXNUFKWJMFIDEOKPRQGZOCSTCAQOVSGDZQOJMVRFEKAJAYTOJKQSWJPSLBYBCQILZMHZAIVKXIBJRATABGSSJKMPAPUDPCLQGYEGWPIQWIWRHUCQUHVBNYVVLMUEZTVIEZDHAFUFUOPLNKTYHBYCGIDMNDMEXLGQVHUBRVDSOSTCPALRWXTKFXGTEILFI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MKUZCOZDQQKISQVFKNSPFBNPJHKXDTIGCBCQIMIAOYE");

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
    msg.setTimeStamp(0.510377669661);
    msg.setSource(18815U);
    msg.setSourceEntity(81U);
    msg.setDestination(24038U);
    msg.setDestinationEntity(66U);
    msg.type = 144U;
    msg.op = 64U;
    msg.request_id = 35606U;
    msg.plan_id.assign("XGQRVKWUMPRFOZBOENXIBJAQUSUOAVCTJHXICURZJGSOGAISNOWPNATYUBMTQQBNFCYE");
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 40307U;
    tmp_msg_0.duration = 22016U;
    tmp_msg_0.speed = 0.783135873569;
    tmp_msg_0.speed_units = 102U;
    tmp_msg_0.x = 0.563501322097;
    tmp_msg_0.y = 0.177282180511;
    tmp_msg_0.z = 0.192403823554;
    tmp_msg_0.z_units = 42U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SIMTFBGTXAVZNUOCNOXPPVFHO");

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
    msg.setTimeStamp(0.652093898386);
    msg.setSource(49890U);
    msg.setSourceEntity(111U);
    msg.setDestination(30299U);
    msg.setDestinationEntity(36U);
    msg.plan_count = 56185U;
    msg.plan_size = 1828952357U;
    msg.change_time = 0.911179947858;
    msg.change_sid = 49929U;
    msg.change_sname.assign("GVGJWPDTKANSILWQRZPGXIIZYPETFYTDYRSIBXZLDOULDEAMTYZNMBDJBUEWVSSDZDYKVEQUCNOLYTBNHZPHGFMEWXCJGSYFUINXOWN");
    const char tmp_msg_0[] = {57, -102, -38, 63, -106, -75, 81, -95, 111, -93, 103, 67, 19, 44, 36, -127, -67, 90, -39, 125, -54, 106, 11, 1, -87, 46, -7, -118, -93, -86, -104, -71, 78, 123, -51, 6, 27, -22, 118, 100, -93, 88, 55, -125, -45, 109, -93, 89, 63, 3, -84, 62, -128, 90, 111, 53, 71, 101, -34, 77, 124, 109, -32, -27, 111, 22, -120, 40, -3, 56, -75, -97, 5, 98, 106, 94, 56, 110, 47, -39, 4, -3, -24, -36, -56, 14, 83, 19, 84, 44, -39, 32, -80, -108, -38, 97, -118, 87, -10, 93, 74, 19, 105, 49, -40, 106, 24, 55, 79, -54, -120, -66, 45, -116, 50, -118, -16, -95, 74, -18, -31, -67, -19, -122, -88, 102, 84, -34, 118, -70, 93, -36, -62, -56, -118, -41, -72, 38, -33, -52, -1, 124, -21, -72, 54, 42, 22, -108, 105, 32, 4, -52, 125, 63, -5, 80, 116, -90, -64, -51, -111, -88, 82, -106, 81, 22, 37, 60, -109, -22, -101, -126, -19, -2, -128, -109, -85, -64, -111, 100, 118, -113, -116, 74, -15, -18, 81, -126, 102, 3, 118, -106, 87, -85, -21, 21, -65, -65, -56, -128, 60, 81, -84, 27, 123, -85, -65, -109, -121, -62, 113, -99, 34, -114, 31, -54, 86, 90, -115, -65, 12, 6, 46, -126, 22, -7};
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
    msg.setTimeStamp(0.893736960613);
    msg.setSource(46832U);
    msg.setSourceEntity(184U);
    msg.setDestination(49759U);
    msg.setDestinationEntity(170U);
    msg.plan_count = 30781U;
    msg.plan_size = 1340553607U;
    msg.change_time = 0.0141455088294;
    msg.change_sid = 14802U;
    msg.change_sname.assign("VVOXMPEQTOSRMAAWCCNQTJTLQXXRMCBWQNEJYXDBPIHSGWCCTHILYGFVZTNDDXISEYHEXUQJCRVKKPWURROQN");
    const char tmp_msg_0[] = {84, 51, -40, -124, -23, 96, -102, 105, -47, -98, 119, -30, -104, -78, -25, 108, 97, 30, 123, -60, 70, -35, 63, -98, 105, -108, -92, 104, 20, 109, -114, 0, 33, 8, -69, 67, -46, -3, -23, 51, -61, 40, 109, 84, -63, 42, -32, 16, -98, -93, -28, -72, 29, 116, -3, -65, -78, 64, 107, -35, -92, 29, -9, 17, -73, 119, 71, -66, -34, -115, 94, -122, 30, -81, -32, -68, -79, -82, 32, 116, -43, -47, 114, 106, 75, -2, -89, 45, -25, -62, 2, -77, 99, 39, 94, -12, 106, -86, -55, 6, -29, -71, -21, -87, -115, -91, -14, -8, 65, -21, -12, -103, -13, -48, -70, 83, -36, -30, -98, -74, 118, -95, 22, 48, -11, -77, 25, -39, 31, -96, 39, 42, 43, -86, 84, 88, -98, -71, -61, -6, 46, 30, 70, 35, -61, 108, 58, -40, 27, 86, -121, -61, -51, 107, 41, -60, 63, 122, 6, -66, 89, 35, 123, -115, 111, -22, 9, 7, -78, -65, 66, 99, 82, -127, 12, 31, 11, -34, -31, 1, 42, -65, 15, -93, 44, -8, -117, -4, -127, 26, -31, -85, -7, 5, -97, 80, -125, -67, -16, 57, -110, -79, 105, 81, -49, 110, 109, -46, 81, 88, 71, -118, 111, 63, 19, -41, 2, 3, -95, -41, -84, 4, -82, -101, -6, 11, 32, 7, 61, -57, 42, -100, -22, 104, -81, 103, 13, 88, 92, 74, 95, 56, -74, -87, -83, -9, 21, -62, -72, -118, -17};
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
    msg.setTimeStamp(0.00604492761736);
    msg.setSource(64444U);
    msg.setSourceEntity(190U);
    msg.setDestination(62061U);
    msg.setDestinationEntity(199U);
    msg.plan_count = 55289U;
    msg.plan_size = 475666995U;
    msg.change_time = 0.00872595874576;
    msg.change_sid = 20513U;
    msg.change_sname.assign("JGSZGKOKOQMTHBKMCHQZMHDACQEGAXFAQNFLYQPXKJRAXQAZWMLPPLXHSHYWOZTXZELZFJZQBOMPPBBTTRUIHOAGLUVSOXIZCDOFMGCRXFXXWHSKKDEPQFLBZDECPYVBBJUILBZMVRNICDYERPVHVINVPLEGUYGRUOTEMA");
    const char tmp_msg_0[] = {-79, -127, -46, -3, 70, 50, -69, -89, -108, -75, 20, 38, -60, 29, -115, 19, -49, 27, 93, 33, 0, 37, -17, -73, -95, 23, -111, -102, -92, 71, 121, 38, -2, -47, 71, 66, 105, 92, 53, 18, 111, -21, 117, -59, 83, 7, -1, -66, 11, -89, 66, 42, 103, -55, -113, 93, -102, 89, -89, -99, 18, 73, 4, 6, 57, -96, -27, -59, -46, 120, -65, 91, -7, 69, -79, -8, 67, -77, -79, -124, -2, 112, -48, -56, -87, 13, 44, -25, -83, 65, 25, -43, -26, -31, -66, -94, -118, -115, 79, -115, 77, -56, -127, -13, -98, -105, -60, -91, -101, 118, 83, -86, -79, 126, 123, 2, -25, -24, -128, -47, -10, 92, 119, -125, 42, 55, 117, -124, 60, -71, 12, 81, 12, 17, -109, 96, -74, 1, -56, -15, 112, -28, 51, 78, -27, 60, 80, 100, -39, -6, 52, -100, 94, 54, -12, 17, -10, 52, 3, 76, 0, -84, -62, 12, -3, -63, 35, 21, 8, 31, -104, -8, -1, -17, 56, -89, 62, 126, -100, -46, 54, -69, 94, -111, -21, 28, 0, 36, 46, 9, 67, 91, 103, 125, -89, 25};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ETGNIVRNYXZWFEWVDUCUPJKXMYIVIOHBSJHOKJKAOIDYCGFQFESFDPPSVQJGRPXIYDDOEHUQGBAQHDQIITEHZFHYBUDHM");
    tmp_msg_1.plan_size = 40280U;
    tmp_msg_1.change_time = 0.046202212604;
    tmp_msg_1.change_sid = 2212U;
    tmp_msg_1.change_sname.assign("WYDYAWYMLRDPPQZGZGKQN");
    const char tmp_tmp_msg_1_0[] = {78, 52, -62, 112, -114, -86, 52, -113, -17, 74, 36, -73, 25, -128, -90, 112, 3, -83, -99, 96, 45, 82, -74, 50, -61, 126, 65, 107, -58, 46, -57, 111, 64, 4, 102, -45, 94, 41, 26, 58, -48, 49, -115, -113, -11, 86, 13, 56, 54, -8, 117, 57, 125, -18, -28, 88, 15, 44, -121, 124, 62, 28, -23, -24, 85, 67, -58, 109, -47, 50, 59, -58, 65, 98, 3, 20, 118, 30, 72, -27, 121, -51, 96, -57, 25, -116, 70, -115, 95, -84, 40, 7, -3, 86, 27, 80, 73, -64, 17, -94, 9, 93, -46, -119, -71, 4, 5, -98, 120, -21, 38, -77, 118, 126, 25, 55, 73, 104, -11, -100, -55, -82, 6, 32, -61, 59, -56, -6, 82, 113, 95, 125, -5, -21, 94, 6, -78, 56, 38, -80, -6, -98, 125, -84, 45, -110, 74, -81, 95, -125, 84, 113, -44, 76, 31, 17, -108, 23, -84, -80, -1, 18, 57, 17, -117, -22, -114, 19, -29, 8, -28, 46, -1, -91, -95, -46, 33, -77, 78, -72, 87, -125, 18, -120, -93, -11, 83, -125, 63, 117, -17, 13, -77, 53, 81, 11, -30, 26, -64, 97, -84, -109, 2, 109, -52, -68, 72};
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
    msg.setTimeStamp(0.11689479774);
    msg.setSource(54499U);
    msg.setSourceEntity(102U);
    msg.setDestination(37574U);
    msg.setDestinationEntity(240U);
    msg.plan_id.assign("FEIBMXKSCBZLPRHEFVJSONOTAAXDLFEEPPWDAXJUXOWVPNKGMBVQRCAJSDHMDUERQKUWNZSRUKGKMZHJJIFCPYUTMMIWFIHRDSRBHXWYCQGLXTAHNOVVQLCSPLFBUPCIBFNYXJIIMOKYJGQKPJSTCVNYDZHKTWXWGZYUHOWDSTETZQGPTROVXSEVIFFQIHAWQTGRIXLBGPBLKSMAZZUNBEROGQCKYADYAJZAMVCG");
    msg.plan_size = 48284U;
    msg.change_time = 0.884267813541;
    msg.change_sid = 305U;
    msg.change_sname.assign("JWEXIXHCCSQBUKLSUKUECRMJYKYDMHAPO");
    const char tmp_msg_0[] = {29, 115, -12, 98, -126, -85, -47, 2, -57, 92, 23, -98, 113, -10, -72, -107, -37, 93, 25, -76, -118, -98, 64, 95, -121, -67, -46, 122, -49, 54, -56, -123, 90, 93, -29, -106, -85, -127, 18, -16, 20, -109, -27, -110, -90, -44, -81, 64, 79, -52, 72, -64, 98, 25, -17, 30, -21, 42, -49, 62, -106, 76, 117, -114, -44, -47, -13, -34, -15, 109, 68, -85, 78, -78, 57, 97, -121, 76, 84, 71, -72, 57, -89, -43, 108, 24, 99, 18, 105, 103, 94, 44, 89, 26, 54, -91, 12, -84, -69, 110, -19, -118, -120, -43, -56, 93, 6, -105, 15, 4, 52, 39, 11, -11, -78, 73, 47, 30, 99, -35, 98, 65, 108, -101, 121, -41, -99, -114, 1, 93, -8, 90, 59, -1, -96, 20, 8};
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
    msg.setTimeStamp(0.237090898924);
    msg.setSource(25113U);
    msg.setSourceEntity(127U);
    msg.setDestination(18644U);
    msg.setDestinationEntity(175U);
    msg.plan_id.assign("CGZOKITANBFEYWZKWUDTUKVYIOLAQBBAQMWHJNEIGHRNSSHRXPRJBJJIISPFBBOGJSKMMMXBZKPRYSNSZKOFLFMIGTFVWQXTTALOGCDIHPRWKNDGFNCSMEKOETUHNQEHIZQCOLYUOLFRVWLDAZOKCTJAIMYVVHDETLZNEHGDBMXLYRVGZMPQHNQFRSQXUUCXKEYCFLYDXIJJCAJSHMBDOTVZYPGPWVXBPYVUCQEPUWRZVUUXAWJESC");
    msg.plan_size = 60400U;
    msg.change_time = 0.243317887582;
    msg.change_sid = 40544U;
    msg.change_sname.assign("MMJCOOEBUXTXKWCWDDMBCWXJOLZKGBFRMQUVIPAVEKQECHXNHHKIDOYACFZLDA");
    const char tmp_msg_0[] = {-83, 33, 13, -115, -84, -108, 120, 42, 110, -77, 71, -111, 31, -124, 25, 101, -98, -82, 27, 62, -35, 100, -68, -110, 99, 47, -121, -111, -45, -23, -39, -104, 68, 98, -106, -91, -15, -8, -128, 58, 85, 88, -94, 125, 57, 120, 86, -15, -19, -62, -43, 78, 88, -128, 116, 124, 16, 73, 3, 116, -19, -50, 126, -15, 69, 39, 44, -117, -44, 125, -116, 9, 2, -83, 23, -51, -100, -106, 96, 19, -123, 116, -19, 83, -28, 38, -106, -20, -108, 90, -9, 95, -117, 20, -59, -124, 111, 42, -72, 30, -66, -100, 49, 33, 98, -52, -68, 122, 70, -125, -56, 35, 74, 121, 71, -41, -120, -17, 38, -125, 126, 48, 37, -93, 77, 57, -81, 38, -84, 97, 97, 18, -103, -75, -128, -8, -74, 34, -119, -63, -74, -128, -87, 30, 83, 91, -35, -25, -48, 2, 41, 29, 97, -93, -13, -43, -63, 89, 81, 38, 125, -70, 116, 30, -69, 34, -116, 31, -70, -86, 14, 21, -20, 88, 117, 5, -99, -75, -119, -79, -87, -38, -87, -18, -45, 18, 108, -36, -117, 52, 98, 25, 47, -104, 19, -14, -104, -96, -40, -31, 8, 31, 53, 81, 4, 122, -124, 73, 10, 112, 20, 50, -42, 61, 76, -117, 12, 9, -25, -105, -16, -74, -14, 75, 48, -78, -17, 58, 4, 51};
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
    msg.setTimeStamp(0.920478126436);
    msg.setSource(60821U);
    msg.setSourceEntity(16U);
    msg.setDestination(9061U);
    msg.setDestinationEntity(179U);
    msg.plan_id.assign("WVJFDKBOQTHUCGJCMRPADVYMEEALOIZIUZHMRPKVFNJSXFSGRBLRAHPJU");
    msg.plan_size = 52561U;
    msg.change_time = 0.965783723156;
    msg.change_sid = 38499U;
    msg.change_sname.assign("CRADJWERUHSRVFANXDGDWPIKMIJTGCCVYKNUWDUIOP");
    const char tmp_msg_0[] = {123, 81, -59, -20, -57, -25, 56, -75, 17, -90, 79, 74, 116, -15, -28, 112, 55, 91, -67, 11, -85, -119, -56, -59, 25, -103, -32, -40, -110, 23, -120, 88, 78, 28, -46, -29, -82, 28, -59, -107, 101, -41, 20, -94, -55, 119, 65, 19, -112, 10, -77, 121, 82, -116, -2, 19, -34, 21, -123, -63, -8, 90, -90, 18, 7, -71, 120, 31, -42, -56, -106, -112, 60, -28, -68, -46, -37, 84, -34, 52, 120, -32, -87, 40, -15, -125, 92, 7, -100, 95, 55, -65, 8, -67, -34, 110, -53, -125, -76, 120, -59, 113, 15, 49, 7, 48, 93, 23, 67, -2, 50, 100, -69, -16, -62, -90, 47, -94, -7, -51, -99, 117, 13, 52, -14, 8, 49, -57, -94, 73, -121, 10, 53, -45, 74, -49, -47, -60, -106, 16, 58, -126, 106, -102, 54, -104, -103, 100, 11, -109, 36, -119, -70, -30, -4, -40, -18, -11, -90, 36, -38, 54, 111, -44, -66, 74, 84, -112, 119, 101, 54, -98, -94, -83, 33, -65, -26, 16, 38, 100, 13, 10, -15, -39, -34, -51, -83, 91, -14, -22, -79, -74, 29, 52, 122, -56, 4, 53, 10, 21, -118, -62, 96, 11, 75, 76, 124, 99, 124, 15, -79, 112, -115, -109, -123, 60, -111, -115, 20, -71, 49, 1, 105, -50, -89, -58, -34, -56, -1, -73, 20, 95, 17, 66, -25, -94, -50, 51, -3, -112, 14, -128, 74, 116};
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
    msg.setTimeStamp(0.00670630220293);
    msg.setSource(30807U);
    msg.setSourceEntity(177U);
    msg.setDestination(32993U);
    msg.setDestinationEntity(22U);
    msg.type = 90U;
    msg.op = 11U;
    msg.request_id = 461U;
    msg.plan_id.assign("MFKHFCBRMFTDDQWUEVYDUIXRYXWQVSSIIBTYPJOCK");
    msg.flags = 42197U;
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("OFJISLABJZXMPLGDAIXAWGGUXPLOZBZWCDJDMRAIVOCFBCLWMSPGPKPBJBBWTGCUNHZXQDRZNONFUMRYOFZFMWWXDYPIVVDKHHSJTMYVJEVHSYDQQCHLMTVKFOARRTVLKPIWTSILUOCVANQXQIDTQKNRAUELIPEXALTVHSZDBARZ");
    tmp_msg_0.op = 163U;
    tmp_msg_0.lat = 0.918430547027;
    tmp_msg_0.lon = 0.637549459107;
    tmp_msg_0.height = 0.287759597851;
    tmp_msg_0.x = 0.200828344283;
    tmp_msg_0.y = 0.815962664889;
    tmp_msg_0.z = 0.301988290067;
    tmp_msg_0.phi = 0.717602145651;
    tmp_msg_0.theta = 0.628028783957;
    tmp_msg_0.psi = 0.112035488813;
    tmp_msg_0.vx = 0.423397082053;
    tmp_msg_0.vy = 0.870420383786;
    tmp_msg_0.vz = 0.926508316975;
    tmp_msg_0.p = 0.0795639712743;
    tmp_msg_0.q = 0.0664736911989;
    tmp_msg_0.r = 0.553345907696;
    tmp_msg_0.svx = 0.473000609044;
    tmp_msg_0.svy = 0.0675094621005;
    tmp_msg_0.svz = 0.334224944025;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OYUHIJNGFLCBLYRDYWXNHCAYWATBIQMSXBFWGVVAQZEFEQTUMKBWVOEEVGTGKRQZGZMCOJTSXURPIBTJMMZ");

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
    msg.setTimeStamp(0.229028122505);
    msg.setSource(12526U);
    msg.setSourceEntity(71U);
    msg.setDestination(34015U);
    msg.setDestinationEntity(71U);
    msg.type = 94U;
    msg.op = 140U;
    msg.request_id = 54771U;
    msg.plan_id.assign("KBAOFTNIYHNLSRWNJTTBSYTNDCKXRSCWFCDGBFBFGTUEUHDEFGLZCEGMUBKQQXZYBPMNZKXPEQMAKCWHZZAEPILSONNHOOXONEKQEKFWASGJCTMCMMJBJTQWPDIKJBOSRHUSYYXFRXWZGZYRTLKXAOIGKTWEIVDPWBQVVDWULQYAWGVZVLLRJYPJIEMETCUNXMIJDDVVYFQXVONDALYISZH");
    msg.flags = 62543U;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.963591746971;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NBWDBZLYKVIXPJWHSTDXAGPAZLXECVNAAQJEOKIFBPTTIRFXFQLUSSGEDZSLPZSHVYFTNNYLZMWQDBBYTWYHIFEJBELRWWDHQMNJCWJFHHYZZOPQMOUFTJW");

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
    msg.setTimeStamp(0.948443534494);
    msg.setSource(55333U);
    msg.setSourceEntity(218U);
    msg.setDestination(27814U);
    msg.setDestinationEntity(14U);
    msg.type = 220U;
    msg.op = 137U;
    msg.request_id = 45714U;
    msg.plan_id.assign("UEWWEYWLBQUBRZPCKVXZRJFJZGQMYWYCEGGBUVRUIPSOQNOGPSPVDCRYJGDJTIHFJALULYLJDNGBSAOZXMGVHQRXODEPMVZRCLMIIAECHQBYKSA");
    msg.flags = 58553U;
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 78U;
    tmp_msg_0.x = 49060U;
    tmp_msg_0.y = 60903U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QDKWJCTICXNRNLEFZPGPBZYODIZMEONCULEKVBIBEUHBUWBITUFCFNMEZBYQRBTAPMFAKZFNGZCKLACLWGATBVULAFLGPRDOKHPWYIFPEZXSVMTCJKTGPDQOZNAXNYMIEXVLDSOIDKSXDGTJRMHHGUPCUYJWXRMRXVYXDHGJSWFQLQUHNOJLHIPSRYZGWTMTYQHMTVJAL");

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
    msg.setTimeStamp(0.775590459921);
    msg.setSource(38263U);
    msg.setSourceEntity(230U);
    msg.setDestination(19880U);
    msg.setDestinationEntity(75U);
    msg.state = 250U;
    msg.plan_id.assign("CMKBQINGJUTSNPVMJDMLXRYLUHHGMEOENTEMEYPPCGHBMILVCEGRKBBZBPCDGOWTWMLYVXSUXJFUYOZKTMHULWAQRXFSNHQJXYBIDAZSFWZZWKRTBZSIUOACDFNIJCMUBRKTREZAQDEOANILTDWFGFYIQPZLQYAVGMVRSSCNHVWUAZQSDJQPXAEOJTGVCASLBUTFSEODVFREUJPFXPHRKQXGDHJJIVZOKQKDLAPRICXIOONHHKYWPN");
    msg.plan_eta = -1538422872;
    msg.plan_progress = 0.963017462925;
    msg.man_id.assign("TSUIZXIOVNEUGHIIMEVLMQSFBKSZKCCGXGUGFPPROHWOJXLAKOCAEHYWLMLTQNVWZMDJSUIQFRHBNNAZDPLVLJVSWTRAPBFQKFGFJRYKNHQSRGBWMBIPJDJKTXMOUUEHCVADLTOSJCKLYCHXRAFNOMQCWTWPGQLUUFNVVYPGDIECIOEDOXRQDMPZDYHTRSHZEKKRBXPHBXWZNIGZJYXADCVUM");
    msg.man_type = 20212U;
    msg.man_eta = -979626474;
    msg.last_outcome = 38U;

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
    msg.setTimeStamp(0.614136085674);
    msg.setSource(36093U);
    msg.setSourceEntity(51U);
    msg.setDestination(35736U);
    msg.setDestinationEntity(223U);
    msg.state = 193U;
    msg.plan_id.assign("PVVHKGBBSTAYQMNJWEXGAKZTNCEGGMQYIICOZUAFHLEOLDSSOHSGPVOKTMSZUQPAJRNNYQEWJZFNPAFOUKMGOTPFABSVCZFXBRRNWBEWPXUOHKZMLYDDRWOYGUXACNLILIGVLVFDQHBEEXIMUCJSCWRTEWHRDKNCWAXABCXGVPFSHTMUBGMJPDO");
    msg.plan_eta = -1201810558;
    msg.plan_progress = 0.337975636088;
    msg.man_id.assign("UMWUMEKJXTHKZADGVTJZCWKGPDAYPRIQKMQHQFFOFXNPMXNMXWIMOHPHWIRTUKMWNFSRZWNFWKEGQLVSVBBZDVSHYLLLZXSECCJADCUFCNGUMGXHYFOXBRRIOXWPCENELGRGOJYJYUVLALZUIAZBSINXCMSPKVSDUOYAOAGIQATLYENIFBEJVJ");
    msg.man_type = 64652U;
    msg.man_eta = 2057752933;
    msg.last_outcome = 161U;

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
    msg.setTimeStamp(0.384729798114);
    msg.setSource(57416U);
    msg.setSourceEntity(166U);
    msg.setDestination(15160U);
    msg.setDestinationEntity(30U);
    msg.state = 43U;
    msg.plan_id.assign("ZPFCMNOWKULIOPVTMTGSOIEMJSWTPUCTQEQIYLZMGKTDAVXGOMJJEHGBGOEVDVOHIQRQKBNHZWPFMLDPAUBTQPRXKPUNKVKAIFMBEZFDMHGVZFIZVAQIREBNBWLJLRALXJQTHBXEXDYZACSVCPDYHUZXCJJAGFNWWVCUVOQDFCUTPWAPG");
    msg.plan_eta = 196806799;
    msg.plan_progress = 0.850800617186;
    msg.man_id.assign("ZFLNWOBQKXOEUCDUESPKYVWGBUMVUZBHGIRAJZZMLPMUTKSYJKTPGFLOXNIDSWMMKFRBCEDLJOQAQIVLXPUSEEJZYMTKRZOGRBPBUELNQQOAIWCFIJHDRAUEOJJRLDQTSPGDCDPHUANASYEQAWAOZNGERQNSNMVXFZITGTRVYDWHNKFZDCGHFCMTFWTXYNXBWTXWSMPOGVCFZISQBCVJBYBPIYNHXULKDTHKXGAHVCHRSRMKEP");
    msg.man_type = 5063U;
    msg.man_eta = -414423073;
    msg.last_outcome = 40U;

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
    msg.setTimeStamp(0.95721965978);
    msg.setSource(64403U);
    msg.setSourceEntity(238U);
    msg.setDestination(9964U);
    msg.setDestinationEntity(232U);
    msg.name.assign("GMZTFMGBUKJMWKVYNPNDCMEQQGAOMCXSIFGXOZSCOQYTKTMZOJPNVNBRRFJGSDWVJVDXMKWAWEPUVAUCPPUYTVJWHWFSSBIEZSFTWQQTXLZKIDZPZFLYBDUIERERALIMUDXRXOCIRHLJYALEOHUIABPCDOBXTWHVOHQBCSNGOALAUEUXRHCJDYCFEQDFXRZUKSAJRTYYAWQGZEVOLQEVHIBTNNIFQVPDKHJSXFJHNBSKLGTMMBLP");
    msg.value.assign("CJSIRAWWJNRUUYKMNKOGHUCRPSXIICFCYGNAJEDRJDWZNDIOTEFBICPKERXMVIYHBGCBVFMQMJIOQGYMMZXKXELBHJDQHTMLEQTASECVLRXVSBCDDLZPAZGI");
    msg.type = 176U;
    msg.access = 237U;

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
    msg.setTimeStamp(0.662509231819);
    msg.setSource(61675U);
    msg.setSourceEntity(61U);
    msg.setDestination(46830U);
    msg.setDestinationEntity(74U);
    msg.name.assign("DGPWCFOMUGWMSQARHLYCZIXDKCOWQJXZLKUPKDGMUBLTUWTVJEYDMZZQWKUYLLIXPSSJLBRZYCSFLEGJNJISVRCWGBWEKNREFNXVFOHAEKQKSEAGWBVPFJJCHTVENYNVTTHKAFBKAUNXRVAITDYCFLFNIBPGRBSQIMHQDCQUDHHIBYLQRRAMHMROTOXZHMETKYJOAZUVCYSIDWNTYLATWRBS");
    msg.value.assign("LYOXZTVUERCBBBRG");
    msg.type = 128U;
    msg.access = 181U;

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
    msg.setTimeStamp(0.7747556938);
    msg.setSource(2775U);
    msg.setSourceEntity(245U);
    msg.setDestination(55518U);
    msg.setDestinationEntity(171U);
    msg.name.assign("JBHZZSMCTMCFXKXZOSNJTQFHPGFKHZBWLOMKCHOFKWBJNVNGFYMACSQXMNBSXODPCGTQJSUYWZHRHQAXMXNFQEEHLNVJASLSDLDL");
    msg.value.assign("WBZKJXQSJQUNGQMZJTXTLTKGRTYIQMWTKLUUNPUXWICCBOQHPYDHIXCHCWVAPFSHHWYDAIEHKBUDXDIGZTVAVUTHYPSDLAPRCWGNNCJYEDMVOYFVWOZAGQNLRNMYCXTSEIGJESZUBMZGRDJAVVRBCRAUSFSLQOYLFB");
    msg.type = 77U;
    msg.access = 207U;

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
    msg.setTimeStamp(0.515855319269);
    msg.setSource(48453U);
    msg.setSourceEntity(189U);
    msg.setDestination(61430U);
    msg.setDestinationEntity(216U);
    msg.cmd = 5U;
    msg.op = 251U;
    msg.plan_id.assign("CJMGOAUACSXCJRIPFIPMCVXWPBTMROHHRAMRFHEKKTAFGELKYWTYBIIQPACKZHBBBKQSGJLFVDDRQCWIUZZSQSSNEHHJJTRXNNBDVUOBLJOOMXRRJTDKFEYPPXAZJFNZVWUTQWECZT");
    msg.params.assign("ELAYUTJFWTEYALSEQUPXLBKYRVRAQDHNDDPQZHPXSGZCKPCLFGQUMLHBCABORYTYUEBXKWGVRHJBGJYNINWTOWTMIQJIPZXXPCVRFSNNVIIUJANYCHDHDOVPRRUCZXBQF");

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
    msg.setTimeStamp(0.834428738547);
    msg.setSource(29119U);
    msg.setSourceEntity(27U);
    msg.setDestination(14276U);
    msg.setDestinationEntity(249U);
    msg.cmd = 1U;
    msg.op = 12U;
    msg.plan_id.assign("XPPUWNETQUSEAKIMHGIGVWQRRJVWBQHRTIZLACFNPWZJVFGSSCULOIHZYBOGKCNIZLHKKWRWDMDQQFWQBMGKVNOJ");
    msg.params.assign("XRDQLSUKNCHXQGARSCZKYWMLYWFDIXVIIJNATEQNEAAYGJPQLRXPEDNSIALZLXIFGQMZOSBOGNZJKGVYSPFODHDOFAJXBJOEHFWZUWAUVMRMRTFPLLPCWTHOTCNEKTYIPTZXIYUFNWULBRHADRCEJWKWCUGVBKJVJGZXEDHGDTIKQYM");

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
    msg.setTimeStamp(0.346805561122);
    msg.setSource(18290U);
    msg.setSourceEntity(73U);
    msg.setDestination(7507U);
    msg.setDestinationEntity(249U);
    msg.cmd = 180U;
    msg.op = 228U;
    msg.plan_id.assign("ZGAHIWCFMASVKENLOGPATVSAUPLNCQBXEQWSLQBEOSJIDHKQPUIRV");
    msg.params.assign("GHDTKYMJRIQPBNWQJKCEPLYWNBCUOYILLFIGEFJUPFRFWXOWSCVSLGDIPNWKBIMSDCIPULWRVJAEHATJFXIBFBUQDSJZKRXNEUCZEJMBHGTVOPAMUSSBQQTXVHAHDOBYOVWRRLYTCGZROTBPTYDECVGHUAFMDXZZBAAYLKJUNZGMXHTYYIGNAFODERIOIWKLPFRZREOMLDCZWQJTNKMNFLSCCSDZWKQYPMHA");

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
    msg.setTimeStamp(0.493310364031);
    msg.setSource(16284U);
    msg.setSourceEntity(25U);
    msg.setDestination(24203U);
    msg.setDestinationEntity(28U);
    msg.group_name.assign("XGQZXCZLXESYLFSOOUTYASUFBIZTPMRDKUVYMTGQYZIIHCZADNTGF");
    msg.op = 29U;
    msg.lat = 0.525155664205;
    msg.lon = 0.944351650446;
    msg.height = 0.017501489307;
    msg.x = 0.559229581184;
    msg.y = 0.133978620869;
    msg.z = 0.362166620872;
    msg.phi = 0.0604180432383;
    msg.theta = 0.793790757058;
    msg.psi = 0.90285209677;
    msg.vx = 0.540528847745;
    msg.vy = 0.0381974609074;
    msg.vz = 0.156807191166;
    msg.p = 0.558658706274;
    msg.q = 0.604459778811;
    msg.r = 0.603851469287;
    msg.svx = 0.692877144564;
    msg.svy = 0.972906066098;
    msg.svz = 0.987929740699;

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
    msg.setTimeStamp(0.160742048992);
    msg.setSource(4870U);
    msg.setSourceEntity(68U);
    msg.setDestination(27899U);
    msg.setDestinationEntity(67U);
    msg.group_name.assign("OCSLPVKCQAFRJAOZMUKHDWUMJKYNQSSQQQHOECOHJKBGEUAYXKOMIMHKPUMPAHWYFYMNIDIVNNCPAEYIXBTSYNPWPRKXBCLJGPEZFSDNZTTJXWHJIGTLZKKKXYCBBGGUVHOLQMZAJYUNBFDILLORZIYEGHLXUAFPWAXLDGVTROCSFGWDGGEOCTMNSENDFRVBDZRVUFVYWWFWQXEQJZHORDRBABJMQDABXLTELESNCUHZWRIFZTRVTUVSIV");
    msg.op = 210U;
    msg.lat = 0.904445308354;
    msg.lon = 0.320631222276;
    msg.height = 0.739098877012;
    msg.x = 0.796786050615;
    msg.y = 0.0857001135239;
    msg.z = 0.715250290506;
    msg.phi = 0.30871226748;
    msg.theta = 0.657939768305;
    msg.psi = 0.716987477133;
    msg.vx = 0.532260004957;
    msg.vy = 0.398169892501;
    msg.vz = 0.783685142219;
    msg.p = 0.634027307852;
    msg.q = 0.0690834000019;
    msg.r = 0.600460098679;
    msg.svx = 0.625983101341;
    msg.svy = 0.280543817956;
    msg.svz = 0.769695690539;

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
    msg.setTimeStamp(0.651230743087);
    msg.setSource(44229U);
    msg.setSourceEntity(215U);
    msg.setDestination(28446U);
    msg.setDestinationEntity(26U);
    msg.group_name.assign("KXZDMZUHWHYTKLDNUDFSUAOFQVPLAVEEIDIAOBBBYMSHPFYBIWGPOYHBFMZEPXBIMINPDOCCTUIPXKTXOSSNZDJTFMOXUGEMGQLURKGVNGEQCUCONP");
    msg.op = 95U;
    msg.lat = 0.27820083203;
    msg.lon = 0.304761332185;
    msg.height = 0.350736730466;
    msg.x = 0.888210410558;
    msg.y = 0.117914693913;
    msg.z = 0.976976252981;
    msg.phi = 0.908282068733;
    msg.theta = 0.20531294801;
    msg.psi = 0.510048295996;
    msg.vx = 0.233488044069;
    msg.vy = 0.661868992545;
    msg.vz = 0.251278217661;
    msg.p = 0.165113507746;
    msg.q = 0.479253535641;
    msg.r = 0.827035701859;
    msg.svx = 0.396679505031;
    msg.svy = 0.244249297207;
    msg.svz = 0.619775767636;

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
    msg.setTimeStamp(0.704826126253);
    msg.setSource(55404U);
    msg.setSourceEntity(169U);
    msg.setDestination(40446U);
    msg.setDestinationEntity(216U);
    msg.plan_id.assign("JCNBFKRCEUWYTBVEOEHAOXJRSADZMGEUTVFTGHZWKYEYIBVABJICJIHMYJIZMKXILFSHKRIELWPLQBQMDWNBXGWDNGVOQPAEBEDYLHD");
    msg.type = 207U;
    msg.properties = 70U;
    msg.durations.assign("VAISKDRTPXMGZFADCPJKCWNQLRJJNWPRGHWXUMRHJUAWHSGNWSMXZWXGFMMFWSI");
    msg.distances.assign("EONQHHZOJHUZIIEVRVBANSUUBEUCTSTJYMRYLNMTXFRBZACLCRUYCICRGRPNWPTEJWEZWDAYQGEVHGKMTPJCCYBUUJAVQSRBMWKHMXTAWHGQKLGFAZYFOXPFBPCPKQKIFJCMVQOBHTNGRXLQLZBJGTMGNLOKNLSUIJQADVWFXUVKYISDROBIICUKQFXPEXTFEHKFJZWVNSBDDYPMSXOA");
    msg.actions.assign("BUSCNXDKWUGDHMBXZSTQWQMKSQNHSVPSOJAXADEKCNEIOIGFVVBCEMUXKCLNJWGHCGWFHMNNYPLOXOPOAVYEEHGSQNTPRHDDUYEWBZAPZTYACPITRLUJTRBJRQYGYKSULKLVMCZVHIXAFQRZPEXSE");
    msg.fuel.assign("QARMTVIIINXIOTYUXRUWBAFFJMGHKZEOOUOTUOWQULDRELXBFMEFSJIEFLIAXGXTPK");

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
    msg.setTimeStamp(0.557649609595);
    msg.setSource(48141U);
    msg.setSourceEntity(200U);
    msg.setDestination(22801U);
    msg.setDestinationEntity(204U);
    msg.plan_id.assign("HADIRPUTUCAJEVHDMFYQBMHTVKMHXOQEXVLNDJAEPZNLNCIFSGJYQDFMWNCBOXETDTRUKQFREPMBHVBVXHPZWWPJUOFVRSSXIOZPYLDXSNNWVEHJAROZIACIXYTAVKRGQRQLVICTFCUDTAUXFIQKNGKLCSUSCONWGFZOMCWLKZMJMLUOMSJKRZQZJYGYKZKYXVILBRBTRILBMJBGWPZNXDHPADYNQHTUOWEGASFPWPCGB");
    msg.type = 12U;
    msg.properties = 4U;
    msg.durations.assign("CNWENCHICXMCLNROZLLTEJVTZUQMPIHZKXZFQWVOBMKZIKQNSILRKYFXYBZQDANFJDDDYEUJYKSVACXUFGRCYIWGNCGNMNEMJAHWEBPVTRSHRHUNILPFVOPAGLETJJXTBUOIMU");
    msg.distances.assign("IJDXMGTPFJNZAWYLOBFHTZAOKSTLPSUCYRTNPONFGMDRMOXCKXIIQIHVDRCLRJIFBCTBGTEEYIYFEDJXNVGAPXNDHWIVZQLYR");
    msg.actions.assign("ZWCKZUZBCYHBVHNLZWWTOETJUFI");
    msg.fuel.assign("IXOWKKPZIKGCLSNZXEHGKFDGGLYCIPXNCEVRFUESWTGETIUFQSQQVNDPCQMBSXNIKMWRX");

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
    msg.setTimeStamp(0.24320696663);
    msg.setSource(35628U);
    msg.setSourceEntity(144U);
    msg.setDestination(54414U);
    msg.setDestinationEntity(212U);
    msg.plan_id.assign("IURLRHHATBRBSDPOCLNGOAXDZWGFNZYRFMOGBSAWGBKYNLJTZYHSSQVWUKKFYVQKABPFCAWFQNHOFUCUGQAENSNHJXNPYMTDXMYURKILIGXIFFHEHMTAJZVISOXQWPMPUMI");
    msg.type = 36U;
    msg.properties = 198U;
    msg.durations.assign("UEPVHELUWNSXZBHVGKHUQSMOBTJBKDXSPYHJDMWPTYXXQEYPZUFIFEBBOJINGCKVZDOUUAYIRAIGJBEDXD");
    msg.distances.assign("ZJRMKXBUALKQORKQUXVSGCPBEHLICQHYHVXDBIGABXDFAPDDXHAJFKFHSUGLDOGLQNUXZXZYYIVRHYCCYNIPOGLWWECATHRJWPPYKTJEMZYBFEFEOZHRUTCTPFBUNNWVGPEQJDPOELCJWDSERLVXPLDNUMQSAJKOMFWBSWVHQHZBLSUGARTKXFAOVNMISCGMZMKECWTSARZUAUISNKNDIZKODQXI");
    msg.actions.assign("BUSCYVVPKDVWIRPIQQUGGFZTOLJMZRTJWSLBUZPCALRCRUZEIGMEZKMCIZJPAHRGNQPXHYTDXHZUDVIADYYFFSHBGJGLCHQCBXURQNEOEIXKZRYYDNFUMHRESFJBBSPIABTKFDKQPTTQGYNKRDSBHSTKWXUQIGZNWKHQXVBLVAHGYLLWUXYWJSGVPDMMWTTOOADOMANFHNOYMLERAIJZFC");
    msg.fuel.assign("IGPZSCGZKEEZJSHGGMVKYBVKFOIMHJEQLZOXCIJNIJFBQZRZALSMMWLZWXTDYXAYCPPNOQWCCPIEYLDMYWRVPXJYATRLPDSNDIUIPEWIYUQXUVS");

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
    msg.setTimeStamp(0.0586997517056);
    msg.setSource(26795U);
    msg.setSourceEntity(183U);
    msg.setDestination(16229U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.990355079949;
    msg.lon = 0.319487231496;
    msg.depth = 0.346015331618;
    msg.roll = 0.472682645529;
    msg.pitch = 0.543810681205;
    msg.yaw = 0.168776604114;
    msg.rcp_time = 0.162129846715;
    msg.sid.assign("CXAKVOQGJGRBUNRRFHVTNDHSWYQNMAAWFBPPNPEVAFANMDKZAUIYOIYLUFEQKXCJYCTUTLMARRXIDZCTNFVQRZVTMPPC");
    msg.s_type = 105U;

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
    msg.setTimeStamp(0.772460078976);
    msg.setSource(59131U);
    msg.setSourceEntity(242U);
    msg.setDestination(42113U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.294755391823;
    msg.lon = 0.694306588987;
    msg.depth = 0.257587938176;
    msg.roll = 0.662845109033;
    msg.pitch = 0.500600505586;
    msg.yaw = 0.170022024554;
    msg.rcp_time = 0.625856891095;
    msg.sid.assign("TSTEFNZFPCMAFURXBMGZZNLEUGJGSBJWOFYDOMEEMTEQZDPYERJSRCMTSEDLJKKYCAIWLQVGENWKVXPBLQAAOAYXKKPQHHNSSZMZDYRVDDGMKIMRHLRLWKXKTHGMNXETOQFZNPLOFK");
    msg.s_type = 59U;

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
    msg.setTimeStamp(0.335395913551);
    msg.setSource(54781U);
    msg.setSourceEntity(209U);
    msg.setDestination(44119U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.0382054262126;
    msg.lon = 0.62631775135;
    msg.depth = 0.144280081201;
    msg.roll = 0.0104269995148;
    msg.pitch = 0.563107254313;
    msg.yaw = 0.680937832362;
    msg.rcp_time = 0.689290573331;
    msg.sid.assign("LBNBMECQOVHSYWTZQQBKJVFMJGEPNOYVIROYFFARXCCNXQWIUJDJTQJKWGLVZXYEXTGKVHERKAYETPCSPADQXITPGMRGBRMLS");
    msg.s_type = 142U;

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
    msg.setTimeStamp(0.122787508407);
    msg.setSource(52863U);
    msg.setSourceEntity(39U);
    msg.setDestination(18095U);
    msg.setDestinationEntity(179U);
    msg.id.assign("POCCFCHLFQQBCLGVYCVIJKTBWZEBYZWIMHJFGEVKBDCMKZMLPRRDGTXHTUJEWXPNYKDFORWWQHAGIMKYPJTVXAUFWZJLIDRBTYVAABLJJDYSREOQVQHXOCQMVDNVBUYRSFSCABCNPTQMLSXEOIQNVXWNYFSPAPSKOGIIJAJOIWDLDKTLDQRHNUDHUUMZMNWEPNGQTJSHMARYZLXVSGTGEKSTEZO");
    msg.sensor_class.assign("XLYSSYEWJBAGQCDPVARYNBCDHGJNBKREXAVXHESDZPWHPANXEJYZGVXVVTTELDUWDMQZIGISRUHWULQSFYQJJFBYLVJRKMTBLHQZBINEZF");
    msg.lat = 0.748642112979;
    msg.lon = 0.803367558875;
    msg.alt = 0.300499587446;
    msg.heading = 0.328885529813;
    msg.data.assign("IYSEUKZAPOBBMIQGISLATCJRHNNRFQHCTHZVCSWPGRJGJCNRAGRKLBGRDZQTVXXYXNDNWTPLHDGADYKMEGQGNOHBLOMFXTODLWJNPOGDEKVXPHVVRFAZYQBUBRBKFXESHIQTUIUKBQXZUSYAZAEBXSOKIIRQIKWEWTHEXEMTDWTSYUJDOMZFWKVRJVDMCCHFYTJPLFPWOEN");

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
    msg.setTimeStamp(0.985717152197);
    msg.setSource(28778U);
    msg.setSourceEntity(208U);
    msg.setDestination(27309U);
    msg.setDestinationEntity(201U);
    msg.id.assign("NTTOMIWVHSNVWYIYMHLDZYDOUCTREYMEGNKXSJDFLQVKSZPAKYHEQGACEZHWYMWRXDDVZMMJOOTBQSIJFOETCROHWSETGPMUPFXCQIGVLTXKXLGDRJGYWFFRUUGBFABUCVARKHYWPJTEAEHFAKCYRNFBF");
    msg.sensor_class.assign("PWVLONZTBLUVEYSRGBZBBENHSXDBBGCCKAUIOEKYVOZQRBTGMTQTWOUHZQNRQTVXJGHFTFOPEYALJEAYADPDKZHXQENHORRXGXJIKUYCDWSULDOKRZGS");
    msg.lat = 0.479623151907;
    msg.lon = 0.207693374189;
    msg.alt = 0.411539840697;
    msg.heading = 0.413290981692;
    msg.data.assign("LZCISWVNOVDAHSCDGPJKIHESWKUGAPLVAVERXDBAWYHTXEFTUMPKGYPZNNRDCXANEFTOSHVY");

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
    msg.setTimeStamp(0.797980144248);
    msg.setSource(33323U);
    msg.setSourceEntity(13U);
    msg.setDestination(62588U);
    msg.setDestinationEntity(104U);
    msg.id.assign("WAFBVJGDUWINPXGOXICZQZSHYTTFAYGJPIFHFSF");
    msg.sensor_class.assign("RGXTJCZPLVSNBZRCLQAHBDYONQMIUTQYRZYVIUNUAEJAJECIPHPFSYAFHPGHVKFY");
    msg.lat = 0.0963056926819;
    msg.lon = 0.0593194235613;
    msg.alt = 0.212599811574;
    msg.heading = 0.627433346734;
    msg.data.assign("VKFHKAHFQVHWSCRDWSWXSFMRJGLKJIVUNTLEJMQQDNVBKGNKRYLFHAZTXZUQAEBPNEYWUJNLBYJOWNNPRIZAVQIMHJDQJBROGSBGRCSZUXDOCIUIBMEMNYKTIPSLBIEERRPXMLTDZYGFUYBXFITICVMSKMTYXLTOZGCVLTDGCQAIOPOJDWHWBDHFVBDAAFROHXQOLZPKAJMSZAXWYDPXZOU");

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
    msg.setTimeStamp(0.800215851349);
    msg.setSource(61223U);
    msg.setSourceEntity(7U);
    msg.setDestination(8567U);
    msg.setDestinationEntity(247U);
    msg.id.assign("QXQDYVIVTKTEBCUMHNKGFKVNVGMBYRJOJOJOWQPKKQIYRPKDE");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WZJNIEMFMYBAZADQLODBKZXWGBMSDUEEVQJDEBWXCSRVDLYMNKIHMGCUUNUIEZLSXSYNVPJAWXPSUCUOOTNRTRNPYFOCDUTTLBGNZIACYWNHHGJDLDFJAMYZKMCR");
    tmp_msg_0.feature_type = 129U;
    tmp_msg_0.rgb_red = 133U;
    tmp_msg_0.rgb_green = 60U;
    tmp_msg_0.rgb_blue = 126U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.842827121033;
    tmp_tmp_msg_0_0.lon = 0.974592545191;
    tmp_tmp_msg_0_0.alt = 0.820389785759;
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
    msg.setTimeStamp(0.330377596368);
    msg.setSource(30638U);
    msg.setSourceEntity(167U);
    msg.setDestination(60444U);
    msg.setDestinationEntity(78U);
    msg.id.assign("YLRFMFNJACCKMSJZIIUYBMYNERXEHRWFKNFYLEEJEFIOEJSYHIXQVSGVFUHNI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ACKNFSPOABVMDYKMERXOIVWEAPEUJJUWNVIZFUTH");
    tmp_msg_0.feature_type = 139U;
    tmp_msg_0.rgb_red = 192U;
    tmp_msg_0.rgb_green = 175U;
    tmp_msg_0.rgb_blue = 174U;
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
    msg.setTimeStamp(0.984488443981);
    msg.setSource(58327U);
    msg.setSourceEntity(13U);
    msg.setDestination(9315U);
    msg.setDestinationEntity(52U);
    msg.id.assign("PWTVOQZYLJDHHJXZKHUPFWAJMIMUOZXWMJDQJRXPUBOAXDGGYJAGOCMAGBUHLDVGFMVCWOCPVSKZTDZQFONLNHBFMPIDYNBGOGOKQATGRCXFRRQMOCAWILRNVEYVTKFLIYVZWNSMQXVLBKZBVEIDLPBKUTSFWIPBTLXYFCJUSNHRQQAGKWRHDKDRKNEDNEEZIWYLJTSFEHTUNYCWJBPBEJRIQZFESSMEKUXPSUVXQIAUHXRPGYN");

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
    msg.setTimeStamp(0.11196038613);
    msg.setSource(2922U);
    msg.setSourceEntity(95U);
    msg.setDestination(28597U);
    msg.setDestinationEntity(179U);
    msg.id.assign("UNNSXVMYIEBOMQXKCUYPHQENOMMDKQGXVXPKKHWCSSPM");
    msg.feature_type = 70U;
    msg.rgb_red = 251U;
    msg.rgb_green = 157U;
    msg.rgb_blue = 237U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.107880091686;
    tmp_msg_0.lon = 0.411411678315;
    tmp_msg_0.alt = 0.132897339923;
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
    msg.setTimeStamp(0.620435185164);
    msg.setSource(49781U);
    msg.setSourceEntity(156U);
    msg.setDestination(33172U);
    msg.setDestinationEntity(55U);
    msg.id.assign("BWMOENGMFCPKQIYQXQZTBZIMTSHVMEFDPVDAGULJLDHXMEJUWRFAHROUAIIHCKPAQMEYATMYWJCCSOBEUGPVQFVYSQMHZOLKTBYZRACGZIDDLUWIBBKNNRUNVFTETRQSZANESTKFLWRGGPDXIJCOGEMXUYXWBV");
    msg.feature_type = 205U;
    msg.rgb_red = 70U;
    msg.rgb_green = 52U;
    msg.rgb_blue = 161U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.485252789979;
    tmp_msg_0.lon = 0.918393846828;
    tmp_msg_0.alt = 0.430174663607;
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
    msg.setTimeStamp(0.511785696306);
    msg.setSource(16206U);
    msg.setSourceEntity(52U);
    msg.setDestination(50797U);
    msg.setDestinationEntity(157U);
    msg.id.assign("QSKNSYJAQNYOCQZBUWAXWBXSEZEFZJREACFXDYMBYQXSNIURKCCDXUOUHGMEQPOLIBWQVPVRZSFHIMCJXQAONFVCLBGIUPKPAJQNIFGHQDQTITJDXFKGHNNBTZYJLJGWEMKAWUEUMZLUHROYOGAWOTNVKIBIWB");
    msg.feature_type = 78U;
    msg.rgb_red = 28U;
    msg.rgb_green = 223U;
    msg.rgb_blue = 76U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.87346670115;
    tmp_msg_0.lon = 0.98292813045;
    tmp_msg_0.alt = 0.0620040284319;
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
    msg.setTimeStamp(0.209175761185);
    msg.setSource(4730U);
    msg.setSourceEntity(55U);
    msg.setDestination(33706U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.363963438637;
    msg.lon = 0.675246685761;
    msg.alt = 0.214796382656;

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
    msg.setTimeStamp(0.0551338510687);
    msg.setSource(34635U);
    msg.setSourceEntity(25U);
    msg.setDestination(2026U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.363205497018;
    msg.lon = 0.796026998686;
    msg.alt = 0.496444585244;

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
    msg.setTimeStamp(0.666210409245);
    msg.setSource(47743U);
    msg.setSourceEntity(209U);
    msg.setDestination(10201U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.935817078317;
    msg.lon = 0.153003463636;
    msg.alt = 0.729604362713;

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
    msg.setTimeStamp(0.654777951015);
    msg.setSource(60925U);
    msg.setSourceEntity(118U);
    msg.setDestination(837U);
    msg.setDestinationEntity(119U);
    msg.type = 131U;
    msg.id.assign("FLKLDHEBLRUVLVXIJWWONPVCIKOSCRMWGTOHFPHJDYCNBHDXZTWZMEMIAQUMWUNLCFITELUTBEIFZUQSYYOUKQNCPDHPKRZVHWNAQPOXJRMISFRNDPXBWMYNOJAUBGGSDZYZVTFEF");
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 83U;
    tmp_msg_0.op = 98U;
    tmp_msg_0.err_mean = 0.98206267571;
    tmp_msg_0.dist_min_abs = 0.947919237655;
    tmp_msg_0.dist_min_mean = 0.463980932459;
    tmp_msg_0.roll_rate_mean = 0.0160514761154;
    tmp_msg_0.time = 0.376559577883;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 164U;
    tmp_tmp_msg_0_0.lon_gain = 0.985057805902;
    tmp_tmp_msg_0_0.lat_gain = 0.13943087308;
    tmp_tmp_msg_0_0.bond_thick = 0.201909767772;
    tmp_tmp_msg_0_0.lead_gain = 0.630689996369;
    tmp_tmp_msg_0_0.deconfl_gain = 0.970788970121;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.459291564524;
    tmp_tmp_msg_0_0.safe_dist = 0.784190773257;
    tmp_tmp_msg_0_0.deconflict_offset = 0.530325318688;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.286641016694;
    tmp_tmp_msg_0_0.accel_lim_x = 0.305220198212;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.311553275184);
    msg.setSource(39774U);
    msg.setSourceEntity(76U);
    msg.setDestination(19236U);
    msg.setDestinationEntity(43U);
    msg.type = 177U;
    msg.id.assign("ZCHACMDQLKTLSUYIRSDAMIAQSLDFUIREHFBYDBWPALDBGKMTZFRHLBGUSDVQTGTRZOOOGRTQVMBHIIKEOIFTGBXYSCXNJERENMLOAUUGGRQPBZSEMSJEZANPDXCVNNCPBXFZJHJZZVLPKVNPYXAVZYAQMCVKNUNMWEJPTFGVCIMJLMKHSYCCQFKQYTWJGHSWDWNJKYADBOXOQHROLOUUANIFEXFIWWVUWEX");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 36095U;
    tmp_msg_0.name.assign("FCNVWBWJWZKTMSRWGUFTGSEXEFEZTAGIVVSKWDMOXACQJVHMMDQHUGYLGEBKZDMCYQJQIXNBVWEZSYYKFULTZIVRULBGARTZBNIAPUAEMPUUFCSQICGOTKSMGYXFAEXNWCHQ");
    tmp_msg_0.custom.assign("YALWOTBGZOORJCVFQPVDOPUIHMKFWAJYEM");
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
    msg.setTimeStamp(0.550909159706);
    msg.setSource(18611U);
    msg.setSourceEntity(253U);
    msg.setDestination(3375U);
    msg.setDestinationEntity(106U);
    msg.type = 72U;
    msg.id.assign("DKXVDFCAPXNODVBMUGFGSWTERUBYEXILZXSXOTVZELFWHWCTITDTMWGQOXNAZYDLPFAFRBQQIIXHSMGGDYPJVABUVHXENMOUPFWNBJKJOIAINNNJRYDTZZSHYSUKZIREBFENWXKPWU");
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 21U;
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
    msg.setTimeStamp(0.384389908013);
    msg.setSource(10537U);
    msg.setSourceEntity(238U);
    msg.setDestination(37733U);
    msg.setDestinationEntity(115U);
    msg.localname.assign("WEJQXXAXLIVIJCPJIPAHCQQGMDYOAR");

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
    msg.setTimeStamp(0.116539333561);
    msg.setSource(41769U);
    msg.setSourceEntity(129U);
    msg.setDestination(9232U);
    msg.setDestinationEntity(33U);
    msg.localname.assign("ELWVYSIPVSGEIDDWBBZSCDMYOOXNYCOLCNPQTTFCIWCZXAJOFPSKUYULGYMNWIHJECQNVDAKKAPHDROYQVBPCTPYMDCZNHJTUSYLUGFMSXPSMAOGKXXMRTKTIJURBEEQGDZZMPWALWXZZUWVBJQNOJWLBHZQJUISIGLFRQKMBUZNQHLPECHWHZXNOVRQWRFFGTOFXBGQAJTI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DIROXRUPEJTTPEVAXZSBRJDMKOWIUMGCBITWYQRTSRXKABDQEXLAEWGZSZCGKIFGKOYLUEZBFPSWNHYTMSESUKVQJNOBXGROUALXVFIOYHYMMZJSDZCCPPTNHPJQJCFOKDURLLSYVKMHDZPGISDTWCREAWYVOLNMLIXJCRBATAOIR");
    tmp_msg_0.sys_type = 210U;
    tmp_msg_0.owner = 10445U;
    tmp_msg_0.lat = 0.924525832211;
    tmp_msg_0.lon = 0.267412743447;
    tmp_msg_0.height = 0.711232739136;
    tmp_msg_0.services.assign("VGVXROKAOIDXSUCEMQGKEEYFJCHRFWJQNDZWWELXZNUNFONEYSFLAIYGGWBHBULTQXZJQTDPDMIXWTIRWBHLDPCACYUKTXTSBKALDGMRWNXSYXODCLRSBLBUJJQHFTDBEBOQZAXIVOVKVSUREMTZPIHNV");
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
    msg.setTimeStamp(0.840008009713);
    msg.setSource(47607U);
    msg.setSourceEntity(20U);
    msg.setDestination(58803U);
    msg.setDestinationEntity(9U);
    msg.localname.assign("IPYCJZXJNSFBWTVCWQLPIEBQTHDHSLPRMSZWRHXTTZKDNMYAVVPKKKRRASVIQFCPULQFVACEOIMLYD");

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
    msg.setTimeStamp(0.393388491802);
    msg.setSource(58484U);
    msg.setSourceEntity(233U);
    msg.setDestination(43771U);
    msg.setDestinationEntity(246U);
    msg.timeline.assign("QNSYLNMKOVVHADPQESFEMKYBKHKPGNIJHEFMLQNEKDTDMYFAOUFWXSCXGBFTGUADBILBLOHBRUYBRVKE");
    msg.predicate.assign("FKAGSKOUZBYDMGQCDEUPDGKLHAMAOQRQCWLKCZMRNZLQDJFIWJRSVEUTHNEEVBGNIEMOUWQNXNPDLLWZVCPNLTGCVHDEWIMJBPKPTZVMHFBBDEARUJAQXYXXRMRPQSSTCOGIIBHOTIUYGZVRSBMEZB");
    msg.attributes.assign("BEVNKSQIURTRJXVWLIYXYBUUKHKLVPBVZQIYYAWSGNKTJKDMAQHSXOXXDZLQJP");

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
    msg.setTimeStamp(0.257058343921);
    msg.setSource(38972U);
    msg.setSourceEntity(16U);
    msg.setDestination(10707U);
    msg.setDestinationEntity(56U);
    msg.timeline.assign("MGLWBFQGXFPJCOAITSSUQHLMXCTSVSYIOKKKLOEJVZABHJHZNFSREZVNVXDXHRVCGRIQMLDFYEYBBXJHPUDKQLAQTLPKDNMSAUQWEFQKEAXDFCOEYEUXRJFNDIKIVWZVPGTOMCEKGYWUNVWIYBMJTTMQLRHMRIQKOLHHFXITKDXWZBUUSCIF");
    msg.predicate.assign("RJRAWYVYWFUPKOLMBDSJXWSHKFTIUBTGBZNNZLDPNIIZXTFUUTEYBZMXNOCGMYZQRKCTLINLQTSGOZHMPGDHVCHWWQKLAJCBURNXEYBWBBSJDLHIHYXE");
    msg.attributes.assign("NKVNSDBUAKZHYMJQPIDFXEAFRZSVANJCRGMGKPWYIBZCXQSN");

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
    msg.setTimeStamp(0.144020005211);
    msg.setSource(62885U);
    msg.setSourceEntity(159U);
    msg.setDestination(11371U);
    msg.setDestinationEntity(251U);
    msg.timeline.assign("JLOFEKOSYFWQJDUORVZIDFFMBQDDGTNYJUXXZPLNNROCUJFWFUZHHAKSEZTCBNKAYMPARQFHYSZAYZMJMPGZMNVYRJAVEWGQKLXGBSQQMUARYHDXDTMQWMKSOGCIGVPHTCADNWWNNLEYEETGQYXUZRVECPHWMHTHTKISFDPHFNJXUCOFBAJBOXJIPXWIJPLKPEBKVOGBLSGACGIOUZRIVSZQHOCSBR");
    msg.predicate.assign("BRXMNSYPPEJMBFYPIFRNDKWTXWBTWTGYGURKXZTLNRSVQBSKADATBJAYLCZQCFODVFAZJPLCVMWVADGMSHJLJCPLFEEBKIZSIDQQLKMNGBNAUGJKHXSVFORCNWZXIIBCUYRNE");
    msg.attributes.assign("MEVLHEQWJDRDUIYIWJIXFUTHFGIMSSCZQTAPTHMWPIGSKVAFTNHQCTXMOWXNVBHDSUZLPUZMBBJDNFUQAARINUSXAHZQBZCLEXZCAJEOPUJFNIISRULNWOCOHYEYPBOLYGLAQRKNTGDGPXXDTUKSBCBRFNZDVLRUKDJKKLFRASICSJKOBAQZRXLFTTMORVEDAHGMNJYVWOSV");

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
    msg.setTimeStamp(0.539607057185);
    msg.setSource(35071U);
    msg.setSourceEntity(191U);
    msg.setDestination(18793U);
    msg.setDestinationEntity(180U);
    msg.command = 78U;
    msg.goal_id.assign("QZIJFHIMNHUQQKEKOBLFTUVFYGIESBNLMZANPHNBGUZFTSMWMJXOJPSIJHUCUMNQLWMAEYJHJOOXFOKAEGQKTGWZORZXAXMEJNVPBIYTKAFVVLDWQLQPTKOEOZARGNHXZTWRVXYADUDYNFQPKBKPVHWEL");
    msg.goal_xml.assign("HAZZJBXSZMBWMMCTKOHBYRRWYNZKUMGZHAXACJCKPAPSJBPECGRDTRBWIEOOJOSTEGLFBUWYENKYPFSVPPMNPONGOQDSPNRNGJWWTYOQPYNRUAV");

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
    msg.setTimeStamp(0.026336837013);
    msg.setSource(26765U);
    msg.setSourceEntity(141U);
    msg.setDestination(60355U);
    msg.setDestinationEntity(7U);
    msg.command = 237U;
    msg.goal_id.assign("OKCODWLZTTRHUDJDLSCGTJRYDNUQUEVILDRODYOSHVFATJSLLANYODQIHBYNIDPATEPBXAUFWMWEXKNZIVVKGPKOXIHKWGTFXGOUCVLYF");
    msg.goal_xml.assign("BRTOGZDGXFBHHWTLGSZZZVASHUIQNFWMJKRKTXHLSLIYFSYQDMQRFIEBEOFOMALERTRRIPUEQNKWKAQQHSOBLYJJGWAYPJMVDVSFQKOPIRSPULKXZMXEJHDIHDLTUHXZXNDOCUBRIZMWZPFMZFCGCJNHKSKTKWZJTYJVICVXDILYXYUWNEF");

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
    msg.setTimeStamp(0.331179403543);
    msg.setSource(21369U);
    msg.setSourceEntity(211U);
    msg.setDestination(48904U);
    msg.setDestinationEntity(57U);
    msg.command = 197U;
    msg.goal_id.assign("QYOOAKCXOEZPVQEGWXYTZVKQRDNOKPUSDMRUEAKDNQHWUWRCZTBZHJYXGA");
    msg.goal_xml.assign("NKFAXWSLQGTKWQVREUCYISYVEJCO");

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
    msg.setTimeStamp(0.860980134563);
    msg.setSource(51975U);
    msg.setSourceEntity(61U);
    msg.setDestination(17238U);
    msg.setDestinationEntity(208U);
    msg.op = 232U;
    msg.goal_id.assign("QWTFYSXCKEKIJDYAVVXOFTJMCQYZNONHOGLUZZBWPHXEOKJPFVSFAUXXDCTHEVVEALEQSSMORPF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TPYCMLZFBHOWVUVDJWOVKVXQEOZTAKRJZWQQHRVCWLBOXCPCDMFQMHUOWBWQESGCTEU");
    tmp_msg_0.predicate.assign("QNDSQZCIZJVGEITHJWICCSXWXKNGSRJQBZERAYVDVOVGAUCJZEDMOQQLIPCSVZLKUXLLLLUXHGYCUXGQBQHXBGANOKUZOTYEZADPTKWWRBEFMVUDTWYPOFWWOFILADRUD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JKMTYXQXKPAJDRWCJPCCTIOISXJAENVDTYVMNZVRYZBSEJVHRPFLFDTGULPGQHBBGOFEMUPLUQXC");
    tmp_tmp_msg_0_0.attr_type = 65U;
    tmp_tmp_msg_0_0.min.assign("VVBRLSYOEBMPBKGDNCLECEIHOUUGSPICLZBOCTFLRBYADFJTBBFVHIHTMZOGKKTXAQRQWQZMZGFWXJGTKIPNSZMUUGWQKZVRSYVDQYWXKPYJDZFWCECMIWFHLJYOEGZLCHTDLXJDFAIAU");
    tmp_tmp_msg_0_0.max.assign("OHQQKGIZZKFLXSDLEEHBGYZJSCOHGPXZUTHGQDCNIORKWFLRZWRCQAJMRGGBCJPIYMOVVKNBDSLOYZJRBYQBMJCDVQHHGQNUEYEAYCLTFQZEUTIXORFGDUFDRDXWJMIGLANXWILSFAABVDQTAWOTLCPSPHYVAWXTENCMPHKLKXMZJJZCFIDXVAYTWFLKWEMOPJNEIJMMKUUHMBNVPVUWFQOWRXPFYESPVBUSICNKXTOBGYNHVDAUTZBSESR");
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
    msg.setTimeStamp(0.708469418419);
    msg.setSource(23032U);
    msg.setSourceEntity(18U);
    msg.setDestination(2398U);
    msg.setDestinationEntity(90U);
    msg.op = 99U;
    msg.goal_id.assign("UQFIFKPTVHAAQVLJJRHMPXWLBJZOKRYYPYSPJEONWCYSCXVWUHGAQKIMCTVRGYYURMMODBUNXECHJSEFWILGNSDFAIEQFSCKLTYGZNLZDEKDJVBIONKGXBIMRPXAHUWATOPLZPWGDAJZXISUFFECP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XZOVEXACSMBLUCRNYWHGMZITBLQJJXNPPUPEMBQNNALDVGKOVSGDAHCUVECZHEZJOHDSIUEWLTUOLYOZGVABAKTMXWFDIJKVTLZMKFQHVTPT");
    tmp_msg_0.predicate.assign("GGPIUVNDDDBYBWHCAGXERAONEKMSZUNAVJLQXQJMUNKBNGFWFZWKTXWYAUAQRVRLZEHJFHGYINXLPLKORNGLRESBPFMKMCPYWTZSFEEBZHTFCVKEILVQSZEUHXCWTTBSAUITORPLYGMMDXQFDCIHRYOYRJWILJPSDPRWOZMJDOAWDKCYFYKHASHTIUKSLEXCBOFTPJBTNJPGJCXSQAMNEWUUOIQBLVFBXRVISIPDGZODMAVMVVTX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PIYQLRFZMCBGUERPHWFJKSHHLDDXZULBKBBCVBMUJAGYSSQKCVARHUGWRZYAYZSCVPOZAJJLCLAFETSDIRQTKAGDVLHKETCPJWIEYXINITWGPIINVQQKLFRJIPYPTPXAZLNSNOGJFDQVRMUNBMNBVXXDKENBNFGTEOD");
    tmp_tmp_msg_0_0.attr_type = 16U;
    tmp_tmp_msg_0_0.min.assign("VOQXDIFBOQIAFSDECJTMCJJHPWMHDNVGXZNNMIAAZHUWKAZHCTDOZDFNVWZESMZVVWJILXBCXPBXDFUJWLRVPVRIHTOYKBUAVUMFSMWLICIQEJTFAIBRPUMESZAHIRPGYQHGODGSCNQTPYNBWQKOEBSDEGOUGAKRPDKCTXMFVFGRHNPEUESYUEFIWJLOQYNGSLCJPUNRJYYLUBNKFLALTXAEHYBQKOLQHTYSCKCTZXXKRGGMZ");
    tmp_tmp_msg_0_0.max.assign("NTFZIJVUUWGIJEYJBBYTHZEPMWLRUQXTEYXNFNVZVQAVMWPOLIICQRZMEITNIOABZXLFZPTQSKKWLBHTBPYGRERFPUCQLWQNDDDZWCHSMOAZACGYJJIHVWHOFSKINMTLJEXBLGFYULXTSGFOHHRGBPRTYECEDPGYCXSQYDFIUWXKVKQJZDFPXLYKFMMXHSGNRRDCUESPGKBVOADWSSUOIRCUOAAOBDKWMX");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0933050614397);
    msg.setSource(14703U);
    msg.setSourceEntity(63U);
    msg.setDestination(55277U);
    msg.setDestinationEntity(97U);
    msg.op = 34U;
    msg.goal_id.assign("YQNTHGUCXWUHOUZZLJHMKTTRCVZJLXOORBSMFWVSVPQMKOIVQUCOISTQEBOGHDKVBNRGKZSNGDUDYFPAJBPEKZRARIQXZEYJDZYGEZLUMARHZDAR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YIRWXRYMEJCGUCQELPMCJDJFNMNBNBRCYEKOWSHSMCMFZKESGFJLUZANETXDULMKLECMNAONSSHVIBQRSKRTSNKTWRTXXBWHBZVVGYUAERFRLUTHQFJOPPNNSVGDDQUBHPCBSJVUXJAXOTXWFIDQZOKUAXZLZQFXAKASKRQTDJZYCYPAPWYDQGUVQYGCL");
    tmp_msg_0.predicate.assign("RUMMHZXAFWFTKDWVHDKDMZLEUQEXGLJIVWUPEPVBBKKNXZZTMQBLECADYNSWXJRHUVIEOOARRWHSSALGAWUJMXOPCTGGOWOOCPNAOJFZKNGVXCRJHCRFFUZSUCKTPXQCSWSGVMFYYRZRHLLAWYTAOXFDBITYIEYZPNMZXQELUSYXBGNNB");
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
    msg.setTimeStamp(0.770715349034);
    msg.setSource(26211U);
    msg.setSourceEntity(102U);
    msg.setDestination(10298U);
    msg.setDestinationEntity(68U);
    msg.name.assign("WOPAMIBRQAKLCYVIYVWKGAGJTQJTZYWQSECDEUSRRHNQDTRBVONJLZIWMSTWIUYGTQTOZUJKDCJFYUMUGBFMSFYSTPYPUSLCWLRJXGSAGXZKUKXZRHRNWQDFXHRZLBIAVCVLLZKROAYKESPZJUEAHBKJLIDEPTBUIHPCADXOGGKCQDBNXCOUYTXZIJRAOIMNPCSFPNFFOWOVHENN");
    msg.attr_type = 157U;
    msg.min.assign("EBCEGIUCTNARODIHEOKEJTWGWXWUCHCXLADFHUBLSZIPJQJMKVIDNASMETTFQZJBQAWXBJCNRNHPTMCTDXOIVGQLCOXWFIAYGUZEMJXSZKFMGOZLCZYDUECQILAQEGRQAKBUBXFTGYSKBMJIHVWOOLMCFNHSHDRSHRDTYAA");
    msg.max.assign("RFJPVQRWGYLZUXIA");

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
    msg.setTimeStamp(0.727948590803);
    msg.setSource(36740U);
    msg.setSourceEntity(8U);
    msg.setDestination(48066U);
    msg.setDestinationEntity(25U);
    msg.name.assign("BODCATMFZFYUCYFZZEDVHSNIWHCAICRFUKCXLEKQUXDVQPLGWKJZATBEHWKFISHJHNFJBAWJVXUPODOPBPXFGMLURBYYZXMSKYCMATDRNUVDRTJGUUOQOGVCHHZYJSUCGTFGLSKQQORINAGWMQKUARPXDMZYEXQRHPYPFNWVGSMNJQBGIVWTNXNIEVRHJA");
    msg.attr_type = 79U;
    msg.min.assign("RCYRGIDHFHWCDDRQXCB");
    msg.max.assign("BTPMTZZIYFUKLSSWCOZBKXPGDCDAFPGTMHRGOEKZSBAMZKZPKNPCBMTXLEVANNYFVIYEURGFFUBRCWXAJFYRPQMAXQCVPBMPPFMJIJDEUFEQVNJEDSTFYDKNNAQGODGTXKACSGRTBVILSEJZJHLRLAHDZPXDEUIXGZWQKHUTWTXSGYJEQYNKBHWAHLJSRXIOVDLMYSSUBXYUCGHCNMLWOZHOILMYVLOUAIJCREQWWW");

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
    msg.setTimeStamp(0.730038574972);
    msg.setSource(40153U);
    msg.setSourceEntity(225U);
    msg.setDestination(63359U);
    msg.setDestinationEntity(18U);
    msg.name.assign("NSOLAZXPRVRYEJVYHQEPHTEBYHMDNMGTSWBIYBWZCUKNMAOQWRGNRIFMRBEHGREYUAJWJWEXRWEORMUHSCAJUVIPFSQFVPDOXJYWWPITNNZBIOATXLRKCQHGN");
    msg.attr_type = 254U;
    msg.min.assign("UNBMOWDKULHLCJMIPJNSHKWVXEITAPONSXEARSEFAJSIMRDOYETSFZFLGQSBKZMOEGXKEZSXPBJGMDIRJQRRPKTRMCBGKFJQPAGYIWHTHGZHWHIUPYOJCYAMLAZSNLVOHGOLVNWBADXGUZASRCXWJQTKBIICFGTVOGNDNRHOBDPTFVCKUVSYABFBVKMXLCZXYYUYHPLRAUDQHZVOETUXUEYJWLDZNFEXQWNPKVWQIMTLNEMFQVWDCPZUC");
    msg.max.assign("FACIDQXNTYLGYBOYPEOOKAUUUXFXCIJCVTKK");

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
    msg.setTimeStamp(0.951541425469);
    msg.setSource(36328U);
    msg.setSourceEntity(30U);
    msg.setDestination(56335U);
    msg.setDestinationEntity(125U);
    msg.timeline.assign("CERBSTLMSQBVSXYCWLPSCJIESCNKZWEGHDYKDKWPFCUDRQXVZVAGKARCFJMTYLKNCAOUOGXHGHARMJIEIORGWEMBYAZCYLUJHIBXBJTOLFOWUDPXNPNLXVKPHGVUQYLPATZRSUNOAWGEQDTNAZZUXTDDJOEMFPZKRXAFHNGFVBUYUSOGIEHNSIHDEWQKUJLCWNYJJ");
    msg.predicate.assign("HEPWSVFCIWNJWQLQMXWUCQKTLOCNIYUBKEWSQJUBFOYVZIARPAGGLWZPCDDHLOAQOEDMDQTPURIYSHTVMUNHOSRCSCERYTMKIQTRAJZVLTYWBLXJUVZZOMKKLPYPHNTANPIOJEACDZVFFAJZSJZXTVEGKBNSUYYXSJFLHGAXYGRQLX");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("KTLLUHBOHFDZUFHXGWSTTKRENBPJESSAKDGJIMXVJYLFVCMOPQRRIMNROYKISVRAGJDVLPFKISAXBEOQHGQNXQGGPNJVTEEQIXVYGUIVAZRWTILDNJBCWUEVXORSGWPIYMHZTTXAKKZNJJOZAMDBDPQNPMVSWOXTZPFQZCHLWSMXMJKKEZDFRUXEABULUWLKCSVFWGH");
    tmp_msg_0.attr_type = 242U;
    tmp_msg_0.min.assign("SWXOBFOVBNIAWFWHRPTLEZSVMPFMSCRIRMZJGNQACPIJAQSKOXYHHNVHNPWXJSSEHLYK");
    tmp_msg_0.max.assign("AVXCDNNDNJZQMUQSZZNGJAWJQPMHXJBYFARZYDIQDIGBCBYLOAFTKKPZOOZQXVHYPAQLLSCTLDIJECEIRGEPTNZREHRDKTV");
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
    msg.setTimeStamp(0.0291060933097);
    msg.setSource(55085U);
    msg.setSourceEntity(61U);
    msg.setDestination(41767U);
    msg.setDestinationEntity(230U);
    msg.timeline.assign("MGGVGQXRBNDVYWHSTMSSBLGTRWEFFVZIXGYBDEHPUFSEBKWFTOILBTVRRYRGRCGMDTYWPRBJOOQVUCVQEMPWMZDLEQUSAPLHAIFPCKJTLBJOJPTLZJDQYWVEDUMNTCCWTZI");
    msg.predicate.assign("DIZCNZEDWIRPAEZJTAISZYUFAJPMJKUXHCWKAOTZABSEWWVRUUFMQBJKTTZKVIYTDBHDGMXCNJVXONCLSXHQUGLUYRRXWFCCIXMEEJWMPKNOASTHQVRYLAUORIMPAYHIWIOBNEMPFBLJWNTXYSJLVQQDZHSTQBDUOGVZOAUCOGYEZFVEKQRTOODGKPHYVEDFLGFSUHKRVQNILCFSBLNHSRPNBRSPQYTFGPMXFXZJLQPKGGBKG");

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
    msg.setTimeStamp(0.823285356033);
    msg.setSource(2633U);
    msg.setSourceEntity(89U);
    msg.setDestination(4486U);
    msg.setDestinationEntity(13U);
    msg.timeline.assign("ZSFHPSYVQOZXAKJLAEQJSKCTJLOPMJEYFCWTEQCRHZZZRVUKXSVRQLWVISOTPTWHFCRAEYBUQGKIXGNYKABFTJGTXAVAASTERDIQNRWGKMODXHSDOBWNCWMCMDFPLLFPGIGUZLUBQSGDVBENSQBIGCAZPXDFXEEDKNDCFAQHAHRFTNLGLFUYKUHVJPQWUPXWNXIOMV");
    msg.predicate.assign("ZIXYRAQIVAXMYAGIZLEQQJOTHNRVUMIBDCSCWFGLPDNPFLKNZQYIHXDBCYHRGVSHFWSPPMFLOQKZDINMTTOHVZAWKAXVQP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HMMUWREXBEZLAVAWIGFPGGGPBHPQTUGFPZRCMCXGUKRWCBIBYFEJMSQQAERWHYQUXUHOSIFLIYKVTCMIKNJDNPHPKYBXDBXMZVTAHVCTFQJPLIKSOONCFVQVKMZJFSCTGBOTJWLRICZLFMWHYZTZNJXPROFYUSAXLAEZBHDPUESMUVWNAJJNRJYWIDCEL");
    tmp_msg_0.attr_type = 150U;
    tmp_msg_0.min.assign("SGVNTPYJFYNUOKTZYISABNTZAGITKQXHQQTFBEMRSMCZUQCSUOBJVPUKDPFOMJHXI");
    tmp_msg_0.max.assign("UQUMMVIIYUMYFCBBRBGPSLRLYSYWPEPKDNFTOEPFGJRTDIQWBQLJEWSJQIZHTJOTIKPXOADHKWSAONHTAKFGJDFHVHUCSVXULZFZDNOYPBDJJMWCCRSACQBNOZVYBJKCPQLEDHBCODUKXUNHMFPXLMXCDKHVVFLTOEARXZKINRXWKMTLZYWXAUCICGPXWENEZZ");
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
    msg.setTimeStamp(0.464643750727);
    msg.setSource(21794U);
    msg.setSourceEntity(78U);
    msg.setDestination(29583U);
    msg.setDestinationEntity(127U);
    msg.reactor.assign("SCUZGTMJDORXTNPHKVGTYBSMRZLECAQMYZOMOGEB");

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
    msg.setTimeStamp(0.887327226244);
    msg.setSource(52876U);
    msg.setSourceEntity(103U);
    msg.setDestination(32564U);
    msg.setDestinationEntity(74U);
    msg.reactor.assign("EMIXUEXPSXZCWKKPUHIZMNLCSGPIBPCSBIYDDOJAYRYOQABUKEUUGWIFBKHSLOJMRTEFDHZJUPUZFACOMBXRKDYSMUHBEAZMJCIDWFTZDCQSRBENVPMNOCSTKVSQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GWSVWRQADSOTPFILLBHNYCRXBOZJZDRPIBSHZEAYXDPKJBADKXOEMETEZYQZLAVXPJGNJIRSHKBZOYQNFREDHLFAQFDPUYJNJEMSGPWFBKUVZPTUFVLJVURZOSAWEDTXREVUGJEFOCGLQXNSKMHULRBYKTRHQMTBZLGWAGJHECPIQNGQVVHAWNUNDQCDUOBHKUIHQMLCSWCFKTNBMIOFOIGCMZOYICA");
    tmp_msg_0.predicate.assign("MBJUUTCYTCLRKAHJOSYNEURMIVWSOGXODGYGDHGEJOMPXMRJIUCWTCDSTF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NKJHWNVBZULNZFNWOMXAYRQYDVGFFQPKTWQEOXUXDPNDQRIJTSHGDJOPSJM");
    tmp_tmp_msg_0_0.attr_type = 239U;
    tmp_tmp_msg_0_0.min.assign("EMQAFLNKFSWOUSLKZFZBYMNAVQEWWLUBNFGARYRMVJXCIAWTANYUEWHIKWDGWYTBEIFGXFPXNBRACTPPLVQQREDGDUUHVUZMHCOLI");
    tmp_tmp_msg_0_0.max.assign("WLXAGWRBVYWPVCITHEUQGMBRLIYZJCQCLDITBVSJNXVTVSUPMWZUOUFSBHIKBAMEZQRMGHADFSDIZEVBJIGZNGHHT");
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
    msg.setTimeStamp(0.599644796675);
    msg.setSource(28105U);
    msg.setSourceEntity(112U);
    msg.setDestination(55159U);
    msg.setDestinationEntity(207U);
    msg.reactor.assign("OGETTNNTOVDIVKSMCQCHOUZZPTGPIFMZIIAGVNVBBGYBYUBRJSTTCWKCDPILPDRWMRNGBJJAWOLXRZNDAMQEWBQQLUFCFLHMFEHUSJHGHUNGYSZEZXVIURISRLEUAQNKZJSNKCAACRIEOJGSUWWQSYTOKCMRUPBBXPQOVQWTDSPFAVVIH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PJASAUIBDNEVWENJMAFFXXJZDJRZYVHJZPCYDMGZHJVSRRUYCJNPRS");
    tmp_msg_0.predicate.assign("HRSDSWDCLBAYUEZOMEMFCQZNAUFZOUKILMMWOHHPPPJUJXWINIZAPUDEULHJQUKBATAOVDEKPVJHKGSWRTNXVPLAPTEFIXMWDTSEYKCQOBCVZBCNJMUOVRXNSEAMNFXNDCQLWRGWYPBGTZTYNAVYSBFAYCIRDYYXIGHDDEBOBOMFZQJUTRXHVYWTOLASBKQJJTVITPZCSRKCFOCGZGQLHR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GJVIZBTTGSQQPCWXHNNYCDHVMYPTZWOVXRWPBMFVFTEZXLRS");
    tmp_tmp_msg_0_0.attr_type = 248U;
    tmp_tmp_msg_0_0.min.assign("IQAHOCRDCSOZQXXTUOBLLQDWZKIJCGEZBHEAFJQPHYCSMXUYSKDHNHEZSJUEGMTBPDNQFRBXXKWFNLMRMQSOMVXUDFURJYVJZ");
    tmp_tmp_msg_0_0.max.assign("YMSKHVSXGTTWYGXBSDNWIOXTRFFEIBUIVDZJYNINKUSGEZHHODBURXUPFEFQDVAABAMHRDPQXEXWRKJRNEYOONXPOSHCBJPIOYSPVCQJMFJUGCAKLDLJEMVQMOCNTTWTBELGRZBFIYIWMPNLBDZBQNRQYZRSKVTFNAXLKAFMVGQHHLWYJUTLPZQOZSFWLIUZJVCKTADWKYLXUAGPPGEOCGUOBFYD");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.916639303718);
    msg.setSource(20572U);
    msg.setSourceEntity(33U);
    msg.setDestination(4097U);
    msg.setDestinationEntity(199U);
    msg.topic.assign("UCMUCUPSIOKYSEZZRIKASTMRHDMGDOFPYBZRXEEATKMWTDYNLWVNGJNANJAOALNLUFIEWQRCEVTIRDYWMZOYWBZGUOJURIBTNFAVKAXLFDZMOBS");
    msg.data.assign("XZVFVQGZKBHNUKEIRTCFFFRRUEYMGOWBQPOFFWNAJKDWYIHEHAZGXSOAOSDKAEPENBXCNGKINUYPXQZBQGNSYJGSTKKPJCDOKXTDLCMVXQIZIEBDZBBBYHRFHEXGQSUSQPFL");

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
    msg.setTimeStamp(0.214768636522);
    msg.setSource(15793U);
    msg.setSourceEntity(215U);
    msg.setDestination(3689U);
    msg.setDestinationEntity(140U);
    msg.topic.assign("GILZQVJCSLNLWXKDUFYQAWKHVBJACOLLNSUHLZMHIRBTREZWMGXDAHPIOMXNFZVEGPHMDBQJSMMOAJXHNLIKOKFCTHCIPPZWUBVTYUDJXBSGVSEEXUIRA");
    msg.data.assign("FRUEZVMBZSWZOELWNAQINYLEIGSSRHMYPBSBIHAFAIJOMQUIEXYRSUIECTVSJOYLRGOAQHVRXMDDGOFNYHLOTDDGZEU");

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
    msg.setTimeStamp(0.743527203563);
    msg.setSource(12524U);
    msg.setSourceEntity(222U);
    msg.setDestination(2655U);
    msg.setDestinationEntity(242U);
    msg.topic.assign("WYDMLKWFAEVWQKSHXHQZXILQVBMYGPVBURYWVQZCFVTMJRMDRMJKCSJXBAURYTHD");
    msg.data.assign("BYYORFHMAGNVZALDQTTGRMBKIBTFJBIKLVXOXQRRZX");

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
    msg.setTimeStamp(0.344435432438);
    msg.setSource(15260U);
    msg.setSourceEntity(7U);
    msg.setDestination(11103U);
    msg.setDestinationEntity(147U);
    msg.frameid = 171U;
    const char tmp_msg_0[] = {46, -37, -20, 103, -14, -118, -36, -109, -8, 34, -122, 61, -40, 30, -17, 116, -57, 37, 66, -14, -51, 5, 28, 104, 47, 104, -70, -35, 37, 30, 17, -80, -46, 38, 122, -19, -68, -112, -58, 77, 33, -19, -86, 17, -3, 16, -54, 4, -38, -60, 107, -113, -29, -39, 68, 113, -58, -110, 9, -63, -81, -98, 105, -5, 89, -70, 48, -10, -58, -33, 99, 53, -15, 125, 94, -31, -19, 124, -100, -55, 44, 75, 98, -112, 113, 88, -49, 2, -113, -89, 106, -64, -10, 121, 79, -21, -40, -87, -6, 95, -117, 22, 50, -57, -78, 37, -30, 42, 79, -50, 56, -34};
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
    msg.setTimeStamp(0.813342449483);
    msg.setSource(23609U);
    msg.setSourceEntity(62U);
    msg.setDestination(34604U);
    msg.setDestinationEntity(97U);
    msg.frameid = 79U;
    const char tmp_msg_0[] = {121, -33, -33, -18, -98, -19, 35, -92, 40, -116, -65, -76, -102, -93, 32, 61, 79, -100, 123, 107, -33, 119, 60, 93, -18, 14, 6, 21, 28, 1, -126, 70, -66, 122, 56, -110, -96, -39, -61, -91, 4, 54, -21, -114, 51, 25, 4, -105, 125, 80, -102, -43, -16, 78, -48, -23, 68, 125, 39, 122, -21, -108, -56, -127, -39, 59, -36, -76, 108, -34, 118, 81, 72, 80, 59, 105, 111, -78, -72, -12, -31, 85, 23, 71, -22, -31, -99, 76, -7, 31, 28, 54, 7, -69, -66, 37, -48, -19, 35, -120, -37, 33, 75, -58, 64, 119, -24, 114, 124, 112, -12, -115, 53, 12, -24, -74, -51, -10, 15, 118, -13, -91, 108, 84, -108, 45, 51, -109, -4, -26, -62, -6, 31, 104, 25, -113, 35, 109, 11, 31, 88, -122, 87, -65, 125, -40, 123, -50, 0, 33, -114, -108, -108, 94, 109, -37, -102, -44, 85, -42, -102, 26, 79, 107, 40, -14, -32, 73, -62, -15, -13, -96, -16, -17, -18, 120, 63, -11, -111, -102, 75, -39, 51, -71, 94, -33, 87, 53, 77, -5, 41, -31, 32, 73, 74, -21, 1, -24, -107, 38, 106, -48, -85, -82, 102, -20, -5, 119, -108, 11, -49, 23, 32, -22, 126, -89, 77, 19, 116, 46, 68, 62, -80, -29, 0, -104, -96, 15, 23, 42, -92, -91, -18, -98};
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
    msg.setTimeStamp(0.124631218677);
    msg.setSource(54264U);
    msg.setSourceEntity(200U);
    msg.setDestination(39109U);
    msg.setDestinationEntity(213U);
    msg.frameid = 129U;
    const char tmp_msg_0[] = {21, 89, -20, 87, -76, -120, -4, 54, 81, -34, 9, 8, 71, -51, 60, 95, 83, -61, 12, 104, -36, 85, 30, -77, -88, 60, -77, -22, -28, -82, -16, 79, -58, -115, -8, -84, 17, -119, -47, 16, 108, 102, -120, -90, 106, -63, -44, 75, 15, 46, -82, -126, -23, -62, -68, -93, 52, -51, -54, -26, 105, -45, 54, -6, 113, 91, 125, -97, -127, 30, 18, -55, -118, -61, -15, 29, 77, 68, -95, 27, 47, -1, -122, -41, -23, -2, -107, 96, -115, -51, -25, 52, 72, 12, -43, 70, -69, 23, 68, -126, -73, 84, -81, 81, -83, -112, 58, -122, 103, 63, -41, 84, -82, 89, -60, -99, 106, 52, -79, -52, 111, 70, -128, 38, -38, 58, -42, 73, -56, 36, -68, 115, 64, -97, -78, 99, 55, 43, -105, -24, 39, -122, -31, 124, -25, -21, -97, -85, 25, 101, 102, -63, 59, 86, -40, 88, 109, 99, -96, -4};
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
    msg.setTimeStamp(0.26858694488);
    msg.setSource(4679U);
    msg.setSourceEntity(227U);
    msg.setDestination(65374U);
    msg.setDestinationEntity(31U);
    msg.fps = 63U;
    msg.quality = 184U;
    msg.reps = 64U;
    msg.tsize = 184U;

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
    msg.setTimeStamp(0.500198492461);
    msg.setSource(24698U);
    msg.setSourceEntity(171U);
    msg.setDestination(29928U);
    msg.setDestinationEntity(36U);
    msg.fps = 73U;
    msg.quality = 245U;
    msg.reps = 241U;
    msg.tsize = 223U;

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
    msg.setTimeStamp(0.733756098878);
    msg.setSource(55385U);
    msg.setSourceEntity(167U);
    msg.setDestination(45307U);
    msg.setDestinationEntity(221U);
    msg.fps = 147U;
    msg.quality = 144U;
    msg.reps = 8U;
    msg.tsize = 36U;

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
    msg.setTimeStamp(0.124917364812);
    msg.setSource(53414U);
    msg.setSourceEntity(37U);
    msg.setDestination(25755U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.928108300971;
    msg.lon = 0.0992012706625;
    msg.depth = 204U;
    msg.speed = 0.55919982497;
    msg.psi = 0.057379224765;

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
    msg.setTimeStamp(0.459943807464);
    msg.setSource(28453U);
    msg.setSourceEntity(246U);
    msg.setDestination(38763U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.154222881166;
    msg.lon = 0.176996345643;
    msg.depth = 242U;
    msg.speed = 0.900197730668;
    msg.psi = 0.346592548358;

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
    msg.setTimeStamp(0.819851033869);
    msg.setSource(13194U);
    msg.setSourceEntity(131U);
    msg.setDestination(39207U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.0544254947667;
    msg.lon = 0.76800747282;
    msg.depth = 168U;
    msg.speed = 0.393245344759;
    msg.psi = 0.853775524047;

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
    msg.setTimeStamp(0.841831554738);
    msg.setSource(12648U);
    msg.setSourceEntity(115U);
    msg.setDestination(25766U);
    msg.setDestinationEntity(78U);
    msg.label.assign("ZRCWGEISUPGFKEIHXAMIADNLQSXHKPUKPOWBUKMWTCOZ");
    msg.lat = 0.637432229083;
    msg.lon = 0.956876928076;
    msg.z = 0.856694648358;
    msg.z_units = 41U;
    msg.cog = 0.987423758519;
    msg.sog = 0.5999206017;

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
    msg.setTimeStamp(0.0614690561981);
    msg.setSource(35144U);
    msg.setSourceEntity(91U);
    msg.setDestination(27052U);
    msg.setDestinationEntity(91U);
    msg.label.assign("STWFMPFLGTZBCAUGIIRXGLMVHDAVIYVIIBGQFIDQXPTEXVORZQMCJMHKJNPSXJNECSJCJKYWCTAAYYLEMWUYZXCHERZOHERCPITUHFNBSVGZRYXZJFWITYLGADDWPLNKDDCUKLYRPSBVOKYGFULNTGOUXWFPPXEKT");
    msg.lat = 0.596993448415;
    msg.lon = 0.547867298328;
    msg.z = 0.739270364112;
    msg.z_units = 156U;
    msg.cog = 0.67089776333;
    msg.sog = 0.577238851114;

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
    msg.setTimeStamp(0.915586401156);
    msg.setSource(42874U);
    msg.setSourceEntity(107U);
    msg.setDestination(31715U);
    msg.setDestinationEntity(198U);
    msg.label.assign("XMUODERYMMIJULYAEHTGQHIUIPIFZFVZSZXTTJRZYFDEBBTSSXREJWTERSAQQCDAWPYHGPNUQBAHGADOGLR");
    msg.lat = 0.190085889788;
    msg.lon = 0.140601607375;
    msg.z = 0.167515011314;
    msg.z_units = 104U;
    msg.cog = 0.890062873352;
    msg.sog = 0.708132309872;

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
    msg.setTimeStamp(0.176864529624);
    msg.setSource(57503U);
    msg.setSourceEntity(188U);
    msg.setDestination(63451U);
    msg.setDestinationEntity(236U);
    msg.name.assign("HQMLECSCNRGXHTYPNRNGFZBSELEZMSHSHHJGKASXKHZSADPFNWPCKTGXSXZTVDLJQCKRWOHWRUCQKNEIMDADFALWYMZPRBBTOZPQQLXJLRZJIOWTOIGDPGMHNNVTJYOTZZLPSYYVCMKKBVFFGUONXUFQWKLMRLBOCTVRAXQABOCUJEFVKOMFDVIQTDNYYOZKMJNPVAUDL");
    msg.value.assign("OMEMTAUMZDLVHQPFYIBJUJQLLUXIEXZJRKPJEPFQWDPCVFHJVFXQKHWORRPVGHEWVITRMIZVMAGKXBBPOFAKBWSHTJNZQWXNRDHLOYZC");

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
    msg.setTimeStamp(0.285273761534);
    msg.setSource(44568U);
    msg.setSourceEntity(131U);
    msg.setDestination(29391U);
    msg.setDestinationEntity(145U);
    msg.name.assign("TXJKQIFAOEYTKLWSDBVCLLRPDPBPFPTCBPHNDCXQUGJJWHBSCNWVXAPSMNYWRJEVZVUCJTMUZAMGXVUGOIWKAQIEVLHOGJXELCTKR");
    msg.value.assign("FSKBEQDDEMFKQLWXBMBVOIZIZSMAURYCLGZJGMVHESFBTPWFAWBLPXAVIQWBSERPOSQVYDKATCPLNKQOOMYUQHKXVUPEYNBTHCVUXPFHIJAHAHGYIYDTIHNXSUAKOGKJMMWCQMIPKBVRTPSTSXEHKTNODTCCFZVOXYHGUWXTFLJCLFJRJOCURLEESGZIZLLXRDDYAOZGN");

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
    msg.setTimeStamp(0.879842100064);
    msg.setSource(51211U);
    msg.setSourceEntity(34U);
    msg.setDestination(29386U);
    msg.setDestinationEntity(168U);
    msg.name.assign("OPDCRJXXOZYQJQTNBUGCNXAJVGBLGCLJNJPWGURMXMBHUGUZBMEHDMQEXBLGHDRFTSTUKAKEMPYOQKOQGFTADXZLPLIODVIFQVRBPWSFYLEDTJDPIATKCLTZVWJFHMEMUDNYWSAHBNKOMBSNCYCJNLHTSZYAYCIKBFJMQZGEIHVTIVFPSSWXKSEHLREIKPYOAWNRS");
    msg.value.assign("OFITAHKEUAULOKMCNERPJMQPUEJRXOHNABRBSRCIEJIDMMVTHG");

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
    msg.setTimeStamp(0.625705079381);
    msg.setSource(41730U);
    msg.setSourceEntity(166U);
    msg.setDestination(7853U);
    msg.setDestinationEntity(206U);
    msg.name.assign("PSEAPGKRNNWMDBMWKSGSEMOZVTXJURWZBHXMBNLOYQJNPLHEWLBLNUVFINEZASCUZAGYJXQJAHVWYEXPRARVQKJNDATSOYZRWUBRPXTOIDTPAPGMXZOYMFFZURGOIYFSDYJUMXPUDTFHVFTNFLPCQZWGOVHRTIHUJTTLJCQZXOIFKAKHMBJSJDWBCEQUGXECYLHHDKEVCWICVBAFEBYQRGAICIKUIM");

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
    msg.setTimeStamp(0.535094220952);
    msg.setSource(41456U);
    msg.setSourceEntity(161U);
    msg.setDestination(529U);
    msg.setDestinationEntity(248U);
    msg.name.assign("ACLTRYOWTESWVSJPVJVLADFOAYNIKROSQIEHEXLWITKIYQLQOXPMJFAZHRIVLDGLGVYGQDPDMTPGKBXMYZUJGKHZANLZPJQAHHYMNJFXVDSYBGWOBZNUWNEKSZUUIWPYKJTGKSOZBQGMQCZQSVRUWBRVCPHXJLNOTRPAWESHIBQOOMXEESGAFXJCTRNIPCBSVKKIMANCDYJDECCFMZFOHQUZDWDLBRPCNETVF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VSGSKWWRRNHEOHBZFIAWXDDGGMBXECBCBPDTWVOYDAQGKQPVDAQGTPCRABIAYLEKCNFUEMPUKJEMYFSOTOBUSDHSDVHCNJYYZTWWMMMUTVWEBIPFIRNVHRHQFZZHNDBZIUPNLHXXJOZLDNFGRXAGHWURCLYXLTIZUUJLQQPOKIQPJXRMREOFLDECAKXU");
    tmp_msg_0.value.assign("PGHCQNSCWJWADOFZZRLRPEZYEBAVRBVKHHOEETFVNYQIIPPWRKEJXAZDMJEGBPUCLGOBHYHVBBUWFRRXSYCKMCGWFKTLMSBZSMAUZVFWVNCOEQDIAXGKUEIDTLITDIYOPREUOQAHWHYSQYXXFUTNRVXTQJWLXSYBZQUUSXDORTQPBQMAVCGJNFS");
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
    msg.setTimeStamp(0.438073642648);
    msg.setSource(12324U);
    msg.setSourceEntity(21U);
    msg.setDestination(39489U);
    msg.setDestinationEntity(78U);
    msg.name.assign("QUIRNHBTMDQRVKZQRSVUAKCOLFBRYHJSVJMGDA");

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
    msg.setTimeStamp(0.706140334308);
    msg.setSource(21155U);
    msg.setSourceEntity(92U);
    msg.setDestination(51582U);
    msg.setDestinationEntity(9U);
    msg.name.assign("UHLZSZLGRRRDNBUTCIPJNSYBULQIMWOBGTAZLDIUTFFAXGPZBCYCXHYNEWWVEMJTLFWHFWQDOQFZAGNSNVIAQXRZVAPTIMUQKKAWSGYWSPXPITPLOPBBMWKHSECMEVORDGFFMUQCZTQXSXIRTURBCJLFAHZIQRNSFKXICOMLJYGMEKWLZPOBDN");
    msg.visibility.assign("TSLMDGVMNLFYNTFURKSFNCXPSJIZGCYWZQCUBDIEHOMVWKBJSWFTAZEVRCSKAVJKWYAWGRUJDRSTCHYVNDWXMIPOPQOZO");
    msg.scope.assign("AXYPGORHPFJGSEDOTJSKFIIJZIYJDMHFUHTNJHMAOTJRPCXRGIMWEKXXZXOROLHKZQWGXYOYINHWDBIBDLRAEMSWMMOLKNJVVNGFIRNDMKKLVGSWFTTRXDVYUUGLRYFECEEDLCOICVVVNQNXCBMPXSFHJCQWJ");

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
    msg.setTimeStamp(0.330309561056);
    msg.setSource(3983U);
    msg.setSourceEntity(16U);
    msg.setDestination(32777U);
    msg.setDestinationEntity(142U);
    msg.name.assign("OHQPOQQHMRVCHRBHQCFFYXKBJWYRGEJVIJSUTUCHXPKELEBVQXYXQ");
    msg.visibility.assign("FVOGXSIIPKIRPEHKSCAAGQHAULYENNQFLDRPZDFWQVWIVKDNJXSXOJVOLHRESYKCTAFDXW");
    msg.scope.assign("ECIPHBWBLHCTIXOWZOYSLNUNJLORXTOEIMAZBTHQLSMAIBZSSRNXMNHWAVRYBWUFJOMCXGXSBGDWBVRDTSTUVMBNHQPCJQRXVPJLYLVVDJATPWAMEPGMZVATTJTKYZKXFZKCMLEOFDXUJSJKUGZWCGKJGOHDFDFXPPREIFHEFFBAUTHQZRJ");

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
    msg.setTimeStamp(0.693999738663);
    msg.setSource(45482U);
    msg.setSourceEntity(80U);
    msg.setDestination(21975U);
    msg.setDestinationEntity(48U);
    msg.name.assign("NBNTOIJEUZMETARYRVCILTLUGMSWIXXGROQQUXHDVVJHNBRURLIVBPMLVOEQHDUZTPCZCSFQKNUCVVLSIJBIGAYPQKWMXWTTOSDLJOQWWM");
    msg.visibility.assign("FHWYZOTAASNSQUJGHAYZVXOFEIKARGWWWKGMUIBEHZYILLEKXPEEHQJFQCZZXPVREGOJKCOTPHJDAPQQSCBIQWWXUFGEBAMHKCDRDSFBLLDHSVCAKULFIGPDLNFGLNCNRQEVUOVEY");
    msg.scope.assign("CGOHSWWGPASVTGHXRJRQYUOXAPFYEVPNCBUNGRYEEBUDFQUDYTBNNGKETCASSXNYPIQMHHCSUDPYJ");

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
    msg.setTimeStamp(0.0291470516099);
    msg.setSource(2163U);
    msg.setSourceEntity(142U);
    msg.setDestination(32657U);
    msg.setDestinationEntity(20U);
    msg.name.assign("BCBDNSZHQGCDJWLQHDJGEJLRQRKNPGYCVMNBYPVHIJVPAFKOBPFHLMERVXFAIPAGPWFHBTWCXRKUASSUUCLVTNXMPTYCSOETSZZEZWAHPGALMXDJYLLPJINRUOGHQSWWBFQHLFXXDAMNGAGTXRQFKDEVFIEWVAEWUSJXSBHXFKGURZIEBYOTQYJMHKUIOZMLUTVOYSPFDSUTUZNDQYMYTWDKCR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YPFSSYTINLIMZEYERTOAFHCCOKXJOMQEYZZCCDHSCLBRFRZGDCTGJOBWGBAHSZBUWNZUSXATGTEJVHNJDYDNPTQPRPUPEKXYJFNNVIKLKZWEQYXLMDWVWTKFJHFDGEGPOYVMUAEAKOHMOIQNLZCRUDAKMRMOSJXHLVKXWTPCWEGVMYRIXUKWIZUQBGSCNPJMVQJHTADPWQDVMBXIIQUGRNU");
    tmp_msg_0.value.assign("ILUEWQVVEWIPUHYMNLKZISCFTRNAYLUPFPVGUNUEOHSKKJPOHYHCIBSZTZQMFXUPIQSQEKKKZECTSXDWLYCTRNKENOSBCRCYDLDXGAGJPLME");
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
    msg.setTimeStamp(0.342065519629);
    msg.setSource(59785U);
    msg.setSourceEntity(168U);
    msg.setDestination(21329U);
    msg.setDestinationEntity(196U);
    msg.name.assign("EDGOFCDOORPYDXDJGUYMMITXNVCFRAOTVTKLBTWRKBCOJBLTJVKZGGXIUVPASKWMCWEWSBLUIQTXWZSYEHKEAWWNHGJZPLYLWCNMASJAMFKSCUBADQIXUIOBYGEQHHVSFCQOMRXWDCUEEHZLPOYJKKQSVZIDDTFXBMQYPHEESOIJQUPXGHPHKUZZNQLYNNFFVRCGFNJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VIIXJGXIQUGFNUBATJLEMSXA");
    tmp_msg_0.value.assign("VSGZRSWMTMSQTYIKKPGUCAONH");
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
    msg.setTimeStamp(0.622794726991);
    msg.setSource(5740U);
    msg.setSourceEntity(175U);
    msg.setDestination(32489U);
    msg.setDestinationEntity(189U);
    msg.name.assign("UVPZTFODFGKXHBJBELXBWOQSZTUDIDQMDYUHPTNFGEGQNRJJIREUMTHP");

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
    msg.setTimeStamp(0.948573139797);
    msg.setSource(43365U);
    msg.setSourceEntity(152U);
    msg.setDestination(17965U);
    msg.setDestinationEntity(158U);
    msg.name.assign("GRCYNSJZXGVLEPJNQPBILPCPDELXKUAQCERDNFVDTJIXYSATMLMLDBQCZBTANKVRGOZDELBRPSVEVIETJDASXLFTG");

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
    msg.setTimeStamp(0.0397966092179);
    msg.setSource(20962U);
    msg.setSourceEntity(104U);
    msg.setDestination(15604U);
    msg.setDestinationEntity(219U);
    msg.name.assign("MRBCSEFOMCSZFIWTNPWQTZGNMURBQVAWBZCTQENBHFWGRKYNWMFJGNHXHJPHVKJNZOVNXMMPAHWWWFYOCXIFQRLREKRYECRDCETGCKDRHEYUNYSXFGXPJMOIZUBIEGLIAYHPESJTZJLCOASBORALBAOIBVAKOIVHKFGXQJLKJZFBULQQQXAAWYOYDUIDZKPILTZSUJDLPSRDXSMNYWEMCBKSPYSAZHGLQJPXDDGTFOUDUV");

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
    msg.setTimeStamp(0.447257969153);
    msg.setSource(30080U);
    msg.setSourceEntity(214U);
    msg.setDestination(17901U);
    msg.setDestinationEntity(253U);
    msg.name.assign("HXVTYGPELWJZCMZRMAQAWAKPPZMRYWEXNTULYSRWOLJBGNJZNPXQNLFHAKEKKLSOZAFBPGMMCFYDJIBN");

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
    msg.setTimeStamp(0.27978617841);
    msg.setSource(36742U);
    msg.setSourceEntity(83U);
    msg.setDestination(33981U);
    msg.setDestinationEntity(244U);
    msg.timeout = 206968605U;

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
    msg.setTimeStamp(0.897456294517);
    msg.setSource(14317U);
    msg.setSourceEntity(99U);
    msg.setDestination(18069U);
    msg.setDestinationEntity(95U);
    msg.timeout = 2888154066U;

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
    msg.setTimeStamp(0.223687277701);
    msg.setSource(38643U);
    msg.setSourceEntity(246U);
    msg.setDestination(24306U);
    msg.setDestinationEntity(23U);
    msg.timeout = 428272203U;

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
    msg.setTimeStamp(0.468645797471);
    msg.setSource(17875U);
    msg.setSourceEntity(212U);
    msg.setDestination(10675U);
    msg.setDestinationEntity(84U);
    msg.sessid = 3501011675U;

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
    msg.setTimeStamp(0.119914406865);
    msg.setSource(50236U);
    msg.setSourceEntity(48U);
    msg.setDestination(45476U);
    msg.setDestinationEntity(98U);
    msg.sessid = 3059961920U;

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
    msg.setTimeStamp(0.512870290852);
    msg.setSource(59754U);
    msg.setSourceEntity(204U);
    msg.setDestination(15863U);
    msg.setDestinationEntity(154U);
    msg.sessid = 1524889902U;

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
    msg.setTimeStamp(0.0230431921728);
    msg.setSource(56671U);
    msg.setSourceEntity(157U);
    msg.setDestination(32517U);
    msg.setDestinationEntity(127U);
    msg.sessid = 3517438743U;
    msg.messages.assign("WSZYIBFXWNVPINOXEALKLMJMGCZEQZULRPLBKHRIURUSBMBAGHJFDNBHOLDTWLSRNPZFPZXRCEUOLNXKDUFIQMTAXOWAACCCTKLVFOGLVPPSGJBJNYZLQDHAVYRSVENRTDHQDWGIEAD");

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
    msg.setTimeStamp(0.234605730221);
    msg.setSource(9032U);
    msg.setSourceEntity(230U);
    msg.setDestination(14460U);
    msg.setDestinationEntity(29U);
    msg.sessid = 2882374923U;
    msg.messages.assign("TBHWXLMYVS");

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
    msg.setTimeStamp(0.318487845405);
    msg.setSource(61689U);
    msg.setSourceEntity(248U);
    msg.setDestination(65492U);
    msg.setDestinationEntity(235U);
    msg.sessid = 2366860379U;
    msg.messages.assign("FDTHQJASPPNCZFNKHWGLXRFDVCFIZUGYVLJXYEOLYRKPGTGJXGEHSRHOWIGD");

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
    msg.setTimeStamp(0.0372937885104);
    msg.setSource(34865U);
    msg.setSourceEntity(145U);
    msg.setDestination(36169U);
    msg.setDestinationEntity(238U);
    msg.sessid = 2198909658U;

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
    msg.setTimeStamp(0.421895104401);
    msg.setSource(28195U);
    msg.setSourceEntity(242U);
    msg.setDestination(41914U);
    msg.setDestinationEntity(165U);
    msg.sessid = 2797749997U;

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
    msg.setTimeStamp(0.543885040662);
    msg.setSource(41402U);
    msg.setSourceEntity(14U);
    msg.setDestination(35501U);
    msg.setDestinationEntity(244U);
    msg.sessid = 3920088852U;

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
    msg.setTimeStamp(0.189514264409);
    msg.setSource(48239U);
    msg.setSourceEntity(228U);
    msg.setDestination(37128U);
    msg.setDestinationEntity(2U);
    msg.sessid = 1206486935U;
    msg.status = 75U;

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
    msg.setTimeStamp(0.166741788131);
    msg.setSource(41053U);
    msg.setSourceEntity(232U);
    msg.setDestination(22547U);
    msg.setDestinationEntity(24U);
    msg.sessid = 3029170339U;
    msg.status = 181U;

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
    msg.setTimeStamp(0.529582903849);
    msg.setSource(27373U);
    msg.setSourceEntity(138U);
    msg.setDestination(42852U);
    msg.setDestinationEntity(25U);
    msg.sessid = 1417101134U;
    msg.status = 37U;

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
    msg.setTimeStamp(0.826984917999);
    msg.setSource(15071U);
    msg.setSourceEntity(57U);
    msg.setDestination(21738U);
    msg.setDestinationEntity(144U);
    msg.name.assign("IJELBHJCZGQVWZ");

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
    msg.setTimeStamp(0.729580713857);
    msg.setSource(59503U);
    msg.setSourceEntity(183U);
    msg.setDestination(10840U);
    msg.setDestinationEntity(249U);
    msg.name.assign("WQAQIVVIXXPKJFCKFBXRUCHOSIXMKGCCDILFWUAHYMUILNDNNQUXVEJAKYCFVFRZUJPAVIOHOCEYETSMGNBITDPJTLQQMYZTBXPWGQRADLARJOODMFTJMAZHYBNWPHNSWIUPEYKVFRBDQZHBJZBEOKZHOXMGJESRLWAGXUCEJGTQCLAZVGSWTXIRQBPPTUWNBHDNTVEHHSAMLNSKGZCKVROYGDLYSQMKXWFYCLDYNRPZZIMDBGOWVSPU");

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
    msg.setTimeStamp(0.551985637551);
    msg.setSource(39393U);
    msg.setSourceEntity(162U);
    msg.setDestination(17134U);
    msg.setDestinationEntity(179U);
    msg.name.assign("QNIMRHPBMVWQJJRTBQFMCFRNNXSWLRRKLMHPSEZUYBEGFFYIQMLMVAWQPXFZQTBIAIJAEPQVQWAAPCSPCOBKBVAJSWJUEUPNGOXCVKZHGVHFECDWZKMXIGFKOSBYOXYHEUEHXZGHJXLUCASOWUBEPGDZCDDWZIYCSAOMUGKDCZEJNIDBTZNOXTRPD");

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
    msg.setTimeStamp(0.91684500908);
    msg.setSource(4272U);
    msg.setSourceEntity(61U);
    msg.setDestination(15332U);
    msg.setDestinationEntity(167U);
    msg.name.assign("SEVCIXRFAWVVITFNLIPKDRXQJKLJQRBUYGCIPNBFMNBAQCESEDQJYYNLFBAQDAWNQAHPOIGDWGSBPLHXYHGEACWUKPFVCUBOTTAYHCHRJGZ");

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
    msg.setTimeStamp(0.380329977724);
    msg.setSource(28566U);
    msg.setSourceEntity(236U);
    msg.setDestination(29609U);
    msg.setDestinationEntity(117U);
    msg.name.assign("EUPZBNJEPWUFZACYLMAEREUPFGHVGBMKWNXIQTTHYXLIXCYQBVCCYSUWXLQFQJQDKPGJYNSVXWFBJKODRRGMQITNLTUCRPXJPCQPINIHFXZTADAOFYLVOEFJZSTYDRRJJHWKYT");

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
    msg.setTimeStamp(0.503444106728);
    msg.setSource(25461U);
    msg.setSourceEntity(234U);
    msg.setDestination(11657U);
    msg.setDestinationEntity(173U);
    msg.name.assign("RIJWERNMFGYKMWXCULAXKGYKYKGHAUFGSUDWFNAHJPQYYFBBPOVZREDJZUXTXDSNUEAQIZZUMSORNJKWXLTSZRBTAASYMSIZELKDTMRNPUHTVYOTOFHLAUOVPUZQVSMQEDMSXZYJOHQWQCCWPXEBCIYPJMWXNTOADGPIEIOJDBLNDVBDGAORGLHOTVCXHVTBJGCHEUCRIHKFPRSVQAWLIDQMBQLKCQLWYEVBZMTGKZ");

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
    msg.setTimeStamp(0.259834248212);
    msg.setSource(22556U);
    msg.setSourceEntity(118U);
    msg.setDestination(38829U);
    msg.setDestinationEntity(49U);
    msg.type = 24U;
    msg.error.assign("KGYURBWVKVHKYYQYIJFSZDCOFARPDWBWEUOLUIXZXPDFYIGTTBXKNXLFSLCTTQWZNSPHQQICJOVHWLQVWZUFECHOGSEXDTMPTJATARVCUJBMVUCMVBVRMFQYDGOGPAWLDMGHWDGLIBIPLKERUMMSPUEHSNCXXPYJHBNDBZPWRTRUXFJWSICZUONMNERSMYTTFAALIZERNZOXEHQCAIDBR");

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
    msg.setTimeStamp(0.585626808008);
    msg.setSource(8140U);
    msg.setSourceEntity(145U);
    msg.setDestination(49513U);
    msg.setDestinationEntity(72U);
    msg.type = 60U;
    msg.error.assign("FKNLYAIGYMCQQGEANHVMHKHWJVIGEMBEVELOMZVJTWJXRPPHVRCAWFKZNLATWWFSGXREYSBZZO");

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
    msg.setTimeStamp(0.213198808083);
    msg.setSource(53612U);
    msg.setSourceEntity(84U);
    msg.setDestination(23682U);
    msg.setDestinationEntity(96U);
    msg.type = 251U;
    msg.error.assign("TKJWKPLNQTUHNAHHRRZQFKPZGNTMZBDTSYOPFCNOKHDKEHGCXVPNUTLNKUHMJFDHQIEXYVSYJRBTMFDIYLPOVVGSEEXAODHUNSFWPZIQDOCCKEYKBDVPECQWZGRCLAOCXBTYASYXFZYCQHJPSTHVNWCJFSMFADJEXNQTUGYIQUWAQQZRXEZYGUEIMLLLI");

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
    msg.setTimeStamp(0.284025830483);
    msg.setSource(60522U);
    msg.setSourceEntity(217U);
    msg.setDestination(62119U);
    msg.setDestinationEntity(36U);
    msg.seq = 62454U;
    msg.sys_dst.assign("SXMUENTFCTKKBDYYAZOHAOWJFQEXXTOBDKFQVZFEPVIGGJCETSMGRCINCDIYNWGSZRLEBWUQYCBHLMZPFSYLITXIPDCFDIEOTWVXAAOXRXVZBDQYMWHPPBVJUJAZYLQHSZUUHLCSAUIGROFNJYEFEJMSUVWVHBFYHQAOPRQSFQJLCXHDDKPSWBGANTZBGYXRSKORHKRK");
    msg.flags = 78U;
    const char tmp_msg_0[] = {-74, -39, 49, -11, 124, -66, -110, 98, 94, 6, -120, 68, 78, -90, -86, -102, -24, 30, 108, -6, -107, 107, 38, -107, 52, 3, 0, -34, 109, 30, 26, 53, 100, 91, -24, 0, -13, 126, -30, -113, -11, 31, 95, -86, -101, 114, -7, 41, 46, -13, -3, -79, 46, 68, 75, 97, -113, -116, 43, -125, -98, -88, 63, 103, -66, -98, -86, 59, -47, 33, 126, 112, 0, -112, 78, 77, -19, -86, -41, 105, -80, -2, 13, 77, 101, -84, 36, 101, -120, -82, -116, 2, -56, -1, 16, -74, -55, -45, 39, -5, -79, 104, 58, 126, -42, -68, 32, 115, 89, -38, 94, -69, 18, 21, 46, -3, -64, 76, -32, -96, -75, -15, 27, -96, 49, -65, -104, 39, 115, 123, -62, -55, 10, -92, -35, 84, 35, -128, 34, 22, -15, -83, 36, 50, -9, 42, -69, -7, 27, 67, 98, -26, 74, 105, -3, -96, 42, 107, 5, -19, 67, -61, -66, -22, -41, -109, -6, -52, -13, -96};
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
    msg.setTimeStamp(0.592729832582);
    msg.setSource(6389U);
    msg.setSourceEntity(213U);
    msg.setDestination(62909U);
    msg.setDestinationEntity(43U);
    msg.seq = 57721U;
    msg.sys_dst.assign("CLFLWSVTNXEDCHCMHCGQGXXPHSLTCYRQZTRDYOWRFYVABLVUBXRNCTANRKFRMFPUGSGIEMITDGQJBVATQIQXTPJNIOUMFGYNJBKGCHCSBSXUADURDHBOYNSGKBTQADSVUYGRWVOSEPUWMKWX");
    msg.flags = 212U;
    const char tmp_msg_0[] = {12, 81, 11, 37, -83, -71, 37, 118, 90, -72, -85, -11, -42, 46, 39, -73, 12, -12, -71, 113, -127, 0, 123, 103, -114, -54, -115, -62, -102, -36, -38, 17, 8, -17, -59, 24, 18, 26, -116, 27, -126, 100, -30, 123, 35, -25, 21, -39, -26, -80, -113, 99, 22, 13};
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
    msg.setTimeStamp(0.784231299723);
    msg.setSource(36237U);
    msg.setSourceEntity(149U);
    msg.setDestination(60313U);
    msg.setDestinationEntity(197U);
    msg.seq = 25902U;
    msg.sys_dst.assign("RVLHGZOTMPPKHMNBPLOCRSVZHUXMGQSMTFMGCJGFMKNPBFQGVRPOUIDWYUXYIHUDERXKSXRLIETVUWOQCIZKTARGYVJOSJAT");
    msg.flags = 191U;
    const char tmp_msg_0[] = {-104, -101, 1, 77, -74, 48, 64, 70, 114, -106, -33, 19, 25, -116, 39, 83, -70, 2, -38, -39, 79, 101, -114, 16, -46, 8, -42, 71, -13, -122, 37, -78, 45, -71, -15, -34, -52, 76, 77, -72, -88, -88, -24, 74, -16, 19, -115, 81, -102, -4, 71, 33, -82, -116, -34, 86, -101, 42, 28, 78, 22, -4, -100, 34, 87, -33, 111, -102, -32, -4, 80, 126, 108, -92, 83, 71, -101, 79, -127, -116, 36, -98, 28, 55, -46, -97, 32, 95, -87, 85, -74, 66, 65, -68, 79, -24, -43, 123, 119, 118, -11, -13, 123, 19, 81, -108, 50, 13, -24, -64, 82, -49, -121, -69, 126, 86, 65, -85, 28, 38, -111, 125, 2, 22, -85, -9, -58, 118, 105, -91, -36, -102, -82, -18, 28, 81, -73, -3, -125, -53, -81, 82, -42, -109, 2, 85, 70, 71, 125, 2, 51, -33, -16, -109, 31, 21, -117, -23, -50, -122, -30, -66, 110, 68, -75, 60, 101, 106, -46, 115, 58, -119, 38, 99, -127, 20, 7, 107, -109, -61, -79, -72, 74, 119, 8, -12, -10, 37, -110, 92, -43, -77, -95, -9, 88, -82, 0, 25, -22, 20, 26, -99, -30, -41, 99, -32, 54, 68, -24, -78, -107, -7, 101, 18, 100, -17, -107, -103, 37, -68, -113, 63, -4, 26, -30, -123, -60, -50, 49, 56};
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
    msg.setTimeStamp(0.962798344356);
    msg.setSource(20565U);
    msg.setSourceEntity(188U);
    msg.setDestination(55008U);
    msg.setDestinationEntity(196U);
    msg.sys_src.assign("LOIGTJUNJEAJRBFSOFXPLTAEHWERPGHVIUYUPXJDLPTXRZGKJRVRMLLIBBCISOQPQWCEDEGDRZQNYUBDNJSDEVFMOWUMCEKZNWEOKBSIQBUSGFMKHPYMUTHXOJB");
    msg.sys_dst.assign("WHRNVYDUHIUYXUVOFANIPHEDJXPCPRYQFEANDIKJKNIVMDXRPFLIWABZFGZXSBYRSCNEZOWQQBGKCDOLVVBKKAMJBCXVHLPWJBSUZQAAYPOOOGESMCHVEQSEBKGCBRXWEYMZRLVYATFFGTWMZNKCSYLPJUNATTWHXSLHWJ");
    msg.flags = 214U;
    const char tmp_msg_0[] = {119, -109, -22, -104, 124, 66, 59, -109, 11, -77, 120, -49, -90, 98, -127, 22, 77, 0, 3, -97, 73, 7, -110, -126, 34, 32, -35, -42, -76, 91, 40, 17, 109, -55, -89, -15, -25, -119, 62, -52, 25, 67, -108, -66, -64, -1, 118, -13, -26, -17, -122, -98, -35, 95, 100, -5, -79, 52, -108, -124, 116, -43, -42, -99, 35, 41, 16, -43, -28, 20, 69, 103, 38, 123, 70, -9, -54, 94, 77, -13, 27, -122, -14, 87, -120};
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
    msg.setTimeStamp(0.0919491911302);
    msg.setSource(43740U);
    msg.setSourceEntity(56U);
    msg.setDestination(49835U);
    msg.setDestinationEntity(18U);
    msg.sys_src.assign("PYBZYXNEGVELLZXYJQDFMSEOFZXOIXAFKJRCCY");
    msg.sys_dst.assign("ERLZZDREGDWAOLXVBUWNSXXKAMTYJVUZFUOOTBUFEBCDLBBMWLVDASJYXPSCVBJSYCFFCPLUNAUQQFGISQWQYNWRHOLKVTBVTPJCTDFINXLUCTIB");
    msg.flags = 28U;
    const char tmp_msg_0[] = {-126, 47, 113, -109, -95, -107, -74, 69, -105, -44, -50, -54, -94, -37, -107, -37, 59, -62, -85, 72, -124, 37, 57, -121, -93, 84, -16, -56, 12, -40, 62, 0, -84, 117, 17, 124, 62, 13, 43, -83, -104, 118, 58, -4};
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
    msg.setTimeStamp(0.724904534869);
    msg.setSource(14961U);
    msg.setSourceEntity(205U);
    msg.setDestination(14465U);
    msg.setDestinationEntity(8U);
    msg.sys_src.assign("YWZTYCKMZGCQDXUBTXNCTHWUEWFVDVGJENNWZKFVVGOKJTZEDOBAPJGJZUSHWNLXSMWISMVD");
    msg.sys_dst.assign("RHOCGWGRBQKPMNNQSKREQZGIXLBHZVKEEYNQHSGZSAFVSPYNAFYKFJVLUCYNCACWRZJPYDBCFHDJBNESXLCTVJRWEWPVBGNTLLAOQTOIOMDDKAWTCVXWRYRZDDQKNGIFYQJQXGKXIEJKUVQFKXMHWOVUTMLIKVMFXZMSPSUTTCMBMPPJDAPMDWGIGRSTHFWSTEWVMXDBOGHFJIIAUCBBUTULHULOYLHPUCABYJRIEZFOSLZYI");
    msg.flags = 211U;
    const char tmp_msg_0[] = {-13, 32, 23, -35, 112, 110, -27, -73, -124, -31, -92, -90, 10, 42, 45, 110, -114, 71, -109, 16, 1, -78, -17, 43, -127, -64, 84, -127, -105, 15, 28, 28, -43, -96, -61, 7, 51, 61, -77, 4, -84, 124, 35, 4, -117, 84, 12, -100, 125, -9, -36, 12, -96, 122, -117, -44, -92, -4, 124, -89, 2, -96, 122, 83, -2, -125, 89, -76, 38, 71, -116, 86, -40, -63, 78, 14, 61, -75, -6, 115, 20, -40, -98, -42, 31, 23, -79, 43, 43, 117, -92, -96, 61, 8, 71, 126, 12, 60, -38, 81, 93, 80, 72, -118, 64, -72, -33, 81, 76, 6, -30, 94, -5, -85, 101, -47, -114, 32, 81, 71, -78, -23, -8, -14, 10, -36, 59, -117, 31, -115, -126, 48, 14, -120, -111, -91, 108, 109, -39, 73, -60, -90, 31, 111, -72, -63, 116, 58, 109, 86, 96, 72, -67, 29, -110, 120, -78, -100, -82, -21, -7, 108, -20, 13, 29, 109, -41, -56, 58, 35, -107, 19, 11, -46, 2, 40, 115, -108, -101, 113, -23, 11, -35, -52, 38, 41, 117, -115, -41, -9, -101, -49, 15, 27, -110, 53, 85, -103, 103, -84, 72};
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
    msg.setTimeStamp(0.175151706056);
    msg.setSource(2004U);
    msg.setSourceEntity(203U);
    msg.setDestination(22449U);
    msg.setDestinationEntity(44U);
    msg.seq = 41718U;
    msg.value = 229U;
    msg.error.assign("VCKOCPPCNZYMTMVDJHKXDYCIANWMRDKBOOAQRUJEMVIXUMGDAHJZGSNFESWXUBDQWCVFTLFEMZIEOVDXNYTFQIRZLYXCBRIXGACOCPPP");

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
    msg.setTimeStamp(0.185948302548);
    msg.setSource(63203U);
    msg.setSourceEntity(92U);
    msg.setDestination(52321U);
    msg.setDestinationEntity(240U);
    msg.seq = 40474U;
    msg.value = 70U;
    msg.error.assign("QLEQZBCUISXWVYBHMNTRAGILJOEBCZGKSFNIEWRWUIWSPLUMFVCEQYYJKTLKGXSWBVXUGZRKXMDDPYZGQHTNSNFGJLYLASLGAEIKOWJVMFHWBOPCIFMYAVFTVQABZQOCUDTKHRIJNPAAEFMKJNAZHVAVCRTRAPQDRQRCCOPPTJYJTRDCOOXLBTZXHHHCQDFMXMKDIHEOUXEWM");

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
    msg.setTimeStamp(0.30889893842);
    msg.setSource(50515U);
    msg.setSourceEntity(3U);
    msg.setDestination(14270U);
    msg.setDestinationEntity(141U);
    msg.seq = 61529U;
    msg.value = 235U;
    msg.error.assign("XFNMRLECEGAMMUQXRRZJLYLFR");

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
    msg.setTimeStamp(0.937153408385);
    msg.setSource(43895U);
    msg.setSourceEntity(244U);
    msg.setDestination(21538U);
    msg.setDestinationEntity(231U);
    msg.seq = 58504U;
    msg.sys.assign("GGSXFGMKKNSCAQVYRNDTFWBNPIVGZAZRRDJHHIXVWMQMNWXEQFBFXIYSMRNZBWPBWYAONIYMQMPJFSJVDVCBCGXUAKTRGJLJWSNZJWSUIXBYCHWZCQBOGYEPRCEUOOICMBLJCGWUDHVEDADKDFLXLYEIKIOQMLDEZVTBTFQSAOKELOHQRITRUDHLKMTUSOKTPOLVYTPVYCSWKL");
    msg.value = 0.921528232564;

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
    msg.setTimeStamp(0.115114651766);
    msg.setSource(44144U);
    msg.setSourceEntity(200U);
    msg.setDestination(17269U);
    msg.setDestinationEntity(166U);
    msg.seq = 1390U;
    msg.sys.assign("ZHCNOCGULHICQQSGNPHFUMONWMSKEOJKRZVRTQSHKGEIPYITDTUQ");
    msg.value = 0.715836953691;

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
    msg.setTimeStamp(0.20081837798);
    msg.setSource(42556U);
    msg.setSourceEntity(171U);
    msg.setDestination(60420U);
    msg.setDestinationEntity(229U);
    msg.seq = 40530U;
    msg.sys.assign("ECDVLTXMFCWOIJGDLJQZSNASKHSXSXBWWLTXKVSULZIPWFJPBOMDQGOYXHZRHIRQNMGCCFDNXMZLHYEJRFDDZYMOARSKYOTFAQWYEEXFLSXEEVJAZQUDUQYIPDIOFBIKSNFHRFVUMRWONHCUEJUNPFBKYWHETUVGUCOATBUGGBTKAUPTQZMKTPLWPDAWCCBOKOCNVVBLWEMYVYKJMNMZPJQRDSIQGRHAAIZ");
    msg.value = 0.462294611239;

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
    msg.setTimeStamp(0.383445740858);
    msg.setSource(62221U);
    msg.setSourceEntity(103U);
    msg.setDestination(54559U);
    msg.setDestinationEntity(76U);
    msg.action = 55U;
    msg.longain = 0.419026576744;
    msg.latgain = 0.494061680467;
    msg.bondthick = 2169315814U;
    msg.leadgain = 0.884380480536;
    msg.deconflgain = 0.0128333625044;

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
    msg.setTimeStamp(0.507369629994);
    msg.setSource(5670U);
    msg.setSourceEntity(98U);
    msg.setDestination(5387U);
    msg.setDestinationEntity(46U);
    msg.action = 24U;
    msg.longain = 0.905208494406;
    msg.latgain = 0.439412186697;
    msg.bondthick = 732554165U;
    msg.leadgain = 0.955760651846;
    msg.deconflgain = 0.311902317656;

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
    msg.setTimeStamp(0.601271513451);
    msg.setSource(2409U);
    msg.setSourceEntity(49U);
    msg.setDestination(57244U);
    msg.setDestinationEntity(217U);
    msg.action = 129U;
    msg.longain = 0.472016190407;
    msg.latgain = 0.95476198015;
    msg.bondthick = 1092151235U;
    msg.leadgain = 0.888938798975;
    msg.deconflgain = 0.59425125513;

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
    msg.setTimeStamp(0.0812206743131);
    msg.setSource(39208U);
    msg.setSourceEntity(145U);
    msg.setDestination(25176U);
    msg.setDestinationEntity(246U);
    msg.err_mean = 0.568498503734;
    msg.dist_min_abs = 0.811805856845;
    msg.dist_min_mean = 0.715811637578;

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
    msg.setTimeStamp(0.646481338261);
    msg.setSource(46568U);
    msg.setSourceEntity(166U);
    msg.setDestination(34331U);
    msg.setDestinationEntity(102U);
    msg.err_mean = 0.0474771376714;
    msg.dist_min_abs = 0.59008890441;
    msg.dist_min_mean = 0.411015192975;

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
    msg.setTimeStamp(0.257196861658);
    msg.setSource(12131U);
    msg.setSourceEntity(3U);
    msg.setDestination(49684U);
    msg.setDestinationEntity(59U);
    msg.err_mean = 0.855400458315;
    msg.dist_min_abs = 0.707130644899;
    msg.dist_min_mean = 0.954222065726;

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
    msg.setTimeStamp(0.786998292242);
    msg.setSource(53361U);
    msg.setSourceEntity(86U);
    msg.setDestination(53249U);
    msg.setDestinationEntity(100U);
    msg.action = 136U;
    msg.lon_gain = 0.61011427393;
    msg.lat_gain = 0.266978091577;
    msg.bond_thick = 0.730988808127;
    msg.lead_gain = 0.340174852713;
    msg.deconfl_gain = 0.145555480135;
    msg.accel_switch_gain = 0.888867100623;
    msg.safe_dist = 0.238788758777;
    msg.deconflict_offset = 0.279752906655;
    msg.accel_safe_margin = 0.256937316035;
    msg.accel_lim_x = 0.404641272431;

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
    msg.setTimeStamp(0.509737329702);
    msg.setSource(34690U);
    msg.setSourceEntity(185U);
    msg.setDestination(59105U);
    msg.setDestinationEntity(3U);
    msg.action = 244U;
    msg.lon_gain = 0.605201229509;
    msg.lat_gain = 0.189371547237;
    msg.bond_thick = 0.28847980328;
    msg.lead_gain = 0.126809790994;
    msg.deconfl_gain = 0.653575782402;
    msg.accel_switch_gain = 0.834999168397;
    msg.safe_dist = 0.159470931142;
    msg.deconflict_offset = 0.242220625871;
    msg.accel_safe_margin = 0.217046903079;
    msg.accel_lim_x = 0.053858614478;

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
    msg.setTimeStamp(0.708968206529);
    msg.setSource(5252U);
    msg.setSourceEntity(156U);
    msg.setDestination(64959U);
    msg.setDestinationEntity(80U);
    msg.action = 3U;
    msg.lon_gain = 0.953232636402;
    msg.lat_gain = 0.925669792412;
    msg.bond_thick = 0.971511982432;
    msg.lead_gain = 0.332742946349;
    msg.deconfl_gain = 0.0893875589906;
    msg.accel_switch_gain = 0.524290101214;
    msg.safe_dist = 0.280752196575;
    msg.deconflict_offset = 0.106927586462;
    msg.accel_safe_margin = 0.156817805341;
    msg.accel_lim_x = 0.154869114743;

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
    msg.setTimeStamp(0.0415274881393);
    msg.setSource(15034U);
    msg.setSourceEntity(39U);
    msg.setDestination(1360U);
    msg.setDestinationEntity(239U);
    msg.type = 102U;
    msg.op = 135U;
    msg.err_mean = 0.690328625891;
    msg.dist_min_abs = 0.72434308119;
    msg.dist_min_mean = 0.444747368208;
    msg.roll_rate_mean = 0.844827041269;
    msg.time = 0.148223410501;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 236U;
    tmp_msg_0.lon_gain = 0.846664808096;
    tmp_msg_0.lat_gain = 0.806026522742;
    tmp_msg_0.bond_thick = 0.924564319012;
    tmp_msg_0.lead_gain = 0.443484200492;
    tmp_msg_0.deconfl_gain = 0.716447262587;
    tmp_msg_0.accel_switch_gain = 0.490183761937;
    tmp_msg_0.safe_dist = 0.302106505834;
    tmp_msg_0.deconflict_offset = 0.627599596149;
    tmp_msg_0.accel_safe_margin = 0.599731965783;
    tmp_msg_0.accel_lim_x = 0.887308804728;
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
    msg.setTimeStamp(0.968008635762);
    msg.setSource(30447U);
    msg.setSourceEntity(217U);
    msg.setDestination(61000U);
    msg.setDestinationEntity(66U);
    msg.type = 151U;
    msg.op = 175U;
    msg.err_mean = 0.477562057044;
    msg.dist_min_abs = 0.521970176893;
    msg.dist_min_mean = 0.203455963639;
    msg.roll_rate_mean = 0.231305057056;
    msg.time = 0.0172013893228;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 5U;
    tmp_msg_0.lon_gain = 0.740468981162;
    tmp_msg_0.lat_gain = 0.625583264532;
    tmp_msg_0.bond_thick = 0.990609440748;
    tmp_msg_0.lead_gain = 0.424130645778;
    tmp_msg_0.deconfl_gain = 0.480644271294;
    tmp_msg_0.accel_switch_gain = 0.741796570025;
    tmp_msg_0.safe_dist = 0.167296206431;
    tmp_msg_0.deconflict_offset = 0.522075544446;
    tmp_msg_0.accel_safe_margin = 0.190167736763;
    tmp_msg_0.accel_lim_x = 0.771475778062;
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
    msg.setTimeStamp(0.942792942744);
    msg.setSource(62599U);
    msg.setSourceEntity(242U);
    msg.setDestination(42000U);
    msg.setDestinationEntity(50U);
    msg.type = 216U;
    msg.op = 37U;
    msg.err_mean = 0.680441924707;
    msg.dist_min_abs = 0.490807545238;
    msg.dist_min_mean = 0.274552162094;
    msg.roll_rate_mean = 0.223993070587;
    msg.time = 0.420280274337;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 84U;
    tmp_msg_0.lon_gain = 0.299354515143;
    tmp_msg_0.lat_gain = 0.639486596167;
    tmp_msg_0.bond_thick = 0.946172450049;
    tmp_msg_0.lead_gain = 0.262263176443;
    tmp_msg_0.deconfl_gain = 0.380632994124;
    tmp_msg_0.accel_switch_gain = 0.902351647831;
    tmp_msg_0.safe_dist = 0.486137722302;
    tmp_msg_0.deconflict_offset = 0.88454257273;
    tmp_msg_0.accel_safe_margin = 0.417204306115;
    tmp_msg_0.accel_lim_x = 0.500540782384;
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
    msg.setTimeStamp(0.14023734874);
    msg.setSource(59992U);
    msg.setSourceEntity(10U);
    msg.setDestination(35050U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.559561961176;
    msg.lon = 0.0598657102532;
    msg.eta = 2164715116U;
    msg.duration = 2737U;

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
    msg.setTimeStamp(0.187792722468);
    msg.setSource(44189U);
    msg.setSourceEntity(56U);
    msg.setDestination(54747U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.403809239312;
    msg.lon = 0.0272706960199;
    msg.eta = 291792439U;
    msg.duration = 50386U;

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
    msg.setTimeStamp(0.4256790714);
    msg.setSource(44213U);
    msg.setSourceEntity(1U);
    msg.setDestination(11393U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.87877072772;
    msg.lon = 0.270606275103;
    msg.eta = 2927443699U;
    msg.duration = 57531U;

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
    msg.setTimeStamp(0.417982484156);
    msg.setSource(12701U);
    msg.setSourceEntity(247U);
    msg.setDestination(28639U);
    msg.setDestinationEntity(74U);
    msg.plan_id = 29184U;

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
    msg.setTimeStamp(0.905527204708);
    msg.setSource(65256U);
    msg.setSourceEntity(168U);
    msg.setDestination(30487U);
    msg.setDestinationEntity(56U);
    msg.plan_id = 1636U;

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
    msg.setTimeStamp(0.680503810622);
    msg.setSource(12717U);
    msg.setSourceEntity(254U);
    msg.setDestination(18072U);
    msg.setDestinationEntity(0U);
    msg.plan_id = 426U;

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
    msg.setTimeStamp(0.126431885025);
    msg.setSource(46365U);
    msg.setSourceEntity(167U);
    msg.setDestination(38181U);
    msg.setDestinationEntity(159U);
    msg.type = 121U;
    msg.command = 197U;
    msg.settings.assign("UNPYBMGRWZVNPLGLVSCWTHHCUIEDKZWUCGAHHXOQOGQURZLGFGTFMXAZLLAZ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 42444U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TNHKVBXXRCODZMEZRFFSAUELOVIHAHHADLBBFVQJBAHNHDMXTSEMVULGYAQKUQTGUUWXAEVSETECDNTCLBOBHHYJOPAOMOWSWFGIGOQVFNUDZGCXPR");

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
    msg.setTimeStamp(0.770622057394);
    msg.setSource(40326U);
    msg.setSourceEntity(91U);
    msg.setDestination(9688U);
    msg.setDestinationEntity(125U);
    msg.type = 141U;
    msg.command = 102U;
    msg.settings.assign("IHCLRUFKZKCBJBOESYGRPUOWIZBFBVUQGMJCMFVLEHKFFSYABXKOSGXKWAMNDTAXJTNZLOATSQPIRNVXQQQJGYWPIDEYDWJQTKNCGMKINMPBTZXHPORDVEVHFWHRBXATCWNWYAIYCZSGWUAOMEYGHEOIKESLTCCNV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 10425U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("SNMZQWLIOHOCAKISPPDMGRXXYDCVEXVCYWOMADFVGTTIHDWEUEFZGKNEZBRLHQLJDATGOOUMMEZRDUHQLMVEIWRJFKNEGNCXORLGNAVVXUXGQQZZCIXJPRFDBJMMNLAMYRPKOSUMRBNLABCYZASITSBCUOLFCBSFPISTEJBKWHGFXGWWUVQUQDKAYZPFVOHYBTDPQHYGRAYJWYRNIQWLZKFNJXJTHUUBITECYDVVKFSELOSPIJTPTJHWZA");

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
    msg.setTimeStamp(0.599351719859);
    msg.setSource(4608U);
    msg.setSourceEntity(254U);
    msg.setDestination(65169U);
    msg.setDestinationEntity(90U);
    msg.type = 233U;
    msg.command = 168U;
    msg.settings.assign("HYIQLETDEUM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 44947U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QBQNOQKWUWVKGDNAZAHFNUKPREEQKHOOJAPFBJMKFWVROWLBCPSBWIKFZDFEDPHPADYUZJYRMORNSMGUYIUGHGEJHWLJUXSSJTCFOTMSTNZOESXIXQZGJBERLUYLGMLSVAXMELNVQZYALJVKITGRLVBNZBYROCBAWDYWTHBMICDOCXRTKIMHXKXPZNRGVAFTUXOHEZVQQSERJAYDCUFNECPITZQGJBVYVDCKSM");

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
    msg.setTimeStamp(0.165371228856);
    msg.setSource(28897U);
    msg.setSourceEntity(183U);
    msg.setDestination(55349U);
    msg.setDestinationEntity(29U);
    msg.state = 232U;
    msg.plan_id = 5283U;
    msg.wpt_id = 233U;
    msg.settings_chk = 42404U;

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
    msg.setTimeStamp(0.067654306191);
    msg.setSource(25796U);
    msg.setSourceEntity(218U);
    msg.setDestination(38731U);
    msg.setDestinationEntity(242U);
    msg.state = 48U;
    msg.plan_id = 45849U;
    msg.wpt_id = 29U;
    msg.settings_chk = 21344U;

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
    msg.setTimeStamp(0.452123065769);
    msg.setSource(39613U);
    msg.setSourceEntity(218U);
    msg.setDestination(16130U);
    msg.setDestinationEntity(241U);
    msg.state = 85U;
    msg.plan_id = 14112U;
    msg.wpt_id = 67U;
    msg.settings_chk = 25108U;

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
    msg.setTimeStamp(0.30424592825);
    msg.setSource(925U);
    msg.setSourceEntity(181U);
    msg.setDestination(17459U);
    msg.setDestinationEntity(43U);
    msg.uid = 250U;
    msg.frag_number = 208U;
    msg.num_frags = 27U;
    const char tmp_msg_0[] = {-51, -93, -35, -85, -50, -70, -90, 117, -32, -120, -79, -35, 7, -52, 89, -115, 24, 90, -93, -101, 7, -29, 30, -84, 33, 74, 16, -25, -85, -106, -87, -88, 42, -111, -84, -87, 97, -117};
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
    msg.setTimeStamp(0.190230446695);
    msg.setSource(24611U);
    msg.setSourceEntity(94U);
    msg.setDestination(58556U);
    msg.setDestinationEntity(104U);
    msg.uid = 154U;
    msg.frag_number = 79U;
    msg.num_frags = 44U;
    const char tmp_msg_0[] = {115, 86, 125, 39, 110, 103, 3, -121, 62, -55, -124, -7, 117, 125, 55, 4, -49, 31, -53, 54, 74, -122, 14, 86, 86, -5, -60, 39, -111, 123, -58, 14, 52, -75, 13, 41, 17, -8, -58, 1, 117, -50, 97, -44, -37, -49, 52, -40, -104, -87, -106, 110, 43, -49, 107, 64, -31, -35, -35, -42, 59, 93, -92, 29, 58, 22, -102, -110, 6, 54, 53, -48, -25, 6, -111, -18, 42, 36, 3, -15, -77, 1, -93, -39, 96};
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
    msg.setTimeStamp(0.620032695276);
    msg.setSource(32971U);
    msg.setSourceEntity(171U);
    msg.setDestination(50151U);
    msg.setDestinationEntity(131U);
    msg.uid = 189U;
    msg.frag_number = 134U;
    msg.num_frags = 222U;
    const char tmp_msg_0[] = {-118, -64, 35, -14, 24, 112, 117, -38, 20, 61, 16, 41, 24, 81, -9, -125, -113, -87, -79, -55, -122, -23, -19, -48, 30, 117, -101, 42, 49, -42, 26, -16, -27, 20, -46, -37, -109, -110, -102, 80, 34, 17, -97, -119, 60, 27, 6, -85, 15, 116, 9, -81, -119, -77, -42, -1, 82, -44, 115, 1, 114, 6, 69, 71, -73, -10, -32, 1, -13, 33, 29, -8, 60, 63, 93, -68, -32, -46, -121, -61, -119, 50, -95, 20, -51, 26, 50, 1, 94, -67, -59, 81, -103, -112, 11, -116, 124, 106, -106, 108, -68, 119, 86, -87, 82, 50, 106, -11, 66, 27, -109, 22, 80, 18, 85, -56, 84, -42, 80, 73, -78, 10, -59, 96, -62, -88, 84, -63, 26, -113, 33, -68, 83, 19, -5, -43, 73, -21, 64, -28, 44, -41, -63, 17, 28, -101, 66, 29, 50, 80, -90, -99, -2, -76, -88, -15, -101, 23, 99, -93, -120, -99, 73, 39, 70, 78, 69, 119, -115, 81, 109, -48, -26, 107, -74, -4, -89, -80, -60, 124, -10, -122, 93, 14, 12};
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
    msg.setTimeStamp(0.934353738858);
    msg.setSource(65355U);
    msg.setSourceEntity(48U);
    msg.setDestination(47543U);
    msg.setDestinationEntity(80U);
    msg.content_type.assign("IYRXNNFLTZXJQJYZQTBVVJCROUCANWZFPWHAMAREHUWKFUPFEZXQQXLGOUSBCEGJJIDFDTMAETVHNLRBYAHLZGOMKKFMCKTITZAJMWLIWDLZAUXGPSBUPOKVUBZFQPUYJLWVNEGVXUDFNRIEVRHYAQVJGV");
    const char tmp_msg_0[] = {36, 101, -1, 12, 45, 33, 1, 100, -64, -63, -66, -78, 4, 50, -41, -118, 40, 17, 35, 124, -29, -13, -124, 21, -58, -74, 43, 90, 118, 118, 59, 59, 74, -1, 59, 86, -109, 45, -1, 49, -54, 44, 79, 58, -56, -114, 120, 74, -14, -87, -75, -62, 63, 56, -110, 31, -34, 81, 62, 53, 75, -61, -63, -105, 43, 57, -91, -63, 11, -120, 37, 71, -47, 111, -2, -94, -57, -55, 49, 73, 72, 126, 123, -18, -70, -15, -127, -68, 117, -113, -99, 12, 121, -14, -119, -14, -52, 119, -96, -30, -59, 68, 41, -92, 16, 51, -10, 16, 18, 61, -86, 113, -63, -9, 83, -22, 44, -107, -18, 61, -24, -30, -45, -1, -15, -27, 17, -107, 43, -59, -116, 106, 104, -4, 47, -101, -98, 9, -114, -52, 66, -28, -108, -111, -37, 13, -74, -34, -22, -52, -98, 73, 46, -61, 12, 28, -13, -15, -87, -86, 45, 123};
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
    msg.setTimeStamp(0.802068633899);
    msg.setSource(59224U);
    msg.setSourceEntity(145U);
    msg.setDestination(13604U);
    msg.setDestinationEntity(162U);
    msg.content_type.assign("HLTPFMDAUWGHXABZKGMSTRDHNQYWOEXXJUJZUKFLEXTZNRRNKTWFFSCGQZZIILTPBEWRQORSURFOSXKJWMJTCWEPXVLKWYBJSAOQJLCBAGVBCMOJGPNSTYMPZCAWIVJDTIVAFCQDHYGM");
    const char tmp_msg_0[] = {-23, 68, -61, -41, 47, 18, 106, -59, -79, -38, 24, 111, -6, -36, 110, -23, -30, 23, -101, 87, -111, 58, 57, 86, 45, -78, -18, -5, 74, 94, -114, -35, 78, -128, -36, -14, 109, -52, -36, 30, -12, 111, 111, -124, 62, -102, -43, 64, -53, 83, -5, 20, 2, -63, -112, -102, 111, 102, -53, 97, 33, 58, -20, 29, -48, 21, -45, 91, -23, -78, 41, 8, -95, -28, -102, -51, -87, 93, -6, 102, -127, 62, -106, -44, 51, -104, -51, -71, 117, 114, -91, 29, -61, -80, -85, -76, 117, 47, -116, -108, 26, 123, 98, 26, 105, -97, -80, -3, 44, -67, 81, -127, 80, -104, 100, -37, -23, -26, -37, -75, -85, -63, 1, -76, -10, 22, -22, -92, 12, -77, -45, 59, -93, -124, -1, 96, -43, 55, -18, 53, 53, -68, 39, -90, -60, -80, 34, 52, 71, -113, 44, 85, 52, 79, 107, 90, 76, 36, -121, 116, 16, -76, 116, 107};
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
    msg.setTimeStamp(0.403005292557);
    msg.setSource(59491U);
    msg.setSourceEntity(150U);
    msg.setDestination(5366U);
    msg.setDestinationEntity(42U);
    msg.content_type.assign("PAFPDPUMMKJEACFBXTOZKWSBDXAUOZMSPYWJVWVSHXEXIJEHHDVDQYQZPKOSEZEKRZNZMXOJGTYOCRNEMGDOVAVOVGIVXGTFYPQCQIDKMGOLBUALHTZCJAFRHHFRPNRKPDEUCNVRXIDMYH");
    const char tmp_msg_0[] = {53, 18, -33, 91, -73, -85, 16, 66, 18, 61, 83, 6, 9, 115, 119, -27, -92, -79, 88, -41, 86, -40, 69, 90, 67, 93, -45, -15, 86, 106, 95, -41, -80, 46, -86, -18, -124, 89, 47, -52, 7, 57, -46, 29, -56, -44, -26, 104, -68, 57, 123, 17, -115, -67, 36, 68, -65, -34, -5, 47, 30, -2, -65, 66, 29, 114, 122, -40, 84, -100, -79, -76, 115, -11, 82, -74, 59, 67, 74, 120, 92, -74, -50, -66, -106, -90, -15, -122, -28, 94, 30, -69, 109, -98, 2, -30, -74, 71, -49, 18, 79, 73, -50, -87, 27, 20, -97, 115, 109, -101, -82, -49, 55, -39, 126, -111, 38, 99, -28, -7, 104, -94, -11, -88, -8, -42, 1, 121};
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
    msg.setTimeStamp(0.920355686382);
    msg.setSource(38883U);
    msg.setSourceEntity(2U);
    msg.setDestination(39517U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.474221721428);
    msg.setSource(45662U);
    msg.setSourceEntity(61U);
    msg.setDestination(45980U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.027451402141);
    msg.setSource(56006U);
    msg.setSourceEntity(157U);
    msg.setDestination(40673U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.0164269568227);
    msg.setSource(31750U);
    msg.setSourceEntity(158U);
    msg.setDestination(15302U);
    msg.setDestinationEntity(233U);
    msg.target = 25779U;
    msg.bearing = 0.676699491565;
    msg.elevation = 0.563590684019;

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
    msg.setTimeStamp(0.47309620914);
    msg.setSource(48178U);
    msg.setSourceEntity(117U);
    msg.setDestination(57839U);
    msg.setDestinationEntity(223U);
    msg.target = 64932U;
    msg.bearing = 0.862157367688;
    msg.elevation = 0.858419720824;

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
    msg.setTimeStamp(0.485467238388);
    msg.setSource(14471U);
    msg.setSourceEntity(190U);
    msg.setDestination(51742U);
    msg.setDestinationEntity(46U);
    msg.target = 9105U;
    msg.bearing = 0.607888229898;
    msg.elevation = 0.63006975421;

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
    msg.setTimeStamp(0.784388833672);
    msg.setSource(28396U);
    msg.setSourceEntity(161U);
    msg.setDestination(30067U);
    msg.setDestinationEntity(212U);
    msg.target = 36234U;
    msg.x = 0.777205305956;
    msg.y = 0.736987901444;
    msg.z = 0.339294660173;

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
    msg.setTimeStamp(0.318188506362);
    msg.setSource(35833U);
    msg.setSourceEntity(191U);
    msg.setDestination(25134U);
    msg.setDestinationEntity(213U);
    msg.target = 23766U;
    msg.x = 0.191533548233;
    msg.y = 0.27786796108;
    msg.z = 0.778476397797;

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
    msg.setTimeStamp(0.365197664143);
    msg.setSource(6960U);
    msg.setSourceEntity(216U);
    msg.setDestination(33509U);
    msg.setDestinationEntity(130U);
    msg.target = 60907U;
    msg.x = 0.403414611449;
    msg.y = 0.431042329257;
    msg.z = 0.612625376629;

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
    msg.setTimeStamp(0.0803580470627);
    msg.setSource(14792U);
    msg.setSourceEntity(117U);
    msg.setDestination(57643U);
    msg.setDestinationEntity(248U);
    msg.target = 19592U;
    msg.lat = 0.9543795211;
    msg.lon = 0.490247041751;
    msg.z_units = 106U;
    msg.z = 0.680845387611;

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
    msg.setTimeStamp(0.96852353588);
    msg.setSource(63410U);
    msg.setSourceEntity(134U);
    msg.setDestination(23004U);
    msg.setDestinationEntity(213U);
    msg.target = 2003U;
    msg.lat = 0.991829337776;
    msg.lon = 0.932336936842;
    msg.z_units = 162U;
    msg.z = 0.930584738152;

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
    msg.setTimeStamp(0.541596373459);
    msg.setSource(16350U);
    msg.setSourceEntity(78U);
    msg.setDestination(47867U);
    msg.setDestinationEntity(207U);
    msg.target = 1144U;
    msg.lat = 0.505023913874;
    msg.lon = 0.542321332994;
    msg.z_units = 81U;
    msg.z = 0.649675783017;

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
    msg.setTimeStamp(0.844583026259);
    msg.setSource(37316U);
    msg.setSourceEntity(47U);
    msg.setDestination(17772U);
    msg.setDestinationEntity(77U);
    msg.locale.assign("NMBWCLAXIWVVIPBWVWGXBYDEJTGHMHOPKORTAGOOMTJNTLNZIZGZJGPMJKJGGBCNUUDKSQUSRAHXNUQJZAKDWRSYTACRQZIHSHOLBEEPOCXYMRCFSFOPKBLPNITIFPRVHTLPALHMYSZELDXRFPSDYTWNBKYNOUUYQDOWQMZMYPWQQVVJCSWUVALEJAUGCKXDUJQLXYESDDFFXEMNMGBRYCHGBKIDXRTCEUWREKCFQZEAFKLIHIVBFZFTOJVVA");
    const char tmp_msg_0[] = {-88, 26, -97, 107, -35, 122, -48, 68, 119, 17, -71, 64, -53, 36, -106, -121, 99, 98, 110, -117, 79, 54, -118, -14, 54, 38, 53, 95, 92, -6, -122, -17, 65, -63, -98, 32, -90, -98, -60, -35, 41, 31, -30, -106, 59, -35, -94, -53, 59, 105, -64, 52, -44, 72, -118, 97, -122, 106, -26, -3, -110, -13, -51, -13, 1, -24, 7, -16, 0, 71, -86, 84, -111, 88, 55, -38, 88, -73, 119, -111, 20, -102, -73, 104, 115, 11, 17, -13, -46, -56, 100, 66, -12, 3, 107, -39, 60, 100, 13, 73, 59, -32, -115, -86, 109, 29, -64, -52, -84, -108, -118, -95, -104, -65, 125, 19, 67, 26, -126, -86, -2, -118, -59, -64, -57, 84, -113, 86, 67, -100, 62, -115, 20, -77, 40, 117, -91, -70, 18};
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
    msg.setTimeStamp(0.827657101643);
    msg.setSource(26439U);
    msg.setSourceEntity(134U);
    msg.setDestination(45070U);
    msg.setDestinationEntity(106U);
    msg.locale.assign("MKPKALAJWNDPJOYYDOBJONXKJBQVQLLVNFAZHRRMUBUIUZLRWWDYBTBNIISZWGTYBFDKIFOTHVWCNKPDJWZMHVGJSXERZCQSGBXFHQAKVCDGCRJYLCIPBLQQITARAFCZXOS");
    const char tmp_msg_0[] = {92, 109, -58, 88, -53, -82, 29, -110, -94, 124, 55, 43, 53, -25, -126, 39, 113, 106, 9, -120, -121, 15, 74, -103, -39, -9, -41, -124, -99, -40, -11, -70, -98, 67, 74, -71, -57, -126, -109, -107, -110, -65, -96, 106, 101, -100, -76, 38, -6, -103, 28, 65, -9, 124, -42, 8, 89, 41, -55, 72, 121, 64, -86, -30, 24, 55, 10, -2, 6, 114, -70, 79, 71, -27, 45, -112, -91, -41, 49, -33, 38, -84, -23, -84, 56, 122, 28, -12, -110, -65, -76, 66, 42, -114, -54, -9, -62, 9, -121, -124, -21, 93, 12, 73, 67, 44, 31, -77, -66, -56, 113, 107, -100, 114, -47, 67, -115, -16, 46, -54, 10, 79, -70, 14, -32, -125, -92, 27, 93, -8, -22, -97, -102, -73, -8, -80, -124, -114, 16, 111, 1, -105, -56, 86, -92, 118, -65, -50, -24, 105, 73, 6, -62, 53, -66, -74, 66, -53, 21, -112, -24, 99, -80, -50, 7, -1, -84, 72, 1, -43, -74, -87, -40, 21, 7, 25, 32, -12, -91, -96, -43};
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
    msg.setTimeStamp(0.789243885707);
    msg.setSource(24693U);
    msg.setSourceEntity(61U);
    msg.setDestination(49325U);
    msg.setDestinationEntity(103U);
    msg.locale.assign("WNOHHSLDQPCWSOYEDKEXAFOX");
    const char tmp_msg_0[] = {78, 71, -73, 43, -29, -112, 72, 102, 81, 51, -13, -68, 110, 46, 107, -78, 106, -82, 16, 64, -9, 77, 72, -16, -89, -41, -51, -103, -90, -113, -114, 117, 106, 12, 64, -75, -121, 102, 7, 100, 53, -118, 88, -27, -108, -64, 7, -119, 13, -122, -112, 54, 100, 44, -95, -73, 1, -26, -14, 103, 15, -94, -45, -31, -105, 5, 28, 89, 24, -48, 120, -50, -53, -5, -68, 11, -92, 54, -11, -47, -92, 10, 46, -119, 87, 51, 88, 3, 81, -68, -36, -86, -18, -89, 42, -71, -49, -6, -77, 24, 63, 39, 111, 50, 122, 23, 101, 16, -90, -75, -48, 24, 107, -45, 64, 101, 51, -20, -14, 7, -63, 35, -121, 67, -18, -35, -85, 50, 37, -5, 56, -31, -102, 1, -84, -17, -117, 119, -72, 57, -89, -2, -10, -128, -96, 86, 92, 27, 10, 12, -115, 109, 101, 118, 100, -128, 72, -105};
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
    msg.setTimeStamp(0.180470812552);
    msg.setSource(25488U);
    msg.setSourceEntity(241U);
    msg.setDestination(8483U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.532563824878);
    msg.setSource(34567U);
    msg.setSourceEntity(247U);
    msg.setDestination(59685U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.68114450427);
    msg.setSource(11373U);
    msg.setSourceEntity(152U);
    msg.setDestination(4593U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.603916231951);
    msg.setSource(59741U);
    msg.setSourceEntity(225U);
    msg.setDestination(3578U);
    msg.setDestinationEntity(130U);
    msg.camid = 105U;
    msg.x = 29782U;
    msg.y = 32926U;

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
    msg.setTimeStamp(0.820876825688);
    msg.setSource(51585U);
    msg.setSourceEntity(124U);
    msg.setDestination(54001U);
    msg.setDestinationEntity(157U);
    msg.camid = 123U;
    msg.x = 27011U;
    msg.y = 15990U;

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
    msg.setTimeStamp(0.903530872856);
    msg.setSource(54586U);
    msg.setSourceEntity(199U);
    msg.setDestination(2587U);
    msg.setDestinationEntity(160U);
    msg.camid = 45U;
    msg.x = 5767U;
    msg.y = 14561U;

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
    msg.setTimeStamp(0.52832044339);
    msg.setSource(58675U);
    msg.setSourceEntity(59U);
    msg.setDestination(51583U);
    msg.setDestinationEntity(148U);
    msg.camid = 221U;
    msg.x = 10089U;
    msg.y = 28954U;

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
    msg.setTimeStamp(0.980592731376);
    msg.setSource(21114U);
    msg.setSourceEntity(85U);
    msg.setDestination(49521U);
    msg.setDestinationEntity(228U);
    msg.camid = 17U;
    msg.x = 41203U;
    msg.y = 18780U;

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
    msg.setTimeStamp(0.613099529881);
    msg.setSource(56700U);
    msg.setSourceEntity(84U);
    msg.setDestination(17319U);
    msg.setDestinationEntity(249U);
    msg.camid = 75U;
    msg.x = 6307U;
    msg.y = 21784U;

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
    msg.setTimeStamp(0.21814376533);
    msg.setSource(48707U);
    msg.setSourceEntity(151U);
    msg.setDestination(35300U);
    msg.setDestinationEntity(46U);
    msg.tracking = 139U;
    msg.lat = 0.352644062859;
    msg.lon = 0.648903901497;
    msg.x = 0.47482260003;
    msg.y = 0.443843446256;
    msg.z = 0.907777136147;

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
    msg.setTimeStamp(0.149529648934);
    msg.setSource(34201U);
    msg.setSourceEntity(89U);
    msg.setDestination(38479U);
    msg.setDestinationEntity(27U);
    msg.tracking = 54U;
    msg.lat = 0.214133780398;
    msg.lon = 0.711527907067;
    msg.x = 0.784254343551;
    msg.y = 0.231108438913;
    msg.z = 0.351858477115;

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
    msg.setTimeStamp(0.603517407972);
    msg.setSource(16270U);
    msg.setSourceEntity(44U);
    msg.setDestination(42578U);
    msg.setDestinationEntity(146U);
    msg.tracking = 148U;
    msg.lat = 0.629448970566;
    msg.lon = 0.867558553968;
    msg.x = 0.0319800141593;
    msg.y = 0.878078164835;
    msg.z = 0.426499887461;

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
    msg.setTimeStamp(0.515779497933);
    msg.setSource(16572U);
    msg.setSourceEntity(58U);
    msg.setDestination(12308U);
    msg.setDestinationEntity(241U);
    msg.target.assign("WOJQEVHKTCJTLIKYFMCISSYAGKEPNCNDGSHBRWQQDVTCSZENTJVEXPHK");
    msg.lbearing = 0.267413944377;
    msg.lelevation = 0.206482337336;
    msg.bearing = 0.435434739652;
    msg.elevation = 0.81099424524;
    msg.phi = 0.362844245484;
    msg.theta = 0.69232005229;
    msg.psi = 0.168425516576;
    msg.accuracy = 0.510030639486;

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
    msg.setTimeStamp(0.916874733547);
    msg.setSource(40240U);
    msg.setSourceEntity(87U);
    msg.setDestination(8846U);
    msg.setDestinationEntity(216U);
    msg.target.assign("GYCEDAYEEHVCNBVLMRUPMVCYGQPGWBYMJURZPLFXTXKHDZTQOREZDECYYDHNAXIJSHVKZWMFWGAXDCPYCIQITYJCVUOOOSFDT");
    msg.lbearing = 0.421637452626;
    msg.lelevation = 0.355195837827;
    msg.bearing = 0.601493558207;
    msg.elevation = 0.908600570774;
    msg.phi = 0.322576519202;
    msg.theta = 0.447180141959;
    msg.psi = 0.0105030224362;
    msg.accuracy = 0.887380245925;

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
    msg.setTimeStamp(0.218580305798);
    msg.setSource(13069U);
    msg.setSourceEntity(214U);
    msg.setDestination(52458U);
    msg.setDestinationEntity(23U);
    msg.target.assign("BKEUVGMAUAQOJSZMZFPLPYIQSSDW");
    msg.lbearing = 0.134917051916;
    msg.lelevation = 0.51891367526;
    msg.bearing = 0.315172215856;
    msg.elevation = 0.184626928047;
    msg.phi = 0.975383978594;
    msg.theta = 0.588063376506;
    msg.psi = 0.0227197365047;
    msg.accuracy = 0.167983170745;

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
    msg.setTimeStamp(0.759484806291);
    msg.setSource(57238U);
    msg.setSourceEntity(38U);
    msg.setDestination(53951U);
    msg.setDestinationEntity(106U);
    msg.target.assign("WAIKALXTDXQWVEBWYGSEIRJUITKHHMRGFNHBMYCBIHWDKEZCXSJQWSGQQ");
    msg.x = 0.131560546783;
    msg.y = 0.744967934167;
    msg.z = 0.509879995648;
    msg.n = 0.414587518039;
    msg.e = 0.661871618627;
    msg.d = 0.216575923886;
    msg.phi = 0.770758059327;
    msg.theta = 0.811675898741;
    msg.psi = 0.877312615027;
    msg.accuracy = 0.418333217594;

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
    msg.setTimeStamp(0.0737982360202);
    msg.setSource(48825U);
    msg.setSourceEntity(89U);
    msg.setDestination(64371U);
    msg.setDestinationEntity(25U);
    msg.target.assign("XCZMZYLXCBIAUJHYFNCJXGTBCKIDDNTYNSLNDROMPVBLPRHNPWSQSPBZEKZDEQUVLMQUMZJOQNNOATPXWUBCARD");
    msg.x = 0.433889454581;
    msg.y = 0.786710138169;
    msg.z = 0.0920719568983;
    msg.n = 0.8189692739;
    msg.e = 0.224985974753;
    msg.d = 0.139086973359;
    msg.phi = 0.660385027374;
    msg.theta = 0.704269456091;
    msg.psi = 0.404833621795;
    msg.accuracy = 0.597688761626;

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
    msg.setTimeStamp(0.325247615153);
    msg.setSource(6067U);
    msg.setSourceEntity(168U);
    msg.setDestination(44026U);
    msg.setDestinationEntity(3U);
    msg.target.assign("BJLHOLTRRBHXUJVFDFMJLXZIEIPEPZACJUMEVNHMFQYOOJBTVTVRKGTDFAMGPYHGDAYGVCSTWSTLWZMMFTZGLDAENRQREJCEUYHTKZZLEIOCNBRZQQXHOFUWPURJLMPAHNEHVUDWWYSASFQDQOPCCXCRRMEPWVGWUSSQVNBLLGQAWHCQGCSOISBRMJFNTYPOJDCXZANBVHKUDJKOUGS");
    msg.x = 0.575236190868;
    msg.y = 0.522425564195;
    msg.z = 0.129988760379;
    msg.n = 0.672331294022;
    msg.e = 0.910123871056;
    msg.d = 0.758983039669;
    msg.phi = 0.669215946736;
    msg.theta = 0.0231388799967;
    msg.psi = 0.878005195898;
    msg.accuracy = 0.410936894484;

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
    msg.setTimeStamp(0.139531818189);
    msg.setSource(62858U);
    msg.setSourceEntity(167U);
    msg.setDestination(41925U);
    msg.setDestinationEntity(49U);
    msg.target.assign("UCFFBKJOONUAJJUYFFRXZYTDAMDFMHYLIXYNZJKJOZRENPOWZTWTWYSKBPZHOLNPYBSMTRNXQVUIEEFZDTNXGBJADACEVHMOJ");
    msg.lat = 0.532322244389;
    msg.lon = 0.389881460307;
    msg.z_units = 82U;
    msg.z = 0.131644132426;
    msg.accuracy = 0.0341829194198;

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
    msg.setTimeStamp(0.117161348678);
    msg.setSource(56372U);
    msg.setSourceEntity(164U);
    msg.setDestination(36608U);
    msg.setDestinationEntity(5U);
    msg.target.assign("RJMZSDFZZBMKQDXTETTMLBHJEZPBTXRSVXCTWZKWLCAQDKKDHTPQHLVSUEGWPTZMFEAUONFMPAYEFCVBSPGHW");
    msg.lat = 0.133641297385;
    msg.lon = 0.663739042114;
    msg.z_units = 122U;
    msg.z = 0.231394168814;
    msg.accuracy = 0.430970071072;

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
    msg.setTimeStamp(0.0227392565323);
    msg.setSource(44424U);
    msg.setSourceEntity(99U);
    msg.setDestination(36710U);
    msg.setDestinationEntity(16U);
    msg.target.assign("FWUHLZBNFVEWOEXIUZPIEDWJFSMLYIGPIIXYOQBLNBGPQKGHLSPVJKVTFCCTBGJQYUWRNJZDWMCQECAMMIBOEOASQEJNXOLZBWTEQZXJNWHFUURAZVSKNOHUKWV");
    msg.lat = 0.617001911863;
    msg.lon = 0.689302738513;
    msg.z_units = 168U;
    msg.z = 0.219228542573;
    msg.accuracy = 0.557214460037;

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
    msg.setTimeStamp(0.846329005729);
    msg.setSource(63382U);
    msg.setSourceEntity(43U);
    msg.setDestination(59171U);
    msg.setDestinationEntity(40U);
    msg.name.assign("VAFXSGREEOPTPSLDEZJEPACMPUEVTUMOYCDZDTJMBKILDVFXOEIMXXBKPQNDNFCVJDTRIIIFAKGHHQIJUMHRZBGHSQLHGKLEQOPSBODPCWCVNMIAKHSIFJXUTANCWPTJZKRFSRYGFYVMZWBHFMURUKTWYVPSGLCKZVAQXLSOGAYBZTRLBGMKBWNAENDYFUNUGVXHOZQUDHLCJVQZ");
    msg.lat = 0.217203238566;
    msg.lon = 0.680954314549;
    msg.z = 0.812703233044;
    msg.z_units = 242U;

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
    msg.setTimeStamp(0.609933825607);
    msg.setSource(25802U);
    msg.setSourceEntity(148U);
    msg.setDestination(62591U);
    msg.setDestinationEntity(205U);
    msg.name.assign("OOLSVMXLKQZNXQXKMGHMNZDIFILXBVNWDEYNPW");
    msg.lat = 0.35723057456;
    msg.lon = 0.57426518588;
    msg.z = 0.255590569952;
    msg.z_units = 10U;

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
    msg.setTimeStamp(0.287122832035);
    msg.setSource(36697U);
    msg.setSourceEntity(151U);
    msg.setDestination(1439U);
    msg.setDestinationEntity(0U);
    msg.name.assign("JZBSCRJETMJXOWY");
    msg.lat = 0.998690620589;
    msg.lon = 0.0356856114591;
    msg.z = 0.761333608715;
    msg.z_units = 145U;

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
    msg.setTimeStamp(0.445476681488);
    msg.setSource(38800U);
    msg.setSourceEntity(89U);
    msg.setDestination(29402U);
    msg.setDestinationEntity(157U);
    msg.op = 6U;

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
    msg.setTimeStamp(0.216885195602);
    msg.setSource(54354U);
    msg.setSourceEntity(170U);
    msg.setDestination(35415U);
    msg.setDestinationEntity(187U);
    msg.op = 48U;

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
    msg.setTimeStamp(0.398133989132);
    msg.setSource(23822U);
    msg.setSourceEntity(165U);
    msg.setDestination(37828U);
    msg.setDestinationEntity(205U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.968878631521);
    msg.setSource(4705U);
    msg.setSourceEntity(19U);
    msg.setDestination(6433U);
    msg.setDestinationEntity(168U);
    msg.value = 0.439048874331;
    msg.type = 12U;

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
    msg.setTimeStamp(0.707223364524);
    msg.setSource(43346U);
    msg.setSourceEntity(17U);
    msg.setDestination(62482U);
    msg.setDestinationEntity(24U);
    msg.value = 0.710855415918;
    msg.type = 118U;

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
    msg.setTimeStamp(0.298068751902);
    msg.setSource(8294U);
    msg.setSourceEntity(252U);
    msg.setDestination(23331U);
    msg.setDestinationEntity(111U);
    msg.value = 0.221231881184;
    msg.type = 101U;

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
    msg.setTimeStamp(0.0305972377177);
    msg.setSource(29958U);
    msg.setSourceEntity(185U);
    msg.setDestination(16376U);
    msg.setDestinationEntity(208U);
    msg.value = 0.693618570671;

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
    msg.setTimeStamp(0.611973444944);
    msg.setSource(61641U);
    msg.setSourceEntity(200U);
    msg.setDestination(5566U);
    msg.setDestinationEntity(168U);
    msg.value = 0.800864739728;

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
    msg.setTimeStamp(0.0715822439623);
    msg.setSource(17132U);
    msg.setSourceEntity(78U);
    msg.setDestination(4781U);
    msg.setDestinationEntity(76U);
    msg.value = 0.477060197592;

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
    msg.setTimeStamp(0.0582880141095);
    msg.setSource(19412U);
    msg.setSourceEntity(220U);
    msg.setDestination(12542U);
    msg.setDestinationEntity(33U);
    msg.timestamp_last_service = 0.718025332594;
    msg.time_next_service = 0.938185888105;
    msg.time_motor_next_service = 0.850608199599;
    msg.time_idle_ground = 0.376476541969;
    msg.time_idle_air = 0.561569242844;
    msg.time_idle_water = 0.28994974128;
    msg.time_idle_underwater = 0.329270079876;
    msg.time_idle_unknown = 0.267848490712;
    msg.time_motor_ground = 0.626120693569;
    msg.time_motor_air = 0.295388726228;
    msg.time_motor_water = 0.132964682465;
    msg.time_motor_underwater = 0.415641925382;
    msg.time_motor_unknown = 0.0708821430107;
    msg.rpm_min = 7460;
    msg.rpm_max = -20845;
    msg.depth_max = 0.427774790182;

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
    msg.setTimeStamp(0.539651620095);
    msg.setSource(14961U);
    msg.setSourceEntity(13U);
    msg.setDestination(41526U);
    msg.setDestinationEntity(220U);
    msg.timestamp_last_service = 0.298095882635;
    msg.time_next_service = 0.902873448405;
    msg.time_motor_next_service = 0.55982510362;
    msg.time_idle_ground = 0.363459008039;
    msg.time_idle_air = 0.871745346386;
    msg.time_idle_water = 0.984047379526;
    msg.time_idle_underwater = 0.0625848266806;
    msg.time_idle_unknown = 0.617875132556;
    msg.time_motor_ground = 0.00429114102391;
    msg.time_motor_air = 0.563315891037;
    msg.time_motor_water = 0.224406703065;
    msg.time_motor_underwater = 0.797658832221;
    msg.time_motor_unknown = 0.236352271918;
    msg.rpm_min = 4462;
    msg.rpm_max = 8088;
    msg.depth_max = 0.91614578805;

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
    msg.setTimeStamp(0.587937008331);
    msg.setSource(4145U);
    msg.setSourceEntity(37U);
    msg.setDestination(38225U);
    msg.setDestinationEntity(169U);
    msg.timestamp_last_service = 0.937870878094;
    msg.time_next_service = 0.194205361491;
    msg.time_motor_next_service = 0.0539151902204;
    msg.time_idle_ground = 0.421109773374;
    msg.time_idle_air = 0.291048520688;
    msg.time_idle_water = 0.12391941655;
    msg.time_idle_underwater = 0.410299707357;
    msg.time_idle_unknown = 0.887524920286;
    msg.time_motor_ground = 0.519775219519;
    msg.time_motor_air = 0.983981845432;
    msg.time_motor_water = 0.970347214915;
    msg.time_motor_underwater = 0.362660094972;
    msg.time_motor_unknown = 0.224787820287;
    msg.rpm_min = 8711;
    msg.rpm_max = 5726;
    msg.depth_max = 0.524538721663;

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
    msg.setTimeStamp(0.767241982057);
    msg.setSource(29723U);
    msg.setSourceEntity(115U);
    msg.setDestination(29557U);
    msg.setDestinationEntity(177U);
    msg.severity = 4U;
    msg.text.assign("MDVRGDZOVRVJFLWCWSIBAINYS");

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
    msg.setTimeStamp(0.460376863248);
    msg.setSource(47525U);
    msg.setSourceEntity(83U);
    msg.setDestination(23784U);
    msg.setDestinationEntity(35U);
    msg.severity = 152U;
    msg.text.assign("AFTDXOUHMPQWXUTBQABMISGUETAHOKIGAHPCFHPWKHZYBVJPKJZRWCRIMZDMWIZBEFBQWCJFNNFGAGOEUJPRWRCJZVSTWPIROYYBDGDXKWHNTLMMLKUXXDCNIQSBVDNYELJLZ");

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
    msg.setTimeStamp(0.924825877539);
    msg.setSource(37439U);
    msg.setSourceEntity(93U);
    msg.setDestination(42058U);
    msg.setDestinationEntity(17U);
    msg.severity = 216U;
    msg.text.assign("KSTLPNMYPRDSRPFJVYGNJEQPVOHKQYIKDSMBJJSACOXUEOEFIFQRZMRCMCZADODDOSZYHBCFWTYRBKJHNVZTWLXUGGRWQYTZNCQMELRCRJALWGKFBJMLSQIUBGDFRQHQ");

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
    msg.setTimeStamp(0.284829664163);
    msg.setSource(13240U);
    msg.setSourceEntity(115U);
    msg.setDestination(61586U);
    msg.setDestinationEntity(120U);
    msg.channel = -119;
    msg.value = 1105275973;
    msg.gain = 222U;

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
    msg.setTimeStamp(0.637298889874);
    msg.setSource(14841U);
    msg.setSourceEntity(184U);
    msg.setDestination(10412U);
    msg.setDestinationEntity(36U);
    msg.channel = 33;
    msg.value = -1039229998;
    msg.gain = 68U;

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
    msg.setTimeStamp(0.709725644113);
    msg.setSource(29096U);
    msg.setSourceEntity(197U);
    msg.setDestination(52015U);
    msg.setDestinationEntity(97U);
    msg.channel = -92;
    msg.value = -2055087123;
    msg.gain = 84U;

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
    msg.setTimeStamp(0.174559715175);
    msg.setSource(23611U);
    msg.setSourceEntity(231U);
    msg.setDestination(45161U);
    msg.setDestinationEntity(220U);
    msg.ch01 = 0.175203705288;
    msg.ch02 = 0.672307995601;
    msg.ch03 = 0.7486206609;
    msg.ch04 = 0.361703209223;
    msg.ch05 = 0.675313604469;
    msg.ch06 = 0.605164396436;
    msg.ch07 = 0.259962916628;
    msg.ch08 = 0.830330494888;
    msg.ch09 = 0.406818591855;
    msg.ch10 = 0.386642199403;
    msg.ch11 = 0.666835886734;
    msg.ch12 = 0.814300519816;
    msg.ch13 = 0.542732172734;
    msg.ch14 = 0.609756586686;
    msg.ch15 = 0.910781797703;
    msg.ch16 = 0.312731353858;

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
    msg.setTimeStamp(0.699009997244);
    msg.setSource(21653U);
    msg.setSourceEntity(185U);
    msg.setDestination(42656U);
    msg.setDestinationEntity(7U);
    msg.ch01 = 0.197726857629;
    msg.ch02 = 0.290904313723;
    msg.ch03 = 0.407338255805;
    msg.ch04 = 0.97438380588;
    msg.ch05 = 0.615929834741;
    msg.ch06 = 0.866250189151;
    msg.ch07 = 0.867989498346;
    msg.ch08 = 0.577035625869;
    msg.ch09 = 0.0879266613432;
    msg.ch10 = 0.913759786544;
    msg.ch11 = 0.291516853184;
    msg.ch12 = 0.675747130155;
    msg.ch13 = 0.229409467465;
    msg.ch14 = 0.511447897791;
    msg.ch15 = 0.266225014211;
    msg.ch16 = 0.660144527427;

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
    msg.setTimeStamp(0.946284677203);
    msg.setSource(53169U);
    msg.setSourceEntity(233U);
    msg.setDestination(36699U);
    msg.setDestinationEntity(90U);
    msg.ch01 = 0.697279956661;
    msg.ch02 = 0.975868026183;
    msg.ch03 = 0.242736126398;
    msg.ch04 = 0.92244542217;
    msg.ch05 = 0.782185012828;
    msg.ch06 = 0.587541364415;
    msg.ch07 = 0.891951858011;
    msg.ch08 = 0.984967546392;
    msg.ch09 = 0.571094690793;
    msg.ch10 = 0.685664009781;
    msg.ch11 = 0.707544231422;
    msg.ch12 = 0.746691247845;
    msg.ch13 = 0.110719602641;
    msg.ch14 = 0.667881371697;
    msg.ch15 = 0.418096255438;
    msg.ch16 = 0.495940080973;

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
    msg.setTimeStamp(0.781812108336);
    msg.setSource(188U);
    msg.setSourceEntity(27U);
    msg.setDestination(25709U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.757074946632;
    msg.lon = 0.591067992437;
    msg.x = 0.590499857436;
    msg.y = 0.562176685993;
    msg.z = 0.821474015476;
    msg.vx = 0.229791275687;
    msg.vy = 0.919351145447;
    msg.vz = 0.24470719769;
    msg.depth = 230U;
    msg.speed = 0.73288149653;
    msg.psi = 0.381128195818;
    msg.omega = 0.192595840865;

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
    msg.setTimeStamp(0.15795766391);
    msg.setSource(16062U);
    msg.setSourceEntity(93U);
    msg.setDestination(42243U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.596347562383;
    msg.lon = 0.829543175858;
    msg.x = 0.112306300179;
    msg.y = 0.448318102333;
    msg.z = 0.78067222257;
    msg.vx = 0.120182546893;
    msg.vy = 0.434646567908;
    msg.vz = 0.804818402366;
    msg.depth = 226U;
    msg.speed = 0.992440380625;
    msg.psi = 0.346987641892;
    msg.omega = 0.689917731229;

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
    msg.setTimeStamp(0.146565248698);
    msg.setSource(62418U);
    msg.setSourceEntity(85U);
    msg.setDestination(14005U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.542627666294;
    msg.lon = 0.439218654177;
    msg.x = 0.517948283355;
    msg.y = 0.0150935295804;
    msg.z = 0.809064225278;
    msg.vx = 0.99623237157;
    msg.vy = 0.386694155559;
    msg.vz = 0.683509211436;
    msg.depth = 171U;
    msg.speed = 0.270304730576;
    msg.psi = 0.422809257012;
    msg.omega = 0.665591439086;

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
    msg.setTimeStamp(0.605757715996);
    msg.setSource(51411U);
    msg.setSourceEntity(8U);
    msg.setDestination(17402U);
    msg.setDestinationEntity(0U);
    msg.ctrl_cmd_v = 0.803365386408;
    msg.ctrl_cmd_omega = 0.406188437199;
    msg.sat_ctrl_cmd_v = 0.763083093463;
    msg.sat_ctrl_cmd_omega = 0.0376927053149;
    msg.robust_v = 0.636162387225;
    msg.robust_omega = 0.883611077464;
    msg.gamma = 0.336368406358;
    msg.gamma_dot = 0.789568168929;
    msg.gamma_ref = 0.027035323198;
    msg.g_err = 0.164808151358;
    msg.target_x = 0.720245292659;
    msg.target_y = 0.697620146203;
    msg.target_z = 0.148291794604;
    msg.target_psi = 0.786601492523;
    msg.target_vx = 0.131118322392;
    msg.target_vy = 0.445718725516;
    msg.target_vz = 0.664743855473;
    msg.target_omega = 0.546834931582;
    msg.x = 0.283034327889;
    msg.y = 0.484329286681;
    msg.z = 0.732413131104;
    msg.psi = 0.166278187089;
    msg.vx = 0.661263376038;
    msg.vy = 0.599869670942;
    msg.vz = 0.524481928563;
    msg.pd_x = 0.962002345904;
    msg.pd_y = 0.91826486881;
    msg.p_ref_x = 0.50772405512;
    msg.p_ref_y = 0.97695753103;
    msg.norm_mpf_err = 0.15430391689;
    msg.mpf_err_x = 0.00320857556139;
    msg.mpf_err_y = 0.841123761065;
    msg.mpf_err_z = 0.880020019724;
    msg.err_x = 0.746391407293;
    msg.err_y = 0.776588746393;
    msg.err_z = 0.483748431852;
    msg.pest_x = 0.0976417343628;
    msg.pest_y = 0.64740244368;
    msg.psi_est = 0.757123966321;
    msg.perr_x = 0.245263813443;
    msg.perr_y = 0.0666507722567;
    msg.psi_err = 0.729276257477;
    msg.dest_x = 0.284315143159;
    msg.dest_y = 0.557535205693;
    msg.domega_est = 0.0132486675642;

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
    msg.setTimeStamp(0.120097746145);
    msg.setSource(46999U);
    msg.setSourceEntity(46U);
    msg.setDestination(41076U);
    msg.setDestinationEntity(153U);
    msg.ctrl_cmd_v = 0.681729340836;
    msg.ctrl_cmd_omega = 0.446570393961;
    msg.sat_ctrl_cmd_v = 0.582664681843;
    msg.sat_ctrl_cmd_omega = 0.363895347021;
    msg.robust_v = 0.384507744303;
    msg.robust_omega = 0.166699996233;
    msg.gamma = 0.652762291406;
    msg.gamma_dot = 0.672427506894;
    msg.gamma_ref = 0.377903231885;
    msg.g_err = 0.812437532498;
    msg.target_x = 0.648101763296;
    msg.target_y = 0.807404977024;
    msg.target_z = 0.903843333105;
    msg.target_psi = 0.853453694402;
    msg.target_vx = 0.69271907698;
    msg.target_vy = 0.402571111756;
    msg.target_vz = 0.409174333795;
    msg.target_omega = 0.954481261351;
    msg.x = 0.00784864525979;
    msg.y = 0.936746983011;
    msg.z = 0.609512666767;
    msg.psi = 0.754255406604;
    msg.vx = 0.0334022371923;
    msg.vy = 0.722101734652;
    msg.vz = 0.788234197158;
    msg.pd_x = 0.952860703857;
    msg.pd_y = 0.439690740415;
    msg.p_ref_x = 0.312949180578;
    msg.p_ref_y = 0.228829658999;
    msg.norm_mpf_err = 0.236661134405;
    msg.mpf_err_x = 0.0715336322044;
    msg.mpf_err_y = 0.952548680428;
    msg.mpf_err_z = 0.182671113612;
    msg.err_x = 0.941299508239;
    msg.err_y = 0.404922590373;
    msg.err_z = 0.375781996997;
    msg.pest_x = 0.15231799321;
    msg.pest_y = 0.38934174254;
    msg.psi_est = 0.927583912938;
    msg.perr_x = 0.154691178016;
    msg.perr_y = 0.517570498826;
    msg.psi_err = 0.0378274776192;
    msg.dest_x = 0.857267139802;
    msg.dest_y = 0.0920474060583;
    msg.domega_est = 0.857258489662;

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
    msg.setTimeStamp(0.590449429502);
    msg.setSource(46274U);
    msg.setSourceEntity(95U);
    msg.setDestination(4713U);
    msg.setDestinationEntity(65U);
    msg.ctrl_cmd_v = 0.682344211608;
    msg.ctrl_cmd_omega = 0.961086186429;
    msg.sat_ctrl_cmd_v = 0.796614524508;
    msg.sat_ctrl_cmd_omega = 0.122908159224;
    msg.robust_v = 0.31094907653;
    msg.robust_omega = 0.321808977362;
    msg.gamma = 0.580246867579;
    msg.gamma_dot = 0.164888676124;
    msg.gamma_ref = 0.917193941791;
    msg.g_err = 0.148916953369;
    msg.target_x = 0.385875459936;
    msg.target_y = 0.712607422137;
    msg.target_z = 0.880336958118;
    msg.target_psi = 0.929240192112;
    msg.target_vx = 0.558704844345;
    msg.target_vy = 0.977789744077;
    msg.target_vz = 0.516106235688;
    msg.target_omega = 0.803312128082;
    msg.x = 0.852400537815;
    msg.y = 0.119476283018;
    msg.z = 0.781182549851;
    msg.psi = 0.919470413065;
    msg.vx = 0.278645978663;
    msg.vy = 0.940839165175;
    msg.vz = 0.0716701012185;
    msg.pd_x = 0.294073648182;
    msg.pd_y = 0.298523344672;
    msg.p_ref_x = 0.834833475555;
    msg.p_ref_y = 0.471026704854;
    msg.norm_mpf_err = 0.726470869358;
    msg.mpf_err_x = 0.101915813483;
    msg.mpf_err_y = 0.777298996669;
    msg.mpf_err_z = 0.90428945467;
    msg.err_x = 0.22659056312;
    msg.err_y = 0.87057662762;
    msg.err_z = 0.605911102154;
    msg.pest_x = 0.541689157072;
    msg.pest_y = 0.64488222493;
    msg.psi_est = 0.0839814222376;
    msg.perr_x = 0.942682425318;
    msg.perr_y = 0.026555533279;
    msg.psi_err = 0.523464201598;
    msg.dest_x = 0.2012093787;
    msg.dest_y = 0.271732391992;
    msg.domega_est = 0.0134631678057;

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
    msg.setTimeStamp(0.182029020772);
    msg.setSource(2539U);
    msg.setSourceEntity(180U);
    msg.setDestination(44813U);
    msg.setDestinationEntity(46U);
    msg.value = 0.696562946058;

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
    msg.setTimeStamp(0.733551065317);
    msg.setSource(10222U);
    msg.setSourceEntity(7U);
    msg.setDestination(61767U);
    msg.setDestinationEntity(79U);
    msg.value = 0.218845642093;

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
    msg.setTimeStamp(0.13057596293);
    msg.setSource(48559U);
    msg.setSourceEntity(173U);
    msg.setDestination(51883U);
    msg.setDestinationEntity(139U);
    msg.value = 0.0261830092174;

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
