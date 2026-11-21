#include <stdio.h>

void changeValue(int b)
{
    b = 56;
}

int main()
{
    int a = 45;

    // * call by value
    printf("Before Passing to the function : %d\n",a); // * 45
    changeValue(a);
    printf("After Passing to the function : %d\n",a);  // * 45 , 56
    return 0;
}