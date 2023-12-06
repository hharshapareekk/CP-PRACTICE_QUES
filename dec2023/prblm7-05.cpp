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
        int compareValue;
        int charValue;
        for (int i = 1; i < str.length(); i++)
        {
                int j = (i - 1);
                for (; j = 0; j--)
                {
                    if (str[i] == 'B')
                    {
                        charValue = str[j];
                        compareValue = int(charValue);
                        {
                            if ((compareValue >= 65) && (compareValue <= 90))
                            {
                                str.erase(j, 1);
                            }
                        }
                    }
                    else if(str[i] == 'b')
                    {
                        charValue = str[j];
                        compareValue = int(charValue);
                        if (compareValue >= 97)
                        {
                            str.erase(j, 1);
                        }
                    }
                    else
                    {
                        continue;
                    }
                }
        }
        cout << str << endl;
    }
    return 0;
}