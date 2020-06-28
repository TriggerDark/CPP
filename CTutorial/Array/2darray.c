#include <stdio.h>

int main(void)
{
    int array[3][4];
    printf("sizeof(array) = %ld\n", sizeof(array));
    printf("sizeof(array[0] = %ld\n", sizeof(array[0]));
    printf("sizeof(int[4]) = %ld\n", sizeof(int[4]));

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<4; j++)
        {
            printf("array[%d][%d] = %p\n", i, j, &array[i][j]);
        }
    }

    return 0;
}