#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 3;
    float result;

    result = (float)num1 / num2; // Explicitly typecast num1 to float

    printf("Result: %.2f\n", result);

    return 0;
}