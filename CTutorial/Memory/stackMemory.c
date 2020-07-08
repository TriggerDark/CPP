/*************************************************************************
  >  File  Name  : stackMemory.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/08 10:50:37
 ************************************************************************/

#include <stdio.h>
/**
 * 栈空间是用于交换数据，而不是用于大空间的申请
 * 栈的发展方向
 * 堆空间主要用于大内存的申请使用
 **/

void func() {
    int a, b, c, d;
    printf("func:\n");
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);
}

int main(int argc, char** argv) {
    printf("stackMemory\n");
    printf("main:\n");
    int a, b, c, d;
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);
    func();
    return 0;
}
