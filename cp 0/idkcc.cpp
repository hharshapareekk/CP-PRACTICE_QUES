#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Testcases;
    cin>>Testcases;
    while(Testcases--)
    {
        int A,B,C;          //A=ANNA B=BOB C=CLAUDIO
        cin>>A>>B>>C;
        //anna-bob , bob-claudio , anna-claudio
        if(A>B && B>C)
        {
            A=A-B-C;
            B=-1*C;
            C=-1*C;
        }
        else if(A>C && C>B)
        {
            A=0;
            B=0;
        }

    }
    return 0;
}