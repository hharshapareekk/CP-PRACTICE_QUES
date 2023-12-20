//Codes Of Harsha Pareek
//Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int val = k;
        int arr[n];
        for(int i =0;i<n;i++)
        {
            if(val >= 0 )
            {
                arr[i] = (n - val);
                val--;
            }
            else
            {
                arr[i] = n - i;
            }
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
    return 0;
}