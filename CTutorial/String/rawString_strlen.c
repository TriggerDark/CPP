/*************************************************************************
  >  File  Name  : rawString.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/07 10:09:18
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int myStrlen(char* p) {
    int count;
    for (count = 0; *p++; count++)
        ;
    return count;
}

int main(int argc, char** argv) {
    char* p = "china";     // 将指针赋给了p
    char arr[] = "china";  // 将指针指向的内容赋给arr

#if 0
    char* q = p;
    int count = 0;
    // while (*q != '\0') {
    // while (*q) {
    // count++;
    // q++;
    // }

    for (; *p++; count++)
        ;
    printf("%d\n", count);

    int len = strlen(arr);
    printf("len=%d\n", len);
#endif

    int mylen = myStrlen(p);
    printf("mylen=%d\n", mylen);

    return 0;
}
