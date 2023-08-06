/*
filename：main.h
content：定义 main 函数
author：Legend186
version：v1.0
*/

#include "hello/hello.h"
#include "world.h"
/*
此处未指明world.h所在的目录 #include "world/world.h" ，会导致编译时找不到world.h
补救措施：
1.g++编译时-I参数的使用
2.使用cmake工具编写CMakefileLists.txt时add_include_directory()的使用
*/

int main()
{
    Hello();
    World();
    
    return 0;
}