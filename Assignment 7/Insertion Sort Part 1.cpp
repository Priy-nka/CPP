
//hackerrank problem

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


void insertionSort1(int n, vector<int> arr) {
    int last=arr[n-1];
    for (int i=n-2;i>=0;i--)
    {
        if (arr[i]>last)
        {
            arr[i+1]=arr[i];
            for (int j=0;j<n;j++)
            {
                cout<<arr[j]<<" ";
            }
            cout<<"\n";
        }
        if (i==0)
          {
            arr[i]=last;
            for (int l=0;l<n;l++)
            {  
                cout<<arr[l]<< " ";
            }
            break;
        }
      else
        {
            arr[i+1]=last;
            for (int k=0;k<n;k++)
            {
                cout<<arr[k]<<" ";
            }  
            break;
        }
