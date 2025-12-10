/** @file
 *    @brief MAVLink comm protocol testsuite generated from aeronavics.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef AERONAVICS_TESTSUITE_H
#define AERONAVICS_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_ardupilotmega(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_uAvionix(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_icarous(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_storm32(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_ASLUAV(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_cubepilot(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_aeronavics(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_ardupilotmega(system_id, component_id, last_msg);
    mavlink_test_uAvionix(system_id, component_id, last_msg);
    mavlink_test_icarous(system_id, component_id, last_msg);
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_storm32(system_id, component_id, last_msg);
    mavlink_test_ASLUAV(system_id, component_id, last_msg);
    mavlink_test_cubepilot(system_id, component_id, last_msg);
    mavlink_test_aeronavics(system_id, component_id, last_msg);
}
#endif

#include "../ardupilotmega/testsuite.h"
#include "../uAvionix/testsuite.h"
#include "../icarous/testsuite.h"
#include "../common/testsuite.h"
#include "../storm32/testsuite.h"
#include "../ASLUAV/testsuite.h"
#include "../cubepilot/testsuite.h"


static void mavlink_test_anv_regulator_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_REGULATOR_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_regulator_status_t packet_in = {
        17235,17339,17443,17547,17651,163
    };
    mavlink_anv_regulator_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.voltage = packet_in.voltage;
        packet1.current = packet_in.current;
        packet1.temperature = packet_in.temperature;
        packet1.max_rated_current = packet_in.max_rated_current;
        packet1.consumed_power = packet_in.consumed_power;
        packet1.id = packet_in.id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_regulator_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_regulator_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_regulator_status_pack(system_id, component_id, &msg , packet1.id , packet1.voltage , packet1.current , packet1.temperature , packet1.max_rated_current , packet1.consumed_power );
    mavlink_msg_anv_regulator_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_regulator_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.id , packet1.voltage , packet1.current , packet1.temperature , packet1.max_rated_current , packet1.consumed_power );
    mavlink_msg_anv_regulator_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_regulator_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_regulator_status_send(MAVLINK_COMM_1 , packet1.id , packet1.voltage , packet1.current , packet1.temperature , packet1.max_rated_current , packet1.consumed_power );
    mavlink_msg_anv_regulator_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_REGULATOR_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_REGULATOR_STATUS) != NULL);
#endif
}

static void mavlink_test_anv_buffer_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_BUFFER_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_buffer_status_t packet_in = {
        17235,17339,17443,17547,29
    };
    mavlink_anv_buffer_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.buffer_type = packet_in.buffer_type;
        packet1.min_space = packet_in.min_space;
        packet1.max_space = packet_in.max_space;
        packet1.avg_space = packet_in.avg_space;
        packet1.id = packet_in.id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_BUFFER_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_BUFFER_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_buffer_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_buffer_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_buffer_status_pack(system_id, component_id, &msg , packet1.id , packet1.buffer_type , packet1.min_space , packet1.max_space , packet1.avg_space );
    mavlink_msg_anv_buffer_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_buffer_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.id , packet1.buffer_type , packet1.min_space , packet1.max_space , packet1.avg_space );
    mavlink_msg_anv_buffer_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_buffer_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_buffer_status_send(MAVLINK_COMM_1 , packet1.id , packet1.buffer_type , packet1.min_space , packet1.max_space , packet1.avg_space );
    mavlink_msg_anv_buffer_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_BUFFER_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_BUFFER_STATUS) != NULL);
#endif
}

static void mavlink_test_anv_gsib_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_GSIB_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_gsib_data_t packet_in = {
        { 963497464, 963497465, 963497466, 963497467, 963497468, 963497469, 963497470, 963497471, 963497472, 963497473, 963497474 },963499752
    };
    mavlink_anv_gsib_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dig_channel = packet_in.dig_channel;
        
        mav_array_memcpy(packet1.an_channel, packet_in.an_channel, sizeof(uint32_t)*11);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_GSIB_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_GSIB_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_gsib_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_gsib_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_gsib_data_pack(system_id, component_id, &msg , packet1.an_channel , packet1.dig_channel );
    mavlink_msg_anv_gsib_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_gsib_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.an_channel , packet1.dig_channel );
    mavlink_msg_anv_gsib_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_gsib_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_gsib_data_send(MAVLINK_COMM_1 , packet1.an_channel , packet1.dig_channel );
    mavlink_msg_anv_gsib_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_GSIB_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_GSIB_DATA) != NULL);
#endif
}

static void mavlink_test_anv_sbus_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_SBUS_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_sbus_data_t packet_in = {
        { 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 }
    };
    mavlink_anv_sbus_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.sbus_data, packet_in.sbus_data, sizeof(uint8_t)*25);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_SBUS_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_SBUS_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_sbus_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_sbus_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_sbus_data_pack(system_id, component_id, &msg , packet1.sbus_data );
    mavlink_msg_anv_sbus_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_sbus_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.sbus_data );
    mavlink_msg_anv_sbus_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_sbus_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_sbus_data_send(MAVLINK_COMM_1 , packet1.sbus_data );
    mavlink_msg_anv_sbus_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_SBUS_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_SBUS_DATA) != NULL);
#endif
}

static void mavlink_test_anv_radio_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_RADIO_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_radio_data_t packet_in = {
        93372036854775807ULL,29,96,{ 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187 }
    };
    mavlink_anv_radio_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        
        mav_array_memcpy(packet1.sbus_data, packet_in.sbus_data, sizeof(uint8_t)*25);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_RADIO_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_RADIO_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_radio_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_radio_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_radio_data_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.sbus_data , packet1.timestamp );
    mavlink_msg_anv_radio_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_radio_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.sbus_data , packet1.timestamp );
    mavlink_msg_anv_radio_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_radio_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_radio_data_send(MAVLINK_COMM_1 , packet1.target_system , packet1.target_component , packet1.sbus_data , packet1.timestamp );
    mavlink_msg_anv_radio_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_RADIO_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_RADIO_DATA) != NULL);
#endif
}

static void mavlink_test_anv_firmware_information(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_FIRMWARE_INFORMATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_firmware_information_t packet_in = {
        963497464
    };
    mavlink_anv_firmware_information_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.firmware = packet_in.firmware;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_FIRMWARE_INFORMATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_FIRMWARE_INFORMATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_firmware_information_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_firmware_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_firmware_information_pack(system_id, component_id, &msg , packet1.firmware );
    mavlink_msg_anv_firmware_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_firmware_information_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.firmware );
    mavlink_msg_anv_firmware_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_firmware_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_firmware_information_send(MAVLINK_COMM_1 , packet1.firmware );
    mavlink_msg_anv_firmware_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_FIRMWARE_INFORMATION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_FIRMWARE_INFORMATION) != NULL);
#endif
}

static void mavlink_test_anv_gscb_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_GSCB_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_gscb_data_t packet_in = {
        5,72,139,206,17,84
    };
    mavlink_anv_gscb_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.active_profile = packet_in.active_profile;
        packet1.battery_1_enabled = packet_in.battery_1_enabled;
        packet1.battery_2_enabled = packet_in.battery_2_enabled;
        packet1.external_power_enabled = packet_in.external_power_enabled;
        packet1.tray_fan_enabled = packet_in.tray_fan_enabled;
        packet1.electronics_fan_enabled = packet_in.electronics_fan_enabled;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_GSCB_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_GSCB_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_gscb_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_gscb_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_gscb_data_pack(system_id, component_id, &msg , packet1.active_profile , packet1.battery_1_enabled , packet1.battery_2_enabled , packet1.external_power_enabled , packet1.tray_fan_enabled , packet1.electronics_fan_enabled );
    mavlink_msg_anv_gscb_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_gscb_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.active_profile , packet1.battery_1_enabled , packet1.battery_2_enabled , packet1.external_power_enabled , packet1.tray_fan_enabled , packet1.electronics_fan_enabled );
    mavlink_msg_anv_gscb_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_gscb_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_gscb_data_send(MAVLINK_COMM_1 , packet1.active_profile , packet1.battery_1_enabled , packet1.battery_2_enabled , packet1.external_power_enabled , packet1.tray_fan_enabled , packet1.electronics_fan_enabled );
    mavlink_msg_anv_gscb_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_GSCB_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_GSCB_DATA) != NULL);
#endif
}

static void mavlink_test_anv_latency_report(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_LATENCY_REPORT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_latency_report_t packet_in = {
        93372036854775807ULL,963497880
    };
    mavlink_anv_latency_report_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.latency = packet_in.latency;
        packet1.seq = packet_in.seq;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_LATENCY_REPORT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_LATENCY_REPORT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_latency_report_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_latency_report_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_latency_report_pack(system_id, component_id, &msg , packet1.latency , packet1.seq );
    mavlink_msg_anv_latency_report_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_latency_report_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.latency , packet1.seq );
    mavlink_msg_anv_latency_report_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_latency_report_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_latency_report_send(MAVLINK_COMM_1 , packet1.latency , packet1.seq );
    mavlink_msg_anv_latency_report_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_LATENCY_REPORT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_LATENCY_REPORT) != NULL);
#endif
}

static void mavlink_test_anv_smart_port_poll_packet(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_smart_port_poll_packet_t packet_in = {
        { 5, 6 }
    };
    mavlink_anv_smart_port_poll_packet_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.smart_port_poll_packet, packet_in.smart_port_poll_packet, sizeof(uint8_t)*2);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_smart_port_poll_packet_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_smart_port_poll_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_smart_port_poll_packet_pack(system_id, component_id, &msg , packet1.smart_port_poll_packet );
    mavlink_msg_anv_smart_port_poll_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_smart_port_poll_packet_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.smart_port_poll_packet );
    mavlink_msg_anv_smart_port_poll_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_smart_port_poll_packet_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_smart_port_poll_packet_send(MAVLINK_COMM_1 , packet1.smart_port_poll_packet );
    mavlink_msg_anv_smart_port_poll_packet_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_SMART_PORT_POLL_PACKET") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET) != NULL);
#endif
}

static void mavlink_test_anv_gs_ctrl_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_GS_CTRL_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_gs_ctrl_data_t packet_in = {
        { 963497464, 963497465, 963497466, 963497467, 963497468, 963497469, 963497470, 963497471, 963497472, 963497473, 963497474 },963499752,149
    };
    mavlink_anv_gs_ctrl_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dig_channel = packet_in.dig_channel;
        packet1.controller_id = packet_in.controller_id;
        
        mav_array_memcpy(packet1.an_channel, packet_in.an_channel, sizeof(uint32_t)*11);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_gs_ctrl_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_gs_ctrl_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_gs_ctrl_data_pack(system_id, component_id, &msg , packet1.controller_id , packet1.an_channel , packet1.dig_channel );
    mavlink_msg_anv_gs_ctrl_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_gs_ctrl_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.controller_id , packet1.an_channel , packet1.dig_channel );
    mavlink_msg_anv_gs_ctrl_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_gs_ctrl_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_gs_ctrl_data_send(MAVLINK_COMM_1 , packet1.controller_id , packet1.an_channel , packet1.dig_channel );
    mavlink_msg_anv_gs_ctrl_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_GS_CTRL_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_GS_CTRL_DATA) != NULL);
#endif
}

static void mavlink_test_anv_gsmc_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_GSMC_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_gsmc_data_t packet_in = {
        "ABCDEFGHIJKLMNO"
    };
    mavlink_anv_gsmc_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.gsmc_ip, packet_in.gsmc_ip, sizeof(char)*16);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_GSMC_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_GSMC_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_gsmc_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_gsmc_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_gsmc_data_pack(system_id, component_id, &msg , packet1.gsmc_ip );
    mavlink_msg_anv_gsmc_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_gsmc_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.gsmc_ip );
    mavlink_msg_anv_gsmc_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_gsmc_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_gsmc_data_send(MAVLINK_COMM_1 , packet1.gsmc_ip );
    mavlink_msg_anv_gsmc_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_GSMC_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_GSMC_DATA) != NULL);
#endif
}

static void mavlink_test_anv_sysid(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_SYSID >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_sysid_t packet_in = {
        17235,139
    };
    mavlink_anv_sysid_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.serial_number = packet_in.serial_number;
        packet1.sysid = packet_in.sysid;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_SYSID_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_SYSID_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_sysid_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_sysid_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_sysid_pack(system_id, component_id, &msg , packet1.serial_number , packet1.sysid );
    mavlink_msg_anv_sysid_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_sysid_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.serial_number , packet1.sysid );
    mavlink_msg_anv_sysid_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_sysid_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_sysid_send(MAVLINK_COMM_1 , packet1.serial_number , packet1.sysid );
    mavlink_msg_anv_sysid_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_SYSID") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_SYSID) != NULL);
#endif
}

static void mavlink_test_anv_spray_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_SPRAY_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_spray_status_t packet_in = {
        123.0,179.0,235.0,291.0,18899,19003,19107,19211,125
    };
    mavlink_anv_spray_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.total_sprayed_volume = packet_in.total_sprayed_volume;
        packet1.armed_sprayed_volume = packet_in.armed_sprayed_volume;
        packet1.last_tree_volume = packet_in.last_tree_volume;
        packet1.spray_remaining = packet_in.spray_remaining;
        packet1.measured_flowrate = packet_in.measured_flowrate;
        packet1.desired_flowrate = packet_in.desired_flowrate;
        packet1.set_flowrate = packet_in.set_flowrate;
        packet1.pressure = packet_in.pressure;
        packet1.error = packet_in.error;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_SPRAY_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_SPRAY_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_spray_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_spray_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_spray_status_pack(system_id, component_id, &msg , packet1.measured_flowrate , packet1.desired_flowrate , packet1.set_flowrate , packet1.total_sprayed_volume , packet1.armed_sprayed_volume , packet1.last_tree_volume , packet1.spray_remaining , packet1.pressure , packet1.error );
    mavlink_msg_anv_spray_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_spray_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.measured_flowrate , packet1.desired_flowrate , packet1.set_flowrate , packet1.total_sprayed_volume , packet1.armed_sprayed_volume , packet1.last_tree_volume , packet1.spray_remaining , packet1.pressure , packet1.error );
    mavlink_msg_anv_spray_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_spray_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_spray_status_send(MAVLINK_COMM_1 , packet1.measured_flowrate , packet1.desired_flowrate , packet1.set_flowrate , packet1.total_sprayed_volume , packet1.armed_sprayed_volume , packet1.last_tree_volume , packet1.spray_remaining , packet1.pressure , packet1.error );
    mavlink_msg_anv_spray_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_SPRAY_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_SPRAY_STATUS) != NULL);
#endif
}

static void mavlink_test_aeronavics(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_anv_regulator_status(system_id, component_id, last_msg);
    mavlink_test_anv_buffer_status(system_id, component_id, last_msg);
    mavlink_test_anv_gsib_data(system_id, component_id, last_msg);
    mavlink_test_anv_sbus_data(system_id, component_id, last_msg);
    mavlink_test_anv_radio_data(system_id, component_id, last_msg);
    mavlink_test_anv_firmware_information(system_id, component_id, last_msg);
    mavlink_test_anv_gscb_data(system_id, component_id, last_msg);
    mavlink_test_anv_latency_report(system_id, component_id, last_msg);
    mavlink_test_anv_smart_port_poll_packet(system_id, component_id, last_msg);
    mavlink_test_anv_gs_ctrl_data(system_id, component_id, last_msg);
    mavlink_test_anv_gsmc_data(system_id, component_id, last_msg);
    mavlink_test_anv_sysid(system_id, component_id, last_msg);
    mavlink_test_anv_spray_status(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // AERONAVICS_TESTSUITE_H
