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
        ll ans=0;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (ll k = 1; k <= n / 2; k++)
        {
            if (n % k == 0)
            {
                ll curr = 0;
                ll maxVal = 0;
                ll minVal = 1e18;
                for (ll j = 1; j <= n; j++)
                {
                    curr += arr[j - 1];
                    if (j%k==0)
                    {
                        maxVal = max(maxVal, curr);
                        minVal = min(minVal, curr);
                        curr = 0;
                    }
                }
                ans = max(ans, (maxVal - minVal));
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}