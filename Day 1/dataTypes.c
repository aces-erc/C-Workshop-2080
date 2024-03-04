#include <stdio.h>

int main()
{
    // Integer data types
    int integerVariable = 10;
    short shortVariable = 20;
    long longVariable = 30;
    long long longLongVariable = 40;

    // Floating-point data types
    float floatVariable = 3.14;
    double doubleVariable = 2.71828;
    long double longDoubleVariable = 1.41421356;

    // Character data type
    char charVariable = 'A';

    // Displaying the values
    printf("Integer: %d\n", integerVariable);
    printf("Short: %hd\n", shortVariable);
    printf("Long: %ld\n", longVariable);
    printf("Long Long: %lld\n", longLongVariable);
    printf("Float: %f\n", floatVariable);
    printf("Double: %lf\n", doubleVariable);
    printf("Long Double: %Lf\n", longDoubleVariable);
    printf("Character: %c\n", charVariable);

    return 0;
}