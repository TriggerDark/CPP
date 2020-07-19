/*************************************************************************
  >  File  Name  : fgetsfeof.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/16 10:54:27
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    FILE* pf = fopen("xx.txt", "w+");
    if (NULL == pf) exit(-1);
    fputs("aaaaaaaaaaaaa\n", pf);
    fputs("bbbbbbbbbbbbb\n", pf);
    fputs("ccccccccccccc\n", pf);
    fputs("ddddddddddddddd", pf);
    rewind(pf);
    char buf[1024];
    // while (fgets(buf, 1024, pf)) { // 1
    while (fgets(buf, 1024, pf) && !feof(pf)) { // 2 如果最后一行没有'\n'，则少读一行
        printf("%s", buf);
    }
    fclose(pf);
    return 0;
}
