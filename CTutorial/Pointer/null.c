#include <stdio.h>

int main(void) {
    int *p = NULL;  // NULL (void *) 0
    if (p != NULL) *p = 100;

    printf("sizeof(char) = %ld\n", sizeof(char));
    printf("sizeof(void) = %ld\n", sizeof(void));
    return 0;
}
