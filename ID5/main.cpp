#include <iostream>

// Problem = what is the smallest positive number that is evenly divisible by
// all the numbers from 1 to 10
/*
 Thought Process
    - initially bool false as not found
    - loop trhough all numbers from 1 to 20 setting true if found and false if
 not found
*/
int main() {
  bool found = false;
  long long num = 1;
  while (found == false) {
    for (int i = 1; i <= 20; i++) {
      if (num % i == 0) {
        found = true;
      } else {
        found = false;
        num++;
        break;
      }
    }
  }
  std::cout << num;
}

// Solution = 232792560
// Correct from online resources
