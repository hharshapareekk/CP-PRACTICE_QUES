// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod (ll)(1e9 + 7)
void solution()
{
    int n;
    cin >> n;
    int val = 1;
    int ans = 1;
    int maximum = 1;
    for (int i = 2; i <= n; i++)
    {
        int value = (val & i);
        if (value != 0)
        {
            ans++;
            val = value;
        }
        else
        {

            ans = 1;
            val = i;
        }
        if (maximum < ans)
        {
            maximum = ans;
        }
    }
    cout << maximum << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}