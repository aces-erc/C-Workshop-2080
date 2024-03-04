#include <stdio.h>

int main()
{
    unsigned int a = 5; // binary: 0101
    unsigned int b = 3; // binary: 0011

    // Bitwise AND
    unsigned int result_and = a & b; // binary: 0001
    printf("Bitwise AND: %u\n", result_and);

    // Bitwise OR
    unsigned int result_or = a | b; // binary: 0111
    printf("Bitwise OR: %u\n", result_or);

    // Bitwise XOR
    unsigned int result_xor = a ^ b; // binary: 0110
    printf("Bitwise XOR: %u\n", result_xor);

    // Bitwise NOT
    unsigned int result_not = ~a; // binary: 11111111111111111111111111111010
    printf("Bitwise NOT: %u\n", result_not);

    // Left shift
    unsigned int result_left_shift = a << 2; // binary: 010100
    printf("Left shift: %u\n", result_left_shift);

    // Right shift
    unsigned int result_right_shift = a >> 2; // binary: 0001
    printf("Right shift: %u\n", result_right_shift);

    return 0;
}