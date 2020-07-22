/*************************************************************************
  >  File  Name  : mask.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/22 11:40:27
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

int main(int argc, char *argv[]) {
    // 0101 0101
    // 0001 0000
    int ch = 0x55;
    int mask = 1 << 4;
    dis32bin(ch & mask);

    if (ch & mask)
        printf("1");
    else
        printf("0");

    return 0;
}

int main4(int argc, char *argv[]) {
    int ch = 0x55;
    int mask = (1 << 5) | (1 << 4) | (1 << 3) | (1 << 2);
    dis32bin(ch);
    ch ^= mask;
    dis32bin(mask);
    dis32bin(ch);

    return 0;
}

int main3(int argc, char *argv[]) {
    char ch = 0x55;
    int mask = ~((1 << 4) | (1 << 2));
    dis32bin(ch);
    ch &= mask;
    dis32bin(ch);
    return 0;
}

int main2(int argc, char *argv[]) {
    char ch = 0x55;
    dis32bin(ch);
    int mask = ~(1 << 4);
    dis32bin(ch & mask);
    return 0;
}

int main1(int argc, char *argv[]) {
    char ch = 0x55;
    char mask = 1 << 3;
    dis32bin(ch);
    dis32bin(mask);
    dis32bin(ch | mask);
    return 0;
}
