// MESSAGE ANV_SPRAY_STATUS support class

#pragma once

namespace mavlink {
namespace aeronavics {
namespace msg {

/**
 * @brief ANV_SPRAY_STATUS message
 *
 * Telemetry of the spray system.
 */
struct ANV_SPRAY_STATUS : mavlink::Message {
    static constexpr msgid_t MSG_ID = 5017;
    static constexpr size_t LENGTH = 41;
    static constexpr size_t MIN_LENGTH = 41;
    static constexpr uint8_t CRC_EXTRA = 49;
    static constexpr auto NAME = "ANV_SPRAY_STATUS";


    uint16_t measured_flowrate; /*<  Measured Flowrate */
    uint16_t desired_flowrate; /*<  Desired Flowrate */
    uint16_t set_flowrate; /*<  Set Flowrate */
    double total_sprayed_volume; /*<  Total Volume Sprayed */
    double armed_sprayed_volume; /*<  Armed Volume Sprayed */
    double last_tree_volume; /*<  Last Tree Volume */
    double spray_remaining; /*<  Spray Remaining */
    uint16_t pressure; /*<  Measured Pressure */
    uint8_t error; /*<  Spray Error */


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
        ss << "  measured_flowrate: " << measured_flowrate << std::endl;
        ss << "  desired_flowrate: " << desired_flowrate << std::endl;
        ss << "  set_flowrate: " << set_flowrate << std::endl;
        ss << "  total_sprayed_volume: " << total_sprayed_volume << std::endl;
        ss << "  armed_sprayed_volume: " << armed_sprayed_volume << std::endl;
        ss << "  last_tree_volume: " << last_tree_volume << std::endl;
        ss << "  spray_remaining: " << spray_remaining << std::endl;
        ss << "  pressure: " << pressure << std::endl;
        ss << "  error: " << +error << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << total_sprayed_volume;          // offset: 0
        map << armed_sprayed_volume;          // offset: 8
        map << last_tree_volume;              // offset: 16
        map << spray_remaining;               // offset: 24
        map << measured_flowrate;             // offset: 32
        map << desired_flowrate;              // offset: 34
        map << set_flowrate;                  // offset: 36
        map << pressure;                      // offset: 38
        map << error;                         // offset: 40
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> total_sprayed_volume;          // offset: 0
        map >> armed_sprayed_volume;          // offset: 8
        map >> last_tree_volume;              // offset: 16
        map >> spray_remaining;               // offset: 24
        map >> measured_flowrate;             // offset: 32
        map >> desired_flowrate;              // offset: 34
        map >> set_flowrate;                  // offset: 36
        map >> pressure;                      // offset: 38
        map >> error;                         // offset: 40
    }
};

} // namespace msg
} // namespace aeronavics
} // namespace mavlink
