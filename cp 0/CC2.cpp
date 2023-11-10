#include <iostream>
using namespace std;
		//logic= first an integer s is zero then once the inputed valur for arr[i]is more than 10 s becomes s+1
int main() {
	int arr[4];
	int sum =0;
	for(int i=0;i<4;i++){ cin>>arr[i]; if(arr[i]>=10) sum++;}
	cout<<sum;
	
	return 0;
}
