// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        for (int i = 1; i <= 8; i++)
        {
            string stri = to_string(i);
            string final_ans = (str[0] + stri);
            if (final_ans == str)
            {
                continue;
            }
            else
            {
                cout << final_ans << endl;
            }
        }
        for(int i= 1;i<=8;i++)
        {
            
            int n = i + 96;
            char final_1 = char(n);
            string str2;
            str2 = final_1;
            string answer = str2 + str[1];
            if (answer == str)
            {
                continue;
            }
            else
            {
                cout << answer<< endl;
            }
        }

        
    }
    return 0;
}