/*************************************************************************
  >  File  Name  : popSort.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/11 17:58:31
 ************************************************************************/

#include <stdio.h>

#define N 5

int main(int argc, char** argv) {
    int arr[N] = {5, 4, 3, 2, 1};

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                arr[j] ^= arr[j + 1];
                arr[j + 1] ^= arr[j];
                arr[j] ^= arr[j + 1];
            }
        }
    }
    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
