#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long arr[n];
        long long p =(arr[0] * arr[n - 1]);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (p % arr[i] != 0 || arr[i] * arr[n - i - 1] != n)
            {
                cout << -1 << endl;
                break;
            }
            if (i == n - 1)
                {
                    if (n == 1)
                    {
                        cout << arr[0] * arr[0] << endl;
                    }
                    else
                    {
                        cout << arr[0] * arr[n - 1] << endl;
                    }
                }
        }
    }
    return 0;
}