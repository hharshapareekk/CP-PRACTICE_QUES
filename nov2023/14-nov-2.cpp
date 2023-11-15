#include <bits/stdc++.h>
using namespace std;

bool isPrime(int val)
{
    if(val==0 || val==1)
    {
        return false;
    }
    else
    {
        for(int i=0;i<=val/2;i++)
        {
            if(val%i==0)
            {
                return false;
            }

        }
        return true;
    }
}

bool isPalindrome(int val)
{
    int sum=0;
    int r;
    temp=val
    while(val>0)
    {
        r=val%10;
        sum=(sum*10)+r;
        val=val/10;
    }
    if(temp==sum)
    {
        return true;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i=2;
        int evendig=0;
        int odddig=0;
        while(n=0)
        {
            if(isPrime(i) && isPalindrome(i))
            {
                if(i/10==0)
                {
                    odddig++;
                }
                else
                {
                    
                }
                n--;
                i++;
            }
        }
        cout<<endl;
    }
    return 0;
}