/*
    Loops Lab
    Updated By: Owen Booth FIXME1 #fixed
    CSCI 111
    Date: 3/27/2024 FIXME2 #fixed

    Program prints geometric shapes of given height with * using loops
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void printTriangle(int height)
{
    // Function takes height as an argument to print the triangle
    // of that height with *
    int row = 1;
    // row
    while (row <= height)
    {
        // column
        for (int col = 1; col <= row; col++)
            cout << "* ";
        row += 1;
        cout << endl;
    }
}

void printFlippedTriangle(int height)
{
    /*
    Implement the function that takes height as an argument
    and prints a triangle with * of given height.
    Triangle of height 5, e.g., should look like the following.
    * * * * *
    * * * *
    * * *
    * *
    *
    */
    int row = 1;
    // row
    while (row <= height)
    {
        // column
        for (int col = height; col >= row; col--)
            cout << "* ";
        row += 1;
        cout << endl;
    }
    // FIXME3 ... #fixed
}

/*
FIXME4 #fixed
Design and implement a function that takes an integer as height and
prints square of the given height with *.
Square of height 5, e.g., would look like the following.

*  *  *  *  *
*  *  *  *  *
*  *  *  *  *
*  *  *  *  *
*  *  *  *  *

*/
void printsquare(int height)
{
    int row = 1;

    while (row <= height)
    {

        for (int col = 1; col <= height; col++)
            cout << "* ";
        row += 1;
        cout << endl;
    }
}
// function clears the screen system call
// NOTE: system call is not a security best pracice!
void clearScreen()
{
// use "cls" in windows and "clear" command in Mac and Linux
#ifdef _WIN32
    system("clS");
#else
    system("clear");
#endif
}

int main(int argc, char *argv[])
{
    for (int w = 0; w < 1;)
    { // FIXME5 add a loop to make the program to continue to run until the user wants to quit #fixed
        // FIXME6 call clearScreen function to clear the screen for each round of the loop #fixed
        clearScreen();
        int height;
        cout << "Program prints geometric shapes of given height with *\n";
        cout << "Please enter the height of the shape: ";
        cin >> height;
        // call printTriangle function passing user entered height
        printTriangle(height);

        // FIXME7 #fixed
        // Call printFlippedTriangle passing proper argument
        // Manually test the function #fixed
        printFlippedTriangle(height);

        // FIXME6 #fixed
        // Call the function defined in FIXME4 passing proper argument
        // Manually test the function
        printsquare(height);

        // FIXME9 #fixed
        // prompt user to enter y/Y to continue anything else to quit
        char option, c1, c2;
        c1 = 'Y';
        c2 = 'y';
        cout << "Enter Y/y to continue anything else to exit. ";
        cin >> option;

        // FIXME10 #fixed
        // Use conditional statements to break the loop or continue the loop
        if (option == c1 || option == c2)
        {
            cout << "hit enter to run again.\n";
            cin.get();
            getchar();
        }
        else
        {
            w++;
        }
    }
    return 0;
}