// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cbs_interfaces:msg/EdgeConstraint.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__BUILDER_HPP_
#define CBS_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cbs_interfaces/msg/detail/edge_constraint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cbs_interfaces
{

namespace msg
{

namespace builder
{

class Init_EdgeConstraint_time_step
{
public:
  explicit Init_EdgeConstraint_time_step(::cbs_interfaces::msg::EdgeConstraint & msg)
  : msg_(msg)
  {}
  ::cbs_interfaces::msg::EdgeConstraint time_step(::cbs_interfaces::msg::EdgeConstraint::_time_step_type arg)
  {
    msg_.time_step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cbs_interfaces::msg::EdgeConstraint msg_;
};

class Init_EdgeConstraint_cell_to_index
{
public:
  explicit Init_EdgeConstraint_cell_to_index(::cbs_interfaces::msg::EdgeConstraint & msg)
  : msg_(msg)
  {}
  Init_EdgeConstraint_time_step cell_to_index(::cbs_interfaces::msg::EdgeConstraint::_cell_to_index_type arg)
  {
    msg_.cell_to_index = std::move(arg);
    return Init_EdgeConstraint_time_step(msg_);
  }

private:
  ::cbs_interfaces::msg::EdgeConstraint msg_;
};

class Init_EdgeConstraint_cell_from_index
{
public:
  Init_EdgeConstraint_cell_from_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EdgeConstraint_cell_to_index cell_from_index(::cbs_interfaces::msg::EdgeConstraint::_cell_from_index_type arg)
  {
    msg_.cell_from_index = std::move(arg);
    return Init_EdgeConstraint_cell_to_index(msg_);
  }

private:
  ::cbs_interfaces::msg::EdgeConstraint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cbs_interfaces::msg::EdgeConstraint>()
{
  return cbs_interfaces::msg::builder::Init_EdgeConstraint_cell_from_index();
}

}  // namespace cbs_interfaces

#endif  // CBS_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__BUILDER_HPP_
