/*************************************************************************
  >  File  Name  : return.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/08 18:33:29
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 1. 数值是可以返回的
// 2. 地址也是可以返回的
// 3. 栈上的空间不可以返回
// 4. 堆上的空间是可以返回的

char *getFormatMemo(int size, char content) {
    char *p = (char *)malloc(size * sizeof(char));
    if (NULL == p) {
        exit(-1);
    }
    memset(p, content, size * sizeof(char));
    p[size * sizeof(char) - 1] = '\0';
    return p;
}

int main() {
    char *p = getFormatMemo(100, 'a');
    printf("p=%s\n", p);
    free(p);
    return 0;
}

#if 0
int func() {
    int a = 500;
    return a;
}

int* foo() {
    int a = 500;
    // int *p= &a;
    printf("&a=%p\n", &a);
    return &a;
}

int main(int argc, char** argv) {
    int a = func();
    printf("a=%d\n", a);

    int* pa = foo();
    printf("pa=%p\n", pa);

    return 0;
}
#endif
