
project(NNVM)
cmake_minimum_required(VERSION 2.8)


add_subdirectory(llvm)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/build/llvm/include
                    ${CMAKE_CURRENT_SOURCE_DIR}/build/llvm/tools/clang/include
                    ${CMAKE_CURRENT_SOURCE_DIR}/llvm/tools/clang/include
                    ${CMAKE_CURRENT_SOURCE_DIR}/llvm/include)

add_subdirectory(test)



