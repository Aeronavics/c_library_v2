#pragma once
// MESSAGE ANV_SPRAY_STATUS PACKING

#define MAVLINK_MSG_ID_ANV_SPRAY_STATUS 5017


typedef struct __mavlink_anv_spray_status_t {
 double total_sprayed_volume; /*<  Total Volume Sprayed*/
 double armed_sprayed_volume; /*<  Armed Volume Sprayed*/
 double last_tree_volume; /*<  Last Tree Volume*/
 double spray_remaining; /*<  Spray Remaining*/
 uint16_t measured_flowrate; /*<  Measured Flowrate*/
 uint16_t desired_flowrate; /*<  Desired Flowrate*/
 uint16_t set_flowrate; /*<  Set Flowrate*/
 uint16_t pressure; /*<  Measured Pressure*/
 uint8_t error; /*<  Spray Error*/
} mavlink_anv_spray_status_t;

#define MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN 41
#define MAVLINK_MSG_ID_ANV_SPRAY_STATUS_MIN_LEN 41
#define MAVLINK_MSG_ID_5017_LEN 41
#define MAVLINK_MSG_ID_5017_MIN_LEN 41

#define MAVLINK_MSG_ID_ANV_SPRAY_STATUS_CRC 49
#define MAVLINK_MSG_ID_5017_CRC 49



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ANV_SPRAY_STATUS { \
    5017, \
    "ANV_SPRAY_STATUS", \
    9, \
    {  { "measured_flowrate", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_anv_spray_status_t, measured_flowrate) }, \
         { "desired_flowrate", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_anv_spray_status_t, desired_flowrate) }, \
         { "set_flowrate", NULL, MAVLINK_TYPE_UINT16_T, 0, 36, offsetof(mavlink_anv_spray_status_t, set_flowrate) }, \
         { "total_sprayed_volume", NULL, MAVLINK_TYPE_DOUBLE, 0, 0, offsetof(mavlink_anv_spray_status_t, total_sprayed_volume) }, \
         { "armed_sprayed_volume", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_anv_spray_status_t, armed_sprayed_volume) }, \
         { "last_tree_volume", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_anv_spray_status_t, last_tree_volume) }, \
         { "spray_remaining", NULL, MAVLINK_TYPE_DOUBLE, 0, 24, offsetof(mavlink_anv_spray_status_t, spray_remaining) }, \
         { "pressure", NULL, MAVLINK_TYPE_UINT16_T, 0, 38, offsetof(mavlink_anv_spray_status_t, pressure) }, \
         { "error", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_anv_spray_status_t, error) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ANV_SPRAY_STATUS { \
    "ANV_SPRAY_STATUS", \
    9, \
    {  { "measured_flowrate", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_anv_spray_status_t, measured_flowrate) }, \
         { "desired_flowrate", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_anv_spray_status_t, desired_flowrate) }, \
         { "set_flowrate", NULL, MAVLINK_TYPE_UINT16_T, 0, 36, offsetof(mavlink_anv_spray_status_t, set_flowrate) }, \
         { "total_sprayed_volume", NULL, MAVLINK_TYPE_DOUBLE, 0, 0, offsetof(mavlink_anv_spray_status_t, total_sprayed_volume) }, \
         { "armed_sprayed_volume", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_anv_spray_status_t, armed_sprayed_volume) }, \
         { "last_tree_volume", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_anv_spray_status_t, last_tree_volume) }, \
         { "spray_remaining", NULL, MAVLINK_TYPE_DOUBLE, 0, 24, offsetof(mavlink_anv_spray_status_t, spray_remaining) }, \
         { "pressure", NULL, MAVLINK_TYPE_UINT16_T, 0, 38, offsetof(mavlink_anv_spray_status_t, pressure) }, \
         { "error", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_anv_spray_status_t, error) }, \
         } \
}
#endif

/**
 * @brief Pack a anv_spray_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param measured_flowrate  Measured Flowrate
 * @param desired_flowrate  Desired Flowrate
 * @param set_flowrate  Set Flowrate
 * @param total_sprayed_volume  Total Volume Sprayed
 * @param armed_sprayed_volume  Armed Volume Sprayed
 * @param last_tree_volume  Last Tree Volume
 * @param spray_remaining  Spray Remaining
 * @param pressure  Measured Pressure
 * @param error  Spray Error
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_spray_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t measured_flowrate, uint16_t desired_flowrate, uint16_t set_flowrate, double total_sprayed_volume, double armed_sprayed_volume, double last_tree_volume, double spray_remaining, uint16_t pressure, uint8_t error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN];
    _mav_put_double(buf, 0, total_sprayed_volume);
    _mav_put_double(buf, 8, armed_sprayed_volume);
    _mav_put_double(buf, 16, last_tree_volume);
    _mav_put_double(buf, 24, spray_remaining);
    _mav_put_uint16_t(buf, 32, measured_flowrate);
    _mav_put_uint16_t(buf, 34, desired_flowrate);
    _mav_put_uint16_t(buf, 36, set_flowrate);
    _mav_put_uint16_t(buf, 38, pressure);
    _mav_put_uint8_t(buf, 40, error);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN);
#else
    mavlink_anv_spray_status_t packet;
    packet.total_sprayed_volume = total_sprayed_volume;
    packet.armed_sprayed_volume = armed_sprayed_volume;
    packet.last_tree_volume = last_tree_volume;
    packet.spray_remaining = spray_remaining;
    packet.measured_flowrate = measured_flowrate;
    packet.desired_flowrate = desired_flowrate;
    packet.set_flowrate = set_flowrate;
    packet.pressure = pressure;
    packet.error = error;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_SPRAY_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_CRC);
}

/**
 * @brief Pack a anv_spray_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param measured_flowrate  Measured Flowrate
 * @param desired_flowrate  Desired Flowrate
 * @param set_flowrate  Set Flowrate
 * @param total_sprayed_volume  Total Volume Sprayed
 * @param armed_sprayed_volume  Armed Volume Sprayed
 * @param last_tree_volume  Last Tree Volume
 * @param spray_remaining  Spray Remaining
 * @param pressure  Measured Pressure
 * @param error  Spray Error
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_spray_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t measured_flowrate, uint16_t desired_flowrate, uint16_t set_flowrate, double total_sprayed_volume, double armed_sprayed_volume, double last_tree_volume, double spray_remaining, uint16_t pressure, uint8_t error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN];
    _mav_put_double(buf, 0, total_sprayed_volume);
    _mav_put_double(buf, 8, armed_sprayed_volume);
    _mav_put_double(buf, 16, last_tree_volume);
    _mav_put_double(buf, 24, spray_remaining);
    _mav_put_uint16_t(buf, 32, measured_flowrate);
    _mav_put_uint16_t(buf, 34, desired_flowrate);
    _mav_put_uint16_t(buf, 36, set_flowrate);
    _mav_put_uint16_t(buf, 38, pressure);
    _mav_put_uint8_t(buf, 40, error);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN);
#else
    mavlink_anv_spray_status_t packet;
    packet.total_sprayed_volume = total_sprayed_volume;
    packet.armed_sprayed_volume = armed_sprayed_volume;
    packet.last_tree_volume = last_tree_volume;
    packet.spray_remaining = spray_remaining;
    packet.measured_flowrate = measured_flowrate;
    packet.desired_flowrate = desired_flowrate;
    packet.set_flowrate = set_flowrate;
    packet.pressure = pressure;
    packet.error = error;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_SPRAY_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN);
#endif
}

/**
 * @brief Pack a anv_spray_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param measured_flowrate  Measured Flowrate
 * @param desired_flowrate  Desired Flowrate
 * @param set_flowrate  Set Flowrate
 * @param total_sprayed_volume  Total Volume Sprayed
 * @param armed_sprayed_volume  Armed Volume Sprayed
 * @param last_tree_volume  Last Tree Volume
 * @param spray_remaining  Spray Remaining
 * @param pressure  Measured Pressure
 * @param error  Spray Error
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_spray_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t measured_flowrate,uint16_t desired_flowrate,uint16_t set_flowrate,double total_sprayed_volume,double armed_sprayed_volume,double last_tree_volume,double spray_remaining,uint16_t pressure,uint8_t error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN];
    _mav_put_double(buf, 0, total_sprayed_volume);
    _mav_put_double(buf, 8, armed_sprayed_volume);
    _mav_put_double(buf, 16, last_tree_volume);
    _mav_put_double(buf, 24, spray_remaining);
    _mav_put_uint16_t(buf, 32, measured_flowrate);
    _mav_put_uint16_t(buf, 34, desired_flowrate);
    _mav_put_uint16_t(buf, 36, set_flowrate);
    _mav_put_uint16_t(buf, 38, pressure);
    _mav_put_uint8_t(buf, 40, error);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN);
#else
    mavlink_anv_spray_status_t packet;
    packet.total_sprayed_volume = total_sprayed_volume;
    packet.armed_sprayed_volume = armed_sprayed_volume;
    packet.last_tree_volume = last_tree_volume;
    packet.spray_remaining = spray_remaining;
    packet.measured_flowrate = measured_flowrate;
    packet.desired_flowrate = desired_flowrate;
    packet.set_flowrate = set_flowrate;
    packet.pressure = pressure;
    packet.error = error;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_SPRAY_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_CRC);
}

/**
 * @brief Encode a anv_spray_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param anv_spray_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_spray_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_anv_spray_status_t* anv_spray_status)
{
    return mavlink_msg_anv_spray_status_pack(system_id, component_id, msg, anv_spray_status->measured_flowrate, anv_spray_status->desired_flowrate, anv_spray_status->set_flowrate, anv_spray_status->total_sprayed_volume, anv_spray_status->armed_sprayed_volume, anv_spray_status->last_tree_volume, anv_spray_status->spray_remaining, anv_spray_status->pressure, anv_spray_status->error);
}

/**
 * @brief Encode a anv_spray_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param anv_spray_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_spray_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_anv_spray_status_t* anv_spray_status)
{
    return mavlink_msg_anv_spray_status_pack_chan(system_id, component_id, chan, msg, anv_spray_status->measured_flowrate, anv_spray_status->desired_flowrate, anv_spray_status->set_flowrate, anv_spray_status->total_sprayed_volume, anv_spray_status->armed_sprayed_volume, anv_spray_status->last_tree_volume, anv_spray_status->spray_remaining, anv_spray_status->pressure, anv_spray_status->error);
}

/**
 * @brief Encode a anv_spray_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param anv_spray_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_spray_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_anv_spray_status_t* anv_spray_status)
{
    return mavlink_msg_anv_spray_status_pack_status(system_id, component_id, _status, msg,  anv_spray_status->measured_flowrate, anv_spray_status->desired_flowrate, anv_spray_status->set_flowrate, anv_spray_status->total_sprayed_volume, anv_spray_status->armed_sprayed_volume, anv_spray_status->last_tree_volume, anv_spray_status->spray_remaining, anv_spray_status->pressure, anv_spray_status->error);
}

/**
 * @brief Send a anv_spray_status message
 * @param chan MAVLink channel to send the message
 *
 * @param measured_flowrate  Measured Flowrate
 * @param desired_flowrate  Desired Flowrate
 * @param set_flowrate  Set Flowrate
 * @param total_sprayed_volume  Total Volume Sprayed
 * @param armed_sprayed_volume  Armed Volume Sprayed
 * @param last_tree_volume  Last Tree Volume
 * @param spray_remaining  Spray Remaining
 * @param pressure  Measured Pressure
 * @param error  Spray Error
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_anv_spray_status_send(mavlink_channel_t chan, uint16_t measured_flowrate, uint16_t desired_flowrate, uint16_t set_flowrate, double total_sprayed_volume, double armed_sprayed_volume, double last_tree_volume, double spray_remaining, uint16_t pressure, uint8_t error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN];
    _mav_put_double(buf, 0, total_sprayed_volume);
    _mav_put_double(buf, 8, armed_sprayed_volume);
    _mav_put_double(buf, 16, last_tree_volume);
    _mav_put_double(buf, 24, spray_remaining);
    _mav_put_uint16_t(buf, 32, measured_flowrate);
    _mav_put_uint16_t(buf, 34, desired_flowrate);
    _mav_put_uint16_t(buf, 36, set_flowrate);
    _mav_put_uint16_t(buf, 38, pressure);
    _mav_put_uint8_t(buf, 40, error);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SPRAY_STATUS, buf, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_CRC);
#else
    mavlink_anv_spray_status_t packet;
    packet.total_sprayed_volume = total_sprayed_volume;
    packet.armed_sprayed_volume = armed_sprayed_volume;
    packet.last_tree_volume = last_tree_volume;
    packet.spray_remaining = spray_remaining;
    packet.measured_flowrate = measured_flowrate;
    packet.desired_flowrate = desired_flowrate;
    packet.set_flowrate = set_flowrate;
    packet.pressure = pressure;
    packet.error = error;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SPRAY_STATUS, (const char *)&packet, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_CRC);
#endif
}

/**
 * @brief Send a anv_spray_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_anv_spray_status_send_struct(mavlink_channel_t chan, const mavlink_anv_spray_status_t* anv_spray_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_spray_status_send(chan, anv_spray_status->measured_flowrate, anv_spray_status->desired_flowrate, anv_spray_status->set_flowrate, anv_spray_status->total_sprayed_volume, anv_spray_status->armed_sprayed_volume, anv_spray_status->last_tree_volume, anv_spray_status->spray_remaining, anv_spray_status->pressure, anv_spray_status->error);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SPRAY_STATUS, (const char *)anv_spray_status, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_anv_spray_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t measured_flowrate, uint16_t desired_flowrate, uint16_t set_flowrate, double total_sprayed_volume, double armed_sprayed_volume, double last_tree_volume, double spray_remaining, uint16_t pressure, uint8_t error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_double(buf, 0, total_sprayed_volume);
    _mav_put_double(buf, 8, armed_sprayed_volume);
    _mav_put_double(buf, 16, last_tree_volume);
    _mav_put_double(buf, 24, spray_remaining);
    _mav_put_uint16_t(buf, 32, measured_flowrate);
    _mav_put_uint16_t(buf, 34, desired_flowrate);
    _mav_put_uint16_t(buf, 36, set_flowrate);
    _mav_put_uint16_t(buf, 38, pressure);
    _mav_put_uint8_t(buf, 40, error);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SPRAY_STATUS, buf, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_CRC);
#else
    mavlink_anv_spray_status_t *packet = (mavlink_anv_spray_status_t *)msgbuf;
    packet->total_sprayed_volume = total_sprayed_volume;
    packet->armed_sprayed_volume = armed_sprayed_volume;
    packet->last_tree_volume = last_tree_volume;
    packet->spray_remaining = spray_remaining;
    packet->measured_flowrate = measured_flowrate;
    packet->desired_flowrate = desired_flowrate;
    packet->set_flowrate = set_flowrate;
    packet->pressure = pressure;
    packet->error = error;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SPRAY_STATUS, (const char *)packet, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE ANV_SPRAY_STATUS UNPACKING


/**
 * @brief Get field measured_flowrate from anv_spray_status message
 *
 * @return  Measured Flowrate
 */
static inline uint16_t mavlink_msg_anv_spray_status_get_measured_flowrate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  32);
}

/**
 * @brief Get field desired_flowrate from anv_spray_status message
 *
 * @return  Desired Flowrate
 */
static inline uint16_t mavlink_msg_anv_spray_status_get_desired_flowrate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  34);
}

/**
 * @brief Get field set_flowrate from anv_spray_status message
 *
 * @return  Set Flowrate
 */
static inline uint16_t mavlink_msg_anv_spray_status_get_set_flowrate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  36);
}

/**
 * @brief Get field total_sprayed_volume from anv_spray_status message
 *
 * @return  Total Volume Sprayed
 */
static inline double mavlink_msg_anv_spray_status_get_total_sprayed_volume(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  0);
}

/**
 * @brief Get field armed_sprayed_volume from anv_spray_status message
 *
 * @return  Armed Volume Sprayed
 */
static inline double mavlink_msg_anv_spray_status_get_armed_sprayed_volume(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  8);
}

/**
 * @brief Get field last_tree_volume from anv_spray_status message
 *
 * @return  Last Tree Volume
 */
static inline double mavlink_msg_anv_spray_status_get_last_tree_volume(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  16);
}

/**
 * @brief Get field spray_remaining from anv_spray_status message
 *
 * @return  Spray Remaining
 */
static inline double mavlink_msg_anv_spray_status_get_spray_remaining(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  24);
}

/**
 * @brief Get field pressure from anv_spray_status message
 *
 * @return  Measured Pressure
 */
static inline uint16_t mavlink_msg_anv_spray_status_get_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  38);
}

/**
 * @brief Get field error from anv_spray_status message
 *
 * @return  Spray Error
 */
static inline uint8_t mavlink_msg_anv_spray_status_get_error(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  40);
}

/**
 * @brief Decode a anv_spray_status message into a struct
 *
 * @param msg The message to decode
 * @param anv_spray_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_anv_spray_status_decode(const mavlink_message_t* msg, mavlink_anv_spray_status_t* anv_spray_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    anv_spray_status->total_sprayed_volume = mavlink_msg_anv_spray_status_get_total_sprayed_volume(msg);
    anv_spray_status->armed_sprayed_volume = mavlink_msg_anv_spray_status_get_armed_sprayed_volume(msg);
    anv_spray_status->last_tree_volume = mavlink_msg_anv_spray_status_get_last_tree_volume(msg);
    anv_spray_status->spray_remaining = mavlink_msg_anv_spray_status_get_spray_remaining(msg);
    anv_spray_status->measured_flowrate = mavlink_msg_anv_spray_status_get_measured_flowrate(msg);
    anv_spray_status->desired_flowrate = mavlink_msg_anv_spray_status_get_desired_flowrate(msg);
    anv_spray_status->set_flowrate = mavlink_msg_anv_spray_status_get_set_flowrate(msg);
    anv_spray_status->pressure = mavlink_msg_anv_spray_status_get_pressure(msg);
    anv_spray_status->error = mavlink_msg_anv_spray_status_get_error(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN? msg->len : MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN;
        memset(anv_spray_status, 0, MAVLINK_MSG_ID_ANV_SPRAY_STATUS_LEN);
    memcpy(anv_spray_status, _MAV_PAYLOAD(msg), len);
#endif
}
