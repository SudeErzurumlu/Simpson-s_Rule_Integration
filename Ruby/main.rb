# main.rb
# Main file to demonstrate Simpson's Rule Integration in Ruby

require_relative 'simpsons_rule'

# Define the function to integrate, e.g., f(x) = x^2
f = ->(x) { x**2 }

# Set bounds and intervals
a = 0.0   # Lower bound
b = 1.0   # Upper bound
n = 10    # Number of sub-intervals

# Calculate and display the integral
integral = SimpsonsRule.calculate(f, a, b, n)
puts format("The integral of f(x) from %.2f to %.2f is approximately: %.4f", a, b, integral)
