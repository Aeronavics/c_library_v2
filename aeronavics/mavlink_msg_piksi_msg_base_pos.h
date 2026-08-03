#pragma once
// MESSAGE PIKSI_MSG_BASE_POS PACKING

#define MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS 196


typedef struct __mavlink_piksi_msg_base_pos_t {
 double lat; /*<  Basestation latitude*/
 double lon; /*<  Basestation longitude*/
 double height; /*<  Basestation height*/
} mavlink_piksi_msg_base_pos_t;

#define MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN 24
#define MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_MIN_LEN 24
#define MAVLINK_MSG_ID_196_LEN 24
#define MAVLINK_MSG_ID_196_MIN_LEN 24

#define MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_CRC 179
#define MAVLINK_MSG_ID_196_CRC 179



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PIKSI_MSG_BASE_POS { \
    196, \
    "PIKSI_MSG_BASE_POS", \
    3, \
    {  { "lat", NULL, MAVLINK_TYPE_DOUBLE, 0, 0, offsetof(mavlink_piksi_msg_base_pos_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_piksi_msg_base_pos_t, lon) }, \
         { "height", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_piksi_msg_base_pos_t, height) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PIKSI_MSG_BASE_POS { \
    "PIKSI_MSG_BASE_POS", \
    3, \
    {  { "lat", NULL, MAVLINK_TYPE_DOUBLE, 0, 0, offsetof(mavlink_piksi_msg_base_pos_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_piksi_msg_base_pos_t, lon) }, \
         { "height", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_piksi_msg_base_pos_t, height) }, \
         } \
}
#endif

/**
 * @brief Pack a piksi_msg_base_pos message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param lat  Basestation latitude
 * @param lon  Basestation longitude
 * @param height  Basestation height
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_piksi_msg_base_pos_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               double lat, double lon, double height)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN];
    _mav_put_double(buf, 0, lat);
    _mav_put_double(buf, 8, lon);
    _mav_put_double(buf, 16, height);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN);
#else
    mavlink_piksi_msg_base_pos_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.height = height;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_CRC);
}

/**
 * @brief Pack a piksi_msg_base_pos message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param lat  Basestation latitude
 * @param lon  Basestation longitude
 * @param height  Basestation height
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_piksi_msg_base_pos_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               double lat, double lon, double height)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN];
    _mav_put_double(buf, 0, lat);
    _mav_put_double(buf, 8, lon);
    _mav_put_double(buf, 16, height);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN);
#else
    mavlink_piksi_msg_base_pos_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.height = height;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN);
#endif
}

/**
 * @brief Pack a piksi_msg_base_pos message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param lat  Basestation latitude
 * @param lon  Basestation longitude
 * @param height  Basestation height
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_piksi_msg_base_pos_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   double lat,double lon,double height)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN];
    _mav_put_double(buf, 0, lat);
    _mav_put_double(buf, 8, lon);
    _mav_put_double(buf, 16, height);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN);
#else
    mavlink_piksi_msg_base_pos_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.height = height;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_CRC);
}

/**
 * @brief Encode a piksi_msg_base_pos struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param piksi_msg_base_pos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_piksi_msg_base_pos_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_piksi_msg_base_pos_t* piksi_msg_base_pos)
{
    return mavlink_msg_piksi_msg_base_pos_pack(system_id, component_id, msg, piksi_msg_base_pos->lat, piksi_msg_base_pos->lon, piksi_msg_base_pos->height);
}

/**
 * @brief Encode a piksi_msg_base_pos struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param piksi_msg_base_pos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_piksi_msg_base_pos_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_piksi_msg_base_pos_t* piksi_msg_base_pos)
{
    return mavlink_msg_piksi_msg_base_pos_pack_chan(system_id, component_id, chan, msg, piksi_msg_base_pos->lat, piksi_msg_base_pos->lon, piksi_msg_base_pos->height);
}

/**
 * @brief Encode a piksi_msg_base_pos struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param piksi_msg_base_pos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_piksi_msg_base_pos_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_piksi_msg_base_pos_t* piksi_msg_base_pos)
{
    return mavlink_msg_piksi_msg_base_pos_pack_status(system_id, component_id, _status, msg,  piksi_msg_base_pos->lat, piksi_msg_base_pos->lon, piksi_msg_base_pos->height);
}

/**
 * @brief Send a piksi_msg_base_pos message
 * @param chan MAVLink channel to send the message
 *
 * @param lat  Basestation latitude
 * @param lon  Basestation longitude
 * @param height  Basestation height
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_piksi_msg_base_pos_send(mavlink_channel_t chan, double lat, double lon, double height)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN];
    _mav_put_double(buf, 0, lat);
    _mav_put_double(buf, 8, lon);
    _mav_put_double(buf, 16, height);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS, buf, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_CRC);
#else
    mavlink_piksi_msg_base_pos_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.height = height;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS, (const char *)&packet, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_CRC);
#endif
}

/**
 * @brief Send a piksi_msg_base_pos message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_piksi_msg_base_pos_send_struct(mavlink_channel_t chan, const mavlink_piksi_msg_base_pos_t* piksi_msg_base_pos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_piksi_msg_base_pos_send(chan, piksi_msg_base_pos->lat, piksi_msg_base_pos->lon, piksi_msg_base_pos->height);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS, (const char *)piksi_msg_base_pos, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_CRC);
#endif
}

#if MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_piksi_msg_base_pos_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  double lat, double lon, double height)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_double(buf, 0, lat);
    _mav_put_double(buf, 8, lon);
    _mav_put_double(buf, 16, height);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS, buf, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_CRC);
#else
    mavlink_piksi_msg_base_pos_t *packet = (mavlink_piksi_msg_base_pos_t *)msgbuf;
    packet->lat = lat;
    packet->lon = lon;
    packet->height = height;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS, (const char *)packet, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_CRC);
#endif
}
#endif

#endif

// MESSAGE PIKSI_MSG_BASE_POS UNPACKING


/**
 * @brief Get field lat from piksi_msg_base_pos message
 *
 * @return  Basestation latitude
 */
static inline double mavlink_msg_piksi_msg_base_pos_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  0);
}

/**
 * @brief Get field lon from piksi_msg_base_pos message
 *
 * @return  Basestation longitude
 */
static inline double mavlink_msg_piksi_msg_base_pos_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  8);
}

/**
 * @brief Get field height from piksi_msg_base_pos message
 *
 * @return  Basestation height
 */
static inline double mavlink_msg_piksi_msg_base_pos_get_height(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  16);
}

/**
 * @brief Decode a piksi_msg_base_pos message into a struct
 *
 * @param msg The message to decode
 * @param piksi_msg_base_pos C-struct to decode the message contents into
 */
static inline void mavlink_msg_piksi_msg_base_pos_decode(const mavlink_message_t* msg, mavlink_piksi_msg_base_pos_t* piksi_msg_base_pos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    piksi_msg_base_pos->lat = mavlink_msg_piksi_msg_base_pos_get_lat(msg);
    piksi_msg_base_pos->lon = mavlink_msg_piksi_msg_base_pos_get_lon(msg);
    piksi_msg_base_pos->height = mavlink_msg_piksi_msg_base_pos_get_height(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN? msg->len : MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN;
        memset(piksi_msg_base_pos, 0, MAVLINK_MSG_ID_PIKSI_MSG_BASE_POS_LEN);
    memcpy(piksi_msg_base_pos, _MAV_PAYLOAD(msg), len);
#endif
}
