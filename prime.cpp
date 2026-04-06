#include <iostream>
using namespace std;

bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i < x; i++) {
        if (x % i == 0) return false; 
    }
    return true;
}

int main() {
    int num = 17;
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    int number = 15;
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    int numeral = 22;
    if (isPrime(numeral)) {
        cout << numeral << " is a prime number." << endl;
    } else {
        cout << numeral << " is not a prime number." << endl;
    }

    return 0;
}