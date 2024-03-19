#include <stdio.h>

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Writing data to a file
    FILE *file = fopen("data.bin", "wb");
    if (file != NULL)
    {
        fwrite(numbers, sizeof(int), size, file);
        fclose(file);
        printf("Data written to file successfully.\n");
    }
    else
    {
        printf("Failed to open file for writing.\n");
    }

    // Reading data from a file
    int readNumbers[size];
    file = fopen("data.bin", "rb");
    if (file != NULL)
    {
        fread(readNumbers, sizeof(int), size, file);
        fclose(file);
        printf("Data read from file:\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", readNumbers[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Failed to open file for reading.\n");
    }

    return 0;
}