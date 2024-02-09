/*
Name Owen booth

All ABout Variables
*/

#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    cout.setf(ios::fixed, ios::floatfield);
    cout << left << setw (10) << "name" << setw(10) << "Title" << setw(10) << "position" << endl;

    cout << setfill('c');
    cout << setw(48) << "" << endl;
    cout << setfill(' ');

    cout << setw(10) << "Jeremy" << setw(25) << "maser of the universe" << setw (13) << "All knowing" << endl;
    
    cout << setprecision(10) << 42.012345678901234567890 << endl;

    int number3 = 'B';
    
    cout << number3 << endl;

    cout << "Hello world" << endl;

    int number1;
    long number2;
    cout << &number1 << endl;
    cout << &number2 << endl;
    int number4;
    int number5;

    cout << "Please Enter Number 1 :";
    cin >> number4;

    cout << "please enter number 2 :";
    cin >> number5;

    cout << number4 << "+" << number5 << "=" << number4 + number5 << endl;
    string myname;
    cout << "what is your name?\n ";

    // cin >> myname >> name2;
    cin.get();
    getline(cin, myname);
    cout << "Welcome " << myname << " to our program." << endl;

    string somephrase;
    somephrase = "a\tb\n";
    cout << somephrase;
    somephrase = "aa\tb\n";
    cout << somephrase;
    somephrase = "aaa\tb\n";
    cout << somephrase;
    somephrase = "aaaa\tb\n";
    cout << somephrase;
    somephrase = "aaaaa\tb\n";
    cout << somephrase;
    somephrase = "aaaaaa\tb\n";
    cout << somephrase;
    return 0;
}
