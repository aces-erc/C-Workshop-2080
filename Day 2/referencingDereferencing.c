#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr; // pointer variable

    ptr = &num; // referencing operator

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Dereferenced value of ptr: %d\n", *ptr); // dereferencing operator

    return 0;
}