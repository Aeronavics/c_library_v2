#pragma once
// MESSAGE ANV_LATENCY_REPORT PACKING

#define MAVLINK_MSG_ID_ANV_LATENCY_REPORT 5007


typedef struct __mavlink_anv_latency_report_t {
 uint64_t latency; /*<  The latency recorded by the host ping*/
 uint32_t seq; /*<  The sequence ID of the ping request*/
} mavlink_anv_latency_report_t;

#define MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN 12
#define MAVLINK_MSG_ID_ANV_LATENCY_REPORT_MIN_LEN 12
#define MAVLINK_MSG_ID_5007_LEN 12
#define MAVLINK_MSG_ID_5007_MIN_LEN 12

#define MAVLINK_MSG_ID_ANV_LATENCY_REPORT_CRC 237
#define MAVLINK_MSG_ID_5007_CRC 237



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ANV_LATENCY_REPORT { \
    5007, \
    "ANV_LATENCY_REPORT", \
    2, \
    {  { "latency", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_anv_latency_report_t, latency) }, \
         { "seq", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_anv_latency_report_t, seq) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ANV_LATENCY_REPORT { \
    "ANV_LATENCY_REPORT", \
    2, \
    {  { "latency", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_anv_latency_report_t, latency) }, \
         { "seq", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_anv_latency_report_t, seq) }, \
         } \
}
#endif

/**
 * @brief Pack a anv_latency_report message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param latency  The latency recorded by the host ping
 * @param seq  The sequence ID of the ping request
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_latency_report_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t latency, uint32_t seq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN];
    _mav_put_uint64_t(buf, 0, latency);
    _mav_put_uint32_t(buf, 8, seq);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN);
#else
    mavlink_anv_latency_report_t packet;
    packet.latency = latency;
    packet.seq = seq;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_LATENCY_REPORT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_MIN_LEN, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_CRC);
}

/**
 * @brief Pack a anv_latency_report message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param latency  The latency recorded by the host ping
 * @param seq  The sequence ID of the ping request
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_latency_report_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t latency,uint32_t seq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN];
    _mav_put_uint64_t(buf, 0, latency);
    _mav_put_uint32_t(buf, 8, seq);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN);
#else
    mavlink_anv_latency_report_t packet;
    packet.latency = latency;
    packet.seq = seq;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_LATENCY_REPORT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_MIN_LEN, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_CRC);
}

/**
 * @brief Encode a anv_latency_report struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param anv_latency_report C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_latency_report_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_anv_latency_report_t* anv_latency_report)
{
    return mavlink_msg_anv_latency_report_pack(system_id, component_id, msg, anv_latency_report->latency, anv_latency_report->seq);
}

/**
 * @brief Encode a anv_latency_report struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param anv_latency_report C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_latency_report_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_anv_latency_report_t* anv_latency_report)
{
    return mavlink_msg_anv_latency_report_pack_chan(system_id, component_id, chan, msg, anv_latency_report->latency, anv_latency_report->seq);
}

/**
 * @brief Send a anv_latency_report message
 * @param chan MAVLink channel to send the message
 *
 * @param latency  The latency recorded by the host ping
 * @param seq  The sequence ID of the ping request
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_anv_latency_report_send(mavlink_channel_t chan, uint64_t latency, uint32_t seq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN];
    _mav_put_uint64_t(buf, 0, latency);
    _mav_put_uint32_t(buf, 8, seq);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_LATENCY_REPORT, buf, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_MIN_LEN, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_CRC);
#else
    mavlink_anv_latency_report_t packet;
    packet.latency = latency;
    packet.seq = seq;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_LATENCY_REPORT, (const char *)&packet, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_MIN_LEN, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_CRC);
#endif
}

/**
 * @brief Send a anv_latency_report message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_anv_latency_report_send_struct(mavlink_channel_t chan, const mavlink_anv_latency_report_t* anv_latency_report)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_latency_report_send(chan, anv_latency_report->latency, anv_latency_report->seq);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_LATENCY_REPORT, (const char *)anv_latency_report, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_MIN_LEN, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_CRC);
#endif
}

#if MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_anv_latency_report_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t latency, uint32_t seq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, latency);
    _mav_put_uint32_t(buf, 8, seq);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_LATENCY_REPORT, buf, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_MIN_LEN, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_CRC);
#else
    mavlink_anv_latency_report_t *packet = (mavlink_anv_latency_report_t *)msgbuf;
    packet->latency = latency;
    packet->seq = seq;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_LATENCY_REPORT, (const char *)packet, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_MIN_LEN, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_CRC);
#endif
}
#endif

#endif

// MESSAGE ANV_LATENCY_REPORT UNPACKING


/**
 * @brief Get field latency from anv_latency_report message
 *
 * @return  The latency recorded by the host ping
 */
static inline uint64_t mavlink_msg_anv_latency_report_get_latency(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field seq from anv_latency_report message
 *
 * @return  The sequence ID of the ping request
 */
static inline uint32_t mavlink_msg_anv_latency_report_get_seq(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Decode a anv_latency_report message into a struct
 *
 * @param msg The message to decode
 * @param anv_latency_report C-struct to decode the message contents into
 */
static inline void mavlink_msg_anv_latency_report_decode(const mavlink_message_t* msg, mavlink_anv_latency_report_t* anv_latency_report)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    anv_latency_report->latency = mavlink_msg_anv_latency_report_get_latency(msg);
    anv_latency_report->seq = mavlink_msg_anv_latency_report_get_seq(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN? msg->len : MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN;
        memset(anv_latency_report, 0, MAVLINK_MSG_ID_ANV_LATENCY_REPORT_LEN);
    memcpy(anv_latency_report, _MAV_PAYLOAD(msg), len);
#endif
}
