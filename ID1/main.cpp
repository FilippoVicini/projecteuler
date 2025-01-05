#include <iostream>

// Problem = find the sum of all multiples of 3 and 5 below 1000

int main() {
  int sum = 0;
  for (int i = 0; i < 1000; i++) {
    // If multiple of 3
    if (i % 3 == 0) {
      // add to sum
      sum = sum + i;
      // if multiple of 5
    } else if (i % 5 == 0) {
      // add to sum
      sum = sum + i;
    }
  }
  // print sum
  std::cout << sum;
  return sum;
}

// My solution =233168
// Solution checked on
// https://github.com/lucky-bai/projecteuler-solutions/blob/master/Solutions.md
// CORRECT!
