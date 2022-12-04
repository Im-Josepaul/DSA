#include <stdio.h>
#include "../Function.c"
int main()
{
    int *arr,*sort,lim,i;
    printf("Enter the total number of numbers: ");
    scanf("%d",&lim);
    int array[lim];
    arr = ArrayInput(array,lim);
    sort = InsertionSort(arr,lim);
    printf("The given array after sorting is: \n");
    for(i=0; i<lim; i++)
    {
        printf("%d ",sort[i]);
    }
    return 0;
}