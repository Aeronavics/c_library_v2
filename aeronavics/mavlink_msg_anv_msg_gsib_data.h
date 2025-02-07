#pragma once
// MESSAGE ANV_MSG_GSIB_DATA PACKING

#define MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA 5002


typedef struct __mavlink_anv_msg_gsib_data_t {
 uint32_t an_channel[11]; /*<  Analog_channels.*/
 uint32_t dig_channel; /*<  Bit mask of the Digital Switches' state*/
} mavlink_anv_msg_gsib_data_t;

#define MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN 48
#define MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_MIN_LEN 48
#define MAVLINK_MSG_ID_5002_LEN 48
#define MAVLINK_MSG_ID_5002_MIN_LEN 48

#define MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_CRC 246
#define MAVLINK_MSG_ID_5002_CRC 246

#define MAVLINK_MSG_ANV_MSG_GSIB_DATA_FIELD_AN_CHANNEL_LEN 11

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ANV_MSG_GSIB_DATA { \
    5002, \
    "ANV_MSG_GSIB_DATA", \
    2, \
    {  { "an_channel", NULL, MAVLINK_TYPE_UINT32_T, 11, 0, offsetof(mavlink_anv_msg_gsib_data_t, an_channel) }, \
         { "dig_channel", NULL, MAVLINK_TYPE_UINT32_T, 0, 44, offsetof(mavlink_anv_msg_gsib_data_t, dig_channel) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ANV_MSG_GSIB_DATA { \
    "ANV_MSG_GSIB_DATA", \
    2, \
    {  { "an_channel", NULL, MAVLINK_TYPE_UINT32_T, 11, 0, offsetof(mavlink_anv_msg_gsib_data_t, an_channel) }, \
         { "dig_channel", NULL, MAVLINK_TYPE_UINT32_T, 0, 44, offsetof(mavlink_anv_msg_gsib_data_t, dig_channel) }, \
         } \
}
#endif

/**
 * @brief Pack a anv_msg_gsib_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param an_channel  Analog_channels.
 * @param dig_channel  Bit mask of the Digital Switches' state
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_msg_gsib_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const uint32_t *an_channel, uint32_t dig_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN];
    _mav_put_uint32_t(buf, 44, dig_channel);
    _mav_put_uint32_t_array(buf, 0, an_channel, 11);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN);
#else
    mavlink_anv_msg_gsib_data_t packet;
    packet.dig_channel = dig_channel;
    mav_array_memcpy(packet.an_channel, an_channel, sizeof(uint32_t)*11);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_CRC);
}

/**
 * @brief Pack a anv_msg_gsib_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param an_channel  Analog_channels.
 * @param dig_channel  Bit mask of the Digital Switches' state
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_msg_gsib_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const uint32_t *an_channel, uint32_t dig_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN];
    _mav_put_uint32_t(buf, 44, dig_channel);
    _mav_put_uint32_t_array(buf, 0, an_channel, 11);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN);
#else
    mavlink_anv_msg_gsib_data_t packet;
    packet.dig_channel = dig_channel;
    mav_array_memcpy(packet.an_channel, an_channel, sizeof(uint32_t)*11);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN);
#endif
}

/**
 * @brief Pack a anv_msg_gsib_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param an_channel  Analog_channels.
 * @param dig_channel  Bit mask of the Digital Switches' state
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_msg_gsib_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const uint32_t *an_channel,uint32_t dig_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN];
    _mav_put_uint32_t(buf, 44, dig_channel);
    _mav_put_uint32_t_array(buf, 0, an_channel, 11);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN);
#else
    mavlink_anv_msg_gsib_data_t packet;
    packet.dig_channel = dig_channel;
    mav_array_memcpy(packet.an_channel, an_channel, sizeof(uint32_t)*11);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_CRC);
}

/**
 * @brief Encode a anv_msg_gsib_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param anv_msg_gsib_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_msg_gsib_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_anv_msg_gsib_data_t* anv_msg_gsib_data)
{
    return mavlink_msg_anv_msg_gsib_data_pack(system_id, component_id, msg, anv_msg_gsib_data->an_channel, anv_msg_gsib_data->dig_channel);
}

/**
 * @brief Encode a anv_msg_gsib_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param anv_msg_gsib_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_msg_gsib_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_anv_msg_gsib_data_t* anv_msg_gsib_data)
{
    return mavlink_msg_anv_msg_gsib_data_pack_chan(system_id, component_id, chan, msg, anv_msg_gsib_data->an_channel, anv_msg_gsib_data->dig_channel);
}

/**
 * @brief Encode a anv_msg_gsib_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param anv_msg_gsib_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_msg_gsib_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_anv_msg_gsib_data_t* anv_msg_gsib_data)
{
    return mavlink_msg_anv_msg_gsib_data_pack_status(system_id, component_id, _status, msg,  anv_msg_gsib_data->an_channel, anv_msg_gsib_data->dig_channel);
}

/**
 * @brief Send a anv_msg_gsib_data message
 * @param chan MAVLink channel to send the message
 *
 * @param an_channel  Analog_channels.
 * @param dig_channel  Bit mask of the Digital Switches' state
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_anv_msg_gsib_data_send(mavlink_channel_t chan, const uint32_t *an_channel, uint32_t dig_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN];
    _mav_put_uint32_t(buf, 44, dig_channel);
    _mav_put_uint32_t_array(buf, 0, an_channel, 11);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA, buf, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_CRC);
#else
    mavlink_anv_msg_gsib_data_t packet;
    packet.dig_channel = dig_channel;
    mav_array_memcpy(packet.an_channel, an_channel, sizeof(uint32_t)*11);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA, (const char *)&packet, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_CRC);
#endif
}

/**
 * @brief Send a anv_msg_gsib_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_anv_msg_gsib_data_send_struct(mavlink_channel_t chan, const mavlink_anv_msg_gsib_data_t* anv_msg_gsib_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_msg_gsib_data_send(chan, anv_msg_gsib_data->an_channel, anv_msg_gsib_data->dig_channel);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA, (const char *)anv_msg_gsib_data, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_anv_msg_gsib_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const uint32_t *an_channel, uint32_t dig_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 44, dig_channel);
    _mav_put_uint32_t_array(buf, 0, an_channel, 11);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA, buf, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_CRC);
#else
    mavlink_anv_msg_gsib_data_t *packet = (mavlink_anv_msg_gsib_data_t *)msgbuf;
    packet->dig_channel = dig_channel;
    mav_array_memcpy(packet->an_channel, an_channel, sizeof(uint32_t)*11);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA, (const char *)packet, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE ANV_MSG_GSIB_DATA UNPACKING


/**
 * @brief Get field an_channel from anv_msg_gsib_data message
 *
 * @return  Analog_channels.
 */
static inline uint16_t mavlink_msg_anv_msg_gsib_data_get_an_channel(const mavlink_message_t* msg, uint32_t *an_channel)
{
    return _MAV_RETURN_uint32_t_array(msg, an_channel, 11,  0);
}

/**
 * @brief Get field dig_channel from anv_msg_gsib_data message
 *
 * @return  Bit mask of the Digital Switches' state
 */
static inline uint32_t mavlink_msg_anv_msg_gsib_data_get_dig_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  44);
}

/**
 * @brief Decode a anv_msg_gsib_data message into a struct
 *
 * @param msg The message to decode
 * @param anv_msg_gsib_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_anv_msg_gsib_data_decode(const mavlink_message_t* msg, mavlink_anv_msg_gsib_data_t* anv_msg_gsib_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_msg_gsib_data_get_an_channel(msg, anv_msg_gsib_data->an_channel);
    anv_msg_gsib_data->dig_channel = mavlink_msg_anv_msg_gsib_data_get_dig_channel(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN? msg->len : MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN;
        memset(anv_msg_gsib_data, 0, MAVLINK_MSG_ID_ANV_MSG_GSIB_DATA_LEN);
    memcpy(anv_msg_gsib_data, _MAV_PAYLOAD(msg), len);
#endif
}
