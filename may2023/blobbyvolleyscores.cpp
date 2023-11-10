#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	        int n;
	        cin>>n;
	        string s;
	        cin>>s;
	        int a=0;
	        int b=0;
	         if(s[0]=='A')
	          a++;
	        for(int i=0;i<n;i++){
	          if(s[i]=='A' && s[i+1]=='A')
	          a++;
	       else if(s[i]=='B' && s[i+1]=='B')
	           b++;
	        }    
	        cout<<a<<" "<<b<<endl;
	}
	return 0;
}
