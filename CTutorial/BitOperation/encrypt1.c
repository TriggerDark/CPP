/*************************************************************************
  >  File  Name  : encrypt1.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/22 17:06:40
 ************************************************************************/
#include <stdio.h>
#include <string.h>

void encode(char *buf, char ch) {
    int len = strlen(buf);
    for (int i = 0; i < len; i++) {
        if (buf[i] == ch) continue;
        buf[i] ^= ch;
    }
}

void decode(char *buf, char ch) {
    int len = strlen(buf);
    for (int i = 0; i < len; i++) {
        if (buf[i] == ch) continue;
        buf[i] ^= ch;
    }
}

int main() {
    char buf[] = "i love xxx";
    printf("buf = %s\n", buf);

    char ch = 'x';
    encode(buf, ch);
    printf("buf = %s\n", buf);

    decode(buf, ch);
    printf("buf = %s\n", buf);
    return 0;
}
