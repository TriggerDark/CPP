/*************************************************************************
  >  File  Name  : mySwap.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/05 09:42:41
 ************************************************************************/

#include <stdio.h>

void mySwap(int*, int*);

int main(int argc, char** argv) {
    int a = 3, b = 5;
    printf("a=%d b=%d\n", a, b);
    mySwap(&a, &b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}

void mySwap(int* a, int* b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
