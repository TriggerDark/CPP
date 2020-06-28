#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int arr[10];
    for (int i=0; i<10; i++)
    {
        arr[i] = rand();
    }

    for (int i=0; i<10; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    for (int i=1; i<10; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("max = %d\nmin = %d\n", max, min);
    return 0;
}