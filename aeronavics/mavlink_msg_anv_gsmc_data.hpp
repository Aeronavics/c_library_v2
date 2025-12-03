// MESSAGE ANV_GSMC_DATA support class

#pragma once

namespace mavlink {
namespace aeronavics {
namespace msg {

/**
 * @brief ANV_GSMC_DATA message
 *
 * A message for transmitting the data from the ground station mission computer.
 */
struct ANV_GSMC_DATA : mavlink::Message {
    static constexpr msgid_t MSG_ID = 5015;
    static constexpr size_t LENGTH = 16;
    static constexpr size_t MIN_LENGTH = 16;
    static constexpr uint8_t CRC_EXTRA = 252;
    static constexpr auto NAME = "ANV_GSMC_DATA";


    std::array<char, 16> gsmc_ip; /*<  Ground Station IP */


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
        ss << "  gsmc_ip: \"" << to_string(gsmc_ip) << "\"" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << gsmc_ip;                       // offset: 0
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> gsmc_ip;                       // offset: 0
    }
};

} // namespace msg
} // namespace aeronavics
} // namespace mavlink
