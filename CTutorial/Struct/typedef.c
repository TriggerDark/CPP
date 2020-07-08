/*************************************************************************
  >  File  Name  : typedef.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/08 20:32:15
 ************************************************************************/

#include <stdio.h>

// typedef typedefine typerename
// typedef 对目前已有的数据类型取别名，不能创造新的类型

// 使用方法，
// 1. 先用原类型定义变量
// 2. 在定义前加typedef
// 3. 将原变量的名字，改成你需要的类型名

typedef struct student {
    char name[30];
    int num;
    char age;
} stu;

typedef char int8;
typedef short int16;
typedef long int32;
typedef long long int64;
typedef int ARRAY[10];

int main(int argc, char** argv) {
    int8 i8;
    int16 i16;
    int32 i32;
    int64 i64;

    int arr[10];
    printf("sizeof(arr)=%ld\n", sizeof(arr));

    ARRAY arr2;
    printf("sizeof(arr2)=%ld\n", sizeof(arr2));

    stu s1;
    return 0;
}
