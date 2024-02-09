/*
    Created By Owen Booth
    2/6/2024
    Impossible Hangman
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string myname;
    cout << "what is your name ";
    getline(cin,myname);
    cout << "welcome " << myname << " to our broken game of Hangman victory is impossible.\n";
    cout << "after every guess hit enter\n\n";
    cout << "enter your first guess\n";

    char guess1;
    cin >> guess1;
    cout << "Stage 0 \n";
    cout << "---------------\n";
    cout << "|/\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "----------\n";
    cout << "The gallows appear\n\n";

    cout << "guess 2\n";
    char guess2;
    cin >> guess2;
    cout << "Stage 1\n";
    cout << "---------------\n";
    cout << "|/            |\n";
    cout << "|             0\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "----------\n";
    cout << "try Agian\n\n";

    cout << "guess 3\n";
    char guess3;
    cin >> guess3;
    cout << "stage 2\n";
    cout << "---------------\n";
    cout << "|/            |\n";
    cout << "|             0\n";
    cout << "|             |\n"; 
    cout << "|             |\n";
    cout << "|             |\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "----------\n";
    cout <<"nope\n\n";    

    cout << "guess 4\n";
    char guess4;
    cin >> guess4;
    cout << "stage 3\n";
    cout << "---------------\n";
    cout << "|/            |\n";
    cout << "|             0\n";
    cout << "|             |\n"; 
    cout << "|             |\n";
    cout << "|             |\n";
    cout << "|            /\n";
    cout << "|           / \n";
    cout << "|\n";
    cout << "----------\n";
    cout << "not even close\n\n";    

    cout << "guess 5\n";
    char guess5;
    cin >> guess5;
    cout << "stage 4\n";
    cout << "---------------\n";
    cout << "|/            |\n";
    cout << "|             0\n";
    cout << "|             |\n"; 
    cout << "|             |\n";
    cout << "|             |\n";
    cout << "|            / \\\n";
    cout << "|           /   \\\n";
    cout << "|\n";
    cout << "----------\n";
    cout << "Why that one\n\n";

    cout << "guess 6\n";
    char guess6;
    cin >> guess6;
    cout << "stage 5\n";
    cout << "---------------\n";
    cout << "|/            |\n";
    cout << "|             0\n";
    cout << "|             |\\\n"; 
    cout << "|             | \\\n";
    cout << "|             |\n";
    cout << "|            / \\\n";
    cout << "|           /   \\\n";
    cout << "|\n";
    cout << "----------\n";
    cout << "Not a skilled Hangmanist are you\n\n";     

    cout << "guess 7\n";
    char guess7;
    cin >> guess7;
    cout << "stage 6\n";
    cout << "---------------\n";
    cout << "|/            |\n";
    cout << "|             0\n";
    cout << "|            /|\\\n"; 
    cout << "|           / | \\\n";
    cout << "|             |\n";
    cout << "|            / \\\n";
    cout << "|           /   \\\n";
    cout << "|\n";
    cout << "----------\n";  
    cout << "congrats you lose impossible Hangman\n\n";

    cout << "message for the coder\n"; 
    char defeatmessage;
    cin >> defeatmessage;
    cout << "Okay Goodbye\n\n";
    return 0;
}
