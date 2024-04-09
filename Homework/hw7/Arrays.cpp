/*
Coded By Owen Booth
Kattis Falling apart
*/

#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm> //cplusplus.com
 
using namespace std;

int main()
{
    // create your variabels
    int n1, s1, s2;
    s1 = 0;
    s2 = 0;
    // get the desired size
    cin >> n1;
    // get all the components
    vector<int> v1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> v1[i];
    }
    // sort by largest to smalles so they each pick the largest number first
    sort(v1.rbegin(), v1.rend());
    // add the sums so all evens inclusing iteration 0 go to allice
    for (int t = 0; t < n1; t++)
    {
        if (t % 2 == 0)
        {
            s1 += v1[t];
        }
        else
        {
            s2 += v1[t];
        }
    }
    // tell them the amounts
    cout << s1 << ' ' << s2 << '\n';
    return 0;
}