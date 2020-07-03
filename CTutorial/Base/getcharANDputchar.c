#include <stdio.h>

int main()
{
    // putchar
    printf("%c %c\n", 'a', 97);
    putchar('a'); putchar(97);
    putchar(10); putchar('\n');

    // getchar
    int a;
    char b;
    scanf("%d", &a);
    getchar();
    scanf("%c", &b);
    printf("a=%d b=%c b=%d", a, b, b);
    return 0;
}
