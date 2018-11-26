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
// IMC XML MD5: 10dd33b2beb0db6eacc07ab3cc5d66c5                            *
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
    msg.setTimeStamp(0.183509521922);
    msg.setSource(13742U);
    msg.setSourceEntity(75U);
    msg.setDestination(45571U);
    msg.setDestinationEntity(153U);
    msg.state = 142U;
    msg.flags = 187U;
    msg.description.assign("QNEMKPDCSGTMKNARRMOVVXKFUALLWGBXXOXUHLHVZAODTCTJWYJDDJFBHHQNZPYROIWYNPTFEFGEZAXZVFNRGIKBMVBTPWRIQVVJWBNATYXLIBKUAIUXAUJCOILUAFFHIGGDTSRNCUJYJZRIJEEGCLZTPMYCSCXKXHFKSJQOODRWMIVEYNDRZBFSZVPHCWNWMNQDPUMHOGLEGMLYLRUKZPBYCFGXQHCEOUZBSJIKELQTEM");

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
    msg.setTimeStamp(0.613165124946);
    msg.setSource(13810U);
    msg.setSourceEntity(41U);
    msg.setDestination(47137U);
    msg.setDestinationEntity(124U);
    msg.state = 36U;
    msg.flags = 32U;
    msg.description.assign("FFTSCUDLJMFQZJZUSVSCXDAKXQSMAEIOJDYBHDDHLLVQTRQIOJKEYESLKOUREKHSPIUHTUDTYJGHHCXOOONCAQVWLQAPYUPNECBTDZSOYFXKZMHTPRLKGBQCJDMNMJHVRGWPKFPJLZBXENAKAZMHFUZGRJCNYCOUGDWQGYDVTPMQVN");

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
    msg.setTimeStamp(0.66968778127);
    msg.setSource(55460U);
    msg.setSourceEntity(47U);
    msg.setDestination(31685U);
    msg.setDestinationEntity(14U);
    msg.state = 34U;
    msg.flags = 238U;
    msg.description.assign("ERBCNEBZVEGDRWNUKVRTVAAUZWEBBCUHCGRMDHWLMKDWCDQXSXBIAYLFQKADOYTYCSRQMWQMKHIOR");

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
    msg.setTimeStamp(0.539873585539);
    msg.setSource(27285U);
    msg.setSourceEntity(70U);
    msg.setDestination(20273U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.752011862758);
    msg.setSource(64350U);
    msg.setSourceEntity(130U);
    msg.setDestination(21507U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.797055893571);
    msg.setSource(43356U);
    msg.setSourceEntity(74U);
    msg.setDestination(1479U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.662341228568);
    msg.setSource(53111U);
    msg.setSourceEntity(130U);
    msg.setDestination(30469U);
    msg.setDestinationEntity(161U);
    msg.id = 146U;
    msg.label.assign("WKRNMHQDLFAMGWYPGEMLUCHOMKESCFIJRJQTGCXGACMVMVLCQELMKKITYWMHCFAKAEFEDDPSTPBSAFAKFVTJXZNBGWDBBUYWUBLNIJGSLIMNXLRSZEUYQSNDHKEPTCXNOZEIOOHZWLKRCZRFIQUPQOQZXIJP");
    msg.component.assign("CSGBYXAMNOERRJMRNTCMGSXPBPLEKCFYRWUTORGRBWASPPCUHWELCEZXBLSQKKDIOLIDAZKYHATKVHSVTUQUMRZVTGKZZJFNFGVUUWIHBBMMMNWASUGBJNDMHBPWVQECNHKOWZHTXZAKHDIDJQXIYYPIQORDEBEHQOYFNTSRUSSDSQVPQNLWGVIJEIDFQYLLMFFDPTTUTMYPXFJKVFDCKLWIGJYCGANE");
    msg.act_time = 26167U;
    msg.deact_time = 10997U;

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
    msg.setTimeStamp(0.447294740867);
    msg.setSource(8485U);
    msg.setSourceEntity(164U);
    msg.setDestination(13678U);
    msg.setDestinationEntity(151U);
    msg.id = 107U;
    msg.label.assign("NJFTFPGSKWIBEWTWBRBKJRYNCWTPMQKEUQCNERYTPJIXAZDMUXXWLALUMTVXPH");
    msg.component.assign("KBMZIEIBKHTRSPIDBVXUUOSAIWVNJYPPPGFCYTJNDPWAKUYZRMFPQGMFIBGJQTLWZHLQARUQKLLESGDKIYDFBGQOCXRDMXUTBVXTSUKCMWMFBYDLCNJJATEGIKXYPNOTVFPYEDOFEXQAZXRNCUAKIZSSTMURSVQEYLZMFURECJBBWNOHCHGHOJSALFVVWJYQCWXORKGRXHCJLVEVQPSDOLADHKGUWHRNTNLNNHPHCZDO");
    msg.act_time = 4025U;
    msg.deact_time = 48934U;

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
    msg.setTimeStamp(0.797996718994);
    msg.setSource(22894U);
    msg.setSourceEntity(242U);
    msg.setDestination(56342U);
    msg.setDestinationEntity(152U);
    msg.id = 205U;
    msg.label.assign("FUDXXETTKLGICLLOFCURMVTSHDTEITIASZWUWZUMGYOLOTKRLCGKBPJXYQNIKTRNM");
    msg.component.assign("DTFRJHRVGTRUPFZVIUOCGLZXEEJLOGIKGMANYVGMPXZWJQMTTMFJSJJWCFABAMAUUIMLLPATUDOZBDPVPJXZTERXOLVQQHFUSYLVNBHYHZFVWSGVGPCKZMKPRNANWSGW");
    msg.act_time = 57983U;
    msg.deact_time = 39702U;

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
    msg.setTimeStamp(0.652324715856);
    msg.setSource(59719U);
    msg.setSourceEntity(247U);
    msg.setDestination(23454U);
    msg.setDestinationEntity(252U);
    msg.id = 217U;

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
    msg.setTimeStamp(0.609575136996);
    msg.setSource(36746U);
    msg.setSourceEntity(3U);
    msg.setDestination(4403U);
    msg.setDestinationEntity(92U);
    msg.id = 147U;

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
    msg.setTimeStamp(0.489599684509);
    msg.setSource(32621U);
    msg.setSourceEntity(19U);
    msg.setDestination(61035U);
    msg.setDestinationEntity(82U);
    msg.id = 61U;

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
    msg.setTimeStamp(0.433022834577);
    msg.setSource(12927U);
    msg.setSourceEntity(151U);
    msg.setDestination(62104U);
    msg.setDestinationEntity(166U);
    msg.op = 144U;
    msg.list.assign("YOFXWWDPHNNAEXYYKXUOIVTLQSMZIOUIDGXYNRAJPIMXMQCJWKLKYWMXSMPSSSGDYFVKNFJPRBGBBPLLUFAEOPQOAZNATBPKUWGFEJLJBBCURBASVVZDHMCZTRHESRLXXELVZTNRJLGMWUPNKPRHIHDGJHKGEZTDRNCF");

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
    msg.setTimeStamp(0.218955294432);
    msg.setSource(38087U);
    msg.setSourceEntity(18U);
    msg.setDestination(51897U);
    msg.setDestinationEntity(162U);
    msg.op = 7U;
    msg.list.assign("MFSBCRTVQZGIDLMWTJWHVGPKUCNUGJOEWOVORCKLWQSSFAHPAKPHEUXHAGEOIMRXDZYOBMOUAJQNDGCQXDVKNKEMEFTZBIEHBQRBEBUGIAJYVSSHLOGTYLUDPTNDNNICLCBIPQAVZDFMIOKSAORJWJPJXMFQRWXYPXJCJSWYCFQDRRSIWCVGMFZPDTMLSIX");

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
    msg.setTimeStamp(0.940885846172);
    msg.setSource(63327U);
    msg.setSourceEntity(43U);
    msg.setDestination(12465U);
    msg.setDestinationEntity(92U);
    msg.op = 163U;
    msg.list.assign("GSVFHZBNGCTRTTQEAPIXGXUCFGCUJXL");

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
    msg.setTimeStamp(0.760249607147);
    msg.setSource(78U);
    msg.setSourceEntity(1U);
    msg.setDestination(63876U);
    msg.setDestinationEntity(169U);
    msg.value = 211U;

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
    msg.setTimeStamp(0.91093783977);
    msg.setSource(45266U);
    msg.setSourceEntity(111U);
    msg.setDestination(64760U);
    msg.setDestinationEntity(124U);
    msg.value = 240U;

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
    msg.setTimeStamp(0.368489485148);
    msg.setSource(3332U);
    msg.setSourceEntity(87U);
    msg.setDestination(6770U);
    msg.setDestinationEntity(176U);
    msg.value = 92U;

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
    msg.setTimeStamp(0.0139265029237);
    msg.setSource(56664U);
    msg.setSourceEntity(124U);
    msg.setDestination(25493U);
    msg.setDestinationEntity(147U);
    msg.consumer.assign("JKJQSRAZROCLBGQGPDYZWSZCVZXBTXQMQCOVXKQBENFRHQAIJGSBFVVNSBEYPNFFCPJESVQVHILTXUPUHHZHMIGAOIKQXUWWETGMLWYOGEDACLONSKVOSAYBLHOABDBLKVOLSUTDHJMRQGUMKXNAKNRSBKCXHKYDYZWGYTPCERTZYNJXDREYWCGUJTPIZNUUSEGFNVCAROVMPDZU");
    msg.message_id = 19391U;

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
    msg.setTimeStamp(0.324484625648);
    msg.setSource(41492U);
    msg.setSourceEntity(142U);
    msg.setDestination(25807U);
    msg.setDestinationEntity(117U);
    msg.consumer.assign("EPTSVLDIZVPSPEGUUBNRSBMXXHAOUCWFTMK");
    msg.message_id = 8827U;

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
    msg.setTimeStamp(0.517145827399);
    msg.setSource(64114U);
    msg.setSourceEntity(188U);
    msg.setDestination(56963U);
    msg.setDestinationEntity(22U);
    msg.consumer.assign("AJZEORSUMDHMAWSCFJRBQSKLDVWOLLQWTJIKQPZZEDSZEQOGNFQSAAIWOKTDPOJDFKBSHOUCUYWHEVMILRRVZPWYWWKOIBRTBQUGICHHNLYLXPEGTKSIHIJUJUMVFQMBOCOBLREMXAFPNNALUBZGXDAPVGGCSFHGJDFFYYEGHDRCEEQTNWEPBSX");
    msg.message_id = 11515U;

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
    msg.setTimeStamp(0.0995835217558);
    msg.setSource(26396U);
    msg.setSourceEntity(205U);
    msg.setDestination(23865U);
    msg.setDestinationEntity(165U);
    msg.type = 122U;

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
    msg.setTimeStamp(0.0515170767343);
    msg.setSource(31568U);
    msg.setSourceEntity(72U);
    msg.setDestination(59818U);
    msg.setDestinationEntity(92U);
    msg.type = 1U;

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
    msg.setTimeStamp(0.516417539433);
    msg.setSource(37436U);
    msg.setSourceEntity(251U);
    msg.setDestination(24446U);
    msg.setDestinationEntity(153U);
    msg.type = 214U;

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
    msg.setTimeStamp(0.993323589078);
    msg.setSource(23358U);
    msg.setSourceEntity(89U);
    msg.setDestination(54098U);
    msg.setDestinationEntity(40U);
    msg.op = 212U;

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
    msg.setTimeStamp(0.734138397765);
    msg.setSource(45348U);
    msg.setSourceEntity(112U);
    msg.setDestination(26135U);
    msg.setDestinationEntity(21U);
    msg.op = 161U;

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
    msg.setTimeStamp(0.836266646684);
    msg.setSource(31654U);
    msg.setSourceEntity(131U);
    msg.setDestination(34312U);
    msg.setDestinationEntity(24U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.549399254769);
    msg.setSource(49827U);
    msg.setSourceEntity(27U);
    msg.setDestination(31314U);
    msg.setDestinationEntity(222U);
    msg.total_steps = 9U;
    msg.step_number = 57U;
    msg.step.assign("LJWTZRWXWYVKMREUZVWGTIXVIQJSVBDFMSALCWMTAZVZVGTUAKTDFEKWGBUBNIPKCTAVWJWQ");
    msg.flags = 210U;

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
    msg.setTimeStamp(0.340208548385);
    msg.setSource(55288U);
    msg.setSourceEntity(170U);
    msg.setDestination(35292U);
    msg.setDestinationEntity(104U);
    msg.total_steps = 205U;
    msg.step_number = 217U;
    msg.step.assign("YUITGKIORXHRSDBBAEEUURIACDXLIFZTKIHKYBMHPBTHUYEAVLLBCYDUGPJPJKMHLODXSXHCMRWSNPGZPQEEJWMCFLGTLYSLTDOYDTNBWAKETNWCRJGMVJDNAMQAHZEPQSEIWUGBYOHCATZVAVQUGXJRVQSACJLXPRJFLQFSQUIDFWRJNYEKFWFGVZSBNDPZMIIDNHKUQCFFZSKQWVXZOOPTXBEUNCTGZWOL");
    msg.flags = 125U;

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
    msg.setTimeStamp(0.39463462292);
    msg.setSource(43821U);
    msg.setSourceEntity(206U);
    msg.setDestination(19641U);
    msg.setDestinationEntity(93U);
    msg.total_steps = 12U;
    msg.step_number = 97U;
    msg.step.assign("QFBBMINKJFMHVLLCKMKTWWPMTCZTZGRSDGGKXQWBMHSUKIAZZKSTLGJOJTLJEAQODXLCSZYXDVZLHBAMLPJDRBCVCWUZVQFHURSJYDXQITHDLIHIOBYNROXNXWKZEAXEHNOUCGQCJSZIQRFWTBGOIRUSUUVIVUXEZEEUQOYNFFECXGNAAUIWDJAPKYGKQNMCPPANNPEOTPVP");
    msg.flags = 192U;

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
    msg.setTimeStamp(0.273425556371);
    msg.setSource(34309U);
    msg.setSourceEntity(216U);
    msg.setDestination(18206U);
    msg.setDestinationEntity(9U);
    msg.state = 156U;
    msg.error.assign("KVJSODUOSFCETQDNZLRKDVIVGCHDOSGMFLFETRDQBZCPYEXDSKAJDJRHORHPFZZJPMNCYGYSAWLLCUVBQSNQXFKNFXUTFCKTBNKCHSGQGLYGOBIWRARKVMLONBMCJHMCZDBQDNZMUWUOXUJFPACTQOLKBMLWVENFTEXVELPZSRJWZUGESLHUYXQAIJWPYN");

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
    msg.setTimeStamp(0.191884107219);
    msg.setSource(20940U);
    msg.setSourceEntity(139U);
    msg.setDestination(62482U);
    msg.setDestinationEntity(43U);
    msg.state = 217U;
    msg.error.assign("KEPYYMIAYCMFCBBXZTVIQGHLRHXQPESHDQVOOGMTRDFNDIVIDFFNANTIZPEYIVXCPOJ");

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
    msg.setTimeStamp(0.243924428948);
    msg.setSource(7060U);
    msg.setSourceEntity(178U);
    msg.setDestination(50328U);
    msg.setDestinationEntity(99U);
    msg.state = 44U;
    msg.error.assign("VZKHTXYJZUNUHQJBAOACGKXGVRKYIKMZRYWQXFSRIPLHUJHCLIQTCQAMTQAPBFJRHWAARQFUIBKZFJJRKNHMDLUGXYHDLLDOGCGNISQVEFCLVSWVDCGQWAVLIOWHNDTEEDVEPDOMSOGTUVHLSEWQRCCYDGDSOXSKORWBEIBFNNHJWZEYWKJETPFOVZTMOVMUBMZPZYXNFBIIUAMBLZTYACPGSKRWJXSTFGENLPX");

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
    msg.setTimeStamp(0.879350310472);
    msg.setSource(59670U);
    msg.setSourceEntity(65U);
    msg.setDestination(13995U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.809234149893);
    msg.setSource(26373U);
    msg.setSourceEntity(73U);
    msg.setDestination(30110U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.986986055926);
    msg.setSource(7205U);
    msg.setSourceEntity(140U);
    msg.setDestination(27846U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.765212541151);
    msg.setSource(45518U);
    msg.setSourceEntity(30U);
    msg.setDestination(55374U);
    msg.setDestinationEntity(13U);
    msg.op = 181U;
    msg.speed_min = 0.800816926137;
    msg.speed_max = 0.189111432548;
    msg.long_accel = 0.237286309623;
    msg.alt_max_msl = 0.242470301574;
    msg.dive_fraction_max = 0.689277356817;
    msg.climb_fraction_max = 0.125279314775;
    msg.bank_max = 0.508914560821;
    msg.p_max = 0.183217190556;
    msg.pitch_min = 0.448148294048;
    msg.pitch_max = 0.187112235648;
    msg.q_max = 0.508495160095;
    msg.g_min = 0.798781747767;
    msg.g_max = 0.0465386265468;
    msg.g_lat_max = 0.672105545653;
    msg.rpm_min = 0.138635240191;
    msg.rpm_max = 0.108990888297;
    msg.rpm_rate_max = 0.210080085999;

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
    msg.setTimeStamp(0.274898091132);
    msg.setSource(35552U);
    msg.setSourceEntity(208U);
    msg.setDestination(64523U);
    msg.setDestinationEntity(64U);
    msg.op = 124U;
    msg.speed_min = 0.719892681916;
    msg.speed_max = 0.750605622419;
    msg.long_accel = 0.865345731921;
    msg.alt_max_msl = 0.656623858001;
    msg.dive_fraction_max = 0.637663871338;
    msg.climb_fraction_max = 0.89503168925;
    msg.bank_max = 0.722721287058;
    msg.p_max = 0.702990799364;
    msg.pitch_min = 0.302425012543;
    msg.pitch_max = 0.168081752211;
    msg.q_max = 0.930845630944;
    msg.g_min = 0.991722651237;
    msg.g_max = 0.48901158438;
    msg.g_lat_max = 0.0125073345959;
    msg.rpm_min = 0.330147432053;
    msg.rpm_max = 0.307851172971;
    msg.rpm_rate_max = 0.250081807897;

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
    msg.setTimeStamp(0.125333946891);
    msg.setSource(4015U);
    msg.setSourceEntity(94U);
    msg.setDestination(9620U);
    msg.setDestinationEntity(28U);
    msg.op = 228U;
    msg.speed_min = 0.940775709132;
    msg.speed_max = 0.83819623958;
    msg.long_accel = 0.573930690483;
    msg.alt_max_msl = 0.288341857216;
    msg.dive_fraction_max = 0.441945907689;
    msg.climb_fraction_max = 0.505873654123;
    msg.bank_max = 0.687735832302;
    msg.p_max = 0.854683762072;
    msg.pitch_min = 0.865090804087;
    msg.pitch_max = 0.834035518139;
    msg.q_max = 0.806387327549;
    msg.g_min = 0.0657371159298;
    msg.g_max = 0.509766954262;
    msg.g_lat_max = 0.289930428602;
    msg.rpm_min = 0.534111046109;
    msg.rpm_max = 0.465313226121;
    msg.rpm_rate_max = 0.421560626066;

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
    msg.setTimeStamp(0.952559914351);
    msg.setSource(27578U);
    msg.setSourceEntity(37U);
    msg.setDestination(53926U);
    msg.setDestinationEntity(222U);
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 89U;
    tmp_msg_0.frag_number = 227U;
    tmp_msg_0.num_frags = 129U;
    const char tmp_tmp_msg_0_0[] = {-56, 39, 109, 6, 60, -92, -119, 98, -20, 82, -8, 100, 98, -77, -110, 77, -55, -17, 86, -39, 108, 90, -77, -9, -126, -34, 105, -75, -114};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.455665864003);
    msg.setSource(61983U);
    msg.setSourceEntity(190U);
    msg.setDestination(44151U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.25849133522);
    msg.setSource(34233U);
    msg.setSourceEntity(182U);
    msg.setDestination(32964U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.322898970026);
    msg.setSource(14292U);
    msg.setSourceEntity(184U);
    msg.setDestination(52434U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.812170713758;
    msg.lon = 0.675683239612;
    msg.height = 0.30715545583;
    msg.x = 0.231574876373;
    msg.y = 0.421594420098;
    msg.z = 0.604688025241;
    msg.phi = 0.871691202841;
    msg.theta = 0.331096234287;
    msg.psi = 0.11283038722;
    msg.u = 0.918401961648;
    msg.v = 0.289372940814;
    msg.w = 0.832855795681;
    msg.p = 0.701656989145;
    msg.q = 0.212986889912;
    msg.r = 0.572133812985;
    msg.svx = 0.67919383102;
    msg.svy = 0.832991921336;
    msg.svz = 0.872725984073;

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
    msg.setTimeStamp(0.140492662039);
    msg.setSource(59798U);
    msg.setSourceEntity(33U);
    msg.setDestination(40254U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.963024518833;
    msg.lon = 0.251970310784;
    msg.height = 0.228934803376;
    msg.x = 0.375120847225;
    msg.y = 0.70196727789;
    msg.z = 0.863435057075;
    msg.phi = 0.651013205323;
    msg.theta = 0.851194471372;
    msg.psi = 0.426386154265;
    msg.u = 0.974649936462;
    msg.v = 0.662536267227;
    msg.w = 0.136897174098;
    msg.p = 0.0924741664612;
    msg.q = 0.583600655911;
    msg.r = 0.0459487850903;
    msg.svx = 0.975735448047;
    msg.svy = 0.580668775547;
    msg.svz = 0.849148152375;

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
    msg.setTimeStamp(0.632087192013);
    msg.setSource(19789U);
    msg.setSourceEntity(249U);
    msg.setDestination(21226U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.850333332667;
    msg.lon = 0.383093800658;
    msg.height = 0.331504982;
    msg.x = 0.850320338896;
    msg.y = 0.788907967131;
    msg.z = 0.769671107643;
    msg.phi = 0.313872594536;
    msg.theta = 0.0736490463611;
    msg.psi = 0.514323129427;
    msg.u = 0.406194541358;
    msg.v = 0.0579540138225;
    msg.w = 0.134236076069;
    msg.p = 0.389263706983;
    msg.q = 0.775747248273;
    msg.r = 0.944871791318;
    msg.svx = 0.447351050423;
    msg.svy = 0.475825035485;
    msg.svz = 0.220068095154;

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
    msg.setTimeStamp(0.81785850574);
    msg.setSource(47482U);
    msg.setSourceEntity(40U);
    msg.setDestination(55170U);
    msg.setDestinationEntity(65U);
    msg.op = 13U;
    msg.entities.assign("ENENNVMNTGRLMGAFICKRVEURBMOZEMNBLWRDJ");

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
    msg.setTimeStamp(0.641289281189);
    msg.setSource(38053U);
    msg.setSourceEntity(125U);
    msg.setDestination(26076U);
    msg.setDestinationEntity(73U);
    msg.op = 1U;
    msg.entities.assign("OHDHNEAUOHWTKMMYVWMGGSILRXTKOIZLPIFMBVYLUBCVHGUUONIYRMKQCJQWVTOVRQFKETUMRAHOUH");

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
    msg.setTimeStamp(0.955035459632);
    msg.setSource(64896U);
    msg.setSourceEntity(107U);
    msg.setDestination(22332U);
    msg.setDestinationEntity(139U);
    msg.op = 61U;
    msg.entities.assign("DZEVSTPKNZEYQCZKBMSFXP");

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
    msg.setTimeStamp(0.55215768517);
    msg.setSource(11834U);
    msg.setSourceEntity(242U);
    msg.setDestination(9983U);
    msg.setDestinationEntity(70U);
    msg.type = 211U;
    msg.speed = 34459U;
    const char tmp_msg_0[] = {48, -89, -77, 122, 83, 4, -119, 86, -69, -42, 70, 112, 95, -52, 62, -110, -24, -16, -90, -27, 58, 0, -57, -67, -119, 17, 44, 125, 112, -88, 54, 48, -79, -62, -38, -124, -24, -94, 107, -7, -35, 11, -31, 1, 43, 104, 0, -8, -14, 89, 40, -65, 95, 13, -2, -61, -107, -85, -74, 116, -43, 74, -59, 123, -49, -3, 118, 114, -4, -18, -49, 53, 37, -29, -38, 35, 54, -104, 74, 63, -32, 121, 118, -21, 86, 7, 48, -45, -57, 52, 80, -43, -89, 117, -67, -46, 11, 29, -56, 5, 61, 101, -20, -23, -109, -96, -7, 88, 90, -36, 28, 2, -89, 47, -114, -58, -100, -86, 109, -110, 70, 10, -45, -92, -90, -117, 21, 99, 35, 83, 76, 105, 117, 50, 5, 116, 28, 96, 58, 11, 82, -68, -20, 16, -45, 20, -69, 65, 72, 98, -7, -59, 63, -111, -71, -1, -91, 94, 106, -3, 40, 9, -63, 49, -9, 34, 56, 74, 75, -58, -81, -4, 98, -66, 124, 107, -37, -48, -52, -35, -49, -12, -106, -103, -77, 100, 71, 10, -43, 123, -40, 81, 115, -83, 40, 0, -98, -101, -99, -112, 80, -108, -108, 113, 103, 100, -38, -81, -19, 122, -91, 86, -9};
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
    msg.setTimeStamp(0.182147919437);
    msg.setSource(3489U);
    msg.setSourceEntity(16U);
    msg.setDestination(35853U);
    msg.setDestinationEntity(155U);
    msg.type = 88U;
    msg.speed = 11157U;
    const char tmp_msg_0[] = {-34, 88, -102, -120, -18, 48, -3, 44, 126, -85, -64, 119, 121, 83, -118, 31, 23, 8, -117, 66, 116, 90, 1, 81, -58, -87, 111, 50, 117, 17, 116, -23, -123, 17, 15, 25, -14, 27, -39, -90, 28, -123, 62, -63, 87, 90, -111, -117, -60, -36, 75, 15, 20, 60, 7, 118, 67, -113, -103, 95, 0, -98, 98, 16, 61, 41, 97, 109, 25, 5, 113, 7, 38, 117, 71, 76, -99, 32, 121, 101, -6, -66, -57, -2, -16, -34, -24, -77, 71, 88, -121, 112, 87, 56, 71, 121, -105, -81, 121, -126, -2, -14, -21, -2, 53, 13, 81, -84, 43, -21, -112, -99, 124, 60, -110, -120, -50, 30, 1, 6, 37, -98, 30, -82, -7, 64, -86, 105, -106, -14, -29, -85, 26, -95, 108, 49, 115, -54, 73, -96};
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
    msg.setTimeStamp(0.3248374156);
    msg.setSource(30691U);
    msg.setSourceEntity(180U);
    msg.setDestination(36759U);
    msg.setDestinationEntity(102U);
    msg.type = 195U;
    msg.speed = 33828U;
    const char tmp_msg_0[] = {-107, 8, -17, 37, 46, 26, -17, -72, 88, 92, -26, -29, -52, 78, -24, 44, -125, -100, 105, 50, 97, -36};
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
    msg.setTimeStamp(0.538294015985);
    msg.setSource(60915U);
    msg.setSourceEntity(192U);
    msg.setDestination(22971U);
    msg.setDestinationEntity(212U);
    msg.op = 112U;
    msg.tas2acc_pgain = 0.633894254483;
    msg.bank2p_pgain = 0.15367383669;

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
    msg.setTimeStamp(0.18662315416);
    msg.setSource(23655U);
    msg.setSourceEntity(85U);
    msg.setDestination(9839U);
    msg.setDestinationEntity(198U);
    msg.op = 78U;
    msg.tas2acc_pgain = 0.780989934467;
    msg.bank2p_pgain = 0.945693916542;

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
    msg.setTimeStamp(0.106362204922);
    msg.setSource(14532U);
    msg.setSourceEntity(147U);
    msg.setDestination(3976U);
    msg.setDestinationEntity(112U);
    msg.op = 215U;
    msg.tas2acc_pgain = 0.800196037578;
    msg.bank2p_pgain = 0.943029885618;

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
    msg.setTimeStamp(0.0640876678799);
    msg.setSource(22564U);
    msg.setSourceEntity(98U);
    msg.setDestination(20049U);
    msg.setDestinationEntity(146U);
    msg.available = 4065862733U;
    msg.value = 81U;

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
    msg.setTimeStamp(0.106539486917);
    msg.setSource(65003U);
    msg.setSourceEntity(232U);
    msg.setDestination(51903U);
    msg.setDestinationEntity(216U);
    msg.available = 2338754615U;
    msg.value = 9U;

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
    msg.setTimeStamp(0.527481925134);
    msg.setSource(5660U);
    msg.setSourceEntity(33U);
    msg.setDestination(1476U);
    msg.setDestinationEntity(82U);
    msg.available = 2896937653U;
    msg.value = 145U;

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
    msg.setTimeStamp(0.79140306631);
    msg.setSource(46241U);
    msg.setSourceEntity(112U);
    msg.setDestination(23815U);
    msg.setDestinationEntity(22U);
    msg.op = 237U;
    msg.snapshot.assign("FQIBHUWGRHJFCK");
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 49U;
    tmp_msg_0.plan_id.assign("VAUCGNRGXZJGCCJSYGCYDAUXIU");
    tmp_msg_0.comm_level = 90U;
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
    msg.setTimeStamp(0.316545148946);
    msg.setSource(51656U);
    msg.setSourceEntity(24U);
    msg.setDestination(56780U);
    msg.setDestinationEntity(38U);
    msg.op = 254U;
    msg.snapshot.assign("YPBMKDQQCTSJGATYNAGZHIVOIZGLJARVVUDBPHJJTPNJUOIVBLFOHCBVOOSHUKRZVFMNUUFLYXVRDRNAZDXLAYJKSSGWIXLZUAOITPZSXWJNUBEFVWNLKCUWMKCGGRDYEMRX");
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 979U;
    tmp_msg_0.type = 26U;
    tmp_msg_0.max_size = 8519U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.786175920609;
    tmp_tmp_msg_0_0.base_lon = 0.139717274971;
    tmp_tmp_msg_0_0.base_time = 0.559627262736;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.172336172914);
    msg.setSource(24696U);
    msg.setSourceEntity(164U);
    msg.setDestination(53428U);
    msg.setDestinationEntity(143U);
    msg.op = 250U;
    msg.snapshot.assign("YNXLZACQQFHEGORMXKYWWTOXEFIPVIXBEBYKYJVPQSTPDTRHRKZZKTGJYCICHCXUSMKQOBPSIVSAGOWZWUOIFONBBVXAEFVMGSOTQETHOKWWFDMGHEIXAJSVNRZF");
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.426319543309;
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
    msg.setTimeStamp(0.0366613254363);
    msg.setSource(43439U);
    msg.setSourceEntity(171U);
    msg.setDestination(19565U);
    msg.setDestinationEntity(203U);
    msg.op = 5U;
    msg.name.assign("IKBJCVLEYQP");

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
    msg.setTimeStamp(0.783347430953);
    msg.setSource(25439U);
    msg.setSourceEntity(253U);
    msg.setDestination(50388U);
    msg.setDestinationEntity(185U);
    msg.op = 153U;
    msg.name.assign("AWRZOJVQTHAJHRXRIYVAYUWMZJOIVRMGACQDMORMYLMMBZQJWPNJDLSCGLPMRDTFZDNSCIYYKMJCAEHTVFEEYNVZLKEAWFGEIGKURCZGNBQOIUXEBZQOIPLWOPBNJHTUUNVXROITISTQDXPHKEXCVKADLUCDSWXSHUCUDFRKLKYXUTIGFXZNBOQGGAQJCOPQYBTSF");

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
    msg.setTimeStamp(0.345681636265);
    msg.setSource(25991U);
    msg.setSourceEntity(118U);
    msg.setDestination(19287U);
    msg.setDestinationEntity(25U);
    msg.op = 168U;
    msg.name.assign("QVWTIOOHCKSWIKOMCNBOWCKIGQIBMPZBBEZIIFTOLPTYHLFGZE");

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
    msg.setTimeStamp(0.866380644182);
    msg.setSource(53756U);
    msg.setSourceEntity(147U);
    msg.setDestination(27686U);
    msg.setDestinationEntity(199U);
    msg.type = 111U;
    msg.htime = 0.416546521166;
    msg.context.assign("TZGFVXEOEGWNRBAHIXTFNOEADVRAVQQLKLBGJNIUBIUGZIMLPYGWKTXPCXREOWMWHFBXOJRVVEAIWVOMSLTRGJQZESDTXHSMBYIKCCPSEWKAJEFOCYPEQABNIVDT");
    msg.text.assign("HZMWNQAVYQCTEXRBRSNPDGCVZGODKZWJRJFYSKGSUMIDTTUQSXUXACPBTLKGSXITEKVXTAFNGYUOKHSZWBGMJHFMIPXTZKCSWWULCMRUGSPPPZEJVRHMIEYZMZISLBGXBHIEMAPACFQYVIRFOJXGI");

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
    msg.setTimeStamp(0.419244835198);
    msg.setSource(55322U);
    msg.setSourceEntity(183U);
    msg.setDestination(20337U);
    msg.setDestinationEntity(76U);
    msg.type = 0U;
    msg.htime = 0.290539838786;
    msg.context.assign("UAYRNOUAZLEDWNKRLBNECPSBEBYNYFGJLUSVQDVPZTPNBXWLQQBMMBJXWNGWWRPJCICFAAICQISYXOGNMAEUXOUVRHEBTOZTWPZEPOLTUSKZHLCKBKDKZCRUTBITEMKOJEQOMFYXLTZVDGVWFHHCAVUAIHYBGOGCXSGMPHGXMDQYVKXTIFLFMKWJGVEIDZJQKJCAWLNDYQFXSTDFHAJNRGHHZPPFYZVPTUUMICOLRADIQJJRMSQWSHFXER");
    msg.text.assign("TLVEQRKEAJAGNOKUWVCAZKOPFQKQDMUJQLVUTBVGO");

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
    msg.setTimeStamp(0.0804592081555);
    msg.setSource(55333U);
    msg.setSourceEntity(208U);
    msg.setDestination(62814U);
    msg.setDestinationEntity(57U);
    msg.type = 23U;
    msg.htime = 0.727006543476;
    msg.context.assign("VABHCKYQLLZMFIXWUWALOORPDDTZERISQDUMCPYNPEKONAEGUNSLOZWXQALMBEVRCVHMSABJCXOGYZFPGNTCJSXQKOVOZTYWNYPYVQIGFNCBSBJMAODB");
    msg.text.assign("RASPQQAZVTLXSHQTCCNKCPULJFLCSBUKEPOBWHPSOSWAKMNBSJDSZ");

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
    msg.setTimeStamp(0.642382145074);
    msg.setSource(1902U);
    msg.setSourceEntity(90U);
    msg.setDestination(62385U);
    msg.setDestinationEntity(249U);
    msg.command = 231U;
    msg.htime = 0.0644980501568;

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
    msg.setTimeStamp(0.228323767709);
    msg.setSource(37361U);
    msg.setSourceEntity(8U);
    msg.setDestination(43572U);
    msg.setDestinationEntity(176U);
    msg.command = 108U;
    msg.htime = 0.909830432985;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 229U;
    tmp_msg_0.htime = 0.574708161329;
    tmp_msg_0.context.assign("BVBGSFYZRXIMHTHULBIVWKZTJGBSDFWNYFHZAVQBQQGARUNLCEQEHOANZEPSEXHRSNRGJMZIUBTAUGYGOMIZICEPKVWUSNULRAPPMDJIUFRWGBOQWPMLULJNFQDSJVHZCOAVTNAXCXFCJZXICJ");
    tmp_msg_0.text.assign("CHIFEZGRFMFULZDATPMTMUVARAMPKXFOP");
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
    msg.setTimeStamp(0.575231356544);
    msg.setSource(15335U);
    msg.setSourceEntity(121U);
    msg.setDestination(23893U);
    msg.setDestinationEntity(222U);
    msg.command = 110U;
    msg.htime = 0.199531076245;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 146U;
    tmp_msg_0.htime = 0.851571736635;
    tmp_msg_0.context.assign("BECHQRWCQMEOYQDDJVTQYWLYOFKJVNZOOKTTCTIPSNZPPXFMMIWSMWGMJAIICCYHQWFPTCSTMSRAZHPXLNYOQXBZEZBVSKMSUDNGFAEHXLLGRRYNGBHUANUTFUINVFUSSLJFTVECMTRJAOVDAURZWYRRZHHUEHYZEGGZINYDOAIWJFXKKGDVOKUDKCXSWXEEMAIQPWQBDDQVGGIHVRGXKANLMYJEPBRCKCIPQJOLLPXZJWSAUNBTBKLBLXU");
    tmp_msg_0.text.assign("JVXZXONJFPPXQJQOLIZMSDTZAHELTBIOAMYNQKNHZICELEBYWZXWXVQPKGCRTBKFOBCRHOHORBSCEWPALEJIPMHVIERXZAGEDCDLJNUROIUVAMMNFQPUCMRWDMQGDKGQOLF");
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
    msg.setTimeStamp(0.375241350933);
    msg.setSource(30747U);
    msg.setSourceEntity(123U);
    msg.setDestination(43967U);
    msg.setDestinationEntity(159U);
    msg.op = 146U;
    msg.file.assign("BNLNYTKTAKFAXILDRYKIDUAFKCSIKRHBGXGWQOZAYPZCRVSWXSLBXTZQUJOEOAAVOCZBOXCEQTPBWIFPWEWHHZVGMVKNVRKHHBUYOYSDJJEDCVOKLLUCLF");

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
    msg.setTimeStamp(0.911174540667);
    msg.setSource(45640U);
    msg.setSourceEntity(112U);
    msg.setDestination(45312U);
    msg.setDestinationEntity(178U);
    msg.op = 92U;
    msg.file.assign("RQFTLNZVWZRHWLYEOCCPYJABLKVYLBVQAJTQGEKPEJTTJRSFSCIPZFJFSJDIOTYBNOQDDAFKECMEPYKEVBQRHSUJVLIVPFAATEHIWGBEPQMUAAXXOB");

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
    msg.setTimeStamp(0.758055441881);
    msg.setSource(20277U);
    msg.setSourceEntity(167U);
    msg.setDestination(6144U);
    msg.setDestinationEntity(169U);
    msg.op = 134U;
    msg.file.assign("PQDFFHBSGZGWPHNJGFVYNASKIOLIATFRPZVNRNZFYIMLHZFJTLNEAPYPOCHOETVZDLTMDBGKRFKDAMGWCHDNOJTGMKAPSWRRCRUZTKQDHJAXSVMYQXSIBJSRLQUVQBLEXGIWGZCFRLYYTLEKICDEAQMVCHUVWXWIGIBEXWBJUNIPNYSKBEPWVU");

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
    msg.setTimeStamp(0.215130753304);
    msg.setSource(13657U);
    msg.setSourceEntity(26U);
    msg.setDestination(58575U);
    msg.setDestinationEntity(3U);
    msg.op = 170U;
    msg.clock = 0.764191700332;
    msg.tz = 118;

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
    msg.setTimeStamp(0.797645756428);
    msg.setSource(35595U);
    msg.setSourceEntity(50U);
    msg.setDestination(40716U);
    msg.setDestinationEntity(29U);
    msg.op = 25U;
    msg.clock = 0.0575631498887;
    msg.tz = 85;

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
    msg.setTimeStamp(0.0247443955256);
    msg.setSource(21897U);
    msg.setSourceEntity(95U);
    msg.setDestination(7286U);
    msg.setDestinationEntity(88U);
    msg.op = 93U;
    msg.clock = 0.155343345825;
    msg.tz = 53;

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
    msg.setTimeStamp(0.527834609967);
    msg.setSource(56805U);
    msg.setSourceEntity(226U);
    msg.setDestination(3543U);
    msg.setDestinationEntity(13U);
    msg.conductivity = 0.0998080367495;
    msg.temperature = 0.172243302302;
    msg.depth = 0.53097580385;

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
    msg.setTimeStamp(0.335315579932);
    msg.setSource(10533U);
    msg.setSourceEntity(51U);
    msg.setDestination(51968U);
    msg.setDestinationEntity(254U);
    msg.conductivity = 0.390262831624;
    msg.temperature = 0.592771790912;
    msg.depth = 0.978258414399;

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
    msg.setTimeStamp(0.405154916396);
    msg.setSource(20214U);
    msg.setSourceEntity(187U);
    msg.setDestination(64261U);
    msg.setDestinationEntity(109U);
    msg.conductivity = 0.583476210902;
    msg.temperature = 0.549788435949;
    msg.depth = 0.936306927942;

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
    msg.setTimeStamp(0.186959831931);
    msg.setSource(7241U);
    msg.setSourceEntity(98U);
    msg.setDestination(39100U);
    msg.setDestinationEntity(98U);
    msg.altitude = 0.897738951234;
    msg.roll = 20987U;
    msg.pitch = 56469U;
    msg.yaw = 37077U;
    msg.speed = -13162;

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
    msg.setTimeStamp(0.98078266573);
    msg.setSource(42410U);
    msg.setSourceEntity(187U);
    msg.setDestination(64123U);
    msg.setDestinationEntity(219U);
    msg.altitude = 0.764422958445;
    msg.roll = 15894U;
    msg.pitch = 57394U;
    msg.yaw = 7853U;
    msg.speed = 2112;

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
    msg.setTimeStamp(0.568020192738);
    msg.setSource(54885U);
    msg.setSourceEntity(19U);
    msg.setDestination(23602U);
    msg.setDestinationEntity(140U);
    msg.altitude = 0.15643723156;
    msg.roll = 63698U;
    msg.pitch = 27799U;
    msg.yaw = 24028U;
    msg.speed = -17327;

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
    msg.setTimeStamp(0.616911639806);
    msg.setSource(39843U);
    msg.setSourceEntity(81U);
    msg.setDestination(51201U);
    msg.setDestinationEntity(30U);
    msg.altitude = 0.395925630813;
    msg.width = 0.859008535176;
    msg.length = 0.797512200019;
    msg.bearing = 0.0850183950185;
    msg.pxl = -5123;
    msg.encoding = 133U;
    const char tmp_msg_0[] = {-68, -59, -26, 124, -38, -106, 45, 121, -115, -65, -95, -81, -44, 20, 101, 45, -126, -90, -91, -67, 77, 91, -76, -101, -41, 122, 100, -49, 79, 12, -111, -43, 61, 34, 7, -45, -97, 55, -88, 123, 62, 32, 59, 51, -66, 54, 90, 88, -37, 34, -87, -14, -115, -89, 67, 15, 117, 68, -89, -115, -64, -62, 48, -88, 17, 0, 7, 26, 76, 70, -47, 74};
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
    msg.setTimeStamp(0.414061571752);
    msg.setSource(31658U);
    msg.setSourceEntity(251U);
    msg.setDestination(25990U);
    msg.setDestinationEntity(254U);
    msg.altitude = 0.116817992313;
    msg.width = 0.448251279807;
    msg.length = 0.755010593937;
    msg.bearing = 0.0345096976127;
    msg.pxl = 8092;
    msg.encoding = 193U;
    const char tmp_msg_0[] = {80, -63, 109, 51, -39, 16, -5, 12, -36, 96, -80, 0, 107, 64, 69, -114, -11, -36, 91, -71, 95, 73, 110, -79, -70, -9, -66, -116, 22, 25, -28, 41, 120, 111, 66, 50, -62, -12, -24, 112, 10, -127, 118, 15, 54, -36, 0, -116, 10, 106, -117, -14, 22, -56, -52, -117, 124, 103, 102, -42, 60, 67, 71, 86, -3, -46, -49, -5, 12, -117, 111, -109, -3, -49, 64, -19, 44, -45, 59, 54, 28, -72, 18, -21, -6, 109, -20, 90, 49, -115, -76, 106, 55, 97, 116, -110, 121, 20, -117, 25, 6, 93, 117, 2, 85, 11, -16, -118, 57, -91, 103, -48, -68, 71, -50, 61, -48, 108, -93, 18, 99, 71, 22, 80, -111, 38, -124, -39, 20, -57, -128, -18, -52, -104, -68, -107, 45, 43, 48, 103, -111, 43, 1, 77, 10, 26, -99, 22, -2, 78, -79, -4, 79, -1, 96, -27, 117, -116, -107, 1, -112, -57, 32, 14, -12, -6, -7, -63, 79, 29, 0, -10, -6, -77, -120, -7, -97, -109, -37, 122, 14, -17, 23, -116, -52, 106, -76, 109, 35, -47, -94, 48, 116, -86, 55, 36, -17, -54, -112, 66, -17, 97, -38, 62, -60, -21, 33, -41, -91, -77, -43, -117, 29, 103, -76, -127, -48, 65, -110, -6, -78, 54, -28, 106, -62, 87, -101, 114, 81, 120, 12, -33, -98, 79};
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
    msg.setTimeStamp(0.0894467884104);
    msg.setSource(18291U);
    msg.setSourceEntity(162U);
    msg.setDestination(17646U);
    msg.setDestinationEntity(80U);
    msg.altitude = 0.606032737176;
    msg.width = 0.732715912612;
    msg.length = 0.0653015455517;
    msg.bearing = 0.000604699214845;
    msg.pxl = -3562;
    msg.encoding = 114U;
    const char tmp_msg_0[] = {8, -40, 29, -8, 87, -1, -86, -108, 119, 59, -54, 124, 9, 27, 68, 95, -111, 8, 92, -7, 47, -115, -118, 30, 14, 25, 116, -64, -2, 42, 48, -102, -112, 10, -127, 81, 58, -77, -39, 95, 125, 45, 83, -128, -43, -85, 37, 46, 26, -38, 70, -45, 27, -6, -54, 73, 80, 69, -65, 109, 47, -33, 14, 34, -47, -28, 9, -23, 108, -41, 64, -101, -40, -89, 64, 125, 7, 60, -30, 99, -41, -116, -39, -125, -59, -45, 68, -27, -35, -9, 69, -4, 18, 42, 52, 87, -118, 76, 91, -24, 73, -51, -15, -83, -8, 58, -114, 16, 108, -23, -120, 2, -95, -19, 27, -29, 9, 116, 12, -49, -50, -29, -92, 50, -112, 62, 44, -41, -26, 56, 37, -55, 75, 55, -58, -92, 39, 101, -126, -114, 31, 100, 0, 116, -78, -103, 9, 124};
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
    msg.setTimeStamp(0.92137227367);
    msg.setSource(8338U);
    msg.setSourceEntity(188U);
    msg.setDestination(60257U);
    msg.setDestinationEntity(21U);
    msg.text.assign("OPAOZXOQOJLZFMFILBWYHULNEGSYVDGQCKGSTPCFHVNGK");
    msg.type = 190U;

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
    msg.setTimeStamp(0.853662114167);
    msg.setSource(20021U);
    msg.setSourceEntity(73U);
    msg.setDestination(11700U);
    msg.setDestinationEntity(168U);
    msg.text.assign("PWFTAYXCQODDWUBWPKSFCCMCBJYTLJOYXNUPVKNKFCALXQLZYKCGJUWKULPNWHGRFQXVZTWVMZDWAMGOFWRHANUMRDJJYDYFGBHLSOLICUCSDXXFOOIHUIPYGEKTJFSBEZOJHREAXGGKAPICKPXHLSVMSZSRGPI");
    msg.type = 18U;

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
    msg.setTimeStamp(0.0386773652993);
    msg.setSource(4267U);
    msg.setSourceEntity(146U);
    msg.setDestination(15751U);
    msg.setDestinationEntity(38U);
    msg.text.assign("MFCZHNZYCFREWIZIAXEQLZHUSYVUTOHUSYLFJNQEHRHBZZWWGPULRBLOLUOOONBNXMPWCWAKSEBXQDUTCFVILKGUGIOSHCJSPVSQNBVTTEAKMVVHWRKNPEJMVFJRVDQUKLISAOHKAMPEDBSWTAXRFWQRYITXUJSZMYGYJQCYODNIBIUWPHTXOBTZYMGGJNMAYXEPQDILQZREDPFCXLZBPVXPDCKADKCFGRGABAIMWTNGMGYFCROHDFSL");
    msg.type = 190U;

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
    msg.setTimeStamp(0.952438375235);
    msg.setSource(42939U);
    msg.setSourceEntity(148U);
    msg.setDestination(30593U);
    msg.setDestinationEntity(208U);
    msg.parameter = 102U;
    msg.numsamples = 245U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 35818U;
    tmp_msg_0.avg = 0.0316345419657;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.929387425523;
    msg.lon = 0.0993438492013;

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
    msg.setTimeStamp(0.46809598272);
    msg.setSource(3206U);
    msg.setSourceEntity(50U);
    msg.setDestination(1287U);
    msg.setDestinationEntity(223U);
    msg.parameter = 48U;
    msg.numsamples = 82U;
    msg.lat = 0.989682643376;
    msg.lon = 0.640485288887;

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
    msg.setTimeStamp(0.403169825281);
    msg.setSource(29733U);
    msg.setSourceEntity(31U);
    msg.setDestination(46758U);
    msg.setDestinationEntity(131U);
    msg.parameter = 146U;
    msg.numsamples = 15U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 16584U;
    tmp_msg_0.avg = 0.330490793616;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.264631048204;
    msg.lon = 0.29772910977;

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
    msg.setTimeStamp(0.570056950045);
    msg.setSource(57739U);
    msg.setSourceEntity(61U);
    msg.setDestination(50247U);
    msg.setDestinationEntity(184U);
    msg.depth = 52748U;
    msg.avg = 0.676490966934;

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
    msg.setTimeStamp(0.402265179831);
    msg.setSource(28857U);
    msg.setSourceEntity(98U);
    msg.setDestination(62142U);
    msg.setDestinationEntity(69U);
    msg.depth = 32950U;
    msg.avg = 0.442902527199;

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
    msg.setTimeStamp(0.44677307317);
    msg.setSource(51345U);
    msg.setSourceEntity(23U);
    msg.setDestination(36671U);
    msg.setDestinationEntity(107U);
    msg.depth = 44034U;
    msg.avg = 0.806888809955;

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
    msg.setTimeStamp(0.716779246221);
    msg.setSource(34982U);
    msg.setSourceEntity(64U);
    msg.setDestination(16898U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.459777106134);
    msg.setSource(38961U);
    msg.setSourceEntity(121U);
    msg.setDestination(9291U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.741224138004);
    msg.setSource(65138U);
    msg.setSourceEntity(237U);
    msg.setDestination(19060U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.969197652493);
    msg.setSource(26781U);
    msg.setSourceEntity(175U);
    msg.setDestination(15295U);
    msg.setDestinationEntity(7U);
    msg.sys_name.assign("XRZYPWOCVLLAFDDAAHPZHDBLWMSQTTULTFMBXRFQJVIMTGWGAIVXEOUBSLXMJJFGLMFWRNGPPEUZHMKRNZYUNITOQBKZHCSNOGNYWDJFWGOKWZODSCQQKAAZVMQGHKQEJDXZJJCISVSRV");
    msg.sys_type = 63U;
    msg.owner = 51504U;
    msg.lat = 0.322618209013;
    msg.lon = 0.750792881816;
    msg.height = 0.33668447642;
    msg.services.assign("OOANDYHKBHXJQZOVHZJNHTHIMOZVHTUPRIKHMEOQXNNORIKJFAVYBQFZWLEGLNNJMWCPEUUXQJGKUALWVYSXAWYNEXOWETDCKRZLSWYHPIAADBREPCFSFSMIVNZLCCQECBIVBDJFLUDIMGYX");

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
    msg.setTimeStamp(0.402657744395);
    msg.setSource(25540U);
    msg.setSourceEntity(57U);
    msg.setDestination(26121U);
    msg.setDestinationEntity(106U);
    msg.sys_name.assign("QXMZFDGBESHDDZRHPGFSSMLBJLFZLVTRAUFOROMCANQONOATWGUBALDCEPDNXCIVBKJEMOWEHCMRXXBQVTPXYMQZAKZKXEIKJIZNRSKFKBWACJQIJDCLROIGRNLPHWBOXPBTHZPZFTGMNWGDQCJYBTAZKOYJMUTQOHHSPAYVWAKDVUX");
    msg.sys_type = 17U;
    msg.owner = 28305U;
    msg.lat = 0.532486854822;
    msg.lon = 0.208754702957;
    msg.height = 0.426663764705;
    msg.services.assign("EFDLIMATJIHHLNODAKPUCUTZSERUPXBQISXYVQXXEXMRERTCGOWNHBZKYXUJVFPWZQDZJYNNTNKOKSVFPVPKMSYJYHGYFDPAPAFAVZEWIBLUQGNLHFCAHGWOGRPBJHQVSMPCOMJXZZHMGCQCWNZRJXWWMDTVXUKBLMYBZIOFAVIOUMRUGWNEERLJSGCVQQSOEXDCFGYZBRNUQK");

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
    msg.setTimeStamp(0.356122625333);
    msg.setSource(42831U);
    msg.setSourceEntity(121U);
    msg.setDestination(45440U);
    msg.setDestinationEntity(217U);
    msg.sys_name.assign("HFVBUDUAHYWZCFODAJENRYVWQWNNPVRPUOFLSGZLCTJUYOWVFSNUIEIQYECIDGQXZHNYKSEWPZBYMPRWULXULADJCABZAVLTNQSQBYHEERPDZJKWKMIXTYTFRNQJMGODWIQMPSKTVJKEESHOHFOZIXAKSNRBHJRUOMYLXGOACMQTLUVCVPTKRWZPIHSUJLIAFZ");
    msg.sys_type = 245U;
    msg.owner = 14737U;
    msg.lat = 0.841820117509;
    msg.lon = 0.141323393628;
    msg.height = 0.542706454958;
    msg.services.assign("UJJZDJNUWVGWFLHKKCDBHPYRUJYVCFAQNMMDLNBDIJLWEGHORSMYUEVHKHICAWJBWELATMOJXJVIXQTZERUO");

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
    msg.setTimeStamp(0.077182121788);
    msg.setSource(12050U);
    msg.setSourceEntity(80U);
    msg.setDestination(8454U);
    msg.setDestinationEntity(59U);
    msg.service.assign("VPPREMGBNULDNYOMDVXKVYCXGUSETGWHBJHJUWMSMENWARKVLYACSQZSVZEQFTOWWHSKUHDCZK");
    msg.service_type = 228U;

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
    msg.setTimeStamp(0.943623753099);
    msg.setSource(40756U);
    msg.setSourceEntity(193U);
    msg.setDestination(51511U);
    msg.setDestinationEntity(235U);
    msg.service.assign("ZWKDGUSXKGGZNTHRZTQYUQGBDIHTXTIOWDHSKHXVYHFKUPIGAECNLWZRUVVMCBCAQFDIPOTGRLRQBJHMDBFTTCXOKXXLEWVOFARSMJPHUOLQWZESGECKMRCEVILVCYLYFLJHNAANSBFVNQY");
    msg.service_type = 138U;

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
    msg.setTimeStamp(0.758518815664);
    msg.setSource(31777U);
    msg.setSourceEntity(183U);
    msg.setDestination(23366U);
    msg.setDestinationEntity(248U);
    msg.service.assign("VXBHGFYBNEGVJTAAEKZBYMRLYDTQLLHTARVFUWLHCNJKQSOGXGBLEPQGYXDNYJQOLXZXJKISFPZWLYPBIGPSTUBTXUMXWQCXVMTWOJTAWHKRPAYKMQCAAVUUFARSJJGBMJUHVZRXIOESVNDICYMOKSETIWIDGDYGZIESRUPZZNQEK");
    msg.service_type = 197U;

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
    msg.setTimeStamp(0.259948630548);
    msg.setSource(35186U);
    msg.setSourceEntity(158U);
    msg.setDestination(34874U);
    msg.setDestinationEntity(165U);
    msg.value = 0.319209226552;

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
    msg.setTimeStamp(0.542730651486);
    msg.setSource(10547U);
    msg.setSourceEntity(87U);
    msg.setDestination(19489U);
    msg.setDestinationEntity(8U);
    msg.value = 0.816403475668;

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
    msg.setTimeStamp(0.420269530286);
    msg.setSource(31969U);
    msg.setSourceEntity(158U);
    msg.setDestination(10644U);
    msg.setDestinationEntity(106U);
    msg.value = 0.998040457875;

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
    msg.setTimeStamp(0.343365298078);
    msg.setSource(37974U);
    msg.setSourceEntity(119U);
    msg.setDestination(65311U);
    msg.setDestinationEntity(149U);
    msg.value = 0.583300522208;

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
    msg.setTimeStamp(0.650437025861);
    msg.setSource(50684U);
    msg.setSourceEntity(8U);
    msg.setDestination(59505U);
    msg.setDestinationEntity(55U);
    msg.value = 0.0253389036582;

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
    msg.setTimeStamp(0.917049819556);
    msg.setSource(36300U);
    msg.setSourceEntity(208U);
    msg.setDestination(15113U);
    msg.setDestinationEntity(227U);
    msg.value = 0.351284559327;

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
    msg.setTimeStamp(0.299512170138);
    msg.setSource(17205U);
    msg.setSourceEntity(84U);
    msg.setDestination(37474U);
    msg.setDestinationEntity(167U);
    msg.value = 0.123940132417;

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
    msg.setTimeStamp(0.700407075757);
    msg.setSource(28731U);
    msg.setSourceEntity(129U);
    msg.setDestination(1791U);
    msg.setDestinationEntity(239U);
    msg.value = 0.70185176028;

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
    msg.setTimeStamp(0.519800812058);
    msg.setSource(48466U);
    msg.setSourceEntity(124U);
    msg.setDestination(64397U);
    msg.setDestinationEntity(111U);
    msg.value = 0.169010513011;

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
    msg.setTimeStamp(0.480416437032);
    msg.setSource(44227U);
    msg.setSourceEntity(120U);
    msg.setDestination(50400U);
    msg.setDestinationEntity(193U);
    msg.number.assign("YNQPEXEEWRQSAYTSZIPSPWICYGXKHOONQRUNLNSYOLDLZGRVSMQWAUYWVFLJVSHOEDTHNEBHJTOLUYDYQRIKHWBZRVIKORDTVBFUDDLNWBCMRPFAITGTUEHXWYVAKEJSQPLCGKDQBLTOVNCFMZAAKEBUPAZMZMGIXZJMZFKEFFOXMGXFVXCZO");
    msg.timeout = 9557U;
    msg.contents.assign("JMVKNFYTPBGBQNFMSJQFDGLYFAANCHRPPJIUACZCTMADXAKMGHTJTPCWEWSXMUOW");

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
    msg.setTimeStamp(0.597433854082);
    msg.setSource(10969U);
    msg.setSourceEntity(52U);
    msg.setDestination(35412U);
    msg.setDestinationEntity(140U);
    msg.number.assign("NLMHFEHACXFQRVJLINQIUUDVOVIJSAQKSDLJRVYMNPYSQGFAOVUPKHYGPIUDFHFQUZLHRZANWGSWYTFXSBGDUPZMGAOFSHTOQJGRYIBPMBTRBLWPAVTZXOHGEBSLEIKKUEXACIWLQPCMJNDKQNRFEBZTYLFGWCQRDNCDZEKJWDBBYYWCJOGXW");
    msg.timeout = 5131U;
    msg.contents.assign("BRHYRCQBHLKEOITKSODMISZOAEQXNCZCSZEUSBCDCUWNYSPLTCSEIJXWDBDAVZAISPAAETPFBULKNLHMUVYWJOPGIYTJKWQXFIVBKOSPWXBHEZHKXYTXCYJUAFDNPKGJJHRWPZERVVQOGFIFLMKAHTRIXQJMDMUSQGYOKGOBEGWFPVGNDT");

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
    msg.setTimeStamp(0.980309289791);
    msg.setSource(18267U);
    msg.setSourceEntity(16U);
    msg.setDestination(29999U);
    msg.setDestinationEntity(87U);
    msg.number.assign("SZMHSTJTDBBPCKBCZCVVFHMJKOWYUNUBHZGMYZBHULBPQRMYYKGERWGOYDIVUSLWMCXQXAKZPSZSBTCSXFQQERLPQKXNUPONLLAAFFLGWUFMJXIAOYRXAOWBCNAWUGKESNEJDWDQDYJZKUINDQCETGBURHZRWXIEZSHFGLCPPKKJIPPLHUXIEATFTADOJTDIVTXRIENKJVAYGMTCDWVIHNCQHOVGERFOMVSTBMAZFNSOVI");
    msg.timeout = 37720U;
    msg.contents.assign("DXATJEHJPHCHQWAXPBJIZKRFKIZWQKJQCUMURVOOKUYTBIKQEFAILSVEPURHLSHXKATZLGULRJWDYDUMGTFLZCFFEWMRFGVQYOWYCZFBNUGNZESPJEOTLZKYNXMMGSPEXLWVDNVNRQKHEAUEGXYNBIRSPPJEGVYTMACOCDKXJRDNSVANBBGLHH");

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
    msg.setTimeStamp(0.899991052701);
    msg.setSource(2962U);
    msg.setSourceEntity(110U);
    msg.setDestination(62383U);
    msg.setDestinationEntity(239U);
    msg.seq = 310577584U;
    msg.destination.assign("NCDNBJHBCFPQOOXDKBSCSRMNXGFTLZUJXMAMVEVRKEOHIUQCXYQNYMEWACPSCNUIJZWVQTRBOTTUFZGYPDNRAKYOGIRNZDEDVFIDBHRWXLRTXDQWPGILPGFPSESQREJSKBUPMFKKJQYCGILOSUQSU");
    msg.timeout = 44734U;
    const char tmp_msg_0[] = {-34, -30, -120, -83, -68, -96, 35, -113, 54, 14, -41, -98, -81, 82, -17, 8, -80, -49, -81, -68, 91, -19, -86, -46, -19, 91, -22, -40, 126, -48, -128, 8, 98, -71, 54, 69, -98, 111, 7, -71, 33, -98, 23, 126, 9, 33, -61, -27, -126, -62, 2, 85, -52, 97, 74, -82, 85, -105, -98, 38, 111, 37, 114, -89, -118, -50, -118, -105, -105, 4, 51, 62, -65, -35, 34, -33, -60, 64, 11, -51, -12, -106, 2, 122, -69, -73, 26, -34, -80, -13, 51, -114, 50, 102, 110, 24, -44, 76, 116, 76, -38, 5, -67, -91, 64, 16, 32, 74, -115, -120, 57, 83, 2, 39, -54, -81, -15, 84};
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
    msg.setTimeStamp(0.902849083569);
    msg.setSource(13339U);
    msg.setSourceEntity(229U);
    msg.setDestination(60304U);
    msg.setDestinationEntity(79U);
    msg.seq = 3656457452U;
    msg.destination.assign("JTSOODTAFMXJYZAEHMKSJTUHUQOURIXRXQOJWEKNOTDBPIGGNBOV");
    msg.timeout = 34645U;
    const char tmp_msg_0[] = {-3, -68, -36, -11, -38, -9, 12, -46, -63, 65, -122, -57, -113, -111, 51, 124, -101, 44, -107, -104, 104, -58, -47, 44, -65, -110, 60, 102, -96, -110, 11, -34, -110, 48, 2, 104, 74, -78, -52, 33, 3, -58, -90, -109, 71, 47, -117, 47, 12, 3, 75, 96, -53, -60, -25, 1, -20, -4, 98, 88, -9, -127, -94, -108, -49, 75, 2, -62, -105, 56, 37, 54, -85, 72, -57, 12, 97, -28, 115, 98, 62, 85, 88, 41, -56, -47, 123, 124, 4, -92, -81, -45, 123, 114, 89, 108, 7, -101, 47, -75, 54, 83, -11, -102, -12, 113, 56, 10, -71, -96, -50, -29, 29, -65, 5, 92, -77, -77, -56, -71, 76, 126, 98, 92, 75, 122, 16, 103, -117, -30, 53, 99, -67, 105, -20, -16, 67, 113, -122, -74, 122, 126, 3, 75, 74, 24, -36, -75, 112, 86, 83, -59, -109, 74, -114, -28, 86, 41, 116, 98, -97, -31, 77, 47, -58, 91, 8};
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
    msg.setTimeStamp(0.226367651496);
    msg.setSource(64426U);
    msg.setSourceEntity(220U);
    msg.setDestination(8164U);
    msg.setDestinationEntity(149U);
    msg.seq = 1018351744U;
    msg.destination.assign("WRUGKTJTKISSCLDEWKKHICOJEWNPZSWZGXPJULEAXOUTSKSWJGIOBVDEAKMCAVPWJMUMMICETXMOZNFQUVTILEONEFH");
    msg.timeout = 9089U;
    const char tmp_msg_0[] = {-41, 29, 2, 73, -57, 77, -24, -85, 113, 89, -72, -23, -86, -17, 73, -62, -10, 92, -64, -33, -73, 75, -83, -92};
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
    msg.setTimeStamp(0.334702235523);
    msg.setSource(56832U);
    msg.setSourceEntity(225U);
    msg.setDestination(65288U);
    msg.setDestinationEntity(242U);
    msg.source.assign("TMXANTJFQBQYVQBOXWWLZXXBAJXNWFZZELVSJAGYENCEVYSRFWDMYRYXUSPTROWQDCPYTDYPVZSJPUFBKPSQUXPDFOJRZRRKEZVHOOBTEDMOUIQMKGECAHLNANULCTODPTMKDOCDEKJFLAZWLLIBXHUKIFBVBMKMNUAACEEHVIJRSGSKJJDOXNWFGQH");
    const char tmp_msg_0[] = {-32, -19, -17, 54, 9, 37, -93, 89, -61, -67, -18, 23, -54, 66, -68, -118, 84, -77, -51, 96, -125, 44, -70, 10, -81, 110, -55, -14, -116, 1, 61, -6, -116, 118, 105, 79, 85, -104, 93, 61, 52, 72, -37, 83, -3, -48, -115, 57, 74, 34, -80, 16, -55, -65, -110, -89, -11, -36, 67, 113, 52, -109, 11, -127, -78, -4, 26, -54, 12, 100, -124, 36, -122, 54, -117, -76, -116, -58, 43, -69, 115, -57, -125, 88, -85, -32, -100, -93, 57, -104, -45, -128, 88, 26, 20, -51, 7, -4, 14, -127, 24, 12, -24, 74, -7, 76, -107, -93, -89, 90, -106, -89, -99, 60, 117, -103, -25, 83, -78, -11, 111, 2, 9, 13, 11, 121, 92, -27, 89, -49, 95, 35, 104, 24, -44, 0, 66, -116, 22, -19, -118, 57, 117, -31, -28, 70, 111};
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
    msg.setTimeStamp(0.3467873655);
    msg.setSource(59847U);
    msg.setSourceEntity(156U);
    msg.setDestination(23512U);
    msg.setDestinationEntity(188U);
    msg.source.assign("QQHAMCKVCJFQJDSLVVSZDALWBHBGIYRAHGUPPQSWJDTJLCPW");
    const char tmp_msg_0[] = {-26, -30, -75, 86, 14, 18, -122, -4, -55, 113, 117, 98, -56, -23, -115, 35, 14, 37, 94, 23, -52, -51, -64, 94, 99, -36, -72, -26, 110, 20, -100, -28, 9, 35, -65, -46, -45, 20, 118, 82, -108, -126, 44, 24, -89, -4, -74, -56, -14, 32, 65, 110, -14, 121, -95, 114, 112, 74, -112, -103, -101, 37, -39, 43, 75, -19, -64, -102, 92, -69, -104, -80, 122, -49, -93, -81, 121, -7, 33, -98, 55, 24, -71, -128, -124, 79, -27, -71, -35, -125, 97, 58, -64, -85, -47, -68, -80, -49, 16, 79, -37, -94, -73, 13, 75, 93, -111, 101, -84, -118, -116, 77, 125, -54, 109, -57, 15, 110, 92, -92, -101, 35, 108, -65, -40, -86, -37, -115, -128, -71, -44, 100, -40, 67, -121, -41, 32, -118, 49, 48, -35, -81, -46, -41, -24, 83, 104, -30, 69, -6, -103, 103, 78, -36, 6, 47, -119, -17, 56, 76, -121, -52, 42, -55, 109, -125, -36, -27, -94, -49, -18, 21, -115, -38, 88, 99, -115, 109, -66, -50, 120, 28, -9, -94, -35, -70, -42, -126, 65, 86, -16, 55, -120, 66, 106, 39, 70, -49, 125, -80, 41, 112, -4, 21, 21, -28, -60, 97, -73, -84, 107, 83, -91, -64, -81, 37, -49, 92, -5, -31, -117, 119, 56};
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
    msg.setTimeStamp(0.687436093091);
    msg.setSource(62064U);
    msg.setSourceEntity(151U);
    msg.setDestination(6645U);
    msg.setDestinationEntity(107U);
    msg.source.assign("IQIZWHGPZQMERKADJEPSRHJOQLAAILJ");
    const char tmp_msg_0[] = {118, 102, -79, 61, 107, -36, 61, 68, 21, -64, 114, 76, -93, -116, 87, 53, -100, 4, -81, -47, 17, 96, 66, -114, -101, -24, 105, 25, 35, -66, 104, -51, -72, -116, -1, 28, -66, -11, -28, -97, -2, -25, -99, 22, -30, 116, 75, 110, 104, 50, 126, 60, -42, 75, -122, -83, 48, 95, 21, 125, -121, -27, 117, 38, -83, 96, 111, -90, 15, -75, 25, 13, 38, -34, 90, 124, 105, -75, -80, 29, -66, 35, 66, 125, 15, 7, -51, -102, -83, -89, 19, 41, -7, -42, 101, 60, 125, 30, 107, 117, -55, 3, 99, 52, 46, -120, 62, -127, -89, -1};
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
    msg.setTimeStamp(0.985773226317);
    msg.setSource(1717U);
    msg.setSourceEntity(134U);
    msg.setDestination(54261U);
    msg.setDestinationEntity(248U);
    msg.seq = 2068750109U;
    msg.state = 36U;
    msg.error.assign("MHJHRVTYBOCDQOQFGFSBIVSJPZYQIUJLRCJHGQJUEAUWAVCSCFQPVGIVOPFYNPCYVTLMOLSATUUICZQVCHTLLXKYAWQFOQIKYUAJNKGWKZAEXJQTU");

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
    msg.setTimeStamp(0.275201512283);
    msg.setSource(34455U);
    msg.setSourceEntity(195U);
    msg.setDestination(44441U);
    msg.setDestinationEntity(17U);
    msg.seq = 3180619816U;
    msg.state = 107U;
    msg.error.assign("TYICEWNTUJWSTHZUMRVBMCPGPRSAHBDHKXZWKVZHSCHBB");

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
    msg.setTimeStamp(0.931499114707);
    msg.setSource(53756U);
    msg.setSourceEntity(216U);
    msg.setDestination(14364U);
    msg.setDestinationEntity(65U);
    msg.seq = 3590558781U;
    msg.state = 60U;
    msg.error.assign("GZNPNMETZISEVNXGJIYJYYWRPANJAVUSIIBYNLCTNHSEZBMGMWHMDJUGQVOFAPZDTKCHQDBRSYMJFTXCILFWRLVMKKDSUJKRQNODFPAPQZWXBPVKRBTAOLWQRUXYDZLVAKRYHAFUJIKWLSVRKGOSHTCZEIQMEJDCBVBETNHAEEYGCJQZGJWCFEBKMOQOOUGKQYUBCWLNSWGHRZSDTITPXMMFLUCXQVBPHPDILUOWHZGRDXVOCTHFFEFX");

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
    msg.setTimeStamp(0.180936285111);
    msg.setSource(5952U);
    msg.setSourceEntity(188U);
    msg.setDestination(52576U);
    msg.setDestinationEntity(59U);
    msg.origin.assign("ATWOUAAJDZOFKTTJKMYRNFGCMDZYLMOUXBZYPKHZLYXWNFGBWPDQAEISCJXBLRIQMSNEBOBOGUVZWCUPLBUHMXFXPFATBFCLQYRNRZKRLJQIJHYBWEUWVVNZLAPFTQEJHGTUHQMUJNCYVSIMEEGVVPQXNESSRCGCHRGKJSEXPIDFIWOVLDBOVOTERXZQIRPSHPSOCGZDKIWHFMGMJUKBQLIPXOKYVKRTZCJMDANWHTITCAUDHGDAYK");
    msg.text.assign("KTIBPXZOYTOYNHEBTWKYRBXEFKDEHRULBVXUAYLIWMWLTCOCRJNARRVSXWJAPWSUSJQMTBMHFDZXQJTDGBJVHCKDQLRUCCJGZLLOEYTNXNEDOAIBPPXPLNGLMLTCVFCEIDKCQFEMDQUIJXTSGZFHZYFKZDMQJQHBFPNIUMQWCRJUNOGAYPBIINLRSVPYFEUWXRSAPYKVZZFNJETGUDPYSAOHZWASICOAQNKVHVUMXVMWKOFHISWZSORADKE");

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
    msg.setTimeStamp(0.261415795155);
    msg.setSource(54651U);
    msg.setSourceEntity(144U);
    msg.setDestination(35330U);
    msg.setDestinationEntity(149U);
    msg.origin.assign("GSNCJEGEYZQJWMFFYYJNCHZAGXMBBLNOLDROJRHWOBFDYIKUUAKDFGGTLHWDHNFAWXGKOMUQNJQWVOJBZYGNXIUREZTYHTCBQKMIRLKKEXDNPQDVPXCVAVJPRHGNNUFPIVSZDGDTIXDQUPLPUETLKHVYO");
    msg.text.assign("HCMIMOIUWPFNKSOKVVUEKJYJLAZCDXSQHWZZJLGUCLFSWOSMOFHVWEEYGAZUEEDJZRXBNHSYFEVXHDLGDSAWWNLZYEJIPRVXXYBIYGUPENBBMRTKSZB");

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
    msg.setTimeStamp(0.527593579641);
    msg.setSource(12059U);
    msg.setSourceEntity(128U);
    msg.setDestination(36542U);
    msg.setDestinationEntity(187U);
    msg.origin.assign("YURVWZYYMTZUXSTTGOLUDYNBXDBQFJOIQPYHHXTJOEVMMLEQAUFCLTMJWDBMLZCWLPKYASIQSIVMUUUTNXDCNREBTPCYZSFPQJMVHISAYLNRTKKUJEPRZCKXKHUNNDATXCWGVGLLQBPQCXSMSIEWJINZWYVWBIMHRITEBCZDGODOGWRVCGXWAOPXMJJGNRLAGLOE");
    msg.text.assign("MYVWBPWCJIUHSUQUJCVVOEGFDNIOLPJAIAYBVOBRQYFZWERGPWBHRINFGEMSKMQSMDLVOSBFVWJYHHJSHEAQBODEDLXCTVHPEKFCUCCKHRPRPWSPLFZQMFKATXBTXTXPXZKYUUIAIGFNZMNXTRNEGBCNVDLZJNQOOHARZWJMDTDNEHZCWNGAWMKDXTPMIUQASFJKBKYHQLLBJYDTONOLS");

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
    msg.setTimeStamp(0.666881942033);
    msg.setSource(44923U);
    msg.setSourceEntity(150U);
    msg.setDestination(14907U);
    msg.setDestinationEntity(33U);
    msg.origin.assign("SFAIZLYIAPHTJBDJWGRQUBWBSWEWFYPMTCLRHTKMUUJTXBNMDZAMZYRGACZCPFOZERVXKINBHUQYQMNRFDLLEQMVXSZSJVYVECCFOOGUVKSHDMEKLJSWMUARPDLIOQPYIDENGCWHJVXUNKAIPNTLOSOLBMBUEYAW");
    msg.htime = 0.900452556479;
    msg.lat = 0.722363851871;
    msg.lon = 0.387994559644;
    const char tmp_msg_0[] = {94, -39, -71, 16, 66, 56, -25, 104, -21, 3, 31, 89, 1, -85, -125, -13, 47, -88, -96, 35, -9, -20, -41, 79, -34, 92, -58, 80, 6, -9, -1, -37, 41, 27, 33, -40, 67, 101, -62, -4, 100, 103, -34, 120, -34, -115, 66, 57, -41, 94, -66, 91, 20, 78, -28, -60, 44, -122, 85, 46, 78, -86, 17, -35, 15, -22, 70, -30, 21, 68, 33, 73, -120, 120, 8, 96, -64, 48, 125, -8, -83, -32};
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
    msg.setTimeStamp(0.983827899217);
    msg.setSource(51069U);
    msg.setSourceEntity(189U);
    msg.setDestination(19949U);
    msg.setDestinationEntity(56U);
    msg.origin.assign("BHPRUTIZCADXGBSDXQQJTGKWAOMLITACBHKAPPMILOXHJHNKLFOYDRSUYGRXJTFLEJNFGNTFQFEHZPRYAVVKPSQRTYTLNXGMYWBRLMEBMRPYTGXXFJVWVSDWSRPNINWQUISAIMVNVDVLVVKMZURUFZHAWSNFKQOHADCCFGYDELXDCIEIJHKAKKUZD");
    msg.htime = 0.523142509901;
    msg.lat = 0.395192213166;
    msg.lon = 0.857168350053;
    const char tmp_msg_0[] = {-41, -100, -41, -86, -128, 2, 91, 65, 58, -22, 15, -35, 54, -98, 103, -22, 44, 33, 9, -77, -54, -13, 90, -58, 111, 0, 5, 88, 29, -82, -10, -19, -62, 3, -51, -45, -106, -71, 44, -112, -101, -128, -51, -108, 88, -11, 97, -61, 47, 7, -65, -33, -125, 60, -98, -122, -19, 92, -118, -70, 51, -126, 33, -69, -93, -7, 41, 50, -25, 44, 103, 42, -95, -114, -42, -125, -80, 118, 54, -47, -89, 22, -58, -81, -35, -105, -36, -64, -4, -9, 21, -105, 0, 11, -85, -52, -104, -27, 63, 71, -49, -96, -114, -41, -43, -104, 11, 45, 110, 115, -123, 6, -102, 93, 115, 63, 2, 91, -84, -83, -110, -51, 3, -13, 87, -118, -79, 68, -16, 45, -107, -93, -13, 49, 62, 45, -82, -72, -41, -29, 16, 35, -63, 5, -62, -87, 40, 61, -27, -101, 62, -121, 70, 14, -64, 87, -42, 15, -116, -92, 0, 57, 21, 37, -28, -37, 93, 86, 35, 98, 83, -99, 7, 89, 96, 78, 83, -46, 25, -3, 100, -27, 105, 80, 27, -29, 28, 64, -95, 58, -68, 51, -78, -43, -109, 81, 82, -89, 15, -84, 26, -56, 90, 47, -118, 12, 57, -120, -25, 64, -6, -88, -99, -93, 11, 16, -14, 10, 13, 60, 16, -77, -62, 99, -122, -106, -12, 60, -80, 53, -86, -79, 76, 96};
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
    msg.setTimeStamp(0.153299659086);
    msg.setSource(42697U);
    msg.setSourceEntity(173U);
    msg.setDestination(30876U);
    msg.setDestinationEntity(63U);
    msg.origin.assign("OMJQPREGDBSRIOZMVMVQISKBTDCQVPFQBXLWZQKGIRZNNLJFJCPFJMUENXDSUGTIOTRVZDWVLOOPXYXYERHUWECDBIJXYJFCTHOJHHGAKRNZPARBELGGOHLGUAUMFZIZYALITMHCJDISVPNGHSCHAWWYSZBLANQNAWMAVKWTRYBMFQOTPUDOTDPQWAMFEMLYZNYUXCUPDPNDXUKYVFELEKFSSORWFCSKLGVWKKBBXNCJRKESAJTVQGXQITY");
    msg.htime = 0.0232483497204;
    msg.lat = 0.833743124047;
    msg.lon = 0.0747488276503;
    const char tmp_msg_0[] = {38, -102, -116, 105, -121, 56, -10, 62, 11, -67, -98, -68, -106, 84, 13, -125, 85, -53, 123, 65, 8, 63, -62, -128, -58, -102, -79, 2, -31, -122, 65, 118, -102, 46, -76, -117, -40, 110, 50, 26, -48, 20, -12, 90, 17, -14, -23, -117, 100, -111, 11, 125, 62, -57, 24, 79, -87, -85, 95, 12, 104, 8, -2, -91, -89, -121, -79, 76, -63, -62, -25, 83, -13, 102, -55, 100, 65, -118, 86, 54, -74, 97, 61, 87, -125, 72, 52, -65, 49, -123, 9, 88, 41, -85, 112, 21, -39, -120, 35, 104, 87, -53, -15, 102, -45, -37, -21, -124, -117, 7, -110, 103, 72, -52, -18, 63};
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
    msg.setTimeStamp(0.337716069462);
    msg.setSource(9224U);
    msg.setSourceEntity(14U);
    msg.setDestination(42816U);
    msg.setDestinationEntity(57U);
    msg.req_id = 53576U;
    msg.ttl = 63355U;
    msg.destination.assign("PEGVILUGBQWYVXOINEDCTZKBZDFPALRTCCUQYNUKFXSYMBBMFZEWDEORAXJXNBPPOUARWVCJMIBTFJHHRUURAHHLRENVKWCYKMNOUITSAFEQKMGDHKSMQDGHIGKV");
    const char tmp_msg_0[] = {-126, 3, 100, -76, -38, -36, -32, -83, 46, -24, 100, -16, 117, -85, -127, -120, -40, -128, 99, 33, -126, 1, 118, -29, 73, 111, -83, -44, -85, -116, 46, 69, 41, 6, 6, -24, -75, 8, -97, 18, 60, -49, -118, -26, -55, 24, -98, -71, -122, 67, -39, -115};
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
    msg.setTimeStamp(0.654696260524);
    msg.setSource(56487U);
    msg.setSourceEntity(231U);
    msg.setDestination(25214U);
    msg.setDestinationEntity(73U);
    msg.req_id = 20436U;
    msg.ttl = 20884U;
    msg.destination.assign("URSPKIGPEMXNXNWYVKLHVCJYZPXWCACPUMMIULQAWRFWTXHOFBKEJCANOLSOYPGICPDSZRVYVMDNTCVOFVRFAUSJHUBDJEFJBFIGSVGALADZUNWQQFUFSJVXKZESXBSVZQLBQCNWPJGEBEARONYRQNZYWGUXQGINOBVURQFSHK");
    const char tmp_msg_0[] = {38, -50, -45, -75, 110, -89, 59, -46, 58, 104, 57, -64, -108, 124, 69, -35, 110, 76, 20, -9, -100, 108, -56, 27, -7, -66, -122, 21, -108, -78, 57, 28, 14, 27, -102, 92, 25, -78, 94, 73, 30, -5, 124, -13, -50, 5, -56, -44, -58, 3, 111, 101, 84, -20, 4, -110, 68, 15, -102, -79, -43, -3, 77, -72, -13, 9, -75, 122, -13, 107, 66, -119, -122, -9, -49, 37, -99, -45, -36, 72};
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
    msg.setTimeStamp(0.258976634913);
    msg.setSource(17341U);
    msg.setSourceEntity(63U);
    msg.setDestination(50123U);
    msg.setDestinationEntity(9U);
    msg.req_id = 64896U;
    msg.ttl = 34945U;
    msg.destination.assign("TDDGSJZJFSCOKYQYCIVJFKROMQKRBPSMVEPCRDPANETGNCIPIJHCQBOBOMEDNXURBWVKVFNZTWEMYUBZNPXMRSUDMLEYOHFLETIRDQNORGCADFTZZAJILULZHKQKBXWPGLSTDHFBHMBZCJIVQLWHLXSBCGEZEAXHWKMJXWDVISUWHPYLWMDAXPJPGXQIINQZIRTLCKGATYSPVFLAWOAV");
    const char tmp_msg_0[] = {99, -128, -24, 51, 15, -19, -94, 118, 38, 65, 96, 103, 22, -6, 48, 111, -127, -128, -44, -111, 20, -118, 72, -51, -89, 0, 3, -74, -113, -74, 86, 42, -115, -35, 10, 99, 60, 39, 27, -21, 62, 11, 35, -19, -47, -93, 42, -126, 59, -43, -49, -2, 70, 65, 32, -115, -24, -121, 83, 84, 71, 75, 120, 119, -93, -74, -115, -120, 11, -122, -44, -11, 14, -109, -44, -55, -76, -84, 59, -105, -82, 80, -59, 39, 16, -64, -113, 102, -124, 107, -8, 10, -84, 28, -37, 105, 101, -38, 87, 103, 96, 76, 13, 46, -93, 69, -44, -98, 77, 25, 89, -110, 91, -92, 45, -117, 61, 85, -10, -41, 60, 79, -3, 21, -82, 28, 0, -118, 1, -60, 90, 59, 118, -19, 82, 109, -28, -103, 119, -53, 50, -118, -69, 22, -14, -85, -103, -41, 72, -5, -8, -123, -2, -53, -54, 65, -60, -126, 113, 56, -91, 73, -91, -80, 22, 121, -49, 57, -12, -27, 68, -99, -119, -127, -14, 36, 24, -66, 113, 109, -96, 25, 21, -74, -77, -103, 37, -105, -34, 97, -78, -51, -115, -114, 100, -58, 81, 19, -104, 73, -98, 113, -33, 123, 21, 58, -90, 115, 65, -114, 92, -52, 106, 25, -24, 46, 84, 108, -98, 98, 29, -70, -85, 108, 79, 113, -8, 110, 59, 81, 54, 53, -103, 108, -22, 102, -61, -108, -116, 50, -3, -74, 92, 24, 28, -28, -17, -115, 5, -15, -26, 55};
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
    msg.setTimeStamp(0.146803460414);
    msg.setSource(51190U);
    msg.setSourceEntity(132U);
    msg.setDestination(3499U);
    msg.setDestinationEntity(27U);
    msg.req_id = 1868U;
    msg.status = 54U;
    msg.text.assign("DTVDXITUAWBWASDJUTSQQLUJUYMXBRTMNPTEGSEISGEFHROZIRCBBIZKTSLXQNEHUVYIMKXPSQFEUSQOKPSAGVBXYUYRIRFNZOHFEPAYCHPKFHBCEFCWUCPWGBZJWAOJNTGLQIBVAPXAFJVGYYNPKFDACKOMKMRQOXXFDEPTKNNLUARICWTRQLKWEHGKEICZRMZLOQYDONNMVMLHZYOYVSMALP");

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
    msg.setTimeStamp(0.117185818822);
    msg.setSource(11887U);
    msg.setSourceEntity(130U);
    msg.setDestination(59302U);
    msg.setDestinationEntity(216U);
    msg.req_id = 13137U;
    msg.status = 167U;
    msg.text.assign("ZCUZARGXZJR");

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
    msg.setTimeStamp(0.0532574622795);
    msg.setSource(56053U);
    msg.setSourceEntity(66U);
    msg.setDestination(190U);
    msg.setDestinationEntity(45U);
    msg.req_id = 53094U;
    msg.status = 145U;
    msg.text.assign("DODNRNWLVWW");

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
    msg.setTimeStamp(0.559192273715);
    msg.setSource(7116U);
    msg.setSourceEntity(161U);
    msg.setDestination(32148U);
    msg.setDestinationEntity(140U);
    msg.group_name.assign("NHTYOXKJQSPFLTFYKAVFJYWRFDHDAQNHVX");
    msg.links = 3395055557U;

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
    msg.setTimeStamp(0.907475528027);
    msg.setSource(50453U);
    msg.setSourceEntity(148U);
    msg.setDestination(64340U);
    msg.setDestinationEntity(217U);
    msg.group_name.assign("HRKQBCNWENPQGMQXFZPFEBNPNZOHRHRGFWFGWAIYIUDAFUUROTXEBWKVIVYZVJUUHQBXBMYSL");
    msg.links = 2247098623U;

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
    msg.setTimeStamp(0.422608392825);
    msg.setSource(65407U);
    msg.setSourceEntity(228U);
    msg.setDestination(55392U);
    msg.setDestinationEntity(135U);
    msg.group_name.assign("ZSWPOJFOSIHUYNLCGQOPZUJMXAJIFTHLRMILKERBAIADDIOJJVBVBQOGI");
    msg.links = 9385416U;

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
    msg.setTimeStamp(0.887542902872);
    msg.setSource(25840U);
    msg.setSourceEntity(113U);
    msg.setDestination(49885U);
    msg.setDestinationEntity(242U);
    msg.groupname.assign("RGTLMZNVFQVKXOJWKEJYPAUJIWDHBLFUHPOBPVZBBGPOEWOWUPCIDTMLRRLCYMEMYHLZZDFTBDNPNUCCJXIUVNKFITFSYYXIJXGQAYUCAVXRTTZRCSZJQSVBKMHOPYWEQLHFYZYRRVCEZUIBUNETNZEEGTLJHNOGXVGWQAPXJHFXDGMBQDKXSUKLSGQCLDICPXTHSKW");
    msg.action = 17U;
    msg.grouplist.assign("JPVXEODBNXYDFSLHHFXBSWNB");

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
    msg.setTimeStamp(0.212468357937);
    msg.setSource(13948U);
    msg.setSourceEntity(25U);
    msg.setDestination(3565U);
    msg.setDestinationEntity(106U);
    msg.groupname.assign("MNCHRDPTYWXDZHCEIVVYPMEMTTHSUQUXQVWBQVGMNJSHUZLJAGZHMDADOHPAOMQVBFRNWDMMBWXZVXHJKFRJQWRNINSAJFWHBZCPGQYYNXPANISGWKP");
    msg.action = 200U;
    msg.grouplist.assign("JQJEUWJFTLMCTASKFDKWGWCIEZCKZLNNYPALZNEAXO");

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
    msg.setTimeStamp(0.770010664671);
    msg.setSource(47009U);
    msg.setSourceEntity(199U);
    msg.setDestination(35212U);
    msg.setDestinationEntity(32U);
    msg.groupname.assign("CGKSNEGZDXUKJDXMCHVYVJSFGCKSRIUPAMHGQDLVGYHBAMBOSFIHQQESHWYGJPZHJLMBMMRWNNFRCTYZFBOOUYRWBPEPRYELXWBTXMVINWZOZISAGLSIDERQQMXGITLRWFBPJMK");
    msg.action = 107U;
    msg.grouplist.assign("PZHZAXSVGVNCKIYDVEHXVFKNJUEFPTKZBANIFWCTVUWFDNOTGLRDFTLVBOHEAPYHTYSCCMMYUZQYREWRPCZJYURZAEYOQKZAGOUIZKPOQTSMHULSVBCIQOTADRJBXSMJNFGGSHLWGARPZYOMKR");

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
    msg.setTimeStamp(0.0294082042874);
    msg.setSource(5899U);
    msg.setSourceEntity(248U);
    msg.setDestination(20363U);
    msg.setDestinationEntity(40U);
    msg.value = 0.745939951541;
    msg.sys_src = 46514U;

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
    msg.setTimeStamp(0.480912882043);
    msg.setSource(51420U);
    msg.setSourceEntity(205U);
    msg.setDestination(38197U);
    msg.setDestinationEntity(37U);
    msg.value = 0.728671311664;
    msg.sys_src = 17483U;

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
    msg.setTimeStamp(0.177189874426);
    msg.setSource(7132U);
    msg.setSourceEntity(181U);
    msg.setDestination(8706U);
    msg.setDestinationEntity(132U);
    msg.value = 0.125606425701;
    msg.sys_src = 23039U;

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
    msg.setTimeStamp(0.496959610434);
    msg.setSource(49103U);
    msg.setSourceEntity(177U);
    msg.setDestination(53507U);
    msg.setDestinationEntity(241U);
    msg.value = 0.448380357649;
    msg.units = 93U;

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
    msg.setTimeStamp(0.38601872764);
    msg.setSource(25507U);
    msg.setSourceEntity(167U);
    msg.setDestination(3015U);
    msg.setDestinationEntity(13U);
    msg.value = 0.179871638623;
    msg.units = 198U;

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
    msg.setTimeStamp(0.176630928063);
    msg.setSource(36368U);
    msg.setSourceEntity(145U);
    msg.setDestination(27061U);
    msg.setDestinationEntity(9U);
    msg.value = 0.181891609857;
    msg.units = 148U;

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
    msg.setTimeStamp(0.76261387612);
    msg.setSource(34059U);
    msg.setSourceEntity(102U);
    msg.setDestination(27935U);
    msg.setDestinationEntity(242U);
    msg.base_lat = 0.950006414169;
    msg.base_lon = 0.0123056035571;
    msg.base_time = 0.61211608228;

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
    msg.setTimeStamp(0.626894952574);
    msg.setSource(39116U);
    msg.setSourceEntity(245U);
    msg.setDestination(45756U);
    msg.setDestinationEntity(70U);
    msg.base_lat = 0.25300252922;
    msg.base_lon = 0.509736191196;
    msg.base_time = 0.512453072919;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 5334U;
    tmp_msg_0.destination = 3884U;
    tmp_msg_0.timeout = 0.0581722861044;
    IMC::LinkLevel tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.823561107185;
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
    msg.setTimeStamp(0.410566112208);
    msg.setSource(41869U);
    msg.setSourceEntity(2U);
    msg.setDestination(28867U);
    msg.setDestinationEntity(76U);
    msg.base_lat = 0.0423086557832;
    msg.base_lon = 0.241718092878;
    msg.base_time = 0.254939111005;

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
    msg.setTimeStamp(0.0814002580571);
    msg.setSource(40571U);
    msg.setSourceEntity(240U);
    msg.setDestination(7886U);
    msg.setDestinationEntity(140U);
    msg.base_lat = 0.574213995785;
    msg.base_lon = 0.119805398162;
    msg.base_time = 0.842807811775;
    const char tmp_msg_0[] = {-88, -64, 31, -110, 28, 3, -97, -100, 50, 83, -78, 12, -46, 125, 124, 6, 78, -37, -124, 78, 56, -55, 37, 97, 85, 88, 45, 21, 31, 18, -99, -54, -10, -7, -98, 25, -50, -51, -32, -60, -78, 51, -58, 41, 91, 105, 73, 72, -37, -26, -115, 5, -42, 90, 31, -33, 34, -81, -32, -65, -50, -19, 104, -62, -13, 24, -72, 115, 102, -42, 31, 52, -66, -18, -38, -118, 19, 9, -66, -104, -28, -27, 12, -27, 18, 43, 76, -33, 108, 22, -119, -98, 71, 30, -79, 11, 22, 102, 114, -128, -13, 22, -63, 97, -115, 44, -73, -48, 5, -81, 55, 12, 24, 87, 70, 8, 23, -79, -45, -117, 121, 84, 84, 21, 38, 26, 80, -23, -5, 109, -68, 29, -11, 1, -126, -36, -36, -15, 108, 62, 69, -100, 92, -14, -74, -116, 119, -56, 5, 24, 101, 116, -107, -127, 126, 2, 7, 16, -111, -92, -102, 92, 38, -58, -97, -45, -117, -41, -69, 26};
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
    msg.setTimeStamp(0.853829773119);
    msg.setSource(37310U);
    msg.setSourceEntity(40U);
    msg.setDestination(26554U);
    msg.setDestinationEntity(185U);
    msg.base_lat = 0.378285399855;
    msg.base_lon = 0.891135020129;
    msg.base_time = 0.751757169589;
    const char tmp_msg_0[] = {101, -46, -27, -56, 71, -38, -18, 80, 38, -72, -27, -58, 119, -60, 64, 110, 67, 95, -120, -102, -53, 126, -127, 94, 5, 51, -40, 67, -32, -17, -51, 40, -101, -120, 23, -105, -93, 42, -85, 77, 123, 44, 51, 123, -127, 72, -56, -111, -76, 110, -59, -33, 7, -57, -72, -83, -34, -116, -23, 20, 40, -23, 97, 122, -31, 94, 45, -15, -99, -28, -6, 78, -115, 15, 94, -114, 123, 124, 21, -35, -25, -40, -100, 84, 72, -85, 17, 107, -74, -42, 75, -82, -42, 91, -9, -26, -38, 50, 31, -59, -28, 105, -2, -68, -93, -44, -42, -41, -74, -85, -74, 98, 103, -60, -128, -75, -25, -6, 115, 72, -21, 14, 126, 27, 112, -123, 101, 19, -93, -24, 64, 26, -11, -118, -27, 73, 107, -121, 36, 17, -96, -34, 36, 36, -25, 68, 74, -79, 7, 13, 22, 1, 80, 24, -32, -10, -13, 64, 54, -128, 108, 45, -99, -89, -4, 123, 59, 55, 57, -8, 124, -63, -42, -69, -11, 66, 26, 83, -89, 32, 65, 36, -19, -25, -52, 70, -124, 37, 116, -97, -28, 105, -75, 100, 102, 40, 27, 33, -58, -43, 96, 27, 57, -103, 108, 5, 23, -85, 43, -11, 96, 53, -107, -123, -2, -116, -80, -64, 23, -125, -97, 26, -84, -80, 47, 121, 79, 89, -119, -128, -38, 27, 6, 37};
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
    msg.setTimeStamp(0.784911390125);
    msg.setSource(30315U);
    msg.setSourceEntity(120U);
    msg.setDestination(57819U);
    msg.setDestinationEntity(0U);
    msg.base_lat = 0.502508518494;
    msg.base_lon = 0.890471130874;
    msg.base_time = 0.147472079802;
    const char tmp_msg_0[] = {-22, 80, 102, 89, -29, 23, 43, -57, -62, 15, 78, -126, 48, -125, -119, 16, 41, -23, 89, -13, -116, -6, -16, -13, -21, -122, -65, 121, -84, -51, 63, 46};
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
    msg.setTimeStamp(0.752758281656);
    msg.setSource(63846U);
    msg.setSourceEntity(96U);
    msg.setDestination(32733U);
    msg.setDestinationEntity(206U);
    msg.sys_id = 4291U;
    msg.priority = -27;
    msg.x = 4060;
    msg.y = -21902;
    msg.z = 5798;
    msg.t = -27295;
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.450155425296;
    tmp_msg_0.y = 0.0177549358619;
    tmp_msg_0.z = 0.0237382438203;
    tmp_msg_0.phi = 0.684583504513;
    tmp_msg_0.theta = 0.576610399419;
    tmp_msg_0.psi = 0.871871648677;
    tmp_msg_0.p = 0.1275228804;
    tmp_msg_0.q = 0.0923009359173;
    tmp_msg_0.r = 0.675017685735;
    tmp_msg_0.u = 0.561041181142;
    tmp_msg_0.v = 0.944179857646;
    tmp_msg_0.w = 0.729709846712;
    tmp_msg_0.bias_psi = 0.810163741582;
    tmp_msg_0.bias_r = 0.600535036688;
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
    msg.setTimeStamp(0.838320295393);
    msg.setSource(63055U);
    msg.setSourceEntity(133U);
    msg.setDestination(56323U);
    msg.setDestinationEntity(246U);
    msg.sys_id = 54844U;
    msg.priority = 5;
    msg.x = -28803;
    msg.y = -784;
    msg.z = 25124;
    msg.t = -23146;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 71U;
    tmp_msg_0.error_count = 23U;
    tmp_msg_0.error_ents.assign("FDOETVRBVYOGYXAJINTYHGMIUSNNGUSCUHPEEYIAYVJSHUCAMBBBQHFSFSITNRXZZRDJIVERKUNRXRDQRTXVSQSSCAFXFWWCVPGDHFYZKXOHDARKYNDBZBCQDZFDTMCXPBKJMTKBLSFRBRLWMEY");
    tmp_msg_0.maneuver_type = 9919U;
    tmp_msg_0.maneuver_stime = 0.0986045381063;
    tmp_msg_0.maneuver_eta = 40657U;
    tmp_msg_0.control_loops = 1002694299U;
    tmp_msg_0.flags = 79U;
    tmp_msg_0.last_error.assign("MKFCGBQLIORFBNZJIRNQLMQCYRQFMZWAKOENWIUEHVUYZX");
    tmp_msg_0.last_error_time = 0.529776300917;
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
    msg.setTimeStamp(0.0225593842052);
    msg.setSource(34499U);
    msg.setSourceEntity(65U);
    msg.setDestination(28961U);
    msg.setDestinationEntity(62U);
    msg.sys_id = 1198U;
    msg.priority = 13;
    msg.x = 17305;
    msg.y = 10426;
    msg.z = 30283;
    msg.t = 30733;
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 227U;
    tmp_msg_0.x = 0.974453007319;
    tmp_msg_0.y = 0.52881890175;
    tmp_msg_0.z = 0.542807539897;
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
    msg.setTimeStamp(0.695084384812);
    msg.setSource(45465U);
    msg.setSourceEntity(229U);
    msg.setDestination(37416U);
    msg.setDestinationEntity(36U);
    msg.req_id = 34497U;
    msg.type = 241U;
    msg.max_size = 35888U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0180668822338;
    tmp_msg_0.base_lon = 0.205820239657;
    tmp_msg_0.base_time = 0.405172269154;
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
    msg.setTimeStamp(0.179164497744);
    msg.setSource(51768U);
    msg.setSourceEntity(28U);
    msg.setDestination(33152U);
    msg.setDestinationEntity(61U);
    msg.req_id = 15259U;
    msg.type = 56U;
    msg.max_size = 57984U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.223729319436;
    tmp_msg_0.base_lon = 0.598476679213;
    tmp_msg_0.base_time = 0.656556772199;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 63778U;
    tmp_tmp_msg_0_0.priority = -80;
    tmp_tmp_msg_0_0.x = 849;
    tmp_tmp_msg_0_0.y = 18127;
    tmp_tmp_msg_0_0.z = 18545;
    tmp_tmp_msg_0_0.t = 18960;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.619347650597;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 62U;
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
    msg.setTimeStamp(0.551030079467);
    msg.setSource(64622U);
    msg.setSourceEntity(216U);
    msg.setDestination(63275U);
    msg.setDestinationEntity(146U);
    msg.req_id = 47363U;
    msg.type = 250U;
    msg.max_size = 9666U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.96184883444;
    tmp_msg_0.base_lon = 0.855874208188;
    tmp_msg_0.base_time = 0.0504949166361;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 62488U;
    tmp_tmp_msg_0_0.destination = 25383U;
    tmp_tmp_msg_0_0.timeout = 0.216165924623;
    IMC::Temperature tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.308429345127;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.265533882073);
    msg.setSource(61265U);
    msg.setSourceEntity(205U);
    msg.setDestination(11218U);
    msg.setDestinationEntity(180U);
    msg.original_source = 56746U;
    msg.destination = 7590U;
    msg.timeout = 0.956623437341;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.339271764947;
    tmp_msg_0.lat = 0.0621686035777;
    tmp_msg_0.lon = 0.459968702564;
    tmp_msg_0.z = 0.511432603501;
    tmp_msg_0.z_units = 94U;
    tmp_msg_0.travel_z = 0.274885759123;
    tmp_msg_0.travel_z_units = 8U;
    tmp_msg_0.delayed = 105U;
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
    msg.setTimeStamp(0.753574186619);
    msg.setSource(13204U);
    msg.setSourceEntity(55U);
    msg.setDestination(58210U);
    msg.setDestinationEntity(228U);
    msg.original_source = 49490U;
    msg.destination = 50667U;
    msg.timeout = 0.63523538896;
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 105U;
    tmp_msg_0.frequency = 867962680U;
    tmp_msg_0.min_range = 46148U;
    tmp_msg_0.max_range = 5378U;
    tmp_msg_0.bits_per_point = 23U;
    tmp_msg_0.scale_factor = 0.889591515381;
    const char tmp_tmp_msg_0_0[] = {-5, -39, 61, -112, -67, 81, 108, 73, -83, 75, 70, -91, -27, 11, -93, -41, -30, 94, -24, -86, 81, 68, -63, -82, -7, 59, -58, 84, 68, 17, 117, 82, 13, 5, 19, 73, 21, -113, -26, -37, -44, 44, -43, -92, 110};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.429854009841);
    msg.setSource(53383U);
    msg.setSourceEntity(174U);
    msg.setDestination(6506U);
    msg.setDestinationEntity(79U);
    msg.original_source = 3394U;
    msg.destination = 63953U;
    msg.timeout = 0.691314665951;
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("LTQVNQXDEHZNWBJKKBFPPPDRZYTNALGQDEAAXNBHOOMOYXFIJMCBCWRIFXLBUNJZXTLHGNKONESDZRXQQBEKBNAFKMMQUFHYAHCMYNDKRLISZRIHIAUPKVXMMJWXICPOCAYAILXRARFSJBYIVUEPVJWGQFZWNLODMWLTPCWRTJQGSZKJOFSOGSEVHRZPUDUSZYWVOT");
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
    msg.setTimeStamp(0.452440615394);
    msg.setSource(43855U);
    msg.setSourceEntity(161U);
    msg.setDestination(59975U);
    msg.setDestinationEntity(75U);
    msg.type = 8U;
    msg.comm_interface = 14596U;
    msg.model = 24876U;
    msg.list.assign("ZHZGQSBWZPQMZVMKDFAWDHRYHGXFCTUFUAEQMREYXLLYGXQLWWVBPYREIUROVTILKKNGXPIMRPCUDJPGCQAWSBBKGVPGSOISWUURLIPZLNPNBCJRAUIDYOQALTXLIBYKZOEFDTXTUYHNYIAOETYOUZFOUFJCJLOVNWQSMDAGCLHFOFQNESJGK");

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
    msg.setTimeStamp(0.602797161902);
    msg.setSource(65428U);
    msg.setSourceEntity(180U);
    msg.setDestination(25655U);
    msg.setDestinationEntity(117U);
    msg.type = 19U;
    msg.comm_interface = 26249U;
    msg.model = 16849U;
    msg.list.assign("CZMWEQHXLJJYVVBPNFQDKMYLQTGLGVCSSXHZOMWEFRJ");

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
    msg.setTimeStamp(0.831923341621);
    msg.setSource(23131U);
    msg.setSourceEntity(195U);
    msg.setDestination(14188U);
    msg.setDestinationEntity(62U);
    msg.type = 18U;
    msg.comm_interface = 307U;
    msg.model = 3522U;
    msg.list.assign("SVYVKLMZKVIJPFUGHUAJYHQWNVBKCERHANNAXYYDEWJYIDDJTJWPTTJIRZLCQZZQMYEKHHVIQIYFJIZHAZUULYCGFMPSGSXDBUEKRXFROBBGVRJYCRGJMXOCMGDQADSWCDTRGFDSGOLHPFQAGVDNXNXOETPWNYXCIEDKNXFFEVSWKONPMEZLSIAANWOMZVQRTHZAOMJTSOHQLEWBPUUBFPURFSSXTKPHLNOUPBV");

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
    msg.setTimeStamp(0.660625261565);
    msg.setSource(47219U);
    msg.setSourceEntity(231U);
    msg.setDestination(494U);
    msg.setDestinationEntity(103U);
    msg.type = 116U;
    msg.req_id = 1431774062U;
    msg.ttl = 30966U;
    msg.code = 45U;
    msg.destination.assign("LOLJWSRPZXBGHJMEUSAQTBSESFRXOXALCZMXOHRHRCZLHBFQEWYVYIYNPDWIHSXKEUIEOKAZQNAHJIWGGGRKUFKUUQNYQCYMSSVJOA");
    msg.source.assign("JXVAMWXCNNODLWSSDBSTXAWOHKNRIVZHJQOVJBGMSAAULCPRSUHFHTOVUTKCYMFTZGMEPMYUTEDDECMRTXVQRZPNHFKZBPQDYYKTOQKIRVLYCJAJWRGKJVGEXPINNMBKZZWRLPZFBDJSGRBMOIVWIBUPVGUDIPENGIGYHFJXVKRACNYTP");
    msg.acknowledge = 37U;
    msg.status = 253U;
    const char tmp_msg_0[] = {-117, -82, -94, 98, 89, 4, -121, -23, -11, -31, 114, -7, 37, -68, 114, -92, -44, 79, 123, 110, -81, 123, -3, 102, 112, 73, 21, -43, -82, 68, 27, -121, 74, 124, -111, 14, 85, 7, 66, -8, 103, 35, -42, 119, -15, -27, 63, 52, -42, 80, -128, 71, 63, 43, 101, -125, 121, 4, -12, 69, 117, 65, -93, 120, -90, 25, -107, -110, -96, 51, -29, 75, -14, 24, 11, -26, -8, -75, 95, -125, -29, -118, -77, -79, -58, 38, -67, 93, 76, -62, -105, 20, -123, 9, -120, -88, 3, -78, -93, 40, -110, 116, -119, 41, -119, 26, -90, -89, -100, 28, 76, 115, 86, -14, 74, -74, 81, -3, 69, -77, -128, 107, -108, 120, -19, -112, -55, -124, 38, -115, -117, 60, 78, 20, 46, 24, -55, 46, 58, 44, -58, 82, -74, 82, 23, -66};
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
    msg.setTimeStamp(0.979989966917);
    msg.setSource(38426U);
    msg.setSourceEntity(215U);
    msg.setDestination(38241U);
    msg.setDestinationEntity(195U);
    msg.type = 107U;
    msg.req_id = 3127536559U;
    msg.ttl = 34890U;
    msg.code = 43U;
    msg.destination.assign("ZPYJRKTDNJEDGVRLEZQORIWVORWXKZATSNHADTYSBAYPHTWQKKWOYVFFCHGBAABUOLQCCSODZYGSJLXFNVHDGBIMGNTEOGWHGXOFBJGMGJSMXZPQYRMCIRFZMXNHFEWDEUXUBTQVPWJDQICNHWSNKHUAIJWKHLUSYSPAPQEGFXKITWEJVFMBCKAOQKNRSHYTBVFLIIPTRPJDUEIRAECLUCBLRLDESLCFMZMKULUOBTXZNPJQUYZMVZD");
    msg.source.assign("ZGNACBQSFNUPIWJQOYFLMMJYIHIICKKYLKDHPVHXHWHSWAQBF");
    msg.acknowledge = 206U;
    msg.status = 27U;
    const char tmp_msg_0[] = {-45, 113, -105, 9, -39, 42, 90, -16, -104, 10, -128, 113, 9, -38, 92, -3, -59};
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
    msg.setTimeStamp(0.679964114994);
    msg.setSource(42946U);
    msg.setSourceEntity(36U);
    msg.setDestination(38193U);
    msg.setDestinationEntity(13U);
    msg.type = 177U;
    msg.req_id = 3175907902U;
    msg.ttl = 51749U;
    msg.code = 164U;
    msg.destination.assign("QJMBITDALKFHUBULLGLHXFRCYUKYAGBOJEFKVMSZOEHWXRADWPBTSNSXOGTFSNYSQQEOLLBUUZFAJEQIFDPJPXXTHYNIDGWOVWWCADEGTRVKACPJAZVEZXDRU");
    msg.source.assign("BNWQIXTMHLWWKQYHQZFVNNSQIKAWVORPCMCZDYJSEGHZNKSAEJOIDOHREUFXTGARCTBWWEENTESYAAHFJVLYYKJWNBOMBRATMKDOT");
    msg.acknowledge = 243U;
    msg.status = 124U;
    const char tmp_msg_0[] = {115, -14, -117, 107, -113, 50, -27, -97, -34, 79, 41, 104, -95, 16, 123, 14, 93, -27, 41, 116, 114, -73, 17, -83, 16, 38, -101, 12, 47, 84, -85, -125, -102, -44, 32, 113, -8, -5, 43, 81, -92, -110, 109, 0, -70, -50, 55, 17, -41, 101, 12, -7, 75, -1, 123, -89, -128, 11, 63, -114, 99, 2, 58, 85, 113, 0, -23, -106, 55, 42, 44, -47, 42, 96, 21, -106, 66, -6, -51, -8, -1, 92, -41, 123, -55, 25, -8, -3, 40, -50, 73, -32, -24, -101, -66, 61, 109, 8, -44, 3, 120, -49};
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
    msg.setTimeStamp(0.726770670387);
    msg.setSource(22445U);
    msg.setSourceEntity(43U);
    msg.setDestination(21931U);
    msg.setDestinationEntity(138U);
    msg.id = 118U;
    msg.range = 0.342363736149;

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
    msg.setTimeStamp(0.574044579334);
    msg.setSource(61870U);
    msg.setSourceEntity(234U);
    msg.setDestination(23688U);
    msg.setDestinationEntity(110U);
    msg.id = 188U;
    msg.range = 0.133866186962;

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
    msg.setTimeStamp(0.250390158352);
    msg.setSource(59519U);
    msg.setSourceEntity(106U);
    msg.setDestination(59568U);
    msg.setDestinationEntity(51U);
    msg.id = 52U;
    msg.range = 0.835719188089;

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
    msg.setTimeStamp(0.162415163704);
    msg.setSource(24955U);
    msg.setSourceEntity(101U);
    msg.setDestination(41466U);
    msg.setDestinationEntity(29U);
    msg.beacon.assign("XCCYRVZAYEENSEDMFAIZOGKILNFSULPFVDPKBHXRWHHRTTYPITZWJUZJJOVWROEMJWEPMMDPPQIUSXTUAINFFTYOWERSSKMWGGZTJJYMVRKSWLYMHRZFUOAVUGCTDLXHDFNUCULBKVCRHXS");
    msg.lat = 0.153942967061;
    msg.lon = 0.0249576986013;
    msg.depth = 0.215986801934;
    msg.query_channel = 195U;
    msg.reply_channel = 105U;
    msg.transponder_delay = 145U;

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
    msg.setTimeStamp(0.350679714874);
    msg.setSource(12536U);
    msg.setSourceEntity(22U);
    msg.setDestination(6091U);
    msg.setDestinationEntity(35U);
    msg.beacon.assign("PTWPEWTRFOXHNEAIGCTVFYQDZWDXFLQARFPTOQVACLADVTGVKMBKLVYMMLRIPRBUQPEZTJACAMD");
    msg.lat = 0.169283742857;
    msg.lon = 0.164029444734;
    msg.depth = 0.742389811237;
    msg.query_channel = 78U;
    msg.reply_channel = 225U;
    msg.transponder_delay = 13U;

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
    msg.setTimeStamp(0.843810255259);
    msg.setSource(45447U);
    msg.setSourceEntity(228U);
    msg.setDestination(29743U);
    msg.setDestinationEntity(205U);
    msg.beacon.assign("NMLWCCPLBVIUNREDXWQXJJGQEDWGXBPZXPAFHIDWNYUC");
    msg.lat = 0.51272447213;
    msg.lon = 0.130781333112;
    msg.depth = 0.68749898543;
    msg.query_channel = 231U;
    msg.reply_channel = 95U;
    msg.transponder_delay = 34U;

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
    msg.setTimeStamp(0.126099095392);
    msg.setSource(45745U);
    msg.setSourceEntity(93U);
    msg.setDestination(48764U);
    msg.setDestinationEntity(151U);
    msg.op = 74U;

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
    msg.setTimeStamp(0.158124085919);
    msg.setSource(62423U);
    msg.setSourceEntity(170U);
    msg.setDestination(50148U);
    msg.setDestinationEntity(34U);
    msg.op = 233U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SGTUFWIVAPCDUUXULBSKLTOVTUFAFNXFKBDBYTEPGADNYRLGTFWRWLVBHMVJCDLGGLHBCQBMITOWQEXZCWURARDIOYJEDLJAXHXQMWJYIMCDXJGPFYGOPMNCGYDNGWUHTEPIXQNWHAUVHNBUKYREBWNZBKOESHKO");
    tmp_msg_0.lat = 0.514959293342;
    tmp_msg_0.lon = 0.130654674437;
    tmp_msg_0.depth = 0.405868189911;
    tmp_msg_0.query_channel = 204U;
    tmp_msg_0.reply_channel = 164U;
    tmp_msg_0.transponder_delay = 220U;
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
    msg.setTimeStamp(0.560668727979);
    msg.setSource(50470U);
    msg.setSourceEntity(226U);
    msg.setDestination(35785U);
    msg.setDestinationEntity(29U);
    msg.op = 124U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TDEDVAAAAYAJURQRCILETSKFRIYYGVCFOBAZWSNTPOLXGFJSGLDHNMVIJMCFWZUOIAYPANJJUSKNOSKEWFUZCIREHEXZRMBLKBBIFSWHWXZIXGXEHTTYFXGSUEWNQQKOGQQRKIKBDIP");
    tmp_msg_0.lat = 0.754127358234;
    tmp_msg_0.lon = 0.230656086772;
    tmp_msg_0.depth = 0.86126722258;
    tmp_msg_0.query_channel = 137U;
    tmp_msg_0.reply_channel = 53U;
    tmp_msg_0.transponder_delay = 24U;
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
    msg.setTimeStamp(0.501684857509);
    msg.setSource(33380U);
    msg.setSourceEntity(19U);
    msg.setDestination(30222U);
    msg.setDestinationEntity(40U);
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 45819U;
    tmp_msg_0.priority = -120;
    tmp_msg_0.x = 23526;
    tmp_msg_0.y = -4388;
    tmp_msg_0.z = 251;
    tmp_msg_0.t = -17156;
    IMC::VehicleLinks tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.localname.assign("QRDLBXORYGXVFFXYMPKVXQIQIORUVNWCKRSMAEGUMZLHBUIKMMCELBNTTMITLDZHOGWNJTSGDIYHXOMUDBKSQYGRNEQHSQHHTJVWZSJLGFWJSARNAYFINRMYTDPYQOZSPHJEPA");
    IMC::Announce tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sys_name.assign("AHTSNWVIQFVFOMGIOKGIWSXDMCNPDTUUMHZZTOEKJWDVOHAIYCKRSRLLIWBETJAKDNMFHDDJKCJL");
    tmp_tmp_tmp_msg_0_0_0.sys_type = 214U;
    tmp_tmp_tmp_msg_0_0_0.owner = 47890U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.884250780729;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.804145556509;
    tmp_tmp_tmp_msg_0_0_0.height = 0.637018216879;
    tmp_tmp_tmp_msg_0_0_0.services.assign("QXWFOWQRWLNHYNELRODPPUACLGXUFTHQZABQDMINKXQZSUSKJTSJTGLEBSZMOHCCFARYTDNCCSTSOSYBXCLKMIXTAKYUBBYWQJJVNHBDHLPCFFBXLEYINFYQRHKOEVVIIUCVDEMPEXVWXRPPTCEHENFTDDYOMXCWQBNUSDSLJVSJZPHOGEIOHRZPKGQAEUVLRVZKKOJMWAKBUZGBDLFFAZWAYPUQKVJNPNXYWAGMHWMOFGITIGJMIGVRRUI");
    tmp_tmp_msg_0_0.links.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.971410054882);
    msg.setSource(27594U);
    msg.setSourceEntity(1U);
    msg.setDestination(63769U);
    msg.setDestinationEntity(84U);
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.978073138693);
    msg.setSource(63620U);
    msg.setSourceEntity(174U);
    msg.setDestination(12849U);
    msg.setDestinationEntity(8U);
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 219U;
    tmp_msg_0.angle = 0.056224352;
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
    msg.setTimeStamp(0.221972137463);
    msg.setSource(3774U);
    msg.setSourceEntity(160U);
    msg.setDestination(25178U);
    msg.setDestinationEntity(203U);
    msg.op = 13U;
    msg.system.assign("VVSLKDABNIIBZUXCYIWURQMVTOWTTDETCVGJHVIOBJKPTZMUYDLQTELHVSYWFMQHFOETDAXSLLZFDIFYZAGBPNQCOKXQDOIPNPDNCFJDTEWBIJZLUNRMVDNKQJAEOFXUCQPKNYYGLUPSMUGDRYEUWFHIMS");
    msg.range = 0.517344796442;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.98799305466;
    tmp_msg_0.z_units = 229U;
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
    msg.setTimeStamp(0.0929936702218);
    msg.setSource(29842U);
    msg.setSourceEntity(187U);
    msg.setDestination(51071U);
    msg.setDestinationEntity(93U);
    msg.op = 225U;
    msg.system.assign("BYHDUXENEHYSVMUKVJWDVWEQXLVTLJDPQDSUFRUJZNPHBVOGXYPALWESKTYITBTFFPYEAKXAXNYJIQJLPKCDIQDQIMSYXRUCDRVHUPCQOIGNOONEBQBSDCFRGRMLXCPCSAZWRFGYMVYJHZZNOMMTTHWORGUBALAMSBJBMAOWGPENVKBQVLZFMEKUTZROGGITSFCLRACRVEQJBAOGTKGKIIKCPHSZFJEZCUHF");
    msg.range = 0.422975815034;
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 134U;
    tmp_msg_0.speed_min = 0.375641856451;
    tmp_msg_0.speed_max = 0.617163822236;
    tmp_msg_0.long_accel = 0.45689738968;
    tmp_msg_0.alt_max_msl = 0.589456742079;
    tmp_msg_0.dive_fraction_max = 0.87883863146;
    tmp_msg_0.climb_fraction_max = 0.914776103495;
    tmp_msg_0.bank_max = 0.172239835887;
    tmp_msg_0.p_max = 0.686445983997;
    tmp_msg_0.pitch_min = 0.805200009903;
    tmp_msg_0.pitch_max = 0.41999774948;
    tmp_msg_0.q_max = 0.830095493546;
    tmp_msg_0.g_min = 0.481031214469;
    tmp_msg_0.g_max = 0.572780872051;
    tmp_msg_0.g_lat_max = 0.88148396351;
    tmp_msg_0.rpm_min = 0.614615614568;
    tmp_msg_0.rpm_max = 0.960925379808;
    tmp_msg_0.rpm_rate_max = 0.520414343066;
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
    msg.setTimeStamp(0.917936078238);
    msg.setSource(3147U);
    msg.setSourceEntity(112U);
    msg.setDestination(10717U);
    msg.setDestinationEntity(142U);
    msg.op = 8U;
    msg.system.assign("KETVZPCXYJRGFDXFTNVXWAWUAJUUAIUNKQZWTRBVWMPCQYNENPSDWDNCIWOXNPFHZOGZVCDQBPRLMENJZYFXPROBGAKGMTSUDBGIRGLXQZUMARVMESSCSIRBTKWFLLFTSMKZSVVMXORSUJEADHGIRDQPIFGLYUQYWMFHBHMLBHVXIVXGEGSDCAXJBCYDTVMNZOEELBJBQUHJPKAC");
    msg.range = 0.650801949583;
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 1430U;
    tmp_msg_0.ttl = 65501U;
    tmp_msg_0.destination.assign("VYYFZKXXHRUETFCKGJSSYZLQY");
    const char tmp_tmp_msg_0_0[] = {-118, 44, 82, -56, -24, 59, 41, 112, 31, -42, 82, -68, -3, -69, -55, 91, -27, 64, -16, -2, -21, 125, 72, -92, 5, 112, -49, 54, -30, 45, 11, -82, -100, -121, 22, -72, -88, -119, -90, 84, 117, -111, -126, -24, -64, -28, -108, 120, 78, 100, -113, -95, 108, -2, 98, -59, -81, 100, 97, -107, 42, 112, 120, 99, 120, 52, -46, -44, -59, -64, -9, -128, -80, 87, 123, -115, -51, -118, -21, -70, -119, 105, -117, 97, 71, -119, 104};
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
    msg.setTimeStamp(0.944166519721);
    msg.setSource(35029U);
    msg.setSourceEntity(168U);
    msg.setDestination(7100U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.694891088667);
    msg.setSource(59640U);
    msg.setSourceEntity(47U);
    msg.setDestination(14822U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.282182151517);
    msg.setSource(57444U);
    msg.setSourceEntity(121U);
    msg.setDestination(58907U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.711454807541);
    msg.setSource(30493U);
    msg.setSourceEntity(237U);
    msg.setDestination(139U);
    msg.setDestinationEntity(154U);
    msg.list.assign("HHYSEOCQYGZXQEPQXPIIPPTKKCCOLSGAFAIWTTNMCJIQBEZUMNBAEZXIDMDREFL");

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
    msg.setTimeStamp(0.276843470669);
    msg.setSource(1142U);
    msg.setSourceEntity(123U);
    msg.setDestination(34576U);
    msg.setDestinationEntity(228U);
    msg.list.assign("XHAAGTBUKQFSOTSAFRAMMGBDUBDJVZYQMOEVIYWXAGUYHGLNFPERZVYTWZYUOLKBJCQLRSXSLICRDUJYUVELGZATNKOMCGNEUCSGVMWJVNKMMBCZPPSDINFDPFNRYCDHEPWRFJFCWMKZUQLBPXT");

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
    msg.setTimeStamp(0.645963684618);
    msg.setSource(39305U);
    msg.setSourceEntity(58U);
    msg.setDestination(53273U);
    msg.setDestinationEntity(152U);
    msg.list.assign("RHJAUMESWHTCGWYCUJYJTOOFLNWVGKMGPSWWSHSKYXWBRHFBIDPVERZSXCHWIPCKVHUCEQGQWLOQJAROSEOXLKN");

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
    msg.setTimeStamp(0.46126322055);
    msg.setSource(56785U);
    msg.setSourceEntity(30U);
    msg.setDestination(44785U);
    msg.setDestinationEntity(78U);
    msg.peer.assign("XBBOYEINHUEPAPNDFAWATJRQFEMGXBDJDCOUHZNNBMLYGUYWSVYZQEZHXNCADUMLQEKZMLHNJGGNZQFOVYRQECYIVCBWLXHDWFWIYZJLAWBPVKRRUKDWIAWLSVRSUGZBKGGMLCBDCJAICTDZYXSWLNETBOSFXPEAKZMORLCIZXSFYVGTQJOJFYXQQMKAEQPHPMILWIPUSCTKVHVJJTOHVHIBFUKSXRPTDMKMTDXGTORTGSVHFSPROUF");
    msg.rssi = 0.23746139317;
    msg.integrity = 25338U;

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
    msg.setTimeStamp(0.894792137406);
    msg.setSource(63310U);
    msg.setSourceEntity(63U);
    msg.setDestination(53415U);
    msg.setDestinationEntity(191U);
    msg.peer.assign("DXGQPNSJEOWOZDECMJXVJHKEQYWFUQUVBTRUAKRJYFMDWIQSAHAPXNMONTMTUZZLWGBNLTDYBIFFJNIKVSUNMCSFWVFTUJFKRAQZBTHHEGWWYTSSNHCMLWJ");
    msg.rssi = 0.812729065735;
    msg.integrity = 20741U;

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
    msg.setTimeStamp(0.720176917895);
    msg.setSource(14116U);
    msg.setSourceEntity(210U);
    msg.setDestination(47665U);
    msg.setDestinationEntity(129U);
    msg.peer.assign("DUDULXSSCTUXUXVKGLTMINUMKOTBGPMIZMCCLGVJUKWFYPTRZLSCCUDRBYWJAIEEKEGQXDSJDDORPQRLRWCXJBAZNXXUCEVGFFGAEJIPNOAXBZ");
    msg.rssi = 0.89443256615;
    msg.integrity = 1635U;

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
    msg.setTimeStamp(0.446446642474);
    msg.setSource(26120U);
    msg.setSourceEntity(47U);
    msg.setDestination(45116U);
    msg.setDestinationEntity(37U);
    msg.value = -17573;

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
    msg.setTimeStamp(0.531321072844);
    msg.setSource(41637U);
    msg.setSourceEntity(50U);
    msg.setDestination(42290U);
    msg.setDestinationEntity(231U);
    msg.value = -11921;

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
    msg.setTimeStamp(0.355584728923);
    msg.setSource(36637U);
    msg.setSourceEntity(168U);
    msg.setDestination(22275U);
    msg.setDestinationEntity(248U);
    msg.value = 22373;

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
    msg.setTimeStamp(0.704674730743);
    msg.setSource(50982U);
    msg.setSourceEntity(114U);
    msg.setDestination(47346U);
    msg.setDestinationEntity(11U);
    msg.value = 0.250210763768;

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
    msg.setTimeStamp(0.157311054198);
    msg.setSource(63064U);
    msg.setSourceEntity(36U);
    msg.setDestination(31638U);
    msg.setDestinationEntity(105U);
    msg.value = 0.84999308483;

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
    msg.setTimeStamp(0.853559801646);
    msg.setSource(10414U);
    msg.setSourceEntity(10U);
    msg.setDestination(3885U);
    msg.setDestinationEntity(179U);
    msg.value = 0.705860456116;

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
    msg.setTimeStamp(0.284836700892);
    msg.setSource(32737U);
    msg.setSourceEntity(127U);
    msg.setDestination(42282U);
    msg.setDestinationEntity(48U);
    msg.value = 0.618302491109;

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
    msg.setTimeStamp(0.00759572089778);
    msg.setSource(59611U);
    msg.setSourceEntity(139U);
    msg.setDestination(48310U);
    msg.setDestinationEntity(59U);
    msg.value = 0.844287226582;

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
    msg.setTimeStamp(0.137337185065);
    msg.setSource(58298U);
    msg.setSourceEntity(75U);
    msg.setDestination(37404U);
    msg.setDestinationEntity(95U);
    msg.value = 0.300396311222;

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
    msg.setTimeStamp(0.095557753609);
    msg.setSource(27931U);
    msg.setSourceEntity(98U);
    msg.setDestination(55195U);
    msg.setDestinationEntity(8U);
    msg.validity = 2362U;
    msg.type = 219U;
    msg.utc_year = 26620U;
    msg.utc_month = 48U;
    msg.utc_day = 176U;
    msg.utc_time = 0.832731559372;
    msg.lat = 0.456245563333;
    msg.lon = 0.888722701124;
    msg.height = 0.547584126634;
    msg.satellites = 155U;
    msg.cog = 0.381071325412;
    msg.sog = 0.748972865376;
    msg.hdop = 0.00709498338546;
    msg.vdop = 0.268372137827;
    msg.hacc = 0.765729413857;
    msg.vacc = 0.741547376341;

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
    msg.setTimeStamp(0.848867856191);
    msg.setSource(24740U);
    msg.setSourceEntity(27U);
    msg.setDestination(14002U);
    msg.setDestinationEntity(16U);
    msg.validity = 42051U;
    msg.type = 52U;
    msg.utc_year = 47208U;
    msg.utc_month = 148U;
    msg.utc_day = 91U;
    msg.utc_time = 0.125080412428;
    msg.lat = 0.790044953774;
    msg.lon = 0.896308774623;
    msg.height = 0.272549667125;
    msg.satellites = 188U;
    msg.cog = 0.279614679471;
    msg.sog = 0.648178194565;
    msg.hdop = 0.125553322178;
    msg.vdop = 0.147300641531;
    msg.hacc = 0.307202058362;
    msg.vacc = 0.404329906318;

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
    msg.setTimeStamp(0.993548412371);
    msg.setSource(57123U);
    msg.setSourceEntity(225U);
    msg.setDestination(21848U);
    msg.setDestinationEntity(143U);
    msg.validity = 44077U;
    msg.type = 44U;
    msg.utc_year = 60202U;
    msg.utc_month = 63U;
    msg.utc_day = 202U;
    msg.utc_time = 0.831400630615;
    msg.lat = 0.406804784719;
    msg.lon = 0.697253267787;
    msg.height = 0.2254704537;
    msg.satellites = 4U;
    msg.cog = 0.264070003032;
    msg.sog = 0.883908871582;
    msg.hdop = 0.717953993683;
    msg.vdop = 0.616761549232;
    msg.hacc = 0.0807846565178;
    msg.vacc = 0.683283943044;

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
    msg.setTimeStamp(0.734747423347);
    msg.setSource(28650U);
    msg.setSourceEntity(132U);
    msg.setDestination(26037U);
    msg.setDestinationEntity(189U);
    msg.time = 0.123075181008;
    msg.phi = 0.341433789308;
    msg.theta = 0.42770314422;
    msg.psi = 0.843161389683;
    msg.psi_magnetic = 0.0959478170153;

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
    msg.setTimeStamp(0.685921829601);
    msg.setSource(64990U);
    msg.setSourceEntity(49U);
    msg.setDestination(31803U);
    msg.setDestinationEntity(82U);
    msg.time = 0.362756693674;
    msg.phi = 0.500350150374;
    msg.theta = 0.325889225976;
    msg.psi = 0.808130319935;
    msg.psi_magnetic = 0.512799729772;

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
    msg.setTimeStamp(0.685398436397);
    msg.setSource(28447U);
    msg.setSourceEntity(249U);
    msg.setDestination(53690U);
    msg.setDestinationEntity(162U);
    msg.time = 0.306031169071;
    msg.phi = 0.468805033175;
    msg.theta = 0.630579838903;
    msg.psi = 0.0979709975883;
    msg.psi_magnetic = 0.0172410381127;

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
    msg.setTimeStamp(0.0762051826545);
    msg.setSource(51667U);
    msg.setSourceEntity(39U);
    msg.setDestination(6178U);
    msg.setDestinationEntity(17U);
    msg.time = 0.0981586904683;
    msg.x = 0.872121654697;
    msg.y = 0.987809034365;
    msg.z = 0.518547917631;
    msg.timestep = 0.48667038635;

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
    msg.setTimeStamp(0.0527462617017);
    msg.setSource(52181U);
    msg.setSourceEntity(113U);
    msg.setDestination(13858U);
    msg.setDestinationEntity(80U);
    msg.time = 0.757185490498;
    msg.x = 0.987839811019;
    msg.y = 0.431835659237;
    msg.z = 0.0191846569482;
    msg.timestep = 0.950827550174;

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
    msg.setTimeStamp(0.608041170529);
    msg.setSource(17797U);
    msg.setSourceEntity(183U);
    msg.setDestination(43979U);
    msg.setDestinationEntity(173U);
    msg.time = 0.288748951335;
    msg.x = 0.0538557305445;
    msg.y = 0.963273319277;
    msg.z = 0.561885503708;
    msg.timestep = 0.872230604692;

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
    msg.setTimeStamp(0.299412261604);
    msg.setSource(63759U);
    msg.setSourceEntity(156U);
    msg.setDestination(33410U);
    msg.setDestinationEntity(81U);
    msg.time = 0.438217085393;
    msg.x = 0.898748378048;
    msg.y = 0.70275471504;
    msg.z = 0.653700222403;

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
    msg.setTimeStamp(0.473114390149);
    msg.setSource(35250U);
    msg.setSourceEntity(173U);
    msg.setDestination(46106U);
    msg.setDestinationEntity(28U);
    msg.time = 0.0727550614888;
    msg.x = 0.210481880405;
    msg.y = 0.0752294038215;
    msg.z = 0.336773485288;

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
    msg.setTimeStamp(0.884634385594);
    msg.setSource(14867U);
    msg.setSourceEntity(129U);
    msg.setDestination(8372U);
    msg.setDestinationEntity(131U);
    msg.time = 0.0319176304183;
    msg.x = 0.554098004145;
    msg.y = 0.324965817724;
    msg.z = 0.895466694873;

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
    msg.setTimeStamp(0.626058578843);
    msg.setSource(33750U);
    msg.setSourceEntity(30U);
    msg.setDestination(15258U);
    msg.setDestinationEntity(9U);
    msg.time = 0.503724088957;
    msg.x = 0.516511722219;
    msg.y = 0.923512641903;
    msg.z = 0.710072016726;

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
    msg.setTimeStamp(0.802728858992);
    msg.setSource(42680U);
    msg.setSourceEntity(5U);
    msg.setDestination(31603U);
    msg.setDestinationEntity(45U);
    msg.time = 0.192011770048;
    msg.x = 0.959141907536;
    msg.y = 0.158087380166;
    msg.z = 0.00151842018086;

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
    msg.setTimeStamp(0.00664592138223);
    msg.setSource(26376U);
    msg.setSourceEntity(61U);
    msg.setDestination(37275U);
    msg.setDestinationEntity(176U);
    msg.time = 0.212105521035;
    msg.x = 0.717100609337;
    msg.y = 0.339004592479;
    msg.z = 0.533999596831;

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
    msg.setTimeStamp(0.110130151945);
    msg.setSource(19244U);
    msg.setSourceEntity(1U);
    msg.setDestination(29561U);
    msg.setDestinationEntity(120U);
    msg.time = 0.590191178695;
    msg.x = 0.581078462745;
    msg.y = 0.0719405407948;
    msg.z = 0.486978052851;

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
    msg.setTimeStamp(0.385646006975);
    msg.setSource(6427U);
    msg.setSourceEntity(122U);
    msg.setDestination(54630U);
    msg.setDestinationEntity(204U);
    msg.time = 0.8248799516;
    msg.x = 0.0385031125322;
    msg.y = 0.62881554655;
    msg.z = 0.707792259878;

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
    msg.setTimeStamp(0.534322442827);
    msg.setSource(55092U);
    msg.setSourceEntity(177U);
    msg.setDestination(57924U);
    msg.setDestinationEntity(141U);
    msg.time = 0.259672120143;
    msg.x = 0.369012419764;
    msg.y = 0.288685885266;
    msg.z = 0.363367461217;

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
    msg.setTimeStamp(0.0348819519011);
    msg.setSource(10866U);
    msg.setSourceEntity(185U);
    msg.setDestination(28964U);
    msg.setDestinationEntity(110U);
    msg.validity = 214U;
    msg.x = 0.383593396855;
    msg.y = 0.795616529824;
    msg.z = 0.445697362326;

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
    msg.setTimeStamp(0.592395869511);
    msg.setSource(49938U);
    msg.setSourceEntity(15U);
    msg.setDestination(33412U);
    msg.setDestinationEntity(233U);
    msg.validity = 250U;
    msg.x = 0.43972587396;
    msg.y = 0.0172538721919;
    msg.z = 0.895194779211;

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
    msg.setTimeStamp(0.600970234372);
    msg.setSource(13035U);
    msg.setSourceEntity(162U);
    msg.setDestination(34663U);
    msg.setDestinationEntity(16U);
    msg.validity = 23U;
    msg.x = 0.973381351269;
    msg.y = 0.969420274498;
    msg.z = 0.675522775449;

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
    msg.setTimeStamp(0.0621489653982);
    msg.setSource(58708U);
    msg.setSourceEntity(164U);
    msg.setDestination(53555U);
    msg.setDestinationEntity(133U);
    msg.validity = 185U;
    msg.x = 0.594734784477;
    msg.y = 0.801938119853;
    msg.z = 0.973175219572;

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
    msg.setTimeStamp(0.188516551508);
    msg.setSource(52239U);
    msg.setSourceEntity(47U);
    msg.setDestination(65U);
    msg.setDestinationEntity(198U);
    msg.validity = 151U;
    msg.x = 0.00138242933688;
    msg.y = 0.9973761256;
    msg.z = 0.370801300418;

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
    msg.setTimeStamp(0.72951844019);
    msg.setSource(30665U);
    msg.setSourceEntity(223U);
    msg.setDestination(4814U);
    msg.setDestinationEntity(13U);
    msg.validity = 235U;
    msg.x = 0.543216965958;
    msg.y = 0.460746927719;
    msg.z = 0.869502429341;

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
    msg.setTimeStamp(0.316958728028);
    msg.setSource(58884U);
    msg.setSourceEntity(197U);
    msg.setDestination(41324U);
    msg.setDestinationEntity(127U);
    msg.time = 0.7699952783;
    msg.x = 0.0196887337456;
    msg.y = 0.498822799851;
    msg.z = 0.160707195013;

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
    msg.setTimeStamp(0.643403116171);
    msg.setSource(31021U);
    msg.setSourceEntity(237U);
    msg.setDestination(19551U);
    msg.setDestinationEntity(220U);
    msg.time = 0.095428080962;
    msg.x = 0.0871883677213;
    msg.y = 0.876223481942;
    msg.z = 0.628011436002;

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
    msg.setTimeStamp(0.166568465088);
    msg.setSource(22561U);
    msg.setSourceEntity(34U);
    msg.setDestination(59772U);
    msg.setDestinationEntity(89U);
    msg.time = 0.4181513597;
    msg.x = 0.358145171579;
    msg.y = 0.167919797234;
    msg.z = 0.738490379708;

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
    msg.setTimeStamp(0.374960593169);
    msg.setSource(438U);
    msg.setSourceEntity(129U);
    msg.setDestination(51207U);
    msg.setDestinationEntity(239U);
    msg.validity = 94U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.55044288468;
    tmp_msg_0.y = 0.992799956179;
    tmp_msg_0.z = 0.121216985983;
    tmp_msg_0.phi = 0.996816032667;
    tmp_msg_0.theta = 0.456881059021;
    tmp_msg_0.psi = 0.349555533903;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.148538513436;

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
    msg.setTimeStamp(0.0207414202578);
    msg.setSource(20839U);
    msg.setSourceEntity(31U);
    msg.setDestination(39572U);
    msg.setDestinationEntity(101U);
    msg.validity = 93U;
    msg.value = 0.0967168836786;

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
    msg.setTimeStamp(0.174032907673);
    msg.setSource(13636U);
    msg.setSourceEntity(41U);
    msg.setDestination(61438U);
    msg.setDestinationEntity(114U);
    msg.validity = 232U;
    msg.value = 0.163203570865;

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
    msg.setTimeStamp(0.686741184594);
    msg.setSource(59289U);
    msg.setSourceEntity(45U);
    msg.setDestination(30002U);
    msg.setDestinationEntity(60U);
    msg.value = 0.175447940041;

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
    msg.setTimeStamp(0.77154705865);
    msg.setSource(30437U);
    msg.setSourceEntity(60U);
    msg.setDestination(35449U);
    msg.setDestinationEntity(202U);
    msg.value = 0.766570912318;

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
    msg.setTimeStamp(0.768862578988);
    msg.setSource(44913U);
    msg.setSourceEntity(152U);
    msg.setDestination(36456U);
    msg.setDestinationEntity(158U);
    msg.value = 0.0399842076645;

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
    msg.setTimeStamp(0.597921840037);
    msg.setSource(42572U);
    msg.setSourceEntity(202U);
    msg.setDestination(30025U);
    msg.setDestinationEntity(2U);
    msg.value = 0.80443951042;

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
    msg.setTimeStamp(0.102525418821);
    msg.setSource(3975U);
    msg.setSourceEntity(157U);
    msg.setDestination(56978U);
    msg.setDestinationEntity(226U);
    msg.value = 0.428040400747;

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
    msg.setTimeStamp(0.746135867236);
    msg.setSource(23296U);
    msg.setSourceEntity(123U);
    msg.setDestination(46832U);
    msg.setDestinationEntity(239U);
    msg.value = 0.452987943246;

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
    msg.setTimeStamp(0.914143437044);
    msg.setSource(1975U);
    msg.setSourceEntity(57U);
    msg.setDestination(16104U);
    msg.setDestinationEntity(184U);
    msg.value = 0.960383217133;

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
    msg.setTimeStamp(0.94751721883);
    msg.setSource(19306U);
    msg.setSourceEntity(202U);
    msg.setDestination(19856U);
    msg.setDestinationEntity(12U);
    msg.value = 0.0959837208297;

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
    msg.setTimeStamp(0.720953538346);
    msg.setSource(595U);
    msg.setSourceEntity(217U);
    msg.setDestination(32015U);
    msg.setDestinationEntity(5U);
    msg.value = 0.453755442671;

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
    msg.setTimeStamp(0.729113297499);
    msg.setSource(12467U);
    msg.setSourceEntity(119U);
    msg.setDestination(42219U);
    msg.setDestinationEntity(172U);
    msg.value = 0.549280745667;

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
    msg.setTimeStamp(0.78338468868);
    msg.setSource(12481U);
    msg.setSourceEntity(49U);
    msg.setDestination(8325U);
    msg.setDestinationEntity(254U);
    msg.value = 0.835632904887;

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
    msg.setTimeStamp(0.76353243754);
    msg.setSource(43117U);
    msg.setSourceEntity(69U);
    msg.setDestination(43498U);
    msg.setDestinationEntity(41U);
    msg.value = 0.809088555382;

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
    msg.setTimeStamp(0.509149394069);
    msg.setSource(28696U);
    msg.setSourceEntity(83U);
    msg.setDestination(27379U);
    msg.setDestinationEntity(184U);
    msg.value = 0.561402410353;

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
    msg.setTimeStamp(0.131642557713);
    msg.setSource(52010U);
    msg.setSourceEntity(219U);
    msg.setDestination(64907U);
    msg.setDestinationEntity(133U);
    msg.value = 0.583270503837;

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
    msg.setTimeStamp(0.270624766863);
    msg.setSource(4575U);
    msg.setSourceEntity(125U);
    msg.setDestination(29960U);
    msg.setDestinationEntity(242U);
    msg.value = 0.0441804298656;

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
    msg.setTimeStamp(0.421986080218);
    msg.setSource(19787U);
    msg.setSourceEntity(100U);
    msg.setDestination(11896U);
    msg.setDestinationEntity(126U);
    msg.value = 0.150974544397;

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
    msg.setTimeStamp(0.496592276958);
    msg.setSource(36248U);
    msg.setSourceEntity(178U);
    msg.setDestination(11742U);
    msg.setDestinationEntity(158U);
    msg.value = 0.8292587687;

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
    msg.setTimeStamp(0.2147219897);
    msg.setSource(57928U);
    msg.setSourceEntity(110U);
    msg.setDestination(11993U);
    msg.setDestinationEntity(30U);
    msg.value = 0.632798747338;

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
    msg.setTimeStamp(0.301387440938);
    msg.setSource(20019U);
    msg.setSourceEntity(28U);
    msg.setDestination(61334U);
    msg.setDestinationEntity(155U);
    msg.value = 0.998517414101;

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
    msg.setTimeStamp(0.189206641273);
    msg.setSource(44328U);
    msg.setSourceEntity(131U);
    msg.setDestination(22243U);
    msg.setDestinationEntity(133U);
    msg.value = 0.664029726532;

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
    msg.setTimeStamp(0.493485612894);
    msg.setSource(19452U);
    msg.setSourceEntity(109U);
    msg.setDestination(23064U);
    msg.setDestinationEntity(134U);
    msg.value = 0.0457526512391;

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
    msg.setTimeStamp(0.594039025674);
    msg.setSource(45939U);
    msg.setSourceEntity(42U);
    msg.setDestination(31599U);
    msg.setDestinationEntity(66U);
    msg.value = 0.598446109003;

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
    msg.setTimeStamp(0.441943402474);
    msg.setSource(17917U);
    msg.setSourceEntity(110U);
    msg.setDestination(56965U);
    msg.setDestinationEntity(179U);
    msg.value = 0.422804293623;

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
    msg.setTimeStamp(0.630682470459);
    msg.setSource(1580U);
    msg.setSourceEntity(231U);
    msg.setDestination(23258U);
    msg.setDestinationEntity(46U);
    msg.value = 0.846501313388;

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
    msg.setTimeStamp(0.959194218952);
    msg.setSource(48173U);
    msg.setSourceEntity(206U);
    msg.setDestination(27708U);
    msg.setDestinationEntity(246U);
    msg.direction = 0.593150128856;
    msg.speed = 0.320268230117;
    msg.turbulence = 0.445975606906;

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
    msg.setTimeStamp(0.0198199848799);
    msg.setSource(32499U);
    msg.setSourceEntity(153U);
    msg.setDestination(60810U);
    msg.setDestinationEntity(85U);
    msg.direction = 0.0838419635076;
    msg.speed = 0.266894168458;
    msg.turbulence = 0.160923713783;

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
    msg.setTimeStamp(0.321273113956);
    msg.setSource(23273U);
    msg.setSourceEntity(236U);
    msg.setDestination(38427U);
    msg.setDestinationEntity(6U);
    msg.direction = 0.10938809815;
    msg.speed = 0.483412930634;
    msg.turbulence = 0.0102057652609;

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
    msg.setTimeStamp(0.398135184536);
    msg.setSource(5102U);
    msg.setSourceEntity(247U);
    msg.setDestination(62918U);
    msg.setDestinationEntity(1U);
    msg.value = 0.148091060447;

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
    msg.setTimeStamp(0.0432935580894);
    msg.setSource(51345U);
    msg.setSourceEntity(133U);
    msg.setDestination(33364U);
    msg.setDestinationEntity(13U);
    msg.value = 0.00542460839783;

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
    msg.setTimeStamp(0.760935219333);
    msg.setSource(44860U);
    msg.setSourceEntity(24U);
    msg.setDestination(12910U);
    msg.setDestinationEntity(68U);
    msg.value = 0.053852226126;

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
    msg.setTimeStamp(0.453714649508);
    msg.setSource(56359U);
    msg.setSourceEntity(10U);
    msg.setDestination(5533U);
    msg.setDestinationEntity(30U);
    msg.value.assign("JQZYTWIAXLPPXBROWHRMT");

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
    msg.setTimeStamp(0.901459178542);
    msg.setSource(40581U);
    msg.setSourceEntity(37U);
    msg.setDestination(26646U);
    msg.setDestinationEntity(229U);
    msg.value.assign("BVCFTOWJHJOASHBAMLJYPVCUAKXRFOWOILFPRGRRPMAVNXGQGRPZWOICZAGSBHATIJAOYBDBKVPVMDVAINITSFTGCNXXNSCONEEDCTDZJBGQYSMWYJSEXQSTEYUTEGHQWUWPISOQZJBVTBGTCJIVLUKDUFZIZFMLGWVRUJJYQDPKHCCULWDMBQVXQSACMGXLPRKBKMXRFZXMHSUDKFWNILZUH");

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
    msg.setTimeStamp(0.614631342491);
    msg.setSource(57677U);
    msg.setSourceEntity(224U);
    msg.setDestination(37579U);
    msg.setDestinationEntity(20U);
    msg.value.assign("AYEHFYIGRYKBYRUIOOMRBSNMOYZZLSTJVZUTEGXROFMBWDQBADIGCEBOJLHDSEKPNWRPJHRONQAZWVYOSSVGCDKDCFYMTBNVWNJGGPIHBZMPYILXSCRHSTGKMEUAOAEPNZRNOXIKCJDMRBPCUCAHQGAYQJMUQFTJBWSNDAHTXHUUWXKRPLYLDTZABMPKQDUWWXXVZJGPLNUCVTKEHQFVCZVLFILQW");

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
    msg.setTimeStamp(0.212233408995);
    msg.setSource(60512U);
    msg.setSourceEntity(15U);
    msg.setDestination(21740U);
    msg.setDestinationEntity(19U);
    const char tmp_msg_0[] = {-13, -8, -61, -74, 27, 1, -32, 117, -105, 11, 70, -25, -89, -96, -6, -8, -43, 56, -123, 47};
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
    msg.setTimeStamp(0.16958902301);
    msg.setSource(64814U);
    msg.setSourceEntity(110U);
    msg.setDestination(32323U);
    msg.setDestinationEntity(202U);
    const char tmp_msg_0[] = {1, -1, 122, -9, -81, 1, -42, -72, -96, 84, 123, -90, 110, -51, 23, 19, -42, 49, -45, -46, -114, 102, 15, -13, 14, -63, -68, -84, -59, 44, 21, -19, 17};
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
    msg.setTimeStamp(0.00641469062099);
    msg.setSource(40134U);
    msg.setSourceEntity(227U);
    msg.setDestination(47864U);
    msg.setDestinationEntity(166U);
    const char tmp_msg_0[] = {-44, -123, 93, -44, -60, -29, -30, -113, -81, -24, 99, 76, 65, 58, 23, 10, 66, -57, -66, 50, -85, -78, -68, 28, 28, -67, -50, 36, -61, 98, -80, 58, -121, 28, -107, -119, -5, -29, 72, 114, 51, -57, -57, 124, 101, 29, -62, 12, -37, 21, -122, -88, 77, 71, -6, 112, -76, 32, -11, -41, -34, 11, 31, 34, 45, -58, 11, -15, 126, 44, 75, -128, -78, -68, 40, 85, -47, 82, 21, 12, -79, 122, -115, -49, -111, -85, -63, 106};
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
    msg.setTimeStamp(0.880350299339);
    msg.setSource(31169U);
    msg.setSourceEntity(116U);
    msg.setDestination(55972U);
    msg.setDestinationEntity(76U);
    msg.value = 0.0510559020127;

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
    msg.setTimeStamp(0.0953372082182);
    msg.setSource(20954U);
    msg.setSourceEntity(117U);
    msg.setDestination(13111U);
    msg.setDestinationEntity(224U);
    msg.value = 0.218918338486;

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
    msg.setTimeStamp(0.0628371150656);
    msg.setSource(2008U);
    msg.setSourceEntity(66U);
    msg.setDestination(63934U);
    msg.setDestinationEntity(115U);
    msg.value = 0.484045940097;

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
    msg.setTimeStamp(0.860714063965);
    msg.setSource(50001U);
    msg.setSourceEntity(242U);
    msg.setDestination(6816U);
    msg.setDestinationEntity(90U);
    msg.type = 175U;
    msg.frequency = 1915930110U;
    msg.min_range = 55110U;
    msg.max_range = 48724U;
    msg.bits_per_point = 228U;
    msg.scale_factor = 0.444970421378;
    const char tmp_msg_0[] = {-1, -117, 42, -68, 41, -102, -125, 58, -31, 78, -85, -72, 3, 20, -64, -106, 9, 100, -5, -36, 68, 93, 47, -39, 18, -33, 65, -121, -102, 63, -36, -22, -120, -122, -54, -65, -63, 82, 99, -120, -26, 120, 14, -124, -87, -37, 97, 82, 108, 14, 17, -41, 97, 123, 71, 89, -51, 54, -115, -9, 82, -98, -56, 52, 36, 73, -21, -21, 126, -124, 85, -24, 61, 83, -5, 13, -63, -4, 3, 48, 31, -97, 51, 48, -66, -47, 93, -107, 96, 46, 33, -47, -115, -110, -96, 108, -36, -3, -80, 67, -52, -119, 83, -122, -34, -125, -44, 118, -125, -91, -32, -19, 30, -28, 29, -72, -2, -31, 95, 21, 85, 126, -52, -79, -23, -25, 115, -55, 91, 24, 126, 11, 58, 59, -84, -7, -55};
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
    msg.setTimeStamp(0.77486839277);
    msg.setSource(15030U);
    msg.setSourceEntity(195U);
    msg.setDestination(54486U);
    msg.setDestinationEntity(126U);
    msg.type = 236U;
    msg.frequency = 3643782540U;
    msg.min_range = 63590U;
    msg.max_range = 28550U;
    msg.bits_per_point = 215U;
    msg.scale_factor = 0.266800791711;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.825062123583;
    tmp_msg_0.beam_height = 0.536081417229;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {17, 79, -37, -51, -62, 0, 105, -2, -27, 42, 107, -78, -9, 32, 19, -61, 18, -71, 54, -108, 58, -81, -96, 62, 76, 113, 64, -73};
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
    msg.setTimeStamp(0.720586284041);
    msg.setSource(24454U);
    msg.setSourceEntity(95U);
    msg.setDestination(21302U);
    msg.setDestinationEntity(228U);
    msg.type = 125U;
    msg.frequency = 3449177197U;
    msg.min_range = 26022U;
    msg.max_range = 57667U;
    msg.bits_per_point = 151U;
    msg.scale_factor = 0.408043150906;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.00702739457024;
    tmp_msg_0.beam_height = 0.998172051237;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {58, -40, 101, -9, -110, 22, -87, -8, -21, -16, -58, -110, -18, -44, 44, -101, -105, -5, 114, -100, -2, -36, -49, 71, -36, 26, -63, -97, -125, 113, 50, -122, 28, -86, 75, -6, -23, 91, 3, 38, -5, 110, -33, -118, -104, -38, -107, -126, -95, 54, -117, -25, -93, 106, 98, -128, 25, -63, -3, -66, 54, 113, 25, -65, -58, -16, 27, 50, 24, 80, 117, -59, -66, 87, -76, 109, 77, -12, -65, 36, -66, 126, -60, -67, 93, -103, -59, -20, -56, 51, 35, -67, -114, 81, 52, -87, 78, 5, 95, 25, 86, -8, -27, -84, -19, 64, 8, -61, -71, 39, -21, -125, 32, -63, 59, -8, 122, -74, -1, -23, -98, -21, -119, -2, 48, 57, 75, 7, 82, 27, -30, 93, 0, 85, 104, -117, -124, -13, -27, -71, 86, -28, -35, -35, -53, -17, 43, 4, 2, -41, -32, -64, -101, 37, 40, -60, 85, 91, 44, -46, 81, 39, 18, -112, 97, -29, 115, 105, -5, -117, 87, -40, 6, 111, 24, -120, 26, -41, 5, 26, -34, -18, -82, -73, 2, -119, 93, 63, -65, -4, 9, -126, 1, -88, -27, -59, 8, 114, -81, 31, 26, -118, 99, -7, -18, -121, 55, 60};
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
    msg.setTimeStamp(0.433787197129);
    msg.setSource(42675U);
    msg.setSourceEntity(26U);
    msg.setDestination(39213U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.0328635564283);
    msg.setSource(11925U);
    msg.setSourceEntity(79U);
    msg.setDestination(36228U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.901891071305);
    msg.setSource(32607U);
    msg.setSourceEntity(169U);
    msg.setDestination(38468U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.634033333344);
    msg.setSource(4719U);
    msg.setSourceEntity(27U);
    msg.setDestination(44533U);
    msg.setDestinationEntity(0U);
    msg.op = 72U;

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
    msg.setTimeStamp(0.382330657939);
    msg.setSource(7537U);
    msg.setSourceEntity(121U);
    msg.setDestination(32353U);
    msg.setDestinationEntity(183U);
    msg.op = 154U;

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
    msg.setTimeStamp(0.439571840609);
    msg.setSource(40226U);
    msg.setSourceEntity(103U);
    msg.setDestination(30309U);
    msg.setDestinationEntity(64U);
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
    msg.setTimeStamp(0.847140820419);
    msg.setSource(32479U);
    msg.setSourceEntity(230U);
    msg.setDestination(18913U);
    msg.setDestinationEntity(58U);
    msg.value = 0.798859422967;
    msg.confidence = 0.93319462902;
    msg.opmodes.assign("QUEPCXDZVAIWZGMJLAKIIJUTOPYJENTBYLMNFOIXKNNKLNEYITKVKCOWVBMGPGTBZLKABQQGQOZLUOSQMFLPCKDMXGMDUESIMWJUQIMVMSKJBZNTEHLRHR");

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
    msg.setTimeStamp(0.246679398873);
    msg.setSource(767U);
    msg.setSourceEntity(81U);
    msg.setDestination(29653U);
    msg.setDestinationEntity(144U);
    msg.value = 0.89739716225;
    msg.confidence = 0.0239169321508;
    msg.opmodes.assign("OQYUOOARKHDTUCUWOSWPNMNSWLJRYWLPMLIIUHEBPCFDWLCEQVZITAAYZHBQCMJWGMBFIMDHTRROLPKVXUDDAYZRCGBBSMXINGSOHJSEHMKVGYGUEWBNBRJAFRNFQXVWTZPSJLHRXSSVVCDQZZAIPYQPBBFIXJQLNJWDFLKPJINLXIFNSXEYKUUMHVQGAVOEHKTQOEGEZJTHZNTKPNDTACWYA");

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
    msg.setTimeStamp(0.326144496455);
    msg.setSource(17617U);
    msg.setSourceEntity(17U);
    msg.setDestination(51662U);
    msg.setDestinationEntity(154U);
    msg.value = 0.618143058066;
    msg.confidence = 0.536379212605;
    msg.opmodes.assign("QZKOZDRTJGLOJBMOOCXMYAKYAMESBUFPBNREHLJXHNGUPTXMUFLWQLAFWDWJCVQZCBDKF");

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
    msg.setTimeStamp(0.0336091090536);
    msg.setSource(1478U);
    msg.setSourceEntity(12U);
    msg.setDestination(23177U);
    msg.setDestinationEntity(76U);
    msg.itow = 1252196415U;
    msg.lat = 0.406990178365;
    msg.lon = 0.164452037817;
    msg.height_ell = 0.992995433578;
    msg.height_sea = 0.780002320988;
    msg.hacc = 0.137351001927;
    msg.vacc = 0.589598335612;
    msg.vel_n = 0.873860672094;
    msg.vel_e = 0.457575200667;
    msg.vel_d = 0.699497520046;
    msg.speed = 0.939200477423;
    msg.gspeed = 0.393981068407;
    msg.heading = 0.322688262229;
    msg.sacc = 0.542863588109;
    msg.cacc = 0.568197076647;

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
    msg.setTimeStamp(0.520508844724);
    msg.setSource(64271U);
    msg.setSourceEntity(127U);
    msg.setDestination(8742U);
    msg.setDestinationEntity(210U);
    msg.itow = 4049408343U;
    msg.lat = 0.692670095325;
    msg.lon = 0.0693018339502;
    msg.height_ell = 0.757872031019;
    msg.height_sea = 0.0112372004334;
    msg.hacc = 0.0559584942236;
    msg.vacc = 0.8414113735;
    msg.vel_n = 0.688508940581;
    msg.vel_e = 0.810637064876;
    msg.vel_d = 0.859920140319;
    msg.speed = 0.778880950055;
    msg.gspeed = 0.0899673004888;
    msg.heading = 0.824197924166;
    msg.sacc = 0.676582474944;
    msg.cacc = 0.81014127725;

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
    msg.setTimeStamp(0.148669628748);
    msg.setSource(63397U);
    msg.setSourceEntity(25U);
    msg.setDestination(52008U);
    msg.setDestinationEntity(31U);
    msg.itow = 3240283719U;
    msg.lat = 0.311266741689;
    msg.lon = 0.347944409048;
    msg.height_ell = 0.037728061421;
    msg.height_sea = 0.701507484781;
    msg.hacc = 0.0107521767071;
    msg.vacc = 0.532597827927;
    msg.vel_n = 0.722665492724;
    msg.vel_e = 0.161865970098;
    msg.vel_d = 0.0979248279313;
    msg.speed = 0.0903973635504;
    msg.gspeed = 0.947466567811;
    msg.heading = 0.830546664478;
    msg.sacc = 0.597297511223;
    msg.cacc = 0.161360362036;

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
    msg.setTimeStamp(0.985966136934);
    msg.setSource(40818U);
    msg.setSourceEntity(78U);
    msg.setDestination(30514U);
    msg.setDestinationEntity(31U);
    msg.id = 17U;
    msg.value = 0.470271320512;

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
    msg.setTimeStamp(0.665901939665);
    msg.setSource(24557U);
    msg.setSourceEntity(121U);
    msg.setDestination(62772U);
    msg.setDestinationEntity(163U);
    msg.id = 50U;
    msg.value = 0.428762669749;

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
    msg.setTimeStamp(0.881131918456);
    msg.setSource(1116U);
    msg.setSourceEntity(62U);
    msg.setDestination(5072U);
    msg.setDestinationEntity(76U);
    msg.id = 190U;
    msg.value = 0.694245740704;

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
    msg.setTimeStamp(0.128736953806);
    msg.setSource(64789U);
    msg.setSourceEntity(118U);
    msg.setDestination(54595U);
    msg.setDestinationEntity(145U);
    msg.x = 0.69802000125;
    msg.y = 0.796072077936;
    msg.z = 0.827625255458;
    msg.phi = 0.34652376953;
    msg.theta = 0.917512343653;
    msg.psi = 0.121104796786;

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
    msg.setTimeStamp(0.828988051797);
    msg.setSource(21291U);
    msg.setSourceEntity(228U);
    msg.setDestination(48872U);
    msg.setDestinationEntity(174U);
    msg.x = 0.346499435911;
    msg.y = 0.162143448635;
    msg.z = 0.818908755936;
    msg.phi = 0.0328989051243;
    msg.theta = 0.727841877803;
    msg.psi = 0.781332301228;

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
    msg.setTimeStamp(0.512253410507);
    msg.setSource(39810U);
    msg.setSourceEntity(40U);
    msg.setDestination(13446U);
    msg.setDestinationEntity(233U);
    msg.x = 0.123749589727;
    msg.y = 0.00695085759443;
    msg.z = 0.535639168053;
    msg.phi = 0.553752057792;
    msg.theta = 0.351118767016;
    msg.psi = 0.932208941425;

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
    msg.setTimeStamp(0.817206122777);
    msg.setSource(23042U);
    msg.setSourceEntity(136U);
    msg.setDestination(11471U);
    msg.setDestinationEntity(19U);
    msg.beam_width = 0.605648172084;
    msg.beam_height = 0.162448965817;

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
    msg.setTimeStamp(0.649472265913);
    msg.setSource(40729U);
    msg.setSourceEntity(115U);
    msg.setDestination(52174U);
    msg.setDestinationEntity(131U);
    msg.beam_width = 0.967620375421;
    msg.beam_height = 0.229193266983;

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
    msg.setTimeStamp(0.147024987849);
    msg.setSource(14908U);
    msg.setSourceEntity(66U);
    msg.setDestination(30565U);
    msg.setDestinationEntity(62U);
    msg.beam_width = 0.0440051932735;
    msg.beam_height = 0.995500151042;

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
    msg.setTimeStamp(0.0858760176505);
    msg.setSource(40481U);
    msg.setSourceEntity(14U);
    msg.setDestination(19312U);
    msg.setDestinationEntity(19U);
    msg.sane = 202U;

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
    msg.setTimeStamp(0.881180422983);
    msg.setSource(32107U);
    msg.setSourceEntity(96U);
    msg.setDestination(16978U);
    msg.setDestinationEntity(187U);
    msg.sane = 242U;

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
    msg.setTimeStamp(0.271161126413);
    msg.setSource(54885U);
    msg.setSourceEntity(25U);
    msg.setDestination(11455U);
    msg.setDestinationEntity(158U);
    msg.sane = 138U;

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
    msg.setTimeStamp(0.0359606820049);
    msg.setSource(14076U);
    msg.setSourceEntity(2U);
    msg.setDestination(63975U);
    msg.setDestinationEntity(226U);
    msg.value = 0.535238253558;

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
    msg.setTimeStamp(0.368552905756);
    msg.setSource(42468U);
    msg.setSourceEntity(234U);
    msg.setDestination(28062U);
    msg.setDestinationEntity(148U);
    msg.value = 0.0727043317387;

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
    msg.setTimeStamp(0.638490420913);
    msg.setSource(7659U);
    msg.setSourceEntity(96U);
    msg.setDestination(859U);
    msg.setDestinationEntity(216U);
    msg.value = 0.411161198398;

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
    msg.setTimeStamp(0.236612304528);
    msg.setSource(65223U);
    msg.setSourceEntity(174U);
    msg.setDestination(51477U);
    msg.setDestinationEntity(34U);
    msg.value = 0.574702900154;

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
    msg.setTimeStamp(0.461664255404);
    msg.setSource(23160U);
    msg.setSourceEntity(57U);
    msg.setDestination(32294U);
    msg.setDestinationEntity(161U);
    msg.value = 0.728216357396;

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
    msg.setTimeStamp(0.831886824501);
    msg.setSource(47143U);
    msg.setSourceEntity(117U);
    msg.setDestination(18458U);
    msg.setDestinationEntity(62U);
    msg.value = 0.672595821509;

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
    msg.setTimeStamp(0.705471649932);
    msg.setSource(45369U);
    msg.setSourceEntity(73U);
    msg.setDestination(13956U);
    msg.setDestinationEntity(132U);
    msg.value = 0.479048783405;

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
    msg.setTimeStamp(0.705898950738);
    msg.setSource(41076U);
    msg.setSourceEntity(35U);
    msg.setDestination(42274U);
    msg.setDestinationEntity(4U);
    msg.value = 0.0808262289771;

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
    msg.setTimeStamp(0.90134762985);
    msg.setSource(47316U);
    msg.setSourceEntity(85U);
    msg.setDestination(21672U);
    msg.setDestinationEntity(198U);
    msg.value = 0.698374998915;

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
    msg.setTimeStamp(0.285464885332);
    msg.setSource(30489U);
    msg.setSourceEntity(58U);
    msg.setDestination(7212U);
    msg.setDestinationEntity(237U);
    msg.value = 0.445553196583;

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
    msg.setTimeStamp(0.335772600016);
    msg.setSource(32134U);
    msg.setSourceEntity(243U);
    msg.setDestination(55400U);
    msg.setDestinationEntity(124U);
    msg.value = 0.825256137846;

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
    msg.setTimeStamp(0.801525821495);
    msg.setSource(13740U);
    msg.setSourceEntity(124U);
    msg.setDestination(8003U);
    msg.setDestinationEntity(164U);
    msg.value = 0.445787308666;

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
    msg.setTimeStamp(0.277154044305);
    msg.setSource(25585U);
    msg.setSourceEntity(54U);
    msg.setDestination(40499U);
    msg.setDestinationEntity(90U);
    msg.value = 0.414050791492;

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
    msg.setTimeStamp(0.41583564927);
    msg.setSource(52828U);
    msg.setSourceEntity(213U);
    msg.setDestination(44310U);
    msg.setDestinationEntity(162U);
    msg.value = 0.756669586292;

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
    msg.setTimeStamp(0.758876047604);
    msg.setSource(22679U);
    msg.setSourceEntity(223U);
    msg.setDestination(59469U);
    msg.setDestinationEntity(96U);
    msg.value = 0.453571444159;

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
    msg.setTimeStamp(0.260281377301);
    msg.setSource(12887U);
    msg.setSourceEntity(159U);
    msg.setDestination(57423U);
    msg.setDestinationEntity(39U);
    msg.value = 0.346645046849;

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
    msg.setTimeStamp(0.450936103081);
    msg.setSource(25730U);
    msg.setSourceEntity(119U);
    msg.setDestination(31143U);
    msg.setDestinationEntity(242U);
    msg.value = 0.378084600042;

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
    msg.setTimeStamp(0.211302310979);
    msg.setSource(58710U);
    msg.setSourceEntity(81U);
    msg.setDestination(51442U);
    msg.setDestinationEntity(78U);
    msg.value = 0.0805154711974;

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
    msg.setTimeStamp(0.0224649755284);
    msg.setSource(24511U);
    msg.setSourceEntity(201U);
    msg.setDestination(52962U);
    msg.setDestinationEntity(113U);
    msg.value = 0.703655880662;

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
    msg.setTimeStamp(0.472068763978);
    msg.setSource(39301U);
    msg.setSourceEntity(175U);
    msg.setDestination(17062U);
    msg.setDestinationEntity(241U);
    msg.value = 0.840036093482;

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
    msg.setTimeStamp(0.0150244686672);
    msg.setSource(1591U);
    msg.setSourceEntity(26U);
    msg.setDestination(19355U);
    msg.setDestinationEntity(173U);
    msg.value = 0.470594983659;

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
    msg.setTimeStamp(0.701102290861);
    msg.setSource(61771U);
    msg.setSourceEntity(118U);
    msg.setDestination(62805U);
    msg.setDestinationEntity(2U);
    msg.value = 0.577851794138;

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
    msg.setTimeStamp(0.261071678838);
    msg.setSource(19413U);
    msg.setSourceEntity(100U);
    msg.setDestination(16177U);
    msg.setDestinationEntity(184U);
    msg.value = 0.547007671901;

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
    msg.setTimeStamp(0.91648444259);
    msg.setSource(36368U);
    msg.setSourceEntity(46U);
    msg.setDestination(49330U);
    msg.setDestinationEntity(244U);
    msg.value = 0.0419137155072;

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
    msg.setTimeStamp(0.387307503758);
    msg.setSource(42847U);
    msg.setSourceEntity(118U);
    msg.setDestination(50707U);
    msg.setDestinationEntity(151U);
    msg.validity = 51450U;
    msg.type = 29U;
    msg.tow = 1262744303U;
    msg.base_lat = 0.840878788511;
    msg.base_lon = 0.714515216763;
    msg.base_height = 0.147547002807;
    msg.n = 0.199781743134;
    msg.e = 0.578354227513;
    msg.d = 0.670403954628;
    msg.v_n = 0.476955268164;
    msg.v_e = 0.703790507386;
    msg.v_d = 0.85112922427;
    msg.satellites = 47U;
    msg.iar_hyp = 52679U;
    msg.iar_ratio = 0.526774351441;

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
    msg.setTimeStamp(0.584979075168);
    msg.setSource(51002U);
    msg.setSourceEntity(190U);
    msg.setDestination(44755U);
    msg.setDestinationEntity(49U);
    msg.validity = 9370U;
    msg.type = 134U;
    msg.tow = 2345478141U;
    msg.base_lat = 0.30863243375;
    msg.base_lon = 0.268913921124;
    msg.base_height = 0.693793328206;
    msg.n = 0.120899553666;
    msg.e = 0.926212844499;
    msg.d = 0.0879687355657;
    msg.v_n = 0.547798747567;
    msg.v_e = 0.699630083685;
    msg.v_d = 0.936971773836;
    msg.satellites = 0U;
    msg.iar_hyp = 3386U;
    msg.iar_ratio = 0.664317657215;

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
    msg.setTimeStamp(0.663523811343);
    msg.setSource(64308U);
    msg.setSourceEntity(232U);
    msg.setDestination(40014U);
    msg.setDestinationEntity(154U);
    msg.validity = 29869U;
    msg.type = 197U;
    msg.tow = 2674706679U;
    msg.base_lat = 0.632320074512;
    msg.base_lon = 0.93994186517;
    msg.base_height = 0.457626808327;
    msg.n = 0.792528864869;
    msg.e = 0.865469809756;
    msg.d = 0.240032609677;
    msg.v_n = 0.16996300958;
    msg.v_e = 0.0215085609689;
    msg.v_d = 0.165347361699;
    msg.satellites = 170U;
    msg.iar_hyp = 32586U;
    msg.iar_ratio = 0.412417328053;

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
    msg.setTimeStamp(0.246247576287);
    msg.setSource(2330U);
    msg.setSourceEntity(96U);
    msg.setDestination(43146U);
    msg.setDestinationEntity(244U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.97543964996;
    tmp_msg_0.lon = 0.829639395763;
    tmp_msg_0.height = 0.273379571728;
    tmp_msg_0.x = 0.40061287342;
    tmp_msg_0.y = 0.18839551215;
    tmp_msg_0.z = 0.00554622238623;
    tmp_msg_0.phi = 0.535493236079;
    tmp_msg_0.theta = 0.1239041951;
    tmp_msg_0.psi = 0.439656058252;
    tmp_msg_0.u = 0.381426767248;
    tmp_msg_0.v = 0.116056419445;
    tmp_msg_0.w = 0.461172439003;
    tmp_msg_0.vx = 0.857612156847;
    tmp_msg_0.vy = 0.874932262905;
    tmp_msg_0.vz = 0.496069517717;
    tmp_msg_0.p = 0.688210487354;
    tmp_msg_0.q = 0.403216776883;
    tmp_msg_0.r = 0.734807287023;
    tmp_msg_0.depth = 0.683482159293;
    tmp_msg_0.alt = 0.000820122462304;
    msg.state.set(tmp_msg_0);
    msg.type = 173U;

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
    msg.setTimeStamp(0.746988347502);
    msg.setSource(53946U);
    msg.setSourceEntity(91U);
    msg.setDestination(63305U);
    msg.setDestinationEntity(54U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.911061889574;
    tmp_msg_0.lon = 0.939372220604;
    tmp_msg_0.height = 0.271132228193;
    tmp_msg_0.x = 0.79188128364;
    tmp_msg_0.y = 0.541335916902;
    tmp_msg_0.z = 0.632181683557;
    tmp_msg_0.phi = 0.154005077611;
    tmp_msg_0.theta = 0.169411717145;
    tmp_msg_0.psi = 0.120263795356;
    tmp_msg_0.u = 0.567868462755;
    tmp_msg_0.v = 0.234995192939;
    tmp_msg_0.w = 0.123445413258;
    tmp_msg_0.vx = 0.689972062211;
    tmp_msg_0.vy = 0.465057551665;
    tmp_msg_0.vz = 0.0775181147959;
    tmp_msg_0.p = 0.556453638865;
    tmp_msg_0.q = 0.0797926196526;
    tmp_msg_0.r = 0.919880429971;
    tmp_msg_0.depth = 0.391046971706;
    tmp_msg_0.alt = 0.948481535062;
    msg.state.set(tmp_msg_0);
    msg.type = 43U;

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
    msg.setTimeStamp(0.905966494481);
    msg.setSource(5284U);
    msg.setSourceEntity(108U);
    msg.setDestination(13625U);
    msg.setDestinationEntity(176U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.790487477576;
    tmp_msg_0.lon = 0.681570021487;
    tmp_msg_0.height = 0.876060310341;
    tmp_msg_0.x = 0.597473295617;
    tmp_msg_0.y = 0.601735200756;
    tmp_msg_0.z = 0.625533080295;
    tmp_msg_0.phi = 0.734371130728;
    tmp_msg_0.theta = 0.0696671951739;
    tmp_msg_0.psi = 0.749490676028;
    tmp_msg_0.u = 0.605788753632;
    tmp_msg_0.v = 0.132880723037;
    tmp_msg_0.w = 0.110719863606;
    tmp_msg_0.vx = 0.289547822217;
    tmp_msg_0.vy = 0.219055515681;
    tmp_msg_0.vz = 0.171050981588;
    tmp_msg_0.p = 0.592521340516;
    tmp_msg_0.q = 0.100390853802;
    tmp_msg_0.r = 0.0452388307582;
    tmp_msg_0.depth = 0.954467875333;
    tmp_msg_0.alt = 0.105724042352;
    msg.state.set(tmp_msg_0);
    msg.type = 57U;

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
    msg.setTimeStamp(0.913909781543);
    msg.setSource(59871U);
    msg.setSourceEntity(136U);
    msg.setDestination(11386U);
    msg.setDestinationEntity(40U);
    msg.value = 0.67092536456;

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
    msg.setTimeStamp(0.955613686097);
    msg.setSource(471U);
    msg.setSourceEntity(212U);
    msg.setDestination(55951U);
    msg.setDestinationEntity(231U);
    msg.value = 0.0915856480994;

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
    msg.setTimeStamp(0.540533836786);
    msg.setSource(63670U);
    msg.setSourceEntity(190U);
    msg.setDestination(755U);
    msg.setDestinationEntity(98U);
    msg.value = 0.653991441374;

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
    msg.setTimeStamp(0.674118675218);
    msg.setSource(10661U);
    msg.setSourceEntity(160U);
    msg.setDestination(12327U);
    msg.setDestinationEntity(96U);
    msg.value = 0.668326661092;

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
    msg.setTimeStamp(0.169120483139);
    msg.setSource(11696U);
    msg.setSourceEntity(132U);
    msg.setDestination(63912U);
    msg.setDestinationEntity(252U);
    msg.value = 0.301848139158;

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
    msg.setTimeStamp(0.479358779965);
    msg.setSource(15706U);
    msg.setSourceEntity(38U);
    msg.setDestination(41825U);
    msg.setDestinationEntity(109U);
    msg.value = 0.483251899727;

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
    msg.setTimeStamp(0.0800934832197);
    msg.setSource(57026U);
    msg.setSourceEntity(150U);
    msg.setDestination(18430U);
    msg.setDestinationEntity(9U);
    msg.value = 0.58858033947;

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
    msg.setTimeStamp(0.347754057403);
    msg.setSource(33659U);
    msg.setSourceEntity(44U);
    msg.setDestination(17941U);
    msg.setDestinationEntity(24U);
    msg.value = 0.999171815099;

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
    msg.setTimeStamp(0.441010652176);
    msg.setSource(13948U);
    msg.setSourceEntity(148U);
    msg.setDestination(11129U);
    msg.setDestinationEntity(217U);
    msg.value = 0.501685408506;

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
    msg.setTimeStamp(0.169533022592);
    msg.setSource(63928U);
    msg.setSourceEntity(208U);
    msg.setDestination(19704U);
    msg.setDestinationEntity(55U);
    msg.value = 0.576226860974;

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
    msg.setTimeStamp(0.643125599238);
    msg.setSource(33188U);
    msg.setSourceEntity(66U);
    msg.setDestination(11950U);
    msg.setDestinationEntity(206U);
    msg.value = 0.528521173755;

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
    msg.setTimeStamp(0.934382895853);
    msg.setSource(39481U);
    msg.setSourceEntity(188U);
    msg.setDestination(20964U);
    msg.setDestinationEntity(185U);
    msg.value = 0.332174394398;

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
    msg.setTimeStamp(0.0157785603698);
    msg.setSource(54622U);
    msg.setSourceEntity(50U);
    msg.setDestination(7053U);
    msg.setDestinationEntity(211U);
    msg.value = 0.463425365216;

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
    msg.setTimeStamp(0.0518389548545);
    msg.setSource(11709U);
    msg.setSourceEntity(57U);
    msg.setDestination(52083U);
    msg.setDestinationEntity(125U);
    msg.value = 0.908958035857;

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
    msg.setTimeStamp(0.466069481155);
    msg.setSource(42591U);
    msg.setSourceEntity(246U);
    msg.setDestination(9680U);
    msg.setDestinationEntity(189U);
    msg.value = 0.575907605368;

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
    msg.setTimeStamp(0.268280349104);
    msg.setSource(1052U);
    msg.setSourceEntity(61U);
    msg.setDestination(29233U);
    msg.setDestinationEntity(51U);
    msg.id = 91U;
    msg.zoom = 141U;
    msg.action = 150U;

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
    msg.setTimeStamp(0.485456374928);
    msg.setSource(25642U);
    msg.setSourceEntity(241U);
    msg.setDestination(46765U);
    msg.setDestinationEntity(106U);
    msg.id = 140U;
    msg.zoom = 167U;
    msg.action = 22U;

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
    msg.setTimeStamp(0.943866325365);
    msg.setSource(37785U);
    msg.setSourceEntity(132U);
    msg.setDestination(14084U);
    msg.setDestinationEntity(23U);
    msg.id = 252U;
    msg.zoom = 189U;
    msg.action = 159U;

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
    msg.setTimeStamp(0.394001759309);
    msg.setSource(44337U);
    msg.setSourceEntity(193U);
    msg.setDestination(59509U);
    msg.setDestinationEntity(139U);
    msg.id = 202U;
    msg.value = 0.788992558749;

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
    msg.setTimeStamp(0.569420538256);
    msg.setSource(65329U);
    msg.setSourceEntity(24U);
    msg.setDestination(52142U);
    msg.setDestinationEntity(47U);
    msg.id = 211U;
    msg.value = 0.390879695771;

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
    msg.setTimeStamp(0.0301397602022);
    msg.setSource(30930U);
    msg.setSourceEntity(104U);
    msg.setDestination(23943U);
    msg.setDestinationEntity(146U);
    msg.id = 77U;
    msg.value = 0.107453649308;

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
    msg.setTimeStamp(0.464243301833);
    msg.setSource(12856U);
    msg.setSourceEntity(52U);
    msg.setDestination(21671U);
    msg.setDestinationEntity(69U);
    msg.id = 253U;
    msg.value = 0.111498289557;

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
    msg.setTimeStamp(0.029559249892);
    msg.setSource(27734U);
    msg.setSourceEntity(32U);
    msg.setDestination(21578U);
    msg.setDestinationEntity(225U);
    msg.id = 210U;
    msg.value = 0.140155803649;

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
    msg.setTimeStamp(0.748278638468);
    msg.setSource(61461U);
    msg.setSourceEntity(118U);
    msg.setDestination(59164U);
    msg.setDestinationEntity(148U);
    msg.id = 11U;
    msg.value = 0.788185481924;

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
    msg.setTimeStamp(0.759214483662);
    msg.setSource(28410U);
    msg.setSourceEntity(12U);
    msg.setDestination(47087U);
    msg.setDestinationEntity(123U);
    msg.id = 248U;
    msg.angle = 0.880783746473;

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
    msg.setTimeStamp(0.472101611705);
    msg.setSource(31819U);
    msg.setSourceEntity(9U);
    msg.setDestination(10409U);
    msg.setDestinationEntity(204U);
    msg.id = 128U;
    msg.angle = 0.673263029956;

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
    msg.setTimeStamp(0.201452537879);
    msg.setSource(32082U);
    msg.setSourceEntity(45U);
    msg.setDestination(9745U);
    msg.setDestinationEntity(226U);
    msg.id = 33U;
    msg.angle = 0.127341910121;

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
    msg.setTimeStamp(0.713146154764);
    msg.setSource(8512U);
    msg.setSourceEntity(217U);
    msg.setDestination(46147U);
    msg.setDestinationEntity(96U);
    msg.op = 113U;
    msg.actions.assign("OQLKGRWAFPZNCRYWGOMSNHQTCMDMUWEPDDOJKGGIYWNKFGVYVQMSBTOTBLNRFTDGCLDPXQKGO");

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
    msg.setTimeStamp(0.900281335126);
    msg.setSource(37786U);
    msg.setSourceEntity(78U);
    msg.setDestination(59145U);
    msg.setDestinationEntity(181U);
    msg.op = 161U;
    msg.actions.assign("LKPMVNWDQCGSFEGLNJCPBDKCEELBKIZMIXJEBVHCYZDFAHROVXDKLZCATYPIMWKOQFTBWSMPGZUZSSZWPBWJTUSQOHXEABGPIFRJYOOTEKNZCMJQXYXAJNDGIUHVEKKVWTEYHVIDRLWJUXBXTOSRGMUPKQCYGRFZGJAXBOYRGLFXNYJIQBFLHWCRYSLOUNMXIANMUDVNRWNNQACTTSDROHAOWUFCZDLEHUSRHITA");

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
    msg.setTimeStamp(0.607855844397);
    msg.setSource(26901U);
    msg.setSourceEntity(245U);
    msg.setDestination(50539U);
    msg.setDestinationEntity(98U);
    msg.op = 54U;
    msg.actions.assign("SOPOBUWJQGZOTNFCKFNAAFYIVTGRPFHPNMKGSVSSAPEQVSRNFMTXGQTZURSEGVSGLDFKZTGENXWTLODBRXJFLFVWIXZHNHPHIWGGHXXLKCLXILCZJGAOJEZMWZCWQBTBDUVUMZ");

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
    msg.setTimeStamp(0.365263059055);
    msg.setSource(56744U);
    msg.setSourceEntity(184U);
    msg.setDestination(26790U);
    msg.setDestinationEntity(170U);
    msg.actions.assign("RPEFUXFGPHROJSOQLCHUKFDTXHREQTTRWMCVTYHXDFWRIMSGJLXBAAWZXFSUJNWSDJK");

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
    msg.setTimeStamp(0.226398184731);
    msg.setSource(10128U);
    msg.setSourceEntity(113U);
    msg.setDestination(51641U);
    msg.setDestinationEntity(86U);
    msg.actions.assign("JDDMXLTEHPQFNMZEAKRHCKFGRZYJYWEWVTGFAYUKKHNQXIYLIR");

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
    msg.setTimeStamp(0.744457749201);
    msg.setSource(31311U);
    msg.setSourceEntity(182U);
    msg.setDestination(42225U);
    msg.setDestinationEntity(147U);
    msg.actions.assign("VFLQCZQTHUKBFRCEHXMMC");

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
    msg.setTimeStamp(0.116525464321);
    msg.setSource(25840U);
    msg.setSourceEntity(188U);
    msg.setDestination(46134U);
    msg.setDestinationEntity(219U);
    msg.button = 131U;
    msg.value = 156U;

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
    msg.setTimeStamp(0.0519124102365);
    msg.setSource(48595U);
    msg.setSourceEntity(43U);
    msg.setDestination(26863U);
    msg.setDestinationEntity(239U);
    msg.button = 162U;
    msg.value = 188U;

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
    msg.setTimeStamp(0.376548864009);
    msg.setSource(41930U);
    msg.setSourceEntity(247U);
    msg.setDestination(20461U);
    msg.setDestinationEntity(156U);
    msg.button = 185U;
    msg.value = 241U;

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
    msg.setTimeStamp(0.13115807241);
    msg.setSource(7719U);
    msg.setSourceEntity(146U);
    msg.setDestination(10095U);
    msg.setDestinationEntity(124U);
    msg.op = 54U;
    msg.text.assign("ESNVUYXREJEBOVHKIHBDYS");

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
    msg.setTimeStamp(0.0138176434711);
    msg.setSource(25130U);
    msg.setSourceEntity(44U);
    msg.setDestination(16774U);
    msg.setDestinationEntity(181U);
    msg.op = 127U;
    msg.text.assign("YULICIQTBXRNRVNLGOIPYFLOPMAGCUQCPQUXKBBXQLWNDCRENUMCKWAWYRETYOZCALGGFRMHAMDDIFJZUATHDWWEFPPTDQVQXWBMUBIYWKVSJNXCZNSYZM");

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
    msg.setTimeStamp(0.47637364688);
    msg.setSource(6678U);
    msg.setSourceEntity(119U);
    msg.setDestination(29261U);
    msg.setDestinationEntity(163U);
    msg.op = 0U;
    msg.text.assign("RACPGIFVARPNNVCLMQMKPWNEXUDGCZKLWNRZTAAHVLDUICUWTBABXMOZUFYWSMSREJXMGFHASOEBBYRCKVKSQRIOCPXHFNUQBVZGNCLUMPRQQTHXHYPBNDITEXLDYLWOBSSVMYBKTPECJGPCXRNUYSJSLEODZJIXKVNVTZGCQ");

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
    msg.setTimeStamp(0.372357851239);
    msg.setSource(61549U);
    msg.setSourceEntity(64U);
    msg.setDestination(5144U);
    msg.setDestinationEntity(222U);
    msg.op = 156U;
    msg.time_remain = 0.626520712769;
    msg.sched_time = 0.659582951297;

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
    msg.setTimeStamp(0.988550284261);
    msg.setSource(46297U);
    msg.setSourceEntity(249U);
    msg.setDestination(54024U);
    msg.setDestinationEntity(224U);
    msg.op = 252U;
    msg.time_remain = 0.936093721697;
    msg.sched_time = 0.523437511661;

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
    msg.setTimeStamp(0.628531872933);
    msg.setSource(34425U);
    msg.setSourceEntity(131U);
    msg.setDestination(29298U);
    msg.setDestinationEntity(19U);
    msg.op = 251U;
    msg.time_remain = 0.0335800876431;
    msg.sched_time = 0.924807696833;

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
    msg.setTimeStamp(0.125014837463);
    msg.setSource(23229U);
    msg.setSourceEntity(73U);
    msg.setDestination(61936U);
    msg.setDestinationEntity(32U);
    msg.name.assign("MXXSHTTULBEULTCSZBBQPRGQAZGNUYLHWMXPKAGHTYHDBNYTEXBUDWCFKGEJPEYUFKFOLLAZSTCDDPWJDVDRHQGOXAFWWQZOLZUZNKZREJJVPKJHKXROFZPEPYNKNOMRARQLHQBMQW");
    msg.op = 201U;
    msg.sched_time = 0.186058607675;

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
    msg.setTimeStamp(0.139899553007);
    msg.setSource(5569U);
    msg.setSourceEntity(92U);
    msg.setDestination(26048U);
    msg.setDestinationEntity(4U);
    msg.name.assign("CUUKFLWNUUOYJJLCLRVDVGOCFXKKRGSDACQBKRIJPJHDEYKJUEUZDAZULHBHSDBOYSIXWPUEEBWKVQBPNRNNWSDVWPFVPQHNLKTXTPINYEXWOEWADEPNMBMKYROYDQ");
    msg.op = 150U;
    msg.sched_time = 0.752554978137;

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
    msg.setTimeStamp(0.889379645904);
    msg.setSource(4745U);
    msg.setSourceEntity(11U);
    msg.setDestination(18763U);
    msg.setDestinationEntity(126U);
    msg.name.assign("JKZPGPQLNNHRYMORWUAEMNJFXKUWDFMKTDBTGFHVOBYUXVNZRGELNFLAAYEEKLNIVBEQPQHWKSRPSJMFLZRVINFSWZQSGCSCWKGXHRAIRWSYYGDCUTVDQAYCBIYKXQQLIIJXBLUDVRZECTHCAFZPFRPASTHXAZDWQCMQDOJGUYYTLFPEXMSKFPNCTJYHM");
    msg.op = 207U;
    msg.sched_time = 0.326463823811;

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
    msg.setTimeStamp(0.992401361594);
    msg.setSource(60170U);
    msg.setSourceEntity(29U);
    msg.setDestination(23746U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.295571977232);
    msg.setSource(37778U);
    msg.setSourceEntity(195U);
    msg.setDestination(8871U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.386956743943);
    msg.setSource(24830U);
    msg.setSourceEntity(31U);
    msg.setDestination(55342U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.263382209268);
    msg.setSource(52303U);
    msg.setSourceEntity(130U);
    msg.setDestination(33545U);
    msg.setDestinationEntity(81U);
    msg.name.assign("IEDNUWSCFWTUMEQORVNNGRBEQDDRUIHHLETAFQCXRYBJIMJPOJSWJVKMOFRBGWJODXBYUHPHRREOBXIWTBPLHCHSZTCMZYDMAKXYOPCSUKTZFKQJSSJTAFFNWGCSPLIAVYILPLDBCNDKOYEMWLLTGSAQIUHDQEWBKUIGRBVXNZQCPKZDSXRPVYVRKXWHALGONTCGVYKPUTZHXMVFAHAIVATNPEMXJQYGDFCMIFWLXNJZGBZEQNQSZ");
    msg.state = 147U;

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
    msg.setTimeStamp(0.97510942751);
    msg.setSource(40223U);
    msg.setSourceEntity(215U);
    msg.setDestination(6086U);
    msg.setDestinationEntity(229U);
    msg.name.assign("WJUSNPAWYRXLDJKWVSOLICOCNADNJAMKMSSFMPTOKDNFIOFZLTPAZXHNUFFZIGRQOHKYEIEFNDOBSRRTQMRUCEVMSVXP");
    msg.state = 205U;

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
    msg.setTimeStamp(0.997647163159);
    msg.setSource(41998U);
    msg.setSourceEntity(172U);
    msg.setDestination(29601U);
    msg.setDestinationEntity(126U);
    msg.name.assign("LHEEULIPRGSCOWCCQOUGNDQRTHODIWANJFWLRATYALHXDQFCPEPMTMJGACSVXYVBFUVHGGCROZAJUAEWXJFDNQRDVECZCTTAMUQSQBVXLMZWRPGKOYRZNMKACDKBNIVVVZDBDIROUKOOWGMGWJINHIHUPREBNPMZIBALJFO");
    msg.state = 235U;

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
    msg.setTimeStamp(0.182487386417);
    msg.setSource(5708U);
    msg.setSourceEntity(170U);
    msg.setDestination(7802U);
    msg.setDestinationEntity(44U);
    msg.name.assign("VPZHQDANDWPOTDILZWYQYVXFFKNXVCRYGKZNZYIKQXJMFRIBVZUKORHVJDEKSOKXSMFWTGDUHRMBYSASYMRFKCVNYWZOJIJLEOTBFIVGMHXMGMORLBKMPJBDTFS");
    msg.value = 71U;

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
    msg.setTimeStamp(0.331955069329);
    msg.setSource(4220U);
    msg.setSourceEntity(6U);
    msg.setDestination(39667U);
    msg.setDestinationEntity(70U);
    msg.name.assign("UYQNBIWITGCWMMKXTABYOFCNRZNVCNZYTVHPRVRXDSGANJOIDJDEDAJEXAYUNFZHZLZAUDLJWGOBSYFMIIXMLEQOJCPHEOHHEDZVBWPUIXUQCTHVSPFQPYKKDKPCKMYTJCJWFUOAHFRZBQLIWNVUTBPSRTNSWIPAYSXORWOMGHZRLVQOXGYEC");
    msg.value = 146U;

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
    msg.setTimeStamp(0.721709299704);
    msg.setSource(35949U);
    msg.setSourceEntity(86U);
    msg.setDestination(32340U);
    msg.setDestinationEntity(182U);
    msg.name.assign("HBNXFKRCUSUNVSERSVPLMOPIMVPVSMLHYJHHYUDWLMFXDIUIZDYTDBJYNGJWOZRPHKWRYIHPOUZXOJUBGWDCCQTQFPRSJGHYFQRJXJQTTTHUGOMLIUCWRAXSWAARDFB");
    msg.value = 236U;

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
    msg.setTimeStamp(0.683088734481);
    msg.setSource(59879U);
    msg.setSourceEntity(88U);
    msg.setDestination(61218U);
    msg.setDestinationEntity(127U);
    msg.name.assign("GDWTTOTTYPGDJCNIEJPEPNLLUKQOMYIMTQNWXPPGSMTKYFUHRAIBPIRWJOHQFADYKIVQUPVEHWTMSEDNUEZDNHWZHXFAF");

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
    msg.setTimeStamp(0.179398786288);
    msg.setSource(25186U);
    msg.setSourceEntity(135U);
    msg.setDestination(50005U);
    msg.setDestinationEntity(154U);
    msg.name.assign("YAVSRZKEAAYNKBIJBFFDCZGEFABWSNGAIXRCGDYEOUZXQDHECHIXVMOWBTUQTSAHPGNDUWMBICFMUKYATFZPYPHVZLQQJTPVPUHSGLVFIRCIXJULPSDFMLPQJORJQSHLDTQHAEKLBMBRWOFCATJQJLUNIWXDVROZGVOSPHUXXOZSPCOJRNCVFMWGYDWVERZMXWSTEYCAIHBGCLMTUEWHLDMOYJKZKDIBEXNOYBN");

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
    msg.setTimeStamp(0.483647555325);
    msg.setSource(42285U);
    msg.setSourceEntity(86U);
    msg.setDestination(15014U);
    msg.setDestinationEntity(154U);
    msg.name.assign("HBJOLJXACBMIDUNHLTDHLRUMISPNWWZPXVZRDWSLXJZVCDQPQJUVAALEZSYOYRSOOXZCQXQQAMBAPBUNXRSAUVOZKIKNVANPWBFMESCAGUJGYNTGUGKXKPGOEMBBBRFYKVIUMOTLRHXYRVCTSKELAYJHNKFODYWEUHCHJVJKEFYILEDQEJJWTUIQGIDCETMZNFWCSZLGTXRZXGVYHSEDS");

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
    msg.setTimeStamp(0.995688227837);
    msg.setSource(6177U);
    msg.setSourceEntity(34U);
    msg.setDestination(1819U);
    msg.setDestinationEntity(142U);
    msg.name.assign("GFASXPQEJTBYEYBOURPFOFKIQWJKFCMIKKMCSBTNE");
    msg.value = 85U;

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
    msg.setTimeStamp(0.698505167708);
    msg.setSource(51590U);
    msg.setSourceEntity(239U);
    msg.setDestination(54218U);
    msg.setDestinationEntity(9U);
    msg.name.assign("TWSMRIXUCLADFFIWKMMXCHGJATAKLAKVSHPCD");
    msg.value = 130U;

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
    msg.setTimeStamp(0.430634594511);
    msg.setSource(2159U);
    msg.setSourceEntity(60U);
    msg.setDestination(191U);
    msg.setDestinationEntity(217U);
    msg.name.assign("KARYAZYMKCKBTZFLXJWNHXGKRXIHIM");
    msg.value = 128U;

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
    msg.setTimeStamp(0.0397958775573);
    msg.setSource(28490U);
    msg.setSourceEntity(49U);
    msg.setDestination(60886U);
    msg.setDestinationEntity(38U);
    msg.id = 177U;
    msg.period = 1780311413U;
    msg.duty_cycle = 2379082055U;

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
    msg.setTimeStamp(0.23875122006);
    msg.setSource(23468U);
    msg.setSourceEntity(78U);
    msg.setDestination(10697U);
    msg.setDestinationEntity(158U);
    msg.id = 108U;
    msg.period = 1886068396U;
    msg.duty_cycle = 1303617334U;

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
    msg.setTimeStamp(0.347257801415);
    msg.setSource(11988U);
    msg.setSourceEntity(96U);
    msg.setDestination(15881U);
    msg.setDestinationEntity(104U);
    msg.id = 145U;
    msg.period = 4213557135U;
    msg.duty_cycle = 2951316735U;

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
    msg.setTimeStamp(0.0145692318408);
    msg.setSource(51292U);
    msg.setSourceEntity(195U);
    msg.setDestination(24591U);
    msg.setDestinationEntity(142U);
    msg.id = 205U;
    msg.period = 2970956700U;
    msg.duty_cycle = 4079739554U;

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
    msg.setTimeStamp(0.243958863666);
    msg.setSource(27558U);
    msg.setSourceEntity(171U);
    msg.setDestination(43811U);
    msg.setDestinationEntity(145U);
    msg.id = 195U;
    msg.period = 2014094566U;
    msg.duty_cycle = 3021766850U;

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
    msg.setTimeStamp(0.538762500134);
    msg.setSource(9718U);
    msg.setSourceEntity(133U);
    msg.setDestination(49597U);
    msg.setDestinationEntity(136U);
    msg.id = 138U;
    msg.period = 245047336U;
    msg.duty_cycle = 968346570U;

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
    msg.setTimeStamp(0.827331701727);
    msg.setSource(32449U);
    msg.setSourceEntity(15U);
    msg.setDestination(35240U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.614932870265;
    msg.lon = 0.258768705449;
    msg.height = 0.613786775551;
    msg.x = 0.00297365885428;
    msg.y = 0.584796794843;
    msg.z = 0.615799632984;
    msg.phi = 0.25018688725;
    msg.theta = 0.915357675127;
    msg.psi = 0.681239157755;
    msg.u = 0.293333530124;
    msg.v = 0.331701667236;
    msg.w = 0.268230037567;
    msg.vx = 0.0418768325396;
    msg.vy = 0.688516267456;
    msg.vz = 0.355715877682;
    msg.p = 0.139985313687;
    msg.q = 0.960551649642;
    msg.r = 0.817874575496;
    msg.depth = 0.50464383443;
    msg.alt = 0.155489789167;

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
    msg.setTimeStamp(0.738716537276);
    msg.setSource(14119U);
    msg.setSourceEntity(102U);
    msg.setDestination(39840U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.703990201023;
    msg.lon = 0.713828827395;
    msg.height = 0.772500427845;
    msg.x = 0.0524375453917;
    msg.y = 0.496257754094;
    msg.z = 0.727630293899;
    msg.phi = 0.382205681185;
    msg.theta = 0.594331932422;
    msg.psi = 0.704340726643;
    msg.u = 0.254848392373;
    msg.v = 0.726039141634;
    msg.w = 0.454156613813;
    msg.vx = 0.786407051217;
    msg.vy = 0.642281150883;
    msg.vz = 0.163702798642;
    msg.p = 0.832906009658;
    msg.q = 0.850377198097;
    msg.r = 0.972795054245;
    msg.depth = 0.993788129091;
    msg.alt = 0.381388509474;

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
    msg.setTimeStamp(0.233984963013);
    msg.setSource(60782U);
    msg.setSourceEntity(113U);
    msg.setDestination(39084U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.106969522299;
    msg.lon = 0.285553912146;
    msg.height = 0.81110648328;
    msg.x = 0.149604681858;
    msg.y = 0.62644751072;
    msg.z = 0.197011088965;
    msg.phi = 0.740270214696;
    msg.theta = 0.0446597057499;
    msg.psi = 0.417833092719;
    msg.u = 0.159164404437;
    msg.v = 0.803040674418;
    msg.w = 0.130747578396;
    msg.vx = 0.470758236534;
    msg.vy = 0.635189696594;
    msg.vz = 0.819814114639;
    msg.p = 0.69298004818;
    msg.q = 0.364360004815;
    msg.r = 0.660574086314;
    msg.depth = 0.511074381825;
    msg.alt = 0.203674210083;

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
    msg.setTimeStamp(0.0452698404268);
    msg.setSource(50596U);
    msg.setSourceEntity(178U);
    msg.setDestination(1800U);
    msg.setDestinationEntity(219U);
    msg.x = 0.755606241393;
    msg.y = 0.365730595299;
    msg.z = 0.691223278705;

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
    msg.setTimeStamp(0.594324534606);
    msg.setSource(18588U);
    msg.setSourceEntity(102U);
    msg.setDestination(38545U);
    msg.setDestinationEntity(163U);
    msg.x = 0.421916481717;
    msg.y = 0.795904222086;
    msg.z = 0.808305488113;

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
    msg.setTimeStamp(0.762725859176);
    msg.setSource(46647U);
    msg.setSourceEntity(126U);
    msg.setDestination(60750U);
    msg.setDestinationEntity(39U);
    msg.x = 0.363558250316;
    msg.y = 0.547155057902;
    msg.z = 0.711496056135;

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
    msg.setTimeStamp(0.0213580641026);
    msg.setSource(42643U);
    msg.setSourceEntity(211U);
    msg.setDestination(30465U);
    msg.setDestinationEntity(146U);
    msg.value = 0.0150490169258;

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
    msg.setTimeStamp(0.616794720586);
    msg.setSource(4707U);
    msg.setSourceEntity(61U);
    msg.setDestination(37343U);
    msg.setDestinationEntity(44U);
    msg.value = 0.990040670446;

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
    msg.setTimeStamp(0.412244306824);
    msg.setSource(46053U);
    msg.setSourceEntity(225U);
    msg.setDestination(761U);
    msg.setDestinationEntity(151U);
    msg.value = 0.168620615055;

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
    msg.setTimeStamp(0.774402275205);
    msg.setSource(28150U);
    msg.setSourceEntity(190U);
    msg.setDestination(24296U);
    msg.setDestinationEntity(78U);
    msg.value = 0.231728375055;

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
    msg.setTimeStamp(0.163770322029);
    msg.setSource(48849U);
    msg.setSourceEntity(23U);
    msg.setDestination(24781U);
    msg.setDestinationEntity(19U);
    msg.value = 0.58838619304;

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
    msg.setTimeStamp(0.127011456915);
    msg.setSource(29785U);
    msg.setSourceEntity(28U);
    msg.setDestination(51678U);
    msg.setDestinationEntity(72U);
    msg.value = 0.264194889328;

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
    msg.setTimeStamp(0.982995803842);
    msg.setSource(35374U);
    msg.setSourceEntity(173U);
    msg.setDestination(62732U);
    msg.setDestinationEntity(115U);
    msg.x = 0.386962025174;
    msg.y = 0.648073262478;
    msg.z = 0.479534066161;
    msg.phi = 0.463460048005;
    msg.theta = 0.667983605267;
    msg.psi = 0.44085145741;
    msg.p = 0.190688189697;
    msg.q = 0.387815832103;
    msg.r = 0.181746277302;
    msg.u = 0.590527034598;
    msg.v = 0.300906259618;
    msg.w = 0.334791683158;
    msg.bias_psi = 0.860986245815;
    msg.bias_r = 0.467965299634;

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
    msg.setTimeStamp(0.658407103322);
    msg.setSource(22102U);
    msg.setSourceEntity(26U);
    msg.setDestination(31122U);
    msg.setDestinationEntity(55U);
    msg.x = 0.367855806158;
    msg.y = 0.968459240728;
    msg.z = 0.179303962887;
    msg.phi = 0.553773686678;
    msg.theta = 0.469583048676;
    msg.psi = 0.0976604700505;
    msg.p = 0.17717732901;
    msg.q = 0.434716599071;
    msg.r = 0.181912981655;
    msg.u = 0.0846352450946;
    msg.v = 0.582839919688;
    msg.w = 0.0078525241088;
    msg.bias_psi = 0.846727015809;
    msg.bias_r = 0.609933808336;

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
    msg.setTimeStamp(0.858315127631);
    msg.setSource(45133U);
    msg.setSourceEntity(167U);
    msg.setDestination(5294U);
    msg.setDestinationEntity(23U);
    msg.x = 0.777248299351;
    msg.y = 0.853489250774;
    msg.z = 0.489500505386;
    msg.phi = 0.267138496143;
    msg.theta = 0.578162167535;
    msg.psi = 0.19141918547;
    msg.p = 0.0663502320283;
    msg.q = 0.261248853732;
    msg.r = 0.942905544433;
    msg.u = 0.550913354989;
    msg.v = 0.504009855407;
    msg.w = 0.44941087108;
    msg.bias_psi = 0.794927718083;
    msg.bias_r = 0.748667934114;

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
    msg.setTimeStamp(0.874085472383);
    msg.setSource(7501U);
    msg.setSourceEntity(22U);
    msg.setDestination(43291U);
    msg.setDestinationEntity(92U);
    msg.bias_psi = 0.586852570919;
    msg.bias_r = 0.249441946557;
    msg.cog = 0.156206156152;
    msg.cyaw = 0.624948331735;
    msg.lbl_rej_level = 0.312739539351;
    msg.gps_rej_level = 0.866183794653;
    msg.custom_x = 0.949151508469;
    msg.custom_y = 0.222424014154;
    msg.custom_z = 0.360332695119;

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
    msg.setTimeStamp(0.561146224279);
    msg.setSource(34070U);
    msg.setSourceEntity(63U);
    msg.setDestination(24476U);
    msg.setDestinationEntity(37U);
    msg.bias_psi = 0.973942668747;
    msg.bias_r = 0.407995950144;
    msg.cog = 0.561328575806;
    msg.cyaw = 0.379202074252;
    msg.lbl_rej_level = 0.045099491965;
    msg.gps_rej_level = 0.922987497587;
    msg.custom_x = 0.754864481402;
    msg.custom_y = 0.326935867093;
    msg.custom_z = 0.984846958534;

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
    msg.setTimeStamp(0.496984221361);
    msg.setSource(42035U);
    msg.setSourceEntity(50U);
    msg.setDestination(27189U);
    msg.setDestinationEntity(227U);
    msg.bias_psi = 0.521660927378;
    msg.bias_r = 0.862473202333;
    msg.cog = 0.737397996109;
    msg.cyaw = 0.238085232631;
    msg.lbl_rej_level = 0.493540129921;
    msg.gps_rej_level = 0.0708936155918;
    msg.custom_x = 0.319087119513;
    msg.custom_y = 0.285361167622;
    msg.custom_z = 0.683068685003;

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
    msg.setTimeStamp(0.0880513023979);
    msg.setSource(61073U);
    msg.setSourceEntity(113U);
    msg.setDestination(27964U);
    msg.setDestinationEntity(119U);
    msg.utc_time = 0.038460862002;
    msg.reason = 31U;

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
    msg.setTimeStamp(0.366029405367);
    msg.setSource(17551U);
    msg.setSourceEntity(138U);
    msg.setDestination(39287U);
    msg.setDestinationEntity(57U);
    msg.utc_time = 0.930356309737;
    msg.reason = 192U;

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
    msg.setTimeStamp(0.0227375094746);
    msg.setSource(44805U);
    msg.setSourceEntity(191U);
    msg.setDestination(46096U);
    msg.setDestinationEntity(179U);
    msg.utc_time = 0.88071327702;
    msg.reason = 115U;

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
    msg.setTimeStamp(0.173131409586);
    msg.setSource(38657U);
    msg.setSourceEntity(118U);
    msg.setDestination(49976U);
    msg.setDestinationEntity(212U);
    msg.id = 253U;
    msg.range = 0.141186711383;
    msg.acceptance = 42U;

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
    msg.setTimeStamp(0.60391510919);
    msg.setSource(51468U);
    msg.setSourceEntity(133U);
    msg.setDestination(17430U);
    msg.setDestinationEntity(53U);
    msg.id = 210U;
    msg.range = 0.134510919805;
    msg.acceptance = 200U;

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
    msg.setTimeStamp(0.194478099761);
    msg.setSource(59450U);
    msg.setSourceEntity(81U);
    msg.setDestination(30559U);
    msg.setDestinationEntity(97U);
    msg.id = 156U;
    msg.range = 0.0099606356391;
    msg.acceptance = 238U;

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
    msg.setTimeStamp(0.245250447416);
    msg.setSource(37010U);
    msg.setSourceEntity(127U);
    msg.setDestination(12118U);
    msg.setDestinationEntity(197U);
    msg.type = 251U;
    msg.reason = 87U;
    msg.value = 0.143652812023;
    msg.timestep = 0.247695277309;

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
    msg.setTimeStamp(0.705585648217);
    msg.setSource(60538U);
    msg.setSourceEntity(41U);
    msg.setDestination(56322U);
    msg.setDestinationEntity(54U);
    msg.type = 86U;
    msg.reason = 218U;
    msg.value = 0.36988475902;
    msg.timestep = 0.166340155166;

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
    msg.setTimeStamp(0.728679997451);
    msg.setSource(54243U);
    msg.setSourceEntity(126U);
    msg.setDestination(48114U);
    msg.setDestinationEntity(75U);
    msg.type = 35U;
    msg.reason = 236U;
    msg.value = 0.09283850795;
    msg.timestep = 0.368950269337;

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
    msg.setTimeStamp(0.385545616749);
    msg.setSource(2400U);
    msg.setSourceEntity(237U);
    msg.setDestination(48354U);
    msg.setDestinationEntity(91U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HCFJQBTNYMLENEDQZTKYQJLITJIVXXQZNWZXGRGNZKWTPLNUNTTNDBJUEMHXUZSYVWBOPUXAAODAAFBFGRCGMBRMICGADAYYBWGCFMKMFOXCPEYTEHKYOOQSYVDJYPIJXLITHUMSHRZBGPQMDMVKUEKHXRCQZIHTIVWLSDVBVCPKNRESOWVF");
    tmp_msg_0.lat = 0.518471510281;
    tmp_msg_0.lon = 0.415564984694;
    tmp_msg_0.depth = 0.13636649059;
    tmp_msg_0.query_channel = 223U;
    tmp_msg_0.reply_channel = 224U;
    tmp_msg_0.transponder_delay = 89U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.04923467172;
    msg.y = 0.0816538877247;
    msg.var_x = 0.198191646126;
    msg.var_y = 0.235857168045;
    msg.distance = 0.850596319509;

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
    msg.setTimeStamp(0.502495794963);
    msg.setSource(8987U);
    msg.setSourceEntity(251U);
    msg.setDestination(41666U);
    msg.setDestinationEntity(1U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZMHIBVUILDJAMJPXLPFQYTRGSFSSFWKNKJUDHXROMVTAUNYVKCGAWTENDZCRWQQXHPSSIWLSYGVBPFZRUHCTOJGFDUDXPBNCUHQXWVCSREDLFGOISYWUTBWPPYHAKIVAXKCFREAEJFXCJQIBMW");
    tmp_msg_0.lat = 0.793864360914;
    tmp_msg_0.lon = 0.950832884347;
    tmp_msg_0.depth = 0.637847050844;
    tmp_msg_0.query_channel = 93U;
    tmp_msg_0.reply_channel = 65U;
    tmp_msg_0.transponder_delay = 13U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.109849668106;
    msg.y = 0.298878937003;
    msg.var_x = 0.554383171518;
    msg.var_y = 0.242897160019;
    msg.distance = 0.633190897942;

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
    msg.setTimeStamp(0.0951826199606);
    msg.setSource(59192U);
    msg.setSourceEntity(120U);
    msg.setDestination(948U);
    msg.setDestinationEntity(24U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JEEUWEBPUCBQBDZEOBCORCSKHYVUQMPLDABGUZNMOYYENACYQDQRIWUASLZQYIPUQPHGCNZDRDDWWGGADLQYXRAHATVPKJNJFKIZKXFPLXKNGGGJSAYACHITYBOQFXRCPIXUAWEZDCWZFRPHNKFEMHRFCOISQZUXXVGLJQJZFXSVKSVFVTELOJMDOPHRKTNIHTYLSEMFNZUOULMTH");
    tmp_msg_0.lat = 0.857522887083;
    tmp_msg_0.lon = 0.584781334855;
    tmp_msg_0.depth = 0.89462176609;
    tmp_msg_0.query_channel = 171U;
    tmp_msg_0.reply_channel = 160U;
    tmp_msg_0.transponder_delay = 148U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.755753510666;
    msg.y = 0.277668856145;
    msg.var_x = 0.53164082474;
    msg.var_y = 0.682762861541;
    msg.distance = 0.470109954347;

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
    msg.setTimeStamp(0.971876753456);
    msg.setSource(47438U);
    msg.setSourceEntity(123U);
    msg.setDestination(21164U);
    msg.setDestinationEntity(194U);
    msg.state = 233U;

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
    msg.setTimeStamp(0.144634393111);
    msg.setSource(10420U);
    msg.setSourceEntity(224U);
    msg.setDestination(17870U);
    msg.setDestinationEntity(209U);
    msg.state = 99U;

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
    msg.setTimeStamp(0.22058470447);
    msg.setSource(26436U);
    msg.setSourceEntity(93U);
    msg.setDestination(18148U);
    msg.setDestinationEntity(105U);
    msg.state = 64U;

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
    msg.setTimeStamp(0.00515041958832);
    msg.setSource(41642U);
    msg.setSourceEntity(107U);
    msg.setDestination(2215U);
    msg.setDestinationEntity(67U);
    msg.x = 0.0365156270256;
    msg.y = 0.271510009664;
    msg.z = 0.0252503740587;

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
    msg.setTimeStamp(0.460706212161);
    msg.setSource(55073U);
    msg.setSourceEntity(153U);
    msg.setDestination(59302U);
    msg.setDestinationEntity(215U);
    msg.x = 0.50465556678;
    msg.y = 0.916775304504;
    msg.z = 0.161428801052;

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
    msg.setTimeStamp(0.261499326924);
    msg.setSource(23204U);
    msg.setSourceEntity(212U);
    msg.setDestination(14517U);
    msg.setDestinationEntity(100U);
    msg.x = 0.833158231342;
    msg.y = 0.237049465178;
    msg.z = 0.612650529819;

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
    msg.setTimeStamp(0.853042602179);
    msg.setSource(62596U);
    msg.setSourceEntity(172U);
    msg.setDestination(64511U);
    msg.setDestinationEntity(254U);
    msg.va = 0.229693404804;
    msg.aoa = 0.926202668068;
    msg.ssa = 0.0431124286242;

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
    msg.setTimeStamp(0.529438607263);
    msg.setSource(37649U);
    msg.setSourceEntity(220U);
    msg.setDestination(11812U);
    msg.setDestinationEntity(244U);
    msg.va = 0.0656672554456;
    msg.aoa = 0.390829898649;
    msg.ssa = 0.0231607455572;

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
    msg.setTimeStamp(0.613206202225);
    msg.setSource(11021U);
    msg.setSourceEntity(73U);
    msg.setDestination(45592U);
    msg.setDestinationEntity(177U);
    msg.va = 0.30105371171;
    msg.aoa = 0.900719791975;
    msg.ssa = 0.451186342853;

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
    msg.setTimeStamp(0.73533452668);
    msg.setSource(11244U);
    msg.setSourceEntity(52U);
    msg.setDestination(27718U);
    msg.setDestinationEntity(151U);
    msg.value = 0.685044146162;

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
    msg.setTimeStamp(0.338136716517);
    msg.setSource(44071U);
    msg.setSourceEntity(213U);
    msg.setDestination(6112U);
    msg.setDestinationEntity(235U);
    msg.value = 0.884027381648;

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
    msg.setTimeStamp(0.824736653517);
    msg.setSource(5313U);
    msg.setSourceEntity(225U);
    msg.setDestination(44403U);
    msg.setDestinationEntity(115U);
    msg.value = 0.713654342263;

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
    msg.setTimeStamp(0.262921149714);
    msg.setSource(25986U);
    msg.setSourceEntity(41U);
    msg.setDestination(17585U);
    msg.setDestinationEntity(236U);
    msg.value = 0.423234422464;
    msg.z_units = 40U;

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
    msg.setTimeStamp(0.413237430789);
    msg.setSource(63713U);
    msg.setSourceEntity(7U);
    msg.setDestination(17315U);
    msg.setDestinationEntity(141U);
    msg.value = 0.554971759289;
    msg.z_units = 78U;

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
    msg.setTimeStamp(0.962914639195);
    msg.setSource(27225U);
    msg.setSourceEntity(35U);
    msg.setDestination(12596U);
    msg.setDestinationEntity(236U);
    msg.value = 0.325143560232;
    msg.z_units = 146U;

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
    msg.setTimeStamp(0.757942179359);
    msg.setSource(31195U);
    msg.setSourceEntity(102U);
    msg.setDestination(17786U);
    msg.setDestinationEntity(108U);
    msg.value = 0.291068236305;
    msg.speed_units = 149U;

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
    msg.setTimeStamp(0.785179482243);
    msg.setSource(27058U);
    msg.setSourceEntity(119U);
    msg.setDestination(38457U);
    msg.setDestinationEntity(51U);
    msg.value = 0.557303813713;
    msg.speed_units = 45U;

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
    msg.setTimeStamp(0.919404567105);
    msg.setSource(27343U);
    msg.setSourceEntity(92U);
    msg.setDestination(34167U);
    msg.setDestinationEntity(121U);
    msg.value = 0.822780612446;
    msg.speed_units = 6U;

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
    msg.setTimeStamp(0.149852307508);
    msg.setSource(38631U);
    msg.setSourceEntity(176U);
    msg.setDestination(25914U);
    msg.setDestinationEntity(191U);
    msg.value = 0.77306697984;

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
    msg.setTimeStamp(0.0315111898709);
    msg.setSource(61916U);
    msg.setSourceEntity(80U);
    msg.setDestination(11035U);
    msg.setDestinationEntity(51U);
    msg.value = 0.687303117542;

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
    msg.setTimeStamp(0.0174102225606);
    msg.setSource(33004U);
    msg.setSourceEntity(89U);
    msg.setDestination(57509U);
    msg.setDestinationEntity(17U);
    msg.value = 0.608684650268;

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
    msg.setTimeStamp(0.27621459646);
    msg.setSource(26292U);
    msg.setSourceEntity(21U);
    msg.setDestination(14739U);
    msg.setDestinationEntity(163U);
    msg.value = 0.281530799353;

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
    msg.setTimeStamp(0.226061797173);
    msg.setSource(44555U);
    msg.setSourceEntity(156U);
    msg.setDestination(60247U);
    msg.setDestinationEntity(215U);
    msg.value = 0.292620555205;

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
    msg.setTimeStamp(0.0732264119806);
    msg.setSource(18588U);
    msg.setSourceEntity(113U);
    msg.setDestination(41153U);
    msg.setDestinationEntity(63U);
    msg.value = 0.500367302046;

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
    msg.setTimeStamp(0.636177415059);
    msg.setSource(57361U);
    msg.setSourceEntity(149U);
    msg.setDestination(39527U);
    msg.setDestinationEntity(212U);
    msg.value = 0.322960063747;

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
    msg.setTimeStamp(0.42050470255);
    msg.setSource(26719U);
    msg.setSourceEntity(66U);
    msg.setDestination(6554U);
    msg.setDestinationEntity(169U);
    msg.value = 0.32530969458;

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
    msg.setTimeStamp(0.826762503332);
    msg.setSource(33923U);
    msg.setSourceEntity(202U);
    msg.setDestination(1339U);
    msg.setDestinationEntity(232U);
    msg.value = 0.392215496004;

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
    msg.setTimeStamp(0.581614130668);
    msg.setSource(64897U);
    msg.setSourceEntity(30U);
    msg.setDestination(10642U);
    msg.setDestinationEntity(244U);
    msg.path_ref = 2017981350U;
    msg.start_lat = 0.907042874458;
    msg.start_lon = 0.379569386218;
    msg.start_z = 0.855563863778;
    msg.start_z_units = 144U;
    msg.end_lat = 0.894553378249;
    msg.end_lon = 0.123173016857;
    msg.end_z = 0.658100492165;
    msg.end_z_units = 118U;
    msg.speed = 0.256729508192;
    msg.speed_units = 13U;
    msg.lradius = 0.29702630097;
    msg.flags = 205U;

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
    msg.setTimeStamp(0.00258900528702);
    msg.setSource(39119U);
    msg.setSourceEntity(150U);
    msg.setDestination(51562U);
    msg.setDestinationEntity(21U);
    msg.path_ref = 1088651843U;
    msg.start_lat = 0.602971704667;
    msg.start_lon = 0.108780421098;
    msg.start_z = 0.814225774385;
    msg.start_z_units = 138U;
    msg.end_lat = 0.716541376793;
    msg.end_lon = 0.671242396708;
    msg.end_z = 0.74019068864;
    msg.end_z_units = 9U;
    msg.speed = 0.897300886622;
    msg.speed_units = 88U;
    msg.lradius = 0.818700589645;
    msg.flags = 147U;

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
    msg.setTimeStamp(0.00845256331597);
    msg.setSource(7563U);
    msg.setSourceEntity(73U);
    msg.setDestination(40828U);
    msg.setDestinationEntity(69U);
    msg.path_ref = 704910606U;
    msg.start_lat = 0.138385112422;
    msg.start_lon = 0.0699343183044;
    msg.start_z = 0.0545693126654;
    msg.start_z_units = 250U;
    msg.end_lat = 0.484761316682;
    msg.end_lon = 0.242732812631;
    msg.end_z = 0.476209005706;
    msg.end_z_units = 3U;
    msg.speed = 0.536726014478;
    msg.speed_units = 193U;
    msg.lradius = 0.425149842093;
    msg.flags = 158U;

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
    msg.setTimeStamp(0.18428958429);
    msg.setSource(32617U);
    msg.setSourceEntity(136U);
    msg.setDestination(38925U);
    msg.setDestinationEntity(207U);
    msg.x = 0.563716894343;
    msg.y = 0.740913247714;
    msg.z = 0.0215906847443;
    msg.k = 0.747336141662;
    msg.m = 0.446019494694;
    msg.n = 0.822192233858;
    msg.flags = 176U;

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
    msg.setTimeStamp(0.000810907690242);
    msg.setSource(26802U);
    msg.setSourceEntity(8U);
    msg.setDestination(30953U);
    msg.setDestinationEntity(164U);
    msg.x = 0.902344542481;
    msg.y = 0.966127807329;
    msg.z = 0.813968725095;
    msg.k = 0.789571798306;
    msg.m = 0.717797214451;
    msg.n = 0.478650238616;
    msg.flags = 227U;

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
    msg.setTimeStamp(0.127026742326);
    msg.setSource(3995U);
    msg.setSourceEntity(68U);
    msg.setDestination(10697U);
    msg.setDestinationEntity(69U);
    msg.x = 0.718159756165;
    msg.y = 0.0152465473359;
    msg.z = 0.605165684569;
    msg.k = 0.913313281947;
    msg.m = 0.179399736376;
    msg.n = 0.0977045062349;
    msg.flags = 12U;

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
    msg.setTimeStamp(0.305395650967);
    msg.setSource(63430U);
    msg.setSourceEntity(95U);
    msg.setDestination(38464U);
    msg.setDestinationEntity(12U);
    msg.value = 0.214715691413;

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
    msg.setTimeStamp(0.642667503797);
    msg.setSource(90U);
    msg.setSourceEntity(155U);
    msg.setDestination(45358U);
    msg.setDestinationEntity(39U);
    msg.value = 0.221459170991;

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
    msg.setTimeStamp(0.39715698622);
    msg.setSource(52218U);
    msg.setSourceEntity(181U);
    msg.setDestination(54844U);
    msg.setDestinationEntity(92U);
    msg.value = 0.631941622839;

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
    msg.setTimeStamp(0.391195143145);
    msg.setSource(40352U);
    msg.setSourceEntity(45U);
    msg.setDestination(42815U);
    msg.setDestinationEntity(134U);
    msg.u = 0.642939240424;
    msg.v = 0.773817784942;
    msg.w = 0.445937857147;
    msg.p = 0.972886602932;
    msg.q = 0.0873049044011;
    msg.r = 0.938589029722;
    msg.flags = 54U;

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
    msg.setTimeStamp(0.136660385545);
    msg.setSource(49122U);
    msg.setSourceEntity(109U);
    msg.setDestination(30395U);
    msg.setDestinationEntity(94U);
    msg.u = 0.484535876406;
    msg.v = 0.68788396743;
    msg.w = 0.9835965634;
    msg.p = 0.859787105412;
    msg.q = 0.706840689977;
    msg.r = 0.410241118249;
    msg.flags = 182U;

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
    msg.setTimeStamp(0.299118716634);
    msg.setSource(9894U);
    msg.setSourceEntity(187U);
    msg.setDestination(10637U);
    msg.setDestinationEntity(122U);
    msg.u = 0.28953071875;
    msg.v = 0.287062870054;
    msg.w = 0.972649223848;
    msg.p = 0.606874344811;
    msg.q = 0.13866899513;
    msg.r = 0.613287542317;
    msg.flags = 91U;

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
    msg.setTimeStamp(0.65958817222);
    msg.setSource(64565U);
    msg.setSourceEntity(67U);
    msg.setDestination(24391U);
    msg.setDestinationEntity(144U);
    msg.path_ref = 3222953865U;
    msg.start_lat = 0.807843017662;
    msg.start_lon = 0.234238871101;
    msg.start_z = 0.59016084982;
    msg.start_z_units = 209U;
    msg.end_lat = 0.992904876383;
    msg.end_lon = 0.632166615705;
    msg.end_z = 0.916724176885;
    msg.end_z_units = 76U;
    msg.lradius = 0.345190273419;
    msg.flags = 238U;
    msg.x = 0.653103693599;
    msg.y = 0.0772765188405;
    msg.z = 0.853423251451;
    msg.vx = 0.00378162301505;
    msg.vy = 0.492888473665;
    msg.vz = 0.625955122363;
    msg.course_error = 0.323858843677;
    msg.eta = 64033U;

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
    msg.setTimeStamp(0.897206390949);
    msg.setSource(36688U);
    msg.setSourceEntity(118U);
    msg.setDestination(14574U);
    msg.setDestinationEntity(91U);
    msg.path_ref = 3259331902U;
    msg.start_lat = 0.454855821393;
    msg.start_lon = 0.064490222878;
    msg.start_z = 0.0394505882632;
    msg.start_z_units = 123U;
    msg.end_lat = 0.211490766346;
    msg.end_lon = 0.681073042137;
    msg.end_z = 0.518537601629;
    msg.end_z_units = 130U;
    msg.lradius = 0.574347279726;
    msg.flags = 53U;
    msg.x = 0.414128443698;
    msg.y = 0.758307635532;
    msg.z = 0.530245483012;
    msg.vx = 0.384227658;
    msg.vy = 0.331535313289;
    msg.vz = 0.799624341825;
    msg.course_error = 0.0726594843981;
    msg.eta = 39865U;

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
    msg.setTimeStamp(0.236066733572);
    msg.setSource(30139U);
    msg.setSourceEntity(34U);
    msg.setDestination(47870U);
    msg.setDestinationEntity(69U);
    msg.path_ref = 571227882U;
    msg.start_lat = 0.461611646318;
    msg.start_lon = 0.551901106804;
    msg.start_z = 0.709770380798;
    msg.start_z_units = 117U;
    msg.end_lat = 0.636271031902;
    msg.end_lon = 0.801962021299;
    msg.end_z = 0.278174896992;
    msg.end_z_units = 61U;
    msg.lradius = 0.753379895396;
    msg.flags = 63U;
    msg.x = 0.416161292976;
    msg.y = 0.983510536343;
    msg.z = 0.457991617082;
    msg.vx = 0.732234943512;
    msg.vy = 0.32122457937;
    msg.vz = 0.629894024455;
    msg.course_error = 0.559719259139;
    msg.eta = 64692U;

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
    msg.setTimeStamp(0.391180877713);
    msg.setSource(48372U);
    msg.setSourceEntity(31U);
    msg.setDestination(33146U);
    msg.setDestinationEntity(156U);
    msg.k = 0.117585086951;
    msg.m = 0.441133019464;
    msg.n = 0.78818998293;

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
    msg.setTimeStamp(0.983076961983);
    msg.setSource(45875U);
    msg.setSourceEntity(146U);
    msg.setDestination(54700U);
    msg.setDestinationEntity(245U);
    msg.k = 0.501259666656;
    msg.m = 0.751779493209;
    msg.n = 0.171648252239;

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
    msg.setTimeStamp(0.885865482702);
    msg.setSource(1286U);
    msg.setSourceEntity(137U);
    msg.setDestination(36428U);
    msg.setDestinationEntity(66U);
    msg.k = 0.273246327357;
    msg.m = 0.347660584531;
    msg.n = 0.216124920767;

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
    msg.setTimeStamp(0.162475492171);
    msg.setSource(14637U);
    msg.setSourceEntity(214U);
    msg.setDestination(56956U);
    msg.setDestinationEntity(249U);
    msg.p = 0.326915489841;
    msg.i = 0.721159431161;
    msg.d = 0.71201098828;
    msg.a = 0.112687414545;

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
    msg.setTimeStamp(0.325403710068);
    msg.setSource(41037U);
    msg.setSourceEntity(78U);
    msg.setDestination(12067U);
    msg.setDestinationEntity(227U);
    msg.p = 0.526961115323;
    msg.i = 0.230368498604;
    msg.d = 0.541209539065;
    msg.a = 0.340487332907;

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
    msg.setTimeStamp(0.211562053747);
    msg.setSource(39097U);
    msg.setSourceEntity(252U);
    msg.setDestination(53045U);
    msg.setDestinationEntity(58U);
    msg.p = 0.900019008406;
    msg.i = 0.643634626131;
    msg.d = 0.929353288697;
    msg.a = 0.86347559331;

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
    msg.setTimeStamp(0.804535030945);
    msg.setSource(56232U);
    msg.setSourceEntity(175U);
    msg.setDestination(6808U);
    msg.setDestinationEntity(134U);
    msg.op = 245U;

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
    msg.setTimeStamp(0.716391150476);
    msg.setSource(55974U);
    msg.setSourceEntity(213U);
    msg.setDestination(51625U);
    msg.setDestinationEntity(25U);
    msg.op = 42U;

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
    msg.setTimeStamp(0.310351108127);
    msg.setSource(57678U);
    msg.setSourceEntity(37U);
    msg.setDestination(54685U);
    msg.setDestinationEntity(54U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.134496359415);
    msg.setSource(55231U);
    msg.setSourceEntity(91U);
    msg.setDestination(39847U);
    msg.setDestinationEntity(13U);
    msg.x = 0.115906093688;
    msg.y = 0.0412399931158;
    msg.z = 0.873508832121;
    msg.vx = 0.604058158481;
    msg.vy = 0.247952610948;
    msg.vz = 0.676312658502;
    msg.ax = 0.746186575832;
    msg.ay = 0.629709485183;
    msg.az = 0.713616725663;
    msg.flags = 32251U;

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
    msg.setTimeStamp(0.0108112063723);
    msg.setSource(63273U);
    msg.setSourceEntity(61U);
    msg.setDestination(45874U);
    msg.setDestinationEntity(214U);
    msg.x = 0.0209394605465;
    msg.y = 0.889219332972;
    msg.z = 0.965115553725;
    msg.vx = 0.541283491841;
    msg.vy = 0.974033728708;
    msg.vz = 0.186924002495;
    msg.ax = 0.201162595589;
    msg.ay = 0.847113456283;
    msg.az = 0.279981139937;
    msg.flags = 22865U;

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
    msg.setTimeStamp(0.244094033788);
    msg.setSource(38019U);
    msg.setSourceEntity(9U);
    msg.setDestination(61782U);
    msg.setDestinationEntity(167U);
    msg.x = 0.425031332834;
    msg.y = 0.80991879818;
    msg.z = 0.447970357271;
    msg.vx = 0.760600081233;
    msg.vy = 0.443806530148;
    msg.vz = 0.950130598945;
    msg.ax = 0.588857358088;
    msg.ay = 0.799224468767;
    msg.az = 0.754382991501;
    msg.flags = 3289U;

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
    msg.setTimeStamp(0.00664016928131);
    msg.setSource(31148U);
    msg.setSourceEntity(178U);
    msg.setDestination(32537U);
    msg.setDestinationEntity(54U);
    msg.value = 0.0874112196712;

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
    msg.setTimeStamp(0.460080181355);
    msg.setSource(29919U);
    msg.setSourceEntity(179U);
    msg.setDestination(8700U);
    msg.setDestinationEntity(173U);
    msg.value = 0.381855845708;

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
    msg.setTimeStamp(0.994091375884);
    msg.setSource(44572U);
    msg.setSourceEntity(209U);
    msg.setDestination(24619U);
    msg.setDestinationEntity(134U);
    msg.value = 0.178064978062;

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
    msg.setTimeStamp(0.491076582606);
    msg.setSource(21811U);
    msg.setSourceEntity(22U);
    msg.setDestination(45567U);
    msg.setDestinationEntity(24U);
    msg.timeout = 27475U;
    msg.lat = 0.933603133789;
    msg.lon = 0.49155889558;
    msg.z = 0.0310666644223;
    msg.z_units = 247U;
    msg.speed = 0.282033077711;
    msg.speed_units = 168U;
    msg.roll = 0.369453334572;
    msg.pitch = 0.526214382699;
    msg.yaw = 0.538412554548;
    msg.custom.assign("EKSHGTQQLXVULVRYILNJAINRUOKETPSFLAKSXHWPHQEPGNQMANTFCYIGEQJQMSDOVLXXFTXUQBZZPOKOHHZGZWRQUCIMHFKVUGLESSOCEXRFXRBMITEDVUZBIPVVXZDU");

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
    msg.setTimeStamp(0.414722013542);
    msg.setSource(52485U);
    msg.setSourceEntity(2U);
    msg.setDestination(10797U);
    msg.setDestinationEntity(56U);
    msg.timeout = 56870U;
    msg.lat = 0.840129763061;
    msg.lon = 0.615984682363;
    msg.z = 0.489612258349;
    msg.z_units = 31U;
    msg.speed = 0.184912357784;
    msg.speed_units = 28U;
    msg.roll = 0.0405807329966;
    msg.pitch = 0.409578285697;
    msg.yaw = 0.561884553255;
    msg.custom.assign("GWCNOEYUKUIKVBXHNOKAJMKWJROOSGBJCEEVWKMWWEMMZQVXSBPXRTDIITOGSVAUQPZTDCLBAECAKHPJCFATDVXFAGGLTJPJFSRMURALQSEVEZVJLFWYFMNGNQAMYAUQBKCZIZTNPGZOMBIYBLHSENDZ");

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
    msg.setTimeStamp(0.743718594959);
    msg.setSource(19740U);
    msg.setSourceEntity(57U);
    msg.setDestination(39796U);
    msg.setDestinationEntity(53U);
    msg.timeout = 63520U;
    msg.lat = 0.704101465645;
    msg.lon = 0.00548462757925;
    msg.z = 0.782944149089;
    msg.z_units = 240U;
    msg.speed = 0.988060595287;
    msg.speed_units = 167U;
    msg.roll = 0.590504169622;
    msg.pitch = 0.516424293912;
    msg.yaw = 0.273486752677;
    msg.custom.assign("ZGVBORGKENXUCWQBAFLIDMEDCGQSOZXMZWYQCSQRIYIVZZTYJVYWMUFKGBMHDKXTURCIJRWQHAACEIPSUZRIUTDBOOFUTHFHNFMFTSVYPAPRUSVSHPWVCVNZWETXHATNKSUGXHAFMOPVQLPLJJNHLDAXEFBWAWKLOAITCJLPLCPXCJGYREIGLWPJAZWYIBBXSNHVNKGEK");

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
    msg.setTimeStamp(0.778746121449);
    msg.setSource(29616U);
    msg.setSourceEntity(155U);
    msg.setDestination(61558U);
    msg.setDestinationEntity(222U);
    msg.timeout = 47331U;
    msg.lat = 0.646992853456;
    msg.lon = 0.033083369571;
    msg.z = 0.300609503101;
    msg.z_units = 185U;
    msg.speed = 0.442900969133;
    msg.speed_units = 214U;
    msg.duration = 22678U;
    msg.radius = 0.35233180691;
    msg.flags = 173U;
    msg.custom.assign("BUKPQNFUHFMKMCYNMHUYGPCOSIGDSZWVQCVRBUONFQFCZDHWYGJWJJOUJVAZMRRACSLYETIOBTWXTPJJOFCKKYSEBLKOBDNRGYZECHOMIJIMCHIRUDEHLPZSDXBODQRIPXSIPLCZDKRHEQLXMXNWWKXUSZZASZHTFTLBEBVIGLPPNJBVCSYVNADTVQRFUJLGWGWRFOXYRKLUGDXFHAHLVGXTDAK");

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
    msg.setTimeStamp(0.489344123628);
    msg.setSource(37985U);
    msg.setSourceEntity(150U);
    msg.setDestination(30404U);
    msg.setDestinationEntity(61U);
    msg.timeout = 15253U;
    msg.lat = 0.470761060662;
    msg.lon = 0.992890084496;
    msg.z = 0.675362390632;
    msg.z_units = 92U;
    msg.speed = 0.960150939404;
    msg.speed_units = 244U;
    msg.duration = 31895U;
    msg.radius = 0.802466523428;
    msg.flags = 69U;
    msg.custom.assign("NXKUJFXWTVHJBNSOODJQXQVUPNUTMRPIFDAZXECIRCZHKCFFNQCHUSQCPMNXWIDULXHQGUQZITXRSKJYWPGFSQTYGGVREVWLOOOHRYNRAYHKAUGETMMJYZKHZEKLZTEZTHDVPLWTXHNCLEMLIJBLSIIAKKWMENICDVOJSVFTTPMSFBOYDWMGAQDSGDNYPSJMWUPYDAWRZGLMVNHYROAPBWELRLAJOCDCVKEZFQUCKSXAQ");

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
    msg.setTimeStamp(0.424111866704);
    msg.setSource(12042U);
    msg.setSourceEntity(69U);
    msg.setDestination(27544U);
    msg.setDestinationEntity(247U);
    msg.timeout = 23571U;
    msg.lat = 0.461682791963;
    msg.lon = 0.77853789072;
    msg.z = 0.287442389321;
    msg.z_units = 97U;
    msg.speed = 0.552870769519;
    msg.speed_units = 85U;
    msg.duration = 1056U;
    msg.radius = 0.909047197311;
    msg.flags = 137U;
    msg.custom.assign("VPJBZMJXLFVUBOMZNXFOICUEBXMQWSJZIGLGIOETBUQXCEBSLUUEZYYUVSWMRVFAHMEOEEHYKMLSQQTRYVXPOYQVYLJSIPYDQAZUTCCYPKXRCLISYJRACWDWFETPDRKTZINTGACDNPLWVAWTSQDFISJPGBPKAYOGLJRNWJVRZQGKIFMZFK");

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
    msg.setTimeStamp(0.886578024144);
    msg.setSource(12105U);
    msg.setSourceEntity(209U);
    msg.setDestination(59638U);
    msg.setDestinationEntity(58U);
    msg.custom.assign("QVXUYTKSHXOIGELXVUNMUMCZUQZGSPTBRBZCPOJQARMNREBUWJGEBAEVJRXXATUJLXYNWEAJVRGJZSFDBPQMEOBBKISYANDSVDLRHYVEHNWEQHAUGKGNQRHDCPOXKJPYTZEGWOTFOYTJBWOFSFYQUFDTXIAWAFILFNCLNLKCWIFHJHHIMCAGBNZMVLPDGOPKZDPVKOKUTLVYIRSYQ");

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
    msg.setTimeStamp(0.714809226739);
    msg.setSource(37185U);
    msg.setSourceEntity(220U);
    msg.setDestination(4173U);
    msg.setDestinationEntity(73U);
    msg.custom.assign("IMDUUUPZFONCTGGAHXWXFGEICJMUELLNNLAYAVPCAYBFQJDKOCOQJUBQILJDCXEYR");

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
    msg.setTimeStamp(0.268422405739);
    msg.setSource(28587U);
    msg.setSourceEntity(54U);
    msg.setDestination(6112U);
    msg.setDestinationEntity(101U);
    msg.custom.assign("QEFLREPKTK");

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
    msg.setTimeStamp(0.0561629762726);
    msg.setSource(1319U);
    msg.setSourceEntity(250U);
    msg.setDestination(48720U);
    msg.setDestinationEntity(209U);
    msg.timeout = 54941U;
    msg.lat = 0.595496068794;
    msg.lon = 0.213088172457;
    msg.z = 0.212227416482;
    msg.z_units = 28U;
    msg.duration = 17078U;
    msg.speed = 0.0415394412629;
    msg.speed_units = 106U;
    msg.type = 60U;
    msg.radius = 0.504803635632;
    msg.length = 0.466290893693;
    msg.bearing = 0.982397823907;
    msg.direction = 91U;
    msg.custom.assign("JXPZTAJXMLWEVCRMETBJZCUBQRSQJRAGHZKFDGJYTONIBFVNZYVULDEONWSHIHPVS");

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
    msg.setTimeStamp(0.742440106824);
    msg.setSource(63239U);
    msg.setSourceEntity(118U);
    msg.setDestination(61119U);
    msg.setDestinationEntity(7U);
    msg.timeout = 44924U;
    msg.lat = 0.788234536828;
    msg.lon = 0.0033318161294;
    msg.z = 0.126459713033;
    msg.z_units = 227U;
    msg.duration = 50424U;
    msg.speed = 0.0841926163391;
    msg.speed_units = 97U;
    msg.type = 106U;
    msg.radius = 0.973460815384;
    msg.length = 0.932809392937;
    msg.bearing = 0.217742897469;
    msg.direction = 101U;
    msg.custom.assign("OVHRLTQSYIQYHTYCUIJQXWEEYANPXXS");

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
    msg.setTimeStamp(0.999904027288);
    msg.setSource(32549U);
    msg.setSourceEntity(10U);
    msg.setDestination(48137U);
    msg.setDestinationEntity(211U);
    msg.timeout = 57389U;
    msg.lat = 0.558993060552;
    msg.lon = 0.505863636495;
    msg.z = 0.698974353027;
    msg.z_units = 1U;
    msg.duration = 5817U;
    msg.speed = 0.181062172871;
    msg.speed_units = 205U;
    msg.type = 175U;
    msg.radius = 0.131106246154;
    msg.length = 0.346972833366;
    msg.bearing = 0.952285339197;
    msg.direction = 103U;
    msg.custom.assign("JFKEVTNKHZNMOKQLWVKLVLLHREUZPYTZJLWKPGQSZXGGOMRIZGHRBLYLJQYLUJTBPZCBECDPFRHCIAMMZZSVCITRREYWRIHEUFDIVMQYTEDWIPLDRNXIIMCIHXTCEFAUCNCPPYIUGNBDPXQOYBFVGSKETEDFOGFPHRVWJAFOJFUDVUQSZOTHQNUSKZJJY");

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
    msg.setTimeStamp(0.395690669107);
    msg.setSource(18243U);
    msg.setSourceEntity(239U);
    msg.setDestination(58992U);
    msg.setDestinationEntity(245U);
    msg.duration = 62485U;
    msg.custom.assign("VJKDYEGYTIUYYTSDJNKQFFOZFACZLGLTANPBFNINEECHBEAXDBOUSTLQJCXXTAOKHMYLRMAAHQWSZIVPXXPPWABTSBFXEUGNH");

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
    msg.setTimeStamp(0.151937617657);
    msg.setSource(46290U);
    msg.setSourceEntity(21U);
    msg.setDestination(20048U);
    msg.setDestinationEntity(140U);
    msg.duration = 7748U;
    msg.custom.assign("ZLSFVFWXCBKIQZXGTLIBYLDPLIJGHZERJVRBJXRRPDQPEUIMCKIAAASJRPXFTRQBSQVAVHOCRKWPCUMIALJQMTTXFQTKWLFEYNFSEEWPSGVUGNCVZGONNCMFLCBCWPNAJHFZYFGERARLGEVWSZXQDSTMSWNJDZ");

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
    msg.setTimeStamp(0.0637574647592);
    msg.setSource(6030U);
    msg.setSourceEntity(19U);
    msg.setDestination(3159U);
    msg.setDestinationEntity(214U);
    msg.duration = 5127U;
    msg.custom.assign("JQCFHLAZUAHBXDSPVDEDNBRSCGOFKRRMFGSQEMNUEMEAKQQPQEZJLDOEBAWNKXJEYKGOTTPBNUSCAPLDHDKXFPLRITGJWSLHOJSCIBLUVJFAWBROUTVXOOCVPVBYLFWVIYAYGBNTZGIKWKYXPQIWXHTJWUTQECGYRYZXMVYDHSCCZGNMXUFBVHXPH");

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
    msg.setTimeStamp(0.762350546745);
    msg.setSource(7121U);
    msg.setSourceEntity(18U);
    msg.setDestination(3466U);
    msg.setDestinationEntity(8U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.642390645718;
    msg.control.set(tmp_msg_0);
    msg.duration = 39410U;
    msg.custom.assign("IXGFLMFCWWZSCGEDTRLFGNIVTQJXGOVSZAIKVGYIHCJFXSKEKRKKNYHTQTRRQOUSHOPGZCQRBQMLQFJFEDPKGMPWYNONMNXCRZTPDIZTMIIJDXZKCQBWXEYRBHQAXPYXZUHJEMSQSRXNLWUYYPSAONVWJVGTPFMAJUYTBLTVLLWVPAFOEIOQRMIAPHBBJJACIMPAVEKEHSWAGUUHDADGZUBCUTHBSEOYCWVROUKZHLKOC");

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
    msg.setTimeStamp(0.465355291726);
    msg.setSource(20994U);
    msg.setSourceEntity(67U);
    msg.setDestination(27896U);
    msg.setDestinationEntity(49U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.229785655801;
    tmp_msg_0.speed_units = 95U;
    msg.control.set(tmp_msg_0);
    msg.duration = 18924U;
    msg.custom.assign("NIOEHJSWQKGCHJZIAWBZAGZCYHXYPFLDOJIYGARWCSSOHQCPUUPDWXLRSKYJNDZAMRDDGMTNFRVVJNXKRFJRMBTVUBMIBANPOFRCWKWDVREPQSHG");

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
    msg.setTimeStamp(0.57353145502);
    msg.setSource(60663U);
    msg.setSourceEntity(6U);
    msg.setDestination(25003U);
    msg.setDestinationEntity(205U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.551785591683;
    tmp_msg_0.z_units = 73U;
    msg.control.set(tmp_msg_0);
    msg.duration = 21293U;
    msg.custom.assign("GZQWDIMWUGFHFWKQUVLQWFQBORRVBOWDEAVPJRZSLBRSCUNOHAYMIXUDFLZATRNEXOFSGPMQDROVJMEDUNPCPSKYNLTCIFUKJRKWTYZVRSGWAATIMVGMLGTBRVYJXQFCHEDBFNAWMSSJDIXTTLHYAJEWESOXXHBOBKAJIGVNLMFK");

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
    msg.setTimeStamp(0.0746085397422);
    msg.setSource(43607U);
    msg.setSourceEntity(20U);
    msg.setDestination(23033U);
    msg.setDestinationEntity(31U);
    msg.timeout = 53516U;
    msg.lat = 0.124884302958;
    msg.lon = 0.657548471926;
    msg.z = 0.938411264967;
    msg.z_units = 178U;
    msg.speed = 0.247659626934;
    msg.speed_units = 5U;
    msg.bearing = 0.693322121839;
    msg.cross_angle = 0.122735264748;
    msg.width = 0.399593129063;
    msg.length = 0.455422978412;
    msg.hstep = 0.815206245995;
    msg.coff = 67U;
    msg.alternation = 132U;
    msg.flags = 107U;
    msg.custom.assign("LFITYQDFPCLAYMRFBSYMLKKFDSMIEMXTAJGQUHWVIZWYXNJOCKHDOBTTSCDOSSATWMEMBVYVPKTHKANWOYTOPIHJBGCHOLQIWKZEXYRYINPJNPLIDGISINFZQCLSRUHRIFMPNFFKAWOPOHJZTAJBVEQ");

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
    msg.setTimeStamp(0.644712845046);
    msg.setSource(853U);
    msg.setSourceEntity(235U);
    msg.setDestination(2461U);
    msg.setDestinationEntity(151U);
    msg.timeout = 22216U;
    msg.lat = 0.878677635638;
    msg.lon = 0.221495147695;
    msg.z = 0.343577546714;
    msg.z_units = 120U;
    msg.speed = 0.724249500012;
    msg.speed_units = 34U;
    msg.bearing = 0.619384952308;
    msg.cross_angle = 0.616001081052;
    msg.width = 0.893703081084;
    msg.length = 0.50804709354;
    msg.hstep = 0.537928807544;
    msg.coff = 213U;
    msg.alternation = 136U;
    msg.flags = 125U;
    msg.custom.assign("RLDJXGHUVPZYUMKIEAJFOWOJSALSMHGAZTVQCLAMQBHPYCPKOYVBNCCIAEPBBVIOZECFNUDWWMMXCBJVHBHAEXZEOTOKQXTNVPNNGRHPDDAWZGFTWXRWQLFHAGCRGUKUDKNSUCLZTKSATYUJEZWYBFRZUQCIOYPEXDDSINJGRQPWQQXPHOKLVHKCKIKXBGTZRSIMHEX");

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
    msg.setTimeStamp(0.997051003039);
    msg.setSource(48697U);
    msg.setSourceEntity(225U);
    msg.setDestination(53636U);
    msg.setDestinationEntity(77U);
    msg.timeout = 62567U;
    msg.lat = 0.584315153277;
    msg.lon = 0.953752133334;
    msg.z = 0.183959662912;
    msg.z_units = 119U;
    msg.speed = 0.651025649263;
    msg.speed_units = 202U;
    msg.bearing = 0.0974867637949;
    msg.cross_angle = 0.697394360097;
    msg.width = 0.0431290636956;
    msg.length = 0.290275737747;
    msg.hstep = 0.302502120264;
    msg.coff = 195U;
    msg.alternation = 192U;
    msg.flags = 209U;
    msg.custom.assign("SKGGFBBUEZDUJQBDFGKUNNUOJVORSVLTQMFKVFCJOETBGKETXVPTXSPWQHXSHAMOHNLWKLVNDCAGDWPVJXMUFFOZAYSKVYLPTCCUWGFYZRSJSBEDIDUFOAPIMXRGODAJBHXSZL");

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
    msg.setTimeStamp(0.116229558503);
    msg.setSource(36212U);
    msg.setSourceEntity(249U);
    msg.setDestination(33957U);
    msg.setDestinationEntity(78U);
    msg.timeout = 34139U;
    msg.lat = 0.280169657288;
    msg.lon = 0.31390531207;
    msg.z = 0.61088066339;
    msg.z_units = 247U;
    msg.speed = 0.156404414544;
    msg.speed_units = 164U;
    msg.custom.assign("IEFGDHIKDCDRHCCHLESCXZIRFGGKQYHSWZHMEPUTCIOKPIXBOGRASNAKISCSKXSNGUDWMXHGFLCACINJOPMBSAXRBUZBFJKXUYTWQFPJQKTBLNLLXQDWEYOTHMTYVRBWOGWARVGZXKOLRKMPAQAMAVQXYLSYOPANBVJRTYMBTNMZVOTQIOQCZKZSET");

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
    msg.setTimeStamp(0.64651804378);
    msg.setSource(52929U);
    msg.setSourceEntity(30U);
    msg.setDestination(1368U);
    msg.setDestinationEntity(224U);
    msg.timeout = 43031U;
    msg.lat = 0.853593190833;
    msg.lon = 0.693899699446;
    msg.z = 0.901064149779;
    msg.z_units = 210U;
    msg.speed = 0.9402339803;
    msg.speed_units = 80U;
    msg.custom.assign("OSHGIKKWRDXDVOUYGXAYPCXRTUCBO");

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
    msg.setTimeStamp(0.249402136784);
    msg.setSource(10015U);
    msg.setSourceEntity(85U);
    msg.setDestination(50599U);
    msg.setDestinationEntity(44U);
    msg.timeout = 39515U;
    msg.lat = 0.528199368474;
    msg.lon = 0.317666229678;
    msg.z = 0.0788871973795;
    msg.z_units = 202U;
    msg.speed = 0.876390770193;
    msg.speed_units = 18U;
    msg.custom.assign("ERPFWSLTMOWHLEMQFARTFLHYMWTOGZHEPVAYVUBFNMMUTVSRMDLIVQDLJCHJPXIRRTCXBKEZOZCINWFVAZSEIZSKNBKCLYOMPKIYQTJAZRSMXUHAQYJYCYNFKMGVHSGRLOCURBHDPQNBSGCUWUODRAJWFIUBEIKOHZARVNBJKQQDPJMJWVTANELOTXPPX");

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
    msg.setTimeStamp(0.921163422723);
    msg.setSource(50200U);
    msg.setSourceEntity(214U);
    msg.setDestination(8986U);
    msg.setDestinationEntity(78U);
    msg.x = 0.238061508852;
    msg.y = 0.373983869393;
    msg.z = 0.0758136310468;

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
    msg.setTimeStamp(0.136007820231);
    msg.setSource(27935U);
    msg.setSourceEntity(56U);
    msg.setDestination(51101U);
    msg.setDestinationEntity(174U);
    msg.x = 0.349538091927;
    msg.y = 0.269783806483;
    msg.z = 0.839777295675;

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
    msg.setTimeStamp(0.550763540863);
    msg.setSource(8477U);
    msg.setSourceEntity(38U);
    msg.setDestination(47168U);
    msg.setDestinationEntity(102U);
    msg.x = 0.624733332603;
    msg.y = 0.225887200599;
    msg.z = 0.344418916889;

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
    msg.setTimeStamp(0.729089429525);
    msg.setSource(30128U);
    msg.setSourceEntity(162U);
    msg.setDestination(32077U);
    msg.setDestinationEntity(183U);
    msg.timeout = 12171U;
    msg.lat = 0.835661669269;
    msg.lon = 0.304679413111;
    msg.z = 0.274053414547;
    msg.z_units = 138U;
    msg.amplitude = 0.297102880037;
    msg.pitch = 0.62510141819;
    msg.speed = 0.183720292995;
    msg.speed_units = 207U;
    msg.custom.assign("JKQFIDMTQNPOWUAIRBYSEKXUGD");

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
    msg.setTimeStamp(0.165336309367);
    msg.setSource(13458U);
    msg.setSourceEntity(54U);
    msg.setDestination(24485U);
    msg.setDestinationEntity(74U);
    msg.timeout = 43739U;
    msg.lat = 0.202104722175;
    msg.lon = 0.357347339391;
    msg.z = 0.755516078681;
    msg.z_units = 108U;
    msg.amplitude = 0.399180024207;
    msg.pitch = 0.229070825253;
    msg.speed = 0.354909088446;
    msg.speed_units = 38U;
    msg.custom.assign("OLVMYBWZJRIWROAFUALACFJDEYXNABVBMRDHBWWTAGXWFRAYUT");

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
    msg.setTimeStamp(0.11113490556);
    msg.setSource(33556U);
    msg.setSourceEntity(185U);
    msg.setDestination(34295U);
    msg.setDestinationEntity(143U);
    msg.timeout = 41040U;
    msg.lat = 0.755241879841;
    msg.lon = 0.440634007914;
    msg.z = 0.217128947853;
    msg.z_units = 101U;
    msg.amplitude = 0.855513257387;
    msg.pitch = 0.553240932919;
    msg.speed = 0.110877048922;
    msg.speed_units = 227U;
    msg.custom.assign("JDIKDTGWMBBQSFKCSJHIHRZSAOMRCUXITDHSJPSPVXRGHOCXKLCHQEAFNEKSYULBIBZINAQXMQPVAYTLKLZOQYTFJJVFFVUEVTOPF");

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
    msg.setTimeStamp(0.197850416973);
    msg.setSource(12240U);
    msg.setSourceEntity(55U);
    msg.setDestination(12863U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.779862444702);
    msg.setSource(26938U);
    msg.setSourceEntity(127U);
    msg.setDestination(56196U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.0557262287517);
    msg.setSource(16635U);
    msg.setSourceEntity(170U);
    msg.setDestination(42567U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.911953075574);
    msg.setSource(55952U);
    msg.setSourceEntity(175U);
    msg.setDestination(46386U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.569040984054;
    msg.lon = 0.955348135791;
    msg.z = 0.53711812421;
    msg.z_units = 195U;
    msg.radius = 0.201341277278;
    msg.duration = 32572U;
    msg.speed = 0.74712190854;
    msg.speed_units = 157U;
    msg.custom.assign("JCDCWAHCNHATUDMVQWYPWJDXISJLTZOMUQICTXZEBRCDUYKAWFRIEYFYZEHDZROAVAXNYGAWJOGVKXQDLVVNZCXPMJGANCQNPWDXHIKMQQIFGBNEFBBA");

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
    msg.setTimeStamp(0.00880346601208);
    msg.setSource(43692U);
    msg.setSourceEntity(196U);
    msg.setDestination(65030U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.118085409814;
    msg.lon = 0.323919759846;
    msg.z = 0.145872769936;
    msg.z_units = 120U;
    msg.radius = 0.391897346897;
    msg.duration = 28140U;
    msg.speed = 0.701399985011;
    msg.speed_units = 221U;
    msg.custom.assign("POYELNKMKLVNPGDCSFLATCFNFDGQGNEXKLGJVXCIUXPCRWSUCAMSGHALBXHUDMMVORHTYWJXTQWYUWYXGCBPOOIUEWEIYNQLQBAHMIDEJDQDNAJIZOFGQCPMLHIHVKEZGIHRUTUWSFALHQKUFRRSTCEMDWJNZZYFUFJGFKXEMVNZTYBSCLJVPAROWRRMNSKYCVETSXQLZXYMRRKBQZJSFABOBIOKAZSDVPKAIH");

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
    msg.setTimeStamp(0.971340132781);
    msg.setSource(41801U);
    msg.setSourceEntity(125U);
    msg.setDestination(41219U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.0284087623982;
    msg.lon = 0.228963326132;
    msg.z = 0.0826168540662;
    msg.z_units = 216U;
    msg.radius = 0.614155570883;
    msg.duration = 43126U;
    msg.speed = 0.5195060042;
    msg.speed_units = 192U;
    msg.custom.assign("RYOSOHBIJLHKVWEBIDYUUOJMGZZTQHQFKKMG");

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
    msg.setTimeStamp(0.00498170043484);
    msg.setSource(48812U);
    msg.setSourceEntity(185U);
    msg.setDestination(24251U);
    msg.setDestinationEntity(230U);
    msg.timeout = 5701U;
    msg.flags = 81U;
    msg.lat = 0.455662078347;
    msg.lon = 0.110816768325;
    msg.start_z = 0.439720716372;
    msg.start_z_units = 145U;
    msg.end_z = 0.894942625985;
    msg.end_z_units = 172U;
    msg.radius = 0.561773829483;
    msg.speed = 0.513874011031;
    msg.speed_units = 191U;
    msg.custom.assign("NNHJCONEPYIQXTWKRCQKQKZRQZLGJOSWXYIXMLZVEHYEMDYUIGUNXNUOYCLPIGCXVJSRVPHCWKUVLRPOGBXQTGKACYAPPECTMMCHNJDBTMRODKEMBPITGBWRAIJDZPPBOUELGLKGJQDYRUUPTHDVZM");

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
    msg.setTimeStamp(0.713332584755);
    msg.setSource(39011U);
    msg.setSourceEntity(213U);
    msg.setDestination(13075U);
    msg.setDestinationEntity(181U);
    msg.timeout = 56080U;
    msg.flags = 11U;
    msg.lat = 0.802295277391;
    msg.lon = 0.994570467719;
    msg.start_z = 0.440612085739;
    msg.start_z_units = 92U;
    msg.end_z = 0.522880262741;
    msg.end_z_units = 252U;
    msg.radius = 0.910258712395;
    msg.speed = 0.5558324009;
    msg.speed_units = 198U;
    msg.custom.assign("ZNEKYLXMSQHEJTLRBAJDHSCQKOCLXVOIFSCZROSJPZHNALGZZKRTSFPZCWEEHOMXTBYDDFLBMVKEMMQYUSTDLFAIWGRKBOOVNUPWJRUUIMINP");

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
    msg.setTimeStamp(0.315307722099);
    msg.setSource(27706U);
    msg.setSourceEntity(207U);
    msg.setDestination(19547U);
    msg.setDestinationEntity(229U);
    msg.timeout = 36800U;
    msg.flags = 207U;
    msg.lat = 0.368426109833;
    msg.lon = 0.611142017104;
    msg.start_z = 0.513951797907;
    msg.start_z_units = 19U;
    msg.end_z = 0.715108199762;
    msg.end_z_units = 38U;
    msg.radius = 0.247006722186;
    msg.speed = 0.541272093189;
    msg.speed_units = 12U;
    msg.custom.assign("NQAJLFJRKNOQINMTFBBKALGDXQPXRMMOPACVXDRBGKOGCYOYXDMQHLPFCBOBFSEDQSYWXEIHLKZAEERRQESCQKEZOPPHMINPTKZVSMXSBGVSUFDZUTWUBYWFVUDQWGNVXXRGTRWRRTKKIUHQZWODNIIJVYWOVSLCHUUVFJLTTTVFJJECAYJLDGAM");

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
    msg.setTimeStamp(0.720484671887);
    msg.setSource(22135U);
    msg.setSourceEntity(131U);
    msg.setDestination(22620U);
    msg.setDestinationEntity(178U);
    msg.timeout = 9183U;
    msg.lat = 0.233211207025;
    msg.lon = 0.155272565424;
    msg.z = 0.0247035566529;
    msg.z_units = 19U;
    msg.speed = 0.908297936288;
    msg.speed_units = 144U;
    msg.custom.assign("DDTDXSGOUAHFWLTUFFAOVADBCUBPVSTXEUDBWLCHTDCRNIHMUTKNYC");

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
    msg.setTimeStamp(0.478784015649);
    msg.setSource(61882U);
    msg.setSourceEntity(247U);
    msg.setDestination(11931U);
    msg.setDestinationEntity(201U);
    msg.timeout = 64051U;
    msg.lat = 0.672440834828;
    msg.lon = 0.348465844015;
    msg.z = 0.885754681132;
    msg.z_units = 5U;
    msg.speed = 0.182485109916;
    msg.speed_units = 24U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0548458151721;
    tmp_msg_0.y = 0.990292531454;
    tmp_msg_0.z = 0.847694674537;
    tmp_msg_0.t = 0.649306518146;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ODBBYGIMNHNCAOXLCYNJOQYXNLDPFMMADXNQHPUWPATFGJXPQDGVPJYKNASTTWDFJJLC");

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
    msg.setTimeStamp(0.120235110122);
    msg.setSource(8036U);
    msg.setSourceEntity(166U);
    msg.setDestination(31160U);
    msg.setDestinationEntity(171U);
    msg.timeout = 4299U;
    msg.lat = 0.40176293151;
    msg.lon = 0.499223369514;
    msg.z = 0.382795998866;
    msg.z_units = 122U;
    msg.speed = 0.179463491692;
    msg.speed_units = 41U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.238392865569;
    tmp_msg_0.y = 0.432854978443;
    tmp_msg_0.z = 0.877581767767;
    tmp_msg_0.t = 0.318045500246;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QUXNJZNWOPHMIPXMOEPKLGBGTWITLLMPEDMTOBIXCOEYZICIXHGFADSQQMRLKAPTEJAZRLXIYADCDUHPFLIHSFQKMCDRCJZWPYNTDYSZOMXJTWLVLAOTEJQBKARJTWRQNVZVFNJVOBWPYBGXXCUTXDHYBGYYWODDEZIQWYSSRVBSHRKHSKVKKPVFEFDCUVWUNBKNMSQHLAONFHMAXQURHOZGUISUYGSRCGEREINVJQABMFUTAFWGZ");

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
    msg.setTimeStamp(0.146809605965);
    msg.setSource(16576U);
    msg.setSourceEntity(110U);
    msg.setDestination(12869U);
    msg.setDestinationEntity(186U);
    msg.x = 0.0291817514631;
    msg.y = 0.811474900503;
    msg.z = 0.346088322889;
    msg.t = 0.645073552904;

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
    msg.setTimeStamp(0.142336829378);
    msg.setSource(54109U);
    msg.setSourceEntity(105U);
    msg.setDestination(34739U);
    msg.setDestinationEntity(205U);
    msg.x = 0.942409453206;
    msg.y = 0.928998317072;
    msg.z = 0.846403190955;
    msg.t = 0.980589820045;

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
    msg.setTimeStamp(0.0199553516197);
    msg.setSource(21521U);
    msg.setSourceEntity(248U);
    msg.setDestination(36558U);
    msg.setDestinationEntity(120U);
    msg.x = 0.558536329785;
    msg.y = 0.758226392977;
    msg.z = 0.913866585313;
    msg.t = 0.549602242002;

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
    msg.setTimeStamp(0.394821813999);
    msg.setSource(22678U);
    msg.setSourceEntity(184U);
    msg.setDestination(59304U);
    msg.setDestinationEntity(67U);
    msg.timeout = 50876U;
    msg.name.assign("AVQXBDITUIKAYDMG");
    msg.custom.assign("NPYNYZDEPPBNWDPEUYYMXJVOHHGTTNCAFSQFVCPRRWNNLQIHFWOAXQAMQQSLZMIFFSZSKZYSVKUZBHJIKZJRUSCQLVUFGRFQPPCGIASBVYRSGMNAEVTCYDHDXKUWBDHUXUYWWGROL");

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
    msg.setTimeStamp(0.0216803306922);
    msg.setSource(29288U);
    msg.setSourceEntity(138U);
    msg.setDestination(22922U);
    msg.setDestinationEntity(209U);
    msg.timeout = 27517U;
    msg.name.assign("XCXHNXZDFBAUKQMQSTVYCFMTPIIOEBSBRFXIQVAKDTGCDAJETPXZMBGVZRKXUKWTNTCOEGPHDOGKYIKQXTBBYHWYHISXECHAUAQEVJLLRSKVRNZPJNIRBBDOKLAGYDRGFPYYWFZTIOOSCSCJHUNDJAVGGIWPJUCPFPYZQEUCIMJVIEYLORFMZEMNSWJFXMLWLDUZNWODMUAQQSKWAFMZCZVOMKHHQNFL");
    msg.custom.assign("WXRQHMZQURXFJTUJUAEAGPDENFJPJLYBFSDQFUTOTHKKHLZORBNOWKSYLBNECJWISR");

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
    msg.setTimeStamp(0.519523625077);
    msg.setSource(1662U);
    msg.setSourceEntity(95U);
    msg.setDestination(63633U);
    msg.setDestinationEntity(91U);
    msg.timeout = 42949U;
    msg.name.assign("IJFXPYRCWWXGSYNICMMJQLSVEMTNMSPDBBKOPTTWGWNTSMEDVCQWAEPPGJQRZQDTGKTOCVUDOUINGXEXKEXMKWLLFCNKYPQIHXWQEBJHBDRLJHWMAGMDHATXSAYYOLQNFJUNOABILWHQEIRLFBYKRGILFFSNHHABQUJUHOXLURPBBEDRJTAOWCYMVZUZVKBVVXY");
    msg.custom.assign("FCQMPHCOMRXBYIIBYEMTHEILBEYRZPHSHAPHRPRLDNZWWIWDSW");

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
    msg.setTimeStamp(0.244039606741);
    msg.setSource(34316U);
    msg.setSourceEntity(52U);
    msg.setDestination(13565U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.341531854131;
    msg.lon = 0.761040102012;
    msg.z = 0.749838726256;
    msg.z_units = 59U;
    msg.speed = 0.753288776039;
    msg.speed_units = 89U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 34066U;
    tmp_msg_0.off_x = 0.740698492885;
    tmp_msg_0.off_y = 0.359600646526;
    tmp_msg_0.off_z = 0.417833094387;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.916845609369;
    msg.custom.assign("GXNPYFARBNGUHUFZQVPBCQJBHEIYWGGVWMOCQLSTZMRMPPIDZFJTFOVVJTDGFIYYPV");

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
    msg.setTimeStamp(0.668980130232);
    msg.setSource(27955U);
    msg.setSourceEntity(70U);
    msg.setDestination(45388U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.055472848811;
    msg.lon = 0.69367515637;
    msg.z = 0.51417103022;
    msg.z_units = 180U;
    msg.speed = 0.904832270083;
    msg.speed_units = 215U;
    msg.start_time = 0.331825653231;
    msg.custom.assign("FFPPESIRYSSZSGPHAQAHVOBQBSPKQFDZJIXJEDXIVWZESBQHULXVVLDNKLMZEFYRLBMOKJHCSZNTSUUQACGRDRURIMOFKIBKWEGOWHMGDXIZCQLJSZXWICCAVABGRLICNPDDMHGZYXXNLQACYOYQJYUYPYUGIAMKFBMOOWTXJUDCXTWJEDGNKEAXCVQMLRMFPBHOWWZVVEAIEPNWYHVTTUBVKRTURDTPFQOFNHSTU");

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
    msg.setTimeStamp(0.210234474986);
    msg.setSource(21690U);
    msg.setSourceEntity(236U);
    msg.setDestination(22423U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.264695912299;
    msg.lon = 0.509242846373;
    msg.z = 0.241327494915;
    msg.z_units = 105U;
    msg.speed = 0.865730814584;
    msg.speed_units = 70U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25443U;
    tmp_msg_0.off_x = 0.823437857736;
    tmp_msg_0.off_y = 0.783127302966;
    tmp_msg_0.off_z = 0.311292599845;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.724505993015;
    msg.custom.assign("EJWPSDHIPJRUHZWLHDCPVMTVUKZPQCARGYKLVPGEHBUHCEOYBOFMDUBRABGKLZVOLZJVEHMXYFD");

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
    msg.setTimeStamp(0.924661615268);
    msg.setSource(17604U);
    msg.setSourceEntity(18U);
    msg.setDestination(22002U);
    msg.setDestinationEntity(167U);
    msg.vid = 45799U;
    msg.off_x = 0.964832883786;
    msg.off_y = 0.318738001196;
    msg.off_z = 0.271671035028;

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
    msg.setTimeStamp(0.739139422666);
    msg.setSource(23780U);
    msg.setSourceEntity(139U);
    msg.setDestination(59140U);
    msg.setDestinationEntity(196U);
    msg.vid = 25472U;
    msg.off_x = 0.087884674027;
    msg.off_y = 0.553422085818;
    msg.off_z = 0.268446287002;

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
    msg.setTimeStamp(0.744407475193);
    msg.setSource(21857U);
    msg.setSourceEntity(113U);
    msg.setDestination(12943U);
    msg.setDestinationEntity(183U);
    msg.vid = 28584U;
    msg.off_x = 0.819668360581;
    msg.off_y = 0.0201080093136;
    msg.off_z = 0.951576043535;

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
    msg.setTimeStamp(0.195667921794);
    msg.setSource(15753U);
    msg.setSourceEntity(217U);
    msg.setDestination(49540U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.0195506657332);
    msg.setSource(59379U);
    msg.setSourceEntity(59U);
    msg.setDestination(26652U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.615276403819);
    msg.setSource(17213U);
    msg.setSourceEntity(151U);
    msg.setDestination(19732U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.267295504515);
    msg.setSource(61219U);
    msg.setSourceEntity(143U);
    msg.setDestination(20673U);
    msg.setDestinationEntity(27U);
    msg.mid = 8008U;

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
    msg.setTimeStamp(0.83262217689);
    msg.setSource(1905U);
    msg.setSourceEntity(149U);
    msg.setDestination(36361U);
    msg.setDestinationEntity(244U);
    msg.mid = 11223U;

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
    msg.setTimeStamp(0.613840027729);
    msg.setSource(3347U);
    msg.setSourceEntity(61U);
    msg.setDestination(46634U);
    msg.setDestinationEntity(92U);
    msg.mid = 20212U;

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
    msg.setTimeStamp(0.317373860067);
    msg.setSource(38964U);
    msg.setSourceEntity(107U);
    msg.setDestination(35031U);
    msg.setDestinationEntity(74U);
    msg.state = 195U;
    msg.eta = 42154U;
    msg.info.assign("VBTIZVUKKEAVQMSRUFOJXJDUVSPYHUALXINNBOBMAUFWQXYYOZBYCJKQSJSGQUAFOSAOSTJRYCYVCQLFFPDWUGBLHEPRMIJQIYPDHGQRLXSEBKBRWATTHSLWNKVEWEITX");

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
    msg.setTimeStamp(0.0877352881782);
    msg.setSource(40905U);
    msg.setSourceEntity(91U);
    msg.setDestination(43688U);
    msg.setDestinationEntity(101U);
    msg.state = 40U;
    msg.eta = 9058U;
    msg.info.assign("ZQZGHKAOIGKCXNKFUBPBPTFDJZTMYTUDWJVRQQNLBJCQHABHEEWPGLBTHZOKDZSPVMIWFXBIXBASPESORBQMTH");

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
    msg.setTimeStamp(0.955488660303);
    msg.setSource(4526U);
    msg.setSourceEntity(124U);
    msg.setDestination(46847U);
    msg.setDestinationEntity(209U);
    msg.state = 198U;
    msg.eta = 17355U;
    msg.info.assign("SZQZPQRIADJYRLZPXEZGGSICOCHFAUUYNVFBUHPEHEUOXFJITBTVNOBDZGWHDDRUKWPIBMXKLMZINCSVHPYUEUDRPPWLZJXMTLINTTWWFFFFTQERDXIQMTOANJEAMDMRGKVZXWVNOOFSZZYRYROJVFPYEUOMYORQQGNGBLWWSKVIHV");

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
    msg.setTimeStamp(0.2834299714);
    msg.setSource(57426U);
    msg.setSourceEntity(175U);
    msg.setDestination(62405U);
    msg.setDestinationEntity(70U);
    msg.system = 52380U;
    msg.duration = 17677U;
    msg.speed = 0.999000606515;
    msg.speed_units = 136U;
    msg.x = 0.516453658642;
    msg.y = 0.0269123485706;
    msg.z = 0.885757044422;
    msg.z_units = 69U;

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
    msg.setTimeStamp(0.161045986215);
    msg.setSource(1252U);
    msg.setSourceEntity(168U);
    msg.setDestination(8626U);
    msg.setDestinationEntity(218U);
    msg.system = 18933U;
    msg.duration = 15246U;
    msg.speed = 0.580991370095;
    msg.speed_units = 151U;
    msg.x = 0.932309275656;
    msg.y = 0.599774146613;
    msg.z = 0.308207903622;
    msg.z_units = 163U;

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
    msg.setTimeStamp(0.7900290853);
    msg.setSource(56500U);
    msg.setSourceEntity(33U);
    msg.setDestination(14660U);
    msg.setDestinationEntity(70U);
    msg.system = 11859U;
    msg.duration = 36626U;
    msg.speed = 0.0815086648194;
    msg.speed_units = 161U;
    msg.x = 0.688172026789;
    msg.y = 0.118112693244;
    msg.z = 0.0780779770568;
    msg.z_units = 71U;

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
    msg.setTimeStamp(0.268452686089);
    msg.setSource(52018U);
    msg.setSourceEntity(156U);
    msg.setDestination(23381U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.442087253198;
    msg.lon = 0.112011479386;
    msg.speed = 0.453503075326;
    msg.speed_units = 91U;
    msg.duration = 14766U;
    msg.sys_a = 52731U;
    msg.sys_b = 26156U;
    msg.move_threshold = 0.88147224155;

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
    msg.setTimeStamp(0.88380998688);
    msg.setSource(49513U);
    msg.setSourceEntity(129U);
    msg.setDestination(617U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.329565025535;
    msg.lon = 0.413772634038;
    msg.speed = 0.156998677453;
    msg.speed_units = 97U;
    msg.duration = 62189U;
    msg.sys_a = 63862U;
    msg.sys_b = 42080U;
    msg.move_threshold = 0.750611453688;

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
    msg.setTimeStamp(0.72728493662);
    msg.setSource(40690U);
    msg.setSourceEntity(102U);
    msg.setDestination(62949U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.0944431523714;
    msg.lon = 0.49402132448;
    msg.speed = 0.27050251796;
    msg.speed_units = 223U;
    msg.duration = 3182U;
    msg.sys_a = 46740U;
    msg.sys_b = 34941U;
    msg.move_threshold = 0.910233079028;

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
    msg.setTimeStamp(0.886241963371);
    msg.setSource(11900U);
    msg.setSourceEntity(186U);
    msg.setDestination(51720U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.387046001266;
    msg.lon = 0.947520384511;
    msg.z = 0.276960030368;
    msg.z_units = 95U;
    msg.speed = 0.19502763304;
    msg.speed_units = 26U;
    msg.custom.assign("XSCTOIIJWAPGLUIEUTRJMEBXUYOKNWZRKJHJBBZBZLKZVQPHLUISWPBVAXLUVAYDSODOYFEI");

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
    msg.setTimeStamp(0.0970287839424);
    msg.setSource(26645U);
    msg.setSourceEntity(166U);
    msg.setDestination(677U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.876202418996;
    msg.lon = 0.381338962455;
    msg.z = 0.357286624066;
    msg.z_units = 166U;
    msg.speed = 0.0150361886379;
    msg.speed_units = 3U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.427482810382;
    tmp_msg_0.lon = 0.755947249858;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BSFPFXTAWCCFDIOGPJZHYCHXDZTBYNAZXGYIUQXKAKXELTVZPOJWNREKVPKDJOQFYBSHZUPLGTJJMVHUSCUUYNYRGASNWNBDIZMAIVRVFNJOPLSFJWAFPLHZCOKBJQDNEQMVCRPFXCMOGPHQOFBUMRDNWMLINAGSRLGXTYEGMKXYVIYEEKHG");

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
    msg.setTimeStamp(0.668017714828);
    msg.setSource(5738U);
    msg.setSourceEntity(64U);
    msg.setDestination(13369U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.411346938864;
    msg.lon = 0.136256622564;
    msg.z = 0.273552220737;
    msg.z_units = 136U;
    msg.speed = 0.0614288611474;
    msg.speed_units = 7U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.814424064738;
    tmp_msg_0.lon = 0.485481574546;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FKRBCSEVTJAQLDWYHMQGRVEMQQHUUHPUZDGYAHVZBHMFLGJWYXXSEQHDTWKHVNPCSAVOJQCBTPFFIGNFDOWWLODQTLGEEOMZBNCAAXYOPQUVPNAYJSWFREKDKCZRCDAZJCTNOPYIULILRFIZIUZWONVYDPXCSSORPPIGTRDGIXXKWRKXNQELKBIHMEHMJACBULZJPYFTVSLNKUBRT");

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
    msg.setTimeStamp(0.75079845422);
    msg.setSource(1839U);
    msg.setSourceEntity(116U);
    msg.setDestination(20563U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.703774248814;
    msg.lon = 0.667172727089;

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
    msg.setTimeStamp(0.128463278674);
    msg.setSource(55224U);
    msg.setSourceEntity(247U);
    msg.setDestination(58530U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.294338397295;
    msg.lon = 0.218627879824;

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
    msg.setTimeStamp(0.37719241018);
    msg.setSource(62114U);
    msg.setSourceEntity(24U);
    msg.setDestination(19960U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.394357152281;
    msg.lon = 0.648324473911;

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
    msg.setTimeStamp(0.301489855256);
    msg.setSource(53954U);
    msg.setSourceEntity(114U);
    msg.setDestination(44430U);
    msg.setDestinationEntity(86U);
    msg.timeout = 9482U;
    msg.lat = 0.313675826141;
    msg.lon = 0.311340664289;
    msg.z = 0.998761568692;
    msg.z_units = 47U;
    msg.pitch = 0.278328072069;
    msg.amplitude = 0.294823479287;
    msg.duration = 45608U;
    msg.speed = 0.883076807146;
    msg.speed_units = 122U;
    msg.radius = 0.264940746181;
    msg.direction = 108U;
    msg.custom.assign("EMELINWTVDPUDJQNUAHYXKCADYIVNHQXDJSGVVZHQXPRINWJBCRCOUFNXKROQISRSPGAFAQQDWMAZVFPABGAPNTWTZKBXVJLHHESRHZWJTGFKIYRIZHVRPXCWKQHOLKJ");

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
    msg.setTimeStamp(0.214974939118);
    msg.setSource(15221U);
    msg.setSourceEntity(144U);
    msg.setDestination(49289U);
    msg.setDestinationEntity(177U);
    msg.timeout = 47107U;
    msg.lat = 0.573390302673;
    msg.lon = 0.577924356734;
    msg.z = 0.134075611811;
    msg.z_units = 39U;
    msg.pitch = 0.699267301534;
    msg.amplitude = 0.334468562023;
    msg.duration = 51439U;
    msg.speed = 0.0171914064174;
    msg.speed_units = 3U;
    msg.radius = 0.803991403577;
    msg.direction = 74U;
    msg.custom.assign("ZXRUPJHMUUTBPBVSJKLUOTWKYYKDRZTOYSWUGHCAANLRHPGYJVWSTFHVHBBO");

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
    msg.setTimeStamp(0.826367823237);
    msg.setSource(60497U);
    msg.setSourceEntity(191U);
    msg.setDestination(26831U);
    msg.setDestinationEntity(148U);
    msg.timeout = 59083U;
    msg.lat = 0.103573566606;
    msg.lon = 0.538243107363;
    msg.z = 0.542611289181;
    msg.z_units = 146U;
    msg.pitch = 0.986963424766;
    msg.amplitude = 0.309443058178;
    msg.duration = 20317U;
    msg.speed = 0.408197214198;
    msg.speed_units = 250U;
    msg.radius = 0.965540994084;
    msg.direction = 123U;
    msg.custom.assign("HPJNDCCNURSRMFYFXWVWLZUVMWODHJFQOXBMEELQXBKWOGUYDYLZNPTJZCBWFNOELTIYFSBURPTSHLJRTIWQTFIXHENBZCWOXVRATFHGIEWDGKNNXRXDBEIJGYMJQHBZSCFTPSOKLAJSTCPTGTQRAYLPMKDRDMAZQKZIZNZSUUKHYYPFIGFRWGJOOGMEICVMCPAGXDWKPKKXCUOQOQEMEBVAAXVVCQDAZSGJSHHJYPB");

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
    msg.setTimeStamp(0.870196218286);
    msg.setSource(23031U);
    msg.setSourceEntity(9U);
    msg.setDestination(46267U);
    msg.setDestinationEntity(129U);
    msg.formation_name.assign("XAHWTQAWRMRQYPBNTTOFTGTJUDEUKNNVKBHVJPDABTXLNYLFOPKNLJBVINFLFLRPBPTMREUPJDIJIWYCSUMQ");
    msg.reference_frame = 40U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20391U;
    tmp_msg_0.off_x = 0.836329861109;
    tmp_msg_0.off_y = 0.298879453312;
    tmp_msg_0.off_z = 0.246643746442;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MRMVHNWUIYKGSBENAYWUMDDAIWWEMCMLFZTYZYZZZIRPPEVVVDGLBOYPQYAUKXKQZPXJVPLMFMHIJEMYITKWUUJKNKBMCQXOTPTDGCZGFVJNFEIX");

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
    msg.setTimeStamp(0.464319486424);
    msg.setSource(51138U);
    msg.setSourceEntity(92U);
    msg.setDestination(48501U);
    msg.setDestinationEntity(84U);
    msg.formation_name.assign("APKCQILSUNKDQRRBEOPRGPSARSCBDQUREVZEAJELKUOFUBTGMWPAPIHHBYJBGUGDIVICPHNZYTZWZNWCYDQVLHZGSLHBISJQNTBJGURXIDVQVFCDMTYMNNFMDRXVQXSLWKGAXOEUBJYNKTFZZHKEXQYLLCXPCOOWUJKTMAMUMHOTDOXQFUJEQIFFLTWSXHVISIOBEYAJBMVYTJLWKOKVCOZWKRNSPAPVNZGEGREWRMSXJZYIDAY");
    msg.reference_frame = 216U;
    msg.custom.assign("ORRWENJYCGISANLCWPXQFKQDBPZTJPVSEABSWMTTPICTLJNXHCEZUSAZYGVMBECITKHIRUSNLUOCZUIMYXDZTDFKRQJJVNYSUGMZYUYWHIJHEVORAKMHSFCNDDXUGDRXALZSPKLXBNIVDQQWJWEZWHFYTXINPMKHWXBDTXMGEARWLOJLSHUGMV");

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
    msg.setTimeStamp(0.299472427153);
    msg.setSource(46880U);
    msg.setSourceEntity(3U);
    msg.setDestination(60723U);
    msg.setDestinationEntity(131U);
    msg.formation_name.assign("EQIBGTXMZWUVLFARPIFFADGTSNYFVIWRGXCQESEKHXNCULXRWNIKXNTIAVT");
    msg.reference_frame = 41U;
    msg.custom.assign("XNAFQQFZUTBPEIVSAXTGXQNQYSDTPTSRYXFVXPDIYGFADEVMKRUNZNNQLRJPFXDJIAUAAUHZWJTFSIMMORMCHGRWRYNJENRIXWKNZCGHQWALWHOZLQYAMYCKQCTZSBHCHDLRPHEEJINKEWSGACOKLOJMUMETVWXBDCBLLGLBJRJQWTPUBLMLTPOWTGOCBKCFFYOSUOZUNVZBWOESODFYYIPSEPCGUHGVEFYZIKMJKPXDHRA");

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
    msg.setTimeStamp(0.327586852386);
    msg.setSource(5943U);
    msg.setSourceEntity(18U);
    msg.setDestination(49795U);
    msg.setDestinationEntity(248U);
    msg.group_name.assign("LHDMRWZQPRSFEEZVZSHOQJOZYNEVYAKISWDGMURHQNNCAYFSBXLBOMNXNLTPBWUEFLAXZIHTXLEEYHKQMGYAKQFKIQVGMAGWFTCIOLHMHDEUMVPFVGPGJJFD");
    msg.formation_name.assign("SYBHVHECDJRH");
    msg.plan_id.assign("OQPIXZADJNIURYHOJZVUFYBFAQXAAAMSUTWUHNWXJSLXL");
    msg.description.assign("ODIWBYPKZIRENQKVYLBAMGXUORNVBSYUOUYWWHJVVHTHSDPON");
    msg.leader_speed = 0.645733571103;
    msg.leader_bank_lim = 0.76129688418;
    msg.pos_sim_err_lim = 0.802086669434;
    msg.pos_sim_err_wrn = 0.590690685547;
    msg.pos_sim_err_timeout = 63879U;
    msg.converg_max = 0.626816088507;
    msg.converg_timeout = 25603U;
    msg.comms_timeout = 10998U;
    msg.turb_lim = 0.691694358758;
    msg.custom.assign("RYBQBYEKSTAWKMOPMHVFJBPUPFTONSDAHAWGGKZXUGSYTXAUROEIZQHLAOKIFQNJQUUBXVIJBVFYUYYXVGPWRPELWJHQRBBKMQVEVEYRUAACEOCNHEFATZGYNZUHGIMKCLMQIPDDQTIBFLNPXZGKNFSZDNXRLKSXUFFBGATGMWPDZIMOCJOTJXDXKCMWJCEQNUSRCRNQLODPADHNWZWTVOLLJJO");

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
    msg.setTimeStamp(0.856129643952);
    msg.setSource(62348U);
    msg.setSourceEntity(214U);
    msg.setDestination(36217U);
    msg.setDestinationEntity(44U);
    msg.group_name.assign("GIWJJLLRIWQUZOSTAZHRBMKMAUFKJGTNGOTXSCGUMDPBPJXLQDFKXFRQPDKLCJVQGHCBCJZZXHYPBWSOZGYVLUDYUTTZYPEBIZYBWBATFXNCKFDIEMHNMKUVDQEWOLFEUGSINNBZRSXSUGZMEQRLKENOOJTXNFBVEIOQFEMYYDYIUAHDIKWTAYCEGHTHLQOMMMONVRYPRWCQSKAZEVVSCSFNRQ");
    msg.formation_name.assign("PPRBAVSIGRSRMINBAG");
    msg.plan_id.assign("LKXBMCLVVKUEQBUOVZNOZBTHGBGNXVQSYWGWVBAGKLNLTZHIWSNDYESHYZQYHSPCFIJPLPIXAUGNIQIMTEXUOFYROYXHGDUTBZQOJKMFNCWDOMDCSPXZRPRFZKHLXAAEKQRUYOMCHULXBVZOCYATRWNDBNERPGRCEFWJJGWEDVPLAYTDFWDUM");
    msg.description.assign("WBZWGGFKQSJCAXZRRHBPUEFAGUOSGHUQVSNFYKXBRFAFDCIOLMABQWSOTRGXPOUADTSKETPOCUGNIWXLUNLVMBGPYUNIOLZSWZKFFLVFUGQGWRQBBOWYTCNDAHQFXGMITHMLEBLDKQVQVPJEZWDSIKZYSKKMZEVZRXRJJHCWMKTCIYVDEHZSJEDVQYWPCYQXYOPLBTIVNNRSMCTILIZCXIDAHMFJXTAYPOEARHXOYNPUMTDJHJVAE");
    msg.leader_speed = 0.377387588108;
    msg.leader_bank_lim = 0.315531610642;
    msg.pos_sim_err_lim = 0.27699362575;
    msg.pos_sim_err_wrn = 0.914478076313;
    msg.pos_sim_err_timeout = 64912U;
    msg.converg_max = 0.770490344892;
    msg.converg_timeout = 52625U;
    msg.comms_timeout = 43470U;
    msg.turb_lim = 0.963262085058;
    msg.custom.assign("TKRMNHBGXTSQKKPVMHGIZEFEIDPMOHSMBZHMBEGZPIYCDIXKPFNNRGANOVFRQHDUJIEHHGNNSRSELYAZAVJUTCXWPRJRUHHCYTVJAZSDCOSCVQKWJURRTMBZOEMJUNCXZSSCXTOBFAUGKKMHELWOAKDOBGQLYRTUAFGVTPFEJTUWAEIXLVOTMXY");

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
    msg.setTimeStamp(0.227091925124);
    msg.setSource(8822U);
    msg.setSourceEntity(248U);
    msg.setDestination(5019U);
    msg.setDestinationEntity(54U);
    msg.group_name.assign("PSIGESHXGFKEIIYRCJXILXHDKTVFYJAPRNYJUQUGDKPMMYXDTYCVNGWCHQANNYUVQZVHBEPZRPRONGEKJZBMESBMN");
    msg.formation_name.assign("JEKUYSWFKZAZWMFZZUCYIJGWXKANKTLYLNDCMBQOJQOTEEWVURSCPWEOYEXMCHJAEJPMDSJFLCIVHAUXGXZGQLGBOIYPLMRQIEFXWJUYUVOXROKUCUFOWHHLPCBQGWMGFZVVDUETIAKGDLDQBXESHBNQFLILNJZSNNWRBUHPIVYPZPNGNPDMRTZCBXTVTDCAKYEYGBIDRTRGDN");
    msg.plan_id.assign("YENCVYCXRWKXPPQBYHPYKCQWTSIQAKOAIYCUECAPNJSXHDASZASSYJTVCNOMNXZNMAKITUCQFOVTJJUEBGZXIBLULDBPZDTJVRZYJOQBJFTHQGCZGCBOHRUYHFWOBXJWESIAGIWZNEBRUNLRIMKUTLHFFWPGUPKZWLLWENUQSQVDFHMEMJXKSRPZMOSD");
    msg.description.assign("WCRMQNJJCEPTMHREIQMGOMILRXKIJOUKKLKKHHZWKIOSXVDRQNTNLPZOBTJXGCLBNTDDPWCBFCYYNPQGIZUZHQFFIOEYFSYDMYCTERVFFUHAGPGFVZCJLXYJASHLKTSJQMAKWSBCQXXSBUNJWYNAFARUEQDYZURXDUVEFMDJTISN");
    msg.leader_speed = 0.148585296189;
    msg.leader_bank_lim = 0.31594394557;
    msg.pos_sim_err_lim = 0.931637316251;
    msg.pos_sim_err_wrn = 0.355340093901;
    msg.pos_sim_err_timeout = 30245U;
    msg.converg_max = 0.162541996203;
    msg.converg_timeout = 63523U;
    msg.comms_timeout = 60997U;
    msg.turb_lim = 0.435748774319;
    msg.custom.assign("ZXIKHGQYLJMVAWCHUCOFNGKGIVEIZDBLTBZATFMTVFFXSMQJPANJZGLWBJVWCFTMDKPEKNZRHOPQRBLWFSXHENEUGINIHLGZPGHHJBCEJUZBXVPUKEDYXEDCBVWZDOAHLYWXKBKWRICUUOTLJDHMHKEYNQIPZWCQVIJZOFFFLOSSACYGASVVSWEJIDOYQRSXYOGQSCRBYRL");

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
    msg.setTimeStamp(0.722662029569);
    msg.setSource(30943U);
    msg.setSourceEntity(197U);
    msg.setDestination(32720U);
    msg.setDestinationEntity(158U);
    msg.control_src = 56781U;
    msg.control_ent = 167U;
    msg.timeout = 0.16112402023;
    msg.loiter_radius = 0.709627279546;
    msg.altitude_interval = 0.671519628314;

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
    msg.setTimeStamp(0.0171750629164);
    msg.setSource(32868U);
    msg.setSourceEntity(235U);
    msg.setDestination(29626U);
    msg.setDestinationEntity(146U);
    msg.control_src = 19255U;
    msg.control_ent = 94U;
    msg.timeout = 0.0744997130081;
    msg.loiter_radius = 0.419022136912;
    msg.altitude_interval = 0.854471044386;

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
    msg.setTimeStamp(0.889088360762);
    msg.setSource(11292U);
    msg.setSourceEntity(240U);
    msg.setDestination(12351U);
    msg.setDestinationEntity(144U);
    msg.control_src = 26363U;
    msg.control_ent = 64U;
    msg.timeout = 0.596225588436;
    msg.loiter_radius = 0.329554397311;
    msg.altitude_interval = 0.229068507278;

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
    msg.setTimeStamp(0.660899754036);
    msg.setSource(35106U);
    msg.setSourceEntity(249U);
    msg.setDestination(31629U);
    msg.setDestinationEntity(110U);
    msg.flags = 130U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.515084487853;
    tmp_msg_0.speed_units = 133U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.406392715416;
    tmp_msg_1.z_units = 165U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.837410609031;
    msg.lon = 0.617937250224;
    msg.radius = 0.576153318797;

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
    msg.setTimeStamp(0.774817508056);
    msg.setSource(4943U);
    msg.setSourceEntity(157U);
    msg.setDestination(5009U);
    msg.setDestinationEntity(17U);
    msg.flags = 235U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.724621075978;
    tmp_msg_0.speed_units = 179U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.175529204365;
    tmp_msg_1.z_units = 87U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.201612301324;
    msg.lon = 0.987851361502;
    msg.radius = 0.170361170323;

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
    msg.setTimeStamp(0.105604980198);
    msg.setSource(50170U);
    msg.setSourceEntity(28U);
    msg.setDestination(7124U);
    msg.setDestinationEntity(243U);
    msg.flags = 216U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.640187012802;
    tmp_msg_0.speed_units = 235U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.517072934207;
    tmp_msg_1.z_units = 228U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.81672349843;
    msg.lon = 0.145352833372;
    msg.radius = 0.840467814498;

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
    msg.setTimeStamp(0.792354533646);
    msg.setSource(65139U);
    msg.setSourceEntity(34U);
    msg.setDestination(45596U);
    msg.setDestinationEntity(12U);
    msg.control_src = 6349U;
    msg.control_ent = 85U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 98U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.673487652501;
    tmp_tmp_msg_0_0.speed_units = 28U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.762370341496;
    tmp_tmp_msg_0_1.z_units = 36U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.701772473023;
    tmp_msg_0.lon = 0.4229592947;
    tmp_msg_0.radius = 0.366553563001;
    msg.reference.set(tmp_msg_0);
    msg.state = 225U;
    msg.proximity = 181U;

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
    msg.setTimeStamp(0.508012008759);
    msg.setSource(59011U);
    msg.setSourceEntity(162U);
    msg.setDestination(56769U);
    msg.setDestinationEntity(207U);
    msg.control_src = 49553U;
    msg.control_ent = 36U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 107U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.836686216444;
    tmp_tmp_msg_0_0.speed_units = 253U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0811059876812;
    tmp_tmp_msg_0_1.z_units = 95U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.631410906475;
    tmp_msg_0.lon = 0.752686326282;
    tmp_msg_0.radius = 0.941978851021;
    msg.reference.set(tmp_msg_0);
    msg.state = 2U;
    msg.proximity = 171U;

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
    msg.setTimeStamp(0.680905658126);
    msg.setSource(37242U);
    msg.setSourceEntity(76U);
    msg.setDestination(17277U);
    msg.setDestinationEntity(194U);
    msg.control_src = 10328U;
    msg.control_ent = 62U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 160U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.677640919369;
    tmp_tmp_msg_0_0.speed_units = 156U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.440431729057;
    tmp_tmp_msg_0_1.z_units = 159U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.854820206604;
    tmp_msg_0.lon = 0.666121239971;
    tmp_msg_0.radius = 0.290981581803;
    msg.reference.set(tmp_msg_0);
    msg.state = 162U;
    msg.proximity = 12U;

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
    msg.setTimeStamp(0.0445642166584);
    msg.setSource(8506U);
    msg.setSourceEntity(134U);
    msg.setDestination(15014U);
    msg.setDestinationEntity(68U);
    msg.ax_cmd = 0.409276286114;
    msg.ay_cmd = 0.599395090737;
    msg.az_cmd = 0.637874364881;
    msg.ax_des = 0.624715746598;
    msg.ay_des = 0.669966717;
    msg.az_des = 0.138523817343;
    msg.virt_err_x = 0.636439186683;
    msg.virt_err_y = 0.772003669578;
    msg.virt_err_z = 0.3839410995;
    msg.surf_fdbk_x = 0.985411485655;
    msg.surf_fdbk_y = 0.159049289271;
    msg.surf_fdbk_z = 0.937266006522;
    msg.surf_unkn_x = 0.793095139362;
    msg.surf_unkn_y = 0.115738820365;
    msg.surf_unkn_z = 0.674318790465;
    msg.ss_x = 0.861873916675;
    msg.ss_y = 0.629149474685;
    msg.ss_z = 0.782346833968;

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
    msg.setTimeStamp(0.060425815302);
    msg.setSource(9824U);
    msg.setSourceEntity(251U);
    msg.setDestination(41376U);
    msg.setDestinationEntity(63U);
    msg.ax_cmd = 0.220171173165;
    msg.ay_cmd = 0.221176835105;
    msg.az_cmd = 0.657945888507;
    msg.ax_des = 0.224369548669;
    msg.ay_des = 0.753834113234;
    msg.az_des = 0.0263172339393;
    msg.virt_err_x = 0.292183934;
    msg.virt_err_y = 0.420348513956;
    msg.virt_err_z = 0.644099529569;
    msg.surf_fdbk_x = 0.505823567378;
    msg.surf_fdbk_y = 0.134555250348;
    msg.surf_fdbk_z = 0.0492404160515;
    msg.surf_unkn_x = 0.301210923944;
    msg.surf_unkn_y = 0.563471822939;
    msg.surf_unkn_z = 0.748457789786;
    msg.ss_x = 0.290315406249;
    msg.ss_y = 0.858168547435;
    msg.ss_z = 0.842382220857;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RCAZYSQDYABUPMSXKOEGFBFFZJKWJVEOGRBEJVBPDTKHWNTNSPMGQSVPXCEVYLFTUQMGAYIGADTLALYLNMOWFGLQKYKCRUROULYPFDOZPRFIWTFXUSQVHPSWAZGHDIEIJWJQERQSOYZMXVYLCZJIKMAIXXFIUCIPVJDLV");
    tmp_msg_0.dist = 0.505898409219;
    tmp_msg_0.err = 0.746729399178;
    tmp_msg_0.ctrl_imp = 0.351603658767;
    tmp_msg_0.rel_dir_x = 0.406786744267;
    tmp_msg_0.rel_dir_y = 0.636436018851;
    tmp_msg_0.rel_dir_z = 0.665606298287;
    tmp_msg_0.err_x = 0.292743356211;
    tmp_msg_0.err_y = 0.400079352127;
    tmp_msg_0.err_z = 0.347653356715;
    tmp_msg_0.rf_err_x = 0.854110506109;
    tmp_msg_0.rf_err_y = 0.107589633212;
    tmp_msg_0.rf_err_z = 0.367098748906;
    tmp_msg_0.rf_err_vx = 0.962114712555;
    tmp_msg_0.rf_err_vy = 0.311162029579;
    tmp_msg_0.rf_err_vz = 0.477667249879;
    tmp_msg_0.ss_x = 0.86323736282;
    tmp_msg_0.ss_y = 0.936761066166;
    tmp_msg_0.ss_z = 0.0599431221858;
    tmp_msg_0.virt_err_x = 0.143358759989;
    tmp_msg_0.virt_err_y = 0.152681711015;
    tmp_msg_0.virt_err_z = 0.745296222358;
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
    msg.setTimeStamp(0.727156408595);
    msg.setSource(59965U);
    msg.setSourceEntity(32U);
    msg.setDestination(46255U);
    msg.setDestinationEntity(38U);
    msg.ax_cmd = 0.709279442006;
    msg.ay_cmd = 0.316014779428;
    msg.az_cmd = 0.495306048526;
    msg.ax_des = 0.521125858354;
    msg.ay_des = 0.220154441561;
    msg.az_des = 0.449470196301;
    msg.virt_err_x = 0.529391278129;
    msg.virt_err_y = 0.626946770573;
    msg.virt_err_z = 0.87133569948;
    msg.surf_fdbk_x = 0.74971173449;
    msg.surf_fdbk_y = 0.419169233333;
    msg.surf_fdbk_z = 0.995910334593;
    msg.surf_unkn_x = 0.66301533994;
    msg.surf_unkn_y = 0.694466049775;
    msg.surf_unkn_z = 0.450343160898;
    msg.ss_x = 0.26154806628;
    msg.ss_y = 0.151014300109;
    msg.ss_z = 0.410540026159;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ALPJHIHVNIZWNOBDVXYHZRSAHTUWWHQXOYFLUBKDUTJPTOZVSLRRLGYUPLVAXBQFYJSRPQXXEOTYRNDMQMPSFWQZUDEVDILJKDGRTNASIBAMTNMFIYECKTIGFERWKLKDZOJJWBWKZBSMPYLEVJASFRZKICZWPYCVQETUMOPCAJFEXAKVCJGGJBRMCIUWMQSYPSGDIHAUHRUGHOFXSVHNPXZCDUGCQDXETBBWONOMLQIFEKGYLEQVF");
    tmp_msg_0.dist = 0.453168724794;
    tmp_msg_0.err = 0.591515630908;
    tmp_msg_0.ctrl_imp = 0.897293176639;
    tmp_msg_0.rel_dir_x = 0.254081636747;
    tmp_msg_0.rel_dir_y = 0.598024019543;
    tmp_msg_0.rel_dir_z = 0.782106787061;
    tmp_msg_0.err_x = 0.827138482586;
    tmp_msg_0.err_y = 0.910058298213;
    tmp_msg_0.err_z = 0.0578947601872;
    tmp_msg_0.rf_err_x = 0.904826478453;
    tmp_msg_0.rf_err_y = 0.106383220726;
    tmp_msg_0.rf_err_z = 0.051185053225;
    tmp_msg_0.rf_err_vx = 0.361625146015;
    tmp_msg_0.rf_err_vy = 0.376720008188;
    tmp_msg_0.rf_err_vz = 0.733939265598;
    tmp_msg_0.ss_x = 0.913334874493;
    tmp_msg_0.ss_y = 0.911932461804;
    tmp_msg_0.ss_z = 0.926595625028;
    tmp_msg_0.virt_err_x = 0.534787002579;
    tmp_msg_0.virt_err_y = 0.704062288598;
    tmp_msg_0.virt_err_z = 0.90988777193;
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
    msg.setTimeStamp(0.0898854119734);
    msg.setSource(22465U);
    msg.setSourceEntity(176U);
    msg.setDestination(3787U);
    msg.setDestinationEntity(144U);
    msg.s_id.assign("OQIOIOEUYIVEUKSLQJAJLTGAGUPPVZSOOVCNYJPCQOCWLEZEEUVHBMQBTTAALRHYXZUHFIXCZKNXOWTHSGOMKJHGWSUNQVKZVI");
    msg.dist = 0.122251320214;
    msg.err = 0.355700832911;
    msg.ctrl_imp = 0.378868956487;
    msg.rel_dir_x = 0.333654792357;
    msg.rel_dir_y = 0.0837478110636;
    msg.rel_dir_z = 0.867650319595;
    msg.err_x = 0.5291404115;
    msg.err_y = 0.478761809584;
    msg.err_z = 0.100856472715;
    msg.rf_err_x = 0.0953976810381;
    msg.rf_err_y = 0.930651631387;
    msg.rf_err_z = 0.798668307911;
    msg.rf_err_vx = 0.427730482109;
    msg.rf_err_vy = 0.49655957768;
    msg.rf_err_vz = 0.230316597835;
    msg.ss_x = 0.440470719147;
    msg.ss_y = 0.808303012047;
    msg.ss_z = 0.64144474591;
    msg.virt_err_x = 0.215951892971;
    msg.virt_err_y = 0.789040959103;
    msg.virt_err_z = 0.19197200668;

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
    msg.setTimeStamp(0.480809542897);
    msg.setSource(45135U);
    msg.setSourceEntity(226U);
    msg.setDestination(7824U);
    msg.setDestinationEntity(198U);
    msg.s_id.assign("LFIYYYENGROMVUVBSSIBKEWTNPPBEICXVGNUPOAJWXYDISCKSEKKTWBIPSOFAIHLQTCMRULGZ");
    msg.dist = 0.412841907943;
    msg.err = 0.270305321967;
    msg.ctrl_imp = 0.474767660643;
    msg.rel_dir_x = 0.52396800229;
    msg.rel_dir_y = 0.757761835699;
    msg.rel_dir_z = 0.593812584616;
    msg.err_x = 0.3170885011;
    msg.err_y = 0.262477391687;
    msg.err_z = 0.448433599116;
    msg.rf_err_x = 0.494653065485;
    msg.rf_err_y = 0.913688760215;
    msg.rf_err_z = 0.264124156748;
    msg.rf_err_vx = 0.539250670767;
    msg.rf_err_vy = 0.890795972297;
    msg.rf_err_vz = 0.17476220717;
    msg.ss_x = 0.973638898074;
    msg.ss_y = 0.190144052354;
    msg.ss_z = 0.6172323181;
    msg.virt_err_x = 0.668119359442;
    msg.virt_err_y = 0.0167893914228;
    msg.virt_err_z = 0.356957043261;

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
    msg.setTimeStamp(0.130214163955);
    msg.setSource(575U);
    msg.setSourceEntity(72U);
    msg.setDestination(9726U);
    msg.setDestinationEntity(186U);
    msg.s_id.assign("JOLZJUGKMQEKCRPHYJOKJWEAKQABTRLQJVSHYMRFHNFNMGITYOWCFQROAINGVHAXKQXZDSTJTCFIBULHIHAEJWDXMUIVIRLYMAVZGQXDTKJDTQBUPCPMEMRDBCNRWBDRLMVPVPWODVGNJEGWUPTLXCAPSUIORDUKFTGCWVSFFORPLZYXSXABLULDOYH");
    msg.dist = 0.436236823566;
    msg.err = 0.166533375567;
    msg.ctrl_imp = 0.222845742707;
    msg.rel_dir_x = 0.186173370929;
    msg.rel_dir_y = 0.0661786212255;
    msg.rel_dir_z = 0.898321170586;
    msg.err_x = 0.837633312923;
    msg.err_y = 0.596581169592;
    msg.err_z = 0.535304617165;
    msg.rf_err_x = 0.229626645473;
    msg.rf_err_y = 0.482129390657;
    msg.rf_err_z = 0.219455942467;
    msg.rf_err_vx = 0.0356240763689;
    msg.rf_err_vy = 0.0533078476722;
    msg.rf_err_vz = 0.101988316932;
    msg.ss_x = 0.12568328968;
    msg.ss_y = 0.160171207743;
    msg.ss_z = 0.153575243241;
    msg.virt_err_x = 0.919507735834;
    msg.virt_err_y = 0.186032469673;
    msg.virt_err_z = 0.421797403836;

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
    msg.setTimeStamp(0.290919532719);
    msg.setSource(43129U);
    msg.setSourceEntity(17U);
    msg.setDestination(18438U);
    msg.setDestinationEntity(132U);
    msg.timeout = 20732U;
    msg.rpm = 0.127375820223;
    msg.direction = 168U;
    msg.custom.assign("IDZCLZOENNHSQMCMAZUKDCVKGNLWKSSVSLQXVJJTHRRRCXXPUIBAJMZOVNWFDXOKVOFFGBLAQGFPPTBQZLUMXAANFWPGGBQXUBMMDTGOQYKNIENRROPCVNHJMWEVGUHBSIFKLTTERMYVNCVPXKKYACDWYHLIYXZTWYHGIDEBZZQXEIRBWT");

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
    msg.setTimeStamp(0.541625582759);
    msg.setSource(9156U);
    msg.setSourceEntity(77U);
    msg.setDestination(17195U);
    msg.setDestinationEntity(106U);
    msg.timeout = 33203U;
    msg.rpm = 0.395975471404;
    msg.direction = 242U;
    msg.custom.assign("INQZGITCEORBZSNRYNCZYVADRJARTKUGYJQCIOVVTVZZITDDGOVSXPQXWIWSWDLIKWMCXBTHUIJMGQHMQFUSAUJWDPLBDLMVPUFCEBWEZEHGZUXCTEOWNSJERYCFJRIFNCUGYKJLLFVXJOAEMEGZFHVRYYVASFPIZPHQPOTUJAICTOBGRHTOQABSBVYTQHWRXKPMDHWFLZSCAYNSBDKKXUQNKSKQMBFEKFPMONHPG");

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
    msg.setTimeStamp(0.173980485755);
    msg.setSource(56864U);
    msg.setSourceEntity(141U);
    msg.setDestination(43002U);
    msg.setDestinationEntity(91U);
    msg.timeout = 31796U;
    msg.rpm = 0.411409403297;
    msg.direction = 111U;
    msg.custom.assign("UGUGTZFVNTPYFGSPDWJOBXFOTLRBWZJVNAQFQAPQJCOOXGDSHCGXLECEDZNPSHPHCYOFKRYAYFJRBRVBJOZLTBDZFOWNPETPKYHIISIMFRHLXEIWUUMESQWNWUGUMDLTPSIVYMOQIBYJCNQZFJCVOANGJDWXMDNCZQHKDHNURSDSHRAVGC");

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
    msg.setTimeStamp(0.166586621499);
    msg.setSource(34637U);
    msg.setSourceEntity(160U);
    msg.setDestination(38924U);
    msg.setDestinationEntity(205U);
    msg.formation_name.assign("XKOEBLQIXYYSZFBKPCQFCJIKUHSSUDEXYXPUFVOKGAGTCOWEYUMLHVAMPRNCPMZYJLEZLIQQRBJSQXKNMCUMJGLOHGWIURNYXLRISOUVKKMMDATWRKNQABJPBQCBPHNTVETPWEQEAFWMIVSOUCYSALWGXDRNDAWENVESTZNZCVZIYXRRTTYKLLILMEXYFPRGGHPZABJBNATJOW");
    msg.type = 182U;
    msg.op = 66U;
    msg.group_name.assign("GJJMCJGNPWAIXYEUHJWPFAGOQRZENVJBTRNVLDZQEQXOHIEISZNOPXIXAJBADCTVFQDPNWMXZSCEROMUVSKOZMKODHWZFUMHGYPIGAEEPLMWBVQUSLZENGJFZSBLAHLTRTTSEVIMNXYCQJHGWHNYKTFPCDLBBCHTGWZOKPZHUNUGMBIFLQTQPPLSGKIYIS");
    msg.plan_id.assign("MVSXMHAYPDYWTIWCDIZSXARZZPWGDOGBHYULVKNZABY");
    msg.description.assign("IZEWJCTYIDAUPGWOSXFXMNZBGNNQRBZDATRRUOGAEOOGCOFJVFFGNTHRRKGUTVDKEIQHEEPFAPSWKHZMMFTPMRIZDYSIDYBEBYMXLLXQXWFDBUFCVLVNCPBJAQJZTXTNAGLRWIOEYABHISAALKJXOKAMGHEYROCQPBDWDDVNJOUVCWZVHHYRZIFLUEXKVBWMVPRJXYPSWVYQMTQPHKWBNQHCTZULECTJQIKSOSQPHG");
    msg.reference_frame = 23U;
    msg.leader_bank_lim = 0.50574812891;
    msg.leader_speed_min = 0.561164514474;
    msg.leader_speed_max = 0.724736270007;
    msg.leader_alt_min = 0.503972274642;
    msg.leader_alt_max = 0.0121425478186;
    msg.pos_sim_err_lim = 0.790055638692;
    msg.pos_sim_err_wrn = 0.652194837883;
    msg.pos_sim_err_timeout = 39870U;
    msg.converg_max = 0.32472893155;
    msg.converg_timeout = 40271U;
    msg.comms_timeout = 26027U;
    msg.turb_lim = 0.0121495141046;
    msg.custom.assign("ZAWLABLXHMZKOQPFGRVBWKMVHISNEYKFKMDFFPINTTVIPLEMUAYACWFDFLBEZKWOYRHZTXVNIJCRASXZTPHX");

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
    msg.setTimeStamp(0.80815446907);
    msg.setSource(39145U);
    msg.setSourceEntity(140U);
    msg.setDestination(39708U);
    msg.setDestinationEntity(104U);
    msg.formation_name.assign("VBNIYTOVSEKJQKJUJXGLIBWIROMEBDGTWTRJRPLQBSPEUCICMZMNMGBAFCNUBAVTKMYTYLQ");
    msg.type = 23U;
    msg.op = 172U;
    msg.group_name.assign("YYMQUENTOANPMQIBBEOYFMDAIXTJE");
    msg.plan_id.assign("APYMOUIRKLEAFMMYTHYRVOETQLWMPGOJTUQFLSYSBALUIFBHDQWTKUUNWFYIM");
    msg.description.assign("QKXFWOUUNMXYXURIRVTQMPADBLFHSQTXALBLVPFBJWOTMZYGVLKYZTIEKBOW");
    msg.reference_frame = 129U;
    msg.leader_bank_lim = 0.558098917104;
    msg.leader_speed_min = 0.0620163267265;
    msg.leader_speed_max = 0.233511282453;
    msg.leader_alt_min = 0.59422182855;
    msg.leader_alt_max = 0.921160497225;
    msg.pos_sim_err_lim = 0.693149174486;
    msg.pos_sim_err_wrn = 0.776364504083;
    msg.pos_sim_err_timeout = 45129U;
    msg.converg_max = 0.388028234932;
    msg.converg_timeout = 14992U;
    msg.comms_timeout = 15577U;
    msg.turb_lim = 0.972477708383;
    msg.custom.assign("TQALXIZLNCIRVKXMSCJQBKEUFOSGDLBZRRVERZITOHEXELFZARNXYUUYPH");

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
    msg.setTimeStamp(0.0902386319876);
    msg.setSource(38628U);
    msg.setSourceEntity(130U);
    msg.setDestination(6405U);
    msg.setDestinationEntity(245U);
    msg.formation_name.assign("BJRBBGWAGTZCOLRXTMAUWOACQBREUPJWHYCCLUIGVGEKAKWTWWJEGDJOPOVZEOKQFTHXYEBMIHCKJPZOSZPMNUXMVNVAUXFKIJJHERAFCFKNJTPUGBMSEIBISQNAYMIFLQRIZDTSCQSGSBGRZCWYPCQZIHYZDMDDVNJHRLUEZMOLNT");
    msg.type = 132U;
    msg.op = 52U;
    msg.group_name.assign("BAOYVCIMZNULBNFDSZYPAKZIDUKTGTVQWFDHVWBLEBVCJOSIGOPRRLMIXAZGUQOHQJYLZDQRXJYMFOBUEXQCKSAVSQMJSUGAAKYWCRRPMFNYGWCHYZEYFTZPFUMTNOKPGTHHJEOTWECHWAJNEITWVJRDMDSEPIKTPLKVSVNFTXRNGSRXGGZFOCRTXUQPFWJQAKHDLLUIWKHYDEBLISMOQFOLPLAVNBH");
    msg.plan_id.assign("KVYSFGKKQGHKWDELHWKSSTDWDMRJBZJIWVNWUBEFTEHACIGEYUIHXATEIDUYGVQLPSOTFHRJJXPPKJZETLRGUMCMQBCUCMTFLZYABAZSJVR");
    msg.description.assign("RFRUWGKOMBUPVVMOYCSBHRZFCTIJFOZTIPERHXYJNQZLAMZENDRNWDGWQTMNGSVNIDQDPBAXIMYMMPBBSJVIAWLUUMTIFYKNANGFAPELPBVZRMDENGVXTTTCHMNGYETJOEQCZKDSFGHWURXJLIJIEZEUKRSELSHSTDVPCYXWBVCAKAQRYYOZUKQFQISCWZWXSPQGQNAGUJFHWQJKJTXCOVVHOFPLDAHXCOWLYHUDUZHBKBLGPALX");
    msg.reference_frame = 128U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 62549U;
    tmp_msg_0.off_x = 0.176719536642;
    tmp_msg_0.off_y = 0.016142107155;
    tmp_msg_0.off_z = 0.0705281210881;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.917762568407;
    msg.leader_speed_min = 0.220999474596;
    msg.leader_speed_max = 0.794871052145;
    msg.leader_alt_min = 0.720037155703;
    msg.leader_alt_max = 0.900600031174;
    msg.pos_sim_err_lim = 0.967133453178;
    msg.pos_sim_err_wrn = 0.936057940778;
    msg.pos_sim_err_timeout = 28771U;
    msg.converg_max = 0.603468082409;
    msg.converg_timeout = 49180U;
    msg.comms_timeout = 36926U;
    msg.turb_lim = 0.622821576506;
    msg.custom.assign("YIGWEFEUOVIYJPDZHGXNZUZGQYHJAKUKOGFRMUOQFDYBYRNLALIPOUVLODTORKIJATPGVKXZYRVDVUYHRJSZSZCSGZRTTJJGLESQAMJHEJWWPXQWSKWCFVBMKYHBLCSJCHCTATVNMTPNYUBOZBDAXVQEWQWMHHQKRCICLQSQDRWZTOGXHNAXGH");

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
    msg.setTimeStamp(0.107593705855);
    msg.setSource(34871U);
    msg.setSourceEntity(184U);
    msg.setDestination(6646U);
    msg.setDestinationEntity(0U);
    msg.timeout = 77U;
    msg.lat = 0.163889216969;
    msg.lon = 0.884777214788;
    msg.z = 0.65088537773;
    msg.z_units = 106U;
    msg.speed = 0.737241958565;
    msg.speed_units = 174U;
    msg.custom.assign("FGMPFIVJMVAKLKDFWDIXZAXEWAFCEBIJQWUQFI");

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
    msg.setTimeStamp(0.451894722961);
    msg.setSource(9902U);
    msg.setSourceEntity(174U);
    msg.setDestination(54172U);
    msg.setDestinationEntity(237U);
    msg.timeout = 4839U;
    msg.lat = 0.43173739848;
    msg.lon = 0.00548548176373;
    msg.z = 0.435056681899;
    msg.z_units = 144U;
    msg.speed = 0.406007289184;
    msg.speed_units = 42U;
    msg.custom.assign("MVAQIVCIBPPULDEPBKIZDDFKDCSGASMYZT");

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
    msg.setTimeStamp(0.304463289205);
    msg.setSource(63249U);
    msg.setSourceEntity(0U);
    msg.setDestination(58322U);
    msg.setDestinationEntity(169U);
    msg.timeout = 52950U;
    msg.lat = 0.241674411486;
    msg.lon = 0.0270826039938;
    msg.z = 0.954701222799;
    msg.z_units = 206U;
    msg.speed = 0.690369963049;
    msg.speed_units = 233U;
    msg.custom.assign("CSFBYRPXEQCRSKDFKIQAICZFASLRBIESVPSNQJAMOXHCIUDJBMMHNHPDRGIHYHUS");

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
    msg.setTimeStamp(0.894307035243);
    msg.setSource(52750U);
    msg.setSourceEntity(154U);
    msg.setDestination(26184U);
    msg.setDestinationEntity(202U);
    msg.timeout = 58350U;
    msg.lat = 0.194253052086;
    msg.lon = 0.544701194323;
    msg.z = 0.534321335826;
    msg.z_units = 141U;
    msg.speed = 0.142393930096;
    msg.speed_units = 67U;
    msg.custom.assign("TAGRWMCJVTHXXPFOYWKLUAFQPEACGBCJJMEVYGUPSFKBICKHRMFBL");

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
    msg.setTimeStamp(0.970599568957);
    msg.setSource(52469U);
    msg.setSourceEntity(239U);
    msg.setDestination(1049U);
    msg.setDestinationEntity(54U);
    msg.timeout = 8385U;
    msg.lat = 0.570542959358;
    msg.lon = 0.880146534982;
    msg.z = 0.0110948441768;
    msg.z_units = 8U;
    msg.speed = 0.255432519146;
    msg.speed_units = 238U;
    msg.custom.assign("CLXZLQHIOUFBYYXOLVFWKCDGSZPEZMPWELXKLSAOPFKGWMHXGANZBUNUDYERCVCMJASLMPEYKRSZHEOKHIFLZVPCJTAGANRFWYQQNWNOCQVUHNJGEPYNQCHQQXIPRRTHWNLCRIJIPLUIISHHODQVBJXUIKGEUXHUZEMFWDBQLAJAOJZFGZMJTTDAZSTBUDIVGPBSRFTVXYYDWBWGSUPOWDREXYKMJBFEVSFV");

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
    msg.setTimeStamp(0.268177247758);
    msg.setSource(4955U);
    msg.setSourceEntity(249U);
    msg.setDestination(30911U);
    msg.setDestinationEntity(206U);
    msg.timeout = 59775U;
    msg.lat = 0.696351889751;
    msg.lon = 0.613199220457;
    msg.z = 0.304699756861;
    msg.z_units = 43U;
    msg.speed = 0.876482604825;
    msg.speed_units = 62U;
    msg.custom.assign("SOMWPNQPSBRLFEUUXFSHGOTHVJVXKLDGVYWQERXEYOQBKSCKTVFMQIGGISCYEJNLCMGMOLFKHHGUCBNXBWTPHETDIXRNVQTKKJIWRAASDPYDRNGQKBBHIFXPWEZBBTKYZAKG");

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
    msg.setTimeStamp(0.968076157844);
    msg.setSource(9637U);
    msg.setSourceEntity(140U);
    msg.setDestination(41561U);
    msg.setDestinationEntity(223U);
    msg.arrival_time = 0.658561653342;
    msg.lat = 0.296493469477;
    msg.lon = 0.732380329762;
    msg.z = 0.385433716038;
    msg.z_units = 50U;
    msg.travel_z = 0.352739985122;
    msg.travel_z_units = 27U;
    msg.delayed = 74U;

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
    msg.setTimeStamp(0.622597141953);
    msg.setSource(6944U);
    msg.setSourceEntity(173U);
    msg.setDestination(22178U);
    msg.setDestinationEntity(223U);
    msg.arrival_time = 0.545149842019;
    msg.lat = 0.515493352565;
    msg.lon = 0.442956929285;
    msg.z = 0.0531489311258;
    msg.z_units = 169U;
    msg.travel_z = 0.651693381012;
    msg.travel_z_units = 173U;
    msg.delayed = 140U;

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
    msg.setTimeStamp(0.186215534843);
    msg.setSource(3608U);
    msg.setSourceEntity(20U);
    msg.setDestination(2935U);
    msg.setDestinationEntity(88U);
    msg.arrival_time = 0.891523411788;
    msg.lat = 0.0403412524138;
    msg.lon = 0.94641249919;
    msg.z = 0.983592332383;
    msg.z_units = 212U;
    msg.travel_z = 0.504025642531;
    msg.travel_z_units = 253U;
    msg.delayed = 4U;

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
    msg.setTimeStamp(0.369712293671);
    msg.setSource(57818U);
    msg.setSourceEntity(46U);
    msg.setDestination(9443U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.916773640545;
    msg.lon = 0.206170431145;
    msg.z = 0.575248679422;
    msg.z_units = 189U;
    msg.speed = 0.33204491174;
    msg.speed_units = 229U;
    msg.bearing = 0.867862804909;
    msg.cross_angle = 0.847647910022;
    msg.width = 0.81259569192;
    msg.length = 0.262164762197;
    msg.coff = 79U;
    msg.angaperture = 0.0534172776932;
    msg.range = 5333U;
    msg.overlap = 252U;
    msg.flags = 251U;
    msg.custom.assign("LZXRKYOIADJSFUZQLJVUHVZQHBHQYCIUHXANPLCIKKCTVAUUBQAGOJBOBQXRZDWWRZUSNLCRJLEOIXMMRBFVWSXOJQGTMETCJAPWCKUNPHATHVNRYTHUCDOVOSIETSWTVAHWGJDIFEKOMREBMGRMIZZDUKFXLPGGSLLGKBYMOUVRYGYDQESFHWPFXMLSWDFECKOJYNQWPNXABTPVHFENDMQSFCETGNXSPANZIDKZE");

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
    msg.setTimeStamp(0.652733037695);
    msg.setSource(18537U);
    msg.setSourceEntity(10U);
    msg.setDestination(19655U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.965617775536;
    msg.lon = 0.3690348185;
    msg.z = 0.569603065664;
    msg.z_units = 127U;
    msg.speed = 0.259594975763;
    msg.speed_units = 70U;
    msg.bearing = 0.509792606966;
    msg.cross_angle = 0.123445551304;
    msg.width = 0.573803097786;
    msg.length = 0.167021802271;
    msg.coff = 155U;
    msg.angaperture = 0.942529919736;
    msg.range = 39856U;
    msg.overlap = 66U;
    msg.flags = 65U;
    msg.custom.assign("IEMYETSEKMSGRVTGZLXFVHJKGFULNBOALSLJALICNJHNYCPCJJYXWBNKPFBVPUSZIPHTNDEZFRZJOKMZIFCPWBQXAOPFRWS");

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
    msg.setTimeStamp(0.554032994729);
    msg.setSource(48935U);
    msg.setSourceEntity(126U);
    msg.setDestination(38025U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.161705640052;
    msg.lon = 0.385912799396;
    msg.z = 0.44514581158;
    msg.z_units = 202U;
    msg.speed = 0.21475882658;
    msg.speed_units = 220U;
    msg.bearing = 0.0720696885402;
    msg.cross_angle = 0.0788818128025;
    msg.width = 0.966509098665;
    msg.length = 0.312937290071;
    msg.coff = 122U;
    msg.angaperture = 0.188132938789;
    msg.range = 41476U;
    msg.overlap = 246U;
    msg.flags = 233U;
    msg.custom.assign("QYDFFQTQVPYBHLHFRSUURTAUAHBZFDOOCGMCYZGJZHVREFAVOZHDLICRKRVOJFISTBHOYBQGKXIOHAWSAGBMDHVXMVSWJRSCLABMCXGGUUWIYEADJBUDHZYNDTMZAEWTZXNDUWNCNEVOCWSAQVRYOKEKFJMUIZYWPXPEPOKQBWNIJZSGGTGYSMKKPUXBDNRXXRMPEILVLANPQQMFFTLCLLXYWWVKFEMLOSJPEEQNLPKICJTJBST");

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
    msg.setTimeStamp(0.981271079497);
    msg.setSource(31662U);
    msg.setSourceEntity(240U);
    msg.setDestination(58740U);
    msg.setDestinationEntity(80U);
    msg.timeout = 43617U;
    msg.lat = 0.210822048089;
    msg.lon = 0.995551441592;
    msg.z = 0.302132339625;
    msg.z_units = 72U;
    msg.speed = 0.543650379674;
    msg.speed_units = 123U;
    msg.syringe0 = 46U;
    msg.syringe1 = 251U;
    msg.syringe2 = 137U;
    msg.custom.assign("OJOOAUWSHCWNIKPOHBIHUTYTGPFFXNLXCDSZBWHPKKGQZGGSIJEUAQLDRHBTVWOHZJRJSMUDGZYDWPFPIMWPYEOYZBKDRLVZBKKXHASAGJOCMSNPQQDCUBNBMJTPACI");

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
    msg.setTimeStamp(0.525288297268);
    msg.setSource(34354U);
    msg.setSourceEntity(13U);
    msg.setDestination(37143U);
    msg.setDestinationEntity(152U);
    msg.timeout = 38365U;
    msg.lat = 0.239971511626;
    msg.lon = 0.878807430888;
    msg.z = 0.899778791861;
    msg.z_units = 134U;
    msg.speed = 0.646039797489;
    msg.speed_units = 177U;
    msg.syringe0 = 215U;
    msg.syringe1 = 119U;
    msg.syringe2 = 123U;
    msg.custom.assign("DNLRIEMSQCGRUFMXTKOOUKDIEVWUIQKYZULJWTFUZQEGMHGK");

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
    msg.setTimeStamp(0.952889280859);
    msg.setSource(43336U);
    msg.setSourceEntity(8U);
    msg.setDestination(34113U);
    msg.setDestinationEntity(91U);
    msg.timeout = 61974U;
    msg.lat = 0.889446816962;
    msg.lon = 0.224233133331;
    msg.z = 0.715732202994;
    msg.z_units = 102U;
    msg.speed = 0.979839927822;
    msg.speed_units = 152U;
    msg.syringe0 = 29U;
    msg.syringe1 = 110U;
    msg.syringe2 = 99U;
    msg.custom.assign("BRTHKRRATUYWHVKVBBSZVVCODRUEZVOMJLMPBOPDYIHVUTJUSXICFDMMOUDGMWHRTBOLQNW");

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
    msg.setTimeStamp(0.921178625287);
    msg.setSource(43110U);
    msg.setSourceEntity(249U);
    msg.setDestination(4595U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.12001267427);
    msg.setSource(20462U);
    msg.setSourceEntity(202U);
    msg.setDestination(40895U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.708417921162);
    msg.setSource(48125U);
    msg.setSourceEntity(39U);
    msg.setDestination(32984U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.0675701857435);
    msg.setSource(52502U);
    msg.setSourceEntity(25U);
    msg.setDestination(8435U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.299752245955;
    msg.lon = 0.380442611411;
    msg.z = 0.759916047062;
    msg.z_units = 21U;
    msg.speed = 0.999063575642;
    msg.speed_units = 189U;
    msg.takeoff_pitch = 0.00588941273633;
    msg.custom.assign("ICFIRZRXFWLFSPMCHJOAXMDDNKSWTJAAWXMEYMZJOIFWGGXIHJADBQLDBBJLDLEVDPUHWVCNUXBHXASJMRBCUSFGRAWGXEYEIZXFPOVUKTSTHHRNUYKPYSZDAMQ");

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
    msg.setTimeStamp(0.883529069056);
    msg.setSource(62670U);
    msg.setSourceEntity(179U);
    msg.setDestination(8933U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.378865724577;
    msg.lon = 0.669536212585;
    msg.z = 0.983154097562;
    msg.z_units = 189U;
    msg.speed = 0.581227312122;
    msg.speed_units = 31U;
    msg.takeoff_pitch = 0.719421326334;
    msg.custom.assign("WNKWYEPMRKRQYITDGQZEUTPBBMOAFFXDIWXBMTFKVOGSJFXZODHRODSIKZHEPJKYTDOCSDPUCQSOOU");

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
    msg.setTimeStamp(0.166845262262);
    msg.setSource(29253U);
    msg.setSourceEntity(189U);
    msg.setDestination(824U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.10310754387;
    msg.lon = 0.265325403942;
    msg.z = 0.739473267936;
    msg.z_units = 61U;
    msg.speed = 0.530353531474;
    msg.speed_units = 11U;
    msg.takeoff_pitch = 0.169337234362;
    msg.custom.assign("GTSVDFHTIJESLOIYQABVKMDBFNEYSLXRYSCNBHGPQDLOPKBIUFJNAWVUAJPCWMXBYOXKIGINPCHAIRSMSYYWWJOQJTDLFEUFRDZROPABUNGKTZVGDQQAKRXAAMJDRCCZWLRIVEDCRZWDVLGBLBFVHAGBLNJIUZFQYWUMUXKQEXMNVHROCFYOGS");

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
    msg.setTimeStamp(0.308005682314);
    msg.setSource(18238U);
    msg.setSourceEntity(36U);
    msg.setDestination(14428U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.0722332782875;
    msg.lon = 0.0119654581183;
    msg.z = 0.968312019314;
    msg.z_units = 132U;
    msg.speed = 0.977364322115;
    msg.speed_units = 183U;
    msg.abort_z = 0.971708161945;
    msg.bearing = 0.517379107334;
    msg.glide_slope = 88U;
    msg.glide_slope_alt = 0.0483145020296;
    msg.custom.assign("BEIHXSHSLACTQXZVBPFMVSDHJNXLDJKFASCMCHXXBWRFQZYVMYLXULPCNPJOOVJLVDTTMOIQRAWQUUAFDKEZHTGCZNMSWOJFEDEOVGDNVAMEKXWGXRWVTRHZTQRGBSFSCUBMWTBBCEBCTDIQPGPFPCPXNRIJGOYEZHGNPWKFHNYSCEYWORDIEZUDHJWMVSQLZAUYSARKQKKEUIUTORGRGNYTYKJIY");

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
    msg.setTimeStamp(0.03162770142);
    msg.setSource(30354U);
    msg.setSourceEntity(7U);
    msg.setDestination(22688U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.229630603662;
    msg.lon = 0.931840401264;
    msg.z = 0.64946482751;
    msg.z_units = 124U;
    msg.speed = 0.901855501635;
    msg.speed_units = 246U;
    msg.abort_z = 0.576463654787;
    msg.bearing = 0.900716097388;
    msg.glide_slope = 149U;
    msg.glide_slope_alt = 0.937441478477;
    msg.custom.assign("YSRKGHPBCXOTZTSKAZLSXLKJOHFAGLIXMTIKRXQUZYCKPAJBOVHRHQZWIBEZJWNSFQQWEVXOZNYZDNROCMGKPXOQBTGXSBRWUQUGEVCBDTOMLUVUADWDLJPPYCZJHUAZYCMHFQVBFURIVFNIYVKYYLUJEGWAAEPJQNRBMLIXELBKFKXZNWJPEOVSMCUFEGDEYPMWLTRDLDNDJMONFHIHGBRWCSSTSNAGHICDTMWSQPXDIVUNPTEHOAVGAT");

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
    msg.setTimeStamp(0.43214028811);
    msg.setSource(43212U);
    msg.setSourceEntity(236U);
    msg.setDestination(21509U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.0245619944;
    msg.lon = 0.313575485304;
    msg.z = 0.848553442251;
    msg.z_units = 175U;
    msg.speed = 0.38122681375;
    msg.speed_units = 237U;
    msg.abort_z = 0.0819703849836;
    msg.bearing = 0.540500919093;
    msg.glide_slope = 115U;
    msg.glide_slope_alt = 0.731247560232;
    msg.custom.assign("WUVPAFXIOCLUHEPVDCEKIDNPFHPQWNUTIKKYTDKOPZFLQNWCTYUTNSZPELXNVGXDKCMYECJSSOBNJHJWRFJQIDKSBWPXDHASLQMYXRGADMFBYQPWEROCLNLVQFGINEAVDTRMZMQTUCVVOKMZGBJHYHPAJRAAOISIRFIAYIRYWBJPBZHQKLEXOJSHCBBLAMZXBWGXFTGFRZLQGOZCVOVIZZMTWUBANEKTGSSSLQHENXMCKYFDMDETWGHUU");

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
    msg.setTimeStamp(0.625429232773);
    msg.setSource(14826U);
    msg.setSourceEntity(112U);
    msg.setDestination(54897U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.733499154639;
    msg.lon = 0.397640188677;
    msg.speed = 0.969814222731;
    msg.speed_units = 4U;
    msg.limits = 224U;
    msg.max_depth = 0.761462212431;
    msg.min_alt = 0.61726910081;
    msg.time_limit = 0.622889523404;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.416067951844;
    tmp_msg_0.lon = 0.0378352580591;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("UEMEXQFOHPBWPIILBEKFCGJLVCORUFZDFJEVZCKUZMVSQOQEGTRHALPXPUBTCDUKCZAVLQVSNTODIGCNHKVJZRGPINGYRKLZWQDBVVQDDKLJTWTXRPIMPEBTIATXWPWSYOXYMRSQUQMWCKUOGAMTSRJAMPHZIBHNCJQKOFEGDPIMBLXRSLTXHKFYWRYELDHSUQWXTJYBJNNEHGOEDJANOKWVIFBMOYYMRXBAUNAJAHNGSIANDFUCWSFX");
    msg.custom.assign("SUNTYMBUQODWHPOCVZODWAYNJFGPRRNCOQPERKFVEWQOZSQNRTYCADFJHTHMMHJKBRYXTFCUBCWJLXSZREALEBGZYIFBXIFCTSULJAVNHCHCMBSGOHIXMHOCAMWDVNKXWLGWRMQYSIYPVKPLOTJT");

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
    msg.setTimeStamp(0.871981437916);
    msg.setSource(57986U);
    msg.setSourceEntity(139U);
    msg.setDestination(28108U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.189755300991;
    msg.lon = 0.892812799238;
    msg.speed = 0.161973602115;
    msg.speed_units = 83U;
    msg.limits = 136U;
    msg.max_depth = 0.357515628191;
    msg.min_alt = 0.0723134324941;
    msg.time_limit = 0.801873405928;
    msg.controller.assign("MFBELWMOXWFIRAEAEJQXODXQKNJWVOIMECPWBRDQKZZMSGTBOQSIHMPHMPJYKTRUEDFCGQTCLVCRGZKMQDSUFZYKOUVTWBOVAJIDUHVVQCSXRKZWIANHLDOEHUWBDRMLFNXUUT");
    msg.custom.assign("EVNNKZQRAMEJFCALPKUCJTGPTYNPJVQWNDDQWOOSPEWYASNFOHGKOJTKXMMMSWVUPBJYEMBDAAUJKLLLEWVYRRAFDFWBHGJJUBGMHQAWYXQUQRIUOTZVPBYOQXGAPSPVMMLTUTNSNHB");

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
    msg.setTimeStamp(0.375241305089);
    msg.setSource(5315U);
    msg.setSourceEntity(65U);
    msg.setDestination(24550U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.71256392099;
    msg.lon = 0.18965920228;
    msg.speed = 0.768909838555;
    msg.speed_units = 37U;
    msg.limits = 38U;
    msg.max_depth = 0.913655195887;
    msg.min_alt = 0.801737037222;
    msg.time_limit = 0.498504244776;
    msg.controller.assign("VZIDUWIURXZQPPKJUXT");
    msg.custom.assign("ZSHNKOYEANIZGTIOAKTDPOYUAOJRTARMQFJFRTUEAHMPQWMSGXKEJYNSBDMSEKTMWH");

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
    msg.setTimeStamp(0.382852729088);
    msg.setSource(34858U);
    msg.setSourceEntity(33U);
    msg.setDestination(29360U);
    msg.setDestinationEntity(140U);
    msg.target.assign("QXKFAGNTBNHSRWOKJWLIEUOHWGTJIGNISHRVYRJJVIXJSGICFMQLNYSZACPSYVQAHTPSJVFWANTBDXYBOYHCZWLXE");
    msg.max_speed = 0.514411573075;
    msg.speed_units = 249U;
    msg.lat = 0.600325201167;
    msg.lon = 0.450901025869;
    msg.z = 0.188988211969;
    msg.z_units = 250U;
    msg.custom.assign("JGLMTFWUNJNECNSGYMNLWIDIENXXVZTGODIPRWHTUOXKAHENTIWVSDFBOXMXQCONZHLSUXHBOWTCDVHRDRSKCPBXYLEFZJRQEISPKPQSAIJKDCUCRFAIOYRASBBZKVWQDEGCFGFJH");

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
    msg.setTimeStamp(0.949276445148);
    msg.setSource(45264U);
    msg.setSourceEntity(252U);
    msg.setDestination(22156U);
    msg.setDestinationEntity(243U);
    msg.target.assign("NPJCSESBWJNHGWNOWYRNWQTQMMLDOUVZSKEZPJOVZHFPIHFWQATCHVPKSQJIBRUIMAOAZA");
    msg.max_speed = 0.888836566596;
    msg.speed_units = 11U;
    msg.lat = 0.116378902032;
    msg.lon = 0.0655235898523;
    msg.z = 0.301829351706;
    msg.z_units = 139U;
    msg.custom.assign("ZKKEXAZCBHGPAFLNPUUKEOYILFHWJDLIUQHPADKFGTYIITMVPVWBOJVNQSTJOSKSDEYSZCTNXZASNCQUOZALVEOZLCUXPFYKHBDHFBBSOWSKMFBKJMHVJRAIFMAZSIRS");

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
    msg.setTimeStamp(0.159531008393);
    msg.setSource(12162U);
    msg.setSourceEntity(204U);
    msg.setDestination(32835U);
    msg.setDestinationEntity(109U);
    msg.target.assign("IRJKLCZBMWYGAEKZIROMPQEHVRDNHLJLMITBADJBYCIXBPIZNWRAAGKCWKVPMLMNGTRLFVKHKWQWVEESCSCPWLVNZRVQYTKDNZJPMLJTFWAAIQPECFCNXUUSFRUEIHIIFUQBMYYZOOGORQJRXHA");
    msg.max_speed = 0.115424307312;
    msg.speed_units = 32U;
    msg.lat = 0.793403323776;
    msg.lon = 0.352668589607;
    msg.z = 0.989457988125;
    msg.z_units = 125U;
    msg.custom.assign("BJHHURQQIJPSLVLQKZERDRYJUWOACBZOUMPLUTHBWOGGEHXHTEZKYJXDOQYLHLXMKXMAGVCISXDSJRSSATZLFNOVATGMJWKZMKQEFAQXAWZYNMSNKNIEWAUBAHRMFFHZRLGVQZYXISFS");

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
    msg.setTimeStamp(0.656817896565);
    msg.setSource(56145U);
    msg.setSourceEntity(231U);
    msg.setDestination(33564U);
    msg.setDestinationEntity(249U);
    msg.timeout = 1104U;
    msg.lat = 0.194029781664;
    msg.lon = 0.909302056524;
    msg.speed = 0.129519845834;
    msg.speed_units = 193U;
    msg.custom.assign("LEYUIDNHCIYQZZZTUMBLQHJIAGPFZRTWMJSCBJQIGXZGXMCYRZZTEDHFAVNMYCQOZFOTHPFZIOUVVIBRBGHFURTOGIUMUCKEXQRJWMHBVSJHPWULMPKTPPXUISWDVOEKJORNSYYFODKRAZDDJKWLGGTNXDDNANEVYNVBTWYYBXAXAAELYUXSHSJSMFPKEQWRKQAFFPRCRNPLIXCWAQDBLFWKCNWBHJEKEJL");

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
    msg.setTimeStamp(0.989082670984);
    msg.setSource(61512U);
    msg.setSourceEntity(165U);
    msg.setDestination(25742U);
    msg.setDestinationEntity(41U);
    msg.timeout = 23608U;
    msg.lat = 0.223322851483;
    msg.lon = 0.2712313648;
    msg.speed = 0.422823517619;
    msg.speed_units = 37U;
    msg.custom.assign("IGNWIOMQPUHTRSZAOWSGKAHCNSYHIADBPEHLHEJQLAISEGSUJBKTGJCLLSBPFJPIZQLAZCYTAVNBBDEIJUYVOLAMXBGQUALIEXWEUXDKYMKPWTECOYXFGCETRSZDZTYFFYJQRWCVGHFRSHSXMMGXPOUAFIROWONHEWMQWFXQDWRLFPRLLMZUQIKJDBKHZEOIOXZBKRDPCTVFGHTVVJMNAMNKUSKCNV");

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
    msg.setTimeStamp(0.52733304881);
    msg.setSource(39210U);
    msg.setSourceEntity(189U);
    msg.setDestination(63807U);
    msg.setDestinationEntity(130U);
    msg.timeout = 34610U;
    msg.lat = 0.945065106374;
    msg.lon = 0.932840553113;
    msg.speed = 0.351520617595;
    msg.speed_units = 67U;
    msg.custom.assign("ZPCEDLPQME");

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
    msg.setTimeStamp(0.290806377163);
    msg.setSource(35717U);
    msg.setSourceEntity(48U);
    msg.setDestination(44211U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.148923589736;
    msg.lon = 0.123518035441;
    msg.z = 0.225530764512;
    msg.z_units = 127U;
    msg.radius = 0.607731837618;
    msg.duration = 35662U;
    msg.speed = 0.380623638802;
    msg.speed_units = 232U;
    msg.popup_period = 34864U;
    msg.popup_duration = 34237U;
    msg.flags = 97U;
    msg.custom.assign("LJLMFAUHTTEVTLTYBJXKLJTMXERMFLLXAAUFJYKHWLROXUKIYQDMTSPQIRZHUKCMIUOFIUPOWVCZDNZBPRSHGQHOBBKKQFWXGFISZJSZBOGRUXMYCLGYBIPAIZLDMZGNWJDFBNYPEKN");

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
    msg.setTimeStamp(0.777171431763);
    msg.setSource(12145U);
    msg.setSourceEntity(51U);
    msg.setDestination(50614U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.665680161875;
    msg.lon = 0.569326177407;
    msg.z = 0.815669389808;
    msg.z_units = 12U;
    msg.radius = 0.322948520315;
    msg.duration = 7547U;
    msg.speed = 0.482061754047;
    msg.speed_units = 30U;
    msg.popup_period = 33030U;
    msg.popup_duration = 8770U;
    msg.flags = 193U;
    msg.custom.assign("DZLSWXZGVXFQDLKEHCKCDWEMRBYMGSUCRSNAJULCXKPCVGPGMJJFVDRWXOAJTBJOAMHXKXLHUNCTBNESIHNTEZILMXYOBVUAJWZBOJOJQQEPGDVGFGBISFBLUMCPHKHEYPTRGMQPQREHADYYRTPKCWQGFLIRSKLIXLREAWJNQQONITTVUFZKFYVA");

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
    msg.setTimeStamp(0.732263260505);
    msg.setSource(29323U);
    msg.setSourceEntity(229U);
    msg.setDestination(27461U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.183760486968;
    msg.lon = 0.847709087116;
    msg.z = 0.183490760037;
    msg.z_units = 161U;
    msg.radius = 0.616986758023;
    msg.duration = 16927U;
    msg.speed = 0.489851827478;
    msg.speed_units = 113U;
    msg.popup_period = 47283U;
    msg.popup_duration = 57614U;
    msg.flags = 157U;
    msg.custom.assign("RKFIZZNOAIEPJTQTYFULFRDTXGSDXLFPHMGWMZCUIZAMPPCQBW");

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
    msg.setTimeStamp(0.0947780924124);
    msg.setSource(8936U);
    msg.setSourceEntity(190U);
    msg.setDestination(43452U);
    msg.setDestinationEntity(231U);
    msg.timeout = 18152U;
    msg.lat = 0.756074258869;
    msg.lon = 0.947147820506;
    msg.z = 0.511471524048;
    msg.z_units = 131U;
    msg.speed = 0.79184414401;
    msg.speed_units = 26U;
    msg.bearing = 0.461265562847;
    msg.width = 0.148351057725;
    msg.direction = 241U;
    msg.custom.assign("KMFYOOKDIOVAQATKHULIPPSQVDKZDZETQXPBLLCGXDOFCQVPFJHESIBUJPCZWTIXCTOBNIZOHMWLQ");

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
    msg.setTimeStamp(0.0979911406659);
    msg.setSource(27782U);
    msg.setSourceEntity(92U);
    msg.setDestination(56028U);
    msg.setDestinationEntity(219U);
    msg.timeout = 13012U;
    msg.lat = 0.582658420656;
    msg.lon = 0.548798783307;
    msg.z = 0.935650170822;
    msg.z_units = 186U;
    msg.speed = 0.989289279548;
    msg.speed_units = 69U;
    msg.bearing = 0.0963484635279;
    msg.width = 0.870619222356;
    msg.direction = 55U;
    msg.custom.assign("OOVEMWGHQGPITITPQWPIQZXNOJKUESKKEKPTDVJNCQFEOIBWNWXRHOWEWSXFLBSCFFIYDQHVURYNZWTHWMDQLUKRYVNUCCMFWHVRECPHIWUMLAHDVSITRSJJFGBZBZFUYNIAMRDJBABOGSJACFLTT");

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
    msg.setTimeStamp(0.696620196211);
    msg.setSource(12744U);
    msg.setSourceEntity(144U);
    msg.setDestination(44307U);
    msg.setDestinationEntity(165U);
    msg.timeout = 11698U;
    msg.lat = 0.101692771424;
    msg.lon = 0.944132043833;
    msg.z = 0.171042274351;
    msg.z_units = 152U;
    msg.speed = 0.513533400962;
    msg.speed_units = 75U;
    msg.bearing = 0.796497595585;
    msg.width = 0.863763794893;
    msg.direction = 129U;
    msg.custom.assign("PCWNQOTDHPUUKROQAXWZMJDRXYMYRRTTWJKMRCEHKKFIVUSPCLGCUMSRSVTLJFNNJNQYENMBRLBXXALRFZQBIMLGSJGZOYXSYTDXTOIPGTAXHGVJUOGEBIQPITXYZWKVBMHLRQSMZCTGOAUJCBQHPWIPGJVOCKGUUAIEIBDPNKKAAPVFSWOMMFKVXYVZNYSQFCLWHOCLEDVHL");

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
    msg.setTimeStamp(0.584538506464);
    msg.setSource(29534U);
    msg.setSourceEntity(42U);
    msg.setDestination(1724U);
    msg.setDestinationEntity(78U);
    msg.op_mode = 7U;
    msg.error_count = 62U;
    msg.error_ents.assign("TBRFEFQGEIDSOENBAEYCPHNDVJGYZQJEBNAUCEUOVC");
    msg.maneuver_type = 47724U;
    msg.maneuver_stime = 0.9923899512;
    msg.maneuver_eta = 20452U;
    msg.control_loops = 2973064807U;
    msg.flags = 82U;
    msg.last_error.assign("DNIUZQFZUGAWMYXLMQSNOSSPKBUJEGWOVFDSUAHAMTONZE");
    msg.last_error_time = 0.750236061814;

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
    msg.setTimeStamp(0.205787279392);
    msg.setSource(5982U);
    msg.setSourceEntity(94U);
    msg.setDestination(36995U);
    msg.setDestinationEntity(212U);
    msg.op_mode = 66U;
    msg.error_count = 245U;
    msg.error_ents.assign("VBNEVJXQHZNZSFWLKGZRKGFRSNNKIXDKGTS");
    msg.maneuver_type = 24585U;
    msg.maneuver_stime = 0.268448592165;
    msg.maneuver_eta = 64541U;
    msg.control_loops = 1656850983U;
    msg.flags = 138U;
    msg.last_error.assign("BYLBVJHTGIVQTAMWBNQXLWKQGHBOKRQSLSYNYKRHBVQHVDFLZVRNAFTULMDDFRQZWDXAYDLUQAHPCDPRCXDPQHOGJVECIORUCAVDWYB");
    msg.last_error_time = 0.46867080417;

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
    msg.setTimeStamp(0.546091801777);
    msg.setSource(20422U);
    msg.setSourceEntity(0U);
    msg.setDestination(9754U);
    msg.setDestinationEntity(42U);
    msg.op_mode = 19U;
    msg.error_count = 161U;
    msg.error_ents.assign("PZJALEKPILEZSMTVVYBNBOJAFMPWOEVGNMOQBVYCKTHUFEGGEQUHMLKYCTSKCSKGNHVMTBDUNBANWRPUDLXIPPLROORQEVAWUTBFXPRHH");
    msg.maneuver_type = 24408U;
    msg.maneuver_stime = 0.672878126287;
    msg.maneuver_eta = 786U;
    msg.control_loops = 3690137093U;
    msg.flags = 254U;
    msg.last_error.assign("GCCSIIVRYDAXJIDNYMSRYYNPEPWQQVCIRPRLOTDXFQPJUBTCZLIUELWPVJFRKHSLTUKAWCEIZBHVKWHESKGHKHMNJWTSFADUBXYTPQJNJOOWOTKQMWKEVCHRKZARPNFMAEECVCMMOGONRUIYEUWRBYSIPOTSZWHDTOKHNNXBBEQALIAAMUXVXZFGGNQSGMJFWMUBHXZGVOLQYTAUSKOBGXLJF");
    msg.last_error_time = 0.622611109777;

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
    msg.setTimeStamp(0.692041675031);
    msg.setSource(57441U);
    msg.setSourceEntity(176U);
    msg.setDestination(51556U);
    msg.setDestinationEntity(210U);
    msg.type = 186U;
    msg.request_id = 30883U;
    msg.command = 91U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.141099691305;
    tmp_msg_0.lon = 0.877849362924;
    tmp_msg_0.z = 0.703445005593;
    tmp_msg_0.z_units = 139U;
    tmp_msg_0.speed = 0.654485317131;
    tmp_msg_0.speed_units = 224U;
    tmp_msg_0.takeoff_pitch = 0.563378181888;
    tmp_msg_0.custom.assign("DRUYPQNSBWXLTEBRATYXDFZAMLDKQFHXPCWOJEIIEQJSBCLIBI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 17687U;
    msg.info.assign("JUOKFSLDVFPKWMPBYGFNPKDBZLEIWZJSVVXIYZMUPEORWQKRVQDSPLVDGHQ");

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
    msg.setTimeStamp(0.241342331651);
    msg.setSource(50374U);
    msg.setSourceEntity(214U);
    msg.setDestination(57733U);
    msg.setDestinationEntity(153U);
    msg.type = 37U;
    msg.request_id = 44629U;
    msg.command = 54U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.235453332234;
    tmp_msg_0.lon = 0.188165894846;
    tmp_msg_0.speed = 0.848578653282;
    tmp_msg_0.speed_units = 27U;
    tmp_msg_0.duration = 2836U;
    tmp_msg_0.sys_a = 34920U;
    tmp_msg_0.sys_b = 31237U;
    tmp_msg_0.move_threshold = 0.293432182953;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10494U;
    msg.info.assign("LGBLCUSWPVMTEAUYFQYMKJHEBJXYWCFRAGBCZYNFTPDLJPQDNYEXRMASGVJDOTEUEZZSKWNYXDOFTXGQFVEABXUCVKZBKILNTXKXDJAIZILDQHUSAHNWIFUNKBHRMC");

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
    msg.setTimeStamp(0.826436450812);
    msg.setSource(37560U);
    msg.setSourceEntity(3U);
    msg.setDestination(33559U);
    msg.setDestinationEntity(246U);
    msg.type = 161U;
    msg.request_id = 8176U;
    msg.command = 231U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 64688U;
    tmp_msg_0.lat = 0.529827728086;
    tmp_msg_0.lon = 0.511513315098;
    tmp_msg_0.z = 0.575096913144;
    tmp_msg_0.z_units = 4U;
    tmp_msg_0.speed = 0.366750025313;
    tmp_msg_0.speed_units = 243U;
    tmp_msg_0.custom.assign("CAGOXJFVDXSOGTXTGAOCUHCUNBTNZNWPDVETUETWLXZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62436U;
    msg.info.assign("MNUKBEQXLGYWVPSUPOIPSZCGDINBCHVEPNCAJIFFBLQPLTQXEYTHZARQDAFXMTAAUHQTJNOMWPDROOHSXEJLGKKNIQMXIIUETLHBIOIOICUYGGSWJYTRKZNVNMKJDMAURYYNWYHTBYPOJEVLCQDBFFJJIRGBLOJHDTDBWQXBCBVHVFXEYHSWRXVFGKXURWPWVFNZMZMMXZQGUCOVCFZOAAUYED");

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
    msg.setTimeStamp(0.616527995617);
    msg.setSource(37974U);
    msg.setSourceEntity(105U);
    msg.setDestination(30944U);
    msg.setDestinationEntity(49U);
    msg.command = 90U;
    msg.entities.assign("MDZQEPZVNXAVHOTRZWGDBCRHQYJGICKFWRNJGVAZXAYBRKTMTXBDJOJCETOAWPJYJSSYRUYAGKDCDLUEBZBLQWKKLOHEHHHSQGLNCEPBOLKOYOGFVXZSMUCPUNODLLPVNGINTZIFDWESHSTMIMRZOYGHDSSQIRFMQDDSVFWIZGTMXKCFXIHUJLXFMTUXJUTEKWVAYWOXQUAWYCEBGAVP");

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
    msg.setTimeStamp(0.421407746831);
    msg.setSource(29263U);
    msg.setSourceEntity(72U);
    msg.setDestination(40144U);
    msg.setDestinationEntity(195U);
    msg.command = 9U;
    msg.entities.assign("LIXQVZGNJRGDISGFRLLBECGLZAGZSCPFKFECMUPJCKQNUOIUYNMRDYTVQCJHPELTSCIRGSCKFMVYSMOIINYEFNOCDTBKVOUPVHBJDDBUKTUAHXFLVAPDRIJKAWSDBWXEWPXZJXHWZSXFZVHBIV");

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
    msg.setTimeStamp(0.103965080639);
    msg.setSource(23832U);
    msg.setSourceEntity(189U);
    msg.setDestination(12530U);
    msg.setDestinationEntity(99U);
    msg.command = 119U;
    msg.entities.assign("KIBOCHYDRYSYKQPJWDGWVGNQQZVRUEPCNVOMYOCTPSWFWVFVDJKXHRJILYUJLQGECBLAAKWGUQACCSRZZKIIOMBDAXLXMDSGFXZTCOUQWNENWXEUNAMQTGHTSPJJTYWOEOPFQFSTGGKEDDCBXA");

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
    msg.setTimeStamp(0.0499082596207);
    msg.setSource(54736U);
    msg.setSourceEntity(0U);
    msg.setDestination(56582U);
    msg.setDestinationEntity(198U);
    msg.mcount = 38U;
    msg.mnames.assign("PGILRKSRDTZKZVMZBUFFEGONIEQGEGQDGNWNXVZYWIFOAIJDRMBGTOPAOJGFNHEZHBYWVPIXJRDJENSOJABSPYGKEULRGMCQFUUQIIC");
    msg.ecount = 37U;
    msg.enames.assign("YYBOTYBSEXZODNLBFOVYEPGQRHFWMQPNTOSQJFHDYUNHAUGIILSDJUWHJCCPFAWPEWSFTHZPKOPCDZEJZNRFMHUKJZGVRESSVBULTIBSRXXQRXHEJMYWSRRXOLVVKCJZMDFHCBWGGFXQATQHPZAUKNVJTVCIRSMILXQZDBNDIAZKIEJMLMTDEHCTOWKPWRBMFYJAIGCGVEUWBGOUKQKYCOXGTUA");
    msg.ccount = 145U;
    msg.cnames.assign("XFAHYAVPPDENQSJIOVDUPHDZAKRSRFXGMKTEOUTEOHLROLNUQCGDBIYKMBSVBTKKDFXDNKJKADWIBIHGOAOYQLFAPIZTRKXNYRCZRYBDCGQMUYTMPLHIAYBODYOCTEVRACFMYWIVLZCWXASLGLIKSZUTNJXKHEINFHSELUSYGVCWMQXCQEJPLJUBZQESXPUZJMEWJRJWOTICZRHFTNVCHAWWVXGHMPVMBJGQJZPSFLZWXFGGQEQSNP");
    msg.last_error.assign("XVSPECXZCZHYHGWJSZUWDVMALYVZHCGVPDFSXWXJAHFPTKMPOANXMAQUQERSXKBZMBNQRKAHUFKTOTKAEJTDIJMIYEWUWBNGRDNMYYVWKCTMBOMOKPXLKFIWLUVWSYHUQLDNAYAOSRJEPOLUSVBIEGQUBFKOLSDBGBZLSFEIJYORJECCTITGGGDFTLHGRVQ");
    msg.last_error_time = 0.656486873505;

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
    msg.setTimeStamp(0.413317570584);
    msg.setSource(28988U);
    msg.setSourceEntity(153U);
    msg.setDestination(19162U);
    msg.setDestinationEntity(81U);
    msg.mcount = 205U;
    msg.mnames.assign("YZCSNKOCSIHFCZTFLOAKBQQPFPNSPDWV");
    msg.ecount = 47U;
    msg.enames.assign("RQQIWRZCLMYYGKTGPXJQWTJOEPKNZVNMHXCRISVMEMTHSVGNZFZWXNSLPLJPLRTTDIH");
    msg.ccount = 125U;
    msg.cnames.assign("WZLLAUAJUJVRUWQIQXGFHITBWSAMKNJMQVOZEFKXKPVNNIIJMBWJMF");
    msg.last_error.assign("EPNJJWWCTMIAJJVCXOVHAFDBNKIOITLZTVEOUTRMRQPLKNYLGCTWMZKRXJCAKEUALULBRSZNMCPAWIGCMFGUPQXMZDLXLSSVUBSWFNITVYBDOQTVNFPXSEHKCURPYIQNSYHYOXCGISNVZYRYOMMOHPEFOXDGDEACXAJQZSUWJNHPCRBGHKZHGFQGDVAQPYIEMKFBENZOWLTYSJPWHHRMFIKGELKLWHURBT");
    msg.last_error_time = 0.87838925204;

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
    msg.setTimeStamp(0.129524803011);
    msg.setSource(30649U);
    msg.setSourceEntity(60U);
    msg.setDestination(6548U);
    msg.setDestinationEntity(37U);
    msg.mcount = 40U;
    msg.mnames.assign("FNQVWKXQTIBABUDQHGRVCMKPFWCFRZCWXMGAEYOOIAUJHCYPXXDURHYVGKWHVQTLLVDNUSXNKLFZDOUDZTGEHYYVWTHLXGMJOFOSFWIIDDORVQSABMSBUYEPECJBMMSQNHPFIPZGNVPPHUIUJJXNTZFQZUTCHOKLPTOVEZCFXETKSTADAKSXNSDRCBBGNTFAJOBQHQLSBJVIZRNKIEDR");
    msg.ecount = 161U;
    msg.enames.assign("EPWLACXSZJYIQMMBVXUIZPNGGPWYDSTWISWTICHUKHIBWJEKOAGYWDFIAPASRLCLRERDFFXVTHQSPPUMCFQELMZQLAYBGZGUSDLTOWCQKMNJAEQRIZNLMGGVJIRGSDBHTNZXAUBLRUWPQSQDNHJBVPVOOASDEXBBFCTKLXJLKNTBFZJRHUKZHOVSYVDVTYKXTCMJMNGXKUOIBNOIOYHNXKEEYJPXFJFFEUCCDEAOQQAR");
    msg.ccount = 223U;
    msg.cnames.assign("HXJCWGKLAPMEPKZGVNAKSZBDYTZUFBYLHLUDBVWMQ");
    msg.last_error.assign("ZKKJRWHHHJLLVCSQLGPBXKASNKHFQFVLXTRRRLUVGJDUJJPUKOQOBMKASCDCLGHBIXJTUTQKZONZBCWOUENBYYAUQRMOAMBEIAYZZSNSWXCZTFICYDMATTTQOWNZRENCMCIPFLBYECPVPJWSKEZGJNDFAJESWIUVOTPVKQXGHJUUFPWEMRUXRIIXDFAHBBGREDYEMFOKYI");
    msg.last_error_time = 0.507948241775;

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
    msg.setTimeStamp(0.497882675756);
    msg.setSource(28205U);
    msg.setSourceEntity(206U);
    msg.setDestination(12151U);
    msg.setDestinationEntity(168U);
    msg.mask = 163U;
    msg.max_depth = 0.843575299158;
    msg.min_altitude = 0.281337597349;
    msg.max_altitude = 0.426309911003;
    msg.min_speed = 0.297302924319;
    msg.max_speed = 0.845254139281;
    msg.max_vrate = 0.0745725879323;
    msg.lat = 0.329711579291;
    msg.lon = 0.0562255630265;
    msg.orientation = 0.338210835284;
    msg.width = 0.435607668573;
    msg.length = 0.596616876704;

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
    msg.setTimeStamp(0.197136388546);
    msg.setSource(19741U);
    msg.setSourceEntity(54U);
    msg.setDestination(44291U);
    msg.setDestinationEntity(51U);
    msg.mask = 18U;
    msg.max_depth = 0.397490835089;
    msg.min_altitude = 0.272599941848;
    msg.max_altitude = 0.420476006718;
    msg.min_speed = 0.438961690927;
    msg.max_speed = 0.896027124453;
    msg.max_vrate = 0.276880966967;
    msg.lat = 0.0565656532674;
    msg.lon = 0.222855880705;
    msg.orientation = 0.684588532154;
    msg.width = 0.130870582198;
    msg.length = 0.485119226073;

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
    msg.setTimeStamp(0.400269051125);
    msg.setSource(63176U);
    msg.setSourceEntity(211U);
    msg.setDestination(31930U);
    msg.setDestinationEntity(250U);
    msg.mask = 47U;
    msg.max_depth = 0.791744903981;
    msg.min_altitude = 0.231996929406;
    msg.max_altitude = 0.567274787453;
    msg.min_speed = 0.556840694101;
    msg.max_speed = 0.772061061327;
    msg.max_vrate = 0.209395800712;
    msg.lat = 0.719458994954;
    msg.lon = 0.595445108297;
    msg.orientation = 0.849648974365;
    msg.width = 0.0873645787947;
    msg.length = 0.90409709988;

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
    msg.setTimeStamp(0.733301720857);
    msg.setSource(53518U);
    msg.setSourceEntity(88U);
    msg.setDestination(58969U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.629710170147);
    msg.setSource(39774U);
    msg.setSourceEntity(77U);
    msg.setDestination(37348U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.659062760291);
    msg.setSource(59064U);
    msg.setSourceEntity(215U);
    msg.setDestination(4814U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.143727082926);
    msg.setSource(27703U);
    msg.setSourceEntity(179U);
    msg.setDestination(24869U);
    msg.setDestinationEntity(131U);
    msg.duration = 11481U;

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
    msg.setTimeStamp(0.458429507108);
    msg.setSource(61424U);
    msg.setSourceEntity(50U);
    msg.setDestination(53598U);
    msg.setDestinationEntity(93U);
    msg.duration = 46353U;

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
    msg.setTimeStamp(0.954551832881);
    msg.setSource(48418U);
    msg.setSourceEntity(20U);
    msg.setDestination(6718U);
    msg.setDestinationEntity(4U);
    msg.duration = 45533U;

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
    msg.setTimeStamp(0.446256130923);
    msg.setSource(34277U);
    msg.setSourceEntity(74U);
    msg.setDestination(33328U);
    msg.setDestinationEntity(130U);
    msg.enable = 200U;
    msg.mask = 3029752628U;
    msg.scope_ref = 1409394822U;

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
    msg.setTimeStamp(0.501388015357);
    msg.setSource(13650U);
    msg.setSourceEntity(44U);
    msg.setDestination(3238U);
    msg.setDestinationEntity(43U);
    msg.enable = 89U;
    msg.mask = 1745784847U;
    msg.scope_ref = 3841620593U;

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
    msg.setTimeStamp(0.438290927467);
    msg.setSource(21145U);
    msg.setSourceEntity(44U);
    msg.setDestination(19824U);
    msg.setDestinationEntity(201U);
    msg.enable = 118U;
    msg.mask = 444965492U;
    msg.scope_ref = 456139451U;

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
    msg.setTimeStamp(0.401379401311);
    msg.setSource(18041U);
    msg.setSourceEntity(111U);
    msg.setDestination(26008U);
    msg.setDestinationEntity(242U);
    msg.medium = 164U;

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
    msg.setTimeStamp(0.362942831055);
    msg.setSource(58094U);
    msg.setSourceEntity(34U);
    msg.setDestination(12876U);
    msg.setDestinationEntity(46U);
    msg.medium = 131U;

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
    msg.setTimeStamp(0.104808047071);
    msg.setSource(29302U);
    msg.setSourceEntity(222U);
    msg.setDestination(45859U);
    msg.setDestinationEntity(24U);
    msg.medium = 65U;

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
    msg.setTimeStamp(0.671461746339);
    msg.setSource(60186U);
    msg.setSourceEntity(220U);
    msg.setDestination(25262U);
    msg.setDestinationEntity(38U);
    msg.value = 0.0383438603005;
    msg.type = 131U;

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
    msg.setTimeStamp(0.17303655696);
    msg.setSource(58237U);
    msg.setSourceEntity(6U);
    msg.setDestination(11002U);
    msg.setDestinationEntity(68U);
    msg.value = 0.0847459792525;
    msg.type = 36U;

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
    msg.setTimeStamp(0.207560315468);
    msg.setSource(19293U);
    msg.setSourceEntity(2U);
    msg.setDestination(24968U);
    msg.setDestinationEntity(5U);
    msg.value = 0.43091567176;
    msg.type = 66U;

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
    msg.setTimeStamp(0.0183977641727);
    msg.setSource(1058U);
    msg.setSourceEntity(63U);
    msg.setDestination(10022U);
    msg.setDestinationEntity(205U);
    msg.possimerr = 0.184459022007;
    msg.converg = 0.426420854717;
    msg.turbulence = 0.695013465986;
    msg.possimmon = 42U;
    msg.commmon = 85U;
    msg.convergmon = 103U;

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
    msg.setTimeStamp(0.831011834914);
    msg.setSource(50667U);
    msg.setSourceEntity(9U);
    msg.setDestination(34028U);
    msg.setDestinationEntity(232U);
    msg.possimerr = 0.134799002893;
    msg.converg = 0.46837584496;
    msg.turbulence = 0.744069408134;
    msg.possimmon = 136U;
    msg.commmon = 116U;
    msg.convergmon = 111U;

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
    msg.setTimeStamp(0.613769284044);
    msg.setSource(14743U);
    msg.setSourceEntity(192U);
    msg.setDestination(44558U);
    msg.setDestinationEntity(250U);
    msg.possimerr = 0.746057802007;
    msg.converg = 0.303218773636;
    msg.turbulence = 0.439341733609;
    msg.possimmon = 15U;
    msg.commmon = 150U;
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
    msg.setTimeStamp(0.836124859543);
    msg.setSource(58578U);
    msg.setSourceEntity(181U);
    msg.setDestination(1002U);
    msg.setDestinationEntity(181U);
    msg.autonomy = 250U;
    msg.mode.assign("AELCDCCQAUEVNIIZTYNECODSJVXXBQFQTNYCPAUFUDOOUEHEZHNWKVJYNOOEWDKUQLTISKJHRZDBASFCIRVNLQZKYZUHJWXGMUYQIARBRCDMHTOAMMARDMTKAPFMGWLWLJFPXSXVPVVZJTYLZYKFUWITKWOSPNSXMZPFJAPFIOBBSYGIWTGGPBUPBRXZZEQUCYBHIGDEJMPEQWGFXNNCLRSLLRHTJXTESHGHQKDIH");

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
    msg.setTimeStamp(0.129894352404);
    msg.setSource(12447U);
    msg.setSourceEntity(159U);
    msg.setDestination(46730U);
    msg.setDestinationEntity(176U);
    msg.autonomy = 58U;
    msg.mode.assign("RPAKZKQECAGGGSEXWJOVMXHSKJMPCMANSFCHIDIJGUWHWBJYDZUKWTZNKKLVFPNGEXTMKEVVTHLWEERRFBCOLRVDOFOWPBFFJYCCNNIXCBNYAUUQXXQTQFJLENNMAAQMJLJPDXTLNZMOPUIIEKGWSRWYZCZSRPIQTLUBQUQADAZDGQYFYZIEDRLGFPHGBVUDQTPVDVTIJBOCPTAMXSHRVXKCWBGEBND");

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
    msg.setTimeStamp(0.145307492292);
    msg.setSource(26724U);
    msg.setSourceEntity(52U);
    msg.setDestination(32711U);
    msg.setDestinationEntity(152U);
    msg.autonomy = 244U;
    msg.mode.assign("LKZMTCRIGPNRHBGYEIHQMYRCPGTHOFUKKJDPQAMOBNIBQOXVBPRLCZUSGODHWCWCJUZJIUXVXKEPLEJITVBTOYFRVMLYVLNRSKDIVOYWEVUKNFFOOWXIZYPYEZFWNZDRPXYJVDQAHFCBCPOGQESFMNWUMZQHGYJDWBFXJNETDRZWSUNATHCNDULDSFXAKSUPMZO");

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
    msg.setTimeStamp(0.0938835924809);
    msg.setSource(34978U);
    msg.setSourceEntity(216U);
    msg.setDestination(16651U);
    msg.setDestinationEntity(201U);
    msg.type = 148U;
    msg.op = 20U;
    msg.possimerr = 0.536347353007;
    msg.converg = 0.898628353148;
    msg.turbulence = 0.0444354750647;
    msg.possimmon = 41U;
    msg.commmon = 172U;
    msg.convergmon = 2U;

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
    msg.setTimeStamp(0.258029352779);
    msg.setSource(687U);
    msg.setSourceEntity(185U);
    msg.setDestination(18925U);
    msg.setDestinationEntity(106U);
    msg.type = 193U;
    msg.op = 109U;
    msg.possimerr = 0.542687291716;
    msg.converg = 0.529578182485;
    msg.turbulence = 0.353270991662;
    msg.possimmon = 160U;
    msg.commmon = 174U;
    msg.convergmon = 20U;

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
    msg.setTimeStamp(0.525581655052);
    msg.setSource(13128U);
    msg.setSourceEntity(15U);
    msg.setDestination(870U);
    msg.setDestinationEntity(134U);
    msg.type = 124U;
    msg.op = 211U;
    msg.possimerr = 0.264513510066;
    msg.converg = 0.889593871251;
    msg.turbulence = 0.296684984861;
    msg.possimmon = 141U;
    msg.commmon = 105U;
    msg.convergmon = 203U;

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
    msg.setTimeStamp(0.241836359394);
    msg.setSource(2317U);
    msg.setSourceEntity(175U);
    msg.setDestination(21941U);
    msg.setDestinationEntity(166U);
    msg.op = 187U;
    msg.comm_interface = 35U;
    msg.period = 56810U;
    msg.sys_dst.assign("IAZXEMSZTMRWOOBGOVRXLVIKDFE");

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
    msg.setTimeStamp(0.56665179052);
    msg.setSource(16930U);
    msg.setSourceEntity(174U);
    msg.setDestination(29431U);
    msg.setDestinationEntity(91U);
    msg.op = 4U;
    msg.comm_interface = 152U;
    msg.period = 9267U;
    msg.sys_dst.assign("TRTFYXGEGUZQKJSHWXYVZVJD");

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
    msg.setTimeStamp(0.748195813836);
    msg.setSource(26396U);
    msg.setSourceEntity(64U);
    msg.setDestination(19133U);
    msg.setDestinationEntity(150U);
    msg.op = 244U;
    msg.comm_interface = 128U;
    msg.period = 54534U;
    msg.sys_dst.assign("TWQPCVQKHFMQXMDUPRTKPFBSRYTEQGQHBDBAJGISDCESJYBTTOCDCOTVAVWEBYHUHDAGWWJL");

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
    msg.setTimeStamp(0.332351272492);
    msg.setSource(57544U);
    msg.setSourceEntity(66U);
    msg.setDestination(60584U);
    msg.setDestinationEntity(70U);
    msg.stime = 340681296U;
    msg.latitude = 0.297432733822;
    msg.longitude = 0.767498278688;
    msg.altitude = 10385U;
    msg.depth = 35085U;
    msg.heading = 25360U;
    msg.speed = 22521;
    msg.fuel = -83;
    msg.exec_state = -94;
    msg.plan_checksum = 4993U;

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
    msg.setTimeStamp(0.232976565098);
    msg.setSource(19206U);
    msg.setSourceEntity(234U);
    msg.setDestination(4051U);
    msg.setDestinationEntity(217U);
    msg.stime = 2257761806U;
    msg.latitude = 0.447892488131;
    msg.longitude = 0.106349911313;
    msg.altitude = 50151U;
    msg.depth = 24000U;
    msg.heading = 27400U;
    msg.speed = 11338;
    msg.fuel = -93;
    msg.exec_state = 60;
    msg.plan_checksum = 61068U;

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
    msg.setTimeStamp(0.522769366793);
    msg.setSource(2314U);
    msg.setSourceEntity(45U);
    msg.setDestination(14494U);
    msg.setDestinationEntity(0U);
    msg.stime = 1260100758U;
    msg.latitude = 0.123143372729;
    msg.longitude = 0.300948211485;
    msg.altitude = 42023U;
    msg.depth = 30646U;
    msg.heading = 31932U;
    msg.speed = 8209;
    msg.fuel = 82;
    msg.exec_state = -21;
    msg.plan_checksum = 51982U;

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
    msg.setTimeStamp(0.603357794099);
    msg.setSource(48527U);
    msg.setSourceEntity(48U);
    msg.setDestination(56450U);
    msg.setDestinationEntity(132U);
    msg.req_id = 48409U;
    msg.comm_mean = 98U;
    msg.destination.assign("QSGUDLUHMVRUCZHTIXUUVOZAFOHSGZQLCUXUIWPDNTHEQEPUBKLIMOFQMICWVJBQXFXPGFNSLKSVBYGVPSWUIBRXJADAWRBCTGLLJYPPDPCVHOGEATYUAKTNQEPZKQFGXMETHVWLEGNQFZSSKCFNMMRDBDNRWLRKHIRMTYPAMWBMQWIHJJYGDIAIYZYBJXRFXVECPOOFJNDNYGOVAEVJOZEYXTCIWXNADYQWSMRZKRABSOJZCTSJ");
    msg.deadline = 0.501972048049;
    msg.data_mode = 131U;
    IMC::ArmingState tmp_msg_0;
    tmp_msg_0.state = 155U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QYWEJXTXSBNFPNEKAGVVQLHWAQVPJYNZDM");
    const char tmp_msg_1[] = {-45, -124, -61, -38, -23, 119, 28, -106, -127, -82, -85, 114, -30, -77, -69, -51, -105, 96, -35, 79, -105, 93, 3, -69, 31, 32, 54, -82, -32, -2, 95, 5, 111, -15, -109, -85, -84, -64, 18, 61, -125, 92, 31, 105, 31, -50, -4, 75, -33, -96, -22, 35, 101, -62, -106, 110, -120, -125, -34, -90, -4, -61, -76, 114, 57, -35, -18, -28, -65, 32, -79, 110, 121, 59, 14, 45, 32, -35, 29, -92, -127, -69, -79, -15, 87, -85, -125, -80, 17, 70, -109, 103, 58, -12, 13, -38, 45, 32, 94, 52, -91, -52, -122, 51, 51, -125, -50, -112, -40, 110, 14, 121, 60, 91, 109, 53, 62, -45, -33, 95, 65, -21, 100, 81, 29, 100, 102, 53, 103, -76, -19, -47, 90, 81, -51, 79, -16, -99, -56, 89, -10, -88, 91, 93, -64, -22, 48, 101, 9, -28, 113, -15, 30, -42, -70, -47, -43, 115, 34, 19, -102, 54, -126, 51, -69, 79, 109, 28, 84, 29, 102, 105, -96, -80, -12, 81, -67, 112, -35, -83, -27, 76, -108, -61, -93, 104, -125, -24, 105, -89, -104, -20, -56};
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
    msg.setTimeStamp(0.581702272713);
    msg.setSource(23292U);
    msg.setSourceEntity(5U);
    msg.setDestination(24526U);
    msg.setDestinationEntity(51U);
    msg.req_id = 64336U;
    msg.comm_mean = 227U;
    msg.destination.assign("KIOZHRFSPCKRBFBQHUVWXONHPNWSKETNLUGKXPGSQMXBBREODADUJWFFPQMYSAKPDVZDHLZOHPGIIVJZSNBGGWAQYENMDLRBCJJVMORSQYYLASSHXTXMOVABWVNUTXWHJPZKG");
    msg.deadline = 0.373246821939;
    msg.data_mode = 74U;
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.644485383119;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("AJKAPJQRUUDKENNBDEGICBORXOHPZEELPGMBYALAUVFEFTRWTVEGLXXZTQCIGYCSOQADYOMWVUD");
    const char tmp_msg_1[] = {-83, 73, 96, -88, -35, 59, 68, 76, -9, 44, -38, 92, 17, 53, 92, 27, -11, 60, -40, -2, -75, -4, 15, 25, -12, -13, 112, 54, 1, 17, -58, 68, 84, -100, 52, -40, 5, -119, -9, -107, -64, -115, -102, 32, -43, -96, -67, -77, -23, -6, -48, 121, -51, -54, -79, -122, 37, 8, -103, 25, 81, -66, -78, 15, -27, 90, 111, 98, -57, 19, 119, -85, 28, 42, 37, -34, 80, -109, 74, -82, -113, -5, 36, -115, -62, 107, -4, 59, 24, 85, 26, -36, 126, 97, -125, 20, -22, -103, 113, 22, -10, 123, 101, -32, 87, 15, -36, 77, 104, -96, -95, 114, 51, 61, 112, 19, -97, -5, 62, -98, 120, 12, 16, 92, 60, 60, -97, 54, 82, 84, -75, 6, 48, 100, -20, -116, -37, -1, 61, -103, -16, -1, -92, -89, -64, 23, 46, 65, -20, 113, -1, 112, -63, -94, -12, -49, -46, -71, 31, -80, 48, 118, 69, 108, -118, 1, 89, 109, 61, 31, 59, 96, -125, -115, 72, 116, 98, 71, 64, -110, -67, 21, 13, 59, 52, 1, 39, -58, 108, -65, -16, 43, 35, 117, -32, -99, -11, -51, 75, -48, 28, -1, -127, -28, 65, -1, 86, -119, -5, 101, 80, -100};
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
    msg.setTimeStamp(0.577072417241);
    msg.setSource(25784U);
    msg.setSourceEntity(52U);
    msg.setDestination(8585U);
    msg.setDestinationEntity(10U);
    msg.req_id = 24222U;
    msg.comm_mean = 120U;
    msg.destination.assign("JCNAIPXXIHKDGRHFYDXQFPOIMKRUMDZXMLEHDALTBQMPEZVREWIWNKGILVRYCSDMFTBZJJOLAWNLLXGGRNQDHLTISWXUNWFOOHOYFCKDOHABIYJXKYQQLWECUNEKQKTYPBDW");
    msg.deadline = 0.337269257485;
    msg.data_mode = 195U;
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("KTKFYLPTEYVZJDHCCOFXWKJJYZVFSWXYZSUVMVNBGNUUILRJYUNDJWIWEXOGOHTESZNUQPBSMHONTKFMIQDGCZXPVFRBATJIRDEAMOKZANTUMRYDAVVACCNKVTXTWUAYRLDTCIGCCGNQQRPHDAQMJAMYFEIMOLEJGMLA");
    tmp_msg_0.text.assign("GGLSXLNNNAXZSETZKKTQEMITVEPWVFECVKYHSIAITXA");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ABJQZVQUYBRDLHVOKEBDCDXSYWLWCDSJSANSVCUYEPBNRAKKEPOLFZOKJYCRCWXFZPXTBBIYRBIAYKKWHQFUUAQZNHLJNTGJGVGAHXTIICRLUZZPCPKUJTPXONHGGOSQHEADWVGFRNIKXLMWRFVYUPTDMBPCSWNVOJSROJAQWZIMTEXHZMUIQ");
    const char tmp_msg_1[] = {-78, 62, 87, -80, 87, 66, -70, -46, 24, -29, 31, -120, -123, 49, 43, 115, 8, 34, 106, 99, -40, 28, 2, 90, -83, 56, -49, -73, -92, 126, 35, 72, -122, 59, -32, -81, -94, -59, -68, -107, -86, -2, 17, -121, 95, -91, 37, 115, 123, 42, -64, 119, -12, 2, -54, -124, -106, -14, -90, 9, 72, -4, -2, 14, -93, 95, 41, -92, 105, -49, -49, 94, -54, 75, 13, 103, 94, -28, -41, -126, 64, -118, 9, -85, -104, -21, 86, -75, 115, 78, 100, 7, 35, -26, -93, -125, 38, -17, -57, 14, 35, -75, -56, -46, -31, 94, 49, 120, -8, -108, 122, -102, 23, -17, 9, -118, 69, 51, -23, -107, 114, -61, 105, 23, -107, 30, -127, -108, 73, 24, -10, 24, -74, 59, -75, 29, 73, -41, -34, 77, -96, -30, -127, -31, -14, 49, -1, 20, -62, 37, -65, -12, 48, 40, -90, -66, 4, -116, -5, -104, -103, -8, 2, -115, 96, 82, -5, -26, -51, 25, -69, 21, 23, -117, -68, -18, -64, -12, -63, 100, -2, 34, 9, -50, -80, 53, -126, 36, -44, -93, 85, -47, 116, -80, -20, -115, 23, 124, -32, 26, 74, 45, -18, 93, -100, 55, -75, 106, -107, 122, 3, 82, 108, -119, 41, 71, 80, 9, -43, 98, -9, 25, -54, 64, -11, -87, -120, 84};
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
    msg.setTimeStamp(0.341264797099);
    msg.setSource(40992U);
    msg.setSourceEntity(171U);
    msg.setDestination(61668U);
    msg.setDestinationEntity(232U);
    msg.req_id = 46953U;
    msg.status = 17U;
    msg.info.assign("CUUNVEVGSFLSQMTEZLOFCAQTDDLEXNYHOEPKTYHYIDKJZQRCUUFGFPCOURLMNKGDTO");

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
    msg.setTimeStamp(0.53323492924);
    msg.setSource(23421U);
    msg.setSourceEntity(155U);
    msg.setDestination(65019U);
    msg.setDestinationEntity(20U);
    msg.req_id = 2517U;
    msg.status = 63U;
    msg.info.assign("XDAGRGZIQBMDAIZJPVJKLBEDHOKHNCXNGOQW");

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
    msg.setTimeStamp(0.79894654304);
    msg.setSource(1456U);
    msg.setSourceEntity(141U);
    msg.setDestination(8156U);
    msg.setDestinationEntity(101U);
    msg.req_id = 55U;
    msg.status = 15U;
    msg.info.assign("KRCKXLFDYYYDLUUVPADWTHMBHACJEGAHWRGXRUCEVPTYQORIQUEB");

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
    msg.setTimeStamp(0.257776824996);
    msg.setSource(28221U);
    msg.setSourceEntity(227U);
    msg.setDestination(35456U);
    msg.setDestinationEntity(247U);
    msg.req_id = 7164U;
    msg.destination.assign("UEMMTSECZIZMIGSKKPPXOSRBZOMQKPCWBSOFRYAIBFPHWDTIEEGPHAXVAMJGXHXIEVJXDRACNERAUPRNQFEUDBQCFGTJYKUKDNDWQTVEFHLFRQQTNQOCCPZLYVBIAVUBJOUNHWKTXNSKOEVTRAXWCZOVMASHYAUULWHPCLZFNDDJMYOCDSGIBLLPGLQLXMNYILWOMDZRVSRPDKZYTGFCKH");
    msg.timeout = 0.202592656565;
    msg.sms_text.assign("VZHRYPIZMCNTHVJLTWLTFTUPDIXEHCZSJBRGDIXHLJMOSSCRLNQMGLAADXIBWDOMUNFCKRWNZWKQHYCKVFBWNJQHBSUPMVIMAFWYFYVTXEXJMTHGJSHSLYUELEPGKIGQTFUPZQNIGCORLYMRAVQTYNQKAQWYBOTICKPBJRUSXDYAAD");

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
    msg.setTimeStamp(0.0664335346606);
    msg.setSource(57114U);
    msg.setSourceEntity(155U);
    msg.setDestination(42676U);
    msg.setDestinationEntity(47U);
    msg.req_id = 35297U;
    msg.destination.assign("MJHAKXUPNWEQNKJCGOMSAHELQRSRCXDXCVHYEAPVRCJMJAKQBXTXODIIYHXFBJETVDUFWIUFIZLATNMDFWZTOTMSWULHNKQYFIOJMQUJYDFCKBCIWOEKRERQDZDVBAZLXPQTXVYWSVKMHDJHKUQPBQUPMBSBJIZHWMPKFSHPJRXQVLNZVYGR");
    msg.timeout = 0.106600521489;
    msg.sms_text.assign("LVVQJGTLTFFMOPXSYJOKJMEBTSDBCXFQBQNNQOMMETXEGZRCTX");

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
    msg.setTimeStamp(0.406123402239);
    msg.setSource(41956U);
    msg.setSourceEntity(125U);
    msg.setDestination(32247U);
    msg.setDestinationEntity(90U);
    msg.req_id = 19351U;
    msg.destination.assign("MXDEUOMWFYZSSAGBKQANUIDFCKBOMXOQYNNMVDUGTDNYSQLKVQRNEOXISZIPHZBNQTKVZQ");
    msg.timeout = 0.425056291487;
    msg.sms_text.assign("YGOKZWSYNLEUBSDAICZYSGWNVOEPRCAVBIUOJMQAOGKKVOELJQMBKTNZZZMEAIXQNBHAZCQKXVKUPBJZOXSUYVTFDLTOLPNALQBIWHQHDMRYSTPOKIDUJHTPBFXVJFMJBRPIEQVMLNWXRJSXCPGYEFHREZIBMDRWVDURYGHYTUM");

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
    msg.setTimeStamp(0.863931339292);
    msg.setSource(64882U);
    msg.setSourceEntity(177U);
    msg.setDestination(13763U);
    msg.setDestinationEntity(14U);
    msg.req_id = 16555U;
    msg.status = 24U;
    msg.info.assign("AFDTLJBKXRBPGJHBYMZBHGLKCUWWCCJJHAJMYPGXZXCNIDFFGWVCPSHYMPLDPBUTIXFRTSBVHIVKUZQFHCGBQZTQCAUVZZKBPGPNWAK");

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
    msg.setTimeStamp(0.460511236944);
    msg.setSource(24466U);
    msg.setSourceEntity(112U);
    msg.setDestination(20256U);
    msg.setDestinationEntity(136U);
    msg.req_id = 23652U;
    msg.status = 6U;
    msg.info.assign("BWBHHKCANAVPYZBAAHMZHWJWAXGBDMQHZSXLFTYIYJDTWDHAQNZYFLIKYCGFRGASXMCNDUGKEOASLSULD");

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
    msg.setTimeStamp(0.31473186452);
    msg.setSource(18991U);
    msg.setSourceEntity(240U);
    msg.setDestination(42959U);
    msg.setDestinationEntity(10U);
    msg.req_id = 64800U;
    msg.status = 208U;
    msg.info.assign("WHZYGYFYVOAMFHMBTSDPGYNESEXKVQIHQJO");

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
    msg.setTimeStamp(0.747713184169);
    msg.setSource(56376U);
    msg.setSourceEntity(101U);
    msg.setDestination(24566U);
    msg.setDestinationEntity(183U);
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
    msg.setTimeStamp(0.775383699918);
    msg.setSource(50284U);
    msg.setSourceEntity(3U);
    msg.setDestination(54385U);
    msg.setDestinationEntity(103U);
    msg.state = 140U;

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
    msg.setTimeStamp(0.722729510957);
    msg.setSource(27210U);
    msg.setSourceEntity(102U);
    msg.setDestination(18916U);
    msg.setDestinationEntity(103U);
    msg.state = 242U;

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
    msg.setTimeStamp(0.887216828052);
    msg.setSource(64212U);
    msg.setSourceEntity(64U);
    msg.setDestination(17595U);
    msg.setDestinationEntity(219U);
    msg.state = 128U;

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
    msg.setTimeStamp(0.345628399038);
    msg.setSource(33850U);
    msg.setSourceEntity(67U);
    msg.setDestination(52763U);
    msg.setDestinationEntity(31U);
    msg.state = 133U;

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
    msg.setTimeStamp(0.0681853322253);
    msg.setSource(18661U);
    msg.setSourceEntity(170U);
    msg.setDestination(2730U);
    msg.setDestinationEntity(85U);
    msg.state = 183U;

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
    msg.setTimeStamp(0.207140747136);
    msg.setSource(48829U);
    msg.setSourceEntity(172U);
    msg.setDestination(37318U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.268180600265);
    msg.setSource(3600U);
    msg.setSourceEntity(61U);
    msg.setDestination(11573U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.12217782018);
    msg.setSource(9381U);
    msg.setSourceEntity(119U);
    msg.setDestination(20537U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.990009867431);
    msg.setSource(52659U);
    msg.setSourceEntity(128U);
    msg.setDestination(39270U);
    msg.setDestinationEntity(63U);
    msg.plan_id.assign("QKNWYITMRYCURGFYSZCDLPIKPEQQKHSWTZIUDBBEZNDFKIVCKDOHQOHNLYQXLJXXJLEINTODVELQOUBLUCAXSRHHETGHKYRUHHKPVTJUBWZMOLSMBFPHNIRWPGZJSDIAUTUGMVPKATMJPDPIDOMBDYGOW");
    msg.description.assign("CGPVJAPYESILDPWVNRO");
    msg.vnamespace.assign("WCJZDBMKNAABCTMSIZIPUDLCUHMUKFXEKLINAZOFMGIKYTVYWLJZSRDPOZHQPQRTPGFJSMVSJMOOJDFHKVVBPWGEIXWQLXEPWBEMRIKUNBULEHLXBTHRHQZQUORMGJLCDIGHZUSWRZFWXEBJYOOPJTXWCAMROXOGQKBCLVSTHT");
    msg.start_man_id.assign("SZEOACBMKOPFJUYPQXGGNAKRX");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("VGVERTOMXWATUOXERTNQEPPQFOVURGZMNBVBFCHFCCWNHBFPMRINXHLAVGULKXDJAQJFLHPMSXSULJJNCRIEYNMZOZDLBKYKGYIXGKLDHCGTWXSATYIFDBWMVDKIRRZNNTECWOGIBTCZZQYRLZAIMDKMJVXLENLASYPVJC");
    tmp_msg_0.dest_man.assign("OTTHOTMUEQPRZSHNPJMYQRKGFRFPNJOKJMJCQFMIDVCACUGPRLYCERIXFAVNRNSWMYJTKASAMEUIKWVICWEQLIGWDDGFWYHVFMSIKLFVBXOYDV");
    tmp_msg_0.conditions.assign("CTRHASNWRATHOLEEMDZWMXKFJIHGAZGRPYJOBXIMTALFRFNCKAJYJRPVLUDKPUORLBUOOMJKFZOVUYWZCIJBPJKYRMQCQOHQBKHYUKTVDISNRYWSIZDWOZCCXXBTLGGKEYHXAWFHDYEFAQNIIIMEYON");
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.418333559043;
    tmp_tmp_msg_0_0.lon = 0.907229002523;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.379235022105);
    msg.setSource(65246U);
    msg.setSourceEntity(241U);
    msg.setDestination(60173U);
    msg.setDestinationEntity(130U);
    msg.plan_id.assign("CMVJWSOGLGQFVR");
    msg.description.assign("ZJSJTPIPYGAGVQXICDTDHOYOPUDQCSVJQJSRIQLKLWXTQVFAMPCVURAEXZSXCJPEQBBNSQWKKWC");
    msg.vnamespace.assign("YTFQVIHHQHHBESPODPZKILLJXSVCSTHFUDBWOZFNNRGFFCOUZBWNRMXMVUGNLURAQICA");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XOIDPZRDAKLIBMUERZSAJUQLNRPEWKOLSYRXESKWTIQKKZKCTHYUORZOJQGAZYTHVRBGVLFXNYFDDGIUZHSGUWALIWTYPUJJZMMJVZFSDWDORKLVFPBAVFUTXWWCGFPNMBBFAFSCRWQQTSOVXCYXHGENYFQJCBCGNPXMOMZNMXJUAHLWJPLOCALJL");
    tmp_msg_0.value.assign("HFRDANDEHEBUWNPBVARUBUAFDVAPBIVGYSMTUZAJCTZSQWOLEIGJCQDKPEIVQFVJKBQSHGAPMGLAZFVDZDSAXOLYMZOKGSVKXLZHKWPGFNWUNBRQEXDJMXCNGKGNLTZMLQOIFJYOL");
    tmp_msg_0.type = 179U;
    tmp_msg_0.access = 102U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HZRVEVWIZJ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("DKUPHQLKHIGAONFXIAKOHEASDDXMVTWDSYAKRNHPOUJCVGNQCJ");
    IMC::FollowReference tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.control_src = 4891U;
    tmp_tmp_msg_1_0.control_ent = 97U;
    tmp_tmp_msg_1_0.timeout = 0.848894898264;
    tmp_tmp_msg_1_0.loiter_radius = 0.0265091123978;
    tmp_tmp_msg_1_0.altitude_interval = 0.833753115329;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::AcousticSystemsQuery tmp_tmp_msg_1_1;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::HistoricSample tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.sys_id = 771U;
    tmp_tmp_msg_1_2.priority = 0;
    tmp_tmp_msg_1_2.x = 511;
    tmp_tmp_msg_1_2.y = 6060;
    tmp_tmp_msg_1_2.z = 31859;
    tmp_tmp_msg_1_2.t = 24951;
    IMC::AngularVelocity tmp_tmp_tmp_msg_1_2_0;
    tmp_tmp_tmp_msg_1_2_0.time = 0.758750584736;
    tmp_tmp_tmp_msg_1_2_0.x = 0.364870477546;
    tmp_tmp_tmp_msg_1_2_0.y = 0.233878969412;
    tmp_tmp_tmp_msg_1_2_0.z = 0.68189667205;
    tmp_tmp_msg_1_2.sample.set(tmp_tmp_tmp_msg_1_2_0);
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("XNXVWZSQWAKQLFUM");
    tmp_msg_2.dest_man.assign("SXXVOPTTVGMLWERZCWMHZUUJUXCYKNFPMUUGOPQZATSEQQLKEXYGMFCTNJDHVGHNRJXBCBJGJDEANZLDHLLWEYWRTFQBQRFAYSHHBTKSUJUGQKTFLRRLCIYTDKALOANIEYSBCZAZINDBW");
    tmp_msg_2.conditions.assign("UEDOSUMXZIPWSMJVAOFKROJEKWTTIQAAXLHLHNZGFCKYXKCLEKVJOJLLHVBWHLOGTNILUWTOZ");
    msg.transitions.push_back(tmp_msg_2);
    IMC::Tachograph tmp_msg_3;
    tmp_msg_3.timestamp_last_service = 0.90548108143;
    tmp_msg_3.time_next_service = 0.301362962026;
    tmp_msg_3.time_motor_next_service = 0.560385287584;
    tmp_msg_3.time_idle_ground = 0.72820523758;
    tmp_msg_3.time_idle_air = 0.0166175422059;
    tmp_msg_3.time_idle_water = 0.0158594807137;
    tmp_msg_3.time_idle_underwater = 0.518371774735;
    tmp_msg_3.time_idle_unknown = 0.837159901585;
    tmp_msg_3.time_motor_ground = 0.0775664068574;
    tmp_msg_3.time_motor_air = 0.232184655421;
    tmp_msg_3.time_motor_water = 0.102913488655;
    tmp_msg_3.time_motor_underwater = 0.328780444419;
    tmp_msg_3.time_motor_unknown = 0.996418526222;
    tmp_msg_3.rpm_min = -27937;
    tmp_msg_3.rpm_max = 8948;
    tmp_msg_3.depth_max = 0.341128157528;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.279392744008);
    msg.setSource(40157U);
    msg.setSourceEntity(115U);
    msg.setDestination(8873U);
    msg.setDestinationEntity(105U);
    msg.plan_id.assign("DCCBNYUMFPFWPYQMKLPLZQMIISPZTRYHGZHOEHJTYGASKQERVMAYBZUDGHPYVENEDLCURWDGAXRVFNRQWOFTVKKJTAFTTSJDUEQIJJEJJVCRIOLZJTKHODKXOBBZGATLDOMIYTAXSOPZHIWXBGNBDTNRWSCXDF");
    msg.description.assign("MUANWDAUMIHRZKLBYFXAROVRODIDGCBASVDIHXANCQFSUJOYTWHHVIWXGGEDBPKQMOTKNGRTRVRPMROQPLRVSFYKEBLCOYNVBWJDWPSTZNTVHJKKHKUDXUEHYCSXIAXGQKPFSENXHBRTWGZLFZLNSVWFMJAZINGEISFAYKGUTCCJOOIJBCRJBNAXOEQHZLZJLNXSQUZMEJVYBPPUCMDSADUEELMCWQQDWBPGLTHOLFFP");
    msg.vnamespace.assign("HBNIPAUZQFKQKNRCGCRUISDEXSONKMPBKFNXBYSYGBAQUYLRNCMFHAVIMATIFOMYDXOFUETOVPWHUAQIJOOJGENNPLPEFODZJUPSDXICRSKCEMWWMQAZYYHJGZJERXBALBWSUTGRIJUWLCRTJXHRZLNIWHDVKTMMRDNBSWJVQKDLIYVVAWSDAHQX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZJJULSBJHGWIXVODGZNKFAKTKILRFFXCHCPIMEQAHZCYVAKZELUWHYPZFUJDIXGAZYLENOSMGKESOXBPDXXCTMYNWNPGVODZFOIVICABOSNVUMNWETQRCTFYOLXKBBIESICHGFJUARAYQMBUDJQLZOKMPRLRICFQESGLZUSYXSDMWWUOWMRPTVHEJHVWQTCMGJPXKURNGKI");
    tmp_msg_0.value.assign("GJKKAHFGNNPM");
    tmp_msg_0.type = 65U;
    tmp_msg_0.access = 99U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("VHGJWUJJTDNNSETUNXIOLTGFFOJQWPXDVHFTRS");

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
    msg.setTimeStamp(0.92677061799);
    msg.setSource(22235U);
    msg.setSourceEntity(234U);
    msg.setDestination(42526U);
    msg.setDestinationEntity(253U);
    msg.maneuver_id.assign("TAGPOHIINVSZJSTTSMDFQFHPGXJGJYYLWZINFLBLRNXRLUWJYGEFGVHHRWROZXBAWUAXDZJJYDBZMIXMBFHEWLKJQCXEVPZHTCSSAXJYIBBRCTWECNNAYRFLDTLARCTUUPVLDTHEKOPYKRKYPEYUCKXZPTEFQMSCE");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 42921U;
    tmp_msg_0.lat = 0.0726385385582;
    tmp_msg_0.lon = 0.144974036787;
    tmp_msg_0.z = 0.514744121532;
    tmp_msg_0.z_units = 231U;
    tmp_msg_0.speed = 0.361192734912;
    tmp_msg_0.speed_units = 66U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.0259708875108;
    tmp_tmp_msg_0_0.y = 0.712691080761;
    tmp_tmp_msg_0_0.z = 0.471749512743;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("EYVIHVLLPVSWOTJMJRCAIVGSCTZAPNROTQHXPGWUSBSZXXNYSFMBEGQHLDINDHFF");
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
    msg.setTimeStamp(0.114459677283);
    msg.setSource(31574U);
    msg.setSourceEntity(226U);
    msg.setDestination(55752U);
    msg.setDestinationEntity(67U);
    msg.maneuver_id.assign("CTXMXYSLBTPEGBFNDNEUZUKXWEBKMMIRZMQPNKMIIISWOSAHLTLSHVTCXLEUIVSNQAWWQEJDYETGOPZPSAKZLTBZDBFEXTFMIECBGWVHTUFCHAVIORWOBJORXAFD");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.724234788061;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 33365U;
    tmp_msg_0.custom.assign("KVYYOUYGRDBZEVNQILCCTUANZSYBWNTDVIRMYKLXUPYKVDYSPBTIDVHBIHTSZUXXZXMGQHFAEWBOMPZNHWUKGFIGEPCVWMMJZBQTXIWGFHABNNCRPLEQKPGULMKUDQOXSEOREFIZMZKJQPDFRSFORTNIAYVDSJENFUELHOBSCJJYJWRWOIMJAZXLFBHASHPHAGQSNTRJSPMIFAJEWJOWXKXDAXBLRGFHPVQNZCYKLGKCO");
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
    msg.setTimeStamp(0.0895032463948);
    msg.setSource(26549U);
    msg.setSourceEntity(181U);
    msg.setDestination(64672U);
    msg.setDestinationEntity(225U);
    msg.maneuver_id.assign("KUNDNCMRAFFDRTMKLNUBLKHCFNZSQWANWIAQSCWKPYTZSSHGTPFOHQVFJTAJKSIGLPPLYUZOEJHEDOYEYDAVUPUPMBAKXRVJMNCYPXXOZRHARLIDODWSDCQWCDZBYBVQCVBGTSPNTDEXXHJA");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.22316599674;
    tmp_msg_0.lon = 0.467349376577;
    tmp_msg_0.z = 0.0394355339092;
    tmp_msg_0.z_units = 223U;
    tmp_msg_0.speed = 0.366299392594;
    tmp_msg_0.speed_units = 196U;
    tmp_msg_0.takeoff_pitch = 0.486404072653;
    tmp_msg_0.custom.assign("BHRJDNIBSKZRFPPSCLQZEINSMWVUOQJRJXMEYPMTJOJBEBTLVFKQFNNIYVTVROSTQCQKYGZUUFMOBVFAHWWAOR");
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
    msg.setTimeStamp(0.724345504757);
    msg.setSource(13131U);
    msg.setSourceEntity(81U);
    msg.setDestination(14870U);
    msg.setDestinationEntity(90U);
    msg.source_man.assign("OEEEAIUIHZYDFQBHRJMCWJQYZFSVCXTURHJHLXYWXPSOKBVOYHBRXUKPWRKWQGKFJPJNPVBBUUYVJKBOALPDNTIMTCZNMPLEBDZSGRZMVBQIGXHFZJSTTYOOTTSNKDPAFCFUMWLLNAICFOUDDYYPBAWRKQDZFGNNIXULAVCWTXCKXIRKWSCE");
    msg.dest_man.assign("TAIZANSQFCERUKZJQTGNHFEQZCRSLNZYDACFRQVOMVMTTXHDFGJWCRCLDSYIBLJGZSTPLDQZPL");
    msg.conditions.assign("RSIHCFJWGYTOJYSRVINGATHRBBEZE");

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
    msg.setTimeStamp(0.999079736058);
    msg.setSource(44345U);
    msg.setSourceEntity(96U);
    msg.setDestination(14261U);
    msg.setDestinationEntity(154U);
    msg.source_man.assign("ICZBYJMXPUHLMABGROMGWYTMGXRWCPNABTYCRATFDWTISSFDCNOBIURWPJJPQVFHLDRIAIPKDRVEGCQIXCYJKSYWIEUHQFAHOOUGTZQWKPZUVTMVFVMBENLXKQRZSGQJSQZEPAQNFZOXOYJQXNLHOYWMDVEDNOEHHPUBFSPMUAWAXN");
    msg.dest_man.assign("USELRMSLSDOJWCGAUMNLSGTEOEXXQNOQHTKSYWJKUIIJHPTZDJSHZYBWHBRUQQWUFEJJDRFUWZKXFNVVYJXYLIAEGHFFCISPOQQNKHCKGQBRBRVHSTTZROOVGDHFZOPCYVGVZVATCPGYNKXEFRARGNCHANZJJMMIKGNOGMCLVDJBWDLPOEM");
    msg.conditions.assign("BVJAFEANWIWAOOATTOERCSYQHPEVUABZAVJKZRDZIYJCYRWNFIDMXMWQEGHAKHUEKKGJLNNTZEJLRXVUGSKMQZXCSCQTHQOLBPGABHSPZOURSQHIKJXLCVFDNTHBOPFMUFXZJYEGNRHDBPUDGUIRVXRGDQIOIIIYYJLHPUYY");
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 142U;
    tmp_msg_0.text.assign("VXQMAHSCFGPWKRBVMPNDGZEUAEXDGFTXDCLMAZEFTLNJJHPBIQZYEWBRFUKZUCJUAQUWTHSROWYFZP");
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
    msg.setTimeStamp(0.394990264205);
    msg.setSource(17209U);
    msg.setSourceEntity(4U);
    msg.setDestination(11196U);
    msg.setDestinationEntity(184U);
    msg.source_man.assign("IEKRYZCOHHLCPHVJPDABCLZTWVIZKCHDMCRUEZPGDSXFMSTKOOPAYAKKXKEWFXOAZLTMGINQLCBFCSFITAMGSVKZQNRQUDUYYUAWJCWWWNPRGRZRRHOGBNIDYBHPQGEOONUSLXDNLMFQBBBNFETUFXSQXEDQLVXWFVEU");
    msg.dest_man.assign("LJENSDXGSFCOUMLCTLARWKYKTVJLB");
    msg.conditions.assign("ZDDKNIPLDAOKOJPGAGTQNTJUZJDKXIDUXFXVSTHFQBPHWALACWUVHLJOHOQOHXTBYEMKAAGBVSBULJORREOXGYVVCEKNMVFYSMZKJJNRBRPRGXHYYWOIWSKADCJXIIXKWJ");

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
    msg.setTimeStamp(0.151872240955);
    msg.setSource(26196U);
    msg.setSourceEntity(70U);
    msg.setDestination(49076U);
    msg.setDestinationEntity(171U);
    msg.command = 190U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GRWDQWJDNMXNCZLEXIYJTFUHBNPGTAUXHTPYREALIRVCQKNYGUPJYACFJIELOPXCZWJPISOIUMPVQBIUMHKTFKPOSVNHOZKZHBHQDMCVHKEBEEELVCRWREZUMWWJBOPYZHKITWAXQMFOMTBJBVGIGLAFDCYJVTYSTRRBKGGSOQMPHWXAUZQL");
    tmp_msg_0.description.assign("JDHIOYULZDFKIXSSUGHEKWMDCRPDVNMXVTQQVZAVOBAPJIHUEMVRWUMBJZZPPPLHYRXOEVMUZYQCMSSFYWWAYTOZGRXXNGOCPBFENFTKEHMJJQERBKQJQZKSRBIIVGYUHWENXBFWUYQNXHBRNYONLCHGWOKKGVZODTWSMLYSFWZXNPGXILFRUTPTCKKRFEOUIPITGACLALMQJDVIGQL");
    tmp_msg_0.vnamespace.assign("JMMLJHZDUWVSMZZMAABQAFTYLZIQABNFYIPOFEEVJGCC");
    tmp_msg_0.start_man_id.assign("YSZCGBXJFYXSJQOAHAPNVTFZECKCQXGSNPVKMWLOLDQLXUKINWDBFIHEPWLLFUYYRXAPXUWDHLVFSBBDNVGISTMSMGFPCYSPKLAVUXMWCTTAEREWJUNHOEJPBAMBQUJNBXINNHTDGIBIQATUOZVWQOJOEDVYDYPNWCVNEJFCKAJWIRRMLSIUCQ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("FQOSVBLUQDXIPVGWOVKKOCLSZBRCHOMUPPFUNKPXHKWCJSWVGWBCSLWYRSTKCFTVAGPARDHALJWIFMRUFDGERMYENIBRXZGJCAGXEIYLAKU");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 13391U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.270878122636;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.82920591488;
    tmp_tmp_tmp_msg_0_0_0.z = 0.380312797069;
    tmp_tmp_tmp_msg_0_0_0.z_units = 252U;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.905060656995;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.00155054644453;
    tmp_tmp_tmp_msg_0_0_0.duration = 4234U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.116411432273;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 236U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.323569273844;
    tmp_tmp_tmp_msg_0_0_0.direction = 224U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("GWUVKOQQIWFMFRFTLBGKHBZYJZIBHVYOVZPXYZVDMEYVJRJNXFG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::RemoteActions tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.actions.assign("BEARIBLMPNVQHPMPDWPWOTGCUIFVFJBCQGUNNJRHQJIKXNVJYEQDGMSEPENJHNEGNJCXEWSTAUDZNYALKCZYGOUZDTJBTWAISONOPTAFQEWBRYKRYPMMOLUERCTWHFGMYTAYQXZCVLIMESVFCZMGZGGIPOTFIDXRKAVHSLNZLHOBFCDWOIVCXGKRRFDSW");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ASAFIDKQORYCGTBTXOGUFLEYPK");
    tmp_tmp_msg_0_1.dest_man.assign("UWDVMOFRJHYEGTOTZPWXIGGYFITANEYGZQBVIINLQGQSWPYINKRYLXCLBUPDSNPIGLDYSCNARMNMADRTOCVBEHGDXISUHESMEOHLBRKMXJQFBHKKXRFWIH");
    tmp_tmp_msg_0_1.conditions.assign("LQNWTFXWFZDQSLZWNXVUHCKFXXEYPYCMHGNPAUDBRRHHMEHTLJCVSOCRZBKULTQRKXWUWDODPASKFGVMANUADTCDIYNEIQTGNHGGCEGA");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DevCalibrationControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 67U;
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
    msg.setTimeStamp(0.141079669676);
    msg.setSource(48212U);
    msg.setSourceEntity(111U);
    msg.setDestination(45199U);
    msg.setDestinationEntity(7U);
    msg.command = 36U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XHEFTADQMJQBGBSVVCNVXQXYXFNTKMXRQFAZWRFZLOGURNJRKDGSCGZLUFLKKMBWMLJAYVMNCTZRHSPSDPTVJNIUXOYTAEPUGLVRLKHCWTKHSIADIOWLMIKWABQZLKZLYQBSKDCTIWGOYBOGEOEWIGAVYNXYCFSZGSVJMKUSDNHFCHYPUPHQRATJPZFISCQXCWUVEEQRBDYMIPMBE");
    tmp_msg_0.description.assign("BBXRAZYSPMVGWVHWDCEAAZDIUGMZFXPBNYXKRBEUTYVSLHDSLAYTZVYORTLZKUQQLZNGKTJTJOOQCWHBFXNEVHODPWVMXLKCWCOFKBEKPMOQSRKSFSDVFPVKGUUSEBEMNDRNTMCIOALDESFMTJQNUNPTLRIRDJXWMKH");
    tmp_msg_0.vnamespace.assign("PCGFJALBUQKTZMHXYXCYZIDQDVPVOUAHJRXPFHAMYIZUXPHYQYXGTJGNBQKNIGSAMIQSOCCOWFKJXCRNZBUYXSKFVLYWKQYBHXGACTVGTRREEJYER");
    tmp_msg_0.start_man_id.assign("XBTEEYJMQVC");
    IMC::Phycocyanin tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0975651264475;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.645292166329);
    msg.setSource(21782U);
    msg.setSourceEntity(247U);
    msg.setDestination(60855U);
    msg.setDestinationEntity(111U);
    msg.command = 156U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EVQXLAQSBPDTODVYJYODLQDZWAGKEXWARQOVNDJVEBFUBYQFEUFIVPRRWFMSJUSNCNMAZSORUTPBMTVINIGWEFRYPKHCLLCZHIPNTJCICJVYNWBVOHKYKSQNAMDBFXXQTGIIMXLOJHOLJAGBLHFLKRRHZVJEGBMZUXGHTTYZEHZG");
    tmp_msg_0.description.assign("YMTCERGMZDHFGTXGUPZILDJOGFLSSAFGPHMUHYNQCKEZLXBRMVDJXXROKCIZYQJYVIYQUZHIIMDKTOCGLDFBCEXJOIGOISMJOCAONPKPBXVNVFLLCHBEGMCWSIRBZADPTRRIKQYJGNPEVVBAVAJZUQHVHBBFARUASUKLUWSYJBHZJSUQWMDVJEDYERASPMKWTCNTORNIYHENETGNWQAXCVFLPOWXXQRKFMTWQUWDEXAFNFYLBDS");
    tmp_msg_0.vnamespace.assign("KNTDDARKQPLWBMOZWQAIQMMCHAEWGIXRJNABNMNMSYDITCUMVSHWMQHWFCNLEKKFPFUIXDBCTZZAYPJJDOGZVRAOJCEXRQLWDICIHZGDAAY");
    tmp_msg_0.start_man_id.assign("SXUTCVORDMYTOLSQHVBFKIVDCYUNGJLGXPHMCXCKYMQWOXQRTKQHWGEAJRNZQMNPOXGIZXCZOSWAESSJLOLTFXAYVJCGULFTEIJFRSJTUDWJZUFHUFRIAUNSQCZKZEYWRXKBULBBZKEDCZPSIGITQAHIBPFHZHTVGQRUNPLHJYIWBWEUVMVJWGADABKOJLKQOPYNOPTMXHFIYEDVRAKPDRYNDODWAQGDGEPMLWXKBCVSANFRESMEFCH");
    IMC::TrexObservation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("PDKJMQIQOREMOXJGGDNCNKAPPNBHMQOJOYZBWVUCIHMUGYFJWKUEZLSWQSCMNCPUZAFAREHFLIBQUBNZW");
    tmp_tmp_msg_0_0.predicate.assign("IAJNECIBILBLGOFBLPDDKQOGGFXNOKIODOTPLOIFSSDNWAQCRTQBXGJYVBBCKVQPRULLRETKMWYNNVMZNMMNXSGDTPIGALXQBEYYRHZWNRYLAPADCMCBEYVGQCAUWZTOXWRHVVS");
    tmp_tmp_msg_0_0.attributes.assign("OQLZYDXDMVICPHCIWTREPLYINBAUBKSNDRJLLVAZGONYJUJNDODVMVUQQQOSWLZOPBUKGHKBRRQFKBHDXOJPXPUCBEWNRNVRNFJTXZDSUFIJCKGYCGPTLAWLPV");
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
    msg.setTimeStamp(0.950346340528);
    msg.setSource(38506U);
    msg.setSourceEntity(162U);
    msg.setDestination(32740U);
    msg.setDestinationEntity(46U);
    msg.state = 33U;
    msg.plan_id.assign("BOXFSHAOYWCCAOVDCKTLPSTONHQAROKEPWTZINMTGYJWKEWYFQMPUJAQNBEIO");
    msg.comm_level = 20U;

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
    msg.setTimeStamp(0.199291599281);
    msg.setSource(32647U);
    msg.setSourceEntity(49U);
    msg.setDestination(27001U);
    msg.setDestinationEntity(216U);
    msg.state = 244U;
    msg.plan_id.assign("UAFPXYUKZQZLHZZWXHHSCGNLFNPGXBEYVYXLR");
    msg.comm_level = 168U;

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
    msg.setTimeStamp(0.485363798081);
    msg.setSource(40151U);
    msg.setSourceEntity(40U);
    msg.setDestination(35021U);
    msg.setDestinationEntity(213U);
    msg.state = 121U;
    msg.plan_id.assign("OYGXYEUFVRSJGSFNMWLETPGNPRAWLYBHCIERRHMEWAJIZPMLVTUDPDITDNZFKDOZDPWFMBCVGFBADJOLUNKPHVQKKWRDQWPSBQSTCBIDQVAKJSHAWSYHSLZZMNPCVQPRYBXYERIHCMMZKYHLEQGQGFNQVF");
    msg.comm_level = 140U;

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
    msg.setTimeStamp(0.344848316132);
    msg.setSource(55822U);
    msg.setSourceEntity(27U);
    msg.setDestination(15053U);
    msg.setDestinationEntity(65U);
    msg.type = 127U;
    msg.op = 110U;
    msg.request_id = 4148U;
    msg.plan_id.assign("NAILOUYSFNJLLDGGEWJXPBTDQHYCVXTVDZVMHCEOFUXTPJQHSQDGYQFORVMUXNCLJRMIIFRVLGWAMCNCYHSHANFIZKCEBBUNHXGZPAPOXLVLGS");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 55841U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HHLKNITCVJIBAPT");

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
    msg.setTimeStamp(0.0692990547779);
    msg.setSource(42607U);
    msg.setSourceEntity(211U);
    msg.setDestination(27526U);
    msg.setDestinationEntity(28U);
    msg.type = 105U;
    msg.op = 138U;
    msg.request_id = 48709U;
    msg.plan_id.assign("XXNVGUFHXLMFODHTTVQDKIZPVHYCWQUZEDMQTTQIKFXRCKQNEVJYZLXWOOHFQZKJIMSVUHLETPDWNWRGBJXRGYLLDKXQJGYVCIRBBVMSIDHZSGFNDDUWVJKUR");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.893722073117;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FYXSMEZSAZYTZAKERCQCZHYKATPLOVMJUCKFOEMZRGIVHGHGUOEQTJFYGFTVKILJDWHSGYFTUWDPVVULNOPMPQJKIWUWNDYAPXHBNCGSHJDCDURTSNMQZJNYBROJQDREMTLJXDFRPXSDYGVBMICSESQ");

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
    msg.setTimeStamp(0.0381095963306);
    msg.setSource(39399U);
    msg.setSourceEntity(38U);
    msg.setDestination(52277U);
    msg.setDestinationEntity(140U);
    msg.type = 22U;
    msg.op = 14U;
    msg.request_id = 9538U;
    msg.plan_id.assign("OYNNUWPZLARJIDJDIJWFPOTFLURZMFJGUSFKCHIWWGTPBVNTUCQLAZWKIRVIKFMHSMQTQCESYTDXJMNOVDRQ");
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 2447866456U;
    tmp_msg_0.start_lat = 0.530954902483;
    tmp_msg_0.start_lon = 0.25574367734;
    tmp_msg_0.start_z = 0.237664506881;
    tmp_msg_0.start_z_units = 113U;
    tmp_msg_0.end_lat = 0.292740487971;
    tmp_msg_0.end_lon = 0.764343089333;
    tmp_msg_0.end_z = 0.863066570065;
    tmp_msg_0.end_z_units = 93U;
    tmp_msg_0.lradius = 0.0196509016905;
    tmp_msg_0.flags = 217U;
    tmp_msg_0.x = 0.907186431487;
    tmp_msg_0.y = 0.310761145763;
    tmp_msg_0.z = 0.863831458006;
    tmp_msg_0.vx = 0.323289404256;
    tmp_msg_0.vy = 0.0279576873657;
    tmp_msg_0.vz = 0.811586724806;
    tmp_msg_0.course_error = 0.00545292935119;
    tmp_msg_0.eta = 33253U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DYSKCEBQBVBNGAELKYIDNHLVDTIXDHOLKUAZPFKJUURVGMNAGGRGVUQKVCRRETHCZIBUEOOLNHDSMQEXVKPXIQCZYMPBLDYHAUFAQCANSOXQSGTCEJLWVBP");

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
    msg.setTimeStamp(0.186485938371);
    msg.setSource(25279U);
    msg.setSourceEntity(111U);
    msg.setDestination(64030U);
    msg.setDestinationEntity(26U);
    msg.plan_count = 15805U;
    msg.plan_size = 3374327479U;
    msg.change_time = 0.636610367877;
    msg.change_sid = 41954U;
    msg.change_sname.assign("FFNZEKSODLTAVCBGIVDAAHNOUYKKQJCUEVUFGRNVAZHSJQTFQIEXAAXXYSUZXTFPCRSZEIAZUPFNZFSGMQKBNWGWUERTHNJRRBYNVJ");
    const char tmp_msg_0[] = {26, 34, -51, -9, -59, 93, -101, -91, -82, -31, -117, 66, -20, 26, 26, 7, -4, 116, 53, 47, -17, -28, 4, 124, -22, 121, -91, 103, 50, -95, -67, 66, -44, -80, -107, 90, 57, -18, -47, 49, 40, -19, 62, 119, 38, 17, 49, 73, -85, 103, 106, 80, -112, 73, -43, -18, 82, 53, 124, -2, 126, -86, -42, -108, -122, 77, -46, 15, -65, -105, 51, 84, 5, -2, 60, -5, 29, -20, -99, -31, 42, 118, 2, 17, 27, 36, 86, 75, 126, 92, -115, -100, -54, -76, 89, -21, -94, -77, 94, 5, -33, -52, 122, 115, 38, -16, 33, -5, 46, 6, -11, 119, 7, 40, 62, -17, 1, -98, -91, -42, 37, 49, 89, -42, -49, -95, -11, 71, -122, 117, -53, -93, -9, 21, 102, -33, -45, 8, 51, -26};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LDQEZYXWAAMNDGFJQFUBZKUPEMYLXIMQWVLEPNLHCJPIDAHHNHOFNYHYZJFQKGRZOTBKVDKIFMYTHUCMQKOIMGKADXXMWCBLWWVQVERGXDINALNIVLFZFEKOGOSBLJEICRVVESASIYAQRIRUJIZY");
    tmp_msg_1.plan_size = 8750U;
    tmp_msg_1.change_time = 0.86947026994;
    tmp_msg_1.change_sid = 56094U;
    tmp_msg_1.change_sname.assign("KEJXYLDOQHFYGYLDTVEWLWWUGCYSYQPABNZTGSDXUZFNWUBRFDKAXMUPICLWDIZCQYDNJUBMMYFJNUGANWHMFOPNXKCPPZWBRIACRFOTKLTJVGBDBVGNRMXVSYRQWIFJQJAZUKLQPSLSREDUSKUQAECCOJFLMEX");
    const char tmp_tmp_msg_1_0[] = {26, 99, -125, -127, -102, 45, 125, -11, 106, 96, -92, 123, 26, -85, 90, -124, -114, -81, 55, 23, 121, -33, 71, -36, 41, -111, 117, -50, -98, 10, 68, 14, 21, -43, 2, 10, 117, 76, 114, 5, -67, -105, -87, 104, 6, -22, 48, 53, -78, 24, -1, -103, 123, 62, 70, -29, -106, 108, 80, 37, -57, -119, 0, 46, -115, 0, -119, 110, -82, 67, 17, -24, -119, 78, 115, 38, 77, 119, -20, 113, 74, 73, 97, -28, -80, -128, 101, -125, -38, 52, -46, -30, 18, -56, 118, 67, 94, -15, -58, -74, 8, -33, 40, 52, 5, -56, 58, 100, 74, -112, 119, 17, -118, -86, -31, -102, -121, 74, 31, 75, -109, 120, 114, -66, -38, 89, 91, 52, -62, -31, 56, 118, 95, 59, -106, -11, -13, 117, -91, -42, -114, 45, 2, -111, -29, -32, -57, 19, 119, 77, 52, 112, 35, -12, -6, 83, 99, 73, 93, 16, -100, 70, 15, 120, -109, 125, -18, -80, 25, -79, 76, -91, 32, -42, -17, -40, 27, -75, -123, -75, 93, 31, -76, -12, 23, -57, 11, -34, -49, -11, -17, -128, -31, -120, 121, 36, -73, 33, -5, 71, -108, 101, 37, -60, -70, -34, 107, -99, 2, -4, 72, -57, 19, 15, 82, -14, 50, -87, -5, 100, -38, -79, -14, 83, 108, -89};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.995396242255);
    msg.setSource(9320U);
    msg.setSourceEntity(248U);
    msg.setDestination(31031U);
    msg.setDestinationEntity(202U);
    msg.plan_count = 3280U;
    msg.plan_size = 1335420238U;
    msg.change_time = 0.306874217914;
    msg.change_sid = 21807U;
    msg.change_sname.assign("TIPXSVMZZLMKOVWRTELTJFKOQFPIWMELBGHKUIKIPBDJBCUSFOOATQFQCFYNRALAYDVGFWKYXTMUYXVRHSAAGGSBKDAXQMPSHBHZNDCBHIHPSNAROJRUWFFVGFRNRRKJCMYIODVWUJCUALMZQZUKTEQLPQDUHERPMEESNZZKLEWXOWCVGAGZJCCSYUSVYZWBYUIOOXPSEEBIPXILJLYZLWT");
    const char tmp_msg_0[] = {-124, 65, 53, 53, 63, 102, 58, 98, 41, -61, 89, 50, 85, -88, -89, 68, 46, 60, 61, -96, 96, -63, -77, -76, -43, 28, 108, 20, 36, -52, 90, -109, -91, 81, -82, -95, 23, -127, 67, -68, 76, -80, 122, -12, 45, -126, 20, -63, 60, 71, -41, 34, -15, -10, 89, 68, 88, -18, 49, 76, -59, -108, -25, -69, 6, -14, -93, -93, 114, 28, 119, -14, 32, -101, 94, 34, -118, -113, 112, -19, 59, 112, -80, 18, 118, -17, 83, 86, -124, 106, -74, 39, -43, 19, 18, 116, -92, 122, -18, -83, 67, 106, -91, -8, 27, -89, -95, 54, 96, 10, -63, -34, -4, 81, -32, -13, -82, 92, -46, -100, 45, 102, 73, 122, 16, 120, 1, 69, 46, 98, 75, -27, 121, -35, -60, 55, 91, -105, 9, 44, -84, -39, 12, 121, -80, -77, -93, 114, -121, 5, -11};
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
    msg.setTimeStamp(0.406205594862);
    msg.setSource(25816U);
    msg.setSourceEntity(48U);
    msg.setDestination(30975U);
    msg.setDestinationEntity(233U);
    msg.plan_count = 45339U;
    msg.plan_size = 1303177944U;
    msg.change_time = 0.814787442067;
    msg.change_sid = 18793U;
    msg.change_sname.assign("OTZUCBKWKIHLINZNZPBZOCIZGBAFAOVJVV");
    const char tmp_msg_0[] = {119, 26, 30, -44, 96, -6, 38, 78, -84, -113, -123, 109, -38, -66, 54, 15, 125, 5, -3, -36, -4, 56, 36, -53, -1, 25, 25, -36, 76, 92, -103, 101, -15, -81, -47, 30, -19, 25, -104, -95, -108, 77, 28, -10, -76, 122, -28, 38, 79, 116, 124, -75, 21, -40, 3, -14, -78, -25, -62, 61, 64, -26, 52, 78, -96, -128, 4, -52, 38, 47, -78, 102, 119, 93, 87, -108, -108, 12, 13, 102, -103, -7, 106, -106, -27, 106, -20, -127, 33, 99, -24, 24, -66, -124, -50, 4, 14, 111, 106, 69, -76, -105, 3, -75, 17};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("SIPLJSPHQVJDATRYCKMHYQAGJEQRLQANSMNIQAJAWXOLFSXREVKNOWPBYLYBGUPTPNWXHJBFXDRYCLJZAYCLPMHSUMENOGVMDDXHFLCYUYKSDTWGBUPGZRZGPXUVUXDZEQDHITFNOTEOXETHSIYEROOQVFVWZORTVKFLDBP");
    tmp_msg_1.plan_size = 1034U;
    tmp_msg_1.change_time = 0.501256283815;
    tmp_msg_1.change_sid = 54885U;
    tmp_msg_1.change_sname.assign("QUFPRSIHUJPPTCVGEYQAMLZTWUCRXZYHJWLITTWEJWLMIUFAROHVUYKJNZANOGDXZHSIODIGDGHGNJFCOLZMYRAXDCFXVCTXWPLZAYJNKNUFNCHYKZABNKQNHHOBEWVVMESLBULFDOLHQAYKGYCMYJXULENGQIICDWEQYMASTEMTBZOMWVFKRWRAONBBEBRVXQIT");
    const char tmp_tmp_msg_1_0[] = {6, 106, -58, 71, 107, 78, 31, -124, 85, -35, -34, -51, 22, -79, 25, 17, 101, -99, 115, -41, 11, -54, -82, -12, 68, 53, 78, -84, 54, 25, 23, 68, 21, 17, -68, 58, -84, 111, -64, -127, -83};
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
    msg.setTimeStamp(0.604080081285);
    msg.setSource(22266U);
    msg.setSourceEntity(142U);
    msg.setDestination(22268U);
    msg.setDestinationEntity(217U);
    msg.plan_id.assign("YVZDUWDKLSPBZCWRBJTGWBPDAOW");
    msg.plan_size = 358U;
    msg.change_time = 0.500774477389;
    msg.change_sid = 56088U;
    msg.change_sname.assign("YECYZOJEOGVBGRRVPVTHBTKNIMSWDDKUVCOJQZFJFIUDGATLPXAFAAEXFNYBAWRBLIZPFLEIQLSPOCIILFKNTRKOPWAQUDMBN");
    const char tmp_msg_0[] = {-121, -100, 80, -33, 24, 69, 80, -101, 38, -122, -13, 34, 48, 51, 88, 73, 123, 2, 122, -35, 12, 89, -3, 9, 43, 77, -28, -15, -15, -79, 84, 104, -81, -37, -35, -114, 102, -73, -114, -70, 34, 73, -76, 60, 77, -122, -55, -111, -66, -26, 124, 90, 103, 121, 92, -95, 56, -118, -60, 46, 74, -88, 113, 106, -93, 33, 29, 37, 14, 111, 78, -48, 115, -65, -106, -70, 17, 31, 20, 107, 30, 46, -103, -110, 119, 72, -79, 85, 115, -4, -25, 50, -92, -73, -43, -15, -42, 107, -96, 121, -32, 24, 50, 55, 24, 58, 80, 68, -75, 54, -69, -102, -10, 86, -95, 51, -67, 49, -24, -72, -94, -53, -2, 8, -37, 64, -1, -26, -25, 86, -127, 56, 91, -109, 48, -112, 126, 40, -76, 30, 1, -26, 11, -41, -40, -32, -118, 46, -71, 13, 116, 15, 92, 73, -76, -104, 47, -128, -75, 23, 24, 52, -122, -35, 0, -3, 83, 53, -80, 87, -32, -127, -9, -89, 1, -5, 102, 108, 59, 80, 61, 28, -25, 56, 123, 114, 102, 104, -13, -30, -64, -45, -8, -88, -42, 106, 2, -9, 18, -118, 67, -109, -63, 59, 36, 79, -112, -59, -120, -111, -83, -96, 23, -9, 4, 10, -123, -78, 41};
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
    msg.setTimeStamp(0.374446572669);
    msg.setSource(51675U);
    msg.setSourceEntity(10U);
    msg.setDestination(37169U);
    msg.setDestinationEntity(225U);
    msg.plan_id.assign("UBXBEXLOGDBMQAEKZGWNOVPOVDLAOTGUETTSIMUITNOGZJPWYLPDCJUAWRNCPOWOQCLVTOJFQNXMMYSHEWNVXCJPHFMYLRBXZKNRYZFAXYLPSSEQSKWIMUVZRFMCZEHQWXYUAKHIJGLHNJFMUTK");
    msg.plan_size = 61034U;
    msg.change_time = 0.414825126413;
    msg.change_sid = 54570U;
    msg.change_sname.assign("VQTHOLETGFNIYOEMETRGRBLZJBVBZRUKPQNSVNPERFLSIDNUUYWUTNZBFOKHOPJVPCBACKIKDNYDMGNPDQKHKFCDIPZTOUVSRPGEDLOBUILCLAAFCWBLAMOAQJYRUAVJTLEJYSFZXWEQMJSIACAXVHBZHMFGTPVAJYUXYXCXHTYIRQMHWPGOQNSVWCLYRRCRSGTBQWSWGUSZYMBQ");
    const char tmp_msg_0[] = {-80, 37, -76, -59, -60, 56, -121, -6, -82, 32, -120, 86, 3, 31, 10, 86, -89, 107, -27, 76, 79, 23, 85, -45, 15, -37, 98, -31, -72, 49, -33, 4, 74, 59, 41, 89, -106, -105, 121, 63, 65, -56, 116, -67, -125, -78, 57, 8, -16, 94, 63, -67, -27, -90, 64, -9, -88, -68, -56, -13, -107, -27, -103, 2, 32, 102, 125, -23, -3, -97, -72, 0, 91, 1, 77, 93, -21, -93, -73, 69, -57, -112, 21, -73, -75, -99, 18, -1, 13, -68, 52, -43, -113, 12, 73, -64, 4, 76, 47, -38, -76, -64, 67, -75, -126, 108, -72, 92, 86, -124, -24, 0, -105, -83, -32, -7, 123, 62, 82, 44, -116, -6, 62, 24, 43, -70, -123, -98, 0, -64, 62, 80, -79, 70, -36, 64, -121, 119, -118, 109, -66, -115, -61, 103, -14, 48, -6, 41, -125, -44, -105, -98, 44, 14, 107, -55, -20, -79, -2, 98, -3, -68, -38, -25, -74, -105, 30, 98, -14, -113, 9, 121, 2, -102, 99, -21, 85, 125, 115, 87, -108, 100, 105, 18, 92, -2, -95, 48, -18, 30, 56, -115, -97, 59, 46, 120, 125, -115};
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
    msg.setTimeStamp(0.520913406145);
    msg.setSource(2046U);
    msg.setSourceEntity(78U);
    msg.setDestination(42486U);
    msg.setDestinationEntity(194U);
    msg.plan_id.assign("JIJVNATRUEBQGOUBRASSVJHZRQXVTNDHEGJHPNKWKVBFCIRZKSWDZNAVGKFCILWCBGZFRHSNTXGLMGEMMOYFYLOXBIVPTRDJNOCDLJKANEFRJRKYAMSMOAONWNULQWXGLPVPQTSASIBFIHVTKXQEUUHKZJMCULZZWCVNSAEPEYMYDUK");
    msg.plan_size = 36223U;
    msg.change_time = 0.849967615168;
    msg.change_sid = 663U;
    msg.change_sname.assign("TXNZPPVVWKWMTODAFQRRDJJEANCIBLLPVFUVKXYHHPNHFBTUXMYQBUKQBWJKTHZNWGIMHQNVHBEGWDCQEFOMNGIIPEPMCTAWRRIJTTUOZPKJCDLOSRUKRZCFYLLIFGNWBG");
    const char tmp_msg_0[] = {113, -49, -76, -37, -73, -65, 67, -2, -88, 120, 120, -80, -9, 58, 90, 7, -49, 14, -31, 52, 71, -51, -78, 111, 14, -49, 71, -98, -61, 112, 104, 92, 97, 78, -101, -44, 14, 19, 2, -125, 94, 110, -85, -98, -66, 101, -40, 69, 17, 106, -40, -16, 25, 105, -108, -1, -47, 92, -109, 57, 10, 119, 62, -106, -65, -32, -23, 66, -5, -84, -53, 8, 76, 74, 99, -94, -82, 103, -62, -93, -14, -103, 7, 100, -74, 17, 38, -15, -105, -41, 73, 79, 118, 47, -124, -20, 42, 13, -1, 37, 53, 23, -83, -116, -109, -67, 79, 0, 101, -76, 99};
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
    msg.setTimeStamp(0.964353220174);
    msg.setSource(18779U);
    msg.setSourceEntity(11U);
    msg.setDestination(63013U);
    msg.setDestinationEntity(112U);
    msg.type = 20U;
    msg.op = 87U;
    msg.request_id = 52266U;
    msg.plan_id.assign("JAFCHOGHHYHGSBEDPYMPYUTIZGBICTNRRZOTOZAFBACDEDMHIOKAPSGTVNNUNZYLCRDOCZKBILKTBJFVZ");
    msg.flags = 7224U;
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 247U;
    tmp_msg_0.value = 0.514918768377;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CUTPMCOWXNKMBGEONSBTYOMSXJVKFGNWNCVXDUWSQPQUENERDJIDSVGAENOXSAZOGAOSVTITQOMVXHJMDCFJHDJFUNNBLSRZOSLPLCHZKWGPSVWHY");

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
    msg.setTimeStamp(0.924147389562);
    msg.setSource(48004U);
    msg.setSourceEntity(1U);
    msg.setDestination(8674U);
    msg.setDestinationEntity(148U);
    msg.type = 139U;
    msg.op = 129U;
    msg.request_id = 19580U;
    msg.plan_id.assign("PPELPXEFVBOGUBXBZFYZGUNEKVFSJSOTRLKPGYOATDQIVYJRGIVODLRLDOGFUECIJKJMARIYUIECXWVWWQQIZFYXSWSFUQTLDSWCWQJHVWMNGCFAIHULFGPIXMPTUMDOPCLMEJGBDAJEPCGCMWKHMNZRXVTNWNSYIHRTBSCKTKLBYEQNVMARA");
    msg.flags = 55220U;
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.758989997829;
    tmp_msg_0.y = 0.234606685205;
    tmp_msg_0.z = 0.783073648153;
    tmp_msg_0.vx = 0.771627689191;
    tmp_msg_0.vy = 0.76794565341;
    tmp_msg_0.vz = 0.372146176546;
    tmp_msg_0.ax = 0.0784508116181;
    tmp_msg_0.ay = 0.245816185291;
    tmp_msg_0.az = 0.295121987622;
    tmp_msg_0.flags = 3674U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AUTXISGZYYNFURXYSIPNSJDILXWQDKKIYBXHSVZFCHLCSKGSMCNOQDOXCCLEVBQRZBTGWWAGLWFSBHO");

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
    msg.setTimeStamp(0.38277694655);
    msg.setSource(56316U);
    msg.setSourceEntity(87U);
    msg.setDestination(6123U);
    msg.setDestinationEntity(87U);
    msg.type = 48U;
    msg.op = 35U;
    msg.request_id = 43724U;
    msg.plan_id.assign("VELBKGWQTEVPDXLBPVOKZSXPERCNJCAGTXUWAGWQYTDWWIKIKVGCIDZSZMMFJFUPSIAIZGQMODXTQKMRJUNPZAYHWTGFUUFHNMNFBQIBARZTBSEPLHUQLHBJ");
    msg.flags = 64250U;
    IMC::AcousticMessage tmp_msg_0;
    IMC::FormCtrlParam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 35U;
    tmp_tmp_msg_0_0.longain = 0.257745899694;
    tmp_tmp_msg_0_0.latgain = 0.434663395627;
    tmp_tmp_msg_0_0.bondthick = 2763622803U;
    tmp_tmp_msg_0_0.leadgain = 0.132513352019;
    tmp_tmp_msg_0_0.deconflgain = 0.288278315875;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PSUJOGLZJMPBRMVCWYXTBQNVAQFQKLCALIYKNSIIACHOXUHPDZESFXOPFIYTONSNXQIZGDWCQVBETERBMKMGAUVLDXTYY");

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
    msg.setTimeStamp(0.981120997505);
    msg.setSource(11243U);
    msg.setSourceEntity(133U);
    msg.setDestination(30120U);
    msg.setDestinationEntity(145U);
    msg.state = 58U;
    msg.plan_id.assign("PJRMZAWPCEDTYHGVVEKVWUICAEXCUQSHLSKZIBHJFEHTPSVMEBDNKQQTMUKJIGXHGNRAZBFZNLBRECJQGKYYLDUBJZONQQTHCSGRNLFNTLMWHQYKVIGCFQLZXSTRBXXHISTIVIIMCTSSQUFRHNGPDKSLGVBYLYSBYMMKDZAMZAGOCAXJNHTFJPNA");
    msg.plan_eta = 265190837;
    msg.plan_progress = 0.309330443008;
    msg.man_id.assign("FYSGQIWZQGWWPREPTYFYKJEBIRKZRRANZUYMTGRJUKSXOAEBULTOQSUTHTBURDJCHFGAANZZWDCOSQWYZVCYHCROBYVVFOJLPTUISWDXZMDMOKVIJXAXZPXUEIHLKSGLPAREADLSKFIONRCJLKKBTFQJHIBOYJWNLDITEWPXEQBMUNCXVWMAYBMVHXE");
    msg.man_type = 55286U;
    msg.man_eta = -1960903850;
    msg.last_outcome = 217U;

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
    msg.setTimeStamp(0.423396402706);
    msg.setSource(57618U);
    msg.setSourceEntity(34U);
    msg.setDestination(12051U);
    msg.setDestinationEntity(92U);
    msg.state = 12U;
    msg.plan_id.assign("TWPYDVXWFWLKWWRZZZDYJNHKOXIDMQCIDWLIBQHPJJLCUIISMEJVOMSTYEOTBRUZDTTIFFHENXRRCOJTOXFSEVHFSUWBYEAP");
    msg.plan_eta = -2021879469;
    msg.plan_progress = 0.914996719011;
    msg.man_id.assign("ROYZPZHEINQFLRSRIDYHLBBKTOPASUMBCQICTGSUXAVAWZCKDTEUPQGHWIFWCMJKEHHKAOWNMPDDARWMOLKANXTZPB");
    msg.man_type = 31852U;
    msg.man_eta = -131348004;
    msg.last_outcome = 62U;

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
    msg.setTimeStamp(0.719710390511);
    msg.setSource(54221U);
    msg.setSourceEntity(118U);
    msg.setDestination(53342U);
    msg.setDestinationEntity(109U);
    msg.state = 227U;
    msg.plan_id.assign("GXVTSNBHTCM");
    msg.plan_eta = -1304907779;
    msg.plan_progress = 0.726800689158;
    msg.man_id.assign("HOPZBNYNMKRXDZTESWHVKXLVRZLBIYWKLKPVTOYJQVZADBCFXWAGANNGGIHFCSNJQQRDKAWFERJNDUSQJJQJDXPXOSNFYESBIZFUUSJWLCOAWVTHSCPURAXOEFMNGHYLSVTLIKZGMBLWMGNBMPIFRHQJTZYIKDCQEBUWYWPJVONKFMIQMXRCYVXZMQWOEKC");
    msg.man_type = 26247U;
    msg.man_eta = 851683843;
    msg.last_outcome = 1U;

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
    msg.setTimeStamp(0.28532381594);
    msg.setSource(41242U);
    msg.setSourceEntity(150U);
    msg.setDestination(1729U);
    msg.setDestinationEntity(156U);
    msg.name.assign("UASVYMZBCITZBGQGGGDKJJFQJKVTPTANSARNUIPSTQEKMOEWDOYEXYKAPURXHFYUGHIVUFJRWZLZGYQIAOKKTDJOMOBETCRNCKRCUNICFHMSDHXRTNWESPHUCJQVLPXFOFMVQKCIRIZVWLLOMEADDZBASQFBNHLGOIOLNAUYKBPHWCVPXNWJW");
    msg.value.assign("TYASMVMNSCAHNIFHGUDPVVTHQXQOLNEBZVRENSLEGENLDLXIORBOTOAQTRDCLSMDVYCLBRDZVZPJYUKFOBMPPHLWZCIXHGGQUCGKRJABJEPCCOHHCNPEJNRIRDXZGJAIOFTBEFVVQGFSDRKWWFAXQWTYDJAVMBRBJNNS");
    msg.type = 140U;
    msg.access = 240U;

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
    msg.setTimeStamp(0.855314973081);
    msg.setSource(34767U);
    msg.setSourceEntity(188U);
    msg.setDestination(23202U);
    msg.setDestinationEntity(169U);
    msg.name.assign("RMUQWOXNUQGNOKJSRAYKREWPHQXNIHREYAZXWKVXQLPDBADUYTBASCLXNKKXDVIUZMLFKHTBWRFURVKUSCOUJGPQHAYNTZTZZDVECQEDEKLIIZEZRHSTAHPRKTJDNTOXCBMLFUPWCFPGOVCHNJSJFSLFFDYEKHWFWYABMXSHAWIMJEQSIINLMGMQAVXBJJOXIUJWLGSOZAEBBCQYBOGNZPWFMQOIVVMLVCGPZJGTEHCDNFGRM");
    msg.value.assign("WPUJYSSNCHTRAGKRGVWLITPPNBLNBKUEFSMENJDPAIHCJWFOBACWXQSXHVOYBDHEMQYWZRIOULLGAXMZCVOWSJDCJGLRQGMJTICEAZXOUYDDOQNKDMHIPFVTMEORODAXTSJKTUTZLEEUTZWUBRISXPHFUBPPVKZKZ");
    msg.type = 93U;
    msg.access = 35U;

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
    msg.setTimeStamp(0.315752059363);
    msg.setSource(34290U);
    msg.setSourceEntity(112U);
    msg.setDestination(3490U);
    msg.setDestinationEntity(104U);
    msg.name.assign("JGSIVXAOYNBPURKFIZGDWGYCZAMQLBKBUCPAOLFU");
    msg.value.assign("QQLGQUSGAZSSCEEIEMJBHLGOFFEJKOGVXRKYUHKOWNNMPWMKEWZIYSZJGFSDTWGWNNFXRLJBIQBTDNXJKWKPEPYRBHETKSNVTLQZODXGKYVNAHRINUMFIJXLGRMKASDPVHLCXHXVDIFFMBRJGRCFDABXAPZYHWECZDRQYSEDIUIRQJZPJLZVUVTYOANBJMTXBCQUZSV");
    msg.type = 109U;
    msg.access = 204U;

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
    msg.setTimeStamp(0.133635571008);
    msg.setSource(11294U);
    msg.setSourceEntity(189U);
    msg.setDestination(51249U);
    msg.setDestinationEntity(132U);
    msg.cmd = 22U;
    msg.op = 198U;
    msg.plan_id.assign("GSATTHFFOFXPKBVCACHFLEGAXXTHBHERUOKRAFOHKJHBHX");
    msg.params.assign("QFMCQPUGJWSWSTWUYZAHMAIHLKQNMMBGRAMOTAJDICVNHDGWKUSDXRONLAWYXKSEWIXUCZWYCIAHSOETRDCNEOOMHXYYHLPZAGJQQRCXLURTQNBRLINEJDN");

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
    msg.setTimeStamp(0.840695435038);
    msg.setSource(42048U);
    msg.setSourceEntity(44U);
    msg.setDestination(37886U);
    msg.setDestinationEntity(82U);
    msg.cmd = 243U;
    msg.op = 191U;
    msg.plan_id.assign("OGCQBBVPGVPYLXAXWHUVOESZYJAAGWVSRDIFHJLAGPWFRWZFXVTRUMBJANJZYROTZBTDTMHOPIPDPAUROGOUZTXKMKNCSEMIGJAFKSYUXNZSMLVCMLHGZPKBMPZACNFDAIKRYCLSIXYIJLYHESZHWRLQQETNGLYCGOURRWOHBRPJQMSJHNVQSUENIZYEECQNUVFFQBFLDYMVKKJSTHJBWIXEUME");
    msg.params.assign("YFMEKSTJAASNNXRFFYOPKGUOWQTKTTQXBILLYHFFICKPHWCQEHBMUADYGDHNVNRWSFOHGMZTQULVJYYLEFGWCVNUJYLNPXAVKINREEUIISKVKYNDYEDAVXFQXICTOIMPQBIAMZWGZRNBMLEBZVCAQ");

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
    msg.setTimeStamp(0.440973291875);
    msg.setSource(20956U);
    msg.setSourceEntity(208U);
    msg.setDestination(14768U);
    msg.setDestinationEntity(151U);
    msg.cmd = 194U;
    msg.op = 228U;
    msg.plan_id.assign("MATBLZPJFYONZGHBQHFQGMOYKVSRMIPKHFDEUVCHZCRBAVIXKNPJNDBYHIZAEWMXDVRDGMCZQVRRBGLUPFALPUEHEUHAPTCLNXXKPZKYRAMCQFXMYXTQVWOLAYZDJKGJPSIFGAVVROKJMOOVQSBSAEITRCSTLWDQYKLCUUWMXIPLESSSXITYREOZCIEQZFTFNXYPKTJOCJOTGNVUHUHRNLGFBTWGSWYNFJ");
    msg.params.assign("IEQXAZZUSCZUVDGOVTBEXBAUWOOKJRCYGOPZAYPACHRQMATGKCRYHEDJDSEGSIEMHEAPTYAVRWCCXRLZIIULSRZOGNPFCQLLWFXYDNMYBUZJBJDQOJHKMLKMMNNSNMTPVHNLFXXCKOMWQYKPETSSJIJAWHEZYUI");

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
    msg.setTimeStamp(0.331576494899);
    msg.setSource(55835U);
    msg.setSourceEntity(122U);
    msg.setDestination(49867U);
    msg.setDestinationEntity(8U);
    msg.group_name.assign("FHFWZJSPLWMWMWNCHGVFAYEUCPBEP");
    msg.op = 147U;
    msg.lat = 0.486187886094;
    msg.lon = 0.932200444357;
    msg.height = 0.906180732699;
    msg.x = 0.326237640863;
    msg.y = 0.813661457602;
    msg.z = 0.75013834725;
    msg.phi = 0.479555135467;
    msg.theta = 0.49216356606;
    msg.psi = 0.437809290435;
    msg.vx = 0.40445177109;
    msg.vy = 0.533436658043;
    msg.vz = 0.706887099171;
    msg.p = 0.577011272974;
    msg.q = 0.549690730862;
    msg.r = 0.562450265597;
    msg.svx = 0.943158538628;
    msg.svy = 0.222274082965;
    msg.svz = 0.920387566158;

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
    msg.setTimeStamp(0.525055739846);
    msg.setSource(51465U);
    msg.setSourceEntity(238U);
    msg.setDestination(39518U);
    msg.setDestinationEntity(189U);
    msg.group_name.assign("YVHVXSXYRVNBRMOIBRWUEITZOXMVLNLWDKYDMSLDMJGHOAOPJAZHRIEKAPICWTMKQCCAYETBPUAIWONCLHJCTDZFAFDYEPFRZBCGBXQLHAFFOXVGLJTTXHQOVYGIZMKASMDKYOYKZXEZMRJWUDOURJCVGUJBCDSOBXSKBUTLNSIWNAGNQESRRJWBCGCAFLZWIZIDMQLEQUTTFJSGNMPSGQHNHEQFZYTDVRX");
    msg.op = 174U;
    msg.lat = 0.532896567153;
    msg.lon = 0.787874305324;
    msg.height = 0.133514215892;
    msg.x = 0.768327504225;
    msg.y = 0.68108100171;
    msg.z = 0.937973138241;
    msg.phi = 0.44943270248;
    msg.theta = 0.436722467834;
    msg.psi = 0.308532765621;
    msg.vx = 0.0871495906092;
    msg.vy = 0.626050505087;
    msg.vz = 0.675263154766;
    msg.p = 0.0327897242894;
    msg.q = 0.768082636076;
    msg.r = 0.987071734881;
    msg.svx = 0.309804695698;
    msg.svy = 0.0779600107359;
    msg.svz = 0.371453589133;

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
    msg.setTimeStamp(0.725994621419);
    msg.setSource(11397U);
    msg.setSourceEntity(8U);
    msg.setDestination(5457U);
    msg.setDestinationEntity(58U);
    msg.group_name.assign("TVXBVOBDDYVQZADJLRFKSINVIMCXQRKCCAJHONBKNUFPMFPTRNTEEQCNXGAPLDRMUTZVUSLPJQWTEHWDHQCZOZVWFPKGWHWOKUQPCMYWHYASHZLRUXZLLAJUJVNLQSJNJCUKKEZSSGXTOSFGMBYIXRYGTIGBITKFLBKANMFG");
    msg.op = 185U;
    msg.lat = 0.700468911665;
    msg.lon = 0.645540238781;
    msg.height = 0.505892694251;
    msg.x = 0.908878246395;
    msg.y = 0.022760704926;
    msg.z = 0.137479015752;
    msg.phi = 0.24760125382;
    msg.theta = 0.0875666664578;
    msg.psi = 0.138799756572;
    msg.vx = 0.699138970044;
    msg.vy = 0.00915673502067;
    msg.vz = 0.594315332862;
    msg.p = 0.508011916026;
    msg.q = 0.160048011422;
    msg.r = 0.484642099529;
    msg.svx = 0.907643826919;
    msg.svy = 0.0720863008474;
    msg.svz = 0.265818219855;

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
    msg.setTimeStamp(0.952069713993);
    msg.setSource(47452U);
    msg.setSourceEntity(235U);
    msg.setDestination(23370U);
    msg.setDestinationEntity(18U);
    msg.plan_id.assign("XDMUPEKLRPSNZVKTGIXYNZITCNLICIXGYWPKIGRXFZOEUHFTQWMQCXVRZANOQWBGLZNXPAKSWPUCSOSRNWOBUYYQEJOIFHMZBBOUDMEAWFMPBTAKEAUFHTJMKLCXYXRWQDFHRXWRTGVZSHKOVDULDTNQSLBKIBBMPUSEFPJYDRFJAOBQCLWDPEYRPVJMLHCSFNAZCQAQTGGUZYGFNUEHVADN");
    msg.type = 0U;
    msg.properties = 123U;
    msg.durations.assign("BNBGWKELYYRCYJNXALPWGQTSQUHXIJLEGHJEWJLHDWNAIGFNTJWHHWXCSUQRCBPBDIKVLTGSYOQHTNMKKEXZUPYVNARJIISOLXIVNEOSFLZYRLWDQZBRQZJMQCDKEFGMPAYDVMRCXKZJVUUCMSKORVDIGMNMOEQOEYQPAKAJDXZAUDFKFQBHTSOBKSDFEWAXWVP");
    msg.distances.assign("KCZQBUBXITVDNJEGHMTVDEOLPWLGEFAHLXBKVKFQFQCMEJJCLFNYPJITXZSYQWUEJUVBMJDUEZREQRCNXIRAOMKIHZDNZVZAVPEWSMUECYKTOGFCYSTFIGPGTYWORABSXHUJPINFBD");
    msg.actions.assign("WDLNTBPCGMXMVTDLLDQIVFFHFWEIWZBOLUSDJPZUQXKGKRAGTPBVMAJOZCGSKSVSBERTNYABLFVVGYMRQHZSOCDXUZXDMOOHQAGSTUQNDHJISHDF");
    msg.fuel.assign("NNQQVOVVGXLGITCNGMDENJAAGQEHCZBSNUHPYVCWBOPMBMNWFMGSKDYMIOCAGAYSIIUTKMLSWPDMEYOFYRXIXTVGRKBQJPPWJXFBHNDISEIFFYUTVCYEBVBGG");

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
    msg.setTimeStamp(0.0349195079505);
    msg.setSource(65159U);
    msg.setSourceEntity(152U);
    msg.setDestination(29061U);
    msg.setDestinationEntity(114U);
    msg.plan_id.assign("TXOZTDVPOOKFNCIXBLGUEVPRSSMVQBRWUXKJXGAMUBQDEVPUGIWXXYYVDKSSDFCJKIKLZJDLQYBXNHI");
    msg.type = 121U;
    msg.properties = 118U;
    msg.durations.assign("IIDRVXAKHJTWGUIVMFZBKSMQWQAJRLEATHBYVRDVQERKOOFWFCCTXGGLESHBPRRYPHDMFCMYQBLOLIBHHOXDNGRKITHZXQERSVJNSWUVLZWNUPXQEASVCQFYMBUZAIDWMXSWFYMTZGTNBPSVCUTNTKVDOOXGZJBCHZRDJOPDLLUQBPXCJFUYPHJFPJGUSJYALULKWIYGYGYETGOAKKNEFKRMCTEZXEQBHQPPOIINNZMC");
    msg.distances.assign("QGFNVBSRGSOLBWDHOTMGM");
    msg.actions.assign("QSBUKANCBVFBTDJYGEWGDCAOZSOHPUYIGWJSFNYJPLKYTYWLSKDKHQHRTZAJDWUAXQHKCHCXJFRNCQVVEOLURNPBZJVMGCOEKHGYFFROMPWHNBXQJJXRNMCXOAMFDDWIOLIAQIVDGVKCLVCTKTESEHJGQWFEXIMRWRGZEJEHRSYBHUZLTDLXRWFPMTSYUIPOFKOQSUSOXNLFNINZZZPVTKMPYLZQDZGACGXWNBAERTMVILBEIAU");
    msg.fuel.assign("AGODKQQNQYARFPTGHOBBGGZLGIDOFHLSMTYAQLRDTXLNDNUSFKPHXLWM");

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
    msg.setTimeStamp(0.841138651951);
    msg.setSource(50703U);
    msg.setSourceEntity(201U);
    msg.setDestination(7847U);
    msg.setDestinationEntity(199U);
    msg.plan_id.assign("HLAUHTDMNRQCBKCXJPYAWLXLKKLSKEOVTVMVMKYDMYADGWIXCZLFBXGQVFORWTPIFRIVNAVHWLYTOEHMGPZBZQLQWXALCKAENSVPNCOUTCRPBMVVNJXOLNJSSAZIJKAGSPMQQDZQIVSJSAGYUBGTJTCYTWRGDAUWDBDOZGIYUOEJZNYRIGCYHDIBNHDKBCYIXS");
    msg.type = 78U;
    msg.properties = 222U;
    msg.durations.assign("WBGTCLNBWLXQLUAIFMAHSLYDFCWKOQR");
    msg.distances.assign("YTMMFLCRGWEFUHUTKWOFCDDLCNDWRTDEBZKGSFAONTKIZIQ");
    msg.actions.assign("DTBKHCYKGZYBOQAGVDUXJPJRGYTZDLSLANJKIDM");
    msg.fuel.assign("GQBFIJFUUGMDPRGJSVNTQCHYUPUTTBZHQODGABT");

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
    msg.setTimeStamp(0.188649283722);
    msg.setSource(37817U);
    msg.setSourceEntity(9U);
    msg.setDestination(18589U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.564926170041;
    msg.lon = 0.957116715433;
    msg.depth = 0.123534715552;
    msg.roll = 0.713442755843;
    msg.pitch = 0.749774807685;
    msg.yaw = 0.268115068505;
    msg.rcp_time = 0.769496848107;
    msg.sid.assign("ICJMGMVJJFIOHAGWTXAUORNSRMZTDBSZIRVQSXHCUPSLUUYEBNYHWANTRGGGEYDJIZORVPMTKKUOQCLTQISSLEXEKSHYIEQIMQNQOWTWXFVKGXGODZNYRXERNYANALMXIABNDUVBMQTVFPKYQVJECHBZXUOEFLUOPHDWKMUVRHWPDRFTWSPJLSBCCEBFHFBJDYLPKGVKDICCFXBIOHPDCSWNFTZTBWY");
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
    msg.setTimeStamp(0.978031483577);
    msg.setSource(35169U);
    msg.setSourceEntity(240U);
    msg.setDestination(31841U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.231375807395;
    msg.lon = 0.986563590645;
    msg.depth = 0.895774653808;
    msg.roll = 0.595013657323;
    msg.pitch = 0.963714955168;
    msg.yaw = 0.334342659881;
    msg.rcp_time = 0.622544745442;
    msg.sid.assign("TNSIBYGATBOGNMRNQTKTDPEPKGFHPKPGHERXNSFNCFEXOPUQFRKZFZBFGEOVWHZJXLVNRUREICDYDHVPADCTJWUVAPEWMUAJPOIZBLCZTSIUXHUSOWAFPYWKLKGLBDQOSYUBDSWGAJEZWSNCCUBXFTEVDSOOJVBHDWARKLQHRXKGIYJMMWQXLYIOLNIXEQTZCLMYGRJIDYNRJMFHZQXHSCAMYRLPZSFBQVMAIODTVLKWUJTQKJUVGYC");
    msg.s_type = 145U;

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
    msg.setTimeStamp(0.108154996163);
    msg.setSource(41967U);
    msg.setSourceEntity(219U);
    msg.setDestination(43741U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.286001810153;
    msg.lon = 0.545906294228;
    msg.depth = 0.123500278831;
    msg.roll = 0.298144319593;
    msg.pitch = 0.398589331243;
    msg.yaw = 0.996397344204;
    msg.rcp_time = 0.362642323713;
    msg.sid.assign("AUETJRSMZXILOBJWKAGRZKNORGWRZJGVKUJETKBSGEZVEPDCEMKLCDQHDGXBPSSQLIHKQTWUTEIVVHXFOWMGVJPFIBDPNKTTZNXABFTQNKMMDISRXENNCVOSJJUSAPGCYCWZHJLWPOTCDIYHLPQXYDSZLIGLFEGWIPCKFQLQYUOAGCZMHRQAXKLBIYFRZWVHFEDAVNAQWUQOWFLDAPMSYIXMONBZYHVTTJYUYURBUBHORVNSF");
    msg.s_type = 167U;

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
    msg.setTimeStamp(0.264940925948);
    msg.setSource(44277U);
    msg.setSourceEntity(45U);
    msg.setDestination(3134U);
    msg.setDestinationEntity(65U);
    msg.id.assign("YPVRUSQMHQFVWCFKYVXLSZQSYCFLMWSZWJVWTMUDBURIACPIEWSNIHTPTEFKDJCNBGGOSITPMGDXCEYXFFUZNKKIPNFZJRLOYMQYGRGIVAXTXQXVGCEWFLDFONMXECYJILRZOEIRKNZIGJBZDJJTHLIJVMBBWNRSMTTHBQWAAUDEOLABLUSH");
    msg.sensor_class.assign("MANQLCFHVAHXCVDTJAGUJJLDOXKYDBCSURGEWHBUCUNISBTCAJGFWBWYDUMBMHQXPJPYDNPTFWUZXRFMFOXPGQENCPGOFVWKVHKWRBNINXQTKZYVRRQMBQAQMOSRNEOLPIAHCENGYZMJZOWWGVSIZFVOGKVOPTZUITDXSCPETDZMBMEOWXQGXRYVHNPKTPKTZ");
    msg.lat = 0.114865298295;
    msg.lon = 0.904757759179;
    msg.alt = 0.0731952534134;
    msg.heading = 0.179184380999;
    msg.data.assign("MVCHULVQMSRHVHNMJAYCJAZVEGUJRZZXUNDORYIIXONCZWKZNWPYPCOTKTAYPITFEIVOTLRVJWKCKIYFCWVBLSIUCGRRYKLQZULVFSTBXDLYITFNNLBISQMBADRZIPAHJJHBPWGLXDMOKLOUGGPGWFQSPEBCJMSSWKHDKUTCAIHQEXGVJDMESZDACEMNXRTFAPBUDKHUQHEKWEQBPEOGU");

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
    msg.setTimeStamp(0.930685307266);
    msg.setSource(58110U);
    msg.setSourceEntity(53U);
    msg.setDestination(34943U);
    msg.setDestinationEntity(29U);
    msg.id.assign("WSSQGOBLDMHNXKYMTADTOKXUBZPQWLLRTOFHDAYBNKILLLPXANCBDILTZJUIEHIYQHDKEXTCOLRWSVFMNXVAJJBPCOXESNIARKYVQMQNWYOYWYGFMVGPZFMIQZTHHENGRASSUHPADCSIUZNDPTTICHYDCMUWTWOQGHMKYAYMXEORSWXPEJKFKTKQVGZEVUARZJRBRADBLUCFNXSBQUGGEFEJPBRVFCUJPDBVWZEJQFGFJWMILKOJRIC");
    msg.sensor_class.assign("UJNOQXYPEADCPPENPHTVHGDHOCJNNQKRJBLYBBCACOSRCMOMKJAUTIKRYUFJYKXLYMWQWTTUFVATGGIJCVVLOUMPKGEENZNHWCMVQCDKSZAVXEHWATVBOZIITBWSPKSHIVWIZQFKFZEGZQENQJFXQEGZDAFLXMMUKXMHOZAWYRL");
    msg.lat = 0.451934984514;
    msg.lon = 0.161809176551;
    msg.alt = 0.880302974107;
    msg.heading = 0.700985659197;
    msg.data.assign("IMLVSUQYRVXLIAGQSFBIXCLOMQHSRSDNOWSCLQIUCTKJOAUYDWXCJWCCUKXOXVYRIGPFTNRBDVUHYUXZPWSHMBIJNVFKULJEHZECYOECQODKTXQJHYKVNWPEVRRAETFAAJZYGFBWHMAMOKKDZGEMLVDPBFCKPJXGKQTXLBMMYNUNYZDIZUPWIISGAQNGSOQEVAMQRHDDZBTRXHGLERB");

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
    msg.setTimeStamp(0.156082231284);
    msg.setSource(10406U);
    msg.setSourceEntity(1U);
    msg.setDestination(8674U);
    msg.setDestinationEntity(143U);
    msg.id.assign("UBTFGFAWYZDVDIIOLYTGQXNHUVLMKDLGEBPNGHGMFYBUQPXWOFRDPRVSJCS");
    msg.sensor_class.assign("KJEXQJPUESGHKSVBNDXBWOEAXVZFNVJWBMYWDNZXMZGOVLTJWBFHIESAFECLTIROARMZKCNAFTSLHUXJYCIVZODYEDBKVQNGNKMOWXRZXVFQYQXKTRJGBOYMKUYOHMQRAURAVZPXFNCSQZETQSZDTATDCJLLWGMPPSVPWCHURIGIGFUFEDHQMOAHQUNQDIWSTPRFOFIHJKYGCBTSVKLCSATDMCGLHURYICULWRPBYEXLZJPKAPIMIWEBUNYNBH");
    msg.lat = 0.0905722375942;
    msg.lon = 0.46896964449;
    msg.alt = 0.786560152333;
    msg.heading = 0.246001848008;
    msg.data.assign("BSVLYQFOCFWUCXJFHOBRVLDXNDLBYRWRGXWAQLCRSZSAJSITIPHFKHZPTMRCZHQQYUXAKUVHKOBFDQCVLOSPXRGBUGPWPWGBXPXRFAZJMFKGJAFLNZBTZQJJIYEUTZWTIEQPNVVGUIGBRUTTNOKPKBMDQEASEMOPNLMZXVWLIHGTLMDKISYSKSZUGOZICIYRENMMWQCT");

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
    msg.setTimeStamp(0.525013412962);
    msg.setSource(20785U);
    msg.setSourceEntity(165U);
    msg.setDestination(53105U);
    msg.setDestinationEntity(10U);
    msg.id.assign("IBCOPRVSNTGPWZEJQPZFKADFHUGCJVTDCVXKBVAPDMSAHLKPTZLPMMYUFSRKIIWQHKRLJWNYCABUAVEADEOUPBEQCJEHQXJHKTVGIWWGSGMQQXCJYTUPZQCOVSHWBWNYXVZZIKNYINOCMAXEQBVLFUXDZKMYRFMAEMNHZRUADLGZUOUIFSLWJGAXOKPEFFYLGIOBUDETZHDLGSJWDHCOSNXHNXD");

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
    msg.setTimeStamp(0.675262729052);
    msg.setSource(36234U);
    msg.setSourceEntity(152U);
    msg.setDestination(1215U);
    msg.setDestinationEntity(144U);
    msg.id.assign("JZVVLJIOKSGLJSELICIGDDALIWXCAOTAHHYFWELJNRHRUHOJTOBNVYMSDPWGGJBDNTSIMGIPHZRLUBOX");

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
    msg.setTimeStamp(0.946503723727);
    msg.setSource(20075U);
    msg.setSourceEntity(215U);
    msg.setDestination(49968U);
    msg.setDestinationEntity(76U);
    msg.id.assign("LEMIQJTCNDLGEOXKEOSHQVRO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DAZCMQDJGSXLNXYAHMBZSEWGIRJIVTDPEPCLTPLOGROJBSKVLOFHEHBWSQAVTDWDZWBNFPAFNMTHVLRPCJCNIGOPBGLHOOVXSSKYWXSRMXYBUZYJWNIYPXHSMFJXZODAKE");
    tmp_msg_0.feature_type = 53U;
    tmp_msg_0.rgb_red = 99U;
    tmp_msg_0.rgb_green = 123U;
    tmp_msg_0.rgb_blue = 60U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.167915928492;
    tmp_tmp_msg_0_0.lon = 0.638055153005;
    tmp_tmp_msg_0_0.alt = 0.156142926705;
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
    msg.setTimeStamp(0.438333972124);
    msg.setSource(23519U);
    msg.setSourceEntity(171U);
    msg.setDestination(28221U);
    msg.setDestinationEntity(26U);
    msg.id.assign("YGXKZNYJWULROWQYTZUAZVLBEQYGNPYHNRWDCIKAAMUNSKPITMRYSUREBNUGVKOJSIXXXIZJSHJFOOQKLKWZAGBQCQJUEPKUAHQBSZKRBOEWXPXOQJFLHVKEIHXTEPDIAMCNJDVZHEEHLUSGSNDDYWYCMCDCUMRCRVTZSHPLMXFSJBRALMTOFRSTVPALTQCRHNAXFMDOLNPFHIQOIMYGQUWOFWAJPZDVTLDVCYGBIWVG");
    msg.feature_type = 130U;
    msg.rgb_red = 35U;
    msg.rgb_green = 222U;
    msg.rgb_blue = 151U;

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
    msg.setTimeStamp(0.633882392076);
    msg.setSource(44397U);
    msg.setSourceEntity(90U);
    msg.setDestination(49617U);
    msg.setDestinationEntity(159U);
    msg.id.assign("OGFFNPKPZCJTXLFBIJNLHOYFVDZFITDBQWACGULDQIBOAZCKMWSYMSMHGTRAIHUKVWMRIERIDUKJXOXKPRGQVSOAIGHNKFFUMXEXNTYYVGMDEUOWHJVUOOYVRUBKMZPXIWZYRVPATLJSEHETVQCUPNIYXLLEBXPXGWNBNVFWUNEKWLHEUJSJMPRAQQRYBOCDJHWSDNQBRCFPSQTFSJICSLTZNGE");
    msg.feature_type = 50U;
    msg.rgb_red = 179U;
    msg.rgb_green = 107U;
    msg.rgb_blue = 52U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.685345059598;
    tmp_msg_0.lon = 0.881988033051;
    tmp_msg_0.alt = 0.331025641792;
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
    msg.setTimeStamp(0.870096303087);
    msg.setSource(45225U);
    msg.setSourceEntity(251U);
    msg.setDestination(19608U);
    msg.setDestinationEntity(231U);
    msg.id.assign("HUCNWKPCEXIBTDWPLDRIVMDXAGMAKNUMKZIGRXUWVHAUTPRIYLKYTASPPWIAWBIYQBVEGMCDNBOJFZGJRVCIYHSRCDTFBZVMAZJBPVRTPKLWLFVOQFSKZWICDNFJANMRSLFQRUJBCHLZVQWEBUAUMIENKNFOGXXMXWTSPFYJUADCKDLEXNQSQYOJEBOZQKOTFSEYYMJZX");
    msg.feature_type = 64U;
    msg.rgb_red = 62U;
    msg.rgb_green = 56U;
    msg.rgb_blue = 181U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.128034623926;
    tmp_msg_0.lon = 0.180329159958;
    tmp_msg_0.alt = 0.0500232900724;
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
    msg.setTimeStamp(0.721814169801);
    msg.setSource(54870U);
    msg.setSourceEntity(60U);
    msg.setDestination(32734U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.131910169492;
    msg.lon = 0.639831196339;
    msg.alt = 0.0700317911794;

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
    msg.setTimeStamp(0.62147373945);
    msg.setSource(4275U);
    msg.setSourceEntity(135U);
    msg.setDestination(45980U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.260530365644;
    msg.lon = 0.829775827559;
    msg.alt = 0.872961318159;

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
    msg.setTimeStamp(0.491661629379);
    msg.setSource(16781U);
    msg.setSourceEntity(204U);
    msg.setDestination(3640U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.331265879152;
    msg.lon = 0.813514496244;
    msg.alt = 0.590098372581;

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
    msg.setTimeStamp(0.87010366217);
    msg.setSource(27993U);
    msg.setSourceEntity(149U);
    msg.setDestination(20875U);
    msg.setDestinationEntity(51U);
    msg.type = 53U;
    msg.id.assign("FQJLGFNPUBSBSTLEVKGZIZKXODTMTNQIFSRAHWJB");
    IMC::DissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.65106980446;
    tmp_msg_0.type = 125U;
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
    msg.setTimeStamp(0.969494565136);
    msg.setSource(26397U);
    msg.setSourceEntity(227U);
    msg.setDestination(29766U);
    msg.setDestinationEntity(38U);
    msg.type = 158U;
    msg.id.assign("HAXDJLGQYJZMEONUYJGBAUSBEMFHAKOMRNTZWZNCLOTVTWMZESSHFHIRULRKPIZPQLRRFJEDGFBQVWVBMOFVPCYAIIICDHBOHNEUUFVMEXUTANJKKZYXAYDHZJQABTLMGZQUJXHXBNSTODNFDSRCRVKGUQJNLMWOWZS");
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.518503599622;
    tmp_msg_0.y = 0.406111602699;
    tmp_msg_0.z = 0.855790716332;
    tmp_msg_0.t = 0.599699155541;
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
    msg.setTimeStamp(0.323434273857);
    msg.setSource(31129U);
    msg.setSourceEntity(127U);
    msg.setDestination(45616U);
    msg.setDestinationEntity(202U);
    msg.type = 218U;
    msg.id.assign("ISALDVCUBJNUHFSMIZEPPPNQYYLVKKLZUZVOGISUTHUTXXHGSWAILR");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.375273805419;
    tmp_msg_0.x = 0.506933945164;
    tmp_msg_0.y = 0.702205056975;
    tmp_msg_0.z = 0.267583545017;
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
    msg.setTimeStamp(0.100045836684);
    msg.setSource(10089U);
    msg.setSourceEntity(157U);
    msg.setDestination(63277U);
    msg.setDestinationEntity(111U);
    msg.localname.assign("HGMQQAUVWHYLSCLDHWPACIJANOPZBZJPEOBMPIVUYFYGGUTCDMPOIFFBXRZICMFDZKLWRCITFCKVODXRCFVWLUVJAGPENRSLZARSEEYCPPJLBZEKYDTODFVXFKQMK");

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
    msg.setTimeStamp(0.0572939398842);
    msg.setSource(54744U);
    msg.setSourceEntity(215U);
    msg.setDestination(33624U);
    msg.setDestinationEntity(33U);
    msg.localname.assign("DFMUFXQYJNZGVARBBUEPJPSABBKSBMMPZXQKVDOBDAEVHGOGCFEAOQFOJUVTXGQDLWXKSTLMRHUMFSNKDIDCELNCRCXAZTTAJPRZBXLUMLXSVLOTPKOHOPWRDPNTNGKMBNLUJONRIAWXPIJHIJNTCRYKPZJDIVMSGISKQWECCVFUXWPQZVYCCJVQANBYNSHARLSUUGGFJ");

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
    msg.setTimeStamp(0.800196113349);
    msg.setSource(23400U);
    msg.setSourceEntity(203U);
    msg.setDestination(52792U);
    msg.setDestinationEntity(235U);
    msg.localname.assign("TMLHEOHDNPRGZOEGLJWLYKBOXNXBLYXAOJIVGMMWZNHSPOYUMKFDJQCMHEPPOTIQVEVJDLZMQSHAWGDYWKNBFEGXEFOBJZKJIWNJFTYJFYFLDQCODMONSYFNKIWC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TKDMAENLKAHGZSMQTWWPFPTYGRPXJQOAORTXFIXHAPQVUPTUNSJIZCRWICIGROFWZQVPBBOVALAHMSEVLCSNCCXDVJUYTSOOMRAVBRGXXIKGCKWJQBGYKQFSFJKEGTBLDLHEFXJYRMRDYWAXZEVFMTENUUJDNHSZYOFYMDBLKGQUAVSVSOTFOBYZHMNYUNCICTPMBVNRDQFSLZUZ");
    tmp_msg_0.sys_type = 96U;
    tmp_msg_0.owner = 31765U;
    tmp_msg_0.lat = 0.604242544592;
    tmp_msg_0.lon = 0.721297863121;
    tmp_msg_0.height = 0.949567901166;
    tmp_msg_0.services.assign("WOOBEPPZOEZGTBQCXJZPHIQVYHOKRFORJOPJICNHKBUHDXWJMQCGQWVKNCNYURTMUSAFNDTYWLHMVXRIOZDKZAEUJIDZINYPMBMDQWPLHQRKWGAUQXKNFAPGLZMMWCENHTORJVXKAXBMYZBQNLHXFYEJTCXRUUIHWLWLERFFCFCTZDTIUUJOTEPGLSXSIFHIVSNTAEDUSVQNFIVTPRDJPLBXGACKSKBGLVASLWZESVAYVSEGGCDYYFAKSDQJG");
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
    msg.setTimeStamp(0.363614135487);
    msg.setSource(27678U);
    msg.setSourceEntity(211U);
    msg.setDestination(4027U);
    msg.setDestinationEntity(101U);
    msg.timeline.assign("EFXQMHIWAVQPDTEIHJAUVHVLUJRLPVPBQHLMBWTPT");
    msg.predicate.assign("JFTSLVJUFZDTPCBNAWIGIGAOFXNZGQKZKLWAPUOKYXEGMUWRQOOSFPVWGDCJEXHWPXQKXGVVTADYMQUAUWZSIIERQOJIFDIJECNFOHJYJWISZRHDSDVJPBKCRUGJHIMPCNKCHKKAYMYENDXQAGMKRXBVTHNNLCCYCYMBSLRLADQHXEEBEZBZMUUMARZSLQOBELHNAIJIYZPHVWBGBZYFRT");
    msg.attributes.assign("NWWGYKDMPKEZAEMOBSZWGIZBMAATQKEPLDVREXKGNKXHOSLARSMBNZXLXVUPVLUIVLJWQSNOTREGOEHFTHPPPEJPYCGAAQIKUVGTRMBFUSXWMZJCTFIIQSVAKJYBDSGFXQWTKIRZQCDMUGZ");

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
    msg.setTimeStamp(0.396970891687);
    msg.setSource(45210U);
    msg.setSourceEntity(213U);
    msg.setDestination(41973U);
    msg.setDestinationEntity(224U);
    msg.timeline.assign("SJKWRPTKACUAMXQCO");
    msg.predicate.assign("EGPDFSTRWLCQJESZGCOSZKFNHPSNHVHIXIKZHQFQQWOVBLTZDTULQWBXZZRICK");
    msg.attributes.assign("IHOWXOYSRGEPOBYLHPTWDEZNLDETODVZKRMWOQDMADGXVGGJFLAYMBKHWRKCPXO");

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
    msg.setTimeStamp(0.749818392613);
    msg.setSource(15677U);
    msg.setSourceEntity(103U);
    msg.setDestination(37941U);
    msg.setDestinationEntity(227U);
    msg.timeline.assign("IEASHCAXRMNGPMBLGOHDLQVWBPZHQJWQWVURMPNMCFWHVQWISLZVUGXHFHSCIXZ");
    msg.predicate.assign("MBGARVIEIJBPGPFBSJEILKWMPLAFBQEUX");
    msg.attributes.assign("JSRHGRRDMVLYHITKEABLGOJVHUXLDMKJUDLWKXAUPZNDVVACXKSYYANREDTTUFJCFVMOILXHYBGJEWQSGWVKGKZXBVTZLUKNPQDRBPCGXVNZDQITKQHQFOSAIYNXZFFCHFWIRYZCEODMWYWTBOQSNCPOMBSLPQQOTFADM");

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
    msg.setTimeStamp(0.541366324741);
    msg.setSource(10871U);
    msg.setSourceEntity(217U);
    msg.setDestination(46135U);
    msg.setDestinationEntity(215U);
    msg.command = 83U;
    msg.goal_id.assign("QBUOJWCSQCPSXCFOEKANMEUIUMPOFQDWECTAK");
    msg.goal_xml.assign("EJZNETXLLMIZGBQRHPBTELUQEPOWCNJGTIPI");

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
    msg.setTimeStamp(0.796750939018);
    msg.setSource(33316U);
    msg.setSourceEntity(219U);
    msg.setDestination(63813U);
    msg.setDestinationEntity(232U);
    msg.command = 198U;
    msg.goal_id.assign("HKJEDNWCKYNCQNYPYSMZVANZYFUWLHUKRTSMUMHKILQUVJRHSILQVOYZRXXJRCQXTIJGMVUTMKEVBGNNPQFDRMOKCWBAPPWSROQWUZYSFVKOEYHIKXGHTDPFENTPDGIXPSIXFMVZEAZEWGHUBLQRZOWMDJPSAAFNDVEKCBLSYLETFSXFGXAOUHAXIJFCVQRTWADIPIOBEUBDNBLHGMGFNGYKGRAVLCJWIMZBADZLHOLOBYWQBUJJTQEXRDCC");
    msg.goal_xml.assign("QVDPHOVTQSUIIBMUAYZJUJGAJLQBJJGCZWTFDRSUSFSWNQWEFMIBIPAPOWLGGASXTXBLAYGTNLXHREGOLXYIJDEWTYUPKTSYMQPWXONIIVIBUDCKRMTMFFKVVJLOKKOWCHBHDPOAYZNPZHHRFFQNWGTCTXZRUFRCHEMSAZMLOGJSAPKEUSNQUKDVIWCGBJAMSYKILZMMNVHFOXZLRUQEXKNDWBXOZTCQABDDPXBZLCYHJNVCKRPRRGEHQNDFV");

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
    msg.setTimeStamp(0.743118462526);
    msg.setSource(21607U);
    msg.setSourceEntity(246U);
    msg.setDestination(21539U);
    msg.setDestinationEntity(243U);
    msg.command = 79U;
    msg.goal_id.assign("CVRVODKZTWTRACSWYJCNJSQOUSGBSEJCDHUKTEUQXOVTJCJNLZVGKFXAPGEWRHFZPZQXCKGHLGCZCZS");
    msg.goal_xml.assign("JFKBDYDIAPYDMROFQMCFIOVCMEOVOZCWDXPXFDSGZBTNPNTUSSJUKVBKOYJUJRJYLTHDWQVQECSRFWPWNSACRTMACGQZ");

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
    msg.setTimeStamp(0.283571720237);
    msg.setSource(10359U);
    msg.setSourceEntity(21U);
    msg.setDestination(65423U);
    msg.setDestinationEntity(237U);
    msg.op = 110U;
    msg.goal_id.assign("CBEXTJPJGWDPUMURMSWFGOWOZSXVGMNDQEIKZQCACLAYMJEWENNJKXRWDDMFPSEQOWBVVINPXZUDPWIYWUHJUSPQNARKAMKHSQNFMILHABXHQCTDUADIZLCUYYNVFRBPSHKCIHKQRTKLNTMOLPOOJABYWVCGTYLZHGKPXO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LRTTPBTONWKAKVVDVRUOYUQAJFMSCDYPCLMDWCMJTOUQIESBPR");
    tmp_msg_0.predicate.assign("QXTDSMEYZYCFFJWEHPUAJDHSYRQIZCKLNGDTZEXCXDICHBMHEGZVUTHIQJLSCOUERPOFOMTBQBZJBWQFUASXWPIGDWOYBBDQMIMJELXOWQTF");
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
    msg.setTimeStamp(0.248692099256);
    msg.setSource(38110U);
    msg.setSourceEntity(252U);
    msg.setDestination(24181U);
    msg.setDestinationEntity(27U);
    msg.op = 150U;
    msg.goal_id.assign("QYAGDBJCVRSSRBGWDFYHBNNCOOLIFJYMCSAFZMGXJSMXFIBLUKYGWPWPGKHVSTF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BGSRTWHYHXZFFUMXJERRPXNPYDMLNCUGOIEKRBMBFOREUOQCCMPPPEKAQJGZHBEIEKDOJKZZWULDBKSBDOPLZLTPXLFOGKTQEWXBFVTGAAZAT");
    tmp_msg_0.predicate.assign("FFKOQGJQOEGGRWBXWUJLSBXGGRTLHVONPIA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DIHAXIFZHQUTRNMFWGTWAGFBGLIRLTARXKZPEPEPWSNAMIKTZMSYHCJBDWRTQGEDMTOXZEOQJQPMRHUIDMCWHFKXXVLMXIBQDQGWKAVYK");
    tmp_tmp_msg_0_0.attr_type = 216U;
    tmp_tmp_msg_0_0.min.assign("LNYRYEDRXBRBXWHRSOHSMGDPITFJKRCWCXTPQMYARXXLJZCTJPVILTLWUBFNDWECDQBNBKJOKFFPONBHFZUQWXJMQLFPKGHOAQARVPESNKFVBHYCEEGVNCQEUUSNPOISJIMZIYOITNSETRAHEUKUNCPGGKYDCDGGHXTEOQXDKFJHXMIQTCIJWFSFLITEQDWUMHZYRWMJPBZSRKQAZOWZMLBYVUYAPUVXS");
    tmp_tmp_msg_0_0.max.assign("JJRPZKEKNQGYFUTIAADLFPZRTGBHETURKYJGNHOBGEF");
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
    msg.setTimeStamp(0.72856100027);
    msg.setSource(63195U);
    msg.setSourceEntity(162U);
    msg.setDestination(45059U);
    msg.setDestinationEntity(181U);
    msg.op = 22U;
    msg.goal_id.assign("BNKZSOWTCCYJRFJHMVMWZWFJXOUPWPQHUDCSTVADQTDKXGHZTIZBVPWGPLXBJREWSCUZKPYJKMZRXFBZULTZDHBOCDAOTPNXHELNZGJSUWEXNKEEJSSWGXMIEYRBQRFSSRCIEGHCQCO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EDWJKQVUIPRJQWILXZVRAFKFGWROWOMCGBPECEOXF");
    tmp_msg_0.predicate.assign("XQRZDXWTFGIHVA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TKJOLCQPNKOJTPQKUCQJWMSRRGLDZFEFKGOWCOCSMFTISRCQMMATIGQDVNTTJBXHENBSXPKNAJWBRGLUNVEAKVCGWVSTYAIZZLWLZG");
    tmp_tmp_msg_0_0.attr_type = 34U;
    tmp_tmp_msg_0_0.min.assign("GGSQDGEVWSVXGTUWLKVHPVFHKIGNCDRBAGACNJCPXUBQFNLERLDNBREUSFEIJRJPNVJDMUFSDBOYCDWTXDVJFTYNLBTIAXLSEOCUMDZEZFROHUAMIQYWWBIAPSRPAKVCZARCKBOMPFGTYEFCNITHILAOYXOTPIGLUSZHRHKNKHJBKXWVQH");
    tmp_tmp_msg_0_0.max.assign("CDZGPYPHOQNPQJHGURDSAAQWSJYWOTGSUUAJAFGEUFQIJGQXVHKGMKNATJEEKINORKLIGUWYZWXXFPHVZOLBYIDJNXEAXRJZVDFEHCIN");
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
    msg.setTimeStamp(0.700870847347);
    msg.setSource(24592U);
    msg.setSourceEntity(168U);
    msg.setDestination(61250U);
    msg.setDestinationEntity(137U);
    msg.name.assign("CELKXCBSTVRQMPLOTWLJBFPAAKDTMAZDGKIZTENURONRCKCMKCYDJWMLAVGNUWSSIWUIQEKSPYBFFLHKHLWOYPYPMTUWGXHOXASISRZZTWGXEQCLIMVGIBQVXKJHJTARSBQHVVJQJTWOTVFRZEZMJXHMNBDNJYAEDPXPRFUEBVLSGQFOXHUAKMGYEOMNCBCPZWQEQJIVOIDHFFYFZHRPNRDBWNGNHEDYZGSURXCCGYLAIAYBXDKQ");
    msg.attr_type = 197U;
    msg.min.assign("NDKLZPOZFHKXFCUFVNBQHLETGMQGHXFHSQDWTGUZBSXGEVFOGCNWPIOEKDSRHLBZMDPHNMWKLXFRAMXEYLYPVIJRTYUCVYTZNIRALDCULOVTCYSJDBQQQGMEQJGYSIRCTDPKNFDZKIFSJAJSHKEAALAVVLKUITBBWDUSBRZDZOBEKPJSVIKOMPBACAOCQHPXYOCGMPNNCMVIHRZTNXJU");
    msg.max.assign("OCKEZSCTBBIVYGVARBKOXSIARVHCEJPCDHUYCZIWXTBSBLRXUERDRHMCUQSEOZKFQQMGZWUONFFOCMRXAAMXZBKLYMSVNWKXWPWFCAXPAYDVSIPNBELYAXKPIWFDTNYMUYHKXODWUIFPSZPZSIJGMQQOSOTVBLFFEGKJBJDGJTBVWLALAHZNCGLWY");

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
    msg.setTimeStamp(0.374838553225);
    msg.setSource(2512U);
    msg.setSourceEntity(134U);
    msg.setDestination(7447U);
    msg.setDestinationEntity(112U);
    msg.name.assign("RCUYAWJHDLJILBEEDPWGMHUNERPISLPZPGITVSTTJSOTGERRJZFQKFVCFDPEUPMGGJVUHZRQLTLSXWHHJOOYCKUXIOEPOBLN");
    msg.attr_type = 88U;
    msg.min.assign("UFUIVDQPFRHLAEWDZEJBQTIVHUGFQCLUNJZXIYTQPXPFWSKCXOUX");
    msg.max.assign("JLLWMHJTICWZSESVWMJOERCYLMMPAGOGEVJJRTRPJMCORTVLRSOGABCCMYEULGNEYSNCOLGOOZWEISUAFVVXWZQUNXNKTHUXNHIZDFQSDEULHCBOIMZYWPFNPPOXXKVTRTRYQQHUMNIAQBZVRBXZXNQBCOPLLDAIYKFHWPSSDWADXTENDXLWKBT");

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
    msg.setTimeStamp(0.184254466401);
    msg.setSource(8838U);
    msg.setSourceEntity(182U);
    msg.setDestination(58608U);
    msg.setDestinationEntity(28U);
    msg.name.assign("FPTVHHRULGJDHWWSSXWLOYBVGNILBVRULEXQXWPYUVLPYBWMHRLTYKFTQICIGQCYALDKJLACAVPZJ");
    msg.attr_type = 253U;
    msg.min.assign("KASJCSVTOHREEOUBSRPFGNHQREIXVWHQZBYPOUTYJHGBRNMQDZRGYLZYJLLLTPYZPCTUTJXZDTJNYNQFGJXXZMZKWLMK");
    msg.max.assign("OVYMDUEMCZXTMGJNFPSGHETFIDXINFOQZIWVWXEOZBZCHKYLGZOCPPBCRNTFBWKOVIFCEFPCDYIGNHRYJGJSNYEZIBKAVMLISNWTFDDTTFRSZSVYWRJDLTTHUCPXUYLPGESWWIJXACKLGQQMABBXLYLPJUPWLSMSXEAPAKSQGOVQUVHRAQCDONZEJKJKEFQLGANNMBHHALRRVFMOVV");

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
    msg.setTimeStamp(0.359815874841);
    msg.setSource(43718U);
    msg.setSourceEntity(94U);
    msg.setDestination(33437U);
    msg.setDestinationEntity(134U);
    msg.timeline.assign("SXWJGOXKOBIADLGFYHZPYQMJMAYTVFHCUHWEJOKFFWEUUYWIJHGFSYQQDICCUUGFMLQEBTCEQZRAMEIDVPFRIILNURFJR");
    msg.predicate.assign("HCLPLXZJDVOAKVENQAIMGIYWJBPNRSJBHDPFVGDFSYSMPRTUKPARSZALWQCHKZWOAURIJTYPUICDRRVGLMQVHRNOIGALFXLY");

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
    msg.setTimeStamp(0.464565855694);
    msg.setSource(53487U);
    msg.setSourceEntity(111U);
    msg.setDestination(49147U);
    msg.setDestinationEntity(54U);
    msg.timeline.assign("ZRUTKVRGIFWJKBGVTLKJPWHJQMHHCEFQXSXJPLRJSXQCXTZHBHDLPPUEURBZAPPSIPNYLKXINDCTSONQYZXUAOMTTRVTLYXABGOIBFGORWMGEWEWDEWBZRNCYBAJLSVTZFJOIFTYVQAAEDUYWABHWCNPJFHSINBSYRZFYVBGQDUMCDLPFMZOKSHMLQKKTGWSSQZZGUXUDRNXJPO");
    msg.predicate.assign("TJXQYIZLXDVTPSSGIWIRQWLMLWPHUED");

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
    msg.setTimeStamp(0.0412383031576);
    msg.setSource(52901U);
    msg.setSourceEntity(96U);
    msg.setDestination(53804U);
    msg.setDestinationEntity(38U);
    msg.timeline.assign("XQELRPBUAWTKHYLMDEFVMOFGJTFQVGBSMSEVPBOPQNURPHBIIJGBOANOEKWVGXHEUVZCPTYDJVWHCRUCFUJELFTKGMKGZSZCOVGXUJTXQNIZJYVLIWRMNWOUZ");
    msg.predicate.assign("FBSNLMLMRBMVNEXTOCLXIQGBBLLOLRGVQZSRJJASDQHJIOMMQPULQFETNTZWOIRIFVNCSQRKVTTMUYUBCTBSJDYPINIJIFWHBQGIFEJMUUEVIYDPEDZYSTEYCCEDPVPCXLPKWVQNPTQAZHSXXANJDFXGVJKRAJWZDRAAGUKWGZHRYZFHSDCUKYGSKGRFWNPOOFAKMASUYXMAEFICCZ");

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
    msg.setTimeStamp(0.197534748104);
    msg.setSource(11619U);
    msg.setSourceEntity(254U);
    msg.setDestination(8555U);
    msg.setDestinationEntity(85U);
    msg.reactor.assign("UQDRZXPEZFQJKFLPXIXLZAZYCTWBYHYHCUQKGOZDZTBONUEFCBQBKRERLR");

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
    msg.setTimeStamp(0.795279497565);
    msg.setSource(26289U);
    msg.setSourceEntity(164U);
    msg.setDestination(60219U);
    msg.setDestinationEntity(205U);
    msg.reactor.assign("VCROQJZFAVGVVEOEQQYAWHMJOOLDOAQKCJIKBCKPWYGTWFLKKDVZHNPYSQASXEXNFEETXRUHRFQRIPBLMJYZZGWFMSBDXLPZUAFZOGMSFARHIHNJUDXDQCPCCTGIIRS");

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
    msg.setTimeStamp(0.178750403509);
    msg.setSource(38969U);
    msg.setSourceEntity(14U);
    msg.setDestination(512U);
    msg.setDestinationEntity(10U);
    msg.reactor.assign("XKTSLBLTTXYPVDJNSGCEVNLKGAHQXYDFCLKKKXFEQRRRJLGHBPORBAACAAWDMJZWIEBJPHONUJVFQSKOUPZMHFRPYEFISWOTUZVUJNMKDPUJIXWQPSMTSBWIWCINZBVSRMOXYUKOOPBQLBTEGMEWNYHUGWCRYMMXMOPYBJKJANY");

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
    msg.setTimeStamp(0.857561606386);
    msg.setSource(23414U);
    msg.setSourceEntity(198U);
    msg.setDestination(15502U);
    msg.setDestinationEntity(133U);
    msg.topic.assign("SUAYVNZNBIMVJJGIIYCOXWGMMAKGFJWQSW");
    msg.data.assign("SKIIXMBXFJGJHXTELAQJ");

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
    msg.setTimeStamp(0.560686018894);
    msg.setSource(45134U);
    msg.setSourceEntity(138U);
    msg.setDestination(53053U);
    msg.setDestinationEntity(1U);
    msg.topic.assign("WPWDSUVYHGTUUZZLFYKAIVGSHETPSIEFBUSAGNRMHDBKUYLEQLFXKPEWGNFKRKSKDNYJSBQHCJHHMOMPEMRPAGTBJYVIUJLMLOBEZYONVJLQATRVAQOCDDNSRENYVQVLCWGMCTOAIZJFKLRHWQMYSQAVJEDUWRA");
    msg.data.assign("KWDLUDUHHHOYBLLJHJOVTTRISEUVCZPVALYEBNBAWFCCGDTEIRDSIREJERFLYZYDKNCCFNVQOXSWZSIGTFEFKWTJVQTMUGALPADSINAMGYGSJTK");

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
    msg.setTimeStamp(0.759780711332);
    msg.setSource(5881U);
    msg.setSourceEntity(229U);
    msg.setDestination(8036U);
    msg.setDestinationEntity(52U);
    msg.topic.assign("FXBNQIQEIK");
    msg.data.assign("GITILQXCGGTLLXKQFBJWWHXFNFYIMTNJEUFVZWRONBQSMKZTIEMLPAOXRJXZLRDNYNP");

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
    msg.setTimeStamp(0.804312440928);
    msg.setSource(32556U);
    msg.setSourceEntity(7U);
    msg.setDestination(41940U);
    msg.setDestinationEntity(215U);
    msg.frameid = 241U;
    const char tmp_msg_0[] = {76, -44, -6, -21, -123, 34, -30, -89, 77, 84, -115, 93, -76, -49, 38, -82, -8, -84, 63, -112, -127, -122, -111, 43, 78, -26, 52, -79, -4, -117, -128, -18, -41, 77, -102, -67, 45, -54, 21, -120, -78, -121, -74, 47, 70, -44, 79, 42, 52, 66, 49, 22, 45, -110, -65, -9, -101, 24, -35, -115, -107, 65, -35, 96, -26, -98, -106, 56, -14, 113, 47, 68, -91, -88, -2, 102, -76, 22, -107, 31, 67, 46, -71, 123, 84, 14, 94, -84, -41, 30, -126, 72, -102, 95, 88, 41, 9, -80, 87, 123, -118, 91, -87, 123, -24, 83, -116, 101, 33, -29, 3, 113, -43, -114, 75, 82, -116, -114, 125, -112, 62, 122, 100, 25, 45, 63, 29, -20, -90, 85, -113, -54, -116, 74};
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
    msg.setTimeStamp(0.167955539696);
    msg.setSource(5334U);
    msg.setSourceEntity(64U);
    msg.setDestination(5765U);
    msg.setDestinationEntity(87U);
    msg.frameid = 220U;
    const char tmp_msg_0[] = {117, 112, -44, -77, -35, -74, -81, 52, -22, 107, -86, 0, 101, 15, -36, 40, -3, -29, -80, 41, 31, -91, -29, -112, 96, 107, -96, 115, -10, 43, -107, -124, -109, 111, 124, -23, 95, -123, -37, -17, -54, -67, -5, -26, 13, -105, -37, 52, -12, -3, 90, 9, -72, 114, -71, 23, 40, -125, 19, 36, -3, -41, 34, 103, 81, -44, 48, 102, 86, 94, 3, 33, -5, -54, 12, 7, 104, 101, -72, -114, -5, 115, 78, -9, 16, -86};
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
    msg.setTimeStamp(0.336919432003);
    msg.setSource(57833U);
    msg.setSourceEntity(246U);
    msg.setDestination(49931U);
    msg.setDestinationEntity(65U);
    msg.frameid = 113U;
    const char tmp_msg_0[] = {-39, -68, 59, -15, -42, -76, 54, 72, -41, -34, 34, -13, -36, 7, 61, 68, -35, -104, 111, -7, 86, 40, -2, -34, -126, -122, 52, 57, 119, 35, -102, 3, 99, 114, -85, 11, -54, 43, 98, -95, -35, -21, 94, 76, 30, 119, -63, 125, -42, -62, 31, 32, -96, 45, 3, -3, -45, -117, 84, -34, 50, 113};
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
    msg.setTimeStamp(0.483906214873);
    msg.setSource(65084U);
    msg.setSourceEntity(144U);
    msg.setDestination(47084U);
    msg.setDestinationEntity(12U);
    msg.fps = 26U;
    msg.quality = 162U;
    msg.reps = 238U;
    msg.tsize = 205U;

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
    msg.setTimeStamp(0.990434208953);
    msg.setSource(45924U);
    msg.setSourceEntity(146U);
    msg.setDestination(25188U);
    msg.setDestinationEntity(241U);
    msg.fps = 85U;
    msg.quality = 171U;
    msg.reps = 152U;
    msg.tsize = 213U;

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
    msg.setTimeStamp(0.285291246654);
    msg.setSource(38038U);
    msg.setSourceEntity(121U);
    msg.setDestination(57799U);
    msg.setDestinationEntity(61U);
    msg.fps = 224U;
    msg.quality = 104U;
    msg.reps = 248U;
    msg.tsize = 33U;

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
    msg.setTimeStamp(0.672843555582);
    msg.setSource(30762U);
    msg.setSourceEntity(168U);
    msg.setDestination(44526U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.826340571244;
    msg.lon = 0.360766545589;
    msg.depth = 60U;
    msg.speed = 0.0592129392297;
    msg.psi = 0.958016786416;

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
    msg.setTimeStamp(0.799447583029);
    msg.setSource(29221U);
    msg.setSourceEntity(3U);
    msg.setDestination(47761U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.96684132246;
    msg.lon = 0.74562338359;
    msg.depth = 78U;
    msg.speed = 0.245177932876;
    msg.psi = 0.357551591916;

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
    msg.setTimeStamp(0.740766971025);
    msg.setSource(53204U);
    msg.setSourceEntity(163U);
    msg.setDestination(27187U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.0920002757056;
    msg.lon = 0.302717059146;
    msg.depth = 92U;
    msg.speed = 0.674858173598;
    msg.psi = 0.577670175418;

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
    msg.setTimeStamp(0.258687795278);
    msg.setSource(38392U);
    msg.setSourceEntity(102U);
    msg.setDestination(57049U);
    msg.setDestinationEntity(222U);
    msg.label.assign("NVABOCLCYWVSRBVINXTYEYPWUPXJQOBJRAKNJUWTBIZNLANOWIRDUGDBWYIDZOEGZFVHHSYSUSICBEJGLDKFIPZCZNBKMMESBOJTIM");
    msg.lat = 0.0577914607664;
    msg.lon = 0.124080426619;
    msg.z = 0.465530815095;
    msg.z_units = 194U;
    msg.cog = 0.721031405633;
    msg.sog = 0.405303114555;

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
    msg.setTimeStamp(0.731035707489);
    msg.setSource(60283U);
    msg.setSourceEntity(28U);
    msg.setDestination(24475U);
    msg.setDestinationEntity(252U);
    msg.label.assign("ZZBYNEZYGHOGRTPPCRYAXMVASOWISMBFPVVHAOSVUVCVFIZURIPXZPWCBLBHWGHYMODPOQBXBLKQKTJLDCBVUNFNQKCGIPJSSIEWSNJAQKAALWLCCDDDWMNKLRDFXJZNQGUFZOEKTSILEVYDRCITHEUQDNTTAUGGFIOGAXBEQEBWPYWWCTJWYXYKZLFRGFUXRMVTCHFQRKOYMFTIPX");
    msg.lat = 0.184314842353;
    msg.lon = 0.34132916617;
    msg.z = 0.489292313652;
    msg.z_units = 87U;
    msg.cog = 0.143228713711;
    msg.sog = 0.669470188154;

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
    msg.setTimeStamp(0.317288729938);
    msg.setSource(4254U);
    msg.setSourceEntity(252U);
    msg.setDestination(46750U);
    msg.setDestinationEntity(218U);
    msg.label.assign("WGPJAGWSTRRNJVUAEVISWWFYFWRHHSUGAXOGXKZRBQNWJIAVHPMEQLFGKDSOUTLHFNBIDYIYOHNSALGCAZDQYEPUYJXTPUGIWXPZDCTBCMDSOCZFUEDJRLHTNHFMOZIMIZEKSCEXRYNQKA");
    msg.lat = 0.707173296134;
    msg.lon = 0.0257698319374;
    msg.z = 0.739781991598;
    msg.z_units = 189U;
    msg.cog = 0.619502583191;
    msg.sog = 0.594952456722;

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
    msg.setTimeStamp(0.516362947353);
    msg.setSource(52092U);
    msg.setSourceEntity(125U);
    msg.setDestination(62541U);
    msg.setDestinationEntity(24U);
    msg.name.assign("TIPMWHOYTGKHSQZGWVYEKRZNPBLNWIXZAWRXPYFKGMJBIOCXFLJISTZQCIEEAUNFMVJFZHFUOJGUVMXYFYJWWVKROKSAYZQOZEDKSGSTRUPVGWEXFAWONZEAYHMQNYNPOKDTYXUYAOQLAQWUTHQPDSGDRVWACCBRIMZVVBRZFHLJDBTIESQ");
    msg.value.assign("NFFTOTMQUWFAGANXLUVXJUCYTPBNCHPVVPAQGBFCYYZDXQGXMYSGUMOLSOOWTTHJALUAHZCZMUTBCCOVNHILPIQCJRJWZQESSKYEGMUGKUJMCDXLRZNPW");

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
    msg.setTimeStamp(0.419379424109);
    msg.setSource(62825U);
    msg.setSourceEntity(211U);
    msg.setDestination(49690U);
    msg.setDestinationEntity(54U);
    msg.name.assign("EHDRWLJOLZPTPIGISYFZYDEMXDRNCRJAHKQKTWGFSZUWRAVNQMCVMATTCLXNDSBBUVUMTBVUAFKJYOPMRODNZNIXJNLFUWJUYUAFGQPRXKZHBRQOIYCOUWOKWXBOTMSVHMCSHKTDKDYCFJISAQUYPZAJISUGLGZWJEQLKELYKATSDQWCZTPXAEHWPPBVGNDHLJZBMCFGSHYIZAHRMGCXILNVFQPVSIXHENEVQBPWXRT");
    msg.value.assign("SMCBAHNIIQMENFCGVFTBPAPDSFUIUCABCDPVVXOYTHUDZRWSEMQTWNUZSRQOGHZUIKVSPPDBYDY");

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
    msg.setTimeStamp(0.0426172993741);
    msg.setSource(2486U);
    msg.setSourceEntity(71U);
    msg.setDestination(42622U);
    msg.setDestinationEntity(213U);
    msg.name.assign("ZAYLVDDWTNFWZIMEBCGYXZWUUVNVXVGNLRFGOCKZVZHKIKTHNCMNFDCKNZMTVIRLBUSUZGBVDLRTENJRPACHPDLYNROGKWYUGZEAPPPGHABNOHXZXWWGIUFSJBOHFCJSUHQOERVSSQBPJRQJYHJBTJCDYMCOAQBFMAXMRFAIFWVKHFTQDSKRROGQOMLPEMHSAISCTEXMK");
    msg.value.assign("XBDUTGQDXNTWOVFZHMPZMOTODFTEIFJTKMSHAVZRKAYKBJCBHGSKBMSRPEXTRJNEISBYXZWQRCINOXCTHZTRLEHFAJZSPKGQPCXELSSTIWPIQVAKQKEZIBETZMKFVJDGOXQPYHZMWINDWPICVRXWRPHGQOUABQCSUUMEJUMDZYXRPXYLUUGBDWSWJANALIDF");

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
    msg.setTimeStamp(0.368532843385);
    msg.setSource(34823U);
    msg.setSourceEntity(173U);
    msg.setDestination(61799U);
    msg.setDestinationEntity(165U);
    msg.name.assign("LPJJXYSGCPQULMXNVKRMXJCCTZQEVQGXPWDARZILXDXPDEFGNQYBLGEEJCHBTLOHINQDIYOALMMRGWNENAOSMWFLMANFZLCVBIECSSUGPLQQNIAVROAHSSBCWPOBRNMKCOTIAQTXJMPEVZRHVDIFJSTFKUWIZABEHOWRAFVY");

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
    msg.setTimeStamp(0.867581973035);
    msg.setSource(27868U);
    msg.setSourceEntity(129U);
    msg.setDestination(18824U);
    msg.setDestinationEntity(163U);
    msg.name.assign("MJSENJQBAWLVLLIURRMRPOQAIMMECUDMWBTSDRDGCTYCNFKVQBNDDKGRCKQVAMPYYQSDGCSDQJBGAKZCFMIAPLSE");

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
    msg.setTimeStamp(0.483397306346);
    msg.setSource(45882U);
    msg.setSourceEntity(184U);
    msg.setDestination(21508U);
    msg.setDestinationEntity(118U);
    msg.name.assign("SEUZCJTQKJPYFQGIWEYLYGJXTIGHCLSXHEFUSTOLGHRPKIWX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QMNFCZCENXTCMRQOQEVUDPVDEWRTODNWYRLZMHLURAYSDQPOXFVJPRCTKSBCWEUWTZFRZOBCOUSKBPWENXIZYVURASUAFBAGFDKJYSSFYNXMGKBOMMLZCIHJJAHDZHJZLCIZCXLMQEEKGOSWBULVAFLJXRLIZLGPIJKRHBPDDXVLMPTJGBNSYEYAWUURNVASQFTAQIGIYKMKWHJY");
    tmp_msg_0.value.assign("VLTBLSGIOYJQNWKEMQBQQWADDZUSZL");
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
    msg.setTimeStamp(0.971723449323);
    msg.setSource(52455U);
    msg.setSourceEntity(166U);
    msg.setDestination(40869U);
    msg.setDestinationEntity(124U);
    msg.name.assign("CEOHRXQQHUAVYSKUROVKBKFJPNXTFUVLDZEVKNETAJGZNOGHJHQJSZODIHQMOLIMAKENWIESTNWQGSCGWBEDYMAMDIRTEDXKMAUVCHYJTWVHIJGUWLTZCTIRXCOQJOU");
    msg.visibility.assign("NEBJQDLEGZQFJHWLMVHMGOOSSCUQGGVPYOEFDIHVAZOMZNJBZHFJXRTKATVKLCPDXBYHTHQBXRWYUUXESIXMVLOLTPCSFSPQNMNALKYIGXWSYKAUXSVZIRYDNIYXPTQDQBMTQJTJBLKVAMTYXPFCURQHCPRWEZOVHINLHIVQTDGBBCCBKZMAKGFPEPUNNOAWJKHFWGDIUYCZJNFUCRRDZVMFAGKGMEDRNKFSWPRIBIUWYSCEL");
    msg.scope.assign("CGZPUBIDZSCSSPNHHICBRFQYFYRHHMAOJHRWRVHQXDJLUJYEFKQXGJLMSNPORKUWYAJBL");

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
    msg.setTimeStamp(0.626290380699);
    msg.setSource(2836U);
    msg.setSourceEntity(161U);
    msg.setDestination(20372U);
    msg.setDestinationEntity(11U);
    msg.name.assign("DGFDLYDNNVQTCHBDMMGXLBDHJQDKSFXFWZFDAAUBWXQGMWXNOPIULTPEWLKXESABPVSNIFTRLFKJYZFUTYHSODLXZXODP");
    msg.visibility.assign("GZKMPYSQACXNPLJCCVXRJYTKCVYBHWLXBMUJ");
    msg.scope.assign("UNACZUNXTWNPLIQIEFZSRMCPCFN");

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
    msg.setTimeStamp(0.101376671556);
    msg.setSource(35324U);
    msg.setSourceEntity(75U);
    msg.setDestination(19225U);
    msg.setDestinationEntity(187U);
    msg.name.assign("QDMOFNUXNBAUYCYLNJVHDKFLPMLFKPJZMJYQYEPYUNRXTFUBDYNZSFZICUQFJNVQKRTDTIIRQETHHWGLMIEMUNDVXSTHLNAWIGOPQKZLPAWNEOHAWRYIOOXCCJKPCUPCGMXGOZHFKACFCGMLSEOKIADWVEIVQRZBMZBADUHYDSZXAQFLH");
    msg.visibility.assign("HODYCTJCLSIYRSKBFRTIIQEDCPRLMGBGWVTZCAFZEJJXHDLFZQVBTSOWLUPS");
    msg.scope.assign("ODWCDFISFVYQFVEJJWNBJFKVLEXOUUFLRIKOGWYCKZTELAUQZCQGTHLDEKWCJGYSWQRKPJLYMRIDRRNKONTNPPZVVUUDMSNTHXCRZXPQUXCYISAINGPOLGACQCHWAXYTBMYJEMZHULZJEIQSIDQDOFKBSMKGBHEOCRQTWIHNSRANL");

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
    msg.setTimeStamp(0.853024735047);
    msg.setSource(60678U);
    msg.setSourceEntity(253U);
    msg.setDestination(12402U);
    msg.setDestinationEntity(194U);
    msg.name.assign("XXWRQFYSIQINCRNVRCBQVLHMDDEIFRCXYCPOCKWZGMUWALUBOVUGZBSWKMTBOQJHXYPJMINDMMNVPFRASDADXKHGTJYLRODNETMDQSBCKPSJUEBXPAJUPETEZWFRWVNFAQYGVZVSZIGHFXIDRJFEUACHYQACIZJLPO");

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
    msg.setTimeStamp(0.035693938888);
    msg.setSource(9684U);
    msg.setSourceEntity(148U);
    msg.setDestination(52924U);
    msg.setDestinationEntity(250U);
    msg.name.assign("JKRSGNEGDKEOSZQSKTANSXQFGKGGUBIVZRMAAYHYWEDHIUQHXJFZJHUDZVXCPICFGQNTWLMFDRMPKYPZCTJRJB");

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
    msg.setTimeStamp(0.472967659455);
    msg.setSource(42744U);
    msg.setSourceEntity(184U);
    msg.setDestination(9085U);
    msg.setDestinationEntity(82U);
    msg.name.assign("LDKKHDKCXKFWSTWZORCQMMBBNIJEEVXEEAUZNAJYMFTKIHYSDGUHBGSCVOEOAIVXDDLHGFXEVCSPNOXJQNUGVZLRXFTLGOMPHUHYDJNFAZPGOUICRDMNQVIFMBAKBYAPEVBHARDGJFFYITHMKCFKXJFPDWPEVLNRYBZMLRUTTXSPUZRNRTGSMDCYLWQAUVREARSLWJLZOVPBQQINHLIQWJCX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MBIUEUYMLPYVEVSWIRTUWCPGDUODY");
    tmp_msg_0.value.assign("HFAKUKWXQEQWAMNNFSUMNDIMZXJKFOJOVOBZKSICXO");
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
    msg.setTimeStamp(0.667110659169);
    msg.setSource(40065U);
    msg.setSourceEntity(234U);
    msg.setDestination(65515U);
    msg.setDestinationEntity(179U);
    msg.name.assign("GZCTFWPPBSANKGTKJIPUUSFCEHDYHWZBBHURWYUIUWIJYPREMINVNOOJBLORJVBYNSNDKEULYYOIAFQKKQAMWBBPISSAJXIPKVZXDTTGMYAQAYMHKLZXSCMPMTWSURKOEQOGPCFHXJXFGKPGCTNOASPZZBQIXEHRIQRFNEQDTVASNFYGERWHAWNZMNCVOEGOEZDVZUDCDKBGMHJJQGLWLRLCQLZHDXUVFR");

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
    msg.setTimeStamp(0.119907336777);
    msg.setSource(14652U);
    msg.setSourceEntity(0U);
    msg.setDestination(20554U);
    msg.setDestinationEntity(142U);
    msg.name.assign("XZJTDKCVCJOUEMTKUQ");

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
    msg.setTimeStamp(0.441467301273);
    msg.setSource(1468U);
    msg.setSourceEntity(158U);
    msg.setDestination(53320U);
    msg.setDestinationEntity(202U);
    msg.name.assign("GWZKRASNAZXZWXZFRPNFMNQPFWDLYQEUUUCPSLGADWPBQKDTYXKAILBFQLLCTNFSWUJIKDSZMMEWYFVDHHKVAJBGF");

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
    msg.setTimeStamp(0.613454652261);
    msg.setSource(65295U);
    msg.setSourceEntity(220U);
    msg.setDestination(32447U);
    msg.setDestinationEntity(251U);
    msg.timeout = 98829445U;

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
    msg.setTimeStamp(0.604081094393);
    msg.setSource(43368U);
    msg.setSourceEntity(240U);
    msg.setDestination(58192U);
    msg.setDestinationEntity(145U);
    msg.timeout = 2973461220U;

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
    msg.setTimeStamp(0.013928361399);
    msg.setSource(42969U);
    msg.setSourceEntity(203U);
    msg.setDestination(61808U);
    msg.setDestinationEntity(140U);
    msg.timeout = 3535852180U;

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
    msg.setTimeStamp(0.804025920606);
    msg.setSource(7533U);
    msg.setSourceEntity(159U);
    msg.setDestination(56161U);
    msg.setDestinationEntity(16U);
    msg.sessid = 4084249812U;

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
    msg.setTimeStamp(0.477783979153);
    msg.setSource(49006U);
    msg.setSourceEntity(85U);
    msg.setDestination(21039U);
    msg.setDestinationEntity(229U);
    msg.sessid = 557501262U;

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
    msg.setTimeStamp(0.212475903767);
    msg.setSource(31010U);
    msg.setSourceEntity(199U);
    msg.setDestination(34714U);
    msg.setDestinationEntity(163U);
    msg.sessid = 3629651220U;

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
    msg.setTimeStamp(0.0747971805535);
    msg.setSource(51235U);
    msg.setSourceEntity(157U);
    msg.setDestination(63130U);
    msg.setDestinationEntity(121U);
    msg.sessid = 1600956155U;
    msg.messages.assign("IPJTBFINDUWQSXGZUMXQQCLPZSXTIFJSCHVMTHOUMTUHZRYQYDFRBDINYQHDGNWHKCCOLCQVVCUNXDJPWPYJLQIAXUZJXDBHQSTLVWEKZUHYWCEPPJMVLBFGEAGOTIBQWNWWFSRPRKBXMGNVNIRPLLAOMGLSMYDOMACEPKREPRCGKUYEWDEDVOUVAAFOSZYLGFKYBIDNSKGFMORKNTFTA");

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
    msg.setTimeStamp(0.422631915479);
    msg.setSource(38807U);
    msg.setSourceEntity(247U);
    msg.setDestination(21597U);
    msg.setDestinationEntity(189U);
    msg.sessid = 724178602U;
    msg.messages.assign("OFEQRQOUMNGAARCMKVHSQPWHBYTJBUUAKTMAJNDVWSUDFIIIXGZHALLXRPPPNHCGMPWTFKEFRQARIABWQOGMAYDYSDDYPLGBRVYNKCFYVWLCXYHULJRCLQDFUOZLSEHZWQEDUUSNOXWJGPIARKXUVZLWKAXPONCTSINBMZFGN");

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
    msg.setTimeStamp(0.417832579668);
    msg.setSource(39418U);
    msg.setSourceEntity(163U);
    msg.setDestination(36543U);
    msg.setDestinationEntity(47U);
    msg.sessid = 940383384U;
    msg.messages.assign("NZANGSIEJGUFTCYLLNCXCWHYMGYAQHFMTKVIIPDQINMRSOELOCPDUZTBMFDOFQPZRNJDLYHRLXFSZRGWYETLHICHXFXDXBZEXSGACRUUKQPAEEUVJXSXJMNARBWZJLKOEUJLOMBDZOTQWIVMIFIYKWVCADQAVBLWZVQFHYYTC");

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
    msg.setTimeStamp(0.240509842696);
    msg.setSource(10835U);
    msg.setSourceEntity(30U);
    msg.setDestination(12223U);
    msg.setDestinationEntity(9U);
    msg.sessid = 3520529590U;

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
    msg.setTimeStamp(0.549197708218);
    msg.setSource(35798U);
    msg.setSourceEntity(120U);
    msg.setDestination(45379U);
    msg.setDestinationEntity(238U);
    msg.sessid = 1011358848U;

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
    msg.setTimeStamp(0.37833858196);
    msg.setSource(9135U);
    msg.setSourceEntity(111U);
    msg.setDestination(49149U);
    msg.setDestinationEntity(96U);
    msg.sessid = 2049413608U;

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
    msg.setTimeStamp(0.708263446474);
    msg.setSource(42265U);
    msg.setSourceEntity(44U);
    msg.setDestination(42090U);
    msg.setDestinationEntity(245U);
    msg.sessid = 1664197929U;
    msg.status = 173U;

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
    msg.setTimeStamp(0.354839847953);
    msg.setSource(62804U);
    msg.setSourceEntity(83U);
    msg.setDestination(36125U);
    msg.setDestinationEntity(238U);
    msg.sessid = 3034066765U;
    msg.status = 192U;

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
    msg.setTimeStamp(0.773111990063);
    msg.setSource(42398U);
    msg.setSourceEntity(141U);
    msg.setDestination(46733U);
    msg.setDestinationEntity(124U);
    msg.sessid = 1710256632U;
    msg.status = 92U;

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
    msg.setTimeStamp(0.291117862283);
    msg.setSource(21907U);
    msg.setSourceEntity(196U);
    msg.setDestination(18235U);
    msg.setDestinationEntity(125U);
    msg.name.assign("PCXGNCSNWMTRXLNFKULZAHSXPLTERXSBZWUJTYNJTRIGQQJVCFMSGXODLABVAZTEWPVIDBHEYNSGMCJCDGDIRNEBZKRSOAZDQ");

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
    msg.setTimeStamp(0.8209776661);
    msg.setSource(53363U);
    msg.setSourceEntity(15U);
    msg.setDestination(28822U);
    msg.setDestinationEntity(158U);
    msg.name.assign("CVYOXVWVCBELANMFEMAEDOIHMXVJKSJEYCBCZRJGUWWJLKWCCPUXGUQIODIABVFZEEGZCWNFOQLSHXDNVTXKFPTMAMPRVGGKTBYTPRYUXBDFRLWTORQTONMPBDURULTNUJWZGKQZQJE");

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
    msg.setTimeStamp(0.293676944739);
    msg.setSource(28633U);
    msg.setSourceEntity(130U);
    msg.setDestination(52393U);
    msg.setDestinationEntity(66U);
    msg.name.assign("CHNPUYOYYRIETUCVJRNYGBGRPPVDELLENOFMPASXUQEUTCJJAUMAVVHDQBPWXSQQWLATITCDYFLXGWXYOAKJMPSPGZAERBYGMYOSSIQIGNBAIBZNEDDDNKKJXPCZYMAFIHCMRVHFKRLTRCCTXQGIOKHEUEXFJBFJXWUWLUWMXHZSZNZKLSEIMLTFVYWQUBJIQGNAOJSMEKKTDXKKOCLPOVOHZIDRWONDPGZDBZHWLUAQMZBSFNTRVSFFCH");

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
    msg.setTimeStamp(0.25318626374);
    msg.setSource(2322U);
    msg.setSourceEntity(190U);
    msg.setDestination(21994U);
    msg.setDestinationEntity(124U);
    msg.name.assign("PHQGDOYACSTFASEHEPNHWXBTQJBVPVQUCETDJCVJOKOZDVLZMMQAMNQDOBCTDGTEKBVZIXZKTYVMYQDBNXSAVTIYAYGWLFTPTYIUUCUHEJKSFECUPILBGNGFPOHYREUAFTXFHANKLHFXIMCNJIGMDORXLRBWJZWX");

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
    msg.setTimeStamp(0.615623039793);
    msg.setSource(31045U);
    msg.setSourceEntity(113U);
    msg.setDestination(7333U);
    msg.setDestinationEntity(146U);
    msg.name.assign("ECWNBCHWCDAEKVSQDNLZJXQIERLBCWQQJXVURYSWLZPARGVNTIIBFIZIWTKIVVYZOIVIDYHOTGAPVKDYFXSHUBEOYDJUQHMUKRTNXZKSYNPEOJYXTVJEBDPBOUFMWOLNPCMSENRYCGJSJTKRHACVOGUWLCHOZPXGPMNWLITMQDFBAFTZZKFFGKMZUELDJSZXCRQFOPONQHFBDDMHH");

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
    msg.setTimeStamp(0.0913754160052);
    msg.setSource(58794U);
    msg.setSourceEntity(73U);
    msg.setDestination(25660U);
    msg.setDestinationEntity(230U);
    msg.name.assign("YFTJRKQBPBCMGRNASNIEXEYUSLEJUKHWFGWFOZYADJFSLSPIUTQXUMRJGXKGLLYDTVMXLWDBTMYRBXGWMNENNSCQNCUKXSWXPKLEPTSCXFUMHARKLUCAOBIRPCQVJJJZKYSFVRGXOBUHUOVAAROOHKIJRZIHTOQSAVHJZPWSHPFERYHTEODINDPVAOQIBBCEZLQLIGWY");

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
    msg.setTimeStamp(0.335233199922);
    msg.setSource(59982U);
    msg.setSourceEntity(225U);
    msg.setDestination(56067U);
    msg.setDestinationEntity(50U);
    msg.type = 186U;
    msg.error.assign("ZCWGJZGPXXAYSYWQLLDSMJPHKCJRXEILRUTUCMLHAEPRROIFBQFVIEVKFSNITUYTLUGDDPVJTDBGAZRQHEHRBKTUWEZKCQJKKWKSEANXMZLJFHUZHLAQCPQNCNBNRBTUROIMVYQTUOAMWCLODGYEIZHSCVBMGAFFVFOKNFJFYIOMSGXXCIYINXEBXSVXYSPXAMOHLGPONEEZYUVTPGDDHMDDMOFNSWO");

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
    msg.setTimeStamp(0.718661737231);
    msg.setSource(25196U);
    msg.setSourceEntity(49U);
    msg.setDestination(14543U);
    msg.setDestinationEntity(215U);
    msg.type = 9U;
    msg.error.assign("RHFXBMEYWUMNEZEMJKLWUYGAXNDZGBUDODPPUBSRIKEKHIYWYBESKUQKOCRLLEXSMFHRAYAECVSVFXNLZOOQLYAVUUFIIJTQTZMTXZODRPJEJSNSTJQAFSL");

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
    msg.setTimeStamp(0.285426347144);
    msg.setSource(61085U);
    msg.setSourceEntity(177U);
    msg.setDestination(33154U);
    msg.setDestinationEntity(15U);
    msg.type = 134U;
    msg.error.assign("ICKWJCEFHAJCKTSAJHRVRFBOZMPYXBEPMMZPFQYYVZIQPTWXLUZKGNQMCFBFQYMVEBXYYAHEWSBVVNOXGIZAUXLGQUMTDDGLJWJUBTEQONOORNXTSCIAOQAKXRKSCDHDVAWLVZCFKCGYBEUXKLNMJIHPYWDVNBEGK");

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
    msg.setTimeStamp(0.551211898933);
    msg.setSource(16211U);
    msg.setSourceEntity(174U);
    msg.setDestination(31009U);
    msg.setDestinationEntity(163U);
    msg.seq = 59145U;
    msg.sys_dst.assign("VNMOAAWGIPUZKCNZHAJEAXUUOXROXIHKIRFHPEMTJDJQBZAQYESFOQSIPHVVRJLKVNSOFQNRGPVFKTZTSTHWMVZLDBFNLJWYBGAHJODCEMEKMURKPZWJRMXCWYLSLNWSNIGCYKIQPTGSSOBAMYFGVCGDFBLNNBQCUAPUOQTYLRSIQHFVETPMHDYBCAYQODJCXRDGAKMLEGFIBKOCUVRDGMXKXXJTHEZZSWCBZUEETLWFXQBINUYDVUWRHJPPZ");
    msg.flags = 240U;
    const char tmp_msg_0[] = {-33, 34, 47, 117, -128, -29, -17, -8, -46, 97, -2, 31, -110, -115, -4, 80, -5, 12, -36, 91, 103, 41, 28, 38, -45, -65, 115, 27, 123, 41, -108, -122, 124, 21, -62, -28, 107, 66, -60, -24, -55, -29, -31, 15, 126, 19, 1, 26, -67, 118, -15, 17, -96, 63, -16, -76, 24, -119, 15, -97, -83, -5, 48, -83, -90, 84, -26, -70, 11, 25, 81, 22, 53, -39, -78, -40, 96, -51, -20, -64, 95, -56, -22, -65, -29, 63, 63, -8, 12, -25, 31, 74, 2, 3, -65, 94, -112, 35, -52, -54, 115, 2, -9, -14, -71, -54, 37, 12, -97, -86, 53, -47, -47, -126, 72, 122, 4, -57, 106, -101, 28, -122, 40, 51, -110, -35, 33, 62, 17, 126, 50, 99, 59, 73, -54, -114, -52, -103, -76, -80, 89};
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
    msg.setTimeStamp(0.45638621992);
    msg.setSource(20924U);
    msg.setSourceEntity(249U);
    msg.setDestination(26475U);
    msg.setDestinationEntity(198U);
    msg.seq = 33064U;
    msg.sys_dst.assign("GUHSHHUFJEVRPFPOJMKGMZNOYMRNBCVLLONEEYKNRKMDT");
    msg.flags = 196U;
    const char tmp_msg_0[] = {-21, 38, -114, -62, 95, 33, 60, -1, -25, 62, 1, 44, 90, 90, 23, -35, 24, -56, -94, -48, -113, 21, 27, 126, 38, -62, 56, 88, -94, -100, 34, -7, 6, -112, -23, 100, -87, -49, 11, 86, 119, 98, 44, 51, 26, 91, -111, -84, -82, -13};
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
    msg.setTimeStamp(0.404139741713);
    msg.setSource(21698U);
    msg.setSourceEntity(44U);
    msg.setDestination(24842U);
    msg.setDestinationEntity(9U);
    msg.seq = 627U;
    msg.sys_dst.assign("UYWNUPCFJQGZQTWBSRRYGZRDWXMFUJGYVSUCHMILJWMIWBHLMMQCEVBPIAPBPKHDTOVHZWJNFUOKTLDQAPQZNIMYCGKXDXVLPLHAYLILQKJAKXQYTBVSVDJSWUCXVKETCSRNBABEKAAVHFYNZUD");
    msg.flags = 165U;
    const char tmp_msg_0[] = {-24, -16, -38, -75, -5, -13, -39, 4, -106, 114, -64, 35, -106, -98, -104, -105, 96, 40, 49, 111, -107, -39, 108, 45, -107, 81, -58, -113, 126, 16, -84, -63, -114, -5, 94, 15, 83, -98, 5, 120, -59, -79, -50, -29, -43, -41, -35, -106, -53, 34, -29, -33, 89, -46, 4, 16, -64, -71, 26, -7, -27, 20, 93, -21, 125, -55, -73, -62, -125, 126, 3, -110, -81, 116, 32, 28, 10, 59, -8, -28, -119, 17, -39, 21, -18, -97, 99, -30, -28, 62, -48, 21, 123, -99, 99, 115, 49, 36, -92, 69, 31, -98, -86, 88, 64, -5, -39, -125, -74, 98, 92, -99, 47, -123, -35, -74, 120, -84, -71, 14, -62, 105, 68, 107, 106, -3, -66, -55, 99, -115, -115, -13, 72, -9, -68, -79, -114, 25, -120, -35, 41, 14, 16, -110, -108, -16, 23, -50, 46, 65, -123, -81, -59, 116, -23, -13, -18, 89, -97, 46, 110, -56, 19, -94, -102, -102, 43, -81, 27, 0, 72, -115, 96, -5, 114, -124, -38, -92, -3, 61, 123, 80, -49, -9, 61, -34, 98, -81, 3, 100, 52, -9, -74, -12, 122, -62, 40, -41, -46, -110, 116, -100, -83, 69, 14, -86, 89, 93, 79, 92, 78, 31, 100, 77, 118, -6, -16, -81, -70, -120, 73, -14, 56, 110, 40, 97, -84, -115, 99, -126};
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
    msg.setTimeStamp(0.548920068053);
    msg.setSource(62175U);
    msg.setSourceEntity(166U);
    msg.setDestination(2021U);
    msg.setDestinationEntity(75U);
    msg.sys_src.assign("LQWFIQUGSTKABGTCSUQDIRJZJTHFLFAEXHTWNVCEKOMBEGFCBYMWMHUVZTAQZSKDFSB");
    msg.sys_dst.assign("NPUVMYMHPSMITJCHXQRMTILMPZWGNFFCHUEJGUVPEHODKZAOMMLXRDXAJQDQZQZOCIJFZJNUFBTKCEDNPZBGUAOLLHFKBIHFDOSFPXOZSBXACGETGKLDMINAKUYTFVASMBEFRNRBOAFIDVIJIRWABKIUSLNGTVRUWLXITSJQVBKYCKTGH");
    msg.flags = 180U;
    const char tmp_msg_0[] = {45, 77, -126, -2, 104, -62, -102, 111, -33, 43, 38, -53, -127, -127, -68, -68, 60, 23, 10, -81, 114, -26, -64, 111, -10, 96, -11, 41, 52, -87, -77, -79, -15, -27, -32, 110, 94, 32, -123, 122, 116, -72, 71, -90, 7, -90, 98, -55, -54, 91, -2, 36, -13, 98, 85, -108, 122, -33, 116, -13, -96, 114, -43, -121, 41, 113, 21, -39, 72, 99, 54, 15, -112, -105, -6, 22, 104, 7, -65, 56, 87, 73, -90, -73, -73, -23, -55, -99, 64, -126, 2, 35, -101, -104, -87, -67, 70, -121, 93, 123, 116, 26, -40, 24, 93, 79, -72, 27, -35, 85, -61, -24, 41, -87, -31, -110, -128, -38, -15, -107, -9, 75, -22, 15, -93};
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
    msg.setTimeStamp(0.182900139347);
    msg.setSource(8535U);
    msg.setSourceEntity(176U);
    msg.setDestination(21655U);
    msg.setDestinationEntity(5U);
    msg.sys_src.assign("ABAQGDMPTNJUBRYKHJCZWZPROSEVHVULLHJQDBXZNBTCSIUFFSLNWTPGKOSCRXBXAQLSQERDEASLHOUFIKSIIJOSOMYUGAKCPTG");
    msg.sys_dst.assign("ZVBGPOCMSRYQVSACGJALQIIYTJWBZPNLGBMSMFBQDWHVFCHTCBWJPWPVCSDZGAIQXGPOBPHJXYTIHNPKVSVGZCZZUWLKTWXYWFIEGCRCEIGUQQZHOIEDSITKYXKLCLPJMRJRGDYLLOOUXURSNXXPQRBEJYZTCFZKJSFXHTFAWVXBKVDKVWMZUJMT");
    msg.flags = 246U;
    const char tmp_msg_0[] = {-80, 50, -115, -24, -85, -109, 53, 33, -110, -105, 64, -50, -1, -26, -56, -6, -24, -84, -70, -13, 92, 2, -4, 41, -100, 92, 75, 74, -103, -59, -92, 30, -5, 73, 35, -100, -32, 33, 67, -121, -124, 91, 28, -72, 35, 70, 7, -46, -97, 14, -7, -20, 94, -48, 73, -58, -4, -3, 41, -48, 119, -14, -64, 113, 90, -67, -108, -107, -9, 95, -4, 102, 106, 87, 41, 43, 35, 104, -73, 74, -128, -55, -109, 38, 83, 22, 76, 74, 81, 94, -63, -20, -50, -79, -116, 68, 90, -53, -53, -11, 10, -120, -68, -64, -33, 19, -74, 76, -104, 3, -49, -71, -99, -122, 49, 80, 103, 23, 17, 118, -23, -77, 103};
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
    msg.setTimeStamp(0.0249462297557);
    msg.setSource(46550U);
    msg.setSourceEntity(227U);
    msg.setDestination(23308U);
    msg.setDestinationEntity(115U);
    msg.sys_src.assign("WZTMKAIJVMNORNVGWXAFXEWVACTFSQGFPCPYHEOPLMXBKQVLEDUXZHHLCVFUTYQKUBOYKHONTPPGKMGQOWOIXXRTJMHGDYLSZJMXDGNWLZZSYUABWPFPCUFISICVUSYVWIPDRCTQUJCKFRLXREMF");
    msg.sys_dst.assign("KWEHMCEAJUMBUG");
    msg.flags = 185U;
    const char tmp_msg_0[] = {104, 13, 82, -121, -47, 67, 36, 62, -108, 45, -51, 63, -100, -81, -3, -36, 77, 2, 36, 109, 39, 33, 112, -73, 53, 102, 47, 24, 55, 98, -46, -82, -90, -123, -12, 64, -116, 54, 53, -69, -27, 38, -26, 104, -30, -45, -83, 57, 77, -25, 4, 30, -30, -1, 2, 48, 51, 54, 97, 30, -2, -29, -101, 83, -31, -43, 121, -42, 23, -35, -7, -59, 89, 100, -36, 65, 8, 44, 74, 63, 44, -51, 104, -66, -58, -97, -65, 38, 102, -89, -126, 120, -93, -75, -42, -52, -61, 48, -18, 74, -103, 91, 126, 83, 47, -87, 84, 97, 107, -17, -14, 102, 10, 65, -35, 57, -114, -90, -69, -87, -23, -14, 1, -68, 107, 81, 84, -83, -72, 103, -121, -29, -59, -32, 35, -16, -47, -30, 113, -48, -11, -11, 101, 125, 79, -109, -87, 26, 94, -44, -107, -64, 42, 78, -51, -71, 96, 67, -36, -48, -84, 83, 89, 24, 72, 19, -17, -16, 50, 109, -48, 25, 8, 20, 77, -36, -73, 99, 14, -82, 30, 70, 52, -30, 6, 5, 45, 122, -50, 51, -55, 47, -1, 103, 114, -126, -103, 85, 96, 46, 31, 13, 119, 31, 65};
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
    msg.setTimeStamp(0.573391069861);
    msg.setSource(37548U);
    msg.setSourceEntity(218U);
    msg.setDestination(32510U);
    msg.setDestinationEntity(238U);
    msg.seq = 60779U;
    msg.value = 56U;
    msg.error.assign("LWVOVRPDKBLKHQDYJDZMRRXGMFBZMLCIIWZXHZTJZTIVWVAYVTEEQDBMYDICLJORIKAKBAUIVTWGNVASPSXECZ");

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
    msg.setTimeStamp(0.405195594529);
    msg.setSource(17042U);
    msg.setSourceEntity(212U);
    msg.setDestination(818U);
    msg.setDestinationEntity(145U);
    msg.seq = 24149U;
    msg.value = 152U;
    msg.error.assign("UAUJGYCCUNQCVXOQASLTOKLMMHKMAUXQNYVRFJGXGDEUKOTCOWVNCDRMTFVWQBLRWHFTSBPEGZJEVQNJVNLHGSKJFBGNOIPLQWEJILNEZALJIOJIFFBMBHAPUCBZDWYFXAZHDQOSYYICTDGXQDDECHKQIPDXNSEXIX");

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
    msg.setTimeStamp(0.693632959171);
    msg.setSource(4414U);
    msg.setSourceEntity(34U);
    msg.setDestination(53934U);
    msg.setDestinationEntity(97U);
    msg.seq = 49749U;
    msg.value = 138U;
    msg.error.assign("TWWTFSYLAJRBJWQGJKDSKAENNKOCOTFOIKIJNCQJKHGTIPFJNYCHICLFREPJMBGPRRLXGOEJHFUPDQBVSWXRIOAMADVRGVQCFDMOEVCEDYCBAIRUHOZQLHZXUMDBAQGTCLQUTSQZRSHMIZIYOXTPWBRMXBZZEHJUBXEMTPANYZNKPJWYNCWYHSDGECDNPADAMFSKXHARXLDPKKXNQX");

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
    msg.setTimeStamp(0.208017316335);
    msg.setSource(64077U);
    msg.setSourceEntity(55U);
    msg.setDestination(54950U);
    msg.setDestinationEntity(106U);
    msg.seq = 17956U;
    msg.sys.assign("GXJBHEKTLDRKTMDFCZGNDCFYQTEEANVRHVFNUPULOAVZRLIMKDQBHAVRMLIQDILGMEIJUTAYESJMMXFCXRBIHMUBJPHYXHPYTDMOCWSZTUQYGSEAYVUTHPNPWXOZ");
    msg.value = 0.0715366035503;

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
    msg.setTimeStamp(0.726071483022);
    msg.setSource(49521U);
    msg.setSourceEntity(38U);
    msg.setDestination(16553U);
    msg.setDestinationEntity(74U);
    msg.seq = 17247U;
    msg.sys.assign("YLMIWGFMCUSQXKIVFQRXXFYLCVXBMQRWLHJHOBHBLRFRAQLGKCWJEDMUNDUTCYINDUXGWINHKMXTLKFJOOYDAACHIFDQRGNTZAKWNUGECORKRFMWVTKSYSNNWYQPDVTTGXRCBQWJYTHHNZOPCVUXRZLNPPPFATPBOJVPSMOBQEJKSYJRIMEWODTLLGTEQPISSYEDEVAZEMZVMDOIUVCJGGIXLGHHASWEVYPBBZNKUZUFSAQZZ");
    msg.value = 0.578692171918;

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
    msg.setTimeStamp(0.162728899754);
    msg.setSource(53200U);
    msg.setSourceEntity(203U);
    msg.setDestination(57260U);
    msg.setDestinationEntity(236U);
    msg.seq = 58204U;
    msg.sys.assign("YNPAJQHGVRULNZREHADMODAABQHKZIFVGRORFMRMBMQHGKWIPTHKFEJBGWSUDXTPWQNFXKZOUPLDCPGGZUFGXCUJQWYSNXLVFOMQKCLVFSLJUYCJBPIQOMUHWGO");
    msg.value = 0.0570516502608;

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
    msg.setTimeStamp(0.379608684144);
    msg.setSource(14415U);
    msg.setSourceEntity(16U);
    msg.setDestination(10872U);
    msg.setDestinationEntity(12U);
    msg.action = 240U;
    msg.longain = 0.690315777112;
    msg.latgain = 0.560225020215;
    msg.bondthick = 4090790131U;
    msg.leadgain = 0.707067474698;
    msg.deconflgain = 0.87498051029;

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
    msg.setTimeStamp(0.499321887831);
    msg.setSource(57957U);
    msg.setSourceEntity(196U);
    msg.setDestination(36534U);
    msg.setDestinationEntity(167U);
    msg.action = 118U;
    msg.longain = 0.0190290704657;
    msg.latgain = 0.829181571237;
    msg.bondthick = 1620058636U;
    msg.leadgain = 0.957314025176;
    msg.deconflgain = 0.298748046532;

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
    msg.setTimeStamp(0.312110784971);
    msg.setSource(39142U);
    msg.setSourceEntity(190U);
    msg.setDestination(37475U);
    msg.setDestinationEntity(31U);
    msg.action = 203U;
    msg.longain = 0.00568443850442;
    msg.latgain = 0.402432841439;
    msg.bondthick = 1957101332U;
    msg.leadgain = 0.658614477769;
    msg.deconflgain = 0.689069151905;

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
    msg.setTimeStamp(0.254402207466);
    msg.setSource(57998U);
    msg.setSourceEntity(112U);
    msg.setDestination(41361U);
    msg.setDestinationEntity(5U);
    msg.err_mean = 0.450497269454;
    msg.dist_min_abs = 0.288207716603;
    msg.dist_min_mean = 0.0751217534362;

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
    msg.setTimeStamp(0.82486541904);
    msg.setSource(5829U);
    msg.setSourceEntity(12U);
    msg.setDestination(8556U);
    msg.setDestinationEntity(149U);
    msg.err_mean = 0.294114185668;
    msg.dist_min_abs = 0.917291041553;
    msg.dist_min_mean = 0.779469219697;

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
    msg.setTimeStamp(0.743004068218);
    msg.setSource(898U);
    msg.setSourceEntity(16U);
    msg.setDestination(30892U);
    msg.setDestinationEntity(112U);
    msg.err_mean = 0.516604327914;
    msg.dist_min_abs = 0.956396730979;
    msg.dist_min_mean = 0.784179034694;

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
    msg.setTimeStamp(0.742944137282);
    msg.setSource(58852U);
    msg.setSourceEntity(94U);
    msg.setDestination(4494U);
    msg.setDestinationEntity(249U);
    msg.action = 200U;
    msg.lon_gain = 0.0436272783598;
    msg.lat_gain = 0.451532684045;
    msg.bond_thick = 0.560250767948;
    msg.lead_gain = 0.893584612488;
    msg.deconfl_gain = 0.121050566182;
    msg.accel_switch_gain = 0.0911166074987;
    msg.safe_dist = 0.407196008463;
    msg.deconflict_offset = 0.630896388925;
    msg.accel_safe_margin = 0.415521525421;
    msg.accel_lim_x = 0.583501798941;

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
    msg.setTimeStamp(0.517694184135);
    msg.setSource(30001U);
    msg.setSourceEntity(119U);
    msg.setDestination(18047U);
    msg.setDestinationEntity(175U);
    msg.action = 176U;
    msg.lon_gain = 0.382670116711;
    msg.lat_gain = 0.211014053836;
    msg.bond_thick = 0.289142859436;
    msg.lead_gain = 0.548235075685;
    msg.deconfl_gain = 0.269561767327;
    msg.accel_switch_gain = 0.802384266059;
    msg.safe_dist = 0.820252345843;
    msg.deconflict_offset = 0.0458302779125;
    msg.accel_safe_margin = 0.683051616319;
    msg.accel_lim_x = 0.516901700215;

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
    msg.setTimeStamp(0.735571818843);
    msg.setSource(55080U);
    msg.setSourceEntity(248U);
    msg.setDestination(41790U);
    msg.setDestinationEntity(175U);
    msg.action = 130U;
    msg.lon_gain = 0.00151269959173;
    msg.lat_gain = 0.211803040401;
    msg.bond_thick = 0.176387449371;
    msg.lead_gain = 0.341120000852;
    msg.deconfl_gain = 0.518897026153;
    msg.accel_switch_gain = 0.630570092078;
    msg.safe_dist = 0.689478899343;
    msg.deconflict_offset = 0.753081951192;
    msg.accel_safe_margin = 0.31427078771;
    msg.accel_lim_x = 0.827561476538;

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
    msg.setTimeStamp(0.283704240282);
    msg.setSource(20605U);
    msg.setSourceEntity(146U);
    msg.setDestination(41033U);
    msg.setDestinationEntity(111U);
    msg.type = 42U;
    msg.op = 46U;
    msg.err_mean = 0.535502400747;
    msg.dist_min_abs = 0.647284229925;
    msg.dist_min_mean = 0.947402737476;
    msg.roll_rate_mean = 0.157019169513;
    msg.time = 0.323384474576;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 81U;
    tmp_msg_0.lon_gain = 0.277148548367;
    tmp_msg_0.lat_gain = 0.566589065659;
    tmp_msg_0.bond_thick = 0.357841901722;
    tmp_msg_0.lead_gain = 0.716083032347;
    tmp_msg_0.deconfl_gain = 0.347563819126;
    tmp_msg_0.accel_switch_gain = 0.563959485811;
    tmp_msg_0.safe_dist = 0.0998893203745;
    tmp_msg_0.deconflict_offset = 0.786678637748;
    tmp_msg_0.accel_safe_margin = 0.485955626974;
    tmp_msg_0.accel_lim_x = 0.244065507822;
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
    msg.setTimeStamp(0.504530265543);
    msg.setSource(15629U);
    msg.setSourceEntity(74U);
    msg.setDestination(34837U);
    msg.setDestinationEntity(145U);
    msg.type = 19U;
    msg.op = 197U;
    msg.err_mean = 0.485442745389;
    msg.dist_min_abs = 0.903992491391;
    msg.dist_min_mean = 0.647857230284;
    msg.roll_rate_mean = 0.460903030151;
    msg.time = 0.758242681657;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 226U;
    tmp_msg_0.lon_gain = 0.337430072861;
    tmp_msg_0.lat_gain = 0.941739902659;
    tmp_msg_0.bond_thick = 0.500377073531;
    tmp_msg_0.lead_gain = 0.688557548375;
    tmp_msg_0.deconfl_gain = 0.693708530701;
    tmp_msg_0.accel_switch_gain = 0.894724336568;
    tmp_msg_0.safe_dist = 0.832737493876;
    tmp_msg_0.deconflict_offset = 0.383924885033;
    tmp_msg_0.accel_safe_margin = 0.32486717014;
    tmp_msg_0.accel_lim_x = 0.139848465037;
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
    msg.setTimeStamp(0.640012515637);
    msg.setSource(62888U);
    msg.setSourceEntity(221U);
    msg.setDestination(65400U);
    msg.setDestinationEntity(121U);
    msg.type = 206U;
    msg.op = 56U;
    msg.err_mean = 0.182399455279;
    msg.dist_min_abs = 0.372698671744;
    msg.dist_min_mean = 0.367709301374;
    msg.roll_rate_mean = 0.363358885994;
    msg.time = 0.458714080305;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 69U;
    tmp_msg_0.lon_gain = 0.765472591076;
    tmp_msg_0.lat_gain = 0.670199004525;
    tmp_msg_0.bond_thick = 0.566994958969;
    tmp_msg_0.lead_gain = 0.861252098666;
    tmp_msg_0.deconfl_gain = 0.236004961741;
    tmp_msg_0.accel_switch_gain = 0.74773606095;
    tmp_msg_0.safe_dist = 0.107978793986;
    tmp_msg_0.deconflict_offset = 0.632632705202;
    tmp_msg_0.accel_safe_margin = 0.837934126003;
    tmp_msg_0.accel_lim_x = 0.153833412247;
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
    msg.setTimeStamp(0.470776913935);
    msg.setSource(61272U);
    msg.setSourceEntity(63U);
    msg.setDestination(17275U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.642890292607;
    msg.lon = 0.703429065974;
    msg.eta = 4035932389U;
    msg.duration = 60134U;

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
    msg.setTimeStamp(0.247449019497);
    msg.setSource(24748U);
    msg.setSourceEntity(208U);
    msg.setDestination(49951U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.743378622472;
    msg.lon = 0.527971757976;
    msg.eta = 99330212U;
    msg.duration = 34332U;

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
    msg.setTimeStamp(0.0490049514778);
    msg.setSource(42088U);
    msg.setSourceEntity(202U);
    msg.setDestination(53948U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.465964298879;
    msg.lon = 0.375501440507;
    msg.eta = 449999515U;
    msg.duration = 42250U;

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
    msg.setTimeStamp(0.792566831774);
    msg.setSource(32266U);
    msg.setSourceEntity(16U);
    msg.setDestination(40643U);
    msg.setDestinationEntity(130U);
    msg.plan_id = 32686U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.883486753833;
    tmp_msg_0.lon = 0.126688231406;
    tmp_msg_0.eta = 3967656120U;
    tmp_msg_0.duration = 60094U;
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
    msg.setTimeStamp(0.538654509357);
    msg.setSource(5553U);
    msg.setSourceEntity(34U);
    msg.setDestination(47103U);
    msg.setDestinationEntity(187U);
    msg.plan_id = 25862U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.495634567245;
    tmp_msg_0.lon = 0.69645044769;
    tmp_msg_0.eta = 2170703377U;
    tmp_msg_0.duration = 52007U;
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
    msg.setTimeStamp(0.440168085721);
    msg.setSource(40502U);
    msg.setSourceEntity(90U);
    msg.setDestination(14473U);
    msg.setDestinationEntity(240U);
    msg.plan_id = 32656U;

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
    msg.setTimeStamp(0.808634976753);
    msg.setSource(16698U);
    msg.setSourceEntity(51U);
    msg.setDestination(13407U);
    msg.setDestinationEntity(18U);
    msg.type = 22U;
    msg.command = 249U;
    msg.settings.assign("RNDIXQEPSRLNLGBNBOVVBYBWRBMDUGTIDOWVYBTNWUZKMSGXTMZZTQCOXMZTGSEEGECUBCCVPXIFEDAETNPYHIBIXUICAHGHHYFVIFPKWVEHNJZCCTNFUURZRQPDSLOVWMNAJKLPALYMQMEXJVQDVMLGTCLCFWEGYZKLQONUAOPTAIHGSKZ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 12362U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DAPITUWGLCWIQQOUTRGLPVGEHUKMNVKMLTUBXDRUXBIYKPTABNOQCZGWNPIMKKKXGOMBGBHJZNZZFRKMDZAEPAQJTEEGFGNHPYLEZWVVWHOVVQBTSKJYNEMFMYYSURAOXWJWLZEGLAZXHATBNCUJZFEUVRZCACPXUAOHOJQPCWHBIWDNYHYR");

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
    msg.setTimeStamp(0.672206898366);
    msg.setSource(19328U);
    msg.setSourceEntity(156U);
    msg.setDestination(9284U);
    msg.setDestinationEntity(10U);
    msg.type = 0U;
    msg.command = 180U;
    msg.settings.assign("ETQMCFFUJVJSHCEDYHJKAQZPGYWTHNYKSCNZOPSPKXMTPADURDOFXZNPCTGWMCOFRPERBZFAVLBAHUHSBIRVVFZJBLJFQXUKXTHLJAMPKIKQJYCJRCITOJIKSWUYGDMSMBSEEVBWXWURHQCGGQVOZQAQGCNUAPZOBLTPXXMFIPKEXHLTVOEBGCNQLSKUTASEDRUGLIIMWRNTIRMVWNWWDZF");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 55881U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.249020275695;
    tmp_tmp_msg_0_0.lon = 0.924668974954;
    tmp_tmp_msg_0_0.eta = 4087116562U;
    tmp_tmp_msg_0_0.duration = 59820U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JMWIHGDBAZYIRPZWFEIRLNWOGDFJJPDQJLUKMZGMQVUBKHVNCFAYNBJMYHVQBZALXUJKDBTXTOSSRIQSCOKCPVWPUUSBVTYRWMIGSTDOKBWYAGFHIOFOIGGXCFUDULKTQVHULCMXAPEXMKCRKTARTDVGQVEUZIULFSHJEOEZPGFWEAREDYGSRXPJNZCCKXAMPYMEEHYIJVTBXRWTYPCHBWKI");

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
    msg.setTimeStamp(0.730470427116);
    msg.setSource(27209U);
    msg.setSourceEntity(242U);
    msg.setDestination(34859U);
    msg.setDestinationEntity(210U);
    msg.type = 2U;
    msg.command = 107U;
    msg.settings.assign("GCXYGDUXSUZBUZBPOBICTVLXVVJITFIOQOMGZBXWPKTJMYKSYTISWNET");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 14296U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.839352899456;
    tmp_tmp_msg_0_0.lon = 0.600285069753;
    tmp_tmp_msg_0_0.eta = 1127255652U;
    tmp_tmp_msg_0_0.duration = 54626U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GYALAVJFWHSDNUIAJWLPCDJOWBKATKACOELLGVQGJSZUBEBQGRSXACSHZYMYXXXGURFWEQDTJTLSYPZPWVKPQJSNIYBBFGYOEKTKKJUHLVIZQRHUGJOUVZFWYIHQQXDAIXMFQJFECEPORVZNPUKONLNPPDZWCRWTIHNWXREUNMPTFTIQQNOHYDBGXAFDOSAKMCRXRKPMYSCMNZLZMBDGHDCIIMBR");

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
    msg.setTimeStamp(0.723189468961);
    msg.setSource(56628U);
    msg.setSourceEntity(235U);
    msg.setDestination(10058U);
    msg.setDestinationEntity(13U);
    msg.state = 70U;
    msg.plan_id = 61806U;
    msg.wpt_id = 210U;
    msg.settings_chk = 59682U;

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
    msg.setTimeStamp(0.68471944979);
    msg.setSource(25741U);
    msg.setSourceEntity(4U);
    msg.setDestination(49692U);
    msg.setDestinationEntity(225U);
    msg.state = 3U;
    msg.plan_id = 16840U;
    msg.wpt_id = 77U;
    msg.settings_chk = 59984U;

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
    msg.setTimeStamp(0.500261459631);
    msg.setSource(59267U);
    msg.setSourceEntity(51U);
    msg.setDestination(2229U);
    msg.setDestinationEntity(241U);
    msg.state = 217U;
    msg.plan_id = 58528U;
    msg.wpt_id = 153U;
    msg.settings_chk = 14363U;

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
    msg.setTimeStamp(0.874501114927);
    msg.setSource(42981U);
    msg.setSourceEntity(19U);
    msg.setDestination(39798U);
    msg.setDestinationEntity(147U);
    msg.uid = 58U;
    msg.frag_number = 130U;
    msg.num_frags = 0U;
    const char tmp_msg_0[] = {-112, -128, 67, -75, 44, -9, -88, 120, 77, 77, -13, 27, 56, 80, 120, -73, -111, 66, 110, -42, -100, 104, 118, -78, 99, -68, 115, 21, -22, 65, 98, -30, -35, 124, -62, -102, -72, -119, 0, -110, -98, 57, 72, 89, 116, 124, -96, -72, -94, -67, 24, -95, 71, 115, -85, 54, 29, -75, -86, 52, -18, -65, 106, -112, 59, 24, 57, -24, -4, 33, 79, 53, -53, -22, -122, 47, 4, -4, 46, -76, -114, -101, -32, 70, 85, -81, -111, 118, -29, 84, -19, 109, -3, 66, 46, -92, 23, -81, -17, -114, 94, 108, -119, 14, -51, -71, -38, -90, -25, 55, -109, 41, 12, 124, 13, -27, 97, -46, 35, -9, 27, 118, -72, 81, 24, -98, -100, -11, 80, 52, 97, 117, 36, 38, -68, 118, -99, -102, 49, -112, -4, 68, 46, -48, -45, 44, 25, -1, 119, 102, 99, -115, 29, -70, 57, 71, 106, 2, 99, -90, 82, -108, 53, -85, 26, 22, -82, -35, 4, 32, 77, 38, -24, -69, 84, 82, 120, -91, -122, -117, 84, 2, 59, 32, -59, -36, 63, 22, 115, 8, 42};
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
    msg.setTimeStamp(0.584525171601);
    msg.setSource(13072U);
    msg.setSourceEntity(187U);
    msg.setDestination(35096U);
    msg.setDestinationEntity(68U);
    msg.uid = 51U;
    msg.frag_number = 248U;
    msg.num_frags = 18U;
    const char tmp_msg_0[] = {-122, -63, -85, 82, 123, -102, 103, 75, 25, 41, 63, -49, -42, 103, 43, -26, 16, -89, -115, 79, 77, -67, -19, 75, -11, -33, 75, 33, 37, -63, -29, -57, 111, 109, -63, 72, 54, -111, -112, 126, 64, -34, -62, -65, -12, 21, -121, 119, -80, -69, 98, -98, 50, 9, -118, 60, -65, 97, -2, 91, -3, 70, 110, 73, -58, 110, -29, -109, -4, 91, 4, 24, -86, -106, 126, 66, 10, -79, -6, 102, 90, -54, -20, -88, -53, -109, -119, 80, -49, -43, 104, -97, 58, 4, -23, -6, 65, 121, 1, 77, -44, 4, 56, 125, -113, -23, 51, 25, 11, -32, -77, -107, 93, -5, -110, 95, -3, -61, -98, 81, 17, 18, 69, -117, 101, 87, 91, -8, 57, 74, -50, 12, 55, -46, 97, 31, -111, 76, 91, 60, 121, 48, -47, 6, 93, 100, 41, 27, 118, -2, -122, -108, 17, 112, 82, -20, -84, 37, -59, -93, 31, -81, 57, -118, -48, -62, 3, 42, 15, 32, -120, 71, 104, -116, 75, -17, 91, -32, 66, -28, -114, 23, 82, -87, 90, -69, 126, 101, -97, 14, 63, 8, 72, -72, -36, 1, 82, 40, 105, -56, -31, 104, 78, -7, -94, -112, -19, -105, -32, -9, -22, -57, 22, 42, -112, -43, 5, 78, -40, -61, 68, 32, -88, -81, -38, -37, -67, 19, -44, 97, 53, 66, -112, 6, 20, -83, 1};
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
    msg.setTimeStamp(0.576294545742);
    msg.setSource(59079U);
    msg.setSourceEntity(252U);
    msg.setDestination(45039U);
    msg.setDestinationEntity(119U);
    msg.uid = 120U;
    msg.frag_number = 182U;
    msg.num_frags = 199U;
    const char tmp_msg_0[] = {57, -11, 26, -43, -60, 35, -31, -22, -33, 61, -17, -114, 82, 92, -42, -8, -71, 96, 70, -83, -121, 35, 85, -25, -65, -64, 19, -9, 65, 119, 15, -23, 41, 45, -84, -30, 107, -116, -73, -32, 56, 46, 15, -81, 23, 87, 83, 39, 69, -14, 5, 30, -82, -7, -81, -51, 28, 75, -40, -42, -89, 27, -22, 15, -119, -68, -71, -15, -27, 56, -33, 76, -98, 25, 2, 115, 65, 115, 65, -85, 34, 36, -71, 30, -123, 48, 62, 125, -3, 40, 92, -87, 73, -90, 95, 73, -104, -40, -90};
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
    msg.setTimeStamp(0.292238816987);
    msg.setSource(34806U);
    msg.setSourceEntity(153U);
    msg.setDestination(33857U);
    msg.setDestinationEntity(158U);
    msg.content_type.assign("VQFJSPESWOHJCFHOLIUBLGAHTETRMBPNRQJVGODXYFXLNLYBEOFPDDJGGIMHKGIGZYQLUVIQIXAYVBKHCNZIYFEWCUDTGQMXUSZIGXNRHCSFCAF");
    const char tmp_msg_0[] = {-21, -48, 65, -63, -68, 34, 57, 94, 7, 89, 49, 21, -82, 62, -122, 14, 25, 70, 72, -69, 5, -54, -34, -110, -128, 91, -26, 40, -97, 71, 117, 38, 78, -17, -57, -81, 28, 107, -33, -115, 102, 60, 125, -69, 50, 53, 115, -11, -93, -43, 77, -48, -87, -25, -105, 54, 86, 120, 93, -70, 64, 51, -114, 5, -77, -128, 62, 21, -114, 96, 79, 106, -32, -37, -118, 75, 61, 4, -70, 69, -92, 41, -63, -111, -16, -58, -1, 72, 77, 73, -35, 52, 111, -85, 38, 28, -105, 59, -83, 59, -19, -67, -51, 111, 39, -126, 46, 125, 11, -48, 122, 91, -114, -33, -107, -70, -42, 35, -78, 34, -11, 64, 59, 90, -71, -70, 57, -11, 37, 105, -99, 14, -117, 107, -117, 72, 12, -20, -107, -42, 57, 116, 0, -32, -74, -88, 60, 117, 18, -40, -59, -9, -74, 43, 8, 97, 81, -102, 19, -9, -78, -77, -22, -85, 92, -89};
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
    msg.setTimeStamp(0.932261298149);
    msg.setSource(29843U);
    msg.setSourceEntity(91U);
    msg.setDestination(6930U);
    msg.setDestinationEntity(103U);
    msg.content_type.assign("EBSZNELSAUJMTBVZETMOKNGGTBQDNTEFLUUKKWTPSNXMAHSHMBGQICGIYNWTPI");
    const char tmp_msg_0[] = {91, -28, 40, -13, -67, 32, 120, 101, -2, 51, 94, 24, -50, 88, 41, 100, 17, 70, 22, 105, 66, -50, 6, 57, 99, -124, -120, 97, -3, 14, 92, -13, -101, 93, -61, -29, -64, 100, 24, 25, -48, 3, 5, 89, 114, 104, 93, 54, 70, -48, -2, 84, -99, -61, 88, 35, 106, -16, -9, 119, -41, -100, 84, 69, -100, -29, 20, -50, -13, 73, 85, 25, -46, -83, -56, -80, -17, -19, 11, -123, 89, -70, -89, -41, -106, 77, 5, 115, 72, -12, -80, 88, 91, -70, 115, -26, -70, 123, -87, 101, 5, 48, -69, 120, -69, -71, -81, -90, -112, 91, 5, 123, -102, 56, 2, -119, -73, 100, 120, 87, 22, -3, 63, -76, -113, 26, -31, -105, 46, 32, 6, 51, 108, -100, 83, -63, -78, 7, 71, -116, 15, 38, 75, 121, -66, 67, -38, -110, 113, 89, -2, -12, -68, -67, 42, -84, 28, -61, -22, 10, -94, -60, -91, -12, -84, 22, -15, -106, -92, 43, 5, 44, -6, -7, -34, 106, -7, 84, 53, -53, 111, -31, -40, -17, 100, -32, -60, 93, 85, 51, -19, -4, 40, 70, 113, 107, 108, -16, -45, 101, 37, -38, -51, 109, 116, 67, -85, -119, -49, -51, 97, 67, -82, -46, -30, 45, -41, -25, 104, -51, -57, 12, -124, 27, -95, 108, 45, 24, -28, -20, -109, -89, -45, -22, -38, -114, 52, 120, 51, 62, -24, -18, -56, -114, 89, -62, -124, 74, -19, -114};
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
    msg.setTimeStamp(0.926660461155);
    msg.setSource(51983U);
    msg.setSourceEntity(8U);
    msg.setDestination(14691U);
    msg.setDestinationEntity(26U);
    msg.content_type.assign("TAINBALAZCKKZARDOFBSROENDFEUDKAGIIHXIKVPNGFPYWVPDRZUJJEXXIEVXHJOVYVFGMDTGIQXQPHYAHUWFBQOGACWKUSUDYCYYTNNKJJULHHTTGESVTDHUPHBPASORJLPFDHQWXECLVMBFSMSJBEBPCFQTCZQTLHORNYVLDZCCRMKVYLWQKWGTRSSLBLRPMDICZWRWVNYQCUMIZMEOJEAFUBXSN");
    const char tmp_msg_0[] = {-44, 91, -14, -18, -77, -52, -92, 87, -93, -101, -13, -100, 1, -57, 74, 99, 123, -110, 100, 102, 36, -124, -31, -70, 97, 79, 90, -117, -64, -94, 65, 3, 114, 45, -91, -109, 120, -127, -39, -121, 106, 7, -88, -84, 32, -118, 123, -100, 9, 55, 76, 81, -23, -58, 47, -60, 5, 67, -54, 40, 3, 68, -14, -3, 84, 14, -112, 89, -119, -65, 21, 118, 5, -111, 95, 17, -103, -22, 104, 33, 95, 34, -53, 57, 98, -73, -91, 62, 75, 105, 33, -88, 123, 97, 20, -5, -1, -36, -64, 4, -2, -16, 9, 70, 117, 77, 75, 14, 10, 3, -59, 121, -57, -113, -45, -123, -90, 39, -109, 27, 113, -116, 78, -81, 8, -68, 120, 94, -34, 97, -89, 1, 67, -9, -62, -62, 66, 97, 26, -53, -62, -100, 71, -9, 15, -3, 0, -87, 61, -114, 81, -5, -76, 90, 18, -21, -21};
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
    msg.setTimeStamp(0.507665507153);
    msg.setSource(49602U);
    msg.setSourceEntity(235U);
    msg.setDestination(58198U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.510667366972);
    msg.setSource(54518U);
    msg.setSourceEntity(67U);
    msg.setDestination(5639U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.355164978699);
    msg.setSource(31223U);
    msg.setSourceEntity(95U);
    msg.setDestination(53057U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.960527095545);
    msg.setSource(36683U);
    msg.setSourceEntity(253U);
    msg.setDestination(46797U);
    msg.setDestinationEntity(20U);
    msg.target = 13575U;
    msg.bearing = 0.0149680905475;
    msg.elevation = 0.710799007769;

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
    msg.setTimeStamp(0.542945546543);
    msg.setSource(62367U);
    msg.setSourceEntity(156U);
    msg.setDestination(29277U);
    msg.setDestinationEntity(250U);
    msg.target = 64725U;
    msg.bearing = 0.447257272356;
    msg.elevation = 0.375408704168;

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
    msg.setTimeStamp(0.291330242246);
    msg.setSource(2487U);
    msg.setSourceEntity(40U);
    msg.setDestination(58231U);
    msg.setDestinationEntity(59U);
    msg.target = 26087U;
    msg.bearing = 0.919068149599;
    msg.elevation = 0.917289176515;

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
    msg.setTimeStamp(0.270052243462);
    msg.setSource(24699U);
    msg.setSourceEntity(103U);
    msg.setDestination(52742U);
    msg.setDestinationEntity(107U);
    msg.target = 56106U;
    msg.x = 0.30886841009;
    msg.y = 0.233427125198;
    msg.z = 0.431225429365;

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
    msg.setTimeStamp(0.583259565164);
    msg.setSource(40740U);
    msg.setSourceEntity(100U);
    msg.setDestination(25475U);
    msg.setDestinationEntity(220U);
    msg.target = 8041U;
    msg.x = 0.261083526163;
    msg.y = 0.629722977592;
    msg.z = 0.305629897005;

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
    msg.setTimeStamp(0.360944473621);
    msg.setSource(30887U);
    msg.setSourceEntity(106U);
    msg.setDestination(1623U);
    msg.setDestinationEntity(76U);
    msg.target = 28545U;
    msg.x = 0.219691165626;
    msg.y = 0.12181120696;
    msg.z = 0.374449088197;

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
    msg.setTimeStamp(0.833695982409);
    msg.setSource(51014U);
    msg.setSourceEntity(147U);
    msg.setDestination(31404U);
    msg.setDestinationEntity(207U);
    msg.target = 58789U;
    msg.lat = 0.966569930735;
    msg.lon = 0.168835036755;
    msg.z_units = 44U;
    msg.z = 0.384076923261;

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
    msg.setTimeStamp(0.387457183866);
    msg.setSource(35638U);
    msg.setSourceEntity(102U);
    msg.setDestination(13892U);
    msg.setDestinationEntity(110U);
    msg.target = 52434U;
    msg.lat = 0.352739763002;
    msg.lon = 0.830560620835;
    msg.z_units = 181U;
    msg.z = 0.731822134279;

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
    msg.setTimeStamp(0.438742714229);
    msg.setSource(32495U);
    msg.setSourceEntity(171U);
    msg.setDestination(31057U);
    msg.setDestinationEntity(196U);
    msg.target = 30397U;
    msg.lat = 0.199451239642;
    msg.lon = 0.0882907824917;
    msg.z_units = 91U;
    msg.z = 0.0388483179847;

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
    msg.setTimeStamp(0.32852189553);
    msg.setSource(59942U);
    msg.setSourceEntity(66U);
    msg.setDestination(236U);
    msg.setDestinationEntity(182U);
    msg.locale.assign("WLESALNLHRRMNLWTBUPJNCLTIQGHGEOMZXNGFUPDBHHVDBOPWTWBXEKFIJMSAUQMJCNLKBEKBVYDODVDSRBESDNPACXWWXFMLZKZCTNPATAGVJXIRPR");
    const char tmp_msg_0[] = {-74, -116, 71, 15, 9, 56, -69, -56, 94, -39, -126, 57, -25, 89, 95, -18, 56, 81, -16, -113, 53, 95, -96, 21, 2, 6, -91, 18, -44, -68, -125, -42, -125, -127, -116, -69, 126, -24, 96, 44, -92, -20, 48, 56, 46, 115, -70, -54, -63, 84, 29, -43, 78, -127, -4, -33, -85, 95, 3, -23, -33, -18, 26, -98, -120, 95, -66, -111, 71, 49, 61, -58, 90, -51, 63, -65, -79, -26, -16, 9, 20, 39, 121, -128, 1, -69, 26, 118, -3, 0, 3, 125, 114, -118, -124, -79, -4, 104, -92, -52, 96, 96, 106, -44, -67, -28, -37, 103, 118, -54, -120, -76, -99, -29, -120, -96, -45, 102, -45, -114, -94, 116, -69, 29, 105, 24, -17, 77, 98, 30, -88, -128, -97, 45, 56, -54, -43, -94, -75, 75, 114, -53, 8, 112, 60, -3, -30, -28, 99, -59, 14, -31, 35, 88, -29, 17, -81, -114, 26, 35, -112, -24, 123, 13, 23, 36, 66, 81, -104, 5, 51, 11, -77, -50, -65, -59, -10, 49, 10, -26, 92, -71, -13, -89, 31, -66, 15, 67, -32, -35, 27, -121, 71, 67, -125, -52, 63, -113, 29, 78, -72, 112, -47, 8, 34, 90, 50, -20, 2, -44, -41, -83, -42, -79, -13, -21, -77, 48, -93, 51, -8, -79, -112, -52, 41, -51, -86, -34, 69, 99, 119, 7, 98, 78, -30, -91, 66, -56, -39, 96, -45, -15, 119, 34, -24, -93};
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
    msg.setTimeStamp(0.311385824735);
    msg.setSource(24209U);
    msg.setSourceEntity(239U);
    msg.setDestination(23932U);
    msg.setDestinationEntity(252U);
    msg.locale.assign("GCKEQPBXFSNXHYKGAILCDPDFBDMUDLNVMCHSIOSBFFITMYUZZDPRGOBDSTGNHQACWLOYDPBAJJZGFYWWPNCYKDBJCJCLQWIHPZMFUOJKQAITLPOORUWSZGC");
    const char tmp_msg_0[] = {97, -17, 83, 48, 61, 55, 97, -65, -79, 33, 117, 97, -27, -80, -79, 88, -80, -120, -120, -10, -117, 113, -99, -69, -124, 25, 110, 73, -99, 7, -5, -20, -74, -55, 49};
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
    msg.setTimeStamp(0.342487056674);
    msg.setSource(7698U);
    msg.setSourceEntity(192U);
    msg.setDestination(45046U);
    msg.setDestinationEntity(140U);
    msg.locale.assign("AOROPRQGKWOLQTDBNVNCWFNEEZPZWZIMJLBXKLVJIHSWIMONWLSZJYPKKGSHP");
    const char tmp_msg_0[] = {-46, -31, 36, 64, 50, -38, -126, 68, 60, 119, -100, 5, -29, 123, -86, 77, -32, -36, 41, -11, 101, 115, 87, 103, -63};
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
    msg.setTimeStamp(0.4498599264);
    msg.setSource(63534U);
    msg.setSourceEntity(232U);
    msg.setDestination(30542U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.687840695042);
    msg.setSource(54288U);
    msg.setSourceEntity(182U);
    msg.setDestination(40779U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.687741785537);
    msg.setSource(10431U);
    msg.setSourceEntity(129U);
    msg.setDestination(18035U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.931073563844);
    msg.setSource(32894U);
    msg.setSourceEntity(41U);
    msg.setDestination(10983U);
    msg.setDestinationEntity(97U);
    msg.camid = 88U;
    msg.x = 38157U;
    msg.y = 12743U;

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
    msg.setTimeStamp(0.715247908572);
    msg.setSource(63566U);
    msg.setSourceEntity(187U);
    msg.setDestination(45687U);
    msg.setDestinationEntity(211U);
    msg.camid = 90U;
    msg.x = 21561U;
    msg.y = 50947U;

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
    msg.setTimeStamp(0.380533888614);
    msg.setSource(3395U);
    msg.setSourceEntity(19U);
    msg.setDestination(42675U);
    msg.setDestinationEntity(240U);
    msg.camid = 43U;
    msg.x = 24642U;
    msg.y = 54493U;

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
    msg.setTimeStamp(0.548997928226);
    msg.setSource(56632U);
    msg.setSourceEntity(5U);
    msg.setDestination(14936U);
    msg.setDestinationEntity(194U);
    msg.camid = 215U;
    msg.x = 43943U;
    msg.y = 31334U;

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
    msg.setTimeStamp(0.997445230396);
    msg.setSource(55986U);
    msg.setSourceEntity(64U);
    msg.setDestination(43626U);
    msg.setDestinationEntity(5U);
    msg.camid = 204U;
    msg.x = 49055U;
    msg.y = 2160U;

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
    msg.setTimeStamp(0.703823606354);
    msg.setSource(4281U);
    msg.setSourceEntity(46U);
    msg.setDestination(45627U);
    msg.setDestinationEntity(52U);
    msg.camid = 231U;
    msg.x = 42797U;
    msg.y = 56524U;

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
    msg.setTimeStamp(0.580050515598);
    msg.setSource(51700U);
    msg.setSourceEntity(108U);
    msg.setDestination(59640U);
    msg.setDestinationEntity(2U);
    msg.tracking = 8U;
    msg.lat = 0.65704434669;
    msg.lon = 0.891827810623;
    msg.x = 0.309104663753;
    msg.y = 0.506269321297;
    msg.z = 0.402338048001;

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
    msg.setTimeStamp(0.800402206425);
    msg.setSource(1176U);
    msg.setSourceEntity(164U);
    msg.setDestination(63191U);
    msg.setDestinationEntity(57U);
    msg.tracking = 38U;
    msg.lat = 0.617168307524;
    msg.lon = 0.349471867406;
    msg.x = 0.95476428375;
    msg.y = 0.200392600452;
    msg.z = 0.0347029746642;

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
    msg.setTimeStamp(0.0922668137879);
    msg.setSource(41556U);
    msg.setSourceEntity(228U);
    msg.setDestination(21032U);
    msg.setDestinationEntity(51U);
    msg.tracking = 30U;
    msg.lat = 0.663969266718;
    msg.lon = 0.371348240987;
    msg.x = 0.741174855806;
    msg.y = 0.339415161847;
    msg.z = 0.118032420549;

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
    msg.setTimeStamp(0.246023182045);
    msg.setSource(21611U);
    msg.setSourceEntity(155U);
    msg.setDestination(39887U);
    msg.setDestinationEntity(70U);
    msg.target.assign("QCIAAOUSOHWXCIFEMGZXTXOKLMTWLHOPXTZLCJBIFPSBVISMGDRFELVRXLAICPBEZMXJYHKPCINUEGKKWXNDQHZUGYJHWURDSOSMDVYCETRBPRQMHYXINFTTQKOJSYHDFNNVJQYJRUMVFJREYSARGPLATDOINFLHJASBQRCOKCWQMDFZGVLCVVTAKGDFZOXT");
    msg.lbearing = 0.746105042021;
    msg.lelevation = 0.189545450943;
    msg.bearing = 0.778985942653;
    msg.elevation = 0.778052729756;
    msg.phi = 0.922544733793;
    msg.theta = 0.103496428301;
    msg.psi = 0.135875308297;
    msg.accuracy = 0.00188488209842;

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
    msg.setTimeStamp(0.81984370489);
    msg.setSource(848U);
    msg.setSourceEntity(189U);
    msg.setDestination(16146U);
    msg.setDestinationEntity(232U);
    msg.target.assign("ZAWHLZVOQGWUKHMPQGIDZHIBUJXCZDCTXXZDRGYLEPTPLVAHCOJQLNNMODFNOBFFIBPIQSMOBXHPQQDYKKNUUKHLRAODKCCWWRJLWLNCEDPKSEGFMQFUBTJUIZIWGSBNNMKJURETFTOZZWNJYBXEYRTTXBSMYSXSIVGKFEAJTFYJRYVSVPTAAACRWJIVDHJWVOHEKYXIGMZXHDMNAUIGWUAXNFFTLMSEZPSCVQHLKYVORGDORCVCASGQLB");
    msg.lbearing = 0.0218163736981;
    msg.lelevation = 0.544075880954;
    msg.bearing = 0.149992625847;
    msg.elevation = 0.678043296839;
    msg.phi = 0.666938142902;
    msg.theta = 0.785580917132;
    msg.psi = 0.832477525576;
    msg.accuracy = 0.59286160351;

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
    msg.setTimeStamp(0.458858115557);
    msg.setSource(47168U);
    msg.setSourceEntity(54U);
    msg.setDestination(22666U);
    msg.setDestinationEntity(86U);
    msg.target.assign("ODLBRVSHLTNIGGCHBGDAXUEEBBWJNVAGMINKDFMWUJNTTAEKUWLJYBVGTRDZYUKYXHPFHQRHYNJFD");
    msg.lbearing = 0.970296546204;
    msg.lelevation = 0.813572459641;
    msg.bearing = 0.583633254801;
    msg.elevation = 0.324249334678;
    msg.phi = 0.390892206447;
    msg.theta = 0.257934679747;
    msg.psi = 0.328837916994;
    msg.accuracy = 0.829926134735;

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
    msg.setTimeStamp(0.28525653685);
    msg.setSource(44933U);
    msg.setSourceEntity(192U);
    msg.setDestination(46242U);
    msg.setDestinationEntity(4U);
    msg.target.assign("QSDTZMURWQJATHMKDOHXENPBXGCJDRNSIZKNIMZPXYSFYOCLFXIYPRQHNZULBWVDQABJSJNADZRPJTWXBQBYZQUANFDLOLSEXFHJNEJBVNEOGELYOERFTBEHZFUKWKQBGLKPFCTSLVYGUPEVEXBCNQZAPDDUEKOUPZIQFYYWWGTRVRVAMGFSYCTIDJHUIDBMMUACKLRWCVIARSPCMAQPHOGJZLVCRVXKTGIK");
    msg.x = 0.574198241564;
    msg.y = 0.99091518777;
    msg.z = 0.809470258281;
    msg.n = 0.0775640698699;
    msg.e = 0.219836928628;
    msg.d = 0.537798450095;
    msg.phi = 0.307169029303;
    msg.theta = 0.316955963361;
    msg.psi = 0.577277128693;
    msg.accuracy = 0.32641480595;

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
    msg.setTimeStamp(0.923302957518);
    msg.setSource(25798U);
    msg.setSourceEntity(48U);
    msg.setDestination(5547U);
    msg.setDestinationEntity(21U);
    msg.target.assign("JBRRQBJDSE");
    msg.x = 0.930229497128;
    msg.y = 0.950518190579;
    msg.z = 0.237874822518;
    msg.n = 0.517068399814;
    msg.e = 0.511766954054;
    msg.d = 0.184289749856;
    msg.phi = 0.606996326436;
    msg.theta = 0.928843883098;
    msg.psi = 0.335886666422;
    msg.accuracy = 0.578779937712;

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
    msg.setTimeStamp(0.666952151847);
    msg.setSource(30927U);
    msg.setSourceEntity(3U);
    msg.setDestination(27598U);
    msg.setDestinationEntity(19U);
    msg.target.assign("TQSGHDDCJJOBPODQKWVPVBJCVHBMZJNRSVBUQMLTAMASETRZLCMBWKFJDFLWLMRPDMGEPJGYRWLEJBKUIHZFSATIPALE");
    msg.x = 0.190521019338;
    msg.y = 0.890328319264;
    msg.z = 0.0264576877297;
    msg.n = 0.114737503401;
    msg.e = 0.381236222683;
    msg.d = 0.240944720508;
    msg.phi = 0.353295497248;
    msg.theta = 0.476919719989;
    msg.psi = 0.972845674095;
    msg.accuracy = 0.131977527977;

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
    msg.setTimeStamp(0.957945413206);
    msg.setSource(48412U);
    msg.setSourceEntity(218U);
    msg.setDestination(782U);
    msg.setDestinationEntity(228U);
    msg.target.assign("SUQSSDLQRICRZSIMHLZYLXMZVAJDMRJTOAWZMDMQNVAPJWNMWFTLWLSZFCZYNBIQVMFOFUZSLXVHCPQUYOMIKFQKDAUOXY");
    msg.lat = 0.189691636428;
    msg.lon = 0.586325899322;
    msg.z_units = 111U;
    msg.z = 0.237988644685;
    msg.accuracy = 0.728355263838;

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
    msg.setTimeStamp(0.218360769501);
    msg.setSource(49946U);
    msg.setSourceEntity(55U);
    msg.setDestination(15458U);
    msg.setDestinationEntity(35U);
    msg.target.assign("PYYJRQZTKPKWIOOTBIWGNXXCCRYKEFPZWNKAHGBFKCVZZFXEAGNGXAORQYVYPEHEATGQQOFMMAGSGHMLZYUYNWOZAFVNNAHEVZRRLZFMJISVWFTSVRUDWNPECRSOPIELKWYZNU");
    msg.lat = 0.0478588329485;
    msg.lon = 0.225778493081;
    msg.z_units = 11U;
    msg.z = 0.570601311399;
    msg.accuracy = 0.15012943286;

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
    msg.setTimeStamp(0.582520902451);
    msg.setSource(5970U);
    msg.setSourceEntity(192U);
    msg.setDestination(53019U);
    msg.setDestinationEntity(54U);
    msg.target.assign("HBVBTFQVDKMFSDQSXJPUPCKXLUJCRWMZGTYDLYMHWJOELJMEDBXBKGERAFCGIRLPHOOSWLUJQWAZTAYBGF");
    msg.lat = 0.611235582492;
    msg.lon = 0.177348903867;
    msg.z_units = 246U;
    msg.z = 0.701068427008;
    msg.accuracy = 0.142874545378;

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
    msg.setTimeStamp(0.555651986308);
    msg.setSource(40389U);
    msg.setSourceEntity(209U);
    msg.setDestination(10603U);
    msg.setDestinationEntity(238U);
    msg.name.assign("BTVNSWGQRQQKUVYJXPFBKNSDLXUFNTFLPCPTZULLRCMPRYKDTDJIIYOHVTDCLAUUDXCOYLYGTOYZOUXJRMXQWVBKXIKRFH");
    msg.lat = 0.845864741451;
    msg.lon = 0.315366870062;
    msg.z = 0.14119138137;
    msg.z_units = 50U;

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
    msg.setTimeStamp(0.663378111797);
    msg.setSource(64911U);
    msg.setSourceEntity(43U);
    msg.setDestination(62431U);
    msg.setDestinationEntity(161U);
    msg.name.assign("MFXGCBKENRWCJLPUYHWXICSFTCNTEQQOMIJLRVGYMEGHZQRQOHPJFONAWQIDWEIAWVDBOWLNMRXDLQBMAZINHQCZGWKPSLLCFTMTCTVBJINAKUTEVG");
    msg.lat = 0.263214276056;
    msg.lon = 0.319131951527;
    msg.z = 0.036488056432;
    msg.z_units = 27U;

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
    msg.setTimeStamp(0.788830298838);
    msg.setSource(49592U);
    msg.setSourceEntity(161U);
    msg.setDestination(52484U);
    msg.setDestinationEntity(88U);
    msg.name.assign("XAWVSPYPBMSDISLENVNWUDUEKPAIEKFHLQBCQTOOFBGKIHJRKQLGMOLVAJYGBCCMLHSYAJKMZBXEEWZOVSFBRPWRJQJDQCCQHFYPHTPQKZE");
    msg.lat = 0.443039067771;
    msg.lon = 0.227311878604;
    msg.z = 0.668609067771;
    msg.z_units = 108U;

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
    msg.setTimeStamp(0.514486737826);
    msg.setSource(50577U);
    msg.setSourceEntity(94U);
    msg.setDestination(61007U);
    msg.setDestinationEntity(129U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.594748145139);
    msg.setSource(32906U);
    msg.setSourceEntity(64U);
    msg.setDestination(27514U);
    msg.setDestinationEntity(213U);
    msg.op = 116U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("MADFVUJMZBZNVFVKOCGMEZPSSVEQYTLZNSJCNFGIPJBTAAETTKAQXYYBHURNTULCRCQGFSPMKRYVLAIUBCEZHOOZDFLMNWSCPJCSWWKFQQNFDKREXGFIRILLIOCTQIDJIUHLJKYV");
    tmp_msg_0.lat = 0.303162999085;
    tmp_msg_0.lon = 0.689316800768;
    tmp_msg_0.z = 0.483654450454;
    tmp_msg_0.z_units = 178U;
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
    msg.setTimeStamp(0.153574565668);
    msg.setSource(55632U);
    msg.setSourceEntity(33U);
    msg.setDestination(31982U);
    msg.setDestinationEntity(134U);
    msg.op = 85U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("PFQSUNCZYTAMQXBCZWCXMFIYPOAILVCTUGKWLTDHGMXNEGVITQNFDIYKGHNARVNDJBUPSCXLINJIXZSZMLBUUBRKRWZBQGZSFLEUMZMVWCESMQELDQAOXNTUCROENYSHYEQUMDPXBWIDEJDBPRVJFYPVUGSGFKZQDROKKKHOSEGIYWPZJEJLAFYVEJAHIUTFJRADYDCOWYXIOCBHH");
    tmp_msg_0.lat = 0.474309841607;
    tmp_msg_0.lon = 0.418671130952;
    tmp_msg_0.z = 0.51047821689;
    tmp_msg_0.z_units = 41U;
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
    msg.setTimeStamp(0.171066169737);
    msg.setSource(32530U);
    msg.setSourceEntity(199U);
    msg.setDestination(41561U);
    msg.setDestinationEntity(157U);
    msg.value = 0.0715205088159;
    msg.type = 237U;

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
    msg.setTimeStamp(0.373429046985);
    msg.setSource(3902U);
    msg.setSourceEntity(102U);
    msg.setDestination(25336U);
    msg.setDestinationEntity(241U);
    msg.value = 0.496686590022;
    msg.type = 87U;

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
    msg.setTimeStamp(0.419109085302);
    msg.setSource(4924U);
    msg.setSourceEntity(19U);
    msg.setDestination(61171U);
    msg.setDestinationEntity(84U);
    msg.value = 0.403671515542;
    msg.type = 197U;

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
    msg.setTimeStamp(0.806525647026);
    msg.setSource(34060U);
    msg.setSourceEntity(251U);
    msg.setDestination(52933U);
    msg.setDestinationEntity(73U);
    msg.value = 0.221238720961;

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
    msg.setTimeStamp(0.1738535243);
    msg.setSource(47847U);
    msg.setSourceEntity(195U);
    msg.setDestination(7829U);
    msg.setDestinationEntity(28U);
    msg.value = 0.701860416868;

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
    msg.setTimeStamp(0.925212388149);
    msg.setSource(13095U);
    msg.setSourceEntity(184U);
    msg.setDestination(50056U);
    msg.setDestinationEntity(228U);
    msg.value = 0.738566137529;

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
    msg.setTimeStamp(0.127943089251);
    msg.setSource(40598U);
    msg.setSourceEntity(138U);
    msg.setDestination(65487U);
    msg.setDestinationEntity(87U);
    msg.timestamp_last_service = 0.377328067137;
    msg.time_next_service = 0.998974878372;
    msg.time_motor_next_service = 0.584951491378;
    msg.time_idle_ground = 0.0264203599712;
    msg.time_idle_air = 0.069728553303;
    msg.time_idle_water = 0.332967102702;
    msg.time_idle_underwater = 0.732760766617;
    msg.time_idle_unknown = 0.922514961253;
    msg.time_motor_ground = 0.467851967597;
    msg.time_motor_air = 0.0592203126406;
    msg.time_motor_water = 0.230992032485;
    msg.time_motor_underwater = 0.176443373425;
    msg.time_motor_unknown = 0.735616371555;
    msg.rpm_min = -27843;
    msg.rpm_max = 31595;
    msg.depth_max = 0.937431077515;

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
    msg.setTimeStamp(0.347239718489);
    msg.setSource(28347U);
    msg.setSourceEntity(3U);
    msg.setDestination(19592U);
    msg.setDestinationEntity(224U);
    msg.timestamp_last_service = 0.822030325276;
    msg.time_next_service = 0.957892109207;
    msg.time_motor_next_service = 0.149382113469;
    msg.time_idle_ground = 0.617226309779;
    msg.time_idle_air = 0.879433930235;
    msg.time_idle_water = 0.772756287167;
    msg.time_idle_underwater = 0.876558697651;
    msg.time_idle_unknown = 0.978146378097;
    msg.time_motor_ground = 0.369962605006;
    msg.time_motor_air = 0.500734762996;
    msg.time_motor_water = 0.48991395729;
    msg.time_motor_underwater = 0.298307011048;
    msg.time_motor_unknown = 0.904101778337;
    msg.rpm_min = -22819;
    msg.rpm_max = -22163;
    msg.depth_max = 0.0548154074676;

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
    msg.setTimeStamp(0.518450273855);
    msg.setSource(42354U);
    msg.setSourceEntity(104U);
    msg.setDestination(46890U);
    msg.setDestinationEntity(247U);
    msg.timestamp_last_service = 0.379560465845;
    msg.time_next_service = 0.789798189992;
    msg.time_motor_next_service = 0.36489914042;
    msg.time_idle_ground = 0.852354850256;
    msg.time_idle_air = 0.650328093411;
    msg.time_idle_water = 0.861778543622;
    msg.time_idle_underwater = 0.734777182552;
    msg.time_idle_unknown = 0.355721362903;
    msg.time_motor_ground = 0.435505118673;
    msg.time_motor_air = 0.887593201748;
    msg.time_motor_water = 0.143191777172;
    msg.time_motor_underwater = 0.989931247165;
    msg.time_motor_unknown = 0.817088786818;
    msg.rpm_min = -32671;
    msg.rpm_max = -16937;
    msg.depth_max = 0.518939228423;

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
    msg.setTimeStamp(0.561923089366);
    msg.setSource(41584U);
    msg.setSourceEntity(158U);
    msg.setDestination(8586U);
    msg.setDestinationEntity(20U);
    msg.severity = 92U;
    msg.text.assign("CHZETLGZCGZYUXBGJQTDRCSOCQVYBUDWIGHMFFBYJSITQHNTIJYADBJENKNJPQTFOPPVHXOVUALVPNWAEQFUBMYGCPENDVWZSLCAIEKKSHMP");

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
    msg.setTimeStamp(0.615262265869);
    msg.setSource(27602U);
    msg.setSourceEntity(143U);
    msg.setDestination(64774U);
    msg.setDestinationEntity(110U);
    msg.severity = 224U;
    msg.text.assign("ZKDLTDLMCBBDUJKOSCBAKDRHWDFCNANCHYVVSFIYQGUJGKOXZGDPEAAYTYEXRENHVEXILGJXGGGPPFLXXMTBOKLRJEWIKACGYQJOSSRKCIGZFCBPEVVOFNDIETLUDWQROKCJTSZNIQVAJWQXQFHAWLMRBHTDSQHVWDXMZBQXNVPUKPFKUMAPLWZSSNMOFNAOQRUGWFCT");

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
    msg.setTimeStamp(0.220810297182);
    msg.setSource(42465U);
    msg.setSourceEntity(225U);
    msg.setDestination(56003U);
    msg.setDestinationEntity(153U);
    msg.severity = 173U;
    msg.text.assign("EOHDUHATKORVQELJTZBWMVOSOMWQRKXUYXWBLDXYBCQJNXSAICJZVTVMLWTILNGHN");

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
    msg.setTimeStamp(0.770642062284);
    msg.setSource(37942U);
    msg.setSourceEntity(204U);
    msg.setDestination(25118U);
    msg.setDestinationEntity(5U);
    msg.channel = 47;
    msg.value = 1814835947;
    msg.gain = 155U;

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
    msg.setTimeStamp(0.817235178506);
    msg.setSource(43858U);
    msg.setSourceEntity(117U);
    msg.setDestination(28932U);
    msg.setDestinationEntity(33U);
    msg.channel = -29;
    msg.value = 1804733993;
    msg.gain = 197U;

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
    msg.setTimeStamp(0.127866071214);
    msg.setSource(52330U);
    msg.setSourceEntity(27U);
    msg.setDestination(19348U);
    msg.setDestinationEntity(13U);
    msg.channel = -70;
    msg.value = -822311671;
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
    msg.setTimeStamp(0.988028509585);
    msg.setSource(5572U);
    msg.setSourceEntity(254U);
    msg.setDestination(45685U);
    msg.setDestinationEntity(242U);
    msg.ch01 = 0.563648342723;
    msg.ch02 = 0.139415038933;
    msg.ch03 = 0.344261987892;
    msg.ch04 = 0.30944051459;
    msg.ch05 = 0.942334220824;
    msg.ch06 = 0.796261061234;
    msg.ch07 = 0.231918953544;
    msg.ch08 = 0.564174445108;
    msg.ch09 = 0.222890176809;
    msg.ch10 = 0.996832035292;
    msg.ch11 = 0.983101162737;
    msg.ch12 = 0.692403476871;
    msg.ch13 = 0.691336718526;
    msg.ch14 = 0.29283007668;
    msg.ch15 = 0.985155785533;
    msg.ch16 = 0.631405973958;

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
    msg.setTimeStamp(0.43939144807);
    msg.setSource(40839U);
    msg.setSourceEntity(19U);
    msg.setDestination(11670U);
    msg.setDestinationEntity(200U);
    msg.ch01 = 0.844276777115;
    msg.ch02 = 0.973475101833;
    msg.ch03 = 0.978323029066;
    msg.ch04 = 0.80693071674;
    msg.ch05 = 0.145827949217;
    msg.ch06 = 0.525224360053;
    msg.ch07 = 0.258519626718;
    msg.ch08 = 0.051546735584;
    msg.ch09 = 0.316457968525;
    msg.ch10 = 0.120641058324;
    msg.ch11 = 0.405524189976;
    msg.ch12 = 0.269830704523;
    msg.ch13 = 0.325268740599;
    msg.ch14 = 0.515022212356;
    msg.ch15 = 0.793607443827;
    msg.ch16 = 0.302378824612;

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
    msg.setTimeStamp(0.0536878076139);
    msg.setSource(17775U);
    msg.setSourceEntity(159U);
    msg.setDestination(32753U);
    msg.setDestinationEntity(39U);
    msg.ch01 = 0.763180982855;
    msg.ch02 = 0.679654115232;
    msg.ch03 = 0.992841901203;
    msg.ch04 = 0.714487337403;
    msg.ch05 = 0.522078246397;
    msg.ch06 = 0.259853044764;
    msg.ch07 = 0.907381093732;
    msg.ch08 = 0.626904923519;
    msg.ch09 = 0.25230303964;
    msg.ch10 = 0.880899269518;
    msg.ch11 = 0.0498274542741;
    msg.ch12 = 0.877424675305;
    msg.ch13 = 0.265399450855;
    msg.ch14 = 0.648895830244;
    msg.ch15 = 0.0520794457876;
    msg.ch16 = 0.636382020353;

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
    msg.setTimeStamp(0.678961534861);
    msg.setSource(29233U);
    msg.setSourceEntity(41U);
    msg.setDestination(47807U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.574109949007;
    msg.lon = 0.940230582889;
    msg.x = 0.845680832493;
    msg.y = 0.668049215525;
    msg.vx = 0.480296856699;
    msg.vy = 0.0108734741451;
    msg.depth = 252U;
    msg.speed = 0.905025712006;
    msg.psi = 0.481656309528;

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
    msg.setTimeStamp(0.672085933038);
    msg.setSource(37756U);
    msg.setSourceEntity(243U);
    msg.setDestination(44464U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.329250586819;
    msg.lon = 0.0368409890075;
    msg.x = 0.23282047265;
    msg.y = 0.458283495853;
    msg.vx = 0.067091900141;
    msg.vy = 0.128419876401;
    msg.depth = 144U;
    msg.speed = 0.270156987597;
    msg.psi = 0.859775430582;

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
    msg.setTimeStamp(0.834512418043);
    msg.setSource(61486U);
    msg.setSourceEntity(58U);
    msg.setDestination(31385U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.117686821295;
    msg.lon = 0.950885953594;
    msg.x = 0.639606227484;
    msg.y = 0.443171667511;
    msg.vx = 0.715619154208;
    msg.vy = 0.713744125162;
    msg.depth = 91U;
    msg.speed = 0.311648635461;
    msg.psi = 0.287203160289;

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
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.667706232281);
    msg.setSource(52984U);
    msg.setSourceEntity(115U);
    msg.setDestination(41589U);
    msg.setDestinationEntity(157U);
    msg.value = 0.470430030447;

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
    msg.setTimeStamp(0.737542379278);
    msg.setSource(8273U);
    msg.setSourceEntity(125U);
    msg.setDestination(57577U);
    msg.setDestinationEntity(122U);
    msg.value = 0.51141241425;

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
    msg.setTimeStamp(0.45196529285);
    msg.setSource(53079U);
    msg.setSourceEntity(84U);
    msg.setDestination(38911U);
    msg.setDestinationEntity(237U);
    msg.value = 0.274854495632;

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
