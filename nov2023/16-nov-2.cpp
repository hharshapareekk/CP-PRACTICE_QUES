//dpp 02 16 nov '23 - https://codeforces.com/contest/1881/problem/A


#include <bits/stdc++.h>                //error in the code ;-;
using namespace std;

bool substring(string x,string s)
{
    if(x.find(s)==true)
    {
        return true;
    }
}
int main()
{
    int n,m;
    cin>>n>>n;
    string x;
    string s;
    cin>>x>>s;
    int flag=1;
    while(substring(x,s)==false)
    {
        x+=x;
        flag++;
        if(flag>5)
        {
            cout<<-1<<endl;
            break;
        }
    }
    if(flag<5)
    {
        cout<<flag<<endl;
    }

    return 0;
}