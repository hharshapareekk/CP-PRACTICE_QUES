#include <bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int X,A,B,C;
        cin>>X>>A>>B>>C;
        int arr[3]={A,B,C};
        sort(arr,arr+3);
        int Q=arr[0]*(X-1)+arr[1];
        {
            cout<<Q<<endl;
        }
    
        
    }
    return 0;
}