// main.cpp
// Main file to demonstrate Simpson's Rule Integration

#include <iostream>
#include <cmath>
#include "include/simpsons_rule.h"

int main() {
    // Define the function to integrate, e.g., f(x) = x^2
    auto f = [](double x) { return x * x; };

    // Set bounds and intervals
    double a = 0.0;  // Lower bound
    double b = 1.0;  // Upper bound
    int n = 10;      // Number of sub-intervals

    // Calculate and display the integral
    double integral = simpsonsRule(f, a, b, n);
    std::cout << "The integral of f(x) from " << a << " to " << b << " is approximately: " << integral << std::endl;

    return 0;
}
