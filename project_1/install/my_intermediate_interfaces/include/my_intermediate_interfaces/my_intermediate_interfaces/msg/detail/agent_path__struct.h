// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_intermediate_interfaces:msg/AgentPath.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__AGENT_PATH__STRUCT_H_
#define MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__AGENT_PATH__STRUCT_H_

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
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.h"

/// Struct defined in msg/AgentPath in the package my_intermediate_interfaces.
typedef struct my_intermediate_interfaces__msg__AgentPath
{
  rosidl_runtime_c__String name;
  nav_msgs__msg__Path path;
} my_intermediate_interfaces__msg__AgentPath;

// Struct for a sequence of my_intermediate_interfaces__msg__AgentPath.
typedef struct my_intermediate_interfaces__msg__AgentPath__Sequence
{
  my_intermediate_interfaces__msg__AgentPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_intermediate_interfaces__msg__AgentPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__AGENT_PATH__STRUCT_H_
