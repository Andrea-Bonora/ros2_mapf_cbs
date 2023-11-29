// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cbs_interfaces:srv/StartGoalPositions.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__BUILDER_HPP_
#define CBS_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cbs_interfaces/srv/detail/start_goal_positions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cbs_interfaces
{

namespace srv
{

namespace builder
{

class Init_StartGoalPositions_Request_requests
{
public:
  Init_StartGoalPositions_Request_requests()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cbs_interfaces::srv::StartGoalPositions_Request requests(::cbs_interfaces::srv::StartGoalPositions_Request::_requests_type arg)
  {
    msg_.requests = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cbs_interfaces::srv::StartGoalPositions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cbs_interfaces::srv::StartGoalPositions_Request>()
{
  return cbs_interfaces::srv::builder::Init_StartGoalPositions_Request_requests();
}

}  // namespace cbs_interfaces


namespace cbs_interfaces
{

namespace srv
{

namespace builder
{

class Init_StartGoalPositions_Response_plans
{
public:
  Init_StartGoalPositions_Response_plans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cbs_interfaces::srv::StartGoalPositions_Response plans(::cbs_interfaces::srv::StartGoalPositions_Response::_plans_type arg)
  {
    msg_.plans = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cbs_interfaces::srv::StartGoalPositions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cbs_interfaces::srv::StartGoalPositions_Response>()
{
  return cbs_interfaces::srv::builder::Init_StartGoalPositions_Response_plans();
}

}  // namespace cbs_interfaces

#endif  // CBS_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__BUILDER_HPP_
