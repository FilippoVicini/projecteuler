
// problem = a pytagorean triplet is a set of natural numbers where a < b < c 
// for which a2 + b2 = c2 
// there exists a pytagorean tripet where a + b + c = 1000
// find the product of abc


// Thought process = find all the pytagorean tripelts 

#include <iostream>
#include <cmath>
#include <vector>

int main() {
    const int targetSum = 1000;

    for (int a = 1; a < targetSum; a++) {
        for (int b = a + 1; b < targetSum - a; b++) {
            int c2 = a * a + b * b;
            int c = static_cast<int>(sqrt(c2));

            if (c * c == c2 && a + b + c == targetSum) {
                std::cout << "Pythagorean triplet found: a = " << a
                          << ", b = " << b
                          << ", c = " << c << std::endl;
                std::cout << "Product abc = " << a * b * c << std::endl;
                return 0;             }
        }
    }

    std::cout << "No Pythagorean triplet found for the given sum." << std::endl;
    return 0;
}

