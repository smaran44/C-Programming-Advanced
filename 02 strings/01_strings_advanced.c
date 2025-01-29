#include <stdio.h>

int main() {
    // Declaration of string variables
    char name[] = "Smaran Yanapu"; // Declared and initialized with a string literal
    char course[] = {'s', 't', 'r', 'i', 'n', 'g', 's', ' ', 'a', 'd', 'v', '\0'}; // Declared as a character array with null terminator
    printf("Name: %s\n", name);
    printf("Course: %s\n", course);

    // Printing string using a loop
    printf("Printing string using a loop:\n");
    for (int i = 0; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }
    printf("\n");

    // Printing string using a pointer
    printf("Printing string using a pointer:\n");
    for (char *ptr = name; *ptr != '\0'; ptr++) {
        printf("%c", *ptr);
    }
    printf("\n");

    // Printing string using format specifier
    printf("Printing string using format specifier:\n");
    printf("%s\n", name);

    // Taking input for a single word string (no spaces allowed)
    char firstName[40];
    printf("Enter first name: ");
    scanf("%s", firstName); // Reads input until a space or newline
    printf("Your first name is: %s\n", firstName);

 //if we enter "Smaran Yanapu" as input, only "Smaran" will be stored in firstName
 //we will learn how to read a string with spaces in the next snippet

    return 0;
}
