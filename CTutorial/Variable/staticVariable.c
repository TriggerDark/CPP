/*************************************************************************
  >  File  Name  : staticVariable.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/06 20:44:56
 ************************************************************************/

#include <stdio.h>

/**
 * static修饰局部变量，默认初始化为0
 * auto修饰的局部变量，存储在栈上，随用随开，用完即消
 * static修饰的局部变量，data，生命周期等同于进程
 * static变量的初始化，只执行一次。
 *
 * 控制执行次数，记录打印某函数的调用次数
 *
 **/

/**
 * 全局变量，会带来命名污染，全局可用，避免传参
 * 一个全局变量，天然的拥有外延性，可以被其他的文件所引用，extern
 * static 修饰全局变量以后，外延性消失，变成本文件内部的全局变量
 * 也适用与函数
 **/

static int mm = 10;
static void func() {}
int main(void) { return 0; }

#if 0
void print(int num, int age, char sex, float score) {
    static int flag = 1;
    if (flag == 1) {
        printf("num\tage\tsex\tscore\tidx\n");
        flag = 0;
    }
    static int count = 0;
    printf("%d\t%d\t%c\t%2f\t%d\n", num, age, sex, score, ++count);
}

int main(void) {
    print(1001, 21, 'x', 99);
    print(1001, 21, 'x', 99);
    print(1001, 21, 'x', 99);
    print(1001, 21, 'x', 99);
    print(1001, 21, 'x', 99);
}
#endif

#if 0
void func() {
    int a = 1;
    printf("a=%d\n", a++);

    static int b = 1;
    printf("b=%d\n", b++);

    printf("+++++++++++\n");
}

int main(int argc, char** argv) {
    for (int i = 0; i < 10; i++) {
        func();
    }
    return 0;
}
#endif
