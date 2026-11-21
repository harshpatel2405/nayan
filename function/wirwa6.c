// * 6. Accept two numbers and print the greater one.

#include <stdio.h>

void maxOfTwo(int, int);
// void maxOfTwo(int a, int b);

int main()
{
    int a = 150;
    int b = 18;
 
    maxOfTwo(a, b); // * actual parameters
    return 0;
}
void maxOfTwo(int a, int b)
{
    if(a> b)
    {
        printf("%d is greater than %d",a,b);
    }
    else
    {
        printf("%d is greater than %d",b,a);
    }
}