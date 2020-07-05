/*************************************************************************
  >  File  Name  : slectSortFunc.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/05 10:48:33
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initRandArr(int* arr, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        *arr++ = rand() % 100;
    }
}

void display(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%2d\n", *arr++);
    }
}

int smallIdx(int startIdx, int* p, int n) {
    int idx = startIdx;

    for (int i = idx + 1; i < n; i++) {
        if (*(p + i) < *(p + idx)) idx = i;
    }
    return idx;
}

void mySwap(int* a, int* b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void selectSort(int* arr, int n) {
    int idx;

    for (int i = 0; i < n - 1; i++) {
        idx = smallIdx(i, arr, n);
        if (idx != i) mySwap(&arr[i], &arr[idx]);
    }
}

int main(int argc, char** argv) {
    int arr[10];
    initRandArr(arr, 10);
    display(arr, 10);
    selectSort(arr, 10);
    printf("After sort:\n");
    display(arr, 10);
    return 0;
}
