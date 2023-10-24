// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_intermediate_interfaces:msg/VertexConstraint.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__VERTEX_CONSTRAINT__STRUCT_H_
#define MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__VERTEX_CONSTRAINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'agent_name'
#include "rosidl_runtime_c/string.h"
// Member 'cell'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/VertexConstraint in the package my_intermediate_interfaces.
typedef struct my_intermediate_interfaces__msg__VertexConstraint
{
  rosidl_runtime_c__String agent_name;
  geometry_msgs__msg__PoseStamped cell;
  int64_t time_step;
} my_intermediate_interfaces__msg__VertexConstraint;

// Struct for a sequence of my_intermediate_interfaces__msg__VertexConstraint.
typedef struct my_intermediate_interfaces__msg__VertexConstraint__Sequence
{
  my_intermediate_interfaces__msg__VertexConstraint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_intermediate_interfaces__msg__VertexConstraint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__VERTEX_CONSTRAINT__STRUCT_H_
