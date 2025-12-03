// MESSAGE ANV_GS_CTRL_DATA support class

#pragma once

namespace mavlink {
namespace aeronavics {
namespace msg {

/**
 * @brief ANV_GS_CTRL_DATA message
 *
 * A message for transmitting the data from the UI baord.
 */
struct ANV_GS_CTRL_DATA : mavlink::Message {
    static constexpr msgid_t MSG_ID = 5014;
    static constexpr size_t LENGTH = 49;
    static constexpr size_t MIN_LENGTH = 49;
    static constexpr uint8_t CRC_EXTRA = 85;
    static constexpr auto NAME = "ANV_GS_CTRL_DATA";


    uint8_t controller_id; /*<  Controller id */
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
        ss << "  controller_id: " << +controller_id << std::endl;
        ss << "  an_channel: [" << to_string(an_channel) << "]" << std::endl;
        ss << "  dig_channel: " << dig_channel << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << an_channel;                    // offset: 0
        map << dig_channel;                   // offset: 44
        map << controller_id;                 // offset: 48
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> an_channel;                    // offset: 0
        map >> dig_channel;                   // offset: 44
        map >> controller_id;                 // offset: 48
    }
};

} // namespace msg
} // namespace aeronavics
} // namespace mavlink
