#include <stdio.h>

int main (void)
{
    // 初始化
    // int array[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    // int array[3][4] = {{1}, {2, 2}, {3, 3, 3}};
    // int array[3][4] = {1, 2, 3, 4, 5};
    // int array[3][4] = {0};
    int array[][4] = {1, 2, 3, 4}; // 行省列不省
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<4; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}