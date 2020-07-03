#include <stdio.h>

// 常量指针

int main(void) {
    char a = 1;
    short b = 2;
    int c = 3;
    long long d = 4;
    float f = 1.0;
    double g = 2.0;
    // &a 取地址，本质上是一个4字节的数值，这个数值是有类型的

    printf("&a = %p\n", &a);
    printf("&b = %p\n", &b);
    printf("&c = %p\n", &c);
    printf("&d = %p\n", &d);
    printf("&f = %p\n", &f);
    printf("&g = %p\n", &g);

    printf("*(&a) = %d\n", *(&a));
    printf("*(&b) = %d\n", *(&b));
    printf("*(&c) = %d\n", *(&c));
    printf("*(&d) = %lld\n", *(&d));
    printf("*(&f) = %f\n", *(&f));
    printf("*(&g) = %f\n", *(&g));
}
