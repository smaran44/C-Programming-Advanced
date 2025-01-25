#include <stdio.h>

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Clear the input buffer
    
    /*How It Works:

getchar() Function:
getchar() reads one character at a time from the input buffer (where the user’s input is stored).
Each time you call getchar(), it removes one character from the buffer.
Loop Logic:

The while loop continues to call getchar() until it encounters either:
'\n': This represents the newline character (the user presses "Enter"). It marks the end of the current input.
EOF: This is the end-of-file indicator, which signals no more input is available (used in cases like file reading or redirected input).
Effect:

If the user enters invalid input like "abc", all those characters ('a', 'b', 'c') and the newline ('\n') are removed one by one from the input buffer.
Once the input buffer is cleared, the program is ready to take fresh input.
Why is This Needed?
When scanf() fails to read a valid input, the invalid characters remain in the buffer. If we don’t clear them, the program will keep reading the leftover invalid input, causing an infinite loop or other issues.

Example Without Clearing the Buffer:
User enters invalid input: "abc".
scanf("%d", &choice) fails, but "abc" remains in the buffer.
In the next loop iteration, scanf() will try to read "abc" again, causing repeated failures.
By clearing the buffer, we ensure that the leftover invalid input is discarded, and the program can proceed without errors.*/
}

int main() {
    int num;
    int result;

    while (1) {
        printf("Enter an integer (or type '0' to exit): ");
        
        // Check if the user entered a valid integer
        if (scanf("%d", &num) != 1) { // != 1 means scanf() failed to read an integer
            printf("Invalid input! Please enter a valid integer.\n");
            clear_input_buffer(); // Clear the input buffer
            continue; // Skip the rest of the loop and prompt again
        }

        // If user enters 0, exit the loop
        if (num == 0) {
            printf("Exiting the program.\n");
            break;//break statement is used to terminate the loop or switch statement and transfer control to the statement immediately following the loop or switch.
        }

        // Example of simple operation with the valid integer
        result = num * num; // Square the entered number
        printf("The square of %d is %d.\n", num, result);
    }

    return 0;
}
