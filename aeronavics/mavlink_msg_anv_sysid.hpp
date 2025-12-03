// MESSAGE ANV_SYSID support class

#pragma once

namespace mavlink {
namespace aeronavics {
namespace msg {

/**
 * @brief ANV_SYSID message
 *
 * A message for getting and setting sysids between ACs and GCSs
 */
struct ANV_SYSID : mavlink::Message {
    static constexpr msgid_t MSG_ID = 5016;
    static constexpr size_t LENGTH = 3;
    static constexpr size_t MIN_LENGTH = 3;
    static constexpr uint8_t CRC_EXTRA = 65;
    static constexpr auto NAME = "ANV_SYSID";


    uint16_t serial_number; /*<  AC serial number */
    uint8_t sysid; /*<  AC sysid */


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
        ss << "  serial_number: " << serial_number << std::endl;
        ss << "  sysid: " << +sysid << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << serial_number;                 // offset: 0
        map << sysid;                         // offset: 2
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> serial_number;                 // offset: 0
        map >> sysid;                         // offset: 2
    }
};

} // namespace msg
} // namespace aeronavics
} // namespace mavlink
