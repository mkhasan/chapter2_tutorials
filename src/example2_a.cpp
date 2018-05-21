/*
 * example1_a.cpp
 *
 *  Created on: May 11, 2018
 *      Author: usrc
 */

#include "ros/ros.h"
#include "std_msgs/String.h"
#include "chapter2_tutorials/chapter2_msg1.h"
#include <sstream>

int main(int argc, char **argv) {
	ros::init(argc, argv, "example1_a");
	ros::NodeHandle n;
	ros::Publisher chatter_pub = n.advertise<chapter2_tutorials::chapter2_msg1>("message", 1000);
	ros::Rate loop_rate(10);

	while (ros::ok()) {
		std_msgs::String msg;
		chapter2_tutorials::chapter2_msg1 msg1;

		std::stringstream ss;
		ss << " I am the example1_a node ";
		msg.data = ss.str();
		//ROS_INFO("%s", msg.data.c_str());
		msg1.A = 10;
		msg1.B = 100;
		msg1.C = 101;
		chatter_pub.publish(msg1);
		ros::spinOnce();
		loop_rate.sleep();
	}

	return 0;
}


