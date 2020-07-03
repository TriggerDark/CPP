#include <stdio.h>

int main(void) {
    // char *p = 0x0001;
    // int *q = 0x0001;

    // if (p == q)
    //     printf("==");
    // else
    //     printf("!=");

#if 0
    int *p, *q;
    int data = 100;
    p = &data;
    data += 200;
    q = &data;
    if (p == q)
        printf("q==p\n");
#endif

    char name[5] = {'m', 'a', 'd', 'a', 'm'};
    char *ph = &name[0], *pt = &name[4];
    int flag = 1;
    while (ph < pt) {
        if (*ph == *pt) {
            ph++;
            pt--;
        } else {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("回文\n");
    else
        printf("非回文\n");
    return 0;
}
