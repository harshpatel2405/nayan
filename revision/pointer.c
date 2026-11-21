/*
* Pointer - data type (derived)
* pointer is dereferencer -> it will decode the value
* pointer variable will store address of another variable inside it
* symbol : *

* storing address in ptr and accessing value at that address using *ptr

* memory is allocated
    ! bottom to top
    ! right to left
*/

#include <stdio.h>

int main()
{
    int *p;
    int a = 12;

    p = &a; // & address of a is stored in p (value of a was 12 when stored)

    a = 15;

    printf("1. A  : %d\n", a);  // ^ 15
    printf("2. &a : %u\n", &a); // ^ no change
    printf("3. p  : %u\n", p);  // ^ no change
    printf("4. *p : %d\n", *p); // ^ 15 (it is not accessing a , it is accessing value which is there on address of A)
    printf("5. &p : %u\n", &p);

    // * swap using pointer
    int b = 10, c = 20;
    int *r, *s;

    r = &b;
    s = &c;

    printf("B : %d\tC : %d\n", b, c);
    int temp = *r;
    *r = *s;
    *s = temp;

    printf("B : %d\tC : %d\n", b, c);

    // * pointer to pointer
    int *abc, **ptr;
    int rst = 145;

    abc = &rst;
    ptr = &abc;

    printf("1. rst  : %d\n", rst);
    printf("2. &rst : %u\n", &rst);
    printf("3. abc  : %u\n", abc);
    printf("4. *abc  : %d\n", *abc);
    printf("5. &abc  : %u\n", &abc);
    printf("6. ptr : %u\n", ptr);
    printf("7. *ptr : %u\n", *ptr);
    printf("8. **ptr : %d\n", **ptr);
    printf("9. &ptr : %u\n", &ptr);

    return 0;
}