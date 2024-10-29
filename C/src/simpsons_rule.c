// simpsons_rule.c
// Implementation of Simpson's Rule Integration in C

#include "simpsons_rule.h"

// Simpson's Rule function for numerical integration
double simpsonsRule(double (*f)(double), double a, double b, int n) {
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
