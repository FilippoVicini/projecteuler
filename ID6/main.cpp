#include <cmath>
#include <iostream>
// Problem = find the difference between the sum of the squares of the first one
// hundred natural numbers and the square of the sum.

int main() {
  int sum1 = 0;
  int sum2 = 0;
  int res2 = 0;
  for (int i = 1; i <= 100; i++) {
    sum1 += pow(i, 2);
    sum2 += i;
  }
  res2 = pow(sum2, 2);

  std::cout << res2 - sum1;
}

// Solution = 25164150
// CORRECT!
