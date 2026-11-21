// * 9. Return sum of digits of a number.

#include <stdio.h>

int sumOfDigits(int n);

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    int ans = sumOfDigits(n);
    printf("Sum Of Digits of %d are %d",n, ans);
    return 0;
}

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        sum += ld;
        n = n / 10;
    }

    return sum;
}