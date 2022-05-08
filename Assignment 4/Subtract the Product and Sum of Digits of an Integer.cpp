

//leetcode problem

class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1,sum=0,dig;
        for (int i=n;i>0;i=i/10)
        {
            dig=i%10;
            pro*=dig;
            sum+=dig;
        }
        
        return (pro-sum);
    }
};
