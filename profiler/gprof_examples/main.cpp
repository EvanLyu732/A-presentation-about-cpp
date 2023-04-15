#include <ros/ros.h>

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


int main(int argc, char** argv) {
    ros::init(argc, argv, "sample_node", ros::init_options::NoRosout);

}