/*************************************************************************
  >  File  Name  : macro.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/22 21:35:02
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define N (2+3) // 常量宏
#define ERR_EXIT(m)              \
    do {                         \
        if (NULL == m) {         \
            printf("Err:%s", m); \
            exit(-1);            \
        }                        \
    } while (0)

int main(int argc, char** argv) {
    FILE* pf = fopen("aa.txt", "r");
    // #undef ERR_EXIT // 取消宏
    ERR_EXIT(pf);
#undef ERR_EXIT
    return 0;
}
