FROM ros:melodic-ros-core
ENV WORK_FOLDER=/home/demo/
WORKDIR ${WORK_FOLDER}
ADD . ${WORK_FOLDER}

# replace apt source because of cfw.
RUN sudo sed -i 's@//.*archive.ubuntu.com@//mirrors.ustc.edu.cn@g' /etc/apt/sources.list
RUN sudo apt-get -y update && sudo apt-get install -y vim \
    g++ \
    gdb \
    cmake \
    binutils \
    valgrind \
RUN source /opt/ros/melodic/setup.bash --extend

# install gprof



