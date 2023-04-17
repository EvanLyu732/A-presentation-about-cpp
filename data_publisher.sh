#!/bin/bash

source /opt/ros/melodic/setup.bash --extend

# publish rate
echo "ready to publish test data, rate 10hz"

loop_time=1;

while true; do
  echo "publish data " ${loop_time}
  rostopic pub -1 /dummy_data std_msgs/Int16 "{data: ${loop_time}}"
  ((loop_time++))
  sleep 0.5
done