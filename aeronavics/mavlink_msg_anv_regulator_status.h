#pragma once
// MESSAGE ANV_REGULATOR_STATUS PACKING

#define MAVLINK_MSG_ID_ANV_REGULATOR_STATUS 5000


typedef struct __mavlink_anv_regulator_status_t {
 uint16_t voltage; /*<  Voltage output of the regulator measured in mV*/
 uint16_t current; /*<  Current output of the regulator measured in mA*/
 uint16_t temperature; /*<  Temerature of the regulator measured in milli Degrees Celsius*/
 uint16_t max_rated_current; /*<  The rated current of the regulator measured in mA*/
 uint16_t consumed_power; /*<  The integral of used power of the regulator. Measured in mAH*/
 uint8_t id; /*<  ID of the regulator*/
} mavlink_anv_regulator_status_t;

#define MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN 11
#define MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_MIN_LEN 11
#define MAVLINK_MSG_ID_5000_LEN 11
#define MAVLINK_MSG_ID_5000_MIN_LEN 11

#define MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_CRC 4
#define MAVLINK_MSG_ID_5000_CRC 4



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ANV_REGULATOR_STATUS { \
    5000, \
    "ANV_REGULATOR_STATUS", \
    6, \
    {  { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_anv_regulator_status_t, id) }, \
         { "voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_anv_regulator_status_t, voltage) }, \
         { "current", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_anv_regulator_status_t, current) }, \
         { "temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_anv_regulator_status_t, temperature) }, \
         { "max_rated_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_anv_regulator_status_t, max_rated_current) }, \
         { "consumed_power", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_anv_regulator_status_t, consumed_power) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ANV_REGULATOR_STATUS { \
    "ANV_REGULATOR_STATUS", \
    6, \
    {  { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_anv_regulator_status_t, id) }, \
         { "voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_anv_regulator_status_t, voltage) }, \
         { "current", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_anv_regulator_status_t, current) }, \
         { "temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_anv_regulator_status_t, temperature) }, \
         { "max_rated_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_anv_regulator_status_t, max_rated_current) }, \
         { "consumed_power", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_anv_regulator_status_t, consumed_power) }, \
         } \
}
#endif

/**
 * @brief Pack a anv_regulator_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id  ID of the regulator
 * @param voltage  Voltage output of the regulator measured in mV
 * @param current  Current output of the regulator measured in mA
 * @param temperature  Temerature of the regulator measured in milli Degrees Celsius
 * @param max_rated_current  The rated current of the regulator measured in mA
 * @param consumed_power  The integral of used power of the regulator. Measured in mAH
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_regulator_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t id, uint16_t voltage, uint16_t current, uint16_t temperature, uint16_t max_rated_current, uint16_t consumed_power)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, voltage);
    _mav_put_uint16_t(buf, 2, current);
    _mav_put_uint16_t(buf, 4, temperature);
    _mav_put_uint16_t(buf, 6, max_rated_current);
    _mav_put_uint16_t(buf, 8, consumed_power);
    _mav_put_uint8_t(buf, 10, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN);
#else
    mavlink_anv_regulator_status_t packet;
    packet.voltage = voltage;
    packet.current = current;
    packet.temperature = temperature;
    packet.max_rated_current = max_rated_current;
    packet.consumed_power = consumed_power;
    packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_REGULATOR_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_CRC);
}

/**
 * @brief Pack a anv_regulator_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param id  ID of the regulator
 * @param voltage  Voltage output of the regulator measured in mV
 * @param current  Current output of the regulator measured in mA
 * @param temperature  Temerature of the regulator measured in milli Degrees Celsius
 * @param max_rated_current  The rated current of the regulator measured in mA
 * @param consumed_power  The integral of used power of the regulator. Measured in mAH
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_regulator_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t id,uint16_t voltage,uint16_t current,uint16_t temperature,uint16_t max_rated_current,uint16_t consumed_power)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, voltage);
    _mav_put_uint16_t(buf, 2, current);
    _mav_put_uint16_t(buf, 4, temperature);
    _mav_put_uint16_t(buf, 6, max_rated_current);
    _mav_put_uint16_t(buf, 8, consumed_power);
    _mav_put_uint8_t(buf, 10, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN);
#else
    mavlink_anv_regulator_status_t packet;
    packet.voltage = voltage;
    packet.current = current;
    packet.temperature = temperature;
    packet.max_rated_current = max_rated_current;
    packet.consumed_power = consumed_power;
    packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_REGULATOR_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_CRC);
}

/**
 * @brief Encode a anv_regulator_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param anv_regulator_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_regulator_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_anv_regulator_status_t* anv_regulator_status)
{
    return mavlink_msg_anv_regulator_status_pack(system_id, component_id, msg, anv_regulator_status->id, anv_regulator_status->voltage, anv_regulator_status->current, anv_regulator_status->temperature, anv_regulator_status->max_rated_current, anv_regulator_status->consumed_power);
}

/**
 * @brief Encode a anv_regulator_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param anv_regulator_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_regulator_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_anv_regulator_status_t* anv_regulator_status)
{
    return mavlink_msg_anv_regulator_status_pack_chan(system_id, component_id, chan, msg, anv_regulator_status->id, anv_regulator_status->voltage, anv_regulator_status->current, anv_regulator_status->temperature, anv_regulator_status->max_rated_current, anv_regulator_status->consumed_power);
}

/**
 * @brief Send a anv_regulator_status message
 * @param chan MAVLink channel to send the message
 *
 * @param id  ID of the regulator
 * @param voltage  Voltage output of the regulator measured in mV
 * @param current  Current output of the regulator measured in mA
 * @param temperature  Temerature of the regulator measured in milli Degrees Celsius
 * @param max_rated_current  The rated current of the regulator measured in mA
 * @param consumed_power  The integral of used power of the regulator. Measured in mAH
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_anv_regulator_status_send(mavlink_channel_t chan, uint8_t id, uint16_t voltage, uint16_t current, uint16_t temperature, uint16_t max_rated_current, uint16_t consumed_power)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, voltage);
    _mav_put_uint16_t(buf, 2, current);
    _mav_put_uint16_t(buf, 4, temperature);
    _mav_put_uint16_t(buf, 6, max_rated_current);
    _mav_put_uint16_t(buf, 8, consumed_power);
    _mav_put_uint8_t(buf, 10, id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS, buf, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_CRC);
#else
    mavlink_anv_regulator_status_t packet;
    packet.voltage = voltage;
    packet.current = current;
    packet.temperature = temperature;
    packet.max_rated_current = max_rated_current;
    packet.consumed_power = consumed_power;
    packet.id = id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS, (const char *)&packet, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_CRC);
#endif
}

/**
 * @brief Send a anv_regulator_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_anv_regulator_status_send_struct(mavlink_channel_t chan, const mavlink_anv_regulator_status_t* anv_regulator_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_regulator_status_send(chan, anv_regulator_status->id, anv_regulator_status->voltage, anv_regulator_status->current, anv_regulator_status->temperature, anv_regulator_status->max_rated_current, anv_regulator_status->consumed_power);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS, (const char *)anv_regulator_status, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_anv_regulator_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t id, uint16_t voltage, uint16_t current, uint16_t temperature, uint16_t max_rated_current, uint16_t consumed_power)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, voltage);
    _mav_put_uint16_t(buf, 2, current);
    _mav_put_uint16_t(buf, 4, temperature);
    _mav_put_uint16_t(buf, 6, max_rated_current);
    _mav_put_uint16_t(buf, 8, consumed_power);
    _mav_put_uint8_t(buf, 10, id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS, buf, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_CRC);
#else
    mavlink_anv_regulator_status_t *packet = (mavlink_anv_regulator_status_t *)msgbuf;
    packet->voltage = voltage;
    packet->current = current;
    packet->temperature = temperature;
    packet->max_rated_current = max_rated_current;
    packet->consumed_power = consumed_power;
    packet->id = id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS, (const char *)packet, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE ANV_REGULATOR_STATUS UNPACKING


/**
 * @brief Get field id from anv_regulator_status message
 *
 * @return  ID of the regulator
 */
static inline uint8_t mavlink_msg_anv_regulator_status_get_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field voltage from anv_regulator_status message
 *
 * @return  Voltage output of the regulator measured in mV
 */
static inline uint16_t mavlink_msg_anv_regulator_status_get_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field current from anv_regulator_status message
 *
 * @return  Current output of the regulator measured in mA
 */
static inline uint16_t mavlink_msg_anv_regulator_status_get_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field temperature from anv_regulator_status message
 *
 * @return  Temerature of the regulator measured in milli Degrees Celsius
 */
static inline uint16_t mavlink_msg_anv_regulator_status_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field max_rated_current from anv_regulator_status message
 *
 * @return  The rated current of the regulator measured in mA
 */
static inline uint16_t mavlink_msg_anv_regulator_status_get_max_rated_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field consumed_power from anv_regulator_status message
 *
 * @return  The integral of used power of the regulator. Measured in mAH
 */
static inline uint16_t mavlink_msg_anv_regulator_status_get_consumed_power(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Decode a anv_regulator_status message into a struct
 *
 * @param msg The message to decode
 * @param anv_regulator_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_anv_regulator_status_decode(const mavlink_message_t* msg, mavlink_anv_regulator_status_t* anv_regulator_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    anv_regulator_status->voltage = mavlink_msg_anv_regulator_status_get_voltage(msg);
    anv_regulator_status->current = mavlink_msg_anv_regulator_status_get_current(msg);
    anv_regulator_status->temperature = mavlink_msg_anv_regulator_status_get_temperature(msg);
    anv_regulator_status->max_rated_current = mavlink_msg_anv_regulator_status_get_max_rated_current(msg);
    anv_regulator_status->consumed_power = mavlink_msg_anv_regulator_status_get_consumed_power(msg);
    anv_regulator_status->id = mavlink_msg_anv_regulator_status_get_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN? msg->len : MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN;
        memset(anv_regulator_status, 0, MAVLINK_MSG_ID_ANV_REGULATOR_STATUS_LEN);
    memcpy(anv_regulator_status, _MAV_PAYLOAD(msg), len);
#endif
}
