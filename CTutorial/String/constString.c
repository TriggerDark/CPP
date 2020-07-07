/*************************************************************************
  >  File  Name  : constString.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/06 21:53:14
 ************************************************************************/

#include<stdio.h>

// 字符串是有双引号引起的一串字符 系统在字符串最后添加一个字符'\0'
// 等价 sizeof(字符数组的大小)>=sizeof（字符差串的大小) 自适应

// 综上所述，对于一个字符串的处理，就变成了对字符指针，或者是字符数组的处理

int main(int argc, char** argv) {
    printf("sizeof(\"china\")=%ld\n", sizeof("china"));
    printf("%s\n", "china");

    char *p = "china";
    printf("p=%p, p+1=%p, p[0]=%c, p[1]=%c\n", p, p+1, p[0], p[1]);
    printf("  %p,     %p,      %c,      %c\n", "china", "china"+1, "china"[0], "china"[1]);
    char arr[6] = "china";
    // 此时操作字符数组，就等价与操作一个字符串，并且可以修改
    printf("arr=%p, arr+1=%p, arr[0]=%c, arr[1]=%c\n", arr, arr+1, arr[0], arr[1]);
    return 0;
}
