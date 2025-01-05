#include <iostream>
#include <vector>
// Problem = what is the 10001 prime

/*
  Thought process = a prime number is divisible by 1 and by itself

 */

int main() {
  std::vector<unsigned int> primes;
  primes.reserve(10001);
  primes.push_back(2);

  // unsigned x initially 3 until primes.size is lower than 10000, add 2 to x
  // each time
  for (unsigned int x = 3; primes.size() <= 10000; x += 2) {
    bool isPrime = true;
    for (auto p : primes) {
      // check if prime is found
      if (x % p == 0) {
        isPrime = false;
        break;
      }

      if (p * p > x) {
        break;
      }
    }
    if (isPrime) {
      primes.push_back(x);
    }
  }
  std::cout << primes[10000];
}

// Solution 104743 is the 10001st prime number
// Correct! checked with online resources
