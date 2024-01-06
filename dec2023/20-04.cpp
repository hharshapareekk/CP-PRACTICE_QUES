// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool solve(int n)
{
    if (n % 3 == 0 || n % 4 == 0)
    {
        return true;
    }
    else
    {
        if (n < 3)
        {
            return false;
        }
    }

    return solve(n - 3) || solve(n - 4);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (solve(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}