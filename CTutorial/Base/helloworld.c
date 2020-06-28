#include <stdio.h> // 下文中用到printf函数，所以要包含头文件

int main(int argc, char** argv) { // 程序入口，操作系统发起程序的调用，有且只有一个。
	printf("hello, world!!!\n"); // 语句以分号结束,printf来自标准库的函数，要使用它，必须声明
	return 0; // 返回0 代表成功，返回-1 代表失败
}

// C语言最早的时候，只是规范和标准。 MicroSoft VC  Borland Turbo c  GUN gcc
// void main()
// 预处理 --> 编译 --> 汇编 --> 链接 
// gcc -E helloworld.c -o helloworld.i
// gcc -S helloworld.i -o helloworld.s
// gcc -c helloworld.s -o helloworld.o
// gcc helloworld.o -o helloworld


// // 单行注释
// /**/ 多行注释，不支持嵌套
