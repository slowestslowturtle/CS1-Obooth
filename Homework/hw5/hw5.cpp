/*
    Coded By Owen Booth
    Loops Homework

    HW5 – Loop HW                      	                                                        	Possible Points: 110  	             ***********************************************************************************************************
“Guess the Number” Game

Design and implement the “Guess the Number” game with the following requirements.
Create a folder called HW5
Create a source file called main.cpp inside the HW5 folder.
Write programmer and program information at the top of the source file as comments.
Write algorithm steps at the top of the program as comments. (10 points)
Your program will ask the player's name and greet the player. (5 points)
Define a function called randomNumber that generates and returns a random number between 1 and 20. (5 points)
Define a function called readNumber that prompts the user to take a guess and return the guessed number. (10 points)
You must validate the guessed number to be between 1 and 20.
Define a function called checkGuess that takes two integers compares the two numbers and returns the following result: (10 points)
returns 0 if the numbers are equal
returns -1 if the first number is less than second
returns 2 otherwise
Write 3 test cases for checkGuess function using assert statement. (10 points)
Define a function called game that implements the logic of the guess the number game. (25 points)
Call the randomNumber function defined above to generate a random number for the user to guess for each game.
Until the game is over, your program will ask the player to guess the number using the readNumber function defined above.
Use the function defined above called checkGuess to compare the user entered number with the hidden random number.
If the player guesses the number within six tries, the game is over and the player wins.
If the player can't guess the number within six tries, the game is over and the player loses.
For every wrong guess, your program informs the player whether the guess is too high or too low by calling checkGuess function.

When the game is over, your program will inform whether the player won or lost the game and reveal the secret random number picked by the computer, especially if they lose. (5 points)
Your game will continue to run until the user wants to quit when the game is over. (10 points)
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
#include <cassert>

using namespace std;

double randomNumber();

double readnumber(double);

double checknumber(double, double);

void test();

int main()
{
    double guess = 0;
    string myname;
    test();
    cout << "what is your name ";
    getline(cin, myname);
    cout << "welcome " << myname << " to guess the number you get 6 attempts. \n";
    for (int x = 0; x < 1;)
    {
        double rnum = randomNumber();
        for (int w = 0; w < 6;)
        {
            guess = readnumber(guess);
            if (checknumber(guess, rnum) == 0)
            {
                cout << "you win. it took " <<w +1 << " guesses.\n";
                break;
            }
            if (checknumber(guess, rnum) == 2)
            {
                cout << "Too High\n";
                w++;
            }
            if (checknumber(guess, rnum) == -1)
            {
                cout << "Too low\n";
                w++;
            }
        }
        cout << "The number was: " << rnum << " would you like to play again( 1 = yes, 2 = no )\n";
        int answer2;
        cin.get();
        cin >> answer2;
        if (answer2 == 0)
        {
            x++;
        }
        else
        {
            cout << "hit enter to run again.\n";
            cin.get();
            getchar();
        }
    }
    cout << "goodbye.\n";
    getchar();
    cin.get();
    return 0;
}

double randomNumber()
{
    srand(time(0));
    // credit to codescracker.com
    return (rand() % (20 + 1 - 0) + 0);
}

double readnumber(double guess)
{
    for (int t = 0; t < 1;)
    {
        cout << "enter a guess from 1-20.\n";
        cin >> guess;
        if (guess > 0 && guess < 21)
        {
            return guess;
        }
        else
        {
            cout << "\n";
        }
    }
    return 0;
}
double checknumber(double guess, double rnum)
{
    if (guess == rnum)
    {
        return 0;
    }
    if (guess < rnum)
    {
        return -1;
    }
    if (guess > rnum)
    {
        return 2;
    }
    return 3;
}

void test()
{
    double test1 = 2, test2 = 4, test3 = 6, test4 = 10, test5 = 12, test6 = 22;
    assert(checknumber(test1, test2) == -1);
    assert(checknumber(test3, test4) == -1);
    assert(checknumber(test5, test6) == -1);
}
