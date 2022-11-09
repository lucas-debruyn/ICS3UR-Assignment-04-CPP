// Copyright (c) 2022 Lucas DeBruyn All rights reserved

// Created by: Lucas DeBruyn
// Created on: November 2022
// This program tells a user if a letter a consonant or vowel

#include <iostream>

int main() {
    // This function determines if a letter a consonant or vowel

    char user_letter;

    // Input
    std::cout << "Enter a letter (single digit/uppercase): ";
    std::cin >> user_letter;

    // Process and Output

    if (user_letter == 'A' || user_letter == 'E' || user_letter == 'I'
    || user_letter == 'O' || user_letter == 'U') {
        std::cout << "\nYour letter is a vowel!"
                  << std::endl;
    } else if (user_letter == 'B' || user_letter == 'C' || user_letter == 'D'
    || user_letter == 'F' || user_letter == 'G' || user_letter == 'H'
    || user_letter == 'J' || user_letter == 'K' || user_letter == 'L'
    || user_letter == 'M' || user_letter == 'N' || user_letter == 'P'
    || user_letter == 'Q' || user_letter == 'R' || user_letter == 'S'
    || user_letter == 'T' || user_letter == 'V' || user_letter == 'W'
    || user_letter == 'X' || user_letter == 'Z' ) {
        std::cout << "\nYour letter is a consonant!"
                  << std::endl;
    } else if (user_letter == 'Y') {
        std::cout
        << "\nYour letter is sometimes a vowel and sometimes a consonant!"
                  << std::endl;
    } else {
        std::cout << "\nPlease input a valid number." << std::endl;
    }

    std::cout << ("\nDone.") << std::endl;
}
