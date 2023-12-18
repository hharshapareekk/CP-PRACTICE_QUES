// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findMax(int idx , int left , int weight[] , int value[] , int n)
{
    if(idx == n)
    {
        return;
    }
    if(left >= weight[idx])
    {
        return max( findMax(idx+1,left,weight,value,n), findMax(idx+1,left-weight[idx],weight,value,n) + value[idx]);
    }
    else
    {
        return findMax(idx+1,left,weight,value,n);
    }
}
int main()
{
    int n, w;
    cin >> n >> w;
    int arr[n];
    int brr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
        cin>>brr[i];
    }
    cout<<findMax(0,w,arr,brr,n);
    return 0;
}