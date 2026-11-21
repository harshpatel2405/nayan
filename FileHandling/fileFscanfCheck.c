#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("data.txt", "r");

    // * fscanf  -- read
    int ageFromFile;
    float marksFromFile;

    fscanf(fp, "%d %f", &ageFromFile, &marksFromFile);

    printf("Age : %d\n", ageFromFile);
    printf("Marks : %f\n", marksFromFile);

    fclose(fp);
    return 0;
}