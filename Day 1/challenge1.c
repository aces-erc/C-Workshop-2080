#include <stdio.h>
int main()
{
    char c = 120;
    c = c + 10; // Implicit typecasting from int to char
    printf("c: %d\n", c);
    return 0;
}