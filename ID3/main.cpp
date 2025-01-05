#include <iostream>

// Problem = What is the largest prime factor of the number 600851475143

// Thought process
/*
Thought process:
- Each number can be represented as the product of at least two factors:
  x = factor * other
- If the factor is prime and factor <= other:
  - The other factor can also be prime.
  - Alternatively, the other factor could be a composite number.

Approach:
- Start the loop with factor = 2, as long as x / factor gives remainder 0:
  - continue dividing x by factor as long as x != factor
*/
int main() {
  unsigned long long x = 600851475143;
  // x can be represented by x=factor*otherFactor
  // where factor <= otherFactor
  // therefore factor <= sqrt(x)
  for (unsigned long long factor = 2; factor * factor <= x; factor++)
    // remove factor, actually it's a prime
    while (x % factor == 0 && x != factor)
      x /= factor;

  std::cout << x << std::endl;
}

// Solution 6857
// Solution compared with
// https://github.com/lucky-bai/projecteuler-solutions/blob/master/Solutions.md
