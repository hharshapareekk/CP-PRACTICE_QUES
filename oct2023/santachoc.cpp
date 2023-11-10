#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int flag=0;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        if(sum<n)
        {
            cout<<"NO"<<endl;
        }
        else if(k>=1 || sum%n==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    
}
return 0;
}
//SOLUTION WE TRIED

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     int flag=0;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         for (int j = (n-1); j=n/2; j--)
//         {
//             for (int i = 0; i <n/2; i++)
//             {
//                 if (abs((arr[j] - arr[i]) > k))
//                 {
//                     arr[i] += (arr[j] / 2);
//                     arr[j] -= (arr[j] / 2);
//                 }
//             }
//         }
    
//         for(int i=0;i<n;i++)
//         {
//             if(arr[i]==0)
//             {
//                 flag++;
//             }
//         }
//         if(flag!=0)
//         {
//             cout<<"NO"<<endl;
//         }
//         else
//         {
//             cout<<"YES"<<endl;
//         }

        
//     }
//     return 0;
// }