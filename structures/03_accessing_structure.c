#include <stdio.h>

struct student ECE[100];
struct student CSE[100];
struct student ME[100];

int main() {
    ECE[0].roll_number = 1;
    ECE[0].cgpa = 9.5;
    strcpy(ECE[0].name, "John");
    printf("Student Name: %s\n", ECE[0].name);
}