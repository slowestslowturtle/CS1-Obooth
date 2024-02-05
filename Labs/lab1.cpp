/*
    StdIO Lab
    ASCII Art - using literals and variables
    
    Updated By: <Your name> #FIXME1
    Date: ... #FIXME2
    
    This program produces an ASCII art on the console.

    Algorithm steps: 
    1. Use variables to store data/values
    2. Write a series of cout statements to print the data/values
*/

#include <iostream> //library for input and output
#include <string> //library for string data
using namespace std; //resolve cout, cin, and endl names
 
//main entry point of the program
int main()
{
    //FIXME3: declare a variable to store name #fixed
    string yourname;
    //FIXME4: prompt user to enter their name and store the value in variable#fixed
    cout << "what is your name? ";
    getline(cin, yourname);
    //FIXME5: greet the name using the variable as the following output#fixed
    //must output: Nice meeting you, <name>!#fixed
    cout << "Nice meeting you, " << yourname << endl;
    cout << "Hope you like my Tom & Jerry ASCII art...\n\n";
    string line1;
    line1 = "  |\\_/|   **********************   (\\_/)\n";
    cout << line1;
    line1 = " / @ @ \\  *      ASCII Lab     *  (='.'=)\n";
    cout << line1;
    line1 = "( > 0 < ) *    By Owen Booth   * (\" )_( \")\n";
    cout << line1;
    line1 = "  >>x<<   *       CSCI 111     *\n";
    cout << line1;
    line1 = "  / 0 \\   **********************\n";
    cout << line1;
    //FIXME6: use variable to print the second line line of the graphic
    //FIXME7: print the third line of the graphics
    //FIXME8: use variable to print the fourth line
    //FIXME9: use variable to print the fifth line
    //Note: You can add more lines or print more ASCII arts of your choice if you'd like...

    cout << "\nGood bye... hit enter to exit the program: " << '\n';
    //FIXME10: make the console wait for user input;
    getchar();
    return 0; //exit program by returning 0 status to the system
}