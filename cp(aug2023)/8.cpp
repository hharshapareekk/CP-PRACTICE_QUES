#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int p=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i-1]>arr[i])
        {
            p+=(arr[i-1]-arr[i]-1);
            arr[i]=arr[i]+p;
        }
        else
        {
            continue;
        }
    }
    cout<<p;
    return 0;
}