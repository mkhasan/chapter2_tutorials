/*
 * example2_a.cpp
 *
 *  Created on: May 20, 2018
 *      Author: usrc
 */



#include "ros/ros.h"
#include "chapter2_tutorials/chapter2_srv1.h"
#include <sstream>


bool add(chapter2_tutorials::chapter2_srv1::Request &req, chapter2_tutorials::chapter2_srv1::Response &resp) {
	return true;
}
int main(int argc, char **argv) {
	ros::init(argc, argv, "add_3_ints_server");
	ros::NodeHandle n;

	ros::ServiceServer service = n.advertiseService("add_3_ints", add);


	ROS_INFO("Ready to add 3 ints.");
	ros::spin();


	return 0;
}



