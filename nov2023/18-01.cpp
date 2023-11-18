// Codes Of Harsha Pareek
// Problem Statement :https://codeforces.com/contest/1899/problem/E
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll arr[n];
        int leastValpos=0;

        int flag=0;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll temp[n]={arr[n]};
        arr[n]={sort(arr,arr+n)};
        for(int i=0;i<n;i++)
        {
            if(arr[0]==temp[i])
            {
                return leastValpos;
            }
           leastValPos++;
        }
        for(int1 i=leastValPos;i<=n;i++)
        {
            if(arr[i]==temp[i])
            {
                continue;
            }
            else
            {
                int flag = -1;
            }
        }
        if(flag== -1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<leastValpos<<endl;
        }
    }
    return 0;
}