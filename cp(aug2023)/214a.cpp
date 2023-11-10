#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a,b;
    int count=0;
    for(a=0;a<=sqrt(n);a++)
    {
        b=n-a*a;
        if(a+b*b==m)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}