# Solving MAPF in ROS2: A CBS Approach integrated with Nav2
This repository contains the work done during my time at RWTH Aachen University for the development of my master's thesis in Artificial Intelligence Systems at the University of Trento.

## Context
The Agent Planning (AP) problem is a prominent AI challenge focused on the design and development of intelligent agents with the ability to make smart logical choices to satisfy particular goals in a specific environment, which can be either dynamic or static and can have varying degrees of uncertainty. The AP problem is more precisely related to determining a sequence of actions that an agent can perform to reach the desired final state of the system. When several agents coexist in the same environment, this problem becomes particularly complicated. In order to prevent conflicts of interest when devising each agent's plans, all the agents must coordinate and communicate with one another.

## Contributions 
The main contribution made by this thesis concerns the implementation of one of the most popular planning algorithms, called CBS, into the well-known adaptable and scalable ROS2 framework, in order to address the family of multi-agent path finding problems. Specifically, ROS2 is an open-source robotics middleware framework which is used in this work in combination with the ROS2-based robot navigation framework Nav2. Implementing the CBS algorithm in the ROS2 framweork with the use of Nav2 is vital as it addresses a critical gap in the current navigation framework. In fact, Nav2, while robust, lacks native support for multi-agent path finding. In this regard CBS offers efficient and optimal solutions for multi-agent path finding problems by resolving conflicts and ensuring collision-free paths.

## Useful resources
- [CBS](https://www.sciencedirect.com/science/article/pii/S0004370214001386)
- [ROS2 Humble](https://docs.ros.org/en/humble/index.html#)
- [NAV2](https://navigation.ros.org)

## Components explained

### cbs_nav2
This folder contains files regarding the planner used to calculate the routes of each robot. All files are a modified version of the respective files made available by nav2. Since the CBS algorithm makes use of the A* algorithm to calculate the paths for each agent, it was decided to use the smac_planner instead of the navfn_planner used by default by nav2. The main changes made to the planner concern the handling of constraints imposed by CBS, which are not supported in the basic version.

### cbs_ros2_nodes
Instead, this folder contains the nodes responsible for executing the CBS algorithm. In particular, two main nodes are distinguished, as described in the paper, one for the low-level part and the other for the high-level part.
- multi_agent_plan_asker is the node that deals with the low-level part of the algorithm. Its job is to ask the planner for new plans, providing the start and end positions of each agent along with the constraints of each.
- collision_avoider is the node that executes the high-level part of the algorithm. Once the multi_agent_plan_asker returns the plans of each agent this algorithm will perform CBS to search for plans that are collision-free.
The other two nodes defined within the folder (baseline_asker and plan_asker) were written as debug nodes to test the correctness and performance of the two nodes described above. Specifically, the baseline_asker node will request plans from the planner without making use of the cbs algorithm, while the plan_asker node will go and ask the collision_avoider for a set of plans for a total of two agents for a set of hand-crafted coordinates.

## Setup the experiments
A launch file is not yet available. Therefore, to launch an experiment, it is necessary to launch the multi_agent_plan_asker and the collision_avoider separately. Next, it is necessary to configure a node that sends the coordinates to be reached for each agent to the collision_avoider, which will eventually return a plan for each agent.
<pre>
$ ros2 run cbs_nodes multi_agent_plan_asker
$ ros2 run cbs_nodes collision_avoider
$ ros2 run cbs_nodes plan_asker
</pre>

Obviously, these nodes do not function independently. In order to work properly, a file must be launched that runs the planner and generally the nav2 components. During the development of this work the RWTH Aachen University framework found in [this](https://github.com/carologistics) repository was used. Specifically, the cbs_nav2 components are used inside the ros2-navigation folder in the carologistics repository.
