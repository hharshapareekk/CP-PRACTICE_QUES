#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Testcases;
    cin>>Testcases;
    while(Testcases--)
    {
        int N;
        cin>>N;
        int M=0;
            int Z=0;
        int stone[N];
        for(int i=0;i<N;i++)
        {
            cin>>stone[i];
        }
        sort(stone,stone+N,greater<int>());
        for(int j=0;j<N;j=j+2)
        {
            
            if(stone[j]!=stone[j+1])
            {
                M+=1;
            }
            else 
            {
                Z+=1;
            }
        }
        if(M>Z)
        {
            cout<<"Marichka"<<endl;
        }
        else
        {
            cout<<"Zenyk"<<endl;
        }

    }
    return 0;
}