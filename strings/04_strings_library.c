#include <stdio.h>
#include <string.h> // Include the string library for string manipulation functions

int main() {
    // **Demonstrating strlen (String Length)**
    // Declare a string and calculate its length
    char shortName[] = "Shradha";
    int length = strlen(shortName); // `strlen` calculates the number of characters in the string (excluding the null terminator)
    printf("The length of the name is: %d\n", length);

    // **Demonstrating strcpy (String Copy)**
    // Declare two strings: one source and one destination
    char oldVal[] = "oldValue";
    char newVal[50]; // Ensure the destination string is large enough to hold the copied value
    strcpy(newVal, oldVal); // Copy the contents of `oldVal` into `newVal`
    printf("Copied string: ");
    puts(newVal); // `puts` prints the string and adds a newline automatically

    // **Demonstrating strcat (String Concatenation)**
    // Concatenate two strings
    char firstStr[50] = "Hello "; // First string with enough space to hold the concatenated result
    char secStr[] = "World"; // Second string to be appended
    strcat(firstStr, secStr); // Append `secStr` to `firstStr`
    // `firstStr` now contains "Hello World"
    printf("Concatenated string: ");
    puts(firstStr);

    // **Demonstrating strcmp (String Comparison)**
    // Compare two strings lexicographically (dictionary order)
    char str1[] = "Apple";
    char str2[] = "Banana";
    int comparison = strcmp(str1, str2); 
    // `strcmp` returns:
    // < 0 if str1 < str2, 
    // 0 if str1 == str2,
    // > 0 if str1 > str2
    printf("Comparison result between 'Apple' and 'Banana': %d\n", comparison);

    // **Reading a String Character by Character**
    // Prompt the user to enter a string one character at a time
    printf("Enter a string character by character (press Enter to stop): ");
    char str[100]; // Array to store the input string
    char ch;       // Variable to hold each character
    int i = 0;     // Index for the array

    // Read characters until a newline (`\n`) is encountered
    while ((ch = getchar()) != '\n') {
        str[i] = ch; // Store each character in the array
        i++;         // Increment the index
    }
    str[i] = '\0'; // Null-terminate the string to mark its end

    // Print the entered string
    printf("Entered string: ");
    puts(str); // Print the string

    return 0;
}
