// Codes Of Harsha Pareek
// Problem Statement : https://codeforces.com/problemset/problem/1883/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int arr[4];
        int sol = 0;
        int updates = 1;
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
            {
                sol+=10;
                updates=10;
            }
             else
            {
                sol+= (abs((arr[i]-updates))+1);
                updates= arr[i];
            }
        }
        cout << sol<< endl;
    }
    return 0;
}