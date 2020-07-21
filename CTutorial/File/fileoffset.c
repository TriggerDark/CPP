/*************************************************************************
  >  File  Name  : fileoffset.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/21 10:30:59
 ************************************************************************/
#include <stdio.h>

int main(int argcm, char* argv[]) {
    FILE* pf = fopen("xx.txt", "w+");
    fputs("abcdefg", pf);
    int n = ftell(pf);
    printf("n = %d\n", n);
    rewind(pf);
    n = ftell(pf);
    printf("n = %d\n", n);

    rewind(pf);
    fseek(pf, 0, SEEK_END);
    n = ftell(pf);
    printf("n = %d\n", n);

    rewind(pf);
    fseek(pf, 0, SEEK_SET);
    n = ftell(pf);
    printf("n = %d\n", n);

    rewind(pf);
    fseek(pf, 1, SEEK_CUR);
    n = ftell(pf);
    printf("n = %d\n", n);

    fclose(pf);
    return 0;
}

