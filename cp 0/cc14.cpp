#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Testcase;
    cin>>Testcase;
    while(Testcase--)
    {
        int X1,Y1,X2,Y2;
        cin>>X1>>Y1>>X2>>Y2;
        if(X1>X2 || X1>-X2 || -X1>X2)
        {
            cout<<"ALEX"<<endl;
        }
        else if(X1<X2 || X1<-X2 ||-X1<X2)
        {
            cout<<"BOB"<<endl;
        }
        else if(X1==X2 || X1==-X2 )
        {
            cout<<"EQUAL"<<endl;
        }
    }
    return 0;
}