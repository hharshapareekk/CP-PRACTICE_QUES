#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int length;
        cin >> length;
        int arr[length] for (int i = 0; i < length; i++)
        {
            cin >> arr[i];
        }

        int sorted_arr = sort(arr, arr + length);
        int matches=0;
        for (int i = 0; i < length; i++)
        {
            if (arr[i] == sorted_arr[i])
            {
                matches+=1;
            }
            else
            {
                continue;
            }
        }
        if(matches<length)
        {
            cout<<0<<endl;
        }
        else
        {
            
        }

    }
    return 0;
}