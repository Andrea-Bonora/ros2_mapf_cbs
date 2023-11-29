// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cbs_interfaces:srv/StartGoalPositions.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__TRAITS_HPP_
#define CBS_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cbs_interfaces/srv/detail/start_goal_positions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'requests'
#include "cbs_interfaces/msg/detail/start_goal__traits.hpp"

namespace cbs_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartGoalPositions_Request & msg,
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
  const StartGoalPositions_Request & msg,
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

inline std::string to_yaml(const StartGoalPositions_Request & msg, bool use_flow_style = false)
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

}  // namespace cbs_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cbs_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cbs_interfaces::srv::StartGoalPositions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cbs_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cbs_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const cbs_interfaces::srv::StartGoalPositions_Request & msg)
{
  return cbs_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cbs_interfaces::srv::StartGoalPositions_Request>()
{
  return "cbs_interfaces::srv::StartGoalPositions_Request";
}

template<>
inline const char * name<cbs_interfaces::srv::StartGoalPositions_Request>()
{
  return "cbs_interfaces/srv/StartGoalPositions_Request";
}

template<>
struct has_fixed_size<cbs_interfaces::srv::StartGoalPositions_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cbs_interfaces::srv::StartGoalPositions_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cbs_interfaces::srv::StartGoalPositions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'plans'
#include "cbs_interfaces/msg/detail/agent_path__traits.hpp"

namespace cbs_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartGoalPositions_Response & msg,
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
  const StartGoalPositions_Response & msg,
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

inline std::string to_yaml(const StartGoalPositions_Response & msg, bool use_flow_style = false)
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

}  // namespace cbs_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cbs_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cbs_interfaces::srv::StartGoalPositions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cbs_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cbs_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const cbs_interfaces::srv::StartGoalPositions_Response & msg)
{
  return cbs_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cbs_interfaces::srv::StartGoalPositions_Response>()
{
  return "cbs_interfaces::srv::StartGoalPositions_Response";
}

template<>
inline const char * name<cbs_interfaces::srv::StartGoalPositions_Response>()
{
  return "cbs_interfaces/srv/StartGoalPositions_Response";
}

template<>
struct has_fixed_size<cbs_interfaces::srv::StartGoalPositions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cbs_interfaces::srv::StartGoalPositions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cbs_interfaces::srv::StartGoalPositions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cbs_interfaces::srv::StartGoalPositions>()
{
  return "cbs_interfaces::srv::StartGoalPositions";
}

template<>
inline const char * name<cbs_interfaces::srv::StartGoalPositions>()
{
  return "cbs_interfaces/srv/StartGoalPositions";
}

template<>
struct has_fixed_size<cbs_interfaces::srv::StartGoalPositions>
  : std::integral_constant<
    bool,
    has_fixed_size<cbs_interfaces::srv::StartGoalPositions_Request>::value &&
    has_fixed_size<cbs_interfaces::srv::StartGoalPositions_Response>::value
  >
{
};

template<>
struct has_bounded_size<cbs_interfaces::srv::StartGoalPositions>
  : std::integral_constant<
    bool,
    has_bounded_size<cbs_interfaces::srv::StartGoalPositions_Request>::value &&
    has_bounded_size<cbs_interfaces::srv::StartGoalPositions_Response>::value
  >
{
};

template<>
struct is_service<cbs_interfaces::srv::StartGoalPositions>
  : std::true_type
{
};

template<>
struct is_service_request<cbs_interfaces::srv::StartGoalPositions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cbs_interfaces::srv::StartGoalPositions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CBS_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__TRAITS_HPP_
