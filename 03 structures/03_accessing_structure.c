#include <stdio.h>
#include <string.h> // For strcpy

// Define the structure for student
struct student {
    int roll_number;
    float cgpa;
    char name[50]; // Assuming name will be less than 50 characters
};

struct student ECE[100];
struct student CSE[100];
struct student ME[100];

int main() {
    // Assign values to ECE[0]
    ECE[0].roll_number = 1;
    ECE[0].cgpa = 9.5;
    strcpy(ECE[0].name, "John jane");

    // Display the information
    printf("Student Name: %s\n", ECE[0].name);
    printf("Student Roll Number: %d\n", ECE[0].roll_number);
    printf("Student CGPA: %.2f\n", ECE[0].cgpa);

    ECE[1].roll_number = 2;
    ECE[1].cgpa = 9.0;
    strcpy(ECE[1].name, "Jane john");

    printf("Student Name: %s\n", ECE[1].name);
    printf("Student Roll Number: %d\n", ECE[1].roll_number);
    printf("Student CGPA: %.2f\n", ECE[1].cgpa);

    return 0;
}
