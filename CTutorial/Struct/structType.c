/*************************************************************************
  >  File  Name  : structType.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/08 20:22:18
 ************************************************************************/

#include <stdio.h>

// 无名结构体 一般而言用于，定义类型同时，定义变量并且不会带来多余的命名
// 给结构体取个名字，有名结构体，一处定义，随处使用
// typedef 是一个常用于对结构体取别名的关键字，更好用的结构体
struct stu {
    char name[30];
    int num;
    char age;
    float score;
} s0;

int main(int argc, char** argv) {
    struct stu s1;
    return 0;
}
