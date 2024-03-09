#include <stdio.h>

// Define a structure
struct Person
{
    char name[50];
    int age;
};

// Function that takes a structure as a parameter
void displayPerson(struct Person p)
{
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
}

int main()
{
    // Create a structure variable
    struct Person person1;

    // Assign values to the structure members
    strcpy(person1.name, "John");
    person1.age = 25;

    // Call the function and pass the structure as an argument
    displayPerson(person1);

    return 0;
}