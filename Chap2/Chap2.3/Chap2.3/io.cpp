#include <iostream>
#include "io.h"

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