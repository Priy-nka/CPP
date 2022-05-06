#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


void plusMinus(vector<int> arr) {
    float pos=0,neg=0,zero=0;
    for (int i=0;i<arr.size();i++)
    {
        if (arr[i]>0)
            pos+=1;
        else if (arr[i]<0)
            neg+=1;
        else {
            zero+=1;
        }
    }
    pos= (float)(((int) ((pos/arr.size())*1000000)))/1000000;
    neg= (float)(((int) ((neg/arr.size())*1000000)))/1000000;
    zero= (float)(((int) ((zero/arr.size())*1000000)))/1000000;
    cout<<pos<<endl;
    cout<<neg<<endl;
    cout<<zero;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }
