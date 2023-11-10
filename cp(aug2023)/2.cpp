#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int length_A;
        cin>>length_A;
        int length_B;
        int length_C;
        int array_B[length_B];
        int array_C[length_C];
        int matches=0;
        int array_A[length_A];

        for(int i=0;i<length_A;i++)
        {
            cin>>array_A[i];
        }
        for(int i=0;i<length_A;i++)
        {
            if(array_A[i]==array_A[i+1])
            {
                matches+=1;
            }
            else{
                continue;
            }
        }
        if(matches==length_A-1)
        {
            cout<<-1<<endl;
        }
        else{
            sort(array_A,array_A+length_A);
            for(int i=0;i<length_A-1;i++)
            {
                for(int j=1;j<length_A;j++)
                {if(array_A[i]==array_A[j])
                {
                    array_B+=array_A[i]+array_A[j];
                    array_A-=array_A[i];
                }     
                }    
            }
            array_C=array_A;
            length_B=(sizeof(array_B)/sizeof(array_B[0]));
            length_C=(sizeof(array_C)/sizeof(array_C[0]))
            cout<<length_B<<" "<<length_C<<endl<<array_B<<endl<<array_C<<endl;
        }

    }
    return 0;
}