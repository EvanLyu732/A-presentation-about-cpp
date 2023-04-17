find_package(roscpp REQUIRED)
find_package(std_msgs REQUIRED)

# setting compile flags
set(CMAKE_CXX_FLAGS "-O0 -g -pg")

# setting executable
set(EXECUTABLE ros-calcultor)

add_executable(${EXECUTABLE}
        main.cpp
)

target_include_directories(${EXECUTABLE} PRIVATE
        ${roscpp_INCLUDE_DIRS}
        ${std_msgs_INCLUDE_DIRS}
)

target_link_libraries(${EXECUTABLE} PRIVATE
        ${roscpp_LIBRARIES}
)
