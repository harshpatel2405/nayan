#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("data.txt", "w+");

    if (fp == NULL)
    {
        printf("File does not exist");
        return 0;
    }

    // * put string
    fputs("This is fputs", fp);

    // * setting cursor to zero for reading
    fseek(fp, 0, SEEK_SET);

    // * reading data from file using fgets
    char str[20];
    fgets(str, sizeof(str), fp);

    printf("str : %s", str);

    fclose(fp);
    return 0;
}