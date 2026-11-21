#include <stdio.h>
// 123 -> 1 2 3
/*
123 / 10 = 12
12 / 10 = 1
1 / 10 = 0
*/
// Number of digits are 3

int main()
{
    int n;
    int count = 0;

    printf("Enter a number : ");
    scanf("%d", &n); // * intialisation

    while (n > 0) // * condition -- n != 0
    {
        count++; // * operational part / logic
        // printf("%d / 10 = ", n);
        n = n / 10; // * decrement
        // printf("%d\tCount : %d\n", n,count);
    }

    printf("\nNumber of Digits are %d", count);

    return 0;
}