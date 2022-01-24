// Copyright (c) 2022 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Jan 2022
// Min Num

#include <iostream>
#include <random>

using std::cout;
using std::endl;

int main() {
    // main function for min number

    // stuff for random
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<int> distr(1, 100);

    // defining variables
    int arr[10];
    int smallest = 101;

    // create array with 10 random numbers/process
    for (int rand = 0; rand < 10; rand++) {
        arr[rand] = distr(eng);
    }

    // find smallest/process
    for (int num = 0; num < 10; num++) {
        cout << "The random number is: " << arr[num] << endl;
        if (arr[num] < smallest) {
            smallest = arr[num];
        }
    }

    // output
    cout << endl;
    cout << "Smallest number is " << smallest << endl;

    // output finished
    cout << endl;
    cout << "Done." << endl;
}
