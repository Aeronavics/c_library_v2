#pragma once
// MESSAGE ANV_SMART_PORT_POLL_PACKET PACKING

#define MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET 5013


typedef struct __mavlink_anv_smart_port_poll_packet_t {
 uint8_t smart_port_poll_packet[2]; /*<  Smart port poll packet*/
} mavlink_anv_smart_port_poll_packet_t;

#define MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN 2
#define MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_MIN_LEN 2
#define MAVLINK_MSG_ID_5013_LEN 2
#define MAVLINK_MSG_ID_5013_MIN_LEN 2

#define MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_CRC 102
#define MAVLINK_MSG_ID_5013_CRC 102

#define MAVLINK_MSG_ANV_SMART_PORT_POLL_PACKET_FIELD_SMART_PORT_POLL_PACKET_LEN 2

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ANV_SMART_PORT_POLL_PACKET { \
    5013, \
    "ANV_SMART_PORT_POLL_PACKET", \
    1, \
    {  { "smart_port_poll_packet", NULL, MAVLINK_TYPE_UINT8_T, 2, 0, offsetof(mavlink_anv_smart_port_poll_packet_t, smart_port_poll_packet) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ANV_SMART_PORT_POLL_PACKET { \
    "ANV_SMART_PORT_POLL_PACKET", \
    1, \
    {  { "smart_port_poll_packet", NULL, MAVLINK_TYPE_UINT8_T, 2, 0, offsetof(mavlink_anv_smart_port_poll_packet_t, smart_port_poll_packet) }, \
         } \
}
#endif

/**
 * @brief Pack a anv_smart_port_poll_packet message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param smart_port_poll_packet  Smart port poll packet
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_smart_port_poll_packet_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const uint8_t *smart_port_poll_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN];

    _mav_put_uint8_t_array(buf, 0, smart_port_poll_packet, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN);
#else
    mavlink_anv_smart_port_poll_packet_t packet;

    mav_array_memcpy(packet.smart_port_poll_packet, smart_port_poll_packet, sizeof(uint8_t)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_MIN_LEN, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_CRC);
}

/**
 * @brief Pack a anv_smart_port_poll_packet message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param smart_port_poll_packet  Smart port poll packet
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_smart_port_poll_packet_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const uint8_t *smart_port_poll_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN];

    _mav_put_uint8_t_array(buf, 0, smart_port_poll_packet, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN);
#else
    mavlink_anv_smart_port_poll_packet_t packet;

    mav_array_memcpy(packet.smart_port_poll_packet, smart_port_poll_packet, sizeof(uint8_t)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_MIN_LEN, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_CRC);
}

/**
 * @brief Encode a anv_smart_port_poll_packet struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param anv_smart_port_poll_packet C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_smart_port_poll_packet_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_anv_smart_port_poll_packet_t* anv_smart_port_poll_packet)
{
    return mavlink_msg_anv_smart_port_poll_packet_pack(system_id, component_id, msg, anv_smart_port_poll_packet->smart_port_poll_packet);
}

/**
 * @brief Encode a anv_smart_port_poll_packet struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param anv_smart_port_poll_packet C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_smart_port_poll_packet_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_anv_smart_port_poll_packet_t* anv_smart_port_poll_packet)
{
    return mavlink_msg_anv_smart_port_poll_packet_pack_chan(system_id, component_id, chan, msg, anv_smart_port_poll_packet->smart_port_poll_packet);
}

/**
 * @brief Send a anv_smart_port_poll_packet message
 * @param chan MAVLink channel to send the message
 *
 * @param smart_port_poll_packet  Smart port poll packet
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_anv_smart_port_poll_packet_send(mavlink_channel_t chan, const uint8_t *smart_port_poll_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN];

    _mav_put_uint8_t_array(buf, 0, smart_port_poll_packet, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET, buf, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_MIN_LEN, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_CRC);
#else
    mavlink_anv_smart_port_poll_packet_t packet;

    mav_array_memcpy(packet.smart_port_poll_packet, smart_port_poll_packet, sizeof(uint8_t)*2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET, (const char *)&packet, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_MIN_LEN, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_CRC);
#endif
}

/**
 * @brief Send a anv_smart_port_poll_packet message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_anv_smart_port_poll_packet_send_struct(mavlink_channel_t chan, const mavlink_anv_smart_port_poll_packet_t* anv_smart_port_poll_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_smart_port_poll_packet_send(chan, anv_smart_port_poll_packet->smart_port_poll_packet);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET, (const char *)anv_smart_port_poll_packet, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_MIN_LEN, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_CRC);
#endif
}

#if MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_anv_smart_port_poll_packet_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const uint8_t *smart_port_poll_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_uint8_t_array(buf, 0, smart_port_poll_packet, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET, buf, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_MIN_LEN, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_CRC);
#else
    mavlink_anv_smart_port_poll_packet_t *packet = (mavlink_anv_smart_port_poll_packet_t *)msgbuf;

    mav_array_memcpy(packet->smart_port_poll_packet, smart_port_poll_packet, sizeof(uint8_t)*2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET, (const char *)packet, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_MIN_LEN, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_CRC);
#endif
}
#endif

#endif

// MESSAGE ANV_SMART_PORT_POLL_PACKET UNPACKING


/**
 * @brief Get field smart_port_poll_packet from anv_smart_port_poll_packet message
 *
 * @return  Smart port poll packet
 */
static inline uint16_t mavlink_msg_anv_smart_port_poll_packet_get_smart_port_poll_packet(const mavlink_message_t* msg, uint8_t *smart_port_poll_packet)
{
    return _MAV_RETURN_uint8_t_array(msg, smart_port_poll_packet, 2,  0);
}

/**
 * @brief Decode a anv_smart_port_poll_packet message into a struct
 *
 * @param msg The message to decode
 * @param anv_smart_port_poll_packet C-struct to decode the message contents into
 */
static inline void mavlink_msg_anv_smart_port_poll_packet_decode(const mavlink_message_t* msg, mavlink_anv_smart_port_poll_packet_t* anv_smart_port_poll_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_smart_port_poll_packet_get_smart_port_poll_packet(msg, anv_smart_port_poll_packet->smart_port_poll_packet);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN? msg->len : MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN;
        memset(anv_smart_port_poll_packet, 0, MAVLINK_MSG_ID_ANV_SMART_PORT_POLL_PACKET_LEN);
    memcpy(anv_smart_port_poll_packet, _MAV_PAYLOAD(msg), len);
#endif
}
