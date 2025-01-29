#include <stdio.h>
#include <string.h>

// Define the student structure
struct student {
    char name[100];
    int roll_number;
    float cgpa;
};

// Function to clear the input buffer
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    struct student s1;

    // Input for the first student
    printf("Enter the first student's name:\n");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0'; // Remove trailing newline

    printf("Enter the first student's roll number:\n");
    scanf("%d", &s1.roll_number);
    clear_input_buffer(); // Clear buffer after number input

    printf("Enter the first student's CGPA:\n");
    scanf("%f", &s1.cgpa);
    clear_input_buffer();

    struct student s2;
    // Input for the second student
    printf("Enter the second student's name:\n");
    fgets(s2.name, sizeof(s2.name), stdin);
    s2.name[strcspn(s2.name, "\n")] = '\0';

    printf("Enter the second student's roll number:\n");
    scanf("%d", &s2.roll_number);
    clear_input_buffer();

    printf("Enter the second student's CGPA:\n");
    scanf("%f", &s2.cgpa);
    clear_input_buffer();

    // Print student details
    printf("\nStudent 1 Details:\n");
    puts(s1.name);//or printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll_number);
    printf("CGPA: %.2f\n", s1.cgpa);

    printf("\nStudent 2 Details:\n");
    puts(s2.name);//or printf("Name: %s\n", s2.name);
    printf("Roll Number: %d\n", s2.roll_number);
    printf("CGPA: %.2f\n", s2.cgpa);

    return 0;
}
