#include <stdio.h>
#include "../Function.c"
int main()
{
    int limit,i,*arr,*sort;
    printf("Enter the total number of numbers: ");
    scanf("%d",&limit);
    int array[limit];
    arr = ArrayInput(array,limit);
    printf("The given array is: \n");
    for(i=0; i<limit; i++)
    {
        printf("%d ",arr[i]);
    }
    sort = InsertionSort(arr,limit);
    printf("\nArray sorted using Insertion sort is: \n");
    for (i=0; i<limit; i++)
    {
        printf("%d ",sort[i]);
    }
    return 0;
}