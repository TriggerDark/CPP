/*************************************************************************
  >  File  Name  : proMacro.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/22 22:59:54
 ************************************************************************/

#include <stdio.h>

void whyme() {
    printf("The line is %d\n", __LINE__);
    printf("The func is %s\n", __func__);
}

int main() {
    printf("The file is %s\n", __FILE__);
    printf("The date is %s\n", __DATE__);
    printf("The time is %s\n", __TIME__);
    printf("The line is %d\n", __LINE__);
    printf("The func is %s\n", __func__);
    whyme();
    return 0;
}
