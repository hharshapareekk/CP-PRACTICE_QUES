#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int sum = 0;
        int n, k, x;
        cin >> n >> k >> x;

        if (n < k || (x + 1) < k)
        {
            cout << -1 << endl;
        }

        else
        {
            int valuesPassed = 0;
            int valuesUsed = k;
            while (valuesUsed >= 1)
            {
                sum += (valuesUsed - 1);
                valuesUsed--;
                valuesPassed ++;
            }
            if (k != x)
            {
                sum = sum + (x * (n - valuesPassed));
            }
            else
            {
                sum = sum + ((x - 1) * (n - valuesPassed));
            }
            cout << sum << endl;
        }
        
    }
    return 0;
}