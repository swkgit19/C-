// Chap6.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Didn't use inline constexpr, because compiler don't support C++17.

Used constexpr instead.
*/

#include "constants.h"

#include <iostream>

int main()
{
    std::cout << "How many students are in your class ? ";
    int students{};
    std::cin >> students;

    if (students > constants::max_class_size)
    {
        std::cout << "There are too many students in this class.\n";
    }
    else
    {
        std::cout << "This class isn't too large.\n";
    }

    return 0;
}
