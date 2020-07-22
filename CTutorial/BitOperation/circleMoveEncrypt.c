/*************************************************************************
  >  File  Name  : circleMoveEncrypt.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/22 17:13:42
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void encode(char* buf, int n) {
    for (int i = 0; i < n; i++) {
        unsigned char ch = buf[i];
        buf[i] = (ch << 1 | ch >> 7);
    }
}

void decode(char* buf, int n) {
    for (int i = 0; i < n; i++) {
        unsigned char ch = buf[i];
        buf[i] = (ch >> 1 | ch << 7);
    }
}

int main(int argc, char** argv) {
    // FILE* pfr = fopen("lena.jpg", "rb+");
    FILE* pfr = fopen("lena-encode.jpg", "rb+");
    if (NULL == pfr) exit(-1);

    // FILE* pfw = fopen("lena-encode.jpg", "wb+");
    FILE* pfw = fopen("lena-decode.jpg", "wb+");
    if (NULL == pfw) exit(-1);

    char buf[1024];

    int n = 0;
    while ((n = fread((void*)buf, 1, 1024, pfr)) > 0) {
        // encode(buf, n);
        decode(buf, n);
        fwrite(buf, 1, 1024, pfw);
    }

    fclose(pfr);
    fclose(pfw);

    return 0;
}
