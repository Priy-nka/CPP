
//https://leetcode.com/playground/U7mi98Jf

int main() {
    int n,r;
    cin>>n;
    for (int i=n;i>0;i=i/10)
    {
        r=i%10;
        for (int j=1;j<=r;j++)
        {
            cout<<"#";
        }
        cout<<"\n";
    }
}
