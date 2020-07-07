#include "mystring.h"

int myStrlen(char *p) {
    int count;
    for (count = 0; *p++; count++)
        ;
    return count;
}

char *myStrcat(char *dest, char *src) {
    char *d = dest;
    while (*dest) dest++;
    while (*dest++ = *src++)
        ;
    return d;
}

int myStrcmp(char *s1, char *s2) {
    for (; *s1 && *s2 && (*s1 == *s2); s1++, s2++)
        ;
    return *s1 - *s2;
}

char *myStrcpy(char *dest, char *src) {
    char *d = dest;
    while (*dest++ = *src++)
        ;
    return d;
}

