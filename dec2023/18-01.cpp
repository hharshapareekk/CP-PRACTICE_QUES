//Codes Of Harsha Pareek
//Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int helper(int start, int end , int maxR,int maxC,vector<vector<int>>&v)
{
    if(start == maxR-1 && end == maxC-1)
    {
        return v[start][end];
    }
    if(start < maxR -1)
    {
        if(end < maxC -1)
            return max(helper(start,end+1,maxR,maxC,v)+ v[start][end], helper(start+1,end,maxR,maxC,v)+ v[start][end] );
        else
            return helper(start+1,end,maxR,maxC,v) + v[start][end];
    }
    else
    {
        return helper(start,end+1,maxR,maxC,v) + v[start][end];
    }

}
int main()
{
    int n , m;
    cin>>n>>m;
    vector<vector<int>>v(n ,vector<int>(m));
    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    cout<<helper(0,0,n,m,v);
    return 0;
}