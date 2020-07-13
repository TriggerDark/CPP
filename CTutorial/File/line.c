/*************************************************************************
  >  File  Name  : line.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/13 22:59:25
 ************************************************************************/

#include <stdio.h>

int main(int argc, char** argv) {
    FILE* pf = fopen("a.txt", "w+");
    fputc('a', pf);
    fputc('\n', pf);
    fputc('b', pf);
    rewind(pf);

    char ch = fgetc(pf);
    printf("%x", ch);
    ch = fgetc(pf);
    printf("%x", ch);
    ch = fgetc(pf);
    printf("%x", ch);
    fclose(pf);
    return 0;
}
