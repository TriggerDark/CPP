#include<stdio.h>

int main(void) {
	//  整型 char, short, int, long, long long;
	printf("sizeof(char) = %lu\n", sizeof(char));
	printf("sizeof(short) = %lu\n", sizeof(short));
	printf("sizeof(int) = %lu\n", sizeof(int));
	printf("sizeof(long) = %lu\n", sizeof(long));
	printf("sizeof(long long) = %lu\n", sizeof(long long));

	// 浮点型 float, double
	printf("sizeof(float) = %lu\n", sizeof(float));
	printf("sizoef(double) = %lu\n", sizeof(double));
	// float 6-7位
	// double 15-16位

	unsigned char ch;
	// ascii的验证
	for (ch = 0; ch < 128; ch++) {
		printf("%3d=%c", ch, ch);
		if ((ch+1) % 8 == 0) 
			putchar(10);
	}

	printf("i like \"football\" \n ");
	printf("%d%%", 95);
}

// char 大小一个字节：8位，所能表示的正数范围 0-255           0-2^8-1
//									 负数范围 -128 +127       -2^7 +2^7-1
// short 大小二个字节：16位，所能表示的正数范围 0-65535       0-2^16-1
//									 负数范围 -32768 +32767   -2^15 +2^15-1
// int 大小四个字节：32位， 正数范围0-2^32-1 负数范围 -2^31 +2^31-1
//
// long long 大小八个字节：64位，正数范围0-2^64-1 负数范围 -2^63 +2^63-1
