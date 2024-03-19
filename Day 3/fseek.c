#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "r");
    if (file == NULL)
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Move the file pointer to the 10th byte from the beginning of the file
    if (fseek(file, 10, SEEK_SET) != 0)
    {
        printf("Failed to move the file pointer.\n");
        return 1;
    }

    // Read and print the character at the current file position
    int ch = fgetc(file);
    printf("Character at position 10: %c\n", ch);

    fclose(file);
    return 0;
}