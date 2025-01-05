#include <iostream>
// Problem = By considering the terms in the Fibonacci sequence whose values do
// not exceed four million, find the sum of the even-valued terms.

int main() {
  int x = 0;
  int y = 1;
  int z;
  int sum = 0;

  do {
    z = x + y;
    x = y;
    y = z;
    if (y % 2 == 0)
      sum += y;
  } while (y <= 4000000);
  std::cout << sum;
}

// Solution = 4613732
// Expected solution from
// https://github.com/lucky-bai/projecteuler-solutions/blob/master/Solutions.md
// CORRECT!
