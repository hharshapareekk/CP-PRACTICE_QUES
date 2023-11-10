#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K,S=0;
        cin>>N>>K;
        int arr[N];
        
        for(i=0;i<N;i++)
        {
            cin>>arr[i];
            if(arr[i]>K)
            S=S+1;

        }
        cout<<S;
    }
    return 0;
}