// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_intermediate_interfaces:msg/AgentPath.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__AGENT_PATH__BUILDER_HPP_
#define MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__AGENT_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_intermediate_interfaces/msg/detail/agent_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_intermediate_interfaces
{

namespace msg
{

namespace builder
{

class Init_AgentPath_path
{
public:
  explicit Init_AgentPath_path(::my_intermediate_interfaces::msg::AgentPath & msg)
  : msg_(msg)
  {}
  ::my_intermediate_interfaces::msg::AgentPath path(::my_intermediate_interfaces::msg::AgentPath::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_intermediate_interfaces::msg::AgentPath msg_;
};

class Init_AgentPath_name
{
public:
  Init_AgentPath_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgentPath_path name(::my_intermediate_interfaces::msg::AgentPath::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_AgentPath_path(msg_);
  }

private:
  ::my_intermediate_interfaces::msg::AgentPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::msg::AgentPath>()
{
  return my_intermediate_interfaces::msg::builder::Init_AgentPath_name();
}

}  // namespace my_intermediate_interfaces

#endif  // MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__AGENT_PATH__BUILDER_HPP_
