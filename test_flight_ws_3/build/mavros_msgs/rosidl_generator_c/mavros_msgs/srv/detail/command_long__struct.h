// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:srv/CommandLong.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__SRV__DETAIL__COMMAND_LONG__STRUCT_H_
#define MAVROS_MSGS__SRV__DETAIL__COMMAND_LONG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/CommandLong in the package mavros_msgs.
typedef struct mavros_msgs__srv__CommandLong_Request
{
  bool broadcast;
  uint16_t command;
  uint8_t confirmation;
  float param1;
  float param2;
  float param3;
  float param4;
  float param5;
  float param6;
  float param7;
} mavros_msgs__srv__CommandLong_Request;

// Struct for a sequence of mavros_msgs__srv__CommandLong_Request.
typedef struct mavros_msgs__srv__CommandLong_Request__Sequence
{
  mavros_msgs__srv__CommandLong_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__srv__CommandLong_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/CommandLong in the package mavros_msgs.
typedef struct mavros_msgs__srv__CommandLong_Response
{
  bool success;
  uint8_t result;
} mavros_msgs__srv__CommandLong_Response;

// Struct for a sequence of mavros_msgs__srv__CommandLong_Response.
typedef struct mavros_msgs__srv__CommandLong_Response__Sequence
{
  mavros_msgs__srv__CommandLong_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__srv__CommandLong_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__SRV__DETAIL__COMMAND_LONG__STRUCT_H_
