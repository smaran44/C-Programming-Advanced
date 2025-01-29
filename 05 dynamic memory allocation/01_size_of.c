#include <stdio.h>
//dynamic memory allocation is a way to allocate memory to a data structure during the run time

int main() {
    // sizeof function is used to determine the size (in bytes) of a data type or variable
    printf("Size of int: %d bytes\n", sizeof(int));    // Size of an integer
    printf("Size of float: %d bytes\n", sizeof(float)); // Size of a float
    printf("Size of char: %d byte\n", sizeof(char));   // Size of a character

    return 0;
}