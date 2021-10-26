// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Oct 2020
// This program finds the largest of 10 random numbers

#include <iostream>
#include <random>

int findLargest(int listOfNumbers[10]) {
    // this function finds the largest number in a list
    int largest;
    int loopCounter;

    largest = listOfNumbers[9];

    for (loopCounter = 0; loopCounter < 10; loopCounter++) {
        if (listOfNumbers[loopCounter] > largest) {
            largest = listOfNumbers[loopCounter];
        }
    }

    return largest;
}

int main() {
    // this function creates 10 random numbers in a list
    int listOfNumbers[10];
    int loopCounter = 0;
    int randomNumber;
    int largest;
    int largestNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 100);  // [1, 100]

    // input, process & output
    for (int loopCounter = 0; loopCounter <= 10; loopCounter++) {
        randomNumber = idist(rgen);
        listOfNumbers[loopCounter] = (randomNumber);
        std::cout << "The random number " << randomNumber << " is : "
            << randomNumber << std::endl;
    }
    largestNumber = (findLargest(listOfNumbers));
    std::cout << "\n\nThe largest number is " << largestNumber << std::endl;

    std::cout << "\nDone." << std::endl;
}
