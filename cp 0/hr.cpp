#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X;
        int N;
        cin>>X;
        int S=N;
        for(N<X;N=0;N--)
        {
            if(S==N)
            {
                cout<<S<<endl;
            }
            
            else
            {
                S==N-(N-1);
            }
            cout<<S<<endl;
        }
    }
    return 0;
}