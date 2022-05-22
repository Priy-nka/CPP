
//https://www.hackerrank.com/challenges/drawing-book/problem?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int pageCount(int n, int p) {
    int front=0,back=0;
    for (int i=1;i<p;i=i+2)
    {
        front+=1;
    }
    if (n%2==0)
    {
        for (int j=n;j>p;j=j-2)
        {
            back+=1;
        }
    }
    else
    {
        for (int j=n-1;j>p;j=j-2)
        {
            back+=1;
        }
    }
    if (front>back)
        return back;
    else
        return front;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
