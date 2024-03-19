#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "r");
    if (file == NULL)
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Move the file pointer to the end of the file
    fseek(file, 0, SEEK_END);

    // Get the current position of the file pointer
    long position = ftell(file);

    printf("The size of the file is %ld bytes.\n", position);

    fclose(file);
    return 0;
}