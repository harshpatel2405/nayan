// * 3. Input an array, print it using one function, find sum using another, and return maximum using another

#include <stdio.h>

void inputData(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
}

void displayData(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int maxFromArray(int arr[], int n)
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int n = 5;
    int arr[n];

    inputData(arr, n);

    displayData(arr, n);

    int sumofValue = sum(arr, n);
    printf("Sum Of Array Variables is %d\n", sumofValue);

    int max = maxFromArray(arr, n);
    printf("Max element from array is %d\n", max);

    return 0;
}