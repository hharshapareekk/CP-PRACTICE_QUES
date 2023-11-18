//Codes Of Harsha Pareek
//Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        float a,b,c;
        cin>>a>>b>>c;
        float avg =(float)(a+b)/(float)2;
        float mx=max((float)a,(float)b);
        float ans = (ceil)((float)(mx-avg)/(float)c);
        cout<<ans<<endl;
    }
  return 0;
}