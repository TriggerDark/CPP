/*************************************************************************
  >  File  Name  : structArg.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/10 14:37:40
 ************************************************************************/

#include <stdio.h>

// 推荐结构体指针

typedef struct Complex {
    float real;
    float image;
} Complex;

// 要实现一个函数，实现两个复数相加

Complex addComplex(Complex *px, Complex *py) {
    Complex t;
    t.real = px->real + py->real;
    t.image = px->image + py->image;
    return t;
}

int main(int argc, char **argv) {
    Complex c1 = {1, 2};
    Complex c2 = {3, 4};
    Complex retc = addComplex(&c1, &c2);
    printf("%.2f, %.2f", retc.real, retc.image);
    return 0;
}
