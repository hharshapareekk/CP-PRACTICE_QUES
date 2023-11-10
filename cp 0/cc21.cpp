#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        int arr[3]={A,B,C};
        sort(arr,arr+3);
        cout<<arr[1]+arr[2]<<endl;
    }
    return 0;
}