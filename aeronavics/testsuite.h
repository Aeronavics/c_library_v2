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


static void mavlink_test_piksi_msg_obs(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_PIKSI_MSG_OBS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_piksi_msg_obs_t packet_in = {
        963497464,{ 963497672, 963497673, 963497674 },{ 963498296, 963498297, 963498298 },{ 963498920, 963498921, 963498922 },19315,{ 19419, 19420, 19421 },149,216,{ 27, 28, 29 },{ 228, 229, 230 }
    };
    mavlink_piksi_msg_obs_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.tow = packet_in.tow;
        packet1.week = packet_in.week;
        packet1.n_observations = packet_in.n_observations;
        packet1.n_packets = packet_in.n_packets;
        
        mav_array_memcpy(packet1.P, packet_in.P, sizeof(uint32_t)*3);
        mav_array_memcpy(packet1.L_i, packet_in.L_i, sizeof(int32_t)*3);
        mav_array_memcpy(packet1.sid, packet_in.sid, sizeof(uint32_t)*3);
        mav_array_memcpy(packet1.lock, packet_in.lock, sizeof(uint16_t)*3);
        mav_array_memcpy(packet1.L_f, packet_in.L_f, sizeof(uint8_t)*3);
        mav_array_memcpy(packet1.cn0, packet_in.cn0, sizeof(uint8_t)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_PIKSI_MSG_OBS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_PIKSI_MSG_OBS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_piksi_msg_obs_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_piksi_msg_obs_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_piksi_msg_obs_pack(system_id, component_id, &msg , packet1.n_observations , packet1.tow , packet1.week , packet1.n_packets , packet1.P , packet1.L_i , packet1.L_f , packet1.cn0 , packet1.lock , packet1.sid );
    mavlink_msg_piksi_msg_obs_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_piksi_msg_obs_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.n_observations , packet1.tow , packet1.week , packet1.n_packets , packet1.P , packet1.L_i , packet1.L_f , packet1.cn0 , packet1.lock , packet1.sid );
    mavlink_msg_piksi_msg_obs_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_piksi_msg_obs_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_piksi_msg_obs_send(MAVLINK_COMM_1 , packet1.n_observations , packet1.tow , packet1.week , packet1.n_packets , packet1.P , packet1.L_i , packet1.L_f , packet1.cn0 , packet1.lock , packet1.sid );
    mavlink_msg_piksi_msg_obs_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("PIKSI_MSG_OBS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_PIKSI_MSG_OBS) != NULL);
#endif
}

static void mavlink_test_piksi_msg_base_pos(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_piksi_msg_base_pos_t packet_in = {
        123.0,179.0,235.0
    };
    mavlink_piksi_msg_base_pos_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.height = packet_in.height;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_piksi_msg_base_pos_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_piksi_msg_base_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_piksi_msg_base_pos_pack(system_id, component_id, &msg , packet1.lat , packet1.lon , packet1.height );
    mavlink_msg_piksi_msg_base_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_piksi_msg_base_pos_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.lat , packet1.lon , packet1.height );
    mavlink_msg_piksi_msg_base_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_piksi_msg_base_pos_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_piksi_msg_base_pos_send(MAVLINK_COMM_1 , packet1.lat , packet1.lon , packet1.height );
    mavlink_msg_piksi_msg_base_pos_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("PIKSI_MSG_BASE_POS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS) != NULL);
#endif
}

static void mavlink_test_piksi_msg_ephemeris(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_piksi_msg_ephemeris_t packet_in = {
        123.0,179.0,235.0,291.0,347.0,403.0,459.0,515.0,571.0,627.0,683.0,739.0,795.0,851.0,907.0,963.0,1019.0,1075.0,1131.0,1187.0,1243.0,963506200,963506408,26387,26491,26595,167,234,45
    };
    mavlink_piksi_msg_ephemeris_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.tgd = packet_in.tgd;
        packet1.c_rs = packet_in.c_rs;
        packet1.c_rc = packet_in.c_rc;
        packet1.c_uc = packet_in.c_uc;
        packet1.c_us = packet_in.c_us;
        packet1.c_ic = packet_in.c_ic;
        packet1.c_is = packet_in.c_is;
        packet1.dn = packet_in.dn;
        packet1.m0 = packet_in.m0;
        packet1.ecc = packet_in.ecc;
        packet1.sqrta = packet_in.sqrta;
        packet1.omega0 = packet_in.omega0;
        packet1.omegadot = packet_in.omegadot;
        packet1.w = packet_in.w;
        packet1.inc = packet_in.inc;
        packet1.inc_dot = packet_in.inc_dot;
        packet1.af0 = packet_in.af0;
        packet1.af1 = packet_in.af1;
        packet1.af2 = packet_in.af2;
        packet1.toe_tow = packet_in.toe_tow;
        packet1.toc_tow = packet_in.toc_tow;
        packet1.sid = packet_in.sid;
        packet1.reserved = packet_in.reserved;
        packet1.toe_wn = packet_in.toe_wn;
        packet1.toc_wn = packet_in.toc_wn;
        packet1.iodc = packet_in.iodc;
        packet1.valid = packet_in.valid;
        packet1.healthy = packet_in.healthy;
        packet1.iode = packet_in.iode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_piksi_msg_ephemeris_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_piksi_msg_ephemeris_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_piksi_msg_ephemeris_pack(system_id, component_id, &msg , packet1.tgd , packet1.c_rs , packet1.c_rc , packet1.c_uc , packet1.c_us , packet1.c_ic , packet1.c_is , packet1.dn , packet1.m0 , packet1.ecc , packet1.sqrta , packet1.omega0 , packet1.omegadot , packet1.w , packet1.inc , packet1.inc_dot , packet1.af0 , packet1.af1 , packet1.af2 , packet1.toe_tow , packet1.toe_wn , packet1.toc_tow , packet1.toc_wn , packet1.valid , packet1.healthy , packet1.sid , packet1.iode , packet1.iodc , packet1.reserved );
    mavlink_msg_piksi_msg_ephemeris_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_piksi_msg_ephemeris_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.tgd , packet1.c_rs , packet1.c_rc , packet1.c_uc , packet1.c_us , packet1.c_ic , packet1.c_is , packet1.dn , packet1.m0 , packet1.ecc , packet1.sqrta , packet1.omega0 , packet1.omegadot , packet1.w , packet1.inc , packet1.inc_dot , packet1.af0 , packet1.af1 , packet1.af2 , packet1.toe_tow , packet1.toe_wn , packet1.toc_tow , packet1.toc_wn , packet1.valid , packet1.healthy , packet1.sid , packet1.iode , packet1.iodc , packet1.reserved );
    mavlink_msg_piksi_msg_ephemeris_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_piksi_msg_ephemeris_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_piksi_msg_ephemeris_send(MAVLINK_COMM_1 , packet1.tgd , packet1.c_rs , packet1.c_rc , packet1.c_uc , packet1.c_us , packet1.c_ic , packet1.c_is , packet1.dn , packet1.m0 , packet1.ecc , packet1.sqrta , packet1.omega0 , packet1.omegadot , packet1.w , packet1.inc , packet1.inc_dot , packet1.af0 , packet1.af1 , packet1.af2 , packet1.toe_tow , packet1.toe_wn , packet1.toc_tow , packet1.toc_wn , packet1.valid , packet1.healthy , packet1.sid , packet1.iode , packet1.iodc , packet1.reserved );
    mavlink_msg_piksi_msg_ephemeris_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("PIKSI_MSG_EPHEMERIS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS) != NULL);
#endif
}

static void mavlink_test_piksi_restart(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_PIKSI_RESTART >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_piksi_restart_t packet_in = {
        5
    };
    mavlink_piksi_restart_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.none = packet_in.none;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_PIKSI_RESTART_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_PIKSI_RESTART_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_piksi_restart_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_piksi_restart_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_piksi_restart_pack(system_id, component_id, &msg , packet1.none );
    mavlink_msg_piksi_restart_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_piksi_restart_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.none );
    mavlink_msg_piksi_restart_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_piksi_restart_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_piksi_restart_send(MAVLINK_COMM_1 , packet1.none );
    mavlink_msg_piksi_restart_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("PIKSI_RESTART") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_PIKSI_RESTART) != NULL);
#endif
}

static void mavlink_test_anv_msg_regulator_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_MSG_REGULATOR_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_msg_regulator_status_t packet_in = {
        17235,17339,17443,17547,17651,163
    };
    mavlink_anv_msg_regulator_status_t packet1, packet2;
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
           memset(MAVLINK_MSG_ID_ANV_MSG_REGULATOR_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_MSG_REGULATOR_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_regulator_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_msg_regulator_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_regulator_status_pack(system_id, component_id, &msg , packet1.id , packet1.voltage , packet1.current , packet1.temperature , packet1.max_rated_current , packet1.consumed_power );
    mavlink_msg_anv_msg_regulator_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_regulator_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.id , packet1.voltage , packet1.current , packet1.temperature , packet1.max_rated_current , packet1.consumed_power );
    mavlink_msg_anv_msg_regulator_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_msg_regulator_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_regulator_status_send(MAVLINK_COMM_1 , packet1.id , packet1.voltage , packet1.current , packet1.temperature , packet1.max_rated_current , packet1.consumed_power );
    mavlink_msg_anv_msg_regulator_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_MSG_REGULATOR_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_MSG_REGULATOR_STATUS) != NULL);
#endif
}

static void mavlink_test_anv_msg_buffer_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_msg_buffer_status_t packet_in = {
        17235,17339,17443,17547,29
    };
    mavlink_anv_msg_buffer_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.buffer_type = packet_in.buffer_type;
        packet1.min_space = packet_in.min_space;
        packet1.max_space = packet_in.max_space;
        packet1.avg_space = packet_in.avg_space;
        packet1.id = packet_in.id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_buffer_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_msg_buffer_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_buffer_status_pack(system_id, component_id, &msg , packet1.id , packet1.buffer_type , packet1.min_space , packet1.max_space , packet1.avg_space );
    mavlink_msg_anv_msg_buffer_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_buffer_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.id , packet1.buffer_type , packet1.min_space , packet1.max_space , packet1.avg_space );
    mavlink_msg_anv_msg_buffer_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_msg_buffer_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_buffer_status_send(MAVLINK_COMM_1 , packet1.id , packet1.buffer_type , packet1.min_space , packet1.max_space , packet1.avg_space );
    mavlink_msg_anv_msg_buffer_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_MSG_BUFFER_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS) != NULL);
#endif
}

static void mavlink_test_anv_msg_gsib_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_msg_gsib_data_t packet_in = {
        { 963497464, 963497465, 963497466, 963497467, 963497468, 963497469, 963497470, 963497471, 963497472, 963497473, 963497474 },963499752
    };
    mavlink_anv_msg_gsib_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dig_channel = packet_in.dig_channel;
        
        mav_array_memcpy(packet1.an_channel, packet_in.an_channel, sizeof(uint32_t)*11);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_gsib_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_msg_gsib_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_gsib_data_pack(system_id, component_id, &msg , packet1.an_channel , packet1.dig_channel );
    mavlink_msg_anv_msg_gsib_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_gsib_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.an_channel , packet1.dig_channel );
    mavlink_msg_anv_msg_gsib_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_msg_gsib_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_gsib_data_send(MAVLINK_COMM_1 , packet1.an_channel , packet1.dig_channel );
    mavlink_msg_anv_msg_gsib_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_MSG_GSIB_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA) != NULL);
#endif
}

static void mavlink_test_anv_msg_sbus_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_MSG_SBUS_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_msg_sbus_data_t packet_in = {
        { 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 }
    };
    mavlink_anv_msg_sbus_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.sbus_data, packet_in.sbus_data, sizeof(uint8_t)*25);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_MSG_SBUS_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_MSG_SBUS_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_sbus_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_msg_sbus_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_sbus_data_pack(system_id, component_id, &msg , packet1.sbus_data );
    mavlink_msg_anv_msg_sbus_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_sbus_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.sbus_data );
    mavlink_msg_anv_msg_sbus_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_msg_sbus_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_sbus_data_send(MAVLINK_COMM_1 , packet1.sbus_data );
    mavlink_msg_anv_msg_sbus_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_MSG_SBUS_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_MSG_SBUS_DATA) != NULL);
#endif
}

static void mavlink_test_anv_msg_radio_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_MSG_RADIO_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_msg_radio_data_t packet_in = {
        93372036854775807ULL,29,96,{ 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187 }
    };
    mavlink_anv_msg_radio_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        
        mav_array_memcpy(packet1.sbus_data, packet_in.sbus_data, sizeof(uint8_t)*25);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_MSG_RADIO_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_MSG_RADIO_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_radio_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_msg_radio_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_radio_data_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.sbus_data , packet1.timestamp );
    mavlink_msg_anv_msg_radio_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_radio_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.sbus_data , packet1.timestamp );
    mavlink_msg_anv_msg_radio_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_msg_radio_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_radio_data_send(MAVLINK_COMM_1 , packet1.target_system , packet1.target_component , packet1.sbus_data , packet1.timestamp );
    mavlink_msg_anv_msg_radio_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_MSG_RADIO_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_MSG_RADIO_DATA) != NULL);
#endif
}

static void mavlink_test_anv_msg_firmware_information(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_msg_firmware_information_t packet_in = {
        963497464
    };
    mavlink_anv_msg_firmware_information_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.firmware = packet_in.firmware;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_firmware_information_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_msg_firmware_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_firmware_information_pack(system_id, component_id, &msg , packet1.firmware );
    mavlink_msg_anv_msg_firmware_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_firmware_information_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.firmware );
    mavlink_msg_anv_msg_firmware_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_msg_firmware_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_firmware_information_send(MAVLINK_COMM_1 , packet1.firmware );
    mavlink_msg_anv_msg_firmware_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_MSG_FIRMWARE_INFORMATION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION) != NULL);
#endif
}

static void mavlink_test_anv_msg_gscb_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_MSG_GSCB_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_msg_gscb_data_t packet_in = {
        5,72,139,206,17,84
    };
    mavlink_anv_msg_gscb_data_t packet1, packet2;
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
           memset(MAVLINK_MSG_ID_ANV_MSG_GSCB_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_MSG_GSCB_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_gscb_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_msg_gscb_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_gscb_data_pack(system_id, component_id, &msg , packet1.active_profile , packet1.battery_1_enabled , packet1.battery_2_enabled , packet1.external_power_enabled , packet1.tray_fan_enabled , packet1.electronics_fan_enabled );
    mavlink_msg_anv_msg_gscb_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_gscb_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.active_profile , packet1.battery_1_enabled , packet1.battery_2_enabled , packet1.external_power_enabled , packet1.tray_fan_enabled , packet1.electronics_fan_enabled );
    mavlink_msg_anv_msg_gscb_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_msg_gscb_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_gscb_data_send(MAVLINK_COMM_1 , packet1.active_profile , packet1.battery_1_enabled , packet1.battery_2_enabled , packet1.external_power_enabled , packet1.tray_fan_enabled , packet1.electronics_fan_enabled );
    mavlink_msg_anv_msg_gscb_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_MSG_GSCB_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_MSG_GSCB_DATA) != NULL);
#endif
}

static void mavlink_test_anv_msg_latency_report(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_MSG_LATENCY_REPORT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_msg_latency_report_t packet_in = {
        93372036854775807ULL,963497880
    };
    mavlink_anv_msg_latency_report_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.latency = packet_in.latency;
        packet1.seq = packet_in.seq;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_MSG_LATENCY_REPORT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_MSG_LATENCY_REPORT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_latency_report_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_msg_latency_report_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_latency_report_pack(system_id, component_id, &msg , packet1.latency , packet1.seq );
    mavlink_msg_anv_msg_latency_report_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_latency_report_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.latency , packet1.seq );
    mavlink_msg_anv_msg_latency_report_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_msg_latency_report_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_latency_report_send(MAVLINK_COMM_1 , packet1.latency , packet1.seq );
    mavlink_msg_anv_msg_latency_report_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_MSG_LATENCY_REPORT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_MSG_LATENCY_REPORT) != NULL);
#endif
}

static void mavlink_test_anv_msg_smart_port_poll_packet(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_MSG_SMART_PORT_POLL_PACKET >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_msg_smart_port_poll_packet_t packet_in = {
        { 5, 6 }
    };
    mavlink_anv_msg_smart_port_poll_packet_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.smart_port_poll_packet, packet_in.smart_port_poll_packet, sizeof(uint8_t)*2);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_MSG_SMART_PORT_POLL_PACKET_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_MSG_SMART_PORT_POLL_PACKET_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_smart_port_poll_packet_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_msg_smart_port_poll_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_smart_port_poll_packet_pack(system_id, component_id, &msg , packet1.smart_port_poll_packet );
    mavlink_msg_anv_msg_smart_port_poll_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_smart_port_poll_packet_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.smart_port_poll_packet );
    mavlink_msg_anv_msg_smart_port_poll_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_msg_smart_port_poll_packet_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_smart_port_poll_packet_send(MAVLINK_COMM_1 , packet1.smart_port_poll_packet );
    mavlink_msg_anv_msg_smart_port_poll_packet_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_MSG_SMART_PORT_POLL_PACKET") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_MSG_SMART_PORT_POLL_PACKET) != NULL);
#endif
}

static void mavlink_test_anv_msg_gs_ctrl_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_MSG_GS_CTRL_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_msg_gs_ctrl_data_t packet_in = {
        { 963497464, 963497465, 963497466, 963497467, 963497468, 963497469, 963497470, 963497471, 963497472, 963497473, 963497474 },963499752,149
    };
    mavlink_anv_msg_gs_ctrl_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dig_channel = packet_in.dig_channel;
        packet1.controller_id = packet_in.controller_id;
        
        mav_array_memcpy(packet1.an_channel, packet_in.an_channel, sizeof(uint32_t)*11);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_MSG_GS_CTRL_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_MSG_GS_CTRL_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_gs_ctrl_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_msg_gs_ctrl_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_gs_ctrl_data_pack(system_id, component_id, &msg , packet1.controller_id , packet1.an_channel , packet1.dig_channel );
    mavlink_msg_anv_msg_gs_ctrl_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_gs_ctrl_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.controller_id , packet1.an_channel , packet1.dig_channel );
    mavlink_msg_anv_msg_gs_ctrl_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_msg_gs_ctrl_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_gs_ctrl_data_send(MAVLINK_COMM_1 , packet1.controller_id , packet1.an_channel , packet1.dig_channel );
    mavlink_msg_anv_msg_gs_ctrl_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_MSG_GS_CTRL_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_MSG_GS_CTRL_DATA) != NULL);
#endif
}

static void mavlink_test_anv_msg_gsmc_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_MSG_GSMC_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_msg_gsmc_data_t packet_in = {
        "ABCDEFGHIJKLMNO"
    };
    mavlink_anv_msg_gsmc_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.gsmc_ip, packet_in.gsmc_ip, sizeof(char)*16);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_MSG_GSMC_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_MSG_GSMC_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_gsmc_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_msg_gsmc_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_gsmc_data_pack(system_id, component_id, &msg , packet1.gsmc_ip );
    mavlink_msg_anv_msg_gsmc_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_gsmc_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.gsmc_ip );
    mavlink_msg_anv_msg_gsmc_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_msg_gsmc_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_gsmc_data_send(MAVLINK_COMM_1 , packet1.gsmc_ip );
    mavlink_msg_anv_msg_gsmc_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_MSG_GSMC_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_MSG_GSMC_DATA) != NULL);
#endif
}

static void mavlink_test_anv_msg_sysid(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_MSG_SYSID >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_msg_sysid_t packet_in = {
        17235,139
    };
    mavlink_anv_msg_sysid_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.serial_number = packet_in.serial_number;
        packet1.sysid = packet_in.sysid;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_MSG_SYSID_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_MSG_SYSID_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_sysid_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_msg_sysid_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_sysid_pack(system_id, component_id, &msg , packet1.serial_number , packet1.sysid );
    mavlink_msg_anv_msg_sysid_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_sysid_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.serial_number , packet1.sysid );
    mavlink_msg_anv_msg_sysid_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_msg_sysid_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_sysid_send(MAVLINK_COMM_1 , packet1.serial_number , packet1.sysid );
    mavlink_msg_anv_msg_sysid_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_MSG_SYSID") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_MSG_SYSID) != NULL);
#endif
}

static void mavlink_test_anv_msg_spray_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ANV_MSG_SPRAY_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_anv_msg_spray_status_t packet_in = {
        123.0,179.0,235.0,291.0,18899,19003,19107,247
    };
    mavlink_anv_msg_spray_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.total_sprayed_volume = packet_in.total_sprayed_volume;
        packet1.armed_sprayed_volume = packet_in.armed_sprayed_volume;
        packet1.last_tree_volume = packet_in.last_tree_volume;
        packet1.spray_remaining = packet_in.spray_remaining;
        packet1.measured_flowrate = packet_in.measured_flowrate;
        packet1.desired_flowrate = packet_in.desired_flowrate;
        packet1.pressure = packet_in.pressure;
        packet1.error = packet_in.error;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ANV_MSG_SPRAY_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ANV_MSG_SPRAY_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_spray_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_anv_msg_spray_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_spray_status_pack(system_id, component_id, &msg , packet1.measured_flowrate , packet1.desired_flowrate , packet1.total_sprayed_volume , packet1.armed_sprayed_volume , packet1.last_tree_volume , packet1.spray_remaining , packet1.pressure , packet1.error );
    mavlink_msg_anv_msg_spray_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_spray_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.measured_flowrate , packet1.desired_flowrate , packet1.total_sprayed_volume , packet1.armed_sprayed_volume , packet1.last_tree_volume , packet1.spray_remaining , packet1.pressure , packet1.error );
    mavlink_msg_anv_msg_spray_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_anv_msg_spray_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_anv_msg_spray_status_send(MAVLINK_COMM_1 , packet1.measured_flowrate , packet1.desired_flowrate , packet1.total_sprayed_volume , packet1.armed_sprayed_volume , packet1.last_tree_volume , packet1.spray_remaining , packet1.pressure , packet1.error );
    mavlink_msg_anv_msg_spray_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ANV_MSG_SPRAY_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ANV_MSG_SPRAY_STATUS) != NULL);
#endif
}

static void mavlink_test_aeronavics(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_piksi_msg_obs(system_id, component_id, last_msg);
    mavlink_test_piksi_msg_base_pos(system_id, component_id, last_msg);
    mavlink_test_piksi_msg_ephemeris(system_id, component_id, last_msg);
    mavlink_test_piksi_restart(system_id, component_id, last_msg);
    mavlink_test_anv_msg_regulator_status(system_id, component_id, last_msg);
    mavlink_test_anv_msg_buffer_status(system_id, component_id, last_msg);
    mavlink_test_anv_msg_gsib_data(system_id, component_id, last_msg);
    mavlink_test_anv_msg_sbus_data(system_id, component_id, last_msg);
    mavlink_test_anv_msg_radio_data(system_id, component_id, last_msg);
    mavlink_test_anv_msg_firmware_information(system_id, component_id, last_msg);
    mavlink_test_anv_msg_gscb_data(system_id, component_id, last_msg);
    mavlink_test_anv_msg_latency_report(system_id, component_id, last_msg);
    mavlink_test_anv_msg_smart_port_poll_packet(system_id, component_id, last_msg);
    mavlink_test_anv_msg_gs_ctrl_data(system_id, component_id, last_msg);
    mavlink_test_anv_msg_gsmc_data(system_id, component_id, last_msg);
    mavlink_test_anv_msg_sysid(system_id, component_id, last_msg);
    mavlink_test_anv_msg_spray_status(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // AERONAVICS_TESTSUITE_H
