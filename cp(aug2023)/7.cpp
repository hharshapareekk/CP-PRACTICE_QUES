#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
        int count=0;
	    int arr[2*n];
	    for(int i=0;i<2*n;i++)
	    {
	        cin>>arr[i];
	    }
        for(int i=0;i<2*n-1;i++)
        {
            for(int j=1;j<2*n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
            }
            if(count>=3)
            {
                cout<<"NO"<<endl;
                break;
            }
        }
        if(count<3)
        {
            cout<<"YES"<<endl;
        }
	    
	}
	return 0;
}
