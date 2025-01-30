#include <stdio.h>
#include <stdlib.h>  // For system()

int main() {
    char name[50];

    // Prompt user for input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Read input with spaces

    // Simulate input buffer issue
    printf("Press Enter to continue...");
    fflush(stdin);  // Clear the input buffer (may not work consistently)
    getchar();  // Wait for user to press Enter

    // Clear screen
    system("cls"); // Use "clear" on Linux/macOS

    // Display message after clearing
    printf("Screen cleared!\n");
    printf("Hello, %s", name);

    return 0;
}
/*fflush(stdin) is not reliable for clearing input. A safer way is:
int c;
while ((c = getchar()) != '\n' && c != EOF);  // Clear input buffer*/

// but for output buffer we can only use fflush(stdout)