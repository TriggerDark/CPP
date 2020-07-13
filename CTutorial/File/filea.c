/*************************************************************************
  >  File  Name  : filea.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/13 20:24:36
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// a 如果文件不存在，则创建;如果文件存在，追加写;文件不可读

int main(int argc, char** argv) {
    FILE* pf = fopen("xx.txt", "a");
    if (pf == NULL) {
        printf("open error\n");
        exit(-1);
    }
    fputs("zzzzzz\n", pf);

    char ch = fgetc(pf);
    if (ch == EOF) {
        printf("read error");
        exit(-1);
    }

    return 0;
}
