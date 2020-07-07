/*************************************************************************
  >  File  Name  : login.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/07 16:49:40
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    char name[100];
    char passwd[100];
    int count = 3;
    while (1) {
        printf("您目前还有%d次机会\n", count);
        printf("Name:");
        scanf("%s", name);
        printf("Passwd:");
        scanf("%s", passwd);
        if (strcmp(name, "guilin") == 0 && strcmp(passwd, "123456") == 0)
            break;
        else {
            count--;
            if (count == 0) exit(-1);
        }
    }
    printf("欢迎登录\n");
    return 0;
}
