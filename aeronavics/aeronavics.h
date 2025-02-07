/** @file
 *  @brief MAVLink comm protocol generated from aeronavics.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_AERONAVICS_H
#define MAVLINK_AERONAVICS_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_AERONAVICS.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_AERONAVICS_XML_HASH -7101328946339028059

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{196, 179, 24, 24, 0, 0, 0}, {197, 144, 185, 185, 0, 0, 0}, {198, 181, 1, 1, 0, 0, 0}, {1950, 144, 56, 56, 0, 0, 0}, {5000, 76, 11, 11, 0, 0, 0}, {5001, 158, 9, 9, 0, 0, 0}, {5002, 246, 48, 48, 0, 0, 0}, {5003, 56, 25, 25, 0, 0, 0}, {5004, 125, 35, 35, 3, 8, 9}, {5005, 26, 4, 4, 0, 0, 0}, {5006, 158, 6, 6, 0, 0, 0}, {5007, 75, 12, 12, 0, 0, 0}, {5013, 252, 2, 2, 0, 0, 0}, {5014, 231, 49, 49, 0, 0, 0}, {5015, 114, 16, 16, 0, 0, 0}, {5016, 9, 3, 3, 0, 0, 0}, {5017, 2, 23, 23, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_AERONAVICS

// ENUM DEFINITIONS


/** @brief Component ids (values) for the different types and instances of onboard hardware/software that might make up a MAVLink system (autopilot, cameras, servos, GPS systems, avoidance systems etc.).
      Components must use the appropriate ID in their source address when sending messages. Components can also use IDs to determine if they are the intended recipient of an incoming message. The MAV_COMP_ID_ALL value is used to indicate messages that must be processed by all components.
      When creating new entries, components that can have multiple instances (e.g. cameras, servos etc.) should be allocated sequential values. An appropriate number of values should be left free after these components to allow the number of instances to be expanded. */
#ifndef HAVE_ENUM_MAV_COMPONENT
#define HAVE_ENUM_MAV_COMPONENT
typedef enum MAV_COMPONENT
{
   MAV_COMP_ID_ALL=0, /* Target id (target_component) used to broadcast messages to all components of the receiving system. Components should attempt to process messages with this component ID and forward to components on any other interfaces. Note: This is not a valid *source* component id for a message. | */
   MAV_COMP_ID_AUTOPILOT1=1, /* System flight controller component ("autopilot"). Only one autopilot is expected in a particular system. | */
   MAV_COMP_ID_UNL_MC_MONOLITH=25, /* cID for monolithic elements on the Mission Computer, which don't have their own cID.  Most obviously, the parameter server uses this cID, so all elements using the parameter server should use this cID. | */
   MAV_COMP_ID_UNL_MC_CORE=26, /* cID for the Mission Computer 'cored' module, which monitors the health of other components and emits a heartbeat for the overall system. | */
   MAV_COMP_ID_UNL_MC_LOG=27, /* cID for the Mission Computer 'logd' module, which simply provides logging of all MAVlink messages. | */
   MAV_COMP_ID_UNL_MC_VIDEO=28, /* cID for the Mission Computer 'videod' module, which manages capture and streaming of imagery. | */
   MAV_COMP_ID_LCM_BRIDGE=29, /* cID for the Mission Computer 'bridge_lcmd' module, which governs the link between internal and external MAVlink comms. | */
   MAV_COMP_ID_SBP_BRIDGE=30, /* cID for the Mission Computer 'bridge_inject_uartd' module, which links between the mission computer and the RTK GPS. | */
   MAV_COMP_ID_UART_PAYCTL=31, /* cID for the Mission Computer 'bridge_uart' module, which links between the mission computer and the payload controller. | */
   MAV_COMP_ID_UART_RADCTL=32, /* cID for the Mission Computer 'bridge_uart' module, which links between mission computer and the airside radio controller. | */
   MAV_COMP_ID_UART_GCS=33, /* cID for the Mission Computer 'bridge_uart' module, which links between mission computer and the GCS controller. | */
   MAV_COMP_ID_UART_FC=34, /* cID for the Mission Computer 'bridge_uart' module, which links between mission computer and the flight controller. | */
   MAV_COMP_ID_UART_RTX=35, /* cID for the Mission Computer 'bridge_uart' module, which links between mission computer and the RC transciever. | */
   MAV_COMP_ID_UDPD_MAVROS=36, /* cID for the Mission Computer 'bridge_udpd' module, linking been internal LCM and MAVROS.  Note the cID is set by command line parameter, so this definition is just for convenience. | */
   MAV_COMP_ID_UDPD_MAVPROXY=37, /* cID for the Mission Computer 'bridge_udpd' module, linking between external LCM and MAVPROXY.  Note the cID is set by command line parameter, so this definition is just for convenience. | */
   MAV_COMP_ID_UDPD_DRONEKIT=38, /* cID for the Mission Computer 'bridge_udpd' module, linking between external LCM and DroneKit.  Note the cID is set by command line parameter, so this definition is just for convenience. | */
   MAV_COMP_ID_UDPD_DFLOGGER=39, /* cID for the Mission Computer 'bridge_udpd' module, linking between internal LCM and dataflash_logger.  Note the cID is set by command line parameter, so this definition is just for convenience. | */
   MAV_COMP_ID_UDPD_ROCOS=40, /* cID for the Mission Computer 'bridge_udpd' module, linking between internal LCM and ROCOS.  Note the cID is set by command line parameter, so this definition is just for convenience. | */
   MAV_COMP_ID_UDPD_ETHPAYLOAD=41, /* cID for the Mission Computer 'bridge_udpd' module, linking between internal LCM and custom ethernet payload.  Note the cID is set by command line parameter, so this definition is just for convenience. | */
   MAV_COMP_ID_UDPD_CD=42, /* cID for the Mission Computer 'bridge_udpd' module, linking between external LCM and a primary endpoint on the ground.  Note the cID is set by command line parameter, so this definition is just for convenience. | */
   MAV_COMP_ID_UDPD_TELEM=43, /* cID for the Mission Computer 'bridge_udpd' module, linking between external LCM and a secondary endpoint on the ground.  Note the cID is set by command line parameter, so this definition is just for convenience. | */
   MAV_COMP_ID_MONITOR_MICROHD=44, /* cID for the Mission Computer 'microhard_monitord' module, which queries both local and remote pDDL radios.  Note the cID is set by command line parameter, so this definition is just for convenience. | */
   MAV_COMP_ID_MONITOR_UAVCAN=45, /* cID for the Mission Computer 'can_monitord' module, which monitors UAVCAN traffic.  Note the cID is set by command line parameter, so this definition is just for convenience. | */
   MAV_COMP_ID_UART_RADCTL_MICROHARD=46, /* cID for the Mission Computer 'bridge_uart' module, which links between mission computer and the microhard onboard the airside radio controller. | */
   MAV_COMP_ID_MAVROS=49, /* cID for MAVROS itself (not the bridge).  Note that mavros.launch hard codes 49, so this definition is just for convenience. | */
   MAV_COMP_ID_RTK_GPS=50, /* cID for an RTK GPS unit. | */
   MAV_COMP_ID_PAYCTL=51, /* cID for the Advanced Payload Controller. | */
   MAV_COMP_ID_ASRB=52, /* cID for the Airside Router Board | */
   MAV_COMP_ID_GSCB=53, /* cID for the Ground Side Comms Board | */
   MAV_COMP_ID_GSIB=54, /* cID for the Ground Side Interface Board | */
   MAV_COMP_ID_ASPB=55, /* cID for the Ground Side Interface Board | */
   MAV_COMP_ID_CBR=56, /* cID for the CAN Breaout Board | */
   MAV_COMP_ID_DATAFLASHLOGGER=57, /* cID for the Dataflash Logger on the Mission Computer.  This is outside the usual 25-49 range, but left because it's third party software and this is its default. | */
   MAV_COMP_ID_SBUS_DECODE=58, /* cID for the SBUS decoder on the Mission Computer. | */
   MAV_COMP_ID_IPDB=59, /* cID for the ICON power distribution board. | */
   MAV_COMP_ID_TELEMETRY_RADIO=68, /* Telemetry radio (e.g. SiK radio, or other component that emits RADIO_STATUS messages). | */
   MAV_COMP_ID_CAMERA=100, /* Camera #1. | */
   MAV_COMP_ID_CAMERA2=101, /* Camera #2. | */
   MAV_COMP_ID_CAMERA3=102, /* Camera #3. | */
   MAV_COMP_ID_CAMERA4=103, /* Camera #4. | */
   MAV_COMP_ID_CAMERA5=104, /* Camera #5. | */
   MAV_COMP_ID_CAMERA6=105, /* Camera #6. | */
   MAV_COMP_ID_SERVO1=140, /* Servo #1. | */
   MAV_COMP_ID_SERVO2=141, /* Servo #2. | */
   MAV_COMP_ID_SERVO3=142, /* Servo #3. | */
   MAV_COMP_ID_SERVO4=143, /* Servo #4. | */
   MAV_COMP_ID_SERVO5=144, /* Servo #5. | */
   MAV_COMP_ID_SERVO6=145, /* Servo #6. | */
   MAV_COMP_ID_SERVO7=146, /* Servo #7. | */
   MAV_COMP_ID_SERVO8=147, /* Servo #8. | */
   MAV_COMP_ID_SERVO9=148, /* Servo #9. | */
   MAV_COMP_ID_SERVO10=149, /* Servo #10. | */
   MAV_COMP_ID_SERVO11=150, /* Servo #11. | */
   MAV_COMP_ID_SERVO12=151, /* Servo #12. | */
   MAV_COMP_ID_SERVO13=152, /* Servo #13. | */
   MAV_COMP_ID_SERVO14=153, /* Servo #14. | */
   MAV_COMP_ID_GIMBAL=154, /* Gimbal #1. | */
   MAV_COMP_ID_LOG=155, /* Logging component. | */
   MAV_COMP_ID_ADSB=156, /* Automatic Dependent Surveillance-Broadcast (ADS-B) component. | */
   MAV_COMP_ID_OSD=157, /* On Screen Display (OSD) devices for video links. | */
   MAV_COMP_ID_PERIPHERAL=158, /* Generic autopilot peripheral component ID. Meant for devices that do not implement the parameter microservice. | */
   MAV_COMP_ID_QX1_GIMBAL=159, /* Gimbal ID for QX1. | */
   MAV_COMP_ID_FLARM=160, /* FLARM collision alert component. | */
   MAV_COMP_ID_PARACHUTE=161, /* Parachute component. | */
   MAV_COMP_ID_WINCH=169, /* Winch component. | */
   MAV_COMP_ID_GIMBAL2=171, /* Gimbal #2. | */
   MAV_COMP_ID_GIMBAL3=172, /* Gimbal #3. | */
   MAV_COMP_ID_GIMBAL4=173, /* Gimbal #4 | */
   MAV_COMP_ID_GIMBAL5=174, /* Gimbal #5. | */
   MAV_COMP_ID_GIMBAL6=175, /* Gimbal #6. | */
   MAV_COMP_ID_BATTERY=180, /* Battery #1. | */
   MAV_COMP_ID_BATTERY2=181, /* Battery #2. | */
   MAV_COMP_ID_MAVCAN=189, /* CAN over MAVLink client. | */
   MAV_COMP_ID_MISSIONPLANNER=190, /* Component that can generate/supply a mission flight plan (e.g. GCS or developer API). | */
   MAV_COMP_ID_ONBOARD_COMPUTER=191, /* Component that lives on the onboard computer (companion computer) and has some generic functionalities, such as settings system parameters and monitoring the status of some processes that don't directly speak mavlink and so on. | */
   MAV_COMP_ID_ONBOARD_COMPUTER2=192, /* Component that lives on the onboard computer (companion computer) and has some generic functionalities, such as settings system parameters and monitoring the status of some processes that don't directly speak mavlink and so on. | */
   MAV_COMP_ID_ONBOARD_COMPUTER3=193, /* Component that lives on the onboard computer (companion computer) and has some generic functionalities, such as settings system parameters and monitoring the status of some processes that don't directly speak mavlink and so on. | */
   MAV_COMP_ID_ONBOARD_COMPUTER4=194, /* Component that lives on the onboard computer (companion computer) and has some generic functionalities, such as settings system parameters and monitoring the status of some processes that don't directly speak mavlink and so on. | */
   MAV_COMP_ID_PATHPLANNER=195, /* Component that finds an optimal path between points based on a certain constraint (e.g. minimum snap, shortest path, cost, etc.). | */
   MAV_COMP_ID_OBSTACLE_AVOIDANCE=196, /* Component that plans a collision free path between two points. | */
   MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY=197, /* Component that provides position estimates using VIO techniques. | */
   MAV_COMP_ID_PAIRING_MANAGER=198, /* Component that manages pairing of vehicle and GCS. | */
   MAV_COMP_ID_IMU=200, /* Inertial Measurement Unit (IMU) #1. | */
   MAV_COMP_ID_IMU_2=201, /* Inertial Measurement Unit (IMU) #2. | */
   MAV_COMP_ID_IMU_3=202, /* Inertial Measurement Unit (IMU) #3. | */
   MAV_COMP_ID_GPS=220, /* GPS #1. | */
   MAV_COMP_ID_GPS2=221, /* GPS #2. | */
   MAV_COMP_ID_ODID_TXRX_1=236, /* Open Drone ID transmitter/receiver (Bluetooth/WiFi/Internet). | */
   MAV_COMP_ID_ODID_TXRX_2=237, /* Open Drone ID transmitter/receiver (Bluetooth/WiFi/Internet). | */
   MAV_COMP_ID_ODID_TXRX_3=238, /* Open Drone ID transmitter/receiver (Bluetooth/WiFi/Internet). | */
   MAV_COMP_ID_UDP_BRIDGE=240, /* Component to bridge MAVLink to UDP (i.e. from a UART). | */
   MAV_COMP_ID_UART_BRIDGE=241, /* Component to bridge to UART (i.e. from UDP). | */
   MAV_COMP_ID_TUNNEL_NODE=242, /* Component handling TUNNEL messages (e.g. vendor specific GUI of a component). | */
   MAV_COMP_ID_SYSTEM_CONTROL=250, /* Deprecated, don't use. Component for handling system messages (e.g. to ARM, takeoff, etc.). | */
   MAV_COMPONENT_ENUM_END=251, /*  | */
} MAV_COMPONENT;
#endif

/** @brief  */
#ifndef HAVE_ENUM_ANV_CONTROLLER
#define HAVE_ENUM_ANV_CONTROLLER
typedef enum ANV_CONTROLLER
{
   ANV_GS_CONTROLLER=0, /* Premium Ground Station controls | */
   ANV_HAND_CONTROLLER_AIRCRAFT=1, /* Hand controller for aircraft controls | */
   ANV_HAND_CONTROLLER_PAYLOAD=2, /* Hand controller for payload controls | */
   ANV_CONTROLLER_ENUM_END=3, /*  | */
} ANV_CONTROLLER;
#endif

/** @brief  */
#ifndef HAVE_ENUM_ANV_SPRAY_ERROR
#define HAVE_ENUM_ANV_SPRAY_ERROR
typedef enum ANV_SPRAY_ERROR
{
   ANV_SPRAY_ERROR_FLOWRATE1=1, /* Nozzle 1 has a flow rate error | */
   ANV_SPRAY_ERROR_FLOWRATE2=2, /* Nozzle 2 has a flow rate error | */
   ANV_SPRAY_ERROR_FLOWRATE3=4, /* Nozzle 3 has a flow rate error | */
   ANV_SPRAY_ERROR_FLOWRATE4=8, /* Nozzle 4 has a flow rate error | */
   ANV_SPRAY_ERROR_LOW_PRESSURE=16, /* Low pressure detected in spray system | */
   ANV_SPRAY_ERROR_OVER_PRESSURE=32, /* Over pressure detected in spray system | */
   ANV_SPRAY_ERROR_NO_SPRAY=64, /* No spray remaining or error with the spray measurement system | */
   ANV_SPRAY_ERROR_ENUM_END=65, /*  | */
} ANV_SPRAY_ERROR;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_piksi_msg_obs.h"
#include "./mavlink_msg_piksi_msg_base_pos.h"
#include "./mavlink_msg_piksi_msg_ephemeris.h"
#include "./mavlink_msg_piksi_restart.h"
#include "./mavlink_msg_anv_msg_regulator_status.h"
#include "./mavlink_msg_anv_msg_buffer_status.h"
#include "./mavlink_msg_anv_msg_gsib_data.h"
#include "./mavlink_msg_anv_msg_sbus_data.h"
#include "./mavlink_msg_anv_msg_radio_data.h"
#include "./mavlink_msg_anv_msg_firmware_information.h"
#include "./mavlink_msg_anv_msg_gscb_data.h"
#include "./mavlink_msg_anv_msg_latency_report.h"
#include "./mavlink_msg_anv_msg_smart_port_poll_packet.h"
#include "./mavlink_msg_anv_msg_gs_ctrl_data.h"
#include "./mavlink_msg_anv_msg_gsmc_data.h"
#include "./mavlink_msg_anv_msg_sysid.h"
#include "./mavlink_msg_anv_msg_spray_status.h"

// base include



#if MAVLINK_AERONAVICS_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_PIKSI_MSG_BASE_POS, MAVLINK_MESSAGE_INFO_PIKSI_MSG_EPHEMERIS, MAVLINK_MESSAGE_INFO_PIKSI_RESTART, MAVLINK_MESSAGE_INFO_PIKSI_MSG_OBS, MAVLINK_MESSAGE_INFO_ANV_MSG_REGULATOR_STATUS, MAVLINK_MESSAGE_INFO_ANV_MSG_BUFFER_STATUS, MAVLINK_MESSAGE_INFO_ANV_MSG_GSIB_DATA, MAVLINK_MESSAGE_INFO_ANV_MSG_SBUS_DATA, MAVLINK_MESSAGE_INFO_ANV_MSG_RADIO_DATA, MAVLINK_MESSAGE_INFO_ANV_MSG_FIRMWARE_INFORMATION, MAVLINK_MESSAGE_INFO_ANV_MSG_GSCB_DATA, MAVLINK_MESSAGE_INFO_ANV_MSG_LATENCY_REPORT, MAVLINK_MESSAGE_INFO_ANV_MSG_SMART_PORT_POLL_PACKET, MAVLINK_MESSAGE_INFO_ANV_MSG_GS_CTRL_DATA, MAVLINK_MESSAGE_INFO_ANV_MSG_GSMC_DATA, MAVLINK_MESSAGE_INFO_ANV_MSG_SYSID, MAVLINK_MESSAGE_INFO_ANV_MSG_SPRAY_STATUS}
# define MAVLINK_MESSAGE_NAMES {{ "ANV_MSG_BUFFER_STATUS", 5001 }, { "ANV_MSG_FIRMWARE_INFORMATION", 5005 }, { "ANV_MSG_GSCB_DATA", 5006 }, { "ANV_MSG_GSIB_DATA", 5002 }, { "ANV_MSG_GSMC_DATA", 5015 }, { "ANV_MSG_GS_CTRL_DATA", 5014 }, { "ANV_MSG_LATENCY_REPORT", 5007 }, { "ANV_MSG_RADIO_DATA", 5004 }, { "ANV_MSG_REGULATOR_STATUS", 5000 }, { "ANV_MSG_SBUS_DATA", 5003 }, { "ANV_MSG_SMART_PORT_POLL_PACKET", 5013 }, { "ANV_MSG_SPRAY_STATUS", 5017 }, { "ANV_MSG_SYSID", 5016 }, { "PIKSI_MSG_BASE_POS", 196 }, { "PIKSI_MSG_EPHEMERIS", 197 }, { "PIKSI_MSG_OBS", 1950 }, { "PIKSI_RESTART", 198 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_AERONAVICS_H
