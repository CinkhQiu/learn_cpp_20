# format/CMakeLists.txt

add_executable(containers containers.cpp)
add_executable(format_test format_test.cpp)
add_executable(eigen_demo eigen_demo.cpp)
add_executable(eigen_dynamic_demo eigen_dynamic_demo.cpp)

# 添加 Eigen 头文件路径（相对于顶层）
target_include_directories(eigen_demo PRIVATE ${CMAKE_SOURCE_DIR}/Eigen)
target_include_directories(eigen_dynamic_demo PRIVATE ${CMAKE_SOURCE_DIR}/Eigen)

# 设置统一的输出目录（由顶层定义 ${CMAKE_BINARY_DIR}/bin）
foreach(target IN LISTS
    containers
    format_test
    eigen_demo
    eigen_dynamic_demo
)
    set_target_properties(${target} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
    )
endforeach()