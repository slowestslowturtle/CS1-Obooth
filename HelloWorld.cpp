#include <iostream>
double guesscheck(double, double);

using namespace std;

int main()
{
    // I made Some notes Srew Capitalization
    double num1 = 45, num2 = 1;
    int i = 0;
    while (num1 != num2)
    {
        cout << "Hello World Again" << endl;
        cout << "my name is Owen" << endl;
        cin >> num2;
        if (guesscheck(num1, num2) == 0)
        {
            cout << "hiGh\n";
        }
        if (guesscheck(num1, num2) == 1)
        {
            cout << "lOw\n";
        }
        if (guesscheck(num1, num2) == 2)
        {
            cout << num2 <<'\n';
        }
        i++;
        if (i==6)
        {
            break;
        }
    }
    cout << "Goodbye" << endl;
    return 0;
}
double guesscheck(double num1, double num2)
{
    if (num1 < num2)
    {
        return 0;
    }
    if (num1 > num2)
    {
        return 1;
    }
    return 2;
}