#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X,Y,Z,T;
    cin>>X>>Y>>Z>>T;
    int P;
    P=X/T;
    int value_1=trunc(P);
    if(Z*Y>value_1)
    {
        cout<<value_1;
    }
    else
    {
        cout<<Z*Y;
    }
    return 0;
}