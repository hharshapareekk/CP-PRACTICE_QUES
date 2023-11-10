#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string a[n];
        cin>>n;
        int count=0;
        char res;
        long long mod=INT_MAX+7;
        int ans=1;
        for(int i=2;i<n;i++)
        {
            //and
            if(a[i-1]=='1' && a[i-2]=='1')
            {
                res='1';
            }
            else
            {
                res='0';
            }
            if(res==a[i])
            {
                count++;
            }

            //or
            if(a[i-1]=='1' || a[i-2]=='1')
            {
                res='1';
            }
            else
            {
                res='0';
            }
            if(res==a[i])
            {
                count++;
            }
            //xor
            if((a[i-1]=='1' && a[i-2]=='0') || (a[i-1]=='0' && a[i-2]=='1'))
            {
                res='1';
            }
            else
            {
                res='0';
            }
            if(res=a[i])
            {
                count++;
            }

        ans=(1LL*count*ans)%mod;

        }
        cout<<ans<<endl;
    }
    return 0;
}