//Codes Of Harsha Pareek
//Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod (ll)(1e9 + 7)
void solution()
{
    ll n;
    cin>>n;
    if(n == 1)
    {
        cout<<1<<endl;
    }
    else if(n ==2)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<(n/2)+(n%2)<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}