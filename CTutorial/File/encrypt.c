/*************************************************************************
  >  File  Name  : encrypt.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/13 22:37:44
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

#define CODE 10

int main(){
    FILE *pfSrc = fopen("encrypt.code", "r+");
    P_PRINT_ERROR(pfSrc);
    FILE *pfDes = fopen("encrypt.decode", "w+");
    P_PRINT_ERROR(pfDes);

    char ch;
    while ((ch = fgetc(pfSrc)) != EOF) {
        ch -= CODE;
        fputc(ch, pfDes);
    }

    fclose(pfDes);
    fclose(pfSrc);

    return 0;
}

int mainCode(int argc, char **argv) {
    FILE *pfSrc = fopen("encrypt.c", "r+");
    P_PRINT_ERROR(pfSrc);
    FILE *pfDes = fopen("encrypt.code", "w+");
    P_PRINT_ERROR(pfDes);

    char ch;
    while ((ch = fgetc(pfSrc)) != EOF) {
        ch += CODE;
        fputc(ch, pfDes);
    }

    fclose(pfDes);
    fclose(pfSrc);
    return 0;
}
