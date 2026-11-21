// * 1. without return type without arguments

#include <stdio.h>

// * 1. function decalration / prototype
void add();
void greet();

int main()
{
    // * 3. function calling
    greet();
    add();
    return 0;
}

// * 2. function definition
void add()
{
    int a = 12;
    int b = 45;

    printf("WiRWiA --> Addition of %d and %d is %d\n", a, b, a + b);
} // logic

void greet()
{
    printf("Hello User , Welcome to C Language\n");
}