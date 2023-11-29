// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cbs_interfaces:msg/AgentPath.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__MSG__DETAIL__AGENT_PATH__TRAITS_HPP_
#define CBS_INTERFACES__MSG__DETAIL__AGENT_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cbs_interfaces/msg/detail/agent_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__traits.hpp"

namespace cbs_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const AgentPath & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: path
  {
    out << "path: ";
    to_flow_style_yaml(msg.path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AgentPath & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_block_style_yaml(msg.path, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AgentPath & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace cbs_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cbs_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cbs_interfaces::msg::AgentPath & msg,
  std::ostream & out, size_t indentation = 0)
{
  cbs_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cbs_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const cbs_interfaces::msg::AgentPath & msg)
{
  return cbs_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cbs_interfaces::msg::AgentPath>()
{
  return "cbs_interfaces::msg::AgentPath";
}

template<>
inline const char * name<cbs_interfaces::msg::AgentPath>()
{
  return "cbs_interfaces/msg/AgentPath";
}

template<>
struct has_fixed_size<cbs_interfaces::msg::AgentPath>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cbs_interfaces::msg::AgentPath>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cbs_interfaces::msg::AgentPath>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CBS_INTERFACES__MSG__DETAIL__AGENT_PATH__TRAITS_HPP_
