// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:srv/LogRequestData.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_DATA__STRUCT_H_
#define MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/LogRequestData in the package mavros_msgs.
typedef struct mavros_msgs__srv__LogRequestData_Request
{
  uint16_t id;
  uint32_t offset;
  uint32_t count;
} mavros_msgs__srv__LogRequestData_Request;

// Struct for a sequence of mavros_msgs__srv__LogRequestData_Request.
typedef struct mavros_msgs__srv__LogRequestData_Request__Sequence
{
  mavros_msgs__srv__LogRequestData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__srv__LogRequestData_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/LogRequestData in the package mavros_msgs.
typedef struct mavros_msgs__srv__LogRequestData_Response
{
  bool success;
} mavros_msgs__srv__LogRequestData_Response;

// Struct for a sequence of mavros_msgs__srv__LogRequestData_Response.
typedef struct mavros_msgs__srv__LogRequestData_Response__Sequence
{
  mavros_msgs__srv__LogRequestData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__srv__LogRequestData_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_DATA__STRUCT_H_
