# simpsons_rule.rb
# Module for Simpson's Rule Integration in Ruby

module SimpsonsRule
  # Method to calculate the integral using Simpson's Rule
  # @param f [Proc] The function to integrate
  # @param a [Float] The lower limit of integration
  # @param b [Float] The upper limit of integration
  # @param n [Integer] The number of sub-intervals (must be even)
  # @return [Float] The approximate value of the integral

  def self.calculate(f, a, b, n)
    # Ensure `n` is even
    n += 1 if n.odd?

    h = (b - a) / n.to_f
    result = f.call(a) + f.call(b)

    (1...n).each do |i|
      x = a + i * h
      result += (i.even? ? 2 : 4) * f.call(x)
    end

    result * h / 3
  end
end
