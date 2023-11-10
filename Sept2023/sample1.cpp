#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int numChoco;
        cin >> numChoco;
        int val1;
        int val2;
        int val3;
        if (numChoco % 3 == 0)
        {

            val1 = (numChoco / 3) + 2;
            val2 = floor(float((numChoco - val1) / 2));
            val3 = val2;
            cout << val1 << " " << val2 << " " << val3 << endl;
        }
        else
        {
            val1 = floor(float(numChoco / 3));
            val2 = val1;
            val3 = numChoco - 2 * (val1);
             cout << val1 << " " << val2 << " " << val3 << endl;
        }
    }
    return 0;
}