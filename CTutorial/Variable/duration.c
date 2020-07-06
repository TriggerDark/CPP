/*************************************************************************
  >  File  Name  : duration.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/06 11:18:50
 ************************************************************************/

#include <stdio.h>

/**
 * 函数的生命周期，起于调用，结束于调用结束
 * 局部变量的生命周期，起于调用，结束于调用结束
 *
 * main函数开始 = 进程开始
 * main函数结束 = 进程结束
 *
 * 全局变量的生命周期，其余main调用，结束于main调用结束 = 程序的生命周期
 **/

int a = 500;

void foo() { printf("foo a=%d\n", a); }

void func() {
    printf("func a=%d\n", a);
    int a;
}

int main(int argc, char** argv) {
    printf("main a=%d\n", a);
    int a;
    func();
    foo();
    return 0;
}
