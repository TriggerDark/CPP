/*************************************************************************
  >  File  Name  : allocVla.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/08 17:06:39
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// vla
int main(int argc, char** argv) {
    int* pa;
    printf("start len:");
    int len;
    scanf("%d", &len);
    pa = (int*)malloc(len * sizeof(int));

    int oldlen = len;

    for (int i = 0; i < len; i++) {
        pa[i] = 100 + i;
        printf("%d\n", pa[i]);
    }

    printf("pls input new len:");
    scanf("%d", &len);
    pa = (int*)realloc(pa, len*sizeof(int));
    for (int i=0; i<len; i++){
        if (i>=oldlen)
            pa[i] = 200+i;
        printf("%d\n", pa[i]);
    }
    free(pa);

    return 0;
}
