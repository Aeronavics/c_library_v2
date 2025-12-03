// MESSAGE ANV_SMART_PORT_POLL_PACKET support class

#pragma once

namespace mavlink {
namespace aeronavics {
namespace msg {

/**
 * @brief ANV_SMART_PORT_POLL_PACKET message
 *
 *  A message for passing around a smart port poll packet.
 */
struct ANV_SMART_PORT_POLL_PACKET : mavlink::Message {
    static constexpr msgid_t MSG_ID = 5013;
    static constexpr size_t LENGTH = 2;
    static constexpr size_t MIN_LENGTH = 2;
    static constexpr uint8_t CRC_EXTRA = 102;
    static constexpr auto NAME = "ANV_SMART_PORT_POLL_PACKET";


    std::array<uint8_t, 2> smart_port_poll_packet; /*<  Smart port poll packet */


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
        ss << "  smart_port_poll_packet: [" << to_string(smart_port_poll_packet) << "]" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << smart_port_poll_packet;        // offset: 0
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> smart_port_poll_packet;        // offset: 0
    }
};

} // namespace msg
} // namespace aeronavics
} // namespace mavlink
