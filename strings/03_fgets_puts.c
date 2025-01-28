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

/*int c;
while ((c = getchar()) != '\n' && c != EOF) {
    // Loop until the buffer is cleared
}
1. Why is it needed?
When you use scanf, it stops reading input when it encounters a whitespace (space, tab, newline, etc.). However, the remaining characters, especially the newline character (\n) left in the input buffer after pressing Enter, are not consumed by scanf. This leftover input can cause issues for subsequent input operations, such as fgets, which reads the remaining content in the buffer instead of waiting for new input.

To avoid these issues, the input buffer is cleared to ensure no stray characters interfere with future input operations.

2. What does it do?
The code works as follows:

getchar() reads a single character from the input buffer.
while ((c = getchar()) != '\n' && c != EOF):
c = getchar() assigns the character read from the buffer to c.
The loop continues as long as c is not a newline (\n) and not the end of file (EOF).
Effectively, this removes all characters from the buffer until it encounters a newline (indicating the end of the previous input).*/