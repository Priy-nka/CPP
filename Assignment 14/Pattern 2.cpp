
//https://leetcode.com/playground/NihYgTVS

int main() {
    int n,s=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        s+=i;
        for (int j=1;j<=s;j++)
        {
            cout<<"#";
        }
        cout<<"\n";
    }
}
