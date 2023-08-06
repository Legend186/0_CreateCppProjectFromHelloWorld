# world/CMakeLists.txt
cmake_minimum_required(VERSION 3.27.0)
project(world)

set(WORLD_SRC ${CMAKE_CURRENT_SOURCE_DIR}/world.cpp)

add_library(worldlib SHARED ${WORLD_SRC})