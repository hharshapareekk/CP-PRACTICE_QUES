#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rounds;
    cin>>rounds;
    int maxValue=0;
    int score1;
    int score2;
    int temporaryWinner;
    for(int i=0;i<rounds;i++)
    {
        cin>>score1>>score2;
        if(abs(score1-score2)>maxValue)
        {
            maxValue=abs(score1-score2);
            if(score1>score2)
            {
                temporaryWinner=1;
            }
            else
            {
                temporaryWinner=2;

            }
        }
        else
        {
            continue;
        }
    }
    cout<<temporaryWinner<<" "<<maxValue;
    return 0;
}