#include <stdio.h>

// 一维数组的逻辑和存储是一致的，均为线性的
// 二维数组的逻辑是二维的，但是其存储是线性的

// 数组在内存中是一段连续的存储空间

// 存储是线性的原因是：内存物理特性决定的。

int main(void) {
    int a[3][4];
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            printf("%p", &a[i][j]);
            putchar(10);
        }
        putchar(10);
    }
    return 0;
}
#if 0
0x7ffe3c103b70
0x7ffe3c103b74
0x7ffe3c103b78
0x7ffe3c103b7c

0x7ffe3c103b80
0x7ffe3c103b84
0x7ffe3c103b88
0x7ffe3c103b8c

0x7ffe3c103b90
0x7ffe3c103b94
0x7ffe3c103b98
0x7ffe3c103b9c
#endif