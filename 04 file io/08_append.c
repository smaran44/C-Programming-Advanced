#include <stdio.h>

int main() {
    FILE *fptr;

    // Open the file "Test.txt" in append mode
    fptr = fopen("Test.txt", "a");

    // Check if the file exists
    if (fptr == NULL) {
        printf("File doesn't exist!\n");
    } else {
        printf("File opened successfully in append mode!\n");

        // Close the file
        fclose(fptr);
    }

    // Using "a" mode, the file is created if it doesn't exist
    // and new data is always added at the end without deleting existing content

    // Open the file "Test.txt" in append and read mode
    fptr = fopen("Test.txt", "a+");

    // Check if the file exists
    if (fptr == NULL) {
        printf("File doesn't exist!\n");
    } else {
        printf("File opened successfully in append and read mode!\n");

        // Close the file
        fclose(fptr);
    }

    // Using "a+" mode, the file is created if it doesn't exist
    // and allows both reading and writing, but writing always appends to the file

    return 0;
}

/*n your C code, the append mode (specified by "a" or "a+" when using fopen()) refers to opening a file for writing in such a way that new data is added to the end of the file, without altering its existing content. Here's a breakdown of how append works in the context of file handling:

"a" mode:

This mode opens the file for writing.
If the file already exists, the data you write will be added to the end of the file (i.e., the new data will not overwrite the existing content).
If the file does not exist, it will be created.
You can only write to the file in this mode, not read from it.
"a+" mode:

This mode opens the file for both reading and writing.
Like "a" mode, any data you write will be appended to the end of the file, and the existing content will not be overwritten.
If the file does not exist, it will be created.
In short, "append" ensures that the file content remains intact, and any new content is simply added at the end, keeping the previous data safe. It's commonly used for logging or adding new records to a file without disturbing the existing ones.*/