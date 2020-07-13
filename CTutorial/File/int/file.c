/*************************************************************************
  >  File  Name  : file.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/13 08:58:09
 ************************************************************************/

#include <stdio.h>

int main(int argc, char** argv) {
    short a = 10000;
    // FILE* pf = fopen("ascii.txt", "w");
    // fprintf(pf, "%d", a);
    FILE* pf2 = fopen("ascii.bin", "w");
    fwrite(&a, 2, 1, pf2);
    // fclose(pf);
    fclose(pf2);
    return 0;
}
