# CMakeLists.txt
cmake_minimum_required(VERSION 3.27.0)
project(hello_world_5_cmake)

# 添加需要 编译CMakeList.txt 的子文件夹
add_subdirectory(hello)
add_subdirectory(world)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/world)

target_link_libraries(${PROJECT_NAME} PUBLIC hellolib)
target_link_libraries(${PROJECT_NAME} PUBLIC worldlib)
