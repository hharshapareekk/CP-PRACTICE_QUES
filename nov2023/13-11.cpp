// 13/11/2023


//DPP-1     - Codechef: https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/WEIGHTBL
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w1,w2,x1,x2,M;
        cin>>w1>>w2>>x1>>x2>>M;
        int minPoss=x1*M;
        int maxPoss=x2*M;
        int inc=w2-w1;
        if(minPoss<=inc && inc<=maxPoss)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}