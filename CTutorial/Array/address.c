#include <stdio.h>

// arr 代表数组名，表示首元素的地址
// int 偏移的刻度（布长）
// 10  偏移的范围

int main(void)
{
    int arr[10];
    for (int i=0; i<10; i++)
    {
        printf("arr[%d] = %p\n",i, &arr[i]);
    }
}