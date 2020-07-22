/*************************************************************************
  >  File  Name  : disbin.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/22 10:43:41
 ************************************************************************/

#include <stdio.h>

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

// 跟1按位与（&）保持不变，跟0按位与清零。在某些位保持不变的情况下，某些清零

int main1(int argc, char *argv[]) {
    //    int a = 3;
    //    int b = 11;
    //    dis32bin(a);
    //    dis32bin(b);
    //    dis32bin(a&b);
    //    int c = a&b;
    //    printf("c=%d\n", c);

    int a = 0x5;
    //    int b = 0xff;
    //    int b = 0;
    int b = 0x0f;
    dis32bin(a);
    dis32bin(b);

    dis32bin(a & b);

    return 0;
}

// 跟1按位或（|）置1，跟零按位或保持不变。在某些位保持不变的情况下，某些置1。

int main2(int argc, char *argv[]) {
    int a = 3;
    int b = 9;
    dis32bin(a);
    dis32bin(b);
    dis32bin(a | b);
    return 0;
}

// ~ 按位取反，用于间接构造某些数据

int main3(int argc, char *argv[]) {
    int a = 0x55;
    dis32bin(a);
    dis32bin(~a);

    dis32bin(0);
    dis32bin(~0);
    return 0;
}

// ^ 跟1按位异或取反，跟0按位异或保持不变。在某些位不变的情况下，某些取反

int main(int argc, char *argv[]) {
    int a = 0x55;
    dis32bin(a);
    int b = 0xff;
    dis32bin(b);

    dis32bin(a ^ b);
    return 0;
}
