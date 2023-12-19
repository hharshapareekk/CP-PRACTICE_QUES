// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int helper(int initial, int end, int x, int ans, vector<int> v)
{
    if (initial == end)
    {
        if(x == ans)
            return ans;
    }
    else
    {
        // choose
        ans += v[initial];
        return helper(initial + 1, end, x, ans, v);

        // didn't choose
        ans -= v[initial];
        return helper(initial + 1, end, x, ans, v);
    }

}
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout<<helper(1,n,x,0,v);
    return 0;
}