# sstream/CMakeLists.txt

add_executable(sstream_test sstream_test.cpp)

set_target_properties(sstream_test PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)