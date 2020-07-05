/*************************************************************************
  >  File  Name  : valueAndaddress.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/05 09:20:00
 ************************************************************************/

#include <stdio.h>

// 进程空间
// 函数被调用之前，其内所有变量尚未开辟空间
// 空间的开辟起始于函数调用
// 空间消失结束于函数调用完毕
void func(int);

int main(int argc, char** argv) {
    int a = 10;
    func(a);
    printf("main a=%d\n", a);
    return 0;
}

void func(int a) {
    a++;
    printf("func a=%d\n", a);
}
