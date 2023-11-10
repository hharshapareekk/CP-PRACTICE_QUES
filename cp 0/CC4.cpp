#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,arr[N],K,S=0;
        cin>>arr[N];
        for(int i=0;i<N;i++)
        {
            if((arr[i]/K)==0)
            {S++;}
            else 
            {cout<<" ";}
        }
        cout<<S;
    }
    
    return 0;
}