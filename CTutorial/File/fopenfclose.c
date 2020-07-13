/*************************************************************************
  >  File  Name  : fopenfclose.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/13 20:49:25
 ************************************************************************/

#include <stdio.h>

int main(int argc, char** argv) {
    FILE* pf = fopen("data.txt", "w");

    for (char ch = 'a'; ch <= 'z'; ch++) {
        fputc(ch, pf);
    }
    fclose(pf);
    return 0;
}
