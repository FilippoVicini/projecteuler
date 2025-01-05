
// problem = find the sum of all primes below 2 million


#include <iostream>
#include <vector>
using namespace std;

int main() {
    const long limit = 2000000;
    vector<bool> isPrime(limit, true);

    isPrime[0] = isPrime[1] = false;     for (long i = 2; i * i < limit; ++i) {
        if (isPrime[i]) {
            for (long j = i * i; j < limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    long long sum = 0;
    for (long i = 2; i < limit; ++i) {
        if (isPrime[i]) {
            sum += i;
        }
    }

    cout << "The sum of all primes below " << limit << " is: " << sum << endl;
    return 0;
}
