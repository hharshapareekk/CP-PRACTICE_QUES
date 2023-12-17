//Codes Of Harsha Pareek
//Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int fn(int n)
{
    if( n ==1)
    {
        return 1;

    }
    if(n%2 ==0)
    {
        return fn(n/2)+1;
    }
    else
    {
        return fn(3*n+1)+1;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<fn(n)<<endl;
    return 0;
}