# simpsons_rule.R
# Simpson's Rule Integration Function in R

# Function to calculate the integral using Simpson's Rule
# Args:
#   f: Function to integrate
#   a: Lower limit of integration
#   b: Upper limit of integration
#   n: Number of intervals (must be even)
# Returns:
#   Approximate integral value

simpsons_rule <- function(f, a, b, n) {
  # Ensure n is even
  if (n %% 2 != 0) {
    n <- n + 1
  }
  
  h <- (b - a) / n
  result <- f(a) + f(b)
  
  for (i in 1:(n - 1)) {
    x <- a + i * h
    if (i %% 2 == 0) {
      result <- result + 2 * f(x)
    } else {
      result <- result + 4 * f(x)
    }
  }
  
  result * h / 3
}
