#include <stdio.h>

void changeValue(int *b)
{
    // !b = 56; // b is pointer variable which can store addres and we are providing value   X
    *b = 56;
}

int main()
{
    int a = 45;

    // * call by reference
    printf("Before Passing to the function : %d\n",a); // * 45
    changeValue(&a);
    printf("After Passing to the function : %d\n",a);  // * 56
    return 0;
}