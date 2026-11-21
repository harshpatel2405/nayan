#include <stdio.h>

// * check whether a number is prime and palindrome

// & function declaration and function definition
int prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int reverseFunction(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    return rev;
}

int palindrome(int n)
{
    int reverse = reverseFunction(n);

    if (reverse == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);
    int Pr = prime(n);
    int Pa = palindrome(n);

    if (Pr == 1 && Pa == 1)
        printf("%d is prime and palindrome ", n);
    else if (Pr == 1)
        printf("%d is Prime and Not Palindrome", n);
    else if (Pa == 1)
        printf("%d is Palindrome and not Prime", n);
    else
        printf("%d is not prime and palindrome", n);

    return 0;
}