#pragma once
// MESSAGE PIKSI_MSG_OBS PACKING

#define MAVLINK_MSG_ID_PIKSI_MSG_OBS 1950


typedef struct __mavlink_piksi_msg_obs_t {
 uint32_t tow; /*<  Milliseconds since start of GPS week*/
 uint32_t P[3]; /*<  Pseudorange observation*/
 int32_t L_i[3]; /*<  Carrier phase whole cycles*/
 uint32_t sid[3]; /*<  PRN-1 identifier of the satellite signal*/
 uint16_t week; /*<  GPS week number*/
 uint16_t lock[3]; /*<  Lock indicator. This changes whenever a satellite signal has lost and regained lock, indicating the carrier phase ambiguity may have changed*/
 uint8_t n_observations; /*<  Total number of observations in this packet (Between 0 and 3)*/
 uint8_t n_packets; /*<  Total number of observation packets. First nibble is the number of packets in the sequence (n). Second nibble is the zero-indexed counter (0 to n-1)*/
 uint8_t L_f[3]; /*<  Carrier phase fractional part*/
 uint8_t cn0[3]; /*<  Carrier-to-Noise Density*/
} mavlink_piksi_msg_obs_t;

#define MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN 56
#define MAVLINK_MSG_ID_PIKSI_MSG_OBS_MIN_LEN 56
#define MAVLINK_MSG_ID_1950_LEN 56
#define MAVLINK_MSG_ID_1950_MIN_LEN 56

#define MAVLINK_MSG_ID_PIKSI_MSG_OBS_CRC 144
#define MAVLINK_MSG_ID_1950_CRC 144

#define MAVLINK_MSG_PIKSI_MSG_OBS_FIELD_P_LEN 3
#define MAVLINK_MSG_PIKSI_MSG_OBS_FIELD_L_I_LEN 3
#define MAVLINK_MSG_PIKSI_MSG_OBS_FIELD_SID_LEN 3
#define MAVLINK_MSG_PIKSI_MSG_OBS_FIELD_LOCK_LEN 3
#define MAVLINK_MSG_PIKSI_MSG_OBS_FIELD_L_F_LEN 3
#define MAVLINK_MSG_PIKSI_MSG_OBS_FIELD_CN0_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PIKSI_MSG_OBS { \
    1950, \
    "PIKSI_MSG_OBS", \
    10, \
    {  { "n_observations", NULL, MAVLINK_TYPE_UINT8_T, 0, 48, offsetof(mavlink_piksi_msg_obs_t, n_observations) }, \
         { "tow", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_piksi_msg_obs_t, tow) }, \
         { "week", NULL, MAVLINK_TYPE_UINT16_T, 0, 40, offsetof(mavlink_piksi_msg_obs_t, week) }, \
         { "n_packets", NULL, MAVLINK_TYPE_UINT8_T, 0, 49, offsetof(mavlink_piksi_msg_obs_t, n_packets) }, \
         { "P", NULL, MAVLINK_TYPE_UINT32_T, 3, 4, offsetof(mavlink_piksi_msg_obs_t, P) }, \
         { "L_i", NULL, MAVLINK_TYPE_INT32_T, 3, 16, offsetof(mavlink_piksi_msg_obs_t, L_i) }, \
         { "L_f", NULL, MAVLINK_TYPE_UINT8_T, 3, 50, offsetof(mavlink_piksi_msg_obs_t, L_f) }, \
         { "cn0", NULL, MAVLINK_TYPE_UINT8_T, 3, 53, offsetof(mavlink_piksi_msg_obs_t, cn0) }, \
         { "lock", NULL, MAVLINK_TYPE_UINT16_T, 3, 42, offsetof(mavlink_piksi_msg_obs_t, lock) }, \
         { "sid", NULL, MAVLINK_TYPE_UINT32_T, 3, 28, offsetof(mavlink_piksi_msg_obs_t, sid) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PIKSI_MSG_OBS { \
    "PIKSI_MSG_OBS", \
    10, \
    {  { "n_observations", NULL, MAVLINK_TYPE_UINT8_T, 0, 48, offsetof(mavlink_piksi_msg_obs_t, n_observations) }, \
         { "tow", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_piksi_msg_obs_t, tow) }, \
         { "week", NULL, MAVLINK_TYPE_UINT16_T, 0, 40, offsetof(mavlink_piksi_msg_obs_t, week) }, \
         { "n_packets", NULL, MAVLINK_TYPE_UINT8_T, 0, 49, offsetof(mavlink_piksi_msg_obs_t, n_packets) }, \
         { "P", NULL, MAVLINK_TYPE_UINT32_T, 3, 4, offsetof(mavlink_piksi_msg_obs_t, P) }, \
         { "L_i", NULL, MAVLINK_TYPE_INT32_T, 3, 16, offsetof(mavlink_piksi_msg_obs_t, L_i) }, \
         { "L_f", NULL, MAVLINK_TYPE_UINT8_T, 3, 50, offsetof(mavlink_piksi_msg_obs_t, L_f) }, \
         { "cn0", NULL, MAVLINK_TYPE_UINT8_T, 3, 53, offsetof(mavlink_piksi_msg_obs_t, cn0) }, \
         { "lock", NULL, MAVLINK_TYPE_UINT16_T, 3, 42, offsetof(mavlink_piksi_msg_obs_t, lock) }, \
         { "sid", NULL, MAVLINK_TYPE_UINT32_T, 3, 28, offsetof(mavlink_piksi_msg_obs_t, sid) }, \
         } \
}
#endif

/**
 * @brief Pack a piksi_msg_obs message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param n_observations  Total number of observations in this packet (Between 0 and 3)
 * @param tow  Milliseconds since start of GPS week
 * @param week  GPS week number
 * @param n_packets  Total number of observation packets. First nibble is the number of packets in the sequence (n). Second nibble is the zero-indexed counter (0 to n-1)
 * @param P  Pseudorange observation
 * @param L_i  Carrier phase whole cycles
 * @param L_f  Carrier phase fractional part
 * @param cn0  Carrier-to-Noise Density
 * @param lock  Lock indicator. This changes whenever a satellite signal has lost and regained lock, indicating the carrier phase ambiguity may have changed
 * @param sid  PRN-1 identifier of the satellite signal
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_piksi_msg_obs_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t n_observations, uint32_t tow, uint16_t week, uint8_t n_packets, const uint32_t *P, const int32_t *L_i, const uint8_t *L_f, const uint8_t *cn0, const uint16_t *lock, const uint32_t *sid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN];
    _mav_put_uint32_t(buf, 0, tow);
    _mav_put_uint16_t(buf, 40, week);
    _mav_put_uint8_t(buf, 48, n_observations);
    _mav_put_uint8_t(buf, 49, n_packets);
    _mav_put_uint32_t_array(buf, 4, P, 3);
    _mav_put_int32_t_array(buf, 16, L_i, 3);
    _mav_put_uint32_t_array(buf, 28, sid, 3);
    _mav_put_uint16_t_array(buf, 42, lock, 3);
    _mav_put_uint8_t_array(buf, 50, L_f, 3);
    _mav_put_uint8_t_array(buf, 53, cn0, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN);
#else
    mavlink_piksi_msg_obs_t packet;
    packet.tow = tow;
    packet.week = week;
    packet.n_observations = n_observations;
    packet.n_packets = n_packets;
    mav_array_memcpy(packet.P, P, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.L_i, L_i, sizeof(int32_t)*3);
    mav_array_memcpy(packet.sid, sid, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.lock, lock, sizeof(uint16_t)*3);
    mav_array_memcpy(packet.L_f, L_f, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.cn0, cn0, sizeof(uint8_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PIKSI_MSG_OBS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PIKSI_MSG_OBS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_OBS_CRC);
}

/**
 * @brief Pack a piksi_msg_obs message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param n_observations  Total number of observations in this packet (Between 0 and 3)
 * @param tow  Milliseconds since start of GPS week
 * @param week  GPS week number
 * @param n_packets  Total number of observation packets. First nibble is the number of packets in the sequence (n). Second nibble is the zero-indexed counter (0 to n-1)
 * @param P  Pseudorange observation
 * @param L_i  Carrier phase whole cycles
 * @param L_f  Carrier phase fractional part
 * @param cn0  Carrier-to-Noise Density
 * @param lock  Lock indicator. This changes whenever a satellite signal has lost and regained lock, indicating the carrier phase ambiguity may have changed
 * @param sid  PRN-1 identifier of the satellite signal
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_piksi_msg_obs_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t n_observations, uint32_t tow, uint16_t week, uint8_t n_packets, const uint32_t *P, const int32_t *L_i, const uint8_t *L_f, const uint8_t *cn0, const uint16_t *lock, const uint32_t *sid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN];
    _mav_put_uint32_t(buf, 0, tow);
    _mav_put_uint16_t(buf, 40, week);
    _mav_put_uint8_t(buf, 48, n_observations);
    _mav_put_uint8_t(buf, 49, n_packets);
    _mav_put_uint32_t_array(buf, 4, P, 3);
    _mav_put_int32_t_array(buf, 16, L_i, 3);
    _mav_put_uint32_t_array(buf, 28, sid, 3);
    _mav_put_uint16_t_array(buf, 42, lock, 3);
    _mav_put_uint8_t_array(buf, 50, L_f, 3);
    _mav_put_uint8_t_array(buf, 53, cn0, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN);
#else
    mavlink_piksi_msg_obs_t packet;
    packet.tow = tow;
    packet.week = week;
    packet.n_observations = n_observations;
    packet.n_packets = n_packets;
    mav_array_memcpy(packet.P, P, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.L_i, L_i, sizeof(int32_t)*3);
    mav_array_memcpy(packet.sid, sid, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.lock, lock, sizeof(uint16_t)*3);
    mav_array_memcpy(packet.L_f, L_f, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.cn0, cn0, sizeof(uint8_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PIKSI_MSG_OBS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PIKSI_MSG_OBS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_OBS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PIKSI_MSG_OBS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN);
#endif
}

/**
 * @brief Pack a piksi_msg_obs message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param n_observations  Total number of observations in this packet (Between 0 and 3)
 * @param tow  Milliseconds since start of GPS week
 * @param week  GPS week number
 * @param n_packets  Total number of observation packets. First nibble is the number of packets in the sequence (n). Second nibble is the zero-indexed counter (0 to n-1)
 * @param P  Pseudorange observation
 * @param L_i  Carrier phase whole cycles
 * @param L_f  Carrier phase fractional part
 * @param cn0  Carrier-to-Noise Density
 * @param lock  Lock indicator. This changes whenever a satellite signal has lost and regained lock, indicating the carrier phase ambiguity may have changed
 * @param sid  PRN-1 identifier of the satellite signal
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_piksi_msg_obs_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t n_observations,uint32_t tow,uint16_t week,uint8_t n_packets,const uint32_t *P,const int32_t *L_i,const uint8_t *L_f,const uint8_t *cn0,const uint16_t *lock,const uint32_t *sid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN];
    _mav_put_uint32_t(buf, 0, tow);
    _mav_put_uint16_t(buf, 40, week);
    _mav_put_uint8_t(buf, 48, n_observations);
    _mav_put_uint8_t(buf, 49, n_packets);
    _mav_put_uint32_t_array(buf, 4, P, 3);
    _mav_put_int32_t_array(buf, 16, L_i, 3);
    _mav_put_uint32_t_array(buf, 28, sid, 3);
    _mav_put_uint16_t_array(buf, 42, lock, 3);
    _mav_put_uint8_t_array(buf, 50, L_f, 3);
    _mav_put_uint8_t_array(buf, 53, cn0, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN);
#else
    mavlink_piksi_msg_obs_t packet;
    packet.tow = tow;
    packet.week = week;
    packet.n_observations = n_observations;
    packet.n_packets = n_packets;
    mav_array_memcpy(packet.P, P, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.L_i, L_i, sizeof(int32_t)*3);
    mav_array_memcpy(packet.sid, sid, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.lock, lock, sizeof(uint16_t)*3);
    mav_array_memcpy(packet.L_f, L_f, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.cn0, cn0, sizeof(uint8_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PIKSI_MSG_OBS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PIKSI_MSG_OBS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_OBS_CRC);
}

/**
 * @brief Encode a piksi_msg_obs struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param piksi_msg_obs C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_piksi_msg_obs_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_piksi_msg_obs_t* piksi_msg_obs)
{
    return mavlink_msg_piksi_msg_obs_pack(system_id, component_id, msg, piksi_msg_obs->n_observations, piksi_msg_obs->tow, piksi_msg_obs->week, piksi_msg_obs->n_packets, piksi_msg_obs->P, piksi_msg_obs->L_i, piksi_msg_obs->L_f, piksi_msg_obs->cn0, piksi_msg_obs->lock, piksi_msg_obs->sid);
}

/**
 * @brief Encode a piksi_msg_obs struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param piksi_msg_obs C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_piksi_msg_obs_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_piksi_msg_obs_t* piksi_msg_obs)
{
    return mavlink_msg_piksi_msg_obs_pack_chan(system_id, component_id, chan, msg, piksi_msg_obs->n_observations, piksi_msg_obs->tow, piksi_msg_obs->week, piksi_msg_obs->n_packets, piksi_msg_obs->P, piksi_msg_obs->L_i, piksi_msg_obs->L_f, piksi_msg_obs->cn0, piksi_msg_obs->lock, piksi_msg_obs->sid);
}

/**
 * @brief Encode a piksi_msg_obs struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param piksi_msg_obs C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_piksi_msg_obs_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_piksi_msg_obs_t* piksi_msg_obs)
{
    return mavlink_msg_piksi_msg_obs_pack_status(system_id, component_id, _status, msg,  piksi_msg_obs->n_observations, piksi_msg_obs->tow, piksi_msg_obs->week, piksi_msg_obs->n_packets, piksi_msg_obs->P, piksi_msg_obs->L_i, piksi_msg_obs->L_f, piksi_msg_obs->cn0, piksi_msg_obs->lock, piksi_msg_obs->sid);
}

/**
 * @brief Send a piksi_msg_obs message
 * @param chan MAVLink channel to send the message
 *
 * @param n_observations  Total number of observations in this packet (Between 0 and 3)
 * @param tow  Milliseconds since start of GPS week
 * @param week  GPS week number
 * @param n_packets  Total number of observation packets. First nibble is the number of packets in the sequence (n). Second nibble is the zero-indexed counter (0 to n-1)
 * @param P  Pseudorange observation
 * @param L_i  Carrier phase whole cycles
 * @param L_f  Carrier phase fractional part
 * @param cn0  Carrier-to-Noise Density
 * @param lock  Lock indicator. This changes whenever a satellite signal has lost and regained lock, indicating the carrier phase ambiguity may have changed
 * @param sid  PRN-1 identifier of the satellite signal
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_piksi_msg_obs_send(mavlink_channel_t chan, uint8_t n_observations, uint32_t tow, uint16_t week, uint8_t n_packets, const uint32_t *P, const int32_t *L_i, const uint8_t *L_f, const uint8_t *cn0, const uint16_t *lock, const uint32_t *sid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN];
    _mav_put_uint32_t(buf, 0, tow);
    _mav_put_uint16_t(buf, 40, week);
    _mav_put_uint8_t(buf, 48, n_observations);
    _mav_put_uint8_t(buf, 49, n_packets);
    _mav_put_uint32_t_array(buf, 4, P, 3);
    _mav_put_int32_t_array(buf, 16, L_i, 3);
    _mav_put_uint32_t_array(buf, 28, sid, 3);
    _mav_put_uint16_t_array(buf, 42, lock, 3);
    _mav_put_uint8_t_array(buf, 50, L_f, 3);
    _mav_put_uint8_t_array(buf, 53, cn0, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_MSG_OBS, buf, MAVLINK_MSG_ID_PIKSI_MSG_OBS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_OBS_CRC);
#else
    mavlink_piksi_msg_obs_t packet;
    packet.tow = tow;
    packet.week = week;
    packet.n_observations = n_observations;
    packet.n_packets = n_packets;
    mav_array_memcpy(packet.P, P, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.L_i, L_i, sizeof(int32_t)*3);
    mav_array_memcpy(packet.sid, sid, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.lock, lock, sizeof(uint16_t)*3);
    mav_array_memcpy(packet.L_f, L_f, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.cn0, cn0, sizeof(uint8_t)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_MSG_OBS, (const char *)&packet, MAVLINK_MSG_ID_PIKSI_MSG_OBS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_OBS_CRC);
#endif
}

/**
 * @brief Send a piksi_msg_obs message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_piksi_msg_obs_send_struct(mavlink_channel_t chan, const mavlink_piksi_msg_obs_t* piksi_msg_obs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_piksi_msg_obs_send(chan, piksi_msg_obs->n_observations, piksi_msg_obs->tow, piksi_msg_obs->week, piksi_msg_obs->n_packets, piksi_msg_obs->P, piksi_msg_obs->L_i, piksi_msg_obs->L_f, piksi_msg_obs->cn0, piksi_msg_obs->lock, piksi_msg_obs->sid);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_MSG_OBS, (const char *)piksi_msg_obs, MAVLINK_MSG_ID_PIKSI_MSG_OBS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_OBS_CRC);
#endif
}

#if MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_piksi_msg_obs_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t n_observations, uint32_t tow, uint16_t week, uint8_t n_packets, const uint32_t *P, const int32_t *L_i, const uint8_t *L_f, const uint8_t *cn0, const uint16_t *lock, const uint32_t *sid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, tow);
    _mav_put_uint16_t(buf, 40, week);
    _mav_put_uint8_t(buf, 48, n_observations);
    _mav_put_uint8_t(buf, 49, n_packets);
    _mav_put_uint32_t_array(buf, 4, P, 3);
    _mav_put_int32_t_array(buf, 16, L_i, 3);
    _mav_put_uint32_t_array(buf, 28, sid, 3);
    _mav_put_uint16_t_array(buf, 42, lock, 3);
    _mav_put_uint8_t_array(buf, 50, L_f, 3);
    _mav_put_uint8_t_array(buf, 53, cn0, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_MSG_OBS, buf, MAVLINK_MSG_ID_PIKSI_MSG_OBS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_OBS_CRC);
#else
    mavlink_piksi_msg_obs_t *packet = (mavlink_piksi_msg_obs_t *)msgbuf;
    packet->tow = tow;
    packet->week = week;
    packet->n_observations = n_observations;
    packet->n_packets = n_packets;
    mav_array_memcpy(packet->P, P, sizeof(uint32_t)*3);
    mav_array_memcpy(packet->L_i, L_i, sizeof(int32_t)*3);
    mav_array_memcpy(packet->sid, sid, sizeof(uint32_t)*3);
    mav_array_memcpy(packet->lock, lock, sizeof(uint16_t)*3);
    mav_array_memcpy(packet->L_f, L_f, sizeof(uint8_t)*3);
    mav_array_memcpy(packet->cn0, cn0, sizeof(uint8_t)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_MSG_OBS, (const char *)packet, MAVLINK_MSG_ID_PIKSI_MSG_OBS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_OBS_CRC);
#endif
}
#endif

#endif

// MESSAGE PIKSI_MSG_OBS UNPACKING


/**
 * @brief Get field n_observations from piksi_msg_obs message
 *
 * @return  Total number of observations in this packet (Between 0 and 3)
 */
static inline uint8_t mavlink_msg_piksi_msg_obs_get_n_observations(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  48);
}

/**
 * @brief Get field tow from piksi_msg_obs message
 *
 * @return  Milliseconds since start of GPS week
 */
static inline uint32_t mavlink_msg_piksi_msg_obs_get_tow(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field week from piksi_msg_obs message
 *
 * @return  GPS week number
 */
static inline uint16_t mavlink_msg_piksi_msg_obs_get_week(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  40);
}

/**
 * @brief Get field n_packets from piksi_msg_obs message
 *
 * @return  Total number of observation packets. First nibble is the number of packets in the sequence (n). Second nibble is the zero-indexed counter (0 to n-1)
 */
static inline uint8_t mavlink_msg_piksi_msg_obs_get_n_packets(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  49);
}

/**
 * @brief Get field P from piksi_msg_obs message
 *
 * @return  Pseudorange observation
 */
static inline uint16_t mavlink_msg_piksi_msg_obs_get_P(const mavlink_message_t* msg, uint32_t *P)
{
    return _MAV_RETURN_uint32_t_array(msg, P, 3,  4);
}

/**
 * @brief Get field L_i from piksi_msg_obs message
 *
 * @return  Carrier phase whole cycles
 */
static inline uint16_t mavlink_msg_piksi_msg_obs_get_L_i(const mavlink_message_t* msg, int32_t *L_i)
{
    return _MAV_RETURN_int32_t_array(msg, L_i, 3,  16);
}

/**
 * @brief Get field L_f from piksi_msg_obs message
 *
 * @return  Carrier phase fractional part
 */
static inline uint16_t mavlink_msg_piksi_msg_obs_get_L_f(const mavlink_message_t* msg, uint8_t *L_f)
{
    return _MAV_RETURN_uint8_t_array(msg, L_f, 3,  50);
}

/**
 * @brief Get field cn0 from piksi_msg_obs message
 *
 * @return  Carrier-to-Noise Density
 */
static inline uint16_t mavlink_msg_piksi_msg_obs_get_cn0(const mavlink_message_t* msg, uint8_t *cn0)
{
    return _MAV_RETURN_uint8_t_array(msg, cn0, 3,  53);
}

/**
 * @brief Get field lock from piksi_msg_obs message
 *
 * @return  Lock indicator. This changes whenever a satellite signal has lost and regained lock, indicating the carrier phase ambiguity may have changed
 */
static inline uint16_t mavlink_msg_piksi_msg_obs_get_lock(const mavlink_message_t* msg, uint16_t *lock)
{
    return _MAV_RETURN_uint16_t_array(msg, lock, 3,  42);
}

/**
 * @brief Get field sid from piksi_msg_obs message
 *
 * @return  PRN-1 identifier of the satellite signal
 */
static inline uint16_t mavlink_msg_piksi_msg_obs_get_sid(const mavlink_message_t* msg, uint32_t *sid)
{
    return _MAV_RETURN_uint32_t_array(msg, sid, 3,  28);
}

/**
 * @brief Decode a piksi_msg_obs message into a struct
 *
 * @param msg The message to decode
 * @param piksi_msg_obs C-struct to decode the message contents into
 */
static inline void mavlink_msg_piksi_msg_obs_decode(const mavlink_message_t* msg, mavlink_piksi_msg_obs_t* piksi_msg_obs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    piksi_msg_obs->tow = mavlink_msg_piksi_msg_obs_get_tow(msg);
    mavlink_msg_piksi_msg_obs_get_P(msg, piksi_msg_obs->P);
    mavlink_msg_piksi_msg_obs_get_L_i(msg, piksi_msg_obs->L_i);
    mavlink_msg_piksi_msg_obs_get_sid(msg, piksi_msg_obs->sid);
    piksi_msg_obs->week = mavlink_msg_piksi_msg_obs_get_week(msg);
    mavlink_msg_piksi_msg_obs_get_lock(msg, piksi_msg_obs->lock);
    piksi_msg_obs->n_observations = mavlink_msg_piksi_msg_obs_get_n_observations(msg);
    piksi_msg_obs->n_packets = mavlink_msg_piksi_msg_obs_get_n_packets(msg);
    mavlink_msg_piksi_msg_obs_get_L_f(msg, piksi_msg_obs->L_f);
    mavlink_msg_piksi_msg_obs_get_cn0(msg, piksi_msg_obs->cn0);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN? msg->len : MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN;
        memset(piksi_msg_obs, 0, MAVLINK_MSG_ID_PIKSI_MSG_OBS_LEN);
    memcpy(piksi_msg_obs, _MAV_PAYLOAD(msg), len);
#endif
}
