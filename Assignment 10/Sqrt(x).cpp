//https://leetcode.com/problems/sqrtx/submissions/

class Solution {
public:
    int mySqrt(int x) {
        int s=0, m = INT_MAX;
        int ans=0;
        while(s<=m)
        {
            long mid=(s+m)/2;
            if(mid*mid<=x) 
            {
                ans = mid;
                s = mid+1;
            }
            else
            {
                 m = mid-1;
            }
        }
        return ans;
    }
};
