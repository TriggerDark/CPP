/*************************************************************************
  >  File  Name  : byYourSelf.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/08 18:14:11
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(char *p) {
    printf("%s\n", p);
    free(p);
    p = NULL;
}

int main(int argc, char **argv) {
    char *p = (char *)malloc(100);
    strcpy(p, "adadha");
    func(p);
    free(p);
    p = NULL;
    return 0;
}
// free(): double free detected in tcache 2
