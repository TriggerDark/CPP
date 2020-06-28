#include <stdio.h>

int main(void)
{
    int arr[10] = {1, 0, 9, 2, 8, 3, 7, 4, 6, 5};
    int idx, temp;
    // 排序
    for (int i=0; i<9; i++)
    {
        idx = i;
        for (int j=i+1; j<10; j++)
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

    for (int i=0; i<10; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    int key = 0;
    int mid, idy=-1;
    int low=0, high=9;
    while (low <= high)
    {
        mid = (low+high)/2;
        if (arr[mid] == key)
        {
            idy = mid;
            break;
        }
        if (arr[mid] < key)
            low = mid+1;
        if (arr[mid] > key)
            high = mid-1;
    }   
    printf("key idy = %d\n", idy);
    return 0;
}
