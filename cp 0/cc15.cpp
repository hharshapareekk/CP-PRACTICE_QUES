#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int A,B,C;
        int arr[3];
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+3)
        A=arr[0],B=arr[1],C=arr[2];
        cout<<B+C<<endl;
    }
    return 0;
}