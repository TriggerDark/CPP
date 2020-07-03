#include <stdio.h>

// *
// 运算符重载
// 由语境决定运算符的属性

int main(void) {
    int data;
    int *pd = &data;  // 用于声名变量
    *pd = 200;        // 解引用 取内容

    char *p, q;
    printf("sizeof(p)=%ld, sizeof(q)=%ld\n", sizeof(p), sizeof(q));

    return 0;
}
