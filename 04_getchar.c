#include <stdio.h>

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


int main() {
    char c;
    printf("Enter a character: ");
    c = getchar();  // Read one character
    printf("You entered: %c\n", c);

 //If the end of input is reached, or if there is an error during input, getchar() returns EOF.

 if (c == EOF) {
        printf("Error or EOF encountered.\n");
    } else {
        printf("You entered: %c\n", c);
    }

    return 0;
}
