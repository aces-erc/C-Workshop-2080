/**
 * @file stdio.h
 * @brief This header file contains declarations for input and output operations in C.
 *
 * The stdio.h header file provides functions and macros for performing input and output operations
 * in the C programming language. It defines various types, such as FILE, and provides functions
 * for reading from and writing to files, as well as for reading from and writing to the standard
 * input and output streams.
 *
 * For more information on the functions and macros provided by stdio.h, refer to the C standard
 * library documentation.
 */
#include <stdio.h>

/**
 * @brief This is the main function of the program.
 *
 * It serves as the entry point for the program execution.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of strings containing the command-line arguments.
 * @return int The exit status of the program.
 */
int main(int argc, char const *argv[])
{
    printf("Hello, World!\n");
    return 0;
}
