// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_intermediate_interfaces:action/MyComputePathToPose.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__ACTION__DETAIL__MY_COMPUTE_PATH_TO_POSE__STRUCT_H_
#define MY_INTERMEDIATE_INTERFACES__ACTION__DETAIL__MY_COMPUTE_PATH_TO_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal'
// Member 'start'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'vertex_constraints'
#include "my_intermediate_interfaces/msg/detail/vertex_constraint__struct.h"
// Member 'edge_constraints'
#include "my_intermediate_interfaces/msg/detail/edge_constraint__struct.h"
// Member 'planner_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MyComputePathToPose in the package my_intermediate_interfaces.
typedef struct my_intermediate_interfaces__action__MyComputePathToPose_Goal
{
  geometry_msgs__msg__PoseStamped goal;
  geometry_msgs__msg__PoseStamped start;
  my_intermediate_interfaces__msg__VertexConstraint__Sequence vertex_constraints;
  my_intermediate_interfaces__msg__EdgeConstraint__Sequence edge_constraints;
  rosidl_runtime_c__String planner_id;
  /// If false, use current robot pose as path start, if true, use start above instead
  bool use_start;
} my_intermediate_interfaces__action__MyComputePathToPose_Goal;

// Struct for a sequence of my_intermediate_interfaces__action__MyComputePathToPose_Goal.
typedef struct my_intermediate_interfaces__action__MyComputePathToPose_Goal__Sequence
{
  my_intermediate_interfaces__action__MyComputePathToPose_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_intermediate_interfaces__action__MyComputePathToPose_Goal__Sequence;


// Constants defined in the message

/// Constant 'NONE'.
/**
  * Error codes
  * Note: The expected priority order of the errors should match the message order
 */
enum
{
  my_intermediate_interfaces__action__MyComputePathToPose_Result__NONE = 0
};

/// Constant 'UNKNOWN'.
enum
{
  my_intermediate_interfaces__action__MyComputePathToPose_Result__UNKNOWN = 200
};

/// Constant 'INVALID_PLANNER'.
enum
{
  my_intermediate_interfaces__action__MyComputePathToPose_Result__INVALID_PLANNER = 201
};

/// Constant 'TF_ERROR'.
enum
{
  my_intermediate_interfaces__action__MyComputePathToPose_Result__TF_ERROR = 202
};

/// Constant 'START_OUTSIDE_MAP'.
enum
{
  my_intermediate_interfaces__action__MyComputePathToPose_Result__START_OUTSIDE_MAP = 203
};

/// Constant 'GOAL_OUTSIDE_MAP'.
enum
{
  my_intermediate_interfaces__action__MyComputePathToPose_Result__GOAL_OUTSIDE_MAP = 204
};

/// Constant 'START_OCCUPIED'.
enum
{
  my_intermediate_interfaces__action__MyComputePathToPose_Result__START_OCCUPIED = 205
};

/// Constant 'GOAL_OCCUPIED'.
enum
{
  my_intermediate_interfaces__action__MyComputePathToPose_Result__GOAL_OCCUPIED = 206
};

/// Constant 'TIMEOUT'.
enum
{
  my_intermediate_interfaces__action__MyComputePathToPose_Result__TIMEOUT = 207
};

/// Constant 'NO_VALID_PATH'.
enum
{
  my_intermediate_interfaces__action__MyComputePathToPose_Result__NO_VALID_PATH = 208
};

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.h"
// Member 'planning_time'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/MyComputePathToPose in the package my_intermediate_interfaces.
typedef struct my_intermediate_interfaces__action__MyComputePathToPose_Result
{
  nav_msgs__msg__Path path;
  builtin_interfaces__msg__Duration planning_time;
  uint16_t error_code;
} my_intermediate_interfaces__action__MyComputePathToPose_Result;

// Struct for a sequence of my_intermediate_interfaces__action__MyComputePathToPose_Result.
typedef struct my_intermediate_interfaces__action__MyComputePathToPose_Result__Sequence
{
  my_intermediate_interfaces__action__MyComputePathToPose_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_intermediate_interfaces__action__MyComputePathToPose_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MyComputePathToPose in the package my_intermediate_interfaces.
typedef struct my_intermediate_interfaces__action__MyComputePathToPose_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} my_intermediate_interfaces__action__MyComputePathToPose_Feedback;

// Struct for a sequence of my_intermediate_interfaces__action__MyComputePathToPose_Feedback.
typedef struct my_intermediate_interfaces__action__MyComputePathToPose_Feedback__Sequence
{
  my_intermediate_interfaces__action__MyComputePathToPose_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_intermediate_interfaces__action__MyComputePathToPose_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__struct.h"

/// Struct defined in action/MyComputePathToPose in the package my_intermediate_interfaces.
typedef struct my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_intermediate_interfaces__action__MyComputePathToPose_Goal goal;
} my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request;

// Struct for a sequence of my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request.
typedef struct my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__Sequence
{
  my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MyComputePathToPose in the package my_intermediate_interfaces.
typedef struct my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response;

// Struct for a sequence of my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response.
typedef struct my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response__Sequence
{
  my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MyComputePathToPose in the package my_intermediate_interfaces.
typedef struct my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request;

// Struct for a sequence of my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request.
typedef struct my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request__Sequence
{
  my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__struct.h"

/// Struct defined in action/MyComputePathToPose in the package my_intermediate_interfaces.
typedef struct my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response
{
  int8_t status;
  my_intermediate_interfaces__action__MyComputePathToPose_Result result;
} my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response;

// Struct for a sequence of my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response.
typedef struct my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response__Sequence
{
  my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__struct.h"

/// Struct defined in action/MyComputePathToPose in the package my_intermediate_interfaces.
typedef struct my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_intermediate_interfaces__action__MyComputePathToPose_Feedback feedback;
} my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage;

// Struct for a sequence of my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage.
typedef struct my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__Sequence
{
  my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERMEDIATE_INTERFACES__ACTION__DETAIL__MY_COMPUTE_PATH_TO_POSE__STRUCT_H_
