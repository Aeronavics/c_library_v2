#pragma once
// MESSAGE ANV_MSG_BUFFER_STATUS PACKING

#define MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS 5001


typedef struct __mavlink_anv_msg_buffer_status_t {
 uint16_t buffer_type; /*<  Buffer type*/
 uint16_t min_space; /*<  */
 uint16_t max_space; /*<  Temerature of the regulator measured in milli Degrees Celsius*/
 uint16_t avg_space; /*<  The rated current of the regulator measured in mA*/
 uint8_t id; /*<  ID of the buffer*/
} mavlink_anv_msg_buffer_status_t;

#define MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN 9
#define MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_MIN_LEN 9
#define MAVLINK_MSG_ID_5001_LEN 9
#define MAVLINK_MSG_ID_5001_MIN_LEN 9

#define MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_CRC 158
#define MAVLINK_MSG_ID_5001_CRC 158



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ANV_MSG_BUFFER_STATUS { \
    5001, \
    "ANV_MSG_BUFFER_STATUS", \
    5, \
    {  { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_anv_msg_buffer_status_t, id) }, \
         { "buffer_type", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_anv_msg_buffer_status_t, buffer_type) }, \
         { "min_space", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_anv_msg_buffer_status_t, min_space) }, \
         { "max_space", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_anv_msg_buffer_status_t, max_space) }, \
         { "avg_space", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_anv_msg_buffer_status_t, avg_space) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ANV_MSG_BUFFER_STATUS { \
    "ANV_MSG_BUFFER_STATUS", \
    5, \
    {  { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_anv_msg_buffer_status_t, id) }, \
         { "buffer_type", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_anv_msg_buffer_status_t, buffer_type) }, \
         { "min_space", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_anv_msg_buffer_status_t, min_space) }, \
         { "max_space", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_anv_msg_buffer_status_t, max_space) }, \
         { "avg_space", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_anv_msg_buffer_status_t, avg_space) }, \
         } \
}
#endif

/**
 * @brief Pack a anv_msg_buffer_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id  ID of the buffer
 * @param buffer_type  Buffer type
 * @param min_space  
 * @param max_space  Temerature of the regulator measured in milli Degrees Celsius
 * @param avg_space  The rated current of the regulator measured in mA
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_msg_buffer_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t id, uint16_t buffer_type, uint16_t min_space, uint16_t max_space, uint16_t avg_space)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, buffer_type);
    _mav_put_uint16_t(buf, 2, min_space);
    _mav_put_uint16_t(buf, 4, max_space);
    _mav_put_uint16_t(buf, 6, avg_space);
    _mav_put_uint8_t(buf, 8, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN);
#else
    mavlink_anv_msg_buffer_status_t packet;
    packet.buffer_type = buffer_type;
    packet.min_space = min_space;
    packet.max_space = max_space;
    packet.avg_space = avg_space;
    packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_CRC);
}

/**
 * @brief Pack a anv_msg_buffer_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param id  ID of the buffer
 * @param buffer_type  Buffer type
 * @param min_space  
 * @param max_space  Temerature of the regulator measured in milli Degrees Celsius
 * @param avg_space  The rated current of the regulator measured in mA
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_msg_buffer_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t id, uint16_t buffer_type, uint16_t min_space, uint16_t max_space, uint16_t avg_space)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, buffer_type);
    _mav_put_uint16_t(buf, 2, min_space);
    _mav_put_uint16_t(buf, 4, max_space);
    _mav_put_uint16_t(buf, 6, avg_space);
    _mav_put_uint8_t(buf, 8, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN);
#else
    mavlink_anv_msg_buffer_status_t packet;
    packet.buffer_type = buffer_type;
    packet.min_space = min_space;
    packet.max_space = max_space;
    packet.avg_space = avg_space;
    packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN);
#endif
}

/**
 * @brief Pack a anv_msg_buffer_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param id  ID of the buffer
 * @param buffer_type  Buffer type
 * @param min_space  
 * @param max_space  Temerature of the regulator measured in milli Degrees Celsius
 * @param avg_space  The rated current of the regulator measured in mA
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_anv_msg_buffer_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t id,uint16_t buffer_type,uint16_t min_space,uint16_t max_space,uint16_t avg_space)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, buffer_type);
    _mav_put_uint16_t(buf, 2, min_space);
    _mav_put_uint16_t(buf, 4, max_space);
    _mav_put_uint16_t(buf, 6, avg_space);
    _mav_put_uint8_t(buf, 8, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN);
#else
    mavlink_anv_msg_buffer_status_t packet;
    packet.buffer_type = buffer_type;
    packet.min_space = min_space;
    packet.max_space = max_space;
    packet.avg_space = avg_space;
    packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_CRC);
}

/**
 * @brief Encode a anv_msg_buffer_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param anv_msg_buffer_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_msg_buffer_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_anv_msg_buffer_status_t* anv_msg_buffer_status)
{
    return mavlink_msg_anv_msg_buffer_status_pack(system_id, component_id, msg, anv_msg_buffer_status->id, anv_msg_buffer_status->buffer_type, anv_msg_buffer_status->min_space, anv_msg_buffer_status->max_space, anv_msg_buffer_status->avg_space);
}

/**
 * @brief Encode a anv_msg_buffer_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param anv_msg_buffer_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_msg_buffer_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_anv_msg_buffer_status_t* anv_msg_buffer_status)
{
    return mavlink_msg_anv_msg_buffer_status_pack_chan(system_id, component_id, chan, msg, anv_msg_buffer_status->id, anv_msg_buffer_status->buffer_type, anv_msg_buffer_status->min_space, anv_msg_buffer_status->max_space, anv_msg_buffer_status->avg_space);
}

/**
 * @brief Encode a anv_msg_buffer_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param anv_msg_buffer_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_anv_msg_buffer_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_anv_msg_buffer_status_t* anv_msg_buffer_status)
{
    return mavlink_msg_anv_msg_buffer_status_pack_status(system_id, component_id, _status, msg,  anv_msg_buffer_status->id, anv_msg_buffer_status->buffer_type, anv_msg_buffer_status->min_space, anv_msg_buffer_status->max_space, anv_msg_buffer_status->avg_space);
}

/**
 * @brief Send a anv_msg_buffer_status message
 * @param chan MAVLink channel to send the message
 *
 * @param id  ID of the buffer
 * @param buffer_type  Buffer type
 * @param min_space  
 * @param max_space  Temerature of the regulator measured in milli Degrees Celsius
 * @param avg_space  The rated current of the regulator measured in mA
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_anv_msg_buffer_status_send(mavlink_channel_t chan, uint8_t id, uint16_t buffer_type, uint16_t min_space, uint16_t max_space, uint16_t avg_space)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, buffer_type);
    _mav_put_uint16_t(buf, 2, min_space);
    _mav_put_uint16_t(buf, 4, max_space);
    _mav_put_uint16_t(buf, 6, avg_space);
    _mav_put_uint8_t(buf, 8, id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS, buf, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_CRC);
#else
    mavlink_anv_msg_buffer_status_t packet;
    packet.buffer_type = buffer_type;
    packet.min_space = min_space;
    packet.max_space = max_space;
    packet.avg_space = avg_space;
    packet.id = id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS, (const char *)&packet, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_CRC);
#endif
}

/**
 * @brief Send a anv_msg_buffer_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_anv_msg_buffer_status_send_struct(mavlink_channel_t chan, const mavlink_anv_msg_buffer_status_t* anv_msg_buffer_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_anv_msg_buffer_status_send(chan, anv_msg_buffer_status->id, anv_msg_buffer_status->buffer_type, anv_msg_buffer_status->min_space, anv_msg_buffer_status->max_space, anv_msg_buffer_status->avg_space);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS, (const char *)anv_msg_buffer_status, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_anv_msg_buffer_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t id, uint16_t buffer_type, uint16_t min_space, uint16_t max_space, uint16_t avg_space)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, buffer_type);
    _mav_put_uint16_t(buf, 2, min_space);
    _mav_put_uint16_t(buf, 4, max_space);
    _mav_put_uint16_t(buf, 6, avg_space);
    _mav_put_uint8_t(buf, 8, id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS, buf, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_CRC);
#else
    mavlink_anv_msg_buffer_status_t *packet = (mavlink_anv_msg_buffer_status_t *)msgbuf;
    packet->buffer_type = buffer_type;
    packet->min_space = min_space;
    packet->max_space = max_space;
    packet->avg_space = avg_space;
    packet->id = id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS, (const char *)packet, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_MIN_LEN, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE ANV_MSG_BUFFER_STATUS UNPACKING


/**
 * @brief Get field id from anv_msg_buffer_status message
 *
 * @return  ID of the buffer
 */
static inline uint8_t mavlink_msg_anv_msg_buffer_status_get_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field buffer_type from anv_msg_buffer_status message
 *
 * @return  Buffer type
 */
static inline uint16_t mavlink_msg_anv_msg_buffer_status_get_buffer_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field min_space from anv_msg_buffer_status message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_anv_msg_buffer_status_get_min_space(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field max_space from anv_msg_buffer_status message
 *
 * @return  Temerature of the regulator measured in milli Degrees Celsius
 */
static inline uint16_t mavlink_msg_anv_msg_buffer_status_get_max_space(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field avg_space from anv_msg_buffer_status message
 *
 * @return  The rated current of the regulator measured in mA
 */
static inline uint16_t mavlink_msg_anv_msg_buffer_status_get_avg_space(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Decode a anv_msg_buffer_status message into a struct
 *
 * @param msg The message to decode
 * @param anv_msg_buffer_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_anv_msg_buffer_status_decode(const mavlink_message_t* msg, mavlink_anv_msg_buffer_status_t* anv_msg_buffer_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    anv_msg_buffer_status->buffer_type = mavlink_msg_anv_msg_buffer_status_get_buffer_type(msg);
    anv_msg_buffer_status->min_space = mavlink_msg_anv_msg_buffer_status_get_min_space(msg);
    anv_msg_buffer_status->max_space = mavlink_msg_anv_msg_buffer_status_get_max_space(msg);
    anv_msg_buffer_status->avg_space = mavlink_msg_anv_msg_buffer_status_get_avg_space(msg);
    anv_msg_buffer_status->id = mavlink_msg_anv_msg_buffer_status_get_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN? msg->len : MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN;
        memset(anv_msg_buffer_status, 0, MAVLINK_MSG_ID_ANV_MSG_BUFFER_STATUS_LEN);
    memcpy(anv_msg_buffer_status, _MAV_PAYLOAD(msg), len);
#endif
}
