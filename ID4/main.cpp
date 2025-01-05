#include <iostream>
// Problem = Find the largest palindrome made from the product of two 3 digit
// numbers
//

/*
 Thought process:
  A palidrome is a number that reads the same both ways eg 9009
  start from 999 and 999 check if the multiplication read the same both ways

*/

bool isPal(int num);
int reverseNum(int num);

int main() {
  int product = 0;
  int greatestPal = 0;
  for (int i = 100; i < 1000; i++) {
    for (int j = 100; j < 1000; j++) {
      product = i * j;
      if (isPal(product) && greatestPal == 0) {
        greatestPal = product;
      } else if (isPal(product) && greatestPal != 0) {
        if (product > greatestPal) {
          greatestPal = product;
        }
      }
    }
  }
  std::cout << greatestPal << std::endl;
}
// check if palindrome
bool isPal(int num) {
  if (reverseNum(num) == num) {
    return true;
  } else {
    return false;
  }
}
// reverse a given number
int reverseNum(int n) {
  int revNum = 0;
  int remainder = 0;
  while (n != 0) {
    remainder = n % 10;
    revNum = revNum * 10 + remainder;
    n /= 10;
  }
  return revNum;
}

// Solution 906609
