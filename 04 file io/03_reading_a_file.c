#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;

    // Open the file "Test.txt" in read mode
    fptr = fopen("hi.txt", "r");

    // Check if the file exists
    if (fptr == NULL) {
        printf("File doesn't exist!\n");
    } else {
        // Read the first character from the file
        fscanf(fptr, "%c", &ch);
        printf("Character in file is: %c\n", ch);

        // Read the second character from the file
        fscanf(fptr, "%c", &ch);
        printf("Character in file is: %c\n", ch);

        fclose(fptr);
    }

    return 0;
}