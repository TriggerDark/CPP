#include <stdio.h>

// 数组 一组相同类型数据的管理
// 结构体 一组不同类型数据的管理

// 构造函数解决的第一类问题是：如何对构造起来的成员，进行初始化和访问
// 一维数组在内存中是一段连续的存储区域

int main(void)
{
    // int array[10] = {1, 2, 3};
    int array[10] = {0}; // 初始化为0
    int arr[] = {111, 1111};
    printf("sizeof(array) = %ld\nsizeof(int[10]) = %ld\n", sizeof(array), sizeof(int[10]));

    for (int i=0; i<10; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}