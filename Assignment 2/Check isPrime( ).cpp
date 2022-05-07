

//Leetcode Problem


#include<bits/stdc++.h>
using namespace std;

bool isPrime(int a){
    if (a==0 || a==1)
        return 0;
    else
    {
        for (int i=2;i<=a/2;++i)
        {
            if (a%i==0){
                return 0;
                break;
            }
        }
    }
    return 1;
}
int main() {
    for(int i=1;i<30;i++){
         if (isPrime(i)){
            cout<<"the number "<<i<<" is prime\n";
         }
         else{
            cout<<"the number "<<i<<" is not prime\n";
         }   
    }
}
