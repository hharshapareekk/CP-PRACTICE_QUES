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
        cin>>n;
        ll arr[n];
        ll val=0;
        ll ans;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            val=val^arr[i];
        }
        ans= val;
        for(int i=0;i<n;i++)
        {
            ans = min(ans,val^arr[i]);
        }
        cout<<ans<<endl;

    }
    return 0;
}