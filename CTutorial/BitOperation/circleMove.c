/*************************************************************************
  >  File  Name  : circleMove.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/22 16:36:11
 ************************************************************************/

#include <stdio.h>

// 避免了右移补1的问题
void circleMove(unsigned int *pa, int n) {
    int m = n > 0 ? n : -n;
    n %= 32;

    if (n > 0) {
        // 左移逻辑
        *pa = ((*pa << n) | (*pa >> (sizeof(*pa) * 8 - n)));
    } else {
        // 右移逻辑
        *pa = ((*pa >> (-n)) | (*pa << (sizeof(*pa) * 8 - (-n))));
    }
}

void dis32bin(int data) {
    int i = 32;
    while (i--) {
        if (data & (1 << i))
            printf("1");
        else
            printf("0");

        if (i % 4 == 0) {
            if (i % 8 == 0)
                printf(" ");
            else
                printf("-");
        }
    }
    putchar(10);
}

int main() {
    int a = 0x80000001;  // 100....001
    dis32bin(a);
    circleMove(&a, 1);
    dis32bin(a);
    return 0;
}
