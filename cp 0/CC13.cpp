#include <bits/stdc++.h>
using namespace std;
int main()   //
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int likes[N],comments[N];
        for(int i=0,i<N;i++)
        {
            cin>>likes[i];
        }
        for(int i=0,i<N;i++)
        {
            cin>>comments[i]
        }
        int maxvalue=0;
        for(i=0,i<N;i++)
        {
            if(likes[i]>likes[maxvalue])
            {
                maxvalue=i;
            }
            if(likes[i]==likes[maxvalue])
            {
                if(comments[i]>comments[maxvalue])
                {
                    maxvalue=i;
                }
            }
        }
        cout<<maxvalue+1;
    }
    return 0;
}
