// * find max from array elements

// * Task : Find minimum from array 
// * Task : search an element in array

#include <stdio.h>

int main()
{
    int n;
    printf("Enter value for n : ");
    scanf("%d", &n);
    int arr[n];

    // * input
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    // *  finding max
    int max = arr[0];
    printf("Max value is %d\n",max);
    for (int i = 1; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
            printf("New Max Value is %d (Index : %d)\n", max, i);
        }
    }
    printf("Max element from array is %d", max);
    return 0;
}