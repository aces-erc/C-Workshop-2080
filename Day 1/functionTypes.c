#include <stdio.h>

// Function with no return value and no parameters
void greet()
{
    printf("Hello, world!\n");
}

// Function with return value and no parameters
int addNumbers()
{
    int a = 5, b = 10;
    int sum = a + b;
    return sum;
}

// Function with no return value and parameters
void printName(char name[])
{
    printf("Name: %s\n", name);
}

// Function with return value and parameters
int multiply(int a, int b)
{
    int product = a * b;
    return product;
}

int main()
{
    greet();

    int sum = addNumbers();
    printf("Sum: %d\n", sum);

    char name[] = "John Doe";
    printName(name);

    int result = multiply(3, 4);
    printf("Result: %d\n", result);

    return 0;
}