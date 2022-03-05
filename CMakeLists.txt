cmake_minimum_required(VERSION 3.15)
project(leetcode)

set(CMAKE_CXX_STANDARD 14)

add_executable(leetcode main.cpp)
add_executable(704 src/array/704erfenfa.cpp)
add_executable(27 src/array/27yichuyuansu.cpp)
add_executable(799 src/array/799youxusuzhudepingfang.cpp)
add_executable(learnheader src/learncmake/learncmake.cpp)

#s for test git