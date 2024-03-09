#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20];

    // String Length
    printf("Length of str1: %d\n", strlen(str1));

    // String Copy
    strcpy(str3, str1);
    printf("str3 after copying str1: %s\n", str3);

    // String Concatenation
    strcat(str1, str2);
    printf("str1 after concatenation: %s\n", str1);

    // String Comparison
    int result = strcmp(str1, str2);
    if (result == 0)
    {
        printf("str1 and str2 are equal\n");
    }
    else if (result < 0)
    {
        printf("str1 is less than str2\n");
    }
    else
    {
        printf("str1 is greater than str2\n");
    }

    return 0;
}