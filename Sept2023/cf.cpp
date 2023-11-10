#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n,k;
       cin>>n>>k;
       long long x;
       cin>>x;
       int flag=(x/k);
       long long max_sum = (n*(2*1+(n-1)*1))/2;
       if(flag>n || x>max_sum)
       {
        cout<<"NO"<<endl;
       }
       else 
       {
        cout<<"YES"<<endl;
       }

    }
    return 0;
}