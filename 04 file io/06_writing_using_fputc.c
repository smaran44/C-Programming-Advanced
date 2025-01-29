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

    // Close the file
    fclose(fptr);

    return 0;
}