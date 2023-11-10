#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>  //used when we need to input lon integres since here N ranges upto 100 factorial "long long" doesnt work 
using namespace std;
using namespace boost::multiprecision;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cpp_int S=1;
        while(N>0)
        {
            S=S*N;
            N--;
        }
        cout<<S<<endl;
    }
    return 0;
}
