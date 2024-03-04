#include <stdio.h>

void printHelloWorld(int n)
{
    if (n > 0)
    {
        printf("Hello, World!\n");
        printHelloWorld(n - 1);
    }
}

int main()
{
    int n = 5; // Number of times to print "Hello, World!"
    printHelloWorld(n);
    return 0;
}