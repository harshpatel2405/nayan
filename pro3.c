#include <stdio.h>

// void reverseFunction(int x);
void reverseFunction(int);

int main()
{
    int n = 1234;
    reverseFunction(n);
    return 0;
}

void reverseFunction(int x)
{
    int rev = 0;
    while (x > 0)
    {
        int ld = x % 10;
        rev = rev * 10 + ld;
        x /= 10;
    }

    printf("Reverse : %d\n\n", rev);
}

