//
// Created by ASUS on 2022/3/4.
//

#include <iostream>
#include <vector>
#include <string>

//在cmake中没有添加 target_include_directories,源文件中加入头文件时需要加入头文件路径否者找不到
//#include "../../include/shared/learnheader.h"
//#include "../../include/shared/function.h"
//在cmake中添加了 target_include_directories,源文件中加入头文件时只需要头文件名称则ok.
#include "function.h"
//#include "learnheader.h"
//void hello();

using namespace std;

int main(){

    hello();
    return 0;

};