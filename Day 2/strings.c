#include <stdio.h>

int main()
{
    // Declaring and initializing a string
    char str[] = "Hello, World!";

    // Printing the string
    printf("String: %s\n", str);

    // Accessing individual characters in the string
    printf("First character: %c\n", str[0]);
    printf("Second character: %c\n", str[1]);

    // Modifying the string
    str[7] = 'C';
    printf("Modified string: %s\n", str);

    return 0;
}