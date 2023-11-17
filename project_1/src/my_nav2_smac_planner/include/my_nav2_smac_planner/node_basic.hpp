// Copyright (c) 2020, Samsung Research America
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
// limitations under the License. Reserved.

#ifndef MY_NAV2_SMAC_PLANNER__NODE_BASIC_HPP_
#define MY_NAV2_SMAC_PLANNER__NODE_BASIC_HPP_

#include <math.h>
#include <vector>
#include <cmath>
#include <iostream>
#include <functional>
#include <queue>
#include <memory>
#include <utility>
#include <limits>

#include "ompl/base/StateSpace.h"

#include "my_nav2_smac_planner/constants.hpp"
#include "my_nav2_smac_planner/node_hybrid.hpp"
#include "my_nav2_smac_planner/node_lattice.hpp"
#include "my_nav2_smac_planner/node_2d.hpp"
#include "my_nav2_smac_planner/types.hpp"
#include "my_nav2_smac_planner/collision_checker.hpp"

namespace my_nav2_smac_planner
{

/**
 * @class my_nav2_smac_planner::NodeBasic
 * @brief NodeBasic implementation for priority queue insertion
 */
template<typename NodeT>
class NodeBasic
{
public:
  /**
   * @brief A constructor for my_nav2_smac_planner::NodeBasic
   * @param cost_in The costmap cost at this node
   * @param index The index of this node for self-reference
   */
  explicit NodeBasic(const unsigned int index)
  : index(index),
    graph_node_ptr(nullptr)
  {
  }

  /**
   * @brief Take a NodeBasic and populate it with any necessary state
   * cached in the queue for NodeT.
   * @param node NodeT ptr to populate metadata into NodeBasic
   */
  void populateSearchNode(NodeT * & node);

  /**
   * @brief Take a NodeBasic and populate it with any necessary state
   * cached in the queue for NodeTs.
   * @param node Search node (basic) object to initialize internal node
   * with state
   */
  void processSearchNode();

  typename NodeT::Coordinates pose;  // Used by NodeHybrid and NodeLattice
  NodeT * graph_node_ptr;
  MotionPrimitive * prim_ptr;  // Used by NodeLattice
  unsigned int index, motion_index;
  bool backward;
};

}  // namespace my_nav2_smac_planner

#endif  // NAV2_SMAC_PLANNER__NODE_BASIC_HPP_