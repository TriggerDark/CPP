#include <stdio.h>

int main(void) 
{
#if 0
    int i;
    int sum = 0;

    for (i=0; i<=100; i++) 
    {
        sum += i;
    }
    printf("%d\n", sum);
#endif

#if 0
    int i = 1, j = 9;
    while (i < 10)
    {
        printf("%d = %d + %d\n", i + j, i, j);
        ++i;
        --j;
    }
#endif

    int i, j;
    for (i=1, j=9; i<10; ++i, --j)
    {
        printf("%d = %d + %d\n", i + j, i, j);
    }
    return 0;
}