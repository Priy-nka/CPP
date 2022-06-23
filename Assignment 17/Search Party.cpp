
//https://leetcode.com/playground/gPTPfqnj

#include<bits/stdc++.h>
using namespace std;

bool isTargetPresent(vector<int>A, int target){
    //returns true if target is present in A else
    int len=A.size();
    for (int i=0;i<len;i++)
    {
        if (A[i]==target)
            return true;
    }
    return false;
}

bool isTargetPresentIn2DVector(vector<vector<int> >A, int target){
    //returns true if target is present in A
    int r=A.size(),c=A[0].size();
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            if (A[i][j]==target)
                return true;
        }
    }
    return false;
}
bool isTragetPresentInRow(vector<vector<int> >A, int target, int r){
    //returns true if target is present in row r of A then returns true else return false;
    int c=A[r].size();
    for (int i=0;i<c;i++)
    {
        if (A[r][i]==target)
            return true;
    }
    return false;
}

bool isTragetPresentInCol(vector<vector<int> >A, int target, int c){
    //returns true if target is present in column c of A then returns true else return false;
    int r=A.size();
    for (int i=0;i<r;i++)
    {
        if (A[i][c]==target)
            return true;
    }
    return false;
}


int main() 
{
    vector<int>v1={12,45,87,2,4,5,6,8,9};
    vector<vector<int>>v2={{23,56,78,97,34},{48,31,52,1,6},{43,21,6,4,8}};
    cout<<isTargetPresent(v1, 4)<<endl;
    cout<<isTargetPresentIn2DVector(v2,48)<<endl;
    cout<<isTragetPresentInRow(v2,6,2)<<endl;
    cout<<isTragetPresentInCol(v2, 31, 1);
    return 0;
}
