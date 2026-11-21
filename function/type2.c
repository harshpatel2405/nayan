// * 1. without return type with arguments

#include <stdio.h>

// * 1. function decalration / prototype
void add(int , int );


int main()
{
    int a = 45;
    int b = 12;
    // * 3. function calling
    // greet();
    add(a, b); // * actual parameters (values)   add(45,12)
    return 0;
}

// * 2. function definition
void add(int abc, int b) // * formal parameters
{
    printf("WiRWA --> Addition of %d and %d is %d\n", abc, b, abc + b);
} // logic
