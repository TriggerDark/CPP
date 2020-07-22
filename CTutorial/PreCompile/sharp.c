/*************************************************************************
  >  File  Name  : sharp.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/22 22:37:52
 ************************************************************************/
#include <stdio.h>

#define str(x) "aa" #x "bb"
#define printSprt(x) printf("sqrt(" #x ") = %d\n", x* x)

int main() {
    printf("%s\n", str(1));
    printSprt(3);
    return 0;
}
