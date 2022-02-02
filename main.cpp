// Copyright (c) 2022 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Jan 2022
// Min Num

#include <iostream>
#include <random>

using std::cout;
using std::endl;

int find_smallest(int arr[10]) {
    // finding smallest number
    int smallest = 101;

    // find smallest/process
    for (int num = 0; num < 10; num++) {
        if (arr[num] < smallest) {
            smallest = arr[num];
        }
    }

    // return smallest
    return smallest;
}

int main() {
    // main function for min number

    // stuff for random
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<int> distr(1, 100);

    // defining variables
    int arr[10];

    // create array with 10 random numbers/process
    for (int rand = 0; rand < 10; rand++) {
        arr[rand] = distr(eng);
        cout << "The random number is: " << arr[rand] << endl;
    }

    // output/calling function
    cout << endl;
    cout << "Smallest number is " << find_smallest(arr) << endl;

    // output finished
    cout << endl;
    cout << "Done." << endl;
}
