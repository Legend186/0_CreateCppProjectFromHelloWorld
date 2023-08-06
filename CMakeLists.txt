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

# 将 gtest 添加到项目中，因googletest也是采用CMakeLists.txt编译的，故可像引入hello一样引入googletest
add_subdirectory(thirdpart/googletest)

