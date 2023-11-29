// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cbs_interfaces:msg/AgentPathRequest.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__MSG__DETAIL__AGENT_PATH_REQUEST__STRUCT_H_
#define CBS_INTERFACES__MSG__DETAIL__AGENT_PATH_REQUEST__STRUCT_H_

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
// Member 'vertex_constraints'
#include "cbs_interfaces/msg/detail/vertex_constraint__struct.h"
// Member 'edge_constraints'
#include "cbs_interfaces/msg/detail/edge_constraint__struct.h"

/// Struct defined in msg/AgentPathRequest in the package cbs_interfaces.
typedef struct cbs_interfaces__msg__AgentPathRequest
{
  rosidl_runtime_c__String name;
  geometry_msgs__msg__PoseStamped start;
  geometry_msgs__msg__PoseStamped goal;
  cbs_interfaces__msg__VertexConstraint__Sequence vertex_constraints;
  cbs_interfaces__msg__EdgeConstraint__Sequence edge_constraints;
} cbs_interfaces__msg__AgentPathRequest;

// Struct for a sequence of cbs_interfaces__msg__AgentPathRequest.
typedef struct cbs_interfaces__msg__AgentPathRequest__Sequence
{
  cbs_interfaces__msg__AgentPathRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cbs_interfaces__msg__AgentPathRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CBS_INTERFACES__MSG__DETAIL__AGENT_PATH_REQUEST__STRUCT_H_
