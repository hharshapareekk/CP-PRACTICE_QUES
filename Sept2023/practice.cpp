#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[10][10];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        cin>>arr[i][j];
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<arr[i][j];
        }
    }
     
    return 0;
}