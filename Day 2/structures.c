#include <stdio.h>

// Define a structure to represent a person
struct Person
{
    char name[50];
    int age;
    float height;
};

int main()
{
    // Declare a variable of type struct Person
    struct Person person1;

    // Assign values to the members of the structure
    strcpy(person1.name, "John Doe");
    person1.age = 30;
    person1.height = 1.75;

    // Print the values of the structure members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}