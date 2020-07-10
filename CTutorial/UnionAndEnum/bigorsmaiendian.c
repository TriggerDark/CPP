/*************************************************************************
  >  File  Name  : bigorsmaiendian.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/10 22:45:49
 ************************************************************************/

#include <stdio.h>

union {
    char ch;
    int i;
} un;

int main(int argc, char** argv) {
    un.i = 0x12345678;
    if (un.ch == 0x78)
        printf("小端序\n");
    else
        printf("小端序\n");
    int data = 0x12345678;
    if (*(char*)&data == 0x78)
        printf("小端序\n");
    else
        printf("大端序\n");
    return 0;
}
