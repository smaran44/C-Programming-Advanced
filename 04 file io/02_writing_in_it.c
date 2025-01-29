#include <stdio.h>

int main() {
    FILE *fptr;

    // Open the file "Test.txt" in read mode
    fptr = fopen("Test.txt", "w");

    // Check if the file exists
    if (fptr == NULL) {
        printf("File doesn't exist!\n");
    } else {
        printf("File opened successfully!\n");

        // Close the file
        fclose(fptr);
    }

    // file doesn't exist! will never be printed because the file is created when it doesn't exist
    // if we use "w" mode, the file is created if it doesn't exist

    return 0;
}