// * Reverse an array
/*
*   0  1  2  3  4
*   10 20 30 40 50
*   50 40 30 20 10

low = 0     low++
high = n-1  high--
*/

#include <stdio.h>

int main()
{
    int n = 5;
    int arr[5] = {10,20,30,40,50};
    int low = 0, high = n - 1;

    printf("Before Reversing Array ::\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    while (low <= high)
    {
        int temp = arr[high];
        arr[high] = arr[low];
        arr[low] = temp;

        low++;
        high--;
    }

    printf("\nAfter Reversing Array ::\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}