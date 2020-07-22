/*************************************************************************
  >  File  Name  : conditionCompile.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/22 21:41:15
 ************************************************************************/

#include <stdio.h>

#define X86     1
#define MIPS    2
#define POWERPC 3

#define MACHINE X86
// 条件编译，依据条件决定是否参与编译
// #if #else #endif
// #ifdef #ifndef #else #endif

// #if #elif #endif

int main(int argc, char** argv) {
#if MACHINE == X86
    printf("hello, world\n");
    printf("hello, world\n");
#elif MACHINE == MIPS
    printf("hello, world\n");
    printf("hello, world\n");
    printf("hello, world\n");
#endif
    return 0;
}
