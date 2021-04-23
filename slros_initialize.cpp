#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "pubgrippercmd";

// For Block pubgrippercmd/Publish1
SimulinkPublisher<trajectory_msgs::JointTrajectory, SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectory> Pub_pubgrippercmd_14;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

