// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_robot_interfaces:msg/LedStatus.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__LED_STATUS__TRAITS_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__LED_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_robot_interfaces/msg/detail/led_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: led1
  {
    out << "led1: ";
    rosidl_generator_traits::value_to_yaml(msg.led1, out);
    out << ", ";
  }

  // member: led2
  {
    out << "led2: ";
    rosidl_generator_traits::value_to_yaml(msg.led2, out);
    out << ", ";
  }

  // member: led3
  {
    out << "led3: ";
    rosidl_generator_traits::value_to_yaml(msg.led3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led1: ";
    rosidl_generator_traits::value_to_yaml(msg.led1, out);
    out << "\n";
  }

  // member: led2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led2: ";
    rosidl_generator_traits::value_to_yaml(msg.led2, out);
    out << "\n";
  }

  // member: led3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led3: ";
    rosidl_generator_traits::value_to_yaml(msg.led3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedStatus & msg, bool use_flow_style = false)
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

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::msg::LedStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::msg::LedStatus & msg)
{
  return my_robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::msg::LedStatus>()
{
  return "my_robot_interfaces::msg::LedStatus";
}

template<>
inline const char * name<my_robot_interfaces::msg::LedStatus>()
{
  return "my_robot_interfaces/msg/LedStatus";
}

template<>
struct has_fixed_size<my_robot_interfaces::msg::LedStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_robot_interfaces::msg::LedStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_robot_interfaces::msg::LedStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__LED_STATUS__TRAITS_HPP_
