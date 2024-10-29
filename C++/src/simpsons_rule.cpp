// simpsons_rule.cpp
// Implementation of Simpson's Rule Integration

#include "simpsons_rule.h"

// Function to compute the numerical integral using Simpson's Rule
double simpsonsRule(std::function<double(double)> f, double a, double b, int n) {
    // Ensure `n` is even for Simpson's Rule
    if (n % 2 != 0) {
        n++;
    }

    double h = (b - a) / n;
    double result = f(a) + f(b);

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        result += (i % 2 == 0 ? 2 : 4) * f(x);
    }

    return result * h / 3;
}
