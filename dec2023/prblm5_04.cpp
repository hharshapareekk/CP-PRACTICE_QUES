// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;
        int flag =0;
        for(int i= 0 ;i <= (n-1) ;i++)
        {
            if(str[i] == '0')
            {
                cout<<"YES"<<endl;
                flag =1;
                break;
            }
            else
            {
                continue;
            }
        }
        if(flag == 0)
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}