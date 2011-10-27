cmake_minimum_required(VERSION 2.6)

project(test)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(gtest)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(unit_test unit.cc)
target_link_libraries(unit_test libclang gtest_fused)


