/*************************************************************************
  >  File  Name  : rawString_strcmp.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/07 16:41:24
 ************************************************************************/

#include <stdio.h>
#include <string.h>

/**
 * s1 > s2  --> 1
 * s1 == s2 --> 0
 * s1 < s2  --> -1
 **/

int myStrcmp(char *s1, char *s2) {
    // while (*s1 != '\0' && *s2 != '\0') {
    // for (; *s1 != '\0' && *s2 != '\0'; s1++, s2++) {
    for (; *s1 && *s2 && (*s1 == *s2); s1++, s2++)
        ;
    // for (; *s1 && *s2; s1++, s2++) {
    // if (*s1 > *s2)
    // return 1;
    // else if (*s1 < *s2)
    // return -1;
    // if (*s1 != *s2) break;// return *s1 - *s2;
    // else {
    // s1++;
    // s2++;
    // }
    // }

    // if (*s1 == '\0' && *s2 != '\0')
    // return *s1 - *s2;
    // else if (*s1 != '\0' && *s2 == '\0')
    // return *s1 - *s2;
    // else
    return *s1 - *s2;
}

int main(int argc, char **argv) {
    char *s1 = "chinab";
    char *s2 = "chinaaaa";

    // int ret = strcmp(s1, s2);
    int ret = myStrcmp(s1, s2);
    if (ret == 0)
        printf("s1==s2\n");
    else if (ret > 0)
        printf("s1>s2");
    else
        printf("s1<s2");

    return 0;
}
