/*************************************************************************
  >  File  Name  : zeros.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/07 19:37:01
 ************************************************************************/

#include <stdio.h>

#if 0
int 0
float 0
char 0
NULL 标识未初始化的指针，代表内存的零地址
char '\0' 用于标识字符串结束地址
"0" '0'+'\0'
#endif

int main(int argc, char** argv) {
    printf("int %d\n", 0);
    printf("float %f\n", 0.0);
    printf("char \'0\' %d %c\n", '0', '0');
    printf("NULL= %p NULL=\n", NULL);
    printf("\\0=%d \\0=%c-\n", '\0', '\0');
    printf("\"0\"=%s\n", "0");
    return 0;
}
