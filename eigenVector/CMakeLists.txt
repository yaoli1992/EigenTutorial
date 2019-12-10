cmake_minimum_required(VERSION 2.8)
project(eigenVector)

set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS "-O3")

# 添加Eigen头文件  这里对该库进行一个说明eigen是一个没有cpp的文件，所以这里我们直接将eigen所在文件包含进来即可

include_directories("../eigen3")

add_executable(eigenVector eigenVector.cpp)
