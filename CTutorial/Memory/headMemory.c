/*************************************************************************
  >  File  Name  : headMemory.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/08 10:35:21
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * heap 内存，可以用于申请大空间，需要手动申请与释放
 * malloc()函数是以字节为单位进行申请
 * free()函数释放内存
 **/
void func() {
    char *pa, *pb, *pc, *pd;
    printf("func:\n");
    pa = malloc(100);
    pb = malloc(100);
    pc = malloc(100);
    pd = malloc(100);
    printf("%p\n", pa);
    printf("%p\n", pb);
    printf("%p\n", pc);
    printf("%p\n", pd);
}
int main(int argc, char **argv) {
    char *pa, *pb, *pc, *pd;
    printf("main:\n");
    pa = malloc(100);
    pb = malloc(100);
    pc = malloc(100);
    pd = malloc(100);
    printf("%p\n", pa);
    printf("%p\n", pb);
    printf("%p\n", pc);
    printf("%p\n", pd);

    func();
#if 0
    char* p = (char*)malloc(1024 * 1024 * 1024);
    strcpy(p, "abc");
    printf("over");
    free(p);
#endif
    return 0;
}
