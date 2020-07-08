/*************************************************************************
  >  File  Name  : whyStruct.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/08 20:10:50
 ************************************************************************/

#include <stdio.h>

int main(int argc, char** argv) {
    // 处理由不同类型成员构成的构造类型，要采用结构体的方式
    struct student {
        char name[30];
        int age;
    };
    return 0;
}
