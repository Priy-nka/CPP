
//https://leetcode.com/problems/first-bad-version/submissions/

class Solution {
public:
    int firstBadVersion(int n) 
    {
        int low=1,high=n,fb=-1;
        while(low <= high)
        {
            int mid=low + (high-low)/2;
            if(isBadVersion(mid))
            {
                fb=mid;
                high=mid-1;
            }
            else if(!isBadVersion(mid))
                low=mid+1;
        }
        return fb;
    }
};
