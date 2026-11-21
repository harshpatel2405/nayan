// * (Number divisible by sum of digits)
// * 12 -> 1 + 2 = 3    --> 12 / 3

#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    int temp;

    printf("Enter a number : ");
    scanf("%d", &n);

    temp = n;

    while (n > 0)
    {
        int ld = n % 10;
        sum += ld;
        n /= 10;
    }

    if (temp % sum == 0)
        printf("%d is harshad number", temp);
    else
        printf("%d is not harshad number", temp);
    return 0;
}