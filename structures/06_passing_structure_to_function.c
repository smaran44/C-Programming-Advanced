#include <stdio.h>
#include <string.h>

//Function prototype

struct student {
    int roll_number;
    float cgpa;
    char name[50]; // Assuming name will be less than 50 characters
};

void printinfo(struct student s1);
void printchangedinfo(struct student s1);

int main() {
    // Initialize student structures
    struct student s1 = {1, 9.5, "John Jane"};
    
    // Print student details
    printinfo(s1);
    printchangedinfo(s1);
    return 0;
}

void printinfo(struct student s1) {
    printf("Student Name: %s\nStudent Roll Number: %d\nStudent CGPA: %.2f\n", s1.name, s1.roll_number, s1.cgpa);
}

void printchangedinfo(struct student s1) {
    s1.roll_number = 2;
    s1.cgpa = 8.5;
    strcpy(s1.name, "Jane John");
    printf("Student Name: %s\nStudent Roll Number: %d\nStudent CGPA: %.2f\n", s1.name, s1.roll_number, s1.cgpa);
}