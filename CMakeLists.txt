cmake_minimum_required(VERSION 3.15)
project(leetcode)

set(CMAKE_CXX_STANDARD 14)


#学习leetcode

add_executable(leetcode main.cpp)
add_executable(704 src/array/704erfenfa.cpp)
add_executable(27 src/array/27yichuyuansu.cpp)
add_executable(799 src/array/799youxusuzhudepingfang.cpp)


#学习Cmake
####################添加静态库文件######################################################
add_library(hello_library STATIC
        src/learncmake/hellofunction.cpp
        )
#将目录加入到使用静态文库文件的源程序中（链接库文件的源程序包含此目录）
target_include_directories(hello_library
        PUBLIC
        #PUBLIC库文件和连接到库文件的目标文件都包含了此目录
        #INTERFACE 只有链接到库的目标文件才包含了这个目录
        #PRIVATE   只有库文件本身使用到了这个目录
        ${PROJECT_SOURCE_DIR}/include
        )
# 添加可执行文件
add_executable(learncmake
        src/learncmake/learncmake.cpp
        )
# 链接静态库到可执行文件
target_link_libraries( learncmake
        PRIVATE
            hello_library
)

####################添加动态库文件##########################################################