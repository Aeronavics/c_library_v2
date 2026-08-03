// MESSAGE ANV_TAG_LOCATION support class

#pragma once

namespace mavlink {
namespace aeronavics {
namespace msg {

/**
 * @brief ANV_TAG_LOCATION message
 *
 * Send a location.
 */
struct ANV_TAG_LOCATION : mavlink::Message {
    static constexpr msgid_t MSG_ID = 5018;
    static constexpr size_t LENGTH = 8;
    static constexpr size_t MIN_LENGTH = 8;
    static constexpr uint8_t CRC_EXTRA = 37;
    static constexpr auto NAME = "ANV_TAG_LOCATION";


    int32_t latitude; /*< [degE7] Latitude. If unknown: 0 (both Lat/Lon). */
    int32_t longitude; /*< [degE7] Longitude. If unknown: 0 (both Lat/Lon). */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  latitude: " << latitude << std::endl;
        ss << "  longitude: " << longitude << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << latitude;                      // offset: 0
        map << longitude;                     // offset: 4
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> latitude;                      // offset: 0
        map >> longitude;                     // offset: 4
    }
};

} // namespace msg
} // namespace aeronavics
} // namespace mavlink
