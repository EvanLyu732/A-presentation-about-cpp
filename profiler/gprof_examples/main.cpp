#include <ros/ros.h>
#include <std_msgs/Int16.h>

/*
 *  DataPipeLine:
 *           when data in ---> do a dummy function [ x ^ 2 + (x -2) +  (x / 2)]
 */

int square_calculate(const int val) {
    return (val * 2);
}

int minus_two_calculate(const int val) {
    return (val - 2);
}

int divide_two_calculate(const int val) {
    return (val / 2);
}

void callback(const std_msgs::Int16ConstPtr& msg) {
    auto val = msg->data;
    // step 1:
    auto sqaure_part_val = square_calculate(val);
    auto minus_two_val = minus_two_calculate(val);
    auto divide_two_val = divide_two_calculate(val);

    auto final_val = sqaure_part_val + minus_two_val + divide_two_val;
    ROS_INFO("the val is %d, after calculation is %d", val, final_val);
    return;
}


int main(int argc, char** argv) {
    ros::init(argc, argv, "sample_node", ros::init_options::NoRosout);
    ros::NodeHandle nh;
    auto sub = nh.subscribe("dummy_data", 1, callback);
    ros::spin();
    return (EXIT_SUCCESS);
}