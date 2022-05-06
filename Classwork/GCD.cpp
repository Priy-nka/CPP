#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if (a>b) swap(a,b);
	int x;
	x=b%a;
	while(x!=0)
	{
		b=a;
		a=x;
		x=b%a;
	}
	return a;
}

int main() {
	int a,b;
	cin>>a>>b;
	cout<<"GCD of "<<a<<" and "<<b<<" : "<<gcd(a,b);
	return 0;
}
