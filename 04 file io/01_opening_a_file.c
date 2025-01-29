#include <stdio.h>

int main() {
    FILE *fptr;

    // Open the file "Test.txt" in read mode
    fptr = fopen("Test.txt", "r");

    // Check if the file exists
    if (fptr == NULL) {
        printf("File doesn't exist!\n");
    } else {
        printf("File opened successfully!\n");

        // Close the file
        fclose(fptr);
    }

    return 0;
}