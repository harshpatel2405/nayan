/*
 *  Create a structure Rectangle with:
 *
 *  length
 *  width
 *
 *  Calculate and display area and perimeter
 */

#include <stdio.h>

struct Rectangle
{
    float length;
    float width;
} r1;

void inputData()
{
    printf("Enter width : ");
    scanf("%f", &r1.width);

    printf("Enter Length  : ");
    scanf("%f", &r1.length);
}

float calculateArea()
{
    return r1.length * r1.width;
}

float calculatePerimeter()
{
    return 2 * (r1.length + r1.width);
}

int main()
{
    inputData();
    printf("%f\n", calculateArea());
    printf("%f", calculatePerimeter());
    return 0;
}