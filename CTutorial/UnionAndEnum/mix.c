/*************************************************************************
  >  File  Name  : mix.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/10 22:23:07
 ************************************************************************/

#include <stdio.h>
#include <string.h>

union mix {
    char name[10];
    int age;
};

int main(int argc, char** argv) {
    union mix m;
    printf("sizeof mix=%ld\n", sizeof(m));
    strcpy(m.name, "abcde");
    printf("%s, %d\n", m.name, m.age);
    m.age = 100;
    printf("%s, %d\n", m.name, m.age);
    return 0;
}
