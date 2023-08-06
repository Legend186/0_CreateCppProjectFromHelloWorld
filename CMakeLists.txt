# CMakeLists.txt
cmake_minimum_required(VERSION 3.27.0)
project(hello_world_4_cmake)

add_executable(${PROJECT_NAME} main.cpp hello/hello.cpp world/world.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/world)


