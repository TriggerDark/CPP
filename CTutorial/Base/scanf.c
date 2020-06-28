#include <stdio.h>

int main(void) {

    // scanf
    // 格式字符，非格式字符
    // 列中的待输入项一一对应（数量/类型）
    // 非格式字符原样输入
    // 但是非格式字符有例外：空格、TAB、回车

#if 0
    int a, b;
    // 从键盘读入，键入的值，以空格、TAB、回车为间隔
    // 回车表示结束
    scanf("%d%d", &a, &b);
    printf("a = %d, b = %d, sum = %d \n", a, b, a+b);
#endif

    float fa, fb;
    scanf("%f %f", &fa, &fb);
    printf("fa = %f, fb = %f \n", fa, fb);
    return 0;
}