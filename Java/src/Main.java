// Main.java
// Main file to demonstrate Simpson's Rule Integration in Java

import java.util.function.Function;

public class Main {

    public static void main(String[] args) {
        // Define the function to integrate, e.g., f(x) = x^2
        Function<Double, Double> function = x -> x * x;

        // Set the bounds and intervals
        double a = 0.0;  // Lower bound
        double b = 1.0;  // Upper bound
        int n = 10;      // Number of sub-intervals

        // Calculate and display the integral
        double integral = SimpsonRule.calculate(function, a, b, n);
        System.out.printf("The integral of f(x) from %.2f to %.2f is approximately: %.4f\n", a, b, integral);
    }
}
