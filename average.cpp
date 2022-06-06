// Copyright (C) 2022 Paterry Baptichon All rights reserved.
//
// Created by: Paterry Baptichon
// Created on: 2022-06-05
// This program calculates average of 10 random numbers


#include <iostream>
#include <cstdlib>
#include <ctime>


main() {
    // this function uses an array

    int randomNumbers[10];
    int aNumber;
    int total = 0;
    float average;

    srand((unsigned int)time(NULL));

    // input
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        aNumber = (rand() % 100) + 1;
        randomNumbers[loop_counter] = aNumber;
        total += randomNumbers[loop_counter];
        std::cout << "The random number is: " << aNumber << std::endl;
    }

    average = total / 10.0;
    std::cout << "" << std::endl;
    std::cout << "The average of those numbers is " << average << std::endl;
}
