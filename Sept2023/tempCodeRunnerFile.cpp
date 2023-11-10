#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum;
        cin >> n >> sum;
        int afterValue;
        int arr[n];

        if (n > sum)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i <=n; i++)
            {
                afterValue = ((n - (float)(2 * i)) / 2);
                
                if ((sum % 2) != 0)
                {
                if(i==n)
                {
                    break;
                }
                else
                {
                    arr[i]=(ceil((float)sum /(float)n) - (float)afterValue);
                }
                
                }
                else
                {
                    if (i == (n / 2))
                    {
                        continue;
                    }
                    else
                    {
                        
                        if(((sum / n) - afterValue)!=0)
                        {
                            arr[i]=(((sum / n) - afterValue));
                        }
                        else
                        {
                            cout<<-1;
                            break;
                        }
                        
                    }
                    
                }
            }
            cout<<endl;
        }
        
    
    }

return 0;
}