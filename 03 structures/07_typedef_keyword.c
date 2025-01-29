#include <stdio.h>

//typedef keyword used to create alias for data types
// it is used for all data types including structures

typedef struct Electronics_and_Communication_Engineering_student {  
    int roll_number;
    float cgpa;
    char name[50]; // Assuming name will be less than 50 characters
} ece_s;

int main() {
    // Initialize student structures
    ece_s s1 = {1, 9.5, "John Jane"};
    ece_s s2 = {2, 9.0, "Jane John"};

    // Print student details
    printf("Student Name: %s\nStudent Roll Number: %d\nStudent CGPA: %.2f\n", s1.name, s1.roll_number, s1.cgpa);
    printf("Student Name: %s\nStudent Roll Number: %d\nStudent CGPA: %.2f\n", s2.name, s2.roll_number, s2.cgpa);

    return 0;
}