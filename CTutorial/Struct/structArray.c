/*************************************************************************
  >  File  Name  : structArray.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/10 14:57:43
 ************************************************************************/

#include <stdio.h>

typedef struct _stu {
    int num;
    char name[30];
    char sex;
    float score;
} Stu;

int main(int argc, char** argv) {
    Stu s[4] = {{1001, "tangsheng", 'f', 99}, {1002, "wukong", 'm', 88}, {}};
    for (int i = 0; i < sizeof(s) / sizeof(*s); i++) {
        printf("num=%d\n", s[i].num);
        printf("name=%s\n", s[i].name);
        printf("sex=%c\n", s[i].sex);
        printf("score=%f\n", s[i].score);
    }
    return 0;
}
