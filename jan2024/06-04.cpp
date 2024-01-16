// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod (ll)(1e9 + 7)
ll helper(ll n, ll k)
{
    if (k == 0)
    {
        return 1;
    }
    ll ans = helper(n, k - 1);
    ans %= mod; 
    ans *= n;
    ans %= mod;
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout<<helper(n, k)<<endl;
    }
    return 0;
}