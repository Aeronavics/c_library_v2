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

#define MAVLINK_AERONAVICS_XML_HASH 127445814420914795

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {9, 31, 12, 0, 14, 28, 3, 32, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 20, 2, 25, 23, 30, 101, 22, 26, 16, 14, 28, 32, 28, 28, 22, 22, 21, 6, 6, 37, 4, 4, 2, 2, 4, 2, 2, 3, 13, 12, 37, 4, 0, 0, 27, 25, 0, 0, 0, 0, 0, 72, 26, 181, 225, 42, 6, 4, 0, 11, 18, 0, 0, 37, 20, 35, 33, 3, 0, 0, 0, 22, 39, 37, 53, 51, 53, 51, 0, 28, 56, 42, 33, 81, 0, 0, 0, 0, 0, 0, 26, 32, 32, 20, 32, 62, 44, 64, 84, 9, 254, 16, 12, 36, 44, 64, 22, 6, 14, 12, 97, 2, 2, 113, 35, 6, 79, 35, 35, 22, 13, 255, 14, 18, 43, 8, 22, 14, 36, 43, 41, 32, 243, 14, 93, 0, 100, 36, 60, 30, 42, 8, 4, 12, 15, 13, 6, 15, 14, 0, 12, 3, 8, 28, 44, 3, 9, 22, 12, 18, 34, 66, 98, 8, 48, 19, 3, 20, 24, 29, 45, 4, 40, 2, 206, 7, 29, 0, 0, 0, 0, 27, 44, 22, 25, 37, 24, 185, 1, 0, 42, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 3, 3, 6, 7, 2, 0, 0, 0, 47, 45, 65, 8, 0, 0, 0, 42, 40, 63, 182, 40, 42, 0, 0, 0, 0, 0, 32, 52, 53, 6, 2, 38, 19, 254, 36, 30, 18, 18, 51, 9, 0}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {50, 124, 137, 0, 237, 217, 104, 119, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 214, 159, 220, 168, 24, 23, 170, 144, 67, 115, 39, 246, 185, 104, 237, 244, 222, 212, 9, 254, 230, 28, 28, 132, 221, 232, 11, 153, 41, 39, 78, 196, 0, 0, 15, 3, 0, 0, 0, 0, 0, 167, 183, 119, 191, 118, 148, 21, 0, 243, 124, 0, 0, 38, 20, 158, 152, 143, 0, 0, 0, 106, 49, 22, 143, 140, 5, 150, 0, 231, 183, 63, 54, 47, 0, 0, 0, 0, 0, 0, 175, 102, 158, 208, 56, 93, 138, 108, 32, 185, 84, 34, 174, 124, 237, 4, 76, 128, 56, 116, 134, 237, 203, 250, 87, 203, 220, 25, 226, 46, 29, 223, 85, 6, 229, 203, 1, 195, 109, 168, 181, 47, 72, 131, 127, 0, 103, 154, 178, 200, 134, 219, 208, 188, 84, 22, 19, 21, 134, 0, 78, 68, 189, 127, 154, 21, 21, 144, 1, 234, 73, 181, 22, 83, 167, 138, 234, 240, 47, 189, 52, 174, 229, 85, 159, 186, 72, 0, 0, 0, 0, 92, 36, 71, 98, 120, 179, 144, 181, 0, 134, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 101, 50, 202, 17, 162, 0, 0, 0, 119, 102, 208, 207, 0, 0, 0, 163, 105, 151, 35, 150, 179, 0, 0, 0, 0, 0, 90, 104, 85, 95, 130, 184, 81, 8, 204, 49, 170, 44, 83, 46, 0}
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
   MAV_COMP_ID_SYSTEM_CONTROL=250, /* Component for handling system messages (e.g. to ARM, takeoff, etc.). | */
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
#include "./mavlink_msg_piksi_msg_base_pos.h"
#include "./mavlink_msg_piksi_msg_ephemeris.h"
#include "./mavlink_msg_piksi_restart.h"

// base include
#include "../ardupilotmega/ardupilotmega.h"
#include "../uAvionix/uAvionix.h"
#include "../icarous/icarous.h"
#include "../common/common.h"
#include "../storm32/storm32.h"
#include "../ASLUAV/ASLUAV.h"
#include "../cubepilot/cubepilot.h"


#if MAVLINK_AERONAVICS_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_SYS_STATUS, MAVLINK_MESSAGE_INFO_SYSTEM_TIME, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_PING, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL_ACK, MAVLINK_MESSAGE_INFO_AUTH_KEY, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_SET_MODE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_READ, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_LIST, MAVLINK_MESSAGE_INFO_PARAM_VALUE, MAVLINK_MESSAGE_INFO_PARAM_SET, MAVLINK_MESSAGE_INFO_GPS_RAW_INT, MAVLINK_MESSAGE_INFO_GPS_STATUS, MAVLINK_MESSAGE_INFO_SCALED_IMU, MAVLINK_MESSAGE_INFO_RAW_IMU, MAVLINK_MESSAGE_INFO_RAW_PRESSURE, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE, MAVLINK_MESSAGE_INFO_ATTITUDE, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT, MAVLINK_MESSAGE_INFO_RC_CHANNELS_SCALED, MAVLINK_MESSAGE_INFO_RC_CHANNELS_RAW, MAVLINK_MESSAGE_INFO_SERVO_OUTPUT_RAW, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_WRITE_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_ITEM, MAVLINK_MESSAGE_INFO_MISSION_REQUEST, MAVLINK_MESSAGE_INFO_MISSION_SET_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_LIST, MAVLINK_MESSAGE_INFO_MISSION_COUNT, MAVLINK_MESSAGE_INFO_MISSION_CLEAR_ALL, MAVLINK_MESSAGE_INFO_MISSION_ITEM_REACHED, MAVLINK_MESSAGE_INFO_MISSION_ACK, MAVLINK_MESSAGE_INFO_SET_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_PARAM_MAP_RC, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_INT, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_SAFETY_SET_ALLOWED_AREA, MAVLINK_MESSAGE_INFO_SAFETY_ALLOWED_AREA, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION_COV, MAVLINK_MESSAGE_INFO_NAV_CONTROLLER_OUTPUT, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT_COV, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_COV, MAVLINK_MESSAGE_INFO_RC_CHANNELS, MAVLINK_MESSAGE_INFO_REQUEST_DATA_STREAM, MAVLINK_MESSAGE_INFO_DATA_STREAM, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MANUAL_CONTROL, MAVLINK_MESSAGE_INFO_RC_CHANNELS_OVERRIDE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MISSION_ITEM_INT, MAVLINK_MESSAGE_INFO_VFR_HUD, MAVLINK_MESSAGE_INFO_COMMAND_INT, MAVLINK_MESSAGE_INFO_COMMAND_LONG, MAVLINK_MESSAGE_INFO_COMMAND_ACK, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MANUAL_SETPOINT, MAVLINK_MESSAGE_INFO_SET_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_GLOBAL_INT, MAVLINK_MESSAGE_INFO_POSITION_TARGET_GLOBAL_INT, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET, MAVLINK_MESSAGE_INFO_HIL_STATE, MAVLINK_MESSAGE_INFO_HIL_CONTROLS, MAVLINK_MESSAGE_INFO_HIL_RC_INPUTS_RAW, MAVLINK_MESSAGE_INFO_HIL_ACTUATOR_CONTROLS, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_GLOBAL_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_SPEED_ESTIMATE, MAVLINK_MESSAGE_INFO_VICON_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_HIGHRES_IMU, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW_RAD, MAVLINK_MESSAGE_INFO_HIL_SENSOR, MAVLINK_MESSAGE_INFO_SIM_STATE, MAVLINK_MESSAGE_INFO_RADIO_STATUS, MAVLINK_MESSAGE_INFO_FILE_TRANSFER_PROTOCOL, MAVLINK_MESSAGE_INFO_TIMESYNC, MAVLINK_MESSAGE_INFO_CAMERA_TRIGGER, MAVLINK_MESSAGE_INFO_HIL_GPS, MAVLINK_MESSAGE_INFO_HIL_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_HIL_STATE_QUATERNION, MAVLINK_MESSAGE_INFO_SCALED_IMU2, MAVLINK_MESSAGE_INFO_LOG_REQUEST_LIST, MAVLINK_MESSAGE_INFO_LOG_ENTRY, MAVLINK_MESSAGE_INFO_LOG_REQUEST_DATA, MAVLINK_MESSAGE_INFO_LOG_DATA, MAVLINK_MESSAGE_INFO_LOG_ERASE, MAVLINK_MESSAGE_INFO_LOG_REQUEST_END, MAVLINK_MESSAGE_INFO_GPS_INJECT_DATA, MAVLINK_MESSAGE_INFO_GPS2_RAW, MAVLINK_MESSAGE_INFO_POWER_STATUS, MAVLINK_MESSAGE_INFO_SERIAL_CONTROL, MAVLINK_MESSAGE_INFO_GPS_RTK, MAVLINK_MESSAGE_INFO_GPS2_RTK, MAVLINK_MESSAGE_INFO_SCALED_IMU3, MAVLINK_MESSAGE_INFO_DATA_TRANSMISSION_HANDSHAKE, MAVLINK_MESSAGE_INFO_ENCAPSULATED_DATA, MAVLINK_MESSAGE_INFO_DISTANCE_SENSOR, MAVLINK_MESSAGE_INFO_TERRAIN_REQUEST, MAVLINK_MESSAGE_INFO_TERRAIN_DATA, MAVLINK_MESSAGE_INFO_TERRAIN_CHECK, MAVLINK_MESSAGE_INFO_TERRAIN_REPORT, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE2, MAVLINK_MESSAGE_INFO_ATT_POS_MOCAP, MAVLINK_MESSAGE_INFO_SET_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ALTITUDE, MAVLINK_MESSAGE_INFO_RESOURCE_REQUEST, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE3, MAVLINK_MESSAGE_INFO_FOLLOW_TARGET, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_CONTROL_SYSTEM_STATE, MAVLINK_MESSAGE_INFO_BATTERY_STATUS, MAVLINK_MESSAGE_INFO_AUTOPILOT_VERSION, MAVLINK_MESSAGE_INFO_LANDING_TARGET, MAVLINK_MESSAGE_INFO_SENSOR_OFFSETS, MAVLINK_MESSAGE_INFO_SET_MAG_OFFSETS, MAVLINK_MESSAGE_INFO_MEMINFO, MAVLINK_MESSAGE_INFO_AP_ADC, MAVLINK_MESSAGE_INFO_DIGICAM_CONFIGURE, MAVLINK_MESSAGE_INFO_DIGICAM_CONTROL, MAVLINK_MESSAGE_INFO_MOUNT_CONFIGURE, MAVLINK_MESSAGE_INFO_MOUNT_CONTROL, MAVLINK_MESSAGE_INFO_MOUNT_STATUS, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_FENCE_POINT, MAVLINK_MESSAGE_INFO_FENCE_FETCH_POINT, MAVLINK_MESSAGE_INFO_FENCE_STATUS, MAVLINK_MESSAGE_INFO_AHRS, MAVLINK_MESSAGE_INFO_SIMSTATE, MAVLINK_MESSAGE_INFO_HWSTATUS, MAVLINK_MESSAGE_INFO_RADIO, MAVLINK_MESSAGE_INFO_LIMITS_STATUS, MAVLINK_MESSAGE_INFO_WIND, MAVLINK_MESSAGE_INFO_DATA16, MAVLINK_MESSAGE_INFO_DATA32, MAVLINK_MESSAGE_INFO_DATA64, MAVLINK_MESSAGE_INFO_DATA96, MAVLINK_MESSAGE_INFO_RANGEFINDER, MAVLINK_MESSAGE_INFO_AIRSPEED_AUTOCAL, MAVLINK_MESSAGE_INFO_RALLY_POINT, MAVLINK_MESSAGE_INFO_RALLY_FETCH_POINT, MAVLINK_MESSAGE_INFO_COMPASSMOT_STATUS, MAVLINK_MESSAGE_INFO_AHRS2, MAVLINK_MESSAGE_INFO_CAMERA_STATUS, MAVLINK_MESSAGE_INFO_CAMERA_FEEDBACK, MAVLINK_MESSAGE_INFO_BATTERY2, MAVLINK_MESSAGE_INFO_AHRS3, MAVLINK_MESSAGE_INFO_AUTOPILOT_VERSION_REQUEST, MAVLINK_MESSAGE_INFO_REMOTE_LOG_DATA_BLOCK, MAVLINK_MESSAGE_INFO_REMOTE_LOG_BLOCK_STATUS, MAVLINK_MESSAGE_INFO_LED_CONTROL, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MAG_CAL_PROGRESS, MAVLINK_MESSAGE_INFO_MAG_CAL_REPORT, MAVLINK_MESSAGE_INFO_EKF_STATUS_REPORT, MAVLINK_MESSAGE_INFO_PID_TUNING, MAVLINK_MESSAGE_INFO_DEEPSTALL, MAVLINK_MESSAGE_INFO_PIKSI_MSG_BASE_POS, MAVLINK_MESSAGE_INFO_PIKSI_MSG_EPHEMERIS, MAVLINK_MESSAGE_INFO_PIKSI_RESTART, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_GIMBAL_REPORT, MAVLINK_MESSAGE_INFO_GIMBAL_CONTROL, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_GIMBAL_TORQUE_CMD_REPORT, MAVLINK_MESSAGE_INFO_GOPRO_HEARTBEAT, MAVLINK_MESSAGE_INFO_GOPRO_GET_REQUEST, MAVLINK_MESSAGE_INFO_GOPRO_GET_RESPONSE, MAVLINK_MESSAGE_INFO_GOPRO_SET_REQUEST, MAVLINK_MESSAGE_INFO_GOPRO_SET_RESPONSE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_COMMAND_INT_STAMPED, MAVLINK_MESSAGE_INFO_COMMAND_LONG_STAMPED, MAVLINK_MESSAGE_INFO_EFI_STATUS, MAVLINK_MESSAGE_INFO_RPM, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_ESTIMATOR_STATUS, MAVLINK_MESSAGE_INFO_WIND_COV, MAVLINK_MESSAGE_INFO_GPS_INPUT, MAVLINK_MESSAGE_INFO_GPS_RTCM_DATA, MAVLINK_MESSAGE_INFO_HIGH_LATENCY, MAVLINK_MESSAGE_INFO_HIGH_LATENCY2, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_VIBRATION, MAVLINK_MESSAGE_INFO_HOME_POSITION, MAVLINK_MESSAGE_INFO_SET_HOME_POSITION, MAVLINK_MESSAGE_INFO_MESSAGE_INTERVAL, MAVLINK_MESSAGE_INFO_EXTENDED_SYS_STATE, MAVLINK_MESSAGE_INFO_ADSB_VEHICLE, MAVLINK_MESSAGE_INFO_COLLISION, MAVLINK_MESSAGE_INFO_V2_EXTENSION, MAVLINK_MESSAGE_INFO_MEMORY_VECT, MAVLINK_MESSAGE_INFO_DEBUG_VECT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_FLOAT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_INT, MAVLINK_MESSAGE_INFO_STATUSTEXT, MAVLINK_MESSAGE_INFO_DEBUG, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}}
# define MAVLINK_MESSAGE_NAMES {{ "ACTUATOR_CONTROL_TARGET", 140 }, { "ADSB_VEHICLE", 246 }, { "AHRS", 163 }, { "AHRS2", 178 }, { "AHRS3", 182 }, { "AIRSPEED_AUTOCAL", 174 }, { "ALTITUDE", 141 }, { "AP_ADC", 153 }, { "ATTITUDE", 30 }, { "ATTITUDE_QUATERNION", 31 }, { "ATTITUDE_QUATERNION_COV", 61 }, { "ATTITUDE_TARGET", 83 }, { "ATT_POS_MOCAP", 138 }, { "AUTH_KEY", 7 }, { "AUTOPILOT_VERSION", 148 }, { "AUTOPILOT_VERSION_REQUEST", 183 }, { "BATTERY2", 181 }, { "BATTERY_STATUS", 147 }, { "CAMERA_FEEDBACK", 180 }, { "CAMERA_STATUS", 179 }, { "CAMERA_TRIGGER", 112 }, { "CHANGE_OPERATOR_CONTROL", 5 }, { "CHANGE_OPERATOR_CONTROL_ACK", 6 }, { "COLLISION", 247 }, { "COMMAND_ACK", 77 }, { "COMMAND_INT", 75 }, { "COMMAND_INT_STAMPED", 223 }, { "COMMAND_LONG", 76 }, { "COMMAND_LONG_STAMPED", 224 }, { "COMPASSMOT_STATUS", 177 }, { "CONTROL_SYSTEM_STATE", 146 }, { "DATA16", 169 }, { "DATA32", 170 }, { "DATA64", 171 }, { "DATA96", 172 }, { "DATA_STREAM", 67 }, { "DATA_TRANSMISSION_HANDSHAKE", 130 }, { "DEBUG", 254 }, { "DEBUG_VECT", 250 }, { "DEEPSTALL", 195 }, { "DIGICAM_CONFIGURE", 154 }, { "DIGICAM_CONTROL", 155 }, { "DISTANCE_SENSOR", 132 }, { "EFI_STATUS", 225 }, { "EKF_STATUS_REPORT", 193 }, { "ENCAPSULATED_DATA", 131 }, { "ESTIMATOR_STATUS", 230 }, { "EXTENDED_SYS_STATE", 245 }, { "FENCE_FETCH_POINT", 161 }, { "FENCE_POINT", 160 }, { "FENCE_STATUS", 162 }, { "FILE_TRANSFER_PROTOCOL", 110 }, { "FOLLOW_TARGET", 144 }, { "GIMBAL_CONTROL", 201 }, { "GIMBAL_REPORT", 200 }, { "GIMBAL_TORQUE_CMD_REPORT", 214 }, { "GLOBAL_POSITION_INT", 33 }, { "GLOBAL_POSITION_INT_COV", 63 }, { "GLOBAL_VISION_POSITION_ESTIMATE", 101 }, { "GOPRO_GET_REQUEST", 216 }, { "GOPRO_GET_RESPONSE", 217 }, { "GOPRO_HEARTBEAT", 215 }, { "GOPRO_SET_REQUEST", 218 }, { "GOPRO_SET_RESPONSE", 219 }, { "GPS2_RAW", 124 }, { "GPS2_RTK", 128 }, { "GPS_GLOBAL_ORIGIN", 49 }, { "GPS_INJECT_DATA", 123 }, { "GPS_INPUT", 232 }, { "GPS_RAW_INT", 24 }, { "GPS_RTCM_DATA", 233 }, { "GPS_RTK", 127 }, { "GPS_STATUS", 25 }, { "HEARTBEAT", 0 }, { "HIGHRES_IMU", 105 }, { "HIGH_LATENCY", 234 }, { "HIGH_LATENCY2", 235 }, { "HIL_ACTUATOR_CONTROLS", 93 }, { "HIL_CONTROLS", 91 }, { "HIL_GPS", 113 }, { "HIL_OPTICAL_FLOW", 114 }, { "HIL_RC_INPUTS_RAW", 92 }, { "HIL_SENSOR", 107 }, { "HIL_STATE", 90 }, { "HIL_STATE_QUATERNION", 115 }, { "HOME_POSITION", 242 }, { "HWSTATUS", 165 }, { "LANDING_TARGET", 149 }, { "LED_CONTROL", 186 }, { "LIMITS_STATUS", 167 }, { "LOCAL_POSITION_NED", 32 }, { "LOCAL_POSITION_NED_COV", 64 }, { "LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET", 89 }, { "LOG_DATA", 120 }, { "LOG_ENTRY", 118 }, { "LOG_ERASE", 121 }, { "LOG_REQUEST_DATA", 119 }, { "LOG_REQUEST_END", 122 }, { "LOG_REQUEST_LIST", 117 }, { "MAG_CAL_PROGRESS", 191 }, { "MAG_CAL_REPORT", 192 }, { "MANUAL_CONTROL", 69 }, { "MANUAL_SETPOINT", 81 }, { "MEMINFO", 152 }, { "MEMORY_VECT", 249 }, { "MESSAGE_INTERVAL", 244 }, { "MISSION_ACK", 47 }, { "MISSION_CLEAR_ALL", 45 }, { "MISSION_COUNT", 44 }, { "MISSION_CURRENT", 42 }, { "MISSION_ITEM", 39 }, { "MISSION_ITEM_INT", 73 }, { "MISSION_ITEM_REACHED", 46 }, { "MISSION_REQUEST", 40 }, { "MISSION_REQUEST_INT", 51 }, { "MISSION_REQUEST_LIST", 43 }, { "MISSION_REQUEST_PARTIAL_LIST", 37 }, { "MISSION_SET_CURRENT", 41 }, { "MISSION_WRITE_PARTIAL_LIST", 38 }, { "MOUNT_CONFIGURE", 156 }, { "MOUNT_CONTROL", 157 }, { "MOUNT_STATUS", 158 }, { "NAMED_VALUE_FLOAT", 251 }, { "NAMED_VALUE_INT", 252 }, { "NAV_CONTROLLER_OUTPUT", 62 }, { "OPTICAL_FLOW", 100 }, { "OPTICAL_FLOW_RAD", 106 }, { "PARAM_MAP_RC", 50 }, { "PARAM_REQUEST_LIST", 21 }, { "PARAM_REQUEST_READ", 20 }, { "PARAM_SET", 23 }, { "PARAM_VALUE", 22 }, { "PID_TUNING", 194 }, { "PIKSI_MSG_BASE_POS", 196 }, { "PIKSI_MSG_EPHEMERIS", 197 }, { "PIKSI_RESTART", 198 }, { "PING", 4 }, { "POSITION_TARGET_GLOBAL_INT", 87 }, { "POSITION_TARGET_LOCAL_NED", 85 }, { "POWER_STATUS", 125 }, { "RADIO", 166 }, { "RADIO_STATUS", 109 }, { "RALLY_FETCH_POINT", 176 }, { "RALLY_POINT", 175 }, { "RANGEFINDER", 173 }, { "RAW_IMU", 27 }, { "RAW_PRESSURE", 28 }, { "RC_CHANNELS", 65 }, { "RC_CHANNELS_OVERRIDE", 70 }, { "RC_CHANNELS_RAW", 35 }, { "RC_CHANNELS_SCALED", 34 }, { "REMOTE_LOG_BLOCK_STATUS", 185 }, { "REMOTE_LOG_DATA_BLOCK", 184 }, { "REQUEST_DATA_STREAM", 66 }, { "RESOURCE_REQUEST", 142 }, { "RPM", 226 }, { "SAFETY_ALLOWED_AREA", 55 }, { "SAFETY_SET_ALLOWED_AREA", 54 }, { "SCALED_IMU", 26 }, { "SCALED_IMU2", 116 }, { "SCALED_IMU3", 129 }, { "SCALED_PRESSURE", 29 }, { "SCALED_PRESSURE2", 137 }, { "SCALED_PRESSURE3", 143 }, { "SENSOR_OFFSETS", 150 }, { "SERIAL_CONTROL", 126 }, { "SERVO_OUTPUT_RAW", 36 }, { "SET_ACTUATOR_CONTROL_TARGET", 139 }, { "SET_ATTITUDE_TARGET", 82 }, { "SET_GPS_GLOBAL_ORIGIN", 48 }, { "SET_HOME_POSITION", 243 }, { "SET_MAG_OFFSETS", 151 }, { "SET_MODE", 11 }, { "SET_POSITION_TARGET_GLOBAL_INT", 86 }, { "SET_POSITION_TARGET_LOCAL_NED", 84 }, { "SIMSTATE", 164 }, { "SIM_STATE", 108 }, { "STATUSTEXT", 253 }, { "SYSTEM_TIME", 2 }, { "SYS_STATUS", 1 }, { "TERRAIN_CHECK", 135 }, { "TERRAIN_DATA", 134 }, { "TERRAIN_REPORT", 136 }, { "TERRAIN_REQUEST", 133 }, { "TIMESYNC", 111 }, { "V2_EXTENSION", 248 }, { "VFR_HUD", 74 }, { "VIBRATION", 241 }, { "VICON_POSITION_ESTIMATE", 104 }, { "VISION_POSITION_ESTIMATE", 102 }, { "VISION_SPEED_ESTIMATE", 103 }, { "WIND", 168 }, { "WIND_COV", 231 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_AERONAVICS_H
