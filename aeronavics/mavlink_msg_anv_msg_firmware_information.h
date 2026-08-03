#pragma once
// MESSAGE ANV_MSG_FIRMWARE_INFORMATION PACKING

#define MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION 5005


typedef struct __mavlink_anv_msg_firmware_information_t {
 uint32_t firmware; /*<  Currently running firmware version*/
} mavlink_anv_msg_firmware_information_t;

#define MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN 4
#define MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_MIN_LEN 4
#define MAVLINK_MSG_ID_5005_LEN 4
#define MAVLINK_MSG_ID_5005_MIN_LEN 4

#define MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_CRC 26
#define MAVLINK_MSG_ID_5005_CRC 26



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ANV_MSG_FIRMWARE_INFORMATION { \
    5005, \
    "ANV_MSG_FIRMWARE_INFORMATION", \
    1, \
    {  { "firmware", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_anv_msg_firmware_information_t, firmware) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ANV_MSG_FIRMWARE_INFORMATION { \
    "ANV_MSG_FIRMWARE_INFORMATION", \
    1, \
    {  { "firmware", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_anv_msg_firmware_information_t, firmware) }, \
         } \
}
#endif

/**
 * @brief Pack a anv_msg_firmware_information message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param firmware  Currently running firmware version
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_msg_firmware_information_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t firmware)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN];
    _mav_put_uint32_t(buf, 0, firmware);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN);
#else
    mavlink_anv_msg_firmware_information_t packet;
    packet.firmware = firmware;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_CRC);
}

/**
 * @brief Pack a anv_msg_firmware_information message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param firmware  Currently running firmware version
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_msg_firmware_information_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t firmware)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN];
    _mav_put_uint32_t(buf, 0, firmware);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN);
#else
    mavlink_anv_msg_firmware_information_t packet;
    packet.firmware = firmware;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN);
#endif
}

/**
 * @brief Pack a anv_msg_firmware_information message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param firmware  Currently running firmware version
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_msg_firmware_information_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t firmware)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN];
    _mav_put_uint32_t(buf, 0, firmware);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN);
#else
    mavlink_anv_msg_firmware_information_t packet;
    packet.firmware = firmware;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_CRC);
}

/**
 * @brief Encode a anv_msg_firmware_information struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param anv_msg_firmware_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_msg_firmware_information_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_anv_msg_firmware_information_t* anv_msg_firmware_information)
{
    return mavlink_msg_anv_msg_firmware_information_pack(system_id, component_id, msg, anv_msg_firmware_information->firmware);
}

/**
 * @brief Encode a anv_msg_firmware_information struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param anv_msg_firmware_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_msg_firmware_information_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_anv_msg_firmware_information_t* anv_msg_firmware_information)
{
    return mavlink_msg_anv_msg_firmware_information_pack_chan(system_id, component_id, chan, msg, anv_msg_firmware_information->firmware);
}

/**
 * @brief Encode a anv_msg_firmware_information struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param anv_msg_firmware_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_msg_firmware_information_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_anv_msg_firmware_information_t* anv_msg_firmware_information)
{
    return mavlink_msg_anv_msg_firmware_information_pack_status(system_id, component_id, _status, msg,  anv_msg_firmware_information->firmware);
}

/**
 * @brief Send a anv_msg_firmware_information message
 * @param chan MAVLink channel to send the message
 *
 * @param firmware  Currently running firmware version
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_anv_msg_firmware_information_send(mavlink_channel_t chan, uint32_t firmware)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN];
    _mav_put_uint32_t(buf, 0, firmware);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION, buf, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_CRC);
#else
    mavlink_anv_msg_firmware_information_t packet;
    packet.firmware = firmware;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION, (const char *)&packet, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_CRC);
#endif
}

/**
 * @brief Send a anv_msg_firmware_information message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_anv_msg_firmware_information_send_struct(mavlink_channel_t chan, const mavlink_anv_msg_firmware_information_t* anv_msg_firmware_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_msg_firmware_information_send(chan, anv_msg_firmware_information->firmware);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION, (const char *)anv_msg_firmware_information, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_anv_msg_firmware_information_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t firmware)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, firmware);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION, buf, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_CRC);
#else
    mavlink_anv_msg_firmware_information_t *packet = (mavlink_anv_msg_firmware_information_t *)msgbuf;
    packet->firmware = firmware;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION, (const char *)packet, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_CRC);
#endif
}
#endif

#endif

// MESSAGE ANV_MSG_FIRMWARE_INFORMATION UNPACKING


/**
 * @brief Get field firmware from anv_msg_firmware_information message
 *
 * @return  Currently running firmware version
 */
static inline uint32_t mavlink_msg_anv_msg_firmware_information_get_firmware(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Decode a anv_msg_firmware_information message into a struct
 *
 * @param msg The message to decode
 * @param anv_msg_firmware_information C-struct to decode the message contents into
 */
static inline void mavlink_msg_anv_msg_firmware_information_decode(const mavlink_message_t* msg, mavlink_anv_msg_firmware_information_t* anv_msg_firmware_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    anv_msg_firmware_information->firmware = mavlink_msg_anv_msg_firmware_information_get_firmware(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN? msg->len : MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN;
        memset(anv_msg_firmware_information, 0, MAVLINK_MSG_ID_ANV_MSG_FIRMWARE_INFORMATION_LEN);
    memcpy(anv_msg_firmware_information, _MAV_PAYLOAD(msg), len);
#endif
}
