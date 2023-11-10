#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=1;
    for(int i=1;i<=5;i++)
    {
        int que=i;
        if(que%2!=0)
        {
            while(que!=0)
            {
                cout<<n<<" ";
                que-=1;
                n-=1;
            }
            cout<<endl;
            n=n+i;
        }
        else
        {
            int p=n+i;
            while((que!=0))
            {
                cout<<p-1<<" ";
                que-=1;
                n-=1;
                
            }
            cout<<endl;
                n=n+i;
        }
    }
}