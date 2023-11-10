#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int player1[n],player2[n]; //arrays-> points of player1 and player2.

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;

        player1[i] = x;
        player2[i] = y;
    }

    int player1maxdiff=-1,player2maxdiff=-1; // player1maxdiff->if player 1 wins, then the maximum difference with which it will win.

    int player1currscore=0,player2currscore=0;
    for(int matchno=0;matchno<n;matchno++)
    {
        player1currscore += player1[matchno];
        player2currscore += player2[matchno];

        if(player1currscore >= player2currscore)
        {
            int currdiff = player1currscore - player2currscore;

            // if(player1maxdiff < currdiff) player1maxdiff = currdiff;
            player1maxdiff = max(player1maxdiff,currdiff);
        }
        else
        {
            int currentdiff = player2currscore - player1currscore;
            player2maxdiff = max(player2maxdiff,currentdiff);
        }
    }

    // player1maxdiff -> max difference possible when player 1 wins.

    if(player1maxdiff>player2maxdiff)
    {
        cout<<"1"<<" "<<player1maxdiff<<"\n";
    }
    else
    {
        cout<<"2"<<" "<<player2maxdiff<<"\n";
    }
    return 0;
}