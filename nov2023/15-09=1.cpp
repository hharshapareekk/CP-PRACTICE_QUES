// 15 nov 2023 - https://www.codechef.com/problems/RCT
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int temp = 0;
        int flag = 0;
        if ((x + y) % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            while ((x) > temp)
            {
                temp += 1;
                x = x - 1;
                if ((x + y) % 2 == 0 || (temp + y) % 2 == 0)
                {
                    flag = 0;
                    continue;
                }
                else
                {
                    cout << "YES" << endl;
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}