#include <stdio.h>

int main() {
    FILE *fptr;

    // Open the file "NewFile.txt" in read mode
    fptr = fopen("fgetc.txt", "r");

    // Read and print each character one by one
    // fgetc used to read
    printf("Character in file is: %c\n", fgetc(fptr));
    printf("Character in file is: %c\n", fgetc(fptr));
    printf("Character in file is: %c\n", fgetc(fptr));
    printf("Character in file is: %c\n", fgetc(fptr));
    printf("Character in file is: %c\n", fgetc(fptr));

    // Close the file
    fclose(fptr);

    return 0;
}