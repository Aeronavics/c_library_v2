#pragma once
// MESSAGE PIKSI_RESTART PACKING

#define MAVLINK_MSG_ID_PIKSI_RESTART 198


typedef struct __mavlink_piksi_restart_t {
 uint8_t none; /*<  Empty byte to satisfy the MAVLink Generator*/
} mavlink_piksi_restart_t;

#define MAVLINK_MSG_ID_PIKSI_RESTART_LEN 1
#define MAVLINK_MSG_ID_PIKSI_RESTART_MIN_LEN 1
#define MAVLINK_MSG_ID_198_LEN 1
#define MAVLINK_MSG_ID_198_MIN_LEN 1

#define MAVLINK_MSG_ID_PIKSI_RESTART_CRC 181
#define MAVLINK_MSG_ID_198_CRC 181



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PIKSI_RESTART { \
    198, \
    "PIKSI_RESTART", \
    1, \
    {  { "none", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_piksi_restart_t, none) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PIKSI_RESTART { \
    "PIKSI_RESTART", \
    1, \
    {  { "none", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_piksi_restart_t, none) }, \
         } \
}
#endif

/**
 * @brief Pack a piksi_restart message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param none  Empty byte to satisfy the MAVLink Generator
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_piksi_restart_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t none)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIKSI_RESTART_LEN];
    _mav_put_uint8_t(buf, 0, none);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PIKSI_RESTART_LEN);
#else
    mavlink_piksi_restart_t packet;
    packet.none = none;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PIKSI_RESTART_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PIKSI_RESTART;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PIKSI_RESTART_MIN_LEN, MAVLINK_MSG_ID_PIKSI_RESTART_LEN, MAVLINK_MSG_ID_PIKSI_RESTART_CRC);
}

/**
 * @brief Pack a piksi_restart message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param none  Empty byte to satisfy the MAVLink Generator
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_piksi_restart_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t none)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIKSI_RESTART_LEN];
    _mav_put_uint8_t(buf, 0, none);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PIKSI_RESTART_LEN);
#else
    mavlink_piksi_restart_t packet;
    packet.none = none;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PIKSI_RESTART_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PIKSI_RESTART;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PIKSI_RESTART_MIN_LEN, MAVLINK_MSG_ID_PIKSI_RESTART_LEN, MAVLINK_MSG_ID_PIKSI_RESTART_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PIKSI_RESTART_MIN_LEN, MAVLINK_MSG_ID_PIKSI_RESTART_LEN);
#endif
}

/**
 * @brief Pack a piksi_restart message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param none  Empty byte to satisfy the MAVLink Generator
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_piksi_restart_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t none)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIKSI_RESTART_LEN];
    _mav_put_uint8_t(buf, 0, none);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PIKSI_RESTART_LEN);
#else
    mavlink_piksi_restart_t packet;
    packet.none = none;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PIKSI_RESTART_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PIKSI_RESTART;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PIKSI_RESTART_MIN_LEN, MAVLINK_MSG_ID_PIKSI_RESTART_LEN, MAVLINK_MSG_ID_PIKSI_RESTART_CRC);
}

/**
 * @brief Encode a piksi_restart struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param piksi_restart C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_piksi_restart_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_piksi_restart_t* piksi_restart)
{
    return mavlink_msg_piksi_restart_pack(system_id, component_id, msg, piksi_restart->none);
}

/**
 * @brief Encode a piksi_restart struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param piksi_restart C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_piksi_restart_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_piksi_restart_t* piksi_restart)
{
    return mavlink_msg_piksi_restart_pack_chan(system_id, component_id, chan, msg, piksi_restart->none);
}

/**
 * @brief Encode a piksi_restart struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param piksi_restart C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_piksi_restart_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_piksi_restart_t* piksi_restart)
{
    return mavlink_msg_piksi_restart_pack_status(system_id, component_id, _status, msg,  piksi_restart->none);
}

/**
 * @brief Send a piksi_restart message
 * @param chan MAVLink channel to send the message
 *
 * @param none  Empty byte to satisfy the MAVLink Generator
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_piksi_restart_send(mavlink_channel_t chan, uint8_t none)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIKSI_RESTART_LEN];
    _mav_put_uint8_t(buf, 0, none);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_RESTART, buf, MAVLINK_MSG_ID_PIKSI_RESTART_MIN_LEN, MAVLINK_MSG_ID_PIKSI_RESTART_LEN, MAVLINK_MSG_ID_PIKSI_RESTART_CRC);
#else
    mavlink_piksi_restart_t packet;
    packet.none = none;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_RESTART, (const char *)&packet, MAVLINK_MSG_ID_PIKSI_RESTART_MIN_LEN, MAVLINK_MSG_ID_PIKSI_RESTART_LEN, MAVLINK_MSG_ID_PIKSI_RESTART_CRC);
#endif
}

/**
 * @brief Send a piksi_restart message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_piksi_restart_send_struct(mavlink_channel_t chan, const mavlink_piksi_restart_t* piksi_restart)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_piksi_restart_send(chan, piksi_restart->none);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_RESTART, (const char *)piksi_restart, MAVLINK_MSG_ID_PIKSI_RESTART_MIN_LEN, MAVLINK_MSG_ID_PIKSI_RESTART_LEN, MAVLINK_MSG_ID_PIKSI_RESTART_CRC);
#endif
}

#if MAVLINK_MSG_ID_PIKSI_RESTART_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_piksi_restart_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t none)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, none);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_RESTART, buf, MAVLINK_MSG_ID_PIKSI_RESTART_MIN_LEN, MAVLINK_MSG_ID_PIKSI_RESTART_LEN, MAVLINK_MSG_ID_PIKSI_RESTART_CRC);
#else
    mavlink_piksi_restart_t *packet = (mavlink_piksi_restart_t *)msgbuf;
    packet->none = none;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_RESTART, (const char *)packet, MAVLINK_MSG_ID_PIKSI_RESTART_MIN_LEN, MAVLINK_MSG_ID_PIKSI_RESTART_LEN, MAVLINK_MSG_ID_PIKSI_RESTART_CRC);
#endif
}
#endif

#endif

// MESSAGE PIKSI_RESTART UNPACKING


/**
 * @brief Get field none from piksi_restart message
 *
 * @return  Empty byte to satisfy the MAVLink Generator
 */
static inline uint8_t mavlink_msg_piksi_restart_get_none(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a piksi_restart message into a struct
 *
 * @param msg The message to decode
 * @param piksi_restart C-struct to decode the message contents into
 */
static inline void mavlink_msg_piksi_restart_decode(const mavlink_message_t* msg, mavlink_piksi_restart_t* piksi_restart)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    piksi_restart->none = mavlink_msg_piksi_restart_get_none(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PIKSI_RESTART_LEN? msg->len : MAVLINK_MSG_ID_PIKSI_RESTART_LEN;
        memset(piksi_restart, 0, MAVLINK_MSG_ID_PIKSI_RESTART_LEN);
    memcpy(piksi_restart, _MAV_PAYLOAD(msg), len);
#endif
}
