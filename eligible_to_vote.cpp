// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon Lee
// Created on: Oct 2019
// This program determine eligibility to vote

#include <iostream>
#include <string>

main() {
    // this function determine eligibility to vote
    std::string integerAsString;
    int integerAsNumber;

    // input
    std::cout << "Enter your age (integer): ";
    std::cin >> integerAsString;

    // process & output
    try {
        integerAsNumber = std::stoi(integerAsString);
        if (integerAsNumber >= 18) {
            std::cout << "You are eligible to vote."
            << std::endl;
        } else {
            std::cout << "You are not eligible to vote."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "It is not an integer";
    }
}
