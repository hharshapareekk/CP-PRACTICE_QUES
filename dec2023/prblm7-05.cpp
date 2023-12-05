//Codes Of Harsha Pareek
//Problem Statement :
#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int compareValue;
        for(int i = 0; i<str.length();i++)
        {
            if((str[i] == 'B') || (str[i] == 'b'))
            {
                int j = i;
                for(; j =0 ;j --)
                {
                    if(str[i] == 'B')
                    {
                        compareValue = str[j];
                        {
                            if((compareValue >= 65) && (compareValue <= 90))
                            {
                                str.erase(j,1);
                            }
                        }

                    }
                    else
                    {
                        if(compareValue >= 97 )
                        {
                            str.erase( j,1);
                        }
                    }
                }
            }

        }
        cout<<str<<endl;
    }
    return 0;
}