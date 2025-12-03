// MESSAGE ANV_RADIO_DATA support class

#pragma once

namespace mavlink {
namespace aeronavics {
namespace msg {

/**
 * @brief ANV_RADIO_DATA message
 *
 * A message for passing around control frames. This is very similar to ID 5003, but is intended to be sent to the airside receiver. This seperates the reception of sbus data and the transmition
 */
struct ANV_RADIO_DATA : mavlink::Message {
    static constexpr msgid_t MSG_ID = 5004;
    static constexpr size_t LENGTH = 35;
    static constexpr size_t MIN_LENGTH = 35;
    static constexpr uint8_t CRC_EXTRA = 78;
    static constexpr auto NAME = "ANV_RADIO_DATA";


    uint8_t target_system; /*<  Target system ID */
    uint8_t target_component; /*<  Target component ID */
    std::array<uint8_t, 25> sbus_data; /*<  Raw SBUS data */
    uint64_t timestamp; /*<  System time of when the message was sent */


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
        ss << "  target_system: " << +target_system << std::endl;
        ss << "  target_component: " << +target_component << std::endl;
        ss << "  sbus_data: [" << to_string(sbus_data) << "]" << std::endl;
        ss << "  timestamp: " << timestamp << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timestamp;                     // offset: 0
        map << target_system;                 // offset: 8
        map << target_component;              // offset: 9
        map << sbus_data;                     // offset: 10
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timestamp;                     // offset: 0
        map >> target_system;                 // offset: 8
        map >> target_component;              // offset: 9
        map >> sbus_data;                     // offset: 10
    }
};

} // namespace msg
} // namespace aeronavics
} // namespace mavlink
