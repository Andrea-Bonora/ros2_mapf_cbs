// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_intermediate_interfaces:srv/StartGoalPositions.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__STRUCT_H_
#define MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_x'
// Member 'start_y'
// Member 'start_z'
// Member 'end_x'
// Member 'end_y'
// Member 'end_z'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/StartGoalPositions in the package my_intermediate_interfaces.
typedef struct my_intermediate_interfaces__srv__StartGoalPositions_Request
{
  rosidl_runtime_c__double__Sequence start_x;
  rosidl_runtime_c__double__Sequence start_y;
  rosidl_runtime_c__double__Sequence start_z;
  rosidl_runtime_c__double__Sequence end_x;
  rosidl_runtime_c__double__Sequence end_y;
  rosidl_runtime_c__double__Sequence end_z;
} my_intermediate_interfaces__srv__StartGoalPositions_Request;

// Struct for a sequence of my_intermediate_interfaces__srv__StartGoalPositions_Request.
typedef struct my_intermediate_interfaces__srv__StartGoalPositions_Request__Sequence
{
  my_intermediate_interfaces__srv__StartGoalPositions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_intermediate_interfaces__srv__StartGoalPositions_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'plans'
#include "my_intermediate_interfaces/msg/detail/agent_path__struct.h"

/// Struct defined in srv/StartGoalPositions in the package my_intermediate_interfaces.
typedef struct my_intermediate_interfaces__srv__StartGoalPositions_Response
{
  my_intermediate_interfaces__msg__AgentPath__Sequence plans;
} my_intermediate_interfaces__srv__StartGoalPositions_Response;

// Struct for a sequence of my_intermediate_interfaces__srv__StartGoalPositions_Response.
typedef struct my_intermediate_interfaces__srv__StartGoalPositions_Response__Sequence
{
  my_intermediate_interfaces__srv__StartGoalPositions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_intermediate_interfaces__srv__StartGoalPositions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__STRUCT_H_
