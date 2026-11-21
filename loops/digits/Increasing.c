// * Check whether the digits are in increasing order or not
// * 1234 -> 4 3 2 1
// * 1 < 2 < 3 < 4
// * 4 > 3 > 2 > 1

#include <stdio.h>

int main()
{
    int n;
    int temp;
    int prev;

    printf("Enter a number : ");
    scanf("%d", &n);

    prev = n % 10;
    temp = n;

    while (n > 0)
    {
        int ld = n % 10;
        if (ld > prev)
        {
            printf("Not in Increasing Order..");
            return 0;
        }

        prev = ld;
        n /= 10;
    }

    printf("Digits are in increasing order.");
    return 0;
}

/*
* Decreasing Order
*/