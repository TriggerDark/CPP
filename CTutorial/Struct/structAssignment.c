/*************************************************************************
  >  File  Name  : structAssignment.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/10 14:31:37
 ************************************************************************/

#include <stdio.h>

// 相同结构体类型的变量间，可以赋值，不同类型不可以
// 此语法基础奠定了可以用于传参和反值

typedef struct stu {
    char name[100];
    int num;
    char sex;
    float score;
} Stu;

int main(int argc, char** argv) {
    Stu s1;
    Stu s2 = {"zhangsan", 1001, 'f', 99};
    s1 = s2;
    printf("%s, %d, %c, %f", s1.name, s1.num, s1.sex, s1.score);
    return 0;
}
