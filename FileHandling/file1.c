#include <stdio.h>

int main()
{
    FILE *fp;

    // * file opening and mode
    fp = fopen("data.txt", "w");

    if (fp == NULL)
    {
        printf("File has not been created or does not exist");
        return 0;
    }

    // fprintf(fp,"This is third line\n");

    // * fprintf  -- write
    int age = 12;
    float marks = 785.56;
    fprintf(fp, "%d ", age);
    fprintf(fp, "%f", marks);
    // fprintf(fp, "Your age is %d", age);
    fclose(fp);

    fp = fopen("data.txt", "r");

    // * fscanf  -- read
    int ageFromFile;
    float marksFromFile;

    fscanf(fp, "%d %f", &ageFromFile, &marksFromFile);

    printf("Age : %d\n", ageFromFile);
    printf("Marks : %f\n", marksFromFile);

    // char str[20];
    // while (fscanf(fp, "%s", str) != EOF)
    // {
    //     printf("%s ", str);
    // }

    // * closing the file
    fclose(fp);
    return 0;
}