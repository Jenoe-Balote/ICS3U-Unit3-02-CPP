// Copyright (c) 2021 Jenoe Balote All Rights Reserved
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program is the "Number Guessing Game"

#include <iostream>

int main() {
    // this function runs the "Number Guessing Game"
    const int ANSWER = 5;
    int numberGuessed;

    // input
    std::cout << "Enter a number between 0-9: ";
    std::cin >> numberGuessed;
    std::cout << "" << std::endl;

    // process
    if (numberGuessed == ANSWER) {
        // output
        std::cout << "Correct!" << std::endl;
    }
    if (numberGuessed != ANSWER) {
        // output
        std::cout << "Incorrect!" << std::endl;
    }
