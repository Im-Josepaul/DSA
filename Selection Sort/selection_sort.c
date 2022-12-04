#include <stdio.h>
int main()
{
    int limit,i,j,min_val,pos;
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
    while (k < limit-1)
    {
        min_val = arr[k];
        for (i=k+1; i<limit; i++)
        {
            if (min_val > arr[i])
            {
                min_val = arr[i];
                pos = i;
            }
        }
        temp = arr[k];
        arr[k] = min_val;
        arr[pos] = temp;
        k++;
    }
    printf("\nGiven array sorted using selection sort is: \n");
    for ( i = 0; i < limit; ++i)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
