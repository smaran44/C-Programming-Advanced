#include <stdio.h>
#include <string.h>

//user defined structure
struct student {
    char name[100];
    int roll_number;
    float cgpa;
};

int main () {
    struct student s1; //declaring structure variable
    s1.roll_number = 1; //assigning value to roll_number
    s1.cgpa = 9.5; //assigning value to cgpa
   // s1.name = "John"; //assigning value to name
   // it is not possible because we cannot change an array
   // so we include library string.h and use strcpy function
    strcpy(s1.name, "John abc"); //assigning value to name
    printf("Student Name: %s\n", s1.name);
    printf("Student Roll Number: %d\n", s1.roll_number);
    printf("Student CGPA: %.2f\n", s1.cgpa);
    return 0;
}