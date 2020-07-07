/*************************************************************************
  >  File  Name  : inoutString.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/06 23:55:19
 ************************************************************************/

#include<stdio.h>

// scanf遇到空格结束输入
// gets 空格也可以读入

int main() {
    char arr[6] = "china";
    // scanf("%[^\n]s", arr);
    // gets(arr);
    fgets(arr, 10, stdin);
    printf("%s", arr);
}

#if 0
int main(int argc, char** argv) {
    char arr[100] = "china";
    printf("%s\n", arr);
    puts(arr);
    puts("");
    printf("==============");
    return 0;
}
#endif
