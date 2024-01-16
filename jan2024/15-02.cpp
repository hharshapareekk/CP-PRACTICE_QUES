// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod (ll)(1e9 + 7)
void solution()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> frequency(1024, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        frequency[arr[i]]++;
    }
    int ans = -1;
    vector<int> temp(1024, 0);
    for (int j = 1; j < 1024; j++)
    {
        for (int k = 0; k < n; k++)
        {
            temp[arr[k] ^ j];
        }
        bool flag = true;
        for (int k = 0; k < 1024; k++)
        {
            if (frequency[k] != temp[k])
            {
                flag = false;
                break;
            }

        }
        if(flag==true)
        {
            ans = j;
            break;
        }
    }
    cout<<ans<<endl;
}

    int main()
    {
        ll t;
        cin >> t;
        while (t--)
        {
            solution();
        }
        return 0;
    }