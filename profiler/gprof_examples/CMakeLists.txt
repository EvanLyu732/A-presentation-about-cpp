find_package(roscpp REQUIRED)

# setting compile flags; for debug experience use -O0 -Og
set(CMAKE_CXX_FLAGS "-O0 - Og")

# setting executable
set(EXECUTABLE ros-calcultor)

add_executable(EXECUTABLE
        main.cpp
)

target_include_directories(EXECUTABLE PRIVATE
        ${roscpp_INCLUDE_DIRS}
)

target_link_libraries(EXECUTABLE PRIVATE
        ${roscpp_LIBRARIES}
)
