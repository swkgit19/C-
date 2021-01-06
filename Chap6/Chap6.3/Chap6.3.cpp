// Chap6.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool passOrFail()
{
    //bool results[]{ "True", "True", "True", "False", "False" };

    static int passes{ 3 };
    return (--passes >= 0);
}

int main()
{
    std::cout << "User #1: " << (passOrFail() ? "Pass" : "Fail") << '\n';
    std::cout << "User #2: " << (passOrFail() ? "Pass" : "Fail") << '\n';
    std::cout << "User #3: " << (passOrFail() ? "Pass" : "Fail") << '\n';
    std::cout << "User #4: " << (passOrFail() ? "Pass" : "Fail") << '\n';
    std::cout << "User #5: " << (passOrFail() ? "Pass" : "Fail") << '\n';

    return 0;
}

