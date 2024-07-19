#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265358979323846

// Function prototype
double calculateCircumference(double radius);

int main() {
    double r, c;

    // Ask user for the radius
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    // Calculate the circumference
    c = 2*(22/7)*r;

    // Output the result
    printf("The circumference of the circle is: %d\n", c );

    return 0;
}


