#include <stdio.h>

int main() 
{
#if 0
    for (int i=0; i<5; i++) 
    {
        for (int j=0; j<5; j++)
        {
            printf("*");
        }
        putchar(10);
    }
#endif

#if 0
    for (int i=1; i<5; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("*");
        }
        putchar(10);
    }
#endif

#if 0
    int i = 1;
    while (i<5)
    {
        int j = 1;
        while (j<=i)
        {
            printf("*");
            j++;
        }
        putchar(10);
        i++;
    }
#endif

#if 0
    int i = 1;
    do
    {
        int j = 1;
        do 
        {
            printf("*");
            j++;
        } while(j<=i);
        putchar(10);
        i++;
    } while(i<5);
#endif

    // 九九乘法表
    for (int i=1; i<=9; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%d * %d = %d\t", i, j, i*j);
        }
        putchar(10);
    }
    return 0;
}