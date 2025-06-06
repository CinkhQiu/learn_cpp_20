cmake_minimum_required(VERSION 3.20)

project(MyFormatDemo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(containers containers.cpp)
add_executable(format_test format_test.cpp)
add_executable(eigen_demo eigen_demo.cpp)
add_executable(eigen_dynamic_demo eigen_dynamic_demo.cpp)

# 给 eigen_demo 目标添加头文件路径
target_include_directories(eigen_demo PRIVATE ${CMAKE_SOURCE_DIR}/Eigen)

# 给 eigen_dynamic_demo 目标添加头文件路径
target_include_directories(eigen_dynamic_demo PRIVATE ${CMAKE_SOURCE_DIR}/Eigen)

# 设置输出目录为 ./build/bin
set_target_properties(containers PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

set_target_properties(format_test PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

set_target_properties(eigen_demo PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

set_target_properties(eigen_dynamic_demo PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
