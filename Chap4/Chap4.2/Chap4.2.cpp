// Chap4.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Write a short program to simulate a ball being dropped off of a tower. 
To start, the user should be asked for the height of the tower in meters. 
Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). 
Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. 
The ball should not go underneath the ground (height 0).

Your program should include a header file named constants.h that contains a symbolic constant to hold the value of gravity (9.8).

Use a function to calculate the height of the ball after x seconds. 
The function can calculate how far the ball has fallen after x seconds using the following formula: distance fallen = gravity_constant * x_seconds2 / 2

Sample output:
Enter the height of the tower in meters: 100
At 0 seconds, the ball is at height: 100 meters
At 1 seconds, the ball is at height: 95.1 meters
At 2 seconds, the ball is at height: 80.4 meters
At 3 seconds, the ball is at height: 55.9 meters
At 4 seconds, the ball is at height: 21.6 meters
At 5 seconds, the ball is on the ground.

*/

#include <iostream>
#include "constants.h"

double ballheight();
void distancefallen(double gravity, double secs, double height);

int main()
{
    double height { ballheight() };
    double grav { gravity };

    distancefallen(grav, 0, height);
    distancefallen(grav, 1, height);
    distancefallen(grav, 2, height);
    distancefallen(grav, 3, height);
    distancefallen(grav, 4, height);
    distancefallen(grav, 5, height);

    return 0;
}

double ballheight()
{
    std::cout << "Enter the height of the tower in metres: ";
    double UserInput;
    std::cin >> UserInput;

    return UserInput;
}

void distancefallen(double gravity, double sec, double height)
{
    // distance fallen = gravity_constant * x_seconds2 / 2
    // At 1 seconds, the ball is at height: 95.1 meters

    double distancedrop;
    double fallen;

    distancedrop = (gravity * (sec * sec)) / 2;
    fallen = height - distancedrop;
    if (fallen > 0.0)
    {
        std::cout << "At " << sec << " seconds, the ball is at height: " << fallen << " metres.\n";
    }
    else
    {
        std::cout << "At " << sec << " seconds, the ball is on the ground.\n";
    }
}