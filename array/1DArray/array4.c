// * Task : search an element in array

#include <stdio.h>
#include "inputArrayElements.h"

int main()
{
    int n;
    printf("Enter value for n : ");
    scanf("%d", &n);
    int arr[n];

    // * input
    inputElements(arr, n);

    // *  searching element
    int target;
    int isElementPresent = 0;
    printf("Enter element you want to search : ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++)
    {
        if (target == arr[i])
        {
            printf("Element found at %d index\n", i);
            isElementPresent = 1;
            break;
        }
    }

    if (isElementPresent == 0)
    {
        printf("Element is not present in the array");
    }
    return 0;
}