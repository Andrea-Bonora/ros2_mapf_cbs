// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_intermediate_interfaces:msg/AgentPathRequest.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__AGENT_PATH_REQUEST__STRUCT_H_
#define MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__AGENT_PATH_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'start'
// Member 'goal'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/AgentPathRequest in the package my_intermediate_interfaces.
typedef struct my_intermediate_interfaces__msg__AgentPathRequest
{
  rosidl_runtime_c__String name;
  geometry_msgs__msg__PoseStamped start;
  geometry_msgs__msg__PoseStamped goal;
} my_intermediate_interfaces__msg__AgentPathRequest;

// Struct for a sequence of my_intermediate_interfaces__msg__AgentPathRequest.
typedef struct my_intermediate_interfaces__msg__AgentPathRequest__Sequence
{
  my_intermediate_interfaces__msg__AgentPathRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_intermediate_interfaces__msg__AgentPathRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__AGENT_PATH_REQUEST__STRUCT_H_
