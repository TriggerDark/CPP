/*************************************************************************
  >  File  Name  : storageDiscription.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/06 11:37:20
 ************************************************************************/

#include <stdio.h>

/**
 * auto 只能用于修饰局部变量，表示该变量存储于栈stack
 * 存储于栈上的数：随用随开，用完消失
 * 默认的局部变量，就是auto类型的，所以通常将其省略
 * C++ auto
 *
 * register
 *
 *
 **/
extern int a;
int main(int argc, char** argv) {
    printf("%d\n", a);
    auto int a;
    return 0;
}
