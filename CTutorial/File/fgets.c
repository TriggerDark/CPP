/*************************************************************************
  >  File  Name  : fgets.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/13 23:59:35
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
    FILE* pf = fopen("data.txt", "r+");
    P_PRINT_ERROR(pf);
    char buf[10];

    while (fgets(buf, 10, pf)) printf("%sx", buf);
    fclose(pf);

    return 0;
}
