// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cbs_interfaces:action/ComputePathToPoseCBS.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_TO_POSE_CBS__STRUCT_H_
#define CBS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_TO_POSE_CBS__STRUCT_H_

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
#include "cbs_interfaces/msg/detail/vertex_constraint__struct.h"
// Member 'edge_constraints'
#include "cbs_interfaces/msg/detail/edge_constraint__struct.h"
// Member 'planner_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ComputePathToPoseCBS in the package cbs_interfaces.
typedef struct cbs_interfaces__action__ComputePathToPoseCBS_Goal
{
  geometry_msgs__msg__PoseStamped goal;
  geometry_msgs__msg__PoseStamped start;
  cbs_interfaces__msg__VertexConstraint__Sequence vertex_constraints;
  cbs_interfaces__msg__EdgeConstraint__Sequence edge_constraints;
  rosidl_runtime_c__String planner_id;
  /// If false, use current robot pose as path start, if true, use start above instead
  bool use_start;
} cbs_interfaces__action__ComputePathToPoseCBS_Goal;

// Struct for a sequence of cbs_interfaces__action__ComputePathToPoseCBS_Goal.
typedef struct cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence
{
  cbs_interfaces__action__ComputePathToPoseCBS_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cbs_interfaces__action__ComputePathToPoseCBS_Goal__Sequence;


// Constants defined in the message

/// Constant 'NONE'.
/**
  * Error codes
  * Note: The expected priority order of the errors should match the message order
 */
enum
{
  cbs_interfaces__action__ComputePathToPoseCBS_Result__NONE = 0
};

/// Constant 'UNKNOWN'.
enum
{
  cbs_interfaces__action__ComputePathToPoseCBS_Result__UNKNOWN = 200
};

/// Constant 'INVALID_PLANNER'.
enum
{
  cbs_interfaces__action__ComputePathToPoseCBS_Result__INVALID_PLANNER = 201
};

/// Constant 'TF_ERROR'.
enum
{
  cbs_interfaces__action__ComputePathToPoseCBS_Result__TF_ERROR = 202
};

/// Constant 'START_OUTSIDE_MAP'.
enum
{
  cbs_interfaces__action__ComputePathToPoseCBS_Result__START_OUTSIDE_MAP = 203
};

/// Constant 'GOAL_OUTSIDE_MAP'.
enum
{
  cbs_interfaces__action__ComputePathToPoseCBS_Result__GOAL_OUTSIDE_MAP = 204
};

/// Constant 'START_OCCUPIED'.
enum
{
  cbs_interfaces__action__ComputePathToPoseCBS_Result__START_OCCUPIED = 205
};

/// Constant 'GOAL_OCCUPIED'.
enum
{
  cbs_interfaces__action__ComputePathToPoseCBS_Result__GOAL_OCCUPIED = 206
};

/// Constant 'TIMEOUT'.
enum
{
  cbs_interfaces__action__ComputePathToPoseCBS_Result__TIMEOUT = 207
};

/// Constant 'NO_VALID_PATH'.
enum
{
  cbs_interfaces__action__ComputePathToPoseCBS_Result__NO_VALID_PATH = 208
};

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.h"
// Member 'planning_time'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/ComputePathToPoseCBS in the package cbs_interfaces.
typedef struct cbs_interfaces__action__ComputePathToPoseCBS_Result
{
  nav_msgs__msg__Path path;
  builtin_interfaces__msg__Duration planning_time;
  uint16_t error_code;
} cbs_interfaces__action__ComputePathToPoseCBS_Result;

// Struct for a sequence of cbs_interfaces__action__ComputePathToPoseCBS_Result.
typedef struct cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence
{
  cbs_interfaces__action__ComputePathToPoseCBS_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cbs_interfaces__action__ComputePathToPoseCBS_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ComputePathToPoseCBS in the package cbs_interfaces.
typedef struct cbs_interfaces__action__ComputePathToPoseCBS_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} cbs_interfaces__action__ComputePathToPoseCBS_Feedback;

// Struct for a sequence of cbs_interfaces__action__ComputePathToPoseCBS_Feedback.
typedef struct cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence
{
  cbs_interfaces__action__ComputePathToPoseCBS_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cbs_interfaces__action__ComputePathToPoseCBS_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.h"

/// Struct defined in action/ComputePathToPoseCBS in the package cbs_interfaces.
typedef struct cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  cbs_interfaces__action__ComputePathToPoseCBS_Goal goal;
} cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request;

// Struct for a sequence of cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request.
typedef struct cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence
{
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ComputePathToPoseCBS in the package cbs_interfaces.
typedef struct cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response;

// Struct for a sequence of cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response.
typedef struct cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence
{
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ComputePathToPoseCBS in the package cbs_interfaces.
typedef struct cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request;

// Struct for a sequence of cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request.
typedef struct cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence
{
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.h"

/// Struct defined in action/ComputePathToPoseCBS in the package cbs_interfaces.
typedef struct cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response
{
  int8_t status;
  cbs_interfaces__action__ComputePathToPoseCBS_Result result;
} cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response;

// Struct for a sequence of cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response.
typedef struct cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence
{
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.h"

/// Struct defined in action/ComputePathToPoseCBS in the package cbs_interfaces.
typedef struct cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  cbs_interfaces__action__ComputePathToPoseCBS_Feedback feedback;
} cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage;

// Struct for a sequence of cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage.
typedef struct cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence
{
  cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CBS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_TO_POSE_CBS__STRUCT_H_
