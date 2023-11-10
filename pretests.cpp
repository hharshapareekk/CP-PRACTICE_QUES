#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        int count=0;
        for(int p=0;p<N;p++)
        {
            if(arr[p]==0)
            {
                count+=1;
            }
        }
        if((count/N)>0.25)
        {
            cout<<"BAD"<<endl;
        }
        else
        {
            cout<<"GOOD"<<endl;
        }
    }
    return 0;
}