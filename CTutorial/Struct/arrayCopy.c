/*************************************************************************
  >  File  Name  : arrayCopy.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/10 16:07:52
 ************************************************************************/

#include <stdio.h>

// 结构体支持赋值

typedef struct _stu {
    char name[30];
} Stu;

typedef struct array {
    int arr[10];
} Array;

int* func() {
    static int a = 10;
    return &a;
}

int main(int argc, char** argv) {
    // int arr[10] = {1, 2, 3, 4, 5, 6};
    // int arr2[10];
    // arr2 = arr;
    // Stu stu1 = {"china"};
    // Stu stu2;
    // stu2 = stu1;
    // printf("%s\n", stu2.name);

    Array arr = {1, 2, 3, 4, 5, 6};
    Array arr2;
    arr2 = arr;
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr2.arr[i]);
    }
    return 0;
}
