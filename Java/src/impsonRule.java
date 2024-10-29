// SimpsonRule.java
// Class for Simpson's Rule Integration in Java

import java.util.function.Function;

public class SimpsonRule {

    /**
     * Calculates the integral of a function using Simpson's Rule.
     *
     * @param f the function to integrate
     * @param a the lower limit of integration
     * @param b the upper limit of integration
     * @param n the number of sub-intervals (must be even)
     * @return the approximate value of the integral
     */
    public static double calculate(Function<Double, Double> f, double a, double b, int n) {
        // Ensure `n` is even
        if (n % 2 != 0) {
            n++;
        }
