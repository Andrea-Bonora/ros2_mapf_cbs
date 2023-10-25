// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_intermediate_interfaces:action/MyComputePathToPose.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__ACTION__DETAIL__MY_COMPUTE_PATH_TO_POSE__TRAITS_HPP_
#define MY_INTERMEDIATE_INTERFACES__ACTION__DETAIL__MY_COMPUTE_PATH_TO_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'goal'
// Member 'start'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'vertex_constraints'
#include "my_intermediate_interfaces/msg/detail/vertex_constraint__traits.hpp"
// Member 'edge_constraints'
#include "my_intermediate_interfaces/msg/detail/edge_constraint__traits.hpp"

namespace my_intermediate_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MyComputePathToPose_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
    out << ", ";
  }

  // member: start
  {
    out << "start: ";
    to_flow_style_yaml(msg.start, out);
    out << ", ";
  }

  // member: vertex_constraints
  {
    if (msg.vertex_constraints.size() == 0) {
      out << "vertex_constraints: []";
    } else {
      out << "vertex_constraints: [";
      size_t pending_items = msg.vertex_constraints.size();
      for (auto item : msg.vertex_constraints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: edge_constraints
  {
    if (msg.edge_constraints.size() == 0) {
      out << "edge_constraints: []";
    } else {
      out << "edge_constraints: [";
      size_t pending_items = msg.edge_constraints.size();
      for (auto item : msg.edge_constraints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: planner_id
  {
    out << "planner_id: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_id, out);
    out << ", ";
  }

  // member: use_start
  {
    out << "use_start: ";
    rosidl_generator_traits::value_to_yaml(msg.use_start, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyComputePathToPose_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }

  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start:\n";
    to_block_style_yaml(msg.start, out, indentation + 2);
  }

  // member: vertex_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vertex_constraints.size() == 0) {
      out << "vertex_constraints: []\n";
    } else {
      out << "vertex_constraints:\n";
      for (auto item : msg.vertex_constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: edge_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.edge_constraints.size() == 0) {
      out << "edge_constraints: []\n";
    } else {
      out << "edge_constraints:\n";
      for (auto item : msg.edge_constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: planner_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planner_id: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_id, out);
    out << "\n";
  }

  // member: use_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_start: ";
    rosidl_generator_traits::value_to_yaml(msg.use_start, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyComputePathToPose_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_intermediate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_intermediate_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_intermediate_interfaces::action::MyComputePathToPose_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_intermediate_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_intermediate_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_intermediate_interfaces::action::MyComputePathToPose_Goal & msg)
{
  return my_intermediate_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_intermediate_interfaces::action::MyComputePathToPose_Goal>()
{
  return "my_intermediate_interfaces::action::MyComputePathToPose_Goal";
}

template<>
inline const char * name<my_intermediate_interfaces::action::MyComputePathToPose_Goal>()
{
  return "my_intermediate_interfaces/action/MyComputePathToPose_Goal";
}

template<>
struct has_fixed_size<my_intermediate_interfaces::action::MyComputePathToPose_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_intermediate_interfaces::action::MyComputePathToPose_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_intermediate_interfaces::action::MyComputePathToPose_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__traits.hpp"
// Member 'planning_time'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace my_intermediate_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MyComputePathToPose_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: path
  {
    out << "path: ";
    to_flow_style_yaml(msg.path, out);
    out << ", ";
  }

  // member: planning_time
  {
    out << "planning_time: ";
    to_flow_style_yaml(msg.planning_time, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyComputePathToPose_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_block_style_yaml(msg.path, out, indentation + 2);
  }

  // member: planning_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_time:\n";
    to_block_style_yaml(msg.planning_time, out, indentation + 2);
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyComputePathToPose_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_intermediate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_intermediate_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_intermediate_interfaces::action::MyComputePathToPose_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_intermediate_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_intermediate_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_intermediate_interfaces::action::MyComputePathToPose_Result & msg)
{
  return my_intermediate_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_intermediate_interfaces::action::MyComputePathToPose_Result>()
{
  return "my_intermediate_interfaces::action::MyComputePathToPose_Result";
}

template<>
inline const char * name<my_intermediate_interfaces::action::MyComputePathToPose_Result>()
{
  return "my_intermediate_interfaces/action/MyComputePathToPose_Result";
}

template<>
struct has_fixed_size<my_intermediate_interfaces::action::MyComputePathToPose_Result>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<nav_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<my_intermediate_interfaces::action::MyComputePathToPose_Result>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<nav_msgs::msg::Path>::value> {};

template<>
struct is_message<my_intermediate_interfaces::action::MyComputePathToPose_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_intermediate_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MyComputePathToPose_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyComputePathToPose_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyComputePathToPose_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_intermediate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_intermediate_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_intermediate_interfaces::action::MyComputePathToPose_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_intermediate_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_intermediate_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_intermediate_interfaces::action::MyComputePathToPose_Feedback & msg)
{
  return my_intermediate_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_intermediate_interfaces::action::MyComputePathToPose_Feedback>()
{
  return "my_intermediate_interfaces::action::MyComputePathToPose_Feedback";
}

template<>
inline const char * name<my_intermediate_interfaces::action::MyComputePathToPose_Feedback>()
{
  return "my_intermediate_interfaces/action/MyComputePathToPose_Feedback";
}

template<>
struct has_fixed_size<my_intermediate_interfaces::action::MyComputePathToPose_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_intermediate_interfaces::action::MyComputePathToPose_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_intermediate_interfaces::action::MyComputePathToPose_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__traits.hpp"

namespace my_intermediate_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MyComputePathToPose_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyComputePathToPose_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyComputePathToPose_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_intermediate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_intermediate_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_intermediate_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_intermediate_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request & msg)
{
  return my_intermediate_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request>()
{
  return "my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request";
}

template<>
inline const char * name<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request>()
{
  return "my_intermediate_interfaces/action/MyComputePathToPose_SendGoal_Request";
}

template<>
struct has_fixed_size<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<my_intermediate_interfaces::action::MyComputePathToPose_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<my_intermediate_interfaces::action::MyComputePathToPose_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace my_intermediate_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MyComputePathToPose_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyComputePathToPose_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyComputePathToPose_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_intermediate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_intermediate_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_intermediate_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_intermediate_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response & msg)
{
  return my_intermediate_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response>()
{
  return "my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response";
}

template<>
inline const char * name<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response>()
{
  return "my_intermediate_interfaces/action/MyComputePathToPose_SendGoal_Response";
}

template<>
struct has_fixed_size<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal>()
{
  return "my_intermediate_interfaces::action::MyComputePathToPose_SendGoal";
}

template<>
inline const char * name<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal>()
{
  return "my_intermediate_interfaces/action/MyComputePathToPose_SendGoal";
}

template<>
struct has_fixed_size<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request>::value &&
    has_fixed_size<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request>::value &&
    has_bounded_size<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace my_intermediate_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MyComputePathToPose_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyComputePathToPose_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyComputePathToPose_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_intermediate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_intermediate_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_intermediate_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_intermediate_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request & msg)
{
  return my_intermediate_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request>()
{
  return "my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request";
}

template<>
inline const char * name<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request>()
{
  return "my_intermediate_interfaces/action/MyComputePathToPose_GetResult_Request";
}

template<>
struct has_fixed_size<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__traits.hpp"

namespace my_intermediate_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MyComputePathToPose_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyComputePathToPose_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyComputePathToPose_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_intermediate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_intermediate_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_intermediate_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_intermediate_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response & msg)
{
  return my_intermediate_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response>()
{
  return "my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response";
}

template<>
inline const char * name<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response>()
{
  return "my_intermediate_interfaces/action/MyComputePathToPose_GetResult_Response";
}

template<>
struct has_fixed_size<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<my_intermediate_interfaces::action::MyComputePathToPose_Result>::value> {};

template<>
struct has_bounded_size<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<my_intermediate_interfaces::action::MyComputePathToPose_Result>::value> {};

template<>
struct is_message<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_intermediate_interfaces::action::MyComputePathToPose_GetResult>()
{
  return "my_intermediate_interfaces::action::MyComputePathToPose_GetResult";
}

template<>
inline const char * name<my_intermediate_interfaces::action::MyComputePathToPose_GetResult>()
{
  return "my_intermediate_interfaces/action/MyComputePathToPose_GetResult";
}

template<>
struct has_fixed_size<my_intermediate_interfaces::action::MyComputePathToPose_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request>::value &&
    has_fixed_size<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_intermediate_interfaces::action::MyComputePathToPose_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request>::value &&
    has_bounded_size<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response>::value
  >
{
};

template<>
struct is_service<my_intermediate_interfaces::action::MyComputePathToPose_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__traits.hpp"

namespace my_intermediate_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MyComputePathToPose_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyComputePathToPose_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyComputePathToPose_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_intermediate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_intermediate_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_intermediate_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_intermediate_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage & msg)
{
  return my_intermediate_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage>()
{
  return "my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage";
}

template<>
inline const char * name<my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage>()
{
  return "my_intermediate_interfaces/action/MyComputePathToPose_FeedbackMessage";
}

template<>
struct has_fixed_size<my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<my_intermediate_interfaces::action::MyComputePathToPose_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<my_intermediate_interfaces::action::MyComputePathToPose_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<my_intermediate_interfaces::action::MyComputePathToPose>
  : std::true_type
{
};

template<>
struct is_action_goal<my_intermediate_interfaces::action::MyComputePathToPose_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<my_intermediate_interfaces::action::MyComputePathToPose_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<my_intermediate_interfaces::action::MyComputePathToPose_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MY_INTERMEDIATE_INTERFACES__ACTION__DETAIL__MY_COMPUTE_PATH_TO_POSE__TRAITS_HPP_
