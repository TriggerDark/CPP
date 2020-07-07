/*************************************************************************
  >  File  Name  : argcArgv.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/07 18:38:35
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
// 在启动进程，通过命令行，传递给进程的参数，即传递main的参数
// arg argument 参数 c count 个数的意思 argc 参数的个数
// argv arg 指针数   v vector 指针向量  指针数组向量

int main(int argc, char** argv) {
    int num = atoi(argv[1]);
    for (int i=0; i<num;i++){
        printf("======\n");
    }

#if 0
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
#endif
    return 0;
}
