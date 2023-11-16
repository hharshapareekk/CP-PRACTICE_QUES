// 16 nov '23 - cf: https://codeforces.com/contest/1894
//jo candidate last khelega vohi winner rhega so string ka last ele would be the answer


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
        string s;
        cin>>s;
        cout<<s.back()<<endl;
    }
    return 0;
}