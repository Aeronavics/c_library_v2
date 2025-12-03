#pragma once
// MESSAGE ANV_GSCB_DATA PACKING

#define MAVLINK_MSG_ID_ANV_GSCB_DATA 5006


typedef struct __mavlink_anv_gscb_data_t {
 uint8_t active_profile; /*<  The current profile in use*/
 uint8_t battery_1_enabled; /*<  1 if the battery is enabled, 0 otherwise*/
 uint8_t battery_2_enabled; /*<  1 if the battery is enabled, 0 otherwise*/
 uint8_t external_power_enabled; /*<  1 if the external power is enabled, 0 otherwise*/
 uint8_t tray_fan_enabled; /*<  1 if the tray fan is enabled, 0 otherwise*/
 uint8_t electronics_fan_enabled; /*<  1 if the electronics fan is enabled, 0 otherwise*/
} mavlink_anv_gscb_data_t;

#define MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN 6
#define MAVLINK_MSG_ID_ANV_GSCB_DATA_MIN_LEN 6
#define MAVLINK_MSG_ID_5006_LEN 6
#define MAVLINK_MSG_ID_5006_MIN_LEN 6

#define MAVLINK_MSG_ID_ANV_GSCB_DATA_CRC 134
#define MAVLINK_MSG_ID_5006_CRC 134



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ANV_GSCB_DATA { \
    5006, \
    "ANV_GSCB_DATA", \
    6, \
    {  { "active_profile", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_anv_gscb_data_t, active_profile) }, \
         { "battery_1_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_anv_gscb_data_t, battery_1_enabled) }, \
         { "battery_2_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_anv_gscb_data_t, battery_2_enabled) }, \
         { "external_power_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_anv_gscb_data_t, external_power_enabled) }, \
         { "tray_fan_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_anv_gscb_data_t, tray_fan_enabled) }, \
         { "electronics_fan_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_anv_gscb_data_t, electronics_fan_enabled) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ANV_GSCB_DATA { \
    "ANV_GSCB_DATA", \
    6, \
    {  { "active_profile", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_anv_gscb_data_t, active_profile) }, \
         { "battery_1_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_anv_gscb_data_t, battery_1_enabled) }, \
         { "battery_2_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_anv_gscb_data_t, battery_2_enabled) }, \
         { "external_power_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_anv_gscb_data_t, external_power_enabled) }, \
         { "tray_fan_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_anv_gscb_data_t, tray_fan_enabled) }, \
         { "electronics_fan_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_anv_gscb_data_t, electronics_fan_enabled) }, \
         } \
}
#endif

/**
 * @brief Pack a anv_gscb_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param active_profile  The current profile in use
 * @param battery_1_enabled  1 if the battery is enabled, 0 otherwise
 * @param battery_2_enabled  1 if the battery is enabled, 0 otherwise
 * @param external_power_enabled  1 if the external power is enabled, 0 otherwise
 * @param tray_fan_enabled  1 if the tray fan is enabled, 0 otherwise
 * @param electronics_fan_enabled  1 if the electronics fan is enabled, 0 otherwise
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_gscb_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t active_profile, uint8_t battery_1_enabled, uint8_t battery_2_enabled, uint8_t external_power_enabled, uint8_t tray_fan_enabled, uint8_t electronics_fan_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN];
    _mav_put_uint8_t(buf, 0, active_profile);
    _mav_put_uint8_t(buf, 1, battery_1_enabled);
    _mav_put_uint8_t(buf, 2, battery_2_enabled);
    _mav_put_uint8_t(buf, 3, external_power_enabled);
    _mav_put_uint8_t(buf, 4, tray_fan_enabled);
    _mav_put_uint8_t(buf, 5, electronics_fan_enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN);
#else
    mavlink_anv_gscb_data_t packet;
    packet.active_profile = active_profile;
    packet.battery_1_enabled = battery_1_enabled;
    packet.battery_2_enabled = battery_2_enabled;
    packet.external_power_enabled = external_power_enabled;
    packet.tray_fan_enabled = tray_fan_enabled;
    packet.electronics_fan_enabled = electronics_fan_enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_GSCB_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ANV_GSCB_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN, MAVLINK_MSG_ID_ANV_GSCB_DATA_CRC);
}

/**
 * @brief Pack a anv_gscb_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param active_profile  The current profile in use
 * @param battery_1_enabled  1 if the battery is enabled, 0 otherwise
 * @param battery_2_enabled  1 if the battery is enabled, 0 otherwise
 * @param external_power_enabled  1 if the external power is enabled, 0 otherwise
 * @param tray_fan_enabled  1 if the tray fan is enabled, 0 otherwise
 * @param electronics_fan_enabled  1 if the electronics fan is enabled, 0 otherwise
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_gscb_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t active_profile,uint8_t battery_1_enabled,uint8_t battery_2_enabled,uint8_t external_power_enabled,uint8_t tray_fan_enabled,uint8_t electronics_fan_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN];
    _mav_put_uint8_t(buf, 0, active_profile);
    _mav_put_uint8_t(buf, 1, battery_1_enabled);
    _mav_put_uint8_t(buf, 2, battery_2_enabled);
    _mav_put_uint8_t(buf, 3, external_power_enabled);
    _mav_put_uint8_t(buf, 4, tray_fan_enabled);
    _mav_put_uint8_t(buf, 5, electronics_fan_enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN);
#else
    mavlink_anv_gscb_data_t packet;
    packet.active_profile = active_profile;
    packet.battery_1_enabled = battery_1_enabled;
    packet.battery_2_enabled = battery_2_enabled;
    packet.external_power_enabled = external_power_enabled;
    packet.tray_fan_enabled = tray_fan_enabled;
    packet.electronics_fan_enabled = electronics_fan_enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_GSCB_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ANV_GSCB_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN, MAVLINK_MSG_ID_ANV_GSCB_DATA_CRC);
}

/**
 * @brief Encode a anv_gscb_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param anv_gscb_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_gscb_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_anv_gscb_data_t* anv_gscb_data)
{
    return mavlink_msg_anv_gscb_data_pack(system_id, component_id, msg, anv_gscb_data->active_profile, anv_gscb_data->battery_1_enabled, anv_gscb_data->battery_2_enabled, anv_gscb_data->external_power_enabled, anv_gscb_data->tray_fan_enabled, anv_gscb_data->electronics_fan_enabled);
}

/**
 * @brief Encode a anv_gscb_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param anv_gscb_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_gscb_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_anv_gscb_data_t* anv_gscb_data)
{
    return mavlink_msg_anv_gscb_data_pack_chan(system_id, component_id, chan, msg, anv_gscb_data->active_profile, anv_gscb_data->battery_1_enabled, anv_gscb_data->battery_2_enabled, anv_gscb_data->external_power_enabled, anv_gscb_data->tray_fan_enabled, anv_gscb_data->electronics_fan_enabled);
}

/**
 * @brief Send a anv_gscb_data message
 * @param chan MAVLink channel to send the message
 *
 * @param active_profile  The current profile in use
 * @param battery_1_enabled  1 if the battery is enabled, 0 otherwise
 * @param battery_2_enabled  1 if the battery is enabled, 0 otherwise
 * @param external_power_enabled  1 if the external power is enabled, 0 otherwise
 * @param tray_fan_enabled  1 if the tray fan is enabled, 0 otherwise
 * @param electronics_fan_enabled  1 if the electronics fan is enabled, 0 otherwise
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_anv_gscb_data_send(mavlink_channel_t chan, uint8_t active_profile, uint8_t battery_1_enabled, uint8_t battery_2_enabled, uint8_t external_power_enabled, uint8_t tray_fan_enabled, uint8_t electronics_fan_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN];
    _mav_put_uint8_t(buf, 0, active_profile);
    _mav_put_uint8_t(buf, 1, battery_1_enabled);
    _mav_put_uint8_t(buf, 2, battery_2_enabled);
    _mav_put_uint8_t(buf, 3, external_power_enabled);
    _mav_put_uint8_t(buf, 4, tray_fan_enabled);
    _mav_put_uint8_t(buf, 5, electronics_fan_enabled);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_GSCB_DATA, buf, MAVLINK_MSG_ID_ANV_GSCB_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN, MAVLINK_MSG_ID_ANV_GSCB_DATA_CRC);
#else
    mavlink_anv_gscb_data_t packet;
    packet.active_profile = active_profile;
    packet.battery_1_enabled = battery_1_enabled;
    packet.battery_2_enabled = battery_2_enabled;
    packet.external_power_enabled = external_power_enabled;
    packet.tray_fan_enabled = tray_fan_enabled;
    packet.electronics_fan_enabled = electronics_fan_enabled;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_GSCB_DATA, (const char *)&packet, MAVLINK_MSG_ID_ANV_GSCB_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN, MAVLINK_MSG_ID_ANV_GSCB_DATA_CRC);
#endif
}

/**
 * @brief Send a anv_gscb_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_anv_gscb_data_send_struct(mavlink_channel_t chan, const mavlink_anv_gscb_data_t* anv_gscb_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_gscb_data_send(chan, anv_gscb_data->active_profile, anv_gscb_data->battery_1_enabled, anv_gscb_data->battery_2_enabled, anv_gscb_data->external_power_enabled, anv_gscb_data->tray_fan_enabled, anv_gscb_data->electronics_fan_enabled);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_GSCB_DATA, (const char *)anv_gscb_data, MAVLINK_MSG_ID_ANV_GSCB_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN, MAVLINK_MSG_ID_ANV_GSCB_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_anv_gscb_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t active_profile, uint8_t battery_1_enabled, uint8_t battery_2_enabled, uint8_t external_power_enabled, uint8_t tray_fan_enabled, uint8_t electronics_fan_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, active_profile);
    _mav_put_uint8_t(buf, 1, battery_1_enabled);
    _mav_put_uint8_t(buf, 2, battery_2_enabled);
    _mav_put_uint8_t(buf, 3, external_power_enabled);
    _mav_put_uint8_t(buf, 4, tray_fan_enabled);
    _mav_put_uint8_t(buf, 5, electronics_fan_enabled);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_GSCB_DATA, buf, MAVLINK_MSG_ID_ANV_GSCB_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN, MAVLINK_MSG_ID_ANV_GSCB_DATA_CRC);
#else
    mavlink_anv_gscb_data_t *packet = (mavlink_anv_gscb_data_t *)msgbuf;
    packet->active_profile = active_profile;
    packet->battery_1_enabled = battery_1_enabled;
    packet->battery_2_enabled = battery_2_enabled;
    packet->external_power_enabled = external_power_enabled;
    packet->tray_fan_enabled = tray_fan_enabled;
    packet->electronics_fan_enabled = electronics_fan_enabled;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_GSCB_DATA, (const char *)packet, MAVLINK_MSG_ID_ANV_GSCB_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN, MAVLINK_MSG_ID_ANV_GSCB_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE ANV_GSCB_DATA UNPACKING


/**
 * @brief Get field active_profile from anv_gscb_data message
 *
 * @return  The current profile in use
 */
static inline uint8_t mavlink_msg_anv_gscb_data_get_active_profile(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field battery_1_enabled from anv_gscb_data message
 *
 * @return  1 if the battery is enabled, 0 otherwise
 */
static inline uint8_t mavlink_msg_anv_gscb_data_get_battery_1_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field battery_2_enabled from anv_gscb_data message
 *
 * @return  1 if the battery is enabled, 0 otherwise
 */
static inline uint8_t mavlink_msg_anv_gscb_data_get_battery_2_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field external_power_enabled from anv_gscb_data message
 *
 * @return  1 if the external power is enabled, 0 otherwise
 */
static inline uint8_t mavlink_msg_anv_gscb_data_get_external_power_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field tray_fan_enabled from anv_gscb_data message
 *
 * @return  1 if the tray fan is enabled, 0 otherwise
 */
static inline uint8_t mavlink_msg_anv_gscb_data_get_tray_fan_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field electronics_fan_enabled from anv_gscb_data message
 *
 * @return  1 if the electronics fan is enabled, 0 otherwise
 */
static inline uint8_t mavlink_msg_anv_gscb_data_get_electronics_fan_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Decode a anv_gscb_data message into a struct
 *
 * @param msg The message to decode
 * @param anv_gscb_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_anv_gscb_data_decode(const mavlink_message_t* msg, mavlink_anv_gscb_data_t* anv_gscb_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    anv_gscb_data->active_profile = mavlink_msg_anv_gscb_data_get_active_profile(msg);
    anv_gscb_data->battery_1_enabled = mavlink_msg_anv_gscb_data_get_battery_1_enabled(msg);
    anv_gscb_data->battery_2_enabled = mavlink_msg_anv_gscb_data_get_battery_2_enabled(msg);
    anv_gscb_data->external_power_enabled = mavlink_msg_anv_gscb_data_get_external_power_enabled(msg);
    anv_gscb_data->tray_fan_enabled = mavlink_msg_anv_gscb_data_get_tray_fan_enabled(msg);
    anv_gscb_data->electronics_fan_enabled = mavlink_msg_anv_gscb_data_get_electronics_fan_enabled(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN? msg->len : MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN;
        memset(anv_gscb_data, 0, MAVLINK_MSG_ID_ANV_GSCB_DATA_LEN);
    memcpy(anv_gscb_data, _MAV_PAYLOAD(msg), len);
#endif
}
