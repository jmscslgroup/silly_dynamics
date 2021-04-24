#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "silly_dynamics";

// For Block silly_dynamics/Subscribe
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_silly_dynamics_geometry_msgs_Twist> Sub_silly_dynamics_58;

// For Block silly_dynamics/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_silly_dynamics_geometry_msgs_Twist> Pub_silly_dynamics_57;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

