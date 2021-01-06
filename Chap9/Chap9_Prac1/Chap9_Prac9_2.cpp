// Chap9_Prac9_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Quiz

1) Declare an array to hold the high temperature (to the nearest tenth of a degree) for each day of a year (assume 365 days in a year). Initialize the array with a value of 0.0 for each day.

2) Set up an enum with the names of the following animals: chicken, dog, cat, elephant, duck, and snake. Put the enum in a namespace. Define an array with an element for each of these animals, and use an initializer list to initialize each element to hold the number of legs that animal has.

Write a main function that prints the number of legs an elephant has, using the enumerator.
*/

#include <iostream>

namespace Animals {
    enum Animals
    {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        max_animals
    };
}

int main()
{
    double temp[365]{};
    std::cout << "Temperature : " << temp[0] << '\n';

    int legs[Animals::max_animals]{ 2, 4, 4, 4, 2, 0 };

    std::cout << "Elephants has : " << legs[Animals::elephant] << " legs";

    return 0;
}
