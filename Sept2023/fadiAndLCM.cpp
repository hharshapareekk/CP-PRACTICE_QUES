#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long X;
    cin >> X;
    long long A = X;
    long long B = 1;

    while ((A / 2) != 2)
    {
        if (max(A / 2, B * 2)<= max(A, B) )
        {
            A = A / 2;
            B = B * 2;
        }
        else
        {
            break;
        }
    }
    cout << A << " " << B;
    return 0;
}