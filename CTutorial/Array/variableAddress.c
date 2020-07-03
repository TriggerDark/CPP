#include <stdio.h>

int main(void){
    char a; short b; int c; double d;

    printf("&a=%p\n", &a); //printf("&a=%#x\n", &a);
    printf("&b=%p\n", &b); //printf("&b=%#x\n", &b);
    printf("&c=%p\n", &c); //printf("&c=%#x\n", &c);
    printf("&d=%p\n", &d); //printf("&d=%#x\n", &d);

    return 0;
}