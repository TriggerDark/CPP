/*************************************************************************
  >  File  Name  : swap.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/22 16:51:09
 ************************************************************************/
#include <stdio.h>

// void mySwap(int *pa, int *pb) {
//    int t = *pa;
//    *pa = *pb;
//    *pb = t;
//}

// void mySwap(int *pa, int *pb) {
//    *pa = *pa + *pb;
//    *pb = *pa - *pb;
//    *pa = *pa - *pb;
//}

void mySwap(int *pa, int *pb) {
    *pa ^= *pb;
    *pb ^= *pa;
    *pa ^= *pb;
}

int main() {
    int a = 3, b = 5;
    mySwap(&a, &b);
    printf("a=%d\tb=%d\n", a, b);
    return 0;
}
