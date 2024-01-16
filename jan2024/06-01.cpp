//Codes Of Harsha Pareek
//Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<int> ans;
    if(k>n)
    {
        cout<<"NO"<<endl;
        return;
    }
    else{
        for(int i =0 ; i<32; i++)
        {
            if(n & (1<<i))
            {
                ans.push_back(1<<i);
            }
        }
            int size = ans.size();
            if(size>k)
            {
                cout<<"NO"<<endl;
                return;
            }
            int val = 0;
            while(size<k)
            {
                while(ans[val] == 1)
                {
                    val++;
                }
                ans[val]/=2;
                ans.push_back(ans[val]);
                size++;
            }
            cout<<"YES"<<endl;
            for(int i = 0;i<k;i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        
        
    }
}
int main()
{
    solve();
    return 0;
}