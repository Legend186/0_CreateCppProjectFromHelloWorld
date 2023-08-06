# CMakeLists.txt
cmake_minimum_required(VERSION 3.27.0)
project(hello_world_6_gtest)

# 开启测试用例，让cmake支持测试
enable_testing()

set(HELLO_WORLD_PROJECT_ROOT ${CMAKE_CURRENT_SOURCE_DIR})

# 添加需要 编译CMakeList.txt 的子文件夹
add_subdirectory(hello)
add_subdirectory(world)

add_executable(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/world)

target_link_libraries(${PROJECT_NAME} PUBLIC hellolib)
target_link_libraries(${PROJECT_NAME} PUBLIC worldlib)

# 将 tests 目录添加到项目中
add_subdirectory(tests)