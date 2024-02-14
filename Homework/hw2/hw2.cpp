/*
Made by: Owen Booth
Triangle Homework
2-13-24

Greet user
Ask for side lengths
calculate values
display values
*/
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    double side1, side2, side3, svar, sum1;
    // prompt user to enter name
    cout << "What is your name?" << '\n';
    string name;
    getline(cin, name);
    cout << "Hello " << name << " let's solve a triangle.\n";
    cout << "If out put is -nan or 0 it's either not a triangle or just a line.\n";
    //Prompt User to Enter side lengths
    cout << "Enter the length of side 1 " << '\n';
    cin >> side1;
    cout << "Enter the length of side 2\n";
    cin >> side2;
    cout << "Enter the length of side 3\n";
    cin >> side3;
    //set variable for heron's function and perimeter
    svar = side1 + side2 + side3;
    sum1 = (svar/2);
    //inform user of the are and complete Heron's Function
    cout << "the area of your triangle is " << fixed << setprecision(6)
    << sqrt(sum1 * (sum1 - side1) * (sum1 - side2) * (sum1 - side3)) << '\n';
    //inform of the perimeter
    cout << "The perimeter is " << svar << '\n';
    //Prompt user to exit
    cout << "Please hit enter to exit.";
    cin.get();
    getchar();
    return 0;
}