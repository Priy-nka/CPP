
//https://leetcode.com/playground/ExpLp8Nt

string add(string a,string b)
{
    if (b.size()>a.size())
    {
        reverse(a.begin(),a.end());
        for (int i=0;i<(b.size()-a.size());i++)
        {
            a+="0";
        }
        reverse(a.begin(),a.end());
        int len=b.size()-1;
        string num="";
        int carry=0;
        for (int k=len;k>=0;k--)
        {
            if (k==0 && carry!=0)
            {
                string num2=to_string(((a[k]-'0')+(b[k]-'0')+carry));
                reverse(num2.begin(),num2.end());
                num+=num2;
            }
            else
            {
            num+=to_string(((a[k]-'0')+(b[k]-'0')+carry)%10);
            carry=((a[k]-'0')+(b[k]-'0'))/10;
            }
        }
        reverse(num.begin(),num.end());
        return num;
    }
    else
    {
        reverse(b.begin(),b.end());
        for (int i=0;i<(a.size()-b.size());i++)
        {
            b+="0";
        }
        reverse(b.begin(),b.end());
        int len=a.size()-1;
        string num="";
        int carry=0;
        for (int k=len;k>=0;k--)
        {
            if (k==0 && carry!=0)
            {
                string num1=to_string(((b[k]-'0')+(a[k]-'0')+carry));
                reverse(num1.begin(),num1.end());
                num+=num1;
            }
            else
            {
            num+=to_string(((b[k]-'0')+(a[k]-'0')+carry)%10);
            carry=((b[k]-'0')+(a[k]-'0'))/10;
            }
        }
        reverse(num.begin(),num.end());
        return num;
    }
}
int main() {
    if(add("123","234")!= "357"){
        cout<<"wrong answer: 1\n";
    }
 
    if(add("123","238")!= "361"){
        cout<<"wrong answer: 2\n";
    }
 
    if(add("123","888")!= "1011"){
        cout<<"wrong answer: 3\n";
    }
 
    if(add("123","88")!= "211"){
        cout<<"wrong answer: 4\n";
    }
    return 0;
}
