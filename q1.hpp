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
