
//leetcode problem

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int len=0,rem;
        long int rev=0;
        for (int i=abs(x);i>0;i=i/10)
        {
            len+=1;
        }
        for (int j=abs(x);j>0;j=j/10)
        {
            rem=j%10;
            rev+=pow(10,len-1)*rem;
            len--;
        }
        if (x<0)
            rev=-1*rev;
        if (rev>(pow(2,31)-1) || rev<(-(pow(2,31))))
            return 0;
        else
            return rev;
    }
};
