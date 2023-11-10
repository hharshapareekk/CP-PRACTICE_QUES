#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int p = x;
        int q = y;

        for (int i = 1; i <= k; i++)
        {

            if (p == q)
            {
                cout << (p + q) << endl;
                break;
            }
            else
            {
                p = max(p, q);    // p=max
                q = min(p, q);    // q=min
                if (p % q == 0)
                {
                    p = q;        // p set to min
                }
                else
                {
                    p = 1;
                    if (p != q)
                    {
                        p = p * q;
                    }
                }
            }
        }
    }
    return 0;
}
