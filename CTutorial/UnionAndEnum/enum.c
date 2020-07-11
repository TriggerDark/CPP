/*************************************************************************
  >  File  Name  : enum.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/11 09:33:21
 ************************************************************************/

#include <stdio.h>

// 提供了一组常量的别名，以便于程序清晰可读

enum Day { Mon = 1, Tue, Wed, Thu, Fri, Sat, Sun };
typedef enum _BOOL { False, True } BOOL;

int main(int argc, char** argv) {
    printf("Mon = %d\n", Mon);
    printf("Fri = %d\n", Fri);
    int day;
    // day = Mon;
    // day = 101;
    printf("请输入今天星期几：");
    scanf("%d", &day);
    switch (day) {
        case Mon:
        case Tue:
        case Wed:
        case Thu:
        case Fri:
            printf("workday\n");
        case Sat:
        case Sun:
            printf("休息日\n");
        default:
            break;
    }

    BOOL b;
    b = True;

    return 0;
}
