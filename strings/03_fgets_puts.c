#include <stdio.h>

int main() {
    // Declare a character array to store the first name (up to 39 characters + null terminator)
    char firstName[40];

    // Prompt the user to enter their first name
    printf("Enter your first name: ");

    // Use scanf to read a single word into the firstName variable
    // `%s` reads input until a whitespace character is encountered
    // No input validation or buffer overflow protection here (consider improving this for real-world applications)
    scanf("%s", firstName); // Limit input to 39 characters to avoid buffer overflow

    // Print the first name back to the user
    printf("Your first name is: %s\n", firstName);

    // Clear the input buffer to remove any leftover characters, including the newline
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Loop until the buffer is cleared
    }

    // Declare another character array to store the full name (supports multiple words)
    char fullName[40];

    // Prompt the user to enter their full name
    printf("Enter your full name: ");

    // Use `fgets` to read an entire line of input, including spaces, into the fullName variable
    // `fgets` reads up to `n-1` characters and appends a null terminator (`\0`) automatically
    // It also retains the newline character if there's space in the buffer
    fgets(fullName, 40, stdin);

    // Print the full name back to the user using `puts`
    // `puts` automatically adds a newline after the output
    printf("Your full name is: ");
    puts(fullName);

    return 0;
}
