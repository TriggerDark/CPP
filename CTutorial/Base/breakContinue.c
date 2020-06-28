#include <stdio.h>

int main(void)
{

#if 0
    // 闸
    int floodLevel = 30;
    while (1)
    {   
        printf("current level = %d\n", floodLevel);
        if (floodLevel > 500)
            break;
        floodLevel += 5;
    }
    printf("开闸\n");
#endif

    // 筛子
    for (int i=0; i<=100; i++)
    {
        if (i%3 != 0)   
            continue;     
        printf("%d\n", i);
    }
    return 0;
}