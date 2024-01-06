// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int brr[n];
    vector<int> maxVal(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> brr[j];
    }
    for (int i = 0; i < n; i++)
    {
        if(brr[i] <0)
        {
            continue;
        }
        if (i == 0)
        {
            ans += brr[i];
            maxVal[arr[i]] = brr[i];
        }
        else
        {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] != arr[j] && brr[i] >= 0)
            {
                ans += brr[i];
                maxVal[arr[i]] = brr[i];
            }
            else if (arr[i] == arr[j] && brr[i] >= 0)
            {
                if (brr[i] > maxVal[arr[i]])
                {
                    ans -= maxVal[arr[i]];
                    ans += brr[i];
                    maxVal[arr[i]] = brr[i];
                }
            }
            else
            {
                continue;
            }
        }
        }
    }

    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}