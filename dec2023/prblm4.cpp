//Codes Of Harsha Pareek
//Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i!=0)
            {
                if(arr[i]%2!=0 || arr[i-1]%2!=0)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}