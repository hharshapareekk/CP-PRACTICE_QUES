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
        int val = 0;
        int minVal;
        int opt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == 0)
            {
                continue;
            }
            else if (i == 1)
            {
                val = XOR(arr[0], arr[1]);
                minVal = val;
            }
            else
            {

                val = XOR(minVal, arr[i]);
                if (opt <= 1)
                {
                    if (val < minVal)
                    {
                        minVal = val;
                    }
                }
                else
                {
                    minVal = val;
                }
            }
        }
        cout << minVal << endl;
    }
    return 0;
}