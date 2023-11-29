// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cbs_interfaces:msg/AgentPath.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__MSG__DETAIL__AGENT_PATH__BUILDER_HPP_
#define CBS_INTERFACES__MSG__DETAIL__AGENT_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cbs_interfaces/msg/detail/agent_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cbs_interfaces
{

namespace msg
{

namespace builder
{

class Init_AgentPath_path
{
public:
  explicit Init_AgentPath_path(::cbs_interfaces::msg::AgentPath & msg)
  : msg_(msg)
  {}
  ::cbs_interfaces::msg::AgentPath path(::cbs_interfaces::msg::AgentPath::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cbs_interfaces::msg::AgentPath msg_;
};

class Init_AgentPath_name
{
public:
  Init_AgentPath_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgentPath_path name(::cbs_interfaces::msg::AgentPath::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_AgentPath_path(msg_);
  }

private:
  ::cbs_interfaces::msg::AgentPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cbs_interfaces::msg::AgentPath>()
{
  return cbs_interfaces::msg::builder::Init_AgentPath_name();
}

}  // namespace cbs_interfaces

#endif  // CBS_INTERFACES__MSG__DETAIL__AGENT_PATH__BUILDER_HPP_
