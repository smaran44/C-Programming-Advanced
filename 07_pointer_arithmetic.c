#include <stdio.h>  // Including the standard input-output library for printing and input functionality

int main() {
    int age = 22;         // Declaring an integer variable `age` and initializing it with the value 22
    int *ptr = &age;      // Declaring a pointer `ptr` and assigning it the address of `age`

    int _age = 25;        // Declaring another integer variable `_age` and initializing it with the value 25
    int *_ptr = &_age;    // Declaring another pointer `_ptr` and assigning it the address of `_age`

    // Printing the memory address stored in `ptr` (address of `age`)
    // %u is used to print unsigned integers, which is common for memory addresses
    printf("%u\n", ptr);

    // Pointer arithmetic: Incrementing `ptr` to point to the next memory location
    // Since `ptr` points to an integer, `ptr++` increases the address by the size of an integer (typically 4 bytes)
    ptr++;
    printf("%u\n", ptr);  // Printing the incremented memory address

    // Pointer arithmetic: Decrementing `ptr` to return to the original memory location
    ptr--;
    printf("%u\n", ptr);  // Printing the decremented (original) memory address

    // Pointer subtraction: Calculating the difference between two pointers (`ptr` and `_ptr`)
    // This gives the number of integer-sized memory locations between the two pointers
    // The result is not a memory address but the number of elements between the two pointers
    ptr = ptr - _ptr;
    printf("%u\n", ptr);  // Printing the result of the pointer subtraction

    printf("%d\n", ptr == _ptr);  // Printing the result of the comparison

    // Assigning the address of `_age` to `ptr`
    ptr = &_age;

    printf("%u\n", ptr);  // Printing the result of the pointer subtraction
    printf("%u\n", _ptr);

    // Comparing two pointers: Checking if `ptr` and `_ptr` point to the same memory location
    // The result of the comparison (`ptr == _ptr`) is either 1 (true) or 0 (false)
    printf("%d\n", ptr == _ptr);  // Printing the result of the comparison

    return 0;  // Indicating that the program executed successfully
}
