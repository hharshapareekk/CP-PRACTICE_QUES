#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<31;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"       ";

    {
       int  arr[3][3];
       {
        for(int a=0;a<3;a++)
        {
            for(int b=0;b<3;b++)
            {
                cin>>arr[a][b];
            }

        }
        
        for(int a=0;a<3;a++)
        {
            for(int b=0;b<3;b++)
            {
                cout<<arr[a][b]<<" ";
            }

        }
        cout<<endl;1
       }
    }
    return 0;
}