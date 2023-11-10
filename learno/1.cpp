#include<bits/stdc++.h>
using namespace std;

struct student
{
    string name;
    int number;
    float height;    
};
int main()
{
    struct student harsha;
    harsha.name="harsha";
    harsha.number=10964;
    harsha.height=158;
    cout<<harsha.name;
    cout<<harsha.number;
    cout<<harsha.height;
    return 0;
}