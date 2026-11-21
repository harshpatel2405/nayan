// * find average of array elements
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

    // * sum
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    float avg = sum / n;
    printf("Average of array elements is %f", avg);

    return 0;
}