#include <stdio.h>

int main() {
    FILE *fptr;
    char ch = 'M';

    // Open the file "NewFile.txt" in write mode
    fptr = fopen("NewFile.txt", "w");

    // Write the character 'M' followed by "ANGO" to the file
    fprintf(fptr, "%cANGO", ch);

    // Close the file
    fclose(fptr);

    return 0;
}