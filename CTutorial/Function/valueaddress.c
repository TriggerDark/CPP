/*************************************************************************
  >  File  Name  : valueaddress.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/05 09:35:20
 ************************************************************************/

#include<stdio.h>

void func(int*);

int main(int argc, char** argv) {
    int a = 10;
    func(&a);
    printf("main a=%d\n", a);
    return 0;
}

void func(int *a) {
    (*a)++;
    printf("func a=%d\n", *a);
}
