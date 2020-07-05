/*************************************************************************
  >  File  Name  : deliver2dArray.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/05 11:24:19
 ************************************************************************/

#include <stdio.h>

void func(int (*p)[4], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", p[i][j]);
        }
        putchar('\n');
    }
}

int main(int argc, char** argv) {
    int arr[3][4] = {{1}, {2, 3}, {4, 5, 6}};
    func(arr, 3);
    return 0;
}
