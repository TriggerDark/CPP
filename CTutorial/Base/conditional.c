#include <stdio.h>

int main(void) {

    int a = 3, b = 5;

#if 0
    // 三目运算符
    printf("%d\n", a>b ? a+100 : b+100);
    printf("%d\n", a>b ? a : (b>a ? 3 : 5));
#endif

    // 逗号表达式，顺序求值运算符
    // 逗号表达式的值，等于，最后一个表达式的值
    a = (a+b, a-b, a*b, a/b);
    printf("%d\n", a);
    printf("%d%d%d\n", (a, b, 100), b, 12);

    int res = sizeof a;
    printf("res = %d\n", res);

    printf("%ld\n", sizeof(a+b));
    printf("%ld\n", sizeof a + b);

    return 0;
}