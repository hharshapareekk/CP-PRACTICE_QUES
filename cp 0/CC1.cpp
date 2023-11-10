#include <bits/stdc++.h>        //SPECIALITY
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)    //while loop is used when we dk about the no. of inputs to be taken or outputs to be given 
    {               //when input no. known we use for loop
        int X,Y,Z;      //here while t-- indicates  that up until t=0 the loop will run
        cin>>X>>Y>>Z;
        if(X>Y && X>Z)
        {
            cout<<"SETTER"<<endl;
        }
        else if(Y>X && Y>Z)
        {
            cout<<"TESTER"<<endl;
        }
        else
        {
            cout<<"EDITORIALIST"<<endl;
        }
    }
        return 0;
}