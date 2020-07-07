/*************************************************************************
  >  File  Name  : main.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/07 17:38:00
 ************************************************************************/

#include <stdio.h>

#include "mystring.h"

/**
 * 1. 把一类功能的函数写到一个xxx.c里面
 * 2. 把xxx.c中所有的函数声明写到xxx.h中去
 * 3. 在xxx.h中加入，避免头文件重复包含的语句
 * 4. 将xxx.h 包含到xxx.c中  (自包含 自实现的用"")
 * 5. 在main函数中，包含xxx.h
 **/

int main(int argc, char **argv) {
    char *p = "china";
    char *q = "china";
    printf("%d\n", myStrlen(p));
    return 0;
}
