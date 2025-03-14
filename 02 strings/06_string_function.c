/*
Program: File Analysis in C (Reading from a File)

Description:
This program performs various text-processing operations on an input file. 
The operations include:
1. Displaying the content of the file.
2. Counting the number of characters, words, and lines.
3. Searching for a specific word within the text.

The program reads from a file named "input.txt" and processes its contents.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1000  // Buffer size for input line length
#define PATTERN "xyz" // Word to search in the text

// Function prototypes
void display(FILE *file);
void count_char(FILE *file);
void count_words(FILE *file);
void count_lines(FILE *file);
void search_word(FILE *file);
int fetchline(FILE *file, char line[], int max_size);
int getindex(char w[], char l[]);

int main() {
    FILE *file = fopen("input.txt", "r");  // Open the file in read mode
    if (file == NULL) {
        printf("Error: Could not open the file!\n");
        return 1;
    }

    // Uncomment functions to test different functionalities
    display(file);
    rewind(file);  // Reset file pointer to start
    search_word(file);
    rewind(file);
    count_char(file);
    rewind(file);
    count_words(file);
    rewind(file);
    count_lines(file);

    fclose(file);  // Close the file
    return 0;
}

// Function to display the content of the file
void display(FILE *file) {
    int c;
    while ((c = fgetc(file)) != EOF) { 
        putchar(c); // Print each character
    }
    printf("\n");
}

// Function to read a line from the file and return its length
int fetchline(FILE *file, char line[], int max_size) {
    if (fgets(line, max_size, file) != NULL) {
        return strlen(line); // Return the length of the line
    }
    return 0; // Return 0 if no line is read
}

// Function to check if the word 'w' exists in line 'l'
// Returns the index if found, otherwise -1
int getindex(char w[], char l[]) {
    char *pos = strstr(l, w); // Find substring in line
    return (pos != NULL) ? (pos - l) : -1;
}

// Function to search for a specific word in the file and print matching lines
void search_word(FILE *file) {
    char line[MAXLINE];
    int found = 0;
    
    while (fetchline(file, line, MAXLINE) > 0) {
        if (getindex(PATTERN, line) >= 0) {
            printf("%s", line); // Print the matching line
            found++;
        }
    }
    
    if (found == 0) {
        printf("No line found\n");
    }
}

// Function to count and print the number of characters in the file
void count_char(FILE *file) {
    int c, count = 0;
    while ((c = fgetc(file)) != EOF) {
        count++;
    }
    printf("Character count: %d\n", count);
}

// Function to count and print the number of words in the file
void count_words(FILE *file) {
    int c, in_word = 0, count = 0;
    while ((c = fgetc(file)) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            in_word = 0; // Outside a word
        } else if (!in_word) {
            in_word = 1; // Found a new word
            count++;
        }
    }
    printf("Word count: %d\n", count);
}

// Function to count and print the number of lines in the file
void count_lines(FILE *file) {
    int c, count = 0;
    while ((c = fgetc(file)) != EOF) {
        if (c == '\n') {
            count++;
        }
    }
    printf("Line count: %d\n", count);
}
