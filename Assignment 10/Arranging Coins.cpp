
//https://leetcode.com/problems/arranging-coins/submissions/

class Solution {
public:

    int arrangeCoins(int n) 
    {
        int s=1,k=n,ans=0;
        
		while(s<=k)
        {
            long long int mid=s+(k-s)/2;
            if(mid*(mid+1)/2<=n)
            {
                ans=mid;
                s=mid+1;
            }
			
            else
            {
                k=mid-1;
            }
        }
		
        return ans;
    }
};
