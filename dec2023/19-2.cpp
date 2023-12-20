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
        string s;
        cin >> s;
        vector<ll> a(27);
        for (ll i = 0; i < n; i++)
        {
            ll val = (int)s[i] - 64;
            a[val]++;
        }

        ll ans = 0;

        for (ll i = 1; i < 27; i++)
        {
            if (a[i] >= i)
            {
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}