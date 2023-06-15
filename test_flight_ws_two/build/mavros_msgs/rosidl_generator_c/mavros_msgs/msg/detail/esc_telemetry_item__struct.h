// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:msg/ESCTelemetryItem.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__ESC_TELEMETRY_ITEM__STRUCT_H_
#define MAVROS_MSGS__MSG__DETAIL__ESC_TELEMETRY_ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/ESCTelemetryItem in the package mavros_msgs.
typedef struct mavros_msgs__msg__ESCTelemetryItem
{
  std_msgs__msg__Header header;
  float temperature;
  float voltage;
  float current;
  float totalcurrent;
  int32_t rpm;
  uint16_t count;
} mavros_msgs__msg__ESCTelemetryItem;

// Struct for a sequence of mavros_msgs__msg__ESCTelemetryItem.
typedef struct mavros_msgs__msg__ESCTelemetryItem__Sequence
{
  mavros_msgs__msg__ESCTelemetryItem * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__msg__ESCTelemetryItem__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__ESC_TELEMETRY_ITEM__STRUCT_H_
