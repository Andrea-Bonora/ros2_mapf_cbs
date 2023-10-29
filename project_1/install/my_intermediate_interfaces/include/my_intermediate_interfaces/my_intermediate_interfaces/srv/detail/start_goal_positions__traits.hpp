// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_intermediate_interfaces:srv/StartGoalPositions.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__TRAITS_HPP_
#define MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_intermediate_interfaces/srv/detail/start_goal_positions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_intermediate_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartGoalPositions_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_x
  {
    if (msg.start_x.size() == 0) {
      out << "start_x: []";
    } else {
      out << "start_x: [";
      size_t pending_items = msg.start_x.size();
      for (auto item : msg.start_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: start_y
  {
    if (msg.start_y.size() == 0) {
      out << "start_y: []";
    } else {
      out << "start_y: [";
      size_t pending_items = msg.start_y.size();
      for (auto item : msg.start_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: start_z
  {
    if (msg.start_z.size() == 0) {
      out << "start_z: []";
    } else {
      out << "start_z: [";
      size_t pending_items = msg.start_z.size();
      for (auto item : msg.start_z) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: end_x
  {
    if (msg.end_x.size() == 0) {
      out << "end_x: []";
    } else {
      out << "end_x: [";
      size_t pending_items = msg.end_x.size();
      for (auto item : msg.end_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: end_y
  {
    if (msg.end_y.size() == 0) {
      out << "end_y: []";
    } else {
      out << "end_y: [";
      size_t pending_items = msg.end_y.size();
      for (auto item : msg.end_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: end_z
  {
    if (msg.end_z.size() == 0) {
      out << "end_z: []";
    } else {
      out << "end_z: [";
      size_t pending_items = msg.end_z.size();
      for (auto item : msg.end_z) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  // member: start_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.start_x.size() == 0) {
      out << "start_x: []\n";
    } else {
      out << "start_x:\n";
      for (auto item : msg.start_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: start_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.start_y.size() == 0) {
      out << "start_y: []\n";
    } else {
      out << "start_y:\n";
      for (auto item : msg.start_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: start_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.start_z.size() == 0) {
      out << "start_z: []\n";
    } else {
      out << "start_z:\n";
      for (auto item : msg.start_z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: end_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.end_x.size() == 0) {
      out << "end_x: []\n";
    } else {
      out << "end_x:\n";
      for (auto item : msg.end_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: end_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.end_y.size() == 0) {
      out << "end_y: []\n";
    } else {
      out << "end_y:\n";
      for (auto item : msg.end_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: end_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.end_z.size() == 0) {
      out << "end_z: []\n";
    } else {
      out << "end_z:\n";
      for (auto item : msg.end_z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
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

}  // namespace my_intermediate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_intermediate_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_intermediate_interfaces::srv::StartGoalPositions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_intermediate_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_intermediate_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_intermediate_interfaces::srv::StartGoalPositions_Request & msg)
{
  return my_intermediate_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_intermediate_interfaces::srv::StartGoalPositions_Request>()
{
  return "my_intermediate_interfaces::srv::StartGoalPositions_Request";
}

template<>
inline const char * name<my_intermediate_interfaces::srv::StartGoalPositions_Request>()
{
  return "my_intermediate_interfaces/srv/StartGoalPositions_Request";
}

template<>
struct has_fixed_size<my_intermediate_interfaces::srv::StartGoalPositions_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_intermediate_interfaces::srv::StartGoalPositions_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_intermediate_interfaces::srv::StartGoalPositions_Request>
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

}  // namespace my_intermediate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_intermediate_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_intermediate_interfaces::srv::StartGoalPositions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_intermediate_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_intermediate_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_intermediate_interfaces::srv::StartGoalPositions_Response & msg)
{
  return my_intermediate_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_intermediate_interfaces::srv::StartGoalPositions_Response>()
{
  return "my_intermediate_interfaces::srv::StartGoalPositions_Response";
}

template<>
inline const char * name<my_intermediate_interfaces::srv::StartGoalPositions_Response>()
{
  return "my_intermediate_interfaces/srv/StartGoalPositions_Response";
}

template<>
struct has_fixed_size<my_intermediate_interfaces::srv::StartGoalPositions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_intermediate_interfaces::srv::StartGoalPositions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_intermediate_interfaces::srv::StartGoalPositions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_intermediate_interfaces::srv::StartGoalPositions>()
{
  return "my_intermediate_interfaces::srv::StartGoalPositions";
}

template<>
inline const char * name<my_intermediate_interfaces::srv::StartGoalPositions>()
{
  return "my_intermediate_interfaces/srv/StartGoalPositions";
}

template<>
struct has_fixed_size<my_intermediate_interfaces::srv::StartGoalPositions>
  : std::integral_constant<
    bool,
    has_fixed_size<my_intermediate_interfaces::srv::StartGoalPositions_Request>::value &&
    has_fixed_size<my_intermediate_interfaces::srv::StartGoalPositions_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_intermediate_interfaces::srv::StartGoalPositions>
  : std::integral_constant<
    bool,
    has_bounded_size<my_intermediate_interfaces::srv::StartGoalPositions_Request>::value &&
    has_bounded_size<my_intermediate_interfaces::srv::StartGoalPositions_Response>::value
  >
{
};

template<>
struct is_service<my_intermediate_interfaces::srv::StartGoalPositions>
  : std::true_type
{
};

template<>
struct is_service_request<my_intermediate_interfaces::srv::StartGoalPositions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_intermediate_interfaces::srv::StartGoalPositions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__TRAITS_HPP_
