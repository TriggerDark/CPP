/*************************************************************************
  >  File  Name  : scope.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/06 10:36:28
 ************************************************************************/

#include<stdio.h>

void func(){
    int a=20;
    printf("a=%d\n", a);
}

int main(int argc, char** argv) {
    int a=10;
    printf("a=%d\n", a);
    func();
    return 0;
}
