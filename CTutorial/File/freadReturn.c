/*************************************************************************
  >  File  Name  : freadReturn.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/19 22:24:49
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    FILE *pf = fopen("xx.txt", "w+");

    fwrite((void *)arr, 4, 10, pf);
    rewind(pf);

    int n = 0;
    // 一个int4个字节，以五个int一块
    while ((n = fread((void *)arr, 4, 5, pf)) > 0) {
        for (int i = 0; i < n; i++) {
            printf("%d\t", arr[i]);
        }
    }

    fclose(pf);
    return 0;
}

int main1() {
    char buf[1024] = "12345678";

    FILE *pf = fopen("oo.txt", "w+");
    if (NULL == pf) exit(-1);

    // fwrite((void*)buf, 1, 8, pf);
    fwrite((void *)buf, 8, 1, pf);
    rewind(pf);

    int n;  // 读到完整块的个数
    char read[1024];
    // n = fread((void*)read, 1, 8, pf);
    // printf("n = %d\n", n); // n=8
    // n = fread((void*)read, 1, 8, pf);
    // printf("n = %d\n", n); // n=0

    // n = fread((void*)read, 8, 1, pf);
    // printf("n = %d\n", n); // n=1
    // n = fread((void*)read, 8, 1, pf);
    // printf("n = %d\n", n); // n=0

    // n = fread((void*)read, 7, 1, pf);
    // printf("n = %d\n", n); // n=1
    // n = fread((void*)read, 7, 1, pf);
    // printf("n = %d\n", n); // n=0 不成完整块为0

    // n = fread((void*)read, 3, 1, pf);
    // printf("n = %d\n", n); // n=1
    // n = fread((void*)read, 3, 1, pf);
    // printf("n = %d\n", n); // n=1
    // n = fread((void*)read, 3, 1, pf);
    // printf("n = %d\n", n); // n=0

    // n = fread((void*)read, 1, 3, pf);
    // printf("n = %d\n", n); // n=3
    // n = fread((void*)read, 1, 3, pf);
    // printf("n = %d\n", n); // n=3
    // n = fread((void*)read, 1, 3, pf);
    // printf("n = %d\n", n); // n=2
    // n = fread((void*)read, 1, 3, pf);
    // printf("n = %d\n", n); // n=0

    while ((n = fread((void *)read, 1, 3, pf)) > 0) {
        for (int i = 0; i < n; i++) {
            printf("%c\t", read[i]);
        }
    }
    putchar('\n');

    fclose(pf);
    return 0;
}
