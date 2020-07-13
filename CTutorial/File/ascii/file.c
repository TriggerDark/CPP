/*************************************************************************
  >  File  Name  : file.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/13 08:48:53
 ************************************************************************/

#include <stdio.h>

int main(int argc, char **argv) {
    char *p = "abcde";
    // FILE *pf = fopen("ascii.txt", "w");
    // fprintf(pf, "%s", p);

    FILE *pf2 = fopen("ascii.bin", "w");
    fwrite(p, 6, 1, pf2);
    // fclose(pf);
    fclose(pf2);
    return 0;
}
