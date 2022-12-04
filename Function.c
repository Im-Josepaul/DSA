#include <stdio.h>
int *InsertionSort(int *arr,int lim)
{
    int i,j,key;
    for (i=1; i<lim; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return arr;
}

int *ArrayInput(int *arr,int limit)
{
    int i;
    printf("Enter the elements: \n");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    return arr;
}
