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

static void mavlink_test_aeronavics(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_piksi_msg_base_pos(system_id, component_id, last_msg);
    mavlink_test_piksi_msg_ephemeris(system_id, component_id, last_msg);
    mavlink_test_piksi_restart(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // AERONAVICS_TESTSUITE_H
