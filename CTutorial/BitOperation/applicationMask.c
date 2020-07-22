/*************************************************************************
  >  File  Name  : applicationMask.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/22 11:53:47
 ************************************************************************/

#include <stdio.h>

int main() {
    int a = 0x55;
    a >>= 3;
    int mask = 0x0f;
    a &= mask;
    printf("a=%d\n", a);
}

int main1() {
    // 0101 0101
    // 0111 1000
    // 0101 0000
    int a = 0x55;
    printf("a=%d\n", a);

    int mask = 1 << 3 | 1 << 4 | 1 << 5 | 1 << 6;
    a &= mask;
    a >>= 3;
    printf("a=%d\n", a);
    return 0;
}

