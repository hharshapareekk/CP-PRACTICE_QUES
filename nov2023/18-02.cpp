//Codes Of Harsha Pareek
//Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        ll t;
        cin>>t;
        arr[i]=abs(t);
    }
    sort(arr,arr+n);
    cout<<arr[0]<<endl;
 
  return 0;
}