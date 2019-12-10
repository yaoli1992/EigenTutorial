cmake_minimum_required(VERSION 3.5)
project(CurveFitting)

set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS "-std=c++11")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -Wall -g")


include_directories(
   ${PROEJECT_SOURCE_DIR}
#   "/usr/include/eigen3"
     "../eigen3"
)


ADD_LIBRARY(MyLib SHARED
    vertex.cpp
    edge.cpp
    problem.cpp
    loss_function.cpp
    )

#target_link_libraries(MyLib )


add_executable(testCurveFitting CurveFitting.cpp)
target_link_libraries(testCurveFitting MyLib)
