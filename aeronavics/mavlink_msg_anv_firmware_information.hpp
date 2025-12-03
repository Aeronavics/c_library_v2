// MESSAGE ANV_FIRMWARE_INFORMATION support class

#pragma once

namespace mavlink {
namespace aeronavics {
namespace msg {

/**
 * @brief ANV_FIRMWARE_INFORMATION message
 *
 * A message for relaying currently running software verions
 */
struct ANV_FIRMWARE_INFORMATION : mavlink::Message {
    static constexpr msgid_t MSG_ID = 5005;
    static constexpr size_t LENGTH = 4;
    static constexpr size_t MIN_LENGTH = 4;
    static constexpr uint8_t CRC_EXTRA = 87;
    static constexpr auto NAME = "ANV_FIRMWARE_INFORMATION";


    uint32_t firmware; /*<  Currently running firmware version */


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
        ss << "  firmware: " << firmware << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << firmware;                      // offset: 0
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> firmware;                      // offset: 0
    }
};

} // namespace msg
} // namespace aeronavics
} // namespace mavlink
