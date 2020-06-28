#include <stdio.h>

#if 0
if else if 常常用来表达范围
switch     常常用来表达点的选择

最常用的条件放在最前，就是所谓的优化
#endif

int main(void) 
{
    int choice;
    printf("pls input number:");
    scanf("%d", &choice);

    switch(choice) // int char
    {
        case 1: // 常量 常量表达式 不能重复
            printf("Mac\n");
            break;
        case 2:
            printf("Iphone\n");
            break;
        case 3:
            printf("Sony\n");
            break;
        case 4:
            printf("thanks\n");
        
        default:
            printf("blank\n");
            break;
    }

    return 0;
}