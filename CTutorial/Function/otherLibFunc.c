#include <math.h>
#include <stdio.h>
#include <ctype.h>

int main(void) {
    double data = 9.0;
    double root = sqrt(data);
    printf("%f\n", root);

    double power = pow(data, 2);
    printf("%f\n", power);

    printf("%f\n", ceil(3.14));   // 向上取整
    printf("%f\n", floor(3.14));  // 向下取整

    for (char ch = 'a'; ch <= 'z'; ch++) {
        // putchar(toupper(ch));
        printf("%c", toupper(ch));
        // putchar(ch - 32);
        // putchar(tolower(ch));
    }
    putchar(10);
    return 0;
}
