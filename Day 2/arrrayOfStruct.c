#include <stdio.h>

// Define the structure
struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    int i, n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of structures
    struct Student students[n];

    // Read the details of each student
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display the details of each student
    printf("\nDetails of students:\n");
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}