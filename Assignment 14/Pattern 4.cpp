
//https://leetcode.com/playground/JBqn6YKJ

int main() {
    int n;
    cin>>n;
    for (int i=n;i>=1;i=i/2)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<"#";
        }
        cout<<"\n";
    }
}
