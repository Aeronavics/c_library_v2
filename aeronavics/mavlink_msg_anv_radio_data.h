#pragma once
// MESSAGE ANV_RADIO_DATA PACKING

#define MAVLINK_MSG_ID_ANV_RADIO_DATA 5004


typedef struct __mavlink_anv_radio_data_t {
 uint64_t timestamp; /*<  System time of when the message was sent*/
 uint8_t target_system; /*<  Target system ID*/
 uint8_t target_component; /*<  Target component ID*/
 uint8_t sbus_data[25]; /*<  Raw SBUS data*/
} mavlink_anv_radio_data_t;

#define MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN 35
#define MAVLINK_MSG_ID_ANV_RADIO_DATA_MIN_LEN 35
#define MAVLINK_MSG_ID_5004_LEN 35
#define MAVLINK_MSG_ID_5004_MIN_LEN 35

#define MAVLINK_MSG_ID_ANV_RADIO_DATA_CRC 78
#define MAVLINK_MSG_ID_5004_CRC 78

#define MAVLINK_MSG_ANV_RADIO_DATA_FIELD_SBUS_DATA_LEN 25

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ANV_RADIO_DATA { \
    5004, \
    "ANV_RADIO_DATA", \
    4, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_anv_radio_data_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_anv_radio_data_t, target_component) }, \
         { "sbus_data", NULL, MAVLINK_TYPE_UINT8_T, 25, 10, offsetof(mavlink_anv_radio_data_t, sbus_data) }, \
         { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_anv_radio_data_t, timestamp) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ANV_RADIO_DATA { \
    "ANV_RADIO_DATA", \
    4, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_anv_radio_data_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_anv_radio_data_t, target_component) }, \
         { "sbus_data", NULL, MAVLINK_TYPE_UINT8_T, 25, 10, offsetof(mavlink_anv_radio_data_t, sbus_data) }, \
         { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_anv_radio_data_t, timestamp) }, \
         } \
}
#endif

/**
 * @brief Pack a anv_radio_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Target system ID
 * @param target_component  Target component ID
 * @param sbus_data  Raw SBUS data
 * @param timestamp  System time of when the message was sent
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_radio_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, const uint8_t *sbus_data, uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t_array(buf, 10, sbus_data, 25);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN);
#else
    mavlink_anv_radio_data_t packet;
    packet.timestamp = timestamp;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.sbus_data, sbus_data, sizeof(uint8_t)*25);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_RADIO_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ANV_RADIO_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN, MAVLINK_MSG_ID_ANV_RADIO_DATA_CRC);
}

/**
 * @brief Pack a anv_radio_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  Target system ID
 * @param target_component  Target component ID
 * @param sbus_data  Raw SBUS data
 * @param timestamp  System time of when the message was sent
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_radio_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,const uint8_t *sbus_data,uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t_array(buf, 10, sbus_data, 25);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN);
#else
    mavlink_anv_radio_data_t packet;
    packet.timestamp = timestamp;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.sbus_data, sbus_data, sizeof(uint8_t)*25);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_RADIO_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ANV_RADIO_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN, MAVLINK_MSG_ID_ANV_RADIO_DATA_CRC);
}

/**
 * @brief Encode a anv_radio_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param anv_radio_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_radio_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_anv_radio_data_t* anv_radio_data)
{
    return mavlink_msg_anv_radio_data_pack(system_id, component_id, msg, anv_radio_data->target_system, anv_radio_data->target_component, anv_radio_data->sbus_data, anv_radio_data->timestamp);
}

/**
 * @brief Encode a anv_radio_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param anv_radio_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_radio_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_anv_radio_data_t* anv_radio_data)
{
    return mavlink_msg_anv_radio_data_pack_chan(system_id, component_id, chan, msg, anv_radio_data->target_system, anv_radio_data->target_component, anv_radio_data->sbus_data, anv_radio_data->timestamp);
}

/**
 * @brief Send a anv_radio_data message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  Target system ID
 * @param target_component  Target component ID
 * @param sbus_data  Raw SBUS data
 * @param timestamp  System time of when the message was sent
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_anv_radio_data_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, const uint8_t *sbus_data, uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t_array(buf, 10, sbus_data, 25);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_RADIO_DATA, buf, MAVLINK_MSG_ID_ANV_RADIO_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN, MAVLINK_MSG_ID_ANV_RADIO_DATA_CRC);
#else
    mavlink_anv_radio_data_t packet;
    packet.timestamp = timestamp;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.sbus_data, sbus_data, sizeof(uint8_t)*25);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_RADIO_DATA, (const char *)&packet, MAVLINK_MSG_ID_ANV_RADIO_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN, MAVLINK_MSG_ID_ANV_RADIO_DATA_CRC);
#endif
}

/**
 * @brief Send a anv_radio_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_anv_radio_data_send_struct(mavlink_channel_t chan, const mavlink_anv_radio_data_t* anv_radio_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_radio_data_send(chan, anv_radio_data->target_system, anv_radio_data->target_component, anv_radio_data->sbus_data, anv_radio_data->timestamp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_RADIO_DATA, (const char *)anv_radio_data, MAVLINK_MSG_ID_ANV_RADIO_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN, MAVLINK_MSG_ID_ANV_RADIO_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_anv_radio_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, const uint8_t *sbus_data, uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t_array(buf, 10, sbus_data, 25);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_RADIO_DATA, buf, MAVLINK_MSG_ID_ANV_RADIO_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN, MAVLINK_MSG_ID_ANV_RADIO_DATA_CRC);
#else
    mavlink_anv_radio_data_t *packet = (mavlink_anv_radio_data_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->target_system = target_system;
    packet->target_component = target_component;
    mav_array_memcpy(packet->sbus_data, sbus_data, sizeof(uint8_t)*25);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_RADIO_DATA, (const char *)packet, MAVLINK_MSG_ID_ANV_RADIO_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN, MAVLINK_MSG_ID_ANV_RADIO_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE ANV_RADIO_DATA UNPACKING


/**
 * @brief Get field target_system from anv_radio_data message
 *
 * @return  Target system ID
 */
static inline uint8_t mavlink_msg_anv_radio_data_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field target_component from anv_radio_data message
 *
 * @return  Target component ID
 */
static inline uint8_t mavlink_msg_anv_radio_data_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field sbus_data from anv_radio_data message
 *
 * @return  Raw SBUS data
 */
static inline uint16_t mavlink_msg_anv_radio_data_get_sbus_data(const mavlink_message_t* msg, uint8_t *sbus_data)
{
    return _MAV_RETURN_uint8_t_array(msg, sbus_data, 25,  10);
}

/**
 * @brief Get field timestamp from anv_radio_data message
 *
 * @return  System time of when the message was sent
 */
static inline uint64_t mavlink_msg_anv_radio_data_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Decode a anv_radio_data message into a struct
 *
 * @param msg The message to decode
 * @param anv_radio_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_anv_radio_data_decode(const mavlink_message_t* msg, mavlink_anv_radio_data_t* anv_radio_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    anv_radio_data->timestamp = mavlink_msg_anv_radio_data_get_timestamp(msg);
    anv_radio_data->target_system = mavlink_msg_anv_radio_data_get_target_system(msg);
    anv_radio_data->target_component = mavlink_msg_anv_radio_data_get_target_component(msg);
    mavlink_msg_anv_radio_data_get_sbus_data(msg, anv_radio_data->sbus_data);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN? msg->len : MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN;
        memset(anv_radio_data, 0, MAVLINK_MSG_ID_ANV_RADIO_DATA_LEN);
    memcpy(anv_radio_data, _MAV_PAYLOAD(msg), len);
#endif
}
