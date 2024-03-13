#ifndef Q1_HPP
#define Q1_HPP

#include <iostream>

// Function to get two integer values from the user
void getTwoValues(int &begin, int &end) {
    do {
        std::cout << "Enter two integer values (begin < end): ";
        std::cin >> begin >> end;
    } while (begin >= end);
}

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
// Function to find the next prime number after a given number
int getNextPrime(int begin) {
    int next = begin + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}
