#include <stdio.h>

int main() {
    // Define the structure for student
    struct student {
        int roll_number;
        float cgpa;
        char name[50]; // Assuming name will be less than 50 characters
    };

    // Initialize student structures
    struct student s1 = {1, 9.5, "John Jane"};
    
    // Print student details
    printf("Student Name: %s\nStudent Roll Number: %d\nStudent CGPA: %.2f\n", s1.name, s1.roll_number, s1.cgpa);

    struct student *ptr = &s1;
    printf("Student Name: %s\nStudent Roll Number: %d\nStudent CGPA: %.2f\n", (*ptr).name, (*ptr).roll_number, (*ptr).cgpa);

    //arrow operator
    printf("Student Name: %s\nStudent Roll Number: %d\nStudent CGPA: %.2f\n", ptr->name, ptr->roll_number, ptr->cgpa);
    return 0;
}
