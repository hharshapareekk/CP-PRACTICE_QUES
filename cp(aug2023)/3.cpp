#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%2!=0 )
        {
           if(c!=0)
                cout<<"First"<<endl;
            else
            {
                if(a>b)
                {cout<<"First"<<endl;}
                else{
                    cout<<"Second"<<endl;
                }
            }
    
        }
        else
        {
            if(c!=0)
                {cout<<"Second"<<endl;}
            else
            {
                if(a>b)
                {cout<<"First"<<endl;}
                else
                {
                    cout<<"Second"<<endl;
                }
            }
        }
    }
    return 0;
}