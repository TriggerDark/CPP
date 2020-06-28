#include <stdio.h>

// 如果a==b打印a==b的信息
// 如果a>b的信息，打印a>b的信息
// 如果不满足则不打印
int main(void) {
    int a = 3, b = 5;

#if 0
    if (a != b) {
        if (a > b) {
            printf("a>b\n");
        }
    } else {
        printf("a==b\n");
    }
#endif

#if 0
    if (a == b) {
        printf("a==b\n");
    } else if (a > b) {
        printf("a>b\n");
    } else {
        printf("a<b\n");
    }
#endif

    int score;
    printf("pls input score:");
    scanf("%d", &score);

    if (score > 90) {
        printf("优秀\n");
    } else if (score > 80) {
        printf("良好\n");
    } else if (score > 70) {
        printf("中等\n");
    } else if (score > 60) {
        printf("及格\n");
    } else {
        printf("不及格\n");
    }

    return 0;
}