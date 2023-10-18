// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_intermediate_interfaces:srv/StartGoalPoseStamped.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSE_STAMPED__STRUCT_H_
#define MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSE_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'starts'
// Member 'goals'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/StartGoalPoseStamped in the package my_intermediate_interfaces.
typedef struct my_intermediate_interfaces__srv__StartGoalPoseStamped_Request
{
  geometry_msgs__msg__PoseStamped__Sequence starts;
  geometry_msgs__msg__PoseStamped__Sequence goals;
} my_intermediate_interfaces__srv__StartGoalPoseStamped_Request;

// Struct for a sequence of my_intermediate_interfaces__srv__StartGoalPoseStamped_Request.
typedef struct my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__Sequence
{
  my_intermediate_interfaces__srv__StartGoalPoseStamped_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_intermediate_interfaces__srv__StartGoalPoseStamped_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'plans'
#include "nav_msgs/msg/detail/path__struct.h"

/// Struct defined in srv/StartGoalPoseStamped in the package my_intermediate_interfaces.
typedef struct my_intermediate_interfaces__srv__StartGoalPoseStamped_Response
{
  nav_msgs__msg__Path__Sequence plans;
} my_intermediate_interfaces__srv__StartGoalPoseStamped_Response;

// Struct for a sequence of my_intermediate_interfaces__srv__StartGoalPoseStamped_Response.
typedef struct my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__Sequence
{
  my_intermediate_interfaces__srv__StartGoalPoseStamped_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_intermediate_interfaces__srv__StartGoalPoseStamped_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSE_STAMPED__STRUCT_H_
