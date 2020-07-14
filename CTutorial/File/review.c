/*************************************************************************
  >  File  Name  : review.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/14 22:01:34
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define N 1024

int main(int argc, char** argv) {
    FILE* pf = fopen("xx.txt", "w+");
    if (NULL == pf) exit(-1);
    // fputs("abcd\n1234567", pf); // 1
    fputs("abcd1234567", pf);  // 2
    rewind(pf);
    char buf[N];
    // fgets(buf, N - 1, pf); // 1 2
    fgets(buf, 4, pf);  // 3
    puts(buf);
    fclose(pf);
    return 0;
}
#if 0
int main(int argc, char** argv) {
    FILE* pf = fopen("xx.txt", "w+");
    if (NULL == pf) exit(-1);

    for (char ch = 'a'; ch <= 'z'; ch++) {
        fputc(ch, pf);
    }
    rewind(pf);
    char ch;
    while ((ch = fgetc(pf)) != EOF && !feof(pf)) {
        putchar(ch);
    }
    fclose(pf);
    return 0;
}
#endif
