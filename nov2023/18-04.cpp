// Codes Of Harsha Pareek
// Problem Statement :  https://codeforces.com/problemset/problem/1878/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;
        if (n > x && k != 0)
        {
            cout << "NO" << endl;
        }
        else if (n == x && k > 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            float sol = n;
            float low = 0;
            float high = 0;
            float div = (float)(x - n) / (float)(k - 1);
            if (div == (ceil)(div))
            {
                sol += div;
                low = div - 1;
                high = div + 1;
                k --;
            }
            else
            {
                low = (floor)(div);
                high = (ceil)(div);
            }

            k --;
            int temp = 1;
            while (temp<=k && sol != x)
            {
                if (temp %  2 != 0)
                {
                    sol +=low;
                    low--;
                    temp++;
                }
                else
                {
                    sol+=high;
                    high++;
                    temp++;
                }
            }
            if(sol == x)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}