#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long X;
        cin>>X;
        if(X<20)
        {
            cout<<X<<endl;
        }
        else
        {
            cout<<X%20<<endl;
        }
    }
    return 0;
}