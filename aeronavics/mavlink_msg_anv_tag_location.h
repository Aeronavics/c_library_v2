#pragma once
// MESSAGE ANV_TAG_LOCATION PACKING

#define MAVLINK_MSG_ID_ANV_TAG_LOCATION 5018


typedef struct __mavlink_anv_tag_location_t {
 int32_t latitude; /*< [degE7] Latitude. If unknown: 0 (both Lat/Lon).*/
 int32_t longitude; /*< [degE7] Longitude. If unknown: 0 (both Lat/Lon).*/
} mavlink_anv_tag_location_t;

#define MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN 8
#define MAVLINK_MSG_ID_ANV_TAG_LOCATION_MIN_LEN 8
#define MAVLINK_MSG_ID_5018_LEN 8
#define MAVLINK_MSG_ID_5018_MIN_LEN 8

#define MAVLINK_MSG_ID_ANV_TAG_LOCATION_CRC 37
#define MAVLINK_MSG_ID_5018_CRC 37



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ANV_TAG_LOCATION { \
    5018, \
    "ANV_TAG_LOCATION", \
    2, \
    {  { "latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_anv_tag_location_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_anv_tag_location_t, longitude) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ANV_TAG_LOCATION { \
    "ANV_TAG_LOCATION", \
    2, \
    {  { "latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_anv_tag_location_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_anv_tag_location_t, longitude) }, \
         } \
}
#endif

/**
 * @brief Pack a anv_tag_location message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param latitude [degE7] Latitude. If unknown: 0 (both Lat/Lon).
 * @param longitude [degE7] Longitude. If unknown: 0 (both Lat/Lon).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_tag_location_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t latitude, int32_t longitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN];
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN);
#else
    mavlink_anv_tag_location_t packet;
    packet.latitude = latitude;
    packet.longitude = longitude;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_TAG_LOCATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ANV_TAG_LOCATION_MIN_LEN, MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN, MAVLINK_MSG_ID_ANV_TAG_LOCATION_CRC);
}

/**
 * @brief Pack a anv_tag_location message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param latitude [degE7] Latitude. If unknown: 0 (both Lat/Lon).
 * @param longitude [degE7] Longitude. If unknown: 0 (both Lat/Lon).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_tag_location_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int32_t latitude, int32_t longitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN];
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN);
#else
    mavlink_anv_tag_location_t packet;
    packet.latitude = latitude;
    packet.longitude = longitude;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_TAG_LOCATION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ANV_TAG_LOCATION_MIN_LEN, MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN, MAVLINK_MSG_ID_ANV_TAG_LOCATION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ANV_TAG_LOCATION_MIN_LEN, MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN);
#endif
}

/**
 * @brief Pack a anv_tag_location message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param latitude [degE7] Latitude. If unknown: 0 (both Lat/Lon).
 * @param longitude [degE7] Longitude. If unknown: 0 (both Lat/Lon).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_tag_location_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t latitude,int32_t longitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN];
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN);
#else
    mavlink_anv_tag_location_t packet;
    packet.latitude = latitude;
    packet.longitude = longitude;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_TAG_LOCATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ANV_TAG_LOCATION_MIN_LEN, MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN, MAVLINK_MSG_ID_ANV_TAG_LOCATION_CRC);
}

/**
 * @brief Encode a anv_tag_location struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param anv_tag_location C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_tag_location_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_anv_tag_location_t* anv_tag_location)
{
    return mavlink_msg_anv_tag_location_pack(system_id, component_id, msg, anv_tag_location->latitude, anv_tag_location->longitude);
}

/**
 * @brief Encode a anv_tag_location struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param anv_tag_location C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_tag_location_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_anv_tag_location_t* anv_tag_location)
{
    return mavlink_msg_anv_tag_location_pack_chan(system_id, component_id, chan, msg, anv_tag_location->latitude, anv_tag_location->longitude);
}

/**
 * @brief Encode a anv_tag_location struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param anv_tag_location C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_tag_location_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_anv_tag_location_t* anv_tag_location)
{
    return mavlink_msg_anv_tag_location_pack_status(system_id, component_id, _status, msg,  anv_tag_location->latitude, anv_tag_location->longitude);
}

/**
 * @brief Send a anv_tag_location message
 * @param chan MAVLink channel to send the message
 *
 * @param latitude [degE7] Latitude. If unknown: 0 (both Lat/Lon).
 * @param longitude [degE7] Longitude. If unknown: 0 (both Lat/Lon).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_anv_tag_location_send(mavlink_channel_t chan, int32_t latitude, int32_t longitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN];
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_TAG_LOCATION, buf, MAVLINK_MSG_ID_ANV_TAG_LOCATION_MIN_LEN, MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN, MAVLINK_MSG_ID_ANV_TAG_LOCATION_CRC);
#else
    mavlink_anv_tag_location_t packet;
    packet.latitude = latitude;
    packet.longitude = longitude;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_TAG_LOCATION, (const char *)&packet, MAVLINK_MSG_ID_ANV_TAG_LOCATION_MIN_LEN, MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN, MAVLINK_MSG_ID_ANV_TAG_LOCATION_CRC);
#endif
}

/**
 * @brief Send a anv_tag_location message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_anv_tag_location_send_struct(mavlink_channel_t chan, const mavlink_anv_tag_location_t* anv_tag_location)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_tag_location_send(chan, anv_tag_location->latitude, anv_tag_location->longitude);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_TAG_LOCATION, (const char *)anv_tag_location, MAVLINK_MSG_ID_ANV_TAG_LOCATION_MIN_LEN, MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN, MAVLINK_MSG_ID_ANV_TAG_LOCATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_anv_tag_location_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t latitude, int32_t longitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_TAG_LOCATION, buf, MAVLINK_MSG_ID_ANV_TAG_LOCATION_MIN_LEN, MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN, MAVLINK_MSG_ID_ANV_TAG_LOCATION_CRC);
#else
    mavlink_anv_tag_location_t *packet = (mavlink_anv_tag_location_t *)msgbuf;
    packet->latitude = latitude;
    packet->longitude = longitude;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_TAG_LOCATION, (const char *)packet, MAVLINK_MSG_ID_ANV_TAG_LOCATION_MIN_LEN, MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN, MAVLINK_MSG_ID_ANV_TAG_LOCATION_CRC);
#endif
}
#endif

#endif

// MESSAGE ANV_TAG_LOCATION UNPACKING


/**
 * @brief Get field latitude from anv_tag_location message
 *
 * @return [degE7] Latitude. If unknown: 0 (both Lat/Lon).
 */
static inline int32_t mavlink_msg_anv_tag_location_get_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field longitude from anv_tag_location message
 *
 * @return [degE7] Longitude. If unknown: 0 (both Lat/Lon).
 */
static inline int32_t mavlink_msg_anv_tag_location_get_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Decode a anv_tag_location message into a struct
 *
 * @param msg The message to decode
 * @param anv_tag_location C-struct to decode the message contents into
 */
static inline void mavlink_msg_anv_tag_location_decode(const mavlink_message_t* msg, mavlink_anv_tag_location_t* anv_tag_location)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    anv_tag_location->latitude = mavlink_msg_anv_tag_location_get_latitude(msg);
    anv_tag_location->longitude = mavlink_msg_anv_tag_location_get_longitude(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN? msg->len : MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN;
        memset(anv_tag_location, 0, MAVLINK_MSG_ID_ANV_TAG_LOCATION_LEN);
    memcpy(anv_tag_location, _MAV_PAYLOAD(msg), len);
#endif
}
