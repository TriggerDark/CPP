/*************************************************************************
  >  File  Name  : isNULL.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/08 18:03:52
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 申请，判空，使用/释放(配对使用)，置空
int main(int argc, char** argv) {
    char* pc = (char*)malloc(100);  // 申请
    if (pc == NULL) {               // 判空
        printf("error\n");
        exit(-1);
    }
    strcpy(pc, "abcdef");  // 使用
    free(pc);              // 释放
    pc = NULL;             // 置空
    return 0;
}
