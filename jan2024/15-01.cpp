//Codes Of Harsha Pareek
//Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod (ll)(1e9 + 7)
void solution()
{
    string x;
    string y;
    cin>>x>>y;
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    int positionx = 0;
    int positiony = 0;
    for(int i = 0;i<y.length();i++)
    {
        if(y[i] == '1')
        {
            positiony = i;
            break;
        }
    }
    for(int i = positiony;i<x.length();i++)
    {
        if(x[i] == '1')
        {
            positionx = i;
            break;
        }
    }
    if(positionx>=positiony)
    {
        cout<<positionx-positiony;
        cout<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    
    return 0;
}