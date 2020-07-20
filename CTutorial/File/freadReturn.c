/*************************************************************************
  >  File  Name  : freadReturn.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/19 22:24:49
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    FILE *pf = fopen("xx.txt", "w+");
    fwrite((void *)arr, 4, 10, pf);
    rewind(pf);
    int n = 0;
    int read[10];
    while ((n = fread((void *)read, 4, 5, pf)) > 0) {
        for (int i = 0; i < n; i++) {
            printf("%d\t", read[i]);
        }
    }
    return 0;
}

#if 0
int main(int argc, char** argv) {
    char buf[1024] = "12345678";
    FILE* pf = fopen("oo.txt", "w+");
    if (NULL == pf) exit(-1);

    // fwrite((void*)buf, 1, 8, pf);
    fwrite((void*)buf, 8, 1, pf);

    rewind(pf);
    char read[10];
    // int n = fread((void*)read, 1, 8, pf);  // 读到完整的块
    // printf("n=%d\n", n);
    // n = fread((void*)read, 1, 8, pf);
    // printf("n=%d\n", n);

    // int n = fread((void*)read, 8, 1, pf);  // 读到完整的块
    // printf("n=%d\n", n);
    // n = fread((void*)read, 8, 1, pf);
    // printf("n=%d\n", n);

    // int n = fread((void*)read, 7, 1, pf);  // 读到完整的块
    // printf("n=%d\n", n);
    // n = fread((void*)read, 7, 1, pf);
    // printf("n=%d\n", n);

    int n;
    while ((n = fread((void*)read, 1, 3, pf)) > 0) {
        for (int i = 0; i < n; i++) {
            printf("%c\t", read[i]);
        }
    }

    return 0;
}
#endif
