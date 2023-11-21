// Codes Of Harsha Pareek
// Problem Statement :  https://codeforces.com/problemset/problem/1875/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        ll total = b;
        ll count = 0;
        ll x[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        sort(x, x + n);
         ll i=0;
        while (total >= 1 && i<n)
        {
           
            if (total == 1)
            {
                total = min((total + x[i]), a);
            }
            total--;
            count++;
            i++;
        }
        cout << count << endl;
    }
    return 0;
}