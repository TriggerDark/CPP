/*************************************************************************
  >  File  Name  : encodedecode.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/20 22:37:26
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//   xx       -c      src       dest
//   xx       -d      src       dest
// argv[0]  argv[1]  argv[2]   argv[3]
// gcc encodedecode.c -o encodedecode
// ./encodedecode -c lena.jpg 1.jpg
// ./encodedecode -d 1.jpg 2.jpg

void encode(char* buf, int n) {
    for (int i = 0; i < n; i++) {
        buf[i]++;
    }
}

void decode(char* buf, int n) {
    for (int i = 0; i < n; i++) {
        buf[i]--;
    }
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        printf("use xx -d[-c] src dest\n");
        exit(-1);
    }

    FILE* pfr = fopen(argv[2], "rb+");
    if (NULL == pfr) exit(-1);

    FILE* pfw = fopen(argv[3], "wb+");
    if (NULL == pfw) {
        fclose(pfr);
        exit(-1);
    }

    char buf[1024];
    int n;
    if (strcmp(argv[1], "-c") == 0) {
        while ((n = fread((void*)buf, 1, 1024, pfr)) > 0) {
            encode(buf, n);
            fwrite((void*)buf, 1, n, pfw);
        }
        printf("encode\n");
    } else if (strcmp(argv[1], "-d") == 0) {
        while ((n = fread((void*)buf, 1, 1024, pfr)) > 0) {
            decode(buf, n);
            fwrite((void*)buf, 1, n, pfw);
        }
        printf("decode\n");
    } else {
        printf("arg error\n");
    }

    fclose(pfr);
    fclose(pfw);
    return 0;
}
