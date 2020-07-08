/*************************************************************************
  >  File  Name  : alloc.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/08 11:00:41
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *p = (int *)calloc(10, sizeof(int));
    for (int i = 0; i < 10; i++) {
        printf("%d\n", p[i]);
    }
    free(p);
    return 0;
}

int main1(int argc, char **argv) {
    // 基本数据类型在栈和堆上
    int a = 100;
    printf("a=%d\n", a);

    int *p = (int *)malloc(1 * sizeof(int));
    *p = 100;
    printf("*p=%d\n", *p);
    // printf("sizeof(int)=%ld\n", sizeof(int));
    // printf("sizeof(int*)=%ld\n", sizeof(int*));

    // 数组类型在栈和堆上
    int arr[10];
    int *pa = (int *)malloc(10 * sizeof(int));
    // memset(pa, 0, 10*sizeof(int));
    memset(pa, 1, 10 * sizeof(int));

    for (int i = 0; i < 10; i++) {
        printf("%d\n", pa[i]);
    }

    return 0;
}
