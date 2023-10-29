// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_intermediate_interfaces:srv/StartGoalPoseStamped.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSE_STAMPED__TRAITS_HPP_
#define MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSE_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_intermediate_interfaces/srv/detail/start_goal_pose_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'requests'
#include "my_intermediate_interfaces/msg/detail/agent_path_request__traits.hpp"

namespace my_intermediate_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartGoalPoseStamped_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: requests
  {
    if (msg.requests.size() == 0) {
      out << "requests: []";
    } else {
      out << "requests: [";
      size_t pending_items = msg.requests.size();
      for (auto item : msg.requests) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartGoalPoseStamped_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: requests
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.requests.size() == 0) {
      out << "requests: []\n";
    } else {
      out << "requests:\n";
      for (auto item : msg.requests) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartGoalPoseStamped_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_intermediate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_intermediate_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_intermediate_interfaces::srv::StartGoalPoseStamped_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_intermediate_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_intermediate_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_intermediate_interfaces::srv::StartGoalPoseStamped_Request & msg)
{
  return my_intermediate_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request>()
{
  return "my_intermediate_interfaces::srv::StartGoalPoseStamped_Request";
}

template<>
inline const char * name<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request>()
{
  return "my_intermediate_interfaces/srv/StartGoalPoseStamped_Request";
}

template<>
struct has_fixed_size<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'plans'
#include "my_intermediate_interfaces/msg/detail/agent_path__traits.hpp"

namespace my_intermediate_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartGoalPoseStamped_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: plans
  {
    if (msg.plans.size() == 0) {
      out << "plans: []";
    } else {
      out << "plans: [";
      size_t pending_items = msg.plans.size();
      for (auto item : msg.plans) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartGoalPoseStamped_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: plans
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.plans.size() == 0) {
      out << "plans: []\n";
    } else {
      out << "plans:\n";
      for (auto item : msg.plans) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartGoalPoseStamped_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_intermediate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_intermediate_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_intermediate_interfaces::srv::StartGoalPoseStamped_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_intermediate_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_intermediate_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_intermediate_interfaces::srv::StartGoalPoseStamped_Response & msg)
{
  return my_intermediate_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response>()
{
  return "my_intermediate_interfaces::srv::StartGoalPoseStamped_Response";
}

template<>
inline const char * name<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response>()
{
  return "my_intermediate_interfaces/srv/StartGoalPoseStamped_Response";
}

template<>
struct has_fixed_size<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_intermediate_interfaces::srv::StartGoalPoseStamped>()
{
  return "my_intermediate_interfaces::srv::StartGoalPoseStamped";
}

template<>
inline const char * name<my_intermediate_interfaces::srv::StartGoalPoseStamped>()
{
  return "my_intermediate_interfaces/srv/StartGoalPoseStamped";
}

template<>
struct has_fixed_size<my_intermediate_interfaces::srv::StartGoalPoseStamped>
  : std::integral_constant<
    bool,
    has_fixed_size<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request>::value &&
    has_fixed_size<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_intermediate_interfaces::srv::StartGoalPoseStamped>
  : std::integral_constant<
    bool,
    has_bounded_size<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request>::value &&
    has_bounded_size<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response>::value
  >
{
};

template<>
struct is_service<my_intermediate_interfaces::srv::StartGoalPoseStamped>
  : std::true_type
{
};

template<>
struct is_service_request<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSE_STAMPED__TRAITS_HPP_
