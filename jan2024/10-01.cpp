//Codes Of Harsha Pareek
//Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod (ll)(1e9 + 7)
void solution()
{
    int n,x,y;
    cin>>n>>x>>y;
    int count = 0;
    while(n>=0 && x>=0 && y>=0)
    {
        if(x -1 >=0 && y - 3 >=0)
        {
            count++;
            x--;
            y-=3;
            n--;
        }
        else if(x - 2 >=0)
        {
            count++;
            x-=2;
            n--;
        }

        if(count==n)
        {
            cout<<"YES"<<endl;
            return;
        }
        
    }
    cout<<"NO"<<endl;
    return;
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