#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{

    if (n <= 1)
        return false;
 
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main() {
	int t; cin>>t;
	while(t--){
	    int h; cin>>h;
	    
	    if(isPrime(h)){
	        cout<<1<<endl;
	        continue;
	    }
	    int count = 0;
	    int i =0;
	    while(h>0){
	        
	        if(isPrime(h)){
	            count++;
	            break;
	        }
	        h -= pow(2,i);
	        i++;
	        count++;
	    }
	    if(h<0) cout<<-1<<endl;
	    else cout<<count<<endl;
	}
	return 0;
}
