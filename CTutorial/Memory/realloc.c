/*************************************************************************
  >  File  Name  : realloc.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/08 16:51:30
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    char *p = (char*) malloc(10);
    // p = realloc(p, 20);
    char * new = realloc(p, 20);
    strcpy(new, "wqiiiodjvhvvh");
    printf("%s\n", new);
    return 0;
}
