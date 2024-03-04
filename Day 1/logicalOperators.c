#include <stdio.h>

int main()
{
    int a = 5, b = 10, c = 15;

    // Logical AND operator (&&)
    if (a > 0 && b > 0)
    {
        printf("Both a and b are greater than 0\n");
    }

    // Logical OR operator (||)
    if (a > 0 || c > 0)
    {
        printf("Either a or c is greater than 0\n");
    }

    // Logical NOT operator (!)
    if (!(a == b))
    {
        printf("a is not equal to b\n");
    }

    return 0;
}