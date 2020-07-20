/*************************************************************************
  >  File  Name  : freadfwrite.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/19 21:53:25
 ************************************************************************/
#include <stdio.h>

int main(int argc, char *argv[]) {
#if 0
    // 此时无数据写入文本文件
    int arr[10] = {0, 1, 0xffffffff, 2, 4, 5, 6, 7, 8};

    FILE* pf = fopen("mm.txt", "w+");
    fputs((char*)arr, pf);
    fclose(pf);
#endif
    int arr[10] = {0, 1, 0xffffffff, 2, 4, 5, 6, 7, 8};
    FILE *pf = fopen("gg.txt", "w+");
    fwrite((void *)arr, 4, 10, pf);
    rewind(pf);

    int arrCpy[10];
    fread((void *)arrCpy, 4, 10, pf);
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arrCpy[i]);
    }

    fclose(pf);
    return 0;
}

int main1() {
    char buf[1024] = "a\nbc\0defg";
    FILE *pfa = fopen("xx.txt", "w+");
    fputs(buf, pfa);

    rewind(pfa);
    char readArr[1024];
    fgets(readArr, 1024, pfa);
    printf("%s\n", readArr);
    fclose(pfa);

    FILE *pfr = fopen("yy.txt", "wb+");
    fwrite((void *)buf, 1, 8, pfr);
    rewind(pfr);
    fread((void *)readArr, 1, 8, pfr);
    for (int i = 0; i < 8; i++) {
        printf("%x->%c\n", readArr[i], readArr[i]);
    }
    fclose(pfr);

    return 0;
}

