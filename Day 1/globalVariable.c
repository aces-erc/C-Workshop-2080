#include <stdio.h>

// Global variable
int globalVariable = 10;

// Function to increment the global variable
void incrementGlobalVariable()
{
    globalVariable++;
}

int main()
{
    printf("Initial value of globalVariable: %d\n", globalVariable);

    // Increment the global variable
    incrementGlobalVariable();

    printf("Value of globalVariable after increment: %d\n", globalVariable);

    return 0;
}