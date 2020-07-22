/*************************************************************************
  >  File  Name  : doubleSharp.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/22 22:42:17
 ************************************************************************/

#include<stdio.h>

#define S(a, b) a##a+b##b  // 11+33
#define X(n) x##n

int main(int argc, char** argv) {
    int X(1) = 10;
    int X(2) = 20;
    printf("x1=%d x2=%d", x1, x2);
    // printf("%d\n", S(1, 3));
    return 0;
}
