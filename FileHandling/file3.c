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

    // * put character
    putc('H', fp);
    putc('a', fp);
    putc('r', fp);
    putc('s', fp);
    putc('h', fp);

    // * setting the cursor at starting
    fseek(fp, 0, SEEK_SET);

    // * get character
    // printf("%c", getc(fp)); // * single character
    
    char ch;
    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    } // * for printing multiple characters

    fclose(fp);
    return 0;
}