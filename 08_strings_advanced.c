#include <stdio.h>
#include <string.h>

int main() {
    // Declaration of string variables
    char name[] = "Shradha Khapra"; // Declared and initialized with a string literal
    char course[] = {'a', 'p', 'n', 'a', ' ', 'c', 'o', 'l', 'l', 'e', 'g', 'e', '\0'}; // Declared as a character array with null terminator

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

    // Attempting to take full name input with scanf (this won't work correctly for multi-word input)
    char fullName[40];
    printf("Enter full name (scanf): ");
    scanf("%s", fullName); // Only reads up to the first space
    printf("Your full name (scanf) is: %s\n", fullName);

    // Taking multi-word input using fgets and displaying it with puts
    printf("Enter full name (fgets): ");
    getchar(); // Clear the newline left by the previous input
    fgets(fullName, 40, stdin); // Reads the full line including spaces
    printf("Your full name (fgets) is: ");
    puts(fullName); // Prints the string followed by a newline

    // Demonstrating string library functions
    char shortName[] = "Shradha";
    int length = strlen(shortName); // Calculate the length of the string
    printf("The length of the name is: %d\n", length);

    char oldVal[] = "oldValue";
    char newVal[50];
    strcpy(newVal, oldVal); // Copies oldVal into newVal
    printf("Copied string: ");
    puts(newVal);

    char firstStr[50] = "Hello ";
    char secStr[] = "World";
    strcat(firstStr, secStr); // Concatenates secStr to firstStr
    printf("Concatenated string: ");
    puts(firstStr);

    char str1[] = "Apple";
    char str2[] = "Banana";
    int comparison = strcmp(str1, str2); // Compares str1 and str2 lexicographically
    printf("Comparison result between 'Apple' and 'Banana': %d\n", comparison);

    // Entering a string character by character using %c
    printf("Enter a string character by character (press Enter to stop): ");
    char str[100];
    char ch;
    int i = 0;

    // Read characters until newline is encountered
    while ((ch = getchar()) != '\n') {
        str[i] = ch; // Store each character in the array
        i++;
    }
    str[i] = '\0'; // Null-terminate the string

    // Print the entered string
    printf("Entered string: ");
    puts(str);

    return 0;
}
