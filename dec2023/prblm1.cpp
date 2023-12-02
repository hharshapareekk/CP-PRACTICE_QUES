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
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        ll brr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            brr[i] = arr[i];
        }
        sort(arr, arr + n);
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == brr[i])
            {
                count++;
            }
        }
        if (count == n)
        {
            cout << "YES" << endl;
        }
        else if (n == k || k > n)
        {
            cout << "YES" << endl;
        }
        else if (k < n)
        {
            if (k == 1)
            {
                cout << "NO" << endl;
            }
            else 
            {
                cout<<"YES"<<endl;
            }

        }
    }
    return 0;
}