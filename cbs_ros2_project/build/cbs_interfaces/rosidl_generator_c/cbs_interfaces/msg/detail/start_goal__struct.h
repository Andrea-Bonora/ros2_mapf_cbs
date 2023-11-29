// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cbs_interfaces:msg/StartGoal.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__MSG__DETAIL__START_GOAL__STRUCT_H_
#define CBS_INTERFACES__MSG__DETAIL__START_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start'
// Member 'goal'
#include "cbs_interfaces/msg/detail/coordinates3_d__struct.h"

/// Struct defined in msg/StartGoal in the package cbs_interfaces.
typedef struct cbs_interfaces__msg__StartGoal
{
  cbs_interfaces__msg__Coordinates3D start;
  cbs_interfaces__msg__Coordinates3D goal;
} cbs_interfaces__msg__StartGoal;

// Struct for a sequence of cbs_interfaces__msg__StartGoal.
typedef struct cbs_interfaces__msg__StartGoal__Sequence
{
  cbs_interfaces__msg__StartGoal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cbs_interfaces__msg__StartGoal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CBS_INTERFACES__MSG__DETAIL__START_GOAL__STRUCT_H_
