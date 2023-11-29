// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cbs_interfaces:srv/ComputedPlans.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__SRV__DETAIL__COMPUTED_PLANS__BUILDER_HPP_
#define CBS_INTERFACES__SRV__DETAIL__COMPUTED_PLANS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cbs_interfaces/srv/detail/computed_plans__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cbs_interfaces
{

namespace srv
{

namespace builder
{

class Init_ComputedPlans_Request_plans
{
public:
  Init_ComputedPlans_Request_plans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cbs_interfaces::srv::ComputedPlans_Request plans(::cbs_interfaces::srv::ComputedPlans_Request::_plans_type arg)
  {
    msg_.plans = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cbs_interfaces::srv::ComputedPlans_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cbs_interfaces::srv::ComputedPlans_Request>()
{
  return cbs_interfaces::srv::builder::Init_ComputedPlans_Request_plans();
}

}  // namespace cbs_interfaces


namespace cbs_interfaces
{

namespace srv
{

namespace builder
{

class Init_ComputedPlans_Response_collision_free_plans
{
public:
  Init_ComputedPlans_Response_collision_free_plans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cbs_interfaces::srv::ComputedPlans_Response collision_free_plans(::cbs_interfaces::srv::ComputedPlans_Response::_collision_free_plans_type arg)
  {
    msg_.collision_free_plans = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cbs_interfaces::srv::ComputedPlans_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cbs_interfaces::srv::ComputedPlans_Response>()
{
  return cbs_interfaces::srv::builder::Init_ComputedPlans_Response_collision_free_plans();
}

}  // namespace cbs_interfaces

#endif  // CBS_INTERFACES__SRV__DETAIL__COMPUTED_PLANS__BUILDER_HPP_
