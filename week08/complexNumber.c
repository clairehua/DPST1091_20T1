// Calculate the magnitude of a complex number

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// DO NOT CHANGE THIS STRUCT
typedef struct _complex {
    double real;
    double imaginary;
} complex;

double complexAbsolute(complex c);

// DO NOT CHANGE THIS MAIN FUNCTION
int main (int argc, char *argv[]) {

    // Create and fill the complex number.
    complex c;

    printf("Enter the real part: ");
    scanf("%lf", &c.real;);

    printf("Enter the imaginary part: ");
    scanf("%lf", &c.imaginary;);

    // Calculate and print the absolute value.
    double absoluteValue = complexAbsolute(c);

    printf("The absolute value is %.2lf.\n", absoluteValue);

    return EXIT_SUCCESS;
}
// END OF MAIN FUNCTION

// Calculate the magnitude (absolute value) of a complex number.
double complexAbsolute(complex c) {
    // PUT YOUR CODE HERE;

    return 0; // CHANGE THIS TO YOUR RETURN VALUE
}
