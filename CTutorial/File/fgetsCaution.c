/*************************************************************************
  >  File  Name  : fgetsCaution.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/16 11:06:47
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    FILE* pf = fopen("xx.ini", "r+");
    if (pf == NULL) exit(-1);

    char name[1024];
    scanf("%s", name);

    char buf[1024];
    fgets(buf, 1024, pf);

    char* p = buf;
    while (*p) p++;
    p--;

    while (*p == '\t') {
        *p = '\0';
        p--;
    }

    if (strcmp(name, buf) == 0) {
        printf("登录成功\n");
    } else {
        printf("登录失败\n");
    }
    return 0;
}
