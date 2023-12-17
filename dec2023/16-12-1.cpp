//Codes Of Harsha Pareek
//Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void helper(int row, int column , int maxRow , int maxColumn , vector<vector<int>>&a , vector<vector<int>>&b)
{
    if(row >= maxRow)
    {
        return;
    }
    if(column == maxColumn -1)
    {
    cout<<a[row][column] + b[row][column]<<" ";
    helper(row+1,0,maxRow, maxColumn, a ,b);
    }
    cout<<a[row][column] + b[row][column]<<" ";
    helper(row, column +1 ,maxRow , maxColumn , a, b);
}
int main()
{
    int row;
    int column;
    cin>>row>>column;
    vector<vector<int>>A(row, vector<int>(column)),B(row,vector<int>(column));
    int matrixB[row][column];
    for(int i = 0 ; i<row;i++)
    {
        for(int j =0 ;j<column;j++)
        {
            cin>>A[i][j];
        }
    }
    for(int i =0 ;i<row;i++)
    {
        for(int j =0;j<column;j++)
        {
            cin>>B[i][j];
        }
    }
    helper(0 , 0,row , column , A,B );
    return 0;
}