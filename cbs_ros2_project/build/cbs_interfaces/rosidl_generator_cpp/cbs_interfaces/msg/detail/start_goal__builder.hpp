// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cbs_interfaces:msg/StartGoal.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__MSG__DETAIL__START_GOAL__BUILDER_HPP_
#define CBS_INTERFACES__MSG__DETAIL__START_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cbs_interfaces/msg/detail/start_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cbs_interfaces
{

namespace msg
{

namespace builder
{

class Init_StartGoal_goal
{
public:
  explicit Init_StartGoal_goal(::cbs_interfaces::msg::StartGoal & msg)
  : msg_(msg)
  {}
  ::cbs_interfaces::msg::StartGoal goal(::cbs_interfaces::msg::StartGoal::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cbs_interfaces::msg::StartGoal msg_;
};

class Init_StartGoal_start
{
public:
  Init_StartGoal_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartGoal_goal start(::cbs_interfaces::msg::StartGoal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_StartGoal_goal(msg_);
  }

private:
  ::cbs_interfaces::msg::StartGoal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cbs_interfaces::msg::StartGoal>()
{
  return cbs_interfaces::msg::builder::Init_StartGoal_start();
}

}  // namespace cbs_interfaces

#endif  // CBS_INTERFACES__MSG__DETAIL__START_GOAL__BUILDER_HPP_
