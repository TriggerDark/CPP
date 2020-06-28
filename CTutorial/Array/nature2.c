#include <stdio.h>

int main(void)
{
	int a[3][4];

	// 整体
	printf("sizeof(a)=%ld, sizeof(int[3][4])=%ld\n", sizeof(a), sizeof(int[3][4]));

	// 个体 元素访问
	printf("sizeof(a[0])=%ld, sizeof(int[4])=%ld\n", sizeof(a[0]), sizeof(int[4]));
	
	printf("a=%p, &a[0]=%p\n", a, &a[0]);
	printf("a+1=%p, &a[0]+1=%p\n", a+1, &a[0]+1);
	return 0;
}
