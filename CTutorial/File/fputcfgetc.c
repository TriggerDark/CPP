/*************************************************************************
  >  File  Name  : fputcfgetc.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/13 20:56:04
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

int main() {
    FILE *pf = fopen("xx.txt", "r+");
    P_PRINT_ERROR(pf);
    char ch;
    while ((ch = fgetc(pf)) != EOF) putchar(ch);
    fclose(pf);
    return 0;
}

#if 0
int main(int argc, char** argv) {
    FILE* pf = fopen("xx.txt", "w+");
    P_PRINT_ERROR(pf);

    for (char ch = 'a'; ch <= 'z'; ch++) {
        fputc(ch, pf);
    }

    fclose(pf);
    return 0;
}
#endif
