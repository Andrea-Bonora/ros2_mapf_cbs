// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_intermediate_interfaces:msg/StartGoal.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__START_GOAL__TRAITS_HPP_
#define MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__START_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_intermediate_interfaces/msg/detail/start_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start'
// Member 'goal'
#include "my_intermediate_interfaces/msg/detail/coordinates3_d__traits.hpp"

namespace my_intermediate_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const StartGoal & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    to_flow_style_yaml(msg.start, out);
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
  const StartGoal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start:\n";
    to_block_style_yaml(msg.start, out, indentation + 2);
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

inline std::string to_yaml(const StartGoal & msg, bool use_flow_style = false)
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

}  // namespace my_intermediate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_intermediate_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_intermediate_interfaces::msg::StartGoal & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_intermediate_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_intermediate_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_intermediate_interfaces::msg::StartGoal & msg)
{
  return my_intermediate_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_intermediate_interfaces::msg::StartGoal>()
{
  return "my_intermediate_interfaces::msg::StartGoal";
}

template<>
inline const char * name<my_intermediate_interfaces::msg::StartGoal>()
{
  return "my_intermediate_interfaces/msg/StartGoal";
}

template<>
struct has_fixed_size<my_intermediate_interfaces::msg::StartGoal>
  : std::integral_constant<bool, has_fixed_size<my_intermediate_interfaces::msg::Coordinates3D>::value> {};

template<>
struct has_bounded_size<my_intermediate_interfaces::msg::StartGoal>
  : std::integral_constant<bool, has_bounded_size<my_intermediate_interfaces::msg::Coordinates3D>::value> {};

template<>
struct is_message<my_intermediate_interfaces::msg::StartGoal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__START_GOAL__TRAITS_HPP_
