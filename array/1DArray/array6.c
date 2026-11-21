// * Reverse an array
/*
*   0  1  2  3  4
*   5   4  3  2  1
*   4   5  3  2  1

low = 0     low++
high = n-1  high--
*/

#include <stdio.h>

int main()
{
    int n = 5;
    int arr[5] = {56, 8, 11, 32186, 5156};
    int i, j;

    printf("Before Sorting Array ::\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nAfter Sorting Array ::\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}