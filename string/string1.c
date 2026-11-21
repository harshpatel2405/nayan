#include <stdio.h>
#include <string.h>

int main()
{
    /*
    last character of any string is \0
    1. strlen -- returns length of the string
    2. strcmp -- returns whether two strings are same or not (by ascii difference)  (HARSH and Harsh)
    3. strcpy -- copies one string into another
    4. strcat -- concatenates one string into another
    5. strrev -- reverses the string
    6. strlwr -- converts string into lowercase
    7. strupr -- converts string into uppercase
    */

    char name[20] = "Harsh Patel";

    printf("Length of %s is %d\n", name, strlen(name));

    char str1[20] = "HARSH";
    char str2[20] = "harsh";

    if (strcmp(str1, str2) == 0)
    {
        printf("Both strings are same");
    }
    else
    {
        printf("Both strings are not same");
    }

    strlwr(str1);
    printf("\nLowercase : %s\n", str1);

    strupr(str2);
    printf("Uppercase : %s\n", str2);

    strrev(name);
    printf("Reverse of Harsh Patel is %s", name);

    strcat(name , "Shah");
    printf("\nName : %s\n",name);
    
    strcpy(name , str1);
    printf("\n %s", name);


    return 0;
}