// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(int n)
{
    for (int i = 0; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    int h;
    cin >> h;
    int x = 1;
    int count = 0;
    while (t--)
    {

        int i = 0;
        h -= pow(2, i);
        while (h > 0)
        {
            if (isPrime (h))
            {
                count++;
                break;
            }
            h -= pow(2, i);
            i++;
            count++;
        }
    }

    if (h < 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << count << endl;
    }
    return 0;
}