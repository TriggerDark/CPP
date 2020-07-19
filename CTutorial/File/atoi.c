/*************************************************************************
  >  File  Name  : atoi.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/16 14:47:08
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char* p = "123\n";
    int num = atoi(p);
    printf("%d", num);
    return 0;
}
