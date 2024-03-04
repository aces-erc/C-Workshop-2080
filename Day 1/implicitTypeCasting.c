#include <stdio.h>

int main()
{
    int num1 = 10;
    float num2 = 3.14;
    double num3;

    num3 = num1; // Implicit typecasting from int to double
    printf("num3: %lf\n", num3);

    num3 = num2; // Implicit typecasting from float to double
    printf("num3: %lf\n", num3);

    return 0;
}