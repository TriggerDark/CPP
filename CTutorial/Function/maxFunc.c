#include <stdio.h>

// 在函数调用的时候，输入的参数，叫实参
// 在函数定义或者声明时的参数，叫形参。声明中的形参可以省略

// 定义在前，调用在后
int myMax(int i, int j) {
    // if (i>j)
    //     return i;
    // else
    //     return j;
    return i > j ? i : j;
}

// 定义在后，调用在前，此时需要前向声明
// 函数有一个特点，先声明后使用
int myMin(int, int);

// 入参中如果没有参数，可以使用void表示无入参，通常省略
// 如果没有返回值，即返回类型是void，void不可省，若省略，默认返回值为int
// int* func(void);
// func();
int main(void) {
    int a = 3, b = 5;
    int iMax = myMax(a, b);
    int iMin = myMin(a, b);
    printf("In %d and %d, max is %d\n", a, b, iMax);
    printf("In %d and %d, min is %d\n", a, b, iMin);
    return 0;
}

int myMin(int i, int j) { return i < j ? i : j; }

