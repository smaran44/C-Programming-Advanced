#include <stdio.h>

int main() {
    // Prompt the user to enter a string
    printf("Enter a string one character at a time (press Enter to stop): ");

    char str[100]; // Array to store the input string
    char ch;       // Variable to store each input character
    int i = 0;     // Index to track the position in the array

    // Read characters until a newline ('\n') or end-of-file (EOF) is encountered
    while ((ch = getchar()) != '\n' && ch != EOF) {
        str[i] = ch; // Store the character in the array
        i++;         // Move to the next index

        // Avoid exceeding the array size
        if (i >= 99) {
            break; // Stop if the input exceeds the array capacity
        }
    }
    str[i] = '\0'; // Add a null terminator to mark the end of the string

    // Print the entered string
    printf("Entered string: %s\n", str);

    return 0;
}
