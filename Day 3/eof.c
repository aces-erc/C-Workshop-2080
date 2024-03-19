#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "r");
    if (file == NULL)
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(file)) != EOF)
    {
        // Process the character
        putchar(ch);
    }

    if (feof(file))
    {
        printf("\nReached the end of the file.\n");
    }
    else
    {
        printf("\nAn error occurred while reading the file.\n");
    }

    fclose(file);
    return 0;
}