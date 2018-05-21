/*
 * example1_b.cpp
 *
 *  Created on: May 11, 2018
 *      Author: usrc
 */




#include "ros/ros.h"
#include "std_msgs/String.h"
#include "chapter2_tutorials/chapter2_msg1.h"

#include "util.h"

using namespace MY_LIB;

void chatterCallback(const chapter2_tutorials::chapter2_msg1::ConstPtr & msg1) {
	//ROS_INFO("I heard : [%s]", msg->data.c_str());

	ROS_INFO("A : [%d], B : [%d], C : [%d]", msg1->A, msg1->B, msg1->C);

	//msg = (std_msgs::String::Ptr) 0;
	//TestPrint();

}

int main(int argc, char **argv) {
	ros::init(argc, argv, "example1_b");
	ros::NodeHandle n;
	ros::Subscriber sub = n.subscribe("message", 1000, chatterCallback);
	ros::spin();
	return 0;

}


