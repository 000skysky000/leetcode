cmake_minimum_required(VERSION 3.15)
project(leetcode)

set(CMAKE_CXX_STANDARD 14)
#set(SOURCES src/learncmake/learncmake.cpp src/learncmake/hellofunction.cpp)
add_library(function_library SHARED
        src/library/function.cpp
        )

add_executable(leet main.cpp)
add_executable(704 src/array/704erfenfa.cpp)
add_executable(27 src/array/27yichuyuansu.cpp)
add_executable(799 src/array/799youxusuzhudepingfang.cpp)


add_executable(707 src/linklist/2_707shejilianbiao.cpp src/linklist/main.cpp)
#add_executable(${PROJECT_NAME} ${SOURCES}) #给可执行文件指定编译后文件的名字


#所有源文件要在一起add,缺少函数的源文件则会出现函数无法定义的情况,或者通过链接库的方式把库文件与源文件链接起来
add_executable(${PROJECT_NAME} src/learncmake/learncmake.cpp)


target_link_libraries(${PROJECT_NAME}
        PRIVATE
            function_library
        )


#给可执行文件指明头文件的目录，在可执行文件中添加头文件时可以省略头文件的路径直接写文件名称

target_include_directories(function_library
        PRIVATE
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/include/shared
        )

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/include/shared
        )
