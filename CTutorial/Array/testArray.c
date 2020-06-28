#include <stdio.h>

// 输出对脚线上的数据
// a = a^b; b = a^b; a = a^b;
int main (void)
{
    int a[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            if (i==j || i+j==3)
                printf("%d\t", a[i][j]);
            printf(" \t");
        }
        putchar(10);
    }

    int tmp;
    for (int i=0; i<3; i++)
    {
        for (int j=i+1; j<4; j++)
        {   
            tmp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = tmp;
        }
    }
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            printf("%d\t", a[i][j]);
        }
        putchar(10);
    }
    return 0;
}
