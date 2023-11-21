//Codes Of Harsha Pareek
//Problem Statement : https://codeforces.com/problemset/problem/1883/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int sol=0;
        int updates=1;
        for(int i=0;i<4;i++)
        {
            if(str[i]=='0')
            {
                sol +=9;
                updates= str[i];
            }
            else
            {
                sol+= (str[i]-updates)+1;
                updates= str[i];
            }
        }
        cout<<sol<<endl;
    }
  return 0;
}