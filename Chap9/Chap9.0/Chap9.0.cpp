// Chap9.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
To make the quizzes a little easier, we have to introduce a couple of new algorithms.

std::reduce applies a function, by default the + operator, to all elements in a list, resulting in a single value. 
When we use the + operator, the result is the sum of all elements in the list. 
Note that there�s also std::accumulate. 
std::accumulate cannot be parallelized, because it applies the function left-to-right. 
std::reduce segments the list, which means that the function is applied in an unknown order, allowing the operation to be parallelized. 
If we want to sum up a list, we don�t care about the order and we use std::reduce.

std::shuffle takes a list and randomly re-orders its elements.
*/

#include <algorithm> // std::shuffle
#include <array>
#include <ctime>
#include <iostream>
#include <numeric> // std::reduce
#include <random>

int main()
{
    std::array arr{ 1, 2, 3, 4 };

    //std::cout << std::reduce(arr.begin(), arr.end()) << '\n'; // 10

    // If you can't use std::reduce, use std::accumulate. The 0 is the initial value
    // of the result: 0 + (((1 + 2) + 3) + 4)
    std::cout << std::accumulate(arr.begin(), arr.end(), 0) << '\n'; // 10

    std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
    std::shuffle(arr.begin(), arr.end(), mt);

    for (int i : arr)
    {
        std::cout << i << ' ';
    }

    std::cout << '\n';

    return 0;
}