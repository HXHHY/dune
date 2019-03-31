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
// IMC XML MD5: b076e3580221f2bfbcb8bf5c1a59419e                            *
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
    msg.setTimeStamp(0.229482354164);
    msg.setSource(44295U);
    msg.setSourceEntity(156U);
    msg.setDestination(45312U);
    msg.setDestinationEntity(191U);
    msg.state = 250U;
    msg.flags = 62U;
    msg.description.assign("LFJGYEOBMMRSSICUZROUOPKYNPDHODSDLTPZXVSHJYVJAWAMCYUCLSEZNVDEGVFQGTAAHNOIFUPTHVKRVFUFEIXXXNDJKCJQPJIMGTEOIGKTKBXOBTWEIMCBPPMXWAKEDNKTSOLTNYSYDRIWJEWBLCVYRKFG");

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
    msg.setTimeStamp(0.0566091923094);
    msg.setSource(16557U);
    msg.setSourceEntity(0U);
    msg.setDestination(16363U);
    msg.setDestinationEntity(221U);
    msg.state = 57U;
    msg.flags = 217U;
    msg.description.assign("ZZYAWIXJWCGPGNULAENLVJXSRXQNZJFOOZSOLHFLTQBEGTQNMSARKAZGMWXMXGYGBHUEFNIFIROYZKLSFTQDHOTJGOYCKUCAPOKMWOOHMXYEUXBIJQUUHWLVYRIKIPAIBJNEZVTUTTQKQVVNJPEXRTLXVASSAWCDPBSDFLDPWCDPNDQVFKZAWCYCBKVLCFHB");

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
    msg.setTimeStamp(0.753112404569);
    msg.setSource(64580U);
    msg.setSourceEntity(117U);
    msg.setDestination(52854U);
    msg.setDestinationEntity(155U);
    msg.state = 64U;
    msg.flags = 113U;
    msg.description.assign("IGSBJLMMGCUCNTAKEGHTXXYKXVKRSFPNMMANDWVRKVACEIVLYPGHAHVPGZHDKLOWZMEFRZWBZOJYBACWZNRGIFXOWCWMSGFKRCINEKXBXNCUEBFDPFKTKVLMYNRQJWHUXS");

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
    msg.setTimeStamp(0.199350580496);
    msg.setSource(48927U);
    msg.setSourceEntity(240U);
    msg.setDestination(31536U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.438273215671);
    msg.setSource(40847U);
    msg.setSourceEntity(199U);
    msg.setDestination(31510U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.749011667053);
    msg.setSource(55219U);
    msg.setSourceEntity(152U);
    msg.setDestination(36996U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.835069379961);
    msg.setSource(10526U);
    msg.setSourceEntity(15U);
    msg.setDestination(59315U);
    msg.setDestinationEntity(156U);
    msg.id = 207U;
    msg.label.assign("YDRODNVRJKIDVYTYGRYHTPULIYXLEDCOZVKQPZTLSAVHXCAFWVJFMWOMARXFUSBSROXEQIFXPOBAAJBCQBNRUAFVZJMSZPRLWEWB");
    msg.component.assign("MSGPWCSWDEOGFKYZXYLHRINVGTJFHKEDPDQCOJWVUVACBQFLENBBJVHIUTDQJFCGGIAMEJVTMY");
    msg.act_time = 25088U;
    msg.deact_time = 8551U;

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
    msg.setTimeStamp(0.822109887238);
    msg.setSource(60665U);
    msg.setSourceEntity(176U);
    msg.setDestination(19336U);
    msg.setDestinationEntity(172U);
    msg.id = 213U;
    msg.label.assign("OUICKVDESDADVCTWKIYWFWAUMRNLMLSZVTYAJKOUSCEBPNOXRASEHLVCFFHYSCSTVDZAOMPDGNDJLBIVKYDZOJOQERIKQHSYNFXAAHJHPXRFBJZBINHXLSUWQTJJUUEEPYXUZALIZIMBWXFUDGRLPBSFOBGSRGVGBQPLUONWQDQCTORYHYZWNKPFZZCCKNIUEKGRLXMCMQVPFWNABKTGQJXPOEFTTYXEKTGNCMWRLREGIDQGJTHHAPZXMV");
    msg.component.assign("HHNHJLUBZKCHFAJZCJOQORVLMCSVKBSSEXBEYAMZSBPFGYXXFISHLVUEPASDTMKSOIPWVGHFBZPJGBMHGKGRAXXLYTEVZBRDMNQOHLGFRUXEMSQEJKJDLVYELATYLWJQJCYADOPAIQN");
    msg.act_time = 24089U;
    msg.deact_time = 38386U;

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
    msg.setTimeStamp(0.820664366612);
    msg.setSource(53305U);
    msg.setSourceEntity(186U);
    msg.setDestination(9421U);
    msg.setDestinationEntity(87U);
    msg.id = 149U;
    msg.label.assign("TYMLDTCEVFHYVDAWIQRUESIOPVTKYIQ");
    msg.component.assign("IZLXLLKKOTBDMGHAOXHAKMJCBFHETVCFRHPEYGKJXCDRONBNYJDZDWODLQRWYKVUMQZIPUBRLILDCLMGMCHBQZXAYVXQZESNEUWIWNQIXPBWVVMTUBZHBTSWXLGHUQNPTEXUACPXQAPGOTRYXFNJIQLDMUE");
    msg.act_time = 16060U;
    msg.deact_time = 23948U;

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
    msg.setTimeStamp(0.275360970493);
    msg.setSource(22577U);
    msg.setSourceEntity(219U);
    msg.setDestination(392U);
    msg.setDestinationEntity(99U);
    msg.id = 24U;

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
    msg.setTimeStamp(0.272614312202);
    msg.setSource(23252U);
    msg.setSourceEntity(178U);
    msg.setDestination(17105U);
    msg.setDestinationEntity(205U);
    msg.id = 197U;

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
    msg.setTimeStamp(0.331346937524);
    msg.setSource(1682U);
    msg.setSourceEntity(73U);
    msg.setDestination(14237U);
    msg.setDestinationEntity(192U);
    msg.id = 156U;

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
    msg.setTimeStamp(0.238376445952);
    msg.setSource(26915U);
    msg.setSourceEntity(138U);
    msg.setDestination(40359U);
    msg.setDestinationEntity(131U);
    msg.op = 130U;
    msg.list.assign("FAIWODICOQFNKCGBJHVPCYBLNWQHQUPODTQKFVLMVGJNECTTRGAPTCIHNYPYTVIHSUHUBFIVNBFJWTYQXOGZXFRASZKDZCRSCYXVQVPWZVEEIKRCBVUUEEQQTLAKZURPSALRBKTSGEBWMOYETFIKWXXGKUQYSXILZLEWNFAEHAOGYDRWODTZWKOMJPHBPVSAJSDMXLRMMOBHHQDEDYBNGFXL");

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
    msg.setTimeStamp(0.824249681553);
    msg.setSource(25339U);
    msg.setSourceEntity(192U);
    msg.setDestination(448U);
    msg.setDestinationEntity(80U);
    msg.op = 202U;
    msg.list.assign("MFDZXMQVLSNTAQMRUPKTSVSWJZNLZYGECBRWJQISVUNHIIGDSFAWSHQLLKQGWYOJWDBDKSMLXENHXBT");

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
    msg.setTimeStamp(0.374376109704);
    msg.setSource(14119U);
    msg.setSourceEntity(157U);
    msg.setDestination(1175U);
    msg.setDestinationEntity(130U);
    msg.op = 202U;
    msg.list.assign("PZPWQFHFJLTZTNQOHPKFYRVUWNUDDWDMHPOJUMASGRIYQDNXVSQQJLDFXTCIEYGERFXSNJDTEKTXJWSWKVAMGGIDHUBLIQHVZQABEWUIXGULXQWBPFFBABZRCARMJREQHTKVNYMIKAPEJMEIVDMUBJSSRNNFGPKBOLJIYCFCLKGOSSIHUBFEXVHZYGAYZCMNPNOTKLCOOLTWGAZYDHWDVRKLLEOZXPSVEBMTZIAYO");

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
    msg.setTimeStamp(0.426569953716);
    msg.setSource(5179U);
    msg.setSourceEntity(153U);
    msg.setDestination(49607U);
    msg.setDestinationEntity(155U);
    msg.value = 233U;

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
    msg.setTimeStamp(0.604691040988);
    msg.setSource(15423U);
    msg.setSourceEntity(48U);
    msg.setDestination(64553U);
    msg.setDestinationEntity(145U);
    msg.value = 242U;

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
    msg.setTimeStamp(0.633469266561);
    msg.setSource(55178U);
    msg.setSourceEntity(225U);
    msg.setDestination(49379U);
    msg.setDestinationEntity(149U);
    msg.value = 199U;

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
    msg.setTimeStamp(0.0729546040623);
    msg.setSource(47112U);
    msg.setSourceEntity(227U);
    msg.setDestination(60721U);
    msg.setDestinationEntity(249U);
    msg.consumer.assign("ZFQPHQKBHOSPEKJDPJQULLCZRJEFUIBQVIRGJHWER");
    msg.message_id = 19986U;

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
    msg.setTimeStamp(0.353826910829);
    msg.setSource(43839U);
    msg.setSourceEntity(130U);
    msg.setDestination(64256U);
    msg.setDestinationEntity(197U);
    msg.consumer.assign("LALMKXHROMBYXGRTWZUAALVBUGLJRVUIPSROJFNWBKVHAFVNDDNSBDVFJEWMYIPGYXDNQXLDMRSYOFRHMLHJJRVSHFCQNRIDPNWBKQTBRTTPPCFSOAOPGBXWITWZGMILQUZYENUKWPKLKGYNCXKRDMIIXQEFPATHXOFAEQBQEDSSBUYSEEUAKEKJCZKWHDCCIHPVMJQXBCXYSWHVGUEYQJMVACWJPOGSUMTFOFJCNZIUTLIZCODNOHVTZTAZLG");
    msg.message_id = 43707U;

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
    msg.setTimeStamp(0.0749845369728);
    msg.setSource(37593U);
    msg.setSourceEntity(2U);
    msg.setDestination(59382U);
    msg.setDestinationEntity(74U);
    msg.consumer.assign("INGUWUSCBZZPGVHUDAXJLREWJOLTUCREPJQSXZOAVFLWPPQLVWQVGLLIRXUERBYVHXCJGFCFATAWVIDYODEKGPOSTMAOAVPKJRKSBKMVIXFNWDHWSTKANNZZOTZMHNSJNCUEWNTDPCKYQXJWUMNJPCBTXDLDHJHARKGFZQRYSFSTNFHYYLZPSFOBETOE");
    msg.message_id = 61548U;

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
    msg.setTimeStamp(0.545231578355);
    msg.setSource(8265U);
    msg.setSourceEntity(81U);
    msg.setDestination(32422U);
    msg.setDestinationEntity(135U);
    msg.type = 152U;

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
    msg.setTimeStamp(0.0377816200985);
    msg.setSource(59433U);
    msg.setSourceEntity(123U);
    msg.setDestination(24596U);
    msg.setDestinationEntity(194U);
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
    msg.setTimeStamp(0.613275271903);
    msg.setSource(57263U);
    msg.setSourceEntity(28U);
    msg.setDestination(3048U);
    msg.setDestinationEntity(109U);
    msg.type = 143U;

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
    msg.setTimeStamp(0.131451165592);
    msg.setSource(32480U);
    msg.setSourceEntity(237U);
    msg.setDestination(62501U);
    msg.setDestinationEntity(164U);
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
    msg.setTimeStamp(0.631113369552);
    msg.setSource(36948U);
    msg.setSourceEntity(240U);
    msg.setDestination(2972U);
    msg.setDestinationEntity(18U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.409590915906);
    msg.setSource(21517U);
    msg.setSourceEntity(151U);
    msg.setDestination(45531U);
    msg.setDestinationEntity(54U);
    msg.op = 133U;

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
    msg.setTimeStamp(0.280722037452);
    msg.setSource(49445U);
    msg.setSourceEntity(225U);
    msg.setDestination(6903U);
    msg.setDestinationEntity(110U);
    msg.total_steps = 104U;
    msg.step_number = 142U;
    msg.step.assign("YMYUNQQJPUOXYXARPGTYSJIFQHYPVTFUMEXUWYGKATFGTIECOSXGHBQPDCFRPCSZTHDKTGNASGHJIDLYCWXVUTLJOREHFOEMQZNGVSILUAWALNURMCZQERDBZJKSFCPXLELJJSWHDMWQJXSNNKPXNEVKIATCGZR");
    msg.flags = 112U;

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
    msg.setTimeStamp(0.981038307463);
    msg.setSource(24552U);
    msg.setSourceEntity(48U);
    msg.setDestination(61738U);
    msg.setDestinationEntity(112U);
    msg.total_steps = 130U;
    msg.step_number = 16U;
    msg.step.assign("LGAYKIVGUBLKVVHXWYZFZTSYGDSGEFRMVWQGBASODYDGPFBZMDSBHPPQJYVHZTNWXSCMPNFTRKSKRGNFEWOPIAKRNLKQDEBNPGQVJADSNIMCFZDATKUZIUTUCTZHJKGVBOEXDIYQWRSAVURZU");
    msg.flags = 240U;

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
    msg.setTimeStamp(0.487993529318);
    msg.setSource(20473U);
    msg.setSourceEntity(49U);
    msg.setDestination(54016U);
    msg.setDestinationEntity(44U);
    msg.total_steps = 52U;
    msg.step_number = 124U;
    msg.step.assign("RARBQBPILXSJXPEAMXTJKURDZNGGEFIRVSTV");
    msg.flags = 76U;

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
    msg.setTimeStamp(0.551505229046);
    msg.setSource(1070U);
    msg.setSourceEntity(198U);
    msg.setDestination(30536U);
    msg.setDestinationEntity(116U);
    msg.state = 121U;
    msg.error.assign("TEFYLWUFPAKNTGBE");

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
    msg.setTimeStamp(0.684529639323);
    msg.setSource(22177U);
    msg.setSourceEntity(29U);
    msg.setDestination(40521U);
    msg.setDestinationEntity(107U);
    msg.state = 197U;
    msg.error.assign("NBRYDJXYVNQSXTTRQLTKXGJWFIUCYM");

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
    msg.setTimeStamp(0.700330070462);
    msg.setSource(51299U);
    msg.setSourceEntity(41U);
    msg.setDestination(11334U);
    msg.setDestinationEntity(225U);
    msg.state = 26U;
    msg.error.assign("ZLHXZVQWUQJYYLDKQVZGEPKSOCBQORFFVTVNFWC");

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
    msg.setTimeStamp(0.844266542827);
    msg.setSource(49193U);
    msg.setSourceEntity(252U);
    msg.setDestination(30868U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.361146926711);
    msg.setSource(27394U);
    msg.setSourceEntity(166U);
    msg.setDestination(12877U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.90700031319);
    msg.setSource(64344U);
    msg.setSourceEntity(135U);
    msg.setDestination(48164U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.218671631479);
    msg.setSource(38453U);
    msg.setSourceEntity(223U);
    msg.setDestination(20588U);
    msg.setDestinationEntity(35U);
    msg.op = 62U;
    msg.speed_min = 0.374997748509;
    msg.speed_max = 0.616659934017;
    msg.long_accel = 0.796382614938;
    msg.alt_max_msl = 0.841606176954;
    msg.dive_fraction_max = 0.170776417867;
    msg.climb_fraction_max = 0.0737006382382;
    msg.bank_max = 0.235404721809;
    msg.p_max = 0.164740107734;
    msg.pitch_min = 0.788088753888;
    msg.pitch_max = 0.800607200851;
    msg.q_max = 0.260437510626;
    msg.g_min = 0.724937590685;
    msg.g_max = 0.635798541071;
    msg.g_lat_max = 0.161746951543;
    msg.rpm_min = 0.857880541201;
    msg.rpm_max = 0.287931041414;
    msg.rpm_rate_max = 0.360638376322;

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
    msg.setTimeStamp(0.642727797619);
    msg.setSource(5806U);
    msg.setSourceEntity(238U);
    msg.setDestination(29649U);
    msg.setDestinationEntity(122U);
    msg.op = 63U;
    msg.speed_min = 0.326767356759;
    msg.speed_max = 0.916165762815;
    msg.long_accel = 0.531809362737;
    msg.alt_max_msl = 0.013182614512;
    msg.dive_fraction_max = 0.0746638047156;
    msg.climb_fraction_max = 0.0275888233987;
    msg.bank_max = 0.205664268508;
    msg.p_max = 0.239928117181;
    msg.pitch_min = 0.37667518483;
    msg.pitch_max = 0.386661146612;
    msg.q_max = 0.459667251953;
    msg.g_min = 0.249293868902;
    msg.g_max = 0.578997875614;
    msg.g_lat_max = 0.218634408842;
    msg.rpm_min = 0.474717479394;
    msg.rpm_max = 0.268841432598;
    msg.rpm_rate_max = 0.0935124831087;

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
    msg.setTimeStamp(0.715944622471);
    msg.setSource(43748U);
    msg.setSourceEntity(120U);
    msg.setDestination(50399U);
    msg.setDestinationEntity(138U);
    msg.op = 248U;
    msg.speed_min = 0.320386098764;
    msg.speed_max = 0.608815376313;
    msg.long_accel = 0.229075943002;
    msg.alt_max_msl = 0.963375381466;
    msg.dive_fraction_max = 0.211088058546;
    msg.climb_fraction_max = 0.602850735633;
    msg.bank_max = 0.778137872229;
    msg.p_max = 0.221199626934;
    msg.pitch_min = 0.469597965743;
    msg.pitch_max = 0.815219212146;
    msg.q_max = 0.273291901142;
    msg.g_min = 0.133460476495;
    msg.g_max = 0.0900553957934;
    msg.g_lat_max = 0.316023659636;
    msg.rpm_min = 0.151414281802;
    msg.rpm_max = 0.0187366728008;
    msg.rpm_rate_max = 0.477272107349;

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
    msg.setTimeStamp(0.549046302513);
    msg.setSource(22697U);
    msg.setSourceEntity(177U);
    msg.setDestination(10700U);
    msg.setDestinationEntity(226U);
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.387808691662;
    tmp_msg_0.lon = 0.676432679911;
    tmp_msg_0.alt = 0.4563696477;
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
    msg.setTimeStamp(0.634489482577);
    msg.setSource(46818U);
    msg.setSourceEntity(96U);
    msg.setDestination(59941U);
    msg.setDestinationEntity(130U);
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 14U;
    tmp_msg_0.range = 0.157840027546;
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
    msg.setTimeStamp(0.0815737185976);
    msg.setSource(38205U);
    msg.setSourceEntity(65U);
    msg.setDestination(10793U);
    msg.setDestinationEntity(99U);
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.68331204434;
    tmp_msg_0.confidence = 0.161711278396;
    tmp_msg_0.opmodes.assign("COOVOFMCWMIAGYNOQYIKXJGSGLOCESDKXQESKJHGBNNCTVHAGVKZTSTRGQARSIFBZILDOYEKZETZUKPJYYJKDTHLPPCYJHDWCYKBCAMAQWUTGHWMUFRRTRRDXBSENURIOABNQBXLXSQI");
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
    msg.setTimeStamp(0.223981109167);
    msg.setSource(57990U);
    msg.setSourceEntity(102U);
    msg.setDestination(64124U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.233064009361;
    msg.lon = 0.324678760357;
    msg.height = 0.632798910043;
    msg.x = 0.398160251639;
    msg.y = 0.362003364788;
    msg.z = 0.225074561488;
    msg.phi = 0.663364325471;
    msg.theta = 0.781323431536;
    msg.psi = 0.580319169588;
    msg.u = 0.334795449357;
    msg.v = 0.0777144098838;
    msg.w = 0.75569613126;
    msg.p = 0.292765121282;
    msg.q = 0.822074359654;
    msg.r = 0.378293756536;
    msg.svx = 0.359341242327;
    msg.svy = 0.827365292568;
    msg.svz = 0.779568377064;

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
    msg.setTimeStamp(0.989493978948);
    msg.setSource(58782U);
    msg.setSourceEntity(141U);
    msg.setDestination(9787U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.950512901289;
    msg.lon = 0.179189357389;
    msg.height = 0.497852157041;
    msg.x = 0.372824232785;
    msg.y = 0.838482500123;
    msg.z = 0.910886275848;
    msg.phi = 0.422977612552;
    msg.theta = 0.474372204767;
    msg.psi = 0.300135435009;
    msg.u = 0.359989935002;
    msg.v = 0.676448807942;
    msg.w = 0.916934792102;
    msg.p = 0.425470732558;
    msg.q = 0.577562234886;
    msg.r = 0.227780337533;
    msg.svx = 0.0131345129083;
    msg.svy = 0.0516414265536;
    msg.svz = 0.0854760666855;

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
    msg.setTimeStamp(0.47088760748);
    msg.setSource(64908U);
    msg.setSourceEntity(250U);
    msg.setDestination(62435U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.554831597988;
    msg.lon = 0.329617762826;
    msg.height = 0.823797412177;
    msg.x = 0.323538671587;
    msg.y = 0.583994664451;
    msg.z = 0.798669902881;
    msg.phi = 0.888252767506;
    msg.theta = 0.336162225693;
    msg.psi = 0.59479516168;
    msg.u = 0.454903345598;
    msg.v = 0.869924783118;
    msg.w = 0.5311352601;
    msg.p = 0.257633888137;
    msg.q = 0.897534829747;
    msg.r = 9.26295904616e-05;
    msg.svx = 0.399966084856;
    msg.svy = 0.282519093253;
    msg.svz = 0.283295761837;

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
    msg.setTimeStamp(0.875054163965);
    msg.setSource(20663U);
    msg.setSourceEntity(245U);
    msg.setDestination(36071U);
    msg.setDestinationEntity(155U);
    msg.op = 156U;
    msg.entities.assign("FHJRXUBMEZYNBAFDSWSQREQNMVHMSZBGOANMCQATCLTRIJUWMUIRBNPOTWPDJYZPXDONCPBHXUZLZNTQBUHRAWENZFK");

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
    msg.setTimeStamp(0.0513813941956);
    msg.setSource(1649U);
    msg.setSourceEntity(17U);
    msg.setDestination(60548U);
    msg.setDestinationEntity(203U);
    msg.op = 0U;
    msg.entities.assign("VROLLPFYONEWCYRRRGJAZRHJXCMDYZTPDBIUFCXNVILTCVLCEBZHRKDMGUMWXZTHERZKMHQZXQGWHUQZOPAPALKACVAGUKOSRBEGJTJJTXTFNHWAQEJKHEXBMNIOTJBZQYNDMLBDAVRMKDNYAQGSUPFFMIDHJMALUYYLFJXYPFQZOONWDKQHNSXKSKYMCCBXEVFDGS");

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
    msg.setTimeStamp(0.356747170179);
    msg.setSource(35700U);
    msg.setSourceEntity(82U);
    msg.setDestination(26251U);
    msg.setDestinationEntity(129U);
    msg.op = 225U;
    msg.entities.assign("HPETFTKEHVDUVJKRJDKEDWEUNRTZNXJTIGHATKWXVSSZKYFLSYSAUXRMYDMKMBODMPBQSMARKLUSAUDCFRPUNJHHNJDCAPIVNYLQJJCGUQCOPGFNSHWBITLUZXCZTFIKQLOQHYC");

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
    msg.setTimeStamp(0.553218872149);
    msg.setSource(4398U);
    msg.setSourceEntity(156U);
    msg.setDestination(35991U);
    msg.setDestinationEntity(62U);
    msg.type = 252U;
    msg.speed = 64682U;
    const char tmp_msg_0[] = {54, 41, 0, 79, 95, 64, 92, 125, 80, 85, 24, -104, -104, 105, -73, -29, 102, -86, 61, 67, -3, -11, -8, 86, 87, -115, -34, 81, -45, -3, 70, 72, 59, -76, -21, -99, 110, 33, -128, 18, 22, -2, 61, -87, -29, 68, 70, 40, -29, 100, 92, -77};
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
    msg.setTimeStamp(0.551872527719);
    msg.setSource(46699U);
    msg.setSourceEntity(149U);
    msg.setDestination(32237U);
    msg.setDestinationEntity(139U);
    msg.type = 161U;
    msg.speed = 35717U;
    const char tmp_msg_0[] = {34, 98, -39, -124, 15, 12, -21, 17, -8, -16, -92, -64, -54, 39, 110, -100, -17, -64, 82, -125, 94, -16, 74, -5, -72, 41, -80, -52, 122, 12, 45, 97, 66, -56, -37, -104, 3, -45, -24, -7, 44, 125, -19, -108, -20, 93, -74, -21, -92, 34, 46, -76, -4, -59, 93, -112, 50, -73, 107, -14, -65, -46, 46, -38, 93, -86, 20, -37, -69, -36, 47, -13, -27, 54, -90, -49, -21, -124, -122, -103, -18, 4, 114, -33, -114, -118, -113, -121, 94, -63, -18, 83, -65, -113, -114, -54, -21, -52, -39, -79, -109, 73, 126, 37, -101, 29, -97, -29, 1, 91, -107, 101, 71, -121, -19, 33, -71, -37, -57, -82, 34, 31, -125, 97, 70, 11, 11, 54, 25};
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
    msg.setTimeStamp(0.628523742364);
    msg.setSource(6379U);
    msg.setSourceEntity(52U);
    msg.setDestination(52930U);
    msg.setDestinationEntity(234U);
    msg.type = 41U;
    msg.speed = 21397U;
    const char tmp_msg_0[] = {76, -114, 102, -19, 94, -112, -62, 29, 80, -104, -48, -25, 77, 106, -3, 56, -19, -25, 85, 25, -86, -54, -106, -34, 49, 102, -91, -66, 16, -12, 120, 33, -68, 114, -75, 38, -28, 23, -12, 108, 72, 114, -67, 90, -72, -9, -109, 114, -3, 104, 62, -95, -49, -20, 39, -70, 90, -84, -3, -117, 44, 116, -83, -113, -114, 13, -110, 112, -84, -84, -90, -92, 79, -127, -4, -105, 20, 36, 7, 61, 57, -77, 59, 17, -127, -121, 99, 56, 35, -37, -93, -31, 34, -10, -128, 89, 8, 37, -127, -127, -64, 15, -127, -53, -22, 119, -87, -59, 124, -117, -96, -117, -99, -93, 7, 99, -114, 99, 8, 72, 58, 80, -56, -50, 118, 24, 40, -48, 1, 11, 120, 26, -63, 20, -62, -75, -96, -17, 6, -12, -17, -81, 57, 28, -112, 2, -74, 14, -93, -90, 51, 80, 74, -110, -32, -27, -117, -54, 15, 93, 100, -90, -33, -12, -49, -56, -100, -6, 75, -11, 84, 72, 8, -102, 61, 59, -19, 58, -78, -68, 94, -111, 35, -38, 59, 23, -108};
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
    msg.setTimeStamp(0.579332833356);
    msg.setSource(32098U);
    msg.setSourceEntity(58U);
    msg.setDestination(39194U);
    msg.setDestinationEntity(29U);
    msg.op = 151U;
    msg.tas2acc_pgain = 0.396230902206;
    msg.bank2p_pgain = 0.910570338149;

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
    msg.setTimeStamp(0.0103372834938);
    msg.setSource(51642U);
    msg.setSourceEntity(7U);
    msg.setDestination(11292U);
    msg.setDestinationEntity(74U);
    msg.op = 41U;
    msg.tas2acc_pgain = 0.958624463363;
    msg.bank2p_pgain = 0.0424594569753;

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
    msg.setTimeStamp(0.369289712143);
    msg.setSource(41574U);
    msg.setSourceEntity(200U);
    msg.setDestination(20219U);
    msg.setDestinationEntity(97U);
    msg.op = 122U;
    msg.tas2acc_pgain = 0.216234411402;
    msg.bank2p_pgain = 0.158879984131;

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
    msg.setTimeStamp(0.528895906312);
    msg.setSource(1591U);
    msg.setSourceEntity(123U);
    msg.setDestination(35123U);
    msg.setDestinationEntity(179U);
    msg.available = 1636971855U;
    msg.value = 113U;

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
    msg.setTimeStamp(0.294859342191);
    msg.setSource(4393U);
    msg.setSourceEntity(208U);
    msg.setDestination(22102U);
    msg.setDestinationEntity(158U);
    msg.available = 1480596673U;
    msg.value = 35U;

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
    msg.setTimeStamp(0.0882191783456);
    msg.setSource(50479U);
    msg.setSourceEntity(193U);
    msg.setDestination(32043U);
    msg.setDestinationEntity(76U);
    msg.available = 3143426495U;
    msg.value = 57U;

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
    msg.setTimeStamp(0.715222715356);
    msg.setSource(11198U);
    msg.setSourceEntity(151U);
    msg.setDestination(46854U);
    msg.setDestinationEntity(52U);
    msg.op = 234U;
    msg.snapshot.assign("IUMKHZARWMAJCSTPHBQXLORBJQDXOKIBGGZFETZBOHMTMDFYKEPIOLPQXT");
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 144U;
    tmp_msg_0.value = 89U;
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
    msg.setTimeStamp(0.490459382793);
    msg.setSource(21648U);
    msg.setSourceEntity(202U);
    msg.setDestination(966U);
    msg.setDestinationEntity(133U);
    msg.op = 26U;
    msg.snapshot.assign("ZRDLATHPWEQDFEMZOWKXZURFUOCFSYBWSYZEVLYHEZDEXZHMYJONIQMXRCIJKISDVVADFOQHAHPXZDIBAPLSMFDQUBNFSKRKNJJYIFBDQUIIGMAMVIZRLKJTCBGTWOMNXJCGGYEZHTTEKVXXCVGLNBHYGGBFCVESOYTVNURDORZLVABTEVHQXABCPGKKLWPHMCPPRTNNRLCYGUSIPU");
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("BYYOVUNDEKXRHTGZATYWKCRUDXONZBCPQOFXDZSHGLAGSWLOKNQSYHIIMBLZLWCUWTJJBVURRKDJZEIFIDZMFABETGHCYLXNAEXOUSMPEQOGNPRACUMAFBIEBNVWIAMCVLXUGAGIMQSMLKWWTODFNZQNZZU");
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
    msg.setTimeStamp(0.494382837796);
    msg.setSource(62242U);
    msg.setSourceEntity(223U);
    msg.setDestination(1510U);
    msg.setDestinationEntity(108U);
    msg.op = 95U;
    msg.snapshot.assign("COWQPAORSNKJWGDYJVBZZCNDWPOGDXQLLXXJEFSYZXSMUJNCFFITINVHKMLYIPTXXQSRLSPBXEAPB");
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 239U;
    tmp_msg_0.plan_id.assign("NXVWTEROWFRMJGEKEOHBPETDXKWHNZDESFTIXZZNGQLRG");
    tmp_msg_0.comm_level = 104U;
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
    msg.setTimeStamp(0.891092315416);
    msg.setSource(36895U);
    msg.setSourceEntity(215U);
    msg.setDestination(1287U);
    msg.setDestinationEntity(1U);
    msg.op = 54U;
    msg.name.assign("ECLJGAMPOFSTNRTJZBQJFNLMBXRNDHHXNFSXWPUHMKVJAIVUPKWXIHMMPEUTSZFVKYTIEQYUUCLQEQGYZMQQZKLJOAJFXZCYWDDBHSQZIGHKVJCBDCSEPPYMUGIEVSCFEAYPOGNYLNXGCOMFKRTNGWLFHARBHOXVIWRVELBGSAVNHVRDCPAWTKDWRZIQXDRAYEBOF");

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
    msg.setTimeStamp(0.00866250010632);
    msg.setSource(55890U);
    msg.setSourceEntity(209U);
    msg.setDestination(48276U);
    msg.setDestinationEntity(48U);
    msg.op = 44U;
    msg.name.assign("PWHBDVEMVTKZJNAPOOBFDYBDISHSECOVXFRQAKVUGFHPZXTZBMAFVOGPLMBZQSYUZNLTFRKNVDMQSKFJZQHGGTHOSIUDSFUUBYWAJRGLHZOSGIWCTJICOTMYXDIOCNMXEIYQRPSLUTZNCTRGIZJRLBWHPFXQW");

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
    msg.setTimeStamp(0.0180518010615);
    msg.setSource(39647U);
    msg.setSourceEntity(147U);
    msg.setDestination(42745U);
    msg.setDestinationEntity(95U);
    msg.op = 138U;
    msg.name.assign("FSTSIROLZQAQMHGZUEOAYSNVHQNRLHICVX");

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
    msg.setTimeStamp(0.791902262964);
    msg.setSource(44351U);
    msg.setSourceEntity(178U);
    msg.setDestination(15544U);
    msg.setDestinationEntity(24U);
    msg.type = 15U;
    msg.htime = 0.951404703153;
    msg.context.assign("NMCLFRSTSZHIRWYZVZDQWOBLMFPKMGDTZAITYYSRUROALGJECJPCBQJYOVWEVX");
    msg.text.assign("JWQMAHKUQAFTKSEFNMWMDCPMKNFEIBYBNMFROLPZYWTBWZHHJQLYAV");

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
    msg.setTimeStamp(0.85325752894);
    msg.setSource(52961U);
    msg.setSourceEntity(42U);
    msg.setDestination(17378U);
    msg.setDestinationEntity(217U);
    msg.type = 137U;
    msg.htime = 0.148428447861;
    msg.context.assign("QNTGMDNYOUGMSPSKRLCRJWBCUZZCJXIJKSARHHPQNZKHCTJWRNOPCMNADPKYXTCDPVLGIKQZOBBUYZOHMVMEYDXXYGOIAIYQMIUYAVEFWSZKJXINRAMQEFZSBNLYMWSNBEBZYWRXKVZAJLBIRBOGUFMISQVTPTPRFZMJDHWLPJFWLFAFFJQXDWFELLQXTSETDVKWUVFCCHLGHUBNAUDGIVKROVQABWRSPEAGTGQIXHKDNJHCDH");
    msg.text.assign("PEMUBKOETGYOKVNVYUVPURMH");

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
    msg.setTimeStamp(0.371047439415);
    msg.setSource(40400U);
    msg.setSourceEntity(69U);
    msg.setDestination(53990U);
    msg.setDestinationEntity(180U);
    msg.type = 70U;
    msg.htime = 0.561753670212;
    msg.context.assign("XQQYZELSFJJIRMOULPNJPKOIYMLAAJWJKQBBEWDCSEGZFIAWXDIXDSGGBXYALTYJFKMRKKWZ");
    msg.text.assign("YANHVCCRHFPTFAKWJWTSZHGKEWUVINYPXZCLCVBOECDNLSXYMMMHEOGDNFBODKDPHVUUCAAVQTEYCKSQX");

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
    msg.setTimeStamp(0.593873841598);
    msg.setSource(11346U);
    msg.setSourceEntity(180U);
    msg.setDestination(59085U);
    msg.setDestinationEntity(229U);
    msg.command = 37U;
    msg.htime = 0.823468556;

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
    msg.setTimeStamp(0.00591056162851);
    msg.setSource(58522U);
    msg.setSourceEntity(63U);
    msg.setDestination(20571U);
    msg.setDestinationEntity(210U);
    msg.command = 220U;
    msg.htime = 0.0931461767032;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 2U;
    tmp_msg_0.htime = 0.539378064575;
    tmp_msg_0.context.assign("OFWBCKAVMXYPWXAARNRJBMQNMFFPNUEPVIGDTLUBBMOPEUSFHQSPJDRQQENGGZIZFQRYBVUWYRVAOXJFSNDDNIIXCKUUAKQHVTRPWTTELGJLHZMBKMLEMOUORHRLWIWVQKEFWDEHKOQFGPADVPGULSORDJESXKZNOGHZMNVDVMHYZLZILIYTTJYBSQJXEBWKCRCFETPDIJXXNXJYSUHXYWAZGWDASCQTOBCCCZAYSLNYZHKFP");
    tmp_msg_0.text.assign("OXAYVFJKIYSGHEPCWHFDEGKS");
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
    msg.setTimeStamp(0.432347062853);
    msg.setSource(49614U);
    msg.setSourceEntity(147U);
    msg.setDestination(60765U);
    msg.setDestinationEntity(193U);
    msg.command = 139U;
    msg.htime = 0.984534484304;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 23U;
    tmp_msg_0.htime = 0.479190698381;
    tmp_msg_0.context.assign("PPBLJKSSDVQIWRLQNNLSPWTUDEFGTXBWJYFHJRXMRJZCWQGCQPIOAZBEECOWMFKOAOINAPXGLXSTX");
    tmp_msg_0.text.assign("BKJVDVMKBLJDDRZZLNHWSLCKWTQNZWVOXDETFGEQIAUKMHQDRTPNVNNGGVNUVCOYUAGBPCREDCRFSLRPDAIWDMEKPCMKGOWJXPAPOCQHJFWTUFIQRIILUXYRNMHOWSRHNUBMWXSTJELPGJLCNKZZXVQFYCHQXTPYG");
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
    msg.setTimeStamp(0.407230013454);
    msg.setSource(35555U);
    msg.setSourceEntity(86U);
    msg.setDestination(28262U);
    msg.setDestinationEntity(163U);
    msg.op = 210U;
    msg.file.assign("UWGMHALHDNEFMABSJQGRAMHTKSHLAJKVRMBXRSEZOMRSQGURHBFUTJDVWZCXQIOYYGFXYBLCIASQOTYPOMLLAVVTNVTVXOXCRLIWAEHKIQPJCROFEGSRFTNBOEIGFEUUPUZJCNWJZLVPQEVRHIMDOVLCCFPQZBYTUPWNYBXYEFLEUNDASUBNOKQAYCJHQWJUKFIZYVEXPXTMRLZDGMNFPWICNWZJKPJKBTWIZOXNWSK");

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
    msg.setTimeStamp(0.72894176625);
    msg.setSource(51661U);
    msg.setSourceEntity(133U);
    msg.setDestination(31431U);
    msg.setDestinationEntity(81U);
    msg.op = 109U;
    msg.file.assign("KLKOVUGNGZXPUSJMGAXVCAJKQZKMEJBMWYEAQXVHIYFK");

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
    msg.setTimeStamp(0.582933213634);
    msg.setSource(64634U);
    msg.setSourceEntity(69U);
    msg.setDestination(33158U);
    msg.setDestinationEntity(143U);
    msg.op = 209U;
    msg.file.assign("FZZIAPVARKPQFLLDVYZFQNBKJXOTUCRXKYWYUMNRIBHISYGIOOUCTPLMNVZFVFKDCELVQSQNABEPAXXXCZRWOMDZTUEPEOKYWKZJSOPGGSBDQJFBQSLSVRJWMRVKIVZCBVFFQISEDCGHJLMDVMWEZTBHXMBGHRTYPWGNMHJGRQCKILTKTIQUZXRODWCIPQSHETHNUOMUNIWJEYKDHRGJHXNAJFXUYBDJNEASODAMWSL");

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
    msg.setTimeStamp(0.402206393763);
    msg.setSource(18816U);
    msg.setSourceEntity(205U);
    msg.setDestination(6657U);
    msg.setDestinationEntity(33U);
    msg.op = 240U;
    msg.clock = 0.607069870136;
    msg.tz = 28;

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
    msg.setTimeStamp(0.730266417483);
    msg.setSource(65272U);
    msg.setSourceEntity(251U);
    msg.setDestination(43846U);
    msg.setDestinationEntity(74U);
    msg.op = 215U;
    msg.clock = 0.491067982985;
    msg.tz = -121;

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
    msg.setTimeStamp(0.96505006359);
    msg.setSource(51415U);
    msg.setSourceEntity(86U);
    msg.setDestination(50293U);
    msg.setDestinationEntity(161U);
    msg.op = 136U;
    msg.clock = 0.816754330025;
    msg.tz = -36;

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
    msg.setTimeStamp(0.563167622446);
    msg.setSource(50536U);
    msg.setSourceEntity(198U);
    msg.setDestination(12876U);
    msg.setDestinationEntity(84U);
    msg.conductivity = 0.108334329663;
    msg.temperature = 0.669842086853;
    msg.depth = 0.597834673901;

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
    msg.setTimeStamp(0.403851248998);
    msg.setSource(42983U);
    msg.setSourceEntity(22U);
    msg.setDestination(7576U);
    msg.setDestinationEntity(218U);
    msg.conductivity = 0.0835208575079;
    msg.temperature = 0.516510985047;
    msg.depth = 0.0222495250094;

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
    msg.setTimeStamp(0.0308411969436);
    msg.setSource(848U);
    msg.setSourceEntity(165U);
    msg.setDestination(50897U);
    msg.setDestinationEntity(33U);
    msg.conductivity = 0.66928841556;
    msg.temperature = 0.914635720428;
    msg.depth = 0.340416612706;

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
    msg.setTimeStamp(0.994112452956);
    msg.setSource(51713U);
    msg.setSourceEntity(217U);
    msg.setDestination(54491U);
    msg.setDestinationEntity(196U);
    msg.altitude = 0.373532273808;
    msg.roll = 19162U;
    msg.pitch = 41821U;
    msg.yaw = 32617U;
    msg.speed = -3867;

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
    msg.setTimeStamp(0.882566317444);
    msg.setSource(49065U);
    msg.setSourceEntity(35U);
    msg.setDestination(2659U);
    msg.setDestinationEntity(169U);
    msg.altitude = 0.0305080242302;
    msg.roll = 29971U;
    msg.pitch = 56074U;
    msg.yaw = 56007U;
    msg.speed = 753;

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
    msg.setTimeStamp(0.646715462437);
    msg.setSource(8865U);
    msg.setSourceEntity(172U);
    msg.setDestination(49789U);
    msg.setDestinationEntity(201U);
    msg.altitude = 0.189203534325;
    msg.roll = 54273U;
    msg.pitch = 3652U;
    msg.yaw = 21073U;
    msg.speed = 3662;

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
    msg.setTimeStamp(0.112987365319);
    msg.setSource(4860U);
    msg.setSourceEntity(59U);
    msg.setDestination(51612U);
    msg.setDestinationEntity(46U);
    msg.altitude = 0.656378464273;
    msg.width = 0.281938067471;
    msg.length = 0.990811446668;
    msg.bearing = 0.659150356969;
    msg.pxl = 25176;
    msg.encoding = 82U;
    const char tmp_msg_0[] = {66, -111, -102, -99, -93, -118, -90, 102, 43, -124, 91, -8, 63, 90, -90, 61, -67, -76, 23, 38, -50, 111, -98, 4, 55, -114, -41, 34, 56, -19, -95, -72, -105, 35, -107, 126, 87, 60, -123, 3, -120, 125, -106, 4, 85, 38, -15, 107, 37, 37, -38, -119, 69, 19, 122, 110, -1, -23, -61, -52, 51, -2, 78, 48, -46, -22, 68, -113, -16, 107, 70, 87, -7, 73, -72, 89, 49, -14, 69, -7, -64, -41, 111, -52, -8, 14, 59, -101, -102, -99, 13, 94, 69, -96, 69, -17, -108, -70, -76, -13, 56, 117, 51, -22, -101, 78, 42, -120, 121, -122, 72, -29, -113, 19, -68, 96, -41, 8, -41, -96, -47, -54, 43, 79, 61, 112, -98, 71, -71, -27, -110, 93, 61, 58, 67, -46, -12, 92, -48, -75, 82, 39, -118, -40, -69, 94, 15, -96, -5, 80, -61, -91, 31, -69, 67, -122, -2, 84, -57, 8, 55, 1, -73, 110, 30, -109, 7, -96, 22, 45, -8, 77, -2, -77, -89, -8, -16, 54, -31, -19, -4, 93, 49, -124, 110, -59, -25, -92, 40, 70, -44, 83, 72, 101, -128, -108, 89, -27, -120, 88, -78, 41, -102, 39, -19, -5, -114, 104, 114, -104, 52, 31, 68, -127, 50};
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
    msg.setTimeStamp(0.746917807275);
    msg.setSource(27298U);
    msg.setSourceEntity(29U);
    msg.setDestination(51556U);
    msg.setDestinationEntity(231U);
    msg.altitude = 0.734567366758;
    msg.width = 0.308979475763;
    msg.length = 0.189495225919;
    msg.bearing = 0.670157367386;
    msg.pxl = 17180;
    msg.encoding = 157U;
    const char tmp_msg_0[] = {30, 70, 72, 12, 97, -122, 28, -52, -3, 98, 66, 58, 24, 110, -65, -59, -120, -94, 110, 109, 93, 105, 92, -124, -92, 59, -128, -23, -61, -19, -56, 15, 100, -75, 23, -118, 32, -116, 0, 94, 21, -55, 99, -89, -94, 30, -92, 24, -121, 90, 99, -81, 48, 51, 12, -93, 110, 110, 90, -125, -99, 18, -37, -88, -6, 67, -84, 42, -26, -54, 27, 88, -42, -41, -117, -109, 46, -55, -78, 8, 27, -29, 99, -75, 8, 79, 115, -67, 86, 28, 68, -7, -106, 79, 42, 68, -87, -25, 86, -115, -38, -73, 79, -70, -48, 7, -16, 51, -64, 22, 100, -85, -29, -52, 111, -71, -112};
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
    msg.setTimeStamp(0.725636979427);
    msg.setSource(50276U);
    msg.setSourceEntity(88U);
    msg.setDestination(26711U);
    msg.setDestinationEntity(216U);
    msg.altitude = 0.188182583429;
    msg.width = 0.654948486738;
    msg.length = 0.0669305632106;
    msg.bearing = 0.110379058878;
    msg.pxl = 5374;
    msg.encoding = 194U;
    const char tmp_msg_0[] = {-59, 104, 121, -45, 66, 26, -107, 10, 35, 95, -106, 73, 85, 22, 70, -79, 116, 31, 74, 116, -80, 114, 91, 97, 57, -51, 81, -73, -5, 52, 36, 96, -91, 70, 33, 62, 16, 16, -27, -29, 11, -20, 22, 57, 37, 36, 89, -4, -17, -20, 54, -67, -117, -31, -9, -31, 93, -8, 114, 11, -115, -79, 120, 89, -53, 124, -49};
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
    msg.setTimeStamp(0.110527526105);
    msg.setSource(22256U);
    msg.setSourceEntity(243U);
    msg.setDestination(37722U);
    msg.setDestinationEntity(246U);
    msg.text.assign("HLDTARIAKJWZETRDCKPQABZLCVTUIORSFOOBBLTRFKEGUIMCHDJWSCVVPQYMFHJFDURMOHDHAGZGBSUKMPCUXEWNNIQXZWYVOJGKVZMKFSVQ");
    msg.type = 209U;

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
    msg.setTimeStamp(0.516212175499);
    msg.setSource(15673U);
    msg.setSourceEntity(239U);
    msg.setDestination(16437U);
    msg.setDestinationEntity(205U);
    msg.text.assign("LMWZNPHKGNIXKMYIZBVAAVWGFUSZRCYACTONELOPRDEALKAIPPVZJFRMDQESWDWBFVXUCXMQHIDJNPBSSCKQUGHSKBBLWBDKKEVRDVGAOHIMPRNPFUVBAEZXPUUQCYEIUZPTOND");
    msg.type = 224U;

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
    msg.setTimeStamp(0.325015626593);
    msg.setSource(22557U);
    msg.setSourceEntity(8U);
    msg.setDestination(57169U);
    msg.setDestinationEntity(6U);
    msg.text.assign("MBXJJDHSUOLRKNNVIFRZQOOQWLFCPUGOMYIVQADZYQGVNSXNIGFZSXSSGLPPVCDILYYZZKABCMMMCBHODPHKEARJMEGHKAUUHZTEJNOIEJVKOUWRVEDYLENZFIGQMHTXHBEYKFPNWOINLRDQKWNTPMDWFHTEXQFJUWOVBFZSB");
    msg.type = 132U;

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
    msg.setTimeStamp(0.223808718115);
    msg.setSource(32638U);
    msg.setSourceEntity(2U);
    msg.setDestination(47830U);
    msg.setDestinationEntity(229U);
    msg.parameter = 231U;
    msg.numsamples = 177U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 35701U;
    tmp_msg_0.avg = 0.071121699926;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.043673774195;
    msg.lon = 0.508910805829;

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
    msg.setTimeStamp(0.461862710961);
    msg.setSource(53307U);
    msg.setSourceEntity(121U);
    msg.setDestination(8420U);
    msg.setDestinationEntity(15U);
    msg.parameter = 149U;
    msg.numsamples = 117U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 52307U;
    tmp_msg_0.avg = 0.718665862431;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.122043947559;
    msg.lon = 0.411362921677;

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
    msg.setTimeStamp(0.401922179402);
    msg.setSource(42303U);
    msg.setSourceEntity(159U);
    msg.setDestination(20578U);
    msg.setDestinationEntity(188U);
    msg.parameter = 53U;
    msg.numsamples = 125U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 38820U;
    tmp_msg_0.avg = 0.132835103338;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.998056477724;
    msg.lon = 0.339788947382;

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
    msg.setTimeStamp(0.864962690729);
    msg.setSource(11234U);
    msg.setSourceEntity(108U);
    msg.setDestination(22796U);
    msg.setDestinationEntity(45U);
    msg.depth = 39830U;
    msg.avg = 0.485987749787;

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
    msg.setTimeStamp(0.255484841346);
    msg.setSource(59388U);
    msg.setSourceEntity(20U);
    msg.setDestination(27682U);
    msg.setDestinationEntity(229U);
    msg.depth = 6257U;
    msg.avg = 0.42228846949;

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
    msg.setTimeStamp(0.034065473344);
    msg.setSource(28312U);
    msg.setSourceEntity(61U);
    msg.setDestination(64508U);
    msg.setDestinationEntity(246U);
    msg.depth = 1346U;
    msg.avg = 0.743969550381;

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
    msg.setTimeStamp(0.962920215029);
    msg.setSource(16895U);
    msg.setSourceEntity(33U);
    msg.setDestination(16770U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.329340888434);
    msg.setSource(50362U);
    msg.setSourceEntity(226U);
    msg.setDestination(57803U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.776726210787);
    msg.setSource(11916U);
    msg.setSourceEntity(25U);
    msg.setDestination(48743U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.646888213497);
    msg.setSource(42733U);
    msg.setSourceEntity(202U);
    msg.setDestination(24268U);
    msg.setDestinationEntity(186U);
    msg.sys_name.assign("HCOYGRRMHRIHSFPEZYUKDUEYBADJLOXPMCYTJOPSMRXHDNHPBAYVGYVPUUVRHGOYEYATNQTJQQKPMRTURWUIEDBAJWMINEXXSWGLSSKXWCJTKPFZJKBIJKKDNMEBNTBHXSQKBAPMKQQHHTHIXSGULONLUQYGDEXYAVSZBEJOXLWZIWZJLNGUQIRWDSVWDJOCMDOFCCVIVLZCFZGITRNEWGCXOFBZQDANPLVAFFAPCVZMBLNCRQV");
    msg.sys_type = 213U;
    msg.owner = 64545U;
    msg.lat = 0.410921352573;
    msg.lon = 0.682803222932;
    msg.height = 0.90001386565;
    msg.services.assign("MJKOZNRHXYZTAYURBDZVRVELQCLCVODNVAHWQWPI");

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
    msg.setTimeStamp(0.960189988355);
    msg.setSource(4575U);
    msg.setSourceEntity(155U);
    msg.setDestination(14858U);
    msg.setDestinationEntity(3U);
    msg.sys_name.assign("PSPYYYOHUWBXVLOQYGKGPECPLKPKJIFCFIDKPAWBYWQEVSUULXYTLRCQZBEIPAEDIQJSRQMUOAWFAHTTZXMNANSXLIDQEEURZXXSHJKAMFVVUVGFLZNHGTZWOUVCPYORSCIWDTLCOLVDNSXDWOEAMFGAHFISXGHJNU");
    msg.sys_type = 230U;
    msg.owner = 64675U;
    msg.lat = 0.555128051917;
    msg.lon = 0.171238237963;
    msg.height = 0.84213448544;
    msg.services.assign("KORLCXDOHHKBXQCODPEFIXYRPVQZXMSIGFYBGXOTLF");

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
    msg.setTimeStamp(0.790548303982);
    msg.setSource(57288U);
    msg.setSourceEntity(160U);
    msg.setDestination(12821U);
    msg.setDestinationEntity(175U);
    msg.sys_name.assign("VWDNPLQVHOCXGESANHHOJYYBUEXOPEYKRIMULICMEKPXEXPZDSSTKWLEBTSJHNFEDLJTBAPOTPLXYQZCRUPLOURMZVZJUQWBTMAB");
    msg.sys_type = 201U;
    msg.owner = 46248U;
    msg.lat = 0.608635073258;
    msg.lon = 0.665521437489;
    msg.height = 0.545697292041;
    msg.services.assign("RNGGMHUKSJPMJKFEWEYIFXQXUPDRIXFORRBOROMPQFJCZPADAHEDXTSWDWXYPLGCGUIBZBHAKULGANONTPDZQEMTOTSSTGWTDUOZDRDJZWWSPAKSVYUMLWS");

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
    msg.setTimeStamp(0.496979721022);
    msg.setSource(17853U);
    msg.setSourceEntity(116U);
    msg.setDestination(12266U);
    msg.setDestinationEntity(71U);
    msg.service.assign("VRYDPZIHGNMJRXKINIOSGDBVEMHKFORHTUUQBAKNBEJUGPCVHBFBUJCKZTFMTVGWFOHYIAXFWZTGYLCJNPWVZASCLQGYSGDULXCWXAIODUQKLFUUHQFSVDTRRYCEZVVMBMJWAHLEFBLPGLOYRWPJCJNNAIVAOXEY");
    msg.service_type = 79U;

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
    msg.setTimeStamp(0.419646965939);
    msg.setSource(51605U);
    msg.setSourceEntity(244U);
    msg.setDestination(54269U);
    msg.setDestinationEntity(78U);
    msg.service.assign("PMWIMAIZUOPYDUEJCGQNIMLBEHOHZWGHKTBBWVZWYFVNFZUFRAECVJLWOCBOMAVJSISGJZWTKSBQVEYTKDDCYVDWQWKMRNLPZHWKDX");
    msg.service_type = 51U;

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
    msg.setTimeStamp(0.442402890679);
    msg.setSource(17161U);
    msg.setSourceEntity(187U);
    msg.setDestination(48824U);
    msg.setDestinationEntity(107U);
    msg.service.assign("JSHBQLZGFNOYTKWQBMDPFDEQRQQZQBFHFJGKECLTLBGNWDAXMNVDCQLECFLADMXDUBYOWIKAJOIHCJRTGHMXNPZGTUDHZCAUTFZZGAMSOAKUUIEWYXKXKYYDTXLIKTYNFRPEJQSXFQBLBOMAYPFWVCVROXWR");
    msg.service_type = 95U;

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
    msg.setTimeStamp(0.138454631808);
    msg.setSource(24479U);
    msg.setSourceEntity(214U);
    msg.setDestination(53841U);
    msg.setDestinationEntity(236U);
    msg.value = 0.298305601762;

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
    msg.setTimeStamp(0.413156715022);
    msg.setSource(37828U);
    msg.setSourceEntity(31U);
    msg.setDestination(14799U);
    msg.setDestinationEntity(146U);
    msg.value = 0.500673680487;

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
    msg.setTimeStamp(0.80321409266);
    msg.setSource(40387U);
    msg.setSourceEntity(41U);
    msg.setDestination(51848U);
    msg.setDestinationEntity(76U);
    msg.value = 0.734758170722;

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
    msg.setTimeStamp(0.399172281893);
    msg.setSource(13419U);
    msg.setSourceEntity(22U);
    msg.setDestination(54713U);
    msg.setDestinationEntity(179U);
    msg.value = 0.696120039395;

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
    msg.setTimeStamp(0.841340909351);
    msg.setSource(15246U);
    msg.setSourceEntity(87U);
    msg.setDestination(60850U);
    msg.setDestinationEntity(22U);
    msg.value = 0.462822251816;

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
    msg.setTimeStamp(0.445152043246);
    msg.setSource(25512U);
    msg.setSourceEntity(225U);
    msg.setDestination(60740U);
    msg.setDestinationEntity(59U);
    msg.value = 0.119392167007;

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
    msg.setTimeStamp(0.398054937041);
    msg.setSource(21544U);
    msg.setSourceEntity(94U);
    msg.setDestination(47081U);
    msg.setDestinationEntity(141U);
    msg.value = 0.689137252903;

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
    msg.setTimeStamp(0.0516282275309);
    msg.setSource(12983U);
    msg.setSourceEntity(221U);
    msg.setDestination(54994U);
    msg.setDestinationEntity(241U);
    msg.value = 0.960773791249;

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
    msg.setTimeStamp(0.530445238233);
    msg.setSource(65312U);
    msg.setSourceEntity(121U);
    msg.setDestination(15873U);
    msg.setDestinationEntity(19U);
    msg.value = 0.636719364039;

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
    msg.setTimeStamp(0.699666271808);
    msg.setSource(37587U);
    msg.setSourceEntity(114U);
    msg.setDestination(49492U);
    msg.setDestinationEntity(254U);
    msg.number.assign("KNDZYOVIGIYPTCDIBKJRTUWKEQZPJJYBHXLBFTBDGJCNKAAKYUCVCGIABSZZDYLHAHQVZHFAGFV");
    msg.timeout = 32192U;
    msg.contents.assign("KPEXRRVKSSNWUKZXKXQEUPFTERZFABJAWFNBICCYIQISUTAGFWYQZGIDRPBQVQTDLYGORALOSULSHTSMWSJMVLHGPAEIYPOKGQVGCRLESYDACYNMWLYNIAGJZIUHSFUCELQGHDBCPTLNMORBNFZVWDVZQSTEPDTZJOZIOMWGFVROC");

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
    msg.setTimeStamp(0.311046948872);
    msg.setSource(17059U);
    msg.setSourceEntity(139U);
    msg.setDestination(60059U);
    msg.setDestinationEntity(70U);
    msg.number.assign("JSSBZCVTSONAHUKVBKFGYPIIHVGOKDISEJEVQZKSQRWLHWJNJDUDNUWLXHGVBFRIDBPPKQPDELFLTNYANRETZNXXUZQLZUSYGTTGWEBLFI");
    msg.timeout = 253U;
    msg.contents.assign("PCZQDBUSZYULAKTGBFCHRCNSWOVFVEZGAKTMFNBPESAXCKJDYMEGDORTWQVFKVVLHTZYOBSXPORLXQMWSZCRDQJFIIHCTEKRPIECQLULMIGFNCEWCBZFDUMAJKLDBIHUQVZZ");

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
    msg.setTimeStamp(0.559200070973);
    msg.setSource(23229U);
    msg.setSourceEntity(254U);
    msg.setDestination(15450U);
    msg.setDestinationEntity(145U);
    msg.number.assign("FUPFBMIHCEIWQMFWXTNXVPLSKNLKYKZCRCADDTPRBLYPCYAGVHMPOWQBNUYPJMWKQYORWUHRSKLUJWNTOZBEODPHELATFBSEXZAJGGMWFQFQTLKMEAIGCKHFEWKRDAETRNZNBAIJLGRHNVSGJACWJBRFWAIQQZBDXIKHSJERIDAVGRFIUDSUZCMLODGOIVOYIPZOCSHTSJTSQHUEYEV");
    msg.timeout = 42167U;
    msg.contents.assign("CRILYYVDBDO");

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
    msg.setTimeStamp(0.282531263786);
    msg.setSource(778U);
    msg.setSourceEntity(43U);
    msg.setDestination(56389U);
    msg.setDestinationEntity(190U);
    msg.seq = 2437533897U;
    msg.destination.assign("USDJNWQYFBGZU");
    msg.timeout = 47569U;
    const char tmp_msg_0[] = {-40, 77, 117, 56, -37, -40, -44, 62, -67, -90, -15, -32, -115, 26, -8, -84, -103, 3, 36, 116, 91, -36, -74, -41, -12, 106, -82, -101, 28, 18, -112, -117, 123, 3, 111, 22, -69, 103, 91, -112, -81, 60, 40, -38, 57, 46, 83, 40, -89, -29, -104, -127, 1, -122, -70, -97, -86, 125, -16, 33, -64, -51, 51, 59, 34, 107, 78, -37, 85, 68, -25, 109, 38, 57, 48, -116, -128, -40, 69, -32, -109, -94, 89, -116, 64, -79, 83, 74, 10, -53, 9, -76, 30, 10, -38, -123, -52, -127, -3, -107, 28, -3, 13, -121, -126, 87, 7, 78, 99, 78, -112, -49};
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
    msg.setTimeStamp(0.387383500053);
    msg.setSource(7009U);
    msg.setSourceEntity(190U);
    msg.setDestination(21944U);
    msg.setDestinationEntity(101U);
    msg.seq = 3097631529U;
    msg.destination.assign("JGKUWXYAJBQYYOTMDSFGKVSWWUEZLYTPQXBZCBMZDOARCQWAFLPKEXEPCBHNPTYIHBNQKAFXCNJXXURIVRTVMPKESRVFHICFRWCVVDPMNPGSJMIUIJOKILIESNOYRZOLVYDDHQZFDABAUWUOIKAFSGUXFICNLWEHUUWNMEMQSNICMLVYJJJPLYNGMYDJZQPLZNGOQWRBKDXSTFGHETO");
    msg.timeout = 9503U;
    const char tmp_msg_0[] = {85, -121, 56, 11, 19, -49, 122, -53, 64, 70, -28, -81, 73, 50, -66, -58, -73, -114, 34, -26, 104, -97, 11, -69, -103, 76, -109, -22, -13, 21, -105, -33, 94, -59, -5, 41, 94, 39, 94, 79, 11, -93, -27, 114, 5, -21, -119, -22, -26, -99, -78, 126, 125, 116, 44, -38, 13, 68, -8, 28, -13, 46, 97, 4, 50, -48, -58, -72, -117, 120, -71, 96, -94, 45, 66, -14, -31, -25, -126, -100, -29, 25, -89, 107, -73, -53, -127, -6, -83, 14, 100, 65, -85, -33, -23, -1, 102, 67, -82, -40, 6, 25, 38, -91, 13, -61, -46, -81, 126, 55, -48, -8, 48, -79, 20, -127, -28, 48, -60, 90, 95, -20, 118, 0, -119, 64, 20, -69, 81, 32, 18, 80, 3, 27, 49, -112, 64, -43, -126, 9, -122, -20, 114, 0, 83, -66, 40, 67, -111, 10, 53, 3, 102, -25, 117, 67, -95, 87, -50, -65, -101, -75, 11, -86, -6};
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
    msg.setTimeStamp(0.888782558006);
    msg.setSource(13311U);
    msg.setSourceEntity(61U);
    msg.setDestination(32566U);
    msg.setDestinationEntity(240U);
    msg.seq = 4071269417U;
    msg.destination.assign("HQQZOVAYJMLEMHJVULHOZOEGFDTHCWHWRHISILBPSXTEFBMJOAEFCZGKVSYEDGLBWRXMGRMGVJDBKPUIDWOXSKCBSFGXUZUXX");
    msg.timeout = 10796U;
    const char tmp_msg_0[] = {-126, -88, -11, 31, 2, -74, 84, 84, 109, 108, 126, -45, -125, -97, 89, -54, -14, 69, 59, 1, -17, -1, 75, -25, 91, -116, -15, 29, 96, -4, 5, 33, -93, -95, 74, 126, 106, 76, -24, 40, 75, 59, 106, -128, 52, -121, -67, 47, -6, -54, -116, 84, -32, -16, 28, -100, 104, -97, 50, -110, 110, -29, -117, 67, -47, 0, 106, -21, 108, 46, 69, -114, 30, 83, -100, 29, 42, -63, 41, 52, 118, -76, -14, -97, 69, 77, -124, 18, -43, 15, 45, 113, -122, 125, 18, -84, -28, -17, -88, 86, 88, 14, 102, 33, 105, -16, -65, -58, -85, -13, -7, 87, -11, 32, -111, -59, 2, -37, 115, -33, -107, -92, 107, -110, -38, 11, 50, -58, -115, 30, -28, -14, 35, 68, 50, 45, 89, -23, -85, 48, -35, 83, -34, -77, 23, -53, -19, -13, 16, 31, 31, 2, -75, 73, 124, 120, 32, 0, -113, -67, -4, 0, -16, -61, 74, -79, 0, -95, -98, -33, -31, -96, -127, -93, -107, 108, 33, -91, 98, 7, 22, -111, 30, 92, 48, -31, -50, 64, -90, 28, 109, 75, 71, -1, 31, -1, -88, 0, -66, 101, 73, -22, 96, 126, -119, 47, 109, -46, -53, 27, 86, -3, 58, -87, -48, 32, 32, -101, 8, -122, -12, 31, 34, 60, 103, -21, 99, -59, 80, -119, 115, -31, -70, -86, 95, 51, 58, -37, 93, -90, -1, 20, 23, -119};
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
    msg.setTimeStamp(0.387067358579);
    msg.setSource(64407U);
    msg.setSourceEntity(158U);
    msg.setDestination(59853U);
    msg.setDestinationEntity(187U);
    msg.source.assign("YZJUORIJFOCSSVQUBMCRMIEKLXWBPZJXYHKHDVFMZTDMUNDCTPGWGMNTLFKUREQANNEIVHLSFHQAOXZTIYVMNXBGKVOJTJOGTHLDZQIZNECCAQGARRHCWUFWVBXBSCEPGMWIYMUBUFPGKADLLBGHUKENHPWXLWFQKZLISJPHBPXIXEZDCBDROPFNRQBVYKSEKFFSOTAJSAOYUMLRWYCMDEVXVUTJDHPOTIC");
    const char tmp_msg_0[] = {74, -106, 38, -101, 22, 26, 98, -125, -127, 52, -65, 44, -78, -77, 101, -46, 31, -76, -31, -40, 30, 59, -58, 1, 89, -76, 87, 44, -127, 62, 20, 92, -17, 53, 5, 32, 55, 53, -91, -71, 69, -16, 72, -74, -27, -125, -9, 17, 100, 71, 64, -60, 102, -95, -25, -117, 80, 49, -88, -63, 88, -36, -72, 28, 42, 60, 67, 123, 23, 71, -36, 101, 98, 104, -65, 23, 16, 52, 119, -53, 120, -95, -88, -70, -38, -77, -14, -71, 94, 92, 36, 18, -99, -47, -35, 11, -90, -102, 67, -79, 104, -13, -46, -99, 38, 105, 49, 54, -5, -61, 81, 38, 81, -32, 40, 25, 2, -59, 31, -87, -128, 108, -115, -64, 99, -27, 44, -61, 92, 108, -56, 93, -98, -94, -72, 97, -83, 93, -118, -9, -75, -52, 55, -95, -126, 34, -94, 41, -6, -98, 118, 60, -75, -27, -124, -65, -103, -123, -65, 35, -21, 7, -77, 104, -38, -40, 4, -83, 97, -101, -24, -8, -78, 30, 23, -93, -104, -59, 67, -101, 122, 24, 21, 89, -95, -118, 125, -96, -2, -95, 89, 106, 86, 94, 126, 88};
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
    msg.setTimeStamp(0.647161021192);
    msg.setSource(13306U);
    msg.setSourceEntity(163U);
    msg.setDestination(19748U);
    msg.setDestinationEntity(4U);
    msg.source.assign("QWAUXYRRZTZRFTIFCVKLGDWN");
    const char tmp_msg_0[] = {12, 106, -119, 32, -113, -107, 46, -62, -76, -79, 32, 51, 7, -20, 17, -15, -109, -93, 81, 46, 74, -5, 29, 2, 108, -52, 32, 71, -61, -8, -6, -126, -63, 119, -20, 119, 108, 123, 32, -73, 85, 18, -18, 66, 61, -48, 98, -115, 87, -8, 36, 26, -44, -68, -47, -107, -72, -84, -69, -55, -98, 77, 76, -58, 73, 60, 57, -79, -110, 99, -91, -46, -6, -81, 7, 75, -127, -1, -37, 27, -1, 13, -117, 116, -33, -107, 17, 5, -8, 64, 100, 59, 10, 24, -68, -103, 116, -81, 18, -1, 39, -86, 78, 29, 34, -126, -70, -7, -12, -23, 37, 9, 20, -11, -78, 69, -40, -81, -103, 19, 91, -88, -86, -99, -25, -46, -51, -19, -43, 47, 94, 14, -119, 123, -116, -67, 62, -26, 29, -123, 14, 91, -85, -46};
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
    msg.setTimeStamp(0.243469905684);
    msg.setSource(10936U);
    msg.setSourceEntity(131U);
    msg.setDestination(8022U);
    msg.setDestinationEntity(30U);
    msg.source.assign("CBBUCLAHNXKITATJMUZHOFCRUGMKKZOOIWBLGYYIYWENXUXHJDHWAGYSSSUEIJQCDWVVNXVRBDNRNEJLIEPCVVFLRQFSOLGUMDIFM");
    const char tmp_msg_0[] = {63, -91, -52, 114, -9, 117, -96, -41, 12, 42, 33, -88, 67, 78, 7, 103, 123, -31, 18, 30, -33, -113, -52, 80, -121, 60, -94, -40, 74, 123, -79, 64, -83, 112, -64, 58, 75, -5, -10, -119, -61, -108, -38, 29, 112, -66, 69, -28, 0, 33, 97, 4, 96, 91, -115, -54, 102, 109, -126, 111, 96, 52, -69, -52, 2, -76, 1, 5, -121, -112, -68, -54, -22, -14, -83, -18, -76, -57, 114, 25, -75, -34, -119, 1, -46, 10, 56, -19, 15, -56, -115, 110, -100, 120, 75, -102, -66, 10, 114, 18, 87, -92, -117, 71, -125};
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
    msg.setTimeStamp(0.434009774535);
    msg.setSource(36631U);
    msg.setSourceEntity(85U);
    msg.setDestination(3267U);
    msg.setDestinationEntity(227U);
    msg.seq = 3575413040U;
    msg.state = 111U;
    msg.error.assign("BZQUCRGECEWZKVHHTGEIPAPIHKMREOVGKRFOPFJMWCYDYSNRGHXWZIIJVYVCJBZSDR");

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
    msg.setTimeStamp(0.554739066292);
    msg.setSource(14005U);
    msg.setSourceEntity(232U);
    msg.setDestination(49981U);
    msg.setDestinationEntity(3U);
    msg.seq = 3195130984U;
    msg.state = 110U;
    msg.error.assign("FVGYKCBCJXLXITKLLZXM");

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
    msg.setTimeStamp(0.271214368484);
    msg.setSource(3835U);
    msg.setSourceEntity(139U);
    msg.setDestination(27544U);
    msg.setDestinationEntity(83U);
    msg.seq = 3954080153U;
    msg.state = 224U;
    msg.error.assign("OJVHDSLOBRIDZMSPLCKYRWRYHETQQKZOTNESFKSILCOUNNTNQHHISXKDDPIZVKRHEJHEUV");

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
    msg.setTimeStamp(0.0816231732915);
    msg.setSource(5426U);
    msg.setSourceEntity(39U);
    msg.setDestination(11407U);
    msg.setDestinationEntity(84U);
    msg.origin.assign("MXCMPWJXHDLJSPUWRMPPFLPFFDTWYNESCCENQVJSFICXTSRAFXYSQBEQJTIJNGLVYICVJGRQMOAQQTCJXCOSGBIFKWDIEKZAARPXISYBVWVAXGPNGLGRNHUMLEBOKDJBLRKORHOIZTRGKYETQZLNHDUHUXJYFPNTHOARYPYKZVMWSEULY");
    msg.text.assign("QCOBOPRAWHFXHMHBWDMGPZAMHHBSJC");

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
    msg.setTimeStamp(0.426468313549);
    msg.setSource(11812U);
    msg.setSourceEntity(147U);
    msg.setDestination(47755U);
    msg.setDestinationEntity(231U);
    msg.origin.assign("GOWSVXZHLUNNJMQGZYCYSTFAEKLWUYUOJCSAYBKOWETAVQGOAKHBDWQUQFXHRPCUKJUHKHPPPRZKGFPHNSSIPTAMGPDBKOSNLGQR");
    msg.text.assign("CTYAOQTOCQGDZSUEIKKAVAVQTCFHBIPWSXMLMBCICWOTJHMAEIRHAAVUYGIUHEXMFNDYXIBGZIFXUFTYIU");

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
    msg.setTimeStamp(0.701987009908);
    msg.setSource(33004U);
    msg.setSourceEntity(51U);
    msg.setDestination(25164U);
    msg.setDestinationEntity(196U);
    msg.origin.assign("CPRJBNXTXRYIKUNERCTSORTUYEGQYJMGDWSMJVVROCWADTHVSJDMYNASLZAMJHAZWIVVHKPDEOHKKQFLIFQKBTTGSTXSMASPCJFYZUIAPGKWDUXREPDAQFNYANMUWESFDOVEGEQTUQWNHZOFMOCQUEIBINXXHCVBIIXDUKCEELLAFUMZGPFPSTTOPFGNZVKLKZBLBB");
    msg.text.assign("XMUNGNYBVAEUUVNFJIGTRYWLRAIPAFZMTWFKATIFSQHTKDAQZMHLZPOFVOXHLNDVKCJQXZRFJYXKFSUWKDVZEUMGYVYHKIWQEMOLEWXSSONGDIGBSRDYSTIZFJLJSHFACPRICJZOYIHYUSKPWPQUBRQEOCKPCJDTSQDDBCRZRWBSHVGKRNNJMAMQGLETEHFBQNCXOEMWUPWXLABPJPVCCBCET");

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
    msg.setTimeStamp(0.711345956453);
    msg.setSource(22763U);
    msg.setSourceEntity(94U);
    msg.setDestination(26019U);
    msg.setDestinationEntity(246U);
    msg.origin.assign("BMEFCNIRSUEVLBJXHNQJBKMSLZFNLWYQVAZXCKEFRBQAFNQVHOVHBWKLWPBWBKDNBXVTCOAUARXKXLGTNZLIUUBJREUYWHUSNVXTXQTJDEIKPEMTIGKGSQCVWAUFJVZFBIPO");
    msg.htime = 0.775869172605;
    msg.lat = 0.843269846762;
    msg.lon = 0.323238292881;
    const char tmp_msg_0[] = {39, -77, 72, -97, 87, 125, -41, -39, -110, -110, -9, 51, -73, -66, -51, 124, 3, 109, -86, -28, 10, -108, 62, -70, 21, 105, 44, 62, -85, -34, -26, -24, -22, -100, 41, -44, -38, 114, 29, 97, 8, -121, -27, 38, -51, 0, 84, 4, -55, -27, -29, -94, 66, -101, 82, 55, 31, -26, -25, -19, 6, -13, -69, -88, -96, -125, -57, -18, 4, 83, 24, -19, 18, 22, 29, -108, -45, -62, 21, -88, -40, -87, -44, 95, -115, 81, -23, -122, -86, 79, -1, -17, -80, -24, 66, 30, -109, -125, -56, -78, -103, 10, 5, 59, 113, -79, -38, -18, -64, -8, 9, -96, -90, -60, 19, 37, 71, -55, -60, -75, 16, 43, 18, -103, 9, 56, -49, 46, -86, -51, -124, -40, -83, -91, 70, 79, 121, 105, -78, -20, -101, -106, 43, 67, 97, -100, -48, -34, -63, -15, 118, 77, 38, 23, -110, 126, -83, 66, -118, 17, 18, -61, 93, 109, 100, 112, -64, -64, 70, -81, -48, 34, -65, 63, -74, 57, 46, 27, 27, 101, 4, 110, -89, 98, 71, 80, 79, 122, 0, 43, 70, 103, -19, 93, -51, -82, -77, 61, -79, 61, -91, -31, -81, -20, 16, -53, 78, 37, -102, -26, 85, 101, 24, -26, -24, 87, -25, -101, 83, -51, 76, -98, -24, -107, -100, 108, -27, -1, -106, 69, -93, 74, -25, 105, -13, 101, -62, 27, -27, -75, 118, -127, -42, -127, 107, -67, -67, -67, 39};
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
    msg.setTimeStamp(0.524037944497);
    msg.setSource(1366U);
    msg.setSourceEntity(113U);
    msg.setDestination(61710U);
    msg.setDestinationEntity(204U);
    msg.origin.assign("EHENIKHESFUUTUARKNFNWNAZOEWHYQORXZPJRVIWB");
    msg.htime = 0.438058473289;
    msg.lat = 0.295597092539;
    msg.lon = 0.0725339760723;
    const char tmp_msg_0[] = {-117, 85, 108, -122, 60, 18, 54, -116, 104, -112, -9, 12, -116, -63, 44, -97, 104, 110, -127, 12, -125, 82, 124, 66, 85, 69, -51, 13, 25, 111, 29, -62, -19, -7, 79, -41, -74, -99, -56, -32, 122, 120, -112, -92, 99, -80, -32, 69, -62, -17, -115, -80, 66, -117, 40, -39, 29, 75, 89, -125, 7, -72, 80, 65, 25, -61, 26, 103, -109, -105, 33, 91, 76, -123, -98, -100, 5, 30, -48, -92, 76, 34, -54, 113, 98, -112, 58, -2, -11, 25, -56, -34, 50, -119, 75, 94, -123, -114, -119, -89, -112, 119, 93, -26, 120, -60, -44, 51, -127, -29, 46, -115, -127, -61, -123, -86, 3, -84, 84, 70, -29, -33, 13, 17, 22, -60, 44, 63, -70, 44, 69, 21, 122, 3, 26, -87, 119, -97, -122, 59, -72, -122, 36, 96, 116, -40, 126, -63, 104, -127, -46, 55, -33, -71, 110, 126, 37, 100, -80, -27, 62, 78, -29, -24, -14, 94, 38, 124, -28, 104, -109, -24, 114, -31, -82, 2, -114, 29, -1, 28, -89, 105, 74, -92, -36, 32, -14, -71, -119, -104, -63, 49, 11, 72, -80, -19, -8, 126, -125, 46, 59, 116, -93, -112, 75, -44, 23, -74, 5, -13, 47, -5, -86, 3, 114, -37, 69, -71, -55, -63, -15, 46, 60, -108, -57, -105, -71, -122, -44, 30, 5, 55, 3, -91, -81, 25, 35, 94, -106, 48, -30, 51};
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
    msg.setTimeStamp(0.268454979219);
    msg.setSource(35252U);
    msg.setSourceEntity(173U);
    msg.setDestination(64507U);
    msg.setDestinationEntity(202U);
    msg.origin.assign("YGBEDHCVIGMVBEHHAITLUIQUQJOPZMXOMTMSDAWCOKWCURWYUTHWRVIRMIBEJFXXEPQPUJSRZSBHGWBGANLKXONQPVJGVJNQWZKSUBDDANYIYZRJGMRDCWODKAMWQRLVLKKISZRNVJKSTQMJFLITRNVWAKYDXUBGPLGFHWACEHFLTELNPYOXFCKBOZJFHQPSAOEDBTOICYMZXPUFPAUNTINSHSFLGMX");
    msg.htime = 0.216449983454;
    msg.lat = 0.820668430225;
    msg.lon = 0.597911831337;
    const char tmp_msg_0[] = {-28, -95, 125, 102, 5, -91, 61, 15, 8, 108, 35, 56, 81, -90, 29, 56, 85, 56, 28, -28, -127, 119, -63, -4, -124, -24, 23, 2, -111, 125, -98, 66, -15, 126, -36, -74, 93, -20, -83, 17, -21, 73, -101, 56, -79, 115, 7, -40, -69, -114, 26, -75, 75, 61, -10, 120, -69, -20, -13, -60, -2, 32, 110, 37, -42, 85, 97, -95, -35, -104, -117, 68, -10, -12, 35, -69, -93, 84, -88, -120, -82, -90, -61, 124, 108, 29, -125, -73, -35, 92, -1, 105, 61, 79, 2, 79, 46, 91, -15, 14, -42, -88, -74, -123, 80, 104, 78, 125, -10, -42, -1, 77, 125, 76, 1, 88, 56, 112, -94, 96, -106, 83, 62, 28, 59, 115, 69, 60, -17, -62, 16, -43, -63, -66, 28, 83, 57, -41, 8, 85, -6, -41, 21, 104, 15, -12, 70, 125, -16, -20, -92, -117, 72, 44, 63, 45, -65, 46, -26, 59, 68, 6, 11, -116, -70, -31, -36, 41, -117, 67, 17, -27, -45, -68, -15, 1, -86, -30, -110, -59, -88, 67, 114, 92, 69, -60, 19, 109, 107, -12, 37, 111, 80, -58, 85, 39, -83, -3, -89, 59, 94, -127, -109, -103, 50, -115, -93, -84, 49, 43, 90, -121, -119, -17, -54, 77, 81, 113, -32};
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
    msg.setTimeStamp(0.777431502567);
    msg.setSource(53299U);
    msg.setSourceEntity(185U);
    msg.setDestination(13988U);
    msg.setDestinationEntity(176U);
    msg.req_id = 56522U;
    msg.ttl = 41355U;
    msg.destination.assign("BIZMGUXILMYMMVVQHGPCNTVSUZZCOHTFUKABJZDIVEDWKOEURWWWLHASOCJUPYXSEZWYFYOGMLFEZZ");
    const char tmp_msg_0[] = {60, 41, 8, -21, 56, -31, 106, 122, -41, -95, -121, 16, 54, -1, -90, -49, 80, 33, -70, 96, -77, -48, 84, 107, -115, -8, -5, -23, 103, -96, 116, 119, 13, -9, 106, -51, -92, -80, -126, -58, 24, 91, 33, 117, 62, 121, -113, 97, -1, 118, -23, 62, 13, -120, 69, -27, -93, -12, 116, 2, -73, -97, -108, -1, 50, -97, -62, -34, -61, -6, 35, -16, -64, 45, -15, 38, -128, 39, 29, 8, 94, 121, -90, 15, 14, 124, -59, 59, 124, 121, -128, 102, -128, 100, -15, 2, -55, 36, 19, 54, -113, 75, 125, -79, -86, -77, 105, 89, 30, 71, 99, 86, 7, 47, 14, -81, 20, -69, -74, -36, -102, -26, 39, 74, -20, -37, 95, 80, -91, 27, 101, -53, 73, 18, -40, 121, 90, 23, -114, -23, 21, -9, 99, 41, 17, 0, -70, 42, -111, -27, 119, 72, 39, 91, -10, 111, 102, -82, 13, 70, -5, 103, 43, -34, 58, -11, -1, 37, 103, 33, 1, 59, 81, 68, 64, 50, 112, -127, 79, -121, -40, 89, 56, 9, 49, 23, -77, -19, -120, -71, -37, -22, -44, 0, 64, 16, -24, 103, 3, 58, 118, -29, -96, 39, 65, -24, -95, 88, -116, -47, -109, 15, -91, -11, -11, -71, 125, 98, -80, -86, 15, -19, -101, 17, -59, 37, -90, -3, -57, 66, -80, -33, -56, 109, 40, 3, -54, -22, -39, 65, -1, 37, -19, -3, 53, 32, -57};
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
    msg.setTimeStamp(0.374314134626);
    msg.setSource(53285U);
    msg.setSourceEntity(210U);
    msg.setDestination(49596U);
    msg.setDestinationEntity(143U);
    msg.req_id = 37341U;
    msg.ttl = 46527U;
    msg.destination.assign("QOQWXZXMPCMRD");
    const char tmp_msg_0[] = {115, 67, -50, -5, -119, -107, 84, -110, 72, -89, 39, -95, 69, 66, 92, 41, -12, 86, 29, 71, 100, 48, 65, 19, 9, -10, -118, -34, 3, -11, 7, -10, -65, 103, 46, -116, -8, -105, 37, 69, 93, 75, -31, 31, 60, -123, -12, 67, -73, 42, -31, 37, 84, -102, -62, 98, -63, 5, 39, 11, 10, -104, 64, -12, 20, -76, 37, 17, 79, -103, 80, 89, -96, 120, -88, 19, -10, -77, -54, -3, 99, 20, 65, 61, 107, -49, -15, -106, 54, -128, -1, 61, -126, -49, -104, 40, -71, -18, 35, 35, 1, 48, 13, 67, 65, 82, -5, -17, 34};
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
    msg.setTimeStamp(0.115047868501);
    msg.setSource(1762U);
    msg.setSourceEntity(96U);
    msg.setDestination(57279U);
    msg.setDestinationEntity(135U);
    msg.req_id = 41050U;
    msg.ttl = 38697U;
    msg.destination.assign("QRJBUJRNNOHEXPOENMAWGGHVYRSZXXLQVHCLTIEXHSNMQQDDDCTLLWJEYNWVZKHODYKTRCUPFQFLKFMJ");
    const char tmp_msg_0[] = {26, 91, -74, -98, 46, 33, 93, 51, -22, -99, 61, 9, 96, 113, -105, -117, 101, 60, -27, 57, 57, -95, 25, 93, -1, 32, -118, 72, -7, 11, 125, -74, 95, 67, -90, -54, -63, 83, -86, -82, 17, -123, -64, 29, 87, -99, 23, 23, 2, -28, 86, 100, -31, -25, -71, 122, 31, -115, 107, 57, -121, -94, -100, 59, 62, -20, -127, -57, -11, -35, -68, 120, 117, 82, -32, -83, 95, -68, -81, -78, -6, 5, 118, 70, -103, -57, -87, 26, -85, -104, 99, -73, 105, -22, 46, 104, 54, -66, -35, -96, -93, 87, -119, -42, 49, 28, -103, 67, -87, -86, 109, 100, 53, -75, -58, 89};
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
    msg.setTimeStamp(0.0688537749572);
    msg.setSource(44400U);
    msg.setSourceEntity(196U);
    msg.setDestination(37362U);
    msg.setDestinationEntity(142U);
    msg.req_id = 45491U;
    msg.status = 90U;
    msg.text.assign("GQCXCSQSYSCJYSFZFANHMMJWYUQOGOSRYDVUFLUNUGMBABCRWPZHJSWWK");

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
    msg.setTimeStamp(0.633026702091);
    msg.setSource(63936U);
    msg.setSourceEntity(41U);
    msg.setDestination(11455U);
    msg.setDestinationEntity(139U);
    msg.req_id = 50943U;
    msg.status = 242U;
    msg.text.assign("XPXTHBBAIXEKBJFPYOGQNISVJYEGT");

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
    msg.setTimeStamp(0.252856047344);
    msg.setSource(61363U);
    msg.setSourceEntity(212U);
    msg.setDestination(46817U);
    msg.setDestinationEntity(48U);
    msg.req_id = 4471U;
    msg.status = 197U;
    msg.text.assign("YJJSYDRXGEDMTJRYFTVGRIEAWYJBOQTFPNJKLPVROCOIDHUHIZYCGLSPWJCQUXAXWHOSPQUMX");

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
    msg.setTimeStamp(0.416465153457);
    msg.setSource(50165U);
    msg.setSourceEntity(55U);
    msg.setDestination(20193U);
    msg.setDestinationEntity(51U);
    msg.group_name.assign("BOYWBVKCELPSCSCFBLHAKPONXZEYYPTMRAJSNTZDQJIJKNOAKEAUIEFJBFHKOOQGHUQCEVPJJPTHTVMMLTWMLQDSRCUKXCLWRTRLNBOZWWSDFJFRDNONJSYWSLUVFFRUHYADPZOGQMEDFNKLORFMTZIKDGMYHYJMYTTXQQECGQXVHUCNAAXVUZSBRIDGEGREPDTGKPIBRNUXZUABIPXMBVVUHXSIXBSDCLWHIYVAWPWONHYLGFZMQZAEGIQC");
    msg.links = 2073852508U;

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
    msg.setTimeStamp(0.76853784803);
    msg.setSource(3039U);
    msg.setSourceEntity(11U);
    msg.setDestination(10552U);
    msg.setDestinationEntity(14U);
    msg.group_name.assign("BLFOMEMYXGCYJAGGWNZUSHFTUCIPZGBAEVXNVKQXOHHLNEFGRDRYKGZYCPBJWNZRSUASWTPZQDYXPKNWJCDAWBOMNIIIZKSYILMPVZCXJHUXVFCXRJCBSOEXQPKTGJMVIFNJREQSDNABWNLAKFOOTSFTGDROPLMRYQ");
    msg.links = 2282647866U;

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
    msg.setTimeStamp(0.086362303281);
    msg.setSource(43880U);
    msg.setSourceEntity(140U);
    msg.setDestination(20351U);
    msg.setDestinationEntity(11U);
    msg.group_name.assign("JHYTEVGUCHDDPIZRNIPIIBGISAOHQEGDXDRDWFRFQTGGVM");
    msg.links = 2177503360U;

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
    msg.setTimeStamp(0.0575173288594);
    msg.setSource(61209U);
    msg.setSourceEntity(237U);
    msg.setDestination(39422U);
    msg.setDestinationEntity(84U);
    msg.groupname.assign("WAFOISYAGJPCHEBCNTMNJQDFDCRMKUVSXPTWUQACPNAXXIFOAARISTJZMOIXTWRNVYODFCQXGPEQWDYGZNUOFKSBKOPSPGVWQDRHZNIBDEAKMHZVGYLUCXAYRRLSBXJ");
    msg.action = 248U;
    msg.grouplist.assign("WSAGYBZLFHXBPJAXFLLARFNBOJNRVKZDOEWHZBKVKUCHGYHYMMUMEINNPQYHENWRGYDQJFQTTWWPFHISLEVKCOERWCUWIUFMBCWIAETYKWDSHULYGBKXSTZSZQIVDIGMVZRCCBHJFOMZTQXA");

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
    msg.setTimeStamp(0.763914498169);
    msg.setSource(11186U);
    msg.setSourceEntity(103U);
    msg.setDestination(17806U);
    msg.setDestinationEntity(191U);
    msg.groupname.assign("NFHJDQRUMCWNIEYQGDOGHQIORVEIQZUOBXYYIEADLXZSOAKSVMABFQGBKNQCXJGSQIRDTBRGJJWBQYGITNOKASSOWXATFP");
    msg.action = 98U;
    msg.grouplist.assign("ZHIGDCGMSGFOXBVBGFBDYORENWUCAXOFPLKCOHWACTGAWMCPFTGNNAJNIKCZOUYAAQZUOEQRJDHKMFWPJBXTSESTYKXXAFPTIOZMFUYVERGWRMXQMQSFRJWYKPKWINBQTNMILHRJHJXHEHFLUESIPJSWUATDATHCWNJBVZVYDFLJBLYIWOLKISXQQKXNTRELUQYHURIVVGCCXZEZPGVOSNBRDMQZOLSRMCLYVVDPAEBDZ");

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
    msg.setTimeStamp(0.834820543334);
    msg.setSource(60863U);
    msg.setSourceEntity(221U);
    msg.setDestination(19268U);
    msg.setDestinationEntity(228U);
    msg.groupname.assign("FIQBPWFZFRHGQRCCDHZIVTJVYYSUYNTYABRMKCMHXKXLDKBTTUAGNXKDHUIKEFBAJCMPJOKQIFJGZREPEJWZMBXXKOXSLIVEDMYARYOZVRQLFGMNLZJVCRUNOTHGRHPFSOAUYDUXLUEAWVYCRGHXEBLPOFVNCIGMZQPEEEDUKYMUAAJFWQMRSUOKMIJVWXOPNNSCHLBLOQWNAOLSJBE");
    msg.action = 32U;
    msg.grouplist.assign("SKHXFWVOMTKCFGZEOTKWQIUNBUORMXEHASIFPWRFLMQRJBPIYZXCMAVOLRASMXXSFHQQPMQJFDYLUUHHWIVNTZBGJDNVSNGPLLYFNCMWNCWZADOSPXQLGLJ");

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
    msg.setTimeStamp(0.248261704343);
    msg.setSource(43703U);
    msg.setSourceEntity(155U);
    msg.setDestination(50218U);
    msg.setDestinationEntity(119U);
    msg.value = 0.979143409105;
    msg.sys_src = 8190U;

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
    msg.setTimeStamp(0.715305876886);
    msg.setSource(63886U);
    msg.setSourceEntity(28U);
    msg.setDestination(56897U);
    msg.setDestinationEntity(167U);
    msg.value = 0.557689329495;
    msg.sys_src = 22727U;

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
    msg.setTimeStamp(0.183668391709);
    msg.setSource(3683U);
    msg.setSourceEntity(155U);
    msg.setDestination(22615U);
    msg.setDestinationEntity(27U);
    msg.value = 0.456333697445;
    msg.sys_src = 28104U;

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
    msg.setTimeStamp(0.749205033783);
    msg.setSource(61908U);
    msg.setSourceEntity(212U);
    msg.setDestination(36426U);
    msg.setDestinationEntity(18U);
    msg.value = 0.482492020206;
    msg.units = 197U;

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
    msg.setTimeStamp(0.0789230521276);
    msg.setSource(22249U);
    msg.setSourceEntity(207U);
    msg.setDestination(25225U);
    msg.setDestinationEntity(20U);
    msg.value = 0.54580829105;
    msg.units = 78U;

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
    msg.setTimeStamp(0.200634912033);
    msg.setSource(51257U);
    msg.setSourceEntity(50U);
    msg.setDestination(63684U);
    msg.setDestinationEntity(79U);
    msg.value = 0.521772925653;
    msg.units = 74U;

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
    msg.setTimeStamp(0.213792193127);
    msg.setSource(64114U);
    msg.setSourceEntity(25U);
    msg.setDestination(15451U);
    msg.setDestinationEntity(223U);
    msg.base_lat = 0.309808118816;
    msg.base_lon = 0.195559087103;
    msg.base_time = 0.286013321617;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 21400U;
    tmp_msg_0.destination = 21146U;
    tmp_msg_0.timeout = 0.444614759329;
    IMC::AnnounceService tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.service.assign("TJTDFTBRCIWNVLAJGWZQKMRSMDHNLUYXFVIKXCPPKEFVSBHOUOKJMQWNRFLDXBUYWDQEBOHUTBHQGNZEJKVXYALYAQZDLTQD");
    tmp_tmp_msg_0_0.service_type = 135U;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.658413065421);
    msg.setSource(27544U);
    msg.setSourceEntity(151U);
    msg.setDestination(42095U);
    msg.setDestinationEntity(55U);
    msg.base_lat = 0.904542458838;
    msg.base_lon = 0.148647638239;
    msg.base_time = 0.0710700746297;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 329U;
    tmp_msg_0.priority = 123;
    tmp_msg_0.x = 23888;
    tmp_msg_0.y = 30921;
    tmp_msg_0.z = 30690;
    tmp_msg_0.t = 820;
    IMC::TransmissionRequest tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.req_id = 29642U;
    tmp_tmp_msg_0_0.comm_mean = 231U;
    tmp_tmp_msg_0_0.destination.assign("NRXQSVNJBMDEPRKZLWENHMCCUGOHHCWKLTLDPSYZWWJCIAQQDWTAMHKMFGUAFLAHTIKIBKYYSVUWDMHJLNERSVJSQPOCMLETNUQYMRVHURFCKRRVDPYVXRGQPSZDGBBPSXIIWEDCFNXVBBSAZUTCUXCJFVJEYOAQRNHRJYOWGBZINDVEZOAJBYFWSMXLHUZUTWHETOAELOGKMPBKVGYBGKI");
    tmp_tmp_msg_0_0.deadline = 0.968905287875;
    tmp_tmp_msg_0_0.data_mode = 215U;
    IMC::Rpm tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 15454;
    tmp_tmp_msg_0_0.msg_data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.txt_data.assign("NLPJBCXFQMREGSOKXQTBFCLKPSJLEMBZUUIAWHHWGBTOXSMNNWLYQAKIWUXGCRSJGAUYM");
    const char tmp_tmp_tmp_msg_0_0_1[] = {-20, 53, 86, -47, 79, 4, -93, -107, 15, 122, 25, -52, 52, -63, 101, 0, -115, -21, 108, -88, -12, -28, -39, 39, 111, 37, 125, -128, -96, 64, -45, -62, -49, -82, -59, -50, -33, -15, -67, 8, -28, 95, 82, 58, 65, 84, -41, 93, -102, -98, -26, 67, -96, 100, -94, -50, -34, -71, 37, -77, 33, -101, -114, 113, -97, 73, 40, -100, -22, -44, 50, -17, 2, 61, 7, 125, -53, 54, -43, -21, -71, 112, -85, 25, -36, -13, 115, -95, 13, 56, -47, -88, 111, 56, 33, 58, -82, 5, 26, -21, -1, -59, -51, 6, 86, 64, 70, 103, 52, -29, 56, -71, -103, -85, -80, 120, -25, 105, 38, 106, -110, 46, -102, -33, 87, -80, 71, -94, 13, 95, 23, -31, 4, -75, 109, -21, 62, -74, -70, -53, 100, -71, 26, 16, 17, 88, -107, 47, -95, 91, -85, -48, -86, 19, 96, -8, -43, -119, -32, -52, 58, 123, 116, -111, -54, -52, 37, 71, -41, -91, -7, -83, 103, -85, -89, 16, 113, -128, -38, 62, -94, 118, -4, 57, 77, -21, -121, 60, 65, 85, -104, -119, -77, -30, -108, 56, -41, 80, 91, 19, -79, 114, -3, -34, 64, 83, 67, -8, -52, -49, 106, 66, -34, -96, -70, -89, -90, -85, 14, -114, 40, -61, -10, -96, -37, 34, 98, -9, 58, -21, 17};
    tmp_tmp_msg_0_0.raw_data.assign(tmp_tmp_tmp_msg_0_0_1, tmp_tmp_tmp_msg_0_0_1 + sizeof(tmp_tmp_tmp_msg_0_0_1));
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
    msg.setTimeStamp(0.457730902032);
    msg.setSource(36649U);
    msg.setSourceEntity(103U);
    msg.setDestination(63698U);
    msg.setDestinationEntity(160U);
    msg.base_lat = 0.431568503743;
    msg.base_lon = 0.798324573654;
    msg.base_time = 0.762432270687;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 59874U;
    tmp_msg_0.destination = 15734U;
    tmp_msg_0.timeout = 0.82105250048;
    IMC::EntityActivationState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 228U;
    tmp_tmp_msg_0_0.error.assign("PGZJOUDXAJJWPYKKMWAMJXJKUGHTRAQCGGQYUTXDFNB");
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
    msg.setTimeStamp(0.57115273762);
    msg.setSource(3379U);
    msg.setSourceEntity(153U);
    msg.setDestination(2725U);
    msg.setDestinationEntity(46U);
    msg.base_lat = 0.215218298267;
    msg.base_lon = 0.372335681815;
    msg.base_time = 0.17576751705;
    const char tmp_msg_0[] = {26, 14, 20, 100, 53, 67, 98, 52, -100, -45, -8, 26, -61};
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
    msg.setTimeStamp(0.650841025932);
    msg.setSource(23667U);
    msg.setSourceEntity(134U);
    msg.setDestination(65356U);
    msg.setDestinationEntity(217U);
    msg.base_lat = 0.0134715812363;
    msg.base_lon = 0.87756531744;
    msg.base_time = 0.947632656997;
    const char tmp_msg_0[] = {58, -31, -64, -124, 126, -86, 86, 36, 34, -5, 10, -58, -44, 53, -28, 0, 34, -120, -2, -41, -123, -37, -91, 90, 102, 76, 36, -118, -113, -126, -70, 36, 44, -27, 76, -90, 55, -16, 13, -82, 125, 25, -29, 2, -107, 87, 92, -75, -127, -78, -108, 60, -71, 13, 118, -7, -111, 90, -107, 83, 79, 49, 63, -39, 24, -63, 104, -61, 5, 63, 90, -49, 82, -40, -73, -59, 69, -75, 14, 14, -94, -116, -106, -51, 54, 6, 112, 95, -36, -68, -29, 85, 62, -64, -111, 58, -41, 80, -12, -102, 122, 121, 79, -59, -94, -35, 62, -51, -47, -38, -29, 31, -86, 108, -117, -86, 34, -82, 57, -20, -110, 76, -13, 65, 81, -59, 43, 107, 125, 58, -67, 78, -72, 117, -32, 44};
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
    msg.setTimeStamp(0.203347286616);
    msg.setSource(57858U);
    msg.setSourceEntity(65U);
    msg.setDestination(37092U);
    msg.setDestinationEntity(200U);
    msg.base_lat = 0.905140551663;
    msg.base_lon = 0.291382903047;
    msg.base_time = 0.435010289245;
    const char tmp_msg_0[] = {105, -89, -24, 13, 25, 16, 45, 93, 107, 121, -26, 29, 15, -27, 91, -120, 86, -53, -4, -46, -49, -53, 27, 46, -114, 41, -70, 83, 112, 106, 34, 71, -22, 56, -8, -56, -53, 31, 62, 95, 62, -21, 79, -41, 63, -68, -116, 95, 23, 35, -80, -118, 86, -89, 102, 17, 84, -117, 74, -68, 96, -116, 2, 20, 16, 62, 121, -92, -74, -22, 43, 117, -11, 29, -71, 90, 107, -6, 113, -74, -84, -93, -48, 13, -26, -21, -125, 2, -28, -2, 53, -100, -108, 33, 9, 1, -81, 122, 110, 64, 45};
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
    msg.setTimeStamp(0.105807073849);
    msg.setSource(4754U);
    msg.setSourceEntity(130U);
    msg.setDestination(7054U);
    msg.setDestinationEntity(218U);
    msg.sys_id = 7856U;
    msg.priority = -114;
    msg.x = 10398;
    msg.y = 14633;
    msg.z = -23124;
    msg.t = -19589;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("AIFCZNQEMSGIVGDSDPLWYAOBKSAEBRRXSRCNOTSJ");
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
    msg.setTimeStamp(0.618422296971);
    msg.setSource(10747U);
    msg.setSourceEntity(97U);
    msg.setDestination(41197U);
    msg.setDestinationEntity(253U);
    msg.sys_id = 58763U;
    msg.priority = 82;
    msg.x = 11225;
    msg.y = -17027;
    msg.z = 11966;
    msg.t = -9616;
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.032143063695);
    msg.setSource(26333U);
    msg.setSourceEntity(101U);
    msg.setDestination(22134U);
    msg.setDestinationEntity(213U);
    msg.sys_id = 49973U;
    msg.priority = 11;
    msg.x = 1675;
    msg.y = 19809;
    msg.z = 3869;
    msg.t = 20221;
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("VLZRBAKKRSGIBYLTNHJHDQDZQCPNIQENXPIAGCLUWOOESTPCCZMHRVUMNJDREPUKQJJIOVMGCKOCVJSBTPUTHWDIHHGAAYXBUAMBZAXAGKWCXFFRTYJFYDWFOJVXUZTNSCFTVOYVKLIJVWTBGVSBQQDERHBLZMPAIETUCMHIBNQQULSHEXPRIPZQYSRXZUMNCYPNKVNGLMPFOHBOKEIWWAKRNLWJFJXOLEMGYAOERFEFDTDUDYD");
    tmp_msg_0.op = 63U;
    tmp_msg_0.lat = 0.777559388068;
    tmp_msg_0.lon = 0.290950718279;
    tmp_msg_0.height = 0.428567926175;
    tmp_msg_0.x = 0.643087648111;
    tmp_msg_0.y = 0.888029685115;
    tmp_msg_0.z = 0.191129277588;
    tmp_msg_0.phi = 0.0935213764358;
    tmp_msg_0.theta = 0.560144824801;
    tmp_msg_0.psi = 0.552459016347;
    tmp_msg_0.vx = 0.247646776469;
    tmp_msg_0.vy = 0.797465370612;
    tmp_msg_0.vz = 0.640751063759;
    tmp_msg_0.p = 0.997649398741;
    tmp_msg_0.q = 0.340173045352;
    tmp_msg_0.r = 0.226262979391;
    tmp_msg_0.svx = 0.199864902765;
    tmp_msg_0.svy = 0.387339149618;
    tmp_msg_0.svz = 0.768430144954;
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
    msg.setTimeStamp(0.202155054903);
    msg.setSource(43675U);
    msg.setSourceEntity(137U);
    msg.setDestination(11410U);
    msg.setDestinationEntity(165U);
    msg.req_id = 19903U;
    msg.type = 155U;
    msg.max_size = 60368U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.131383921974;
    tmp_msg_0.base_lon = 0.00769331994658;
    tmp_msg_0.base_time = 0.870583569465;
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
    msg.setTimeStamp(0.629949448298);
    msg.setSource(46184U);
    msg.setSourceEntity(210U);
    msg.setDestination(65500U);
    msg.setDestinationEntity(174U);
    msg.req_id = 58875U;
    msg.type = 87U;
    msg.max_size = 22041U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.605185103368;
    tmp_msg_0.base_lon = 0.872751140584;
    tmp_msg_0.base_time = 0.759473165759;
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
    msg.setTimeStamp(0.86421319096);
    msg.setSource(41789U);
    msg.setSourceEntity(24U);
    msg.setDestination(22856U);
    msg.setDestinationEntity(239U);
    msg.req_id = 49657U;
    msg.type = 203U;
    msg.max_size = 22043U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.365421512868;
    tmp_msg_0.base_lon = 0.246443407806;
    tmp_msg_0.base_time = 0.456042766736;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 1903U;
    tmp_tmp_msg_0_0.priority = 122;
    tmp_tmp_msg_0_0.x = 19180;
    tmp_tmp_msg_0_0.y = -14229;
    tmp_tmp_msg_0_0.z = -24044;
    tmp_tmp_msg_0_0.t = 4108;
    IMC::GroundVelocity tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.validity = 178U;
    tmp_tmp_tmp_msg_0_0_0.x = 0.171406143432;
    tmp_tmp_tmp_msg_0_0_0.y = 0.744855287798;
    tmp_tmp_tmp_msg_0_0_0.z = 0.672014471312;
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
    msg.setTimeStamp(0.568836552085);
    msg.setSource(50151U);
    msg.setSourceEntity(191U);
    msg.setDestination(62748U);
    msg.setDestinationEntity(158U);
    msg.original_source = 9845U;
    msg.destination = 37333U;
    msg.timeout = 0.568566806848;
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 60U;
    tmp_msg_0.numsamples = 78U;
    IMC::ProfileSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.depth = 57558U;
    tmp_tmp_msg_0_0.avg = 0.869725208696;
    tmp_msg_0.samples.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.lat = 0.18998774592;
    tmp_msg_0.lon = 0.23137002644;
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
    msg.setTimeStamp(0.707796811075);
    msg.setSource(19807U);
    msg.setSourceEntity(183U);
    msg.setDestination(6404U);
    msg.setDestinationEntity(92U);
    msg.original_source = 4032U;
    msg.destination = 16876U;
    msg.timeout = 0.959924750367;
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 127U;
    tmp_msg_0.list.assign("BNOZIANUEFFIWGVSVWCPQVTPRBWLQPZCUDJHKFZMZLEOHHEWDBGVCKMUTLUGSILYNPOYTSHWKIGQTRGTQONRXJPFDXPGYMUCPPGRKVOZDNZQAYAODKJAEYAFAQBC");
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
    msg.setTimeStamp(0.963309795053);
    msg.setSource(44744U);
    msg.setSourceEntity(154U);
    msg.setDestination(15974U);
    msg.setDestinationEntity(202U);
    msg.original_source = 430U;
    msg.destination = 12808U;
    msg.timeout = 0.304355930137;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.136602417364;
    tmp_msg_0.speed_units = 101U;
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
    msg.setTimeStamp(0.388474684807);
    msg.setSource(46922U);
    msg.setSourceEntity(78U);
    msg.setDestination(34768U);
    msg.setDestinationEntity(137U);
    msg.type = 182U;
    msg.comm_interface = 56799U;
    msg.model = 65202U;
    msg.list.assign("NQQSNBRJXMSXUTSFKEAYZNDAOXARROHJGOZWVUOEGLFCGCIIBLOXQNGUSEJBFEVYPLMOOOYHTUZLKDKFJKQIMFACGSURFLTPKPUCYNFRGHBCRMZVHBWSZTPOSNNDXFLEAWIKNIWQCTHKJCDUBARIARZCRYFXQPTLHXQIGJHKQL");

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
    msg.setTimeStamp(0.433522850142);
    msg.setSource(46165U);
    msg.setSourceEntity(74U);
    msg.setDestination(7891U);
    msg.setDestinationEntity(252U);
    msg.type = 90U;
    msg.comm_interface = 50569U;
    msg.model = 21113U;
    msg.list.assign("LNZZHHTFQNNKVEMESTDKRANGMPZKEZQPSEJUQMOJLJEDWXKPFTRSXKWYMQWJAXUOYCSQIALOGEGLZPFNXRBIYPGTETWWAHUFHRCYJLVOBYHWRSZIPYOBRMHNDXMOUDKFSJIGSFXDEMCVFYWGVCKJHGIPBZCUXXTDDICXPNOIAA");

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
    msg.setTimeStamp(0.325747818568);
    msg.setSource(38440U);
    msg.setSourceEntity(151U);
    msg.setDestination(23503U);
    msg.setDestinationEntity(134U);
    msg.type = 239U;
    msg.comm_interface = 48903U;
    msg.model = 21943U;
    msg.list.assign("EXMUHRXCVZUEQYAJUPLXKQWWKWHIVTGANGMJBBRZHBTHTBPCUMRMRHKBHXUQCYTFDBOJNAYXBQBKNNGMAYSSRWGCXPBKGFDVDODQMIFUZMETEJRKCFQDACEFWYJOMHZILJLOVKWGCNDXOLVTXZPSLGMLQJPPLOQAAZPTZXQYSWNZXKNHLZDWTIOKBFTUIJN");

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
    msg.setTimeStamp(0.955873973777);
    msg.setSource(5612U);
    msg.setSourceEntity(248U);
    msg.setDestination(26407U);
    msg.setDestinationEntity(140U);
    msg.type = 127U;
    msg.req_id = 194785964U;
    msg.ttl = 13641U;
    msg.code = 167U;
    msg.destination.assign("ZBEKPJJGLGTJYFNVIPIZOWVSHSEXXZTKDYMNMEFWMZPDPYBOXAZAPZFLUTWKGCBKCLSIBMAOKYDTFNJZSVQXDWBQVRBOAAFDWXHVYQWLSJZLMIWTSUUNEXJFCJB");
    msg.source.assign("FYJHHICPKSYRPEOHXXLLDBHKF");
    msg.acknowledge = 195U;
    msg.status = 57U;
    const char tmp_msg_0[] = {14, 85, -80, 77, -6, -123, -3, 81, 36, -42, -1, -113, -62, -112, 38, 84, -17, -70, -42, 111, -59, 107, -33, -42, -102, 79, 4, -14, -42, 75, 88, -74, -61, 95, -84, 106, 26, -3, -2, 96, 61, -50, 62, -74, -9, -114, -120, -101, 58, 10, -84, -31, 19, -26, 51, -10, 7, 64, 27, 16, 94, 72, 19, -121, 113, 62, 8, -80, 8, 43, 108, -13, -108, 5, 99, -12, -67, 83, -128, -57, 126, -128, 93, 12, -3, -110, 42, 64, -29, -123, -15, 86, -88, -84, 32, 11, 92, -66, -13, -108, 89, -100, 5, -27, 66, 115, 34, -86, 44, -75, -49, 33, -66, 94, 110, -47, -84, -94, -17, 58, -79, 64, -111, -86, 6, 65, 49, -33, -76, -91, -54, -47, -88, -42, -32, 51, 43, -30, 89, 96, -52, 50, 21, -51, 55, -25, -36, 97, -69, 31, 41, 126, 93, -75, 119, 29, -127, -114, -82, 31, -73, 103, 49, -108};
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
    msg.setTimeStamp(0.785998239198);
    msg.setSource(8668U);
    msg.setSourceEntity(179U);
    msg.setDestination(49644U);
    msg.setDestinationEntity(131U);
    msg.type = 27U;
    msg.req_id = 86849717U;
    msg.ttl = 19388U;
    msg.code = 160U;
    msg.destination.assign("OHILAJBGRJWTZWDJVEHCGYRPRZFHEEOKSJTVYMONXMQYZBQIORNDWECEHXUANWFKYTUHDTDGWVTCSEXVOVMBAXPLQJVQFWDJSULSOMNNNIPM");
    msg.source.assign("TSBSNSWUQUAZGRZZDIHGGALBSFKYBPJAELQPTUZBEJWDVXZHTLPHJWGIRMZAFRVMEMIQYIYNXZRCZYBTOOFCKCLAWGPRYNONXVDEAUMDEPBUFMQXXTQLRDCSIGHCUQTBNMDYJMZKNIZJKXUXDCTLKXGAJYKHUEHQIMDAL");
    msg.acknowledge = 220U;
    msg.status = 93U;
    const char tmp_msg_0[] = {-47, 41, 71, 56, 88, -109, 66, 121, -37, 15, -34, 98, -21, 33, -89, 84, 17, -84, 58, 45, -79, -30, -53, 42, 17, -118, 118, -97, -69, 44, -45, -65, 114, 45, 105, 18, -74, 105, 110, -108, -66, 123, -54, -114, -59, 119, 122, -79, -57, 78, 91, 65, -21, 67, 93, 97, -86, -52, 119, -8, -54, -103, -87, -76, -5, 22, 107};
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
    msg.setTimeStamp(0.193460799084);
    msg.setSource(29306U);
    msg.setSourceEntity(57U);
    msg.setDestination(25713U);
    msg.setDestinationEntity(102U);
    msg.type = 120U;
    msg.req_id = 1753231129U;
    msg.ttl = 62681U;
    msg.code = 114U;
    msg.destination.assign("MXIQQITIMWMIBUXWGYKAWZSRCPDVWJQTFHFZASPVHGJMOLSSTKUEHFENXRVLPIRPIFATOLQQLBUKZPVNRMI");
    msg.source.assign("RRWOVZYGDPQYSFYHQCMIVVXYXLEUBDXPBEWPJOQLLSGFAQHXHJGYMSJGSFIMVAWJLYLQGFWXDSWNFHFJNWISNMPYJCDRLDMUUZPXBXSONUCADLTCKEJTKGZQTHDHYMEBRSTKOCJKRDLHBXMWJABSEAKTMWMEROPQARCGIVOVNPTEVANQUIJUIIOUDOEWLCDCGFQYBUZTWEEHCSQIMPFNVZYNV");
    msg.acknowledge = 9U;
    msg.status = 24U;
    const char tmp_msg_0[] = {36, 126, 92, 10, 95, 77, -105, -41, 71, -30, 4, 14, 84, -117, -74, -62, -95, -53, -64, -18, -19, 49, 94, -37, 107, -25, 54, 112, 20, 3, 44, -58, 12, 36, -126, 88, 106, 24, 23, -57, -1, 110, -32, 20, -67, -16, -17, 119, -93, 95, 60, -35, -106, 31, 38, 105, 30, 85, 111, -57, -105, 30, -57, 98, 68, -97, -25, 10, 23, 124, -5, 114, 117, -74, 58};
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
    msg.setTimeStamp(0.916752506871);
    msg.setSource(49444U);
    msg.setSourceEntity(108U);
    msg.setDestination(49647U);
    msg.setDestinationEntity(139U);
    msg.id = 4U;
    msg.range = 0.317274347096;

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
    msg.setTimeStamp(0.688916374617);
    msg.setSource(3769U);
    msg.setSourceEntity(205U);
    msg.setDestination(24267U);
    msg.setDestinationEntity(78U);
    msg.id = 5U;
    msg.range = 0.132516597482;

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
    msg.setTimeStamp(0.893600942319);
    msg.setSource(45311U);
    msg.setSourceEntity(240U);
    msg.setDestination(54252U);
    msg.setDestinationEntity(21U);
    msg.id = 144U;
    msg.range = 0.405924572809;

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
    msg.setTimeStamp(0.730217761002);
    msg.setSource(58553U);
    msg.setSourceEntity(33U);
    msg.setDestination(11322U);
    msg.setDestinationEntity(225U);
    msg.beacon.assign("SIORFOBOSIOCISXGOXVYAELJAVVNEQEHBQZJUEYJGNXDNCBMTEWGJMVRRNADEMBZGHZQKFBKDTUPZPPGVWM");
    msg.lat = 0.435853042433;
    msg.lon = 0.985464979595;
    msg.depth = 0.694148692058;
    msg.query_channel = 19U;
    msg.reply_channel = 95U;
    msg.transponder_delay = 152U;

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
    msg.setTimeStamp(0.883413314193);
    msg.setSource(53918U);
    msg.setSourceEntity(59U);
    msg.setDestination(37055U);
    msg.setDestinationEntity(19U);
    msg.beacon.assign("URBLSFGDEWJQUGYMEOLQUZGYZTBFYCJIHRMAHKEAFBNYHCQVUAPKXAMNIAKSLNXVKROXZZWNGHOYDFANSKDYUCNZVGHGIQAJOSBVLVJOOFSLUXKFFBHPQIZTERRQPEOVVXNAEETMKPCZCKXRMLPFTCYLUMJTWEK");
    msg.lat = 0.0469737329765;
    msg.lon = 0.498751825048;
    msg.depth = 0.535873360637;
    msg.query_channel = 196U;
    msg.reply_channel = 183U;
    msg.transponder_delay = 99U;

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
    msg.setTimeStamp(0.932584631672);
    msg.setSource(32639U);
    msg.setSourceEntity(116U);
    msg.setDestination(7782U);
    msg.setDestinationEntity(162U);
    msg.beacon.assign("YOCTBEXRKSAHTWXCMMPJZAEWEDTBGHBVZIDTJXYWOKZCXKNG");
    msg.lat = 0.00240882530092;
    msg.lon = 0.442193519888;
    msg.depth = 0.216161524663;
    msg.query_channel = 209U;
    msg.reply_channel = 18U;
    msg.transponder_delay = 112U;

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
    msg.setTimeStamp(0.316826590835);
    msg.setSource(63270U);
    msg.setSourceEntity(28U);
    msg.setDestination(4289U);
    msg.setDestinationEntity(48U);
    msg.op = 143U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZIYWURPCKTYFLEVQJTIXQKFOYIJSAIUUOMNYBMUTGWAXUXXQQTYPPHVZZSVKEECXAT");
    tmp_msg_0.lat = 0.1430301486;
    tmp_msg_0.lon = 0.427841037433;
    tmp_msg_0.depth = 0.921031237297;
    tmp_msg_0.query_channel = 120U;
    tmp_msg_0.reply_channel = 125U;
    tmp_msg_0.transponder_delay = 24U;
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
    msg.setTimeStamp(0.242876921786);
    msg.setSource(6406U);
    msg.setSourceEntity(39U);
    msg.setDestination(48060U);
    msg.setDestinationEntity(188U);
    msg.op = 149U;

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
    msg.setTimeStamp(0.81807895244);
    msg.setSource(17235U);
    msg.setSourceEntity(9U);
    msg.setDestination(30673U);
    msg.setDestinationEntity(226U);
    msg.op = 13U;

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
    msg.setTimeStamp(0.239805019864);
    msg.setSource(32502U);
    msg.setSourceEntity(215U);
    msg.setDestination(29118U);
    msg.setDestinationEntity(98U);
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.963949120149;
    tmp_msg_0.lon = 0.399837412006;
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
    msg.setTimeStamp(0.823316544139);
    msg.setSource(61107U);
    msg.setSourceEntity(83U);
    msg.setDestination(32256U);
    msg.setDestinationEntity(251U);
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 64777U;
    tmp_msg_0.type = 178U;
    tmp_msg_0.max_size = 4752U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.304775537506;
    tmp_tmp_msg_0_0.base_lon = 0.732654086943;
    tmp_tmp_msg_0_0.base_time = 0.973084280879;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.398112511149);
    msg.setSource(24872U);
    msg.setSourceEntity(142U);
    msg.setDestination(8293U);
    msg.setDestinationEntity(46U);
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("MHDRRXOEKZKZFIUJJXSNPVUCKHISQLAJUDZLIYTBEAYATEBDLNNSGMGARSTZCZNKNG");
    tmp_tmp_msg_0_0.lat = 0.0741441914229;
    tmp_tmp_msg_0_0.lon = 0.402780108622;
    tmp_tmp_msg_0_0.depth = 0.784137545245;
    tmp_tmp_msg_0_0.query_channel = 38U;
    tmp_tmp_msg_0_0.reply_channel = 23U;
    tmp_tmp_msg_0_0.transponder_delay = 176U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.616125831528;
    tmp_msg_0.y = 0.990282660124;
    tmp_msg_0.var_x = 0.429729600741;
    tmp_msg_0.var_y = 0.926225001545;
    tmp_msg_0.distance = 0.642080031564;
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
    msg.setTimeStamp(0.92098871798);
    msg.setSource(37469U);
    msg.setSourceEntity(45U);
    msg.setDestination(35496U);
    msg.setDestinationEntity(130U);
    msg.op = 144U;
    msg.system.assign("GTBPKIFBFWOMDOJIKLVBPTDECJVAWSFHPBOXVNUZQSMOFWNLTUCYZWZLINKSQIKJJUNMHWLDDTZQIXIDPAOYYVEQYJGYLAXRLKSHV");
    msg.range = 0.173220530019;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.25035163416;
    tmp_msg_0.lon = 0.689200353396;
    tmp_msg_0.alt = 0.376007431925;
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
    msg.setTimeStamp(0.799588955165);
    msg.setSource(10589U);
    msg.setSourceEntity(44U);
    msg.setDestination(33028U);
    msg.setDestinationEntity(24U);
    msg.op = 237U;
    msg.system.assign("TYPQQEKODHAGSXQSPKMVBLE");
    msg.range = 0.983821361108;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HVTLRUEAMKCEORQRFHPFXEOTOTUMLIWEFTGZCEWSZGWSXZUTBDFHGHZIFJULQMLBGHIYKIVQNGSTQPKDDVNQYDBUYQDIHBZHIZPNAENSAREAPXRASXMGGKCZERYXQHTDHTNBOSMQFGJOVYXBWNINCRUVNPOWCZYYJHJXVFCMJZKLTVJLKDBOXOIYYFKURCAPJDABSSWZFSOQ");
    tmp_msg_0.lat = 0.564499016515;
    tmp_msg_0.lon = 0.190384479279;
    tmp_msg_0.depth = 0.56887619471;
    tmp_msg_0.query_channel = 170U;
    tmp_msg_0.reply_channel = 240U;
    tmp_msg_0.transponder_delay = 33U;
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
    msg.setTimeStamp(0.26723143751);
    msg.setSource(44479U);
    msg.setSourceEntity(222U);
    msg.setDestination(8843U);
    msg.setDestinationEntity(75U);
    msg.op = 208U;
    msg.system.assign("PMZNAAQRCDHKIURIDSNFDKADQMIJBNRXWPNKMAZKPBWQWURGSHOKETZMWYACJGX");
    msg.range = 0.777555099604;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.137343980135;
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
    msg.setTimeStamp(0.716686246229);
    msg.setSource(30239U);
    msg.setSourceEntity(100U);
    msg.setDestination(26404U);
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
    msg.setTimeStamp(0.246357385441);
    msg.setSource(63716U);
    msg.setSourceEntity(237U);
    msg.setDestination(1354U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.974270606999);
    msg.setSource(55361U);
    msg.setSourceEntity(137U);
    msg.setDestination(19664U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.533485573529);
    msg.setSource(38201U);
    msg.setSourceEntity(179U);
    msg.setDestination(33256U);
    msg.setDestinationEntity(203U);
    msg.list.assign("JWEDZFCICXUWTNIYPSGFDZCJWPDCWUIVUFAJDJKWMHBECKCUHVNESVUAUXAOXSUNNPBPMKXKJOIOQOGYTRYKSBXCIVZMFAVYINQTRNOEZSSPVEKWLBYCY");

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
    msg.setTimeStamp(0.451536559947);
    msg.setSource(12867U);
    msg.setSourceEntity(239U);
    msg.setDestination(51668U);
    msg.setDestinationEntity(160U);
    msg.list.assign("BDYJVFYLBALVTXUGVKXHKXSEYXINLOGSHERBPAUJLSRXNFIKJLEKFEHMRVOHQNCNDHNUCSXUUOUJNIIFJTPJTWPUTWTWQKIAPAVFGZEZODEZMAHMSQCEHRZDBSCVQJFOKCIRCXOFTQLNKUJT");

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
    msg.setTimeStamp(0.289642995945);
    msg.setSource(24258U);
    msg.setSourceEntity(136U);
    msg.setDestination(65466U);
    msg.setDestinationEntity(70U);
    msg.list.assign("FLHWSJMBTTTPTOFJAQCPXPMUGAKBUVRCZIGRWFSQWQTPGQAODJRIEMOLWDUJBEYCGHGYMOCJNVBKSGSTHUMLBAILFXWRCRXYLNOBORDIOPIVYBSFZZPOWNESYHKCENZNNUPHYBVHHEDKNURLAMKGKEJDLHJWBEZDXUJMGMCAWFRQKLIDXNNFTQHQNSKFRVTJGSESUZOXBUVGLIIWEOYKQJCQDZPYRCACMTZDYZU");

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
    msg.setTimeStamp(0.150701529413);
    msg.setSource(63353U);
    msg.setSourceEntity(162U);
    msg.setDestination(53566U);
    msg.setDestinationEntity(54U);
    msg.peer.assign("PFSMWZQLTPEDUZLYBDJENEUIBEATCKHVHONMESPJSLGXZPGRFNHIISTOMMMUDXJFBJQABIUCEBZXZ");
    msg.rssi = 0.64364518154;
    msg.integrity = 50603U;

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
    msg.setTimeStamp(0.127591794888);
    msg.setSource(59570U);
    msg.setSourceEntity(190U);
    msg.setDestination(60740U);
    msg.setDestinationEntity(170U);
    msg.peer.assign("BCTDIIGORJRLIXDTBQAMFSNGDVXIDE");
    msg.rssi = 0.63192077487;
    msg.integrity = 40375U;

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
    msg.setTimeStamp(0.728993395553);
    msg.setSource(21363U);
    msg.setSourceEntity(86U);
    msg.setDestination(45430U);
    msg.setDestinationEntity(222U);
    msg.peer.assign("TXZQCFAQSWACGZEKZHKMIISNTGDWDOYDSDPVCQOQUVGSYKGBVMAJHHTFTXDWLGTEEWFQGPWKHRRMPBTLBXYUFIXRIFSFDSVXARPIGUEOAQCOEYYJLRZEZP");
    msg.rssi = 0.138974989887;
    msg.integrity = 22473U;

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
    msg.setTimeStamp(0.212660853908);
    msg.setSource(12629U);
    msg.setSourceEntity(73U);
    msg.setDestination(34260U);
    msg.setDestinationEntity(127U);
    msg.value = 17217;

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
    msg.setTimeStamp(0.992824434632);
    msg.setSource(29431U);
    msg.setSourceEntity(111U);
    msg.setDestination(50609U);
    msg.setDestinationEntity(73U);
    msg.value = -11307;

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
    msg.setTimeStamp(0.382016135832);
    msg.setSource(43602U);
    msg.setSourceEntity(36U);
    msg.setDestination(57461U);
    msg.setDestinationEntity(91U);
    msg.value = -29761;

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
    msg.setTimeStamp(0.785449260591);
    msg.setSource(2440U);
    msg.setSourceEntity(36U);
    msg.setDestination(31649U);
    msg.setDestinationEntity(65U);
    msg.value = 0.299515989383;

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
    msg.setTimeStamp(0.299764259959);
    msg.setSource(19002U);
    msg.setSourceEntity(90U);
    msg.setDestination(753U);
    msg.setDestinationEntity(222U);
    msg.value = 0.0264625899661;

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
    msg.setTimeStamp(0.0356660686563);
    msg.setSource(25847U);
    msg.setSourceEntity(107U);
    msg.setDestination(48645U);
    msg.setDestinationEntity(59U);
    msg.value = 0.601870970075;

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
    msg.setTimeStamp(0.315181711306);
    msg.setSource(36036U);
    msg.setSourceEntity(193U);
    msg.setDestination(52820U);
    msg.setDestinationEntity(185U);
    msg.value = 0.909761000763;

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
    msg.setTimeStamp(0.735250457885);
    msg.setSource(39402U);
    msg.setSourceEntity(100U);
    msg.setDestination(63809U);
    msg.setDestinationEntity(147U);
    msg.value = 0.8994285384;

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
    msg.setTimeStamp(0.294297419102);
    msg.setSource(22341U);
    msg.setSourceEntity(22U);
    msg.setDestination(8759U);
    msg.setDestinationEntity(73U);
    msg.value = 0.917979673138;

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
    msg.setTimeStamp(0.951633680596);
    msg.setSource(50310U);
    msg.setSourceEntity(86U);
    msg.setDestination(36908U);
    msg.setDestinationEntity(229U);
    msg.validity = 21508U;
    msg.type = 249U;
    msg.utc_year = 49546U;
    msg.utc_month = 36U;
    msg.utc_day = 201U;
    msg.utc_time = 0.116670450274;
    msg.lat = 0.0838273751027;
    msg.lon = 0.400046001533;
    msg.height = 0.861075949775;
    msg.satellites = 52U;
    msg.cog = 0.354779773918;
    msg.sog = 0.706592038848;
    msg.hdop = 0.139129883256;
    msg.vdop = 0.118875247202;
    msg.hacc = 0.420519532207;
    msg.vacc = 0.63951475532;

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
    msg.setTimeStamp(0.104902065741);
    msg.setSource(41067U);
    msg.setSourceEntity(40U);
    msg.setDestination(469U);
    msg.setDestinationEntity(230U);
    msg.validity = 43735U;
    msg.type = 249U;
    msg.utc_year = 12435U;
    msg.utc_month = 203U;
    msg.utc_day = 186U;
    msg.utc_time = 0.806718282664;
    msg.lat = 0.27931151122;
    msg.lon = 0.749141797282;
    msg.height = 0.100670485265;
    msg.satellites = 179U;
    msg.cog = 0.543272344666;
    msg.sog = 0.285830573015;
    msg.hdop = 0.572900265447;
    msg.vdop = 0.535152189502;
    msg.hacc = 0.838073593053;
    msg.vacc = 0.399396614116;

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
    msg.setTimeStamp(0.88380927331);
    msg.setSource(24839U);
    msg.setSourceEntity(129U);
    msg.setDestination(9070U);
    msg.setDestinationEntity(6U);
    msg.validity = 47055U;
    msg.type = 193U;
    msg.utc_year = 36596U;
    msg.utc_month = 202U;
    msg.utc_day = 214U;
    msg.utc_time = 0.42898139804;
    msg.lat = 0.616292105776;
    msg.lon = 0.551845697908;
    msg.height = 0.682421007859;
    msg.satellites = 111U;
    msg.cog = 0.990084219018;
    msg.sog = 0.578124007419;
    msg.hdop = 0.641702139423;
    msg.vdop = 0.396420728297;
    msg.hacc = 0.031734986542;
    msg.vacc = 0.927861711235;

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
    msg.setTimeStamp(0.339575094728);
    msg.setSource(30874U);
    msg.setSourceEntity(77U);
    msg.setDestination(53295U);
    msg.setDestinationEntity(180U);
    msg.time = 0.877828179286;
    msg.phi = 0.418121736733;
    msg.theta = 0.622206549544;
    msg.psi = 0.3354717439;
    msg.psi_magnetic = 0.189088619082;

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
    msg.setTimeStamp(0.347157244366);
    msg.setSource(65298U);
    msg.setSourceEntity(179U);
    msg.setDestination(65116U);
    msg.setDestinationEntity(158U);
    msg.time = 0.561864484955;
    msg.phi = 0.286514555877;
    msg.theta = 0.654369802465;
    msg.psi = 0.469759848192;
    msg.psi_magnetic = 0.879118748301;

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
    msg.setTimeStamp(0.885697281594);
    msg.setSource(62502U);
    msg.setSourceEntity(129U);
    msg.setDestination(38092U);
    msg.setDestinationEntity(43U);
    msg.time = 0.328759296427;
    msg.phi = 0.200092320309;
    msg.theta = 0.542991760938;
    msg.psi = 0.980467421042;
    msg.psi_magnetic = 0.778166419477;

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
    msg.setTimeStamp(0.731980080604);
    msg.setSource(2771U);
    msg.setSourceEntity(43U);
    msg.setDestination(6049U);
    msg.setDestinationEntity(33U);
    msg.time = 0.223998821195;
    msg.x = 0.349931244369;
    msg.y = 0.675328295189;
    msg.z = 0.782215991512;
    msg.timestep = 0.40003954547;

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
    msg.setTimeStamp(0.437779434568);
    msg.setSource(30274U);
    msg.setSourceEntity(9U);
    msg.setDestination(13782U);
    msg.setDestinationEntity(0U);
    msg.time = 0.342497510062;
    msg.x = 0.172462677108;
    msg.y = 0.939414977631;
    msg.z = 0.449975690754;
    msg.timestep = 0.873308452958;

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
    msg.setTimeStamp(0.527940779694);
    msg.setSource(34218U);
    msg.setSourceEntity(246U);
    msg.setDestination(35148U);
    msg.setDestinationEntity(132U);
    msg.time = 0.265966674585;
    msg.x = 0.844112024138;
    msg.y = 0.14164259829;
    msg.z = 0.1892575412;
    msg.timestep = 0.0700862500117;

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
    msg.setTimeStamp(0.317379571638);
    msg.setSource(6662U);
    msg.setSourceEntity(142U);
    msg.setDestination(25155U);
    msg.setDestinationEntity(59U);
    msg.time = 0.296899080485;
    msg.x = 0.729895557509;
    msg.y = 0.823067620439;
    msg.z = 0.571304937757;

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
    msg.setTimeStamp(0.871661282977);
    msg.setSource(58146U);
    msg.setSourceEntity(196U);
    msg.setDestination(51073U);
    msg.setDestinationEntity(104U);
    msg.time = 0.835407103647;
    msg.x = 0.49545572188;
    msg.y = 0.506605263359;
    msg.z = 0.464097383433;

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
    msg.setTimeStamp(0.936286057677);
    msg.setSource(10098U);
    msg.setSourceEntity(213U);
    msg.setDestination(49736U);
    msg.setDestinationEntity(83U);
    msg.time = 0.218751683413;
    msg.x = 0.024664746228;
    msg.y = 0.617768364115;
    msg.z = 0.934648358697;

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
    msg.setTimeStamp(0.000716870812558);
    msg.setSource(64057U);
    msg.setSourceEntity(225U);
    msg.setDestination(25290U);
    msg.setDestinationEntity(2U);
    msg.time = 0.946635697578;
    msg.x = 0.777392246227;
    msg.y = 0.567148393898;
    msg.z = 0.556710344642;

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
    msg.setTimeStamp(0.530547715931);
    msg.setSource(58295U);
    msg.setSourceEntity(47U);
    msg.setDestination(47164U);
    msg.setDestinationEntity(48U);
    msg.time = 0.819041630011;
    msg.x = 0.826149987164;
    msg.y = 0.861383790115;
    msg.z = 0.459615314099;

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
    msg.setTimeStamp(0.933982205373);
    msg.setSource(56677U);
    msg.setSourceEntity(167U);
    msg.setDestination(43835U);
    msg.setDestinationEntity(81U);
    msg.time = 0.120983468956;
    msg.x = 0.300082101723;
    msg.y = 0.24997482032;
    msg.z = 0.0257283017635;

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
    msg.setTimeStamp(0.493464693399);
    msg.setSource(56223U);
    msg.setSourceEntity(14U);
    msg.setDestination(38418U);
    msg.setDestinationEntity(121U);
    msg.time = 0.426453543205;
    msg.x = 0.898013146276;
    msg.y = 0.492177314338;
    msg.z = 0.881195553112;

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
    msg.setTimeStamp(0.268135323474);
    msg.setSource(62850U);
    msg.setSourceEntity(95U);
    msg.setDestination(5169U);
    msg.setDestinationEntity(11U);
    msg.time = 0.925575460291;
    msg.x = 0.0675475569704;
    msg.y = 0.855863684;
    msg.z = 0.300229880241;

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
    msg.setTimeStamp(0.313491090088);
    msg.setSource(29084U);
    msg.setSourceEntity(241U);
    msg.setDestination(30688U);
    msg.setDestinationEntity(67U);
    msg.time = 0.257848223861;
    msg.x = 0.504067918308;
    msg.y = 0.526241171586;
    msg.z = 0.777206654937;

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
    msg.setTimeStamp(0.580154811724);
    msg.setSource(37130U);
    msg.setSourceEntity(15U);
    msg.setDestination(62870U);
    msg.setDestinationEntity(180U);
    msg.validity = 27U;
    msg.x = 0.403896142415;
    msg.y = 0.206963467085;
    msg.z = 0.0800630844686;

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
    msg.setTimeStamp(0.484275384743);
    msg.setSource(46005U);
    msg.setSourceEntity(143U);
    msg.setDestination(57704U);
    msg.setDestinationEntity(178U);
    msg.validity = 129U;
    msg.x = 0.00857638752195;
    msg.y = 0.143589144708;
    msg.z = 0.127520155466;

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
    msg.setTimeStamp(0.0945027239);
    msg.setSource(6743U);
    msg.setSourceEntity(186U);
    msg.setDestination(35294U);
    msg.setDestinationEntity(41U);
    msg.validity = 164U;
    msg.x = 0.941069411101;
    msg.y = 0.546171517821;
    msg.z = 0.233530363476;

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
    msg.setTimeStamp(0.577698965117);
    msg.setSource(62460U);
    msg.setSourceEntity(238U);
    msg.setDestination(51558U);
    msg.setDestinationEntity(154U);
    msg.validity = 119U;
    msg.x = 0.465949698535;
    msg.y = 0.916270431571;
    msg.z = 0.818564549482;

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
    msg.setTimeStamp(0.217401486095);
    msg.setSource(34549U);
    msg.setSourceEntity(229U);
    msg.setDestination(11901U);
    msg.setDestinationEntity(3U);
    msg.validity = 160U;
    msg.x = 0.542611121272;
    msg.y = 0.790459538143;
    msg.z = 0.567471268599;

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
    msg.setTimeStamp(0.0230289517013);
    msg.setSource(44182U);
    msg.setSourceEntity(183U);
    msg.setDestination(47651U);
    msg.setDestinationEntity(33U);
    msg.validity = 241U;
    msg.x = 0.52367771106;
    msg.y = 0.68302506558;
    msg.z = 0.980525160358;

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
    msg.setTimeStamp(0.0104132883344);
    msg.setSource(36301U);
    msg.setSourceEntity(221U);
    msg.setDestination(11501U);
    msg.setDestinationEntity(68U);
    msg.time = 0.0993271894147;
    msg.x = 0.754875560949;
    msg.y = 0.441165912411;
    msg.z = 0.67245167698;

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
    msg.setTimeStamp(0.94863361546);
    msg.setSource(40360U);
    msg.setSourceEntity(133U);
    msg.setDestination(58047U);
    msg.setDestinationEntity(179U);
    msg.time = 0.840346877083;
    msg.x = 0.21145364301;
    msg.y = 0.472898941261;
    msg.z = 0.141136161499;

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
    msg.setTimeStamp(0.551971992675);
    msg.setSource(29838U);
    msg.setSourceEntity(31U);
    msg.setDestination(31727U);
    msg.setDestinationEntity(13U);
    msg.time = 0.329106593153;
    msg.x = 0.797682925898;
    msg.y = 0.735521398862;
    msg.z = 0.376297187108;

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
    msg.setTimeStamp(0.53336502517);
    msg.setSource(63939U);
    msg.setSourceEntity(89U);
    msg.setDestination(49873U);
    msg.setDestinationEntity(222U);
    msg.validity = 201U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.46921581267;
    tmp_msg_0.beam_height = 0.871868209507;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.972524668792;

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
    msg.setTimeStamp(0.835820109097);
    msg.setSource(12771U);
    msg.setSourceEntity(188U);
    msg.setDestination(36845U);
    msg.setDestinationEntity(248U);
    msg.validity = 35U;
    msg.value = 0.883917261383;

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
    msg.setTimeStamp(0.0024634489835);
    msg.setSource(2443U);
    msg.setSourceEntity(154U);
    msg.setDestination(62018U);
    msg.setDestinationEntity(233U);
    msg.validity = 94U;
    msg.value = 0.670216946093;

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
    msg.setTimeStamp(0.179628767242);
    msg.setSource(50842U);
    msg.setSourceEntity(130U);
    msg.setDestination(41797U);
    msg.setDestinationEntity(191U);
    msg.value = 0.264673244435;

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
    msg.setTimeStamp(0.717079811442);
    msg.setSource(29723U);
    msg.setSourceEntity(130U);
    msg.setDestination(36220U);
    msg.setDestinationEntity(162U);
    msg.value = 0.192726398685;

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
    msg.setTimeStamp(0.951520023577);
    msg.setSource(36054U);
    msg.setSourceEntity(147U);
    msg.setDestination(15910U);
    msg.setDestinationEntity(170U);
    msg.value = 0.223908109223;

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
    msg.setTimeStamp(0.63213972885);
    msg.setSource(22629U);
    msg.setSourceEntity(166U);
    msg.setDestination(27231U);
    msg.setDestinationEntity(130U);
    msg.value = 0.831293999231;

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
    msg.setTimeStamp(0.264171655372);
    msg.setSource(34738U);
    msg.setSourceEntity(11U);
    msg.setDestination(304U);
    msg.setDestinationEntity(26U);
    msg.value = 0.931634111023;

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
    msg.setTimeStamp(0.761809688671);
    msg.setSource(42384U);
    msg.setSourceEntity(222U);
    msg.setDestination(61426U);
    msg.setDestinationEntity(66U);
    msg.value = 0.648801458111;

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
    msg.setTimeStamp(0.878433928394);
    msg.setSource(32463U);
    msg.setSourceEntity(47U);
    msg.setDestination(44910U);
    msg.setDestinationEntity(126U);
    msg.value = 0.924401554557;

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
    msg.setTimeStamp(0.126490474405);
    msg.setSource(1059U);
    msg.setSourceEntity(244U);
    msg.setDestination(4381U);
    msg.setDestinationEntity(48U);
    msg.value = 0.0764059713296;

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
    msg.setTimeStamp(0.673062068305);
    msg.setSource(5557U);
    msg.setSourceEntity(240U);
    msg.setDestination(16068U);
    msg.setDestinationEntity(125U);
    msg.value = 0.226555759786;

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
    msg.setTimeStamp(0.348902637654);
    msg.setSource(24469U);
    msg.setSourceEntity(82U);
    msg.setDestination(64860U);
    msg.setDestinationEntity(23U);
    msg.value = 0.273547529537;

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
    msg.setTimeStamp(0.821967995116);
    msg.setSource(33412U);
    msg.setSourceEntity(211U);
    msg.setDestination(39988U);
    msg.setDestinationEntity(28U);
    msg.value = 0.34048792186;

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
    msg.setTimeStamp(0.0365944944774);
    msg.setSource(63329U);
    msg.setSourceEntity(233U);
    msg.setDestination(12346U);
    msg.setDestinationEntity(123U);
    msg.value = 0.26191316219;

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
    msg.setTimeStamp(0.599202033516);
    msg.setSource(58385U);
    msg.setSourceEntity(8U);
    msg.setDestination(31723U);
    msg.setDestinationEntity(238U);
    msg.value = 0.535004410334;

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
    msg.setTimeStamp(0.774635229162);
    msg.setSource(55605U);
    msg.setSourceEntity(58U);
    msg.setDestination(34879U);
    msg.setDestinationEntity(143U);
    msg.value = 0.365250353918;

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
    msg.setTimeStamp(0.568758743075);
    msg.setSource(36620U);
    msg.setSourceEntity(18U);
    msg.setDestination(62571U);
    msg.setDestinationEntity(83U);
    msg.value = 0.589540312671;

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
    msg.setTimeStamp(0.527450990104);
    msg.setSource(49034U);
    msg.setSourceEntity(13U);
    msg.setDestination(61018U);
    msg.setDestinationEntity(29U);
    msg.value = 0.114708357015;

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
    msg.setTimeStamp(0.460947320911);
    msg.setSource(7684U);
    msg.setSourceEntity(241U);
    msg.setDestination(28568U);
    msg.setDestinationEntity(206U);
    msg.value = 0.235671594762;

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
    msg.setTimeStamp(0.370962375353);
    msg.setSource(37413U);
    msg.setSourceEntity(76U);
    msg.setDestination(19053U);
    msg.setDestinationEntity(74U);
    msg.value = 0.19469559177;

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
    msg.setTimeStamp(0.88259532982);
    msg.setSource(44546U);
    msg.setSourceEntity(222U);
    msg.setDestination(30079U);
    msg.setDestinationEntity(93U);
    msg.value = 0.219088377948;

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
    msg.setTimeStamp(0.957222300292);
    msg.setSource(32171U);
    msg.setSourceEntity(68U);
    msg.setDestination(26972U);
    msg.setDestinationEntity(191U);
    msg.value = 0.610621796587;

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
    msg.setTimeStamp(0.458578957161);
    msg.setSource(30120U);
    msg.setSourceEntity(132U);
    msg.setDestination(33408U);
    msg.setDestinationEntity(42U);
    msg.value = 0.917666036099;

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
    msg.setTimeStamp(0.617071397088);
    msg.setSource(47163U);
    msg.setSourceEntity(13U);
    msg.setDestination(52701U);
    msg.setDestinationEntity(115U);
    msg.value = 0.444839913737;

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
    msg.setTimeStamp(0.59239580066);
    msg.setSource(56033U);
    msg.setSourceEntity(186U);
    msg.setDestination(56427U);
    msg.setDestinationEntity(63U);
    msg.value = 0.0371676668747;

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
    msg.setTimeStamp(0.462112662961);
    msg.setSource(61963U);
    msg.setSourceEntity(53U);
    msg.setDestination(3861U);
    msg.setDestinationEntity(136U);
    msg.value = 0.417965995081;

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
    msg.setTimeStamp(0.872262690359);
    msg.setSource(46465U);
    msg.setSourceEntity(119U);
    msg.setDestination(12666U);
    msg.setDestinationEntity(90U);
    msg.direction = 0.583363884033;
    msg.speed = 0.746265615068;
    msg.turbulence = 0.310680387573;

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
    msg.setTimeStamp(0.532475784296);
    msg.setSource(10345U);
    msg.setSourceEntity(14U);
    msg.setDestination(43322U);
    msg.setDestinationEntity(173U);
    msg.direction = 0.383015406565;
    msg.speed = 0.338241076423;
    msg.turbulence = 0.38237560622;

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
    msg.setTimeStamp(0.744950508654);
    msg.setSource(2737U);
    msg.setSourceEntity(205U);
    msg.setDestination(15077U);
    msg.setDestinationEntity(49U);
    msg.direction = 0.197104924472;
    msg.speed = 0.12745872116;
    msg.turbulence = 0.426380298853;

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
    msg.setTimeStamp(0.101974450216);
    msg.setSource(16044U);
    msg.setSourceEntity(196U);
    msg.setDestination(35255U);
    msg.setDestinationEntity(40U);
    msg.value = 0.428070783176;

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
    msg.setTimeStamp(0.0485706016804);
    msg.setSource(17103U);
    msg.setSourceEntity(87U);
    msg.setDestination(33615U);
    msg.setDestinationEntity(45U);
    msg.value = 0.915224013334;

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
    msg.setTimeStamp(0.354096466516);
    msg.setSource(34565U);
    msg.setSourceEntity(152U);
    msg.setDestination(58128U);
    msg.setDestinationEntity(236U);
    msg.value = 0.512106744627;

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
    msg.setTimeStamp(0.763674163417);
    msg.setSource(20339U);
    msg.setSourceEntity(179U);
    msg.setDestination(42741U);
    msg.setDestinationEntity(191U);
    msg.value.assign("QGASJEXCULBDGQAKPWNRFHOMEIWSMYMIQJABGQOTNTVVKPMEUJTDPTDIWDNAHLMYGCNDNRLJLYUZAUHTGPAXMFNWVSURZQOIMGZBJDRKDKTUJLBLXMKHPRUCFCSHPSQTMIYXRVZYXULIYEINVVBZWRNGWMC");

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
    msg.setTimeStamp(0.742938352587);
    msg.setSource(42400U);
    msg.setSourceEntity(220U);
    msg.setDestination(5307U);
    msg.setDestinationEntity(232U);
    msg.value.assign("YCOTNKMFVDRRJMWLWYBLDWRHXWKUGYKRHFPMDANHHCOUZSKRXGAMDPAPXUIDPGECCCXNOFJKHCQHFOROSPLZPQFHSABLQMIZREOJUYIHJTTTWRSPJLBFVDZLEYXYNBEQMZPLFTSNMECXAZIGERHKXHIKKPCQUIIAUTTVRQCXGSDBYSYSNUFNWGEWJOGUKBQENBGLQZAVTLDEDUXAAJVZNTFMSOMKVPGBXJVJBELQN");

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
    msg.setTimeStamp(0.455785429208);
    msg.setSource(30582U);
    msg.setSourceEntity(132U);
    msg.setDestination(9554U);
    msg.setDestinationEntity(171U);
    msg.value.assign("WRSHILREQJKAJAZTVKPZNKCVPVPJVLNQWKXZSOXCCGITSJYETAESXXUVLCHCEOAKDRLTPZFRHAUZJVGNPGVJXLJWQXHOBKAULDIBTJCSOTDURDFKANNIVMXRGEFWZMQUMOVZSQRKOPNNZWDFYTHDDEMPBQJHBD");

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
    msg.setTimeStamp(0.884234448898);
    msg.setSource(27853U);
    msg.setSourceEntity(207U);
    msg.setDestination(40743U);
    msg.setDestinationEntity(215U);
    const char tmp_msg_0[] = {-117, -18, -72, 42, -38, -96, 76, 80, -66, -39, -21, -3, -6, 63, -75, 6, -34, 26, 109, -87, 89, -27, 19, 7, 105, -86, -127, -24, 33, -112, -127, 117, -22, 90, 72, -36, 28, -20, 124, 3, -56, -78, 29, -6, -22, 27, 56, 0, -62, -105, -72, 39, 98, -111, -51, -81, -56, 44, 100, -115, 51, 73, 86, 8, 64, -5, -72, 118, -69, -59, -100, -42, -7, -28, -21, -100, -73, -119, -47, 76, 31, -126, -62, -12, 20, 81, 52, -65, -56, -38, -17, 97, 41, -40, 59, -35, -39, 112, 38, 5, -14, 39, 34, 85, 67, -89, 57, -53, 28, 14, -127, 51, 36, -38, -96, 18, -74, -57, -2, 66, -36, 73, 8, 19, -67, 118, 119, -108, 28, -8, 80, -86, 8, -35, 34, 88, 79, -37, 43, -89, 56, -62, -9, -27, 9, -99, -4, 31, 51, 78, -61, 108, 37, -46, -98, -120, -82, 13, -2, 77, 117, 76, -7, 125, 117, -12, -33, 41, -51, -37, 121, -53, -84, -51, -73, -64, 46, -87, 33};
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
    msg.setTimeStamp(0.705263429295);
    msg.setSource(57789U);
    msg.setSourceEntity(152U);
    msg.setDestination(33092U);
    msg.setDestinationEntity(26U);
    const char tmp_msg_0[] = {26, 16, -48, 38, 0, 105, 80, 36, -20, 99, -126, -126, 94, -40, -32, -122, 49, 107, -80, 36, -109, -122, -85, 36, 79, 92, 108, 99, 74, -101, -127, 96, -108, -52, 3, 14, -58, -48, 24, -122, -91, -37, 108, 69, 6, -62, 38, 52, -111, 44, 48, -10, -29, 51, -67, -49, -50, 103, 89, 102, 8, 43, -59, -41, -93, -12, 18, -56, -87, -96, 88, -112, -113};
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
    msg.setTimeStamp(0.715524544835);
    msg.setSource(52852U);
    msg.setSourceEntity(93U);
    msg.setDestination(54219U);
    msg.setDestinationEntity(160U);
    const char tmp_msg_0[] = {-26, 74, -32, 96, -125, 122, -4, -63, 106, -1, 98, -85, 122, 56, 30, 102, 47, 121, 32, -62, 55, -100, 95, 63, -31, -69, 116, -44, 122, -91, -93, 77, -60, -18, -65, 71, -69, -53, -109, -10, 116, 56, 23, 116, -60, 67, 80, -15, 83, 69, 48, -55, 9, 0, 65, -96, 3, -70, -55, -60, 23, 50, -54, -83, -110, -11, 46, 87, -47, -59, -42, 107, 33, 31, -105, -74, 73, 43, -15, 121, -35, 96, -72, 55, 117, -37, -121, 65, 53, 62, 126, 31, -68, -94, -115, -6, 126, -81, 0, -11, 8, -52, 56, -118, 117, -2, 107, -120, 91, 22, 73, -15, -16, 98, 116, -22, 19, -52, -127, -74, -111, 5, 22, -24, 38, 17, -79, -56, 57, -116, 110, -122, -41, 74, -28, 72, 125, -87, -77, 10, 53, 78};
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
    msg.setTimeStamp(0.192523273782);
    msg.setSource(4560U);
    msg.setSourceEntity(194U);
    msg.setDestination(25252U);
    msg.setDestinationEntity(148U);
    msg.value = 0.927919153278;

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
    msg.setTimeStamp(0.703723155267);
    msg.setSource(58993U);
    msg.setSourceEntity(232U);
    msg.setDestination(21021U);
    msg.setDestinationEntity(196U);
    msg.value = 0.464953176099;

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
    msg.setTimeStamp(0.235281910997);
    msg.setSource(10215U);
    msg.setSourceEntity(63U);
    msg.setDestination(41596U);
    msg.setDestinationEntity(65U);
    msg.value = 0.464426965217;

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
    msg.setTimeStamp(0.492131474266);
    msg.setSource(32091U);
    msg.setSourceEntity(235U);
    msg.setDestination(49606U);
    msg.setDestinationEntity(232U);
    msg.type = 91U;
    msg.frequency = 3729996856U;
    msg.min_range = 26839U;
    msg.max_range = 62500U;
    msg.bits_per_point = 241U;
    msg.scale_factor = 0.606533619928;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.00990100741384;
    tmp_msg_0.beam_height = 0.126581191959;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {86, -38, -51, -20, 22, -2, 20, -27, -26, -108, -7, 21, -11, 44, -91, -44, -24, -66, -89, -92, -106, -49, -112, 110, 85, 6, -111, -127, 63, 41, 124, -110, 90, 37, -91, -16, 78, -122, 11, -79, 92, -65, 12, 41, -72, -127, 28, 125, -45, 110, 47, -27, 16, 103, -76, -37, -2, -49, 51, -37, -80, 104, -106, 91, -32, 123, 82, -34, -1, 50, 82, 76, 105, -20, -72, 69, 36, -67, -127, 11, 77, -44, -27, -85, -57, 121, -126, -119, -65, -38, 108, -78, 6, 8, -113, -2, -88, -59, 34, -13, -19, 27, 6, -19, 20, 126, -94, -26, -119, -4, -62, 3, -7, 16, 89, -54, -76, -34, -118, -21, 35, -110, -45, 61, -124, -121, 31, -80, -43, -70, -70, 112, -57, 92, 65, -79, 124, -88, 87, 114, -23, -98, -125, -105, -94, 126, -48, -47, 119, -21, 86, -98, -69, -55, 11, -61, 103, -10, 74, -40, -90, 121, -45, -85, 58, -15, 3, -4, 110, -58, -18, -116, -108, -25, -34, 122, 124, 16};
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
    msg.setTimeStamp(0.631816702666);
    msg.setSource(57195U);
    msg.setSourceEntity(12U);
    msg.setDestination(5980U);
    msg.setDestinationEntity(227U);
    msg.type = 167U;
    msg.frequency = 1812957480U;
    msg.min_range = 49317U;
    msg.max_range = 36534U;
    msg.bits_per_point = 135U;
    msg.scale_factor = 0.135906024883;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0453033191147;
    tmp_msg_0.beam_height = 0.965334427377;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-29, 12, -31, -84, -23, 107, -81, -106, -77, 28, -50, 116, -20, 115, -38, 47, -17, -89, 1, 15, -124, 60, 73, 92, -93, 17, 97, -78, -97, -76, -119, -105, 50, 77, -62};
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
    msg.setTimeStamp(0.381923836692);
    msg.setSource(53345U);
    msg.setSourceEntity(68U);
    msg.setDestination(32115U);
    msg.setDestinationEntity(178U);
    msg.type = 50U;
    msg.frequency = 501321331U;
    msg.min_range = 8092U;
    msg.max_range = 25880U;
    msg.bits_per_point = 88U;
    msg.scale_factor = 0.974029573919;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.934701915178;
    tmp_msg_0.beam_height = 0.476946037854;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {93, -88, -122, 50, 117, -124, 45, -103, 74, 70, 49, -128, -27, 82, 66, -104, -110, -58, 87, -17, 62, 101, 18, -127, -121, -89, -34, -101, 80, 109, -23, -58, -122, -98, 113, 29, -19, -117, 99, 0, 36, 17, 126, -26, -116, -97, -128, 73, 61, -119, 6, -104, -76, 58, 5, -60, -118, -111, 73, 23, -9, -94, -124, -86, -69, 101, -58, -99, 62, 9, -117, -85, 22, 9, -86, 28, -30, 100, -71, -13, 5, -82, 2, -29, 82, 88, 93, 4, -116, 63, 56, 12, -21, 46, 94, -95, -8, -104, -19, 70, -14, -102, 23, -47, 109, 106, 30, -121, -48, 36, -31, -29, -62, 7, 74, 84, -115, -42, -49, -83, 2, -76, 58, -73, -70, -1, 71, -3, -2, 95, -127, -122, 82, 65, 98, 40, 13, -123, -26, -111, 3, -114, -46, -66, -111, 63, 116, 33, -83, 26, -57, -104, 61, -85, -89, -108, 122, 50, 54, -118, -78, 98, 114, -47, -64, -96, -17, -122, -108, 2, -80, 103, 23, -116, 99, 89, -105, 124, -82, -115, -72, 78, 32};
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
    msg.setTimeStamp(0.0887569636632);
    msg.setSource(2347U);
    msg.setSourceEntity(136U);
    msg.setDestination(50675U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.675907848429);
    msg.setSource(40798U);
    msg.setSourceEntity(11U);
    msg.setDestination(22219U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.962807563943);
    msg.setSource(36730U);
    msg.setSourceEntity(72U);
    msg.setDestination(642U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.71678397124);
    msg.setSource(31837U);
    msg.setSourceEntity(47U);
    msg.setDestination(31798U);
    msg.setDestinationEntity(69U);
    msg.op = 206U;

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
    msg.setTimeStamp(0.0324447207842);
    msg.setSource(50449U);
    msg.setSourceEntity(109U);
    msg.setDestination(65323U);
    msg.setDestinationEntity(8U);
    msg.op = 109U;

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
    msg.setTimeStamp(0.152352593481);
    msg.setSource(25535U);
    msg.setSourceEntity(236U);
    msg.setDestination(41605U);
    msg.setDestinationEntity(243U);
    msg.op = 175U;

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
    msg.setTimeStamp(0.692736150051);
    msg.setSource(63050U);
    msg.setSourceEntity(217U);
    msg.setDestination(48563U);
    msg.setDestinationEntity(88U);
    msg.value = 0.715075954694;
    msg.confidence = 0.834326659751;
    msg.opmodes.assign("MEKNWXMAOIVWTYCDRPCQXZUGHBRHHQFEVUQDNJQJKUTSZHSHLRCXAWQXFDPFPUSNOULPRTWKFLXKSRVCWAYGNDUBFSIUPWXQLXOGIIAGCAIYVMZOUOBMVKBYUPYTRIWSZMBRJZGTAJGFJOANHISAPTJBFBCBQERZCHEXRAQMZKZKLDESHHDIOPOVFDGTIYPNDABEJNMQUKZEHLWCIKMNLETNXLOFQSGVPLVEKYWYSM");

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
    msg.setTimeStamp(0.875175194034);
    msg.setSource(50649U);
    msg.setSourceEntity(61U);
    msg.setDestination(17009U);
    msg.setDestinationEntity(61U);
    msg.value = 0.261118483149;
    msg.confidence = 0.296676286377;
    msg.opmodes.assign("WEQJYLIEQJYKBVPQTENEBFTRODOGEFKOWRSIDDXEUWOZIBQMBFFVLQHPTRCYYLMMZYYPRHAVBOCOQKURNNHTUTEXDXBXJFFLNMUDRXPPIGKPUCECZULOXWGVZXDCQAWFTMHTTKCDKGKTAHKJJONONDQMHAGNMKDQHJPAZVXJEYWUGI");

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
    msg.setTimeStamp(0.787555029291);
    msg.setSource(50619U);
    msg.setSourceEntity(212U);
    msg.setDestination(7145U);
    msg.setDestinationEntity(233U);
    msg.value = 0.444053459062;
    msg.confidence = 0.0913012822297;
    msg.opmodes.assign("NJEYJLCUWWPMTNFXKOQPXFSKWAWTNINNWYCFAQVMUXIGKLQGYCUHZXOBQJTLZPBITFUJRVWIZDNRFCLTAOIZFEQDJJGZMEKJVEGPLGAUWYTZCPHMHCEXPDVHTOXUAORFDTABEPSXMGGKHPOEQASDUYDSJQSLNZDZEKYKVSAKHMRBWPGNCWSCQUJLTYKDA");

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
    msg.setTimeStamp(0.439241541689);
    msg.setSource(4316U);
    msg.setSourceEntity(204U);
    msg.setDestination(27403U);
    msg.setDestinationEntity(165U);
    msg.itow = 3790043013U;
    msg.lat = 0.363694863876;
    msg.lon = 0.311062818282;
    msg.height_ell = 0.535230177124;
    msg.height_sea = 0.813566991692;
    msg.hacc = 0.512942110099;
    msg.vacc = 0.519098602724;
    msg.vel_n = 0.698210799969;
    msg.vel_e = 0.84375610501;
    msg.vel_d = 0.695983641403;
    msg.speed = 0.652814276512;
    msg.gspeed = 0.46687814497;
    msg.heading = 0.872784532803;
    msg.sacc = 0.971763416705;
    msg.cacc = 0.401036970553;

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
    msg.setTimeStamp(0.869055247734);
    msg.setSource(20882U);
    msg.setSourceEntity(38U);
    msg.setDestination(9371U);
    msg.setDestinationEntity(61U);
    msg.itow = 2741568823U;
    msg.lat = 0.392148080368;
    msg.lon = 0.908162408591;
    msg.height_ell = 0.597076827943;
    msg.height_sea = 0.731493045241;
    msg.hacc = 0.0149608782874;
    msg.vacc = 0.949098033837;
    msg.vel_n = 0.450528599225;
    msg.vel_e = 0.180079877692;
    msg.vel_d = 0.882006441812;
    msg.speed = 0.67974264298;
    msg.gspeed = 0.376613244477;
    msg.heading = 0.474801863963;
    msg.sacc = 0.505178525976;
    msg.cacc = 0.309022351769;

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
    msg.setTimeStamp(0.742830221896);
    msg.setSource(14732U);
    msg.setSourceEntity(239U);
    msg.setDestination(30980U);
    msg.setDestinationEntity(41U);
    msg.itow = 3632181332U;
    msg.lat = 0.631283700796;
    msg.lon = 0.691171306366;
    msg.height_ell = 0.023617020524;
    msg.height_sea = 0.264532898695;
    msg.hacc = 0.209185616467;
    msg.vacc = 0.603779055992;
    msg.vel_n = 0.995749058684;
    msg.vel_e = 0.712852256748;
    msg.vel_d = 0.309702724826;
    msg.speed = 0.905139649182;
    msg.gspeed = 0.702080422031;
    msg.heading = 0.701525669073;
    msg.sacc = 0.992245497576;
    msg.cacc = 0.177297051282;

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
    msg.setTimeStamp(0.211792403373);
    msg.setSource(47685U);
    msg.setSourceEntity(132U);
    msg.setDestination(26938U);
    msg.setDestinationEntity(181U);
    msg.id = 3U;
    msg.value = 0.0860064640684;

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
    msg.setTimeStamp(0.198276439825);
    msg.setSource(9863U);
    msg.setSourceEntity(188U);
    msg.setDestination(65100U);
    msg.setDestinationEntity(237U);
    msg.id = 240U;
    msg.value = 0.488104680905;

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
    msg.setTimeStamp(0.557652063114);
    msg.setSource(22217U);
    msg.setSourceEntity(76U);
    msg.setDestination(19661U);
    msg.setDestinationEntity(157U);
    msg.id = 195U;
    msg.value = 0.628320129119;

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
    msg.setTimeStamp(0.280183976109);
    msg.setSource(61823U);
    msg.setSourceEntity(123U);
    msg.setDestination(26780U);
    msg.setDestinationEntity(233U);
    msg.x = 0.0677171257534;
    msg.y = 0.246115479784;
    msg.z = 0.5117962953;
    msg.phi = 0.416570664192;
    msg.theta = 0.394532632974;
    msg.psi = 0.528268265027;

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
    msg.setTimeStamp(0.641794051311);
    msg.setSource(6171U);
    msg.setSourceEntity(82U);
    msg.setDestination(24732U);
    msg.setDestinationEntity(2U);
    msg.x = 0.580391048573;
    msg.y = 0.558672965008;
    msg.z = 0.395356254474;
    msg.phi = 0.656595667724;
    msg.theta = 0.46084546371;
    msg.psi = 0.448533885538;

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
    msg.setTimeStamp(0.929945794901);
    msg.setSource(7823U);
    msg.setSourceEntity(74U);
    msg.setDestination(46978U);
    msg.setDestinationEntity(203U);
    msg.x = 0.509971121243;
    msg.y = 0.41643513936;
    msg.z = 0.12898663382;
    msg.phi = 0.69092426488;
    msg.theta = 0.106149974513;
    msg.psi = 0.148309082548;

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
    msg.setTimeStamp(0.281860529539);
    msg.setSource(11194U);
    msg.setSourceEntity(190U);
    msg.setDestination(329U);
    msg.setDestinationEntity(143U);
    msg.beam_width = 0.971713278944;
    msg.beam_height = 0.468073269405;

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
    msg.setTimeStamp(0.449207103092);
    msg.setSource(37493U);
    msg.setSourceEntity(69U);
    msg.setDestination(41606U);
    msg.setDestinationEntity(226U);
    msg.beam_width = 0.346551200124;
    msg.beam_height = 0.927929865821;

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
    msg.setTimeStamp(0.245537126961);
    msg.setSource(37590U);
    msg.setSourceEntity(175U);
    msg.setDestination(31364U);
    msg.setDestinationEntity(144U);
    msg.beam_width = 0.177108755109;
    msg.beam_height = 0.539393456893;

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
    msg.setTimeStamp(0.240814860193);
    msg.setSource(3433U);
    msg.setSourceEntity(7U);
    msg.setDestination(22607U);
    msg.setDestinationEntity(167U);
    msg.sane = 123U;

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
    msg.setTimeStamp(0.441944909629);
    msg.setSource(52916U);
    msg.setSourceEntity(78U);
    msg.setDestination(40380U);
    msg.setDestinationEntity(109U);
    msg.sane = 103U;

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
    msg.setTimeStamp(0.741344016218);
    msg.setSource(37499U);
    msg.setSourceEntity(48U);
    msg.setDestination(60934U);
    msg.setDestinationEntity(206U);
    msg.sane = 36U;

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
    msg.setTimeStamp(0.694874406851);
    msg.setSource(45077U);
    msg.setSourceEntity(148U);
    msg.setDestination(10959U);
    msg.setDestinationEntity(208U);
    msg.value = 0.732008601339;

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
    msg.setTimeStamp(0.811921872011);
    msg.setSource(27262U);
    msg.setSourceEntity(235U);
    msg.setDestination(26565U);
    msg.setDestinationEntity(36U);
    msg.value = 0.409242939206;

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
    msg.setTimeStamp(0.723933313428);
    msg.setSource(58256U);
    msg.setSourceEntity(251U);
    msg.setDestination(33770U);
    msg.setDestinationEntity(231U);
    msg.value = 0.98576302515;

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
    msg.setTimeStamp(0.998748237896);
    msg.setSource(42128U);
    msg.setSourceEntity(46U);
    msg.setDestination(54527U);
    msg.setDestinationEntity(193U);
    msg.value = 0.132610896728;

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
    msg.setTimeStamp(0.949907534203);
    msg.setSource(45057U);
    msg.setSourceEntity(6U);
    msg.setDestination(21550U);
    msg.setDestinationEntity(140U);
    msg.value = 0.770725401428;

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
    msg.setTimeStamp(0.117781978101);
    msg.setSource(3342U);
    msg.setSourceEntity(106U);
    msg.setDestination(58837U);
    msg.setDestinationEntity(97U);
    msg.value = 0.464585562264;

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
    msg.setTimeStamp(0.805454948964);
    msg.setSource(32492U);
    msg.setSourceEntity(239U);
    msg.setDestination(57301U);
    msg.setDestinationEntity(194U);
    msg.value = 0.287000520774;

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
    msg.setTimeStamp(0.707153260102);
    msg.setSource(36281U);
    msg.setSourceEntity(39U);
    msg.setDestination(43652U);
    msg.setDestinationEntity(117U);
    msg.value = 0.787339999933;

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
    msg.setTimeStamp(0.13613848383);
    msg.setSource(63130U);
    msg.setSourceEntity(117U);
    msg.setDestination(8328U);
    msg.setDestinationEntity(220U);
    msg.value = 0.299423513466;

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
    msg.setTimeStamp(0.115438936487);
    msg.setSource(50606U);
    msg.setSourceEntity(242U);
    msg.setDestination(41760U);
    msg.setDestinationEntity(154U);
    msg.value = 0.946025895205;

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
    msg.setTimeStamp(0.102429783278);
    msg.setSource(11972U);
    msg.setSourceEntity(112U);
    msg.setDestination(57522U);
    msg.setDestinationEntity(235U);
    msg.value = 0.983375959378;

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
    msg.setTimeStamp(0.406770132232);
    msg.setSource(17663U);
    msg.setSourceEntity(34U);
    msg.setDestination(20186U);
    msg.setDestinationEntity(201U);
    msg.value = 0.477861877945;

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
    msg.setTimeStamp(0.23045357714);
    msg.setSource(26776U);
    msg.setSourceEntity(71U);
    msg.setDestination(36768U);
    msg.setDestinationEntity(161U);
    msg.value = 0.428607203188;

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
    msg.setTimeStamp(0.346796118934);
    msg.setSource(3179U);
    msg.setSourceEntity(168U);
    msg.setDestination(50406U);
    msg.setDestinationEntity(186U);
    msg.value = 0.475168220362;

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
    msg.setTimeStamp(0.812869655868);
    msg.setSource(51817U);
    msg.setSourceEntity(112U);
    msg.setDestination(10251U);
    msg.setDestinationEntity(182U);
    msg.value = 0.777650670544;

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
    msg.setTimeStamp(0.890133325275);
    msg.setSource(36279U);
    msg.setSourceEntity(118U);
    msg.setDestination(3461U);
    msg.setDestinationEntity(86U);
    msg.value = 0.461134445837;

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
    msg.setTimeStamp(0.108163813753);
    msg.setSource(45298U);
    msg.setSourceEntity(120U);
    msg.setDestination(5395U);
    msg.setDestinationEntity(208U);
    msg.value = 0.194779989214;

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
    msg.setTimeStamp(0.0499653409163);
    msg.setSource(5128U);
    msg.setSourceEntity(190U);
    msg.setDestination(34974U);
    msg.setDestinationEntity(167U);
    msg.value = 0.701253476023;

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
    msg.setTimeStamp(0.120846281929);
    msg.setSource(2622U);
    msg.setSourceEntity(90U);
    msg.setDestination(31211U);
    msg.setDestinationEntity(192U);
    msg.value = 0.59687822999;

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
    msg.setTimeStamp(0.590756468677);
    msg.setSource(24118U);
    msg.setSourceEntity(75U);
    msg.setDestination(26989U);
    msg.setDestinationEntity(196U);
    msg.value = 0.538081810594;

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
    msg.setTimeStamp(0.183364790247);
    msg.setSource(39866U);
    msg.setSourceEntity(230U);
    msg.setDestination(6112U);
    msg.setDestinationEntity(223U);
    msg.value = 0.00298051432079;

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
    msg.setTimeStamp(0.406680951612);
    msg.setSource(47856U);
    msg.setSourceEntity(10U);
    msg.setDestination(49973U);
    msg.setDestinationEntity(61U);
    msg.value = 0.821793336953;

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
    msg.setTimeStamp(0.400591226249);
    msg.setSource(56350U);
    msg.setSourceEntity(66U);
    msg.setDestination(26924U);
    msg.setDestinationEntity(121U);
    msg.value = 0.925679785581;

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
    msg.setTimeStamp(0.715166927636);
    msg.setSource(50848U);
    msg.setSourceEntity(254U);
    msg.setDestination(54849U);
    msg.setDestinationEntity(3U);
    msg.value = 0.994548064174;

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
    msg.setTimeStamp(0.935043955873);
    msg.setSource(1158U);
    msg.setSourceEntity(52U);
    msg.setDestination(27432U);
    msg.setDestinationEntity(22U);
    msg.validity = 27946U;
    msg.type = 88U;
    msg.tow = 495171638U;
    msg.base_lat = 0.677622586562;
    msg.base_lon = 0.200390202158;
    msg.base_height = 0.0240980790805;
    msg.n = 0.286282462738;
    msg.e = 0.699858491288;
    msg.d = 0.813601973105;
    msg.v_n = 0.71389569673;
    msg.v_e = 0.859302579307;
    msg.v_d = 0.891814812678;
    msg.satellites = 235U;
    msg.iar_hyp = 37581U;
    msg.iar_ratio = 0.128737337927;

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
    msg.setTimeStamp(0.790661234689);
    msg.setSource(26805U);
    msg.setSourceEntity(35U);
    msg.setDestination(3898U);
    msg.setDestinationEntity(33U);
    msg.validity = 56985U;
    msg.type = 141U;
    msg.tow = 2571259137U;
    msg.base_lat = 0.817903662581;
    msg.base_lon = 0.0332964012848;
    msg.base_height = 0.197667175253;
    msg.n = 0.222638236473;
    msg.e = 0.573502679973;
    msg.d = 0.932068172784;
    msg.v_n = 0.434778322067;
    msg.v_e = 0.759931547497;
    msg.v_d = 0.752809390055;
    msg.satellites = 108U;
    msg.iar_hyp = 35473U;
    msg.iar_ratio = 0.409742038889;

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
    msg.setTimeStamp(0.127227472399);
    msg.setSource(46703U);
    msg.setSourceEntity(111U);
    msg.setDestination(48107U);
    msg.setDestinationEntity(184U);
    msg.validity = 2878U;
    msg.type = 107U;
    msg.tow = 1559287290U;
    msg.base_lat = 0.863507271095;
    msg.base_lon = 0.714172928815;
    msg.base_height = 0.754094106553;
    msg.n = 0.10325982908;
    msg.e = 0.915165030034;
    msg.d = 0.0619860544486;
    msg.v_n = 0.667194662306;
    msg.v_e = 0.573319954647;
    msg.v_d = 0.721618711813;
    msg.satellites = 67U;
    msg.iar_hyp = 36220U;
    msg.iar_ratio = 0.952192540625;

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
    msg.setTimeStamp(0.251556779564);
    msg.setSource(47136U);
    msg.setSourceEntity(211U);
    msg.setDestination(28180U);
    msg.setDestinationEntity(18U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.48326456631;
    tmp_msg_0.lon = 0.34987058976;
    tmp_msg_0.height = 0.00983673432636;
    tmp_msg_0.x = 0.0540701445304;
    tmp_msg_0.y = 0.0161829359391;
    tmp_msg_0.z = 0.601661551563;
    tmp_msg_0.phi = 0.641748155579;
    tmp_msg_0.theta = 0.297756255458;
    tmp_msg_0.psi = 0.326080944457;
    tmp_msg_0.u = 0.442860939504;
    tmp_msg_0.v = 0.863994260487;
    tmp_msg_0.w = 0.567403778443;
    tmp_msg_0.vx = 0.122197541594;
    tmp_msg_0.vy = 0.134234216206;
    tmp_msg_0.vz = 0.716983168281;
    tmp_msg_0.p = 0.67844828222;
    tmp_msg_0.q = 0.331674568039;
    tmp_msg_0.r = 0.261921398008;
    tmp_msg_0.depth = 0.33048811177;
    tmp_msg_0.alt = 0.328856926631;
    msg.state.set(tmp_msg_0);
    msg.type = 108U;

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
    msg.setTimeStamp(0.979029088497);
    msg.setSource(34112U);
    msg.setSourceEntity(2U);
    msg.setDestination(27307U);
    msg.setDestinationEntity(30U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.669523296294;
    tmp_msg_0.lon = 0.54166918888;
    tmp_msg_0.height = 0.557289949565;
    tmp_msg_0.x = 0.752785146782;
    tmp_msg_0.y = 0.512228256841;
    tmp_msg_0.z = 0.786883316479;
    tmp_msg_0.phi = 0.160986278901;
    tmp_msg_0.theta = 0.382528694481;
    tmp_msg_0.psi = 0.778029329772;
    tmp_msg_0.u = 0.680559633819;
    tmp_msg_0.v = 0.287365781321;
    tmp_msg_0.w = 0.975698547961;
    tmp_msg_0.vx = 0.275287133962;
    tmp_msg_0.vy = 0.154086514722;
    tmp_msg_0.vz = 0.940587686807;
    tmp_msg_0.p = 0.175758320261;
    tmp_msg_0.q = 0.987816144304;
    tmp_msg_0.r = 0.673473708912;
    tmp_msg_0.depth = 0.392430602444;
    tmp_msg_0.alt = 0.315656566075;
    msg.state.set(tmp_msg_0);
    msg.type = 101U;

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
    msg.setTimeStamp(0.418848989428);
    msg.setSource(39989U);
    msg.setSourceEntity(99U);
    msg.setDestination(10468U);
    msg.setDestinationEntity(37U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.522685844317;
    tmp_msg_0.lon = 0.0580434180015;
    tmp_msg_0.height = 0.0533800965079;
    tmp_msg_0.x = 0.325499042625;
    tmp_msg_0.y = 0.103868327399;
    tmp_msg_0.z = 0.0230736330119;
    tmp_msg_0.phi = 0.528831028092;
    tmp_msg_0.theta = 0.6013249655;
    tmp_msg_0.psi = 0.355810283736;
    tmp_msg_0.u = 0.731762027246;
    tmp_msg_0.v = 0.416999408184;
    tmp_msg_0.w = 0.656852158923;
    tmp_msg_0.vx = 0.430210451472;
    tmp_msg_0.vy = 0.436417539281;
    tmp_msg_0.vz = 0.64352149513;
    tmp_msg_0.p = 0.817499330361;
    tmp_msg_0.q = 0.894704723902;
    tmp_msg_0.r = 0.426911192194;
    tmp_msg_0.depth = 0.458241134936;
    tmp_msg_0.alt = 0.633750907675;
    msg.state.set(tmp_msg_0);
    msg.type = 15U;

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
    msg.setTimeStamp(0.32606025537);
    msg.setSource(46517U);
    msg.setSourceEntity(129U);
    msg.setDestination(29064U);
    msg.setDestinationEntity(156U);
    msg.value = 0.24276139881;

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
    msg.setTimeStamp(0.483202052293);
    msg.setSource(53790U);
    msg.setSourceEntity(240U);
    msg.setDestination(996U);
    msg.setDestinationEntity(1U);
    msg.value = 0.218011957401;

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
    msg.setTimeStamp(0.483122459136);
    msg.setSource(35172U);
    msg.setSourceEntity(92U);
    msg.setDestination(2891U);
    msg.setDestinationEntity(169U);
    msg.value = 0.0860975350125;

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
    msg.setTimeStamp(0.963972621932);
    msg.setSource(51955U);
    msg.setSourceEntity(148U);
    msg.setDestination(61340U);
    msg.setDestinationEntity(158U);
    msg.value = 0.559918988773;

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
    msg.setTimeStamp(0.38652828048);
    msg.setSource(47704U);
    msg.setSourceEntity(183U);
    msg.setDestination(17050U);
    msg.setDestinationEntity(217U);
    msg.value = 0.132253240468;

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
    msg.setTimeStamp(0.254072253512);
    msg.setSource(13434U);
    msg.setSourceEntity(17U);
    msg.setDestination(28603U);
    msg.setDestinationEntity(4U);
    msg.value = 0.0461667597491;

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
    msg.setTimeStamp(0.201041364875);
    msg.setSource(43466U);
    msg.setSourceEntity(180U);
    msg.setDestination(9624U);
    msg.setDestinationEntity(186U);
    msg.value = 0.394074855872;

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
    msg.setTimeStamp(0.397330556227);
    msg.setSource(4723U);
    msg.setSourceEntity(179U);
    msg.setDestination(57606U);
    msg.setDestinationEntity(176U);
    msg.value = 0.998054705619;

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
    msg.setTimeStamp(0.389273207253);
    msg.setSource(49487U);
    msg.setSourceEntity(40U);
    msg.setDestination(41685U);
    msg.setDestinationEntity(227U);
    msg.value = 0.895898341831;

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
    msg.setTimeStamp(0.697200708168);
    msg.setSource(36915U);
    msg.setSourceEntity(128U);
    msg.setDestination(36130U);
    msg.setDestinationEntity(58U);
    msg.value = 0.76055175263;

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
    msg.setTimeStamp(0.442881739968);
    msg.setSource(33179U);
    msg.setSourceEntity(232U);
    msg.setDestination(8983U);
    msg.setDestinationEntity(9U);
    msg.value = 0.0578396549228;

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
    msg.setTimeStamp(0.176313439942);
    msg.setSource(4368U);
    msg.setSourceEntity(154U);
    msg.setDestination(56324U);
    msg.setDestinationEntity(93U);
    msg.value = 0.0718424490996;

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
    msg.setTimeStamp(0.331259087643);
    msg.setSource(65036U);
    msg.setSourceEntity(174U);
    msg.setDestination(30816U);
    msg.setDestinationEntity(155U);
    msg.value = 0.0792034909765;

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
    msg.setTimeStamp(0.839530692009);
    msg.setSource(22634U);
    msg.setSourceEntity(29U);
    msg.setDestination(54413U);
    msg.setDestinationEntity(54U);
    msg.value = 0.146343063106;

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
    msg.setTimeStamp(0.379326722876);
    msg.setSource(16591U);
    msg.setSourceEntity(241U);
    msg.setDestination(720U);
    msg.setDestinationEntity(63U);
    msg.value = 0.835971698756;

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
    msg.setTimeStamp(0.459893562407);
    msg.setSource(2797U);
    msg.setSourceEntity(204U);
    msg.setDestination(12754U);
    msg.setDestinationEntity(100U);
    msg.id = 101U;
    msg.zoom = 15U;
    msg.action = 243U;

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
    msg.setTimeStamp(0.469479978506);
    msg.setSource(52325U);
    msg.setSourceEntity(115U);
    msg.setDestination(22838U);
    msg.setDestinationEntity(3U);
    msg.id = 225U;
    msg.zoom = 148U;
    msg.action = 250U;

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
    msg.setTimeStamp(0.243066913337);
    msg.setSource(25355U);
    msg.setSourceEntity(13U);
    msg.setDestination(60461U);
    msg.setDestinationEntity(7U);
    msg.id = 46U;
    msg.zoom = 12U;
    msg.action = 210U;

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
    msg.setTimeStamp(0.175279943583);
    msg.setSource(2495U);
    msg.setSourceEntity(244U);
    msg.setDestination(5365U);
    msg.setDestinationEntity(119U);
    msg.id = 39U;
    msg.value = 0.594944150696;

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
    msg.setTimeStamp(0.762734846019);
    msg.setSource(14563U);
    msg.setSourceEntity(60U);
    msg.setDestination(1355U);
    msg.setDestinationEntity(214U);
    msg.id = 136U;
    msg.value = 0.222440267759;

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
    msg.setTimeStamp(0.985052169565);
    msg.setSource(25988U);
    msg.setSourceEntity(172U);
    msg.setDestination(25305U);
    msg.setDestinationEntity(71U);
    msg.id = 32U;
    msg.value = 0.039853396403;

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
    msg.setTimeStamp(0.19753453152);
    msg.setSource(42260U);
    msg.setSourceEntity(115U);
    msg.setDestination(32800U);
    msg.setDestinationEntity(2U);
    msg.id = 222U;
    msg.value = 0.576500154258;

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
    msg.setTimeStamp(0.250074457523);
    msg.setSource(55909U);
    msg.setSourceEntity(135U);
    msg.setDestination(52587U);
    msg.setDestinationEntity(244U);
    msg.id = 107U;
    msg.value = 0.914451820801;

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
    msg.setTimeStamp(0.0289766653294);
    msg.setSource(39483U);
    msg.setSourceEntity(55U);
    msg.setDestination(41881U);
    msg.setDestinationEntity(36U);
    msg.id = 183U;
    msg.value = 0.896805118218;

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
    msg.setTimeStamp(0.416783512637);
    msg.setSource(27489U);
    msg.setSourceEntity(127U);
    msg.setDestination(21566U);
    msg.setDestinationEntity(132U);
    msg.id = 155U;
    msg.angle = 0.87170913216;

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
    msg.setTimeStamp(0.654709907067);
    msg.setSource(41090U);
    msg.setSourceEntity(203U);
    msg.setDestination(62397U);
    msg.setDestinationEntity(217U);
    msg.id = 171U;
    msg.angle = 0.373792372599;

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
    msg.setTimeStamp(0.239896970407);
    msg.setSource(11255U);
    msg.setSourceEntity(178U);
    msg.setDestination(14177U);
    msg.setDestinationEntity(100U);
    msg.id = 193U;
    msg.angle = 0.440012082861;

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
    msg.setTimeStamp(0.262621382963);
    msg.setSource(40313U);
    msg.setSourceEntity(201U);
    msg.setDestination(48885U);
    msg.setDestinationEntity(108U);
    msg.op = 220U;
    msg.actions.assign("CGFFTEYJMPPJOQECAOLWJKXKZSZHWWLLXBYQJQTYSJTWIYEHVLAGCIJRFQTHICFEXDDTAZW");

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
    msg.setTimeStamp(0.00696368408646);
    msg.setSource(30963U);
    msg.setSourceEntity(52U);
    msg.setDestination(22750U);
    msg.setDestinationEntity(157U);
    msg.op = 171U;
    msg.actions.assign("PNOHPIWLCFQVLXQDUSNAQOZFHOCEHSACCYIWRFXNXRMAERMAMNBBILPKFTKHQPZEWUUOXEVWVEPUBUJKKGMKSNNLCOJLWGETSXUOMZRYCSLYYDJFIIXRDFJCALFTHHDGYAYDUDEIZKXBMVQFPRMTWSKOWMAVHDLUZCKCSBTYVGWROZJGPBIIDJTBKJHJJMNNIATQIEYSVWFF");

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
    msg.setTimeStamp(0.277619922062);
    msg.setSource(53580U);
    msg.setSourceEntity(214U);
    msg.setDestination(27415U);
    msg.setDestinationEntity(66U);
    msg.op = 219U;
    msg.actions.assign("APPFZYUZVWXYPWSR");

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
    msg.setTimeStamp(0.835688868701);
    msg.setSource(46925U);
    msg.setSourceEntity(237U);
    msg.setDestination(54602U);
    msg.setDestinationEntity(55U);
    msg.actions.assign("JURUTOXCXKVWWFGAVDEKEHFYNMWZHRUIGQJIWHIFLAPFEOMRUJLDBLCEZQJUOKLLIYCSSWOYGMTZCJHNXCJ");

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
    msg.setTimeStamp(0.177410838532);
    msg.setSource(21617U);
    msg.setSourceEntity(139U);
    msg.setDestination(21379U);
    msg.setDestinationEntity(149U);
    msg.actions.assign("UVSSOTOBZRINGQPDKIGKVFUFZCW");

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
    msg.setTimeStamp(0.438383292139);
    msg.setSource(46780U);
    msg.setSourceEntity(15U);
    msg.setDestination(1219U);
    msg.setDestinationEntity(109U);
    msg.actions.assign("YPOXGNLIUHTPYHMFUTUGTYAYW");

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
    msg.setTimeStamp(0.168739356321);
    msg.setSource(10540U);
    msg.setSourceEntity(53U);
    msg.setDestination(1706U);
    msg.setDestinationEntity(144U);
    msg.button = 217U;
    msg.value = 49U;

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
    msg.setTimeStamp(0.910035081363);
    msg.setSource(26490U);
    msg.setSourceEntity(253U);
    msg.setDestination(58701U);
    msg.setDestinationEntity(57U);
    msg.button = 173U;
    msg.value = 178U;

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
    msg.setTimeStamp(0.580197072782);
    msg.setSource(9744U);
    msg.setSourceEntity(179U);
    msg.setDestination(54832U);
    msg.setDestinationEntity(207U);
    msg.button = 27U;
    msg.value = 45U;

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
    msg.setTimeStamp(0.540474303267);
    msg.setSource(43990U);
    msg.setSourceEntity(7U);
    msg.setDestination(44477U);
    msg.setDestinationEntity(181U);
    msg.op = 158U;
    msg.text.assign("APHWCZGTTXPOXOWOZQATKHBQRVEUBQYESSLDKVBYQUKSCBTXFHJPZZNKCPTWZQONJLEZZWLWOFCEMARCOKKBVYPOFNVCJOPHXJGWDXSUNGTMRFLFDBZRDIWKQLYDEGFPYKBGGTGIXNSKLXJUVMIEETFQJPDVFZMUUBSYOJEDHHTLDNKQONRZNSDPUMD");

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
    msg.setTimeStamp(0.133345025577);
    msg.setSource(48704U);
    msg.setSourceEntity(169U);
    msg.setDestination(4843U);
    msg.setDestinationEntity(151U);
    msg.op = 160U;
    msg.text.assign("WYFYJLFFKCEYOGRDJMAUVDGOTDNXFRVQMUOXBUTPRYEMBFSMFMVRPHNBGWKCUMBGHOMRWZBJZVNULOTJQCYXTEWELMGHQZNXFEAOJYSPDBRLVLDDIDYAGSQQOLZMVQTJSWHPCSCXJNWBJIAEKEDHKVLDSNOINKFZEQEUHXAICHPEXBJAPVBSWCTPTUXGOQPRZAISLWHJIAKYBISLF");

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
    msg.setTimeStamp(0.152832793058);
    msg.setSource(5842U);
    msg.setSourceEntity(169U);
    msg.setDestination(57076U);
    msg.setDestinationEntity(248U);
    msg.op = 75U;
    msg.text.assign("UCZYOAFDBFQAUFUPCWHMRNHZDNDNWPBLVXKFKTHGFSPGJSIASCTHJEIWPROMTBYXXQSRGKOBRQGJOIEJOUJNJXOTYCGUHRPTIHMXXEGKZZWVFHVNNOKGVFKUUBKTXEEJSJZTYQBMLNYLWVZUWWLKSQYWYRIQIANNLULTAGPJIMGQESFDLEHY");

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
    msg.setTimeStamp(0.00699187943807);
    msg.setSource(32027U);
    msg.setSourceEntity(64U);
    msg.setDestination(58759U);
    msg.setDestinationEntity(249U);
    msg.op = 12U;
    msg.time_remain = 0.247159243153;
    msg.sched_time = 0.0497990769206;

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
    msg.setTimeStamp(0.569262156071);
    msg.setSource(3107U);
    msg.setSourceEntity(137U);
    msg.setDestination(15882U);
    msg.setDestinationEntity(14U);
    msg.op = 4U;
    msg.time_remain = 0.236695562323;
    msg.sched_time = 0.242557585816;

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
    msg.setTimeStamp(0.679882025221);
    msg.setSource(189U);
    msg.setSourceEntity(185U);
    msg.setDestination(22539U);
    msg.setDestinationEntity(0U);
    msg.op = 98U;
    msg.time_remain = 0.670732392702;
    msg.sched_time = 0.790936958217;

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
    msg.setTimeStamp(0.622798869994);
    msg.setSource(26324U);
    msg.setSourceEntity(100U);
    msg.setDestination(37582U);
    msg.setDestinationEntity(139U);
    msg.name.assign("JLDHFJELJIREVKTQRYXKVFIBVMPRQXXUNULPNPFCLUWPNQQPTSAHFZRHNAWIMYDLBKSCUMMRGXBRWMPSALYKWFIKCUOIKAIVTJGDCCDBJWSSHPQGPMPJKGYEUYZ");
    msg.op = 234U;
    msg.sched_time = 0.480660781965;

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
    msg.setTimeStamp(0.48487759959);
    msg.setSource(27125U);
    msg.setSourceEntity(43U);
    msg.setDestination(59997U);
    msg.setDestinationEntity(224U);
    msg.name.assign("KUFYGKHMQXHVXDNDKXWCBMPLJLRORGHJIHKHGWJIPBARWSXOTGPMNIRFRXEJZQOJQVCAQQSZFRPOUKKPGEUKKIDTNNAMYFSZUUFOCZJYBYWOBAOACAXGVSSFDWGYDVUCQNEVFNJFZUSQBBDZWBAVNRRMSSZMIHIANETWVRDDEMTUEQDQAIVBOVCTLPE");
    msg.op = 193U;
    msg.sched_time = 0.218910414296;

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
    msg.setTimeStamp(0.425900425492);
    msg.setSource(42219U);
    msg.setSourceEntity(182U);
    msg.setDestination(18520U);
    msg.setDestinationEntity(131U);
    msg.name.assign("KPXEJDDLTKYYDBWWGZVEXROAOTVKPINA");
    msg.op = 188U;
    msg.sched_time = 0.213486789558;

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
    msg.setTimeStamp(0.195501970607);
    msg.setSource(46142U);
    msg.setSourceEntity(193U);
    msg.setDestination(58355U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.864836974983);
    msg.setSource(50892U);
    msg.setSourceEntity(158U);
    msg.setDestination(28455U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.307478630267);
    msg.setSource(38167U);
    msg.setSourceEntity(153U);
    msg.setDestination(4456U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.652396763882);
    msg.setSource(3769U);
    msg.setSourceEntity(88U);
    msg.setDestination(37424U);
    msg.setDestinationEntity(192U);
    msg.name.assign("LTRYFTSSYLLNNWRDQGIQSBVOBZVZBIWTMHSWAXHIPLTNEQEQMUTKSGLXTXMIYDDGOADAGQUOGYFWCFXUOPOWJCWLUFEJCEVCFZUNIHAIYZIHZYSBHKWTKOGMTKRWNBAQQHQICQDHOBU");
    msg.state = 77U;

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
    msg.setTimeStamp(0.934061206139);
    msg.setSource(54062U);
    msg.setSourceEntity(172U);
    msg.setDestination(7743U);
    msg.setDestinationEntity(131U);
    msg.name.assign("VXCOJTRVOWZLNXQZAOVSQFCUWJSUQGGAYJWPDZUCMRQMDEOZBMCYW");
    msg.state = 32U;

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
    msg.setTimeStamp(0.473875885261);
    msg.setSource(46359U);
    msg.setSourceEntity(58U);
    msg.setDestination(60607U);
    msg.setDestinationEntity(200U);
    msg.name.assign("EPIVFDGTYLNEAOIWNNAJHKJNYEBNQMVLGCWAZZVEKIDRPGKKCQOTYTBDDPBGJZNMSRFZVQUEXUBOXQWDLITJHOQBSFOKEMDUFWMPDZAJWIGREFCZAISCUPSVXLHHLRTXXCPHTHUSTMKAGQVTTRWIBUVYNOKLNWJRFMSZLAHGYISXGPBUQOGVRYWBJQRQLNMJCHAKZ");
    msg.state = 64U;

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
    msg.setTimeStamp(0.478400064244);
    msg.setSource(20222U);
    msg.setSourceEntity(200U);
    msg.setDestination(24685U);
    msg.setDestinationEntity(37U);
    msg.name.assign("LPFRSGYTEEFUWFXOXUGHKSNQWYEAGZVLWWKFDZIUKRCGNPORDPAWNSBOBXVIRWYWCKYDRCIBIGPRTPJVBCTURJBNVFIBPQHGCMTTQOEOHGFZMJJVAKKMPTDOLGPTQYAUHKDWJZNQSSOBILLLFLQFUIHHMEZHAFYKENEYDJTCEZOLQZXDESAIJEMXGUXYLNWQSHVQUJMGCYQMSDRHRXMFMKBDTCKUJZPXCOVNAHTBAYDZRIU");
    msg.value = 148U;

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
    msg.setTimeStamp(0.336404748762);
    msg.setSource(34598U);
    msg.setSourceEntity(116U);
    msg.setDestination(56222U);
    msg.setDestinationEntity(115U);
    msg.name.assign("XALISAEDVTXUVAUURHEFSQLIOTMDHYPNSIKODKEKCGGBVCXOVXEMCJUKSMRKWVU");
    msg.value = 244U;

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
    msg.setTimeStamp(0.910781667165);
    msg.setSource(18130U);
    msg.setSourceEntity(92U);
    msg.setDestination(46804U);
    msg.setDestinationEntity(225U);
    msg.name.assign("WLLLKPTSNNQDLXDJDJPBTWUUZVPAKIFPGNMCOZYGSBIWJIXFRTLNXKAVKBUXZAGBNDQYDZJHHOYWFCBVZQSKCXRMILGUAWSDOYZGGNNWRFXQVXWVUAJLEQANHSTTOIDEEEOQSOORGZAQHHCTWJMEKHTYVIYFLUEUIRFKVABUSCTXEAPHF");
    msg.value = 25U;

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
    msg.setTimeStamp(0.842347097557);
    msg.setSource(24187U);
    msg.setSourceEntity(180U);
    msg.setDestination(35517U);
    msg.setDestinationEntity(111U);
    msg.name.assign("ROUHTZURGNMLXCULGEAPOJWKIDLPGMLBWYBPKPTDZZGTWORCHJBLHNBEEXYI");

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
    msg.setTimeStamp(0.132986840429);
    msg.setSource(41109U);
    msg.setSourceEntity(148U);
    msg.setDestination(33276U);
    msg.setDestinationEntity(205U);
    msg.name.assign("TBLHZSPNBLSSIOXRBQYCLEFEJPSOVEFBUZANOTXIPVIFRECZHQEXAFJZIPTKPNLRMBSWRNHODRAEARIWBQCMVKFNENREHYYXOBXLMRDWFVAWQKCNOYJCPQPUXKVKPMYHWHGMQFEMGRGKLIKMTYODZJOADVGYZQCMHBULSESAQGBYFWUGVCZSTGNULOLIDZAMDDX");

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
    msg.setTimeStamp(0.854232787887);
    msg.setSource(47946U);
    msg.setSourceEntity(131U);
    msg.setDestination(8020U);
    msg.setDestinationEntity(216U);
    msg.name.assign("LKMGGPOBZIOTDBISIDGBUBQIWXFHXUTTKYJJOVESFINRNXSSDFTSJBLYXAFUJVUWHBVCKKHAQFMLPVOMGEPIOTKMBLJLWXQUYDYFJZKTAVMCXSNPBTARCNBFVHWRZIHDHRQOKYCWEEGLGIXMZIQZMTJOFXLVQUEZSNYAVDAMMXCILQGZGSVHLYLWNJUCSROKDWOWPDAHNE");

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
    msg.setTimeStamp(0.242792317339);
    msg.setSource(20117U);
    msg.setSourceEntity(49U);
    msg.setDestination(20949U);
    msg.setDestinationEntity(202U);
    msg.name.assign("DZIFRJHIYMLPRZKGOQPYUJSKVMRHUDOBIMXDLXWQHRLMSQLSWUEWBQUXQNCJAAJMQZFJILWHOWVNBUEDHFAQBLTJGUZZBUONVPKEVNSIJORHEUJAXYCFCPNQBCBFDQDRHZFUJCHYEOIDEYENTFPVTYGKKWTRYXSIEGWOANVSAGPLLWPVXSDETYMVLTKEBIIKZSZARWXKHLSZWMHCAOVPBNIU");
    msg.value = 88U;

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
    msg.setTimeStamp(0.214240225983);
    msg.setSource(59914U);
    msg.setSourceEntity(35U);
    msg.setDestination(4787U);
    msg.setDestinationEntity(232U);
    msg.name.assign("WKIDWAQIOLJURSZTLANAKBPCHKBCWVYKTINZXBWSJDGGGLWVIJLVWRZIUJXUGEOVYHEFIQEMFTYXCRJBQYIPQUJGCSYFWUEZGXKDAAIOIPJHXUGRSHNYYMMCZDFUTLPHKXMOTFNBPRQDLHOQBSHFEVASMRW");
    msg.value = 185U;

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
    msg.setTimeStamp(0.721970428908);
    msg.setSource(11364U);
    msg.setSourceEntity(69U);
    msg.setDestination(36221U);
    msg.setDestinationEntity(219U);
    msg.name.assign("YUMYIVIPJVWLCVWGQAXEPLKQHCW");
    msg.value = 236U;

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
    msg.setTimeStamp(0.00401841934562);
    msg.setSource(9231U);
    msg.setSourceEntity(129U);
    msg.setDestination(55820U);
    msg.setDestinationEntity(10U);
    msg.id = 212U;
    msg.period = 3211595811U;
    msg.duty_cycle = 3644845438U;

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
    msg.setTimeStamp(0.482445154134);
    msg.setSource(26043U);
    msg.setSourceEntity(127U);
    msg.setDestination(2488U);
    msg.setDestinationEntity(243U);
    msg.id = 12U;
    msg.period = 1644097657U;
    msg.duty_cycle = 4111339278U;

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
    msg.setTimeStamp(0.422980835382);
    msg.setSource(23024U);
    msg.setSourceEntity(158U);
    msg.setDestination(31972U);
    msg.setDestinationEntity(202U);
    msg.id = 61U;
    msg.period = 2142747324U;
    msg.duty_cycle = 1711928715U;

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
    msg.setTimeStamp(0.384767572719);
    msg.setSource(934U);
    msg.setSourceEntity(59U);
    msg.setDestination(57361U);
    msg.setDestinationEntity(33U);
    msg.id = 29U;
    msg.period = 3708958349U;
    msg.duty_cycle = 2836503900U;

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
    msg.setTimeStamp(0.976949022949);
    msg.setSource(2177U);
    msg.setSourceEntity(180U);
    msg.setDestination(62662U);
    msg.setDestinationEntity(101U);
    msg.id = 160U;
    msg.period = 2031624834U;
    msg.duty_cycle = 718442725U;

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
    msg.setTimeStamp(0.177398309867);
    msg.setSource(46766U);
    msg.setSourceEntity(40U);
    msg.setDestination(29713U);
    msg.setDestinationEntity(148U);
    msg.id = 29U;
    msg.period = 2620222053U;
    msg.duty_cycle = 3264691955U;

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
    msg.setTimeStamp(0.0517704457025);
    msg.setSource(23399U);
    msg.setSourceEntity(244U);
    msg.setDestination(31398U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.278271071351;
    msg.lon = 0.652838668112;
    msg.height = 0.78750918828;
    msg.x = 0.824490742319;
    msg.y = 0.263015412236;
    msg.z = 0.0788140646533;
    msg.phi = 0.145583406795;
    msg.theta = 0.513453983618;
    msg.psi = 0.114995555248;
    msg.u = 0.629835507526;
    msg.v = 0.7738040417;
    msg.w = 0.865489125577;
    msg.vx = 0.625543067499;
    msg.vy = 0.755453848844;
    msg.vz = 0.196746966796;
    msg.p = 0.325961010035;
    msg.q = 0.137747416975;
    msg.r = 0.517468216083;
    msg.depth = 0.271869024136;
    msg.alt = 0.675058039787;

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
    msg.setTimeStamp(0.930718064098);
    msg.setSource(13437U);
    msg.setSourceEntity(206U);
    msg.setDestination(41480U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.720938467205;
    msg.lon = 0.587438862714;
    msg.height = 0.732233197724;
    msg.x = 0.839052207075;
    msg.y = 0.0970068894011;
    msg.z = 0.458045917892;
    msg.phi = 0.112221906183;
    msg.theta = 0.739890947233;
    msg.psi = 0.157946222199;
    msg.u = 0.648735634155;
    msg.v = 0.0774315981672;
    msg.w = 0.038076135342;
    msg.vx = 0.574581005943;
    msg.vy = 0.794590009597;
    msg.vz = 0.952370801894;
    msg.p = 0.308746224804;
    msg.q = 0.340316447047;
    msg.r = 0.416943546322;
    msg.depth = 0.331658847478;
    msg.alt = 0.929309831315;

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
    msg.setTimeStamp(0.574640046224);
    msg.setSource(49633U);
    msg.setSourceEntity(0U);
    msg.setDestination(36601U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.473183980192;
    msg.lon = 0.668267495354;
    msg.height = 0.840502621379;
    msg.x = 0.941911847462;
    msg.y = 0.996415389407;
    msg.z = 0.222365118773;
    msg.phi = 0.591228725844;
    msg.theta = 0.665882132508;
    msg.psi = 0.648986651986;
    msg.u = 0.293091600832;
    msg.v = 0.942303895452;
    msg.w = 0.450047433115;
    msg.vx = 0.732424330405;
    msg.vy = 0.96507392238;
    msg.vz = 0.550373840789;
    msg.p = 0.397473923571;
    msg.q = 0.330538603346;
    msg.r = 0.396383426301;
    msg.depth = 0.043038545515;
    msg.alt = 0.400023405012;

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
    msg.setTimeStamp(0.0960474409632);
    msg.setSource(20500U);
    msg.setSourceEntity(197U);
    msg.setDestination(51546U);
    msg.setDestinationEntity(142U);
    msg.x = 0.332333581417;
    msg.y = 0.699207604536;
    msg.z = 0.60152081262;

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
    msg.setTimeStamp(0.741887062081);
    msg.setSource(44241U);
    msg.setSourceEntity(229U);
    msg.setDestination(63644U);
    msg.setDestinationEntity(14U);
    msg.x = 0.392657008854;
    msg.y = 0.145016982614;
    msg.z = 0.352108816135;

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
    msg.setTimeStamp(0.492940460496);
    msg.setSource(11236U);
    msg.setSourceEntity(31U);
    msg.setDestination(2025U);
    msg.setDestinationEntity(10U);
    msg.x = 0.226210422721;
    msg.y = 0.34486867778;
    msg.z = 0.466118136843;

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
    msg.setTimeStamp(0.123654612967);
    msg.setSource(59399U);
    msg.setSourceEntity(69U);
    msg.setDestination(13098U);
    msg.setDestinationEntity(163U);
    msg.value = 0.658319161916;

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
    msg.setTimeStamp(0.619837796898);
    msg.setSource(35614U);
    msg.setSourceEntity(204U);
    msg.setDestination(6016U);
    msg.setDestinationEntity(193U);
    msg.value = 0.946828852796;

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
    msg.setTimeStamp(0.328225192679);
    msg.setSource(34182U);
    msg.setSourceEntity(103U);
    msg.setDestination(39322U);
    msg.setDestinationEntity(208U);
    msg.value = 0.0822289059508;

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
    msg.setTimeStamp(0.930186381098);
    msg.setSource(54630U);
    msg.setSourceEntity(28U);
    msg.setDestination(9203U);
    msg.setDestinationEntity(142U);
    msg.value = 0.918412448973;

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
    msg.setTimeStamp(0.709404439002);
    msg.setSource(9803U);
    msg.setSourceEntity(117U);
    msg.setDestination(11084U);
    msg.setDestinationEntity(234U);
    msg.value = 0.322849608509;

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
    msg.setTimeStamp(0.408210898046);
    msg.setSource(24723U);
    msg.setSourceEntity(22U);
    msg.setDestination(24310U);
    msg.setDestinationEntity(78U);
    msg.value = 0.77400307946;

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
    msg.setTimeStamp(0.832764179023);
    msg.setSource(12592U);
    msg.setSourceEntity(11U);
    msg.setDestination(38489U);
    msg.setDestinationEntity(253U);
    msg.x = 0.10122930239;
    msg.y = 0.0329040531342;
    msg.z = 0.798191122285;
    msg.phi = 0.952062630881;
    msg.theta = 0.921172816261;
    msg.psi = 0.0224627812142;
    msg.p = 0.759240097922;
    msg.q = 0.383623728664;
    msg.r = 0.258743562074;
    msg.u = 0.375439423242;
    msg.v = 0.164263174932;
    msg.w = 0.0643753289555;
    msg.bias_psi = 0.62642449686;
    msg.bias_r = 0.478759918892;

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
    msg.setTimeStamp(0.116345225366);
    msg.setSource(10391U);
    msg.setSourceEntity(219U);
    msg.setDestination(45908U);
    msg.setDestinationEntity(141U);
    msg.x = 0.704801937874;
    msg.y = 0.729374081357;
    msg.z = 0.823139270997;
    msg.phi = 0.325518711364;
    msg.theta = 0.834566214899;
    msg.psi = 0.884909554141;
    msg.p = 0.158160300308;
    msg.q = 0.372319413066;
    msg.r = 0.78894960694;
    msg.u = 0.976375570817;
    msg.v = 0.176796659426;
    msg.w = 0.671396541444;
    msg.bias_psi = 0.819042482755;
    msg.bias_r = 0.998477763038;

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
    msg.setTimeStamp(0.748087956825);
    msg.setSource(43094U);
    msg.setSourceEntity(48U);
    msg.setDestination(3630U);
    msg.setDestinationEntity(11U);
    msg.x = 0.806532803358;
    msg.y = 0.736353386769;
    msg.z = 0.0643323650062;
    msg.phi = 0.659811224049;
    msg.theta = 0.385525992854;
    msg.psi = 0.175932655827;
    msg.p = 0.700392635796;
    msg.q = 0.944667946989;
    msg.r = 0.135840527552;
    msg.u = 0.903137159538;
    msg.v = 0.584854678735;
    msg.w = 0.862607793088;
    msg.bias_psi = 0.99520222907;
    msg.bias_r = 0.5121861095;

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
    msg.setTimeStamp(0.611454297631);
    msg.setSource(29289U);
    msg.setSourceEntity(238U);
    msg.setDestination(778U);
    msg.setDestinationEntity(66U);
    msg.bias_psi = 0.89682049491;
    msg.bias_r = 0.915011125188;
    msg.cog = 0.927827982514;
    msg.cyaw = 0.119045526153;
    msg.lbl_rej_level = 0.647646642451;
    msg.gps_rej_level = 0.496439044673;
    msg.custom_x = 0.1976495447;
    msg.custom_y = 0.206776665534;
    msg.custom_z = 0.833184781389;

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
    msg.setTimeStamp(0.823144256893);
    msg.setSource(51470U);
    msg.setSourceEntity(135U);
    msg.setDestination(11092U);
    msg.setDestinationEntity(236U);
    msg.bias_psi = 0.84991137572;
    msg.bias_r = 0.433594973812;
    msg.cog = 0.54309210869;
    msg.cyaw = 0.261876576145;
    msg.lbl_rej_level = 0.353716251336;
    msg.gps_rej_level = 0.114500309423;
    msg.custom_x = 0.13534544316;
    msg.custom_y = 0.446712089466;
    msg.custom_z = 0.101179489519;

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
    msg.setTimeStamp(0.986007131625);
    msg.setSource(14910U);
    msg.setSourceEntity(94U);
    msg.setDestination(48393U);
    msg.setDestinationEntity(185U);
    msg.bias_psi = 0.925793587642;
    msg.bias_r = 0.767877357817;
    msg.cog = 0.864782771994;
    msg.cyaw = 0.771191934054;
    msg.lbl_rej_level = 0.790551149682;
    msg.gps_rej_level = 0.709727879772;
    msg.custom_x = 0.819590584738;
    msg.custom_y = 0.566831475666;
    msg.custom_z = 0.0167676624493;

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
    msg.setTimeStamp(0.217242252133);
    msg.setSource(40772U);
    msg.setSourceEntity(7U);
    msg.setDestination(38267U);
    msg.setDestinationEntity(63U);
    msg.utc_time = 0.728843046337;
    msg.reason = 112U;

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
    msg.setTimeStamp(0.446761600789);
    msg.setSource(22183U);
    msg.setSourceEntity(4U);
    msg.setDestination(42793U);
    msg.setDestinationEntity(0U);
    msg.utc_time = 0.834076110586;
    msg.reason = 189U;

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
    msg.setTimeStamp(0.736536305877);
    msg.setSource(48479U);
    msg.setSourceEntity(127U);
    msg.setDestination(56701U);
    msg.setDestinationEntity(20U);
    msg.utc_time = 0.795742007406;
    msg.reason = 148U;

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
    msg.setTimeStamp(0.747324665904);
    msg.setSource(30337U);
    msg.setSourceEntity(54U);
    msg.setDestination(35168U);
    msg.setDestinationEntity(166U);
    msg.id = 185U;
    msg.range = 0.688613848923;
    msg.acceptance = 64U;

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
    msg.setTimeStamp(0.0377829003598);
    msg.setSource(41303U);
    msg.setSourceEntity(216U);
    msg.setDestination(60922U);
    msg.setDestinationEntity(79U);
    msg.id = 121U;
    msg.range = 0.628167285715;
    msg.acceptance = 93U;

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
    msg.setTimeStamp(0.442055838252);
    msg.setSource(122U);
    msg.setSourceEntity(32U);
    msg.setDestination(17888U);
    msg.setDestinationEntity(128U);
    msg.id = 223U;
    msg.range = 0.0447629234122;
    msg.acceptance = 1U;

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
    msg.setTimeStamp(0.0133767007672);
    msg.setSource(31682U);
    msg.setSourceEntity(202U);
    msg.setDestination(1620U);
    msg.setDestinationEntity(215U);
    msg.type = 97U;
    msg.reason = 113U;
    msg.value = 0.605971932961;
    msg.timestep = 0.706148405305;

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
    msg.setTimeStamp(0.00477399980078);
    msg.setSource(17597U);
    msg.setSourceEntity(124U);
    msg.setDestination(40742U);
    msg.setDestinationEntity(50U);
    msg.type = 128U;
    msg.reason = 190U;
    msg.value = 0.22977617532;
    msg.timestep = 0.0628627845632;

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
    msg.setTimeStamp(0.00841365268098);
    msg.setSource(49356U);
    msg.setSourceEntity(212U);
    msg.setDestination(60274U);
    msg.setDestinationEntity(229U);
    msg.type = 104U;
    msg.reason = 116U;
    msg.value = 0.535710417249;
    msg.timestep = 0.616183614284;

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
    msg.setTimeStamp(0.766437808613);
    msg.setSource(51462U);
    msg.setSourceEntity(29U);
    msg.setDestination(30482U);
    msg.setDestinationEntity(2U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EJFKRRRRSRNBVQLCXMOTQJMBF");
    tmp_msg_0.lat = 0.839487299858;
    tmp_msg_0.lon = 0.298387519347;
    tmp_msg_0.depth = 0.15516404372;
    tmp_msg_0.query_channel = 26U;
    tmp_msg_0.reply_channel = 115U;
    tmp_msg_0.transponder_delay = 8U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.903549589997;
    msg.y = 0.697498853329;
    msg.var_x = 0.317193525339;
    msg.var_y = 0.224304465662;
    msg.distance = 0.556892213046;

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
    msg.setTimeStamp(0.821205097938);
    msg.setSource(37746U);
    msg.setSourceEntity(31U);
    msg.setDestination(23887U);
    msg.setDestinationEntity(84U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BMDTHGYDNJVFQWIUZKEDTEKCROLERLMTXVWFFGAFOJPLYIECZKVJEQFCFZFNKVCTTRAXXXEJUJZFWASIHSSSTBCHKPNIYQWRADQVRZUFACSWPPXONWEPMYBMUHETPOYCPZGGLBBQ");
    tmp_msg_0.lat = 0.549899827741;
    tmp_msg_0.lon = 0.301593234401;
    tmp_msg_0.depth = 0.55434696301;
    tmp_msg_0.query_channel = 108U;
    tmp_msg_0.reply_channel = 221U;
    tmp_msg_0.transponder_delay = 193U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.615410332393;
    msg.y = 0.599638433513;
    msg.var_x = 0.0498758817414;
    msg.var_y = 0.763368834812;
    msg.distance = 0.448546141718;

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
    msg.setTimeStamp(0.413909041238);
    msg.setSource(27135U);
    msg.setSourceEntity(247U);
    msg.setDestination(9135U);
    msg.setDestinationEntity(219U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OJIHHARVMZCTHNDYMQHTEENZWWEJRNNJPLHGVKASTJHUPUJZKVPLXNIQMUGVBCWDXJTSRVFD");
    tmp_msg_0.lat = 0.958479684706;
    tmp_msg_0.lon = 0.247884143388;
    tmp_msg_0.depth = 0.583018566017;
    tmp_msg_0.query_channel = 174U;
    tmp_msg_0.reply_channel = 67U;
    tmp_msg_0.transponder_delay = 135U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.571028368255;
    msg.y = 0.325740908959;
    msg.var_x = 0.980035144046;
    msg.var_y = 0.842119987162;
    msg.distance = 0.162907379229;

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
    msg.setTimeStamp(0.187552853784);
    msg.setSource(21880U);
    msg.setSourceEntity(129U);
    msg.setDestination(54169U);
    msg.setDestinationEntity(34U);
    msg.state = 184U;

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
    msg.setTimeStamp(0.524220977561);
    msg.setSource(44494U);
    msg.setSourceEntity(201U);
    msg.setDestination(11709U);
    msg.setDestinationEntity(216U);
    msg.state = 103U;

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
    msg.setTimeStamp(0.146375683474);
    msg.setSource(38199U);
    msg.setSourceEntity(223U);
    msg.setDestination(56181U);
    msg.setDestinationEntity(116U);
    msg.state = 83U;

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
    msg.setTimeStamp(0.261836076689);
    msg.setSource(1064U);
    msg.setSourceEntity(64U);
    msg.setDestination(36628U);
    msg.setDestinationEntity(150U);
    msg.x = 0.645854923911;
    msg.y = 0.151795038003;
    msg.z = 0.539972091955;

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
    msg.setTimeStamp(0.954400504478);
    msg.setSource(5774U);
    msg.setSourceEntity(69U);
    msg.setDestination(58400U);
    msg.setDestinationEntity(220U);
    msg.x = 0.327539588958;
    msg.y = 0.374747594914;
    msg.z = 0.511451359824;

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
    msg.setTimeStamp(0.366450020911);
    msg.setSource(6761U);
    msg.setSourceEntity(126U);
    msg.setDestination(22954U);
    msg.setDestinationEntity(96U);
    msg.x = 0.716329118589;
    msg.y = 0.637788143969;
    msg.z = 0.543955349111;

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
    msg.setTimeStamp(0.158652207737);
    msg.setSource(9364U);
    msg.setSourceEntity(123U);
    msg.setDestination(63960U);
    msg.setDestinationEntity(53U);
    msg.va = 0.660000089796;
    msg.aoa = 0.684867454249;
    msg.ssa = 0.269546576436;

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
    msg.setTimeStamp(0.305218710681);
    msg.setSource(27439U);
    msg.setSourceEntity(67U);
    msg.setDestination(8978U);
    msg.setDestinationEntity(138U);
    msg.va = 0.98873032502;
    msg.aoa = 0.250363336877;
    msg.ssa = 0.944300846715;

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
    msg.setTimeStamp(0.938682447264);
    msg.setSource(33834U);
    msg.setSourceEntity(190U);
    msg.setDestination(18949U);
    msg.setDestinationEntity(234U);
    msg.va = 0.599155103532;
    msg.aoa = 0.357133065884;
    msg.ssa = 0.368602127286;

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
    msg.setTimeStamp(0.488391215252);
    msg.setSource(11526U);
    msg.setSourceEntity(214U);
    msg.setDestination(53501U);
    msg.setDestinationEntity(99U);
    msg.value = 0.665012590097;

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
    msg.setTimeStamp(0.599532320165);
    msg.setSource(13827U);
    msg.setSourceEntity(45U);
    msg.setDestination(9892U);
    msg.setDestinationEntity(35U);
    msg.value = 0.313525491924;

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
    msg.setTimeStamp(0.637222579156);
    msg.setSource(20941U);
    msg.setSourceEntity(138U);
    msg.setDestination(40082U);
    msg.setDestinationEntity(66U);
    msg.value = 0.413928196827;

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
    msg.setTimeStamp(0.671644466145);
    msg.setSource(41581U);
    msg.setSourceEntity(171U);
    msg.setDestination(39780U);
    msg.setDestinationEntity(75U);
    msg.value = 0.609856021318;
    msg.z_units = 157U;

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
    msg.setTimeStamp(0.713617242295);
    msg.setSource(40827U);
    msg.setSourceEntity(87U);
    msg.setDestination(31580U);
    msg.setDestinationEntity(91U);
    msg.value = 0.519517406984;
    msg.z_units = 120U;

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
    msg.setTimeStamp(0.996228560047);
    msg.setSource(42341U);
    msg.setSourceEntity(205U);
    msg.setDestination(53199U);
    msg.setDestinationEntity(145U);
    msg.value = 0.965314235308;
    msg.z_units = 85U;

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
    msg.setTimeStamp(0.409960223089);
    msg.setSource(55958U);
    msg.setSourceEntity(90U);
    msg.setDestination(3715U);
    msg.setDestinationEntity(44U);
    msg.value = 0.470630731473;
    msg.speed_units = 117U;

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
    msg.setTimeStamp(0.0304180139323);
    msg.setSource(29468U);
    msg.setSourceEntity(215U);
    msg.setDestination(19984U);
    msg.setDestinationEntity(48U);
    msg.value = 0.558335145727;
    msg.speed_units = 41U;

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
    msg.setTimeStamp(0.382885745949);
    msg.setSource(3135U);
    msg.setSourceEntity(241U);
    msg.setDestination(18124U);
    msg.setDestinationEntity(139U);
    msg.value = 0.461330473955;
    msg.speed_units = 203U;

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
    msg.setTimeStamp(0.647075715157);
    msg.setSource(60752U);
    msg.setSourceEntity(249U);
    msg.setDestination(59549U);
    msg.setDestinationEntity(236U);
    msg.value = 0.455480641274;

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
    msg.setTimeStamp(0.815657159185);
    msg.setSource(21775U);
    msg.setSourceEntity(111U);
    msg.setDestination(20479U);
    msg.setDestinationEntity(242U);
    msg.value = 0.78367885462;

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
    msg.setTimeStamp(0.792412488936);
    msg.setSource(7059U);
    msg.setSourceEntity(121U);
    msg.setDestination(14538U);
    msg.setDestinationEntity(104U);
    msg.value = 0.448963573469;

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
    msg.setTimeStamp(0.634944637277);
    msg.setSource(62512U);
    msg.setSourceEntity(172U);
    msg.setDestination(55341U);
    msg.setDestinationEntity(186U);
    msg.value = 0.307506982453;

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
    msg.setTimeStamp(0.712467533138);
    msg.setSource(44792U);
    msg.setSourceEntity(189U);
    msg.setDestination(26218U);
    msg.setDestinationEntity(199U);
    msg.value = 0.451950449574;

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
    msg.setTimeStamp(0.76300972588);
    msg.setSource(64563U);
    msg.setSourceEntity(184U);
    msg.setDestination(13627U);
    msg.setDestinationEntity(137U);
    msg.value = 0.966432794951;

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
    msg.setTimeStamp(0.282660674257);
    msg.setSource(5801U);
    msg.setSourceEntity(97U);
    msg.setDestination(37250U);
    msg.setDestinationEntity(200U);
    msg.value = 0.107323728916;

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
    msg.setTimeStamp(0.858755155914);
    msg.setSource(58335U);
    msg.setSourceEntity(181U);
    msg.setDestination(37014U);
    msg.setDestinationEntity(18U);
    msg.value = 0.64407665889;

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
    msg.setTimeStamp(0.353480409356);
    msg.setSource(17826U);
    msg.setSourceEntity(139U);
    msg.setDestination(52128U);
    msg.setDestinationEntity(235U);
    msg.value = 0.446933124392;

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
    msg.setTimeStamp(0.604334577733);
    msg.setSource(52699U);
    msg.setSourceEntity(220U);
    msg.setDestination(40854U);
    msg.setDestinationEntity(190U);
    msg.path_ref = 2719917598U;
    msg.start_lat = 0.141414476742;
    msg.start_lon = 0.986136485643;
    msg.start_z = 0.914927846411;
    msg.start_z_units = 181U;
    msg.end_lat = 0.24900347879;
    msg.end_lon = 0.351691791225;
    msg.end_z = 0.854288092618;
    msg.end_z_units = 0U;
    msg.speed = 0.531215299141;
    msg.speed_units = 48U;
    msg.lradius = 0.0890163252917;
    msg.flags = 74U;

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
    msg.setTimeStamp(0.759162923021);
    msg.setSource(36983U);
    msg.setSourceEntity(234U);
    msg.setDestination(13597U);
    msg.setDestinationEntity(86U);
    msg.path_ref = 151242266U;
    msg.start_lat = 0.534001988036;
    msg.start_lon = 0.714887498398;
    msg.start_z = 0.47283033956;
    msg.start_z_units = 4U;
    msg.end_lat = 0.221069918877;
    msg.end_lon = 0.311613836278;
    msg.end_z = 0.332226407108;
    msg.end_z_units = 191U;
    msg.speed = 0.138012778381;
    msg.speed_units = 56U;
    msg.lradius = 0.372192557512;
    msg.flags = 88U;

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
    msg.setTimeStamp(0.809046342144);
    msg.setSource(51029U);
    msg.setSourceEntity(102U);
    msg.setDestination(54962U);
    msg.setDestinationEntity(190U);
    msg.path_ref = 2431523468U;
    msg.start_lat = 0.40302059633;
    msg.start_lon = 0.0808516434727;
    msg.start_z = 0.0094342666512;
    msg.start_z_units = 202U;
    msg.end_lat = 0.126090101229;
    msg.end_lon = 0.73116468359;
    msg.end_z = 0.667737977595;
    msg.end_z_units = 0U;
    msg.speed = 0.751802915739;
    msg.speed_units = 222U;
    msg.lradius = 0.971131257131;
    msg.flags = 223U;

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
    msg.setTimeStamp(0.143275487389);
    msg.setSource(41759U);
    msg.setSourceEntity(1U);
    msg.setDestination(17141U);
    msg.setDestinationEntity(142U);
    msg.x = 0.0619782804125;
    msg.y = 0.242045940045;
    msg.z = 0.151466654927;
    msg.k = 0.0657310940686;
    msg.m = 0.385570862448;
    msg.n = 0.451642248431;
    msg.flags = 233U;

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
    msg.setTimeStamp(0.415881472755);
    msg.setSource(51004U);
    msg.setSourceEntity(212U);
    msg.setDestination(15593U);
    msg.setDestinationEntity(97U);
    msg.x = 0.197966442405;
    msg.y = 0.828755834728;
    msg.z = 0.523676657048;
    msg.k = 0.866352360515;
    msg.m = 0.213771741524;
    msg.n = 0.508800030139;
    msg.flags = 230U;

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
    msg.setTimeStamp(0.676966883822);
    msg.setSource(22319U);
    msg.setSourceEntity(100U);
    msg.setDestination(47328U);
    msg.setDestinationEntity(214U);
    msg.x = 0.981195663577;
    msg.y = 0.129431714172;
    msg.z = 0.76957273427;
    msg.k = 0.215006028757;
    msg.m = 0.838572252742;
    msg.n = 0.86406233775;
    msg.flags = 21U;

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
    msg.setTimeStamp(0.961104959317);
    msg.setSource(43683U);
    msg.setSourceEntity(7U);
    msg.setDestination(42820U);
    msg.setDestinationEntity(73U);
    msg.value = 0.514304613081;

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
    msg.setTimeStamp(0.267151651425);
    msg.setSource(10546U);
    msg.setSourceEntity(57U);
    msg.setDestination(5428U);
    msg.setDestinationEntity(135U);
    msg.value = 0.124188826257;

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
    msg.setTimeStamp(0.737284434974);
    msg.setSource(17589U);
    msg.setSourceEntity(21U);
    msg.setDestination(55061U);
    msg.setDestinationEntity(182U);
    msg.value = 0.0264362379882;

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
    msg.setTimeStamp(0.770964854684);
    msg.setSource(1017U);
    msg.setSourceEntity(79U);
    msg.setDestination(50367U);
    msg.setDestinationEntity(119U);
    msg.u = 0.45062632414;
    msg.v = 0.297344163844;
    msg.w = 0.866287073763;
    msg.p = 0.480336347001;
    msg.q = 0.682809816043;
    msg.r = 0.332908917048;
    msg.flags = 156U;

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
    msg.setTimeStamp(0.170174982423);
    msg.setSource(16159U);
    msg.setSourceEntity(233U);
    msg.setDestination(50518U);
    msg.setDestinationEntity(202U);
    msg.u = 0.0645676055428;
    msg.v = 0.481194531604;
    msg.w = 0.580927606727;
    msg.p = 0.482386271134;
    msg.q = 0.183344486085;
    msg.r = 0.200971044862;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.29931518088);
    msg.setSource(19228U);
    msg.setSourceEntity(189U);
    msg.setDestination(21916U);
    msg.setDestinationEntity(120U);
    msg.u = 0.507356786843;
    msg.v = 0.103859885519;
    msg.w = 0.725512733648;
    msg.p = 0.843321278189;
    msg.q = 0.278904290387;
    msg.r = 0.127579111345;
    msg.flags = 109U;

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
    msg.setTimeStamp(0.808975795474);
    msg.setSource(56215U);
    msg.setSourceEntity(33U);
    msg.setDestination(1742U);
    msg.setDestinationEntity(226U);
    msg.path_ref = 1914118269U;
    msg.start_lat = 0.0536282010676;
    msg.start_lon = 0.575988097919;
    msg.start_z = 0.0991840170366;
    msg.start_z_units = 160U;
    msg.end_lat = 0.798253023593;
    msg.end_lon = 0.410204499457;
    msg.end_z = 0.153411392035;
    msg.end_z_units = 169U;
    msg.lradius = 0.0607997917021;
    msg.flags = 198U;
    msg.x = 0.0962706177829;
    msg.y = 0.864811357306;
    msg.z = 0.271584610337;
    msg.vx = 0.704915985156;
    msg.vy = 0.135665690064;
    msg.vz = 0.25630528112;
    msg.course_error = 0.89956411836;
    msg.eta = 30816U;

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
    msg.setTimeStamp(0.0233601333913);
    msg.setSource(60827U);
    msg.setSourceEntity(24U);
    msg.setDestination(63685U);
    msg.setDestinationEntity(55U);
    msg.path_ref = 208254591U;
    msg.start_lat = 0.814455304517;
    msg.start_lon = 0.265434249239;
    msg.start_z = 0.738294400807;
    msg.start_z_units = 30U;
    msg.end_lat = 0.047931838373;
    msg.end_lon = 0.834088656032;
    msg.end_z = 0.38577456634;
    msg.end_z_units = 250U;
    msg.lradius = 0.107310667187;
    msg.flags = 54U;
    msg.x = 0.280275205019;
    msg.y = 0.463457119799;
    msg.z = 0.106302641437;
    msg.vx = 0.485538275258;
    msg.vy = 0.478040932942;
    msg.vz = 0.36894938161;
    msg.course_error = 0.412711525901;
    msg.eta = 54052U;

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
    msg.setTimeStamp(0.373293741386);
    msg.setSource(10453U);
    msg.setSourceEntity(193U);
    msg.setDestination(63590U);
    msg.setDestinationEntity(76U);
    msg.path_ref = 4004496451U;
    msg.start_lat = 0.556095440018;
    msg.start_lon = 0.17599937937;
    msg.start_z = 0.833211330804;
    msg.start_z_units = 132U;
    msg.end_lat = 0.434762998965;
    msg.end_lon = 0.782778550582;
    msg.end_z = 0.0198700221241;
    msg.end_z_units = 132U;
    msg.lradius = 0.269412764568;
    msg.flags = 174U;
    msg.x = 0.170794531106;
    msg.y = 0.715602249719;
    msg.z = 0.0272468121736;
    msg.vx = 0.981867490269;
    msg.vy = 0.979475485703;
    msg.vz = 0.135524101621;
    msg.course_error = 0.318460761484;
    msg.eta = 31520U;

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
    msg.setTimeStamp(0.376115370921);
    msg.setSource(6244U);
    msg.setSourceEntity(131U);
    msg.setDestination(5078U);
    msg.setDestinationEntity(24U);
    msg.k = 0.586810780178;
    msg.m = 0.987080306187;
    msg.n = 0.778198556305;

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
    msg.setTimeStamp(0.168757461334);
    msg.setSource(7642U);
    msg.setSourceEntity(202U);
    msg.setDestination(33724U);
    msg.setDestinationEntity(136U);
    msg.k = 0.561251973169;
    msg.m = 0.605379170683;
    msg.n = 0.153243747134;

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
    msg.setTimeStamp(0.55259229561);
    msg.setSource(15301U);
    msg.setSourceEntity(243U);
    msg.setDestination(2246U);
    msg.setDestinationEntity(203U);
    msg.k = 0.429044377318;
    msg.m = 0.191151360944;
    msg.n = 0.107065064998;

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
    msg.setTimeStamp(0.132902839167);
    msg.setSource(19377U);
    msg.setSourceEntity(128U);
    msg.setDestination(44730U);
    msg.setDestinationEntity(72U);
    msg.p = 0.613871218175;
    msg.i = 0.555150109905;
    msg.d = 0.155536833131;
    msg.a = 0.69581065274;

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
    msg.setTimeStamp(0.216645994955);
    msg.setSource(42427U);
    msg.setSourceEntity(147U);
    msg.setDestination(404U);
    msg.setDestinationEntity(150U);
    msg.p = 0.00864207750833;
    msg.i = 0.796173236453;
    msg.d = 0.925328784537;
    msg.a = 0.0953661254807;

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
    msg.setTimeStamp(0.294028680848);
    msg.setSource(35257U);
    msg.setSourceEntity(169U);
    msg.setDestination(22668U);
    msg.setDestinationEntity(54U);
    msg.p = 0.408668198861;
    msg.i = 0.885892226738;
    msg.d = 0.0105445747048;
    msg.a = 0.457403475037;

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
    msg.setTimeStamp(0.199916854905);
    msg.setSource(32555U);
    msg.setSourceEntity(134U);
    msg.setDestination(47652U);
    msg.setDestinationEntity(178U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.388758518342);
    msg.setSource(53422U);
    msg.setSourceEntity(220U);
    msg.setDestination(15534U);
    msg.setDestinationEntity(11U);
    msg.op = 230U;

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
    msg.setTimeStamp(0.540257116377);
    msg.setSource(21024U);
    msg.setSourceEntity(85U);
    msg.setDestination(20426U);
    msg.setDestinationEntity(76U);
    msg.op = 82U;

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
    msg.setTimeStamp(0.828645506343);
    msg.setSource(47936U);
    msg.setSourceEntity(218U);
    msg.setDestination(32685U);
    msg.setDestinationEntity(109U);
    msg.x = 0.656305548044;
    msg.y = 0.222406798563;
    msg.z = 0.343298841354;
    msg.vx = 0.701684207261;
    msg.vy = 0.71421529195;
    msg.vz = 0.469644951996;
    msg.ax = 0.686363777278;
    msg.ay = 0.559812827172;
    msg.az = 0.945977053409;
    msg.flags = 33818U;

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
    msg.setTimeStamp(0.437896897897);
    msg.setSource(30227U);
    msg.setSourceEntity(141U);
    msg.setDestination(9410U);
    msg.setDestinationEntity(140U);
    msg.x = 0.392871231676;
    msg.y = 0.240343837934;
    msg.z = 0.0207940277095;
    msg.vx = 0.531881050415;
    msg.vy = 0.532902948796;
    msg.vz = 0.933379891738;
    msg.ax = 0.352544734982;
    msg.ay = 0.845944855182;
    msg.az = 0.604546919959;
    msg.flags = 39555U;

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
    msg.setTimeStamp(0.9092272685);
    msg.setSource(22159U);
    msg.setSourceEntity(195U);
    msg.setDestination(37329U);
    msg.setDestinationEntity(237U);
    msg.x = 0.190191108051;
    msg.y = 0.944345238639;
    msg.z = 0.916100231533;
    msg.vx = 0.648942856507;
    msg.vy = 0.751098701571;
    msg.vz = 0.056596991217;
    msg.ax = 0.176339001097;
    msg.ay = 0.672190494186;
    msg.az = 0.962044972781;
    msg.flags = 54504U;

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
    msg.setTimeStamp(0.427489074054);
    msg.setSource(56752U);
    msg.setSourceEntity(213U);
    msg.setDestination(47375U);
    msg.setDestinationEntity(9U);
    msg.value = 0.70173133578;

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
    msg.setTimeStamp(0.933468373492);
    msg.setSource(48769U);
    msg.setSourceEntity(163U);
    msg.setDestination(52848U);
    msg.setDestinationEntity(169U);
    msg.value = 0.104051531327;

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
    msg.setTimeStamp(0.966094205924);
    msg.setSource(19606U);
    msg.setSourceEntity(153U);
    msg.setDestination(59869U);
    msg.setDestinationEntity(250U);
    msg.value = 0.24148588838;

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
    msg.setTimeStamp(0.466846764757);
    msg.setSource(21891U);
    msg.setSourceEntity(123U);
    msg.setDestination(18087U);
    msg.setDestinationEntity(18U);
    msg.timeout = 484U;
    msg.lat = 0.476328527425;
    msg.lon = 0.875911915443;
    msg.z = 0.364649999546;
    msg.z_units = 175U;
    msg.speed = 0.738542846828;
    msg.speed_units = 56U;
    msg.roll = 0.675874237656;
    msg.pitch = 0.903100725478;
    msg.yaw = 0.547533716267;
    msg.custom.assign("ZWYXFNKTGJBKOQVRJLOHNLYBPYOJRZLPEPBRQMHDPTVIGUAWJUOVQLSFDIRVNVXMNLXESOOQZCCNUJYFAPFWYZGWYJWENKASLCSXHGOREHZENXBGCBQGTVZMADCBPHCGTMXQHOHLJPRCLVQMIBKUXRJTPUCONMTLCBFHFDV");

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
    msg.setTimeStamp(0.643668711);
    msg.setSource(9686U);
    msg.setSourceEntity(212U);
    msg.setDestination(47510U);
    msg.setDestinationEntity(0U);
    msg.timeout = 30921U;
    msg.lat = 0.365464343033;
    msg.lon = 0.885121230406;
    msg.z = 0.0819229317071;
    msg.z_units = 15U;
    msg.speed = 0.169855718968;
    msg.speed_units = 254U;
    msg.roll = 0.239435668346;
    msg.pitch = 0.409543591875;
    msg.yaw = 0.422481591541;
    msg.custom.assign("IEOADOSVXVEBPJZFEXWNQKKZMXVQYLHBLMNACZWRCXAAXMMPAUHBZGRYTRVVGEXVSORTJVTLRUQQVJBKSYCZFWFLOKAULZVGKBXDVZLZKOGYFYYUDUQDKOEAQGHHJIIPHJNDQTJNFCDRUUKIIQYAJQ");

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
    msg.setTimeStamp(0.00936104212065);
    msg.setSource(52568U);
    msg.setSourceEntity(13U);
    msg.setDestination(43777U);
    msg.setDestinationEntity(239U);
    msg.timeout = 7001U;
    msg.lat = 0.341990595589;
    msg.lon = 0.159474742367;
    msg.z = 0.409977554881;
    msg.z_units = 146U;
    msg.speed = 0.207597069433;
    msg.speed_units = 147U;
    msg.roll = 0.265779119241;
    msg.pitch = 0.630923901706;
    msg.yaw = 0.810552921983;
    msg.custom.assign("XTERKZGSTQFBCDILFLYHYVAJSZYOZBRTIGDGEAYRDKJBOWYNHZMZZPYPNMFTEGVEXOWNLPIXPBUVTSMLV");

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
    msg.setTimeStamp(0.673127900397);
    msg.setSource(59441U);
    msg.setSourceEntity(80U);
    msg.setDestination(37209U);
    msg.setDestinationEntity(140U);
    msg.timeout = 14185U;
    msg.lat = 0.753640496262;
    msg.lon = 0.253877098902;
    msg.z = 0.212087355883;
    msg.z_units = 49U;
    msg.speed = 0.950106341404;
    msg.speed_units = 128U;
    msg.duration = 28109U;
    msg.radius = 0.975873489151;
    msg.flags = 236U;
    msg.custom.assign("MFBFGXOTGPAQXKABIMVYQRSHIRARAUVCWEYNQGSKYBIMEW");

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
    msg.setTimeStamp(0.919137242224);
    msg.setSource(7548U);
    msg.setSourceEntity(193U);
    msg.setDestination(45064U);
    msg.setDestinationEntity(40U);
    msg.timeout = 41069U;
    msg.lat = 0.823743808456;
    msg.lon = 0.0419254491269;
    msg.z = 0.0322721082979;
    msg.z_units = 48U;
    msg.speed = 0.129160810072;
    msg.speed_units = 162U;
    msg.duration = 53069U;
    msg.radius = 0.870753825691;
    msg.flags = 98U;
    msg.custom.assign("VPIFPSDTIAUJQFREXPWNHJFHWTZYECDTEZBINBBRCOFIOSXTOCTYDPVBDGARWWBGYIHEUIMFUYSMLNGEHJNDTKBRCMMODPEVEUEFNTYSBJASXATVKOARIUPOHMPOYLZSRQQMYUQQWNDSGIXFBXZCJZMBUIEQALPYVGYKJQCGKURLRCJWS");

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
    msg.setTimeStamp(0.529067276297);
    msg.setSource(36572U);
    msg.setSourceEntity(208U);
    msg.setDestination(3952U);
    msg.setDestinationEntity(108U);
    msg.timeout = 559U;
    msg.lat = 0.773487555887;
    msg.lon = 0.758020169836;
    msg.z = 0.436356896625;
    msg.z_units = 1U;
    msg.speed = 0.891056527869;
    msg.speed_units = 55U;
    msg.duration = 56595U;
    msg.radius = 0.0708143277311;
    msg.flags = 227U;
    msg.custom.assign("CJVUCZQEXHJUXYKNOSWPVAFIXPFSDVXUJWGTHSTMMNBJQSQYAGLQMDBKJUOCAVIDRZNFWKMMRXEFTBYBOUFEFKTMPDXLZBGITYWCKWJUWLDQNEEHWVNQCHOXRKHZMONDJRIMPCPLDQKFTLNCWBPGACIIYHVGMAXQFZEU");

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
    msg.setTimeStamp(0.437935864554);
    msg.setSource(29888U);
    msg.setSourceEntity(174U);
    msg.setDestination(43359U);
    msg.setDestinationEntity(115U);
    msg.custom.assign("CLCQIHFZVCFJETCMJGGBERKMYGKNUXOQWNRWPYFPOSPXJUKPOGCEBKXJRUIGMFWXDCPHDSHTXJPCOJBQKYUQTDWEIIULOYYKZELWKARBSBXRSEVVXQRJQHXMSFDTMTAUONCVTFADVZEGOTMNJRFGLHRVUVIAMNINLFXNDBASOTYTALHUIWWOSRZHBHVAAZXPQFFLEYNOGBZDEKNKWCQBQRIZVYDYLMNQADMCZEJIUZPDZYILVSPTWU");

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
    msg.setTimeStamp(0.939044002488);
    msg.setSource(58626U);
    msg.setSourceEntity(180U);
    msg.setDestination(40087U);
    msg.setDestinationEntity(195U);
    msg.custom.assign("APLPRFDXAOATNRADOWUQWOJKJAIVUHXEKMVMIEQZUBTWPURNXWYJNZUKZZATCLEEZXRGQHQFYICAGLHJLUKSICTMGGHPTTKVSTAYZIUOMICHIPBLNDFTVJFXYCGBZDJYHLMJNVEVTOBOOXWSEYXUBBUMOFVBEEGXHDES");

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
    msg.setTimeStamp(0.425433953086);
    msg.setSource(35608U);
    msg.setSourceEntity(232U);
    msg.setDestination(25789U);
    msg.setDestinationEntity(72U);
    msg.custom.assign("QPIVJTYMOERHYUKALCEZFCXPRVVGIZVMBZJMYSOPRPOHGKDEYGQOODPRZWFFISUVTFQNULNBNVBIITADGFQYUWQHXEBCIDAWGABVSMTDUAKFBVQELRZSGEWSAACOYWECMLFERLMBZQTFFHUJLPTRPCNXCWHWHMSLKNIJJKDJDYGIMHQOLCMVGWGTZUDLXKDPWXZXSBRSBEKYYCKPZNORRT");

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
    msg.setTimeStamp(0.889889223356);
    msg.setSource(23511U);
    msg.setSourceEntity(127U);
    msg.setDestination(25778U);
    msg.setDestinationEntity(197U);
    msg.timeout = 15513U;
    msg.lat = 0.934754332305;
    msg.lon = 0.505853371007;
    msg.z = 0.4281870178;
    msg.z_units = 228U;
    msg.duration = 65486U;
    msg.speed = 0.491080831579;
    msg.speed_units = 122U;
    msg.type = 81U;
    msg.radius = 0.493557841295;
    msg.length = 0.498350251646;
    msg.bearing = 0.755807021276;
    msg.direction = 25U;
    msg.custom.assign("KVZAEYVELYBMSCIUXCGWZSWGFLQSDXUYUPYZXVPIIWACZKCNHNNZJWSF");

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
    msg.setTimeStamp(0.676343346793);
    msg.setSource(61795U);
    msg.setSourceEntity(152U);
    msg.setDestination(1042U);
    msg.setDestinationEntity(229U);
    msg.timeout = 5294U;
    msg.lat = 0.0148179854787;
    msg.lon = 0.283016618742;
    msg.z = 0.610839661158;
    msg.z_units = 232U;
    msg.duration = 37498U;
    msg.speed = 0.262988880055;
    msg.speed_units = 77U;
    msg.type = 173U;
    msg.radius = 0.816900466923;
    msg.length = 0.577420284584;
    msg.bearing = 0.42483831517;
    msg.direction = 203U;
    msg.custom.assign("GUMKCWAPALFHRNVGOUMTENVIQNWIBPHYPO");

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
    msg.setTimeStamp(0.657015169465);
    msg.setSource(50233U);
    msg.setSourceEntity(20U);
    msg.setDestination(44126U);
    msg.setDestinationEntity(62U);
    msg.timeout = 32746U;
    msg.lat = 0.269763053739;
    msg.lon = 0.526138431159;
    msg.z = 0.126849006005;
    msg.z_units = 77U;
    msg.duration = 18094U;
    msg.speed = 0.14747756159;
    msg.speed_units = 211U;
    msg.type = 65U;
    msg.radius = 0.741953853849;
    msg.length = 0.989913741706;
    msg.bearing = 0.954474629717;
    msg.direction = 49U;
    msg.custom.assign("ZOBDRCEQBWGVDUAEPGMMFDJGFW");

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
    msg.setTimeStamp(0.387098619992);
    msg.setSource(50885U);
    msg.setSourceEntity(146U);
    msg.setDestination(44213U);
    msg.setDestinationEntity(178U);
    msg.duration = 14656U;
    msg.custom.assign("PYIVDLWRXKUXHCSMVFJLVJFNIZEVYOWGRTLIMJMBQMAWGFXBVRXOAAPWUOTOKDEQZAG");

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
    msg.setTimeStamp(0.967446551221);
    msg.setSource(2488U);
    msg.setSourceEntity(169U);
    msg.setDestination(34442U);
    msg.setDestinationEntity(15U);
    msg.duration = 32262U;
    msg.custom.assign("SPXKXWKDVDYRNPRNZGULOUHSVQPETQEUESUGFTIUEEMRVQWMKWBOHKFNNFEIZLCLLRMJOOJPPSWHXSRGRJZXHZBLWVLQBGDKNQEQIFXVMFDGDTIYMDYODETPXJWWXQARGISUETXYCGKQKCACCJKG");

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
    msg.setTimeStamp(0.16599669447);
    msg.setSource(61558U);
    msg.setSourceEntity(145U);
    msg.setDestination(19668U);
    msg.setDestinationEntity(146U);
    msg.duration = 31469U;
    msg.custom.assign("SWHNDWZNXGQHRAUOSWERNAVJRMCSMKJKJLBQCFDUTNYRPJCPRVXHTJUZQKCMSLGOMZPZVVEIQDYUTJHJGLBFBPCWNPFXHJFJWEXMGHPFZKATAGKGXOROTIDBGEIXEBSOWOLJNHLVZSMFURYIQNXXHRNHROUYMCMIGILQWTDFNWKDNDWLYMMQAUQAUBCXTVOYIEZIXQYPESGBEVSTPGSLDBLLUY");

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
    msg.setTimeStamp(0.321856695926);
    msg.setSource(26010U);
    msg.setSourceEntity(234U);
    msg.setDestination(31552U);
    msg.setDestinationEntity(66U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.859248577685;
    msg.control.set(tmp_msg_0);
    msg.duration = 22475U;
    msg.custom.assign("WLNOVESVFHKMIXNXUPOCDIWHDBETTVKQRHLBPKSINGAFCBPRKIHLKXEQAZGPDIGGHCOSOUFFPYTFOQVCJOCOQXGZSRUZYYFJJFEJCHHWIYD");

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
    msg.setTimeStamp(0.15821013092);
    msg.setSource(53983U);
    msg.setSourceEntity(146U);
    msg.setDestination(2525U);
    msg.setDestinationEntity(75U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.598212237528;
    msg.control.set(tmp_msg_0);
    msg.duration = 60388U;
    msg.custom.assign("OIBFVYCCVNGQXZEFVSUAOTMMHURXYUIXJRJMVEJQDCGJXOULBPIPUMEHXKFJDVLAFINZHTDBLCZJKWWNCHBORKGVWQXLBGRTTWVLTQNAUD");

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
    msg.setTimeStamp(0.0896622303702);
    msg.setSource(12550U);
    msg.setSourceEntity(207U);
    msg.setDestination(29956U);
    msg.setDestinationEntity(20U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1209728707U;
    tmp_msg_0.start_lat = 0.0449239350026;
    tmp_msg_0.start_lon = 0.886718738421;
    tmp_msg_0.start_z = 0.827292316828;
    tmp_msg_0.start_z_units = 61U;
    tmp_msg_0.end_lat = 0.802941072213;
    tmp_msg_0.end_lon = 0.223042709873;
    tmp_msg_0.end_z = 0.801725079718;
    tmp_msg_0.end_z_units = 212U;
    tmp_msg_0.speed = 0.398446202112;
    tmp_msg_0.speed_units = 193U;
    tmp_msg_0.lradius = 0.840829349644;
    tmp_msg_0.flags = 173U;
    msg.control.set(tmp_msg_0);
    msg.duration = 169U;
    msg.custom.assign("AQJRGYEEMIIJCHEYSOMCCLJTRTZFFRULYNVKTBNSQCWAHXSZYKCSNBOMFJZZDQQSPWVAQRFXTIPCVGONIXEZBPPUJKBZQDYGPFFYBEQBQSCDTABTMOEDUKROWXWUKYRBCJLXGUOTNBLMKGRSWIJPWNGSAJHLIWZFEFDAMMXDANJVHADUVUADUNOLPOTVHYZMRUTDXOIBDGXPNSLGWKYJLTRPHEQYUXWFMMGHSEWPXVKZRFOVVGHVAIZHQELIC");

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
    msg.setTimeStamp(0.292654344772);
    msg.setSource(47652U);
    msg.setSourceEntity(40U);
    msg.setDestination(24136U);
    msg.setDestinationEntity(201U);
    msg.timeout = 30331U;
    msg.lat = 0.816977154589;
    msg.lon = 0.736135026641;
    msg.z = 0.587082907003;
    msg.z_units = 242U;
    msg.speed = 0.981033752527;
    msg.speed_units = 196U;
    msg.bearing = 0.509861284736;
    msg.cross_angle = 0.418623463397;
    msg.width = 0.205174069308;
    msg.length = 0.463739874152;
    msg.hstep = 0.124689171727;
    msg.coff = 196U;
    msg.alternation = 163U;
    msg.flags = 68U;
    msg.custom.assign("AYYJQBYAKXMJHPLLGSLPXVWAQYMFBKROTKHUHNZGGVMTLTQGONUQSCOEXRSCNVJHC");

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
    msg.setTimeStamp(0.063593028439);
    msg.setSource(56216U);
    msg.setSourceEntity(174U);
    msg.setDestination(20321U);
    msg.setDestinationEntity(51U);
    msg.timeout = 47379U;
    msg.lat = 0.992834387935;
    msg.lon = 0.0400825428522;
    msg.z = 0.782024186307;
    msg.z_units = 87U;
    msg.speed = 0.350029680544;
    msg.speed_units = 86U;
    msg.bearing = 0.492780522858;
    msg.cross_angle = 0.993020413103;
    msg.width = 0.606748764517;
    msg.length = 0.102596665218;
    msg.hstep = 0.987005677191;
    msg.coff = 224U;
    msg.alternation = 129U;
    msg.flags = 86U;
    msg.custom.assign("KVLNBXTCLXWKMIHWENAOFWDAGZSAWKIVNANRTMCZFSJIVDYDRXFQBYPDIQQPZUUOJAWHRKGEXAYSGXJUSKMRSFIGZYCMRNTCBQWTURXJBEIPMBAVWQOCTTUEZJGVTNSTPMLEKNXBOGXFOALQGBINYLPOPMRHCVKIFIHSMHMKTGD");

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
    msg.setTimeStamp(0.0370623015031);
    msg.setSource(10249U);
    msg.setSourceEntity(117U);
    msg.setDestination(10774U);
    msg.setDestinationEntity(253U);
    msg.timeout = 32028U;
    msg.lat = 0.114981575506;
    msg.lon = 0.436860257892;
    msg.z = 0.504973497178;
    msg.z_units = 34U;
    msg.speed = 0.269639968457;
    msg.speed_units = 49U;
    msg.bearing = 0.400312661462;
    msg.cross_angle = 0.657218295382;
    msg.width = 0.560877061833;
    msg.length = 0.806189025093;
    msg.hstep = 0.799217326462;
    msg.coff = 51U;
    msg.alternation = 131U;
    msg.flags = 197U;
    msg.custom.assign("GOUSSMGCMQBCITVFQFQWGYFFCHNQRLKSFQXFXJTRMJKDAILJBQEZOBTHARUTOREOCVAOQHWCMPHXLFLWYUPYKOFBZ");

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
    msg.setTimeStamp(0.0381963907897);
    msg.setSource(37114U);
    msg.setSourceEntity(161U);
    msg.setDestination(59597U);
    msg.setDestinationEntity(57U);
    msg.timeout = 48841U;
    msg.lat = 0.514345537172;
    msg.lon = 0.372212141695;
    msg.z = 0.699084400483;
    msg.z_units = 90U;
    msg.speed = 0.356626854378;
    msg.speed_units = 3U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0533393559009;
    tmp_msg_0.y = 0.0451515662322;
    tmp_msg_0.z = 0.782543170646;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ADMDHHBCSQFDXUWGKIKKZHNRWCNAYORECLJDIKXQPYQJLXEPGYILVQXSTRRNKMSGVZEKQMMCMBXSSGESBVPKWVQBDRJYMMVDVCPIKAZEOZTFTGVJ");

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
    msg.setTimeStamp(0.705392761827);
    msg.setSource(30624U);
    msg.setSourceEntity(26U);
    msg.setDestination(25031U);
    msg.setDestinationEntity(123U);
    msg.timeout = 65134U;
    msg.lat = 0.293126600776;
    msg.lon = 0.480311421331;
    msg.z = 0.414799525086;
    msg.z_units = 42U;
    msg.speed = 0.906342834612;
    msg.speed_units = 176U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.149460369936;
    tmp_msg_0.y = 0.990318723494;
    tmp_msg_0.z = 0.313745971278;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZQQXHGQWMMDTSVPBUTCWFFBNTJTDZMCJKADOUJLIUSEFSXOAMAURWCVXDRWRRMBIZLCONQHIOJJYOEGZQLPFMCITTKAAVNHDKFSGYLWNGOTNELVFACDMIYQZPLQWFMYKBXPBIJOPCUAOLJEHKJVKVGXDSXXGOFZYDCYEDZVLQEJIYGMNBQSXNPFYBEZVKRTURVLICUTNXECRHZGQAWZSFPHKBTINUASB");

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
    msg.setTimeStamp(0.77350708395);
    msg.setSource(3558U);
    msg.setSourceEntity(232U);
    msg.setDestination(33162U);
    msg.setDestinationEntity(242U);
    msg.timeout = 58766U;
    msg.lat = 0.527435215664;
    msg.lon = 0.0749931575607;
    msg.z = 0.136024480072;
    msg.z_units = 163U;
    msg.speed = 0.316742804015;
    msg.speed_units = 76U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.147817714849;
    tmp_msg_0.y = 0.52226618019;
    tmp_msg_0.z = 0.490288878596;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GYODPQGKZNFSTJNVGIMHYGZJOONBEKVQRVPBOWQCCLTIBJIXMUCJBLWMONHBYZRHQVSELPRCGKBAEYYTBNOEFXOGRQILTZRNQEAEZREQXXNZASDKZVYULIZCVXNIUDSDJWOKHXJWIHTPHXHRPPPANWDLRGFUMCLDJPJJYAUNURYALZDPWVSWC");

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
    msg.setTimeStamp(0.968305042514);
    msg.setSource(59097U);
    msg.setSourceEntity(203U);
    msg.setDestination(3867U);
    msg.setDestinationEntity(102U);
    msg.x = 0.933931552498;
    msg.y = 0.272391861797;
    msg.z = 0.218177128213;

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
    msg.setTimeStamp(0.981959694314);
    msg.setSource(18583U);
    msg.setSourceEntity(116U);
    msg.setDestination(62473U);
    msg.setDestinationEntity(150U);
    msg.x = 0.770846855689;
    msg.y = 0.781914344403;
    msg.z = 0.910356687704;

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
    msg.setTimeStamp(0.241296439933);
    msg.setSource(6644U);
    msg.setSourceEntity(134U);
    msg.setDestination(53467U);
    msg.setDestinationEntity(77U);
    msg.x = 0.0563621710065;
    msg.y = 0.180521779294;
    msg.z = 0.508686629635;

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
    msg.setTimeStamp(0.638973963388);
    msg.setSource(64651U);
    msg.setSourceEntity(1U);
    msg.setDestination(63581U);
    msg.setDestinationEntity(212U);
    msg.timeout = 63185U;
    msg.lat = 0.254747571577;
    msg.lon = 0.897045199096;
    msg.z = 0.520561741597;
    msg.z_units = 36U;
    msg.amplitude = 0.309907404336;
    msg.pitch = 0.522086407499;
    msg.speed = 0.154877313398;
    msg.speed_units = 79U;
    msg.custom.assign("CGZADBCXRCOSWQTEFANYLHUDFYJLHKUNWMEWWAPFXJDJDMNRDDNVYTWIZZBRBMLUENSLQXSDUIFJPWORJYCYLSEOGWBPWAUJSMKRWYGZOOMKDOBYVNUPQPOCVXZ");

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
    msg.setTimeStamp(0.423743575029);
    msg.setSource(8820U);
    msg.setSourceEntity(245U);
    msg.setDestination(6690U);
    msg.setDestinationEntity(170U);
    msg.timeout = 17216U;
    msg.lat = 0.273624007538;
    msg.lon = 0.453383542888;
    msg.z = 0.691283023818;
    msg.z_units = 95U;
    msg.amplitude = 0.0499386059899;
    msg.pitch = 0.201114305348;
    msg.speed = 0.266602530805;
    msg.speed_units = 129U;
    msg.custom.assign("ZBRVIYIPPOBRZQCOMQOPHDBVKNLRAAUYBHFOEFZWDSHGNADUBDZL");

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
    msg.setTimeStamp(0.501721431565);
    msg.setSource(22311U);
    msg.setSourceEntity(248U);
    msg.setDestination(40552U);
    msg.setDestinationEntity(81U);
    msg.timeout = 48938U;
    msg.lat = 0.590347602776;
    msg.lon = 0.0378530452586;
    msg.z = 0.932769820753;
    msg.z_units = 166U;
    msg.amplitude = 0.368159413445;
    msg.pitch = 0.0396861202073;
    msg.speed = 0.145265831768;
    msg.speed_units = 25U;
    msg.custom.assign("PCGVMUZIFQIBVQKSCJEWCHRRFRYLYSLNTERLDDENINIAGNBEQSOZIYTCHMBHYUTBLODYWBHMTKXTJZLQMWYVPRUPGGKEISBWUXQKKUPBYNKDLJTKLCEQMBROOHOPDXPKCASMTJJVLCJNFADSSVPDFAABRHWZZCWPUMIQJNGZGNXPCXQFYEVVMUBXHZROGXVIKWAAVUJVZZRKXSGHIGOL");

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
    msg.setTimeStamp(0.0296903321238);
    msg.setSource(51479U);
    msg.setSourceEntity(253U);
    msg.setDestination(12081U);
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
    msg.setTimeStamp(0.0201504792162);
    msg.setSource(61618U);
    msg.setSourceEntity(113U);
    msg.setDestination(9594U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.633918669095);
    msg.setSource(7060U);
    msg.setSourceEntity(44U);
    msg.setDestination(1695U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.707111056451);
    msg.setSource(28897U);
    msg.setSourceEntity(213U);
    msg.setDestination(31588U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.475656575395;
    msg.lon = 0.976306837599;
    msg.z = 0.491735834457;
    msg.z_units = 178U;
    msg.radius = 0.626677110423;
    msg.duration = 60158U;
    msg.speed = 0.851306966242;
    msg.speed_units = 23U;
    msg.custom.assign("ESGHDPNZMPWEKEGPZJSNRCILMOYCURFDGYJBGXQSAJHTJYFUMQUCJKSWTTDGGLMZQPEABUMNYMBCVEUMUTHFQVXTONIKDZQYBEZDHYMYRBJPDHEZIGCRRRPVFBDXLAWNLUPCLFHEAXOWNBNWGXCIVUIQSHFLLPJHSLNFIQHWIQVGZMXIWKOERCDEIZOADNJCSVDXURQRXOZWSAWLXJROTTVUALKTJMOFAGKZTBFKXQYKOCVOKYPAYBVB");

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
    msg.setTimeStamp(0.489818074829);
    msg.setSource(4414U);
    msg.setSourceEntity(97U);
    msg.setDestination(44133U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.548918412446;
    msg.lon = 0.41449383772;
    msg.z = 0.52508191436;
    msg.z_units = 16U;
    msg.radius = 0.769780157738;
    msg.duration = 12237U;
    msg.speed = 0.737282967444;
    msg.speed_units = 239U;
    msg.custom.assign("OOXADXOJTWSIRRIPMBJHNOGCUVRBYNYCQWFMWMLRTFLWFYTQFVGBXJQCJXGRTAKDVDKCFCGGNKQIEOHWYIARZLSQTWBDAVIREIOIUKLVSZLLFMLARDABNCXJJWLELYWOMGJHIKFMUFABRQJEMGTNVBCRHDAMVKWZHANXYEZPUSMEPSSYKUPHDYOZKFTXFUQOJPGVOSVGDCHUPNMUPYTSDNXYLHECZAKHETPPXCW");

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
    msg.setTimeStamp(0.0196168864029);
    msg.setSource(20486U);
    msg.setSourceEntity(75U);
    msg.setDestination(50440U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.191007119279;
    msg.lon = 0.404146251831;
    msg.z = 0.821889430139;
    msg.z_units = 186U;
    msg.radius = 0.650296017196;
    msg.duration = 55830U;
    msg.speed = 0.285016230852;
    msg.speed_units = 78U;
    msg.custom.assign("OUHRFLQEWEAKH");

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
    msg.setTimeStamp(0.802322462597);
    msg.setSource(20931U);
    msg.setSourceEntity(198U);
    msg.setDestination(61719U);
    msg.setDestinationEntity(123U);
    msg.timeout = 54030U;
    msg.flags = 217U;
    msg.lat = 0.444763434613;
    msg.lon = 0.69901706651;
    msg.start_z = 0.284646491761;
    msg.start_z_units = 155U;
    msg.end_z = 0.969197139999;
    msg.end_z_units = 206U;
    msg.radius = 0.626805361541;
    msg.speed = 0.987624936648;
    msg.speed_units = 84U;
    msg.custom.assign("GMTYCESDJJTQMWJLUWLEXEPONKAUWZLIQIYCTDYJMZUGPDFEZOVNQMPKFSBRFEDFPXUNFWZHVCMEXICIFWUQRDIIRFMRRUGOGSTKSPQVISRNMRACBJHWXZNFEITKXLYSGABEXXVLQDKPDBHVBAKGHWEXHDJOSAKJPMANYZNHMNBWOHRUMRLLYNIYSYKUVOWQXCVCIUOQA");

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
    msg.setTimeStamp(0.0709200652293);
    msg.setSource(30578U);
    msg.setSourceEntity(228U);
    msg.setDestination(53144U);
    msg.setDestinationEntity(102U);
    msg.timeout = 54600U;
    msg.flags = 223U;
    msg.lat = 0.610795387004;
    msg.lon = 0.432092288377;
    msg.start_z = 0.615750953792;
    msg.start_z_units = 220U;
    msg.end_z = 0.549918655899;
    msg.end_z_units = 166U;
    msg.radius = 0.589769008454;
    msg.speed = 0.243706452469;
    msg.speed_units = 195U;
    msg.custom.assign("POVMBHFHYEYEHBHGNSUFPKSELVKIGJPRYWRYTVWHSUKDHYSQKRBFLSDXNCDHDQFTCGVHLPGBYVYVMAAACTEGSFSQFEMNQZCXWNBROZAIIQTBMQQGNTKZMXPNOUJVOLJARKCOHMOQDPDKZOXYZEXJTNBIUFVLTAYJUEIXVHUDINLIZRCJLGBRMPAYWWVFCIERJUOLQMLPESBWRCGKZTJOGXSETSGNJ");

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
    msg.setTimeStamp(0.50554156858);
    msg.setSource(51527U);
    msg.setSourceEntity(194U);
    msg.setDestination(33129U);
    msg.setDestinationEntity(177U);
    msg.timeout = 13717U;
    msg.flags = 111U;
    msg.lat = 0.932849950953;
    msg.lon = 0.226984960708;
    msg.start_z = 0.47681049887;
    msg.start_z_units = 155U;
    msg.end_z = 0.738976283718;
    msg.end_z_units = 40U;
    msg.radius = 0.801831215644;
    msg.speed = 0.915461605635;
    msg.speed_units = 43U;
    msg.custom.assign("OWCETCHSJAIAHTQIROHSWIWMNVRMKNECOLKMAMQBLRKBWMMIRPIOFBFPXACEZHUBGYVWPTRSFTSUV");

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
    msg.setTimeStamp(0.36192308596);
    msg.setSource(30087U);
    msg.setSourceEntity(179U);
    msg.setDestination(47661U);
    msg.setDestinationEntity(96U);
    msg.timeout = 21444U;
    msg.lat = 0.89152972258;
    msg.lon = 0.811772250451;
    msg.z = 0.526035876203;
    msg.z_units = 71U;
    msg.speed = 0.306919516453;
    msg.speed_units = 191U;
    msg.custom.assign("JOMRNYYLQXEONPFSFHTDHKIKGXKQBBUGHOVHQEPQIHAMSVFGBAWVFWZPKVYKSLCAVDFMUNSJJNMZ");

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
    msg.setTimeStamp(0.0341054733855);
    msg.setSource(39990U);
    msg.setSourceEntity(216U);
    msg.setDestination(43354U);
    msg.setDestinationEntity(56U);
    msg.timeout = 30908U;
    msg.lat = 0.191943373933;
    msg.lon = 0.823205222808;
    msg.z = 0.915608271455;
    msg.z_units = 248U;
    msg.speed = 0.655834730128;
    msg.speed_units = 87U;
    msg.custom.assign("FUHOIOSLPKIECQIDDOLFDPQJSYMNNVF");

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
    msg.setTimeStamp(0.115416914956);
    msg.setSource(51935U);
    msg.setSourceEntity(67U);
    msg.setDestination(38901U);
    msg.setDestinationEntity(179U);
    msg.timeout = 40306U;
    msg.lat = 0.514408656457;
    msg.lon = 0.160336089289;
    msg.z = 0.258172323578;
    msg.z_units = 175U;
    msg.speed = 0.10616126234;
    msg.speed_units = 106U;
    msg.custom.assign("NRBOOPBWOSQSMRDDJEXMMRABVUBJIUETNYTTWTMBUANSOLZCBVGLLCOTRQJORJRLSPPVRWFPKWLDDPKKPOHIAHIWYHWIGZFCEHHLXBJCDADUPHQVGSGJWWYUSTAVRDEAEFTQUFJZFJHSBQGSBYXPXCFVZIVIZLNYNRJSALYPKXHNMFICKXGIEUZXMLUKHOW");

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
    msg.setTimeStamp(0.877151086716);
    msg.setSource(49956U);
    msg.setSourceEntity(247U);
    msg.setDestination(59130U);
    msg.setDestinationEntity(214U);
    msg.x = 0.934992444062;
    msg.y = 0.720933837255;
    msg.z = 0.976609694349;
    msg.t = 0.292633599175;

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
    msg.setTimeStamp(0.887840245392);
    msg.setSource(11239U);
    msg.setSourceEntity(183U);
    msg.setDestination(17039U);
    msg.setDestinationEntity(254U);
    msg.x = 0.969482464728;
    msg.y = 0.420196351603;
    msg.z = 0.545928572913;
    msg.t = 0.0198287359058;

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
    msg.setTimeStamp(0.141347652622);
    msg.setSource(38759U);
    msg.setSourceEntity(18U);
    msg.setDestination(51017U);
    msg.setDestinationEntity(23U);
    msg.x = 0.348033235279;
    msg.y = 0.269747641822;
    msg.z = 0.555982035965;
    msg.t = 0.29482635292;

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
    msg.setTimeStamp(0.683324981474);
    msg.setSource(46990U);
    msg.setSourceEntity(107U);
    msg.setDestination(13869U);
    msg.setDestinationEntity(37U);
    msg.timeout = 30449U;
    msg.name.assign("FYJCDEAZMAVWYQWMCNPLRUXJLZSHWOADL");
    msg.custom.assign("QEBDJBZNYIWZXEPOYUYCFXJWURAHLNMVFQTIEAPFHRGGHLDNZWRFDRUQLNANSAGRUBIKDRVZMQGWWOQMRBNJOVMVQZAILAXGPOKWCSANHLTETCSWEPATCKCHHICBPNQRVHMSVKBHISEWTXPBKJLSJQOYTJLFRTMKUPECYFOEYDTJPXIAUVDZKZMDXFSBTMOXYFIQKCSFLNGBFPGWPDYLTRUG");

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
    msg.setTimeStamp(0.0786814716189);
    msg.setSource(26377U);
    msg.setSourceEntity(170U);
    msg.setDestination(19312U);
    msg.setDestinationEntity(71U);
    msg.timeout = 5686U;
    msg.name.assign("FMMDYQEOQFEHPPGJEZIHKIHVYEKIYOLABSCNSCZVACASPMTVTKKETGXBWNLGUCZIMGKLZNPKTADKROAWRPARZFGALOMZXCQDIUSPZXEHPWSDHUVVQPZLSWYURJQCFTHXDD");
    msg.custom.assign("AEDIYSFZMKTBDSZBYGSQNNNFZAPDXWXXXBENPUJOEFOSTLQYVXPIJGHAZXURWFHLFCFZIST");

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
    msg.setTimeStamp(0.782932944311);
    msg.setSource(29372U);
    msg.setSourceEntity(205U);
    msg.setDestination(34749U);
    msg.setDestinationEntity(185U);
    msg.timeout = 49675U;
    msg.name.assign("GNDVRLYHARWLYYENPWDBJARNOFVUGYSME");
    msg.custom.assign("RPAJLPQHRPIIPVLIKXPMRCDFHKIWTEOVOGECNPECHXSTKSEYUDBWACSKNLKIWDFREZRKUTBXQGAIYVRRAZWCH");

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
    msg.setTimeStamp(0.098244567098);
    msg.setSource(59557U);
    msg.setSourceEntity(141U);
    msg.setDestination(58388U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.618336810627;
    msg.lon = 0.019354227929;
    msg.z = 0.925882444467;
    msg.z_units = 32U;
    msg.speed = 0.125669281786;
    msg.speed_units = 235U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.903171822531;
    tmp_msg_0.y = 0.821779386065;
    tmp_msg_0.z = 0.950246195207;
    tmp_msg_0.t = 0.912959636369;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.0455863121885;
    msg.custom.assign("EFNQHPEPMEWBNUWVHGTYSEYQSMFRJHQCIZUYMKOREOXFGPKKXHXULSFOBOGHQIARZJVTNGQSGTYSDIFCXEMCOLFBNRKPNRGFLCOWYXWDXYEMFKHBKDALSBQWVMVDWOIZAOIOIYPIJTQCQVCTLZSNIBURPBHDZQCW");

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
    msg.setTimeStamp(0.750579853859);
    msg.setSource(14125U);
    msg.setSourceEntity(141U);
    msg.setDestination(22367U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.969330043662;
    msg.lon = 0.908041571958;
    msg.z = 0.417705271868;
    msg.z_units = 237U;
    msg.speed = 0.0224663000914;
    msg.speed_units = 11U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0560756156257;
    tmp_msg_0.y = 0.0922244440152;
    tmp_msg_0.z = 0.794255607243;
    tmp_msg_0.t = 0.779805295321;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.226199826196;
    msg.custom.assign("HBGYHMIPYLCZUZJSGMMNNVCKEWHVDYMJRQBCRCMVQIPFWAGASDLUKKTFNAGSPWGQONKEJOSARJYLHMNUMJMYXOFWFEZFQDFGEHQLIMYCHPZOVRVXXSGIDQWMKPLDDRZXAILRQACLGWQDNWTRXVEDSXYSAJ");

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
    msg.setTimeStamp(0.653136029537);
    msg.setSource(849U);
    msg.setSourceEntity(110U);
    msg.setDestination(16103U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.396862756438;
    msg.lon = 0.774541874683;
    msg.z = 0.841591455321;
    msg.z_units = 104U;
    msg.speed = 0.233469635238;
    msg.speed_units = 111U;
    msg.start_time = 0.197928272345;
    msg.custom.assign("CALJFLBORSMOORFTPITXNVYSSWKQISCGYMLTYZHDRMNHJFFAYXNVBUPGYNLJUDLAOMJHVVRIXXNIZMHJLPOQSEKSXAFDOREDSIRWMPWXYSCEGHXKEMRNCAF");

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
    msg.setTimeStamp(0.743449896238);
    msg.setSource(32082U);
    msg.setSourceEntity(182U);
    msg.setDestination(32172U);
    msg.setDestinationEntity(56U);
    msg.vid = 9043U;
    msg.off_x = 0.264413538089;
    msg.off_y = 0.553050187761;
    msg.off_z = 0.479544893584;

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
    msg.setTimeStamp(0.800555697707);
    msg.setSource(63464U);
    msg.setSourceEntity(20U);
    msg.setDestination(7213U);
    msg.setDestinationEntity(193U);
    msg.vid = 28756U;
    msg.off_x = 0.111468748445;
    msg.off_y = 0.641871055204;
    msg.off_z = 0.881814422707;

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
    msg.setTimeStamp(0.859072478843);
    msg.setSource(29640U);
    msg.setSourceEntity(230U);
    msg.setDestination(21032U);
    msg.setDestinationEntity(215U);
    msg.vid = 46772U;
    msg.off_x = 0.626739292286;
    msg.off_y = 0.132072440278;
    msg.off_z = 0.707309080146;

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
    msg.setTimeStamp(0.39077948806);
    msg.setSource(8789U);
    msg.setSourceEntity(212U);
    msg.setDestination(15503U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.465982234736);
    msg.setSource(9530U);
    msg.setSourceEntity(127U);
    msg.setDestination(20260U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.300244390652);
    msg.setSource(29338U);
    msg.setSourceEntity(161U);
    msg.setDestination(6087U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.000610168562926);
    msg.setSource(54793U);
    msg.setSourceEntity(186U);
    msg.setDestination(65320U);
    msg.setDestinationEntity(45U);
    msg.mid = 40732U;

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
    msg.setTimeStamp(0.22209893632);
    msg.setSource(50764U);
    msg.setSourceEntity(241U);
    msg.setDestination(64393U);
    msg.setDestinationEntity(100U);
    msg.mid = 53058U;

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
    msg.setTimeStamp(0.552832290022);
    msg.setSource(40116U);
    msg.setSourceEntity(176U);
    msg.setDestination(57271U);
    msg.setDestinationEntity(79U);
    msg.mid = 24323U;

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
    msg.setTimeStamp(0.430408280637);
    msg.setSource(57366U);
    msg.setSourceEntity(154U);
    msg.setDestination(735U);
    msg.setDestinationEntity(66U);
    msg.state = 92U;
    msg.eta = 26832U;
    msg.info.assign("BTECJUTFNRANYDNRXYMBQVTHEYMZOFVEVRIRWKBOEXYSGZOMLLGJVGJIEVYBWQHWXUNNSNDUSQDIXOOIEAJKDGAJNYLOLXCAQSAVCFWYFCKLPKHMKKLRDJHSQAJUHOMTDQPCRXQVIFQMNTFRSTBGLGEHXUGCJSDS");

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
    msg.setTimeStamp(0.0294241792963);
    msg.setSource(36995U);
    msg.setSourceEntity(4U);
    msg.setDestination(42921U);
    msg.setDestinationEntity(120U);
    msg.state = 244U;
    msg.eta = 15708U;
    msg.info.assign("VMGAYMKEWXSMNWZSETOGIKWKAHKBSXCFUDIOMOQWJEDJFYATXZMSIQQONEPDYWNBOLVRGIUQJLKOZVKYLQYITMLPNVACTPPWQHKMAZYUWTBSKRZEMQCNFZHTZAJOKNXDLO");

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
    msg.setTimeStamp(0.550235292965);
    msg.setSource(24114U);
    msg.setSourceEntity(233U);
    msg.setDestination(49888U);
    msg.setDestinationEntity(86U);
    msg.state = 45U;
    msg.eta = 58632U;
    msg.info.assign("RMROURVMOXAZLPSEBDSOCHVLDUBDKFWQMPZELBBKWQQTYGJCVFUANPSJVPCEUMEWPKGWGRCOOKIJZFTRCJQKOAELXWHABSCMHUESFETXHFMYSQINAXBTNHFUYJLVTVUSSEBSRWPXYCCRBZQDDBNUXRKQIFWHDXDAOEMGFLGHIJFKMOMNYUNZONXWPA");

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
    msg.setTimeStamp(0.290518960247);
    msg.setSource(60669U);
    msg.setSourceEntity(198U);
    msg.setDestination(21529U);
    msg.setDestinationEntity(142U);
    msg.system = 5292U;
    msg.duration = 16254U;
    msg.speed = 0.938672486995;
    msg.speed_units = 143U;
    msg.x = 0.209664425149;
    msg.y = 0.481245392404;
    msg.z = 0.0742992377976;
    msg.z_units = 119U;

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
    msg.setTimeStamp(0.125106594292);
    msg.setSource(28900U);
    msg.setSourceEntity(176U);
    msg.setDestination(6919U);
    msg.setDestinationEntity(112U);
    msg.system = 63199U;
    msg.duration = 10080U;
    msg.speed = 0.0266803783128;
    msg.speed_units = 177U;
    msg.x = 0.385642925144;
    msg.y = 0.311261497741;
    msg.z = 0.51675906206;
    msg.z_units = 130U;

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
    msg.setTimeStamp(0.274749296961);
    msg.setSource(10852U);
    msg.setSourceEntity(40U);
    msg.setDestination(12490U);
    msg.setDestinationEntity(218U);
    msg.system = 60200U;
    msg.duration = 6830U;
    msg.speed = 0.679131915402;
    msg.speed_units = 24U;
    msg.x = 0.675783864047;
    msg.y = 0.202231598612;
    msg.z = 0.130550491358;
    msg.z_units = 198U;

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
    msg.setTimeStamp(0.405047781507);
    msg.setSource(39358U);
    msg.setSourceEntity(151U);
    msg.setDestination(47296U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.701491189456;
    msg.lon = 0.116337859813;
    msg.speed = 0.594831572726;
    msg.speed_units = 140U;
    msg.duration = 34337U;
    msg.sys_a = 3447U;
    msg.sys_b = 48653U;
    msg.move_threshold = 0.203948361587;

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
    msg.setTimeStamp(0.349260831057);
    msg.setSource(13700U);
    msg.setSourceEntity(131U);
    msg.setDestination(47947U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.448483010367;
    msg.lon = 0.540407047739;
    msg.speed = 0.930396687152;
    msg.speed_units = 83U;
    msg.duration = 16263U;
    msg.sys_a = 17114U;
    msg.sys_b = 57274U;
    msg.move_threshold = 0.484466493248;

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
    msg.setTimeStamp(0.727645089596);
    msg.setSource(31680U);
    msg.setSourceEntity(105U);
    msg.setDestination(58262U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.547366043891;
    msg.lon = 0.800342849367;
    msg.speed = 0.574819182936;
    msg.speed_units = 2U;
    msg.duration = 65127U;
    msg.sys_a = 25167U;
    msg.sys_b = 33987U;
    msg.move_threshold = 0.156430761601;

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
    msg.setTimeStamp(0.32868469786);
    msg.setSource(11531U);
    msg.setSourceEntity(54U);
    msg.setDestination(6289U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.187408316624;
    msg.lon = 0.496087842484;
    msg.z = 0.613433966249;
    msg.z_units = 208U;
    msg.speed = 0.325716140012;
    msg.speed_units = 18U;
    msg.custom.assign("HITJBKLLTSBXKKCOAOBLLWBKGJHAVZYUPGNXSKMNLFFPMEEMJDYTYJRIJYRAHRMVNIHPQGGNCMEUUDYZJENTGJVWJWXZPDCQFZXZLIXCPVSSHQXACPNUOMDEHVZVOURKUZQWSOWDKFCWLFHSTPNHLBIODYKBRGJNKCFXPRDIBFAGNYUGVOQRFM");

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
    msg.setTimeStamp(0.913564687341);
    msg.setSource(56953U);
    msg.setSourceEntity(170U);
    msg.setDestination(41123U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.219981554776;
    msg.lon = 0.727056596645;
    msg.z = 0.287192821763;
    msg.z_units = 111U;
    msg.speed = 0.281088486715;
    msg.speed_units = 249U;
    msg.custom.assign("CJJQFUEPVEQRBLMSFJONGDPLLLSZFSBNFRPYEOQZBCIRGBTEZWIMXXTJ");

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
    msg.setTimeStamp(0.869311553427);
    msg.setSource(8205U);
    msg.setSourceEntity(206U);
    msg.setDestination(5246U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.940893521332;
    msg.lon = 0.444385860268;
    msg.z = 0.982116782921;
    msg.z_units = 45U;
    msg.speed = 0.939207971563;
    msg.speed_units = 194U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.362038261632;
    tmp_msg_0.lon = 0.138630181406;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ILMPWDVEHVPTRCCQBRVBKYXRSHGGRVJRSUYYUIULXCIPRCZQQRLZAKBPTCKQLSIOAMWAEVWNWFFSFUVKXNDNEYCXGMEJKAREQHDODWBWAJHNWBYGYDYLTGUJ");

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
    msg.setTimeStamp(0.599477951955);
    msg.setSource(49567U);
    msg.setSourceEntity(129U);
    msg.setDestination(38719U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.7739253378;
    msg.lon = 0.241263603486;

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
    msg.setTimeStamp(0.89878559446);
    msg.setSource(51391U);
    msg.setSourceEntity(40U);
    msg.setDestination(63037U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.735673774903;
    msg.lon = 0.0949781854435;

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
    msg.setTimeStamp(0.264947067811);
    msg.setSource(16202U);
    msg.setSourceEntity(159U);
    msg.setDestination(38948U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.31894319858;
    msg.lon = 0.612544826575;

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
    msg.setTimeStamp(0.131909551538);
    msg.setSource(43829U);
    msg.setSourceEntity(129U);
    msg.setDestination(55954U);
    msg.setDestinationEntity(214U);
    msg.timeout = 5961U;
    msg.lat = 0.380292427409;
    msg.lon = 0.174039398923;
    msg.z = 0.552758205495;
    msg.z_units = 84U;
    msg.pitch = 0.689938242335;
    msg.amplitude = 0.204888837301;
    msg.duration = 9388U;
    msg.speed = 0.806206281168;
    msg.speed_units = 59U;
    msg.radius = 0.258686167325;
    msg.direction = 186U;
    msg.custom.assign("XHZCCHDYPVISOISDYOTIBUTWAGJBQURKQJGPTCNSSGUEMNGEJOAGLGMRTISFWVBWJKLCYKRKKXARASTQZHIAXFUKLMWYITYEGSEICJSMRAPGDONNOQKOXYACUEHOXBMMPRUOXVAHKFMEIETTDFLWCLOZVJBLJEUBMVPCYWZIQFDVZN");

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
    msg.setTimeStamp(0.777248819749);
    msg.setSource(922U);
    msg.setSourceEntity(62U);
    msg.setDestination(48847U);
    msg.setDestinationEntity(155U);
    msg.timeout = 15553U;
    msg.lat = 0.697738699056;
    msg.lon = 0.58562307414;
    msg.z = 0.373467049271;
    msg.z_units = 103U;
    msg.pitch = 0.27009018026;
    msg.amplitude = 0.13128346767;
    msg.duration = 18114U;
    msg.speed = 0.789355027574;
    msg.speed_units = 5U;
    msg.radius = 0.501254553464;
    msg.direction = 102U;
    msg.custom.assign("IWNOYMTXGJNSIMXZURIIIAGMLMDYBVHKUMAJINRWMSRSLQPHAEBBBHCBKZBJRYSGJPQYYWNSXGOKZNLENTFQZJULXEBCYSWWWMPTIFALTKDQOGKTSHQGDFCVHXUKCNOXYFKDJEJQWTJOEXHRTUJTIEVPOULGLMCVSQVZZETNWPNWLZXQYLPBYKMVKSCPUCXNIFVDDDO");

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
    msg.setTimeStamp(0.457985719241);
    msg.setSource(36202U);
    msg.setSourceEntity(14U);
    msg.setDestination(2010U);
    msg.setDestinationEntity(233U);
    msg.timeout = 26250U;
    msg.lat = 0.2440579446;
    msg.lon = 0.387067609489;
    msg.z = 0.556136522907;
    msg.z_units = 37U;
    msg.pitch = 0.202560099645;
    msg.amplitude = 0.0512889257151;
    msg.duration = 39247U;
    msg.speed = 0.284670942428;
    msg.speed_units = 20U;
    msg.radius = 0.857333767498;
    msg.direction = 157U;
    msg.custom.assign("JTKDDIWFEIZJXYDPCRWFBRZLUTJDBTVKTLUJLHEDIPRSALCHTJWFEADXXYYFFJENKKILCCADPMMWQEZUSHNKIYZSUKXJUMXPVFVTYGSPVDKYXVQVUBFCOHQNYZOOCRFYEPGTUB");

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
    msg.setTimeStamp(0.385102014444);
    msg.setSource(45008U);
    msg.setSourceEntity(80U);
    msg.setDestination(16680U);
    msg.setDestinationEntity(161U);
    msg.formation_name.assign("TBIUFOUZCTLFQYLEXAPQUTIQDRZUXESTJKYOGVPKVWEGMSKPCAGMBQWHYYRRKRPCACJHUMA");
    msg.reference_frame = 200U;
    msg.custom.assign("FXQFXJTCPCPYGXBONFSHJMW");

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
    msg.setTimeStamp(0.392722518927);
    msg.setSource(51756U);
    msg.setSourceEntity(194U);
    msg.setDestination(46567U);
    msg.setDestinationEntity(104U);
    msg.formation_name.assign("FBUNHGXQLTKDTWRYKVSXVBBBWUQFISPKVXLCVVOPLNHAHIGSZSTDIEPJDYNQRSTHKORPHYBGOCPGXMXFFOQZOUIAWCMAYFJKEURZAHUMGAZYJWPKZTBAOSIWXBJMZUDFECNILGIOJXBKVZEAWWVTTFNSSDDYPDUJPCCCEFHMNXMHBZPWNEXYTEMDNNLWVRSRETZQGJZLUFOKKQL");
    msg.reference_frame = 45U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 51536U;
    tmp_msg_0.off_x = 0.675148284255;
    tmp_msg_0.off_y = 0.932575888736;
    tmp_msg_0.off_z = 0.251868810219;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("XCONXFLHXBVXFJXEIQYUJOGLYOWDNGIHTJPLNBPLRCVACLDNZCFLYRMBVWUODIONKJSAREMPOZPJGWHZQSWKHIASFYBIQAIAHIFHUVBMQUDZTMWDNIZYCRBTJDKABOIODCXCRTAKHVUEXXLESBLEFMVTPKOKPNZYUDEMSU");

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
    msg.setTimeStamp(0.284766979591);
    msg.setSource(42804U);
    msg.setSourceEntity(59U);
    msg.setDestination(35856U);
    msg.setDestinationEntity(13U);
    msg.formation_name.assign("CMJZQDOFBJSXZLJOCAXWBWBIVZPILALSIQUAGH");
    msg.reference_frame = 113U;
    msg.custom.assign("LMBTGZILBY");

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
    msg.setTimeStamp(0.112783040289);
    msg.setSource(64717U);
    msg.setSourceEntity(216U);
    msg.setDestination(22679U);
    msg.setDestinationEntity(17U);
    msg.group_name.assign("VTDRESFHMUVKCEB");
    msg.formation_name.assign("EEJMSPMAKXYARLKWXQOSDLPUBEEHFVCRJNNQK");
    msg.plan_id.assign("KVIFUWHRRVTLFMVIWDDATTMYUOFMSDCRRMPYWTDPEXJEUADBVZPCGIZZXLT");
    msg.description.assign("OLIEWPMQEMHKVSYSBFIQBMGCSABJVFWACGMRNKPMTAGDVAHFYTCXZDTSRFIXFSHSKPBCNXMYKVOLKBUFPPZLRPOARJOSLCDUOYENQVYXHZJZEJGIWRXRWGIFPRHKNARQRFULKIUQIETDQBDIUVJGFZSXTQZWGPEODAYJUADQFLYLLANOWGVBUBTSTNCCHNKHWVCQUJNCLHHSDMPXOAWJJXGWILERIDYGVUTWXEMEOBTVMHYZZENXOZQMD");
    msg.leader_speed = 0.0909235540118;
    msg.leader_bank_lim = 0.227943937681;
    msg.pos_sim_err_lim = 0.75692167466;
    msg.pos_sim_err_wrn = 0.670236739745;
    msg.pos_sim_err_timeout = 51934U;
    msg.converg_max = 0.106399319788;
    msg.converg_timeout = 54309U;
    msg.comms_timeout = 34336U;
    msg.turb_lim = 0.403856167284;
    msg.custom.assign("JLYKIHJKJAKNWBOWTWALJUDOKLSDGIRJOYBGPZLNGRIEIBPUDWDZTJRZIYVUKIFLTNCITEPQRFGYYCCPAUXFRFUAXGMHBVB");

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
    msg.setTimeStamp(0.324169845936);
    msg.setSource(6120U);
    msg.setSourceEntity(192U);
    msg.setDestination(29585U);
    msg.setDestinationEntity(240U);
    msg.group_name.assign("PMIDXIVRCYVAWSSWJEKXLTJSJKVXNOZEKYSQBCXLHUWWIGWEGEXRUNZDXGONDVJEAUKKRIAHALOHZTIUFBFIOXKVO");
    msg.formation_name.assign("PGHREJYHMGOQXWENWNSLVEKBFBYFRHCENHGMXNMC");
    msg.plan_id.assign("DYUSOJLXWYHCMREGKIOMLXIFURSTJJGLHGKFUPCKMIUGVDLAOQDXPBCAPFBTJEPFVLAZOGZCVOZVBZHNUIIXSNKRYGHGEGLDQQMOOHPYEVBTGDRBUMHZPASVRWFJEKIIFZZTQRDBFCYQQDVWMWOHJBZMYNLIETVTKEMSSFXAXCNKDMVWCRRUEKSAZX");
    msg.description.assign("CTIHMDFMPAITBBOBLZLWOKPYDDAXROXRSJIPAZSGMRPZONBAKRYFLCWSCUJTVYXJSLLFUGFFTJTHEEYKNWQGAJDKBDUMLDKDRIPWWDVATEPMIZWCHJESCTBMAIOENSGCWXCLZRONFVVSVXZEXHCRNEMFQPAPVFXBEPNQGVYSLNJJ");
    msg.leader_speed = 0.654174676833;
    msg.leader_bank_lim = 0.164201236666;
    msg.pos_sim_err_lim = 0.14221400323;
    msg.pos_sim_err_wrn = 0.7804198101;
    msg.pos_sim_err_timeout = 5511U;
    msg.converg_max = 0.783733127457;
    msg.converg_timeout = 61409U;
    msg.comms_timeout = 45477U;
    msg.turb_lim = 0.841216252576;
    msg.custom.assign("YPSUZICJQSUNYDKVLJJGHFWNOSXGBMVRAHMVUKZIRWTFCAGJGRWOUKELTVHKAIBIAALDMBMZREVOCFFIHOMQEPWNEOGYTDPMLACVLPHLDEJVSKIFZWXYBUSUJFJQNRUVEGEANYXXBCYWQDMQTZKQDHLNJQTMSGDKGZYNXQ");

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
    msg.setTimeStamp(0.264183117176);
    msg.setSource(45508U);
    msg.setSourceEntity(143U);
    msg.setDestination(33083U);
    msg.setDestinationEntity(163U);
    msg.group_name.assign("ZYVRJVVCCDKMWZOJVPFPHAPLDFRRRSMFCEGFMOXYJBIPIEIKPMGRTJVYHJVTIAXGXOMZTXVBPYOSGYNVPDQUIKWUJSLWNCRENCGJCKTTVFZQAFQWOLYWNUCQSX");
    msg.formation_name.assign("CVLNMUDXNHMFKDYEKFAVNRBRWEGZDNIOZGWUUWQXIWUAKCUAGDLZFITUMORSOMTWKFPCQFEVVTNZQPSPHPTJOYDMBOSALEYSKZFPXVZEKXYTHAZZJWNXSWTHAUABIIRVBSFGFVNLECYQWIKSLHKXLCUNQHJBZSZIRBPKCMYXEGWAYCVNQCA");
    msg.plan_id.assign("ITKBAWLREIVSIAQHUEZMACQEVOMCSDCEMNWOWJFLKNZQUGVSEOMXXIBWGDZDNSFNOCADJFCLXHKYVYHCNPPIRKBNIYOXHHPQKOWAFOLYZAZJJZGOJSTNOMLGVPSZHZGGBVXPFEFPFTGHYBJDTQEYSBUURDYZIXFSPUCMTMKHCXERQTISBXUKGWJNARWUUAEJLRINMNFRREYXUKTWTMLVAIBDQKWHGTPHSQYPAOWLLUFJGDVVBX");
    msg.description.assign("UNLUJMWUNNJYDVDOZOSENRZZLCYKOQVLAWWMFRVQOCXLNRHQZKOPGYVISWHSIHXRAWUYDMYXQTKHAJKB");
    msg.leader_speed = 0.987995804559;
    msg.leader_bank_lim = 0.964275724655;
    msg.pos_sim_err_lim = 0.958609174801;
    msg.pos_sim_err_wrn = 0.907667460417;
    msg.pos_sim_err_timeout = 43414U;
    msg.converg_max = 0.927359874041;
    msg.converg_timeout = 48786U;
    msg.comms_timeout = 53989U;
    msg.turb_lim = 0.311904680793;
    msg.custom.assign("DNDYAEZRCPBKWIFWKBVZLGEBKNAFHTIZGAAKDUXDYZKORAPBUJZRWUCSRTVUPSEPVRGVNQTGTKDSWPWFSFAVYXLGWPSOQSJOAYQSTXXTKYFZOEJUZQTIJWLCMEVIXREOLEYUSRUMHBNHWBFEQHASONLJHTFMDZHLOWVXZKCFVMIYPRICWPUJLIKTPUMMGFMXXBYNACOPLXQJQGKV");

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
    msg.setTimeStamp(0.419937660153);
    msg.setSource(21869U);
    msg.setSourceEntity(119U);
    msg.setDestination(16558U);
    msg.setDestinationEntity(26U);
    msg.control_src = 32467U;
    msg.control_ent = 118U;
    msg.timeout = 0.0458264239395;
    msg.loiter_radius = 0.24330207386;
    msg.altitude_interval = 0.44338048164;

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
    msg.setTimeStamp(0.538281111249);
    msg.setSource(25495U);
    msg.setSourceEntity(33U);
    msg.setDestination(20001U);
    msg.setDestinationEntity(74U);
    msg.control_src = 38696U;
    msg.control_ent = 107U;
    msg.timeout = 0.0585628137025;
    msg.loiter_radius = 0.613311681199;
    msg.altitude_interval = 0.337561503368;

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
    msg.setTimeStamp(0.436797306405);
    msg.setSource(34474U);
    msg.setSourceEntity(242U);
    msg.setDestination(39856U);
    msg.setDestinationEntity(136U);
    msg.control_src = 8093U;
    msg.control_ent = 190U;
    msg.timeout = 0.359719914183;
    msg.loiter_radius = 0.866187643154;
    msg.altitude_interval = 0.651245510742;

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
    msg.setTimeStamp(0.945167612141);
    msg.setSource(21650U);
    msg.setSourceEntity(73U);
    msg.setDestination(7068U);
    msg.setDestinationEntity(180U);
    msg.flags = 182U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.39442252403;
    tmp_msg_0.speed_units = 206U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.697704001806;
    tmp_msg_1.z_units = 205U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.052938925284;
    msg.lon = 0.696808086332;
    msg.radius = 0.381729574676;

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
    msg.setTimeStamp(0.856631412184);
    msg.setSource(31617U);
    msg.setSourceEntity(83U);
    msg.setDestination(61311U);
    msg.setDestinationEntity(158U);
    msg.flags = 145U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.930393708855;
    tmp_msg_0.speed_units = 122U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.705756329329;
    tmp_msg_1.z_units = 164U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.49476384528;
    msg.lon = 0.506112743369;
    msg.radius = 0.842079119103;

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
    msg.setTimeStamp(0.365593325164);
    msg.setSource(39747U);
    msg.setSourceEntity(126U);
    msg.setDestination(43743U);
    msg.setDestinationEntity(53U);
    msg.flags = 2U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.445238534122;
    tmp_msg_0.speed_units = 231U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.951372623206;
    tmp_msg_1.z_units = 194U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.329038364477;
    msg.lon = 0.861112104804;
    msg.radius = 0.335549218533;

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
    msg.setTimeStamp(0.38424851442);
    msg.setSource(20076U);
    msg.setSourceEntity(227U);
    msg.setDestination(53547U);
    msg.setDestinationEntity(194U);
    msg.control_src = 5788U;
    msg.control_ent = 183U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 191U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.693013142207;
    tmp_tmp_msg_0_0.speed_units = 11U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.259011947494;
    tmp_tmp_msg_0_1.z_units = 179U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.880278798859;
    tmp_msg_0.lon = 0.841887643578;
    tmp_msg_0.radius = 0.726584164958;
    msg.reference.set(tmp_msg_0);
    msg.state = 56U;
    msg.proximity = 178U;

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
    msg.setTimeStamp(0.673633068806);
    msg.setSource(8705U);
    msg.setSourceEntity(166U);
    msg.setDestination(64513U);
    msg.setDestinationEntity(192U);
    msg.control_src = 60273U;
    msg.control_ent = 133U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 132U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.700758310649;
    tmp_tmp_msg_0_0.speed_units = 23U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.578372744463;
    tmp_tmp_msg_0_1.z_units = 69U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.802598287075;
    tmp_msg_0.lon = 0.624380714783;
    tmp_msg_0.radius = 0.85172376695;
    msg.reference.set(tmp_msg_0);
    msg.state = 161U;
    msg.proximity = 26U;

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
    msg.setTimeStamp(0.477031589393);
    msg.setSource(56931U);
    msg.setSourceEntity(35U);
    msg.setDestination(31841U);
    msg.setDestinationEntity(78U);
    msg.control_src = 45995U;
    msg.control_ent = 54U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 192U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.574905170017;
    tmp_tmp_msg_0_0.speed_units = 161U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.99918765549;
    tmp_tmp_msg_0_1.z_units = 132U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.950966492509;
    tmp_msg_0.lon = 0.946191945725;
    tmp_msg_0.radius = 0.564549987667;
    msg.reference.set(tmp_msg_0);
    msg.state = 22U;
    msg.proximity = 178U;

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
    msg.setTimeStamp(0.607886032699);
    msg.setSource(7118U);
    msg.setSourceEntity(144U);
    msg.setDestination(2711U);
    msg.setDestinationEntity(73U);
    msg.ax_cmd = 0.0572422162176;
    msg.ay_cmd = 0.632486372068;
    msg.az_cmd = 0.672855006592;
    msg.ax_des = 0.696482550318;
    msg.ay_des = 0.003787353465;
    msg.az_des = 0.701695112389;
    msg.virt_err_x = 0.481821091686;
    msg.virt_err_y = 0.303691016743;
    msg.virt_err_z = 0.939032575313;
    msg.surf_fdbk_x = 0.60221762938;
    msg.surf_fdbk_y = 0.628079622503;
    msg.surf_fdbk_z = 0.933142919387;
    msg.surf_unkn_x = 0.91520750761;
    msg.surf_unkn_y = 0.749014109218;
    msg.surf_unkn_z = 0.330802847039;
    msg.ss_x = 0.0595446773607;
    msg.ss_y = 0.740140767991;
    msg.ss_z = 0.657571089778;

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
    msg.setTimeStamp(0.466694562539);
    msg.setSource(29151U);
    msg.setSourceEntity(21U);
    msg.setDestination(41462U);
    msg.setDestinationEntity(128U);
    msg.ax_cmd = 0.772615926347;
    msg.ay_cmd = 0.826103642448;
    msg.az_cmd = 0.118998980913;
    msg.ax_des = 0.715420566781;
    msg.ay_des = 0.137454813772;
    msg.az_des = 0.220913152928;
    msg.virt_err_x = 0.675982345601;
    msg.virt_err_y = 0.392410009362;
    msg.virt_err_z = 0.443952437079;
    msg.surf_fdbk_x = 0.452666733351;
    msg.surf_fdbk_y = 0.659177086997;
    msg.surf_fdbk_z = 0.0920945438166;
    msg.surf_unkn_x = 0.677057274278;
    msg.surf_unkn_y = 0.236922936246;
    msg.surf_unkn_z = 0.120762844675;
    msg.ss_x = 0.315185130058;
    msg.ss_y = 0.800454048926;
    msg.ss_z = 0.964372690646;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QBFKRTWYAEOIZHJQLRSOPMTHTQAMQAYCKXMDSRNKJLWANBLGOWUGUOHVBDJPZMFOKDZGBLURVTBAJXSTWWESVCLVJEQFCTAZBYFVHJMZNWOXWJNOYIVDMDJECAQDGDYJFQRKNTGISHMZLWGPEPQOKRGIXNZYHMTGTP");
    tmp_msg_0.dist = 0.247918377742;
    tmp_msg_0.err = 0.66756223995;
    tmp_msg_0.ctrl_imp = 0.232156036554;
    tmp_msg_0.rel_dir_x = 0.889328671904;
    tmp_msg_0.rel_dir_y = 0.919134361333;
    tmp_msg_0.rel_dir_z = 0.863180538609;
    tmp_msg_0.err_x = 0.157974459116;
    tmp_msg_0.err_y = 0.779300537337;
    tmp_msg_0.err_z = 0.339175941547;
    tmp_msg_0.rf_err_x = 0.98695910404;
    tmp_msg_0.rf_err_y = 0.1152929296;
    tmp_msg_0.rf_err_z = 0.456798211002;
    tmp_msg_0.rf_err_vx = 0.591941322217;
    tmp_msg_0.rf_err_vy = 0.462028801606;
    tmp_msg_0.rf_err_vz = 0.715597204873;
    tmp_msg_0.ss_x = 0.968147523184;
    tmp_msg_0.ss_y = 0.0913158763611;
    tmp_msg_0.ss_z = 0.492788209533;
    tmp_msg_0.virt_err_x = 0.247881512222;
    tmp_msg_0.virt_err_y = 0.930216303488;
    tmp_msg_0.virt_err_z = 0.535481205988;
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
    msg.setTimeStamp(0.855300598878);
    msg.setSource(54316U);
    msg.setSourceEntity(91U);
    msg.setDestination(44076U);
    msg.setDestinationEntity(191U);
    msg.ax_cmd = 0.373792624091;
    msg.ay_cmd = 0.306009562201;
    msg.az_cmd = 0.136348100301;
    msg.ax_des = 0.975370368662;
    msg.ay_des = 0.180292093844;
    msg.az_des = 0.926655121543;
    msg.virt_err_x = 0.644127097846;
    msg.virt_err_y = 0.509914116617;
    msg.virt_err_z = 0.766040898646;
    msg.surf_fdbk_x = 0.247571167256;
    msg.surf_fdbk_y = 0.0322734634673;
    msg.surf_fdbk_z = 0.466193010794;
    msg.surf_unkn_x = 0.943452791436;
    msg.surf_unkn_y = 0.542780859546;
    msg.surf_unkn_z = 0.203103425448;
    msg.ss_x = 0.909883818214;
    msg.ss_y = 0.349475744465;
    msg.ss_z = 0.654967593175;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RJQJPHVIGWGWLMPWE");
    tmp_msg_0.dist = 0.993594387571;
    tmp_msg_0.err = 0.0536105784191;
    tmp_msg_0.ctrl_imp = 0.562623071418;
    tmp_msg_0.rel_dir_x = 0.771171579283;
    tmp_msg_0.rel_dir_y = 0.264478769764;
    tmp_msg_0.rel_dir_z = 0.00911696392359;
    tmp_msg_0.err_x = 0.808928038602;
    tmp_msg_0.err_y = 0.721903096391;
    tmp_msg_0.err_z = 0.770625505056;
    tmp_msg_0.rf_err_x = 0.0310191036739;
    tmp_msg_0.rf_err_y = 0.139678878395;
    tmp_msg_0.rf_err_z = 0.588263753787;
    tmp_msg_0.rf_err_vx = 0.507534916535;
    tmp_msg_0.rf_err_vy = 0.309341964636;
    tmp_msg_0.rf_err_vz = 0.0683739302842;
    tmp_msg_0.ss_x = 0.478873845259;
    tmp_msg_0.ss_y = 0.66514122912;
    tmp_msg_0.ss_z = 0.0995376478208;
    tmp_msg_0.virt_err_x = 0.892820948152;
    tmp_msg_0.virt_err_y = 0.11722105226;
    tmp_msg_0.virt_err_z = 0.799937358378;
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
    msg.setTimeStamp(0.836515487986);
    msg.setSource(37346U);
    msg.setSourceEntity(38U);
    msg.setDestination(27797U);
    msg.setDestinationEntity(126U);
    msg.s_id.assign("EJUADCNWBYTAQMIMRJOBWQCVWUWOSDYXVFICCUEQKAYNIHRAXQOAJBZFQRXRYLTCVAGKVSMUEMHUPJWDKKLFOEAINSHOGQISCQPZHPSZWDPDNEUOPTQVVPIFGWIYOABCGMBLYKHMGZTUKKUTVSNMTUIDTFRBJZC");
    msg.dist = 0.443257181845;
    msg.err = 0.0978939478498;
    msg.ctrl_imp = 0.0110313834679;
    msg.rel_dir_x = 0.324753354146;
    msg.rel_dir_y = 0.16078882805;
    msg.rel_dir_z = 0.182524346751;
    msg.err_x = 0.592309523803;
    msg.err_y = 0.759322184115;
    msg.err_z = 0.390571761942;
    msg.rf_err_x = 0.481217899109;
    msg.rf_err_y = 0.809823144947;
    msg.rf_err_z = 0.356097967032;
    msg.rf_err_vx = 0.371277601326;
    msg.rf_err_vy = 0.357600436471;
    msg.rf_err_vz = 0.174237256456;
    msg.ss_x = 0.680756422719;
    msg.ss_y = 0.33353155862;
    msg.ss_z = 0.313327382868;
    msg.virt_err_x = 0.646258870546;
    msg.virt_err_y = 0.159916771903;
    msg.virt_err_z = 0.408308865564;

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
    msg.setTimeStamp(0.426562310302);
    msg.setSource(22876U);
    msg.setSourceEntity(82U);
    msg.setDestination(54929U);
    msg.setDestinationEntity(103U);
    msg.s_id.assign("IUZSXRFWQXRCHVEYAFEIAHANQPROGHQXZGOJNFMCAUNQGKTQBSYENLSIJBWSKGRQASTHPIMBCVZAKYCYLHHZKSOBXPIVJEARNXTBECSOJILKQMMNHZAEOMTDWVBUYVMGMFIPOW");
    msg.dist = 0.383266348052;
    msg.err = 0.935952342195;
    msg.ctrl_imp = 0.88828641207;
    msg.rel_dir_x = 0.251552918412;
    msg.rel_dir_y = 0.371596163158;
    msg.rel_dir_z = 0.451155888141;
    msg.err_x = 0.855371577501;
    msg.err_y = 0.24817239703;
    msg.err_z = 0.391902095163;
    msg.rf_err_x = 0.394814463491;
    msg.rf_err_y = 0.774513185186;
    msg.rf_err_z = 0.0746944497696;
    msg.rf_err_vx = 0.107990374719;
    msg.rf_err_vy = 0.0613392579301;
    msg.rf_err_vz = 0.91375431787;
    msg.ss_x = 0.552866867324;
    msg.ss_y = 0.104787387333;
    msg.ss_z = 0.762061635791;
    msg.virt_err_x = 0.506796462565;
    msg.virt_err_y = 0.508914213901;
    msg.virt_err_z = 0.450910217984;

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
    msg.setTimeStamp(0.205748823253);
    msg.setSource(63494U);
    msg.setSourceEntity(61U);
    msg.setDestination(30240U);
    msg.setDestinationEntity(11U);
    msg.s_id.assign("FMPOMQZMAGMBHHIWZRXCTHSCWKWGAXBINUXIKQTLSAVIVVLEYGBNLJN");
    msg.dist = 0.770020208576;
    msg.err = 0.891830470341;
    msg.ctrl_imp = 0.697059890034;
    msg.rel_dir_x = 0.606191087802;
    msg.rel_dir_y = 0.246249972988;
    msg.rel_dir_z = 0.152822956639;
    msg.err_x = 0.00105662141232;
    msg.err_y = 0.315469461243;
    msg.err_z = 0.639161859588;
    msg.rf_err_x = 0.593366948452;
    msg.rf_err_y = 0.223980131604;
    msg.rf_err_z = 0.212214576683;
    msg.rf_err_vx = 0.855131364295;
    msg.rf_err_vy = 0.741934000247;
    msg.rf_err_vz = 0.114970411083;
    msg.ss_x = 0.430272306924;
    msg.ss_y = 0.541838474849;
    msg.ss_z = 0.749399524954;
    msg.virt_err_x = 0.165119112884;
    msg.virt_err_y = 0.686172975592;
    msg.virt_err_z = 0.225474624742;

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
    msg.setTimeStamp(0.541491064668);
    msg.setSource(23901U);
    msg.setSourceEntity(193U);
    msg.setDestination(10223U);
    msg.setDestinationEntity(110U);
    msg.timeout = 23469U;
    msg.rpm = 0.92769607456;
    msg.direction = 3U;
    msg.custom.assign("AUHJUSVOYFJSPHILSEUCEBZKCLEAZTQWSMNGPLBKRGCRVYJTVBDWZZBZULVHAYNUVMNJWCXTDYPONXHKTBQDGQEHHZQOQFIUIVRUKZLYELDFIRXHMAJXXAVHKBVFSRJYRLALUTQRONPXLIKCMKIKPBQJGXQQSHNURZWTWOFGMFDOTEIFNSYWENOSMZDJWWMAGPPXFMTVXBKLDPPBEWCGMFRYPCQTAKCFZGOJI");

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
    msg.setTimeStamp(0.876144039756);
    msg.setSource(48849U);
    msg.setSourceEntity(124U);
    msg.setDestination(12971U);
    msg.setDestinationEntity(51U);
    msg.timeout = 2821U;
    msg.rpm = 0.66062843298;
    msg.direction = 201U;
    msg.custom.assign("LNYLIXVRXYOMZSHCRDDLIBRSIELHPVBLFXNNFJUEBEVYPQYALNELZFGCGMMISGVSCFVQERUMHZTHUGHKUWJWORZHQVSTWATAMAFQIQKCBEOCKD");

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
    msg.setTimeStamp(0.335740145055);
    msg.setSource(30989U);
    msg.setSourceEntity(152U);
    msg.setDestination(45570U);
    msg.setDestinationEntity(172U);
    msg.timeout = 15490U;
    msg.rpm = 0.196700383477;
    msg.direction = 136U;
    msg.custom.assign("ECTIELVDHQAXSQROUBBJIDECGJQSJORFIAWDCVZRZKFEVPWYYGFTTQZXLJVPSIAVPLKMIOSNYMPCECFWMMGFHLBXRCE");

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
    msg.setTimeStamp(0.864386485431);
    msg.setSource(59961U);
    msg.setSourceEntity(221U);
    msg.setDestination(19615U);
    msg.setDestinationEntity(145U);
    msg.formation_name.assign("ESMSZTIRLPQPFHCFIMNWNZT");
    msg.type = 126U;
    msg.op = 243U;
    msg.group_name.assign("HKCDOQAUUJFEQLIZWAZZJISKOILNFYGIMBEYOKJICHUZPCODJFIGCZFBZVGWHWHSFYOOSWDVXVABNDQEYMMTQLVZLWXANHYXLOABATAHQ");
    msg.plan_id.assign("TYMQSGJQJZKHWVNCBNVYKUBPXKPOQDDLSCWRDHUOWYVEHDRBUXLAOYCIRFKGHLCDUPFZJMPZLGLJQXPALOIFYMQWEBAUTGXYWHPNCANAFQQISUVXWVETITLAITDGMKSKRCFLA");
    msg.description.assign("DDKXTYTXXCCVGUGUFIPWWNNLJEZKTSQPIOWQZTIVCSVRZJEHCDKUQATTHXZGMOJSDLVVOTYRSZSHEQLMEYWBMRMBOPYCXNUQDILBIZUNFAQEGAFSAJQWKURNRQBDDQCEDNJNZYZSPKYB");
    msg.reference_frame = 96U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64932U;
    tmp_msg_0.off_x = 0.188082049677;
    tmp_msg_0.off_y = 0.998863862525;
    tmp_msg_0.off_z = 0.379336080739;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.0877832403606;
    msg.leader_speed_min = 0.532818245917;
    msg.leader_speed_max = 0.719554351;
    msg.leader_alt_min = 0.825684465783;
    msg.leader_alt_max = 0.987619315296;
    msg.pos_sim_err_lim = 0.0738990711897;
    msg.pos_sim_err_wrn = 0.243566519899;
    msg.pos_sim_err_timeout = 42375U;
    msg.converg_max = 0.21351154817;
    msg.converg_timeout = 34681U;
    msg.comms_timeout = 33859U;
    msg.turb_lim = 0.234834453607;
    msg.custom.assign("ASMJKWZRFVJLAWMYEDUHXNZHTEUIJDWNPKIOCLYDQDXUWGVOUGCYLPMLOUBNQCMEMTHTKLFFWQXBGVNRRPJYTSNDIHWGPYCW");

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
    msg.setTimeStamp(0.582131693566);
    msg.setSource(9402U);
    msg.setSourceEntity(229U);
    msg.setDestination(63724U);
    msg.setDestinationEntity(31U);
    msg.formation_name.assign("LKKORSQDJKLZCJBJPNICRBMHEVKJHMQOFPEEDKOZVPXYIPMRNGHHLYYSMWJXPLXSEITVTBWIHZVNSTBFSOTGZVXFLNURSUTLMIGEOAJQNZRHUGEXNCWRYTNBQPMATILXYADHFOGYFQWUCWYLDGRAXEKPUYVCUIOJNERKTGCZFPQAMOIBSKKHJSQOADJDFFRDVOZDUIWPGSWZZZYPTVNBMXCDBYASTHMQEVULCBDCVQHGWWXMCBAJAGQN");
    msg.type = 246U;
    msg.op = 112U;
    msg.group_name.assign("BPRQGLYRWEIOYMVRCKSLQHASWPFWXXPENKOUDLIRCUQIOFTTJXNURWZBZSVXMNZMEQUMLPIENXDXCGBJVPVVITUBHTELQMKFOOBUTAJDGQJZPIVDCBNIMLMYHAHYHYRDKNMCFFDJGUGQMBBSOGPRAHFWOLWAYNZDCIWKVSJLAHUGXHCYXSFJODQMETNPPHOODKZSKSRWXBEYZKAIFCGVAVAUNSKQELLTGNGRDIJWFCPVSJUBYXQKCJZZAE");
    msg.plan_id.assign("SAVQWKXZLUFDDSUUKXZGNSEVOCKAERXBKIAXWCFDDQFLRJWTCPOILBAOKRVJZTONZSGVDIMNJCRVTMCL");
    msg.description.assign("WGSAOEPTICMPDBNJIDPXHQIXMJZMDGYWVZZZHXSKWKXHLLYCOJAKNEQBUYWZPMXRCXJOCRWWTKCBNIVBJERRUOKVQSIJGZEIWMNAOSTYSBLNDNUVBTCHYLFQL");
    msg.reference_frame = 74U;
    msg.leader_bank_lim = 0.734719168587;
    msg.leader_speed_min = 0.294596715353;
    msg.leader_speed_max = 0.814536415652;
    msg.leader_alt_min = 0.996966171848;
    msg.leader_alt_max = 0.276220076035;
    msg.pos_sim_err_lim = 0.393800589267;
    msg.pos_sim_err_wrn = 0.444182009164;
    msg.pos_sim_err_timeout = 10154U;
    msg.converg_max = 0.504910522094;
    msg.converg_timeout = 25401U;
    msg.comms_timeout = 61469U;
    msg.turb_lim = 0.1753453028;
    msg.custom.assign("WQMEJARIPONUIMUFUKSSMELORBACBVTYXKTVGRXQPHYDJSHCXYNDAHFSZWMHFWLKHDZWVQDMXZIEZQPQEZDBHCREMTWRKFRBMXXKECNYKDTZARTFTHESUFYNUUJIEAJLZJLQMDWDAGTTEHOHQOVLJPJLSFKPPAOWOONZXCBTNUGGAPACKZYSBGJYCNGNXNLVDLFFYIVUVBBMPJYOWKUBCDNOGYPLTGSXOGCHRIIZSUIEQCJRFIVKVABPQ");

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
    msg.setTimeStamp(0.806323229709);
    msg.setSource(63177U);
    msg.setSourceEntity(89U);
    msg.setDestination(48944U);
    msg.setDestinationEntity(82U);
    msg.formation_name.assign("CTKNWDCADTYCWMDJJXAWLNEGIPCRGSNERABNOVVMXZYPUJGWYPQATXYNPZZAHSPSISWUVLHRHEPBVXUYMWFLBIJKYABEUTJLOXNMCCGRVIZFJKKEUFYOTOOOZSUUYNSPDRXQCKIVSDKLTDOPRBAQFXGTBHMSYRUWTSKFZQDZFYHQHBMLGQWQFGEJPJIVVCMLFGKQLHZFRIOEUKRULZC");
    msg.type = 18U;
    msg.op = 227U;
    msg.group_name.assign("QXUPWYRWDEHHNUJMXZXDHRAULFITNWWRUNRHITHZGVXPMSMLIFOKONFOBSNCOMCGEXIMVIWBEPTAMQLWRSLVXANBCCNIURYZCCQTSDTOBCPSFFCEXBGNSLABHZFKKDQDUYZXVOSYDUVJEXFHGKTSJPGTXEKLPIJUKYOADKBPABPLTYSHCHKMLZTRYYZWHPAODDNVRQJGVTVE");
    msg.plan_id.assign("WKMHKJBLVKITYMEOXDFQZQOHUWFQMGJYOOGCEBRMTYIMJDPWWSXOTHVKEDFZHOMXGJXEOSYBGRNFDFPHHXSYERNRIQJOXUITTPBBHAUCLN");
    msg.description.assign("NMFJAVCZZTPNWZQJEFEHLRMHGZECKGSULOVQSIGOPBZJYCJTGUDGMKAKGKYUQEYCLGQBTMFTCKWAZSLBBPDZWVRXDCSCEISJHENRHALGCAIKHLJYXHSZDAMWXIFFWLVIFTNODYXWTBTYHPDNEPSTCUXQWDBVPFVNYQVOPUVFTMHAEUIMJMSHFIBOIXSMYRVBBWOOTWRZZALDBPGOLANSUGHUEPJRMUWKXJIALNDRQJOQXDKQK");
    msg.reference_frame = 31U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 48775U;
    tmp_msg_0.off_x = 0.0215148518998;
    tmp_msg_0.off_y = 0.583347578515;
    tmp_msg_0.off_z = 0.647362937252;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.823983580222;
    msg.leader_speed_min = 0.714404790037;
    msg.leader_speed_max = 0.866833938727;
    msg.leader_alt_min = 0.830645150085;
    msg.leader_alt_max = 0.911353130858;
    msg.pos_sim_err_lim = 0.483033070338;
    msg.pos_sim_err_wrn = 0.917124561311;
    msg.pos_sim_err_timeout = 13586U;
    msg.converg_max = 0.371949920922;
    msg.converg_timeout = 61134U;
    msg.comms_timeout = 8091U;
    msg.turb_lim = 0.135632585375;
    msg.custom.assign("HJGWCZGLZSREOOVLSSPSVHGAHCDFKWQTETPMQBPVWLJPNNMHJQMRWCPJIEKYYBGFIDLMNZZYHYXEJPCWOBTMKPBATIQA");

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
    msg.setTimeStamp(0.0137213481605);
    msg.setSource(47579U);
    msg.setSourceEntity(175U);
    msg.setDestination(48883U);
    msg.setDestinationEntity(109U);
    msg.timeout = 10839U;
    msg.lat = 0.0248951803622;
    msg.lon = 0.27055216013;
    msg.z = 0.0926218853166;
    msg.z_units = 79U;
    msg.speed = 0.0278017750981;
    msg.speed_units = 22U;
    msg.custom.assign("EIYMJULYOBICXYFYTLVYOVTNFCJFFFMXGSWRDZMQDANZBATVTKUFTPPCCAHIWRPQWKYCSPVMJGMYDDQNOLWPVQOKICKHCKBIQUEQORMGMLSICXZSXEPSXDZ");

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
    msg.setTimeStamp(0.802212995832);
    msg.setSource(20200U);
    msg.setSourceEntity(123U);
    msg.setDestination(49898U);
    msg.setDestinationEntity(75U);
    msg.timeout = 11816U;
    msg.lat = 0.761134587609;
    msg.lon = 0.424389680129;
    msg.z = 0.633768275839;
    msg.z_units = 2U;
    msg.speed = 0.231479738509;
    msg.speed_units = 76U;
    msg.custom.assign("UYQGXCDQVYZCSAKNJRWEHJUNXYJFHAMHAXNYTKHKOOPWDTKCDUUDKGFYCWUWEUDIAFZFJRVILBLKMRZOTPMEKSPXQREUV");

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
    msg.setTimeStamp(0.19839817213);
    msg.setSource(43806U);
    msg.setSourceEntity(24U);
    msg.setDestination(8105U);
    msg.setDestinationEntity(12U);
    msg.timeout = 35998U;
    msg.lat = 0.0963283916328;
    msg.lon = 0.325497400409;
    msg.z = 0.513571136481;
    msg.z_units = 100U;
    msg.speed = 0.653411698192;
    msg.speed_units = 22U;
    msg.custom.assign("SZOQKNWZQGUUZGEKOWKUQXDXPBNHWPIIUOHVTLVCYJLLITLWMOKYTJYMJXMIFKVADLBGNTLTRHQMYTYZYURUSQEPEXKZXPGDEBMEXWSZSBHQGXTASGFMYCOVADLOSWJJXUBYABFDPOFSPNCQDIJVTQPAIINIHFHQEPAKOZNSOMYMHRGASKGTUWXHCVJADUEMTLDRCCDWGCZNVLJWCROMUPNBBPQCVHKLVZXJAGFAIIBKE");

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
    msg.setTimeStamp(0.553788493152);
    msg.setSource(14408U);
    msg.setSourceEntity(203U);
    msg.setDestination(12621U);
    msg.setDestinationEntity(201U);
    msg.timeout = 43616U;
    msg.lat = 0.990455393649;
    msg.lon = 0.55428650109;
    msg.z = 0.23346183195;
    msg.z_units = 48U;
    msg.speed = 0.944185319091;
    msg.speed_units = 192U;
    msg.custom.assign("XRFQPUEBYVPZMWDFFLJUMVMARSQUVFHBCZBGCJJJQWBOKLEQCZVCAAKGGYDZP");

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
    msg.setTimeStamp(0.926084356878);
    msg.setSource(2035U);
    msg.setSourceEntity(183U);
    msg.setDestination(65218U);
    msg.setDestinationEntity(237U);
    msg.timeout = 27406U;
    msg.lat = 0.341781694946;
    msg.lon = 0.435888095661;
    msg.z = 0.500916489866;
    msg.z_units = 179U;
    msg.speed = 0.518246671936;
    msg.speed_units = 42U;
    msg.custom.assign("ZZHDPMPKJQMURTCRSOBRFAWPBLJIBVTRQMFCTSCTVDUHZJAZYQMZXHWSQNQIWXCIAKQAAZRURFNFNYXJEHIROWYKCOUPENMMZXWOGSWLSGKNQRHBXFXEJWXPWWMONKVLRKVFCDKDILLMPXGYHCEFTTSKDEFFPDPMUELNUBUOUEHPWBYCHYKFQVJPQNLGBJDGVGSVIEALUGYIXJONGGUDGVOCJSEVYZMXOYVN");

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
    msg.setTimeStamp(0.111418921524);
    msg.setSource(56509U);
    msg.setSourceEntity(248U);
    msg.setDestination(43779U);
    msg.setDestinationEntity(129U);
    msg.timeout = 2626U;
    msg.lat = 0.627600619033;
    msg.lon = 0.788126115253;
    msg.z = 0.555814638444;
    msg.z_units = 143U;
    msg.speed = 0.989203771321;
    msg.speed_units = 215U;
    msg.custom.assign("MLSLVKBNGRVUOMYCJHEKJN");

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
    msg.setTimeStamp(0.454833174448);
    msg.setSource(53356U);
    msg.setSourceEntity(190U);
    msg.setDestination(52098U);
    msg.setDestinationEntity(24U);
    msg.arrival_time = 0.0197849705474;
    msg.lat = 0.388167993599;
    msg.lon = 0.313920143328;
    msg.z = 0.063682844878;
    msg.z_units = 236U;
    msg.travel_z = 0.782992075529;
    msg.travel_z_units = 151U;
    msg.delayed = 130U;

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
    msg.setTimeStamp(0.220749935216);
    msg.setSource(45527U);
    msg.setSourceEntity(117U);
    msg.setDestination(14049U);
    msg.setDestinationEntity(214U);
    msg.arrival_time = 0.242268693074;
    msg.lat = 0.743273231417;
    msg.lon = 0.384121759856;
    msg.z = 0.249215272686;
    msg.z_units = 17U;
    msg.travel_z = 0.155637379459;
    msg.travel_z_units = 128U;
    msg.delayed = 5U;

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
    msg.setTimeStamp(0.572113370753);
    msg.setSource(5374U);
    msg.setSourceEntity(53U);
    msg.setDestination(55121U);
    msg.setDestinationEntity(1U);
    msg.arrival_time = 0.329233686739;
    msg.lat = 0.295236646649;
    msg.lon = 0.420151709312;
    msg.z = 0.479169891605;
    msg.z_units = 101U;
    msg.travel_z = 0.722469546421;
    msg.travel_z_units = 177U;
    msg.delayed = 165U;

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
    msg.setTimeStamp(0.780074540629);
    msg.setSource(25449U);
    msg.setSourceEntity(54U);
    msg.setDestination(47992U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.380669675189;
    msg.lon = 0.125512208081;
    msg.z = 0.460443437813;
    msg.z_units = 22U;
    msg.speed = 0.00293855771945;
    msg.speed_units = 169U;
    msg.bearing = 0.979871614586;
    msg.cross_angle = 0.530814050841;
    msg.width = 0.401842548893;
    msg.length = 0.926397654393;
    msg.coff = 142U;
    msg.angaperture = 0.951340457352;
    msg.range = 24430U;
    msg.overlap = 236U;
    msg.flags = 16U;
    msg.custom.assign("USOIAVHKSNZNDRSWMCKRNPRDEGKMLRPBHEBDAQCIPVDZBUWDOYHPXJQZOCZINLGHHOGLBDQBWVQTYJASUWEMFOXVAXALSSQYCWGLKFGPQONTYEPTBODCAABMWFUEWHZJTTHCFKBBZVNIAUVIIOJUXTVOEKWGOHZRFHTVJLVMGNGLSMRTISCXPJAXGILJLBSTZEYPXFNJMKNRUMERYQGASEHPPDYKC");

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
    msg.setTimeStamp(0.160954209535);
    msg.setSource(38583U);
    msg.setSourceEntity(196U);
    msg.setDestination(16886U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.00249609237096;
    msg.lon = 0.389521727342;
    msg.z = 0.308550113094;
    msg.z_units = 151U;
    msg.speed = 0.105227855714;
    msg.speed_units = 129U;
    msg.bearing = 0.132619553038;
    msg.cross_angle = 0.381975638576;
    msg.width = 0.168634155798;
    msg.length = 0.270348963423;
    msg.coff = 162U;
    msg.angaperture = 0.989906388163;
    msg.range = 60502U;
    msg.overlap = 7U;
    msg.flags = 165U;
    msg.custom.assign("ZWNTRUGKRULQYKGQHBXNZTUPKZTZMDGLVTNGXPJDCEOAPFQQFYELTTCOHHLVWQGADWVIZBNPKECIAYDBGAMHOEWBEGYSAPWACZHSBCTROSFVBSWYFHRD");

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
    msg.setTimeStamp(0.0763792143685);
    msg.setSource(55103U);
    msg.setSourceEntity(119U);
    msg.setDestination(25621U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.184484555669;
    msg.lon = 0.0338718731444;
    msg.z = 0.37711380982;
    msg.z_units = 140U;
    msg.speed = 0.408996998157;
    msg.speed_units = 96U;
    msg.bearing = 0.92242053897;
    msg.cross_angle = 0.211383811907;
    msg.width = 0.861804682199;
    msg.length = 0.979094025938;
    msg.coff = 65U;
    msg.angaperture = 0.609482470364;
    msg.range = 53450U;
    msg.overlap = 11U;
    msg.flags = 177U;
    msg.custom.assign("JSYQOJUDVMARCBVOZAIQFZADNOUVGGIGFFSAHSRXNJTPNOZFQJYUILKGKYDHOGFUKVLDAPACXBTVQIIEKEKOQSLBHSNRQSEVCZGGFBIXTPHMWRZHKFZGIZRTYEKNNTXFKSEPWBPD");

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
    msg.setTimeStamp(0.529517958545);
    msg.setSource(31675U);
    msg.setSourceEntity(126U);
    msg.setDestination(26583U);
    msg.setDestinationEntity(21U);
    msg.timeout = 36677U;
    msg.lat = 0.289310836266;
    msg.lon = 0.705461647433;
    msg.z = 0.852662419021;
    msg.z_units = 10U;
    msg.speed = 0.963298165916;
    msg.speed_units = 145U;
    msg.syringe0 = 93U;
    msg.syringe1 = 152U;
    msg.syringe2 = 234U;
    msg.custom.assign("AMMCKMGMMNPMSHEGJMPCWGHQGRLGVITUNVPCOQKNRWIJSOKHQQVLJTFRXXTKBDHFYGDNILSFXGYDBWLCZTJQAZIRQQAUBRUSLIKVRKEMXFXXPOVVTUOLWBNLVCDTEBANEUCSRHEGTYJPAMOPFCFRXIHJFEURWGZIOBWYWQBPXEAUPVLWXKZFDZVSRFMJNZYTOHZSEKHTNBALAKSXFBNCYPJYQDSLZI");

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
    msg.setTimeStamp(0.755343886737);
    msg.setSource(39707U);
    msg.setSourceEntity(195U);
    msg.setDestination(57659U);
    msg.setDestinationEntity(81U);
    msg.timeout = 56768U;
    msg.lat = 0.210261158298;
    msg.lon = 0.603983167092;
    msg.z = 0.14994143596;
    msg.z_units = 222U;
    msg.speed = 0.925938347257;
    msg.speed_units = 114U;
    msg.syringe0 = 157U;
    msg.syringe1 = 49U;
    msg.syringe2 = 33U;
    msg.custom.assign("JVSWYQDFVFYXJGOWDASIUDXUCSPMMGNIQBPSRDCBAYOQCTIQLODGEPZYXKOTSNGMMEZQUNRUWZDTTAYPRJJGYUQVFHSZTBDCQHFZZIBJHNUUVLHJHEOIOXMJXPPYNWIIYACPWRQBNRXJCVASNMFEWOOTLNRZVKUGKOZUXGMUELBHFEEXFQ");

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
    msg.setTimeStamp(0.389940147098);
    msg.setSource(60998U);
    msg.setSourceEntity(12U);
    msg.setDestination(39494U);
    msg.setDestinationEntity(21U);
    msg.timeout = 59605U;
    msg.lat = 0.27097596144;
    msg.lon = 0.0403354086679;
    msg.z = 0.055646770489;
    msg.z_units = 50U;
    msg.speed = 0.393094417507;
    msg.speed_units = 207U;
    msg.syringe0 = 93U;
    msg.syringe1 = 248U;
    msg.syringe2 = 63U;
    msg.custom.assign("SIUGKYLSOMJXZMTOWHDHUUUSAXTRJXQFQVBJBQMAHEFDHVRTRCFIGRLNZKJCMXNSAIQXYZCFDOPVNWRXVDNFCXZVNLFGPPPGFGGSZNWXPOCCTKGDKJFKLEAWLCBHIYXVINSAQPENVNYSLSBUOJIVCBKBLTCUZNERJPDAKVIQVZSOMDPRTEAORCKHYIUZEJFAETFIGBYOMGDTQPUZMUPKGHS");

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
    msg.setTimeStamp(0.997274744746);
    msg.setSource(2157U);
    msg.setSourceEntity(175U);
    msg.setDestination(57361U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.0709058842121);
    msg.setSource(6199U);
    msg.setSourceEntity(110U);
    msg.setDestination(57449U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.926474824651);
    msg.setSource(33258U);
    msg.setSourceEntity(18U);
    msg.setDestination(13577U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.370406661223);
    msg.setSource(31867U);
    msg.setSourceEntity(102U);
    msg.setDestination(26202U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.863317697337;
    msg.lon = 0.572426235432;
    msg.z = 0.944035357425;
    msg.z_units = 167U;
    msg.speed = 0.474408945502;
    msg.speed_units = 61U;
    msg.takeoff_pitch = 0.172791492313;
    msg.custom.assign("JKQRXQWYCCYHQEIXBABBVKNXSYMEVWVZZFRWAOVNVGWYCTIDKKFQGIWNJAFPHHCGVZZQOHYYNSROLCRXCDSETEJDDIX");

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
    msg.setTimeStamp(0.832306454235);
    msg.setSource(45380U);
    msg.setSourceEntity(67U);
    msg.setDestination(24922U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.846787383456;
    msg.lon = 0.596942593807;
    msg.z = 0.522871541886;
    msg.z_units = 47U;
    msg.speed = 0.0605606797518;
    msg.speed_units = 156U;
    msg.takeoff_pitch = 0.198993588047;
    msg.custom.assign("PBZWYMRFGAQVDRUBTJUPZFSOATBRZZXZMXUBJBOUJYFMJBAOSTMNKPSHKIDWHKFITOVNKXQSIZNXLWRVKMSANDEESKZBIUHTAAUVEHUHCQQCBJJLXGLQROZFORMWPOQEECZPPEVXWCCMTLEDQVRRPIBTCGFLIZXRLYDGPWY");

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
    msg.setTimeStamp(0.332861657828);
    msg.setSource(59846U);
    msg.setSourceEntity(252U);
    msg.setDestination(26525U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.660002655533;
    msg.lon = 0.674193964726;
    msg.z = 0.942281739147;
    msg.z_units = 105U;
    msg.speed = 0.0245434935791;
    msg.speed_units = 241U;
    msg.takeoff_pitch = 0.596627021421;
    msg.custom.assign("CNCQMOVNDGMVQUHKSKPZWZDXGBWTAKKLATILZFFUPQLJUTOJZPWASKRIFGHBXLTOOFYVBNYEZYOBVEXTYSCXEIMYQJJYJPFVJSLNEMICUXNPQNZIURQDVZWLAOCTMGYFRIKWKBWAVWGRJREDXHMADPWOERCPSNNWZRFUTMAOSOCIF");

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
    msg.setTimeStamp(0.0786917717643);
    msg.setSource(5578U);
    msg.setSourceEntity(163U);
    msg.setDestination(48691U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.0170139473055;
    msg.lon = 0.232371234875;
    msg.z = 0.571342039793;
    msg.z_units = 83U;
    msg.speed = 0.721998936323;
    msg.speed_units = 42U;
    msg.abort_z = 0.136903356442;
    msg.bearing = 0.0837400763448;
    msg.glide_slope = 141U;
    msg.glide_slope_alt = 0.0406742264407;
    msg.custom.assign("OHFWTSKVIKDXEDVOZKGMUHBJNLCNORTXOAMFAGMHTNDAQUTRFZWRANRLUPQQZKMJGEUJHQDVEJWCZYYXQYBDZEGWVCUOAQZTEXBMAYFDJYXSTPPUYNHZSEMTBQITAYCCMKNFIOTLRSEPSRLSIGOIGBFXLPCNKPDJCMPSQWVVBXVLSYHNIIUEPIQQCRXGBWWWJSJLPSXLHFJGMJZLYBDNRRHAFEFKKOYNCRVZVPTAWUBBUMUFLKI");

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
    msg.setTimeStamp(0.419088904691);
    msg.setSource(44670U);
    msg.setSourceEntity(213U);
    msg.setDestination(65334U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.319404668457;
    msg.lon = 0.0235339509913;
    msg.z = 0.855311779886;
    msg.z_units = 167U;
    msg.speed = 0.394006682532;
    msg.speed_units = 84U;
    msg.abort_z = 0.0741569792309;
    msg.bearing = 0.362813180568;
    msg.glide_slope = 124U;
    msg.glide_slope_alt = 0.458696446809;
    msg.custom.assign("ZBDJXYDSBYAVGPMRIAPMQNRYOVLSMBXKFELZLCIYLQUDSTYEZCXNVGJP");

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
    msg.setTimeStamp(0.636581462151);
    msg.setSource(33956U);
    msg.setSourceEntity(201U);
    msg.setDestination(62403U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.581662505455;
    msg.lon = 0.832341028249;
    msg.z = 0.71028162584;
    msg.z_units = 17U;
    msg.speed = 0.28332803768;
    msg.speed_units = 227U;
    msg.abort_z = 0.883489869884;
    msg.bearing = 0.641433977201;
    msg.glide_slope = 246U;
    msg.glide_slope_alt = 0.329868800552;
    msg.custom.assign("KKLDDXHUZQLONWFYAVUEJVHXIPUDNVIJATBLGGXVTMBQPPHGLRKXOXIVBLYZNRTNMUUGZXHUYYHRFIDKSIKSCGKEZKRQDWGOIHRISPQYFZJNCA");

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
    msg.setTimeStamp(0.719946593376);
    msg.setSource(9557U);
    msg.setSourceEntity(87U);
    msg.setDestination(54320U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.152732881592;
    msg.lon = 0.858712874465;
    msg.speed = 0.88108727141;
    msg.speed_units = 137U;
    msg.limits = 205U;
    msg.max_depth = 0.994677839825;
    msg.min_alt = 0.88958723994;
    msg.time_limit = 0.70405121339;
    msg.controller.assign("HCRJXKCJSIQQDTBRHLMBKQGCSFZXEYRDVWEGVNZEXMIUUUFOQXFSQHGDXANISWFGSUDNLOUEDJLQPHZVYROBZVGVUCXPABWRRTHCPPBPYEAMVIEHVIZKNDMMODPUQLJKQRMZJXTCNEWFJAWWFOKYPSUGQMLVBXPORCNJWRTNOLFGFNYVAXIPAKSLTYEOWJKMJIAMAFKZYJLQLEIYHWHFDIGYZLSADBNK");
    msg.custom.assign("ORJIDZIHLLPUSPSNVHPEIBMEWKJINXRMYUJDCERWNFLLOYSAABCVFAXXTBJIMQITQUTWBNZT");

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
    msg.setTimeStamp(0.693889720073);
    msg.setSource(12686U);
    msg.setSourceEntity(178U);
    msg.setDestination(10576U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.11491712751;
    msg.lon = 0.318120296554;
    msg.speed = 0.863550250564;
    msg.speed_units = 163U;
    msg.limits = 124U;
    msg.max_depth = 0.134706744783;
    msg.min_alt = 0.942746223976;
    msg.time_limit = 0.711773002862;
    msg.controller.assign("GGQSMYNSDWCFUBEHHMZIVALUUWZOWQBMKJPAPMWQLRKBHNVPOCPUKYOQPXLPDVLDCXZOZVVGMEDGRWXHAKKNIPAGCEQASOYJDCKZFKHXOURRLY");
    msg.custom.assign("LZEXBMCZNEAAYHKRCQXIFTGPZDKPZUVIKUEBIGPNBQSMSGNRBAISDUWWYRHDRMTUGJLFUVOHRBPUHYTCWRTGKCPVXMCFOZOWVNNZAIYQAXFMGLSZXYYYIDLZNQLVVEFSMVJQHESQL");

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
    msg.setTimeStamp(0.405782065022);
    msg.setSource(13777U);
    msg.setSourceEntity(253U);
    msg.setDestination(40339U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.697748815451;
    msg.lon = 0.840447458481;
    msg.speed = 0.617084152058;
    msg.speed_units = 51U;
    msg.limits = 21U;
    msg.max_depth = 0.836457630835;
    msg.min_alt = 0.171999489567;
    msg.time_limit = 0.549341274646;
    msg.controller.assign("UDYQJVCUFVNLRQZEDJGYDIUSSSMYEPOTPMRHXGAJPZYSRCIHXHKACWMXKMBTQNWLBQEXVJTFHUQTVEJBIMSYDMFLDCZHOTDBMAXUMZJNRAPJDOHGXUVRZLOVGQPTLRZPKOKHREWBAQASCFWLPDLOIYBFKKQERBYMXTWHZGBIFTYQXCB");
    msg.custom.assign("OQCYWIWDDKHCVBARFJIWDGAPXSARNNPMOWOQYZBRSIVJPZUAIZNQQEXICXZHBPPTELEPVCLXJTWLONMHZCGFUYTXAIVLBZHAEFRVMMZUOGSIICVUONJBSKTEXWAUTYHDHIWTRJDN");

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
    msg.setTimeStamp(0.208824909011);
    msg.setSource(5296U);
    msg.setSourceEntity(88U);
    msg.setDestination(34506U);
    msg.setDestinationEntity(229U);
    msg.target.assign("ECHIAAIKCXYENZNNCXGVJQYRGAGQBJCJDNEFTWHTABKNZMSOJEDAZIDXGIVDRMXRJMXLVLHQBRLOJAJEFUPYL");
    msg.max_speed = 0.108660566442;
    msg.speed_units = 248U;
    msg.lat = 0.814665637514;
    msg.lon = 0.236747520441;
    msg.z = 0.615442996027;
    msg.z_units = 181U;
    msg.custom.assign("JIFSZVEEBNQYAHYFLABKHZJPTEXZLRSURTOPDNZLQGKTZQOIYHGENCGWQAODCXCY");

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
    msg.setTimeStamp(0.116206705814);
    msg.setSource(37856U);
    msg.setSourceEntity(136U);
    msg.setDestination(46187U);
    msg.setDestinationEntity(185U);
    msg.target.assign("HXWMPZTEPUSIHIKCHDJDNCTYZLQYZYYKZJFLTMOBNIBHKXXNWPWGJSDUERFXZGEAOIXRQOLQBEHOTCFAVVVVJYKHBDYMWNQTDDLFKOTWOFXEKSAYRNT");
    msg.max_speed = 0.622141554592;
    msg.speed_units = 235U;
    msg.lat = 0.278719983776;
    msg.lon = 0.450985171578;
    msg.z = 0.577406516583;
    msg.z_units = 55U;
    msg.custom.assign("OIYPNDDIEZJOLLJDVHNRKTXBTIDHFHLIBRIJRUVSDPFO");

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
    msg.setTimeStamp(0.051176664239);
    msg.setSource(60828U);
    msg.setSourceEntity(216U);
    msg.setDestination(40487U);
    msg.setDestinationEntity(49U);
    msg.target.assign("VSLLXPQDOXRZGACYVEYTSQHGVIZPYBIEUJZHXJQDYCMBHWWUXLKFDFVDLQEZIFGEQCWRLAUAXOGSTJBMFYJGZBWCVDNZCCUSXVUVSPKJDWFNICSJMJTNQALUJWWKNKHPETIXYTSPGHUVNEWKBDCLCQOYQOPRFBALRDMOHFPPNTPKIOKHEASFAYITMUYXAHMPWHQBOKBZADDVFEIATLGXIR");
    msg.max_speed = 0.480898491196;
    msg.speed_units = 143U;
    msg.lat = 0.578119629911;
    msg.lon = 0.186003648939;
    msg.z = 0.605209081243;
    msg.z_units = 116U;
    msg.custom.assign("QFGHCXJJOGYEQSYONMQKXTERKPEYTHWQFKDCFTSKZUKNCUNWNGAWLZXMLABNYGYFANDVMJVPHSBYNOETUHVPDQUTNLLLMTHAAJQVUFQMZTWFLQBMHXGSWAVEBIOLVCCIDXBAVCXIJHWJVSPHTBZJCJRYLPRIVADGTIFOWCCGDRUOMQXIKXOHBWDYLZXSEYFNPR");

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
    msg.setTimeStamp(0.208625923128);
    msg.setSource(869U);
    msg.setSourceEntity(245U);
    msg.setDestination(40123U);
    msg.setDestinationEntity(96U);
    msg.timeout = 9890U;
    msg.lat = 0.0400512395459;
    msg.lon = 0.787531481892;
    msg.speed = 0.00974471978699;
    msg.speed_units = 225U;
    msg.custom.assign("FNXXQLLYBGVQDOJTMZKQMDCVIZGKNCATKQWDESWXPDLWXWAEIBVHDSYURELGHPTNCJJAGLNTKDSFJOJMUAIABIF");

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
    msg.setTimeStamp(0.238082556381);
    msg.setSource(17606U);
    msg.setSourceEntity(67U);
    msg.setDestination(18289U);
    msg.setDestinationEntity(245U);
    msg.timeout = 7357U;
    msg.lat = 0.966604633103;
    msg.lon = 0.694484433551;
    msg.speed = 0.275763276869;
    msg.speed_units = 252U;
    msg.custom.assign("ZVODTUFRNRDYZMDXDKPUGVJXQSEACJTRLLWOUQAQHSPGZGWGCOMRTCDRCSQH");

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
    msg.setTimeStamp(0.742904619663);
    msg.setSource(40482U);
    msg.setSourceEntity(135U);
    msg.setDestination(15217U);
    msg.setDestinationEntity(83U);
    msg.timeout = 56448U;
    msg.lat = 0.56426400872;
    msg.lon = 0.594057887764;
    msg.speed = 0.54894575469;
    msg.speed_units = 205U;
    msg.custom.assign("KDIVQTTHUWQAHGZSYLRHPVYFFCFITXHYAVIXKJVIWIXBLGD");

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
    msg.setTimeStamp(0.76418014697);
    msg.setSource(40240U);
    msg.setSourceEntity(40U);
    msg.setDestination(41371U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.564529038154;
    msg.lon = 0.90518352801;
    msg.z = 0.760191261529;
    msg.z_units = 197U;
    msg.radius = 0.3546257985;
    msg.duration = 25164U;
    msg.speed = 0.556223085587;
    msg.speed_units = 211U;
    msg.popup_period = 26059U;
    msg.popup_duration = 12637U;
    msg.flags = 226U;
    msg.custom.assign("JHVFGFBNPKEXKIHXEPYZXRJCXYGVWPBHHAJDEYABDWSHVWOGTCASMTOZOCQFHWCUOWNAYFQRSSRQMXVGBPAGPVIQDNYGELQKLKM");

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
    msg.setTimeStamp(0.784597894932);
    msg.setSource(20943U);
    msg.setSourceEntity(88U);
    msg.setDestination(56293U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.717401106799;
    msg.lon = 0.680610368522;
    msg.z = 0.185925067748;
    msg.z_units = 205U;
    msg.radius = 0.353054257009;
    msg.duration = 52983U;
    msg.speed = 0.998214758748;
    msg.speed_units = 176U;
    msg.popup_period = 24857U;
    msg.popup_duration = 9579U;
    msg.flags = 73U;
    msg.custom.assign("DXHXRIDSZAHGPIBVVBGBDZDEYLRPHZMCCHYDWQOWJYFUCAJOOTNNGXJNWECNFSNHAYQOGLCJKXDXTKTLKLWNCBEWZWMJUPTRUNKPIPEFDNSFSKFBURXVLMGYFTPKZWMUQTWAQOFJKPYGLIORGAAYLJQUCHABVERWPDVVBCMUEHXBAPHEMKIMSPFY");

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
    msg.setTimeStamp(0.957742894301);
    msg.setSource(45264U);
    msg.setSourceEntity(242U);
    msg.setDestination(41275U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.549679443915;
    msg.lon = 0.149585814735;
    msg.z = 0.595284788949;
    msg.z_units = 192U;
    msg.radius = 0.695977531802;
    msg.duration = 11237U;
    msg.speed = 0.94318240607;
    msg.speed_units = 177U;
    msg.popup_period = 34391U;
    msg.popup_duration = 52069U;
    msg.flags = 146U;
    msg.custom.assign("PCTGVIRSKIPBFHOAJPKFLUZVQJXHFDSGRNRXJPXSVVMWYAQNEJNBYJFAZAACZMWVOQGDIINCQHYWXPKFACUMDFKQNZGGATDOYECZWIKNRHUBOBTRZZVWHEUVWQZJHTLXXFEOHOWZDDWTKPUVLWVCVOMBEPULRLRGMGBEDSLTXKQEAEPYNIKMJUISKDFRC");

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
    msg.setTimeStamp(0.623635962952);
    msg.setSource(60150U);
    msg.setSourceEntity(12U);
    msg.setDestination(63586U);
    msg.setDestinationEntity(124U);
    msg.timeout = 45857U;
    msg.lat = 0.846071227371;
    msg.lon = 0.695901799332;
    msg.z = 0.604554281498;
    msg.z_units = 73U;
    msg.speed = 0.630707211965;
    msg.speed_units = 230U;
    msg.bearing = 0.725219132548;
    msg.width = 0.0043209608822;
    msg.direction = 44U;
    msg.custom.assign("OBBWJNRHRUCLZIWHMJNUYGYPTTCRSSTHZDTLIUC");

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
    msg.setTimeStamp(0.81549287153);
    msg.setSource(33740U);
    msg.setSourceEntity(66U);
    msg.setDestination(62003U);
    msg.setDestinationEntity(58U);
    msg.timeout = 20673U;
    msg.lat = 0.626906254933;
    msg.lon = 0.769139450752;
    msg.z = 0.0748509720705;
    msg.z_units = 170U;
    msg.speed = 0.652017256309;
    msg.speed_units = 168U;
    msg.bearing = 0.787300046755;
    msg.width = 0.177307667109;
    msg.direction = 249U;
    msg.custom.assign("VKSNWXWEXSEMQNRAFRKJNOVHNCD");

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
    msg.setTimeStamp(0.545161341252);
    msg.setSource(57252U);
    msg.setSourceEntity(172U);
    msg.setDestination(36065U);
    msg.setDestinationEntity(61U);
    msg.timeout = 31109U;
    msg.lat = 0.221841778539;
    msg.lon = 0.151577362288;
    msg.z = 0.520395794706;
    msg.z_units = 74U;
    msg.speed = 0.179613080098;
    msg.speed_units = 31U;
    msg.bearing = 0.131904675346;
    msg.width = 0.154964875438;
    msg.direction = 42U;
    msg.custom.assign("BFAHLYQHKULLXUXUORUOCUIHPNVFOFYWKSWIDPPTNJGTDTZEYKDJRKNDYXXGVCXQFMZCZLNIRAOAKLXTMAAOVNRXEBLWBARULYMMMPQQEGIZILONPWPTWTWZSLUPMENDJHIVUVIJZWETYNJEZFSSJWCVYZSSGRANHFOSPZMPZXDGFAJMKCPGBQXBVFBBCVKGNFFTCISOHJCQADQHVYYBDBAIMQKDLIHWQJCUESCUEOW");

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
    msg.setTimeStamp(0.151809254835);
    msg.setSource(30081U);
    msg.setSourceEntity(10U);
    msg.setDestination(6058U);
    msg.setDestinationEntity(159U);
    msg.op_mode = 49U;
    msg.error_count = 127U;
    msg.error_ents.assign("ZKZNFQVKAOOSSYFBMRFOLCZJPJWZZLCHYHRUYEODQUHYJBP");
    msg.maneuver_type = 56276U;
    msg.maneuver_stime = 0.312366527626;
    msg.maneuver_eta = 50713U;
    msg.control_loops = 1322680242U;
    msg.flags = 80U;
    msg.last_error.assign("ORPMPTYAJKGHGFHRNJGUKTAXWHIVUYFMIBTNSQYFFQZABSBHZNCAFUQYPWVIIRCJQFLPFLJXUXWMNYXISOQBJXGMXZENKDIRGREEKSNGKWYHSMFOZIPSJXLDIOYGHUXOWWCZGCQTDFMVJVANWQRGXHAHTPBBKQVKVZYVRUCTYTABICNTCDKBJTTCSVALOCYOZEOLLHOZEP");
    msg.last_error_time = 0.340806246263;

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
    msg.setTimeStamp(0.644516947753);
    msg.setSource(47934U);
    msg.setSourceEntity(167U);
    msg.setDestination(29750U);
    msg.setDestinationEntity(3U);
    msg.op_mode = 75U;
    msg.error_count = 101U;
    msg.error_ents.assign("WHMMBAWLRQANTIHMXTLZPGYIQRVFOZPIWNRHTISFBLFPYLWWDGKZECUYSJQOUMIIZDSXBNHTUQXTTGWERCKPDRDFAPNJGXHGMGDGFPZZLWYGNUTNLVFVXYPKKERCVCTZYRPQXAOOVCRACKXBXEZILIDCCUHWXHUURSAMJINMOJRZEH");
    msg.maneuver_type = 26868U;
    msg.maneuver_stime = 0.777841923892;
    msg.maneuver_eta = 40441U;
    msg.control_loops = 768078344U;
    msg.flags = 93U;
    msg.last_error.assign("PKDGEWNVXFOXBJPNVWPWYFBNIRRNDZNBXAKQQYRILMQMGMTVESJCHUTBCOFLGLSACGKOLIKMWLUSAHDAWKYISWEOSLWNAYYICDRBKZSYVFZPUKEBZPQFQFDFVTGQWHJOJWMXVBYESH");
    msg.last_error_time = 0.560349889973;

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
    msg.setTimeStamp(0.879002771475);
    msg.setSource(57179U);
    msg.setSourceEntity(60U);
    msg.setDestination(12888U);
    msg.setDestinationEntity(195U);
    msg.op_mode = 239U;
    msg.error_count = 115U;
    msg.error_ents.assign("DVANNKMCPHBBUMVMIMHNLRHYBLPZIAMJSYWTUFOKBJSVCKPGWAOQMGTQFXQYTMWDSIDOHRGCWZNQGREFPFDCIENVQTDZXNVVDXZKYJIVAWXXHQJV");
    msg.maneuver_type = 16252U;
    msg.maneuver_stime = 0.328128752418;
    msg.maneuver_eta = 56521U;
    msg.control_loops = 600320077U;
    msg.flags = 224U;
    msg.last_error.assign("DJTFUXQCBPJIXZOQAAYIVRVWBFNINBJQJSIGHEWTQULZBQVOHALSRWUQSYHZLQAMPHKYSGTTXWKCRHEIGONEXUGMSENWKTMYFZJDBLONENONFSMWOZMCTTEAUCYCJEMHTBYGIDCALFRRKKMGUXZYVQGMOHXAVKSPZKWMNQJBCDDWUDEAXRAAVPTNLOHJDXCBR");
    msg.last_error_time = 0.630944033334;

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
    msg.setTimeStamp(0.76843724709);
    msg.setSource(26831U);
    msg.setSourceEntity(94U);
    msg.setDestination(22638U);
    msg.setDestinationEntity(231U);
    msg.type = 1U;
    msg.request_id = 40695U;
    msg.command = 89U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 45959U;
    tmp_msg_0.lat = 0.801227464207;
    tmp_msg_0.lon = 0.65220227609;
    tmp_msg_0.z = 0.397004634405;
    tmp_msg_0.z_units = 72U;
    tmp_msg_0.speed = 0.406022665158;
    tmp_msg_0.speed_units = 242U;
    tmp_msg_0.custom.assign("ZMPEXWEAVVIPTPMFAYXAZVTHXKMJDCTOPMAYDVTWKLBFJXJJFISZNLNUVVIQOORSCALSQDQMXMRENNYIRUBJFCXGOPFMKIHTGETJHQUKSBTPICGQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 51137U;
    msg.info.assign("FVBQPHDWJBUOVNQFZEJZZDRDPDLXHXFEEJUMAHZGEKYKSQXLQKLKCCRJTMNSBTYGLUUAXFBSZDVTXMTOJLJTEAAYHVZCMSHHTXEXTSFEKOVOONRCGYZJAGVNWCW");

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
    msg.setTimeStamp(0.213369146561);
    msg.setSource(57861U);
    msg.setSourceEntity(198U);
    msg.setDestination(58505U);
    msg.setDestinationEntity(253U);
    msg.type = 112U;
    msg.request_id = 60871U;
    msg.command = 145U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 20835U;
    tmp_msg_0.flags = 242U;
    tmp_msg_0.lat = 0.586051819222;
    tmp_msg_0.lon = 0.523310127422;
    tmp_msg_0.start_z = 0.124692466829;
    tmp_msg_0.start_z_units = 57U;
    tmp_msg_0.end_z = 0.416198908021;
    tmp_msg_0.end_z_units = 78U;
    tmp_msg_0.radius = 0.256449314539;
    tmp_msg_0.speed = 0.954251425012;
    tmp_msg_0.speed_units = 61U;
    tmp_msg_0.custom.assign("HUOHPTLKCVQFBIPNMMBRJULBVWMWWOCPSDSZQCEIAJKBGXVRNLGJASNTEZSEIVLTLYOQQUSMSNWVEKCZURAXWBJDBXKWA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 18237U;
    msg.info.assign("XPVNDNPFWCFBQPLJRAAEVXYZWTVMLBHKPNSKTZSZDHBQKDIIYOBJWCKTEWMWGQEHHTWIZCGTCPFJAMLDUJTIKRAGARRTRERQRQOXEXVOMZCSCEGGSSASVYUBRWXZJMKFMLDHZUI");

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
    msg.setTimeStamp(0.405497207842);
    msg.setSource(30432U);
    msg.setSourceEntity(210U);
    msg.setDestination(13479U);
    msg.setDestinationEntity(242U);
    msg.type = 84U;
    msg.request_id = 43000U;
    msg.command = 139U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.773053527707;
    tmp_msg_0.lon = 0.877839429463;
    tmp_msg_0.z = 0.569053694258;
    tmp_msg_0.z_units = 47U;
    tmp_msg_0.speed = 0.563206989499;
    tmp_msg_0.speed_units = 77U;
    tmp_msg_0.custom.assign("CGGCSWMCITAINUQVYQWZBUPVVXUVUFXYLOLFCUYHAKIKIARAWORSGCRWQVSZDRLJABPRZHYNLTKAPN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 23696U;
    msg.info.assign("GAKMLVQMBZDJDIMNYKLMOXJMFTHQZBCRTKBICNIBQVFUCSQEXLJTBNSQFCOJFNOILRLKIPDUMFWDODSSZSKQWOHLMGCIAATHWYGDKDRUROEGJXDPPQIJKLCACYQATU");

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
    msg.setTimeStamp(0.216535010408);
    msg.setSource(62208U);
    msg.setSourceEntity(103U);
    msg.setDestination(54599U);
    msg.setDestinationEntity(233U);
    msg.command = 160U;
    msg.entities.assign("WBVNSYFNKEABEOPCGPMXMZTFBZJJTQZCWGDRUSKHBDZXPIXAEZFEGLFYMHCMBOOSSIHAJSKOTPJOQLLQEDEHIWEMCUVYMHRQLRGWRNCUKQCBZYJKJLJTANJAVUAYLUZRXRJB");

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
    msg.setTimeStamp(0.466834135031);
    msg.setSource(5069U);
    msg.setSourceEntity(11U);
    msg.setDestination(798U);
    msg.setDestinationEntity(53U);
    msg.command = 24U;
    msg.entities.assign("PIDZYIMNMJCHUFQBTUWKXFQPPVVBQGTOBWEAHWLZXGKNDBAHRGVHLGSEDIUCXMUBXHKDTGJJBLNFEOXTH");

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
    msg.setTimeStamp(0.557941633018);
    msg.setSource(47237U);
    msg.setSourceEntity(47U);
    msg.setDestination(33161U);
    msg.setDestinationEntity(171U);
    msg.command = 233U;
    msg.entities.assign("RXTNJAWMGCVWJUUSHNHVAPZEPDKZFJCVBCFKWCWXUWRLNSKTPCIEYRLBSHMUIAHEJJNVLGAGWQCKGHMUAFBOTXYRAZVUYCRTMKUTIHEXHZRDULDORLATMXTBPOCYKQRPRSFJVZDKDVBWJQSQSFBZYAYQPDZIDOYILNZMVMZEOBWQOXSXPPINLFFYIJCTKFSSHBQEQBLWOFGRIXUMQBGW");

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
    msg.setTimeStamp(0.0142954518328);
    msg.setSource(20705U);
    msg.setSourceEntity(244U);
    msg.setDestination(48234U);
    msg.setDestinationEntity(246U);
    msg.mcount = 180U;
    msg.mnames.assign("GVVNMIJHCDHMABJPZRTNSVGPHYIFBBAALEJHRAHSBWLWVIZLQKYEUCGGXKNEIOIWWQSOQTOZMIIJMMHSQKGIDCICBLFMVSFNGOZGVOTAZALWFRUFDEWGYLZTSHMWFBJLKNNSDYHUPWRVPOFHLJYNREDBVBEKCXTIBUKQVKPYXJYTKLBXRYOJRCRAZQMRGTOWJASQQXPEGDDWDPPFCXPYXZCNHETAUES");
    msg.ecount = 124U;
    msg.enames.assign("TVVCMOXYEXWUFIXTIGATHJOXWLTOLGQNAKKIMRDOACCBRGGNLSVOCLTPIZCCYAUJDOQZYSZNEANAYYQNRWCKADSUHPDBZBBUHHGZKRZODRQPAWWNPZUCSKEGROGIVHPKITCPSVJJGIYXZBHNCEPQXESFWWOYFVLNPGQRTWTFDXFSUUYEFJWSMSXDWBJJF");
    msg.ccount = 69U;
    msg.cnames.assign("EHYNAOHTFVJSEJNZGTJPSRGHCXBXTFIEBGUTZMIZLVABPMPHDBEBGE");
    msg.last_error.assign("MVGMYZHRNHOHTNXZYVJZMKYPXKQTQXPLEIXLSNZTYGPGJOFGXDXTXGYJJTROEHVUDUASONSKZHEEZTSMVWUVWZEUMQILFQKYBFESWMFHAILPSSPRNOBYJRBMWHRBKDBGACZCVYSZQRDNWNFICAGLQKEAJBNCHKIMBLUSFQPFRYOQEPCPQCKDAJTANOLBNTVDGVFDAXOMWHRUVLPCIXBAJBTWWIFWCDEODMHPVISKTUUUWXQJZIACLLEDKFC");
    msg.last_error_time = 0.0257391605595;

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
    msg.setTimeStamp(0.720079898528);
    msg.setSource(47335U);
    msg.setSourceEntity(32U);
    msg.setDestination(62842U);
    msg.setDestinationEntity(67U);
    msg.mcount = 208U;
    msg.mnames.assign("LWWNFFFFFBOMAJNUHTVPNSRLWINCAZCNCSGXQERGAVOZKQTBCFTCYDQJPQUUHDHXOLNRTEZTDGGQCYVAZKSPMSJHXGXCVRMGONPFSOSNXJJXXTUYOZXIGYRSKLVZDBDALCVHKUBEMAIGDKTYWGIJYYUPRSCBAVHXEARVBZBMJQOWPIZPIQTQPTOSAWKDXPNKYBYUFEHMVBGZLMDMIVIPHLZYKMBIWKLRLJEO");
    msg.ecount = 11U;
    msg.enames.assign("SINQREEEWMOZLATTEDBQDENKFWQNAUQJCZ");
    msg.ccount = 180U;
    msg.cnames.assign("XEAFOVHAFSCIMLUPLANKEBGQAWDRSPZSXZBUQXVUEXJPLQIXYRNVBDBGKTELGNZROCPYEQPSDRBQDKSMLMTVTYIYVUZNROFQRNROESAXPUJWCIXGJVHWDGDZWAHFMXQIYQLEHUPPOUNTUKBCWYVKMWCIWCWPJXLBTDYZO");
    msg.last_error.assign("YYBWVKIFAZFAJPIHEAVGGWHHCHNBXUSRETGQZCNVUMKQRZVSTQBWU");
    msg.last_error_time = 0.410189097971;

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
    msg.setTimeStamp(0.0671182118941);
    msg.setSource(10674U);
    msg.setSourceEntity(249U);
    msg.setDestination(43078U);
    msg.setDestinationEntity(148U);
    msg.mcount = 184U;
    msg.mnames.assign("NHAUVYTMJCXENOFEIERQRVMUQSFSDGOSGPCTXMDCLNSHZCXBYJIYDYJTAFKAKJMMHAUUGIPGNVHJULOIRFTRWLXOVJGJNGQVVSHVZHLYRWW");
    msg.ecount = 244U;
    msg.enames.assign("BAAEXKFPUUAPJXMYYALJFWMFQAZYNOEPPJNQLAIQVKONWCRNHKDCEVEHPJEQHCITEKYQLNBJXWZVXZGPSRMBRXKJUONOBSZPWL");
    msg.ccount = 51U;
    msg.cnames.assign("GCEIHLQNKMZMTMIZXDHEASUEBCQXTWKTVLDCGHMEXYAOGUMQSDYISGYJZHKEYKOETMUOODVZWVEFMGLQCUJJBTYSCGKPYQAJIRWNBABKLZDFETKLHHNHQAVDMYNPPZXFQSEMUNKOEAICIPFDPTAXUZIVDFRTJOVPJLNOFMHZCDVCATFRFGWCNWSXRBIGJKVIQLBRJXRXNNBSYPZBAPSOXWU");
    msg.last_error.assign("LWGQWSPBLNANJXNFQPIOJJUMRXOSJIAVBHOEIEEVMVUJKPASFXDWVQIHTWFCFGKHLWJFMZYHRUTSOJHIMUUVBRMOFZBYMPDIPPHSNBNYDMSOJNWXBPCTZVCFALGBBWBK");
    msg.last_error_time = 0.656775571824;

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
    msg.setTimeStamp(0.52205298949);
    msg.setSource(31793U);
    msg.setSourceEntity(206U);
    msg.setDestination(27636U);
    msg.setDestinationEntity(112U);
    msg.mask = 172U;
    msg.max_depth = 0.0551882499166;
    msg.min_altitude = 0.347225227651;
    msg.max_altitude = 0.601821903952;
    msg.min_speed = 0.907020067486;
    msg.max_speed = 0.663802599004;
    msg.max_vrate = 0.0209559300152;
    msg.lat = 0.37572770621;
    msg.lon = 0.277421660734;
    msg.orientation = 0.13445061543;
    msg.width = 0.0840525152112;
    msg.length = 0.198206604973;

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
    msg.setTimeStamp(0.463468607879);
    msg.setSource(39473U);
    msg.setSourceEntity(55U);
    msg.setDestination(2009U);
    msg.setDestinationEntity(77U);
    msg.mask = 2U;
    msg.max_depth = 0.461563067271;
    msg.min_altitude = 0.607920626309;
    msg.max_altitude = 0.98629504707;
    msg.min_speed = 0.675005377541;
    msg.max_speed = 0.792682669958;
    msg.max_vrate = 0.576433278857;
    msg.lat = 0.656567768593;
    msg.lon = 0.451797212002;
    msg.orientation = 0.490296715003;
    msg.width = 0.74077442283;
    msg.length = 0.566716780308;

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
    msg.setTimeStamp(0.428804640254);
    msg.setSource(65174U);
    msg.setSourceEntity(138U);
    msg.setDestination(57640U);
    msg.setDestinationEntity(254U);
    msg.mask = 166U;
    msg.max_depth = 0.569151764815;
    msg.min_altitude = 0.532324356553;
    msg.max_altitude = 0.748614279041;
    msg.min_speed = 0.766129222873;
    msg.max_speed = 0.313930458801;
    msg.max_vrate = 0.0686114335348;
    msg.lat = 0.191745158553;
    msg.lon = 0.067472932595;
    msg.orientation = 0.930293096256;
    msg.width = 0.0704546825825;
    msg.length = 0.673849305772;

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
    msg.setTimeStamp(0.9526474603);
    msg.setSource(47238U);
    msg.setSourceEntity(214U);
    msg.setDestination(44439U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.343229041999);
    msg.setSource(52073U);
    msg.setSourceEntity(177U);
    msg.setDestination(38466U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.0644979784871);
    msg.setSource(25999U);
    msg.setSourceEntity(110U);
    msg.setDestination(49137U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.190008156793);
    msg.setSource(34162U);
    msg.setSourceEntity(48U);
    msg.setDestination(40915U);
    msg.setDestinationEntity(243U);
    msg.duration = 6675U;

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
    msg.setTimeStamp(0.39082165818);
    msg.setSource(32781U);
    msg.setSourceEntity(186U);
    msg.setDestination(24515U);
    msg.setDestinationEntity(70U);
    msg.duration = 48319U;

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
    msg.setTimeStamp(0.239235027402);
    msg.setSource(62183U);
    msg.setSourceEntity(244U);
    msg.setDestination(34256U);
    msg.setDestinationEntity(154U);
    msg.duration = 23887U;

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
    msg.setTimeStamp(0.449260092903);
    msg.setSource(36349U);
    msg.setSourceEntity(30U);
    msg.setDestination(25639U);
    msg.setDestinationEntity(92U);
    msg.enable = 62U;
    msg.mask = 556828643U;
    msg.scope_ref = 1323029966U;

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
    msg.setTimeStamp(0.504123182036);
    msg.setSource(46345U);
    msg.setSourceEntity(6U);
    msg.setDestination(11404U);
    msg.setDestinationEntity(114U);
    msg.enable = 52U;
    msg.mask = 2111216748U;
    msg.scope_ref = 989316556U;

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
    msg.setTimeStamp(0.613996456788);
    msg.setSource(60645U);
    msg.setSourceEntity(169U);
    msg.setDestination(46207U);
    msg.setDestinationEntity(79U);
    msg.enable = 197U;
    msg.mask = 2062810113U;
    msg.scope_ref = 1906884405U;

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
    msg.setTimeStamp(0.483161081929);
    msg.setSource(24486U);
    msg.setSourceEntity(166U);
    msg.setDestination(34112U);
    msg.setDestinationEntity(93U);
    msg.medium = 34U;

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
    msg.setTimeStamp(0.0982194081372);
    msg.setSource(23039U);
    msg.setSourceEntity(207U);
    msg.setDestination(25997U);
    msg.setDestinationEntity(115U);
    msg.medium = 209U;

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
    msg.setTimeStamp(0.334493602229);
    msg.setSource(47149U);
    msg.setSourceEntity(38U);
    msg.setDestination(35644U);
    msg.setDestinationEntity(39U);
    msg.medium = 114U;

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
    msg.setTimeStamp(0.671370647602);
    msg.setSource(64495U);
    msg.setSourceEntity(166U);
    msg.setDestination(2501U);
    msg.setDestinationEntity(130U);
    msg.value = 0.718969823603;
    msg.type = 88U;

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
    msg.setTimeStamp(0.874301972549);
    msg.setSource(407U);
    msg.setSourceEntity(147U);
    msg.setDestination(33636U);
    msg.setDestinationEntity(122U);
    msg.value = 0.504221635732;
    msg.type = 167U;

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
    msg.setTimeStamp(0.476753427083);
    msg.setSource(28509U);
    msg.setSourceEntity(36U);
    msg.setDestination(18616U);
    msg.setDestinationEntity(145U);
    msg.value = 0.119000261939;
    msg.type = 191U;

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
    msg.setTimeStamp(0.479040121131);
    msg.setSource(47032U);
    msg.setSourceEntity(214U);
    msg.setDestination(20058U);
    msg.setDestinationEntity(112U);
    msg.possimerr = 0.205984789802;
    msg.converg = 0.783908614022;
    msg.turbulence = 0.231683384285;
    msg.possimmon = 145U;
    msg.commmon = 77U;
    msg.convergmon = 38U;

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
    msg.setTimeStamp(0.457676257152);
    msg.setSource(53736U);
    msg.setSourceEntity(98U);
    msg.setDestination(4785U);
    msg.setDestinationEntity(168U);
    msg.possimerr = 0.220728568054;
    msg.converg = 0.871107733006;
    msg.turbulence = 0.194939606142;
    msg.possimmon = 145U;
    msg.commmon = 127U;
    msg.convergmon = 46U;

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
    msg.setTimeStamp(0.179521913213);
    msg.setSource(59642U);
    msg.setSourceEntity(132U);
    msg.setDestination(62111U);
    msg.setDestinationEntity(9U);
    msg.possimerr = 0.468161316494;
    msg.converg = 0.274669432315;
    msg.turbulence = 0.0166085374075;
    msg.possimmon = 154U;
    msg.commmon = 207U;
    msg.convergmon = 166U;

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
    msg.setTimeStamp(0.188238675605);
    msg.setSource(7531U);
    msg.setSourceEntity(219U);
    msg.setDestination(46075U);
    msg.setDestinationEntity(5U);
    msg.autonomy = 219U;
    msg.mode.assign("RMAOVJRPXECVSDMZKUXQYFP");

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
    msg.setTimeStamp(0.812438165385);
    msg.setSource(53263U);
    msg.setSourceEntity(160U);
    msg.setDestination(47432U);
    msg.setDestinationEntity(55U);
    msg.autonomy = 149U;
    msg.mode.assign("CPFWGXTQBPLSCZGLBUFJML");

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
    msg.setTimeStamp(0.204660695638);
    msg.setSource(12849U);
    msg.setSourceEntity(230U);
    msg.setDestination(27395U);
    msg.setDestinationEntity(142U);
    msg.autonomy = 155U;
    msg.mode.assign("TBJEKVSTQMRPWLUMVINCNVQMZXMUATAHBHOUZDUZVWSXDIQDAVBYELGTKNSKEZFQODZQCTWDLYJQPJGLWZTMCLYFTINIEVHJLMOMJAGYEBFVZSEYUUVRSKKKXUHKOODFCTPRNRTJRABHSGPCWPNOKGXSITBYXXQUERXBJOHWFMODHIWHEPPEZCRSDKKJOBPCALXDRFZYILFIIVJULCGX");

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
    msg.setTimeStamp(0.810589351696);
    msg.setSource(36997U);
    msg.setSourceEntity(75U);
    msg.setDestination(61932U);
    msg.setDestinationEntity(172U);
    msg.type = 214U;
    msg.op = 106U;
    msg.possimerr = 0.932279569412;
    msg.converg = 0.28058892751;
    msg.turbulence = 0.685846751123;
    msg.possimmon = 179U;
    msg.commmon = 196U;
    msg.convergmon = 130U;

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
    msg.setTimeStamp(0.267640506822);
    msg.setSource(23322U);
    msg.setSourceEntity(159U);
    msg.setDestination(58045U);
    msg.setDestinationEntity(178U);
    msg.type = 135U;
    msg.op = 62U;
    msg.possimerr = 0.537194445566;
    msg.converg = 0.091289292795;
    msg.turbulence = 0.295079921905;
    msg.possimmon = 3U;
    msg.commmon = 130U;
    msg.convergmon = 179U;

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
    msg.setTimeStamp(0.539927929193);
    msg.setSource(39628U);
    msg.setSourceEntity(163U);
    msg.setDestination(3853U);
    msg.setDestinationEntity(218U);
    msg.type = 205U;
    msg.op = 67U;
    msg.possimerr = 0.594082512866;
    msg.converg = 0.345116402833;
    msg.turbulence = 0.364980017198;
    msg.possimmon = 56U;
    msg.commmon = 66U;
    msg.convergmon = 160U;

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
    msg.setTimeStamp(0.206114531033);
    msg.setSource(18912U);
    msg.setSourceEntity(50U);
    msg.setDestination(22489U);
    msg.setDestinationEntity(92U);
    msg.op = 160U;
    msg.comm_interface = 237U;
    msg.period = 3070U;
    msg.sys_dst.assign("ISLNMINGEXAVMGQWIQDFDJAHGYEEFAVCLHBHEIJYDXXSXENSQBLBTECL");

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
    msg.setTimeStamp(0.297066112937);
    msg.setSource(14284U);
    msg.setSourceEntity(104U);
    msg.setDestination(22637U);
    msg.setDestinationEntity(83U);
    msg.op = 47U;
    msg.comm_interface = 43U;
    msg.period = 56475U;
    msg.sys_dst.assign("NEQOCXMONFLJNHJZWIGGBXPGUZNQUX");

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
    msg.setTimeStamp(0.198120849349);
    msg.setSource(46474U);
    msg.setSourceEntity(234U);
    msg.setDestination(13215U);
    msg.setDestinationEntity(204U);
    msg.op = 191U;
    msg.comm_interface = 155U;
    msg.period = 55713U;
    msg.sys_dst.assign("SYOTDLYVEHCEBQCMEZMPIDMJKRLPHGWYJTCGWATWNYWNNSLUDFYQJEGPSZEHMTZWKRARLZXAIOAOHTVBKRILJBXCMSFFHBFBOGINERNCBPKTKDGMQFZHAVECIUVETHYSJMMOOJXZRRVBREBDVINBDPAQCPWDNHQOUUAKFYHQLHYCKXLJSSXUXLBWMGAPMYXFVXQJSDKPWOXICN");

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
    msg.setTimeStamp(0.3192833124);
    msg.setSource(17750U);
    msg.setSourceEntity(189U);
    msg.setDestination(5695U);
    msg.setDestinationEntity(117U);
    msg.stime = 1295971329U;
    msg.latitude = 0.959709409789;
    msg.longitude = 0.391217481107;
    msg.altitude = 37302U;
    msg.depth = 40012U;
    msg.heading = 36306U;
    msg.speed = 18894;
    msg.fuel = 55;
    msg.exec_state = -61;
    msg.plan_checksum = 28787U;

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
    msg.setTimeStamp(0.919828953587);
    msg.setSource(1541U);
    msg.setSourceEntity(113U);
    msg.setDestination(63722U);
    msg.setDestinationEntity(95U);
    msg.stime = 2697073762U;
    msg.latitude = 0.895682689125;
    msg.longitude = 0.624682547196;
    msg.altitude = 56957U;
    msg.depth = 7755U;
    msg.heading = 15122U;
    msg.speed = 30203;
    msg.fuel = -86;
    msg.exec_state = -127;
    msg.plan_checksum = 43985U;

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
    msg.setTimeStamp(0.255563820619);
    msg.setSource(63204U);
    msg.setSourceEntity(80U);
    msg.setDestination(61278U);
    msg.setDestinationEntity(14U);
    msg.stime = 1577685116U;
    msg.latitude = 0.155607392302;
    msg.longitude = 0.177262130442;
    msg.altitude = 28094U;
    msg.depth = 52291U;
    msg.heading = 16706U;
    msg.speed = -1617;
    msg.fuel = -36;
    msg.exec_state = 101;
    msg.plan_checksum = 63059U;

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
    msg.setTimeStamp(0.288551604194);
    msg.setSource(753U);
    msg.setSourceEntity(200U);
    msg.setDestination(52784U);
    msg.setDestinationEntity(49U);
    msg.req_id = 61298U;
    msg.comm_mean = 169U;
    msg.destination.assign("BUYXUNMQNQVNIYDVNPLHNPSWJJDZAOHHZMMCFHQKVWWBKZTXUGAZGFRGXIVIFVYFBODHLSQQOQPXSJTEWXUNDRGMEHDEXSJTGBPVBFFBEJASEMINKOCGAIDCZCDSLIYWIBAVIRTVMBSQGYYGPDZTQLZBRPLKEBAKWSXKNTCTYOIUPHLTLCUVXZMCRGEOSEKDMSEWXPJKORNRKTDHUGUACLOTYJHYWRAUHFXVLZMUCRLFAZJJIPOWRQEQAKCJWY");
    msg.deadline = 0.655517021474;
    msg.data_mode = 196U;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 83U;
    tmp_msg_0.lon_gain = 0.505979767387;
    tmp_msg_0.lat_gain = 0.345445377289;
    tmp_msg_0.bond_thick = 0.655650180786;
    tmp_msg_0.lead_gain = 0.505554681047;
    tmp_msg_0.deconfl_gain = 0.252999234972;
    tmp_msg_0.accel_switch_gain = 0.888065081964;
    tmp_msg_0.safe_dist = 0.797614474408;
    tmp_msg_0.deconflict_offset = 0.979481715533;
    tmp_msg_0.accel_safe_margin = 0.825799226918;
    tmp_msg_0.accel_lim_x = 0.213451986238;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ODXEOFIPZXXLWMOYKXBBJXPONYESYTAXAXGRDOHWJVANYFAKKRZTMELRPRIQSYGKCLKCTRPDCJJICOIIGTFAWSEAJCGZYRMTOSINYEVXKIHSZMJAEUHRWZHCVAIDEORZONLYGUD");
    const char tmp_msg_1[] = {2, -114, -61, -85, 27, -82, -122, -12, 99, -15, -101, -84, -125, -124, -72, 117, 46, -91, -54, 97, 63, -91, 11, -1, -126, 71, -112, -81, -72, -23, -60, -48, 6, -10, 71, -55, -62, 48, -84, -24, 108, 68, 33, -104, 22, 35, -104, -20, 86, -55, 99, -104, -51, -99, -115, -5, 101, 13, -11, 48, 48, -59, 104, -38, 111, -3, -69, -87, 121, 4, 102, -92, 61, -116, -31, 88, 94, 70, 1, -33, 109, 118, -2, 79, -109, 35, -96, -36, -103, 13, 52, 35, 90, 60, -120, -32, -34, 113, -67, 18, -59, 123, -54, -78, 33, -2, 49, -14, -86, -42, -59, 111, -123, -123, 46, -57, -5, -20, -27, -27, 69, 97, -39, -109, -63, 50, 45, -76, -27, 49, 55, 120, -105, -105, -78, -69, -17, -99, -57, -79, 82, -110, 1, 54, 39, 115, 36, -103, 107, 83, 126, -65, -6, -56, 51, 8, 48, 83, -32, 120, -104, -79};
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
    msg.setTimeStamp(0.538818021672);
    msg.setSource(20631U);
    msg.setSourceEntity(195U);
    msg.setDestination(14959U);
    msg.setDestinationEntity(218U);
    msg.req_id = 42321U;
    msg.comm_mean = 238U;
    msg.destination.assign("XYCZAOCNGINCDBTVYOSZWDNNMQVLTUWEQKVJVWNGYRMTXADAXEOZDWHIWLZIMFHPINGMULNQFKSSKAXXRMTXBQHTWKGWQBOPKEEACJRSIGGBOCWAZSDBYZRHUZRKXCEUKGVKPGJQHXHALVYMBIMHIFBEUJOPPKMOFALAUFSHJRTQLRRIZQDYPJRWJOSFZZ");
    msg.deadline = 0.745979044257;
    msg.data_mode = 189U;
    IMC::Aborted tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JVXVQNHSIAQRMSLHFDMGEDFLJGUVZAOIOFTJGPBXDUTIXRHMTGOEDEUQVTTEJCWDFCNEHGNVNIQKWZHHJRZWBCZMQSXYFIESILAXGUPKVWHEXGOAMYLORL");
    const char tmp_msg_1[] = {-27, 114, -101, -60, -50, 120, -55, 32, -86, 101, -113, -40, -59, 83, -38, -33, 34, 66, -12, 73, 54, -70, -69, -22, -94, -112, 59, -53, 45, -93, -92, -71, -81, 9, -63, -85, -97, 21, 91, -26, -92, -57, 88, -45, -22, 124, 125, -17, -99, -28, -7, -64, -111, 55, -4, 51, 3, 66, -61, -110, -76, -10, 31, 83, -128, -5, -85, 37, 46, 45, -88, 104, 115, -53, 111, -56, -12, -117, 29, 34, 17, -70, 36, 118, -51, 101, -15, -12, 32, -59, 47, 27, -8, -84, 76, 26, -7, 35, -114, -98, 0, -112, -61, 43, -65, -23, -32, -74, 79, 80, -65, -121, -4, 105, 123, 41, -115, 54, 34, 34, 37, 98, -74, 23, 62, 93, -60, 102, 88, -105, 11, 46, 25, 79, -24, 103, 46, 1, 105, 125, 113, 28, -15, -3, 111, 91, 89, 53, 26, -71, -101, -87, 57, 76, 17, -43, -117, -46, -65, -87, -82, -113, 54, 70, -52, 1, -67, 0, 1, 57, 113, -52, -128, -121, -111, -23, -16, -57, 78, 105, -67, 43, 123};
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
    msg.setTimeStamp(0.217597063731);
    msg.setSource(39464U);
    msg.setSourceEntity(7U);
    msg.setDestination(55721U);
    msg.setDestinationEntity(75U);
    msg.req_id = 42938U;
    msg.comm_mean = 238U;
    msg.destination.assign("WFKCNUGEMOPIDXLOOVBNGNDYZPXG");
    msg.deadline = 0.256368814985;
    msg.data_mode = 228U;
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 217U;
    tmp_msg_0.mnames.assign("BRSSVVIUXCEZ");
    tmp_msg_0.ecount = 197U;
    tmp_msg_0.enames.assign("RHBCTBJZMFVFUJSSRMYVCEZKHFARTYTQZAEUPDPNIVKMNHKGMPBHXINOXUJKHLVCTJCZMJFCBEFLWKSWLVMBXSJKUQYUTTSLNAHVAIGOWUWJGMIZXBRZGH");
    tmp_msg_0.ccount = 204U;
    tmp_msg_0.cnames.assign("ZRVTHWKUNRFVUETASXXDMQZWQPFFTVILZYRZZ");
    tmp_msg_0.last_error.assign("SFWBWJXGZFDBZMMULZDNDZVPHRRUGBCPHVWAXIPOEKFOFCRBTRPFLGTPGUVQTXJNUEOVCZENAPNTEIMELMUUHLWFNQCUKVYTNISIVQMOYWPYDUJEYGFIDWKMCOVBMMFZYLTPOTBXASWDKNLSHIJCYQXYUXRIRHJZJKARQXKQLAPIKGTZJIVICXXBEEJGWOYAZYVVEBGKHMDRGFGDSELNSWPJKDWAHJQSBLRULCRZONCYTQXKSHQSTAANBH");
    tmp_msg_0.last_error_time = 0.314467808117;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OVRVLPGNXBCJCPEANOGMIHHISTRPDIFBLBPXCZRXZDCRQQGSLAWAEKUHYXVKBKVNVJGHBMUEMCCMOCMSADTOLJR");
    const char tmp_msg_1[] = {-67, -127, 86, 22, 87, 11, 94, 31, 73, 126, -33, -102, 93, 118, -55, 121, 43, -114, -72, -89, 93, 56, 69, -120, 96, -112, -11, -127, -43, -3, 2, 98, 47, -87, -18, 39, 97, -42, 110, -56, 11, -127, 8, -64, -41, -66, 10, 27, -91, 114, -99, -6, -29, 61, 124, -94, -112, 110, -40, 119, -76};
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
    msg.setTimeStamp(0.55632262505);
    msg.setSource(63376U);
    msg.setSourceEntity(158U);
    msg.setDestination(44667U);
    msg.setDestinationEntity(144U);
    msg.req_id = 21503U;
    msg.status = 158U;
    msg.info.assign("DURSPLUGWMPCUDRDZWOGKDMHQKVJJHQRTZFBXSTWENKEXJVGFAXCCEOHUNOGKG");

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
    msg.setTimeStamp(0.492533173622);
    msg.setSource(14170U);
    msg.setSourceEntity(101U);
    msg.setDestination(13098U);
    msg.setDestinationEntity(121U);
    msg.req_id = 54393U;
    msg.status = 192U;
    msg.info.assign("VDAJSQPZENSUYHBFTUDKENFJDGSCLNRWMEYHKPNAZWHHYHWJKVSIZWSZATWCXCRWZAKOLFXJXIIFXKUCMYIABRZLLABSXBKONXURGM");

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
    msg.setTimeStamp(0.0499131617457);
    msg.setSource(63986U);
    msg.setSourceEntity(95U);
    msg.setDestination(55633U);
    msg.setDestinationEntity(209U);
    msg.req_id = 17048U;
    msg.status = 55U;
    msg.info.assign("PFTKBVWACDUZTMEMAYRZJMXYINGZDJAFHGKPWVRVKTTQLXBESPVFRNYEMHOAEICXYWIEPOCGPQFBBOUUSFQDQGOGWYTPUAJFYNOGJVUQLHDCLQRVMTPSCENNSMUBLFXLH");

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
    msg.setTimeStamp(0.487759586525);
    msg.setSource(42471U);
    msg.setSourceEntity(239U);
    msg.setDestination(7611U);
    msg.setDestinationEntity(15U);
    msg.req_id = 41830U;
    msg.destination.assign("ZBJTFLWVBDNIOPAYE");
    msg.timeout = 0.987217157378;
    msg.sms_text.assign("VANIPJHPIGXFROGBAWAZODHTVWIBCZNBKEFARNHKZVYQUQHVOWGDUHUNJGMTYMXLPDEZLHUYETGZQJVEFEQOOABRAGXSTFLLLKPVVFPUVXLDPEDWUMRSIJBFYVMBJJJNDNMRHXSUMTUCKNCKGFDLIOTSXWKMBHSCYL");

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
    msg.setTimeStamp(0.470095865575);
    msg.setSource(3648U);
    msg.setSourceEntity(184U);
    msg.setDestination(7121U);
    msg.setDestinationEntity(158U);
    msg.req_id = 10526U;
    msg.destination.assign("ZLJRRKDEJCGWFNIGNWPHOAIIODXZSEWHXMABANYQGCSUXXSQNHKTBHNAZLLGVIZGWUCRKLPEYCIZZKVSGMZFUOJOEDCLVLWISXGNYICDMVTHTTPJPUJQMTWXUPFRRBCXAJEEAUDRBAFQPYYOCYVFKPHNKFAYREHKZKXNCPGJNUWQMNLOPESSSDXEQAGIBVIWKMVIMALBRBWUJDYSTQKFOORTCZWYMBDQQGJTBZELSODRFYVXOUUJ");
    msg.timeout = 0.305302344932;
    msg.sms_text.assign("ZSGFOPBMFKZNMYMBXPGKEBHKZLLAWQQOTHEFVDQZADOYO");

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
    msg.setTimeStamp(0.199271714581);
    msg.setSource(27021U);
    msg.setSourceEntity(123U);
    msg.setDestination(18853U);
    msg.setDestinationEntity(124U);
    msg.req_id = 49463U;
    msg.destination.assign("WGDTFPCHADQMCDIQGWRJQOHUIMFNROBCTGTAHFBHJOUGSKRQAZVYECMFMXKYLGNJXCOEAKOEVXVMOFZPCIFEPLVDLWFJTLCUOUIGPOZZAWSGRUSKAKSJHX");
    msg.timeout = 0.165848482623;
    msg.sms_text.assign("FJFQCOTLYEIIRJEBRTTOGABYACQWXAWOQTNJY");

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
    msg.setTimeStamp(0.0013398774568);
    msg.setSource(64322U);
    msg.setSourceEntity(192U);
    msg.setDestination(52164U);
    msg.setDestinationEntity(15U);
    msg.req_id = 42208U;
    msg.status = 78U;
    msg.info.assign("GXTBTDBAWECWENNRKFUJVFOPHFNTPJOTJI");

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
    msg.setTimeStamp(0.475788888874);
    msg.setSource(3946U);
    msg.setSourceEntity(57U);
    msg.setDestination(61064U);
    msg.setDestinationEntity(137U);
    msg.req_id = 56914U;
    msg.status = 41U;
    msg.info.assign("VDDAKHSLHBZXPDOHFAHRPRNJBWKTYIXWGDH");

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
    msg.setTimeStamp(0.34447123009);
    msg.setSource(21692U);
    msg.setSourceEntity(87U);
    msg.setDestination(22685U);
    msg.setDestinationEntity(249U);
    msg.req_id = 7714U;
    msg.status = 73U;
    msg.info.assign("NIREAUEFYWEAKYLDUKORXSTJMFRBRGGEPRYUWUDUXIZHZASGLQJKMNSFZHSVKOEMOXTKGFALS");

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
    msg.setTimeStamp(0.516861214876);
    msg.setSource(51864U);
    msg.setSourceEntity(158U);
    msg.setDestination(1654U);
    msg.setDestinationEntity(94U);
    msg.state = 155U;

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
    msg.setTimeStamp(0.791455029812);
    msg.setSource(28101U);
    msg.setSourceEntity(197U);
    msg.setDestination(62070U);
    msg.setDestinationEntity(56U);
    msg.state = 62U;

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
    msg.setTimeStamp(0.220880573736);
    msg.setSource(38877U);
    msg.setSourceEntity(46U);
    msg.setDestination(17776U);
    msg.setDestinationEntity(218U);
    msg.state = 102U;

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
    msg.setTimeStamp(0.941115631398);
    msg.setSource(12098U);
    msg.setSourceEntity(17U);
    msg.setDestination(24356U);
    msg.setDestinationEntity(93U);
    msg.state = 136U;

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
    msg.setTimeStamp(0.113949642795);
    msg.setSource(50381U);
    msg.setSourceEntity(170U);
    msg.setDestination(2711U);
    msg.setDestinationEntity(9U);
    msg.state = 33U;

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
    msg.setTimeStamp(0.590364871732);
    msg.setSource(843U);
    msg.setSourceEntity(84U);
    msg.setDestination(157U);
    msg.setDestinationEntity(98U);
    msg.state = 26U;

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
    msg.setTimeStamp(0.841985326253);
    msg.setSource(47704U);
    msg.setSourceEntity(43U);
    msg.setDestination(18839U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.0860445657777);
    msg.setSource(51258U);
    msg.setSourceEntity(218U);
    msg.setDestination(62876U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.667561258192);
    msg.setSource(29217U);
    msg.setSourceEntity(58U);
    msg.setDestination(43815U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.807509608709);
    msg.setSource(44367U);
    msg.setSourceEntity(61U);
    msg.setDestination(65240U);
    msg.setDestinationEntity(173U);
    msg.plan_id.assign("SQEHIUBTECKMJVQZNCJYDBIPUZYWUWKFGNSGURXJDXVAMHOFWEAYMCRYNLBTRLTYCOVQRNUKGWRHOBBELZLTXIKSPFASNLARPHJWASGIWCEXIDIKFUVOUXTFEVJVYQXYPMWOCGVGXAXAQZROHWTPLHITMOGDBGJVBBTSQSQFPAXNZKMZCPSYFERYLDWEBCGMVTQUDHBMULDIFRZPZVQKXGNTQSICERPDFZHONWPIEDOJUMJALJ");
    msg.description.assign("NJZOBDTIFSJKTRQVKCZCSMOJMFTNARXAGYVHBGLCUYWQVPXSJYNHNFOOQPQGDQTNHGJLRUYHZICYGDPXEJCRFLRCNBIOLHOZLAXPMZLDILFBHZEXNEIEWGWLITAVPCXD");
    msg.vnamespace.assign("XVPYSPZXADABESMZMYQPNWZPGNTGJONUJWFTPEQUPCAKHHVIBMTSOQRVAZFDXDUKJTHPXURLFBUZARLQBCLBAESKO");
    msg.start_man_id.assign("GYDCVHPRMLNZAYIGEEZPDOPUYDSHQSJWLCIZYKNZDFPXNWGWBZKXKBHLODAAVLIJLBDGRVLKRHBZOOQUPDSUQRRHIKVVRZJKMSCCJEOATJGGVMKISOSOLXJQGCQ");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("NALRGTNPGUCDVEDPWDFUVHPFHYTQLWUNFTXYZCIETIHUOBHRZBKOISPDQMSPOHLWNLECGCLOGOKJXCQXZGKXPVVGDCTKJMWQKNSIQRZWBMF");
    tmp_msg_0.dest_man.assign("XQOWPVFYYTIJQXFQLIYSWJPKJQYRWCNDGFLXUQJNSBVZVUQFMBYLNPDRTMVCBTCQUOGDNKQBMWBVITEUMCPEWKIDSGBVCAYHIRGUNHOSSPUCUTVTAMEGUZDXBEENYSRVIXARI");
    tmp_msg_0.conditions.assign("HXFAEXYAGOLSEBGBWLBYOITQGKCHEEZDRQNMFYUEOBUPRDKYPXWHYQWUSJCUCRMGMCCMNJIKOLZLNKVFHPUAKVWMWCPVBAVMTVGZVGKHTFODXNPDKZVRWFINUJNZZPBKGFYJXAEESIP");
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
    msg.setTimeStamp(0.796171025963);
    msg.setSource(55709U);
    msg.setSourceEntity(88U);
    msg.setDestination(30836U);
    msg.setDestinationEntity(206U);
    msg.plan_id.assign("VDGRQGXQRISQHKOAFHKFZCYWGMKZJLARIEJFSYGCTTURBIPBEQZHUWXGCLEPFUDUMQAMLHFIYAGCPEAQLXLYEVNMXNHMWKUKEZJFTGAMUVXNTPOISWADHDXHODXCRYNUOOQCSQGVUDPZ");
    msg.description.assign("WVIXMNJVRXZLOJZSFJLOCRWLPUMAAOVJEKNNHLPWOBDYORDXFHLWQIDBCEOIEYZKFCRTFGUISLYCSSZLAWVIJQEOPFVTYSHRADK");
    msg.vnamespace.assign("ENTPGOHYZYGNEMJQJDIACGQWUVXERJYDYHMSXTXABFWSYMBDVAIYVMWDRWQGGWSWFZFWOPVFR");
    msg.start_man_id.assign("WJOVRPEBHTUGEXSSVCMEZCGXIYMAUVNVKIMPOREZBBUFFWHWCZLGRMQMRONQYHZFVWVOTXBDRHXJCJMMRDFQFNOXUEWJIFNPWYTAFNTZSSTELXQTHJWGTULPUOJKSAHIBNJWHMPRHBCGCKNKPIFUKDQOVXPUIORASBGILJDPEYAORYVJGMTEKHSBPLZZQVKALMAYSKQDSISODZBNACUAXCWNUGXGEYQNC");

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
    msg.setTimeStamp(0.28027293889);
    msg.setSource(8947U);
    msg.setSourceEntity(188U);
    msg.setDestination(56089U);
    msg.setDestinationEntity(72U);
    msg.plan_id.assign("DOAMSWBCKERAAPCLZMROXZEYFBCERQNWLSAPFLAKEHVPNAHWBRBJIBLIQSASGIXMQOYBYMYUYSFZSCOZHDMVTJDITJHRTKLHDUTGGYLVCGHTIELVIYZUPHZUYTSDKXWCXGNGCBJPQZVQLXTJQUOSDDTNBIUGYHWSVPOGIFMJPOCICRXJFFXNRNOKMKDYLFMANWWXDCNRSHZE");
    msg.description.assign("JZYYRMYDHGOUVCXGNXKHNFINBJPFTLEHOXIIGADQZHMXAWGZJSEBALVEZOERBGBDWYESYNQWQYHPTSCWJMBFLLVNUQOVZMXIKZZEPSGOOBVRVCHHLRNUBBLKDTQGPWAFYVVKRWPQRPYMEKTRNURTJGQCOKIFSZNTAQSZHAPEDZLIKLNQCPMKUFMWAAMSMGUVYHNCDUFIWDKPJOTOMXVCETATCRRJCFLYHFC");
    msg.vnamespace.assign("VROPQLNBFKQGUQJIWVOBECETDEEOSMJZZCSLYGZMDGUDGKZMGCUQRDXOCJMAINAFRBCNQJQGLBABVCPLFKYAIUCBUXYVIBFYRPIOMDFWE");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("IBTQZMCKQZXPQTOKWUNHECTVUVCLFJYBXYZVERGBRKOAWZBQHQIFPJSWMMOLJBVDMVAJZQYGAPAQTFSKOBLJPVSFWUIPTFGCTNFKNJUNNRYHZPGRWRVEMNPFCJOUMQXATYYTBIH");
    tmp_msg_0.value.assign("SJCJGPUWFWHVZJLZLAHBMRQSQOWVCEUZCOTKVPVRMKROUQRJXTYDZSLALIMJMXQPPAPPQKEDWDZSYLZRVUCQZNICQUNKNTVRLFBAU");
    tmp_msg_0.type = 27U;
    tmp_msg_0.access = 129U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FLHENGMPAZLRRIUEFGFJQKDXAQCAIZHAMVDFZKHVKATPYHPOUPRYDYISWWXFGURJKEJGPQUIMAWNIXWVNTZCZOUOFXUNQSYSWVIJMQJCEEOQBZRFMSRIREBJVCALSCWKPRPYOBWDCSXBKVDVKHLLJMRNTJZYPHBHUXMPOIDZTTPVFBTVWHYIXKEZJGNQTDGOGXDEHQFXODNSTIQGAYC");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ZCJMEFECYVHXOSUGQVABGAPBXFPTKMLTZHXJRILTVLLKWMSISOYOZIJDWTDBXMEYKNSCWOBUAHCKRFCTGGALDWNXPZVRWEUNDFNNYVEWVAHNAOJBPFNQCWZVJARMJR");
    tmp_msg_1.dest_man.assign("YAQIRJHFNUDFSEWUZKHKRYWTAHBPCMOXCJUBZNFCIJAQGAAVQSIQVZESXQPGRLIFHNWOUGLKYJWUTHVDPSRHTVCUJPOWDKRAEGKJRVLBEHMJNZADBXBZLCI");
    tmp_msg_1.conditions.assign("DKGGAWZADGGPNEKDWJHJDEVDKPETBUTBTRWFAQKVXJIPIFBOMQNTRIQHIUZFOIDXEVOELNENPYQZYWNKWNSKZBELACCGPQFFSAVYCVJKVZMBHRLQXERCSDYSHNCXIPLOLXTCUOLRUXADWFABUHZOLLRGOAOISSYBUTEQHJFMXGNAMLLHSZIOBRPQNDQFZBTYUWJJHCJXVNS");
    IMC::Loiter tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 6562U;
    tmp_tmp_msg_1_0.lat = 0.99294071769;
    tmp_tmp_msg_1_0.lon = 0.340920677922;
    tmp_tmp_msg_1_0.z = 0.776769683767;
    tmp_tmp_msg_1_0.z_units = 136U;
    tmp_tmp_msg_1_0.duration = 34723U;
    tmp_tmp_msg_1_0.speed = 0.016084695313;
    tmp_tmp_msg_1_0.speed_units = 216U;
    tmp_tmp_msg_1_0.type = 107U;
    tmp_tmp_msg_1_0.radius = 0.363180662237;
    tmp_tmp_msg_1_0.length = 0.4886292729;
    tmp_tmp_msg_1_0.bearing = 0.270498313492;
    tmp_tmp_msg_1_0.direction = 51U;
    tmp_tmp_msg_1_0.custom.assign("QUVPJLDWBQZXUNWHEXFZMNTRFTKLSGZWOOURRMSZKUIRDQTICWXONDIFRJOWTJBBIRSJMGEKKVIHXGHPNYLVVVYLHTGAXYJJAIWRJWQMGZGQTMBCOOPAYUISSUATFPYVEOJAMUNCTBVEVNEKCPRK");
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
    msg.setTimeStamp(0.766161802784);
    msg.setSource(24647U);
    msg.setSourceEntity(158U);
    msg.setDestination(1148U);
    msg.setDestinationEntity(250U);
    msg.maneuver_id.assign("LEYISVBUFUAPKOXBRJRCSUUEQPWJIQGSPRLDFCXQJUR");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.75920632292;
    tmp_msg_0.lon = 0.72135350627;
    tmp_msg_0.z = 0.172151315815;
    tmp_msg_0.z_units = 42U;
    tmp_msg_0.radius = 0.562602470009;
    tmp_msg_0.duration = 25810U;
    tmp_msg_0.speed = 0.140568576502;
    tmp_msg_0.speed_units = 103U;
    tmp_msg_0.popup_period = 12504U;
    tmp_msg_0.popup_duration = 48785U;
    tmp_msg_0.flags = 21U;
    tmp_msg_0.custom.assign("DBYGJKJEDNOLVPWZOCOUAIEFUBECADHVQQWFCXXJRAMXHNCNATBTXNVJZGZUBPLHYCDMYGCVMHMEYUBMHOQQQHKZODNQTHZAUBZNGIDQGSIOFLENAUXMRMLTERVSXOCEYPVYKWAGLIPPTUXGFYGPJTXCEJKFYMRKOQPGMHSMJBXSKLKCTCJNTFZWUKWRKHOLYVFP");
    msg.data.set(tmp_msg_0);
    IMC::NeptusBlob tmp_msg_1;
    tmp_msg_1.content_type.assign("MAPXFZJBPDFPTAFABSBSVQJZDFVXGTYBPBLHDTJTQXWKWIGOEAOVFLORTXRAHYOCTWUVUEGEZPHLZKWKCYNGTADJCRXAESBQYUYXUGBZZWEJGQ");
    const char tmp_tmp_msg_1_0[] = {98, 105, 33, 32, -35, 50, 73, 107, -70, 26, 48, -128, 85, -4, -67, 61, 45, -13, -54, -32, 4, -93, 96, -19, -88, -8, -56, 35, -79, -34, 97, 94, -88, 123, 19, 19, -73, 91, 20, -116, -10, 77, -2, 78, -49, 41, 114, -64, 81, -69, -29, 48, -6, 78, -86, -48, -16, 46, 79, 16, 110, 6, -86, -80, -70, -3, -33, 47, -71, 63, -104, 64, 17, -90, 103, 113, 99, -107, 42, 18, 92, 52, 36, -90, 42, -119, 89, -32, -96, 93, -40, 25, 90, 90, -100, 54, 10, 115, 87, -67, 44, -18, -4, -103, -115, -98, -124, -3, -86, -55, 83, 29, 7, -102, -2, -70, 34, 14, -10, 83, 37, 48, -81, 125, -108, 92, 71, 15, -49, -30, -93, -54, -112, 123, 92, 54, 97, -101, -67, -6, -32, -119, 86, -91, -128, -23, 54, -76, -91, -85, 103, -4, -24, 34, -25, -98, 20, 105, 96, 82, 54, -114, -61, 114, -67, 67, 69, -74, -120, 64, -26, -16, 29, 78, 84, 60, -59, 86, -84, 19, -93, -38, -77, -95, -10, -74, 88, 39, 98, 103, 116, -24, -45, 40, -3, 85, 99, 39, -91, 43, -87, -127, 126, 8, 12, -41, -70, 113, -125, -22, -102, -122, 18, 14, 40, 113, 95, 107, 46, 32, 43, -56, 40, -59, 118, 103, 89, -100, 82};
    tmp_msg_1.content.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PlanDB tmp_msg_2;
    tmp_msg_2.type = 112U;
    tmp_msg_2.op = 252U;
    tmp_msg_2.request_id = 59035U;
    tmp_msg_2.plan_id.assign("QKDCWPPYBJSQSDDURPOMQMGFBBRLNCUMOZHWZUEVSWISVDENDMKDPXUGHGMMAYWYCIZNVAXITCFYCJAZWYNGUQIVNOTEQZWBLCTLZEHSXJPOYEJEFGAOQEKHWSQISSQUJHFDFGWRNEKFGTBKAKITBIFBELFOGIULTPXXJTPCZPXZAXODLUZOQNUVJPTLL");
    IMC::CommsRelay tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.lat = 0.0246982263078;
    tmp_tmp_msg_2_0.lon = 0.616994045974;
    tmp_tmp_msg_2_0.speed = 0.344867699061;
    tmp_tmp_msg_2_0.speed_units = 73U;
    tmp_tmp_msg_2_0.duration = 31627U;
    tmp_tmp_msg_2_0.sys_a = 4479U;
    tmp_tmp_msg_2_0.sys_b = 42098U;
    tmp_tmp_msg_2_0.move_threshold = 0.267856835319;
    tmp_msg_2.arg.set(tmp_tmp_msg_2_0);
    tmp_msg_2.info.assign("MTPMBCSQRGCYZAKLCRYANBTVQTWSLFJRWJFPGENKXVPZJGIWQYHYGJPKBHEWNLITNVUYOSUBRSCGXXOUHICVEYBQFOAWMMGUZXFCANVDHLQZHLPDOZTIZX");
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
    msg.setTimeStamp(0.11146811594);
    msg.setSource(42739U);
    msg.setSourceEntity(178U);
    msg.setDestination(15507U);
    msg.setDestinationEntity(29U);
    msg.maneuver_id.assign("TTNMHEAIGLDRFAEDYRHZLVLSTMUTBKJMVFWTYTPCPKXIMJOIDDXMCJXQNOHGBJSDPBPOIIBZSEOONGZQURHQWHKJVXBJGDGCEEHDLIYQVQOYKVFAOQYSNJERYHUDKVVAXYKBKPIIPCDSSXFFBOBTUASMURWGYFPNZNAKEVURGVUEAOAXYZUFWZJLCALW");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.0154939020612;
    tmp_msg_0.lon = 0.438248729752;
    tmp_msg_0.z = 0.493793596239;
    tmp_msg_0.z_units = 224U;
    tmp_msg_0.speed = 0.731829597959;
    tmp_msg_0.speed_units = 250U;
    tmp_msg_0.abort_z = 0.149741808043;
    tmp_msg_0.bearing = 0.619815360086;
    tmp_msg_0.glide_slope = 189U;
    tmp_msg_0.glide_slope_alt = 0.618335831735;
    tmp_msg_0.custom.assign("BRLJBKBHXFYBUAPQNJIDQFRILCUVZGRDDVECTKNJWGQSFNCBOAQOHSMFPMALAWYAPMUOEAKKDAZQOWNTMFDWZWPXDBNGFHTKBVEN");
    msg.data.set(tmp_msg_0);
    IMC::SoiState tmp_msg_1;
    tmp_msg_1.state = 100U;
    tmp_msg_1.plan_id = 37401U;
    tmp_msg_1.wpt_id = 91U;
    tmp_msg_1.settings_chk = 19775U;
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
    msg.setTimeStamp(0.939831575134);
    msg.setSource(8152U);
    msg.setSourceEntity(176U);
    msg.setDestination(32520U);
    msg.setDestinationEntity(46U);
    msg.maneuver_id.assign("XVOUSJYLKOBQLMABHVSVJMHYQVTUSNHGEFZERVIZ");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 9560U;
    tmp_msg_0.lat = 0.760891818033;
    tmp_msg_0.lon = 0.337554037613;
    tmp_msg_0.z = 0.48134219406;
    tmp_msg_0.z_units = 189U;
    tmp_msg_0.speed = 0.899566767915;
    tmp_msg_0.speed_units = 141U;
    tmp_msg_0.custom.assign("JHENVHOWYP");
    msg.data.set(tmp_msg_0);
    IMC::HistoricSonarData tmp_msg_1;
    tmp_msg_1.altitude = 0.313918792726;
    tmp_msg_1.width = 0.131988522312;
    tmp_msg_1.length = 0.774577292664;
    tmp_msg_1.bearing = 0.978827151042;
    tmp_msg_1.pxl = 9925;
    tmp_msg_1.encoding = 160U;
    const char tmp_tmp_msg_1_0[] = {35, -74, -24, -95, -39, -54, 108, -80, 24, -49, -24, 81, 126, 87, -103, -45, 66, -86, -106, 8, -95, -100, -6, 125, -38, 88, -99, 100, 4, -31, 70, -94, -127, 46, 37, -77, 88, -71, -78, 106, -11, 88, -36, -68, 107, 108, 38, 39, 74, 122, 81, 107, 4, -12, -12, -18, -27, 84, 121, 9, 49, -12, 107, 105, -100, 19, -63, 46, 115, 119, 47, 43, 7, 42, 13, 117, -23, 37, -92, 46, 77, -54, 66, -105, -76, 74, 70, -8, 8, -125, -49, -6, -25, -7, -111, 55, -93, 6, 74, 59, 83, -128, 103, -120, 95, 97, -73, -77, -65, -72, -49, -75, 60, 33, -83, 69, -19, 23, -126, -77, 95, -128, -68, -108, -111, -125, -111, -2, 17, -104, 21, -8, -60, 46, -72, -22, -40, 33, 80, 36, 105, -44, 88, 115, -38, 6, 54, 109, 90, -4, 53, -123, 43, -37};
    tmp_msg_1.sonar_data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.764739160498);
    msg.setSource(43958U);
    msg.setSourceEntity(155U);
    msg.setDestination(22954U);
    msg.setDestinationEntity(117U);
    msg.source_man.assign("HVCJJADQFELZTNDVLHIMBPCVTEGCQLIMHXKWXXBMYAAPPJPZLCBDFMZWKNSNSWVSVGOVSFYQMKMPNGCWPUKRKRYGUSKRUYUIGQIPUEJLTIZJHYSXOAGXHVKDOSWCXRNFVQKJUFQNMPKCUAJWTBIDRIEWTHCSRNLCOBGVSYNJLZPYNKFZHGORXFFQYQBZMJWFBTDOLWLREEEU");
    msg.dest_man.assign("NEOOWLJDRAVRVRLIXQNBXLHYEWCXRRORQQJDPBFDJZAKZWCTFAEPHJPIOPGDUPXUSUCPZKFSYFMQQICLDIMMYUFKESAMUMZMDLFLLJXICHYWYTGQAWDMGHNZCCZNJTELESVSBOYTBXUONDKWVGVOXPBJYFTMEHTMHAKAKJMKAEUESVYYPZHHG");
    msg.conditions.assign("AWROYXQHNSHACNVCUJDLYRMDQYMGLDCZZFQQQEYQIWNMUFROGFCZPVXOSOWXWSSFKUHEGAQJNGLXVTLYTMTMBXFWRVDBQGPIFKSYBOEBVYWDGLNIFVHUXTE");
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("NPEDFVSHIADXGJWUFEOHAEWWEI");
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
    msg.setTimeStamp(0.740136673213);
    msg.setSource(30280U);
    msg.setSourceEntity(84U);
    msg.setDestination(20350U);
    msg.setDestinationEntity(226U);
    msg.source_man.assign("DPCLQFWGQUJCZTDWMVZJKMEPJEWUHBZABDYQMYUWE");
    msg.dest_man.assign("YHTVIWYYRXCBBVULQCZRJIIDDABBPKBLEFOLHXOVGKOTZJNQQLCQFOEBKLHRSPAEZLWIHNJGVXSHJIBQRDUAONAESMJZPLKPRZINAMLLRSOPFFDTEVVWWMXUUBTNOPUBPMREFWMEFYESNSJJNWJSVGMTEJHTBGFTHTWQYZWAIYMAUDNKTONWQUXCLRCARVTGGFUAYVHZJXWZXKPCGDXKSPSDQNQUVKDYCZDZ");
    msg.conditions.assign("CCSSJZUNJMJDIHBECMI");
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 58651U;
    tmp_msg_0.bearing = 0.62915650313;
    tmp_msg_0.elevation = 0.355700163912;
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
    msg.setTimeStamp(0.0471039796765);
    msg.setSource(50901U);
    msg.setSourceEntity(250U);
    msg.setDestination(32385U);
    msg.setDestinationEntity(133U);
    msg.source_man.assign("PNEKUIXOOJZWVEUNEMQQZCLPKXOPWYRRHEXFHTHORHXTRMPFJFJSLIPXZVCQWJZWPIVQDYOQHLMNRVQFGGCMTCIOWZFCYNILRNBEKYSQUUWLRDTRAMFZKOWISJDIZOPTIZKDDHTJMVTMNDCXVSFAQUAJBAWPEQXBFSWAFPKYRTLCETHIACDBBGXDKMVYUEY");
    msg.dest_man.assign("VIPDGCUWGOZSBCULUJDDLUQBCGQJJOHZSDFYIZBXDTJQLN");
    msg.conditions.assign("EAUBBWCCWKSQYJQQZYFSWNJZHOYTNZ");
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 181U;
    tmp_msg_0.clock = 0.518352674231;
    tmp_msg_0.tz = 29;
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
    msg.setTimeStamp(0.451316106713);
    msg.setSource(58252U);
    msg.setSourceEntity(213U);
    msg.setDestination(48548U);
    msg.setDestinationEntity(58U);
    msg.command = 20U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IADXYSMUUKIPLTOPFXSTKGDSNUGLMHJRSWYVFTPHHOXKWLNMACOGEZNBQEDFQPPMETGJVNWCGXQTKLKXZLVNVYFIWXUQHORQWMZZBCJNAVABDOXDADEHZXUMBEOQXPFLALWJYNFPUOKDXWCNZZPTRVJURIDDOEMRBUJAHHBSGASURCSCBFGVNHTAUIMKZYQTBIYPVKGKIRJQTLOHECYVYJIIBLYBCRG");
    tmp_msg_0.description.assign("QFTCLMWAVKGNXSUWOQIWSMLXLGVIJUQPYOERZACAOMPETNDJRVYPDCNNHQFEUAJDCJXJVZRHICLDIQFUNLGLVEIEMISDYZGHXPHUYTAYKEKBAJ");
    tmp_msg_0.vnamespace.assign("PSOEAMVVQUKYNZMCYSPJZGGYEGOVIIPRYAIWNWJRVFVASJLFQTJCDDBSOLJCNFCKXWKFJOZKBCAWGULLEBBWSURTFAXFUWIUTLKDKZHTHEFEMENSANOODMUBXQJXEDNQGHMLRCAXBHKOVGXCDGYVVCZGJNTHFAVQPDUYGRNKRZIBZUTOMRQXIWEIJASYWGDSLACFUFEBKOYMHNU");
    tmp_msg_0.start_man_id.assign("QKUXCRGWHRMEPAGJ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("YNLMCPZKTIDFLSNGIXUNIEXDCVSPSQAJVGCFORSFDOXWRTKDDCVMHFNWSUKJMKSLWPGEKHNVJQFHWFJWZRHCFQRKYYOLQDIRDJCVQWJOHFFLIKTABUARKUEEHONYUDBJBSTICIBPYKRXHZZWHMMRBZEXYTASQXNSQUVTNXMHEJXAWVALBBSOYPCVJOHPLAZIQIWOMEPKUOBMIELRYPGCDZEQXJBTLZVOWMGTAAZCGGXLUET");
    IMC::StationKeepingExtended tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.812293132133;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.503829772844;
    tmp_tmp_tmp_msg_0_0_0.z = 0.739167358528;
    tmp_tmp_tmp_msg_0_0_0.z_units = 254U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.879682869512;
    tmp_tmp_tmp_msg_0_0_0.duration = 11677U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.745106232196;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 98U;
    tmp_tmp_tmp_msg_0_0_0.popup_period = 33401U;
    tmp_tmp_tmp_msg_0_0_0.popup_duration = 37904U;
    tmp_tmp_tmp_msg_0_0_0.flags = 217U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("XWKQSSQEHQRIAT");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Conductivity tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.870639661406;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::VelocityDelta tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.time = 0.539632434322;
    tmp_tmp_tmp_msg_0_0_2.x = 0.657860908542;
    tmp_tmp_tmp_msg_0_0_2.y = 0.805084328229;
    tmp_tmp_tmp_msg_0_0_2.z = 0.859942924882;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::DesiredHeadingRate tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.937165580454;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::ApmStatus tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.severity = 221U;
    tmp_tmp_msg_0_2.text.assign("DOVAVBRCHDYYORNINZPPJAWSXTSOKEXXPLZUSYLSHCNBVNDXYEQNPNMMSDZPGTOHWSYAYUZPRHULZEIMZKGQGLMFMFXEVZBEBUUTOKAXAUSJVIVFJJFDIOKMQTEHCWEITTQHTTEJGKNLPCBCCJDSHIRFIAOQLKG");
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
    msg.setTimeStamp(0.61066220831);
    msg.setSource(18547U);
    msg.setSourceEntity(5U);
    msg.setDestination(36203U);
    msg.setDestinationEntity(71U);
    msg.command = 36U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UOPUNLGERKPDBIGEXAZXQSARLPEZTSFXLUVLMZSWCMNTQVOAKQXPMEHFVDUQICYXPCUMJQAIWOLEJLBJSDZRKWGOITVJPBVVDDENKVBXFZWCRFYSJWQJRAWQKGDSZYVHWHCFSXLMPGVXBTOTHCWRKCNBUDZOPGILAEZJRXXDBAMHKTOFZHCFLSETNIGGHUTKGHDR");
    tmp_msg_0.description.assign("XPFSFITQVZGUJCWEUSBMRQXOFK");
    tmp_msg_0.vnamespace.assign("BCJXHDDEWNLQGSRTHMEUOUBDIYSTGYVPVPVGLPDBASQMGKZIHJJAKJCKFOJTCNFFVYFBLVKDFGLEEGTXAABCLNDNRHCBJJZYVFNCCPSWIHYMTJDVHLTZXAYUREJSXUTLCQXYSETFWMIBRDAOWPKNROAHQJFEFLRWSPZSVNWRZIACVMUZYZWKEQSIZPNBNKOKDVYLUAKYGGWSWMWUHXXXEHBQFGZKUAMZEOIICQMTIPRX");
    tmp_msg_0.start_man_id.assign("AVPIQGACAPNCLIUHGLXVZMEHJVYPXILKGTXFFJUZINQBEKCMGEDOIEBPUXPYHVVBLPOEJZMVALOOHYUFZULADRHBBDMFNYSMQUXQTPRWKBNLPJZCKCTWDTNTHJTVCUCMJPUDOZQWRGBRAJYZSGGKTDWSSHWWVYKFDZSDCCFTF");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("HKZVYAYLMMCTJJJGKFWNFHZNFQTXCNNIIUBREWABVCJZRURKFUTLDFLGFLYMAEUENJQTSKEQQHXENEJOMRO");
    IMC::FollowPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 30920U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.766383611754;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0408275142013;
    tmp_tmp_tmp_msg_0_0_0.z = 0.0155846081944;
    tmp_tmp_tmp_msg_0_0_0.z_units = 198U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.583574158825;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 195U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("LACGSCOPTOUAOPQDQTLEKAMWHEIGXXJKNJBHCIRQYVUBXQJBIXWBQOAMHPIYLDADRVNSVBWYCPKCSELSWNHVFNEAHEDVHZTWWFIMCLUEOSVUCYRTOOJCPFQNLFDDSKUEDGYZGENKKSYFBHVNGFXTBMROWBMGFDIWEXZIOGZPGDHYUURKYUTZYNIOZNTJZXFYUERMPSXJGMMLXMKHSBZJJWFAXVIC");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::ReportControl tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.op = 62U;
    tmp_tmp_tmp_msg_0_0_1.comm_interface = 148U;
    tmp_tmp_tmp_msg_0_0_1.period = 55894U;
    tmp_tmp_tmp_msg_0_0_1.sys_dst.assign("QQPZDVTPWNOOSMSDGHHDVWCKWPGWOYXXDNKEBGHEARQNBCYFTVTSLMRKEDIJDHHIJKKUQQMMSPGYXZJFAAKJHBZNFBOCBXXMLSOONYPPTZWOVESQ");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::StateReport tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.stime = 4148475964U;
    tmp_tmp_tmp_msg_0_0_2.latitude = 0.417198306373;
    tmp_tmp_tmp_msg_0_0_2.longitude = 0.0379126934178;
    tmp_tmp_tmp_msg_0_0_2.altitude = 59391U;
    tmp_tmp_tmp_msg_0_0_2.depth = 51958U;
    tmp_tmp_tmp_msg_0_0_2.heading = 693U;
    tmp_tmp_tmp_msg_0_0_2.speed = -26286;
    tmp_tmp_tmp_msg_0_0_2.fuel = -18;
    tmp_tmp_tmp_msg_0_0_2.exec_state = 122;
    tmp_tmp_tmp_msg_0_0_2.plan_checksum = 3540U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.088374686745);
    msg.setSource(49282U);
    msg.setSourceEntity(81U);
    msg.setDestination(39377U);
    msg.setDestinationEntity(39U);
    msg.command = 28U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QCEQNQUDLVJQEVPLXTBUSYQYPJIBPKGHVDIJUHSWBBAKHGRFCGEVPSIXJBPIOZCPDMHDOGKSQCNCWJXQKGTNHGMRCKFHFAWMN");
    tmp_msg_0.description.assign("IENSCJNCLTGMHDZHUNNKNFBJROTGFSIATEGTDOWUWOWLXFFQGYQRIPWLCHZPIDFAHWIXLPYTIYWEARXBSZXPLQAMTJFXUWHBKYJPTNPFZIDZCVUBRIORJWOLVXCTNUKAXHKCTHSSEOUNMGDGVSHAZGMAEYABQJXVLQZJEVPVXKVRQVGXEBEGIQPVJJEMYW");
    tmp_msg_0.vnamespace.assign("ZXQGRDMSFXFGOIZIICZSXIWZWUBTFUJOWUDDEHHUKZKFWNOKCHHOVQJKHDYVYTKBXOYGIUOAJXEGPYLQMCPTSYLRRHXPNAFNAKUTZQLNMDTUUQRTRSX");
    tmp_msg_0.start_man_id.assign("IZYRDNCGDWVPACMLXFIGMETA");
    IMC::PopEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HVQGBEEVJLFRQSJYRHNZFRZPIVIAZUPXTGLNCDWSBLIVGHBTRQKLLBINJEZVDHCQFQMHKZGWHVXDMIAYDGIUSTWMWMMZKOESSDLFRBNSFEPMJNFBSZCWKTQFYKYCAWJOBJWYMUPLATOTIUXUJPELVXYXKKOZIUTDLRMTWETWCGIQAAUGYDRYNHSDEEJDAPPSCUXKCOABNOXPNBYATWNALFJUBVOVIZYHXPXDQFFJPRCCGHQ");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.800507238527);
    msg.setSource(38307U);
    msg.setSourceEntity(238U);
    msg.setDestination(54717U);
    msg.setDestinationEntity(55U);
    msg.state = 54U;
    msg.plan_id.assign("AFNOTBMYNIYTBGQWUOSROEEFCJZCGWXUBKRJBTNUYXUYPZUJXYRWNWNDOPSHXELWFXCQSJFRNLEPZODOXGJIZMMWROVLQKRPGXTMIZKHTVMXBPSAAHFGOTSLVFWAFKTUCVMIVWBGJMRXDWZHBIVYDIDHRLHDIDTPGERLSQSDQSPFTTBACEOJWKXHNRIZZU");
    msg.comm_level = 133U;

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
    msg.setTimeStamp(0.143684359859);
    msg.setSource(45144U);
    msg.setSourceEntity(113U);
    msg.setDestination(35396U);
    msg.setDestinationEntity(100U);
    msg.state = 149U;
    msg.plan_id.assign("VVPPNZJKIHCSJLGLFWIJFWDRTXFFRLYAGRSRBKANDFNRIEHEN");
    msg.comm_level = 210U;

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
    msg.setTimeStamp(0.93924050977);
    msg.setSource(18137U);
    msg.setSourceEntity(153U);
    msg.setDestination(25699U);
    msg.setDestinationEntity(124U);
    msg.state = 216U;
    msg.plan_id.assign("RUVJRKLWJPEGITZQWGBJRVYBSLRJMSHUYGIKGWCRIBAAIBFFNNRXPONBGXOKJSKTTJCWUNAHMFZIDOEVLIATQIMPESMHYNMBGXDOUDJBUHXUWFFTGCKFZEZPPVTYIWWSHJVLETGNDSQBGQKFLGCSXHXNQOONCRDDRXZPPYPFOJKKVCZUBUZQVQCZWAYATLF");
    msg.comm_level = 171U;

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
    msg.setTimeStamp(0.135562342025);
    msg.setSource(56667U);
    msg.setSourceEntity(59U);
    msg.setDestination(22821U);
    msg.setDestinationEntity(115U);
    msg.type = 32U;
    msg.op = 202U;
    msg.request_id = 50632U;
    msg.plan_id.assign("LQQIJFBXJVEIZDPKPPYWQMGWQLMYIHQFEO");
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.226186296411;
    tmp_msg_0.ay_cmd = 0.793961303111;
    tmp_msg_0.az_cmd = 0.750948111826;
    tmp_msg_0.ax_des = 0.497242635819;
    tmp_msg_0.ay_des = 0.905939571046;
    tmp_msg_0.az_des = 0.489985821822;
    tmp_msg_0.virt_err_x = 0.16065243997;
    tmp_msg_0.virt_err_y = 0.27926693072;
    tmp_msg_0.virt_err_z = 0.944651901781;
    tmp_msg_0.surf_fdbk_x = 0.499928163927;
    tmp_msg_0.surf_fdbk_y = 0.382791158114;
    tmp_msg_0.surf_fdbk_z = 0.502252323328;
    tmp_msg_0.surf_unkn_x = 0.26698519713;
    tmp_msg_0.surf_unkn_y = 0.18741503978;
    tmp_msg_0.surf_unkn_z = 0.878997551275;
    tmp_msg_0.ss_x = 0.79819077197;
    tmp_msg_0.ss_y = 0.73722989708;
    tmp_msg_0.ss_z = 0.946779367677;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KCSUEEBZASDPGZMFTCVUYMQZSDFDXHQNPUVTSKZYEJGOMZEZQDSMNMJXGVKUHPUFDDJPYAHXIHROLITGKWXCKYWEKUTFFOYRPQARCTCBICOBVLULADEFRHBLBGMLLYYGWLVTQZFPYRFWQAEWEXSHCEILBNWAKQUAXVBMJORKLTTIUIVXZBRJZFPZXAOICSQBOHJUWTM");

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
    msg.setTimeStamp(0.16459996793);
    msg.setSource(32358U);
    msg.setSourceEntity(225U);
    msg.setDestination(44522U);
    msg.setDestinationEntity(49U);
    msg.type = 38U;
    msg.op = 229U;
    msg.request_id = 28152U;
    msg.plan_id.assign("ZNHRQGTVUDVSDGSZUTNARSCSQCHXEHKJQPFBZMDQHPYWPQEFFVBKRTGXFMOYOERHSPHQQMOYWWIXDWSHXDMXVIRZLGILYOABIUJCFFZXDJETTVARZLFPOUSJYXCDGRYPNGIUBXZO");
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 55570U;
    tmp_msg_0.lat = 0.0311776427805;
    tmp_msg_0.lon = 0.426724624773;
    tmp_msg_0.speed = 0.105801611021;
    tmp_msg_0.speed_units = 153U;
    tmp_msg_0.custom.assign("KCOMPFJCAEZGVZITVL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CYUNTZGODWXATUVXTERQSNQGGRBZSVNXHVHIVRUPHVXABRNGJFFWSHYXIFMOSZKMNPOJKJWESODEADVQTEYFQAFGAXDVUWYTCEDQRYUPBGEPFBSMIULEMSRSIKBRLIRTQCWHELHDKFOUONBUUNRWIMOCVFCPAWQCTOBTIMDLW");

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
    msg.setTimeStamp(0.0780172360392);
    msg.setSource(53332U);
    msg.setSourceEntity(103U);
    msg.setDestination(24627U);
    msg.setDestinationEntity(48U);
    msg.type = 173U;
    msg.op = 177U;
    msg.request_id = 43178U;
    msg.plan_id.assign("JYULEHMXDOKSTYVATGNRBJQHEZMNCODERIDMZHWCAYHKKYJLUYINFAFQNXWKCYIWPGUTDEWDFSKEIVPZDRZVJIIWDTSGPCBVYSHZVV");
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 87U;
    tmp_msg_0.mask = 3840816183U;
    tmp_msg_0.scope_ref = 862167593U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IMXRVXGGPBLWQFOGALZECJYHUZOINSHUJJPPJYXRTFRRHFVWDLRQWMKMWDYKDEPOBTJNETCLBCCTUYCLPVJ");

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
    msg.setTimeStamp(0.527349800681);
    msg.setSource(63064U);
    msg.setSourceEntity(37U);
    msg.setDestination(11432U);
    msg.setDestinationEntity(205U);
    msg.plan_count = 51330U;
    msg.plan_size = 3714145689U;
    msg.change_time = 0.105520688192;
    msg.change_sid = 47851U;
    msg.change_sname.assign("XYOVITIBEKVNQYTKNPWPBAFV");
    const char tmp_msg_0[] = {29, -103, -86, -73, -95, 41, -47, 4, -124, -64, 102, 30, -79, -88, 83, 57, -98, 28, 84, 30, -82, -122, 15, 34, -115, 125, 19, -99, 79, -50, -29, -64, -73, -63, -92, 61};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZTWYYBMXMFGJLTOPOJPALCYRDBSEVDKKNWYGJGIPBEFVFJMVXZATQTXKQFNSRAGCROBTGMSJEPICUOKU");
    tmp_msg_1.plan_size = 38373U;
    tmp_msg_1.change_time = 0.891924318523;
    tmp_msg_1.change_sid = 31944U;
    tmp_msg_1.change_sname.assign("GNSOWFWCULFSTJVEWLEXPHZPORYQGMSWSAXVUKCAFKSWGRUCCORNROZJATOLINQHHKDLGFJRHQLEKWPOKVVXSUHVAJYQELLANZQXPKEIZMZUYNGSMZTEMDABSBNDFEUNVKNTTCFYDIPBXPNIWTYDJPAUBBLZMKPEYWMXFPTRYGXBIVZCEPQJMHQGJSRLRXBUGVSINCYMHVZTMIYKOOGJCGLFCBFDJOOVXQDBQQRRYAHHUWXIDAUTAMCIHB");
    const char tmp_tmp_msg_1_0[] = {3, 5, -45, -55, -109, 69, 31, 59, -68, 23, -56, -39, 112, 79, 95, 91, 61, 26, 103, 45, 73, -40, -90, 58, -112, 115, -37, 72, -34, 32, -121, 108, 2, 76, -96, 45, 8, -110, 64, 51, -62, -55, -120, -102, 74, 41, -36, -34, -58, -9, 63, -101, -92, 1, 25, -105, 45, -10, -11, 8, 57, -61, -28, 105, 64, 57, 15, -29, -87, -77, 39, 125, -111, 5, 13, 5, 22, 121, -71, 41, -25, -53, 94, 91, -116, 28, 74, 17, -8, 79, -40, -36, -3, -28, -27, -74, -95, 23, 62, -68, -82, -43, -99, 30, 76, 91, 112, 51, -101, 106, -119, -70, -123, 84, -117, -58, -112, -79, -114, 82, 7, -109, 59, 78, -3, -19, -41, 69, -48, -62, 39, -127, 41, 39, 94, 75, 73, -109, -31, -5, 5, -124, -73, -38, 105, -128, -37, -39, 73, 124, 38, 82, 124, -126, 76, -117};
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
    msg.setTimeStamp(0.318164666834);
    msg.setSource(51884U);
    msg.setSourceEntity(125U);
    msg.setDestination(30817U);
    msg.setDestinationEntity(181U);
    msg.plan_count = 50217U;
    msg.plan_size = 2588827133U;
    msg.change_time = 0.351375654322;
    msg.change_sid = 38175U;
    msg.change_sname.assign("VKLJKIJAUZQIYZAJMCBZFUEONSGBEKZPSBRUVPORVSWDYRNYPHPTSTQPOGTQJXPXXLQCTMMTSNHASEIWDLOXLFXTUGVEDWBSIAOAQNQDOYLIZZ");
    const char tmp_msg_0[] = {-97, -85, 62, -57, -47, -43, -13, 72, -94, -33, 122, 77, -40, -91, -91, 126, -11, -93, 102, 57, 36, -55, 8, -66, -108, 61, 106, -68, 70, -68, 90, 110, 86, -39, -67, -14, 105, -124, -17, 11, 64, 52, 59, -38, 87, 104, -38, -77, -92, -15, 109, 79, 44, 77, 50, -28, 58, -35, 107, 72, 38, 73, -72, -104, -85, -35, -68, 46, -94, -62, -29, 123, 2, -5, -123, -63, -85, -15, -115, 47, -81, 52, 10, -14, 118, 17, -21, -59, -66, 10, 74, 72, -73, -127, 122, 52, -94, 34, 44, 24, 115, 73, -87, -21, -32, -51, 60, -113, 33, 51, -107, -16, 88, -110, -99, -89, -60, 125, -117, -63};
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
    msg.setTimeStamp(0.513045883133);
    msg.setSource(56724U);
    msg.setSourceEntity(4U);
    msg.setDestination(53455U);
    msg.setDestinationEntity(73U);
    msg.plan_count = 50568U;
    msg.plan_size = 2299118292U;
    msg.change_time = 0.369794883214;
    msg.change_sid = 17774U;
    msg.change_sname.assign("CCFTYDKIEVTXEIZDYGQXXYPYLITPUGHAPWWOOAOCERLUZDHJRAFVXVSJTKUNLEQBKOYQTTEHTLKWHWCDYSPOMCUBIIQJVOWNVDGGJNUZLMXVKIRZFQNGPHZQVTKAUQBZJSMWSCYLOEPRBMRYYPICJDUHZMKSGKZXQAINEVXARFEUXSHLQJHMOUFOBCHOFFZNGYBLRBFNDTPXQRJWKB");
    const char tmp_msg_0[] = {-95, 70, 50, 102, -99, -35, 37, -30, -37, 47, -93, 106, 119, 75, 35, 120, 54, -44, 41, -29, 45, 112, 88, -31, -13, 46, 54, 70, -78, 109};
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
    msg.setTimeStamp(0.351299969008);
    msg.setSource(24095U);
    msg.setSourceEntity(107U);
    msg.setDestination(32738U);
    msg.setDestinationEntity(156U);
    msg.plan_id.assign("HJMJGDDXKOCPNXDJWUTSQRGFZBPOVYQCMJMJLSSKHCEBFPUZJCNNAOQDZEYTZZVEGHPFUQBGPVXLCVPPLCMFQEETMYDKMUMHTURXVSSIIQMLFWURQIRKLXTAYGCTMASORFFADDKUOHSCG");
    msg.plan_size = 38687U;
    msg.change_time = 0.877588370439;
    msg.change_sid = 33780U;
    msg.change_sname.assign("WOHIAYSKLGA");
    const char tmp_msg_0[] = {-95, -110, -128, 75, 115, 42, 4, 80, -29, 85, 58, -3, -14, 65, -31, 28};
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
    msg.setTimeStamp(0.209741745063);
    msg.setSource(32279U);
    msg.setSourceEntity(53U);
    msg.setDestination(6333U);
    msg.setDestinationEntity(196U);
    msg.plan_id.assign("VBXWJXWNHPPXDRKNQQHKXUTNONTGGAEAGFTAPCLIUIGJNFXDVCJKSDRACKCLWYZALJMDOBUSGSKDBNOLHGEJUMBDVLSIJHPUMLISQRPJHFMQARKWUFDTYIDTWWOYECEYVVKIHOJZLUKSCPWSQVPAQJHBOIXMCYBVCYSMXURFZEPMRLQIZGBYBWZNZCBDGKQLNRJ");
    msg.plan_size = 62194U;
    msg.change_time = 0.554785518539;
    msg.change_sid = 15841U;
    msg.change_sname.assign("VZREWFXWZQJBIDDSSRBKVCRLURKXCZZFNIZMQEPUAALVXQVMPSAGMCPSKULVYPNLXWODKRD");
    const char tmp_msg_0[] = {-15, 112, -116, 5, 120, -62, 35, -119, -64, 66, 71, 115, -94, -76, -128, -65, -102, 2, -116, -60, 44, 122, 73, -45, 2, -27, -116, 83, 119, -11, -51, 21, 86, -39, 71, 58, 62, 102, -99, -44, 19, -116, 11, -94, -11, 6, 122, 94, -10, 71, -83, -55, 108, -81, -66, -96, 72, -33, -65, -36, -77, -113, 44, -6, -113, 88, 96, -68, 80, -101, 14, -26, 85, 13, 14, -117, 59, -34, -109, 73, -58, 52, 58, -82, 33, 18, 45, -87, -126, -73, 61, -4, 112, 60, 92, -108, 80, -77, 96, 61};
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
    msg.setTimeStamp(0.13714422082);
    msg.setSource(27329U);
    msg.setSourceEntity(185U);
    msg.setDestination(22214U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("GBKPABARGKKEMXNHETUUGWYTTXNUZLKSABONQNMLILZVDSJFMJZWVVFEXOQDJYDRFOPCDVXNATH");
    msg.plan_size = 30543U;
    msg.change_time = 0.571486511018;
    msg.change_sid = 38794U;
    msg.change_sname.assign("IJERUXORQWDVKRXNMZFEUQXVFXBWLSJPBRDFJOABAWEDQSGSBIIBOBVEKM");
    const char tmp_msg_0[] = {83, 96, 47, 7, 98, -79, -64, -83, -38, 51, -63, 69, 17, 92, -66, -20, -67, -4, 25, 118, -73, 53, 65, 44, -19, 8, 126, 123, -73, -33, -85, 84, 56, 98, -80, 95, 81, -104, -41, -24, -72, 24, 96, 89, -95, -1, -99, -66, 3, -22, -116, 23, 52, 103, -117, 65, 43, -83, -32, 44, -64, 91, 119, 105, -116, 54, 40, -109, -72, -60, 108, -8, 77, -128, -12, -109, -36, 9, -99, -70, -76, 90, 126, -80, 18, 50, -116, 23, -36, 45, -43, 54, -24, -63, -88, -67, 60, 82, 121, 51, 74, -84, 25, -37, -30, -96, -118, 100, 16, -44, -52};
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
    msg.setTimeStamp(0.636018989002);
    msg.setSource(24833U);
    msg.setSourceEntity(145U);
    msg.setDestination(35619U);
    msg.setDestinationEntity(117U);
    msg.type = 44U;
    msg.op = 197U;
    msg.request_id = 47773U;
    msg.plan_id.assign("LDXNDEEHPWTFUEFSZSLHUGNJAJPVGQNUBWFZDHAYJBGYJTDDHPJDOGPBILFCOJXYXFRLVZZNMAUHWISDITQFOFWLKBRKKAVXWKVUTNTXEYOMMPQSRTUGJFEFOVHYMUHBJTXNCYSQRMFVYHYVGBKANIAMBPMBYRVWURESSXZIIHPOBU");
    msg.flags = 51713U;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.627589984645;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TBCYVXOVFLJNDRUQFGPDHVOFYUJSKWDLOMYAWNKTXBZMDCQVNOMJRUSYATTMIJHYELNOZSVUUINIBXGTJEKTPQMBOHAYWFLRFZBRBRIZUGDJQBNMMPYDKQTBTDWUXEOASXXOCACRPZDM");

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
    msg.setTimeStamp(0.704960078579);
    msg.setSource(40357U);
    msg.setSourceEntity(12U);
    msg.setDestination(60110U);
    msg.setDestinationEntity(186U);
    msg.type = 206U;
    msg.op = 79U;
    msg.request_id = 26948U;
    msg.plan_id.assign("IKJNEEAQBRPCGXJBCJOLBDJGPQRQOLYJLEMFNSMUDWERLWQEUFNLIXGY");
    msg.flags = 47557U;
    IMC::CoordState tmp_msg_0;
    tmp_msg_0.gamma = 0.552225382905;
    tmp_msg_0.systemid = -103;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VDGZLNMXJAPDYHZEVKQTIEBCMAGUIKFMLIJQQAXOZYJRUCGTFYKDDQPYTHPHHQSEOVXZBSQMBTHUVIASONLZMGHKHLOGBBSHINGCFDPZMDWKQMSJJLVXGNRJTSFJKYFXDTOWEEWYUTEEAURK");

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
    msg.setTimeStamp(0.673129843659);
    msg.setSource(10580U);
    msg.setSourceEntity(202U);
    msg.setDestination(28538U);
    msg.setDestinationEntity(42U);
    msg.type = 208U;
    msg.op = 158U;
    msg.request_id = 18662U;
    msg.plan_id.assign("OBNFMOFJPYQTPFJBZRXDYVBHBNJJISAKCEERZOWVNZISMBTWHBUTCLJQILLPOQQGXGFHXZCSKXBMAVADCEHVAEURBSHFAAILWNMCRPOEIOTKGCMQUKTPFWEVPVGDZYKEGOJRPPT");
    msg.flags = 47288U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 21235U;
    tmp_msg_0.lat = 0.373633250387;
    tmp_msg_0.lon = 0.215125617543;
    tmp_msg_0.z = 0.491295399589;
    tmp_msg_0.z_units = 249U;
    tmp_msg_0.amplitude = 0.259051480767;
    tmp_msg_0.pitch = 0.0345325455241;
    tmp_msg_0.speed = 0.163850475712;
    tmp_msg_0.speed_units = 122U;
    tmp_msg_0.custom.assign("XKXUFOZJTOBA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TNLJIGZMLIVBSBHIMJYULPBQOQRKWPNHHOXWZIUMOGVNZZJYRQMERQCAXUBSBYEFLSDWMZTFT");

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
    msg.setTimeStamp(0.230644280508);
    msg.setSource(29836U);
    msg.setSourceEntity(243U);
    msg.setDestination(53833U);
    msg.setDestinationEntity(67U);
    msg.state = 85U;
    msg.plan_id.assign("AJCWLFJYLUWCEGFMJPFYCMAQOZTGLUTIKUXRNCJFSOMOKXPXZALNICIKDGTRBENYBTHULTIDRIYPRIDMAEJGVZJDQMIIZBNAQZLAWGSJSWHEYOCBPDKUGNODOMZENUXPGBFDQNLFSVWPVHZUGRXEUIERHZCEKJAMXLHLQJBFXAFBRKWSQASIDYMKUDTQJEZAVYHQXSVBWOYBPHSSKTSZWHWT");
    msg.plan_eta = 1760616208;
    msg.plan_progress = 0.864098526997;
    msg.man_id.assign("NMYNCUAOVBGUZNKDPOACZPTMYGFROJZDMRDQDMQLHJSLAPUCUXIBWJJEDRVR");
    msg.man_type = 5493U;
    msg.man_eta = -1628441669;
    msg.last_outcome = 245U;

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
    msg.setTimeStamp(0.0511396873819);
    msg.setSource(1703U);
    msg.setSourceEntity(68U);
    msg.setDestination(23225U);
    msg.setDestinationEntity(99U);
    msg.state = 190U;
    msg.plan_id.assign("IYAVPHSBMDNAMAOFZQRWRNWIUEJUFZOWUVNICEOWLCSMZHUZZPEVGGEFLPDCKPKRAKJHJROLEDQKYURDANDYFGRVGSBCTXZENKXJBIBZRQHBEXTISQZLHPSNAYOCSKFKHPTCJGD");
    msg.plan_eta = 1893353941;
    msg.plan_progress = 0.812256393617;
    msg.man_id.assign("VYOUAMFRAIUXBVSUOHSNXBCYBZQSSNPPNDNFFTTFPGUKLAEBMQWVCVANWBEEVZZHYLKPHDHWTXXNQCNVQCPTRXKJRMPOPVOMGSXLDRRIBFRMZNFDGEGIUTTYOPGTYGTJSAVLZJFXJMHLWZJJVDEOSOKALLPHHROJZ");
    msg.man_type = 63549U;
    msg.man_eta = 713575597;
    msg.last_outcome = 0U;

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
    msg.setTimeStamp(0.584085160853);
    msg.setSource(61018U);
    msg.setSourceEntity(45U);
    msg.setDestination(50539U);
    msg.setDestinationEntity(243U);
    msg.state = 230U;
    msg.plan_id.assign("XWZDSLMPHZSPZBNCWNMXFXYXLTGCVULBZBJSOAPMTYUYXHJYKYIXJKTJEODRGWABAAIYHESPBTURYLUSZRFMFZDAIGEGIKHUJQWBOYQGYOUWEVHJOSBICPKTDMGWOSAPVPLILGDJYADBBEIUCGIOMKLHQSHOSQQDCXFIXWHSWKNDTREPCFVVTJORKFCEPRREMLN");
    msg.plan_eta = 855170557;
    msg.plan_progress = 0.486990728797;
    msg.man_id.assign("KIIGQGJIENVUJLOZPTABCYYKRAZXIXLXDYGHOJVSQNBIUYSHVEEPPMQOPFQZUFGPWTEFKPBJLZBLVMD");
    msg.man_type = 52203U;
    msg.man_eta = -735076597;
    msg.last_outcome = 131U;

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
    msg.setTimeStamp(0.841878573673);
    msg.setSource(59287U);
    msg.setSourceEntity(82U);
    msg.setDestination(63015U);
    msg.setDestinationEntity(152U);
    msg.name.assign("JKMLFINUUXKSMWJYEHYGWCDJIPWYDETTDBXKISDSVOZLJKBUOWGRRTTZXICLRBQAACEWXSTIYLLUHGNPDVEYSSNKFPAFAZAVGBEZXLGSVVCIRDCMVEGKUXNNQYQOGQGREMNOQXEUPIWWMDYNPBYJMJHWDMKTHOHIOFFZXJGBFAQMBHYIKLIDRFGSOTZAZMTSZCHRKAUQEDPPNOVSOHFKUC");
    msg.value.assign("NPEUWQIBJCLOEFXMGHSFNAFLJSAPCTTNIHIJITANIJYDUVCZPPKUDBGONRUOJXCFQLWAOQDPOYWCKBRFHRDWPEXSSWJAIGKKVOLMIBVERODPSKCQNA");
    msg.type = 117U;
    msg.access = 94U;

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
    msg.setTimeStamp(0.434819092288);
    msg.setSource(29167U);
    msg.setSourceEntity(77U);
    msg.setDestination(59036U);
    msg.setDestinationEntity(144U);
    msg.name.assign("HHWVUOTVMBTMZFMASIFFANFAOXSPURAVYRUSOZBWHELEGRREMYQQZGKIIJBFUQBANYQITXJLXILWNJYJTRFCCRTHPYEKJEUOBNNKMNILM");
    msg.value.assign("GJUCYHJHCGDWJVWUCWAO");
    msg.type = 83U;
    msg.access = 30U;

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
    msg.setTimeStamp(0.432210637244);
    msg.setSource(12232U);
    msg.setSourceEntity(254U);
    msg.setDestination(50474U);
    msg.setDestinationEntity(158U);
    msg.name.assign("KYDDLQXJIUNYHDGXOLHVMTMHWDPBDIMVXIOKLWMEFHTOASKCCTRZLMLCXZAAQTOWWRSFWEIIOGDPIRJHTEWPLYTZQGWELKVUURPNAJSRCNSYJPBKYDCZSUQKLYPIOGRFVZQZRDULJKMCAVDXXX");
    msg.value.assign("QBNNIACIRBYDMDNUDKXSQCLNTZPYYOWEGOTCDAXILWBJBKTFIEJXVUHSHFWKXSBTJZONJIUOURQZPYURPXHYVAKMKHFCIHNSAZOXCWZZIBFPPLUBNWTQMIRJGVCETNKIVGGOGKDPYVLUSWJBQXGWLQWGTCVSSQYHOAMHNCBEZUXQWMVLNUATTFDXREDFRVX");
    msg.type = 124U;
    msg.access = 245U;

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
    msg.setTimeStamp(0.4847215346);
    msg.setSource(44849U);
    msg.setSourceEntity(112U);
    msg.setDestination(2717U);
    msg.setDestinationEntity(92U);
    msg.cmd = 210U;
    msg.op = 52U;
    msg.plan_id.assign("NQYKNCDYCSPZMKQUKBFEDGULSKSGOJWORXQWWYUJMRMGTUUMPCKK");
    msg.params.assign("KVZQMFRHPABVAYHHPLOTCZXNDSHUOQOQQKGQIHCMINZAMNIXGZJLCJOZGWIVJEZTHBGHUBRVQTKVUEEOVISEQMGTYODLMWBRFLCBPFJPPFCZATTNDFHDNSQIUSVWREI");

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
    msg.setTimeStamp(0.93409444395);
    msg.setSource(1084U);
    msg.setSourceEntity(154U);
    msg.setDestination(41572U);
    msg.setDestinationEntity(57U);
    msg.cmd = 142U;
    msg.op = 49U;
    msg.plan_id.assign("GQAPPUHTGCSCDEUFDLBFZHYGOWUDZVCPTNYUCAXPMSTZBFQAFTRCWFQGKMKYMOEIIKIIXCGVYUULNREQIAXCYUEOLYYADHOKHNHVJTWFBZARROQBIWNCXOFYODNSWVJOERJZEHQQPZKLWHKSTMSEASOBBPLLUZMWSLVXXLNHZVHKACFLPGXQUERUDYTRMOBGBJDQRVSNESNKZAQJSXWIRJMKCJKIGRPPMFAMWXGJTTVJIWDL");
    msg.params.assign("VLKDATNAWJYUAMBFHJPVRIAGXNZUFGLBWLMASMLWZAQRXNBGTHLIUKVQYJLEPEXUSZTDJYHPWHFOPHIKJUYTZHYVEAVXSGCDLYFIWJLBPGPUTFF");

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
    msg.setTimeStamp(0.275465657759);
    msg.setSource(10507U);
    msg.setSourceEntity(194U);
    msg.setDestination(17821U);
    msg.setDestinationEntity(95U);
    msg.cmd = 122U;
    msg.op = 11U;
    msg.plan_id.assign("FYCTRRMMDKZYRNJMNFGHBKABGOSSYLPSOFEVIYXTUQZWRLWRQEQSJZWNDHPKXCBSGANDXD");
    msg.params.assign("EREBTGKBNKPSDXGOLDHIBXSNNMAGPJYYFNHHDLMYQQZAWAFIISZYNGAMMIFFUFZNPSKKEHZGCXEIWBFOEBCTRVHOJGYOQJQPCBXASQFTCTKCKCOPZWIDARNVLBPVGEKXJWJLDCZQTTLJPUGWUSZRIORSRAAOEQXDLUEJLVWTYHRSXTHVHMFVMUCBUJPMSEZNNRTIQXDZIMKNOTDWLWVDIQECMCROJYWSUUXBKUQRGWYFHUKYLJVHLDZPFPBX");

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
    msg.setTimeStamp(0.239791506252);
    msg.setSource(19934U);
    msg.setSourceEntity(1U);
    msg.setDestination(64114U);
    msg.setDestinationEntity(102U);
    msg.group_name.assign("YIZBJNKNCZXYFUPXJTAQ");
    msg.op = 134U;
    msg.lat = 0.722472153878;
    msg.lon = 0.592703081003;
    msg.height = 0.565412472917;
    msg.x = 0.965837357893;
    msg.y = 0.426911586271;
    msg.z = 0.813437162496;
    msg.phi = 0.561178752643;
    msg.theta = 0.902674441579;
    msg.psi = 0.407131256987;
    msg.vx = 0.944224274019;
    msg.vy = 0.332674364442;
    msg.vz = 0.0521959131996;
    msg.p = 0.5107298871;
    msg.q = 0.0713779561227;
    msg.r = 0.344832194989;
    msg.svx = 0.73063014419;
    msg.svy = 0.520284560569;
    msg.svz = 0.163806354897;

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
    msg.setTimeStamp(0.267392482169);
    msg.setSource(59825U);
    msg.setSourceEntity(135U);
    msg.setDestination(25476U);
    msg.setDestinationEntity(165U);
    msg.group_name.assign("HOREKCWJWKQUBWCODVANJISJEYEUIIAFQBOMNXZCYUEZJYMQCSHDJXPVNETKWXRGYWPHW");
    msg.op = 220U;
    msg.lat = 0.823912725424;
    msg.lon = 0.929951777966;
    msg.height = 0.844975309357;
    msg.x = 0.77475006082;
    msg.y = 0.0635355556192;
    msg.z = 0.634259551249;
    msg.phi = 0.247648039318;
    msg.theta = 0.943355016638;
    msg.psi = 0.508962604022;
    msg.vx = 0.31093899229;
    msg.vy = 0.204958191176;
    msg.vz = 0.059620072642;
    msg.p = 0.880213908275;
    msg.q = 0.388019766714;
    msg.r = 0.298157320502;
    msg.svx = 0.346976833287;
    msg.svy = 0.828122794621;
    msg.svz = 0.51365608715;

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
    msg.setTimeStamp(0.495563177788);
    msg.setSource(11266U);
    msg.setSourceEntity(252U);
    msg.setDestination(7028U);
    msg.setDestinationEntity(51U);
    msg.group_name.assign("CHAVTAOXBYYUIPRALXWCEYHTGAJRCKLBEFNULMSVUFETZZYDXFBOZPMWXEQSJOMSHFZAGNFTKRDIDPEKUTKOWOWQYGZNJDWLSOECXWEBOSNSITVDFSXCTZVBEMVIFNPDOHQYRNVJTXKMKZSIUYZQZAOVBHPRJGTDIRPFARMBVVDAUJZHLIRMGAQNHCYOGFAMQKYMLXUSTKNQJWRKPPSWQNGHHFLPCUQELJ");
    msg.op = 127U;
    msg.lat = 0.305393924797;
    msg.lon = 0.529772352908;
    msg.height = 0.135430618706;
    msg.x = 0.191753741731;
    msg.y = 0.0841798889681;
    msg.z = 0.501645681807;
    msg.phi = 0.966959163568;
    msg.theta = 0.65732844709;
    msg.psi = 0.125152730274;
    msg.vx = 0.655709214983;
    msg.vy = 0.239783284053;
    msg.vz = 0.554495339921;
    msg.p = 0.754448761293;
    msg.q = 0.23229507231;
    msg.r = 0.799427444382;
    msg.svx = 0.326659361687;
    msg.svy = 0.260539054968;
    msg.svz = 0.327636617843;

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
    msg.setTimeStamp(0.250052517871);
    msg.setSource(40612U);
    msg.setSourceEntity(243U);
    msg.setDestination(55397U);
    msg.setDestinationEntity(98U);
    msg.plan_id.assign("RTFHSFOWXQMJDLKVMRDNTZICHWYGZULHEYOJHSYRCVPGMIYAPQKFKCPLEXWGADZBFWDMHUTDKBKIASGXCESGTXXUSQVPTFJRQLBIFUJINCCYUCERNLWGMERKJLCOD");
    msg.type = 39U;
    msg.properties = 169U;
    msg.durations.assign("MYGPCJCPZSSJMWDIGIRWXJTSYVEQDJUYMJWMJBURPBTIXTHFKTAJENNZENNMRAAJHMQEQSLESTEUKTTMGKHUVIZHZAOBUMAKNFLNWXCFOSYPOCLACZQVGQWAPOOYZPHPXEVIFVFIUKMOGXGQIBFCXLYYJOABFKDGWOSNGEHKUQZCDBRQQHDLRNLQCHUUXDDBZBREESRLSYLVBIAFYPZGIFIKTKXXAYZXVUHTRNDWWFKRPLCTWVMWCJHDVNP");
    msg.distances.assign("GAZKOBRLXFRQBZSXLPMAHVKVASCAYAIMJIPUWNVYCPQQUWHTGZGNHXNBFYDETNLJLYIDPTLKKYCZFEJPSTCZMXSTKA");
    msg.actions.assign("PGAYBSPJOZMOQNENZMEYISUJTTDWENXLDSUDNYMJHUZQVWXDYXHWKRIEGHBLSKYSIPXCOMEBUBQLKGRPLOPJOKKATMMWQLPHVXBXGIFNPHWNZYGZYIYYPFVOMTJHLFDNMTZWQQWEGOULWIJVXURMWBAHECLDQTRSSAFJYRKSSTNECQVZDLNWFIHFGUTBCQUADGHOXMDFCFRNEKABFAEJVRCRJFGVKITZTBZAPACHKUURJ");
    msg.fuel.assign("QMBEWMSGRXKNAYDMANWRVIVDZCHYLZTZVQCYBFAKBBNBSZGCDTPGAAGRKAECINISUHOXKPNQVVVDOTPWXHHFOCIYZADKONQJFUQSTJTXDSHACCZXPFVFIYQKSMOJLWUNGSAHPPAIMRCEBKKPRLKQWDEUIVFHQJQJSOXTCLLXOFDMUUWIUTNFLNMJDOIYJEXVETGHYFPXEPRRJW");

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
    msg.setTimeStamp(0.326571331952);
    msg.setSource(32162U);
    msg.setSourceEntity(96U);
    msg.setDestination(19879U);
    msg.setDestinationEntity(133U);
    msg.plan_id.assign("IXLMDVLPHYVMONAOSGJSDHMGIBBCSOWOCAHJORKTTDWOROEIGTILJVMLEJRCQUZCRSZIUNGRT");
    msg.type = 137U;
    msg.properties = 74U;
    msg.durations.assign("IFMGGFDSOYCYDVCPZYGVWRVLKCJLMNUGUZROWIMAUBRZLVTBDQJOAMPEBQXFPGIDCY");
    msg.distances.assign("EZDUBBKSKIPEBQHAWKDNTKOCZZTDGXWLUGDSWCRLYYWTADKVFWJEPRPHNNRFXIECCOSZOZLHEVLSKSIJMWQZIYNSQYMUIOKVPXKDOOMMBDEJYWUTBFYXHMATVOGXGGHMTECYYIZLINULMABOMPAZETOBHDJWPOXQACAQPVLXSGULUDPNUQADVHKRQMXCBSFRJFBM");
    msg.actions.assign("LXFCMVEKJBSLNGJLHZSJREDRWMANYKNYWPSZDUWYMGUWJXZXBXSBZAKVUQYNXDPASUBPIITTMFCPCURJYWTYLLAKKTRIDDRQQFDZZKLXAHHHLCNEIJSMOXKSJCPINVUKCZBVRVTIYSIMYFWO");
    msg.fuel.assign("FIQCZPAMWFZZQYQRVMWEG");

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
    msg.setTimeStamp(0.0683147860768);
    msg.setSource(41080U);
    msg.setSourceEntity(73U);
    msg.setDestination(18300U);
    msg.setDestinationEntity(224U);
    msg.plan_id.assign("TNDIHOHTGXGJMOVTLWTAVXLXQVBFMNSRJLSLAUADVTHPFGPVSOWJDNIDHZXSMADGQERCRZKUHZYQVXNYWIOIDTXRKRYOZFOPKPUBIWFJYIZZYTDUXMYTBILLTFDVCPJINQOUKBPUYBSHJHNONQWGCLJTOFFUPKFDYMRXGYQUKLNHEPGLCMMZVVIRACAXLEGKJMMNSCEWEEIAWQYBERKDAZPNCQXSOKESJVBBBQEHGJWACAFZPZUBSQECRKFGCS");
    msg.type = 95U;
    msg.properties = 37U;
    msg.durations.assign("ICRCZODTSKQOUBPXTTSEYVBDMBUTNSRLLDGSQXPAJPJXOVJWAFHMAKZDWXDCDWEJBMYQPYTUKYSIHRQVXGJGCNRJ");
    msg.distances.assign("UCFCHUOUYGWWFMNPUISCPPXHAGWYOTBSEYQLUURHKBOXIJXJD");
    msg.actions.assign("OWZFNSQMYZSQTBSULGLUMIFJJJFXNQMCCMUFYLXDMHSMWATOKRZMPQDORWNGAIHJLZUOCNQHUHRTQWCTCKPYYCQVHPATHKUDPEHKWUAJXNFYZXLNDIVAAFWPZIXCVDROKZXYMWJIIIBBSRPFBFYRNEQSNQMGEHEXWTZDYIMPIRKTRFDWNQTLSOEC");
    msg.fuel.assign("FZJHGHDOUWWYYRJNHBFEVCEZEFSBGM");

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
    msg.setTimeStamp(0.700188929827);
    msg.setSource(312U);
    msg.setSourceEntity(37U);
    msg.setDestination(40275U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.0363334937168;
    msg.lon = 0.129906388603;
    msg.depth = 0.454821492501;
    msg.roll = 0.0605441860839;
    msg.pitch = 0.78662021955;
    msg.yaw = 0.329720675856;
    msg.rcp_time = 0.161273135178;
    msg.sid.assign("VJDGAVINEGWEMKZXOXVOJ");
    msg.s_type = 106U;

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
    msg.setTimeStamp(0.556243518282);
    msg.setSource(17198U);
    msg.setSourceEntity(172U);
    msg.setDestination(58681U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.823563266373;
    msg.lon = 0.144507014268;
    msg.depth = 0.235885619062;
    msg.roll = 0.780402250028;
    msg.pitch = 0.376182462463;
    msg.yaw = 0.814527974732;
    msg.rcp_time = 0.893640398437;
    msg.sid.assign("FLCNQRUYXOWEACNZAFKJYOALDTPFIPVEJBJOVIXXFBOACDDMGLATVCIKYSLDGODQYPEIAHHYCZPKWHNXXUFDJTHBXEASEDXQENURKQNVJCWLGDBHZQHTGDRUBHPTTPZITZCXRPRSBRYSAHGTMLKSWM");
    msg.s_type = 55U;

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
    msg.setTimeStamp(0.499323294351);
    msg.setSource(53300U);
    msg.setSourceEntity(225U);
    msg.setDestination(12875U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.12869811351;
    msg.lon = 0.466664171327;
    msg.depth = 0.385889825697;
    msg.roll = 0.270681839111;
    msg.pitch = 0.0859069938518;
    msg.yaw = 0.755889687295;
    msg.rcp_time = 0.3033702499;
    msg.sid.assign("JYBUAGWXHUCH");
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
    msg.setTimeStamp(0.708276765658);
    msg.setSource(44996U);
    msg.setSourceEntity(24U);
    msg.setDestination(11721U);
    msg.setDestinationEntity(178U);
    msg.id.assign("YSEBKFBLONTZQGNPNJESVXHGYVYKDWPQEIDVRXAZSGTEVLAIXJFYTKRO");
    msg.sensor_class.assign("WSUCRFMPLDUHQXPAKRZNWHQIAEZDGPHEEDSVNTVNNVOTUSEPAJKJHDBQYTCQMWBGJLUPEOYMOJQSMTGLLZQTKVBFIODDZKCASJFLCISYKPTHXSIHFOXXMYYWERZOJHGZJOIWDCCCKULMVOOARGALJIPLKFZNDBAEBYVFNFNFFQRZUIKJXHZHEBXWYXOURV");
    msg.lat = 0.260370861073;
    msg.lon = 0.00547529458094;
    msg.alt = 0.134754877621;
    msg.heading = 0.652965455914;
    msg.data.assign("LWNJQEZRJZHZRMKIFWPOGIGYPKOZUACC");

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
    msg.setTimeStamp(0.557511410066);
    msg.setSource(35787U);
    msg.setSourceEntity(1U);
    msg.setDestination(20550U);
    msg.setDestinationEntity(75U);
    msg.id.assign("JMBZYRHXZBLDENKIQCEBAOGDAXDVYSYNRWOYWHZICETRACZXSCNYMFKUKKMTFHJOECMGEDGLERJVZFOUJQSVDXWGMVXFLNBMMFTCDTAQHMQYNPHAKXXQPTEKJSAWNRKSVJUBPFNZLGSPZLWLYVWBFYCIRDFEAATPBX");
    msg.sensor_class.assign("QDDCDEGHGULTQFRSHSCYILCHIZZRWTJJXFGAKXOCHGRKOFMYVZIKKQTVMOVDUOAXPZZJLELVDQMRAMDNSWHEDXOTKEHSNHYLHCMKFHVKAGXECNTYWMZUEDAESCAEWDCYRBUSRWCRJJBFWNIVJQAPPWJJ");
    msg.lat = 0.102583934054;
    msg.lon = 0.450436617418;
    msg.alt = 0.0440858207687;
    msg.heading = 0.502640760136;
    msg.data.assign("IGHDGFSVEYKMQNODSBABDCJSBJSEEZBWHQAVVSKSAQPCWGXIIHKVLTKDSJIUKPBEAUXJOATOUHLORUPYTNMOQTPKEQFRPIQHYJMLZBCNNWYCVTLUGPDHOKRAYGEAWQXDFTNNYRXNIMLVWXDZCRIOUUPVYJFZDKDBZCKYUSPXEJLNJBGGZHYGCTMQSMLWTTZQNRMVXGJVWFPJUOCHZFOOCCAITQM");

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
    msg.setTimeStamp(0.255948398168);
    msg.setSource(6092U);
    msg.setSourceEntity(124U);
    msg.setDestination(46511U);
    msg.setDestinationEntity(84U);
    msg.id.assign("SHWWNZPQIZGZNCRCHFHRFHZGISPVFCKYYIIMSLYBWTYFKSRIFJZPVHNKNOYAJDAYNTXJMLXEOWCQMTPFNVCDKFEXGMAQTVAODLMNUTRTZUKAXXPCMBQCSHXHDJKVGGLKUKBGMEDGGNEPBIEUVJLZJRQPIARLVQFWASXEOCOIOWTUSDBGSZLBTMQZPJYVJPWIJRDLFOQTSGUSODKLREU");
    msg.sensor_class.assign("ETZAXPMIFSXYSGKVDCUAHHWWUACNZTMRUHXPQVYCEGSHPJNQRJFRSYTEEDTOYUPOVYCMOVWIBAKBOKTQJDMPLCBDAIGILJFYZPKFDHJIZDSZCNDKCZTQFOFNOSGXXNQWWWAIMYIJKWTRJVMNALZIKLTDQOLEMEFSGHBKNUAHRZ");
    msg.lat = 0.299817171387;
    msg.lon = 0.268747752006;
    msg.alt = 0.640036973442;
    msg.heading = 0.913514330042;
    msg.data.assign("GRLMUXTVEWIDFEMFGHNPKZJXTOINRQXFXMCCOZKQSYNNLHAGCPZZKANOHBWQQEQDEYFAWCMJSFEATFHUBTJWCGBCXCDVNNIVWVLAVQODZXOIIOHRIBUNUIOUEXWNSCCLFIAEFTCDUBHPL");

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
    msg.setTimeStamp(0.3301903152);
    msg.setSource(48447U);
    msg.setSourceEntity(86U);
    msg.setDestination(26039U);
    msg.setDestinationEntity(158U);
    msg.id.assign("ADKTEUOUQCEUTJWKQWNXMKXV");

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
    msg.setTimeStamp(0.684400151129);
    msg.setSource(59127U);
    msg.setSourceEntity(229U);
    msg.setDestination(33110U);
    msg.setDestinationEntity(50U);
    msg.id.assign("SUYOUEVCBYMKYMGXAFXBPZYBHVFVQXQMJKFIOPDMMKVSGVHTRMWHPDXLJORTHJJWDOIUIFIODQIDEKCPLZACQLGKSLCFLKMQWYWSBEGNRRFAGZGPIORFUSNWPGRDNUXTITBAGGJLTZCYDKTNJOBNEXNNSBQGQAWCYOVSAEFEXENXRDOMVHBJCZJVPEZVN");

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
    msg.setTimeStamp(0.310916031182);
    msg.setSource(8147U);
    msg.setSourceEntity(144U);
    msg.setDestination(12791U);
    msg.setDestinationEntity(208U);
    msg.id.assign("CWHEHUOSTUDIUJJQWLVIZYGFULBVRKCGBOZHKPXFHPJTGXASIROUYPFGQIKXXMOOZVPZVTUNXRVBBGPQXMCLPFCGCJNDWAAOTWWZQWQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AHXOGZIFQADZWIESAYVDYKHXXWHLNHBLWZKXBEXSHJUJCMNHPTDAZFRBDKJSQRNVMBDLMGZSXFDQKQCRJEGTVCKCWNQUHIFKEBRMULQEDUNBRYUCGNEVIGVQOZAMMSYCMNYALO");
    tmp_msg_0.feature_type = 15U;
    tmp_msg_0.rgb_red = 191U;
    tmp_msg_0.rgb_green = 229U;
    tmp_msg_0.rgb_blue = 209U;
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
    msg.setTimeStamp(0.351476844917);
    msg.setSource(46569U);
    msg.setSourceEntity(140U);
    msg.setDestination(2395U);
    msg.setDestinationEntity(11U);
    msg.id.assign("PUKIGSQFIPXKQYOFFYNOQUTCODPXNRBVJCGGMRWCLTVRHZHOFKGLXMJECOVCUIYDSEIQDRPFXMJXGJUMTWHKMHDVKWKFKUDRYCALSQWCHKIAHGJLVPTQIUKDGMBZXTERWPTLQYWJTVEOZUHVBNNQMYMXBSDJZZNUAPITFFBZSURLJKCBGPSDHAIUBYZYWFOYCDSEJLETGCBRXQ");
    msg.feature_type = 209U;
    msg.rgb_red = 240U;
    msg.rgb_green = 171U;
    msg.rgb_blue = 5U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.910701787235;
    tmp_msg_0.lon = 0.89427569088;
    tmp_msg_0.alt = 0.494203972275;
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
    msg.setTimeStamp(0.81981552595);
    msg.setSource(9096U);
    msg.setSourceEntity(145U);
    msg.setDestination(1000U);
    msg.setDestinationEntity(70U);
    msg.id.assign("ZPWUITYXEMVMVNZM");
    msg.feature_type = 68U;
    msg.rgb_red = 95U;
    msg.rgb_green = 53U;
    msg.rgb_blue = 107U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3620572607;
    tmp_msg_0.lon = 0.420927486144;
    tmp_msg_0.alt = 0.584637762467;
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
    msg.setTimeStamp(0.485860628997);
    msg.setSource(64430U);
    msg.setSourceEntity(121U);
    msg.setDestination(39658U);
    msg.setDestinationEntity(3U);
    msg.id.assign("VMKJZCOHFLDVCRTSRWKCRLOICVHUMZPZWPBFYRTEXYHQFOZIKRLNPGWVLGBQLTWNOYYDIGKQF");
    msg.feature_type = 181U;
    msg.rgb_red = 49U;
    msg.rgb_green = 81U;
    msg.rgb_blue = 22U;

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
    msg.setTimeStamp(0.35499887049);
    msg.setSource(25865U);
    msg.setSourceEntity(115U);
    msg.setDestination(26694U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.575060698981;
    msg.lon = 0.0137543071929;
    msg.alt = 0.809792192514;

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
    msg.setTimeStamp(0.932452181516);
    msg.setSource(36606U);
    msg.setSourceEntity(98U);
    msg.setDestination(6149U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.864570091389;
    msg.lon = 0.772417074035;
    msg.alt = 0.31261806074;

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
    msg.setTimeStamp(0.052291044816);
    msg.setSource(62374U);
    msg.setSourceEntity(102U);
    msg.setDestination(57011U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.29374490684;
    msg.lon = 0.653763796431;
    msg.alt = 0.591794902044;

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
    msg.setTimeStamp(0.471284120805);
    msg.setSource(33923U);
    msg.setSourceEntity(165U);
    msg.setDestination(6744U);
    msg.setDestinationEntity(58U);
    msg.type = 109U;
    msg.id.assign("GZZADWYAQEYLAOLNKYVMFKCIZXFXTSUMBMSWFCESJPNBWWNJJQBKQVILPOOAEXXYUGFXTHQSVGRVDSWEQKKKIJRALXZHDHCPXPUPKVMTMAYAAUJHWTHDFIOJHPSZXNGLCUEZMALRTMNFIJQUJZVI");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.894265428079;
    tmp_msg_0.speed_units = 232U;
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
    msg.setTimeStamp(0.959041222065);
    msg.setSource(65084U);
    msg.setSourceEntity(56U);
    msg.setDestination(30719U);
    msg.setDestinationEntity(239U);
    msg.type = 38U;
    msg.id.assign("UJWPSEWAFALMDFIXSLNGLFPMYYHWLKBFZYTNQHRZAXZVPSDJIZJYUAEDMUBUZNXMWTUDZTUPWXWQYCKFOJUGOTHBGJXPBTGKWPKKEDYARLIRXNJUYFDRVXBONEWORZGBTVRSVPVMJQRILFCTMQKSQLGESREKHTAXAOTDFFC");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.755414802297;
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
    msg.setTimeStamp(0.880586066118);
    msg.setSource(34190U);
    msg.setSourceEntity(164U);
    msg.setDestination(37288U);
    msg.setDestinationEntity(142U);
    msg.type = 167U;
    msg.id.assign("TQHTQTBQUHMALWUZDWPHXFIKKGGZBZMRVZSCEWDJMAPOFOFQXKCOZJHVNQEOFTBDDABSJRNQWSDEIMIYXLTICZRZNBEOOBLFYYUIVCOAGLDWPPAYEUKBGRHUNADUIRGUBJKVFPCTFEFJTPGQVNTXXODAVMKLQNDWLRDLQRWHYZZYCNUSVKJHMLZXMSUWCNOFNXNUXXYSVGMSYBICHRSTPEREWPIVHKFSXSJWEMKLYEQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FLBRDLLOCFUBLLGMMKMJCNZTEQXAXOOCRZNECJTUSFNWDEHSZHKZMFPRGAVWUMQHTWWXABBELYDPSIHEVKSUDGDOKKSDZQCQHXZEFJBEXYPCOMQCFJPNKHOWHPNIYCMPSTSYQAJ");
    tmp_msg_0.predicate.assign("HGFWQLYUUTYIDGSRZHSVFKJPWEXMFEZMFKNCVKCRHPZLMAWOENEKIQOQXDWCENIVBSFNCUXXEBDHGVN");
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
    msg.setTimeStamp(0.948771975559);
    msg.setSource(46035U);
    msg.setSourceEntity(68U);
    msg.setDestination(55261U);
    msg.setDestinationEntity(92U);
    msg.localname.assign("IKZIHUGSNIOWTLBFRWRZDXXDJMFNVDZVJTMLBNGHBZEXTPAUYTUBSVTHYWLMKQQUSICTXFRSPEGNDKDYNVYLBFWZELQEQHPADIJNWOQSSBYIJKNSCVSLGAXCTRPPPAMIVKUJRGDJKXOOQVVCUBIMZBAHHSGFURAQXDWECVZMHKLPCTJHNGEQTIOODACFCQVPKWLGFILAHCNJEXYEWROYPMYQOGUYBBOPJMUXRGNZAJEFKDRREMFA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PMTWROTOTAAHESMQLGPCHO");
    tmp_msg_0.sys_type = 113U;
    tmp_msg_0.owner = 52476U;
    tmp_msg_0.lat = 0.324196887495;
    tmp_msg_0.lon = 0.12270490733;
    tmp_msg_0.height = 0.244444845571;
    tmp_msg_0.services.assign("AVRUSGKNHBDABPUDHRTIRYDHIXSGYFPNVZPVZDLDALOPMF");
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
    msg.setTimeStamp(0.157990683142);
    msg.setSource(35183U);
    msg.setSourceEntity(215U);
    msg.setDestination(62336U);
    msg.setDestinationEntity(222U);
    msg.localname.assign("MBOYTUFGHEKIHWSWQCGGMKLQWGXKHGNCFDKNYCZXSTWVWKIUXOSAODZFCBHNHJDPMXXEVHTNFQIVPPCCGFEVODEZTMRQBOXLICUZAFLIZJBWPAJNFNRRFZWVPGSUADLURAHEOOBRBHYNTYVIDLQVETKXRPXLATIACQMQJLYAFYVHTTHVEJKQLRJPJCDDPZOANLPOIYWBRDFZKUGEKSSJMSQXWQOZUS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VZFPLTYNYSLXIXVHPJNEEHZTFSJAGXRDWVJUEBOWUIGLZHKYPZTUISKRSQDYGQOMEXAPFTRHJVBLBSNJOMUMXTJSCVCFLKBPRDJEBKNAPJKSUXHPBPFDDAGCLLSGFVKXMGYORRFOJIWDKQHNCEAMQWNZQBMTCZNHOWUUTBRDQAQZIGRCOSGVWLVXJQMCQOWUIZOCKTYMWYIED");
    tmp_msg_0.sys_type = 66U;
    tmp_msg_0.owner = 20058U;
    tmp_msg_0.lat = 0.0327414104173;
    tmp_msg_0.lon = 0.353352059604;
    tmp_msg_0.height = 0.340474221031;
    tmp_msg_0.services.assign("ILUOEZTBSVWHKMKVIQUHCCVATDJGMWCDCOOYRFKZICTESKAWZEZZSYVBJ");
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
    msg.setTimeStamp(0.408729706833);
    msg.setSource(58790U);
    msg.setSourceEntity(129U);
    msg.setDestination(56390U);
    msg.setDestinationEntity(70U);
    msg.localname.assign("AVVHFGVHOJWUELHTMQZOHWOIXWKWIMLJTPEZCPQNRMYAPGQBWUZJYRJITVLMGXIKKMSISMSKJUDZZEAMSCUNLLXJOOXGAWDXYNBFIDJYBLEQQWQYGGVQHFNTNOYIRQDIJWPCREHKBGKCUWFUAXNPARFSJSNQXRGGANKKDMSZOARZXUENOPZFQFPMETXCTODLUKMBBFTXNUZFEEVSRBEFDHIZHCLLDSGAYJD");

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
    msg.setTimeStamp(0.326540205756);
    msg.setSource(34416U);
    msg.setSourceEntity(12U);
    msg.setDestination(23722U);
    msg.setDestinationEntity(249U);
    msg.timeline.assign("WEOTRFXLEGOBDEUWGCDCJKQWJJURVLEDFOATDWMKCYVLUSTPGWFAMGYZOFBYQCLQKSZHUEUBKUNXLVFSPNFWWCVARVXHHVTBQPMEKPSMSPT");
    msg.predicate.assign("HXGQMYIAGFVMUPDO");
    msg.attributes.assign("XTIVTZIXSJPGAKQCWUOPVRVZTMHSLGHDWGOWEYTCNDIVFOTSWMJRYCJAFHSYHLJDYPKOQZVBQQKKPDPNMKFWVXRWXDRPXYKGAHUJFUHVTSWUALURGNXKSWLDIGXHJLHYOQBZVNEZUFSEACINDQBIPSZWQIDSB");

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
    msg.setTimeStamp(0.618895354998);
    msg.setSource(20127U);
    msg.setSourceEntity(254U);
    msg.setDestination(54347U);
    msg.setDestinationEntity(101U);
    msg.timeline.assign("KXRVQJWIDWIWBDGRVMAPQFIJFTDXJENSPZTDNHVPWWFGQKQIFGHPKVOWQOCEASHLYMBZMZAYURPLTFHPJFPOZQNXEDMNKRGMLSDUSNTTYCJAZZVGQROPOFIBXDLYNBOROLELLKKGZRMXUH");
    msg.predicate.assign("BSXITEPWPNUHBRZQSGOZPUMZGEZJYLMANAIMETYLVXACDTYHQDTQQILNPHUACLVTKAXWFJCDSMNIGRVWYUMXDDNYNAEUKOLSFPSWJXSYBGKFZHBRGEOTWIHCEMRTTIUPZFCEZZLFOBOPWQJPVYSWSXDDJFFKMC");
    msg.attributes.assign("LQGFXINSPIKNUOTIHXIZSOAFJNKTJJXZWYMATMGWGIMMONZDVNBGCCPJOPENJUTOOKLYFECRPBCSAFWFAVXRZOGBQVKJOXPVMLCDYXQAEWMNUYYIZJDDRLSEFIOASYUHFVHTDHRALMREJBEKWUCLZYUQGWXSXRKKSQRJRWZCIJHWXESCFGBLTPWLLHLDQVVFATHBBDCUBZMVTDAUIYHHIMH");

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
    msg.setTimeStamp(0.847485413216);
    msg.setSource(35035U);
    msg.setSourceEntity(136U);
    msg.setDestination(25777U);
    msg.setDestinationEntity(214U);
    msg.timeline.assign("WNMWULWAMAHQKCEGYJHLVLKZTBQBPZCQLTCUSJNYPZDIVTFCLVWDHFGXKWOZGYGHICXFIOFLINVKNBHNBHDDYZYMYRLWTUVRXDAYJSOJUFQWMWUXFGYACIXISOMROCSGSOIEGQGSPATGMUBASEEMLPRPTEZNIMAQIKQFXUFSMXZREHDJHRGYNNUJ");
    msg.predicate.assign("IVOLAJCPOUBULSATYMOHBJKXVOBFRBAFUXFYMLBJGQEFIPYOWFQJMKSGEIVNAYJTWRYRNUVNDGFXCPJXCHEOKIHXSKZOJZIYSRGCZIHDVXSPBGAUGNZBQNEIPFGRZJRLCKWNMWYXVUQTL");
    msg.attributes.assign("YBCZAHLKLUHNSLKPGZMKVRUOSDHBAIOZXREMGQZJNJVP");

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
    msg.setTimeStamp(0.887886402646);
    msg.setSource(35999U);
    msg.setSourceEntity(63U);
    msg.setDestination(15813U);
    msg.setDestinationEntity(58U);
    msg.command = 177U;
    msg.goal_id.assign("AKOGHQCMKMVNAGJZWCCTEAWZIIVJLDQVRTIDNHDUVTGMWPRMKAONYLPRVTLUNUYDQWOEONTASQPTBJIXHCWBZZNIXCPGUVNAMUESHDBARTZAKXWLRXEZPYSCFRSEFZFBDUQUTHCVLKJRSDCJEHFVBJXYQXDHWYOMI");
    msg.goal_xml.assign("RTDNHYAJHIFBXYYVZPBDFJWENMKFCGSZVLUHSMYMFVUAJLKQEIICBVKLNTPICGQBAODSEHWPQKETTUGNNGZXOYCSHVBPCKZPOJLWGFLTIUGIBEBPUVEARTEDVCHRWVGARVKWTZOJAM");

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
    msg.setTimeStamp(0.337816492444);
    msg.setSource(8354U);
    msg.setSourceEntity(146U);
    msg.setDestination(49209U);
    msg.setDestinationEntity(156U);
    msg.command = 99U;
    msg.goal_id.assign("ZAZNBYIEXORGCVVIOEMCRXLBOIUPWQMJRVKQIKFXFLPUHMYPVCHQXOCQLWHKFBATCSEMBMRGCTDQGEMDIYNGVRBSAZCMMPJPNTEIOUKYDZRREEHURSUWXWGVNDFTQL");
    msg.goal_xml.assign("YEEUPZOPLBHAKCFVJHKXFUIVTFXZIGRFKZOTPZHCYQQUZEMVDNVANGHRXXXMAQAUPYOVASBZNEWYSASOGYPLZHNCDFFEIQKLOBLJMMXCTEORCCRBXNSVEJJDNQMVKICVRQIJBTYTNOWCBYDWPMOWWTEUTTJHUGBFMELMUESDVISKFTIIINZUDRFBDXQJNAOFVLURKQGLKOBU");

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
    msg.setTimeStamp(0.352758908258);
    msg.setSource(15030U);
    msg.setSourceEntity(123U);
    msg.setDestination(61656U);
    msg.setDestinationEntity(6U);
    msg.command = 100U;
    msg.goal_id.assign("DNMBOIWKSGGCVKLOWVHOHGXTPXQZKZGBTVSGEOHIZURELJAKRMHQCJUWFRTZRJDEIXXFBNITRDWWHWLFESWVQTOEQXLCNAZASRSXFHFQXSNWVIDNHBIVPOBPJAMVDYGAMOMPGUTOJSSLZBJTERWJYMLPQPOGXZNQFYROKEHDEWTPUKJINZNVAKKCSBARPEHMYJEFTXMPUCLPYUGFYFZTIUQDNCRLIIX");
    msg.goal_xml.assign("AKOEQWGJIMCCUEFOKDFXGYFOP");

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
    msg.setTimeStamp(0.569418209206);
    msg.setSource(2321U);
    msg.setSourceEntity(148U);
    msg.setDestination(8825U);
    msg.setDestinationEntity(152U);
    msg.op = 118U;
    msg.goal_id.assign("YGITCDJQEIBNUTIQVOSKLVWDJGNLWMXAYPOQE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WLEABKDUFHYKAMSFITBJDGEXZXNQDHPYKXPONHEDZTOMYVBDCFJRILLFOYLMAZUOYXHILFQZWGFSOKVMEFTYRBCNJGXQUGCOTGAMBGARNWSLHLEQPJCRCMIVTTWQBFJSBXATETJLRRPRZSMRRSWUIKG");
    tmp_msg_0.predicate.assign("BSYHVHLPHNFVVIJSILMAQQWQTZVZCXZUEUXYJNLOZMENPOMTUKLUOGIDQCXYAYEBXSYBGKCRWKCTDIDVNSZWDWADSHCLYJAHQXBJGJJTFRMCRAQPNJQNUTGLHBGQSFPSPPWRNYCKERUWRXOPZDKTANDCGMNXORIBXYLYBITRT");
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
    msg.setTimeStamp(0.264103867513);
    msg.setSource(65361U);
    msg.setSourceEntity(213U);
    msg.setDestination(885U);
    msg.setDestinationEntity(62U);
    msg.op = 155U;
    msg.goal_id.assign("HKMWUDLDMIYLUCBUYJXOYOYHFXMHZYTKFIXLDPWULDDEFGEDXSTLWJVPYHKQALEJXMGDAGNELJUQZINXONPSQYWEVDVNISPWQKHOGQYNZBHKUSEETONJNBUVLBVQSNUIIEWFGXTFZCKPLRZBPBDRCFFQJRAVCCHIQBIJCZRYMYHTPGHARATVTBQDZNPGAOTOEUVXKTMRFXMFTXZWSVRIVRZSOOUEJACNZJRLMHSWAPCBFKAGO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SWOGHNVPKXBLIIVUTJIFVRHLEXAKOWOBVYJWTPCJDSLQYVTGADSRUTRXDXRCIPSZXNSZLZFHCBGABQPQJMQOECGOCPVITIJRESYEHKJLBOPKRKNNTYXNTYFODUGHACFTFGBCLXMOGZUQZBWZDIPFJWRWWMNAWNCMAYKEA");
    tmp_msg_0.predicate.assign("CZYHAEYLKEQVDNQWHIIZQICIFUCYYYJURXPFMPITZLESSDXJ");
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
    msg.setTimeStamp(0.557819285801);
    msg.setSource(40772U);
    msg.setSourceEntity(28U);
    msg.setDestination(14772U);
    msg.setDestinationEntity(165U);
    msg.op = 96U;
    msg.goal_id.assign("MJSJMQONCGOEEFPVIFRVVKTLNYNQVPGCCGLDLHKNDMDPWXAVWMARZBHDWLXRLBZYQEBSXOWUYKSAXSTAIIREUSPGTCSGWFHIUXJAMHHELMSM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NTAMOROELOXWHJUGS");
    tmp_msg_0.predicate.assign("TDBXAIKZIIGCSOVRDZCOPFGUYUIZYD");
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
    msg.setTimeStamp(0.407239757216);
    msg.setSource(26673U);
    msg.setSourceEntity(75U);
    msg.setDestination(32302U);
    msg.setDestinationEntity(67U);
    msg.name.assign("RSHRYWQZQYXATDJBPSVCVKHSLTLHKZDSLZEUMNVUNPBBKWRTVBJIOUZAQSVVJWUDFRUCDHYBOIDPBIFSLLQEJQMZLMNMIEFMWHGNOBSZUFXOBDVOETTRAOVSVOEAYLJPFCSXIAZTGZAPJOWISXHYBFYGUZXQJA");
    msg.attr_type = 183U;
    msg.min.assign("YLGENCQALNQTWTNQWCAYNDHOZDPBWKCXMKQLBFXUGYUJPZHFKXXALQVHIBUQPNRJEWESDCPMKPFZSPXJQMEGWFOZ");
    msg.max.assign("IFGDOJGSFCDUNDKTNRLWQTGAFXRYCZBIUXBLHYVDCPPPMUXBFJXJDZREIYAHCIFGOVCKRMRNBMUIYNULZLIQKLGBESEIQSWSTLAHSPUKISTWAWUYEOAEVCVWLRUEQRZDISJORQAEKGZHTYKGCPXBHTPTCGXDFVJMDEKMVPVFVSQLQCEDJSNBXQAGHJOY");

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
    msg.setTimeStamp(0.239522466477);
    msg.setSource(48162U);
    msg.setSourceEntity(139U);
    msg.setDestination(49911U);
    msg.setDestinationEntity(195U);
    msg.name.assign("FDKUFFSNGPINJXBHALGVJEKFJEMMUYMWRYQTJDZWGNZKUJUSAFTCSZTGNBQMISEIQGQUZVRKVWHKSLIPPTXKBFXYUIOILARJEHOTEKGAIQFGYLIBZY");
    msg.attr_type = 27U;
    msg.min.assign("BNQYALRYHKESOBGKDDHJMJPQYSHVPDVWFHHQLDIYRSAVFZJBTPQEOQPZREFCMIGYJHCOIEFABYALNCOAMMSSGVGNNXQPFUZXBDEJMTWSPPICRFLJWJLXZILEEIFHGJXUWSUZPTYCWVNLFOWPXJCGITWMOSDXHSIYAEKFMNUKYMMKZRCUNHKDZCAVLQAUTZPDXGCVJBQXSRORTXWXZUIDOBRGOQTWWLUAVCRELDBUVFEKYNHGMKBGZ");
    msg.max.assign("VCIVTCSLASAVDMZHLTOBSF");

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
    msg.setTimeStamp(0.808215828132);
    msg.setSource(4923U);
    msg.setSourceEntity(88U);
    msg.setDestination(8817U);
    msg.setDestinationEntity(148U);
    msg.name.assign("GDAGTYCMKUNEPLSFRNVRILDEWSCOYPXHQXZHRQAMMMXPNSDXULXRAKNQKTQGYNJBJAVOBCRGAENYB");
    msg.attr_type = 217U;
    msg.min.assign("CBHHCQDHJIUETRESLCINDSUQPZJZTUGFDDCTZHVVKHOVSPUSYAFWMPXNWCFXB");
    msg.max.assign("HMHYPDYRPUXGNNVMGGNCCHNCLETGEBPMDOUDYOHBPSAHHUNJBRAOPABINXIACETNVRJUOZFCIQXLMFFJSSZKAXCQLQOZFJYIDUOTRLAQTDJHVRLVZZKEBJORIGKGKPUMTDGLWDJTUKCZQVKPZUCAMIRDVWLNLWDABEGIHATEVTIXSQGRFKRDLJESCPPYOKMSYFQHZBKYXYYSQWEESZWBFLWCQNGYJSRFXXIWSVUTXFFWMZVUI");

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
    msg.setTimeStamp(0.78128770224);
    msg.setSource(16500U);
    msg.setSourceEntity(84U);
    msg.setDestination(29175U);
    msg.setDestinationEntity(83U);
    msg.timeline.assign("XJVZPSNJRDZDBIOGBRACQPZONIHIAHTPHHANCUKKQWWFLHFDHWETQAYKWGGTENGKSQPZYJINTPFBHROWVVTAVUZVZWKLVPDVCNYXQCNCEJCGURYWKULOJRXIYVYAVZFSRJLIIMAZPSEDTRHDKTBLOBSXAOBGHVXOMRYJOSQBHKDKKUMUEX");
    msg.predicate.assign("PKCMRTUJABAMYAVAONMVZFWPYGDCTWBYLNTTIXPJTLHJEOYVUQYQFOZQRUSABONCPUFNREVHEEEUCKIMIXALUVDWGCHXPHMZWZLLZWDTOBEEVBSDIPKXCYQIAVEDZXZHVBIVOZSCKTGTGFKDLRJJFGOLFSOGXFNQIGFGUJPSJWSNZNQREHCTJOXNQKQXVHRMKKWFCRWMSARMFRASXXLLH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("LKINAZXXSKNMMRHASHSWSVQCKFQCDZ");
    tmp_msg_0.attr_type = 197U;
    tmp_msg_0.min.assign("UKKMDBZTMEPCNJYSGDIOBIWGIAHOJYHNMXIMSJXQWHCPZGCGEIPKOYWLZKUHMZJIYTFVNPYQOZBTQJWLKRJJLBXSTDJSUNHMDEBESEYYGMBGLCQRYVAVVXVAFCRORDOYMTFCCPRCZOXJPHFWVMXDNFUORFGKAGNWEUTAQSSTLJQGALSYBWOUQERIHHWERPZEIGSICKQKXZLULAVTWFUADPCUUHIWPZBODFNZLKNB");
    tmp_msg_0.max.assign("KMGQGLXABXKOYEMIJWUNFJRVRHASSRPZDRJEPDVEXWJLQQTYPMHNUXGNRYBIYDXCSCJWKLQNSVCEKURELHNMDNHTRQGUUPCAVJYBWMDCKHYFMTWJNDLHHOUXHZTTXOLVCLYPJSUWDBQOZKAWD");
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
    msg.setTimeStamp(0.508912958205);
    msg.setSource(47300U);
    msg.setSourceEntity(30U);
    msg.setDestination(15398U);
    msg.setDestinationEntity(216U);
    msg.timeline.assign("ILWQZQJKZWSOLVMQXKTGMPYDNYTTQGYEJZADORDPEUSCKEUCFWHBSCPVGGVPPJLAXAHHXESBYISLAHPPIQFSVUADMZFTQRTDQQILKFCWCIWVVUUVYEGAJLABVECHUWWNJVBYHLHRXILIXSROROZFER");
    msg.predicate.assign("RFFAUVTZYXQZKLWAMFHUCDSALFVHAICEYRQRPEPJSILPBXIFPMOWUBNNJJBKUSQBYDWJOYAEHLQSFAAWTHLWGRMBSQXKQNNEXTSXQGIOZEEHUQOAURIKTHEWKVLGNPGOEZDVNZJLSDVZIBXHUTVPMPUGSKFB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HYEMVJLDCKDHNUOWALYUPCNROOKQYAWSGPIZKKOZUPDKWNJVJURXPCNJWSSAKSMMHRVVKNQJYYFMFFJLHAFECYIBKMVCBGQMBJCHMNQQXXKVXITXIUDIGHTBSQOZPGUZSDFJNPGAUEBJZERRTZCLOBHSELBTUGDLBGIQDVPFEYMYWKQLZETWSRXCTOOIXMSXWQWUTEHHFRCARANICJAWUVGAEIXZNOVSAYYD");
    tmp_msg_0.attr_type = 34U;
    tmp_msg_0.min.assign("AVQIERFTJNOVBLVWADCWBJBOLGQTCUZTAPHSBXPROREEPYFGYVNEVJRTQEMSNRDWLMLMIPJSOHCSWQZZELCGUHMMATBYQMNZHDRWKZQPIHPTUJNSUCVXOWDNMXMKVFRQYUZFIBWKMIHOCCUCBBACYNLS");
    tmp_msg_0.max.assign("WWEYWMEMPHYUPGBLPJTSXUXFUHIRRCXUNHZYQIHBVNNZKBHLIDOKTCWQEJVKVZILGLJEOFIKJDSJXZVFMKGECXXOBATDYEAZCPNTZMDKNDBMCDZJZOUATQLANBLPOSBCGQJYGYOSIPMFQRNFBRQLWSERNWJIN");
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
    msg.setTimeStamp(0.237666884786);
    msg.setSource(10180U);
    msg.setSourceEntity(187U);
    msg.setDestination(57301U);
    msg.setDestinationEntity(251U);
    msg.timeline.assign("XHXITGFWSAYNAEMMLQIILZCYBTYVWCXRYTUETQGSTEABYOFONSGDHQEDPIJGKFXZVXV");
    msg.predicate.assign("YZFPMKWNEQKJOXJJVWQJKMSZGBRWGIHZQTXMPTVTCSXFLZAFNIHXXZTROQHT");

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
    msg.setTimeStamp(0.894207922216);
    msg.setSource(59595U);
    msg.setSourceEntity(172U);
    msg.setDestination(49242U);
    msg.setDestinationEntity(248U);
    msg.reactor.assign("VAWSEUHLCAWMZBWGIHLKPYMJATBPXREJPCMGEEPCGJITWBPDVGMFFRQOAEAMIIFFKHEKHLRZYSQIEBQNNBZJFICXCZOMSKTXOLJDTHRQTCSYRZYODWDNKQABGCDFNVHWVZNTJPQSIQEUBIPWCOFCQNRLVHUUCTVMMRDLURYNJHHKTSWOXXZOPGQZSDRGHSNMABLXUKTZGLGNEXWLOKUKJYUNVMZYYFGTWDFLABPIRO");

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
    msg.setTimeStamp(0.974937797879);
    msg.setSource(51324U);
    msg.setSourceEntity(134U);
    msg.setDestination(13168U);
    msg.setDestinationEntity(79U);
    msg.reactor.assign("MNLMIBJIHREATYEBUNWSKBAILAEOKQQUZCFXSNKNIMXHPPYKWZBJNFDZZLSRHMIBYPQIRJVSOOXGUOEPCWCJGNTCRDVVIMLQHUXKWILECYXMUAWSXTDOQDMUWSCZMUVZPRKVGSNXHQKDZGEKBCPVQCFGIHNAHLMFGVVXRDBALEUORLDYLTRGPVFQTEXVCADIYBWGZKSJONDOWJYTSAJJFZJFUJHEHQRYAWBRMEX");

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
    msg.setTimeStamp(0.128825402204);
    msg.setSource(61817U);
    msg.setSourceEntity(122U);
    msg.setDestination(17325U);
    msg.setDestinationEntity(174U);
    msg.reactor.assign("LZKLVVWZNOAEPSVEPMOVQVPORTMBUXCDDWGMKTJIONUCKRXEDZGJYWJYFVZQTXVMRYVHPWXYOMMZTUGCGSDUDFURKHJMAFJSPZPFAMARAIDVYSAKGIXNEJRFCEFZOPBIHYGWFSLGTZHRJSTBLULNEUP");

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
    msg.setTimeStamp(0.953235872868);
    msg.setSource(48222U);
    msg.setSourceEntity(154U);
    msg.setDestination(10022U);
    msg.setDestinationEntity(56U);
    msg.topic.assign("OLASYBKWSQAYNVZWHRGYVKCIOGRRKTHXRQMIRCHRKPQBJSJYBDOCTHLEHPFXMICOISODYXFABZRMXXQPUQTAVIMFWRTNLFTPOTUNVXSUMBJHIMABXSQVWQLPQHFNDVEFPOBNLWIBREUYZCACFDEKNBUZMPJKMQFCKFEDZUPDXMGSEKGNWVZILLTHUGNJCWTDEYAAGJNRUAZGD");
    msg.data.assign("YQCSLSZUJUGFNRAGIQCHIKDZNLXFKVVJKEKDKRQTCYBMXXOCWBUOUPLFXITXBEBDZUTCFSBTTDDXXPDWAHUPJNRXIFLIZEHFJIZQVRKGZHWFEPTODOSNJHEJIPHNOVCAAPOFGQNOEDAQZGKICLVYRUMNLPMKAQNNWWZOGBVMSBSJCSMIAT");

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
    msg.setTimeStamp(0.400491660107);
    msg.setSource(44619U);
    msg.setSourceEntity(222U);
    msg.setDestination(20622U);
    msg.setDestinationEntity(147U);
    msg.topic.assign("MTXTKVMGYERRFQHCZOBTFXYZCXFBYAPAWPJUTETNGYANUOZTOIXPXUVRZIEHHTAWWMOWLEZYSFLDWNACEAGYYOUPBZMVVRCTFWJDQLJYLDKRQHBPHTHXFSMSNUOGEHBXWXGSLIENODKRMVURPKCQELPQDJKONLZWBUDESBARBKIOIADJZKTHZVGBLPSMIQIGJFPSFIJXPNVBSVASDLUURWKZHAFWCQVIJQ");
    msg.data.assign("EJJKHXDXQWYSFWXGYOKZSRYKWWDRKRTASGJVSTJUBBVVNXUCKCXVNVLMIHRRIAAAMJJIDGWXDECOBSJPATSCIYOLZVHFAKBGCHRQEKFAI");

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
    msg.setTimeStamp(0.528550654596);
    msg.setSource(60740U);
    msg.setSourceEntity(249U);
    msg.setDestination(11559U);
    msg.setDestinationEntity(245U);
    msg.topic.assign("GJNJTLOJRKYZOBKCZOVBWFEDMPLYGBPFECRZZYGUIHNMJFQKMYHIEPIOQRVQMJSUJCYMIWVWDKXEZVKSYLXNLYDELOKCPPMWLDABNVSCTFPMQGIHEXRBZAEZITUWGQQSUBACOQSATXUBADOJHDNFFNYGNUTCQMFHZVRVCCIBWAIYLBHJWLRDSTUDCMQSPDDKQOGHUPTJSXGXVXFOXAIFNZTVESURFHKP");
    msg.data.assign("OQYDLXEGMAEQZPSRRJMHCKOVQUHPREWBFNOLEJGDMVIICYWVKSTIXBGHNFLQYYQAJFCMPDGATQIGUZZZWDXVZELVEHVEZAERTIMUBUPYHHARUSKKQFGJLTJYTXKIV");

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
    msg.setTimeStamp(0.51191682781);
    msg.setSource(28131U);
    msg.setSourceEntity(72U);
    msg.setDestination(1065U);
    msg.setDestinationEntity(154U);
    msg.frameid = 162U;
    const char tmp_msg_0[] = {-114, 33, -118, 72, 109, -22, 88, -97, -106, 115, 16, 117, 38, -37, 44, -106, 105, -22, -8, -63, 120, 89, 122, -48, -77, 30, -11, -118, -106, 0, 22, -45, -10, -85, 14, -83, -49, 117, -30, 0, 121, -28, -37, -103, 9, 65, 4, 21, 120, -93, 8, 86, -65, 20, 88, 100, 16, 80, 4, 45, 111, -104, -53, 89, -15, -101, 97, 106, 105, -10, -41, 30, 83, 75, -16, -20, -112, 66, 54, -59, 7, 114, -114, 55, 53, -95, -99, -16, 97, 80, 113, -86, 87, -89, -128, -62, 64, -49, 69, 41, 0, -91, 105, 30, 44, 48, -39, -102, 49, -69, 9, -66, 84, -69, 21, -52, 113, 2, 84, 54, -44, -36, -30, -85, -34, 35, 35, 57, -90, -64, -60, 13, 109, 8, -84, -103, -4, 81, 93, -76, -28, -34, -61};
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
    msg.setTimeStamp(0.0969939975733);
    msg.setSource(42856U);
    msg.setSourceEntity(121U);
    msg.setDestination(57958U);
    msg.setDestinationEntity(20U);
    msg.frameid = 207U;
    const char tmp_msg_0[] = {38, 74, -84, 36, -125, 37, -6, -99, 40, -17, -38, -103, 11, -46, 100, 61, 48, 98, -5, 110, -29, -74, 85, 66, 1, 77, 111, -21, 15, 45, -54, 90, 23, 84, 120, -53, 98, 9, -8, 117, -71, -30, -114, 114, 104, -19, 92, -43, 114, -44, 94, 81, -23, 61, -125, -64, -2, -67, 25, -98, 19, -95, 83, 18, -67, -58, 10, -70, -118, 78, 63, 125, -25, -2, -52, -55, -43, 7, -107, -68, 39, 43, -101, -123, -123, -13, -121, 45, -16, 40, 39, -83, -104, 62, 66, 119, -102, -2, 2, 37, -126, 60, 8, -95, 125, 83, -3, 119, -48, 4, -67, -41, -112, -36, -94, 105, -34, 107, 119, -8, 16, -25, -46, -6, -24, 32, -17, 84, 27, 99, 14, 69, 10, -23, -96, 115, -1, 82, -60, 73, 102, 126, 3, 29, 54, -116, 56, 68, -91, -43, -95, -52, -9, -33, 27, 6, 89, 78, 75, 58, -34, 68, -126, -73, 122, 77, -123, -54, -49, 42, 62, 104, 22, -121, 117, -123, 4, -123, -75, -65, 120, 55, 126, -111, -62, -39, 32, 30, -107, 111, 46, 32, -72, 17, 69, 124, 8, 39, -63, -35, 62, -34, -89, 71, 7, -53};
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
    msg.setTimeStamp(0.764254102376);
    msg.setSource(41838U);
    msg.setSourceEntity(94U);
    msg.setDestination(14632U);
    msg.setDestinationEntity(17U);
    msg.frameid = 60U;
    const char tmp_msg_0[] = {67, -8, 85, 126, 7, 44, -34, -83, 80, 106, 49, 50, -83, -67, -103, 11, -93, -17, 40, -78, -109, -18, 7, 126, 101, 117, -28, -39, -104, 114, -66, -50, 59, 79, 31, 113, 69, -67, -72, 64, -33, 61, -114, -8, 118, 46, 70, -12, 108, 11, 25, -49, -61, 49, 99, 74, 101, 89, -9, 116, 7, -107, 55, -70, -28, 25, 71, -103, 65, 77, -87, -114, 103, 29, -65, 27, 87};
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
    msg.setTimeStamp(0.458363380381);
    msg.setSource(28079U);
    msg.setSourceEntity(180U);
    msg.setDestination(36947U);
    msg.setDestinationEntity(132U);
    msg.fps = 242U;
    msg.quality = 252U;
    msg.reps = 145U;
    msg.tsize = 73U;

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
    msg.setTimeStamp(0.078848443486);
    msg.setSource(63523U);
    msg.setSourceEntity(225U);
    msg.setDestination(3700U);
    msg.setDestinationEntity(210U);
    msg.fps = 134U;
    msg.quality = 61U;
    msg.reps = 225U;
    msg.tsize = 228U;

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
    msg.setTimeStamp(0.19870208369);
    msg.setSource(29707U);
    msg.setSourceEntity(184U);
    msg.setDestination(1080U);
    msg.setDestinationEntity(215U);
    msg.fps = 27U;
    msg.quality = 79U;
    msg.reps = 141U;
    msg.tsize = 62U;

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
    msg.setTimeStamp(0.521491701885);
    msg.setSource(20182U);
    msg.setSourceEntity(139U);
    msg.setDestination(19875U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.248144669681;
    msg.lon = 0.907935799428;
    msg.depth = 112U;
    msg.speed = 0.162974632144;
    msg.psi = 0.605779690068;

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
    msg.setTimeStamp(0.148947255234);
    msg.setSource(9299U);
    msg.setSourceEntity(78U);
    msg.setDestination(61560U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.548921675507;
    msg.lon = 0.310324051891;
    msg.depth = 63U;
    msg.speed = 0.338096588732;
    msg.psi = 0.632655346395;

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
    msg.setTimeStamp(0.0809315950803);
    msg.setSource(19338U);
    msg.setSourceEntity(228U);
    msg.setDestination(55353U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.994028816294;
    msg.lon = 0.733847222804;
    msg.depth = 177U;
    msg.speed = 0.078740616345;
    msg.psi = 0.577705320199;

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
    msg.setTimeStamp(0.0243829469505);
    msg.setSource(13804U);
    msg.setSourceEntity(36U);
    msg.setDestination(11909U);
    msg.setDestinationEntity(218U);
    msg.label.assign("QSGTKVRQZDPDDWWOHAJYGJRUZDEIGBPPFSJMBSMASKMQJKLTTIQANLXCAXOCXYMFBTFLYXYNPCZFDIBSMPHGONBOSPCYLLKVTNLADHWCWMWYIYFVNZKZGVHDIIUJTPTEZHYBCJREOJJZYSKEDQLQUIQZKBBQLZCUHHIHWXBWNEMVETSJLGXFOPQEHWLRSOGPXAMV");
    msg.lat = 0.895012467591;
    msg.lon = 0.810582861446;
    msg.z = 0.625822990985;
    msg.z_units = 96U;
    msg.cog = 0.091460917865;
    msg.sog = 0.278700382363;

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
    msg.setTimeStamp(0.635714339091);
    msg.setSource(4825U);
    msg.setSourceEntity(194U);
    msg.setDestination(17582U);
    msg.setDestinationEntity(106U);
    msg.label.assign("NKJCPJIMZRVQKNJZCCXUGLTQMUXYFEVDRJTKTWNGBGGPIAQSCTHSXASAYWGWLJSUEIQMFXVBCODUMGOFPLDAXQHJTBSRKXSQWKPDHOWBPETYYLLLPVXQKJIEAVPINPFQZCDDCUFAVHEVHTOUOHMTBNTWAZYEGVBMJEDAUQBFNZHCLMRKZOMRIPFXFJDYBLFJKNS");
    msg.lat = 0.245706561709;
    msg.lon = 0.414006566971;
    msg.z = 0.281181250063;
    msg.z_units = 203U;
    msg.cog = 0.013112728598;
    msg.sog = 0.790973571409;

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
    msg.setTimeStamp(0.868324947388);
    msg.setSource(46930U);
    msg.setSourceEntity(212U);
    msg.setDestination(62865U);
    msg.setDestinationEntity(31U);
    msg.label.assign("WOXZZXWNKVXEPWLHWRUIAEHBTEUCLWCAFBTONKEVEAAOBXXVDCLKNTMOPBIDCIBHUPMIDUVFKHLXYZSQLDTKFWTCKCYNBDKFRCIGWEUGPQJUHYGRBUUGBYREQVXMIVJQRYLSRMSYUPHDZNHVZMTNNNFAWYGRPHNIJQLFZOXEKXQVLPIAWBDSTTTJPZIRWQJGSGGPJYHOVRUFVFZFOO");
    msg.lat = 0.995001661142;
    msg.lon = 0.192912482976;
    msg.z = 0.636384318284;
    msg.z_units = 180U;
    msg.cog = 0.291406469812;
    msg.sog = 0.717378399998;

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
    msg.setTimeStamp(0.613905682204);
    msg.setSource(38423U);
    msg.setSourceEntity(76U);
    msg.setDestination(65517U);
    msg.setDestinationEntity(216U);
    msg.name.assign("EYYEJUGHSCZT");
    msg.value.assign("WDJKXKLHLRHNPVFFNXMYSXEIGSHYXEEKFCHQNGLIAIZFYDBJMYNGVDBSQVCIRBSQSVXUBKFZOCAZSTCDBTCSTNJRWLLKJWIFINTANMERTYYZOVLYKUNJEAAGVSIKINMLOAHERZVXD");

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
    msg.setTimeStamp(0.515001402661);
    msg.setSource(15545U);
    msg.setSourceEntity(41U);
    msg.setDestination(22344U);
    msg.setDestinationEntity(226U);
    msg.name.assign("OJKGLHHOQCMZEWFJVCRFXFDWTBBOAIBJFNZITLDNSHSJUWSDXXKAPHLVXNGQWAVFNBWOCSYPPGNVCCHUUTBAUUMZTMCPPGRDUKDRISTAVMXTECGXHOMLZQLYYUGQFDMWKUAYEKWB");
    msg.value.assign("OYVSGQNSWYOALZZJNUBJNXUAJEWEQKXWVIBTYCQLYQDPODFYFEKSHGEKVASSWZVFHDUKXVLAUGBYTLXSBPUENZDIMVTLXMZACXOITVGXRGHSJIJNQMFPKRBSSPLSUOWKQZTYCHLCGHJFGRCRKZYNBTJWPLHPRXUGFQIJOJACDMFPBZYUUDMHXVVBWVGFIUNRPHOKTTAKQRLODHYRDNBPCXLEJIWNGMBMHZNWECDQTDC");

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
    msg.setTimeStamp(0.984586916712);
    msg.setSource(30325U);
    msg.setSourceEntity(35U);
    msg.setDestination(13443U);
    msg.setDestinationEntity(173U);
    msg.name.assign("VBAPMYETOZHFGPXAMXONOVQWPJISDRUWFCJOAELIVFVBECDLGPINZSKGCWJVVAPKCNOZKWFORYKWAFTZRADXZFJAXJOMAAWZMKTVPLBXXRDYTWXTKINSTTGCGQQHFRZYENOCQQPLMVHHQQMJMLQEBURZXUYD");
    msg.value.assign("ZAOHVDBRWWPSWMAOWDXSVJFVXLSQWPLQYFTVEARFQOLFBYAUYVDMRTDGYRPIAIGOUMEMKNTTOTJGHOHFZUGMMXHTQCKDBKKLHXPNPIRMWRGLDOUUYSWNHQFNLFQNSNLBLNEXKLHAHKKOZEPFZP");

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
    msg.setTimeStamp(0.637026647094);
    msg.setSource(45277U);
    msg.setSourceEntity(248U);
    msg.setDestination(3768U);
    msg.setDestinationEntity(224U);
    msg.name.assign("MXHDWWGCELKKIUTLHEZAOQWHRUULVCLKTMIRCHDXRODPEWMQDYLDFQCVRNESJTAAEXJGXNSFKBTMOJIAZAFWROGXBOEPZSKZIPNYGARLPVMFZUHGCDGKZYLYVBSXDCYSBPHGDHMECSYAHPJONSFJDQONPNCXXLPXFNZVUFVEBNNE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GXNOBOSIZSLKPZQZSPMBZGPBEIDIMWZELNVWYDEMVXXMFVOUKPLLKPEDYRXKBRQCZJCWBUHABVJYEGOUYSLNQCBDFLEOHYOLJXVHAJMNOVTGEIACRCHGJESPMZUTTOKQMYNHZWIQINCCMKTLDTRZRHDENTIASTJXIUNKDBSFK");
    tmp_msg_0.value.assign("JLXQPWGNOCNFIUVLMHPZPBIWAMVBBORNRODXTNUDPRWEZLXUFQSBZVESLDQEOWXXXYWDUNTFIMYETGHCPRBFRUJTIMKOZSIXAGVCBKCUDQTUGACUTETXMUJCAYIWSNESANLZKHZLHJVQNXVPYQCVJURKYMQEKBDSJTPMKVBLWIPFCTCNJHYHRAWZHLYQBFLAADGHXGTZPKMOVRAWDRSZADIFSFG");
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
    msg.setTimeStamp(0.0413894530457);
    msg.setSource(3319U);
    msg.setSourceEntity(24U);
    msg.setDestination(43433U);
    msg.setDestinationEntity(42U);
    msg.name.assign("OEYARNYKKWJPCHCMTZOBHWAWZLLRSBZDWRQMIXSALMIUODJICHIQFRLXXEOQQRWCXPJPDNQZIEGJLXNFIZWCKHNZZOYQVEVUEMJVSPJCGBAVRPHFVNUFHMETTXCNBLSVRNEORYFXTMLWAXEBKMYULXNKQBYTSAZFDGRSDSVKWFYGHTBBJASDPCUGGVPPJDWYGAGQPQSXTUPISUKOMOVKFBFJDHET");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TYYAXQFLDROYSPNAFWSAHUDHQWNBEQCVSKJRBGCFOBGORGTFYWITIRQALDBEBUAJQWVULWJGUBCPLVDODWRHFKMFSNSUBZPSGXVKZUGMEXEZYMBVAVRTHOOXHEQMOPNCLRIIACNJKNKNBZYDIOJHRTZVMMMVWPALWJUXMEMEQKLLIBPCQSNHSIAESKZHUKJQFGEIYOXLHTUTVZFEZAGVXYGJZDTWJGUMPKITDCNDPCRXPKYFZ");
    tmp_msg_0.value.assign("OYENDIFVNBVKGQQSACYTZKSLBJIAPSTZHGPHWOUUONQAILEIVPYAMRXZCFCIAFOOEBVYLRQZVGJNXDYDSWTLPM");
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
    msg.setTimeStamp(0.266967796607);
    msg.setSource(21607U);
    msg.setSourceEntity(35U);
    msg.setDestination(47460U);
    msg.setDestinationEntity(199U);
    msg.name.assign("MZJQNHCLYAXANATDJFPAGALTRYNZAVFAJTYETDMUQWRKJVMIWDXIXCTRYBVNQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RYTLUONULJSYMYCEATQVDLTVYDBVEPAYMVQCDTMSPNURHGX");
    tmp_msg_0.value.assign("WCXBFJUSJHUSVHYJJRNTMKJLILMYZVDCFXXZRLANCAESQEDLTQHRFUTGLTNAZDMDGKDFKBNWGAZCODWNUIYBXZRYZRXPGEGDPNDFIMXHPRWWVZIMAAB");
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
    msg.setTimeStamp(0.52150086645);
    msg.setSource(54885U);
    msg.setSourceEntity(173U);
    msg.setDestination(29275U);
    msg.setDestinationEntity(40U);
    msg.name.assign("BPYEKJFJMZOGRVOFHBCXCKAQDYGMLSRXCMOZWHQLYIEXAGRIZE");
    msg.visibility.assign("PPNUWYFCRSNMCCCSOVPWSFHJFQXGFEDVIBMTMVTZOYBJHYHHAQRIAAVSLXNQUNIMKUYWAGJENKWEDQKZCUBONLBGFWMJGFSKLTPD");
    msg.scope.assign("PCITUZRAWGJRRUMQNWIKKBOEBRZTOMZEYGXAXOWMANYWONJNHDDQUHHVAVXWBQDTVXIZTIOXKZUFTPNYEQRQJPSQSYWDZSEBRCSKFMAEAGDVOAMNCMIFZIWLBIGDUZKWPQBCYJJEGKXNKQQOPXJVUIVRWHFAODXCLPNCJFHPETUESBFSQBAWTMFELPYYTBJPRVHNVALTJHXMRNGUDVULPLOLDYFOLZKBFIMZD");

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
    msg.setTimeStamp(0.914136972603);
    msg.setSource(65470U);
    msg.setSourceEntity(188U);
    msg.setDestination(34734U);
    msg.setDestinationEntity(131U);
    msg.name.assign("WMHJVOZJOVPJPIDHLXXNMPHUCZEDKVCDXLYYSZKSBNVCEWXWJFAOTMKRUVXHXSNMYWBIDCZZGQMVMSYXIOKRVITMWNYTTKWXHAFRAAKEBGOM");
    msg.visibility.assign("ODPXVZWDAUOPIWXXIEPXMQFWYLLTQHJAHZECUTADHXZBCEXLFEHBUYYNYBRFTTPQKKUWEEEVKJAJWZIVGGOILHJWCJJYRFLSGYYZNSVGDNHDSEGWSUYAXKCOEVZJPDUNBMLOUOVWAZMSQHURRT");
    msg.scope.assign("UYSKMCROTVBELNBNVPIURJNQUNNLGOTGOZUFIANPMXLEUXHUZKTZQNERJFHFPREPQFYQXRKPCWMVSCURLHZWRVIQWICFXJDGGOBVAVZBRSYJGNCYOVPQOLMTUADFEHMBIIBJOQNNPDXEZAGMKMSRWZZEYXQTFFVKKQVHTDICJKSGFMVHDSBHAGJHDYTWLDPLLAKQDCUCYMZYWTZ");

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
    msg.setTimeStamp(0.261009695747);
    msg.setSource(45979U);
    msg.setSourceEntity(222U);
    msg.setDestination(54875U);
    msg.setDestinationEntity(141U);
    msg.name.assign("FWSOOHMUZYLHDWPLKGBAQVT");
    msg.visibility.assign("BGDIVEXPMZKLMAVTYROQIPNUDDGUULTGFQJVZWVMJKQRZIRUCMVEBWIMHAWKWQSXOIENGRYYNCDNFZIMXHACRVPNGKCWEJDUGEUAWLOSNRUDVBFAJBIZKBPRHJTOYUOLNHJIIHLNESPXIHDSYBFAXZS");
    msg.scope.assign("ZAJTIEXKEFPRTKBGMSRWTXJKGJZCMDGZTQNRLLSVPVLNBPHAKPIHAYXHOOUTCUCTXEBCBSJCYQEHWLBRHFAGNSXDTDNJHWTDRUDHFOBCUEVZRFYGJVJJUUXODFGPDQTQWBVZYDVXGRQOWYEEAMCKOXYQWLZKPMINFDQPPSVMPYAFUFOCISYKRZDULFWUACIHWSBBIQMILXSVQIGARHFMGWSVIZUMHNOLVEZAJLNLNITGYYCXPONB");

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
    msg.setTimeStamp(0.177149305504);
    msg.setSource(36641U);
    msg.setSourceEntity(81U);
    msg.setDestination(19668U);
    msg.setDestinationEntity(123U);
    msg.name.assign("HEEQIUYYVGYXPOJHGPYQLFKSVRRRUMZYWVUIWXOSCNDHIJCHUAKDRBPGAZJLTLVMQDSAMTCMJCPCDFRVZZINUQFFWRQQUUNNCWAZCAFGZIKOEVZHZGWWDXVLKUNZGXCNGQTPZKXKBMEYJFTDWEKJTBVCXIVTOTNCMPNIBQLSFQXWOLHODXDVFHWLMRMTLYTE");

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
    msg.setTimeStamp(0.960911942899);
    msg.setSource(27738U);
    msg.setSourceEntity(188U);
    msg.setDestination(48183U);
    msg.setDestinationEntity(167U);
    msg.name.assign("FIIGCKVOARKTISEQYYCCHZKULOMTTGSTRYQYIAYRDZUDZYRMYSBSURMIJVAQYGVEDKEONLMVDURBQRFWGCXKVARGBSZWCWKPTWISSNIATHELXZPIEUNCHXMHZY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BLEIQZJKBLDXXSWRDSSXPHKFFDFTLGVPDKQNFTIYMQXKXUPHYRLXYEHSPDGNTLQRNCIGZMQNVGFUCRGBFYABDHISPQORQPYIETOFTHHICNLEBJYCJNIGINOHQZFINRECGVQZTPMTCLGOUMMBUCVMZBRBOWUASXHOAAFMAAHVCYUQ");
    tmp_msg_0.value.assign("LVWTBJWIGKSRKZETSXTFBYABDYLPCXVVJWIAKSFEVRZSTYMSFZAOZMEFYHONRCBUBFNFYJLJEWEBKNFAMLSETYQPUZXVAYBEUHIGYRRBDPGDOXCLPNCXUNIUAJUQCDKKMAKJOOWNNYLRJPQZXJRUIHPFQEQLDIOWYORQGPMPQZHMCGLSPWHNVFALTGNVQIWRUDHCVKQOGXVBPAVTMZGIHCUZUTXWZTGJQ");
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
    msg.setTimeStamp(0.501741243121);
    msg.setSource(35457U);
    msg.setSourceEntity(8U);
    msg.setDestination(34730U);
    msg.setDestinationEntity(167U);
    msg.name.assign("ZKUYAVLLLLTJTXPUCNZDZFKCZYVRLXAQVLFHAJHOVANBRXPEHJREYOFWGROZIGSIGWJNVSAPUBQYAMKPOFDSQTDTXWUMGEMHKRHCBQBQSLWGABUWDPQTGFKFUDYMXZNNJZCCIZQXMGERCNWIQPGWMUDOSTOEQRTSFETJIBHDITDCZYDIKCAMOPORLSMYHFOPPUQGMJNEGJACIEIUHWA");

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
    msg.setTimeStamp(0.772770963546);
    msg.setSource(3165U);
    msg.setSourceEntity(211U);
    msg.setDestination(47541U);
    msg.setDestinationEntity(214U);
    msg.name.assign("RPIQCPSHKIEGSFOFOIURFCUBTQQLSBAKEDANFNVYRRXDZCSNYJEWZNODATSADOEJWWHJFKSPKMMAEIPNILHVGKHGKEXLVVZSQRBLWWAZYXPZECRLPUYT");

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
    msg.setTimeStamp(0.918646225143);
    msg.setSource(45865U);
    msg.setSourceEntity(162U);
    msg.setDestination(27931U);
    msg.setDestinationEntity(45U);
    msg.name.assign("BZZQDTDYENAVHOXIAAHNXWCWSYQILYFWMTFNJWSCNYEOJIZXIPKULPSSJUBPZBAKFBDVHTDETYFGSJBRUQXKDRGXVJPOPFHOBNZGUCGIZFJRENRPQEYTZWNEBALYICNJWDIAZYEGRWXRMMSTQTHDCKUNPUZSEPCXECBAOHXUVWOUFPLWLQGLGGVJCHDKUFTEQQOVBONMRVVBASAYHDTGKSMVHRDVYHOSTXZJFLKOMLXIJMRKWGPFLURKIIKAQ");

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
    msg.setTimeStamp(0.621610926698);
    msg.setSource(14360U);
    msg.setSourceEntity(26U);
    msg.setDestination(51217U);
    msg.setDestinationEntity(72U);
    msg.name.assign("JGYZAUFPMKMNOJZKDKQOKCIVBYNIGLHQMTLHXLEWRJUPWJHKJBLABGAOFTYZMHVEYKAWQTINTOJFRCXBMTCVUYEWXJGQSMWIDEFMAPSMZLRFQLSRUAURORELBLGBKITQWIPHRQXEPGSBQDZJYKEJUCYVAXTGWSTAQCCZLXZFHFDHSYRPIRDOWTWCPRUVGYSZZDSOBVQXUKVLABOXPJDYVHFGCDNHMEEANSOEU");

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
    msg.setTimeStamp(0.184811536757);
    msg.setSource(2783U);
    msg.setSourceEntity(245U);
    msg.setDestination(21355U);
    msg.setDestinationEntity(122U);
    msg.timeout = 4280252951U;

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
    msg.setTimeStamp(0.216797518754);
    msg.setSource(48013U);
    msg.setSourceEntity(17U);
    msg.setDestination(47725U);
    msg.setDestinationEntity(220U);
    msg.timeout = 1673475109U;

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
    msg.setTimeStamp(0.65198296535);
    msg.setSource(32250U);
    msg.setSourceEntity(194U);
    msg.setDestination(58643U);
    msg.setDestinationEntity(52U);
    msg.timeout = 1113364524U;

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
    msg.setTimeStamp(0.267340079582);
    msg.setSource(2498U);
    msg.setSourceEntity(244U);
    msg.setDestination(24651U);
    msg.setDestinationEntity(38U);
    msg.sessid = 4022549771U;

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
    msg.setTimeStamp(0.483033729078);
    msg.setSource(58081U);
    msg.setSourceEntity(208U);
    msg.setDestination(29831U);
    msg.setDestinationEntity(129U);
    msg.sessid = 926977944U;

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
    msg.setTimeStamp(0.542722070016);
    msg.setSource(8075U);
    msg.setSourceEntity(101U);
    msg.setDestination(46128U);
    msg.setDestinationEntity(72U);
    msg.sessid = 4275239015U;

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
    msg.setTimeStamp(0.534272556239);
    msg.setSource(31719U);
    msg.setSourceEntity(95U);
    msg.setDestination(16320U);
    msg.setDestinationEntity(122U);
    msg.sessid = 1345556868U;
    msg.messages.assign("RNTVPLGWZGSMPAOOPBJXFJYDNBVSIBIRNFCWBIKXMQXPJKWXBVUCNEMATPKOHZEMEDZZEDDJLVHCIKTHMNRFAFISPQSGYGMGTLPYCRXXOMALSIXUOIBQYWSVLAKIXRNHPVRLVSJYRQFFREULLZGRFUVJEHTEDZCBUWWZYOBHWCDUTPYDVIKBSEQAGEHZKINFMZQTCWWZVXDJUDJPHLHXKTAYQTJYGCYCJHETUNBUDWAK");

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
    msg.setTimeStamp(0.863616655373);
    msg.setSource(32879U);
    msg.setSourceEntity(4U);
    msg.setDestination(30444U);
    msg.setDestinationEntity(171U);
    msg.sessid = 527070573U;
    msg.messages.assign("FFYXCHTBAPELNGRHRBPDXQWHTQGSNIQECOOQMJPHQBDKKZHBSH");

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
    msg.setTimeStamp(0.527823008707);
    msg.setSource(33985U);
    msg.setSourceEntity(22U);
    msg.setDestination(62262U);
    msg.setDestinationEntity(39U);
    msg.sessid = 1379945422U;
    msg.messages.assign("WBAYIUGLJYVSGFDLKOHDXGNNUVOKUMGABFLELNIGCFQIAPCIJUDJUVBQHSEZBOQWWOCNMMPHDLXJNGVDXOQRZFUVWXTEHMSLXMEREEWWNCSCJICENRKPMSFMDJSOYBRLWUHUXCXSPREFNBIYOVWZUYWRTIKJOZWLPZDBBPGGOPOPHYCHTKKYRQABXIDSUVYPQQPVTTEQDFELVYZHAAXMZHQGJVQAKAJRGZIMTKRATFZYNKFJSTCTFXMATDCB");

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
    msg.setTimeStamp(0.491907970117);
    msg.setSource(33794U);
    msg.setSourceEntity(229U);
    msg.setDestination(35981U);
    msg.setDestinationEntity(19U);
    msg.sessid = 874093265U;

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
    msg.setTimeStamp(0.464873894096);
    msg.setSource(3490U);
    msg.setSourceEntity(178U);
    msg.setDestination(64594U);
    msg.setDestinationEntity(33U);
    msg.sessid = 3910642544U;

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
    msg.setTimeStamp(0.328224215311);
    msg.setSource(18066U);
    msg.setSourceEntity(45U);
    msg.setDestination(7586U);
    msg.setDestinationEntity(182U);
    msg.sessid = 3935262470U;

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
    msg.setTimeStamp(0.730325811998);
    msg.setSource(51466U);
    msg.setSourceEntity(71U);
    msg.setDestination(56232U);
    msg.setDestinationEntity(86U);
    msg.sessid = 713669828U;
    msg.status = 42U;

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
    msg.setTimeStamp(0.584218651122);
    msg.setSource(11404U);
    msg.setSourceEntity(138U);
    msg.setDestination(41118U);
    msg.setDestinationEntity(207U);
    msg.sessid = 1072940881U;
    msg.status = 230U;

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
    msg.setTimeStamp(0.591802993064);
    msg.setSource(24237U);
    msg.setSourceEntity(200U);
    msg.setDestination(11035U);
    msg.setDestinationEntity(83U);
    msg.sessid = 1210372580U;
    msg.status = 212U;

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
    msg.setTimeStamp(0.68962031566);
    msg.setSource(47503U);
    msg.setSourceEntity(111U);
    msg.setDestination(27035U);
    msg.setDestinationEntity(160U);
    msg.name.assign("VKLBPTYUAMASCDHAXUNIONOLZPPBYFBJNJELDQNNJXTFBNLOWKYHVGACVBHSKALRMYUZTRGSVWMFWKODRSEPVRGCGZFSDUMSOEUFDZZXRCIIKBJMEHFNKZCQAPY");

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
    msg.setTimeStamp(0.220239523553);
    msg.setSource(41130U);
    msg.setSourceEntity(30U);
    msg.setDestination(17125U);
    msg.setDestinationEntity(59U);
    msg.name.assign("SFHJJVUBBYCDSHLPLECXFWZKXBICKR");

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
    msg.setTimeStamp(0.890962769283);
    msg.setSource(2972U);
    msg.setSourceEntity(23U);
    msg.setDestination(40623U);
    msg.setDestinationEntity(218U);
    msg.name.assign("RSGOHKNSNSQEDIKPNYBOUAJDOLXALCZENFELTEFFXOVMQOQZVNRLMUTCKXRACMSBMMBPCWZRPVSVDFSQKU");

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
    msg.setTimeStamp(0.88154590362);
    msg.setSource(54967U);
    msg.setSourceEntity(31U);
    msg.setDestination(47969U);
    msg.setDestinationEntity(144U);
    msg.name.assign("TVWCROJZLQLORTPVDAYIOCBWRLWZQXGMQHEBPTAEDFDXVWLJCBXTGVEUJUGNMLDIVDOBLPHLPKPOCFRQMACHTKVDVLWGQIESYIFICXVHWBGIGSABACNYZQCAKJVHLZHNVMHQUJJSAACFRUNKZJZKHPJNEKIKPDWYBGNRRPSEXZRSZFDYLQBFMDGTCWONGPWRBTKXFUZIRMQYEEUUYMOSXMEKJHUU");

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
    msg.setTimeStamp(0.497557258309);
    msg.setSource(52931U);
    msg.setSourceEntity(205U);
    msg.setDestination(7640U);
    msg.setDestinationEntity(121U);
    msg.name.assign("WTTEOBJPBHGUHQABGROHYSILDSHDUTVCXSNZKNVBGZTKUYIDGCSQQULDOWCHWWJCJITE");

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
    msg.setTimeStamp(0.908269225352);
    msg.setSource(14083U);
    msg.setSourceEntity(113U);
    msg.setDestination(1586U);
    msg.setDestinationEntity(151U);
    msg.name.assign("BYNEIWMADOTAMQSCCCDTXBXHITBKKCKHSEXPZBQUQCZQPOFKWVAIHXNBLTAYMVSFFETSHFIPYRNNUGZLZNPPNDOWPAFAOJEZWQMPMNBOLEXHIUGGD");

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
    msg.setTimeStamp(0.908891066999);
    msg.setSource(49334U);
    msg.setSourceEntity(42U);
    msg.setDestination(12782U);
    msg.setDestinationEntity(147U);
    msg.type = 4U;
    msg.error.assign("JVJGHMXLHIVVVNAEYWEYPFSMCGONQGUAHXVTUBRSMDMQDTNPUOSJQKAWCTUFVXPIARAXRNFODGRFIJZAXYATWWVSTYNCMGVBHWOTBBEMLQYERMRMNWKYPNCKDFJHCCXSZDQGUKRZLPEGQJZPIFGYVDNHZWWBYOMBUFEDPMLFDHKFRAHQTTICUOTOKGRSXLINZVEBLQSNELJIALQTECHZUYUEZSCXKWBDZJKBUFSPOIHOQYZBPRGKOLSXIDWI");

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
    msg.setTimeStamp(0.0960918762523);
    msg.setSource(64086U);
    msg.setSourceEntity(25U);
    msg.setDestination(10496U);
    msg.setDestinationEntity(193U);
    msg.type = 52U;
    msg.error.assign("NVIXFUYEZWQRYRNPYJPNOAJOQNQZWKSBPOLKSCQRHDSUMBBSXSJTOTAZCWECUCNUBJLLDVXGFLRICAJEUKEIADNAMWYMGLVGUXCVMHJRGOIBIXQWFGEPGEOBECEIMVYVPBDKNXHULIDSEMHSCDNKFQYPHXWKPTBCJTNSQWJWXVNWTRYGRQTMGFKVJFARIXTMOZSIBKUZROXYDHZLAHLOCPLZDWFTDUQOFEKKMJYAGDIUZSPZQYHHTBAHVZGPTA");

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
    msg.setTimeStamp(0.0491187550074);
    msg.setSource(14658U);
    msg.setSourceEntity(35U);
    msg.setDestination(20560U);
    msg.setDestinationEntity(238U);
    msg.type = 35U;
    msg.error.assign("BAPKEOQNYVRMMECNSHGQUVFMIMRXIUIKXSTYCDKHJNLYLVTCTJKTVZYXALHYOWOIXZYLEOVRWXMTSSJRYSADFHPIRULURWBROCXJZKZNQPPGQIBFETYUSXPHYEFBDDAHLLFUVVHKJPPFDQEGRMCMNWBAQFGTMKBZOSDMBEJUGWE");

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
    msg.setTimeStamp(0.819038422912);
    msg.setSource(4042U);
    msg.setSourceEntity(174U);
    msg.setDestination(53793U);
    msg.setDestinationEntity(155U);
    msg.seq = 939U;
    msg.sys_dst.assign("AZXJZWPINVKUWSLBGTAIWUDASKYINTJZYJURZRBBQVDIVUNUMSQEHVAHKPJPPLPRGKLEHRWTGLMKMHCWOSKCXAXHFEIOCHMPRFYHETDZCUYTIRAACVWBQZBFQTASPGZINXHOBTRWNTERLWJUHOPZPDQMVFKVCBQLXMGMVERNPVQSYLMDZSDDUTNGMQCYIJICBXYEETRKOJJBGKJAS");
    msg.flags = 32U;
    const char tmp_msg_0[] = {-101, 22, 73, -120, 0, 118, 66, -88, -5, -50, 55, -16, -106, 83, 36, 8, 89, -16, -108, -99, 108, -67, -2, 88, -5, 118, 126, -109, 77, 105, -29, -76, 22, -24, -106, -111, 106, 59, -26, -49, 82, -126, 88, 111, 24, -9, -67, 20, 40, -59, -53, 66, 49, 45, -60, 39, -58, -64, 66, 42, -23, -101, 7, -46, -116, 64, 99, 50, -35, -113, -11, 34, -74, 116, 70, -97, 61, 11, -24};
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
    msg.setTimeStamp(0.364745765083);
    msg.setSource(59994U);
    msg.setSourceEntity(30U);
    msg.setDestination(34597U);
    msg.setDestinationEntity(193U);
    msg.seq = 41881U;
    msg.sys_dst.assign("ZTTJPOYAXHSIUBQJWRCPMKXWJTWAJSKIHPNRQVWCESATPHRYUQMQAEKIRIJFEMODHRQXJNIVKZYFVBXLFWCHLXYHHKSGSEZUCRKIUDHB");
    msg.flags = 88U;
    const char tmp_msg_0[] = {-82, -114, -124, 96, 80, 90, 15, -65, 21, 51, -85, -28, 49, 79, -34, 3, -110, 47, 7, 61, -72, -88, -23, -104, 3, 69, -59, -75, 66, 124, 51, -62, 63, -117, -62, -121, 77, 74, -18, 91, -22, -128, -16, 40, 121, -56, 47, -60, 35, 58, 99, 124, 49, 113, 94, 90, -73, -81, 82, 33, 116, -67, -87, -21, -88, -19, -28, 101, 103, 63, -2, -5, -26, 71, -57, 39, 101, 79, 89, 23, -115, 110, -123, -18, 90, 14, -122, -2, -121, 70, -2, 119, -91, 43, 57, 33, -14, 37, 70, 105, -23, -55, 16, 124, 11, -70, -117, -43, -48, 100, 126, -82, 48, 17, 75, -27, 64, 29, -54, 29, 100, 106, -36, 52, 1, -35, -96, -21, -89, 62, 58, 1, 45, 105, 46, -98, -58, -41, -43, -123, 49, 39, -101, 39, -6, 78, -32, -81, 54, 33, 116, -57, 20, 10, -37, -98, 33, -30, -10, 58, 69, 112, -44, -25, 94, -11, 51, -50, 7, -53, -18, -4, 46, 73, -6, -121, -14, 87, -68, -42, 92, -70, -41, 16, -81, 56, -103, 113, -15, 106, 121, -2, 82, -61, 53, 54, 51, 113, -123, -79, 82, -24, -126, 22, -62, 59, 98, 13, 85, 93, -88, -11, 29, 116, -53, 113, 83, 70, -50, -124, 26, 78, 72, -102, 36, -9, 13, -80, 52, -96, -23, 77};
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
    msg.setTimeStamp(0.50434259717);
    msg.setSource(61809U);
    msg.setSourceEntity(151U);
    msg.setDestination(31532U);
    msg.setDestinationEntity(123U);
    msg.seq = 49830U;
    msg.sys_dst.assign("VVAJJYTLPN");
    msg.flags = 230U;
    const char tmp_msg_0[] = {25, -25, -5, 104, -61, -21, -78, 107, 44, 18, -61, -82, 84, -47, -44, -122, -128, -75, -58, -88, -41, 70, 46, 79, 60, 125, -27, -77, -73, 45, -65, -14, 36, 11, 71, -50, -95, 71, -39, -34, -92, -56, 10, 52, -2, 126, 112, -18, 61, -86, 87, -13, 4, 29, -39, -56, -21, -111, 37, -117, 89, -26, -101, 117, 48, -22, -117, -122, 63, -40, 38, -107, -56, -82, -100, -2, 5, -48, -17, 118, 123, -58, 93, 81, -93, 58, 33, -70, 62, 77, -53, 75, 88, 0, 31, -118, -88, -23, 85, 101, 104, -66, 19, -9, 53, -17, 28, -90, 83, -90, 88, -37, -69, 75, -118, -25, 26, 88, -56, -22, 23, -111, 4, -113, -91, 99, -101, 61, 121, -49, 56, -99, 26, -50, -80, 67, -120, 49, 2, -57, 56, 0, 81, 33, -79, 111, -15, -34, -123, -105, 10, -47, 54, 71, 96, -44, 57, 52, 79, -38, -14, -69, 2, 22, 121, 118, -62, -118, 109, -89, -72, 26, 104, 78, 12, -95, -3, 112, 101, -98, -36, 41, -11, 17, -20, 101, -80, 7, 78, 107, 32, 40, 58, 80};
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
    msg.setTimeStamp(0.0258292258331);
    msg.setSource(7887U);
    msg.setSourceEntity(247U);
    msg.setDestination(38918U);
    msg.setDestinationEntity(152U);
    msg.sys_src.assign("UKDAKUFVDJHXZEVLEFKTZMVFGZIEARKRRJAQUF");
    msg.sys_dst.assign("AWOPMZIDBYZNOVEOOWKCSXMERKEQUQGILAHJVZPOWZTNTFANNCCWRBPWITNBLLWDEEJYJMSUBTBHDLQYGZYVMGOAHPYKESIDMVTUAKUNSRTVVFHKPRNZRFMJKQGXKUBKCERTXJDRXHRGXSHVYIFPGGRP");
    msg.flags = 198U;
    const char tmp_msg_0[] = {-89, -65, -113, 2, 49, 92, 93, 79, 113, 22, -101, 72, -103, 111, 91, 71, -112, 62, 35, -83, 100, 65, 27, 88, 59, -53, -120, 59, -30, -128, -55, -14, 29, 69, -20, 80, 13, 106, 123, -125, 84, 47, -108, -111, -68, -44, 124, -94, 38, -56, -128, 114, -38, -43, -108, -26, -117, 46, -107, -115, 28, 109, 13, 89, -86, 118, 58, -58, -57, 33, -30, -27, -62, 40, 72, 2, -98, 56, 43, -13, -38, 61, 7, -108, 54, -54, -102, 116, 88, 82, -52, 121, -22, 50, -116, 5, 9, 50, 123, -10, -24, -127, -94, -111, 43, 52, -37, -72, -74, 38, 0, -58, -122, -80, 88, 98, 38, -1, 54, -120, 2, 4, -125, -116, 109, -51, -78, 13, -98, 42, -66, -71, -87, 76, -74, -126, -62, -88, 63, -96, -22, -97, 66, -38, 2, 16, 73, -74, -39, 33, -74, 102, -59, 2, -36, -9, -123, -69, -60, -19, -124, -34, 61, 16, -106, -47, 30, 17, -111, 120, -105, -19, -59, -115, -33, 84, 104, 100, 103, -68, 98, -108, 116, -66, 32, 96, 17, -29, 24, 91, -13, 84, -71, 11, -40, -111};
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
    msg.setTimeStamp(0.509304023967);
    msg.setSource(36904U);
    msg.setSourceEntity(201U);
    msg.setDestination(47201U);
    msg.setDestinationEntity(236U);
    msg.sys_src.assign("YXOXYZVMHGTKI");
    msg.sys_dst.assign("GLBKJWWYYHAPFJZHQFSBMXBSSFEJTYOPRWNDCLESIZHMAFPWXJEWTPYXGDKORCICNHJKVTEBCUHNFBMOAQZIKICSZQKCVKQXLUVZRVYDSIAUXQLNWLNNTAXZYHSGGQQOKRPAYSTWUGNJX");
    msg.flags = 181U;
    const char tmp_msg_0[] = {-35, 87, 71, -107, -78, -48, -84, 100, -76, 15, 115, -12, 3, 56};
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
    msg.setTimeStamp(0.745577843916);
    msg.setSource(50702U);
    msg.setSourceEntity(107U);
    msg.setDestination(2742U);
    msg.setDestinationEntity(162U);
    msg.sys_src.assign("FYGLIBCJOTLYMDAPMNWQ");
    msg.sys_dst.assign("ZFQBBJAIONTKJRYDPHRBDXHGDRDSGESGLQNNAUNXLPGBKGBMSGGELRMTDQXZISPCWPXNXPYLCWACQJEOYNWYROHFERJOZTABAX");
    msg.flags = 10U;
    const char tmp_msg_0[] = {-119, 126, 8, 75, 31, -120, -4, -79, 36, -81, -19, -38, -73, -48, -102, -35, 7, -22, 33, -119, -72, -59, -83, 75, 27, -65, 62, 44, -90, 6, 43, 123, -34, -39, -117, -72, -19, -46, -22, 52, 121, -59};
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
    msg.setTimeStamp(0.60986072122);
    msg.setSource(9954U);
    msg.setSourceEntity(139U);
    msg.setDestination(46577U);
    msg.setDestinationEntity(217U);
    msg.seq = 6402U;
    msg.value = 22U;
    msg.error.assign("TDKSRHZZXBZRXYAXLPPVEPSHFKUXONVU");

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
    msg.setTimeStamp(0.785893652483);
    msg.setSource(49551U);
    msg.setSourceEntity(238U);
    msg.setDestination(37894U);
    msg.setDestinationEntity(45U);
    msg.seq = 19432U;
    msg.value = 121U;
    msg.error.assign("UIAJZZXHNRNEMEUTYCMLYQPYQ");

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
    msg.setTimeStamp(0.900782744562);
    msg.setSource(33067U);
    msg.setSourceEntity(9U);
    msg.setDestination(1697U);
    msg.setDestinationEntity(83U);
    msg.seq = 64865U;
    msg.value = 124U;
    msg.error.assign("YEZWUTHXZJGXPWWYLZCFNDZNJOAMCVGMXKMGSPUUHSRVKAVHAHBIXQCGZTUOYJMBQNHTFLHULONHFWUEBQKEPKYJSCIPFBKTHVZYRIEPQIKQXDGRADBICIKGUWSNADUVFMNCTXVAXPONRDDSKIZOJSMCTCQVFVBIEFSYBVPYFRJTOLVLGHQJLKFDMCXQZWNUIYLESRDCEHUZJNYFBWKWTZORPDSATOENLESLAMMGRY");

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
    msg.setTimeStamp(0.964603448045);
    msg.setSource(36946U);
    msg.setSourceEntity(166U);
    msg.setDestination(31051U);
    msg.setDestinationEntity(38U);
    msg.seq = 64196U;
    msg.sys.assign("LQQKMNMHDHDIDTNHKKKZGUSLZOKAMPUYOJBPGLNZDRRKCHCQYAUAWVG");
    msg.value = 0.484962489697;

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
    msg.setTimeStamp(0.74668526862);
    msg.setSource(13438U);
    msg.setSourceEntity(20U);
    msg.setDestination(11407U);
    msg.setDestinationEntity(163U);
    msg.seq = 18393U;
    msg.sys.assign("AVYXANODFYDLBMGQJMCH");
    msg.value = 0.118274091935;

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
    msg.setTimeStamp(0.414194979419);
    msg.setSource(38998U);
    msg.setSourceEntity(194U);
    msg.setDestination(27655U);
    msg.setDestinationEntity(200U);
    msg.seq = 31791U;
    msg.sys.assign("ULAJLMXQVGIDUAZVSEOFKHIGSRYSMHUCNHEXHGMYBQNVDUUCGMDPTPGCZBYZJNTSRLYOAWZQQCZTMUDHSOFIXBJFIATCEXOIREFKXPWENHVAHVMIGYCEXOQYXLOGRLXDRZVPPPDAFTWUBDOGSCTTWIXLYFZSWKIPWTPVUFQNBRNSVBMTLRUQQKWGKWCAEELDJZYMFHJQOPNOPHZWKALIOJHKDXAKFV");
    msg.value = 0.667565628529;

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
    msg.setTimeStamp(0.895169445316);
    msg.setSource(1545U);
    msg.setSourceEntity(174U);
    msg.setDestination(6878U);
    msg.setDestinationEntity(173U);
    msg.action = 41U;
    msg.longain = 0.553204876935;
    msg.latgain = 0.569377149923;
    msg.bondthick = 787671494U;
    msg.leadgain = 0.904883361056;
    msg.deconflgain = 0.731254795707;

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
    msg.setTimeStamp(0.465812055856);
    msg.setSource(44406U);
    msg.setSourceEntity(168U);
    msg.setDestination(4848U);
    msg.setDestinationEntity(210U);
    msg.action = 11U;
    msg.longain = 0.071722177042;
    msg.latgain = 0.691556506292;
    msg.bondthick = 1287321079U;
    msg.leadgain = 0.33620725564;
    msg.deconflgain = 0.669735652734;

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
    msg.setTimeStamp(0.380918844651);
    msg.setSource(46642U);
    msg.setSourceEntity(115U);
    msg.setDestination(2517U);
    msg.setDestinationEntity(158U);
    msg.action = 238U;
    msg.longain = 0.932087355036;
    msg.latgain = 0.422371113023;
    msg.bondthick = 3552712749U;
    msg.leadgain = 0.777799730457;
    msg.deconflgain = 0.608940686782;

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
    msg.setTimeStamp(0.940927388519);
    msg.setSource(13067U);
    msg.setSourceEntity(76U);
    msg.setDestination(26421U);
    msg.setDestinationEntity(242U);
    msg.err_mean = 0.557872342464;
    msg.dist_min_abs = 0.526977755412;
    msg.dist_min_mean = 0.309256206776;

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
    msg.setTimeStamp(0.569089110244);
    msg.setSource(14159U);
    msg.setSourceEntity(244U);
    msg.setDestination(59778U);
    msg.setDestinationEntity(83U);
    msg.err_mean = 0.713136413739;
    msg.dist_min_abs = 0.218710464367;
    msg.dist_min_mean = 0.563936384285;

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
    msg.setTimeStamp(0.399077491922);
    msg.setSource(57231U);
    msg.setSourceEntity(233U);
    msg.setDestination(51755U);
    msg.setDestinationEntity(18U);
    msg.err_mean = 0.318268648335;
    msg.dist_min_abs = 0.895700392063;
    msg.dist_min_mean = 0.85729279471;

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
    msg.setTimeStamp(0.119203358806);
    msg.setSource(42991U);
    msg.setSourceEntity(43U);
    msg.setDestination(24939U);
    msg.setDestinationEntity(66U);
    msg.action = 158U;
    msg.lon_gain = 0.233211067642;
    msg.lat_gain = 0.746310231768;
    msg.bond_thick = 0.453427918727;
    msg.lead_gain = 0.470050139042;
    msg.deconfl_gain = 0.896372788438;
    msg.accel_switch_gain = 0.0659436099231;
    msg.safe_dist = 0.888137207726;
    msg.deconflict_offset = 0.68767451919;
    msg.accel_safe_margin = 0.308654802231;
    msg.accel_lim_x = 0.874544088048;

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
    msg.setTimeStamp(0.544721119022);
    msg.setSource(4273U);
    msg.setSourceEntity(13U);
    msg.setDestination(1192U);
    msg.setDestinationEntity(90U);
    msg.action = 77U;
    msg.lon_gain = 0.728738804985;
    msg.lat_gain = 0.956419375249;
    msg.bond_thick = 0.320657786568;
    msg.lead_gain = 0.741441189799;
    msg.deconfl_gain = 0.789689616307;
    msg.accel_switch_gain = 0.939158483895;
    msg.safe_dist = 0.298858947539;
    msg.deconflict_offset = 0.183843518287;
    msg.accel_safe_margin = 0.490432327049;
    msg.accel_lim_x = 0.262994470436;

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
    msg.setTimeStamp(0.414415745767);
    msg.setSource(1601U);
    msg.setSourceEntity(211U);
    msg.setDestination(35638U);
    msg.setDestinationEntity(230U);
    msg.action = 199U;
    msg.lon_gain = 0.338061118195;
    msg.lat_gain = 0.456532937082;
    msg.bond_thick = 0.413553999317;
    msg.lead_gain = 0.424106176173;
    msg.deconfl_gain = 0.253254265774;
    msg.accel_switch_gain = 0.99721930594;
    msg.safe_dist = 0.98349428838;
    msg.deconflict_offset = 0.442546370278;
    msg.accel_safe_margin = 0.315047962;
    msg.accel_lim_x = 0.507711266533;

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
    msg.setTimeStamp(0.978728204801);
    msg.setSource(2891U);
    msg.setSourceEntity(173U);
    msg.setDestination(46240U);
    msg.setDestinationEntity(59U);
    msg.type = 110U;
    msg.op = 220U;
    msg.err_mean = 0.494459281975;
    msg.dist_min_abs = 0.855067753728;
    msg.dist_min_mean = 0.965606578814;
    msg.roll_rate_mean = 0.27147358269;
    msg.time = 0.668663767682;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 7U;
    tmp_msg_0.lon_gain = 0.824396503833;
    tmp_msg_0.lat_gain = 0.672772894524;
    tmp_msg_0.bond_thick = 0.473537858574;
    tmp_msg_0.lead_gain = 0.80664462812;
    tmp_msg_0.deconfl_gain = 0.71571904379;
    tmp_msg_0.accel_switch_gain = 0.0977714231007;
    tmp_msg_0.safe_dist = 0.34939082212;
    tmp_msg_0.deconflict_offset = 0.942653762671;
    tmp_msg_0.accel_safe_margin = 0.816796950447;
    tmp_msg_0.accel_lim_x = 0.172672882425;
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
    msg.setTimeStamp(0.770761681764);
    msg.setSource(63868U);
    msg.setSourceEntity(58U);
    msg.setDestination(7398U);
    msg.setDestinationEntity(142U);
    msg.type = 94U;
    msg.op = 53U;
    msg.err_mean = 0.0630312798513;
    msg.dist_min_abs = 0.634726902578;
    msg.dist_min_mean = 0.063451733852;
    msg.roll_rate_mean = 0.885900040372;
    msg.time = 0.992405293043;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 240U;
    tmp_msg_0.lon_gain = 0.620550502266;
    tmp_msg_0.lat_gain = 0.275758480722;
    tmp_msg_0.bond_thick = 0.749993423818;
    tmp_msg_0.lead_gain = 0.0993522272423;
    tmp_msg_0.deconfl_gain = 0.0390488613464;
    tmp_msg_0.accel_switch_gain = 0.977002475927;
    tmp_msg_0.safe_dist = 0.906076208077;
    tmp_msg_0.deconflict_offset = 0.635564160671;
    tmp_msg_0.accel_safe_margin = 0.206795799075;
    tmp_msg_0.accel_lim_x = 0.686045844229;
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
    msg.setTimeStamp(0.0439794270202);
    msg.setSource(20055U);
    msg.setSourceEntity(23U);
    msg.setDestination(39009U);
    msg.setDestinationEntity(220U);
    msg.type = 205U;
    msg.op = 236U;
    msg.err_mean = 0.498285375005;
    msg.dist_min_abs = 0.596281189277;
    msg.dist_min_mean = 0.255232849957;
    msg.roll_rate_mean = 0.787225101857;
    msg.time = 0.365048660371;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 209U;
    tmp_msg_0.lon_gain = 0.275814747868;
    tmp_msg_0.lat_gain = 0.27618481951;
    tmp_msg_0.bond_thick = 0.605023004004;
    tmp_msg_0.lead_gain = 0.0550801625818;
    tmp_msg_0.deconfl_gain = 0.45775763514;
    tmp_msg_0.accel_switch_gain = 0.0561424630307;
    tmp_msg_0.safe_dist = 0.683519855213;
    tmp_msg_0.deconflict_offset = 0.226795296895;
    tmp_msg_0.accel_safe_margin = 0.649276112731;
    tmp_msg_0.accel_lim_x = 0.886631942946;
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
    msg.setTimeStamp(0.120359741155);
    msg.setSource(2636U);
    msg.setSourceEntity(152U);
    msg.setDestination(45579U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.547812611028;
    msg.lon = 0.374697839564;
    msg.eta = 332647050U;
    msg.duration = 65291U;

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
    msg.setTimeStamp(0.328383957061);
    msg.setSource(41447U);
    msg.setSourceEntity(211U);
    msg.setDestination(18065U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.145394001833;
    msg.lon = 0.181977401689;
    msg.eta = 2826056388U;
    msg.duration = 2780U;

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
    msg.setTimeStamp(0.562495424845);
    msg.setSource(55908U);
    msg.setSourceEntity(28U);
    msg.setDestination(5889U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.251088463631;
    msg.lon = 0.642640665026;
    msg.eta = 4257091057U;
    msg.duration = 23274U;

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
    msg.setTimeStamp(0.238270494936);
    msg.setSource(15827U);
    msg.setSourceEntity(97U);
    msg.setDestination(59821U);
    msg.setDestinationEntity(126U);
    msg.plan_id = 32098U;

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
    msg.setTimeStamp(0.810303044255);
    msg.setSource(37490U);
    msg.setSourceEntity(16U);
    msg.setDestination(47150U);
    msg.setDestinationEntity(69U);
    msg.plan_id = 8468U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.416301649109;
    tmp_msg_0.lon = 0.791035553378;
    tmp_msg_0.eta = 1571626176U;
    tmp_msg_0.duration = 100U;
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
    msg.setTimeStamp(0.487223811049);
    msg.setSource(15966U);
    msg.setSourceEntity(176U);
    msg.setDestination(11172U);
    msg.setDestinationEntity(212U);
    msg.plan_id = 26745U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.378069901406;
    tmp_msg_0.lon = 0.458624967499;
    tmp_msg_0.eta = 1620605925U;
    tmp_msg_0.duration = 14082U;
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
    msg.setTimeStamp(0.934385304101);
    msg.setSource(39941U);
    msg.setSourceEntity(97U);
    msg.setDestination(10314U);
    msg.setDestinationEntity(248U);
    msg.type = 97U;
    msg.command = 164U;
    msg.settings.assign("TQQGYFSJJBTUETHAKBDPRTCTCGRWIOKJRXQRIVVVWURPGNFNTOZLVSBDDUFQPURAUUZLPCOGTSBPNLKHICKSNZVSJJ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 58148U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NBPPHDWLEKKNGMZROPXJACXVYNTOSVCRIAVNHUBWYFTLRQVSYFJQYRCHYUGFDQTTSESWGNALJCKFLFWRYJRTKUGLEMGWMVPNHZWJNLSBJFEIJXMYAQRMATYPWTESSRIPBZIKXOAJSYHHOZFUWHRIOQGNDTAGMCXLMHUOVDQOKSDNOENEUDMIWQUZBZAFVOKAUBPQTLCG");

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
    msg.setTimeStamp(0.45242453437);
    msg.setSource(59060U);
    msg.setSourceEntity(207U);
    msg.setDestination(4751U);
    msg.setDestinationEntity(100U);
    msg.type = 171U;
    msg.command = 76U;
    msg.settings.assign("SVBCUEUIZWYHKEYCDQJYTYIIWNDADFVJXHIOMAXZZEQHIEBSXKGPJSAFMZXLLWHGBVDFLJMAYGCGXSABJQDZHVJVUJOKSTLQIYZVBEPMGHHILORXBTCVUGPKWPCSFYFBMDQASURLXHBNANTCMQQARLKTZUWLKIOFMXYGENMRENNNGWVCQOCDPCDPTLHRSUJUFTVMLANATSTKVJQPIOUNKXOEPEPOOBIROSTYYURRJGFKHNXPBWCZQRKE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 51277U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.552972787728;
    tmp_tmp_msg_0_0.lon = 0.384244873962;
    tmp_tmp_msg_0_0.eta = 2880404212U;
    tmp_tmp_msg_0_0.duration = 61544U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("RLIQRIGJDFZAPXRWRSHYBGRNUWNBPFLQJUPAMASQVAEZLJPCJYNWOGUTZWOXGD");

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
    msg.setTimeStamp(0.659324895475);
    msg.setSource(28962U);
    msg.setSourceEntity(4U);
    msg.setDestination(4782U);
    msg.setDestinationEntity(207U);
    msg.type = 215U;
    msg.command = 63U;
    msg.settings.assign("VJAPYHSQBLHGYSQAERKTZDSRDFXXRQEIKORVICTMIUFFJELBYLQORQTFJJSFFJQBOOJHJSZBAMDNLZGIIXYWXQZUOWSMLAUNODNPTXKGHJPISDJUFHCGBTABUNVKGHIGXDRHKMVWHTPKOHRPIBRYNYWGWLIWPQXWBZTHETANPEJXYPCRBNZUXLKGXEEMEEYINZDMCLMRLM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 43333U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.988142884741;
    tmp_tmp_msg_0_0.lon = 0.464824763681;
    tmp_tmp_msg_0_0.eta = 3435829489U;
    tmp_tmp_msg_0_0.duration = 51179U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CZMRPXNHMMJZSNYEHLSLGLINIWEQOYBHEFCJGRRHPWKAPSTPMCXNCDXFEOKWHZZLNUDSBZUTJTSVWFXZGKOGESBWZBYJPSRFQCWWXHQQHDOVOUSUEPGDKYVIMGISYQNNRZV");

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
    msg.setTimeStamp(0.620337725113);
    msg.setSource(42109U);
    msg.setSourceEntity(25U);
    msg.setDestination(10473U);
    msg.setDestinationEntity(144U);
    msg.state = 122U;
    msg.plan_id = 6840U;
    msg.wpt_id = 217U;
    msg.settings_chk = 42256U;

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
    msg.setTimeStamp(0.750693692005);
    msg.setSource(17754U);
    msg.setSourceEntity(92U);
    msg.setDestination(2766U);
    msg.setDestinationEntity(56U);
    msg.state = 182U;
    msg.plan_id = 1793U;
    msg.wpt_id = 39U;
    msg.settings_chk = 28578U;

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
    msg.setTimeStamp(0.809814024152);
    msg.setSource(14147U);
    msg.setSourceEntity(219U);
    msg.setDestination(41780U);
    msg.setDestinationEntity(147U);
    msg.state = 94U;
    msg.plan_id = 26112U;
    msg.wpt_id = 225U;
    msg.settings_chk = 61448U;

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
    msg.setTimeStamp(0.0798288359358);
    msg.setSource(57165U);
    msg.setSourceEntity(128U);
    msg.setDestination(62822U);
    msg.setDestinationEntity(28U);
    msg.uid = 112U;
    msg.frag_number = 150U;
    msg.num_frags = 26U;
    const char tmp_msg_0[] = {-86, -126, 68, 13, 3, -124, 88, 39, -88, -80, 65, -123, 62, 22, -86, -60, -58, 2, 83, 9, 12, 88, -100, 94, -121, -3, 90, -82, -46, 79, 116, -92, 85, -57, -30, -93, -41, 63, 91, -84, -74, -28, -110, 47, -71, 55, 62, -99, -30, -35, 47, 75, 28, -45, -85, -110, 84, -47, 29, -66, -109, 44, 91, 103, -29, -3, -68, 82, -33, -40, 29, -124, 65, 10, -81, -22, -77, 39, 117, 37, -114, 12, 47, 22, 80, -89, -42, 94, 118, -106, 56, -124, 40, 35, 107, 83, 79, 11, 16, -4, 17, 52, -29, 10, -128, -86, 60, -88, -98, 34, -77, -115, -77, 44, -122, 29, -74, -84, 93, 80, -73, -69, 69, 112};
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
    msg.setTimeStamp(0.426228118215);
    msg.setSource(59107U);
    msg.setSourceEntity(30U);
    msg.setDestination(37134U);
    msg.setDestinationEntity(161U);
    msg.uid = 100U;
    msg.frag_number = 123U;
    msg.num_frags = 172U;
    const char tmp_msg_0[] = {-56, -43, 59, 47, 76, -7, 12, -101, 22, -75, 41, 14, -68, 66, -75, 123, -61, 100, -74, -7, -98, -92, -26, 97, -20, -71, -117, -87, 121, 34, 111, -94, 54, -88, 42, -110, -39, 82, -66, 92, -51, -120, 7, 17, 11, 67, -116, -54, -60, -80, -17, 122, 1, -31, -9, -112, -43, -72, 67, -94, 71, 20, -47, -101, -15, 70, 124, 100, 22, 25, 8, -99, -84, 67, -20, 122, 47, 108, 90, -51, 77, -79, 81, -103, 77, -120, 90, -54, 115, 29, -39, -13, 75, -124, 62, -115, 115, 58, 102, -19, 75, 6, 115, 33, -72, 66, 72, 90, 15, 100, -13, 71, 34, -105, 122, -20, -30, 101, -94};
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
    msg.setTimeStamp(0.344274550922);
    msg.setSource(48450U);
    msg.setSourceEntity(211U);
    msg.setDestination(24872U);
    msg.setDestinationEntity(76U);
    msg.uid = 3U;
    msg.frag_number = 159U;
    msg.num_frags = 69U;
    const char tmp_msg_0[] = {-68, -11, -88, 89, -31, -37, 90, 50, 88, -119, 18, 33, -17, 50, 123, 100, 4, -58, 122, 55, -113, 124, -118, -2, 31, 38, 122, 31, -10, -28, 65, -59, -62, -51, 116, -27, -7, -39, -112, 32, 58, 82, 15, 77, 39, 81, 103, 85, 62, 58, 8, 15, -39, 51, 104, 68, 20, -13, 20, -75, -48, 101, -93, -39, 54, 84, 44, -6, -43, 90, -26, 13, 125, -79, 76, -63, -86, 86, 93, 11, -100, -73, -51, 9, 99, 125, -39, -14, -79, -126, 99, -115, -44, 30, -12, 38, 110, 34, -56, -73, 89, 61, -83, 15, -28, 38, 67, -51, 82, -31, 14, -53, -44, 21, 41, -97, -6, -20, 20, 103, -93, 94, 117, 53, -121, 84, 9, -101, 79, -111, 113, 26, 30, -117, 22, -59, 94, -3, 36, -15, 44, -54, 108, -13, 62, 31, -68, 34, -18, -104, -20, -71, 96, 79, -98, -104, -108, -116, -17, 27, 52, 51, 110, -44, -119, -58, -30, 61, 75, 92, 25, -92, 105, -51, 52, -62, 104, -34, 96, -35, -122, 71, 56, -59, 119, 75, -102, -57, -28, -18, 94, 107, -123, -44, -72, 96, 25, -101, 70, 80, 82, -111, 14};
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
    msg.setTimeStamp(0.943650434456);
    msg.setSource(60298U);
    msg.setSourceEntity(151U);
    msg.setDestination(65196U);
    msg.setDestinationEntity(8U);
    msg.content_type.assign("ZUGDKLGLFCJFQGXUQSSKLBNMQXSQBXCEFPMJOZYZRPTNAXEQWDNCDAJAFYSITLNWKHLZOHMOIDIRUQVYXEMUKHAYLUMUSGXFGRBPCKIAYAIFPVKHNITONEWRYD");
    const char tmp_msg_0[] = {8, -21, 67, 55, 80, -88, 8, 2, 113, -12, 97, 88, -116, 83, -36, 95, 104, 56, 10, 39, 70, 28, 65, 125, 2, 0, -100, 9, -1, 60, 6, -76, -127, 35, 92, 46, 111, 95, 74, -54, 33, -117, 103, 54, -8, -106, -65, -6, -124, -18, 67, -119, -92, -110, 89, 27, -17, -65, -46, 111, -100, 71, -46, -31, 64, -74, -34, 125, 55, -68, 88, 94, -125, 36, 77, -83, 29, -116, -123, -124, 15, 0, 116, -88, 121, 66, -94, 15, -127, -82, -17, -17, -3, 50, -96, -79, -51, 102, -106, -110, -1, 52, -53, 20, 0, -123, 66, -47, -69, -49, -32, 76, 111};
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
    msg.setTimeStamp(0.959675570343);
    msg.setSource(1573U);
    msg.setSourceEntity(227U);
    msg.setDestination(3281U);
    msg.setDestinationEntity(213U);
    msg.content_type.assign("TCIULXVDHOWOOESYYKELMUUYHLHALGTBQRPXTUKXQNSQKRCEYFRCZVNFLATBNCSRQJZUDPHDVVZYPLUJISZIPUNDGQDUMTHQSHGNJITPANZFCEAJAPFJGCAGSEMQKDAWPPSMBCRIZHBWOTWHDSTMUPJEGACXWVLLNXDREYKFBQRKYMQLIKYRWBMNEZTXOXEJIXCOBGWLXMPJH");
    const char tmp_msg_0[] = {98, -26, -64, -13, -48, -119, 47, 41, -62, -115, 44, -92, 73, 65, -6, 56, -120, -34, 2, 28, 69, -29, -34, -8, -25, 7, -73, 21, 86, -9, 107, -37, -65, -30, -33, -105, 10, 110, 55, 115, 81, 47, 33, -44, 120, 70, -70, 15, -64, -28, 7, -63, -62, 99, 96, 73, 9, -96, -118, 124, -30, 11, 51, 84, -115, -116, -78, -24, 19, 71, 29, -97, 7, 33, -84, 92, 24, -68, 99, -114, -65, -53, -103, -57, -20, 30, 49, 43, -40, 64, -52, 13, -20, -81, 48, -106, 60, -76, -27, 63, 41, -20, -46, -82, -14, 70, 8, 111, 14, 115, 78, -10, 67, 81, -119, 44, 65, 50, 60, -42, -30, 124, 14, -118, -57, 123, -69, 31, 3, 21, 65, 115, -89, 16, -126, -27, 119, 47, -31, -80, -9, 109, -64, -113, 79, 32, 41, -105, -117, -118, -44, -99, -112, 6, -54, -94, -7, 4, 51, 124, -61, -69, 88, -9, 59, -106, 72, -77, 77, 83, -112, 70, 95, 113, 73, -88, 31, 15, -110, -68, -77, 55, -50, 40, -14, 87, -102, 98, -49, 74, 17, -61, -7, -21, 42, -121, 109, -109, -102, 50, 69, -71, -4, -116, -26, 85, -126, 21, -86, -93, 92, 113, 62, 112, 87, 68, 107, -53, -60, -50, -25, 115, -124, -75, 79, -64, -9, -98, -77, -10, 33, 118, -96, 79, 35, 29, -91, 31, 28, -75, 5, -35};
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
    msg.setTimeStamp(0.390515282172);
    msg.setSource(58277U);
    msg.setSourceEntity(11U);
    msg.setDestination(51195U);
    msg.setDestinationEntity(198U);
    msg.content_type.assign("XGAIKKZCVPEQSPZRDVJSYDRJTNBWCGTVJKFIBFOZKYWIMQSXJADBMGZCSSRUJSQLNGSFKYWJIHXOHPYAXMRTQWPAKETZUAMCOHRFYXUWOLBXRRYZOCHGHSLLRHJXIEBDZEQPJNW");
    const char tmp_msg_0[] = {-34, 24, -127, 125, -93, 78, -7, -59, -116, -68, 94, 79, 46, 94, -79, -58, -7, 99, -99, -100, 14, 100, -72, -33, 63, -70, 56, 79, -95, 29, -23, -32, 90, -4, -83, 104, 82, 16, -86, -76, 25, -44, -74, -112, -27, -22, -110, 56, -23, 59, -24, -27, 102, 11, -110, -46, 77, -95, -54, -70, -12, 17, 94, -77, -36, -128, 101, 54, -23, -116, 119, 29, -86, 52, -14, 49};
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
    msg.setTimeStamp(0.893466546064);
    msg.setSource(28476U);
    msg.setSourceEntity(20U);
    msg.setDestination(29106U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.140666938773);
    msg.setSource(41066U);
    msg.setSourceEntity(23U);
    msg.setDestination(4640U);
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
    msg.setTimeStamp(0.608476741999);
    msg.setSource(1306U);
    msg.setSourceEntity(77U);
    msg.setDestination(43112U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.262372392372);
    msg.setSource(3638U);
    msg.setSourceEntity(43U);
    msg.setDestination(13975U);
    msg.setDestinationEntity(132U);
    msg.target = 37683U;
    msg.bearing = 0.631188088219;
    msg.elevation = 0.973629762561;

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
    msg.setTimeStamp(0.155870132834);
    msg.setSource(55896U);
    msg.setSourceEntity(228U);
    msg.setDestination(50124U);
    msg.setDestinationEntity(165U);
    msg.target = 57891U;
    msg.bearing = 0.888978096076;
    msg.elevation = 0.653147490152;

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
    msg.setTimeStamp(0.240683464175);
    msg.setSource(55385U);
    msg.setSourceEntity(136U);
    msg.setDestination(2802U);
    msg.setDestinationEntity(193U);
    msg.target = 53044U;
    msg.bearing = 0.67904746387;
    msg.elevation = 0.885076300268;

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
    msg.setTimeStamp(0.141604228042);
    msg.setSource(22758U);
    msg.setSourceEntity(161U);
    msg.setDestination(59109U);
    msg.setDestinationEntity(98U);
    msg.target = 60268U;
    msg.x = 0.845552468152;
    msg.y = 0.248980475606;
    msg.z = 0.714133874877;

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
    msg.setTimeStamp(0.403663995769);
    msg.setSource(12319U);
    msg.setSourceEntity(76U);
    msg.setDestination(45142U);
    msg.setDestinationEntity(34U);
    msg.target = 15057U;
    msg.x = 0.129887370104;
    msg.y = 0.0696749825066;
    msg.z = 0.097622291029;

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
    msg.setTimeStamp(0.0657693424976);
    msg.setSource(62032U);
    msg.setSourceEntity(83U);
    msg.setDestination(3285U);
    msg.setDestinationEntity(184U);
    msg.target = 32189U;
    msg.x = 0.830756331939;
    msg.y = 0.985791690383;
    msg.z = 0.14686085386;

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
    msg.setTimeStamp(0.3890520471);
    msg.setSource(51144U);
    msg.setSourceEntity(235U);
    msg.setDestination(26512U);
    msg.setDestinationEntity(96U);
    msg.target = 62045U;
    msg.lat = 0.323700189739;
    msg.lon = 0.866276999195;
    msg.z_units = 122U;
    msg.z = 0.963259471319;

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
    msg.setTimeStamp(0.463531867876);
    msg.setSource(16697U);
    msg.setSourceEntity(227U);
    msg.setDestination(36140U);
    msg.setDestinationEntity(26U);
    msg.target = 38808U;
    msg.lat = 0.78718166851;
    msg.lon = 0.669663734244;
    msg.z_units = 253U;
    msg.z = 0.304988809356;

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
    msg.setTimeStamp(0.0290832929726);
    msg.setSource(39368U);
    msg.setSourceEntity(176U);
    msg.setDestination(43261U);
    msg.setDestinationEntity(184U);
    msg.target = 42694U;
    msg.lat = 0.891341840461;
    msg.lon = 0.0195805543011;
    msg.z_units = 204U;
    msg.z = 0.310292767178;

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
    msg.setTimeStamp(0.853282190907);
    msg.setSource(50472U);
    msg.setSourceEntity(226U);
    msg.setDestination(40788U);
    msg.setDestinationEntity(167U);
    msg.locale.assign("YMZBGOOMWLEFPPJQHJOFDDXUSEPZBOHHYLDNWIOCXBGKKKRAACVISNBOTNNNPJFMUKZHNJFRVMVGSAAWZMVZJHEGWFIXLJJQAFUVKBOJNTTIBHXQZQQUMCNYFIYIVZXIUTGPEEDWQXXRHGVSGTBQJECHATEYPZMCUXCEFKMYUWFTDPDBPVRRYRZHUKGDWKXTILORYTTDW");
    const char tmp_msg_0[] = {-14, 114, 46, -56, 69, -35, -74, -56, 40, 118, 6, -101, 42, 72, -55, -46, 126, -5, 55, -60, -20, 27, -71, 55, 62, 122, -120, -58, -104, 98, 8, -83, -41, -27, 83, 10, 25};
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
    msg.setTimeStamp(0.240090256239);
    msg.setSource(6971U);
    msg.setSourceEntity(7U);
    msg.setDestination(25688U);
    msg.setDestinationEntity(60U);
    msg.locale.assign("QJJGHWZMPAJRLYQEUFBCNYASOTPFEOWYCVKUCWPVEHBCLBFUPHTBANFYOLNOEQAHKKMJIRGXORZUGDTOJYSENEDSQHOWWZZUIJUGMXEUXGTOZQXRKWFBFZDBKCQTHYXNNYYHPDKIZCSRPCSUVNCBNTSFPLWNGVMHQDBGFMKQVTV");
    const char tmp_msg_0[] = {31, 98, 0, 0, -80, -72, 119, -80, 24, -48, 119, 86, 28, -36, 39, -115, -12, 34, 50, -102, 100, -106, -11, -128, -85, -38, 116, -21, -98, -112, 92, -33, 42, 27, -23, 80, -105, -58, 124, 19, -39, 60, -58, 112, -2, -32, -45, 35, 58, -87, -127, -81, -52, 14, -123, 34, -47, 49, -65, 9, -35, 47, 98, -88, -48, 69, 66, 80, 94, -66, 40, -110, -122, 29, 8, 117, 85, -17, 53, 82, 72, -109, 69, -46, 50, 81, -79, -119, 117, 34, -120, -80, 87, -104, 2, -14, 40, -113, -63, -14, -88, 124, 93, -107, 73, -20, -61, -116, 99, 82, 20, -112, 17, 46, 6, 26, -126, 65, -41, -2, -30, -13, 71, 58, 35, -81, 113, -29, 61, 1, 22, -115, -44, 125, 39, -119, 108, -21, 37, 65, -109, 62, -72, 67, -124, 67, 13, -128, -26, -18, -29, -59, 98, 21, 0, 67, 89, -3, 83, 32, 9, 103, 21, -45, -9, 104, -99, 34, 2, 118, -59, 7, 90, 23, 47, 42, -79, -64, 113, 61, -85, 15, -116, -51, 104, -60, -104, -69, -14, 53, 92, 89, -67, 40, -91, -118, -20, -58, -117, 107, -114, -76, -33, 49, 16, -117, -23, -6, 97, -127, 3, 27, -13, -94, -38, 62, -36, -92, 44, 111, -78, -31, 120, 2, -104, 109, 11, 7, 73, -92, -32, 17, 7, 43, 82, 67, -125, 120, -121, -106};
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
    msg.setTimeStamp(0.506681408833);
    msg.setSource(17677U);
    msg.setSourceEntity(155U);
    msg.setDestination(3982U);
    msg.setDestinationEntity(152U);
    msg.locale.assign("MOQBVGEELPYTVGHZGPXAMTJLYAOUYSEYGNOIYHBXZCBQMSIDNFYUJHSFRKIXX");
    const char tmp_msg_0[] = {55, 50, 71, -22, -90, -56, -25, 48, -54, -45, 120, -115, 103, 96, -84, -80, -84, 112, 100, 103, -107, -21, -33, 34, 106, 101, -14, 86, -2, 20, 98, 120, 112, 41, 80, -93, -50, 32, -88, 11};
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
    msg.setTimeStamp(0.550861608984);
    msg.setSource(43174U);
    msg.setSourceEntity(135U);
    msg.setDestination(26072U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.15431783704);
    msg.setSource(39112U);
    msg.setSourceEntity(62U);
    msg.setDestination(21779U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.74434022998);
    msg.setSource(27537U);
    msg.setSourceEntity(154U);
    msg.setDestination(15319U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.0412812214161);
    msg.setSource(4659U);
    msg.setSourceEntity(91U);
    msg.setDestination(36589U);
    msg.setDestinationEntity(66U);
    msg.camid = 215U;
    msg.x = 57095U;
    msg.y = 62809U;

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
    msg.setTimeStamp(0.245387021092);
    msg.setSource(19758U);
    msg.setSourceEntity(143U);
    msg.setDestination(42762U);
    msg.setDestinationEntity(228U);
    msg.camid = 17U;
    msg.x = 13805U;
    msg.y = 61115U;

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
    msg.setTimeStamp(0.15534202825);
    msg.setSource(14818U);
    msg.setSourceEntity(84U);
    msg.setDestination(64775U);
    msg.setDestinationEntity(176U);
    msg.camid = 250U;
    msg.x = 13669U;
    msg.y = 18848U;

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
    msg.setTimeStamp(0.692113781928);
    msg.setSource(11185U);
    msg.setSourceEntity(247U);
    msg.setDestination(18840U);
    msg.setDestinationEntity(230U);
    msg.camid = 106U;
    msg.x = 60557U;
    msg.y = 41626U;

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
    msg.setTimeStamp(0.276884999152);
    msg.setSource(40683U);
    msg.setSourceEntity(184U);
    msg.setDestination(17641U);
    msg.setDestinationEntity(1U);
    msg.camid = 181U;
    msg.x = 34915U;
    msg.y = 10207U;

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
    msg.setTimeStamp(0.578628443943);
    msg.setSource(17848U);
    msg.setSourceEntity(174U);
    msg.setDestination(36812U);
    msg.setDestinationEntity(38U);
    msg.camid = 246U;
    msg.x = 17786U;
    msg.y = 29241U;

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
    msg.setTimeStamp(0.136955969667);
    msg.setSource(62319U);
    msg.setSourceEntity(149U);
    msg.setDestination(24899U);
    msg.setDestinationEntity(176U);
    msg.tracking = 133U;
    msg.lat = 0.175328086712;
    msg.lon = 0.176437067221;
    msg.x = 0.285457433049;
    msg.y = 0.937267541423;
    msg.z = 0.0501995677918;

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
    msg.setTimeStamp(0.371661750718);
    msg.setSource(45335U);
    msg.setSourceEntity(193U);
    msg.setDestination(61469U);
    msg.setDestinationEntity(8U);
    msg.tracking = 190U;
    msg.lat = 0.771466375146;
    msg.lon = 0.206558083309;
    msg.x = 0.844903864095;
    msg.y = 0.338334399835;
    msg.z = 0.222451114056;

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
    msg.setTimeStamp(0.33595008044);
    msg.setSource(178U);
    msg.setSourceEntity(166U);
    msg.setDestination(25134U);
    msg.setDestinationEntity(69U);
    msg.tracking = 57U;
    msg.lat = 0.907287091136;
    msg.lon = 0.525228083476;
    msg.x = 0.898903401427;
    msg.y = 0.0146554425723;
    msg.z = 0.459510126986;

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
    msg.setTimeStamp(0.601718876904);
    msg.setSource(10427U);
    msg.setSourceEntity(102U);
    msg.setDestination(62117U);
    msg.setDestinationEntity(120U);
    msg.target.assign("KZXIKHEYNMBIOIZXBSAWRQKICAUWZUMXJVHEAJKXMBFFOTCXGLTYLEUFUPTCBNLACWGBWHSUTBMDHJFVPYSLOYHBVPNQQGECYKKIQADGTHWYENVKNNDFWGKMYSCOFSROOAWRNRHHBOPVXNVKFLVPGTRVRFDYUDNEEJAEUMLMEYCXAWLIIJPJNQQDZQKLRWMDXZFYUXUZTGGUSCPSJAZRQWFGIODTTLHQRITSOILPSCZMJCDZ");
    msg.lbearing = 0.0434455544305;
    msg.lelevation = 0.203553444909;
    msg.bearing = 0.846181496474;
    msg.elevation = 0.831982577238;
    msg.phi = 0.176281672736;
    msg.theta = 0.30237304112;
    msg.psi = 0.947716123005;
    msg.accuracy = 0.584075894222;

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
    msg.setTimeStamp(0.224179298155);
    msg.setSource(19676U);
    msg.setSourceEntity(163U);
    msg.setDestination(52325U);
    msg.setDestinationEntity(113U);
    msg.target.assign("EWFQMDPOQSIJTMBZJOIJZJNOZHKFNMATBMYXLCSGUCYJNGNSJXGXKCRLBBWAUZARDCYUPDKDRHXIWGLIBYFPDQWBUSCUWWOENDHLTKBCEHMRNVQYPYKTJKQEZYHFAWTGXRKMGWXYLRINDZQFEZAPXGFMBOAQANKVJLQHQQPTHRGPWYOSOAFRASCMRMTVKEIVNEVHSSOKCIDSGUPDXGC");
    msg.lbearing = 0.372347277281;
    msg.lelevation = 0.653293880202;
    msg.bearing = 0.817680116238;
    msg.elevation = 0.627141022897;
    msg.phi = 0.878369203549;
    msg.theta = 0.497437323581;
    msg.psi = 0.591337240954;
    msg.accuracy = 0.813619926457;

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
    msg.setTimeStamp(0.623811528707);
    msg.setSource(45823U);
    msg.setSourceEntity(248U);
    msg.setDestination(63433U);
    msg.setDestinationEntity(130U);
    msg.target.assign("YBROUFWTLMKBFLGHYVIEKQOCMKXMAZBXVAUVCWDGXZHKZ");
    msg.lbearing = 0.0306327076068;
    msg.lelevation = 0.94318239605;
    msg.bearing = 0.626466520695;
    msg.elevation = 0.484563231241;
    msg.phi = 0.517843153954;
    msg.theta = 0.809214627565;
    msg.psi = 0.746933134525;
    msg.accuracy = 0.282375529975;

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
    msg.setTimeStamp(0.357797720279);
    msg.setSource(20519U);
    msg.setSourceEntity(90U);
    msg.setDestination(57796U);
    msg.setDestinationEntity(49U);
    msg.target.assign("VVEXZYIKYWKINRRTNDMFJAQCUHJMOPSETIQGPKGZYRTRHUBGFVBJLSAIBLBLGEYAFGCZLHCIIFJXCARSXUNSBOXXKPTCTGASWVZBNQEZTMDYJIZHPDJPRRNEWRKRPFACMBHZDCGCJFXOAUXWAVBHOVQKGOEASXPHSONYZLMXEILQLPUDLKCUWNSLWCETEOUHMIGTKDMPVJSSEQDVR");
    msg.x = 0.151835682676;
    msg.y = 0.913058396652;
    msg.z = 0.147628400351;
    msg.n = 0.239093383121;
    msg.e = 0.890534841319;
    msg.d = 0.860317862195;
    msg.phi = 0.852228523694;
    msg.theta = 0.457965472151;
    msg.psi = 0.173511250575;
    msg.accuracy = 0.873642017556;

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
    msg.setTimeStamp(0.390874834627);
    msg.setSource(15849U);
    msg.setSourceEntity(44U);
    msg.setDestination(7808U);
    msg.setDestinationEntity(226U);
    msg.target.assign("FNJKVFWFRSKPIKBDAAOMYLHAMUNTCWQWSQAVBXLVBEXNDCKFIDDWVWXUUDARTVCAVLQEVPGYBPIBR");
    msg.x = 0.61095644812;
    msg.y = 0.146096004718;
    msg.z = 0.774166224685;
    msg.n = 0.489898785305;
    msg.e = 0.731265991085;
    msg.d = 0.348768253423;
    msg.phi = 0.92546480631;
    msg.theta = 0.187165175832;
    msg.psi = 0.800297711001;
    msg.accuracy = 0.692778057429;

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
    msg.setTimeStamp(0.53701057778);
    msg.setSource(51541U);
    msg.setSourceEntity(235U);
    msg.setDestination(50052U);
    msg.setDestinationEntity(118U);
    msg.target.assign("THLOGNBKXIPWIEAUHCCBEYMRXAUKWSPDFKMWKXJKYHGULURRZZQVSNGGPTNJJYEYGGEZDXVQKNICJPEMALWRZFEJYADWWMNYTDJKSDJQFHFEXPTIHQORRCHSORUMCOPPTZKCPFXWPZOGIAFOIIVOVBUHBGQMSYBMYJSOTLAA");
    msg.x = 0.634664026643;
    msg.y = 0.667852422617;
    msg.z = 0.488234589024;
    msg.n = 0.328766019684;
    msg.e = 0.0123508900599;
    msg.d = 0.15199132658;
    msg.phi = 0.140878212395;
    msg.theta = 0.829775618106;
    msg.psi = 0.271944189571;
    msg.accuracy = 0.2651861689;

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
    msg.setTimeStamp(0.378442040067);
    msg.setSource(63423U);
    msg.setSourceEntity(9U);
    msg.setDestination(15541U);
    msg.setDestinationEntity(206U);
    msg.target.assign("LHQQBNQWYSMOZWFBREMXNPYLXXLXQKBKPBEVGATYPCUBFNOMVAZSTFRUJMHHMXVRFZNQKFXLDRIOMVCEDWMJQNEITWYUEU");
    msg.lat = 0.351881950279;
    msg.lon = 0.746316317931;
    msg.z_units = 75U;
    msg.z = 0.281566099616;
    msg.accuracy = 0.00121196423528;

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
    msg.setTimeStamp(0.186500104069);
    msg.setSource(50862U);
    msg.setSourceEntity(13U);
    msg.setDestination(40213U);
    msg.setDestinationEntity(64U);
    msg.target.assign("MSHMCKBWHRMNIGVAVOHKKHIMQOOVSXNHFKJNDEQJYCHPUBJJWFSIUWMPPHSCOXFAESCQXEYAOLDXOTVXIJWPEKGGNKVUMCDAYBPLLNPZCYUPUNYYDTWLALARNNHVYQIZWPOTIGTKTBSHVSDXZESLUDJRBUWIFXGERQVPJCCIIKREBOTGFMLUTMOAFQUWEJCBNGFAZFZBDGBZSYTZLYQDZCAGOHRWXWYK");
    msg.lat = 0.486913102179;
    msg.lon = 0.856430490622;
    msg.z_units = 117U;
    msg.z = 0.292940948779;
    msg.accuracy = 0.431088967845;

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
    msg.setTimeStamp(0.125368600223);
    msg.setSource(35423U);
    msg.setSourceEntity(237U);
    msg.setDestination(38256U);
    msg.setDestinationEntity(193U);
    msg.target.assign("MQUBJZYFOYWWZOGXEDOHTUMLFECKXEACYVTCGNEMGMAHSNHVPBREDPTZHEJJTFKBCZHFMWXMZETRPLYVUDKMLDXQKYEXDOASJJIKCJIORBYWJULLWSIIGBIHVGLYPAXXQQUPUGKSGCUVWRQQQQBNJVOCWARHLUTKLLCXTADFPPCZSNAFRVEHFFTRNDBISLEVFIMVNKWDDNHBWMHSFQSZPZOSBUDSOXVPZYOAZKGTW");
    msg.lat = 0.994384039662;
    msg.lon = 0.464554672208;
    msg.z_units = 33U;
    msg.z = 0.550080886371;
    msg.accuracy = 0.579334583153;

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
    msg.setTimeStamp(0.194427023055);
    msg.setSource(23991U);
    msg.setSourceEntity(26U);
    msg.setDestination(23533U);
    msg.setDestinationEntity(93U);
    msg.name.assign("LUKNBTBHCLIUMYOGMMTCDMSTPMDKUKSLRIAOYPNVEBBFNVRTPEKTQFQRTAVIVSNWNCBBXYEXAMCEGMIDVQAJLILRNYMZYVCGFKNOSDHWZGOHJQKQVNDFXREBEOAUGHHFJPLOPFCUZGTZXEAYBZDPZOATYHKFSSYXNFOVBVWIGRLWQISJKJIPXAORSZHXQJBCQNSSX");
    msg.lat = 0.45204678637;
    msg.lon = 0.670073424137;
    msg.z = 0.35629206518;
    msg.z_units = 167U;

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
    msg.setTimeStamp(0.504137597796);
    msg.setSource(12150U);
    msg.setSourceEntity(38U);
    msg.setDestination(49070U);
    msg.setDestinationEntity(140U);
    msg.name.assign("EPMMFOPPQQVIKVCPWQKFYLHKUPTGDHXJSVVTOHESYUUAMMOMIDSQOMDVIJXDJAJGBVKEYGBQLUNSSAWCEOMDAKRHLCPPNSCEOLYWTKPTWXCCBJLVCIFDZKNWNIRHXGIRVDRXGAUYHZFVYUQBDQLIAXGJYUZUXDC");
    msg.lat = 0.860944977641;
    msg.lon = 0.312471205769;
    msg.z = 0.668177727225;
    msg.z_units = 29U;

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
    msg.setTimeStamp(0.176209710079);
    msg.setSource(50333U);
    msg.setSourceEntity(39U);
    msg.setDestination(12498U);
    msg.setDestinationEntity(179U);
    msg.name.assign("HMQJNNCPKWLARMRANVTDDCYCQMHZAHHWYBZOTOOJUORGIKDTAEKCNRQTIAFTYSBPYJPXBWRTMESJSQXEGOLCGDNAEVMWDVHMBJBJTFHCJHIFIZUWMJEPDLMWCJZVNDWZRUYSLZBUGPRLPPMYIFKTISYQJNBXRYXBZVRPNYCUXUXZAOVVYWXHLUGQREXTDZLLFSHGONPHDQFETBKKUVOVESIAXLOSVUXFKFOUKDISWSEGPCZQKAQMNLQKGBFWGC");
    msg.lat = 0.772553587882;
    msg.lon = 0.278042632264;
    msg.z = 0.453013174333;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.893281013188);
    msg.setSource(37443U);
    msg.setSourceEntity(58U);
    msg.setDestination(16839U);
    msg.setDestinationEntity(254U);
    msg.op = 155U;

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
    msg.setTimeStamp(0.506945088881);
    msg.setSource(3366U);
    msg.setSourceEntity(15U);
    msg.setDestination(14478U);
    msg.setDestinationEntity(2U);
    msg.op = 240U;

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
    msg.setTimeStamp(0.172227519958);
    msg.setSource(61958U);
    msg.setSourceEntity(168U);
    msg.setDestination(50012U);
    msg.setDestinationEntity(105U);
    msg.op = 19U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("YSBRPQZSSBZKOOVHNNZPNQDISXXUNAPKIWDPEZMRMDJHXYIBHIDEHGXSEGQOPMGVSHXMJTTEJPHJRVMCVFDUOHVASQPPAAEQRNYKAOWOGLKZDZIWXDUBTORGKJLVBKLXFYWAGCDAGBRYQCTQZYFXVUBSUQ");
    tmp_msg_0.lat = 0.0711861652295;
    tmp_msg_0.lon = 0.35847530911;
    tmp_msg_0.z = 0.32561720136;
    tmp_msg_0.z_units = 36U;
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
    msg.setTimeStamp(0.40285585868);
    msg.setSource(4426U);
    msg.setSourceEntity(41U);
    msg.setDestination(25569U);
    msg.setDestinationEntity(37U);
    msg.value = 0.91629156265;
    msg.type = 159U;

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
    msg.setTimeStamp(0.64284646309);
    msg.setSource(64971U);
    msg.setSourceEntity(163U);
    msg.setDestination(45385U);
    msg.setDestinationEntity(136U);
    msg.value = 0.836222810906;
    msg.type = 196U;

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
    msg.setTimeStamp(0.661615522049);
    msg.setSource(37753U);
    msg.setSourceEntity(3U);
    msg.setDestination(23772U);
    msg.setDestinationEntity(241U);
    msg.value = 0.848558330659;
    msg.type = 120U;

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
    msg.setTimeStamp(0.53199701392);
    msg.setSource(16262U);
    msg.setSourceEntity(85U);
    msg.setDestination(6787U);
    msg.setDestinationEntity(95U);
    msg.value = 0.228333423697;

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
    msg.setTimeStamp(0.395858884284);
    msg.setSource(46126U);
    msg.setSourceEntity(243U);
    msg.setDestination(46757U);
    msg.setDestinationEntity(246U);
    msg.value = 0.149752086481;

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
    msg.setTimeStamp(0.397529201196);
    msg.setSource(8054U);
    msg.setSourceEntity(225U);
    msg.setDestination(47195U);
    msg.setDestinationEntity(13U);
    msg.value = 0.769741677486;

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
    msg.setTimeStamp(0.886102183115);
    msg.setSource(60404U);
    msg.setSourceEntity(131U);
    msg.setDestination(867U);
    msg.setDestinationEntity(26U);
    msg.timestamp_last_service = 0.0818977733314;
    msg.time_next_service = 0.0105036497173;
    msg.time_motor_next_service = 0.662420130634;
    msg.time_idle_ground = 0.609283209102;
    msg.time_idle_air = 0.204622851509;
    msg.time_idle_water = 0.452205875825;
    msg.time_idle_underwater = 0.520786874966;
    msg.time_idle_unknown = 0.0239125632332;
    msg.time_motor_ground = 0.397978007357;
    msg.time_motor_air = 0.0561118393312;
    msg.time_motor_water = 0.0802439273318;
    msg.time_motor_underwater = 0.0193993288032;
    msg.time_motor_unknown = 0.857751708176;
    msg.rpm_min = -28963;
    msg.rpm_max = -15495;
    msg.depth_max = 0.659334133409;

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
    msg.setTimeStamp(0.257265090061);
    msg.setSource(21013U);
    msg.setSourceEntity(165U);
    msg.setDestination(13372U);
    msg.setDestinationEntity(114U);
    msg.timestamp_last_service = 0.911008138733;
    msg.time_next_service = 0.0640805169042;
    msg.time_motor_next_service = 0.730645121138;
    msg.time_idle_ground = 0.565035727134;
    msg.time_idle_air = 0.804623833425;
    msg.time_idle_water = 0.772726544288;
    msg.time_idle_underwater = 0.521637307091;
    msg.time_idle_unknown = 0.783903605742;
    msg.time_motor_ground = 0.164864009837;
    msg.time_motor_air = 0.0842141721224;
    msg.time_motor_water = 0.487299261991;
    msg.time_motor_underwater = 0.64577177955;
    msg.time_motor_unknown = 0.515001992111;
    msg.rpm_min = -10220;
    msg.rpm_max = 9569;
    msg.depth_max = 0.801997878902;

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
    msg.setTimeStamp(0.619275965345);
    msg.setSource(50955U);
    msg.setSourceEntity(186U);
    msg.setDestination(43404U);
    msg.setDestinationEntity(221U);
    msg.timestamp_last_service = 0.752905733145;
    msg.time_next_service = 0.476937575176;
    msg.time_motor_next_service = 0.497364890307;
    msg.time_idle_ground = 0.621624290153;
    msg.time_idle_air = 0.31152585768;
    msg.time_idle_water = 0.650077863047;
    msg.time_idle_underwater = 0.140997602209;
    msg.time_idle_unknown = 0.233293688318;
    msg.time_motor_ground = 0.760144645307;
    msg.time_motor_air = 0.365713741901;
    msg.time_motor_water = 0.82632650404;
    msg.time_motor_underwater = 0.734866529349;
    msg.time_motor_unknown = 0.0503202941935;
    msg.rpm_min = -3199;
    msg.rpm_max = 30195;
    msg.depth_max = 0.677500218058;

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
    msg.setTimeStamp(0.91874566806);
    msg.setSource(41760U);
    msg.setSourceEntity(102U);
    msg.setDestination(24475U);
    msg.setDestinationEntity(74U);
    msg.severity = 38U;
    msg.text.assign("RHDIVQVOBXBUSDHPUQJNZGOVMEILKZQHKXXZYBYCWUMACURPQNQEIDRTJFVOAHTDOZRWWNSCPQQFPSRODFLTWMLCRGEIJINODNGLBAUUMBVHGBKMEJCJKS");

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
    msg.setTimeStamp(0.421835600851);
    msg.setSource(25597U);
    msg.setSourceEntity(150U);
    msg.setDestination(43644U);
    msg.setDestinationEntity(28U);
    msg.severity = 95U;
    msg.text.assign("FBADCLPBRAAYEMNUXLAKMAWIBXTNCOIJVOSDBKVHGGIFHGDPJVFOXXNPGAMRUHEEAYIPYKVQBLCGFGILXYEHCITM");

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
    msg.setTimeStamp(0.66629751636);
    msg.setSource(64341U);
    msg.setSourceEntity(124U);
    msg.setDestination(21591U);
    msg.setDestinationEntity(95U);
    msg.severity = 227U;
    msg.text.assign("AVCXRIEITBNPHFWAOYGZFIMYEADYFUJDZLOKIKNICIIZSZJPRBLRDBCVPVZTHAYJFTGSVSJCDJHHRPUSSTEJSEMEKNSXIVXQTLDGTWQABDLECGMVHYNFUGSCXQGRCTYWXPOMBMU");

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
    msg.setTimeStamp(0.312428340082);
    msg.setSource(31281U);
    msg.setSourceEntity(170U);
    msg.setDestination(26815U);
    msg.setDestinationEntity(106U);
    msg.channel = -77;
    msg.value = -1786572475;
    msg.gain = 228U;

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
    msg.setTimeStamp(0.726269815547);
    msg.setSource(4111U);
    msg.setSourceEntity(43U);
    msg.setDestination(30397U);
    msg.setDestinationEntity(78U);
    msg.channel = 56;
    msg.value = -1556872318;
    msg.gain = 252U;

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
    msg.setTimeStamp(0.302417517702);
    msg.setSource(30582U);
    msg.setSourceEntity(37U);
    msg.setDestination(29484U);
    msg.setDestinationEntity(250U);
    msg.channel = 34;
    msg.value = 1632883537;
    msg.gain = 203U;

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
    msg.setTimeStamp(0.890817249297);
    msg.setSource(61277U);
    msg.setSourceEntity(235U);
    msg.setDestination(16572U);
    msg.setDestinationEntity(116U);
    msg.ch01 = 0.199809494602;
    msg.ch02 = 0.480951025858;
    msg.ch03 = 0.815533831747;
    msg.ch04 = 0.649181317172;
    msg.ch05 = 0.958585455174;
    msg.ch06 = 0.238088197133;
    msg.ch07 = 0.788994016822;
    msg.ch08 = 0.0843527119572;
    msg.ch09 = 0.716522029151;
    msg.ch10 = 0.888606334601;
    msg.ch11 = 0.704800234784;
    msg.ch12 = 0.475548280425;
    msg.ch13 = 0.196372597979;
    msg.ch14 = 0.230247718973;
    msg.ch15 = 0.160610242005;
    msg.ch16 = 0.840133542293;

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
    msg.setTimeStamp(0.444656601156);
    msg.setSource(37997U);
    msg.setSourceEntity(51U);
    msg.setDestination(9874U);
    msg.setDestinationEntity(238U);
    msg.ch01 = 0.936870823618;
    msg.ch02 = 0.915937947944;
    msg.ch03 = 0.39189334964;
    msg.ch04 = 0.821121996071;
    msg.ch05 = 0.718117334783;
    msg.ch06 = 0.866003423658;
    msg.ch07 = 0.280383182651;
    msg.ch08 = 0.0856098956427;
    msg.ch09 = 0.953402196663;
    msg.ch10 = 0.46225518416;
    msg.ch11 = 0.781798693572;
    msg.ch12 = 0.249810541679;
    msg.ch13 = 0.166636087145;
    msg.ch14 = 0.380001007141;
    msg.ch15 = 0.642913906742;
    msg.ch16 = 0.615390330638;

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
    msg.setTimeStamp(0.537887936869);
    msg.setSource(38334U);
    msg.setSourceEntity(34U);
    msg.setDestination(49059U);
    msg.setDestinationEntity(62U);
    msg.ch01 = 0.20877693051;
    msg.ch02 = 0.46590349827;
    msg.ch03 = 0.321160397385;
    msg.ch04 = 0.203801925695;
    msg.ch05 = 0.139349590592;
    msg.ch06 = 0.676113906074;
    msg.ch07 = 0.701082788033;
    msg.ch08 = 0.677755863319;
    msg.ch09 = 0.620443596624;
    msg.ch10 = 0.642227017643;
    msg.ch11 = 0.184619836089;
    msg.ch12 = 0.0751345282731;
    msg.ch13 = 0.120600102827;
    msg.ch14 = 0.593334816295;
    msg.ch15 = 0.837772934012;
    msg.ch16 = 0.117879618732;

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
    msg.setTimeStamp(0.40019191412);
    msg.setSource(52293U);
    msg.setSourceEntity(212U);
    msg.setDestination(55826U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.720492568042;
    msg.lon = 0.444427296438;
    msg.x = 0.287083511743;
    msg.y = 0.381342371482;
    msg.z = 0.280264778167;
    msg.vx = 0.601234624601;
    msg.vy = 0.391926197253;
    msg.vz = 0.192664509179;
    msg.depth = 19U;
    msg.speed = 0.518656651817;
    msg.psi = 0.621561183996;
    msg.omega = 0.489474661082;

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
    msg.setTimeStamp(0.459992149626);
    msg.setSource(58882U);
    msg.setSourceEntity(245U);
    msg.setDestination(61798U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.0515402692198;
    msg.lon = 0.294646518675;
    msg.x = 0.60480714135;
    msg.y = 0.340261715401;
    msg.z = 0.852450198248;
    msg.vx = 0.257382403752;
    msg.vy = 0.199368169538;
    msg.vz = 0.738129555168;
    msg.depth = 139U;
    msg.speed = 0.512637459901;
    msg.psi = 0.0149231987339;
    msg.omega = 0.691514426282;

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
    msg.setTimeStamp(0.849260854084);
    msg.setSource(909U);
    msg.setSourceEntity(183U);
    msg.setDestination(44904U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.0225756521901;
    msg.lon = 0.195077991629;
    msg.x = 0.959942838307;
    msg.y = 0.0751498688064;
    msg.z = 0.177213900626;
    msg.vx = 0.921663895127;
    msg.vy = 0.911175615526;
    msg.vz = 0.484112341611;
    msg.depth = 252U;
    msg.speed = 0.0989968189122;
    msg.psi = 0.56456035853;
    msg.omega = 0.160967032108;

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
    msg.setTimeStamp(0.918488138788);
    msg.setSource(461U);
    msg.setSourceEntity(85U);
    msg.setDestination(55899U);
    msg.setDestinationEntity(92U);
    msg.ctrl_cmd_v = 0.992489969819;
    msg.ctrl_cmd_omega = 0.427116726362;
    msg.sat_ctrl_cmd_v = 0.229354980997;
    msg.sat_ctrl_cmd_omega = 0.570112946889;
    msg.robust_v = 0.261539535191;
    msg.robust_omega = 0.537636408823;
    msg.gamma = 0.783755423509;
    msg.gamma_dot = 0.945752518637;
    msg.gamma_ref = 0.0609214427014;
    msg.g_err = 0.907301448708;
    msg.target_x = 0.473499420923;
    msg.target_y = 0.585623723117;
    msg.target_z = 0.93109113236;
    msg.target_psi = 0.317556552167;
    msg.target_vx = 0.954722248168;
    msg.target_vy = 0.0983293598754;
    msg.target_vz = 0.828406464655;
    msg.target_omega = 0.209409244377;
    msg.x = 0.103572264072;
    msg.y = 0.941433054479;
    msg.z = 0.243515710133;
    msg.psi = 0.373675985402;
    msg.vx = 0.51997756001;
    msg.vy = 0.521527171628;
    msg.vz = 0.245993446812;
    msg.pd_x = 0.588135776046;
    msg.pd_y = 0.451047167109;
    msg.p_ref_x = 0.785262860783;
    msg.p_ref_y = 0.443422452298;
    msg.norm_mpf_err = 0.00795055871043;
    msg.mpf_err_x = 0.487603619055;
    msg.mpf_err_y = 0.00680298416436;
    msg.mpf_err_z = 0.0268956174821;
    msg.err_x = 0.251596320426;
    msg.err_y = 0.766675970112;
    msg.err_z = 0.0450768540465;
    msg.pest_x = 0.147729449621;
    msg.pest_y = 0.333487379086;
    msg.psi_est = 0.219344765458;
    msg.perr_x = 0.737426249817;
    msg.perr_y = 0.209567004243;
    msg.psi_err = 0.264774097686;
    msg.dest_x = 0.815293001848;
    msg.dest_y = 0.247610282838;
    msg.domega_est = 0.340591650784;

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
    msg.setTimeStamp(0.0348404561196);
    msg.setSource(12307U);
    msg.setSourceEntity(132U);
    msg.setDestination(16552U);
    msg.setDestinationEntity(217U);
    msg.ctrl_cmd_v = 0.669399707891;
    msg.ctrl_cmd_omega = 0.981834893783;
    msg.sat_ctrl_cmd_v = 0.808928247441;
    msg.sat_ctrl_cmd_omega = 0.849755170353;
    msg.robust_v = 0.855745720337;
    msg.robust_omega = 0.478971991003;
    msg.gamma = 0.0214851741693;
    msg.gamma_dot = 0.351570758382;
    msg.gamma_ref = 0.500095676266;
    msg.g_err = 0.00763736883739;
    msg.target_x = 0.656851199787;
    msg.target_y = 0.380614630775;
    msg.target_z = 0.372622642382;
    msg.target_psi = 0.756787988057;
    msg.target_vx = 0.312160279687;
    msg.target_vy = 0.926527870237;
    msg.target_vz = 0.810434079249;
    msg.target_omega = 0.70555632651;
    msg.x = 0.934846953344;
    msg.y = 0.531130886501;
    msg.z = 0.836872426948;
    msg.psi = 0.156872125462;
    msg.vx = 0.522712402556;
    msg.vy = 0.402127793543;
    msg.vz = 0.316879601811;
    msg.pd_x = 0.92374578082;
    msg.pd_y = 0.736262086063;
    msg.p_ref_x = 0.422948389287;
    msg.p_ref_y = 0.39728655736;
    msg.norm_mpf_err = 0.610328329709;
    msg.mpf_err_x = 0.460859916842;
    msg.mpf_err_y = 0.505963531816;
    msg.mpf_err_z = 0.838077260629;
    msg.err_x = 0.05870394915;
    msg.err_y = 0.48178500798;
    msg.err_z = 0.312002536088;
    msg.pest_x = 0.81299634517;
    msg.pest_y = 0.814542289151;
    msg.psi_est = 0.47355563226;
    msg.perr_x = 0.671465965995;
    msg.perr_y = 0.855933607276;
    msg.psi_err = 0.130567618828;
    msg.dest_x = 0.46913457317;
    msg.dest_y = 0.14075687542;
    msg.domega_est = 0.904426323924;

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
    msg.setTimeStamp(0.891223585208);
    msg.setSource(43240U);
    msg.setSourceEntity(85U);
    msg.setDestination(36131U);
    msg.setDestinationEntity(69U);
    msg.ctrl_cmd_v = 0.0898441850645;
    msg.ctrl_cmd_omega = 0.534751664864;
    msg.sat_ctrl_cmd_v = 0.512991886639;
    msg.sat_ctrl_cmd_omega = 0.977658790932;
    msg.robust_v = 0.909500801358;
    msg.robust_omega = 0.00468678985446;
    msg.gamma = 0.022868329812;
    msg.gamma_dot = 0.590561098248;
    msg.gamma_ref = 0.682182881629;
    msg.g_err = 0.0351636270951;
    msg.target_x = 0.605532177406;
    msg.target_y = 0.813954919426;
    msg.target_z = 0.638190338716;
    msg.target_psi = 0.428900111262;
    msg.target_vx = 0.875592212856;
    msg.target_vy = 0.213216041484;
    msg.target_vz = 0.764187681019;
    msg.target_omega = 0.397428460124;
    msg.x = 0.460367536293;
    msg.y = 0.661719909116;
    msg.z = 0.913500752974;
    msg.psi = 0.453249041742;
    msg.vx = 0.0805486602529;
    msg.vy = 0.296958441527;
    msg.vz = 0.285678171422;
    msg.pd_x = 0.854650272971;
    msg.pd_y = 0.327611293682;
    msg.p_ref_x = 0.885273748759;
    msg.p_ref_y = 0.373201054436;
    msg.norm_mpf_err = 0.042921639532;
    msg.mpf_err_x = 0.584602946017;
    msg.mpf_err_y = 0.274641882403;
    msg.mpf_err_z = 0.638751932687;
    msg.err_x = 0.784856175164;
    msg.err_y = 0.946479299304;
    msg.err_z = 0.923577573648;
    msg.pest_x = 0.787753009781;
    msg.pest_y = 0.505580332345;
    msg.psi_est = 0.323691410859;
    msg.perr_x = 0.966036230705;
    msg.perr_y = 0.0134940468576;
    msg.psi_err = 0.975653878987;
    msg.dest_x = 0.262576651559;
    msg.dest_y = 0.278783128465;
    msg.domega_est = 0.0674568162415;

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
    msg.setTimeStamp(0.441019156312);
    msg.setSource(9274U);
    msg.setSourceEntity(123U);
    msg.setDestination(57235U);
    msg.setDestinationEntity(198U);
    msg.gamma = 0.290554878578;
    msg.systemid = 99;

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
    msg.setTimeStamp(0.61933392523);
    msg.setSource(2271U);
    msg.setSourceEntity(136U);
    msg.setDestination(3169U);
    msg.setDestinationEntity(236U);
    msg.gamma = 0.0222410818183;
    msg.systemid = 78;

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
    msg.setTimeStamp(0.432757854916);
    msg.setSource(37807U);
    msg.setSourceEntity(72U);
    msg.setDestination(29232U);
    msg.setDestinationEntity(195U);
    msg.gamma = 0.834918833223;
    msg.systemid = -125;

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
    msg.setTimeStamp(0.320698416336);
    msg.setSource(30U);
    msg.setSourceEntity(40U);
    msg.setDestination(58695U);
    msg.setDestinationEntity(82U);
    msg.value = 0.496853186239;

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
    msg.setTimeStamp(0.0937349100027);
    msg.setSource(29100U);
    msg.setSourceEntity(55U);
    msg.setDestination(9721U);
    msg.setDestinationEntity(58U);
    msg.value = 0.689418263483;

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
    msg.setTimeStamp(0.77357401743);
    msg.setSource(21273U);
    msg.setSourceEntity(174U);
    msg.setDestination(3241U);
    msg.setDestinationEntity(151U);
    msg.value = 0.599391776691;

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
