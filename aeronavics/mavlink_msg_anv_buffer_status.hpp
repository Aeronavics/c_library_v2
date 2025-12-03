// MESSAGE ANV_BUFFER_STATUS support class

#pragma once

namespace mavlink {
namespace aeronavics {
namespace msg {

/**
 * @brief ANV_BUFFER_STATUS message
 *
 * A message for viewing a buffers status
 */
struct ANV_BUFFER_STATUS : mavlink::Message {
    static constexpr msgid_t MSG_ID = 5001;
    static constexpr size_t LENGTH = 9;
    static constexpr size_t MIN_LENGTH = 9;
    static constexpr uint8_t CRC_EXTRA = 161;
    static constexpr auto NAME = "ANV_BUFFER_STATUS";


    uint8_t id; /*<  ID of the buffer */
    uint16_t buffer_type; /*<  Buffer type */
    uint16_t min_space; /*<   */
    uint16_t max_space; /*<  Temerature of the regulator measured in milli Degrees Celsius */
    uint16_t avg_space; /*<  The rated current of the regulator measured in mA */


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
        ss << "  buffer_type: " << buffer_type << std::endl;
        ss << "  min_space: " << min_space << std::endl;
        ss << "  max_space: " << max_space << std::endl;
        ss << "  avg_space: " << avg_space << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << buffer_type;                   // offset: 0
        map << min_space;                     // offset: 2
        map << max_space;                     // offset: 4
        map << avg_space;                     // offset: 6
        map << id;                            // offset: 8
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> buffer_type;                   // offset: 0
        map >> min_space;                     // offset: 2
        map >> max_space;                     // offset: 4
        map >> avg_space;                     // offset: 6
        map >> id;                            // offset: 8
    }
};

} // namespace msg
} // namespace aeronavics
} // namespace mavlink
