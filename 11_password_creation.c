#include <stdio.h>
#include <conio.h> // Required for getch() function in Windows

// Function prototype for password input
void get_password(char *password, int max_length);

int main() {
    char password[50]; // Array to store the password (max 49 characters + null terminator)

    // Prompt the user to enter a password
    printf("Enter Password: ");
    get_password(password, 49); // Call function to take masked password input

    // Confirmation message after successful input
    printf("Your password has been entered successfully!\n");

    // Print the actual password entered (for demonstration purposes)
    printf("Entered Password: %s\n", password);

    return 0;
}

// Function to take password input while masking it with '*'
void get_password(char *password, int max_length) {
    int i = 0;  // Index to track the length of the password
    char ch;    // Variable to store user input character

    while (1) {
        ch = getch(); // Get character input without displaying it on the screen

        // If the user presses 'Enter' (ASCII 13), terminate input
        if (ch == 13) { 
            password[i] = '\0'; // Null-terminate the password string
            break; 
        }
        // If the user presses 'Backspace' (ASCII 8), handle deletion
        else if (ch == 8) { 
            if (i > 0) {  // Ensure there are characters to delete
                i--;  
                printf("\b \b"); // Move cursor back, erase character, move back again
            }
        }
        // If the user types a valid character (within max length), store it
        else if (i < max_length - 1) { 
            password[i++] = ch;  // Store the character
            printf("*");  // Print '*' to mask the input
        }
    }
    printf("\n"); // Move to a new line after input completion
}
