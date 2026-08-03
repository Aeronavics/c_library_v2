#pragma once
// MESSAGE ANV_SBUS_DATA PACKING

#define MAVLINK_MSG_ID_ANV_SBUS_DATA 5003


typedef struct __mavlink_anv_sbus_data_t {
 uint8_t sbus_data[25]; /*<  Raw SBUS data*/
} mavlink_anv_sbus_data_t;

#define MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN 25
#define MAVLINK_MSG_ID_ANV_SBUS_DATA_MIN_LEN 25
#define MAVLINK_MSG_ID_5003_LEN 25
#define MAVLINK_MSG_ID_5003_MIN_LEN 25

#define MAVLINK_MSG_ID_ANV_SBUS_DATA_CRC 94
#define MAVLINK_MSG_ID_5003_CRC 94

#define MAVLINK_MSG_ANV_SBUS_DATA_FIELD_SBUS_DATA_LEN 25

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ANV_SBUS_DATA { \
    5003, \
    "ANV_SBUS_DATA", \
    1, \
    {  { "sbus_data", NULL, MAVLINK_TYPE_UINT8_T, 25, 0, offsetof(mavlink_anv_sbus_data_t, sbus_data) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ANV_SBUS_DATA { \
    "ANV_SBUS_DATA", \
    1, \
    {  { "sbus_data", NULL, MAVLINK_TYPE_UINT8_T, 25, 0, offsetof(mavlink_anv_sbus_data_t, sbus_data) }, \
         } \
}
#endif

/**
 * @brief Pack a anv_sbus_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sbus_data  Raw SBUS data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_sbus_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const uint8_t *sbus_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN];

    _mav_put_uint8_t_array(buf, 0, sbus_data, 25);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN);
#else
    mavlink_anv_sbus_data_t packet;

    mav_array_memcpy(packet.sbus_data, sbus_data, sizeof(uint8_t)*25);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_SBUS_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ANV_SBUS_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN, MAVLINK_MSG_ID_ANV_SBUS_DATA_CRC);
}

/**
 * @brief Pack a anv_sbus_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param sbus_data  Raw SBUS data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_sbus_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const uint8_t *sbus_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN];

    _mav_put_uint8_t_array(buf, 0, sbus_data, 25);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN);
#else
    mavlink_anv_sbus_data_t packet;

    mav_array_memcpy(packet.sbus_data, sbus_data, sizeof(uint8_t)*25);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_SBUS_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ANV_SBUS_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN, MAVLINK_MSG_ID_ANV_SBUS_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ANV_SBUS_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN);
#endif
}

/**
 * @brief Pack a anv_sbus_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sbus_data  Raw SBUS data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_sbus_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const uint8_t *sbus_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN];

    _mav_put_uint8_t_array(buf, 0, sbus_data, 25);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN);
#else
    mavlink_anv_sbus_data_t packet;

    mav_array_memcpy(packet.sbus_data, sbus_data, sizeof(uint8_t)*25);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_SBUS_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ANV_SBUS_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN, MAVLINK_MSG_ID_ANV_SBUS_DATA_CRC);
}

/**
 * @brief Encode a anv_sbus_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param anv_sbus_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_sbus_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_anv_sbus_data_t* anv_sbus_data)
{
    return mavlink_msg_anv_sbus_data_pack(system_id, component_id, msg, anv_sbus_data->sbus_data);
}

/**
 * @brief Encode a anv_sbus_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param anv_sbus_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_sbus_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_anv_sbus_data_t* anv_sbus_data)
{
    return mavlink_msg_anv_sbus_data_pack_chan(system_id, component_id, chan, msg, anv_sbus_data->sbus_data);
}

/**
 * @brief Encode a anv_sbus_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param anv_sbus_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_sbus_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_anv_sbus_data_t* anv_sbus_data)
{
    return mavlink_msg_anv_sbus_data_pack_status(system_id, component_id, _status, msg,  anv_sbus_data->sbus_data);
}

/**
 * @brief Send a anv_sbus_data message
 * @param chan MAVLink channel to send the message
 *
 * @param sbus_data  Raw SBUS data
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_anv_sbus_data_send(mavlink_channel_t chan, const uint8_t *sbus_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN];

    _mav_put_uint8_t_array(buf, 0, sbus_data, 25);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SBUS_DATA, buf, MAVLINK_MSG_ID_ANV_SBUS_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN, MAVLINK_MSG_ID_ANV_SBUS_DATA_CRC);
#else
    mavlink_anv_sbus_data_t packet;

    mav_array_memcpy(packet.sbus_data, sbus_data, sizeof(uint8_t)*25);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SBUS_DATA, (const char *)&packet, MAVLINK_MSG_ID_ANV_SBUS_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN, MAVLINK_MSG_ID_ANV_SBUS_DATA_CRC);
#endif
}

/**
 * @brief Send a anv_sbus_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_anv_sbus_data_send_struct(mavlink_channel_t chan, const mavlink_anv_sbus_data_t* anv_sbus_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_sbus_data_send(chan, anv_sbus_data->sbus_data);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SBUS_DATA, (const char *)anv_sbus_data, MAVLINK_MSG_ID_ANV_SBUS_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN, MAVLINK_MSG_ID_ANV_SBUS_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_anv_sbus_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const uint8_t *sbus_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_uint8_t_array(buf, 0, sbus_data, 25);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SBUS_DATA, buf, MAVLINK_MSG_ID_ANV_SBUS_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN, MAVLINK_MSG_ID_ANV_SBUS_DATA_CRC);
#else
    mavlink_anv_sbus_data_t *packet = (mavlink_anv_sbus_data_t *)msgbuf;

    mav_array_memcpy(packet->sbus_data, sbus_data, sizeof(uint8_t)*25);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SBUS_DATA, (const char *)packet, MAVLINK_MSG_ID_ANV_SBUS_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN, MAVLINK_MSG_ID_ANV_SBUS_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE ANV_SBUS_DATA UNPACKING


/**
 * @brief Get field sbus_data from anv_sbus_data message
 *
 * @return  Raw SBUS data
 */
static inline uint16_t mavlink_msg_anv_sbus_data_get_sbus_data(const mavlink_message_t* msg, uint8_t *sbus_data)
{
    return _MAV_RETURN_uint8_t_array(msg, sbus_data, 25,  0);
}

/**
 * @brief Decode a anv_sbus_data message into a struct
 *
 * @param msg The message to decode
 * @param anv_sbus_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_anv_sbus_data_decode(const mavlink_message_t* msg, mavlink_anv_sbus_data_t* anv_sbus_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_sbus_data_get_sbus_data(msg, anv_sbus_data->sbus_data);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN? msg->len : MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN;
        memset(anv_sbus_data, 0, MAVLINK_MSG_ID_ANV_SBUS_DATA_LEN);
    memcpy(anv_sbus_data, _MAV_PAYLOAD(msg), len);
#endif
}
