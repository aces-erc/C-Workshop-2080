#include <stdio.h>

// Define a structure
struct Person
{
    char name[50];
    int age;
};

int main()
{
    // Create an instance of the structure
    struct Person person;

    // Prompt the user to enter the details
    printf("Enter name: ");
    fgets(person.name, sizeof(person.name), stdin);
    printf("Enter age: ");
    scanf("%d", &person.age);

    // Open the file in write mode
    FILE *file = fopen("person.txt", "w");

    // Check if the file opened successfully
    if (file != NULL)
    {
        // Write the structure to the file
        fwrite(&person, sizeof(struct Person), 1, file);

        // Close the file
        fclose(file);
    }
    else
    {
        printf("Failed to open the file.\n");
    }

    // Open the file in read mode
    file = fopen("person.txt", "r");

    // Check if the file opened successfully
    if (file != NULL)
    {
        // Read the structure from the file
        fread(&person, sizeof(struct Person), 1, file);

        // Print the details
        printf("Name: %s", person.name);
        printf("Age: %d\n", person.age);

        // Close the file
        fclose(file);
    }
    else
    {
        printf("Failed to open the file.\n");
    }

    return 0;
}