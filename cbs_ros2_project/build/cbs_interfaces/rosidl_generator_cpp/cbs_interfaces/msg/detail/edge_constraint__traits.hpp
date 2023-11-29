// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cbs_interfaces:msg/EdgeConstraint.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__TRAITS_HPP_
#define CBS_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cbs_interfaces/msg/detail/edge_constraint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cbs_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const EdgeConstraint & msg,
  std::ostream & out)
{
  out << "{";
  // member: cell_from_index
  {
    out << "cell_from_index: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_from_index, out);
    out << ", ";
  }

  // member: cell_to_index
  {
    out << "cell_to_index: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_to_index, out);
    out << ", ";
  }

  // member: time_step
  {
    out << "time_step: ";
    rosidl_generator_traits::value_to_yaml(msg.time_step, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EdgeConstraint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cell_from_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_from_index: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_from_index, out);
    out << "\n";
  }

  // member: cell_to_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_to_index: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_to_index, out);
    out << "\n";
  }

  // member: time_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_step: ";
    rosidl_generator_traits::value_to_yaml(msg.time_step, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EdgeConstraint & msg, bool use_flow_style = false)
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
  const cbs_interfaces::msg::EdgeConstraint & msg,
  std::ostream & out, size_t indentation = 0)
{
  cbs_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cbs_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const cbs_interfaces::msg::EdgeConstraint & msg)
{
  return cbs_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cbs_interfaces::msg::EdgeConstraint>()
{
  return "cbs_interfaces::msg::EdgeConstraint";
}

template<>
inline const char * name<cbs_interfaces::msg::EdgeConstraint>()
{
  return "cbs_interfaces/msg/EdgeConstraint";
}

template<>
struct has_fixed_size<cbs_interfaces::msg::EdgeConstraint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cbs_interfaces::msg::EdgeConstraint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cbs_interfaces::msg::EdgeConstraint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CBS_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__TRAITS_HPP_
