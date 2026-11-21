// *  Use one function to accept marks, another to calculate percentage, another to return grade, and finally display result

#include <stdio.h>

float calculatePercentage(int a, int b, int c)
{
    float ans = (a + b + c) / 3;
    return ans;
}

char calculateGrade(float percent)
{
    char ch;
    if (percent >= 90)
    {
        ch = 'A';
    }
    else if (percent >= 75 && percent < 90)
    {
        ch = 'B';
    }
    else if (percent >= 60 && percent < 75)
    {
        ch = 'C';
    }
    else
    {
        ch = 'F';
    }

    return ch;
}

void displayDetails()
{
    int a = 95;
    int b = 98;
    int c = 96;

    float percentage = calculatePercentage(a, b, c);
    char grade = calculateGrade(percentage);

    printf("Marks are :  %d ,%d, %d\n",a,b,c);
    printf("Percentage : %0.2f\n",percentage);
    printf("Grade : %c\n",grade);
}

int main()
{

    displayDetails();
    return 0;
}