// MESSAGE ANV_LATENCY_REPORT support class

#pragma once

namespace mavlink {
namespace aeronavics {
namespace msg {

/**
 * @brief ANV_LATENCY_REPORT message
 *
 * 
                A response to a specific target of a ping. 
                This lets the target know the latency of the ping it responded to
                This enables a remote box to update a delta clock for a the remote system to within approximately latency/2
                If the latency is too high, the remote can determine what to do with it.
            
 */
struct ANV_LATENCY_REPORT : mavlink::Message {
    static constexpr msgid_t MSG_ID = 5007;
    static constexpr size_t LENGTH = 12;
    static constexpr size_t MIN_LENGTH = 12;
    static constexpr uint8_t CRC_EXTRA = 237;
    static constexpr auto NAME = "ANV_LATENCY_REPORT";


    uint64_t latency; /*<  The latency recorded by the host ping */
    uint32_t seq; /*<  The sequence ID of the ping request */


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
        ss << "  latency: " << latency << std::endl;
        ss << "  seq: " << seq << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << latency;                       // offset: 0
        map << seq;                           // offset: 8
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> latency;                       // offset: 0
        map >> seq;                           // offset: 8
    }
};

} // namespace msg
} // namespace aeronavics
} // namespace mavlink
