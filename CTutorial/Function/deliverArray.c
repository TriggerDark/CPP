/*************************************************************************
  >  File  Name  : deliverArray.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/05 09:56:59
 ************************************************************************/

#include <stdio.h>

// 数组的传递不可能通过拷贝的方式来传递
// C语言基于效率的原因，在传递时，数组名仅充当地址使用
// 数组三要素--> 起始地址，步长（刻度），范围
// 数组名，是一个指针包含了（起始地址，步长（刻度））但数组名里面没有包含范围
// 所以在传递一维数组时，要传递数组名和范围

// void disArray(int arr[0]) { printf("display sizeof(arr)=%ld\n", sizeof(arr));
void display(int *p, int n) {
    printf("display sizeof(p)=%ld\n", sizeof(p));

    for (int i = 0; i < n; i++) {
        printf("%d\n", *p++);
    }
}

int main(int argc, char** argv) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("display sizeof(arr)=%ld\n", sizeof(arr));
    // for (int i = 0; i < 10; i++) {
    // printf("%d\n", arr[i]);
    // }
    // disArray(arr);
    // display(&arr[0]);
    display(arr, sizeof(arr) / sizeof(*arr));
    return 0;
}
