//Codes Of Harsha Pareek
//Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,k;
    cin>>n>>k;
    float frndpaid = (float)n / ((float)(k) + (float)1);
    int finalpay = floor(frndpaid)*k ;
    cout<< n - finalpay <<endl;
    }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}