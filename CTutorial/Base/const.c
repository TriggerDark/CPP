#include <stdio.h>

// 宏
#define PI 3.1415926
#define RATE 0.6

int main(void) {
#if 0
	int a = 34;
	float pi = PI;
	float r = 5.5;
	float area = PI*r*r;
	printf("area = %f\n", area);
#endif

	float price = 34.567;
	float salePrice = price * RATE;
	printf("salePrice = %f\n", salePrice);
	

	printf("%ld\n", sizeof(0)); // signed int
	printf("%ld\n", sizeof(0u)); // unsigned int
	printf("%ld\n", sizeof(0.0)); // double
	printf("%ld\n", sizeof(0ll)); // longlong
	printf("%ld\n", sizeof(0.0f)); // double --> float

	return 0;
}
