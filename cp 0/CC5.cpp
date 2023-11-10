#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    char arr[N+1];
    cin>>arr;
    bool chk=1;
    for(int i=0;i<N/2;i++)
    {
        if(arr[i]!=arr[N-1-i])
        chk=0;
        break;
    }
    if (chk==1)
    {
        cout<<"palindrome"<<endl;
    }
    else 
    {
        cout<<"no"<<endl;
    }
    return 0;
}