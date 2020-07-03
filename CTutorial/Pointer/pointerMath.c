#include <stdio.h>

// 数值+1,就是+1
// 指针+1,加的是布长，即指针类型的大小

int main(void) {
    // int *p = 1;
    int pData = 1;

    // printf("%d\n", ++p);
    printf("%d\n", ++pData);

    int arr[10];
    int *pHead = &arr[0];
    int *pTail = &arr[9];

    int ppHead = (int)&arr[0];
    int ppTail = (int)&arr[9];
    printf("%ld\n", pTail - pHead);  // 9
    printf("%d\n", ppTail - ppHead); // 36

    return 0;
}
