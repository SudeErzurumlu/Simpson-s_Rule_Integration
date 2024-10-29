// main.c
// Main file to demonstrate Simpson's Rule Integration in C

#include <stdio.h>
#include <math.h>
#include "include/simpsons_rule.h"

// Define the function to integrate, e.g., f(x) = x^2
double function(double x) {
    return x * x;
}

int main() {
    // Set bounds and intervals
    double a = 0.0;  // Lower bound
    double b = 1.0;  // Upper bound
    int n = 10;      // Number of sub-intervals

    // Calculate and display the integral
    double integral = simpsonsRule(function, a, b, n);
    printf("The integral of f(x) from %.2f to %.2f is approximately: %.4f\n", a, b, integral);

    return 0;
}
