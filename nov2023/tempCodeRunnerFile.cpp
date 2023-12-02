// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int XOR(int x, int y)
{
    return (x | y) & (~x | ~y);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int val =0;
        int minVal = INT32_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 0 && i <= (n - 1))
            {
                val = XOR(arr[i - 1], arr[i]);
            }
            if (val < minVal)
            {
                minVal = val;
            }
        }
        cout<<minVal<<endl;
    }
    return 0;
}