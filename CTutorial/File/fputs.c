/*************************************************************************
  >  File  Name  : fputs.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/13 23:16:57
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

/**
 * 在去读n-1个字符前遇到了\n，连同\n一并读进
 * 在去读n-1个字符前既没有遇见\n，也没有遇见EOF，此时就读到了n-1个字符，并在其后添加了\0
 * 在去读n-1，没有遇见\n，遇见了EOF，并在其后添加了\0
 **/

int main() {
    FILE* pf = fopen("xx.txt", "r");
    P_PRINT_ERROR(pf);

    char buf[1024];
    fgets(buf, 2, pf);
    printf("buf=%s\n", buf);
    fclose(pf);
    return 0;
}

int main1(int argc, char** argv) {
    FILE* pf = fopen("xx.txt", "w");
    P_PRINT_ERROR(pf);
    fputs("aaa\naaaaaaa\n", pf);
    fputs("llllllllll\n", pf);
    fclose(pf);
    return 0;
}
