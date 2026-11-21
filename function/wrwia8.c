// * 8. Return whether a fixed number is palindrome or not.

#include <stdio.h>

int checkPalindrome();
int getReverse(int);

int main()
{
    int ans = checkPalindrome();

    if (ans == 1)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is not Palindrome");
    }

    return 0;
}

int checkPalindrome()
{
    int originalNumber;

    printf("Enter a number to check whether it is palindrome or not  : ");
    scanf("%d", &originalNumber);

    int reversedNumber = getReverse(originalNumber);

    if (reversedNumber == originalNumber)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int getReverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }

    return rev;
}