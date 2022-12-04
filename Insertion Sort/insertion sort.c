#include <stdio.h>
int main()
{
    int limit,i,j,swap,key;
    printf("Enter the total number of numbers: ");
    scanf("%d",&limit);
    int arr[limit],k=0,temp;
    printf("Enter the elements: \n");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The given array is: \n");
    for(i=0; i<limit; i++)
    {
        printf("%d ",arr[i]);
    }
    for (i=1; i<limit; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("\nArray sorted using Insertion sort is: \n");
    for (i=0; i<limit; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}