#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "slros_time.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block pubgrippercmd/Publish1
extern SimulinkPublisher<trajectory_msgs::JointTrajectory, SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectory> Pub_pubgrippercmd_14;

void slros_node_init(int argc, char** argv);

#endif
