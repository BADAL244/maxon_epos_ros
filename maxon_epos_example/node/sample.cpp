/**
 * @file   sample
 * @brief  
 * @author arwtyxouymz
 * @date   2019-06-05 23:51:24
 */

#include <ros/ros.h>
#include <std_msgs/Float32MultiArray.h>

int main(int argc, char** argv)
{
    ros::init(argc, argv, "maxon_bringup");
    ros::NodeHandle nh("~");
    ros::NodeHandle motor_nh(nh, "test_motor");

    ros::Publisher pub = motor_nh.advertise<std_msgs::Float32MultiArray>("all_position", 1000);
    std_msgs::Float32MultiArray msg = std_msgs::Float32MultiArray();
    msg.data.push_back(300000);
    msg.data.push_back(-200000);
    pub.publish(msg);
    pub.publish(msg);
    pub.publish(msg);
    
    // ros::Rate sleep_rate(50);
    // while (ros::ok()) {
    //     pub.publish(msg);
    //     sleep_rate.sleep();
    // }
    
    return 0;
}
