// Chap2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Modify the program you wrote in exercise #1 so that readNumber() and writeAnswer() live in a separate file called “io.cpp”. 
Use a forward declaration to access them from main().

If you’re having problems, make sure “io.cpp” is properly added to your project so it gets compiled.
*/

#include <iostream>

int readNumber();					// Forward Declaration
void writeNumber(int y, int z);		// Forward Declaration

int main()
{
	int x{ readNumber() };
	int y{ readNumber() };

	writeNumber(x, y);

	return 0;
}
