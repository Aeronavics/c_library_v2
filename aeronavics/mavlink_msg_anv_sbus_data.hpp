// MESSAGE ANV_SBUS_DATA support class

#pragma once

namespace mavlink {
namespace aeronavics {
namespace msg {

/**
 * @brief ANV_SBUS_DATA message
 *
 * A message for passing around a raw sbus frame.
 */
struct ANV_SBUS_DATA : mavlink::Message {
    static constexpr msgid_t MSG_ID = 5003;
    static constexpr size_t LENGTH = 25;
    static constexpr size_t MIN_LENGTH = 25;
    static constexpr uint8_t CRC_EXTRA = 94;
    static constexpr auto NAME = "ANV_SBUS_DATA";


    std::array<uint8_t, 25> sbus_data; /*<  Raw SBUS data */


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
        ss << "  sbus_data: [" << to_string(sbus_data) << "]" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << sbus_data;                     // offset: 0
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> sbus_data;                     // offset: 0
    }
};

} // namespace msg
} // namespace aeronavics
} // namespace mavlink
