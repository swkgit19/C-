// Chap4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Write the following program: The user is asked to enter 2 floating point numbers (use doubles). 
The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
The program computes the answer on the two numbers the user entered and prints the results. 
If the user enters an invalid symbol, the program should print nothing.

Example of program:

Enter a double value: 6.2
Enter a double value: 5
Enter one of the following: +, -, *, or /: *
6.2 * 5 is 31
*/


#include <iostream>

double readNumber()
{
	double x{};
	std::cout << "Enter an double value: ";
	std::cin >> x;

	return x;
}

char math()
{
	char x{};
	std::cout << "Enter one of the following: +, -, *, or /: ";
	std::cin >> x;

	return x;
}

void writeNumber(double x, double y, char z)
{
	if (z == '+')
		std::cout << x << " + " << y << " is " << x + y << ".\n";
	else if (z == '-')
		std::cout << x << " - " << y << " is " << x - y << ".\n";
	else if (z == '*')
		std::cout << x << " * " << y << " is " << x * y << ".\n";
	else if (z == '/')
		std::cout << x << " / " << y << " is " << x / y << ".\n";
	else
		std::cout << "Invalid Symbol.\n";
}

int main()
{
	double x{ readNumber() };
	double y{ readNumber() };
	char z{math()};
	writeNumber(x, y, z);
}
