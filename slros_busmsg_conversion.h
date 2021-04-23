#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <ros/duration.h>
#include <ros/time.h>
#include <std_msgs/Header.h>
#include <trajectory_msgs/JointTrajectory.h>
#include <trajectory_msgs/JointTrajectoryPoint.h>
#include "pubgrippercmd_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(ros::Duration* msgPtr, SL_Bus_pubgrippercmd_ros_time_Duration const* busPtr);
void convertToBus(SL_Bus_pubgrippercmd_ros_time_Duration* busPtr, ros::Duration const* msgPtr);

void convertFromBus(ros::Time* msgPtr, SL_Bus_pubgrippercmd_ros_time_Time const* busPtr);
void convertToBus(SL_Bus_pubgrippercmd_ros_time_Time* busPtr, ros::Time const* msgPtr);

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_pubgrippercmd_std_msgs_Header const* busPtr);
void convertToBus(SL_Bus_pubgrippercmd_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr);

void convertFromBus(trajectory_msgs::JointTrajectory* msgPtr, SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectory const* busPtr);
void convertToBus(SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectory* busPtr, trajectory_msgs::JointTrajectory const* msgPtr);

void convertFromBus(trajectory_msgs::JointTrajectoryPoint* msgPtr, SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectoryPoint const* busPtr);
void convertToBus(SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectoryPoint* busPtr, trajectory_msgs::JointTrajectoryPoint const* msgPtr);


#endif
