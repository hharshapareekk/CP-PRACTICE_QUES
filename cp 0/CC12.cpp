#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin t;
    while(t--)
    {
        int N;
        cin>>N;
        string S;
        cin>>S;
        string S1,S2;
        S=S1+S2;
        for(int i=0;i<N;i++)
        {
            if(S1[i]==S2[i])
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
