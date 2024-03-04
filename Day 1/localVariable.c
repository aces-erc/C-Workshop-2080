#include <stdio.h>

void printMessage()
{
    // Local variable
    int count = 5;

    printf("Inside printMessage() function\n");
    printf("Count: %d\n", count);
}

int main()
{
    // Local variable
    int num = 10;

    printf("Inside main() function\n");
    printf("Num: %d\n", num);

    printMessage();

    return 0;
}