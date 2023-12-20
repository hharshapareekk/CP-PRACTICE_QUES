// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int cnt1 = 0;
        int cnt0 = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '0')
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
        if (cnt0 == cnt1)
        {
            cout << 0 << endl;
        }
        else
        {
            if (str[0] == '0')
            {
                cout << cnt0 << endl;
            }
            else
            {
                cout << cnt1 << endl;
            }
        }
    }
    return 0;
}