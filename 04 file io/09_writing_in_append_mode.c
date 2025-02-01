#include <stdio.h>

int main() {
    FILE *fptr;
    char data[] = "This is a new line of text to append to the file.\n";

    // Open the file "Test.txt" in append mode
    fptr = fopen("Test.txt", "a+");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error opening the file!\n");
        return 1;
    }

    // Write data to the file
    fputs(data, fptr);

    // Close the file
    fclose(fptr);

    printf("Data has been appended to the file successfully!\n");

    return 0;
}
/*No, fputs and fputc are not the same, although they are both used to write data to a file. Here's how they differ:

fputs()
Purpose: Writes a string to a file.
Syntax: fputs(const char *str, FILE *stream);
Behavior: fputs writes the entire string (character by character) until it encounters a null-terminator (\0) or reaches the end of the string. It writes the string as a sequence of characters.

fputc()
Purpose: Writes a single character to a file.
Syntax: fputc(int character, FILE *stream);
Behavior: fputc writes a single character at a time, and you pass the character as an integer value (usually cast to int).

*/