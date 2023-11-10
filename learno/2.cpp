#include <bits/stdc++.h>
using namespace std;

// struct student
//     {
//         string name;
//         int number;
//         float result;
//     };
    union price
    {
        char showroom;
        int shopnum;
        string company;
    };
    int main()
    {
        union price m1;
        m1.company="LOUIS VITTON";
    cout<<m1.company;
        // struct student STUDENT;
        // STUDENT.name="HARSHA";
        // STUDENT.number=10964;
        // STUDENT.result=7.41;
        // cout<<STUDENT.name<<endl;
        // cout<<STUDENT.number<<endl;
        // cout<<STUDENT.result<<endl;
        return 0;

        
    }
