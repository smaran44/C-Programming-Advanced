#include <stdio.h>
#include <string.h> // Include the string library for string manipulation functions

int main() {
    // **Demonstrating strlen (String Length)**
    // Declare a string and calculate its length
    char shortName[] = "Smaran";
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
    int comparison1 = strcmp(str1, str2); 
    // `strcmp` returns:
    // < 0 if str1 < str2, 
    // 0 if str1 == str2,
    // > 0 if str1 > str2
    // A-B is returned where A and B are ASCII values of the first non-matching characters
    char str3[] = "hhhb";
    char str4[] = "hhha";
    int comparison2 = strcmp(str3, str4); 

    char str5[] = "hhh";
    char str6[] = "hhh";
    int comparison3 = strcmp(str5, str6); 
    printf("Comparison result between 'Apple' and 'Banana': %d\n", comparison1);
    printf("Comparison result between 'hhhb' and 'hhha': %d\n", comparison2);
    printf("Comparison result between 'hhh' and 'hhh': %d\n", comparison3);

    //The function strcspn stands for string complement span.
    // It is used to find the index of the first occurrence of any character from a set of characters in a string.
    //strcspn returns the number of characters from the start of str1 before any character from str2 is found. 
    //If no characters from str2 are found, it returns the length of str1.
    // **Demonstrating strcspn (String Complement Span)**
    
    char str7[] = "Hello, World!";
    char set[] = ","; 
    char set1[] = "r";
    int index = strcspn(str7, set); // Find the index of the first occurrence of any character from `set` in `str`
    printf("Index of the first occurrence of %c from the set in the string: %d\n", set[0] ,index);
    int index1 = strcspn(str7, set1); // Find the index of the first occurrence of any character from `set` in `str`
    printf("Index of the first occurrence of %c from the set in the string: %d\n", set1[0] ,index1);

    return 0;
}
