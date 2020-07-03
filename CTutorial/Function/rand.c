#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int count = 0;
    int randArr[10];
    srand(time(NULL));
    while (1) {
        int num = rand() % 10;
        randArr[count++] = num;
        for (int i = 0; i < count - 1; i++) {
            if (randArr[i] == randArr[count - 1]) {
                count--;
                break;
            }
        }
        if (count == 10) break;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", randArr[i]);
    }
    return 0;
}
