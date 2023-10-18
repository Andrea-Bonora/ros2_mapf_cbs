// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_intermediate_interfaces:srv/StartGoalPosedStamped.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSED_STAMPED__BUILDER_HPP_
#define MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSED_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_intermediate_interfaces/srv/detail/start_goal_posed_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_intermediate_interfaces
{

namespace srv
{

namespace builder
{

class Init_StartGoalPosedStamped_Request_plans
{
public:
  Init_StartGoalPosedStamped_Request_plans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_intermediate_interfaces::srv::StartGoalPosedStamped_Request plans(::my_intermediate_interfaces::srv::StartGoalPosedStamped_Request::_plans_type arg)
  {
    msg_.plans = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_intermediate_interfaces::srv::StartGoalPosedStamped_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::srv::StartGoalPosedStamped_Request>()
{
  return my_intermediate_interfaces::srv::builder::Init_StartGoalPosedStamped_Request_plans();
}

}  // namespace my_intermediate_interfaces


namespace my_intermediate_interfaces
{

namespace srv
{

namespace builder
{

class Init_StartGoalPosedStamped_Response_collision_free_plans
{
public:
  Init_StartGoalPosedStamped_Response_collision_free_plans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_intermediate_interfaces::srv::StartGoalPosedStamped_Response collision_free_plans(::my_intermediate_interfaces::srv::StartGoalPosedStamped_Response::_collision_free_plans_type arg)
  {
    msg_.collision_free_plans = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_intermediate_interfaces::srv::StartGoalPosedStamped_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::srv::StartGoalPosedStamped_Response>()
{
  return my_intermediate_interfaces::srv::builder::Init_StartGoalPosedStamped_Response_collision_free_plans();
}

}  // namespace my_intermediate_interfaces

#endif  // MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSED_STAMPED__BUILDER_HPP_
