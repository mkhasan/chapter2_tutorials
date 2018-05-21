/*
 * example1_b.cpp
 *
 *  Created on: May 11, 2018
 *      Author: usrc
 */




#include "ros/ros.h"
#include "std_msgs/String.h"

#include "util.h"

using namespace MY_LIB;

void chatterCallback(const std_msgs::String::ConstPtr & msg) {
	ROS_INFO("I heard : [%s]", msg->data.c_str());


	//msg = (std_msgs::String::Ptr) 0;
	TestPrint();

}

int main(int argc, char **argv) {
	ros::init(argc, argv, "example1_b");
	ros::NodeHandle n;
	ros::Subscriber sub = n.subscribe("message", 1000, chatterCallback);
	ros::spin();
	return 0;

}


