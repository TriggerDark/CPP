/*************************************************************************
  >  File  Name  : structSize.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/10 16:37:04
 ************************************************************************/

#include <stdio.h>

// 类型本身是不占空间的，类型产生的变量才占空间
// 结构体中的每个成员的地址均是可以获得的

#if 0
pack n 8  m 4
          Y=4 外对齐
       1
       2
       4
          X 1
            2
            3
            4

#endif

typedef struct _staff {
    char sex;
    short num;
    int age;
} Staff;

int main(int argc, char** argv) {
    Staff s;
    printf("sizeof(Staff)=%ld\n", sizeof(Staff));
    printf("sizeof(s)    =%ld\n", sizeof(s));

    printf("&s    =%p\n", &s);
    printf("&s.sex=%p\n", &s.sex);
    printf("&s.num=%p\n", &s.num);
    printf("&s.age=%p\n", &s.age);
    return 0;
}
