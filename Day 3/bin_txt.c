#include <stdio.h>

int main()
{
    // Creating a binary file
    FILE *binaryFile = fopen("data.bin", "wb");
    if (binaryFile == NULL)
    {
        printf("Failed to create binary file.\n");
        return 1;
    }

    int binaryData[] = {1, 2, 3, 4, 5};
    int binaryDataSize = sizeof(binaryData) / sizeof(binaryData[0]);

    fwrite(binaryData, sizeof(int), binaryDataSize, binaryFile);
    fclose(binaryFile);

    // Reading the binary file
    binaryFile = fopen("data.bin", "rb");
    if (binaryFile == NULL)
    {
        printf("Failed to open binary file.\n");
        return 1;
    }

    int readBinaryData[binaryDataSize];
    fread(readBinaryData, sizeof(int), binaryDataSize, binaryFile);
    fclose(binaryFile);

    printf("Binary file contents: ");
    for (int i = 0; i < binaryDataSize; i++)
    {
        printf("%d ", readBinaryData[i]);
    }
    printf("\n");

    // Creating a text file
    FILE *textFile = fopen("data.txt", "w");
    if (textFile == NULL)
    {
        printf("Failed to create text file.\n");
        return 1;
    }

    char textData[] = "Hello, World!";
    fprintf(textFile, "%s", textData);
    fclose(textFile);

    // Reading the text file
    textFile = fopen("data.txt", "r");
    if (textFile == NULL)
    {
        printf("Failed to open text file.\n");
        return 1;
    }

    char readTextData[100];
    fgets(readTextData, sizeof(readTextData), textFile);
    fclose(textFile);

    printf("Text file contents: %s\n", readTextData);

    return 0;
}