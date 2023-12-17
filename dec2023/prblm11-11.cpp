// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int factorial(int n)
{
    if (n==1)
        return 1;
    return n*factorial(n-1);
    
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}