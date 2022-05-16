
//leetcode problem

class Solution {
public:
    int minSteps(int n){
        if(n==1)  //base case
            return 0;
        
        int f = primeFactor(n);
        return minSteps(f) + n/f;
    }
    
    
    int primeFactor(int p)
    {
        for(int i=p/2; i>=1; i--)
            if(p % i == 0)
                return i;
        return 1;
    }
};
