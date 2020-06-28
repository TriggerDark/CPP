#include <stdio.h>

int main (void)
{
	int arr[10];
	// 整体 -> 构造类型
	printf("sizeof(arr) = %ld sizeof(int[10]) = %ld\n", sizeof(arr), sizeof(int[4]));

	// 个体
	printf("sizeof(arr[0]) = %ld sizeof(int) = %ld\n", sizeof(arr[0]), sizeof(int));

	// 数组名表示个体成员的时候，表示首地址
	printf("arr = %p &arr[0] = %p\n", arr, &arr[0]);

	return 0;
}
