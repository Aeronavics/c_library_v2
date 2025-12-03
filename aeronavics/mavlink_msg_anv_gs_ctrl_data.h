#pragma once
// MESSAGE ANV_GS_CTRL_DATA PACKING

#define MAVLINK_MSG_ID_ANV_GS_CTRL_DATA 5014


typedef struct __mavlink_anv_gs_ctrl_data_t {
 uint32_t an_channel[11]; /*<  Analog_channels.*/
 uint32_t dig_channel; /*<  Bit mask of the Digital Switches' state*/
 uint8_t controller_id; /*<  Controller id*/
} mavlink_anv_gs_ctrl_data_t;

#define MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN 49
#define MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_MIN_LEN 49
#define MAVLINK_MSG_ID_5014_LEN 49
#define MAVLINK_MSG_ID_5014_MIN_LEN 49

#define MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_CRC 85
#define MAVLINK_MSG_ID_5014_CRC 85

#define MAVLINK_MSG_ANV_GS_CTRL_DATA_FIELD_AN_CHANNEL_LEN 11

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ANV_GS_CTRL_DATA { \
    5014, \
    "ANV_GS_CTRL_DATA", \
    3, \
    {  { "controller_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 48, offsetof(mavlink_anv_gs_ctrl_data_t, controller_id) }, \
         { "an_channel", NULL, MAVLINK_TYPE_UINT32_T, 11, 0, offsetof(mavlink_anv_gs_ctrl_data_t, an_channel) }, \
         { "dig_channel", NULL, MAVLINK_TYPE_UINT32_T, 0, 44, offsetof(mavlink_anv_gs_ctrl_data_t, dig_channel) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ANV_GS_CTRL_DATA { \
    "ANV_GS_CTRL_DATA", \
    3, \
    {  { "controller_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 48, offsetof(mavlink_anv_gs_ctrl_data_t, controller_id) }, \
         { "an_channel", NULL, MAVLINK_TYPE_UINT32_T, 11, 0, offsetof(mavlink_anv_gs_ctrl_data_t, an_channel) }, \
         { "dig_channel", NULL, MAVLINK_TYPE_UINT32_T, 0, 44, offsetof(mavlink_anv_gs_ctrl_data_t, dig_channel) }, \
         } \
}
#endif

/**
 * @brief Pack a anv_gs_ctrl_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param controller_id  Controller id
 * @param an_channel  Analog_channels.
 * @param dig_channel  Bit mask of the Digital Switches' state
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_gs_ctrl_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t controller_id, const uint32_t *an_channel, uint32_t dig_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN];
    _mav_put_uint32_t(buf, 44, dig_channel);
    _mav_put_uint8_t(buf, 48, controller_id);
    _mav_put_uint32_t_array(buf, 0, an_channel, 11);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN);
#else
    mavlink_anv_gs_ctrl_data_t packet;
    packet.dig_channel = dig_channel;
    packet.controller_id = controller_id;
    mav_array_memcpy(packet.an_channel, an_channel, sizeof(uint32_t)*11);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_GS_CTRL_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_CRC);
}

/**
 * @brief Pack a anv_gs_ctrl_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param controller_id  Controller id
 * @param an_channel  Analog_channels.
 * @param dig_channel  Bit mask of the Digital Switches' state
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_gs_ctrl_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t controller_id,const uint32_t *an_channel,uint32_t dig_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN];
    _mav_put_uint32_t(buf, 44, dig_channel);
    _mav_put_uint8_t(buf, 48, controller_id);
    _mav_put_uint32_t_array(buf, 0, an_channel, 11);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN);
#else
    mavlink_anv_gs_ctrl_data_t packet;
    packet.dig_channel = dig_channel;
    packet.controller_id = controller_id;
    mav_array_memcpy(packet.an_channel, an_channel, sizeof(uint32_t)*11);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_GS_CTRL_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_CRC);
}

/**
 * @brief Encode a anv_gs_ctrl_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param anv_gs_ctrl_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_gs_ctrl_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_anv_gs_ctrl_data_t* anv_gs_ctrl_data)
{
    return mavlink_msg_anv_gs_ctrl_data_pack(system_id, component_id, msg, anv_gs_ctrl_data->controller_id, anv_gs_ctrl_data->an_channel, anv_gs_ctrl_data->dig_channel);
}

/**
 * @brief Encode a anv_gs_ctrl_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param anv_gs_ctrl_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_gs_ctrl_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_anv_gs_ctrl_data_t* anv_gs_ctrl_data)
{
    return mavlink_msg_anv_gs_ctrl_data_pack_chan(system_id, component_id, chan, msg, anv_gs_ctrl_data->controller_id, anv_gs_ctrl_data->an_channel, anv_gs_ctrl_data->dig_channel);
}

/**
 * @brief Send a anv_gs_ctrl_data message
 * @param chan MAVLink channel to send the message
 *
 * @param controller_id  Controller id
 * @param an_channel  Analog_channels.
 * @param dig_channel  Bit mask of the Digital Switches' state
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_anv_gs_ctrl_data_send(mavlink_channel_t chan, uint8_t controller_id, const uint32_t *an_channel, uint32_t dig_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN];
    _mav_put_uint32_t(buf, 44, dig_channel);
    _mav_put_uint8_t(buf, 48, controller_id);
    _mav_put_uint32_t_array(buf, 0, an_channel, 11);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA, buf, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_CRC);
#else
    mavlink_anv_gs_ctrl_data_t packet;
    packet.dig_channel = dig_channel;
    packet.controller_id = controller_id;
    mav_array_memcpy(packet.an_channel, an_channel, sizeof(uint32_t)*11);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA, (const char *)&packet, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_CRC);
#endif
}

/**
 * @brief Send a anv_gs_ctrl_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_anv_gs_ctrl_data_send_struct(mavlink_channel_t chan, const mavlink_anv_gs_ctrl_data_t* anv_gs_ctrl_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_gs_ctrl_data_send(chan, anv_gs_ctrl_data->controller_id, anv_gs_ctrl_data->an_channel, anv_gs_ctrl_data->dig_channel);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA, (const char *)anv_gs_ctrl_data, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_anv_gs_ctrl_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t controller_id, const uint32_t *an_channel, uint32_t dig_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 44, dig_channel);
    _mav_put_uint8_t(buf, 48, controller_id);
    _mav_put_uint32_t_array(buf, 0, an_channel, 11);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA, buf, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_CRC);
#else
    mavlink_anv_gs_ctrl_data_t *packet = (mavlink_anv_gs_ctrl_data_t *)msgbuf;
    packet->dig_channel = dig_channel;
    packet->controller_id = controller_id;
    mav_array_memcpy(packet->an_channel, an_channel, sizeof(uint32_t)*11);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA, (const char *)packet, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE ANV_GS_CTRL_DATA UNPACKING


/**
 * @brief Get field controller_id from anv_gs_ctrl_data message
 *
 * @return  Controller id
 */
static inline uint8_t mavlink_msg_anv_gs_ctrl_data_get_controller_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  48);
}

/**
 * @brief Get field an_channel from anv_gs_ctrl_data message
 *
 * @return  Analog_channels.
 */
static inline uint16_t mavlink_msg_anv_gs_ctrl_data_get_an_channel(const mavlink_message_t* msg, uint32_t *an_channel)
{
    return _MAV_RETURN_uint32_t_array(msg, an_channel, 11,  0);
}

/**
 * @brief Get field dig_channel from anv_gs_ctrl_data message
 *
 * @return  Bit mask of the Digital Switches' state
 */
static inline uint32_t mavlink_msg_anv_gs_ctrl_data_get_dig_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  44);
}

/**
 * @brief Decode a anv_gs_ctrl_data message into a struct
 *
 * @param msg The message to decode
 * @param anv_gs_ctrl_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_anv_gs_ctrl_data_decode(const mavlink_message_t* msg, mavlink_anv_gs_ctrl_data_t* anv_gs_ctrl_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_gs_ctrl_data_get_an_channel(msg, anv_gs_ctrl_data->an_channel);
    anv_gs_ctrl_data->dig_channel = mavlink_msg_anv_gs_ctrl_data_get_dig_channel(msg);
    anv_gs_ctrl_data->controller_id = mavlink_msg_anv_gs_ctrl_data_get_controller_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN? msg->len : MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN;
        memset(anv_gs_ctrl_data, 0, MAVLINK_MSG_ID_ANV_GS_CTRL_DATA_LEN);
    memcpy(anv_gs_ctrl_data, _MAV_PAYLOAD(msg), len);
#endif
}
