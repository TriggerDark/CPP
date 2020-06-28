#include <stdio.h>
#define N 5

int main(void)
{
    int arr[N] = {5, 4, 3, 2, 1};

#if 0
    for (int i=0; i<N-1; i++)
    {
        for (int j=i+1; j<N; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
#endif

    int temp, idx;
    for (int i=0; i<N-1; i++)
    {
        idx = i;
        for (int j=i+1; j<N; j++)
        {
            if (arr[idx] > arr[j])
                idx = j;
        }

        if (idx != i) 
        {
            temp = arr[idx];
            arr[idx] = arr[i];
            arr[i] = temp;
        }

    }

    for (int i=0; i<N; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}