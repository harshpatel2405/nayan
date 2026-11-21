#include <stdio.h>

// * function declaration
char calculateGrade(float, float, float);

int main()
{
    float a, b, c;

    printf("Enter marks of three subjects (out of 50): ");
    scanf("%f%f%f", &a, &b, &c);

    char ch = calculateGrade(a, b, c);

    printf("Grade : %c", ch);
    return 0;
}

// * function definition
char calculateGrade(float x, float y, float z)
{
    float sum = x + y + z;
    float percentage = (sum / 150) * 100;

    printf("Sum : %0.1f\n", sum);
    printf("Percentage : %0.1f\n", percentage);

    if (percentage >= 90)
        return 'A';
    else if (percentage >= 75 && percentage < 90)
        return 'B';
    else if (percentage >= 60 && percentage < 75)
        return 'C';
    else if (percentage >= 45 && percentage < 60)
        return 'D';
    else
        return 'F';
}

// call by value