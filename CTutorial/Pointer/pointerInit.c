#include <stdio.h>

int main(void) {
    char a = 1;
    char *p = (char*)&a;
    printf("*p=%d\n", *p);

    printf("&a=%p\n", &a);
    printf("p=%p\n", p);

    return 0;
}
