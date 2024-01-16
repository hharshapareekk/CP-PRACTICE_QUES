// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod (ll)(1e9 + 7)
void solution()
{
    int n, x; // length and renewal swipes
    cin >> n >> x;
    string str;
    cin>>str;
    int swipes = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {

        if (str[i] == '1')
        {
            swipes = x;
        }
        else
        {
            if (swipes > 0)
            {
                swipes--;
            }

            else
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
    }
    if (flag != 1)
    {
        cout << "YES" << endl;

    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }

    return 0;
}