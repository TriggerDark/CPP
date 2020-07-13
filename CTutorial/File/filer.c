/*************************************************************************
  >  File  Name  : file.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/13 19:36:58
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// r 以只读的方式打开，如果文件不存在，则报错，文件不可写

int main(int argc, char** argv) {
    FILE* pf = fopen("aa.txt", "r");
    if (NULL == pf) {
        printf("error");
        exit(-1);
    }
    return 0;
}
