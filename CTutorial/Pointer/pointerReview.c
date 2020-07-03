#include <stdio.h>

int main(void) {
    int data = 305419896;

    printf("%p\n", &data);
    printf("%p\n", (char *)&data);
    printf("%p\n", (short *)&data);
    printf("%p\n", (int *)&data);

    printf("%x\n", *(char *)&data);
    printf("%x\n", *(short *)&data);
    printf("%x\n", *(int *)&data);

    return 0;
}
