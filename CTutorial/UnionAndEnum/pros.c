/*************************************************************************
  >  File  Name  : pros.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/10 22:31:23
 ************************************************************************/

#include <stdio.h>

struct Staff {
    char name[30];
    char job;
    union {
        int grade;
        char position[50];
    } gOrp;
};

int main(int argc, char** argv) {
    struct Staff s[2];
    for (int i = 0; i < 2; i++) {
        printf("name:");
        scanf("%s", s[i].name);
        getchar();
        printf("job:");
        scanf("%c", &(s[i].job));
        if (s[i].job == 't') {
            printf("position:");
            scanf("%s", s[i].gOrp.position);
        } else {
            printf("grade:");
            scanf("%d", &s[i].gOrp.grade);
        }
    }

    for (int i = 0; i < 2; i++) {
        printf("name=%s\n", s[i].name);
        printf("job=%c\n", s[i].job);
        if (s[i].job == 't') {
            printf("position=%s\n", s[i].gOrp.position);
        } else {
            printf("grade=%d\n", s[i].gOrp.grade);
        }
    }
    return 0;
}
