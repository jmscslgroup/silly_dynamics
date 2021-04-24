#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block silly_dynamics/Subscribe
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_silly_dynamics_geometry_msgs_Twist> Sub_silly_dynamics_58;

// For Block silly_dynamics/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_silly_dynamics_geometry_msgs_Twist> Pub_silly_dynamics_57;

void slros_node_init(int argc, char** argv);

#endif
