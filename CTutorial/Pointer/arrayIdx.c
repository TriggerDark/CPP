#include <stdio.h>

int main(void) {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

#if 0
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
#endif
#if 0
    for (int i = 0; i < 10; i++) {
        printf("%d\n", *(arr + i));
    }
#endif
#if 1
    int  *p = arr;
    printf("%p\n", p);
    for (int i = 0; i < 10; i++) {
        printf("%d\n", *p++); // *(p++)
    }
#endif
   printf("%p\n", arr);

    return 0;
}
