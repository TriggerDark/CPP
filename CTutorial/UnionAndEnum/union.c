/*************************************************************************
  >  File  Name  : union.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/10 21:52:24
 ************************************************************************/

#include <stdio.h>

typedef struct _structTest {
    char a;
    short b;
    long double c;
} mystruct;

typedef union _unionTest {
    char a;
    short b;
    long double c;
} myunion;

/**
 * 大小
 * 对于结构体而言，如果不考虑内存对齐，其大小就是所有元素大小之和
 * 对于共用体而言，其大小就是最大元素所占用的空间的大小
 **/

/**
 * 成员变量
 * 对于结构体而言，每个成员均有自己独立的地址
 * 对于结构体，所有成员独有一个地址
 **/

int main(int argc, char** argv) {
    mystruct ms;
    myunion mu;
    printf("sizeof(ms)=%ld\n", sizeof(ms));
    printf("sizeof(mu)=%ld\n", sizeof(mu));

    printf("%p %p %p\n", &ms.a, &ms.b, &ms.c);
    printf("%p %p %p\n", &mu.a, &mu.b, &mu.c);

    return 0;
}
