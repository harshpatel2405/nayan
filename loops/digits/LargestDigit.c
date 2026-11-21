#include <stdio.h>
/*
8527 -> 7 2 5 8

max = 7


*/

int main()
{
    int n;
    int max;

    printf("Enter a number : ");
    scanf("%d", &n);

    max = n % 10;

    while (n > 0)
    {
        int ld = n % 10;

        if (max < ld)
            max = ld;

        n /= 10;
    }

    printf("Maximum Digit is %d", max);
    return 0;
}

/*
* Smallest of all digits
*/