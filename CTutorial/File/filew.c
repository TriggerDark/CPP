/*************************************************************************
  >  File  Name  : filew.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/13 20:33:00
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// w 如果文件不存在，则创建;如果文件存在，清空文件内容;文件不可读

int main(int argc, char** argv) {
    FILE* pf = fopen("bb.txt", "w");
    if (pf == NULL) {
        printf("write error");
        exit(-1);
    }
    return 0;
}
