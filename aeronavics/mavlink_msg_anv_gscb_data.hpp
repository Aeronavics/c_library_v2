// MESSAGE ANV_GSCB_DATA support class

#pragma once

namespace mavlink {
namespace aeronavics {
namespace msg {

/**
 * @brief ANV_GSCB_DATA message
 *
 * A message for transmitting the data from the UI baord.
 */
struct ANV_GSCB_DATA : mavlink::Message {
    static constexpr msgid_t MSG_ID = 5006;
    static constexpr size_t LENGTH = 6;
    static constexpr size_t MIN_LENGTH = 6;
    static constexpr uint8_t CRC_EXTRA = 134;
    static constexpr auto NAME = "ANV_GSCB_DATA";


    uint8_t active_profile; /*<  The current profile in use */
    uint8_t battery_1_enabled; /*<  1 if the battery is enabled, 0 otherwise */
    uint8_t battery_2_enabled; /*<  1 if the battery is enabled, 0 otherwise */
    uint8_t external_power_enabled; /*<  1 if the external power is enabled, 0 otherwise */
    uint8_t tray_fan_enabled; /*<  1 if the tray fan is enabled, 0 otherwise */
    uint8_t electronics_fan_enabled; /*<  1 if the electronics fan is enabled, 0 otherwise */


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
        ss << "  active_profile: " << +active_profile << std::endl;
        ss << "  battery_1_enabled: " << +battery_1_enabled << std::endl;
        ss << "  battery_2_enabled: " << +battery_2_enabled << std::endl;
        ss << "  external_power_enabled: " << +external_power_enabled << std::endl;
        ss << "  tray_fan_enabled: " << +tray_fan_enabled << std::endl;
        ss << "  electronics_fan_enabled: " << +electronics_fan_enabled << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << active_profile;                // offset: 0
        map << battery_1_enabled;             // offset: 1
        map << battery_2_enabled;             // offset: 2
        map << external_power_enabled;        // offset: 3
        map << tray_fan_enabled;              // offset: 4
        map << electronics_fan_enabled;       // offset: 5
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> active_profile;                // offset: 0
        map >> battery_1_enabled;             // offset: 1
        map >> battery_2_enabled;             // offset: 2
        map >> external_power_enabled;        // offset: 3
        map >> tray_fan_enabled;              // offset: 4
        map >> electronics_fan_enabled;       // offset: 5
    }
};

} // namespace msg
} // namespace aeronavics
} // namespace mavlink
