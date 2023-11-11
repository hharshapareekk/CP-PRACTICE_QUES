
// //11 NOVEMBER 2023 (19:59)

// //DPP-1      -codechef- https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/MAX_DIFF

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int s;
        cin>>n>>s;
        if(n>=s)
        {
            cout<<s<<endl;
        }
        else
        {
            if(s%n==0)
            {
                cout<<0<<endl;
            }
            else{
                cout<<(n-(s%n))<<endl;
            }
        }
    }
    return 0;
}


//DPP-2          codechef- https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/NFS
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float u,v,a,s;
        cin>>u>>v>>a>>s;
        float v1= u*u-(2*a*s);
        float ans;
        ans=pow(v1,0.5);
        if(ans>v)
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


 //DPP 3          codeforces- https://codeforces.com/problemset/problem/1895/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int chest,key,maxTime;
        cin>>chest>>key>>maxTime;
        int var=chest+maxTime;
        if(chest>=key)
        {
            cout<<chest<<endl;
        }
        else
        {
            if(key-chest<=maxTime)
            {
                cout<<key<<endl;
            }
            else
            {
                cout<<(var+(2*(key-var)))<<endl;
            }
        }

    }
    return 0;
}
