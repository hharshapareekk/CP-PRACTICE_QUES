// 12/11/2023
//DPP-1 - Codechef: https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/CHFRICH

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,X;
        cin>>A>>B>>X;
        cout<<(B-A)/X<<endl;
    }
    return 0;
}


//DPP-2 codechef: https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/PROGLANG

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,a1,b1,a2,b2;
        cin>>a>>b>>a1>>b1>>a2>>b2;
        if(a+b==a1+b1 && (a==a1 || a==b1) && (b==a1 || b==b1))
        {
            cout<<1<<endl;
        }
        else if(a+b==a2+b2 && (a==b2 || a==a2) && (b==b2 || b==a2))
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}