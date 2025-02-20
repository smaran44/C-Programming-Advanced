#include <stdio.h>

int main() {
    FILE *fptr;

    // Open the file "NewFile.txt" in write mode
    fptr = fopen("fputc.txt", "w");

    // Write individual characters to the file
    fputc('F', fptr);
    fputc('P', fptr);
    fputc('U', fptr);
    fputc('T', fptr);
    fputc('C', fptr);

    fputs("\nhello", fptr);

    // Close the file
    fclose(fptr);

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