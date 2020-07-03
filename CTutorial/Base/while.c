#include <stdio.h>

#if 0

循环初值
循环条件
循环体

while 先判断，后循环
do while 先循环，后判断

#endif
int main(void)
{
#if 0
    int i=0;
    while (i < 10)
    {
        printf("%d\n", i);
        i++;
    }
#endif

    int sum = 0;
    int i = 1;

#if 0
    while (i <= 100)
    {
        sum += i;
        ++i;
    }
#endif

# if 0
    do
    {
        sum += i;
        ++i;
    } while (i <= 100);
    printf("%d\n", sum);
#endif

    int flag = 0;
    char ch;
    do
    {
        printf("pls input [y/n] to continue:");
        scanf("%c", &ch);
        getchar();
        if (ch == 'y' || ch == 'Y')
        {
            flag = 1;
            break;
        }
    }while (ch != 'n' && ch != 'N');

    if (flag)
    {
        printf("come on boy!\n");
    }

    return 0;
}
