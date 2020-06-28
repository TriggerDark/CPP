#include <stdio.h>

// ()的优先级最高，算术>关系>逻辑>条件>赋值>逗号

int main(void) {

 #if 0   
    int x, y, z;
    x = y = z = 7;
    printf("x = %d, y= %d, z = %d\n", x, y, z);

    int a, b, c;
    a = (b=5) + (c=7);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
#endif

#if 0
    // % 要求运算的操作数必须是整数
    int a = 10, b = 3;
    int c = a/b;
    float d = a/(float)b;
    printf("%d %f\n", c, d);

    printf("%d\n", a%b);
#endif

#if 0
    int a = 5;
    printf("a++ = %d\n", a++);
    printf("++a = %d\n", ++a);

    int b = 4;
    // a+++b --> (a++) +b

    (a > b) ? printf("a>b\n"):printf("a<b\n");

    // 非零(1)为真，零(0)为假
    printf("a==b = %d\n", a==b);
    printf("a>b = %d\n", a>b);
    printf("a<b = %d\n", a<b);
#endif

    // && || !
    // 与 或 非
    // 参与逻辑表达式的运算，首先转化为逻辑指

    int a = 3, b = 5;

    if (a && b) {
        printf("ab\n");
    }

    if (a == 3 || (b = 16)) {
        printf("a == 3 || (b = 16)\n");
    }
    printf("b=%d\n", b);
    if ((b = 16) || a == 3) {
        printf("(b = 16) || a == 3\n");
    }
    printf("b=%d\n", b);
    return 0;
}