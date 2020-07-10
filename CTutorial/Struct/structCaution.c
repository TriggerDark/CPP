/*************************************************************************
  >  File  Name  : structCaution.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/10 20:14:22
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
typedef struct _stu {
    char name[30];
    int score;
} Stu;
*/

typedef struct _stu {
    char* name;
    int score;
} Stu;

// 申请空间时由外到内
// 释放空间时由内到外
int main(int argc, char* argv[]) {
    Stu* ps = (Stu*)malloc(sizeof(Stu));
    ps->name = (char*)malloc(100);
    strcpy(ps->name, "jim");
    ps->score = 99;
    printf("%s, %d\n", ps->name, ps->score);
    free(ps->name);
    free(ps);
    return 0;
}

int main1(int argc, char** argv) {
    // Stu s;
    // strcpy(s.name, "jim");
    // s.score = 90;
    Stu s;
    // s.name = "jim";
    s.name = (char*)malloc(100);
    strcpy(s.name, "jim");
    s.score = 200;
    printf("%s, %d\n", s.name, s.score);
    free(s.name);
    return 0;
}
