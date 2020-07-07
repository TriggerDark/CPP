/*************************************************************************
  >  File  Name  : pointerArray.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/07 17:57:06
 ************************************************************************/

#include <stdio.h>

// 指针数组的本质是数组，数组指针的本质是指针

int main(int argc, char** argv) {
    int arr[] = {1, 2, 3, 4, 5};    // 整型数组
    char cArr[] = {'a', 'b', 'c'};  // 字符数组

    char a, b, c, d;
    char* cpArr[] = {&a, &b, &c,
                     &d};  // {char*, char*, char*, char*} //字符指针数组

    char *pa = "china", *pb = "am", *pc = "can", *pd = "jap";
    char* cppArr[] = {pa, pb, pc, pd};
    printf("%ld\n", sizeof(cppArr));
    printf("%ld\n", sizeof(char*));

    return 0;
}
