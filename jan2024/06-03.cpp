// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int count = 0;
    ll x;
    cin >> x;
    for (int i = 0; i < 32; i++)
    {
        if ((x & (1 << i)) > 0)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
int main()
{
    
        solve();
    

    return 0;
}