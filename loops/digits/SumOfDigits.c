#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        int ld = n % 10;
        sum += ld; // * sum = sum + ld;
        n /= 10;
    }

    printf("Sum of Digits is %d", sum);
    return 0;
}
// * Loop 
/*
* Odd-even print 
* odd-even sum 
* product of Digits
*/