

//leetcode problem

class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        for (int i=num;i>0;i=i/10)
        {
            sum+=i%10;
        }
        if ((sum/10)!=0)
            return addDigits(sum);
        else
            return sum;
    }
};
