// MESSAGE ANV_GSIB_DATA support class

#pragma once

namespace mavlink {
namespace aeronavics {
namespace msg {

/**
 * @brief ANV_GSIB_DATA message
 *
 * A message for transmitting the data from the UI baord.
 */
struct ANV_GSIB_DATA : mavlink::Message {
    static constexpr msgid_t MSG_ID = 5002;
    static constexpr size_t LENGTH = 48;
    static constexpr size_t MIN_LENGTH = 48;
    static constexpr uint8_t CRC_EXTRA = 65;
    static constexpr auto NAME = "ANV_GSIB_DATA";


    std::array<uint32_t, 11> an_channel; /*<  Analog_channels. */
    uint32_t dig_channel; /*<  Bit mask of the Digital Switches' state */


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
        ss << "  an_channel: [" << to_string(an_channel) << "]" << std::endl;
        ss << "  dig_channel: " << dig_channel << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << an_channel;                    // offset: 0
        map << dig_channel;                   // offset: 44
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> an_channel;                    // offset: 0
        map >> dig_channel;                   // offset: 44
    }
};

} // namespace msg
} // namespace aeronavics
} // namespace mavlink
