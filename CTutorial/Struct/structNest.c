/*************************************************************************
  >  File  Name  : structNest.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/10 16:25:16
 ************************************************************************/

#include <stdio.h>

// struct _birth {
    // int year;
    // int month;
    // int day;
// };

typedef struct _stu {
    char name[30];
    int num;
    char sex;
    float score;
    // struct _birth birth;
    struct _birth {
        int year;
        int month;
        int day;
    } birth;
} Stu;

int main(int argc, char** argv) {
    Stu s = {"wangwu", 1001, 'f', 99, {1999, 9, 9}};
    printf("name=%s\n", s.name);
    printf("name=%d\n", s.birth.year);
    printf("month=%d\n", s.birth.month);
    return 0;
}
