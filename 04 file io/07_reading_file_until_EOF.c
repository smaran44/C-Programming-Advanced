#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;

    // Open the file "hi.txt" in read mode
    fptr = fopen("hi.txt", "r");

    // Read the first character
    ch = fgetc(fptr);

    // Loop through the file until the end (EOF)
    while (ch != EOF) {
        printf("%c", ch);  // Print the character
        ch = fgetc(fptr);  // Read the next character
    }
    printf("\n");

    // Close the file
    fclose(fptr);

    return 0;
}