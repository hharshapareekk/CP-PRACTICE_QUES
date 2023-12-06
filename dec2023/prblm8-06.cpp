// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
int vowel(string str)
{
    int vowelCount = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowelCount++;
        }
    }
    return vowelCount;
}
bool isVowel(char ch)
{
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return true;
    }
    return false;

}


int consonant(string str)
{
    int consCount = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
            {
                consCount++;
            }
        }
    }
    return consCount;
}
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            string s;
            cin >> s;
            int total =0;
            string original = "CAPETOWN";
            int val1 = vowel(s);
            int val2 = vowel(original);
            int val3 = consonant(s);
            int val4 = consonant (original);
            if((val1 == val2) && (val3 == val4))
            {
                for(int i =0 ;i<original.length() ;i++)
                {
                    if((isVowel(s[i]) == true) && (isVowel(original[i])==true))
                    {
                        total++;
                    }
                
                }
                if(total == val1)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        return 0;
    }