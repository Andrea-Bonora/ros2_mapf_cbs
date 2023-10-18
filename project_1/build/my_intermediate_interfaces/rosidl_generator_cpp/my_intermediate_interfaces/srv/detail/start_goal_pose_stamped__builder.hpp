// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_intermediate_interfaces:srv/StartGoalPoseStamped.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSE_STAMPED__BUILDER_HPP_
#define MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_intermediate_interfaces/srv/detail/start_goal_pose_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_intermediate_interfaces
{

namespace srv
{

namespace builder
{

class Init_StartGoalPoseStamped_Request_goals
{
public:
  explicit Init_StartGoalPoseStamped_Request_goals(::my_intermediate_interfaces::srv::StartGoalPoseStamped_Request & msg)
  : msg_(msg)
  {}
  ::my_intermediate_interfaces::srv::StartGoalPoseStamped_Request goals(::my_intermediate_interfaces::srv::StartGoalPoseStamped_Request::_goals_type arg)
  {
    msg_.goals = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_intermediate_interfaces::srv::StartGoalPoseStamped_Request msg_;
};

class Init_StartGoalPoseStamped_Request_starts
{
public:
  Init_StartGoalPoseStamped_Request_starts()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartGoalPoseStamped_Request_goals starts(::my_intermediate_interfaces::srv::StartGoalPoseStamped_Request::_starts_type arg)
  {
    msg_.starts = std::move(arg);
    return Init_StartGoalPoseStamped_Request_goals(msg_);
  }

private:
  ::my_intermediate_interfaces::srv::StartGoalPoseStamped_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::srv::StartGoalPoseStamped_Request>()
{
  return my_intermediate_interfaces::srv::builder::Init_StartGoalPoseStamped_Request_starts();
}

}  // namespace my_intermediate_interfaces


namespace my_intermediate_interfaces
{

namespace srv
{

namespace builder
{

class Init_StartGoalPoseStamped_Response_plans
{
public:
  Init_StartGoalPoseStamped_Response_plans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_intermediate_interfaces::srv::StartGoalPoseStamped_Response plans(::my_intermediate_interfaces::srv::StartGoalPoseStamped_Response::_plans_type arg)
  {
    msg_.plans = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_intermediate_interfaces::srv::StartGoalPoseStamped_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::srv::StartGoalPoseStamped_Response>()
{
  return my_intermediate_interfaces::srv::builder::Init_StartGoalPoseStamped_Response_plans();
}

}  // namespace my_intermediate_interfaces

#endif  // MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSE_STAMPED__BUILDER_HPP_
