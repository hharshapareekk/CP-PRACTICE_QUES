#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    if((N-M)/2==0 || (M-N)/2==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}