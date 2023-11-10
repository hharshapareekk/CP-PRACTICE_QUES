#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%3==0 || n%5==0 || n%7==0)
        {
            cout<<"ALICE"<<endl;
        }
        else
        {
            cout<<"BOB"<<endl;
        }
    }
    return 0;
}