#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        float X,Y;      //here we used int earlier it was showing error..since X and Y can be decimals as well 
        cin>>X>>Y;
        if(((Y/X)*100)<107)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}