/*************************************************************************
  >  File  Name  : shift.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/22 11:09:58
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

// << 高位溢出，低位补零
// 移位大于32位出现什么情况？
// 位数为非负整数,且默认对32求余
// 左移在不溢出的情况下，每左移一位等价于乘2

int main1(int argc, char *argv[]) {
    //    int a = 0x01;
    //    dis32bin(a);
    //    dis32bin(a<<0);
    //    dis32bin(a<<1);
    //    dis32bin(a<<2);
    //    dis32bin(((a<<31) + 1) << 1);

    //    int a = 0x01;
    //    dis32bin(a);
    //    dis32bin(a<<31);
    //    dis32bin(a<<32);
    //    dis32bin(a<<33);
    //    dis32bin(a<<34);

    int a = 0xff000000;
    dis32bin(a);
    //    dis32bin(a<<0);
    //    dis32bin(a<<1);
    //    dis32bin(a<<2);
    //    dis32bin(a<<3);

    dis32bin(a << 32);
    dis32bin(a << 33);
    dis32bin(a << 34);
    dis32bin(a << 35);
    return 0;
}

// 右移，低位舍弃
// 高位 无符号的数，有符号的正数  补0
// 有符号数中的负数，高位补0,逻辑右移，补1,算数右移

int main2(int argc, char *argv[]) {
    //    int a = 0x55;
    //    dis32bin(a);
    //    dis32bin(a>>4);

    int a = 0x800000f0;
    dis32bin(a);
    dis32bin(a >> 4);
    return 0;
}

int main(int argc, char *argv[]) {
    int a = 1;
    printf("%d\n", a);
    printf("%d\n", a << 1);
    printf("%d\n", a << 2);
    return 0;
}
