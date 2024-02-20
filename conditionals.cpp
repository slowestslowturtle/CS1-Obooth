/*
Conditionals in cpp
*/
#include <iostream>


using namespace std;

int main()
{
    int num1 , num2;
    cout << "enter two numbers seperated by a space" << endl;
    cin >> num1 >> num2;

    if (num1==num2)
    {
        cout << "the statement is true" << endl;
        cout << num1 << "==" << num2 <<endl;
    }
    else
    {
        cout << "the statement is false" << endl;
        cout << num1 << "!=" << num2 <<endl;        
    }

}
