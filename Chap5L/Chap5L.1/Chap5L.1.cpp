// Chap5L.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
In the chapter 2 comprehensive quiz, we wrote a program to simulate a ball falling off of a tower. 

Because we didn’t have loops yet, the ball could only fall for 5 seconds.

Take the program below and modify it so that the ball falls for as many seconds as needed until it reaches the ground.
*/

#include <iostream>

#include "myconstants.h"

// gets initial height from user and returns it
double getInitialHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double initialHeight{};
	std::cin >> initialHeight;
	return initialHeight;
}

// Returns height from ground after "secondsPassed" seconds
double calculateHeight(double initialHeight, int secondsPassed)
{
	// Using formula: [ s = u * t + (a * t^2) / 2 ], here u(initial velocity) = 0
	double distanceFallen{ (myConstants::gravity * secondsPassed * secondsPassed) / 2.0 };
	double currentHeight{ initialHeight - distanceFallen };

	return currentHeight;
}

void calculateAndPrintHeight(double initialHeight, int secondsPassed)
{
	double height{ calculateHeight(initialHeight, secondsPassed) };
	printHeight(height, secondsPassed);
}

// Prints height every second till ball has reached the ground
void printHeight(double height, int secondsPassed)
{
	if (height > 0.0)
	{
		std::cout << "At " << secondsPassed << " seconds, the ball is at height:\t" << height <<
			" meters\n";
	}
	else
		std::cout << "At " << secondsPassed << " seconds, the ball is on the ground.\n";
}


int main()
{
	const double initialHeight{ getInitialHeight() };

	int seconds{ 0 };
	double height{};

	do 
	{
		height = calculateHeight(initialHeight, seconds);
		printHeight(height, seconds);
		seconds++;

	} while (height > 0.0);

	return 0;
}
