// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string ab;
        cin >> ab;
        int n =ab.size();
        for(int  i = 1;i<n;i++)
        {
            string  a = ab.substr(0,i);
            string b = ab.substr(i,n-i);
            int num1 = stoi(a);
            int num2 = stoi(b);
            if( (a[0] != '0') && (b[0] != '0') && (num1 < num2) && (a+b == ab) )
            {
                cout<<a<<" "<<b<<endl;
                return;
            }
        }
        cout<<-1<<endl;
        return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}