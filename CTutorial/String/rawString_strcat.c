/*************************************************************************
  >  File  Name  : rawString_strcat.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/07 10:23:28
 ************************************************************************/

#include <stdio.h>
#include <string.h>

char *myStrcat(char *dest, char *src) {
    char *d = dest;
    while (*dest) dest++;
    while (*dest++ = *src++)
        ;
    return d;
}

int main(int argc, char **argv) {
    char firstName[30] = "Jim";
    char middleName[30] = "---";
    char lastName[30] = "Green";

    // char *p, *q;
    // p = firstName;
    // q = lastName;
    // while (*p) p++;

    // while (*q) *p++ = *q++;
    // while (*p++ = *q++)
    // ;
    // printf("*p=%s\n", firstName);
    // strcat(firstName, lastName);
    // printf("%s\n", firstName);

    myStrcat(myStrcat(firstName, middleName), lastName);
    printf("myStrcat=%s\n", firstName);

    return 0;
}
