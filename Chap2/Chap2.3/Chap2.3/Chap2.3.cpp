// Chap2.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Modify the program you wrote in #2 so that it uses a header file (named io.h) to access the functions 
instead of using forward declarations directly in your code (.cpp) files. 
Make sure your header file uses header guards.
*/

#include <iostream> // Not Required
#include "io.h"

int main()
{
	int x{ readNumber() };
	int y{ readNumber() };

	writeNumber(x, y);

	return 0;
}