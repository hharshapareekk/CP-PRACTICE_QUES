// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod (ll)(1e9 + 7)
void solution()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    int max = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i = 0;i<m;i++)
    {
        cin>>b[i];
        if(b[i] > max)
        {
            max = b[i];
        }
    }
    sort(a+(n-max),a+n);
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
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