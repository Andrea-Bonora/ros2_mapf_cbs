// Copyright (c) 2019 Samsung Research America
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef MY_NAV2_CORE__MULTI_AGENT_GLOBAL_PLANNER_HPP_
#define MY_NAV2_CORE__MULTI_AGENT_GLOBAL_PLANNER_HPP_

#include <memory>
#include <string>
#include "rclcpp/rclcpp.hpp"
#include "nav2_costmap_2d/costmap_2d_ros.hpp"
#include "tf2_ros/buffer.h"
#include "nav_msgs/msg/path.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "nav2_util/lifecycle_node.hpp"
#include "my_intermediate_interfaces/msg/vertex_constraint.hpp"
#include "my_intermediate_interfaces/msg/edge_constraint.hpp"

namespace my_nav2_core
{

/**
 * @class MultiAgentGlobalPlanner
 * @brief Abstract interface for global planners to adhere to with pluginlib
 */
class MultiAgentGlobalPlanner
{
public:
  using Ptr = std::shared_ptr<MultiAgentGlobalPlanner>;

  /**
   * @brief Virtual destructor
   */
  virtual ~MultiAgentGlobalPlanner() {}

  /**
   * @param  parent pointer to user's node
   * @param  name The name of this planner
   * @param  tf A pointer to a TF buffer
   * @param  costmap_ros A pointer to the costmap
   */
  virtual void configure(
    const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
    std::string name, std::shared_ptr<tf2_ros::Buffer> tf,
    std::shared_ptr<nav2_costmap_2d::Costmap2DROS> costmap_ros) = 0;

  /**
   * @brief Method to cleanup resources used on shutdown.
   */
  virtual void cleanup() = 0;

  /**
   * @brief Method to active planner and any threads involved in execution.
   */
  virtual void activate() = 0;

  /**
   * @brief Method to deactive planner and any threads involved in execution.
   */
  virtual void deactivate() = 0;

  /**
   * @brief Method create the plan from a starting and ending goal.
   * @param start The starting pose of the robot
   * @param goal  The goal pose of the robot
   * @return      The sequence of poses to get from start to goal, if any
   */

  virtual nav_msgs::msg::Path createPlan(
    const geometry_msgs::msg::PoseStamped & start,
    const geometry_msgs::msg::PoseStamped & goal,
    const std::vector<my_intermediate_interfaces::msg::VertexConstraint> vertex_constraints = {},
    const std::vector<my_intermediate_interfaces::msg::EdgeConstraint> edge_constraints = {}) = 0;
};

}  // namespace my_nav2_core

#endif  // MY_NAV2_CORE__MULTI_AGENT_GLOBAL_PLANNER_HPP_
