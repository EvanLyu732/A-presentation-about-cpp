# setting compile flags
set(CMAKE_CXX_FLAGS "-O0 -g")

# for better llvm tools experiences
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(error_code
        main.cpp
)