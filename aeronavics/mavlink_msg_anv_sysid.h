#pragma once
// MESSAGE ANV_SYSID PACKING

#define MAVLINK_MSG_ID_ANV_SYSID 5016


typedef struct __mavlink_anv_sysid_t {
 uint16_t serial_number; /*<  AC serial number*/
 uint8_t sysid; /*<  AC sysid*/
} mavlink_anv_sysid_t;

#define MAVLINK_MSG_ID_ANV_SYSID_LEN 3
#define MAVLINK_MSG_ID_ANV_SYSID_MIN_LEN 3
#define MAVLINK_MSG_ID_5016_LEN 3
#define MAVLINK_MSG_ID_5016_MIN_LEN 3

#define MAVLINK_MSG_ID_ANV_SYSID_CRC 65
#define MAVLINK_MSG_ID_5016_CRC 65



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ANV_SYSID { \
    5016, \
    "ANV_SYSID", \
    2, \
    {  { "serial_number", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_anv_sysid_t, serial_number) }, \
         { "sysid", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_anv_sysid_t, sysid) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ANV_SYSID { \
    "ANV_SYSID", \
    2, \
    {  { "serial_number", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_anv_sysid_t, serial_number) }, \
         { "sysid", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_anv_sysid_t, sysid) }, \
         } \
}
#endif

/**
 * @brief Pack a anv_sysid message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param serial_number  AC serial number
 * @param sysid  AC sysid
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_sysid_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t serial_number, uint8_t sysid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_SYSID_LEN];
    _mav_put_uint16_t(buf, 0, serial_number);
    _mav_put_uint8_t(buf, 2, sysid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_SYSID_LEN);
#else
    mavlink_anv_sysid_t packet;
    packet.serial_number = serial_number;
    packet.sysid = sysid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_SYSID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_SYSID;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ANV_SYSID_MIN_LEN, MAVLINK_MSG_ID_ANV_SYSID_LEN, MAVLINK_MSG_ID_ANV_SYSID_CRC);
}

/**
 * @brief Pack a anv_sysid message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param serial_number  AC serial number
 * @param sysid  AC sysid
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_sysid_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t serial_number, uint8_t sysid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_SYSID_LEN];
    _mav_put_uint16_t(buf, 0, serial_number);
    _mav_put_uint8_t(buf, 2, sysid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_SYSID_LEN);
#else
    mavlink_anv_sysid_t packet;
    packet.serial_number = serial_number;
    packet.sysid = sysid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_SYSID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_SYSID;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ANV_SYSID_MIN_LEN, MAVLINK_MSG_ID_ANV_SYSID_LEN, MAVLINK_MSG_ID_ANV_SYSID_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ANV_SYSID_MIN_LEN, MAVLINK_MSG_ID_ANV_SYSID_LEN);
#endif
}

/**
 * @brief Pack a anv_sysid message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param serial_number  AC serial number
 * @param sysid  AC sysid
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_sysid_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t serial_number,uint8_t sysid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_SYSID_LEN];
    _mav_put_uint16_t(buf, 0, serial_number);
    _mav_put_uint8_t(buf, 2, sysid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_SYSID_LEN);
#else
    mavlink_anv_sysid_t packet;
    packet.serial_number = serial_number;
    packet.sysid = sysid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_SYSID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_SYSID;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ANV_SYSID_MIN_LEN, MAVLINK_MSG_ID_ANV_SYSID_LEN, MAVLINK_MSG_ID_ANV_SYSID_CRC);
}

/**
 * @brief Encode a anv_sysid struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param anv_sysid C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_sysid_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_anv_sysid_t* anv_sysid)
{
    return mavlink_msg_anv_sysid_pack(system_id, component_id, msg, anv_sysid->serial_number, anv_sysid->sysid);
}

/**
 * @brief Encode a anv_sysid struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param anv_sysid C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_sysid_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_anv_sysid_t* anv_sysid)
{
    return mavlink_msg_anv_sysid_pack_chan(system_id, component_id, chan, msg, anv_sysid->serial_number, anv_sysid->sysid);
}

/**
 * @brief Encode a anv_sysid struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param anv_sysid C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_sysid_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_anv_sysid_t* anv_sysid)
{
    return mavlink_msg_anv_sysid_pack_status(system_id, component_id, _status, msg,  anv_sysid->serial_number, anv_sysid->sysid);
}

/**
 * @brief Send a anv_sysid message
 * @param chan MAVLink channel to send the message
 *
 * @param serial_number  AC serial number
 * @param sysid  AC sysid
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_anv_sysid_send(mavlink_channel_t chan, uint16_t serial_number, uint8_t sysid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_SYSID_LEN];
    _mav_put_uint16_t(buf, 0, serial_number);
    _mav_put_uint8_t(buf, 2, sysid);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SYSID, buf, MAVLINK_MSG_ID_ANV_SYSID_MIN_LEN, MAVLINK_MSG_ID_ANV_SYSID_LEN, MAVLINK_MSG_ID_ANV_SYSID_CRC);
#else
    mavlink_anv_sysid_t packet;
    packet.serial_number = serial_number;
    packet.sysid = sysid;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SYSID, (const char *)&packet, MAVLINK_MSG_ID_ANV_SYSID_MIN_LEN, MAVLINK_MSG_ID_ANV_SYSID_LEN, MAVLINK_MSG_ID_ANV_SYSID_CRC);
#endif
}

/**
 * @brief Send a anv_sysid message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_anv_sysid_send_struct(mavlink_channel_t chan, const mavlink_anv_sysid_t* anv_sysid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_sysid_send(chan, anv_sysid->serial_number, anv_sysid->sysid);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SYSID, (const char *)anv_sysid, MAVLINK_MSG_ID_ANV_SYSID_MIN_LEN, MAVLINK_MSG_ID_ANV_SYSID_LEN, MAVLINK_MSG_ID_ANV_SYSID_CRC);
#endif
}

#if MAVLINK_MSG_ID_ANV_SYSID_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_anv_sysid_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t serial_number, uint8_t sysid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, serial_number);
    _mav_put_uint8_t(buf, 2, sysid);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SYSID, buf, MAVLINK_MSG_ID_ANV_SYSID_MIN_LEN, MAVLINK_MSG_ID_ANV_SYSID_LEN, MAVLINK_MSG_ID_ANV_SYSID_CRC);
#else
    mavlink_anv_sysid_t *packet = (mavlink_anv_sysid_t *)msgbuf;
    packet->serial_number = serial_number;
    packet->sysid = sysid;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SYSID, (const char *)packet, MAVLINK_MSG_ID_ANV_SYSID_MIN_LEN, MAVLINK_MSG_ID_ANV_SYSID_LEN, MAVLINK_MSG_ID_ANV_SYSID_CRC);
#endif
}
#endif

#endif

// MESSAGE ANV_SYSID UNPACKING


/**
 * @brief Get field serial_number from anv_sysid message
 *
 * @return  AC serial number
 */
static inline uint16_t mavlink_msg_anv_sysid_get_serial_number(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field sysid from anv_sysid message
 *
 * @return  AC sysid
 */
static inline uint8_t mavlink_msg_anv_sysid_get_sysid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a anv_sysid message into a struct
 *
 * @param msg The message to decode
 * @param anv_sysid C-struct to decode the message contents into
 */
static inline void mavlink_msg_anv_sysid_decode(const mavlink_message_t* msg, mavlink_anv_sysid_t* anv_sysid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    anv_sysid->serial_number = mavlink_msg_anv_sysid_get_serial_number(msg);
    anv_sysid->sysid = mavlink_msg_anv_sysid_get_sysid(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ANV_SYSID_LEN? msg->len : MAVLINK_MSG_ID_ANV_SYSID_LEN;
        memset(anv_sysid, 0, MAVLINK_MSG_ID_ANV_SYSID_LEN);
    memcpy(anv_sysid, _MAV_PAYLOAD(msg), len);
#endif
}
