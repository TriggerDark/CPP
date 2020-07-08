/*************************************************************************
  >  File  Name  : openMemAddress.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/08 18:24:23
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(char *p) { printf("func %s\n", p); }
void foo(char *p) { printf("foo %s\n", p); }

int main(int argc, char **argv) {
    char *p = (char *)malloc(100);
    strcpy(p, "abdahf");
    func(p);
    foo(p);
    printf("main %s\n", p);
    return 0;
}
