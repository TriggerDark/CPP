#include <stdio.h>

int main(void) {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int  *p = arr;
    printf("%p\n", p);
    for (int i = 0; i < 10; i++) {
        printf("%d\n", *p++); // *(p++)
    }
    return 0;
}
