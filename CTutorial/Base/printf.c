#include <stdio.h>

// "a = %d\n" 
// 格式字符，非格式字符
// 列中的待输出项一一对应（数量/类型）
// 非格式字符原样输出
int main(void) {

#if 0
    int a = 10;
    printf("a = %d\n", a);
    printf("a = %o\n", a);
    float b = 10.0;
    printf("b = %f\n", b);

    char ch = 'a';
    printf("c = %c\n", ch);
#endif 

#if 0
    // 输出宽度的时候，当实际长度大于给定宽度，原样输出
    // 当实际长度小于给定宽度，前方补空格，右对齐
    printf("%10d\n", 100);
    printf("%-10d\n", 100);
    printf("%+10d\n", 100);
    printf("%-+10d\n", 100);
    printf("%010d\n", 100);
#endif

#if 0
    printf("%#x \n", 10);
    printf("%.3f \n", 10.12345678);
    printf("%.10f \n", 10.12345678);
#endif

    short int a = 100;
    printf("%d %hd \n", a, a);

    long int b = 200;
    printf("%ld \n", b);

    return 0;
}