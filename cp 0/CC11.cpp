#include <bits/stdc++.h>
using namespace std;
int main()
{
    string hidden[5];
    cin>>hidden;
    string guess[5];
    cin>>guess;
    int testcase;
    while(testcase--)
    {
        for(int i=0;i<5;i++)
        {
            if(hidden[i]==guess[5-i])
            {
                cout<<"G";
            }
            else
            {
                cout<<"B";
            }
        }
    }
    return 0;
}