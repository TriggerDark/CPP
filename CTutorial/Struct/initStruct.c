/*************************************************************************
  >  File  Name  : initStruct.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/09 12:57:45
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stu {
    char name[100];
    int num;
    char sex;
    float score;
} Stu;

// 凡是基本类型，既可以在定义的时候初始化，也可以先定义再赋值
// 凡是构造类型，要么在定义的时候初始化，不可以先定义再以初始化的方式赋值

// 初始化，成员赋值
// 访问 一类访问栈上，一类访问堆上
// 点成员运算符 指向成员运算符

int main() {
    Stu* ps = (Stu*)malloc(sizeof(Stu));
    strcpy(ps->name, "aaaaa");
    ps->num = 1001;
    ps->sex = 'x';
    ps->score = 99;
    printf("name:%s\n", ps->name);
    printf("num:%d\n", ps->num);
    printf("sex:%c\n", ps->sex);
    printf("score:%f\n", ps->score);
    free(ps);
    return 0;
}

int main2() {
    struct stu s = {"zhangsan", 1001, 'f', 99};
    struct stu* ps = &s;
    printf("name:%s\n", ps->name);
    printf("num:%d\n", ps->num);
    printf("sex:%c\n", ps->sex);
    printf("score:%f\n", ps->score);

    printf("name:%s\n", (*ps).name);
    printf("num:%d\n", (*ps).num);
    printf("sex:%c\n", (*ps).sex);
    printf("score:%f\n", (*ps).score);
    return 0;
}

int main1(int argc, char** argv) {
    struct stu s;  // = {"zhangsan", 1001, 'f', 99};
    strcpy(s.name, "zhangsan");
    s.num = 1001;
    s.sex = 'f';
    s.score = 59;

    printf("name:%s\nnum:%d\nsex:%c\nscore:%f\n", s.name, s.num, s.sex,
           s.score);
    scanf("%s%d %c%f", s.name, &s.num, &s.sex, &s.score);

    printf("name:%s\nnum:%d\nsex:%c\nscore:%f\n", s.name, s.num, s.sex,
           s.score);

    return 0;
}
