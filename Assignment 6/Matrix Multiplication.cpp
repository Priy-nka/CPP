#include<bits/stdc++.h>
using namespace std;
void matrix_product(vector<vector<int>>a,vector<vector<int>>b)
{
    vector<vector<int>>m;
    for (int i=0;i<a.size();i++)
    {
        vector<int>v(b[0].size(),0);
        for (int j=0;j<b[0].size();j++)
        {
            int sum=0;
            for (int k=0;k<b.size();k++)
            {
            sum+=a[i][k]*b[k][j];
            }
            v[j]=sum;
        }
        m.push_back(v);
    }
    for (int p=0;p<a.size();p++)
    {
        for (int q=0;q<b[0].size();q++)
        {
            cout<<m[p][q]<<" ";
        }
        cout<<"\n";
    }
}


int main() {
    vector<vector<int>>m1;
    vector<vector<int>>m2;
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    if (c1!=r2)
    {
        cout<<"Invalid input!";
    }
    else
    {
        for (int i=0;i<r1;i++)
        {
            vector<int>a1(c1,0);
            for (int j=0;j<c1;j++)
            {
                int temp1;
                cin>>temp1;
                a1[j]=temp1;
            }
            m1.push_back(a1);
        }
        for (int k=0;k<r2;k++)
        {
            vector<int>a2(c2,0);
            for (int l=0;l<c2;l++)
            {
                int temp2;
                cin>>temp2;
                a2[l]=temp2;
            }
            m2.push_back(a2);
        }
        matrix_product(m1,m2);
    }
    return 0;
}
