// Chap5L.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Question #2

a) Implement a game of hi-lo. 
First, your program should pick a random integer between 1 and 100. 
The user is given 7 tries to guess the number.
If the user does not guess the correct number, the program should tell them whether they guessed too high or too low. 
If the user guesses the right number, the program should tell them they won. 
If they run out of guesses, the program should tell them they lost, and what the correct number is. 
At the end of the game, the user should be asked if they want to play again. 
If the user doesn’t enter ‘y’ or ‘n’, ask them again.

Hint:
Hints:
* Use the Mersenne Twister algorithm from chapter 5.9 -- Random number generation to pick a random number.
* Write a function that allows the user to play a single game of hi-lo.
* Write a function that asks the user if they want to play again and handles the looping logic for an incorrect input.
* Avoid magic numbers by defining constants.
* In an if-statement, if you already checked 2 numbers for equality and compared them with either the < or > operator, 
  but all checks failed, the relation between the numbers must be the one you didn’t check. 
  For example, if guess is neither equal to nor less than number, it must be greater than number.

*/

#include <iostream>
#include <string>
#include <random> // for std::mt19937
#include <ctime>  // for std::time

// Mersenne Twister function algorithm
namespace MyRandom
{
    // Initialize our mersenne twister witha random seed based on the clock (once at system startup)
    std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
}

int getRandomNumber(int min, int max)
{
    std::uniform_int_distribution<> die{ min, max }; //we can create a distribution in any function that needs it
    return die(MyRandom::mersenne); // and then generate a random number from our global generator

}

int createRandomNum()
{
    int random;

    random = getRandomNumber(1, 100);

    return random;  
    
}

void MsgMenu()
{
    std::cout << "Let's play a game. I'm thinking of a number. You have 7 tries to guess what it is.\n";
}

int main()
{
    int random{ createRandomNum()};
    int input{};
    char playagain{};

Again: // Label statement
    MsgMenu();

    std::cout << "Random Number: " << random << '\n';

    for (int count{ 1 }; count < 8; count++)
    {
        std::cout << "Guess #" << count << ": ";
        std::cin >> input;
        std::cout << "Input is : " << input << '\n';
        
        if (count == 7 && (input < random || input > random))
            std::cout << "Sorry, you lose. The correct number was " << random << ".\n";
        else if (input < random)
            std::cout << "Your guess is too low.\n";
        else if (input > random)
            std::cout << "Your guess is too high.\n";
        else if (input == random)
        {
            std::cout << "Correct! You win!\n";
            break;
        }
    }
    
    std::cout << "Would you like to play again (y/n) ? ";
    std::cin >> playagain;
    
    if (playagain == 'y' || playagain == 'Y')
        goto Again;
    else if (playagain == 'n' || playagain == 'N')
        std::cout << "Play again, NO.\n";

}


