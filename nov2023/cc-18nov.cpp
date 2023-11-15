//https://www.codechef.com/problems/CPRIVAL
#include <iostream>
using namespace std;

int main() {
	int r1,r2;
	int d1,d2;
	cin>>r1>>r2;
	cin>>d1>>d2;
    int val1= r1+d1;
    int val2=r2+d2;
	if(val1>val2)
	{
	     cout<<"Dominater"<<endl;
	}
	else if(val1<val2)
	{
	    cout<<"Everule"<<endl;
	}
	return 0;
}



//https://www.codechef.com/problems/CHESS_PAIR
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int val=(2*n-x);
	    int point= x-val;
	    if(x-val<0)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        cout<<x-val<<endl;
	    }
	}
	return 0;
}
