/*************************************************************************
  >  File  Name  : rawString_strcpy.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/07 11:13:29
 ************************************************************************/

#include <stdio.h>
#include <string.h>

// strcpy被拷贝的区域，必须有足够的空间容纳
// 先拷贝，再判断，再++

char* myStrcpy(char* dest, char* src) {
    char* d = dest;
    while (*dest++ = *src++)
        ;
    return d;
}

int main(int argc, char** argv) {
    char name[200];
    char* pName = "china9";
    char name2[200] = "guilin";

    // strcpy(name, pName);
    myStrcpy(name, myStrcpy(name2, pName));
    printf("%s\n", pName);
    return 0;
}
