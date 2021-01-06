// Chap3.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Use the integrated debugger to step through this program. For inputs, enter 8 and 4. Based on the information you learn, fix the following program:
*/

#include <iostream>

int readNumber()
{
	std::cout << "Please enter a number:";
	int x{};
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{	
	std::cout << "The quotient is: " << x;
}

int main()
{
	int x{ 0 };
	int y{ 0 };
	x = readNumber();
	y = readNumber();
	writeAnswer(x / y);

	return 0;
}
