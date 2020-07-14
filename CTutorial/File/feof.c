/*************************************************************************
  >  File  Name  : feof.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/13 21:47:19
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define P_PRINT_ERROR(e)          \
    do {                          \
        if (e == NULL) {          \
            printf("open error"); \
            exit(-1);             \
        }                         \
    } while (0)

int main(int argc, char** argv) {
    FILE* pf = fopen("xx.txt", "w+");
    P_PRINT_ERROR(pf);

    for (char ch = 'a'; ch <= 'f'; ch++) {
        putchar(fputc(ch, pf));
    }
    rewind(pf);
    printf("\n===================\n");
    char ch;
    // feof 检测文件结束标志，或为1表示结束，为0表示没有结束
    // 会导致多读一次字符，标志位检测滞后所导致的
    while ((ch = fgetc(pf)) != EOF && !feof(pf)) {
        printf("%x->%c\n", ch, ch);
    }
    // ch = fgetc(pf);
    // while (!feof(pf)) {
    // printf("%x->%c\n", ch, ch);
    // ch = fgetc(pf);
    // }

    fclose(pf);
    return 0;
}
