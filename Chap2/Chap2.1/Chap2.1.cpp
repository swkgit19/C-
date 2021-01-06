// Chap2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Write a single-file program (named main.cpp) that reads two separate integers from the user, adds them together, and then outputs the answer. The program should use three functions:

A function named “readNumber” should be used to get (and return) a single integer from the user.
A function named “writeAnswer” should be used to output the answer. This function should take a single parameter and have no return value.
A main() function should be used to glue the above functions together.
*/

#include <iostream>

int readNumber()
{
	int x{};
	std::cout << "Enter an integer: ";
	std::cin >> x;

	return x;
}

void writeNumber(int y, int z)
{
	std::cout << y << " + " << z << " is " << y + z << ".\n";
	std::cout << y << " - " << z << " is " << y - z << ".\n";
}


int main()
{
	int x{readNumber()};
	int y{readNumber()};

	writeNumber(x, y);

	return 0;
}


