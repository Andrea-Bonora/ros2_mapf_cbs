// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cbs_interfaces:srv/StartGoalPoseStamped.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__SRV__DETAIL__START_GOAL_POSE_STAMPED__STRUCT_H_
#define CBS_INTERFACES__SRV__DETAIL__START_GOAL_POSE_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'requests'
#include "cbs_interfaces/msg/detail/agent_path_request__struct.h"

/// Struct defined in srv/StartGoalPoseStamped in the package cbs_interfaces.
typedef struct cbs_interfaces__srv__StartGoalPoseStamped_Request
{
  cbs_interfaces__msg__AgentPathRequest__Sequence requests;
} cbs_interfaces__srv__StartGoalPoseStamped_Request;

// Struct for a sequence of cbs_interfaces__srv__StartGoalPoseStamped_Request.
typedef struct cbs_interfaces__srv__StartGoalPoseStamped_Request__Sequence
{
  cbs_interfaces__srv__StartGoalPoseStamped_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cbs_interfaces__srv__StartGoalPoseStamped_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'plans'
#include "cbs_interfaces/msg/detail/agent_path__struct.h"

/// Struct defined in srv/StartGoalPoseStamped in the package cbs_interfaces.
typedef struct cbs_interfaces__srv__StartGoalPoseStamped_Response
{
  cbs_interfaces__msg__AgentPath__Sequence plans;
} cbs_interfaces__srv__StartGoalPoseStamped_Response;

// Struct for a sequence of cbs_interfaces__srv__StartGoalPoseStamped_Response.
typedef struct cbs_interfaces__srv__StartGoalPoseStamped_Response__Sequence
{
  cbs_interfaces__srv__StartGoalPoseStamped_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cbs_interfaces__srv__StartGoalPoseStamped_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CBS_INTERFACES__SRV__DETAIL__START_GOAL_POSE_STAMPED__STRUCT_H_
