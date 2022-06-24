
//https://leetcode.com/problems/binary-search/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid,high,low;
        low=0;
        high=nums.size()-1;
        while (low<=high)
        {
            mid=(low+high)/2;
            if (nums[mid]==target)
                return mid;
            if (nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        return -1;
    }
};
