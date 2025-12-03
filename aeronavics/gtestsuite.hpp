/** @file
 *	@brief MAVLink comm testsuite protocol generated from aeronavics.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <gtest/gtest.h>
#include "aeronavics.hpp"

#ifdef TEST_INTEROP
using namespace mavlink;
#undef MAVLINK_HELPER
#include "mavlink.h"
#endif


TEST(aeronavics, ANV_REGULATOR_STATUS)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::aeronavics::msg::ANV_REGULATOR_STATUS packet_in{};
    packet_in.id = 163;
    packet_in.voltage = 17235;
    packet_in.current = 17339;
    packet_in.temperature = 17443;
    packet_in.max_rated_current = 17547;
    packet_in.consumed_power = 17651;

    mavlink::aeronavics::msg::ANV_REGULATOR_STATUS packet1{};
    mavlink::aeronavics::msg::ANV_REGULATOR_STATUS packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.id, packet2.id);
    EXPECT_EQ(packet1.voltage, packet2.voltage);
    EXPECT_EQ(packet1.current, packet2.current);
    EXPECT_EQ(packet1.temperature, packet2.temperature);
    EXPECT_EQ(packet1.max_rated_current, packet2.max_rated_current);
    EXPECT_EQ(packet1.consumed_power, packet2.consumed_power);
}

#ifdef TEST_INTEROP
TEST(aeronavics_interop, ANV_REGULATOR_STATUS)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_anv_regulator_status_t packet_c {
         17235, 17339, 17443, 17547, 17651, 163
    };

    mavlink::aeronavics::msg::ANV_REGULATOR_STATUS packet_in{};
    packet_in.id = 163;
    packet_in.voltage = 17235;
    packet_in.current = 17339;
    packet_in.temperature = 17443;
    packet_in.max_rated_current = 17547;
    packet_in.consumed_power = 17651;

    mavlink::aeronavics::msg::ANV_REGULATOR_STATUS packet2{};

    mavlink_msg_anv_regulator_status_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.id, packet2.id);
    EXPECT_EQ(packet_in.voltage, packet2.voltage);
    EXPECT_EQ(packet_in.current, packet2.current);
    EXPECT_EQ(packet_in.temperature, packet2.temperature);
    EXPECT_EQ(packet_in.max_rated_current, packet2.max_rated_current);
    EXPECT_EQ(packet_in.consumed_power, packet2.consumed_power);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(aeronavics, ANV_BUFFER_STATUS)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::aeronavics::msg::ANV_BUFFER_STATUS packet_in{};
    packet_in.id = 29;
    packet_in.buffer_type = 17235;
    packet_in.min_space = 17339;
    packet_in.max_space = 17443;
    packet_in.avg_space = 17547;

    mavlink::aeronavics::msg::ANV_BUFFER_STATUS packet1{};
    mavlink::aeronavics::msg::ANV_BUFFER_STATUS packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.id, packet2.id);
    EXPECT_EQ(packet1.buffer_type, packet2.buffer_type);
    EXPECT_EQ(packet1.min_space, packet2.min_space);
    EXPECT_EQ(packet1.max_space, packet2.max_space);
    EXPECT_EQ(packet1.avg_space, packet2.avg_space);
}

#ifdef TEST_INTEROP
TEST(aeronavics_interop, ANV_BUFFER_STATUS)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_anv_buffer_status_t packet_c {
         17235, 17339, 17443, 17547, 29
    };

    mavlink::aeronavics::msg::ANV_BUFFER_STATUS packet_in{};
    packet_in.id = 29;
    packet_in.buffer_type = 17235;
    packet_in.min_space = 17339;
    packet_in.max_space = 17443;
    packet_in.avg_space = 17547;

    mavlink::aeronavics::msg::ANV_BUFFER_STATUS packet2{};

    mavlink_msg_anv_buffer_status_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.id, packet2.id);
    EXPECT_EQ(packet_in.buffer_type, packet2.buffer_type);
    EXPECT_EQ(packet_in.min_space, packet2.min_space);
    EXPECT_EQ(packet_in.max_space, packet2.max_space);
    EXPECT_EQ(packet_in.avg_space, packet2.avg_space);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(aeronavics, ANV_GSIB_DATA)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::aeronavics::msg::ANV_GSIB_DATA packet_in{};
    packet_in.an_channel = {{ 963497464, 963497465, 963497466, 963497467, 963497468, 963497469, 963497470, 963497471, 963497472, 963497473, 963497474 }};
    packet_in.dig_channel = 963499752;

    mavlink::aeronavics::msg::ANV_GSIB_DATA packet1{};
    mavlink::aeronavics::msg::ANV_GSIB_DATA packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.an_channel, packet2.an_channel);
    EXPECT_EQ(packet1.dig_channel, packet2.dig_channel);
}

#ifdef TEST_INTEROP
TEST(aeronavics_interop, ANV_GSIB_DATA)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_anv_gsib_data_t packet_c {
         { 963497464, 963497465, 963497466, 963497467, 963497468, 963497469, 963497470, 963497471, 963497472, 963497473, 963497474 }, 963499752
    };

    mavlink::aeronavics::msg::ANV_GSIB_DATA packet_in{};
    packet_in.an_channel = {{ 963497464, 963497465, 963497466, 963497467, 963497468, 963497469, 963497470, 963497471, 963497472, 963497473, 963497474 }};
    packet_in.dig_channel = 963499752;

    mavlink::aeronavics::msg::ANV_GSIB_DATA packet2{};

    mavlink_msg_anv_gsib_data_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.an_channel, packet2.an_channel);
    EXPECT_EQ(packet_in.dig_channel, packet2.dig_channel);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(aeronavics, ANV_SBUS_DATA)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::aeronavics::msg::ANV_SBUS_DATA packet_in{};
    packet_in.sbus_data = {{ 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 }};

    mavlink::aeronavics::msg::ANV_SBUS_DATA packet1{};
    mavlink::aeronavics::msg::ANV_SBUS_DATA packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.sbus_data, packet2.sbus_data);
}

#ifdef TEST_INTEROP
TEST(aeronavics_interop, ANV_SBUS_DATA)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_anv_sbus_data_t packet_c {
         { 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 }
    };

    mavlink::aeronavics::msg::ANV_SBUS_DATA packet_in{};
    packet_in.sbus_data = {{ 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 }};

    mavlink::aeronavics::msg::ANV_SBUS_DATA packet2{};

    mavlink_msg_anv_sbus_data_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.sbus_data, packet2.sbus_data);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(aeronavics, ANV_RADIO_DATA)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::aeronavics::msg::ANV_RADIO_DATA packet_in{};
    packet_in.target_system = 29;
    packet_in.target_component = 96;
    packet_in.sbus_data = {{ 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187 }};
    packet_in.timestamp = 93372036854775807ULL;

    mavlink::aeronavics::msg::ANV_RADIO_DATA packet1{};
    mavlink::aeronavics::msg::ANV_RADIO_DATA packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.target_system, packet2.target_system);
    EXPECT_EQ(packet1.target_component, packet2.target_component);
    EXPECT_EQ(packet1.sbus_data, packet2.sbus_data);
    EXPECT_EQ(packet1.timestamp, packet2.timestamp);
}

#ifdef TEST_INTEROP
TEST(aeronavics_interop, ANV_RADIO_DATA)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_anv_radio_data_t packet_c {
         93372036854775807ULL, 29, 96, { 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187 }
    };

    mavlink::aeronavics::msg::ANV_RADIO_DATA packet_in{};
    packet_in.target_system = 29;
    packet_in.target_component = 96;
    packet_in.sbus_data = {{ 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187 }};
    packet_in.timestamp = 93372036854775807ULL;

    mavlink::aeronavics::msg::ANV_RADIO_DATA packet2{};

    mavlink_msg_anv_radio_data_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.target_system, packet2.target_system);
    EXPECT_EQ(packet_in.target_component, packet2.target_component);
    EXPECT_EQ(packet_in.sbus_data, packet2.sbus_data);
    EXPECT_EQ(packet_in.timestamp, packet2.timestamp);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(aeronavics, ANV_FIRMWARE_INFORMATION)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::aeronavics::msg::ANV_FIRMWARE_INFORMATION packet_in{};
    packet_in.firmware = 963497464;

    mavlink::aeronavics::msg::ANV_FIRMWARE_INFORMATION packet1{};
    mavlink::aeronavics::msg::ANV_FIRMWARE_INFORMATION packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.firmware, packet2.firmware);
}

#ifdef TEST_INTEROP
TEST(aeronavics_interop, ANV_FIRMWARE_INFORMATION)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_anv_firmware_information_t packet_c {
         963497464
    };

    mavlink::aeronavics::msg::ANV_FIRMWARE_INFORMATION packet_in{};
    packet_in.firmware = 963497464;

    mavlink::aeronavics::msg::ANV_FIRMWARE_INFORMATION packet2{};

    mavlink_msg_anv_firmware_information_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.firmware, packet2.firmware);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(aeronavics, ANV_GSCB_DATA)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::aeronavics::msg::ANV_GSCB_DATA packet_in{};
    packet_in.active_profile = 5;
    packet_in.battery_1_enabled = 72;
    packet_in.battery_2_enabled = 139;
    packet_in.external_power_enabled = 206;
    packet_in.tray_fan_enabled = 17;
    packet_in.electronics_fan_enabled = 84;

    mavlink::aeronavics::msg::ANV_GSCB_DATA packet1{};
    mavlink::aeronavics::msg::ANV_GSCB_DATA packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.active_profile, packet2.active_profile);
    EXPECT_EQ(packet1.battery_1_enabled, packet2.battery_1_enabled);
    EXPECT_EQ(packet1.battery_2_enabled, packet2.battery_2_enabled);
    EXPECT_EQ(packet1.external_power_enabled, packet2.external_power_enabled);
    EXPECT_EQ(packet1.tray_fan_enabled, packet2.tray_fan_enabled);
    EXPECT_EQ(packet1.electronics_fan_enabled, packet2.electronics_fan_enabled);
}

#ifdef TEST_INTEROP
TEST(aeronavics_interop, ANV_GSCB_DATA)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_anv_gscb_data_t packet_c {
         5, 72, 139, 206, 17, 84
    };

    mavlink::aeronavics::msg::ANV_GSCB_DATA packet_in{};
    packet_in.active_profile = 5;
    packet_in.battery_1_enabled = 72;
    packet_in.battery_2_enabled = 139;
    packet_in.external_power_enabled = 206;
    packet_in.tray_fan_enabled = 17;
    packet_in.electronics_fan_enabled = 84;

    mavlink::aeronavics::msg::ANV_GSCB_DATA packet2{};

    mavlink_msg_anv_gscb_data_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.active_profile, packet2.active_profile);
    EXPECT_EQ(packet_in.battery_1_enabled, packet2.battery_1_enabled);
    EXPECT_EQ(packet_in.battery_2_enabled, packet2.battery_2_enabled);
    EXPECT_EQ(packet_in.external_power_enabled, packet2.external_power_enabled);
    EXPECT_EQ(packet_in.tray_fan_enabled, packet2.tray_fan_enabled);
    EXPECT_EQ(packet_in.electronics_fan_enabled, packet2.electronics_fan_enabled);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(aeronavics, ANV_LATENCY_REPORT)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::aeronavics::msg::ANV_LATENCY_REPORT packet_in{};
    packet_in.latency = 93372036854775807ULL;
    packet_in.seq = 963497880;

    mavlink::aeronavics::msg::ANV_LATENCY_REPORT packet1{};
    mavlink::aeronavics::msg::ANV_LATENCY_REPORT packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.latency, packet2.latency);
    EXPECT_EQ(packet1.seq, packet2.seq);
}

#ifdef TEST_INTEROP
TEST(aeronavics_interop, ANV_LATENCY_REPORT)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_anv_latency_report_t packet_c {
         93372036854775807ULL, 963497880
    };

    mavlink::aeronavics::msg::ANV_LATENCY_REPORT packet_in{};
    packet_in.latency = 93372036854775807ULL;
    packet_in.seq = 963497880;

    mavlink::aeronavics::msg::ANV_LATENCY_REPORT packet2{};

    mavlink_msg_anv_latency_report_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.latency, packet2.latency);
    EXPECT_EQ(packet_in.seq, packet2.seq);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(aeronavics, ANV_SMART_PORT_POLL_PACKET)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::aeronavics::msg::ANV_SMART_PORT_POLL_PACKET packet_in{};
    packet_in.smart_port_poll_packet = {{ 5, 6 }};

    mavlink::aeronavics::msg::ANV_SMART_PORT_POLL_PACKET packet1{};
    mavlink::aeronavics::msg::ANV_SMART_PORT_POLL_PACKET packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.smart_port_poll_packet, packet2.smart_port_poll_packet);
}

#ifdef TEST_INTEROP
TEST(aeronavics_interop, ANV_SMART_PORT_POLL_PACKET)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_anv_smart_port_poll_packet_t packet_c {
         { 5, 6 }
    };

    mavlink::aeronavics::msg::ANV_SMART_PORT_POLL_PACKET packet_in{};
    packet_in.smart_port_poll_packet = {{ 5, 6 }};

    mavlink::aeronavics::msg::ANV_SMART_PORT_POLL_PACKET packet2{};

    mavlink_msg_anv_smart_port_poll_packet_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.smart_port_poll_packet, packet2.smart_port_poll_packet);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(aeronavics, ANV_GS_CTRL_DATA)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::aeronavics::msg::ANV_GS_CTRL_DATA packet_in{};
    packet_in.controller_id = 149;
    packet_in.an_channel = {{ 963497464, 963497465, 963497466, 963497467, 963497468, 963497469, 963497470, 963497471, 963497472, 963497473, 963497474 }};
    packet_in.dig_channel = 963499752;

    mavlink::aeronavics::msg::ANV_GS_CTRL_DATA packet1{};
    mavlink::aeronavics::msg::ANV_GS_CTRL_DATA packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.controller_id, packet2.controller_id);
    EXPECT_EQ(packet1.an_channel, packet2.an_channel);
    EXPECT_EQ(packet1.dig_channel, packet2.dig_channel);
}

#ifdef TEST_INTEROP
TEST(aeronavics_interop, ANV_GS_CTRL_DATA)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_anv_gs_ctrl_data_t packet_c {
         { 963497464, 963497465, 963497466, 963497467, 963497468, 963497469, 963497470, 963497471, 963497472, 963497473, 963497474 }, 963499752, 149
    };

    mavlink::aeronavics::msg::ANV_GS_CTRL_DATA packet_in{};
    packet_in.controller_id = 149;
    packet_in.an_channel = {{ 963497464, 963497465, 963497466, 963497467, 963497468, 963497469, 963497470, 963497471, 963497472, 963497473, 963497474 }};
    packet_in.dig_channel = 963499752;

    mavlink::aeronavics::msg::ANV_GS_CTRL_DATA packet2{};

    mavlink_msg_anv_gs_ctrl_data_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.controller_id, packet2.controller_id);
    EXPECT_EQ(packet_in.an_channel, packet2.an_channel);
    EXPECT_EQ(packet_in.dig_channel, packet2.dig_channel);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(aeronavics, ANV_GSMC_DATA)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::aeronavics::msg::ANV_GSMC_DATA packet_in{};
    packet_in.gsmc_ip = to_char_array("ABCDEFGHIJKLMNO");

    mavlink::aeronavics::msg::ANV_GSMC_DATA packet1{};
    mavlink::aeronavics::msg::ANV_GSMC_DATA packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.gsmc_ip, packet2.gsmc_ip);
}

#ifdef TEST_INTEROP
TEST(aeronavics_interop, ANV_GSMC_DATA)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_anv_gsmc_data_t packet_c {
         "ABCDEFGHIJKLMNO"
    };

    mavlink::aeronavics::msg::ANV_GSMC_DATA packet_in{};
    packet_in.gsmc_ip = to_char_array("ABCDEFGHIJKLMNO");

    mavlink::aeronavics::msg::ANV_GSMC_DATA packet2{};

    mavlink_msg_anv_gsmc_data_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.gsmc_ip, packet2.gsmc_ip);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(aeronavics, ANV_SYSID)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::aeronavics::msg::ANV_SYSID packet_in{};
    packet_in.serial_number = 17235;
    packet_in.sysid = 139;

    mavlink::aeronavics::msg::ANV_SYSID packet1{};
    mavlink::aeronavics::msg::ANV_SYSID packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.serial_number, packet2.serial_number);
    EXPECT_EQ(packet1.sysid, packet2.sysid);
}

#ifdef TEST_INTEROP
TEST(aeronavics_interop, ANV_SYSID)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_anv_sysid_t packet_c {
         17235, 139
    };

    mavlink::aeronavics::msg::ANV_SYSID packet_in{};
    packet_in.serial_number = 17235;
    packet_in.sysid = 139;

    mavlink::aeronavics::msg::ANV_SYSID packet2{};

    mavlink_msg_anv_sysid_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.serial_number, packet2.serial_number);
    EXPECT_EQ(packet_in.sysid, packet2.sysid);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(aeronavics, ANV_SPRAY_STATUS)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::aeronavics::msg::ANV_SPRAY_STATUS packet_in{};
    packet_in.measured_flowrate = 18899;
    packet_in.desired_flowrate = 19003;
    packet_in.total_sprayed_volume = 123.0;
    packet_in.armed_sprayed_volume = 179.0;
    packet_in.last_tree_volume = 235.0;
    packet_in.spray_remaining = 291.0;
    packet_in.pressure = 19107;
    packet_in.error = 247;

    mavlink::aeronavics::msg::ANV_SPRAY_STATUS packet1{};
    mavlink::aeronavics::msg::ANV_SPRAY_STATUS packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.measured_flowrate, packet2.measured_flowrate);
    EXPECT_EQ(packet1.desired_flowrate, packet2.desired_flowrate);
    EXPECT_EQ(packet1.total_sprayed_volume, packet2.total_sprayed_volume);
    EXPECT_EQ(packet1.armed_sprayed_volume, packet2.armed_sprayed_volume);
    EXPECT_EQ(packet1.last_tree_volume, packet2.last_tree_volume);
    EXPECT_EQ(packet1.spray_remaining, packet2.spray_remaining);
    EXPECT_EQ(packet1.pressure, packet2.pressure);
    EXPECT_EQ(packet1.error, packet2.error);
}

#ifdef TEST_INTEROP
TEST(aeronavics_interop, ANV_SPRAY_STATUS)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_anv_spray_status_t packet_c {
         123.0, 179.0, 235.0, 291.0, 18899, 19003, 19107, 247
    };

    mavlink::aeronavics::msg::ANV_SPRAY_STATUS packet_in{};
    packet_in.measured_flowrate = 18899;
    packet_in.desired_flowrate = 19003;
    packet_in.total_sprayed_volume = 123.0;
    packet_in.armed_sprayed_volume = 179.0;
    packet_in.last_tree_volume = 235.0;
    packet_in.spray_remaining = 291.0;
    packet_in.pressure = 19107;
    packet_in.error = 247;

    mavlink::aeronavics::msg::ANV_SPRAY_STATUS packet2{};

    mavlink_msg_anv_spray_status_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.measured_flowrate, packet2.measured_flowrate);
    EXPECT_EQ(packet_in.desired_flowrate, packet2.desired_flowrate);
    EXPECT_EQ(packet_in.total_sprayed_volume, packet2.total_sprayed_volume);
    EXPECT_EQ(packet_in.armed_sprayed_volume, packet2.armed_sprayed_volume);
    EXPECT_EQ(packet_in.last_tree_volume, packet2.last_tree_volume);
    EXPECT_EQ(packet_in.spray_remaining, packet2.spray_remaining);
    EXPECT_EQ(packet_in.pressure, packet2.pressure);
    EXPECT_EQ(packet_in.error, packet2.error);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif
