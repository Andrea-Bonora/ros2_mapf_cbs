// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cbs_interfaces:msg/AgentPathRequest.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__MSG__DETAIL__AGENT_PATH_REQUEST__TRAITS_HPP_
#define CBS_INTERFACES__MSG__DETAIL__AGENT_PATH_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cbs_interfaces/msg/detail/agent_path_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start'
// Member 'goal'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'vertex_constraints'
#include "cbs_interfaces/msg/detail/vertex_constraint__traits.hpp"
// Member 'edge_constraints'
#include "cbs_interfaces/msg/detail/edge_constraint__traits.hpp"

namespace cbs_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const AgentPathRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AgentPathRequest & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AgentPathRequest & msg, bool use_flow_style = false)
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
  const cbs_interfaces::msg::AgentPathRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  cbs_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cbs_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const cbs_interfaces::msg::AgentPathRequest & msg)
{
  return cbs_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cbs_interfaces::msg::AgentPathRequest>()
{
  return "cbs_interfaces::msg::AgentPathRequest";
}

template<>
inline const char * name<cbs_interfaces::msg::AgentPathRequest>()
{
  return "cbs_interfaces/msg/AgentPathRequest";
}

template<>
struct has_fixed_size<cbs_interfaces::msg::AgentPathRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cbs_interfaces::msg::AgentPathRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cbs_interfaces::msg::AgentPathRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CBS_INTERFACES__MSG__DETAIL__AGENT_PATH_REQUEST__TRAITS_HPP_
