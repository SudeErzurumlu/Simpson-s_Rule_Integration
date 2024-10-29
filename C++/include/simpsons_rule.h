// simpsons_rule.h
// Header file for Simpson's Rule Integration

#ifndef SIMPSONS_RULE_H
#define SIMPSONS_RULE_H

#include <functional>

double simpsonsRule(std::function<double(double)> f, double a, double b, int n);

#endif // SIMPSONS_RULE_H
