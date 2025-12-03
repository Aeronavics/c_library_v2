// MESSAGE ANV_REGULATOR_STATUS support class

#pragma once

namespace mavlink {
namespace aeronavics {
namespace msg {

/**
 * @brief ANV_REGULATOR_STATUS message
 *
 * A command for outputing a regulator's status. This includes it's output voltage, current and temperature.
 */
struct ANV_REGULATOR_STATUS : mavlink::Message {
    static constexpr msgid_t MSG_ID = 5000;
    static constexpr size_t LENGTH = 11;
    static constexpr size_t MIN_LENGTH = 11;
    static constexpr uint8_t CRC_EXTRA = 4;
    static constexpr auto NAME = "ANV_REGULATOR_STATUS";


    uint8_t id; /*<  ID of the regulator */
    uint16_t voltage; /*<  Voltage output of the regulator measured in mV */
    uint16_t current; /*<  Current output of the regulator measured in mA */
    uint16_t temperature; /*<  Temerature of the regulator measured in milli Degrees Celsius */
    uint16_t max_rated_current; /*<  The rated current of the regulator measured in mA */
    uint16_t consumed_power; /*<  The integral of used power of the regulator. Measured in mAH */


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
        ss << "  id: " << +id << std::endl;
        ss << "  voltage: " << voltage << std::endl;
        ss << "  current: " << current << std::endl;
        ss << "  temperature: " << temperature << std::endl;
        ss << "  max_rated_current: " << max_rated_current << std::endl;
        ss << "  consumed_power: " << consumed_power << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << voltage;                       // offset: 0
        map << current;                       // offset: 2
        map << temperature;                   // offset: 4
        map << max_rated_current;             // offset: 6
        map << consumed_power;                // offset: 8
        map << id;                            // offset: 10
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> voltage;                       // offset: 0
        map >> current;                       // offset: 2
        map >> temperature;                   // offset: 4
        map >> max_rated_current;             // offset: 6
        map >> consumed_power;                // offset: 8
        map >> id;                            // offset: 10
    }
};

} // namespace msg
} // namespace aeronavics
} // namespace mavlink
