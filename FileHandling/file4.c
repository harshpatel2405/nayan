#include <stdio.h>

struct Student
{
    int age;
    float marks;
    char name[20];
};

int main()
{
    FILE *fp;

    fp = fopen("data.txt", "w+");

    if (fp == NULL)
    {
        printf("File does not exist");
        return 0;
    }

    // * fwrite -- normal variables , array, structure , string

    // & normal variables

    // * fwrite normal variables
    // int a = 100;
    // fwrite(&a, sizeof(a), 1, fp);

    // // ^ setting cursor to 0
    // fseek(fp, 0, SEEK_SET);

    // // * fread to read normal variable
    // int b;
    // fread(&b, sizeof(b), 1, fp);
    // printf("B : %d\n", b);

    // & array variables
    // * fwrite array variables
    // int arr[5] = {10, 20, 30, 40, 50};
    // fwrite(arr, sizeof(arr), 1, fp);

    // // ^ setting cursor to 0
    // fseek(fp, 0, SEEK_SET);

    // // * fread array variable
    // int arr1[5];
    // // fread(arr1, sizeof(arr1), 1, fp); // * both are valid
    // fread(arr1, sizeof(int), 5, fp); // * both are valid

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\t", arr1[i]);
    // }

    // * fwrite structure variable
    struct Student s1 = {12, 99.85, "Harsh"};
    fwrite(&s1, sizeof(s1), 1, fp);

    // ^ setting cursor to 0
    fseek(fp, 0, SEEK_SET);

    // * fread structure variable
    struct Student s2;
    // fread(&s2, sizeof(s2),1, fp); // * valid
    // fread(&s2, sizeof(struct Student),1, fp); // * valid
    fread(&s2, sizeof(int), 7, fp); // * valid

    printf("%d\t%f\t%s\n", s2.age, s2.marks, s2.name);

    fclose(fp);
    return 0;
}
