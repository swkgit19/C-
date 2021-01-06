// Chap3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Use the integrated debugger to step through this program and watch the value of x. Based on the information you learn, fix the following program:

#include <iostream>

int readNumber()
{
	int x{};
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x;
}

int main()
{
	int x{ 0 };
	x = readNumber();
	x += readNumber();
	writeAnswer(x);

	return 0;
}

