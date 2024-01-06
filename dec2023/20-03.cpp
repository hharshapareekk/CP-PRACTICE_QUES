// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long // to pop specific value off :     v.erase(v.begin()+4); pops fourth itrn from start

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i <= (n-1); i++)
    {
        if (i != 0 && (arr[i] ^ arr[i - 1]) == 1  )
        {
            count++;
            arr.erase(arr.begin() + i - 1, arr.begin() + i);
            n = arr.size();
            i = 1;
        }
        else if (i != (n-1) && (arr[i] ^ arr[i + 1]) == 1 )
        {
            count++;
            arr.erase(arr.begin() + i, arr.begin() + i + 1);
            n = arr.size();
            i = 1;
        }
        
    }
    if (n == 2)
        {
            if (arr[0] ^ arr[1] == 1)
            {
                count++;
                arr.pop_back();
                arr.pop_back();
            }
        }

    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
