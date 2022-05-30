
//https://leetcode.com/playground/murBbuYe

#include<bits/stdc++.h>
using namespace std;

string toChar="0123456789";
string sum(string a, string b){
    string ans="";
    int i= a.size()-1;
    int j= b.size()-1;
    int carry=0;
    while(i>=0 && j>=0)
    {
        int total = (a[i]-'0') + (b[j]-'0') + carry;
        //cout<<"to add: "<<a[i]<<" "<<b[j]<<" carry: "<<carry<<"\n";
        int last_digit = total%10;
        carry = total/10;
        //cout<<"total: "<<total<<" last_digit: "<<last_digit<<" carry: "<<carry<<"\n";
        ans =ans+toChar[last_digit];
        //cout<<ans<<"\n\n\n";
        i--; j--;
    }
    
    //a has finished
    // cout<<"a: "<<a<<" b: "<<b<<"\n";
     //cout<<"i: "<<i<<" j: "<<j<<" ans: "<<ans<<"\n";
    while(j>=0){
        int total = (b[j]-'0')+carry;
        int last_digit = total%10;
        ans = ans+toChar[last_digit];
        carry = total/10;
        j--;
    }
    
    //b has finished
    while(i>=0){
        int total = (a[i]-'0')+carry;
        int last_digit = total%10;
        ans = ans+toChar[last_digit];
        carry = total/10;
        i--;
    }
    //i=1 => ans = a[1]+ans => ans = '9'+"0"=> ans= "90", i-- => i= 0
    //i=0 => ans = '9'+ans => ans= "990"
    
    if(carry>0){
        ans= ans +toChar[carry];
    }
    reverse(ans.begin(),ans.end());
   // cout<<"a: "<<a<<" b: "<<b<<" sum: "<<ans<<"\n"; 
    return ans;
}
string product(string a, int b)
{
    int carry=0;
    string ans = "";
    for(int i=a.size()-1;i>=0;i--){
        int total = (a[i]-'0')*b + carry;
        carry = total/10;
        int last_digit = total%10;
        ans=ans+toChar[last_digit];
    }
    if(carry>0) ans= ans+to_string(carry);
    reverse(ans.begin(),ans.end());
    return ans;
    
}
string multiply(string a,string b)
{
    //123, 456 => 123*6 + 123*5*10 + 123*4*100
    //            123*6 + 1230*5 + 12300*4
    string ans = "";
    return ans;
}

int main() {
    cout<<product("123",50);
}
