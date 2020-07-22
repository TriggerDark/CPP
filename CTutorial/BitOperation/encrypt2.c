/*************************************************************************
  >  File  Name  : encrypt2.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/22 17:13:03
 ************************************************************************/
#include <stdio.h>
#include <string.h>

void encode(char* buf, char* px) {
    int len = strlen(buf);
    int n = strlen(px);

    int j = 0;
    for (int i = 0; i < len; i++) {
        if (buf[i] == px[i])
            j++;
        else {
            buf[i] ^= px[j++];
            if (j == n) j = 0;
        }
    }
}

void decode(char* buf, char* px) {
    int len = strlen(buf);
    int n = strlen(px);

    int j = 0;
    for (int i = 0; i < len; i++) {
        if (buf[i] == px[i])
            j++;
        else {
            buf[i] ^= px[j++];
            if (j == n) j = 0;
        }
    }
}

int main() {
    char buf[] = "i love xxx";
    char xx[] = "1990909";
    encode(buf, xx);
    printf("buf = %s\n", buf);
    decode(buf, xx);
    printf("buf = %s\n", buf);
    return 0;
}
