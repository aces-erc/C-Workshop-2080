#include <stdio.h>

int main()
{
    FILE *file;
    char data[100];

    // Open file in write mode
    file = fopen("example.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Write data to file
    fprintf(file, "Hello, World!\n");
    fprintf(file, "This is an example file.\n");

    // Close file
    fclose(file);

    // Open file in read mode
    file = fopen("example.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Read data from file
    while (fgets(data, sizeof(data), file) != NULL)
    {
        printf("%s", data);
    }

    // Close file
    fclose(file);

    return 0;
}