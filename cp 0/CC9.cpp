#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    T=1;
    while(T--)
    {
        int N,A;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        int arr[A];
        cin>>arr[A]; //change.
        int P=0;
        int Q=0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<A;j++)
            {
                if(arr[i]>arr[j])
                {
                    P++;
                }
                else
                {
                    Q++;
                }
            
                if(P>Q)
                {cout<<"1"<<" "<<max(arr[N],arr[A]);}
                else 
                {cout<<"2"<<" ";}
            }
        }
        
    }
}