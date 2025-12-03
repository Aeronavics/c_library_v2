#pragma once
// MESSAGE ANV_GSMC_DATA PACKING

#define MAVLINK_MSG_ID_ANV_GSMC_DATA 5015


typedef struct __mavlink_anv_gsmc_data_t {
 char gsmc_ip[16]; /*<  Ground Station IP*/
} mavlink_anv_gsmc_data_t;

#define MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN 16
#define MAVLINK_MSG_ID_ANV_GSMC_DATA_MIN_LEN 16
#define MAVLINK_MSG_ID_5015_LEN 16
#define MAVLINK_MSG_ID_5015_MIN_LEN 16

#define MAVLINK_MSG_ID_ANV_GSMC_DATA_CRC 252
#define MAVLINK_MSG_ID_5015_CRC 252

#define MAVLINK_MSG_ANV_GSMC_DATA_FIELD_GSMC_IP_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ANV_GSMC_DATA { \
    5015, \
    "ANV_GSMC_DATA", \
    1, \
    {  { "gsmc_ip", NULL, MAVLINK_TYPE_CHAR, 16, 0, offsetof(mavlink_anv_gsmc_data_t, gsmc_ip) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ANV_GSMC_DATA { \
    "ANV_GSMC_DATA", \
    1, \
    {  { "gsmc_ip", NULL, MAVLINK_TYPE_CHAR, 16, 0, offsetof(mavlink_anv_gsmc_data_t, gsmc_ip) }, \
         } \
}
#endif

/**
 * @brief Pack a anv_gsmc_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param gsmc_ip  Ground Station IP
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_gsmc_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *gsmc_ip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN];

    _mav_put_char_array(buf, 0, gsmc_ip, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN);
#else
    mavlink_anv_gsmc_data_t packet;

    mav_array_memcpy(packet.gsmc_ip, gsmc_ip, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_GSMC_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ANV_GSMC_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN, MAVLINK_MSG_ID_ANV_GSMC_DATA_CRC);
}

/**
 * @brief Pack a anv_gsmc_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gsmc_ip  Ground Station IP
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_gsmc_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *gsmc_ip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN];

    _mav_put_char_array(buf, 0, gsmc_ip, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN);
#else
    mavlink_anv_gsmc_data_t packet;

    mav_array_memcpy(packet.gsmc_ip, gsmc_ip, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_GSMC_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ANV_GSMC_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN, MAVLINK_MSG_ID_ANV_GSMC_DATA_CRC);
}

/**
 * @brief Encode a anv_gsmc_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param anv_gsmc_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_gsmc_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_anv_gsmc_data_t* anv_gsmc_data)
{
    return mavlink_msg_anv_gsmc_data_pack(system_id, component_id, msg, anv_gsmc_data->gsmc_ip);
}

/**
 * @brief Encode a anv_gsmc_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param anv_gsmc_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_gsmc_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_anv_gsmc_data_t* anv_gsmc_data)
{
    return mavlink_msg_anv_gsmc_data_pack_chan(system_id, component_id, chan, msg, anv_gsmc_data->gsmc_ip);
}

/**
 * @brief Send a anv_gsmc_data message
 * @param chan MAVLink channel to send the message
 *
 * @param gsmc_ip  Ground Station IP
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_anv_gsmc_data_send(mavlink_channel_t chan, const char *gsmc_ip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN];

    _mav_put_char_array(buf, 0, gsmc_ip, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_GSMC_DATA, buf, MAVLINK_MSG_ID_ANV_GSMC_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN, MAVLINK_MSG_ID_ANV_GSMC_DATA_CRC);
#else
    mavlink_anv_gsmc_data_t packet;

    mav_array_memcpy(packet.gsmc_ip, gsmc_ip, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_GSMC_DATA, (const char *)&packet, MAVLINK_MSG_ID_ANV_GSMC_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN, MAVLINK_MSG_ID_ANV_GSMC_DATA_CRC);
#endif
}

/**
 * @brief Send a anv_gsmc_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_anv_gsmc_data_send_struct(mavlink_channel_t chan, const mavlink_anv_gsmc_data_t* anv_gsmc_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_gsmc_data_send(chan, anv_gsmc_data->gsmc_ip);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_GSMC_DATA, (const char *)anv_gsmc_data, MAVLINK_MSG_ID_ANV_GSMC_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN, MAVLINK_MSG_ID_ANV_GSMC_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_anv_gsmc_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *gsmc_ip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_char_array(buf, 0, gsmc_ip, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_GSMC_DATA, buf, MAVLINK_MSG_ID_ANV_GSMC_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN, MAVLINK_MSG_ID_ANV_GSMC_DATA_CRC);
#else
    mavlink_anv_gsmc_data_t *packet = (mavlink_anv_gsmc_data_t *)msgbuf;

    mav_array_memcpy(packet->gsmc_ip, gsmc_ip, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_GSMC_DATA, (const char *)packet, MAVLINK_MSG_ID_ANV_GSMC_DATA_MIN_LEN, MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN, MAVLINK_MSG_ID_ANV_GSMC_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE ANV_GSMC_DATA UNPACKING


/**
 * @brief Get field gsmc_ip from anv_gsmc_data message
 *
 * @return  Ground Station IP
 */
static inline uint16_t mavlink_msg_anv_gsmc_data_get_gsmc_ip(const mavlink_message_t* msg, char *gsmc_ip)
{
    return _MAV_RETURN_char_array(msg, gsmc_ip, 16,  0);
}

/**
 * @brief Decode a anv_gsmc_data message into a struct
 *
 * @param msg The message to decode
 * @param anv_gsmc_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_anv_gsmc_data_decode(const mavlink_message_t* msg, mavlink_anv_gsmc_data_t* anv_gsmc_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_gsmc_data_get_gsmc_ip(msg, anv_gsmc_data->gsmc_ip);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN? msg->len : MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN;
        memset(anv_gsmc_data, 0, MAVLINK_MSG_ID_ANV_GSMC_DATA_LEN);
    memcpy(anv_gsmc_data, _MAV_PAYLOAD(msg), len);
#endif
}
