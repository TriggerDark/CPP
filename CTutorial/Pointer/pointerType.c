#include <stdio.h>

int main(void) {
    int a = 0x12345678;
    printf("&a = %p\n", &a);

    //    printf("%x\n", *((int*)0x7ffc02115c84));
    //    printf("%x\n", *((char*)0x7ffc02115c84));
    //    printf("%x\n", *((short*)0x7ffc02115c84));
    return 0;
}
