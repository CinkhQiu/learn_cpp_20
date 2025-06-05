cmake_minimum_required(VERSION 3.20)

project(MyFormatDemo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(format_test format_test.cpp)

# 设置输出目录为 ./build/bin
set_target_properties(format_test PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)