# main.R
# Main file to demonstrate Simpson's Rule Integration in R

# Source the simpsons_rule function
source("simpsons_rule.R")

# Define the function to integrate, e.g., f(x) = x^2
f <- function(x) {
  x^2
}

# Set bounds and intervals
a <- 0      # Lower bound
b <- 1      # Upper bound
n <- 10     # Number of intervals

# Calculate and display the integral
integral <- simpsons_rule(f, a, b, n)
cat(sprintf("The integral of f(x) from %.2f to %.2f is approximately: %.4f\n", a, b, integral))
