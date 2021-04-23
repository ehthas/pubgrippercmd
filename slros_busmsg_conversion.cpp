#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_pubgrippercmd_ros_time_Duration and ros::Duration

void convertFromBus(ros::Duration* msgPtr, SL_Bus_pubgrippercmd_ros_time_Duration const* busPtr)
{
  const std::string rosMessageType("ros_time/Duration");

  msgPtr->nsec =  busPtr->Nsec;
  msgPtr->sec =  busPtr->Sec;
}

void convertToBus(SL_Bus_pubgrippercmd_ros_time_Duration* busPtr, ros::Duration const* msgPtr)
{
  const std::string rosMessageType("ros_time/Duration");

  busPtr->Nsec =  msgPtr->nsec;
  busPtr->Sec =  msgPtr->sec;
}


// Conversions between SL_Bus_pubgrippercmd_ros_time_Time and ros::Time

void convertFromBus(ros::Time* msgPtr, SL_Bus_pubgrippercmd_ros_time_Time const* busPtr)
{
  const std::string rosMessageType("ros_time/Time");

  msgPtr->nsec =  busPtr->Nsec;
  msgPtr->sec =  busPtr->Sec;
}

void convertToBus(SL_Bus_pubgrippercmd_ros_time_Time* busPtr, ros::Time const* msgPtr)
{
  const std::string rosMessageType("ros_time/Time");

  busPtr->Nsec =  msgPtr->nsec;
  busPtr->Sec =  msgPtr->sec;
}


// Conversions between SL_Bus_pubgrippercmd_std_msgs_Header and std_msgs::Header

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_pubgrippercmd_std_msgs_Header const* busPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertFromBusVariablePrimitiveArray(msgPtr->frame_id, busPtr->FrameId, busPtr->FrameId_SL_Info);
  msgPtr->seq =  busPtr->Seq;
  convertFromBus(&msgPtr->stamp, &busPtr->Stamp);
}

void convertToBus(SL_Bus_pubgrippercmd_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertToBusVariablePrimitiveArray(busPtr->FrameId, busPtr->FrameId_SL_Info, msgPtr->frame_id, slros::EnabledWarning(rosMessageType, "frame_id"));
  busPtr->Seq =  msgPtr->seq;
  convertToBus(&busPtr->Stamp, &msgPtr->stamp);
}


// Conversions between SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectory and trajectory_msgs::JointTrajectory

void convertFromBus(trajectory_msgs::JointTrajectory* msgPtr, SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectory const* busPtr)
{
  const std::string rosMessageType("trajectory_msgs/JointTrajectory");

  convertFromBus(&msgPtr->header, &busPtr->Header);
  convertFromBusVariableStringArray(msgPtr->joint_names, busPtr->JointNames, busPtr->JointNames_SL_Info);
  convertFromBusVariableNestedArray(msgPtr->points, busPtr->Points, busPtr->Points_SL_Info);
}

void convertToBus(SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectory* busPtr, trajectory_msgs::JointTrajectory const* msgPtr)
{
  const std::string rosMessageType("trajectory_msgs/JointTrajectory");

  convertToBus(&busPtr->Header, &msgPtr->header);
  convertToBusVariableStringArray(busPtr->JointNames, busPtr->JointNames_SL_Info, msgPtr->joint_names, slros::EnabledWarning(rosMessageType, "joint_names"));
  convertToBusVariableNestedArray(busPtr->Points, busPtr->Points_SL_Info, msgPtr->points, slros::EnabledWarning(rosMessageType, "points"));
}


// Conversions between SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectoryPoint and trajectory_msgs::JointTrajectoryPoint

void convertFromBus(trajectory_msgs::JointTrajectoryPoint* msgPtr, SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectoryPoint const* busPtr)
{
  const std::string rosMessageType("trajectory_msgs/JointTrajectoryPoint");

  convertFromBusVariablePrimitiveArray(msgPtr->accelerations, busPtr->Accelerations, busPtr->Accelerations_SL_Info);
  convertFromBusVariablePrimitiveArray(msgPtr->effort, busPtr->Effort, busPtr->Effort_SL_Info);
  convertFromBusVariablePrimitiveArray(msgPtr->positions, busPtr->Positions, busPtr->Positions_SL_Info);
  convertFromBus(&msgPtr->time_from_start, &busPtr->TimeFromStart);
  convertFromBusVariablePrimitiveArray(msgPtr->velocities, busPtr->Velocities, busPtr->Velocities_SL_Info);
}

void convertToBus(SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectoryPoint* busPtr, trajectory_msgs::JointTrajectoryPoint const* msgPtr)
{
  const std::string rosMessageType("trajectory_msgs/JointTrajectoryPoint");

  convertToBusVariablePrimitiveArray(busPtr->Accelerations, busPtr->Accelerations_SL_Info, msgPtr->accelerations, slros::EnabledWarning(rosMessageType, "accelerations"));
  convertToBusVariablePrimitiveArray(busPtr->Effort, busPtr->Effort_SL_Info, msgPtr->effort, slros::EnabledWarning(rosMessageType, "effort"));
  convertToBusVariablePrimitiveArray(busPtr->Positions, busPtr->Positions_SL_Info, msgPtr->positions, slros::EnabledWarning(rosMessageType, "positions"));
  convertToBus(&busPtr->TimeFromStart, &msgPtr->time_from_start);
  convertToBusVariablePrimitiveArray(busPtr->Velocities, busPtr->Velocities_SL_Info, msgPtr->velocities, slros::EnabledWarning(rosMessageType, "velocities"));
}

