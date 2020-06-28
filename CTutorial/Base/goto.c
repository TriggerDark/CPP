#include <stdio.h>

int main(void)
{
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            if (j == 5)
                goto Target;
        }
    }
    Target:
        printf("hahah\n");
    return 0;
}