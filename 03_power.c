
//In C, the power function is not a built-in operator, but you can use the pow() function provided in the math.h library.

#include <stdio.h>
#include <math.h> // Required for pow()
//math.h is a header file in the C standard library for the C programming language designed for basic mathematical operations.


int main() {
    double base,exponent,result;
    printf("Enter the base number: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent); // Calculates 2^3 = 8
    printf("%.2lf raised to the power %.2lf is: %.2lf\n", base, exponent, result);

    return 0;
}
