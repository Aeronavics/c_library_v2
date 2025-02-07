#pragma once
// MESSAGE PIKSI_MSG_EPHEMERIS PACKING

#define MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS 197


typedef struct __mavlink_piksi_msg_ephemeris_t {
 double tgd; /*<  Group delay differential between L1 and L2*/
 double c_rs; /*<  Amplitude of the sine harmonic correction term to the orbit radius*/
 double c_rc; /*<  Amplitude of the cosine harmoinic correction term to the orbit radius*/
 double c_uc; /*<  Amplitude of the sine harmoinic correction term to the argument of latitude*/
 double c_us; /*<  Amplitude of the cosine harmoinic correction term to the argument of latitude*/
 double c_ic; /*<  Amplitude of the sine harmoinic correction term to the angle of inclination*/
 double c_is; /*<  Amplitude of the cosine harmoinic correction term to the angle of inclination*/
 double dn; /*<  Mean motion difference*/
 double m0; /*<  Mean anomaly at reference time*/
 double ecc; /*<  Eccentricity of satellite orbit*/
 double sqrta; /*<  Square root of the semi-major axis of orbit*/
 double omega0; /*<  Longitude of ascending node of orbit plane at weekly epoch*/
 double omegadot; /*<  Rate of right ascension*/
 double w; /*<  Argument of perigee*/
 double inc; /*<  Inclination*/
 double inc_dot; /*<  Inclination first derivative*/
 double af0; /*<  Polynomial clock correction coefficient (clock bias)*/
 double af1; /*<  Polynomial clock correction coefficient (clock drift)*/
 double af2; /*<  Polynomial clock correction coefficient (rate of clock drift)*/
 double toe_tow; /*<  Time of week*/
 double toc_tow; /*<  Clock reference time of week*/
 uint32_t sid; /*<  Signal identifier being tracked. Values 0x00 through 0x1F represent GPS PRNs 1 through 32 (PRN-1 notation). Other values reserved for future use.*/
 uint32_t reserved; /*<  Reserved field*/
 uint16_t toe_wn; /*<  Week number*/
 uint16_t toc_wn; /*<  Clock reference week number*/
 uint16_t iodc; /*<  Issue of clock data*/
 uint8_t valid; /*<  Is valid?*/
 uint8_t healthy; /*<  Satellite is healthy?*/
 uint8_t iode; /*<  Issue of ephemeris data*/
} mavlink_piksi_msg_ephemeris_t;

#define MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN 185
#define MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_MIN_LEN 185
#define MAVLINK_MSG_ID_197_LEN 185
#define MAVLINK_MSG_ID_197_MIN_LEN 185

#define MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_CRC 144
#define MAVLINK_MSG_ID_197_CRC 144



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PIKSI_MSG_EPHEMERIS { \
    197, \
    "PIKSI_MSG_EPHEMERIS", \
    29, \
    {  { "tgd", NULL, MAVLINK_TYPE_DOUBLE, 0, 0, offsetof(mavlink_piksi_msg_ephemeris_t, tgd) }, \
         { "c_rs", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_piksi_msg_ephemeris_t, c_rs) }, \
         { "c_rc", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_piksi_msg_ephemeris_t, c_rc) }, \
         { "c_uc", NULL, MAVLINK_TYPE_DOUBLE, 0, 24, offsetof(mavlink_piksi_msg_ephemeris_t, c_uc) }, \
         { "c_us", NULL, MAVLINK_TYPE_DOUBLE, 0, 32, offsetof(mavlink_piksi_msg_ephemeris_t, c_us) }, \
         { "c_ic", NULL, MAVLINK_TYPE_DOUBLE, 0, 40, offsetof(mavlink_piksi_msg_ephemeris_t, c_ic) }, \
         { "c_is", NULL, MAVLINK_TYPE_DOUBLE, 0, 48, offsetof(mavlink_piksi_msg_ephemeris_t, c_is) }, \
         { "dn", NULL, MAVLINK_TYPE_DOUBLE, 0, 56, offsetof(mavlink_piksi_msg_ephemeris_t, dn) }, \
         { "m0", NULL, MAVLINK_TYPE_DOUBLE, 0, 64, offsetof(mavlink_piksi_msg_ephemeris_t, m0) }, \
         { "ecc", NULL, MAVLINK_TYPE_DOUBLE, 0, 72, offsetof(mavlink_piksi_msg_ephemeris_t, ecc) }, \
         { "sqrta", NULL, MAVLINK_TYPE_DOUBLE, 0, 80, offsetof(mavlink_piksi_msg_ephemeris_t, sqrta) }, \
         { "omega0", NULL, MAVLINK_TYPE_DOUBLE, 0, 88, offsetof(mavlink_piksi_msg_ephemeris_t, omega0) }, \
         { "omegadot", NULL, MAVLINK_TYPE_DOUBLE, 0, 96, offsetof(mavlink_piksi_msg_ephemeris_t, omegadot) }, \
         { "w", NULL, MAVLINK_TYPE_DOUBLE, 0, 104, offsetof(mavlink_piksi_msg_ephemeris_t, w) }, \
         { "inc", NULL, MAVLINK_TYPE_DOUBLE, 0, 112, offsetof(mavlink_piksi_msg_ephemeris_t, inc) }, \
         { "inc_dot", NULL, MAVLINK_TYPE_DOUBLE, 0, 120, offsetof(mavlink_piksi_msg_ephemeris_t, inc_dot) }, \
         { "af0", NULL, MAVLINK_TYPE_DOUBLE, 0, 128, offsetof(mavlink_piksi_msg_ephemeris_t, af0) }, \
         { "af1", NULL, MAVLINK_TYPE_DOUBLE, 0, 136, offsetof(mavlink_piksi_msg_ephemeris_t, af1) }, \
         { "af2", NULL, MAVLINK_TYPE_DOUBLE, 0, 144, offsetof(mavlink_piksi_msg_ephemeris_t, af2) }, \
         { "toe_tow", NULL, MAVLINK_TYPE_DOUBLE, 0, 152, offsetof(mavlink_piksi_msg_ephemeris_t, toe_tow) }, \
         { "toe_wn", NULL, MAVLINK_TYPE_UINT16_T, 0, 176, offsetof(mavlink_piksi_msg_ephemeris_t, toe_wn) }, \
         { "toc_tow", NULL, MAVLINK_TYPE_DOUBLE, 0, 160, offsetof(mavlink_piksi_msg_ephemeris_t, toc_tow) }, \
         { "toc_wn", NULL, MAVLINK_TYPE_UINT16_T, 0, 178, offsetof(mavlink_piksi_msg_ephemeris_t, toc_wn) }, \
         { "valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 182, offsetof(mavlink_piksi_msg_ephemeris_t, valid) }, \
         { "healthy", NULL, MAVLINK_TYPE_UINT8_T, 0, 183, offsetof(mavlink_piksi_msg_ephemeris_t, healthy) }, \
         { "sid", NULL, MAVLINK_TYPE_UINT32_T, 0, 168, offsetof(mavlink_piksi_msg_ephemeris_t, sid) }, \
         { "iode", NULL, MAVLINK_TYPE_UINT8_T, 0, 184, offsetof(mavlink_piksi_msg_ephemeris_t, iode) }, \
         { "iodc", NULL, MAVLINK_TYPE_UINT16_T, 0, 180, offsetof(mavlink_piksi_msg_ephemeris_t, iodc) }, \
         { "reserved", NULL, MAVLINK_TYPE_UINT32_T, 0, 172, offsetof(mavlink_piksi_msg_ephemeris_t, reserved) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PIKSI_MSG_EPHEMERIS { \
    "PIKSI_MSG_EPHEMERIS", \
    29, \
    {  { "tgd", NULL, MAVLINK_TYPE_DOUBLE, 0, 0, offsetof(mavlink_piksi_msg_ephemeris_t, tgd) }, \
         { "c_rs", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_piksi_msg_ephemeris_t, c_rs) }, \
         { "c_rc", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_piksi_msg_ephemeris_t, c_rc) }, \
         { "c_uc", NULL, MAVLINK_TYPE_DOUBLE, 0, 24, offsetof(mavlink_piksi_msg_ephemeris_t, c_uc) }, \
         { "c_us", NULL, MAVLINK_TYPE_DOUBLE, 0, 32, offsetof(mavlink_piksi_msg_ephemeris_t, c_us) }, \
         { "c_ic", NULL, MAVLINK_TYPE_DOUBLE, 0, 40, offsetof(mavlink_piksi_msg_ephemeris_t, c_ic) }, \
         { "c_is", NULL, MAVLINK_TYPE_DOUBLE, 0, 48, offsetof(mavlink_piksi_msg_ephemeris_t, c_is) }, \
         { "dn", NULL, MAVLINK_TYPE_DOUBLE, 0, 56, offsetof(mavlink_piksi_msg_ephemeris_t, dn) }, \
         { "m0", NULL, MAVLINK_TYPE_DOUBLE, 0, 64, offsetof(mavlink_piksi_msg_ephemeris_t, m0) }, \
         { "ecc", NULL, MAVLINK_TYPE_DOUBLE, 0, 72, offsetof(mavlink_piksi_msg_ephemeris_t, ecc) }, \
         { "sqrta", NULL, MAVLINK_TYPE_DOUBLE, 0, 80, offsetof(mavlink_piksi_msg_ephemeris_t, sqrta) }, \
         { "omega0", NULL, MAVLINK_TYPE_DOUBLE, 0, 88, offsetof(mavlink_piksi_msg_ephemeris_t, omega0) }, \
         { "omegadot", NULL, MAVLINK_TYPE_DOUBLE, 0, 96, offsetof(mavlink_piksi_msg_ephemeris_t, omegadot) }, \
         { "w", NULL, MAVLINK_TYPE_DOUBLE, 0, 104, offsetof(mavlink_piksi_msg_ephemeris_t, w) }, \
         { "inc", NULL, MAVLINK_TYPE_DOUBLE, 0, 112, offsetof(mavlink_piksi_msg_ephemeris_t, inc) }, \
         { "inc_dot", NULL, MAVLINK_TYPE_DOUBLE, 0, 120, offsetof(mavlink_piksi_msg_ephemeris_t, inc_dot) }, \
         { "af0", NULL, MAVLINK_TYPE_DOUBLE, 0, 128, offsetof(mavlink_piksi_msg_ephemeris_t, af0) }, \
         { "af1", NULL, MAVLINK_TYPE_DOUBLE, 0, 136, offsetof(mavlink_piksi_msg_ephemeris_t, af1) }, \
         { "af2", NULL, MAVLINK_TYPE_DOUBLE, 0, 144, offsetof(mavlink_piksi_msg_ephemeris_t, af2) }, \
         { "toe_tow", NULL, MAVLINK_TYPE_DOUBLE, 0, 152, offsetof(mavlink_piksi_msg_ephemeris_t, toe_tow) }, \
         { "toe_wn", NULL, MAVLINK_TYPE_UINT16_T, 0, 176, offsetof(mavlink_piksi_msg_ephemeris_t, toe_wn) }, \
         { "toc_tow", NULL, MAVLINK_TYPE_DOUBLE, 0, 160, offsetof(mavlink_piksi_msg_ephemeris_t, toc_tow) }, \
         { "toc_wn", NULL, MAVLINK_TYPE_UINT16_T, 0, 178, offsetof(mavlink_piksi_msg_ephemeris_t, toc_wn) }, \
         { "valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 182, offsetof(mavlink_piksi_msg_ephemeris_t, valid) }, \
         { "healthy", NULL, MAVLINK_TYPE_UINT8_T, 0, 183, offsetof(mavlink_piksi_msg_ephemeris_t, healthy) }, \
         { "sid", NULL, MAVLINK_TYPE_UINT32_T, 0, 168, offsetof(mavlink_piksi_msg_ephemeris_t, sid) }, \
         { "iode", NULL, MAVLINK_TYPE_UINT8_T, 0, 184, offsetof(mavlink_piksi_msg_ephemeris_t, iode) }, \
         { "iodc", NULL, MAVLINK_TYPE_UINT16_T, 0, 180, offsetof(mavlink_piksi_msg_ephemeris_t, iodc) }, \
         { "reserved", NULL, MAVLINK_TYPE_UINT32_T, 0, 172, offsetof(mavlink_piksi_msg_ephemeris_t, reserved) }, \
         } \
}
#endif

/**
 * @brief Pack a piksi_msg_ephemeris message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param tgd  Group delay differential between L1 and L2
 * @param c_rs  Amplitude of the sine harmonic correction term to the orbit radius
 * @param c_rc  Amplitude of the cosine harmoinic correction term to the orbit radius
 * @param c_uc  Amplitude of the sine harmoinic correction term to the argument of latitude
 * @param c_us  Amplitude of the cosine harmoinic correction term to the argument of latitude
 * @param c_ic  Amplitude of the sine harmoinic correction term to the angle of inclination
 * @param c_is  Amplitude of the cosine harmoinic correction term to the angle of inclination
 * @param dn  Mean motion difference
 * @param m0  Mean anomaly at reference time
 * @param ecc  Eccentricity of satellite orbit
 * @param sqrta  Square root of the semi-major axis of orbit
 * @param omega0  Longitude of ascending node of orbit plane at weekly epoch
 * @param omegadot  Rate of right ascension
 * @param w  Argument of perigee
 * @param inc  Inclination
 * @param inc_dot  Inclination first derivative
 * @param af0  Polynomial clock correction coefficient (clock bias)
 * @param af1  Polynomial clock correction coefficient (clock drift)
 * @param af2  Polynomial clock correction coefficient (rate of clock drift)
 * @param toe_tow  Time of week
 * @param toe_wn  Week number
 * @param toc_tow  Clock reference time of week
 * @param toc_wn  Clock reference week number
 * @param valid  Is valid?
 * @param healthy  Satellite is healthy?
 * @param sid  Signal identifier being tracked. Values 0x00 through 0x1F represent GPS PRNs 1 through 32 (PRN-1 notation). Other values reserved for future use.
 * @param iode  Issue of ephemeris data
 * @param iodc  Issue of clock data
 * @param reserved  Reserved field
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_piksi_msg_ephemeris_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               double tgd, double c_rs, double c_rc, double c_uc, double c_us, double c_ic, double c_is, double dn, double m0, double ecc, double sqrta, double omega0, double omegadot, double w, double inc, double inc_dot, double af0, double af1, double af2, double toe_tow, uint16_t toe_wn, double toc_tow, uint16_t toc_wn, uint8_t valid, uint8_t healthy, uint32_t sid, uint8_t iode, uint16_t iodc, uint32_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN];
    _mav_put_double(buf, 0, tgd);
    _mav_put_double(buf, 8, c_rs);
    _mav_put_double(buf, 16, c_rc);
    _mav_put_double(buf, 24, c_uc);
    _mav_put_double(buf, 32, c_us);
    _mav_put_double(buf, 40, c_ic);
    _mav_put_double(buf, 48, c_is);
    _mav_put_double(buf, 56, dn);
    _mav_put_double(buf, 64, m0);
    _mav_put_double(buf, 72, ecc);
    _mav_put_double(buf, 80, sqrta);
    _mav_put_double(buf, 88, omega0);
    _mav_put_double(buf, 96, omegadot);
    _mav_put_double(buf, 104, w);
    _mav_put_double(buf, 112, inc);
    _mav_put_double(buf, 120, inc_dot);
    _mav_put_double(buf, 128, af0);
    _mav_put_double(buf, 136, af1);
    _mav_put_double(buf, 144, af2);
    _mav_put_double(buf, 152, toe_tow);
    _mav_put_double(buf, 160, toc_tow);
    _mav_put_uint32_t(buf, 168, sid);
    _mav_put_uint32_t(buf, 172, reserved);
    _mav_put_uint16_t(buf, 176, toe_wn);
    _mav_put_uint16_t(buf, 178, toc_wn);
    _mav_put_uint16_t(buf, 180, iodc);
    _mav_put_uint8_t(buf, 182, valid);
    _mav_put_uint8_t(buf, 183, healthy);
    _mav_put_uint8_t(buf, 184, iode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN);
#else
    mavlink_piksi_msg_ephemeris_t packet;
    packet.tgd = tgd;
    packet.c_rs = c_rs;
    packet.c_rc = c_rc;
    packet.c_uc = c_uc;
    packet.c_us = c_us;
    packet.c_ic = c_ic;
    packet.c_is = c_is;
    packet.dn = dn;
    packet.m0 = m0;
    packet.ecc = ecc;
    packet.sqrta = sqrta;
    packet.omega0 = omega0;
    packet.omegadot = omegadot;
    packet.w = w;
    packet.inc = inc;
    packet.inc_dot = inc_dot;
    packet.af0 = af0;
    packet.af1 = af1;
    packet.af2 = af2;
    packet.toe_tow = toe_tow;
    packet.toc_tow = toc_tow;
    packet.sid = sid;
    packet.reserved = reserved;
    packet.toe_wn = toe_wn;
    packet.toc_wn = toc_wn;
    packet.iodc = iodc;
    packet.valid = valid;
    packet.healthy = healthy;
    packet.iode = iode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_CRC);
}

/**
 * @brief Pack a piksi_msg_ephemeris message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param tgd  Group delay differential between L1 and L2
 * @param c_rs  Amplitude of the sine harmonic correction term to the orbit radius
 * @param c_rc  Amplitude of the cosine harmoinic correction term to the orbit radius
 * @param c_uc  Amplitude of the sine harmoinic correction term to the argument of latitude
 * @param c_us  Amplitude of the cosine harmoinic correction term to the argument of latitude
 * @param c_ic  Amplitude of the sine harmoinic correction term to the angle of inclination
 * @param c_is  Amplitude of the cosine harmoinic correction term to the angle of inclination
 * @param dn  Mean motion difference
 * @param m0  Mean anomaly at reference time
 * @param ecc  Eccentricity of satellite orbit
 * @param sqrta  Square root of the semi-major axis of orbit
 * @param omega0  Longitude of ascending node of orbit plane at weekly epoch
 * @param omegadot  Rate of right ascension
 * @param w  Argument of perigee
 * @param inc  Inclination
 * @param inc_dot  Inclination first derivative
 * @param af0  Polynomial clock correction coefficient (clock bias)
 * @param af1  Polynomial clock correction coefficient (clock drift)
 * @param af2  Polynomial clock correction coefficient (rate of clock drift)
 * @param toe_tow  Time of week
 * @param toe_wn  Week number
 * @param toc_tow  Clock reference time of week
 * @param toc_wn  Clock reference week number
 * @param valid  Is valid?
 * @param healthy  Satellite is healthy?
 * @param sid  Signal identifier being tracked. Values 0x00 through 0x1F represent GPS PRNs 1 through 32 (PRN-1 notation). Other values reserved for future use.
 * @param iode  Issue of ephemeris data
 * @param iodc  Issue of clock data
 * @param reserved  Reserved field
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_piksi_msg_ephemeris_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               double tgd, double c_rs, double c_rc, double c_uc, double c_us, double c_ic, double c_is, double dn, double m0, double ecc, double sqrta, double omega0, double omegadot, double w, double inc, double inc_dot, double af0, double af1, double af2, double toe_tow, uint16_t toe_wn, double toc_tow, uint16_t toc_wn, uint8_t valid, uint8_t healthy, uint32_t sid, uint8_t iode, uint16_t iodc, uint32_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN];
    _mav_put_double(buf, 0, tgd);
    _mav_put_double(buf, 8, c_rs);
    _mav_put_double(buf, 16, c_rc);
    _mav_put_double(buf, 24, c_uc);
    _mav_put_double(buf, 32, c_us);
    _mav_put_double(buf, 40, c_ic);
    _mav_put_double(buf, 48, c_is);
    _mav_put_double(buf, 56, dn);
    _mav_put_double(buf, 64, m0);
    _mav_put_double(buf, 72, ecc);
    _mav_put_double(buf, 80, sqrta);
    _mav_put_double(buf, 88, omega0);
    _mav_put_double(buf, 96, omegadot);
    _mav_put_double(buf, 104, w);
    _mav_put_double(buf, 112, inc);
    _mav_put_double(buf, 120, inc_dot);
    _mav_put_double(buf, 128, af0);
    _mav_put_double(buf, 136, af1);
    _mav_put_double(buf, 144, af2);
    _mav_put_double(buf, 152, toe_tow);
    _mav_put_double(buf, 160, toc_tow);
    _mav_put_uint32_t(buf, 168, sid);
    _mav_put_uint32_t(buf, 172, reserved);
    _mav_put_uint16_t(buf, 176, toe_wn);
    _mav_put_uint16_t(buf, 178, toc_wn);
    _mav_put_uint16_t(buf, 180, iodc);
    _mav_put_uint8_t(buf, 182, valid);
    _mav_put_uint8_t(buf, 183, healthy);
    _mav_put_uint8_t(buf, 184, iode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN);
#else
    mavlink_piksi_msg_ephemeris_t packet;
    packet.tgd = tgd;
    packet.c_rs = c_rs;
    packet.c_rc = c_rc;
    packet.c_uc = c_uc;
    packet.c_us = c_us;
    packet.c_ic = c_ic;
    packet.c_is = c_is;
    packet.dn = dn;
    packet.m0 = m0;
    packet.ecc = ecc;
    packet.sqrta = sqrta;
    packet.omega0 = omega0;
    packet.omegadot = omegadot;
    packet.w = w;
    packet.inc = inc;
    packet.inc_dot = inc_dot;
    packet.af0 = af0;
    packet.af1 = af1;
    packet.af2 = af2;
    packet.toe_tow = toe_tow;
    packet.toc_tow = toc_tow;
    packet.sid = sid;
    packet.reserved = reserved;
    packet.toe_wn = toe_wn;
    packet.toc_wn = toc_wn;
    packet.iodc = iodc;
    packet.valid = valid;
    packet.healthy = healthy;
    packet.iode = iode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN);
#endif
}

/**
 * @brief Pack a piksi_msg_ephemeris message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param tgd  Group delay differential between L1 and L2
 * @param c_rs  Amplitude of the sine harmonic correction term to the orbit radius
 * @param c_rc  Amplitude of the cosine harmoinic correction term to the orbit radius
 * @param c_uc  Amplitude of the sine harmoinic correction term to the argument of latitude
 * @param c_us  Amplitude of the cosine harmoinic correction term to the argument of latitude
 * @param c_ic  Amplitude of the sine harmoinic correction term to the angle of inclination
 * @param c_is  Amplitude of the cosine harmoinic correction term to the angle of inclination
 * @param dn  Mean motion difference
 * @param m0  Mean anomaly at reference time
 * @param ecc  Eccentricity of satellite orbit
 * @param sqrta  Square root of the semi-major axis of orbit
 * @param omega0  Longitude of ascending node of orbit plane at weekly epoch
 * @param omegadot  Rate of right ascension
 * @param w  Argument of perigee
 * @param inc  Inclination
 * @param inc_dot  Inclination first derivative
 * @param af0  Polynomial clock correction coefficient (clock bias)
 * @param af1  Polynomial clock correction coefficient (clock drift)
 * @param af2  Polynomial clock correction coefficient (rate of clock drift)
 * @param toe_tow  Time of week
 * @param toe_wn  Week number
 * @param toc_tow  Clock reference time of week
 * @param toc_wn  Clock reference week number
 * @param valid  Is valid?
 * @param healthy  Satellite is healthy?
 * @param sid  Signal identifier being tracked. Values 0x00 through 0x1F represent GPS PRNs 1 through 32 (PRN-1 notation). Other values reserved for future use.
 * @param iode  Issue of ephemeris data
 * @param iodc  Issue of clock data
 * @param reserved  Reserved field
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_piksi_msg_ephemeris_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   double tgd,double c_rs,double c_rc,double c_uc,double c_us,double c_ic,double c_is,double dn,double m0,double ecc,double sqrta,double omega0,double omegadot,double w,double inc,double inc_dot,double af0,double af1,double af2,double toe_tow,uint16_t toe_wn,double toc_tow,uint16_t toc_wn,uint8_t valid,uint8_t healthy,uint32_t sid,uint8_t iode,uint16_t iodc,uint32_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN];
    _mav_put_double(buf, 0, tgd);
    _mav_put_double(buf, 8, c_rs);
    _mav_put_double(buf, 16, c_rc);
    _mav_put_double(buf, 24, c_uc);
    _mav_put_double(buf, 32, c_us);
    _mav_put_double(buf, 40, c_ic);
    _mav_put_double(buf, 48, c_is);
    _mav_put_double(buf, 56, dn);
    _mav_put_double(buf, 64, m0);
    _mav_put_double(buf, 72, ecc);
    _mav_put_double(buf, 80, sqrta);
    _mav_put_double(buf, 88, omega0);
    _mav_put_double(buf, 96, omegadot);
    _mav_put_double(buf, 104, w);
    _mav_put_double(buf, 112, inc);
    _mav_put_double(buf, 120, inc_dot);
    _mav_put_double(buf, 128, af0);
    _mav_put_double(buf, 136, af1);
    _mav_put_double(buf, 144, af2);
    _mav_put_double(buf, 152, toe_tow);
    _mav_put_double(buf, 160, toc_tow);
    _mav_put_uint32_t(buf, 168, sid);
    _mav_put_uint32_t(buf, 172, reserved);
    _mav_put_uint16_t(buf, 176, toe_wn);
    _mav_put_uint16_t(buf, 178, toc_wn);
    _mav_put_uint16_t(buf, 180, iodc);
    _mav_put_uint8_t(buf, 182, valid);
    _mav_put_uint8_t(buf, 183, healthy);
    _mav_put_uint8_t(buf, 184, iode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN);
#else
    mavlink_piksi_msg_ephemeris_t packet;
    packet.tgd = tgd;
    packet.c_rs = c_rs;
    packet.c_rc = c_rc;
    packet.c_uc = c_uc;
    packet.c_us = c_us;
    packet.c_ic = c_ic;
    packet.c_is = c_is;
    packet.dn = dn;
    packet.m0 = m0;
    packet.ecc = ecc;
    packet.sqrta = sqrta;
    packet.omega0 = omega0;
    packet.omegadot = omegadot;
    packet.w = w;
    packet.inc = inc;
    packet.inc_dot = inc_dot;
    packet.af0 = af0;
    packet.af1 = af1;
    packet.af2 = af2;
    packet.toe_tow = toe_tow;
    packet.toc_tow = toc_tow;
    packet.sid = sid;
    packet.reserved = reserved;
    packet.toe_wn = toe_wn;
    packet.toc_wn = toc_wn;
    packet.iodc = iodc;
    packet.valid = valid;
    packet.healthy = healthy;
    packet.iode = iode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_CRC);
}

/**
 * @brief Encode a piksi_msg_ephemeris struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param piksi_msg_ephemeris C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_piksi_msg_ephemeris_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_piksi_msg_ephemeris_t* piksi_msg_ephemeris)
{
    return mavlink_msg_piksi_msg_ephemeris_pack(system_id, component_id, msg, piksi_msg_ephemeris->tgd, piksi_msg_ephemeris->c_rs, piksi_msg_ephemeris->c_rc, piksi_msg_ephemeris->c_uc, piksi_msg_ephemeris->c_us, piksi_msg_ephemeris->c_ic, piksi_msg_ephemeris->c_is, piksi_msg_ephemeris->dn, piksi_msg_ephemeris->m0, piksi_msg_ephemeris->ecc, piksi_msg_ephemeris->sqrta, piksi_msg_ephemeris->omega0, piksi_msg_ephemeris->omegadot, piksi_msg_ephemeris->w, piksi_msg_ephemeris->inc, piksi_msg_ephemeris->inc_dot, piksi_msg_ephemeris->af0, piksi_msg_ephemeris->af1, piksi_msg_ephemeris->af2, piksi_msg_ephemeris->toe_tow, piksi_msg_ephemeris->toe_wn, piksi_msg_ephemeris->toc_tow, piksi_msg_ephemeris->toc_wn, piksi_msg_ephemeris->valid, piksi_msg_ephemeris->healthy, piksi_msg_ephemeris->sid, piksi_msg_ephemeris->iode, piksi_msg_ephemeris->iodc, piksi_msg_ephemeris->reserved);
}

/**
 * @brief Encode a piksi_msg_ephemeris struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param piksi_msg_ephemeris C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_piksi_msg_ephemeris_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_piksi_msg_ephemeris_t* piksi_msg_ephemeris)
{
    return mavlink_msg_piksi_msg_ephemeris_pack_chan(system_id, component_id, chan, msg, piksi_msg_ephemeris->tgd, piksi_msg_ephemeris->c_rs, piksi_msg_ephemeris->c_rc, piksi_msg_ephemeris->c_uc, piksi_msg_ephemeris->c_us, piksi_msg_ephemeris->c_ic, piksi_msg_ephemeris->c_is, piksi_msg_ephemeris->dn, piksi_msg_ephemeris->m0, piksi_msg_ephemeris->ecc, piksi_msg_ephemeris->sqrta, piksi_msg_ephemeris->omega0, piksi_msg_ephemeris->omegadot, piksi_msg_ephemeris->w, piksi_msg_ephemeris->inc, piksi_msg_ephemeris->inc_dot, piksi_msg_ephemeris->af0, piksi_msg_ephemeris->af1, piksi_msg_ephemeris->af2, piksi_msg_ephemeris->toe_tow, piksi_msg_ephemeris->toe_wn, piksi_msg_ephemeris->toc_tow, piksi_msg_ephemeris->toc_wn, piksi_msg_ephemeris->valid, piksi_msg_ephemeris->healthy, piksi_msg_ephemeris->sid, piksi_msg_ephemeris->iode, piksi_msg_ephemeris->iodc, piksi_msg_ephemeris->reserved);
}

/**
 * @brief Encode a piksi_msg_ephemeris struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param piksi_msg_ephemeris C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_piksi_msg_ephemeris_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_piksi_msg_ephemeris_t* piksi_msg_ephemeris)
{
    return mavlink_msg_piksi_msg_ephemeris_pack_status(system_id, component_id, _status, msg,  piksi_msg_ephemeris->tgd, piksi_msg_ephemeris->c_rs, piksi_msg_ephemeris->c_rc, piksi_msg_ephemeris->c_uc, piksi_msg_ephemeris->c_us, piksi_msg_ephemeris->c_ic, piksi_msg_ephemeris->c_is, piksi_msg_ephemeris->dn, piksi_msg_ephemeris->m0, piksi_msg_ephemeris->ecc, piksi_msg_ephemeris->sqrta, piksi_msg_ephemeris->omega0, piksi_msg_ephemeris->omegadot, piksi_msg_ephemeris->w, piksi_msg_ephemeris->inc, piksi_msg_ephemeris->inc_dot, piksi_msg_ephemeris->af0, piksi_msg_ephemeris->af1, piksi_msg_ephemeris->af2, piksi_msg_ephemeris->toe_tow, piksi_msg_ephemeris->toe_wn, piksi_msg_ephemeris->toc_tow, piksi_msg_ephemeris->toc_wn, piksi_msg_ephemeris->valid, piksi_msg_ephemeris->healthy, piksi_msg_ephemeris->sid, piksi_msg_ephemeris->iode, piksi_msg_ephemeris->iodc, piksi_msg_ephemeris->reserved);
}

/**
 * @brief Send a piksi_msg_ephemeris message
 * @param chan MAVLink channel to send the message
 *
 * @param tgd  Group delay differential between L1 and L2
 * @param c_rs  Amplitude of the sine harmonic correction term to the orbit radius
 * @param c_rc  Amplitude of the cosine harmoinic correction term to the orbit radius
 * @param c_uc  Amplitude of the sine harmoinic correction term to the argument of latitude
 * @param c_us  Amplitude of the cosine harmoinic correction term to the argument of latitude
 * @param c_ic  Amplitude of the sine harmoinic correction term to the angle of inclination
 * @param c_is  Amplitude of the cosine harmoinic correction term to the angle of inclination
 * @param dn  Mean motion difference
 * @param m0  Mean anomaly at reference time
 * @param ecc  Eccentricity of satellite orbit
 * @param sqrta  Square root of the semi-major axis of orbit
 * @param omega0  Longitude of ascending node of orbit plane at weekly epoch
 * @param omegadot  Rate of right ascension
 * @param w  Argument of perigee
 * @param inc  Inclination
 * @param inc_dot  Inclination first derivative
 * @param af0  Polynomial clock correction coefficient (clock bias)
 * @param af1  Polynomial clock correction coefficient (clock drift)
 * @param af2  Polynomial clock correction coefficient (rate of clock drift)
 * @param toe_tow  Time of week
 * @param toe_wn  Week number
 * @param toc_tow  Clock reference time of week
 * @param toc_wn  Clock reference week number
 * @param valid  Is valid?
 * @param healthy  Satellite is healthy?
 * @param sid  Signal identifier being tracked. Values 0x00 through 0x1F represent GPS PRNs 1 through 32 (PRN-1 notation). Other values reserved for future use.
 * @param iode  Issue of ephemeris data
 * @param iodc  Issue of clock data
 * @param reserved  Reserved field
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_piksi_msg_ephemeris_send(mavlink_channel_t chan, double tgd, double c_rs, double c_rc, double c_uc, double c_us, double c_ic, double c_is, double dn, double m0, double ecc, double sqrta, double omega0, double omegadot, double w, double inc, double inc_dot, double af0, double af1, double af2, double toe_tow, uint16_t toe_wn, double toc_tow, uint16_t toc_wn, uint8_t valid, uint8_t healthy, uint32_t sid, uint8_t iode, uint16_t iodc, uint32_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN];
    _mav_put_double(buf, 0, tgd);
    _mav_put_double(buf, 8, c_rs);
    _mav_put_double(buf, 16, c_rc);
    _mav_put_double(buf, 24, c_uc);
    _mav_put_double(buf, 32, c_us);
    _mav_put_double(buf, 40, c_ic);
    _mav_put_double(buf, 48, c_is);
    _mav_put_double(buf, 56, dn);
    _mav_put_double(buf, 64, m0);
    _mav_put_double(buf, 72, ecc);
    _mav_put_double(buf, 80, sqrta);
    _mav_put_double(buf, 88, omega0);
    _mav_put_double(buf, 96, omegadot);
    _mav_put_double(buf, 104, w);
    _mav_put_double(buf, 112, inc);
    _mav_put_double(buf, 120, inc_dot);
    _mav_put_double(buf, 128, af0);
    _mav_put_double(buf, 136, af1);
    _mav_put_double(buf, 144, af2);
    _mav_put_double(buf, 152, toe_tow);
    _mav_put_double(buf, 160, toc_tow);
    _mav_put_uint32_t(buf, 168, sid);
    _mav_put_uint32_t(buf, 172, reserved);
    _mav_put_uint16_t(buf, 176, toe_wn);
    _mav_put_uint16_t(buf, 178, toc_wn);
    _mav_put_uint16_t(buf, 180, iodc);
    _mav_put_uint8_t(buf, 182, valid);
    _mav_put_uint8_t(buf, 183, healthy);
    _mav_put_uint8_t(buf, 184, iode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS, buf, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_CRC);
#else
    mavlink_piksi_msg_ephemeris_t packet;
    packet.tgd = tgd;
    packet.c_rs = c_rs;
    packet.c_rc = c_rc;
    packet.c_uc = c_uc;
    packet.c_us = c_us;
    packet.c_ic = c_ic;
    packet.c_is = c_is;
    packet.dn = dn;
    packet.m0 = m0;
    packet.ecc = ecc;
    packet.sqrta = sqrta;
    packet.omega0 = omega0;
    packet.omegadot = omegadot;
    packet.w = w;
    packet.inc = inc;
    packet.inc_dot = inc_dot;
    packet.af0 = af0;
    packet.af1 = af1;
    packet.af2 = af2;
    packet.toe_tow = toe_tow;
    packet.toc_tow = toc_tow;
    packet.sid = sid;
    packet.reserved = reserved;
    packet.toe_wn = toe_wn;
    packet.toc_wn = toc_wn;
    packet.iodc = iodc;
    packet.valid = valid;
    packet.healthy = healthy;
    packet.iode = iode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS, (const char *)&packet, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_CRC);
#endif
}

/**
 * @brief Send a piksi_msg_ephemeris message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_piksi_msg_ephemeris_send_struct(mavlink_channel_t chan, const mavlink_piksi_msg_ephemeris_t* piksi_msg_ephemeris)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_piksi_msg_ephemeris_send(chan, piksi_msg_ephemeris->tgd, piksi_msg_ephemeris->c_rs, piksi_msg_ephemeris->c_rc, piksi_msg_ephemeris->c_uc, piksi_msg_ephemeris->c_us, piksi_msg_ephemeris->c_ic, piksi_msg_ephemeris->c_is, piksi_msg_ephemeris->dn, piksi_msg_ephemeris->m0, piksi_msg_ephemeris->ecc, piksi_msg_ephemeris->sqrta, piksi_msg_ephemeris->omega0, piksi_msg_ephemeris->omegadot, piksi_msg_ephemeris->w, piksi_msg_ephemeris->inc, piksi_msg_ephemeris->inc_dot, piksi_msg_ephemeris->af0, piksi_msg_ephemeris->af1, piksi_msg_ephemeris->af2, piksi_msg_ephemeris->toe_tow, piksi_msg_ephemeris->toe_wn, piksi_msg_ephemeris->toc_tow, piksi_msg_ephemeris->toc_wn, piksi_msg_ephemeris->valid, piksi_msg_ephemeris->healthy, piksi_msg_ephemeris->sid, piksi_msg_ephemeris->iode, piksi_msg_ephemeris->iodc, piksi_msg_ephemeris->reserved);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS, (const char *)piksi_msg_ephemeris, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_CRC);
#endif
}

#if MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_piksi_msg_ephemeris_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  double tgd, double c_rs, double c_rc, double c_uc, double c_us, double c_ic, double c_is, double dn, double m0, double ecc, double sqrta, double omega0, double omegadot, double w, double inc, double inc_dot, double af0, double af1, double af2, double toe_tow, uint16_t toe_wn, double toc_tow, uint16_t toc_wn, uint8_t valid, uint8_t healthy, uint32_t sid, uint8_t iode, uint16_t iodc, uint32_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_double(buf, 0, tgd);
    _mav_put_double(buf, 8, c_rs);
    _mav_put_double(buf, 16, c_rc);
    _mav_put_double(buf, 24, c_uc);
    _mav_put_double(buf, 32, c_us);
    _mav_put_double(buf, 40, c_ic);
    _mav_put_double(buf, 48, c_is);
    _mav_put_double(buf, 56, dn);
    _mav_put_double(buf, 64, m0);
    _mav_put_double(buf, 72, ecc);
    _mav_put_double(buf, 80, sqrta);
    _mav_put_double(buf, 88, omega0);
    _mav_put_double(buf, 96, omegadot);
    _mav_put_double(buf, 104, w);
    _mav_put_double(buf, 112, inc);
    _mav_put_double(buf, 120, inc_dot);
    _mav_put_double(buf, 128, af0);
    _mav_put_double(buf, 136, af1);
    _mav_put_double(buf, 144, af2);
    _mav_put_double(buf, 152, toe_tow);
    _mav_put_double(buf, 160, toc_tow);
    _mav_put_uint32_t(buf, 168, sid);
    _mav_put_uint32_t(buf, 172, reserved);
    _mav_put_uint16_t(buf, 176, toe_wn);
    _mav_put_uint16_t(buf, 178, toc_wn);
    _mav_put_uint16_t(buf, 180, iodc);
    _mav_put_uint8_t(buf, 182, valid);
    _mav_put_uint8_t(buf, 183, healthy);
    _mav_put_uint8_t(buf, 184, iode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS, buf, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_CRC);
#else
    mavlink_piksi_msg_ephemeris_t *packet = (mavlink_piksi_msg_ephemeris_t *)msgbuf;
    packet->tgd = tgd;
    packet->c_rs = c_rs;
    packet->c_rc = c_rc;
    packet->c_uc = c_uc;
    packet->c_us = c_us;
    packet->c_ic = c_ic;
    packet->c_is = c_is;
    packet->dn = dn;
    packet->m0 = m0;
    packet->ecc = ecc;
    packet->sqrta = sqrta;
    packet->omega0 = omega0;
    packet->omegadot = omegadot;
    packet->w = w;
    packet->inc = inc;
    packet->inc_dot = inc_dot;
    packet->af0 = af0;
    packet->af1 = af1;
    packet->af2 = af2;
    packet->toe_tow = toe_tow;
    packet->toc_tow = toc_tow;
    packet->sid = sid;
    packet->reserved = reserved;
    packet->toe_wn = toe_wn;
    packet->toc_wn = toc_wn;
    packet->iodc = iodc;
    packet->valid = valid;
    packet->healthy = healthy;
    packet->iode = iode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS, (const char *)packet, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_CRC);
#endif
}
#endif

#endif

// MESSAGE PIKSI_MSG_EPHEMERIS UNPACKING


/**
 * @brief Get field tgd from piksi_msg_ephemeris message
 *
 * @return  Group delay differential between L1 and L2
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_tgd(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  0);
}

/**
 * @brief Get field c_rs from piksi_msg_ephemeris message
 *
 * @return  Amplitude of the sine harmonic correction term to the orbit radius
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_c_rs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  8);
}

/**
 * @brief Get field c_rc from piksi_msg_ephemeris message
 *
 * @return  Amplitude of the cosine harmoinic correction term to the orbit radius
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_c_rc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  16);
}

/**
 * @brief Get field c_uc from piksi_msg_ephemeris message
 *
 * @return  Amplitude of the sine harmoinic correction term to the argument of latitude
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_c_uc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  24);
}

/**
 * @brief Get field c_us from piksi_msg_ephemeris message
 *
 * @return  Amplitude of the cosine harmoinic correction term to the argument of latitude
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_c_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  32);
}

/**
 * @brief Get field c_ic from piksi_msg_ephemeris message
 *
 * @return  Amplitude of the sine harmoinic correction term to the angle of inclination
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_c_ic(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  40);
}

/**
 * @brief Get field c_is from piksi_msg_ephemeris message
 *
 * @return  Amplitude of the cosine harmoinic correction term to the angle of inclination
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_c_is(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  48);
}

/**
 * @brief Get field dn from piksi_msg_ephemeris message
 *
 * @return  Mean motion difference
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_dn(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  56);
}

/**
 * @brief Get field m0 from piksi_msg_ephemeris message
 *
 * @return  Mean anomaly at reference time
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_m0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  64);
}

/**
 * @brief Get field ecc from piksi_msg_ephemeris message
 *
 * @return  Eccentricity of satellite orbit
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_ecc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  72);
}

/**
 * @brief Get field sqrta from piksi_msg_ephemeris message
 *
 * @return  Square root of the semi-major axis of orbit
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_sqrta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  80);
}

/**
 * @brief Get field omega0 from piksi_msg_ephemeris message
 *
 * @return  Longitude of ascending node of orbit plane at weekly epoch
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_omega0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  88);
}

/**
 * @brief Get field omegadot from piksi_msg_ephemeris message
 *
 * @return  Rate of right ascension
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_omegadot(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  96);
}

/**
 * @brief Get field w from piksi_msg_ephemeris message
 *
 * @return  Argument of perigee
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_w(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  104);
}

/**
 * @brief Get field inc from piksi_msg_ephemeris message
 *
 * @return  Inclination
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_inc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  112);
}

/**
 * @brief Get field inc_dot from piksi_msg_ephemeris message
 *
 * @return  Inclination first derivative
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_inc_dot(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  120);
}

/**
 * @brief Get field af0 from piksi_msg_ephemeris message
 *
 * @return  Polynomial clock correction coefficient (clock bias)
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_af0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  128);
}

/**
 * @brief Get field af1 from piksi_msg_ephemeris message
 *
 * @return  Polynomial clock correction coefficient (clock drift)
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_af1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  136);
}

/**
 * @brief Get field af2 from piksi_msg_ephemeris message
 *
 * @return  Polynomial clock correction coefficient (rate of clock drift)
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_af2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  144);
}

/**
 * @brief Get field toe_tow from piksi_msg_ephemeris message
 *
 * @return  Time of week
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_toe_tow(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  152);
}

/**
 * @brief Get field toe_wn from piksi_msg_ephemeris message
 *
 * @return  Week number
 */
static inline uint16_t mavlink_msg_piksi_msg_ephemeris_get_toe_wn(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  176);
}

/**
 * @brief Get field toc_tow from piksi_msg_ephemeris message
 *
 * @return  Clock reference time of week
 */
static inline double mavlink_msg_piksi_msg_ephemeris_get_toc_tow(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  160);
}

/**
 * @brief Get field toc_wn from piksi_msg_ephemeris message
 *
 * @return  Clock reference week number
 */
static inline uint16_t mavlink_msg_piksi_msg_ephemeris_get_toc_wn(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  178);
}

/**
 * @brief Get field valid from piksi_msg_ephemeris message
 *
 * @return  Is valid?
 */
static inline uint8_t mavlink_msg_piksi_msg_ephemeris_get_valid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  182);
}

/**
 * @brief Get field healthy from piksi_msg_ephemeris message
 *
 * @return  Satellite is healthy?
 */
static inline uint8_t mavlink_msg_piksi_msg_ephemeris_get_healthy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  183);
}

/**
 * @brief Get field sid from piksi_msg_ephemeris message
 *
 * @return  Signal identifier being tracked. Values 0x00 through 0x1F represent GPS PRNs 1 through 32 (PRN-1 notation). Other values reserved for future use.
 */
static inline uint32_t mavlink_msg_piksi_msg_ephemeris_get_sid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  168);
}

/**
 * @brief Get field iode from piksi_msg_ephemeris message
 *
 * @return  Issue of ephemeris data
 */
static inline uint8_t mavlink_msg_piksi_msg_ephemeris_get_iode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  184);
}

/**
 * @brief Get field iodc from piksi_msg_ephemeris message
 *
 * @return  Issue of clock data
 */
static inline uint16_t mavlink_msg_piksi_msg_ephemeris_get_iodc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  180);
}

/**
 * @brief Get field reserved from piksi_msg_ephemeris message
 *
 * @return  Reserved field
 */
static inline uint32_t mavlink_msg_piksi_msg_ephemeris_get_reserved(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  172);
}

/**
 * @brief Decode a piksi_msg_ephemeris message into a struct
 *
 * @param msg The message to decode
 * @param piksi_msg_ephemeris C-struct to decode the message contents into
 */
static inline void mavlink_msg_piksi_msg_ephemeris_decode(const mavlink_message_t* msg, mavlink_piksi_msg_ephemeris_t* piksi_msg_ephemeris)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    piksi_msg_ephemeris->tgd = mavlink_msg_piksi_msg_ephemeris_get_tgd(msg);
    piksi_msg_ephemeris->c_rs = mavlink_msg_piksi_msg_ephemeris_get_c_rs(msg);
    piksi_msg_ephemeris->c_rc = mavlink_msg_piksi_msg_ephemeris_get_c_rc(msg);
    piksi_msg_ephemeris->c_uc = mavlink_msg_piksi_msg_ephemeris_get_c_uc(msg);
    piksi_msg_ephemeris->c_us = mavlink_msg_piksi_msg_ephemeris_get_c_us(msg);
    piksi_msg_ephemeris->c_ic = mavlink_msg_piksi_msg_ephemeris_get_c_ic(msg);
    piksi_msg_ephemeris->c_is = mavlink_msg_piksi_msg_ephemeris_get_c_is(msg);
    piksi_msg_ephemeris->dn = mavlink_msg_piksi_msg_ephemeris_get_dn(msg);
    piksi_msg_ephemeris->m0 = mavlink_msg_piksi_msg_ephemeris_get_m0(msg);
    piksi_msg_ephemeris->ecc = mavlink_msg_piksi_msg_ephemeris_get_ecc(msg);
    piksi_msg_ephemeris->sqrta = mavlink_msg_piksi_msg_ephemeris_get_sqrta(msg);
    piksi_msg_ephemeris->omega0 = mavlink_msg_piksi_msg_ephemeris_get_omega0(msg);
    piksi_msg_ephemeris->omegadot = mavlink_msg_piksi_msg_ephemeris_get_omegadot(msg);
    piksi_msg_ephemeris->w = mavlink_msg_piksi_msg_ephemeris_get_w(msg);
    piksi_msg_ephemeris->inc = mavlink_msg_piksi_msg_ephemeris_get_inc(msg);
    piksi_msg_ephemeris->inc_dot = mavlink_msg_piksi_msg_ephemeris_get_inc_dot(msg);
    piksi_msg_ephemeris->af0 = mavlink_msg_piksi_msg_ephemeris_get_af0(msg);
    piksi_msg_ephemeris->af1 = mavlink_msg_piksi_msg_ephemeris_get_af1(msg);
    piksi_msg_ephemeris->af2 = mavlink_msg_piksi_msg_ephemeris_get_af2(msg);
    piksi_msg_ephemeris->toe_tow = mavlink_msg_piksi_msg_ephemeris_get_toe_tow(msg);
    piksi_msg_ephemeris->toc_tow = mavlink_msg_piksi_msg_ephemeris_get_toc_tow(msg);
    piksi_msg_ephemeris->sid = mavlink_msg_piksi_msg_ephemeris_get_sid(msg);
    piksi_msg_ephemeris->reserved = mavlink_msg_piksi_msg_ephemeris_get_reserved(msg);
    piksi_msg_ephemeris->toe_wn = mavlink_msg_piksi_msg_ephemeris_get_toe_wn(msg);
    piksi_msg_ephemeris->toc_wn = mavlink_msg_piksi_msg_ephemeris_get_toc_wn(msg);
    piksi_msg_ephemeris->iodc = mavlink_msg_piksi_msg_ephemeris_get_iodc(msg);
    piksi_msg_ephemeris->valid = mavlink_msg_piksi_msg_ephemeris_get_valid(msg);
    piksi_msg_ephemeris->healthy = mavlink_msg_piksi_msg_ephemeris_get_healthy(msg);
    piksi_msg_ephemeris->iode = mavlink_msg_piksi_msg_ephemeris_get_iode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN? msg->len : MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN;
        memset(piksi_msg_ephemeris, 0, MAVLINK_MSG_ID_PIKSI_MSG_EPHEMERIS_LEN);
    memcpy(piksi_msg_ephemeris, _MAV_PAYLOAD(msg), len);
#endif
}
